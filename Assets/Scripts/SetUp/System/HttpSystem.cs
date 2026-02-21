using System.Collections;
using UnityEngine;

/// <summary>
/// HTTP通信系统 - 替代IOCPSystem
/// </summary>
public class HttpSystem : SystemBase, ISystemLife
{
    private HttpClientWrapper _httpClient;
    private string _sessionToken;
    private bool _isConnected = false;

    public bool IsConnected => _isConnected;

    public HttpSystem() : base(nameof(HttpSystem))
    {
    }

    public override void Start()
    {
        base.Start();

        // 创建HTTP客户端组件
        GameObject clientObj = new GameObject("HttpClient");
        clientObj.transform.SetParent(GameRoot.Instance.transform);
        _httpClient = clientObj.AddComponent<HttpClientWrapper>();

        // 构建服务器URL
        string url = GameRoot.Instance.isEditor
            ? $"http://{ConfigUtils.IOCP_Config.EditorIp}:{ConfigUtils.IOCP_Config.port}"
            : $"http://{ConfigUtils.IOCP_Config.ip}:{ConfigUtils.IOCP_Config.port}";

        _httpClient.Init(url);

        // 不在Start时自动连接，等待登录完成后由MainMenuUI调用
        // JoinServer(); // 已移除自动连接
    }

    /// <summary>
    /// 加入服务器（获取Token）
    /// </summary>
    public void JoinServer()
    {
        JoinServer(null, null, false);
    }

    /// <summary>
    /// 加入服务器（支持登录后强制重建会话）
    /// </summary>
    public void JoinServer(System.Action onSuccess, System.Action<string> onError, bool forceReconnect)
    {
        if (_isConnected && !forceReconnect)
        {
            onSuccess?.Invoke();
            return;
        }

        if (_httpClient == null)
        {
            Debug.LogError("<color=#ff0000>[HTTP系统]</color> ❌ 客户端未初始化");
            onError?.Invoke("HttpClient未初始化");
            return;
        }

        var requestData = new { };

        GameRoot.Instance.StartCoroutine(_httpClient.PostAsync("/api/player/join", requestData,
            responseData =>
            {
                _sessionToken = responseData["token"].ToString();
                _httpClient.SetToken(_sessionToken);
                _isConnected = true;
                string userName = PlayerInformation.currentUserData?.UserName ?? "游客";
                Debug.Log($"<color=#00ff00>[HTTP系统]</color> ✅ 玩家 <b>{userName}</b> 已连接服务器");
                onSuccess?.Invoke();
            },
            error =>
            {
                _isConnected = false;
                Debug.LogError($"<color=#ff0000>[HTTP系统]</color> ❌ 连接失败: {error}");
                onError?.Invoke(error);
            }
        ));
    }

    /// <summary>
    /// 离开服务器
    /// </summary>
    public void LeaveServer()
    {
        if (!_isConnected || string.IsNullOrEmpty(_sessionToken))
        {
            return;
        }

        var requestData = new { };

        GameRoot.Instance.StartCoroutine(_httpClient.PostAsync("/api/player/remove", requestData,
            responseData =>
            {
                Debug.Log("<color=#888888>[HTTP系统]</color> 👋 已断开连接");
                _sessionToken = null;
                _isConnected = false;
            },
            error =>
            {
                Debug.LogError($"<color=#ff0000>[HTTP系统]</color> ❌ 断开连接失败: {error}");
            }
        ));
    }

    /// <summary>
    /// 获取HTTP客户端（供RedisSystem使用）
    /// </summary>
    public HttpClientWrapper GetHttpClient()
    {
        return _httpClient;
    }

    public override void Destory()
    {
        base.Destory();
        LeaveServer();
    }
}
