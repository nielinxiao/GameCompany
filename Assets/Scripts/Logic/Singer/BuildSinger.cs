using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using TMPro;
using UnityEngine;

public class BuildSinger : SingerLife,IProcedure
{
    private static BuildSinger instance;
    public static BuildSinger Instance { get { return instance; } }
    private const int MaxBuildResponseRetryCount = 3;
    private string currentRequestUserIdentifier;
    private string currentRequestBuildDataKey;
    private int currentRequestSequenceNumber;

    public Action OnComplited { get; set; }

    public override void Awake()
    {
        instance = this;
    }
    public void Init()
    {
        currentRequestSequenceNumber = 0;
        string userIdentifier = PlayerInformation.currentUserData.UserID;
        string buildDataKey = ConfigUtils.ServerKeys_Config.block;
        Debug.Log($"[BuildSinger] Init - 进入建筑加载流程, 当前UserID: {userIdentifier}, Key: {buildDataKey}, 当前模式: {GameRoot.Instance.CurrentMode?.type}");
        RequestBuildData(0);
    }

    /// <summary>
    /// 黑盒测试：传入重试次数，输出为向服务端发起一次建筑数据查询请求并打印关键参数日志。
    /// </summary>
    private void RequestBuildData(int currentRetryCount)
    {
        currentRequestSequenceNumber++;
        long requestStartTicks = DateTime.UtcNow.Ticks;
        int requestSequenceNumber = currentRequestSequenceNumber;
        string requestUserIdentifier = PlayerInformation.currentUserData.UserID;
        string requestBuildDataKey = ConfigUtils.ServerKeys_Config.block;
        currentRequestUserIdentifier = requestUserIdentifier;
        currentRequestBuildDataKey = requestBuildDataKey;
        Debug.Log($"[BuildSinger] RequestBuildData - 开始加载建筑数据, 请求序号: {requestSequenceNumber}, UserID: {requestUserIdentifier}, Key: {requestBuildDataKey}, 重试次数: {currentRetryCount}");
        Debug.Log($"[BuildSinger] RequestBuildData - 调用GetValueAsync(UserID, Key, Token), 参数: ({requestUserIdentifier}, {requestBuildDataKey}, ValueToken)");
        ValueToken valueToken = new ValueToken((pkg) => GetBlock(pkg, currentRetryCount, requestSequenceNumber, requestUserIdentifier, requestBuildDataKey, requestStartTicks));
        GameRoot.redisSystem.GetValueAsync(requestUserIdentifier, requestBuildDataKey, valueToken);
    }

    /// <summary>
    /// 黑盒测试：传入服务端包和当前重试次数，输出为有效建筑数据时完成加载；无效数据时按次数重试。
    /// </summary>
    private async void GetBlock(Pkg pkg, int currentRetryCount, int requestSequenceNumber, string requestUserIdentifier, string requestBuildDataKey, long requestStartTicks)
    {
        // 同一时刻只接受当前请求序号的回包，避免旧回包覆盖新请求结果
        if (requestSequenceNumber != currentRequestSequenceNumber)
        {
            Debug.LogWarning($"[BuildSinger] GetBlock - 忽略过期回包。回包序号: {requestSequenceNumber}, 当前序号: {currentRequestSequenceNumber}");
            return;
        }

        // 登录切换时丢弃旧账号回包，避免把其他账号的空数据当成当前账号结果
        string currentLoginUserIdentifier = PlayerInformation.currentUserData?.UserID ?? "";
        if (!string.Equals(currentLoginUserIdentifier, requestUserIdentifier, StringComparison.Ordinal))
        {
            Debug.LogWarning($"[BuildSinger] GetBlock - 回包用户与当前登录用户不一致，忽略回包。请求UserID: {requestUserIdentifier}, 当前UserID: {currentLoginUserIdentifier}");
            return;
        }

        string json = pkg.Body.serverMessage.JsonValue;
        string returnedUserIdentifier = pkg.Body.serverMessage.JsonDicKey;
        string returnedBuildDataKey = pkg.Body.serverMessage.JsonDoubleKey;
        string serverResponseMessage = pkg.Body.serverMessage.Message;
        long currentResponseTicks = DateTime.UtcNow.Ticks;
        long requestDurationMillisecond = (currentResponseTicks - requestStartTicks) / TimeSpan.TicksPerMillisecond;
        Debug.Log($"[BuildSinger] GetBlock - 请求序号: {requestSequenceNumber}, 请求键: {requestUserIdentifier}:{requestBuildDataKey}, 返回键: {returnedUserIdentifier}:{returnedBuildDataKey}, 服务端Message: {serverResponseMessage}, 请求耗时毫秒: {requestDurationMillisecond}, JSON长度: {json?.Length ?? 0}, JSON前100字符: {GetJsonPreview(json)}");
        Debug.Log($"[BuildSinger] 加载参数校验 - UserID: {requestUserIdentifier}, Key: {requestBuildDataKey}, 返回JSON长度: {json?.Length ?? 0}, 服务端Message: {serverResponseMessage}");

        if (!IsMatchedBuildRequestKey(returnedUserIdentifier, returnedBuildDataKey, requestUserIdentifier, requestBuildDataKey))
        {
            if (currentRetryCount < MaxBuildResponseRetryCount)
            {
                int nextRetryCount = currentRetryCount + 1;
                Debug.LogWarning($"[BuildSinger] GetBlock - 请求序号: {requestSequenceNumber}, 返回键与请求键不一致，准备重试。当前重试: {nextRetryCount}/{MaxBuildResponseRetryCount}");
                RequestBuildData(nextRetryCount);
            }
            else
            {
                Debug.LogError("[BuildSinger] GetBlock - 连续收到键值不一致回包，超过重试次数，终止建筑加载");
                OnComplited?.Invoke();
            }
            return;
        }

        if (IsSuspiciousEmptyBuildResponse(json, serverResponseMessage, returnedUserIdentifier, returnedBuildDataKey))
        {
            if (currentRetryCount < MaxBuildResponseRetryCount)
            {
                int nextRetryCount = currentRetryCount + 1;
                Debug.LogWarning($"[BuildSinger] GetBlock - 请求序号: {requestSequenceNumber}, 收到可疑空建筑回包，准备重试。当前重试: {nextRetryCount}/{MaxBuildResponseRetryCount}");
                RequestBuildData(nextRetryCount);
            }
            else
            {
                Debug.LogError("[BuildSinger] GetBlock - 连续收到可疑空建筑回包，超过重试次数，终止建筑加载");
                OnComplited?.Invoke();
            }
            return;
        }

        if (!IsBuildResponseJson(json))
        {
            if (currentRetryCount < MaxBuildResponseRetryCount)
            {
                int nextRetryCount = currentRetryCount + 1;
                Debug.LogWarning($"[BuildSinger] GetBlock - 请求序号: {requestSequenceNumber}, 收到非建筑数据，准备重试。当前重试: {nextRetryCount}/{MaxBuildResponseRetryCount}");
                RequestBuildData(nextRetryCount);
            }
            else
            {
                Debug.LogError("[BuildSinger] GetBlock - 连续收到非建筑数据，超过重试次数，终止建筑加载");
                OnComplited?.Invoke();
            }
            return;
        }

        await GetWorld(json);
        OnComplited?.Invoke();
    }

    /// <summary>
    /// 黑盒测试：传入服务端返回键值，输出是否与本次建筑请求键值一致；服务端缺少键值时输出true并记录警告。
    /// </summary>
    private bool IsMatchedBuildRequestKey(string returnedUserIdentifier, string returnedBuildDataKey, string requestUserIdentifier, string requestBuildDataKey)
    {
        if (string.IsNullOrEmpty(returnedUserIdentifier) || string.IsNullOrEmpty(returnedBuildDataKey))
        {
            Debug.LogWarning("[BuildSinger] GetBlock - 服务端回包未返回完整键值，跳过键值一致性校验");
            return true;
        }

        bool isMatched = returnedUserIdentifier == requestUserIdentifier && returnedBuildDataKey == requestBuildDataKey;
        if (!isMatched)
        {
            Debug.LogWarning($"[BuildSinger] GetBlock - 键值不一致, 请求键: {requestUserIdentifier}:{requestBuildDataKey}, 返回键: {returnedUserIdentifier}:{returnedBuildDataKey}");
        }
        return isMatched;
    }

    /// <summary>
    /// 黑盒测试：传入服务端Json文本，输出是否可作为建筑系统数据进行反序列化处理。
    /// </summary>
    private bool IsBuildResponseJson(string json)
    {
        if (string.IsNullOrEmpty(json) || json == "null" || json == "{}")
        {
            return true;
        }

        string trimmedJson = json.TrimStart();
        if (trimmedJson.StartsWith("{\"builds\""))
        {
            return true;
        }

        return trimmedJson.Contains("\"builds\"");
    }

    /// <summary>
    /// 黑盒测试：传入回包Json、Message和回包键值，输出是否命中“可疑空建筑回包”并触发重试。
    /// </summary>
    private bool IsSuspiciousEmptyBuildResponse(string json, string serverResponseMessage, string returnedUserIdentifier, string returnedBuildDataKey)
    {
        if (!string.IsNullOrEmpty(json) && json != "null" && json != "{}")
        {
            return false;
        }

        bool isReturnedKeyMissing = string.IsNullOrEmpty(returnedUserIdentifier) || string.IsNullOrEmpty(returnedBuildDataKey);
        if (!isReturnedKeyMissing)
        {
            return false;
        }

        if (string.IsNullOrEmpty(serverResponseMessage))
        {
            return true;
        }

        bool isExpectedMessage = serverResponseMessage.Contains("获取成功") || serverResponseMessage.Contains("数据不存在");
        return !isExpectedMessage;
    }

    /// <summary>
    /// 黑盒测试：传入任意Json文本，输出不超过100字符的预览文本；空Json返回空字符串。
    /// </summary>
    private string GetJsonPreview(string json)
    {
        if (string.IsNullOrEmpty(json))
        {
            return "";
        }
        return json.Substring(0, Math.Min(100, json.Length));
    }
    public async Task GetWorld(string json)
    {
        DebugUtils.Log("正在反序列化世界信息");
        Debug.Log($"[BuildSinger] GetWorld - 加载前本地建筑数量: {CountUtils<BuildObjectBase>.Instance.GetCount()}");
        if (string.IsNullOrEmpty(json) || json == "null" || json == "{}")
        {
            Debug.Log("[BuildSinger] GetWorld - 服务器没有返回建筑数据");
            return;
        }

        UIFormBase loadingUserInterface = GameRoot.uISystem.LoadUI(ConfigUtils.UI_Config.Loading, Vector3.zero, PlayerCanvas.MainCanvas.transform);
        loadingUserInterface.Open();
        try
        {
            BuildJsonClass buildJsonClass;

            // 兼容两种格式：对象格式 {"builds":[...]} 和数组格式 [...]
            string trimmedJson = json.TrimStart();
            if (trimmedJson.StartsWith("["))
            {
                // 如果是数组格式，先反序列化为List再包装成BuildJsonClass
                Debug.LogWarning("[BuildSinger] GetWorld - 检测到数组格式JSON（可能是旧数据），正在转换为对象格式");
                List<BuildElement> buildList = JsonConvert.DeserializeObject<List<BuildElement>>(json);
                buildJsonClass = new BuildJsonClass();
                if (buildList != null)
                {
                    buildJsonClass.builds = buildList;
                }
            }
            else
            {
                // 正常的对象格式
                buildJsonClass = JsonConvert.DeserializeObject<BuildJsonClass>(json);
            }

            if (buildJsonClass == null || buildJsonClass.builds == null || buildJsonClass.builds.Count == 0)
            {
                Debug.Log("[BuildSinger] GetWorld - 建筑列表为空");
                return;
            }

            Debug.Log($"[BuildSinger] GetWorld - 开始实例化建筑, 数量: {buildJsonClass.builds.Count}");
            Dictionary<string, GameObject> buildPrefabCacheDictionary = new Dictionary<string, GameObject>();
            foreach (var build in buildJsonClass.builds)
            {
                if (string.IsNullOrEmpty(build.nameUrl))
                {
                    Debug.LogWarning("[BuildSinger] GetWorld - 发现空的nameUrl，跳过");
                    continue;
                }

                if (!buildPrefabCacheDictionary.ContainsKey(build.nameUrl))
                {
                    GameObject temp = (GameObject)(await GameRoot.resourcesSystem.NameToLoadAsync(build.nameUrl)).GetResult();
                    buildPrefabCacheDictionary.Add(build.nameUrl, temp);
                }
                BuildObjectBase game = GameRoot.Instantiate(buildPrefabCacheDictionary[build.nameUrl], build.vector3Json, build.quaternionJson).GetComponent<BuildObjectBase>();
                game.nameUrl = build.nameUrl;
                CountUtils<BuildObjectBase>.Instance.AddObject(game);
                Renderer[] render = game.GetComponentsInChildren<Renderer>();
                ShaderFindUtils.FindShader(render);
                game.ActiveCollider();
            }
            foreach (var build in CountUtils<BuildObjectBase>.Instance.GetArry())
            {
                build.OnInit();
            }
            Debug.Log($"[BuildSinger] GetWorld - 建筑加载完成，当前数量: {CountUtils<BuildObjectBase>.Instance.GetCount()}");
        }
        catch (Exception exception)
        {
            Debug.LogError($"[BuildSinger] GetWorld - 建筑加载异常: {exception.Message}\n{exception.StackTrace}");
        }
        finally
        {
            loadingUserInterface.Close();
            loadingUserInterface.Destory();
        }
    }
    public override void Destory()
    {
        base.Destory();
        UnInit();
    }
    public void UnInit()
    {
        BuildObjectBase[] buildObjectBaseArray = CountUtils<BuildObjectBase>.Instance.GetArry();
        int buildObjectCountBeforeClear = buildObjectBaseArray.Length;
        string userIdentifier = PlayerInformation.currentUserData?.UserID ?? "";
        string currentModeType = GameRoot.Instance.CurrentMode?.type.ToString() ?? "NullMode";
        Debug.Log($"[BuildSinger] UnInit - 准备清空建筑缓存, 当前UserID: {userIdentifier}, 当前模式: {currentModeType}, 清空前数量: {buildObjectCountBeforeClear}");
        foreach (var build in buildObjectBaseArray)
        {
            if (build != null)
                GameObject.DestroyImmediate(build.gameObject);
        }
        CountUtils<BuildObjectBase>.Instance.Destory();
        int buildObjectCountAfterClear = CountUtils<BuildObjectBase>.Instance.GetCount();
        Debug.Log($"[BuildSinger] UnInit - 建筑缓存已清空, 清空后数量: {buildObjectCountAfterClear}");
    }
}
