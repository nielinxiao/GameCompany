using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using UnityEngine;

public class TimeSinger : SingerLife
{
    private bool AllowTimeRun = false;
    public float OneDayMinues = 24;
    public float NowTimer;
    [ReadOnly(true)]
    public float NowTime;
    public static TimeSinger Instance;
    public Action<float> TimeCallBack;
    AudioSystem.AudioPlayer messagePlayer;
    public override void Awake()
    {
        Instance = this;
    }
    public override void Destory()
    {
        if(messagePlayer != null) 
        messagePlayer.Destory();
        base.Destory();
    }
    public void AllowTime()
    {
        AllowTimeRun = true;
    }
    public void StopTime()
    {
        AllowTimeRun = false;
    }
    public float saveSpace=24;
    public override void Update()
    {
        if(AllowTimeRun)
        {
            NowTimer += Time.deltaTime*GameManager.Instance.RunSpeed;
            NowTime= NowTimer / 60;
            TimeCallBack?.Invoke(NowTime);
            if (NowTime >= OneDayMinues)
            {
                NowTimer = 0;
            }
            if(RandomStaffComeTime==-1)
            {
                RandomStaff();
            }
            staffComeTimer += Time.deltaTime * GameManager.Instance.RunSpeed;
            if(staffComeTimer>=RandomStaffComeTime)
            {
                ComeOnStaff();
            }
        }
    }
    public float staffComeTimer;
    public float RandomStaffComeTime=-1;
    public int personCount = 0;
    private void PlayClip()
    {
        if (messagePlayer == null)
            messagePlayer = GameRoot.audioSystem.GeneratedAudioPlayer(ConfigUtils.AudioClip_Config.PhoneMessage);
        messagePlayer.Play();
    }
    private void ComeOnStaff()
    {
        personCount++;
        staffComeTimer = 0;
        RandomStaff();
        PlayClip();
        RedPointManager.Instance.ShowRedPoint(RedPointEnum.Phone);
    }
    private void RandomStaff()
    {
        float value = (140 - MoneySinger.Instance.HappyProgress);
        RandomStaffComeTime = UnityEngine.Random.Range(value * 0.2f, value * 0.4f)*10;
    }
}