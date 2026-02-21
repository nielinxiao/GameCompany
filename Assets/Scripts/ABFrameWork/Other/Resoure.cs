using System.Collections;
using System.Collections.Generic;
using UnityEngine;
namespace ABFrameWorlk
{
    public class Resoure : IResoure, ITick, IAwaiter<Object>
    {
        ABundleAsyncState bundleAsyncState;
        public Object data { get; private set; }
        public ABundle bundle { get; private set; }

        public bool IsCompleted { get; private set; }
        public int reference = 0;

        AssetBundleRequest assetBundleRequest;
        public Resoure(string url,string ABName, ABundle bundle)
        {
            this.url = url;
            this.ABName = ABName;
            this.bundle = bundle;
        }
        public override void Load(string url)
        {
            if (data != null)
            {
                Resources.UnloadAsset(data);
            }
            this.url = url;
            data = bundle.GetResult().LoadAsset(url);
            /*if (data == null)
                Debug.Log($"url:{url} 同步加载失败");
            else
                Debug.Log($"url:{url} 同步加载");*/
        }
        public override void LoadAsync(string objectName)
        {
            if (data != null)
            {
                //没有手动释放采用自动同步释放
                Resources.UnloadAsset(data);
            }
            IsCompleted=false;
            assetBundleRequest = bundle.GetResult().LoadAssetAsync(objectName);
            bundleAsyncState = ABundleAsyncState.Loading;
            //Debug.Log($"url:{url} 异步加载");
        }
        public override void UnLoad()
        {
            //Debug.Log($"url:{url} 卸载");
            if (data != null)
            {
                if(!(data is GameObject))
                {
                    Resources.UnloadAsset(data);
                }
            }
        }
        public void Tick()
        {
            if (bundleAsyncState == ABundleAsyncState.Loading)
            {
                if (assetBundleRequest.isDone)
                {
                    data = assetBundleRequest.asset;
                    IsCompleted = true;
                    OnCompletedCallBack.Invoke();
                    OnCompletedCallBack = null;
                    bundleAsyncState = ABundleAsyncState.None;
                }
            }
        }
        public IAwaiter<Object> GetAwaiter()
        {
            return this;
        }

        public Object GetResult()
        {
            return data;
        }
        System.Action OnCompletedCallBack;
        public void OnCompleted(System.Action continuation)
        {
            if (IsCompleted)
            {
                continuation.Invoke();
            }
            else
            {
                OnCompletedCallBack += continuation;
            }
        }
    }
}