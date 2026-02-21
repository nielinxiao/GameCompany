using Sirenix.OdinInspector;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Rendering;

public class GameRoot : MonoBehaviour
{
    private static GameRoot instance;
    public static GameRoot Instance 
    { 
        get 
        { 
            return instance; 
        }
    }
    public static ResourceSystem resourcesSystem;
    public static UISystem uISystem;
    public static VersionSystem versionSystem;
    public static AudioSystem audioSystem;
    public static SceneSystem sceneSystem;
    public static RedisSystem redisSystem;
    public static SignSystem signSystem;
    public static ADSSystem adsSystem;
    public static PushNorifySystem pushNorifySystem;
    public static TimeSystem timeSystem;
    public static HttpSystem httpSystem;
    public static ChatSocketSystem chatSocketSystem; // 聊天专用Socket
    public static IOCPSystem iocpSystem; // 兼容层，HTTP模式下为空实现
    public HotLoadHyBird hotLoadHyBird;
    public bool isEditor=false;
    public List<ISystemLife>SystemLives=new List<ISystemLife>();
    private void Awake()
    {
        Application.targetFrameRate = 60; 
        DebugManager.instance.enableRuntimeUI = false;
        DontDestroyOnLoad(this);
        instance = this;
        RegistSystem();

        AwakeSystem();
        RegistGameManager();
    }
    private void RegistGameManager()
    {
        hotLoadHyBird.OnHotComplite += () =>
        {
            GameObject prefab_GameManger = GameRoot.resourcesSystem.NameToLoad(ConfigUtils.Manager_Config.GameManager).GetResult() as GameObject;
            GameObject game= GameObject.Instantiate(prefab_GameManger);
            DontDestroyOnLoad (game);
        };
    }
    private void RegistSystem()
    {
        PermissionSystem permissionSystem = new PermissionSystem();
        RegistLive(permissionSystem);
        versionSystem = new VersionSystem();
        RegistLive(versionSystem);
        resourcesSystem = new ResourceSystem();
        RegistLive(resourcesSystem);
        uISystem = new UISystem();
        RegistLive(uISystem);
        audioSystem = new AudioSystem();
        RegistLive(audioSystem);
        sceneSystem = new SceneSystem();
        signSystem=new SignSystem();
        RegistLive(sceneSystem);

        // HTTP通信系统必须在RedisSystem之前初始化
        httpSystem=new HttpSystem();
        RegistLive(httpSystem);

        // 聊天Socket系统（只用于世界聊天实时推送）
        chatSocketSystem=new ChatSocketSystem();
        RegistLive(chatSocketSystem);

        iocpSystem=new IOCPSystem(); // 兼容层
        RegistLive(iocpSystem);

        // RedisSystem依赖HttpSystem
        redisSystem=new RedisSystem();
        RegistLive(redisSystem);

        adsSystem=new ADSSystem();
        RegistLive(adsSystem);
        pushNorifySystem=new PushNorifySystem();
        RegistLive(pushNorifySystem);
        timeSystem=new TimeSystem();
        RegistLive(timeSystem);
    }
    private Dictionary<ModeType,ModeBase>Modes = new Dictionary<ModeType,ModeBase>();
    [ShowInInspector]
    public ModeBase CurrentMode;
    public void RegistMode(ModeType modeType, ModeBase modeBase)
    {
        Modes.Add(modeType, modeBase);
    }
    public void EnterMode(ModeType modeType)
    {
        if(Modes.TryGetValue(modeType,out ModeBase modeBase))
        {
            if (CurrentMode==null||CurrentMode.type!= modeBase.type)
            {
                ExitMode();
                CurrentMode = modeBase;
                CurrentMode.OnEnter();
                Debug.LogWarning($"Enter:{CurrentMode.type}");
            }
        }
    }
    public void ExitMode()
    {
        if(CurrentMode!=null)
        {
            CurrentMode.OnExit();
        }
    }
    private void Start()
    {
        StartSystem();
    }
    private void OnDestroy()
    {
        UnInitSystem();
    }
    private void Update()
    {
        TickSystem();
    }
    private void LateUpdate()
    {
        LateTickSystem();
    }
    private void RegistLive(ISystemLife systemLife)
    {
        SystemLives.Add(systemLife);
    }
    private void UnRegistLive(ISystemLife systemLife)
    {
        SystemLives.Remove(systemLife);
    }
    private void AwakeSystem()
    {
        foreach (var ISystem in SystemLives)
        {
            ISystem.Awake();
        }
    }
    private void TickSystem()
    {
        foreach (var ISystem in SystemLives)
        {
            ISystem.Update();
        }
        CurrentMode?.Tick();
    }
    private void LateTickSystem()
    {
        foreach (var ISystem in SystemLives)
        {
            ISystem.LateUpdate();
        }
    }
    private void StartSystem()
    {
        foreach(var ISystem in SystemLives)
        {
            ISystem.Start();
        }
    }
    public void UnInitSystem()
    {
        foreach (var ISystem in SystemLives)
        {
            ISystem.Destory();
        }
    }
}
