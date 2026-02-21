using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public static GameManager Instance
    {
        get { return instance; }
    }
    private static GameManager instance;
    public static BagSinger bagSinger;
    public static BuildSinger buildSinger;
    public static MoneySinger moneySinger;
    public static StaffsSinger staffsSinger;
    public static TimeSinger timeSinger;
    public float RunSpeed = 10;
    public List<SingerLife>singerLives=new List<SingerLife>();
    private void Awake()
    {
        instance = this;
        bagSinger = new BagSinger();
        RegiveLife(bagSinger);
        buildSinger = new BuildSinger();
        RegiveLife(buildSinger);
        moneySinger = new MoneySinger();
        RegiveLife(moneySinger);
        staffsSinger = new StaffsSinger();
        RegiveLife(staffsSinger);
        timeSinger = new TimeSinger();
        RegiveLife(timeSinger);
        PersonSinger personSinger = new PersonSinger();
        RegiveLife(personSinger);
        AllAwake();

    }
    public void RegiveLife(SingerLife singerLife)
    {
        singerLives.Add(singerLife);
    }
    public void AllAwake()
    {
        foreach (var singer in singerLives)
        {
            singer.Awake();
        }
    }
    public void Start()
    {
        GameRoot.Instance.RegistMode(ModeType.MainLoadMenu, new MainLoadMode());
        GameRoot.Instance.RegistMode(ModeType.MainGame, new MainGameMode());
        GameRoot.Instance.RegistMode(ModeType.Look, new LookMode());
        GameRoot.Instance.EnterMode(ModeType.MainLoadMenu);
        foreach (var singer in singerLives)
        {
            singer.Start();
        }
    }
    public void Update()
    {
        foreach (var singer in singerLives)
        {
            singer.Update();
        }
    }
    public void OnDestroy()
    {
        foreach (var singer in singerLives)
        {
            singer.Destory();
        }
    }
}

