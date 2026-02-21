using System;
using System.Collections.Generic;
using TapSDK.Core;
using UnityEngine;
using TapSDK.Login;
using System.Threading.Tasks;
public class SignSystem : SystemBase,ISystemLife
{
    public SignSystem() : base(nameof(SignSystem))
    {
    }
    public override void Start()
    {
        
    }
    public async void Login(Action<TapTapAccount> LoginSucceful,Action LoginFailed)
    {

        try
        {
            List<string> str = new List<string>()
            {
                TapTapLogin.TAP_LOGIN_SCOPE_PUBLIC_PROFILE
            };
            LoginSucceful?.Invoke(await TapTapLogin.Instance.LoginWithScopes(str.ToArray()));
        }
        catch (TaskCanceledException)
        {
            Debug.Log("用户取消登录");
            LoginFailed?.Invoke();
        }
        catch (Exception ex)
        {
            Debug.Log($"登录失败，出现异常：{ex}");
            LoginFailed?.Invoke();
        }
    }
}
