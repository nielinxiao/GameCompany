using UnityEngine;

public class GameObejectPool : LocalPool<GameObject>
{
    public string nameurl;
    public GameObejectPool(int numSize,string nameurl,Transform root, Reseter reseter) : base(numSize)
    {
        this.root = root;
        this.nameurl = nameurl;
        spawner = Spwaner;
        resoure = GameRoot.resourcesSystem.NameToLoad(nameurl);
        prefab = resoure.GetResult() as GameObject;
        if(prefab!=null)
        {
            Debug.Log("Successful load " + nameurl);
        }
        else
        {
            Debug.LogWarning("Failed load " + nameurl);
        }
        Init(Spwaner,reseter, Destory);
    }
    ABFrameWorlk.Resoure resoure;
    GameObject prefab;
    Transform root;
    public GameObject Spwaner()
    {
        return GameObject.Instantiate(prefab, root);
    }
    private void Destory(GameObject gameObject)
    {
        prefab = null;
        GameRoot.resourcesSystem.UnLoad(resoure);
        GameRoot.Destroy(gameObject);
    }
}
