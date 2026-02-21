using UnityEngine;

namespace Utility
{
    /// <summary>
    /// 自动初始化Console日志记录器
    /// 使用InitializeOnLoadMethod确保在游戏启动时自动创建记录器
    /// </summary>
    public static class AutoInitConsoleLogRecorder
    {
        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
        private static void Initialize()
        {
            // 自动创建日志记录器实例
            var recorder = ConsoleLogRecorder.Instance;
            Debug.Log("[ConsoleLogRecorder] 日志记录器已自动初始化，开始记录Console日志");
        }
    }
}
