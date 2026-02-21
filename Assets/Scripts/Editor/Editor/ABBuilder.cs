using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.IO.Compression;
using System.Linq;
using Newtonsoft.Json;
using Sirenix.OdinInspector;
using Sirenix.OdinInspector.Editor;
using Unity.SharpZipLib.Zip;
using UnityEditor;
using UnityEngine;
namespace ABFrameWorlk
{
    public class ABBuilder
    {
        public static string BuildPath;
        public static string BuildAssestPath;
        public const string AssestRootName= "AssestBundle";
        [MenuItem("Builder/AB Build")]
        public static void UIBuild()
        {
            BuildPath = Path.Combine(Application.persistentDataPath, "AssestBundle").Replace('\\', '/');
            BuildAssestPath = Path.Combine(Application.persistentDataPath, "AssestBundle", "Data").Replace('\\', '/');
            if (!Directory.Exists(BuildPath))
            {
                Directory.CreateDirectory(BuildPath);
            }
            string json = PlayerPrefs.GetString("EditorDll");
            List<string> list = new List<string>();
            if (!string.IsNullOrEmpty(json))
            {
                list = JsonConvert.DeserializeObject<List<string>>(json);
            }
            string path= Application.dataPath.Replace("\\", "/");
            int lastIndexOf=path.LastIndexOf("/");
            path = path.Substring(0, lastIndexOf);
            path=path+ "/HybridCLRData/HotUpdateDlls/Android";
            foreach (string item in list) 
            {
                File.Copy(path + $"/{item}.dll", BuildPath + $"/{item}.dll.bytes",true);
            }
            Build();
            CollectAllAssestBundle();
        }
        public static void CollectAllAssestBundle()
        {
            AssetPrefabElement assetPrefabElement = AssetDatabase.LoadAssetAtPath<AssetPrefabElement>(Path.Combine("Assets", "Resources", "Default PrefabElement.asset").Replace('\\', '/'));
            assetPrefabElement.Prefab.Clear();
            assetPrefabElement.Keys.Clear();
            foreach (var s in AssetDatabase.GetAllAssetBundleNames())
            {
                foreach (var j in AssetDatabase.GetAssetPathsFromAssetBundle(s))
                {
                    string[] name = j.Split('/');
                    string nameEnd = name[name.Length - 1].Split('.')[0];
                    assetPrefabElement.Prefab.Add(new PrefabElement() { name = nameEnd, path = j });
                    assetPrefabElement.Keys.Add(nameEnd);
                }
            }
            EditorUtility.SetDirty(assetPrefabElement);
            AssetDatabase.SaveAssets();
            AssetDatabase.Refresh();
        }
        public static void Build()
        {
            string binerDire = Path.Combine(Application.dataPath, AssestRootName).Replace('/', '\\');
            if (Directory.Exists(binerDire))
            {
                foreach(var flor in Directory.GetDirectories(binerDire))
                {
                    foreach(var doubleflor in Directory.GetFiles(flor))
                    {
                        if(doubleflor.EndsWith("meta"))
                        {
                            continue;
                        }
                        int index = doubleflor.IndexOf("Assets");
                        string endFlor=doubleflor.Substring(index, doubleflor.Length-index);
                        string fileName = Path.GetFileName(doubleflor);
                        string florName = Path.GetFileName(flor);
                        //Debug.Log($"���ڸ���[{endFlor}]�ļ����µ�[{fileName}]�ļ�");
                        AssetImporter assetImporter= AssetImporter.GetAtPath(endFlor);
                        assetImporter.assetBundleName = florName;
                        assetImporter.name = fileName;
                    }
                }
                AssetDatabase.Refresh();
                BuildPipeline.BuildAssetBundles(BuildPath,BuildAssetBundleOptions.ChunkBasedCompression| BuildAssetBundleOptions.DisableLoadAssetByFileName, BuildTarget.Android);
                string []path = Directory.GetFiles(BuildPath);
                foreach (var file in path)
                {
                    if(file.EndsWith("meta"))
                    {
                        File.Delete(Path.Combine(BuildPath, file).Replace('/','\\'));
                    }
                }
                List<string> AllABAssestPath = new List<string>();

                using (StreamWriter streamWriter = File.CreateText(BuildAssestPath))
                {
                    List<IResoure> paths = new List<IResoure>();
                    foreach (var s in AssetDatabase.GetAllAssetBundleNames())
                    {
                        foreach (var j in AssetDatabase.GetAssetPathsFromAssetBundle(s))
                        {
                            IResoure resoure = new IResoure(j, s);
                            paths.Add(resoure);
                            AllABAssestPath.Add(j);
                        }
                    }
                    foreach (var s in paths)
                    {
                        string[] allDependencies = AssetDatabase.GetDependencies(s.url);
                        foreach (var dep in allDependencies)
                        {
                            int index = AllABAssestPath.IndexOf(dep);
                            if (index != -1 && dep != s.url)
                            {
                                s.Dependencies.Add(dep);
                            }
                        }
                    }
                    streamWriter.WriteLine(JsonConvert.SerializeObject(paths));
                    streamWriter.Close();
                }
                if (File.Exists(BuildPath + ".zip"))
                {
                    File.Delete(BuildPath + ".zip");
                }
                System.IO.Compression.ZipFile.CreateFromDirectory(BuildPath, BuildPath + ".zip");
                MD5Spawn.GetMD5(BuildPath + ".zip", out byte[] byteouts);
                using (FileStream

                    writer = File.Create(Path.Combine(Application.persistentDataPath, "MD5.byte").Replace('\\', '/')))
                {
                    writer.Write(byteouts);
                    writer.Close();
                }
                Debug.Log("Done!");
            }
            else
            {
                Debug.Log(AssestRootName + " is no exist");
            }
          
        }
    }
    public class HotDllWindowEditor:OdinEditorWindow
    {
        [MenuItem("Builder/Show HotDll")]
        public static void ShowWindow()
        {
            HotDllWindowEditor hotDllWindowEditor = EditorWindow.GetWindow<HotDllWindowEditor>();
            hotDllWindowEditor.Show();
            string json= PlayerPrefs.GetString("EditorDll");
            if (!string.IsNullOrEmpty(json)) 
            {
                hotDllWindowEditor.HotDllName = JsonConvert.DeserializeObject<List<string>>(json);
            }
        }
        public List<string>HotDllName=new List<string>();
        [Button]
        public void Save()
        {
            string json= JsonConvert.SerializeObject(HotDllName);
            PlayerPrefs.SetString("EditorDll", json);
        }
    }
}