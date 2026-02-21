using System;
using UnityEngine;

/// <summary>
/// MessageSend - 已废弃，HTTP模式下不再需要此类
/// 所有通信应通过 GameRoot.redisSystem 或 GameRoot.httpSystem 进行
/// </summary>
public static class MessageSend
{
    public static void Send(ClientCMD clientCMD, ClientMessage clientMessage)
    {
        // HTTP模式：静默忽略旧的Socket消息发送
        // 这些功能需要通过HTTP端点重新实现：
        // - SearchStock -> GET /api/stock/search
        // - BuyStock -> POST /api/stock/buy
        // - SellStock -> POST /api/stock/sell
        // - Message -> POST /api/message/send
        // - Join -> 已在 HttpSystem 中实现

        // 暂时不输出日志，避免干扰（这些调用来自旧UI代码）
    }
}
