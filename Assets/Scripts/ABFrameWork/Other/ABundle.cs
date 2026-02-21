using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
public enum ABundleAsyncState
{
    None,
    UnLoading,
    Loading
}
public class ABundle: IAwaiter<AssetBundle>,ITick
{
    public static string ABPath;
    ABundleAsyncState state;
    public string url;
    public bool IsCompleted { get;private set; }
    AssetBundleCreateRequest assetBundleCreate;
    AsyncOperation UnloadOperation;
    AssetBundle asset;
    public List<ABundle>denepences=new List<ABundle>();
    public int reference=0;
    public bool isDestory = false;
    public ABundle(string url)
    {
        this.url=url;
        IsCompleted = false;
    }
    Action CompliteAction;
    public void OnCompleted(Action continuation)
    {
        if (!IsCompleted)
        {
            CompliteAction += continuation;
        }
        else
        {
            continuation.Invoke();
        }
    }
  
    public void Load()
    {
        UnLoad();
        asset = AssetBundle.LoadFromFile(Path.Combine(ABPath, url).Replace('\\','/'));
        IsCompleted = true;
        CompliteAction?.Invoke();
    }
    public void UnLoad()
    {
        if(asset!=null)
        {
            isDestory = true;
            IsCompleted = true;
            CompliteAction?.Invoke();
            asset.Unload(true);
            //Debug.Log($"url:{url} 卸载");
        }
    }
    public void LoadAsync()
    {
        UnLoad();
        assetBundleCreate = AssetBundle.LoadFromFileAsync(ABPath+"/"+url);
        IsCompleted = false;
        state = ABundleAsyncState.Loading;
    }
    public void UnLoadAsync()
    {
        if (asset != null)
        {
            IsCompleted = false;
            UnloadOperation =asset.UnloadAsync(true);
            state = ABundleAsyncState.UnLoading;
            //Debug.Log($"url:{url} 异步卸载");
        }
    }
    public IAwaiter<AssetBundle> GetAwaiter()
    {
        return this;
    }

    public AssetBundle GetResult()
    {
        if (asset != null)
            return asset;
        else if (!isDestory)
            throw new Exception("this assetbundle is no Load or have error path!");
        else return null;
    }

    public void Tick()
    {
        switch (state)
        {
            case ABundleAsyncState.Loading:
                if (assetBundleCreate.isDone)
                {
                    asset = assetBundleCreate.assetBundle;
                    IsCompleted = true;
                    CompliteAction?.Invoke();
                    CompliteAction = null;
                    state = ABundleAsyncState.None;
                    //Debug.Log($"url:{url} is Done!!!");
                }
                else
                {
                    //Debug.Log($"url:{url}加载进度:"+assetBundleCreate.progress.ToString("0.0"));
                }
                break;
            case ABundleAsyncState.UnLoading:
                if (UnloadOperation.isDone)
                {
                    isDestory = true;
                    IsCompleted = true;
                    CompliteAction?.Invoke();
                    CompliteAction = null;
                    asset = null;
                    state = ABundleAsyncState.None;
                   // Debug.Log($"url:{url} is UnLoad!!!");
                }
                else
                {
                   // Debug.Log($"url:{url}卸载进度:"+UnloadOperation.progress.ToString("0.0"));
                }
                break;
        }

        
    }
}
