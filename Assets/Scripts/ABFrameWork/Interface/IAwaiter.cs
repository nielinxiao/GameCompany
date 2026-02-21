using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine;

public interface IAwaiter<T>: INotifyCompletion
{
    public bool IsCompleted { get;}
    public IAwaiter<T> GetAwaiter();
    public T GetResult();
}
public interface ITick
{
    public void Tick();
}
