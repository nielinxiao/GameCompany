using ABFrameWorlk;
using DigitalRubyShared;
using Newtonsoft.Json;
using Sirenix.OdinInspector;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ShopUIElement : UIFormBase
{
    public Transform LineRoot;
    public GameObject preview_obj;
    public RawImage Previvew;
    public  void OnClickBuy(int type)
    {
        (PlayerCanvas.MainCanvas as GameMainMenuUI).PlayClickAudioClip();
        GameRoot.adsSystem.Show(()=>OnSuccessful(type), OnFailed);
    }
    public  void OnSuccessful(int type)
    {
        UnClickTitleTips titleTips = GameRoot.uISystem.LoadUI(ConfigUtils.UI_Config.UnClickTip, Vector3.zero, transform) as UnClickTitleTips;
        switch (type)
        {
            case 0:
                PlayerInformation.currentUserData.Money += 100;
                titleTips.title.text = "奖励发放成功，恭喜获得100w";
                titleTips.Open();
                break;
            case 1:
                PlayerInformation.currentUserData.Money += 500;
                titleTips.title.text = "奖励发放成功，恭喜获得500w";
                titleTips.Open();
                break;
            case 2:
                PlayerInformation.currentUserData.Money += 1000;

                titleTips.title.text = "奖励发放成功，恭喜获得1000w";
                titleTips.Open();
                break;
        }
        PlayerInformation.currentUserData.SaveCompany();
       
    }
    public void OnFailed() 
    {
        TitleTips titleTips= GameRoot.uISystem.LoadUI(ConfigUtils.UI_Config.Title, Vector3.zero, transform) as TitleTips;
        titleTips.title.text = "视频观看失败，奖励不在发放";
        titleTips.Open();
    }
    GameObject temp;
    BuildPrefab build;
    Resoure resoure;
    public void OnClickClose()
    {
        (PlayerCanvas.MainCanvas as GameMainMenuUI).ClickShop();
    }
    bool AllowRoate=false;
    private void Update()
    {
#if UNITY_EDITOR
        if(AllowRoate)
        {
            if(Input.GetMouseButton(0))
            {
                CameraPreview.Instance.HandObj.transform.Rotate(CameraPreview.Instance.ModleRoot.transform.up,Input.mousePositionDelta.x, Space.World);
                CameraPreview.Instance.HandObj.transform.Rotate(CameraPreview.Instance.ModleRoot.transform.right,Input.mousePositionDelta.y,Space.World);
            }
        }
#else
        if (AllowRoate)
        {
            if (Input.touchCount>0)
            {
            CameraPreview.Instance.HandObj.transform.Rotate(CameraPreview.Instance.ModleRoot.transform.up,Input.GetTouch(0).deltaPosition.x,Space.World);
                CameraPreview.Instance.HandObj.transform.Rotate(CameraPreview.Instance.ModleRoot.transform.right,Input.GetTouch(0).deltaPosition.y,Space.World);
            }
         }
#endif
    }
    public void OpenPreview(string urlName)
    {
        preview_obj.SetActive(true);
        Previvew.texture = CameraPreview.Instance.cam.targetTexture;
        CameraPreview.Instance.AddShow(urlName);
        AllowRoate=true;
    }
    public void ClosePreview()
    {
        preview_obj.SetActive(false);
        CameraPreview.Instance.HideShow();
        AllowRoate=false;
    }
    [SerializeField]
    public enum OpenState
    {
        Build,
        Sit,
        Desk
    }
    public void OnClickList(int State)
    {
        OpenState openState = (OpenState)State;
        if(this.openState!=openState)
        {
            this.openState = openState;
            UnBuild();
            Build();
        }
    }
    OpenState openState;
    protected override async void OnOpen()
    {
        base.OnOpen();
        temp = (GameObject)(await GameRoot.resourcesSystem.NameToLoadAsync(ConfigUtils.UI_Config.Shop_Element)).GetResult();
        resoure = await GameRoot.resourcesSystem.NameToLoadAsync(ConfigUtils.BuildPrefab_Config.BuildPrefab_Center);
        build = (BuildPrefab)resoure.GetResult();
        RectTransform rectTransform =GetComponent<RectTransform>();
        rectTransform.sizeDelta=Vector2.zero;
        Build();
    }
    private void UnBuild()
    {
        for(int i= LineRoot.childCount-1;i>=0;i--)
        {
            GameObject.Destroy(LineRoot.GetChild(i).gameObject);
        }
    }
    private void Build()
    {
        foreach (var buil in build.buildPrefab_Elements)
        {
            switch (openState)
            {
                case OpenState.Build:
                    if (buil.buildType != BuildPrefab_Element.BuildType.Build)
                        continue;
                    break;
                case OpenState.Sit:
                    if (buil.buildType != BuildPrefab_Element.BuildType.Sit)
                        continue;
                    break;
                case OpenState.Desk:
                    if (buil.buildType != BuildPrefab_Element.BuildType.Desk)
                        continue;
                    break;
            }
            Transform tans = Instantiate(temp, LineRoot).transform;
            tans.Find("Name").GetComponent<TextMeshProUGUI>().text = buil.name;
            tans.Find("Preview").GetComponent<Button>().onClick.AddListener(() => OpenPreview(buil.UrlName));
            Transform Money = tans.Find("Money");
            Money.Find("Value").GetComponent<TextMeshProUGUI>().text = buil.UseMoney + "w";
            Money.GetComponent<Button>().onClick.AddListener(() => AddBag(buil));
        }
    }
    public  void AddBag(BuildPrefab_Element buildPrefab_Element)
    {
        (PlayerCanvas.MainCanvas as GameMainMenuUI).PlayClickAudioClip();
        PlayerInformation.currentUserData.Money-=buildPrefab_Element.UseMoney;
        UnClickTitleTips titleTips = GameRoot.uISystem.LoadUI(ConfigUtils.UI_Config.UnClickTip, Vector3.zero, transform) as UnClickTitleTips;
        titleTips.title.text = "购买成功";
        titleTips.Open();
        BagSinger.Instance.AddBuildPrefab(buildPrefab_Element,1);
        RedPointManager.Instance.ShowRedPoint(RedPointEnum.Bag);
        string json = JsonConvert.SerializeObject(PlayerInformation.currentUserData.currentCompany);
        BagSinger.Instance.SaveBag();
        GameRoot.redisSystem.SetValueAsync(ConfigUtils.ServerKeys_Config.company, PlayerInformation.currentUserData.UserID, json);
    }
    protected override void OnClose()
    {
        base.OnClose();
        temp = null;
        build = null;
        GameRoot.resourcesSystem.UnLoadAsync(resoure);
        UnBuild();
    }
}