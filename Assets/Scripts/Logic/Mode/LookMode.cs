using Newtonsoft.Json;
using System.Collections.Generic;
using UnityEngine;
using static AudioSystem;

public class LookMode : ModeBase
{
    public LookMode() : base(ModeType.Look)
    {

    }
    AudioSystem.AudioPlayer audioPlayer;
    public override  void OnEnter()
    {
        audioPlayer = GameRoot.audioSystem.GeneratedAudioPlayer(ConfigUtils.AudioClip_Config.EasterEggNormalBGM, null, true);
        audioPlayer.Stop();
        ValueToken valueToken = new ValueToken(OnGet_CEO_Block);
         GameRoot.redisSystem.GetValueAsync(PlayerInformation.lookTemp.CEO_ID, ConfigUtils.ServerKeys_Config.block, valueToken);
       
       
    }
    private async void OnGet_CEO_Block(Pkg pkg)
    {
        string json = pkg.Body.serverMessage.JsonValue;
        (PlayerCanvas.MainCanvas as GameMainMenuUI).ActiveLookMode();
        PersonSinger.Instance.Init();
        await BuildSinger.Instance.GetWorld(json);
        ValueToken valueToken = new ValueToken(OnGet_CEO_Person);
         GameRoot.redisSystem.GetValueAsync(PlayerInformation.lookTemp.CEO_ID, ConfigUtils.ServerKeys_Config.persons, valueToken);
    }
    private async void OnGet_CEO_Person(Pkg pkg)
    {
        string personJson = pkg.Body.serverMessage.JsonValue;
        if (!string.IsNullOrEmpty(personJson))
        {
            List<StaffData> staffDatas = JsonConvert.DeserializeObject<List<StaffData>>(personJson);
            StaffsSinger.Instance.staffDatas = staffDatas;
            await StaffsSinger.Instance.LoadStaff(staffDatas);
        }
    }

    public override void OnExit()
    {
        audioPlayer.Stop();
        audioPlayer.Destory();
        BuildSinger.Instance.UnInit();
        PersonSinger.Instance.Unint();
        (PlayerCanvas.MainCanvas as GameMainMenuUI).DeActiveLookMode();
        StaffsSinger.Instance.UnInit();
    }
    public override void Tick()
    {
    }
}
