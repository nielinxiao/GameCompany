using System;
using System.Collections;
using System.Net.Sockets;
using System.Text;
using UnityEngine;
using Newtonsoft.Json;

/// <summary>
/// 聊天 Socket 系统 - 只用于接收世界聊天的实时推送
/// </summary>
public class ChatSocketSystem : SystemBase, ISystemLife
{
    private Socket _socket;
    private bool _isConnected;
    private string _serverIp;
    private int _serverPort;

    // 聊天消息回调
    public Action<ChatMessage> OnMessageReceived;

    public ChatSocketSystem() : base(nameof(ChatSocketSystem))
    {
    }

    public override void Start()
    {
        base.Start();

        _serverIp = GameRoot.Instance.isEditor
            ? ConfigUtils.IOCP_Config.EditorIp
            : ConfigUtils.IOCP_Config.ip;
        _serverPort = 45678; // 聊天 Socket 服务器端口

        Debug.Log($"[ChatSocket] 初始化完成 - 服务器: {_serverIp}:{_serverPort}");

        // 不在Start时自动连接，等待登录完成后手动调用ConnectToServer()
    }

    /// <summary>
    /// 连接到聊天Socket服务器（登录后调用）
    /// </summary>
    public void Connect()
    {
        if (_isConnected)
        {
            Debug.LogWarning("[ChatSocket] 已经连接，跳过重复连接");
            return;
        }

        ConnectToServer();
    }

    private void ConnectToServer()
    {
        try
        {
            // 检查玩家信息是否已初始化
            if (PlayerInformation.currentUserData == null)
            {
                Debug.LogError($"<color=#ff0000>[ChatSocket]</color> ❌ 连接失败: 玩家信息未初始化");
                _isConnected = false;
                return;
            }

            _socket = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
            _socket.Connect(_serverIp, _serverPort);
            _isConnected = true;

            Debug.Log($"<color=#00ff00>[ChatSocket]</color> ✅ 连接成功: {_serverIp}:{_serverPort}");

            // 发送认证信息
            var authData = new ChatAuthData
            {
                PlayerId = PlayerInformation.currentUserData.UserID,
                PlayerName = PlayerInformation.currentUserData.UserName,
                Token = "" // 如果需要可以添加 token
            };

            string json = JsonConvert.SerializeObject(authData);
            byte[] data = Encoding.UTF8.GetBytes(json);
            _socket.Send(data);

            Debug.Log($"<color=#00ff00>[ChatSocket]</color> 📤 已发送认证: {PlayerInformation.currentUserData.UserName}");

            // 启动接收消息的协程
            GameRoot.Instance.StartCoroutine(ReceiveMessages());
        }
        catch (Exception ex)
        {
            Debug.LogError($"<color=#ff0000>[ChatSocket]</color> ❌ 连接失败: {ex.Message}");
            _isConnected = false;
        }
    }

    private IEnumerator ReceiveMessages()
    {
        byte[] buffer = new byte[8192];

        while (_isConnected && _socket != null && _socket.Connected)
        {
            try
            {
                if (_socket.Available > 0)
                {
                    // 读取消息长度（4字节）
                    byte[] lengthBytes = new byte[4];
                    int received = _socket.Receive(lengthBytes, 4, SocketFlags.None);

                    if (received == 4)
                    {
                        int messageLength = BitConverter.ToInt32(lengthBytes, 0);

                        // 创建足够大的缓冲区来接收完整消息
                        byte[] messageBuffer = new byte[messageLength];
                        int totalReceived = 0;

                        // 读取完整消息内容
                        while (totalReceived < messageLength)
                        {
                            int remaining = messageLength - totalReceived;
                            int toRead = Math.Min(remaining, buffer.Length);
                            int receivedNow = _socket.Receive(buffer, 0, toRead, SocketFlags.None);

                            if (receivedNow == 0)
                                break;

                            // 将接收到的数据复制到消息缓冲区
                            Array.Copy(buffer, 0, messageBuffer, totalReceived, receivedNow);
                            totalReceived += receivedNow;
                        }

                        // 解析消息
                        string json = Encoding.UTF8.GetString(messageBuffer, 0, totalReceived);
                        Debug.Log($"<color=#00ffff>[ChatSocket]</color> 📥 接收到消息 ({totalReceived}字节): {json.Substring(0, Math.Min(100, json.Length))}...");

                        try
                        {
                            var chatMessage = JsonConvert.DeserializeObject<ChatMessage>(json);

                            if (chatMessage == null)
                            {
                                Debug.LogError($"<color=#ff0000>[ChatSocket]</color> JSON反序列化失败，结果为null");
                                continue;
                            }

                            Debug.Log($"<color=#00ffff>[ChatSocket]</color> 消息类型: {chatMessage.Type}, PlayerName: {chatMessage.PlayerName ?? "null"}, CompanyName: {chatMessage.CompanyName ?? "null"}");

                            // 触发回调
                            if (chatMessage.Type == "world_chat")
                            {
                                Debug.Log($"<color=#00ffff>[ChatSocket]</color> 💬 准备触发回调: [{chatMessage.CompanyName}] {chatMessage.PlayerName}: {chatMessage.Message}");

                                if (OnMessageReceived != null)
                                {
                                    try
                                    {
                                        OnMessageReceived.Invoke(chatMessage);
                                        Debug.Log($"<color=#00ff00>[ChatSocket]</color> ✓ 回调成功触发");
                                    }
                                    catch (Exception callbackEx)
                                    {
                                        Debug.LogError($"<color=#ff0000>[ChatSocket]</color> 回调执行失败: {callbackEx.Message}\n{callbackEx.StackTrace}");
                                    }
                                }
                                else
                                {
                                    Debug.LogWarning($"<color=yellow>[ChatSocket]</color> OnMessageReceived回调为null，没有订阅者");
                                }
                            }
                            else
                            {
                                Debug.LogWarning($"<color=yellow>[ChatSocket]</color> 收到非world_chat消息: Type={chatMessage.Type}");
                            }
                        }
                        catch (Exception parseEx)
                        {
                            Debug.LogError($"<color=#ff0000>[ChatSocket]</color> 消息解析失败: {parseEx.Message}\nJSON: {json}");
                        }
                    }
                }
            }
            catch (Exception ex)
            {
                Debug.LogError($"<color=#ff0000>[ChatSocket]</color> 接收消息失败: {ex.Message}");
                _isConnected = false;
                break;
            }

            yield return null;
        }

        Debug.LogWarning("[ChatSocket] 接收消息循环结束");
    }

    public override void Destory()
    {
        base.Destory();

        _isConnected = false;

        try
        {
            _socket?.Close();
            _socket = null;
        }
        catch (Exception ex)
        {
            Debug.LogError($"[ChatSocket] 关闭连接失败: {ex.Message}");
        }

        Debug.Log("[ChatSocket] 已断开连接");
    }

    public bool IsConnected => _isConnected;
}

/// <summary>
/// 聊天认证数据
/// </summary>
[Serializable]
public class ChatAuthData
{
    public string PlayerId;
    public string PlayerName;
    public string Token;
}

/// <summary>
/// 聊天消息
/// </summary>
[Serializable]
public class ChatMessage
{
    public string Type;  // auth_success, world_chat
    public string PlayerName;
    public string CompanyName;
    public string Message;
    public DateTime Timestamp;
}
