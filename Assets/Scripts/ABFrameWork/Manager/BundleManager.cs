using System.Collections;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.IO;
using System.Threading.Tasks;
using UnityEngine;
public delegate void Log(string str);
namespace ABFrameWorlk
{
    internal class BundleManager : ITick
    {
        private static BundleManager instance;
        internal static BundleManager Instance
        {
            get
            {
                if (instance == null)
                    instance = new BundleManager();
                return instance;
            }
        }
        Log Debug;
        internal ConcurrentDictionary<string, ABundle> Load_ABundle = new ConcurrentDictionary<string, ABundle>();
        AssetBundleManifest bundleManifest;
        internal Dictionary<string, string[]> dependenciesDic = new Dictionary<string, string[]>();
        internal void Init(string ManifestPath, string BundleAssestPath, Log log)
        {
            Debug = log;
            ABundle.ABPath = BundleAssestPath;
            AssetBundle asset = AssetBundle.LoadFromFile(ManifestPath);
            bundleManifest = asset.LoadAllAssets()[0] as AssetBundleManifest;
            string[] abstrings = bundleManifest.GetAllAssetBundles();
            foreach (string abstring in abstrings)
            {
                dependenciesDic.Add(abstring, bundleManifest.GetAllDependencies(abstring));
            }
            asset.Unload(true);
        }
        public void UnInit()
        {
            foreach(var ab in Load_ABundle.Values)
            {
                DesPackName.Add(ab);
            }
            Load_ABundle.Clear();
            dependenciesDic.Clear();
        }
        public async Task<ABundle> LoadAsync(string packName)
        {
            if (Load_ABundle.TryGetValue(packName, out ABundle bundle))
            {
                bundle.reference++;
                //Debug.Invoke($"AB��Name:{bundle.url}������һ ��ǰ������[{bundle.reference}]");
                return bundle;
            }
            else
            {
                if (dependenciesDic.TryGetValue(packName, out string[] packNames))
                {
                    foreach (string name in packNames)
                    {
                        await LoadAsync(name);
                    }
                }
                ABundle aBundle = new ABundle(packName);
                aBundle.reference++;
                //Debug.Invoke($"AB��Name:{aBundle.url}������һ ��ǰ������[{aBundle.reference}]");
                Load_ABundle.TryAdd(packName, aBundle);
                aBundle.LoadAsync();
                await aBundle;
                return aBundle;
            }
        }
        public ABundle Load(string packName)
        {
            if (Load_ABundle.TryGetValue(packName, out ABundle bundle))
            {
                bundle.reference++;
                //Debug.Invoke($"AB��Name:{bundle.url}������һ ��ǰ������[{bundle.reference}]");
                return bundle;
            }
            else
            {
                if (dependenciesDic.TryGetValue(packName, out string[] packNames))
                {
                    foreach (string name in packNames)
                    {
                        Load(name);
                    }
                }
                ABundle aBundle = new ABundle(packName);
                aBundle.reference++;
                //Debug.Invoke($"AB��Name:{aBundle.url}������һ ��ǰ������[{aBundle.reference}]");
                Load_ABundle.TryAdd(packName, aBundle);
                aBundle.Load();
                return aBundle;
            }
        }
        
        public async Task UnLoadAsync(string packName)
        {
            if (Load_ABundle.TryGetValue(packName, out ABundle bundle))
            {
                if (dependenciesDic.TryGetValue(packName, out string[] packNames))
                {
                    foreach (string name in packNames)
                    {
                       await UnLoadAsync(name);
                    }
                }
                bundle.reference--;
                //Debug.Invoke($"AB��Name:{bundle.url}������һ ��ǰ������[{bundle.reference}]");
                if (bundle.reference == 0)
                {
                    DesPackName_Async.Add(bundle);
                    Load_ABundle.TryRemove(packName, out ABundle aBundle);
                }
                else if (bundle.reference < 0)
                {
                    throw new System.Exception($"this bundle path{{:{packName}}} reference lower than zero!");
                }
            }
        }
        public void UnLoad(string packName)
        {
            if (Load_ABundle.TryGetValue(packName, out ABundle bundle))
            {
                if (dependenciesDic.TryGetValue(packName, out string[] packNames))
                {
                    foreach (string name in packNames)
                    {
                        UnLoad(name);
                    }
                }
                bundle.reference--;
                //Debug.Invoke($"AB��Name:{bundle.url}������һ ��ǰ������[{bundle.reference}]");
                if (bundle.reference == 0)
                {
                    DesPackName.Add(bundle);
                    Load_ABundle.TryRemove(packName, out ABundle aBundle);
                }
                else if (bundle.reference < 0)
                {
                    throw new System.Exception($"this bundle path{{:{packName}}} reference lower than zero!");
                }
            }
        }
        /// <summary>
        /// ����
        /// </summary>
        public void Tick()
        {
            foreach (var bundle in Load_ABundle)
            {
                bundle.Value.Tick();
            }
        }
        List<ABundle> DesPackName=new List<ABundle>();
        List<ABundle> DesPackName_Async=new List<ABundle>();
        public async void LateTick()
        {
            int count = DesPackName.Count;
            for (int i = count-1; i >=0; i--) 
            {
                DesPackName[i].UnLoad();
                DesPackName.RemoveAt(i);
            }
            count = DesPackName_Async.Count;
            for (int i = count - 1; i >= 0; i--)
            {
                DesPackName_Async[i].UnLoadAsync();
                await DesPackName_Async[i];
                DesPackName_Async.RemoveAt(i);
            }
        }
    }
}