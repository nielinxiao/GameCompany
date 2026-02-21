using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Baidu.Aip.Speech;
using System.Net.Http;
using System;
using Newtonsoft.Json.Linq;
using System.Threading.Tasks;

/// <summary>
/// 百度语音识别技术的交互类
/// </summary>
[RequireComponent(typeof(AudioSource))]
public class AipController : MonoBehaviour
{
    private AudioSource recordSource;
    private AudioClip recordClip;
    private string accessToken; // 访问AIP需要用的Token

    private string AppId = "118314377";
    private string API_KEY = "h1RLYjubt5aB7DyQrNfIlIlS";
    private string SECRET_KEY = "cwJvDZo1VCrOxYCTpTZKd8lMDLGLSBb7";
    private string authHost = "https://aip.baidubce.com/oauth/2.0/token";

    private Asr aipClient;  // 百度语音识别SDK
    public Action<string> CallBack;
    private void Start()
    {
        //Load();
    }
   
    public void Load()
    {
        aipClient = new Asr(AppId, API_KEY, SECRET_KEY);   // 创建SDK的实例
        aipClient.Timeout = 6000;   // 超时时长为6000毫秒
        accessToken = GetAccessToken(); // 保存当前应用的Token
        Debug.Log(accessToken);
        recordSource = GetComponent<AudioSource>();
        options= new Dictionary<string, object>
         {
         { "dev_pid", 1537 }, // 普通话输入法模型
        { "lan", "zh" },     // 中文
        { "cuid", SystemInfo.deviceUniqueIdentifier }, // 设备唯一标识
        { "format", "pcm" }, // 格式必须与数据一致
        { "rate", 16000 }    // 采样率必须与录音一致
        };
    }
    /// <summary>
    /// 点击按下说话开始录音
    /// </summary>
    public void StartRecord()
    {
        if (Microphone.devices.Length > 0)
        {
            string device = Microphone.devices[0];
            AudioClip clip = Microphone.Start(device, false, 60, 16000);
            recordSource.clip = clip;
            recordClip = clip;
        }
    }

    /// <summary>
    /// 松开按下说话停止录音并发送识别
    /// </summary>
    public void StopRecord(bool Send)
    {
        Microphone.End(Microphone.devices[0]);
        if (Send)
        {
            float[] sample = new float[recordClip.samples];
            recordClip.GetData(sample, 0);
            Task.Run(()=>RunResult(sample));
        }
    }
    Dictionary<string, object> options;
    void RunResult(float[]sample)
    {
        short[] intData = new short[sample.Length];
        byte[] byteData = new byte[intData.Length * 2];

        for (int i = 0; i < sample.Length; i++)
        {
            intData[i] = (short)(sample[i] * short.MaxValue);
        }
        Buffer.BlockCopy(intData, 0, byteData, 0, byteData.Length);
        JObject result = aipClient.Recognize(byteData, "pcm", 16000, options);
        if(result.TryGetValue("error_code", out JToken errorCode))
        {
            Debug.Log("ErrorCode:"+errorCode.Value<int>());
        }
         var speaking = result.GetValue("result");
        if (speaking == null)
        {
            Debug.Log("识别失败");
        }
        else
        {
            string usefulText = speaking.First.ToString();
            CallBack?.Invoke(usefulText);
        }
    }

    private string GetAccessToken()
    {
        HttpClient client = new HttpClient();
        List<KeyValuePair<string, string>> paraList = new List<KeyValuePair<string, string>>();
        paraList.Add(new KeyValuePair<string, string>("grant_type", "client_credentials"));
        paraList.Add(new KeyValuePair<string, string>("client_id", API_KEY));
        paraList.Add(new KeyValuePair<string, string>("client_secret", SECRET_KEY));
        HttpResponseMessage response = client.PostAsync(authHost, new FormUrlEncodedContent(paraList)).Result;
        string result = response.Content.ReadAsStringAsync().Result;
        //Debug.Log("result is " + result);
        //if (result != null) tImage.color = tokenGotColor;
        return result;
    }
    public void DisplayClip()
    {
        recordSource.Play();
    }
}