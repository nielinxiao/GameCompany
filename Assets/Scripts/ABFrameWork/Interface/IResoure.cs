using System.Collections;
using System.Collections.Generic;
using System.Xml.Linq;
using UnityEngine;
namespace ABFrameWorlk
{
    [System.Serializable]
    public class IResoure
    {
        public string url { get;  set; }
        public string ABName { get;  set; }
        public List<string> Dependencies = new List<string>();
        public IResoure(string url, string ABName)
        {
            this.url = url;
            this.ABName = ABName;
        }
        public IResoure() { }
        public virtual void Load(string objectName) { }
        public virtual void LoadAsync(string objectName) { }
        public virtual void UnLoad() { }
    }
}

