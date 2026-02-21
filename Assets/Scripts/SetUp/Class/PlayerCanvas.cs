using UnityEngine;

public static class PlayerCanvas
{
    public static UIFormBase MainCanvas { get; private set; }
    public static void RegistMainCanvas(UIFormBase uIFormBase)
    {
        MainCanvas = uIFormBase;
    }
}
public interface IPlayerCanvas
{
    void PlayClickAudioClip();
}

