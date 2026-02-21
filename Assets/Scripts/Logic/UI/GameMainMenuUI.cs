using System.Text;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;
using DG.Tweening;
using Sirenix.OdinInspector;
public class GameMainMenuUI : UIFormBase,IPlayerCanvas
{
    protected override void OnOpen()
    {
        base.OnOpen();
        PlayerCanvas.RegistMainCanvas(this);
        audioPlayer = GameRoot.audioSystem.GeneratedAudioPlayer(ConfigUtils.AudioClip_Config.Button_Click_Big, null, false);

        // 检查 currentCompany 是否为空
        if (PlayerInformation.currentUserData?.currentCompany != null)
        {
            Moneytext.text = $"${PlayerInformation.currentUserData.currentCompany.All_saveMoney}w";
        }
        else
        {
            Debug.LogError("[GameMainMenuUI] currentCompany 为空！");
            Moneytext.text = "$0w";
        }

        PlayerInformation.currentUserData.MoneyChanged += OnUserDataChanged;
        TimeSinger.Instance.TimeCallBack += TimeCallBack;
        PersonSinger.Instance.AddListener(PersonCountCallBack);
        PersonCountCallBack();
        RefreshPlayerInformation();
        MoneySinger.Instance.HappyAction += (pro) => HappyProgress.text = pro.ToString();
        MoneySinger.Instance.UpdateHappyProgress();
        LocalInit();
    }
    private void Start()
    {
        AddClientListener();
    }
    protected override void OnClose()
    {
        base.OnClose();
    }
    public void ActiveLookMode()
    {
        Root.gameObject.SetActive(false);
        LookRoot.gameObject.SetActive(true);
    }
    public void PersonCountCallBack()
    {
        PersonText.text = $"����{PersonSinger.Instance.currentPerson}/{PersonSinger.Instance.MaxPerson}";
    }
    public void DeActiveLookMode()
    {
        Root.gameObject.SetActive(true);
        LookRoot.gameObject.SetActive(false);
        ClickCompanyList();
    }
    public void ExitLookMode()
    {
        GameRoot.Instance.EnterMode(ModeType.MainGame);
    }
    public TextMeshProUGUI PersonText;
    public Transform Root;
    public Transform LookRoot;
    MoneyCompanyTips moneyCompanyTips;
    AudioSystem.AudioPlayer audioPlayer;
    CompanyTips CompanyTips;
    public TextMeshProUGUI Timer_text;
    BuldUIElement buldUIElement;
    ShopUIElement shopUIElement;
    public TextMeshProUGUI UserName;
    public TextMeshProUGUI CompanyName;
    public Image UserIcon;
    public TextMeshProUGUI HappyProgress;
    public void RefreshPlayerInformation()
    {
        UserName.text="�����:"+PlayerInformation.currentUserData.UserName;
        CompanyName.text= "��˾��:" + PlayerInformation.currentUserData.currentCompany.CompName;
        if(PlayerInformation.currentUserData.Icon!=null)
        {
            Texture2D texture2D= PlayerInformation.currentUserData.Icon;
            UserIcon.sprite =Sprite.Create(texture2D,new Rect(0,0,texture2D.width, texture2D.height),Vector2.zero);
        }
    }
    public void ClickShop()
    {
        PlayClickAudioClip();
        if (shopUIElement == null)
        {
            shopUIElement = GameRoot.uISystem.LoadUI(ConfigUtils.UI_Config.Shop, Vector3.zero, transform) as ShopUIElement;
            shopUIElement.Open();
        }
        else if (!shopUIElement.isClosed)
        {
            shopUIElement.Close();
        }
        else
        {
            shopUIElement.Open();
        }
    }
    public void ClickBuild()
    {
        PlayClickAudioClip();
        if (buldUIElement == null)
        {
            buldUIElement = GameRoot.uISystem.LoadUI(ConfigUtils.UI_Config.BuildUIElement,new Vector3(0, -1314.007f, 0), transform) as BuldUIElement;
            buldUIElement.Open();
        }
        else if (!buldUIElement.isClosed)
        {
            buldUIElement.Close();
        }
        else
        {
            buldUIElement.Open();
        }
    }
    public void ClickCompany()
    {
        PlayClickAudioClip();
        if (CompanyTips == null)
        {
            
            CompanyTips=GameRoot.uISystem.LoadUI(ConfigUtils.UI_Config.CompanyInformation, Vector3.zero, transform) as CompanyTips;
            CompanyTips.OpenByCompany(PlayerInformation.currentUserData.currentCompany);
            CompanyTips.Open();
        }
        else if (!CompanyTips.isClosed)
        {
            CompanyTips.Close();
        }
        else
        {
            CompanyTips.OpenByCompany(PlayerInformation.currentUserData.currentCompany);
            CompanyTips.Open();
        }
    }
    public void ClickCompanyList()
    {
        PlayClickAudioClip();
        if (moneyCompanyTips == null)
        {
            moneyCompanyTips=GameRoot.uISystem.LoadUI(ConfigUtils.UI_Config.CompanyList, Vector3.zero, transform) as MoneyCompanyTips;
            moneyCompanyTips.Open();
        }
        else if (!moneyCompanyTips.isClosed)
        {
            moneyCompanyTips.Close();
        }
        else
        {
            moneyCompanyTips.Open();
        }
    }
    private void OnDestroy()
    {
        audioPlayer.Destory();
        PlayerInformation.currentUserData.MoneyChanged -= OnUserDataChanged;
        PersonSinger.Instance.RemoveListenr(PersonCountCallBack);
        MoneySinger.Instance.HappyAction -= (pro) => HappyProgress.text = pro.ToString();
        worldPhoneForm.UnInit();
        RemoveClientListener();
    }
    public InputMotion InputMotion;
    public void LocalInit()
    {
        worldPhoneForm.Init(worldPhoneForm.transform.parent, worldPhoneForm.transform.localPosition);
        worldPhoneForm.Init();
        EmailUIForm.Init(EmailUIForm.transform.parent, EmailUIForm.transform.localPosition);
        EmailUIForm.Init();
    }
    public void AddClientListener()
    {
        GameRoot.iocpSystem.AddListener(ServerCMD.EmailMessage, EmailUIForm.AccpetServer);
    }
    public void RemoveClientListener()
    {
        GameRoot.iocpSystem.RemoveListener(ServerCMD.EmailMessage, EmailUIForm.AccpetServer);
    }
    StringBuilder timerBuilder = new StringBuilder();
    public void TimeCallBack(float time)
    {
        timerBuilder.Clear();
        int hours = (int)time;
        int minutes =(int)((time-hours)*60);
        if(hours<=12)
            timerBuilder.Append("AM");
        else
            timerBuilder.Append("PM");
        timerBuilder.Append(hours);
        timerBuilder.Append(":");
        timerBuilder.Append(minutes);
        Timer_text.text = timerBuilder.ToString();
    }
    public void PlayClickAudioClip()
    {
        audioPlayer?.Play();
    }
    public void DeActiveTouchMotion()
    {
        if (InputMotion != null)
        {
            InputMotion.isLocked = true;
            InputMotion.DisableGestures(); // 完全禁用手势识别器，确保建造模式下相机不会移动
            Debug.Log("[GameMainMenuUI] 相机控制已禁用 - isLocked=true, 手势已移除");
        }
        else
        {
            Debug.LogError("[GameMainMenuUI] InputMotion为null，无法禁用相机控制！");
        }
    }
    public void ActiveTouchMotion()
    {
        if (InputMotion != null)
        {
            InputMotion.isLocked = false;
            InputMotion.EnableGestures(); // 重新启用手势识别器
            Debug.Log("[GameMainMenuUI] 相机控制已启用 - isLocked=false, 手势已恢复");
        }
        else
        {
            Debug.LogError("[GameMainMenuUI] InputMotion为null，无法启用相机控制！");
        }
    }
    UserDataUI dataUI=null;
    public void UserClick()
    {
        PlayClickAudioClip();
        if (dataUI == null)
        {
            dataUI = GameRoot.uISystem.LoadUI(ConfigUtils.UI_Config.IconUser, Vector3.zero,transform) as UserDataUI;
            dataUI.Open();
        }
        else
        {
            if (dataUI.isClosed)
            {
                dataUI.Open();
            }
            else
            {
                dataUI.Close();
            }
        }
    }
    public TextMeshProUGUI Moneytext;
    public void OnUserDataChanged(float Lastmoney, float Nowmoney)
    {
        DOTween.To(
            () => Lastmoney,
            (much) => Moneytext.text = $"${(much.ToString("0.00"))}w",
            Nowmoney,
            1
            );
    }
    [NonSerialized]
    public Reward reward;
    public void OpenReward()
    {
        PlayClickAudioClip();
        if (reward != null)
        {
            if (reward.isClosed)
            {
                reward.Open();
            }
            else
            {
                reward.Close();
            }
        }
        else
        {
            reward = GameRoot.uISystem.LoadUI(ConfigUtils.UI_Config.reward, Vector3.zero, transform) as Reward;
            reward.Open();
        }
    }
    [NonSerialized]
    public PhoneUIElement phoneUIElement;
    public void OnphoneUIElementClick()
    {
        PlayClickAudioClip();
        if (phoneUIElement != null) 
        {
            if(phoneUIElement.isClosed)
            {
                phoneUIElement.Open();
            }
            else
            {
                phoneUIElement.Close();
            }
        }
        else
        {
            phoneUIElement = GameRoot.uISystem.LoadUI(ConfigUtils.UI_Config.phone, new Vector3(0,47,0), transform) as PhoneUIElement;
            phoneUIElement.Open();
        }
    }
    PersonUIElement personUIElement;
    public void ClickPersonList()
    {
        PlayClickAudioClip();
        if (personUIElement != null)
        {
            if (personUIElement.isClosed)
            {
                personUIElement.Open();
            }
            else
            {
                personUIElement.Close();
            }
        }
        else
        {
            personUIElement = GameRoot.uISystem.LoadUI(ConfigUtils.UI_Config.PersonList, Vector3.zero, transform) as PersonUIElement;
            personUIElement.Open();
        }
    }
    [ChildGameObjectsOnly]
    public WorldPhoneForm worldPhoneForm;
    public void ClickWorldPhoneForm()
    {
        PlayClickAudioClip();
        if (worldPhoneForm.isClosed)
        {
            worldPhoneForm.Open();
        }
        else
        {
            worldPhoneForm.Close();
        }
    }
    [ChildGameObjectsOnly]
    public EmailUIForm EmailUIForm;
    public void ClickEmail()
    {
        PlayClickAudioClip();
        if (EmailUIForm.isClosed)
        {
            EmailUIForm.Open();
        }
        else
        {
            EmailUIForm.Close();
        }
    }
}