using DG.Tweening;
using Sirenix.OdinInspector;
using System;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.Animations.Rigging;
using UnityEngine.UI;

public class CharacterAI : MonoBehaviour
{
    Dictionary<string,GameObject>playerDic=new Dictionary<string, GameObject>();
    public Animator animator;
    [BoxGroup("Staff")]
    public StaffsSinger Singer;
    [BoxGroup("Staff")]
    public StaffData staffData;
    public NavMeshAgent agent;
    public RigBuilder rigBuilder;
    Vector3 Char;
    Transform Player;
    public float WalkEndRadius = 0.1f;
    [BoxGroup("Talk Together"),ShowInInspector,ReadOnly]
    public static float TalkLimitTime=5;
    [BoxGroup("Talk Together")]
    public TalkPerson talkPerson;
    [BoxGroup("Talk Together"),ShowInInspector]
    public CharacterAIHandler handler;
    [BoxGroup("Talk Together")]
    public float characterIntervalTime;
    [BoxGroup("Talk Together")]
    public float talkInterval;
    public Transform sitDown;
    [SerializeField]
    public enum PlayerState
    {
        Work,
        Talk,
        WalkToTalk,
        WalkToWork,
    }
    [SerializeField]
    public enum TalkPerson
    {
        None,
        BeTalk,
        ToTalk
    }
    Build_PersonInterface build_PersonInterface;
    public void SitDown(Build_PersonInterface build_PersonInterface,Transform transform)
    {
        sitDown=transform;
        this.build_PersonInterface = build_PersonInterface;
    }
    public void OnDestroy()
    {
        build_PersonInterface.SitUp(sitDown);
    }
    public void ResetPos()
    {
        transform.localPosition =Vector3.zero;
        transform.localRotation = Quaternion.identity;
    }
    [ReadOnly]
    public PlayerState playerState;
    public void RegistDic(ref Dictionary<string,GameObject>playerDic,StaffData staffData,Transform Char)
    {
        Singer=StaffsSinger.Instance;
        this.playerDic = playerDic;
        this.staffData = staffData;
        this.Char = Char.position;
    }
    public void OnChangeState(StaffState staffState)
    {
        switch (staffState) 
        {
            case StaffState.WasteTime:
                if(playerState != PlayerState.Talk
                    && playerState != PlayerState.WalkToTalk
                    && Player==null
                    )
                {
                    ChangeWalkToTalk();
                }
                break;
            default:
                if (  playerState != PlayerState.Work
                    && playerState != PlayerState.WalkToWork)
                    ChangeWalkToWork();
                break;
        }
    }
    private GameObject DialogRoot;
    private TextMeshProUGUI text;
    private TextMeshProUGUI content;
    public void RegistDialogImage(GameObject DialogGameObject)
    {
        DialogRoot = DialogGameObject;
        DialogRoot.SetActive(false);
        content = DialogGameObject.transform.Find("Content").GetComponent<TextMeshProUGUI>();
        text = DialogGameObject.transform.Find("Content/Message").GetComponent<TextMeshProUGUI>();
    }
    private void SetText(string msg)
    {
        text.text = msg;
        content.text = msg;
    }
    private void TImeTalk()
    {
        text.maxVisibleCharacters = 0;
        if (timeToken != null)
            GameRoot.timeSystem.RemoveTimeToken(timeToken);
        timeToken = GameRoot.timeSystem.AddTimer(
            text.text.Length,
            characterIntervalTime,
            (i) => text.maxVisibleCharacters = i,
            () =>
            {
                timeToken = null;
                talkPersonToken=GameRoot.timeSystem.AddTimer
                (
                   1,
                   talkInterval,
                   null,
                   () =>
                   { 
                       handler.AddText(staffData.Name);
                       talkPersonToken = null;
                   }
                );
            }
        );
    }
    TimeToken timeToken;
    TimeToken talkPersonToken;
    private void AITalkCallBack(string msg)
    {
        if(DialogRoot == null) 
            return;
        SetText(msg);
        TImeTalk();
    }
    private float GetDestine(Vector3 vec1,Vector3 vec2)
    {
        return Vector2.Distance(new Vector2(vec1.x, vec1.z), new Vector2(vec2.x, vec2.z));
    }
    private void Update()
    {
        switch (playerState) 
        {
            case PlayerState.WalkToWork:
                if (GetDestine(transform.position,Char)<= WalkEndRadius)
                {
                    playerState = PlayerState.Work;
                    ChangeToWorlk();
                }
                break;
            case PlayerState.WalkToTalk:
                if(Player!=null)
                {
                    if (GetDestine(transform.position, Player.position) <= WalkEndRadius)
                    {
                        playerState = PlayerState.Talk;
                        ChangeToTalk();
                    }
                }
                else
                {
                    ChangeWalkToTalk();
                }
                break;
        }
    }
    private void ChangeToTalk()
    {
        agent.isStopped = true;
        ActiveTalk();
        if (Player != null)
        {
            transform.forward=Player.position-transform.position;
            if(talkPerson != TalkPerson.BeTalk)
            {
                CharacterAI characterAI = Player.GetComponent<CharacterAI>();
                characterAI.Player = transform;
                GeneraterHandler(this, characterAI);
                characterAI.ChangeState(StaffState.WasteTime);
                characterAI.ActiveTalk();
            }
        }
    }
    public void ActiveTalk()
    {
        playerState = PlayerState.Talk;
        animator.Play("Talk");
        rigBuilder.enabled = false;
        DialogRoot.SetActive(true);
        transform.forward = Player.position - transform.position;
    }
    public void GeneraterHandler(CharacterAI talker, CharacterAI betalker)
    {
        CharacterAIHandler characterAIHandler = new CharacterAIHandler();
        talker.handler = characterAIHandler;
        betalker.handler = characterAIHandler;
        talker.talkPerson = TalkPerson.ToTalk;
        betalker.talkPerson = TalkPerson.BeTalk;
        characterAIHandler.TalkerAction = talker.AITalkCallBack;
        characterAIHandler.BeTalkAction = betalker.AITalkCallBack;
        characterAIHandler.AddText(talker.staffData.Name);
    }
    private void ChangeToWorlk()
    {
        DialogRoot.SetActive(false);
        SetText(string.Empty);
        if (talkPersonToken != null)
            GameRoot.timeSystem.RemoveTimeToken(talkPersonToken);
        if (timeToken != null)
            GameRoot.timeSystem.RemoveTimeToken(timeToken);
        agent.isStopped = true;
        playerState = PlayerState.Work;
        animator.Play("Work");
        rigBuilder.enabled = true;
        Player = null;
        ResetPos();
    }
    private void ChangeWalkToWork()
    {
        talkPerson=TalkPerson.None;
        playerState = PlayerState.WalkToWork;

        agent.SetDestination(Char);
        agent.isStopped = false;
        animator.Play("Walk");
        rigBuilder.enabled = false;
    }
    void WalkToTalk(Transform trans)
    {
        Player = trans;
        agent.SetDestination(Player.position);
        agent.isStopped = false;
        playerState = PlayerState.WalkToTalk;
        animator.Play("Walk");
        rigBuilder.enabled = false;
    }
    private void ChangeWalkToTalk()
    {
        if(playerDic.Count <=1)
            return;
        int count = playerDic.Count;
        int index=UnityEngine.Random.Range(0, count);
        Player = playerDic.Values.ToList()[index].transform;
        while(Player == transform||Player.GetComponent<CharacterAI>().Player!=null)
        {
            index = UnityEngine.Random.Range(0, count);
            Player = playerDic.Values.ToList()[index].transform;
        }
        WalkToTalk(Player);
    }
    [Button]
    public void ChangeState(StaffState staffState)
    {
        Singer.ChangePlayerState(staffData, staffState);
    }
}
