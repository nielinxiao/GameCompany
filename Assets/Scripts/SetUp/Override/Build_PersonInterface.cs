using System.Collections.Generic;
using Unity.SharpZipLib;
using UnityEngine;
public class Build_PersonInterface : BuildObjectBase
{
    public List<Transform> Sitdown = new List<Transform>();
    public List<bool> couldSitDown = new List<bool>();
    public override void OnInit()
    {
        base.OnInit();
    }
    public override void Start()
    {
        base.Start();
        foreach (Transform t in Sitdown)
        {
            couldSitDown.Add(false);
        }
    }
    public bool SitDown(out Transform transform)
    {
        for (int i = 0; i < couldSitDown.Count; i++)
        {
            if (!couldSitDown[i])
            {
                couldSitDown[i] = true;
                transform = Sitdown[i];
                return true;
            }
        }
        transform = null;
        return false;
    }
    public void SitUp(Transform transform)
    {
        int index=Sitdown.IndexOf(transform);
        if(index!=-1)
        {
            couldSitDown[index] = false;
        }
    }
}