using System;
using System.IO;
using UnityEngine.Networking;
public class VersionSystem : SystemBase,ISystemLife
{
    public VersionSystem() : base(nameof(VersionSystem)) { }
    public Action<bool> OnComplitedMethod=null;
    public Action<float> progressAction;
    public override void Start()
    {
        base.Start();
        GameRoot.Instance.StartCoroutine(MD5Spawn.DownLoadFile(ConfigUtils.VersionSystem_Config.downLoadUrlMD5, CheckVersion));
    }
    public void ProgressCallBack(float progress)
    {
        progressAction?.Invoke(progress);
        DebugUtils.Log("Download progress:" + progress);
    }
    private void ShowUIButtonTips()
    {
        UIFormBase uIFormBase =GameRoot.uISystem.LoadUI(ConfigUtils.VersionSystem_Config.versionButtonTips, new UnityEngine.Vector3(0,0,0),PlayerCanvas.MainCanvas.transform,true);
        uIFormBase.Open();
    }
    public void CheckVersion(byte[] MD5byte)
    {
        string NewMD5 = MD5Spawn.byteToString(MD5byte);
        DebugUtils.Log_Time("官网的MD5:" + NewMD5);
        if (!File.Exists(ConfigUtils.BundlePathZip))
        {
            DebugUtils.Log_Time("第一次 需要更新");
            ShowUIButtonTips();
        }
        else
        {
            MD5Spawn.GetMD5(ConfigUtils.BundlePathZip, out byte[] bytesOut);
            string OldMD5 = MD5Spawn.byteToString(bytesOut);
            DebugUtils.Log_Time("本地的MD5:" + OldMD5);
            if (OldMD5 != NewMD5&&!GameRoot.Instance.isEditor)
            {
                DebugUtils.Log_Time("需要更新");
                ShowUIButtonTips();
            }
            else
            {
                DebugUtils.Log_Time("不需要更新");
                OnComplitedMethod?.Invoke(false);
                OnComplitedMethod = null;
            }
        }
    }
    private Action wirteAction;
    private Action UnPackAction;
    public void UpdateVersion(Action wirteAction, Action UnPackAction)
    {
        this.wirteAction += wirteAction;
        this.UnPackAction += UnPackAction;
        MD5Spawn.DownLoadAssestBundle(GameRoot.Instance, ConfigUtils.VersionSystem_Config.downLoadUrl, ProgressCallBack, DownloadCallBack);
    }
    private void DownloadCallBack(byte[]bytes)
    {
        UpdateABBundle(bytes);
    }
    private async void UpdateABBundle(byte[]bytes)
    {
        if (!Directory.Exists(ConfigUtils.BundlePath))
        {
            Directory.CreateDirectory(ConfigUtils.BundlePath);
        }
        else
        {
            Directory.Delete(ConfigUtils.BundlePath,true);
            Directory.CreateDirectory(ConfigUtils.BundlePath);
        }
        if(File.Exists(ConfigUtils.BundlePathZip))
        {
            File.Delete(ConfigUtils.BundlePathZip);
        }
        wirteAction?.Invoke();
        wirteAction = null;
        await MD5Spawn.WriteCompute(bytes, ConfigUtils.BundlePathZip);
        DebugUtils.Log_Time("缓存到本地完成 进行解压");
        UnPackAction?.Invoke();
        UnPackAction=null;
        await MD5Spawn.UnPackZip(ConfigUtils.BundlePathZip, ConfigUtils.BundlePath);
        DebugUtils.Log_Time("解压完成");
        OnComplitedMethod?.Invoke(true);
        OnComplitedMethod = null;
    }
}
