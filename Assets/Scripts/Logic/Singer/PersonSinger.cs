using ABFrameWorlk;
using System;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class PersonSinger : SingerLife
{
    Resoure resoure;
    public static PersonSinger Instance 
    {
        get
        {
            return instance;
        }
    }
    private static PersonSinger instance;
    public override void Awake()
    {
        base.Awake();
        instance = this;
    }
    public void Init()
    {
        CountUtils<BuildObjectBase>.Instance.AddListener(AddBuildCallBack, RemoveBuildCallBack);
    }
    private Action onChanged;
    public void AddListener(Action onChanged)
    {
        this.onChanged += onChanged;
    }
    public void RemoveListenr(Action onChanged)
    {
        this.onChanged -= onChanged;
    }
    public override void Destory()
    {
        base.Destory();
        Unint();
    }
    public void Unint()
    {
        resoure?.UnLoad();
        currentPerson = 0;
        MaxPerson = 0;
        personBuildList.Clear();
        CountUtils<BuildObjectBase>.Instance.RemoveListener(AddBuildCallBack, RemoveBuildCallBack);
    }
    public int currentPerson { get; private set;  }
    public int MaxPerson { get; private set; }
    public void SetCurrentPerson(int person)
    {
        currentPerson = person;
        onChanged?.Invoke();
    }
    public string CompareName;
    public List<Build_PersonInterface> personBuildList=new List<Build_PersonInterface>();
    public void AddBuildCallBack(BuildObjectBase buildObjectBase)
    {
        Debug.Log("AddBuild"+buildObjectBase.nameUrl);
        Build_PersonInterface  build_PersonInterface= buildObjectBase as Build_PersonInterface;
        if (build_PersonInterface!=null)
        {
            MaxPerson += build_PersonInterface.Sitdown.Count;
            personBuildList.Add(build_PersonInterface);
            onChanged?.Invoke();
        }
    }
    public void RemoveBuildCallBack(BuildObjectBase buildObjectBase) 
    {
        Build_PersonInterface  build_PersonInterface= buildObjectBase as Build_PersonInterface;
        if (build_PersonInterface != null)
        {
            MaxPerson -= build_PersonInterface.Sitdown.Count;
            personBuildList.Remove(build_PersonInterface);
            onChanged?.Invoke();
        }
    }
}
