using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class BuildJsonClass
{
    public List<BuildElement>builds=new List<BuildElement>();
}
[System.Serializable]
public class BuildElement
{
    public string nameUrl;
    public Vector3_Json vector3Json;
    public Quaternion_Json quaternionJson;
    public BuildElement(string nameUrl,Vector3_Json vector3Json, Quaternion_Json quaternionJson)
    {
        this.nameUrl = nameUrl;
        this.vector3Json = vector3Json;
        this.quaternionJson = quaternionJson;
    }
}
