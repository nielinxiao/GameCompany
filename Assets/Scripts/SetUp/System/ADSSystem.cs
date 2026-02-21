using System;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Advertisements;

public class ADSSystem : SystemBase,ISystemLife
{
    private static bool UseSystem = false;
    string _gameId;
    string _UnitId;
    public ADSSystem() : base(nameof(ADSSystem))
    {
    }
    public override void Awake()
    {
        Init();
    }
    ADSHandler adsHandler;
    void Init()
    {
        if(!UseSystem)
            return;
        adsHandler = new ADSHandler(OnLoadCallBack);
        switch (Application.platform)
        {
            case RuntimePlatform.IPhonePlayer:
                _gameId =ConfigUtils.ADS.IOSID;
                _UnitId = ConfigUtils.ADS._iOsAdUnitId;
                break;
            default:
                _gameId = ConfigUtils.ADS.AndoridID;
                _UnitId = ConfigUtils.ADS._androidAdUnitId;
                break;
        }
        if (!Advertisement.isInitialized && Advertisement.isSupported)
            Advertisement.Initialize(_gameId,GameRoot.Instance.isEditor , adsHandler);
        else
        {
            UnityEngine.Debug.Log("You Had Init Advertisement");
        }
    }
    private void OnLoadCallBack()
    {
        Advertisement.Show(_UnitId, aDSShowHandler);
        IsShowing = true;
    }
    bool IsShowing = false;
    ADSShowHandler aDSShowHandler;
    public void Show(Action onSuccessfully, Action onFailed)
    {
        if (!UseSystem)
        {
            onFailed?.Invoke();
            return;
        }
        if (Advertisement.isInitialized && !IsShowing)
        {
             aDSShowHandler = new ADSShowHandler
         (
         () => {
             IsShowing = false;
             onSuccessfully?.Invoke();
         },
         () => {
             IsShowing = false;
             onFailed?.Invoke();
         }
         );
            Advertisement.Load(_UnitId, adsHandler);

        }
    }

}
