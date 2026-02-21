using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class TitleTips : UIFormBase
{
    public TextMeshProUGUI title;
    public void OnClick()
    {
        IPlayerCanvas game = (PlayerCanvas.MainCanvas as IPlayerCanvas);
        if(game!=null)
        {
            game.PlayClickAudioClip();
        }
        Close();
    }
}
