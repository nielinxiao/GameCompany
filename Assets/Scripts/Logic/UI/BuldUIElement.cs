using ABFrameWorlk;
using DG.Tweening;
using DigitalRubyShared;
using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class BuldUIElement : UIFormBase
{
    GameObejectPool BoxImagePool;
    public Transform BoxRoot;
    public RectTransform ChildImage;
    public List<GameObject>objects = new List<GameObject>();
    public Dictionary<BuildPrefab_Element, GameObject> keyValuePairs = new Dictionary<BuildPrefab_Element, GameObject>();
    public LayerMask AllObjectLayer;
    public enum BuildType
    {
        Build=0,
        Destory=1
    }
    public BuildType buildtype=BuildType.Build;
    public void ChangeBuildType(int type)
    {
        BuildType buildType = (BuildType)type;
        if (buildtype==buildType)
        {
            return;
        }
        //TitleTips title = GameRoot.uISystem.LoadUI(ConfigUtils.UI_Config.Title, Vector3.zero, PlayerCanvas.MainCanvas.transform) as TitleTips;
        switch (buildType)
        {
            case BuildType.Build:
                //title.title.text = "��ǰģʽ����Ϊ����ģʽ";
                transform.DOShakeRotation(1f, new Vector3(2, 0, 2));
                buildtype = BuildType.Build;
                break;
            case BuildType.Destory:
                //title.title.text = "��ǰģʽ����Ϊ�ƻ�ģʽ";
                transform.DOShakeRotation(1f, new Vector3(2, 0, 2));
                buildtype = BuildType.Destory;
                break;
        }
        //title.Open();
    }
    protected override void OnOpen()
    {
        base.OnOpen();
        BagSinger.Instance.Remove += Remove;
        BagSinger.Instance.OnCountChange += OnCountChange;
        if (BoxImagePool == null )
        {
            BoxImagePool = new GameObejectPool(10,ConfigUtils.UI_Config.BuildBox, BoxRoot, Reseter);
        }
        for (int i = 0; i < BagSinger.Instance.buildConfig.elements.Count; i++) 
        {
            GameObject gameObject = BoxImagePool.GetValue();
            objects.Add(gameObject);
            gameObject.transform.SetAsLastSibling();
            gameObject.SetActive(true);
            BuildPrefab_Element buildPrefab_Element = BagSinger.Instance.buildConfig.elements[i];
            keyValuePairs.Add(buildPrefab_Element,gameObject);

            ShaderFindUtils.FindFontShader(gameObject.transform.Find("Number").GetComponent<TextMeshProUGUI>());
            gameObject.transform.Find("Number").GetComponent<TextMeshProUGUI>().text = BagSinger.Instance.buildConfig.count[i].ToString();
            gameObject.transform.Find("Name").GetComponent<TextMeshProUGUI>().text = buildPrefab_Element.name;
            gameObject.GetComponent<Button>().onClick.AddListener(() => OnClickBox(buildPrefab_Element.UrlName));
        }
    }
    public void OnCountChange(BuildPrefab_Element buildPrefab_Element,int count)
    {
        if (keyValuePairs.ContainsKey(buildPrefab_Element))
        {
            keyValuePairs[buildPrefab_Element].transform.Find("Number").GetComponent<TextMeshProUGUI>().text= count.ToString();
        }
    }
    public void Remove(BuildPrefab_Element buildPrefab_Element)
    {
        if(keyValuePairs.ContainsKey(buildPrefab_Element))
        {
            objects.Remove(keyValuePairs[buildPrefab_Element]);
            BoxImagePool.PutValue(keyValuePairs[buildPrefab_Element]);
            keyValuePairs.Remove(buildPrefab_Element);
        }
    }
    public GameObject Reseter(GameObject gameObject)
    {
        gameObject.SetActive(false);
        gameObject.GetComponent<Button>().onClick.RemoveAllListeners();
        return gameObject;
    }
    public void ClickClose()
    {
        (PlayerCanvas.MainCanvas as IPlayerCanvas).PlayClickAudioClip();
        (PlayerCanvas.MainCanvas as GameMainMenuUI).ActiveTouchMotion();
        UIFormBase ui= GameRoot.uISystem.LoadUI(ConfigUtils.UI_Config.Loading, Vector3.zero,PlayerCanvas.MainCanvas.transform);
        ui.Open();
        (PlayerCanvas.MainCanvas as GameMainMenuUI).ClickBuild();
        BuildObjectBase[]buildObjectBases = CountUtils<BuildObjectBase>.Instance.GetArry();
        Debug.Log($"[BuldUIElement] ClickClose - 准备保存建筑，总共 {buildObjectBases?.Length ?? 0} 个建筑对象");

        BuildJsonClass buildJsonClass = new BuildJsonClass();
        int skippedCount = 0;
        foreach (var buildObjectBase in buildObjectBases)
        {
            if (HandObject != null && HandObject == buildObjectBase)
            {
                skippedCount++;
                Debug.Log($"[BuldUIElement] 跳过HandObject: {buildObjectBase?.nameUrl}");
                continue;
            }
            if (buildObjectBase == null)
            {
                Debug.LogWarning("[BuldUIElement] 发现null的建筑对象，跳过");
                continue;
            }
            Debug.Log($"[BuldUIElement] 添加建筑: {buildObjectBase.nameUrl}, 位置: {buildObjectBase.transform.position}");
            buildJsonClass.builds.Add(buildObjectBase);
        }

        Debug.Log($"[BuldUIElement] 建筑保存统计 - 总数: {buildObjectBases?.Length ?? 0}, 跳过: {skippedCount}, 保存: {buildJsonClass.builds.Count}");
        string json= JsonConvert.SerializeObject(buildJsonClass);
        string userIdentifier = PlayerInformation.currentUserData.UserID;
        string buildDataKey = ConfigUtils.ServerKeys_Config.block;
        Debug.Log($"[BuldUIElement] 保存参数 - UserID: {userIdentifier}, Key: {buildDataKey}, JSON长度: {json.Length}, JSON前100字符: {GetJsonPreview(json)}");
        Debug.Log($"[BuldUIElement] ClickClose - 调用SetValueAsync(UserID, Key, Json) => ({userIdentifier}, {buildDataKey}, length:{json.Length})");
        GameRoot.redisSystem.SetValueAsync(userIdentifier, buildDataKey, json);
        BagSinger.Instance.SaveBag();
        UnLoad();
        ui.Close();
        ui.Destory();
        Debug.Log("[BuldUIElement] Save Ready");
    }
    protected override void OnClose()
    {
        base.OnClose();
        BagSinger.Instance.Remove -= Remove;
        foreach (var game in objects)
        {
            BoxImagePool.PutValue(game);
        }
        objects.Clear();
        keyValuePairs.Clear();
        if(DestoryObejct!=null)
        {
            Renderer[] renderers = DestoryObejct.GetComponentsInChildren<Renderer>();
        }
    }

    public BuildObjectBase HandObject;
    public async void OnClickBox(string buildName)
    {
        if (buildtype != BuildType.Build)
            return;
        if (HandObject != null)
        {
            HandObject.On_Cancle();
        }
        GameMainMenuUI mainMenuUI = PlayerCanvas.MainCanvas as GameMainMenuUI;
        mainMenuUI.PlayClickAudioClip();
        // 禁用相机控制，确保建造模式下只移动建造物品，不移动相机
        mainMenuUI.DeActiveTouchMotion();
        Debug.Log("[BuldUIElement] 已禁用相机控制，进入建造拖拽模式");

        GameObject game = await Load(buildName);
        HandObject = game.GetComponent<BuildObjectBase>();
        HandObject.nameUrl = buildName;
        HandObject.isBuilded = false;
        Renderer[] renderer = game.GetComponentsInChildren<Renderer>();
        ShaderFindUtils.FindShader(renderer);
        HandObject.On_HoverUpdate(new Vector2(Screen.width/2,Screen.height/2));
        HandObject.AddListener(OnSubmit, OnCancle);
        HideChild();
    }
    public void OnSubmit()
    {
        (PlayerCanvas.MainCanvas as GameMainMenuUI).PlayClickAudioClip();
        (PlayerCanvas.MainCanvas as GameMainMenuUI).ActiveTouchMotion();
        Debug.Log("[BuldUIElement] 建造完成，已重新启用相机控制");
        BagSinger.Instance.RemoveBuildPrefab(HandObject.nameUrl, 1);
        CountUtils<BuildObjectBase>.Instance.AddObject(HandObject);
        HandObject = null;
        ShowChild();
    }
    public void OnCancle()
    {
        (PlayerCanvas.MainCanvas as GameMainMenuUI).PlayClickAudioClip();
        GameMainMenuUI main = (PlayerCanvas.MainCanvas as GameMainMenuUI);
        main.PlayClickAudioClip();
        main.ActiveTouchMotion();
        Debug.Log("[BuldUIElement] 建造取消，已重新启用相机控制");
        HandObject = null;
        ShowChild();

    }
    private void ShowChild()
    {
        ChildImage.DOAnchorPosY(0, 1);
    }
    private void HideChild()
    {
        ChildImage.DOAnchorPosY(-960, 1);
    }

    public void Update()
    {
        if (buildtype == BuildType.Build)
        {
            if (HandObject != null)
            {
                // 检查是否是单点触摸（避免多点手势冲突）
#if !UNITY_EDITOR
                if (Input.touchCount > 1)
                {
                    HandObject.NoTouch();
                    return;
                }
#endif
                if (GetInputPosition(out Vector2 vector2))
                {
                    HandObject.On_HoveMove(vector2);
                }
                else
                {
                    HandObject.NoTouch();
                }
            }
        }
        else
        {
            DestoryBuild();
        }
    }
    /// <summary>
    /// 黑盒测试：传入任意JSON文本，输出不超过100字符的预览文本，空输入返回空字符串。
    /// </summary>
    private string GetJsonPreview(string json)
    {
        if (string.IsNullOrEmpty(json))
        {
            return "";
        }
        return json.Substring(0, Math.Min(100, json.Length));
    }
    void DestoryBuild()
    {
        Ray ray=default(Ray);
#if UNITY_EDITOR
        if(Input.GetMouseButton(0))
        {
            ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        }
        else if(DestoryObejct!=null)
        {
            OnDisableDestoryObejct();
        }
#else
             if (Input.touchCount > 0)
            {
                 ray = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);
            }
             else if(DestoryObejct!=null)
        {
            OnDisableDestoryObejct();
        }
#endif
        if (!ray.Equals(default(Ray)))
        {
            RaycastHit[] hits = Physics.RaycastAll(ray, float.MaxValue, AllObjectLayer);
            if (hits.Length != 0)
            {
                OnEnableDestoryObject(hits[0].collider.gameObject);
            }
            else
            {
                OnDisableDestoryObejct();
            }
        }
    }
    private void OnDisableDestoryObejct()
    {
        if(DestoryObejct!=null)
        {
            DestoryObejct.transform.DOPause();
            DestoryObejct.transform.rotation = Quaternion.identity;
            DestoryObejct.transform.DOScale(Vector3.one, 0.5f);
            DestoryObejct = null;
        }
    }
    private void OnEnableDestoryObject(GameObject gameObject)
    {
        if (DestoryObejct != null)
        {
            if (DestoryObejct != gameObject)
            {
                OnDisableDestoryObejct();
            }
            else
                return;
        }
        DestoryObejct = gameObject;
        DestoryObejct.transform.DOScale(Vector3.one * 1.5f, 1f).onComplete = () => DestoryObject(gameObject);
        DestoryObejct.transform.DOShakeRotation(1f, new Vector3(5,0,5));
    }
    public void DestoryObject(GameObject game)
    {
        if(DestoryObejct!=game)
        {
            game.transform.rotation = Quaternion.identity;
            game.transform.DOScale(Vector3.one, 0.5f);
            return;
        }
        BuildObjectBase buildObjectBase = game.GetComponent<BuildObjectBase>();
        Build_PersonInterface build_PersonInterface = buildObjectBase as Build_PersonInterface;
        if (build_PersonInterface != null)
        {
            bool havePerson = false;
            foreach (var buildObject in build_PersonInterface.couldSitDown)
            {
                if (buildObject)
                {
                    havePerson = true;
                    break;
                }
            }
            if (havePerson)
            {
                TitleTips titleTips = GameRoot.uISystem.LoadUI(ConfigUtils.UI_Config.Title, Vector3.zero, PlayerCanvas.MainCanvas.transform) as TitleTips;
                titleTips.title.text = "��λ�����˲����Ƴ�";
                titleTips.Open();
                DestoryObejct = null;
            }
            else
                ToDestory();
        }
        else
            ToDestory();
    }
    private void ToDestory()
    {
        Destroy(DestoryObejct);
        DestoryObejct = null;
    }
    GameObject DestoryObejct = null;
    float deltaTime = 0;
    float delyTime = 0.1f; // 降低延迟从0.4秒到0.1秒，让建造拖拽更灵敏
#if UNITY_EDITOR
    bool isPressed = false;
#endif
    public bool GetInputPosition(out Vector2 vector2)
    {
#if UNITY_EDITOR
        if (Input.GetMouseButtonDown(0))
        {
            isPressed = true;
        }
        else if (Input.GetMouseButtonUp(0))
        {
            isPressed = false;
        }
        if (isPressed)
        {
            vector2 = Input.mousePosition;
            deltaTime += Time.deltaTime;
            if (deltaTime > delyTime)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            deltaTime = 0;
            vector2 = Vector2.zero;
            return false;
        }
#else
       if (Input.touchCount >= 1)
        {
            deltaTime += Time.deltaTime;
            vector2 = Input.GetTouch(0).position;
            if (deltaTime > delyTime)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            vector2 = Vector2.zero;
            deltaTime = 0;
            return false;
        }
#endif
    }
    public async Task<GameObject> Load(string nameUrl)
    {
        GameObject prefab = (GameObject)(await GameRoot.resourcesSystem.NameToLoadAsync(nameUrl)).GetResult();
        GameObject gameObject = GameRoot.Instantiate(prefab);
        gameObject.transform.position = Vector3.zero;
        return gameObject;
    }
    public void UnLoad()
    {
        if(HandObject != null)
        {
            HandObject.On_Cancle();
            HandObject = null;
        }
    }
}
