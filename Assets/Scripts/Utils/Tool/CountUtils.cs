using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class CountUtils<T>
{
    public static CountUtils<T> Instance
    {
        get 
        {
            if(instance==null)
            {
                instance = new CountUtils<T>();
            }
            return instance;
        }
    }

    private static CountUtils<T> instance;
    private HashSet<T> List = new HashSet<T>();
    Action<T> OnAddCallBack;
    Action<T> OnRemoveCallBack;
    public void AddListener(Action<T> OnAddCallBack, Action<T> OnRemoveCallBack)
    {
        Debug.Log($"Tick:[{DateTime.UtcNow.Ticks}]AddListener");
        this.OnAddCallBack += OnAddCallBack;
        this.OnRemoveCallBack += OnRemoveCallBack;
    }
    public void RemoveListener(Action<T> OnAddCallBack, Action<T> OnRemoveCallBack)
    {
        this.OnAddCallBack -= OnAddCallBack;
        this.OnRemoveCallBack -= OnRemoveCallBack;
        Debug.Log($"Tick:[{DateTime.UtcNow.Ticks}]Remove OnAddCallBack=null");
    }
    public void Destory()
    {
        List.Clear();
    }
    public int GetCount()
    {
        return List.Count;
    }
    public void AddObject(T element)
    {
        List.Add(element);
        OnAddCallBack?.Invoke(element);
        if(OnAddCallBack==null)
        Debug.Log($"Tick:[{DateTime.UtcNow.Ticks}]OnAddCallBack=null");
    }
    public void RemoveObject(T element)
    {
        if(List.Contains(element))
        {
            List.Remove(element);
            OnRemoveCallBack?.Invoke(element);
        }
    }
    public T[] GetArry()
    {
        T[] arr =List.ToArray();
        return arr;
    }
    public T FindObject(IFindObjecCompare<T> MathAction,T MathItem)
    {
        foreach (var item in List)
        {
            if (MathAction.Compare(item,MathItem))
            {
                return item;
            }
        }
        return default(T);
    } 
}
public interface IFindObjecCompare<T>
{
    bool Compare(T item1, T item2);
}

