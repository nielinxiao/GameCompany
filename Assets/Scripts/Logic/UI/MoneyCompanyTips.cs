using UnityEngine;
using System.Collections.Generic;
using UnityEngine.UI;
using System.Text;
using System.Threading.Tasks;
using Newtonsoft.Json;
using StackExchange.Redis;
using TMPro;
public class MoneyCompanyTips : UIFormBase
{
    public RectTransform ListRoot;
    public void OnButtonClose()
    {
        (PlayerCanvas.MainCanvas as GameMainMenuUI).ClickCompanyList();
    }
    List<CompanyClass> companyClasses = new List<CompanyClass>();
    protected override async void OnOpen()
    {
        base.OnOpen();
        if(gameObejectPool == null)
        {
            gameObejectPool = new GameObejectPool(100, ConfigUtils.UI_Config.MoneyBackGround,ListRoot, Reseter);
        }
        GetMoneyList();
    }
    void ReBuild()
    {
        int index = 0;
        while(gameList.TryDequeue(out GameObject game))
        {
            gameObejectPool.PutValue(game);
        }
        StringBuilder stringBuilder = new StringBuilder();
        foreach (CompanyClass companyClass in companyClasses)
        {
            stringBuilder.Clear();
            index++;
            GameObject game = gameObejectPool.GetValue();
            gameList.Enqueue(game);
            game.SetActive(true);
            Button button = game.GetComponent<Button>();
            button.onClick.RemoveAllListeners();
            button.onClick.AddListener(() => OnClick(companyClass,game.GetComponent<RectTransform>()));
            game.transform.SetParent(ListRoot);
            if (companyClass.icon_Company != null)
                game.transform.Find("Icon_BackGround/Icon").GetComponent<RawImage>().texture = companyClass.icon_Company;
            game.transform.Find("ranking").GetComponent<TextMeshProUGUI>().text = index.ToString();
            game.transform.Find("CompanyName").GetComponent<TextMeshProUGUI>().text = companyClass.CompName;
            stringBuilder.Append("ÊÐÖµ ");
            stringBuilder.Append(companyClass.All_saveMoney);
            stringBuilder.Append("w");
            game.transform.Find("CompanyMoney").GetComponent<TextMeshProUGUI>().text = stringBuilder.ToString();
        }
    }
    public Queue<GameObject>gameList=new Queue<GameObject>();
    CompanyTips companyTips = null;
    public void OnClick(CompanyClass companyClass, RectTransform rectTransform)
    {
        (PlayerCanvas.MainCanvas as GameMainMenuUI).PlayClickAudioClip();
        companyTips?.Close();
        companyTips?.Destory();
        companyTips = GameRoot.uISystem.LoadUI(ConfigUtils.UI_Config.CompanyInformation, Vector3.zero, transform) as CompanyTips;
        companyTips.Open();
        companyTips.OpenByCompany(companyClass);
        PlayerInformation.lookTemp = companyClass;
    }
    private void GetMoneyCallBack(Pkg pkg)
    {
        companyClasses= JsonConvert.DeserializeObject<List<CompanyClass>>(pkg.Body.serverMessage.JsonValue);
    }
    public void GetMoneyList()
    {
        List<CompanyClass> gameClasses = new List<CompanyClass>();
        ValueToken valueToken = new ValueToken(GetMoneyCallBack);
        ReBuild();
    }
    GameObejectPool gameObejectPool ;
    private void OnDestroy()
    {
        gameObejectPool?.DestoryPool();
    }
    public GameObject Reseter(GameObject game)
    {
        game.SetActive(false);
        return game;
    }
}
