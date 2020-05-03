#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Int32Enum>
struct Action_1_tABA1E3BFA092E3309A0ECC53722E4F9826DCE983;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`1<UnityEngine.Advertisements.CallbackExecutor>
struct Action_1_t089491CF3BD2890A851D82690754A8F0DE899372;
// System.Action`1<UnityEngine.Advertisements.CallbackExecutor>[]
struct Action_1U5BU5D_tE64BC991F7DDC3D4C1553540803D5779499D7F46;
// System.Action`1<UnityEngine.Advertisements.ShowResult>
struct Action_1_tCF5AFC4513076B0E4A471BEF3A11BFBBDF57F857;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.ArrayList
struct ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Boolean>[]
struct EntryU5BU5D_tFFA35B84E46237BAB5E83032C58E415D435F15F4;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>>[]
struct EntryU5BU5D_t23D33CB451FBA076683729F1E55ADCE5451849BA;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>[]
struct EntryU5BU5D_tD61CF58B2079B3453EE92124A8A6386ED43D834F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>
struct KeyCollection_t20EDBCFDF792B4160BE580A651A2A6CE83BEE69E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct KeyCollection_t6D344B2D21765F2012C294FF56473FB935907DCF;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>
struct KeyCollection_t87DD094103D6B7F53D7799AD4A19DABE91971213;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>
struct ValueCollection_t6DDEE1B1298603E64C9135930EFC9A27A838DCA6;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct ValueCollection_t05775C2A8DB65883668B327330244DB6F25AF177;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>
struct ValueCollection_tF96117544ED286D1DDA56B038DDA3861D9800702;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2C8E1AAACF23306CF00CADFFC35DB50456AEBC51;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t6A813DEF18A9954A956AC6D75592B16702986F7D;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct Dictionary_2_t82BCBA9454C6D1CD4FFAC1591ED063945EE8000D;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>
struct Dictionary_2_tBB5D728BE58C8B287D432992DC4CDBA9FF9BDAC3;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
struct Dictionary_2_t647A547AB3A1B833E8822D637B8AFE498014605A;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
struct Dictionary_2_t9F3C66A9312E12F622EB673217B6338D090AB52F;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
struct Dictionary_2_tFFBC0964414A02C12E7789C962FD19C2C8C11696;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t6DFB531B62AFA3E16A8936F29107F83350147938;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t2E51991ADA605DB75870908AF6D7C3093DC3FCBA;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct IDictionary_2_t2E00AEF12BBE1905A3EA6FA837962AF185C8DDAD;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t6AF508DE18DA398DBB91330BEEB14B0CFBD4A8ED;
// System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>
struct IDictionary_2_t26ABEA8823F1D354467705F96691A69FAE7C5EB0;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
struct IDictionary_2_t028F1617B4A810A549A995B8BE3281124D2E7FBA;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
struct IDictionary_2_t23497D69F526B4556DC679CBA0F91D0F85872FB0;
// System.Collections.Generic.IDictionary`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
struct IDictionary_2_t1EF905ACAD3F0F545FE06225B68811E0166BC26D;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>
struct IEnumerable_1_t38430383D88E6985C7F2B49DE4E75CAA8B78F41A;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>
struct IEnumerable_1_tDA7E9848536B59EBF51798D5D18FC692116C41D8;
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>
struct IEnumerable_1_t05EA2C465ACA2B28E0BF150280D7C95077A9697F;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1B544616A0E00870EA4AEE27B24E2D5122C6EFBB;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_tEF7B0C36EC296277C5C943CFF843529E0B8B5343;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.Queue`1<System.Action`1<UnityEngine.Advertisements.CallbackExecutor>>
struct Queue_1_tBE60FA9EC7CEAC6A2101CA6BF8E09035C8DA2F3E;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerable
struct IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521;
// System.EventArgs
struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E;
// System.EventHandler`1<System.Object>
struct EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3;
// System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>
struct EventHandler_1_t674DACB444A256903A17FB5F7644CEB641C01927;
// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>
struct EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226;
// System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>
struct EventHandler_1_tB57D8AF0A9FA3BFE6ABEC77DE046E4A20526A09A;
// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>
struct EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95;
// System.Exception
struct Exception_t;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6;
// System.Func`2<System.Object,System.String>
struct Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF;
// System.Globalization.Calendar
struct Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5;
// System.Globalization.CompareInfo
struct CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1;
// System.Globalization.CultureData
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8;
// System.Globalization.TextInfo
struct TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.IO.StreamReader
struct StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Net.IWebProxy
struct IWebProxy_tA24C0862A1ACA35D20FD079E2672CA5786C1A67E;
// System.Net.TimerThread/Queue
struct Queue_tCCFF6A2FCF584216AEDA04A483FB808E2D493643;
// System.Net.WebRequest
struct WebRequest_t5668DA48802E9FE2F1DE5F5A770B218608B918C8;
// System.Net.WebRequest/DesignerWebRequestCreate
struct DesignerWebRequestCreate_t613DD91D4F07703DC65E847B367F4DCD5710E2A3;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t111EE7D53C51A47FE69FC3398DE007F7E100593E;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.InteropServices.MarshalAsAttribute
struct MarshalAsAttribute_t1F5CB9960D7AD6C3305475C98A397BD0B9C64020;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Runtime.Serialization.SerializationException
struct SerializationException_tA1FDFF6779406E688C2192E71C38DBFD7A4A2210;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.Decoder
struct Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.Uri/UriInfo
struct UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E;
// System.UriParser
struct UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Advertisements.Advertisement/<Show>c__AnonStorey0
struct U3CShowU3Ec__AnonStorey0_t3F78313FF5E87445044283B31B3DB8DF4BBCA6B4;
// UnityEngine.Advertisements.Advertisement/<Show>c__AnonStorey1
struct U3CShowU3Ec__AnonStorey1_t7C410F6A2B71DAAC4DAEB5851994E08082C63A80;
// UnityEngine.Advertisements.Android.Platform
struct Platform_t90C2BEBA869F5A23475D57DE636EEFBB4507A833;
// UnityEngine.Advertisements.CallbackExecutor
struct CallbackExecutor_tB2DFCCED2168CFD8C1F6FD0C21679DA386B8CA78;
// UnityEngine.Advertisements.Editor.Configuration
struct Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B;
// UnityEngine.Advertisements.Editor.Placeholder
struct Placeholder_tB58246E9925EEB8DEFBD0EC187EC59F96EF4E244;
// UnityEngine.Advertisements.Editor.Platform
struct Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740;
// UnityEngine.Advertisements.Editor.Platform/<Initialize>c__AnonStorey0
struct U3CInitializeU3Ec__AnonStorey0_t01695F5A9E779590A7DB912A981E37FC10911AF8;
// UnityEngine.Advertisements.ErrorEventArgs
struct ErrorEventArgs_t77C07CCB4554162961BBE00E3B7E52DDA8648409;
// UnityEngine.Advertisements.FinishEventArgs
struct FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D;
// UnityEngine.Advertisements.IPlatform
struct IPlatform_t641848859ED10CAE8664D5746AABD9243D5DEA45;
// UnityEngine.Advertisements.MetaData
struct MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03;
// UnityEngine.Advertisements.ReadyEventArgs
struct ReadyEventArgs_tA3E33B18240D91F48C92CC62CB5515388449E250;
// UnityEngine.Advertisements.ShowOptions
struct ShowOptions_t6637C67D4907C169839DA10D810B696A19941904;
// UnityEngine.Advertisements.SimpleJson.IJsonSerializerStrategy
struct IJsonSerializerStrategy_tE452A33F7FCE60A3E60819983B00BF48EF1E5DC0;
// UnityEngine.Advertisements.SimpleJson.JsonArray
struct JsonArray_tEC81164ADEC87B1B3F3D28FEA89F9AF6458479A6;
// UnityEngine.Advertisements.SimpleJson.JsonObject
struct JsonObject_t5430387D9A9215A629850E012C366DBE5AD5A2B5;
// UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy
struct PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E;
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey0
struct U3CGetConstructorByReflectionU3Ec__AnonStorey0_t4266D02561276A50905B1F44DEDE646F4845D634;
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey1
struct U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t5304BC457840A263778B61647A6214450139CE2F;
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2
struct U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t5DD58BDB4BDF3531B0981E89EF60C3ED0C510D14;
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey3
struct U3CGetSetMethodByReflectionU3Ec__AnonStorey3_tFBA12729E943700B178CA5477723857345AB686B;
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4
struct U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t43269ED7005D484DB0429A87155BB781825B5E47;
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
struct ConstructorDelegate_t758C58A6B467BA586E2C6B57A535729A620BFCEC;
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate
struct GetDelegate_t5384142A3E4A970422627B6C02B4EB4319934A8F;
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate
struct SetDelegate_tB85E10DD9F713CAE7ED82A18744F73AED4EA6D04;
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t50E029BB77EE4A253FE8C1475B2A2A9EB05B4074;
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
struct ThreadSafeDictionaryValueFactory_2_t00EBEAFF4AF9A2C099AB2D1FEE2582299607C9B2;
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
struct ThreadSafeDictionaryValueFactory_2_t64ADFF2082641786DBFD5FFA3B40EBC3F9576E34;
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
struct ThreadSafeDictionaryValueFactory_2_tAE7D4B6776CD9AEF60B6EC3F80B1E2FEBD1D0F0C;
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_tB169B82FA3106EDC684BE8429307E8F0E990B25C;
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
struct ThreadSafeDictionary_2_tC79ADF4BCD32D26FEFC08FAB60B79ED5FF57EF37;
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
struct ThreadSafeDictionary_2_t9A0BA6506726B243C842230BC1159D24D661386E;
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
struct ThreadSafeDictionary_2_t1F1CC2D67B7F84600B060F52825BBEACEE0CFBE0;
// UnityEngine.Advertisements.StartEventArgs
struct StartEventArgs_t44F8C8482BBCC37963CFBC1C4D2F6473040717E2;
// UnityEngine.Advertisements.UnsupportedPlatform
struct UnsupportedPlatform_t5FA6C225FDA5FF02CA0C0297631D99C8C4C2E5C3;
// UnityEngine.Advertisements.iOS.Platform
struct Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D;
// UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidError>c__AnonStorey1
struct U3CUnityAdsDidErrorU3Ec__AnonStorey1_t6A5E888349986FCAC117F1F71F73587DAE2AFFEA;
// UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidFinish>c__AnonStorey3
struct U3CUnityAdsDidFinishU3Ec__AnonStorey3_tFF312E3E401419649E7A80CB5F522EFBD8C7A1E1;
// UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidFinish>c__AnonStorey4
struct U3CUnityAdsDidFinishU3Ec__AnonStorey4_tF3998F44D42BAA24F6FC8B71E5E2443B74010AB7;
// UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidStart>c__AnonStorey2
struct U3CUnityAdsDidStartU3Ec__AnonStorey2_t69450E13B9A35C35663BBFDA85A317661053E4F6;
// UnityEngine.Advertisements.iOS.Platform/<UnityAdsReady>c__AnonStorey0
struct U3CUnityAdsReadyU3Ec__AnonStorey0_tB27C3EFC407540F32BE16EEEECF2C7B88BF43A79;
// UnityEngine.Advertisements.iOS.Platform/unityAdsDidError
struct unityAdsDidError_t0AEE1AF310020AF7C9F6A7881F50B21996A32C61;
// UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish
struct unityAdsDidFinish_t9EE8992F28B4D62991C98D7D85A9E93A6835E045;
// UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart
struct unityAdsDidStart_tD78BF20784F7416774E14ADE453F6F4B4428D7FA;
// UnityEngine.Advertisements.iOS.Platform/unityAdsReady
struct unityAdsReady_t716CB3207A4D591AFD38E610CC8DC5EA4DE62A67;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_t72F996A75B4B771B9572C3770CF2D2C7A5B4783D;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Texture
struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t089491CF3BD2890A851D82690754A8F0DE899372_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_t72F996A75B4B771B9572C3770CF2D2C7A5B4783D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConstructorDelegate_t758C58A6B467BA586E2C6B57A535729A620BFCEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t82BCBA9454C6D1CD4FFAC1591ED063945EE8000D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tBB5D728BE58C8B287D432992DC4CDBA9FF9BDAC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_tEDEEE8F2491CB14C772ACA1B27EE8C40B2A06EC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ErrorEventArgs_t77C07CCB4554162961BBE00E3B7E52DDA8648409_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetDelegate_t5384142A3E4A970422627B6C02B4EB4319934A8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t23497D69F526B4556DC679CBA0F91D0F85872FB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t26ABEA8823F1D354467705F96691A69FAE7C5EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t2E00AEF12BBE1905A3EA6FA837962AF185C8DDAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t6AF508DE18DA398DBB91330BEEB14B0CFBD4A8ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t8D4B47914EFD2300DFBC7D9626F3D538CFA7CA53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t05EA2C465ACA2B28E0BF150280D7C95077A9697F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t2BB59C968153964422E5D0566F9A50EF12F6C557_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t38430383D88E6985C7F2B49DE4E75CAA8B78F41A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t4392D5E5B321E5D2C8C0F9C7FFF1BD2EBF9DE17E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tDA7E9848536B59EBF51798D5D18FC692116C41D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t1B544616A0E00870EA4AEE27B24E2D5122C6EFBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t537D797E2644AF9046B1E4CAAC405D8CE9D01534_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t5807D4DF98ADD164635C27255B79195203F1057C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tBA94C273DC5E1ABE7C78A3A5AA47081379158F75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tDDB69E91697CCB64C7993B651487CEEC287DB7E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tFF29F758EE2F45C6B96A41F6379516A23E129A8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IJsonSerializerStrategy_tE452A33F7FCE60A3E60819983B00BF48EF1E5DC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_tE09735A322C3B17000EF4E4BC8026FEDEB7B0D9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlatform_t641848859ED10CAE8664D5746AABD9243D5DEA45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonArray_tEC81164ADEC87B1B3F3D28FEA89F9AF6458479A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonObject_t5430387D9A9215A629850E012C366DBE5AD5A2B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Platform_t90C2BEBA869F5A23475D57DE636EEFBB4507A833_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tBE60FA9EC7CEAC6A2101CA6BF8E09035C8DA2F3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadyEventArgs_tA3E33B18240D91F48C92CC62CB5515388449E250_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionUtils_t716A5426EE76AD7B91D2D6989AB62AA4BB23A534_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializationException_tA1FDFF6779406E688C2192E71C38DBFD7A4A2210_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SetDelegate_tB85E10DD9F713CAE7ED82A18744F73AED4EA6D04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleJson_tD74F35DC9B5A5D3F70146A8C72026BD47A7DFE7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StartEventArgs_t44F8C8482BBCC37963CFBC1C4D2F6473040717E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadSafeDictionaryValueFactory_2_t00EBEAFF4AF9A2C099AB2D1FEE2582299607C9B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadSafeDictionaryValueFactory_2_t64ADFF2082641786DBFD5FFA3B40EBC3F9576E34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadSafeDictionaryValueFactory_2_tAE7D4B6776CD9AEF60B6EC3F80B1E2FEBD1D0F0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadSafeDictionary_2_t1F1CC2D67B7F84600B060F52825BBEACEE0CFBE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadSafeDictionary_2_t9A0BA6506726B243C842230BC1159D24D661386E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadSafeDictionary_2_tC79ADF4BCD32D26FEFC08FAB60B79ED5FF57EF37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetConstructorByReflectionU3Ec__AnonStorey0_t4266D02561276A50905B1F44DEDE646F4845D634_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t5304BC457840A263778B61647A6214450139CE2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t5DD58BDB4BDF3531B0981E89EF60C3ED0C510D14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetSetMethodByReflectionU3Ec__AnonStorey3_tFBA12729E943700B178CA5477723857345AB686B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t43269ED7005D484DB0429A87155BB781825B5E47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInitializeU3Ec__AnonStorey0_t01695F5A9E779590A7DB912A981E37FC10911AF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShowU3Ec__AnonStorey0_t3F78313FF5E87445044283B31B3DB8DF4BBCA6B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShowU3Ec__AnonStorey1_t7C410F6A2B71DAAC4DAEB5851994E08082C63A80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CUnityAdsDidErrorU3Ec__AnonStorey1_t6A5E888349986FCAC117F1F71F73587DAE2AFFEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CUnityAdsDidFinishU3Ec__AnonStorey3_tFF312E3E401419649E7A80CB5F522EFBD8C7A1E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CUnityAdsDidFinishU3Ec__AnonStorey4_tF3998F44D42BAA24F6FC8B71E5E2443B74010AB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CUnityAdsDidStartU3Ec__AnonStorey2_t69450E13B9A35C35663BBFDA85A317661053E4F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CUnityAdsReadyU3Ec__AnonStorey0_tB27C3EFC407540F32BE16EEEECF2C7B88BF43A79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnsupportedPlatform_t5FA6C225FDA5FF02CA0C0297631D99C8C4C2E5C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebRequest_t5668DA48802E9FE2F1DE5F5A770B218608B918C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unityAdsDidError_t0AEE1AF310020AF7C9F6A7881F50B21996A32C61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unityAdsDidFinish_t9EE8992F28B4D62991C98D7D85A9E93A6835E045_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unityAdsDidStart_tD78BF20784F7416774E14ADE453F6F4B4428D7FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unityAdsReady_t716CB3207A4D591AFD38E610CC8DC5EA4DE62A67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral025EF8D85887D67A5A3B6311EAD984E8DAFDD7D4;
IL2CPP_EXTERN_C String_t* _stringLiteral055B0A36B5CCB99BDAF3D573A31165B3FDC575CE;
IL2CPP_EXTERN_C String_t* _stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9;
IL2CPP_EXTERN_C String_t* _stringLiteral0C1FD808AD249A5ECA5AEB173551B9517A17B282;
IL2CPP_EXTERN_C String_t* _stringLiteral0D21F31C648AC9C9B51D4171AB74DD781833979A;
IL2CPP_EXTERN_C String_t* _stringLiteral1032734CFF97E5539EA6D27B891DD4A5C74F8FF1;
IL2CPP_EXTERN_C String_t* _stringLiteral140F86AAE51AB9E1CDA9B4254FE98A74EB54C1A1;
IL2CPP_EXTERN_C String_t* _stringLiteral153809851B33CE0CDCE06E5A572C675E18D0C3B5;
IL2CPP_EXTERN_C String_t* _stringLiteral19EDC1210777BA4D45049C29280D9CC5E1064C25;
IL2CPP_EXTERN_C String_t* _stringLiteral1CCC296DDB26C09B231DD4D12340885E4471FB6B;
IL2CPP_EXTERN_C String_t* _stringLiteral1E5C2F367F02E47A8C160CDA1CD9D91DECBAC441;
IL2CPP_EXTERN_C String_t* _stringLiteral229139371E58C5CBAC88C9BB3060EDA248DDFD83;
IL2CPP_EXTERN_C String_t* _stringLiteral2ACE62C1BEFA19E3EA37DD52BE9F6D508C5163E6;
IL2CPP_EXTERN_C String_t* _stringLiteral2B5A71ABF7A3D810F2064EE7BA1ACCCDAFEF1191;
IL2CPP_EXTERN_C String_t* _stringLiteral2BE88CA4242C76E8253AC62474851065032D6833;
IL2CPP_EXTERN_C String_t* _stringLiteral31F6E040F495D116F4DD833D75DE136BC86E0575;
IL2CPP_EXTERN_C String_t* _stringLiteral32EAF9220C696B2C222E361F16ACA8FB08EC6083;
IL2CPP_EXTERN_C String_t* _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727;
IL2CPP_EXTERN_C String_t* _stringLiteral3DA474537AC378C616D6B301ACC1674BC348CECD;
IL2CPP_EXTERN_C String_t* _stringLiteral3EA3F9802ACCF8817BACD6F3DF46A73B93CCDDEC;
IL2CPP_EXTERN_C String_t* _stringLiteral4015B57A143AEC5156FD1444A017A32137A3FD0F;
IL2CPP_EXTERN_C String_t* _stringLiteral40C382BF6646D6024C142802C3433D7FBF13D049;
IL2CPP_EXTERN_C String_t* _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8;
IL2CPP_EXTERN_C String_t* _stringLiteral4629CA1B60E263BDC4326334B23323E0434717A5;
IL2CPP_EXTERN_C String_t* _stringLiteral4728F278B1371BFD6C3804C60F121BB5B72B9089;
IL2CPP_EXTERN_C String_t* _stringLiteral4A98DFDD868CE100378F22AB391E9A764EAB005A;
IL2CPP_EXTERN_C String_t* _stringLiteral4DC7C9EC434ED06502767136789763EC11D2C4B7;
IL2CPP_EXTERN_C String_t* _stringLiteral4FF447B8EF42CA51FA6FB287BED8D40F49BE58F1;
IL2CPP_EXTERN_C String_t* _stringLiteral50C9E8D5FC98727B4BBC93CF5D64A68DB647F04F;
IL2CPP_EXTERN_C String_t* _stringLiteral557558B34F2AA9E49DEBFE5365CE1B694D2E5E50;
IL2CPP_EXTERN_C String_t* _stringLiteral58E6B3A414A1E090DFC6029ADD0F3555CCBA127F;
IL2CPP_EXTERN_C String_t* _stringLiteral5A1E55886BE4869389C689BFCF0AC3CE52CEE272;
IL2CPP_EXTERN_C String_t* _stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808;
IL2CPP_EXTERN_C String_t* _stringLiteral5FFE533B830F08A0326348A9160AFAFC8ADA44DB;
IL2CPP_EXTERN_C String_t* _stringLiteral60BA4B2DAA4ED4D070FEC06687E249E0E6F9EE45;
IL2CPP_EXTERN_C String_t* _stringLiteral6167FEAB84C2ACDC920DA8B9A36187DA8A0457E8;
IL2CPP_EXTERN_C String_t* _stringLiteral65C10DC3549FE07424148A8A4790A3341ECBC253;
IL2CPP_EXTERN_C String_t* _stringLiteral671BA5FB3E066DCEAC2999D4382E9F212BE335CA;
IL2CPP_EXTERN_C String_t* _stringLiteral6AE999552A0D2DCA14D62E2BC8B764D377B1DD6C;
IL2CPP_EXTERN_C String_t* _stringLiteral720C98EECCE4A62B8B4DFEC99565620B607187E2;
IL2CPP_EXTERN_C String_t* _stringLiteral7505D64A54E061B7ACD54CCD58B49DC43500B635;
IL2CPP_EXTERN_C String_t* _stringLiteral794A729D2E4FFBB094FEC03AE9B3ACD219371385;
IL2CPP_EXTERN_C String_t* _stringLiteral7C4D33785DAA5C2370201FFA236B427AA37C9996;
IL2CPP_EXTERN_C String_t* _stringLiteral7CB6EFB98BA5972A9B5090DC2E517FE14D12CB04;
IL2CPP_EXTERN_C String_t* _stringLiteral7FE7FCBBF6586BB9560B0192AE21701CC0F7F19D;
IL2CPP_EXTERN_C String_t* _stringLiteral82560273B9A62F238C15B883B68B3828619C0097;
IL2CPP_EXTERN_C String_t* _stringLiteral8799419DB1A362129B0BB2A9C7C2557C505892B1;
IL2CPP_EXTERN_C String_t* _stringLiteral87EA5DFC8B8E384D848979496E706390B497E547;
IL2CPP_EXTERN_C String_t* _stringLiteral889C6853A117ACA83EF9D6523335DC065213AE86;
IL2CPP_EXTERN_C String_t* _stringLiteral8BF81043E29DFC96A6FE1F30F7116F552DE6E7D7;
IL2CPP_EXTERN_C String_t* _stringLiteral8D092CC1A22B79EACE7BF34FB9C6028C189A9AA7;
IL2CPP_EXTERN_C String_t* _stringLiteral8E19CF483F6804FAF41E303CA2D5BF9D654E1AAA;
IL2CPP_EXTERN_C String_t* _stringLiteral917C9CF2A56DD78A0328D91BA993514184062FA0;
IL2CPP_EXTERN_C String_t* _stringLiteral983CA8BFE38812F91721AAA8FB9C498620A9E427;
IL2CPP_EXTERN_C String_t* _stringLiteral9E94758983980504AF303EF297FD2BF9D9CEA063;
IL2CPP_EXTERN_C String_t* _stringLiteral9FB1D223110E5C4F42A3067318E9DE9D8FAC124D;
IL2CPP_EXTERN_C String_t* _stringLiteral9FB29051F2217270A7B253A39F820310D85A78F0;
IL2CPP_EXTERN_C String_t* _stringLiteralA004F7A71A664C60394CBEBEC2BC71B669D9F986;
IL2CPP_EXTERN_C String_t* _stringLiteralA2DD3D89312EAF419D9A45E0233888DDB3990C8B;
IL2CPP_EXTERN_C String_t* _stringLiteralAB006BB8AACDF6E68299BC1DFFCCC9BCC8AC3EAF;
IL2CPP_EXTERN_C String_t* _stringLiteralB3832017D4D701978B399BF4A12AFCD308862676;
IL2CPP_EXTERN_C String_t* _stringLiteralB7B2A8437C0A1E2363180D3054962C29A385A0EA;
IL2CPP_EXTERN_C String_t* _stringLiteralBBFA773E5A63A5EA58C9B6207E608CA0120E592A;
IL2CPP_EXTERN_C String_t* _stringLiteralC17A8CC3C348CB6C597B45A84606DEDE9EEA3A2D;
IL2CPP_EXTERN_C String_t* _stringLiteralC1F65DDB75ED7D97E701168AF35171410BE8F9E7;
IL2CPP_EXTERN_C String_t* _stringLiteralC2B7DF6201FDD3362399091F0A29550DF3505B6A;
IL2CPP_EXTERN_C String_t* _stringLiteralC692273DEB2772DA307FFE37041FEF77BF4BAA97;
IL2CPP_EXTERN_C String_t* _stringLiteralD0866D1BCB122C793DA5CF5BFEE3205F9C995C6E;
IL2CPP_EXTERN_C String_t* _stringLiteralD24FA45CA77F079CC359C97272276969E6AEAD2C;
IL2CPP_EXTERN_C String_t* _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46;
IL2CPP_EXTERN_C String_t* _stringLiteralD5BD80B24CDCE0CA01097C9054565EE9665DA441;
IL2CPP_EXTERN_C String_t* _stringLiteralEC10B73D4109575DF29DD7FB554A2FCBC4C763BF;
IL2CPP_EXTERN_C String_t* _stringLiteralEF7E6794CA9C6A06B54B66F279237FB8DAAAEEA8;
IL2CPP_EXTERN_C String_t* _stringLiteralF123AACEB875108E1FDCF9AF0BEB2A57841A993F;
IL2CPP_EXTERN_C String_t* _stringLiteralF12C84902108895980702C88DB900CEEA2D2EC01;
IL2CPP_EXTERN_C String_t* _stringLiteralF178867DA2879CAE0F60630A6A2DA174E0C2328E;
IL2CPP_EXTERN_C String_t* _stringLiteralF2821705E8B15F3FF900B39BF3A67C46EAEA4E13;
IL2CPP_EXTERN_C String_t* _stringLiteralF72F9B71E459FD0B112794F29FDB825CECEA4CE1;
IL2CPP_EXTERN_C String_t* _stringLiteralF8B8AF38BDC23B447C0A57C79371E379107064BD;
IL2CPP_EXTERN_C String_t* _stringLiteralF8C7EE4BCADD930C99FAE4312EA553F666605698;
IL2CPP_EXTERN_C String_t* _stringLiteralFB8631CA8BFDB01C1B65F1B35F5D1A40518D434A;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6C7AEBB9F667E85F8ACF67C2383439C94D136B;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m4BBBBC75FFA78FFC723324C1AE3547B729B7B9A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m6431A46044768588D11B4BFFC429BC5D372B9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m7DE37BC592ACBC88BE0B514148CF0693C158DA35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Advertisement_U3CInitializeU3Em__0_mC13E79783AFE3182AEAF696DB5D430DBF88AE74F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Advertisement_U3CInitializeU3Em__1_m0E492C74DF30EF30A9FDDC74C76D1E2D9EE442CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_m6CAE75FB51C5A02521C239A7232735573C51EAE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m1E6217B3D2813D788B7489F3AC377BDF21740AA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisString_t_mE1D1D49B8FA114E77A891F5EB629D9C7F33443C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m57EE1ACB271D15DD0E2DDD6B28805C31799A0976_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mF7220A3D48BA18737AA0C7DAF0828822275A69A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_m4C3EAB3C9E067EBB6D0CE6A84B685B0105163602_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m233AC329D8947CF1508C9A2B8DE8EDCD68B6F4AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m2C2E98147E134A4B7B225E6AC43FF58E27B65160_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m2AB63CDBD2D220F7E1A0FD9B1248CFEF78767A59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m690614F5C0F5AB08744CC307C64E1A0F24BF08B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mDE657578679707F752B4AB0F30BBCDE434A6EA40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m52E8BCBCCDE8B8BEB6FF90ECC41E80C09A46B4C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m935923B91B00967999E33EC4190EE547765C57E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m2E1903A0E8D9F835053ED23B3AF2AB2F8E379C17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m72DB3E3143E97AA22B589D0E8E216AEE54A248F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mBD6D6B7E24C98373B567A88DEBFFD981338268CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m0D3273C04573CF4727CE038D0F933FD98C31E8CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB490F7029D7451FAF06E3020040E604B500BA3B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mFB480723F4F6C60392B80393B87A7A1155D5D5B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m7B57A5AC1B782E34F03B1FA3669A21FFD88BF3CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_mEC63E5E39D1BC0EEAC921182387411F0D161ED68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m0FB7F633D9B24FE5EB771891831D1EA97D411A9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m47462ADFD588CFE2D265C8C4B07098C461BBA71A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m502F374415B712E741EE202C4029BF6352AE1F9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mEF9D6A771BF3339472FF5FBA93F500AAD25210BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m4549AB2D4F837932DB02044CC1F026F427140D3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m49B02EDEB592566F4F3153685ABDEFF1AE1C6F48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCallbackExecutor_tB2DFCCED2168CFD8C1F6FD0C21679DA386B8CA78_mCC2C32F9E49A29594A990104922CABCEE39656BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisPlaceholder_tB58246E9925EEB8DEFBD0EC187EC59F96EF4E244_m9FF5E1326EF984C05953980B29E50869467D33FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonObject_CopyTo_m6A3F7EBFA42AF9391466229211B40F7D404266E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_m3E3C4CA5E2EF47104F1AFF2ABFD0F5E764A9019E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m3CCADA0FD43354737C9190CD451DC5869006578D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m70ABAD248D45E166CEC58AF007095CEC5E79B1DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m5D1180FCE84ACA037CCCF151B9696C4575634758_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mF7FD6C1B4A954CD16093D4B6C0F083A3A0347D0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Placeholder_ModalWindowFunction_m9B0445B8340347DEA0A3FBE2338F08E4C1A0939C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Platform_U3CPlatformU3Em__0_mFA74FD4DBCA3F3C6BB5D5B7968904FC27F3AC336_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Platform_UnityAdsDidError_mE9F1E190C2D9C9B939A5FC6364D012AC63D83915_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Platform_UnityAdsDidFinish_m1206B2333C3317B05228D424B3447448BA75B779_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Platform_UnityAdsDidStart_m0797975F791AF76B3BFEE48F893EDB4435EE1E66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Platform_UnityAdsReady_mF8779E69BBEE5186E1C9DD93FE2710D3D25876EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m7344673834CF15EF9716D06FCA9F890EFBEF5131_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m0899B365B923FB0EA04C3CEA846D77D591466A9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m3308BE0D3E2E51C614586CCD44A94FA0114A74FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m35B9A4EE3C2F24AD505894592906B21408CD941F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mB77F587ACB1B3FDEF62424C1AF03B338665E09E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleJson_ConvertFromUtf32_mBA35D582335801FE576FB616EB7FA674DC315B66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleJson_DeserializeObject_m8FBC827CD76E9F41BFA40E9C4CFEC06E27693068_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreadSafeDictionaryValueFactory_2__ctor_m1BF1B66ECB81E5FE183F901841185E64F5B1E10D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreadSafeDictionaryValueFactory_2__ctor_m23CCE3D002BC204F0A0EE0129E9E1B262ACA9EC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreadSafeDictionaryValueFactory_2__ctor_m2FD7DC8F16BE8C81B410E246EA93344CBD207165_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreadSafeDictionary_2__ctor_m4303DDB56537344D0C545CE93CF76B1ED1BE135E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreadSafeDictionary_2__ctor_m577BAD53CD5F4CA3BC01CA2B333E1FAA90211934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreadSafeDictionary_2__ctor_m8671FC0A1693265CF95C8102E2A52587CA7CC816_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetConstructorByReflectionU3Ec__AnonStorey0_U3CU3Em__0_m661FD3679F8A8FA0FCBB0F5BF032EE3BAA5116D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetGetMethodByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m88B841266719BAE486082A13BC9C4D7623E6EBCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__0_mCB79A445454FC19CAFB685E70C2040E834B42DDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetSetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__0_mFBDFDD154BAB2DCE769E20FA7144C0EE2FAC15CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__0_m569C04F15BF1614F11B2BB7372D03206EFB0A35D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_mB73E3D722E9372CB014E0C134FED4104F0C884DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShowU3Ec__AnonStorey1_U3CU3Em__0_mF83C278730728A621DCCD9FB11C7618E5272E456_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUnityAdsDidErrorU3Ec__AnonStorey1_U3CU3Em__0_m3C67C295F55B14ADBE1ED9097EB3370D371666B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUnityAdsDidFinishU3Ec__AnonStorey4_U3CU3Em__0_mE462E6F32F8E4ED6B4B3769EA3810F1B884AC6C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUnityAdsDidStartU3Ec__AnonStorey2_U3CU3Em__0_m3A463862347F8FA95BEB1E0203AE5B9179ED18D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUnityAdsReadyU3Ec__AnonStorey0_U3CU3Em__0_mA09E0B96E6055721CE9AD609B31AE78BF5E5B903_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t Advertisement_GetPlacementState_m2DC0A5C481A8EF49BB6FD3E0B46958F12A82711D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Advertisement_GetPlacementState_m7369CE87D2243EB51E1AE2011C47BE0AFA63BED7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Advertisement_Initialize_m1E490EE5DA919B229C7916164694C766B079EBCF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Advertisement_Initialize_m73F6527531EAE2AF5D9949AA4B1286C60DBDFDB0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Advertisement_IsReady_m1C7E51380CC455626A39B90067D2923F87C8BD9B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Advertisement_IsReady_m8BB9F1590814065032F590E8B12686648D679396_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Advertisement_LoadEditor_m78A4DF4432EB6408D86E9E575DEC203422864C69_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Advertisement_LoadRuntime_m1F07F2840CB9BC41A93D68EFDF54B06A94878A74_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Advertisement_Load_m0CCB92C442B60C4A4424AD3CE013F85BE92C4173_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Advertisement_SetMetaData_m9E5F80A365BCD419877A5BA460A19AA372CEE197_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Advertisement_Show_m0B1BB292081708D0B39D54156BE04297D694D653_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Advertisement_Show_mACAFA94816FD3EA268ADA22A0ADA19C7324C9329_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Advertisement_Show_mCEDF019F3E187F316B4DCC61D8AC3398D4971CBD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Advertisement_Show_mD7A7F596B7D5120BEDA4D3E6BE747FACB1CBDD5C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Advertisement_U3CInitializeU3Em__0_mC13E79783AFE3182AEAF696DB5D430DBF88AE74F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Advertisement_U3CInitializeU3Em__1_m0E492C74DF30EF30A9FDDC74C76D1E2D9EE442CF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Advertisement__cctor_m76FE12D6A92F277BCE8EDB25A21E14BFFED44E44_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Advertisement_get_debugLevel_mFCA304252112941FAAF6EB3EBE8307341519AF7E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Advertisement_get_debugMode_m395F56765AA2E8BE22500D9EB675B1431ACB6336_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Advertisement_get_isInitialized_mC03067B373FC20D13E06648062797A096BF3D653UnityEngine_Advertisements_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Advertisement_get_isInitialized_mC03067B373FC20D13E06648062797A096BF3D653_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Advertisement_get_isShowing_m9B634136B1230535E9CE3FDC1E53E1F782E8BD4B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Advertisement_get_isSupported_mEF8C394828CBA7F25F78C7685998832AE5EA1C2B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Advertisement_get_version_m130B026F569F68BE99A0D89017044397DEF46C0A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Advertisement_set_debugLevel_m8BAE013866B64C91D2C86794A4C2BAA547E5ED54_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Advertisement_set_debugMode_mAA26AC09BD66C15541930046B113FA972E43C6B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Advertisement_set_isInitialized_m7DFD072CE302CCEBBA86754D1EB2CD6F2ACAC067UnityEngine_Advertisements_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Advertisement_set_isInitialized_m7DFD072CE302CCEBBA86754D1EB2CD6F2ACAC067_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Advertisement_set_isShowing_mE5B671E7E476A92F42DF678E54A570F56E4D3CC2UnityEngine_Advertisements_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Advertisement_set_isShowing_mE5B671E7E476A92F42DF678E54A570F56E4D3CC2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CallbackExecutor_Post_m36135492FCF9F10CC763800AF029CD3CA7FB808F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CallbackExecutor_Update_m1A14F2576D7B2E36A37C859D9992BDCE948A71B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CallbackExecutor__ctor_m8E6498A7AC21E2D6604186B0E10A4AC8BE5E3FB5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Configuration__ctor_m42ABE38058F98F5B29CFF4792026E3F5062924AC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ErrorEventArgs__ctor_m81988E49417A843D749E261997BF0742F62BE567_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FinishEventArgs__ctor_mAB2A8CF579F4A6921762B7B6D38CA6C89E1C951A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonArray_ToString_m531F50F8079BBB716F8D07BB073E68529D256EA2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonArray__ctor_m190332332C3BF195EADD7525794EF5C475234E41_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonObject_Add_m08DED5600C74B2D37B7BDDB7BED501E986338750_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonObject_Add_mBC99CAE805475925CA29DF32865152001EE5E11B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonObject_Clear_m9872C37A3F9A62D219DEBC14BFAA5C2E954461FB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonObject_Contains_mAB6382EE42C764DD64AB52F7BFC9619CACAAE4AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonObject_CopyTo_m6A3F7EBFA42AF9391466229211B40F7D404266E5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonObject_GetEnumerator_m6F17FCBC0A10A2360A581EAD9D31BBF1807D7FCB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonObject_Remove_m3C855C28A5C4B91C525C49FBA471CC7310E49619_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonObject_System_Collections_IEnumerable_GetEnumerator_m69656BF584C4FEB39AB9E76DAE91093351244A86_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonObject_TryGetValue_m23A9A08DA9F8949A2DF98FF48B3B7F875B690232_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonObject__ctor_mEAF7641A152C9EE2A9986C140A2D09CD7A38506D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonObject_get_Count_m7DA809D33EA1B615AB672A68D574BA526BC285D0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonObject_get_Item_m3974CAD65AB3504BCD865AF183459DB3BD16DB0D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonObject_get_Keys_mBAFEDD67FA47ACCA8F257BAC6ABE78C810D30076_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonObject_get_Values_m7F333ACBB5BF264AE7D9A4E4D7E3FF6D99F3C48F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonObject_set_Item_m48F8DCDF4A2E826EA0C41A5D744524A2CFCA3B3E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetaData_Set_mC1E69DFD59EB90D1406957F5A03BC03F08421C78_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetaData__ctor_m606971BF2B62CA61F60A8598CE58DE11E444411F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Placeholder_Load_m629C26B0255A1130B72FCE27634BAC9DD913C47C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Placeholder_ModalWindowFunction_m9B0445B8340347DEA0A3FBE2338F08E4C1A0939C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Placeholder_OnGUI_mBA04187E47C058FDE91585D14E9A96677BB1F23D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Placeholder_TextureFromFile_mEA41A60EBA22D1034360B534076DD2A5B680E917_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Placeholder_add_OnFinish_m914B9D70F9BEC033E220D5A8E5CE3450D9BFFEC1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Placeholder_remove_OnFinish_m17BD387E06DAD9F4B141E0D71D1B8122C3F5A221_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_GetPlacementState_mB317AC02F22AF19A4F6DDC3A6C2D968473E22AD7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_Initialize_mC80B75683A2F0B9A8BC6DE59C5A8FB7CFD017C4A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_Initialize_mEC19E086126378716A20B77523860DECB3BC7373_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_IsReady_m0E678285B1389B3DFA9C3F9B83197C70B39E1644_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_IsReady_mEAFFC10B8FB903BB5489A4D75143130D917E3042_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_SetMetaData_m4366A683C878A51B484A407036487E1BB2FB2873_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_Show_m3C8BB4E4290FC06A0E04AA8DBF413AFAE63E2014_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_Show_mD54D061129AC19C4408B90ECB30E40FCD227D11D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_U3CPlatformU3Em__0_mFA74FD4DBCA3F3C6BB5D5B7968904FC27F3AC336_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_UnityAdsDidError_mE9F1E190C2D9C9B939A5FC6364D012AC63D83915_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_UnityAdsDidFinish_m1206B2333C3317B05228D424B3447448BA75B779_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_UnityAdsDidStart_m0797975F791AF76B3BFEE48F893EDB4435EE1E66_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_UnityAdsReady_mF8779E69BBEE5186E1C9DD93FE2710D3D25876EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform__cctor_m7B4BCCB09526F8024C7F220066F485953AFD08C7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform__ctor_m0C70085D7025B71BBDD57EDCCE173DD0C29CA7CF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform__ctor_m7C7EAAF2110086078A0D153842CBDDDFF80B4564_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform__ctor_mF1303477BC0694896FD4DD958776D5AA4FEBF61F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_add_OnFinish_m8CC33CB8CA0255A10CCB90EEC3973D261FBE719A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_add_OnFinish_mB756F7D35C58B819D5FCD94A429CEF9CBAD4D476_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_add_OnFinish_mD4AEF79157F471154B8899A3FA9F0CD1BAA65528_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_add_OnStart_m7D126030E9F8518C3F9EF3083BF582F364293F43_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_add_OnStart_mB20D63D0938F392CB39C8BDFE0DB805F5DD180CE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_add_OnStart_mE6E9AAA7B75C0E9FD0FD46AB7BE177DE9F6BB2F8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_get_debugMode_m88670DC63BE2369F283FA2F227FEF66C23C4A076_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_get_version_m00A70AD251E3B70619787664E9F00BEA5F142913_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_get_version_m2165C81FEA7E65C238A469F305E024A0AAE9F537_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_remove_OnFinish_m277059C3AEE4321C042111BEF70E8A5D8FF8F224_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_remove_OnFinish_m7023A2E5032AF4E34279FF146165408A94AA926C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_remove_OnFinish_mCB9C4058443EFD8A2496CDCE28CD586D5CCDA81B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_remove_OnStart_m10D3C4174E2328A0B8892B3DDE5B0418BC9FABF8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_remove_OnStart_m409FF70B870FD090AFB803918C2FA5EAC6A1E513_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_remove_OnStart_m9A1BF262764CE91C6C94CB2C339236E24EEF2ECA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_set_debugMode_mAC48C1F112F86BF62CDEB5BBBA8CC6D7F23A7F7A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PocoJsonSerializerStrategy_ContructorDelegateFactory_mF316D9302730F571F303D2BCD1311F44DB739A85_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PocoJsonSerializerStrategy_GetterValueFactory_m279F3C21FA58E7E4DC4B3B7A9C2F88A33724A0A7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PocoJsonSerializerStrategy_SerializeEnum_mA2FECA551A485CE2A519D0902CD778A234CFAA2C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PocoJsonSerializerStrategy_SetterValueFactory_mE20A64DD8AD75403A8B3255947E702170ADCACF5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PocoJsonSerializerStrategy_TrySerializeKnownTypes_m764A3FC438B0A5B64E81221A565181D24787D0DA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m7344673834CF15EF9716D06FCA9F890EFBEF5131_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PocoJsonSerializerStrategy__cctor_m496B14AA83DC3CB9BB434AB7B1FCFA8EEB5419A9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PocoJsonSerializerStrategy__ctor_mFB6AA9EE3E3AC69011D626B42A3157F5C2442A78_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ReadyEventArgs__ctor_m570135928FA95C668418C3695EDBBDB4DF92710D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ReflectionUtils_GetConstructorByReflection_m2848BA515B91FE2DAA5A7B5F471F7E95DFB63CA0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ReflectionUtils_GetConstructorByReflection_mB318F13C50D13137048DF91314B5145262AFC6F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ReflectionUtils_GetConstructorInfo_m135D313513D4526FF6EB4F32C8F6482A26A0D7E9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ReflectionUtils_GetContructor_m06F8CE353AD06FB0E86D3E4E6B682D99A13870AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ReflectionUtils_GetGetMethodByReflection_m77CDE23E398B8CF50A6A7DE04E0AC5BC1B98DBA5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ReflectionUtils_GetGetMethodByReflection_m7C2EEEEF1869D166F8DDC65F5A1EB1AB4554855F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ReflectionUtils_GetGetMethod_m204196EEEA5C64D7B0AC4DC6584B20FC5304F26D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ReflectionUtils_GetGetMethod_m2D0C6E198BA479C371958D16BBCA8B6E946A30F6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ReflectionUtils_GetSetMethodByReflection_m49F4E0185C7BE17BE600E8657CBCC6ECA43B1920_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ReflectionUtils_GetSetMethodByReflection_m4A26B98B5B03598799A361D00F8E2C1C3F1E3B08_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ReflectionUtils_GetSetMethod_m9EDECE257A6214C6A51920E2F0F252AEEC9F75D4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ReflectionUtils_GetSetMethod_mDAFA0DE1F7F1351C101885AF0C30FB487C65CB9C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ReflectionUtils__cctor_m3D9B54A8F9669A1F0FFEEAB20020657783790972_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleJson_ConvertFromUtf32_mBA35D582335801FE576FB616EB7FA674DC315B66_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleJson_DeserializeObject_m8FBC827CD76E9F41BFA40E9C4CFEC06E27693068_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleJson_EatWhitespace_mAB33F80188B8DD4D84B6A9216EC735FD069CC45E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleJson_GetLastIndexOfNumber_mCD5BA50A2DB6077D4CEEBC7E1CF4C523B6AA2704_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleJson_IsNumeric_m1856CCEBA7A537D615193209C291579BC097D901_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleJson_ParseArray_m890B5A50647EC23FA4A8ABEA0AAAE347CB90007D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleJson_ParseNumber_m97DB505FD590AD76E2C7F9FAFFDF14C5E603DF9B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleJson_ParseObject_m39E62DFB96813281C00B4913B6E86C7560F2DF74_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleJson_ParseString_m074CF30BEEC742F4B4B09B13E5EAC1366792B8C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleJson_ParseValue_mC55D18821682DFB1F786FCF4B9DF46F86480A568_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleJson_SerializeArray_mD7C2F80ED44EC64486114EB09B729B8A0ECFC900_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleJson_SerializeNumber_m917350F63AFC1C28361A4F30149124ABDE56C2E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleJson_SerializeObject_m4C430799C8A3D5D1BF1F474736F2AA99F72B1467_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleJson_SerializeObject_mCD079C47DEEFA24E910AE8E81A8C2637F46B9587_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleJson_SerializeString_m35442C27202640FC7396CC39C102ACD8B847B061_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleJson_SerializeValue_m6FC1E7FD91F662DE070E45E95B9747FC1A3632F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleJson_get_CurrentJsonSerializerStrategy_m30014ED032674767BA616FECC1F592BC9C2F0BC2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleJson_get_PocoJsonSerializerStrategy_m33867E4BB096D8C7D63A649DF1F99FC11FD1C58F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StartEventArgs__ctor_mDD562E24375595B4900123356F55D3277665D0B7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetGetMethodByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m88B841266719BAE486082A13BC9C4D7623E6EBCF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetSetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__0_mFBDFDD154BAB2DCE769E20FA7144C0EE2FAC15CD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_mB73E3D722E9372CB014E0C134FED4104F0C884DE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CShowU3Ec__AnonStorey1_U3CU3Em__0_mF83C278730728A621DCCD9FB11C7618E5272E456_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CUnityAdsDidErrorU3Ec__AnonStorey1_U3CU3Em__0_m3C67C295F55B14ADBE1ED9097EB3370D371666B9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CUnityAdsDidFinishU3Ec__AnonStorey4_U3CU3Em__0_mE462E6F32F8E4ED6B4B3769EA3810F1B884AC6C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CUnityAdsDidStartU3Ec__AnonStorey2_U3CU3Em__0_m3A463862347F8FA95BEB1E0203AE5B9179ED18D3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CUnityAdsReadyU3Ec__AnonStorey0_U3CU3Em__0_mA09E0B96E6055721CE9AD609B31AE78BF5E5B903_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnsupportedPlatform_Show_mBCD7482D2C84B00B2BDBD92666D7410DF1CA25F5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnsupportedPlatform_add_OnFinish_m19E2134C17B9FEF8572021BA4595FC41B43D7196_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnsupportedPlatform_remove_OnFinish_m0EAEB2F874C23B98CAF4A2E742CD23A8D41A34E4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t unityAdsDidError_BeginInvoke_mACDCB3B237E82D43100690F4E43D5CB8E0B49740_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t unityAdsDidFinish_BeginInvoke_m6BABD4126D776D07DD3C266A4120F136F1A2FAB6_MetadataUsageId;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct KeyValuePair_2U5BU5D_tEF7B0C36EC296277C5C943CFF843529E0B8B5343;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct ConstructorInfoU5BU5D_t111EE7D53C51A47FE69FC3398DE007F7E100593E;
struct FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE;
struct ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694;
struct PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t993F9791B85A226F5BFA7EC02975DD7BFFAF46C6 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2_KeyCollection<System.String,System.Object>
struct  KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_KeyCollection::dictionary
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970, ___dictionary_0)); }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2_ValueCollection<System.String,System.Object>
struct  ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_ValueCollection::dictionary
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD, ___dictionary_0)); }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct  Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tFFA35B84E46237BAB5E83032C58E415D435F15F4* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t20EDBCFDF792B4160BE580A651A2A6CE83BEE69E * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t6DDEE1B1298603E64C9135930EFC9A27A838DCA6 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2, ___entries_1)); }
	inline EntryU5BU5D_tFFA35B84E46237BAB5E83032C58E415D435F15F4* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tFFA35B84E46237BAB5E83032C58E415D435F15F4** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tFFA35B84E46237BAB5E83032C58E415D435F15F4* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2, ___keys_7)); }
	inline KeyCollection_t20EDBCFDF792B4160BE580A651A2A6CE83BEE69E * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t20EDBCFDF792B4160BE580A651A2A6CE83BEE69E ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t20EDBCFDF792B4160BE580A651A2A6CE83BEE69E * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2, ___values_8)); }
	inline ValueCollection_t6DDEE1B1298603E64C9135930EFC9A27A838DCA6 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t6DDEE1B1298603E64C9135930EFC9A27A838DCA6 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t6DDEE1B1298603E64C9135930EFC9A27A838DCA6 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_SetDelegate>>
struct  Dictionary_2_t82BCBA9454C6D1CD4FFAC1591ED063945EE8000D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t23D33CB451FBA076683729F1E55ADCE5451849BA* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t6D344B2D21765F2012C294FF56473FB935907DCF * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t05775C2A8DB65883668B327330244DB6F25AF177 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t82BCBA9454C6D1CD4FFAC1591ED063945EE8000D, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t82BCBA9454C6D1CD4FFAC1591ED063945EE8000D, ___entries_1)); }
	inline EntryU5BU5D_t23D33CB451FBA076683729F1E55ADCE5451849BA* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t23D33CB451FBA076683729F1E55ADCE5451849BA** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t23D33CB451FBA076683729F1E55ADCE5451849BA* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t82BCBA9454C6D1CD4FFAC1591ED063945EE8000D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t82BCBA9454C6D1CD4FFAC1591ED063945EE8000D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t82BCBA9454C6D1CD4FFAC1591ED063945EE8000D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t82BCBA9454C6D1CD4FFAC1591ED063945EE8000D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t82BCBA9454C6D1CD4FFAC1591ED063945EE8000D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t82BCBA9454C6D1CD4FFAC1591ED063945EE8000D, ___keys_7)); }
	inline KeyCollection_t6D344B2D21765F2012C294FF56473FB935907DCF * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t6D344B2D21765F2012C294FF56473FB935907DCF ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t6D344B2D21765F2012C294FF56473FB935907DCF * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t82BCBA9454C6D1CD4FFAC1591ED063945EE8000D, ___values_8)); }
	inline ValueCollection_t05775C2A8DB65883668B327330244DB6F25AF177 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t05775C2A8DB65883668B327330244DB6F25AF177 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t05775C2A8DB65883668B327330244DB6F25AF177 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t82BCBA9454C6D1CD4FFAC1591ED063945EE8000D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___entries_1)); }
	inline EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___keys_7)); }
	inline KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___values_8)); }
	inline ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * get_values_8() const { return ___values_8; }
	inline ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_GetDelegate>
struct  Dictionary_2_tBB5D728BE58C8B287D432992DC4CDBA9FF9BDAC3  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tD61CF58B2079B3453EE92124A8A6386ED43D834F* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t87DD094103D6B7F53D7799AD4A19DABE91971213 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tF96117544ED286D1DDA56B038DDA3861D9800702 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tBB5D728BE58C8B287D432992DC4CDBA9FF9BDAC3, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tBB5D728BE58C8B287D432992DC4CDBA9FF9BDAC3, ___entries_1)); }
	inline EntryU5BU5D_tD61CF58B2079B3453EE92124A8A6386ED43D834F* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tD61CF58B2079B3453EE92124A8A6386ED43D834F** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tD61CF58B2079B3453EE92124A8A6386ED43D834F* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tBB5D728BE58C8B287D432992DC4CDBA9FF9BDAC3, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tBB5D728BE58C8B287D432992DC4CDBA9FF9BDAC3, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tBB5D728BE58C8B287D432992DC4CDBA9FF9BDAC3, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tBB5D728BE58C8B287D432992DC4CDBA9FF9BDAC3, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tBB5D728BE58C8B287D432992DC4CDBA9FF9BDAC3, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tBB5D728BE58C8B287D432992DC4CDBA9FF9BDAC3, ___keys_7)); }
	inline KeyCollection_t87DD094103D6B7F53D7799AD4A19DABE91971213 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t87DD094103D6B7F53D7799AD4A19DABE91971213 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t87DD094103D6B7F53D7799AD4A19DABE91971213 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tBB5D728BE58C8B287D432992DC4CDBA9FF9BDAC3, ___values_8)); }
	inline ValueCollection_tF96117544ED286D1DDA56B038DDA3861D9800702 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tF96117544ED286D1DDA56B038DDA3861D9800702 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tF96117544ED286D1DDA56B038DDA3861D9800702 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tBB5D728BE58C8B287D432992DC4CDBA9FF9BDAC3, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Action`1<UnityEngine.Advertisements.CallbackExecutor>>
struct  Queue_1_tBE60FA9EC7CEAC6A2101CA6BF8E09035C8DA2F3E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	Action_1U5BU5D_tE64BC991F7DDC3D4C1553540803D5779499D7F46* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_tBE60FA9EC7CEAC6A2101CA6BF8E09035C8DA2F3E, ____array_0)); }
	inline Action_1U5BU5D_tE64BC991F7DDC3D4C1553540803D5779499D7F46* get__array_0() const { return ____array_0; }
	inline Action_1U5BU5D_tE64BC991F7DDC3D4C1553540803D5779499D7F46** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(Action_1U5BU5D_tE64BC991F7DDC3D4C1553540803D5779499D7F46* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_tBE60FA9EC7CEAC6A2101CA6BF8E09035C8DA2F3E, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_tBE60FA9EC7CEAC6A2101CA6BF8E09035C8DA2F3E, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_tBE60FA9EC7CEAC6A2101CA6BF8E09035C8DA2F3E, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_tBE60FA9EC7CEAC6A2101CA6BF8E09035C8DA2F3E, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_tBE60FA9EC7CEAC6A2101CA6BF8E09035C8DA2F3E, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Object>
struct  Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0, ____array_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.EventArgs
struct  EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields, ___Empty_0)); }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.Globalization.CultureInfo
struct  CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___numInfo_10)); }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textInfo_12)); }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___native_calendar_names_20)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___compareInfo_21)); }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___calendar_24)); }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_culture_25)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_cultureData_28)); }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.Advertisements.Advertisement_<Show>c__AnonStorey0
struct  U3CShowU3Ec__AnonStorey0_t3F78313FF5E87445044283B31B3DB8DF4BBCA6B4  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.ShowOptions UnityEngine.Advertisements.Advertisement_<Show>c__AnonStorey0::showOptions
	ShowOptions_t6637C67D4907C169839DA10D810B696A19941904 * ___showOptions_0;

public:
	inline static int32_t get_offset_of_showOptions_0() { return static_cast<int32_t>(offsetof(U3CShowU3Ec__AnonStorey0_t3F78313FF5E87445044283B31B3DB8DF4BBCA6B4, ___showOptions_0)); }
	inline ShowOptions_t6637C67D4907C169839DA10D810B696A19941904 * get_showOptions_0() const { return ___showOptions_0; }
	inline ShowOptions_t6637C67D4907C169839DA10D810B696A19941904 ** get_address_of_showOptions_0() { return &___showOptions_0; }
	inline void set_showOptions_0(ShowOptions_t6637C67D4907C169839DA10D810B696A19941904 * value)
	{
		___showOptions_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___showOptions_0), (void*)value);
	}
};


// UnityEngine.Advertisements.Advertisement_<Show>c__AnonStorey1
struct  U3CShowU3Ec__AnonStorey1_t7C410F6A2B71DAAC4DAEB5851994E08082C63A80  : public RuntimeObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.Advertisement_<Show>c__AnonStorey1::finishHandler
	EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * ___finishHandler_0;
	// UnityEngine.Advertisements.Advertisement_<Show>c__AnonStorey0 UnityEngine.Advertisements.Advertisement_<Show>c__AnonStorey1::<>f__refU240
	U3CShowU3Ec__AnonStorey0_t3F78313FF5E87445044283B31B3DB8DF4BBCA6B4 * ___U3CU3Ef__refU240_1;

public:
	inline static int32_t get_offset_of_finishHandler_0() { return static_cast<int32_t>(offsetof(U3CShowU3Ec__AnonStorey1_t7C410F6A2B71DAAC4DAEB5851994E08082C63A80, ___finishHandler_0)); }
	inline EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * get_finishHandler_0() const { return ___finishHandler_0; }
	inline EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 ** get_address_of_finishHandler_0() { return &___finishHandler_0; }
	inline void set_finishHandler_0(EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * value)
	{
		___finishHandler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___finishHandler_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU240_1() { return static_cast<int32_t>(offsetof(U3CShowU3Ec__AnonStorey1_t7C410F6A2B71DAAC4DAEB5851994E08082C63A80, ___U3CU3Ef__refU240_1)); }
	inline U3CShowU3Ec__AnonStorey0_t3F78313FF5E87445044283B31B3DB8DF4BBCA6B4 * get_U3CU3Ef__refU240_1() const { return ___U3CU3Ef__refU240_1; }
	inline U3CShowU3Ec__AnonStorey0_t3F78313FF5E87445044283B31B3DB8DF4BBCA6B4 ** get_address_of_U3CU3Ef__refU240_1() { return &___U3CU3Ef__refU240_1; }
	inline void set_U3CU3Ef__refU240_1(U3CShowU3Ec__AnonStorey0_t3F78313FF5E87445044283B31B3DB8DF4BBCA6B4 * value)
	{
		___U3CU3Ef__refU240_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__refU240_1), (void*)value);
	}
};


// UnityEngine.Advertisements.Editor.Configuration
struct  Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Advertisements.Editor.Configuration::<enabled>k__BackingField
	bool ___U3CenabledU3Ek__BackingField_0;
	// System.String UnityEngine.Advertisements.Editor.Configuration::<defaultPlacement>k__BackingField
	String_t* ___U3CdefaultPlacementU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> UnityEngine.Advertisements.Editor.Configuration::<placements>k__BackingField
	Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2 * ___U3CplacementsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CenabledU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B, ___U3CenabledU3Ek__BackingField_0)); }
	inline bool get_U3CenabledU3Ek__BackingField_0() const { return ___U3CenabledU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CenabledU3Ek__BackingField_0() { return &___U3CenabledU3Ek__BackingField_0; }
	inline void set_U3CenabledU3Ek__BackingField_0(bool value)
	{
		___U3CenabledU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CdefaultPlacementU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B, ___U3CdefaultPlacementU3Ek__BackingField_1)); }
	inline String_t* get_U3CdefaultPlacementU3Ek__BackingField_1() const { return ___U3CdefaultPlacementU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CdefaultPlacementU3Ek__BackingField_1() { return &___U3CdefaultPlacementU3Ek__BackingField_1; }
	inline void set_U3CdefaultPlacementU3Ek__BackingField_1(String_t* value)
	{
		___U3CdefaultPlacementU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdefaultPlacementU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CplacementsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B, ___U3CplacementsU3Ek__BackingField_2)); }
	inline Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2 * get_U3CplacementsU3Ek__BackingField_2() const { return ___U3CplacementsU3Ek__BackingField_2; }
	inline Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2 ** get_address_of_U3CplacementsU3Ek__BackingField_2() { return &___U3CplacementsU3Ek__BackingField_2; }
	inline void set_U3CplacementsU3Ek__BackingField_2(Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2 * value)
	{
		___U3CplacementsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CplacementsU3Ek__BackingField_2), (void*)value);
	}
};


// UnityEngine.Advertisements.Editor.Platform
struct  Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Advertisements.Editor.Platform::m_DebugMode
	bool ___m_DebugMode_1;
	// UnityEngine.Advertisements.Editor.Configuration UnityEngine.Advertisements.Editor.Platform::m_Configuration
	Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B * ___m_Configuration_2;
	// UnityEngine.Advertisements.Editor.Placeholder UnityEngine.Advertisements.Editor.Platform::m_Placeholder
	Placeholder_tB58246E9925EEB8DEFBD0EC187EC59F96EF4E244 * ___m_Placeholder_3;
	// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs> UnityEngine.Advertisements.Editor.Platform::OnStart
	EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * ___OnStart_4;
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.Editor.Platform::OnFinish
	EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * ___OnFinish_5;

public:
	inline static int32_t get_offset_of_m_DebugMode_1() { return static_cast<int32_t>(offsetof(Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740, ___m_DebugMode_1)); }
	inline bool get_m_DebugMode_1() const { return ___m_DebugMode_1; }
	inline bool* get_address_of_m_DebugMode_1() { return &___m_DebugMode_1; }
	inline void set_m_DebugMode_1(bool value)
	{
		___m_DebugMode_1 = value;
	}

	inline static int32_t get_offset_of_m_Configuration_2() { return static_cast<int32_t>(offsetof(Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740, ___m_Configuration_2)); }
	inline Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B * get_m_Configuration_2() const { return ___m_Configuration_2; }
	inline Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B ** get_address_of_m_Configuration_2() { return &___m_Configuration_2; }
	inline void set_m_Configuration_2(Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B * value)
	{
		___m_Configuration_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Configuration_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Placeholder_3() { return static_cast<int32_t>(offsetof(Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740, ___m_Placeholder_3)); }
	inline Placeholder_tB58246E9925EEB8DEFBD0EC187EC59F96EF4E244 * get_m_Placeholder_3() const { return ___m_Placeholder_3; }
	inline Placeholder_tB58246E9925EEB8DEFBD0EC187EC59F96EF4E244 ** get_address_of_m_Placeholder_3() { return &___m_Placeholder_3; }
	inline void set_m_Placeholder_3(Placeholder_tB58246E9925EEB8DEFBD0EC187EC59F96EF4E244 * value)
	{
		___m_Placeholder_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Placeholder_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnStart_4() { return static_cast<int32_t>(offsetof(Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740, ___OnStart_4)); }
	inline EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * get_OnStart_4() const { return ___OnStart_4; }
	inline EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 ** get_address_of_OnStart_4() { return &___OnStart_4; }
	inline void set_OnStart_4(EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * value)
	{
		___OnStart_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStart_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnFinish_5() { return static_cast<int32_t>(offsetof(Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740, ___OnFinish_5)); }
	inline EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * get_OnFinish_5() const { return ___OnFinish_5; }
	inline EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 ** get_address_of_OnFinish_5() { return &___OnFinish_5; }
	inline void set_OnFinish_5(EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * value)
	{
		___OnFinish_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFinish_5), (void*)value);
	}
};

struct Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740_StaticFields
{
public:
	// System.String UnityEngine.Advertisements.Editor.Platform::s_BaseUrl
	String_t* ___s_BaseUrl_0;

public:
	inline static int32_t get_offset_of_s_BaseUrl_0() { return static_cast<int32_t>(offsetof(Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740_StaticFields, ___s_BaseUrl_0)); }
	inline String_t* get_s_BaseUrl_0() const { return ___s_BaseUrl_0; }
	inline String_t** get_address_of_s_BaseUrl_0() { return &___s_BaseUrl_0; }
	inline void set_s_BaseUrl_0(String_t* value)
	{
		___s_BaseUrl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_BaseUrl_0), (void*)value);
	}
};


// UnityEngine.Advertisements.Editor.Platform_<Initialize>c__AnonStorey0
struct  U3CInitializeU3Ec__AnonStorey0_t01695F5A9E779590A7DB912A981E37FC10911AF8  : public RuntimeObject
{
public:
	// System.Net.WebRequest UnityEngine.Advertisements.Editor.Platform_<Initialize>c__AnonStorey0::request
	WebRequest_t5668DA48802E9FE2F1DE5F5A770B218608B918C8 * ___request_0;
	// System.String UnityEngine.Advertisements.Editor.Platform_<Initialize>c__AnonStorey0::gameId
	String_t* ___gameId_1;
	// UnityEngine.Advertisements.Editor.Platform UnityEngine.Advertisements.Editor.Platform_<Initialize>c__AnonStorey0::U24this
	Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740 * ___U24this_2;

public:
	inline static int32_t get_offset_of_request_0() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ec__AnonStorey0_t01695F5A9E779590A7DB912A981E37FC10911AF8, ___request_0)); }
	inline WebRequest_t5668DA48802E9FE2F1DE5F5A770B218608B918C8 * get_request_0() const { return ___request_0; }
	inline WebRequest_t5668DA48802E9FE2F1DE5F5A770B218608B918C8 ** get_address_of_request_0() { return &___request_0; }
	inline void set_request_0(WebRequest_t5668DA48802E9FE2F1DE5F5A770B218608B918C8 * value)
	{
		___request_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___request_0), (void*)value);
	}

	inline static int32_t get_offset_of_gameId_1() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ec__AnonStorey0_t01695F5A9E779590A7DB912A981E37FC10911AF8, ___gameId_1)); }
	inline String_t* get_gameId_1() const { return ___gameId_1; }
	inline String_t** get_address_of_gameId_1() { return &___gameId_1; }
	inline void set_gameId_1(String_t* value)
	{
		___gameId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameId_1), (void*)value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ec__AnonStorey0_t01695F5A9E779590A7DB912A981E37FC10911AF8, ___U24this_2)); }
	inline Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740 * get_U24this_2() const { return ___U24this_2; }
	inline Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24this_2), (void*)value);
	}
};


// UnityEngine.Advertisements.MetaData
struct  MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Advertisements.MetaData::m_MetaData
	RuntimeObject* ___m_MetaData_0;
	// System.String UnityEngine.Advertisements.MetaData::<category>k__BackingField
	String_t* ___U3CcategoryU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_m_MetaData_0() { return static_cast<int32_t>(offsetof(MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03, ___m_MetaData_0)); }
	inline RuntimeObject* get_m_MetaData_0() const { return ___m_MetaData_0; }
	inline RuntimeObject** get_address_of_m_MetaData_0() { return &___m_MetaData_0; }
	inline void set_m_MetaData_0(RuntimeObject* value)
	{
		___m_MetaData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MetaData_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcategoryU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03, ___U3CcategoryU3Ek__BackingField_1)); }
	inline String_t* get_U3CcategoryU3Ek__BackingField_1() const { return ___U3CcategoryU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CcategoryU3Ek__BackingField_1() { return &___U3CcategoryU3Ek__BackingField_1; }
	inline void set_U3CcategoryU3Ek__BackingField_1(String_t* value)
	{
		___U3CcategoryU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcategoryU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.Advertisements.ShowOptions
struct  ShowOptions_t6637C67D4907C169839DA10D810B696A19941904  : public RuntimeObject
{
public:
	// System.Action`1<UnityEngine.Advertisements.ShowResult> UnityEngine.Advertisements.ShowOptions::<resultCallback>k__BackingField
	Action_1_tCF5AFC4513076B0E4A471BEF3A11BFBBDF57F857 * ___U3CresultCallbackU3Ek__BackingField_0;
	// System.String UnityEngine.Advertisements.ShowOptions::<gamerSid>k__BackingField
	String_t* ___U3CgamerSidU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CresultCallbackU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ShowOptions_t6637C67D4907C169839DA10D810B696A19941904, ___U3CresultCallbackU3Ek__BackingField_0)); }
	inline Action_1_tCF5AFC4513076B0E4A471BEF3A11BFBBDF57F857 * get_U3CresultCallbackU3Ek__BackingField_0() const { return ___U3CresultCallbackU3Ek__BackingField_0; }
	inline Action_1_tCF5AFC4513076B0E4A471BEF3A11BFBBDF57F857 ** get_address_of_U3CresultCallbackU3Ek__BackingField_0() { return &___U3CresultCallbackU3Ek__BackingField_0; }
	inline void set_U3CresultCallbackU3Ek__BackingField_0(Action_1_tCF5AFC4513076B0E4A471BEF3A11BFBBDF57F857 * value)
	{
		___U3CresultCallbackU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CresultCallbackU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CgamerSidU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ShowOptions_t6637C67D4907C169839DA10D810B696A19941904, ___U3CgamerSidU3Ek__BackingField_1)); }
	inline String_t* get_U3CgamerSidU3Ek__BackingField_1() const { return ___U3CgamerSidU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CgamerSidU3Ek__BackingField_1() { return &___U3CgamerSidU3Ek__BackingField_1; }
	inline void set_U3CgamerSidU3Ek__BackingField_1(String_t* value)
	{
		___U3CgamerSidU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgamerSidU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.Advertisements.SimpleJson.JsonObject
struct  JsonObject_t5430387D9A9215A629850E012C366DBE5AD5A2B5  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Advertisements.SimpleJson.JsonObject::_members
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ____members_0;

public:
	inline static int32_t get_offset_of__members_0() { return static_cast<int32_t>(offsetof(JsonObject_t5430387D9A9215A629850E012C366DBE5AD5A2B5, ____members_0)); }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * get__members_0() const { return ____members_0; }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA ** get_address_of__members_0() { return &____members_0; }
	inline void set__members_0(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * value)
	{
		____members_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____members_0), (void*)value);
	}
};


// UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy
struct  PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_ConstructorDelegate> UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::ConstructorCache
	RuntimeObject* ___ConstructorCache_0;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_GetDelegate>> UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::GetCache
	RuntimeObject* ___GetCache_1;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_SetDelegate>>> UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::SetCache
	RuntimeObject* ___SetCache_2;

public:
	inline static int32_t get_offset_of_ConstructorCache_0() { return static_cast<int32_t>(offsetof(PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E, ___ConstructorCache_0)); }
	inline RuntimeObject* get_ConstructorCache_0() const { return ___ConstructorCache_0; }
	inline RuntimeObject** get_address_of_ConstructorCache_0() { return &___ConstructorCache_0; }
	inline void set_ConstructorCache_0(RuntimeObject* value)
	{
		___ConstructorCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConstructorCache_0), (void*)value);
	}

	inline static int32_t get_offset_of_GetCache_1() { return static_cast<int32_t>(offsetof(PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E, ___GetCache_1)); }
	inline RuntimeObject* get_GetCache_1() const { return ___GetCache_1; }
	inline RuntimeObject** get_address_of_GetCache_1() { return &___GetCache_1; }
	inline void set_GetCache_1(RuntimeObject* value)
	{
		___GetCache_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetCache_1), (void*)value);
	}

	inline static int32_t get_offset_of_SetCache_2() { return static_cast<int32_t>(offsetof(PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E, ___SetCache_2)); }
	inline RuntimeObject* get_SetCache_2() const { return ___SetCache_2; }
	inline RuntimeObject** get_address_of_SetCache_2() { return &___SetCache_2; }
	inline void set_SetCache_2(RuntimeObject* value)
	{
		___SetCache_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SetCache_2), (void*)value);
	}
};

struct PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E_StaticFields
{
public:
	// System.Type[] UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_3;
	// System.Type[] UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::ArrayConstructorParameterTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___ArrayConstructorParameterTypes_4;
	// System.String[] UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::Iso8601Format
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___Iso8601Format_5;

public:
	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_3), (void*)value);
	}

	inline static int32_t get_offset_of_ArrayConstructorParameterTypes_4() { return static_cast<int32_t>(offsetof(PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E_StaticFields, ___ArrayConstructorParameterTypes_4)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_ArrayConstructorParameterTypes_4() const { return ___ArrayConstructorParameterTypes_4; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_ArrayConstructorParameterTypes_4() { return &___ArrayConstructorParameterTypes_4; }
	inline void set_ArrayConstructorParameterTypes_4(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___ArrayConstructorParameterTypes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ArrayConstructorParameterTypes_4), (void*)value);
	}

	inline static int32_t get_offset_of_Iso8601Format_5() { return static_cast<int32_t>(offsetof(PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E_StaticFields, ___Iso8601Format_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_Iso8601Format_5() const { return ___Iso8601Format_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_Iso8601Format_5() { return &___Iso8601Format_5; }
	inline void set_Iso8601Format_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___Iso8601Format_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Iso8601Format_5), (void*)value);
	}
};


// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils
struct  ReflectionUtils_t716A5426EE76AD7B91D2D6989AB62AA4BB23A534  : public RuntimeObject
{
public:

public:
};

struct ReflectionUtils_t716A5426EE76AD7B91D2D6989AB62AA4BB23A534_StaticFields
{
public:
	// System.Object[] UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::EmptyObjects
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___EmptyObjects_0;

public:
	inline static int32_t get_offset_of_EmptyObjects_0() { return static_cast<int32_t>(offsetof(ReflectionUtils_t716A5426EE76AD7B91D2D6989AB62AA4BB23A534_StaticFields, ___EmptyObjects_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_EmptyObjects_0() const { return ___EmptyObjects_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_EmptyObjects_0() { return &___EmptyObjects_0; }
	inline void set_EmptyObjects_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___EmptyObjects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyObjects_0), (void*)value);
	}
};


// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_<GetConstructorByReflection>c__AnonStorey0
struct  U3CGetConstructorByReflectionU3Ec__AnonStorey0_t4266D02561276A50905B1F44DEDE646F4845D634  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_<GetConstructorByReflection>c__AnonStorey0::constructorInfo
	ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * ___constructorInfo_0;

public:
	inline static int32_t get_offset_of_constructorInfo_0() { return static_cast<int32_t>(offsetof(U3CGetConstructorByReflectionU3Ec__AnonStorey0_t4266D02561276A50905B1F44DEDE646F4845D634, ___constructorInfo_0)); }
	inline ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * get_constructorInfo_0() const { return ___constructorInfo_0; }
	inline ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF ** get_address_of_constructorInfo_0() { return &___constructorInfo_0; }
	inline void set_constructorInfo_0(ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * value)
	{
		___constructorInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___constructorInfo_0), (void*)value);
	}
};


// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_<GetGetMethodByReflection>c__AnonStorey1
struct  U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t5304BC457840A263778B61647A6214450139CE2F  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_<GetGetMethodByReflection>c__AnonStorey1::methodInfo
	MethodInfo_t * ___methodInfo_0;

public:
	inline static int32_t get_offset_of_methodInfo_0() { return static_cast<int32_t>(offsetof(U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t5304BC457840A263778B61647A6214450139CE2F, ___methodInfo_0)); }
	inline MethodInfo_t * get_methodInfo_0() const { return ___methodInfo_0; }
	inline MethodInfo_t ** get_address_of_methodInfo_0() { return &___methodInfo_0; }
	inline void set_methodInfo_0(MethodInfo_t * value)
	{
		___methodInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___methodInfo_0), (void*)value);
	}
};


// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_<GetGetMethodByReflection>c__AnonStorey2
struct  U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t5DD58BDB4BDF3531B0981E89EF60C3ED0C510D14  : public RuntimeObject
{
public:
	// System.Reflection.FieldInfo UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_<GetGetMethodByReflection>c__AnonStorey2::fieldInfo
	FieldInfo_t * ___fieldInfo_0;

public:
	inline static int32_t get_offset_of_fieldInfo_0() { return static_cast<int32_t>(offsetof(U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t5DD58BDB4BDF3531B0981E89EF60C3ED0C510D14, ___fieldInfo_0)); }
	inline FieldInfo_t * get_fieldInfo_0() const { return ___fieldInfo_0; }
	inline FieldInfo_t ** get_address_of_fieldInfo_0() { return &___fieldInfo_0; }
	inline void set_fieldInfo_0(FieldInfo_t * value)
	{
		___fieldInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fieldInfo_0), (void*)value);
	}
};


// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_<GetSetMethodByReflection>c__AnonStorey3
struct  U3CGetSetMethodByReflectionU3Ec__AnonStorey3_tFBA12729E943700B178CA5477723857345AB686B  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_<GetSetMethodByReflection>c__AnonStorey3::methodInfo
	MethodInfo_t * ___methodInfo_0;

public:
	inline static int32_t get_offset_of_methodInfo_0() { return static_cast<int32_t>(offsetof(U3CGetSetMethodByReflectionU3Ec__AnonStorey3_tFBA12729E943700B178CA5477723857345AB686B, ___methodInfo_0)); }
	inline MethodInfo_t * get_methodInfo_0() const { return ___methodInfo_0; }
	inline MethodInfo_t ** get_address_of_methodInfo_0() { return &___methodInfo_0; }
	inline void set_methodInfo_0(MethodInfo_t * value)
	{
		___methodInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___methodInfo_0), (void*)value);
	}
};


// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_<GetSetMethodByReflection>c__AnonStorey4
struct  U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t43269ED7005D484DB0429A87155BB781825B5E47  : public RuntimeObject
{
public:
	// System.Reflection.FieldInfo UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_<GetSetMethodByReflection>c__AnonStorey4::fieldInfo
	FieldInfo_t * ___fieldInfo_0;

public:
	inline static int32_t get_offset_of_fieldInfo_0() { return static_cast<int32_t>(offsetof(U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t43269ED7005D484DB0429A87155BB781825B5E47, ___fieldInfo_0)); }
	inline FieldInfo_t * get_fieldInfo_0() const { return ___fieldInfo_0; }
	inline FieldInfo_t ** get_address_of_fieldInfo_0() { return &___fieldInfo_0; }
	inline void set_fieldInfo_0(FieldInfo_t * value)
	{
		___fieldInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fieldInfo_0), (void*)value);
	}
};


// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_SetDelegate>>>
struct  ThreadSafeDictionary_2_tC79ADF4BCD32D26FEFC08FAB60B79ED5FF57EF37  : public RuntimeObject
{
public:
	// System.Object UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_ThreadSafeDictionary`2::_lock
	RuntimeObject * ____lock_0;
	// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_ThreadSafeDictionaryValueFactory`2<TKey,TValue> UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_ThreadSafeDictionary`2::_valueFactory
	ThreadSafeDictionaryValueFactory_2_t00EBEAFF4AF9A2C099AB2D1FEE2582299607C9B2 * ____valueFactory_1;
	// System.Collections.Generic.Dictionary`2<TKey,TValue> UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_ThreadSafeDictionary`2::_dictionary
	Dictionary_2_t647A547AB3A1B833E8822D637B8AFE498014605A * ____dictionary_2;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(ThreadSafeDictionary_2_tC79ADF4BCD32D26FEFC08FAB60B79ED5FF57EF37, ____lock_0)); }
	inline RuntimeObject * get__lock_0() const { return ____lock_0; }
	inline RuntimeObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(RuntimeObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lock_0), (void*)value);
	}

	inline static int32_t get_offset_of__valueFactory_1() { return static_cast<int32_t>(offsetof(ThreadSafeDictionary_2_tC79ADF4BCD32D26FEFC08FAB60B79ED5FF57EF37, ____valueFactory_1)); }
	inline ThreadSafeDictionaryValueFactory_2_t00EBEAFF4AF9A2C099AB2D1FEE2582299607C9B2 * get__valueFactory_1() const { return ____valueFactory_1; }
	inline ThreadSafeDictionaryValueFactory_2_t00EBEAFF4AF9A2C099AB2D1FEE2582299607C9B2 ** get_address_of__valueFactory_1() { return &____valueFactory_1; }
	inline void set__valueFactory_1(ThreadSafeDictionaryValueFactory_2_t00EBEAFF4AF9A2C099AB2D1FEE2582299607C9B2 * value)
	{
		____valueFactory_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____valueFactory_1), (void*)value);
	}

	inline static int32_t get_offset_of__dictionary_2() { return static_cast<int32_t>(offsetof(ThreadSafeDictionary_2_tC79ADF4BCD32D26FEFC08FAB60B79ED5FF57EF37, ____dictionary_2)); }
	inline Dictionary_2_t647A547AB3A1B833E8822D637B8AFE498014605A * get__dictionary_2() const { return ____dictionary_2; }
	inline Dictionary_2_t647A547AB3A1B833E8822D637B8AFE498014605A ** get_address_of__dictionary_2() { return &____dictionary_2; }
	inline void set__dictionary_2(Dictionary_2_t647A547AB3A1B833E8822D637B8AFE498014605A * value)
	{
		____dictionary_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dictionary_2), (void*)value);
	}
};


// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_GetDelegate>>
struct  ThreadSafeDictionary_2_t9A0BA6506726B243C842230BC1159D24D661386E  : public RuntimeObject
{
public:
	// System.Object UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_ThreadSafeDictionary`2::_lock
	RuntimeObject * ____lock_0;
	// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_ThreadSafeDictionaryValueFactory`2<TKey,TValue> UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_ThreadSafeDictionary`2::_valueFactory
	ThreadSafeDictionaryValueFactory_2_t64ADFF2082641786DBFD5FFA3B40EBC3F9576E34 * ____valueFactory_1;
	// System.Collections.Generic.Dictionary`2<TKey,TValue> UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_ThreadSafeDictionary`2::_dictionary
	Dictionary_2_t9F3C66A9312E12F622EB673217B6338D090AB52F * ____dictionary_2;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(ThreadSafeDictionary_2_t9A0BA6506726B243C842230BC1159D24D661386E, ____lock_0)); }
	inline RuntimeObject * get__lock_0() const { return ____lock_0; }
	inline RuntimeObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(RuntimeObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lock_0), (void*)value);
	}

	inline static int32_t get_offset_of__valueFactory_1() { return static_cast<int32_t>(offsetof(ThreadSafeDictionary_2_t9A0BA6506726B243C842230BC1159D24D661386E, ____valueFactory_1)); }
	inline ThreadSafeDictionaryValueFactory_2_t64ADFF2082641786DBFD5FFA3B40EBC3F9576E34 * get__valueFactory_1() const { return ____valueFactory_1; }
	inline ThreadSafeDictionaryValueFactory_2_t64ADFF2082641786DBFD5FFA3B40EBC3F9576E34 ** get_address_of__valueFactory_1() { return &____valueFactory_1; }
	inline void set__valueFactory_1(ThreadSafeDictionaryValueFactory_2_t64ADFF2082641786DBFD5FFA3B40EBC3F9576E34 * value)
	{
		____valueFactory_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____valueFactory_1), (void*)value);
	}

	inline static int32_t get_offset_of__dictionary_2() { return static_cast<int32_t>(offsetof(ThreadSafeDictionary_2_t9A0BA6506726B243C842230BC1159D24D661386E, ____dictionary_2)); }
	inline Dictionary_2_t9F3C66A9312E12F622EB673217B6338D090AB52F * get__dictionary_2() const { return ____dictionary_2; }
	inline Dictionary_2_t9F3C66A9312E12F622EB673217B6338D090AB52F ** get_address_of__dictionary_2() { return &____dictionary_2; }
	inline void set__dictionary_2(Dictionary_2_t9F3C66A9312E12F622EB673217B6338D090AB52F * value)
	{
		____dictionary_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dictionary_2), (void*)value);
	}
};


// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_ThreadSafeDictionary`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_ConstructorDelegate>
struct  ThreadSafeDictionary_2_t1F1CC2D67B7F84600B060F52825BBEACEE0CFBE0  : public RuntimeObject
{
public:
	// System.Object UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_ThreadSafeDictionary`2::_lock
	RuntimeObject * ____lock_0;
	// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_ThreadSafeDictionaryValueFactory`2<TKey,TValue> UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_ThreadSafeDictionary`2::_valueFactory
	ThreadSafeDictionaryValueFactory_2_tAE7D4B6776CD9AEF60B6EC3F80B1E2FEBD1D0F0C * ____valueFactory_1;
	// System.Collections.Generic.Dictionary`2<TKey,TValue> UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_ThreadSafeDictionary`2::_dictionary
	Dictionary_2_tFFBC0964414A02C12E7789C962FD19C2C8C11696 * ____dictionary_2;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(ThreadSafeDictionary_2_t1F1CC2D67B7F84600B060F52825BBEACEE0CFBE0, ____lock_0)); }
	inline RuntimeObject * get__lock_0() const { return ____lock_0; }
	inline RuntimeObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(RuntimeObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lock_0), (void*)value);
	}

	inline static int32_t get_offset_of__valueFactory_1() { return static_cast<int32_t>(offsetof(ThreadSafeDictionary_2_t1F1CC2D67B7F84600B060F52825BBEACEE0CFBE0, ____valueFactory_1)); }
	inline ThreadSafeDictionaryValueFactory_2_tAE7D4B6776CD9AEF60B6EC3F80B1E2FEBD1D0F0C * get__valueFactory_1() const { return ____valueFactory_1; }
	inline ThreadSafeDictionaryValueFactory_2_tAE7D4B6776CD9AEF60B6EC3F80B1E2FEBD1D0F0C ** get_address_of__valueFactory_1() { return &____valueFactory_1; }
	inline void set__valueFactory_1(ThreadSafeDictionaryValueFactory_2_tAE7D4B6776CD9AEF60B6EC3F80B1E2FEBD1D0F0C * value)
	{
		____valueFactory_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____valueFactory_1), (void*)value);
	}

	inline static int32_t get_offset_of__dictionary_2() { return static_cast<int32_t>(offsetof(ThreadSafeDictionary_2_t1F1CC2D67B7F84600B060F52825BBEACEE0CFBE0, ____dictionary_2)); }
	inline Dictionary_2_tFFBC0964414A02C12E7789C962FD19C2C8C11696 * get__dictionary_2() const { return ____dictionary_2; }
	inline Dictionary_2_tFFBC0964414A02C12E7789C962FD19C2C8C11696 ** get_address_of__dictionary_2() { return &____dictionary_2; }
	inline void set__dictionary_2(Dictionary_2_tFFBC0964414A02C12E7789C962FD19C2C8C11696 * value)
	{
		____dictionary_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dictionary_2), (void*)value);
	}
};


// UnityEngine.Advertisements.SimpleJson.SimpleJson
struct  SimpleJson_tD74F35DC9B5A5D3F70146A8C72026BD47A7DFE7D  : public RuntimeObject
{
public:

public:
};

struct SimpleJson_tD74F35DC9B5A5D3F70146A8C72026BD47A7DFE7D_StaticFields
{
public:
	// UnityEngine.Advertisements.SimpleJson.IJsonSerializerStrategy UnityEngine.Advertisements.SimpleJson.SimpleJson::_currentJsonSerializerStrategy
	RuntimeObject* ____currentJsonSerializerStrategy_0;
	// UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy UnityEngine.Advertisements.SimpleJson.SimpleJson::_pocoJsonSerializerStrategy
	PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E * ____pocoJsonSerializerStrategy_1;

public:
	inline static int32_t get_offset_of__currentJsonSerializerStrategy_0() { return static_cast<int32_t>(offsetof(SimpleJson_tD74F35DC9B5A5D3F70146A8C72026BD47A7DFE7D_StaticFields, ____currentJsonSerializerStrategy_0)); }
	inline RuntimeObject* get__currentJsonSerializerStrategy_0() const { return ____currentJsonSerializerStrategy_0; }
	inline RuntimeObject** get_address_of__currentJsonSerializerStrategy_0() { return &____currentJsonSerializerStrategy_0; }
	inline void set__currentJsonSerializerStrategy_0(RuntimeObject* value)
	{
		____currentJsonSerializerStrategy_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentJsonSerializerStrategy_0), (void*)value);
	}

	inline static int32_t get_offset_of__pocoJsonSerializerStrategy_1() { return static_cast<int32_t>(offsetof(SimpleJson_tD74F35DC9B5A5D3F70146A8C72026BD47A7DFE7D_StaticFields, ____pocoJsonSerializerStrategy_1)); }
	inline PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E * get__pocoJsonSerializerStrategy_1() const { return ____pocoJsonSerializerStrategy_1; }
	inline PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E ** get_address_of__pocoJsonSerializerStrategy_1() { return &____pocoJsonSerializerStrategy_1; }
	inline void set__pocoJsonSerializerStrategy_1(PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E * value)
	{
		____pocoJsonSerializerStrategy_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pocoJsonSerializerStrategy_1), (void*)value);
	}
};


// UnityEngine.Advertisements.UnsupportedPlatform
struct  UnsupportedPlatform_t5FA6C225FDA5FF02CA0C0297631D99C8C4C2E5C3  : public RuntimeObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.UnsupportedPlatform::OnFinish
	EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * ___OnFinish_0;

public:
	inline static int32_t get_offset_of_OnFinish_0() { return static_cast<int32_t>(offsetof(UnsupportedPlatform_t5FA6C225FDA5FF02CA0C0297631D99C8C4C2E5C3, ___OnFinish_0)); }
	inline EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * get_OnFinish_0() const { return ___OnFinish_0; }
	inline EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 ** get_address_of_OnFinish_0() { return &___OnFinish_0; }
	inline void set_OnFinish_0(EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * value)
	{
		___OnFinish_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFinish_0), (void*)value);
	}
};


// UnityEngine.Advertisements.iOS.Platform
struct  Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D  : public RuntimeObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs> UnityEngine.Advertisements.iOS.Platform::OnReady
	EventHandler_1_tB57D8AF0A9FA3BFE6ABEC77DE046E4A20526A09A * ___OnReady_2;
	// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs> UnityEngine.Advertisements.iOS.Platform::OnStart
	EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * ___OnStart_3;
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.iOS.Platform::OnFinish
	EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * ___OnFinish_4;
	// System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs> UnityEngine.Advertisements.iOS.Platform::OnError
	EventHandler_1_t674DACB444A256903A17FB5F7644CEB641C01927 * ___OnError_5;

public:
	inline static int32_t get_offset_of_OnReady_2() { return static_cast<int32_t>(offsetof(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D, ___OnReady_2)); }
	inline EventHandler_1_tB57D8AF0A9FA3BFE6ABEC77DE046E4A20526A09A * get_OnReady_2() const { return ___OnReady_2; }
	inline EventHandler_1_tB57D8AF0A9FA3BFE6ABEC77DE046E4A20526A09A ** get_address_of_OnReady_2() { return &___OnReady_2; }
	inline void set_OnReady_2(EventHandler_1_tB57D8AF0A9FA3BFE6ABEC77DE046E4A20526A09A * value)
	{
		___OnReady_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnReady_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnStart_3() { return static_cast<int32_t>(offsetof(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D, ___OnStart_3)); }
	inline EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * get_OnStart_3() const { return ___OnStart_3; }
	inline EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 ** get_address_of_OnStart_3() { return &___OnStart_3; }
	inline void set_OnStart_3(EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * value)
	{
		___OnStart_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStart_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnFinish_4() { return static_cast<int32_t>(offsetof(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D, ___OnFinish_4)); }
	inline EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * get_OnFinish_4() const { return ___OnFinish_4; }
	inline EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 ** get_address_of_OnFinish_4() { return &___OnFinish_4; }
	inline void set_OnFinish_4(EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * value)
	{
		___OnFinish_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFinish_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnError_5() { return static_cast<int32_t>(offsetof(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D, ___OnError_5)); }
	inline EventHandler_1_t674DACB444A256903A17FB5F7644CEB641C01927 * get_OnError_5() const { return ___OnError_5; }
	inline EventHandler_1_t674DACB444A256903A17FB5F7644CEB641C01927 ** get_address_of_OnError_5() { return &___OnError_5; }
	inline void set_OnError_5(EventHandler_1_t674DACB444A256903A17FB5F7644CEB641C01927 * value)
	{
		___OnError_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnError_5), (void*)value);
	}
};

struct Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_StaticFields
{
public:
	// UnityEngine.Advertisements.iOS.Platform UnityEngine.Advertisements.iOS.Platform::s_Instance
	Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D * ___s_Instance_0;
	// UnityEngine.Advertisements.CallbackExecutor UnityEngine.Advertisements.iOS.Platform::s_CallbackExecutor
	CallbackExecutor_tB2DFCCED2168CFD8C1F6FD0C21679DA386B8CA78 * ___s_CallbackExecutor_1;
	// UnityEngine.Advertisements.iOS.Platform_unityAdsReady UnityEngine.Advertisements.iOS.Platform::<>f__mgU24cache0
	unityAdsReady_t716CB3207A4D591AFD38E610CC8DC5EA4DE62A67 * ___U3CU3Ef__mgU24cache0_6;
	// UnityEngine.Advertisements.iOS.Platform_unityAdsDidError UnityEngine.Advertisements.iOS.Platform::<>f__mgU24cache1
	unityAdsDidError_t0AEE1AF310020AF7C9F6A7881F50B21996A32C61 * ___U3CU3Ef__mgU24cache1_7;
	// UnityEngine.Advertisements.iOS.Platform_unityAdsDidStart UnityEngine.Advertisements.iOS.Platform::<>f__mgU24cache2
	unityAdsDidStart_tD78BF20784F7416774E14ADE453F6F4B4428D7FA * ___U3CU3Ef__mgU24cache2_8;
	// UnityEngine.Advertisements.iOS.Platform_unityAdsDidFinish UnityEngine.Advertisements.iOS.Platform::<>f__mgU24cache3
	unityAdsDidFinish_t9EE8992F28B4D62991C98D7D85A9E93A6835E045 * ___U3CU3Ef__mgU24cache3_9;

public:
	inline static int32_t get_offset_of_s_Instance_0() { return static_cast<int32_t>(offsetof(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_StaticFields, ___s_Instance_0)); }
	inline Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D * get_s_Instance_0() const { return ___s_Instance_0; }
	inline Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D ** get_address_of_s_Instance_0() { return &___s_Instance_0; }
	inline void set_s_Instance_0(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D * value)
	{
		___s_Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Instance_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_CallbackExecutor_1() { return static_cast<int32_t>(offsetof(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_StaticFields, ___s_CallbackExecutor_1)); }
	inline CallbackExecutor_tB2DFCCED2168CFD8C1F6FD0C21679DA386B8CA78 * get_s_CallbackExecutor_1() const { return ___s_CallbackExecutor_1; }
	inline CallbackExecutor_tB2DFCCED2168CFD8C1F6FD0C21679DA386B8CA78 ** get_address_of_s_CallbackExecutor_1() { return &___s_CallbackExecutor_1; }
	inline void set_s_CallbackExecutor_1(CallbackExecutor_tB2DFCCED2168CFD8C1F6FD0C21679DA386B8CA78 * value)
	{
		___s_CallbackExecutor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CallbackExecutor_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_6() { return static_cast<int32_t>(offsetof(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_StaticFields, ___U3CU3Ef__mgU24cache0_6)); }
	inline unityAdsReady_t716CB3207A4D591AFD38E610CC8DC5EA4DE62A67 * get_U3CU3Ef__mgU24cache0_6() const { return ___U3CU3Ef__mgU24cache0_6; }
	inline unityAdsReady_t716CB3207A4D591AFD38E610CC8DC5EA4DE62A67 ** get_address_of_U3CU3Ef__mgU24cache0_6() { return &___U3CU3Ef__mgU24cache0_6; }
	inline void set_U3CU3Ef__mgU24cache0_6(unityAdsReady_t716CB3207A4D591AFD38E610CC8DC5EA4DE62A67 * value)
	{
		___U3CU3Ef__mgU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache0_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_7() { return static_cast<int32_t>(offsetof(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_StaticFields, ___U3CU3Ef__mgU24cache1_7)); }
	inline unityAdsDidError_t0AEE1AF310020AF7C9F6A7881F50B21996A32C61 * get_U3CU3Ef__mgU24cache1_7() const { return ___U3CU3Ef__mgU24cache1_7; }
	inline unityAdsDidError_t0AEE1AF310020AF7C9F6A7881F50B21996A32C61 ** get_address_of_U3CU3Ef__mgU24cache1_7() { return &___U3CU3Ef__mgU24cache1_7; }
	inline void set_U3CU3Ef__mgU24cache1_7(unityAdsDidError_t0AEE1AF310020AF7C9F6A7881F50B21996A32C61 * value)
	{
		___U3CU3Ef__mgU24cache1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache1_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_8() { return static_cast<int32_t>(offsetof(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_StaticFields, ___U3CU3Ef__mgU24cache2_8)); }
	inline unityAdsDidStart_tD78BF20784F7416774E14ADE453F6F4B4428D7FA * get_U3CU3Ef__mgU24cache2_8() const { return ___U3CU3Ef__mgU24cache2_8; }
	inline unityAdsDidStart_tD78BF20784F7416774E14ADE453F6F4B4428D7FA ** get_address_of_U3CU3Ef__mgU24cache2_8() { return &___U3CU3Ef__mgU24cache2_8; }
	inline void set_U3CU3Ef__mgU24cache2_8(unityAdsDidStart_tD78BF20784F7416774E14ADE453F6F4B4428D7FA * value)
	{
		___U3CU3Ef__mgU24cache2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache2_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_9() { return static_cast<int32_t>(offsetof(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_StaticFields, ___U3CU3Ef__mgU24cache3_9)); }
	inline unityAdsDidFinish_t9EE8992F28B4D62991C98D7D85A9E93A6835E045 * get_U3CU3Ef__mgU24cache3_9() const { return ___U3CU3Ef__mgU24cache3_9; }
	inline unityAdsDidFinish_t9EE8992F28B4D62991C98D7D85A9E93A6835E045 ** get_address_of_U3CU3Ef__mgU24cache3_9() { return &___U3CU3Ef__mgU24cache3_9; }
	inline void set_U3CU3Ef__mgU24cache3_9(unityAdsDidFinish_t9EE8992F28B4D62991C98D7D85A9E93A6835E045 * value)
	{
		___U3CU3Ef__mgU24cache3_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache3_9), (void*)value);
	}
};


// UnityEngine.Advertisements.iOS.Platform_<UnityAdsDidError>c__AnonStorey1
struct  U3CUnityAdsDidErrorU3Ec__AnonStorey1_t6A5E888349986FCAC117F1F71F73587DAE2AFFEA  : public RuntimeObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs> UnityEngine.Advertisements.iOS.Platform_<UnityAdsDidError>c__AnonStorey1::handler
	EventHandler_1_t674DACB444A256903A17FB5F7644CEB641C01927 * ___handler_0;
	// System.Int64 UnityEngine.Advertisements.iOS.Platform_<UnityAdsDidError>c__AnonStorey1::rawError
	int64_t ___rawError_1;
	// System.String UnityEngine.Advertisements.iOS.Platform_<UnityAdsDidError>c__AnonStorey1::message
	String_t* ___message_2;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(U3CUnityAdsDidErrorU3Ec__AnonStorey1_t6A5E888349986FCAC117F1F71F73587DAE2AFFEA, ___handler_0)); }
	inline EventHandler_1_t674DACB444A256903A17FB5F7644CEB641C01927 * get_handler_0() const { return ___handler_0; }
	inline EventHandler_1_t674DACB444A256903A17FB5F7644CEB641C01927 ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(EventHandler_1_t674DACB444A256903A17FB5F7644CEB641C01927 * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handler_0), (void*)value);
	}

	inline static int32_t get_offset_of_rawError_1() { return static_cast<int32_t>(offsetof(U3CUnityAdsDidErrorU3Ec__AnonStorey1_t6A5E888349986FCAC117F1F71F73587DAE2AFFEA, ___rawError_1)); }
	inline int64_t get_rawError_1() const { return ___rawError_1; }
	inline int64_t* get_address_of_rawError_1() { return &___rawError_1; }
	inline void set_rawError_1(int64_t value)
	{
		___rawError_1 = value;
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(U3CUnityAdsDidErrorU3Ec__AnonStorey1_t6A5E888349986FCAC117F1F71F73587DAE2AFFEA, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_2), (void*)value);
	}
};


// UnityEngine.Advertisements.iOS.Platform_<UnityAdsDidFinish>c__AnonStorey3
struct  U3CUnityAdsDidFinishU3Ec__AnonStorey3_tFF312E3E401419649E7A80CB5F522EFBD8C7A1E1  : public RuntimeObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.iOS.Platform_<UnityAdsDidFinish>c__AnonStorey3::handler
	EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * ___handler_0;
	// System.String UnityEngine.Advertisements.iOS.Platform_<UnityAdsDidFinish>c__AnonStorey3::placementId
	String_t* ___placementId_1;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(U3CUnityAdsDidFinishU3Ec__AnonStorey3_tFF312E3E401419649E7A80CB5F522EFBD8C7A1E1, ___handler_0)); }
	inline EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * get_handler_0() const { return ___handler_0; }
	inline EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handler_0), (void*)value);
	}

	inline static int32_t get_offset_of_placementId_1() { return static_cast<int32_t>(offsetof(U3CUnityAdsDidFinishU3Ec__AnonStorey3_tFF312E3E401419649E7A80CB5F522EFBD8C7A1E1, ___placementId_1)); }
	inline String_t* get_placementId_1() const { return ___placementId_1; }
	inline String_t** get_address_of_placementId_1() { return &___placementId_1; }
	inline void set_placementId_1(String_t* value)
	{
		___placementId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placementId_1), (void*)value);
	}
};


// UnityEngine.Advertisements.iOS.Platform_<UnityAdsDidStart>c__AnonStorey2
struct  U3CUnityAdsDidStartU3Ec__AnonStorey2_t69450E13B9A35C35663BBFDA85A317661053E4F6  : public RuntimeObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs> UnityEngine.Advertisements.iOS.Platform_<UnityAdsDidStart>c__AnonStorey2::handler
	EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * ___handler_0;
	// System.String UnityEngine.Advertisements.iOS.Platform_<UnityAdsDidStart>c__AnonStorey2::placementId
	String_t* ___placementId_1;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(U3CUnityAdsDidStartU3Ec__AnonStorey2_t69450E13B9A35C35663BBFDA85A317661053E4F6, ___handler_0)); }
	inline EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * get_handler_0() const { return ___handler_0; }
	inline EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handler_0), (void*)value);
	}

	inline static int32_t get_offset_of_placementId_1() { return static_cast<int32_t>(offsetof(U3CUnityAdsDidStartU3Ec__AnonStorey2_t69450E13B9A35C35663BBFDA85A317661053E4F6, ___placementId_1)); }
	inline String_t* get_placementId_1() const { return ___placementId_1; }
	inline String_t** get_address_of_placementId_1() { return &___placementId_1; }
	inline void set_placementId_1(String_t* value)
	{
		___placementId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placementId_1), (void*)value);
	}
};


// UnityEngine.Advertisements.iOS.Platform_<UnityAdsReady>c__AnonStorey0
struct  U3CUnityAdsReadyU3Ec__AnonStorey0_tB27C3EFC407540F32BE16EEEECF2C7B88BF43A79  : public RuntimeObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs> UnityEngine.Advertisements.iOS.Platform_<UnityAdsReady>c__AnonStorey0::handler
	EventHandler_1_tB57D8AF0A9FA3BFE6ABEC77DE046E4A20526A09A * ___handler_0;
	// System.String UnityEngine.Advertisements.iOS.Platform_<UnityAdsReady>c__AnonStorey0::placementId
	String_t* ___placementId_1;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(U3CUnityAdsReadyU3Ec__AnonStorey0_tB27C3EFC407540F32BE16EEEECF2C7B88BF43A79, ___handler_0)); }
	inline EventHandler_1_tB57D8AF0A9FA3BFE6ABEC77DE046E4A20526A09A * get_handler_0() const { return ___handler_0; }
	inline EventHandler_1_tB57D8AF0A9FA3BFE6ABEC77DE046E4A20526A09A ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(EventHandler_1_tB57D8AF0A9FA3BFE6ABEC77DE046E4A20526A09A * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handler_0), (void*)value);
	}

	inline static int32_t get_offset_of_placementId_1() { return static_cast<int32_t>(offsetof(U3CUnityAdsReadyU3Ec__AnonStorey0_tB27C3EFC407540F32BE16EEEECF2C7B88BF43A79, ___placementId_1)); }
	inline String_t* get_placementId_1() const { return ___placementId_1; }
	inline String_t** get_address_of_placementId_1() { return &___placementId_1; }
	inline void set_placementId_1(String_t* value)
	{
		___placementId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placementId_1), (void*)value);
	}
};


// UnityEngine.AndroidJavaObject
struct  AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct  KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_GetDelegate>
struct  KeyValuePair_2_tB5A10C8410102A497AB656E4139B48E757EC880F 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	GetDelegate_t5384142A3E4A970422627B6C02B4EB4319934A8F * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB5A10C8410102A497AB656E4139B48E757EC880F, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB5A10C8410102A497AB656E4139B48E757EC880F, ___value_1)); }
	inline GetDelegate_t5384142A3E4A970422627B6C02B4EB4319934A8F * get_value_1() const { return ___value_1; }
	inline GetDelegate_t5384142A3E4A970422627B6C02B4EB4319934A8F ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(GetDelegate_t5384142A3E4A970422627B6C02B4EB4319934A8F * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_SetDelegate>
struct  KeyValuePair_2_t2640B830EE98728C11234AB1D4A0768B5E02CDF4 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Type_t * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	SetDelegate_tB85E10DD9F713CAE7ED82A18744F73AED4EA6D04 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2640B830EE98728C11234AB1D4A0768B5E02CDF4, ___key_0)); }
	inline Type_t * get_key_0() const { return ___key_0; }
	inline Type_t ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Type_t * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2640B830EE98728C11234AB1D4A0768B5E02CDF4, ___value_1)); }
	inline SetDelegate_tB85E10DD9F713CAE7ED82A18744F73AED4EA6D04 * get_value_1() const { return ___value_1; }
	inline SetDelegate_tB85E10DD9F713CAE7ED82A18744F73AED4EA6D04 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(SetDelegate_tB85E10DD9F713CAE7ED82A18744F73AED4EA6D04 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Decimal
struct  Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Zero_7)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___One_8)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_One_8() const { return ___One_8; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinusOne_9)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MaxValue_10)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinValue_11)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}
};


// System.IO.Stream
struct  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.IO.TextReader
struct  TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:

public:
};

struct TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields, ___Null_3)); }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * get_Null_3() const { return ___Null_3; }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
	}
};


// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Net.WebResponse
struct  WebResponse_t5C91B5B83E2FBA2EABC6FDF2A70E9AFD9BB059BD  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:

public:
};


// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.SByte
struct  SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Advertisements.ErrorEventArgs
struct  ErrorEventArgs_t77C07CCB4554162961BBE00E3B7E52DDA8648409  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// System.Int64 UnityEngine.Advertisements.ErrorEventArgs::<error>k__BackingField
	int64_t ___U3CerrorU3Ek__BackingField_1;
	// System.String UnityEngine.Advertisements.ErrorEventArgs::<message>k__BackingField
	String_t* ___U3CmessageU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CerrorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ErrorEventArgs_t77C07CCB4554162961BBE00E3B7E52DDA8648409, ___U3CerrorU3Ek__BackingField_1)); }
	inline int64_t get_U3CerrorU3Ek__BackingField_1() const { return ___U3CerrorU3Ek__BackingField_1; }
	inline int64_t* get_address_of_U3CerrorU3Ek__BackingField_1() { return &___U3CerrorU3Ek__BackingField_1; }
	inline void set_U3CerrorU3Ek__BackingField_1(int64_t value)
	{
		___U3CerrorU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CmessageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ErrorEventArgs_t77C07CCB4554162961BBE00E3B7E52DDA8648409, ___U3CmessageU3Ek__BackingField_2)); }
	inline String_t* get_U3CmessageU3Ek__BackingField_2() const { return ___U3CmessageU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CmessageU3Ek__BackingField_2() { return &___U3CmessageU3Ek__BackingField_2; }
	inline void set_U3CmessageU3Ek__BackingField_2(String_t* value)
	{
		___U3CmessageU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmessageU3Ek__BackingField_2), (void*)value);
	}
};


// UnityEngine.Advertisements.ReadyEventArgs
struct  ReadyEventArgs_tA3E33B18240D91F48C92CC62CB5515388449E250  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// System.String UnityEngine.Advertisements.ReadyEventArgs::<placementId>k__BackingField
	String_t* ___U3CplacementIdU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CplacementIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ReadyEventArgs_tA3E33B18240D91F48C92CC62CB5515388449E250, ___U3CplacementIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CplacementIdU3Ek__BackingField_1() const { return ___U3CplacementIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CplacementIdU3Ek__BackingField_1() { return &___U3CplacementIdU3Ek__BackingField_1; }
	inline void set_U3CplacementIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CplacementIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CplacementIdU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.Advertisements.SimpleJson.JsonArray
struct  JsonArray_tEC81164ADEC87B1B3F3D28FEA89F9AF6458479A6  : public List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D
{
public:

public:
};


// UnityEngine.Advertisements.StartEventArgs
struct  StartEventArgs_t44F8C8482BBCC37963CFBC1C4D2F6473040717E2  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// System.String UnityEngine.Advertisements.StartEventArgs::<placementId>k__BackingField
	String_t* ___U3CplacementIdU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CplacementIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(StartEventArgs_t44F8C8482BBCC37963CFBC1C4D2F6473040717E2, ___U3CplacementIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CplacementIdU3Ek__BackingField_1() const { return ___U3CplacementIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CplacementIdU3Ek__BackingField_1() { return &___U3CplacementIdU3Ek__BackingField_1; }
	inline void set_U3CplacementIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CplacementIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CplacementIdU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.AndroidJavaClass
struct  AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE  : public AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D
{
public:

public:
};


// UnityEngine.Rect
struct  Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<System.Object,System.Object>
struct  Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___dictionary_0)); }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___current_3)); }
	inline KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<System.String,System.Object>
struct  Enumerator_tEDEEE8F2491CB14C772ACA1B27EE8C40B2A06EC4 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tEDEEE8F2491CB14C772ACA1B27EE8C40B2A06EC4, ___dictionary_0)); }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tEDEEE8F2491CB14C772ACA1B27EE8C40B2A06EC4, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tEDEEE8F2491CB14C772ACA1B27EE8C40B2A06EC4, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tEDEEE8F2491CB14C772ACA1B27EE8C40B2A06EC4, ___current_3)); }
	inline KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tEDEEE8F2491CB14C772ACA1B27EE8C40B2A06EC4, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.DateTimeOffset
struct  DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85, ___m_dateTime_2)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  value)
	{
		___MaxValue_1 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Globalization.NumberStyles
struct  NumberStyles_tB0ADA2D9CCAA236331AED14C42BE5832B2351592 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_tB0ADA2D9CCAA236331AED14C42BE5832B2351592, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.StreamReader
struct  StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E  : public TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A
{
public:
	// System.IO.Stream System.IO.StreamReader::stream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream_5;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___encoding_6;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * ___decoder_7;
	// System.Byte[] System.IO.StreamReader::byteBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___byteBuffer_8;
	// System.Char[] System.IO.StreamReader::charBuffer
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___charBuffer_9;
	// System.Byte[] System.IO.StreamReader::_preamble
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____preamble_10;
	// System.Int32 System.IO.StreamReader::charPos
	int32_t ___charPos_11;
	// System.Int32 System.IO.StreamReader::charLen
	int32_t ___charLen_12;
	// System.Int32 System.IO.StreamReader::byteLen
	int32_t ___byteLen_13;
	// System.Int32 System.IO.StreamReader::bytePos
	int32_t ___bytePos_14;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_15;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_16;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_17;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_18;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_19;
	// System.Threading.Tasks.Task modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamReader::_asyncReadTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ____asyncReadTask_20;

public:
	inline static int32_t get_offset_of_stream_5() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___stream_5)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_stream_5() const { return ___stream_5; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_stream_5() { return &___stream_5; }
	inline void set_stream_5(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___stream_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_5), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_6() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___encoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_encoding_6() const { return ___encoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_encoding_6() { return &___encoding_6; }
	inline void set_encoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___encoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_decoder_7() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___decoder_7)); }
	inline Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * get_decoder_7() const { return ___decoder_7; }
	inline Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 ** get_address_of_decoder_7() { return &___decoder_7; }
	inline void set_decoder_7(Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * value)
	{
		___decoder_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoder_7), (void*)value);
	}

	inline static int32_t get_offset_of_byteBuffer_8() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___byteBuffer_8)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_byteBuffer_8() const { return ___byteBuffer_8; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_byteBuffer_8() { return &___byteBuffer_8; }
	inline void set_byteBuffer_8(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___byteBuffer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteBuffer_8), (void*)value);
	}

	inline static int32_t get_offset_of_charBuffer_9() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___charBuffer_9)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_charBuffer_9() const { return ___charBuffer_9; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_charBuffer_9() { return &___charBuffer_9; }
	inline void set_charBuffer_9(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___charBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charBuffer_9), (void*)value);
	}

	inline static int32_t get_offset_of__preamble_10() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ____preamble_10)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__preamble_10() const { return ____preamble_10; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__preamble_10() { return &____preamble_10; }
	inline void set__preamble_10(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____preamble_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____preamble_10), (void*)value);
	}

	inline static int32_t get_offset_of_charPos_11() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___charPos_11)); }
	inline int32_t get_charPos_11() const { return ___charPos_11; }
	inline int32_t* get_address_of_charPos_11() { return &___charPos_11; }
	inline void set_charPos_11(int32_t value)
	{
		___charPos_11 = value;
	}

	inline static int32_t get_offset_of_charLen_12() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___charLen_12)); }
	inline int32_t get_charLen_12() const { return ___charLen_12; }
	inline int32_t* get_address_of_charLen_12() { return &___charLen_12; }
	inline void set_charLen_12(int32_t value)
	{
		___charLen_12 = value;
	}

	inline static int32_t get_offset_of_byteLen_13() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___byteLen_13)); }
	inline int32_t get_byteLen_13() const { return ___byteLen_13; }
	inline int32_t* get_address_of_byteLen_13() { return &___byteLen_13; }
	inline void set_byteLen_13(int32_t value)
	{
		___byteLen_13 = value;
	}

	inline static int32_t get_offset_of_bytePos_14() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___bytePos_14)); }
	inline int32_t get_bytePos_14() const { return ___bytePos_14; }
	inline int32_t* get_address_of_bytePos_14() { return &___bytePos_14; }
	inline void set_bytePos_14(int32_t value)
	{
		___bytePos_14 = value;
	}

	inline static int32_t get_offset_of__maxCharsPerBuffer_15() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ____maxCharsPerBuffer_15)); }
	inline int32_t get__maxCharsPerBuffer_15() const { return ____maxCharsPerBuffer_15; }
	inline int32_t* get_address_of__maxCharsPerBuffer_15() { return &____maxCharsPerBuffer_15; }
	inline void set__maxCharsPerBuffer_15(int32_t value)
	{
		____maxCharsPerBuffer_15 = value;
	}

	inline static int32_t get_offset_of__detectEncoding_16() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ____detectEncoding_16)); }
	inline bool get__detectEncoding_16() const { return ____detectEncoding_16; }
	inline bool* get_address_of__detectEncoding_16() { return &____detectEncoding_16; }
	inline void set__detectEncoding_16(bool value)
	{
		____detectEncoding_16 = value;
	}

	inline static int32_t get_offset_of__checkPreamble_17() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ____checkPreamble_17)); }
	inline bool get__checkPreamble_17() const { return ____checkPreamble_17; }
	inline bool* get_address_of__checkPreamble_17() { return &____checkPreamble_17; }
	inline void set__checkPreamble_17(bool value)
	{
		____checkPreamble_17 = value;
	}

	inline static int32_t get_offset_of__isBlocked_18() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ____isBlocked_18)); }
	inline bool get__isBlocked_18() const { return ____isBlocked_18; }
	inline bool* get_address_of__isBlocked_18() { return &____isBlocked_18; }
	inline void set__isBlocked_18(bool value)
	{
		____isBlocked_18 = value;
	}

	inline static int32_t get_offset_of__closable_19() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ____closable_19)); }
	inline bool get__closable_19() const { return ____closable_19; }
	inline bool* get_address_of__closable_19() { return &____closable_19; }
	inline void set__closable_19(bool value)
	{
		____closable_19 = value;
	}

	inline static int32_t get_offset_of__asyncReadTask_20() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ____asyncReadTask_20)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get__asyncReadTask_20() const { return ____asyncReadTask_20; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of__asyncReadTask_20() { return &____asyncReadTask_20; }
	inline void set__asyncReadTask_20(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		____asyncReadTask_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncReadTask_20), (void*)value);
	}
};

struct StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E_StaticFields
{
public:
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * ___Null_4;

public:
	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E_StaticFields, ___Null_4)); }
	inline StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * get_Null_4() const { return ___Null_4; }
	inline StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E ** get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * value)
	{
		___Null_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_4), (void*)value);
	}
};


// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Security.AuthenticationLevel
struct  AuthenticationLevel_tC0FE8B3A1A9C4F39798DD6F6C024078BB137F52B 
{
public:
	// System.Int32 System.Net.Security.AuthenticationLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AuthenticationLevel_tC0FE8B3A1A9C4F39798DD6F6C024078BB137F52B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.ConstructorInfo
struct  ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF  : public MethodBase_t
{
public:

public:
};

struct ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConstructorName_0), (void*)value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeConstructorName_1), (void*)value);
	}
};


// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// System.Reflection.ParameterAttributes
struct  ParameterAttributes_tF9962395513C2A48CF5AF2F371C66DD52789F110 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParameterAttributes_tF9962395513C2A48CF5AF2F371C66DD52789F110, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Security.Principal.TokenImpersonationLevel
struct  TokenImpersonationLevel_tED478ED25688E978F79556E1A2335F7262023D26 
{
public:
	// System.Int32 System.Security.Principal.TokenImpersonationLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TokenImpersonationLevel_tED478ED25688E978F79556E1A2335F7262023D26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.StringComparison
struct  StringComparison_t02BAA95468CE9E91115C604577611FDF58FEDCF0 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_t02BAA95468CE9E91115C604577611FDF58FEDCF0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Uri_Flags
struct  Flags_tEBE7CABEBD13F16920D6950B384EB8F988250A2A 
{
public:
	// System.UInt64 System.Uri_Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tEBE7CABEBD13F16920D6950B384EB8F988250A2A, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct  UriIdnScope_tE1574B39C7492C761EFE2FC12DDE82DE013AC9D1 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tE1574B39C7492C761EFE2FC12DDE82DE013AC9D1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Advertisements.Advertisement_DebugLevel
struct  DebugLevel_t72A7B4FC98B1A5E19A789475341FD35F5CAB0537 
{
public:
	// System.Int32 UnityEngine.Advertisements.Advertisement_DebugLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebugLevel_t72A7B4FC98B1A5E19A789475341FD35F5CAB0537, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Advertisements.Advertisement_DebugLevelInternal
struct  DebugLevelInternal_t2FF63CDE387CA44C2B4C4715A40FAEC807F23E22 
{
public:
	// System.Int32 UnityEngine.Advertisements.Advertisement_DebugLevelInternal::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebugLevelInternal_t2FF63CDE387CA44C2B4C4715A40FAEC807F23E22, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Advertisements.PlacementState
struct  PlacementState_t19D760B7BB28598800BD374D7ECBC43FC9D48333 
{
public:
	// System.Int32 UnityEngine.Advertisements.PlacementState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlacementState_t19D760B7BB28598800BD374D7ECBC43FC9D48333, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Advertisements.ShowResult
struct  ShowResult_tE352F124530178145C4D05ACA8F66AD11DEECDA8 
{
public:
	// System.Int32 UnityEngine.Advertisements.ShowResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShowResult_tE352F124530178145C4D05ACA8F66AD11DEECDA8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AndroidJavaProxy
struct  AndroidJavaProxy_t72F996A75B4B771B9572C3770CF2D2C7A5B4783D  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;

public:
	inline static int32_t get_offset_of_javaInterface_0() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_t72F996A75B4B771B9572C3770CF2D2C7A5B4783D, ___javaInterface_0)); }
	inline AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * get_javaInterface_0() const { return ___javaInterface_0; }
	inline AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE ** get_address_of_javaInterface_0() { return &___javaInterface_0; }
	inline void set_javaInterface_0(AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * value)
	{
		___javaInterface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___javaInterface_0), (void*)value);
	}

	inline static int32_t get_offset_of_proxyObject_1() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_t72F996A75B4B771B9572C3770CF2D2C7A5B4783D, ___proxyObject_1)); }
	inline intptr_t get_proxyObject_1() const { return ___proxyObject_1; }
	inline intptr_t* get_address_of_proxyObject_1() { return &___proxyObject_1; }
	inline void set_proxyObject_1(intptr_t value)
	{
		___proxyObject_1 = value;
	}
};

struct AndroidJavaProxy_t72F996A75B4B771B9572C3770CF2D2C7A5B4783D_StaticFields
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;

public:
	inline static int32_t get_offset_of_s_JavaLangSystemClass_2() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_t72F996A75B4B771B9572C3770CF2D2C7A5B4783D_StaticFields, ___s_JavaLangSystemClass_2)); }
	inline GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * get_s_JavaLangSystemClass_2() const { return ___s_JavaLangSystemClass_2; }
	inline GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 ** get_address_of_s_JavaLangSystemClass_2() { return &___s_JavaLangSystemClass_2; }
	inline void set_s_JavaLangSystemClass_2(GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * value)
	{
		___s_JavaLangSystemClass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_JavaLangSystemClass_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_HashCodeMethodID_3() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_t72F996A75B4B771B9572C3770CF2D2C7A5B4783D_StaticFields, ___s_HashCodeMethodID_3)); }
	inline intptr_t get_s_HashCodeMethodID_3() const { return ___s_HashCodeMethodID_3; }
	inline intptr_t* get_address_of_s_HashCodeMethodID_3() { return &___s_HashCodeMethodID_3; }
	inline void set_s_HashCodeMethodID_3(intptr_t value)
	{
		___s_HashCodeMethodID_3 = value;
	}
};


// UnityEngine.HideFlags
struct  HideFlags_t30B57DC00548E963A569318C8F4A4123E7447E37 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_t30B57DC00548E963A569318C8F4A4123E7447E37, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ScaleMode
struct  ScaleMode_tD82BB783A72602299B77DF25ECD36EEA68048630 
{
public:
	// System.Int32 UnityEngine.ScaleMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScaleMode_tD82BB783A72602299B77DF25ECD36EEA68048630, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Net.WebRequest
struct  WebRequest_t5668DA48802E9FE2F1DE5F5A770B218608B918C8  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.Net.Security.AuthenticationLevel System.Net.WebRequest::m_AuthenticationLevel
	int32_t ___m_AuthenticationLevel_4;
	// System.Security.Principal.TokenImpersonationLevel System.Net.WebRequest::m_ImpersonationLevel
	int32_t ___m_ImpersonationLevel_5;

public:
	inline static int32_t get_offset_of_m_AuthenticationLevel_4() { return static_cast<int32_t>(offsetof(WebRequest_t5668DA48802E9FE2F1DE5F5A770B218608B918C8, ___m_AuthenticationLevel_4)); }
	inline int32_t get_m_AuthenticationLevel_4() const { return ___m_AuthenticationLevel_4; }
	inline int32_t* get_address_of_m_AuthenticationLevel_4() { return &___m_AuthenticationLevel_4; }
	inline void set_m_AuthenticationLevel_4(int32_t value)
	{
		___m_AuthenticationLevel_4 = value;
	}

	inline static int32_t get_offset_of_m_ImpersonationLevel_5() { return static_cast<int32_t>(offsetof(WebRequest_t5668DA48802E9FE2F1DE5F5A770B218608B918C8, ___m_ImpersonationLevel_5)); }
	inline int32_t get_m_ImpersonationLevel_5() const { return ___m_ImpersonationLevel_5; }
	inline int32_t* get_address_of_m_ImpersonationLevel_5() { return &___m_ImpersonationLevel_5; }
	inline void set_m_ImpersonationLevel_5(int32_t value)
	{
		___m_ImpersonationLevel_5 = value;
	}
};

struct WebRequest_t5668DA48802E9FE2F1DE5F5A770B218608B918C8_StaticFields
{
public:
	// System.Collections.ArrayList modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_PrefixList
	ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * ___s_PrefixList_1;
	// System.Object System.Net.WebRequest::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_2;
	// System.Net.TimerThread_Queue System.Net.WebRequest::s_DefaultTimerQueue
	Queue_tCCFF6A2FCF584216AEDA04A483FB808E2D493643 * ___s_DefaultTimerQueue_3;
	// System.Net.WebRequest_DesignerWebRequestCreate System.Net.WebRequest::webRequestCreate
	DesignerWebRequestCreate_t613DD91D4F07703DC65E847B367F4DCD5710E2A3 * ___webRequestCreate_6;
	// System.Net.IWebProxy modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_DefaultWebProxy
	RuntimeObject* ___s_DefaultWebProxy_7;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_DefaultWebProxyInitialized
	bool ___s_DefaultWebProxyInitialized_8;

public:
	inline static int32_t get_offset_of_s_PrefixList_1() { return static_cast<int32_t>(offsetof(WebRequest_t5668DA48802E9FE2F1DE5F5A770B218608B918C8_StaticFields, ___s_PrefixList_1)); }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * get_s_PrefixList_1() const { return ___s_PrefixList_1; }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 ** get_address_of_s_PrefixList_1() { return &___s_PrefixList_1; }
	inline void set_s_PrefixList_1(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * value)
	{
		___s_PrefixList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PrefixList_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_2() { return static_cast<int32_t>(offsetof(WebRequest_t5668DA48802E9FE2F1DE5F5A770B218608B918C8_StaticFields, ___s_InternalSyncObject_2)); }
	inline RuntimeObject * get_s_InternalSyncObject_2() const { return ___s_InternalSyncObject_2; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_2() { return &___s_InternalSyncObject_2; }
	inline void set_s_InternalSyncObject_2(RuntimeObject * value)
	{
		___s_InternalSyncObject_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultTimerQueue_3() { return static_cast<int32_t>(offsetof(WebRequest_t5668DA48802E9FE2F1DE5F5A770B218608B918C8_StaticFields, ___s_DefaultTimerQueue_3)); }
	inline Queue_tCCFF6A2FCF584216AEDA04A483FB808E2D493643 * get_s_DefaultTimerQueue_3() const { return ___s_DefaultTimerQueue_3; }
	inline Queue_tCCFF6A2FCF584216AEDA04A483FB808E2D493643 ** get_address_of_s_DefaultTimerQueue_3() { return &___s_DefaultTimerQueue_3; }
	inline void set_s_DefaultTimerQueue_3(Queue_tCCFF6A2FCF584216AEDA04A483FB808E2D493643 * value)
	{
		___s_DefaultTimerQueue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultTimerQueue_3), (void*)value);
	}

	inline static int32_t get_offset_of_webRequestCreate_6() { return static_cast<int32_t>(offsetof(WebRequest_t5668DA48802E9FE2F1DE5F5A770B218608B918C8_StaticFields, ___webRequestCreate_6)); }
	inline DesignerWebRequestCreate_t613DD91D4F07703DC65E847B367F4DCD5710E2A3 * get_webRequestCreate_6() const { return ___webRequestCreate_6; }
	inline DesignerWebRequestCreate_t613DD91D4F07703DC65E847B367F4DCD5710E2A3 ** get_address_of_webRequestCreate_6() { return &___webRequestCreate_6; }
	inline void set_webRequestCreate_6(DesignerWebRequestCreate_t613DD91D4F07703DC65E847B367F4DCD5710E2A3 * value)
	{
		___webRequestCreate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webRequestCreate_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultWebProxy_7() { return static_cast<int32_t>(offsetof(WebRequest_t5668DA48802E9FE2F1DE5F5A770B218608B918C8_StaticFields, ___s_DefaultWebProxy_7)); }
	inline RuntimeObject* get_s_DefaultWebProxy_7() const { return ___s_DefaultWebProxy_7; }
	inline RuntimeObject** get_address_of_s_DefaultWebProxy_7() { return &___s_DefaultWebProxy_7; }
	inline void set_s_DefaultWebProxy_7(RuntimeObject* value)
	{
		___s_DefaultWebProxy_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultWebProxy_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultWebProxyInitialized_8() { return static_cast<int32_t>(offsetof(WebRequest_t5668DA48802E9FE2F1DE5F5A770B218608B918C8_StaticFields, ___s_DefaultWebProxyInitialized_8)); }
	inline bool get_s_DefaultWebProxyInitialized_8() const { return ___s_DefaultWebProxyInitialized_8; }
	inline bool* get_address_of_s_DefaultWebProxyInitialized_8() { return &___s_DefaultWebProxyInitialized_8; }
	inline void set_s_DefaultWebProxyInitialized_8(bool value)
	{
		___s_DefaultWebProxyInitialized_8 = value;
	}
};


// System.Reflection.ParameterInfo
struct  ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Runtime.InteropServices.MarshalAsAttribute System.Reflection.ParameterInfo::marshalAs
	MarshalAsAttribute_t1F5CB9960D7AD6C3305475C98A397BD0B9C64020 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassImpl_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultValueImpl_1), (void*)value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberImpl_2), (void*)value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameImpl_3), (void*)value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB, ___marshalAs_6)); }
	inline MarshalAsAttribute_t1F5CB9960D7AD6C3305475C98A397BD0B9C64020 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline MarshalAsAttribute_t1F5CB9960D7AD6C3305475C98A397BD0B9C64020 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(MarshalAsAttribute_t1F5CB9960D7AD6C3305475C98A397BD0B9C64020 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___marshalAs_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_marshaled_pinvoke
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	char* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1F5CB9960D7AD6C3305475C98A397BD0B9C64020 * ___marshalAs_6;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_marshaled_com
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	Il2CppChar* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1F5CB9960D7AD6C3305475C98A397BD0B9C64020 * ___marshalAs_6;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Uri
struct  Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri_Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri_UriInfo System.Uri::m_Info
	UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;

public:
	inline static int32_t get_offset_of_m_String_13() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_String_13)); }
	inline String_t* get_m_String_13() const { return ___m_String_13; }
	inline String_t** get_address_of_m_String_13() { return &___m_String_13; }
	inline void set_m_String_13(String_t* value)
	{
		___m_String_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_14() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_originalUnicodeString_14)); }
	inline String_t* get_m_originalUnicodeString_14() const { return ___m_originalUnicodeString_14; }
	inline String_t** get_address_of_m_originalUnicodeString_14() { return &___m_originalUnicodeString_14; }
	inline void set_m_originalUnicodeString_14(String_t* value)
	{
		___m_originalUnicodeString_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_15() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Syntax_15)); }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * get_m_Syntax_15() const { return ___m_Syntax_15; }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC ** get_address_of_m_Syntax_15() { return &___m_Syntax_15; }
	inline void set_m_Syntax_15(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * value)
	{
		___m_Syntax_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_16() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_DnsSafeHost_16)); }
	inline String_t* get_m_DnsSafeHost_16() const { return ___m_DnsSafeHost_16; }
	inline String_t** get_address_of_m_DnsSafeHost_16() { return &___m_DnsSafeHost_16; }
	inline void set_m_DnsSafeHost_16(String_t* value)
	{
		___m_DnsSafeHost_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_17() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Flags_17)); }
	inline uint64_t get_m_Flags_17() const { return ___m_Flags_17; }
	inline uint64_t* get_address_of_m_Flags_17() { return &___m_Flags_17; }
	inline void set_m_Flags_17(uint64_t value)
	{
		___m_Flags_17 = value;
	}

	inline static int32_t get_offset_of_m_Info_18() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Info_18)); }
	inline UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * get_m_Info_18() const { return ___m_Info_18; }
	inline UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E ** get_address_of_m_Info_18() { return &___m_Info_18; }
	inline void set_m_Info_18(UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * value)
	{
		___m_Info_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_19() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_iriParsing_19)); }
	inline bool get_m_iriParsing_19() const { return ___m_iriParsing_19; }
	inline bool* get_address_of_m_iriParsing_19() { return &___m_iriParsing_19; }
	inline void set_m_iriParsing_19(bool value)
	{
		___m_iriParsing_19 = value;
	}
};

struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ____WSchars_28;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_20() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_ConfigInitialized_20)); }
	inline bool get_s_ConfigInitialized_20() const { return ___s_ConfigInitialized_20; }
	inline bool* get_address_of_s_ConfigInitialized_20() { return &___s_ConfigInitialized_20; }
	inline void set_s_ConfigInitialized_20(bool value)
	{
		___s_ConfigInitialized_20 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_21() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_ConfigInitializing_21)); }
	inline bool get_s_ConfigInitializing_21() const { return ___s_ConfigInitializing_21; }
	inline bool* get_address_of_s_ConfigInitializing_21() { return &___s_ConfigInitializing_21; }
	inline void set_s_ConfigInitializing_21(bool value)
	{
		___s_ConfigInitializing_21 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_22() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_IdnScope_22)); }
	inline int32_t get_s_IdnScope_22() const { return ___s_IdnScope_22; }
	inline int32_t* get_address_of_s_IdnScope_22() { return &___s_IdnScope_22; }
	inline void set_s_IdnScope_22(int32_t value)
	{
		___s_IdnScope_22 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_23() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_IriParsing_23)); }
	inline bool get_s_IriParsing_23() const { return ___s_IriParsing_23; }
	inline bool* get_address_of_s_IriParsing_23() { return &___s_IriParsing_23; }
	inline void set_s_IriParsing_23(bool value)
	{
		___s_IriParsing_23 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_24() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___useDotNetRelativeOrAbsolute_24)); }
	inline bool get_useDotNetRelativeOrAbsolute_24() const { return ___useDotNetRelativeOrAbsolute_24; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_24() { return &___useDotNetRelativeOrAbsolute_24; }
	inline void set_useDotNetRelativeOrAbsolute_24(bool value)
	{
		___useDotNetRelativeOrAbsolute_24 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_25() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___IsWindowsFileSystem_25)); }
	inline bool get_IsWindowsFileSystem_25() const { return ___IsWindowsFileSystem_25; }
	inline bool* get_address_of_IsWindowsFileSystem_25() { return &___IsWindowsFileSystem_25; }
	inline void set_IsWindowsFileSystem_25(bool value)
	{
		___IsWindowsFileSystem_25 = value;
	}

	inline static int32_t get_offset_of_s_initLock_26() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_initLock_26)); }
	inline RuntimeObject * get_s_initLock_26() const { return ___s_initLock_26; }
	inline RuntimeObject ** get_address_of_s_initLock_26() { return &___s_initLock_26; }
	inline void set_s_initLock_26(RuntimeObject * value)
	{
		___s_initLock_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_26), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_27() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___HexLowerChars_27)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_HexLowerChars_27() const { return ___HexLowerChars_27; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_HexLowerChars_27() { return &___HexLowerChars_27; }
	inline void set_HexLowerChars_27(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___HexLowerChars_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_27), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_28() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ____WSchars_28)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get__WSchars_28() const { return ____WSchars_28; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of__WSchars_28() { return &____WSchars_28; }
	inline void set__WSchars_28(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		____WSchars_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_28), (void*)value);
	}
};


// UnityEngine.Advertisements.Advertisement
struct  Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139  : public RuntimeObject
{
public:

public:
};

struct Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields
{
public:
	// System.Boolean UnityEngine.Advertisements.Advertisement::s_Initialized
	bool ___s_Initialized_0;
	// UnityEngine.Advertisements.IPlatform UnityEngine.Advertisements.Advertisement::s_Platform
	RuntimeObject* ___s_Platform_1;
	// System.Boolean UnityEngine.Advertisements.Advertisement::s_EditorSupportedPlatform
	bool ___s_EditorSupportedPlatform_2;
	// System.Boolean UnityEngine.Advertisements.Advertisement::s_Showing
	bool ___s_Showing_3;
	// UnityEngine.Advertisements.Advertisement_DebugLevelInternal UnityEngine.Advertisements.Advertisement::s_DebugLevel
	int32_t ___s_DebugLevel_4;
	// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs> UnityEngine.Advertisements.Advertisement::<>f__amU24cache0
	EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * ___U3CU3Ef__amU24cache0_5;
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.Advertisement::<>f__amU24cache1
	EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * ___U3CU3Ef__amU24cache1_6;

public:
	inline static int32_t get_offset_of_s_Initialized_0() { return static_cast<int32_t>(offsetof(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields, ___s_Initialized_0)); }
	inline bool get_s_Initialized_0() const { return ___s_Initialized_0; }
	inline bool* get_address_of_s_Initialized_0() { return &___s_Initialized_0; }
	inline void set_s_Initialized_0(bool value)
	{
		___s_Initialized_0 = value;
	}

	inline static int32_t get_offset_of_s_Platform_1() { return static_cast<int32_t>(offsetof(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields, ___s_Platform_1)); }
	inline RuntimeObject* get_s_Platform_1() const { return ___s_Platform_1; }
	inline RuntimeObject** get_address_of_s_Platform_1() { return &___s_Platform_1; }
	inline void set_s_Platform_1(RuntimeObject* value)
	{
		___s_Platform_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Platform_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_EditorSupportedPlatform_2() { return static_cast<int32_t>(offsetof(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields, ___s_EditorSupportedPlatform_2)); }
	inline bool get_s_EditorSupportedPlatform_2() const { return ___s_EditorSupportedPlatform_2; }
	inline bool* get_address_of_s_EditorSupportedPlatform_2() { return &___s_EditorSupportedPlatform_2; }
	inline void set_s_EditorSupportedPlatform_2(bool value)
	{
		___s_EditorSupportedPlatform_2 = value;
	}

	inline static int32_t get_offset_of_s_Showing_3() { return static_cast<int32_t>(offsetof(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields, ___s_Showing_3)); }
	inline bool get_s_Showing_3() const { return ___s_Showing_3; }
	inline bool* get_address_of_s_Showing_3() { return &___s_Showing_3; }
	inline void set_s_Showing_3(bool value)
	{
		___s_Showing_3 = value;
	}

	inline static int32_t get_offset_of_s_DebugLevel_4() { return static_cast<int32_t>(offsetof(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields, ___s_DebugLevel_4)); }
	inline int32_t get_s_DebugLevel_4() const { return ___s_DebugLevel_4; }
	inline int32_t* get_address_of_s_DebugLevel_4() { return &___s_DebugLevel_4; }
	inline void set_s_DebugLevel_4(int32_t value)
	{
		___s_DebugLevel_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_5() { return static_cast<int32_t>(offsetof(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields, ___U3CU3Ef__amU24cache0_5)); }
	inline EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * get_U3CU3Ef__amU24cache0_5() const { return ___U3CU3Ef__amU24cache0_5; }
	inline EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 ** get_address_of_U3CU3Ef__amU24cache0_5() { return &___U3CU3Ef__amU24cache0_5; }
	inline void set_U3CU3Ef__amU24cache0_5(EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * value)
	{
		___U3CU3Ef__amU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache0_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_6() { return static_cast<int32_t>(offsetof(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields, ___U3CU3Ef__amU24cache1_6)); }
	inline EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * get_U3CU3Ef__amU24cache1_6() const { return ___U3CU3Ef__amU24cache1_6; }
	inline EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 ** get_address_of_U3CU3Ef__amU24cache1_6() { return &___U3CU3Ef__amU24cache1_6; }
	inline void set_U3CU3Ef__amU24cache1_6(EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * value)
	{
		___U3CU3Ef__amU24cache1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache1_6), (void*)value);
	}
};


// UnityEngine.Advertisements.Android.Platform
struct  Platform_t90C2BEBA869F5A23475D57DE636EEFBB4507A833  : public AndroidJavaProxy_t72F996A75B4B771B9572C3770CF2D2C7A5B4783D
{
public:
	// UnityEngine.AndroidJavaObject UnityEngine.Advertisements.Android.Platform::m_CurrentActivity
	AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * ___m_CurrentActivity_4;
	// UnityEngine.AndroidJavaClass UnityEngine.Advertisements.Android.Platform::m_UnityAds
	AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * ___m_UnityAds_5;
	// UnityEngine.Advertisements.CallbackExecutor UnityEngine.Advertisements.Android.Platform::m_CallbackExecutor
	CallbackExecutor_tB2DFCCED2168CFD8C1F6FD0C21679DA386B8CA78 * ___m_CallbackExecutor_6;
	// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs> UnityEngine.Advertisements.Android.Platform::OnStart
	EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * ___OnStart_7;
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.Android.Platform::OnFinish
	EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * ___OnFinish_8;

public:
	inline static int32_t get_offset_of_m_CurrentActivity_4() { return static_cast<int32_t>(offsetof(Platform_t90C2BEBA869F5A23475D57DE636EEFBB4507A833, ___m_CurrentActivity_4)); }
	inline AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * get_m_CurrentActivity_4() const { return ___m_CurrentActivity_4; }
	inline AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D ** get_address_of_m_CurrentActivity_4() { return &___m_CurrentActivity_4; }
	inline void set_m_CurrentActivity_4(AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * value)
	{
		___m_CurrentActivity_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentActivity_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_UnityAds_5() { return static_cast<int32_t>(offsetof(Platform_t90C2BEBA869F5A23475D57DE636EEFBB4507A833, ___m_UnityAds_5)); }
	inline AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * get_m_UnityAds_5() const { return ___m_UnityAds_5; }
	inline AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE ** get_address_of_m_UnityAds_5() { return &___m_UnityAds_5; }
	inline void set_m_UnityAds_5(AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * value)
	{
		___m_UnityAds_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UnityAds_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallbackExecutor_6() { return static_cast<int32_t>(offsetof(Platform_t90C2BEBA869F5A23475D57DE636EEFBB4507A833, ___m_CallbackExecutor_6)); }
	inline CallbackExecutor_tB2DFCCED2168CFD8C1F6FD0C21679DA386B8CA78 * get_m_CallbackExecutor_6() const { return ___m_CallbackExecutor_6; }
	inline CallbackExecutor_tB2DFCCED2168CFD8C1F6FD0C21679DA386B8CA78 ** get_address_of_m_CallbackExecutor_6() { return &___m_CallbackExecutor_6; }
	inline void set_m_CallbackExecutor_6(CallbackExecutor_tB2DFCCED2168CFD8C1F6FD0C21679DA386B8CA78 * value)
	{
		___m_CallbackExecutor_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CallbackExecutor_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnStart_7() { return static_cast<int32_t>(offsetof(Platform_t90C2BEBA869F5A23475D57DE636EEFBB4507A833, ___OnStart_7)); }
	inline EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * get_OnStart_7() const { return ___OnStart_7; }
	inline EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 ** get_address_of_OnStart_7() { return &___OnStart_7; }
	inline void set_OnStart_7(EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * value)
	{
		___OnStart_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStart_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnFinish_8() { return static_cast<int32_t>(offsetof(Platform_t90C2BEBA869F5A23475D57DE636EEFBB4507A833, ___OnFinish_8)); }
	inline EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * get_OnFinish_8() const { return ___OnFinish_8; }
	inline EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 ** get_address_of_OnFinish_8() { return &___OnFinish_8; }
	inline void set_OnFinish_8(EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * value)
	{
		___OnFinish_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFinish_8), (void*)value);
	}
};


// UnityEngine.Advertisements.FinishEventArgs
struct  FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// System.String UnityEngine.Advertisements.FinishEventArgs::<placementId>k__BackingField
	String_t* ___U3CplacementIdU3Ek__BackingField_1;
	// UnityEngine.Advertisements.ShowResult UnityEngine.Advertisements.FinishEventArgs::<showResult>k__BackingField
	int32_t ___U3CshowResultU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CplacementIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D, ___U3CplacementIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CplacementIdU3Ek__BackingField_1() const { return ___U3CplacementIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CplacementIdU3Ek__BackingField_1() { return &___U3CplacementIdU3Ek__BackingField_1; }
	inline void set_U3CplacementIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CplacementIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CplacementIdU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CshowResultU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D, ___U3CshowResultU3Ek__BackingField_2)); }
	inline int32_t get_U3CshowResultU3Ek__BackingField_2() const { return ___U3CshowResultU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CshowResultU3Ek__BackingField_2() { return &___U3CshowResultU3Ek__BackingField_2; }
	inline void set_U3CshowResultU3Ek__BackingField_2(int32_t value)
	{
		___U3CshowResultU3Ek__BackingField_2 = value;
	}
};


// UnityEngine.Advertisements.iOS.Platform_<UnityAdsDidFinish>c__AnonStorey4
struct  U3CUnityAdsDidFinishU3Ec__AnonStorey4_tF3998F44D42BAA24F6FC8B71E5E2443B74010AB7  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.ShowResult UnityEngine.Advertisements.iOS.Platform_<UnityAdsDidFinish>c__AnonStorey4::showResult
	int32_t ___showResult_0;
	// UnityEngine.Advertisements.iOS.Platform_<UnityAdsDidFinish>c__AnonStorey3 UnityEngine.Advertisements.iOS.Platform_<UnityAdsDidFinish>c__AnonStorey4::<>f__refU243
	U3CUnityAdsDidFinishU3Ec__AnonStorey3_tFF312E3E401419649E7A80CB5F522EFBD8C7A1E1 * ___U3CU3Ef__refU243_1;

public:
	inline static int32_t get_offset_of_showResult_0() { return static_cast<int32_t>(offsetof(U3CUnityAdsDidFinishU3Ec__AnonStorey4_tF3998F44D42BAA24F6FC8B71E5E2443B74010AB7, ___showResult_0)); }
	inline int32_t get_showResult_0() const { return ___showResult_0; }
	inline int32_t* get_address_of_showResult_0() { return &___showResult_0; }
	inline void set_showResult_0(int32_t value)
	{
		___showResult_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU243_1() { return static_cast<int32_t>(offsetof(U3CUnityAdsDidFinishU3Ec__AnonStorey4_tF3998F44D42BAA24F6FC8B71E5E2443B74010AB7, ___U3CU3Ef__refU243_1)); }
	inline U3CUnityAdsDidFinishU3Ec__AnonStorey3_tFF312E3E401419649E7A80CB5F522EFBD8C7A1E1 * get_U3CU3Ef__refU243_1() const { return ___U3CU3Ef__refU243_1; }
	inline U3CUnityAdsDidFinishU3Ec__AnonStorey3_tFF312E3E401419649E7A80CB5F522EFBD8C7A1E1 ** get_address_of_U3CU3Ef__refU243_1() { return &___U3CU3Ef__refU243_1; }
	inline void set_U3CU3Ef__refU243_1(U3CUnityAdsDidFinishU3Ec__AnonStorey3_tFF312E3E401419649E7A80CB5F522EFBD8C7A1E1 * value)
	{
		___U3CU3Ef__refU243_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__refU243_1), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Texture
struct  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// System.Action`1<UnityEngine.Advertisements.CallbackExecutor>
struct  Action_1_t089491CF3BD2890A851D82690754A8F0DE899372  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.Advertisements.ShowResult>
struct  Action_1_tCF5AFC4513076B0E4A471BEF3A11BFBBDF57F857  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>
struct  EventHandler_1_t674DACB444A256903A17FB5F7644CEB641C01927  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>
struct  EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>
struct  EventHandler_1_tB57D8AF0A9FA3BFE6ABEC77DE046E4A20526A09A  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>
struct  EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95  : public MulticastDelegate_t
{
public:

public:
};


// System.Runtime.Serialization.SerializationException
struct  SerializationException_tA1FDFF6779406E688C2192E71C38DBFD7A4A2210  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

struct SerializationException_tA1FDFF6779406E688C2192E71C38DBFD7A4A2210_StaticFields
{
public:
	// System.String System.Runtime.Serialization.SerializationException::_nullMessage
	String_t* ____nullMessage_17;

public:
	inline static int32_t get_offset_of__nullMessage_17() { return static_cast<int32_t>(offsetof(SerializationException_tA1FDFF6779406E688C2192E71C38DBFD7A4A2210_StaticFields, ____nullMessage_17)); }
	inline String_t* get__nullMessage_17() const { return ____nullMessage_17; }
	inline String_t** get_address_of__nullMessage_17() { return &____nullMessage_17; }
	inline void set__nullMessage_17(String_t* value)
	{
		____nullMessage_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nullMessage_17), (void*)value);
	}
};


// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_ConstructorDelegate
struct  ConstructorDelegate_t758C58A6B467BA586E2C6B57A535729A620BFCEC  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_GetDelegate
struct  GetDelegate_t5384142A3E4A970422627B6C02B4EB4319934A8F  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_SetDelegate
struct  SetDelegate_tB85E10DD9F713CAE7ED82A18744F73AED4EA6D04  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_SetDelegate>>>
struct  ThreadSafeDictionaryValueFactory_2_t00EBEAFF4AF9A2C099AB2D1FEE2582299607C9B2  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_GetDelegate>>
struct  ThreadSafeDictionaryValueFactory_2_t64ADFF2082641786DBFD5FFA3B40EBC3F9576E34  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_ThreadSafeDictionaryValueFactory`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_ConstructorDelegate>
struct  ThreadSafeDictionaryValueFactory_2_tAE7D4B6776CD9AEF60B6EC3F80B1E2FEBD1D0F0C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.iOS.Platform_unityAdsDidError
struct  unityAdsDidError_t0AEE1AF310020AF7C9F6A7881F50B21996A32C61  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.iOS.Platform_unityAdsDidFinish
struct  unityAdsDidFinish_t9EE8992F28B4D62991C98D7D85A9E93A6835E045  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.iOS.Platform_unityAdsDidStart
struct  unityAdsDidStart_tD78BF20784F7416774E14ADE453F6F4B4428D7FA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.iOS.Platform_unityAdsReady
struct  unityAdsReady_t716CB3207A4D591AFD38E610CC8DC5EA4DE62A67  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.GUI_WindowFunction
struct  WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Texture2D
struct  Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.Advertisements.CallbackExecutor
struct  CallbackExecutor_tB2DFCCED2168CFD8C1F6FD0C21679DA386B8CA78  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Collections.Generic.Queue`1<System.Action`1<UnityEngine.Advertisements.CallbackExecutor>> UnityEngine.Advertisements.CallbackExecutor::s_Queue
	Queue_1_tBE60FA9EC7CEAC6A2101CA6BF8E09035C8DA2F3E * ___s_Queue_4;

public:
	inline static int32_t get_offset_of_s_Queue_4() { return static_cast<int32_t>(offsetof(CallbackExecutor_tB2DFCCED2168CFD8C1F6FD0C21679DA386B8CA78, ___s_Queue_4)); }
	inline Queue_1_tBE60FA9EC7CEAC6A2101CA6BF8E09035C8DA2F3E * get_s_Queue_4() const { return ___s_Queue_4; }
	inline Queue_1_tBE60FA9EC7CEAC6A2101CA6BF8E09035C8DA2F3E ** get_address_of_s_Queue_4() { return &___s_Queue_4; }
	inline void set_s_Queue_4(Queue_1_tBE60FA9EC7CEAC6A2101CA6BF8E09035C8DA2F3E * value)
	{
		___s_Queue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Queue_4), (void*)value);
	}
};


// UnityEngine.Advertisements.Editor.Placeholder
struct  Placeholder_tB58246E9925EEB8DEFBD0EC187EC59F96EF4E244  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Texture2D UnityEngine.Advertisements.Editor.Placeholder::m_LandscapeTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___m_LandscapeTexture_4;
	// UnityEngine.Texture2D UnityEngine.Advertisements.Editor.Placeholder::m_PortraitTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___m_PortraitTexture_5;
	// System.Boolean UnityEngine.Advertisements.Editor.Placeholder::m_Showing
	bool ___m_Showing_6;
	// System.String UnityEngine.Advertisements.Editor.Placeholder::m_PlacementId
	String_t* ___m_PlacementId_7;
	// System.Boolean UnityEngine.Advertisements.Editor.Placeholder::m_AllowSkip
	bool ___m_AllowSkip_8;
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.Editor.Placeholder::OnFinish
	EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * ___OnFinish_9;

public:
	inline static int32_t get_offset_of_m_LandscapeTexture_4() { return static_cast<int32_t>(offsetof(Placeholder_tB58246E9925EEB8DEFBD0EC187EC59F96EF4E244, ___m_LandscapeTexture_4)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_m_LandscapeTexture_4() const { return ___m_LandscapeTexture_4; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_m_LandscapeTexture_4() { return &___m_LandscapeTexture_4; }
	inline void set_m_LandscapeTexture_4(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___m_LandscapeTexture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LandscapeTexture_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PortraitTexture_5() { return static_cast<int32_t>(offsetof(Placeholder_tB58246E9925EEB8DEFBD0EC187EC59F96EF4E244, ___m_PortraitTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_m_PortraitTexture_5() const { return ___m_PortraitTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_m_PortraitTexture_5() { return &___m_PortraitTexture_5; }
	inline void set_m_PortraitTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___m_PortraitTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PortraitTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Showing_6() { return static_cast<int32_t>(offsetof(Placeholder_tB58246E9925EEB8DEFBD0EC187EC59F96EF4E244, ___m_Showing_6)); }
	inline bool get_m_Showing_6() const { return ___m_Showing_6; }
	inline bool* get_address_of_m_Showing_6() { return &___m_Showing_6; }
	inline void set_m_Showing_6(bool value)
	{
		___m_Showing_6 = value;
	}

	inline static int32_t get_offset_of_m_PlacementId_7() { return static_cast<int32_t>(offsetof(Placeholder_tB58246E9925EEB8DEFBD0EC187EC59F96EF4E244, ___m_PlacementId_7)); }
	inline String_t* get_m_PlacementId_7() const { return ___m_PlacementId_7; }
	inline String_t** get_address_of_m_PlacementId_7() { return &___m_PlacementId_7; }
	inline void set_m_PlacementId_7(String_t* value)
	{
		___m_PlacementId_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PlacementId_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllowSkip_8() { return static_cast<int32_t>(offsetof(Placeholder_tB58246E9925EEB8DEFBD0EC187EC59F96EF4E244, ___m_AllowSkip_8)); }
	inline bool get_m_AllowSkip_8() const { return ___m_AllowSkip_8; }
	inline bool* get_address_of_m_AllowSkip_8() { return &___m_AllowSkip_8; }
	inline void set_m_AllowSkip_8(bool value)
	{
		___m_AllowSkip_8 = value;
	}

	inline static int32_t get_offset_of_OnFinish_9() { return static_cast<int32_t>(offsetof(Placeholder_tB58246E9925EEB8DEFBD0EC187EC59F96EF4E244, ___OnFinish_9)); }
	inline EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * get_OnFinish_9() const { return ___OnFinish_9; }
	inline EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 ** get_address_of_OnFinish_9() { return &___OnFinish_9; }
	inline void set_OnFinish_9(EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * value)
	{
		___OnFinish_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFinish_9), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_tEF7B0C36EC296277C5C943CFF843529E0B8B5343  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D  m_Items[1];

public:
	inline KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t111EE7D53C51A47FE69FC3398DE007F7E100593E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * m_Items[1];

public:
	inline ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB * m_Items[1];

public:
	inline ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PropertyInfo_t * m_Items[1];

public:
	inline PropertyInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PropertyInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FieldInfo_t * m_Items[1];

public:
	inline FieldInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m2B63E0185E48A8399ABDEB01EBEA4EF5A05797DC_gshared (EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32Enum>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m8672DDC58300CA227FC37981067B766C9879344B_gshared (Action_1_tABA1E3BFA092E3309A0ECC53722E4F9826DCE983 * __this, int32_t ___obj0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_GetStatic_TisRuntimeObject_mD4FBBF3C4F92BC9A9C13E55F4DACE4B3B8D20ADD_gshared (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * __this, String_t* ___fieldName0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mCB8164FB05F8DCF99E098ADC5E13E96FEF6FC4E9_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_CallStatic_TisRuntimeObject_mC00F70734976E6B3DD8281EB6EBC457B19762E9F_gshared (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_CallStatic_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m1E6217B3D2813D788B7489F3AC377BDF21740AA0_gshared (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Call_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mF7220A3D48BA18737AA0C7DAF0828822275A69A6_gshared (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m57EE1ACB271D15DD0E2DDD6B28805C31799A0976_gshared (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m57D20E9B6532A644845C835306D5BCBCD3163964_gshared (Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m12D1C0BBE742C2537335B7E2B71F7E42A421A6FD_gshared (Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_m6013DB8A542ACA15F662B6832ED389BB061EFEDE_gshared (Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m0CE0B6919A09EFFBB1EBA5B5DFEF50E4F8A89CFA_gshared_inline (Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC9CB173526C44311D7B2B3B7C03782A9D4A66ED0_gshared (Dictionary_2_t2C8E1AAACF23306CF00CADFFC35DB50456AEBC51 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m73E9C46263261A02737618B638F402647EB5BEF7_gshared (Dictionary_2_t2C8E1AAACF23306CF00CADFFC35DB50456AEBC51 * __this, RuntimeObject * ___key0, bool ___value1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared (EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3 * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m464B4BACDAF9E5725CB85901DCC619C88B6A5094_gshared (Dictionary_2_t2C8E1AAACF23306CF00CADFFC35DB50456AEBC51 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_get_Item_m15412CC245FD8E187851257D6B553E4E2FADA03B_gshared (Dictionary_2_t2C8E1AAACF23306CF00CADFFC35DB50456AEBC51 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * Dictionary_2_get_Keys_m079EE5437EE7D904E9E3F798041C1108B96B3AC3_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * Dictionary_2_get_Values_m58CC32586C31C6F38B730DE7CD79A1FFE9109BA4_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m0EC0FF0E4C6FE91D15CEE92696B25109A202B942_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB  Dictionary_2_GetEnumerator_mF1CF1D13F3E70C6D20D96D9AC88E44454E4C0053_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadSafeDictionaryValueFactory_2__ctor_m26DA3A3B46F85F517147B54D4E163677B20F8657_gshared (ThreadSafeDictionaryValueFactory_2_t50E029BB77EE4A253FE8C1475B2A2A9EB05B4074 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadSafeDictionary_2__ctor_mB036B01C6686A07217293BBD6DD653811DFDC6AD_gshared (ThreadSafeDictionary_2_tB169B82FA3106EDC684BE8429307E8F0E990B25C * __this, ThreadSafeDictionaryValueFactory_2_t50E029BB77EE4A253FE8C1475B2A2A9EB05B4074 * ___valueFactory0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3555BF18856EDD7E8C7FF7D2251879DFA5E5E3BC_gshared (Dictionary_2_t6A813DEF18A9954A956AC6D75592B16702986F7D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m783A0935E40FCB80D5940E8CCF0EFEFE41D7C7D3_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);

// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_get_isSupported_mEF8C394828CBA7F25F78C7685998832AE5EA1C2B (const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672 (const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Android.Platform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform__ctor_m0C70085D7025B71BBDD57EDCCE173DD0C29CA7CF (Platform_t90C2BEBA869F5A23475D57DE636EEFBB4507A833 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform__ctor_m7C7EAAF2110086078A0D153842CBDDDFF80B4564 (Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform__ctor_mD18C2812C369925CADA34D1666A0C24B1E81B9AF (UnsupportedPlatform_t5FA6C225FDA5FF02CA0C0297631D99C8C4C2E5C3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mBAA6702C240E37B2A834AA74E4FDC15A3A5589A9 (Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Advertisement::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Load_m0CCB92C442B60C4A4424AD3CE013F85BE92C4173 (const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Editor.Platform::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform__ctor_mF1303477BC0694896FD4DD958776D5AA4FEBF61F (Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740 * __this, String_t* ___extensionPath0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.Advertisement::get_initializeOnStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_get_initializeOnStartup_mCCD49EC5AF9B4824958ACB7E8D5C0735A8362731 (const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.Advertisement::get_gameId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Advertisement_get_gameId_m564EA6320413ADA25F98EEBCD34258F8723DCF43 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.Advertisement::get_testMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_get_testMode_m929DB85E1775EF4F68F8D91AFC0C3C063A2B12A7 (const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Initialize_m73F6527531EAE2AF5D9949AA4B1286C60DBDFDB0 (String_t* ___gameId0, bool ___testMode1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.UnityAdsSettings::get_initializeOnStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityAdsSettings_get_initializeOnStartup_m102DCCBEFE5A6CF0FB86E8C0ED5FAC7513765DFE (const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.UnityAdsSettings::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityAdsSettings_get_enabled_m10C21E79943A9556FC453ED50DD766505C9B5E72 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.Advertisement::IsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_IsEnabled_m320F412BAEDF0D57935B95668A2DAA81714F033D (const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.UnityAdsSettings::get_testMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityAdsSettings_get_testMode_mBE2C1B2AD3C213648275C58D70BF9FE9529C815C (const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.UnityAdsSettings::GetGameId(UnityEngine.RuntimePlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityAdsSettings_GetGameId_m263E063973598807F083D4706FE9296E56A25870 (int32_t ___platform0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isInitialized()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Advertisement_get_isInitialized_mC03067B373FC20D13E06648062797A096BF3D653_inline (const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Advertisement::set_isInitialized(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Advertisement_set_isInitialized_m7DFD072CE302CCEBBA86754D1EB2CD6F2ACAC067_inline (bool ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m4549AB2D4F837932DB02044CC1F026F427140D3C (EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m2B63E0185E48A8399ABDEB01EBEA4EF5A05797DC_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m49B02EDEB592566F4F3153685ABDEFF1AE1C6F48 (EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m2B63E0185E48A8399ABDEB01EBEA4EF5A05797DC_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Advertisements.MetaData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaData__ctor_m606971BF2B62CA61F60A8598CE58DE11E444411F (MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * __this, String_t* ___category0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.MetaData::Set(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaData_Set_mC1E69DFD59EB90D1406957F5A03BC03F08421C78 (MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_mC66901DE17E8F4F5BCA46CF3A4DCB34AF245CF99 (const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Advertisement::SetMetaData(UnityEngine.Advertisements.MetaData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_SetMetaData_m9E5F80A365BCD419877A5BA460A19AA372CEE197 (MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * ___metaData0, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.Advertisement::get_version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Advertisement_get_version_m130B026F569F68BE99A0D89017044397DEF46C0A (const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.Advertisement::IsReady(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_IsReady_m8BB9F1590814065032F590E8B12686648D679396 (String_t* ___placementId0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Advertisements.PlacementState UnityEngine.Advertisements.Advertisement::GetPlacementState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Advertisement_GetPlacementState_m2DC0A5C481A8EF49BB6FD3E0B46958F12A82711D (String_t* ___placementId0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String,UnityEngine.Advertisements.ShowOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_m0B1BB292081708D0B39D54156BE04297D694D653 (String_t* ___placementId0, ShowOptions_t6637C67D4907C169839DA10D810B696A19941904 * ___showOptions1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Advertisement/<Show>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowU3Ec__AnonStorey0__ctor_m7A456803E9063041B330BC82377DBD46EE9F226B (U3CShowU3Ec__AnonStorey0_t3F78313FF5E87445044283B31B3DB8DF4BBCA6B4 * __this, const RuntimeMethod* method);
// System.Action`1<UnityEngine.Advertisements.ShowResult> UnityEngine.Advertisements.ShowOptions::get_resultCallback()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Action_1_tCF5AFC4513076B0E4A471BEF3A11BFBBDF57F857 * ShowOptions_get_resultCallback_m27CD28A4374E4A248ED438A34CFC06DAFF4CC5A5_inline (ShowOptions_t6637C67D4907C169839DA10D810B696A19941904 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Advertisement/<Show>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowU3Ec__AnonStorey1__ctor_m15621250BE36587E9C14FF0782B48A4561A4E6E2 (U3CShowU3Ec__AnonStorey1_t7C410F6A2B71DAAC4DAEB5851994E08082C63A80 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.ShowOptions::get_gamerSid()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ShowOptions_get_gamerSid_mAC928CD8849A7210ACC5D13584D7E818E5B0CE9E_inline (ShowOptions_t6637C67D4907C169839DA10D810B696A19941904 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debug_get_isDebugBuild_mED5A7963C7B055A9ACC5565862BBBA6F3D86EDE8 (const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Advertisement::set_isShowing(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Advertisement_set_isShowing_mE5B671E7E476A92F42DF678E54A570F56E4D3CC2_inline (bool ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Advertisements.ShowResult UnityEngine.Advertisements.FinishEventArgs::get_showResult()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t FinishEventArgs_get_showResult_m2E1ABEAC1FB9E9480FAA50FEC6F199FB8F35AC61_inline (FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Advertisements.ShowResult>::Invoke(!0)
inline void Action_1_Invoke_m6431A46044768588D11B4BFFC429BC5D372B9F22 (Action_1_tCF5AFC4513076B0E4A471BEF3A11BFBBDF57F857 * __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCF5AFC4513076B0E4A471BEF3A11BFBBDF57F857 *, int32_t, const RuntimeMethod*))Action_1_Invoke_m8672DDC58300CA227FC37981067B766C9879344B_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m159565DEF4041D92C0763D1F4A0684140241CD9A (AndroidJavaProxy_t72F996A75B4B771B9572C3770CF2D2C7A5B4783D * __this, String_t* ___javaInterface0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mAE416E812DB3911279C0FE87A7760247CE1BBFA8 (AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * __this, String_t* ___className0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * AndroidJavaObject_GetStatic_TisAndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_m4C3EAB3C9E067EBB6D0CE6A84B685B0105163602 (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * (*) (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D *, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_mD4FBBF3C4F92BC9A9C13E55F4DACE4B3B8D20ADD_gshared)(__this, ___fieldName0, method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mB0B45A19A5871EF407D7B09E0EB76003496BA4F0 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Advertisements.CallbackExecutor>()
inline CallbackExecutor_tB2DFCCED2168CFD8C1F6FD0C21679DA386B8CA78 * GameObject_AddComponent_TisCallbackExecutor_tB2DFCCED2168CFD8C1F6FD0C21679DA386B8CA78_mCC2C32F9E49A29594A990104922CABCEE39656BC (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  CallbackExecutor_tB2DFCCED2168CFD8C1F6FD0C21679DA386B8CA78 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mCB8164FB05F8DCF99E098ADC5E13E96FEF6FC4E9_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___target0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_CallStatic_TisString_t_mE1D1D49B8FA114E77A891F5EB629D9C7F33443C3 (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D *, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mC00F70734976E6B3DD8281EB6EBC457B19762E9F_gshared)(__this, ___methodName0, ___args1, method);
}
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_CallStatic_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m1E6217B3D2813D788B7489F3AC377BDF21740AA0 (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D *, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m1E6217B3D2813D788B7489F3AC377BDF21740AA0_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_m12D78F5584C63F5D8B2344CBA8611EFBDDA669AF (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * AndroidJavaObject_CallStatic_TisAndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_m6CAE75FB51C5A02521C239A7232735573C51EAE7 (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * (*) (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D *, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mC00F70734976E6B3DD8281EB6EBC457B19762E9F_gshared)(__this, ___methodName0, ___args1, method);
}
// !!0 UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_Call_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mF7220A3D48BA18737AA0C7DAF0828822275A69A6 (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D *, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mF7220A3D48BA18737AA0C7DAF0828822275A69A6_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m39462EAD9AD82CBD90DEB4B7127F3D6C87A02BFA (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * __this, String_t* ___className0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.MetaData::get_category()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MetaData_get_category_mD5A4B8E5F7B8CD2334C420743D2D649B55CFE4B4_inline (MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_m0FEBE4E59445D8527C88C992AA2D00EEF749AB56 (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Advertisements.MetaData::get_Values()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* MetaData_get_Values_mCF0DEA12D879A640D3BB9D3F3492F1038CC86C42_inline (MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m70ABAD248D45E166CEC58AF007095CEC5E79B1DD_inline (KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D *, const RuntimeMethod*))KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m5D1180FCE84ACA037CCCF151B9696C4575634758_inline (KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D *, const RuntimeMethod*))KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline)(__this, method);
}
// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m57EE1ACB271D15DD0E2DDD6B28805C31799A0976 (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D *, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m57EE1ACB271D15DD0E2DDD6B28805C31799A0976_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void System.Collections.Generic.Queue`1<System.Action`1<UnityEngine.Advertisements.CallbackExecutor>>::.ctor()
inline void Queue_1__ctor_m35B9A4EE3C2F24AD505894592906B21408CD941F (Queue_1_tBE60FA9EC7CEAC6A2101CA6BF8E09035C8DA2F3E * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tBE60FA9EC7CEAC6A2101CA6BF8E09035C8DA2F3E *, const RuntimeMethod*))Queue_1__ctor_m57D20E9B6532A644845C835306D5BCBCD3163964_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Action`1<UnityEngine.Advertisements.CallbackExecutor>>::Enqueue(!0)
inline void Queue_1_Enqueue_m3308BE0D3E2E51C614586CCD44A94FA0114A74FB (Queue_1_tBE60FA9EC7CEAC6A2101CA6BF8E09035C8DA2F3E * __this, Action_1_t089491CF3BD2890A851D82690754A8F0DE899372 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tBE60FA9EC7CEAC6A2101CA6BF8E09035C8DA2F3E *, Action_1_t089491CF3BD2890A851D82690754A8F0DE899372 *, const RuntimeMethod*))Queue_1_Enqueue_m12D1C0BBE742C2537335B7E2B71F7E42A421A6FD_gshared)(__this, ___item0, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Action`1<UnityEngine.Advertisements.CallbackExecutor>>::Dequeue()
inline Action_1_t089491CF3BD2890A851D82690754A8F0DE899372 * Queue_1_Dequeue_m0899B365B923FB0EA04C3CEA846D77D591466A9A (Queue_1_tBE60FA9EC7CEAC6A2101CA6BF8E09035C8DA2F3E * __this, const RuntimeMethod* method)
{
	return ((  Action_1_t089491CF3BD2890A851D82690754A8F0DE899372 * (*) (Queue_1_tBE60FA9EC7CEAC6A2101CA6BF8E09035C8DA2F3E *, const RuntimeMethod*))Queue_1_Dequeue_m6013DB8A542ACA15F662B6832ED389BB061EFEDE_gshared)(__this, method);
}
// System.Void System.Action`1<UnityEngine.Advertisements.CallbackExecutor>::Invoke(!0)
inline void Action_1_Invoke_m4BBBBC75FFA78FFC723324C1AE3547B729B7B9A7 (Action_1_t089491CF3BD2890A851D82690754A8F0DE899372 * __this, CallbackExecutor_tB2DFCCED2168CFD8C1F6FD0C21679DA386B8CA78 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t089491CF3BD2890A851D82690754A8F0DE899372 *, CallbackExecutor_tB2DFCCED2168CFD8C1F6FD0C21679DA386B8CA78 *, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, ___obj0, method);
}
// System.Int32 System.Collections.Generic.Queue`1<System.Action`1<UnityEngine.Advertisements.CallbackExecutor>>::get_Count()
inline int32_t Queue_1_get_Count_mB77F587ACB1B3FDEF62424C1AF03B338665E09E4_inline (Queue_1_tBE60FA9EC7CEAC6A2101CA6BF8E09035C8DA2F3E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tBE60FA9EC7CEAC6A2101CA6BF8E09035C8DA2F3E *, const RuntimeMethod*))Queue_1_get_Count_m0CE0B6919A09EFFBB1EBA5B5DFEF50E4F8A89CFA_gshared_inline)(__this, method);
}
// System.Object UnityEngine.Advertisements.SimpleJson.SimpleJson::DeserializeObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SimpleJson_DeserializeObject_m8FBC827CD76E9F41BFA40E9C4CFEC06E27693068 (String_t* ___json0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Editor.Configuration::set_enabled(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Configuration_set_enabled_mCFF582C142C846C492A667B7A8245362CFBD6EEA_inline (Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor()
inline void Dictionary_2__ctor_mBD6D6B7E24C98373B567A88DEBFFD981338268CB (Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2 *, const RuntimeMethod*))Dictionary_2__ctor_mC9CB173526C44311D7B2B3B7C03782A9D4A66ED0_gshared)(__this, method);
}
// System.Void UnityEngine.Advertisements.Editor.Configuration::set_placements(System.Collections.Generic.Dictionary`2<System.String,System.Boolean>)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Configuration_set_placements_m58B284DCBFBB00F222415918863C70444FBC521C_inline (Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B * __this, Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Editor.Configuration::set_defaultPlacement(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Configuration_set_defaultPlacement_mD6EF91ACCF46A53B23423908BCFF542A042AE306_inline (Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> UnityEngine.Advertisements.Editor.Configuration::get_placements()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2 * Configuration_get_placements_m5E43756B0A956FA5E27C34D2A0E4A69AF46CA7D2_inline (Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Add(!0,!1)
inline void Dictionary_2_Add_m2C2E98147E134A4B7B225E6AC43FF58E27B65160 (Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2 * __this, String_t* ___key0, bool ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2 *, String_t*, bool, const RuntimeMethod*))Dictionary_2_Add_m73E9C46263261A02737618B638F402647EB5BEF7_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m0C86A87871AA8075791EF98499D34DA95ACB0E35 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Byte[] System.IO.File::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* File_ReadAllBytes_mF29468CED0B7B3B7C0971ACEBB16A38683718BEC (String_t* ___path0, const RuntimeMethod* method);
// System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageConversion_LoadImage_m94295492E96C38984406A23CC2A3931758ECE86B (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___tex0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data1, const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311 (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Advertisements.Editor.Placeholder::TextureFromFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * Placeholder_TextureFromFile_mEA41A60EBA22D1034360B534076DD2A5B680E917 (String_t* ___filePath0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150 (const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.GUI/WindowFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowFunction__ctor_m216C357C45DF9A8ABE74056B8BDB1B7F94EE2D81 (WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.GUI::ModalWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  GUI_ModalWindow_mE896E6C0DBC159C5F558D2589F88FDFA353C7B2A (int32_t ___id0, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___clientRect1, WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100 * ___func2, String_t* ___text3, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DrawTexture_m479A50461EA9C7F63C232F88D5C518E99005740E (Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___position0, Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___image1, int32_t ___scaleMode2, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_m0F0D437C533454A4BF0096E0DC55EEB66366E08D (Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___position0, String_t* ___text1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.FinishEventArgs::.ctor(System.String,UnityEngine.Advertisements.ShowResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishEventArgs__ctor_mAB2A8CF579F4A6921762B7B6D38CA6C89E1C951A (FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D * __this, String_t* ___placementId0, int32_t ___showResult1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m502F374415B712E741EE202C4029BF6352AE1F9B (EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * __this, RuntimeObject * ___sender0, FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *, RuntimeObject *, FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, ___sender0, ___e1, method);
}
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Advertisements.Editor.Placeholder>()
inline Placeholder_tB58246E9925EEB8DEFBD0EC187EC59F96EF4E244 * GameObject_AddComponent_TisPlaceholder_tB58246E9925EEB8DEFBD0EC187EC59F96EF4E244_m9FF5E1326EF984C05953980B29E50869467D33FC (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Placeholder_tB58246E9925EEB8DEFBD0EC187EC59F96EF4E244 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mCB8164FB05F8DCF99E098ADC5E13E96FEF6FC4E9_gshared)(__this, method);
}
// System.Void UnityEngine.Advertisements.Editor.Placeholder::add_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placeholder_add_OnFinish_m914B9D70F9BEC033E220D5A8E5CE3450D9BFFEC1 (Placeholder_tB58246E9925EEB8DEFBD0EC187EC59F96EF4E244 * __this, EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Editor.Placeholder::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placeholder_Load_m629C26B0255A1130B72FCE27634BAC9DD913C47C (Placeholder_tB58246E9925EEB8DEFBD0EC187EC59F96EF4E244 * __this, String_t* ___extensionPath0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Editor.Platform/<Initialize>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0__ctor_mBBCA23AC00C711603947F9A3D069600F3285C625 (U3CInitializeU3Ec__AnonStorey0_t01695F5A9E779590A7DB912A981E37FC10911AF8 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String System.Uri::EscapeDataString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_EscapeDataString_mE1095E7A694DF447B699676C651F5EA5D98A2925 (String_t* ___stringToEscape0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.Editor.Platform::get_version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Platform_get_version_m00A70AD251E3B70619787664E9F00BEA5F142913 (Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740 * __this, const RuntimeMethod* method);
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m49371BED70248F0FCE970CB4F2E39E9A688AAFA4 (String_t* ___separator0, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___value1, const RuntimeMethod* method);
// System.Net.WebRequest System.Net.WebRequest::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebRequest_t5668DA48802E9FE2F1DE5F5A770B218608B918C8 * WebRequest_Create_m1091F2B969C5E26C5F85E6368BAC1BCC38B61778 (String_t* ___requestUriString0, const RuntimeMethod* method);
// System.Void System.AsyncCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncCallback__ctor_m36AEE927E6AFEE950656BC5F7841682D23DE2EBB (AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.Editor.Platform::get_isInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_get_isInitialized_m92A3AB7F92AD9738FD6884D591C78AD59B5C7B76 (Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m690614F5C0F5AB08744CC307C64E1A0F24BF08B7 (Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m464B4BACDAF9E5725CB85901DCC619C88B6A5094_gshared)(__this, ___key0, method);
}
// System.Boolean UnityEngine.Advertisements.Editor.Platform::IsReady(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_IsReady_mEAFFC10B8FB903BB5489A4D75143130D917E3042 (Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740 * __this, String_t* ___placementId0, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.Editor.Configuration::get_defaultPlacement()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* Configuration_get_defaultPlacement_mCC8A06910123E7A8B660D4E08DF3C46447061261_inline (Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.StartEventArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartEventArgs__ctor_mDD562E24375595B4900123356F55D3277665D0B7 (StartEventArgs_t44F8C8482BBCC37963CFBC1C4D2F6473040717E2 * __this, String_t* ___placementId0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m47462ADFD588CFE2D265C8C4B07098C461BBA71A (EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * __this, RuntimeObject * ___sender0, StartEventArgs_t44F8C8482BBCC37963CFBC1C4D2F6473040717E2 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 *, RuntimeObject *, StartEventArgs_t44F8C8482BBCC37963CFBC1C4D2F6473040717E2 *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, ___sender0, ___e1, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Item(!0)
inline bool Dictionary_2_get_Item_mFB480723F4F6C60392B80393B87A7A1155D5D5B7 (Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m15412CC245FD8E187851257D6B553E4E2FADA03B_gshared)(__this, ___key0, method);
}
// System.Void UnityEngine.Advertisements.Editor.Placeholder::Show(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placeholder_Show_m0D4D914A796F60C1D9D22095B3CA5921C4E85569 (Placeholder_tB58246E9925EEB8DEFBD0EC187EC59F96EF4E244 * __this, String_t* ___placementId0, bool ___allowSkip1, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.FinishEventArgs::get_placementId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* FinishEventArgs_get_placementId_m04FB4D9DAE07868B56DDF32C420E56B5D191E274_inline (FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D * __this, const RuntimeMethod* method);
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_m6AD25C8043D76E8E4BB14554D59A69035A1908EB (StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Editor.Configuration::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration__ctor_m42ABE38058F98F5B29CFF4792026E3F5062924AC (Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B * __this, String_t* ___configurationResponse0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.Editor.Configuration::get_enabled()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Configuration_get_enabled_m7FE06FE9C7378CE267FAFC9F92B6D12B70F9E30C_inline (Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7 (EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.ErrorEventArgs::set_error(System.Int64)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ErrorEventArgs_set_error_mB7C612852765B7A153F5AF95C7FE0564F625842E_inline (ErrorEventArgs_t77C07CCB4554162961BBE00E3B7E52DDA8648409 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.ErrorEventArgs::set_message(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ErrorEventArgs_set_message_m0B56CCDB4119DA34736EB408EF1A8658A5B9FFCA_inline (ErrorEventArgs_t77C07CCB4554162961BBE00E3B7E52DDA8648409 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.FinishEventArgs::set_placementId(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FinishEventArgs_set_placementId_mEAF8F650A835C16B121D9DDAE27FC8EAF3705932_inline (FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.FinishEventArgs::set_showResult(UnityEngine.Advertisements.ShowResult)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FinishEventArgs_set_showResult_mC5E531083B18F5BD9FD8D7978869B3CA873E03A9_inline (FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997 (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void UnityEngine.Advertisements.MetaData::set_category(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MetaData_set_category_m2830E7B95AFD4002ADB2605B57798C955A91492D_inline (MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.SimpleJson.SimpleJson::SerializeObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleJson_SerializeObject_m6A632F316533FDB2537F43AB1DCFE17674319CDF (RuntimeObject * ___json0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.ReadyEventArgs::set_placementId(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ReadyEventArgs_set_placementId_m410E9AD00ED9A0802E9514E5FC7EB6F038B22CF0_inline (ReadyEventArgs_tA3E33B18240D91F48C92CC62CB5515388449E250 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3 (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1)
inline void Dictionary_2_Add_m233AC329D8947CF1508C9A2B8DE8EDCD68B6F4AA (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Keys()
inline KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * Dictionary_2_get_Keys_m7B57A5AC1B782E34F03B1FA3669A21FFD88BF3CB (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, const RuntimeMethod*))Dictionary_2_get_Keys_m079EE5437EE7D904E9E3F798041C1108B96B3AC3_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m935923B91B00967999E33EC4190EE547765C57E9 (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, String_t* ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, String_t*, RuntimeObject **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Values()
inline ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * Dictionary_2_get_Values_mEC63E5E39D1BC0EEAC921182387411F0D161ED68 (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, const RuntimeMethod*))Dictionary_2_get_Values_m58CC32586C31C6F38B730DE7CD79A1FFE9109BA4_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0)
inline RuntimeObject * Dictionary_2_get_Item_mB490F7029D7451FAF06E3020040E604B500BA3B2 (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear()
inline void Dictionary_2_Clear_m2AB63CDBD2D220F7E1A0FD9B1248CFEF78767A59 (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, const RuntimeMethod*))Dictionary_2_Clear_m0EC0FF0E4C6FE91D15CEE92696B25109A202B942_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89 (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared)(__this, ___key0, method);
}
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Advertisements.SimpleJson.JsonObject::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonObject_get_Count_m7DA809D33EA1B615AB672A68D574BA526BC285D0 (JsonObject_t5430387D9A9215A629850E012C366DBE5AD5A2B5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> UnityEngine.Advertisements.SimpleJson.JsonObject::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonObject_GetEnumerator_m6F17FCBC0A10A2360A581EAD9D31BBF1807D7FCB (JsonObject_t5430387D9A9215A629850E012C366DBE5AD5A2B5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count()
inline int32_t Dictionary_2_get_Count_m0D3273C04573CF4727CE038D0F933FD98C31E8CE (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, const RuntimeMethod*))Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(!0)
inline bool Dictionary_2_Remove_m52E8BCBCCDE8B8BEB6FF90ECC41E80C09A46B4C3 (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared)(__this, ___key0, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetEnumerator()
inline Enumerator_tEDEEE8F2491CB14C772ACA1B27EE8C40B2A06EC4  Dictionary_2_GetEnumerator_mDE657578679707F752B4AB0F30BBCDE434A6EA40 (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tEDEEE8F2491CB14C772ACA1B27EE8C40B2A06EC4  (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mF1CF1D13F3E70C6D20D96D9AC88E44454E4C0053_gshared)(__this, method);
}
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::.ctor(System.Object,System.IntPtr)
inline void ThreadSafeDictionaryValueFactory_2__ctor_m2FD7DC8F16BE8C81B410E246EA93344CBD207165 (ThreadSafeDictionaryValueFactory_2_tAE7D4B6776CD9AEF60B6EC3F80B1E2FEBD1D0F0C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ThreadSafeDictionaryValueFactory_2_tAE7D4B6776CD9AEF60B6EC3F80B1E2FEBD1D0F0C *, RuntimeObject *, intptr_t, const RuntimeMethod*))ThreadSafeDictionaryValueFactory_2__ctor_m26DA3A3B46F85F517147B54D4E163677B20F8657_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::.ctor(UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
inline void ThreadSafeDictionary_2__ctor_m577BAD53CD5F4CA3BC01CA2B333E1FAA90211934 (ThreadSafeDictionary_2_t1F1CC2D67B7F84600B060F52825BBEACEE0CFBE0 * __this, ThreadSafeDictionaryValueFactory_2_tAE7D4B6776CD9AEF60B6EC3F80B1E2FEBD1D0F0C * ___valueFactory0, const RuntimeMethod* method)
{
	((  void (*) (ThreadSafeDictionary_2_t1F1CC2D67B7F84600B060F52825BBEACEE0CFBE0 *, ThreadSafeDictionaryValueFactory_2_tAE7D4B6776CD9AEF60B6EC3F80B1E2FEBD1D0F0C *, const RuntimeMethod*))ThreadSafeDictionary_2__ctor_mB036B01C6686A07217293BBD6DD653811DFDC6AD_gshared)(__this, ___valueFactory0, method);
}
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::.ctor(System.Object,System.IntPtr)
inline void ThreadSafeDictionaryValueFactory_2__ctor_m1BF1B66ECB81E5FE183F901841185E64F5B1E10D (ThreadSafeDictionaryValueFactory_2_t64ADFF2082641786DBFD5FFA3B40EBC3F9576E34 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ThreadSafeDictionaryValueFactory_2_t64ADFF2082641786DBFD5FFA3B40EBC3F9576E34 *, RuntimeObject *, intptr_t, const RuntimeMethod*))ThreadSafeDictionaryValueFactory_2__ctor_m26DA3A3B46F85F517147B54D4E163677B20F8657_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::.ctor(UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
inline void ThreadSafeDictionary_2__ctor_m4303DDB56537344D0C545CE93CF76B1ED1BE135E (ThreadSafeDictionary_2_t9A0BA6506726B243C842230BC1159D24D661386E * __this, ThreadSafeDictionaryValueFactory_2_t64ADFF2082641786DBFD5FFA3B40EBC3F9576E34 * ___valueFactory0, const RuntimeMethod* method)
{
	((  void (*) (ThreadSafeDictionary_2_t9A0BA6506726B243C842230BC1159D24D661386E *, ThreadSafeDictionaryValueFactory_2_t64ADFF2082641786DBFD5FFA3B40EBC3F9576E34 *, const RuntimeMethod*))ThreadSafeDictionary_2__ctor_mB036B01C6686A07217293BBD6DD653811DFDC6AD_gshared)(__this, ___valueFactory0, method);
}
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::.ctor(System.Object,System.IntPtr)
inline void ThreadSafeDictionaryValueFactory_2__ctor_m23CCE3D002BC204F0A0EE0129E9E1B262ACA9EC4 (ThreadSafeDictionaryValueFactory_2_t00EBEAFF4AF9A2C099AB2D1FEE2582299607C9B2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ThreadSafeDictionaryValueFactory_2_t00EBEAFF4AF9A2C099AB2D1FEE2582299607C9B2 *, RuntimeObject *, intptr_t, const RuntimeMethod*))ThreadSafeDictionaryValueFactory_2__ctor_m26DA3A3B46F85F517147B54D4E163677B20F8657_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::.ctor(UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
inline void ThreadSafeDictionary_2__ctor_m8671FC0A1693265CF95C8102E2A52587CA7CC816 (ThreadSafeDictionary_2_tC79ADF4BCD32D26FEFC08FAB60B79ED5FF57EF37 * __this, ThreadSafeDictionaryValueFactory_2_t00EBEAFF4AF9A2C099AB2D1FEE2582299607C9B2 * ___valueFactory0, const RuntimeMethod* method)
{
	((  void (*) (ThreadSafeDictionary_2_tC79ADF4BCD32D26FEFC08FAB60B79ED5FF57EF37 *, ThreadSafeDictionaryValueFactory_2_t00EBEAFF4AF9A2C099AB2D1FEE2582299607C9B2 *, const RuntimeMethod*))ThreadSafeDictionary_2__ctor_mB036B01C6686A07217293BBD6DD653811DFDC6AD_gshared)(__this, ___valueFactory0, method);
}
// System.Boolean System.Type::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_m0B4E20F93B1B34C0B5C4B089F543D1AA338DC9FE (Type_t * __this, const RuntimeMethod* method);
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetContructor(System.Type,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorDelegate_t758C58A6B467BA586E2C6B57A535729A620BFCEC * ReflectionUtils_GetContructor_m06F8CE353AD06FB0E86D3E4E6B682D99A13870AF (Type_t * ___type0, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___argsType1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>::.ctor()
inline void Dictionary_2__ctor_m72DB3E3143E97AA22B589D0E8E216AEE54A248F1 (Dictionary_2_tBB5D728BE58C8B287D432992DC4CDBA9FF9BDAC3 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBB5D728BE58C8B287D432992DC4CDBA9FF9BDAC3 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetProperties(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtils_GetProperties_m075E8D7F50A961C3EC9844DF6888C534BE0816CC (Type_t * ___type0, const RuntimeMethod* method);
// System.Reflection.MethodInfo UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetGetterMethodInfo(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * ReflectionUtils_GetGetterMethodInfo_m3C2CE1C8DB9E1E745B2C37F533073BA96AB11807 (PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsStatic_m745A9BDA4869DB7CC4886436C52D34855C1270A5 (MethodBase_t * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodBase::get_IsPublic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsPublic_m9DCA641DBE6F06D0DC4A4B2828641A6DEA97F88B (MethodBase_t * __this, const RuntimeMethod* method);
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GetDelegate_t5384142A3E4A970422627B6C02B4EB4319934A8F * ReflectionUtils_GetGetMethod_m204196EEEA5C64D7B0AC4DC6584B20FC5304F26D (PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetFields(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtils_GetFields_m46D265608D79C2C03B8F4435F7EE20D204BBB8BC (Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsStatic_mDEB4099D238E5846246F0ACED3FF9AD9C93D8ECA (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::get_IsPublic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsPublic_m9265C7C7F78B6E7361D9C3A1D09B8360B699D1C6 (FieldInfo_t * __this, const RuntimeMethod* method);
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GetDelegate_t5384142A3E4A970422627B6C02B4EB4319934A8F * ReflectionUtils_GetGetMethod_m2D0C6E198BA479C371958D16BBCA8B6E946A30F6 (FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor()
inline void Dictionary_2__ctor_m2E1903A0E8D9F835053ED23B3AF2AB2F8E379C17 (Dictionary_2_t82BCBA9454C6D1CD4FFAC1591ED063945EE8000D * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t82BCBA9454C6D1CD4FFAC1591ED063945EE8000D *, const RuntimeMethod*))Dictionary_2__ctor_m3555BF18856EDD7E8C7FF7D2251879DFA5E5E3BC_gshared)(__this, method);
}
// System.Reflection.MethodInfo UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetSetterMethodInfo(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * ReflectionUtils_GetSetterMethodInfo_mE024459BDF87821E8BD0E8B1DBEA54D39F26D023 (PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SetDelegate_tB85E10DD9F713CAE7ED82A18744F73AED4EA6D04 * ReflectionUtils_GetSetMethod_m9EDECE257A6214C6A51920E2F0F252AEEC9F75D4 (PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>::.ctor(!0,!1)
inline void KeyValuePair_2__ctor_m3E3C4CA5E2EF47104F1AFF2ABFD0F5E764A9019E (KeyValuePair_2_t2640B830EE98728C11234AB1D4A0768B5E02CDF4 * __this, Type_t * ___key0, SetDelegate_tB85E10DD9F713CAE7ED82A18744F73AED4EA6D04 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t2640B830EE98728C11234AB1D4A0768B5E02CDF4 *, Type_t *, SetDelegate_tB85E10DD9F713CAE7ED82A18744F73AED4EA6D04 *, const RuntimeMethod*))KeyValuePair_2__ctor_m783A0935E40FCB80D5940E8CCF0EFEFE41D7C7D3_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Reflection.FieldInfo::get_IsInitOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsInitOnly_m55ECD5C1B5F908CC9D10FDA743C9014CDB45E044 (FieldInfo_t * __this, const RuntimeMethod* method);
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SetDelegate_tB85E10DD9F713CAE7ED82A18744F73AED4EA6D04 * ReflectionUtils_GetSetMethod_mDAFA0DE1F7F1351C101885AF0C30FB487C65CB9C (FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72 (const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_m053A47D87C59CA7A87D4E67E5E06368D775D7651 (RuntimeObject * ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.DateTime System.DateTime::ToUniversalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_ToUniversalTime_mA8B74D947E186568C55D9C6F56D59F9A3C7775B1 (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, const RuntimeMethod* method);
// System.String System.DateTime::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m9943D2AB36F33BA0A4CF44DAE32D5944E2561B1C (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.DateTimeOffset System.DateTimeOffset::ToUniversalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  DateTimeOffset_ToUniversalTime_m0633950D5BEA0AC72CADE23596C389D0E2961224 (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 * __this, const RuntimeMethod* method);
// System.String System.DateTimeOffset::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTimeOffset_ToString_mC198692CA58E6E6FF80009C33264F01E4E4B947A (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 * __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method);
// System.String System.Guid::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_mE2E53BEF57397A8D04C1CEFC2627F64578FF638B (Guid_t * __this, String_t* ___format0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.SimpleJson.JsonObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonObject__ctor_mEAF7641A152C9EE2A9986C140A2D09CD7A38506D (JsonObject_t5430387D9A9215A629850E012C366DBE5AD5A2B5 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>::get_Value()
inline GetDelegate_t5384142A3E4A970422627B6C02B4EB4319934A8F * KeyValuePair_2_get_Value_mF7FD6C1B4A954CD16093D4B6C0F083A3A0347D0F_inline (KeyValuePair_2_tB5A10C8410102A497AB656E4139B48E757EC880F * __this, const RuntimeMethod* method)
{
	return ((  GetDelegate_t5384142A3E4A970422627B6C02B4EB4319934A8F * (*) (KeyValuePair_2_tB5A10C8410102A497AB656E4139B48E757EC880F *, const RuntimeMethod*))KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m3CCADA0FD43354737C9190CD451DC5869006578D_inline (KeyValuePair_2_tB5A10C8410102A497AB656E4139B48E757EC880F * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tB5A10C8410102A497AB656E4139B48E757EC880F *, const RuntimeMethod*))KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared_inline)(__this, method);
}
// System.Object UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GetDelegate_Invoke_m114D46503676C1A9276214C4532155B31562EE1D (GetDelegate_t5384142A3E4A970422627B6C02B4EB4319934A8F * __this, RuntimeObject * ___source0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Reflection.ConstructorInfo[] System.Type::GetConstructors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfoU5BU5D_t111EE7D53C51A47FE69FC3398DE007F7E100593E* Type_GetConstructors_m674DDAF4A507C09F344455449273B71384D41CBD (Type_t * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo> UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetConstructors(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtils_GetConstructors_m5698B3DC601907E5EDA5044474EA4B6FC1B85EB3 (Type_t * ___type0, const RuntimeMethod* method);
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Type,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorDelegate_t758C58A6B467BA586E2C6B57A535729A620BFCEC * ReflectionUtils_GetConstructorByReflection_mB318F13C50D13137048DF91314B5145262AFC6F3 (Type_t * ___type0, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___argsType1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetConstructorByReflectionU3Ec__AnonStorey0__ctor_mDB06F77C170B11FC1A897D77A9FFA9D267E3A958 (U3CGetConstructorByReflectionU3Ec__AnonStorey0_t4266D02561276A50905B1F44DEDE646F4845D634 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstructorDelegate__ctor_mC9D85B6180085484774A9F06FFB7A1630C102A96 (ConstructorDelegate_t758C58A6B467BA586E2C6B57A535729A620BFCEC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Reflection.ConstructorInfo UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetConstructorInfo(System.Type,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * ReflectionUtils_GetConstructorInfo_m135D313513D4526FF6EB4F32C8F6482A26A0D7E9 (Type_t * ___type0, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___argsType1, const RuntimeMethod* method);
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Reflection.ConstructorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorDelegate_t758C58A6B467BA586E2C6B57A535729A620BFCEC * ReflectionUtils_GetConstructorByReflection_m2848BA515B91FE2DAA5A7B5F471F7E95DFB63CA0 (ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * ___constructorInfo0, const RuntimeMethod* method);
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GetDelegate_t5384142A3E4A970422627B6C02B4EB4319934A8F * ReflectionUtils_GetGetMethodByReflection_m7C2EEEEF1869D166F8DDC65F5A1EB1AB4554855F (PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GetDelegate_t5384142A3E4A970422627B6C02B4EB4319934A8F * ReflectionUtils_GetGetMethodByReflection_m77CDE23E398B8CF50A6A7DE04E0AC5BC1B98DBA5 (FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetGetMethodByReflectionU3Ec__AnonStorey1__ctor_mDB94782A058E9E407D38E59B47E10D0C83B37DA2 (U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t5304BC457840A263778B61647A6214450139CE2F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetDelegate__ctor_m04F2BD60798013C3E5F77D831B4B044C06D5A928 (GetDelegate_t5384142A3E4A970422627B6C02B4EB4319934A8F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m82041472CB56E7CF52ACB0B57F34B6CDA0D13408 (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t5DD58BDB4BDF3531B0981E89EF60C3ED0C510D14 * __this, const RuntimeMethod* method);
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SetDelegate_tB85E10DD9F713CAE7ED82A18744F73AED4EA6D04 * ReflectionUtils_GetSetMethodByReflection_m4A26B98B5B03598799A361D00F8E2C1C3F1E3B08 (PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SetDelegate_tB85E10DD9F713CAE7ED82A18744F73AED4EA6D04 * ReflectionUtils_GetSetMethodByReflection_m49F4E0185C7BE17BE600E8657CBCC6ECA43B1920 (FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSetMethodByReflectionU3Ec__AnonStorey3__ctor_mE06CF1E1538B71014D17C5EA0D1073710C38B8CB (U3CGetSetMethodByReflectionU3Ec__AnonStorey3_tFBA12729E943700B178CA5477723857345AB686B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetDelegate__ctor_mC110D95DC8C625444540B9FEA1422311040F2FB6 (SetDelegate_tB85E10DD9F713CAE7ED82A18744F73AED4EA6D04 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m6FC8F8AD646E2AB0772EAB4F6C6BFA2E8739425C (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t43269ED7005D484DB0429A87155BB781825B5E47 * __this, const RuntimeMethod* method);
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConstructorInfo_Invoke_m9E7A03EC2DDACA7A9C1E1609D4AB2BE90CD2E2AF (ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___parameters0, const RuntimeMethod* method);
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m471794D56262D9DB5B5A324883030AB16BD39674 (MethodBase_t * __this, RuntimeObject * ___obj0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___parameters1, const RuntimeMethod* method);
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_m9E7A4FBA27F835B6C26CC09CF609333967150E41 (FieldInfo_t * __this, RuntimeObject * ___obj0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.SimpleJson.SimpleJson::TryDeserializeObject(System.String,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleJson_TryDeserializeObject_m5D57B5E125B9A7F8CDB1AC27CAF89FB881541374 (String_t* ___json0, RuntimeObject ** ___obj1, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationException__ctor_m88AAD9671030A8A96AA87CB95701938FBD8F16E1 (SerializationException_tA1FDFF6779406E688C2192E71C38DBFD7A4A2210 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* String_ToCharArray_mFCFF32A5EC698E81075E0C72C874282B9ED197A6 (String_t* __this, const RuntimeMethod* method);
// System.Object UnityEngine.Advertisements.SimpleJson.SimpleJson::ParseValue(System.Char[],System.Int32&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SimpleJson_ParseValue_mC55D18821682DFB1F786FCF4B9DF46F86480A568 (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1C0F2D97B838537A2D0F64033AE4EF02D150A956 (StringBuilder_t * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.SimpleJson.SimpleJson::SerializeValue(UnityEngine.Advertisements.SimpleJson.IJsonSerializerStrategy,System.Object,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleJson_SerializeValue_m6FC1E7FD91F662DE070E45E95B9747FC1A3632F4 (RuntimeObject* ___jsonSerializerStrategy0, RuntimeObject * ___value1, StringBuilder_t * ___builder2, const RuntimeMethod* method);
// UnityEngine.Advertisements.SimpleJson.IJsonSerializerStrategy UnityEngine.Advertisements.SimpleJson.SimpleJson::get_CurrentJsonSerializerStrategy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SimpleJson_get_CurrentJsonSerializerStrategy_m30014ED032674767BA616FECC1F592BC9C2F0BC2 (const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.SimpleJson.SimpleJson::SerializeObject(System.Object,UnityEngine.Advertisements.SimpleJson.IJsonSerializerStrategy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleJson_SerializeObject_m4C430799C8A3D5D1BF1F474736F2AA99F72B1467 (RuntimeObject * ___json0, RuntimeObject* ___jsonSerializerStrategy1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Advertisements.SimpleJson.SimpleJson::NextToken(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleJson_NextToken_m75023EFED6E5B9F9C55FBBD150FB86E4578E8363 (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___json0, int32_t* ___index1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Advertisements.SimpleJson.SimpleJson::LookAhead(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleJson_LookAhead_mA709B490EFA62FE02325528F53A9902BEA98097D (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___json0, int32_t ___index1, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.SimpleJson.SimpleJson::ParseString(System.Char[],System.Int32&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleJson_ParseString_m074CF30BEEC742F4B4B09B13E5EAC1366792B8C8 (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.SimpleJson.JsonArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonArray__ctor_m190332332C3BF195EADD7525794EF5C475234E41 (JsonArray_tEC81164ADEC87B1B3F3D28FEA89F9AF6458479A6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
inline void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138 (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Object UnityEngine.Advertisements.SimpleJson.SimpleJson::ParseNumber(System.Char[],System.Int32&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SimpleJson_ParseNumber_m97DB505FD590AD76E2C7F9FAFFDF14C5E603DF9B (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method);
// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Advertisements.SimpleJson.SimpleJson::ParseObject(System.Char[],System.Int32&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SimpleJson_ParseObject_m39E62DFB96813281C00B4913B6E86C7560F2DF74 (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method);
// UnityEngine.Advertisements.SimpleJson.JsonArray UnityEngine.Advertisements.SimpleJson.SimpleJson::ParseArray(System.Char[],System.Int32&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonArray_tEC81164ADEC87B1B3F3D28FEA89F9AF6458479A6 * SimpleJson_ParseArray_m890B5A50647EC23FA4A8ABEA0AAAE347CB90007D (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.SimpleJson.SimpleJson::EatWhitespace(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleJson_EatWhitespace_mAB33F80188B8DD4D84B6A9216EC735FD069CC45E (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___json0, int32_t* ___index1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mC7FB167C0D5B97F7EF502AF54399C61DD5B87509 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___val0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method);
// System.Boolean System.UInt32::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt32_TryParse_mF53E581D2BF1451EC324BC2F601B6AEB0E2F9235 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, uint32_t* ___result3, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.SimpleJson.SimpleJson::ConvertFromUtf32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleJson_ConvertFromUtf32_mBA35D582335801FE576FB616EB7FA674DC315B66 (int32_t ___utf320, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m0E7BBCE09E386877E2B63BF7FA36B956BF221C93 (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m394C06654854ADD4C51FF957BE0CC72EF52BAA96 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___val0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Advertisements.SimpleJson.SimpleJson::GetLastIndexOfNumber(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleJson_GetLastIndexOfNumber_mCD5BA50A2DB6077D4CEEBC7E1CF4C523B6AA2704 (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___json0, int32_t ___index1, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mF9EA8429E9D1B7475D5A297E67435CF34E965F28 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.Boolean System.Double::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m1A7BCBA90DE896E448E3CA09AAD1CA43846567D7 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, double* ___result3, const RuntimeMethod* method);
// System.Boolean System.Int64::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m8CE5F89833C03A091273A4EF48C69E86E1F81ACC (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, int64_t* ___result3, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.SimpleJson.SimpleJson::SerializeString(System.String,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleJson_SerializeString_m35442C27202640FC7396CC39C102ACD8B847B061 (String_t* ___aString0, StringBuilder_t * ___builder1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.SimpleJson.SimpleJson::SerializeObject(UnityEngine.Advertisements.SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Collections.IEnumerable,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleJson_SerializeObject_mCD079C47DEEFA24E910AE8E81A8C2637F46B9587 (RuntimeObject* ___jsonSerializerStrategy0, RuntimeObject* ___keys1, RuntimeObject* ___values2, StringBuilder_t * ___builder3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.SimpleJson.SimpleJson::SerializeArray(UnityEngine.Advertisements.SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleJson_SerializeArray_mD7C2F80ED44EC64486114EB09B729B8A0ECFC900 (RuntimeObject* ___jsonSerializerStrategy0, RuntimeObject* ___anArray1, StringBuilder_t * ___builder2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.SimpleJson.SimpleJson::IsNumeric(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleJson_IsNumeric_m1856CCEBA7A537D615193209C291579BC097D901 (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.SimpleJson.SimpleJson::SerializeNumber(System.Object,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleJson_SerializeNumber_m917350F63AFC1C28361A4F30149124ABDE56C2E6 (RuntimeObject * ___number0, StringBuilder_t * ___builder1, const RuntimeMethod* method);
// System.String System.Int64::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m25F3F61DC30EAF186B76BD91F83083BDDDE82B2A (int64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.String System.UInt64::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m6CBBC10ABBA0EE36F5E72F926A38F6CD7F497A55 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.String System.Int32::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1D0AF82BDAB5D4710527DD3FEFA6F01246D128A5 (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.String System.UInt32::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt32_ToString_mC81601CD79044D74065228749C2CA9B629CFA3EA (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.String System.Decimal::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Decimal_ToString_mC257A35A991F88D3CFE6F29F619F8EC9D1D5ADFB (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.String System.Single::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m578EAE7D490B9ACEF7116E4E824DC2F1E8F25A2F (float* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.String System.Double::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m1D341E667E85E9E18783A14CB02982643E96C616 (double* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy UnityEngine.Advertisements.SimpleJson.SimpleJson::get_PocoJsonSerializerStrategy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E * SimpleJson_get_PocoJsonSerializerStrategy_m33867E4BB096D8C7D63A649DF1F99FC11FD1C58F (const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PocoJsonSerializerStrategy__ctor_mFB6AA9EE3E3AC69011D626B42A3157F5C2442A78 (PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.StartEventArgs::set_placementId(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void StartEventArgs_set_placementId_m5725F6F41CFFAB64EDCC54AB8B72814D4B5CE6CE_inline (StartEventArgs_t44F8C8482BBCC37963CFBC1C4D2F6473040717E2 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsReady(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_UnityAdsReady_mF8779E69BBEE5186E1C9DD93FE2710D3D25876EE (String_t* ___placementId0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsDidError(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_UnityAdsDidError_mE9F1E190C2D9C9B939A5FC6364D012AC63D83915 (int64_t ___rawError0, String_t* ___message1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsDidStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_UnityAdsDidStart_m0797975F791AF76B3BFEE48F893EDB4435EE1E66 (String_t* ___placementId0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsDidFinish(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_UnityAdsDidFinish_m1206B2333C3317B05228D424B3447448BA75B779 (String_t* ___placementId0, int64_t ___rawShowResult1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsReady::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsReady__ctor_mF84714188DB2225544D9348546D90CCCD8327AF8 (unityAdsReady_t716CB3207A4D591AFD38E610CC8DC5EA4DE62A67 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetReadyCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsReady)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_UnityAdsEngineSetReadyCallback_mA3843C19AD858C15CE80B232B3E8DADDAAC51716 (unityAdsReady_t716CB3207A4D591AFD38E610CC8DC5EA4DE62A67 * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidError::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsDidError__ctor_m992AEB1EEF03EA824D99A0D350A40404550BA93A (unityAdsDidError_t0AEE1AF310020AF7C9F6A7881F50B21996A32C61 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetDidErrorCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsDidError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_UnityAdsEngineSetDidErrorCallback_m8B1D9253693CA0F033DC81E611FED587866E6B0C (unityAdsDidError_t0AEE1AF310020AF7C9F6A7881F50B21996A32C61 * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsDidStart__ctor_m0B768A102188B8ECDB1DFAE9BF7409E972C3EBC3 (unityAdsDidStart_tD78BF20784F7416774E14ADE453F6F4B4428D7FA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetDidStartCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_UnityAdsEngineSetDidStartCallback_mDDDDE98EFE787BA398E57CD01C2C7548A068E48C (unityAdsDidStart_tD78BF20784F7416774E14ADE453F6F4B4428D7FA * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsDidFinish__ctor_mA2ED5FF072F0327155571548984A15881952860E (unityAdsDidFinish_t9EE8992F28B4D62991C98D7D85A9E93A6835E045 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetDidFinishCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_UnityAdsEngineSetDidFinishCallback_mCFBF38BF04995DEBE8717D0CBD5EBE55B9379A52 (unityAdsDidFinish_t9EE8992F28B4D62991C98D7D85A9E93A6835E045 * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform/<UnityAdsReady>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnityAdsReadyU3Ec__AnonStorey0__ctor_m974B0196332D6854150A1B5CB63B347C86439CD9 (U3CUnityAdsReadyU3Ec__AnonStorey0_tB27C3EFC407540F32BE16EEEECF2C7B88BF43A79 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Advertisements.CallbackExecutor>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m7DE37BC592ACBC88BE0B514148CF0693C158DA35 (Action_1_t089491CF3BD2890A851D82690754A8F0DE899372 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t089491CF3BD2890A851D82690754A8F0DE899372 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Advertisements.CallbackExecutor::Post(System.Action`1<UnityEngine.Advertisements.CallbackExecutor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackExecutor_Post_m36135492FCF9F10CC763800AF029CD3CA7FB808F (CallbackExecutor_tB2DFCCED2168CFD8C1F6FD0C21679DA386B8CA78 * __this, Action_1_t089491CF3BD2890A851D82690754A8F0DE899372 * ___action0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidError>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnityAdsDidErrorU3Ec__AnonStorey1__ctor_mDF643940DC37278B78CCA9B8878ED1270C859487 (U3CUnityAdsDidErrorU3Ec__AnonStorey1_t6A5E888349986FCAC117F1F71F73587DAE2AFFEA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidStart>c__AnonStorey2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnityAdsDidStartU3Ec__AnonStorey2__ctor_mD246373E7430043BD99E08C9B9B6AE4FEC491875 (U3CUnityAdsDidStartU3Ec__AnonStorey2_t69450E13B9A35C35663BBFDA85A317661053E4F6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidFinish>c__AnonStorey3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnityAdsDidFinishU3Ec__AnonStorey3__ctor_m7BA137569B997B75A49FD8952C6E16CA4CDCC0CE (U3CUnityAdsDidFinishU3Ec__AnonStorey3_tFF312E3E401419649E7A80CB5F522EFBD8C7A1E1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidFinish>c__AnonStorey4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnityAdsDidFinishU3Ec__AnonStorey4__ctor_m1D006F12A7455C7680F6BA29F0A220BBCFBD4D3C (U3CUnityAdsDidFinishU3Ec__AnonStorey4_tF3998F44D42BAA24F6FC8B71E5E2443B74010AB7 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineGetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Platform_UnityAdsEngineGetVersion_m97157D4E90AEC5525BE1CAF3ACB524F7BAFB1730 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineGetDebugMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_UnityAdsEngineGetDebugMode_m9D6316E04B48D5B378E5CF9970D93D08952BD1F3 (const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetDebugMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_UnityAdsEngineSetDebugMode_m5FFE80ABE98285FD1DD496C24AD3C7839F947021 (bool ___debugMode0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineInitialize(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_UnityAdsEngineInitialize_mD64EDC7A17918473FCD17D8AACF4FEF0E62F79F0 (String_t* ___gameId0, bool ___testMode1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineIsReady(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_UnityAdsEngineIsReady_m9BF6C267C816CBF4102CB4F5E9504A5045B6816B (String_t* ___placementId0, const RuntimeMethod* method);
// System.Int64 UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineGetPlacementState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Platform_UnityAdsEngineGetPlacementState_m4E7D140C89E166867A42AD8D43DEF2C8467A1592 (String_t* ___placementId0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineShow(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_UnityAdsEngineShow_m60C7F47D93087148C54D73153D5E2ACA0883CF9D (String_t* ___placementId0, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.MetaData::ToJSON()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetaData_ToJSON_mD835EFD200C52C6E7C6149A59B3A5CA26B9AA2B6 (MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetMetaData(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_UnityAdsEngineSetMetaData_m87B3A9EC801AEE2E7B05280DBCD54A127DE63F27 (String_t* ___category0, String_t* ___data1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.ErrorEventArgs::.ctor(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorEventArgs__ctor_m81988E49417A843D749E261997BF0742F62BE567 (ErrorEventArgs_t77C07CCB4554162961BBE00E3B7E52DDA8648409 * __this, int64_t ___error0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mEF9D6A771BF3339472FF5FBA93F500AAD25210BF (EventHandler_1_t674DACB444A256903A17FB5F7644CEB641C01927 * __this, RuntimeObject * ___sender0, ErrorEventArgs_t77C07CCB4554162961BBE00E3B7E52DDA8648409 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t674DACB444A256903A17FB5F7644CEB641C01927 *, RuntimeObject *, ErrorEventArgs_t77C07CCB4554162961BBE00E3B7E52DDA8648409 *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void UnityEngine.Advertisements.ReadyEventArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadyEventArgs__ctor_m570135928FA95C668418C3695EDBBDB4DF92710D (ReadyEventArgs_tA3E33B18240D91F48C92CC62CB5515388449E250 * __this, String_t* ___placementId0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m0FB7F633D9B24FE5EB771891831D1EA97D411A9A (EventHandler_1_tB57D8AF0A9FA3BFE6ABEC77DE046E4A20526A09A * __this, RuntimeObject * ___sender0, ReadyEventArgs_tA3E33B18240D91F48C92CC62CB5515388449E250 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tB57D8AF0A9FA3BFE6ABEC77DE046E4A20526A09A *, RuntimeObject *, ReadyEventArgs_tA3E33B18240D91F48C92CC62CB5515388449E250 *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, ___sender0, ___e1, method);
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
// System.Void UnityEngine.Advertisements.Advertisement::LoadRuntime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_LoadRuntime_m1F07F2840CB9BC41A93D68EFDF54B06A94878A74 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_LoadRuntime_m1F07F2840CB9BC41A93D68EFDF54B06A94878A74_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->get_s_Platform_1();
		if (L_0)
		{
			goto IL_0090;
		}
	}
	{
		bool L_1 = Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26(/*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		bool L_2 = Advertisement_get_isSupported_mEF8C394828CBA7F25F78C7685998832AE5EA1C2B(/*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001f;
		}
	}

IL_001e:
	{
		return;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_3 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
			V_0 = L_3;
			int32_t L_4 = V_0;
			if ((((int32_t)L_4) == ((int32_t)((int32_t)11))))
			{
				goto IL_0039;
			}
		}

IL_002d:
		{
			int32_t L_5 = V_0;
			if ((((int32_t)L_5) == ((int32_t)8)))
			{
				goto IL_0048;
			}
		}

IL_0034:
		{
			goto IL_0057;
		}

IL_0039:
		{
			Platform_t90C2BEBA869F5A23475D57DE636EEFBB4507A833 * L_6 = (Platform_t90C2BEBA869F5A23475D57DE636EEFBB4507A833 *)il2cpp_codegen_object_new(Platform_t90C2BEBA869F5A23475D57DE636EEFBB4507A833_il2cpp_TypeInfo_var);
			Platform__ctor_m0C70085D7025B71BBDD57EDCCE173DD0C29CA7CF(L_6, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
			((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->set_s_Platform_1(L_6);
			goto IL_0066;
		}

IL_0048:
		{
			Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D * L_7 = (Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D *)il2cpp_codegen_object_new(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_il2cpp_TypeInfo_var);
			Platform__ctor_m7C7EAAF2110086078A0D153842CBDDDFF80B4564(L_7, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
			((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->set_s_Platform_1(L_7);
			goto IL_0066;
		}

IL_0057:
		{
			UnsupportedPlatform_t5FA6C225FDA5FF02CA0C0297631D99C8C4C2E5C3 * L_8 = (UnsupportedPlatform_t5FA6C225FDA5FF02CA0C0297631D99C8C4C2E5C3 *)il2cpp_codegen_object_new(UnsupportedPlatform_t5FA6C225FDA5FF02CA0C0297631D99C8C4C2E5C3_il2cpp_TypeInfo_var);
			UnsupportedPlatform__ctor_mD18C2812C369925CADA34D1666A0C24B1E81B9AF(L_8, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
			((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->set_s_Platform_1(L_8);
			goto IL_0066;
		}

IL_0066:
		{
			goto IL_008b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_006b;
		throw e;
	}

CATCH_006b:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t *)__exception_local);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralD5BD80B24CDCE0CA01097C9054565EE9665DA441, /*hidden argument*/NULL);
		Exception_t * L_9 = V_1;
		Debug_LogException_mBAA6702C240E37B2A834AA74E4FDC15A3A5589A9(L_9, /*hidden argument*/NULL);
		UnsupportedPlatform_t5FA6C225FDA5FF02CA0C0297631D99C8C4C2E5C3 * L_10 = (UnsupportedPlatform_t5FA6C225FDA5FF02CA0C0297631D99C8C4C2E5C3 *)il2cpp_codegen_object_new(UnsupportedPlatform_t5FA6C225FDA5FF02CA0C0297631D99C8C4C2E5C3_il2cpp_TypeInfo_var);
		UnsupportedPlatform__ctor_mD18C2812C369925CADA34D1666A0C24B1E81B9AF(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->set_s_Platform_1(L_10);
		goto IL_008b;
	} // end catch (depth: 1)

IL_008b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		Advertisement_Load_m0CCB92C442B60C4A4424AD3CE013F85BE92C4173(/*hidden argument*/NULL);
	}

IL_0090:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::LoadEditor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_LoadEditor_m78A4DF4432EB6408D86E9E575DEC203422864C69 (String_t* ___extensionPath0, bool ___supportedPlatform1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_LoadEditor_m78A4DF4432EB6408D86E9E575DEC203422864C69_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->get_s_Platform_1();
		if (L_0)
		{
			goto IL_0035;
		}
	}
	{
		bool L_1 = ___supportedPlatform1;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_2 = ___extensionPath0;
		Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740 * L_3 = (Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740 *)il2cpp_codegen_object_new(Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740_il2cpp_TypeInfo_var);
		Platform__ctor_mF1303477BC0694896FD4DD958776D5AA4FEBF61F(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->set_s_Platform_1(L_3);
		((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->set_s_EditorSupportedPlatform_2((bool)1);
		goto IL_0030;
	}

IL_0026:
	{
		UnsupportedPlatform_t5FA6C225FDA5FF02CA0C0297631D99C8C4C2E5C3 * L_4 = (UnsupportedPlatform_t5FA6C225FDA5FF02CA0C0297631D99C8C4C2E5C3 *)il2cpp_codegen_object_new(UnsupportedPlatform_t5FA6C225FDA5FF02CA0C0297631D99C8C4C2E5C3_il2cpp_TypeInfo_var);
		UnsupportedPlatform__ctor_mD18C2812C369925CADA34D1666A0C24B1E81B9AF(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->set_s_Platform_1(L_4);
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		Advertisement_Load_m0CCB92C442B60C4A4424AD3CE013F85BE92C4173(/*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Load_m0CCB92C442B60C4A4424AD3CE013F85BE92C4173 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_Load_m0CCB92C442B60C4A4424AD3CE013F85BE92C4173_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->get_s_Platform_1();
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		bool L_1 = Advertisement_get_isSupported_mEF8C394828CBA7F25F78C7685998832AE5EA1C2B(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		bool L_2 = Advertisement_get_initializeOnStartup_mCCD49EC5AF9B4824958ACB7E8D5C0735A8362731(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		String_t* L_3 = Advertisement_get_gameId_m564EA6320413ADA25F98EEBCD34258F8723DCF43(/*hidden argument*/NULL);
		bool L_4 = Advertisement_get_testMode_m929DB85E1775EF4F68F8D91AFC0C3C063A2B12A7(/*hidden argument*/NULL);
		Advertisement_Initialize_m73F6527531EAE2AF5D9949AA4B1286C60DBDFDB0(L_3, L_4, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::get_initializeOnStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_get_initializeOnStartup_mCCD49EC5AF9B4824958ACB7E8D5C0735A8362731 (const RuntimeMethod* method)
{
	{
		bool L_0 = UnityAdsSettings_get_initializeOnStartup_m102DCCBEFE5A6CF0FB86E8C0ED5FAC7513765DFE(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::IsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_IsEnabled_m320F412BAEDF0D57935B95668A2DAA81714F033D (const RuntimeMethod* method)
{
	{
		bool L_0 = UnityAdsSettings_get_enabled_m10C21E79943A9556FC453ED50DD766505C9B5E72(/*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Advertisements.Advertisement_DebugLevel UnityEngine.Advertisements.Advertisement::get_debugLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Advertisement_get_debugLevel_mFCA304252112941FAAF6EB3EBE8307341519AF7E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_get_debugLevel_mFCA304252112941FAAF6EB3EBE8307341519AF7E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->get_s_DebugLevel_4();
		return (int32_t)(L_0);
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::set_debugLevel(UnityEngine.Advertisements.Advertisement_DebugLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_set_debugLevel_m8BAE013866B64C91D2C86794A4C2BAA547E5ED54 (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_set_debugLevel_m8BAE013866B64C91D2C86794A4C2BAA547E5ED54_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->set_s_DebugLevel_4(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_get_isInitialized_mC03067B373FC20D13E06648062797A096BF3D653 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_get_isInitialized_mC03067B373FC20D13E06648062797A096BF3D653_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		bool L_0 = ((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->get_s_Initialized_0();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::set_isInitialized(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_set_isInitialized_m7DFD072CE302CCEBBA86754D1EB2CD6F2ACAC067 (bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_set_isInitialized_m7DFD072CE302CCEBBA86754D1EB2CD6F2ACAC067_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->set_s_Initialized_0(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_get_isSupported_mEF8C394828CBA7F25F78C7685998832AE5EA1C2B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_get_isSupported_mEF8C394828CBA7F25F78C7685998832AE5EA1C2B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		bool L_1 = ((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->get_s_EditorSupportedPlatform_2();
		if (L_1)
		{
			goto IL_002b;
		}
	}

IL_0014:
	{
		int32_t L_2 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)8)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0031;
		}
	}

IL_002b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		bool L_4 = Advertisement_IsEnabled_m320F412BAEDF0D57935B95668A2DAA81714F033D(/*hidden argument*/NULL);
		return L_4;
	}

IL_0031:
	{
		return (bool)0;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::get_debugMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_get_debugMode_m395F56765AA2E8BE22500D9EB675B1431ACB6336 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_get_debugMode_m395F56765AA2E8BE22500D9EB675B1431ACB6336_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->get_s_Platform_1();
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean UnityEngine.Advertisements.IPlatform::get_debugMode() */, IPlatform_t641848859ED10CAE8664D5746AABD9243D5DEA45_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::set_debugMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_set_debugMode_mAA26AC09BD66C15541930046B113FA972E43C6B8 (bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_set_debugMode_mAA26AC09BD66C15541930046B113FA972E43C6B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->get_s_Platform_1();
		bool L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(6 /* System.Void UnityEngine.Advertisements.IPlatform::set_debugMode(System.Boolean) */, IPlatform_t641848859ED10CAE8664D5746AABD9243D5DEA45_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::get_testMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_get_testMode_m929DB85E1775EF4F68F8D91AFC0C3C063A2B12A7 (const RuntimeMethod* method)
{
	{
		bool L_0 = UnityAdsSettings_get_testMode_mBE2C1B2AD3C213648275C58D70BF9FE9529C815C(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.String UnityEngine.Advertisements.Advertisement::get_gameId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Advertisement_get_gameId_m564EA6320413ADA25F98EEBCD34258F8723DCF43 (const RuntimeMethod* method)
{
	{
		int32_t L_0 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		String_t* L_1 = UnityAdsSettings_GetGameId_m263E063973598807F083D4706FE9296E56A25870(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String UnityEngine.Advertisements.Advertisement::get_version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Advertisement_get_version_m130B026F569F68BE99A0D89017044397DEF46C0A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_get_version_m130B026F569F68BE99A0D89017044397DEF46C0A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->get_s_Platform_1();
		NullCheck(L_0);
		String_t* L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.Advertisements.IPlatform::get_version() */, IPlatform_t641848859ED10CAE8664D5746AABD9243D5DEA45_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isShowing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_get_isShowing_m9B634136B1230535E9CE3FDC1E53E1F782E8BD4B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_get_isShowing_m9B634136B1230535E9CE3FDC1E53E1F782E8BD4B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		bool L_0 = ((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->get_s_Showing_3();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::set_isShowing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_set_isShowing_mE5B671E7E476A92F42DF678E54A570F56E4D3CC2 (bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_set_isShowing_mE5B671E7E476A92F42DF678E54A570F56E4D3CC2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->set_s_Showing_3(L_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Initialize_m1E490EE5DA919B229C7916164694C766B079EBCF (String_t* ___gameId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_Initialize_m1E490EE5DA919B229C7916164694C766B079EBCF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___gameId0;
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		Advertisement_Initialize_m73F6527531EAE2AF5D9949AA4B1286C60DBDFDB0(L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Initialize_m73F6527531EAE2AF5D9949AA4B1286C60DBDFDB0 (String_t* ___gameId0, bool ___testMode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_Initialize_m73F6527531EAE2AF5D9949AA4B1286C60DBDFDB0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * V_0 = NULL;
	MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * V_1 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		bool L_0 = Advertisement_get_isInitialized_mC03067B373FC20D13E06648062797A096BF3D653_inline(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_00cc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		Advertisement_set_isInitialized_m7DFD072CE302CCEBBA86754D1EB2CD6F2ACAC067_inline((bool)1, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->get_s_Platform_1();
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_2 = ((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_5();
		G_B2_0 = L_1;
		if (L_2)
		{
			G_B3_0 = L_1;
			goto IL_002d;
		}
	}
	{
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_3 = (EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 *)il2cpp_codegen_object_new(EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m4549AB2D4F837932DB02044CC1F026F427140D3C(L_3, NULL, (intptr_t)((intptr_t)Advertisement_U3CInitializeU3Em__0_mC13E79783AFE3182AEAF696DB5D430DBF88AE74F_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m4549AB2D4F837932DB02044CC1F026F427140D3C_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_5(L_3);
		G_B3_0 = G_B2_0;
	}

IL_002d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_4 = ((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_5();
		NullCheck(G_B3_0);
		InterfaceActionInvoker1< EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * >::Invoke(0 /* System.Void UnityEngine.Advertisements.IPlatform::add_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>) */, IPlatform_t641848859ED10CAE8664D5746AABD9243D5DEA45_il2cpp_TypeInfo_var, G_B3_0, L_4);
		RuntimeObject* L_5 = ((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->get_s_Platform_1();
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_6 = ((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_6();
		G_B4_0 = L_5;
		if (L_6)
		{
			G_B5_0 = L_5;
			goto IL_0054;
		}
	}
	{
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_7 = (EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *)il2cpp_codegen_object_new(EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m49B02EDEB592566F4F3153685ABDEFF1AE1C6F48(L_7, NULL, (intptr_t)((intptr_t)Advertisement_U3CInitializeU3Em__1_m0E492C74DF30EF30A9FDDC74C76D1E2D9EE442CF_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m49B02EDEB592566F4F3153685ABDEFF1AE1C6F48_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1_6(L_7);
		G_B5_0 = G_B4_0;
	}

IL_0054:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_8 = ((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_6();
		NullCheck(G_B5_0);
		InterfaceActionInvoker1< EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * >::Invoke(2 /* System.Void UnityEngine.Advertisements.IPlatform::add_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>) */, IPlatform_t641848859ED10CAE8664D5746AABD9243D5DEA45_il2cpp_TypeInfo_var, G_B5_0, L_8);
		MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * L_9 = (MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 *)il2cpp_codegen_object_new(MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03_il2cpp_TypeInfo_var);
		MetaData__ctor_m606971BF2B62CA61F60A8598CE58DE11E444411F(L_9, _stringLiteralF178867DA2879CAE0F60630A6A2DA174E0C2328E, /*hidden argument*/NULL);
		V_0 = L_9;
		MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * L_10 = V_0;
		NullCheck(L_10);
		MetaData_Set_mC1E69DFD59EB90D1406957F5A03BC03F08421C78(L_10, _stringLiteral6AE999552A0D2DCA14D62E2BC8B764D377B1DD6C, _stringLiteralD0866D1BCB122C793DA5CF5BFEE3205F9C995C6E, /*hidden argument*/NULL);
		MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * L_11 = V_0;
		String_t* L_12 = Application_get_unityVersion_mC66901DE17E8F4F5BCA46CF3A4DCB34AF245CF99(/*hidden argument*/NULL);
		NullCheck(L_11);
		MetaData_Set_mC1E69DFD59EB90D1406957F5A03BC03F08421C78(L_11, _stringLiteralC692273DEB2772DA307FFE37041FEF77BF4BAA97, L_12, /*hidden argument*/NULL);
		MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * L_13 = V_0;
		Advertisement_SetMetaData_m9E5F80A365BCD419877A5BA460A19AA372CEE197(L_13, /*hidden argument*/NULL);
		MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * L_14 = (MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 *)il2cpp_codegen_object_new(MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03_il2cpp_TypeInfo_var);
		MetaData__ctor_m606971BF2B62CA61F60A8598CE58DE11E444411F(L_14, _stringLiteral7FE7FCBBF6586BB9560B0192AE21701CC0F7F19D, /*hidden argument*/NULL);
		V_1 = L_14;
		MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * L_15 = V_1;
		NullCheck(L_15);
		MetaData_Set_mC1E69DFD59EB90D1406957F5A03BC03F08421C78(L_15, _stringLiteral6AE999552A0D2DCA14D62E2BC8B764D377B1DD6C, _stringLiteralC1F65DDB75ED7D97E701168AF35171410BE8F9E7, /*hidden argument*/NULL);
		MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * L_16 = V_1;
		String_t* L_17 = Advertisement_get_version_m130B026F569F68BE99A0D89017044397DEF46C0A(/*hidden argument*/NULL);
		NullCheck(L_16);
		MetaData_Set_mC1E69DFD59EB90D1406957F5A03BC03F08421C78(L_16, _stringLiteralC692273DEB2772DA307FFE37041FEF77BF4BAA97, L_17, /*hidden argument*/NULL);
		MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * L_18 = V_1;
		Advertisement_SetMetaData_m9E5F80A365BCD419877A5BA460A19AA372CEE197(L_18, /*hidden argument*/NULL);
		RuntimeObject* L_19 = ((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->get_s_Platform_1();
		String_t* L_20 = ___gameId0;
		bool L_21 = ___testMode1;
		NullCheck(L_19);
		InterfaceActionInvoker2< String_t*, bool >::Invoke(7 /* System.Void UnityEngine.Advertisements.IPlatform::Initialize(System.String,System.Boolean) */, IPlatform_t641848859ED10CAE8664D5746AABD9243D5DEA45_il2cpp_TypeInfo_var, L_19, L_20, L_21);
	}

IL_00cc:
	{
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::IsReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_IsReady_m1C7E51380CC455626A39B90067D2923F87C8BD9B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_IsReady_m1C7E51380CC455626A39B90067D2923F87C8BD9B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		bool L_0 = Advertisement_IsReady_m8BB9F1590814065032F590E8B12686648D679396((String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::IsReady(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_IsReady_m8BB9F1590814065032F590E8B12686648D679396 (String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_IsReady_m8BB9F1590814065032F590E8B12686648D679396_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->get_s_Platform_1();
		String_t* L_1 = ___placementId0;
		bool L_2 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_1, /*hidden argument*/NULL);
		G_B1_0 = L_0;
		if (!L_2)
		{
			G_B2_0 = L_0;
			goto IL_0016;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0016:
	{
		String_t* L_3 = ___placementId0;
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		NullCheck(G_B3_1);
		bool L_4 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(8 /* System.Boolean UnityEngine.Advertisements.IPlatform::IsReady(System.String) */, IPlatform_t641848859ED10CAE8664D5746AABD9243D5DEA45_il2cpp_TypeInfo_var, G_B3_1, G_B3_0);
		return L_4;
	}
}
// UnityEngine.Advertisements.PlacementState UnityEngine.Advertisements.Advertisement::GetPlacementState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Advertisement_GetPlacementState_m7369CE87D2243EB51E1AE2011C47BE0AFA63BED7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_GetPlacementState_m7369CE87D2243EB51E1AE2011C47BE0AFA63BED7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		int32_t L_0 = Advertisement_GetPlacementState_m2DC0A5C481A8EF49BB6FD3E0B46958F12A82711D((String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Advertisements.PlacementState UnityEngine.Advertisements.Advertisement::GetPlacementState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Advertisement_GetPlacementState_m2DC0A5C481A8EF49BB6FD3E0B46958F12A82711D (String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_GetPlacementState_m2DC0A5C481A8EF49BB6FD3E0B46958F12A82711D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->get_s_Platform_1();
		String_t* L_1 = ___placementId0;
		bool L_2 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_1, /*hidden argument*/NULL);
		G_B1_0 = L_0;
		if (!L_2)
		{
			G_B2_0 = L_0;
			goto IL_0016;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0016:
	{
		String_t* L_3 = ___placementId0;
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		NullCheck(G_B3_1);
		int32_t L_4 = InterfaceFuncInvoker1< int32_t, String_t* >::Invoke(9 /* UnityEngine.Advertisements.PlacementState UnityEngine.Advertisements.IPlatform::GetPlacementState(System.String) */, IPlatform_t641848859ED10CAE8664D5746AABD9243D5DEA45_il2cpp_TypeInfo_var, G_B3_1, G_B3_0);
		return L_4;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_mD7A7F596B7D5120BEDA4D3E6BE747FACB1CBDD5C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_Show_mD7A7F596B7D5120BEDA4D3E6BE747FACB1CBDD5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		Advertisement_Show_m0B1BB292081708D0B39D54156BE04297D694D653((String_t*)NULL, (ShowOptions_t6637C67D4907C169839DA10D810B696A19941904 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Show(UnityEngine.Advertisements.ShowOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_mCEDF019F3E187F316B4DCC61D8AC3398D4971CBD (ShowOptions_t6637C67D4907C169839DA10D810B696A19941904 * ___showOptions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_Show_mCEDF019F3E187F316B4DCC61D8AC3398D4971CBD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ShowOptions_t6637C67D4907C169839DA10D810B696A19941904 * L_0 = ___showOptions0;
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		Advertisement_Show_m0B1BB292081708D0B39D54156BE04297D694D653((String_t*)NULL, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_mACAFA94816FD3EA268ADA22A0ADA19C7324C9329 (String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_Show_mACAFA94816FD3EA268ADA22A0ADA19C7324C9329_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___placementId0;
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		Advertisement_Show_m0B1BB292081708D0B39D54156BE04297D694D653(L_0, (ShowOptions_t6637C67D4907C169839DA10D810B696A19941904 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String,UnityEngine.Advertisements.ShowOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_m0B1BB292081708D0B39D54156BE04297D694D653 (String_t* ___placementId0, ShowOptions_t6637C67D4907C169839DA10D810B696A19941904 * ___showOptions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_Show_m0B1BB292081708D0B39D54156BE04297D694D653_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CShowU3Ec__AnonStorey0_t3F78313FF5E87445044283B31B3DB8DF4BBCA6B4 * V_0 = NULL;
	U3CShowU3Ec__AnonStorey1_t7C410F6A2B71DAAC4DAEB5851994E08082C63A80 * V_1 = NULL;
	MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * V_2 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	RuntimeObject* G_B8_1 = NULL;
	{
		U3CShowU3Ec__AnonStorey0_t3F78313FF5E87445044283B31B3DB8DF4BBCA6B4 * L_0 = (U3CShowU3Ec__AnonStorey0_t3F78313FF5E87445044283B31B3DB8DF4BBCA6B4 *)il2cpp_codegen_object_new(U3CShowU3Ec__AnonStorey0_t3F78313FF5E87445044283B31B3DB8DF4BBCA6B4_il2cpp_TypeInfo_var);
		U3CShowU3Ec__AnonStorey0__ctor_m7A456803E9063041B330BC82377DBD46EE9F226B(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CShowU3Ec__AnonStorey0_t3F78313FF5E87445044283B31B3DB8DF4BBCA6B4 * L_1 = V_0;
		ShowOptions_t6637C67D4907C169839DA10D810B696A19941904 * L_2 = ___showOptions1;
		NullCheck(L_1);
		L_1->set_showOptions_0(L_2);
		U3CShowU3Ec__AnonStorey0_t3F78313FF5E87445044283B31B3DB8DF4BBCA6B4 * L_3 = V_0;
		NullCheck(L_3);
		ShowOptions_t6637C67D4907C169839DA10D810B696A19941904 * L_4 = L_3->get_showOptions_0();
		if (!L_4)
		{
			goto IL_009a;
		}
	}
	{
		U3CShowU3Ec__AnonStorey0_t3F78313FF5E87445044283B31B3DB8DF4BBCA6B4 * L_5 = V_0;
		NullCheck(L_5);
		ShowOptions_t6637C67D4907C169839DA10D810B696A19941904 * L_6 = L_5->get_showOptions_0();
		NullCheck(L_6);
		Action_1_tCF5AFC4513076B0E4A471BEF3A11BFBBDF57F857 * L_7 = ShowOptions_get_resultCallback_m27CD28A4374E4A248ED438A34CFC06DAFF4CC5A5_inline(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005e;
		}
	}
	{
		U3CShowU3Ec__AnonStorey1_t7C410F6A2B71DAAC4DAEB5851994E08082C63A80 * L_8 = (U3CShowU3Ec__AnonStorey1_t7C410F6A2B71DAAC4DAEB5851994E08082C63A80 *)il2cpp_codegen_object_new(U3CShowU3Ec__AnonStorey1_t7C410F6A2B71DAAC4DAEB5851994E08082C63A80_il2cpp_TypeInfo_var);
		U3CShowU3Ec__AnonStorey1__ctor_m15621250BE36587E9C14FF0782B48A4561A4E6E2(L_8, /*hidden argument*/NULL);
		V_1 = L_8;
		U3CShowU3Ec__AnonStorey1_t7C410F6A2B71DAAC4DAEB5851994E08082C63A80 * L_9 = V_1;
		U3CShowU3Ec__AnonStorey0_t3F78313FF5E87445044283B31B3DB8DF4BBCA6B4 * L_10 = V_0;
		NullCheck(L_9);
		L_9->set_U3CU3Ef__refU240_1(L_10);
		U3CShowU3Ec__AnonStorey1_t7C410F6A2B71DAAC4DAEB5851994E08082C63A80 * L_11 = V_1;
		NullCheck(L_11);
		L_11->set_finishHandler_0((EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *)NULL);
		U3CShowU3Ec__AnonStorey1_t7C410F6A2B71DAAC4DAEB5851994E08082C63A80 * L_12 = V_1;
		U3CShowU3Ec__AnonStorey1_t7C410F6A2B71DAAC4DAEB5851994E08082C63A80 * L_13 = V_1;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_14 = (EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *)il2cpp_codegen_object_new(EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m49B02EDEB592566F4F3153685ABDEFF1AE1C6F48(L_14, L_13, (intptr_t)((intptr_t)U3CShowU3Ec__AnonStorey1_U3CU3Em__0_mF83C278730728A621DCCD9FB11C7618E5272E456_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m49B02EDEB592566F4F3153685ABDEFF1AE1C6F48_RuntimeMethod_var);
		NullCheck(L_12);
		L_12->set_finishHandler_0(L_14);
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		RuntimeObject* L_15 = ((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->get_s_Platform_1();
		U3CShowU3Ec__AnonStorey1_t7C410F6A2B71DAAC4DAEB5851994E08082C63A80 * L_16 = V_1;
		NullCheck(L_16);
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_17 = L_16->get_finishHandler_0();
		NullCheck(L_15);
		InterfaceActionInvoker1< EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * >::Invoke(2 /* System.Void UnityEngine.Advertisements.IPlatform::add_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>) */, IPlatform_t641848859ED10CAE8664D5746AABD9243D5DEA45_il2cpp_TypeInfo_var, L_15, L_17);
	}

IL_005e:
	{
		U3CShowU3Ec__AnonStorey0_t3F78313FF5E87445044283B31B3DB8DF4BBCA6B4 * L_18 = V_0;
		NullCheck(L_18);
		ShowOptions_t6637C67D4907C169839DA10D810B696A19941904 * L_19 = L_18->get_showOptions_0();
		NullCheck(L_19);
		String_t* L_20 = ShowOptions_get_gamerSid_mAC928CD8849A7210ACC5D13584D7E818E5B0CE9E_inline(L_19, /*hidden argument*/NULL);
		bool L_21 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_20, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_009a;
		}
	}
	{
		MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * L_22 = (MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 *)il2cpp_codegen_object_new(MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03_il2cpp_TypeInfo_var);
		MetaData__ctor_m606971BF2B62CA61F60A8598CE58DE11E444411F(L_22, _stringLiteral889C6853A117ACA83EF9D6523335DC065213AE86, /*hidden argument*/NULL);
		V_2 = L_22;
		MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * L_23 = V_2;
		U3CShowU3Ec__AnonStorey0_t3F78313FF5E87445044283B31B3DB8DF4BBCA6B4 * L_24 = V_0;
		NullCheck(L_24);
		ShowOptions_t6637C67D4907C169839DA10D810B696A19941904 * L_25 = L_24->get_showOptions_0();
		NullCheck(L_25);
		String_t* L_26 = ShowOptions_get_gamerSid_mAC928CD8849A7210ACC5D13584D7E818E5B0CE9E_inline(L_25, /*hidden argument*/NULL);
		NullCheck(L_23);
		MetaData_Set_mC1E69DFD59EB90D1406957F5A03BC03F08421C78(L_23, _stringLiteralF8B8AF38BDC23B447C0A57C79371E379107064BD, L_26, /*hidden argument*/NULL);
		MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * L_27 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		Advertisement_SetMetaData_m9E5F80A365BCD419877A5BA460A19AA372CEE197(L_27, /*hidden argument*/NULL);
	}

IL_009a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		RuntimeObject* L_28 = ((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->get_s_Platform_1();
		String_t* L_29 = ___placementId0;
		bool L_30 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_29, /*hidden argument*/NULL);
		G_B6_0 = L_28;
		if (!L_30)
		{
			G_B7_0 = L_28;
			goto IL_00b0;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_0;
		goto IL_00b1;
	}

IL_00b0:
	{
		String_t* L_31 = ___placementId0;
		G_B8_0 = L_31;
		G_B8_1 = G_B7_0;
	}

IL_00b1:
	{
		NullCheck(G_B8_1);
		InterfaceActionInvoker1< String_t* >::Invoke(10 /* System.Void UnityEngine.Advertisements.IPlatform::Show(System.String) */, IPlatform_t641848859ED10CAE8664D5746AABD9243D5DEA45_il2cpp_TypeInfo_var, G_B8_1, G_B8_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::SetMetaData(UnityEngine.Advertisements.MetaData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_SetMetaData_m9E5F80A365BCD419877A5BA460A19AA372CEE197 (MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * ___metaData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_SetMetaData_m9E5F80A365BCD419877A5BA460A19AA372CEE197_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->get_s_Platform_1();
		MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * L_1 = ___metaData0;
		NullCheck(L_0);
		InterfaceActionInvoker1< MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * >::Invoke(11 /* System.Void UnityEngine.Advertisements.IPlatform::SetMetaData(UnityEngine.Advertisements.MetaData) */, IPlatform_t641848859ED10CAE8664D5746AABD9243D5DEA45_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement__cctor_m76FE12D6A92F277BCE8EDB25A21E14BFFED44E44 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement__cctor_m76FE12D6A92F277BCE8EDB25A21E14BFFED44E44_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		bool L_0 = Debug_get_isDebugBuild_mED5A7963C7B055A9ACC5565862BBBA6F3D86EDE8(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = ((int32_t)15);
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 7;
	}

IL_0012:
	{
		((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->set_s_DebugLevel_4(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::<Initialize>m__0(System.Object,UnityEngine.Advertisements.StartEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_U3CInitializeU3Em__0_mC13E79783AFE3182AEAF696DB5D430DBF88AE74F (RuntimeObject * ___sender0, StartEventArgs_t44F8C8482BBCC37963CFBC1C4D2F6473040717E2 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_U3CInitializeU3Em__0_mC13E79783AFE3182AEAF696DB5D430DBF88AE74F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		Advertisement_set_isShowing_mE5B671E7E476A92F42DF678E54A570F56E4D3CC2_inline((bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::<Initialize>m__1(System.Object,UnityEngine.Advertisements.FinishEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_U3CInitializeU3Em__1_m0E492C74DF30EF30A9FDDC74C76D1E2D9EE442CF (RuntimeObject * ___sender0, FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_U3CInitializeU3Em__1_m0E492C74DF30EF30A9FDDC74C76D1E2D9EE442CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		Advertisement_set_isShowing_mE5B671E7E476A92F42DF678E54A570F56E4D3CC2_inline((bool)0, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.Advertisement_<Show>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowU3Ec__AnonStorey0__ctor_m7A456803E9063041B330BC82377DBD46EE9F226B (U3CShowU3Ec__AnonStorey0_t3F78313FF5E87445044283B31B3DB8DF4BBCA6B4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.Advertisement_<Show>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowU3Ec__AnonStorey1__ctor_m15621250BE36587E9C14FF0782B48A4561A4E6E2 (U3CShowU3Ec__AnonStorey1_t7C410F6A2B71DAAC4DAEB5851994E08082C63A80 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement_<Show>c__AnonStorey1::<>m__0(System.Object,UnityEngine.Advertisements.FinishEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowU3Ec__AnonStorey1_U3CU3Em__0_mF83C278730728A621DCCD9FB11C7618E5272E456 (U3CShowU3Ec__AnonStorey1_t7C410F6A2B71DAAC4DAEB5851994E08082C63A80 * __this, RuntimeObject * ___sender0, FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CShowU3Ec__AnonStorey1_U3CU3Em__0_mF83C278730728A621DCCD9FB11C7618E5272E456_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShowU3Ec__AnonStorey0_t3F78313FF5E87445044283B31B3DB8DF4BBCA6B4 * L_0 = __this->get_U3CU3Ef__refU240_1();
		NullCheck(L_0);
		ShowOptions_t6637C67D4907C169839DA10D810B696A19941904 * L_1 = L_0->get_showOptions_0();
		NullCheck(L_1);
		Action_1_tCF5AFC4513076B0E4A471BEF3A11BFBBDF57F857 * L_2 = ShowOptions_get_resultCallback_m27CD28A4374E4A248ED438A34CFC06DAFF4CC5A5_inline(L_1, /*hidden argument*/NULL);
		FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D * L_3 = ___e1;
		NullCheck(L_3);
		int32_t L_4 = FinishEventArgs_get_showResult_m2E1ABEAC1FB9E9480FAA50FEC6F199FB8F35AC61_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Action_1_Invoke_m6431A46044768588D11B4BFFC429BC5D372B9F22(L_2, L_4, /*hidden argument*/Action_1_Invoke_m6431A46044768588D11B4BFFC429BC5D372B9F22_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		RuntimeObject* L_5 = ((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->get_s_Platform_1();
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_6 = __this->get_finishHandler_0();
		NullCheck(L_5);
		InterfaceActionInvoker1< EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * >::Invoke(3 /* System.Void UnityEngine.Advertisements.IPlatform::remove_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>) */, IPlatform_t641848859ED10CAE8664D5746AABD9243D5DEA45_il2cpp_TypeInfo_var, L_5, L_6);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.Android.Platform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform__ctor_m0C70085D7025B71BBDD57EDCCE173DD0C29CA7CF (Platform_t90C2BEBA869F5A23475D57DE636EEFBB4507A833 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform__ctor_m0C70085D7025B71BBDD57EDCCE173DD0C29CA7CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * V_0 = NULL;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_1 = NULL;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_t72F996A75B4B771B9572C3770CF2D2C7A5B4783D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m159565DEF4041D92C0763D1F4A0684140241CD9A(__this, _stringLiteral917C9CF2A56DD78A0328D91BA993514184062FA0, /*hidden argument*/NULL);
		AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * L_0 = (AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE *)il2cpp_codegen_object_new(AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mAE416E812DB3911279C0FE87A7760247CE1BBFA8(L_0, _stringLiteralA004F7A71A664C60394CBEBEC2BC71B669D9F986, /*hidden argument*/NULL);
		V_0 = L_0;
		AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * L_1 = V_0;
		NullCheck(L_1);
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_2 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_m4C3EAB3C9E067EBB6D0CE6A84B685B0105163602(L_1, _stringLiteral32EAF9220C696B2C222E361F16ACA8FB08EC6083, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_m4C3EAB3C9E067EBB6D0CE6A84B685B0105163602_RuntimeMethod_var);
		__this->set_m_CurrentActivity_4(L_2);
		AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * L_3 = (AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE *)il2cpp_codegen_object_new(AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mAE416E812DB3911279C0FE87A7760247CE1BBFA8(L_3, _stringLiteral0D21F31C648AC9C9B51D4171AB74DD781833979A, /*hidden argument*/NULL);
		__this->set_m_UnityAds_5(L_3);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_4, _stringLiteralB7B2A8437C0A1E2363180D3054962C29A385A0EA, /*hidden argument*/NULL);
		V_2 = L_4;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = V_2;
		NullCheck(L_5);
		Object_set_hideFlags_mB0B45A19A5871EF407D7B09E0EB76003496BA4F0(L_5, ((int32_t)63), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = V_2;
		V_1 = L_6;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = V_1;
		NullCheck(L_7);
		CallbackExecutor_tB2DFCCED2168CFD8C1F6FD0C21679DA386B8CA78 * L_8 = GameObject_AddComponent_TisCallbackExecutor_tB2DFCCED2168CFD8C1F6FD0C21679DA386B8CA78_mCC2C32F9E49A29594A990104922CABCEE39656BC(L_7, /*hidden argument*/GameObject_AddComponent_TisCallbackExecutor_tB2DFCCED2168CFD8C1F6FD0C21679DA386B8CA78_mCC2C32F9E49A29594A990104922CABCEE39656BC_RuntimeMethod_var);
		__this->set_m_CallbackExecutor_6(L_8);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207(L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::add_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_add_OnStart_mB20D63D0938F392CB39C8BDFE0DB805F5DD180CE (Platform_t90C2BEBA869F5A23475D57DE636EEFBB4507A833 * __this, EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_add_OnStart_mB20D63D0938F392CB39C8BDFE0DB805F5DD180CE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * V_0 = NULL;
	EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * V_1 = NULL;
	{
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_0 = __this->get_OnStart_7();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 ** L_2 = __this->get_address_of_OnStart_7();
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_3 = V_1;
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_6 = V_0;
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 *>((EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 **)L_2, ((EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_8 = V_0;
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 *)L_8) == ((RuntimeObject*)(EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::remove_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_remove_OnStart_m9A1BF262764CE91C6C94CB2C339236E24EEF2ECA (Platform_t90C2BEBA869F5A23475D57DE636EEFBB4507A833 * __this, EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_remove_OnStart_m9A1BF262764CE91C6C94CB2C339236E24EEF2ECA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * V_0 = NULL;
	EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * V_1 = NULL;
	{
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_0 = __this->get_OnStart_7();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 ** L_2 = __this->get_address_of_OnStart_7();
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_3 = V_1;
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_6 = V_0;
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 *>((EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 **)L_2, ((EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_8 = V_0;
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 *)L_8) == ((RuntimeObject*)(EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::add_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_add_OnFinish_mB756F7D35C58B819D5FCD94A429CEF9CBAD4D476 (Platform_t90C2BEBA869F5A23475D57DE636EEFBB4507A833 * __this, EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_add_OnFinish_mB756F7D35C58B819D5FCD94A429CEF9CBAD4D476_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * V_0 = NULL;
	EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * V_1 = NULL;
	{
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_0 = __this->get_OnFinish_8();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 ** L_2 = __this->get_address_of_OnFinish_8();
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_3 = V_1;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_6 = V_0;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *>((EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 **)L_2, ((EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_8 = V_0;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *)L_8) == ((RuntimeObject*)(EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::remove_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_remove_OnFinish_mCB9C4058443EFD8A2496CDCE28CD586D5CCDA81B (Platform_t90C2BEBA869F5A23475D57DE636EEFBB4507A833 * __this, EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_remove_OnFinish_mCB9C4058443EFD8A2496CDCE28CD586D5CCDA81B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * V_0 = NULL;
	EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * V_1 = NULL;
	{
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_0 = __this->get_OnFinish_8();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 ** L_2 = __this->get_address_of_OnFinish_8();
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_3 = V_1;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_6 = V_0;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *>((EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 **)L_2, ((EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_8 = V_0;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *)L_8) == ((RuntimeObject*)(EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.String UnityEngine.Advertisements.Android.Platform::get_version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Platform_get_version_m2165C81FEA7E65C238A469F305E024A0AAE9F537 (Platform_t90C2BEBA869F5A23475D57DE636EEFBB4507A833 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_get_version_m2165C81FEA7E65C238A469F305E024A0AAE9F537_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * L_0 = __this->get_m_UnityAds_5();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		String_t* L_2 = AndroidJavaObject_CallStatic_TisString_t_mE1D1D49B8FA114E77A891F5EB629D9C7F33443C3(L_0, _stringLiteral0C1FD808AD249A5ECA5AEB173551B9517A17B282, L_1, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_mE1D1D49B8FA114E77A891F5EB629D9C7F33443C3_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean UnityEngine.Advertisements.Android.Platform::get_debugMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_get_debugMode_m88670DC63BE2369F283FA2F227FEF66C23C4A076 (Platform_t90C2BEBA869F5A23475D57DE636EEFBB4507A833 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_get_debugMode_m88670DC63BE2369F283FA2F227FEF66C23C4A076_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * L_0 = __this->get_m_UnityAds_5();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		bool L_2 = AndroidJavaObject_CallStatic_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m1E6217B3D2813D788B7489F3AC377BDF21740AA0(L_0, _stringLiteralF2821705E8B15F3FF900B39BF3A67C46EAEA4E13, L_1, /*hidden argument*/AndroidJavaObject_CallStatic_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m1E6217B3D2813D788B7489F3AC377BDF21740AA0_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::set_debugMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_set_debugMode_mAC48C1F112F86BF62CDEB5BBBA8CC6D7F23A7F7A (Platform_t90C2BEBA869F5A23475D57DE636EEFBB4507A833 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_set_debugMode_mAC48C1F112F86BF62CDEB5BBBA8CC6D7F23A7F7A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * L_0 = __this->get_m_UnityAds_5();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		bool L_3 = ___value0;
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m12D78F5584C63F5D8B2344CBA8611EFBDDA669AF(L_0, _stringLiteral8D092CC1A22B79EACE7BF34FB9C6028C189A9AA7, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::Initialize(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_Initialize_mC80B75683A2F0B9A8BC6DE59C5A8FB7CFD017C4A (Platform_t90C2BEBA869F5A23475D57DE636EEFBB4507A833 * __this, String_t* ___gameId0, bool ___testMode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_Initialize_mC80B75683A2F0B9A8BC6DE59C5A8FB7CFD017C4A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * L_0 = __this->get_m_UnityAds_5();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_3 = __this->get_m_CurrentActivity_4();
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_2;
		String_t* L_5 = ___gameId0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, __this);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)__this);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_6;
		bool L_8 = ___testMode1;
		bool L_9 = L_8;
		RuntimeObject * L_10 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_10);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m12D78F5584C63F5D8B2344CBA8611EFBDDA669AF(L_0, _stringLiteral4728F278B1371BFD6C3804C60F121BB5B72B9089, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Android.Platform::IsReady(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_IsReady_m0E678285B1389B3DFA9C3F9B83197C70B39E1644 (Platform_t90C2BEBA869F5A23475D57DE636EEFBB4507A833 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_IsReady_m0E678285B1389B3DFA9C3F9B83197C70B39E1644_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___placementId0;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * L_1 = __this->get_m_UnityAds_5();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_1);
		bool L_3 = AndroidJavaObject_CallStatic_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m1E6217B3D2813D788B7489F3AC377BDF21740AA0(L_1, _stringLiteral8799419DB1A362129B0BB2A9C7C2557C505892B1, L_2, /*hidden argument*/AndroidJavaObject_CallStatic_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m1E6217B3D2813D788B7489F3AC377BDF21740AA0_RuntimeMethod_var);
		return L_3;
	}

IL_001d:
	{
		AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * L_4 = __this->get_m_UnityAds_5();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_5;
		String_t* L_7 = ___placementId0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		NullCheck(L_4);
		bool L_8 = AndroidJavaObject_CallStatic_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m1E6217B3D2813D788B7489F3AC377BDF21740AA0(L_4, _stringLiteral8799419DB1A362129B0BB2A9C7C2557C505892B1, L_6, /*hidden argument*/AndroidJavaObject_CallStatic_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m1E6217B3D2813D788B7489F3AC377BDF21740AA0_RuntimeMethod_var);
		return L_8;
	}
}
// UnityEngine.Advertisements.PlacementState UnityEngine.Advertisements.Android.Platform::GetPlacementState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Platform_GetPlacementState_mB317AC02F22AF19A4F6DDC3A6C2D968473E22AD7 (Platform_t90C2BEBA869F5A23475D57DE636EEFBB4507A833 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_GetPlacementState_mB317AC02F22AF19A4F6DDC3A6C2D968473E22AD7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * V_0 = NULL;
	{
		String_t* L_0 = ___placementId0;
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * L_1 = __this->get_m_UnityAds_5();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_1);
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_3 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_m6CAE75FB51C5A02521C239A7232735573C51EAE7(L_1, _stringLiteral557558B34F2AA9E49DEBFE5365CE1B694D2E5E50, L_2, /*hidden argument*/AndroidJavaObject_CallStatic_TisAndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_m6CAE75FB51C5A02521C239A7232735573C51EAE7_RuntimeMethod_var);
		V_0 = L_3;
		goto IL_003d;
	}

IL_0022:
	{
		AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * L_4 = __this->get_m_UnityAds_5();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_5;
		String_t* L_7 = ___placementId0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		NullCheck(L_4);
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_8 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_m6CAE75FB51C5A02521C239A7232735573C51EAE7(L_4, _stringLiteral557558B34F2AA9E49DEBFE5365CE1B694D2E5E50, L_6, /*hidden argument*/AndroidJavaObject_CallStatic_TisAndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_m6CAE75FB51C5A02521C239A7232735573C51EAE7_RuntimeMethod_var);
		V_0 = L_8;
	}

IL_003d:
	{
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_9 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_9);
		int32_t L_11 = AndroidJavaObject_Call_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mF7220A3D48BA18737AA0C7DAF0828822275A69A6(L_9, _stringLiteralEC10B73D4109575DF29DD7FB554A2FCBC4C763BF, L_10, /*hidden argument*/AndroidJavaObject_Call_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mF7220A3D48BA18737AA0C7DAF0828822275A69A6_RuntimeMethod_var);
		return (int32_t)(L_11);
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::Show(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_Show_m3C8BB4E4290FC06A0E04AA8DBF413AFAE63E2014 (Platform_t90C2BEBA869F5A23475D57DE636EEFBB4507A833 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_Show_m3C8BB4E4290FC06A0E04AA8DBF413AFAE63E2014_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___placementId0;
		if (L_0)
		{
			goto IL_002a;
		}
	}
	{
		AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * L_1 = __this->get_m_UnityAds_5();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_2;
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_4 = __this->get_m_CurrentActivity_4();
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		NullCheck(L_1);
		AndroidJavaObject_CallStatic_m12D78F5584C63F5D8B2344CBA8611EFBDDA669AF(L_1, _stringLiteral9FB29051F2217270A7B253A39F820310D85A78F0, L_3, /*hidden argument*/NULL);
		goto IL_004d;
	}

IL_002a:
	{
		AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * L_5 = __this->get_m_UnityAds_5();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_6;
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_8 = __this->get_m_CurrentActivity_4();
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_7;
		String_t* L_10 = ___placementId0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		NullCheck(L_5);
		AndroidJavaObject_CallStatic_m12D78F5584C63F5D8B2344CBA8611EFBDDA669AF(L_5, _stringLiteral9FB29051F2217270A7B253A39F820310D85A78F0, L_9, /*hidden argument*/NULL);
	}

IL_004d:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::SetMetaData(UnityEngine.Advertisements.MetaData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_SetMetaData_m4366A683C878A51B484A407036487E1BB2FB2873 (Platform_t90C2BEBA869F5A23475D57DE636EEFBB4507A833 * __this, MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * ___metaData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_SetMetaData_m4366A683C878A51B484A407036487E1BB2FB2873_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * V_0 = NULL;
	KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_2 = __this->get_m_CurrentActivity_4();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_3 = (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D *)il2cpp_codegen_object_new(AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m39462EAD9AD82CBD90DEB4B7127F3D6C87A02BFA(L_3, _stringLiteralF123AACEB875108E1FDCF9AF0BEB2A57841A993F, L_1, /*hidden argument*/NULL);
		V_0 = L_3;
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_4 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_5;
		MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * L_7 = ___metaData0;
		NullCheck(L_7);
		String_t* L_8 = MetaData_get_category_mD5A4B8E5F7B8CD2334C420743D2D649B55CFE4B4_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		NullCheck(L_4);
		AndroidJavaObject_Call_m0FEBE4E59445D8527C88C992AA2D00EEF749AB56(L_4, _stringLiteral5A1E55886BE4869389C689BFCF0AC3CE52CEE272, L_6, /*hidden argument*/NULL);
		MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * L_9 = ___metaData0;
		NullCheck(L_9);
		RuntimeObject* L_10 = MetaData_get_Values_mCF0DEA12D879A640D3BB9D3F3492F1038CC86C42_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject* L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetEnumerator() */, IEnumerable_1_t4392D5E5B321E5D2C8C0F9C7FFF1BD2EBF9DE17E_il2cpp_TypeInfo_var, L_10);
		V_2 = L_11;
	}

IL_0040:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0072;
		}

IL_0045:
		{
			RuntimeObject* L_12 = V_2;
			NullCheck(L_12);
			KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D  L_13 = InterfaceFuncInvoker0< KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current() */, IEnumerator_1_t1B544616A0E00870EA4AEE27B24E2D5122C6EFBB_il2cpp_TypeInfo_var, L_12);
			V_1 = L_13;
			AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_14 = V_0;
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = L_15;
			String_t* L_17 = KeyValuePair_2_get_Key_m70ABAD248D45E166CEC58AF007095CEC5E79B1DD_inline((KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m70ABAD248D45E166CEC58AF007095CEC5E79B1DD_RuntimeMethod_var);
			NullCheck(L_16);
			ArrayElementTypeCheck (L_16, L_17);
			(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_17);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = L_16;
			RuntimeObject * L_19 = KeyValuePair_2_get_Value_m5D1180FCE84ACA037CCCF151B9696C4575634758_inline((KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m5D1180FCE84ACA037CCCF151B9696C4575634758_RuntimeMethod_var);
			NullCheck(L_18);
			ArrayElementTypeCheck (L_18, L_19);
			(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_19);
			NullCheck(L_14);
			AndroidJavaObject_Call_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m57EE1ACB271D15DD0E2DDD6B28805C31799A0976(L_14, _stringLiteral65C10DC3549FE07424148A8A4790A3341ECBC253, L_18, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m57EE1ACB271D15DD0E2DDD6B28805C31799A0976_RuntimeMethod_var);
		}

IL_0072:
		{
			RuntimeObject* L_20 = V_2;
			NullCheck(L_20);
			bool L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_0045;
			}
		}

IL_007d:
		{
			IL2CPP_LEAVE(0x8F, FINALLY_0082);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0082;
	}

FINALLY_0082:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_22 = V_2;
			if (!L_22)
			{
				goto IL_008e;
			}
		}

IL_0088:
		{
			RuntimeObject* L_23 = V_2;
			NullCheck(L_23);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_23);
		}

IL_008e:
		{
			IL2CPP_END_FINALLY(130)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(130)
	{
		IL2CPP_JUMP_TBL(0x8F, IL_008f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008f:
	{
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_24 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_25 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_24);
		AndroidJavaObject_Call_m0FEBE4E59445D8527C88C992AA2D00EEF749AB56(L_24, _stringLiteral4015B57A143AEC5156FD1444A017A32137A3FD0F, L_25, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.CallbackExecutor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackExecutor__ctor_m8E6498A7AC21E2D6604186B0E10A4AC8BE5E3FB5 (CallbackExecutor_tB2DFCCED2168CFD8C1F6FD0C21679DA386B8CA78 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CallbackExecutor__ctor_m8E6498A7AC21E2D6604186B0E10A4AC8BE5E3FB5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_tBE60FA9EC7CEAC6A2101CA6BF8E09035C8DA2F3E * L_0 = (Queue_1_tBE60FA9EC7CEAC6A2101CA6BF8E09035C8DA2F3E *)il2cpp_codegen_object_new(Queue_1_tBE60FA9EC7CEAC6A2101CA6BF8E09035C8DA2F3E_il2cpp_TypeInfo_var);
		Queue_1__ctor_m35B9A4EE3C2F24AD505894592906B21408CD941F(L_0, /*hidden argument*/Queue_1__ctor_m35B9A4EE3C2F24AD505894592906B21408CD941F_RuntimeMethod_var);
		__this->set_s_Queue_4(L_0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.CallbackExecutor::Post(System.Action`1<UnityEngine.Advertisements.CallbackExecutor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackExecutor_Post_m36135492FCF9F10CC763800AF029CD3CA7FB808F (CallbackExecutor_tB2DFCCED2168CFD8C1F6FD0C21679DA386B8CA78 * __this, Action_1_t089491CF3BD2890A851D82690754A8F0DE899372 * ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CallbackExecutor_Post_m36135492FCF9F10CC763800AF029CD3CA7FB808F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Queue_1_tBE60FA9EC7CEAC6A2101CA6BF8E09035C8DA2F3E * L_0 = __this->get_s_Queue_4();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		Queue_1_tBE60FA9EC7CEAC6A2101CA6BF8E09035C8DA2F3E * L_2 = __this->get_s_Queue_4();
		Action_1_t089491CF3BD2890A851D82690754A8F0DE899372 * L_3 = ___action0;
		NullCheck(L_2);
		Queue_1_Enqueue_m3308BE0D3E2E51C614586CCD44A94FA0114A74FB(L_2, L_3, /*hidden argument*/Queue_1_Enqueue_m3308BE0D3E2E51C614586CCD44A94FA0114A74FB_RuntimeMethod_var);
		IL2CPP_LEAVE(0x25, FINALLY_001e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001e;
	}

FINALLY_001e:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(30)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(30)
	{
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0025:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.CallbackExecutor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackExecutor_Update_m1A14F2576D7B2E36A37C859D9992BDCE948A71B3 (CallbackExecutor_tB2DFCCED2168CFD8C1F6FD0C21679DA386B8CA78 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CallbackExecutor_Update_m1A14F2576D7B2E36A37C859D9992BDCE948A71B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Queue_1_tBE60FA9EC7CEAC6A2101CA6BF8E09035C8DA2F3E * L_0 = __this->get_s_Queue_4();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0023;
		}

IL_0012:
		{
			Queue_1_tBE60FA9EC7CEAC6A2101CA6BF8E09035C8DA2F3E * L_2 = __this->get_s_Queue_4();
			NullCheck(L_2);
			Action_1_t089491CF3BD2890A851D82690754A8F0DE899372 * L_3 = Queue_1_Dequeue_m0899B365B923FB0EA04C3CEA846D77D591466A9A(L_2, /*hidden argument*/Queue_1_Dequeue_m0899B365B923FB0EA04C3CEA846D77D591466A9A_RuntimeMethod_var);
			NullCheck(L_3);
			Action_1_Invoke_m4BBBBC75FFA78FFC723324C1AE3547B729B7B9A7(L_3, __this, /*hidden argument*/Action_1_Invoke_m4BBBBC75FFA78FFC723324C1AE3547B729B7B9A7_RuntimeMethod_var);
		}

IL_0023:
		{
			Queue_1_tBE60FA9EC7CEAC6A2101CA6BF8E09035C8DA2F3E * L_4 = __this->get_s_Queue_4();
			NullCheck(L_4);
			int32_t L_5 = Queue_1_get_Count_mB77F587ACB1B3FDEF62424C1AF03B338665E09E4_inline(L_4, /*hidden argument*/Queue_1_get_Count_mB77F587ACB1B3FDEF62424C1AF03B338665E09E4_RuntimeMethod_var);
			if ((((int32_t)L_5) > ((int32_t)0)))
			{
				goto IL_0012;
			}
		}

IL_0034:
		{
			IL2CPP_LEAVE(0x40, FINALLY_0039);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0039;
	}

FINALLY_0039:
	{ // begin finally (depth: 1)
		RuntimeObject * L_6 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(57)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(57)
	{
		IL2CPP_JUMP_TBL(0x40, IL_0040)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0040:
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
// System.Void UnityEngine.Advertisements.Editor.Configuration::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration__ctor_m42ABE38058F98F5B29CFF4792026E3F5062924AC (Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B * __this, String_t* ___configurationResponse0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Configuration__ctor_m42ABE38058F98F5B29CFF4792026E3F5062924AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___configurationResponse0;
		RuntimeObject * L_1 = SimpleJson_DeserializeObject_m8FBC827CD76E9F41BFA40E9C4CFEC06E27693068(L_0, /*hidden argument*/NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IDictionary_2_t6AF508DE18DA398DBB91330BEEB14B0CFBD4A8ED_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject * L_3 = InterfaceFuncInvoker1< RuntimeObject *, String_t* >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(!0) */, IDictionary_2_t6AF508DE18DA398DBB91330BEEB14B0CFBD4A8ED_il2cpp_TypeInfo_var, L_2, _stringLiteral3EA3F9802ACCF8817BACD6F3DF46A73B93CCDDEC);
		Configuration_set_enabled_mCFF582C142C846C492A667B7A8245362CFBD6EEA_inline(__this, ((*(bool*)((bool*)UnBox(L_3, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2 * L_4 = (Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2 *)il2cpp_codegen_object_new(Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mBD6D6B7E24C98373B567A88DEBFFD981338268CB(L_4, /*hidden argument*/Dictionary_2__ctor_mBD6D6B7E24C98373B567A88DEBFFD981338268CB_RuntimeMethod_var);
		Configuration_set_placements_m58B284DCBFBB00F222415918863C70444FBC521C_inline(__this, L_4, /*hidden argument*/NULL);
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject * L_6 = InterfaceFuncInvoker1< RuntimeObject *, String_t* >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(!0) */, IDictionary_2_t6AF508DE18DA398DBB91330BEEB14B0CFBD4A8ED_il2cpp_TypeInfo_var, L_5, _stringLiteral8E19CF483F6804FAF41E303CA2D5BF9D654E1AAA);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_6, IList_1_tE09735A322C3B17000EF4E4BC8026FEDEB7B0D9B_il2cpp_TypeInfo_var)));
		RuntimeObject* L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_6, IList_1_tE09735A322C3B17000EF4E4BC8026FEDEB7B0D9B_il2cpp_TypeInfo_var)));
		V_2 = L_7;
	}

IL_0049:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a7;
		}

IL_004e:
		{
			RuntimeObject* L_8 = V_2;
			NullCheck(L_8);
			RuntimeObject * L_9 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IEnumerator_1_tDDB69E91697CCB64C7993B651487CEEC287DB7E8_il2cpp_TypeInfo_var, L_8);
			V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_9, IDictionary_2_t6AF508DE18DA398DBB91330BEEB14B0CFBD4A8ED_il2cpp_TypeInfo_var));
			RuntimeObject* L_10 = V_1;
			NullCheck(L_10);
			RuntimeObject * L_11 = InterfaceFuncInvoker1< RuntimeObject *, String_t* >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(!0) */, IDictionary_2_t6AF508DE18DA398DBB91330BEEB14B0CFBD4A8ED_il2cpp_TypeInfo_var, L_10, _stringLiteral87EA5DFC8B8E384D848979496E706390B497E547);
			V_3 = ((String_t*)CastclassSealed((RuntimeObject*)L_11, String_t_il2cpp_TypeInfo_var));
			RuntimeObject* L_12 = V_1;
			NullCheck(L_12);
			RuntimeObject * L_13 = InterfaceFuncInvoker1< RuntimeObject *, String_t* >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(!0) */, IDictionary_2_t6AF508DE18DA398DBB91330BEEB14B0CFBD4A8ED_il2cpp_TypeInfo_var, L_12, _stringLiteralFC6C7AEBB9F667E85F8ACF67C2383439C94D136B);
			V_4 = ((*(bool*)((bool*)UnBox(L_13, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var))));
			RuntimeObject* L_14 = V_1;
			NullCheck(L_14);
			RuntimeObject * L_15 = InterfaceFuncInvoker1< RuntimeObject *, String_t* >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(!0) */, IDictionary_2_t6AF508DE18DA398DBB91330BEEB14B0CFBD4A8ED_il2cpp_TypeInfo_var, L_14, _stringLiteral7505D64A54E061B7ACD54CCD58B49DC43500B635);
			if (!((*(bool*)((bool*)UnBox(L_15, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))))
			{
				goto IL_0099;
			}
		}

IL_0092:
		{
			String_t* L_16 = V_3;
			Configuration_set_defaultPlacement_mD6EF91ACCF46A53B23423908BCFF542A042AE306_inline(__this, L_16, /*hidden argument*/NULL);
		}

IL_0099:
		{
			Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2 * L_17 = Configuration_get_placements_m5E43756B0A956FA5E27C34D2A0E4A69AF46CA7D2_inline(__this, /*hidden argument*/NULL);
			String_t* L_18 = V_3;
			bool L_19 = V_4;
			NullCheck(L_17);
			Dictionary_2_Add_m2C2E98147E134A4B7B225E6AC43FF58E27B65160(L_17, L_18, L_19, /*hidden argument*/Dictionary_2_Add_m2C2E98147E134A4B7B225E6AC43FF58E27B65160_RuntimeMethod_var);
		}

IL_00a7:
		{
			RuntimeObject* L_20 = V_2;
			NullCheck(L_20);
			bool L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_004e;
			}
		}

IL_00b2:
		{
			IL2CPP_LEAVE(0xC4, FINALLY_00b7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b7;
	}

FINALLY_00b7:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_22 = V_2;
			if (!L_22)
			{
				goto IL_00c3;
			}
		}

IL_00bd:
		{
			RuntimeObject* L_23 = V_2;
			NullCheck(L_23);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_23);
		}

IL_00c3:
		{
			IL2CPP_END_FINALLY(183)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(183)
	{
		IL2CPP_JUMP_TBL(0xC4, IL_00c4)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00c4:
	{
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Editor.Configuration::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Configuration_get_enabled_m7FE06FE9C7378CE267FAFC9F92B6D12B70F9E30C (Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CenabledU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Configuration::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration_set_enabled_mCFF582C142C846C492A667B7A8245362CFBD6EEA (Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CenabledU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String UnityEngine.Advertisements.Editor.Configuration::get_defaultPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Configuration_get_defaultPlacement_mCC8A06910123E7A8B660D4E08DF3C46447061261 (Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CdefaultPlacementU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Configuration::set_defaultPlacement(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration_set_defaultPlacement_mD6EF91ACCF46A53B23423908BCFF542A042AE306 (Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CdefaultPlacementU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> UnityEngine.Advertisements.Editor.Configuration::get_placements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2 * Configuration_get_placements_m5E43756B0A956FA5E27C34D2A0E4A69AF46CA7D2 (Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2 * L_0 = __this->get_U3CplacementsU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Configuration::set_placements(System.Collections.Generic.Dictionary`2<System.String,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration_set_placements_m58B284DCBFBB00F222415918863C70444FBC521C (Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B * __this, Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2 * ___value0, const RuntimeMethod* method)
{
	{
		Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2 * L_0 = ___value0;
		__this->set_U3CplacementsU3Ek__BackingField_2(L_0);
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
// System.Void UnityEngine.Advertisements.Editor.Placeholder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placeholder__ctor_m1997FA43B2E7F669302AFD0A66315BFB8E6D3385 (Placeholder_tB58246E9925EEB8DEFBD0EC187EC59F96EF4E244 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Texture2D UnityEngine.Advertisements.Editor.Placeholder::TextureFromFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * Placeholder_TextureFromFile_mEA41A60EBA22D1034360B534076DD2A5B680E917 (String_t* ___filePath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Placeholder_TextureFromFile_mEA41A60EBA22D1034360B534076DD2A5B680E917_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * V_0 = NULL;
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_0 = (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)il2cpp_codegen_object_new(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var);
		Texture2D__ctor_m0C86A87871AA8075791EF98499D34DA95ACB0E35(L_0, 1, 1, /*hidden argument*/NULL);
		V_0 = L_0;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_1 = V_0;
		String_t* L_2 = ___filePath0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = File_ReadAllBytes_mF29468CED0B7B3B7C0971ACEBB16A38683718BEC(L_2, /*hidden argument*/NULL);
		ImageConversion_LoadImage_m94295492E96C38984406A23CC2A3931758ECE86B(L_1, L_3, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Placeholder::add_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placeholder_add_OnFinish_m914B9D70F9BEC033E220D5A8E5CE3450D9BFFEC1 (Placeholder_tB58246E9925EEB8DEFBD0EC187EC59F96EF4E244 * __this, EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Placeholder_add_OnFinish_m914B9D70F9BEC033E220D5A8E5CE3450D9BFFEC1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * V_0 = NULL;
	EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * V_1 = NULL;
	{
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_0 = __this->get_OnFinish_9();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 ** L_2 = __this->get_address_of_OnFinish_9();
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_3 = V_1;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_6 = V_0;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *>((EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 **)L_2, ((EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_8 = V_0;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *)L_8) == ((RuntimeObject*)(EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Placeholder::remove_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placeholder_remove_OnFinish_m17BD387E06DAD9F4B141E0D71D1B8122C3F5A221 (Placeholder_tB58246E9925EEB8DEFBD0EC187EC59F96EF4E244 * __this, EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Placeholder_remove_OnFinish_m17BD387E06DAD9F4B141E0D71D1B8122C3F5A221_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * V_0 = NULL;
	EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * V_1 = NULL;
	{
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_0 = __this->get_OnFinish_9();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 ** L_2 = __this->get_address_of_OnFinish_9();
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_3 = V_1;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_6 = V_0;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *>((EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 **)L_2, ((EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_8 = V_0;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *)L_8) == ((RuntimeObject*)(EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Placeholder::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placeholder_Load_m629C26B0255A1130B72FCE27634BAC9DD913C47C (Placeholder_tB58246E9925EEB8DEFBD0EC187EC59F96EF4E244 * __this, String_t* ___extensionPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Placeholder_Load_m629C26B0255A1130B72FCE27634BAC9DD913C47C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___extensionPath0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_1 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_0, _stringLiteral40C382BF6646D6024C142802C3433D7FBF13D049, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_2 = Placeholder_TextureFromFile_mEA41A60EBA22D1034360B534076DD2A5B680E917(L_1, /*hidden argument*/NULL);
		__this->set_m_LandscapeTexture_4(L_2);
		String_t* L_3 = ___extensionPath0;
		String_t* L_4 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_3, _stringLiteral1032734CFF97E5539EA6D27B891DD4A5C74F8FF1, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_5 = Placeholder_TextureFromFile_mEA41A60EBA22D1034360B534076DD2A5B680E917(L_4, /*hidden argument*/NULL);
		__this->set_m_PortraitTexture_5(L_5);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Placeholder::Show(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placeholder_Show_m0D4D914A796F60C1D9D22095B3CA5921C4E85569 (Placeholder_tB58246E9925EEB8DEFBD0EC187EC59F96EF4E244 * __this, String_t* ___placementId0, bool ___allowSkip1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___placementId0;
		__this->set_m_PlacementId_7(L_0);
		bool L_1 = ___allowSkip1;
		__this->set_m_AllowSkip_8(L_1);
		__this->set_m_Showing_6((bool)1);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Placeholder::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placeholder_OnGUI_mBA04187E47C058FDE91585D14E9A96677BB1F23D (Placeholder_tB58246E9925EEB8DEFBD0EC187EC59F96EF4E244 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Placeholder_OnGUI_mBA04187E47C058FDE91585D14E9A96677BB1F23D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_m_Showing_6();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		int32_t L_1 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		int32_t L_2 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_3), (0.0f), (0.0f), (((float)((float)L_1))), (((float)((float)L_2))), /*hidden argument*/NULL);
		WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100 * L_4 = (WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100 *)il2cpp_codegen_object_new(WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100_il2cpp_TypeInfo_var);
		WindowFunction__ctor_m216C357C45DF9A8ABE74056B8BDB1B7F94EE2D81(L_4, __this, (intptr_t)((intptr_t)Placeholder_ModalWindowFunction_m9B0445B8340347DEA0A3FBE2338F08E4C1A0939C_RuntimeMethod_var), /*hidden argument*/NULL);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		GUI_ModalWindow_mE896E6C0DBC159C5F558D2589F88FDFA353C7B2A(0, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Placeholder::ModalWindowFunction(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placeholder_ModalWindowFunction_m9B0445B8340347DEA0A3FBE2338F08E4C1A0939C (Placeholder_tB58246E9925EEB8DEFBD0EC187EC59F96EF4E244 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Placeholder_ModalWindowFunction_m9B0445B8340347DEA0A3FBE2338F08E4C1A0939C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * V_0 = NULL;
	EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * V_1 = NULL;
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * G_B3_0 = NULL;
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	{
		int32_t L_0 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_2), (0.0f), (0.0f), (((float)((float)L_0))), (((float)((float)L_1))), /*hidden argument*/NULL);
		int32_t L_3 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		int32_t L_4 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		G_B1_0 = L_2;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			G_B2_0 = L_2;
			goto IL_0035;
		}
	}
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_5 = __this->get_m_LandscapeTexture_4();
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_003b;
	}

IL_0035:
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_6 = __this->get_m_PortraitTexture_5();
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}

IL_003b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		GUI_DrawTexture_m479A50461EA9C7F63C232F88D5C518E99005740E(G_B3_1, G_B3_0, 1, /*hidden argument*/NULL);
		bool L_7 = __this->get_m_AllowSkip_8();
		if (!L_7)
		{
			goto IL_009b;
		}
	}
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_8), (20.0f), (20.0f), (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		bool L_9 = GUI_Button_m0F0D437C533454A4BF0096E0DC55EEB66366E08D(L_8, _stringLiteral3DA474537AC378C616D6B301ACC1674BC348CECD, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_009b;
		}
	}
	{
		__this->set_m_Showing_6((bool)0);
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_10 = __this->get_OnFinish_9();
		V_0 = L_10;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_11 = V_0;
		if (!L_11)
		{
			goto IL_009b;
		}
	}
	{
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_12 = V_0;
		String_t* L_13 = __this->get_m_PlacementId_7();
		FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D * L_14 = (FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D *)il2cpp_codegen_object_new(FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D_il2cpp_TypeInfo_var);
		FinishEventArgs__ctor_mAB2A8CF579F4A6921762B7B6D38CA6C89E1C951A(L_14, L_13, 1, /*hidden argument*/NULL);
		NullCheck(L_12);
		EventHandler_1_Invoke_m502F374415B712E741EE202C4029BF6352AE1F9B(L_12, __this, L_14, /*hidden argument*/EventHandler_1_Invoke_m502F374415B712E741EE202C4029BF6352AE1F9B_RuntimeMethod_var);
	}

IL_009b:
	{
		int32_t L_15 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_16), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)((int32_t)170)))))), (20.0f), (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		bool L_17 = GUI_Button_m0F0D437C533454A4BF0096E0DC55EEB66366E08D(L_16, _stringLiteralBBFA773E5A63A5EA58C9B6207E608CA0120E592A, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00f1;
		}
	}
	{
		__this->set_m_Showing_6((bool)0);
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_18 = __this->get_OnFinish_9();
		V_1 = L_18;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_19 = V_1;
		if (!L_19)
		{
			goto IL_00f1;
		}
	}
	{
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_20 = V_1;
		String_t* L_21 = __this->get_m_PlacementId_7();
		FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D * L_22 = (FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D *)il2cpp_codegen_object_new(FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D_il2cpp_TypeInfo_var);
		FinishEventArgs__ctor_mAB2A8CF579F4A6921762B7B6D38CA6C89E1C951A(L_22, L_21, 2, /*hidden argument*/NULL);
		NullCheck(L_20);
		EventHandler_1_Invoke_m502F374415B712E741EE202C4029BF6352AE1F9B(L_20, __this, L_22, /*hidden argument*/EventHandler_1_Invoke_m502F374415B712E741EE202C4029BF6352AE1F9B_RuntimeMethod_var);
	}

IL_00f1:
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
// System.Void UnityEngine.Advertisements.Editor.Platform::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform__ctor_mF1303477BC0694896FD4DD958776D5AA4FEBF61F (Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740 * __this, String_t* ___extensionPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform__ctor_mF1303477BC0694896FD4DD958776D5AA4FEBF61F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_1 = NULL;
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_0, _stringLiteralB3832017D4D701978B399BF4A12AFCD308862676, /*hidden argument*/NULL);
		V_1 = L_0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = V_1;
		NullCheck(L_1);
		Object_set_hideFlags_mB0B45A19A5871EF407D7B09E0EB76003496BA4F0(L_1, ((int32_t)63), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = V_1;
		V_0 = L_2;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = V_0;
		NullCheck(L_3);
		Placeholder_tB58246E9925EEB8DEFBD0EC187EC59F96EF4E244 * L_4 = GameObject_AddComponent_TisPlaceholder_tB58246E9925EEB8DEFBD0EC187EC59F96EF4E244_m9FF5E1326EF984C05953980B29E50869467D33FC(L_3, /*hidden argument*/GameObject_AddComponent_TisPlaceholder_tB58246E9925EEB8DEFBD0EC187EC59F96EF4E244_m9FF5E1326EF984C05953980B29E50869467D33FC_RuntimeMethod_var);
		__this->set_m_Placeholder_3(L_4);
		Placeholder_tB58246E9925EEB8DEFBD0EC187EC59F96EF4E244 * L_5 = __this->get_m_Placeholder_3();
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_6 = (EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *)il2cpp_codegen_object_new(EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m49B02EDEB592566F4F3153685ABDEFF1AE1C6F48(L_6, __this, (intptr_t)((intptr_t)Platform_U3CPlatformU3Em__0_mFA74FD4DBCA3F3C6BB5D5B7968904FC27F3AC336_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m49B02EDEB592566F4F3153685ABDEFF1AE1C6F48_RuntimeMethod_var);
		NullCheck(L_5);
		Placeholder_add_OnFinish_m914B9D70F9BEC033E220D5A8E5CE3450D9BFFEC1(L_5, L_6, /*hidden argument*/NULL);
		Placeholder_tB58246E9925EEB8DEFBD0EC187EC59F96EF4E244 * L_7 = __this->get_m_Placeholder_3();
		String_t* L_8 = ___extensionPath0;
		NullCheck(L_7);
		Placeholder_Load_m629C26B0255A1130B72FCE27634BAC9DD913C47C(L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::add_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_add_OnStart_mE6E9AAA7B75C0E9FD0FD46AB7BE177DE9F6BB2F8 (Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740 * __this, EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_add_OnStart_mE6E9AAA7B75C0E9FD0FD46AB7BE177DE9F6BB2F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * V_0 = NULL;
	EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * V_1 = NULL;
	{
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_0 = __this->get_OnStart_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 ** L_2 = __this->get_address_of_OnStart_4();
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_3 = V_1;
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_6 = V_0;
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 *>((EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 **)L_2, ((EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_8 = V_0;
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 *)L_8) == ((RuntimeObject*)(EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::remove_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_remove_OnStart_m409FF70B870FD090AFB803918C2FA5EAC6A1E513 (Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740 * __this, EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_remove_OnStart_m409FF70B870FD090AFB803918C2FA5EAC6A1E513_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * V_0 = NULL;
	EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * V_1 = NULL;
	{
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_0 = __this->get_OnStart_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 ** L_2 = __this->get_address_of_OnStart_4();
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_3 = V_1;
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_6 = V_0;
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 *>((EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 **)L_2, ((EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_8 = V_0;
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 *)L_8) == ((RuntimeObject*)(EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::add_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_add_OnFinish_m8CC33CB8CA0255A10CCB90EEC3973D261FBE719A (Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740 * __this, EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_add_OnFinish_m8CC33CB8CA0255A10CCB90EEC3973D261FBE719A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * V_0 = NULL;
	EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * V_1 = NULL;
	{
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_0 = __this->get_OnFinish_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 ** L_2 = __this->get_address_of_OnFinish_5();
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_3 = V_1;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_6 = V_0;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *>((EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 **)L_2, ((EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_8 = V_0;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *)L_8) == ((RuntimeObject*)(EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::remove_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_remove_OnFinish_m7023A2E5032AF4E34279FF146165408A94AA926C (Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740 * __this, EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_remove_OnFinish_m7023A2E5032AF4E34279FF146165408A94AA926C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * V_0 = NULL;
	EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * V_1 = NULL;
	{
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_0 = __this->get_OnFinish_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 ** L_2 = __this->get_address_of_OnFinish_5();
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_3 = V_1;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_6 = V_0;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *>((EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 **)L_2, ((EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_8 = V_0;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *)L_8) == ((RuntimeObject*)(EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Editor.Platform::get_isInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_get_isInitialized_m92A3AB7F92AD9738FD6884D591C78AD59B5C7B76 (Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740 * __this, const RuntimeMethod* method)
{
	{
		Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B * L_0 = __this->get_m_Configuration_2();
		return (bool)((((int32_t)((((RuntimeObject*)(Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.String UnityEngine.Advertisements.Editor.Platform::get_version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Platform_get_version_m00A70AD251E3B70619787664E9F00BEA5F142913 (Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_get_version_m00A70AD251E3B70619787664E9F00BEA5F142913_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralD24FA45CA77F079CC359C97272276969E6AEAD2C;
	}
}
// System.Boolean UnityEngine.Advertisements.Editor.Platform::get_debugMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_get_debugMode_m4E1C763B4D2AC19093AD4BB2C65EB6E0C36791CE (Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_DebugMode_1();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::set_debugMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_set_debugMode_m8CAEB091B46AFA69F1CC7876DD149F11FE08085D (Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_DebugMode_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::Initialize(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_Initialize_mEC19E086126378716A20B77523860DECB3BC7373 (Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740 * __this, String_t* ___gameId0, bool ___testMode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_Initialize_mEC19E086126378716A20B77523860DECB3BC7373_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitializeU3Ec__AnonStorey0_t01695F5A9E779590A7DB912A981E37FC10911AF8 * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		U3CInitializeU3Ec__AnonStorey0_t01695F5A9E779590A7DB912A981E37FC10911AF8 * L_0 = (U3CInitializeU3Ec__AnonStorey0_t01695F5A9E779590A7DB912A981E37FC10911AF8 *)il2cpp_codegen_object_new(U3CInitializeU3Ec__AnonStorey0_t01695F5A9E779590A7DB912A981E37FC10911AF8_il2cpp_TypeInfo_var);
		U3CInitializeU3Ec__AnonStorey0__ctor_mBBCA23AC00C711603947F9A3D069600F3285C625(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CInitializeU3Ec__AnonStorey0_t01695F5A9E779590A7DB912A981E37FC10911AF8 * L_1 = V_0;
		String_t* L_2 = ___gameId0;
		NullCheck(L_1);
		L_1->set_gameId_1(L_2);
		U3CInitializeU3Ec__AnonStorey0_t01695F5A9E779590A7DB912A981E37FC10911AF8 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_2(__this);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral671BA5FB3E066DCEAC2999D4382E9F212BE335CA);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral671BA5FB3E066DCEAC2999D4382E9F212BE335CA);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_5;
		U3CInitializeU3Ec__AnonStorey0_t01695F5A9E779590A7DB912A981E37FC10911AF8 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = L_7->get_gameId_1();
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_6;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = L_9;
		bool L_11 = ___testMode1;
		bool L_12 = L_11;
		RuntimeObject * L_13 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_13);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = L_10;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteralFB8631CA8BFDB01C1B65F1B35F5D1A40518D434A);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteralFB8631CA8BFDB01C1B65F1B35F5D1A40518D434A);
		String_t* L_15 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_15, /*hidden argument*/NULL);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_16 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_17 = L_16;
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740_il2cpp_TypeInfo_var);
		String_t* L_18 = ((Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740_il2cpp_TypeInfo_var))->get_s_BaseUrl_0();
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_18);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_19 = L_17;
		U3CInitializeU3Ec__AnonStorey0_t01695F5A9E779590A7DB912A981E37FC10911AF8 * L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21 = L_20->get_gameId_1();
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_21);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_22 = L_19;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_23 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_24 = L_23;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteralF8C7EE4BCADD930C99FAE4312EA553F666605698);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralF8C7EE4BCADD930C99FAE4312EA553F666605698);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_25 = L_24;
		String_t* L_26 = Application_get_unityVersion_mC66901DE17E8F4F5BCA46CF3A4DCB34AF245CF99(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var);
		String_t* L_27 = Uri_EscapeDataString_mE1095E7A694DF447B699676C651F5EA5D98A2925(L_26, /*hidden argument*/NULL);
		String_t* L_28 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral9FB1D223110E5C4F42A3067318E9DE9D8FAC124D, L_27, /*hidden argument*/NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_28);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_29 = L_25;
		String_t* L_30 = Platform_get_version_m00A70AD251E3B70619787664E9F00BEA5F142913(__this, /*hidden argument*/NULL);
		String_t* L_31 = Uri_EscapeDataString_mE1095E7A694DF447B699676C651F5EA5D98A2925(L_30, /*hidden argument*/NULL);
		String_t* L_32 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralF72F9B71E459FD0B112794F29FDB825CECEA4CE1, L_31, /*hidden argument*/NULL);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_32);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_32);
		String_t* L_33 = String_Join_m49371BED70248F0FCE970CB4F2E39E9A688AAFA4(_stringLiteral7C4D33785DAA5C2370201FFA236B427AA37C9996, L_29, /*hidden argument*/NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_33);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_33);
		String_t* L_34 = String_Join_m49371BED70248F0FCE970CB4F2E39E9A688AAFA4(_stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8, L_22, /*hidden argument*/NULL);
		V_1 = L_34;
		U3CInitializeU3Ec__AnonStorey0_t01695F5A9E779590A7DB912A981E37FC10911AF8 * L_35 = V_0;
		String_t* L_36 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(WebRequest_t5668DA48802E9FE2F1DE5F5A770B218608B918C8_il2cpp_TypeInfo_var);
		WebRequest_t5668DA48802E9FE2F1DE5F5A770B218608B918C8 * L_37 = WebRequest_Create_m1091F2B969C5E26C5F85E6368BAC1BCC38B61778(L_36, /*hidden argument*/NULL);
		NullCheck(L_35);
		L_35->set_request_0(L_37);
		U3CInitializeU3Ec__AnonStorey0_t01695F5A9E779590A7DB912A981E37FC10911AF8 * L_38 = V_0;
		NullCheck(L_38);
		WebRequest_t5668DA48802E9FE2F1DE5F5A770B218608B918C8 * L_39 = L_38->get_request_0();
		U3CInitializeU3Ec__AnonStorey0_t01695F5A9E779590A7DB912A981E37FC10911AF8 * L_40 = V_0;
		AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * L_41 = (AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 *)il2cpp_codegen_object_new(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m36AEE927E6AFEE950656BC5F7841682D23DE2EBB(L_41, L_40, (intptr_t)((intptr_t)U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_mB73E3D722E9372CB014E0C134FED4104F0C884DE_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_39);
		VirtFuncInvoker2< RuntimeObject*, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 *, RuntimeObject * >::Invoke(18 /* System.IAsyncResult System.Net.WebRequest::BeginGetResponse(System.AsyncCallback,System.Object) */, L_39, L_41, NULL);
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Editor.Platform::IsReady(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_IsReady_mEAFFC10B8FB903BB5489A4D75143130D917E3042 (Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_IsReady_mEAFFC10B8FB903BB5489A4D75143130D917E3042_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B5_0 = 0;
	{
		String_t* L_0 = ___placementId0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		bool L_1 = Platform_get_isInitialized_m92A3AB7F92AD9738FD6884D591C78AD59B5C7B76(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_000d:
	{
		bool L_2 = Platform_get_isInitialized_m92A3AB7F92AD9738FD6884D591C78AD59B5C7B76(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B * L_3 = __this->get_m_Configuration_2();
		NullCheck(L_3);
		Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2 * L_4 = Configuration_get_placements_m5E43756B0A956FA5E27C34D2A0E4A69AF46CA7D2_inline(L_3, /*hidden argument*/NULL);
		String_t* L_5 = ___placementId0;
		NullCheck(L_4);
		bool L_6 = Dictionary_2_ContainsKey_m690614F5C0F5AB08744CC307C64E1A0F24BF08B7(L_4, L_5, /*hidden argument*/Dictionary_2_ContainsKey_m690614F5C0F5AB08744CC307C64E1A0F24BF08B7_RuntimeMethod_var);
		G_B5_0 = ((int32_t)(L_6));
		goto IL_002c;
	}

IL_002b:
	{
		G_B5_0 = 0;
	}

IL_002c:
	{
		return (bool)G_B5_0;
	}
}
// UnityEngine.Advertisements.PlacementState UnityEngine.Advertisements.Editor.Platform::GetPlacementState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Platform_GetPlacementState_m80B976FF39797015B6C499DF0A5C7931785E8665 (Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___placementId0;
		bool L_1 = Platform_IsReady_mEAFFC10B8FB903BB5489A4D75143130D917E3042(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000e:
	{
		return (int32_t)(1);
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::Show(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_Show_mD54D061129AC19C4408B90ECB30E40FCD227D11D (Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_Show_mD54D061129AC19C4408B90ECB30E40FCD227D11D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * V_0 = NULL;
	EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * V_1 = NULL;
	{
		bool L_0 = Platform_get_isInitialized_m92A3AB7F92AD9738FD6884D591C78AD59B5C7B76(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_1 = ___placementId0;
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B * L_2 = __this->get_m_Configuration_2();
		NullCheck(L_2);
		String_t* L_3 = Configuration_get_defaultPlacement_mCC8A06910123E7A8B660D4E08DF3C46447061261_inline(L_2, /*hidden argument*/NULL);
		___placementId0 = L_3;
	}

IL_001e:
	{
		String_t* L_4 = ___placementId0;
		bool L_5 = Platform_IsReady_mEAFFC10B8FB903BB5489A4D75143130D917E3042(__this, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0066;
		}
	}
	{
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_6 = __this->get_OnStart_4();
		V_0 = L_6;
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_7 = V_0;
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_8 = V_0;
		String_t* L_9 = ___placementId0;
		StartEventArgs_t44F8C8482BBCC37963CFBC1C4D2F6473040717E2 * L_10 = (StartEventArgs_t44F8C8482BBCC37963CFBC1C4D2F6473040717E2 *)il2cpp_codegen_object_new(StartEventArgs_t44F8C8482BBCC37963CFBC1C4D2F6473040717E2_il2cpp_TypeInfo_var);
		StartEventArgs__ctor_mDD562E24375595B4900123356F55D3277665D0B7(L_10, L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		EventHandler_1_Invoke_m47462ADFD588CFE2D265C8C4B07098C461BBA71A(L_8, __this, L_10, /*hidden argument*/EventHandler_1_Invoke_m47462ADFD588CFE2D265C8C4B07098C461BBA71A_RuntimeMethod_var);
	}

IL_0044:
	{
		Placeholder_tB58246E9925EEB8DEFBD0EC187EC59F96EF4E244 * L_11 = __this->get_m_Placeholder_3();
		String_t* L_12 = ___placementId0;
		Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B * L_13 = __this->get_m_Configuration_2();
		NullCheck(L_13);
		Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2 * L_14 = Configuration_get_placements_m5E43756B0A956FA5E27C34D2A0E4A69AF46CA7D2_inline(L_13, /*hidden argument*/NULL);
		String_t* L_15 = ___placementId0;
		NullCheck(L_14);
		bool L_16 = Dictionary_2_get_Item_mFB480723F4F6C60392B80393B87A7A1155D5D5B7(L_14, L_15, /*hidden argument*/Dictionary_2_get_Item_mFB480723F4F6C60392B80393B87A7A1155D5D5B7_RuntimeMethod_var);
		NullCheck(L_11);
		Placeholder_Show_m0D4D914A796F60C1D9D22095B3CA5921C4E85569(L_11, L_12, L_16, /*hidden argument*/NULL);
		goto IL_0081;
	}

IL_0066:
	{
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_17 = __this->get_OnFinish_5();
		V_1 = L_17;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_18 = V_1;
		if (!L_18)
		{
			goto IL_0081;
		}
	}
	{
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_19 = V_1;
		String_t* L_20 = ___placementId0;
		FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D * L_21 = (FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D *)il2cpp_codegen_object_new(FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D_il2cpp_TypeInfo_var);
		FinishEventArgs__ctor_mAB2A8CF579F4A6921762B7B6D38CA6C89E1C951A(L_21, L_20, 0, /*hidden argument*/NULL);
		NullCheck(L_19);
		EventHandler_1_Invoke_m502F374415B712E741EE202C4029BF6352AE1F9B(L_19, __this, L_21, /*hidden argument*/EventHandler_1_Invoke_m502F374415B712E741EE202C4029BF6352AE1F9B_RuntimeMethod_var);
	}

IL_0081:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::SetMetaData(UnityEngine.Advertisements.MetaData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_SetMetaData_m1269F0CAD9A855FADF195D9C1E3128EC940F1CA4 (Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740 * __this, MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * ___metaData0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform__cctor_m7B4BCCB09526F8024C7F220066F485953AFD08C7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform__cctor_m7B4BCCB09526F8024C7F220066F485953AFD08C7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740_il2cpp_TypeInfo_var))->set_s_BaseUrl_0(_stringLiteral055B0A36B5CCB99BDAF3D573A31165B3FDC575CE);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::<Platform>m__0(System.Object,UnityEngine.Advertisements.FinishEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_U3CPlatformU3Em__0_mFA74FD4DBCA3F3C6BB5D5B7968904FC27F3AC336 (Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740 * __this, RuntimeObject * ___sender0, FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_U3CPlatformU3Em__0_mFA74FD4DBCA3F3C6BB5D5B7968904FC27F3AC336_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * V_0 = NULL;
	{
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_0 = __this->get_OnFinish_5();
		V_0 = L_0;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_2 = V_0;
		RuntimeObject * L_3 = ___sender0;
		FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D * L_4 = ___e1;
		NullCheck(L_4);
		String_t* L_5 = FinishEventArgs_get_placementId_m04FB4D9DAE07868B56DDF32C420E56B5D191E274_inline(L_4, /*hidden argument*/NULL);
		FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D * L_6 = ___e1;
		NullCheck(L_6);
		int32_t L_7 = FinishEventArgs_get_showResult_m2E1ABEAC1FB9E9480FAA50FEC6F199FB8F35AC61_inline(L_6, /*hidden argument*/NULL);
		FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D * L_8 = (FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D *)il2cpp_codegen_object_new(FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D_il2cpp_TypeInfo_var);
		FinishEventArgs__ctor_mAB2A8CF579F4A6921762B7B6D38CA6C89E1C951A(L_8, L_5, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		EventHandler_1_Invoke_m502F374415B712E741EE202C4029BF6352AE1F9B(L_2, L_3, L_8, /*hidden argument*/EventHandler_1_Invoke_m502F374415B712E741EE202C4029BF6352AE1F9B_RuntimeMethod_var);
	}

IL_0025:
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
// System.Void UnityEngine.Advertisements.Editor.Platform_<Initialize>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0__ctor_mBBCA23AC00C711603947F9A3D069600F3285C625 (U3CInitializeU3Ec__AnonStorey0_t01695F5A9E779590A7DB912A981E37FC10911AF8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform_<Initialize>c__AnonStorey0::<>m__0(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_mB73E3D722E9372CB014E0C134FED4104F0C884DE (U3CInitializeU3Ec__AnonStorey0_t01695F5A9E779590A7DB912A981E37FC10911AF8 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_mB73E3D722E9372CB014E0C134FED4104F0C884DE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebResponse_t5C91B5B83E2FBA2EABC6FDF2A70E9AFD9BB059BD * V_0 = NULL;
	StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * V_1 = NULL;
	String_t* V_2 = NULL;
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		WebRequest_t5668DA48802E9FE2F1DE5F5A770B218608B918C8 * L_0 = __this->get_request_0();
		RuntimeObject* L_1 = ___result0;
		NullCheck(L_0);
		WebResponse_t5C91B5B83E2FBA2EABC6FDF2A70E9AFD9BB059BD * L_2 = VirtFuncInvoker1< WebResponse_t5C91B5B83E2FBA2EABC6FDF2A70E9AFD9BB059BD *, RuntimeObject* >::Invoke(19 /* System.Net.WebResponse System.Net.WebRequest::EndGetResponse(System.IAsyncResult) */, L_0, L_1);
		V_0 = L_2;
		WebResponse_t5C91B5B83E2FBA2EABC6FDF2A70E9AFD9BB059BD * L_3 = V_0;
		NullCheck(L_3);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_4 = VirtFuncInvoker0< Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * >::Invoke(11 /* System.IO.Stream System.Net.WebResponse::GetResponseStream() */, L_3);
		StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * L_5 = (StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E *)il2cpp_codegen_object_new(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E_il2cpp_TypeInfo_var);
		StreamReader__ctor_m6AD25C8043D76E8E4BB14554D59A69035A1908EB(L_5, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.IO.TextReader::ReadToEnd() */, L_6);
		V_2 = L_7;
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740 * L_8 = __this->get_U24this_2();
			String_t* L_9 = V_2;
			Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B * L_10 = (Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B *)il2cpp_codegen_object_new(Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B_il2cpp_TypeInfo_var);
			Configuration__ctor_m42ABE38058F98F5B29CFF4792026E3F5062924AC(L_10, L_9, /*hidden argument*/NULL);
			NullCheck(L_8);
			L_8->set_m_Configuration_2(L_10);
			Platform_t8B216EBF236DAD4583B1BB43FD792439EC1BE740 * L_11 = __this->get_U24this_2();
			NullCheck(L_11);
			Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B * L_12 = L_11->get_m_Configuration_2();
			NullCheck(L_12);
			bool L_13 = Configuration_get_enabled_m7FE06FE9C7378CE267FAFC9F92B6D12B70F9E30C_inline(L_12, /*hidden argument*/NULL);
			if (L_13)
			{
				goto IL_0060;
			}
		}

IL_0046:
		{
			String_t* L_14 = __this->get_gameId_1();
			String_t* L_15 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral229139371E58C5CBAC88C9BB3060EDA248DDFD83, L_14, _stringLiteral82560273B9A62F238C15B883B68B3828619C0097, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_15, /*hidden argument*/NULL);
		}

IL_0060:
		{
			goto IL_008c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0065;
		throw e;
	}

CATCH_0065:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		String_t* L_16 = __this->get_gameId_1();
		String_t* L_17 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral6167FEAB84C2ACDC920DA8B9A36187DA8A0457E8, L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_17, /*hidden argument*/NULL);
		String_t* L_18 = V_2;
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_18, /*hidden argument*/NULL);
		Exception_t * L_19 = V_3;
		Debug_LogException_mBAA6702C240E37B2A834AA74E4FDC15A3A5589A9(L_19, /*hidden argument*/NULL);
		goto IL_008c;
	} // end catch (depth: 1)

IL_008c:
	{
		StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * L_20 = V_1;
		NullCheck(L_20);
		VirtActionInvoker0::Invoke(7 /* System.Void System.IO.TextReader::Close() */, L_20);
		WebResponse_t5C91B5B83E2FBA2EABC6FDF2A70E9AFD9BB059BD * L_21 = V_0;
		NullCheck(L_21);
		VirtActionInvoker0::Invoke(9 /* System.Void System.Net.WebResponse::Close() */, L_21);
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
// System.Void UnityEngine.Advertisements.ErrorEventArgs::.ctor(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorEventArgs__ctor_m81988E49417A843D749E261997BF0742F62BE567 (ErrorEventArgs_t77C07CCB4554162961BBE00E3B7E52DDA8648409 * __this, int64_t ___error0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ErrorEventArgs__ctor_m81988E49417A843D749E261997BF0742F62BE567_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7(__this, /*hidden argument*/NULL);
		int64_t L_0 = ___error0;
		ErrorEventArgs_set_error_mB7C612852765B7A153F5AF95C7FE0564F625842E_inline(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___message1;
		ErrorEventArgs_set_message_m0B56CCDB4119DA34736EB408EF1A8658A5B9FFCA_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.ErrorEventArgs::set_error(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorEventArgs_set_error_mB7C612852765B7A153F5AF95C7FE0564F625842E (ErrorEventArgs_t77C07CCB4554162961BBE00E3B7E52DDA8648409 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_U3CerrorU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.ErrorEventArgs::set_message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorEventArgs_set_message_m0B56CCDB4119DA34736EB408EF1A8658A5B9FFCA (ErrorEventArgs_t77C07CCB4554162961BBE00E3B7E52DDA8648409 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CmessageU3Ek__BackingField_2(L_0);
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
// System.Void UnityEngine.Advertisements.FinishEventArgs::.ctor(System.String,UnityEngine.Advertisements.ShowResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishEventArgs__ctor_mAB2A8CF579F4A6921762B7B6D38CA6C89E1C951A (FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D * __this, String_t* ___placementId0, int32_t ___showResult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FinishEventArgs__ctor_mAB2A8CF579F4A6921762B7B6D38CA6C89E1C951A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___placementId0;
		FinishEventArgs_set_placementId_mEAF8F650A835C16B121D9DDAE27FC8EAF3705932_inline(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___showResult1;
		FinishEventArgs_set_showResult_mC5E531083B18F5BD9FD8D7978869B3CA873E03A9_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Advertisements.FinishEventArgs::get_placementId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FinishEventArgs_get_placementId_m04FB4D9DAE07868B56DDF32C420E56B5D191E274 (FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CplacementIdU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.FinishEventArgs::set_placementId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishEventArgs_set_placementId_mEAF8F650A835C16B121D9DDAE27FC8EAF3705932 (FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CplacementIdU3Ek__BackingField_1(L_0);
		return;
	}
}
// UnityEngine.Advertisements.ShowResult UnityEngine.Advertisements.FinishEventArgs::get_showResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FinishEventArgs_get_showResult_m2E1ABEAC1FB9E9480FAA50FEC6F199FB8F35AC61 (FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CshowResultU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.FinishEventArgs::set_showResult(UnityEngine.Advertisements.ShowResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishEventArgs_set_showResult_mC5E531083B18F5BD9FD8D7978869B3CA873E03A9 (FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CshowResultU3Ek__BackingField_2(L_0);
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
// System.Void UnityEngine.Advertisements.MetaData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaData__ctor_m606971BF2B62CA61F60A8598CE58DE11E444411F (MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * __this, String_t* ___category0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaData__ctor_m606971BF2B62CA61F60A8598CE58DE11E444411F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)il2cpp_codegen_object_new(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997(L_0, /*hidden argument*/Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997_RuntimeMethod_var);
		__this->set_m_MetaData_0(L_0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___category0;
		MetaData_set_category_m2830E7B95AFD4002ADB2605B57798C955A91492D_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Advertisements.MetaData::get_category()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetaData_get_category_mD5A4B8E5F7B8CD2334C420743D2D649B55CFE4B4 (MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CcategoryU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.MetaData::set_category(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaData_set_category_m2830E7B95AFD4002ADB2605B57798C955A91492D (MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CcategoryU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.MetaData::Set(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaData_Set_mC1E69DFD59EB90D1406957F5A03BC03F08421C78 (MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaData_Set_mC1E69DFD59EB90D1406957F5A03BC03F08421C78_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_m_MetaData_0();
		String_t* L_1 = ___key0;
		RuntimeObject * L_2 = ___value1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(!0,!1) */, IDictionary_2_t6AF508DE18DA398DBB91330BEEB14B0CFBD4A8ED_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Advertisements.MetaData::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetaData_get_Values_mCF0DEA12D879A640D3BB9D3F3492F1038CC86C42 (MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_m_MetaData_0();
		return L_0;
	}
}
// System.String UnityEngine.Advertisements.MetaData::ToJSON()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetaData_ToJSON_mD835EFD200C52C6E7C6149A59B3A5CA26B9AA2B6 (MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_m_MetaData_0();
		String_t* L_1 = SimpleJson_SerializeObject_m6A632F316533FDB2537F43AB1DCFE17674319CDF(L_0, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.ReadyEventArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadyEventArgs__ctor_m570135928FA95C668418C3695EDBBDB4DF92710D (ReadyEventArgs_tA3E33B18240D91F48C92CC62CB5515388449E250 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadyEventArgs__ctor_m570135928FA95C668418C3695EDBBDB4DF92710D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___placementId0;
		ReadyEventArgs_set_placementId_m410E9AD00ED9A0802E9514E5FC7EB6F038B22CF0_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.ReadyEventArgs::set_placementId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadyEventArgs_set_placementId_m410E9AD00ED9A0802E9514E5FC7EB6F038B22CF0 (ReadyEventArgs_tA3E33B18240D91F48C92CC62CB5515388449E250 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CplacementIdU3Ek__BackingField_1(L_0);
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
// System.Void UnityEngine.Advertisements.ShowOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowOptions__ctor_mFA3CF8481579968DEEAF240DA1588A55733CEB3A (ShowOptions_t6637C67D4907C169839DA10D810B696A19941904 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Action`1<UnityEngine.Advertisements.ShowResult> UnityEngine.Advertisements.ShowOptions::get_resultCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_tCF5AFC4513076B0E4A471BEF3A11BFBBDF57F857 * ShowOptions_get_resultCallback_m27CD28A4374E4A248ED438A34CFC06DAFF4CC5A5 (ShowOptions_t6637C67D4907C169839DA10D810B696A19941904 * __this, const RuntimeMethod* method)
{
	{
		Action_1_tCF5AFC4513076B0E4A471BEF3A11BFBBDF57F857 * L_0 = __this->get_U3CresultCallbackU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.ShowOptions::set_resultCallback(System.Action`1<UnityEngine.Advertisements.ShowResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowOptions_set_resultCallback_m34293CD7813DDB15195D862A03F431464380DF54 (ShowOptions_t6637C67D4907C169839DA10D810B696A19941904 * __this, Action_1_tCF5AFC4513076B0E4A471BEF3A11BFBBDF57F857 * ___value0, const RuntimeMethod* method)
{
	{
		Action_1_tCF5AFC4513076B0E4A471BEF3A11BFBBDF57F857 * L_0 = ___value0;
		__this->set_U3CresultCallbackU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String UnityEngine.Advertisements.ShowOptions::get_gamerSid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ShowOptions_get_gamerSid_mAC928CD8849A7210ACC5D13584D7E818E5B0CE9E (ShowOptions_t6637C67D4907C169839DA10D810B696A19941904 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CgamerSidU3Ek__BackingField_1();
		return L_0;
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
// System.Void UnityEngine.Advertisements.SimpleJson.JsonArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonArray__ctor_m190332332C3BF195EADD7525794EF5C475234E41 (JsonArray_tEC81164ADEC87B1B3F3D28FEA89F9AF6458479A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonArray__ctor_m190332332C3BF195EADD7525794EF5C475234E41_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_il2cpp_TypeInfo_var);
		List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3(__this, /*hidden argument*/List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_RuntimeMethod_var);
		return;
	}
}
// System.String UnityEngine.Advertisements.SimpleJson.JsonArray::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonArray_ToString_m531F50F8079BBB716F8D07BB073E68529D256EA2 (JsonArray_tEC81164ADEC87B1B3F3D28FEA89F9AF6458479A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonArray_ToString_m531F50F8079BBB716F8D07BB073E68529D256EA2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0 = SimpleJson_SerializeObject_m6A632F316533FDB2537F43AB1DCFE17674319CDF(__this, /*hidden argument*/NULL);
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0012;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B2_0 = L_2;
	}

IL_0012:
	{
		return G_B2_0;
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
// System.Void UnityEngine.Advertisements.SimpleJson.JsonObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonObject__ctor_mEAF7641A152C9EE2A9986C140A2D09CD7A38506D (JsonObject_t5430387D9A9215A629850E012C366DBE5AD5A2B5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject__ctor_mEAF7641A152C9EE2A9986C140A2D09CD7A38506D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)il2cpp_codegen_object_new(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997(L_0, /*hidden argument*/Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997_RuntimeMethod_var);
		__this->set__members_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.SimpleJson.JsonObject::Add(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonObject_Add_mBC99CAE805475925CA29DF32865152001EE5E11B (JsonObject_t5430387D9A9215A629850E012C366DBE5AD5A2B5 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_Add_mBC99CAE805475925CA29DF32865152001EE5E11B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = __this->get__members_0();
		String_t* L_1 = ___key0;
		RuntimeObject * L_2 = ___value1;
		NullCheck(L_0);
		Dictionary_2_Add_m233AC329D8947CF1508C9A2B8DE8EDCD68B6F4AA(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_Add_m233AC329D8947CF1508C9A2B8DE8EDCD68B6F4AA_RuntimeMethod_var);
		return;
	}
}
// System.Collections.Generic.ICollection`1<System.String> UnityEngine.Advertisements.SimpleJson.JsonObject::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonObject_get_Keys_mBAFEDD67FA47ACCA8F257BAC6ABE78C810D30076 (JsonObject_t5430387D9A9215A629850E012C366DBE5AD5A2B5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_get_Keys_mBAFEDD67FA47ACCA8F257BAC6ABE78C810D30076_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = __this->get__members_0();
		NullCheck(L_0);
		KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * L_1 = Dictionary_2_get_Keys_m7B57A5AC1B782E34F03B1FA3669A21FFD88BF3CB(L_0, /*hidden argument*/Dictionary_2_get_Keys_m7B57A5AC1B782E34F03B1FA3669A21FFD88BF3CB_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean UnityEngine.Advertisements.SimpleJson.JsonObject::TryGetValue(System.String,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonObject_TryGetValue_m23A9A08DA9F8949A2DF98FF48B3B7F875B690232 (JsonObject_t5430387D9A9215A629850E012C366DBE5AD5A2B5 * __this, String_t* ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_TryGetValue_m23A9A08DA9F8949A2DF98FF48B3B7F875B690232_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = __this->get__members_0();
		String_t* L_1 = ___key0;
		RuntimeObject ** L_2 = ___value1;
		NullCheck(L_0);
		bool L_3 = Dictionary_2_TryGetValue_m935923B91B00967999E33EC4190EE547765C57E9(L_0, L_1, (RuntimeObject **)L_2, /*hidden argument*/Dictionary_2_TryGetValue_m935923B91B00967999E33EC4190EE547765C57E9_RuntimeMethod_var);
		return L_3;
	}
}
// System.Collections.Generic.ICollection`1<System.Object> UnityEngine.Advertisements.SimpleJson.JsonObject::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonObject_get_Values_m7F333ACBB5BF264AE7D9A4E4D7E3FF6D99F3C48F (JsonObject_t5430387D9A9215A629850E012C366DBE5AD5A2B5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_get_Values_m7F333ACBB5BF264AE7D9A4E4D7E3FF6D99F3C48F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = __this->get__members_0();
		NullCheck(L_0);
		ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * L_1 = Dictionary_2_get_Values_mEC63E5E39D1BC0EEAC921182387411F0D161ED68(L_0, /*hidden argument*/Dictionary_2_get_Values_mEC63E5E39D1BC0EEAC921182387411F0D161ED68_RuntimeMethod_var);
		return L_1;
	}
}
// System.Object UnityEngine.Advertisements.SimpleJson.JsonObject::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonObject_get_Item_m3974CAD65AB3504BCD865AF183459DB3BD16DB0D (JsonObject_t5430387D9A9215A629850E012C366DBE5AD5A2B5 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_get_Item_m3974CAD65AB3504BCD865AF183459DB3BD16DB0D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = __this->get__members_0();
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		RuntimeObject * L_2 = Dictionary_2_get_Item_mB490F7029D7451FAF06E3020040E604B500BA3B2(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_mB490F7029D7451FAF06E3020040E604B500BA3B2_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void UnityEngine.Advertisements.SimpleJson.JsonObject::set_Item(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonObject_set_Item_m48F8DCDF4A2E826EA0C41A5D744524A2CFCA3B3E (JsonObject_t5430387D9A9215A629850E012C366DBE5AD5A2B5 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_set_Item_m48F8DCDF4A2E826EA0C41A5D744524A2CFCA3B3E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = __this->get__members_0();
		String_t* L_1 = ___key0;
		RuntimeObject * L_2 = ___value1;
		NullCheck(L_0);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.Advertisements.SimpleJson.JsonObject::Add(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonObject_Add_m08DED5600C74B2D37B7BDDB7BED501E986338750 (JsonObject_t5430387D9A9215A629850E012C366DBE5AD5A2B5 * __this, KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D  ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_Add_m08DED5600C74B2D37B7BDDB7BED501E986338750_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = __this->get__members_0();
		String_t* L_1 = KeyValuePair_2_get_Key_m70ABAD248D45E166CEC58AF007095CEC5E79B1DD_inline((KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D *)(&___item0), /*hidden argument*/KeyValuePair_2_get_Key_m70ABAD248D45E166CEC58AF007095CEC5E79B1DD_RuntimeMethod_var);
		RuntimeObject * L_2 = KeyValuePair_2_get_Value_m5D1180FCE84ACA037CCCF151B9696C4575634758_inline((KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D *)(&___item0), /*hidden argument*/KeyValuePair_2_get_Value_m5D1180FCE84ACA037CCCF151B9696C4575634758_RuntimeMethod_var);
		NullCheck(L_0);
		Dictionary_2_Add_m233AC329D8947CF1508C9A2B8DE8EDCD68B6F4AA(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_Add_m233AC329D8947CF1508C9A2B8DE8EDCD68B6F4AA_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.Advertisements.SimpleJson.JsonObject::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonObject_Clear_m9872C37A3F9A62D219DEBC14BFAA5C2E954461FB (JsonObject_t5430387D9A9215A629850E012C366DBE5AD5A2B5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_Clear_m9872C37A3F9A62D219DEBC14BFAA5C2E954461FB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = __this->get__members_0();
		NullCheck(L_0);
		Dictionary_2_Clear_m2AB63CDBD2D220F7E1A0FD9B1248CFEF78767A59(L_0, /*hidden argument*/Dictionary_2_Clear_m2AB63CDBD2D220F7E1A0FD9B1248CFEF78767A59_RuntimeMethod_var);
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.SimpleJson.JsonObject::Contains(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonObject_Contains_mAB6382EE42C764DD64AB52F7BFC9619CACAAE4AA (JsonObject_t5430387D9A9215A629850E012C366DBE5AD5A2B5 * __this, KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D  ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_Contains_mAB6382EE42C764DD64AB52F7BFC9619CACAAE4AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = __this->get__members_0();
		String_t* L_1 = KeyValuePair_2_get_Key_m70ABAD248D45E166CEC58AF007095CEC5E79B1DD_inline((KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D *)(&___item0), /*hidden argument*/KeyValuePair_2_get_Key_m70ABAD248D45E166CEC58AF007095CEC5E79B1DD_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_3 = __this->get__members_0();
		String_t* L_4 = KeyValuePair_2_get_Key_m70ABAD248D45E166CEC58AF007095CEC5E79B1DD_inline((KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D *)(&___item0), /*hidden argument*/KeyValuePair_2_get_Key_m70ABAD248D45E166CEC58AF007095CEC5E79B1DD_RuntimeMethod_var);
		NullCheck(L_3);
		RuntimeObject * L_5 = Dictionary_2_get_Item_mB490F7029D7451FAF06E3020040E604B500BA3B2(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_mB490F7029D7451FAF06E3020040E604B500BA3B2_RuntimeMethod_var);
		RuntimeObject * L_6 = KeyValuePair_2_get_Value_m5D1180FCE84ACA037CCCF151B9696C4575634758_inline((KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D *)(&___item0), /*hidden argument*/KeyValuePair_2_get_Value_m5D1180FCE84ACA037CCCF151B9696C4575634758_RuntimeMethod_var);
		G_B3_0 = ((((RuntimeObject*)(RuntimeObject *)L_5) == ((RuntimeObject*)(RuntimeObject *)L_6))? 1 : 0);
		goto IL_0035;
	}

IL_0034:
	{
		G_B3_0 = 0;
	}

IL_0035:
	{
		return (bool)G_B3_0;
	}
}
// System.Void UnityEngine.Advertisements.SimpleJson.JsonObject::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonObject_CopyTo_m6A3F7EBFA42AF9391466229211B40F7D404266E5 (JsonObject_t5430387D9A9215A629850E012C366DBE5AD5A2B5 * __this, KeyValuePair_2U5BU5D_tEF7B0C36EC296277C5C943CFF843529E0B8B5343* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_CopyTo_m6A3F7EBFA42AF9391466229211B40F7D404266E5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		KeyValuePair_2U5BU5D_tEF7B0C36EC296277C5C943CFF843529E0B8B5343* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral19EDC1210777BA4D45049C29280D9CC5E1064C25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, JsonObject_CopyTo_m6A3F7EBFA42AF9391466229211B40F7D404266E5_RuntimeMethod_var);
	}

IL_0011:
	{
		int32_t L_2 = JsonObject_get_Count_m7DA809D33EA1B615AB672A68D574BA526BC285D0(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		RuntimeObject* L_3 = JsonObject_GetEnumerator_m6F17FCBC0A10A2360A581EAD9D31BBF1807D7FCB(__this, /*hidden argument*/NULL);
		V_2 = L_3;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004d;
		}

IL_0024:
		{
			RuntimeObject* L_4 = V_2;
			NullCheck(L_4);
			KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D  L_5 = InterfaceFuncInvoker0< KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current() */, IEnumerator_1_t1B544616A0E00870EA4AEE27B24E2D5122C6EFBB_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			KeyValuePair_2U5BU5D_tEF7B0C36EC296277C5C943CFF843529E0B8B5343* L_6 = ___array0;
			int32_t L_7 = ___arrayIndex1;
			int32_t L_8 = L_7;
			___arrayIndex1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
			NullCheck(L_6);
			KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D  L_9 = V_1;
			*(KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D *)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))) = L_9;
			Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D *)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))))->___key_0), (void*)NULL);
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D *)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))))->___value_1), (void*)NULL);
			#endif
			int32_t L_10 = V_0;
			int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
			V_0 = L_11;
			if ((((int32_t)L_11) > ((int32_t)0)))
			{
				goto IL_004d;
			}
		}

IL_0048:
		{
			IL2CPP_LEAVE(0x6A, FINALLY_005d);
		}

IL_004d:
		{
			RuntimeObject* L_12 = V_2;
			NullCheck(L_12);
			bool L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_0024;
			}
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x6A, FINALLY_005d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005d;
	}

FINALLY_005d:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_14 = V_2;
			if (!L_14)
			{
				goto IL_0069;
			}
		}

IL_0063:
		{
			RuntimeObject* L_15 = V_2;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_15);
		}

IL_0069:
		{
			IL2CPP_END_FINALLY(93)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(93)
	{
		IL2CPP_JUMP_TBL(0x6A, IL_006a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006a:
	{
		return;
	}
}
// System.Int32 UnityEngine.Advertisements.SimpleJson.JsonObject::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonObject_get_Count_m7DA809D33EA1B615AB672A68D574BA526BC285D0 (JsonObject_t5430387D9A9215A629850E012C366DBE5AD5A2B5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_get_Count_m7DA809D33EA1B615AB672A68D574BA526BC285D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = __this->get__members_0();
		NullCheck(L_0);
		int32_t L_1 = Dictionary_2_get_Count_m0D3273C04573CF4727CE038D0F933FD98C31E8CE(L_0, /*hidden argument*/Dictionary_2_get_Count_m0D3273C04573CF4727CE038D0F933FD98C31E8CE_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean UnityEngine.Advertisements.SimpleJson.JsonObject::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonObject_get_IsReadOnly_m887DA6919381C86C34F20DCAAFDF25E4EB6E04D7 (JsonObject_t5430387D9A9215A629850E012C366DBE5AD5A2B5 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean UnityEngine.Advertisements.SimpleJson.JsonObject::Remove(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonObject_Remove_m3C855C28A5C4B91C525C49FBA471CC7310E49619 (JsonObject_t5430387D9A9215A629850E012C366DBE5AD5A2B5 * __this, KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D  ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_Remove_m3C855C28A5C4B91C525C49FBA471CC7310E49619_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = __this->get__members_0();
		String_t* L_1 = KeyValuePair_2_get_Key_m70ABAD248D45E166CEC58AF007095CEC5E79B1DD_inline((KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D *)(&___item0), /*hidden argument*/KeyValuePair_2_get_Key_m70ABAD248D45E166CEC58AF007095CEC5E79B1DD_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2 = Dictionary_2_Remove_m52E8BCBCCDE8B8BEB6FF90ECC41E80C09A46B4C3(L_0, L_1, /*hidden argument*/Dictionary_2_Remove_m52E8BCBCCDE8B8BEB6FF90ECC41E80C09A46B4C3_RuntimeMethod_var);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> UnityEngine.Advertisements.SimpleJson.JsonObject::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonObject_GetEnumerator_m6F17FCBC0A10A2360A581EAD9D31BBF1807D7FCB (JsonObject_t5430387D9A9215A629850E012C366DBE5AD5A2B5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_GetEnumerator_m6F17FCBC0A10A2360A581EAD9D31BBF1807D7FCB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = __this->get__members_0();
		NullCheck(L_0);
		Enumerator_tEDEEE8F2491CB14C772ACA1B27EE8C40B2A06EC4  L_1 = Dictionary_2_GetEnumerator_mDE657578679707F752B4AB0F30BBCDE434A6EA40(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_mDE657578679707F752B4AB0F30BBCDE434A6EA40_RuntimeMethod_var);
		Enumerator_tEDEEE8F2491CB14C772ACA1B27EE8C40B2A06EC4  L_2 = L_1;
		RuntimeObject * L_3 = Box(Enumerator_tEDEEE8F2491CB14C772ACA1B27EE8C40B2A06EC4_il2cpp_TypeInfo_var, &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator UnityEngine.Advertisements.SimpleJson.JsonObject::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonObject_System_Collections_IEnumerable_GetEnumerator_m69656BF584C4FEB39AB9E76DAE91093351244A86 (JsonObject_t5430387D9A9215A629850E012C366DBE5AD5A2B5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_System_Collections_IEnumerable_GetEnumerator_m69656BF584C4FEB39AB9E76DAE91093351244A86_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = __this->get__members_0();
		NullCheck(L_0);
		Enumerator_tEDEEE8F2491CB14C772ACA1B27EE8C40B2A06EC4  L_1 = Dictionary_2_GetEnumerator_mDE657578679707F752B4AB0F30BBCDE434A6EA40(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_mDE657578679707F752B4AB0F30BBCDE434A6EA40_RuntimeMethod_var);
		Enumerator_tEDEEE8F2491CB14C772ACA1B27EE8C40B2A06EC4  L_2 = L_1;
		RuntimeObject * L_3 = Box(Enumerator_tEDEEE8F2491CB14C772ACA1B27EE8C40B2A06EC4_il2cpp_TypeInfo_var, &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.String UnityEngine.Advertisements.SimpleJson.JsonObject::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonObject_ToString_mC95B68123B7697D40D30B254115EB8C228C28F1D (JsonObject_t5430387D9A9215A629850E012C366DBE5AD5A2B5 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = SimpleJson_SerializeObject_m6A632F316533FDB2537F43AB1DCFE17674319CDF(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PocoJsonSerializerStrategy__ctor_mFB6AA9EE3E3AC69011D626B42A3157F5C2442A78 (PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PocoJsonSerializerStrategy__ctor_mFB6AA9EE3E3AC69011D626B42A3157F5C2442A78_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		ThreadSafeDictionaryValueFactory_2_tAE7D4B6776CD9AEF60B6EC3F80B1E2FEBD1D0F0C * L_0 = (ThreadSafeDictionaryValueFactory_2_tAE7D4B6776CD9AEF60B6EC3F80B1E2FEBD1D0F0C *)il2cpp_codegen_object_new(ThreadSafeDictionaryValueFactory_2_tAE7D4B6776CD9AEF60B6EC3F80B1E2FEBD1D0F0C_il2cpp_TypeInfo_var);
		ThreadSafeDictionaryValueFactory_2__ctor_m2FD7DC8F16BE8C81B410E246EA93344CBD207165(L_0, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 6)), /*hidden argument*/ThreadSafeDictionaryValueFactory_2__ctor_m2FD7DC8F16BE8C81B410E246EA93344CBD207165_RuntimeMethod_var);
		ThreadSafeDictionary_2_t1F1CC2D67B7F84600B060F52825BBEACEE0CFBE0 * L_1 = (ThreadSafeDictionary_2_t1F1CC2D67B7F84600B060F52825BBEACEE0CFBE0 *)il2cpp_codegen_object_new(ThreadSafeDictionary_2_t1F1CC2D67B7F84600B060F52825BBEACEE0CFBE0_il2cpp_TypeInfo_var);
		ThreadSafeDictionary_2__ctor_m577BAD53CD5F4CA3BC01CA2B333E1FAA90211934(L_1, L_0, /*hidden argument*/ThreadSafeDictionary_2__ctor_m577BAD53CD5F4CA3BC01CA2B333E1FAA90211934_RuntimeMethod_var);
		__this->set_ConstructorCache_0(L_1);
		ThreadSafeDictionaryValueFactory_2_t64ADFF2082641786DBFD5FFA3B40EBC3F9576E34 * L_2 = (ThreadSafeDictionaryValueFactory_2_t64ADFF2082641786DBFD5FFA3B40EBC3F9576E34 *)il2cpp_codegen_object_new(ThreadSafeDictionaryValueFactory_2_t64ADFF2082641786DBFD5FFA3B40EBC3F9576E34_il2cpp_TypeInfo_var);
		ThreadSafeDictionaryValueFactory_2__ctor_m1BF1B66ECB81E5FE183F901841185E64F5B1E10D(L_2, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 7)), /*hidden argument*/ThreadSafeDictionaryValueFactory_2__ctor_m1BF1B66ECB81E5FE183F901841185E64F5B1E10D_RuntimeMethod_var);
		ThreadSafeDictionary_2_t9A0BA6506726B243C842230BC1159D24D661386E * L_3 = (ThreadSafeDictionary_2_t9A0BA6506726B243C842230BC1159D24D661386E *)il2cpp_codegen_object_new(ThreadSafeDictionary_2_t9A0BA6506726B243C842230BC1159D24D661386E_il2cpp_TypeInfo_var);
		ThreadSafeDictionary_2__ctor_m4303DDB56537344D0C545CE93CF76B1ED1BE135E(L_3, L_2, /*hidden argument*/ThreadSafeDictionary_2__ctor_m4303DDB56537344D0C545CE93CF76B1ED1BE135E_RuntimeMethod_var);
		__this->set_GetCache_1(L_3);
		ThreadSafeDictionaryValueFactory_2_t00EBEAFF4AF9A2C099AB2D1FEE2582299607C9B2 * L_4 = (ThreadSafeDictionaryValueFactory_2_t00EBEAFF4AF9A2C099AB2D1FEE2582299607C9B2 *)il2cpp_codegen_object_new(ThreadSafeDictionaryValueFactory_2_t00EBEAFF4AF9A2C099AB2D1FEE2582299607C9B2_il2cpp_TypeInfo_var);
		ThreadSafeDictionaryValueFactory_2__ctor_m23CCE3D002BC204F0A0EE0129E9E1B262ACA9EC4(L_4, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 8)), /*hidden argument*/ThreadSafeDictionaryValueFactory_2__ctor_m23CCE3D002BC204F0A0EE0129E9E1B262ACA9EC4_RuntimeMethod_var);
		ThreadSafeDictionary_2_tC79ADF4BCD32D26FEFC08FAB60B79ED5FF57EF37 * L_5 = (ThreadSafeDictionary_2_tC79ADF4BCD32D26FEFC08FAB60B79ED5FF57EF37 *)il2cpp_codegen_object_new(ThreadSafeDictionary_2_tC79ADF4BCD32D26FEFC08FAB60B79ED5FF57EF37_il2cpp_TypeInfo_var);
		ThreadSafeDictionary_2__ctor_m8671FC0A1693265CF95C8102E2A52587CA7CC816(L_5, L_4, /*hidden argument*/ThreadSafeDictionary_2__ctor_m8671FC0A1693265CF95C8102E2A52587CA7CC816_RuntimeMethod_var);
		__this->set_SetCache_2(L_5);
		return;
	}
}
// System.String UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m4CBB91C5C025C2776758E30CF215A723D1061869 (PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E * __this, String_t* ___clrPropertyName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___clrPropertyName0;
		return L_0;
	}
}
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_ConstructorDelegate UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::ContructorDelegateFactory(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorDelegate_t758C58A6B467BA586E2C6B57A535729A620BFCEC * PocoJsonSerializerStrategy_ContructorDelegateFactory_mF316D9302730F571F303D2BCD1311F44DB739A85 (PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E * __this, Type_t * ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PocoJsonSerializerStrategy_ContructorDelegateFactory_mF316D9302730F571F303D2BCD1311F44DB739A85_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * G_B2_0 = NULL;
	Type_t * G_B1_0 = NULL;
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* G_B3_0 = NULL;
	Type_t * G_B3_1 = NULL;
	{
		Type_t * L_0 = ___key0;
		Type_t * L_1 = ___key0;
		NullCheck(L_1);
		bool L_2 = Type_get_IsArray_m0B4E20F93B1B34C0B5C4B089F543D1AA338DC9FE(L_1, /*hidden argument*/NULL);
		G_B1_0 = L_0;
		if (!L_2)
		{
			G_B2_0 = L_0;
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E_il2cpp_TypeInfo_var);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = ((PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E_StaticFields*)il2cpp_codegen_static_fields_for(PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E_il2cpp_TypeInfo_var))->get_ArrayConstructorParameterTypes_4();
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E_il2cpp_TypeInfo_var);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_4 = ((PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E_StaticFields*)il2cpp_codegen_static_fields_for(PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E_il2cpp_TypeInfo_var))->get_EmptyTypes_3();
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t716A5426EE76AD7B91D2D6989AB62AA4BB23A534_il2cpp_TypeInfo_var);
		ConstructorDelegate_t758C58A6B467BA586E2C6B57A535729A620BFCEC * L_5 = ReflectionUtils_GetContructor_m06F8CE353AD06FB0E86D3E4E6B682D99A13870AF(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_GetDelegate> UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::GetterValueFactory(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PocoJsonSerializerStrategy_GetterValueFactory_m279F3C21FA58E7E4DC4B3B7A9C2F88A33724A0A7 (PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PocoJsonSerializerStrategy_GetterValueFactory_m279F3C21FA58E7E4DC4B3B7A9C2F88A33724A0A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	PropertyInfo_t * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	MethodInfo_t * V_3 = NULL;
	FieldInfo_t * V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Dictionary_2_tBB5D728BE58C8B287D432992DC4CDBA9FF9BDAC3 * L_0 = (Dictionary_2_tBB5D728BE58C8B287D432992DC4CDBA9FF9BDAC3 *)il2cpp_codegen_object_new(Dictionary_2_tBB5D728BE58C8B287D432992DC4CDBA9FF9BDAC3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m72DB3E3143E97AA22B589D0E8E216AEE54A248F1(L_0, /*hidden argument*/Dictionary_2__ctor_m72DB3E3143E97AA22B589D0E8E216AEE54A248F1_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		Type_t * L_1 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t716A5426EE76AD7B91D2D6989AB62AA4BB23A534_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ReflectionUtils_GetProperties_m075E8D7F50A961C3EC9844DF6888C534BE0816CC(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>::GetEnumerator() */, IEnumerable_1_t05EA2C465ACA2B28E0BF150280D7C95077A9697F_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0063;
		}

IL_0017:
		{
			RuntimeObject* L_4 = V_2;
			NullCheck(L_4);
			PropertyInfo_t * L_5 = InterfaceFuncInvoker0< PropertyInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyInfo>::get_Current() */, IEnumerator_1_t537D797E2644AF9046B1E4CAAC405D8CE9D01534_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			PropertyInfo_t * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = VirtFuncInvoker0< bool >::Invoke(17 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_6);
			if (!L_7)
			{
				goto IL_0063;
			}
		}

IL_0029:
		{
			PropertyInfo_t * L_8 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t716A5426EE76AD7B91D2D6989AB62AA4BB23A534_il2cpp_TypeInfo_var);
			MethodInfo_t * L_9 = ReflectionUtils_GetGetterMethodInfo_m3C2CE1C8DB9E1E745B2C37F533073BA96AB11807(L_8, /*hidden argument*/NULL);
			V_3 = L_9;
			MethodInfo_t * L_10 = V_3;
			NullCheck(L_10);
			bool L_11 = MethodBase_get_IsStatic_m745A9BDA4869DB7CC4886436C52D34855C1270A5(L_10, /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_0046;
			}
		}

IL_003b:
		{
			MethodInfo_t * L_12 = V_3;
			NullCheck(L_12);
			bool L_13 = MethodBase_get_IsPublic_m9DCA641DBE6F06D0DC4A4B2828641A6DEA97F88B(L_12, /*hidden argument*/NULL);
			if (L_13)
			{
				goto IL_004b;
			}
		}

IL_0046:
		{
			goto IL_0063;
		}

IL_004b:
		{
			RuntimeObject* L_14 = V_0;
			PropertyInfo_t * L_15 = V_1;
			NullCheck(L_15);
			String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_15);
			String_t* L_17 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_16);
			PropertyInfo_t * L_18 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t716A5426EE76AD7B91D2D6989AB62AA4BB23A534_il2cpp_TypeInfo_var);
			GetDelegate_t5384142A3E4A970422627B6C02B4EB4319934A8F * L_19 = ReflectionUtils_GetGetMethod_m204196EEEA5C64D7B0AC4DC6584B20FC5304F26D(L_18, /*hidden argument*/NULL);
			NullCheck(L_14);
			InterfaceActionInvoker2< String_t*, GetDelegate_t5384142A3E4A970422627B6C02B4EB4319934A8F * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>::set_Item(!0,!1) */, IDictionary_2_t26ABEA8823F1D354467705F96691A69FAE7C5EB0_il2cpp_TypeInfo_var, L_14, L_17, L_19);
		}

IL_0063:
		{
			RuntimeObject* L_20 = V_2;
			NullCheck(L_20);
			bool L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_0017;
			}
		}

IL_006e:
		{
			IL2CPP_LEAVE(0x80, FINALLY_0073);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0073;
	}

FINALLY_0073:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_22 = V_2;
			if (!L_22)
			{
				goto IL_007f;
			}
		}

IL_0079:
		{
			RuntimeObject* L_23 = V_2;
			NullCheck(L_23);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_23);
		}

IL_007f:
		{
			IL2CPP_END_FINALLY(115)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(115)
	{
		IL2CPP_JUMP_TBL(0x80, IL_0080)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0080:
	{
		Type_t * L_24 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t716A5426EE76AD7B91D2D6989AB62AA4BB23A534_il2cpp_TypeInfo_var);
		RuntimeObject* L_25 = ReflectionUtils_GetFields_m46D265608D79C2C03B8F4435F7EE20D204BBB8BC(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		RuntimeObject* L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>::GetEnumerator() */, IEnumerable_1_tDA7E9848536B59EBF51798D5D18FC692116C41D8_il2cpp_TypeInfo_var, L_25);
		V_5 = L_26;
	}

IL_008d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00d2;
		}

IL_0092:
		{
			RuntimeObject* L_27 = V_5;
			NullCheck(L_27);
			FieldInfo_t * L_28 = InterfaceFuncInvoker0< FieldInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.FieldInfo>::get_Current() */, IEnumerator_1_tFF29F758EE2F45C6B96A41F6379516A23E129A8C_il2cpp_TypeInfo_var, L_27);
			V_4 = L_28;
			FieldInfo_t * L_29 = V_4;
			NullCheck(L_29);
			bool L_30 = FieldInfo_get_IsStatic_mDEB4099D238E5846246F0ACED3FF9AD9C93D8ECA(L_29, /*hidden argument*/NULL);
			if (L_30)
			{
				goto IL_00b3;
			}
		}

IL_00a7:
		{
			FieldInfo_t * L_31 = V_4;
			NullCheck(L_31);
			bool L_32 = FieldInfo_get_IsPublic_m9265C7C7F78B6E7361D9C3A1D09B8360B699D1C6(L_31, /*hidden argument*/NULL);
			if (L_32)
			{
				goto IL_00b8;
			}
		}

IL_00b3:
		{
			goto IL_00d2;
		}

IL_00b8:
		{
			RuntimeObject* L_33 = V_0;
			FieldInfo_t * L_34 = V_4;
			NullCheck(L_34);
			String_t* L_35 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_34);
			String_t* L_36 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_35);
			FieldInfo_t * L_37 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t716A5426EE76AD7B91D2D6989AB62AA4BB23A534_il2cpp_TypeInfo_var);
			GetDelegate_t5384142A3E4A970422627B6C02B4EB4319934A8F * L_38 = ReflectionUtils_GetGetMethod_m2D0C6E198BA479C371958D16BBCA8B6E946A30F6(L_37, /*hidden argument*/NULL);
			NullCheck(L_33);
			InterfaceActionInvoker2< String_t*, GetDelegate_t5384142A3E4A970422627B6C02B4EB4319934A8F * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>::set_Item(!0,!1) */, IDictionary_2_t26ABEA8823F1D354467705F96691A69FAE7C5EB0_il2cpp_TypeInfo_var, L_33, L_36, L_38);
		}

IL_00d2:
		{
			RuntimeObject* L_39 = V_5;
			NullCheck(L_39);
			bool L_40 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_39);
			if (L_40)
			{
				goto IL_0092;
			}
		}

IL_00de:
		{
			IL2CPP_LEAVE(0xF2, FINALLY_00e3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e3;
	}

FINALLY_00e3:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_41 = V_5;
			if (!L_41)
			{
				goto IL_00f1;
			}
		}

IL_00ea:
		{
			RuntimeObject* L_42 = V_5;
			NullCheck(L_42);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_42);
		}

IL_00f1:
		{
			IL2CPP_END_FINALLY(227)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(227)
	{
		IL2CPP_JUMP_TBL(0xF2, IL_00f2)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00f2:
	{
		RuntimeObject* L_43 = V_0;
		return L_43;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_SetDelegate>> UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::SetterValueFactory(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PocoJsonSerializerStrategy_SetterValueFactory_mE20A64DD8AD75403A8B3255947E702170ADCACF5 (PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PocoJsonSerializerStrategy_SetterValueFactory_mE20A64DD8AD75403A8B3255947E702170ADCACF5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	PropertyInfo_t * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	MethodInfo_t * V_3 = NULL;
	FieldInfo_t * V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Dictionary_2_t82BCBA9454C6D1CD4FFAC1591ED063945EE8000D * L_0 = (Dictionary_2_t82BCBA9454C6D1CD4FFAC1591ED063945EE8000D *)il2cpp_codegen_object_new(Dictionary_2_t82BCBA9454C6D1CD4FFAC1591ED063945EE8000D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2E1903A0E8D9F835053ED23B3AF2AB2F8E379C17(L_0, /*hidden argument*/Dictionary_2__ctor_m2E1903A0E8D9F835053ED23B3AF2AB2F8E379C17_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		Type_t * L_1 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t716A5426EE76AD7B91D2D6989AB62AA4BB23A534_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ReflectionUtils_GetProperties_m075E8D7F50A961C3EC9844DF6888C534BE0816CC(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>::GetEnumerator() */, IEnumerable_1_t05EA2C465ACA2B28E0BF150280D7C95077A9697F_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006e;
		}

IL_0017:
		{
			RuntimeObject* L_4 = V_2;
			NullCheck(L_4);
			PropertyInfo_t * L_5 = InterfaceFuncInvoker0< PropertyInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyInfo>::get_Current() */, IEnumerator_1_t537D797E2644AF9046B1E4CAAC405D8CE9D01534_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			PropertyInfo_t * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = VirtFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_6);
			if (!L_7)
			{
				goto IL_006e;
			}
		}

IL_0029:
		{
			PropertyInfo_t * L_8 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t716A5426EE76AD7B91D2D6989AB62AA4BB23A534_il2cpp_TypeInfo_var);
			MethodInfo_t * L_9 = ReflectionUtils_GetSetterMethodInfo_mE024459BDF87821E8BD0E8B1DBEA54D39F26D023(L_8, /*hidden argument*/NULL);
			V_3 = L_9;
			MethodInfo_t * L_10 = V_3;
			NullCheck(L_10);
			bool L_11 = MethodBase_get_IsStatic_m745A9BDA4869DB7CC4886436C52D34855C1270A5(L_10, /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_0046;
			}
		}

IL_003b:
		{
			MethodInfo_t * L_12 = V_3;
			NullCheck(L_12);
			bool L_13 = MethodBase_get_IsPublic_m9DCA641DBE6F06D0DC4A4B2828641A6DEA97F88B(L_12, /*hidden argument*/NULL);
			if (L_13)
			{
				goto IL_004b;
			}
		}

IL_0046:
		{
			goto IL_006e;
		}

IL_004b:
		{
			RuntimeObject* L_14 = V_0;
			PropertyInfo_t * L_15 = V_1;
			NullCheck(L_15);
			String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_15);
			String_t* L_17 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_16);
			PropertyInfo_t * L_18 = V_1;
			NullCheck(L_18);
			Type_t * L_19 = VirtFuncInvoker0< Type_t * >::Invoke(19 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_18);
			PropertyInfo_t * L_20 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t716A5426EE76AD7B91D2D6989AB62AA4BB23A534_il2cpp_TypeInfo_var);
			SetDelegate_tB85E10DD9F713CAE7ED82A18744F73AED4EA6D04 * L_21 = ReflectionUtils_GetSetMethod_m9EDECE257A6214C6A51920E2F0F252AEEC9F75D4(L_20, /*hidden argument*/NULL);
			KeyValuePair_2_t2640B830EE98728C11234AB1D4A0768B5E02CDF4  L_22;
			memset((&L_22), 0, sizeof(L_22));
			KeyValuePair_2__ctor_m3E3C4CA5E2EF47104F1AFF2ABFD0F5E764A9019E((&L_22), L_19, L_21, /*hidden argument*/KeyValuePair_2__ctor_m3E3C4CA5E2EF47104F1AFF2ABFD0F5E764A9019E_RuntimeMethod_var);
			NullCheck(L_14);
			InterfaceActionInvoker2< String_t*, KeyValuePair_2_t2640B830EE98728C11234AB1D4A0768B5E02CDF4  >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::set_Item(!0,!1) */, IDictionary_2_t2E00AEF12BBE1905A3EA6FA837962AF185C8DDAD_il2cpp_TypeInfo_var, L_14, L_17, L_22);
		}

IL_006e:
		{
			RuntimeObject* L_23 = V_2;
			NullCheck(L_23);
			bool L_24 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_23);
			if (L_24)
			{
				goto IL_0017;
			}
		}

IL_0079:
		{
			IL2CPP_LEAVE(0x8B, FINALLY_007e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007e;
	}

FINALLY_007e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_25 = V_2;
			if (!L_25)
			{
				goto IL_008a;
			}
		}

IL_0084:
		{
			RuntimeObject* L_26 = V_2;
			NullCheck(L_26);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_26);
		}

IL_008a:
		{
			IL2CPP_END_FINALLY(126)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(126)
	{
		IL2CPP_JUMP_TBL(0x8B, IL_008b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008b:
	{
		Type_t * L_27 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t716A5426EE76AD7B91D2D6989AB62AA4BB23A534_il2cpp_TypeInfo_var);
		RuntimeObject* L_28 = ReflectionUtils_GetFields_m46D265608D79C2C03B8F4435F7EE20D204BBB8BC(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		RuntimeObject* L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>::GetEnumerator() */, IEnumerable_1_tDA7E9848536B59EBF51798D5D18FC692116C41D8_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}

IL_0098:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00f5;
		}

IL_009d:
		{
			RuntimeObject* L_30 = V_5;
			NullCheck(L_30);
			FieldInfo_t * L_31 = InterfaceFuncInvoker0< FieldInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.FieldInfo>::get_Current() */, IEnumerator_1_tFF29F758EE2F45C6B96A41F6379516A23E129A8C_il2cpp_TypeInfo_var, L_30);
			V_4 = L_31;
			FieldInfo_t * L_32 = V_4;
			NullCheck(L_32);
			bool L_33 = FieldInfo_get_IsInitOnly_m55ECD5C1B5F908CC9D10FDA743C9014CDB45E044(L_32, /*hidden argument*/NULL);
			if (L_33)
			{
				goto IL_00ca;
			}
		}

IL_00b2:
		{
			FieldInfo_t * L_34 = V_4;
			NullCheck(L_34);
			bool L_35 = FieldInfo_get_IsStatic_mDEB4099D238E5846246F0ACED3FF9AD9C93D8ECA(L_34, /*hidden argument*/NULL);
			if (L_35)
			{
				goto IL_00ca;
			}
		}

IL_00be:
		{
			FieldInfo_t * L_36 = V_4;
			NullCheck(L_36);
			bool L_37 = FieldInfo_get_IsPublic_m9265C7C7F78B6E7361D9C3A1D09B8360B699D1C6(L_36, /*hidden argument*/NULL);
			if (L_37)
			{
				goto IL_00cf;
			}
		}

IL_00ca:
		{
			goto IL_00f5;
		}

IL_00cf:
		{
			RuntimeObject* L_38 = V_0;
			FieldInfo_t * L_39 = V_4;
			NullCheck(L_39);
			String_t* L_40 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_39);
			String_t* L_41 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_40);
			FieldInfo_t * L_42 = V_4;
			NullCheck(L_42);
			Type_t * L_43 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_42);
			FieldInfo_t * L_44 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t716A5426EE76AD7B91D2D6989AB62AA4BB23A534_il2cpp_TypeInfo_var);
			SetDelegate_tB85E10DD9F713CAE7ED82A18744F73AED4EA6D04 * L_45 = ReflectionUtils_GetSetMethod_mDAFA0DE1F7F1351C101885AF0C30FB487C65CB9C(L_44, /*hidden argument*/NULL);
			KeyValuePair_2_t2640B830EE98728C11234AB1D4A0768B5E02CDF4  L_46;
			memset((&L_46), 0, sizeof(L_46));
			KeyValuePair_2__ctor_m3E3C4CA5E2EF47104F1AFF2ABFD0F5E764A9019E((&L_46), L_43, L_45, /*hidden argument*/KeyValuePair_2__ctor_m3E3C4CA5E2EF47104F1AFF2ABFD0F5E764A9019E_RuntimeMethod_var);
			NullCheck(L_38);
			InterfaceActionInvoker2< String_t*, KeyValuePair_2_t2640B830EE98728C11234AB1D4A0768B5E02CDF4  >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::set_Item(!0,!1) */, IDictionary_2_t2E00AEF12BBE1905A3EA6FA837962AF185C8DDAD_il2cpp_TypeInfo_var, L_38, L_41, L_46);
		}

IL_00f5:
		{
			RuntimeObject* L_47 = V_5;
			NullCheck(L_47);
			bool L_48 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_47);
			if (L_48)
			{
				goto IL_009d;
			}
		}

IL_0101:
		{
			IL2CPP_LEAVE(0x115, FINALLY_0106);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0106;
	}

FINALLY_0106:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_49 = V_5;
			if (!L_49)
			{
				goto IL_0114;
			}
		}

IL_010d:
		{
			RuntimeObject* L_50 = V_5;
			NullCheck(L_50);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_50);
		}

IL_0114:
		{
			IL2CPP_END_FINALLY(262)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(262)
	{
		IL2CPP_JUMP_TBL(0x115, IL_0115)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0115:
	{
		RuntimeObject* L_51 = V_0;
		return L_51;
	}
}
// System.Boolean UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::TrySerializeNonPrimitiveObject(System.Object,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m4B215EBB59083952E939E02013FEBFE997F1881A (PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E * __this, RuntimeObject * ___input0, RuntimeObject ** ___output1, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		RuntimeObject * L_0 = ___input0;
		RuntimeObject ** L_1 = ___output1;
		bool L_2 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject ** >::Invoke(11 /* System.Boolean UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::TrySerializeKnownTypes(System.Object,System.Object&) */, __this, L_0, (RuntimeObject **)L_1);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject * L_3 = ___input0;
		RuntimeObject ** L_4 = ___output1;
		bool L_5 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject ** >::Invoke(12 /* System.Boolean UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::TrySerializeUnknownTypes(System.Object,System.Object&) */, __this, L_3, (RuntimeObject **)L_4);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		return (bool)G_B3_0;
	}
}
// System.Object UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::SerializeEnum(System.Enum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PocoJsonSerializerStrategy_SerializeEnum_mA2FECA551A485CE2A519D0902CD778A234CFAA2C (PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E * __this, Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PocoJsonSerializerStrategy_SerializeEnum_mA2FECA551A485CE2A519D0902CD778A234CFAA2C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 * L_0 = ___p0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_1 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		double L_2 = Convert_ToDouble_m053A47D87C59CA7A87D4E67E5E06368D775D7651(L_0, L_1, /*hidden argument*/NULL);
		double L_3 = L_2;
		RuntimeObject * L_4 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// System.Boolean UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::TrySerializeKnownTypes(System.Object,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PocoJsonSerializerStrategy_TrySerializeKnownTypes_m764A3FC438B0A5B64E81221A565181D24787D0DA (PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E * __this, RuntimeObject * ___input0, RuntimeObject ** ___output1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PocoJsonSerializerStrategy_TrySerializeKnownTypes_m764A3FC438B0A5B64E81221A565181D24787D0DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_1;
	memset((&V_1), 0, sizeof(V_1));
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_2;
	memset((&V_2), 0, sizeof(V_2));
	DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  V_3;
	memset((&V_3), 0, sizeof(V_3));
	DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Guid_t  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 * V_6 = NULL;
	{
		V_0 = (bool)1;
		RuntimeObject * L_0 = ___input0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var)))
		{
			goto IL_0036;
		}
	}
	{
		RuntimeObject ** L_1 = ___output1;
		RuntimeObject * L_2 = ___input0;
		V_1 = ((*(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)UnBox(L_2, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var))));
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_3 = DateTime_ToUniversalTime_mA8B74D947E186568C55D9C6F56D59F9A3C7775B1((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E_il2cpp_TypeInfo_var);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = ((PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E_StaticFields*)il2cpp_codegen_static_fields_for(PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E_il2cpp_TypeInfo_var))->get_Iso8601Format_5();
		NullCheck(L_4);
		int32_t L_5 = 0;
		String_t* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_7 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		String_t* L_8 = DateTime_ToString_m9943D2AB36F33BA0A4CF44DAE32D5944E2561B1C((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_2), L_6, L_7, /*hidden argument*/NULL);
		*((RuntimeObject **)L_1) = (RuntimeObject *)L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_1, (void*)(RuntimeObject *)L_8);
		goto IL_00cc;
	}

IL_0036:
	{
		RuntimeObject * L_9 = ___input0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_9, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_il2cpp_TypeInfo_var)))
		{
			goto IL_006b;
		}
	}
	{
		RuntimeObject ** L_10 = ___output1;
		RuntimeObject * L_11 = ___input0;
		V_3 = ((*(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 *)((DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 *)UnBox(L_11, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_il2cpp_TypeInfo_var))));
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_12 = DateTimeOffset_ToUniversalTime_m0633950D5BEA0AC72CADE23596C389D0E2961224((DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 *)(&V_3), /*hidden argument*/NULL);
		V_4 = L_12;
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E_il2cpp_TypeInfo_var);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_13 = ((PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E_StaticFields*)il2cpp_codegen_static_fields_for(PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E_il2cpp_TypeInfo_var))->get_Iso8601Format_5();
		NullCheck(L_13);
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_16 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		String_t* L_17 = DateTimeOffset_ToString_mC198692CA58E6E6FF80009C33264F01E4E4B947A((DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 *)(&V_4), L_15, L_16, /*hidden argument*/NULL);
		*((RuntimeObject **)L_10) = (RuntimeObject *)L_17;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_10, (void*)(RuntimeObject *)L_17);
		goto IL_00cc;
	}

IL_006b:
	{
		RuntimeObject * L_18 = ___input0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_18, Guid_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0091;
		}
	}
	{
		RuntimeObject ** L_19 = ___output1;
		RuntimeObject * L_20 = ___input0;
		V_5 = ((*(Guid_t *)((Guid_t *)UnBox(L_20, Guid_t_il2cpp_TypeInfo_var))));
		String_t* L_21 = Guid_ToString_mE2E53BEF57397A8D04C1CEFC2627F64578FF638B((Guid_t *)(&V_5), _stringLiteral50C9E8D5FC98727B4BBC93CF5D64A68DB647F04F, /*hidden argument*/NULL);
		*((RuntimeObject **)L_19) = (RuntimeObject *)L_21;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_19, (void*)(RuntimeObject *)L_21);
		goto IL_00cc;
	}

IL_0091:
	{
		RuntimeObject * L_22 = ___input0;
		if (!((Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E *)IsInstClass((RuntimeObject*)L_22, Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var)))
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject ** L_23 = ___output1;
		RuntimeObject * L_24 = ___input0;
		NullCheck(L_24);
		String_t* L_25 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_24);
		*((RuntimeObject **)L_23) = (RuntimeObject *)L_25;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_23, (void*)(RuntimeObject *)L_25);
		goto IL_00cc;
	}

IL_00a9:
	{
		RuntimeObject * L_26 = ___input0;
		V_6 = ((Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)IsInstClass((RuntimeObject*)L_26, Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var));
		Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 * L_27 = V_6;
		if (!L_27)
		{
			goto IL_00c7;
		}
	}
	{
		RuntimeObject ** L_28 = ___output1;
		Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 * L_29 = V_6;
		RuntimeObject * L_30 = VirtFuncInvoker1< RuntimeObject *, Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 * >::Invoke(10 /* System.Object UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::SerializeEnum(System.Enum) */, __this, L_29);
		*((RuntimeObject **)L_28) = (RuntimeObject *)L_30;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_28, (void*)(RuntimeObject *)L_30);
		goto IL_00cc;
	}

IL_00c7:
	{
		V_0 = (bool)0;
		RuntimeObject ** L_31 = ___output1;
		*((RuntimeObject **)L_31) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_31, (void*)(RuntimeObject *)NULL);
	}

IL_00cc:
	{
		bool L_32 = V_0;
		return L_32;
	}
}
// System.Boolean UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::TrySerializeUnknownTypes(System.Object,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m7344673834CF15EF9716D06FCA9F890EFBEF5131 (PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E * __this, RuntimeObject * ___input0, RuntimeObject ** ___output1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m7344673834CF15EF9716D06FCA9F890EFBEF5131_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	KeyValuePair_2_tB5A10C8410102A497AB656E4139B48E757EC880F  V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = ___input0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral140F86AAE51AB9E1CDA9B4254FE98A74EB54C1A1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m7344673834CF15EF9716D06FCA9F890EFBEF5131_RuntimeMethod_var);
	}

IL_0011:
	{
		RuntimeObject ** L_2 = ___output1;
		*((RuntimeObject **)L_2) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_2, (void*)(RuntimeObject *)NULL);
		RuntimeObject * L_3 = ___input0;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Type_t * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)0;
	}

IL_0028:
	{
		JsonObject_t5430387D9A9215A629850E012C366DBE5AD5A2B5 * L_7 = (JsonObject_t5430387D9A9215A629850E012C366DBE5AD5A2B5 *)il2cpp_codegen_object_new(JsonObject_t5430387D9A9215A629850E012C366DBE5AD5A2B5_il2cpp_TypeInfo_var);
		JsonObject__ctor_mEAF7641A152C9EE2A9986C140A2D09CD7A38506D(L_7, /*hidden argument*/NULL);
		V_1 = L_7;
		RuntimeObject* L_8 = __this->get_GetCache_1();
		Type_t * L_9 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_10 = InterfaceFuncInvoker1< RuntimeObject*, Type_t * >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Item(!0) */, IDictionary_2_t23497D69F526B4556DC679CBA0F91D0F85872FB0_il2cpp_TypeInfo_var, L_8, L_9);
		V_2 = L_10;
		RuntimeObject* L_11 = V_2;
		NullCheck(L_11);
		RuntimeObject* L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::GetEnumerator() */, IEnumerable_1_t2BB59C968153964422E5D0566F9A50EF12F6C557_il2cpp_TypeInfo_var, L_11);
		V_4 = L_12;
	}

IL_0043:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007c;
		}

IL_0048:
		{
			RuntimeObject* L_13 = V_4;
			NullCheck(L_13);
			KeyValuePair_2_tB5A10C8410102A497AB656E4139B48E757EC880F  L_14 = InterfaceFuncInvoker0< KeyValuePair_2_tB5A10C8410102A497AB656E4139B48E757EC880F  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Current() */, IEnumerator_1_t5807D4DF98ADD164635C27255B79195203F1057C_il2cpp_TypeInfo_var, L_13);
			V_3 = L_14;
			GetDelegate_t5384142A3E4A970422627B6C02B4EB4319934A8F * L_15 = KeyValuePair_2_get_Value_mF7FD6C1B4A954CD16093D4B6C0F083A3A0347D0F_inline((KeyValuePair_2_tB5A10C8410102A497AB656E4139B48E757EC880F *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_mF7FD6C1B4A954CD16093D4B6C0F083A3A0347D0F_RuntimeMethod_var);
			if (!L_15)
			{
				goto IL_007c;
			}
		}

IL_005c:
		{
			RuntimeObject* L_16 = V_1;
			String_t* L_17 = KeyValuePair_2_get_Key_m3CCADA0FD43354737C9190CD451DC5869006578D_inline((KeyValuePair_2_tB5A10C8410102A497AB656E4139B48E757EC880F *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m3CCADA0FD43354737C9190CD451DC5869006578D_RuntimeMethod_var);
			String_t* L_18 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_17);
			GetDelegate_t5384142A3E4A970422627B6C02B4EB4319934A8F * L_19 = KeyValuePair_2_get_Value_mF7FD6C1B4A954CD16093D4B6C0F083A3A0347D0F_inline((KeyValuePair_2_tB5A10C8410102A497AB656E4139B48E757EC880F *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_mF7FD6C1B4A954CD16093D4B6C0F083A3A0347D0F_RuntimeMethod_var);
			RuntimeObject * L_20 = ___input0;
			NullCheck(L_19);
			RuntimeObject * L_21 = GetDelegate_Invoke_m114D46503676C1A9276214C4532155B31562EE1D(L_19, L_20, /*hidden argument*/NULL);
			NullCheck(L_16);
			InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::Add(!0,!1) */, IDictionary_2_t6AF508DE18DA398DBB91330BEEB14B0CFBD4A8ED_il2cpp_TypeInfo_var, L_16, L_18, L_21);
		}

IL_007c:
		{
			RuntimeObject* L_22 = V_4;
			NullCheck(L_22);
			bool L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_22);
			if (L_23)
			{
				goto IL_0048;
			}
		}

IL_0088:
		{
			IL2CPP_LEAVE(0x9C, FINALLY_008d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008d;
	}

FINALLY_008d:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_24 = V_4;
			if (!L_24)
			{
				goto IL_009b;
			}
		}

IL_0094:
		{
			RuntimeObject* L_25 = V_4;
			NullCheck(L_25);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_25);
		}

IL_009b:
		{
			IL2CPP_END_FINALLY(141)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(141)
	{
		IL2CPP_JUMP_TBL(0x9C, IL_009c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_009c:
	{
		RuntimeObject ** L_26 = ___output1;
		RuntimeObject* L_27 = V_1;
		*((RuntimeObject **)L_26) = (RuntimeObject *)L_27;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_26, (void*)(RuntimeObject *)L_27);
		return (bool)1;
	}
}
// System.Void UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PocoJsonSerializerStrategy__cctor_m496B14AA83DC3CB9BB434AB7B1FCFA8EEB5419A9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PocoJsonSerializerStrategy__cctor_m496B14AA83DC3CB9BB434AB7B1FCFA8EEB5419A9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_0 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)0);
		((PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E_StaticFields*)il2cpp_codegen_static_fields_for(PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E_il2cpp_TypeInfo_var))->set_EmptyTypes_3(L_0);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_1 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = L_1;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_3 = { reinterpret_cast<intptr_t> (Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_4);
		((PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E_StaticFields*)il2cpp_codegen_static_fields_for(PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E_il2cpp_TypeInfo_var))->set_ArrayConstructorParameterTypes_4(L_2);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralC17A8CC3C348CB6C597B45A84606DEDE9EEA3A2D);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC17A8CC3C348CB6C597B45A84606DEDE9EEA3A2D);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralA2DD3D89312EAF419D9A45E0233888DDB3990C8B);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralA2DD3D89312EAF419D9A45E0233888DDB3990C8B);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral1CCC296DDB26C09B231DD4D12340885E4471FB6B);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1CCC296DDB26C09B231DD4D12340885E4471FB6B);
		((PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E_StaticFields*)il2cpp_codegen_static_fields_for(PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E_il2cpp_TypeInfo_var))->set_Iso8601Format_5(L_8);
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
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo> UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetConstructors(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtils_GetConstructors_m5698B3DC601907E5EDA5044474EA4B6FC1B85EB3 (Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		ConstructorInfoU5BU5D_t111EE7D53C51A47FE69FC3398DE007F7E100593E* L_1 = Type_GetConstructors_m674DDAF4A507C09F344455449273B71384D41CBD(L_0, /*hidden argument*/NULL);
		return (RuntimeObject*)L_1;
	}
}
// System.Reflection.ConstructorInfo UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetConstructorInfo(System.Type,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * ReflectionUtils_GetConstructorInfo_m135D313513D4526FF6EB4F32C8F6482A26A0D7E9 (Type_t * ___type0, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___argsType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetConstructorInfo_m135D313513D4526FF6EB4F32C8F6482A26A0D7E9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694* V_5 = NULL;
	ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB * V_6 = NULL;
	ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694* V_7 = NULL;
	int32_t V_8 = 0;
	ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Type_t * L_0 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t716A5426EE76AD7B91D2D6989AB62AA4BB23A534_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ReflectionUtils_GetConstructors_m5698B3DC601907E5EDA5044474EA4B6FC1B85EB3(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>::GetEnumerator() */, IEnumerable_1_t38430383D88E6985C7F2B49DE4E75CAA8B78F41A_il2cpp_TypeInfo_var, L_2);
		V_4 = L_3;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0085;
		}

IL_0014:
		{
			RuntimeObject* L_4 = V_4;
			NullCheck(L_4);
			ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * L_5 = InterfaceFuncInvoker0< ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.ConstructorInfo>::get_Current() */, IEnumerator_1_tBA94C273DC5E1ABE7C78A3A5AA47081379158F75_il2cpp_TypeInfo_var, L_4);
			V_3 = L_5;
			ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * L_6 = V_3;
			NullCheck(L_6);
			ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694* L_7 = VirtFuncInvoker0< ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_6);
			V_5 = L_7;
			TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_8 = ___argsType1;
			NullCheck(L_8);
			ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694* L_9 = V_5;
			NullCheck(L_9);
			if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))))
			{
				goto IL_0035;
			}
		}

IL_0030:
		{
			goto IL_0085;
		}

IL_0035:
		{
			V_1 = 0;
			V_2 = (bool)1;
			ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * L_10 = V_3;
			NullCheck(L_10);
			ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694* L_11 = VirtFuncInvoker0< ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_10);
			V_7 = L_11;
			V_8 = 0;
			goto IL_006c;
		}

IL_0049:
		{
			ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694* L_12 = V_7;
			int32_t L_13 = V_8;
			NullCheck(L_12);
			int32_t L_14 = L_13;
			ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
			V_6 = L_15;
			ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB * L_16 = V_6;
			NullCheck(L_16);
			Type_t * L_17 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_16);
			TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_18 = ___argsType1;
			int32_t L_19 = V_1;
			NullCheck(L_18);
			int32_t L_20 = L_19;
			Type_t * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
			if ((((RuntimeObject*)(Type_t *)L_17) == ((RuntimeObject*)(Type_t *)L_21)))
			{
				goto IL_0066;
			}
		}

IL_005f:
		{
			V_2 = (bool)0;
			goto IL_0077;
		}

IL_0066:
		{
			int32_t L_22 = V_8;
			V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
		}

IL_006c:
		{
			int32_t L_23 = V_8;
			ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694* L_24 = V_7;
			NullCheck(L_24);
			if ((((int32_t)L_23) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))))
			{
				goto IL_0049;
			}
		}

IL_0077:
		{
			bool L_25 = V_2;
			if (!L_25)
			{
				goto IL_0085;
			}
		}

IL_007d:
		{
			ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * L_26 = V_3;
			V_9 = L_26;
			IL2CPP_LEAVE(0xA7, FINALLY_0096);
		}

IL_0085:
		{
			RuntimeObject* L_27 = V_4;
			NullCheck(L_27);
			bool L_28 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_27);
			if (L_28)
			{
				goto IL_0014;
			}
		}

IL_0091:
		{
			IL2CPP_LEAVE(0xA5, FINALLY_0096);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0096;
	}

FINALLY_0096:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_29 = V_4;
			if (!L_29)
			{
				goto IL_00a4;
			}
		}

IL_009d:
		{
			RuntimeObject* L_30 = V_4;
			NullCheck(L_30);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_30);
		}

IL_00a4:
		{
			IL2CPP_END_FINALLY(150)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(150)
	{
		IL2CPP_JUMP_TBL(0xA7, IL_00a7)
		IL2CPP_JUMP_TBL(0xA5, IL_00a5)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00a5:
	{
		return (ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF *)NULL;
	}

IL_00a7:
	{
		ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * L_31 = V_9;
		return L_31;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetProperties(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtils_GetProperties_m075E8D7F50A961C3EC9844DF6888C534BE0816CC (Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* L_1 = VirtFuncInvoker1< PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E*, int32_t >::Invoke(52 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_0, ((int32_t)60));
		return (RuntimeObject*)L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetFields(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtils_GetFields_m46D265608D79C2C03B8F4435F7EE20D204BBB8BC (Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* L_1 = VirtFuncInvoker1< FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE*, int32_t >::Invoke(44 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_0, ((int32_t)60));
		return (RuntimeObject*)L_1;
	}
}
// System.Reflection.MethodInfo UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetGetterMethodInfo(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * ReflectionUtils_GetGetterMethodInfo_m3C2CE1C8DB9E1E745B2C37F533073BA96AB11807 (PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method)
{
	{
		PropertyInfo_t * L_0 = ___propertyInfo0;
		NullCheck(L_0);
		MethodInfo_t * L_1 = VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(22 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, L_0, (bool)1);
		return L_1;
	}
}
// System.Reflection.MethodInfo UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetSetterMethodInfo(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * ReflectionUtils_GetSetterMethodInfo_mE024459BDF87821E8BD0E8B1DBEA54D39F26D023 (PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method)
{
	{
		PropertyInfo_t * L_0 = ___propertyInfo0;
		NullCheck(L_0);
		MethodInfo_t * L_1 = VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(24 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean) */, L_0, (bool)1);
		return L_1;
	}
}
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_ConstructorDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetContructor(System.Type,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorDelegate_t758C58A6B467BA586E2C6B57A535729A620BFCEC * ReflectionUtils_GetContructor_m06F8CE353AD06FB0E86D3E4E6B682D99A13870AF (Type_t * ___type0, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___argsType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetContructor_m06F8CE353AD06FB0E86D3E4E6B682D99A13870AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___type0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_1 = ___argsType1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t716A5426EE76AD7B91D2D6989AB62AA4BB23A534_il2cpp_TypeInfo_var);
		ConstructorDelegate_t758C58A6B467BA586E2C6B57A535729A620BFCEC * L_2 = ReflectionUtils_GetConstructorByReflection_mB318F13C50D13137048DF91314B5145262AFC6F3(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_ConstructorDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Reflection.ConstructorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorDelegate_t758C58A6B467BA586E2C6B57A535729A620BFCEC * ReflectionUtils_GetConstructorByReflection_m2848BA515B91FE2DAA5A7B5F471F7E95DFB63CA0 (ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * ___constructorInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetConstructorByReflection_m2848BA515B91FE2DAA5A7B5F471F7E95DFB63CA0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetConstructorByReflectionU3Ec__AnonStorey0_t4266D02561276A50905B1F44DEDE646F4845D634 * V_0 = NULL;
	{
		U3CGetConstructorByReflectionU3Ec__AnonStorey0_t4266D02561276A50905B1F44DEDE646F4845D634 * L_0 = (U3CGetConstructorByReflectionU3Ec__AnonStorey0_t4266D02561276A50905B1F44DEDE646F4845D634 *)il2cpp_codegen_object_new(U3CGetConstructorByReflectionU3Ec__AnonStorey0_t4266D02561276A50905B1F44DEDE646F4845D634_il2cpp_TypeInfo_var);
		U3CGetConstructorByReflectionU3Ec__AnonStorey0__ctor_mDB06F77C170B11FC1A897D77A9FFA9D267E3A958(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetConstructorByReflectionU3Ec__AnonStorey0_t4266D02561276A50905B1F44DEDE646F4845D634 * L_1 = V_0;
		ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * L_2 = ___constructorInfo0;
		NullCheck(L_1);
		L_1->set_constructorInfo_0(L_2);
		U3CGetConstructorByReflectionU3Ec__AnonStorey0_t4266D02561276A50905B1F44DEDE646F4845D634 * L_3 = V_0;
		ConstructorDelegate_t758C58A6B467BA586E2C6B57A535729A620BFCEC * L_4 = (ConstructorDelegate_t758C58A6B467BA586E2C6B57A535729A620BFCEC *)il2cpp_codegen_object_new(ConstructorDelegate_t758C58A6B467BA586E2C6B57A535729A620BFCEC_il2cpp_TypeInfo_var);
		ConstructorDelegate__ctor_mC9D85B6180085484774A9F06FFB7A1630C102A96(L_4, L_3, (intptr_t)((intptr_t)U3CGetConstructorByReflectionU3Ec__AnonStorey0_U3CU3Em__0_m661FD3679F8A8FA0FCBB0F5BF032EE3BAA5116D4_RuntimeMethod_var), /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_ConstructorDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Type,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorDelegate_t758C58A6B467BA586E2C6B57A535729A620BFCEC * ReflectionUtils_GetConstructorByReflection_mB318F13C50D13137048DF91314B5145262AFC6F3 (Type_t * ___type0, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___argsType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetConstructorByReflection_mB318F13C50D13137048DF91314B5145262AFC6F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * V_0 = NULL;
	ConstructorDelegate_t758C58A6B467BA586E2C6B57A535729A620BFCEC * G_B3_0 = NULL;
	{
		Type_t * L_0 = ___type0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_1 = ___argsType1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t716A5426EE76AD7B91D2D6989AB62AA4BB23A534_il2cpp_TypeInfo_var);
		ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * L_2 = ReflectionUtils_GetConstructorInfo_m135D313513D4526FF6EB4F32C8F6482A26A0D7E9(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * L_3 = V_0;
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		G_B3_0 = ((ConstructorDelegate_t758C58A6B467BA586E2C6B57A535729A620BFCEC *)(NULL));
		goto IL_001a;
	}

IL_0014:
	{
		ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t716A5426EE76AD7B91D2D6989AB62AA4BB23A534_il2cpp_TypeInfo_var);
		ConstructorDelegate_t758C58A6B467BA586E2C6B57A535729A620BFCEC * L_5 = ReflectionUtils_GetConstructorByReflection_m2848BA515B91FE2DAA5A7B5F471F7E95DFB63CA0(L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_GetDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GetDelegate_t5384142A3E4A970422627B6C02B4EB4319934A8F * ReflectionUtils_GetGetMethod_m204196EEEA5C64D7B0AC4DC6584B20FC5304F26D (PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetGetMethod_m204196EEEA5C64D7B0AC4DC6584B20FC5304F26D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PropertyInfo_t * L_0 = ___propertyInfo0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t716A5426EE76AD7B91D2D6989AB62AA4BB23A534_il2cpp_TypeInfo_var);
		GetDelegate_t5384142A3E4A970422627B6C02B4EB4319934A8F * L_1 = ReflectionUtils_GetGetMethodByReflection_m7C2EEEEF1869D166F8DDC65F5A1EB1AB4554855F(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_GetDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GetDelegate_t5384142A3E4A970422627B6C02B4EB4319934A8F * ReflectionUtils_GetGetMethod_m2D0C6E198BA479C371958D16BBCA8B6E946A30F6 (FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetGetMethod_m2D0C6E198BA479C371958D16BBCA8B6E946A30F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FieldInfo_t * L_0 = ___fieldInfo0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t716A5426EE76AD7B91D2D6989AB62AA4BB23A534_il2cpp_TypeInfo_var);
		GetDelegate_t5384142A3E4A970422627B6C02B4EB4319934A8F * L_1 = ReflectionUtils_GetGetMethodByReflection_m77CDE23E398B8CF50A6A7DE04E0AC5BC1B98DBA5(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_GetDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GetDelegate_t5384142A3E4A970422627B6C02B4EB4319934A8F * ReflectionUtils_GetGetMethodByReflection_m7C2EEEEF1869D166F8DDC65F5A1EB1AB4554855F (PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetGetMethodByReflection_m7C2EEEEF1869D166F8DDC65F5A1EB1AB4554855F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t5304BC457840A263778B61647A6214450139CE2F * V_0 = NULL;
	{
		U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t5304BC457840A263778B61647A6214450139CE2F * L_0 = (U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t5304BC457840A263778B61647A6214450139CE2F *)il2cpp_codegen_object_new(U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t5304BC457840A263778B61647A6214450139CE2F_il2cpp_TypeInfo_var);
		U3CGetGetMethodByReflectionU3Ec__AnonStorey1__ctor_mDB94782A058E9E407D38E59B47E10D0C83B37DA2(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t5304BC457840A263778B61647A6214450139CE2F * L_1 = V_0;
		PropertyInfo_t * L_2 = ___propertyInfo0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t716A5426EE76AD7B91D2D6989AB62AA4BB23A534_il2cpp_TypeInfo_var);
		MethodInfo_t * L_3 = ReflectionUtils_GetGetterMethodInfo_m3C2CE1C8DB9E1E745B2C37F533073BA96AB11807(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_methodInfo_0(L_3);
		U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t5304BC457840A263778B61647A6214450139CE2F * L_4 = V_0;
		GetDelegate_t5384142A3E4A970422627B6C02B4EB4319934A8F * L_5 = (GetDelegate_t5384142A3E4A970422627B6C02B4EB4319934A8F *)il2cpp_codegen_object_new(GetDelegate_t5384142A3E4A970422627B6C02B4EB4319934A8F_il2cpp_TypeInfo_var);
		GetDelegate__ctor_m04F2BD60798013C3E5F77D831B4B044C06D5A928(L_5, L_4, (intptr_t)((intptr_t)U3CGetGetMethodByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m88B841266719BAE486082A13BC9C4D7623E6EBCF_RuntimeMethod_var), /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_GetDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GetDelegate_t5384142A3E4A970422627B6C02B4EB4319934A8F * ReflectionUtils_GetGetMethodByReflection_m77CDE23E398B8CF50A6A7DE04E0AC5BC1B98DBA5 (FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetGetMethodByReflection_m77CDE23E398B8CF50A6A7DE04E0AC5BC1B98DBA5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t5DD58BDB4BDF3531B0981E89EF60C3ED0C510D14 * V_0 = NULL;
	{
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t5DD58BDB4BDF3531B0981E89EF60C3ED0C510D14 * L_0 = (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t5DD58BDB4BDF3531B0981E89EF60C3ED0C510D14 *)il2cpp_codegen_object_new(U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t5DD58BDB4BDF3531B0981E89EF60C3ED0C510D14_il2cpp_TypeInfo_var);
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m82041472CB56E7CF52ACB0B57F34B6CDA0D13408(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t5DD58BDB4BDF3531B0981E89EF60C3ED0C510D14 * L_1 = V_0;
		FieldInfo_t * L_2 = ___fieldInfo0;
		NullCheck(L_1);
		L_1->set_fieldInfo_0(L_2);
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t5DD58BDB4BDF3531B0981E89EF60C3ED0C510D14 * L_3 = V_0;
		GetDelegate_t5384142A3E4A970422627B6C02B4EB4319934A8F * L_4 = (GetDelegate_t5384142A3E4A970422627B6C02B4EB4319934A8F *)il2cpp_codegen_object_new(GetDelegate_t5384142A3E4A970422627B6C02B4EB4319934A8F_il2cpp_TypeInfo_var);
		GetDelegate__ctor_m04F2BD60798013C3E5F77D831B4B044C06D5A928(L_4, L_3, (intptr_t)((intptr_t)U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__0_mCB79A445454FC19CAFB685E70C2040E834B42DDC_RuntimeMethod_var), /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_SetDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SetDelegate_tB85E10DD9F713CAE7ED82A18744F73AED4EA6D04 * ReflectionUtils_GetSetMethod_m9EDECE257A6214C6A51920E2F0F252AEEC9F75D4 (PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetSetMethod_m9EDECE257A6214C6A51920E2F0F252AEEC9F75D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PropertyInfo_t * L_0 = ___propertyInfo0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t716A5426EE76AD7B91D2D6989AB62AA4BB23A534_il2cpp_TypeInfo_var);
		SetDelegate_tB85E10DD9F713CAE7ED82A18744F73AED4EA6D04 * L_1 = ReflectionUtils_GetSetMethodByReflection_m4A26B98B5B03598799A361D00F8E2C1C3F1E3B08(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_SetDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SetDelegate_tB85E10DD9F713CAE7ED82A18744F73AED4EA6D04 * ReflectionUtils_GetSetMethod_mDAFA0DE1F7F1351C101885AF0C30FB487C65CB9C (FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetSetMethod_mDAFA0DE1F7F1351C101885AF0C30FB487C65CB9C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FieldInfo_t * L_0 = ___fieldInfo0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t716A5426EE76AD7B91D2D6989AB62AA4BB23A534_il2cpp_TypeInfo_var);
		SetDelegate_tB85E10DD9F713CAE7ED82A18744F73AED4EA6D04 * L_1 = ReflectionUtils_GetSetMethodByReflection_m49F4E0185C7BE17BE600E8657CBCC6ECA43B1920(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_SetDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SetDelegate_tB85E10DD9F713CAE7ED82A18744F73AED4EA6D04 * ReflectionUtils_GetSetMethodByReflection_m4A26B98B5B03598799A361D00F8E2C1C3F1E3B08 (PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetSetMethodByReflection_m4A26B98B5B03598799A361D00F8E2C1C3F1E3B08_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetSetMethodByReflectionU3Ec__AnonStorey3_tFBA12729E943700B178CA5477723857345AB686B * V_0 = NULL;
	{
		U3CGetSetMethodByReflectionU3Ec__AnonStorey3_tFBA12729E943700B178CA5477723857345AB686B * L_0 = (U3CGetSetMethodByReflectionU3Ec__AnonStorey3_tFBA12729E943700B178CA5477723857345AB686B *)il2cpp_codegen_object_new(U3CGetSetMethodByReflectionU3Ec__AnonStorey3_tFBA12729E943700B178CA5477723857345AB686B_il2cpp_TypeInfo_var);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey3__ctor_mE06CF1E1538B71014D17C5EA0D1073710C38B8CB(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey3_tFBA12729E943700B178CA5477723857345AB686B * L_1 = V_0;
		PropertyInfo_t * L_2 = ___propertyInfo0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t716A5426EE76AD7B91D2D6989AB62AA4BB23A534_il2cpp_TypeInfo_var);
		MethodInfo_t * L_3 = ReflectionUtils_GetSetterMethodInfo_mE024459BDF87821E8BD0E8B1DBEA54D39F26D023(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_methodInfo_0(L_3);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey3_tFBA12729E943700B178CA5477723857345AB686B * L_4 = V_0;
		SetDelegate_tB85E10DD9F713CAE7ED82A18744F73AED4EA6D04 * L_5 = (SetDelegate_tB85E10DD9F713CAE7ED82A18744F73AED4EA6D04 *)il2cpp_codegen_object_new(SetDelegate_tB85E10DD9F713CAE7ED82A18744F73AED4EA6D04_il2cpp_TypeInfo_var);
		SetDelegate__ctor_mC110D95DC8C625444540B9FEA1422311040F2FB6(L_5, L_4, (intptr_t)((intptr_t)U3CGetSetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__0_mFBDFDD154BAB2DCE769E20FA7144C0EE2FAC15CD_RuntimeMethod_var), /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_SetDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SetDelegate_tB85E10DD9F713CAE7ED82A18744F73AED4EA6D04 * ReflectionUtils_GetSetMethodByReflection_m49F4E0185C7BE17BE600E8657CBCC6ECA43B1920 (FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetSetMethodByReflection_m49F4E0185C7BE17BE600E8657CBCC6ECA43B1920_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t43269ED7005D484DB0429A87155BB781825B5E47 * V_0 = NULL;
	{
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t43269ED7005D484DB0429A87155BB781825B5E47 * L_0 = (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t43269ED7005D484DB0429A87155BB781825B5E47 *)il2cpp_codegen_object_new(U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t43269ED7005D484DB0429A87155BB781825B5E47_il2cpp_TypeInfo_var);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m6FC8F8AD646E2AB0772EAB4F6C6BFA2E8739425C(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t43269ED7005D484DB0429A87155BB781825B5E47 * L_1 = V_0;
		FieldInfo_t * L_2 = ___fieldInfo0;
		NullCheck(L_1);
		L_1->set_fieldInfo_0(L_2);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t43269ED7005D484DB0429A87155BB781825B5E47 * L_3 = V_0;
		SetDelegate_tB85E10DD9F713CAE7ED82A18744F73AED4EA6D04 * L_4 = (SetDelegate_tB85E10DD9F713CAE7ED82A18744F73AED4EA6D04 *)il2cpp_codegen_object_new(SetDelegate_tB85E10DD9F713CAE7ED82A18744F73AED4EA6D04_il2cpp_TypeInfo_var);
		SetDelegate__ctor_mC110D95DC8C625444540B9FEA1422311040F2FB6(L_4, L_3, (intptr_t)((intptr_t)U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__0_m569C04F15BF1614F11B2BB7372D03206EFB0A35D_RuntimeMethod_var), /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtils__cctor_m3D9B54A8F9669A1F0FFEEAB20020657783790972 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils__cctor_m3D9B54A8F9669A1F0FFEEAB20020657783790972_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
		((ReflectionUtils_t716A5426EE76AD7B91D2D6989AB62AA4BB23A534_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtils_t716A5426EE76AD7B91D2D6989AB62AA4BB23A534_il2cpp_TypeInfo_var))->set_EmptyObjects_0(L_0);
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
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_<GetConstructorByReflection>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetConstructorByReflectionU3Ec__AnonStorey0__ctor_mDB06F77C170B11FC1A897D77A9FFA9D267E3A958 (U3CGetConstructorByReflectionU3Ec__AnonStorey0_t4266D02561276A50905B1F44DEDE646F4845D634 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_<GetConstructorByReflection>c__AnonStorey0::<>m__0(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetConstructorByReflectionU3Ec__AnonStorey0_U3CU3Em__0_m661FD3679F8A8FA0FCBB0F5BF032EE3BAA5116D4 (U3CGetConstructorByReflectionU3Ec__AnonStorey0_t4266D02561276A50905B1F44DEDE646F4845D634 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	{
		ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * L_0 = __this->get_constructorInfo_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ___args0;
		NullCheck(L_0);
		RuntimeObject * L_2 = ConstructorInfo_Invoke_m9E7A03EC2DDACA7A9C1E1609D4AB2BE90CD2E2AF(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_<GetGetMethodByReflection>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetGetMethodByReflectionU3Ec__AnonStorey1__ctor_mDB94782A058E9E407D38E59B47E10D0C83B37DA2 (U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t5304BC457840A263778B61647A6214450139CE2F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_<GetGetMethodByReflection>c__AnonStorey1::<>m__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetGetMethodByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m88B841266719BAE486082A13BC9C4D7623E6EBCF (U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t5304BC457840A263778B61647A6214450139CE2F * __this, RuntimeObject * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetGetMethodByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m88B841266719BAE486082A13BC9C4D7623E6EBCF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t * L_0 = __this->get_methodInfo_0();
		RuntimeObject * L_1 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t716A5426EE76AD7B91D2D6989AB62AA4BB23A534_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ((ReflectionUtils_t716A5426EE76AD7B91D2D6989AB62AA4BB23A534_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtils_t716A5426EE76AD7B91D2D6989AB62AA4BB23A534_il2cpp_TypeInfo_var))->get_EmptyObjects_0();
		NullCheck(L_0);
		RuntimeObject * L_3 = MethodBase_Invoke_m471794D56262D9DB5B5A324883030AB16BD39674(L_0, L_1, L_2, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_<GetGetMethodByReflection>c__AnonStorey2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m82041472CB56E7CF52ACB0B57F34B6CDA0D13408 (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t5DD58BDB4BDF3531B0981E89EF60C3ED0C510D14 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_<GetGetMethodByReflection>c__AnonStorey2::<>m__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__0_mCB79A445454FC19CAFB685E70C2040E834B42DDC (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t5DD58BDB4BDF3531B0981E89EF60C3ED0C510D14 * __this, RuntimeObject * ___source0, const RuntimeMethod* method)
{
	{
		FieldInfo_t * L_0 = __this->get_fieldInfo_0();
		RuntimeObject * L_1 = ___source0;
		NullCheck(L_0);
		RuntimeObject * L_2 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(19 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_0, L_1);
		return L_2;
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
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_<GetSetMethodByReflection>c__AnonStorey3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSetMethodByReflectionU3Ec__AnonStorey3__ctor_mE06CF1E1538B71014D17C5EA0D1073710C38B8CB (U3CGetSetMethodByReflectionU3Ec__AnonStorey3_tFBA12729E943700B178CA5477723857345AB686B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_<GetSetMethodByReflection>c__AnonStorey3::<>m__0(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__0_mFBDFDD154BAB2DCE769E20FA7144C0EE2FAC15CD (U3CGetSetMethodByReflectionU3Ec__AnonStorey3_tFBA12729E943700B178CA5477723857345AB686B * __this, RuntimeObject * ___source0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetSetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__0_mFBDFDD154BAB2DCE769E20FA7144C0EE2FAC15CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t * L_0 = __this->get_methodInfo_0();
		RuntimeObject * L_1 = ___source0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_2;
		RuntimeObject * L_4 = ___value1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		NullCheck(L_0);
		MethodBase_Invoke_m471794D56262D9DB5B5A324883030AB16BD39674(L_0, L_1, L_3, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_<GetSetMethodByReflection>c__AnonStorey4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m6FC8F8AD646E2AB0772EAB4F6C6BFA2E8739425C (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t43269ED7005D484DB0429A87155BB781825B5E47 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_<GetSetMethodByReflection>c__AnonStorey4::<>m__0(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__0_m569C04F15BF1614F11B2BB7372D03206EFB0A35D (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t43269ED7005D484DB0429A87155BB781825B5E47 * __this, RuntimeObject * ___source0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		FieldInfo_t * L_0 = __this->get_fieldInfo_0();
		RuntimeObject * L_1 = ___source0;
		RuntimeObject * L_2 = ___value1;
		NullCheck(L_0);
		FieldInfo_SetValue_m9E7A4FBA27F835B6C26CC09CF609333967150E41(L_0, L_1, L_2, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_ConstructorDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstructorDelegate__ctor_mC9D85B6180085484774A9F06FFB7A1630C102A96 (ConstructorDelegate_t758C58A6B467BA586E2C6B57A535729A620BFCEC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Object UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_ConstructorDelegate::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConstructorDelegate_Invoke_m15B0C181DB64A460AFC7A85E1327B6120EFBE562 (ConstructorDelegate_t758C58A6B467BA586E2C6B57A535729A620BFCEC * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef RuntimeObject * (*FunctionPointerType) (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___args0, targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject * (*FunctionPointerType) (void*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___args0);
					else
						result = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___args0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___args0);
					else
						result = VirtFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___args0);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___args0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef RuntimeObject * (*FunctionPointerType) (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___args0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(targetMethod, targetThis, ___args0);
					else
						result = GenericVirtFuncInvoker1< RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(targetMethod, targetThis, ___args0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___args0);
					else
						result = VirtFuncInvoker1< RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___args0);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (void*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_ConstructorDelegate::BeginInvoke(System.Object[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConstructorDelegate_BeginInvoke_m21D1E48B9FD79A8ABE964420CBCF0970E20908F8 (ConstructorDelegate_t758C58A6B467BA586E2C6B57A535729A620BFCEC * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___args0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Object UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_ConstructorDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConstructorDelegate_EndInvoke_mE1F4DB005C8BBBD1F4DDAD006D2A4D7C3BA5E518 (ConstructorDelegate_t758C58A6B467BA586E2C6B57A535729A620BFCEC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_GetDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetDelegate__ctor_m04F2BD60798013C3E5F77D831B4B044C06D5A928 (GetDelegate_t5384142A3E4A970422627B6C02B4EB4319934A8F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Object UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_GetDelegate::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GetDelegate_Invoke_m114D46503676C1A9276214C4532155B31562EE1D (GetDelegate_t5384142A3E4A970422627B6C02B4EB4319934A8F * __this, RuntimeObject * ___source0, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___source0, targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___source0);
					else
						result = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___source0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___source0);
					else
						result = VirtFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___source0);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___source0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___source0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___source0);
					else
						result = GenericVirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___source0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0);
					else
						result = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_GetDelegate::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetDelegate_BeginInvoke_m2C075821FF4694D46253F40A67DE2E97CE613639 (GetDelegate_t5384142A3E4A970422627B6C02B4EB4319934A8F * __this, RuntimeObject * ___source0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___source0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Object UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_GetDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GetDelegate_EndInvoke_m0E0E55F00A6DD0BAA7F4BAA36586E77684126AF6 (GetDelegate_t5384142A3E4A970422627B6C02B4EB4319934A8F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_SetDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetDelegate__ctor_mC110D95DC8C625444540B9FEA1422311040F2FB6 (SetDelegate_tB85E10DD9F713CAE7ED82A18744F73AED4EA6D04 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_SetDelegate::Invoke(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetDelegate_Invoke_mE5C16DBF08ABD7B1BBBF597F3F80AE2A04D053A6 (SetDelegate_tB85E10DD9F713CAE7ED82A18744F73AED4EA6D04 * __this, RuntimeObject * ___source0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___value1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___source0, ___value1);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___source0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___source0, ___value1);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___source0, ___value1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___value1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___value1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___source0, ___value1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___source0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___value1);
					else
						VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___value1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___value1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_SetDelegate::BeginInvoke(System.Object,System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SetDelegate_BeginInvoke_m8DF49830C855456FB1A8F4375B50B063B0489149 (SetDelegate_tB85E10DD9F713CAE7ED82A18744F73AED4EA6D04 * __this, RuntimeObject * ___source0, RuntimeObject * ___value1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___source0;
	__d_args[1] = ___value1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils_SetDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetDelegate_EndInvoke_mEAE37BEE9338D3462F1679215CE2A326BFE11A22 (SetDelegate_tB85E10DD9F713CAE7ED82A18744F73AED4EA6D04 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object UnityEngine.Advertisements.SimpleJson.SimpleJson::DeserializeObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SimpleJson_DeserializeObject_m8FBC827CD76E9F41BFA40E9C4CFEC06E27693068 (String_t* ___json0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_DeserializeObject_m8FBC827CD76E9F41BFA40E9C4CFEC06E27693068_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		String_t* L_0 = ___json0;
		bool L_1 = SimpleJson_TryDeserializeObject_m5D57B5E125B9A7F8CDB1AC27CAF89FB881541374(L_0, (RuntimeObject **)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject * L_2 = V_0;
		return L_2;
	}

IL_000f:
	{
		SerializationException_tA1FDFF6779406E688C2192E71C38DBFD7A4A2210 * L_3 = (SerializationException_tA1FDFF6779406E688C2192E71C38DBFD7A4A2210 *)il2cpp_codegen_object_new(SerializationException_tA1FDFF6779406E688C2192E71C38DBFD7A4A2210_il2cpp_TypeInfo_var);
		SerializationException__ctor_m88AAD9671030A8A96AA87CB95701938FBD8F16E1(L_3, _stringLiteral2B5A71ABF7A3D810F2064EE7BA1ACCCDAFEF1191, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, SimpleJson_DeserializeObject_m8FBC827CD76E9F41BFA40E9C4CFEC06E27693068_RuntimeMethod_var);
	}
}
// System.Boolean UnityEngine.Advertisements.SimpleJson.SimpleJson::TryDeserializeObject(System.String,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleJson_TryDeserializeObject_m5D57B5E125B9A7F8CDB1AC27CAF89FB881541374 (String_t* ___json0, RuntimeObject ** ___obj1, const RuntimeMethod* method)
{
	bool V_0 = false;
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* V_1 = NULL;
	int32_t V_2 = 0;
	{
		V_0 = (bool)1;
		String_t* L_0 = ___json0;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_1 = ___json0;
		NullCheck(L_1);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_2 = String_ToCharArray_mFCFF32A5EC698E81075E0C72C874282B9ED197A6(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		V_2 = 0;
		RuntimeObject ** L_3 = ___obj1;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_4 = V_1;
		RuntimeObject * L_5 = SimpleJson_ParseValue_mC55D18821682DFB1F786FCF4B9DF46F86480A568(L_4, (int32_t*)(&V_2), (bool*)(&V_0), /*hidden argument*/NULL);
		*((RuntimeObject **)L_3) = (RuntimeObject *)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_3, (void*)(RuntimeObject *)L_5);
		goto IL_0025;
	}

IL_0022:
	{
		RuntimeObject ** L_6 = ___obj1;
		*((RuntimeObject **)L_6) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_6, (void*)(RuntimeObject *)NULL);
	}

IL_0025:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.String UnityEngine.Advertisements.SimpleJson.SimpleJson::SerializeObject(System.Object,UnityEngine.Advertisements.SimpleJson.IJsonSerializerStrategy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleJson_SerializeObject_m4C430799C8A3D5D1BF1F474736F2AA99F72B1467 (RuntimeObject * ___json0, RuntimeObject* ___jsonSerializerStrategy1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_SerializeObject_m4C430799C8A3D5D1BF1F474736F2AA99F72B1467_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	bool V_1 = false;
	String_t* G_B3_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1C0F2D97B838537A2D0F64033AE4EF02D150A956(L_0, ((int32_t)2000), /*hidden argument*/NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___jsonSerializerStrategy1;
		RuntimeObject * L_2 = ___json0;
		StringBuilder_t * L_3 = V_0;
		bool L_4 = SimpleJson_SerializeValue_m6FC1E7FD91F662DE070E45E95B9747FC1A3632F4(L_1, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		StringBuilder_t * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		G_B3_0 = L_7;
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = ((String_t*)(NULL));
	}

IL_0026:
	{
		return G_B3_0;
	}
}
// System.String UnityEngine.Advertisements.SimpleJson.SimpleJson::SerializeObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleJson_SerializeObject_m6A632F316533FDB2537F43AB1DCFE17674319CDF (RuntimeObject * ___json0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___json0;
		RuntimeObject* L_1 = SimpleJson_get_CurrentJsonSerializerStrategy_m30014ED032674767BA616FECC1F592BC9C2F0BC2(/*hidden argument*/NULL);
		String_t* L_2 = SimpleJson_SerializeObject_m4C430799C8A3D5D1BF1F474736F2AA99F72B1467(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Advertisements.SimpleJson.SimpleJson::ParseObject(System.Char[],System.Int32&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SimpleJson_ParseObject_m39E62DFB96813281C00B4913B6E86C7560F2DF74 (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_ParseObject_m39E62DFB96813281C00B4913B6E86C7560F2DF74_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	{
		JsonObject_t5430387D9A9215A629850E012C366DBE5AD5A2B5 * L_0 = (JsonObject_t5430387D9A9215A629850E012C366DBE5AD5A2B5 *)il2cpp_codegen_object_new(JsonObject_t5430387D9A9215A629850E012C366DBE5AD5A2B5_il2cpp_TypeInfo_var);
		JsonObject__ctor_mEAF7641A152C9EE2A9986C140A2D09CD7A38506D(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_1 = ___json0;
		int32_t* L_2 = ___index1;
		SimpleJson_NextToken_m75023EFED6E5B9F9C55FBBD150FB86E4578E8363(L_1, (int32_t*)L_2, /*hidden argument*/NULL);
		V_2 = (bool)0;
		goto IL_0096;
	}

IL_0015:
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_3 = ___json0;
		int32_t* L_4 = ___index1;
		int32_t L_5 = *((int32_t*)L_4);
		int32_t L_6 = SimpleJson_LookAhead_mA709B490EFA62FE02325528F53A9902BEA98097D(L_3, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if (L_7)
		{
			goto IL_0029;
		}
	}
	{
		bool* L_8 = ___success2;
		*((int8_t*)L_8) = (int8_t)0;
		return (RuntimeObject*)NULL;
	}

IL_0029:
	{
		int32_t L_9 = V_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)6))))
		{
			goto IL_003d;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_10 = ___json0;
		int32_t* L_11 = ___index1;
		SimpleJson_NextToken_m75023EFED6E5B9F9C55FBBD150FB86E4578E8363(L_10, (int32_t*)L_11, /*hidden argument*/NULL);
		goto IL_0096;
	}

IL_003d:
	{
		int32_t L_12 = V_1;
		if ((!(((uint32_t)L_12) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_13 = ___json0;
		int32_t* L_14 = ___index1;
		SimpleJson_NextToken_m75023EFED6E5B9F9C55FBBD150FB86E4578E8363(L_13, (int32_t*)L_14, /*hidden argument*/NULL);
		RuntimeObject* L_15 = V_0;
		return L_15;
	}

IL_004e:
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_16 = ___json0;
		int32_t* L_17 = ___index1;
		bool* L_18 = ___success2;
		String_t* L_19 = SimpleJson_ParseString_m074CF30BEEC742F4B4B09B13E5EAC1366792B8C8(L_16, (int32_t*)L_17, (bool*)L_18, /*hidden argument*/NULL);
		V_3 = L_19;
		bool* L_20 = ___success2;
		int32_t L_21 = *((int8_t*)L_20);
		if (L_21)
		{
			goto IL_0063;
		}
	}
	{
		bool* L_22 = ___success2;
		*((int8_t*)L_22) = (int8_t)0;
		return (RuntimeObject*)NULL;
	}

IL_0063:
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_23 = ___json0;
		int32_t* L_24 = ___index1;
		int32_t L_25 = SimpleJson_NextToken_m75023EFED6E5B9F9C55FBBD150FB86E4578E8363(L_23, (int32_t*)L_24, /*hidden argument*/NULL);
		V_1 = L_25;
		int32_t L_26 = V_1;
		if ((((int32_t)L_26) == ((int32_t)5)))
		{
			goto IL_0077;
		}
	}
	{
		bool* L_27 = ___success2;
		*((int8_t*)L_27) = (int8_t)0;
		return (RuntimeObject*)NULL;
	}

IL_0077:
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_28 = ___json0;
		int32_t* L_29 = ___index1;
		bool* L_30 = ___success2;
		RuntimeObject * L_31 = SimpleJson_ParseValue_mC55D18821682DFB1F786FCF4B9DF46F86480A568(L_28, (int32_t*)L_29, (bool*)L_30, /*hidden argument*/NULL);
		V_4 = L_31;
		bool* L_32 = ___success2;
		int32_t L_33 = *((int8_t*)L_32);
		if (L_33)
		{
			goto IL_008d;
		}
	}
	{
		bool* L_34 = ___success2;
		*((int8_t*)L_34) = (int8_t)0;
		return (RuntimeObject*)NULL;
	}

IL_008d:
	{
		RuntimeObject* L_35 = V_0;
		String_t* L_36 = V_3;
		RuntimeObject * L_37 = V_4;
		NullCheck(L_35);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(!0,!1) */, IDictionary_2_t6AF508DE18DA398DBB91330BEEB14B0CFBD4A8ED_il2cpp_TypeInfo_var, L_35, L_36, L_37);
	}

IL_0096:
	{
		bool L_38 = V_2;
		if (!L_38)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_39 = V_0;
		return L_39;
	}
}
// UnityEngine.Advertisements.SimpleJson.JsonArray UnityEngine.Advertisements.SimpleJson.SimpleJson::ParseArray(System.Char[],System.Int32&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonArray_tEC81164ADEC87B1B3F3D28FEA89F9AF6458479A6 * SimpleJson_ParseArray_m890B5A50647EC23FA4A8ABEA0AAAE347CB90007D (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_ParseArray_m890B5A50647EC23FA4A8ABEA0AAAE347CB90007D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JsonArray_tEC81164ADEC87B1B3F3D28FEA89F9AF6458479A6 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	{
		JsonArray_tEC81164ADEC87B1B3F3D28FEA89F9AF6458479A6 * L_0 = (JsonArray_tEC81164ADEC87B1B3F3D28FEA89F9AF6458479A6 *)il2cpp_codegen_object_new(JsonArray_tEC81164ADEC87B1B3F3D28FEA89F9AF6458479A6_il2cpp_TypeInfo_var);
		JsonArray__ctor_m190332332C3BF195EADD7525794EF5C475234E41(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_1 = ___json0;
		int32_t* L_2 = ___index1;
		SimpleJson_NextToken_m75023EFED6E5B9F9C55FBBD150FB86E4578E8363(L_1, (int32_t*)L_2, /*hidden argument*/NULL);
		V_1 = (bool)0;
		goto IL_006a;
	}

IL_0015:
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_3 = ___json0;
		int32_t* L_4 = ___index1;
		int32_t L_5 = *((int32_t*)L_4);
		int32_t L_6 = SimpleJson_LookAhead_mA709B490EFA62FE02325528F53A9902BEA98097D(L_3, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		int32_t L_7 = V_2;
		if (L_7)
		{
			goto IL_0029;
		}
	}
	{
		bool* L_8 = ___success2;
		*((int8_t*)L_8) = (int8_t)0;
		return (JsonArray_tEC81164ADEC87B1B3F3D28FEA89F9AF6458479A6 *)NULL;
	}

IL_0029:
	{
		int32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) == ((uint32_t)6))))
		{
			goto IL_003d;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_10 = ___json0;
		int32_t* L_11 = ___index1;
		SimpleJson_NextToken_m75023EFED6E5B9F9C55FBBD150FB86E4578E8363(L_10, (int32_t*)L_11, /*hidden argument*/NULL);
		goto IL_006a;
	}

IL_003d:
	{
		int32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)4))))
		{
			goto IL_0051;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_13 = ___json0;
		int32_t* L_14 = ___index1;
		SimpleJson_NextToken_m75023EFED6E5B9F9C55FBBD150FB86E4578E8363(L_13, (int32_t*)L_14, /*hidden argument*/NULL);
		goto IL_0070;
	}

IL_0051:
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_15 = ___json0;
		int32_t* L_16 = ___index1;
		bool* L_17 = ___success2;
		RuntimeObject * L_18 = SimpleJson_ParseValue_mC55D18821682DFB1F786FCF4B9DF46F86480A568(L_15, (int32_t*)L_16, (bool*)L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		bool* L_19 = ___success2;
		int32_t L_20 = *((int8_t*)L_19);
		if (L_20)
		{
			goto IL_0063;
		}
	}
	{
		return (JsonArray_tEC81164ADEC87B1B3F3D28FEA89F9AF6458479A6 *)NULL;
	}

IL_0063:
	{
		JsonArray_tEC81164ADEC87B1B3F3D28FEA89F9AF6458479A6 * L_21 = V_0;
		RuntimeObject * L_22 = V_3;
		NullCheck(L_21);
		List_1_Add_m6930161974C7504C80F52EC379EF012387D43138(L_21, L_22, /*hidden argument*/List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_RuntimeMethod_var);
	}

IL_006a:
	{
		bool L_23 = V_1;
		if (!L_23)
		{
			goto IL_0015;
		}
	}

IL_0070:
	{
		JsonArray_tEC81164ADEC87B1B3F3D28FEA89F9AF6458479A6 * L_24 = V_0;
		return L_24;
	}
}
// System.Object UnityEngine.Advertisements.SimpleJson.SimpleJson::ParseValue(System.Char[],System.Int32&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SimpleJson_ParseValue_mC55D18821682DFB1F786FCF4B9DF46F86480A568 (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_ParseValue_mC55D18821682DFB1F786FCF4B9DF46F86480A568_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		int32_t L_2 = *((int32_t*)L_1);
		int32_t L_3 = SimpleJson_LookAhead_mA709B490EFA62FE02325528F53A9902BEA98097D(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0090;
			}
			case 1:
			{
				goto IL_0056;
			}
			case 2:
			{
				goto IL_0095;
			}
			case 3:
			{
				goto IL_005f;
			}
			case 4:
			{
				goto IL_0095;
			}
			case 5:
			{
				goto IL_0095;
			}
			case 6:
			{
				goto IL_0095;
			}
			case 7:
			{
				goto IL_0044;
			}
			case 8:
			{
				goto IL_004d;
			}
			case 9:
			{
				goto IL_0068;
			}
			case 10:
			{
				goto IL_0077;
			}
			case 11:
			{
				goto IL_0086;
			}
		}
	}
	{
		goto IL_0095;
	}

IL_0044:
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_5 = ___json0;
		int32_t* L_6 = ___index1;
		bool* L_7 = ___success2;
		String_t* L_8 = SimpleJson_ParseString_m074CF30BEEC742F4B4B09B13E5EAC1366792B8C8(L_5, (int32_t*)L_6, (bool*)L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_004d:
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_9 = ___json0;
		int32_t* L_10 = ___index1;
		bool* L_11 = ___success2;
		RuntimeObject * L_12 = SimpleJson_ParseNumber_m97DB505FD590AD76E2C7F9FAFFDF14C5E603DF9B(L_9, (int32_t*)L_10, (bool*)L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_0056:
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_13 = ___json0;
		int32_t* L_14 = ___index1;
		bool* L_15 = ___success2;
		RuntimeObject* L_16 = SimpleJson_ParseObject_m39E62DFB96813281C00B4913B6E86C7560F2DF74(L_13, (int32_t*)L_14, (bool*)L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_005f:
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_17 = ___json0;
		int32_t* L_18 = ___index1;
		bool* L_19 = ___success2;
		JsonArray_tEC81164ADEC87B1B3F3D28FEA89F9AF6458479A6 * L_20 = SimpleJson_ParseArray_m890B5A50647EC23FA4A8ABEA0AAAE347CB90007D(L_17, (int32_t*)L_18, (bool*)L_19, /*hidden argument*/NULL);
		return L_20;
	}

IL_0068:
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_21 = ___json0;
		int32_t* L_22 = ___index1;
		SimpleJson_NextToken_m75023EFED6E5B9F9C55FBBD150FB86E4578E8363(L_21, (int32_t*)L_22, /*hidden argument*/NULL);
		bool L_23 = ((bool)1);
		RuntimeObject * L_24 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_23);
		return L_24;
	}

IL_0077:
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_25 = ___json0;
		int32_t* L_26 = ___index1;
		SimpleJson_NextToken_m75023EFED6E5B9F9C55FBBD150FB86E4578E8363(L_25, (int32_t*)L_26, /*hidden argument*/NULL);
		bool L_27 = ((bool)0);
		RuntimeObject * L_28 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_27);
		return L_28;
	}

IL_0086:
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_29 = ___json0;
		int32_t* L_30 = ___index1;
		SimpleJson_NextToken_m75023EFED6E5B9F9C55FBBD150FB86E4578E8363(L_29, (int32_t*)L_30, /*hidden argument*/NULL);
		return NULL;
	}

IL_0090:
	{
		goto IL_0095;
	}

IL_0095:
	{
		bool* L_31 = ___success2;
		*((int8_t*)L_31) = (int8_t)0;
		return NULL;
	}
}
// System.String UnityEngine.Advertisements.SimpleJson.SimpleJson::ParseString(System.Char[],System.Int32&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleJson_ParseString_m074CF30BEEC742F4B4B09B13E5EAC1366792B8C8 (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_ParseString_m074CF30BEEC742F4B4B09B13E5EAC1366792B8C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	uint32_t V_5 = 0;
	bool V_6 = false;
	uint32_t V_7 = 0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1C0F2D97B838537A2D0F64033AE4EF02D150A956(L_0, ((int32_t)2000), /*hidden argument*/NULL);
		V_0 = L_0;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_1 = ___json0;
		int32_t* L_2 = ___index1;
		SimpleJson_EatWhitespace_mAB33F80188B8DD4D84B6A9216EC735FD069CC45E(L_1, (int32_t*)L_2, /*hidden argument*/NULL);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_3 = ___json0;
		int32_t* L_4 = ___index1;
		int32_t* L_5 = ___index1;
		int32_t L_6 = *((int32_t*)L_5);
		int32_t L_7 = L_6;
		V_2 = L_7;
		*((int32_t*)L_4) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		int32_t L_8 = V_2;
		NullCheck(L_3);
		int32_t L_9 = L_8;
		uint16_t L_10 = (uint16_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_1 = L_10;
		V_3 = (bool)0;
		goto IL_0237;
	}

IL_0025:
	{
		int32_t* L_11 = ___index1;
		int32_t L_12 = *((int32_t*)L_11);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_13 = ___json0;
		NullCheck(L_13);
		if ((!(((uint32_t)L_12) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))))
		{
			goto IL_0034;
		}
	}
	{
		goto IL_023d;
	}

IL_0034:
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_14 = ___json0;
		int32_t* L_15 = ___index1;
		int32_t* L_16 = ___index1;
		int32_t L_17 = *((int32_t*)L_16);
		int32_t L_18 = L_17;
		V_2 = L_18;
		*((int32_t*)L_15) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
		int32_t L_19 = V_2;
		NullCheck(L_14);
		int32_t L_20 = L_19;
		uint16_t L_21 = (uint16_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_1 = L_21;
		Il2CppChar L_22 = V_1;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_004f;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_023d;
	}

IL_004f:
	{
		Il2CppChar L_23 = V_1;
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_022f;
		}
	}
	{
		int32_t* L_24 = ___index1;
		int32_t L_25 = *((int32_t*)L_24);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_26 = ___json0;
		NullCheck(L_26);
		if ((!(((uint32_t)L_25) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length))))))))
		{
			goto IL_0066;
		}
	}
	{
		goto IL_023d;
	}

IL_0066:
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_27 = ___json0;
		int32_t* L_28 = ___index1;
		int32_t* L_29 = ___index1;
		int32_t L_30 = *((int32_t*)L_29);
		int32_t L_31 = L_30;
		V_2 = L_31;
		*((int32_t*)L_28) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
		int32_t L_32 = V_2;
		NullCheck(L_27);
		int32_t L_33 = L_32;
		uint16_t L_34 = (uint16_t)(L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_1 = L_34;
		Il2CppChar L_35 = V_1;
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0088;
		}
	}
	{
		StringBuilder_t * L_36 = V_0;
		NullCheck(L_36);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_36, ((int32_t)34), /*hidden argument*/NULL);
		goto IL_022a;
	}

IL_0088:
	{
		Il2CppChar L_37 = V_1;
		if ((!(((uint32_t)L_37) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_009e;
		}
	}
	{
		StringBuilder_t * L_38 = V_0;
		NullCheck(L_38);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_38, ((int32_t)92), /*hidden argument*/NULL);
		goto IL_022a;
	}

IL_009e:
	{
		Il2CppChar L_39 = V_1;
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00b4;
		}
	}
	{
		StringBuilder_t * L_40 = V_0;
		NullCheck(L_40);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_40, ((int32_t)47), /*hidden argument*/NULL);
		goto IL_022a;
	}

IL_00b4:
	{
		Il2CppChar L_41 = V_1;
		if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)98)))))
		{
			goto IL_00c9;
		}
	}
	{
		StringBuilder_t * L_42 = V_0;
		NullCheck(L_42);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_42, 8, /*hidden argument*/NULL);
		goto IL_022a;
	}

IL_00c9:
	{
		Il2CppChar L_43 = V_1;
		if ((!(((uint32_t)L_43) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_00df;
		}
	}
	{
		StringBuilder_t * L_44 = V_0;
		NullCheck(L_44);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_44, ((int32_t)12), /*hidden argument*/NULL);
		goto IL_022a;
	}

IL_00df:
	{
		Il2CppChar L_45 = V_1;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_00f5;
		}
	}
	{
		StringBuilder_t * L_46 = V_0;
		NullCheck(L_46);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_46, ((int32_t)10), /*hidden argument*/NULL);
		goto IL_022a;
	}

IL_00f5:
	{
		Il2CppChar L_47 = V_1;
		if ((!(((uint32_t)L_47) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_010b;
		}
	}
	{
		StringBuilder_t * L_48 = V_0;
		NullCheck(L_48);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_48, ((int32_t)13), /*hidden argument*/NULL);
		goto IL_022a;
	}

IL_010b:
	{
		Il2CppChar L_49 = V_1;
		if ((!(((uint32_t)L_49) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_0121;
		}
	}
	{
		StringBuilder_t * L_50 = V_0;
		NullCheck(L_50);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_50, ((int32_t)9), /*hidden argument*/NULL);
		goto IL_022a;
	}

IL_0121:
	{
		Il2CppChar L_51 = V_1;
		if ((!(((uint32_t)L_51) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_022a;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_52 = ___json0;
		NullCheck(L_52);
		int32_t* L_53 = ___index1;
		int32_t L_54 = *((int32_t*)L_53);
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_52)->max_length)))), (int32_t)L_54));
		int32_t L_55 = V_4;
		if ((((int32_t)L_55) < ((int32_t)4)))
		{
			goto IL_0225;
		}
	}
	{
		bool* L_56 = ___success2;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_57 = ___json0;
		int32_t* L_58 = ___index1;
		int32_t L_59 = *((int32_t*)L_58);
		String_t* L_60 = String_CreateString_mC7FB167C0D5B97F7EF502AF54399C61DD5B87509(NULL, L_57, L_59, 4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_61 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		bool L_62 = UInt32_TryParse_mF53E581D2BF1451EC324BC2F601B6AEB0E2F9235(L_60, ((int32_t)515), L_61, (uint32_t*)(&V_5), /*hidden argument*/NULL);
		bool L_63 = L_62;
		V_6 = L_63;
		*((int8_t*)L_56) = (int8_t)L_63;
		bool L_64 = V_6;
		if (L_64)
		{
			goto IL_0165;
		}
	}
	{
		String_t* L_65 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_65;
	}

IL_0165:
	{
		uint32_t L_66 = V_5;
		if ((!(((uint32_t)((int32_t)55296)) <= ((uint32_t)L_66))))
		{
			goto IL_020c;
		}
	}
	{
		uint32_t L_67 = V_5;
		if ((!(((uint32_t)L_67) <= ((uint32_t)((int32_t)56319)))))
		{
			goto IL_020c;
		}
	}
	{
		int32_t* L_68 = ___index1;
		int32_t* L_69 = ___index1;
		int32_t L_70 = *((int32_t*)L_69);
		*((int32_t*)L_68) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)4));
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_71 = ___json0;
		NullCheck(L_71);
		int32_t* L_72 = ___index1;
		int32_t L_73 = *((int32_t*)L_72);
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_71)->max_length)))), (int32_t)L_73));
		int32_t L_74 = V_4;
		if ((((int32_t)L_74) < ((int32_t)6)))
		{
			goto IL_0203;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_75 = ___json0;
		int32_t* L_76 = ___index1;
		int32_t L_77 = *((int32_t*)L_76);
		String_t* L_78 = String_CreateString_mC7FB167C0D5B97F7EF502AF54399C61DD5B87509(NULL, L_75, L_77, 2, /*hidden argument*/NULL);
		bool L_79 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_78, _stringLiteral153809851B33CE0CDCE06E5A572C675E18D0C3B5, /*hidden argument*/NULL);
		if (!L_79)
		{
			goto IL_0203;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_80 = ___json0;
		int32_t* L_81 = ___index1;
		int32_t L_82 = *((int32_t*)L_81);
		String_t* L_83 = String_CreateString_mC7FB167C0D5B97F7EF502AF54399C61DD5B87509(NULL, L_80, ((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)2)), 4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_84 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		bool L_85 = UInt32_TryParse_mF53E581D2BF1451EC324BC2F601B6AEB0E2F9235(L_83, ((int32_t)515), L_84, (uint32_t*)(&V_7), /*hidden argument*/NULL);
		if (!L_85)
		{
			goto IL_0203;
		}
	}
	{
		uint32_t L_86 = V_7;
		if ((!(((uint32_t)((int32_t)56320)) <= ((uint32_t)L_86))))
		{
			goto IL_0203;
		}
	}
	{
		uint32_t L_87 = V_7;
		if ((!(((uint32_t)L_87) <= ((uint32_t)((int32_t)57343)))))
		{
			goto IL_0203;
		}
	}
	{
		StringBuilder_t * L_88 = V_0;
		uint32_t L_89 = V_5;
		NullCheck(L_88);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_88, (((int32_t)((uint16_t)L_89))), /*hidden argument*/NULL);
		StringBuilder_t * L_90 = V_0;
		uint32_t L_91 = V_7;
		NullCheck(L_90);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_90, (((int32_t)((uint16_t)L_91))), /*hidden argument*/NULL);
		int32_t* L_92 = ___index1;
		int32_t* L_93 = ___index1;
		int32_t L_94 = *((int32_t*)L_93);
		*((int32_t*)L_92) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)6));
		goto IL_0237;
	}

IL_0203:
	{
		bool* L_95 = ___success2;
		*((int8_t*)L_95) = (int8_t)0;
		String_t* L_96 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_96;
	}

IL_020c:
	{
		StringBuilder_t * L_97 = V_0;
		uint32_t L_98 = V_5;
		String_t* L_99 = SimpleJson_ConvertFromUtf32_mBA35D582335801FE576FB616EB7FA674DC315B66(L_98, /*hidden argument*/NULL);
		NullCheck(L_97);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_97, L_99, /*hidden argument*/NULL);
		int32_t* L_100 = ___index1;
		int32_t* L_101 = ___index1;
		int32_t L_102 = *((int32_t*)L_101);
		*((int32_t*)L_100) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_102, (int32_t)4));
		goto IL_022a;
	}

IL_0225:
	{
		goto IL_023d;
	}

IL_022a:
	{
		goto IL_0237;
	}

IL_022f:
	{
		StringBuilder_t * L_103 = V_0;
		Il2CppChar L_104 = V_1;
		NullCheck(L_103);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_103, L_104, /*hidden argument*/NULL);
	}

IL_0237:
	{
		bool L_105 = V_3;
		if (!L_105)
		{
			goto IL_0025;
		}
	}

IL_023d:
	{
		bool L_106 = V_3;
		if (L_106)
		{
			goto IL_0248;
		}
	}
	{
		bool* L_107 = ___success2;
		*((int8_t*)L_107) = (int8_t)0;
		return (String_t*)NULL;
	}

IL_0248:
	{
		StringBuilder_t * L_108 = V_0;
		NullCheck(L_108);
		String_t* L_109 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_108);
		return L_109;
	}
}
// System.String UnityEngine.Advertisements.SimpleJson.SimpleJson::ConvertFromUtf32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleJson_ConvertFromUtf32_mBA35D582335801FE576FB616EB7FA674DC315B66 (int32_t ___utf320, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_ConvertFromUtf32_mBA35D582335801FE576FB616EB7FA674DC315B66_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___utf320;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___utf320;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)1114111))))
		{
			goto IL_0022;
		}
	}

IL_0012:
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_2, _stringLiteral025EF8D85887D67A5A3B6311EAD984E8DAFDD7D4, _stringLiteral4A98DFDD868CE100378F22AB391E9A764EAB005A, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, SimpleJson_ConvertFromUtf32_mBA35D582335801FE576FB616EB7FA674DC315B66_RuntimeMethod_var);
	}

IL_0022:
	{
		int32_t L_3 = ___utf320;
		if ((((int32_t)((int32_t)55296)) > ((int32_t)L_3)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_4 = ___utf320;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)57343))))
		{
			goto IL_0048;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_5 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_5, _stringLiteral025EF8D85887D67A5A3B6311EAD984E8DAFDD7D4, _stringLiteral720C98EECCE4A62B8B4DFEC99565620B607187E2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, SimpleJson_ConvertFromUtf32_mBA35D582335801FE576FB616EB7FA674DC315B66_RuntimeMethod_var);
	}

IL_0048:
	{
		int32_t L_6 = ___utf320;
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)65536))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_7 = ___utf320;
		String_t* L_8 = String_CreateString_m0E7BBCE09E386877E2B63BF7FA36B956BF221C93(NULL, (((int32_t)((uint16_t)L_7))), 1, /*hidden argument*/NULL);
		return L_8;
	}

IL_005c:
	{
		int32_t L_9 = ___utf320;
		___utf320 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)((int32_t)65536)));
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_10 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_11 = L_10;
		int32_t L_12 = ___utf320;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)(((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_12>>(int32_t)((int32_t)10))), (int32_t)((int32_t)55296)))))));
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_13 = L_11;
		int32_t L_14 = ___utf320;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)(((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_14%(int32_t)((int32_t)1024))), (int32_t)((int32_t)56320)))))));
		String_t* L_15 = String_CreateString_m394C06654854ADD4C51FF957BE0CC72EF52BAA96(NULL, L_13, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Object UnityEngine.Advertisements.SimpleJson.SimpleJson::ParseNumber(System.Char[],System.Int32&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SimpleJson_ParseNumber_m97DB505FD590AD76E2C7F9FAFFDF14C5E603DF9B (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_ParseNumber_m97DB505FD590AD76E2C7F9FAFFDF14C5E603DF9B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	String_t* V_3 = NULL;
	double V_4 = 0.0;
	int64_t V_5 = 0;
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		SimpleJson_EatWhitespace_mAB33F80188B8DD4D84B6A9216EC735FD069CC45E(L_0, (int32_t*)L_1, /*hidden argument*/NULL);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_2 = ___json0;
		int32_t* L_3 = ___index1;
		int32_t L_4 = *((int32_t*)L_3);
		int32_t L_5 = SimpleJson_GetLastIndexOfNumber_mCD5BA50A2DB6077D4CEEBC7E1CF4C523B6AA2704(L_2, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		int32_t* L_7 = ___index1;
		int32_t L_8 = *((int32_t*)L_7);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_8)), (int32_t)1));
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_9 = ___json0;
		int32_t* L_10 = ___index1;
		int32_t L_11 = *((int32_t*)L_10);
		int32_t L_12 = V_1;
		String_t* L_13 = String_CreateString_mC7FB167C0D5B97F7EF502AF54399C61DD5B87509(NULL, L_9, L_11, L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		String_t* L_14 = V_3;
		NullCheck(L_14);
		int32_t L_15 = String_IndexOf_mF9EA8429E9D1B7475D5A297E67435CF34E965F28(L_14, _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727, 5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)(-1)))))
		{
			goto IL_0045;
		}
	}
	{
		String_t* L_16 = V_3;
		NullCheck(L_16);
		int32_t L_17 = String_IndexOf_mF9EA8429E9D1B7475D5A297E67435CF34E965F28(L_16, _stringLiteral58E6B3A414A1E090DFC6029ADD0F3555CCBA127F, 5, /*hidden argument*/NULL);
		if ((((int32_t)L_17) == ((int32_t)(-1))))
		{
			goto IL_006e;
		}
	}

IL_0045:
	{
		bool* L_18 = ___success2;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_19 = ___json0;
		int32_t* L_20 = ___index1;
		int32_t L_21 = *((int32_t*)L_20);
		int32_t L_22 = V_1;
		String_t* L_23 = String_CreateString_mC7FB167C0D5B97F7EF502AF54399C61DD5B87509(NULL, L_19, L_21, L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_24 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var);
		bool L_25 = Double_TryParse_m1A7BCBA90DE896E448E3CA09AAD1CA43846567D7(L_23, ((int32_t)511), L_24, (double*)(&V_4), /*hidden argument*/NULL);
		*((int8_t*)L_18) = (int8_t)L_25;
		double L_26 = V_4;
		double L_27 = L_26;
		RuntimeObject * L_28 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_27);
		V_2 = L_28;
		goto IL_0092;
	}

IL_006e:
	{
		bool* L_29 = ___success2;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_30 = ___json0;
		int32_t* L_31 = ___index1;
		int32_t L_32 = *((int32_t*)L_31);
		int32_t L_33 = V_1;
		String_t* L_34 = String_CreateString_mC7FB167C0D5B97F7EF502AF54399C61DD5B87509(NULL, L_30, L_32, L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_35 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		bool L_36 = Int64_TryParse_m8CE5F89833C03A091273A4EF48C69E86E1F81ACC(L_34, ((int32_t)511), L_35, (int64_t*)(&V_5), /*hidden argument*/NULL);
		*((int8_t*)L_29) = (int8_t)L_36;
		int64_t L_37 = V_5;
		int64_t L_38 = L_37;
		RuntimeObject * L_39 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_38);
		V_2 = L_39;
	}

IL_0092:
	{
		int32_t* L_40 = ___index1;
		int32_t L_41 = V_0;
		*((int32_t*)L_40) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
		RuntimeObject * L_42 = V_2;
		return L_42;
	}
}
// System.Int32 UnityEngine.Advertisements.SimpleJson.SimpleJson::GetLastIndexOfNumber(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleJson_GetLastIndexOfNumber_mCD5BA50A2DB6077D4CEEBC7E1CF4C523B6AA2704 (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___json0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_GetLastIndexOfNumber_mCD5BA50A2DB6077D4CEEBC7E1CF4C523B6AA2704_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index1;
		V_0 = L_0;
		goto IL_0023;
	}

IL_0007:
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_1 = ___json0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint16_t L_4 = (uint16_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(_stringLiteral31F6E040F495D116F4DD833D75DE136BC86E0575);
		int32_t L_5 = String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD(_stringLiteral31F6E040F495D116F4DD833D75DE136BC86E0575, L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_002c;
	}

IL_001f:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0023:
	{
		int32_t L_7 = V_0;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_8 = ___json0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))))
		{
			goto IL_0007;
		}
	}

IL_002c:
	{
		int32_t L_9 = V_0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1));
	}
}
// System.Void UnityEngine.Advertisements.SimpleJson.SimpleJson::EatWhitespace(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleJson_EatWhitespace_mAB33F80188B8DD4D84B6A9216EC735FD069CC45E (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___json0, int32_t* ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_EatWhitespace_mAB33F80188B8DD4D84B6A9216EC735FD069CC45E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0024;
	}

IL_0005:
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		int32_t L_2 = *((int32_t*)L_1);
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint16_t L_4 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(_stringLiteral983CA8BFE38812F91721AAA8FB9C498620A9E427);
		int32_t L_5 = String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD(_stringLiteral983CA8BFE38812F91721AAA8FB9C498620A9E427, L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_001e;
		}
	}
	{
		goto IL_002e;
	}

IL_001e:
	{
		int32_t* L_6 = ___index1;
		int32_t* L_7 = ___index1;
		int32_t L_8 = *((int32_t*)L_7);
		*((int32_t*)L_6) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0024:
	{
		int32_t* L_9 = ___index1;
		int32_t L_10 = *((int32_t*)L_9);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_11 = ___json0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))))
		{
			goto IL_0005;
		}
	}

IL_002e:
	{
		return;
	}
}
// System.Int32 UnityEngine.Advertisements.SimpleJson.SimpleJson::LookAhead(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleJson_LookAhead_mA709B490EFA62FE02325528F53A9902BEA98097D (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___json0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index1;
		V_0 = L_0;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_1 = ___json0;
		int32_t L_2 = SimpleJson_NextToken_m75023EFED6E5B9F9C55FBBD150FB86E4578E8363(L_1, (int32_t*)(&V_0), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.Advertisements.SimpleJson.SimpleJson::NextToken(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleJson_NextToken_m75023EFED6E5B9F9C55FBBD150FB86E4578E8363 (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___json0, int32_t* ___index1, const RuntimeMethod* method)
{
	Il2CppChar V_0 = 0x0;
	int32_t V_1 = 0;
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		SimpleJson_EatWhitespace_mAB33F80188B8DD4D84B6A9216EC735FD069CC45E(L_0, (int32_t*)L_1, /*hidden argument*/NULL);
		int32_t* L_2 = ___index1;
		int32_t L_3 = *((int32_t*)L_2);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_4 = ___json0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))))
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_5 = ___json0;
		int32_t* L_6 = ___index1;
		int32_t L_7 = *((int32_t*)L_6);
		NullCheck(L_5);
		int32_t L_8 = L_7;
		uint16_t L_9 = (uint16_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = L_9;
		int32_t* L_10 = ___index1;
		int32_t* L_11 = ___index1;
		int32_t L_12 = *((int32_t*)L_11);
		*((int32_t*)L_10) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		Il2CppChar L_13 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)((int32_t)44))))
		{
			case 0:
			{
				goto IL_00a2;
			}
			case 1:
			{
				goto IL_00a6;
			}
			case 2:
			{
				goto IL_0063;
			}
			case 3:
			{
				goto IL_0063;
			}
			case 4:
			{
				goto IL_00a6;
			}
			case 5:
			{
				goto IL_00a6;
			}
			case 6:
			{
				goto IL_00a6;
			}
			case 7:
			{
				goto IL_00a6;
			}
			case 8:
			{
				goto IL_00a6;
			}
			case 9:
			{
				goto IL_00a6;
			}
			case 10:
			{
				goto IL_00a6;
			}
			case 11:
			{
				goto IL_00a6;
			}
			case 12:
			{
				goto IL_00a6;
			}
			case 13:
			{
				goto IL_00a6;
			}
			case 14:
			{
				goto IL_00a8;
			}
		}
	}

IL_0063:
	{
		Il2CppChar L_14 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)((int32_t)91))))
		{
			case 0:
			{
				goto IL_009e;
			}
			case 1:
			{
				goto IL_0078;
			}
			case 2:
			{
				goto IL_00a0;
			}
		}
	}

IL_0078:
	{
		Il2CppChar L_15 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)((int32_t)123))))
		{
			case 0:
			{
				goto IL_009a;
			}
			case 1:
			{
				goto IL_008d;
			}
			case 2:
			{
				goto IL_009c;
			}
		}
	}

IL_008d:
	{
		Il2CppChar L_16 = V_0;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)34))))
		{
			goto IL_00a4;
		}
	}
	{
		goto IL_00aa;
	}

IL_009a:
	{
		return 1;
	}

IL_009c:
	{
		return 2;
	}

IL_009e:
	{
		return 3;
	}

IL_00a0:
	{
		return 4;
	}

IL_00a2:
	{
		return 6;
	}

IL_00a4:
	{
		return 7;
	}

IL_00a6:
	{
		return 8;
	}

IL_00a8:
	{
		return 5;
	}

IL_00aa:
	{
		int32_t* L_17 = ___index1;
		int32_t* L_18 = ___index1;
		int32_t L_19 = *((int32_t*)L_18);
		*((int32_t*)L_17) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1));
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_20 = ___json0;
		NullCheck(L_20);
		int32_t* L_21 = ___index1;
		int32_t L_22 = *((int32_t*)L_21);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))), (int32_t)L_22));
		int32_t L_23 = V_1;
		if ((((int32_t)L_23) < ((int32_t)5)))
		{
			goto IL_0106;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_24 = ___json0;
		int32_t* L_25 = ___index1;
		int32_t L_26 = *((int32_t*)L_25);
		NullCheck(L_24);
		int32_t L_27 = L_26;
		uint16_t L_28 = (uint16_t)(L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		if ((!(((uint32_t)L_28) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_0106;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_29 = ___json0;
		int32_t* L_30 = ___index1;
		int32_t L_31 = *((int32_t*)L_30);
		NullCheck(L_29);
		int32_t L_32 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
		uint16_t L_33 = (uint16_t)(L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)97)))))
		{
			goto IL_0106;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_34 = ___json0;
		int32_t* L_35 = ___index1;
		int32_t L_36 = *((int32_t*)L_35);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)2));
		uint16_t L_38 = (uint16_t)(L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_0106;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_39 = ___json0;
		int32_t* L_40 = ___index1;
		int32_t L_41 = *((int32_t*)L_40);
		NullCheck(L_39);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)3));
		uint16_t L_43 = (uint16_t)(L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		if ((!(((uint32_t)L_43) == ((uint32_t)((int32_t)115)))))
		{
			goto IL_0106;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_44 = ___json0;
		int32_t* L_45 = ___index1;
		int32_t L_46 = *((int32_t*)L_45);
		NullCheck(L_44);
		int32_t L_47 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)4));
		uint16_t L_48 = (uint16_t)(L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		if ((!(((uint32_t)L_48) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_0106;
		}
	}
	{
		int32_t* L_49 = ___index1;
		int32_t* L_50 = ___index1;
		int32_t L_51 = *((int32_t*)L_50);
		*((int32_t*)L_49) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)5));
		return ((int32_t)10);
	}

IL_0106:
	{
		int32_t L_52 = V_1;
		if ((((int32_t)L_52) < ((int32_t)4)))
		{
			goto IL_0148;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_53 = ___json0;
		int32_t* L_54 = ___index1;
		int32_t L_55 = *((int32_t*)L_54);
		NullCheck(L_53);
		int32_t L_56 = L_55;
		uint16_t L_57 = (uint16_t)(L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		if ((!(((uint32_t)L_57) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_0148;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_58 = ___json0;
		int32_t* L_59 = ___index1;
		int32_t L_60 = *((int32_t*)L_59);
		NullCheck(L_58);
		int32_t L_61 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
		uint16_t L_62 = (uint16_t)(L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		if ((!(((uint32_t)L_62) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_0148;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_63 = ___json0;
		int32_t* L_64 = ___index1;
		int32_t L_65 = *((int32_t*)L_64);
		NullCheck(L_63);
		int32_t L_66 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)2));
		uint16_t L_67 = (uint16_t)(L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		if ((!(((uint32_t)L_67) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_0148;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_68 = ___json0;
		int32_t* L_69 = ___index1;
		int32_t L_70 = *((int32_t*)L_69);
		NullCheck(L_68);
		int32_t L_71 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)3));
		uint16_t L_72 = (uint16_t)(L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t* L_73 = ___index1;
		int32_t* L_74 = ___index1;
		int32_t L_75 = *((int32_t*)L_74);
		*((int32_t*)L_73) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)4));
		return ((int32_t)9);
	}

IL_0148:
	{
		int32_t L_76 = V_1;
		if ((((int32_t)L_76) < ((int32_t)4)))
		{
			goto IL_018a;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_77 = ___json0;
		int32_t* L_78 = ___index1;
		int32_t L_79 = *((int32_t*)L_78);
		NullCheck(L_77);
		int32_t L_80 = L_79;
		uint16_t L_81 = (uint16_t)(L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		if ((!(((uint32_t)L_81) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_018a;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_82 = ___json0;
		int32_t* L_83 = ___index1;
		int32_t L_84 = *((int32_t*)L_83);
		NullCheck(L_82);
		int32_t L_85 = ((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)1));
		uint16_t L_86 = (uint16_t)(L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		if ((!(((uint32_t)L_86) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_018a;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_87 = ___json0;
		int32_t* L_88 = ___index1;
		int32_t L_89 = *((int32_t*)L_88);
		NullCheck(L_87);
		int32_t L_90 = ((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)2));
		uint16_t L_91 = (uint16_t)(L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		if ((!(((uint32_t)L_91) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_018a;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_92 = ___json0;
		int32_t* L_93 = ___index1;
		int32_t L_94 = *((int32_t*)L_93);
		NullCheck(L_92);
		int32_t L_95 = ((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)3));
		uint16_t L_96 = (uint16_t)(L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		if ((!(((uint32_t)L_96) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_018a;
		}
	}
	{
		int32_t* L_97 = ___index1;
		int32_t* L_98 = ___index1;
		int32_t L_99 = *((int32_t*)L_98);
		*((int32_t*)L_97) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_99, (int32_t)4));
		return ((int32_t)11);
	}

IL_018a:
	{
		return 0;
	}
}
// System.Boolean UnityEngine.Advertisements.SimpleJson.SimpleJson::SerializeValue(UnityEngine.Advertisements.SimpleJson.IJsonSerializerStrategy,System.Object,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleJson_SerializeValue_m6FC1E7FD91F662DE070E45E95B9747FC1A3632F4 (RuntimeObject* ___jsonSerializerStrategy0, RuntimeObject * ___value1, StringBuilder_t * ___builder2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_SerializeValue_m6FC1E7FD91F662DE070E45E95B9747FC1A3632F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	StringBuilder_t * G_B13_0 = NULL;
	StringBuilder_t * G_B12_0 = NULL;
	String_t* G_B14_0 = NULL;
	StringBuilder_t * G_B14_1 = NULL;
	{
		V_0 = (bool)1;
		RuntimeObject * L_0 = ___value1;
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2 = V_1;
		StringBuilder_t * L_3 = ___builder2;
		bool L_4 = SimpleJson_SerializeString_m35442C27202640FC7396CC39C102ACD8B847B061(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0100;
	}

IL_001c:
	{
		RuntimeObject * L_5 = ___value1;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, IDictionary_2_t6AF508DE18DA398DBB91330BEEB14B0CFBD4A8ED_il2cpp_TypeInfo_var));
		RuntimeObject* L_6 = V_2;
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_7 = ___jsonSerializerStrategy0;
		RuntimeObject* L_8 = V_2;
		NullCheck(L_8);
		RuntimeObject* L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.ICollection`1<!0> System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Keys() */, IDictionary_2_t6AF508DE18DA398DBB91330BEEB14B0CFBD4A8ED_il2cpp_TypeInfo_var, L_8);
		RuntimeObject* L_10 = V_2;
		NullCheck(L_10);
		RuntimeObject* L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.ICollection`1<!1> System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Values() */, IDictionary_2_t6AF508DE18DA398DBB91330BEEB14B0CFBD4A8ED_il2cpp_TypeInfo_var, L_10);
		StringBuilder_t * L_12 = ___builder2;
		bool L_13 = SimpleJson_SerializeObject_mCD079C47DEEFA24E910AE8E81A8C2637F46B9587(L_7, L_9, L_11, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		goto IL_0100;
	}

IL_0042:
	{
		RuntimeObject * L_14 = ___value1;
		V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_14, IDictionary_2_t8D4B47914EFD2300DFBC7D9626F3D538CFA7CA53_il2cpp_TypeInfo_var));
		RuntimeObject* L_15 = V_3;
		if (!L_15)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_16 = ___jsonSerializerStrategy0;
		RuntimeObject* L_17 = V_3;
		NullCheck(L_17);
		RuntimeObject* L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.ICollection`1<!0> System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Keys() */, IDictionary_2_t8D4B47914EFD2300DFBC7D9626F3D538CFA7CA53_il2cpp_TypeInfo_var, L_17);
		RuntimeObject* L_19 = V_3;
		NullCheck(L_19);
		RuntimeObject* L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.ICollection`1<!1> System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Values() */, IDictionary_2_t8D4B47914EFD2300DFBC7D9626F3D538CFA7CA53_il2cpp_TypeInfo_var, L_19);
		StringBuilder_t * L_21 = ___builder2;
		bool L_22 = SimpleJson_SerializeObject_mCD079C47DEEFA24E910AE8E81A8C2637F46B9587(L_16, L_18, L_20, L_21, /*hidden argument*/NULL);
		V_0 = L_22;
		goto IL_0100;
	}

IL_0068:
	{
		RuntimeObject * L_23 = ___value1;
		V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var));
		RuntimeObject* L_24 = V_4;
		if (!L_24)
		{
			goto IL_0086;
		}
	}
	{
		RuntimeObject* L_25 = ___jsonSerializerStrategy0;
		RuntimeObject* L_26 = V_4;
		StringBuilder_t * L_27 = ___builder2;
		bool L_28 = SimpleJson_SerializeArray_mD7C2F80ED44EC64486114EB09B729B8A0ECFC900(L_25, L_26, L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		goto IL_0100;
	}

IL_0086:
	{
		RuntimeObject * L_29 = ___value1;
		bool L_30 = SimpleJson_IsNumeric_m1856CCEBA7A537D615193209C291579BC097D901(L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_009e;
		}
	}
	{
		RuntimeObject * L_31 = ___value1;
		StringBuilder_t * L_32 = ___builder2;
		bool L_33 = SimpleJson_SerializeNumber_m917350F63AFC1C28361A4F30149124ABDE56C2E6(L_31, L_32, /*hidden argument*/NULL);
		V_0 = L_33;
		goto IL_0100;
	}

IL_009e:
	{
		RuntimeObject * L_34 = ___value1;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_34, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))
		{
			goto IL_00cf;
		}
	}
	{
		StringBuilder_t * L_35 = ___builder2;
		RuntimeObject * L_36 = ___value1;
		G_B12_0 = L_35;
		if (!((*(bool*)((bool*)UnBox(L_36, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))))
		{
			G_B13_0 = L_35;
			goto IL_00bf;
		}
	}
	{
		G_B14_0 = _stringLiteral5FFE533B830F08A0326348A9160AFAFC8ADA44DB;
		G_B14_1 = G_B12_0;
		goto IL_00c4;
	}

IL_00bf:
	{
		G_B14_0 = _stringLiteral7CB6EFB98BA5972A9B5090DC2E517FE14D12CB04;
		G_B14_1 = G_B13_0;
	}

IL_00c4:
	{
		NullCheck(G_B14_1);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(G_B14_1, G_B14_0, /*hidden argument*/NULL);
		goto IL_0100;
	}

IL_00cf:
	{
		RuntimeObject * L_37 = ___value1;
		if (L_37)
		{
			goto IL_00e6;
		}
	}
	{
		StringBuilder_t * L_38 = ___builder2;
		NullCheck(L_38);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_38, _stringLiteral2BE88CA4242C76E8253AC62474851065032D6833, /*hidden argument*/NULL);
		goto IL_0100;
	}

IL_00e6:
	{
		RuntimeObject* L_39 = ___jsonSerializerStrategy0;
		RuntimeObject * L_40 = ___value1;
		NullCheck(L_39);
		bool L_41 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject ** >::Invoke(0 /* System.Boolean UnityEngine.Advertisements.SimpleJson.IJsonSerializerStrategy::TrySerializeNonPrimitiveObject(System.Object,System.Object&) */, IJsonSerializerStrategy_tE452A33F7FCE60A3E60819983B00BF48EF1E5DC0_il2cpp_TypeInfo_var, L_39, L_40, (RuntimeObject **)(&V_5));
		V_0 = L_41;
		bool L_42 = V_0;
		if (!L_42)
		{
			goto IL_0100;
		}
	}
	{
		RuntimeObject* L_43 = ___jsonSerializerStrategy0;
		RuntimeObject * L_44 = V_5;
		StringBuilder_t * L_45 = ___builder2;
		SimpleJson_SerializeValue_m6FC1E7FD91F662DE070E45E95B9747FC1A3632F4(L_43, L_44, L_45, /*hidden argument*/NULL);
	}

IL_0100:
	{
		bool L_46 = V_0;
		return L_46;
	}
}
// System.Boolean UnityEngine.Advertisements.SimpleJson.SimpleJson::SerializeObject(UnityEngine.Advertisements.SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Collections.IEnumerable,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleJson_SerializeObject_mCD079C47DEEFA24E910AE8E81A8C2637F46B9587 (RuntimeObject* ___jsonSerializerStrategy0, RuntimeObject* ___keys1, RuntimeObject* ___values2, StringBuilder_t * ___builder3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_SerializeObject_mCD079C47DEEFA24E910AE8E81A8C2637F46B9587_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	String_t* V_5 = NULL;
	{
		StringBuilder_t * L_0 = ___builder3;
		NullCheck(L_0);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_0, _stringLiteral60BA4B2DAA4ED4D070FEC06687E249E0E6F9EE45, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___keys1;
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		RuntimeObject* L_3 = ___values2;
		NullCheck(L_3);
		RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
		V_2 = (bool)1;
		goto IL_008d;
	}

IL_0021:
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject * L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_5);
		V_3 = L_6;
		RuntimeObject* L_7 = V_1;
		NullCheck(L_7);
		RuntimeObject * L_8 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_7);
		V_4 = L_8;
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_0042;
		}
	}
	{
		StringBuilder_t * L_10 = ___builder3;
		NullCheck(L_10);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_10, _stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808, /*hidden argument*/NULL);
	}

IL_0042:
	{
		RuntimeObject * L_11 = V_3;
		V_5 = ((String_t*)IsInstSealed((RuntimeObject*)L_11, String_t_il2cpp_TypeInfo_var));
		String_t* L_12 = V_5;
		if (!L_12)
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_13 = V_5;
		StringBuilder_t * L_14 = ___builder3;
		SimpleJson_SerializeString_m35442C27202640FC7396CC39C102ACD8B847B061(L_13, L_14, /*hidden argument*/NULL);
		goto IL_006f;
	}

IL_005f:
	{
		RuntimeObject* L_15 = ___jsonSerializerStrategy0;
		RuntimeObject * L_16 = V_4;
		StringBuilder_t * L_17 = ___builder3;
		bool L_18 = SimpleJson_SerializeValue_m6FC1E7FD91F662DE070E45E95B9747FC1A3632F4(L_15, L_16, L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_006f;
		}
	}
	{
		return (bool)0;
	}

IL_006f:
	{
		StringBuilder_t * L_19 = ___builder3;
		NullCheck(L_19);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_19, _stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9, /*hidden argument*/NULL);
		RuntimeObject* L_20 = ___jsonSerializerStrategy0;
		RuntimeObject * L_21 = V_4;
		StringBuilder_t * L_22 = ___builder3;
		bool L_23 = SimpleJson_SerializeValue_m6FC1E7FD91F662DE070E45E95B9747FC1A3632F4(L_20, L_21, L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_008b;
		}
	}
	{
		return (bool)0;
	}

IL_008b:
	{
		V_2 = (bool)0;
	}

IL_008d:
	{
		RuntimeObject* L_24 = V_0;
		NullCheck(L_24);
		bool L_25 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_24);
		if (!L_25)
		{
			goto IL_00a3;
		}
	}
	{
		RuntimeObject* L_26 = V_1;
		NullCheck(L_26);
		bool L_27 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_26);
		if (L_27)
		{
			goto IL_0021;
		}
	}

IL_00a3:
	{
		StringBuilder_t * L_28 = ___builder3;
		NullCheck(L_28);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_28, _stringLiteralC2B7DF6201FDD3362399091F0A29550DF3505B6A, /*hidden argument*/NULL);
		return (bool)1;
	}
}
// System.Boolean UnityEngine.Advertisements.SimpleJson.SimpleJson::SerializeArray(UnityEngine.Advertisements.SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleJson_SerializeArray_mD7C2F80ED44EC64486114EB09B729B8A0ECFC900 (RuntimeObject* ___jsonSerializerStrategy0, RuntimeObject* ___anArray1, StringBuilder_t * ___builder2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_SerializeArray_mD7C2F80ED44EC64486114EB09B729B8A0ECFC900_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		StringBuilder_t * L_0 = ___builder2;
		NullCheck(L_0);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_0, _stringLiteral1E5C2F367F02E47A8C160CDA1CD9D91DECBAC441, /*hidden argument*/NULL);
		V_0 = (bool)1;
		RuntimeObject* L_1 = ___anArray1;
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var, L_1);
		V_2 = L_2;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0049;
		}

IL_001a:
		{
			RuntimeObject* L_3 = V_2;
			NullCheck(L_3);
			RuntimeObject * L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_3);
			V_1 = L_4;
			bool L_5 = V_0;
			if (L_5)
			{
				goto IL_0033;
			}
		}

IL_0027:
		{
			StringBuilder_t * L_6 = ___builder2;
			NullCheck(L_6);
			StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_6, _stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808, /*hidden argument*/NULL);
		}

IL_0033:
		{
			RuntimeObject* L_7 = ___jsonSerializerStrategy0;
			RuntimeObject * L_8 = V_1;
			StringBuilder_t * L_9 = ___builder2;
			bool L_10 = SimpleJson_SerializeValue_m6FC1E7FD91F662DE070E45E95B9747FC1A3632F4(L_7, L_8, L_9, /*hidden argument*/NULL);
			if (L_10)
			{
				goto IL_0047;
			}
		}

IL_0040:
		{
			V_3 = (bool)0;
			IL2CPP_LEAVE(0x7D, FINALLY_0059);
		}

IL_0047:
		{
			V_0 = (bool)0;
		}

IL_0049:
		{
			RuntimeObject* L_11 = V_2;
			NullCheck(L_11);
			bool L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_11);
			if (L_12)
			{
				goto IL_001a;
			}
		}

IL_0054:
		{
			IL2CPP_LEAVE(0x6F, FINALLY_0059);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0059;
	}

FINALLY_0059:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_13 = V_2;
			RuntimeObject* L_14 = ((RuntimeObject*)IsInst((RuntimeObject*)L_13, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			V_4 = L_14;
			if (!L_14)
			{
				goto IL_006e;
			}
		}

IL_0067:
		{
			RuntimeObject* L_15 = V_4;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_15);
		}

IL_006e:
		{
			IL2CPP_END_FINALLY(89)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(89)
	{
		IL2CPP_JUMP_TBL(0x7D, IL_007d)
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006f:
	{
		StringBuilder_t * L_16 = ___builder2;
		NullCheck(L_16);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_16, _stringLiteral4FF447B8EF42CA51FA6FB287BED8D40F49BE58F1, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_007d:
	{
		bool L_17 = V_3;
		return L_17;
	}
}
// System.Boolean UnityEngine.Advertisements.SimpleJson.SimpleJson::SerializeString(System.String,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleJson_SerializeString_m35442C27202640FC7396CC39C102ACD8B847B061 (String_t* ___aString0, StringBuilder_t * ___builder1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_SerializeString_m35442C27202640FC7396CC39C102ACD8B847B061_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		StringBuilder_t * L_0 = ___builder1;
		NullCheck(L_0);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_0, _stringLiteral2ACE62C1BEFA19E3EA37DD52BE9F6D508C5163E6, /*hidden argument*/NULL);
		String_t* L_1 = ___aString0;
		NullCheck(L_1);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_2 = String_ToCharArray_mFCFF32A5EC698E81075E0C72C874282B9ED197A6(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_00d8;
	}

IL_001a:
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint16_t L_6 = (uint16_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		Il2CppChar L_7 = V_2;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0037;
		}
	}
	{
		StringBuilder_t * L_8 = ___builder1;
		NullCheck(L_8);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_8, _stringLiteralAB006BB8AACDF6E68299BC1DFFCCC9BCC8AC3EAF, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0037:
	{
		Il2CppChar L_9 = V_2;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0050;
		}
	}
	{
		StringBuilder_t * L_10 = ___builder1;
		NullCheck(L_10);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_10, _stringLiteral9E94758983980504AF303EF297FD2BF9D9CEA063, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0050:
	{
		Il2CppChar L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)8))))
		{
			goto IL_0068;
		}
	}
	{
		StringBuilder_t * L_12 = ___builder1;
		NullCheck(L_12);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_12, _stringLiteral4629CA1B60E263BDC4326334B23323E0434717A5, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0068:
	{
		Il2CppChar L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0081;
		}
	}
	{
		StringBuilder_t * L_14 = ___builder1;
		NullCheck(L_14);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_14, _stringLiteral794A729D2E4FFBB094FEC03AE9B3ACD219371385, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0081:
	{
		Il2CppChar L_15 = V_2;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_009a;
		}
	}
	{
		StringBuilder_t * L_16 = ___builder1;
		NullCheck(L_16);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_16, _stringLiteralEF7E6794CA9C6A06B54B66F279237FB8DAAAEEA8, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_009a:
	{
		Il2CppChar L_17 = V_2;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_00b3;
		}
	}
	{
		StringBuilder_t * L_18 = ___builder1;
		NullCheck(L_18);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_18, _stringLiteralF12C84902108895980702C88DB900CEEA2D2EC01, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_00b3:
	{
		Il2CppChar L_19 = V_2;
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_00cc;
		}
	}
	{
		StringBuilder_t * L_20 = ___builder1;
		NullCheck(L_20);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_20, _stringLiteral8BF81043E29DFC96A6FE1F30F7116F552DE6E7D7, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_00cc:
	{
		StringBuilder_t * L_21 = ___builder1;
		Il2CppChar L_22 = V_2;
		NullCheck(L_21);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_21, L_22, /*hidden argument*/NULL);
	}

IL_00d4:
	{
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_00d8:
	{
		int32_t L_24 = V_1;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_25 = V_0;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		StringBuilder_t * L_26 = ___builder1;
		NullCheck(L_26);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_26, _stringLiteral2ACE62C1BEFA19E3EA37DD52BE9F6D508C5163E6, /*hidden argument*/NULL);
		return (bool)1;
	}
}
// System.Boolean UnityEngine.Advertisements.SimpleJson.SimpleJson::SerializeNumber(System.Object,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleJson_SerializeNumber_m917350F63AFC1C28361A4F30149124ABDE56C2E6 (RuntimeObject * ___number0, StringBuilder_t * ___builder1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_SerializeNumber_m917350F63AFC1C28361A4F30149124ABDE56C2E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	double V_6 = 0.0;
	{
		RuntimeObject * L_0 = ___number0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var)))
		{
			goto IL_002a;
		}
	}
	{
		StringBuilder_t * L_1 = ___builder1;
		RuntimeObject * L_2 = ___number0;
		V_0 = ((*(int64_t*)((int64_t*)UnBox(L_2, Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_3 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		String_t* L_4 = Int64_ToString_m25F3F61DC30EAF186B76BD91F83083BDDDE82B2A((int64_t*)(&V_0), L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_1, L_4, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_002a:
	{
		RuntimeObject * L_5 = ___number0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var)))
		{
			goto IL_0054;
		}
	}
	{
		StringBuilder_t * L_6 = ___builder1;
		RuntimeObject * L_7 = ___number0;
		V_1 = ((*(uint64_t*)((uint64_t*)UnBox(L_7, UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_8 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		String_t* L_9 = UInt64_ToString_m6CBBC10ABBA0EE36F5E72F926A38F6CD7F497A55((uint64_t*)(&V_1), L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_6, L_9, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_0054:
	{
		RuntimeObject * L_10 = ___number0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_10, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))
		{
			goto IL_007e;
		}
	}
	{
		StringBuilder_t * L_11 = ___builder1;
		RuntimeObject * L_12 = ___number0;
		V_2 = ((*(int32_t*)((int32_t*)UnBox(L_12, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_13 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		String_t* L_14 = Int32_ToString_m1D0AF82BDAB5D4710527DD3FEFA6F01246D128A5((int32_t*)(&V_2), L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_11, L_14, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_007e:
	{
		RuntimeObject * L_15 = ___number0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_15, UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var)))
		{
			goto IL_00a8;
		}
	}
	{
		StringBuilder_t * L_16 = ___builder1;
		RuntimeObject * L_17 = ___number0;
		V_3 = ((*(uint32_t*)((uint32_t*)UnBox(L_17, UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_18 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		String_t* L_19 = UInt32_ToString_mC81601CD79044D74065228749C2CA9B629CFA3EA((uint32_t*)(&V_3), L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_16, L_19, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_00a8:
	{
		RuntimeObject * L_20 = ___number0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_20, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_il2cpp_TypeInfo_var)))
		{
			goto IL_00d3;
		}
	}
	{
		StringBuilder_t * L_21 = ___builder1;
		RuntimeObject * L_22 = ___number0;
		V_4 = ((*(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 *)((Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 *)UnBox(L_22, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_23 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		String_t* L_24 = Decimal_ToString_mC257A35A991F88D3CFE6F29F619F8EC9D1D5ADFB((Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 *)(&V_4), L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_21, L_24, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_00d3:
	{
		RuntimeObject * L_25 = ___number0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_25, Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var)))
		{
			goto IL_00fe;
		}
	}
	{
		StringBuilder_t * L_26 = ___builder1;
		RuntimeObject * L_27 = ___number0;
		V_5 = ((*(float*)((float*)UnBox(L_27, Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_28 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		String_t* L_29 = Single_ToString_m578EAE7D490B9ACEF7116E4E824DC2F1E8F25A2F((float*)(&V_5), L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_26, L_29, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_00fe:
	{
		StringBuilder_t * L_30 = ___builder1;
		RuntimeObject * L_31 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_32 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		double L_33 = Convert_ToDouble_m053A47D87C59CA7A87D4E67E5E06368D775D7651(L_31, L_32, /*hidden argument*/NULL);
		V_6 = L_33;
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_34 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		String_t* L_35 = Double_ToString_m1D341E667E85E9E18783A14CB02982643E96C616((double*)(&V_6), _stringLiteral4DC7C9EC434ED06502767136789763EC11D2C4B7, L_34, /*hidden argument*/NULL);
		NullCheck(L_30);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_30, L_35, /*hidden argument*/NULL);
	}

IL_0123:
	{
		return (bool)1;
	}
}
// System.Boolean UnityEngine.Advertisements.SimpleJson.SimpleJson::IsNumeric(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleJson_IsNumeric_m1856CCEBA7A537D615193209C291579BC097D901 (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_IsNumeric_m1856CCEBA7A537D615193209C291579BC097D901_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)1;
	}

IL_000d:
	{
		RuntimeObject * L_1 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)1;
	}

IL_001a:
	{
		RuntimeObject * L_2 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_2, Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var)))
		{
			goto IL_0027;
		}
	}
	{
		return (bool)1;
	}

IL_0027:
	{
		RuntimeObject * L_3 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_3, UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var)))
		{
			goto IL_0034;
		}
	}
	{
		return (bool)1;
	}

IL_0034:
	{
		RuntimeObject * L_4 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_4, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))
		{
			goto IL_0041;
		}
	}
	{
		return (bool)1;
	}

IL_0041:
	{
		RuntimeObject * L_5 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var)))
		{
			goto IL_004e;
		}
	}
	{
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject * L_6 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var)))
		{
			goto IL_005b;
		}
	}
	{
		return (bool)1;
	}

IL_005b:
	{
		RuntimeObject * L_7 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_7, UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		return (bool)1;
	}

IL_0068:
	{
		RuntimeObject * L_8 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_8, Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var)))
		{
			goto IL_0075;
		}
	}
	{
		return (bool)1;
	}

IL_0075:
	{
		RuntimeObject * L_9 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_9, Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var)))
		{
			goto IL_0082;
		}
	}
	{
		return (bool)1;
	}

IL_0082:
	{
		RuntimeObject * L_10 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_10, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_il2cpp_TypeInfo_var)))
		{
			goto IL_008f;
		}
	}
	{
		return (bool)1;
	}

IL_008f:
	{
		return (bool)0;
	}
}
// UnityEngine.Advertisements.SimpleJson.IJsonSerializerStrategy UnityEngine.Advertisements.SimpleJson.SimpleJson::get_CurrentJsonSerializerStrategy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SimpleJson_get_CurrentJsonSerializerStrategy_m30014ED032674767BA616FECC1F592BC9C2F0BC2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_get_CurrentJsonSerializerStrategy_m30014ED032674767BA616FECC1F592BC9C2F0BC2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		RuntimeObject* L_0 = ((SimpleJson_tD74F35DC9B5A5D3F70146A8C72026BD47A7DFE7D_StaticFields*)il2cpp_codegen_static_fields_for(SimpleJson_tD74F35DC9B5A5D3F70146A8C72026BD47A7DFE7D_il2cpp_TypeInfo_var))->get__currentJsonSerializerStrategy_0();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E * L_2 = SimpleJson_get_PocoJsonSerializerStrategy_m33867E4BB096D8C7D63A649DF1F99FC11FD1C58F(/*hidden argument*/NULL);
		PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E * L_3 = L_2;
		((SimpleJson_tD74F35DC9B5A5D3F70146A8C72026BD47A7DFE7D_StaticFields*)il2cpp_codegen_static_fields_for(SimpleJson_tD74F35DC9B5A5D3F70146A8C72026BD47A7DFE7D_il2cpp_TypeInfo_var))->set__currentJsonSerializerStrategy_0(L_3);
		G_B2_0 = ((RuntimeObject*)(L_3));
	}

IL_0017:
	{
		return G_B2_0;
	}
}
// UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy UnityEngine.Advertisements.SimpleJson.SimpleJson::get_PocoJsonSerializerStrategy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E * SimpleJson_get_PocoJsonSerializerStrategy_m33867E4BB096D8C7D63A649DF1F99FC11FD1C58F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_get_PocoJsonSerializerStrategy_m33867E4BB096D8C7D63A649DF1F99FC11FD1C58F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E * G_B2_0 = NULL;
	PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E * G_B1_0 = NULL;
	{
		PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E * L_0 = ((SimpleJson_tD74F35DC9B5A5D3F70146A8C72026BD47A7DFE7D_StaticFields*)il2cpp_codegen_static_fields_for(SimpleJson_tD74F35DC9B5A5D3F70146A8C72026BD47A7DFE7D_il2cpp_TypeInfo_var))->get__pocoJsonSerializerStrategy_1();
		PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E * L_2 = (PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E *)il2cpp_codegen_object_new(PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E_il2cpp_TypeInfo_var);
		PocoJsonSerializerStrategy__ctor_mFB6AA9EE3E3AC69011D626B42A3157F5C2442A78(L_2, /*hidden argument*/NULL);
		PocoJsonSerializerStrategy_t40E49A3237BC56F62F5DE6F9034160AD2660BB0E * L_3 = L_2;
		((SimpleJson_tD74F35DC9B5A5D3F70146A8C72026BD47A7DFE7D_StaticFields*)il2cpp_codegen_static_fields_for(SimpleJson_tD74F35DC9B5A5D3F70146A8C72026BD47A7DFE7D_il2cpp_TypeInfo_var))->set__pocoJsonSerializerStrategy_1(L_3);
		G_B2_0 = L_3;
	}

IL_0017:
	{
		return G_B2_0;
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
// System.Void UnityEngine.Advertisements.StartEventArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartEventArgs__ctor_mDD562E24375595B4900123356F55D3277665D0B7 (StartEventArgs_t44F8C8482BBCC37963CFBC1C4D2F6473040717E2 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StartEventArgs__ctor_mDD562E24375595B4900123356F55D3277665D0B7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___placementId0;
		StartEventArgs_set_placementId_m5725F6F41CFFAB64EDCC54AB8B72814D4B5CE6CE_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.StartEventArgs::set_placementId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartEventArgs_set_placementId_m5725F6F41CFFAB64EDCC54AB8B72814D4B5CE6CE (StartEventArgs_t44F8C8482BBCC37963CFBC1C4D2F6473040717E2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CplacementIdU3Ek__BackingField_1(L_0);
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
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform__ctor_mD18C2812C369925CADA34D1666A0C24B1E81B9AF (UnsupportedPlatform_t5FA6C225FDA5FF02CA0C0297631D99C8C4C2E5C3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::add_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform_add_OnStart_m9B13B42B26A1FDB0B1232535BC8D18ED95B35F29 (UnsupportedPlatform_t5FA6C225FDA5FF02CA0C0297631D99C8C4C2E5C3 * __this, EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::remove_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform_remove_OnStart_mA39A91C8936E3C670F806EF0A9026B5DDE81AF02 (UnsupportedPlatform_t5FA6C225FDA5FF02CA0C0297631D99C8C4C2E5C3 * __this, EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::add_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform_add_OnFinish_m19E2134C17B9FEF8572021BA4595FC41B43D7196 (UnsupportedPlatform_t5FA6C225FDA5FF02CA0C0297631D99C8C4C2E5C3 * __this, EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnsupportedPlatform_add_OnFinish_m19E2134C17B9FEF8572021BA4595FC41B43D7196_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * V_0 = NULL;
	EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * V_1 = NULL;
	{
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_0 = __this->get_OnFinish_0();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 ** L_2 = __this->get_address_of_OnFinish_0();
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_3 = V_1;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_6 = V_0;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *>((EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 **)L_2, ((EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_8 = V_0;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *)L_8) == ((RuntimeObject*)(EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::remove_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform_remove_OnFinish_m0EAEB2F874C23B98CAF4A2E742CD23A8D41A34E4 (UnsupportedPlatform_t5FA6C225FDA5FF02CA0C0297631D99C8C4C2E5C3 * __this, EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnsupportedPlatform_remove_OnFinish_m0EAEB2F874C23B98CAF4A2E742CD23A8D41A34E4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * V_0 = NULL;
	EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * V_1 = NULL;
	{
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_0 = __this->get_OnFinish_0();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 ** L_2 = __this->get_address_of_OnFinish_0();
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_3 = V_1;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_6 = V_0;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *>((EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 **)L_2, ((EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_8 = V_0;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *)L_8) == ((RuntimeObject*)(EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.String UnityEngine.Advertisements.UnsupportedPlatform::get_version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnsupportedPlatform_get_version_mC9AFE00EF6DAF130055295DCAAD548DBA85630BB (UnsupportedPlatform_t5FA6C225FDA5FF02CA0C0297631D99C8C4C2E5C3 * __this, const RuntimeMethod* method)
{
	{
		return (String_t*)NULL;
	}
}
// System.Boolean UnityEngine.Advertisements.UnsupportedPlatform::get_debugMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsupportedPlatform_get_debugMode_m358876939632E6BC9A5506126CBBF1EAB2A95181 (UnsupportedPlatform_t5FA6C225FDA5FF02CA0C0297631D99C8C4C2E5C3 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::set_debugMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform_set_debugMode_mB1E77BDB7741F9BAEC905B35CED85C996001D81D (UnsupportedPlatform_t5FA6C225FDA5FF02CA0C0297631D99C8C4C2E5C3 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::Initialize(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform_Initialize_mD06BA6BECF856ED2BDF9C19B29298C634ECC2A26 (UnsupportedPlatform_t5FA6C225FDA5FF02CA0C0297631D99C8C4C2E5C3 * __this, String_t* ___gameId0, bool ___testMode1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.UnsupportedPlatform::IsReady(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsupportedPlatform_IsReady_m31A2BE70ADCEA973F14B555FEB2767EE3F1CAF71 (UnsupportedPlatform_t5FA6C225FDA5FF02CA0C0297631D99C8C4C2E5C3 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// UnityEngine.Advertisements.PlacementState UnityEngine.Advertisements.UnsupportedPlatform::GetPlacementState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsupportedPlatform_GetPlacementState_m58DFB5FC8299C7E065900AF77D275A4B7E5BAA1A (UnsupportedPlatform_t5FA6C225FDA5FF02CA0C0297631D99C8C4C2E5C3 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	{
		return (int32_t)(1);
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::Show(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform_Show_mBCD7482D2C84B00B2BDBD92666D7410DF1CA25F5 (UnsupportedPlatform_t5FA6C225FDA5FF02CA0C0297631D99C8C4C2E5C3 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnsupportedPlatform_Show_mBCD7482D2C84B00B2BDBD92666D7410DF1CA25F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * V_0 = NULL;
	{
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_0 = __this->get_OnFinish_0();
		V_0 = L_0;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_2 = V_0;
		String_t* L_3 = ___placementId0;
		FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D * L_4 = (FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D *)il2cpp_codegen_object_new(FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D_il2cpp_TypeInfo_var);
		FinishEventArgs__ctor_mAB2A8CF579F4A6921762B7B6D38CA6C89E1C951A(L_4, L_3, 0, /*hidden argument*/NULL);
		NullCheck(L_2);
		EventHandler_1_Invoke_m502F374415B712E741EE202C4029BF6352AE1F9B(L_2, __this, L_4, /*hidden argument*/EventHandler_1_Invoke_m502F374415B712E741EE202C4029BF6352AE1F9B_RuntimeMethod_var);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::SetMetaData(UnityEngine.Advertisements.MetaData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform_SetMetaData_m0A0572CF53090CFFBDB1EE76B6A977C3463EAC71 (UnsupportedPlatform_t5FA6C225FDA5FF02CA0C0297631D99C8C4C2E5C3 * __this, MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * ___metaData0, const RuntimeMethod* method)
{
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Platform_UnityAdsReady_mF8779E69BBEE5186E1C9DD93FE2710D3D25876EE(char* ___placementId0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___placementId0' to managed representation
	String_t* ____placementId0_unmarshaled = NULL;
	____placementId0_unmarshaled = il2cpp_codegen_marshal_string_result(___placementId0);

	// Managed method invocation
	Platform_UnityAdsReady_mF8779E69BBEE5186E1C9DD93FE2710D3D25876EE(____placementId0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Platform_UnityAdsDidError_mE9F1E190C2D9C9B939A5FC6364D012AC63D83915(int64_t ___rawError0, char* ___message1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message1' to managed representation
	String_t* ____message1_unmarshaled = NULL;
	____message1_unmarshaled = il2cpp_codegen_marshal_string_result(___message1);

	// Managed method invocation
	Platform_UnityAdsDidError_mE9F1E190C2D9C9B939A5FC6364D012AC63D83915(___rawError0, ____message1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Platform_UnityAdsDidStart_m0797975F791AF76B3BFEE48F893EDB4435EE1E66(char* ___placementId0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___placementId0' to managed representation
	String_t* ____placementId0_unmarshaled = NULL;
	____placementId0_unmarshaled = il2cpp_codegen_marshal_string_result(___placementId0);

	// Managed method invocation
	Platform_UnityAdsDidStart_m0797975F791AF76B3BFEE48F893EDB4435EE1E66(____placementId0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Platform_UnityAdsDidFinish_m1206B2333C3317B05228D424B3447448BA75B779(char* ___placementId0, int64_t ___rawShowResult1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___placementId0' to managed representation
	String_t* ____placementId0_unmarshaled = NULL;
	____placementId0_unmarshaled = il2cpp_codegen_marshal_string_result(___placementId0);

	// Managed method invocation
	Platform_UnityAdsDidFinish_m1206B2333C3317B05228D424B3447448BA75B779(____placementId0_unmarshaled, ___rawShowResult1, NULL);

}
// System.Void UnityEngine.Advertisements.iOS.Platform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform__ctor_m7C7EAAF2110086078A0D153842CBDDDFF80B4564 (Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform__ctor_m7C7EAAF2110086078A0D153842CBDDDFF80B4564_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_1 = NULL;
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		((Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_il2cpp_TypeInfo_var))->set_s_Instance_0(__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_0, _stringLiteralB7B2A8437C0A1E2363180D3054962C29A385A0EA, /*hidden argument*/NULL);
		V_1 = L_0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = V_1;
		NullCheck(L_1);
		Object_set_hideFlags_mB0B45A19A5871EF407D7B09E0EB76003496BA4F0(L_1, ((int32_t)63), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = V_1;
		V_0 = L_2;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = V_0;
		NullCheck(L_3);
		CallbackExecutor_tB2DFCCED2168CFD8C1F6FD0C21679DA386B8CA78 * L_4 = GameObject_AddComponent_TisCallbackExecutor_tB2DFCCED2168CFD8C1F6FD0C21679DA386B8CA78_mCC2C32F9E49A29594A990104922CABCEE39656BC(L_3, /*hidden argument*/GameObject_AddComponent_TisCallbackExecutor_tB2DFCCED2168CFD8C1F6FD0C21679DA386B8CA78_mCC2C32F9E49A29594A990104922CABCEE39656BC_RuntimeMethod_var);
		((Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_il2cpp_TypeInfo_var))->set_s_CallbackExecutor_1(L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207(L_5, /*hidden argument*/NULL);
		unityAdsReady_t716CB3207A4D591AFD38E610CC8DC5EA4DE62A67 * L_6 = ((Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_6();
		if (L_6)
		{
			goto IL_004a;
		}
	}
	{
		unityAdsReady_t716CB3207A4D591AFD38E610CC8DC5EA4DE62A67 * L_7 = (unityAdsReady_t716CB3207A4D591AFD38E610CC8DC5EA4DE62A67 *)il2cpp_codegen_object_new(unityAdsReady_t716CB3207A4D591AFD38E610CC8DC5EA4DE62A67_il2cpp_TypeInfo_var);
		unityAdsReady__ctor_mF84714188DB2225544D9348546D90CCCD8327AF8(L_7, NULL, (intptr_t)((intptr_t)Platform_UnityAdsReady_mF8779E69BBEE5186E1C9DD93FE2710D3D25876EE_RuntimeMethod_var), /*hidden argument*/NULL);
		((Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_6(L_7);
	}

IL_004a:
	{
		unityAdsReady_t716CB3207A4D591AFD38E610CC8DC5EA4DE62A67 * L_8 = ((Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_6();
		Platform_UnityAdsEngineSetReadyCallback_mA3843C19AD858C15CE80B232B3E8DADDAAC51716(L_8, /*hidden argument*/NULL);
		unityAdsDidError_t0AEE1AF310020AF7C9F6A7881F50B21996A32C61 * L_9 = ((Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_7();
		if (L_9)
		{
			goto IL_006c;
		}
	}
	{
		unityAdsDidError_t0AEE1AF310020AF7C9F6A7881F50B21996A32C61 * L_10 = (unityAdsDidError_t0AEE1AF310020AF7C9F6A7881F50B21996A32C61 *)il2cpp_codegen_object_new(unityAdsDidError_t0AEE1AF310020AF7C9F6A7881F50B21996A32C61_il2cpp_TypeInfo_var);
		unityAdsDidError__ctor_m992AEB1EEF03EA824D99A0D350A40404550BA93A(L_10, NULL, (intptr_t)((intptr_t)Platform_UnityAdsDidError_mE9F1E190C2D9C9B939A5FC6364D012AC63D83915_RuntimeMethod_var), /*hidden argument*/NULL);
		((Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache1_7(L_10);
	}

IL_006c:
	{
		unityAdsDidError_t0AEE1AF310020AF7C9F6A7881F50B21996A32C61 * L_11 = ((Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_7();
		Platform_UnityAdsEngineSetDidErrorCallback_m8B1D9253693CA0F033DC81E611FED587866E6B0C(L_11, /*hidden argument*/NULL);
		unityAdsDidStart_tD78BF20784F7416774E14ADE453F6F4B4428D7FA * L_12 = ((Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_8();
		if (L_12)
		{
			goto IL_008e;
		}
	}
	{
		unityAdsDidStart_tD78BF20784F7416774E14ADE453F6F4B4428D7FA * L_13 = (unityAdsDidStart_tD78BF20784F7416774E14ADE453F6F4B4428D7FA *)il2cpp_codegen_object_new(unityAdsDidStart_tD78BF20784F7416774E14ADE453F6F4B4428D7FA_il2cpp_TypeInfo_var);
		unityAdsDidStart__ctor_m0B768A102188B8ECDB1DFAE9BF7409E972C3EBC3(L_13, NULL, (intptr_t)((intptr_t)Platform_UnityAdsDidStart_m0797975F791AF76B3BFEE48F893EDB4435EE1E66_RuntimeMethod_var), /*hidden argument*/NULL);
		((Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache2_8(L_13);
	}

IL_008e:
	{
		unityAdsDidStart_tD78BF20784F7416774E14ADE453F6F4B4428D7FA * L_14 = ((Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_8();
		Platform_UnityAdsEngineSetDidStartCallback_mDDDDE98EFE787BA398E57CD01C2C7548A068E48C(L_14, /*hidden argument*/NULL);
		unityAdsDidFinish_t9EE8992F28B4D62991C98D7D85A9E93A6835E045 * L_15 = ((Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache3_9();
		if (L_15)
		{
			goto IL_00b0;
		}
	}
	{
		unityAdsDidFinish_t9EE8992F28B4D62991C98D7D85A9E93A6835E045 * L_16 = (unityAdsDidFinish_t9EE8992F28B4D62991C98D7D85A9E93A6835E045 *)il2cpp_codegen_object_new(unityAdsDidFinish_t9EE8992F28B4D62991C98D7D85A9E93A6835E045_il2cpp_TypeInfo_var);
		unityAdsDidFinish__ctor_mA2ED5FF072F0327155571548984A15881952860E(L_16, NULL, (intptr_t)((intptr_t)Platform_UnityAdsDidFinish_m1206B2333C3317B05228D424B3447448BA75B779_RuntimeMethod_var), /*hidden argument*/NULL);
		((Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache3_9(L_16);
	}

IL_00b0:
	{
		unityAdsDidFinish_t9EE8992F28B4D62991C98D7D85A9E93A6835E045 * L_17 = ((Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache3_9();
		Platform_UnityAdsEngineSetDidFinishCallback_mCFBF38BF04995DEBE8717D0CBD5EBE55B9379A52(L_17, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsEngineInitialize(char*, int32_t);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineInitialize(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_UnityAdsEngineInitialize_mD64EDC7A17918473FCD17D8AACF4FEF0E62F79F0 (String_t* ___gameId0, bool ___testMode1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter '___gameId0' to native representation
	char* ____gameId0_marshaled = NULL;
	____gameId0_marshaled = il2cpp_codegen_marshal_string(___gameId0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsEngineInitialize)(____gameId0_marshaled, static_cast<int32_t>(___testMode1));

	// Marshaling cleanup of parameter '___gameId0' native representation
	il2cpp_codegen_marshal_free(____gameId0_marshaled);
	____gameId0_marshaled = NULL;

}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsEngineShow(char*);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineShow(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_UnityAdsEngineShow_m60C7F47D93087148C54D73153D5E2ACA0883CF9D (String_t* ___placementId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___placementId0' to native representation
	char* ____placementId0_marshaled = NULL;
	____placementId0_marshaled = il2cpp_codegen_marshal_string(___placementId0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsEngineShow)(____placementId0_marshaled);

	// Marshaling cleanup of parameter '___placementId0' native representation
	il2cpp_codegen_marshal_free(____placementId0_marshaled);
	____placementId0_marshaled = NULL;

}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityAdsEngineGetDebugMode();
// System.Boolean UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineGetDebugMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_UnityAdsEngineGetDebugMode_m9D6316E04B48D5B378E5CF9970D93D08952BD1F3 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityAdsEngineGetDebugMode)();

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsEngineSetDebugMode(int32_t);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetDebugMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_UnityAdsEngineSetDebugMode_m5FFE80ABE98285FD1DD496C24AD3C7839F947021 (bool ___debugMode0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsEngineSetDebugMode)(static_cast<int32_t>(___debugMode0));

}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityAdsEngineIsReady(char*);
// System.Boolean UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineIsReady(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_UnityAdsEngineIsReady_m9BF6C267C816CBF4102CB4F5E9504A5045B6816B (String_t* ___placementId0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___placementId0' to native representation
	char* ____placementId0_marshaled = NULL;
	____placementId0_marshaled = il2cpp_codegen_marshal_string(___placementId0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityAdsEngineIsReady)(____placementId0_marshaled);

	// Marshaling cleanup of parameter '___placementId0' native representation
	il2cpp_codegen_marshal_free(____placementId0_marshaled);
	____placementId0_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C int64_t DEFAULT_CALL UnityAdsEngineGetPlacementState(char*);
// System.Int64 UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineGetPlacementState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Platform_UnityAdsEngineGetPlacementState_m4E7D140C89E166867A42AD8D43DEF2C8467A1592 (String_t* ___placementId0, const RuntimeMethod* method)
{
	typedef int64_t (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___placementId0' to native representation
	char* ____placementId0_marshaled = NULL;
	____placementId0_marshaled = il2cpp_codegen_marshal_string(___placementId0);

	// Native function invocation
	int64_t returnValue = reinterpret_cast<PInvokeFunc>(UnityAdsEngineGetPlacementState)(____placementId0_marshaled);

	// Marshaling cleanup of parameter '___placementId0' native representation
	il2cpp_codegen_marshal_free(____placementId0_marshaled);
	____placementId0_marshaled = NULL;

	return returnValue;
}
IL2CPP_EXTERN_C char* DEFAULT_CALL UnityAdsEngineGetVersion();
// System.String UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineGetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Platform_UnityAdsEngineGetVersion_m97157D4E90AEC5525BE1CAF3ACB524F7BAFB1730 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(UnityAdsEngineGetVersion)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsEngineSetMetaData(char*, char*);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetMetaData(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_UnityAdsEngineSetMetaData_m87B3A9EC801AEE2E7B05280DBCD54A127DE63F27 (String_t* ___category0, String_t* ___data1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___category0' to native representation
	char* ____category0_marshaled = NULL;
	____category0_marshaled = il2cpp_codegen_marshal_string(___category0);

	// Marshaling of parameter '___data1' to native representation
	char* ____data1_marshaled = NULL;
	____data1_marshaled = il2cpp_codegen_marshal_string(___data1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsEngineSetMetaData)(____category0_marshaled, ____data1_marshaled);

	// Marshaling cleanup of parameter '___category0' native representation
	il2cpp_codegen_marshal_free(____category0_marshaled);
	____category0_marshaled = NULL;

	// Marshaling cleanup of parameter '___data1' native representation
	il2cpp_codegen_marshal_free(____data1_marshaled);
	____data1_marshaled = NULL;

}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsEngineSetReadyCallback(Il2CppMethodPointer);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetReadyCallback(UnityEngine.Advertisements.iOS.Platform_unityAdsReady)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_UnityAdsEngineSetReadyCallback_mA3843C19AD858C15CE80B232B3E8DADDAAC51716 (unityAdsReady_t716CB3207A4D591AFD38E610CC8DC5EA4DE62A67 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsEngineSetReadyCallback)(____callback0_marshaled);

}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsEngineSetDidErrorCallback(Il2CppMethodPointer);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetDidErrorCallback(UnityEngine.Advertisements.iOS.Platform_unityAdsDidError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_UnityAdsEngineSetDidErrorCallback_m8B1D9253693CA0F033DC81E611FED587866E6B0C (unityAdsDidError_t0AEE1AF310020AF7C9F6A7881F50B21996A32C61 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsEngineSetDidErrorCallback)(____callback0_marshaled);

}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsEngineSetDidStartCallback(Il2CppMethodPointer);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetDidStartCallback(UnityEngine.Advertisements.iOS.Platform_unityAdsDidStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_UnityAdsEngineSetDidStartCallback_mDDDDE98EFE787BA398E57CD01C2C7548A068E48C (unityAdsDidStart_tD78BF20784F7416774E14ADE453F6F4B4428D7FA * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsEngineSetDidStartCallback)(____callback0_marshaled);

}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsEngineSetDidFinishCallback(Il2CppMethodPointer);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetDidFinishCallback(UnityEngine.Advertisements.iOS.Platform_unityAdsDidFinish)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_UnityAdsEngineSetDidFinishCallback_mCFBF38BF04995DEBE8717D0CBD5EBE55B9379A52 (unityAdsDidFinish_t9EE8992F28B4D62991C98D7D85A9E93A6835E045 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsEngineSetDidFinishCallback)(____callback0_marshaled);

}
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsReady(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_UnityAdsReady_mF8779E69BBEE5186E1C9DD93FE2710D3D25876EE (String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_UnityAdsReady_mF8779E69BBEE5186E1C9DD93FE2710D3D25876EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CUnityAdsReadyU3Ec__AnonStorey0_tB27C3EFC407540F32BE16EEEECF2C7B88BF43A79 * V_0 = NULL;
	{
		U3CUnityAdsReadyU3Ec__AnonStorey0_tB27C3EFC407540F32BE16EEEECF2C7B88BF43A79 * L_0 = (U3CUnityAdsReadyU3Ec__AnonStorey0_tB27C3EFC407540F32BE16EEEECF2C7B88BF43A79 *)il2cpp_codegen_object_new(U3CUnityAdsReadyU3Ec__AnonStorey0_tB27C3EFC407540F32BE16EEEECF2C7B88BF43A79_il2cpp_TypeInfo_var);
		U3CUnityAdsReadyU3Ec__AnonStorey0__ctor_m974B0196332D6854150A1B5CB63B347C86439CD9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CUnityAdsReadyU3Ec__AnonStorey0_tB27C3EFC407540F32BE16EEEECF2C7B88BF43A79 * L_1 = V_0;
		String_t* L_2 = ___placementId0;
		NullCheck(L_1);
		L_1->set_placementId_1(L_2);
		U3CUnityAdsReadyU3Ec__AnonStorey0_tB27C3EFC407540F32BE16EEEECF2C7B88BF43A79 * L_3 = V_0;
		Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D * L_4 = ((Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_il2cpp_TypeInfo_var))->get_s_Instance_0();
		NullCheck(L_4);
		EventHandler_1_tB57D8AF0A9FA3BFE6ABEC77DE046E4A20526A09A * L_5 = L_4->get_OnReady_2();
		NullCheck(L_3);
		L_3->set_handler_0(L_5);
		U3CUnityAdsReadyU3Ec__AnonStorey0_tB27C3EFC407540F32BE16EEEECF2C7B88BF43A79 * L_6 = V_0;
		NullCheck(L_6);
		EventHandler_1_tB57D8AF0A9FA3BFE6ABEC77DE046E4A20526A09A * L_7 = L_6->get_handler_0();
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		CallbackExecutor_tB2DFCCED2168CFD8C1F6FD0C21679DA386B8CA78 * L_8 = ((Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_il2cpp_TypeInfo_var))->get_s_CallbackExecutor_1();
		U3CUnityAdsReadyU3Ec__AnonStorey0_tB27C3EFC407540F32BE16EEEECF2C7B88BF43A79 * L_9 = V_0;
		Action_1_t089491CF3BD2890A851D82690754A8F0DE899372 * L_10 = (Action_1_t089491CF3BD2890A851D82690754A8F0DE899372 *)il2cpp_codegen_object_new(Action_1_t089491CF3BD2890A851D82690754A8F0DE899372_il2cpp_TypeInfo_var);
		Action_1__ctor_m7DE37BC592ACBC88BE0B514148CF0693C158DA35(L_10, L_9, (intptr_t)((intptr_t)U3CUnityAdsReadyU3Ec__AnonStorey0_U3CU3Em__0_mA09E0B96E6055721CE9AD609B31AE78BF5E5B903_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m7DE37BC592ACBC88BE0B514148CF0693C158DA35_RuntimeMethod_var);
		NullCheck(L_8);
		CallbackExecutor_Post_m36135492FCF9F10CC763800AF029CD3CA7FB808F(L_8, L_10, /*hidden argument*/NULL);
	}

IL_003e:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsDidError(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_UnityAdsDidError_mE9F1E190C2D9C9B939A5FC6364D012AC63D83915 (int64_t ___rawError0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_UnityAdsDidError_mE9F1E190C2D9C9B939A5FC6364D012AC63D83915_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CUnityAdsDidErrorU3Ec__AnonStorey1_t6A5E888349986FCAC117F1F71F73587DAE2AFFEA * V_0 = NULL;
	{
		U3CUnityAdsDidErrorU3Ec__AnonStorey1_t6A5E888349986FCAC117F1F71F73587DAE2AFFEA * L_0 = (U3CUnityAdsDidErrorU3Ec__AnonStorey1_t6A5E888349986FCAC117F1F71F73587DAE2AFFEA *)il2cpp_codegen_object_new(U3CUnityAdsDidErrorU3Ec__AnonStorey1_t6A5E888349986FCAC117F1F71F73587DAE2AFFEA_il2cpp_TypeInfo_var);
		U3CUnityAdsDidErrorU3Ec__AnonStorey1__ctor_mDF643940DC37278B78CCA9B8878ED1270C859487(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CUnityAdsDidErrorU3Ec__AnonStorey1_t6A5E888349986FCAC117F1F71F73587DAE2AFFEA * L_1 = V_0;
		int64_t L_2 = ___rawError0;
		NullCheck(L_1);
		L_1->set_rawError_1(L_2);
		U3CUnityAdsDidErrorU3Ec__AnonStorey1_t6A5E888349986FCAC117F1F71F73587DAE2AFFEA * L_3 = V_0;
		String_t* L_4 = ___message1;
		NullCheck(L_3);
		L_3->set_message_2(L_4);
		U3CUnityAdsDidErrorU3Ec__AnonStorey1_t6A5E888349986FCAC117F1F71F73587DAE2AFFEA * L_5 = V_0;
		Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D * L_6 = ((Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_il2cpp_TypeInfo_var))->get_s_Instance_0();
		NullCheck(L_6);
		EventHandler_1_t674DACB444A256903A17FB5F7644CEB641C01927 * L_7 = L_6->get_OnError_5();
		NullCheck(L_5);
		L_5->set_handler_0(L_7);
		U3CUnityAdsDidErrorU3Ec__AnonStorey1_t6A5E888349986FCAC117F1F71F73587DAE2AFFEA * L_8 = V_0;
		NullCheck(L_8);
		EventHandler_1_t674DACB444A256903A17FB5F7644CEB641C01927 * L_9 = L_8->get_handler_0();
		if (!L_9)
		{
			goto IL_0045;
		}
	}
	{
		CallbackExecutor_tB2DFCCED2168CFD8C1F6FD0C21679DA386B8CA78 * L_10 = ((Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_il2cpp_TypeInfo_var))->get_s_CallbackExecutor_1();
		U3CUnityAdsDidErrorU3Ec__AnonStorey1_t6A5E888349986FCAC117F1F71F73587DAE2AFFEA * L_11 = V_0;
		Action_1_t089491CF3BD2890A851D82690754A8F0DE899372 * L_12 = (Action_1_t089491CF3BD2890A851D82690754A8F0DE899372 *)il2cpp_codegen_object_new(Action_1_t089491CF3BD2890A851D82690754A8F0DE899372_il2cpp_TypeInfo_var);
		Action_1__ctor_m7DE37BC592ACBC88BE0B514148CF0693C158DA35(L_12, L_11, (intptr_t)((intptr_t)U3CUnityAdsDidErrorU3Ec__AnonStorey1_U3CU3Em__0_m3C67C295F55B14ADBE1ED9097EB3370D371666B9_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m7DE37BC592ACBC88BE0B514148CF0693C158DA35_RuntimeMethod_var);
		NullCheck(L_10);
		CallbackExecutor_Post_m36135492FCF9F10CC763800AF029CD3CA7FB808F(L_10, L_12, /*hidden argument*/NULL);
	}

IL_0045:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsDidStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_UnityAdsDidStart_m0797975F791AF76B3BFEE48F893EDB4435EE1E66 (String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_UnityAdsDidStart_m0797975F791AF76B3BFEE48F893EDB4435EE1E66_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CUnityAdsDidStartU3Ec__AnonStorey2_t69450E13B9A35C35663BBFDA85A317661053E4F6 * V_0 = NULL;
	{
		U3CUnityAdsDidStartU3Ec__AnonStorey2_t69450E13B9A35C35663BBFDA85A317661053E4F6 * L_0 = (U3CUnityAdsDidStartU3Ec__AnonStorey2_t69450E13B9A35C35663BBFDA85A317661053E4F6 *)il2cpp_codegen_object_new(U3CUnityAdsDidStartU3Ec__AnonStorey2_t69450E13B9A35C35663BBFDA85A317661053E4F6_il2cpp_TypeInfo_var);
		U3CUnityAdsDidStartU3Ec__AnonStorey2__ctor_mD246373E7430043BD99E08C9B9B6AE4FEC491875(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CUnityAdsDidStartU3Ec__AnonStorey2_t69450E13B9A35C35663BBFDA85A317661053E4F6 * L_1 = V_0;
		String_t* L_2 = ___placementId0;
		NullCheck(L_1);
		L_1->set_placementId_1(L_2);
		U3CUnityAdsDidStartU3Ec__AnonStorey2_t69450E13B9A35C35663BBFDA85A317661053E4F6 * L_3 = V_0;
		Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D * L_4 = ((Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_il2cpp_TypeInfo_var))->get_s_Instance_0();
		NullCheck(L_4);
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_5 = L_4->get_OnStart_3();
		NullCheck(L_3);
		L_3->set_handler_0(L_5);
		U3CUnityAdsDidStartU3Ec__AnonStorey2_t69450E13B9A35C35663BBFDA85A317661053E4F6 * L_6 = V_0;
		NullCheck(L_6);
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_7 = L_6->get_handler_0();
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		CallbackExecutor_tB2DFCCED2168CFD8C1F6FD0C21679DA386B8CA78 * L_8 = ((Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_il2cpp_TypeInfo_var))->get_s_CallbackExecutor_1();
		U3CUnityAdsDidStartU3Ec__AnonStorey2_t69450E13B9A35C35663BBFDA85A317661053E4F6 * L_9 = V_0;
		Action_1_t089491CF3BD2890A851D82690754A8F0DE899372 * L_10 = (Action_1_t089491CF3BD2890A851D82690754A8F0DE899372 *)il2cpp_codegen_object_new(Action_1_t089491CF3BD2890A851D82690754A8F0DE899372_il2cpp_TypeInfo_var);
		Action_1__ctor_m7DE37BC592ACBC88BE0B514148CF0693C158DA35(L_10, L_9, (intptr_t)((intptr_t)U3CUnityAdsDidStartU3Ec__AnonStorey2_U3CU3Em__0_m3A463862347F8FA95BEB1E0203AE5B9179ED18D3_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m7DE37BC592ACBC88BE0B514148CF0693C158DA35_RuntimeMethod_var);
		NullCheck(L_8);
		CallbackExecutor_Post_m36135492FCF9F10CC763800AF029CD3CA7FB808F(L_8, L_10, /*hidden argument*/NULL);
	}

IL_003e:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsDidFinish(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_UnityAdsDidFinish_m1206B2333C3317B05228D424B3447448BA75B779 (String_t* ___placementId0, int64_t ___rawShowResult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_UnityAdsDidFinish_m1206B2333C3317B05228D424B3447448BA75B779_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CUnityAdsDidFinishU3Ec__AnonStorey3_tFF312E3E401419649E7A80CB5F522EFBD8C7A1E1 * V_0 = NULL;
	U3CUnityAdsDidFinishU3Ec__AnonStorey4_tF3998F44D42BAA24F6FC8B71E5E2443B74010AB7 * V_1 = NULL;
	{
		U3CUnityAdsDidFinishU3Ec__AnonStorey3_tFF312E3E401419649E7A80CB5F522EFBD8C7A1E1 * L_0 = (U3CUnityAdsDidFinishU3Ec__AnonStorey3_tFF312E3E401419649E7A80CB5F522EFBD8C7A1E1 *)il2cpp_codegen_object_new(U3CUnityAdsDidFinishU3Ec__AnonStorey3_tFF312E3E401419649E7A80CB5F522EFBD8C7A1E1_il2cpp_TypeInfo_var);
		U3CUnityAdsDidFinishU3Ec__AnonStorey3__ctor_m7BA137569B997B75A49FD8952C6E16CA4CDCC0CE(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CUnityAdsDidFinishU3Ec__AnonStorey3_tFF312E3E401419649E7A80CB5F522EFBD8C7A1E1 * L_1 = V_0;
		String_t* L_2 = ___placementId0;
		NullCheck(L_1);
		L_1->set_placementId_1(L_2);
		U3CUnityAdsDidFinishU3Ec__AnonStorey3_tFF312E3E401419649E7A80CB5F522EFBD8C7A1E1 * L_3 = V_0;
		Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D * L_4 = ((Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_il2cpp_TypeInfo_var))->get_s_Instance_0();
		NullCheck(L_4);
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_5 = L_4->get_OnFinish_4();
		NullCheck(L_3);
		L_3->set_handler_0(L_5);
		U3CUnityAdsDidFinishU3Ec__AnonStorey3_tFF312E3E401419649E7A80CB5F522EFBD8C7A1E1 * L_6 = V_0;
		NullCheck(L_6);
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_7 = L_6->get_handler_0();
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		U3CUnityAdsDidFinishU3Ec__AnonStorey4_tF3998F44D42BAA24F6FC8B71E5E2443B74010AB7 * L_8 = (U3CUnityAdsDidFinishU3Ec__AnonStorey4_tF3998F44D42BAA24F6FC8B71E5E2443B74010AB7 *)il2cpp_codegen_object_new(U3CUnityAdsDidFinishU3Ec__AnonStorey4_tF3998F44D42BAA24F6FC8B71E5E2443B74010AB7_il2cpp_TypeInfo_var);
		U3CUnityAdsDidFinishU3Ec__AnonStorey4__ctor_m1D006F12A7455C7680F6BA29F0A220BBCFBD4D3C(L_8, /*hidden argument*/NULL);
		V_1 = L_8;
		U3CUnityAdsDidFinishU3Ec__AnonStorey4_tF3998F44D42BAA24F6FC8B71E5E2443B74010AB7 * L_9 = V_1;
		U3CUnityAdsDidFinishU3Ec__AnonStorey3_tFF312E3E401419649E7A80CB5F522EFBD8C7A1E1 * L_10 = V_0;
		NullCheck(L_9);
		L_9->set_U3CU3Ef__refU243_1(L_10);
		U3CUnityAdsDidFinishU3Ec__AnonStorey4_tF3998F44D42BAA24F6FC8B71E5E2443B74010AB7 * L_11 = V_1;
		int64_t L_12 = ___rawShowResult1;
		NullCheck(L_11);
		L_11->set_showResult_0((((int32_t)((int32_t)L_12))));
		CallbackExecutor_tB2DFCCED2168CFD8C1F6FD0C21679DA386B8CA78 * L_13 = ((Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_il2cpp_TypeInfo_var))->get_s_CallbackExecutor_1();
		U3CUnityAdsDidFinishU3Ec__AnonStorey4_tF3998F44D42BAA24F6FC8B71E5E2443B74010AB7 * L_14 = V_1;
		Action_1_t089491CF3BD2890A851D82690754A8F0DE899372 * L_15 = (Action_1_t089491CF3BD2890A851D82690754A8F0DE899372 *)il2cpp_codegen_object_new(Action_1_t089491CF3BD2890A851D82690754A8F0DE899372_il2cpp_TypeInfo_var);
		Action_1__ctor_m7DE37BC592ACBC88BE0B514148CF0693C158DA35(L_15, L_14, (intptr_t)((intptr_t)U3CUnityAdsDidFinishU3Ec__AnonStorey4_U3CU3Em__0_mE462E6F32F8E4ED6B4B3769EA3810F1B884AC6C0_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m7DE37BC592ACBC88BE0B514148CF0693C158DA35_RuntimeMethod_var);
		NullCheck(L_13);
		CallbackExecutor_Post_m36135492FCF9F10CC763800AF029CD3CA7FB808F(L_13, L_15, /*hidden argument*/NULL);
	}

IL_0053:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::add_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_add_OnStart_m7D126030E9F8518C3F9EF3083BF582F364293F43 (Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D * __this, EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_add_OnStart_m7D126030E9F8518C3F9EF3083BF582F364293F43_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * V_0 = NULL;
	EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * V_1 = NULL;
	{
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_0 = __this->get_OnStart_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 ** L_2 = __this->get_address_of_OnStart_3();
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_3 = V_1;
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_6 = V_0;
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 *>((EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 **)L_2, ((EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_8 = V_0;
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 *)L_8) == ((RuntimeObject*)(EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::remove_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_remove_OnStart_m10D3C4174E2328A0B8892B3DDE5B0418BC9FABF8 (Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D * __this, EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_remove_OnStart_m10D3C4174E2328A0B8892B3DDE5B0418BC9FABF8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * V_0 = NULL;
	EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * V_1 = NULL;
	{
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_0 = __this->get_OnStart_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 ** L_2 = __this->get_address_of_OnStart_3();
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_3 = V_1;
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_6 = V_0;
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 *>((EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 **)L_2, ((EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_8 = V_0;
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 *)L_8) == ((RuntimeObject*)(EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::add_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_add_OnFinish_mD4AEF79157F471154B8899A3FA9F0CD1BAA65528 (Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D * __this, EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_add_OnFinish_mD4AEF79157F471154B8899A3FA9F0CD1BAA65528_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * V_0 = NULL;
	EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * V_1 = NULL;
	{
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_0 = __this->get_OnFinish_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 ** L_2 = __this->get_address_of_OnFinish_4();
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_3 = V_1;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_6 = V_0;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *>((EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 **)L_2, ((EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_8 = V_0;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *)L_8) == ((RuntimeObject*)(EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::remove_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_remove_OnFinish_m277059C3AEE4321C042111BEF70E8A5D8FF8F224 (Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D * __this, EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_remove_OnFinish_m277059C3AEE4321C042111BEF70E8A5D8FF8F224_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * V_0 = NULL;
	EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * V_1 = NULL;
	{
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_0 = __this->get_OnFinish_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 ** L_2 = __this->get_address_of_OnFinish_4();
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_3 = V_1;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_6 = V_0;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *>((EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 **)L_2, ((EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_8 = V_0;
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *)L_8) == ((RuntimeObject*)(EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.String UnityEngine.Advertisements.iOS.Platform::get_version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Platform_get_version_mBA531382FEEF8CD62C797668C6ED731385233620 (Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Platform_UnityAdsEngineGetVersion_m97157D4E90AEC5525BE1CAF3ACB524F7BAFB1730(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Advertisements.iOS.Platform::get_debugMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_get_debugMode_m977197051F367EE2F612F16A5A8AB273331AB4D6 (Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = Platform_UnityAdsEngineGetDebugMode_m9D6316E04B48D5B378E5CF9970D93D08952BD1F3(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::set_debugMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_set_debugMode_mBB10D709257D119655F24B0C94E082736A70164D (Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		Platform_UnityAdsEngineSetDebugMode_m5FFE80ABE98285FD1DD496C24AD3C7839F947021(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::Initialize(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_Initialize_m7C1A70FA71DA3E9AB2FE2544AB5FC2409B0536B1 (Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D * __this, String_t* ___gameId0, bool ___testMode1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___gameId0;
		bool L_1 = ___testMode1;
		Platform_UnityAdsEngineInitialize_mD64EDC7A17918473FCD17D8AACF4FEF0E62F79F0(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.iOS.Platform::IsReady(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_IsReady_m6DEF7F88252829165BECA711D83FD1A8E4BA6B90 (Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___placementId0;
		bool L_1 = Platform_UnityAdsEngineIsReady_m9BF6C267C816CBF4102CB4F5E9504A5045B6816B(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Advertisements.PlacementState UnityEngine.Advertisements.iOS.Platform::GetPlacementState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Platform_GetPlacementState_m54DAE648FE7A4152D9E144AC317175249ABA4802 (Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___placementId0;
		int64_t L_1 = Platform_UnityAdsEngineGetPlacementState_m4E7D140C89E166867A42AD8D43DEF2C8467A1592(L_0, /*hidden argument*/NULL);
		return (int32_t)((((int32_t)((int32_t)L_1))));
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::Show(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_Show_m9E4028588DC3DC03C53A6E2429818DFAEA90E01B (Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___placementId0;
		Platform_UnityAdsEngineShow_m60C7F47D93087148C54D73153D5E2ACA0883CF9D(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::SetMetaData(UnityEngine.Advertisements.MetaData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_SetMetaData_m9A5046D3572A50951C0A8A6D920B106A9E93E245 (Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D * __this, MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * ___metaData0, const RuntimeMethod* method)
{
	{
		MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * L_0 = ___metaData0;
		NullCheck(L_0);
		String_t* L_1 = MetaData_get_category_mD5A4B8E5F7B8CD2334C420743D2D649B55CFE4B4_inline(L_0, /*hidden argument*/NULL);
		MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * L_2 = ___metaData0;
		NullCheck(L_2);
		String_t* L_3 = MetaData_ToJSON_mD835EFD200C52C6E7C6149A59B3A5CA26B9AA2B6(L_2, /*hidden argument*/NULL);
		Platform_UnityAdsEngineSetMetaData_m87B3A9EC801AEE2E7B05280DBCD54A127DE63F27(L_1, L_3, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.iOS.Platform_<UnityAdsDidError>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnityAdsDidErrorU3Ec__AnonStorey1__ctor_mDF643940DC37278B78CCA9B8878ED1270C859487 (U3CUnityAdsDidErrorU3Ec__AnonStorey1_t6A5E888349986FCAC117F1F71F73587DAE2AFFEA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform_<UnityAdsDidError>c__AnonStorey1::<>m__0(UnityEngine.Advertisements.CallbackExecutor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnityAdsDidErrorU3Ec__AnonStorey1_U3CU3Em__0_m3C67C295F55B14ADBE1ED9097EB3370D371666B9 (U3CUnityAdsDidErrorU3Ec__AnonStorey1_t6A5E888349986FCAC117F1F71F73587DAE2AFFEA * __this, CallbackExecutor_tB2DFCCED2168CFD8C1F6FD0C21679DA386B8CA78 * ___executor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CUnityAdsDidErrorU3Ec__AnonStorey1_U3CU3Em__0_m3C67C295F55B14ADBE1ED9097EB3370D371666B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t674DACB444A256903A17FB5F7644CEB641C01927 * L_0 = __this->get_handler_0();
		Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D * L_1 = ((Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_il2cpp_TypeInfo_var))->get_s_Instance_0();
		int64_t L_2 = __this->get_rawError_1();
		String_t* L_3 = __this->get_message_2();
		ErrorEventArgs_t77C07CCB4554162961BBE00E3B7E52DDA8648409 * L_4 = (ErrorEventArgs_t77C07CCB4554162961BBE00E3B7E52DDA8648409 *)il2cpp_codegen_object_new(ErrorEventArgs_t77C07CCB4554162961BBE00E3B7E52DDA8648409_il2cpp_TypeInfo_var);
		ErrorEventArgs__ctor_m81988E49417A843D749E261997BF0742F62BE567(L_4, L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		EventHandler_1_Invoke_mEF9D6A771BF3339472FF5FBA93F500AAD25210BF(L_0, L_1, L_4, /*hidden argument*/EventHandler_1_Invoke_mEF9D6A771BF3339472FF5FBA93F500AAD25210BF_RuntimeMethod_var);
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
// System.Void UnityEngine.Advertisements.iOS.Platform_<UnityAdsDidFinish>c__AnonStorey3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnityAdsDidFinishU3Ec__AnonStorey3__ctor_m7BA137569B997B75A49FD8952C6E16CA4CDCC0CE (U3CUnityAdsDidFinishU3Ec__AnonStorey3_tFF312E3E401419649E7A80CB5F522EFBD8C7A1E1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.iOS.Platform_<UnityAdsDidFinish>c__AnonStorey4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnityAdsDidFinishU3Ec__AnonStorey4__ctor_m1D006F12A7455C7680F6BA29F0A220BBCFBD4D3C (U3CUnityAdsDidFinishU3Ec__AnonStorey4_tF3998F44D42BAA24F6FC8B71E5E2443B74010AB7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform_<UnityAdsDidFinish>c__AnonStorey4::<>m__0(UnityEngine.Advertisements.CallbackExecutor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnityAdsDidFinishU3Ec__AnonStorey4_U3CU3Em__0_mE462E6F32F8E4ED6B4B3769EA3810F1B884AC6C0 (U3CUnityAdsDidFinishU3Ec__AnonStorey4_tF3998F44D42BAA24F6FC8B71E5E2443B74010AB7 * __this, CallbackExecutor_tB2DFCCED2168CFD8C1F6FD0C21679DA386B8CA78 * ___executor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CUnityAdsDidFinishU3Ec__AnonStorey4_U3CU3Em__0_mE462E6F32F8E4ED6B4B3769EA3810F1B884AC6C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CUnityAdsDidFinishU3Ec__AnonStorey3_tFF312E3E401419649E7A80CB5F522EFBD8C7A1E1 * L_0 = __this->get_U3CU3Ef__refU243_1();
		NullCheck(L_0);
		EventHandler_1_t03FF18A8E1006BEE3BA571550529A6AF31150226 * L_1 = L_0->get_handler_0();
		Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D * L_2 = ((Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_il2cpp_TypeInfo_var))->get_s_Instance_0();
		U3CUnityAdsDidFinishU3Ec__AnonStorey3_tFF312E3E401419649E7A80CB5F522EFBD8C7A1E1 * L_3 = __this->get_U3CU3Ef__refU243_1();
		NullCheck(L_3);
		String_t* L_4 = L_3->get_placementId_1();
		int32_t L_5 = __this->get_showResult_0();
		FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D * L_6 = (FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D *)il2cpp_codegen_object_new(FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D_il2cpp_TypeInfo_var);
		FinishEventArgs__ctor_mAB2A8CF579F4A6921762B7B6D38CA6C89E1C951A(L_6, L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		EventHandler_1_Invoke_m502F374415B712E741EE202C4029BF6352AE1F9B(L_1, L_2, L_6, /*hidden argument*/EventHandler_1_Invoke_m502F374415B712E741EE202C4029BF6352AE1F9B_RuntimeMethod_var);
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
// System.Void UnityEngine.Advertisements.iOS.Platform_<UnityAdsDidStart>c__AnonStorey2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnityAdsDidStartU3Ec__AnonStorey2__ctor_mD246373E7430043BD99E08C9B9B6AE4FEC491875 (U3CUnityAdsDidStartU3Ec__AnonStorey2_t69450E13B9A35C35663BBFDA85A317661053E4F6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform_<UnityAdsDidStart>c__AnonStorey2::<>m__0(UnityEngine.Advertisements.CallbackExecutor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnityAdsDidStartU3Ec__AnonStorey2_U3CU3Em__0_m3A463862347F8FA95BEB1E0203AE5B9179ED18D3 (U3CUnityAdsDidStartU3Ec__AnonStorey2_t69450E13B9A35C35663BBFDA85A317661053E4F6 * __this, CallbackExecutor_tB2DFCCED2168CFD8C1F6FD0C21679DA386B8CA78 * ___executor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CUnityAdsDidStartU3Ec__AnonStorey2_U3CU3Em__0_m3A463862347F8FA95BEB1E0203AE5B9179ED18D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t888C12D387DFA77DBE176EE733AD5DD59E8E0E95 * L_0 = __this->get_handler_0();
		Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D * L_1 = ((Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_il2cpp_TypeInfo_var))->get_s_Instance_0();
		String_t* L_2 = __this->get_placementId_1();
		StartEventArgs_t44F8C8482BBCC37963CFBC1C4D2F6473040717E2 * L_3 = (StartEventArgs_t44F8C8482BBCC37963CFBC1C4D2F6473040717E2 *)il2cpp_codegen_object_new(StartEventArgs_t44F8C8482BBCC37963CFBC1C4D2F6473040717E2_il2cpp_TypeInfo_var);
		StartEventArgs__ctor_mDD562E24375595B4900123356F55D3277665D0B7(L_3, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		EventHandler_1_Invoke_m47462ADFD588CFE2D265C8C4B07098C461BBA71A(L_0, L_1, L_3, /*hidden argument*/EventHandler_1_Invoke_m47462ADFD588CFE2D265C8C4B07098C461BBA71A_RuntimeMethod_var);
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
// System.Void UnityEngine.Advertisements.iOS.Platform_<UnityAdsReady>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnityAdsReadyU3Ec__AnonStorey0__ctor_m974B0196332D6854150A1B5CB63B347C86439CD9 (U3CUnityAdsReadyU3Ec__AnonStorey0_tB27C3EFC407540F32BE16EEEECF2C7B88BF43A79 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform_<UnityAdsReady>c__AnonStorey0::<>m__0(UnityEngine.Advertisements.CallbackExecutor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnityAdsReadyU3Ec__AnonStorey0_U3CU3Em__0_mA09E0B96E6055721CE9AD609B31AE78BF5E5B903 (U3CUnityAdsReadyU3Ec__AnonStorey0_tB27C3EFC407540F32BE16EEEECF2C7B88BF43A79 * __this, CallbackExecutor_tB2DFCCED2168CFD8C1F6FD0C21679DA386B8CA78 * ___executor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CUnityAdsReadyU3Ec__AnonStorey0_U3CU3Em__0_mA09E0B96E6055721CE9AD609B31AE78BF5E5B903_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tB57D8AF0A9FA3BFE6ABEC77DE046E4A20526A09A * L_0 = __this->get_handler_0();
		Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D * L_1 = ((Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t7BD4EB9FD349D8AD5880B5D778EDBC6A421E3E7D_il2cpp_TypeInfo_var))->get_s_Instance_0();
		String_t* L_2 = __this->get_placementId_1();
		ReadyEventArgs_tA3E33B18240D91F48C92CC62CB5515388449E250 * L_3 = (ReadyEventArgs_tA3E33B18240D91F48C92CC62CB5515388449E250 *)il2cpp_codegen_object_new(ReadyEventArgs_tA3E33B18240D91F48C92CC62CB5515388449E250_il2cpp_TypeInfo_var);
		ReadyEventArgs__ctor_m570135928FA95C668418C3695EDBBDB4DF92710D(L_3, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		EventHandler_1_Invoke_m0FB7F633D9B24FE5EB771891831D1EA97D411A9A(L_0, L_1, L_3, /*hidden argument*/EventHandler_1_Invoke_m0FB7F633D9B24FE5EB771891831D1EA97D411A9A_RuntimeMethod_var);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unityAdsDidError_t0AEE1AF310020AF7C9F6A7881F50B21996A32C61 (unityAdsDidError_t0AEE1AF310020AF7C9F6A7881F50B21996A32C61 * __this, int64_t ___rawError0, String_t* ___message1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int64_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message1' to native representation
	char* ____message1_marshaled = NULL;
	____message1_marshaled = il2cpp_codegen_marshal_string(___message1);

	// Native function invocation
	il2cppPInvokeFunc(___rawError0, ____message1_marshaled);

	// Marshaling cleanup of parameter '___message1' native representation
	il2cpp_codegen_marshal_free(____message1_marshaled);
	____message1_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.iOS.Platform_unityAdsDidError::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsDidError__ctor_m992AEB1EEF03EA824D99A0D350A40404550BA93A (unityAdsDidError_t0AEE1AF310020AF7C9F6A7881F50B21996A32C61 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.iOS.Platform_unityAdsDidError::Invoke(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsDidError_Invoke_mD160133176123A967D0319BD62798CE875AA1764 (unityAdsDidError_t0AEE1AF310020AF7C9F6A7881F50B21996A32C61 * __this, int64_t ___rawError0, String_t* ___message1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int64_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___rawError0, ___message1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int64_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rawError0, ___message1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int64_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___rawError0, ___message1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int64_t, String_t* >::Invoke(targetMethod, targetThis, ___rawError0, ___message1);
					else
						GenericVirtActionInvoker2< int64_t, String_t* >::Invoke(targetMethod, targetThis, ___rawError0, ___message1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int64_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rawError0, ___message1);
					else
						VirtActionInvoker2< int64_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rawError0, ___message1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int64_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rawError0, ___message1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.iOS.Platform_unityAdsDidError::BeginInvoke(System.Int64,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unityAdsDidError_BeginInvoke_mACDCB3B237E82D43100690F4E43D5CB8E0B49740 (unityAdsDidError_t0AEE1AF310020AF7C9F6A7881F50B21996A32C61 * __this, int64_t ___rawError0, String_t* ___message1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (unityAdsDidError_BeginInvoke_mACDCB3B237E82D43100690F4E43D5CB8E0B49740_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &___rawError0);
	__d_args[1] = ___message1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Advertisements.iOS.Platform_unityAdsDidError::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsDidError_EndInvoke_m1BFD6E0DA2933B4DC1850A70FBD983AA59805DEF (unityAdsDidError_t0AEE1AF310020AF7C9F6A7881F50B21996A32C61 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unityAdsDidFinish_t9EE8992F28B4D62991C98D7D85A9E93A6835E045 (unityAdsDidFinish_t9EE8992F28B4D62991C98D7D85A9E93A6835E045 * __this, String_t* ___placementId0, int64_t ___rawFinishState1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, int64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___placementId0' to native representation
	char* ____placementId0_marshaled = NULL;
	____placementId0_marshaled = il2cpp_codegen_marshal_string(___placementId0);

	// Native function invocation
	il2cppPInvokeFunc(____placementId0_marshaled, ___rawFinishState1);

	// Marshaling cleanup of parameter '___placementId0' native representation
	il2cpp_codegen_marshal_free(____placementId0_marshaled);
	____placementId0_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.iOS.Platform_unityAdsDidFinish::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsDidFinish__ctor_mA2ED5FF072F0327155571548984A15881952860E (unityAdsDidFinish_t9EE8992F28B4D62991C98D7D85A9E93A6835E045 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.iOS.Platform_unityAdsDidFinish::Invoke(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsDidFinish_Invoke_m8525B16E2F313257F983E4E48C14932718C288EC (unityAdsDidFinish_t9EE8992F28B4D62991C98D7D85A9E93A6835E045 * __this, String_t* ___placementId0, int64_t ___rawFinishState1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___placementId0, ___rawFinishState1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___placementId0, ___rawFinishState1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int64_t >::Invoke(targetMethod, ___placementId0, ___rawFinishState1);
					else
						GenericVirtActionInvoker1< int64_t >::Invoke(targetMethod, ___placementId0, ___rawFinishState1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___placementId0, ___rawFinishState1);
					else
						VirtActionInvoker1< int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___placementId0, ___rawFinishState1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___placementId0, ___rawFinishState1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, int64_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___placementId0, ___rawFinishState1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, int64_t >::Invoke(targetMethod, targetThis, ___placementId0, ___rawFinishState1);
					else
						GenericVirtActionInvoker2< String_t*, int64_t >::Invoke(targetMethod, targetThis, ___placementId0, ___rawFinishState1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___placementId0, ___rawFinishState1);
					else
						VirtActionInvoker2< String_t*, int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___placementId0, ___rawFinishState1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___placementId0, ___rawFinishState1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.iOS.Platform_unityAdsDidFinish::BeginInvoke(System.String,System.Int64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unityAdsDidFinish_BeginInvoke_m6BABD4126D776D07DD3C266A4120F136F1A2FAB6 (unityAdsDidFinish_t9EE8992F28B4D62991C98D7D85A9E93A6835E045 * __this, String_t* ___placementId0, int64_t ___rawFinishState1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (unityAdsDidFinish_BeginInvoke_m6BABD4126D776D07DD3C266A4120F136F1A2FAB6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___placementId0;
	__d_args[1] = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &___rawFinishState1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Advertisements.iOS.Platform_unityAdsDidFinish::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsDidFinish_EndInvoke_m1B4D199C47FC2927EC08C4AFD5C948491B8FFE68 (unityAdsDidFinish_t9EE8992F28B4D62991C98D7D85A9E93A6835E045 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unityAdsDidStart_tD78BF20784F7416774E14ADE453F6F4B4428D7FA (unityAdsDidStart_tD78BF20784F7416774E14ADE453F6F4B4428D7FA * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___placementId0' to native representation
	char* ____placementId0_marshaled = NULL;
	____placementId0_marshaled = il2cpp_codegen_marshal_string(___placementId0);

	// Native function invocation
	il2cppPInvokeFunc(____placementId0_marshaled);

	// Marshaling cleanup of parameter '___placementId0' native representation
	il2cpp_codegen_marshal_free(____placementId0_marshaled);
	____placementId0_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.iOS.Platform_unityAdsDidStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsDidStart__ctor_m0B768A102188B8ECDB1DFAE9BF7409E972C3EBC3 (unityAdsDidStart_tD78BF20784F7416774E14ADE453F6F4B4428D7FA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.iOS.Platform_unityAdsDidStart::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsDidStart_Invoke_m79941705D6189A9EAFEE0B81CB9B844D6F162509 (unityAdsDidStart_tD78BF20784F7416774E14ADE453F6F4B4428D7FA * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___placementId0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___placementId0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___placementId0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___placementId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___placementId0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___placementId0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___placementId0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___placementId0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___placementId0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___placementId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___placementId0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___placementId0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___placementId0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.iOS.Platform_unityAdsDidStart::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unityAdsDidStart_BeginInvoke_mA448CA72BEA0A6361D4445FB8F3C74557206AC5E (unityAdsDidStart_tD78BF20784F7416774E14ADE453F6F4B4428D7FA * __this, String_t* ___placementId0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___placementId0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Advertisements.iOS.Platform_unityAdsDidStart::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsDidStart_EndInvoke_m8F4E835F8B9037CFE33DA6C7FE72CEE3C756331D (unityAdsDidStart_tD78BF20784F7416774E14ADE453F6F4B4428D7FA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unityAdsReady_t716CB3207A4D591AFD38E610CC8DC5EA4DE62A67 (unityAdsReady_t716CB3207A4D591AFD38E610CC8DC5EA4DE62A67 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___placementId0' to native representation
	char* ____placementId0_marshaled = NULL;
	____placementId0_marshaled = il2cpp_codegen_marshal_string(___placementId0);

	// Native function invocation
	il2cppPInvokeFunc(____placementId0_marshaled);

	// Marshaling cleanup of parameter '___placementId0' native representation
	il2cpp_codegen_marshal_free(____placementId0_marshaled);
	____placementId0_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.iOS.Platform_unityAdsReady::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsReady__ctor_mF84714188DB2225544D9348546D90CCCD8327AF8 (unityAdsReady_t716CB3207A4D591AFD38E610CC8DC5EA4DE62A67 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.iOS.Platform_unityAdsReady::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsReady_Invoke_m34CC60C633482AE04C520C7A28C974C61C500C6D (unityAdsReady_t716CB3207A4D591AFD38E610CC8DC5EA4DE62A67 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___placementId0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___placementId0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___placementId0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___placementId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___placementId0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___placementId0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___placementId0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___placementId0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___placementId0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___placementId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___placementId0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___placementId0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___placementId0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.iOS.Platform_unityAdsReady::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unityAdsReady_BeginInvoke_m2A6C94293DB2C6585DB101C14371B5F53A5174FD (unityAdsReady_t716CB3207A4D591AFD38E610CC8DC5EA4DE62A67 * __this, String_t* ___placementId0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___placementId0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Advertisements.iOS.Platform_unityAdsReady::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsReady_EndInvoke_mCA1D6115A6D3A8669432C950510FB51ABB59A8A7 (unityAdsReady_t716CB3207A4D591AFD38E610CC8DC5EA4DE62A67 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Advertisement_get_isInitialized_mC03067B373FC20D13E06648062797A096BF3D653_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_get_isInitialized_mC03067B373FC20D13E06648062797A096BF3D653UnityEngine_Advertisements_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		bool L_0 = ((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->get_s_Initialized_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Advertisement_set_isInitialized_m7DFD072CE302CCEBBA86754D1EB2CD6F2ACAC067_inline (bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_set_isInitialized_m7DFD072CE302CCEBBA86754D1EB2CD6F2ACAC067UnityEngine_Advertisements_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->set_s_Initialized_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Action_1_tCF5AFC4513076B0E4A471BEF3A11BFBBDF57F857 * ShowOptions_get_resultCallback_m27CD28A4374E4A248ED438A34CFC06DAFF4CC5A5_inline (ShowOptions_t6637C67D4907C169839DA10D810B696A19941904 * __this, const RuntimeMethod* method)
{
	{
		Action_1_tCF5AFC4513076B0E4A471BEF3A11BFBBDF57F857 * L_0 = __this->get_U3CresultCallbackU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ShowOptions_get_gamerSid_mAC928CD8849A7210ACC5D13584D7E818E5B0CE9E_inline (ShowOptions_t6637C67D4907C169839DA10D810B696A19941904 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CgamerSidU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Advertisement_set_isShowing_mE5B671E7E476A92F42DF678E54A570F56E4D3CC2_inline (bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_set_isShowing_mE5B671E7E476A92F42DF678E54A570F56E4D3CC2UnityEngine_Advertisements_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var);
		((Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t40473E92F9DEE2D1A2B0A6A49CBDFA61A91B9139_il2cpp_TypeInfo_var))->set_s_Showing_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t FinishEventArgs_get_showResult_m2E1ABEAC1FB9E9480FAA50FEC6F199FB8F35AC61_inline (FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CshowResultU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MetaData_get_category_mD5A4B8E5F7B8CD2334C420743D2D649B55CFE4B4_inline (MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CcategoryU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* MetaData_get_Values_mCF0DEA12D879A640D3BB9D3F3492F1038CC86C42_inline (MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_m_MetaData_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Configuration_set_enabled_mCFF582C142C846C492A667B7A8245362CFBD6EEA_inline (Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CenabledU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Configuration_set_placements_m58B284DCBFBB00F222415918863C70444FBC521C_inline (Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B * __this, Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2 * ___value0, const RuntimeMethod* method)
{
	{
		Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2 * L_0 = ___value0;
		__this->set_U3CplacementsU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Configuration_set_defaultPlacement_mD6EF91ACCF46A53B23423908BCFF542A042AE306_inline (Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CdefaultPlacementU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2 * Configuration_get_placements_m5E43756B0A956FA5E27C34D2A0E4A69AF46CA7D2_inline (Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t7C989490AC01A6A5F45395A5CA72FAF4B7D59FF2 * L_0 = __this->get_U3CplacementsU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* Configuration_get_defaultPlacement_mCC8A06910123E7A8B660D4E08DF3C46447061261_inline (Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CdefaultPlacementU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* FinishEventArgs_get_placementId_m04FB4D9DAE07868B56DDF32C420E56B5D191E274_inline (FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CplacementIdU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Configuration_get_enabled_m7FE06FE9C7378CE267FAFC9F92B6D12B70F9E30C_inline (Configuration_t7CFA129695A07F478DA33F95E224C457CFE8193B * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CenabledU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ErrorEventArgs_set_error_mB7C612852765B7A153F5AF95C7FE0564F625842E_inline (ErrorEventArgs_t77C07CCB4554162961BBE00E3B7E52DDA8648409 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_U3CerrorU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ErrorEventArgs_set_message_m0B56CCDB4119DA34736EB408EF1A8658A5B9FFCA_inline (ErrorEventArgs_t77C07CCB4554162961BBE00E3B7E52DDA8648409 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CmessageU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FinishEventArgs_set_placementId_mEAF8F650A835C16B121D9DDAE27FC8EAF3705932_inline (FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CplacementIdU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FinishEventArgs_set_showResult_mC5E531083B18F5BD9FD8D7978869B3CA873E03A9_inline (FinishEventArgs_tBC627E351CBF3F2563ACD7F5D765110318D7F49D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CshowResultU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MetaData_set_category_m2830E7B95AFD4002ADB2605B57798C955A91492D_inline (MetaData_t5CBC93B0A4A7377BB006186A40340BA51A9D6A03 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CcategoryU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ReadyEventArgs_set_placementId_m410E9AD00ED9A0802E9514E5FC7EB6F038B22CF0_inline (ReadyEventArgs_tA3E33B18240D91F48C92CC62CB5515388449E250 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CplacementIdU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void StartEventArgs_set_placementId_m5725F6F41CFFAB64EDCC54AB8B72814D4B5CE6CE_inline (StartEventArgs_t44F8C8482BBCC37963CFBC1C4D2F6473040717E2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CplacementIdU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m0CE0B6919A09EFFBB1EBA5B5DFEF50E4F8A89CFA_gshared_inline (Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return L_0;
	}
}
