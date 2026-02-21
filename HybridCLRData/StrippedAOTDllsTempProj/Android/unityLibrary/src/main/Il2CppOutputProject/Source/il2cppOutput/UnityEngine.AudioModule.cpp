#include "pch-cpp.hpp"





template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941;
struct AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A;
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
struct AudioDistortionFilter_t7F3BAB686EC252D931F9F0C9D5711334A15AE2C2;
struct AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2;
struct AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718;
struct AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0;
struct AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04;
struct AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311;
struct AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A;
struct AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA;
struct AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835;
struct AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2;
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MethodInfo_t;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
struct SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30;
struct AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0ED72C9B4D0AB21E88D08F74AC73C6C8CEC4B7DF;
IL2CPP_EXTERN_C String_t* _stringLiteral4EBC86E0EACFCA522AEB82874860D0E248D782A5;
IL2CPP_EXTERN_C String_t* _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5;
IL2CPP_EXTERN_C String_t* _stringLiteral67DB02F1FABDC6C47E8B1ED9A9ADC8E17845BD4F;
IL2CPP_EXTERN_C String_t* _stringLiteral75DC747EA24DB7802D5E580A86C87FFCD3EA69B0;
IL2CPP_EXTERN_C String_t* _stringLiteral7F33A83E7C1398BEA9BE2EB876FECFEF16BCCDBD;
IL2CPP_EXTERN_C String_t* _stringLiteral8C53570A90E7EFA87FDB7F0DCC0EE1FCC019E426;
IL2CPP_EXTERN_C String_t* _stringLiteralB7ED4706BFE5D072AD3E5A0F26644FF44E847682;
IL2CPP_EXTERN_C String_t* _stringLiteralCAEF26BE398F51129C4063A43AD4BF947AC128D6;
IL2CPP_EXTERN_C String_t* _stringLiteralD5F2B3561CFA951FF37495C4B6AE6DB436EC2259;
IL2CPP_EXTERN_C String_t* _stringLiteralF52B980B71426E2D226C2ED5B2045868E72F85FF;
IL2CPP_EXTERN_C const RuntimeMethod* BlittableArrayWrapper_Unmarshal_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m784D839177D7F17CDDD6FA7463118B5EEE65EFEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_MarshalNotNull_TisAudioDistortionFilter_t7F3BAB686EC252D931F9F0C9D5711334A15AE2C2_mBCC42DA240C27D27E1FB9FEC7D803B79D7061ABA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_MarshalNotNull_TisAudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718_m95C939B2047DBCB9744FF33FFCB56CC327F61E83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_MarshalNotNull_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_mCEC3E43862A35543A8ABF1EB6B11A73AE6D8E743_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_MarshalNotNull_TisAudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04_mB656C0201F2C969B922D161F4E2D27A8B077C4EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_Marshal_TisAudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311_m1580BA03AE5DDE6E684BC285BEC86628223AA9C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_Marshal_TisAudioResource_t35B84706031E4F08C928B1640B804839F4B6500A_m8A7510F96A7C2FEDF3ACF37D6363450E76D7204F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryExtensions_AsSpan_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF14C9AF44BF6092EB640C33222BE02E3655EC69C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Microphone_Start_mDA38C5376D122F27D9DEFD2AE811BAE460F2242E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_GetPinnableReference_mB3EA4E5E6B70A51EC51C563EBB60BA9A8DE4D1A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_mED11128A130F01BC9C5F690BFFAEF38B2283751B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unmarshal_UnmarshalUnityObject_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mCE0FC7E07AAC00447251B3A9FF0478A38BD70191_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unmarshal_UnmarshalUnityObject_TisAudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311_m7B325C51AFA692A67E79DF9687494FC620436E94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unmarshal_UnmarshalUnityObject_TisAudioResource_t35B84706031E4F08C928B1640B804839F4B6500A_m2AF5A00444F02462512EC275FA16EC7B1BD73D3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t462BCCFB9B78348533823E0754F65F52A5348F89 
{
};
struct EmptyArray_1_t2984B8F74E4B1E6C047125D296C6C06779CA328D  : public RuntimeObject
{
};
struct AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2  : public RuntimeObject
{
	SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* ___sampleFramesAvailable;
	SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* ___sampleFramesOverflow;
};
struct AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD  : public RuntimeObject
{
};
struct Microphone_tC7BC94B89C5C1409E8F2C532B7EBEF7F23989AB8  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD  : public RuntimeObject
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E 
{
	void* ___begin;
	int32_t ___length;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UIntPtr_t 
{
	void* ____pointer;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	intptr_t ____value;
};
struct ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A 
{
	intptr_t ____value;
};
struct AudioReverbPreset_t77042909B2925DD46622B59B0287A55A6B8CA3F2 
{
	int32_t ___value__;
};
struct AudioRolloffMode_tA944C7222A7D47A746407C74368B413CDA1B6B7B 
{
	int32_t ___value__;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct FFTWindow_t50600D039B314BA8470C689D618126AF6E0223FE 
{
	int32_t ___value__;
};
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 
{
	intptr_t ___m_Handle;
	uint32_t ___m_Version;
};
struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 
{
	intptr_t ___m_Handle;
	uint32_t ___m_Version;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct UpdateFlags_tBF0D802FF9F8C33DA5DE40ED2B21768D88E33574 
{
	int32_t ___value__;
};
struct ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer;
	int32_t ____length;
};
struct Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C 
{
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A ____pointer;
	int32_t ____length;
};
struct AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle;
};
struct AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle;
};
struct AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle;
};
struct AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59 
{
	void* ___data;
	int32_t ___size;
	int32_t ___updateFlags;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A
{
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback;
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback;
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E  : public MulticastDelegate_t
{
};
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072  : public MulticastDelegate_t
{
};
struct SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30  : public MulticastDelegate_t
{
};
struct AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177  : public MulticastDelegate_t
{
};
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct AudioDistortionFilter_t7F3BAB686EC252D931F9F0C9D5711334A15AE2C2  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};
struct EmptyArray_1_t2984B8F74E4B1E6C047125D296C6C06779CA328D_StaticFields
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___Value;
};
struct AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields
{
	AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* ___OnAudioConfigurationChanged;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAudioSystemShuttingDown;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAudioSystemStartedUp;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields
{
	bool ___U3CmuteStateU3Ek__BackingField;
	bool ____stopAudioOutputOnMute;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnMuteStateChanged;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct UIntPtr_t_StaticFields
{
	uintptr_t ___Zero;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Null;
};
struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_StaticFields
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Null;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float* Span_1_GetPinnableReference_mB3EA4E5E6B70A51EC51C563EBB60BA9A8DE4D1A0_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mED11128A130F01BC9C5F690BFFAEF38B2283751B_gshared_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C MemoryExtensions_AsSpan_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF14C9AF44BF6092EB640C33222BE02E3655EC69C_gshared_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlittableArrayWrapper_Unmarshal_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m784D839177D7F17CDDD6FA7463118B5EEE65EFEC_gshared_inline (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Unmarshal_UnmarshalUnityObject_TisRuntimeObject_m2B04FEB8E4BB254DD6F827F3111C91F2AF16D04A_gshared_inline (intptr_t ___0_gcHandlePtr, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_Marshal_TisRuntimeObject_m286B34400A212037E8EBD53DBFEAD7D23CDE8051_gshared_inline (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA5EF3ABEDD5776174AAEF4D976B58B424F43B275_gshared_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m7DF6F0480C6904A216270964E3639CEA4F419C40_gshared_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Span_1_ToArray_mAAE4DC737A5BF9A5A29F336EDA790C8AFADA2CDE_gshared_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Array_Empty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m44F781E90531F7FCDB12BC4290CD4394A887FC06_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_gshared_inline (intptr_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8E65A20A53C662400685CE50AE11C2A80FBC6D7C_gshared (float* ___0_destination, float* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;

IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_inline (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mobile_get_muteState_m64C1E8C61537317A7F153E1A72F7D39D85DA684D_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mobile_set_muteState_m7C9A464BCA3762330E18CCAD79AF6C47B863CA02_inline (bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mobile_get_stopAudioOutputOnMute_m43EC82258D38C418353DFE19F32B51B64B18DCCA (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_StopAudioOutput_m10B8CEF668EE4967D0AD1D6741B6A37540C28A46 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_StartAudioOutput_m731D1EEEE7A0D56BAADD571BA0FCAC13FB071223 (const RuntimeMethod* method) ;
inline void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, bool, const RuntimeMethod*))Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSettings_StartAudioOutput_mB04D851DD0E6115DEEFB55779F880146263C67BE (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSettings_StopAudioOutput_m3FE7A8EADAB2FB570BB05F7C353E25E15885D1CB (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioResource__ctor_m67FD564B101E07B1EA22EF27F3B5FA290A9D1409 (AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01 (RuntimeObject* ___0_obj, String_t* ___1_parameterName, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_inline (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline)(___0_obj, method);
}
inline float* Span_1_GetPinnableReference_mB3EA4E5E6B70A51EC51C563EBB60BA9A8DE4D1A0 (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method)
{
	return ((  float* (*) (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C*, const RuntimeMethod*))Span_1_GetPinnableReference_mB3EA4E5E6B70A51EC51C563EBB60BA9A8DE4D1A0_gshared)(__this, method);
}
inline int32_t Span_1_get_Length_mED11128A130F01BC9C5F690BFFAEF38B2283751B_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C*, const RuntimeMethod*))Span_1_get_Length_mED11128A130F01BC9C5F690BFFAEF38B2283751B_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedSpanWrapper__ctor_mB29647A21BB87EA4DF859E5C2FA2207F47E525D2 (ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* __this, void* ___0_begin, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_GetData_Injected_mEE66FFD5CAD3D347AF4B1E103BBF1B9D073D762A (intptr_t ___0_clip, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___1_data, int32_t ___2_samplesOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OutStringMarshaller_GetStringAndDispose_mB15D41A9893BBC55074D4910259FA722129DB062 (ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E ___0_managedSpan, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_GetName_Injected_m5BCF77E0928A4DE3D26C6A722DD60989AFB16DCD (intptr_t ___0__unity_self, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___1_ret, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_Injected_m18E5C4BD533706C80A8780D7439E151E305479F5 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_channels_Injected_mB9349B18A44BD4FE6947947DA7EC0C561E42CE78 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AudioClip_GetName_m561BBA037957E25D5BC5A962A1AA0C789895C9D1 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
inline Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C MemoryExtensions_AsSpan_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF14C9AF44BF6092EB640C33222BE02E3655EC69C_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method)
{
	return ((  Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C (*) (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*))MemoryExtensions_AsSpan_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF14C9AF44BF6092EB640C33222BE02E3655EC69C_gshared_inline)(___0_array, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_GetData_m2EEC857E7955326B0146BA25A730F5F76AABB1E3 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C ___1_data, int32_t ___2_samplesOffset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_inline (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_inline (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour__ctor_m00422B6EFEA829BCB116D715E74F1EAD2CB6F4F8 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
inline void BlittableArrayWrapper_Unmarshal_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m784D839177D7F17CDDD6FA7463118B5EEE65EFEC_inline (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** ___0_array, const RuntimeMethod* method)
{
	((  void (*) (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C**, const RuntimeMethod*))BlittableArrayWrapper_Unmarshal_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m784D839177D7F17CDDD6FA7463118B5EEE65EFEC_gshared_inline)(__this, ___0_array, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlittableArrayWrapper__ctor_mD7869B76C6745D311B8FD895EF3C29428E568971_inline (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* __this, void* ___0_data, int32_t ___1_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_GetSpectrumDataHelper_Injected_m6FC86614FE46AB6C3A3E87976ACEF137CC436EBB (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* ___0_samples, int32_t ___1_channel, int32_t ___2_window, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_GetSpectrumDataHelper_m2631C609AB0CC9ED84EB55C939EDC78456E0482F (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_samples, int32_t ___1_channel, int32_t ___2_window, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_GetPitch_Injected_m0D4A9670C9E85FD57C31AD1FF82F91CE27D8B4D6 (intptr_t ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetPitch_Injected_mDE523D3EC8E91EC01A95CDD8DCB3B3383C990AF2 (intptr_t ___0_source, float ___1_pitch, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayHelper_Injected_m05446E7631596FF4CEB719301AE808C954E7DFB3 (intptr_t ___0_source, uint64_t ___1_delay, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_Injected_mA49628DDBC38E8430F141A40A8E34D5CB18A6CCB (intptr_t ___0__unity_self, bool ___1_stopOneShots, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_Injected_mF349411AE1957B030941AC3F318643E63CE9465B (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_Injected_m4A5BD8D8EEEF904031C7B543AE841472A16F43AE (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_GetPitch_m80F6D2BAF966F669253E9231AFCFFC303779913D (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetPitch_mE75DEDF8F37301BDA63E0F545A7A00850C24F53E (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, float ___1_pitch, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSource_get_timeSamples_Injected_mBBA929888A6B297906FFE75E0016F10F9584E5B6 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A* AudioSource_get_resource_mD5B7D729BFFFE3C124B84F5B09C349BAFCF242F7 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_resource_m1B99F8B5226398A7FFD8681BB362EB63B9B124F3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AudioSource_get_resource_Injected_mF9AACD7830BC3BCC0AB27C8F1EF8C3E2DFAF32A9 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
inline AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A* Unmarshal_UnmarshalUnityObject_TisAudioResource_t35B84706031E4F08C928B1640B804839F4B6500A_m2AF5A00444F02462512EC275FA16EC7B1BD73D3D_inline (intptr_t ___0_gcHandlePtr, const RuntimeMethod* method)
{
	return ((  AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A* (*) (intptr_t, const RuntimeMethod*))Unmarshal_UnmarshalUnityObject_TisRuntimeObject_m2B04FEB8E4BB254DD6F827F3111C91F2AF16D04A_gshared_inline)(___0_gcHandlePtr, method);
}
inline intptr_t MarshalledUnityObject_Marshal_TisAudioResource_t35B84706031E4F08C928B1640B804839F4B6500A_m8A7510F96A7C2FEDF3ACF37D6363450E76D7204F_inline (AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A*, const RuntimeMethod*))MarshalledUnityObject_Marshal_TisRuntimeObject_m286B34400A212037E8EBD53DBFEAD7D23CDE8051_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_resource_Injected_m373B5772DA37F4AE5F270E8806CEBC1D745B5A20 (intptr_t ___0__unity_self, intptr_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AudioSource_get_outputAudioMixerGroup_Injected_m70C6531A161801AF2F7A81FF1C4DA9F8E6AFCD59 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
inline AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* Unmarshal_UnmarshalUnityObject_TisAudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311_m7B325C51AFA692A67E79DF9687494FC620436E94_inline (intptr_t ___0_gcHandlePtr, const RuntimeMethod* method)
{
	return ((  AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* (*) (intptr_t, const RuntimeMethod*))Unmarshal_UnmarshalUnityObject_TisRuntimeObject_m2B04FEB8E4BB254DD6F827F3111C91F2AF16D04A_gshared_inline)(___0_gcHandlePtr, method);
}
inline intptr_t MarshalledUnityObject_Marshal_TisAudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311_m1580BA03AE5DDE6E684BC285BEC86628223AA9C3_inline (AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311*, const RuntimeMethod*))MarshalledUnityObject_Marshal_TisRuntimeObject_m286B34400A212037E8EBD53DBFEAD7D23CDE8051_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_outputAudioMixerGroup_Injected_mF6ED4EDE32B3A6841560099340AE0340715B71AB (intptr_t ___0__unity_self, intptr_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayHelper_m4DE8C48925C3548BED306DAB9F87939F24A46960 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, uint64_t ___1_delay, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m8A4872F0A2680798CD28894DD28609445C4783F5 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_stopOneShots, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_Injected_m9CF82B2AA1F4CDBBE7189E07D1719933AB84065F (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_loop_Injected_m181F6FEE04B9B1170C6881D0557E1262A6335D78 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_Injected_mEF9474AF2A1FC89B8DE5B578B167E1FE3C0E00CC (intptr_t ___0__unity_self, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_playOnAwake_Injected_m565420E3F9E1462217C9FC9A8397CBF2D4CE7BA3 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_playOnAwake_Injected_m009A05A89DC8B7EDB36EA1F0CA4E49076993F9C9 (intptr_t ___0__unity_self, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_panStereo_Injected_m62DD6D7291D8B8ABA4DBCE0E6C82647859217325 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_panStereo_Injected_m25904762F062E3CEAFB4601DA7D50DF787DA009A (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_spatialBlend_Injected_m38E3C22DC86CF601C640F614ABF4E71CA7B3C49A (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spatialBlend_Injected_mE094C32E8F2B48A9D5572528C149EC784B6472A9 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_reverbZoneMix_Injected_m41F66BA4D8F69518695B2EA2CD570D9240A093E3 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_reverbZoneMix_Injected_mAC9F5CAA238372C3C6379F070874EB117F75A134 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_bypassEffects_Injected_m2B8F47F7C0A51285C85D7305A522E7F41BB31094 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_bypassEffects_Injected_mFAB7E087AFF40B29B51A11ED3390386923360636 (intptr_t ___0__unity_self, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_bypassListenerEffects_Injected_m70596B8A541E03DAB6164D00B91E6BBD55DF759A (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_bypassListenerEffects_Injected_m5BB75E2354CEB7F24344647FF02DFDACE2790135 (intptr_t ___0__unity_self, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_bypassReverbZones_Injected_mA056EFAFF724E09D11B5046E34CF011F013E66B1 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_bypassReverbZones_Injected_m08A62FDEBD429CF38FB8B2C9C848082B37866D8C (intptr_t ___0__unity_self, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_dopplerLevel_Injected_mD9E55FC833DC7685FD51BD13E6CBA91F287B9CFD (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_dopplerLevel_Injected_m171FCC5195E16921ABFEB55719E0740A7C0B7738 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_spread_Injected_mDC0ED524C3F858E66053FACB86D3315F8BD2B941 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spread_Injected_m799004919429AA85B60C5666DD76B12EACB182F6 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSource_get_priority_Injected_m7247E2704DCCA4499C3180C4605CABB3797E5A61 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_priority_Injected_m1DECF2F19AC3A66A19B1C000E0FE91C7D28172F4 (intptr_t ___0__unity_self, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_mute_Injected_m4D8D076CA9722E0035B34C469F118DF9F46BC28A (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_mute_Injected_mEA8E84A7473BD6BEDFF77B29CDA2E189B9BB2D26 (intptr_t ___0__unity_self, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_minDistance_Injected_mF30C4E16A15C3D15A99011DE5809B1271785BD7D (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_minDistance_Injected_m2F1D84F2D12AA7AA066AB97BD0BC1A4C1AA1E29A (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_maxDistance_Injected_mF2FCB83900CEF56EF70EF1E51499AD597A10FC14 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_maxDistance_Injected_m3E984A7D5F831F1D7DB85E04A4B798497F30573B (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSource_get_rolloffMode_Injected_m087D2089D6282938C9C3238E600664263B86AD8E (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_rolloffMode_Injected_mA9B6A5EE9433F188275B48FDBB720A9025801ED7 (intptr_t ___0__unity_self, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBehaviour__ctor_m6D88837496C42A746A51383F3D6F29CA72A9D309 (AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941* __this, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_inline (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_minDistance_Injected_mA5756FA9CD5D1D7EF5F7F0D5A82B0FFD9F4ABEAB (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_minDistance_Injected_m54DCFB65496741606AF9B35926E7B2EC479DFC27 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_maxDistance_Injected_m9D980FF28503A6FB68DD8B086FF24C13A1F36E15 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_maxDistance_Injected_m710ED900C7524CC61EAAF74F0676CB5C8522359E (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioReverbZone_get_reverbPreset_Injected_m5954A9098808768881ACA24D41E853D6D849CC86 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_reverbPreset_Injected_mBB71947C2366FEF910321589B7351C1BDB4DDD65 (intptr_t ___0__unity_self, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioReverbZone_get_room_Injected_mFEDEF1A03AA9F959484ED847650C34F16C9E69BB (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_room_Injected_m10FBE0046D63447E9A84D1914707D179B3F3F376 (intptr_t ___0__unity_self, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioReverbZone_get_roomHF_Injected_m82A9886CAFCB3A1885EF9EAA4B429BB6C1D4E896 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_roomHF_Injected_m5A62F6EFFDD2A6F2F35FE1712F2CD97BA5B2F206 (intptr_t ___0__unity_self, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioReverbZone_get_roomLF_Injected_m75A87396CAF6B0182696320F12FC6A0386FE3327 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_roomLF_Injected_m45219D4F89B83DD6748ADFC66E5D1214128BC7C3 (intptr_t ___0__unity_self, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_decayTime_Injected_m41D35F858569BA7495403A4FA20A726EBFDC3050 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_decayTime_Injected_m97B27BA85741558A3355729DCF07FD2B7C81D152 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_decayHFRatio_Injected_m69976273C86F5805FA68C1127C7F10426106CEEC (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_decayHFRatio_Injected_mD90CD844980858BA7DF4C3B689FDE7797863F3DB (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioReverbZone_get_reflections_Injected_m05C3491FDAD5B8038C201DD82396B55696F905E4 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_reflections_Injected_mE0B6DD585814BB178160D57B650A9C48806AF1AA (intptr_t ___0__unity_self, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_reflectionsDelay_Injected_m12EC340251F7DCC68A67AB34B54763D960101B3D (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_reflectionsDelay_Injected_m56649452A071826C002FB524C6762A41B30A9D0A (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioReverbZone_get_reverb_Injected_m27D7AFE40757B88C60618D083528C47C8E821976 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_reverb_Injected_m0C388FDB67E4D590254F089F51EA3B5419F9AB59 (intptr_t ___0__unity_self, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_reverbDelay_Injected_m5708435E98C2F2D868B81570A71C55052A0FFB02 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_reverbDelay_Injected_mF31BEA82A86D352544CFC3D42BA9D3986AB9BB21 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_HFReference_Injected_m97615ED40278A38F6AD8F5EB89547EE2CE81D21D (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_HFReference_Injected_m8128B8166B342D7D2906395150ED5E5B3A37C1A3 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_LFReference_Injected_mC68ED4F89164AFC2B680AE77E7B1063B0EBDA973 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_LFReference_Injected_m58EFF0277B95EEE8841948326848C5CB95413C22 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_diffusion_Injected_m34AA13C737D2A20EE929F3DC288F04F8F6DE038D (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_diffusion_Injected_mF1C9A98E7EA53747C7B4803B7D273A64F5400355 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_density_Injected_m24AC99B7DABF50EFF33F460296F2C6BEFC551298 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_density_Injected_m21F6E558C065E96294A298C933FBA9D4E0FA86D7 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_mCEC3E43862A35543A8ABF1EB6B11A73AE6D8E743_inline (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioLowPassFilter_get_cutoffFrequency_Injected_mB914D633D54DDD89AF0947F8BE5400391B16DE6D (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioLowPassFilter_set_cutoffFrequency_Injected_m7C27C7D313C5B93E8A3E42DDA42DE70D6B953B73 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioLowPassFilter_get_lowpassResonanceQ_Injected_m3D51DF411EF2A52E736BFC12CBEA00363DFCCD63 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioLowPassFilter_set_lowpassResonanceQ_Injected_mDF1587B1E4E014AF84B52A53286F9DB820E2EE3E (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisAudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718_m95C939B2047DBCB9744FF33FFCB56CC327F61E83_inline (AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioHighPassFilter_get_cutoffFrequency_Injected_m274ED934DFF2D8E7B58AC5883C9933ADA5CA0456 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioHighPassFilter_set_cutoffFrequency_Injected_mA4CD9FCD1419D4FCAE057612687C943D750AA2C9 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioHighPassFilter_get_highpassResonanceQ_Injected_mCD6FF2AF95429F7E57D4BF7762E9792ABC75C0D3 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioHighPassFilter_set_highpassResonanceQ_Injected_m8D5ECCD73B08E35C2F3DBA3168751DE1D9C3F193 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisAudioDistortionFilter_t7F3BAB686EC252D931F9F0C9D5711334A15AE2C2_mBCC42DA240C27D27E1FB9FEC7D803B79D7061ABA_inline (AudioDistortionFilter_t7F3BAB686EC252D931F9F0C9D5711334A15AE2C2* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (AudioDistortionFilter_t7F3BAB686EC252D931F9F0C9D5711334A15AE2C2*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioDistortionFilter_get_distortionLevel_Injected_mB23995F768158720F6DD94237940E4454B2F3D19 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioDistortionFilter_set_distortionLevel_Injected_mD3D2EE1C91234141A2F452A799411B7F3F139F83 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_inline (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioEchoFilter_get_delay_Injected_mC96DA15E9601FAFF705A363D0132F4C515116494 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEchoFilter_set_delay_Injected_mF74D328A86D7F6E30A114D4986C1A2AA1BE96626 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioEchoFilter_get_decayRatio_Injected_mE2FFD696762CB4D89071E11D7C9ED16D70431D61 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEchoFilter_set_decayRatio_Injected_m8504B994DFFABE19C9462051C9979955AE4BE8ED (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioEchoFilter_get_dryMix_Injected_m5ADD4CB48E62974A0A5D4AD8D37F8AA20AC28A72 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEchoFilter_set_dryMix_Injected_m6E10C259018C4435F639EF2A1F3019473454316C (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioEchoFilter_get_wetMix_Injected_mBFC3EC798371BD714F78FA047982158A8EB69CCE (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEchoFilter_set_wetMix_Injected_m205773C71671C2B5D79207AC616977154CA1E467 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_inline (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_dryMix_Injected_m776F6894D37A877B471BC7504B71C6D6E8E085EA (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_dryMix_Injected_m42CB3CA225A436D313B4720AA2528E9513B54B3E (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_wetMix1_Injected_m09799E9FF15F7BDD20EB809F2D66627DB93C97F2 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_wetMix1_Injected_m44A109C0CC1B9C1DCF2CCC8089282C015AE3C32E (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_wetMix2_Injected_m1D45FA99507A4206038D944FBC38EC3A20F84F49 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_wetMix2_Injected_m309BCF90CF8F860D13F0812799B8F00DE2303244 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_wetMix3_Injected_m1C0FCB4A88296125DA0FC5253A1BBD1515A145D1 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_wetMix3_Injected_m682631AAE60E2BBC3669C414EA2B9D1055F385E8 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_delay_Injected_m07C8B28899A683CDDCCD9490D3469835E6C11F39 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_delay_Injected_m2999CE020973B6B2E2279E5362E86A72D82F54D0 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_rate_Injected_mA68FE9FB1A87268F6D0CF3204C402AB09337459F (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_rate_Injected_mD20AD614E399D4A889DABD48F0B1ABD7D6732134 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_depth_Injected_m5D26CB347F23DB8A319654FFE70112893EE8FA31 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_depth_Injected_m8BB1F9D7653189572793F0383359DA890017398E (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioReverbFilter_get_reverbPreset_Injected_mEA13AD8196C2810B5D8F0E8D1C1842AF7521C029 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_reverbPreset_Injected_mFC2DADADFBD0B88CA4B08847A804D3E65AC150F5 (intptr_t ___0__unity_self, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_dryLevel_Injected_mCA5FDB36A68F0FBC55F4B0A59299256F55CCD059 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_dryLevel_Injected_mC8349217D72CB1650053872760EB1527530AFE48 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_room_Injected_m71CE65A81B636564C741C2D7A41A13E0214DFE24 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_room_Injected_mD1823614ECB2DB7A26DADCA9C6205061145454A6 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_roomHF_Injected_mCA872D4808D7129E27C62A06A3F7152F854B5001 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_roomHF_Injected_mD4FC324CD5F675DE2DFF7DE5C9B5DB41C3291432 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_decayTime_Injected_mA62CD28F54585557ABD08765CBEC9D015FA725DD (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_decayTime_Injected_m939249B52AEAB4A8554B8F3DA2AA91474806CD37 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_decayHFRatio_Injected_mDC794F81ED9D49E696B2763A78BAC5EBE77E6B9D (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_decayHFRatio_Injected_mCDAF9AD5C200E37D8C735E07C14939B201825B61 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_reflectionsLevel_Injected_mF0C07239B82EAFADEF6F375339B262C94602F3DF (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_reflectionsLevel_Injected_m839F452A44DEB6053CA020BCE471C133D55CE5DA (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_reflectionsDelay_Injected_mCC11D53E60F153FD80D24FF676945B2C8FF9A9DF (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_reflectionsDelay_Injected_m67837E9AE6E5C9C8B70863C0B2D4B92197F9DD88 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_reverbLevel_Injected_m26E5FF598A048A1125CD5FE9739CAE3C49667FCB (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_reverbLevel_Injected_m5B6278AA61B6BD4760875B4F0DCE11B1DDD28DFB (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_reverbDelay_Injected_m2BCE9EB7F05BB65989A3EADC96A1D596C7789343 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_reverbDelay_Injected_m6B3F6636557DED16E3DDCCCA5E16E1345DC99CD2 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_diffusion_Injected_m69BFC6432FC6B2605BC56BD78A7D72E76BFAD1F4 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_diffusion_Injected_m806BA1AB7CA01C53C6CEA694F90CF211C7E87DAD (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_density_Injected_m446892DDFBAC244EE844AD41D61C7160CA9556BF (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_density_Injected_mA91322C2DF2F59CCBEC2AB8CB5FA76801AF209B9 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_hfReference_Injected_m667651B4EF1D52D51C5C8C87DE456BFCB74C912C (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_hfReference_Injected_mE56526E2344B1ACDD4F1C382B8C72D650A1316D2 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_roomLF_Injected_m38B7DFCF2C0ADB44DCFFEE0FD9B89560823C4321 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_roomLF_Injected_mD6880DD456749EE29D36749925B13DCFC74E32B1 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_lfReference_Injected_mFFB4BCBD4FF3F1071DF82AFF36520D6EC2CB9BF0 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_lfReference_Injected_m2708B2EDCEEAD93C870EFAB7E77E4C5AD0BDEB95 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StringMarshaller_TryMarshalEmptyOrNullString_m615203C511071D59295D889AB136575DFFEA90A6_inline (String_t* ___0_s, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___1_managedSpanWrapper, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline (String_t* ___0_text, const RuntimeMethod* method) ;
inline Il2CppChar* ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method)
{
	return ((  Il2CppChar* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, const RuntimeMethod*))ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_gshared)(__this, method);
}
inline int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Microphone_GetMicrophoneDeviceIDFromName_Injected_mDD8E86D21DFCB9D4BA7DAE10D4A621CB7FC4106E (ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Microphone_StartRecord_Injected_m6C088832AD607E4C61DE3ABB5333196DB872CA0F (int32_t ___0_deviceID, bool ___1_loop, float ___2_lengthSec, int32_t ___3_frequency, const RuntimeMethod* method) ;
inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* Unmarshal_UnmarshalUnityObject_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mCE0FC7E07AAC00447251B3A9FF0478A38BD70191_inline (intptr_t ___0_gcHandlePtr, const RuntimeMethod* method)
{
	return ((  AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* (*) (intptr_t, const RuntimeMethod*))Unmarshal_UnmarshalUnityObject_TisRuntimeObject_m2B04FEB8E4BB254DD6F827F3111C91F2AF16D04A_gshared_inline)(___0_gcHandlePtr, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Microphone_GetMicrophoneDeviceIDFromName_mD33349A5B41E037F04802638690FBA891035C238 (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* Microphone_StartRecord_m561E1A2B878937E556D6FCABC3FE735CB818D897 (int32_t ___0_deviceID, bool ___1_loop, float ___2_lengthSec, int32_t ___3_frequency, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_EndRecord_m6F4983F3A002DA6F07F979D42D0750A1C3D16156 (int32_t ___0_deviceID, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_inline (SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_x, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipPlayable_Equals_m9C1C75ACBB74FE06AD02BE4643F6EB39413EFF83 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 ___0_other, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisAudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04_mB656C0201F2C969B922D161F4E2D27A8B077C4EC_inline (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixer_SetFloat_Injected_m07F1E9A4591C32164F5F72AC357D25A023A0634D (intptr_t ___0__unity_self, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___1_name, float ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixer_GetFloat_Injected_m2794EC0D637390AAA8773C47325038AB4ECA8F72 (intptr_t ___0__unity_self, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___1_name, float* ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixerPlayable_Equals_mDFB945EB48199A338BAD00D40FB8EEC34CF64D57 (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 AudioPlayableOutput_GetHandle_m55153D572F8FB9BCFF3843402A20280273B934AE (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8 (uint64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UIntPtr_op_Explicit_m42C3EA82465934F505B4274A7CE320550A48B7B9 (uintptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D (String_t* __this, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, Il2CppChar*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_mA5EF3ABEDD5776174AAEF4D976B58B424F43B275_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*))Span_1__ctor_mA5EF3ABEDD5776174AAEF4D976B58B424F43B275_gshared_inline)(__this, ___0_array, method);
}
inline void Span_1__ctor_m7DF6F0480C6904A216270964E3639CEA4F419C40_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m7DF6F0480C6904A216270964E3639CEA4F419C40_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Span_1_ToArray_mAAE4DC737A5BF9A5A29F336EDA790C8AFADA2CDE_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method)
{
	return ((  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* (*) (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C*, const RuntimeMethod*))Span_1_ToArray_mAAE4DC737A5BF9A5A29F336EDA790C8AFADA2CDE_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1 (void* ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindingsAllocator_FreeNativeOwnedMemory_mA10E308A850EE385485B590326E33E233CFCE656 (void* ___0_ptr, const RuntimeMethod* method) ;
inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Array_Empty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m44F781E90531F7FCDB12BC4290CD4394A887FC06_inline (const RuntimeMethod* method)
{
	return ((  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* (*) (const RuntimeMethod*))Array_Empty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m44F781E90531F7FCDB12BC4290CD4394A887FC06_gshared_inline)(method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC Unmarshal_FromIntPtrUnsafe_mB304834C5EC431CC0FBE13C6BB97066F222BC55C_inline (intptr_t ___0_gcHandle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_inline (RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (RuntimeObject*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline)(___0_obj, method);
}
inline GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_inline (intptr_t* ___0_from, const RuntimeMethod* method)
{
	return ((  GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* (*) (intptr_t*, const RuntimeMethod*))UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_gshared_inline)(___0_from, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetTarget_mE0AF851834410E2AEA6285B2497751570236C794 (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
inline void Buffer_Memmove_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8E65A20A53C662400685CE50AE11C2A80FBC6D7C (float* ___0_destination, float* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (float*, float*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8E65A20A53C662400685CE50AE11C2A80FBC6D7C_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_InvokeOnAudioConfigurationChanged_m8273D3AEB24F4C3E374238B6F699BE6696808E85 (bool ___0_deviceWasChanged, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* L_0 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioConfigurationChanged;
		V_0 = (bool)((!(((RuntimeObject*)(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* L_2 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioConfigurationChanged;
		bool L_3 = ___0_deviceWasChanged;
		NullCheck(L_2);
		AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_inline(L_2, L_3, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_InvokeOnAudioSystemShuttingDown_m1B9895D60B3267EBDEC69B9169730DBAD8325E90 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioSystemShuttingDown;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
		G_B1_0 = L_1;
	}
	{
		goto IL_0011;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0011:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_InvokeOnAudioSystemStartedUp_m7FE042936237E5BDCB20299D8C4CF583B661468C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioSystemStartedUp;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
		G_B1_0 = L_1;
	}
	{
		goto IL_0011;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0011:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSettings_StartAudioOutput_mB04D851DD0E6115DEEFB55779F880146263C67BE (const RuntimeMethod* method) 
{
	typedef bool (*AudioSettings_StartAudioOutput_mB04D851DD0E6115DEEFB55779F880146263C67BE_ftn) ();
	static AudioSettings_StartAudioOutput_mB04D851DD0E6115DEEFB55779F880146263C67BE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_StartAudioOutput_mB04D851DD0E6115DEEFB55779F880146263C67BE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::StartAudioOutput()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSettings_StopAudioOutput_m3FE7A8EADAB2FB570BB05F7C353E25E15885D1CB (const RuntimeMethod* method) 
{
	typedef bool (*AudioSettings_StopAudioOutput_m3FE7A8EADAB2FB570BB05F7C353E25E15885D1CB_ftn) ();
	static AudioSettings_StopAudioOutput_m3FE7A8EADAB2FB570BB05F7C353E25E15885D1CB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_StopAudioOutput_m3FE7A8EADAB2FB570BB05F7C353E25E15885D1CB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::StopAudioOutput()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_Multicast(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* currentDelegate = reinterpret_cast<AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_deviceWasChanged, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_OpenInst(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_deviceWasChanged, method);
}
void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_OpenStatic(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_deviceWasChanged, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177 (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	il2cppPInvokeFunc(static_cast<int32_t>(___0_deviceWasChanged));

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler__ctor_mA9827AB9472EC8EE0A0F0FC24EBC06B4740DD944 (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2 (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_deviceWasChanged, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mobile_get_muteState_m64C1E8C61537317A7F153E1A72F7D39D85DA684D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->___U3CmuteStateU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_set_muteState_m7C9A464BCA3762330E18CCAD79AF6C47B863CA02 (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_value;
		((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->___U3CmuteStateU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mobile_get_stopAudioOutputOnMute_m43EC82258D38C418353DFE19F32B51B64B18DCCA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->____stopAudioOutputOnMute;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_InvokeOnMuteStateChanged_mE5242862F948BA9FBB013A2B45F645B6A21E6198 (bool ___0_mute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		bool L_0 = ___0_mute;
		bool L_1;
		L_1 = Mobile_get_muteState_m64C1E8C61537317A7F153E1A72F7D39D85DA684D_inline(NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0053;
		}
	}
	{
		bool L_3 = ___0_mute;
		Mobile_set_muteState_m7C9A464BCA3762330E18CCAD79AF6C47B863CA02_inline(L_3, NULL);
		bool L_4;
		L_4 = Mobile_get_stopAudioOutputOnMute_m43EC82258D38C418353DFE19F32B51B64B18DCCA(NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		bool L_6;
		L_6 = Mobile_get_muteState_m64C1E8C61537317A7F153E1A72F7D39D85DA684D_inline(NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		Mobile_StopAudioOutput_m10B8CEF668EE4967D0AD1D6741B6A37540C28A46(NULL);
		goto IL_0039;
	}

IL_0033:
	{
		Mobile_StartAudioOutput_m731D1EEEE7A0D56BAADD571BA0FCAC13FB071223(NULL);
	}

IL_0039:
	{
	}

IL_003a:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8 = ((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->___OnMuteStateChanged;
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_10 = ((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->___OnMuteStateChanged;
		bool L_11 = ___0_mute;
		NullCheck(L_10);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_10, L_11, NULL);
	}

IL_0052:
	{
	}

IL_0053:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mobile_InvokeIsStopAudioOutputOnMuteEnabled_m854CB455C7BE7ADC06BABCB9AA24F60309AE7ED1 (const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = Mobile_get_stopAudioOutputOnMute_m43EC82258D38C418353DFE19F32B51B64B18DCCA(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_StartAudioOutput_m731D1EEEE7A0D56BAADD571BA0FCAC13FB071223 (const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = AudioSettings_StartAudioOutput_mB04D851DD0E6115DEEFB55779F880146263C67BE(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_StopAudioOutput_m10B8CEF668EE4967D0AD1D6741B6A37540C28A46 (const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = AudioSettings_StopAudioOutput_m3FE7A8EADAB2FB570BB05F7C353E25E15885D1CB(NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip__ctor_m038DA97CB07076D1D9391E1E103F0F41D3622F89 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_PCMReaderCallback = (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PCMReaderCallback), (void*)(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)NULL);
		__this->___m_PCMSetPositionCallback = (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PCMSetPositionCallback), (void*)(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)NULL);
		AudioResource__ctor_m67FD564B101E07B1EA22EF27F3B5FA290A9D1409(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_GetData_m2EEC857E7955326B0146BA25A730F5F76AABB1E3 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C ___1_data, int32_t ___2_samplesOffset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_GetPinnableReference_mB3EA4E5E6B70A51EC51C563EBB60BA9A8DE4D1A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mED11128A130F01BC9C5F690BFFAEF38B2283751B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5F2B3561CFA951FF37495C4B6AE6DB436EC2259);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C V_0;
	memset((&V_0), 0, sizeof(V_0));
	float* V_1 = NULL;
	ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E V_2;
	memset((&V_2), 0, sizeof(V_2));
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___0_clip;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = ___0_clip;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_1, _stringLiteralD5F2B3561CFA951FF37495C4B6AE6DB436EC2259, NULL);
	}

IL_000e:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = ___0_clip;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_inline(L_2, MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_RuntimeMethod_var);
		intptr_t L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0023;
		}
		G_B3_0 = L_4;
	}
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = ___0_clip;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_5, _stringLiteralD5F2B3561CFA951FF37495C4B6AE6DB436EC2259, NULL);
		G_B4_0 = G_B3_0;
	}

IL_0023:
	{
		Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C L_6 = ___1_data;
		V_0 = L_6;
		float* L_7;
		L_7 = Span_1_GetPinnableReference_mB3EA4E5E6B70A51EC51C563EBB60BA9A8DE4D1A0((&V_0), Span_1_GetPinnableReference_mB3EA4E5E6B70A51EC51C563EBB60BA9A8DE4D1A0_RuntimeMethod_var);
		V_1 = L_7;
		float* L_8 = V_1;
		int32_t L_9;
		L_9 = Span_1_get_Length_mED11128A130F01BC9C5F690BFFAEF38B2283751B_inline((&V_0), Span_1_get_Length_mED11128A130F01BC9C5F690BFFAEF38B2283751B_RuntimeMethod_var);
		ManagedSpanWrapper__ctor_mB29647A21BB87EA4DF859E5C2FA2207F47E525D2((&V_2), (void*)((uintptr_t)L_8), L_9, NULL);
		int32_t L_10 = ___2_samplesOffset;
		bool L_11;
		L_11 = AudioClip_GetData_Injected_mEE66FFD5CAD3D347AF4B1E103BBF1B9D073D762A(G_B4_0, (&V_2), L_10, NULL);
		V_1 = (float*)((uintptr_t)0);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AudioClip_GetName_m561BBA037957E25D5BC5A962A1AA0C789895C9D1 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0019:
			{
				ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E L_0 = V_0;
				String_t* L_1;
				L_1 = OutStringMarshaller_GetStringAndDispose_mB15D41A9893BBC55074D4910259FA722129DB062(L_0, NULL);
				V_1 = L_1;
				return;
			}
		});
		try
		{
			{
				intptr_t L_2;
				L_2 = MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_RuntimeMethod_var);
				intptr_t L_3 = L_2;
				if (L_3)
				{
					G_B2_0 = L_3;
					goto IL_000f_1;
				}
				G_B1_0 = L_3;
			}
			{
				ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
				G_B2_0 = G_B1_0;
			}

IL_000f_1:
			{
				AudioClip_GetName_Injected_m5BCF77E0928A4DE3D26C6A722DD60989AFB16DCD(G_B2_0, (&V_0), NULL);
				goto IL_0021;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0021:
	{
		String_t* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = AudioClip_get_samples_Injected_m18E5C4BD533706C80A8780D7439E151E305479F5(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = AudioClip_get_channels_Injected_mB9349B18A44BD4FE6947947DA7EC0C561E42CE78(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_GetData_m1F6480FFDA2E354A7D8C8DE40F61AAB5AF6B4A1D (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, int32_t ___1_offsetSamples, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF14C9AF44BF6092EB640C33222BE02E3655EC69C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C53570A90E7EFA87FDB7F0DCC0EE1FCC019E426);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF52B980B71426E2D226C2ED5B2045868E72F85FF);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0;
		L_0 = AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84(__this, NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_2;
		L_2 = AudioClip_GetName_m561BBA037957E25D5BC5A962A1AA0C789895C9D1(__this, NULL);
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralF52B980B71426E2D226C2ED5B2045868E72F85FF, L_2, _stringLiteral8C53570A90E7EFA87FDB7F0DCC0EE1FCC019E426, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		V_1 = (bool)0;
		goto IL_0041;
	}

IL_0031:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = ___0_data;
		Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C L_5;
		L_5 = MemoryExtensions_AsSpan_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF14C9AF44BF6092EB640C33222BE02E3655EC69C_inline(L_4, MemoryExtensions_AsSpan_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF14C9AF44BF6092EB640C33222BE02E3655EC69C_RuntimeMethod_var);
		int32_t L_6 = ___1_offsetSamples;
		bool L_7;
		L_7 = AudioClip_GetData_m2EEC857E7955326B0146BA25A730F5F76AABB1E3(__this, L_5, L_6, NULL);
		V_1 = L_7;
		goto IL_0041;
	}

IL_0041:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_InvokePCMReaderCallback_Internal_m766E5705AB5AE16F5F142867CC3758ABE4BF462C (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_0 = __this->___m_PCMReaderCallback;
		V_0 = (bool)((!(((RuntimeObject*)(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_2 = __this->___m_PCMReaderCallback;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___0_data;
		NullCheck(L_2);
		PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_inline(L_2, L_3, NULL);
	}

IL_001b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_InvokePCMSetPositionCallback_Internal_m986EF703B7DDE42343730DE93A095D05B9F4DBB8 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, int32_t ___0_position, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_0 = __this->___m_PCMSetPositionCallback;
		V_0 = (bool)((!(((RuntimeObject*)(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_2 = __this->___m_PCMSetPositionCallback;
		int32_t L_3 = ___0_position;
		NullCheck(L_2);
		PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_inline(L_2, L_3, NULL);
	}

IL_001b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_GetData_Injected_mEE66FFD5CAD3D347AF4B1E103BBF1B9D073D762A (intptr_t ___0_clip, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___1_data, int32_t ___2_samplesOffset, const RuntimeMethod* method) 
{
	typedef bool (*AudioClip_GetData_Injected_mEE66FFD5CAD3D347AF4B1E103BBF1B9D073D762A_ftn) (intptr_t, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E*, int32_t);
	static AudioClip_GetData_Injected_mEE66FFD5CAD3D347AF4B1E103BBF1B9D073D762A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_GetData_Injected_mEE66FFD5CAD3D347AF4B1E103BBF1B9D073D762A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::GetData_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&,System.Int32)");
	bool icallRetVal = _il2cpp_icall_func(___0_clip, ___1_data, ___2_samplesOffset);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_GetName_Injected_m5BCF77E0928A4DE3D26C6A722DD60989AFB16DCD (intptr_t ___0__unity_self, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___1_ret, const RuntimeMethod* method) 
{
	typedef void (*AudioClip_GetName_Injected_m5BCF77E0928A4DE3D26C6A722DD60989AFB16DCD_ftn) (intptr_t, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E*);
	static AudioClip_GetName_Injected_m5BCF77E0928A4DE3D26C6A722DD60989AFB16DCD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_GetName_Injected_m5BCF77E0928A4DE3D26C6A722DD60989AFB16DCD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::GetName_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&)");
	_il2cpp_icall_func(___0__unity_self, ___1_ret);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_Injected_m18E5C4BD533706C80A8780D7439E151E305479F5 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioClip_get_samples_Injected_m18E5C4BD533706C80A8780D7439E151E305479F5_ftn) (intptr_t);
	static AudioClip_get_samples_Injected_m18E5C4BD533706C80A8780D7439E151E305479F5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_samples_Injected_m18E5C4BD533706C80A8780D7439E151E305479F5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_samples_Injected(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_channels_Injected_mB9349B18A44BD4FE6947947DA7EC0C561E42CE78 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioClip_get_channels_Injected_mB9349B18A44BD4FE6947947DA7EC0C561E42CE78_ftn) (intptr_t);
	static AudioClip_get_channels_Injected_mB9349B18A44BD4FE6947947DA7EC0C561E42CE78_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_channels_Injected_mB9349B18A44BD4FE6947947DA7EC0C561E42CE78_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_channels_Injected(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_Multicast(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* currentDelegate = reinterpret_cast<PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_data, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_OpenInst(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method)
{
	NullCheck(___0_data);
	typedef void (*FunctionPointerType) (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_data, method);
}
void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_OpenStatic(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_data, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	float* ____0_data_marshaled = NULL;
	if (___0_data != NULL)
	{
		____0_data_marshaled = reinterpret_cast<float*>((___0_data)->GetAddressAtUnchecked(0));
	}

	il2cppPInvokeFunc(____0_data_marshaled);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMReaderCallback__ctor_mF621B6CC1A4BA6525190C5037401CF2FD5C0CF28 (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152 (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_data, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_Multicast(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* currentDelegate = reinterpret_cast<PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_position, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_OpenInst(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_position, method);
}
void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_OpenStatic(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_position, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072 (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	il2cppPInvokeFunc(___0_position);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMSetPositionCallback__ctor_mD16F77DDB552EB69BB3F5EF39420B2F09F95455B (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702 (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_position, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBehaviour__ctor_m6D88837496C42A746A51383F3D6F29CA72A9D309 (AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941* __this, const RuntimeMethod* method) 
{
	{
		Behaviour__ctor_m00422B6EFEA829BCB116D715E74F1EAD2CB6F4F8(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_GetSpectrumDataHelper_m2631C609AB0CC9ED84EB55C939EDC78456E0482F (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_samples, int32_t ___1_channel, int32_t ___2_window, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlittableArrayWrapper_Unmarshal_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m784D839177D7F17CDDD6FA7463118B5EEE65EFEC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_1 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{
				BlittableArrayWrapper_Unmarshal_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m784D839177D7F17CDDD6FA7463118B5EEE65EFEC_inline((&V_0), (&V_1), BlittableArrayWrapper_Unmarshal_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m784D839177D7F17CDDD6FA7463118B5EEE65EFEC_RuntimeMethod_var);
				SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = V_1;
				return;
			}
		});
		try
		{
			{
				SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___0_samples;
				if (!L_1)
				{
					goto IL_001b_1;
				}
			}
			{
				SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___0_samples;
				V_1 = L_2;
				SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = V_1;
				NullCheck(L_3);
				if (!(((RuntimeArray*)L_3)->max_length))
				{
					goto IL_001b_1;
				}
			}
			{
				SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = V_1;
				NullCheck(L_4);
				SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = V_1;
				NullCheck(L_5);
				BlittableArrayWrapper__ctor_mD7869B76C6745D311B8FD895EF3C29428E568971_inline((&V_0), (void*)((uintptr_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))), ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
			}

IL_001b_1:
			{
				int32_t L_6 = ___1_channel;
				int32_t L_7 = ___2_window;
				AudioListener_GetSpectrumDataHelper_Injected_m6FC86614FE46AB6C3A3E87976ACEF137CC436EBB((&V_0), L_6, L_7, NULL);
				goto IL_0033;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_GetSpectrumData_m66A3A04DD3DF8A2CBE8DE16ED2CBD9AA42EBFABC (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_samples, int32_t ___1_channel, int32_t ___2_window, const RuntimeMethod* method) 
{
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_samples;
		int32_t L_1 = ___1_channel;
		int32_t L_2 = ___2_window;
		AudioListener_GetSpectrumDataHelper_m2631C609AB0CC9ED84EB55C939EDC78456E0482F(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_GetSpectrumDataHelper_Injected_m6FC86614FE46AB6C3A3E87976ACEF137CC436EBB (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* ___0_samples, int32_t ___1_channel, int32_t ___2_window, const RuntimeMethod* method) 
{
	typedef void (*AudioListener_GetSpectrumDataHelper_Injected_m6FC86614FE46AB6C3A3E87976ACEF137CC436EBB_ftn) (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*, int32_t, int32_t);
	static AudioListener_GetSpectrumDataHelper_Injected_m6FC86614FE46AB6C3A3E87976ACEF137CC436EBB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioListener_GetSpectrumDataHelper_Injected_m6FC86614FE46AB6C3A3E87976ACEF137CC436EBB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioListener::GetSpectrumDataHelper_Injected(UnityEngine.Bindings.BlittableArrayWrapper&,System.Int32,UnityEngine.FFTWindow)");
	_il2cpp_icall_func(___0_samples, ___1_channel, ___2_window);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_GetPitch_m80F6D2BAF966F669253E9231AFCFFC303779913D (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = ___0_source;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_1, _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5, NULL);
	}

IL_000e:
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = ___0_source;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(L_2, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0023;
		}
		G_B3_0 = L_4;
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = ___0_source;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_5, _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5, NULL);
		G_B4_0 = G_B3_0;
	}

IL_0023:
	{
		float L_6;
		L_6 = AudioSource_GetPitch_Injected_m0D4A9670C9E85FD57C31AD1FF82F91CE27D8B4D6(G_B4_0, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetPitch_mE75DEDF8F37301BDA63E0F545A7A00850C24F53E (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, float ___1_pitch, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = ___0_source;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_1, _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5, NULL);
	}

IL_000e:
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = ___0_source;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(L_2, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0023;
		}
		G_B3_0 = L_4;
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = ___0_source;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_5, _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5, NULL);
		G_B4_0 = G_B3_0;
	}

IL_0023:
	{
		float L_6 = ___1_pitch;
		AudioSource_SetPitch_Injected_mDE523D3EC8E91EC01A95CDD8DCB3B3383C990AF2(G_B4_0, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayHelper_m4DE8C48925C3548BED306DAB9F87939F24A46960 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, uint64_t ___1_delay, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = ___0_source;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_1, _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5, NULL);
	}

IL_000e:
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = ___0_source;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(L_2, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0023;
		}
		G_B3_0 = L_4;
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = ___0_source;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_5, _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5, NULL);
		G_B4_0 = G_B3_0;
	}

IL_0023:
	{
		uint64_t L_6 = ___1_delay;
		AudioSource_PlayHelper_Injected_m05446E7631596FF4CEB719301AE808C954E7DFB3(G_B4_0, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m8A4872F0A2680798CD28894DD28609445C4783F5 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_stopOneShots, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2 = ___0_stopOneShots;
		AudioSource_Stop_Injected_mA49628DDBC38E8430F141A40A8E34D5CB18A6CCB(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioSource_get_volume_Injected_mF349411AE1957B030941AC3F318643E63CE9465B(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioSource_set_volume_Injected_m4A5BD8D8EEEF904031C7B543AE841472A16F43AE(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_pitch_mB1B0B8A52400B5C798BF1E644FE1C2FFA20A9863 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0;
		L_0 = AudioSource_GetPitch_m80F6D2BAF966F669253E9231AFCFFC303779913D(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		AudioSource_SetPitch_mE75DEDF8F37301BDA63E0F545A7A00850C24F53E(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSource_get_timeSamples_mF230FF8ABBD5A5250CBC487D0E0FCE286BA95B82 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = AudioSource_get_timeSamples_Injected_mBBA929888A6B297906FFE75E0016F10F9584E5B6(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A* L_0;
		L_0 = AudioSource_get_resource_mD5B7D729BFFFE3C124B84F5B09C349BAFCF242F7(__this, NULL);
		return ((AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)IsInstSealed((RuntimeObject*)L_0, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_il2cpp_TypeInfo_var));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_value, const RuntimeMethod* method) 
{
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___0_value;
		AudioSource_set_resource_m1B99F8B5226398A7FFD8681BB362EB63B9B124F3(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A* AudioSource_get_resource_mD5B7D729BFFFE3C124B84F5B09C349BAFCF242F7 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmarshal_UnmarshalUnityObject_TisAudioResource_t35B84706031E4F08C928B1640B804839F4B6500A_m2AF5A00444F02462512EC275FA16EC7B1BD73D3D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		intptr_t L_2;
		L_2 = AudioSource_get_resource_Injected_mF9AACD7830BC3BCC0AB27C8F1EF8C3E2DFAF32A9(G_B2_0, NULL);
		AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A* L_3;
		L_3 = Unmarshal_UnmarshalUnityObject_TisAudioResource_t35B84706031E4F08C928B1640B804839F4B6500A_m2AF5A00444F02462512EC275FA16EC7B1BD73D3D_inline(L_2, Unmarshal_UnmarshalUnityObject_TisAudioResource_t35B84706031E4F08C928B1640B804839F4B6500A_m2AF5A00444F02462512EC275FA16EC7B1BD73D3D_RuntimeMethod_var);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_resource_m1B99F8B5226398A7FFD8681BB362EB63B9B124F3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_Marshal_TisAudioResource_t35B84706031E4F08C928B1640B804839F4B6500A_m8A7510F96A7C2FEDF3ACF37D6363450E76D7204F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A* L_2 = ___0_value;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_Marshal_TisAudioResource_t35B84706031E4F08C928B1640B804839F4B6500A_m8A7510F96A7C2FEDF3ACF37D6363450E76D7204F_inline(L_2, MarshalledUnityObject_Marshal_TisAudioResource_t35B84706031E4F08C928B1640B804839F4B6500A_m8A7510F96A7C2FEDF3ACF37D6363450E76D7204F_RuntimeMethod_var);
		AudioSource_set_resource_Injected_m373B5772DA37F4AE5F270E8806CEBC1D745B5A20(G_B2_0, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* AudioSource_get_outputAudioMixerGroup_mE141F3A6337D84F9BD43196A28CC85D092695CAB (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmarshal_UnmarshalUnityObject_TisAudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311_m7B325C51AFA692A67E79DF9687494FC620436E94_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		intptr_t L_2;
		L_2 = AudioSource_get_outputAudioMixerGroup_Injected_m70C6531A161801AF2F7A81FF1C4DA9F8E6AFCD59(G_B2_0, NULL);
		AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* L_3;
		L_3 = Unmarshal_UnmarshalUnityObject_TisAudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311_m7B325C51AFA692A67E79DF9687494FC620436E94_inline(L_2, Unmarshal_UnmarshalUnityObject_TisAudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311_m7B325C51AFA692A67E79DF9687494FC620436E94_RuntimeMethod_var);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_outputAudioMixerGroup_m10D0A0EAE270424CD2F3BB960CFAA158D9FC24CF (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_Marshal_TisAudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311_m1580BA03AE5DDE6E684BC285BEC86628223AA9C3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* L_2 = ___0_value;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_Marshal_TisAudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311_m1580BA03AE5DDE6E684BC285BEC86628223AA9C3_inline(L_2, MarshalledUnityObject_Marshal_TisAudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311_m1580BA03AE5DDE6E684BC285BEC86628223AA9C3_RuntimeMethod_var);
		AudioSource_set_outputAudioMixerGroup_Injected_mF6ED4EDE32B3A6841560099340AE0340715B71AB(G_B2_0, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	{
		AudioSource_PlayHelper_m4DE8C48925C3548BED306DAB9F87939F24A46960(__this, ((int64_t)0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	{
		AudioSource_Stop_m8A4872F0A2680798CD28894DD28609445C4783F5(__this, (bool)1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2;
		L_2 = AudioSource_get_isPlaying_Injected_m9CF82B2AA1F4CDBBE7189E07D1719933AB84065F(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_loop_m2D83BF58E1BD1BEE4CC80413C12E761D3310FC2C (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2;
		L_2 = AudioSource_get_loop_Injected_m181F6FEE04B9B1170C6881D0557E1262A6335D78(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2 = ___0_value;
		AudioSource_set_loop_Injected_mEF9474AF2A1FC89B8DE5B578B167E1FE3C0E00CC(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_playOnAwake_mB07DE7C6BE0F5E6229FA160DA65BE8B8978BF9D1 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2;
		L_2 = AudioSource_get_playOnAwake_Injected_m565420E3F9E1462217C9FC9A8397CBF2D4CE7BA3(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_playOnAwake_m7EACC6ECEF12D7BA86A4E5A53603F1C8F9E11949 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2 = ___0_value;
		AudioSource_set_playOnAwake_Injected_m009A05A89DC8B7EDB36EA1F0CA4E49076993F9C9(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_panStereo_mEB4CE5FF235A46C8B7CE62529A9DDA75A15C2505 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioSource_get_panStereo_Injected_m62DD6D7291D8B8ABA4DBCE0E6C82647859217325(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_panStereo_mE3BA673B5F93F731114E8901355A63F07C8A54DF (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioSource_set_panStereo_Injected_m25904762F062E3CEAFB4601DA7D50DF787DA009A(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_spatialBlend_m06E7948B2813AA3EAE031BD4D1DE61A29416B1CE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioSource_get_spatialBlend_Injected_m38E3C22DC86CF601C640F614ABF4E71CA7B3C49A(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spatialBlend_mCEE7A3E87A8C146E048B2CA3413FDC7BDB7BE001 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioSource_set_spatialBlend_Injected_mE094C32E8F2B48A9D5572528C149EC784B6472A9(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_reverbZoneMix_mA1BE21696195BADD380311B236AA46314911B859 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioSource_get_reverbZoneMix_Injected_m41F66BA4D8F69518695B2EA2CD570D9240A093E3(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_reverbZoneMix_m0AD755F3841952B06F87767F97CA93E2C9545D1E (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioSource_set_reverbZoneMix_Injected_mAC9F5CAA238372C3C6379F070874EB117F75A134(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_bypassEffects_m0172FACE00674F743A70870EB138B3223D42A35E (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2;
		L_2 = AudioSource_get_bypassEffects_Injected_m2B8F47F7C0A51285C85D7305A522E7F41BB31094(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_bypassEffects_m56E81C34448803D4B63105071D96AC644CFFEA9A (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2 = ___0_value;
		AudioSource_set_bypassEffects_Injected_mFAB7E087AFF40B29B51A11ED3390386923360636(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_bypassListenerEffects_m47CE7EC60DB5D13E4D818CFA6D5E1B9D6134EF02 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2;
		L_2 = AudioSource_get_bypassListenerEffects_Injected_m70596B8A541E03DAB6164D00B91E6BBD55DF759A(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_bypassListenerEffects_m321403F18B6174D2E91D080DBF5090C29BC11899 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2 = ___0_value;
		AudioSource_set_bypassListenerEffects_Injected_m5BB75E2354CEB7F24344647FF02DFDACE2790135(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_bypassReverbZones_mA640A5F9FF8E52777CF13950D966839729D1B3DF (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2;
		L_2 = AudioSource_get_bypassReverbZones_Injected_mA056EFAFF724E09D11B5046E34CF011F013E66B1(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_bypassReverbZones_m900FD2BA30F36243B5A5B872B0D019CBAB6AC410 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2 = ___0_value;
		AudioSource_set_bypassReverbZones_Injected_m08A62FDEBD429CF38FB8B2C9C848082B37866D8C(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_dopplerLevel_m7BF6F31D1E8927E059BC87933AD9B81D63AF97BE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioSource_get_dopplerLevel_Injected_mD9E55FC833DC7685FD51BD13E6CBA91F287B9CFD(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_dopplerLevel_mB9AC5164E5AF16ACECA3B8E29F5C8573C37E40D6 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioSource_set_dopplerLevel_Injected_m171FCC5195E16921ABFEB55719E0740A7C0B7738(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_spread_mC21DF6C651AD67BEB5D721F0EA0B2F3B080F4C77 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioSource_get_spread_Injected_mDC0ED524C3F858E66053FACB86D3315F8BD2B941(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spread_mDFBC1BF11837C26EF9763A8DEEFC56AF95F6E83F (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioSource_set_spread_Injected_m799004919429AA85B60C5666DD76B12EACB182F6(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSource_get_priority_mD4B6D16F6BCB1D5ACA3F2CC096EDA8861DA66881 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = AudioSource_get_priority_Injected_m7247E2704DCCA4499C3180C4605CABB3797E5A61(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_priority_mD1AB7ED858D8A1233642F5DBA81AEFBE35DD4B40 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2 = ___0_value;
		AudioSource_set_priority_Injected_m1DECF2F19AC3A66A19B1C000E0FE91C7D28172F4(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_mute_mE23745FC15F1105556CB7590CA651628FC562DBD (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2;
		L_2 = AudioSource_get_mute_Injected_m4D8D076CA9722E0035B34C469F118DF9F46BC28A(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_mute_m6407E0AEE7F088AC69BD8C1D270C2B2049769B09 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2 = ___0_value;
		AudioSource_set_mute_Injected_mEA8E84A7473BD6BEDFF77B29CDA2E189B9BB2D26(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_minDistance_m459BE399BBBEA04CBBCF50CFB15A09CB3D7431F0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioSource_get_minDistance_Injected_mF30C4E16A15C3D15A99011DE5809B1271785BD7D(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_minDistance_m6CBE3A60C03C0F179192FBDD62095B2E9D717690 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioSource_set_minDistance_Injected_m2F1D84F2D12AA7AA066AB97BD0BC1A4C1AA1E29A(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_maxDistance_m8C31CB391B999C8D344EFF0AFB8E20488F7A5F7E (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioSource_get_maxDistance_Injected_mF2FCB83900CEF56EF70EF1E51499AD597A10FC14(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_maxDistance_m4BF310D54761500A77A6C4841A0BBDBD09225813 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioSource_set_maxDistance_Injected_m3E984A7D5F831F1D7DB85E04A4B798497F30573B(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSource_get_rolloffMode_m1D5F4CCF83174583ACF0C365051E58978ED02CFD (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = AudioSource_get_rolloffMode_Injected_m087D2089D6282938C9C3238E600664263B86AD8E(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_rolloffMode_m441D9552D8648D6040E66EE2C2650A79DC5E6FB4 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2 = ___0_value;
		AudioSource_set_rolloffMode_Injected_mA9B6A5EE9433F188275B48FDBB720A9025801ED7(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource__ctor_mC67BD65374AC3CDFB702307F4A89932D803191C1 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	{
		AudioBehaviour__ctor_m6D88837496C42A746A51383F3D6F29CA72A9D309(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_GetPitch_Injected_m0D4A9670C9E85FD57C31AD1FF82F91CE27D8B4D6 (intptr_t ___0_source, const RuntimeMethod* method) 
{
	typedef float (*AudioSource_GetPitch_Injected_m0D4A9670C9E85FD57C31AD1FF82F91CE27D8B4D6_ftn) (intptr_t);
	static AudioSource_GetPitch_Injected_m0D4A9670C9E85FD57C31AD1FF82F91CE27D8B4D6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_GetPitch_Injected_m0D4A9670C9E85FD57C31AD1FF82F91CE27D8B4D6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::GetPitch_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0_source);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetPitch_Injected_mDE523D3EC8E91EC01A95CDD8DCB3B3383C990AF2 (intptr_t ___0_source, float ___1_pitch, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_SetPitch_Injected_mDE523D3EC8E91EC01A95CDD8DCB3B3383C990AF2_ftn) (intptr_t, float);
	static AudioSource_SetPitch_Injected_mDE523D3EC8E91EC01A95CDD8DCB3B3383C990AF2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_SetPitch_Injected_mDE523D3EC8E91EC01A95CDD8DCB3B3383C990AF2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::SetPitch_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0_source, ___1_pitch);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayHelper_Injected_m05446E7631596FF4CEB719301AE808C954E7DFB3 (intptr_t ___0_source, uint64_t ___1_delay, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_PlayHelper_Injected_m05446E7631596FF4CEB719301AE808C954E7DFB3_ftn) (intptr_t, uint64_t);
	static AudioSource_PlayHelper_Injected_m05446E7631596FF4CEB719301AE808C954E7DFB3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_PlayHelper_Injected_m05446E7631596FF4CEB719301AE808C954E7DFB3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::PlayHelper_Injected(System.IntPtr,System.UInt64)");
	_il2cpp_icall_func(___0_source, ___1_delay);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_Injected_mA49628DDBC38E8430F141A40A8E34D5CB18A6CCB (intptr_t ___0__unity_self, bool ___1_stopOneShots, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_Stop_Injected_mA49628DDBC38E8430F141A40A8E34D5CB18A6CCB_ftn) (intptr_t, bool);
	static AudioSource_Stop_Injected_mA49628DDBC38E8430F141A40A8E34D5CB18A6CCB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Stop_Injected_mA49628DDBC38E8430F141A40A8E34D5CB18A6CCB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Stop_Injected(System.IntPtr,System.Boolean)");
	_il2cpp_icall_func(___0__unity_self, ___1_stopOneShots);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_Injected_mF349411AE1957B030941AC3F318643E63CE9465B (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioSource_get_volume_Injected_mF349411AE1957B030941AC3F318643E63CE9465B_ftn) (intptr_t);
	static AudioSource_get_volume_Injected_mF349411AE1957B030941AC3F318643E63CE9465B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_volume_Injected_mF349411AE1957B030941AC3F318643E63CE9465B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_volume_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_Injected_m4A5BD8D8EEEF904031C7B543AE841472A16F43AE (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_volume_Injected_m4A5BD8D8EEEF904031C7B543AE841472A16F43AE_ftn) (intptr_t, float);
	static AudioSource_set_volume_Injected_m4A5BD8D8EEEF904031C7B543AE841472A16F43AE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_volume_Injected_m4A5BD8D8EEEF904031C7B543AE841472A16F43AE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_volume_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSource_get_timeSamples_Injected_mBBA929888A6B297906FFE75E0016F10F9584E5B6 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioSource_get_timeSamples_Injected_mBBA929888A6B297906FFE75E0016F10F9584E5B6_ftn) (intptr_t);
	static AudioSource_get_timeSamples_Injected_mBBA929888A6B297906FFE75E0016F10F9584E5B6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_timeSamples_Injected_mBBA929888A6B297906FFE75E0016F10F9584E5B6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_timeSamples_Injected(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AudioSource_get_resource_Injected_mF9AACD7830BC3BCC0AB27C8F1EF8C3E2DFAF32A9 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef intptr_t (*AudioSource_get_resource_Injected_mF9AACD7830BC3BCC0AB27C8F1EF8C3E2DFAF32A9_ftn) (intptr_t);
	static AudioSource_get_resource_Injected_mF9AACD7830BC3BCC0AB27C8F1EF8C3E2DFAF32A9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_resource_Injected_mF9AACD7830BC3BCC0AB27C8F1EF8C3E2DFAF32A9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_resource_Injected(System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_resource_Injected_m373B5772DA37F4AE5F270E8806CEBC1D745B5A20 (intptr_t ___0__unity_self, intptr_t ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_resource_Injected_m373B5772DA37F4AE5F270E8806CEBC1D745B5A20_ftn) (intptr_t, intptr_t);
	static AudioSource_set_resource_Injected_m373B5772DA37F4AE5F270E8806CEBC1D745B5A20_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_resource_Injected_m373B5772DA37F4AE5F270E8806CEBC1D745B5A20_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_resource_Injected(System.IntPtr,System.IntPtr)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AudioSource_get_outputAudioMixerGroup_Injected_m70C6531A161801AF2F7A81FF1C4DA9F8E6AFCD59 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef intptr_t (*AudioSource_get_outputAudioMixerGroup_Injected_m70C6531A161801AF2F7A81FF1C4DA9F8E6AFCD59_ftn) (intptr_t);
	static AudioSource_get_outputAudioMixerGroup_Injected_m70C6531A161801AF2F7A81FF1C4DA9F8E6AFCD59_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_outputAudioMixerGroup_Injected_m70C6531A161801AF2F7A81FF1C4DA9F8E6AFCD59_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_outputAudioMixerGroup_Injected(System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_outputAudioMixerGroup_Injected_mF6ED4EDE32B3A6841560099340AE0340715B71AB (intptr_t ___0__unity_self, intptr_t ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_outputAudioMixerGroup_Injected_mF6ED4EDE32B3A6841560099340AE0340715B71AB_ftn) (intptr_t, intptr_t);
	static AudioSource_set_outputAudioMixerGroup_Injected_mF6ED4EDE32B3A6841560099340AE0340715B71AB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_outputAudioMixerGroup_Injected_mF6ED4EDE32B3A6841560099340AE0340715B71AB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_outputAudioMixerGroup_Injected(System.IntPtr,System.IntPtr)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_Injected_m9CF82B2AA1F4CDBBE7189E07D1719933AB84065F (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_get_isPlaying_Injected_m9CF82B2AA1F4CDBBE7189E07D1719933AB84065F_ftn) (intptr_t);
	static AudioSource_get_isPlaying_Injected_m9CF82B2AA1F4CDBBE7189E07D1719933AB84065F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_isPlaying_Injected_m9CF82B2AA1F4CDBBE7189E07D1719933AB84065F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_isPlaying_Injected(System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_loop_Injected_m181F6FEE04B9B1170C6881D0557E1262A6335D78 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_get_loop_Injected_m181F6FEE04B9B1170C6881D0557E1262A6335D78_ftn) (intptr_t);
	static AudioSource_get_loop_Injected_m181F6FEE04B9B1170C6881D0557E1262A6335D78_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_loop_Injected_m181F6FEE04B9B1170C6881D0557E1262A6335D78_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_loop_Injected(System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_Injected_mEF9474AF2A1FC89B8DE5B578B167E1FE3C0E00CC (intptr_t ___0__unity_self, bool ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_loop_Injected_mEF9474AF2A1FC89B8DE5B578B167E1FE3C0E00CC_ftn) (intptr_t, bool);
	static AudioSource_set_loop_Injected_mEF9474AF2A1FC89B8DE5B578B167E1FE3C0E00CC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_loop_Injected_mEF9474AF2A1FC89B8DE5B578B167E1FE3C0E00CC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_loop_Injected(System.IntPtr,System.Boolean)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_playOnAwake_Injected_m565420E3F9E1462217C9FC9A8397CBF2D4CE7BA3 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_get_playOnAwake_Injected_m565420E3F9E1462217C9FC9A8397CBF2D4CE7BA3_ftn) (intptr_t);
	static AudioSource_get_playOnAwake_Injected_m565420E3F9E1462217C9FC9A8397CBF2D4CE7BA3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_playOnAwake_Injected_m565420E3F9E1462217C9FC9A8397CBF2D4CE7BA3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_playOnAwake_Injected(System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_playOnAwake_Injected_m009A05A89DC8B7EDB36EA1F0CA4E49076993F9C9 (intptr_t ___0__unity_self, bool ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_playOnAwake_Injected_m009A05A89DC8B7EDB36EA1F0CA4E49076993F9C9_ftn) (intptr_t, bool);
	static AudioSource_set_playOnAwake_Injected_m009A05A89DC8B7EDB36EA1F0CA4E49076993F9C9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_playOnAwake_Injected_m009A05A89DC8B7EDB36EA1F0CA4E49076993F9C9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_playOnAwake_Injected(System.IntPtr,System.Boolean)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_panStereo_Injected_m62DD6D7291D8B8ABA4DBCE0E6C82647859217325 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioSource_get_panStereo_Injected_m62DD6D7291D8B8ABA4DBCE0E6C82647859217325_ftn) (intptr_t);
	static AudioSource_get_panStereo_Injected_m62DD6D7291D8B8ABA4DBCE0E6C82647859217325_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_panStereo_Injected_m62DD6D7291D8B8ABA4DBCE0E6C82647859217325_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_panStereo_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_panStereo_Injected_m25904762F062E3CEAFB4601DA7D50DF787DA009A (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_panStereo_Injected_m25904762F062E3CEAFB4601DA7D50DF787DA009A_ftn) (intptr_t, float);
	static AudioSource_set_panStereo_Injected_m25904762F062E3CEAFB4601DA7D50DF787DA009A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_panStereo_Injected_m25904762F062E3CEAFB4601DA7D50DF787DA009A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_panStereo_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_spatialBlend_Injected_m38E3C22DC86CF601C640F614ABF4E71CA7B3C49A (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioSource_get_spatialBlend_Injected_m38E3C22DC86CF601C640F614ABF4E71CA7B3C49A_ftn) (intptr_t);
	static AudioSource_get_spatialBlend_Injected_m38E3C22DC86CF601C640F614ABF4E71CA7B3C49A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_spatialBlend_Injected_m38E3C22DC86CF601C640F614ABF4E71CA7B3C49A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_spatialBlend_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spatialBlend_Injected_mE094C32E8F2B48A9D5572528C149EC784B6472A9 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_spatialBlend_Injected_mE094C32E8F2B48A9D5572528C149EC784B6472A9_ftn) (intptr_t, float);
	static AudioSource_set_spatialBlend_Injected_mE094C32E8F2B48A9D5572528C149EC784B6472A9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_spatialBlend_Injected_mE094C32E8F2B48A9D5572528C149EC784B6472A9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_spatialBlend_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_reverbZoneMix_Injected_m41F66BA4D8F69518695B2EA2CD570D9240A093E3 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioSource_get_reverbZoneMix_Injected_m41F66BA4D8F69518695B2EA2CD570D9240A093E3_ftn) (intptr_t);
	static AudioSource_get_reverbZoneMix_Injected_m41F66BA4D8F69518695B2EA2CD570D9240A093E3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_reverbZoneMix_Injected_m41F66BA4D8F69518695B2EA2CD570D9240A093E3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_reverbZoneMix_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_reverbZoneMix_Injected_mAC9F5CAA238372C3C6379F070874EB117F75A134 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_reverbZoneMix_Injected_mAC9F5CAA238372C3C6379F070874EB117F75A134_ftn) (intptr_t, float);
	static AudioSource_set_reverbZoneMix_Injected_mAC9F5CAA238372C3C6379F070874EB117F75A134_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_reverbZoneMix_Injected_mAC9F5CAA238372C3C6379F070874EB117F75A134_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_reverbZoneMix_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_bypassEffects_Injected_m2B8F47F7C0A51285C85D7305A522E7F41BB31094 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_get_bypassEffects_Injected_m2B8F47F7C0A51285C85D7305A522E7F41BB31094_ftn) (intptr_t);
	static AudioSource_get_bypassEffects_Injected_m2B8F47F7C0A51285C85D7305A522E7F41BB31094_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_bypassEffects_Injected_m2B8F47F7C0A51285C85D7305A522E7F41BB31094_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_bypassEffects_Injected(System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_bypassEffects_Injected_mFAB7E087AFF40B29B51A11ED3390386923360636 (intptr_t ___0__unity_self, bool ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_bypassEffects_Injected_mFAB7E087AFF40B29B51A11ED3390386923360636_ftn) (intptr_t, bool);
	static AudioSource_set_bypassEffects_Injected_mFAB7E087AFF40B29B51A11ED3390386923360636_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_bypassEffects_Injected_mFAB7E087AFF40B29B51A11ED3390386923360636_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_bypassEffects_Injected(System.IntPtr,System.Boolean)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_bypassListenerEffects_Injected_m70596B8A541E03DAB6164D00B91E6BBD55DF759A (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_get_bypassListenerEffects_Injected_m70596B8A541E03DAB6164D00B91E6BBD55DF759A_ftn) (intptr_t);
	static AudioSource_get_bypassListenerEffects_Injected_m70596B8A541E03DAB6164D00B91E6BBD55DF759A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_bypassListenerEffects_Injected_m70596B8A541E03DAB6164D00B91E6BBD55DF759A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_bypassListenerEffects_Injected(System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_bypassListenerEffects_Injected_m5BB75E2354CEB7F24344647FF02DFDACE2790135 (intptr_t ___0__unity_self, bool ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_bypassListenerEffects_Injected_m5BB75E2354CEB7F24344647FF02DFDACE2790135_ftn) (intptr_t, bool);
	static AudioSource_set_bypassListenerEffects_Injected_m5BB75E2354CEB7F24344647FF02DFDACE2790135_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_bypassListenerEffects_Injected_m5BB75E2354CEB7F24344647FF02DFDACE2790135_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_bypassListenerEffects_Injected(System.IntPtr,System.Boolean)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_bypassReverbZones_Injected_mA056EFAFF724E09D11B5046E34CF011F013E66B1 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_get_bypassReverbZones_Injected_mA056EFAFF724E09D11B5046E34CF011F013E66B1_ftn) (intptr_t);
	static AudioSource_get_bypassReverbZones_Injected_mA056EFAFF724E09D11B5046E34CF011F013E66B1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_bypassReverbZones_Injected_mA056EFAFF724E09D11B5046E34CF011F013E66B1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_bypassReverbZones_Injected(System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_bypassReverbZones_Injected_m08A62FDEBD429CF38FB8B2C9C848082B37866D8C (intptr_t ___0__unity_self, bool ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_bypassReverbZones_Injected_m08A62FDEBD429CF38FB8B2C9C848082B37866D8C_ftn) (intptr_t, bool);
	static AudioSource_set_bypassReverbZones_Injected_m08A62FDEBD429CF38FB8B2C9C848082B37866D8C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_bypassReverbZones_Injected_m08A62FDEBD429CF38FB8B2C9C848082B37866D8C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_bypassReverbZones_Injected(System.IntPtr,System.Boolean)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_dopplerLevel_Injected_mD9E55FC833DC7685FD51BD13E6CBA91F287B9CFD (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioSource_get_dopplerLevel_Injected_mD9E55FC833DC7685FD51BD13E6CBA91F287B9CFD_ftn) (intptr_t);
	static AudioSource_get_dopplerLevel_Injected_mD9E55FC833DC7685FD51BD13E6CBA91F287B9CFD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_dopplerLevel_Injected_mD9E55FC833DC7685FD51BD13E6CBA91F287B9CFD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_dopplerLevel_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_dopplerLevel_Injected_m171FCC5195E16921ABFEB55719E0740A7C0B7738 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_dopplerLevel_Injected_m171FCC5195E16921ABFEB55719E0740A7C0B7738_ftn) (intptr_t, float);
	static AudioSource_set_dopplerLevel_Injected_m171FCC5195E16921ABFEB55719E0740A7C0B7738_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_dopplerLevel_Injected_m171FCC5195E16921ABFEB55719E0740A7C0B7738_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_dopplerLevel_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_spread_Injected_mDC0ED524C3F858E66053FACB86D3315F8BD2B941 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioSource_get_spread_Injected_mDC0ED524C3F858E66053FACB86D3315F8BD2B941_ftn) (intptr_t);
	static AudioSource_get_spread_Injected_mDC0ED524C3F858E66053FACB86D3315F8BD2B941_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_spread_Injected_mDC0ED524C3F858E66053FACB86D3315F8BD2B941_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_spread_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spread_Injected_m799004919429AA85B60C5666DD76B12EACB182F6 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_spread_Injected_m799004919429AA85B60C5666DD76B12EACB182F6_ftn) (intptr_t, float);
	static AudioSource_set_spread_Injected_m799004919429AA85B60C5666DD76B12EACB182F6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_spread_Injected_m799004919429AA85B60C5666DD76B12EACB182F6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_spread_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSource_get_priority_Injected_m7247E2704DCCA4499C3180C4605CABB3797E5A61 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioSource_get_priority_Injected_m7247E2704DCCA4499C3180C4605CABB3797E5A61_ftn) (intptr_t);
	static AudioSource_get_priority_Injected_m7247E2704DCCA4499C3180C4605CABB3797E5A61_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_priority_Injected_m7247E2704DCCA4499C3180C4605CABB3797E5A61_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_priority_Injected(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_priority_Injected_m1DECF2F19AC3A66A19B1C000E0FE91C7D28172F4 (intptr_t ___0__unity_self, int32_t ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_priority_Injected_m1DECF2F19AC3A66A19B1C000E0FE91C7D28172F4_ftn) (intptr_t, int32_t);
	static AudioSource_set_priority_Injected_m1DECF2F19AC3A66A19B1C000E0FE91C7D28172F4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_priority_Injected_m1DECF2F19AC3A66A19B1C000E0FE91C7D28172F4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_priority_Injected(System.IntPtr,System.Int32)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_mute_Injected_m4D8D076CA9722E0035B34C469F118DF9F46BC28A (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_get_mute_Injected_m4D8D076CA9722E0035B34C469F118DF9F46BC28A_ftn) (intptr_t);
	static AudioSource_get_mute_Injected_m4D8D076CA9722E0035B34C469F118DF9F46BC28A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_mute_Injected_m4D8D076CA9722E0035B34C469F118DF9F46BC28A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_mute_Injected(System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_mute_Injected_mEA8E84A7473BD6BEDFF77B29CDA2E189B9BB2D26 (intptr_t ___0__unity_self, bool ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_mute_Injected_mEA8E84A7473BD6BEDFF77B29CDA2E189B9BB2D26_ftn) (intptr_t, bool);
	static AudioSource_set_mute_Injected_mEA8E84A7473BD6BEDFF77B29CDA2E189B9BB2D26_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_mute_Injected_mEA8E84A7473BD6BEDFF77B29CDA2E189B9BB2D26_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_mute_Injected(System.IntPtr,System.Boolean)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_minDistance_Injected_mF30C4E16A15C3D15A99011DE5809B1271785BD7D (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioSource_get_minDistance_Injected_mF30C4E16A15C3D15A99011DE5809B1271785BD7D_ftn) (intptr_t);
	static AudioSource_get_minDistance_Injected_mF30C4E16A15C3D15A99011DE5809B1271785BD7D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_minDistance_Injected_mF30C4E16A15C3D15A99011DE5809B1271785BD7D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_minDistance_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_minDistance_Injected_m2F1D84F2D12AA7AA066AB97BD0BC1A4C1AA1E29A (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_minDistance_Injected_m2F1D84F2D12AA7AA066AB97BD0BC1A4C1AA1E29A_ftn) (intptr_t, float);
	static AudioSource_set_minDistance_Injected_m2F1D84F2D12AA7AA066AB97BD0BC1A4C1AA1E29A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_minDistance_Injected_m2F1D84F2D12AA7AA066AB97BD0BC1A4C1AA1E29A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_minDistance_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_maxDistance_Injected_mF2FCB83900CEF56EF70EF1E51499AD597A10FC14 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioSource_get_maxDistance_Injected_mF2FCB83900CEF56EF70EF1E51499AD597A10FC14_ftn) (intptr_t);
	static AudioSource_get_maxDistance_Injected_mF2FCB83900CEF56EF70EF1E51499AD597A10FC14_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_maxDistance_Injected_mF2FCB83900CEF56EF70EF1E51499AD597A10FC14_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_maxDistance_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_maxDistance_Injected_m3E984A7D5F831F1D7DB85E04A4B798497F30573B (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_maxDistance_Injected_m3E984A7D5F831F1D7DB85E04A4B798497F30573B_ftn) (intptr_t, float);
	static AudioSource_set_maxDistance_Injected_m3E984A7D5F831F1D7DB85E04A4B798497F30573B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_maxDistance_Injected_m3E984A7D5F831F1D7DB85E04A4B798497F30573B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_maxDistance_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSource_get_rolloffMode_Injected_m087D2089D6282938C9C3238E600664263B86AD8E (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioSource_get_rolloffMode_Injected_m087D2089D6282938C9C3238E600664263B86AD8E_ftn) (intptr_t);
	static AudioSource_get_rolloffMode_Injected_m087D2089D6282938C9C3238E600664263B86AD8E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_rolloffMode_Injected_m087D2089D6282938C9C3238E600664263B86AD8E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_rolloffMode_Injected(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_rolloffMode_Injected_mA9B6A5EE9433F188275B48FDBB720A9025801ED7 (intptr_t ___0__unity_self, int32_t ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_rolloffMode_Injected_mA9B6A5EE9433F188275B48FDBB720A9025801ED7_ftn) (intptr_t, int32_t);
	static AudioSource_set_rolloffMode_Injected_mA9B6A5EE9433F188275B48FDBB720A9025801ED7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_rolloffMode_Injected_mA9B6A5EE9433F188275B48FDBB720A9025801ED7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_rolloffMode_Injected(System.IntPtr,UnityEngine.AudioRolloffMode)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_minDistance_m604DC4E7952CCD3F231FC918873D3167AD536201 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbZone_get_minDistance_Injected_mA5756FA9CD5D1D7EF5F7F0D5A82B0FFD9F4ABEAB(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_minDistance_m0C9EE04712E8925D4451B08028B09A127F003893 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbZone_set_minDistance_Injected_m54DCFB65496741606AF9B35926E7B2EC479DFC27(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_maxDistance_mD167A784DD3B68E0BD87BA4F427571F38FCC49BF (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbZone_get_maxDistance_Injected_m9D980FF28503A6FB68DD8B086FF24C13A1F36E15(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_maxDistance_m76A445B58F9F590441660048A23CF87B5136178F (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbZone_set_maxDistance_Injected_m710ED900C7524CC61EAAF74F0676CB5C8522359E(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioReverbZone_get_reverbPreset_m64434E787D94B9B94E4B71E9B1F367B89DA10DE0 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = AudioReverbZone_get_reverbPreset_Injected_m5954A9098808768881ACA24D41E853D6D849CC86(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_reverbPreset_m06D572EC66CD0366B231EEA444C510039E932508 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2 = ___0_value;
		AudioReverbZone_set_reverbPreset_Injected_mBB71947C2366FEF910321589B7351C1BDB4DDD65(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioReverbZone_get_room_m177AE0751D1D4E24F0872FF14628635CFCA25638 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = AudioReverbZone_get_room_Injected_mFEDEF1A03AA9F959484ED847650C34F16C9E69BB(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_room_m4A6D908E887AFF48B17A4D714D90405A77DCDA23 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2 = ___0_value;
		AudioReverbZone_set_room_Injected_m10FBE0046D63447E9A84D1914707D179B3F3F376(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioReverbZone_get_roomHF_m366BB86E42585AE62C2DF751981B81E8A507FA8B (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = AudioReverbZone_get_roomHF_Injected_m82A9886CAFCB3A1885EF9EAA4B429BB6C1D4E896(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_roomHF_m5719F85D38ACCA7E2EF3D2FE0E51118B18FD7730 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2 = ___0_value;
		AudioReverbZone_set_roomHF_Injected_m5A62F6EFFDD2A6F2F35FE1712F2CD97BA5B2F206(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioReverbZone_get_roomLF_mC0D33BDFF54FE6E613C2BF4FCEB535F14B3B642E (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = AudioReverbZone_get_roomLF_Injected_m75A87396CAF6B0182696320F12FC6A0386FE3327(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_roomLF_m7CBC3E5E5F63314FF913864B6E97EC33855FD149 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2 = ___0_value;
		AudioReverbZone_set_roomLF_Injected_m45219D4F89B83DD6748ADFC66E5D1214128BC7C3(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_decayTime_mFE6375F34E3EF5CF17421EA6CDAC6A04607D0019 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbZone_get_decayTime_Injected_m41D35F858569BA7495403A4FA20A726EBFDC3050(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_decayTime_mEC8A1C062306166C8DF04BE7E3B9EE9DBCA61EAE (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbZone_set_decayTime_Injected_m97B27BA85741558A3355729DCF07FD2B7C81D152(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_decayHFRatio_mB838649CAF924734973B5D32F021AC038E466B3F (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbZone_get_decayHFRatio_Injected_m69976273C86F5805FA68C1127C7F10426106CEEC(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_decayHFRatio_m11530DE7EEB8C8040285FCE7E7BA945B0783036D (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbZone_set_decayHFRatio_Injected_mD90CD844980858BA7DF4C3B689FDE7797863F3DB(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioReverbZone_get_reflections_mA327CC41BCAE9737DAAF9ECDB6953041F6F27A95 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = AudioReverbZone_get_reflections_Injected_m05C3491FDAD5B8038C201DD82396B55696F905E4(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_reflections_m8D1A6EF3D58D3B0B3F3A8627AE1C49A492377D43 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2 = ___0_value;
		AudioReverbZone_set_reflections_Injected_mE0B6DD585814BB178160D57B650A9C48806AF1AA(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_reflectionsDelay_m25AD8A786CB391F409489591A7A10454C5D7AB13 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbZone_get_reflectionsDelay_Injected_m12EC340251F7DCC68A67AB34B54763D960101B3D(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_reflectionsDelay_m888146187B34E8ECD770C5E0A5C59D886FF6CFF6 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbZone_set_reflectionsDelay_Injected_m56649452A071826C002FB524C6762A41B30A9D0A(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioReverbZone_get_reverb_m7237DD1B544F18802FC34B8717A337608B40900B (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = AudioReverbZone_get_reverb_Injected_m27D7AFE40757B88C60618D083528C47C8E821976(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_reverb_mB3FA34C7B13C292E99FE5DE31DDF767954F9C3A3 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2 = ___0_value;
		AudioReverbZone_set_reverb_Injected_m0C388FDB67E4D590254F089F51EA3B5419F9AB59(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_reverbDelay_m8FE5034FC1BD0F18D3C032B5FA4EAB6B00EF50F4 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbZone_get_reverbDelay_Injected_m5708435E98C2F2D868B81570A71C55052A0FFB02(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_reverbDelay_m19CB45AD5F697D28AD05D5917A7157BD92816F21 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbZone_set_reverbDelay_Injected_mF31BEA82A86D352544CFC3D42BA9D3986AB9BB21(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_HFReference_m8449C3C5D8436EA4832CD86317C0DD66F7875B8B (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbZone_get_HFReference_Injected_m97615ED40278A38F6AD8F5EB89547EE2CE81D21D(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_HFReference_m331EC64325F258615093855990B8B3181099B517 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbZone_set_HFReference_Injected_m8128B8166B342D7D2906395150ED5E5B3A37C1A3(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_LFReference_mA7BDD93A2FB05546DBB00E29696D905B5F89829D (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbZone_get_LFReference_Injected_mC68ED4F89164AFC2B680AE77E7B1063B0EBDA973(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_LFReference_mD790C9855FC151F399990DED609153983EAE4D38 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbZone_set_LFReference_Injected_m58EFF0277B95EEE8841948326848C5CB95413C22(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_diffusion_mD41B0A5AB6A954AF9453FFD4CA56DE1E99112F81 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbZone_get_diffusion_Injected_m34AA13C737D2A20EE929F3DC288F04F8F6DE038D(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_diffusion_mEBE6DD85D505213B5C017ED539EAAD8897043BAC (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbZone_set_diffusion_Injected_mF1C9A98E7EA53747C7B4803B7D273A64F5400355(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_density_m2735C507661A18EDA8DF843A610AC425A8AA05EF (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbZone_get_density_Injected_m24AC99B7DABF50EFF33F460296F2C6BEFC551298(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_density_mD0AB2B4E9E31D3C30446F5D927E7A4D1B3E6661A (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835_m678BED0243B19229ACC7AEA1E7DED0E335A6F945_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbZone_set_density_Injected_m21F6E558C065E96294A298C933FBA9D4E0FA86D7(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_minDistance_Injected_mA5756FA9CD5D1D7EF5F7F0D5A82B0FFD9F4ABEAB (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbZone_get_minDistance_Injected_mA5756FA9CD5D1D7EF5F7F0D5A82B0FFD9F4ABEAB_ftn) (intptr_t);
	static AudioReverbZone_get_minDistance_Injected_mA5756FA9CD5D1D7EF5F7F0D5A82B0FFD9F4ABEAB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_get_minDistance_Injected_mA5756FA9CD5D1D7EF5F7F0D5A82B0FFD9F4ABEAB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::get_minDistance_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_minDistance_Injected_m54DCFB65496741606AF9B35926E7B2EC479DFC27 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbZone_set_minDistance_Injected_m54DCFB65496741606AF9B35926E7B2EC479DFC27_ftn) (intptr_t, float);
	static AudioReverbZone_set_minDistance_Injected_m54DCFB65496741606AF9B35926E7B2EC479DFC27_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_set_minDistance_Injected_m54DCFB65496741606AF9B35926E7B2EC479DFC27_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::set_minDistance_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_maxDistance_Injected_m9D980FF28503A6FB68DD8B086FF24C13A1F36E15 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbZone_get_maxDistance_Injected_m9D980FF28503A6FB68DD8B086FF24C13A1F36E15_ftn) (intptr_t);
	static AudioReverbZone_get_maxDistance_Injected_m9D980FF28503A6FB68DD8B086FF24C13A1F36E15_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_get_maxDistance_Injected_m9D980FF28503A6FB68DD8B086FF24C13A1F36E15_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::get_maxDistance_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_maxDistance_Injected_m710ED900C7524CC61EAAF74F0676CB5C8522359E (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbZone_set_maxDistance_Injected_m710ED900C7524CC61EAAF74F0676CB5C8522359E_ftn) (intptr_t, float);
	static AudioReverbZone_set_maxDistance_Injected_m710ED900C7524CC61EAAF74F0676CB5C8522359E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_set_maxDistance_Injected_m710ED900C7524CC61EAAF74F0676CB5C8522359E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::set_maxDistance_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioReverbZone_get_reverbPreset_Injected_m5954A9098808768881ACA24D41E853D6D849CC86 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioReverbZone_get_reverbPreset_Injected_m5954A9098808768881ACA24D41E853D6D849CC86_ftn) (intptr_t);
	static AudioReverbZone_get_reverbPreset_Injected_m5954A9098808768881ACA24D41E853D6D849CC86_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_get_reverbPreset_Injected_m5954A9098808768881ACA24D41E853D6D849CC86_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::get_reverbPreset_Injected(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_reverbPreset_Injected_mBB71947C2366FEF910321589B7351C1BDB4DDD65 (intptr_t ___0__unity_self, int32_t ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbZone_set_reverbPreset_Injected_mBB71947C2366FEF910321589B7351C1BDB4DDD65_ftn) (intptr_t, int32_t);
	static AudioReverbZone_set_reverbPreset_Injected_mBB71947C2366FEF910321589B7351C1BDB4DDD65_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_set_reverbPreset_Injected_mBB71947C2366FEF910321589B7351C1BDB4DDD65_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::set_reverbPreset_Injected(System.IntPtr,UnityEngine.AudioReverbPreset)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioReverbZone_get_room_Injected_mFEDEF1A03AA9F959484ED847650C34F16C9E69BB (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioReverbZone_get_room_Injected_mFEDEF1A03AA9F959484ED847650C34F16C9E69BB_ftn) (intptr_t);
	static AudioReverbZone_get_room_Injected_mFEDEF1A03AA9F959484ED847650C34F16C9E69BB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_get_room_Injected_mFEDEF1A03AA9F959484ED847650C34F16C9E69BB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::get_room_Injected(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_room_Injected_m10FBE0046D63447E9A84D1914707D179B3F3F376 (intptr_t ___0__unity_self, int32_t ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbZone_set_room_Injected_m10FBE0046D63447E9A84D1914707D179B3F3F376_ftn) (intptr_t, int32_t);
	static AudioReverbZone_set_room_Injected_m10FBE0046D63447E9A84D1914707D179B3F3F376_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_set_room_Injected_m10FBE0046D63447E9A84D1914707D179B3F3F376_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::set_room_Injected(System.IntPtr,System.Int32)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioReverbZone_get_roomHF_Injected_m82A9886CAFCB3A1885EF9EAA4B429BB6C1D4E896 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioReverbZone_get_roomHF_Injected_m82A9886CAFCB3A1885EF9EAA4B429BB6C1D4E896_ftn) (intptr_t);
	static AudioReverbZone_get_roomHF_Injected_m82A9886CAFCB3A1885EF9EAA4B429BB6C1D4E896_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_get_roomHF_Injected_m82A9886CAFCB3A1885EF9EAA4B429BB6C1D4E896_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::get_roomHF_Injected(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_roomHF_Injected_m5A62F6EFFDD2A6F2F35FE1712F2CD97BA5B2F206 (intptr_t ___0__unity_self, int32_t ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbZone_set_roomHF_Injected_m5A62F6EFFDD2A6F2F35FE1712F2CD97BA5B2F206_ftn) (intptr_t, int32_t);
	static AudioReverbZone_set_roomHF_Injected_m5A62F6EFFDD2A6F2F35FE1712F2CD97BA5B2F206_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_set_roomHF_Injected_m5A62F6EFFDD2A6F2F35FE1712F2CD97BA5B2F206_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::set_roomHF_Injected(System.IntPtr,System.Int32)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioReverbZone_get_roomLF_Injected_m75A87396CAF6B0182696320F12FC6A0386FE3327 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioReverbZone_get_roomLF_Injected_m75A87396CAF6B0182696320F12FC6A0386FE3327_ftn) (intptr_t);
	static AudioReverbZone_get_roomLF_Injected_m75A87396CAF6B0182696320F12FC6A0386FE3327_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_get_roomLF_Injected_m75A87396CAF6B0182696320F12FC6A0386FE3327_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::get_roomLF_Injected(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_roomLF_Injected_m45219D4F89B83DD6748ADFC66E5D1214128BC7C3 (intptr_t ___0__unity_self, int32_t ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbZone_set_roomLF_Injected_m45219D4F89B83DD6748ADFC66E5D1214128BC7C3_ftn) (intptr_t, int32_t);
	static AudioReverbZone_set_roomLF_Injected_m45219D4F89B83DD6748ADFC66E5D1214128BC7C3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_set_roomLF_Injected_m45219D4F89B83DD6748ADFC66E5D1214128BC7C3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::set_roomLF_Injected(System.IntPtr,System.Int32)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_decayTime_Injected_m41D35F858569BA7495403A4FA20A726EBFDC3050 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbZone_get_decayTime_Injected_m41D35F858569BA7495403A4FA20A726EBFDC3050_ftn) (intptr_t);
	static AudioReverbZone_get_decayTime_Injected_m41D35F858569BA7495403A4FA20A726EBFDC3050_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_get_decayTime_Injected_m41D35F858569BA7495403A4FA20A726EBFDC3050_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::get_decayTime_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_decayTime_Injected_m97B27BA85741558A3355729DCF07FD2B7C81D152 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbZone_set_decayTime_Injected_m97B27BA85741558A3355729DCF07FD2B7C81D152_ftn) (intptr_t, float);
	static AudioReverbZone_set_decayTime_Injected_m97B27BA85741558A3355729DCF07FD2B7C81D152_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_set_decayTime_Injected_m97B27BA85741558A3355729DCF07FD2B7C81D152_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::set_decayTime_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_decayHFRatio_Injected_m69976273C86F5805FA68C1127C7F10426106CEEC (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbZone_get_decayHFRatio_Injected_m69976273C86F5805FA68C1127C7F10426106CEEC_ftn) (intptr_t);
	static AudioReverbZone_get_decayHFRatio_Injected_m69976273C86F5805FA68C1127C7F10426106CEEC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_get_decayHFRatio_Injected_m69976273C86F5805FA68C1127C7F10426106CEEC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::get_decayHFRatio_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_decayHFRatio_Injected_mD90CD844980858BA7DF4C3B689FDE7797863F3DB (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbZone_set_decayHFRatio_Injected_mD90CD844980858BA7DF4C3B689FDE7797863F3DB_ftn) (intptr_t, float);
	static AudioReverbZone_set_decayHFRatio_Injected_mD90CD844980858BA7DF4C3B689FDE7797863F3DB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_set_decayHFRatio_Injected_mD90CD844980858BA7DF4C3B689FDE7797863F3DB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::set_decayHFRatio_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioReverbZone_get_reflections_Injected_m05C3491FDAD5B8038C201DD82396B55696F905E4 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioReverbZone_get_reflections_Injected_m05C3491FDAD5B8038C201DD82396B55696F905E4_ftn) (intptr_t);
	static AudioReverbZone_get_reflections_Injected_m05C3491FDAD5B8038C201DD82396B55696F905E4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_get_reflections_Injected_m05C3491FDAD5B8038C201DD82396B55696F905E4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::get_reflections_Injected(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_reflections_Injected_mE0B6DD585814BB178160D57B650A9C48806AF1AA (intptr_t ___0__unity_self, int32_t ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbZone_set_reflections_Injected_mE0B6DD585814BB178160D57B650A9C48806AF1AA_ftn) (intptr_t, int32_t);
	static AudioReverbZone_set_reflections_Injected_mE0B6DD585814BB178160D57B650A9C48806AF1AA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_set_reflections_Injected_mE0B6DD585814BB178160D57B650A9C48806AF1AA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::set_reflections_Injected(System.IntPtr,System.Int32)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_reflectionsDelay_Injected_m12EC340251F7DCC68A67AB34B54763D960101B3D (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbZone_get_reflectionsDelay_Injected_m12EC340251F7DCC68A67AB34B54763D960101B3D_ftn) (intptr_t);
	static AudioReverbZone_get_reflectionsDelay_Injected_m12EC340251F7DCC68A67AB34B54763D960101B3D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_get_reflectionsDelay_Injected_m12EC340251F7DCC68A67AB34B54763D960101B3D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::get_reflectionsDelay_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_reflectionsDelay_Injected_m56649452A071826C002FB524C6762A41B30A9D0A (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbZone_set_reflectionsDelay_Injected_m56649452A071826C002FB524C6762A41B30A9D0A_ftn) (intptr_t, float);
	static AudioReverbZone_set_reflectionsDelay_Injected_m56649452A071826C002FB524C6762A41B30A9D0A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_set_reflectionsDelay_Injected_m56649452A071826C002FB524C6762A41B30A9D0A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::set_reflectionsDelay_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioReverbZone_get_reverb_Injected_m27D7AFE40757B88C60618D083528C47C8E821976 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioReverbZone_get_reverb_Injected_m27D7AFE40757B88C60618D083528C47C8E821976_ftn) (intptr_t);
	static AudioReverbZone_get_reverb_Injected_m27D7AFE40757B88C60618D083528C47C8E821976_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_get_reverb_Injected_m27D7AFE40757B88C60618D083528C47C8E821976_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::get_reverb_Injected(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_reverb_Injected_m0C388FDB67E4D590254F089F51EA3B5419F9AB59 (intptr_t ___0__unity_self, int32_t ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbZone_set_reverb_Injected_m0C388FDB67E4D590254F089F51EA3B5419F9AB59_ftn) (intptr_t, int32_t);
	static AudioReverbZone_set_reverb_Injected_m0C388FDB67E4D590254F089F51EA3B5419F9AB59_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_set_reverb_Injected_m0C388FDB67E4D590254F089F51EA3B5419F9AB59_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::set_reverb_Injected(System.IntPtr,System.Int32)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_reverbDelay_Injected_m5708435E98C2F2D868B81570A71C55052A0FFB02 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbZone_get_reverbDelay_Injected_m5708435E98C2F2D868B81570A71C55052A0FFB02_ftn) (intptr_t);
	static AudioReverbZone_get_reverbDelay_Injected_m5708435E98C2F2D868B81570A71C55052A0FFB02_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_get_reverbDelay_Injected_m5708435E98C2F2D868B81570A71C55052A0FFB02_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::get_reverbDelay_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_reverbDelay_Injected_mF31BEA82A86D352544CFC3D42BA9D3986AB9BB21 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbZone_set_reverbDelay_Injected_mF31BEA82A86D352544CFC3D42BA9D3986AB9BB21_ftn) (intptr_t, float);
	static AudioReverbZone_set_reverbDelay_Injected_mF31BEA82A86D352544CFC3D42BA9D3986AB9BB21_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_set_reverbDelay_Injected_mF31BEA82A86D352544CFC3D42BA9D3986AB9BB21_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::set_reverbDelay_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_HFReference_Injected_m97615ED40278A38F6AD8F5EB89547EE2CE81D21D (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbZone_get_HFReference_Injected_m97615ED40278A38F6AD8F5EB89547EE2CE81D21D_ftn) (intptr_t);
	static AudioReverbZone_get_HFReference_Injected_m97615ED40278A38F6AD8F5EB89547EE2CE81D21D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_get_HFReference_Injected_m97615ED40278A38F6AD8F5EB89547EE2CE81D21D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::get_HFReference_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_HFReference_Injected_m8128B8166B342D7D2906395150ED5E5B3A37C1A3 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbZone_set_HFReference_Injected_m8128B8166B342D7D2906395150ED5E5B3A37C1A3_ftn) (intptr_t, float);
	static AudioReverbZone_set_HFReference_Injected_m8128B8166B342D7D2906395150ED5E5B3A37C1A3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_set_HFReference_Injected_m8128B8166B342D7D2906395150ED5E5B3A37C1A3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::set_HFReference_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_LFReference_Injected_mC68ED4F89164AFC2B680AE77E7B1063B0EBDA973 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbZone_get_LFReference_Injected_mC68ED4F89164AFC2B680AE77E7B1063B0EBDA973_ftn) (intptr_t);
	static AudioReverbZone_get_LFReference_Injected_mC68ED4F89164AFC2B680AE77E7B1063B0EBDA973_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_get_LFReference_Injected_mC68ED4F89164AFC2B680AE77E7B1063B0EBDA973_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::get_LFReference_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_LFReference_Injected_m58EFF0277B95EEE8841948326848C5CB95413C22 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbZone_set_LFReference_Injected_m58EFF0277B95EEE8841948326848C5CB95413C22_ftn) (intptr_t, float);
	static AudioReverbZone_set_LFReference_Injected_m58EFF0277B95EEE8841948326848C5CB95413C22_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_set_LFReference_Injected_m58EFF0277B95EEE8841948326848C5CB95413C22_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::set_LFReference_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_diffusion_Injected_m34AA13C737D2A20EE929F3DC288F04F8F6DE038D (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbZone_get_diffusion_Injected_m34AA13C737D2A20EE929F3DC288F04F8F6DE038D_ftn) (intptr_t);
	static AudioReverbZone_get_diffusion_Injected_m34AA13C737D2A20EE929F3DC288F04F8F6DE038D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_get_diffusion_Injected_m34AA13C737D2A20EE929F3DC288F04F8F6DE038D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::get_diffusion_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_diffusion_Injected_mF1C9A98E7EA53747C7B4803B7D273A64F5400355 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbZone_set_diffusion_Injected_mF1C9A98E7EA53747C7B4803B7D273A64F5400355_ftn) (intptr_t, float);
	static AudioReverbZone_set_diffusion_Injected_mF1C9A98E7EA53747C7B4803B7D273A64F5400355_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_set_diffusion_Injected_mF1C9A98E7EA53747C7B4803B7D273A64F5400355_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::set_diffusion_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_density_Injected_m24AC99B7DABF50EFF33F460296F2C6BEFC551298 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbZone_get_density_Injected_m24AC99B7DABF50EFF33F460296F2C6BEFC551298_ftn) (intptr_t);
	static AudioReverbZone_get_density_Injected_m24AC99B7DABF50EFF33F460296F2C6BEFC551298_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_get_density_Injected_m24AC99B7DABF50EFF33F460296F2C6BEFC551298_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::get_density_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_density_Injected_m21F6E558C065E96294A298C933FBA9D4E0FA86D7 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbZone_set_density_Injected_m21F6E558C065E96294A298C933FBA9D4E0FA86D7_ftn) (intptr_t, float);
	static AudioReverbZone_set_density_Injected_m21F6E558C065E96294A298C933FBA9D4E0FA86D7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_set_density_Injected_m21F6E558C065E96294A298C933FBA9D4E0FA86D7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::set_density_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioLowPassFilter_get_cutoffFrequency_m81B07E7C2CE10E23F89954A3445AE3E79FC41F76 (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_mCEC3E43862A35543A8ABF1EB6B11A73AE6D8E743_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_mCEC3E43862A35543A8ABF1EB6B11A73AE6D8E743_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_mCEC3E43862A35543A8ABF1EB6B11A73AE6D8E743_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioLowPassFilter_get_cutoffFrequency_Injected_mB914D633D54DDD89AF0947F8BE5400391B16DE6D(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioLowPassFilter_set_cutoffFrequency_m593B7A476225759056C6DACCEBF92016FEE7B050 (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_mCEC3E43862A35543A8ABF1EB6B11A73AE6D8E743_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_mCEC3E43862A35543A8ABF1EB6B11A73AE6D8E743_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_mCEC3E43862A35543A8ABF1EB6B11A73AE6D8E743_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioLowPassFilter_set_cutoffFrequency_Injected_m7C27C7D313C5B93E8A3E42DDA42DE70D6B953B73(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioLowPassFilter_get_lowpassResonanceQ_mE4C49AFFCD409A295C6232C1560014D7B661CC95 (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_mCEC3E43862A35543A8ABF1EB6B11A73AE6D8E743_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_mCEC3E43862A35543A8ABF1EB6B11A73AE6D8E743_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_mCEC3E43862A35543A8ABF1EB6B11A73AE6D8E743_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioLowPassFilter_get_lowpassResonanceQ_Injected_m3D51DF411EF2A52E736BFC12CBEA00363DFCCD63(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioLowPassFilter_set_lowpassResonanceQ_m99921D5254062F0CB3FFE1C608CF703AD1BA0F4B (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_mCEC3E43862A35543A8ABF1EB6B11A73AE6D8E743_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_mCEC3E43862A35543A8ABF1EB6B11A73AE6D8E743_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_mCEC3E43862A35543A8ABF1EB6B11A73AE6D8E743_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioLowPassFilter_set_lowpassResonanceQ_Injected_mDF1587B1E4E014AF84B52A53286F9DB820E2EE3E(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioLowPassFilter__ctor_m84825EE53C006C52517EEA9F9F20D80A517F4BCA (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* __this, const RuntimeMethod* method) 
{
	{
		Behaviour__ctor_m00422B6EFEA829BCB116D715E74F1EAD2CB6F4F8(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioLowPassFilter_get_cutoffFrequency_Injected_mB914D633D54DDD89AF0947F8BE5400391B16DE6D (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioLowPassFilter_get_cutoffFrequency_Injected_mB914D633D54DDD89AF0947F8BE5400391B16DE6D_ftn) (intptr_t);
	static AudioLowPassFilter_get_cutoffFrequency_Injected_mB914D633D54DDD89AF0947F8BE5400391B16DE6D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioLowPassFilter_get_cutoffFrequency_Injected_mB914D633D54DDD89AF0947F8BE5400391B16DE6D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioLowPassFilter::get_cutoffFrequency_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioLowPassFilter_set_cutoffFrequency_Injected_m7C27C7D313C5B93E8A3E42DDA42DE70D6B953B73 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioLowPassFilter_set_cutoffFrequency_Injected_m7C27C7D313C5B93E8A3E42DDA42DE70D6B953B73_ftn) (intptr_t, float);
	static AudioLowPassFilter_set_cutoffFrequency_Injected_m7C27C7D313C5B93E8A3E42DDA42DE70D6B953B73_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioLowPassFilter_set_cutoffFrequency_Injected_m7C27C7D313C5B93E8A3E42DDA42DE70D6B953B73_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioLowPassFilter::set_cutoffFrequency_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioLowPassFilter_get_lowpassResonanceQ_Injected_m3D51DF411EF2A52E736BFC12CBEA00363DFCCD63 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioLowPassFilter_get_lowpassResonanceQ_Injected_m3D51DF411EF2A52E736BFC12CBEA00363DFCCD63_ftn) (intptr_t);
	static AudioLowPassFilter_get_lowpassResonanceQ_Injected_m3D51DF411EF2A52E736BFC12CBEA00363DFCCD63_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioLowPassFilter_get_lowpassResonanceQ_Injected_m3D51DF411EF2A52E736BFC12CBEA00363DFCCD63_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioLowPassFilter::get_lowpassResonanceQ_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioLowPassFilter_set_lowpassResonanceQ_Injected_mDF1587B1E4E014AF84B52A53286F9DB820E2EE3E (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioLowPassFilter_set_lowpassResonanceQ_Injected_mDF1587B1E4E014AF84B52A53286F9DB820E2EE3E_ftn) (intptr_t, float);
	static AudioLowPassFilter_set_lowpassResonanceQ_Injected_mDF1587B1E4E014AF84B52A53286F9DB820E2EE3E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioLowPassFilter_set_lowpassResonanceQ_Injected_mDF1587B1E4E014AF84B52A53286F9DB820E2EE3E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioLowPassFilter::set_lowpassResonanceQ_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioHighPassFilter_get_cutoffFrequency_m3B2D24CAE52BABA37E36DDBFFC5710F8346889CD (AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718_m95C939B2047DBCB9744FF33FFCB56CC327F61E83_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718_m95C939B2047DBCB9744FF33FFCB56CC327F61E83_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718_m95C939B2047DBCB9744FF33FFCB56CC327F61E83_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioHighPassFilter_get_cutoffFrequency_Injected_m274ED934DFF2D8E7B58AC5883C9933ADA5CA0456(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioHighPassFilter_set_cutoffFrequency_mBD5636A124C598DC0B54B8338FF834F422DD676C (AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718_m95C939B2047DBCB9744FF33FFCB56CC327F61E83_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718_m95C939B2047DBCB9744FF33FFCB56CC327F61E83_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718_m95C939B2047DBCB9744FF33FFCB56CC327F61E83_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioHighPassFilter_set_cutoffFrequency_Injected_mA4CD9FCD1419D4FCAE057612687C943D750AA2C9(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioHighPassFilter_get_highpassResonanceQ_m64B258EA328733E39E4D37DAA9E29919CBCF29C1 (AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718_m95C939B2047DBCB9744FF33FFCB56CC327F61E83_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718_m95C939B2047DBCB9744FF33FFCB56CC327F61E83_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718_m95C939B2047DBCB9744FF33FFCB56CC327F61E83_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioHighPassFilter_get_highpassResonanceQ_Injected_mCD6FF2AF95429F7E57D4BF7762E9792ABC75C0D3(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioHighPassFilter_set_highpassResonanceQ_m904290EB5077604E41690C97AE1160AB78FE24B6 (AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718_m95C939B2047DBCB9744FF33FFCB56CC327F61E83_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718_m95C939B2047DBCB9744FF33FFCB56CC327F61E83_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718_m95C939B2047DBCB9744FF33FFCB56CC327F61E83_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioHighPassFilter_set_highpassResonanceQ_Injected_m8D5ECCD73B08E35C2F3DBA3168751DE1D9C3F193(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioHighPassFilter__ctor_mDAB8BDE4375EB6D37AEF7F10636038195818AF1B (AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718* __this, const RuntimeMethod* method) 
{
	{
		Behaviour__ctor_m00422B6EFEA829BCB116D715E74F1EAD2CB6F4F8(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioHighPassFilter_get_cutoffFrequency_Injected_m274ED934DFF2D8E7B58AC5883C9933ADA5CA0456 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioHighPassFilter_get_cutoffFrequency_Injected_m274ED934DFF2D8E7B58AC5883C9933ADA5CA0456_ftn) (intptr_t);
	static AudioHighPassFilter_get_cutoffFrequency_Injected_m274ED934DFF2D8E7B58AC5883C9933ADA5CA0456_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioHighPassFilter_get_cutoffFrequency_Injected_m274ED934DFF2D8E7B58AC5883C9933ADA5CA0456_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioHighPassFilter::get_cutoffFrequency_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioHighPassFilter_set_cutoffFrequency_Injected_mA4CD9FCD1419D4FCAE057612687C943D750AA2C9 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioHighPassFilter_set_cutoffFrequency_Injected_mA4CD9FCD1419D4FCAE057612687C943D750AA2C9_ftn) (intptr_t, float);
	static AudioHighPassFilter_set_cutoffFrequency_Injected_mA4CD9FCD1419D4FCAE057612687C943D750AA2C9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioHighPassFilter_set_cutoffFrequency_Injected_mA4CD9FCD1419D4FCAE057612687C943D750AA2C9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioHighPassFilter::set_cutoffFrequency_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioHighPassFilter_get_highpassResonanceQ_Injected_mCD6FF2AF95429F7E57D4BF7762E9792ABC75C0D3 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioHighPassFilter_get_highpassResonanceQ_Injected_mCD6FF2AF95429F7E57D4BF7762E9792ABC75C0D3_ftn) (intptr_t);
	static AudioHighPassFilter_get_highpassResonanceQ_Injected_mCD6FF2AF95429F7E57D4BF7762E9792ABC75C0D3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioHighPassFilter_get_highpassResonanceQ_Injected_mCD6FF2AF95429F7E57D4BF7762E9792ABC75C0D3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioHighPassFilter::get_highpassResonanceQ_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioHighPassFilter_set_highpassResonanceQ_Injected_m8D5ECCD73B08E35C2F3DBA3168751DE1D9C3F193 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioHighPassFilter_set_highpassResonanceQ_Injected_m8D5ECCD73B08E35C2F3DBA3168751DE1D9C3F193_ftn) (intptr_t, float);
	static AudioHighPassFilter_set_highpassResonanceQ_Injected_m8D5ECCD73B08E35C2F3DBA3168751DE1D9C3F193_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioHighPassFilter_set_highpassResonanceQ_Injected_m8D5ECCD73B08E35C2F3DBA3168751DE1D9C3F193_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioHighPassFilter::set_highpassResonanceQ_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioDistortionFilter_get_distortionLevel_mA6CAE95E51279B223842C5460DDF558AC2B9E5BF (AudioDistortionFilter_t7F3BAB686EC252D931F9F0C9D5711334A15AE2C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioDistortionFilter_t7F3BAB686EC252D931F9F0C9D5711334A15AE2C2_mBCC42DA240C27D27E1FB9FEC7D803B79D7061ABA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioDistortionFilter_t7F3BAB686EC252D931F9F0C9D5711334A15AE2C2_mBCC42DA240C27D27E1FB9FEC7D803B79D7061ABA_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioDistortionFilter_t7F3BAB686EC252D931F9F0C9D5711334A15AE2C2_mBCC42DA240C27D27E1FB9FEC7D803B79D7061ABA_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioDistortionFilter_get_distortionLevel_Injected_mB23995F768158720F6DD94237940E4454B2F3D19(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioDistortionFilter_set_distortionLevel_m1C3A97CA5778481402593F35B9DF69C1ABE7FF3F (AudioDistortionFilter_t7F3BAB686EC252D931F9F0C9D5711334A15AE2C2* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioDistortionFilter_t7F3BAB686EC252D931F9F0C9D5711334A15AE2C2_mBCC42DA240C27D27E1FB9FEC7D803B79D7061ABA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioDistortionFilter_t7F3BAB686EC252D931F9F0C9D5711334A15AE2C2_mBCC42DA240C27D27E1FB9FEC7D803B79D7061ABA_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioDistortionFilter_t7F3BAB686EC252D931F9F0C9D5711334A15AE2C2_mBCC42DA240C27D27E1FB9FEC7D803B79D7061ABA_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioDistortionFilter_set_distortionLevel_Injected_mD3D2EE1C91234141A2F452A799411B7F3F139F83(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioDistortionFilter__ctor_m36416ED8C4E280AB866F56E30EEFA6D6F3103635 (AudioDistortionFilter_t7F3BAB686EC252D931F9F0C9D5711334A15AE2C2* __this, const RuntimeMethod* method) 
{
	{
		Behaviour__ctor_m00422B6EFEA829BCB116D715E74F1EAD2CB6F4F8(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioDistortionFilter_get_distortionLevel_Injected_mB23995F768158720F6DD94237940E4454B2F3D19 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioDistortionFilter_get_distortionLevel_Injected_mB23995F768158720F6DD94237940E4454B2F3D19_ftn) (intptr_t);
	static AudioDistortionFilter_get_distortionLevel_Injected_mB23995F768158720F6DD94237940E4454B2F3D19_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioDistortionFilter_get_distortionLevel_Injected_mB23995F768158720F6DD94237940E4454B2F3D19_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioDistortionFilter::get_distortionLevel_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioDistortionFilter_set_distortionLevel_Injected_mD3D2EE1C91234141A2F452A799411B7F3F139F83 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioDistortionFilter_set_distortionLevel_Injected_mD3D2EE1C91234141A2F452A799411B7F3F139F83_ftn) (intptr_t, float);
	static AudioDistortionFilter_set_distortionLevel_Injected_mD3D2EE1C91234141A2F452A799411B7F3F139F83_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioDistortionFilter_set_distortionLevel_Injected_mD3D2EE1C91234141A2F452A799411B7F3F139F83_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioDistortionFilter::set_distortionLevel_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioEchoFilter_get_delay_mCB330FE5F6FA47E2F150055D5B5DE7CF823B60C3 (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioEchoFilter_get_delay_Injected_mC96DA15E9601FAFF705A363D0132F4C515116494(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEchoFilter_set_delay_m397356ADDF75BA6494C0BB6D7010CE491EB380EA (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioEchoFilter_set_delay_Injected_mF74D328A86D7F6E30A114D4986C1A2AA1BE96626(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioEchoFilter_get_decayRatio_m8FA03CFD848069F564CDAA623CBF8CBA54EA872E (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioEchoFilter_get_decayRatio_Injected_mE2FFD696762CB4D89071E11D7C9ED16D70431D61(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEchoFilter_set_decayRatio_m11BF2192C4E06EDD856936E0D911121A9B718B85 (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioEchoFilter_set_decayRatio_Injected_m8504B994DFFABE19C9462051C9979955AE4BE8ED(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioEchoFilter_get_dryMix_mC739CE6F775496904C2E4B3F9B4FD461BFF9A9C4 (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioEchoFilter_get_dryMix_Injected_m5ADD4CB48E62974A0A5D4AD8D37F8AA20AC28A72(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEchoFilter_set_dryMix_mD6D153883670F3E1C64ACC3C3E9B546A90786B58 (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioEchoFilter_set_dryMix_Injected_m6E10C259018C4435F639EF2A1F3019473454316C(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioEchoFilter_get_wetMix_mDD2098A367D66E20E7467D9C70775BDF9649FC79 (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioEchoFilter_get_wetMix_Injected_mBFC3EC798371BD714F78FA047982158A8EB69CCE(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEchoFilter_set_wetMix_mB73E5B2A5C73C6FC72E90EA1850B9497E4D09370 (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioEchoFilter_set_wetMix_Injected_m205773C71671C2B5D79207AC616977154CA1E467(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEchoFilter__ctor_m5100792BD25686BF7A44FED02F04D974D6DA0A4E (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2* __this, const RuntimeMethod* method) 
{
	{
		Behaviour__ctor_m00422B6EFEA829BCB116D715E74F1EAD2CB6F4F8(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioEchoFilter_get_delay_Injected_mC96DA15E9601FAFF705A363D0132F4C515116494 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioEchoFilter_get_delay_Injected_mC96DA15E9601FAFF705A363D0132F4C515116494_ftn) (intptr_t);
	static AudioEchoFilter_get_delay_Injected_mC96DA15E9601FAFF705A363D0132F4C515116494_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioEchoFilter_get_delay_Injected_mC96DA15E9601FAFF705A363D0132F4C515116494_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioEchoFilter::get_delay_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEchoFilter_set_delay_Injected_mF74D328A86D7F6E30A114D4986C1A2AA1BE96626 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioEchoFilter_set_delay_Injected_mF74D328A86D7F6E30A114D4986C1A2AA1BE96626_ftn) (intptr_t, float);
	static AudioEchoFilter_set_delay_Injected_mF74D328A86D7F6E30A114D4986C1A2AA1BE96626_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioEchoFilter_set_delay_Injected_mF74D328A86D7F6E30A114D4986C1A2AA1BE96626_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioEchoFilter::set_delay_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioEchoFilter_get_decayRatio_Injected_mE2FFD696762CB4D89071E11D7C9ED16D70431D61 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioEchoFilter_get_decayRatio_Injected_mE2FFD696762CB4D89071E11D7C9ED16D70431D61_ftn) (intptr_t);
	static AudioEchoFilter_get_decayRatio_Injected_mE2FFD696762CB4D89071E11D7C9ED16D70431D61_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioEchoFilter_get_decayRatio_Injected_mE2FFD696762CB4D89071E11D7C9ED16D70431D61_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioEchoFilter::get_decayRatio_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEchoFilter_set_decayRatio_Injected_m8504B994DFFABE19C9462051C9979955AE4BE8ED (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioEchoFilter_set_decayRatio_Injected_m8504B994DFFABE19C9462051C9979955AE4BE8ED_ftn) (intptr_t, float);
	static AudioEchoFilter_set_decayRatio_Injected_m8504B994DFFABE19C9462051C9979955AE4BE8ED_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioEchoFilter_set_decayRatio_Injected_m8504B994DFFABE19C9462051C9979955AE4BE8ED_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioEchoFilter::set_decayRatio_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioEchoFilter_get_dryMix_Injected_m5ADD4CB48E62974A0A5D4AD8D37F8AA20AC28A72 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioEchoFilter_get_dryMix_Injected_m5ADD4CB48E62974A0A5D4AD8D37F8AA20AC28A72_ftn) (intptr_t);
	static AudioEchoFilter_get_dryMix_Injected_m5ADD4CB48E62974A0A5D4AD8D37F8AA20AC28A72_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioEchoFilter_get_dryMix_Injected_m5ADD4CB48E62974A0A5D4AD8D37F8AA20AC28A72_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioEchoFilter::get_dryMix_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEchoFilter_set_dryMix_Injected_m6E10C259018C4435F639EF2A1F3019473454316C (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioEchoFilter_set_dryMix_Injected_m6E10C259018C4435F639EF2A1F3019473454316C_ftn) (intptr_t, float);
	static AudioEchoFilter_set_dryMix_Injected_m6E10C259018C4435F639EF2A1F3019473454316C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioEchoFilter_set_dryMix_Injected_m6E10C259018C4435F639EF2A1F3019473454316C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioEchoFilter::set_dryMix_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioEchoFilter_get_wetMix_Injected_mBFC3EC798371BD714F78FA047982158A8EB69CCE (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioEchoFilter_get_wetMix_Injected_mBFC3EC798371BD714F78FA047982158A8EB69CCE_ftn) (intptr_t);
	static AudioEchoFilter_get_wetMix_Injected_mBFC3EC798371BD714F78FA047982158A8EB69CCE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioEchoFilter_get_wetMix_Injected_mBFC3EC798371BD714F78FA047982158A8EB69CCE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioEchoFilter::get_wetMix_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEchoFilter_set_wetMix_Injected_m205773C71671C2B5D79207AC616977154CA1E467 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioEchoFilter_set_wetMix_Injected_m205773C71671C2B5D79207AC616977154CA1E467_ftn) (intptr_t, float);
	static AudioEchoFilter_set_wetMix_Injected_m205773C71671C2B5D79207AC616977154CA1E467_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioEchoFilter_set_wetMix_Injected_m205773C71671C2B5D79207AC616977154CA1E467_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioEchoFilter::set_wetMix_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_dryMix_m1A9342CF6C25C7A1F39036EF22053D7971C1548A (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioChorusFilter_get_dryMix_Injected_m776F6894D37A877B471BC7504B71C6D6E8E085EA(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_dryMix_mB1A570CFCA83E7774B818D4CC793EE8826036F57 (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioChorusFilter_set_dryMix_Injected_m42CB3CA225A436D313B4720AA2528E9513B54B3E(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_wetMix1_m8745993A0B1ACDC2D7B573AFE2D518A9F4D9C4DF (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioChorusFilter_get_wetMix1_Injected_m09799E9FF15F7BDD20EB809F2D66627DB93C97F2(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_wetMix1_m29F12D2DAA2B9331BB403E2CCD51622A28CA9AB5 (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioChorusFilter_set_wetMix1_Injected_m44A109C0CC1B9C1DCF2CCC8089282C015AE3C32E(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_wetMix2_mDA24F10D5F578A8A9B298D20EA96859540E84280 (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioChorusFilter_get_wetMix2_Injected_m1D45FA99507A4206038D944FBC38EC3A20F84F49(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_wetMix2_m0FAF980C47D4AEE1D8E77FD18E87B4FBB6AF5FF4 (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioChorusFilter_set_wetMix2_Injected_m309BCF90CF8F860D13F0812799B8F00DE2303244(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_wetMix3_m34E39E60D6C3B6B1FB75DB16E6E0E0CAECFBC45D (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioChorusFilter_get_wetMix3_Injected_m1C0FCB4A88296125DA0FC5253A1BBD1515A145D1(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_wetMix3_mDB728423C888D810F3952E0EE1B539965816D5CA (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioChorusFilter_set_wetMix3_Injected_m682631AAE60E2BBC3669C414EA2B9D1055F385E8(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_delay_m672795F6AA8E8B25C82E7AD89F700A47EF006D13 (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioChorusFilter_get_delay_Injected_m07C8B28899A683CDDCCD9490D3469835E6C11F39(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_delay_m55A6C17C5720CD54E2635377DF9F2AA909BE6AB9 (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioChorusFilter_set_delay_Injected_m2999CE020973B6B2E2279E5362E86A72D82F54D0(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_rate_mE7CC401F69E7E5576B31B1D9BE22B04567DCF014 (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioChorusFilter_get_rate_Injected_mA68FE9FB1A87268F6D0CF3204C402AB09337459F(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_rate_m5F33CF51BDE70FE8A955CAB1E8C4FB7C18E0E5D8 (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioChorusFilter_set_rate_Injected_mD20AD614E399D4A889DABD48F0B1ABD7D6732134(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_depth_m7759E9F1054657F72E4DFEFB013BD79A230702BD (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioChorusFilter_get_depth_Injected_m5D26CB347F23DB8A319654FFE70112893EE8FA31(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_depth_m9CF37951B349E28FED863E207CFA2E5E451BDE2B (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioChorusFilter_set_depth_Injected_m8BB1F9D7653189572793F0383359DA890017398E(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter__ctor_mEF2A7D547F029200A840E0457C90369E1BD7CDBA (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, const RuntimeMethod* method) 
{
	{
		Behaviour__ctor_m00422B6EFEA829BCB116D715E74F1EAD2CB6F4F8(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_dryMix_Injected_m776F6894D37A877B471BC7504B71C6D6E8E085EA (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioChorusFilter_get_dryMix_Injected_m776F6894D37A877B471BC7504B71C6D6E8E085EA_ftn) (intptr_t);
	static AudioChorusFilter_get_dryMix_Injected_m776F6894D37A877B471BC7504B71C6D6E8E085EA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_get_dryMix_Injected_m776F6894D37A877B471BC7504B71C6D6E8E085EA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::get_dryMix_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_dryMix_Injected_m42CB3CA225A436D313B4720AA2528E9513B54B3E (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioChorusFilter_set_dryMix_Injected_m42CB3CA225A436D313B4720AA2528E9513B54B3E_ftn) (intptr_t, float);
	static AudioChorusFilter_set_dryMix_Injected_m42CB3CA225A436D313B4720AA2528E9513B54B3E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_set_dryMix_Injected_m42CB3CA225A436D313B4720AA2528E9513B54B3E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::set_dryMix_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_wetMix1_Injected_m09799E9FF15F7BDD20EB809F2D66627DB93C97F2 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioChorusFilter_get_wetMix1_Injected_m09799E9FF15F7BDD20EB809F2D66627DB93C97F2_ftn) (intptr_t);
	static AudioChorusFilter_get_wetMix1_Injected_m09799E9FF15F7BDD20EB809F2D66627DB93C97F2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_get_wetMix1_Injected_m09799E9FF15F7BDD20EB809F2D66627DB93C97F2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::get_wetMix1_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_wetMix1_Injected_m44A109C0CC1B9C1DCF2CCC8089282C015AE3C32E (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioChorusFilter_set_wetMix1_Injected_m44A109C0CC1B9C1DCF2CCC8089282C015AE3C32E_ftn) (intptr_t, float);
	static AudioChorusFilter_set_wetMix1_Injected_m44A109C0CC1B9C1DCF2CCC8089282C015AE3C32E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_set_wetMix1_Injected_m44A109C0CC1B9C1DCF2CCC8089282C015AE3C32E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::set_wetMix1_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_wetMix2_Injected_m1D45FA99507A4206038D944FBC38EC3A20F84F49 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioChorusFilter_get_wetMix2_Injected_m1D45FA99507A4206038D944FBC38EC3A20F84F49_ftn) (intptr_t);
	static AudioChorusFilter_get_wetMix2_Injected_m1D45FA99507A4206038D944FBC38EC3A20F84F49_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_get_wetMix2_Injected_m1D45FA99507A4206038D944FBC38EC3A20F84F49_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::get_wetMix2_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_wetMix2_Injected_m309BCF90CF8F860D13F0812799B8F00DE2303244 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioChorusFilter_set_wetMix2_Injected_m309BCF90CF8F860D13F0812799B8F00DE2303244_ftn) (intptr_t, float);
	static AudioChorusFilter_set_wetMix2_Injected_m309BCF90CF8F860D13F0812799B8F00DE2303244_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_set_wetMix2_Injected_m309BCF90CF8F860D13F0812799B8F00DE2303244_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::set_wetMix2_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_wetMix3_Injected_m1C0FCB4A88296125DA0FC5253A1BBD1515A145D1 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioChorusFilter_get_wetMix3_Injected_m1C0FCB4A88296125DA0FC5253A1BBD1515A145D1_ftn) (intptr_t);
	static AudioChorusFilter_get_wetMix3_Injected_m1C0FCB4A88296125DA0FC5253A1BBD1515A145D1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_get_wetMix3_Injected_m1C0FCB4A88296125DA0FC5253A1BBD1515A145D1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::get_wetMix3_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_wetMix3_Injected_m682631AAE60E2BBC3669C414EA2B9D1055F385E8 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioChorusFilter_set_wetMix3_Injected_m682631AAE60E2BBC3669C414EA2B9D1055F385E8_ftn) (intptr_t, float);
	static AudioChorusFilter_set_wetMix3_Injected_m682631AAE60E2BBC3669C414EA2B9D1055F385E8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_set_wetMix3_Injected_m682631AAE60E2BBC3669C414EA2B9D1055F385E8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::set_wetMix3_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_delay_Injected_m07C8B28899A683CDDCCD9490D3469835E6C11F39 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioChorusFilter_get_delay_Injected_m07C8B28899A683CDDCCD9490D3469835E6C11F39_ftn) (intptr_t);
	static AudioChorusFilter_get_delay_Injected_m07C8B28899A683CDDCCD9490D3469835E6C11F39_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_get_delay_Injected_m07C8B28899A683CDDCCD9490D3469835E6C11F39_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::get_delay_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_delay_Injected_m2999CE020973B6B2E2279E5362E86A72D82F54D0 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioChorusFilter_set_delay_Injected_m2999CE020973B6B2E2279E5362E86A72D82F54D0_ftn) (intptr_t, float);
	static AudioChorusFilter_set_delay_Injected_m2999CE020973B6B2E2279E5362E86A72D82F54D0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_set_delay_Injected_m2999CE020973B6B2E2279E5362E86A72D82F54D0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::set_delay_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_rate_Injected_mA68FE9FB1A87268F6D0CF3204C402AB09337459F (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioChorusFilter_get_rate_Injected_mA68FE9FB1A87268F6D0CF3204C402AB09337459F_ftn) (intptr_t);
	static AudioChorusFilter_get_rate_Injected_mA68FE9FB1A87268F6D0CF3204C402AB09337459F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_get_rate_Injected_mA68FE9FB1A87268F6D0CF3204C402AB09337459F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::get_rate_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_rate_Injected_mD20AD614E399D4A889DABD48F0B1ABD7D6732134 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioChorusFilter_set_rate_Injected_mD20AD614E399D4A889DABD48F0B1ABD7D6732134_ftn) (intptr_t, float);
	static AudioChorusFilter_set_rate_Injected_mD20AD614E399D4A889DABD48F0B1ABD7D6732134_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_set_rate_Injected_mD20AD614E399D4A889DABD48F0B1ABD7D6732134_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::set_rate_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_depth_Injected_m5D26CB347F23DB8A319654FFE70112893EE8FA31 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioChorusFilter_get_depth_Injected_m5D26CB347F23DB8A319654FFE70112893EE8FA31_ftn) (intptr_t);
	static AudioChorusFilter_get_depth_Injected_m5D26CB347F23DB8A319654FFE70112893EE8FA31_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_get_depth_Injected_m5D26CB347F23DB8A319654FFE70112893EE8FA31_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::get_depth_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_depth_Injected_m8BB1F9D7653189572793F0383359DA890017398E (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioChorusFilter_set_depth_Injected_m8BB1F9D7653189572793F0383359DA890017398E_ftn) (intptr_t, float);
	static AudioChorusFilter_set_depth_Injected_m8BB1F9D7653189572793F0383359DA890017398E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_set_depth_Injected_m8BB1F9D7653189572793F0383359DA890017398E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::set_depth_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioReverbFilter_get_reverbPreset_m0DD8D4359DB574E72F9A80FFB7BDCE4E15A1044B (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = AudioReverbFilter_get_reverbPreset_Injected_mEA13AD8196C2810B5D8F0E8D1C1842AF7521C029(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_reverbPreset_mF0D458E66A09909A3363CB82045D324A15D0A35C (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2 = ___0_value;
		AudioReverbFilter_set_reverbPreset_Injected_mFC2DADADFBD0B88CA4B08847A804D3E65AC150F5(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_dryLevel_mD08FE87B5DC628565F293CE1B56A9A1307AE0C09 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbFilter_get_dryLevel_Injected_mCA5FDB36A68F0FBC55F4B0A59299256F55CCD059(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_dryLevel_m38274A3E21082394406A720CAA563CC837C7E38C (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbFilter_set_dryLevel_Injected_mC8349217D72CB1650053872760EB1527530AFE48(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_room_m29E27BCA006A28DC57C48238713F5C7BB4150FBB (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbFilter_get_room_Injected_m71CE65A81B636564C741C2D7A41A13E0214DFE24(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_room_mEBB4B620CFC0CF674850C555EA9D387F01EE7B66 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbFilter_set_room_Injected_mD1823614ECB2DB7A26DADCA9C6205061145454A6(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_roomHF_m3BCD46183B80171D31662CA8C14FD83EC79FEFA7 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbFilter_get_roomHF_Injected_mCA872D4808D7129E27C62A06A3F7152F854B5001(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_roomHF_mE2105449BD5C099291B33096F7B07B2675F3F2FE (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbFilter_set_roomHF_Injected_mD4FC324CD5F675DE2DFF7DE5C9B5DB41C3291432(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_decayTime_m9997163F354BA2E0AC8AEFAF0A176A7F29071C5A (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbFilter_get_decayTime_Injected_mA62CD28F54585557ABD08765CBEC9D015FA725DD(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_decayTime_m5A0A13CCEB435EC02065BB2BBD52515C813E3269 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbFilter_set_decayTime_Injected_m939249B52AEAB4A8554B8F3DA2AA91474806CD37(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_decayHFRatio_m0A583A0F2C049AC770DA5DCD96444C42505715CA (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbFilter_get_decayHFRatio_Injected_mDC794F81ED9D49E696B2763A78BAC5EBE77E6B9D(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_decayHFRatio_mAA637FF73CAB073B4B72333E49B8EF87CB835B96 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbFilter_set_decayHFRatio_Injected_mCDAF9AD5C200E37D8C735E07C14939B201825B61(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_reflectionsLevel_mEF98034B0B4519F11928C18392244FF9E4D9CEEE (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbFilter_get_reflectionsLevel_Injected_mF0C07239B82EAFADEF6F375339B262C94602F3DF(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_reflectionsLevel_m8155042594B3010E232EC28BF11A77B8A21DDF5C (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbFilter_set_reflectionsLevel_Injected_m839F452A44DEB6053CA020BCE471C133D55CE5DA(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_reflectionsDelay_mD749A1A26AD423F1E1BE315FE63AFB8EF6EBC128 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbFilter_get_reflectionsDelay_Injected_mCC11D53E60F153FD80D24FF676945B2C8FF9A9DF(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_reflectionsDelay_m36D46F143CFB54001467708C8E99074EE087431F (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbFilter_set_reflectionsDelay_Injected_m67837E9AE6E5C9C8B70863C0B2D4B92197F9DD88(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_reverbLevel_m5C1CFAC4F1C69B6F58EE6C99BDF9B58EF9D56D9F (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbFilter_get_reverbLevel_Injected_m26E5FF598A048A1125CD5FE9739CAE3C49667FCB(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_reverbLevel_m1772AB9B29E73CE217FB1311C584A5E905D8678A (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbFilter_set_reverbLevel_Injected_m5B6278AA61B6BD4760875B4F0DCE11B1DDD28DFB(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_reverbDelay_m57423C26BFCAE1C785D53E86D49CF5D53C220F8B (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbFilter_get_reverbDelay_Injected_m2BCE9EB7F05BB65989A3EADC96A1D596C7789343(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_reverbDelay_m39032CE9C3873B99EED57ADDC0CAABF1DC476589 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbFilter_set_reverbDelay_Injected_m6B3F6636557DED16E3DDCCCA5E16E1345DC99CD2(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_diffusion_m9A4C2092D061AAC950EA9C366D56ADDE350CB261 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbFilter_get_diffusion_Injected_m69BFC6432FC6B2605BC56BD78A7D72E76BFAD1F4(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_diffusion_mE2CA22104B7E38D40DE2F885941C049719117C94 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbFilter_set_diffusion_Injected_m806BA1AB7CA01C53C6CEA694F90CF211C7E87DAD(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_density_mAD87B83256988D3C56E012513FC8328599746637 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbFilter_get_density_Injected_m446892DDFBAC244EE844AD41D61C7160CA9556BF(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_density_mF31C5ABD0AD7531217B5641D54246D5F0FDE1531 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbFilter_set_density_Injected_mA91322C2DF2F59CCBEC2AB8CB5FA76801AF209B9(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_hfReference_m2C7256088BAB07BA98BE0FFD6D9E7997072F2A8A (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbFilter_get_hfReference_Injected_m667651B4EF1D52D51C5C8C87DE456BFCB74C912C(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_hfReference_m4DBCBB0F944EEFD8B617412A540E8D7C926603BC (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbFilter_set_hfReference_Injected_mE56526E2344B1ACDD4F1C382B8C72D650A1316D2(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_roomLF_mF155DBD3B5A136D06DE3BF6200FDFFE1941F014A (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbFilter_get_roomLF_Injected_m38B7DFCF2C0ADB44DCFFEE0FD9B89560823C4321(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_roomLF_m8EF46CFC0599913676A9E88F76BD25E88911D03D (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbFilter_set_roomLF_Injected_mD6880DD456749EE29D36749925B13DCFC74E32B1(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_lfReference_mFA5EAB7CD86E9D96CC26DA9968594D3B11A49104 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbFilter_get_lfReference_Injected_mFFB4BCBD4FF3F1071DF82AFF36520D6EC2CB9BF0(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_lfReference_mA2FB3E1E3EEA40142C72F2CC071DC9ED12C11CA9 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbFilter_set_lfReference_Injected_m2708B2EDCEEAD93C870EFAB7E77E4C5AD0BDEB95(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter__ctor_m20060D1ED1FAFD97683C98E7ABAE796DA2B3B368 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	{
		Behaviour__ctor_m00422B6EFEA829BCB116D715E74F1EAD2CB6F4F8(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioReverbFilter_get_reverbPreset_Injected_mEA13AD8196C2810B5D8F0E8D1C1842AF7521C029 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioReverbFilter_get_reverbPreset_Injected_mEA13AD8196C2810B5D8F0E8D1C1842AF7521C029_ftn) (intptr_t);
	static AudioReverbFilter_get_reverbPreset_Injected_mEA13AD8196C2810B5D8F0E8D1C1842AF7521C029_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_reverbPreset_Injected_mEA13AD8196C2810B5D8F0E8D1C1842AF7521C029_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_reverbPreset_Injected(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_reverbPreset_Injected_mFC2DADADFBD0B88CA4B08847A804D3E65AC150F5 (intptr_t ___0__unity_self, int32_t ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_reverbPreset_Injected_mFC2DADADFBD0B88CA4B08847A804D3E65AC150F5_ftn) (intptr_t, int32_t);
	static AudioReverbFilter_set_reverbPreset_Injected_mFC2DADADFBD0B88CA4B08847A804D3E65AC150F5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_reverbPreset_Injected_mFC2DADADFBD0B88CA4B08847A804D3E65AC150F5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_reverbPreset_Injected(System.IntPtr,UnityEngine.AudioReverbPreset)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_dryLevel_Injected_mCA5FDB36A68F0FBC55F4B0A59299256F55CCD059 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_dryLevel_Injected_mCA5FDB36A68F0FBC55F4B0A59299256F55CCD059_ftn) (intptr_t);
	static AudioReverbFilter_get_dryLevel_Injected_mCA5FDB36A68F0FBC55F4B0A59299256F55CCD059_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_dryLevel_Injected_mCA5FDB36A68F0FBC55F4B0A59299256F55CCD059_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_dryLevel_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_dryLevel_Injected_mC8349217D72CB1650053872760EB1527530AFE48 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_dryLevel_Injected_mC8349217D72CB1650053872760EB1527530AFE48_ftn) (intptr_t, float);
	static AudioReverbFilter_set_dryLevel_Injected_mC8349217D72CB1650053872760EB1527530AFE48_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_dryLevel_Injected_mC8349217D72CB1650053872760EB1527530AFE48_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_dryLevel_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_room_Injected_m71CE65A81B636564C741C2D7A41A13E0214DFE24 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_room_Injected_m71CE65A81B636564C741C2D7A41A13E0214DFE24_ftn) (intptr_t);
	static AudioReverbFilter_get_room_Injected_m71CE65A81B636564C741C2D7A41A13E0214DFE24_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_room_Injected_m71CE65A81B636564C741C2D7A41A13E0214DFE24_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_room_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_room_Injected_mD1823614ECB2DB7A26DADCA9C6205061145454A6 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_room_Injected_mD1823614ECB2DB7A26DADCA9C6205061145454A6_ftn) (intptr_t, float);
	static AudioReverbFilter_set_room_Injected_mD1823614ECB2DB7A26DADCA9C6205061145454A6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_room_Injected_mD1823614ECB2DB7A26DADCA9C6205061145454A6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_room_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_roomHF_Injected_mCA872D4808D7129E27C62A06A3F7152F854B5001 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_roomHF_Injected_mCA872D4808D7129E27C62A06A3F7152F854B5001_ftn) (intptr_t);
	static AudioReverbFilter_get_roomHF_Injected_mCA872D4808D7129E27C62A06A3F7152F854B5001_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_roomHF_Injected_mCA872D4808D7129E27C62A06A3F7152F854B5001_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_roomHF_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_roomHF_Injected_mD4FC324CD5F675DE2DFF7DE5C9B5DB41C3291432 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_roomHF_Injected_mD4FC324CD5F675DE2DFF7DE5C9B5DB41C3291432_ftn) (intptr_t, float);
	static AudioReverbFilter_set_roomHF_Injected_mD4FC324CD5F675DE2DFF7DE5C9B5DB41C3291432_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_roomHF_Injected_mD4FC324CD5F675DE2DFF7DE5C9B5DB41C3291432_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_roomHF_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_decayTime_Injected_mA62CD28F54585557ABD08765CBEC9D015FA725DD (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_decayTime_Injected_mA62CD28F54585557ABD08765CBEC9D015FA725DD_ftn) (intptr_t);
	static AudioReverbFilter_get_decayTime_Injected_mA62CD28F54585557ABD08765CBEC9D015FA725DD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_decayTime_Injected_mA62CD28F54585557ABD08765CBEC9D015FA725DD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_decayTime_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_decayTime_Injected_m939249B52AEAB4A8554B8F3DA2AA91474806CD37 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_decayTime_Injected_m939249B52AEAB4A8554B8F3DA2AA91474806CD37_ftn) (intptr_t, float);
	static AudioReverbFilter_set_decayTime_Injected_m939249B52AEAB4A8554B8F3DA2AA91474806CD37_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_decayTime_Injected_m939249B52AEAB4A8554B8F3DA2AA91474806CD37_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_decayTime_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_decayHFRatio_Injected_mDC794F81ED9D49E696B2763A78BAC5EBE77E6B9D (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_decayHFRatio_Injected_mDC794F81ED9D49E696B2763A78BAC5EBE77E6B9D_ftn) (intptr_t);
	static AudioReverbFilter_get_decayHFRatio_Injected_mDC794F81ED9D49E696B2763A78BAC5EBE77E6B9D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_decayHFRatio_Injected_mDC794F81ED9D49E696B2763A78BAC5EBE77E6B9D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_decayHFRatio_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_decayHFRatio_Injected_mCDAF9AD5C200E37D8C735E07C14939B201825B61 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_decayHFRatio_Injected_mCDAF9AD5C200E37D8C735E07C14939B201825B61_ftn) (intptr_t, float);
	static AudioReverbFilter_set_decayHFRatio_Injected_mCDAF9AD5C200E37D8C735E07C14939B201825B61_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_decayHFRatio_Injected_mCDAF9AD5C200E37D8C735E07C14939B201825B61_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_decayHFRatio_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_reflectionsLevel_Injected_mF0C07239B82EAFADEF6F375339B262C94602F3DF (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_reflectionsLevel_Injected_mF0C07239B82EAFADEF6F375339B262C94602F3DF_ftn) (intptr_t);
	static AudioReverbFilter_get_reflectionsLevel_Injected_mF0C07239B82EAFADEF6F375339B262C94602F3DF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_reflectionsLevel_Injected_mF0C07239B82EAFADEF6F375339B262C94602F3DF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_reflectionsLevel_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_reflectionsLevel_Injected_m839F452A44DEB6053CA020BCE471C133D55CE5DA (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_reflectionsLevel_Injected_m839F452A44DEB6053CA020BCE471C133D55CE5DA_ftn) (intptr_t, float);
	static AudioReverbFilter_set_reflectionsLevel_Injected_m839F452A44DEB6053CA020BCE471C133D55CE5DA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_reflectionsLevel_Injected_m839F452A44DEB6053CA020BCE471C133D55CE5DA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_reflectionsLevel_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_reflectionsDelay_Injected_mCC11D53E60F153FD80D24FF676945B2C8FF9A9DF (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_reflectionsDelay_Injected_mCC11D53E60F153FD80D24FF676945B2C8FF9A9DF_ftn) (intptr_t);
	static AudioReverbFilter_get_reflectionsDelay_Injected_mCC11D53E60F153FD80D24FF676945B2C8FF9A9DF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_reflectionsDelay_Injected_mCC11D53E60F153FD80D24FF676945B2C8FF9A9DF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_reflectionsDelay_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_reflectionsDelay_Injected_m67837E9AE6E5C9C8B70863C0B2D4B92197F9DD88 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_reflectionsDelay_Injected_m67837E9AE6E5C9C8B70863C0B2D4B92197F9DD88_ftn) (intptr_t, float);
	static AudioReverbFilter_set_reflectionsDelay_Injected_m67837E9AE6E5C9C8B70863C0B2D4B92197F9DD88_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_reflectionsDelay_Injected_m67837E9AE6E5C9C8B70863C0B2D4B92197F9DD88_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_reflectionsDelay_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_reverbLevel_Injected_m26E5FF598A048A1125CD5FE9739CAE3C49667FCB (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_reverbLevel_Injected_m26E5FF598A048A1125CD5FE9739CAE3C49667FCB_ftn) (intptr_t);
	static AudioReverbFilter_get_reverbLevel_Injected_m26E5FF598A048A1125CD5FE9739CAE3C49667FCB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_reverbLevel_Injected_m26E5FF598A048A1125CD5FE9739CAE3C49667FCB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_reverbLevel_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_reverbLevel_Injected_m5B6278AA61B6BD4760875B4F0DCE11B1DDD28DFB (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_reverbLevel_Injected_m5B6278AA61B6BD4760875B4F0DCE11B1DDD28DFB_ftn) (intptr_t, float);
	static AudioReverbFilter_set_reverbLevel_Injected_m5B6278AA61B6BD4760875B4F0DCE11B1DDD28DFB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_reverbLevel_Injected_m5B6278AA61B6BD4760875B4F0DCE11B1DDD28DFB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_reverbLevel_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_reverbDelay_Injected_m2BCE9EB7F05BB65989A3EADC96A1D596C7789343 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_reverbDelay_Injected_m2BCE9EB7F05BB65989A3EADC96A1D596C7789343_ftn) (intptr_t);
	static AudioReverbFilter_get_reverbDelay_Injected_m2BCE9EB7F05BB65989A3EADC96A1D596C7789343_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_reverbDelay_Injected_m2BCE9EB7F05BB65989A3EADC96A1D596C7789343_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_reverbDelay_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_reverbDelay_Injected_m6B3F6636557DED16E3DDCCCA5E16E1345DC99CD2 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_reverbDelay_Injected_m6B3F6636557DED16E3DDCCCA5E16E1345DC99CD2_ftn) (intptr_t, float);
	static AudioReverbFilter_set_reverbDelay_Injected_m6B3F6636557DED16E3DDCCCA5E16E1345DC99CD2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_reverbDelay_Injected_m6B3F6636557DED16E3DDCCCA5E16E1345DC99CD2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_reverbDelay_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_diffusion_Injected_m69BFC6432FC6B2605BC56BD78A7D72E76BFAD1F4 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_diffusion_Injected_m69BFC6432FC6B2605BC56BD78A7D72E76BFAD1F4_ftn) (intptr_t);
	static AudioReverbFilter_get_diffusion_Injected_m69BFC6432FC6B2605BC56BD78A7D72E76BFAD1F4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_diffusion_Injected_m69BFC6432FC6B2605BC56BD78A7D72E76BFAD1F4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_diffusion_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_diffusion_Injected_m806BA1AB7CA01C53C6CEA694F90CF211C7E87DAD (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_diffusion_Injected_m806BA1AB7CA01C53C6CEA694F90CF211C7E87DAD_ftn) (intptr_t, float);
	static AudioReverbFilter_set_diffusion_Injected_m806BA1AB7CA01C53C6CEA694F90CF211C7E87DAD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_diffusion_Injected_m806BA1AB7CA01C53C6CEA694F90CF211C7E87DAD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_diffusion_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_density_Injected_m446892DDFBAC244EE844AD41D61C7160CA9556BF (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_density_Injected_m446892DDFBAC244EE844AD41D61C7160CA9556BF_ftn) (intptr_t);
	static AudioReverbFilter_get_density_Injected_m446892DDFBAC244EE844AD41D61C7160CA9556BF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_density_Injected_m446892DDFBAC244EE844AD41D61C7160CA9556BF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_density_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_density_Injected_mA91322C2DF2F59CCBEC2AB8CB5FA76801AF209B9 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_density_Injected_mA91322C2DF2F59CCBEC2AB8CB5FA76801AF209B9_ftn) (intptr_t, float);
	static AudioReverbFilter_set_density_Injected_mA91322C2DF2F59CCBEC2AB8CB5FA76801AF209B9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_density_Injected_mA91322C2DF2F59CCBEC2AB8CB5FA76801AF209B9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_density_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_hfReference_Injected_m667651B4EF1D52D51C5C8C87DE456BFCB74C912C (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_hfReference_Injected_m667651B4EF1D52D51C5C8C87DE456BFCB74C912C_ftn) (intptr_t);
	static AudioReverbFilter_get_hfReference_Injected_m667651B4EF1D52D51C5C8C87DE456BFCB74C912C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_hfReference_Injected_m667651B4EF1D52D51C5C8C87DE456BFCB74C912C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_hfReference_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_hfReference_Injected_mE56526E2344B1ACDD4F1C382B8C72D650A1316D2 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_hfReference_Injected_mE56526E2344B1ACDD4F1C382B8C72D650A1316D2_ftn) (intptr_t, float);
	static AudioReverbFilter_set_hfReference_Injected_mE56526E2344B1ACDD4F1C382B8C72D650A1316D2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_hfReference_Injected_mE56526E2344B1ACDD4F1C382B8C72D650A1316D2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_hfReference_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_roomLF_Injected_m38B7DFCF2C0ADB44DCFFEE0FD9B89560823C4321 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_roomLF_Injected_m38B7DFCF2C0ADB44DCFFEE0FD9B89560823C4321_ftn) (intptr_t);
	static AudioReverbFilter_get_roomLF_Injected_m38B7DFCF2C0ADB44DCFFEE0FD9B89560823C4321_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_roomLF_Injected_m38B7DFCF2C0ADB44DCFFEE0FD9B89560823C4321_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_roomLF_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_roomLF_Injected_mD6880DD456749EE29D36749925B13DCFC74E32B1 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_roomLF_Injected_mD6880DD456749EE29D36749925B13DCFC74E32B1_ftn) (intptr_t, float);
	static AudioReverbFilter_set_roomLF_Injected_mD6880DD456749EE29D36749925B13DCFC74E32B1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_roomLF_Injected_mD6880DD456749EE29D36749925B13DCFC74E32B1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_roomLF_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_lfReference_Injected_mFFB4BCBD4FF3F1071DF82AFF36520D6EC2CB9BF0 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_lfReference_Injected_mFFB4BCBD4FF3F1071DF82AFF36520D6EC2CB9BF0_ftn) (intptr_t);
	static AudioReverbFilter_get_lfReference_Injected_mFFB4BCBD4FF3F1071DF82AFF36520D6EC2CB9BF0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_lfReference_Injected_mFFB4BCBD4FF3F1071DF82AFF36520D6EC2CB9BF0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_lfReference_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_lfReference_Injected_m2708B2EDCEEAD93C870EFAB7E77E4C5AD0BDEB95 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_lfReference_Injected_m2708B2EDCEEAD93C870EFAB7E77E4C5AD0BDEB95_ftn) (intptr_t, float);
	static AudioReverbFilter_set_lfReference_Injected_m2708B2EDCEEAD93C870EFAB7E77E4C5AD0BDEB95_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_lfReference_Injected_m2708B2EDCEEAD93C870EFAB7E77E4C5AD0BDEB95_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_lfReference_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Microphone_GetMicrophoneDeviceIDFromName_mD33349A5B41E037F04802638690FBA891035C238 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppChar* V_1 = NULL;
	ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{
				V_1 = (Il2CppChar*)((uintptr_t)0);
				return;
			}
		});
		try
		{
			{
				String_t* L_0 = ___0_name;
				bool L_1;
				L_1 = StringMarshaller_TryMarshalEmptyOrNullString_m615203C511071D59295D889AB136575DFFEA90A6_inline(L_0, (&V_2), NULL);
				if (L_1)
				{
					goto IL_0029_1;
				}
			}
			{
				String_t* L_2 = ___0_name;
				ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_3;
				L_3 = MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline(L_2, NULL);
				V_0 = L_3;
				Il2CppChar* L_4;
				L_4 = ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638((&V_0), ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_RuntimeMethod_var);
				V_1 = L_4;
				Il2CppChar* L_5 = V_1;
				int32_t L_6;
				L_6 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&V_0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
				ManagedSpanWrapper__ctor_mB29647A21BB87EA4DF859E5C2FA2207F47E525D2((&V_2), (void*)((uintptr_t)L_5), L_6, NULL);
			}

IL_0029_1:
			{
				int32_t L_7;
				L_7 = Microphone_GetMicrophoneDeviceIDFromName_Injected_mDD8E86D21DFCB9D4BA7DAE10D4A621CB7FC4106E((&V_2), NULL);
				V_3 = L_7;
				goto IL_0038;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		int32_t L_8 = V_3;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* Microphone_StartRecord_m561E1A2B878937E556D6FCABC3FE735CB818D897 (int32_t ___0_deviceID, bool ___1_loop, float ___2_lengthSec, int32_t ___3_frequency, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmarshal_UnmarshalUnityObject_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mCE0FC7E07AAC00447251B3A9FF0478A38BD70191_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_deviceID;
		bool L_1 = ___1_loop;
		float L_2 = ___2_lengthSec;
		int32_t L_3 = ___3_frequency;
		intptr_t L_4;
		L_4 = Microphone_StartRecord_Injected_m6C088832AD607E4C61DE3ABB5333196DB872CA0F(L_0, L_1, L_2, L_3, NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5;
		L_5 = Unmarshal_UnmarshalUnityObject_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mCE0FC7E07AAC00447251B3A9FF0478A38BD70191_inline(L_4, Unmarshal_UnmarshalUnityObject_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mCE0FC7E07AAC00447251B3A9FF0478A38BD70191_RuntimeMethod_var);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_EndRecord_m6F4983F3A002DA6F07F979D42D0750A1C3D16156 (int32_t ___0_deviceID, const RuntimeMethod* method) 
{
	typedef void (*Microphone_EndRecord_m6F4983F3A002DA6F07F979D42D0750A1C3D16156_ftn) (int32_t);
	static Microphone_EndRecord_m6F4983F3A002DA6F07F979D42D0750A1C3D16156_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Microphone_EndRecord_m6F4983F3A002DA6F07F979D42D0750A1C3D16156_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Microphone::EndRecord(System.Int32)");
	_il2cpp_icall_func(___0_deviceID);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* Microphone_Start_mDA38C5376D122F27D9DEFD2AE811BAE460F2242E (String_t* ___0_deviceName, bool ___1_loop, int32_t ___2_lengthSec, int32_t ___3_frequency, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_5 = NULL;
	{
		String_t* L_0 = ___0_deviceName;
		int32_t L_1;
		L_1 = Microphone_GetMicrophoneDeviceIDFromName_mD33349A5B41E037F04802638690FBA891035C238(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_4 = ___0_deviceName;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB7ED4706BFE5D072AD3E5A0F26644FF44E847682)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Microphone_Start_mDA38C5376D122F27D9DEFD2AE811BAE460F2242E_RuntimeMethod_var)));
	}

IL_0021:
	{
		int32_t L_7 = ___2_lengthSec;
		V_2 = (bool)((((int32_t)((((int32_t)L_7) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0048;
		}
	}
	{
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___2_lengthSec), NULL);
		String_t* L_10;
		L_10 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67DB02F1FABDC6C47E8B1ED9A9ADC8E17845BD4F)), L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0ED72C9B4D0AB21E88D08F74AC73C6C8CEC4B7DF)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Microphone_Start_mDA38C5376D122F27D9DEFD2AE811BAE460F2242E_RuntimeMethod_var)));
	}

IL_0048:
	{
		int32_t L_12 = ___2_lengthSec;
		V_3 = (bool)((((int32_t)L_12) > ((int32_t)((int32_t)3600)))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___2_lengthSec), NULL);
		String_t* L_15;
		L_15 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F33A83E7C1398BEA9BE2EB876FECFEF16BCCDBD)), L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0ED72C9B4D0AB21E88D08F74AC73C6C8CEC4B7DF)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_16 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Microphone_Start_mDA38C5376D122F27D9DEFD2AE811BAE460F2242E_RuntimeMethod_var)));
	}

IL_0070:
	{
		int32_t L_17 = ___3_frequency;
		V_4 = (bool)((((int32_t)((((int32_t)L_17) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_0099;
		}
	}
	{
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___3_frequency), NULL);
		String_t* L_20;
		L_20 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral75DC747EA24DB7802D5E580A86C87FFCD3EA69B0)), L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCAEF26BE398F51129C4063A43AD4BF947AC128D6)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_21 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_21, L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Microphone_Start_mDA38C5376D122F27D9DEFD2AE811BAE460F2242E_RuntimeMethod_var)));
	}

IL_0099:
	{
		int32_t L_22 = V_0;
		bool L_23 = ___1_loop;
		int32_t L_24 = ___2_lengthSec;
		int32_t L_25 = ___3_frequency;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_26;
		L_26 = Microphone_StartRecord_m561E1A2B878937E556D6FCABC3FE735CB818D897(L_22, L_23, ((float)L_24), L_25, NULL);
		V_5 = L_26;
		goto IL_00a7;
	}

IL_00a7:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_27 = V_5;
		return L_27;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_End_mB368877FCC9EA1522914006671E637848A0F7CC6 (String_t* ___0_deviceName, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		String_t* L_0 = ___0_deviceName;
		int32_t L_1;
		L_1 = Microphone_GetMicrophoneDeviceIDFromName_mD33349A5B41E037F04802638690FBA891035C238(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		int32_t L_4 = V_0;
		Microphone_EndRecord_m6F4983F3A002DA6F07F979D42D0750A1C3D16156(L_4, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Microphone_get_devices_mC2821E200C36C599DDC37927DEC9EA725240812D (const RuntimeMethod* method) 
{
	typedef StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*Microphone_get_devices_mC2821E200C36C599DDC37927DEC9EA725240812D_ftn) ();
	static Microphone_get_devices_mC2821E200C36C599DDC37927DEC9EA725240812D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Microphone_get_devices_mC2821E200C36C599DDC37927DEC9EA725240812D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Microphone::get_devices()");
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Microphone_GetMicrophoneDeviceIDFromName_Injected_mDD8E86D21DFCB9D4BA7DAE10D4A621CB7FC4106E (ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___0_name, const RuntimeMethod* method) 
{
	typedef int32_t (*Microphone_GetMicrophoneDeviceIDFromName_Injected_mDD8E86D21DFCB9D4BA7DAE10D4A621CB7FC4106E_ftn) (ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E*);
	static Microphone_GetMicrophoneDeviceIDFromName_Injected_mDD8E86D21DFCB9D4BA7DAE10D4A621CB7FC4106E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Microphone_GetMicrophoneDeviceIDFromName_Injected_mDD8E86D21DFCB9D4BA7DAE10D4A621CB7FC4106E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Microphone::GetMicrophoneDeviceIDFromName_Injected(UnityEngine.Bindings.ManagedSpanWrapper&)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_name);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Microphone_StartRecord_Injected_m6C088832AD607E4C61DE3ABB5333196DB872CA0F (int32_t ___0_deviceID, bool ___1_loop, float ___2_lengthSec, int32_t ___3_frequency, const RuntimeMethod* method) 
{
	typedef intptr_t (*Microphone_StartRecord_Injected_m6C088832AD607E4C61DE3ABB5333196DB872CA0F_ftn) (int32_t, bool, float, int32_t);
	static Microphone_StartRecord_Injected_m6C088832AD607E4C61DE3ABB5333196DB872CA0F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Microphone_StartRecord_Injected_m6C088832AD607E4C61DE3ABB5333196DB872CA0F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Microphone::StartRecord_Injected(System.Int32,System.Boolean,System.Single,System.Int32)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_deviceID, ___1_loop, ___2_lengthSec, ___3_frequency);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InvokeSampleFramesAvailable_mEB16F7230AB65A3576BF053AC5719F8E134FBCD4 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, int32_t ___0_sampleFrameCount, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_0 = __this->___sampleFramesAvailable;
		V_0 = (bool)((!(((RuntimeObject*)(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_2 = __this->___sampleFramesAvailable;
		int32_t L_3 = ___0_sampleFrameCount;
		NullCheck(L_2);
		SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_inline(L_2, __this, L_3, NULL);
	}

IL_001c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InvokeSampleFramesOverflow_m66593173A527981F5EB2A5EF77B0C9119DAB5E15 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, int32_t ___0_droppedSampleFrameCount, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_0 = __this->___sampleFramesOverflow;
		V_0 = (bool)((!(((RuntimeObject*)(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_2 = __this->___sampleFramesOverflow;
		int32_t L_3 = ___0_droppedSampleFrameCount;
		NullCheck(L_2);
		SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_inline(L_2, __this, L_3, NULL);
	}

IL_001c:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_Multicast(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* currentDelegate = reinterpret_cast<SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_provider, ___1_sampleFrameCount, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenInst(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	NullCheck(___0_provider);
	typedef void (*FunctionPointerType) (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_provider, ___1_sampleFrameCount, method);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenStatic(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_provider, ___1_sampleFrameCount, method);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenVirtual(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	NullCheck(___0_provider);
	VirtualActionInvoker1< uint32_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_provider, ___1_sampleFrameCount);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenInterface(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	NullCheck(___0_provider);
	InterfaceActionInvoker1< uint32_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_provider, ___1_sampleFrameCount);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenGenericVirtual(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	NullCheck(___0_provider);
	GenericVirtualActionInvoker1< uint32_t >::Invoke(method, ___0_provider, ___1_sampleFrameCount);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenGenericInterface(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	NullCheck(___0_provider);
	GenericInterfaceActionInvoker1< uint32_t >::Invoke(method, ___0_provider, ___1_sampleFrameCount);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleFramesHandler__ctor_m7DDE0BAD439CD80791140C7D42D661B598A7663A (SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC (SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_provider, ___1_sampleFrameCount, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioResource__ctor_m67FD564B101E07B1EA22EF27F3B5FA290A9D1409 (AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipPlayable_Equals_m9C1C75ACBB74FE06AD02BE4643F6EB39413EFF83 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AudioClipPlayable_Equals_m9C1C75ACBB74FE06AD02BE4643F6EB39413EFF83_AdjustorThunk (RuntimeObject* __this, AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 ___0_other, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	bool _returnValue;
	_returnValue = AudioClipPlayable_Equals_m9C1C75ACBB74FE06AD02BE4643F6EB39413EFF83(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixer_SetFloat_m4789959013BE79E4F84F446405914908ADC3F335 (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04_mB656C0201F2C969B922D161F4E2D27A8B077C4EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppChar* V_1 = NULL;
	ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{
				V_1 = (Il2CppChar*)((uintptr_t)0);
				return;
			}
		});
		try
		{
			{
				intptr_t L_0;
				L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04_mB656C0201F2C969B922D161F4E2D27A8B077C4EC_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04_mB656C0201F2C969B922D161F4E2D27A8B077C4EC_RuntimeMethod_var);
				intptr_t L_1 = L_0;
				if (L_1)
				{
					G_B2_0 = L_1;
					goto IL_000f_1;
				}
				G_B1_0 = L_1;
			}
			{
				ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
				G_B2_0 = G_B1_0;
			}

IL_000f_1:
			{
				String_t* L_2 = ___0_name;
				bool L_3;
				L_3 = StringMarshaller_TryMarshalEmptyOrNullString_m615203C511071D59295D889AB136575DFFEA90A6_inline(L_2, (&V_2), NULL);
				if (L_3)
				{
					G_B4_0 = G_B2_0;
					goto IL_0039_1;
				}
				G_B3_0 = G_B2_0;
			}
			{
				String_t* L_4 = ___0_name;
				ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_5;
				L_5 = MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline(L_4, NULL);
				V_0 = L_5;
				Il2CppChar* L_6;
				L_6 = ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638((&V_0), ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_RuntimeMethod_var);
				V_1 = L_6;
				Il2CppChar* L_7 = V_1;
				int32_t L_8;
				L_8 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&V_0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
				ManagedSpanWrapper__ctor_mB29647A21BB87EA4DF859E5C2FA2207F47E525D2((&V_2), (void*)((uintptr_t)L_7), L_8, NULL);
				G_B4_0 = G_B3_0;
			}

IL_0039_1:
			{
				float L_9 = ___1_value;
				bool L_10;
				L_10 = AudioMixer_SetFloat_Injected_m07F1E9A4591C32164F5F72AC357D25A023A0634D(G_B4_0, (&V_2), L_9, NULL);
				V_3 = L_10;
				goto IL_0049;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		bool L_11 = V_3;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixer_GetFloat_mAED8D277AD30D0346292555CBF81D8961117AEC9 (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, String_t* ___0_name, float* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04_mB656C0201F2C969B922D161F4E2D27A8B077C4EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppChar* V_1 = NULL;
	ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{
				V_1 = (Il2CppChar*)((uintptr_t)0);
				return;
			}
		});
		try
		{
			{
				intptr_t L_0;
				L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04_mB656C0201F2C969B922D161F4E2D27A8B077C4EC_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04_mB656C0201F2C969B922D161F4E2D27A8B077C4EC_RuntimeMethod_var);
				intptr_t L_1 = L_0;
				if (L_1)
				{
					G_B2_0 = L_1;
					goto IL_000f_1;
				}
				G_B1_0 = L_1;
			}
			{
				ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
				G_B2_0 = G_B1_0;
			}

IL_000f_1:
			{
				String_t* L_2 = ___0_name;
				bool L_3;
				L_3 = StringMarshaller_TryMarshalEmptyOrNullString_m615203C511071D59295D889AB136575DFFEA90A6_inline(L_2, (&V_2), NULL);
				if (L_3)
				{
					G_B4_0 = G_B2_0;
					goto IL_0039_1;
				}
				G_B3_0 = G_B2_0;
			}
			{
				String_t* L_4 = ___0_name;
				ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_5;
				L_5 = MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline(L_4, NULL);
				V_0 = L_5;
				Il2CppChar* L_6;
				L_6 = ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638((&V_0), ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_RuntimeMethod_var);
				V_1 = L_6;
				Il2CppChar* L_7 = V_1;
				int32_t L_8;
				L_8 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&V_0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
				ManagedSpanWrapper__ctor_mB29647A21BB87EA4DF859E5C2FA2207F47E525D2((&V_2), (void*)((uintptr_t)L_7), L_8, NULL);
				G_B4_0 = G_B3_0;
			}

IL_0039_1:
			{
				float* L_9 = ___1_value;
				bool L_10;
				L_10 = AudioMixer_GetFloat_Injected_m2794EC0D637390AAA8773C47325038AB4ECA8F72(G_B4_0, (&V_2), L_9, NULL);
				V_3 = L_10;
				goto IL_0049;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		bool L_11 = V_3;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixer_SetFloat_Injected_m07F1E9A4591C32164F5F72AC357D25A023A0634D (intptr_t ___0__unity_self, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___1_name, float ___2_value, const RuntimeMethod* method) 
{
	typedef bool (*AudioMixer_SetFloat_Injected_m07F1E9A4591C32164F5F72AC357D25A023A0634D_ftn) (intptr_t, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E*, float);
	static AudioMixer_SetFloat_Injected_m07F1E9A4591C32164F5F72AC357D25A023A0634D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioMixer_SetFloat_Injected_m07F1E9A4591C32164F5F72AC357D25A023A0634D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioMixer::SetFloat_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&,System.Single)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_name, ___2_value);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixer_GetFloat_Injected_m2794EC0D637390AAA8773C47325038AB4ECA8F72 (intptr_t ___0__unity_self, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___1_name, float* ___2_value, const RuntimeMethod* method) 
{
	typedef bool (*AudioMixer_GetFloat_Injected_m2794EC0D637390AAA8773C47325038AB4ECA8F72_ftn) (intptr_t, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E*, float*);
	static AudioMixer_GetFloat_Injected_m2794EC0D637390AAA8773C47325038AB4ECA8F72_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioMixer_GetFloat_Injected_m2794EC0D637390AAA8773C47325038AB4ECA8F72_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioMixer::GetFloat_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&,System.Single&)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_name, ___2_value);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixerPlayable_Equals_mDFB945EB48199A338BAD00D40FB8EEC34CF64D57 (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AudioMixerPlayable_Equals_mDFB945EB48199A338BAD00D40FB8EEC34CF64D57_AdjustorThunk (RuntimeObject* __this, AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C ___0_other, const RuntimeMethod* method)
{
	AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C*>(__this + _offset);
	bool _returnValue;
	_returnValue = AudioMixerPlayable_Equals_mDFB945EB48199A338BAD00D40FB8EEC34CF64D57(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 AudioPlayableOutput_GetHandle_m55153D572F8FB9BCFF3843402A20280273B934AE (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* __this, const RuntimeMethod* method) 
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = __this->___m_Handle;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 AudioPlayableOutput_GetHandle_m55153D572F8FB9BCFF3843402A20280273B934AE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20*>(__this + _offset);
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 _returnValue;
	_returnValue = AudioPlayableOutput_GetHandle_m55153D572F8FB9BCFF3843402A20280273B934AE(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_inline (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_deviceWasChanged, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mobile_get_muteState_m64C1E8C61537317A7F153E1A72F7D39D85DA684D_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->___U3CmuteStateU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mobile_set_muteState_m7C9A464BCA3762330E18CCAD79AF6C47B863CA02_inline (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_value;
		((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->___U3CmuteStateU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_inline (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_data, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_inline (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_position, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlittableArrayWrapper__ctor_mD7869B76C6745D311B8FD895EF3C29428E568971_inline (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* __this, void* ___0_data, int32_t ___1_size, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_data;
		__this->___data = L_0;
		int32_t L_1 = ___1_size;
		__this->___size = L_1;
		__this->___updateFlags = 0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StringMarshaller_TryMarshalEmptyOrNullString_m615203C511071D59295D889AB136575DFFEA90A6_inline (String_t* ___0_s, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___1_managedSpanWrapper, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		String_t* L_0 = ___0_s;
		V_0 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* L_2 = ___1_managedSpanWrapper;
		il2cpp_codegen_initobj(L_2, sizeof(ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E));
		V_1 = (bool)1;
		goto IL_0043;
	}

IL_0015:
	{
		String_t* L_3 = ___0_s;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* L_6 = ___1_managedSpanWrapper;
		uintptr_t L_7;
		L_7 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((int64_t)1), NULL);
		void* L_8;
		L_8 = UIntPtr_op_Explicit_m42C3EA82465934F505B4274A7CE320550A48B7B9(L_7, NULL);
		ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E L_9;
		memset((&L_9), 0, sizeof(L_9));
		ManagedSpanWrapper__ctor_mB29647A21BB87EA4DF859E5C2FA2207F47E525D2((&L_9), L_8, 0, NULL);
		*(ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E*)L_6 = L_9;
		V_1 = (bool)1;
		goto IL_0043;
	}

IL_003f:
	{
		V_1 = (bool)0;
		goto IL_0043;
	}

IL_0043:
	{
		bool L_10 = V_1;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline (String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___0_text;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1));
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_1 = V_0;
		return L_1;
	}

IL_000d:
	{
		String_t* L_2 = ___0_text;
		NullCheck(L_2);
		Il2CppChar* L_3;
		L_3 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_2, NULL);
		String_t* L_4 = ___0_text;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_6;
		memset((&L_6), 0, sizeof(L_6));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_6), L_3, L_5, ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_inline (SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_provider, ___1_sampleFrameCount, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		intptr_t L_1 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0)->___m_CachedPtr;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mED11128A130F01BC9C5F690BFFAEF38B2283751B_gshared_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C MemoryExtensions_AsSpan_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF14C9AF44BF6092EB640C33222BE02E3655EC69C_gshared_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_array;
		Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mA5EF3ABEDD5776174AAEF4D976B58B424F43B275_inline((&L_1), L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlittableArrayWrapper_Unmarshal_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m784D839177D7F17CDDD6FA7463118B5EEE65EFEC_gshared_inline (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___updateFlags;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_0049;
			}
			case 4:
			{
				goto IL_0077;
			}
			case 5:
			{
				goto IL_0080;
			}
		}
	}
	{
		goto IL_0085;
	}

IL_002a:
	{
		goto IL_0085;
	}

IL_002c:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** L_3 = ___0_array;
		void* L_4 = __this->___data;
		int32_t L_5 = __this->___size;
		Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C L_6;
		memset((&L_6), 0, sizeof(L_6));
		Span_1__ctor_m7DF6F0480C6904A216270964E3639CEA4F419C40_inline((&L_6), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_6;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7;
		L_7 = Span_1_ToArray_mAAE4DC737A5BF9A5A29F336EDA790C8AFADA2CDE_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_7);
		goto IL_0085;
	}

IL_0049:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** L_8 = ___0_array;
		void* L_9 = __this->___data;
		void* L_10;
		L_10 = BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1(L_9, NULL);
		int32_t L_11 = __this->___size;
		Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_m7DF6F0480C6904A216270964E3639CEA4F419C40_inline((&L_12), L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_12;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13;
		L_13 = Span_1_ToArray_mAAE4DC737A5BF9A5A29F336EDA790C8AFADA2CDE_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_13);
		void* L_14 = __this->___data;
		BindingsAllocator_FreeNativeOwnedMemory_mA10E308A850EE385485B590326E33E233CFCE656(L_14, NULL);
		goto IL_0085;
	}

IL_0077:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** L_15 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16;
		L_16 = Array_Empty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m44F781E90531F7FCDB12BC4290CD4394A887FC06_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_16);
		goto IL_0085;
	}

IL_0080:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** L_17 = ___0_array;
		*((RuntimeObject**)L_17) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)NULL);
		goto IL_0085;
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Unmarshal_UnmarshalUnityObject_TisRuntimeObject_m2B04FEB8E4BB254DD6F827F3111C91F2AF16D04A_gshared_inline (intptr_t ___0_gcHandlePtr, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	{
		intptr_t L_0 = ___0_gcHandlePtr;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_3 = V_3;
		V_4 = L_3;
		goto IL_0036;
	}

IL_001d:
	{
		intptr_t L_4 = ___0_gcHandlePtr;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_5;
		L_5 = Unmarshal_FromIntPtrUnsafe_mB304834C5EC431CC0FBE13C6BB97066F222BC55C_inline(L_4, NULL);
		V_0 = L_5;
		RuntimeObject* L_6;
		L_6 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline((&V_0), NULL);
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject* L_7 = V_1;
		V_4 = L_7;
		goto IL_0036;
	}

IL_0036:
	{
		RuntimeObject* L_8 = V_4;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_Marshal_TisRuntimeObject_m286B34400A212037E8EBD53DBFEAD7D23CDE8051_gshared_inline (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		V_1 = 0;
		goto IL_001f;
	}

IL_0016:
	{
		RuntimeObject* L_2 = ___0_obj;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_inline(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		intptr_t L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC Unmarshal_FromIntPtrUnsafe_mB304834C5EC431CC0FBE13C6BB97066F222BC55C_inline (intptr_t ___0_gcHandle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_0;
		L_0 = UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_inline((&___0_gcHandle), UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_RuntimeMethod_var);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1 = (*(GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)L_0);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4EBC86E0EACFCA522AEB82874860D0E248D782A5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_RuntimeMethod_var)));
	}

IL_0013:
	{
		intptr_t L_2 = __this->___handle;
		bool L_3;
		L_3 = GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		intptr_t L_4 = __this->___handle;
		RuntimeObject* L_5;
		L_5 = GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline(L_4, NULL);
		return L_5;
	}

IL_002c:
	{
		intptr_t L_6 = __this->___handle;
		RuntimeObject* L_7;
		L_7 = GCHandle_GetTarget_mE0AF851834410E2AEA6285B2497751570236C794(L_6, NULL);
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_ptr;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA5EF3ABEDD5776174AAEF4D976B58B424F43B275_gshared_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		goto IL_0037;
	}

IL_0037:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		float* L_4;
		L_4 = il2cpp_unsafe_as_ref<float>(L_3);
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m7DF6F0480C6904A216270964E3639CEA4F419C40_gshared_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		float* L_2;
		L_2 = il2cpp_unsafe_as_ref<float>((uint8_t*)L_1);
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Span_1_ToArray_mAAE4DC737A5BF9A5A29F336EDA790C8AFADA2CDE_gshared_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method) 
{
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1;
		L_1 = Array_Empty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m44F781E90531F7FCDB12BC4290CD4394A887FC06_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		float* L_6;
		L_6 = il2cpp_unsafe_as_ref<float>(L_5);
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_7 = __this->____pointer;
		V_0 = L_7;
		float* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8E65A20A53C662400685CE50AE11C2A80FBC6D7C(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Array_Empty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m44F781E90531F7FCDB12BC4290CD4394A887FC06_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ((EmptyArray_1_t2984B8F74E4B1E6C047125D296C6C06779CA328D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___handle;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_0, 0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_handle;
		return (bool)((((intptr_t)((intptr_t)(L_0&((intptr_t)1)))) == ((intptr_t)((intptr_t)0)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_handle;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		RuntimeObject** L_2;
		L_2 = il2cpp_unsafe_as_ref<RuntimeObject*>((intptr_t*)L_1);
		RuntimeObject* L_3 = *((RuntimeObject**)L_2);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		NullCheck(L_0);
		uint8_t* L_1 = (uint8_t*)(&L_0->___Data);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_gshared_inline (intptr_t* ___0_from, const RuntimeMethod* method) 
{
	{
		intptr_t* L_0 = ___0_from;
		return (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
