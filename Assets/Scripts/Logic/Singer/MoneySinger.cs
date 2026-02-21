using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;

public class MoneySinger : SingerLife
{
    private bool isAllow = false;
    public static MoneySinger Instance;
    public bool isWorkTime 
    {
        get 
        {
            return workTime;
        }
        set
        {
            if(workTime!=value)
            {
                workTime = value;
                OnChange(value);
            }
        }
    }
    [System.Serializable]
    public class Benefits
    {
        public float WaterMoney = ConfigUtils.Money_Config.WaterMoney;//�ȶ�����
        public float WaterMoney_Percent;
        public float FiveMoney => ConfigUtils.Money_Config.OnePieceFiveMoney * StaffsSinger.Instance.staffDatas.Count;
        public float FiveMoney_Percent = 1;
        public float GiftMoney => ConfigUtils.Money_Config.OnePieceGiftMoney * StaffsSinger.Instance.staffDatas.Count;
        public float GiftMoney_Percent = 1;
        public float WorkTime = ConfigUtils.Money_Config.WorkTime;
        public float WorkTime_Percent = 1;
    }
    public Benefits benefits=new Benefits();
    public int HappyProgress { get; private set; }
    public Action<int> HappyAction;
    public void UpdateHappyProgress()
    {
        HappyProgress= (int)(100 * 
            (
            ConfigUtils.Money_Config.FiveMoneyInAll * benefits.FiveMoney_Percent +
            ConfigUtils.Money_Config.WorkTimeInAll* (1- benefits.WorkTime_Percent) +
            ConfigUtils.Money_Config.GiftMoneyInAll * benefits.GiftMoney_Percent
            ));
        HappyAction?.Invoke(HappyProgress);
    }
    public async void OnChange(bool state)
    {
        if (state)
        {
            StaffsSinger.Instance.EnableMoney();
            Queue<StaffData>remove = new Queue<StaffData>();
            foreach (var staff in StaffsSinger.Instance.staffDatas)
            {
                if (staff.workingTimer >= staff.HopeWorkingTime * ConfigUtils.StaffState_Config.Tired.TranslatePercent)
                {
                    float rangid = UnityEngine.Random.Range(0, 1.0f);
                    if (rangid <= ConfigUtils.StaffState_Config.Tired.deadPercent)
                    {
                        remove.Enqueue(staff);
                    }
                    else
                    {
                        StaffsSinger.Instance.ChangePlayerState(staff, StaffState.Working);
                    }
                }
                staff.workingTimer = 0;
            }
            int money = 0;
            string name = "";
            while (remove.Count > 0)
            {
                StaffData staff = remove.Dequeue();
                name += staff.Name + ",";
                money += 100;
                StaffsSinger.Instance.RemoveStaff(staff);
            }
            if (money != 0)
            {
                name.TrimEnd(',');
                TitleTips titleTips = GameRoot.uISystem.LoadUI(ConfigUtils.UI_Config.Title, Vector3.zero, PlayerCanvas.MainCanvas.transform)as TitleTips;
                titleTips.title.text = $"{name}��Ϊ�������������,�⳥���{money}";
                titleTips.Open();
                PlayerInformation.currentUserData.Money -= money;
            }
        }
        else
        {
            foreach (var staff in StaffsSinger.Instance.staffDatas)
            {
                PlayerInformation.currentUserData.Money-=staff.Money;
                StaffsSinger.Instance.ChangePlayerState(staff, StaffState.GetOffWork);
            }
            PlayerInformation.currentUserData.Money -= benefits.FiveMoney * benefits.FiveMoney_Percent;
            PlayerInformation.currentUserData.Money -= benefits.WaterMoney *benefits.WaterMoney_Percent;
            PlayerInformation.currentUserData.Money -= benefits.GiftMoney *benefits.GiftMoney_Percent;
            PlayerInformation.currentUserData.Money -= benefits.GiftMoney *benefits.GiftMoney_Percent;
            GetMoneyPercent(
                (str)=>
                {
                    PlayerInformation.currentUserData.Money -= PlayerInformation.currentUserData.currentCompany.LendMoney * str / 100;
                    PlayerInformation.currentUserData.SaveCompany();
                }
                );
            UIFormBase ui = GameRoot.uISystem.LoadUI(ConfigUtils.UI_Config.Loading, Vector3.zero, PlayerCanvas.MainCanvas.transform);
            ui.Open();
            ui.Close();
            ui.Destory();
        }
    }
    public void GetMoneyPercent(Action<float> action)
    {
        ValueToken valueToken = new ValueToken((pkg)=>GetMoneyBack(pkg, action));
        GameRoot.redisSystem.GetValueAsync( ConfigUtils.ServerKeys_Config.money, valueToken);
    }
    private void GetMoneyBack(Pkg pkg, Action<float> action)
    {
        try
        {
            string jsonValue = pkg.Body.serverMessage.JsonValue;
            if (string.IsNullOrEmpty(jsonValue) || jsonValue == "null")
            {
                Debug.LogWarning("[MoneySinger] 服务器返回空利率，使用默认值 0.05");
                action?.Invoke(0.05f);
                return;
            }

            float value = (float)Convert.ToDouble(jsonValue);
            action?.Invoke(value);
        }
        catch (Exception ex)
        {
            Debug.LogError($"[MoneySinger] GetMoneyBack 解析失败: {ex.Message}, 使用默认利率 0.05");
            action?.Invoke(0.05f);
        }
    }
    [SerializeField]
    private bool workTime=true;
    public override void Awake()
    {
        Instance = this;
    }
    public override void Start()
    {
        (PlayerCanvas.MainCanvas as MainMenuUI).SignCallBack += ReadInRedis;
    }
    public void ReadInRedis()
    {
        ValueToken valueToken = new ValueToken(ReadInRedisBack);
        GameRoot.redisSystem.GetValueAsync(PlayerInformation.currentUserData.UserID,ConfigUtils.ServerKeys_Config.Benefits, valueToken);
    }
    private void ReadInRedisBack(Pkg pkg)
    {
        string json =pkg.Body.serverMessage.JsonValue;
        if (!string.IsNullOrEmpty(json))
        {
            benefits = JsonConvert.DeserializeObject<Benefits>(json);
        }
    }

    AudioSystem.AudioPlayer MoneyaudioPlayer;
    private void TimeBack(Pkg pkg)
    {
        if (DateTime.TryParse(pkg.Body.serverMessage.JsonValue, out DateTime dateTime))
        {
            TimeSpan timeSpan = DateTime.UtcNow - dateTime;
            //����
            int minues = (int)timeSpan.TotalMinutes;
            int mins = minues % 24;
            timeSinger.NowTimer = mins * 60;
            foreach (var person in StaffsSinger.Instance.staffDatas)
            {
                if (person.HopeWorkingTime > 0)
                {
                    person.NormalWorkingTimer += (minues / Mathf.Max(0, person.HopeWorkingTime)) * 60 * person.HopeWorkingTime * GameManager.Instance.RunSpeed;
                }
            }
            StaffsSinger.Instance.EnableMoney();
        }
        isAllow = true;
        StaffsSinger.Instance.loadCallBack += () =>
        {
            foreach (var staff in StaffsSinger.Instance.staffDatas)
            {
                StaffsSinger.Instance.ChangePlayerState(staff, StaffState.GetOffWork);
            }
        };
    }
    public void Init()
    {
        timeSinger = TimeSinger.Instance;
        ValueToken valueToken = new ValueToken(TimeBack);
        GameRoot.redisSystem.GetValueAsync(PlayerInformation.currentUserData.UserID, ConfigUtils.ServerKeys_Config.time, valueToken);
        
    }
    public void Uninit()
    {
        isAllow = false;
        if (MoneyaudioPlayer != null)
            MoneyaudioPlayer.Destory();
    }
    public override void Destory()
    {
        base.Destory();
        Uninit();
    }
    TimeSinger timeSinger;
    public float LastTime = 0;
    bool allowUpdateState = false;
    public Dictionary< StaffData,Action> TimeCallBack=new Dictionary<StaffData, Action>();
    public void GiveMoney(StaffData staffData)
    {
        StaffsSinger.Instance.ChangePlayerState(staffData, StaffState.HappyWorking);
        PlayerInformation.currentUserData.Money -= 10;
    }
    private void PlayClip()
    {
        if (MoneyaudioPlayer == null)
            MoneyaudioPlayer = GameRoot.audioSystem.GeneratedAudioPlayer(ConfigUtils.AudioClip_Config.Money);
        MoneyaudioPlayer.Play();
    }
    public void Settlement()
    {
        float mulit =1.0f/ 24 / 60;
        GameRoot.uISystem.InvokeAnimation(UIAnimationType.Money);
        PlayClip();
        foreach (var player in StaffsSinger.Instance.staffDatas)
        {
            Debug.Log("Before"+PlayerInformation.currentUserData.Money);
            PlayerInformation.currentUserData.Money += player.HappyWorkingTimer * ConfigUtils.StaffState_Config.HappyWork.SaveMoneySpeed*player.SaveMoney* mulit;
            PlayerInformation.currentUserData.Money += player.TiredWorkTimer * ConfigUtils.StaffState_Config.Tired.SaveMoneySpeed * player.SaveMoney * mulit;
            PlayerInformation.currentUserData.Money += player.LittleTiredWorkTimer * ConfigUtils.StaffState_Config.LittleTired.SaveMoneySpeed * player.SaveMoney * mulit;
            PlayerInformation.currentUserData.Money += player.NormalWorkingTimer * player.SaveMoney * mulit;
            Debug.Log(player.NormalWorkingTimer);
            Debug.Log(PlayerInformation.currentUserData.Money);
            player.HappyWorkingTimer = 0;
            player.TiredWorkTimer = 0;
            player.LittleTiredWorkTimer = 0;
            player.NormalWorkingTimer = 0;
        }
        Save();
        StaffsSinger.Instance.DisableMoney();
    }
    int lastid= -1;
    private  void Save()
    {
        string json = JsonConvert.SerializeObject(PlayerInformation.currentUserData.currentCompany);
        GameRoot.redisSystem.SetValueAsync(ConfigUtils.ServerKeys_Config.company, PlayerInformation.currentUserData.UserID, json);
        TimeSpan timeSpan = TimeSpan.FromMinutes(24);
        DateTime dateTime = DateTime.Now + timeSpan;
        if (lastid != -1)
        {
            GameRoot.pushNorifySystem.Cancel(lastid);
        }
        lastid = GameRoot.pushNorifySystem.Send("��Ϸ��˾", "���Ա����þ޶������ˣ��������ղ���", dateTime);
        GameRoot.redisSystem.SetValueAsync(PlayerInformation.currentUserData.UserID, ConfigUtils.ServerKeys_Config.time, DateTime.UtcNow.ToString());
    }
    public override void Update()
    {
        if(isAllow)
        {
            if (timeSinger.NowTime>=8&& timeSinger.NowTime<=(8+benefits.WorkTime *benefits.WorkTime_Percent))
                isWorkTime = true;
            else
                isWorkTime = false;
            if(timeSinger.NowTime-LastTime>=0.5f)
            {
                LastTime = timeSinger.NowTime;
                allowUpdateState = true;
            }
            float speed = Time.deltaTime * GameManager.Instance.RunSpeed;
            foreach (var staff in StaffsSinger.Instance.staffDatas)
            {
                if(
                    staff.staffState==StaffState.Working||
                    staff.staffState == StaffState.HappyWorking ||
                    staff.staffState == StaffState.TiredWork ||
                    staff.staffState == StaffState.LittleTiredWork
                    )
                {
                    staff.workingTimer += speed / 60;
                    if(TimeCallBack.ContainsKey(staff))
                    {
                        TimeCallBack[staff]?.Invoke();
                    }
                }
                switch (staff.staffState)
                {
                    case StaffState.Working:
                        staff.NormalWorkingTimer += speed;
                        break;
                    case StaffState.HappyWorking:
                        staff.HappyWorkingTimer += speed;
                        break;
                    case StaffState.TiredWork:
                        staff.TiredWorkTimer += speed;
                        break;
                    case StaffState.LittleTiredWork:
                        staff.LittleTiredWorkTimer += speed;
                        break;
                }
                if(allowUpdateState)
                {
                    if (staff.workingTimer >= staff.HopeWorkingTime * ConfigUtils.StaffState_Config.Tired.TranslatePercent
                        &&staff.staffState!=StaffState.WasteTime
                        &&staff.staffState!=StaffState.Holiday
                        &&staff.staffState!=StaffState.GetOffWork
                        &&staff.staffState!=StaffState.HappyWorking
                        )
                    {
                        float range = UnityEngine.Random.Range(0, 1.0f);
                        if (range <=ConfigUtils.StaffState_Config.Tired.fishPercent)
                        {
                            StaffsSinger.Instance.ChangePlayerState(staff, StaffState.WasteTime);
                        }
                        else
                        {
                            StaffsSinger.Instance.ChangePlayerState(staff, StaffState.TiredWork);
                        }
                    }
                    else if (staff.workingTimer >= staff.HopeWorkingTime * ConfigUtils.StaffState_Config.LittleTired.TranslatePercent
                        && staff.staffState != StaffState.WasteTime
                        &&staff.staffState!=StaffState.Holiday
                        &&staff.staffState!=StaffState.GetOffWork
                        &&staff.staffState!=StaffState.HappyWorking
                        )
                    {
                        float range = UnityEngine.Random.Range(0, 1.0f);
                        if (range <= ConfigUtils.StaffState_Config.LittleTired.fishPercent)
                        {
                            StaffsSinger.Instance.ChangePlayerState(staff, StaffState.WasteTime);
                        }
                        else
                        {
                            StaffsSinger.Instance.ChangePlayerState(staff, StaffState.LittleTiredWork);
                        }
                    }
                }
            }
            allowUpdateState = false;
        }
    }
}
