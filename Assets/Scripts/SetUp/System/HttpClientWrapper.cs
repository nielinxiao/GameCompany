using System;
using System.Collections;
using System.Text;
using UnityEngine;
using UnityEngine.Networking;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

/// <summary>
/// HTTP客户端封装 - 使用UnityWebRequest进行HTTP通信
/// </summary>
public class HttpClientWrapper : MonoBehaviour
{
    private string _baseUrl;
    private string _token;

    /// <summary>
    /// 初始化HTTP客户端
    /// </summary>
    public void Init(string serverUrl)
    {
        _baseUrl = serverUrl;
        Debug.Log($"<color=#00ff00>[HTTP]</color> 🌐 连接服务器: {_baseUrl}");
    }

    /// <summary>
    /// 设置认证Token
    /// </summary>
    public void SetToken(string token)
    {
        _token = token;
        Debug.Log($"<color=#00ff00>[HTTP]</color> 🔑 Token已更新");
    }

    /// <summary>
    /// 发送POST请求
    /// </summary>
    public IEnumerator PostAsync(string endpoint, object requestData,
        Action<JObject> onSuccess, Action<string> onError)
    {
        // 安全获取用户数据
        string playerId = "";
        string playerName = "";
        string companyName = "";

        if (PlayerInformation.currentUserData != null)
        {
            playerId = PlayerInformation.currentUserData.UserID ?? "";
            playerName = PlayerInformation.currentUserData.UserName ?? "";
            companyName = PlayerInformation.currentUserData.currentCompany?.CompName ?? "";
        }

        // 使用Dictionary而不是匿名对象，避免序列化问题
        // 注意：data字段需要先序列化为JObject，确保服务端能正确解析
        JObject dataObject;
        if (requestData != null)
        {
            // 将requestData转换为JObject（支持匿名对象、Dictionary等）
            dataObject = JObject.FromObject(requestData);
        }
        else
        {
            dataObject = new JObject();
        }

        var requestBody = new System.Collections.Generic.Dictionary<string, object>
        {
            { "playerId", playerId },
            { "playerName", playerName },
            { "companyName", companyName },
            { "token", _token ?? "" },
            { "data", dataObject }
        };

        string json = JsonConvert.SerializeObject(requestBody);
        byte[] bodyRaw = Encoding.UTF8.GetBytes(json);

        string fullUrl = _baseUrl + endpoint;

        using (UnityWebRequest request = new UnityWebRequest(fullUrl, "POST"))
        {
            request.uploadHandler = new UploadHandlerRaw(bodyRaw);
            request.downloadHandler = new DownloadHandlerBuffer();
            request.SetRequestHeader("Content-Type", "application/json");
            request.timeout = 10;

            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.Success)
            {
                var responseText = request.downloadHandler.text;

                try
                {
                    var response = JsonConvert.DeserializeObject<JObject>(responseText);

                    if (response["success"].Value<bool>())
                    {
                        JObject responseData = response["data"] as JObject ?? new JObject();
                        responseData["httpMessage"] = response["message"]?.ToString() ?? "";
                        onSuccess?.Invoke(responseData);
                    }
                    else
                    {
                        string errorMsg = response["message"]?.ToString() ?? "操作失败";
                        Debug.LogWarning($"<color=#ffaa00>[HTTP]</color> ⚠️ {endpoint}: {errorMsg}");
                        onError?.Invoke(errorMsg);
                    }
                }
                catch (Exception ex)
                {
                    Debug.LogError($"<color=#ff0000>[HTTP]</color> ❌ 解析失败 {endpoint}: {ex.Message}");
                    onError?.Invoke($"响应解析错误: {ex.Message}");
                }
            }
            else
            {
                string errorMsg = $"HTTP错误: {request.error}";
                Debug.LogError($"<color=#ff0000>[HTTP]</color> ❌ {endpoint}: {errorMsg}");
                onError?.Invoke(errorMsg);
            }
        }
    }

    /// <summary>
    /// 发送GET请求
    /// </summary>
    public IEnumerator GetAsync(string endpoint,
        Action<JObject> onSuccess, Action<string> onError)
    {
        string playerId = PlayerInformation.currentUserData?.UserID ?? "";
        string fullUrl = $"{_baseUrl}{endpoint}?playerId={playerId}&token={_token}";

        using (UnityWebRequest request = UnityWebRequest.Get(fullUrl))
        {
            request.timeout = 10;

            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.Success)
            {
                var responseText = request.downloadHandler.text;

                try
                {
                    var response = JsonConvert.DeserializeObject<JObject>(responseText);

                    if (response["success"].Value<bool>())
                    {
                        onSuccess?.Invoke(response["data"] as JObject);
                    }
                    else
                    {
                        string errorMsg = response["message"]?.ToString() ?? "操作失败";
                        Debug.LogWarning($"<color=#ffaa00>[HTTP]</color> ⚠️ {endpoint}: {errorMsg}");
                        onError?.Invoke(errorMsg);
                    }
                }
                catch (Exception ex)
                {
                    Debug.LogError($"<color=#ff0000>[HTTP]</color> ❌ 解析失败 {endpoint}: {ex.Message}");
                    onError?.Invoke($"响应解析错误: {ex.Message}");
                }
            }
            else
            {
                string errorMsg = $"HTTP错误: {request.error}";
                Debug.LogError($"<color=#ff0000>[HTTP]</color> ❌ {endpoint}: {errorMsg}");
                onError?.Invoke(errorMsg);
            }
        }
    }
}
