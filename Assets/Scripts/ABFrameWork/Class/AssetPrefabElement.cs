using Sirenix.OdinInspector;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "AssetPrefabElement", menuName = "PERoot/AssetPrefabElement")]
public class AssetPrefabElement : ScriptableObject
{
    [SerializeField,Searchable]
    public List<PrefabElement> Prefab = new List<PrefabElement>();
    [SerializeField, Searchable]
    public List<string> Keys = new List<string>();
}
