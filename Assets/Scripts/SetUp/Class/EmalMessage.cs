using System;
using System.Collections.Generic;
using UnityEngine;
[System.Serializable]
public class EmalMessageElement
{
    public string Title;
    public string Descirption;
    public MessageState messageState;
    public string creatTime;
    public List<int> ObjectID=new List<int>();
    public List<int> Number = new List<int>();
    public bool isRead = false;
}
[System.Serializable]
public enum MessageState
{
    Message,
    Object
}