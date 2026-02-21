using System;
using System.Collections.Generic;
using UnityEngine;

public class LocalPool<T> where T : UnityEngine.Object
{
    public delegate T Reseter(T readyDestory);
    public delegate T Spawner();
    public delegate void Destory(T readyDestory);
    protected Reseter reseter;
    protected Spawner spawner;
    protected Destory destory;
    int defualtInit;
    public LocalPool(int defualtInit=10)
    {
       this.defualtInit = defualtInit;
    }
    public void Init( Spawner spawner, Reseter reseter, Destory destory )
    {
        this.spawner = spawner;
        this.reseter = reseter;
        this.destory = destory;
        for (int i = 0; i < defualtInit; i++)
        {
            T obj = spawner?.Invoke();
            obj = reseter?.Invoke(obj);
            freePool.Enqueue(obj);
        }
    }
    Queue<T>freePool= new Queue<T>();
    public T GetValue()
    {
        if(freePool.TryDequeue(out T free))
        {
            return free;
        }
        else
        {
            return spawner?.Invoke();
        }
    }
    public void PutValue(T element)
    {
        freePool.Enqueue(reseter?.Invoke(element));
    }
    public void DestoryPool()
    {
        while (freePool.TryDequeue(out T result) ) 
        {
            destory.Invoke(result);
        }
    }
}