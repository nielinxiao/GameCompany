using UnityEngine;
using UnityEngine.EventSystems;

public class LoadingTips : UIFormBase
{
    protected override void OnOpen()
    {
        base.OnOpen();
        GameObject.FindAnyObjectByType<EventSystem>().enabled = false;
    }
    protected override void OnClose()
    {
        base.OnClose();
        GameObject.FindAnyObjectByType<EventSystem>().enabled = true;
    }
}
