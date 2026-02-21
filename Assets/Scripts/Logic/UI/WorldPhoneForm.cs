using DG.Tweening;
using Sirenix.OdinInspector;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections;

public class WorldPhoneForm : UIFormBase
{
    public TMP_InputField inputField;
    public Transform DialogRoot;

    public void Init()
    {
        messagePlayer = GameRoot.audioSystem.GeneratedAudioPlayer(ConfigUtils.AudioClip_Config.PhoneMessage);
        if (pool == null)
        {
            pool = new GameObejectPool(10, ConfigUtils.UI_Config.ChatLog, DialogRoot, Reseter);
            GameObject gameObject = pool.GetValue();
            ShaderFindUtils.FindFontShader(gameObject.GetComponent<TextMeshProUGUI>());
            pool.PutValue(gameObject);
        }

        // 订阅聊天Socket的实时消息推送
        if (GameRoot.chatSocketSystem != null)
        {
            GameRoot.chatSocketSystem.OnMessageReceived += OnChatMessageReceived;
            Debug.Log("[WorldPhoneForm] 已订阅聊天Socket实时推送");
        }
        else
        {
            Debug.LogError("[WorldPhoneForm] ChatSocketSystem未初始化");
        }
    }
    public GameObject EmojoGameObject;
    public void EmojoButton(int Index)
    {
        inputField.text += $"<sprite={Index}>";
    }
    public void OnClickEmojo()
    {
        if (EmojoGameObject.activeSelf)
        {
            EmojoGameObject.transform.localScale = Vector3.one;
            EmojoGameObject.transform.DOScale(Vector3.zero, 0.3f).onComplete=()=>EmojoGameObject.gameObject.SetActive(false);
        }
        else
        {
            EmojoGameObject.gameObject.SetActive(true);
            EmojoGameObject.transform.localScale = Vector3.zero;
            EmojoGameObject.transform.DOScale(Vector3.one, 0.3f);
        }
    }
    private GameObject Reseter(GameObject gameObject)
    {
        gameObject.SetActive(false);
        gameObject.transform.localScale = Vector3.one;
        return gameObject;
    }
    GameObejectPool pool;
    AudioSystem.AudioPlayer messagePlayer;
    [AssetsOnly]
    public Sprite Player;
    [AssetsOnly]
    public Sprite ClientOrServer;
    public void UnInit()
    {
        messagePlayer.Destory();
        pool.DestoryPool();

        // 取消订阅聊天Socket
        if (GameRoot.chatSocketSystem != null)
        {
            GameRoot.chatSocketSystem.OnMessageReceived -= OnChatMessageReceived;
            Debug.Log("[WorldPhoneForm] 已取消订阅聊天Socket");
        }
    }
    public void ClickSendWorld()
    {
        string message = inputField.text;
        if (string.IsNullOrEmpty(message))
        {
            Debug.LogWarning("[WorldPhoneForm] 消息为空，不发送");
            return;
        }

        TranslateDialog(DialogState.Player, message);
        inputField.text = string.Empty;

        // HTTP模式：使用HTTP发送消息
        var httpClient = GameRoot.httpSystem.GetHttpClient();
        if (httpClient == null)
        {
            Debug.LogError("[WorldPhoneForm] HttpClient未初始化");
            return;
        }

        var requestData = new { message = message };

        GameRoot.Instance.StartCoroutine(httpClient.PostAsync("/api/message/send", requestData,
            responseData =>
            {
                Debug.Log("[WorldPhoneForm] 消息发送成功");
            },
            error =>
            {
                Debug.LogError($"[WorldPhoneForm] 消息发送失败: {error}");
            }
        ));
    }
    enum DialogState
    {
        Player,
        Client,
        Server
    }
    private void TranslateDialog(DialogState dialogState, string str)
    {
        if(!this.gameObject.activeSelf)
        {
            RedPointManager.Instance.ShowRedPoint(RedPointEnum.WorldPhone);
        }
        GameObject gameObject = pool.GetValue();
        gameObject.SetActive(true);
        gameObject.transform.SetAsLastSibling();
        LayoutRebuilder.ForceRebuildLayoutImmediate(gameObject.GetComponent<RectTransform>());
        TextMeshProUGUI[]uGUIs= gameObject.transform.GetComponentsInChildren<TextMeshProUGUI>();
        foreach (var ui in uGUIs)
        {
            ui.text = str;
        }
        Image image= gameObject.transform.GetComponentInChildren<Image>();
        switch (dialogState)
        {
            case DialogState.Player:
                image.sprite = Player;
                image.color = Color.white;
                break;
            case DialogState.Client:
                image.sprite = ClientOrServer;
                image.color = Color.white;
                break;
            case DialogState.Server:
                image.sprite = ClientOrServer;
                image.color = Color.yellow;
                break;
        }
    }

    /// <summary>
    /// 显示结构化的聊天消息（表格形式，GM消息有黄色背景，带Excel样式边框）
    /// </summary>
    private void TranslateStructuredDialog(DialogState dialogState, string playerName, string companyName, string message)
    {
        try
        {
            Debug.Log($"<color=#00ffff>[WorldPhoneForm]</color> ▶ TranslateStructuredDialog 开始 - dialogState: {dialogState}");

            if (pool == null)
            {
                Debug.LogError($"<color=#ff0000>[WorldPhoneForm]</color> pool 为 null");
                return;
            }

            if(!this.gameObject.activeSelf)
            {
                Debug.Log($"<color=yellow>[WorldPhoneForm]</color> 聊天UI未激活，显示红点");
                if (RedPointManager.Instance != null)
                {
                    RedPointManager.Instance.ShowRedPoint(RedPointEnum.WorldPhone);
                }
            }

            GameObject chatItem = pool.GetValue();
            if (chatItem == null)
            {
                Debug.LogError($"<color=#ff0000>[WorldPhoneForm]</color> pool.GetValue() 返回 null");
                return;
            }

            chatItem.SetActive(true);
            chatItem.transform.SetAsLastSibling();

            // 判断是否为GM系统消息
            bool isServerMessage = (dialogState == DialogState.Server);
            Debug.Log($"<color=#00ffff>[WorldPhoneForm]</color> isServerMessage: {isServerMessage}");

        // 拼接字符串
        string displayText;
        if (isServerMessage)
        {
            displayText = $"[ServerInfo]: {message}";
        }
        else
        {
            displayText = $"{playerName} | {companyName} | {message}";
        }

        // 父子物体的TextMeshProUGUI都要填充同样的内容
        TextMeshProUGUI[] allTextComponents = chatItem.GetComponentsInChildren<TextMeshProUGUI>(true);
        Color textColor = isServerMessage ? new Color(0.2f, 0.2f, 0.2f, 1f) : Color.white;
        foreach (var tmp in allTextComponents)
        {
            tmp.text = displayText;
            tmp.color = textColor;
        }

        // 获取背景Image（预制体结构：根对象应该有Image组件）
        Image backgroundImage = chatItem.GetComponentInChildren<Image>();
        if (backgroundImage == null)
        {
            Debug.LogError($"<color=#ff0000>[WorldPhoneForm]</color> 聊天项没有找到Image组件");
            return;
        }

        Debug.Log($"<color=green>[WorldPhoneForm]</color> 找到背景Image: {backgroundImage.gameObject.name}");

        // 设置背景颜色
        if (isServerMessage)
        {
            // GM消息：鲜明的黄色背景
            backgroundImage.color = new Color(1f, 0.92f, 0.016f, 1f); // #FFEB04
            Debug.Log($"<color=yellow>[WorldPhoneForm]</color> ✓ 已设置GM消息黄色背景: {backgroundImage.color}");
        }
        else
        {
            // 普通消息：暗色背景
            backgroundImage.color = new Color(0.15f, 0.15f, 0.15f, 0.8f);
            Debug.Log($"<color=white>[WorldPhoneForm]</color> ✓ 已设置普通消息背景: {backgroundImage.color}");
        }

        // 添加Excel样式的表格边框（使用Outline组件）
        var outline = backgroundImage.GetComponent<UnityEngine.UI.Outline>();
        if (outline == null)
        {
            outline = backgroundImage.gameObject.AddComponent<UnityEngine.UI.Outline>();
        }
        outline.effectColor = new Color(0.5f, 0.5f, 0.5f, 1f); // 灰色实线边框
        outline.effectDistance = new Vector2(1, -1);
        outline.useGraphicAlpha = false;

        // 可选：添加Shadow组件增强边框效果
        var shadow = backgroundImage.GetComponent<UnityEngine.UI.Shadow>();
        if (shadow == null)
        {
            shadow = backgroundImage.gameObject.AddComponent<UnityEngine.UI.Shadow>();
        }
        shadow.effectColor = new Color(0, 0, 0, 0.3f);
        shadow.effectDistance = new Vector2(2, -2);

        LayoutRebuilder.ForceRebuildLayoutImmediate(chatItem.GetComponent<RectTransform>());

            Debug.Log($"<color=#00ff00>[WorldPhoneForm]</color> ✓ TranslateStructuredDialog 完成");
        }
        catch (Exception ex)
        {
            Debug.LogError($"<color=#ff0000>[WorldPhoneForm]</color> TranslateStructuredDialog 异常: {ex.Message}\n{ex.StackTrace}");
        }
    }

    /// <summary>
    /// 处理从Socket接收到的实时聊天消息（表格形式显示）
    /// </summary>
    private void OnChatMessageReceived(ChatMessage chatMessage)
    {
        try
        {
            Debug.Log($"<color=#00ffff>[WorldPhoneForm]</color> ▶ OnChatMessageReceived 开始");

            if (chatMessage == null)
            {
                Debug.LogError($"<color=#ff0000>[WorldPhoneForm]</color> chatMessage 为 null");
                return;
            }

            if (string.IsNullOrEmpty(chatMessage.Message))
            {
                Debug.LogWarning($"<color=yellow>[WorldPhoneForm]</color> 消息内容为空");
                return;
            }

            // 调试：输出收到的消息详情
            Debug.Log($"<color=#00ffff>[WorldPhoneForm]</color> 收到消息 - PlayerName: '{chatMessage.PlayerName}', CompanyName: '{chatMessage.CompanyName}', Message: '{chatMessage.Message}'");

            // 检查PlayerInformation是否为null
            if (PlayerInformation.currentUserData == null)
            {
                Debug.LogWarning($"<color=yellow>[WorldPhoneForm]</color> PlayerInformation.currentUserData 为 null，无法判断是否为自己的消息");
            }
            else
            {
                // 不显示自己的消息（已经在发送时显示过了）
                // 但GM系统消息除外
                if (chatMessage.PlayerName == PlayerInformation.currentUserData.UserName
                    && chatMessage.CompanyName != "SYSTEM")
                {
                    Debug.Log($"<color=#888888>[WorldPhoneForm]</color> 跳过自己的消息");
                    return;
                }
            }

            // 判断是否为GM系统消息（显示为Server类型）
            bool isSystemMessage = !string.IsNullOrEmpty(chatMessage.CompanyName)
                && chatMessage.CompanyName.Equals("SYSTEM", StringComparison.OrdinalIgnoreCase);

            DialogState dialogState = isSystemMessage ? DialogState.Server : DialogState.Client;

            Debug.Log($"<color=#00ffff>[WorldPhoneForm]</color> 消息类型判断 - CompanyName: '{chatMessage.CompanyName}', isSystemMessage: {isSystemMessage}, dialogState: {dialogState}");

            // 检查pool是否为null
            if (pool == null)
            {
                Debug.LogError($"<color=#ff0000>[WorldPhoneForm]</color> pool 为 null，无法显示消息");
                return;
            }

            // 使用结构化的表格形式显示消息
            Debug.Log($"<color=#00ffff>[WorldPhoneForm]</color> 准备调用 TranslateStructuredDialog");
            TranslateStructuredDialog(
                dialogState,
                chatMessage.PlayerName ?? "[未知]",
                chatMessage.CompanyName ?? "",
                chatMessage.Message
            );

            // 播放音效
            if (messagePlayer != null)
            {
                messagePlayer.Play();
            }
            else
            {
                Debug.LogWarning($"<color=yellow>[WorldPhoneForm]</color> messagePlayer 为 null");
            }

            string displayColor = isSystemMessage ? "#ffff00" : "#00ffff";
            Debug.Log($"<color={displayColor}>[WorldPhoneForm]</color> ✓ 消息显示完成: [{chatMessage.CompanyName}] {chatMessage.PlayerName}: {chatMessage.Message}");
        }
        catch (Exception ex)
        {
            Debug.LogError($"<color=#ff0000>[WorldPhoneForm]</color> OnChatMessageReceived 异常: {ex.Message}\n{ex.StackTrace}");
        }
    }
}