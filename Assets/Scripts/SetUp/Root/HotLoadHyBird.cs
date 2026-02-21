using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using UnityEngine;
using UnityEngine.Networking;

public class HotLoadHyBird : MonoBehaviour
{
    public List<string>HotDll = new List<string>();
    public Action OnHotComplite;
    private void Start()
    {
        AddListener();
    }
    public void AddListener()
    {
        GameRoot.versionSystem.OnComplitedMethod += CheckVersionOver;
    }
    public void CheckVersionOver(bool isEditor)
    {

#if !UNITY_EDITOR
           foreach (string dll in HotDll)
        {
            Assembly hotUpdateAss = Assembly.Load(File.ReadAllBytes(Path.Combine(ConfigUtils.BundlePath, $"{dll}.dll.bytes").Replace("\\","/" )));
            Debug.Log("加载程序集" + dll + "成功");
        }
       
#endif
        OnHotComplite?.Invoke();
        OnHotComplite = null;
    }
}
