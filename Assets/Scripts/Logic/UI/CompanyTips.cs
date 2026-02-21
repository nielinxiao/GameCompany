using Newtonsoft.Json;
using System.IO;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class CompanyTips : UIFormBase
{
    public TextMeshProUGUI CompanyName;
    public TextMeshProUGUI CompanyPersonCount;
    public TextMeshProUGUI CompanyAllMoney;
    public RawImage CompanyIcon;
    public TextMeshProUGUI UICreatTime;
    public TextMeshProUGUI isListedText;
    public Button ChangeName;
    protected override void OnOpen()
    {
        base.OnOpen();
    }
    public void OpenByCompany(CompanyClass companyClass)
    {
        UICreatTime.text=companyClass.CreatTime.ToString("yyyy-MM-dd");
        CompanyIcon.texture=companyClass.icon_Company;
        CompanyAllMoney.text = companyClass.All_saveMoney.ToString()+"w";
        CompanyPersonCount.text = companyClass.personCount_Company.ToString();
        CompanyName.text = companyClass.CompName;
        isListedText.text = companyClass.isListed ? "已上市" : "未上市";
        if(companyClass.CEO_ID==PlayerInformation.currentUserData.currentCompany.CEO_ID)
        {
            ChangeName.transform.GetChild(0).GetComponent<TextMeshProUGUI>().text = "更名";
            ChangeName.transform.GetComponent<Button>().onClick.AddListener(ClickChangeName);
        }
        else
        {
            ChangeName.transform.GetChild(0).GetComponent<TextMeshProUGUI>().text = "参观";
            ChangeName.transform.GetComponent<Button>().onClick.AddListener(EnterLookMode);
        }
    }
    UIFormBase uIFormBase;
    public void EnterLookMode()
    {
        CloseTips();
        transform.parent.GetComponent<MoneyCompanyTips>().Close();
        GameRoot.Instance.EnterMode(ModeType.Look);
        (PlayerCanvas.MainCanvas as GameMainMenuUI).ActiveTouchMotion();
    }
    public void ButtonClose()
    {
        CloseTips();
    }
    public void ClickChangeName()
    {
        AudioSystem.AudioPlayer audioPlayer = GameRoot.audioSystem.GeneratedAudioPlayer(ConfigUtils.AudioClip_Config.Button_Click_Big, OnComplite, false);
        audioPlayer.Play();
        if (uIFormBase == null)
        {
            uIFormBase = GameRoot.uISystem.LoadUI(ConfigUtils.UI_Config.changeNameButtonTips, Vector3.zero, PlayerCanvas.MainCanvas.transform);
            uIFormBase.Open();
        }
        else
        {
            uIFormBase.Open();
        }
    }
    public void CloseTips()
    {
        AudioSystem.AudioPlayer audioPlayer = GameRoot.audioSystem.GeneratedAudioPlayer(ConfigUtils.AudioClip_Config.Button_Click_Big, OnComplite, false);
        audioPlayer.Play();
        this.Close();
        this.Destory();
    }
    
    void OnComplite(AudioSystem.AudioPlayer audioPlayer)
    {
        audioPlayer.Destory();
    }
    public void SelectImage()
    {
        transform.parent.GetComponent<GameMainMenuUI>().PlayClickAudioClip();
        NativeGallery.GetImageFromGallery(SelectCallBack, "选择图片");
    }
    public void SelectCallBack(string path)
    {
        Texture2D texture2D = new Texture2D(1, 1);
        if(File.Exists(path))
        {
            texture2D.LoadImage(File.ReadAllBytes(path));
            CompanyIcon.texture = texture2D;
            PlayerInformation.currentUserData.currentCompany.icon_Company = texture2D;
            PlayerInformation.currentUserData.currentCompany.SerializeObject_Icon();
            PlayerInformation.currentUserData.SaveCompany();
        }
    }
}
