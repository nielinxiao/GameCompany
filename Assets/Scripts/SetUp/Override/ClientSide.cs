using UnityEngine;

/// <summary>
/// ClientSide - HTTP模式兼容层
/// 保留类定义但不执行任何操作
/// </summary>
public class ClientSide
{
    IOCPSystem iocp;

    public ClientSide(IOCPSystem iOCPSystem)
    {
        iocp = iOCPSystem;
        Debug.Log("[ClientSide] HTTP模式：ClientSide功能已禁用");
    }

    // 其他方法不再需要，因为HTTP模式不使用Socket连接
}
