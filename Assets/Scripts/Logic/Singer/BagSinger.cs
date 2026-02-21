using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;

public class BagSinger : SingerLife,IProcedure
{
    private static BagSinger instance;
    public static BagSinger Instance
    {
        get { return instance; }
    }

    public Action OnComplited { get; set; }

    public override void Awake()
    {
        instance = this;
        buildConfig.count = new List<int>();
        buildConfig.elements = new List<BuildPrefab_Element>();
    }
    /// <summary>
    /// 黑盒测试：传入服务端背包响应包，输出为本地背包数据更新，并始终触发OnComplited继续后续加载链路。
    /// </summary>
    private void BagBack(Pkg pkg)
    {
        string userIdentifier = PlayerInformation.currentUserData.UserID;
        string bagDataKey = ConfigUtils.ServerKeys_Config.bag;
        string json = pkg.Body.serverMessage.JsonValue;
        Debug.Log($"[BagSinger] BagBack - 请求UserID: {userIdentifier}, Key: {bagDataKey}, 服务端Message: {pkg.Body.serverMessage.Message}, 返回JsonDicKey: {pkg.Body.serverMessage.JsonDicKey}, 返回JsonDoubleKey: {pkg.Body.serverMessage.JsonDoubleKey}, 返回JSON长度: {json?.Length ?? 0}, JSON前100字符: {GetJsonPreview(json)}");

        try
        {
            if (!string.IsNullOrEmpty(json) && json != "null" && json != "{}")
            {
                buildConfig = JsonConvert.DeserializeObject<BuildConfig>(json);
            }
            if (buildConfig.elements == null)
            {
                buildConfig.elements = new List<BuildPrefab_Element>();
            }
            if (buildConfig.count == null)
            {
                buildConfig.count = new List<int>();
            }
            Debug.Log($"[BagSinger] BagBack - 背包反序列化完成，建筑条目数量: {buildConfig.elements.Count}");
        }
        catch (Exception exception)
        {
            Debug.LogError($"[BagSinger] BagBack - 反序列化异常: {exception.Message}\n{exception.StackTrace}");
            buildConfig = new BuildConfig
            {
                elements = new List<BuildPrefab_Element>(),
                count = new List<int>()
            };
        }
        finally
        {
            Debug.Log("[BagSinger] BagBack - 触发OnComplited，继续执行建筑加载");
            OnComplited?.Invoke();
        }
    }
    /// <summary>
    /// 黑盒测试：无参数调用，输出为向服务端请求当前玩家背包数据并注册回调。
    /// </summary>
    public void Init()
    {
        string userIdentifier = PlayerInformation.currentUserData.UserID;
        string bagDataKey = ConfigUtils.ServerKeys_Config.bag;
        Debug.Log($"[BagSinger] Init - 请求背包数据, UserID: {userIdentifier}, Key: {bagDataKey}");
        ValueToken valueToken = new ValueToken(BagBack);
        GameRoot.redisSystem.GetValueAsync(userIdentifier, bagDataKey, valueToken);
    }
    public override void Destory()
    {
        base.Destory();
    }
    public BuildConfig buildConfig = new BuildConfig();
    /// <summary>
    /// 黑盒测试：无参数调用，输出为将当前背包配置序列化后保存到服务端。
    /// </summary>
    public void SaveBag()
    {
        string json = JsonConvert.SerializeObject(buildConfig);
        string userIdentifier = PlayerInformation.currentUserData.UserID;
        string bagDataKey = ConfigUtils.ServerKeys_Config.bag;
        Debug.Log($"[BagSinger] SaveBag - 保存UserID: {userIdentifier}, Key: {bagDataKey}, JSON长度: {json.Length}, JSON前100字符: {GetJsonPreview(json)}");
        GameRoot.redisSystem.SetValueAsync(userIdentifier, bagDataKey, json);
    }
    public void AddBuildPrefab(BuildPrefab_Element buildPrefab_Element,int addCount)
    {
        bool NoSame = true;
        for(int i=0;i< buildConfig.count.Count;i++)
        {
            if (buildConfig.elements[i].Equals(buildPrefab_Element))
            {
                buildConfig.count[i] += addCount;
                NoSame = false;
                OnCountChange?.Invoke(buildPrefab_Element, buildConfig.count[i]);
                break;
            }
        }
        if (NoSame)
        {
            buildConfig.elements.Add(buildPrefab_Element);
            buildConfig.count.Add(addCount);
        }
    }
    public Action<BuildPrefab_Element> Remove;
    public Action<BuildPrefab_Element,int> OnCountChange;
    public void RemoveBuildPrefab(string urlName, int addCount)
    {
        for (int i = 0; i < buildConfig.count.Count; i++)
        {
            if (buildConfig.elements[i].UrlName.Equals(urlName))
            {
                buildConfig.count[i] -= addCount;
                if (buildConfig.count[i]<=0)
                {
                    Remove?.Invoke(buildConfig.elements[i]);
                    buildConfig.count.RemoveAt(i);
                    buildConfig.elements.RemoveAt(i);
                }
                else
                {
                    OnCountChange?.Invoke(buildConfig.elements[i], buildConfig.count[i]);
                }
                break;
            }
        }
    }
    /// <summary>
    /// 黑盒测试：传入任意JSON字符串，输出不超过100字符的预览文本，空输入返回空字符串。
    /// </summary>
    private string GetJsonPreview(string json)
    {
        if (string.IsNullOrEmpty(json))
        {
            return "";
        }
        return json.Substring(0, Math.Min(100, json.Length));
    }
}
[System.Serializable]
public struct BuildConfig
{
    public List<BuildPrefab_Element> elements ;
    public List<int> count ;
}
