using System;
using System.Collections;
using System.IO;
using System.IO.Compression;
using System.Net;
using System.Net.Security;
using System.Security.Cryptography;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.Networking;
public static class MD5Spawn 
{
    public static void GetMD5(string ABPath,out byte[] bytesOut)
    {
        MD5 mD5 = new MD5CryptoServiceProvider();
        using (FileStream fileStream = File.Open(ABPath, FileMode.Open))
        {
            byte[] bytes = mD5.ComputeHash(fileStream);
            bytesOut = bytes;
        }
    }

    public static async Task WriteCompute(byte[]bytes,string ABZipPath)
    {
        using (FileStream FileStream = File.Create(ABZipPath))
        {
           await FileStream.WriteAsync(bytes);
            Debug.Log("完成");
            FileStream.Close();
        }
    }
    static WaitForSeconds DownLoadWait = new WaitForSeconds(0.5f);
    public static IEnumerator DownLoadFile(string httpurl, Action<byte[]> callBack)
    {
        UnityWebRequest unityWebRequest = UnityWebRequest.Get(httpurl);
        yield return unityWebRequest.SendWebRequest();
        yield return DownLoadWait;
        callBack?.Invoke(unityWebRequest.downloadHandler.data);
    }
    static WaitForSeconds waitTime = new WaitForSeconds(0.3f);
    public static IEnumerator Wait(string DownLoadHTTP, Action<float> progressAction, Action<byte[]> callBack)
    {
        MD5 mD5 = new MD5CryptoServiceProvider();
        UnityWebRequest unityWebRequest =  UnityWebRequest.Get(DownLoadHTTP);
        unityWebRequest.SendWebRequest();
        while (!unityWebRequest.isDone) 
        {
            progressAction.Invoke(unityWebRequest.downloadProgress);
            yield return waitTime;
        }
        progressAction.Invoke(1);
        Debug.Log("Request OK");
        callBack.Invoke(unityWebRequest.downloadHandler.data);
        unityWebRequest.Dispose();
        mD5.Dispose();
    }
    public static void DownLoadAssestBundle(MonoBehaviour mono,string DownLoadHTTP,Action<float>progressAction, Action<byte[]> callBack)
    {
        mono.StartCoroutine(Wait(DownLoadHTTP, progressAction, callBack));
    }
    public static string byteToString(byte[] bytes)
    {
        StringBuilder stringBuilder = new StringBuilder();
        for (int i = 0; i < bytes.Length; i++)
        {
            stringBuilder.Append(Convert.ToString(bytes[i], 16));
        }
        return stringBuilder.ToString();
    }
    public async static Task UnPackZip(string ZipPath,string UnPackPath)
    {
        using (ZipArchive zipArchive = ZipFile.OpenRead(ZipPath))
        {
            foreach (var zip in zipArchive.Entries)
            {
                string path = Path.Combine(UnPackPath, zip.FullName);
                if (zip.FullName.EndsWith('/'))
                {
                    Directory.CreateDirectory(path);
                }
                else
                {
                    zip.ExtractToFile(path, true);
                }
            }
            Debug.Log($"UnPack Successful to path:<a href=\"{UnPackPath}\">{UnPackPath}</a>");
        }

    }
}
