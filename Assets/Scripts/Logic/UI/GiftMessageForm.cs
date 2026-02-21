using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class GiftMessageForm : UIFormBase
{
    public TextMeshProUGUI Title;
    public TextMeshProUGUI Message;
    public Transform GiftRoot;
    GameObject box;
    ABFrameWorlk.Resoure resoure;
    ABFrameWorlk.Resoure resoureScrip;
    MessageBox messageBox;
    private void OnDestroy()
    {
        if(resoure != null)
        GameRoot.resourcesSystem.UnLoad(resoure);
        if(resoureScrip != null)
        GameRoot.resourcesSystem.UnLoad(resoureScrip);
    }
    protected override void OnOpen()
    {
        base.OnOpen();
    }
    protected override void OnClose()
    {
        base.OnClose();
    }
    public void Init()
    {
        resoure = GameRoot.resourcesSystem.NameToLoad(ConfigUtils.Email_Config.MessageBox);
        resoureScrip = GameRoot.resourcesSystem.NameToLoad(ConfigUtils.Email_Config.MessageBoxScriptObejct);
        messageBox = resoureScrip.GetResult() as MessageBox;
        box = resoure.GetResult() as GameObject;
    }
    EmalMessageElement emalMessageElement;
    public void OpenByMessage(EmalMessageElement emalMessageElement)
    {
        this.emalMessageElement = emalMessageElement;
        Title.text = emalMessageElement.Title;
        Message.text=emalMessageElement.Descirption;
        for(int index =GiftRoot.childCount-1; index >= 0; index--)
        {
            GameObject.Destroy(GiftRoot.GetChild(index).gameObject);
        }
        for (int i = 0; i < emalMessageElement.ObjectID.Count; i++) 
        {
            GameObject boxPrefab= Instantiate(box, GiftRoot);
            boxPrefab.transform.Find("Image").GetComponent<Image>().sprite = messageBox.boxElements[emalMessageElement.ObjectID[i]].sprite;
            boxPrefab.transform.Find("Much").GetComponent<TextMeshProUGUI>().text ="x"+emalMessageElement.Number[i].ToString();
        }
        if (emalMessageElement.isRead)
        {
            OnRead();
        }
        else
        {
            OnNoRead();
        }
    }
    public void OnSubmit()
    {
        for (int i = 0; i < emalMessageElement.ObjectID.Count; i++)
        {
            TranslateObject((MessageID)emalMessageElement.ObjectID[i], emalMessageElement.Number[i]);
        }
        OnRead();
        PlayerInformation.currentUserData.ToJsonEmal();
    }
    public GameObject NoReadButton;
    public GameObject AlReadButton;
    public void OnRead()
    {
        NoReadButton.SetActive(false);
        AlReadButton.SetActive(true);
        emalMessageElement.isRead = true;
    }
    public void OnNoRead()
    {
        NoReadButton.SetActive(true);
        AlReadButton.SetActive(false);
    }
    public void TranslateObject(MessageID messageID,int number)
    {
        switch (messageID)
        {
            case MessageID.Money:
                PlayerInformation.currentUserData.Money += number;
                break;
        }
    }
}
