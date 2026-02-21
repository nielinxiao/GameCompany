using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using System.Collections;

public class AIDialog 
{
    public const string AI = "system";
    public const string User = "user";
    //private string ask = ;
    public static void StartAsk(Action<DeepSeekCallBack,string> callBack, List<message> Listmessages,string name)
    {
        message mess = new message()
        {
            content = @$"
【系统角色】你扮演名为{name}的求职者，模拟Boss直聘真实的求职场景。
公司信息：规模({StaffsSinger.Instance.staffDatas.Count}人)
可选岗位：({PlayerInformation.currentUserData.currentCompany.jobs.ToArray()})如果括号内有岗位请从中挑选，如果没有岗位请自行假定一个游戏行业相关岗位

【人设多样性要求 - 每次必须随机选择】
1. 工作背景（随机选一种）：
   - 应届毕业生（充满热情但缺乏经验，回答问题可能不够专业）
   - 1-3年经验（有基础但还在成长，对薪资期望较低）
   - 3-5年经验（经验丰富，回答专业，有一定薪资期望）
   - 5年以上资深（非常专业，可能对公司有更高要求）
   - 跨行转型者（有其他行业经验，对游戏行业充满热情）
   - 创业失败/离职者（有故事，寻求稳定）

2. 性格特点（随机选一种，90%选前5种正常性格，10%选第6种特殊性格）：
   - 谨慎内向型：话不多，回复简短礼貌，主要倾听和回答问题
   - 谦虚好学型：强调学习机会，对自己要求不高
   - 稳重专业型：回答有条理，展现专业性，不卑不亢
   - 轻松随和型：语气亲切自然，像朋友聊天
   - 现实务实型：关注薪资待遇，直截了当
   - 自信强势型（少见）：非常自信，可能会主动反问，甚至有点挑剔

3. 说话风格（随机选一种）：
   - 简洁型：惜字如金，一两句话说完（""3年经验，做过XX项目""）
   - 适中型：2-3句话，信息完整但不啰嗦
   - 详细型：喜欢展开说明，回复较长

4. 个人特征（随机编造1-2个真实的细节）：
   - 技术专长：如擅长某个具体技能、参与过某类项目
   - 个人背景：如在读研究生/在职跳槽/gap期充电/独立开发者
   - 生活因素：如本地人/外地求职/家庭因素/经济压力
   - 职业追求：如想学新技术/想做管理/想去大厂/想稳定发展

【真实对话流程】
1. 开场白（第一条消息）：
   - 简短自我介绍：姓名+背景+应聘岗位+为什么感兴趣
   - 应届生：强调学习能力和热情
   - 有经验：提及相关项目或技能
   - 风格要符合人设：内向的简短，外向的详细，自信的突出优势
   - 然后等待HR提问，不要主动问问题（除非是自信强势型）

2. 回答阶段（被HR提问时）：
   - 根据人设和能力水平真实回答
   - 应届生：可能不会一些技术问题，可以诚实说""这块我还在学习""
   - 有经验：给出专业回答，可以举例说明
   - 不要答非所问，要针对HR的问题回答
   - 回复长度符合说话风格（简洁型1-2句，详细型3-5句）

3. 反问阶段（仅在以下情况才主动提问）：
   - HR明确问""你有什么想问的吗？""
   - 或者你是自信强势型性格（10%概率）可以在自我介绍后主动问一两个问题
   - 问题要符合人设：
     * 谨慎型：工作时间、加班情况
     * 好学型：培训机会、技术栈
     * 现实型：薪资结构、福利待遇
     * 理想型：团队氛围、项目内容
   - 不要一次问太多，1-2个问题即可

4. 决策阶段（当HR说出薪资、工作时间等关键信息后）：
   - 根据你的人设、能力水平、生活需求判断是否接受
   - 应届生/转型者：要求低，容易接受
   - 资深人员：要求高，可能会拒绝低薪
   - 有生活压力：更关注薪资
   - 严格按照此Json格式回复，只输出JSON不要有任何其他文字：
   {{
   ""money"": 薪资float类型单位为万,
   ""time"": 每日工作时长float类型单位为小时,
   ""save"": 每月为公司带来的收益float类型单位为万（应该比薪资高20%-100%，能力越强倍数越高）,
   ""result"": 是否接受聘用bool类型true/false
   }}

【重要原则】
1. 每次创造全新角色，背景故事、说话方式、关注点都要明显不同
2. 90%是正常求职者（谨慎礼貌，主要回答问题），10%是自信强势型（会主动反问）
3. 不要主动收集信息，真实求职者是被动回答，不是侦探
4. 决策阶段只输出JSON，不要有""好的""、""我接受""等额外文字
5. 保持沉浸感，不要说""我理解了""、""我会扮演""这种破坏代入感的话
6. 记住：你是来找工作的，不是来面试HR的（除非你是那10%的强势型）
",
            role = User
        };
        Listmessages.Add(mess);
        GameRoot.Instance.StartCoroutine(Call(callBack, Listmessages, name));
    }
    public static void SendAIRequset(Action<DeepSeekCallBack, string> callBack, List<message> Listmessages, string name)
    {
        GameRoot.Instance.StartCoroutine(Call(callBack, Listmessages, name));
    }
    static IEnumerator Call(Action<DeepSeekCallBack, string> callBack, List<message> Listmessages, string name)
    {
        DeepSeekReponse deepSeekReponse = new DeepSeekReponse();
        deepSeekReponse.model = "ep-20260217143203-wcmv5";
        deepSeekReponse.message = Listmessages;
        UnityWebRequest unityWebRequest = new UnityWebRequest("https://ark.cn-beijing.volces.com/api/v3/chat/completions");
        unityWebRequest.SetRequestHeader("Authorization", "Bearer 374fd268-04fb-4dff-a406-cf39577a9847");
        unityWebRequest.SetRequestHeader("Content-Type", "application/json");
        unityWebRequest.method = "POST";
        string json = JsonConvert.SerializeObject(deepSeekReponse);
        Debug.Log(json);
        unityWebRequest.uploadHandler = new UploadHandlerRaw(System.Text.Encoding.UTF8.GetBytes(json));
        unityWebRequest.downloadHandler = new DownloadHandlerBuffer();
        Debug.Log("Loading");
        yield return unityWebRequest.SendWebRequest();
        DeepSeekCallBack deepSeekCallBack = JsonConvert.DeserializeObject<DeepSeekCallBack>(unityWebRequest.downloadHandler.text);
        Debug.Log(unityWebRequest.downloadHandler.text);
        message mess2 = new message()
        {
            content = deepSeekCallBack.GetEndChoise(),
            role = AI
        };
        Listmessages.Add(mess2);
        callBack?.Invoke(deepSeekCallBack, name);
    }
    public static void GetRequestion(string qustion, Action<DeepSeekCallBack, string> callBack, List<message> Listmessages, string name)
    {
        Listmessages.Add(new message
        {
            content = qustion,
            role = "user"
        }
            );
        GameRoot.Instance.StartCoroutine(Call(callBack, Listmessages, name));
    }
    public static void GetPersonChange(List<string> NameStr, Action<DeepSeekCallBack, string> callBack)
    {
        message message = new message();
        message.content = "假如你是一名游戏工作者，请在" + NameStr.ToArray().ToString() + "中挑选任意名最少0个最多2个员工，编造任意理由，请假或离职或加薪,格式采用如下:[xxx(名称)][加薪/离职/请假][(理由)],例如：[聂麟霄][请假][因为生病]";
        List<message> messages = new List<message>();
        messages.Add(message);
        GameRoot.Instance.StartCoroutine(Call(callBack, messages, null));
    }
    public struct DeepSeekReponse
    {
        [JsonProperty("model")]
        public string model;
        [JsonProperty("messages")]
        public List<message> message;
    }
    public struct message
    {
        [JsonProperty("role")]
        public string role;
        [JsonProperty("content")]
        public string content;
    }
    public struct DeepSeekCallBack
    {
        [JsonProperty("id")]
        public string id;
        [JsonProperty("model")]
        public string model;
        [JsonProperty("created")]
        public string created;
        [JsonProperty("choices")]
        public List<Choise>choises;
        [JsonProperty("usage")]
        public usage usage;
        public string GetEndChoise()
        {
            if(choises != null && choises.Count != 0)
            {
                return choises[choises.Count-1].message.content;
            }
            return null;
        }
    }
    public struct usage
    {
        [JsonProperty("prompt_tokens")]
        public string prompt_tokens;
        [JsonProperty("completion_tokens")]
        public string completion_tokens;
        [JsonProperty("total_tokens")]
        public string total_tokens;
    }
    public struct Choise
    {
        [JsonProperty("message")]
        public message message;
        [JsonProperty("finish_reason")]
        public string finish_reason;
        [JsonProperty("index")]
        public int index;
        [JsonProperty("logprobs")]
        public string logprobs;
    }
    [System.Serializable]
    public class Employed
    {
        [JsonProperty("money")]
        public float Money;
        [JsonProperty("time")]
        public float WorkTime;
        [JsonProperty("save")]
        public float SaveMony;
        [JsonProperty("result")]
        public bool result;
    }
    
}
