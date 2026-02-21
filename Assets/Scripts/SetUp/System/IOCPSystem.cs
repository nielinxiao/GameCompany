using System;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// IOCPSystem - HTTP模式兼容层
/// 保留原有接口并补充GM消息监听处理。
/// </summary>
public class IOCPSystem : SystemBase, ISystemLife
{
    public IOCPSystem() : base(nameof(IOCPSystem))
    {
    }

    public IOCPToken<Pkg> clientToken;
    private readonly Dictionary<ServerCMD, Action<Pkg>> serverCallBack = new Dictionary<ServerCMD, Action<Pkg>>();

    public void SendMessage(ClientCMD clientCMD, ClientMessage clientMessage)
    {
        Debug.LogWarning($"[IOCPSystem] HTTP模式，SendMessage已废弃 - CMD: {clientCMD}");
        Debug.LogWarning("[IOCPSystem] 请改用 GameRoot.redisSystem 或 GameRoot.httpSystem");
    }

    /// <summary>
    /// 连接回调（兼容层，空实现）。
    /// </summary>
    public void OnConnect()
    {
    }

    /// <summary>
    /// 黑盒测试：输入服务端消息包，输出为按ServerCMD触发监听与GM处理。
    /// </summary>
    public void TokenCallBack(Pkg message)
    {
        DispatchServerMessage(message);
    }

    /// <summary>
    /// 黑盒测试：输入服务端消息包，输出为按ServerCMD触发监听与GM处理。
    /// </summary>
    public void ReceiveServerMessage(Pkg message)
    {
        DispatchServerMessage(message);
    }

    public override void Start()
    {
        base.Start();
        RegisterGMMessageListener();
        Debug.Log("[IOCPSystem] HTTP模式，IOCP功能已禁用");
    }

    public override void Update()
    {
        base.Update();
    }

    /// <summary>
    /// 黑盒测试：输入命令枚举与回调，输出为该命令成功注册回调链。
    /// </summary>
    public void AddListener(ServerCMD serverCMD, Action<Pkg> callback)
    {
        if (serverCallBack.TryGetValue(serverCMD, out Action<Pkg> callBack))
        {
            serverCallBack[serverCMD] = callBack + callback;
        }
        else
        {
            serverCallBack.Add(serverCMD, callback);
        }
    }

    /// <summary>
    /// 黑盒测试：输入命令枚举与回调，输出为该命令移除对应回调链。
    /// </summary>
    public void RemoveListener(ServerCMD serverCMD, Action<Pkg> callback)
    {
        if (!serverCallBack.TryGetValue(serverCMD, out Action<Pkg> callBack))
            return;

        callBack -= callback;
        if (callBack == null)
        {
            serverCallBack.Remove(serverCMD);
        }
        else
        {
            serverCallBack[serverCMD] = callBack;
        }
    }

    /// <summary>
    /// 黑盒测试：输入无参数，输出为注册3个GM命令监听器。
    /// </summary>
    private void RegisterGMMessageListener()
    {
        AddListener(ServerCMD.GMAddMoney, OnGMAddMoneyMessage);
        AddListener(ServerCMD.GMAwardEmail, OnGMAwardEmailMessage);
        AddListener(ServerCMD.GMBroadcast, OnGMBroadcastMessage);
    }

    /// <summary>
    /// 黑盒测试：输入无参数，输出为移除3个GM命令监听器。
    /// </summary>
    private void RemoveGMMessageListener()
    {
        RemoveListener(ServerCMD.GMAddMoney, OnGMAddMoneyMessage);
        RemoveListener(ServerCMD.GMAwardEmail, OnGMAwardEmailMessage);
        RemoveListener(ServerCMD.GMBroadcast, OnGMBroadcastMessage);
    }

    /// <summary>
    /// 黑盒测试：输入携带GMMoney的消息包，输出为本地金币更新并持久化公司数据。
    /// </summary>
    private void OnGMAddMoneyMessage(Pkg pkg)
    {
        if (PlayerInformation.currentUserData == null || PlayerInformation.currentUserData.currentCompany == null)
            return;

        PlayerInformation.currentUserData.Money += pkg.Body.serverMessage.GMMoney;
        PlayerInformation.currentUserData.SaveCompany();

        string tipsMessage = pkg.Body.serverMessage.Message;
        if (string.IsNullOrEmpty(tipsMessage))
        {
            tipsMessage = $"金币变更: {pkg.Body.serverMessage.GMMoney:+0.##;-0.##;0}";
        }
        ShowTitleTips(tipsMessage);
    }

    /// <summary>
    /// 黑盒测试：输入携带Email的GM消息包，输出为复用现有Email监听或兜底写入本地邮件。
    /// </summary>
    private void OnGMAwardEmailMessage(Pkg pkg)
    {
        if (serverCallBack.TryGetValue(ServerCMD.EmailMessage, out Action<Pkg> emailCallBack) && emailCallBack != null)
        {
            emailCallBack.Invoke(CreateForwardPackage(pkg, ServerCMD.EmailMessage));
        }
        else
        {
            CacheEmailToLocal(pkg);
        }

        if (!string.IsNullOrEmpty(pkg.Body.serverMessage.Message))
        {
            ShowTitleTips(pkg.Body.serverMessage.Message);
        }
    }

    /// <summary>
    /// 黑盒测试：输入携带广播文本的GM消息包，输出为复用世界消息监听并显示提示。
    /// </summary>
    private void OnGMBroadcastMessage(Pkg pkg)
    {
        if (serverCallBack.TryGetValue(ServerCMD.ServerMessage, out Action<Pkg> serverMessageCallBack) && serverMessageCallBack != null)
        {
            serverMessageCallBack.Invoke(CreateForwardPackage(pkg, ServerCMD.ServerMessage));
        }
        ShowTitleTips(pkg.Body.serverMessage.Message);
    }

    /// <summary>
    /// 黑盒测试：输入目标ServerCMD，输出为保持原serverMessage并重定向命令类型。
    /// </summary>
    private Pkg CreateForwardPackage(Pkg pkg, ServerCMD targetServerCMD)
    {
        return new Pkg
        {
            Head = new Head
            {
                ServerCmd = targetServerCMD
            },
            Body = new Body
            {
                serverMessage = pkg.Body.serverMessage
            }
        };
    }

    /// <summary>
    /// 黑盒测试：输入GM邮件消息包且无Email监听时，输出为邮件写入本地缓存并持久化。
    /// </summary>
    private void CacheEmailToLocal(Pkg pkg)
    {
        if (PlayerInformation.currentUserData == null || pkg.Body.serverMessage.Email == null)
            return;

        EmailMessage emailMessage = pkg.Body.serverMessage.Email;
        EmalMessageElement emalMessageElement = new EmalMessageElement();
        emalMessageElement.Title = emailMessage.Title;
        emalMessageElement.Descirption = emailMessage.Description;
        emalMessageElement.creatTime = emailMessage.Datetime;

        if (emailMessage.objectIDs == null || emailMessage.objectIDs.Length == 0)
        {
            emalMessageElement.messageState = MessageState.Message;
        }
        else
        {
            emalMessageElement.messageState = MessageState.Object;
            emalMessageElement.ObjectID.AddRange(emailMessage.objectIDs);
            if (emailMessage.Numbers != null)
            {
                emalMessageElement.Number.AddRange(emailMessage.Numbers);
            }
        }

        PlayerInformation.currentUserData.emalMessageElements.Add(emalMessageElement);
        PlayerInformation.currentUserData.ToJsonEmal();
    }

    /// <summary>
    /// 黑盒测试：输入提示文本，输出为在主画布弹出TitleTips并显示文本。
    /// </summary>
    private void ShowTitleTips(string message)
    {
        if (string.IsNullOrEmpty(message) || PlayerCanvas.MainCanvas == null || GameRoot.uISystem == null)
            return;

        TitleTips titleTips = GameRoot.uISystem.LoadUI(ConfigUtils.UI_Config.Title, Vector3.zero, PlayerCanvas.MainCanvas.transform) as TitleTips;
        if (titleTips != null)
        {
            titleTips.title.text = message;
            titleTips.Open();
        }
    }

    /// <summary>
    /// 黑盒测试：输入消息包，输出为按ServerCMD分发到监听回调。
    /// </summary>
    private void DispatchServerMessage(Pkg pkg)
    {
        if (pkg == null || pkg.Head == null)
            return;

        if (serverCallBack.TryGetValue(pkg.Head.ServerCmd, out Action<Pkg> callBack))
        {
            callBack?.Invoke(pkg);
        }
    }

    public override void Destory()
    {
        RemoveGMMessageListener();
        base.Destory();
    }
}
