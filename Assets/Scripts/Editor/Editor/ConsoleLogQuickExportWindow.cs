using UnityEditor;
using UnityEngine;
using Utility;

/// <summary>
/// Console日志快速导出窗口 - 可以停靠在Console窗口旁边使用
/// </summary>
public class ConsoleLogQuickExportWindow : EditorWindow
{
    [MenuItem("Window/日志导出", false, 2000)]
    public static void ShowWindow()
    {
        var window = GetWindow<ConsoleLogQuickExportWindow>("日志导出");
        window.minSize = new Vector2(150, 70);
        window.maxSize = new Vector2(200, 90);
        window.Show();
    }

    private void OnGUI()
    {
        GUILayout.Space(8);

        // 主要导出按钮
        GUI.backgroundColor = new Color(0.3f, 0.7f, 0.3f);
        if (GUILayout.Button("📄 导出JSON", GUILayout.Height(35)))
        {
            ConsoleLogExporter.ExportEditorConsoleLog();
        }
        GUI.backgroundColor = Color.white;

        GUILayout.Space(5);

        // 提示信息
        GUILayout.Label("路径自动复制", EditorStyles.centeredGreyMiniLabel);

        GUILayout.Space(5);

        // 打开文件夹按钮
        if (GUILayout.Button("📁 打开文件夹", GUILayout.Height(22)))
        {
            ConsoleLogExporter.OpenLogFolder();
        }
    }

    private void OnInspectorUpdate()
    {
        Repaint();
    }
}
