using System.Text;
using UnityEngine;

public static class RadiusPackUtils
{
    public static string PackKey(string userID,string Fuction)
    {
        StringBuilder stringBuilder = new StringBuilder();
        stringBuilder.Append(userID);
        stringBuilder.Append(":");
        stringBuilder.Append(Fuction);
        return stringBuilder.ToString();
    }
}
