using UnityEngine;
using System.Collections.Generic;
using System;
public class AudioSystem : SystemBase,ISystemLife
{
    public class AudioPlayerSource
    {
        public AudioPlayerSource(AudioSource audioSource) 
        {
            Source = audioSource;
        }
        public readonly AudioSource Source;
        public bool isFree=false;
        public void SetFree()
        {
            isFree = true;
        }
        public void SetBusy()
        {
            isFree=false;
        }
    }
    public interface AudioLife
    {
         void Update();
    }
    public class AudioPlayer: AudioLife
    {
        public AudioPlayer( AudioPlayerSource audioSource, AudioClip audioClip, Action<AudioPlayer> PlayComplited =null,bool loop=false)
        {
            this.audioSource = audioSource;
            this.audioClip = audioClip;
            audioSource.Source.loop = loop;
            audioSource.Source.clip = audioClip;
            this.PlayComplited = PlayComplited;
        }
        private Action<AudioPlayer> PlayComplited;
        public AudioPlayerSource audioSource { get;private set; }
        private AudioClip audioClip;
        private bool isPlay=false;
        public void Play()
        {
            audioSource.Source.Play();
            isPlay = true;
        }
        public void Stop()
        {
            audioSource.Source.Stop();
            isPlay = false;
        }
        public void Destory()
        {
            GameRoot.audioSystem.DestroyAudioPlayer(this);
        }

        public void Update()
        {
            if(isPlay&&!audioSource.Source.isPlaying&&!audioSource.Source.loop)
            {
                isPlay = false;
                PlayComplited?.Invoke(this);
            }
        }
    }
    public AudioSystem() : base(nameof(AudioSystem))
    {
    }
    public override void Awake()
    {
        GameRoot.resourcesSystem.OnComplited += SetUpAudioSystem;
    }
    public AudioSource Player_Source;
    public Transform AudioTranformRoot;
    public async void SetUpAudioSystem()
    {
        if(GameRoot.resourcesSystem.GetNameToPath(ConfigUtils.AudioSystem_Config.AudioManagerPrefab,out string pathName))
        {

            ABFrameWorlk.Resoure resoure= await GameRoot.resourcesSystem.LoadAsync(pathName);
            AudioTranformRoot = GameRoot.Instantiate((GameObject)resoure.GetResult(), null).transform;
            GameRoot.DontDestroyOnLoad(AudioTranformRoot);
            Player_Source = AudioTranformRoot.Find(ConfigUtils.AudioClip_Config.Player_Source).GetComponent<AudioSource>();
        }
        else
        {
            DebugUtils.Log("Error to Find url:" + ConfigUtils.AudioSystem_Config.AudioManagerPrefab);
        }
    }
    public Queue<AudioSource>FreeAudioSource=new Queue<AudioSource>();
    public List<AudioPlayer>BusyAudioSource= new List<AudioPlayer>();
    public AudioPlayer GetSourcePool( AudioClip clip, Action<AudioPlayer> PlayComplited =null, bool loop=false)
    {
        if(FreeAudioSource.TryDequeue(out AudioSource source))
        {
            AudioPlayerSource audioPlayerSource=new AudioPlayerSource(source);
            AudioPlayer audioPlayer= new AudioPlayer( audioPlayerSource, clip, PlayComplited, loop);
            BusyAudioSource.Add(audioPlayer);
            return audioPlayer;
        }
        else
        {
            AudioSource audioSource= GameRoot.Instantiate(Player_Source, AudioTranformRoot);
            audioSource.name = Player_Source.name;
            AudioPlayerSource audioPlayerSource = new AudioPlayerSource(audioSource);
            AudioPlayer audioPlayer = new AudioPlayer( audioPlayerSource, clip, PlayComplited, loop);
            BusyAudioSource.Add(audioPlayer);
            return audioPlayer;
        }
    }
    public AudioPlayer GeneratedAudioPlayer(string AudioClipName, Action<AudioPlayer> PlayComplited = null, bool loop = false)
    {
        AudioClip clip = (AudioClip)(GameRoot.resourcesSystem.NameToLoad(AudioClipName).GetResult());
        return GetSourcePool(clip, PlayComplited, loop);
    }
    Queue<AudioPlayer>PlaneToRemove=new Queue<AudioPlayer>();
    public void DestroyAudioPlayer(AudioPlayer audioPlayer)
    {
        FreeAudioSource.Enqueue(audioPlayer.audioSource.Source);
        PlaneToRemove.Enqueue(audioPlayer);
    }
    public override void Update()
    {
        foreach (var clip in BusyAudioSource)
        {
            ((AudioLife)clip).Update();
        }
    }
    public override void Destory()
    {
        base.Destory();
        FreeAudioSource.Clear();
        BusyAudioSource.Clear();
    }
    public override void LateUpdate()
    {
        base.LateUpdate();
        while(PlaneToRemove.TryDequeue(out AudioPlayer audioPlayer))
        {
            BusyAudioSource.Remove(audioPlayer);
        }
    }
}