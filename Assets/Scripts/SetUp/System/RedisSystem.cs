using System;
using UnityEngine;
using Newtonsoft.Json.Linq;

/// <summary>
/// Redis数据系统 - 已迁移到HTTP模式
/// 保持原有API接口不变，内部使用HTTP通信
/// </summary>
public class RedisSystem : SystemBase, ISystemLife
{
    public RedisSystem() : base(nameof(RedisSystem))
    {
    }

    public override void Start()
    {
        base.Start();
    }

    /// <summary>
    /// 获取HttpClient（延迟获取，确保HttpSystem已初始化）
    /// </summary>
    private HttpClientWrapper GetHttpClient()
    {
        if (GameRoot.httpSystem == null)
        {
            Debug.LogError("[RedisSystem] HttpSystem未初始化！");
            return null;
        }

        var client = GameRoot.httpSystem.GetHttpClient();
        if (client == null)
        {
            Debug.LogError("[RedisSystem] HttpClient未初始化！请确保HttpSystem已启动");
        }
        return client;
    }

    public override void Destory()
    {
        base.Destory();
    }

    /// <summary>
    /// 检查玩家是否首次创建
    /// </summary>
    public void IsFirstCreat(ValueToken onAccepted)
    {
        var requestData = new { };

        var httpClient = GetHttpClient();
        if (httpClient == null) return;

        GameRoot.Instance.StartCoroutine(httpClient.PostAsync("/api/player/check-first", requestData,
            responseData =>
            {
                // 转换HTTP响应为Pkg格式（保持兼容）
                var pkg = CreatePkgFromHttpResponse(responseData, ServerCMD.CheckPlayerCreatByFirst);
                onAccepted.GetValue(pkg);
            },
            error =>
            {
                Debug.LogError($"<color=#ff0000>[数据]</color> ❌ 检查首次创建失败: {error}");
            }
        ));
    }

    /// <summary>
    /// 设置String类型数据
    /// </summary>
    public void SetValueAsync(string key, ReadValue value)
    {
        var requestData = new
        {
            jsonKey = key,
            jsonValue = value.ToString() ?? ""
        };

        var httpClient = GetHttpClient();
        if (httpClient == null) return;

        GameRoot.Instance.StartCoroutine(httpClient.PostAsync("/api/data/set", requestData,
            responseData =>
            {
                // 静默成功
            },
            error =>
            {
                Debug.LogError($"<color=#ff0000>[数据]</color> ❌ 保存失败 {key}: {error}");
            }
        ));
    }

    /// <summary>
    /// 设置Hash类型数据
    /// </summary>
    public void SetValueAsync(string key, string doublekey, ReadValue value)
    {
        string jsonValue = value.ToString() ?? "";
        bool isBuildDataRequest = doublekey == ConfigUtils.ServerKeys_Config.block;
        if (isBuildDataRequest)
        {
            Debug.Log($"[RedisSystem] SetValueAsync(Hash) - 保存请求 UserID: {key}, Key: {doublekey}, JSON长度: {jsonValue.Length}, JSON前100字符: {GetJsonPreview(jsonValue)}");
        }

        var requestData = new
        {
            jsonDicKey = key,
            jsonDoubleKey = doublekey,
            jsonValue = jsonValue
        };

        var httpClient = GetHttpClient();
        if (httpClient == null) return;

        GameRoot.Instance.StartCoroutine(httpClient.PostAsync("/api/data/set", requestData,
            responseData =>
            {
                EnsureHashResponseKeys(responseData, key, doublekey);
                if (isBuildDataRequest)
                {
                    string serverResponseMessage = GetServerResponseMessage(responseData);
                    string returnedUserIdentifier = responseData["jsonDicKey"]?.ToString() ?? "";
                    string returnedBuildDataKey = responseData["jsonDoubleKey"]?.ToString() ?? "";
                    Debug.Log($"[RedisSystem] SetValueAsync(Hash) - 保存响应 请求键: {key}:{doublekey}, 返回键: {returnedUserIdentifier}:{returnedBuildDataKey}, Message: {serverResponseMessage}");
                }
            },
            error =>
            {
                Debug.LogError($"<color=#ff0000>[数据]</color> ❌ 保存失败 {key}.{doublekey}: {error}");
            }
        ));
    }

    /// <summary>
    /// 获取String类型数据
    /// </summary>
    public void GetValueAsync(string key, ValueToken onAccepted)
    {
        var requestData = new
        {
            jsonKey = key
        };

        var httpClient = GetHttpClient();
        if (httpClient == null) return;

        GameRoot.Instance.StartCoroutine(httpClient.PostAsync("/api/data/get", requestData,
            responseData =>
            {
                // 转换HTTP响应为Pkg格式（保持兼容）
                var pkg = CreatePkgFromHttpResponse(responseData, ServerCMD.ReturnJson);
                onAccepted.GetValue(pkg);
            },
            error =>
            {
                Debug.LogError($"<color=#ff0000>[数据]</color> ❌ 读取失败 {key}: {error}");
            }
        ));
    }

    /// <summary>
    /// 获取Hash类型数据
    /// </summary>
    public void GetValueAsync(string key, string doublekey, ValueToken onAccepted)
    {
        bool isBuildDataRequest = doublekey == ConfigUtils.ServerKeys_Config.block;
        if (isBuildDataRequest)
        {
            Debug.Log($"[RedisSystem] GetValueAsync(Hash) - 读取请求 UserID: {key}, Key: {doublekey}");
        }

        var requestData = new
        {
            jsonDicKey = key,
            jsonDoubleKey = doublekey
        };

        var httpClient = GetHttpClient();
        if (httpClient == null) return;

        GameRoot.Instance.StartCoroutine(httpClient.PostAsync("/api/data/get", requestData,
            responseData =>
            {
                EnsureHashResponseKeys(responseData, key, doublekey);
                if (isBuildDataRequest)
                {
                    string jsonValue = responseData["jsonValue"]?.ToString() ?? "";
                    string serverResponseMessage = GetServerResponseMessage(responseData);
                    string returnedUserIdentifier = responseData["jsonDicKey"]?.ToString() ?? "";
                    string returnedBuildDataKey = responseData["jsonDoubleKey"]?.ToString() ?? "";
                    Debug.Log($"[RedisSystem] GetValueAsync(Hash) - 读取响应 请求键: {key}:{doublekey}, 返回键: {returnedUserIdentifier}:{returnedBuildDataKey}, Message: {serverResponseMessage}, 返回JSON长度: {jsonValue.Length}, JSON前100字符: {GetJsonPreview(jsonValue)}");
                }

                // 转换HTTP响应为Pkg格式（保持兼容）
                var pkg = CreatePkgFromHttpResponse(responseData, ServerCMD.ReturnJson);
                onAccepted.GetValue(pkg);
            },
            error =>
            {
                Debug.LogError($"<color=#ff0000>[数据]</color> ❌ 读取失败 {key}.{doublekey}: {error}");
            }
        ));
    }

    /// <summary>
    /// 黑盒测试：传入服务端哈希回包与请求键，输出为回包键值完整可用；若服务端缺失键值则回退到本次请求键。
    /// </summary>
    private void EnsureHashResponseKeys(JObject responseData, string requestUserIdentifier, string requestDataKey)
    {
        string returnedUserIdentifier = responseData["jsonDicKey"]?.ToString() ?? "";
        if (string.IsNullOrEmpty(returnedUserIdentifier))
        {
            responseData["jsonDicKey"] = requestUserIdentifier;
        }

        string returnedDataKey = responseData["jsonDoubleKey"]?.ToString() ?? "";
        if (string.IsNullOrEmpty(returnedDataKey))
        {
            responseData["jsonDoubleKey"] = requestDataKey;
        }
    }

    /// <summary>
    /// 将HTTP响应转换为Pkg格式（保持与旧系统兼容）
    /// </summary>
    private Pkg CreatePkgFromHttpResponse(JObject responseData, ServerCMD cmd)
    {
        string serverResponseMessage = GetServerResponseMessage(responseData);
        return new Pkg
        {
            Head = new Head { ServerCmd = cmd },
            Body = new Body
            {
                serverMessage = new ServerMessage
                {
                    Id = PlayerInformation.currentUserData?.UserID ?? "",
                    clientName = PlayerInformation.currentUserData?.UserName ?? "",
                    companyName = PlayerInformation.currentUserData?.currentCompany?.CompName ?? "",
                    JsonValue = responseData["jsonValue"]?.ToString() ?? "",
                    JsonDicKey = responseData["jsonDicKey"]?.ToString() ?? "",
                    JsonDoubleKey = responseData["jsonDoubleKey"]?.ToString() ?? "",
                    FirstCreat = responseData["firstCreat"]?.Value<bool>() ?? false,
                    Message = serverResponseMessage
                }
            }
        };
    }

    /// <summary>
    /// 黑盒测试：传入服务端响应JSON，输出标准化后的Message文本，优先使用httpMessage字段。
    /// </summary>
    private string GetServerResponseMessage(JObject responseData)
    {
        return responseData["httpMessage"]?.ToString()
            ?? responseData["message"]?.ToString()
            ?? "成功";
    }

    /// <summary>
    /// 黑盒测试：传入任意JSON字符串，输出最多100字符预览；空字符串返回空。
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

/// <summary>
/// ReadValue - 数据读写包装类（保持不变）
/// </summary>
[System.Serializable]
public class ReadValue
{
    public ReadValue(string json)
    {
        this.json = json;
    }
    private string json;
    public static implicit operator float(ReadValue readValue)
    {
        return (float)Convert.ToDouble(readValue.json);
    }
    public static implicit operator ReadValue(float value)
    {
        return new ReadValue(value.ToString());
    }
    public static implicit operator string(ReadValue readValue)
    {
        return readValue.json;
    }
    public static implicit operator ReadValue(string value)
    {
        return new ReadValue(value);
    }
    public static implicit operator byte[](ReadValue readValue)
    {
        return System.Text.UTF8Encoding.UTF8.GetBytes(readValue.json);
    }
    public static implicit operator ReadValue(byte[] value)
    {
        string json = System.Text.UTF8Encoding.UTF8.GetString(value);
        return new ReadValue(json);
    }
    public override string ToString()
    {
        return json;
    }
}

/// <summary>
/// ValueToken - 异步回调令牌（简化版，不再依赖IOCPSystem）
/// </summary>
public class ValueToken
{
    Action<Pkg> OnGetValueCallBack;

    public ValueToken(Action<Pkg> OnGetValueCallBack)
    {
        this.OnGetValueCallBack = OnGetValueCallBack;
    }

    /// <summary>
    /// 接收响应并触发回调
    /// </summary>
    public void GetValue(Pkg pkg)
    {
        OnGetValueCallBack?.Invoke(pkg);
    }
}
