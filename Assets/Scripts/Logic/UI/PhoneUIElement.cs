using Newtonsoft.Json;
using Sirenix.OdinInspector;
using Sirenix.Serialization;
using System;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Rendering;
using UnityEngine.UI;
using static AIDialog;

public class PhoneUIElement : UIFormBase
{
    [BoxGroup("All")]
    public GameObject Dialog;
    [BoxGroup("All")]
    public GameObject DialogList;
    [BoxGroup("All")]
    public AipController aipController;
    [BoxGroup("All")]
    public Transform DialogRoot;
    [BoxGroup("All")]
    public Transform Dialog_Person_Root;
    [BoxGroup("All")]
    [NonSerialized,OdinSerialize]
    private Dictionary<string,List<message>>messages=new Dictionary<string, List<message>>();
    [BoxGroup("All")]
    [NonSerialized,OdinSerialize]
    private Dictionary<string, bool> mess_Boolen=new Dictionary<string, bool>();
    [BoxGroup("All")]
    public string currentName;
    GameObejectPool pool;
    GameObejectPool buttonPool;
    [BoxGroup("All")]
    List<GameObject> gameObjects=new List<GameObject>();
    public const string Phone_AI = "��ְ��:";
    public const string Phone_User = "��:";
    [BoxGroup("Part2")]
    public Sprite AIBackGround;
    [BoxGroup("Part2")]
    public Sprite UserBackGround;
    [BoxGroup("Part2")]
    public Button Text_Button;
    [BoxGroup("Part2")]
    public TMP_InputField inputField;
    [BoxGroup("Part2")]
    public TextMeshProUGUI UserName;
    [BoxGroup("Part2")]
    public Scrollbar Verscrollbar;
    public Dictionary<string,Action<string>>EndCheck=new Dictionary<string,Action<string>>();
    private void Start()
    {
        aipController.CallBack += UserCallBack;
    }
    private GameObject Reseter(GameObject gameObject)
    {
        gameObject.SetActive(false);
        gameObject.transform.localScale = Vector3.one;
        return gameObject;
    }
    AudioSystem.AudioPlayer messagePlayer;
    ABFrameWorlk.Resoure resoure;
    protected override void OnOpen()
    {
        base.OnOpen();
        if (pool == null)
            pool = new GameObejectPool(10, ConfigUtils.UI_Config.ChatLog, DialogRoot, Reseter);
        if (buttonPool == null)
            buttonPool = new GameObejectPool(10, ConfigUtils.UI_Config.NameButton, Dialog_Person_Root, Reseter);
        messagePlayer = GameRoot.audioSystem.GeneratedAudioPlayer(ConfigUtils.AudioClip_Config.PhoneMessage);
        resoure = GameRoot.resourcesSystem.NameToLoad(ConfigUtils.UI_Config.JobElement);
        JobpPrefab = resoure.GetResult() as GameObject;


    }
    public GameObject WorkPanelList;
    public Transform WorkPanelJobRoot;
    public void ClickJobs()
    {
        if(!WorkPanelList.activeSelf)
        {
            OpenJob();
        }
        else
        {
            CloseJob();
        }
    }
    public List<GameObject> jobElement = new List<GameObject>();
    private void OpenJob()
    {
        WorkPanelList.SetActive(true);
        foreach(var job in  PlayerInformation.currentUserData.currentCompany.jobs)
        {
            GameObject temp = Instantiate(JobpPrefab, WorkPanelJobRoot);
            temp.transform.Find("Name").GetComponent<TextMeshProUGUI>().text = job;
            temp.transform.Find("Button").GetComponent<Button>().onClick.AddListener
                (
                ()=>
                {
                    PlayerInformation.currentUserData.currentCompany.jobs.Remove(job);
                    GameObject.Destroy(temp);
                }
                );
            jobElement.Add(temp);
        }
    }
    private void CloseJob()
    {
        WorkPanelList.SetActive(false);
        while (jobElement.Count > 0) 
        {
            GameObject.Destroy(jobElement[0]);
            jobElement.RemoveAt(0);
        }
    }
    private void OnDisable()
    {
        PlayerInformation.currentUserData.SaveCompany();
    }
    public TMP_InputField JobNameInput;
    public GameObject WorkPanelAdd;
    public void AddJob()
    {
        if(!PlayerInformation.currentUserData.currentCompany.jobs.Contains(JobNameInput.text))
        {
            PlayerInformation.currentUserData.currentCompany.jobs.Add(JobNameInput.text);
            WorkPanelAdd.SetActive(false);
        }
        else
        {
            TitleTips uIFormBase =GameRoot.uISystem.LoadUI(ConfigUtils.UI_Config.Title, Vector3.zero, transform)as TitleTips;
            uIFormBase.title.text = "�����벻ͬ��λ����";
            uIFormBase.Open();
        }
    }
    GameObject JobpPrefab;
    protected override void OnClose()
    {
        base.OnClose();
        messagePlayer.Destory();
    }
    public void OnAddAIPerson()
    {  
        PlayerCanvas.MainCanvas.GetComponent<GameMainMenuUI>().PlayClickAudioClip();
        string name= RandomName.GetChinessName();
        while(messages.ContainsKey(name))
        {
            name = RandomName.GetChinessName();
        }
        mess_Boolen.Add(name,true);
        messages.Add(name, new List<message>());
        GameObject gameObject= buttonPool.GetValue();
        gameObject.SetActive(true);
        gameObject.transform.Find("Name").GetComponent<TextMeshProUGUI>().text = name;
        EndCheck.Add(name, (str) => gameObject.transform.Find("Field").GetComponent<TextMeshProUGUI>().text=str);
        gameObject.transform.GetComponent<Button>().onClick.AddListener(()=>NameButtonClick(name));
        AIDialog.StartAsk(AICallBack, messages[name],name);
    }
    public void ButtonCallBack()
    {
        Dialog.SetActive(false);
        DialogList.SetActive(true);
    }
    public void NameButtonClick(string Name)
    {
        UserName.text= Name;
        Dialog.SetActive(true);
        DialogList.SetActive(false);
        PlayerCanvas.MainCanvas.GetComponent<GameMainMenuUI>().PlayClickAudioClip();
        //Voice_Button.enabled = mess_Boolen[Name];
        Text_Button.interactable = mess_Boolen[Name];
        if(!string.IsNullOrEmpty(currentName))
        {
            foreach (GameObject gameObject in gameObjects)
            {
                pool.PutValue(gameObject);
            }
            gameObjects.Clear();
        }
        currentName = Name;
        int _index = -1;
        foreach (var element in messages[Name])
        {
            _index++;
            if(_index == 0)
            {
                continue;
            }
            GameObject obj = GetValue();
            LayoutRebuilder.ForceRebuildLayoutImmediate(obj.GetComponent<RectTransform>());
            gameObjects.Add(obj);
            if (element.role==AI)
            {
                SetText(obj, Phone_AI+ element.content,true);
            }
            else
            {
                SetText(obj, Phone_User + element.content, false);
            }
        }
    }
    public void ButtonClose()
    {
        (PlayerCanvas.MainCanvas as GameMainMenuUI).OnphoneUIElementClick();
    }
    public void OfferSuccessful(float money, float savemoney, float Worktime,string name, List<message>messages)
    {
        try
        {
            mess_Boolen[name] = false;
            StaffsSinger.Instance.AddStaffData(name, money, savemoney, Worktime);
            string use = $"��ͬ����н{money}w���ҽ�ÿ��Ϊ��˾����{savemoney}wЧ�棬�ҽ�Ը�������{Worktime}Сʱÿ��";
            EndCheck[name]?.Invoke(use);
            messages.RemoveAt(messages.Count - 1);
            messages.Add(new message() { content = use, role = AI });
            if (name == currentName)
            {
                GameObject text = GetValue();
                LayoutRebuilder.ForceRebuildLayoutImmediate(text.GetComponent<RectTransform>());
                gameObjects.Add(text);
                SetText(text, Phone_AI + use, true);
            }
            DebugUtils.Log("Offer �ɹ� н��Ϊ:" + money);
        }
        catch
        {
            DebugUtils.Log("�﷨����" );
        }

    }
    public void ClickOpenAddJob()
    {
        WorkPanelAdd.SetActive(!WorkPanelAdd.activeSelf);
    }
    public void OfferFailed(string name)
    {
        string tanks = "���úܱ�Ǹ��������������㣬�ҽ�������ְ����˾";
        EndCheck[name]?.Invoke(tanks);
        messages[name].RemoveAt(messages[name].Count - 1);
        messages[name].Add(new message() { content = tanks, role = AI });
        if (name == currentName) 
        {
            GameObject text = GetValue();
            LayoutRebuilder.ForceRebuildLayoutImmediate(text.GetComponent<RectTransform>());
            gameObjects.Add(text);
           
            SetText(text, Phone_AI + tanks,true);
        }
        DebugUtils.Log("Offer ʧ��");
    }
    public void AICallBack(DeepSeekCallBack deepSeekCallBack,string name)
    {
        string choise = deepSeekCallBack.GetEndChoise();
        Debug.Log("[AICallBack] AI返回的原始内容: " + choise);
        Employed employed;
        EndCheck[name]?.Invoke(Phone_AI + choise);

        // 先检查是否是JSON格式（决策阶段）
        if (choise.TrimStart().StartsWith("{") && choise.TrimEnd().EndsWith("}"))
        {
            // 这是JSON格式，尝试解析（决策阶段）
            try
            {
                employed = JsonConvert.DeserializeObject<Employed>(choise);
                Debug.Log("[AICallBack] 决策阶段 - JSON解析成功! Money=" + employed.Money + ", Time=" + employed.WorkTime + ", Save=" + employed.SaveMony + ", Result=" + employed.result);

                if (employed.result)
                {
                    // 求职者接受offer
                    mess_Boolen[name] = false;
                    choise = choise.Remove(0, 2);
                    string[] str = choise.Split('/');
                    Debug.Log(choise);
                    if (name == currentName)
                    {
                        //Voice_Button.enabled = false;
                        Text_Button.interactable = false;
                    }
                    OfferSuccessful(employed.Money, employed.SaveMony, employed.WorkTime,name, messages[name]);
                }
                else
                {
                    // 求职者拒绝offer
                    mess_Boolen[name] = false;
                    if (name == currentName)
                    {
                       // Voice_Button.enabled = false;
                        Text_Button.interactable = false;
                    }
                    OfferFailed(name);
                }
                Verscrollbar.value = 0;
                return;
            }
            catch (Exception ex)
            {
                Debug.LogError("[AICallBack] 决策阶段JSON解析失败: " + ex.Message);
                Debug.LogError("[AICallBack] JSON内容: " + choise);
            }
        }

        // 不是JSON格式，当作普通对话处理（开场白/HR提问/反问阶段）
        Debug.Log("[AICallBack] 对话阶段 - 显示普通对话内容");
        if (currentName == name)
        {
            GameObject text = GetValue();
            LayoutRebuilder.ForceRebuildLayoutImmediate(text.GetComponent<RectTransform>());
            gameObjects.Add(text);
            SetText(text, Phone_AI + choise, true);
        }
        messagePlayer.Play();
        Verscrollbar.value = 0;
    }
    private void SetText(GameObject text,string str, bool isAI)
    {
        TextMeshProUGUI[]uGUIs= text.GetComponentsInChildren<TextMeshProUGUI>();
        foreach(var tex in uGUIs)
        {
            tex.text = str;
            tex.alignment =isAI? TextAlignmentOptions.MidlineLeft: TextAlignmentOptions.MidlineRight;
        }
        Image child = text.transform.GetComponentInChildren<Image>();
        child.sprite = isAI ? AIBackGround : UserBackGround;
    }
    public void SendInputFieldText()
    {
        if (PersonSinger.Instance.currentPerson >= PersonSinger.Instance.MaxPerson)
        {
            TitleTips title = GameRoot.uISystem.LoadUI(ConfigUtils.UI_Config.Title, Vector3.zero, PlayerCanvas.MainCanvas.transform) as TitleTips;
            title.title.text = "��������Ա������,����[����]";
            title.Open();
            return;
        }
        if (!string.IsNullOrEmpty(inputField.text))
        {
            PlayerCanvas.MainCanvas.GetComponent<GameMainMenuUI>().PlayClickAudioClip();
            GameObject text = GetValue();
            LayoutRebuilder.ForceRebuildLayoutImmediate(text.GetComponent<RectTransform>());
            gameObjects.Add(text.gameObject);
            SetText(text, Phone_User + inputField.text, false);
            GetRequestion(inputField.text, AICallBack, messages[currentName], currentName);
            EndCheck[currentName]?.Invoke(Phone_User + inputField.text);
            inputField.text = string.Empty;
            inputField.ActivateInputField();
            Verscrollbar.value = 0;
        }
    }
    private GameObject GetValue()
    {
        GameObject text = pool.GetValue();
        text.transform.SetAsLastSibling();
        text.gameObject.SetActive(true);
        return text;
    }
    public void UserCallBack(string str)
    {
        GameObject text= GetValue();
        LayoutRebuilder.ForceRebuildLayoutImmediate(text.GetComponent<RectTransform>());
        gameObjects.Add(text.gameObject);
        SetText(text, Phone_User + str, false);
        GetRequestion(str, AICallBack,messages[currentName], currentName);
    }
    public void Update()
    {
        while (TimeSinger.Instance.personCount > 0)
        {
            TimeSinger.Instance.personCount--;
            OnAddAIPerson();
            RedPointManager.Instance.GetUIButton(RedPointEnum.Phone).OnHideRedPoint();
        }
    }
    public void OnButtonClose()
    {
        PlayerCanvas.MainCanvas.GetComponent<GameMainMenuUI>().OnphoneUIElementClick();
    }
    /*public void PointerEnter()
    {
        if(isPressed)
        {
            isCancel=false;
            LoadVoice_Text.text = "����¼��";
        }
    }
    public void PointerExit()
    {
        if(isPressed)
        {
            isCancel = true;
            LoadVoice_Text.text = "ȡ������";
        }
    }*/
    /*private bool isPressed = false;
    private bool isCancel = false;
    public void ButtonDown()
    {
        if(string.IsNullOrEmpty(currentName))
            return;
        isPressed = true;
        isCancel=false;
        LoadVoice_Text.text = "����¼��";
        aipController.StartRecord();
    }
    public void ButtonUp() 
    {
        if (string.IsNullOrEmpty(currentName))
            return;
        VoiceOver();
        isPressed = false;
        isCancel =false;
    }
    public async void VoiceOver()
    {
        LoadVoice_Text.text = "��������";
        if(!isCancel)
        {
            //¼�Ƴɹ�
             aipController.StopRecord(true);
        }
        else
        {
            //¼��ȡ��
            aipController.StopRecord(false);
        }
    }*/
}
