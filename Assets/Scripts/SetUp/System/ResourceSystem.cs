using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ABFrameWorlk;
using System.Threading.Tasks;
using System;
public class ResourceSystem : SystemBase
{
    public ResourceSystem() : base(nameof(ResourceSystem))
    {
        Manager = ResoureManager.Instance;
    }
    private readonly ResoureManager Manager;
    AssetPrefabElement assetPrefabElement;
    public Action OnComplited=null;
    public bool IsComplited {  get; private set; }
    public override void Awake()
    {
        IsComplited = false;
        assetPrefabElement = Resources.Load<AssetPrefabElement>(ConfigUtils.ResourceSystem_Config.AssestPath);
        Debug.Log("¼ÓÔØÁËassetÂ·¾¶£º" + assetPrefabElement.Keys.Count);
        GameRoot.versionSystem.OnComplitedMethod = (bo) =>
        {
           Manager.Init
           (
           ConfigUtils.ResourceSystem_Config.ManifestPath,
           ConfigUtils.ResourceSystem_Config.DataPath,
           ConfigUtils.BundlePath,
           DebugUtils.Log
           );
            OnComplited?.Invoke();
            OnComplited = null;
            IsComplited = true;
        };
    }
    public bool GetNameToPath(string namePath,out string pathName)
    {
        try
        {
            int index = assetPrefabElement.Keys.IndexOf(namePath);
            if (index != -1)
            {
                pathName = assetPrefabElement.Prefab[index].path;
                return true;
            }
            DebugUtils.Log($"Error Name to Url [{namePath}]");
            pathName = string.Empty;
            return false;
        }
        catch
        {
            DebugUtils.Log($"Error Name to Url [{namePath}]");
            pathName = string.Empty;
            return false;
        }
    }
    public override void Update()
    {
        Manager.Tick();
        if(OnComplited!=null&&IsComplited)
        {
            OnComplited.Invoke();
            OnComplited = null;
        }
    }
    public override void LateUpdate()
    {
        Manager.LateTick();
    }
    public Resoure NameToLoad(string name)
    {
        if(GetNameToPath(name,out string pathName))
        {
            return Load(pathName);
        }
        else
        {
            DebugUtils.Log(name + " is Empty to Find Path");
            return null;
        }
    }
    public Task<Resoure> NameToLoadAsync(string name)
    {
        if (GetNameToPath(name, out string pathName))
        {
            return LoadAsync(pathName);
        }
        else
        {
            DebugUtils.Log(name + " is Empty to Find Path");
            return null;
        }
    }
    public Resoure Load(string url)
    {
        return Manager.Load(url);
    }
    public Task<Resoure> LoadAsync(string url)
    {
        return Manager.LoadAsync(url);
    }
    public void UnLoad(Resoure resoure)
    {
        Manager.UnLoad(resoure);
    }
    public Task UnLoadAsync(Resoure resoure)
    {
       return Manager.UnLoadAsync(resoure);
    }
    public override void Destory()
    {
        base.Destory();
        Manager.UnInit();
        Manager.LateTick();
    }
}