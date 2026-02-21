using UnityEngine;

public class versionButtonTips : UIFormBase
{
    protected override void OnOpen()
    {
        base.OnOpen();
       
    }
    public  void onTipsClick()
    {
        Close();
        GameRoot.versionSystem.UpdateVersion(WriteZIPCallBack, UnPackZIPCallBack);
        Destory();
    }

    public void WriteZIPCallBack()
    {
        (PlayerCanvas.MainCanvas as MainMenuUI).WriteZIPCallBack();
    }
    public void UnPackZIPCallBack()
    {
        (PlayerCanvas.MainCanvas as MainMenuUI).UnPackZIPCallBack();
    }
    public void onTipsCancle()
    {
        Close();
        Destory();
#if UNITY_EDITOR
        UnityEditor.EditorApplication.isPlaying = false;
#else
        Application.Quit();
#endif
    }
}
