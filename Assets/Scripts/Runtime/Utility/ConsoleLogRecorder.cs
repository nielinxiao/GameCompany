using System;
using System.Collections.Generic;
using System.Text;
using UnityEngine;

namespace Utility
{
    /// <summary>
    /// Console日志记录器，在运行时收集所有日志信息
    /// </summary>
    public class ConsoleLogRecorder : MonoBehaviour
    {
        private static ConsoleLogRecorder instance;
        private List<LogEntry> logEntries = new List<LogEntry>();
        private readonly object lockObject = new object();

        [SerializeField] private int maxLogCount = 10000; // 最大日志条数，防止内存溢出
        [SerializeField] private bool recordInEditor = true; // 在编辑器模式下是否记录

        [System.Serializable]
        public struct LogEntry
        {
            public string message;
            public string stackTrace;
            public LogType type;
            public DateTime timestamp;
        }

        [System.Serializable]
        public class LogEntryJson
        {
            public string message;
            public string stackTrace;
            public string logType;
            public string timestamp;
            public long timestampUnix;
        }

        public static ConsoleLogRecorder Instance
        {
            get
            {
                if (instance == null)
                {
                    GameObject go = new GameObject("ConsoleLogRecorder");
                    instance = go.AddComponent<ConsoleLogRecorder>();
                    DontDestroyOnLoad(go);
                }
                return instance;
            }
        }

        private void Awake()
        {
            if (instance != null && instance != this)
            {
                Destroy(gameObject);
                return;
            }

            instance = this;
            DontDestroyOnLoad(gameObject);

            // 订阅日志回调
            Application.logMessageReceived += HandleLog;
        }

        private void OnDestroy()
        {
            if (instance == this)
            {
                Application.logMessageReceived -= HandleLog;
            }
        }

        private void HandleLog(string message, string stackTrace, LogType type)
        {
            #if UNITY_EDITOR
            if (!recordInEditor && !Application.isPlaying)
                return;
            #endif

            lock (lockObject)
            {
                // 如果超过最大日志数，删除最旧的日志
                if (logEntries.Count >= maxLogCount)
                {
                    logEntries.RemoveAt(0);
                }

                logEntries.Add(new LogEntry
                {
                    message = message,
                    stackTrace = stackTrace,
                    type = type,
                    timestamp = DateTime.Now
                });
            }
        }

        /// <summary>
        /// 获取所有日志条目
        /// </summary>
        public List<LogEntry> GetAllLogs()
        {
            lock (lockObject)
            {
                return new List<LogEntry>(logEntries);
            }
        }

        /// <summary>
        /// 清空所有日志
        /// </summary>
        public void ClearLogs()
        {
            lock (lockObject)
            {
                logEntries.Clear();
            }
        }

        /// <summary>
        /// 获取日志数量
        /// </summary>
        public int GetLogCount()
        {
            lock (lockObject)
            {
                return logEntries.Count;
            }
        }

        /// <summary>
        /// 将日志导出为格式化的字符串
        /// </summary>
        public string ExportLogsToString(bool includeStackTrace = true)
        {
            StringBuilder sb = new StringBuilder();

            sb.AppendLine("=".PadRight(80, '='));
            sb.AppendLine($"Console Log Export - {DateTime.Now:yyyy-MM-dd HH:mm:ss}");
            sb.AppendLine($"Total Logs: {GetLogCount()}");
            sb.AppendLine("=".PadRight(80, '='));
            sb.AppendLine();

            List<LogEntry> logs = GetAllLogs();

            foreach (var log in logs)
            {
                string typeStr = GetLogTypeString(log.type);
                sb.AppendLine($"[{log.timestamp:HH:mm:ss.fff}] [{typeStr}] {log.message}");

                if (includeStackTrace && !string.IsNullOrEmpty(log.stackTrace))
                {
                    sb.AppendLine("Stack Trace:");
                    sb.AppendLine(log.stackTrace);
                }

                sb.AppendLine(new string('-', 80));
            }

            return sb.ToString();
        }

        private string GetLogTypeString(LogType type)
        {
            switch (type)
            {
                case LogType.Error:
                    return "ERROR";
                case LogType.Assert:
                    return "ASSERT";
                case LogType.Warning:
                    return "WARNING";
                case LogType.Log:
                    return "LOG";
                case LogType.Exception:
                    return "EXCEPTION";
                default:
                    return "UNKNOWN";
            }
        }

        /// <summary>
        /// 获取统计信息
        /// </summary>
        public string GetStatistics()
        {
            Dictionary<LogType, int> stats = new Dictionary<LogType, int>();
            List<LogEntry> logs = GetAllLogs();

            foreach (var log in logs)
            {
                if (stats.ContainsKey(log.type))
                    stats[log.type]++;
                else
                    stats[log.type] = 1;
            }

            StringBuilder sb = new StringBuilder();
            sb.AppendLine("Log Statistics:");
            foreach (var kvp in stats)
            {
                sb.AppendLine($"  {GetLogTypeString(kvp.Key)}: {kvp.Value}");
            }

            return sb.ToString();
        }

        /// <summary>
        /// 将日志导出为JSON格式
        /// </summary>
        public string ExportLogsToJson(bool includeStackTrace = true)
        {
            List<LogEntry> logs = GetAllLogs();
            List<LogEntryJson> jsonLogs = new List<LogEntryJson>();

            foreach (var log in logs)
            {
                jsonLogs.Add(new LogEntryJson
                {
                    message = log.message,
                    stackTrace = includeStackTrace ? log.stackTrace : "",
                    logType = GetLogTypeString(log.type),
                    timestamp = log.timestamp.ToString("yyyy-MM-dd HH:mm:ss.fff"),
                    timestampUnix = ((DateTimeOffset)log.timestamp).ToUnixTimeMilliseconds()
                });
            }

            // 构建JSON字符串
            StringBuilder json = new StringBuilder();
            json.AppendLine("{");
            json.AppendLine($"  \"exportTime\": \"{DateTime.Now:yyyy-MM-dd HH:mm:ss}\",");
            json.AppendLine($"  \"totalLogs\": {logs.Count},");
            json.AppendLine($"  \"includeStackTrace\": {includeStackTrace.ToString().ToLower()},");
            json.AppendLine("  \"logs\": [");

            for (int i = 0; i < jsonLogs.Count; i++)
            {
                var log = jsonLogs[i];
                json.AppendLine("    {");
                json.AppendLine($"      \"index\": {i + 1},");
                json.AppendLine($"      \"timestamp\": \"{log.timestamp}\",");
                json.AppendLine($"      \"timestampUnix\": {log.timestampUnix},");
                json.AppendLine($"      \"logType\": \"{log.logType}\",");
                json.AppendLine($"      \"message\": {EscapeJsonString(log.message)}");

                if (includeStackTrace && !string.IsNullOrEmpty(log.stackTrace))
                {
                    json.AppendLine(",");
                    json.AppendLine($"      \"stackTrace\": {EscapeJsonString(log.stackTrace)}");
                }

                json.Append("    }");
                if (i < jsonLogs.Count - 1)
                    json.AppendLine(",");
                else
                    json.AppendLine();
            }

            json.AppendLine("  ]");
            json.Append("}");

            return json.ToString();
        }

        /// <summary>
        /// 转义JSON字符串
        /// </summary>
        private string EscapeJsonString(string str)
        {
            if (string.IsNullOrEmpty(str))
                return "\"\"";

            str = str.Replace("\\", "\\\\")
                     .Replace("\"", "\\\"")
                     .Replace("\n", "\\n")
                     .Replace("\r", "\\r")
                     .Replace("\t", "\\t");

            return "\"" + str + "\"";
        }
    }
}
