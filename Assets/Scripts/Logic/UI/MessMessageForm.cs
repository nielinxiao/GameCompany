using System.Net.Mail;
using TMPro;
using UnityEngine;

public class MessMessageForm : UIFormBase
{
    public TextMeshProUGUI Title;
    public TextMeshProUGUI Message;
    public void OpenByMessage(EmalMessageElement emalMessageElement)
    {
        emalMessage = emalMessageElement;
        Title.text = emalMessageElement.Title;
        Message.text = emalMessageElement.Descirption;
        if (emalMessageElement.isRead)
            OnRead();
    }
    EmalMessageElement emalMessage;
    public void OnRead()
    {
        emalMessage.isRead = true;
        PlayerInformation.currentUserData.ToJsonEmal();
    }
}
