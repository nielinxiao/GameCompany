using Newtonsoft.Json;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Security.Policy;
using System.Text;
using System.Threading.Tasks;
using TapSDK.Core;
using TapSDK.Login;
using TMPro;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MainMenuUI : UIFormBase, IPlayerCanvas
{
    public GameObject Progress;
    public TextMeshProUGUI Lable_Progress;
    public TextMeshProUGUI Lable_Progress_Value;
    public TextMeshProUGUI Lable;
    public RectTransform progress_bar;
    public float maxWidth_bar;
    public Transform progress_Root;
    public Button startGame;
    public Button LoginButton;
    public Action SignCallBack;
    private void Awake()
    {
        PlayerCanvas.RegistMainCanvas(this);
    }
    private void Start()
    {
        GameRoot.versionSystem.progressAction += OnVersionProgress;
        GameRoot.versionSystem.OnComplitedMethod += OnComplited;
    }
    protected override void OnOpen()
    {
        base.OnOpen();
    }
    protected override void OnClose()
    {
        base.OnClose();
        Destory();
    }
    public async void OnComplited(bool isDownload)
    {
        EnableLabel_Progress(false);
        EnableLabel(true);
        if(isDownload)
        {
            Lable.text = "��ѹ���";
        }
        else
        {
            Lable.text = "У�����";
        }
        EnableLabel(false);
        TapTapSdkOptions tapTapSdkOptions = new TapTapSdkOptions()
        {
            region = TapTapRegionType.CN,
            clientId = "xlkcmjrmg8okk4dgaa",
            clientToken = "7GAq3lKnIPmxGWDz9rUoPN16Rq6XriQ2e5RR9zfz",
        };
        TapTapSDK.Init(tapTapSdkOptions);

        TapTapAccount currentUser = await TapTapLogin.Instance.GetCurrentTapAccount();
        if (currentUser == null|| currentUser.openId==null ||String.IsNullOrEmpty(currentUser.openId)) 
        {
            EnableLogin(true);
        }
        else
        {
            LoginSuccessfully(currentUser);
        }
      
    }
    public  void EnableLogin(bool active)
    {
        LoginButton.gameObject.SetActive(active);
    }
    public void LoginClick()
    {
        GameRoot.signSystem.Login(LoginSuccessfully, LoginFailed);
    }
    public void LoginSuccessfully(TapTapAccount tapTapAccount)
    {
        Debug.Log(tapTapAccount.openId);
        PlayerInformation.currentUserData =  new UserData();
        PlayerInformation.currentUserData.UserID = tapTapAccount.openId;
        PlayerInformation.currentUserData.UserName = tapTapAccount.name;

        // 登录后强制重建HTTP会话，确保Token和当前UserID一致
        GameRoot.httpSystem.JoinServer(
            () =>
            {
                // HTTP连接成功后，连接聊天Socket
                if (GameRoot.chatSocketSystem != null)
                {
                    GameRoot.chatSocketSystem.Connect();
                }
                RequestFirstCreateState(tapTapAccount);
            },
            error =>
            {
                Debug.LogError($"[MainMenuUI] 登录后重建会话失败: {error}");
                LoginFailed();
            },
            true
        );
    }
    private void RequestFirstCreateState(TapTapAccount tapTapAccount)
    {
        ValueToken valueToken = new ValueToken((pkg) => FirstCreatBack(pkg, tapTapAccount));
        GameRoot.redisSystem.IsFirstCreat(valueToken);
    }
    private  void FirstCreatBack(Pkg pkg, TapTapAccount tapTapAccount)
    {
        Debug.Log($"[MainMenuUI] FirstCreatBack - FirstCreat: {pkg.Body.serverMessage.FirstCreat}");

        if (pkg.Body.serverMessage.FirstCreat)
        {
            Debug.Log("[MainMenuUI] 首次创建玩家，调用 PlayerInit()");
            PlayerInit();
            GameRoot.Instance.StartCoroutine(PlayerInitIcon(tapTapAccount.avatar));
        }
        else
        {
            Debug.Log("[MainMenuUI] 玩家已存在，调用 GetCompany()");
            PlayerInformation.currentUserData.GetCompany(() =>
            {
                Debug.Log("[MainMenuUI] GetCompany 回调执行");

                // HTTP模式：登录成功后重新连接服务器以更新用户信息
                GameRoot.httpSystem.JoinServer(() =>
                {
                    Debug.Log("[MainMenuUI] 重新连接服务器成功");
                    ValueToken valueToken = new ValueToken(OnLoadImage);
                    GameRoot.redisSystem.GetValueAsync(PlayerInformation.currentUserData.UserID, ConfigUtils.ServerKeys_Config.icon, valueToken);
                    PlayerInformation.currentUserData.Money = PlayerInformation.currentUserData.currentCompany.All_saveMoney;

                    Debug.Log($"[MainMenuUI] 登录后数据准备完成，触发SignCallBack，UserID: {PlayerInformation.currentUserData.UserID}");
                    SignCallBack?.Invoke();
                    EnableLogin(false);
                    EnableStartGame(true);
                }, error =>
                {
                    Debug.LogError($"[MainMenuUI] 重新连接服务器失败: {error}");
                }, forceReconnect: true);
            });
        }
    }
    private void OnLoadImage(Pkg pkg)
    {
        Texture2D texture = new Texture2D(1, 1);
        texture.LoadImage((ReadValue)pkg.Body.serverMessage.JsonValue);
        PlayerInformation.currentUserData.Icon = texture;
        PlayerInformation.currentUserData.currentCompany.DeSerializeObject_Icon();

    }
    private void PlayerInit()
    {
        Debug.Log("[MainMenuUI] PlayerInit 开始 - 首次初始化玩家");

        PlayerInformation.currentUserData.GetCompany(()=>
        {
            Debug.Log("[MainMenuUI] PlayerInit - GetCompany 回调执行");

            // HTTP模式：首次初始化后重新连接服务器
            GameRoot.httpSystem.JoinServer(() =>
            {
                Debug.Log("[MainMenuUI] PlayerInit - 重新连接服务器成功");
                Debug.Log($"[MainMenuUI] 首次创建流程完成，触发SignCallBack，UserID: {PlayerInformation.currentUserData.UserID}");
                SignCallBack?.Invoke();
                EnableLogin(false);
                EnableStartGame(true);
                Debug.Log("[MainMenuUI] PlayerInit - 启用开始游戏按钮");
            }, error =>
            {
                Debug.LogError($"[MainMenuUI] PlayerInit - 重新连接失败: {error}");
            }, forceReconnect: true);
        });

        Debug.Log("[MainMenuUI] PlayerInit - 保存空员工列表");
        GameRoot.redisSystem.SetValueAsync(PlayerInformation.currentUserData.UserID, ConfigUtils.ServerKeys_Config.persons, JsonConvert.SerializeObject(new List<StaffData>()));
    }
    IEnumerator PlayerInitIcon( string url)
    {
        UnityWebRequest unityWebRequest = new UnityWebRequest(url);
        DownloadHandlerTexture downloadHandlerTexture = new DownloadHandlerTexture();
        unityWebRequest.downloadHandler = downloadHandlerTexture;
        yield return unityWebRequest.SendWebRequest();
        PlayerInformation.currentUserData.Icon = downloadHandlerTexture.texture;
        GameRoot.redisSystem.SetValueAsync(PlayerInformation.currentUserData.UserID, ConfigUtils.ServerKeys_Config.icon, downloadHandlerTexture.texture.EncodeToJPG());
    }
    public void LoginFailed()
    {
        TitleTips titleTips = GameRoot.uISystem.LoadUI(ConfigUtils.UI_Config.Title, Vector3.zero,transform) as TitleTips;
        titleTips.title.text = "���ȡ����¼";
        titleTips.Open();
        Debug.Log("���ȡ��");
    }
    public void WriteZIPCallBack()
    {
        EnableLabel_Progress(false);
        EnableLabel(true);
        Lable.text = "����д�뱾�ش洢";
    }
    public void UnPackZIPCallBack()
    {
        EnableLabel_Progress(false);
        EnableLabel(true);
        Lable.text = "���ڽ�ѹ�ļ�";
    }
    public void PlayStartGame()
    {
        Debug.Log("������Ϸ");
        Debug.Log($"[MainMenuUI] PlayStartGame - 当前登录UserID: {PlayerInformation.currentUserData.UserID}");
        AudioSystem.AudioPlayer audioPlayer= GameRoot.audioSystem.GeneratedAudioPlayer(ConfigUtils.AudioClip_Config.Button_Click_Big, PlayGameButtonCallBack, false);
        audioPlayer.Play();
        EnableStartGame(false);
        EnableLabel_Progress(false);
        EnableLabel(false);
        Close();
        SceneProgressUIForm sceneProgressUIForm= GameRoot.uISystem.LoadUI(ConfigUtils.UI_Config.SceneProgressForm, Vector3.zero, null)as SceneProgressUIForm;
        sceneProgressUIForm.OpenProgress(
            ()=>
            {
                sceneToken = GameRoot.sceneSystem.LoadScene(ConfigUtils.SceneName_Config.Game_Scene, null, () => OnLoadGameSceneComplited(sceneProgressUIForm), false);
            }
            );
        //sceneProgressUIForm.OpenProgress(() => GameRoot.sceneSystem.LoadScene(ConfigUtils.SceneName_Config.Game_Scene, null, () => OnLoadGameSceneComplited(sceneProgressUIForm)));
    }
    SceneToken sceneToken;
    public void OnLoadGameSceneComplited(SceneProgressUIForm sceneProgressUIForm)
    {
        sceneToken.asyncOperation.allowSceneActivation = true;
        Debug.Log($"[MainMenuUI] OnLoadGameSceneComplited - 进入MainGame模式, UserID: {PlayerInformation.currentUserData.UserID}");
        GameRoot.Instance.EnterMode(ModeType.MainGame);
    }
    public void PlayGameButtonCallBack(AudioSystem.AudioPlayer audioPlayer)
    {
        audioPlayer.Destory();
    }
    private void EnableLabel_Progress(bool active)
    {
        Lable_Progress.gameObject.SetActive(active);
        Lable_Progress_Value.gameObject.SetActive(active);
        progress_Root.gameObject.SetActive(active);
    }
    private void EnableStartGame(bool active)
    {
        startGame.gameObject.SetActive(active);
    }
    private void EnableLabel(bool active)
    {
        Lable.gameObject.SetActive(active);
    }
    StringBuilder precent=new StringBuilder();
    public void OnVersionProgress(float progress)
    {
        Lable_Progress.text = "����������Դ��";
        progress_bar.sizeDelta =new Vector2(progress * maxWidth_bar,progress_bar.sizeDelta.y);
        precent.Clear();
        precent.Append((progress * 100).ToString("0.0"));
        precent.Append('%');
        Lable_Progress_Value.text = precent.ToString();
    }

    public void PlayClickAudioClip()
    {
    }
}
