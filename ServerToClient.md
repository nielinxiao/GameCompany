[
{
    "需求名":  "功能测试发现：UI关闭后DOTween对已销毁RectTransform继续执行",
    "需求提出时间":  "2026-02-16 19:56:29",
    "需求内容":  "### Bug描述\n**位置:** 客户端 UIElement.cs:32、UIElement.cs:42\n**严重性:** 中\n\n### 问题详情\n功能测试期间，Unity Editor 日志持续出现 DOTween 警告：关闭/销毁 UI 后，Tween 仍在驱动已销毁的 RectTransform。\n\n### 期望行为\n1. UI 关闭与销毁前应先 DOKill 目标 Tween。\n2. onComplete 回调执行前应确认目标对象仍有效。\n3. 避免重复关闭/销毁导致的空目标 Tween 报错。",
    "需求是否完成":  true,
    "解决方案":  "### 之前的问题在于什么\n`UIElement.Close()` 在播放 `DOScale` 后，`onComplete` 直接访问 `gameobject.SetActive(false)`；当 UI 在补间尚未结束时被 `UnInit()` 销毁，补间仍会继续驱动已销毁的 `RectTransform`，触发 DOTween startup failed 警告。\n\n### 我怎么修复它的\n**修改文件：** `C:\\Users\\Nie\\Desktop\\GameCompany\\Assets\\Scripts\\Project\\Base\\UIElement.cs`\n\n1. `Open()` 增加 `gameobject.transform.DOKill()`，防止重复打开时旧补间残留。\n2. `Close()` 增加 `gameobject.transform.DOKill()`，并把 `onComplete` 改为先判空再 `SetActive(false)`，避免销毁后回调访问空对象。\n3. `UnInit()` 增加空对象判断，并在销毁前执行 `gameobject.transform.DOKill()`，最后置空 `gameobject`，彻底断开后续补间访问。\n\n### 修复后的行为\n1. 关闭 UI 时不会再遗留旧补间。\n2. UI 被销毁后不会再有 Tween 访问已销毁 `RectTransform`。\n3. 重复打开/关闭流程下补间生命周期稳定，不再出现该类 DOTween 警告。\n\n### 复用说明（参数与方法）\n1. 复用了现有字段 `gameobject`、`doScale_Start`、`doScale_End`、`doScale_Time_Start`、`doScale_Time_End`。\n2. 复用了原有 `Open/Close/UnInit` 生命周期方法，只在原方法内补齐 DOTween 清理和安全判空。\n3. 未新增类、未新增额外系统，保持原架构与调用路径不变。"
},
{
    "需求名":  "功能测试发现：BuildSinger前置校验误拦截数组格式建筑JSON，导致历史建筑数据无法加载",
    "需求提出时间":  "2026-02-16 20:37:39",
    "需求内容":  "### Bug描述\n**位置:** 客户端 `BuildSinger.cs:95`、`BuildSinger.cs:145-150`、`BuildSinger.cs:205-211`\n**严重性:** 高\n\n### 问题详情\n本次功能测试验证了建筑 `set/get` 与落盘链路正常，但客户端存在一处加载逻辑冲突：\n1. `GetBlock()` 在 `BuildSinger.cs:95` 先调用 `IsBuildResponseJson(json)` 做前置过滤。\n2. `IsBuildResponseJson()` 仅允许包含 `\"builds\"` 的对象格式（`BuildSinger.cs:145-150`）。\n3. `GetWorld()` 却明确写了“兼容数组格式 `[...]`”（`BuildSinger.cs:205-211`）。\n\n结果是：服务端返回数组格式建筑JSON时，会在前置过滤阶段被判定为“非建筑数据”，触发重试并最终终止加载，根本进不到 `GetWorld()` 的数组兼容分支。\n\n### 功能测试记录（2026-02-16 20:34）\n1. 正常链路（通过）\n   - `POST /api/player/join` -> `success=true`\n   - `POST /api/data/set`（`jsonDicKey=build_test_20260216_203453`, `jsonDoubleKey=block`）-> `success=true`\n   - `POST /api/data/get` -> `message=获取成功`，回读JSON与保存JSON一致（`roundtripMatch=true`）\n   - `hash_data.json` 已存在对应 `block` 落盘记录\n2. 兼容性风险（失败，存在漏洞）\n   - 当前持久化文件中仍有数组格式历史数据：`hash_data.json:95`（`\"block\": \"[{...}]\"`）\n   - 该格式不包含 `\"builds\"`，会被 `IsBuildResponseJson()` 判定为非建筑JSON并拦截，导致历史建筑无法加载\n\n### 证据\n- 客户端代码：\n  - `C:\\Users\\Nie\\Desktop\\GameCompany\\Assets\\Scripts\\Logic\\Singer\\BuildSinger.cs:95`\n  - `C:\\Users\\Nie\\Desktop\\GameCompany\\Assets\\Scripts\\Logic\\Singer\\BuildSinger.cs:145`\n  - `C:\\Users\\Nie\\Desktop\\GameCompany\\Assets\\Scripts\\Logic\\Singer\\BuildSinger.cs:205`\n- 服务端数据文件：\n  - `C:\\Users\\Nie\\Desktop\\GameCompanyServer\\World Server\\bin\\Debug\\Data\\hash_data.json:95`\n\n### 期望行为\n1. `IsBuildResponseJson()` 允许数组格式（`[` 开头）通过前置校验。\n2. 保持 `GetWorld()` 对对象/数组两种格式的兼容路径一致。\n3. 旧存档用户重登时可正常还原建筑数据，不应因格式历史差异被拦截。",
    "需求是否完成":  false,
    "解决方案":  ""
}
]
