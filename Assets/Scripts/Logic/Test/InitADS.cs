using DG.Tweening;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;
using UnityEngine.UI;
public class InitADS : MonoBehaviour, IUnityAdsInitializationListener,IUnityAdsLoadListener,IUnityAdsShowListener
{
     string _androidAdUnitId = "Rewarded_Android";
     string _iOsAdUnitId = "Rewarded_iOS";
    public static string AndoridID= "5821693";
    public static string IOSID= "5821692";
    public bool TestGameMode = false;
    public Text DebugText;
    string _gameId;
    string _UnitId;
    void Awake()
    {
        Init();
    }
    void Init()
    {
        switch (Application.platform)
        {
            case RuntimePlatform.IPhonePlayer:
                _gameId = IOSID;
                _UnitId = _iOsAdUnitId;
                break;
            default:
                _gameId = AndoridID;
                _UnitId = _androidAdUnitId;
                break;
        }
        if (!Advertisement.isInitialized&&Advertisement.isSupported)
        Advertisement.Initialize(_gameId, TestGameMode,this);
        else
        {
            UnityEngine.Debug.Log("You Had Init Advertisement");
        }
    }
    public bool IsComplited= true;
    
    public float OpenDurationTime = 0.5f;
    public float CloseDurationTime = 0.3f;
    public bool IsShowing = false;
    string GUIDebugLog = "";
    private void Debug(string LogStr)
    {
        GUIDebugLog += LogStr + "\n";
    }
    public void OnButtonClick_Show()
    {
        if(Advertisement.isInitialized&&! IsShowing)
        {
            if(IsLoad)
            {
                Advertisement.Show(_UnitId,this);
                IsShowing=true;
            }
            else
            {
                Debug("请等待广告加载完成");
            }
        }
    }
    public void ADS_Load()
    {
        if (Advertisement.isInitialized)
        {
            Advertisement.Load(_UnitId,this);
        }
    }
    int number = 10;
    private Rect LableRect=new Rect(0,15,150,15);
    private Rect TextAeaRect = new Rect(0, 40, 300, 400);
    private Rect WindowsRect = new Rect(0, 0, 300, 440);
    public GUIStyle FontStyle;
    private void OnGUI()
    {
        WindowsRect=GUI.Window(0, WindowsRect, GUIWindow, "调试窗口");
    }
    public void GUIWindow(int WindowID)
    {
        GUI.Label(LableRect, "当前金币:" + number, FontStyle);
        GUI.TextField(TextAeaRect, GUIDebugLog);
        GUI.DragWindow();
    }
    public void OnInitializationComplete()
    {
        Debug("广告ROOT加载成功，接下来预加载广告");
        ADS_Load();
    }

    public void OnInitializationFailed(UnityAdsInitializationError error, string message)
    {
        Debug("广告ROOT加载失败 error:"+error+ message);
    }
    private bool IsLoad=false;
    public void OnUnityAdsAdLoaded(string placementId)
    {
        IsLoad = true;
        Debug("预加载广告成功");
    }

    public void OnUnityAdsFailedToLoad(string placementId, UnityAdsLoadError error, string message)
    {
        IsLoad = false;
        Debug("预加载广告失败 错误:" + error+ message);
    }

    public void OnUnityAdsShowFailure(string placementId, UnityAdsShowError error, string message)
    {
        Debug("广告展示失败 错误：" + error + message);
    }

    public void OnUnityAdsShowStart(string placementId)
    {
        Debug("广告开始展示");
    }
    public void OnUnityAdsShowClick(string placementId)
    {
        Debug("用户点击广告 大大有赏 给予奖励20");
        number += 20;
    }
    public void OnUnityAdsShowComplete(string placementId, UnityAdsShowCompletionState showCompletionState)
    {
        switch (showCompletionState) 
        {
            case UnityAdsShowCompletionState.SKIPPED:
                Debug("玩家跳过视频，不给予奖励");
                break;
            case UnityAdsShowCompletionState.COMPLETED:
                Debug("玩家没有跳过广告，给予奖励10");
                number += 10;
                break;
            case UnityAdsShowCompletionState.UNKNOWN:
                Debug("遇到未知问题 按照未查看广告处理");
                break;
        }
        IsShowing = false;
        ADS_Load();
    }
}
