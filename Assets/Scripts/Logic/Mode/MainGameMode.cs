using Baidu.Aip.ContentCensor;
using UnityEngine;

public class MainGameMode : ModeBase
{
    public MainGameMode() : base(ModeType.MainGame) { }
    AudioSystem.AudioPlayer audioPlayer;
    public override void OnEnter()
    {
        Debug.Log("[MainGameMode] 开始进入主游戏模式");
        try
        {
            audioPlayer =GameRoot.audioSystem.GeneratedAudioPlayer
                 (
                 ConfigUtils.AudioClip_Config.MainBG,
                 null,
                 true
                 );
            TimeSinger.Instance.AllowTime();
            PersonSinger.Instance.Init();

            // 先创建 RedPointManager，确保 UI 初始化时可用
            GameObject prefab_RedManager = GameRoot.resourcesSystem.NameToLoad(ConfigUtils.Manager_Config.RedPointManager).GetResult() as GameObject;
            RedManager=GameObject.Instantiate(prefab_RedManager);
            GameObject.DontDestroyOnLoad(RedManager);

            BagSinger.Instance.OnComplited = OnBagLoadComplited;
            BuildSinger.Instance.OnComplited = OnBuildLoadComplited;
            Debug.Log($"[MainGameMode] 注册加载链路 - UserID: {PlayerInformation.currentUserData.UserID}, BagSinger.OnComplited -> OnBagLoadComplited, BuildSinger.OnComplited -> StaffsSinger.Init");
            BagSinger.Instance.Init();

            Debug.Log("[MainGameMode] 开始加载主界面UI");
            uIFormBase = GameRoot.uISystem.LoadUI(ConfigUtils.UI_Config.MainCanvas, Vector3.zero, null);
            GameObject.DontDestroyOnLoad(uIFormBase.gameObject);

            Debug.Log("[MainGameMode] 打开主界面UI");
            uIFormBase.Open();

            audioPlayer.Play();
            MoneySinger.Instance.Init();
            DebugUtils.Log("start play background music");
        }
        catch (System.Exception ex)
        {
            Debug.LogError($"[MainGameMode] OnEnter 异常: {ex.Message}\n{ex.StackTrace}");
        }
        finally
        {
            // 无论是否出错，都要允许场景加载完成
            Debug.Log("[MainGameMode] 允许场景加载完成");
            if (SceneProgressUIForm.instance != null)
            {
                SceneProgressUIForm.instance.EnableAllowLoad();
            }
        }
    }
    private void OnBagLoadComplited()
    {
        string userIdentifier = PlayerInformation.currentUserData.UserID;
        string buildDataKey = ConfigUtils.ServerKeys_Config.block;
        Debug.Log($"[MainGameMode] 背包加载完成，调用BuildSinger.Init, UserID: {userIdentifier}, Key: {buildDataKey}");
        BuildSinger.Instance.Init();
    }
    /// <summary>
    /// 黑盒测试：无参数调用，输出为记录建筑加载完成日志并继续初始化员工数据。
    /// </summary>
    private void OnBuildLoadComplited()
    {
        string userIdentifier = PlayerInformation.currentUserData.UserID;
        string buildDataKey = ConfigUtils.ServerKeys_Config.block;
        int buildObjectCount = CountUtils<BuildObjectBase>.Instance.GetCount();
        Debug.Log($"[MainGameMode] 建筑加载完成，继续调用StaffsSinger.Init, UserID: {userIdentifier}, Key: {buildDataKey}, 当前建筑数量: {buildObjectCount}");
        StaffsSinger.Instance.Init();
    }
    GameObject RedManager;
    UIFormBase uIFormBase;
    public override void OnExit()
    {
        audioPlayer.Stop();
        audioPlayer.Destory();
        MoneySinger.Instance.Uninit();
        TimeSinger.Instance.StopTime();
        BuildSinger.Instance.UnInit();
        PersonSinger.Instance.Unint();
        StaffsSinger.Instance.UnInit();
        uIFormBase.Close();
        uIFormBase.Destory();
        GameObject.Destroy(RedManager);
    }

    public override void Tick()
    {
    }
}
