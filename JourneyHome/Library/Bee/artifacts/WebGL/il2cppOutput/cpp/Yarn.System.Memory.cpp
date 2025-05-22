#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

struct Dictionary_2_tAC32B254416DD510DC3E7E36B0706A6B031D7A53;
struct IEnumerator_1_tD1E868EC4EE9679F2F2D4F9F10CEAB9153B8C991;
struct Pinnable_1_tC32B390497BA250CAE9F0877F6E0DABAD3D80D63;
struct Pinnable_1_tA08A98AD4B692A86ECC193BAF63E576FBFF35331;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1;
struct Assembly_t;
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
struct EmbeddedAttribute_tCEFFB1201C1BB0881D71D96CBB147B1E464B4537;
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
struct Exception_t;
struct FieldInfo_t;
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IResourceGroveler_tDEE701BD41E9E5D260606F79F75427B42C4CC0C0;
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct IsByRefLikeAttribute_t149CED1B601A3A166F3D87130B85AD0AB256843B;
struct IsReadOnlyAttribute_t7984A854E62D5FBFE85EBC3A2544706DA56DD45D;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB;
struct RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D;
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct CultureNameResourceSetPair_t06C5772C09CA853E70E42C0E8BC57FE0AA2CB674;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgument_tCF894072A49AAB411FD03B2CC90C7232DD9E3493_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t85510791EE47AB402E6058CC72BAA49072EC73B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tB708E9C2FA823B01C747E05E9A94F71093AAE6F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tD1E868EC4EE9679F2F2D4F9F10CEAB9153B8C991_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryExtensions_t5EE3083E25A94B7AB6C0107FDF5873E5181AACAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlySequence_1_tB92F573CB7E60063E617333D588EDAF0441B397B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78;
IL2CPP_EXTERN_C String_t* _stringLiteral44B6E521D3C115CEA4878E4F981B5C2ACC1C885A;
IL2CPP_EXTERN_C String_t* _stringLiteral4CC20FA775B7CE5630588715DBC10889D01DC6F1;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral819CA64A4459548685C67A2CD1C9D5E94F49CCD5;
IL2CPP_EXTERN_C String_t* _stringLiteral89BF668EA220E1F9C98F61872576447AF8F92A3F;
IL2CPP_EXTERN_C String_t* _stringLiteralD47A3426BF2C027AE854619E7EAB1FEB5E8491AD;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m74D0716355DF6DDA455D362766EB0F0EB7B35A79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC280D535BF5CF608CFD0126E737B188BBD8B34DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Read_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m1D5C322C1040939742B19BF70F18CD61D1A59623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mC7AC8CF7AFDFE531B723DF14C091878C94C7B91A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Write_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m07C3207284A428FF36F5AE4F3A605158AC92BFA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyMemory_1__ctor_m5084CF90420F0309B9E55A80D68AB13C01D84B09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySequence_1_TryGetString_m1FC6144676AB2C4476126268E6E6DAC654F25343_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_mC5E3B1692AED1CB09CCF2C71C7DFDB94C7655F55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m9C37B08D49CB3D3A8C5631C5260CC4A7D98CC328_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_mBA0124F96297CC2B74A6177E403DFAE7CE550A1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentException_DestinationTooShort_mA7BE680CD0772A296522803C093CAEABC97C76B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_mB90A359B600D798B8ADA13CE5192D2D6A80517D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentNullException_mB0F8F345FF63B1EC4020C67E7CB16498F1B25EBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentOutOfRangeException_mE939B7FD875E973E116C36C102558EEF80EACD2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentOutOfRangeException_mEECE035AE49F378B431CBD7F04A8C96F6C67B1D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArrayTypeMismatchException_m0E4F11BE6594EF55DA1BAE844B78F6EF03F48A0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowIndexOutOfRangeException_mA039EA63C3968B3D99B1C37E55B58B3EB5C13157_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowInvalidOperationException_EndPositionNotReached_mCFA288CF8DBAAC21A99E2B5D3BC7C1978AC5140C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1_get_Count_m62B39B4108D90727F1E8FBC7E810066A01CEF4E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1_op_Equality_mC02E4B83ECFD21267742B698B874C5FF5178E033_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1_op_Inequality_mBD50B06B4F13EDD357C1959868BFA04742D95A91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* SR_tB44EE0FB91B3DFAAD599FD4112045128BD764946_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t411F8C81FF0782AA2A1B9840F3A8A986EFCB5872 
{
};
struct PerTypeValues_1_t57EF5A4BB8DB67AB315C8201A9BF2214979FC5BD  : public RuntimeObject
{
};
struct PerTypeValues_1_t0E8A33CA4D73B1CC849AA23CEAC0C12662265E12  : public RuntimeObject
{
};
struct Pinnable_1_tA08A98AD4B692A86ECC193BAF63E576FBFF35331  : public RuntimeObject
{
	Il2CppChar ___Data;
};
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};
struct BinaryPrimitives_tB3B918E6F70F308023C765B630BC298486ED3CB3  : public RuntimeObject
{
};
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27  : public RuntimeObject
{
};
struct BuffersExtensions_tEAED945D4A15E6947AE016A8F96A41E3ED8FDA80  : public RuntimeObject
{
};
struct HashHelpers_t85510791EE47AB402E6058CC72BAA49072EC73B0  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct MemoryExtensions_t5EE3083E25A94B7AB6C0107FDF5873E5181AACAE  : public RuntimeObject
{
};
struct MemoryMarshal_t1C275D80AB93D8B7BF4B2DD56467527FC963D2E1  : public RuntimeObject
{
};
struct ReadOnlySequence_t415886FE867826E1A656BE0573CAF8A4554A3BE6  : public RuntimeObject
{
};
struct SR_tB44EE0FB91B3DFAAD599FD4112045128BD764946  : public RuntimeObject
{
};
struct SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5  : public RuntimeObject
{
};
struct SequenceMarshal_t9EA8142DD318749EBFD46B267B079AE44A931D0B  : public RuntimeObject
{
};
struct SpanHelpers_tFC79FFD9F13319EB327F56D1CEBC8C5FCD445796  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ThrowHelper_t5DCC47CEE1C24BB796FA6D2FAC30E89EE6489231  : public RuntimeObject
{
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
struct ReadOnlyMemory_1_t50B68E359CC5C40CFBA97B2953C0C60AD813F6D0 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef ReadOnlyMemory_1_tCFA998A18464B99322FB23BC3FC6CFFD2CAACC52_marshaled_pinvoke_define
#define ReadOnlyMemory_1_tCFA998A18464B99322FB23BC3FC6CFFD2CAACC52_marshaled_pinvoke_define
struct ReadOnlyMemory_1_tCFA998A18464B99322FB23BC3FC6CFFD2CAACC52_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef ReadOnlyMemory_1_tCFA998A18464B99322FB23BC3FC6CFFD2CAACC52_marshaled_com_define
#define ReadOnlyMemory_1_tCFA998A18464B99322FB23BC3FC6CFFD2CAACC52_marshaled_com_define
struct ReadOnlyMemory_1_tCFA998A18464B99322FB23BC3FC6CFFD2CAACC52_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
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
struct EmbeddedAttribute_tCEFFB1201C1BB0881D71D96CBB147B1E464B4537  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
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
struct FieldInfo_t  : public MemberInfo_t
{
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct IsByRefLikeAttribute_t149CED1B601A3A166F3D87130B85AD0AB256843B  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct IsReadOnlyAttribute_t7984A854E62D5FBFE85EBC3A2544706DA56DD45D  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct NUInt_t0B0CF9DC99943B2B2EFB5667D439EF1A6D6C1FED 
{
	void* ____value;
};
struct Register_tED740C8D565E7E56D0BC8803297D67EABFDF151D 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___byte_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___byte_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_1_OffsetPadding[1];
			uint8_t ___byte_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___byte_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_2_OffsetPadding[2];
			uint8_t ___byte_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___byte_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_3_OffsetPadding[3];
			uint8_t ___byte_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___byte_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_4_OffsetPadding[4];
			uint8_t ___byte_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___byte_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_5_OffsetPadding[5];
			uint8_t ___byte_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___byte_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_6_OffsetPadding[6];
			uint8_t ___byte_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___byte_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_7_OffsetPadding[7];
			uint8_t ___byte_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___byte_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_8_OffsetPadding[8];
			uint8_t ___byte_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___byte_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_9_OffsetPadding[9];
			uint8_t ___byte_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___byte_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_10_OffsetPadding[10];
			uint8_t ___byte_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___byte_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_11_OffsetPadding[11];
			uint8_t ___byte_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___byte_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_12_OffsetPadding[12];
			uint8_t ___byte_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___byte_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_13_OffsetPadding[13];
			uint8_t ___byte_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___byte_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_14_OffsetPadding[14];
			uint8_t ___byte_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___byte_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_15_OffsetPadding[15];
			uint8_t ___byte_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___byte_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___sbyte_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___sbyte_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_1_OffsetPadding[1];
			int8_t ___sbyte_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_1_OffsetPadding_forAlignmentOnly[1];
			int8_t ___sbyte_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_2_OffsetPadding[2];
			int8_t ___sbyte_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_2_OffsetPadding_forAlignmentOnly[2];
			int8_t ___sbyte_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_3_OffsetPadding[3];
			int8_t ___sbyte_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_3_OffsetPadding_forAlignmentOnly[3];
			int8_t ___sbyte_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_4_OffsetPadding[4];
			int8_t ___sbyte_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___sbyte_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_5_OffsetPadding[5];
			int8_t ___sbyte_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_5_OffsetPadding_forAlignmentOnly[5];
			int8_t ___sbyte_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_6_OffsetPadding[6];
			int8_t ___sbyte_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_6_OffsetPadding_forAlignmentOnly[6];
			int8_t ___sbyte_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_7_OffsetPadding[7];
			int8_t ___sbyte_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_7_OffsetPadding_forAlignmentOnly[7];
			int8_t ___sbyte_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_8_OffsetPadding[8];
			int8_t ___sbyte_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_8_OffsetPadding_forAlignmentOnly[8];
			int8_t ___sbyte_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_9_OffsetPadding[9];
			int8_t ___sbyte_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_9_OffsetPadding_forAlignmentOnly[9];
			int8_t ___sbyte_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_10_OffsetPadding[10];
			int8_t ___sbyte_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_10_OffsetPadding_forAlignmentOnly[10];
			int8_t ___sbyte_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_11_OffsetPadding[11];
			int8_t ___sbyte_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_11_OffsetPadding_forAlignmentOnly[11];
			int8_t ___sbyte_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_12_OffsetPadding[12];
			int8_t ___sbyte_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_12_OffsetPadding_forAlignmentOnly[12];
			int8_t ___sbyte_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_13_OffsetPadding[13];
			int8_t ___sbyte_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_13_OffsetPadding_forAlignmentOnly[13];
			int8_t ___sbyte_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_14_OffsetPadding[14];
			int8_t ___sbyte_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_14_OffsetPadding_forAlignmentOnly[14];
			int8_t ___sbyte_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_15_OffsetPadding[15];
			int8_t ___sbyte_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_15_OffsetPadding_forAlignmentOnly[15];
			int8_t ___sbyte_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___uint16_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___uint16_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_1_OffsetPadding[2];
			uint16_t ___uint16_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_1_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___uint16_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_2_OffsetPadding[4];
			uint16_t ___uint16_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_2_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___uint16_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_3_OffsetPadding[6];
			uint16_t ___uint16_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_3_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___uint16_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_4_OffsetPadding[8];
			uint16_t ___uint16_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_4_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___uint16_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_5_OffsetPadding[10];
			uint16_t ___uint16_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_5_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___uint16_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_6_OffsetPadding[12];
			uint16_t ___uint16_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_6_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___uint16_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_7_OffsetPadding[14];
			uint16_t ___uint16_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_7_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___uint16_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___int16_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___int16_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_1_OffsetPadding[2];
			int16_t ___int16_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_1_OffsetPadding_forAlignmentOnly[2];
			int16_t ___int16_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_2_OffsetPadding[4];
			int16_t ___int16_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_2_OffsetPadding_forAlignmentOnly[4];
			int16_t ___int16_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_3_OffsetPadding[6];
			int16_t ___int16_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_3_OffsetPadding_forAlignmentOnly[6];
			int16_t ___int16_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_4_OffsetPadding[8];
			int16_t ___int16_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_4_OffsetPadding_forAlignmentOnly[8];
			int16_t ___int16_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_5_OffsetPadding[10];
			int16_t ___int16_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_5_OffsetPadding_forAlignmentOnly[10];
			int16_t ___int16_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_6_OffsetPadding[12];
			int16_t ___int16_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_6_OffsetPadding_forAlignmentOnly[12];
			int16_t ___int16_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_7_OffsetPadding[14];
			int16_t ___int16_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_7_OffsetPadding_forAlignmentOnly[14];
			int16_t ___int16_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___uint32_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uint32_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_1_OffsetPadding[4];
			uint32_t ___uint32_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_1_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uint32_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_2_OffsetPadding[8];
			uint32_t ___uint32_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_2_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___uint32_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_3_OffsetPadding[12];
			uint32_t ___uint32_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_3_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___uint32_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___int32_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___int32_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_1_OffsetPadding[4];
			int32_t ___int32_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___int32_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_2_OffsetPadding[8];
			int32_t ___int32_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_2_OffsetPadding_forAlignmentOnly[8];
			int32_t ___int32_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_3_OffsetPadding[12];
			int32_t ___int32_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_3_OffsetPadding_forAlignmentOnly[12];
			int32_t ___int32_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___uint64_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___uint64_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint64_1_OffsetPadding[8];
			uint64_t ___uint64_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint64_1_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___uint64_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___int64_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___int64_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int64_1_OffsetPadding[8];
			int64_t ___int64_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int64_1_OffsetPadding_forAlignmentOnly[8];
			int64_t ___int64_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___single_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___single_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_1_OffsetPadding[4];
			float ___single_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_1_OffsetPadding_forAlignmentOnly[4];
			float ___single_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_2_OffsetPadding[8];
			float ___single_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_2_OffsetPadding_forAlignmentOnly[8];
			float ___single_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_3_OffsetPadding[12];
			float ___single_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_3_OffsetPadding_forAlignmentOnly[12];
			float ___single_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___double_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___double_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___double_1_OffsetPadding[8];
			double ___double_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___double_1_OffsetPadding_forAlignmentOnly[8];
			double ___double_1_forAlignmentOnly;
		};
	};
};
struct SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0 
{
	RuntimeObject* ____object;
	int32_t ____integer;
};
struct SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____integer;
};
struct SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____integer;
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
struct ReadOnlySequence_1_tB92F573CB7E60063E617333D588EDAF0441B397B 
{
	SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0 ____sequenceStart;
	SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0 ____sequenceEnd;
};
struct ReadOnlySpan_1_tCF05C1E093B5ADFC0C1F96FE3ACC364340B054EF 
{
	Pinnable_1_tC32B390497BA250CAE9F0877F6E0DABAD3D80D63* ____pinnable;
	intptr_t ____byteOffset;
	int32_t ____length;
};
struct ReadOnlySpan_1_t2A13CC482E53CF4B549A5F0090211E721E4CCF1D 
{
	Pinnable_1_tA08A98AD4B692A86ECC193BAF63E576FBFF35331* ____pinnable;
	intptr_t ____byteOffset;
	int32_t ____length;
};
struct Span_1_t0A0439AD0EC86806417DBF8E80BC87C0383B3945 
{
	Pinnable_1_tC32B390497BA250CAE9F0877F6E0DABAD3D80D63* ____pinnable;
	intptr_t ____byteOffset;
	int32_t ____length;
};
struct Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9 
{
	Register_tED740C8D565E7E56D0BC8803297D67EABFDF151D ___register;
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
struct ExceptionArgument_tCF894072A49AAB411FD03B2CC90C7232DD9E3493 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StringComparison_tE14A55CCFA001A5AC85D754179BF2888F45CC94D 
{
	int32_t ___value__;
};
struct UltimateResourceFallbackLocation_tFA91547D7BF4CEF1101A7C391ECB7B73EE073AB6 
{
	int32_t ___value__;
};
struct ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB  : public RuntimeObject
{
	String_t* ___BaseNameField;
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___ResourceSets;
	Dictionary_2_tAC32B254416DD510DC3E7E36B0706A6B031D7A53* ____resourceSets;
	String_t* ___moduleDir;
	Assembly_t* ___MainAssembly;
	Type_t* ____locationInfo;
	Type_t* ____userResourceSet;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____neutralResourcesCulture;
	CultureNameResourceSetPair_t06C5772C09CA853E70E42C0E8BC57FE0AA2CB674* ____lastUsedResourceCache;
	bool ____ignoreCase;
	bool ___UseManifest;
	bool ___UseSatelliteAssem;
	int32_t ____fallbackLoc;
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ____satelliteContractVersion;
	bool ____lookedForSatelliteContractVersion;
	Assembly_t* ____callingAssembly;
	RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF* ___m_callingAssembly;
	RuntimeObject* ___resourceGroveler;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D  : public Type_t
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct PerTypeValues_1_t57EF5A4BB8DB67AB315C8201A9BF2214979FC5BD_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_t0E8A33CA4D73B1CC849AA23CEAC0C12662265E12_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields
{
	bool ___IsLittleEndian;
};
struct HashHelpers_t85510791EE47AB402E6058CC72BAA49072EC73B0_StaticFields
{
	int32_t ___RandomSeed;
};
struct MemoryExtensions_t5EE3083E25A94B7AB6C0107FDF5873E5181AACAE_StaticFields
{
	intptr_t ___StringAdjustment;
};
struct SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_StaticFields
{
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* ___s_resourceManager;
	Type_t* ___U3CResourceTypeU3Ek__BackingField;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
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
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray;
};
struct Guid_t_StaticFields
{
	Guid_t ___Empty;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct UIntPtr_t_StaticFields
{
	uintptr_t ___Zero;
};
struct ReadOnlySequence_1_tB92F573CB7E60063E617333D588EDAF0441B397B_StaticFields
{
	ReadOnlySequence_1_tB92F573CB7E60063E617333D588EDAF0441B397B ___Empty;
};
struct Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9_StaticFields
{
	int32_t ___s_count;
	Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9 ___zero;
	Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9 ___one;
	Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9 ___allOnes;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_StaticFields
{
	int32_t ___MagicNumber;
	int32_t ___HeaderVersionNumber;
	Type_t* ____minResourceSet;
	String_t* ___ResReaderTypeName;
	String_t* ___ResSetTypeName;
	String_t* ___MscorlibName;
	int32_t ___DEBUG;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC5E3B1692AED1CB09CCF2C71C7DFDB94C7655F55_gshared_inline (ReadOnlySpan_1_t2A13CC482E53CF4B549A5F0090211E721E4CCF1D* __this, Pinnable_1_tA08A98AD4B692A86ECC193BAF63E576FBFF35331* ___0_pinnable, intptr_t ___1_byteOffset, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlyMemory_1__ctor_m5084CF90420F0309B9E55A80D68AB13C01D84B09_gshared_inline (ReadOnlyMemory_1_t50B68E359CC5C40CFBA97B2953C0C60AD813F6D0* __this, RuntimeObject* ___0_obj, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m62B39B4108D90727F1E8FBC7E810066A01CEF4E4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_op_Inequality_mBD50B06B4F13EDD357C1959868BFA04742D95A91_gshared_inline (Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9 ___0_left, Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9 ___1_right, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_op_Equality_mC02E4B83ECFD21267742B698B874C5FF5178E033_gshared_inline (Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9 ___0_left, Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9 ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySequence_1_TryGetString_m1FC6144676AB2C4476126268E6E6DAC654F25343_gshared (ReadOnlySequence_1_tB92F573CB7E60063E617333D588EDAF0441B397B* __this, String_t** ___0_text, int32_t* ___1_start, int32_t* ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t MemoryMarshal_Read_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m1D5C322C1040939742B19BF70F18CD61D1A59623_gshared_inline (ReadOnlySpan_1_tCF05C1E093B5ADFC0C1F96FE3ACC364340B054EF ___0_source, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryMarshal_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mC7AC8CF7AFDFE531B723DF14C091878C94C7B91A_gshared_inline (Span_1_t0A0439AD0EC86806417DBF8E80BC87C0383B3945 ___0_destination, uint32_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryMarshal_Write_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m07C3207284A428FF36F5AE4F3A605158AC92BFA5_gshared_inline (Span_1_t0A0439AD0EC86806417DBF8E80BC87C0383B3945 ___0_destination, uint64_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_m294EF36D54286AA6FFFB5C872BB0698549A41DCA_gshared (Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9* __this, Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0A08BB41F5E1A70660B21A64F282E92E59D16664_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m9C37B08D49CB3D3A8C5631C5260CC4A7D98CC328_gshared_inline (ReadOnlySpan_1_tCF05C1E093B5ADFC0C1F96FE3ACC364340B054EF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC280D535BF5CF608CFD0126E737B188BBD8B34DF_gshared (ReadOnlySpan_1_tCF05C1E093B5ADFC0C1F96FE3ACC364340B054EF ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m1A6EBCE81916353552BDE7D1AE00383A820DB26D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mBA0124F96297CC2B74A6177E403DFAE7CE550A1E_gshared_inline (Span_1_t0A0439AD0EC86806417DBF8E80BC87C0383B3945* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m74D0716355DF6DDA455D362766EB0F0EB7B35A79_gshared (Span_1_t0A0439AD0EC86806417DBF8E80BC87C0383B3945 ___0_span, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SequencePosition__ctor_m76B543A998FF27B79B37EEF8AB10B1B165FE5B6F (SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0* __this, RuntimeObject* ___0_object, int32_t ___1_integer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SequencePosition_GetObject_m6270FB7EF92286558F3053CF1A9AF22FF6FB03F1_inline (SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SequencePosition_GetInteger_mE57898E6D4C23D1E0D0D6615F278BBA67DB1767F_inline (SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7 (RuntimeObject* ___0_objA, RuntimeObject* ___1_objB, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SequencePosition_Equals_m9C60848B8A498B093DB54E4C9EF0113E0132AAE2 (SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0* __this, SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SequencePosition_Equals_m0E6EF5D19B2A9BC4CA216281F7C95CD672140B69 (SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_Combine_m385B341295B27D9ACDD3EE970B50345AC9E15508 (int32_t ___0_h1, int32_t ___1_h2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SequencePosition_GetHashCode_m7842647CFB786D21F669201B1B9FBC5BA6D47DAB (SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateArgumentNullException_m4FB3EF5B75FF3DDC5A1D64747183A1E4E4778D8F (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateArrayTypeMismatchException_mA90AD247C31D63AF4C1D0A8A5B1E65449ACCA9FF (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayTypeMismatchException__ctor_mD1BAAE9B73BA9E5948655553019ED8DE4F306D8B (ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateArgumentException_InvalidTypeWithPointersNotSupported_mEFE24238017BE6E844FF93FF12D27E0AC13B350E (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Argument_InvalidTypeWithPointersNotSupported_m8DE23481F229D5E574822BE1853FE08EA9B46C9F (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mF4B48F758B9E8BAFBDE53166798269599BE0C1FF (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateArgumentException_DestinationTooShort_m1D410F0935A2BE34C3DE3B55E9AEA6638D081F93 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Argument_DestinationTooShort_m1BB390B2EB53A286963744393280B0FE4769FC0B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateIndexOutOfRangeException_m14186015EE29AAF9A6BED7AF0E0CD8524442C5CC (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m270ED9671475CE680EEA8C62A7A43308AE4188EF (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateArgumentOutOfRangeException_m71A787FDB935FBC64872B80A2FA845CFE73B808F (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateArgumentOutOfRangeException_mB2E905118231FBC13D4615CA029261DA468C48EC (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateInvalidOperationException_EndPositionNotReached_m52F07FA4E835836AAE7FD6760E94C54A305D2A08 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_EndPositionNotReached_mF49CA87E992A0603592C330BA362F8D2833C4371 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mC5E3B1692AED1CB09CCF2C71C7DFDB94C7655F55_inline (ReadOnlySpan_1_t2A13CC482E53CF4B549A5F0090211E721E4CCF1D* __this, Pinnable_1_tA08A98AD4B692A86ECC193BAF63E576FBFF35331* ___0_pinnable, intptr_t ___1_byteOffset, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t2A13CC482E53CF4B549A5F0090211E721E4CCF1D*, Pinnable_1_tA08A98AD4B692A86ECC193BAF63E576FBFF35331*, intptr_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mC5E3B1692AED1CB09CCF2C71C7DFDB94C7655F55_gshared_inline)(__this, ___0_pinnable, ___1_byteOffset, ___2_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mEECE035AE49F378B431CBD7F04A8C96F6C67B1D4 (int32_t ___0_argument, const RuntimeMethod* method) ;
inline void ReadOnlyMemory_1__ctor_m5084CF90420F0309B9E55A80D68AB13C01D84B09_inline (ReadOnlyMemory_1_t50B68E359CC5C40CFBA97B2953C0C60AD813F6D0* __this, RuntimeObject* ___0_obj, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyMemory_1_t50B68E359CC5C40CFBA97B2953C0C60AD813F6D0*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))ReadOnlyMemory_1__ctor_m5084CF90420F0309B9E55A80D68AB13C01D84B09_gshared_inline)(__this, ___0_obj, ___1_start, ___2_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MemoryExtensions_MeasureStringAdjustment_m7682AFAFF56CE5D5054834B6F0F9B37DF7798077 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1 (int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NUInt_op_Explicit_mC163D9B735A039C7266948F8F85F4D2EBA9AD89B_inline (NUInt_t0B0CF9DC99943B2B2EFB5667D439EF1A6D6C1FED ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_get_IsHardwareAccelerated_mA88F4CB69DCE46A84547F465998F0529948E70AC (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
inline int32_t Vector_1_get_Count_m62B39B4108D90727F1E8FBC7E810066A01CEF4E4_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))Vector_1_get_Count_m62B39B4108D90727F1E8FBC7E810066A01CEF4E4_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Subtraction_m2DC92629D40D71225E73882220D24144A26D443F (intptr_t ___0_pointer, int32_t ___1_offset, const RuntimeMethod* method) ;
inline bool Vector_1_op_Inequality_mBD50B06B4F13EDD357C1959868BFA04742D95A91_inline (Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9 ___0_left, Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9, Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9, const RuntimeMethod*))Vector_1_op_Inequality_mBD50B06B4F13EDD357C1959868BFA04742D95A91_gshared_inline)(___0_left, ___1_right, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A (intptr_t ___0_pointer, int32_t ___1_offset, const RuntimeMethod* method) ;
inline bool Vector_1_op_Equality_mC02E4B83ECFD21267742B698B874C5FF5178E033_inline (Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9 ___0_left, Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9, Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9, const RuntimeMethod*))Vector_1_op_Equality_mC02E4B83ECFD21267742B698B874C5FF5178E033_gshared_inline)(___0_left, ___1_right, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIntPtr_op_Inequality_m9C09B4CB3986B59EC207CC62000C761A1F161161 (uintptr_t ___0_value1, uintptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIntPtr_op_Equality_m6854CBDA705729A896265CF7D2BD522E3460DCFB (uintptr_t ___0_value1, uintptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5 (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18 (Type_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8 (Type_t* ___0_nullableType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsStatic_mEBBEB7B19A48D3E11BE830F3704C131A681F6139 (FieldInfo_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferencesCore_mCA2C49F48C0939B6B219D80418FEA198CC391F34 (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NUInt__ctor_m0A2AA2F9576FB75407F0497CA3BEC3FF7A9DB6C4 (NUInt_t0B0CF9DC99943B2B2EFB5667D439EF1A6D6C1FED* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NUInt__ctor_mC06378BB7FDC15F0AC2EC6AF70DC73FB1AA0F010 (NUInt_t0B0CF9DC99943B2B2EFB5667D439EF1A6D6C1FED* __this, uint64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* SR_get_ResourceType_m006BB8031B3065D26720905A0C651672BA161D87_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ResourceManager__ctor_mC93D478F43E5089ACC407FDECF067A0F208A3784 (ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* __this, Type_t* ___0_resourceSource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* SR_get_ResourceManager_m0D192A9CB6B3FBF42C55008100DD42DFACC5D74F (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m7BDFC0B951005B9DC2BAED464AFE68FF7E9ACE5A (String_t* __this, String_t* ___0_value, int32_t ___1_comparisonType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_mC39415449522C59493CDE0D7C329FB001DE26C6A (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m1DE9E42021535E27E1623C55608AC7EF370AB3D7 (String_t* ___0_separator, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_mC7C1DDB92774C63670D58F45D0C56D0343A057A2 (String_t* ___0_resourceKey, String_t* ___1_defaultString, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408 (Guid_t* __this, const RuntimeMethod* method) ;
inline bool ReadOnlySequence_1_TryGetString_m1FC6144676AB2C4476126268E6E6DAC654F25343 (ReadOnlySequence_1_tB92F573CB7E60063E617333D588EDAF0441B397B* __this, String_t** ___0_text, int32_t* ___1_start, int32_t* ___2_length, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySequence_1_tB92F573CB7E60063E617333D588EDAF0441B397B*, String_t**, int32_t*, int32_t*, const RuntimeMethod*))ReadOnlySequence_1_TryGetString_m1FC6144676AB2C4476126268E6E6DAC654F25343_gshared)(__this, ___0_text, ___1_start, ___2_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReverseEndianness_m700F1976C80E5F882FDE693373C46B7FFAB5A3A9_inline (uint32_t ___0_value, const RuntimeMethod* method) ;
inline uint64_t MemoryMarshal_Read_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m1D5C322C1040939742B19BF70F18CD61D1A59623_inline (ReadOnlySpan_1_tCF05C1E093B5ADFC0C1F96FE3ACC364340B054EF ___0_source, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (ReadOnlySpan_1_tCF05C1E093B5ADFC0C1F96FE3ACC364340B054EF, const RuntimeMethod*))MemoryMarshal_Read_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m1D5C322C1040939742B19BF70F18CD61D1A59623_gshared_inline)(___0_source, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t BinaryPrimitives_ReverseEndianness_mFAA3F86AB4735F79E222F8215DA1FCF29AA925B2_inline (uint64_t ___0_value, const RuntimeMethod* method) ;
inline void MemoryMarshal_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mC7AC8CF7AFDFE531B723DF14C091878C94C7B91A_inline (Span_1_t0A0439AD0EC86806417DBF8E80BC87C0383B3945 ___0_destination, uint32_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t0A0439AD0EC86806417DBF8E80BC87C0383B3945, uint32_t*, const RuntimeMethod*))MemoryMarshal_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mC7AC8CF7AFDFE531B723DF14C091878C94C7B91A_gshared_inline)(___0_destination, ___1_value, method);
}
inline void MemoryMarshal_Write_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m07C3207284A428FF36F5AE4F3A605158AC92BFA5_inline (Span_1_t0A0439AD0EC86806417DBF8E80BC87C0383B3945 ___0_destination, uint64_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t0A0439AD0EC86806417DBF8E80BC87C0383B3945, uint64_t*, const RuntimeMethod*))MemoryMarshal_Write_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m07C3207284A428FF36F5AE4F3A605158AC92BFA5_gshared_inline)(___0_destination, ___1_value, method);
}
inline bool Vector_1_Equals_m294EF36D54286AA6FFFB5C872BB0698549A41DCA (Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9* __this, Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9*, Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9, const RuntimeMethod*))Vector_1_Equals_m294EF36D54286AA6FFFB5C872BB0698549A41DCA_gshared)(__this, ___0_other, method);
}
inline bool SpanHelpers_IsReferenceOrContainsReferences_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0A08BB41F5E1A70660B21A64F282E92E59D16664_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))SpanHelpers_IsReferenceOrContainsReferences_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0A08BB41F5E1A70660B21A64F282E92E59D16664_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_mB90A359B600D798B8ADA13CE5192D2D6A80517D3 (Type_t* ___0_type, const RuntimeMethod* method) ;
inline int32_t ReadOnlySpan_1_get_Length_m9C37B08D49CB3D3A8C5631C5260CC4A7D98CC328_inline (ReadOnlySpan_1_tCF05C1E093B5ADFC0C1F96FE3ACC364340B054EF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tCF05C1E093B5ADFC0C1F96FE3ACC364340B054EF*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m9C37B08D49CB3D3A8C5631C5260CC4A7D98CC328_gshared_inline)(__this, method);
}
inline uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC280D535BF5CF608CFD0126E737B188BBD8B34DF (ReadOnlySpan_1_tCF05C1E093B5ADFC0C1F96FE3ACC364340B054EF ___0_span, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (ReadOnlySpan_1_tCF05C1E093B5ADFC0C1F96FE3ACC364340B054EF, const RuntimeMethod*))MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC280D535BF5CF608CFD0126E737B188BBD8B34DF_gshared)(___0_span, method);
}
inline bool SpanHelpers_IsReferenceOrContainsReferences_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m1A6EBCE81916353552BDE7D1AE00383A820DB26D_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))SpanHelpers_IsReferenceOrContainsReferences_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m1A6EBCE81916353552BDE7D1AE00383A820DB26D_gshared_inline)(method);
}
inline int32_t Span_1_get_Length_mBA0124F96297CC2B74A6177E403DFAE7CE550A1E_inline (Span_1_t0A0439AD0EC86806417DBF8E80BC87C0383B3945* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t0A0439AD0EC86806417DBF8E80BC87C0383B3945*, const RuntimeMethod*))Span_1_get_Length_mBA0124F96297CC2B74A6177E403DFAE7CE550A1E_gshared_inline)(__this, method);
}
inline uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m74D0716355DF6DDA455D362766EB0F0EB7B35A79 (Span_1_t0A0439AD0EC86806417DBF8E80BC87C0383B3945 ___0_span, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (Span_1_t0A0439AD0EC86806417DBF8E80BC87C0383B3945, const RuntimeMethod*))MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m74D0716355DF6DDA455D362766EB0F0EB7B35A79_gshared)(___0_span, method);
}
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m8581CFEE3C0A5F1FEC486F784421EC2AB2C32E97 (EmbeddedAttribute_tCEFFB1201C1BB0881D71D96CBB147B1E464B4537* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m1589D1545185205307D74BC2E1025BF5F7E16412 (IsReadOnlyAttribute_t7984A854E62D5FBFE85EBC3A2544706DA56DD45D* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsByRefLikeAttribute__ctor_m7960194A0B293D3B785F1F7E4B78998BF4B56BE8 (IsByRefLikeAttribute_t149CED1B601A3A166F3D87130B85AD0AB256843B* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0_marshal_pinvoke(const SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0& unmarshaled, SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.____object != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.____object))
		{
			marshaled.____object = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.____object));
			(marshaled.____object)->AddRef();
		}
		else
		{
			marshaled.____object = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.____object);
		}
	}
	else
	{
		marshaled.____object = NULL;
	}
	marshaled.____integer = unmarshaled.____integer;
}
IL2CPP_EXTERN_C void SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0_marshal_pinvoke_back(const SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0_marshaled_pinvoke& marshaled, SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____object != NULL)
	{
		unmarshaled.____object = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____object, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____object), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____object, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.____object))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.____object), Il2CppIUnknown::IID, marshaled.____object);
		}
	}
	else
	{
		unmarshaled.____object = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____object), (void*)NULL);
	}
	int32_t unmarshaled_integer_temp_1 = 0;
	unmarshaled_integer_temp_1 = marshaled.____integer;
	unmarshaled.____integer = unmarshaled_integer_temp_1;
}
IL2CPP_EXTERN_C void SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0_marshal_pinvoke_cleanup(SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0_marshaled_pinvoke& marshaled)
{
	if (marshaled.____object != NULL)
	{
		(marshaled.____object)->Release();
		marshaled.____object = NULL;
	}
}
IL2CPP_EXTERN_C void SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0_marshal_com(const SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0& unmarshaled, SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0_marshaled_com& marshaled)
{
	if (unmarshaled.____object != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.____object))
		{
			marshaled.____object = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.____object));
			(marshaled.____object)->AddRef();
		}
		else
		{
			marshaled.____object = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.____object);
		}
	}
	else
	{
		marshaled.____object = NULL;
	}
	marshaled.____integer = unmarshaled.____integer;
}
IL2CPP_EXTERN_C void SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0_marshal_com_back(const SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0_marshaled_com& marshaled, SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____object != NULL)
	{
		unmarshaled.____object = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____object, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____object), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____object, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.____object))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.____object), Il2CppIUnknown::IID, marshaled.____object);
		}
	}
	else
	{
		unmarshaled.____object = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____object), (void*)NULL);
	}
	int32_t unmarshaled_integer_temp_1 = 0;
	unmarshaled_integer_temp_1 = marshaled.____integer;
	unmarshaled.____integer = unmarshaled_integer_temp_1;
}
IL2CPP_EXTERN_C void SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0_marshal_com_cleanup(SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0_marshaled_com& marshaled)
{
	if (marshaled.____object != NULL)
	{
		(marshaled.____object)->Release();
		marshaled.____object = NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SequencePosition__ctor_m76B543A998FF27B79B37EEF8AB10B1B165FE5B6F (SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0* __this, RuntimeObject* ___0_object, int32_t ___1_integer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_object;
		__this->____object = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object), (void*)L_0);
		int32_t L_1 = ___1_integer;
		__this->____integer = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void SequencePosition__ctor_m76B543A998FF27B79B37EEF8AB10B1B165FE5B6F_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_object, int32_t ___1_integer, const RuntimeMethod* method)
{
	SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0*>(__this + _offset);
	SequencePosition__ctor_m76B543A998FF27B79B37EEF8AB10B1B165FE5B6F(_thisAdjusted, ___0_object, ___1_integer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SequencePosition_GetObject_m6270FB7EF92286558F3053CF1A9AF22FF6FB03F1 (SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____object;
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* SequencePosition_GetObject_m6270FB7EF92286558F3053CF1A9AF22FF6FB03F1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = SequencePosition_GetObject_m6270FB7EF92286558F3053CF1A9AF22FF6FB03F1_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SequencePosition_GetInteger_mE57898E6D4C23D1E0D0D6615F278BBA67DB1767F (SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____integer;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t SequencePosition_GetInteger_mE57898E6D4C23D1E0D0D6615F278BBA67DB1767F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SequencePosition_GetInteger_mE57898E6D4C23D1E0D0D6615F278BBA67DB1767F_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SequencePosition_Equals_m9C60848B8A498B093DB54E4C9EF0113E0132AAE2 (SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0* __this, SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0 ___0_other, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____integer;
		SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0 L_1 = ___0_other;
		int32_t L_2 = L_1.____integer;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_3 = __this->____object;
		SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0 L_4 = ___0_other;
		RuntimeObject* L_5 = L_4.____object;
		bool L_6;
		L_6 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_3, L_5, NULL);
		return L_6;
	}

IL_0020:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool SequencePosition_Equals_m9C60848B8A498B093DB54E4C9EF0113E0132AAE2_AdjustorThunk (RuntimeObject* __this, SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0 ___0_other, const RuntimeMethod* method)
{
	SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0*>(__this + _offset);
	bool _returnValue;
	_returnValue = SequencePosition_Equals_m9C60848B8A498B093DB54E4C9EF0113E0132AAE2(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SequencePosition_Equals_m0E6EF5D19B2A9BC4CA216281F7C95CD672140B69 (SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		RuntimeObject* L_1 = L_0;
		V_1 = L_1;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0_il2cpp_TypeInfo_var)))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		V_0 = ((*(SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0*)((SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0*)(SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0*)UnBox(L_2, SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0_il2cpp_TypeInfo_var))));
		SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0 L_3 = V_0;
		bool L_4;
		L_4 = SequencePosition_Equals_m9C60848B8A498B093DB54E4C9EF0113E0132AAE2(__this, L_3, NULL);
		return L_4;
	}

IL_0019:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool SequencePosition_Equals_m0E6EF5D19B2A9BC4CA216281F7C95CD672140B69_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0*>(__this + _offset);
	bool _returnValue;
	_returnValue = SequencePosition_Equals_m0E6EF5D19B2A9BC4CA216281F7C95CD672140B69(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SequencePosition_GetHashCode_m7842647CFB786D21F669201B1B9FBC5BA6D47DAB (SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t85510791EE47AB402E6058CC72BAA49072EC73B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = __this->____object;
		RuntimeObject* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
		G_B1_0 = L_1;
	}
	{
		G_B3_0 = 0;
		goto IL_0012;
	}

IL_000d:
	{
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0012:
	{
		int32_t L_3 = __this->____integer;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t85510791EE47AB402E6058CC72BAA49072EC73B0_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = HashHelpers_Combine_m385B341295B27D9ACDD3EE970B50345AC9E15508(G_B3_0, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t SequencePosition_GetHashCode_m7842647CFB786D21F669201B1B9FBC5BA6D47DAB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SequencePosition_GetHashCode_m7842647CFB786D21F669201B1B9FBC5BA6D47DAB(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_mB0F8F345FF63B1EC4020C67E7CB16498F1B25EBD (int32_t ___0_argument, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_argument;
		Exception_t* L_1;
		L_1 = ThrowHelper_CreateArgumentNullException_m4FB3EF5B75FF3DDC5A1D64747183A1E4E4778D8F(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentNullException_mB0F8F345FF63B1EC4020C67E7CB16498F1B25EBD_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateArgumentNullException_m4FB3EF5B75FF3DDC5A1D64747183A1E4E4778D8F (int32_t ___0_argument, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgument_tCF894072A49AAB411FD03B2CC90C7232DD9E3493_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppFakeBox<int32_t> L_0(ExceptionArgument_tCF894072A49AAB411FD03B2CC90C7232DD9E3493_il2cpp_TypeInfo_var, (&___0_argument));
		String_t* L_1;
		L_1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_0), NULL);
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArrayTypeMismatchException_m0E4F11BE6594EF55DA1BAE844B78F6EF03F48A0B (const RuntimeMethod* method) 
{
	{
		Exception_t* L_0;
		L_0 = ThrowHelper_CreateArrayTypeMismatchException_mA90AD247C31D63AF4C1D0A8A5B1E65449ACCA9FF(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArrayTypeMismatchException_m0E4F11BE6594EF55DA1BAE844B78F6EF03F48A0B_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateArrayTypeMismatchException_mA90AD247C31D63AF4C1D0A8A5B1E65449ACCA9FF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_0 = (ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)il2cpp_codegen_object_new(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var);
		ArrayTypeMismatchException__ctor_mD1BAAE9B73BA9E5948655553019ED8DE4F306D8B(L_0, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_mB90A359B600D798B8ADA13CE5192D2D6A80517D3 (Type_t* ___0_type, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_type;
		Exception_t* L_1;
		L_1 = ThrowHelper_CreateArgumentException_InvalidTypeWithPointersNotSupported_mEFE24238017BE6E844FF93FF12D27E0AC13B350E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_mB90A359B600D798B8ADA13CE5192D2D6A80517D3_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateArgumentException_InvalidTypeWithPointersNotSupported_mEFE24238017BE6E844FF93FF12D27E0AC13B350E (Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_get_Argument_InvalidTypeWithPointersNotSupported_m8DE23481F229D5E574822BE1853FE08EA9B46C9F(NULL);
		Type_t* L_1 = ___0_type;
		String_t* L_2;
		L_2 = SR_Format_mF4B48F758B9E8BAFBDE53166798269599BE0C1FF(L_0, L_1, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_DestinationTooShort_mA7BE680CD0772A296522803C093CAEABC97C76B6 (const RuntimeMethod* method) 
{
	{
		Exception_t* L_0;
		L_0 = ThrowHelper_CreateArgumentException_DestinationTooShort_m1D410F0935A2BE34C3DE3B55E9AEA6638D081F93(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentException_DestinationTooShort_mA7BE680CD0772A296522803C093CAEABC97C76B6_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateArgumentException_DestinationTooShort_m1D410F0935A2BE34C3DE3B55E9AEA6638D081F93 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_get_Argument_DestinationTooShort_m1BB390B2EB53A286963744393280B0FE4769FC0B(NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_mA039EA63C3968B3D99B1C37E55B58B3EB5C13157 (const RuntimeMethod* method) 
{
	{
		Exception_t* L_0;
		L_0 = ThrowHelper_CreateIndexOutOfRangeException_m14186015EE29AAF9A6BED7AF0E0CD8524442C5CC(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowIndexOutOfRangeException_mA039EA63C3968B3D99B1C37E55B58B3EB5C13157_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateIndexOutOfRangeException_m14186015EE29AAF9A6BED7AF0E0CD8524442C5CC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_0 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m270ED9671475CE680EEA8C62A7A43308AE4188EF(L_0, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mE939B7FD875E973E116C36C102558EEF80EACD2F (const RuntimeMethod* method) 
{
	{
		Exception_t* L_0;
		L_0 = ThrowHelper_CreateArgumentOutOfRangeException_m71A787FDB935FBC64872B80A2FA845CFE73B808F(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentOutOfRangeException_mE939B7FD875E973E116C36C102558EEF80EACD2F_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateArgumentOutOfRangeException_m71A787FDB935FBC64872B80A2FA845CFE73B808F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_0 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_0, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mEECE035AE49F378B431CBD7F04A8C96F6C67B1D4 (int32_t ___0_argument, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_argument;
		Exception_t* L_1;
		L_1 = ThrowHelper_CreateArgumentOutOfRangeException_mB2E905118231FBC13D4615CA029261DA468C48EC(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentOutOfRangeException_mEECE035AE49F378B431CBD7F04A8C96F6C67B1D4_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateArgumentOutOfRangeException_mB2E905118231FBC13D4615CA029261DA468C48EC (int32_t ___0_argument, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgument_tCF894072A49AAB411FD03B2CC90C7232DD9E3493_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppFakeBox<int32_t> L_0(ExceptionArgument_tCF894072A49AAB411FD03B2CC90C7232DD9E3493_il2cpp_TypeInfo_var, (&___0_argument));
		String_t* L_1;
		L_1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_0), NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_EndPositionNotReached_mCFA288CF8DBAAC21A99E2B5D3BC7C1978AC5140C (const RuntimeMethod* method) 
{
	{
		Exception_t* L_0;
		L_0 = ThrowHelper_CreateInvalidOperationException_EndPositionNotReached_m52F07FA4E835836AAE7FD6760E94C54A305D2A08(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowInvalidOperationException_EndPositionNotReached_mCFA288CF8DBAAC21A99E2B5D3BC7C1978AC5140C_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateInvalidOperationException_EndPositionNotReached_m52F07FA4E835836AAE7FD6760E94C54A305D2A08 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_get_EndPositionNotReached_mF49CA87E992A0603592C330BA362F8D2833C4371(NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, L_0, NULL);
		return L_1;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t2A13CC482E53CF4B549A5F0090211E721E4CCF1D MemoryExtensions_AsSpan_m929778980405ED40E99EBE7F774E3399E7E7228D (String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_t5EE3083E25A94B7AB6C0107FDF5873E5181AACAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_mC5E3B1692AED1CB09CCF2C71C7DFDB94C7655F55_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t2A13CC482E53CF4B549A5F0090211E721E4CCF1D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___0_text;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlySpan_1_t2A13CC482E53CF4B549A5F0090211E721E4CCF1D));
		ReadOnlySpan_1_t2A13CC482E53CF4B549A5F0090211E721E4CCF1D L_1 = V_0;
		return L_1;
	}

IL_000d:
	{
		String_t* L_2 = ___0_text;
		Pinnable_1_tA08A98AD4B692A86ECC193BAF63E576FBFF35331* L_3;
		L_3 = il2cpp_unsafe_as<Pinnable_1_tA08A98AD4B692A86ECC193BAF63E576FBFF35331*>(L_2);
		il2cpp_codegen_runtime_class_init_inline(MemoryExtensions_t5EE3083E25A94B7AB6C0107FDF5873E5181AACAE_il2cpp_TypeInfo_var);
		intptr_t L_4 = ((MemoryExtensions_t5EE3083E25A94B7AB6C0107FDF5873E5181AACAE_StaticFields*)il2cpp_codegen_static_fields_for(MemoryExtensions_t5EE3083E25A94B7AB6C0107FDF5873E5181AACAE_il2cpp_TypeInfo_var))->___StringAdjustment;
		String_t* L_5 = ___0_text;
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		ReadOnlySpan_1_t2A13CC482E53CF4B549A5F0090211E721E4CCF1D L_7;
		memset((&L_7), 0, sizeof(L_7));
		ReadOnlySpan_1__ctor_mC5E3B1692AED1CB09CCF2C71C7DFDB94C7655F55_inline((&L_7), L_3, L_4, L_6, ReadOnlySpan_1__ctor_mC5E3B1692AED1CB09CCF2C71C7DFDB94C7655F55_RuntimeMethod_var);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyMemory_1_t50B68E359CC5C40CFBA97B2953C0C60AD813F6D0 MemoryExtensions_AsMemory_m0A3BFC7495ECCE3C20D80A6CA01669E42D239129 (String_t* ___0_text, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1__ctor_m5084CF90420F0309B9E55A80D68AB13C01D84B09_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlyMemory_1_t50B68E359CC5C40CFBA97B2953C0C60AD813F6D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___0_text;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000f;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mEECE035AE49F378B431CBD7F04A8C96F6C67B1D4(1, NULL);
	}

IL_000f:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlyMemory_1_t50B68E359CC5C40CFBA97B2953C0C60AD813F6D0));
		ReadOnlyMemory_1_t50B68E359CC5C40CFBA97B2953C0C60AD813F6D0 L_3 = V_0;
		return L_3;
	}

IL_0019:
	{
		int32_t L_4 = ___1_start;
		String_t* L_5 = ___0_text;
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_7 = ___2_length;
		String_t* L_8 = ___0_text;
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0033;
		}
	}

IL_002d:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mEECE035AE49F378B431CBD7F04A8C96F6C67B1D4(1, NULL);
	}

IL_0033:
	{
		String_t* L_11 = ___0_text;
		int32_t L_12 = ___1_start;
		int32_t L_13 = ___2_length;
		ReadOnlyMemory_1_t50B68E359CC5C40CFBA97B2953C0C60AD813F6D0 L_14;
		memset((&L_14), 0, sizeof(L_14));
		ReadOnlyMemory_1__ctor_m5084CF90420F0309B9E55A80D68AB13C01D84B09_inline((&L_14), L_11, L_12, L_13, ReadOnlyMemory_1__ctor_m5084CF90420F0309B9E55A80D68AB13C01D84B09_RuntimeMethod_var);
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MemoryExtensions_MeasureStringAdjustment_m7682AFAFF56CE5D5054834B6F0F9B37DF7798077 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Il2CppChar* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		V_0 = _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78;
		String_t* L_0 = V_0;
		V_2 = L_0;
		String_t* L_1 = V_2;
		V_1 = (Il2CppChar*)((uintptr_t)L_1);
		Il2CppChar* L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		Il2CppChar* L_3 = V_1;
		int32_t L_4;
		L_4 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
		V_1 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_3, L_4));
	}

IL_0016:
	{
		String_t* L_5 = V_0;
		Pinnable_1_tA08A98AD4B692A86ECC193BAF63E576FBFF35331* L_6;
		L_6 = il2cpp_unsafe_as<Pinnable_1_tA08A98AD4B692A86ECC193BAF63E576FBFF35331*>(L_5);
		Il2CppChar* L_7 = (Il2CppChar*)(&L_6->___Data);
		Il2CppChar* L_8 = V_1;
		Il2CppChar* L_9;
		L_9 = il2cpp_unsafe_as_ref<Il2CppChar>((void*)L_8);
		intptr_t L_10;
		L_10 = il2cpp_unsafe_byte_offset(L_7, L_9);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryExtensions__cctor_mB29243DFAD4BCDC97484C6B274BAF6CF5A779CD8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_t5EE3083E25A94B7AB6C0107FDF5873E5181AACAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0;
		L_0 = MemoryExtensions_MeasureStringAdjustment_m7682AFAFF56CE5D5054834B6F0F9B37DF7798077(NULL);
		((MemoryExtensions_t5EE3083E25A94B7AB6C0107FDF5873E5181AACAE_StaticFields*)il2cpp_codegen_static_fields_for(MemoryExtensions_t5EE3083E25A94B7AB6C0107FDF5873E5181AACAE_il2cpp_TypeInfo_var))->___StringAdjustment = L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_SequenceEqual_m25A7B1700BEEE5FB98A9B6A0035644A5F6D720D4 (uint8_t* ___0_first, uint8_t* ___1_second, NUInt_t0B0CF9DC99943B2B2EFB5667D439EF1A6D6C1FED ___2_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_get_Count_m62B39B4108D90727F1E8FBC7E810066A01CEF4E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_op_Equality_mC02E4B83ECFD21267742B698B874C5FF5178E033_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_op_Inequality_mBD50B06B4F13EDD357C1959868BFA04742D95A91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		uint8_t* L_0 = ___0_first;
		uint8_t* L_1 = ___1_second;
		bool L_2;
		L_2 = il2cpp_unsafe_are_same(L_0, L_1);
		if (L_2)
		{
			goto IL_013d;
		}
	}
	{
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(0, NULL);
		V_0 = L_3;
		NUInt_t0B0CF9DC99943B2B2EFB5667D439EF1A6D6C1FED L_4 = ___2_length;
		void* L_5;
		L_5 = NUInt_op_Explicit_mC163D9B735A039C7266948F8F85F4D2EBA9AD89B_inline(L_4, NULL);
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_5, NULL);
		V_1 = L_6;
		bool L_7;
		L_7 = Vector_get_IsHardwareAccelerated_mA88F4CB69DCE46A84547F465998F0529948E70AC(NULL);
		if (!L_7)
		{
			goto IL_009c;
		}
	}
	{
		intptr_t L_8 = V_1;
		void* L_9;
		L_9 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = Vector_1_get_Count_m62B39B4108D90727F1E8FBC7E810066A01CEF4E4_inline(Vector_1_get_Count_m62B39B4108D90727F1E8FBC7E810066A01CEF4E4_RuntimeMethod_var);
		if ((!(((uintptr_t)L_9) >= ((uintptr_t)((intptr_t)L_10)))))
		{
			goto IL_009c;
		}
	}
	{
		intptr_t L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = Vector_1_get_Count_m62B39B4108D90727F1E8FBC7E810066A01CEF4E4_inline(Vector_1_get_Count_m62B39B4108D90727F1E8FBC7E810066A01CEF4E4_RuntimeMethod_var);
		intptr_t L_13;
		L_13 = IntPtr_op_Subtraction_m2DC92629D40D71225E73882220D24144A26D443F(L_11, L_12, NULL);
		V_1 = L_13;
		goto IL_0070;
	}

IL_0042:
	{
		uint8_t* L_14 = ___0_first;
		intptr_t L_15 = V_0;
		uint8_t* L_16;
		L_16 = il2cpp_unsafe_add_byte_offset<uint8_t,intptr_t>(L_14, L_15);
		Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9 L_17;
		L_17 = il2cpp_unsafe_read_unaligned<Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9>(L_16);
		uint8_t* L_18 = ___1_second;
		intptr_t L_19 = V_0;
		uint8_t* L_20;
		L_20 = il2cpp_unsafe_add_byte_offset<uint8_t,intptr_t>(L_18, L_19);
		Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9 L_21;
		L_21 = il2cpp_unsafe_read_unaligned<Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9>(L_20);
		il2cpp_codegen_runtime_class_init_inline(Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Vector_1_op_Inequality_mBD50B06B4F13EDD357C1959868BFA04742D95A91_inline(L_17, L_21, Vector_1_op_Inequality_mBD50B06B4F13EDD357C1959868BFA04742D95A91_RuntimeMethod_var);
		if (L_22)
		{
			goto IL_013f;
		}
	}
	{
		intptr_t L_23 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9_il2cpp_TypeInfo_var);
		int32_t L_24;
		L_24 = Vector_1_get_Count_m62B39B4108D90727F1E8FBC7E810066A01CEF4E4_inline(Vector_1_get_Count_m62B39B4108D90727F1E8FBC7E810066A01CEF4E4_RuntimeMethod_var);
		intptr_t L_25;
		L_25 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_23, L_24, NULL);
		V_0 = L_25;
	}

IL_0070:
	{
		intptr_t L_26 = V_1;
		void* L_27;
		L_27 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_26, NULL);
		intptr_t L_28 = V_0;
		void* L_29;
		L_29 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_28, NULL);
		if ((!(((uintptr_t)L_27) <= ((uintptr_t)L_29))))
		{
			goto IL_0042;
		}
	}
	{
		uint8_t* L_30 = ___0_first;
		intptr_t L_31 = V_1;
		uint8_t* L_32;
		L_32 = il2cpp_unsafe_add_byte_offset<uint8_t,intptr_t>(L_30, L_31);
		Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9 L_33;
		L_33 = il2cpp_unsafe_read_unaligned<Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9>(L_32);
		uint8_t* L_34 = ___1_second;
		intptr_t L_35 = V_1;
		uint8_t* L_36;
		L_36 = il2cpp_unsafe_add_byte_offset<uint8_t,intptr_t>(L_34, L_35);
		Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9 L_37;
		L_37 = il2cpp_unsafe_read_unaligned<Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9>(L_36);
		il2cpp_codegen_runtime_class_init_inline(Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Vector_1_op_Equality_mC02E4B83ECFD21267742B698B874C5FF5178E033_inline(L_33, L_37, Vector_1_op_Equality_mC02E4B83ECFD21267742B698B874C5FF5178E033_RuntimeMethod_var);
		return L_38;
	}

IL_009c:
	{
		intptr_t L_39 = V_1;
		void* L_40;
		L_40 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_39, NULL);
		uint32_t L_41 = sizeof(uintptr_t);
		if ((!(((uintptr_t)L_40) >= ((uintptr_t)((intptr_t)L_41)))))
		{
			goto IL_012f;
		}
	}
	{
		intptr_t L_42 = V_1;
		uint32_t L_43 = sizeof(uintptr_t);
		intptr_t L_44;
		L_44 = IntPtr_op_Subtraction_m2DC92629D40D71225E73882220D24144A26D443F(L_42, L_43, NULL);
		V_1 = L_44;
		goto IL_00e9;
	}

IL_00bd:
	{
		uint8_t* L_45 = ___0_first;
		intptr_t L_46 = V_0;
		uint8_t* L_47;
		L_47 = il2cpp_unsafe_add_byte_offset<uint8_t,intptr_t>(L_45, L_46);
		uintptr_t L_48;
		L_48 = il2cpp_unsafe_read_unaligned<uintptr_t>(L_47);
		uint8_t* L_49 = ___1_second;
		intptr_t L_50 = V_0;
		uint8_t* L_51;
		L_51 = il2cpp_unsafe_add_byte_offset<uint8_t,intptr_t>(L_49, L_50);
		uintptr_t L_52;
		L_52 = il2cpp_unsafe_read_unaligned<uintptr_t>(L_51);
		bool L_53;
		L_53 = UIntPtr_op_Inequality_m9C09B4CB3986B59EC207CC62000C761A1F161161(L_48, L_52, NULL);
		if (L_53)
		{
			goto IL_013f;
		}
	}
	{
		intptr_t L_54 = V_0;
		uint32_t L_55 = sizeof(uintptr_t);
		intptr_t L_56;
		L_56 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_54, L_55, NULL);
		V_0 = L_56;
	}

IL_00e9:
	{
		intptr_t L_57 = V_1;
		void* L_58;
		L_58 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_57, NULL);
		intptr_t L_59 = V_0;
		void* L_60;
		L_60 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_59, NULL);
		if ((!(((uintptr_t)L_58) <= ((uintptr_t)L_60))))
		{
			goto IL_00bd;
		}
	}
	{
		uint8_t* L_61 = ___0_first;
		intptr_t L_62 = V_1;
		uint8_t* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<uint8_t,intptr_t>(L_61, L_62);
		uintptr_t L_64;
		L_64 = il2cpp_unsafe_read_unaligned<uintptr_t>(L_63);
		uint8_t* L_65 = ___1_second;
		intptr_t L_66 = V_1;
		uint8_t* L_67;
		L_67 = il2cpp_unsafe_add_byte_offset<uint8_t,intptr_t>(L_65, L_66);
		uintptr_t L_68;
		L_68 = il2cpp_unsafe_read_unaligned<uintptr_t>(L_67);
		bool L_69;
		L_69 = UIntPtr_op_Equality_m6854CBDA705729A896265CF7D2BD522E3460DCFB(L_64, L_68, NULL);
		return L_69;
	}

IL_0115:
	{
		uint8_t* L_70 = ___0_first;
		intptr_t L_71 = V_0;
		uint8_t* L_72;
		L_72 = il2cpp_unsafe_add_byte_offset<uint8_t,intptr_t>(L_70, L_71);
		int32_t L_73 = *((uint8_t*)L_72);
		uint8_t* L_74 = ___1_second;
		intptr_t L_75 = V_0;
		uint8_t* L_76;
		L_76 = il2cpp_unsafe_add_byte_offset<uint8_t,intptr_t>(L_74, L_75);
		int32_t L_77 = *((uint8_t*)L_76);
		if ((!(((uint32_t)L_73) == ((uint32_t)L_77))))
		{
			goto IL_013f;
		}
	}
	{
		intptr_t L_78 = V_0;
		intptr_t L_79;
		L_79 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_78, 1, NULL);
		V_0 = L_79;
	}

IL_012f:
	{
		intptr_t L_80 = V_1;
		void* L_81;
		L_81 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_80, NULL);
		intptr_t L_82 = V_0;
		void* L_83;
		L_83 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_82, NULL);
		if ((!(((uintptr_t)L_81) <= ((uintptr_t)L_83))))
		{
			goto IL_0115;
		}
	}

IL_013d:
	{
		return (bool)1;
	}

IL_013f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferencesCore_mCA2C49F48C0939B6B219D80418FEA198CC391F34 (Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB708E9C2FA823B01C747E05E9A94F71093AAE6F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD1E868EC4EE9679F2F2D4F9F10CEAB9153B8C991_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	FieldInfo_t* V_2 = NULL;
	bool V_3 = false;
	{
		Type_t* L_0 = ___0_type;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_1;
		L_1 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18(L_1, NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		Type_t* L_3 = ___0_type;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_4;
		L_4 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_3, NULL);
		bool L_5;
		L_5 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_4, NULL);
		if (L_5)
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		Type_t* L_6 = ___0_type;
		Type_t* L_7;
		L_7 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_6, NULL);
		V_0 = L_7;
		Type_t* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_8, (Type_t*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0031;
		}
	}
	{
		Type_t* L_10 = V_0;
		___0_type = L_10;
	}

IL_0031:
	{
		Type_t* L_11 = ___0_type;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_12;
		L_12 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_11, NULL);
		bool L_13;
		L_13 = VirtualFuncInvoker0< bool >::Invoke(68, L_12);
		if (!L_13)
		{
			goto IL_0040;
		}
	}
	{
		return (bool)0;
	}

IL_0040:
	{
		Type_t* L_14 = ___0_type;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_15;
		L_15 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_14, NULL);
		RuntimeObject* L_16;
		L_16 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(129, L_15);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB708E9C2FA823B01C747E05E9A94F71093AAE6F1_il2cpp_TypeInfo_var, L_16);
		V_1 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007d:
			{
				{
					RuntimeObject* L_18 = V_1;
					if (!L_18)
					{
						goto IL_0086;
					}
				}
				{
					RuntimeObject* L_19 = V_1;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_19);
				}

IL_0086:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0073_1;
			}

IL_0053_1:
			{
				RuntimeObject* L_20 = V_1;
				FieldInfo_t* L_21;
				L_21 = InterfaceFuncInvoker0< FieldInfo_t* >::Invoke(0, IEnumerator_1_tD1E868EC4EE9679F2F2D4F9F10CEAB9153B8C991_il2cpp_TypeInfo_var, L_20);
				V_2 = L_21;
				FieldInfo_t* L_22 = V_2;
				bool L_23;
				L_23 = FieldInfo_get_IsStatic_mEBBEB7B19A48D3E11BE830F3704C131A681F6139(L_22, NULL);
				if (L_23)
				{
					goto IL_0073_1;
				}
			}
			{
				FieldInfo_t* L_24 = V_2;
				Type_t* L_25;
				L_25 = VirtualFuncInvoker0< Type_t* >::Invoke(16, L_24);
				bool L_26;
				L_26 = SpanHelpers_IsReferenceOrContainsReferencesCore_mCA2C49F48C0939B6B219D80418FEA198CC391F34(L_25, NULL);
				if (!L_26)
				{
					goto IL_0073_1;
				}
			}
			{
				V_3 = (bool)1;
				goto IL_0089;
			}

IL_0073_1:
			{
				RuntimeObject* L_27 = V_1;
				bool L_28;
				L_28 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_27);
				if (L_28)
				{
					goto IL_0053_1;
				}
			}
			{
				goto IL_0087;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0087:
	{
		return (bool)0;
	}

IL_0089:
	{
		bool L_29 = V_3;
		return L_29;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NUInt__ctor_m0A2AA2F9576FB75407F0497CA3BEC3FF7A9DB6C4 (NUInt_t0B0CF9DC99943B2B2EFB5667D439EF1A6D6C1FED* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		__this->____value = (void*)((uintptr_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void NUInt__ctor_m0A2AA2F9576FB75407F0497CA3BEC3FF7A9DB6C4_AdjustorThunk (RuntimeObject* __this, uint32_t ___0_value, const RuntimeMethod* method)
{
	NUInt_t0B0CF9DC99943B2B2EFB5667D439EF1A6D6C1FED* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NUInt_t0B0CF9DC99943B2B2EFB5667D439EF1A6D6C1FED*>(__this + _offset);
	NUInt__ctor_m0A2AA2F9576FB75407F0497CA3BEC3FF7A9DB6C4(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NUInt__ctor_mC06378BB7FDC15F0AC2EC6AF70DC73FB1AA0F010 (NUInt_t0B0CF9DC99943B2B2EFB5667D439EF1A6D6C1FED* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_value;
		__this->____value = (void*)((uintptr_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void NUInt__ctor_mC06378BB7FDC15F0AC2EC6AF70DC73FB1AA0F010_AdjustorThunk (RuntimeObject* __this, uint64_t ___0_value, const RuntimeMethod* method)
{
	NUInt_t0B0CF9DC99943B2B2EFB5667D439EF1A6D6C1FED* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NUInt_t0B0CF9DC99943B2B2EFB5667D439EF1A6D6C1FED*>(__this + _offset);
	NUInt__ctor_mC06378BB7FDC15F0AC2EC6AF70DC73FB1AA0F010(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NUInt_t0B0CF9DC99943B2B2EFB5667D439EF1A6D6C1FED NUInt_op_Explicit_m93607EBF0656782D5A9B77D211FF002B21D44E82 (int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		NUInt_t0B0CF9DC99943B2B2EFB5667D439EF1A6D6C1FED L_1;
		memset((&L_1), 0, sizeof(L_1));
		NUInt__ctor_m0A2AA2F9576FB75407F0497CA3BEC3FF7A9DB6C4((&L_1), L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NUInt_op_Explicit_mC163D9B735A039C7266948F8F85F4D2EBA9AD89B (NUInt_t0B0CF9DC99943B2B2EFB5667D439EF1A6D6C1FED ___0_value, const RuntimeMethod* method) 
{
	{
		NUInt_t0B0CF9DC99943B2B2EFB5667D439EF1A6D6C1FED L_0 = ___0_value;
		void* L_1 = L_0.____value;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NUInt_t0B0CF9DC99943B2B2EFB5667D439EF1A6D6C1FED NUInt_op_Multiply_m282785C345FE16CC2998CE0F62EB13841EBDCFC5 (NUInt_t0B0CF9DC99943B2B2EFB5667D439EF1A6D6C1FED ___0_left, NUInt_t0B0CF9DC99943B2B2EFB5667D439EF1A6D6C1FED ___1_right, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(intptr_t);
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_001e;
		}
	}
	{
		NUInt_t0B0CF9DC99943B2B2EFB5667D439EF1A6D6C1FED L_1 = ___0_left;
		void* L_2 = L_1.____value;
		NUInt_t0B0CF9DC99943B2B2EFB5667D439EF1A6D6C1FED L_3 = ___1_right;
		void* L_4 = L_3.____value;
		NUInt_t0B0CF9DC99943B2B2EFB5667D439EF1A6D6C1FED L_5;
		memset((&L_5), 0, sizeof(L_5));
		NUInt__ctor_mC06378BB7FDC15F0AC2EC6AF70DC73FB1AA0F010((&L_5), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)(intptr_t)L_2), ((int64_t)(uint64_t)(intptr_t)L_4))), NULL);
		return L_5;
	}

IL_001e:
	{
		NUInt_t0B0CF9DC99943B2B2EFB5667D439EF1A6D6C1FED L_6 = ___0_left;
		void* L_7 = L_6.____value;
		NUInt_t0B0CF9DC99943B2B2EFB5667D439EF1A6D6C1FED L_8 = ___1_right;
		void* L_9 = L_8.____value;
		NUInt_t0B0CF9DC99943B2B2EFB5667D439EF1A6D6C1FED L_10;
		memset((&L_10), 0, sizeof(L_10));
		NUInt__ctor_m0A2AA2F9576FB75407F0497CA3BEC3FF7A9DB6C4((&L_10), ((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)(intptr_t)L_7), ((int32_t)(uint32_t)(intptr_t)L_9))), NULL);
		return L_10;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* SR_get_ResourceManager_m0D192A9CB6B3FBF42C55008100DD42DFACC5D74F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* G_B2_0 = NULL;
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_il2cpp_TypeInfo_var);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_0 = ((SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_StaticFields*)il2cpp_codegen_static_fields_for(SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_il2cpp_TypeInfo_var))->___s_resourceManager;
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
		G_B1_0 = L_1;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = SR_get_ResourceType_m006BB8031B3065D26720905A0C651672BA161D87_inline(NULL);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_3 = (ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB*)il2cpp_codegen_object_new(ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var);
		ResourceManager__ctor_mC93D478F43E5089ACC407FDECF067A0F208A3784(L_3, L_2, NULL);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_4 = L_3;
		((SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_StaticFields*)il2cpp_codegen_static_fields_for(SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_il2cpp_TypeInfo_var))->___s_resourceManager = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_StaticFields*)il2cpp_codegen_static_fields_for(SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_il2cpp_TypeInfo_var))->___s_resourceManager), (void*)L_4);
		G_B2_0 = L_4;
	}

IL_0019:
	{
		return G_B2_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_mC39415449522C59493CDE0D7C329FB001DE26C6A (const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_mC7C1DDB92774C63670D58F45D0C56D0343A057A2 (String_t* ___0_resourceKey, String_t* ___1_defaultString, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (String_t*)NULL;
	}
	try
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_il2cpp_TypeInfo_var);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_0;
		L_0 = SR_get_ResourceManager_m0D192A9CB6B3FBF42C55008100DD42DFACC5D74F(NULL);
		String_t* L_1 = ___0_resourceKey;
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(7, L_0, L_1);
		V_0 = L_2;
		goto IL_0013;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0010;
		}
		throw e;
	}

CATCH_0010:
	{
		MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD* L_3 = ((MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD*)IL2CPP_GET_ACTIVE_EXCEPTION(MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0013;
	}

IL_0013:
	{
		String_t* L_4 = ___1_defaultString;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_5 = ___0_resourceKey;
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_Equals_m7BDFC0B951005B9DC2BAED464AFE68FF7E9ACE5A(L_5, L_6, 4, NULL);
		if (!L_7)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_8 = ___1_defaultString;
		return L_8;
	}

IL_0022:
	{
		String_t* L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mF4B48F758B9E8BAFBDE53166798269599BE0C1FF (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_mC39415449522C59493CDE0D7C329FB001DE26C6A(NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_resourceFormat;
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		RuntimeObject* L_5 = ___1_p1;
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		String_t* L_6;
		L_6 = String_Join_m1DE9E42021535E27E1623C55608AC7EF370AB3D7(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_4, NULL);
		return L_6;
	}

IL_0020:
	{
		String_t* L_7 = ___0_resourceFormat;
		RuntimeObject* L_8 = ___1_p1;
		String_t* L_9;
		L_9 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_7, L_8, NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* SR_get_ResourceType_m006BB8031B3065D26720905A0C651672BA161D87 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_il2cpp_TypeInfo_var);
		Type_t* L_0 = ((SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_StaticFields*)il2cpp_codegen_static_fields_for(SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_il2cpp_TypeInfo_var))->___U3CResourceTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_NotSupported_CannotCallEqualsOnSpan_m238B4C4C02BA60407BB9B69A2CD1A5D16A8B0C1F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89BF668EA220E1F9C98F61872576447AF8F92A3F);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_mC7C1DDB92774C63670D58F45D0C56D0343A057A2(_stringLiteral89BF668EA220E1F9C98F61872576447AF8F92A3F, (String_t*)NULL, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_NotSupported_CannotCallGetHashCodeOnSpan_mF835B579ABC870C04E9482F062628E8BCCD03103 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral819CA64A4459548685C67A2CD1C9D5E94F49CCD5);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_mC7C1DDB92774C63670D58F45D0C56D0343A057A2(_stringLiteral819CA64A4459548685C67A2CD1C9D5E94F49CCD5, (String_t*)NULL, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Argument_InvalidTypeWithPointersNotSupported_m8DE23481F229D5E574822BE1853FE08EA9B46C9F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CC20FA775B7CE5630588715DBC10889D01DC6F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_mC7C1DDB92774C63670D58F45D0C56D0343A057A2(_stringLiteral4CC20FA775B7CE5630588715DBC10889D01DC6F1, (String_t*)NULL, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Argument_DestinationTooShort_m1BB390B2EB53A286963744393280B0FE4769FC0B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44B6E521D3C115CEA4878E4F981B5C2ACC1C885A);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_mC7C1DDB92774C63670D58F45D0C56D0343A057A2(_stringLiteral44B6E521D3C115CEA4878E4F981B5C2ACC1C885A, (String_t*)NULL, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_EndPositionNotReached_mF49CA87E992A0603592C330BA362F8D2833C4371 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD47A3426BF2C027AE854619E7EAB1FEB5E8491AD);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_mC7C1DDB92774C63670D58F45D0C56D0343A057A2(_stringLiteralD47A3426BF2C027AE854619E7EAB1FEB5E8491AD, (String_t*)NULL, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SR__cctor_m30F7BB884DCF1A442B70C2A014ED3FDD23557B2F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tB44EE0FB91B3DFAAD599FD4112045128BD764946_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (SR_tB44EE0FB91B3DFAAD599FD4112045128BD764946_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		((SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_StaticFields*)il2cpp_codegen_static_fields_for(SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_il2cpp_TypeInfo_var))->___U3CResourceTypeU3Ek__BackingField = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_StaticFields*)il2cpp_codegen_static_fields_for(SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_il2cpp_TypeInfo_var))->___U3CResourceTypeU3Ek__BackingField), (void*)L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_Combine_m385B341295B27D9ACDD3EE970B50345AC9E15508 (int32_t ___0_h1, int32_t ___1_h2, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = ___0_h1;
		int32_t L_1 = ___0_h1;
		V_0 = ((int32_t)(((int32_t)(L_0<<5))|((int32_t)((uint32_t)L_1>>((int32_t)27)))));
		uint32_t L_2 = V_0;
		int32_t L_3 = ___0_h1;
		int32_t L_4 = ___1_h2;
		return ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_2, L_3))^L_4));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashHelpers__cctor_mEE4CE439878ADD10611F7446A570A089CAA32742 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t85510791EE47AB402E6058CC72BAA49072EC73B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&V_0), NULL);
		((HashHelpers_t85510791EE47AB402E6058CC72BAA49072EC73B0_StaticFields*)il2cpp_codegen_static_fields_for(HashHelpers_t85510791EE47AB402E6058CC72BAA49072EC73B0_il2cpp_TypeInfo_var))->___RandomSeed = L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SequenceMarshal_TryGetString_mD94D577BF626D4811E92F2B624DA956707453723 (ReadOnlySequence_1_tB92F573CB7E60063E617333D588EDAF0441B397B ___0_sequence, String_t** ___1_text, int32_t* ___2_start, int32_t* ___3_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySequence_1_TryGetString_m1FC6144676AB2C4476126268E6E6DAC654F25343_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySequence_1_tB92F573CB7E60063E617333D588EDAF0441B397B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t** L_0 = ___1_text;
		int32_t* L_1 = ___2_start;
		int32_t* L_2 = ___3_length;
		il2cpp_codegen_runtime_class_init_inline(ReadOnlySequence_1_tB92F573CB7E60063E617333D588EDAF0441B397B_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReadOnlySequence_1_TryGetString_m1FC6144676AB2C4476126268E6E6DAC654F25343((&___0_sequence), L_0, L_1, L_2, ReadOnlySequence_1_TryGetString_m1FC6144676AB2C4476126268E6E6DAC654F25343_RuntimeMethod_var);
		return L_3;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySequence_ArrayToSequenceStart_m846A83DE097FF7007C2FD847BA155C65E49563F3 (int32_t ___0_startIndex, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_startIndex;
		return ((int32_t)(L_0|0));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySequence_ArrayToSequenceEnd_mEB3B1F863B9FAB1FBBD9C7099D94A53B8969E9F6 (int32_t ___0_endIndex, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_endIndex;
		return ((int32_t)(L_0|((int32_t)-2147483648LL)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReverseEndianness_m700F1976C80E5F882FDE693373C46B7FFAB5A3A9 (uint32_t ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = ___0_value;
		V_0 = ((int32_t)((int32_t)L_0&((int32_t)16711935)));
		uint32_t L_1 = ___0_value;
		V_1 = ((int32_t)((int32_t)L_1&((int32_t)-16711936)));
		uint32_t L_2 = V_0;
		uint32_t L_3 = V_0;
		uint32_t L_4 = V_1;
		uint32_t L_5 = V_1;
		return ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((uint32_t)L_2>>8))|((int32_t)((int32_t)L_3<<((int32_t)24))))), ((int32_t)(((int32_t)((int32_t)L_4<<8))|((int32_t)((uint32_t)L_5>>((int32_t)24)))))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t BinaryPrimitives_ReverseEndianness_mFAA3F86AB4735F79E222F8215DA1FCF29AA925B2 (uint64_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_value;
		uint32_t L_1;
		L_1 = BinaryPrimitives_ReverseEndianness_m700F1976C80E5F882FDE693373C46B7FFAB5A3A9_inline(((int32_t)(uint32_t)L_0), NULL);
		uint64_t L_2 = ___0_value;
		uint32_t L_3;
		L_3 = BinaryPrimitives_ReverseEndianness_m700F1976C80E5F882FDE693373C46B7FFAB5A3A9_inline(((int32_t)(uint32_t)((int64_t)((uint64_t)L_2>>((int32_t)32)))), NULL);
		return ((int64_t)il2cpp_codegen_add(((int64_t)(((int64_t)(uint64_t)((uint32_t)L_1))<<((int32_t)32))), ((int64_t)(uint64_t)((uint32_t)L_3))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t BinaryPrimitives_ReadUInt64LittleEndian_m61CD47C68498EF751C43770ACCFD2A4FF96095C2 (ReadOnlySpan_1_tCF05C1E093B5ADFC0C1F96FE3ACC364340B054EF ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Read_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m1D5C322C1040939742B19BF70F18CD61D1A59623_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	{
		ReadOnlySpan_1_tCF05C1E093B5ADFC0C1F96FE3ACC364340B054EF L_0 = ___0_source;
		uint64_t L_1;
		L_1 = MemoryMarshal_Read_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m1D5C322C1040939742B19BF70F18CD61D1A59623_inline(L_0, MemoryMarshal_Read_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m1D5C322C1040939742B19BF70F18CD61D1A59623_RuntimeMethod_var);
		V_0 = L_1;
		if (il2cpp_codegen_is_little_endian())
		{
			goto IL_0015;
		}
	}
	{
		uint64_t L_2 = V_0;
		uint64_t L_3;
		L_3 = BinaryPrimitives_ReverseEndianness_mFAA3F86AB4735F79E222F8215DA1FCF29AA925B2_inline(L_2, NULL);
		V_0 = L_3;
	}

IL_0015:
	{
		uint64_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryPrimitives_WriteUInt32LittleEndian_m0F9C5448E19D158700BD7A77B9DA30651916E7BC (Span_1_t0A0439AD0EC86806417DBF8E80BC87C0383B3945 ___0_destination, uint32_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mC7AC8CF7AFDFE531B723DF14C091878C94C7B91A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		if (il2cpp_codegen_is_little_endian())
		{
			goto IL_000f;
		}
	}
	{
		uint32_t L_0 = ___1_value;
		uint32_t L_1;
		L_1 = BinaryPrimitives_ReverseEndianness_m700F1976C80E5F882FDE693373C46B7FFAB5A3A9_inline(L_0, NULL);
		___1_value = L_1;
	}

IL_000f:
	{
		Span_1_t0A0439AD0EC86806417DBF8E80BC87C0383B3945 L_2 = ___0_destination;
		MemoryMarshal_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mC7AC8CF7AFDFE531B723DF14C091878C94C7B91A_inline(L_2, (&___1_value), MemoryMarshal_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mC7AC8CF7AFDFE531B723DF14C091878C94C7B91A_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryPrimitives_WriteUInt64LittleEndian_m260B15BFB58652DE3281880081EC0B0483264B09 (Span_1_t0A0439AD0EC86806417DBF8E80BC87C0383B3945 ___0_destination, uint64_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Write_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m07C3207284A428FF36F5AE4F3A605158AC92BFA5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		if (il2cpp_codegen_is_little_endian())
		{
			goto IL_000f;
		}
	}
	{
		uint64_t L_0 = ___1_value;
		uint64_t L_1;
		L_1 = BinaryPrimitives_ReverseEndianness_mFAA3F86AB4735F79E222F8215DA1FCF29AA925B2_inline(L_0, NULL);
		___1_value = L_1;
	}

IL_000f:
	{
		Span_1_t0A0439AD0EC86806417DBF8E80BC87C0383B3945 L_2 = ___0_destination;
		MemoryMarshal_Write_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m07C3207284A428FF36F5AE4F3A605158AC92BFA5_inline(L_2, (&___1_value), MemoryMarshal_Write_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m07C3207284A428FF36F5AE4F3A605158AC92BFA5_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SequencePosition_GetObject_m6270FB7EF92286558F3053CF1A9AF22FF6FB03F1_inline (SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____object;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SequencePosition_GetInteger_mE57898E6D4C23D1E0D0D6615F278BBA67DB1767F_inline (SequencePosition_t2CF0572EC1A93796E21C096A5DFC3CBC6677F3B0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____integer;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NUInt_op_Explicit_mC163D9B735A039C7266948F8F85F4D2EBA9AD89B_inline (NUInt_t0B0CF9DC99943B2B2EFB5667D439EF1A6D6C1FED ___0_value, const RuntimeMethod* method) 
{
	{
		NUInt_t0B0CF9DC99943B2B2EFB5667D439EF1A6D6C1FED L_0 = ___0_value;
		void* L_1 = L_0.____value;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* SR_get_ResourceType_m006BB8031B3065D26720905A0C651672BA161D87_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_il2cpp_TypeInfo_var);
		Type_t* L_0 = ((SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_StaticFields*)il2cpp_codegen_static_fields_for(SR_tD312F6E1AEF44DB0BB92DE7DA66C0A14F31BE5A5_il2cpp_TypeInfo_var))->___U3CResourceTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReverseEndianness_m700F1976C80E5F882FDE693373C46B7FFAB5A3A9_inline (uint32_t ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = ___0_value;
		V_0 = ((int32_t)((int32_t)L_0&((int32_t)16711935)));
		uint32_t L_1 = ___0_value;
		V_1 = ((int32_t)((int32_t)L_1&((int32_t)-16711936)));
		uint32_t L_2 = V_0;
		uint32_t L_3 = V_0;
		uint32_t L_4 = V_1;
		uint32_t L_5 = V_1;
		return ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((uint32_t)L_2>>8))|((int32_t)((int32_t)L_3<<((int32_t)24))))), ((int32_t)(((int32_t)((int32_t)L_4<<8))|((int32_t)((uint32_t)L_5>>((int32_t)24)))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t BinaryPrimitives_ReverseEndianness_mFAA3F86AB4735F79E222F8215DA1FCF29AA925B2_inline (uint64_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_value;
		uint32_t L_1;
		L_1 = BinaryPrimitives_ReverseEndianness_m700F1976C80E5F882FDE693373C46B7FFAB5A3A9_inline(((int32_t)(uint32_t)L_0), NULL);
		uint64_t L_2 = ___0_value;
		uint32_t L_3;
		L_3 = BinaryPrimitives_ReverseEndianness_m700F1976C80E5F882FDE693373C46B7FFAB5A3A9_inline(((int32_t)(uint32_t)((int64_t)((uint64_t)L_2>>((int32_t)32)))), NULL);
		return ((int64_t)il2cpp_codegen_add(((int64_t)(((int64_t)(uint64_t)((uint32_t)L_1))<<((int32_t)32))), ((int64_t)(uint64_t)((uint32_t)L_3))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC5E3B1692AED1CB09CCF2C71C7DFDB94C7655F55_gshared_inline (ReadOnlySpan_1_t2A13CC482E53CF4B549A5F0090211E721E4CCF1D* __this, Pinnable_1_tA08A98AD4B692A86ECC193BAF63E576FBFF35331* ___0_pinnable, intptr_t ___1_byteOffset, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___2_length;
		__this->____length = L_0;
		Pinnable_1_tA08A98AD4B692A86ECC193BAF63E576FBFF35331* L_1 = ___0_pinnable;
		__this->____pinnable = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pinnable), (void*)L_1);
		intptr_t L_2 = ___1_byteOffset;
		__this->____byteOffset = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlyMemory_1__ctor_m5084CF90420F0309B9E55A80D68AB13C01D84B09_gshared_inline (ReadOnlyMemory_1_t50B68E359CC5C40CFBA97B2953C0C60AD813F6D0* __this, RuntimeObject* ___0_obj, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		__this->____object = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object), (void*)L_0);
		int32_t L_1 = ___1_start;
		__this->____index = L_1;
		int32_t L_2 = ___2_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m62B39B4108D90727F1E8FBC7E810066A01CEF4E4_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_0 = ((Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___s_count;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_op_Inequality_mBD50B06B4F13EDD357C1959868BFA04742D95A91_gshared_inline (Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9 ___0_left, Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9 ___1_right, const RuntimeMethod* method) 
{
	{
		Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9 L_0 = ___0_left;
		Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9 L_1 = ___1_right;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_2;
		L_2 = Vector_1_op_Equality_mC02E4B83ECFD21267742B698B874C5FF5178E033_inline(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_op_Equality_mC02E4B83ECFD21267742B698B874C5FF5178E033_gshared_inline (Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9 ___0_left, Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9 ___1_right, const RuntimeMethod* method) 
{
	{
		Vector_1_t544CF15CBEFB9986AB1A05FA2CC29B714EDAD6E9 L_0 = ___1_right;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_1;
		L_1 = Vector_1_Equals_m294EF36D54286AA6FFFB5C872BB0698549A41DCA((&___0_left), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t MemoryMarshal_Read_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m1D5C322C1040939742B19BF70F18CD61D1A59623_gshared_inline (ReadOnlySpan_1_tCF05C1E093B5ADFC0C1F96FE3ACC364340B054EF ___0_source, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC280D535BF5CF608CFD0126E737B188BBD8B34DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m9C37B08D49CB3D3A8C5631C5260CC4A7D98CC328_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		bool L_0;
		L_0 = SpanHelpers_IsReferenceOrContainsReferences_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0A08BB41F5E1A70660B21A64F282E92E59D16664_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_mB90A359B600D798B8ADA13CE5192D2D6A80517D3(L_2, NULL);
	}

IL_0016:
	{
		int32_t L_3;
		L_3 = il2cpp_unsafe_sizeof<uint64_t>();
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_m9C37B08D49CB3D3A8C5631C5260CC4A7D98CC328_inline((&___0_source), ReadOnlySpan_1_get_Length_m9C37B08D49CB3D3A8C5631C5260CC4A7D98CC328_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_002a;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mEECE035AE49F378B431CBD7F04A8C96F6C67B1D4((int32_t)0, NULL);
	}

IL_002a:
	{
		ReadOnlySpan_1_tCF05C1E093B5ADFC0C1F96FE3ACC364340B054EF L_5 = ___0_source;
		uint8_t* L_6;
		L_6 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC280D535BF5CF608CFD0126E737B188BBD8B34DF(L_5, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC280D535BF5CF608CFD0126E737B188BBD8B34DF_RuntimeMethod_var);
		uint64_t L_7;
		L_7 = il2cpp_unsafe_read_unaligned<uint64_t>(L_6);
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryMarshal_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mC7AC8CF7AFDFE531B723DF14C091878C94C7B91A_gshared_inline (Span_1_t0A0439AD0EC86806417DBF8E80BC87C0383B3945 ___0_destination, uint32_t* ___1_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m74D0716355DF6DDA455D362766EB0F0EB7B35A79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mBA0124F96297CC2B74A6177E403DFAE7CE550A1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		bool L_0;
		L_0 = SpanHelpers_IsReferenceOrContainsReferences_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m1A6EBCE81916353552BDE7D1AE00383A820DB26D_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_mB90A359B600D798B8ADA13CE5192D2D6A80517D3(L_2, NULL);
	}

IL_0016:
	{
		int32_t L_3;
		L_3 = il2cpp_unsafe_sizeof<uint32_t>();
		int32_t L_4;
		L_4 = Span_1_get_Length_mBA0124F96297CC2B74A6177E403DFAE7CE550A1E_inline((&___0_destination), Span_1_get_Length_mBA0124F96297CC2B74A6177E403DFAE7CE550A1E_RuntimeMethod_var);
		if ((!(((uint32_t)L_3) > ((uint32_t)L_4))))
		{
			goto IL_002a;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mEECE035AE49F378B431CBD7F04A8C96F6C67B1D4((int32_t)0, NULL);
	}

IL_002a:
	{
		Span_1_t0A0439AD0EC86806417DBF8E80BC87C0383B3945 L_5 = ___0_destination;
		uint8_t* L_6;
		L_6 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m74D0716355DF6DDA455D362766EB0F0EB7B35A79(L_5, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m74D0716355DF6DDA455D362766EB0F0EB7B35A79_RuntimeMethod_var);
		uint32_t* L_7 = ___1_value;
		uint32_t L_8 = (*(uint32_t*)L_7);
		il2cpp_unsafe_write_unaligned(L_6, L_8);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryMarshal_Write_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m07C3207284A428FF36F5AE4F3A605158AC92BFA5_gshared_inline (Span_1_t0A0439AD0EC86806417DBF8E80BC87C0383B3945 ___0_destination, uint64_t* ___1_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m74D0716355DF6DDA455D362766EB0F0EB7B35A79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mBA0124F96297CC2B74A6177E403DFAE7CE550A1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		bool L_0;
		L_0 = SpanHelpers_IsReferenceOrContainsReferences_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0A08BB41F5E1A70660B21A64F282E92E59D16664_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_mB90A359B600D798B8ADA13CE5192D2D6A80517D3(L_2, NULL);
	}

IL_0016:
	{
		int32_t L_3;
		L_3 = il2cpp_unsafe_sizeof<uint64_t>();
		int32_t L_4;
		L_4 = Span_1_get_Length_mBA0124F96297CC2B74A6177E403DFAE7CE550A1E_inline((&___0_destination), Span_1_get_Length_mBA0124F96297CC2B74A6177E403DFAE7CE550A1E_RuntimeMethod_var);
		if ((!(((uint32_t)L_3) > ((uint32_t)L_4))))
		{
			goto IL_002a;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mEECE035AE49F378B431CBD7F04A8C96F6C67B1D4((int32_t)0, NULL);
	}

IL_002a:
	{
		Span_1_t0A0439AD0EC86806417DBF8E80BC87C0383B3945 L_5 = ___0_destination;
		uint8_t* L_6;
		L_6 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m74D0716355DF6DDA455D362766EB0F0EB7B35A79(L_5, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m74D0716355DF6DDA455D362766EB0F0EB7B35A79_RuntimeMethod_var);
		uint64_t* L_7 = ___1_value;
		uint64_t L_8 = (*(uint64_t*)L_7);
		il2cpp_unsafe_write_unaligned(L_6, L_8);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0A08BB41F5E1A70660B21A64F282E92E59D16664_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t0E8A33CA4D73B1CC849AA23CEAC0C12662265E12_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m9C37B08D49CB3D3A8C5631C5260CC4A7D98CC328_gshared_inline (ReadOnlySpan_1_tCF05C1E093B5ADFC0C1F96FE3ACC364340B054EF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m1A6EBCE81916353552BDE7D1AE00383A820DB26D_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t57EF5A4BB8DB67AB315C8201A9BF2214979FC5BD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mBA0124F96297CC2B74A6177E403DFAE7CE550A1E_gshared_inline (Span_1_t0A0439AD0EC86806417DBF8E80BC87C0383B3945* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
