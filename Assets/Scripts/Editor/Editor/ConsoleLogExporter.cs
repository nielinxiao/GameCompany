using System;
using System.IO;
using UnityEditor;
using UnityEngine;
using Utility;

/// <summary>
/// Console日志导出工具
/// </summary>
public static class ConsoleLogExporter
{
    private const string LOG_FOLDER = "Assets/Logs";
    private const string MENU_PATH = "Tools/日志工具/";

    [MenuItem(MENU_PATH + "导出运行时日志(JSON含堆栈)", false, 1)]
    public static void ExportConsoleLogWithShortcut()
    {
        ExportConsoleLog(true);
    }

    [MenuItem(MENU_PATH + "导出运行时日志(JSON无堆栈)", false, 2)]
    public static void ExportConsoleLogWithoutStackTrace()
    {
        ExportConsoleLog(false);
    }

    [MenuItem(MENU_PATH + "清空记录的日志", false, 3)]
    public static void ClearRecordedLogs()
    {
        if (EditorUtility.DisplayDialog("清空日志", "确定要清空所有已记录的日志吗？", "确定", "取消"))
        {
            ConsoleLogRecorder.Instance.ClearLogs();
            Debug.Log("日志已清空");
        }
    }

    [MenuItem(MENU_PATH + "打开日志文件夹", false, 4)]
    public static void OpenLogFolder()
    {
        if (!Directory.Exists(LOG_FOLDER))
        {
            Directory.CreateDirectory(LOG_FOLDER);
            AssetDatabase.Refresh();
        }

        EditorUtility.RevealInFinder(LOG_FOLDER);
    }

    private static void ExportConsoleLog(bool includeStackTrace)
    {
        try
        {
            // 确保日志文件夹存在
            if (!Directory.Exists(LOG_FOLDER))
            {
                Directory.CreateDirectory(LOG_FOLDER);
            }

            // 检查是否有日志
            int logCount = ConsoleLogRecorder.Instance.GetLogCount();
            if (logCount == 0)
            {
                bool createRecorder = EditorUtility.DisplayDialog(
                    "无日志记录",
                    "当前没有记录任何日志。\n\n" +
                    "ConsoleLogRecorder会在运行时自动收集所有Console日志。\n" +
                    "请先运行游戏或生成一些日志。\n\n" +
                    "是否立即创建日志记录器？",
                    "创建",
                    "取消");

                if (createRecorder)
                {
                    // 在场景中创建记录器实例
                    var recorder = ConsoleLogRecorder.Instance;
                    Debug.Log("ConsoleLogRecorder已创建，现在会自动记录所有日志");
                    Selection.activeGameObject = recorder.gameObject;
                }
                return;
            }

            // 生成文件名
            string timestamp = DateTime.Now.ToString("yyyyMMdd_HHmmss");
            string fileName = $"RuntimeLog_{timestamp}.json";
            string filePath = Path.Combine(LOG_FOLDER, fileName);

            // 导出日志为JSON格式
            string logContent = ConsoleLogRecorder.Instance.ExportLogsToJson(includeStackTrace);
            File.WriteAllText(filePath, logContent, System.Text.Encoding.UTF8);

            // 刷新Assets数据库
            AssetDatabase.Refresh();

            // 复制文件路径到剪切板
            string absolutePath = Path.GetFullPath(filePath);
            GUIUtility.systemCopyBuffer = absolutePath;

            // 显示成功消息
            bool openFile = EditorUtility.DisplayDialog(
                "导出成功 ✓",
                $"日志已导出为JSON格式！\n\n" +
                $"文件路径: {absolutePath}\n" +
                $"日志条数: {logCount}\n\n" +
                $"✓ 路径已复制到剪切板\n\n" +
                "是否打开文件？",
                "打开",
                "取消");

            if (openFile)
            {
                // 在Unity中选中该文件
                var asset = AssetDatabase.LoadAssetAtPath<TextAsset>(filePath);
                if (asset != null)
                {
                    Selection.activeObject = asset;
                    EditorGUIUtility.PingObject(asset);
                }

                // 用系统默认编辑器打开
                System.Diagnostics.Process.Start(absolutePath);
            }

            Debug.Log($"<color=green>✓ JSON日志导出成功：{absolutePath}</color>\n<color=cyan>路径已复制到剪切板</color>");
        }
        catch (Exception ex)
        {
            EditorUtility.DisplayDialog("导出失败", $"导出日志时发生错误：\n{ex.Message}", "确定");
            Debug.LogError($"导出日志失败: {ex}");
        }
    }

    /// <summary>
    /// 快速导出当前编辑器Console的日志为JSON格式（不需要运行时记录器）
    /// </summary>
    [MenuItem(MENU_PATH + "导出当前Editor Console日志 (JSON)", false, 10)]
    public static void ExportEditorConsoleLog()
    {
        try
        {
            // 确保日志文件夹存在
            if (!Directory.Exists(LOG_FOLDER))
            {
                Directory.CreateDirectory(LOG_FOLDER);
            }

            // 生成文件名
            string timestamp = DateTime.Now.ToString("yyyyMMdd_HHmmss");
            string fileName = $"EditorConsoleLog_{timestamp}.json";
            string filePath = Path.Combine(LOG_FOLDER, fileName);

            // 通过反射获取Unity编辑器Console的日志
            var logEntries = GetEditorConsoleLogsJson();

            if (string.IsNullOrEmpty(logEntries))
            {
                EditorUtility.DisplayDialog("无日志", "当前Editor Console中没有日志", "确定");
                return;
            }

            File.WriteAllText(filePath, logEntries, System.Text.Encoding.UTF8);
            AssetDatabase.Refresh();

            // 复制文件路径到剪切板
            string absolutePath = Path.GetFullPath(filePath);
            GUIUtility.systemCopyBuffer = absolutePath;

            bool openFile = EditorUtility.DisplayDialog(
                "导出成功 ✓",
                $"日志已导出为JSON格式！\n\n" +
                $"文件路径: {absolutePath}\n\n" +
                $"✓ 路径已复制到剪切板\n\n" +
                "是否打开文件？",
                "打开",
                "取消");

            if (openFile)
            {
                System.Diagnostics.Process.Start(absolutePath);
            }

            Debug.Log($"<color=green>✓ JSON日志导出成功：{absolutePath}</color>\n<color=cyan>路径已复制到剪切板</color>");
        }
        catch (Exception ex)
        {
            EditorUtility.DisplayDialog("导出失败", $"导出日志时发生错误：\n{ex.Message}", "确定");
            Debug.LogError($"导出Editor Console日志失败: {ex}");
        }
    }

    private static string GetEditorConsoleLogsJson()
    {
        try
        {
            var assembly = System.Reflection.Assembly.GetAssembly(typeof(UnityEditor.Editor));
            var logEntriesType = assembly.GetType("UnityEditor.LogEntries");

            if (logEntriesType == null)
            {
                return "";
            }

            // 获取日志数量
            var getCountMethod = logEntriesType.GetMethod("GetCount",
                System.Reflection.BindingFlags.Static | System.Reflection.BindingFlags.Public);
            var startGettingEntriesMethod = logEntriesType.GetMethod("StartGettingEntries",
                System.Reflection.BindingFlags.Static | System.Reflection.BindingFlags.Public);
            var getEntryInternalMethod = logEntriesType.GetMethod("GetEntryInternal",
                System.Reflection.BindingFlags.Static | System.Reflection.BindingFlags.Public);
            var endGettingEntriesMethod = logEntriesType.GetMethod("EndGettingEntries",
                System.Reflection.BindingFlags.Static | System.Reflection.BindingFlags.Public);

            if (getCountMethod == null || startGettingEntriesMethod == null ||
                getEntryInternalMethod == null || endGettingEntriesMethod == null)
            {
                return "";
            }

            int count = (int)getCountMethod.Invoke(null, null);

            if (count == 0)
            {
                return "";
            }

            startGettingEntriesMethod.Invoke(null, null);

            var logEntryType = assembly.GetType("UnityEditor.LogEntry");
            var logEntry = Activator.CreateInstance(logEntryType);

            System.Text.StringBuilder json = new System.Text.StringBuilder();
            json.AppendLine("{");
            json.AppendLine($"  \"exportTime\": \"{DateTime.Now:yyyy-MM-dd HH:mm:ss}\",");
            json.AppendLine($"  \"source\": \"UnityEditorConsole\",");
            json.AppendLine($"  \"totalLogs\": {count},");
            json.AppendLine("  \"logs\": [");

            for (int i = 0; i < count; i++)
            {
                getEntryInternalMethod.Invoke(null, new object[] { i, logEntry });

                var messageField = logEntryType.GetField("message");
                var fileField = logEntryType.GetField("file");
                var lineField = logEntryType.GetField("line");
                var modeField = logEntryType.GetField("mode");

                if (messageField != null && modeField != null)
                {
                    string message = messageField.GetValue(logEntry)?.ToString() ?? "";
                    int mode = (int)modeField.GetValue(logEntry);

                    string typeStr = mode switch
                    {
                        1 => "LOG",
                        2 => "WARNING",
                        4 => "ERROR",
                        _ => "UNKNOWN"
                    };

                    string file = fileField?.GetValue(logEntry)?.ToString() ?? "";
                    int line = lineField != null ? (int)lineField.GetValue(logEntry) : 0;

                    json.AppendLine("    {");
                    json.AppendLine($"      \"index\": {i + 1},");
                    json.AppendLine($"      \"logType\": \"{typeStr}\",");
                    json.AppendLine($"      \"message\": {EscapeJsonString(message)},");
                    json.AppendLine($"      \"file\": \"{file}\",");
                    json.AppendLine($"      \"line\": {line}");
                    json.Append("    }");

                    if (i < count - 1)
                        json.AppendLine(",");
                    else
                        json.AppendLine();
                }
            }

            json.AppendLine("  ]");
            json.Append("}");

            endGettingEntriesMethod.Invoke(null, null);

            return json.ToString();
        }
        catch (Exception ex)
        {
            return $"{{\"error\": \"获取Editor Console日志时发生错误\", \"message\": {EscapeJsonString(ex.Message)}}}";
        }
    }

    private static string EscapeJsonString(string str)
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
