using Sirenix.OdinInspector;
using System;
using System.Collections.Generic;
using UnityEngine;
using static AIDialog;
public class CharacterAIHandler
{
    public static string AIRULE_ToTalk = @$"
        你现在扮演的是一个正在上班偷偷和同事聊天的角色，现在需要你主动找话题摸鱼(不可以是工作上的话题)给同事聊天
        ";
/*    public static string AIRULE_BeTalk = @$"
        你现在扮演的是一个正在上班同事偷偷找你聊天摸鱼(不可以是工作上的话题)的角色，下面是聊天内容
        ";*/
    [ShowInInspector]
    public List<message> Messages=new List<message>();
    public void AICallBack(DeepSeekCallBack deepSeekCallBack, string name)
    {
        string content = Messages[Messages.Count - 1].content;
        Messages[Messages.Count - 1] = new message()
        {
            role = User,
            content = content,
        };
        Messages[Messages.Count - 2] = new message()
        {
            role = AI,
            content = Messages[Messages.Count - 2].content,
        };
        if (talk != TalkState.Talker)
        {
            BeTalkAction?.Invoke(content);
        }
        else
        {
            TalkerAction?.Invoke(content);
        }
    }
    public enum TalkState
    {
        Talker,
        BeTalk
    }
    public TalkState talk;
    public Action<string> TalkerAction;
    public Action<string> BeTalkAction;
    public void AddText(string name)
    {
        if (Messages.Count==0)
        {
            FirstTalk(name);
        }
        else
        {
            Talk(name);
        }
    }
    private void FirstTalk(string name)
    {
        message message = new message();
        message.role = User;
        message.content = AIRULE_ToTalk;
        talk = TalkState.Talker;
        Messages.Add(message);
        SendAIRequset(AICallBack, Messages, name);
    }
    public void Talk(string name)
    {
        talk =talk== TalkState.Talker?TalkState.BeTalk:TalkState.Talker;
        SendAIRequset(AICallBack, Messages, name);
    }
}
