# 游戏公司项目 - 服务端实现技术文档

## 概述
本文档详细说明了Unity客户端（GameCompany）的网络通信架构和协议，用于指导基于World框架的C#服务端开发。

## 一、客户端网络架构

### 1.1 连接配置
- **IP地址**: 49.233.248.132（生产环境） / 127.0.0.1（开发环境）
- **端口**: 45677
- **协议**: TCP Socket + IOCP异步模式
- **序列化**: Protobuf
- **缓冲区大小**: 2048字节

配置位置：`Assets/Scripts/Utils/Tool/ConfigUtils.cs`
```csharp
public static class IOCP_Config
{
    public static string ip = "49.233.248.132";
    public static string EditorIp = "127.0.0.1";
    public static int port = 45677;
}
```

### 1.2 核心通信类

#### IOCPClient<T>
- 位置：`Assets/Scripts/Project/IOCP/IOCP.cs`
- 职责：客户端TCP连接管理
- 功能：
  - 异步连接服务器
  - 基于SocketAsyncEventArgs的异步收发
  - 自动粘包拆包处理
  - 断线检测

#### IOCPToken<T>
- 职责：单个连接的封装
- 数据包格式：`[4字节长度(Big-Endian)][数据内容]`
- 特性：
  - 支持消息队列发送
  - 防止粘包的协议解析
  - 大数据包的分片重组（MaxLimit=3000字节）

#### ClientSide
- 位置：`Assets/Scripts/SetUp/Override/ClientSide.cs`
- 职责：客户端业务逻辑包装
- 继承：`IOCPClient<Pkg>`

#### IOCPSystem
- 位置：`Assets/Scripts/SetUp/System/IOCPSystem.cs`
- 职责：Unity侧的网络系统管理
- 功能：
  - 消息队列管理（主线程安全）
  - 服务端消息回调注册/注销
  - 连接/断开事件通知

### 1.3 消息发送流程
```
用户代码
    → MessageSend.Send(ClientCMD, ClientMessage)
    → IOCPSystem.SendMessage()
    → IOCPToken.Send()
    → TCP Socket异步发送
```

## 二、协议定义（Protobuf）

### 2.1 消息包结构
```protobuf
message PKG {
    required Head head = 1;
    required Body body = 2;
}

message Head {
    required Client_CMD client_cmd = 1;
    required Server_CMD server_cmd = 2;
}

message Body {
    required ClientMessage clientMessage = 3;
    required ServerMessage serverMessage = 4;
}
```

### 2.2 客户端命令（ClientCMD）
```csharp
public enum ClientCMD
{
    Join = 1,                      // 加入游戏
    Remove = 2,                    // 离开游戏
    Donat = 3,                     // 捐赠
    Message = 4,                   // 发送消息
    BuyStock = 5,                  // 购买股票
    SellStock = 6,                 // 出售股票
    SearchStock = 7,               // 搜索股票
    GetStock = 8,                  // 获取股票信息
    GetJson = 9,                   // 获取JSON数据
    SetJson = 10,                  // 设置JSON数据
    CheckPlayerCreatByFirst = 11   // 检查玩家首次创建
}
```

### 2.3 服务端命令（ServerCMD）
```csharp
public enum ServerCMD
{
    ServerMessage = 1,             // 服务器消息
    ClientMessage = 2,             // 客户端消息转发
    EmailMessage = 3,              // 邮件消息
    BuyStock = 4,                  // 股票购买响应
    GetStock = 5,                  // 股票信息响应
    SearchStock = 6,               // 股票搜索响应
    ReturnJson = 7,                // JSON数据响应
    CheckPlayerCreatByFirst = 8    // 首次创建检查响应
}
```

### 2.4 ClientMessage结构
```protobuf
message ClientMessage {
    required string Name = 1;           // 用户名
    required string companyName = 2;    // 公司名
    optional string message = 3;        // 消息内容
    optional string Donat = 4;          // 捐赠目标
    optional float DonatMoney = 5;      // 捐赠金额
    optional string stockID = 6;        // 股票ID
    optional int32 StockMuch = 7;       // 股票数量
    required string id = 8;             // 用户ID
    required string stockCompany = 9;   // 股票公司名
    optional string JsonDicKey = 10;    // JSON字典键
    optional string JsonValue = 11;     // JSON值
    optional string JsonKey = 12;       // JSON键
    optional string JsonDoubleKey = 13; // JSON双重键
}
```

### 2.5 ServerMessage结构
```protobuf
message ServerMessage {
    required string clientName = 1;     // 客户端名称
    required string companyName = 2;    // 公司名
    required string message = 3;        // 消息内容
    optional string Donat = 4;          // 捐赠相关
    optional float DonatMoney = 5;      // 捐赠金额
    optional EmailMessage email = 6;    // 邮件对象
    optional float StockMoney = 7;      // 股票金额
    optional bool AllowBuyStock = 8;    // 是否允许购买
    optional string jsonStock = 9;      // 股票JSON数据
    optional string JsonDicKey = 10;    // JSON字典键
    required string id = 11;            // 消息ID
    optional string JsonValue = 12;     // JSON值
    optional bool FirstCreat = 13;      // 是否首次创建
}
```

### 2.6 EmailMessage结构
```protobuf
message EmailMessage {
    required string title = 1;          // 标题
    required string description = 2;    // 描述
    required string datetime = 3;       // 时间
    repeated int32 objectID = 4;        // 对象ID列表
    repeated int32 number = 5;          // 数量列表
}
```

## 三、主要业务功能

### 3.1 用户数据管理
- **位置**: `Assets/Scripts/SetUp/Class/UserData.cs`
- **数据存储**: Redis（通过服务端转发）
- **主要字段**:
  - UserID: 用户唯一标识
  - UserName: 用户名
  - Money: 金钱数量
  - currentCompany: 当前公司信息
  - emalMessageElements: 邮件列表
  - stocks: 股票列表

### 3.2 Redis数据管理
- **位置**: `Assets/Scripts/SetUp/System/RedisSystem.cs`
- **功能**: 通过服务端代理访问Redis
- **操作**:
  - SetValueAsync(key, value): 设置键值
  - GetValueAsync(key, callback): 获取键值
  - 支持单键和双键（Hash）操作

### 3.3 股票系统
- **购买流程**:
  1. 客户端发送 ClientCMD.BuyStock
  2. 填充 stockID、StockMuch、stockCompany
  3. 服务端验证并返回 ServerCMD.BuyStock
  4. 返回 AllowBuyStock、StockMoney

- **获取股票列表**:
  1. 客户端发送 ClientCMD.GetStock
  2. 服务端返回 ServerCMD.GetStock
  3. 返回 jsonStock（JSON序列化的股票列表）

### 3.4 消息系统
- **功能**: 玩家间聊天、捐赠、邮件
- **流程**:
  1. 发送消息: ClientCMD.Message
  2. 服务端转发: ServerCMD.ClientMessage
  3. 邮件通知: ServerCMD.EmailMessage

### 3.5 数据持久化
- **Redis键结构**（ServerKeys_Config）:
  ```
  icon        - 用户头像
  company     - 公司数据 (Hash: company -> UserID -> JSON)
  bag         - 背包数据
  persons     - 员工数据
  block       - 建筑数据
  time        - 时间数据
  messages    - 消息列表 (UserID -> messages -> JSON)
  money       - 金钱数据
  StockMoney  - 股票资金
  Benefits    - 收益数据
  ```

## 四、World框架集成指南

### 4.1 World框架结构
- **入口**: `World Server/PERoot.cs`
- **IOCP框架**: `IOCP/IOCP.cs`
- **服务接口**: `World Server/Interface/IService.cs`
- **网络接口**: `World Server/Interface/INet.cs`

### 4.2 服务端实现要求

#### 4.2.1 继承IOCPServer<Pkg>
```csharp
using IOCP;
using Message; // Protobuf消息

public class GameServer : IOCPServer<Pkg>
{
    public GameServer() : base(2048) { }

    public override void AcceptClient(IOCPToken<Pkg> client)
    {
        // 客户端连接处理
    }

    public override void OnReceiveMessage(IOCPToken<Pkg> client, Pkg message)
    {
        // 消息处理分发
    }

    public override void OnCloseAccpet(IOCPToken<Pkg> client)
    {
        // 客户端断开处理
    }
}
```

#### 4.2.2 实现IService接口
```csharp
public class GameService : IService
{
    public void Init()
    {
        // 初始化服务器
        // 连接Redis
        // 启动IOCP服务器
    }

    public void Tick()
    {
        // 每帧更新
        // 处理消息队列
    }

    public void UnInit()
    {
        // 关闭服务器
    }
}
```

#### 4.2.3 消息分发器
```csharp
public void DispatchMessage(IOCPToken<Pkg> client, Pkg pkg)
{
    switch (pkg.Head.ClientCmd)
    {
        case ClientCMD.Join:
            HandleJoin(client, pkg.Body.clientMessage);
            break;
        case ClientCMD.GetJson:
            HandleGetJson(client, pkg.Body.clientMessage);
            break;
        case ClientCMD.SetJson:
            HandleSetJson(client, pkg.Body.clientMessage);
            break;
        // ... 其他命令
    }
}
```

### 4.3 Redis集成
- **连接信息**:
  - URL: 49.233.248.132
  - Port: 6379
  - Password: 666666
- **推荐库**: StackExchange.Redis
- **操作**:
  - Hash操作用于用户数据存储
  - String操作用于简单键值对

### 4.4 关键实现点

#### 4.4.1 粘包处理
已在IOCPToken中实现：
- 4字节长度头（Big-Endian）
- 自动分片重组
- 支持MaxLimit=3000字节限制

#### 4.4.2 线程安全
- 使用消息队列在主线程处理业务逻辑
- IOCPToken内部已实现发送队列锁

#### 4.4.3 客户端识别
- 通过ClientMessage.Id（UserID）识别玩家
- 维护 Dictionary<string, IOCPToken<Pkg>> 映射

## 五、测试要点

### 5.1 基础连接测试
1. 启动服务端（0.0.0.0:45677）
2. 客户端连接测试
3. 验证心跳/保活机制

### 5.2 消息测试
1. Join消息（玩家登录）
2. GetJson/SetJson（数据读写）
3. GetStock（股票数据）
4. Message（聊天消息）

### 5.3 压力测试
- 多客户端并发连接
- 大数据包传输
- 长时间运行稳定性

## 六、注意事项

1. **字节序**: 包长度使用Big-Endian（服务端需Array.Reverse）
2. **编码**: 字符串使用UTF-8编码
3. **序列化**: 必须使用Protobuf-net库
4. **端口**: 确保防火墙开放45677端口
5. **Redis**: 需要密码认证
6. **日志**: 实现详细的日志记录便于调试

## 七、Proto文件位置

客户端Proto生成文件：
- `Assets/Scripts/Project/IOCP/CompanyMessage.cs`

服务端需要：
- 复制Protobuf定义或直接使用编译好的Message.dll
- 位置：`World/proto/Message.cs`

## 八、开发步骤建议

1. 搭建基础服务器框架（继承IOCPServer）
2. 实现Redis连接和基础操作
3. 实现消息分发器
4. 逐个实现各ClientCMD处理函数
5. 测试各功能模块
6. 优化性能和错误处理
7. 日志和监控完善
