using System.Collections.Generic;
public class AOTGenericReferences : UnityEngine.MonoBehaviour
{

	// {{ AOT assemblies
	public static readonly IReadOnlyList<string> PatchedAOTAssemblyList = new List<string>
	{
		"DOTween.dll",
		"Newtonsoft.Json.dll",
		"System.Core.dll",
		"Tool.dll",
		"UnityEngine.CoreModule.dll",
		"mscorlib.dll",
	};
	// }}

	// {{ constraint implement type
	// }} 

	// {{ AOT generic types
	// CountUtils<object>
	// DG.Tweening.Core.DOGetter<float>
	// DG.Tweening.Core.DOSetter<float>
	// IFindObjecCompare<object>
	// IReadDataRow<object>
	// LocalPool.Destory<object>
	// LocalPool.Reseter<object>
	// LocalPool.Spawner<object>
	// LocalPool<object>
	// System.Action<AIDialog.Choise>
	// System.Action<AIDialog.DeepSeekCallBack,object>
	// System.Action<AIDialog.message>
	// System.Action<BuildPrefab_Element,int>
	// System.Action<BuildPrefab_Element>
	// System.Action<GUITest.Load>
	// System.Action<Reward.RewardItem>
	// System.Action<byte>
	// System.Action<double>
	// System.Action<float,float>
	// System.Action<float>
	// System.Action<int>
	// System.Action<object,object>
	// System.Action<object>
	// System.Collections.Generic.ArraySortHelper<AIDialog.Choise>
	// System.Collections.Generic.ArraySortHelper<AIDialog.message>
	// System.Collections.Generic.ArraySortHelper<BuildPrefab_Element>
	// System.Collections.Generic.ArraySortHelper<GUITest.Load>
	// System.Collections.Generic.ArraySortHelper<Reward.RewardItem>
	// System.Collections.Generic.ArraySortHelper<byte>
	// System.Collections.Generic.ArraySortHelper<double>
	// System.Collections.Generic.ArraySortHelper<float>
	// System.Collections.Generic.ArraySortHelper<int>
	// System.Collections.Generic.ArraySortHelper<object>
	// System.Collections.Generic.Comparer<AIDialog.Choise>
	// System.Collections.Generic.Comparer<AIDialog.message>
	// System.Collections.Generic.Comparer<BuildPrefab_Element>
	// System.Collections.Generic.Comparer<GUITest.Load>
	// System.Collections.Generic.Comparer<Reward.RewardItem>
	// System.Collections.Generic.Comparer<byte>
	// System.Collections.Generic.Comparer<double>
	// System.Collections.Generic.Comparer<float>
	// System.Collections.Generic.Comparer<int>
	// System.Collections.Generic.Comparer<object>
	// System.Collections.Generic.Dictionary.Enumerator<BuildPrefab_Element,object>
	// System.Collections.Generic.Dictionary.Enumerator<int,object>
	// System.Collections.Generic.Dictionary.Enumerator<object,byte>
	// System.Collections.Generic.Dictionary.Enumerator<object,object>
	// System.Collections.Generic.Dictionary.KeyCollection.Enumerator<BuildPrefab_Element,object>
	// System.Collections.Generic.Dictionary.KeyCollection.Enumerator<int,object>
	// System.Collections.Generic.Dictionary.KeyCollection.Enumerator<object,byte>
	// System.Collections.Generic.Dictionary.KeyCollection.Enumerator<object,object>
	// System.Collections.Generic.Dictionary.KeyCollection<BuildPrefab_Element,object>
	// System.Collections.Generic.Dictionary.KeyCollection<int,object>
	// System.Collections.Generic.Dictionary.KeyCollection<object,byte>
	// System.Collections.Generic.Dictionary.KeyCollection<object,object>
	// System.Collections.Generic.Dictionary.ValueCollection.Enumerator<BuildPrefab_Element,object>
	// System.Collections.Generic.Dictionary.ValueCollection.Enumerator<int,object>
	// System.Collections.Generic.Dictionary.ValueCollection.Enumerator<object,byte>
	// System.Collections.Generic.Dictionary.ValueCollection.Enumerator<object,object>
	// System.Collections.Generic.Dictionary.ValueCollection<BuildPrefab_Element,object>
	// System.Collections.Generic.Dictionary.ValueCollection<int,object>
	// System.Collections.Generic.Dictionary.ValueCollection<object,byte>
	// System.Collections.Generic.Dictionary.ValueCollection<object,object>
	// System.Collections.Generic.Dictionary<BuildPrefab_Element,object>
	// System.Collections.Generic.Dictionary<int,object>
	// System.Collections.Generic.Dictionary<object,byte>
	// System.Collections.Generic.Dictionary<object,object>
	// System.Collections.Generic.EqualityComparer<BuildPrefab_Element>
	// System.Collections.Generic.EqualityComparer<byte>
	// System.Collections.Generic.EqualityComparer<int>
	// System.Collections.Generic.EqualityComparer<object>
	// System.Collections.Generic.HashSet.Enumerator<object>
	// System.Collections.Generic.HashSet<object>
	// System.Collections.Generic.ICollection<AIDialog.Choise>
	// System.Collections.Generic.ICollection<AIDialog.message>
	// System.Collections.Generic.ICollection<BuildPrefab_Element>
	// System.Collections.Generic.ICollection<GUITest.Load>
	// System.Collections.Generic.ICollection<Reward.RewardItem>
	// System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<BuildPrefab_Element,object>>
	// System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<int,object>>
	// System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<object,byte>>
	// System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<object,object>>
	// System.Collections.Generic.ICollection<byte>
	// System.Collections.Generic.ICollection<double>
	// System.Collections.Generic.ICollection<float>
	// System.Collections.Generic.ICollection<int>
	// System.Collections.Generic.ICollection<object>
	// System.Collections.Generic.IComparer<AIDialog.Choise>
	// System.Collections.Generic.IComparer<AIDialog.message>
	// System.Collections.Generic.IComparer<BuildPrefab_Element>
	// System.Collections.Generic.IComparer<GUITest.Load>
	// System.Collections.Generic.IComparer<Reward.RewardItem>
	// System.Collections.Generic.IComparer<byte>
	// System.Collections.Generic.IComparer<double>
	// System.Collections.Generic.IComparer<float>
	// System.Collections.Generic.IComparer<int>
	// System.Collections.Generic.IComparer<object>
	// System.Collections.Generic.IEnumerable<AIDialog.Choise>
	// System.Collections.Generic.IEnumerable<AIDialog.message>
	// System.Collections.Generic.IEnumerable<BuildPrefab_Element>
	// System.Collections.Generic.IEnumerable<GUITest.Load>
	// System.Collections.Generic.IEnumerable<Reward.RewardItem>
	// System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<BuildPrefab_Element,object>>
	// System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<int,object>>
	// System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<object,byte>>
	// System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<object,object>>
	// System.Collections.Generic.IEnumerable<byte>
	// System.Collections.Generic.IEnumerable<double>
	// System.Collections.Generic.IEnumerable<float>
	// System.Collections.Generic.IEnumerable<int>
	// System.Collections.Generic.IEnumerable<object>
	// System.Collections.Generic.IEnumerator<AIDialog.Choise>
	// System.Collections.Generic.IEnumerator<AIDialog.message>
	// System.Collections.Generic.IEnumerator<BuildPrefab_Element>
	// System.Collections.Generic.IEnumerator<GUITest.Load>
	// System.Collections.Generic.IEnumerator<Reward.RewardItem>
	// System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<BuildPrefab_Element,object>>
	// System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<int,object>>
	// System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<object,byte>>
	// System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<object,object>>
	// System.Collections.Generic.IEnumerator<byte>
	// System.Collections.Generic.IEnumerator<double>
	// System.Collections.Generic.IEnumerator<float>
	// System.Collections.Generic.IEnumerator<int>
	// System.Collections.Generic.IEnumerator<object>
	// System.Collections.Generic.IEqualityComparer<BuildPrefab_Element>
	// System.Collections.Generic.IEqualityComparer<int>
	// System.Collections.Generic.IEqualityComparer<object>
	// System.Collections.Generic.IList<AIDialog.Choise>
	// System.Collections.Generic.IList<AIDialog.message>
	// System.Collections.Generic.IList<BuildPrefab_Element>
	// System.Collections.Generic.IList<GUITest.Load>
	// System.Collections.Generic.IList<Reward.RewardItem>
	// System.Collections.Generic.IList<byte>
	// System.Collections.Generic.IList<double>
	// System.Collections.Generic.IList<float>
	// System.Collections.Generic.IList<int>
	// System.Collections.Generic.IList<object>
	// System.Collections.Generic.KeyValuePair<BuildPrefab_Element,object>
	// System.Collections.Generic.KeyValuePair<int,object>
	// System.Collections.Generic.KeyValuePair<object,byte>
	// System.Collections.Generic.KeyValuePair<object,object>
	// System.Collections.Generic.List.Enumerator<AIDialog.Choise>
	// System.Collections.Generic.List.Enumerator<AIDialog.message>
	// System.Collections.Generic.List.Enumerator<BuildPrefab_Element>
	// System.Collections.Generic.List.Enumerator<GUITest.Load>
	// System.Collections.Generic.List.Enumerator<Reward.RewardItem>
	// System.Collections.Generic.List.Enumerator<byte>
	// System.Collections.Generic.List.Enumerator<double>
	// System.Collections.Generic.List.Enumerator<float>
	// System.Collections.Generic.List.Enumerator<int>
	// System.Collections.Generic.List.Enumerator<object>
	// System.Collections.Generic.List<AIDialog.Choise>
	// System.Collections.Generic.List<AIDialog.message>
	// System.Collections.Generic.List<BuildPrefab_Element>
	// System.Collections.Generic.List<GUITest.Load>
	// System.Collections.Generic.List<Reward.RewardItem>
	// System.Collections.Generic.List<byte>
	// System.Collections.Generic.List<double>
	// System.Collections.Generic.List<float>
	// System.Collections.Generic.List<int>
	// System.Collections.Generic.List<object>
	// System.Collections.Generic.ObjectComparer<AIDialog.Choise>
	// System.Collections.Generic.ObjectComparer<AIDialog.message>
	// System.Collections.Generic.ObjectComparer<BuildPrefab_Element>
	// System.Collections.Generic.ObjectComparer<GUITest.Load>
	// System.Collections.Generic.ObjectComparer<Reward.RewardItem>
	// System.Collections.Generic.ObjectComparer<byte>
	// System.Collections.Generic.ObjectComparer<double>
	// System.Collections.Generic.ObjectComparer<float>
	// System.Collections.Generic.ObjectComparer<int>
	// System.Collections.Generic.ObjectComparer<object>
	// System.Collections.Generic.ObjectEqualityComparer<BuildPrefab_Element>
	// System.Collections.Generic.ObjectEqualityComparer<byte>
	// System.Collections.Generic.ObjectEqualityComparer<int>
	// System.Collections.Generic.ObjectEqualityComparer<object>
	// System.Collections.Generic.Queue.Enumerator<object>
	// System.Collections.Generic.Queue<object>
	// System.Collections.ObjectModel.ReadOnlyCollection<AIDialog.Choise>
	// System.Collections.ObjectModel.ReadOnlyCollection<AIDialog.message>
	// System.Collections.ObjectModel.ReadOnlyCollection<BuildPrefab_Element>
	// System.Collections.ObjectModel.ReadOnlyCollection<GUITest.Load>
	// System.Collections.ObjectModel.ReadOnlyCollection<Reward.RewardItem>
	// System.Collections.ObjectModel.ReadOnlyCollection<byte>
	// System.Collections.ObjectModel.ReadOnlyCollection<double>
	// System.Collections.ObjectModel.ReadOnlyCollection<float>
	// System.Collections.ObjectModel.ReadOnlyCollection<int>
	// System.Collections.ObjectModel.ReadOnlyCollection<object>
	// System.Comparison<AIDialog.Choise>
	// System.Comparison<AIDialog.message>
	// System.Comparison<BuildPrefab_Element>
	// System.Comparison<GUITest.Load>
	// System.Comparison<Reward.RewardItem>
	// System.Comparison<byte>
	// System.Comparison<double>
	// System.Comparison<float>
	// System.Comparison<int>
	// System.Comparison<object>
	// System.Func<System.Threading.Tasks.VoidTaskResult>
	// System.Func<object,System.Threading.Tasks.VoidTaskResult>
	// System.Func<object,object,object>
	// System.Func<object,object>
	// System.Func<object>
	// System.Predicate<AIDialog.Choise>
	// System.Predicate<AIDialog.message>
	// System.Predicate<BuildPrefab_Element>
	// System.Predicate<GUITest.Load>
	// System.Predicate<Reward.RewardItem>
	// System.Predicate<byte>
	// System.Predicate<double>
	// System.Predicate<float>
	// System.Predicate<int>
	// System.Predicate<object>
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder<System.Threading.Tasks.VoidTaskResult>
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder<object>
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<System.Threading.Tasks.VoidTaskResult>
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<object>
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable<System.Threading.Tasks.VoidTaskResult>
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable<object>
	// System.Runtime.CompilerServices.TaskAwaiter<System.Threading.Tasks.VoidTaskResult>
	// System.Runtime.CompilerServices.TaskAwaiter<object>
	// System.Threading.Tasks.ContinuationTaskFromResultTask<System.Threading.Tasks.VoidTaskResult>
	// System.Threading.Tasks.ContinuationTaskFromResultTask<object>
	// System.Threading.Tasks.Task<System.Threading.Tasks.VoidTaskResult>
	// System.Threading.Tasks.Task<object>
	// System.Threading.Tasks.TaskFactory.<>c__DisplayClass35_0<System.Threading.Tasks.VoidTaskResult>
	// System.Threading.Tasks.TaskFactory.<>c__DisplayClass35_0<object>
	// System.Threading.Tasks.TaskFactory<System.Threading.Tasks.VoidTaskResult>
	// System.Threading.Tasks.TaskFactory<object>
	// }}

	public void RefMethods()
	{
		// object DG.Tweening.TweenSettingsExtensions.SetEase<object>(object,DG.Tweening.Ease,float)
		// bool ExceTool.ReadDataByText<object>(string,IReadDataRow<object>,System.Collections.Generic.List<object>&)
		// AIDialog.DeepSeekCallBack Newtonsoft.Json.JsonConvert.DeserializeObject<AIDialog.DeepSeekCallBack>(string)
		// AIDialog.DeepSeekCallBack Newtonsoft.Json.JsonConvert.DeserializeObject<AIDialog.DeepSeekCallBack>(string,Newtonsoft.Json.JsonSerializerSettings)
		// BuildConfig Newtonsoft.Json.JsonConvert.DeserializeObject<BuildConfig>(string)
		// BuildConfig Newtonsoft.Json.JsonConvert.DeserializeObject<BuildConfig>(string,Newtonsoft.Json.JsonSerializerSettings)
		// object Newtonsoft.Json.JsonConvert.DeserializeObject<object>(string)
		// object Newtonsoft.Json.JsonConvert.DeserializeObject<object>(string,Newtonsoft.Json.JsonSerializerSettings)
		// System.Collections.Generic.List<int> System.Linq.Enumerable.ToList<int>(System.Collections.Generic.IEnumerable<int>)
		// System.Collections.Generic.List<object> System.Linq.Enumerable.ToList<object>(System.Collections.Generic.IEnumerable<object>)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,BuildSinger.<GetWorld>d__10>(System.Runtime.CompilerServices.TaskAwaiter<object>&,BuildSinger.<GetWorld>d__10&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,StaffsSinger.<LoadStaff>d__16>(System.Runtime.CompilerServices.TaskAwaiter<object>&,StaffsSinger.<LoadStaff>d__16&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,StaffsSinger.<LocalGetStaff>d__17>(System.Runtime.CompilerServices.TaskAwaiter<object>&,StaffsSinger.<LocalGetStaff>d__17&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<System.Threading.Tasks.VoidTaskResult>.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,BuildSinger.<GetWorld>d__10>(System.Runtime.CompilerServices.TaskAwaiter<object>&,BuildSinger.<GetWorld>d__10&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<System.Threading.Tasks.VoidTaskResult>.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,StaffsSinger.<LoadStaff>d__16>(System.Runtime.CompilerServices.TaskAwaiter<object>&,StaffsSinger.<LoadStaff>d__16&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<System.Threading.Tasks.VoidTaskResult>.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,StaffsSinger.<LocalGetStaff>d__17>(System.Runtime.CompilerServices.TaskAwaiter<object>&,StaffsSinger.<LocalGetStaff>d__17&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<object>.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,BuldUIElement.<Load>d__31>(System.Runtime.CompilerServices.TaskAwaiter<object>&,BuldUIElement.<Load>d__31&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.Start<BuildSinger.<GetWorld>d__10>(BuildSinger.<GetWorld>d__10&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.Start<StaffsSinger.<AddStaffData>d__25>(StaffsSinger.<AddStaffData>d__25&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.Start<StaffsSinger.<LoadStaff>d__16>(StaffsSinger.<LoadStaff>d__16&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.Start<StaffsSinger.<LocalGetStaff>d__17>(StaffsSinger.<LocalGetStaff>d__17&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<object>.Start<BuldUIElement.<Load>d__31>(BuldUIElement.<Load>d__31&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,BuildSinger.<GetBlock>d__9>(System.Runtime.CompilerServices.TaskAwaiter&,BuildSinger.<GetBlock>d__9&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,LookMode.<OnGet_CEO_Block>d__3>(System.Runtime.CompilerServices.TaskAwaiter&,LookMode.<OnGet_CEO_Block>d__3&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,LookMode.<OnGet_CEO_Person>d__4>(System.Runtime.CompilerServices.TaskAwaiter&,LookMode.<OnGet_CEO_Person>d__4&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,PhoneUIElement.<OfferSuccessful>d__41>(System.Runtime.CompilerServices.TaskAwaiter&,PhoneUIElement.<OfferSuccessful>d__41&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,StaffsSinger.<OnGetStaffBack>d__15>(System.Runtime.CompilerServices.TaskAwaiter&,StaffsSinger.<OnGetStaffBack>d__15&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,BuldUIElement.<OnClickBox>d__16>(System.Runtime.CompilerServices.TaskAwaiter<object>&,BuldUIElement.<OnClickBox>d__16&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,ShopUIElement.<OnOpen>d__17>(System.Runtime.CompilerServices.TaskAwaiter<object>&,ShopUIElement.<OnOpen>d__17&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<BuildSinger.<GetBlock>d__9>(BuildSinger.<GetBlock>d__9&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<BuldUIElement.<OnClickBox>d__16>(BuldUIElement.<OnClickBox>d__16&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<LookMode.<OnEnter>d__2>(LookMode.<OnEnter>d__2&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<LookMode.<OnGet_CEO_Block>d__3>(LookMode.<OnGet_CEO_Block>d__3&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<LookMode.<OnGet_CEO_Person>d__4>(LookMode.<OnGet_CEO_Person>d__4&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<MoneyCompanyTips.<OnOpen>d__3>(MoneyCompanyTips.<OnOpen>d__3&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<MoneySinger.<OnChange>d__13>(MoneySinger.<OnChange>d__13&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<PhoneUIElement.<OfferSuccessful>d__41>(PhoneUIElement.<OfferSuccessful>d__41&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<ShopUIElement.<OnOpen>d__17>(ShopUIElement.<OnOpen>d__17&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<StaffsSinger.<OnGetStaffBack>d__15>(StaffsSinger.<OnGetStaffBack>d__15&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<UserDataUI.<SelectCallBack>d__15>(UserDataUI.<SelectCallBack>d__15&)
		// object UnityEngine.Component.GetComponent<object>()
		// object UnityEngine.Component.GetComponentInChildren<object>()
		// object UnityEngine.Component.GetComponentInChildren<object>(bool)
		// object[] UnityEngine.Component.GetComponentsInChildren<object>()
		// object[] UnityEngine.Component.GetComponentsInChildren<object>(bool)
		// object UnityEngine.GameObject.GetComponent<object>()
		// object UnityEngine.GameObject.GetComponentInChildren<object>()
		// object UnityEngine.GameObject.GetComponentInChildren<object>(bool)
		// object[] UnityEngine.GameObject.GetComponentsInChildren<object>()
		// object[] UnityEngine.GameObject.GetComponentsInChildren<object>(bool)
		// object UnityEngine.Object.FindAnyObjectByType<object>()
		// object UnityEngine.Object.Instantiate<object>(object)
		// object UnityEngine.Object.Instantiate<object>(object,UnityEngine.Transform)
		// object UnityEngine.Object.Instantiate<object>(object,UnityEngine.Transform,bool)
		// object UnityEngine.Object.Instantiate<object>(object,UnityEngine.Vector3,UnityEngine.Quaternion)
	}
}