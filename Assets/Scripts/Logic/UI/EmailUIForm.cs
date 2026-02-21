using Newtonsoft.Json;
using System.Linq;
using TMPro;
using UnityEngine;

public class EmailUIForm:UIFormBase
{
    public Transform EmailRoot;
    GameObject giftPrefab;
    GameObject emailPrefab;
    ABFrameWorlk.Resoure giftRes;
    ABFrameWorlk.Resoure emailRes;
    public bool isInit = false;
    protected override void OnOpen()
    {
        base.OnOpen();
    }
    public void Init()
    {
        if(isInit)
            return;
        isInit = true;
        giftRes = GameRoot.resourcesSystem.NameToLoad(ConfigUtils.Email_Config.GiftPrefab);
        emailRes = GameRoot.resourcesSystem.NameToLoad(ConfigUtils.Email_Config.EmailPrefab);

        giftPrefab = giftRes.GetResult() as GameObject;
        emailPrefab = emailRes.GetResult() as GameObject;

        giftPrefab_form_instance = GameRoot.uISystem.LoadUI(ConfigUtils.Email_Config.GiftPrefab_Form, Vector3.zero, transform)as GiftMessageForm;
        emailPrefab_form_instance = GameRoot.uISystem.LoadUI(ConfigUtils.Email_Config.EmailPrefab_Form, Vector3.zero, transform)as MessMessageForm;
        giftPrefab_form_instance.gameObject.SetActive(false);
        emailPrefab_form_instance.gameObject.SetActive(false);
        giftPrefab_form_instance.Init();
        PlayerInformation.currentUserData.FromJsonEmal(
        () =>
        {
            foreach (var email in PlayerInformation.currentUserData.emalMessageElements)
                SpwanMessage(email);
        });
    }
    public void OnDestroy()
    {
        GameRoot.resourcesSystem.UnLoad(giftRes);
        GameRoot.resourcesSystem.UnLoad(emailRes);
        giftPrefab = null;
        emailPrefab = null;
        GameObject.Destroy(giftPrefab_form_instance);
        GameObject.Destroy(emailPrefab_form_instance);
        isInit = false;
    }
    GiftMessageForm giftPrefab_form_instance;
    MessMessageForm emailPrefab_form_instance;
    public void AccpetServer(Pkg pkg)
    {
        if (!gameObject.activeSelf)
            RedPointManager.Instance.ShowRedPoint(RedPointEnum.Email);
        EmalMessageElement emalMessageElement = new EmalMessageElement();
        emalMessageElement.Title=pkg.Body.serverMessage.Email.Title;
        emalMessageElement.Descirption=pkg.Body.serverMessage.Email.Description;
        emalMessageElement.creatTime= pkg.Body.serverMessage.Email.Datetime;
        if(pkg.Body.serverMessage.Email.objectIDs==null)
        {
            emalMessageElement.messageState=MessageState.Message;
        }
        else
        {
            emalMessageElement.messageState = MessageState.Object;
            emalMessageElement.ObjectID = pkg.Body.serverMessage.Email.objectIDs.ToList();
            emalMessageElement.Number = pkg.Body.serverMessage.Email.Numbers.ToList();
        }
        PlayerInformation.currentUserData.emalMessageElements.Add(emalMessageElement);
        PlayerInformation.currentUserData.ToJsonEmal();
        SpwanMessage(emalMessageElement);
    }
    public void SpwanMessage(EmalMessageElement emalMessageElement)
    {
        switch (emalMessageElement.messageState) 
        {
            case MessageState.Message:
                MessageSpawn(emailPrefab,emalMessageElement);
                break;
            case MessageState.Object:
                MessageSpawn(giftPrefab,emalMessageElement);
                break;
        }
    }
    private void MessageSpawn(GameObject gameObject,EmalMessageElement emalMessageElement)
    {
        GameObject obj = Instantiate(gameObject, EmailRoot);
        obj.transform.Find("Title").GetComponent<TextMeshProUGUI>().text=emalMessageElement.Title;
        obj.transform.Find("Time").GetComponent<TextMeshProUGUI>().text=emalMessageElement.creatTime;
        if (emalMessageElement.messageState == MessageState.Object)
        {
                if (emalMessageElement.isRead)
                obj.GetComponent<UISpriteButton>().ChangeToOpen();
                obj.GetComponent<UISpriteButton>().clickEvent.AddListener(
                () =>
                {
              if (!giftPrefab_form_instance.gameObject.activeSelf)
              {
                  giftPrefab_form_instance.Open();
                  giftPrefab_form_instance.OpenByMessage(emalMessageElement);
              }
              else
                  giftPrefab_form_instance.Close();
                }
                );
        }
        else
        {
            if (emalMessageElement.isRead)
                obj.GetComponent<UISpriteButton>().ChangeToOpen();
            obj.GetComponent<UISpriteButton>().clickEvent.AddListener(
            () =>
            {
                if (!emailPrefab_form_instance.gameObject.activeSelf)
                {
                    emailPrefab_form_instance.Open();
                    emailPrefab_form_instance.OpenByMessage(emalMessageElement);
                }
                else
                    emailPrefab_form_instance.Close();
            }
            );
        }
        
    }
}
