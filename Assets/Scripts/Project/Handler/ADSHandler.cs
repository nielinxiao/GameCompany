using System;
using UnityEngine;
using UnityEngine.Advertisements;

public class ADSHandler : IUnityAdsInitializationListener, IUnityAdsLoadListener
{
    public ADSHandler(Action onLoadCallBack)
    {
        this.onLoadCallBack = onLoadCallBack;
    }
    public Action onLoadCallBack;
    public void OnInitializationComplete()
    {
        Debug.Log("广告系统构建成功");
    }

    public void OnInitializationFailed(UnityAdsInitializationError error, string message)
    {
        Debug.Log("广告系统构建失败:" + message);
    }
    public void OnUnityAdsAdLoaded(string placementId)
    {
        Debug.Log("广告加载成功");
        onLoadCallBack?.Invoke();
    }
    public void OnUnityAdsFailedToLoad(string placementId, UnityAdsLoadError error, string message)
    {
        Debug.Log("广告加载失败:" + message);
    }
  
}
public class ADSShowHandler: IUnityAdsShowListener
{
    Action OnSuccessfully;
    Action OnFailed;
    public ADSShowHandler(Action OnSuccessfully,Action OnFailed) 
    {
        this.OnSuccessfully = OnSuccessfully;
        this.OnFailed = OnFailed;
    }
    public void OnUnityAdsShowClick(string placementId)
    {
        Debug.Log("用户点击");
    }

    public void OnUnityAdsShowComplete(string placementId, UnityAdsShowCompletionState showCompletionState)
    {
        OnSuccessfully?.Invoke();
    }

    public void OnUnityAdsShowFailure(string placementId, UnityAdsShowError error, string message)
    {
        OnFailed?.Invoke();
    }

    public void OnUnityAdsShowStart(string placementId)
    {
        Debug.Log("广告开始");
    }
}
