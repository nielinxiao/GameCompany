using Newtonsoft.Json;
using Sirenix.OdinInspector;
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class StaffsSinger : SingerLife
{
    public static StaffsSinger Instance { get; private set; }
  
    public override void Awake()
    {
        Instance = this;
    }
    public Action loadCallBack;
    GameObject characterControllder;
    GameObject UIPrefab;
    GameObject CharacterTalk;
    [ShowInInspector]
    public Dictionary<string,GameObject>staffGameObjects=new Dictionary<string, GameObject>();
    [ShowInInspector]
    public Dictionary<string, RectTransform> uiGameobjects=new Dictionary<string, RectTransform>();
    [ShowInInspector]
    public Dictionary<string, RectTransform> TalkDialog = new Dictionary<string, RectTransform>();
    public void EnableMoney()
    {
        foreach(var ui in uiGameobjects.Values)
        {
            ui.GetComponentInChildren<Button>(true).gameObject.SetActive(true);
        }
    }
    public void DisableMoney()
    {
        foreach (var ui in uiGameobjects.Values)
        {
            ui.GetComponentInChildren<Button>(true).gameObject.SetActive(false);
        }
    }
    public void Init()
    {
        ValueToken valueToken=new ValueToken(OnGetStaffBack);
        GameRoot.redisSystem.GetValueAsync(PlayerInformation.currentUserData.UserID, ConfigUtils.ServerKeys_Config.persons, valueToken);
    }
    private async void OnGetStaffBack(Pkg pkg)
    {
        try
        {
            string jsonValue = pkg.Body.serverMessage.JsonValue;
            if (string.IsNullOrEmpty(jsonValue) || jsonValue == "null")
            {
                Debug.Log("[StaffsSinger] 没有员工数据，初始化为空列表");
                staffDatas = new List<StaffData>();
            }
            else
            {
                staffDatas = JsonConvert.DeserializeObject<List<StaffData>>(jsonValue);
                if (staffDatas == null)
                {
                    staffDatas = new List<StaffData>();
                }
            }

            await LocalGetStaff(staffDatas);
        }
        catch (Exception ex)
        {
            Debug.LogError($"[StaffsSinger] OnGetStaffBack 异常: {ex.Message}");
            staffDatas = new List<StaffData>();
            loadCallBack?.Invoke();
        }
    }
    public async Task LoadStaff(List<StaffData> staffDatas)
    {
        characterControllder = (GameObject)(await GameRoot.resourcesSystem.NameToLoadAsync(ConfigUtils.BuildPrefab_Config.CharacterController)).GetResult();
        UIPrefab = (GameObject)(await GameRoot.resourcesSystem.NameToLoadAsync(ConfigUtils.UI_Config.Money)).GetResult();
        CharacterTalk = (GameObject)(await GameRoot.resourcesSystem.NameToLoadAsync(ConfigUtils.UI_Config.CharacterTalk)).GetResult();
        ShaderFindUtils.FindFontShader(UIPrefab.GetComponentInChildren<TextMeshProUGUI>());
        foreach (var staffData in staffDatas)
        {
            foreach (var person in PersonSinger.Instance.personBuildList)
            {
                if (person.SitDown(out Transform transform))
                {
                    GeneStaff(person, staffData, transform, false);
                    break;
                }
            }
        }
    }
    private async Task LocalGetStaff(List<StaffData> staffDatas)
    {
        // 检查 PersonSinger 是否已初始化
        if (PersonSinger.Instance == null)
        {
            Debug.LogError("[StaffsSinger] PersonSinger.Instance is null, 等待初始化...");
            // 等待 PersonSinger 初始化
            while (PersonSinger.Instance == null)
            {
                await Task.Delay(100);
            }
            Debug.Log("[StaffsSinger] PersonSinger.Instance 已就绪");
        }

        PersonSinger.Instance.SetCurrentPerson(staffDatas?.Count ?? 0);

        // 如果没有员工数据，直接返回
        if (staffDatas == null || staffDatas.Count == 0)
        {
            Debug.Log("[StaffsSinger] 没有员工需要加载");
            loadCallBack?.Invoke();
            return;
        }

        characterControllder = (GameObject)(await GameRoot.resourcesSystem.NameToLoadAsync(ConfigUtils.BuildPrefab_Config.CharacterController)).GetResult();
        UIPrefab = (GameObject)(await GameRoot.resourcesSystem.NameToLoadAsync(ConfigUtils.UI_Config.Money)).GetResult();
        CharacterTalk = (GameObject)(await GameRoot.resourcesSystem.NameToLoadAsync(ConfigUtils.UI_Config.CharacterTalk)).GetResult();
        ShaderFindUtils.FindFontShader(UIPrefab.GetComponentInChildren<TextMeshProUGUI>());
        foreach (var staffData in staffDatas)
        {
            bool haveSit = false;
            foreach (var person in PersonSinger.Instance.personBuildList)
            {
                if (person.SitDown(out Transform transform))
                {
                    GeneStaff(person, staffData, transform, true);
                    haveSit = true;
                    break;
                }
            }
            if (!haveSit)
            {
                staffData.staffState = StaffState.NoSit;
            }
        }
        loadCallBack?.Invoke();
    }
    public override void Destory()
    {
        UnInit();
        base.Destory();
    }
    public void UnInit()
    {
        foreach(StaffData staffData in staffDatas)
        {
            RemoveDate.Enqueue(staffData);
        }
    }
    public Queue<StaffData>RemoveDate=new Queue<StaffData>();
    public override void Update()
    {
        base.Update();
        while (RemoveDate.TryDequeue(out StaffData result))
        {
            DestoryStaff(result);
        }
        foreach (var staffData in uiGameobjects)
        {
            Vector2 screenPos = Camera.main.WorldToScreenPoint(staffGameObjects[staffData.Key].transform.position + Vector3.up * 2);
            if (RectTransformUtility.ScreenPointToWorldPointInRectangle(staffData.Value, screenPos, null, out Vector3 worldPoint))
            {
                staffData.Value.transform.position = worldPoint;
                if (TalkDialog.ContainsKey(staffData.Key))
                {
                    TalkDialog[staffData.Key].transform.position = worldPoint;
                }
            }
        }
    }
    public Action Reresh;
    public  void RemoveStaff(StaffData staffData)
    {
        if (staffCallBack.ContainsKey(staffData)) 
        {
            staffCallBack.Remove(staffData);
        }
        PersonSinger.Instance.SetCurrentPerson(PersonSinger.Instance.currentPerson-1);
        RemoveDate.Enqueue(staffData);
        GameRoot.redisSystem.SetValueAsync(PlayerInformation.currentUserData.UserID, ConfigUtils.ServerKeys_Config.persons,JsonConvert.SerializeObject(staffDatas));
        Reresh?.Invoke();
    }
    public void DestoryStaff(StaffData staffData)
    {
        if(staffGameObjects.ContainsKey(staffData.Name))
        {
            GameObject.Destroy(staffGameObjects[staffData.Name]);
            staffGameObjects.Remove(staffData.Name);
        }
        if (uiGameobjects.ContainsKey(staffData.Name))
        {
            GameObject.Destroy(uiGameobjects[staffData.Name].gameObject);
            uiGameobjects.Remove(staffData.Name);
        }
        if (TalkDialog.ContainsKey(staffData.Name))
        {
            GameObject.Destroy(TalkDialog[staffData.Name].gameObject);
            TalkDialog.Remove(staffData.Name);
        }
        staffDatas.Remove(staffData);
    }
    public void AddStaffData(string name, float money, float saveMoney, float workTime)
    {
        PersonSinger.Instance.SetCurrentPerson(PersonSinger.Instance.currentPerson+1);
        StaffData data= new StaffData(name, money, saveMoney, workTime);
        staffDatas.Add(data);
        GameRoot.redisSystem.SetValueAsync(PlayerInformation.currentUserData.UserID, ConfigUtils.ServerKeys_Config.persons,JsonConvert.SerializeObject(staffDatas));
        foreach (var person in PersonSinger.Instance.personBuildList)
        {
            if (person.SitDown(out Transform transform))
            {
                GeneStaff(person,data, transform,false);
                break;
            }
        }
    }
    public void GeneStaff(Build_PersonInterface build_PersonInterface,StaffData data,Transform transform,bool showButton)
    {
        GameObject temp = GameObject.Instantiate(characterControllder, transform);
        Renderer[] renderers = temp.GetComponentsInChildren<Renderer>();
        ShaderFindUtils.FindShader(renderers);
        CharacterAI characterAI= temp.GetComponent<CharacterAI>();
        characterAI.RegistDic(ref staffGameObjects, data, transform);
        characterAI.ResetPos();
        characterAI.SitDown(build_PersonInterface, transform);
        staffGameObjects.Add(data.Name, temp);
        GeneUI_Money(data,showButton);
        if (showButton)
            GeneUI_Dialog(data, characterAI);
    }
    private void GeneUI_Money(StaffData data,bool showButton)
    {
        RectTransform rect = GameObject.Instantiate(UIPrefab, PlayerCanvas.MainCanvas.transform).GetComponent<RectTransform>();
        Button button = rect.GetComponentInChildren<Button>();
        button.onClick.AddListener(MoneySinger.Instance.Settlement);
        button.gameObject.SetActive(showButton);
        rect.SetAsFirstSibling();
        uiGameobjects.Add(data.Name, rect);
    }
    private void GeneUI_Dialog(StaffData data, CharacterAI characterAI)
    {
        RectTransform rect = GameObject.Instantiate(CharacterTalk, PlayerCanvas.MainCanvas.transform).GetComponent<RectTransform>();
        ShaderFindUtils.FindFontShader(rect.GetComponentInChildren<TextMeshProUGUI>());
        characterAI.RegistDialogImage(rect.gameObject);
        TalkDialog.Add(data.Name,rect);
    }
    public Dictionary<StaffData, Action<StaffState>> staffCallBack = new Dictionary<StaffData, Action<StaffState>>();
    public void ChangePlayerState(StaffData staffData,StaffState staffState)
    {
        if(staffData.staffState!=staffState)
        {
            staffData.staffState = staffState;
            if (staffGameObjects.ContainsKey(staffData.Name))
                staffGameObjects[staffData.Name].GetComponent<CharacterAI>().OnChangeState(staffState);
            if (staffCallBack.ContainsKey(staffData))
            {
                staffCallBack[staffData]?.Invoke(staffState);
            }
        }
    }
    public static string GetStaffStateString(StaffState staffState)
    {
        switch (staffState)
        {
            case StaffState.Holiday:
                return "������";
            case StaffState.HappyWorking:
                return "����(��Ч)";
            case StaffState.Working:
                return "����(����)";
            case StaffState.LittleTiredWork:
                return "����(ƣ��)";
            case StaffState.TiredWork:
                return "����(����)";
            case StaffState.WasteTime:
                return "������";
            case StaffState.GetOffWork:
                return "�°�";
            case StaffState.NoSit:
                return "û��λ";
            default :
                return "";
        }
    }
    public float WorkingTime;
    [ShowInInspector]
    public List<StaffData>staffDatas = new List<StaffData>();
}


