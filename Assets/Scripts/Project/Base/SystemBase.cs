using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public abstract class SystemBase: ISystemLife
{
    public readonly string systemName;
    public SystemBase(string systemName)
    {
        this.systemName = systemName;
    }
    public virtual void Awake() { }
    public virtual void Destory() { }
    public virtual void Start() { }
    public virtual void Update() { }
    public virtual void LateUpdate() { }
}
