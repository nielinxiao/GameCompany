using Sirenix.OdinInspector;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class PersonUIElement : UIFormBase
{
    public Transform PersonRoot;
    public Transform NumberRoot;
    public Sprite GoWork;
    public Sprite GoOffWork;
    [BoxGroup("Panel"),ChildGameObjectsOnly]
    public GameObject Panel_PersonList;
    [BoxGroup("Panel"), ChildGameObjectsOnly]
    public GameObject Panel_PersonNumber;
    [BoxGroup("Panel"), ChildGameObjectsOnly]
    public GameObject Panel_Struct;
    [BoxGroup("Panel"), ChildGameObjectsOnly]
    public GameObject Panel_GiveMoney;
    [BoxGroup("Panel"), ChildGameObjectsOnly]
    public GameObject Panel_Stock;
    
    protected override void OnOpen()
    {
        base.OnOpen();
        StaffsSinger.Instance.Reresh += Refresh;
        if(obejectPool==null)
        {
            obejectPool = new GameObejectPool(10, ConfigUtils.UI_Config.PersonElement, PersonRoot, PersonReseter);
            numberPool = new GameObejectPool(10, ConfigUtils.UI_Config.PersonNumber, NumberRoot, NumberReseter);
        }
        SetUp();
    }
    public void AllGoWork()
    {
        foreach (var person in StaffsSinger.Instance.staffDatas)
        {
            switch (person.staffState) 
            {
                case StaffState.HappyWorking:
                case StaffState.TiredWork:
                case StaffState.LittleTiredWork:
                case StaffState.Working:
                    break;
                default:
                    StaffsSinger.Instance.ChangePlayerState(person, StaffState.LittleTiredWork);
                    break;
            }
        }
    }
    public void TimeCallBack(TextMeshProUGUI text,StaffData staff)
    {
        text.text = staff.workingTimer.ToString();
    }
    private void OnDestroy()
    {
        obejectPool.DestoryPool();
    }
    protected override void OnClose()
    {
        base.OnClose();
        StaffsSinger.Instance.staffCallBack.Clear();
        StaffsSinger.Instance.Reresh -= Refresh;
        Delete();
    }
    private void Refresh()
    {
        Delete();
        StaffsSinger.Instance.staffCallBack.Clear();
        SetUp();
    }
    public List<GameObject>PersongameObjects = new List<GameObject>();
    public List<GameObject> NumbergameObjects = new List<GameObject>();
    GameObejectPool obejectPool;
    GameObejectPool numberPool;
    public GameObject PersonReseter(GameObject gameObject)
    {
        gameObject.transform.Find("Work").GetComponent<Button>().onClick.RemoveAllListeners();
        gameObject.transform.Find("Remove").GetComponent<Button>().onClick.RemoveAllListeners();
        gameObject.transform.Find("Give").GetComponent<Button>().onClick.RemoveAllListeners();
        gameObject.SetActive(false);
        return gameObject;
    }
    public GameObject NumberReseter(GameObject gameObject)
    {
        gameObject.SetActive(false);
        return gameObject;
    }
    private void SetUp()
    {
        List<StaffData>datas= StaffsSinger.Instance.staffDatas;
        foreach(var data in datas)
        {
            GameObject gameObject = obejectPool.GetValue();
            GameObject number= numberPool.GetValue();
            number.SetActive(true);
            number.transform.Find("PersonName").GetComponent<TextMeshProUGUI>().text = data.Name;
            number.transform.Find("workTime").GetComponent<TextMeshProUGUI>().text = data.workingTimer.ToString();
            number.transform.Find("hopeTime").GetComponent<TextMeshProUGUI>().text = data.HopeWorkingTime.ToString();
            number.transform.Find("money").GetComponent<TextMeshProUGUI>().text = data.Money.ToString();
            number.transform.Find("save").GetComponent<TextMeshProUGUI>().text = data.SaveMoney.ToString();
            MoneySinger.Instance.TimeCallBack.Add(
                data,
                 ()=>TimeCallBack(number.transform.Find("workTime").GetComponent<TextMeshProUGUI>(), data)
                );
            gameObject.SetActive(true);
            NumbergameObjects.Add(number);
            PersongameObjects.Add(gameObject);
            StaffsSinger.Instance.staffCallBack.Add(data, (sta) => StateCallBack(gameObject, sta));
            StateCallBack(gameObject, data.staffState);
            gameObject.transform.Find("PersonName").GetComponent<TextMeshProUGUI>().text = data.Name;
            switch (data.staffState)
            {
                case StaffState.HappyWorking:
                case StaffState.Working:
                case StaffState.LittleTiredWork:
                case StaffState.TiredWork:
                    gameObject.transform.Find("Work").GetComponent<Image>().sprite = GoOffWork;
                    gameObject.transform.Find("Work").GetComponentInChildren<TextMeshProUGUI>().text = "下班";
                    break;
                default:
                    gameObject.transform.Find("Work").GetComponent<Image>().sprite = GoWork;
                    gameObject.transform.Find("Work").GetComponentInChildren<TextMeshProUGUI>().text = "上班";
                    break;
            }
            gameObject.transform.Find("WorkState").GetComponent<TextMeshProUGUI>().text = StaffsSinger.GetStaffStateString(data.staffState);
            gameObject.transform.Find("Work").GetComponent<Button>().onClick.AddListener(() => OnClickWork(data));
            gameObject.transform.Find("Remove").GetComponent<Button>().onClick.AddListener(() => OnClickRemove(data));
            gameObject.transform.Find("Give").GetComponent<Button>().onClick.AddListener(() => MoneySinger.Instance.GiveMoney(data));
        }
    }
    public void StateCallBack(GameObject gameObject,StaffState staffState)
    {
        gameObject.transform.Find("WorkState").GetComponent<TextMeshProUGUI>().text = StaffsSinger.GetStaffStateString(staffState);
        switch (staffState)
        {
            case StaffState.HappyWorking:
            case StaffState.TiredWork:
            case StaffState.LittleTiredWork:
            case StaffState.Working:
                gameObject.transform.Find("Work").GetComponent<Image>().sprite = GoOffWork;
                gameObject.transform.Find("Work").GetComponentInChildren<TextMeshProUGUI>().text = "下班";
                break;
            default:
                gameObject.transform.Find("Work").GetComponent<Image>().sprite = GoWork;
                gameObject.transform.Find("Work").GetComponentInChildren<TextMeshProUGUI>().text = "上班";
                break;
        }
    }
    public void ClickClose()
    {
        transform.parent.GetComponent<GameMainMenuUI>().ClickPersonList();
    }
    private void Delete()
    {
        foreach(var data in PersongameObjects)
        {
            obejectPool.PutValue(data);
        }
        foreach(var data in NumbergameObjects)
        {
            numberPool.PutValue(data);
        }
        MoneySinger.Instance.TimeCallBack.Clear();
    }
    [SerializeField]
    public enum ButtonState
    {
        PersonList=0,
        PersonNumber=1,
        MoneyStruct=2,
        LendMoney=3,
        Stock=4,
    }
    public void ButtonDownState(int state)
    {
        ButtonState buttonState=(ButtonState)state;
        Panel_PersonList.SetActive(false);
        Panel_PersonNumber.SetActive(false);
        Panel_Stock.SetActive(false);
        Panel_Struct.SetActive(false);
        Panel_GiveMoney.SetActive(false);
        switch (buttonState)
        {
            case ButtonState.PersonList:
                Panel_PersonList.SetActive(true);
                break;
            case ButtonState.PersonNumber:
                Panel_PersonNumber.SetActive(true);
                break;
            case ButtonState.MoneyStruct:
                Panel_Struct.SetActive(true);
                break;
            case ButtonState.Stock:
                Panel_Stock.SetActive(true);
                break;
            case ButtonState.LendMoney:
                Panel_GiveMoney.SetActive(true);
                break;
        }
    }
    private void OnClickWork(StaffData staffData)
    {
        switch (staffData.staffState)
        {
            case StaffState.HappyWorking:
            case StaffState.TiredWork:
            case StaffState.LittleTiredWork:
            case StaffState.Working:
                StaffsSinger.Instance.ChangePlayerState(staffData,StaffState.GetOffWork);
                break;
            case StaffState.Holiday:
            case StaffState.WasteTime:
                StaffsSinger.Instance.ChangePlayerState(staffData, StaffState.TiredWork);
                break;
            case StaffState.GetOffWork:
                StaffsSinger.Instance.ChangePlayerState(staffData, StaffState.LittleTiredWork);
                break;
        }
    }
    private void OnClickRemove(StaffData staffData)
    {
        StaffsSinger.Instance.RemoveStaff(staffData);
    }
}
