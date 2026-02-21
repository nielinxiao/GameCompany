using System;
using System.Collections;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.SceneManagement;
using UnityEngine.UIElements;

public class SceneSystem : SystemBase
{
    public SceneSystem() : base(nameof(SceneSystem))
    {

    }
    public SceneToken LoadScene(string SceneName, Action<float> progress =null, Action onComplited =null,bool AutoLoad=true)
    {
        SceneToken token = new SceneToken(progress,onComplited);
        GameRoot.Instance.StartCoroutine(_LoadScene(SceneName, token, AutoLoad));
        return token;
    }
    private IEnumerator _LoadScene(string SceneName, SceneToken token = null, bool AutoLoad = true)
    {
        token.progressCallBack?.Invoke(0);
        AsyncOperation asyncOperation = SceneManager.LoadSceneAsync(SceneName);
        token.asyncOperation = asyncOperation;
        asyncOperation.allowSceneActivation = false;
        while (!asyncOperation.isDone && asyncOperation.progress < 0.9f)
        {
            token.progressCallBack?.Invoke(asyncOperation.progress);
            yield return null;
        }
        token.progressCallBack?.Invoke(1);
        token.onComplited?.Invoke();
        if (AutoLoad)
            asyncOperation.allowSceneActivation = true;
    }
}
public sealed class SceneToken
{
    public Action<float> progressCallBack;
    public Action onComplited;
    public AsyncOperation asyncOperation;
    public SceneToken(Action<float> progressCallBack, Action onComplited)
    {
        this.progressCallBack = progressCallBack;
        this.onComplited = onComplited;
    }
}
