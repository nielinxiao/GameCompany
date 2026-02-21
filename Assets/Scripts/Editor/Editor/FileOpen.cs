using System.Diagnostics;
using UnityEditor;
using UnityEngine;

public class FileOpen
{
    [MenuItem("Tools/Open presistent path")]
    public static void Open_persistentDataPath()
    {
        Process.Start(Application.persistentDataPath);
    }
    [MenuItem("Tools/Open data path")]
    public static void Open_DataPath()
    {
        Process.Start(Application.dataPath);
    }
}