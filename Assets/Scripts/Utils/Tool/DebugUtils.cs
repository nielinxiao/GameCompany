using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
    public static class DebugUtils
    {
        public static void Log(string str)
        {
#if UNITY_EDITOR
            Debug.Log(str);
#else
            Console.WriteLine(str);
#endif
        }
        public static void Log_Time(string str)
        {
            string now = DateTime.Now.ToString();
            int length=now.Length;
            length += str.Length+2;
            StringBuilder stringBuilder = new StringBuilder(length);
            stringBuilder.Append('[');
            stringBuilder.Append(now);
            stringBuilder.Append(']');
            stringBuilder.Append(str);
            Log(str);
        }
    }

