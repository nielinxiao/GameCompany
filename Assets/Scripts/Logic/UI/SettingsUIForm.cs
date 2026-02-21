using TapSDK.Login;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SettingsUIForm : UIFormBase
{
    public void CallBack()
    {
        GameRoot.Instance.UnInitSystem();
        GameObject.Destroy(GameRoot.Instance.gameObject);
        GameObject.Destroy(GameManager.Instance.gameObject);
        TapTapLogin.Instance.Logout();
        SceneManager.LoadScene(0);
    }
}
