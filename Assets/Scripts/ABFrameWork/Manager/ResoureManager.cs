using System;
using System.Collections;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.Threading.Tasks;
using System.Xml.Linq;
using Unity.VisualScripting;
using UnityEngine;
using Newtonsoft.Json;
using static ABFrameWorlk.BundleManager;
using System.IO;
namespace ABFrameWorlk
{
    public class ResoureManager:ITick
    {
        private static ResoureManager instance;
        public static ResoureManager Instance
        {
            get
            {
                if (instance == null)
                    instance = new ResoureManager();
                return instance;
            }
        }
        public ConcurrentDictionary<string, Resoure> Resoures = new ConcurrentDictionary<string, Resoure>();
        Log Log;
        BundleManager manager;
        public string DataAssestPath ;
        public string BundleAssestPath;
        Dictionary<string,IResoure> paths = new Dictionary<string, IResoure>();
        public void Init(string ManifestPath,string DataAssestPath,string BundleAssestPath, Log log)
        {
            Log = log;
            this.DataAssestPath = DataAssestPath;
            manager = BundleManager.Instance;
            this.BundleAssestPath = BundleAssestPath;
            manager.Init(ManifestPath, BundleAssestPath, log);
            using (StreamReader streamReader = File.OpenText(DataAssestPath))
            {
                List<IResoure> ire = JsonConvert.DeserializeObject<List<IResoure>>(streamReader.ReadToEnd());
                streamReader.Close();
                foreach (IResoure ires in ire)
                {
                    paths.Add(ires.url, ires);
                }
            }
        }
        public void UnInit()
        {
            foreach(var res in Resoures)
            {
                UnLoad(res.Value);
            }
            paths.Clear();
            Resoures.Clear();
            manager.UnInit();
        }
        public Resoure Load(string url) 
        {
            if (Resoures.TryGetValue(url, out Resoure resoure))
            {
                resoure.reference++;
                resoure.bundle.reference++;
                return resoure;
            }
            else
            {

                IResoure resoure1 = paths[url];
                ABundle aBundle = manager.Load(resoure1.ABName);
                foreach (var resourece in resoure1.Dependencies)
                {
                    if(!Resoures.ContainsKey(resourece)&&!resourece.EndsWith("cs"))
                        Load(resourece);
                }
                Resoure res = new Resoure(url,resoure1.ABName, aBundle);
                res.Dependencies = resoure1.Dependencies;
                res.Load(url);
                res.reference++;
                //Debug.LogWarning($"AB包Name:{res.ABName}索引加一 当前依赖项[{res.bundle.reference}]");
                Resoures.TryAdd(url, res);
                return res;
            }
        }
        public async Task<Resoure> LoadAsync(string url) 
        {
            if (Resoures.TryGetValue(url, out Resoure resoure))
            {
                resoure.reference++;
                resoure.bundle.reference++;
                return resoure;
            }
            else
            {
                IResoure resoure1= paths[url];
                ABundle aBundle = manager.Load(resoure1.ABName);
                await aBundle;
                foreach (var pack in resoure1.Dependencies)
                {
                    if (!Resoures.ContainsKey(pack) && !pack.EndsWith("cs"))
                        await LoadAsync(pack);
                }
                Resoure res = new Resoure(url, resoure1.ABName, aBundle);
                res.Dependencies = resoure1.Dependencies;
                Resoures.TryAdd(url, res);
                res.LoadAsync(url);
                await res;
                res.reference++;
                return res;
            }
        }
        public void UnLoad(Resoure resoure)
        {
            if (Resoures.TryGetValue(resoure.url, out Resoure resouretemp))
            {
                foreach(var pack in resoure.Dependencies)
                {
                    if(Resoures.TryGetValue(pack,out Resoure temp) && !pack.EndsWith("cs"))
                    {
                        UnLoad(temp);
                    }
                }
                resoure.reference--;
                manager.UnLoad(resoure.ABName);
                if (resoure.reference == 0)
                {
                    resoure.UnLoad();
                    Resoures.TryRemove(resoure.url, out Resoure value);
                    //Debug.LogWarning($"卸载资源url:{resoure.url}");
                }
                else if (resoure.reference < 0)
                {
                    throw new Exception($"This Resource:{resoure.url} reference lower than zero");
                }
            }
            else if(!resoure.url.EndsWith("cs"))
            {
                //throw new Exception($"you are no load this:{resoure.url}");
            }
        }
        public async Task UnLoadAsync(Resoure resoure)
        {
            if (Resoures.TryGetValue(resoure.url, out Resoure resouretemp))
            {
                foreach (var pack in resoure.Dependencies)
                {
                    if (Resoures.TryGetValue(pack, out Resoure temp)
                        && !pack.EndsWith("cs")
                        )
                    {
                        await UnLoadAsync(temp);
                    }
                }
                resoure.reference--;
                await manager.UnLoadAsync(resoure.ABName);
                if (resoure.reference == 0)
                {
                    resoure.UnLoad();
                    Resoures.TryRemove(resoure.url, out Resoure value);
                    //Debug.LogWarning($"卸载资源url:{resoure.url}");
                }
                else if (resoure.reference < 0)
                {
                    throw new Exception($"This Resource:{resoure.url} reference lower than zero");
                }
            }
            else
            {
                throw new Exception($"you are no load this:{resoure.url}");
            }
        }

        public void Tick()
        {
            manager?.Tick();
            foreach(var res in Resoures.Values)
            {
                res.Tick();
            }
        }
        public void LateTick()
        {
            manager?.LateTick();
        }
    }
}