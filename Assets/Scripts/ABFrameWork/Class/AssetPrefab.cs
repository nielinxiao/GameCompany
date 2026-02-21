using UnityEngine;
using System;
using System.Collections.Generic;
[CreateAssetMenu(fileName ="AssetPrefab",menuName = "PERoot/AssetPrefab")]
public class AssetPrefab : ScriptableObject
{
    public List<UnityEngine.Object> Prefab;
}

[System.Serializable]
public struct PrefabElement
{
    public string path;
    public string name;
}
