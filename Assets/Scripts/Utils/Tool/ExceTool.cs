using System;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public static class ExceTool
{
    public static bool ReadDataByText<T>(string text, IReadDataRow<T> readDataRow, out List<T> data)
    {
        if (string.IsNullOrEmpty(text))
        {
            data = null;
            return false;
        }
        else
        {
            try
            {
                data = new List<T>();
                string[] row = text.Split("\n");
                for (int i = 0; i < row.Length; i++)
                {
                    if (row[i].StartsWith("#"))
                        continue;
                    if (readDataRow.ReadRow(row[i].Split("\t"), out T element))
                    {
                        data.Add(element);
                    }
                }
                return true;
            }
            catch (Exception ex)
            {
                Debug.LogError(ex);
                data = null;
                return false;
            }
        }
    }
    public static bool ReadDataByFile<T>(string FilePath, IReadDataRow<T> readDataRow, out List<T> data)
    {
        string text= File.ReadAllText(FilePath);
        if(string.IsNullOrEmpty(text))
        {
            data = null;
            return false;
        }
        else
        {
            try
            {
                data = new List<T>();
                string[] row = text.Split("\n");
                for (int i = 1; i < row.Length; i++)
                {
                    if (readDataRow.ReadRow(row[i].Split("\t"), out T element))
                    {
                        data.Add(element);
                    }
                }
                return true;
            }
            catch(Exception ex)
            {
                Debug.LogError(ex);
                data = null;
                return false;
            }
        }
    }
}
public interface IReadDataRow<T>
{
    bool ReadRow(string[] RowElemet,out T element);
}
