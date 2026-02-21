using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface ISystemLife 
{
    abstract void Awake();
    abstract void Start();
    abstract void Update();
    abstract void LateUpdate();
    abstract void Destory();
}
