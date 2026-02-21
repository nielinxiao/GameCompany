using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using TapSDK.Core;
using UnityEngine;
[System.Serializable]
public class UserData
{
    public string UserID;
    public string UserName;
    private float money;
    public float Money
    {
        get { return money; }
        set
        {
            MoneyChanged?.Invoke(money, value);
            money = value;
            if (currentCompany != null)
            {
                currentCompany.All_saveMoney = value;
            }
        }
    }
    public CompanyClass currentCompany;
    // 防止重复创建默认公司的标志位
    private bool _hasCreatedDefaultCompany = false;
    private CompanyClass CurrentCompany
    {
        get { return currentCompany; }
        set
        {
            currentCompany = value;
            currentCompanyChanged?.Invoke(currentCompany);
        }
    }
    public string currentCompanyWorkRoom;
    private string CurrentCompanyWorkRoom
    {
        get { return currentCompanyWorkRoom; }
        set
        {
            currentCompanyWorkRoom = value;
            currentCompanyWorkRoomChanged?.Invoke(currentCompanyWorkRoom);
        }
    }
    public void ToJsonEmal()
    {
        string json=JsonConvert.SerializeObject(emalMessageElements);
        GameRoot.redisSystem.SetValueAsync(UserID, ConfigUtils.ServerKeys_Config.messages, json);
    }
    public void FromJsonEmal(Action action)
    {
        ValueToken valueToken = new ValueToken((pkg)=> {
            EmalBack(pkg);
            action?.Invoke();
            });
        Debug.LogWarning(UserID);
        GameRoot.redisSystem.GetValueAsync(UserID, ConfigUtils.ServerKeys_Config.messages, valueToken);
    }
    private void EmalBack(Pkg pkg)
    {
        string json = pkg.Body.serverMessage.JsonValue;

        if (string.IsNullOrEmpty(json) || json == "null" || json == "{}")
        {
            Debug.Log("[UserData] EmalBack - 数据为空，初始化为空列表");
            emalMessageElements = new List<EmalMessageElement>();
            return;
        }

        try
        {
            // 智能检测JSON格式：如果以 '[' 开头，是数组格式；如果以 '{' 开头，是对象格式
            json = json.TrimStart();

            if (json.StartsWith("["))
            {
                // 直接数组格式: [{...}, {...}]
                emalMessageElements = JsonConvert.DeserializeObject<List<EmalMessageElement>>(json);
                Debug.Log($"[UserData] EmalBack成功（数组格式） - 加载了 {emalMessageElements?.Count ?? 0} 条消息");
            }
            else if (json.StartsWith("{"))
            {
                // 包装对象格式: {"elements": [{...}]}
                var wrapper = JsonConvert.DeserializeObject<EmalMessageWrapper>(json);
                if (wrapper != null && wrapper.elements != null)
                {
                    emalMessageElements = wrapper.elements;
                    Debug.Log($"[UserData] EmalBack成功（对象格式） - 加载了 {emalMessageElements.Count} 条消息");
                }
                else
                {
                    Debug.LogWarning("[UserData] EmalBack - 对象格式但elements为空，初始化为空列表");
                    emalMessageElements = new List<EmalMessageElement>();
                }
            }
            else
            {
                Debug.LogError($"[UserData] EmalBack - 无法识别的JSON格式: {json.Substring(0, Math.Min(50, json.Length))}");
                emalMessageElements = new List<EmalMessageElement>();
            }
        }
        catch (Exception ex)
        {
            Debug.LogError($"[UserData] EmalBack异常: {ex.Message}");
            Debug.LogError($"[UserData] 原始JSON: {json}");
            emalMessageElements = new List<EmalMessageElement>();
        }
    }
    public void StockCallBack(Pkg pkg)
    {
        try
        {
            string jsonStock = pkg.Body.serverMessage.jsonStock;
            if (!string.IsNullOrEmpty(jsonStock) && jsonStock != "null" && jsonStock != "{}")
            {
                currentCompany.stocks = JsonConvert.DeserializeObject<List<Stock>>(jsonStock);
            }
            else
            {
                Debug.Log("[UserData] 没有股票数据，初始化为空列表");
                if (currentCompany != null)
                {
                    currentCompany.stocks = new List<Stock>();
                }
            }
        }
        catch (Exception ex)
        {
            Debug.LogError($"[UserData] StockCallBack 反序列化失败: {ex.Message}");
            if (currentCompany != null)
            {
                currentCompany.stocks = new List<Stock>();
            }
        }
        finally
        {
            callBack?.Invoke();
            callBack = null;
            // HTTP模式下不需要手动管理监听器
        }
    }
    public void SaveCompany()
    {
        Debug.Log($"[UserData] SaveCompany 开始 - 公司名: {currentCompany?.CompName}, UserID: {UserID}");
        if (currentCompany == null)
        {
            Debug.LogError("[UserData] SaveCompany 失败 - currentCompany 为 null！");
            return;
        }

        string json = JsonConvert.SerializeObject(currentCompany);
        Debug.Log($"[UserData] 公司数据序列化成功 - JSON长度: {json.Length}, 前50字符: {json.Substring(0, Math.Min(50, json.Length))}...");
        Debug.Log($"[UserData] 调用 SetValueAsync - Key: {ConfigUtils.ServerKeys_Config.company}, Field: {UserID}");
        GameRoot.redisSystem.SetValueAsync(ConfigUtils.ServerKeys_Config.company, UserID, json);
        Debug.Log($"[UserData] SaveCompany 完成");
    }
    public void GetCompany(Action CallBack)
    {
        ValueToken valueToken = new ValueToken((pkg)=>
        {
            GetCompanyBack(pkg);
            Debug.Log("GetCompany Successful");
            CallBack?.Invoke();
            });
        GameRoot.redisSystem.GetValueAsync(ConfigUtils.ServerKeys_Config.company, UserID, valueToken);
    }
    private void GetCompanyBack(Pkg pkg)
    {
        string json = pkg.Body.serverMessage.JsonValue;
        Debug.Log($"[UserData] GetCompanyBack - 收到JSON长度: {json?.Length ?? 0}, 内容: {(string.IsNullOrEmpty(json) ? "空" : json.Substring(0, Math.Min(50, json.Length)))}...");

        if (!string.IsNullOrEmpty(json) && json != "null")
        {
            currentCompany = JsonConvert.DeserializeObject<CompanyClass>(json);
            Debug.Log($"[UserData] 成功反序列化公司数据 - 公司名: {currentCompany.CompName}, 金额: {currentCompany.All_saveMoney}");
            // 成功加载数据后重置标志位
            _hasCreatedDefaultCompany = false;
        }
        else if (!_hasCreatedDefaultCompany && currentCompany == null)
        {
            // 首次创建或数据不存在，创建默认公司
            Debug.LogWarning($"[UserData] 服务器返回空数据，创建默认公司");
            currentCompany = new CompanyClass
            {
                CompName = UserName + "的公司",
                CEO_ID = UserID,
                personCount_Company = 0,
                All_saveMoney = 0f,
                CreatTime = System.DateTime.Now,
                jobs = new List<string>(),
                isListed = false,
                LendMoney = 0f,
                stocks = new List<Stock>()
            };
            // 设置标志位防止重复创建
            _hasCreatedDefaultCompany = true;
            // 保存默认公司数据
            Debug.LogWarning($"[UserData] 保存新创建的默认公司到服务器");
            SaveCompany();
        }
        else
        {
            Debug.LogWarning($"[UserData] 服务器返回空数据，已存在公司数据或默认公司已创建，跳过");
        }
    }
    Action callBack;
    public void FromJsonStock(Action callBack)
    {
        this.callBack += callBack;

        // HTTP模式：从服务器重新获取公司数据（包含股票列表）
        var httpClient = GameRoot.httpSystem.GetHttpClient();
        var requestData = new
        {
            jsonDicKey = ConfigUtils.ServerKeys_Config.company,
            jsonDoubleKey = UserID
        };

        GameRoot.Instance.StartCoroutine(httpClient.PostAsync("/api/data/get", requestData,
            responseData =>
            {
                // 从服务器获取公司数据成功
                string companyJson = responseData["jsonValue"]?.ToString();

                if (!string.IsNullOrEmpty(companyJson) && companyJson != "null")
                {
                    try
                    {
                        // 解析公司数据
                        var company = JsonConvert.DeserializeObject<CompanyClass>(companyJson);

                        if (company != null && company.stocks != null)
                        {
                            // 更新股票列表
                            currentCompany.stocks = company.stocks;
                            Debug.Log($"[UserData] FromJsonStock 成功 - 股票数量: {company.stocks.Count}");
                        }
                        else
                        {
                            Debug.Log("[UserData] 公司数据中没有股票，初始化为空列表");
                            currentCompany.stocks = new List<Stock>();
                        }
                    }
                    catch (Exception ex)
                    {
                        Debug.LogError($"[UserData] FromJsonStock 解析失败: {ex.Message}");
                        currentCompany.stocks = new List<Stock>();
                    }
                }
                else
                {
                    Debug.Log("[UserData] 服务器返回空数据，初始化为空股票列表");
                    if (currentCompany != null)
                    {
                        currentCompany.stocks = new List<Stock>();
                    }
                }

                // 调用回调
                callBack?.Invoke();
                this.callBack = null;
            },
            error =>
            {
                Debug.LogError($"[UserData] FromJsonStock 失败: {error}");
                if (currentCompany != null)
                {
                    currentCompany.stocks = new List<Stock>();
                }

                // 即使失败也要调用回调，避免阻塞UI
                callBack?.Invoke();
                this.callBack = null;
            }
        ));
    }
    public List<EmalMessageElement>emalMessageElements = new List<EmalMessageElement>();
    public Texture2D Icon;
    public Action<float,float> MoneyChanged;
    public Action<CompanyClass> currentCompanyChanged;
    public Action<string> currentCompanyWorkRoomChanged;
    public Action<Texture2D> IconChanged;
}

// 用于处理包装格式的消息JSON（如 {"elements": [...]}）
[System.Serializable]
internal class EmalMessageWrapper
{
    public List<EmalMessageElement> elements;
}
