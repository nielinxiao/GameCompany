using DG.Tweening.Plugins.Options;
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine;

public class TimeSystem : SystemBase,ISystemLife
{
    public TimeSystem() : base(nameof(TimeSystem))
    {
    }
    public TimeToken AddTimer(int InvokePicece,float Interval, Action<int> InvokeCallBack,Action OnComplited,bool isLoop=false)
    {
        TimeToken timeToken = new TimeToken(InvokeCallBack, OnComplited, InvokePicece, Interval, isLoop);
        readyToAdd.Enqueue(timeToken);
        return timeToken;
    }
    public void RemoveTimeToken(TimeToken timeToken)
    {
        if (tokens.Contains(timeToken)) 
        {
            tokens.Remove(timeToken);
        }
    }
    Queue<TimeToken>readyToAdd = new Queue<TimeToken>();
    public List<TimeToken>tokens=new List<TimeToken>();
    Queue<TimeToken>readyToDes = new Queue<TimeToken>();
    public override void Update()
    {
        base.Update();
        foreach (var tok in tokens) 
        {
            tok.intervaltimer += Time.deltaTime;
            if(tok.intervaltimer>=tok.Interval)
            {
                tok.intervaltimer = 0;
                if (tok.isLoop)
                {
                    tok.InvokeCallBack?.Invoke(tok.picece);
                }
                else
                {
                    ++tok.picece;
                    tok.InvokeCallBack?.Invoke(tok.picece);
                    if (tok.picece >= tok.InvokePicece)
                    {
                        tok.OnComplited?.Invoke();
                        Debug.LogWarning("OnComplited");
                        readyToDes.Enqueue(tok);
                    }
                }
            }
        }
        while(readyToDes.TryDequeue(out TimeToken result))
        {
            result.isComplited=true;
            tokens.Remove(result);
        }
        while (readyToAdd.TryDequeue(out TimeToken result))
        {
            tokens.Add(result);
        }
    }
}
public class TimeToken
{
    public readonly Action<int> InvokeCallBack;
    public readonly Action OnComplited;
    public readonly int InvokePicece;
    public readonly float Interval;
    public  float intervaltimer;
    public bool isLoop;
    public bool isComplited=false;
    public int picece;
    public TimeToken(Action<int> InvokeCallBack, Action OnComplited, int InvokePicece, float interval,bool isLoop)
    {
        this.InvokeCallBack = InvokeCallBack;
        this.OnComplited = OnComplited;
        this.InvokePicece = InvokePicece;
        Interval = interval;
        intervaltimer = 0;
        this.isLoop = isLoop;
        isComplited = false;
    }
}