using Sirenix.OdinInspector;
using System;
using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEngine;
[CreateAssetMenu(fileName = "BuildPrefabs",menuName = "PERoot/BuildPrefabs")]
public class BuildPrefab : ScriptableObject
{
    public List<BuildPrefab_Element>buildPrefab_Elements = new List<BuildPrefab_Element>();
    public const string path="AssestBundle/BuildPrefab";
    [Button]
    public void ReLoad()
    {
        string[] files= Directory.GetFiles(Path.Combine(Application.dataPath, path).Replace("\\", "/"));
        foreach (string file in files)
        {
            if(file.EndsWith("meta"))
                continue;
            string fileName= Path.GetFileName(file).Replace(".prefab",string.Empty);
            bool Exis = false;
            foreach (var elemnt in buildPrefab_Elements)
            {
                if(elemnt.UrlName== fileName)
                {
                    Exis = true; 
                    break;
                }
            }
            if(! Exis)
            {
                BuildPrefab_Element buildPrefab_Element= new BuildPrefab_Element();
                buildPrefab_Element.name= fileName;
                buildPrefab_Element.UrlName= fileName;
                buildPrefab_Element.UseMoney= 10;
                buildPrefab_Element.UrlSpriteName= "DuiHuaKeMeng";
                buildPrefab_Elements.Add(buildPrefab_Element);
               Debug.Log("ÐÂÌí¼Ó:" + buildPrefab_Element.UrlName);
            }
        }
    }
}
[System.Serializable]

public struct BuildPrefab_Element:IEquatable<BuildPrefab_Element>
{
    public string name;
    public string UrlName;
    public string UrlSpriteName;
    public int UseMoney;
    public BuildType buildType;
    [SerializeField]
    public enum BuildType
    {
        Build,
        Sit,
        Desk,
    }
    public bool Equals(BuildPrefab_Element other)
    {
        if(other.UrlName==this.UrlName)
            return true;
        else
            return false;
    }
}
