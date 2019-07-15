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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// HighlightingSystem.EndOfFrame
struct EndOfFrame_t2825832094;
// HighlightingSystem.EndOfFrame/<EndOfFrameRoutine>c__Iterator0
struct U3CEndOfFrameRoutineU3Ec__Iterator0_t1448387516;
// HighlightingSystem.EndOfFrame/OnEndOfFrame
struct OnEndOfFrame_t2764173602;
// HighlightingSystem.EndOfFrame/OnEndOfFrame[]
struct OnEndOfFrameU5BU5D_t3753167895;
// HighlightingSystem.Highlighter
struct Highlighter_t672210414;
// HighlightingSystem.HighlighterBlocker
struct HighlighterBlocker_t3431127703;
// HighlightingSystem.HighlighterCore
struct HighlighterCore_t3117871998;
// HighlightingSystem.HighlighterCore/RendererData
struct RendererData_t2749889453;
// HighlightingSystem.HighlighterCore/RendererData[]
struct RendererDataU5BU5D_t3081357056;
// HighlightingSystem.HighlighterCore/RendererFilter
struct RendererFilter_t73075700;
// HighlightingSystem.HighlighterCore[]
struct HighlighterCoreU5BU5D_t2449737931;
// HighlightingSystem.HighlighterMode[]
struct HighlighterModeU5BU5D_t1249767391;
// HighlightingSystem.HighlighterRenderer
struct HighlighterRenderer_t1776162451;
// HighlightingSystem.HighlighterRenderer/Data[]
struct DataU5BU5D_t2819638097;
// HighlightingSystem.HighlighterRenderer[]
struct HighlighterRendererU5BU5D_t986994114;
// HighlightingSystem.HighlightingBase
struct HighlightingBase_t582374880;
// HighlightingSystem.HighlightingBase[]
struct HighlightingBaseU5BU5D_t1897084577;
// HighlightingSystem.HighlightingBlitter
struct HighlightingBlitter_t1505432117;
// HighlightingSystem.HighlightingPreset[]
struct HighlightingPresetU5BU5D_t2765988374;
// HighlightingSystem.HighlightingRenderer
struct HighlightingRenderer_t1923179915;
// HighlightingSystem.ShaderPropertyID
struct ShaderPropertyID_t567755140;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.HashSet`1/Link<HighlightingSystem.HighlighterRenderer>[]
struct LinkU5BU5D_t3674878869;
// System.Collections.Generic.HashSet`1<HighlightingSystem.HighlighterRenderer>
struct HashSet_1_t341111925;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t1645055638;
// System.Collections.Generic.IEnumerable`1<HighlightingSystem.HighlightingPreset>
struct IEnumerable_1_t3910439976;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t1930798642;
// System.Collections.Generic.IEqualityComparer`1<HighlightingSystem.HighlighterRenderer>
struct IEqualityComparer_1_t3883494469;
// System.Collections.Generic.IList`1<HighlightingSystem.HighlighterCore>
struct IList_1_t638224485;
// System.Collections.Generic.IList`1<HighlightingSystem.HighlightingPreset>
struct IList_1_t2450939574;
// System.Collections.Generic.List`1<HighlightingSystem.EndOfFrame/OnEndOfFrame>
struct List_1_t4236248344;
// System.Collections.Generic.List`1<HighlightingSystem.HighlighterCore/RendererData>
struct List_1_t4221964195;
// System.Collections.Generic.List`1<HighlightingSystem.HighlighterCore>
struct List_1_t294979444;
// System.Collections.Generic.List`1<HighlightingSystem.HighlighterRenderer/Data>
struct List_1_t1906947814;
// System.Collections.Generic.List`1<HighlightingSystem.HighlighterRenderer>
struct List_1_t3248237193;
// System.Collections.Generic.List`1<HighlightingSystem.HighlightingBase>
struct List_1_t2054449622;
// System.Collections.Generic.List`1<HighlightingSystem.HighlightingPreset>
struct List_1_t2107694533;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<UnityEngine.Renderer>
struct List_1_t4099101773;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t777473367;
// System.Collections.Generic.Stack`1<HighlightingSystem.HighlighterCore/RendererData>
struct Stack_1_t3593278908;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t3923495619;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Collections.ObjectModel.ReadOnlyCollection`1<HighlightingSystem.HighlighterCore>
struct ReadOnlyCollection_1_t35480989;
// System.Collections.ObjectModel.ReadOnlyCollection`1<HighlightingSystem.HighlightingPreset>
struct ReadOnlyCollection_1_t1848196078;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t4292682451;
// System.Delegate
struct Delegate_t1188392813;
// System.DelegateData
struct DelegateData_t1677132599;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Void
struct Void_t1185182177;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Gradient
struct Gradient_t3067099924;
// UnityEngine.GradientAlphaKey[]
struct GradientAlphaKeyU5BU5D_t1986482519;
// UnityEngine.GradientColorKey[]
struct GradientColorKeyU5BU5D_t4133731744;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Material[]
struct MaterialU5BU5D_t561872642;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.RenderTexture
struct RenderTexture_t2108887433;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t3210418286;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t2206337031;
// UnityEngine.Shader
struct Shader_t4151988712;
// UnityEngine.Shader[]
struct ShaderU5BU5D_t2047402361;
// UnityEngine.Texture
struct Texture_t3661962703;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Transform[]
struct TransformU5BU5D_t807237628;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t1314943911;

extern RuntimeClass* CommandBuffer_t2206337031_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* EndOfFrame_t2825832094_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern RuntimeClass* GradientAlphaKeyU5BU5D_t1986482519_il2cpp_TypeInfo_var;
extern RuntimeClass* GradientColorKeyU5BU5D_t4133731744_il2cpp_TypeInfo_var;
extern RuntimeClass* Gradient_t3067099924_il2cpp_TypeInfo_var;
extern RuntimeClass* Graphics_t783367614_il2cpp_TypeInfo_var;
extern RuntimeClass* HashSet_1_t341111925_il2cpp_TypeInfo_var;
extern RuntimeClass* HighlighterCore_t3117871998_il2cpp_TypeInfo_var;
extern RuntimeClass* HighlighterModeU5BU5D_t1249767391_il2cpp_TypeInfo_var;
extern RuntimeClass* HighlighterRenderer_t1776162451_il2cpp_TypeInfo_var;
extern RuntimeClass* Highlighter_t672210414_il2cpp_TypeInfo_var;
extern RuntimeClass* HighlightingBase_t582374880_il2cpp_TypeInfo_var;
extern RuntimeClass* HighlightingRenderer_t1923179915_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t128053199_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t1906947814_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2054449622_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2107694533_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t294979444_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3248237193_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t4099101773_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t4221964195_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t4236248344_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t777473367_il2cpp_TypeInfo_var;
extern RuntimeClass* MaterialU5BU5D_t561872642_il2cpp_TypeInfo_var;
extern RuntimeClass* Material_t340375123_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* Matrix4x4_t1817901843_il2cpp_TypeInfo_var;
extern RuntimeClass* MeshRenderer_t587009260_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* OnEndOfFrame_t2764173602_il2cpp_TypeInfo_var;
extern RuntimeClass* ParticleSystemRenderer_t2065813411_il2cpp_TypeInfo_var;
extern RuntimeClass* RenderTexture_t2108887433_il2cpp_TypeInfo_var;
extern RuntimeClass* RendererData_t2749889453_il2cpp_TypeInfo_var;
extern RuntimeClass* RendererFilter_t73075700_il2cpp_TypeInfo_var;
extern RuntimeClass* ShaderPropertyID_t567755140_il2cpp_TypeInfo_var;
extern RuntimeClass* ShaderU5BU5D_t2047402361_il2cpp_TypeInfo_var;
extern RuntimeClass* SkinnedMeshRenderer_t245602842_il2cpp_TypeInfo_var;
extern RuntimeClass* SpriteRenderer_t3235626157_il2cpp_TypeInfo_var;
extern RuntimeClass* Stack_1_t3593278908_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CEndOfFrameRoutineU3Ec__Iterator0_t1448387516_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1009001145;
extern String_t* _stringLiteral1277446993;
extern String_t* _stringLiteral1324381939;
extern String_t* _stringLiteral134923747;
extern String_t* _stringLiteral1492096147;
extern String_t* _stringLiteral1539879099;
extern String_t* _stringLiteral1613086517;
extern String_t* _stringLiteral168268734;
extern String_t* _stringLiteral1727666466;
extern String_t* _stringLiteral1913488897;
extern String_t* _stringLiteral1942974966;
extern String_t* _stringLiteral1948333211;
extern String_t* _stringLiteral1985563871;
extern String_t* _stringLiteral2053713203;
extern String_t* _stringLiteral2231944451;
extern String_t* _stringLiteral2232141059;
extern String_t* _stringLiteral2259730303;
extern String_t* _stringLiteral2645588130;
extern String_t* _stringLiteral2878535299;
extern String_t* _stringLiteral2906997769;
extern String_t* _stringLiteral3122373656;
extern String_t* _stringLiteral3184621405;
extern String_t* _stringLiteral3294177151;
extern String_t* _stringLiteral3327625703;
extern String_t* _stringLiteral3534117913;
extern String_t* _stringLiteral3539164247;
extern String_t* _stringLiteral3539373481;
extern String_t* _stringLiteral3556802456;
extern String_t* _stringLiteral3626444962;
extern String_t* _stringLiteral3796104459;
extern String_t* _stringLiteral4212753712;
extern String_t* _stringLiteral634398011;
extern String_t* _stringLiteral640967082;
extern String_t* _stringLiteral757312457;
extern String_t* _stringLiteral821289798;
extern String_t* _stringLiteral869484318;
extern String_t* _stringLiteral884776689;
extern String_t* _stringLiteral89118733;
extern String_t* _stringLiteral901552060;
extern String_t* _stringLiteral920004620;
extern const RuntimeMethod* Component_GetComponentInParent_TisHighlighterBlocker_t3431127703_m402451279_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisCamera_t4157153871_m1557787507_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisHighlighterCore_t3117871998_m87733586_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisRenderer_t2627027031_m2057483985_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisTransform_t3600365921_m1200784320_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisEndOfFrame_t2825832094_m166707815_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisHighlighterRenderer_t1776162451_m3971543210_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisHighlighterRenderer_t1776162451_m2503969283_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponents_TisRenderer_t2627027031_m3789954343_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1_Add_m2525925358_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1_Clear_m2623112546_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1_Contains_m2048367682_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1__ctor_m301462680_RuntimeMethod_var;
extern const RuntimeMethod* HighlighterCore_DefaultRendererFilter_m3173747073_RuntimeMethod_var;
extern const RuntimeMethod* HighlighterRenderer_OnEndOfFrame_m415376616_RuntimeMethod_var;
extern const RuntimeMethod* Highlighter_TransformFilterExclude_m1896708845_RuntimeMethod_var;
extern const RuntimeMethod* Highlighter_TransformFilterInclude_m201777354_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_m3513848896_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m209993823_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2657470822_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2736528363_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2838435910_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3262131300_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3529949829_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3778980941_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m697420525_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AsReadOnly_m2209084598_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AsReadOnly_m495744022_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m1664679213_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m1796798839_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m2154023298_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m3214370389_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m3990828994_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m710377627_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Contains_m2616101103_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Contains_m3854673_RuntimeMethod_var;
extern const RuntimeMethod* List_1_IndexOf_m1028121169_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveAt_m1283052132_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveAt_m1807562073_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveAt_m3885651965_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveAt_m437886299_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveAt_m849693794_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Remove_m2774071532_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Remove_m3523975345_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1138541799_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m158025881_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1628857705_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1684465584_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1812987042_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2379666983_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2449748141_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2755110883_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3303104186_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m4022584956_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m511393646_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m925949354_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m1560982368_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2263445553_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2344231220_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3127650160_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m361000296_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3686671980_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3690354630_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3704470943_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3944991828_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m754083996_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1853759484_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1940249347_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m2126599964_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m2229786729_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m2299965312_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m2880296878_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m3008735210_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m3191026567_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m3623705544_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m4193176438_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Item_m3277764254_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_Contains_m1656087833_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_Pop_m117725505_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_Push_m3773727479_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1__ctor_m3269555132_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_get_Count_m4233368765_RuntimeMethod_var;
extern const RuntimeMethod* U3CEndOfFrameRoutineU3Ec__Iterator0_Reset_m4073942580_RuntimeMethod_var;
extern const uint32_t EndOfFrame_AddListener_m498318113_MetadataUsageId;
extern const uint32_t EndOfFrame_EndOfFrameRoutine_m3056526405_MetadataUsageId;
extern const uint32_t EndOfFrame_RemoveListener_m3756592840_MetadataUsageId;
extern const uint32_t EndOfFrame__ctor_m3240973482_MetadataUsageId;
extern const uint32_t EndOfFrame_get_singleton_m1870795744_MetadataUsageId;
extern const uint32_t HighlighterCore_Awake_m1549764141_MetadataUsageId;
extern const uint32_t HighlighterCore_ClearRenderers_m3598559969_MetadataUsageId;
extern const uint32_t HighlighterCore_DefaultRendererFilter_m3173747073_MetadataUsageId;
extern const uint32_t HighlighterCore_ExpandRendererDataPool_m543965256_MetadataUsageId;
extern const uint32_t HighlighterCore_FillBufferInternal_m3415534260_MetadataUsageId;
extern const uint32_t HighlighterCore_FillBuffer_m3144797772_MetadataUsageId;
extern const uint32_t HighlighterCore_GetRendererDataInstance_m2663844405_MetadataUsageId;
extern const uint32_t HighlighterCore_GrabRenderers_m2263268915_MetadataUsageId;
extern const uint32_t HighlighterCore_OnDestroy_m411929267_MetadataUsageId;
extern const uint32_t HighlighterCore_OnDisable_m2062831095_MetadataUsageId;
extern const uint32_t HighlighterCore_OnEnable_m3378068848_MetadataUsageId;
extern const uint32_t HighlighterCore_ReleaseRendererDataInstance_m2925833157_MetadataUsageId;
extern const uint32_t HighlighterCore_UpdateRenderers_m865281105_MetadataUsageId;
extern const uint32_t HighlighterCore__cctor_m3544078773_MetadataUsageId;
extern const uint32_t HighlighterCore__ctor_m200611106_MetadataUsageId;
extern const uint32_t HighlighterCore_get_globalRendererFilter_m1103506028_MetadataUsageId;
extern const uint32_t HighlighterCore_get_highlighters_m3025014769_MetadataUsageId;
extern const uint32_t HighlighterCore_get_opaqueMaterial_m177517982_MetadataUsageId;
extern const uint32_t HighlighterCore_get_opaqueShader_m700923225_MetadataUsageId;
extern const uint32_t HighlighterCore_get_rendererFilterToUse_m444831848_MetadataUsageId;
extern const uint32_t HighlighterCore_get_transparentShader_m2954448632_MetadataUsageId;
extern const uint32_t HighlighterCore_set_globalRendererFilter_m680021492_MetadataUsageId;
extern const uint32_t HighlighterRenderer_FillBuffer_m3166186691_MetadataUsageId;
extern const uint32_t HighlighterRenderer_Initialize_m4000817202_MetadataUsageId;
extern const uint32_t HighlighterRenderer_IsValid_m3378537367_MetadataUsageId;
extern const uint32_t HighlighterRenderer_OnDestroy_m725564864_MetadataUsageId;
extern const uint32_t HighlighterRenderer_OnDisable_m4013981340_MetadataUsageId;
extern const uint32_t HighlighterRenderer_OnEnable_m3972142302_MetadataUsageId;
extern const uint32_t HighlighterRenderer_OnEndOfFrame_m415376616_MetadataUsageId;
extern const uint32_t HighlighterRenderer_OnWillRenderObject_m3422390951_MetadataUsageId;
extern const uint32_t HighlighterRenderer_SetColor_m4264849022_MetadataUsageId;
extern const uint32_t HighlighterRenderer_SetOverlay_m3780154417_MetadataUsageId;
extern const uint32_t HighlighterRenderer__cctor_m3104701346_MetadataUsageId;
extern const uint32_t HighlighterRenderer__ctor_m1877225433_MetadataUsageId;
extern const uint32_t Highlighter_Ease_m1049319965_MetadataUsageId;
extern const uint32_t Highlighter_HSVToRGB_m852676966_MetadataUsageId;
extern const uint32_t Highlighter_Loop_m2912696432_MetadataUsageId;
extern const uint32_t Highlighter_TransformFilterExclude_m1896708845_MetadataUsageId;
extern const uint32_t Highlighter_TransformFilterInclude_m201777354_MetadataUsageId;
extern const uint32_t Highlighter__ctor_m3735811063_MetadataUsageId;
extern const uint32_t Highlighter_get_constantValue_m3011646541_MetadataUsageId;
extern const uint32_t Highlighter_get_rendererFilterToUse_m1881621325_MetadataUsageId;
extern const uint32_t HighlightingBase_Blit_m2508056597_MetadataUsageId;
extern const uint32_t HighlightingBase_CheckSupported_m601906130_MetadataUsageId;
extern const uint32_t HighlightingBase_GetAA_m446378233_MetadataUsageId;
extern const uint32_t HighlightingBase_GetDescriptor_m306791711_MetadataUsageId;
extern const uint32_t HighlightingBase_GetVisible_m1401607538_MetadataUsageId;
extern const uint32_t HighlightingBase_Initialize_m1939947958_MetadataUsageId;
extern const uint32_t HighlightingBase_OnDisable_m2465875988_MetadataUsageId;
extern const uint32_t HighlightingBase_OnEnable_m275507140_MetadataUsageId;
extern const uint32_t HighlightingBase_OnEndOfFrame_m2522856276_MetadataUsageId;
extern const uint32_t HighlightingBase_OnPreCull_m3104343130_MetadataUsageId;
extern const uint32_t HighlightingBase_OnPreRender_m2841282639_MetadataUsageId;
extern const uint32_t HighlightingBase_OnRenderImage_m3863407741_MetadataUsageId;
extern const uint32_t HighlightingBase_RebuildCommandBuffer_m1673557669_MetadataUsageId;
extern const uint32_t HighlightingBase_SetVisible_m4170048733_MetadataUsageId;
extern const uint32_t HighlightingBase__cctor_m2500999928_MetadataUsageId;
extern const uint32_t HighlightingBase_set_blitter_m3154088708_MetadataUsageId;
extern const uint32_t HighlightingBase_set_blurDirections_m2932430632_MetadataUsageId;
extern const uint32_t HighlightingBase_set_blurIntensity_m709625294_MetadataUsageId;
extern const uint32_t HighlightingBase_set_downsampleFactor_m2422254815_MetadataUsageId;
extern const uint32_t HighlightingBase_set_fillAlpha_m1870608081_MetadataUsageId;
extern const uint32_t HighlightingBlitter_OnRenderImage_m3862676426_MetadataUsageId;
extern const uint32_t HighlightingBlitter_Register_m3148226583_MetadataUsageId;
extern const uint32_t HighlightingBlitter_Unregister_m2721466775_MetadataUsageId;
extern const uint32_t HighlightingBlitter__ctor_m2686943818_MetadataUsageId;
extern const uint32_t HighlightingPreset_System_IEquatableU3CHighlightingSystem_HighlightingPresetU3E_Equals_m9867215_MetadataUsageId;
extern const uint32_t HighlightingRenderer_AddPreset_m3332834484_MetadataUsageId;
extern const uint32_t HighlightingRenderer_ClearPresets_m682656353_MetadataUsageId;
extern const uint32_t HighlightingRenderer_GetPreset_m608317482_MetadataUsageId;
extern const uint32_t HighlightingRenderer_RemovePreset_m3776228819_MetadataUsageId;
extern const uint32_t HighlightingRenderer__cctor_m1369683028_MetadataUsageId;
extern const uint32_t HighlightingRenderer__ctor_m332788478_MetadataUsageId;
extern const uint32_t HighlightingRenderer_get_presets_m4161654280_MetadataUsageId;
extern const uint32_t RendererData__ctor_m894171524_MetadataUsageId;
extern const uint32_t ShaderPropertyID__cctor_m4283463106_MetadataUsageId;
extern const uint32_t U3CEndOfFrameRoutineU3Ec__Iterator0_MoveNext_m3788302542_MetadataUsageId;
extern const uint32_t U3CEndOfFrameRoutineU3Ec__Iterator0_Reset_m4073942580_MetadataUsageId;

struct HighlighterModeU5BU5D_t1249767391;
struct StringU5BU5D_t1281789340;
struct GradientAlphaKeyU5BU5D_t1986482519;
struct GradientColorKeyU5BU5D_t4133731744;
struct MaterialU5BU5D_t561872642;
struct ShaderU5BU5D_t2047402361;


#ifndef U3CMODULEU3E_T692745550_H
#define U3CMODULEU3E_T692745550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745550 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745550_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef U3CENDOFFRAMEROUTINEU3EC__ITERATOR0_T1448387516_H
#define U3CENDOFFRAMEROUTINEU3EC__ITERATOR0_T1448387516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightingSystem.EndOfFrame/<EndOfFrameRoutine>c__Iterator0
struct  U3CEndOfFrameRoutineU3Ec__Iterator0_t1448387516  : public RuntimeObject
{
public:
	// HighlightingSystem.EndOfFrame HighlightingSystem.EndOfFrame/<EndOfFrameRoutine>c__Iterator0::$this
	EndOfFrame_t2825832094 * ___U24this_0;
	// System.Object HighlightingSystem.EndOfFrame/<EndOfFrameRoutine>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean HighlightingSystem.EndOfFrame/<EndOfFrameRoutine>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 HighlightingSystem.EndOfFrame/<EndOfFrameRoutine>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CEndOfFrameRoutineU3Ec__Iterator0_t1448387516, ___U24this_0)); }
	inline EndOfFrame_t2825832094 * get_U24this_0() const { return ___U24this_0; }
	inline EndOfFrame_t2825832094 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(EndOfFrame_t2825832094 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CEndOfFrameRoutineU3Ec__Iterator0_t1448387516, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CEndOfFrameRoutineU3Ec__Iterator0_t1448387516, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CEndOfFrameRoutineU3Ec__Iterator0_t1448387516, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CENDOFFRAMEROUTINEU3EC__ITERATOR0_T1448387516_H
#ifndef RENDERERDATA_T2749889453_H
#define RENDERERDATA_T2749889453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightingSystem.HighlighterCore/RendererData
struct  RendererData_t2749889453  : public RuntimeObject
{
public:
	// UnityEngine.Renderer HighlightingSystem.HighlighterCore/RendererData::renderer
	Renderer_t2627027031 * ___renderer_0;
	// System.Collections.Generic.List`1<System.Int32> HighlightingSystem.HighlighterCore/RendererData::submeshIndices
	List_1_t128053199 * ___submeshIndices_1;

public:
	inline static int32_t get_offset_of_renderer_0() { return static_cast<int32_t>(offsetof(RendererData_t2749889453, ___renderer_0)); }
	inline Renderer_t2627027031 * get_renderer_0() const { return ___renderer_0; }
	inline Renderer_t2627027031 ** get_address_of_renderer_0() { return &___renderer_0; }
	inline void set_renderer_0(Renderer_t2627027031 * value)
	{
		___renderer_0 = value;
		Il2CppCodeGenWriteBarrier((&___renderer_0), value);
	}

	inline static int32_t get_offset_of_submeshIndices_1() { return static_cast<int32_t>(offsetof(RendererData_t2749889453, ___submeshIndices_1)); }
	inline List_1_t128053199 * get_submeshIndices_1() const { return ___submeshIndices_1; }
	inline List_1_t128053199 ** get_address_of_submeshIndices_1() { return &___submeshIndices_1; }
	inline void set_submeshIndices_1(List_1_t128053199 * value)
	{
		___submeshIndices_1 = value;
		Il2CppCodeGenWriteBarrier((&___submeshIndices_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERERDATA_T2749889453_H
#ifndef MATERIALEXTENSIONS_T3312649443_H
#define MATERIALEXTENSIONS_T3312649443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightingSystem.MaterialExtensions
struct  MaterialExtensions_t3312649443  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIALEXTENSIONS_T3312649443_H
#ifndef SHADERPROPERTYID_T567755140_H
#define SHADERPROPERTYID_T567755140_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightingSystem.ShaderPropertyID
struct  ShaderPropertyID_t567755140  : public RuntimeObject
{
public:

public:
};

struct ShaderPropertyID_t567755140_StaticFields
{
public:
	// System.Int32 HighlightingSystem.ShaderPropertyID::_MainTex
	int32_t ____MainTex_0;
	// System.Int32 HighlightingSystem.ShaderPropertyID::_Cutoff
	int32_t ____Cutoff_1;
	// System.Int32 HighlightingSystem.ShaderPropertyID::_HighlightingIntensity
	int32_t ____HighlightingIntensity_2;
	// System.Int32 HighlightingSystem.ShaderPropertyID::_HighlightingCull
	int32_t ____HighlightingCull_3;
	// System.Int32 HighlightingSystem.ShaderPropertyID::_HighlightingColor
	int32_t ____HighlightingColor_4;
	// System.Int32 HighlightingSystem.ShaderPropertyID::_HighlightingBlurOffset
	int32_t ____HighlightingBlurOffset_5;
	// System.Int32 HighlightingSystem.ShaderPropertyID::_HighlightingFillAlpha
	int32_t ____HighlightingFillAlpha_6;
	// System.Int32 HighlightingSystem.ShaderPropertyID::_HighlightingBuffer
	int32_t ____HighlightingBuffer_7;
	// System.Int32 HighlightingSystem.ShaderPropertyID::_HighlightingBlur1
	int32_t ____HighlightingBlur1_8;
	// System.Int32 HighlightingSystem.ShaderPropertyID::_HighlightingBlur2
	int32_t ____HighlightingBlur2_9;

public:
	inline static int32_t get_offset_of__MainTex_0() { return static_cast<int32_t>(offsetof(ShaderPropertyID_t567755140_StaticFields, ____MainTex_0)); }
	inline int32_t get__MainTex_0() const { return ____MainTex_0; }
	inline int32_t* get_address_of__MainTex_0() { return &____MainTex_0; }
	inline void set__MainTex_0(int32_t value)
	{
		____MainTex_0 = value;
	}

	inline static int32_t get_offset_of__Cutoff_1() { return static_cast<int32_t>(offsetof(ShaderPropertyID_t567755140_StaticFields, ____Cutoff_1)); }
	inline int32_t get__Cutoff_1() const { return ____Cutoff_1; }
	inline int32_t* get_address_of__Cutoff_1() { return &____Cutoff_1; }
	inline void set__Cutoff_1(int32_t value)
	{
		____Cutoff_1 = value;
	}

	inline static int32_t get_offset_of__HighlightingIntensity_2() { return static_cast<int32_t>(offsetof(ShaderPropertyID_t567755140_StaticFields, ____HighlightingIntensity_2)); }
	inline int32_t get__HighlightingIntensity_2() const { return ____HighlightingIntensity_2; }
	inline int32_t* get_address_of__HighlightingIntensity_2() { return &____HighlightingIntensity_2; }
	inline void set__HighlightingIntensity_2(int32_t value)
	{
		____HighlightingIntensity_2 = value;
	}

	inline static int32_t get_offset_of__HighlightingCull_3() { return static_cast<int32_t>(offsetof(ShaderPropertyID_t567755140_StaticFields, ____HighlightingCull_3)); }
	inline int32_t get__HighlightingCull_3() const { return ____HighlightingCull_3; }
	inline int32_t* get_address_of__HighlightingCull_3() { return &____HighlightingCull_3; }
	inline void set__HighlightingCull_3(int32_t value)
	{
		____HighlightingCull_3 = value;
	}

	inline static int32_t get_offset_of__HighlightingColor_4() { return static_cast<int32_t>(offsetof(ShaderPropertyID_t567755140_StaticFields, ____HighlightingColor_4)); }
	inline int32_t get__HighlightingColor_4() const { return ____HighlightingColor_4; }
	inline int32_t* get_address_of__HighlightingColor_4() { return &____HighlightingColor_4; }
	inline void set__HighlightingColor_4(int32_t value)
	{
		____HighlightingColor_4 = value;
	}

	inline static int32_t get_offset_of__HighlightingBlurOffset_5() { return static_cast<int32_t>(offsetof(ShaderPropertyID_t567755140_StaticFields, ____HighlightingBlurOffset_5)); }
	inline int32_t get__HighlightingBlurOffset_5() const { return ____HighlightingBlurOffset_5; }
	inline int32_t* get_address_of__HighlightingBlurOffset_5() { return &____HighlightingBlurOffset_5; }
	inline void set__HighlightingBlurOffset_5(int32_t value)
	{
		____HighlightingBlurOffset_5 = value;
	}

	inline static int32_t get_offset_of__HighlightingFillAlpha_6() { return static_cast<int32_t>(offsetof(ShaderPropertyID_t567755140_StaticFields, ____HighlightingFillAlpha_6)); }
	inline int32_t get__HighlightingFillAlpha_6() const { return ____HighlightingFillAlpha_6; }
	inline int32_t* get_address_of__HighlightingFillAlpha_6() { return &____HighlightingFillAlpha_6; }
	inline void set__HighlightingFillAlpha_6(int32_t value)
	{
		____HighlightingFillAlpha_6 = value;
	}

	inline static int32_t get_offset_of__HighlightingBuffer_7() { return static_cast<int32_t>(offsetof(ShaderPropertyID_t567755140_StaticFields, ____HighlightingBuffer_7)); }
	inline int32_t get__HighlightingBuffer_7() const { return ____HighlightingBuffer_7; }
	inline int32_t* get_address_of__HighlightingBuffer_7() { return &____HighlightingBuffer_7; }
	inline void set__HighlightingBuffer_7(int32_t value)
	{
		____HighlightingBuffer_7 = value;
	}

	inline static int32_t get_offset_of__HighlightingBlur1_8() { return static_cast<int32_t>(offsetof(ShaderPropertyID_t567755140_StaticFields, ____HighlightingBlur1_8)); }
	inline int32_t get__HighlightingBlur1_8() const { return ____HighlightingBlur1_8; }
	inline int32_t* get_address_of__HighlightingBlur1_8() { return &____HighlightingBlur1_8; }
	inline void set__HighlightingBlur1_8(int32_t value)
	{
		____HighlightingBlur1_8 = value;
	}

	inline static int32_t get_offset_of__HighlightingBlur2_9() { return static_cast<int32_t>(offsetof(ShaderPropertyID_t567755140_StaticFields, ____HighlightingBlur2_9)); }
	inline int32_t get__HighlightingBlur2_9() const { return ____HighlightingBlur2_9; }
	inline int32_t* get_address_of__HighlightingBlur2_9() { return &____HighlightingBlur2_9; }
	inline void set__HighlightingBlur2_9(int32_t value)
	{
		____HighlightingBlur2_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADERPROPERTYID_T567755140_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef HASHSET_1_T341111925_H
#define HASHSET_1_T341111925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1<HighlightingSystem.HighlighterRenderer>
struct  HashSet_1_t341111925  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1::links
	LinkU5BU5D_t3674878869* ___links_5;
	// T[] System.Collections.Generic.HashSet`1::slots
	HighlighterRendererU5BU5D_t986994114* ___slots_6;
	// System.Int32 System.Collections.Generic.HashSet`1::touched
	int32_t ___touched_7;
	// System.Int32 System.Collections.Generic.HashSet`1::empty_slot
	int32_t ___empty_slot_8;
	// System.Int32 System.Collections.Generic.HashSet`1::count
	int32_t ___count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::threshold
	int32_t ___threshold_10;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::comparer
	RuntimeObject* ___comparer_11;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::si
	SerializationInfo_t950877179 * ___si_12;
	// System.Int32 System.Collections.Generic.HashSet`1::generation
	int32_t ___generation_13;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(HashSet_1_t341111925, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_links_5() { return static_cast<int32_t>(offsetof(HashSet_1_t341111925, ___links_5)); }
	inline LinkU5BU5D_t3674878869* get_links_5() const { return ___links_5; }
	inline LinkU5BU5D_t3674878869** get_address_of_links_5() { return &___links_5; }
	inline void set_links_5(LinkU5BU5D_t3674878869* value)
	{
		___links_5 = value;
		Il2CppCodeGenWriteBarrier((&___links_5), value);
	}

	inline static int32_t get_offset_of_slots_6() { return static_cast<int32_t>(offsetof(HashSet_1_t341111925, ___slots_6)); }
	inline HighlighterRendererU5BU5D_t986994114* get_slots_6() const { return ___slots_6; }
	inline HighlighterRendererU5BU5D_t986994114** get_address_of_slots_6() { return &___slots_6; }
	inline void set_slots_6(HighlighterRendererU5BU5D_t986994114* value)
	{
		___slots_6 = value;
		Il2CppCodeGenWriteBarrier((&___slots_6), value);
	}

	inline static int32_t get_offset_of_touched_7() { return static_cast<int32_t>(offsetof(HashSet_1_t341111925, ___touched_7)); }
	inline int32_t get_touched_7() const { return ___touched_7; }
	inline int32_t* get_address_of_touched_7() { return &___touched_7; }
	inline void set_touched_7(int32_t value)
	{
		___touched_7 = value;
	}

	inline static int32_t get_offset_of_empty_slot_8() { return static_cast<int32_t>(offsetof(HashSet_1_t341111925, ___empty_slot_8)); }
	inline int32_t get_empty_slot_8() const { return ___empty_slot_8; }
	inline int32_t* get_address_of_empty_slot_8() { return &___empty_slot_8; }
	inline void set_empty_slot_8(int32_t value)
	{
		___empty_slot_8 = value;
	}

	inline static int32_t get_offset_of_count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t341111925, ___count_9)); }
	inline int32_t get_count_9() const { return ___count_9; }
	inline int32_t* get_address_of_count_9() { return &___count_9; }
	inline void set_count_9(int32_t value)
	{
		___count_9 = value;
	}

	inline static int32_t get_offset_of_threshold_10() { return static_cast<int32_t>(offsetof(HashSet_1_t341111925, ___threshold_10)); }
	inline int32_t get_threshold_10() const { return ___threshold_10; }
	inline int32_t* get_address_of_threshold_10() { return &___threshold_10; }
	inline void set_threshold_10(int32_t value)
	{
		___threshold_10 = value;
	}

	inline static int32_t get_offset_of_comparer_11() { return static_cast<int32_t>(offsetof(HashSet_1_t341111925, ___comparer_11)); }
	inline RuntimeObject* get_comparer_11() const { return ___comparer_11; }
	inline RuntimeObject** get_address_of_comparer_11() { return &___comparer_11; }
	inline void set_comparer_11(RuntimeObject* value)
	{
		___comparer_11 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_11), value);
	}

	inline static int32_t get_offset_of_si_12() { return static_cast<int32_t>(offsetof(HashSet_1_t341111925, ___si_12)); }
	inline SerializationInfo_t950877179 * get_si_12() const { return ___si_12; }
	inline SerializationInfo_t950877179 ** get_address_of_si_12() { return &___si_12; }
	inline void set_si_12(SerializationInfo_t950877179 * value)
	{
		___si_12 = value;
		Il2CppCodeGenWriteBarrier((&___si_12), value);
	}

	inline static int32_t get_offset_of_generation_13() { return static_cast<int32_t>(offsetof(HashSet_1_t341111925, ___generation_13)); }
	inline int32_t get_generation_13() const { return ___generation_13; }
	inline int32_t* get_address_of_generation_13() { return &___generation_13; }
	inline void set_generation_13(int32_t value)
	{
		___generation_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHSET_1_T341111925_H
#ifndef LIST_1_T4236248344_H
#define LIST_1_T4236248344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<HighlightingSystem.EndOfFrame/OnEndOfFrame>
struct  List_1_t4236248344  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	OnEndOfFrameU5BU5D_t3753167895* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4236248344, ____items_1)); }
	inline OnEndOfFrameU5BU5D_t3753167895* get__items_1() const { return ____items_1; }
	inline OnEndOfFrameU5BU5D_t3753167895** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(OnEndOfFrameU5BU5D_t3753167895* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4236248344, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4236248344, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t4236248344_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	OnEndOfFrameU5BU5D_t3753167895* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t4236248344_StaticFields, ___EmptyArray_4)); }
	inline OnEndOfFrameU5BU5D_t3753167895* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline OnEndOfFrameU5BU5D_t3753167895** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(OnEndOfFrameU5BU5D_t3753167895* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4236248344_H
#ifndef LIST_1_T4221964195_H
#define LIST_1_T4221964195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<HighlightingSystem.HighlighterCore/RendererData>
struct  List_1_t4221964195  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RendererDataU5BU5D_t3081357056* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4221964195, ____items_1)); }
	inline RendererDataU5BU5D_t3081357056* get__items_1() const { return ____items_1; }
	inline RendererDataU5BU5D_t3081357056** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RendererDataU5BU5D_t3081357056* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4221964195, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4221964195, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t4221964195_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	RendererDataU5BU5D_t3081357056* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t4221964195_StaticFields, ___EmptyArray_4)); }
	inline RendererDataU5BU5D_t3081357056* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline RendererDataU5BU5D_t3081357056** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(RendererDataU5BU5D_t3081357056* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4221964195_H
#ifndef LIST_1_T294979444_H
#define LIST_1_T294979444_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<HighlightingSystem.HighlighterCore>
struct  List_1_t294979444  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	HighlighterCoreU5BU5D_t2449737931* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t294979444, ____items_1)); }
	inline HighlighterCoreU5BU5D_t2449737931* get__items_1() const { return ____items_1; }
	inline HighlighterCoreU5BU5D_t2449737931** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(HighlighterCoreU5BU5D_t2449737931* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t294979444, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t294979444, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t294979444_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	HighlighterCoreU5BU5D_t2449737931* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t294979444_StaticFields, ___EmptyArray_4)); }
	inline HighlighterCoreU5BU5D_t2449737931* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline HighlighterCoreU5BU5D_t2449737931** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(HighlighterCoreU5BU5D_t2449737931* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T294979444_H
#ifndef LIST_1_T1906947814_H
#define LIST_1_T1906947814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<HighlightingSystem.HighlighterRenderer/Data>
struct  List_1_t1906947814  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DataU5BU5D_t2819638097* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1906947814, ____items_1)); }
	inline DataU5BU5D_t2819638097* get__items_1() const { return ____items_1; }
	inline DataU5BU5D_t2819638097** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DataU5BU5D_t2819638097* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1906947814, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1906947814, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1906947814_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	DataU5BU5D_t2819638097* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1906947814_StaticFields, ___EmptyArray_4)); }
	inline DataU5BU5D_t2819638097* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline DataU5BU5D_t2819638097** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(DataU5BU5D_t2819638097* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1906947814_H
#ifndef LIST_1_T3248237193_H
#define LIST_1_T3248237193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<HighlightingSystem.HighlighterRenderer>
struct  List_1_t3248237193  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	HighlighterRendererU5BU5D_t986994114* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3248237193, ____items_1)); }
	inline HighlighterRendererU5BU5D_t986994114* get__items_1() const { return ____items_1; }
	inline HighlighterRendererU5BU5D_t986994114** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(HighlighterRendererU5BU5D_t986994114* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3248237193, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3248237193, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3248237193_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	HighlighterRendererU5BU5D_t986994114* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3248237193_StaticFields, ___EmptyArray_4)); }
	inline HighlighterRendererU5BU5D_t986994114* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline HighlighterRendererU5BU5D_t986994114** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(HighlighterRendererU5BU5D_t986994114* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3248237193_H
#ifndef LIST_1_T2054449622_H
#define LIST_1_T2054449622_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<HighlightingSystem.HighlightingBase>
struct  List_1_t2054449622  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	HighlightingBaseU5BU5D_t1897084577* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2054449622, ____items_1)); }
	inline HighlightingBaseU5BU5D_t1897084577* get__items_1() const { return ____items_1; }
	inline HighlightingBaseU5BU5D_t1897084577** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(HighlightingBaseU5BU5D_t1897084577* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2054449622, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2054449622, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2054449622_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	HighlightingBaseU5BU5D_t1897084577* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2054449622_StaticFields, ___EmptyArray_4)); }
	inline HighlightingBaseU5BU5D_t1897084577* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline HighlightingBaseU5BU5D_t1897084577** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(HighlightingBaseU5BU5D_t1897084577* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2054449622_H
#ifndef LIST_1_T2107694533_H
#define LIST_1_T2107694533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<HighlightingSystem.HighlightingPreset>
struct  List_1_t2107694533  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	HighlightingPresetU5BU5D_t2765988374* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2107694533, ____items_1)); }
	inline HighlightingPresetU5BU5D_t2765988374* get__items_1() const { return ____items_1; }
	inline HighlightingPresetU5BU5D_t2765988374** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(HighlightingPresetU5BU5D_t2765988374* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2107694533, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2107694533, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2107694533_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	HighlightingPresetU5BU5D_t2765988374* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2107694533_StaticFields, ___EmptyArray_4)); }
	inline HighlightingPresetU5BU5D_t2765988374* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline HighlightingPresetU5BU5D_t2765988374** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(HighlightingPresetU5BU5D_t2765988374* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2107694533_H
#ifndef LIST_1_T128053199_H
#define LIST_1_T128053199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t128053199  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t385246372* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____items_1)); }
	inline Int32U5BU5D_t385246372* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t385246372** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t385246372* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t128053199_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Int32U5BU5D_t385246372* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t128053199_StaticFields, ___EmptyArray_4)); }
	inline Int32U5BU5D_t385246372* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Int32U5BU5D_t385246372** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Int32U5BU5D_t385246372* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T128053199_H
#ifndef LIST_1_T4099101773_H
#define LIST_1_T4099101773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Renderer>
struct  List_1_t4099101773  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RendererU5BU5D_t3210418286* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4099101773, ____items_1)); }
	inline RendererU5BU5D_t3210418286* get__items_1() const { return ____items_1; }
	inline RendererU5BU5D_t3210418286** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RendererU5BU5D_t3210418286* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4099101773, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4099101773, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t4099101773_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	RendererU5BU5D_t3210418286* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t4099101773_StaticFields, ___EmptyArray_4)); }
	inline RendererU5BU5D_t3210418286* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline RendererU5BU5D_t3210418286** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(RendererU5BU5D_t3210418286* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4099101773_H
#ifndef LIST_1_T777473367_H
#define LIST_1_T777473367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct  List_1_t777473367  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t807237628* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t777473367, ____items_1)); }
	inline TransformU5BU5D_t807237628* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t807237628** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t807237628* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t777473367, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t777473367, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t777473367_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	TransformU5BU5D_t807237628* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t777473367_StaticFields, ___EmptyArray_4)); }
	inline TransformU5BU5D_t807237628* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline TransformU5BU5D_t807237628** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(TransformU5BU5D_t807237628* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T777473367_H
#ifndef STACK_1_T3593278908_H
#define STACK_1_T3593278908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Stack`1<HighlightingSystem.HighlighterCore/RendererData>
struct  Stack_1_t3593278908  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	RendererDataU5BU5D_t3081357056* ____array_1;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__array_1() { return static_cast<int32_t>(offsetof(Stack_1_t3593278908, ____array_1)); }
	inline RendererDataU5BU5D_t3081357056* get__array_1() const { return ____array_1; }
	inline RendererDataU5BU5D_t3081357056** get_address_of__array_1() { return &____array_1; }
	inline void set__array_1(RendererDataU5BU5D_t3081357056* value)
	{
		____array_1 = value;
		Il2CppCodeGenWriteBarrier((&____array_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(Stack_1_t3593278908, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(Stack_1_t3593278908, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_1_T3593278908_H
#ifndef READONLYCOLLECTION_1_T35480989_H
#define READONLYCOLLECTION_1_T35480989_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyCollection`1<HighlightingSystem.HighlighterCore>
struct  ReadOnlyCollection_1_t35480989  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t35480989, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTION_1_T35480989_H
#ifndef READONLYCOLLECTION_1_T1848196078_H
#define READONLYCOLLECTION_1_T1848196078_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyCollection`1<HighlightingSystem.HighlightingPreset>
struct  ReadOnlyCollection_1_t1848196078  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t1848196078, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTION_1_T1848196078_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef DATA_T434873072_H
#define DATA_T434873072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightingSystem.HighlighterRenderer/Data
struct  Data_t434873072 
{
public:
	// UnityEngine.Material HighlightingSystem.HighlighterRenderer/Data::material
	Material_t340375123 * ___material_0;
	// System.Int32 HighlightingSystem.HighlighterRenderer/Data::submeshIndex
	int32_t ___submeshIndex_1;
	// System.Boolean HighlightingSystem.HighlighterRenderer/Data::transparent
	bool ___transparent_2;

public:
	inline static int32_t get_offset_of_material_0() { return static_cast<int32_t>(offsetof(Data_t434873072, ___material_0)); }
	inline Material_t340375123 * get_material_0() const { return ___material_0; }
	inline Material_t340375123 ** get_address_of_material_0() { return &___material_0; }
	inline void set_material_0(Material_t340375123 * value)
	{
		___material_0 = value;
		Il2CppCodeGenWriteBarrier((&___material_0), value);
	}

	inline static int32_t get_offset_of_submeshIndex_1() { return static_cast<int32_t>(offsetof(Data_t434873072, ___submeshIndex_1)); }
	inline int32_t get_submeshIndex_1() const { return ___submeshIndex_1; }
	inline int32_t* get_address_of_submeshIndex_1() { return &___submeshIndex_1; }
	inline void set_submeshIndex_1(int32_t value)
	{
		___submeshIndex_1 = value;
	}

	inline static int32_t get_offset_of_transparent_2() { return static_cast<int32_t>(offsetof(Data_t434873072, ___transparent_2)); }
	inline bool get_transparent_2() const { return ___transparent_2; }
	inline bool* get_address_of_transparent_2() { return &___transparent_2; }
	inline void set_transparent_2(bool value)
	{
		___transparent_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of HighlightingSystem.HighlighterRenderer/Data
struct Data_t434873072_marshaled_pinvoke
{
	Material_t340375123 * ___material_0;
	int32_t ___submeshIndex_1;
	int32_t ___transparent_2;
};
// Native definition for COM marshalling of HighlightingSystem.HighlighterRenderer/Data
struct Data_t434873072_marshaled_com
{
	Material_t340375123 * ___material_0;
	int32_t ___submeshIndex_1;
	int32_t ___transparent_2;
};
#endif // DATA_T434873072_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef GRADIENTALPHAKEY_T2624742626_H
#define GRADIENTALPHAKEY_T2624742626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GradientAlphaKey
struct  GradientAlphaKey_t2624742626 
{
public:
	// System.Single UnityEngine.GradientAlphaKey::alpha
	float ___alpha_0;
	// System.Single UnityEngine.GradientAlphaKey::time
	float ___time_1;

public:
	inline static int32_t get_offset_of_alpha_0() { return static_cast<int32_t>(offsetof(GradientAlphaKey_t2624742626, ___alpha_0)); }
	inline float get_alpha_0() const { return ___alpha_0; }
	inline float* get_address_of_alpha_0() { return &___alpha_0; }
	inline void set_alpha_0(float value)
	{
		___alpha_0 = value;
	}

	inline static int32_t get_offset_of_time_1() { return static_cast<int32_t>(offsetof(GradientAlphaKey_t2624742626, ___time_1)); }
	inline float get_time_1() const { return ___time_1; }
	inline float* get_address_of_time_1() { return &___time_1; }
	inline void set_time_1(float value)
	{
		___time_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRADIENTALPHAKEY_T2624742626_H
#ifndef MATRIX4X4_T1817901843_H
#define MATRIX4X4_T1817901843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t1817901843 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t1817901843_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t1817901843  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t1817901843  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t1817901843  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t1817901843 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t1817901843  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t1817901843  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t1817901843 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t1817901843  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T1817901843_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef WAITFORENDOFFRAME_T1314943911_H
#define WAITFORENDOFFRAME_T1314943911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForEndOfFrame
struct  WaitForEndOfFrame_t1314943911  : public YieldInstruction_t403091072
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORENDOFFRAME_T1314943911_H
#ifndef ANTIALIASING_T468925605_H
#define ANTIALIASING_T468925605_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightingSystem.AntiAliasing
struct  AntiAliasing_t468925605 
{
public:
	// System.Int32 HighlightingSystem.AntiAliasing::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AntiAliasing_t468925605, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANTIALIASING_T468925605_H
#ifndef BLURDIRECTIONS_T2745566494_H
#define BLURDIRECTIONS_T2745566494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightingSystem.BlurDirections
struct  BlurDirections_t2745566494 
{
public:
	// System.Int32 HighlightingSystem.BlurDirections::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BlurDirections_t2745566494, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLURDIRECTIONS_T2745566494_H
#ifndef EASING_T764565345_H
#define EASING_T764565345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightingSystem.Easing
struct  Easing_t764565345 
{
public:
	// System.Int32 HighlightingSystem.Easing::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Easing_t764565345, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EASING_T764565345_H
#ifndef HIGHLIGHTERMODE_T3568210682_H
#define HIGHLIGHTERMODE_T3568210682_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightingSystem.HighlighterMode
struct  HighlighterMode_t3568210682 
{
public:
	// System.Int32 HighlightingSystem.HighlighterMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HighlighterMode_t3568210682, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIGHLIGHTERMODE_T3568210682_H
#ifndef LOOPMODE_T2302932562_H
#define LOOPMODE_T2302932562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightingSystem.LoopMode
struct  LoopMode_t2302932562 
{
public:
	// System.Int32 HighlightingSystem.LoopMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoopMode_t2302932562, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOOPMODE_T2302932562_H
#ifndef RENDERERFILTERMODE_T2967502092_H
#define RENDERERFILTERMODE_T2967502092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightingSystem.RendererFilterMode
struct  RendererFilterMode_t2967502092 
{
public:
	// System.Int32 HighlightingSystem.RendererFilterMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RendererFilterMode_t2967502092, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERERFILTERMODE_T2967502092_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef COLORSPACE_T3453996949_H
#define COLORSPACE_T3453996949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ColorSpace
struct  ColorSpace_t3453996949 
{
public:
	// System.Int32 UnityEngine.ColorSpace::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ColorSpace_t3453996949, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORSPACE_T3453996949_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef CUBEMAPFACE_T1358225318_H
#define CUBEMAPFACE_T1358225318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CubemapFace
struct  CubemapFace_t1358225318 
{
public:
	// System.Int32 UnityEngine.CubemapFace::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CubemapFace_t1358225318, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUBEMAPFACE_T1358225318_H
#ifndef DEPTHTEXTUREMODE_T4161834719_H
#define DEPTHTEXTUREMODE_T4161834719_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DepthTextureMode
struct  DepthTextureMode_t4161834719 
{
public:
	// System.Int32 UnityEngine.DepthTextureMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DepthTextureMode_t4161834719, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEPTHTEXTUREMODE_T4161834719_H
#ifndef FILTERMODE_T3761284007_H
#define FILTERMODE_T3761284007_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FilterMode
struct  FilterMode_t3761284007 
{
public:
	// System.Int32 UnityEngine.FilterMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FilterMode_t3761284007, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILTERMODE_T3761284007_H
#ifndef GRADIENT_T3067099924_H
#define GRADIENT_T3067099924_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gradient
struct  Gradient_t3067099924  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Gradient::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Gradient_t3067099924, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Gradient
struct Gradient_t3067099924_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Gradient
struct Gradient_t3067099924_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // GRADIENT_T3067099924_H
#ifndef GRADIENTCOLORKEY_T812552589_H
#define GRADIENTCOLORKEY_T812552589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GradientColorKey
struct  GradientColorKey_t812552589 
{
public:
	// UnityEngine.Color UnityEngine.GradientColorKey::color
	Color_t2555686324  ___color_0;
	// System.Single UnityEngine.GradientColorKey::time
	float ___time_1;

public:
	inline static int32_t get_offset_of_color_0() { return static_cast<int32_t>(offsetof(GradientColorKey_t812552589, ___color_0)); }
	inline Color_t2555686324  get_color_0() const { return ___color_0; }
	inline Color_t2555686324 * get_address_of_color_0() { return &___color_0; }
	inline void set_color_0(Color_t2555686324  value)
	{
		___color_0 = value;
	}

	inline static int32_t get_offset_of_time_1() { return static_cast<int32_t>(offsetof(GradientColorKey_t812552589, ___time_1)); }
	inline float get_time_1() const { return ___time_1; }
	inline float* get_address_of_time_1() { return &___time_1; }
	inline void set_time_1(float value)
	{
		___time_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRADIENTCOLORKEY_T812552589_H
#ifndef HIDEFLAGS_T4250555765_H
#define HIDEFLAGS_T4250555765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HideFlags
struct  HideFlags_t4250555765 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HideFlags_t4250555765, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIDEFLAGS_T4250555765_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef RENDERTEXTURECREATIONFLAGS_T557679221_H
#define RENDERTEXTURECREATIONFLAGS_T557679221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTextureCreationFlags
struct  RenderTextureCreationFlags_t557679221 
{
public:
	// System.Int32 UnityEngine.RenderTextureCreationFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderTextureCreationFlags_t557679221, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTURECREATIONFLAGS_T557679221_H
#ifndef RENDERTEXTUREFORMAT_T962350765_H
#define RENDERTEXTUREFORMAT_T962350765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTextureFormat
struct  RenderTextureFormat_t962350765 
{
public:
	// System.Int32 UnityEngine.RenderTextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderTextureFormat_t962350765, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTUREFORMAT_T962350765_H
#ifndef RENDERTEXTUREMEMORYLESS_T852891252_H
#define RENDERTEXTUREMEMORYLESS_T852891252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTextureMemoryless
struct  RenderTextureMemoryless_t852891252 
{
public:
	// System.Int32 UnityEngine.RenderTextureMemoryless::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderTextureMemoryless_t852891252, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTUREMEMORYLESS_T852891252_H
#ifndef BUILTINRENDERTEXTURETYPE_T2399837169_H
#define BUILTINRENDERTEXTURETYPE_T2399837169_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.BuiltinRenderTextureType
struct  BuiltinRenderTextureType_t2399837169 
{
public:
	// System.Int32 UnityEngine.Rendering.BuiltinRenderTextureType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BuiltinRenderTextureType_t2399837169, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUILTINRENDERTEXTURETYPE_T2399837169_H
#ifndef CAMERAEVENT_T2033959522_H
#define CAMERAEVENT_T2033959522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.CameraEvent
struct  CameraEvent_t2033959522 
{
public:
	// System.Int32 UnityEngine.Rendering.CameraEvent::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraEvent_t2033959522, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAEVENT_T2033959522_H
#ifndef COMMANDBUFFER_T2206337031_H
#define COMMANDBUFFER_T2206337031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.CommandBuffer
struct  CommandBuffer_t2206337031  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Rendering.CommandBuffer::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CommandBuffer_t2206337031, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMMANDBUFFER_T2206337031_H
#ifndef SHADOWSAMPLINGMODE_T838715745_H
#define SHADOWSAMPLINGMODE_T838715745_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.ShadowSamplingMode
struct  ShadowSamplingMode_t838715745 
{
public:
	// System.Int32 UnityEngine.Rendering.ShadowSamplingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ShadowSamplingMode_t838715745, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADOWSAMPLINGMODE_T838715745_H
#ifndef TEXTUREDIMENSION_T3933106086_H
#define TEXTUREDIMENSION_T3933106086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.TextureDimension
struct  TextureDimension_t3933106086 
{
public:
	// System.Int32 UnityEngine.Rendering.TextureDimension::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureDimension_t3933106086, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREDIMENSION_T3933106086_H
#ifndef RENDERINGPATH_T883966888_H
#define RENDERINGPATH_T883966888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderingPath
struct  RenderingPath_t883966888 
{
public:
	// System.Int32 UnityEngine.RenderingPath::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderingPath_t883966888, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERINGPATH_T883966888_H
#ifndef TEXTUREWRAPMODE_T584250749_H
#define TEXTUREWRAPMODE_T584250749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureWrapMode
struct  TextureWrapMode_t584250749 
{
public:
	// System.Int32 UnityEngine.TextureWrapMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureWrapMode_t584250749, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREWRAPMODE_T584250749_H
#ifndef VRTEXTUREUSAGE_T3142149582_H
#define VRTEXTUREUSAGE_T3142149582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.VRTextureUsage
struct  VRTextureUsage_t3142149582 
{
public:
	// System.Int32 UnityEngine.VRTextureUsage::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VRTextureUsage_t3142149582, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VRTEXTUREUSAGE_T3142149582_H
#ifndef HIGHLIGHTINGPRESET_T635619791_H
#define HIGHLIGHTINGPRESET_T635619791_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightingSystem.HighlightingPreset
struct  HighlightingPreset_t635619791 
{
public:
	// System.String HighlightingSystem.HighlightingPreset::_name
	String_t* ____name_0;
	// System.Single HighlightingSystem.HighlightingPreset::_fillAlpha
	float ____fillAlpha_1;
	// System.Int32 HighlightingSystem.HighlightingPreset::_downsampleFactor
	int32_t ____downsampleFactor_2;
	// System.Int32 HighlightingSystem.HighlightingPreset::_iterations
	int32_t ____iterations_3;
	// System.Single HighlightingSystem.HighlightingPreset::_blurMinSpread
	float ____blurMinSpread_4;
	// System.Single HighlightingSystem.HighlightingPreset::_blurSpread
	float ____blurSpread_5;
	// System.Single HighlightingSystem.HighlightingPreset::_blurIntensity
	float ____blurIntensity_6;
	// HighlightingSystem.BlurDirections HighlightingSystem.HighlightingPreset::_blurDirections
	int32_t ____blurDirections_7;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(HighlightingPreset_t635619791, ____name_0)); }
	inline String_t* get__name_0() const { return ____name_0; }
	inline String_t** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(String_t* value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier((&____name_0), value);
	}

	inline static int32_t get_offset_of__fillAlpha_1() { return static_cast<int32_t>(offsetof(HighlightingPreset_t635619791, ____fillAlpha_1)); }
	inline float get__fillAlpha_1() const { return ____fillAlpha_1; }
	inline float* get_address_of__fillAlpha_1() { return &____fillAlpha_1; }
	inline void set__fillAlpha_1(float value)
	{
		____fillAlpha_1 = value;
	}

	inline static int32_t get_offset_of__downsampleFactor_2() { return static_cast<int32_t>(offsetof(HighlightingPreset_t635619791, ____downsampleFactor_2)); }
	inline int32_t get__downsampleFactor_2() const { return ____downsampleFactor_2; }
	inline int32_t* get_address_of__downsampleFactor_2() { return &____downsampleFactor_2; }
	inline void set__downsampleFactor_2(int32_t value)
	{
		____downsampleFactor_2 = value;
	}

	inline static int32_t get_offset_of__iterations_3() { return static_cast<int32_t>(offsetof(HighlightingPreset_t635619791, ____iterations_3)); }
	inline int32_t get__iterations_3() const { return ____iterations_3; }
	inline int32_t* get_address_of__iterations_3() { return &____iterations_3; }
	inline void set__iterations_3(int32_t value)
	{
		____iterations_3 = value;
	}

	inline static int32_t get_offset_of__blurMinSpread_4() { return static_cast<int32_t>(offsetof(HighlightingPreset_t635619791, ____blurMinSpread_4)); }
	inline float get__blurMinSpread_4() const { return ____blurMinSpread_4; }
	inline float* get_address_of__blurMinSpread_4() { return &____blurMinSpread_4; }
	inline void set__blurMinSpread_4(float value)
	{
		____blurMinSpread_4 = value;
	}

	inline static int32_t get_offset_of__blurSpread_5() { return static_cast<int32_t>(offsetof(HighlightingPreset_t635619791, ____blurSpread_5)); }
	inline float get__blurSpread_5() const { return ____blurSpread_5; }
	inline float* get_address_of__blurSpread_5() { return &____blurSpread_5; }
	inline void set__blurSpread_5(float value)
	{
		____blurSpread_5 = value;
	}

	inline static int32_t get_offset_of__blurIntensity_6() { return static_cast<int32_t>(offsetof(HighlightingPreset_t635619791, ____blurIntensity_6)); }
	inline float get__blurIntensity_6() const { return ____blurIntensity_6; }
	inline float* get_address_of__blurIntensity_6() { return &____blurIntensity_6; }
	inline void set__blurIntensity_6(float value)
	{
		____blurIntensity_6 = value;
	}

	inline static int32_t get_offset_of__blurDirections_7() { return static_cast<int32_t>(offsetof(HighlightingPreset_t635619791, ____blurDirections_7)); }
	inline int32_t get__blurDirections_7() const { return ____blurDirections_7; }
	inline int32_t* get_address_of__blurDirections_7() { return &____blurDirections_7; }
	inline void set__blurDirections_7(int32_t value)
	{
		____blurDirections_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of HighlightingSystem.HighlightingPreset
struct HighlightingPreset_t635619791_marshaled_pinvoke
{
	char* ____name_0;
	float ____fillAlpha_1;
	int32_t ____downsampleFactor_2;
	int32_t ____iterations_3;
	float ____blurMinSpread_4;
	float ____blurSpread_5;
	float ____blurIntensity_6;
	int32_t ____blurDirections_7;
};
// Native definition for COM marshalling of HighlightingSystem.HighlightingPreset
struct HighlightingPreset_t635619791_marshaled_com
{
	Il2CppChar* ____name_0;
	float ____fillAlpha_1;
	int32_t ____downsampleFactor_2;
	int32_t ____iterations_3;
	float ____blurMinSpread_4;
	float ____blurSpread_5;
	float ____blurIntensity_6;
	int32_t ____blurDirections_7;
};
#endif // HIGHLIGHTINGPRESET_T635619791_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef RENDERTEXTUREDESCRIPTOR_T1974534975_H
#define RENDERTEXTUREDESCRIPTOR_T1974534975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTextureDescriptor
struct  RenderTextureDescriptor_t1974534975 
{
public:
	// System.Int32 UnityEngine.RenderTextureDescriptor::<width>k__BackingField
	int32_t ___U3CwidthU3Ek__BackingField_0;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<height>k__BackingField
	int32_t ___U3CheightU3Ek__BackingField_1;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<msaaSamples>k__BackingField
	int32_t ___U3CmsaaSamplesU3Ek__BackingField_2;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<volumeDepth>k__BackingField
	int32_t ___U3CvolumeDepthU3Ek__BackingField_3;
	// UnityEngine.RenderTextureFormat UnityEngine.RenderTextureDescriptor::<colorFormat>k__BackingField
	int32_t ___U3CcolorFormatU3Ek__BackingField_4;
	// System.Int32 UnityEngine.RenderTextureDescriptor::_depthBufferBits
	int32_t ____depthBufferBits_5;
	// UnityEngine.Rendering.TextureDimension UnityEngine.RenderTextureDescriptor::<dimension>k__BackingField
	int32_t ___U3CdimensionU3Ek__BackingField_7;
	// UnityEngine.Rendering.ShadowSamplingMode UnityEngine.RenderTextureDescriptor::<shadowSamplingMode>k__BackingField
	int32_t ___U3CshadowSamplingModeU3Ek__BackingField_8;
	// UnityEngine.VRTextureUsage UnityEngine.RenderTextureDescriptor::<vrUsage>k__BackingField
	int32_t ___U3CvrUsageU3Ek__BackingField_9;
	// UnityEngine.RenderTextureCreationFlags UnityEngine.RenderTextureDescriptor::_flags
	int32_t ____flags_10;
	// UnityEngine.RenderTextureMemoryless UnityEngine.RenderTextureDescriptor::<memoryless>k__BackingField
	int32_t ___U3CmemorylessU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CwidthU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t1974534975, ___U3CwidthU3Ek__BackingField_0)); }
	inline int32_t get_U3CwidthU3Ek__BackingField_0() const { return ___U3CwidthU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CwidthU3Ek__BackingField_0() { return &___U3CwidthU3Ek__BackingField_0; }
	inline void set_U3CwidthU3Ek__BackingField_0(int32_t value)
	{
		___U3CwidthU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CheightU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t1974534975, ___U3CheightU3Ek__BackingField_1)); }
	inline int32_t get_U3CheightU3Ek__BackingField_1() const { return ___U3CheightU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CheightU3Ek__BackingField_1() { return &___U3CheightU3Ek__BackingField_1; }
	inline void set_U3CheightU3Ek__BackingField_1(int32_t value)
	{
		___U3CheightU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CmsaaSamplesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t1974534975, ___U3CmsaaSamplesU3Ek__BackingField_2)); }
	inline int32_t get_U3CmsaaSamplesU3Ek__BackingField_2() const { return ___U3CmsaaSamplesU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CmsaaSamplesU3Ek__BackingField_2() { return &___U3CmsaaSamplesU3Ek__BackingField_2; }
	inline void set_U3CmsaaSamplesU3Ek__BackingField_2(int32_t value)
	{
		___U3CmsaaSamplesU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CvolumeDepthU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t1974534975, ___U3CvolumeDepthU3Ek__BackingField_3)); }
	inline int32_t get_U3CvolumeDepthU3Ek__BackingField_3() const { return ___U3CvolumeDepthU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CvolumeDepthU3Ek__BackingField_3() { return &___U3CvolumeDepthU3Ek__BackingField_3; }
	inline void set_U3CvolumeDepthU3Ek__BackingField_3(int32_t value)
	{
		___U3CvolumeDepthU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CcolorFormatU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t1974534975, ___U3CcolorFormatU3Ek__BackingField_4)); }
	inline int32_t get_U3CcolorFormatU3Ek__BackingField_4() const { return ___U3CcolorFormatU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CcolorFormatU3Ek__BackingField_4() { return &___U3CcolorFormatU3Ek__BackingField_4; }
	inline void set_U3CcolorFormatU3Ek__BackingField_4(int32_t value)
	{
		___U3CcolorFormatU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of__depthBufferBits_5() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t1974534975, ____depthBufferBits_5)); }
	inline int32_t get__depthBufferBits_5() const { return ____depthBufferBits_5; }
	inline int32_t* get_address_of__depthBufferBits_5() { return &____depthBufferBits_5; }
	inline void set__depthBufferBits_5(int32_t value)
	{
		____depthBufferBits_5 = value;
	}

	inline static int32_t get_offset_of_U3CdimensionU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t1974534975, ___U3CdimensionU3Ek__BackingField_7)); }
	inline int32_t get_U3CdimensionU3Ek__BackingField_7() const { return ___U3CdimensionU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CdimensionU3Ek__BackingField_7() { return &___U3CdimensionU3Ek__BackingField_7; }
	inline void set_U3CdimensionU3Ek__BackingField_7(int32_t value)
	{
		___U3CdimensionU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CshadowSamplingModeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t1974534975, ___U3CshadowSamplingModeU3Ek__BackingField_8)); }
	inline int32_t get_U3CshadowSamplingModeU3Ek__BackingField_8() const { return ___U3CshadowSamplingModeU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CshadowSamplingModeU3Ek__BackingField_8() { return &___U3CshadowSamplingModeU3Ek__BackingField_8; }
	inline void set_U3CshadowSamplingModeU3Ek__BackingField_8(int32_t value)
	{
		___U3CshadowSamplingModeU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CvrUsageU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t1974534975, ___U3CvrUsageU3Ek__BackingField_9)); }
	inline int32_t get_U3CvrUsageU3Ek__BackingField_9() const { return ___U3CvrUsageU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CvrUsageU3Ek__BackingField_9() { return &___U3CvrUsageU3Ek__BackingField_9; }
	inline void set_U3CvrUsageU3Ek__BackingField_9(int32_t value)
	{
		___U3CvrUsageU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of__flags_10() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t1974534975, ____flags_10)); }
	inline int32_t get__flags_10() const { return ____flags_10; }
	inline int32_t* get_address_of__flags_10() { return &____flags_10; }
	inline void set__flags_10(int32_t value)
	{
		____flags_10 = value;
	}

	inline static int32_t get_offset_of_U3CmemorylessU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t1974534975, ___U3CmemorylessU3Ek__BackingField_11)); }
	inline int32_t get_U3CmemorylessU3Ek__BackingField_11() const { return ___U3CmemorylessU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CmemorylessU3Ek__BackingField_11() { return &___U3CmemorylessU3Ek__BackingField_11; }
	inline void set_U3CmemorylessU3Ek__BackingField_11(int32_t value)
	{
		___U3CmemorylessU3Ek__BackingField_11 = value;
	}
};

struct RenderTextureDescriptor_t1974534975_StaticFields
{
public:
	// System.Int32[] UnityEngine.RenderTextureDescriptor::depthFormatBits
	Int32U5BU5D_t385246372* ___depthFormatBits_6;

public:
	inline static int32_t get_offset_of_depthFormatBits_6() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t1974534975_StaticFields, ___depthFormatBits_6)); }
	inline Int32U5BU5D_t385246372* get_depthFormatBits_6() const { return ___depthFormatBits_6; }
	inline Int32U5BU5D_t385246372** get_address_of_depthFormatBits_6() { return &___depthFormatBits_6; }
	inline void set_depthFormatBits_6(Int32U5BU5D_t385246372* value)
	{
		___depthFormatBits_6 = value;
		Il2CppCodeGenWriteBarrier((&___depthFormatBits_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTUREDESCRIPTOR_T1974534975_H
#ifndef RENDERTARGETIDENTIFIER_T2079184500_H
#define RENDERTARGETIDENTIFIER_T2079184500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.RenderTargetIdentifier
struct  RenderTargetIdentifier_t2079184500 
{
public:
	// UnityEngine.Rendering.BuiltinRenderTextureType UnityEngine.Rendering.RenderTargetIdentifier::m_Type
	int32_t ___m_Type_0;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_NameID
	int32_t ___m_NameID_1;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_InstanceID
	int32_t ___m_InstanceID_2;
	// System.IntPtr UnityEngine.Rendering.RenderTargetIdentifier::m_BufferPointer
	intptr_t ___m_BufferPointer_3;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_MipLevel
	int32_t ___m_MipLevel_4;
	// UnityEngine.CubemapFace UnityEngine.Rendering.RenderTargetIdentifier::m_CubeFace
	int32_t ___m_CubeFace_5;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_DepthSlice
	int32_t ___m_DepthSlice_6;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_NameID_1() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_NameID_1)); }
	inline int32_t get_m_NameID_1() const { return ___m_NameID_1; }
	inline int32_t* get_address_of_m_NameID_1() { return &___m_NameID_1; }
	inline void set_m_NameID_1(int32_t value)
	{
		___m_NameID_1 = value;
	}

	inline static int32_t get_offset_of_m_InstanceID_2() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_InstanceID_2)); }
	inline int32_t get_m_InstanceID_2() const { return ___m_InstanceID_2; }
	inline int32_t* get_address_of_m_InstanceID_2() { return &___m_InstanceID_2; }
	inline void set_m_InstanceID_2(int32_t value)
	{
		___m_InstanceID_2 = value;
	}

	inline static int32_t get_offset_of_m_BufferPointer_3() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_BufferPointer_3)); }
	inline intptr_t get_m_BufferPointer_3() const { return ___m_BufferPointer_3; }
	inline intptr_t* get_address_of_m_BufferPointer_3() { return &___m_BufferPointer_3; }
	inline void set_m_BufferPointer_3(intptr_t value)
	{
		___m_BufferPointer_3 = value;
	}

	inline static int32_t get_offset_of_m_MipLevel_4() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_MipLevel_4)); }
	inline int32_t get_m_MipLevel_4() const { return ___m_MipLevel_4; }
	inline int32_t* get_address_of_m_MipLevel_4() { return &___m_MipLevel_4; }
	inline void set_m_MipLevel_4(int32_t value)
	{
		___m_MipLevel_4 = value;
	}

	inline static int32_t get_offset_of_m_CubeFace_5() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_CubeFace_5)); }
	inline int32_t get_m_CubeFace_5() const { return ___m_CubeFace_5; }
	inline int32_t* get_address_of_m_CubeFace_5() { return &___m_CubeFace_5; }
	inline void set_m_CubeFace_5(int32_t value)
	{
		___m_CubeFace_5 = value;
	}

	inline static int32_t get_offset_of_m_DepthSlice_6() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_DepthSlice_6)); }
	inline int32_t get_m_DepthSlice_6() const { return ___m_DepthSlice_6; }
	inline int32_t* get_address_of_m_DepthSlice_6() { return &___m_DepthSlice_6; }
	inline void set_m_DepthSlice_6(int32_t value)
	{
		___m_DepthSlice_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTARGETIDENTIFIER_T2079184500_H
#ifndef SHADER_T4151988712_H
#define SHADER_T4151988712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Shader
struct  Shader_t4151988712  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADER_T4151988712_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef ONENDOFFRAME_T2764173602_H
#define ONENDOFFRAME_T2764173602_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightingSystem.EndOfFrame/OnEndOfFrame
struct  OnEndOfFrame_t2764173602  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONENDOFFRAME_T2764173602_H
#ifndef RENDERERFILTER_T73075700_H
#define RENDERERFILTER_T73075700_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightingSystem.HighlighterCore/RendererFilter
struct  RendererFilter_t73075700  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERERFILTER_T73075700_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef RENDERTEXTURE_T2108887433_H
#define RENDERTEXTURE_T2108887433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTexture
struct  RenderTexture_t2108887433  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTURE_T2108887433_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t190067161 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t190067161 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_4), value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t190067161 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t190067161 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_5), value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t190067161 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t190067161 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef MESHRENDERER_T587009260_H
#define MESHRENDERER_T587009260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshRenderer
struct  MeshRenderer_t587009260  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHRENDERER_T587009260_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef PARTICLESYSTEMRENDERER_T2065813411_H
#define PARTICLESYSTEMRENDERER_T2065813411_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystemRenderer
struct  ParticleSystemRenderer_t2065813411  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLESYSTEMRENDERER_T2065813411_H
#ifndef SKINNEDMESHRENDERER_T245602842_H
#define SKINNEDMESHRENDERER_T245602842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SkinnedMeshRenderer
struct  SkinnedMeshRenderer_t245602842  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SKINNEDMESHRENDERER_T245602842_H
#ifndef SPRITERENDERER_T3235626157_H
#define SPRITERENDERER_T3235626157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t3235626157  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITERENDERER_T3235626157_H
#ifndef ENDOFFRAME_T2825832094_H
#define ENDOFFRAME_T2825832094_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightingSystem.EndOfFrame
struct  EndOfFrame_t2825832094  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.WaitForEndOfFrame HighlightingSystem.EndOfFrame::waitForEndOfFrame
	WaitForEndOfFrame_t1314943911 * ___waitForEndOfFrame_5;
	// UnityEngine.Coroutine HighlightingSystem.EndOfFrame::coroutine
	Coroutine_t3829159415 * ___coroutine_6;
	// System.Collections.Generic.List`1<HighlightingSystem.EndOfFrame/OnEndOfFrame> HighlightingSystem.EndOfFrame::listeners
	List_1_t4236248344 * ___listeners_7;

public:
	inline static int32_t get_offset_of_waitForEndOfFrame_5() { return static_cast<int32_t>(offsetof(EndOfFrame_t2825832094, ___waitForEndOfFrame_5)); }
	inline WaitForEndOfFrame_t1314943911 * get_waitForEndOfFrame_5() const { return ___waitForEndOfFrame_5; }
	inline WaitForEndOfFrame_t1314943911 ** get_address_of_waitForEndOfFrame_5() { return &___waitForEndOfFrame_5; }
	inline void set_waitForEndOfFrame_5(WaitForEndOfFrame_t1314943911 * value)
	{
		___waitForEndOfFrame_5 = value;
		Il2CppCodeGenWriteBarrier((&___waitForEndOfFrame_5), value);
	}

	inline static int32_t get_offset_of_coroutine_6() { return static_cast<int32_t>(offsetof(EndOfFrame_t2825832094, ___coroutine_6)); }
	inline Coroutine_t3829159415 * get_coroutine_6() const { return ___coroutine_6; }
	inline Coroutine_t3829159415 ** get_address_of_coroutine_6() { return &___coroutine_6; }
	inline void set_coroutine_6(Coroutine_t3829159415 * value)
	{
		___coroutine_6 = value;
		Il2CppCodeGenWriteBarrier((&___coroutine_6), value);
	}

	inline static int32_t get_offset_of_listeners_7() { return static_cast<int32_t>(offsetof(EndOfFrame_t2825832094, ___listeners_7)); }
	inline List_1_t4236248344 * get_listeners_7() const { return ___listeners_7; }
	inline List_1_t4236248344 ** get_address_of_listeners_7() { return &___listeners_7; }
	inline void set_listeners_7(List_1_t4236248344 * value)
	{
		___listeners_7 = value;
		Il2CppCodeGenWriteBarrier((&___listeners_7), value);
	}
};

struct EndOfFrame_t2825832094_StaticFields
{
public:
	// HighlightingSystem.EndOfFrame HighlightingSystem.EndOfFrame::_singleton
	EndOfFrame_t2825832094 * ____singleton_4;

public:
	inline static int32_t get_offset_of__singleton_4() { return static_cast<int32_t>(offsetof(EndOfFrame_t2825832094_StaticFields, ____singleton_4)); }
	inline EndOfFrame_t2825832094 * get__singleton_4() const { return ____singleton_4; }
	inline EndOfFrame_t2825832094 ** get_address_of__singleton_4() { return &____singleton_4; }
	inline void set__singleton_4(EndOfFrame_t2825832094 * value)
	{
		____singleton_4 = value;
		Il2CppCodeGenWriteBarrier((&____singleton_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENDOFFRAME_T2825832094_H
#ifndef HIGHLIGHTERBLOCKER_T3431127703_H
#define HIGHLIGHTERBLOCKER_T3431127703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightingSystem.HighlighterBlocker
struct  HighlighterBlocker_t3431127703  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIGHLIGHTERBLOCKER_T3431127703_H
#ifndef HIGHLIGHTERCORE_T3117871998_H
#define HIGHLIGHTERCORE_T3117871998_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightingSystem.HighlighterCore
struct  HighlighterCore_t3117871998  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Color HighlightingSystem.HighlighterCore::occluderColor
	Color_t2555686324  ___occluderColor_5;
	// HighlightingSystem.HighlighterMode HighlightingSystem.HighlighterCore::mode
	int32_t ___mode_14;
	// System.Boolean HighlightingSystem.HighlighterCore::forceRender
	bool ___forceRender_15;
	// UnityEngine.Color HighlightingSystem.HighlighterCore::color
	Color_t2555686324  ___color_16;
	// UnityEngine.Transform HighlightingSystem.HighlighterCore::tr
	Transform_t3600365921 * ___tr_17;
	// System.Collections.Generic.List`1<HighlightingSystem.HighlighterRenderer> HighlightingSystem.HighlighterCore::highlightableRenderers
	List_1_t3248237193 * ___highlightableRenderers_18;
	// System.Boolean HighlightingSystem.HighlighterCore::isDirty
	bool ___isDirty_19;
	// System.Boolean HighlightingSystem.HighlighterCore::cachedOverlay
	bool ___cachedOverlay_20;
	// UnityEngine.Color HighlightingSystem.HighlighterCore::cachedColor
	Color_t2555686324  ___cachedColor_21;
	// UnityEngine.Material HighlightingSystem.HighlighterCore::_opaqueMaterial
	Material_t340375123 * ____opaqueMaterial_24;
	// HighlightingSystem.HighlighterCore/RendererFilter HighlightingSystem.HighlighterCore::_rendererFilter
	RendererFilter_t73075700 * ____rendererFilter_26;

public:
	inline static int32_t get_offset_of_occluderColor_5() { return static_cast<int32_t>(offsetof(HighlighterCore_t3117871998, ___occluderColor_5)); }
	inline Color_t2555686324  get_occluderColor_5() const { return ___occluderColor_5; }
	inline Color_t2555686324 * get_address_of_occluderColor_5() { return &___occluderColor_5; }
	inline void set_occluderColor_5(Color_t2555686324  value)
	{
		___occluderColor_5 = value;
	}

	inline static int32_t get_offset_of_mode_14() { return static_cast<int32_t>(offsetof(HighlighterCore_t3117871998, ___mode_14)); }
	inline int32_t get_mode_14() const { return ___mode_14; }
	inline int32_t* get_address_of_mode_14() { return &___mode_14; }
	inline void set_mode_14(int32_t value)
	{
		___mode_14 = value;
	}

	inline static int32_t get_offset_of_forceRender_15() { return static_cast<int32_t>(offsetof(HighlighterCore_t3117871998, ___forceRender_15)); }
	inline bool get_forceRender_15() const { return ___forceRender_15; }
	inline bool* get_address_of_forceRender_15() { return &___forceRender_15; }
	inline void set_forceRender_15(bool value)
	{
		___forceRender_15 = value;
	}

	inline static int32_t get_offset_of_color_16() { return static_cast<int32_t>(offsetof(HighlighterCore_t3117871998, ___color_16)); }
	inline Color_t2555686324  get_color_16() const { return ___color_16; }
	inline Color_t2555686324 * get_address_of_color_16() { return &___color_16; }
	inline void set_color_16(Color_t2555686324  value)
	{
		___color_16 = value;
	}

	inline static int32_t get_offset_of_tr_17() { return static_cast<int32_t>(offsetof(HighlighterCore_t3117871998, ___tr_17)); }
	inline Transform_t3600365921 * get_tr_17() const { return ___tr_17; }
	inline Transform_t3600365921 ** get_address_of_tr_17() { return &___tr_17; }
	inline void set_tr_17(Transform_t3600365921 * value)
	{
		___tr_17 = value;
		Il2CppCodeGenWriteBarrier((&___tr_17), value);
	}

	inline static int32_t get_offset_of_highlightableRenderers_18() { return static_cast<int32_t>(offsetof(HighlighterCore_t3117871998, ___highlightableRenderers_18)); }
	inline List_1_t3248237193 * get_highlightableRenderers_18() const { return ___highlightableRenderers_18; }
	inline List_1_t3248237193 ** get_address_of_highlightableRenderers_18() { return &___highlightableRenderers_18; }
	inline void set_highlightableRenderers_18(List_1_t3248237193 * value)
	{
		___highlightableRenderers_18 = value;
		Il2CppCodeGenWriteBarrier((&___highlightableRenderers_18), value);
	}

	inline static int32_t get_offset_of_isDirty_19() { return static_cast<int32_t>(offsetof(HighlighterCore_t3117871998, ___isDirty_19)); }
	inline bool get_isDirty_19() const { return ___isDirty_19; }
	inline bool* get_address_of_isDirty_19() { return &___isDirty_19; }
	inline void set_isDirty_19(bool value)
	{
		___isDirty_19 = value;
	}

	inline static int32_t get_offset_of_cachedOverlay_20() { return static_cast<int32_t>(offsetof(HighlighterCore_t3117871998, ___cachedOverlay_20)); }
	inline bool get_cachedOverlay_20() const { return ___cachedOverlay_20; }
	inline bool* get_address_of_cachedOverlay_20() { return &___cachedOverlay_20; }
	inline void set_cachedOverlay_20(bool value)
	{
		___cachedOverlay_20 = value;
	}

	inline static int32_t get_offset_of_cachedColor_21() { return static_cast<int32_t>(offsetof(HighlighterCore_t3117871998, ___cachedColor_21)); }
	inline Color_t2555686324  get_cachedColor_21() const { return ___cachedColor_21; }
	inline Color_t2555686324 * get_address_of_cachedColor_21() { return &___cachedColor_21; }
	inline void set_cachedColor_21(Color_t2555686324  value)
	{
		___cachedColor_21 = value;
	}

	inline static int32_t get_offset_of__opaqueMaterial_24() { return static_cast<int32_t>(offsetof(HighlighterCore_t3117871998, ____opaqueMaterial_24)); }
	inline Material_t340375123 * get__opaqueMaterial_24() const { return ____opaqueMaterial_24; }
	inline Material_t340375123 ** get_address_of__opaqueMaterial_24() { return &____opaqueMaterial_24; }
	inline void set__opaqueMaterial_24(Material_t340375123 * value)
	{
		____opaqueMaterial_24 = value;
		Il2CppCodeGenWriteBarrier((&____opaqueMaterial_24), value);
	}

	inline static int32_t get_offset_of__rendererFilter_26() { return static_cast<int32_t>(offsetof(HighlighterCore_t3117871998, ____rendererFilter_26)); }
	inline RendererFilter_t73075700 * get__rendererFilter_26() const { return ____rendererFilter_26; }
	inline RendererFilter_t73075700 ** get_address_of__rendererFilter_26() { return &____rendererFilter_26; }
	inline void set__rendererFilter_26(RendererFilter_t73075700 * value)
	{
		____rendererFilter_26 = value;
		Il2CppCodeGenWriteBarrier((&____rendererFilter_26), value);
	}
};

struct HighlighterCore_t3117871998_StaticFields
{
public:
	// HighlightingSystem.HighlighterMode[] HighlightingSystem.HighlighterCore::renderingOrder
	HighlighterModeU5BU5D_t1249767391* ___renderingOrder_6;
	// System.Collections.Generic.List`1<UnityEngine.Renderer> HighlightingSystem.HighlighterCore::sRenderers
	List_1_t4099101773 * ___sRenderers_8;
	// System.Collections.Generic.Stack`1<HighlightingSystem.HighlighterCore/RendererData> HighlightingSystem.HighlighterCore::sRendererDataPool
	Stack_1_t3593278908 * ___sRendererDataPool_9;
	// System.Collections.Generic.List`1<HighlightingSystem.HighlighterCore/RendererData> HighlightingSystem.HighlighterCore::sRendererData
	List_1_t4221964195 * ___sRendererData_10;
	// System.Collections.Generic.List`1<System.Int32> HighlightingSystem.HighlighterCore::sSubmeshIndices
	List_1_t128053199 * ___sSubmeshIndices_11;
	// System.Collections.Generic.List`1<HighlightingSystem.HighlighterCore> HighlightingSystem.HighlighterCore::sHighlighters
	List_1_t294979444 * ___sHighlighters_12;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<HighlightingSystem.HighlighterCore> HighlightingSystem.HighlighterCore::sHighlightersReadonly
	ReadOnlyCollection_1_t35480989 * ___sHighlightersReadonly_13;
	// UnityEngine.Shader HighlightingSystem.HighlighterCore::_opaqueShader
	Shader_t4151988712 * ____opaqueShader_22;
	// UnityEngine.Shader HighlightingSystem.HighlighterCore::_transparentShader
	Shader_t4151988712 * ____transparentShader_23;
	// HighlightingSystem.HighlighterCore/RendererFilter HighlightingSystem.HighlighterCore::_globalRendererFilter
	RendererFilter_t73075700 * ____globalRendererFilter_25;
	// HighlightingSystem.HighlighterCore/RendererFilter HighlightingSystem.HighlighterCore::<>f__mg$cache0
	RendererFilter_t73075700 * ___U3CU3Ef__mgU24cache0_27;

public:
	inline static int32_t get_offset_of_renderingOrder_6() { return static_cast<int32_t>(offsetof(HighlighterCore_t3117871998_StaticFields, ___renderingOrder_6)); }
	inline HighlighterModeU5BU5D_t1249767391* get_renderingOrder_6() const { return ___renderingOrder_6; }
	inline HighlighterModeU5BU5D_t1249767391** get_address_of_renderingOrder_6() { return &___renderingOrder_6; }
	inline void set_renderingOrder_6(HighlighterModeU5BU5D_t1249767391* value)
	{
		___renderingOrder_6 = value;
		Il2CppCodeGenWriteBarrier((&___renderingOrder_6), value);
	}

	inline static int32_t get_offset_of_sRenderers_8() { return static_cast<int32_t>(offsetof(HighlighterCore_t3117871998_StaticFields, ___sRenderers_8)); }
	inline List_1_t4099101773 * get_sRenderers_8() const { return ___sRenderers_8; }
	inline List_1_t4099101773 ** get_address_of_sRenderers_8() { return &___sRenderers_8; }
	inline void set_sRenderers_8(List_1_t4099101773 * value)
	{
		___sRenderers_8 = value;
		Il2CppCodeGenWriteBarrier((&___sRenderers_8), value);
	}

	inline static int32_t get_offset_of_sRendererDataPool_9() { return static_cast<int32_t>(offsetof(HighlighterCore_t3117871998_StaticFields, ___sRendererDataPool_9)); }
	inline Stack_1_t3593278908 * get_sRendererDataPool_9() const { return ___sRendererDataPool_9; }
	inline Stack_1_t3593278908 ** get_address_of_sRendererDataPool_9() { return &___sRendererDataPool_9; }
	inline void set_sRendererDataPool_9(Stack_1_t3593278908 * value)
	{
		___sRendererDataPool_9 = value;
		Il2CppCodeGenWriteBarrier((&___sRendererDataPool_9), value);
	}

	inline static int32_t get_offset_of_sRendererData_10() { return static_cast<int32_t>(offsetof(HighlighterCore_t3117871998_StaticFields, ___sRendererData_10)); }
	inline List_1_t4221964195 * get_sRendererData_10() const { return ___sRendererData_10; }
	inline List_1_t4221964195 ** get_address_of_sRendererData_10() { return &___sRendererData_10; }
	inline void set_sRendererData_10(List_1_t4221964195 * value)
	{
		___sRendererData_10 = value;
		Il2CppCodeGenWriteBarrier((&___sRendererData_10), value);
	}

	inline static int32_t get_offset_of_sSubmeshIndices_11() { return static_cast<int32_t>(offsetof(HighlighterCore_t3117871998_StaticFields, ___sSubmeshIndices_11)); }
	inline List_1_t128053199 * get_sSubmeshIndices_11() const { return ___sSubmeshIndices_11; }
	inline List_1_t128053199 ** get_address_of_sSubmeshIndices_11() { return &___sSubmeshIndices_11; }
	inline void set_sSubmeshIndices_11(List_1_t128053199 * value)
	{
		___sSubmeshIndices_11 = value;
		Il2CppCodeGenWriteBarrier((&___sSubmeshIndices_11), value);
	}

	inline static int32_t get_offset_of_sHighlighters_12() { return static_cast<int32_t>(offsetof(HighlighterCore_t3117871998_StaticFields, ___sHighlighters_12)); }
	inline List_1_t294979444 * get_sHighlighters_12() const { return ___sHighlighters_12; }
	inline List_1_t294979444 ** get_address_of_sHighlighters_12() { return &___sHighlighters_12; }
	inline void set_sHighlighters_12(List_1_t294979444 * value)
	{
		___sHighlighters_12 = value;
		Il2CppCodeGenWriteBarrier((&___sHighlighters_12), value);
	}

	inline static int32_t get_offset_of_sHighlightersReadonly_13() { return static_cast<int32_t>(offsetof(HighlighterCore_t3117871998_StaticFields, ___sHighlightersReadonly_13)); }
	inline ReadOnlyCollection_1_t35480989 * get_sHighlightersReadonly_13() const { return ___sHighlightersReadonly_13; }
	inline ReadOnlyCollection_1_t35480989 ** get_address_of_sHighlightersReadonly_13() { return &___sHighlightersReadonly_13; }
	inline void set_sHighlightersReadonly_13(ReadOnlyCollection_1_t35480989 * value)
	{
		___sHighlightersReadonly_13 = value;
		Il2CppCodeGenWriteBarrier((&___sHighlightersReadonly_13), value);
	}

	inline static int32_t get_offset_of__opaqueShader_22() { return static_cast<int32_t>(offsetof(HighlighterCore_t3117871998_StaticFields, ____opaqueShader_22)); }
	inline Shader_t4151988712 * get__opaqueShader_22() const { return ____opaqueShader_22; }
	inline Shader_t4151988712 ** get_address_of__opaqueShader_22() { return &____opaqueShader_22; }
	inline void set__opaqueShader_22(Shader_t4151988712 * value)
	{
		____opaqueShader_22 = value;
		Il2CppCodeGenWriteBarrier((&____opaqueShader_22), value);
	}

	inline static int32_t get_offset_of__transparentShader_23() { return static_cast<int32_t>(offsetof(HighlighterCore_t3117871998_StaticFields, ____transparentShader_23)); }
	inline Shader_t4151988712 * get__transparentShader_23() const { return ____transparentShader_23; }
	inline Shader_t4151988712 ** get_address_of__transparentShader_23() { return &____transparentShader_23; }
	inline void set__transparentShader_23(Shader_t4151988712 * value)
	{
		____transparentShader_23 = value;
		Il2CppCodeGenWriteBarrier((&____transparentShader_23), value);
	}

	inline static int32_t get_offset_of__globalRendererFilter_25() { return static_cast<int32_t>(offsetof(HighlighterCore_t3117871998_StaticFields, ____globalRendererFilter_25)); }
	inline RendererFilter_t73075700 * get__globalRendererFilter_25() const { return ____globalRendererFilter_25; }
	inline RendererFilter_t73075700 ** get_address_of__globalRendererFilter_25() { return &____globalRendererFilter_25; }
	inline void set__globalRendererFilter_25(RendererFilter_t73075700 * value)
	{
		____globalRendererFilter_25 = value;
		Il2CppCodeGenWriteBarrier((&____globalRendererFilter_25), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_27() { return static_cast<int32_t>(offsetof(HighlighterCore_t3117871998_StaticFields, ___U3CU3Ef__mgU24cache0_27)); }
	inline RendererFilter_t73075700 * get_U3CU3Ef__mgU24cache0_27() const { return ___U3CU3Ef__mgU24cache0_27; }
	inline RendererFilter_t73075700 ** get_address_of_U3CU3Ef__mgU24cache0_27() { return &___U3CU3Ef__mgU24cache0_27; }
	inline void set_U3CU3Ef__mgU24cache0_27(RendererFilter_t73075700 * value)
	{
		___U3CU3Ef__mgU24cache0_27 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIGHLIGHTERCORE_T3117871998_H
#ifndef HIGHLIGHTERRENDERER_T1776162451_H
#define HIGHLIGHTERRENDERER_T1776162451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightingSystem.HighlighterRenderer
struct  HighlighterRenderer_t1776162451  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean HighlightingSystem.HighlighterRenderer::isAlive
	bool ___isAlive_12;
	// UnityEngine.Renderer HighlightingSystem.HighlighterRenderer::r
	Renderer_t2627027031 * ___r_13;
	// System.Collections.Generic.List`1<HighlightingSystem.HighlighterRenderer/Data> HighlightingSystem.HighlighterRenderer::data
	List_1_t1906947814 * ___data_14;

public:
	inline static int32_t get_offset_of_isAlive_12() { return static_cast<int32_t>(offsetof(HighlighterRenderer_t1776162451, ___isAlive_12)); }
	inline bool get_isAlive_12() const { return ___isAlive_12; }
	inline bool* get_address_of_isAlive_12() { return &___isAlive_12; }
	inline void set_isAlive_12(bool value)
	{
		___isAlive_12 = value;
	}

	inline static int32_t get_offset_of_r_13() { return static_cast<int32_t>(offsetof(HighlighterRenderer_t1776162451, ___r_13)); }
	inline Renderer_t2627027031 * get_r_13() const { return ___r_13; }
	inline Renderer_t2627027031 ** get_address_of_r_13() { return &___r_13; }
	inline void set_r_13(Renderer_t2627027031 * value)
	{
		___r_13 = value;
		Il2CppCodeGenWriteBarrier((&___r_13), value);
	}

	inline static int32_t get_offset_of_data_14() { return static_cast<int32_t>(offsetof(HighlighterRenderer_t1776162451, ___data_14)); }
	inline List_1_t1906947814 * get_data_14() const { return ___data_14; }
	inline List_1_t1906947814 ** get_address_of_data_14() { return &___data_14; }
	inline void set_data_14(List_1_t1906947814 * value)
	{
		___data_14 = value;
		Il2CppCodeGenWriteBarrier((&___data_14), value);
	}
};

struct HighlighterRenderer_t1776162451_StaticFields
{
public:
	// System.Single HighlightingSystem.HighlighterRenderer::transparentCutoff
	float ___transparentCutoff_4;
	// System.String HighlightingSystem.HighlighterRenderer::sRenderType
	String_t* ___sRenderType_7;
	// System.String HighlightingSystem.HighlighterRenderer::sOpaque
	String_t* ___sOpaque_8;
	// System.String HighlightingSystem.HighlighterRenderer::sTransparent
	String_t* ___sTransparent_9;
	// System.String HighlightingSystem.HighlighterRenderer::sTransparentCutout
	String_t* ___sTransparentCutout_10;
	// System.String HighlightingSystem.HighlighterRenderer::sMainTex
	String_t* ___sMainTex_11;

public:
	inline static int32_t get_offset_of_transparentCutoff_4() { return static_cast<int32_t>(offsetof(HighlighterRenderer_t1776162451_StaticFields, ___transparentCutoff_4)); }
	inline float get_transparentCutoff_4() const { return ___transparentCutoff_4; }
	inline float* get_address_of_transparentCutoff_4() { return &___transparentCutoff_4; }
	inline void set_transparentCutoff_4(float value)
	{
		___transparentCutoff_4 = value;
	}

	inline static int32_t get_offset_of_sRenderType_7() { return static_cast<int32_t>(offsetof(HighlighterRenderer_t1776162451_StaticFields, ___sRenderType_7)); }
	inline String_t* get_sRenderType_7() const { return ___sRenderType_7; }
	inline String_t** get_address_of_sRenderType_7() { return &___sRenderType_7; }
	inline void set_sRenderType_7(String_t* value)
	{
		___sRenderType_7 = value;
		Il2CppCodeGenWriteBarrier((&___sRenderType_7), value);
	}

	inline static int32_t get_offset_of_sOpaque_8() { return static_cast<int32_t>(offsetof(HighlighterRenderer_t1776162451_StaticFields, ___sOpaque_8)); }
	inline String_t* get_sOpaque_8() const { return ___sOpaque_8; }
	inline String_t** get_address_of_sOpaque_8() { return &___sOpaque_8; }
	inline void set_sOpaque_8(String_t* value)
	{
		___sOpaque_8 = value;
		Il2CppCodeGenWriteBarrier((&___sOpaque_8), value);
	}

	inline static int32_t get_offset_of_sTransparent_9() { return static_cast<int32_t>(offsetof(HighlighterRenderer_t1776162451_StaticFields, ___sTransparent_9)); }
	inline String_t* get_sTransparent_9() const { return ___sTransparent_9; }
	inline String_t** get_address_of_sTransparent_9() { return &___sTransparent_9; }
	inline void set_sTransparent_9(String_t* value)
	{
		___sTransparent_9 = value;
		Il2CppCodeGenWriteBarrier((&___sTransparent_9), value);
	}

	inline static int32_t get_offset_of_sTransparentCutout_10() { return static_cast<int32_t>(offsetof(HighlighterRenderer_t1776162451_StaticFields, ___sTransparentCutout_10)); }
	inline String_t* get_sTransparentCutout_10() const { return ___sTransparentCutout_10; }
	inline String_t** get_address_of_sTransparentCutout_10() { return &___sTransparentCutout_10; }
	inline void set_sTransparentCutout_10(String_t* value)
	{
		___sTransparentCutout_10 = value;
		Il2CppCodeGenWriteBarrier((&___sTransparentCutout_10), value);
	}

	inline static int32_t get_offset_of_sMainTex_11() { return static_cast<int32_t>(offsetof(HighlighterRenderer_t1776162451_StaticFields, ___sMainTex_11)); }
	inline String_t* get_sMainTex_11() const { return ___sMainTex_11; }
	inline String_t** get_address_of_sMainTex_11() { return &___sMainTex_11; }
	inline void set_sMainTex_11(String_t* value)
	{
		___sMainTex_11 = value;
		Il2CppCodeGenWriteBarrier((&___sMainTex_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIGHLIGHTERRENDERER_T1776162451_H
#ifndef HIGHLIGHTINGBASE_T582374880_H
#define HIGHLIGHTINGBASE_T582374880_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightingSystem.HighlightingBase
struct  HighlightingBase_t582374880  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Rendering.CommandBuffer HighlightingSystem.HighlightingBase::renderBuffer
	CommandBuffer_t2206337031 * ___renderBuffer_13;
	// UnityEngine.RenderTextureDescriptor HighlightingSystem.HighlightingBase::cachedDescriptor
	RenderTextureDescriptor_t1974534975  ___cachedDescriptor_14;
	// System.Single HighlightingSystem.HighlightingBase::_fillAlpha
	float ____fillAlpha_15;
	// System.Int32 HighlightingSystem.HighlightingBase::_downsampleFactor
	int32_t ____downsampleFactor_16;
	// System.Int32 HighlightingSystem.HighlightingBase::_iterations
	int32_t ____iterations_17;
	// System.Single HighlightingSystem.HighlightingBase::_blurMinSpread
	float ____blurMinSpread_18;
	// System.Single HighlightingSystem.HighlightingBase::_blurSpread
	float ____blurSpread_19;
	// System.Single HighlightingSystem.HighlightingBase::_blurIntensity
	float ____blurIntensity_20;
	// HighlightingSystem.BlurDirections HighlightingSystem.HighlightingBase::_blurDirections
	int32_t ____blurDirections_21;
	// HighlightingSystem.HighlightingBlitter HighlightingSystem.HighlightingBase::_blitter
	HighlightingBlitter_t1505432117 * ____blitter_22;
	// HighlightingSystem.AntiAliasing HighlightingSystem.HighlightingBase::_antiAliasing
	int32_t ____antiAliasing_23;
	// UnityEngine.Rendering.RenderTargetIdentifier HighlightingSystem.HighlightingBase::highlightingBufferID
	RenderTargetIdentifier_t2079184500  ___highlightingBufferID_24;
	// UnityEngine.Rendering.RenderTargetIdentifier HighlightingSystem.HighlightingBase::blur1ID
	RenderTargetIdentifier_t2079184500  ___blur1ID_25;
	// UnityEngine.Rendering.RenderTargetIdentifier HighlightingSystem.HighlightingBase::blur2ID
	RenderTargetIdentifier_t2079184500  ___blur2ID_26;
	// UnityEngine.RenderTexture HighlightingSystem.HighlightingBase::highlightingBuffer
	RenderTexture_t2108887433 * ___highlightingBuffer_27;
	// UnityEngine.Camera HighlightingSystem.HighlightingBase::cam
	Camera_t4157153871 * ___cam_28;
	// UnityEngine.Material HighlightingSystem.HighlightingBase::blurMaterial
	Material_t340375123 * ___blurMaterial_35;
	// UnityEngine.Material HighlightingSystem.HighlightingBase::cutMaterial
	Material_t340375123 * ___cutMaterial_36;
	// UnityEngine.Material HighlightingSystem.HighlightingBase::compMaterial
	Material_t340375123 * ___compMaterial_37;

public:
	inline static int32_t get_offset_of_renderBuffer_13() { return static_cast<int32_t>(offsetof(HighlightingBase_t582374880, ___renderBuffer_13)); }
	inline CommandBuffer_t2206337031 * get_renderBuffer_13() const { return ___renderBuffer_13; }
	inline CommandBuffer_t2206337031 ** get_address_of_renderBuffer_13() { return &___renderBuffer_13; }
	inline void set_renderBuffer_13(CommandBuffer_t2206337031 * value)
	{
		___renderBuffer_13 = value;
		Il2CppCodeGenWriteBarrier((&___renderBuffer_13), value);
	}

	inline static int32_t get_offset_of_cachedDescriptor_14() { return static_cast<int32_t>(offsetof(HighlightingBase_t582374880, ___cachedDescriptor_14)); }
	inline RenderTextureDescriptor_t1974534975  get_cachedDescriptor_14() const { return ___cachedDescriptor_14; }
	inline RenderTextureDescriptor_t1974534975 * get_address_of_cachedDescriptor_14() { return &___cachedDescriptor_14; }
	inline void set_cachedDescriptor_14(RenderTextureDescriptor_t1974534975  value)
	{
		___cachedDescriptor_14 = value;
	}

	inline static int32_t get_offset_of__fillAlpha_15() { return static_cast<int32_t>(offsetof(HighlightingBase_t582374880, ____fillAlpha_15)); }
	inline float get__fillAlpha_15() const { return ____fillAlpha_15; }
	inline float* get_address_of__fillAlpha_15() { return &____fillAlpha_15; }
	inline void set__fillAlpha_15(float value)
	{
		____fillAlpha_15 = value;
	}

	inline static int32_t get_offset_of__downsampleFactor_16() { return static_cast<int32_t>(offsetof(HighlightingBase_t582374880, ____downsampleFactor_16)); }
	inline int32_t get__downsampleFactor_16() const { return ____downsampleFactor_16; }
	inline int32_t* get_address_of__downsampleFactor_16() { return &____downsampleFactor_16; }
	inline void set__downsampleFactor_16(int32_t value)
	{
		____downsampleFactor_16 = value;
	}

	inline static int32_t get_offset_of__iterations_17() { return static_cast<int32_t>(offsetof(HighlightingBase_t582374880, ____iterations_17)); }
	inline int32_t get__iterations_17() const { return ____iterations_17; }
	inline int32_t* get_address_of__iterations_17() { return &____iterations_17; }
	inline void set__iterations_17(int32_t value)
	{
		____iterations_17 = value;
	}

	inline static int32_t get_offset_of__blurMinSpread_18() { return static_cast<int32_t>(offsetof(HighlightingBase_t582374880, ____blurMinSpread_18)); }
	inline float get__blurMinSpread_18() const { return ____blurMinSpread_18; }
	inline float* get_address_of__blurMinSpread_18() { return &____blurMinSpread_18; }
	inline void set__blurMinSpread_18(float value)
	{
		____blurMinSpread_18 = value;
	}

	inline static int32_t get_offset_of__blurSpread_19() { return static_cast<int32_t>(offsetof(HighlightingBase_t582374880, ____blurSpread_19)); }
	inline float get__blurSpread_19() const { return ____blurSpread_19; }
	inline float* get_address_of__blurSpread_19() { return &____blurSpread_19; }
	inline void set__blurSpread_19(float value)
	{
		____blurSpread_19 = value;
	}

	inline static int32_t get_offset_of__blurIntensity_20() { return static_cast<int32_t>(offsetof(HighlightingBase_t582374880, ____blurIntensity_20)); }
	inline float get__blurIntensity_20() const { return ____blurIntensity_20; }
	inline float* get_address_of__blurIntensity_20() { return &____blurIntensity_20; }
	inline void set__blurIntensity_20(float value)
	{
		____blurIntensity_20 = value;
	}

	inline static int32_t get_offset_of__blurDirections_21() { return static_cast<int32_t>(offsetof(HighlightingBase_t582374880, ____blurDirections_21)); }
	inline int32_t get__blurDirections_21() const { return ____blurDirections_21; }
	inline int32_t* get_address_of__blurDirections_21() { return &____blurDirections_21; }
	inline void set__blurDirections_21(int32_t value)
	{
		____blurDirections_21 = value;
	}

	inline static int32_t get_offset_of__blitter_22() { return static_cast<int32_t>(offsetof(HighlightingBase_t582374880, ____blitter_22)); }
	inline HighlightingBlitter_t1505432117 * get__blitter_22() const { return ____blitter_22; }
	inline HighlightingBlitter_t1505432117 ** get_address_of__blitter_22() { return &____blitter_22; }
	inline void set__blitter_22(HighlightingBlitter_t1505432117 * value)
	{
		____blitter_22 = value;
		Il2CppCodeGenWriteBarrier((&____blitter_22), value);
	}

	inline static int32_t get_offset_of__antiAliasing_23() { return static_cast<int32_t>(offsetof(HighlightingBase_t582374880, ____antiAliasing_23)); }
	inline int32_t get__antiAliasing_23() const { return ____antiAliasing_23; }
	inline int32_t* get_address_of__antiAliasing_23() { return &____antiAliasing_23; }
	inline void set__antiAliasing_23(int32_t value)
	{
		____antiAliasing_23 = value;
	}

	inline static int32_t get_offset_of_highlightingBufferID_24() { return static_cast<int32_t>(offsetof(HighlightingBase_t582374880, ___highlightingBufferID_24)); }
	inline RenderTargetIdentifier_t2079184500  get_highlightingBufferID_24() const { return ___highlightingBufferID_24; }
	inline RenderTargetIdentifier_t2079184500 * get_address_of_highlightingBufferID_24() { return &___highlightingBufferID_24; }
	inline void set_highlightingBufferID_24(RenderTargetIdentifier_t2079184500  value)
	{
		___highlightingBufferID_24 = value;
	}

	inline static int32_t get_offset_of_blur1ID_25() { return static_cast<int32_t>(offsetof(HighlightingBase_t582374880, ___blur1ID_25)); }
	inline RenderTargetIdentifier_t2079184500  get_blur1ID_25() const { return ___blur1ID_25; }
	inline RenderTargetIdentifier_t2079184500 * get_address_of_blur1ID_25() { return &___blur1ID_25; }
	inline void set_blur1ID_25(RenderTargetIdentifier_t2079184500  value)
	{
		___blur1ID_25 = value;
	}

	inline static int32_t get_offset_of_blur2ID_26() { return static_cast<int32_t>(offsetof(HighlightingBase_t582374880, ___blur2ID_26)); }
	inline RenderTargetIdentifier_t2079184500  get_blur2ID_26() const { return ___blur2ID_26; }
	inline RenderTargetIdentifier_t2079184500 * get_address_of_blur2ID_26() { return &___blur2ID_26; }
	inline void set_blur2ID_26(RenderTargetIdentifier_t2079184500  value)
	{
		___blur2ID_26 = value;
	}

	inline static int32_t get_offset_of_highlightingBuffer_27() { return static_cast<int32_t>(offsetof(HighlightingBase_t582374880, ___highlightingBuffer_27)); }
	inline RenderTexture_t2108887433 * get_highlightingBuffer_27() const { return ___highlightingBuffer_27; }
	inline RenderTexture_t2108887433 ** get_address_of_highlightingBuffer_27() { return &___highlightingBuffer_27; }
	inline void set_highlightingBuffer_27(RenderTexture_t2108887433 * value)
	{
		___highlightingBuffer_27 = value;
		Il2CppCodeGenWriteBarrier((&___highlightingBuffer_27), value);
	}

	inline static int32_t get_offset_of_cam_28() { return static_cast<int32_t>(offsetof(HighlightingBase_t582374880, ___cam_28)); }
	inline Camera_t4157153871 * get_cam_28() const { return ___cam_28; }
	inline Camera_t4157153871 ** get_address_of_cam_28() { return &___cam_28; }
	inline void set_cam_28(Camera_t4157153871 * value)
	{
		___cam_28 = value;
		Il2CppCodeGenWriteBarrier((&___cam_28), value);
	}

	inline static int32_t get_offset_of_blurMaterial_35() { return static_cast<int32_t>(offsetof(HighlightingBase_t582374880, ___blurMaterial_35)); }
	inline Material_t340375123 * get_blurMaterial_35() const { return ___blurMaterial_35; }
	inline Material_t340375123 ** get_address_of_blurMaterial_35() { return &___blurMaterial_35; }
	inline void set_blurMaterial_35(Material_t340375123 * value)
	{
		___blurMaterial_35 = value;
		Il2CppCodeGenWriteBarrier((&___blurMaterial_35), value);
	}

	inline static int32_t get_offset_of_cutMaterial_36() { return static_cast<int32_t>(offsetof(HighlightingBase_t582374880, ___cutMaterial_36)); }
	inline Material_t340375123 * get_cutMaterial_36() const { return ___cutMaterial_36; }
	inline Material_t340375123 ** get_address_of_cutMaterial_36() { return &___cutMaterial_36; }
	inline void set_cutMaterial_36(Material_t340375123 * value)
	{
		___cutMaterial_36 = value;
		Il2CppCodeGenWriteBarrier((&___cutMaterial_36), value);
	}

	inline static int32_t get_offset_of_compMaterial_37() { return static_cast<int32_t>(offsetof(HighlightingBase_t582374880, ___compMaterial_37)); }
	inline Material_t340375123 * get_compMaterial_37() const { return ___compMaterial_37; }
	inline Material_t340375123 ** get_address_of_compMaterial_37() { return &___compMaterial_37; }
	inline void set_compMaterial_37(Material_t340375123 * value)
	{
		___compMaterial_37 = value;
		Il2CppCodeGenWriteBarrier((&___compMaterial_37), value);
	}
};

struct HighlightingBase_t582374880_StaticFields
{
public:
	// UnityEngine.Color HighlightingSystem.HighlightingBase::colorClear
	Color_t2555686324  ___colorClear_4;
	// System.String HighlightingSystem.HighlightingBase::renderBufferName
	String_t* ___renderBufferName_5;
	// UnityEngine.Matrix4x4 HighlightingSystem.HighlightingBase::identityMatrix
	Matrix4x4_t1817901843  ___identityMatrix_6;
	// System.String HighlightingSystem.HighlightingBase::keywordStraightDirections
	String_t* ___keywordStraightDirections_7;
	// System.String HighlightingSystem.HighlightingBase::keywordAllDirections
	String_t* ___keywordAllDirections_8;
	// System.String HighlightingSystem.HighlightingBase::profileHighlightingSystem
	String_t* ___profileHighlightingSystem_9;
	// UnityEngine.Camera HighlightingSystem.HighlightingBase::currentCamera
	Camera_t4157153871 * ___currentCamera_11;
	// System.Collections.Generic.HashSet`1<HighlightingSystem.HighlighterRenderer> HighlightingSystem.HighlightingBase::visibleRenderers
	HashSet_1_t341111925 * ___visibleRenderers_12;
	// System.String[] HighlightingSystem.HighlightingBase::shaderPaths
	StringU5BU5D_t1281789340* ___shaderPaths_32;
	// UnityEngine.Shader[] HighlightingSystem.HighlightingBase::shaders
	ShaderU5BU5D_t2047402361* ___shaders_33;
	// UnityEngine.Material[] HighlightingSystem.HighlightingBase::materials
	MaterialU5BU5D_t561872642* ___materials_34;
	// System.Boolean HighlightingSystem.HighlightingBase::initialized
	bool ___initialized_38;

public:
	inline static int32_t get_offset_of_colorClear_4() { return static_cast<int32_t>(offsetof(HighlightingBase_t582374880_StaticFields, ___colorClear_4)); }
	inline Color_t2555686324  get_colorClear_4() const { return ___colorClear_4; }
	inline Color_t2555686324 * get_address_of_colorClear_4() { return &___colorClear_4; }
	inline void set_colorClear_4(Color_t2555686324  value)
	{
		___colorClear_4 = value;
	}

	inline static int32_t get_offset_of_renderBufferName_5() { return static_cast<int32_t>(offsetof(HighlightingBase_t582374880_StaticFields, ___renderBufferName_5)); }
	inline String_t* get_renderBufferName_5() const { return ___renderBufferName_5; }
	inline String_t** get_address_of_renderBufferName_5() { return &___renderBufferName_5; }
	inline void set_renderBufferName_5(String_t* value)
	{
		___renderBufferName_5 = value;
		Il2CppCodeGenWriteBarrier((&___renderBufferName_5), value);
	}

	inline static int32_t get_offset_of_identityMatrix_6() { return static_cast<int32_t>(offsetof(HighlightingBase_t582374880_StaticFields, ___identityMatrix_6)); }
	inline Matrix4x4_t1817901843  get_identityMatrix_6() const { return ___identityMatrix_6; }
	inline Matrix4x4_t1817901843 * get_address_of_identityMatrix_6() { return &___identityMatrix_6; }
	inline void set_identityMatrix_6(Matrix4x4_t1817901843  value)
	{
		___identityMatrix_6 = value;
	}

	inline static int32_t get_offset_of_keywordStraightDirections_7() { return static_cast<int32_t>(offsetof(HighlightingBase_t582374880_StaticFields, ___keywordStraightDirections_7)); }
	inline String_t* get_keywordStraightDirections_7() const { return ___keywordStraightDirections_7; }
	inline String_t** get_address_of_keywordStraightDirections_7() { return &___keywordStraightDirections_7; }
	inline void set_keywordStraightDirections_7(String_t* value)
	{
		___keywordStraightDirections_7 = value;
		Il2CppCodeGenWriteBarrier((&___keywordStraightDirections_7), value);
	}

	inline static int32_t get_offset_of_keywordAllDirections_8() { return static_cast<int32_t>(offsetof(HighlightingBase_t582374880_StaticFields, ___keywordAllDirections_8)); }
	inline String_t* get_keywordAllDirections_8() const { return ___keywordAllDirections_8; }
	inline String_t** get_address_of_keywordAllDirections_8() { return &___keywordAllDirections_8; }
	inline void set_keywordAllDirections_8(String_t* value)
	{
		___keywordAllDirections_8 = value;
		Il2CppCodeGenWriteBarrier((&___keywordAllDirections_8), value);
	}

	inline static int32_t get_offset_of_profileHighlightingSystem_9() { return static_cast<int32_t>(offsetof(HighlightingBase_t582374880_StaticFields, ___profileHighlightingSystem_9)); }
	inline String_t* get_profileHighlightingSystem_9() const { return ___profileHighlightingSystem_9; }
	inline String_t** get_address_of_profileHighlightingSystem_9() { return &___profileHighlightingSystem_9; }
	inline void set_profileHighlightingSystem_9(String_t* value)
	{
		___profileHighlightingSystem_9 = value;
		Il2CppCodeGenWriteBarrier((&___profileHighlightingSystem_9), value);
	}

	inline static int32_t get_offset_of_currentCamera_11() { return static_cast<int32_t>(offsetof(HighlightingBase_t582374880_StaticFields, ___currentCamera_11)); }
	inline Camera_t4157153871 * get_currentCamera_11() const { return ___currentCamera_11; }
	inline Camera_t4157153871 ** get_address_of_currentCamera_11() { return &___currentCamera_11; }
	inline void set_currentCamera_11(Camera_t4157153871 * value)
	{
		___currentCamera_11 = value;
		Il2CppCodeGenWriteBarrier((&___currentCamera_11), value);
	}

	inline static int32_t get_offset_of_visibleRenderers_12() { return static_cast<int32_t>(offsetof(HighlightingBase_t582374880_StaticFields, ___visibleRenderers_12)); }
	inline HashSet_1_t341111925 * get_visibleRenderers_12() const { return ___visibleRenderers_12; }
	inline HashSet_1_t341111925 ** get_address_of_visibleRenderers_12() { return &___visibleRenderers_12; }
	inline void set_visibleRenderers_12(HashSet_1_t341111925 * value)
	{
		___visibleRenderers_12 = value;
		Il2CppCodeGenWriteBarrier((&___visibleRenderers_12), value);
	}

	inline static int32_t get_offset_of_shaderPaths_32() { return static_cast<int32_t>(offsetof(HighlightingBase_t582374880_StaticFields, ___shaderPaths_32)); }
	inline StringU5BU5D_t1281789340* get_shaderPaths_32() const { return ___shaderPaths_32; }
	inline StringU5BU5D_t1281789340** get_address_of_shaderPaths_32() { return &___shaderPaths_32; }
	inline void set_shaderPaths_32(StringU5BU5D_t1281789340* value)
	{
		___shaderPaths_32 = value;
		Il2CppCodeGenWriteBarrier((&___shaderPaths_32), value);
	}

	inline static int32_t get_offset_of_shaders_33() { return static_cast<int32_t>(offsetof(HighlightingBase_t582374880_StaticFields, ___shaders_33)); }
	inline ShaderU5BU5D_t2047402361* get_shaders_33() const { return ___shaders_33; }
	inline ShaderU5BU5D_t2047402361** get_address_of_shaders_33() { return &___shaders_33; }
	inline void set_shaders_33(ShaderU5BU5D_t2047402361* value)
	{
		___shaders_33 = value;
		Il2CppCodeGenWriteBarrier((&___shaders_33), value);
	}

	inline static int32_t get_offset_of_materials_34() { return static_cast<int32_t>(offsetof(HighlightingBase_t582374880_StaticFields, ___materials_34)); }
	inline MaterialU5BU5D_t561872642* get_materials_34() const { return ___materials_34; }
	inline MaterialU5BU5D_t561872642** get_address_of_materials_34() { return &___materials_34; }
	inline void set_materials_34(MaterialU5BU5D_t561872642* value)
	{
		___materials_34 = value;
		Il2CppCodeGenWriteBarrier((&___materials_34), value);
	}

	inline static int32_t get_offset_of_initialized_38() { return static_cast<int32_t>(offsetof(HighlightingBase_t582374880_StaticFields, ___initialized_38)); }
	inline bool get_initialized_38() const { return ___initialized_38; }
	inline bool* get_address_of_initialized_38() { return &___initialized_38; }
	inline void set_initialized_38(bool value)
	{
		___initialized_38 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIGHLIGHTINGBASE_T582374880_H
#ifndef HIGHLIGHTINGBLITTER_T1505432117_H
#define HIGHLIGHTINGBLITTER_T1505432117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightingSystem.HighlightingBlitter
struct  HighlightingBlitter_t1505432117  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Generic.List`1<HighlightingSystem.HighlightingBase> HighlightingSystem.HighlightingBlitter::renderers
	List_1_t2054449622 * ___renderers_4;

public:
	inline static int32_t get_offset_of_renderers_4() { return static_cast<int32_t>(offsetof(HighlightingBlitter_t1505432117, ___renderers_4)); }
	inline List_1_t2054449622 * get_renderers_4() const { return ___renderers_4; }
	inline List_1_t2054449622 ** get_address_of_renderers_4() { return &___renderers_4; }
	inline void set_renderers_4(List_1_t2054449622 * value)
	{
		___renderers_4 = value;
		Il2CppCodeGenWriteBarrier((&___renderers_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIGHLIGHTINGBLITTER_T1505432117_H
#ifndef HIGHLIGHTER_T672210414_H
#define HIGHLIGHTER_T672210414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightingSystem.Highlighter
struct  Highlighter_t672210414  : public HighlighterCore_t3117871998
{
public:
	// System.Boolean HighlightingSystem.Highlighter::_overlay
	bool ____overlay_29;
	// System.Boolean HighlightingSystem.Highlighter::_occluder
	bool ____occluder_30;
	// UnityEngine.Color HighlightingSystem.Highlighter::_hoverColor
	Color_t2555686324  ____hoverColor_31;
	// System.Int32 HighlightingSystem.Highlighter::_hoverFrame
	int32_t ____hoverFrame_32;
	// System.Boolean HighlightingSystem.Highlighter::_tween
	bool ____tween_33;
	// UnityEngine.Gradient HighlightingSystem.Highlighter::_tweenGradient
	Gradient_t3067099924 * ____tweenGradient_34;
	// System.Single HighlightingSystem.Highlighter::_tweenDuration
	float ____tweenDuration_35;
	// System.Boolean HighlightingSystem.Highlighter::_tweenReverse
	bool ____tweenReverse_36;
	// HighlightingSystem.LoopMode HighlightingSystem.Highlighter::_tweenLoop
	int32_t ____tweenLoop_37;
	// HighlightingSystem.Easing HighlightingSystem.Highlighter::_tweenEasing
	int32_t ____tweenEasing_38;
	// System.Single HighlightingSystem.Highlighter::_tweenDelay
	float ____tweenDelay_39;
	// System.Int32 HighlightingSystem.Highlighter::_tweenRepeatCount
	int32_t ____tweenRepeatCount_40;
	// System.Boolean HighlightingSystem.Highlighter::_tweenUseUnscaledTime
	bool ____tweenUseUnscaledTime_41;
	// System.Boolean HighlightingSystem.Highlighter::_constant
	bool ____constant_42;
	// UnityEngine.Color HighlightingSystem.Highlighter::_constantColor
	Color_t2555686324  ____constantColor_43;
	// System.Single HighlightingSystem.Highlighter::_constantFadeInTime
	float ____constantFadeInTime_44;
	// System.Single HighlightingSystem.Highlighter::_constantFadeOutTime
	float ____constantFadeOutTime_45;
	// HighlightingSystem.Easing HighlightingSystem.Highlighter::_constantEasing
	int32_t ____constantEasing_46;
	// System.Boolean HighlightingSystem.Highlighter::_constantUseUnscaledTime
	bool ____constantUseUnscaledTime_47;
	// HighlightingSystem.RendererFilterMode HighlightingSystem.Highlighter::_filterMode
	int32_t ____filterMode_48;
	// System.Collections.Generic.List`1<UnityEngine.Transform> HighlightingSystem.Highlighter::_filterList
	List_1_t777473367 * ____filterList_49;
	// System.Boolean HighlightingSystem.Highlighter::_tweenEnabled
	bool ____tweenEnabled_50;
	// System.Single HighlightingSystem.Highlighter::_tweenStart
	float ____tweenStart_51;
	// System.Boolean HighlightingSystem.Highlighter::_constantEnabled
	bool ____constantEnabled_52;
	// System.Single HighlightingSystem.Highlighter::_constantStart
	float ____constantStart_53;
	// System.Single HighlightingSystem.Highlighter::_constantDuration
	float ____constantDuration_54;
	// UnityEngine.GradientColorKey[] HighlightingSystem.Highlighter::flashingColorKeys
	GradientColorKeyU5BU5D_t4133731744* ___flashingColorKeys_55;
	// UnityEngine.GradientAlphaKey[] HighlightingSystem.Highlighter::flashingAlphaKeys
	GradientAlphaKeyU5BU5D_t1986482519* ___flashingAlphaKeys_56;

public:
	inline static int32_t get_offset_of__overlay_29() { return static_cast<int32_t>(offsetof(Highlighter_t672210414, ____overlay_29)); }
	inline bool get__overlay_29() const { return ____overlay_29; }
	inline bool* get_address_of__overlay_29() { return &____overlay_29; }
	inline void set__overlay_29(bool value)
	{
		____overlay_29 = value;
	}

	inline static int32_t get_offset_of__occluder_30() { return static_cast<int32_t>(offsetof(Highlighter_t672210414, ____occluder_30)); }
	inline bool get__occluder_30() const { return ____occluder_30; }
	inline bool* get_address_of__occluder_30() { return &____occluder_30; }
	inline void set__occluder_30(bool value)
	{
		____occluder_30 = value;
	}

	inline static int32_t get_offset_of__hoverColor_31() { return static_cast<int32_t>(offsetof(Highlighter_t672210414, ____hoverColor_31)); }
	inline Color_t2555686324  get__hoverColor_31() const { return ____hoverColor_31; }
	inline Color_t2555686324 * get_address_of__hoverColor_31() { return &____hoverColor_31; }
	inline void set__hoverColor_31(Color_t2555686324  value)
	{
		____hoverColor_31 = value;
	}

	inline static int32_t get_offset_of__hoverFrame_32() { return static_cast<int32_t>(offsetof(Highlighter_t672210414, ____hoverFrame_32)); }
	inline int32_t get__hoverFrame_32() const { return ____hoverFrame_32; }
	inline int32_t* get_address_of__hoverFrame_32() { return &____hoverFrame_32; }
	inline void set__hoverFrame_32(int32_t value)
	{
		____hoverFrame_32 = value;
	}

	inline static int32_t get_offset_of__tween_33() { return static_cast<int32_t>(offsetof(Highlighter_t672210414, ____tween_33)); }
	inline bool get__tween_33() const { return ____tween_33; }
	inline bool* get_address_of__tween_33() { return &____tween_33; }
	inline void set__tween_33(bool value)
	{
		____tween_33 = value;
	}

	inline static int32_t get_offset_of__tweenGradient_34() { return static_cast<int32_t>(offsetof(Highlighter_t672210414, ____tweenGradient_34)); }
	inline Gradient_t3067099924 * get__tweenGradient_34() const { return ____tweenGradient_34; }
	inline Gradient_t3067099924 ** get_address_of__tweenGradient_34() { return &____tweenGradient_34; }
	inline void set__tweenGradient_34(Gradient_t3067099924 * value)
	{
		____tweenGradient_34 = value;
		Il2CppCodeGenWriteBarrier((&____tweenGradient_34), value);
	}

	inline static int32_t get_offset_of__tweenDuration_35() { return static_cast<int32_t>(offsetof(Highlighter_t672210414, ____tweenDuration_35)); }
	inline float get__tweenDuration_35() const { return ____tweenDuration_35; }
	inline float* get_address_of__tweenDuration_35() { return &____tweenDuration_35; }
	inline void set__tweenDuration_35(float value)
	{
		____tweenDuration_35 = value;
	}

	inline static int32_t get_offset_of__tweenReverse_36() { return static_cast<int32_t>(offsetof(Highlighter_t672210414, ____tweenReverse_36)); }
	inline bool get__tweenReverse_36() const { return ____tweenReverse_36; }
	inline bool* get_address_of__tweenReverse_36() { return &____tweenReverse_36; }
	inline void set__tweenReverse_36(bool value)
	{
		____tweenReverse_36 = value;
	}

	inline static int32_t get_offset_of__tweenLoop_37() { return static_cast<int32_t>(offsetof(Highlighter_t672210414, ____tweenLoop_37)); }
	inline int32_t get__tweenLoop_37() const { return ____tweenLoop_37; }
	inline int32_t* get_address_of__tweenLoop_37() { return &____tweenLoop_37; }
	inline void set__tweenLoop_37(int32_t value)
	{
		____tweenLoop_37 = value;
	}

	inline static int32_t get_offset_of__tweenEasing_38() { return static_cast<int32_t>(offsetof(Highlighter_t672210414, ____tweenEasing_38)); }
	inline int32_t get__tweenEasing_38() const { return ____tweenEasing_38; }
	inline int32_t* get_address_of__tweenEasing_38() { return &____tweenEasing_38; }
	inline void set__tweenEasing_38(int32_t value)
	{
		____tweenEasing_38 = value;
	}

	inline static int32_t get_offset_of__tweenDelay_39() { return static_cast<int32_t>(offsetof(Highlighter_t672210414, ____tweenDelay_39)); }
	inline float get__tweenDelay_39() const { return ____tweenDelay_39; }
	inline float* get_address_of__tweenDelay_39() { return &____tweenDelay_39; }
	inline void set__tweenDelay_39(float value)
	{
		____tweenDelay_39 = value;
	}

	inline static int32_t get_offset_of__tweenRepeatCount_40() { return static_cast<int32_t>(offsetof(Highlighter_t672210414, ____tweenRepeatCount_40)); }
	inline int32_t get__tweenRepeatCount_40() const { return ____tweenRepeatCount_40; }
	inline int32_t* get_address_of__tweenRepeatCount_40() { return &____tweenRepeatCount_40; }
	inline void set__tweenRepeatCount_40(int32_t value)
	{
		____tweenRepeatCount_40 = value;
	}

	inline static int32_t get_offset_of__tweenUseUnscaledTime_41() { return static_cast<int32_t>(offsetof(Highlighter_t672210414, ____tweenUseUnscaledTime_41)); }
	inline bool get__tweenUseUnscaledTime_41() const { return ____tweenUseUnscaledTime_41; }
	inline bool* get_address_of__tweenUseUnscaledTime_41() { return &____tweenUseUnscaledTime_41; }
	inline void set__tweenUseUnscaledTime_41(bool value)
	{
		____tweenUseUnscaledTime_41 = value;
	}

	inline static int32_t get_offset_of__constant_42() { return static_cast<int32_t>(offsetof(Highlighter_t672210414, ____constant_42)); }
	inline bool get__constant_42() const { return ____constant_42; }
	inline bool* get_address_of__constant_42() { return &____constant_42; }
	inline void set__constant_42(bool value)
	{
		____constant_42 = value;
	}

	inline static int32_t get_offset_of__constantColor_43() { return static_cast<int32_t>(offsetof(Highlighter_t672210414, ____constantColor_43)); }
	inline Color_t2555686324  get__constantColor_43() const { return ____constantColor_43; }
	inline Color_t2555686324 * get_address_of__constantColor_43() { return &____constantColor_43; }
	inline void set__constantColor_43(Color_t2555686324  value)
	{
		____constantColor_43 = value;
	}

	inline static int32_t get_offset_of__constantFadeInTime_44() { return static_cast<int32_t>(offsetof(Highlighter_t672210414, ____constantFadeInTime_44)); }
	inline float get__constantFadeInTime_44() const { return ____constantFadeInTime_44; }
	inline float* get_address_of__constantFadeInTime_44() { return &____constantFadeInTime_44; }
	inline void set__constantFadeInTime_44(float value)
	{
		____constantFadeInTime_44 = value;
	}

	inline static int32_t get_offset_of__constantFadeOutTime_45() { return static_cast<int32_t>(offsetof(Highlighter_t672210414, ____constantFadeOutTime_45)); }
	inline float get__constantFadeOutTime_45() const { return ____constantFadeOutTime_45; }
	inline float* get_address_of__constantFadeOutTime_45() { return &____constantFadeOutTime_45; }
	inline void set__constantFadeOutTime_45(float value)
	{
		____constantFadeOutTime_45 = value;
	}

	inline static int32_t get_offset_of__constantEasing_46() { return static_cast<int32_t>(offsetof(Highlighter_t672210414, ____constantEasing_46)); }
	inline int32_t get__constantEasing_46() const { return ____constantEasing_46; }
	inline int32_t* get_address_of__constantEasing_46() { return &____constantEasing_46; }
	inline void set__constantEasing_46(int32_t value)
	{
		____constantEasing_46 = value;
	}

	inline static int32_t get_offset_of__constantUseUnscaledTime_47() { return static_cast<int32_t>(offsetof(Highlighter_t672210414, ____constantUseUnscaledTime_47)); }
	inline bool get__constantUseUnscaledTime_47() const { return ____constantUseUnscaledTime_47; }
	inline bool* get_address_of__constantUseUnscaledTime_47() { return &____constantUseUnscaledTime_47; }
	inline void set__constantUseUnscaledTime_47(bool value)
	{
		____constantUseUnscaledTime_47 = value;
	}

	inline static int32_t get_offset_of__filterMode_48() { return static_cast<int32_t>(offsetof(Highlighter_t672210414, ____filterMode_48)); }
	inline int32_t get__filterMode_48() const { return ____filterMode_48; }
	inline int32_t* get_address_of__filterMode_48() { return &____filterMode_48; }
	inline void set__filterMode_48(int32_t value)
	{
		____filterMode_48 = value;
	}

	inline static int32_t get_offset_of__filterList_49() { return static_cast<int32_t>(offsetof(Highlighter_t672210414, ____filterList_49)); }
	inline List_1_t777473367 * get__filterList_49() const { return ____filterList_49; }
	inline List_1_t777473367 ** get_address_of__filterList_49() { return &____filterList_49; }
	inline void set__filterList_49(List_1_t777473367 * value)
	{
		____filterList_49 = value;
		Il2CppCodeGenWriteBarrier((&____filterList_49), value);
	}

	inline static int32_t get_offset_of__tweenEnabled_50() { return static_cast<int32_t>(offsetof(Highlighter_t672210414, ____tweenEnabled_50)); }
	inline bool get__tweenEnabled_50() const { return ____tweenEnabled_50; }
	inline bool* get_address_of__tweenEnabled_50() { return &____tweenEnabled_50; }
	inline void set__tweenEnabled_50(bool value)
	{
		____tweenEnabled_50 = value;
	}

	inline static int32_t get_offset_of__tweenStart_51() { return static_cast<int32_t>(offsetof(Highlighter_t672210414, ____tweenStart_51)); }
	inline float get__tweenStart_51() const { return ____tweenStart_51; }
	inline float* get_address_of__tweenStart_51() { return &____tweenStart_51; }
	inline void set__tweenStart_51(float value)
	{
		____tweenStart_51 = value;
	}

	inline static int32_t get_offset_of__constantEnabled_52() { return static_cast<int32_t>(offsetof(Highlighter_t672210414, ____constantEnabled_52)); }
	inline bool get__constantEnabled_52() const { return ____constantEnabled_52; }
	inline bool* get_address_of__constantEnabled_52() { return &____constantEnabled_52; }
	inline void set__constantEnabled_52(bool value)
	{
		____constantEnabled_52 = value;
	}

	inline static int32_t get_offset_of__constantStart_53() { return static_cast<int32_t>(offsetof(Highlighter_t672210414, ____constantStart_53)); }
	inline float get__constantStart_53() const { return ____constantStart_53; }
	inline float* get_address_of__constantStart_53() { return &____constantStart_53; }
	inline void set__constantStart_53(float value)
	{
		____constantStart_53 = value;
	}

	inline static int32_t get_offset_of__constantDuration_54() { return static_cast<int32_t>(offsetof(Highlighter_t672210414, ____constantDuration_54)); }
	inline float get__constantDuration_54() const { return ____constantDuration_54; }
	inline float* get_address_of__constantDuration_54() { return &____constantDuration_54; }
	inline void set__constantDuration_54(float value)
	{
		____constantDuration_54 = value;
	}

	inline static int32_t get_offset_of_flashingColorKeys_55() { return static_cast<int32_t>(offsetof(Highlighter_t672210414, ___flashingColorKeys_55)); }
	inline GradientColorKeyU5BU5D_t4133731744* get_flashingColorKeys_55() const { return ___flashingColorKeys_55; }
	inline GradientColorKeyU5BU5D_t4133731744** get_address_of_flashingColorKeys_55() { return &___flashingColorKeys_55; }
	inline void set_flashingColorKeys_55(GradientColorKeyU5BU5D_t4133731744* value)
	{
		___flashingColorKeys_55 = value;
		Il2CppCodeGenWriteBarrier((&___flashingColorKeys_55), value);
	}

	inline static int32_t get_offset_of_flashingAlphaKeys_56() { return static_cast<int32_t>(offsetof(Highlighter_t672210414, ___flashingAlphaKeys_56)); }
	inline GradientAlphaKeyU5BU5D_t1986482519* get_flashingAlphaKeys_56() const { return ___flashingAlphaKeys_56; }
	inline GradientAlphaKeyU5BU5D_t1986482519** get_address_of_flashingAlphaKeys_56() { return &___flashingAlphaKeys_56; }
	inline void set_flashingAlphaKeys_56(GradientAlphaKeyU5BU5D_t1986482519* value)
	{
		___flashingAlphaKeys_56 = value;
		Il2CppCodeGenWriteBarrier((&___flashingAlphaKeys_56), value);
	}
};

struct Highlighter_t672210414_StaticFields
{
public:
	// HighlightingSystem.HighlighterCore/RendererFilter HighlightingSystem.Highlighter::<>f__mg$cache0
	RendererFilter_t73075700 * ___U3CU3Ef__mgU24cache0_57;
	// HighlightingSystem.HighlighterCore/RendererFilter HighlightingSystem.Highlighter::<>f__mg$cache1
	RendererFilter_t73075700 * ___U3CU3Ef__mgU24cache1_58;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_57() { return static_cast<int32_t>(offsetof(Highlighter_t672210414_StaticFields, ___U3CU3Ef__mgU24cache0_57)); }
	inline RendererFilter_t73075700 * get_U3CU3Ef__mgU24cache0_57() const { return ___U3CU3Ef__mgU24cache0_57; }
	inline RendererFilter_t73075700 ** get_address_of_U3CU3Ef__mgU24cache0_57() { return &___U3CU3Ef__mgU24cache0_57; }
	inline void set_U3CU3Ef__mgU24cache0_57(RendererFilter_t73075700 * value)
	{
		___U3CU3Ef__mgU24cache0_57 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_57), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_58() { return static_cast<int32_t>(offsetof(Highlighter_t672210414_StaticFields, ___U3CU3Ef__mgU24cache1_58)); }
	inline RendererFilter_t73075700 * get_U3CU3Ef__mgU24cache1_58() const { return ___U3CU3Ef__mgU24cache1_58; }
	inline RendererFilter_t73075700 ** get_address_of_U3CU3Ef__mgU24cache1_58() { return &___U3CU3Ef__mgU24cache1_58; }
	inline void set_U3CU3Ef__mgU24cache1_58(RendererFilter_t73075700 * value)
	{
		___U3CU3Ef__mgU24cache1_58 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_58), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIGHLIGHTER_T672210414_H
#ifndef HIGHLIGHTINGRENDERER_T1923179915_H
#define HIGHLIGHTINGRENDERER_T1923179915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightingSystem.HighlightingRenderer
struct  HighlightingRenderer_t1923179915  : public HighlightingBase_t582374880
{
public:
	// System.Collections.Generic.List`1<HighlightingSystem.HighlightingPreset> HighlightingSystem.HighlightingRenderer::_presets
	List_1_t2107694533 * ____presets_40;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<HighlightingSystem.HighlightingPreset> HighlightingSystem.HighlightingRenderer::_presetsReadonly
	ReadOnlyCollection_1_t1848196078 * ____presetsReadonly_41;

public:
	inline static int32_t get_offset_of__presets_40() { return static_cast<int32_t>(offsetof(HighlightingRenderer_t1923179915, ____presets_40)); }
	inline List_1_t2107694533 * get__presets_40() const { return ____presets_40; }
	inline List_1_t2107694533 ** get_address_of__presets_40() { return &____presets_40; }
	inline void set__presets_40(List_1_t2107694533 * value)
	{
		____presets_40 = value;
		Il2CppCodeGenWriteBarrier((&____presets_40), value);
	}

	inline static int32_t get_offset_of__presetsReadonly_41() { return static_cast<int32_t>(offsetof(HighlightingRenderer_t1923179915, ____presetsReadonly_41)); }
	inline ReadOnlyCollection_1_t1848196078 * get__presetsReadonly_41() const { return ____presetsReadonly_41; }
	inline ReadOnlyCollection_1_t1848196078 ** get_address_of__presetsReadonly_41() { return &____presetsReadonly_41; }
	inline void set__presetsReadonly_41(ReadOnlyCollection_1_t1848196078 * value)
	{
		____presetsReadonly_41 = value;
		Il2CppCodeGenWriteBarrier((&____presetsReadonly_41), value);
	}
};

struct HighlightingRenderer_t1923179915_StaticFields
{
public:
	// System.Collections.Generic.List`1<HighlightingSystem.HighlightingPreset> HighlightingSystem.HighlightingRenderer::defaultPresets
	List_1_t2107694533 * ___defaultPresets_39;

public:
	inline static int32_t get_offset_of_defaultPresets_39() { return static_cast<int32_t>(offsetof(HighlightingRenderer_t1923179915_StaticFields, ___defaultPresets_39)); }
	inline List_1_t2107694533 * get_defaultPresets_39() const { return ___defaultPresets_39; }
	inline List_1_t2107694533 ** get_address_of_defaultPresets_39() { return &___defaultPresets_39; }
	inline void set_defaultPresets_39(List_1_t2107694533 * value)
	{
		___defaultPresets_39 = value;
		Il2CppCodeGenWriteBarrier((&___defaultPresets_39), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIGHLIGHTINGRENDERER_T1923179915_H
// UnityEngine.GradientColorKey[]
struct GradientColorKeyU5BU5D_t4133731744  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GradientColorKey_t812552589  m_Items[1];

public:
	inline GradientColorKey_t812552589  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GradientColorKey_t812552589 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GradientColorKey_t812552589  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GradientColorKey_t812552589  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GradientColorKey_t812552589 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GradientColorKey_t812552589  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GradientAlphaKey[]
struct GradientAlphaKeyU5BU5D_t1986482519  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GradientAlphaKey_t2624742626  m_Items[1];

public:
	inline GradientAlphaKey_t2624742626  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GradientAlphaKey_t2624742626 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GradientAlphaKey_t2624742626  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GradientAlphaKey_t2624742626  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GradientAlphaKey_t2624742626 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GradientAlphaKey_t2624742626  value)
	{
		m_Items[index] = value;
	}
};
// HighlightingSystem.HighlighterMode[]
struct HighlighterModeU5BU5D_t1249767391  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_t561872642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Material_t340375123 * m_Items[1];

public:
	inline Material_t340375123 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t340375123 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t340375123 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Material_t340375123 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t340375123 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t340375123 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Shader[]
struct ShaderU5BU5D_t2047402361  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Shader_t4151988712 * m_Items[1];

public:
	inline Shader_t4151988712 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Shader_t4151988712 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Shader_t4151988712 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Shader_t4151988712 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Shader_t4151988712 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Shader_t4151988712 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m1044126538_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Remove_m1416767016_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1_RemoveAt_m2730968292_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m697420525_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<!0> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t4292682451 * List_1_AsReadOnly_m1069347492_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_m3491943679_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Contains_m2654125393_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_m3697625829_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m1913675517_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::GetComponents<System.Object>(System.Collections.Generic.List`1<!!0>)
extern "C" IL2CPP_METHOD_ATTR void GameObject_GetComponents_TisRuntimeObject_m992167009_gshared (GameObject_t1113636619 * __this, List_1_t257213610 * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_m2154023298_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void List_1_AddRange_m3513848896_gshared (List_1_t128053199 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(!0)
extern "C" IL2CPP_METHOD_ATTR void Stack_1_Push_m1669856732_gshared (Stack_1_t3923495619 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_m1599740434_gshared (Stack_1_t3923495619 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Stack_1_Pop_m756553478_gshared (Stack_1_t3923495619 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::Contains(!0)
extern "C" IL2CPP_METHOD_ATTR bool Stack_1_Contains_m1578348417_gshared (Stack_1_t3923495619 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m3947764094_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Stack_1__ctor_m3164958980_gshared (Stack_1_t3923495619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m1812987042_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m1628857705_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<HighlightingSystem.HighlighterRenderer/Data>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m158025881_gshared (List_1_t1906947814 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<HighlightingSystem.HighlighterRenderer/Data>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m3704470943_gshared (List_1_t1906947814 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<HighlightingSystem.HighlighterRenderer/Data>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Data_t434873072  List_1_get_Item_m2880296878_gshared (List_1_t1906947814 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<HighlightingSystem.HighlighterRenderer/Data>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_m1796798839_gshared (List_1_t1906947814 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m361000296_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m2299965312_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<HighlightingSystem.HighlighterRenderer/Data>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m2736528363_gshared (List_1_t1906947814 * __this, Data_t434873072  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void HashSet_1_Clear_m507835370_gshared (HashSet_1_t1645055638 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR bool HashSet_1_Add_m1971460364_gshared (HashSet_1_t1645055638 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(!0)
extern "C" IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m3173358704_gshared (HashSet_1_t1645055638 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HashSet_1__ctor_m4231804131_gshared (HashSet_1_t1645055638 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(!0)
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m2662756272_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<HighlightingSystem.HighlightingPreset>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m1684465584_gshared (List_1_t2107694533 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<!0> System.Collections.Generic.List`1<HighlightingSystem.HighlightingPreset>::AsReadOnly()
extern "C" IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t1848196078 * List_1_AsReadOnly_m2209084598_gshared (List_1_t2107694533 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<HighlightingSystem.HighlightingPreset>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR HighlightingPreset_t635619791  List_1_get_Item_m3008735210_gshared (List_1_t2107694533 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<HighlightingSystem.HighlightingPreset>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m3944991828_gshared (List_1_t2107694533 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<HighlightingSystem.HighlightingPreset>::set_Item(System.Int32,!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_set_Item_m3277764254_gshared (List_1_t2107694533 * __this, int32_t p0, HighlightingPreset_t635619791  p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<HighlightingSystem.HighlightingPreset>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3778980941_gshared (List_1_t2107694533 * __this, HighlightingPreset_t635619791  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<HighlightingSystem.HighlightingPreset>::RemoveAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1_RemoveAt_m3885651965_gshared (List_1_t2107694533 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<HighlightingSystem.HighlightingPreset>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_m3214370389_gshared (List_1_t2107694533 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<HighlightingSystem.HighlightingPreset>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2449748141_gshared (List_1_t2107694533 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m1381314187 (WaitForEndOfFrame_t1314943911 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<HighlightingSystem.EndOfFrame/OnEndOfFrame>::.ctor()
inline void List_1__ctor_m4022584956 (List_1_t4236248344 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4236248344 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_m2093116449 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern "C" IL2CPP_METHOD_ATTR void Object_set_hideFlags_m1648752846 (Object_t631007953 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<HighlightingSystem.EndOfFrame>()
inline EndOfFrame_t2825832094 * GameObject_AddComponent_TisEndOfFrame_t2825832094_m166707815 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  EndOfFrame_t2825832094 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m1044126538_gshared)(__this, method);
}
// System.Collections.IEnumerator HighlightingSystem.EndOfFrame::EndOfFrameRoutine()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* EndOfFrame_EndOfFrameRoutine_m3056526405 (EndOfFrame_t2825832094 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m907039165 (MonoBehaviour_t3962482529 * __this, Coroutine_t3829159415 * p0, const RuntimeMethod* method);
// HighlightingSystem.EndOfFrame HighlightingSystem.EndOfFrame::get_singleton()
extern "C" IL2CPP_METHOD_ATTR EndOfFrame_t2825832094 * EndOfFrame_get_singleton_m1870795744 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<HighlightingSystem.EndOfFrame/OnEndOfFrame>::Add(!0)
inline void List_1_Add_m2657470822 (List_1_t4236248344 * __this, OnEndOfFrame_t2764173602 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4236248344 *, OnEndOfFrame_t2764173602 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.List`1<HighlightingSystem.EndOfFrame/OnEndOfFrame>::Remove(!0)
inline bool List_1_Remove_m2774071532 (List_1_t4236248344 * __this, OnEndOfFrame_t2764173602 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t4236248344 *, OnEndOfFrame_t2764173602 *, const RuntimeMethod*))List_1_Remove_m1416767016_gshared)(__this, p0, method);
}
// System.Void HighlightingSystem.EndOfFrame/<EndOfFrameRoutine>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CEndOfFrameRoutineU3Ec__Iterator0__ctor_m2952852632 (U3CEndOfFrameRoutineU3Ec__Iterator0_t1448387516 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<HighlightingSystem.EndOfFrame/OnEndOfFrame>::get_Count()
inline int32_t List_1_get_Count_m2263445553 (List_1_t4236248344 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4236248344 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<HighlightingSystem.EndOfFrame/OnEndOfFrame>::get_Item(System.Int32)
inline OnEndOfFrame_t2764173602 * List_1_get_Item_m2126599964 (List_1_t4236248344 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  OnEndOfFrame_t2764173602 * (*) (List_1_t4236248344 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// System.Void HighlightingSystem.EndOfFrame/OnEndOfFrame::Invoke()
extern "C" IL2CPP_METHOD_ATTR void OnEndOfFrame_Invoke_m2013331024 (OnEndOfFrame_t2764173602 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<HighlightingSystem.EndOfFrame/OnEndOfFrame>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m849693794 (List_1_t4236248344 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4236248344 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m2730968292_gshared)(__this, p0, method);
}
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_red_m3227813939 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Gradient::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Gradient__ctor_m173848750 (Gradient_t3067099924 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Color__ctor_m2943235014 (Color_t2555686324 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Void UnityEngine.GradientColorKey::.ctor(UnityEngine.Color,System.Single)
extern "C" IL2CPP_METHOD_ATTR void GradientColorKey__ctor_m1007617986 (GradientColorKey_t812552589 * __this, Color_t2555686324  p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Gradient::set_colorKeys(UnityEngine.GradientColorKey[])
extern "C" IL2CPP_METHOD_ATTR void Gradient_set_colorKeys_m1596543139 (Gradient_t3067099924 * __this, GradientColorKeyU5BU5D_t4133731744* p0, const RuntimeMethod* method);
// System.Void UnityEngine.GradientAlphaKey::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void GradientAlphaKey__ctor_m1279830247 (GradientAlphaKey_t2624742626 * __this, float p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Gradient::set_alphaKeys(UnityEngine.GradientAlphaKey[])
extern "C" IL2CPP_METHOD_ATTR void Gradient_set_alphaKeys_m1940335915 (Gradient_t3067099924 * __this, GradientAlphaKeyU5BU5D_t1986482519* p0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_yellow()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_yellow_m1287957903 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_m925949354 (List_1_t777473367 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t777473367 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void HighlightingSystem.HighlighterCore::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HighlighterCore__ctor_m200611106 (HighlighterCore_t3117871998 * __this, const RuntimeMethod* method);
// System.Void HighlightingSystem.Highlighter::TweenSet(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_TweenSet_m2447418550 (Highlighter_t672210414 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void HighlightingSystem.Highlighter::ValidateRanges()
extern "C" IL2CPP_METHOD_ATTR void Highlighter_ValidateRanges_m3333118849 (Highlighter_t672210414 * __this, const RuntimeMethod* method);
// System.Single HighlightingSystem.Highlighter::GetTweenTime()
extern "C" IL2CPP_METHOD_ATTR float Highlighter_GetTweenTime_m3824541298 (Highlighter_t672210414 * __this, const RuntimeMethod* method);
// System.Void HighlightingSystem.Highlighter::ConstantSet(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_ConstantSet_m2418045208 (Highlighter_t672210414 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void HighlightingSystem.Highlighter::ConstantSet()
extern "C" IL2CPP_METHOD_ATTR void Highlighter_ConstantSet_m2206652421 (Highlighter_t672210414 * __this, const RuntimeMethod* method);
// System.Single HighlightingSystem.Highlighter::GetConstantTime()
extern "C" IL2CPP_METHOD_ATTR float Highlighter_GetConstantTime_m831727855 (Highlighter_t672210414 * __this, const RuntimeMethod* method);
// System.Void HighlightingSystem.HighlighterCore::SetDirty()
extern "C" IL2CPP_METHOD_ATTR void HighlighterCore_SetDirty_m1369823605 (HighlighterCore_t3117871998 * __this, const RuntimeMethod* method);
// HighlightingSystem.HighlighterCore/RendererFilter HighlightingSystem.HighlighterCore::get_rendererFilter()
extern "C" IL2CPP_METHOD_ATTR RendererFilter_t73075700 * HighlighterCore_get_rendererFilter_m2619316656 (HighlighterCore_t3117871998 * __this, const RuntimeMethod* method);
// HighlightingSystem.HighlighterCore/RendererFilter HighlightingSystem.HighlighterCore::get_globalRendererFilter()
extern "C" IL2CPP_METHOD_ATTR RendererFilter_t73075700 * HighlighterCore_get_globalRendererFilter_m1103506028 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void HighlightingSystem.HighlighterCore/RendererFilter::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void RendererFilter__ctor_m1988673961 (RendererFilter_t73075700 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Time::get_frameCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m1220035214 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Clamp01_m56433566 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method);
// System.Void HighlightingSystem.Highlighter::ValidateAll()
extern "C" IL2CPP_METHOD_ATTR void Highlighter_ValidateAll_m2299456659 (Highlighter_t672210414 * __this, const RuntimeMethod* method);
// System.Void HighlightingSystem.Highlighter::TweenSet()
extern "C" IL2CPP_METHOD_ATTR void Highlighter_TweenSet_m4000638643 (Highlighter_t672210414 * __this, const RuntimeMethod* method);
// System.Void HighlightingSystem.Highlighter::set_hover(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_set_hover_m3588790658 (Highlighter_t672210414 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void HighlightingSystem.Highlighter::ConstantSet(System.Single,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_ConstantSet_m1419569991 (Highlighter_t672210414 * __this, float ___fadeTime0, bool ___value1, const RuntimeMethod* method);
// System.Single HighlightingSystem.Highlighter::get_constantValue()
extern "C" IL2CPP_METHOD_ATTR float Highlighter_get_constantValue_m3011646541 (Highlighter_t672210414 * __this, const RuntimeMethod* method);
// System.Single HighlightingSystem.Highlighter::get_constantFadeInTime()
extern "C" IL2CPP_METHOD_ATTR float Highlighter_get_constantFadeInTime_m2897410839 (Highlighter_t672210414 * __this, const RuntimeMethod* method);
// System.Boolean HighlightingSystem.Highlighter::get_hover()
extern "C" IL2CPP_METHOD_ATTR bool Highlighter_get_hover_m1413188133 (Highlighter_t672210414 * __this, const RuntimeMethod* method);
// System.Single HighlightingSystem.Highlighter::Loop(System.Single,HighlightingSystem.LoopMode,System.Boolean,System.Int32)
extern "C" IL2CPP_METHOD_ATTR float Highlighter_Loop_m2912696432 (Highlighter_t672210414 * __this, float ___x0, int32_t ___loop1, bool ___reverse2, int32_t ___repeatCount3, const RuntimeMethod* method);
// System.Single HighlightingSystem.Highlighter::Ease(System.Single,HighlightingSystem.Easing)
extern "C" IL2CPP_METHOD_ATTR float Highlighter_Ease_m1049319965 (Highlighter_t672210414 * __this, float ___x0, int32_t ___easing1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Gradient::Evaluate(System.Single)
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Gradient_Evaluate_m1761152518 (Gradient_t3067099924 * __this, float p0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_t3600365921 * List_1_get_Item_m1853759484 (List_1_t777473367 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Transform_t3600365921 * (*) (List_1_t777473367 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// System.Boolean UnityEngine.Transform::IsChildOf(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR bool Transform_IsChildOf_m224006092 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_m697420525 (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_Add_m697420525_gshared)(__this, p0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_m3686671980 (List_1_t777473367 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t777473367 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m1870542928 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_unscaledTime_m3457564332 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
extern "C" IL2CPP_METHOD_ATTR float Time_get_time_m2907476221 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Max_m3146388979 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Min_m1073399594 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Color__ctor_m286683560 (Color_t2555686324 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void HighlightingSystem.Highlighter::Hover(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_Hover_m3025840679 (Highlighter_t672210414 * __this, Color_t2555686324  ___color0, const RuntimeMethod* method);
// System.Void UnityEngine.Gradient::SetKeys(UnityEngine.GradientColorKey[],UnityEngine.GradientAlphaKey[])
extern "C" IL2CPP_METHOD_ATTR void Gradient_SetKeys_m541963860 (Gradient_t3067099924 * __this, GradientColorKeyU5BU5D_t4133731744* p0, GradientAlphaKeyU5BU5D_t1986482519* p1, const RuntimeMethod* method);
// System.Boolean HighlightingSystem.Highlighter::get_tween()
extern "C" IL2CPP_METHOD_ATTR bool Highlighter_get_tween_m3115203341 (Highlighter_t672210414 * __this, const RuntimeMethod* method);
// System.Void HighlightingSystem.Highlighter::set_tween(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_set_tween_m1696351472 (Highlighter_t672210414 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_white_m332174077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<HighlightingSystem.HighlighterRenderer>::.ctor()
inline void List_1__ctor_m3303104186 (List_1_t3248237193 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3248237193 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_clear()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_clear_m1016382534 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<!0> System.Collections.Generic.List`1<HighlightingSystem.HighlighterCore>::AsReadOnly()
inline ReadOnlyCollection_1_t35480989 * List_1_AsReadOnly_m495744022 (List_1_t294979444 * __this, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_t35480989 * (*) (List_1_t294979444 *, const RuntimeMethod*))List_1_AsReadOnly_m1069347492_gshared)(__this, method);
}
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
extern "C" IL2CPP_METHOD_ATTR Shader_t4151988712 * Shader_Find_m2092206247 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Shader HighlightingSystem.HighlighterCore::get_opaqueShader()
extern "C" IL2CPP_METHOD_ATTR Shader_t4151988712 * HighlighterCore_get_opaqueShader_m700923225 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
extern "C" IL2CPP_METHOD_ATTR void Material__ctor_m1662457592 (Material_t340375123 * __this, Shader_t4151988712 * p0, const RuntimeMethod* method);
// System.Void HighlightingSystem.MaterialExtensions::SetKeyword(UnityEngine.Material,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MaterialExtensions_SetKeyword_m4077661988 (RuntimeObject * __this /* static, unused */, Material_t340375123 * ___material0, String_t* ___keyword1, bool ___state2, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetColor(System.Int32,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Material_SetColor_m355160541 (Material_t340375123 * __this, int32_t p0, Color_t2555686324  p1, const RuntimeMethod* method);
// System.Boolean System.Delegate::op_Inequality(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR bool Delegate_op_Inequality_m1112333615 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<HighlightingSystem.HighlighterCore>::get_Count()
inline int32_t List_1_get_Count_m3127650160 (List_1_t294979444 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t294979444 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<HighlightingSystem.HighlighterCore>::get_Item(System.Int32)
inline HighlighterCore_t3117871998 * List_1_get_Item_m1940249347 (List_1_t294979444 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  HighlighterCore_t3117871998 * (*) (List_1_t294979444 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<HighlightingSystem.HighlighterCore>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m1283052132 (List_1_t294979444 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t294979444 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m2730968292_gshared)(__this, p0, method);
}
// !!0 UnityEngine.Component::GetComponentInParent<HighlightingSystem.HighlighterBlocker>()
inline HighlighterBlocker_t3431127703 * Component_GetComponentInParent_TisHighlighterBlocker_t3431127703_m402451279 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  HighlighterBlocker_t3431127703 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m3491943679_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Transform>()
inline Transform_t3600365921 * Component_GetComponent_TisTransform_t3600365921_m1200784320 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Transform_t3600365921 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<HighlightingSystem.HighlighterCore>::Contains(!0)
inline bool List_1_Contains_m3854673 (List_1_t294979444 * __this, HighlighterCore_t3117871998 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t294979444 *, HighlighterCore_t3117871998 *, const RuntimeMethod*))List_1_Contains_m2654125393_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<HighlightingSystem.HighlighterCore>::Add(!0)
inline void List_1_Add_m3529949829 (List_1_t294979444 * __this, HighlighterCore_t3117871998 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t294979444 *, HighlighterCore_t3117871998 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.List`1<HighlightingSystem.HighlighterCore>::Remove(!0)
inline bool List_1_Remove_m3523975345 (List_1_t294979444 * __this, HighlighterCore_t3117871998 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t294979444 *, HighlighterCore_t3117871998 *, const RuntimeMethod*))List_1_Remove_m1416767016_gshared)(__this, p0, method);
}
// System.Void HighlightingSystem.HighlighterCore::ClearRenderers()
extern "C" IL2CPP_METHOD_ATTR void HighlighterCore_ClearRenderers_m3598559969 (HighlighterCore_t3117871998 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<HighlightingSystem.HighlighterRenderer>::get_Count()
inline int32_t List_1_get_Count_m2344231220 (List_1_t3248237193 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3248237193 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<HighlightingSystem.HighlighterRenderer>::get_Item(System.Int32)
inline HighlighterRenderer_t1776162451 * List_1_get_Item_m2229786729 (List_1_t3248237193 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  HighlighterRenderer_t1776162451 * (*) (List_1_t3248237193 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<HighlightingSystem.HighlighterRenderer>::Clear()
inline void List_1_Clear_m1664679213 (List_1_t3248237193 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3248237193 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method);
}
// System.Void HighlightingSystem.HighlighterCore::GrabRenderers(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void HighlighterCore_GrabRenderers_m2263268915 (HighlighterCore_t3117871998 * __this, Transform_t3600365921 * ___t0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<HighlightingSystem.HighlighterCore/RendererData>::get_Count()
inline int32_t List_1_get_Count_m3690354630 (List_1_t4221964195 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4221964195 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<HighlightingSystem.HighlighterCore/RendererData>::get_Item(System.Int32)
inline RendererData_t2749889453 * List_1_get_Item_m3191026567 (List_1_t4221964195 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  RendererData_t2749889453 * (*) (List_1_t4221964195 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<HighlightingSystem.HighlighterRenderer>()
inline HighlighterRenderer_t1776162451 * GameObject_GetComponent_TisHighlighterRenderer_t1776162451_m2503969283 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  HighlighterRenderer_t1776162451 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m1913675517_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<HighlightingSystem.HighlighterRenderer>()
inline HighlighterRenderer_t1776162451 * GameObject_AddComponent_TisHighlighterRenderer_t1776162451_m3971543210 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  HighlighterRenderer_t1776162451 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m1044126538_gshared)(__this, method);
}
// UnityEngine.Material HighlightingSystem.HighlighterCore::get_opaqueMaterial()
extern "C" IL2CPP_METHOD_ATTR Material_t340375123 * HighlighterCore_get_opaqueMaterial_m177517982 (HighlighterCore_t3117871998 * __this, const RuntimeMethod* method);
// UnityEngine.Shader HighlightingSystem.HighlighterCore::get_transparentShader()
extern "C" IL2CPP_METHOD_ATTR Shader_t4151988712 * HighlighterCore_get_transparentShader_m2954448632 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void HighlightingSystem.HighlighterRenderer::Initialize(UnityEngine.Material,UnityEngine.Shader,System.Collections.Generic.List`1<System.Int32>)
extern "C" IL2CPP_METHOD_ATTR void HighlighterRenderer_Initialize_m4000817202 (HighlighterRenderer_t1776162451 * __this, Material_t340375123 * ___sharedOpaqueMaterial0, Shader_t4151988712 * ___transparentShader1, List_1_t128053199 * ___submeshIndices2, const RuntimeMethod* method);
// System.Void HighlightingSystem.HighlighterRenderer::SetOverlay(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void HighlighterRenderer_SetOverlay_m3780154417 (HighlighterRenderer_t1776162451 * __this, bool ___overlay0, const RuntimeMethod* method);
// System.Void HighlightingSystem.HighlighterRenderer::SetColor(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void HighlighterRenderer_SetColor_m4264849022 (HighlighterRenderer_t1776162451 * __this, Color_t2555686324  ___clr0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<HighlightingSystem.HighlighterRenderer>::Add(!0)
inline void List_1_Add_m2838435910 (List_1_t3248237193 * __this, HighlighterRenderer_t1776162451 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3248237193 *, HighlighterRenderer_t1776162451 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void HighlightingSystem.HighlighterCore::ReleaseRendererDataInstance(HighlightingSystem.HighlighterCore/RendererData)
extern "C" IL2CPP_METHOD_ATTR void HighlighterCore_ReleaseRendererDataInstance_m2925833157 (RuntimeObject * __this /* static, unused */, RendererData_t2749889453 * ___instance0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<HighlightingSystem.HighlighterCore/RendererData>::Clear()
inline void List_1_Clear_m3990828994 (List_1_t4221964195 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4221964195 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::GetComponents<UnityEngine.Renderer>(System.Collections.Generic.List`1<!!0>)
inline void GameObject_GetComponents_TisRenderer_t2627027031_m3789954343 (GameObject_t1113636619 * __this, List_1_t4099101773 * p0, const RuntimeMethod* method)
{
	((  void (*) (GameObject_t1113636619 *, List_1_t4099101773 *, const RuntimeMethod*))GameObject_GetComponents_TisRuntimeObject_m992167009_gshared)(__this, p0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Renderer>::get_Count()
inline int32_t List_1_get_Count_m754083996 (List_1_t4099101773 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4099101773 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Renderer>::get_Item(System.Int32)
inline Renderer_t2627027031 * List_1_get_Item_m4193176438 (List_1_t4099101773 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Renderer_t2627027031 * (*) (List_1_t4099101773 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// System.Boolean HighlightingSystem.HighlighterCore/RendererFilter::Invoke(UnityEngine.Renderer,System.Collections.Generic.List`1<System.Int32>)
extern "C" IL2CPP_METHOD_ATTR bool RendererFilter_Invoke_m3812187708 (RendererFilter_t73075700 * __this, Renderer_t2627027031 * ___renderer0, List_1_t128053199 * ___submeshIndices1, const RuntimeMethod* method);
// HighlightingSystem.HighlighterCore/RendererData HighlightingSystem.HighlighterCore::GetRendererDataInstance()
extern "C" IL2CPP_METHOD_ATTR RendererData_t2749889453 * HighlighterCore_GetRendererDataInstance_m2663844405 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_m2154023298 (List_1_t128053199 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t128053199 *, const RuntimeMethod*))List_1_Clear_m2154023298_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m3513848896 (List_1_t128053199 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t128053199 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m3513848896_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<HighlightingSystem.HighlighterCore/RendererData>::Add(!0)
inline void List_1_Add_m3262131300 (List_1_t4221964195 * __this, RendererData_t2749889453 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4221964195 *, RendererData_t2749889453 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Renderer>::Clear()
inline void List_1_Clear_m710377627 (List_1_t4099101773 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4099101773 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method);
}
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_m3145433196 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Transform_GetChild_m1092972975 (Transform_t3600365921 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<HighlightingSystem.HighlighterCore>()
inline HighlighterCore_t3117871998 * Component_GetComponent_TisHighlighterCore_t3117871998_m87733586 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  HighlighterCore_t3117871998 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Boolean UnityEngine.Color::op_Inequality(UnityEngine.Color,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR bool Color_op_Inequality_m3353772181 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, Color_t2555686324  p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<HighlightingSystem.HighlighterRenderer>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m1807562073 (List_1_t3248237193 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3248237193 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m2730968292_gshared)(__this, p0, method);
}
// System.Boolean HighlightingSystem.HighlighterRenderer::IsValid()
extern "C" IL2CPP_METHOD_ATTR bool HighlighterRenderer_IsValid_m3378537367 (HighlighterRenderer_t1776162451 * __this, const RuntimeMethod* method);
// System.Boolean HighlightingSystem.HighlightingBase::GetVisible(HighlightingSystem.HighlighterRenderer)
extern "C" IL2CPP_METHOD_ATTR bool HighlightingBase_GetVisible_m1401607538 (RuntimeObject * __this /* static, unused */, HighlighterRenderer_t1776162451 * ___renderer0, const RuntimeMethod* method);
// System.Void HighlightingSystem.HighlighterRenderer::FillBuffer(UnityEngine.Rendering.CommandBuffer)
extern "C" IL2CPP_METHOD_ATTR void HighlighterRenderer_FillBuffer_m3166186691 (HighlighterRenderer_t1776162451 * __this, CommandBuffer_t2206337031 * ___buffer0, const RuntimeMethod* method);
// System.Void HighlightingSystem.HighlighterCore/RendererData::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RendererData__ctor_m894171524 (RendererData_t2749889453 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<HighlightingSystem.HighlighterCore/RendererData>::Push(!0)
inline void Stack_1_Push_m3773727479 (Stack_1_t3593278908 * __this, RendererData_t2749889453 * p0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3593278908 *, RendererData_t2749889453 *, const RuntimeMethod*))Stack_1_Push_m1669856732_gshared)(__this, p0, method);
}
// System.Int32 System.Collections.Generic.Stack`1<HighlightingSystem.HighlighterCore/RendererData>::get_Count()
inline int32_t Stack_1_get_Count_m4233368765 (Stack_1_t3593278908 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t3593278908 *, const RuntimeMethod*))Stack_1_get_Count_m1599740434_gshared)(__this, method);
}
// System.Void HighlightingSystem.HighlighterCore::ExpandRendererDataPool(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void HighlighterCore_ExpandRendererDataPool_m543965256 (RuntimeObject * __this /* static, unused */, int32_t ___count0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<HighlightingSystem.HighlighterCore/RendererData>::Pop()
inline RendererData_t2749889453 * Stack_1_Pop_m117725505 (Stack_1_t3593278908 * __this, const RuntimeMethod* method)
{
	return ((  RendererData_t2749889453 * (*) (Stack_1_t3593278908 *, const RuntimeMethod*))Stack_1_Pop_m756553478_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Stack`1<HighlightingSystem.HighlighterCore/RendererData>::Contains(!0)
inline bool Stack_1_Contains_m1656087833 (Stack_1_t3593278908 * __this, RendererData_t2749889453 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Stack_1_t3593278908 *, RendererData_t2749889453 *, const RuntimeMethod*))Stack_1_Contains_m1578348417_gshared)(__this, p0, method);
}
// System.Void HighlightingSystem.HighlighterCore::UpdateRenderers()
extern "C" IL2CPP_METHOD_ATTR void HighlighterCore_UpdateRenderers_m865281105 (HighlighterCore_t3117871998 * __this, const RuntimeMethod* method);
// System.Void HighlightingSystem.HighlighterCore::FillBufferInternal(UnityEngine.Rendering.CommandBuffer)
extern "C" IL2CPP_METHOD_ATTR void HighlighterCore_FillBufferInternal_m3415534260 (HighlighterCore_t3117871998 * __this, CommandBuffer_t2206337031 * ___buffer0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Renderer>::.ctor(System.Int32)
inline void List_1__ctor_m2755110883 (List_1_t4099101773 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4099101773 *, int32_t, const RuntimeMethod*))List_1__ctor_m3947764094_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.Stack`1<HighlightingSystem.HighlighterCore/RendererData>::.ctor()
inline void Stack_1__ctor_m3269555132 (Stack_1_t3593278908 * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3593278908 *, const RuntimeMethod*))Stack_1__ctor_m3164958980_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<HighlightingSystem.HighlighterCore/RendererData>::.ctor(System.Int32)
inline void List_1__ctor_m511393646 (List_1_t4221964195 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4221964195 *, int32_t, const RuntimeMethod*))List_1__ctor_m3947764094_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
inline void List_1__ctor_m1812987042 (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1__ctor_m1812987042_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<HighlightingSystem.HighlighterCore>::.ctor()
inline void List_1__ctor_m1138541799 (List_1_t294979444 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t294979444 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m1628857705 (List_1_t128053199 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t128053199 *, const RuntimeMethod*))List_1__ctor_m1628857705_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<HighlightingSystem.HighlighterRenderer/Data>::.ctor()
inline void List_1__ctor_m158025881 (List_1_t1906947814 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1906947814 *, const RuntimeMethod*))List_1__ctor_m158025881_gshared)(__this, method);
}
// System.Void HighlightingSystem.EndOfFrame/OnEndOfFrame::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnEndOfFrame__ctor_m2041741679 (OnEndOfFrame_t2764173602 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void HighlightingSystem.EndOfFrame::AddListener(HighlightingSystem.EndOfFrame/OnEndOfFrame)
extern "C" IL2CPP_METHOD_ATTR void EndOfFrame_AddListener_m498318113 (RuntimeObject * __this /* static, unused */, OnEndOfFrame_t2764173602 * ___listener0, const RuntimeMethod* method);
// System.Void HighlightingSystem.EndOfFrame::RemoveListener(HighlightingSystem.EndOfFrame/OnEndOfFrame)
extern "C" IL2CPP_METHOD_ATTR void EndOfFrame_RemoveListener_m3756592840 (RuntimeObject * __this /* static, unused */, OnEndOfFrame_t2764173602 * ___listener0, const RuntimeMethod* method);
// System.Void HighlightingSystem.HighlightingBase::SetVisible(HighlightingSystem.HighlighterRenderer)
extern "C" IL2CPP_METHOD_ATTR void HighlightingBase_SetVisible_m4170048733 (RuntimeObject * __this /* static, unused */, HighlighterRenderer_t1776162451 * ___renderer0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<HighlightingSystem.HighlighterRenderer/Data>::get_Count()
inline int32_t List_1_get_Count_m3704470943 (List_1_t1906947814 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1906947814 *, const RuntimeMethod*))List_1_get_Count_m3704470943_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<HighlightingSystem.HighlighterRenderer/Data>::get_Item(System.Int32)
inline Data_t434873072  List_1_get_Item_m2880296878 (List_1_t1906947814 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Data_t434873072  (*) (List_1_t1906947814 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2880296878_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<HighlightingSystem.HighlighterRenderer/Data>::Clear()
inline void List_1_Clear_m1796798839 (List_1_t1906947814 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1906947814 *, const RuntimeMethod*))List_1_Clear_m1796798839_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t2627027031 * Component_GetComponent_TisRenderer_t2627027031_m2057483985 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t2627027031 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// UnityEngine.Material[] UnityEngine.Renderer::get_sharedMaterials()
extern "C" IL2CPP_METHOD_ATTR MaterialU5BU5D_t561872642* Renderer_get_sharedMaterials_m76747498 (Renderer_t2627027031 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_m361000296 (List_1_t128053199 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t128053199 *, const RuntimeMethod*))List_1_get_Count_m361000296_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_m2299965312 (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2299965312_gshared)(__this, p0, method);
}
// System.String UnityEngine.Material::GetTag(System.String,System.Boolean,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Material_GetTag_m211081835 (Material_t340375123 * __this, String_t* p0, bool p1, String_t* p2, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetInt(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Material_SetInt_m475299667 (Material_t340375123 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Material::HasProperty(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Material_HasProperty_m1904868334 (Material_t340375123 * __this, int32_t p0, const RuntimeMethod* method);
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
extern "C" IL2CPP_METHOD_ATTR Texture_t3661962703 * Material_get_mainTexture_m692510677 (Material_t340375123 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTexture(System.Int32,UnityEngine.Texture)
extern "C" IL2CPP_METHOD_ATTR void Material_SetTexture_m3009528825 (Material_t340375123 * __this, int32_t p0, Texture_t3661962703 * p1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Material::get_mainTextureOffset()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Material_get_mainTextureOffset_m87785737 (Material_t340375123 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTextureOffset(System.String,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void Material_SetTextureOffset_m2380336123 (Material_t340375123 * __this, String_t* p0, Vector2_t2156229523  p1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Material::get_mainTextureScale()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Material_get_mainTextureScale_m3327734729 (Material_t340375123 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTextureScale(System.String,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void Material_SetTextureScale_m1562018726 (Material_t340375123 * __this, String_t* p0, Vector2_t2156229523  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Material::GetFloat(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float Material_GetFloat_m2836278142 (Material_t340375123 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Material_SetFloat_m1688718093 (Material_t340375123 * __this, int32_t p0, float p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<HighlightingSystem.HighlighterRenderer/Data>::Add(!0)
inline void List_1_Add_m2736528363 (List_1_t1906947814 * __this, Data_t434873072  p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1906947814 *, Data_t434873072 , const RuntimeMethod*))List_1_Add_m2736528363_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Rendering.CommandBuffer::DrawRenderer(UnityEngine.Renderer,UnityEngine.Material,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void CommandBuffer_DrawRenderer_m3443435044 (CommandBuffer_t2206337031 * __this, Renderer_t2627027031 * p0, Material_t340375123 * p1, int32_t p2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C" IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m100394690 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void HighlightingSystem.HighlightingBase::Initialize()
extern "C" IL2CPP_METHOD_ATTR void HighlightingBase_Initialize_m1939947958 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m20417929 (Behaviour_t1437897464 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.RenderTargetIdentifier::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RenderTargetIdentifier__ctor_m4072422479 (RenderTargetIdentifier_t2079184500 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void Material__ctor_m249231841 (Material_t340375123 * __this, Material_t340375123 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CommandBuffer__ctor_m3028411456 (CommandBuffer_t2206337031 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::set_name(System.String)
extern "C" IL2CPP_METHOD_ATTR void CommandBuffer_set_name_m1839128424 (CommandBuffer_t2206337031 * __this, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_t4157153871 * Component_GetComponent_TisCamera_t4157153871_m1557787507 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Camera_t4157153871 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// UnityEngine.DepthTextureMode UnityEngine.Camera::get_depthTextureMode()
extern "C" IL2CPP_METHOD_ATTR int32_t Camera_get_depthTextureMode_m871144641 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)
extern "C" IL2CPP_METHOD_ATTR void Camera_set_depthTextureMode_m754977860 (Camera_t4157153871 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::AddCommandBuffer(UnityEngine.Rendering.CameraEvent,UnityEngine.Rendering.CommandBuffer)
extern "C" IL2CPP_METHOD_ATTR void Camera_AddCommandBuffer_m1363239337 (Camera_t4157153871 * __this, int32_t p0, CommandBuffer_t2206337031 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::RemoveCommandBuffer(UnityEngine.Rendering.CameraEvent,UnityEngine.Rendering.CommandBuffer)
extern "C" IL2CPP_METHOD_ATTR void Camera_RemoveCommandBuffer_m773243127 (Camera_t4157153871 * __this, int32_t p0, CommandBuffer_t2206337031 * p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.RenderTexture::IsCreated()
extern "C" IL2CPP_METHOD_ATTR bool RenderTexture_IsCreated_m1088809752 (RenderTexture_t2108887433 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::Release()
extern "C" IL2CPP_METHOD_ATTR void RenderTexture_Release_m1749927881 (RenderTexture_t2108887433 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<HighlightingSystem.HighlighterRenderer>::Clear()
inline void HashSet_1_Clear_m2623112546 (HashSet_1_t341111925 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t341111925 *, const RuntimeMethod*))HashSet_1_Clear_m507835370_gshared)(__this, method);
}
// System.Void UnityEngine.RenderTexture::.ctor(UnityEngine.RenderTextureDescriptor)
extern "C" IL2CPP_METHOD_ATTR void RenderTexture__ctor_m339910950 (RenderTexture_t2108887433 * __this, RenderTextureDescriptor_t1974534975  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
extern "C" IL2CPP_METHOD_ATTR void Texture_set_filterMode_m3078068058 (Texture_t3661962703 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
extern "C" IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m587872754 (Texture_t3661962703 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.RenderTexture::Create()
extern "C" IL2CPP_METHOD_ATTR bool RenderTexture_Create_m2861863713 (RenderTexture_t2108887433 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.RenderTargetIdentifier::.ctor(UnityEngine.Texture)
extern "C" IL2CPP_METHOD_ATTR void RenderTargetIdentifier__ctor_m2966131472 (RenderTargetIdentifier_t2079184500 * __this, Texture_t3661962703 * p0, const RuntimeMethod* method);
// HighlightingSystem.HighlightingBlitter HighlightingSystem.HighlightingBase::get_blitter()
extern "C" IL2CPP_METHOD_ATTR HighlightingBlitter_t1505432117 * HighlightingBase_get_blitter_m1056088580 (HighlightingBase_t582374880 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void Graphics_Blit_m1336850842 (RuntimeObject * __this /* static, unused */, Texture_t3661962703 * p0, RenderTexture_t2108887433 * p1, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_current()
extern "C" IL2CPP_METHOD_ATTR Camera_t4157153871 * Camera_get_current_m929992396 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<HighlightingSystem.HighlighterRenderer>::Add(!0)
inline bool HashSet_1_Add_m2525925358 (HashSet_1_t341111925 * __this, HighlighterRenderer_t1776162451 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t341111925 *, HighlighterRenderer_t1776162451 *, const RuntimeMethod*))HashSet_1_Add_m1971460364_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<HighlightingSystem.HighlighterRenderer>::Contains(!0)
inline bool HashSet_1_Contains_m2048367682 (HashSet_1_t341111925 * __this, HighlighterRenderer_t1776162451 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t341111925 *, HighlighterRenderer_t1776162451 *, const RuntimeMethod*))HashSet_1_Contains_m3173358704_gshared)(__this, p0, method);
}
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
extern "C" IL2CPP_METHOD_ATTR RenderTexture_t2108887433 * Camera_get_targetTexture_m2278634983 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// UnityEngine.RenderTextureDescriptor UnityEngine.RenderTexture::get_descriptor()
extern "C" IL2CPP_METHOD_ATTR RenderTextureDescriptor_t1974534975  RenderTexture_get_descriptor_m722729156 (RenderTexture_t2108887433 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRSettings::get_enabled()
extern "C" IL2CPP_METHOD_ATTR bool XRSettings_get_enabled_m2032436980 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.RenderTextureDescriptor UnityEngine.XR.XRSettings::get_eyeTextureDesc()
extern "C" IL2CPP_METHOD_ATTR RenderTextureDescriptor_t1974534975  XRSettings_get_eyeTextureDesc_m4145342175 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 UnityEngine.Camera::get_pixelWidth()
extern "C" IL2CPP_METHOD_ATTR int32_t Camera_get_pixelWidth_m1110053668 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Camera::get_pixelHeight()
extern "C" IL2CPP_METHOD_ATTR int32_t Camera_get_pixelHeight_m722276884 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTextureDescriptor::.ctor(System.Int32,System.Int32,UnityEngine.RenderTextureFormat,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RenderTextureDescriptor__ctor_m505960146 (RenderTextureDescriptor_t1974534975 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTextureDescriptor::set_colorFormat(UnityEngine.RenderTextureFormat)
extern "C" IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_colorFormat_m3409821771 (RenderTextureDescriptor_t1974534975 * __this, int32_t p0, const RuntimeMethod* method);
// UnityEngine.ColorSpace UnityEngine.QualitySettings::get_activeColorSpace()
extern "C" IL2CPP_METHOD_ATTR int32_t QualitySettings_get_activeColorSpace_m2902748248 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTextureDescriptor::set_sRGB(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_sRGB_m1977654705 (RenderTextureDescriptor_t1974534975 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTextureDescriptor::set_useMipMap(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_useMipMap_m370486336 (RenderTextureDescriptor_t1974534975 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTextureDescriptor::set_msaaSamples(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_msaaSamples_m2884263852 (RenderTextureDescriptor_t1974534975 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.RenderTextureDescriptor::get_width()
extern "C" IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_width_m26344548 (RenderTextureDescriptor_t1974534975 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.RenderTextureDescriptor::get_height()
extern "C" IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_height_m1891977024 (RenderTextureDescriptor_t1974534975 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.RenderTextureDescriptor::get_msaaSamples()
extern "C" IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_msaaSamples_m2437860573 (RenderTextureDescriptor_t1974534975 * __this, const RuntimeMethod* method);
// UnityEngine.RenderingPath UnityEngine.Camera::get_actualRenderingPath()
extern "C" IL2CPP_METHOD_ATTR int32_t Camera_get_actualRenderingPath_m423069678 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.QualitySettings::get_antiAliasing()
extern "C" IL2CPP_METHOD_ATTR int32_t QualitySettings_get_antiAliasing_m1365131962 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 UnityEngine.RenderTexture::get_antiAliasing()
extern "C" IL2CPP_METHOD_ATTR int32_t RenderTexture_get_antiAliasing_m302596907 (RenderTexture_t2108887433 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SystemInfo::get_supportsImageEffects()
extern "C" IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsImageEffects_m2886934848 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.SystemInfo::SupportsRenderTextureFormat(UnityEngine.RenderTextureFormat)
extern "C" IL2CPP_METHOD_ATTR bool SystemInfo_SupportsRenderTextureFormat_m1663449629 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Shader::get_isSupported()
extern "C" IL2CPP_METHOD_ATTR bool Shader_get_isSupported_m755080316 (Shader_t4151988712 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* Object_get_name_m4211327027 (Object_t631007953 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::Clear()
extern "C" IL2CPP_METHOD_ATTR void CommandBuffer_Clear_m3260707516 (CommandBuffer_t2206337031 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::BeginSample(System.String)
extern "C" IL2CPP_METHOD_ATTR void CommandBuffer_BeginSample_m204508461 (CommandBuffer_t2206337031 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::SetRenderTarget(UnityEngine.Rendering.RenderTargetIdentifier)
extern "C" IL2CPP_METHOD_ATTR void CommandBuffer_SetRenderTarget_m2373313166 (CommandBuffer_t2206337031 * __this, RenderTargetIdentifier_t2079184500  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::ClearRenderTarget(System.Boolean,System.Boolean,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void CommandBuffer_ClearRenderTarget_m1436931375 (CommandBuffer_t2206337031 * __this, bool p0, bool p1, Color_t2555686324  p2, const RuntimeMethod* method);
// System.Void HighlightingSystem.HighlighterCore::FillBuffer(UnityEngine.Rendering.CommandBuffer)
extern "C" IL2CPP_METHOD_ATTR void HighlighterCore_FillBuffer_m3144797772 (RuntimeObject * __this /* static, unused */, CommandBuffer_t2206337031 * ___buffer0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTextureDescriptor::set_width(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_width_m2491653054 (RenderTextureDescriptor_t1974534975 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTextureDescriptor::set_height(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_height_m2134913371 (RenderTextureDescriptor_t1974534975 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTextureDescriptor::set_depthBufferBits(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_depthBufferBits_m2738180586 (RenderTextureDescriptor_t1974534975 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::GetTemporaryRT(System.Int32,UnityEngine.RenderTextureDescriptor,UnityEngine.FilterMode)
extern "C" IL2CPP_METHOD_ATTR void CommandBuffer_GetTemporaryRT_m2908861421 (CommandBuffer_t2206337031 * __this, int32_t p0, RenderTextureDescriptor_t1974534975  p1, int32_t p2, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::Blit(UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier)
extern "C" IL2CPP_METHOD_ATTR void CommandBuffer_Blit_m1393847922 (CommandBuffer_t2206337031 * __this, RenderTargetIdentifier_t2079184500  p0, RenderTargetIdentifier_t2079184500  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalFloat(System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void CommandBuffer_SetGlobalFloat_m4256468291 (CommandBuffer_t2206337031 * __this, int32_t p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::Blit(UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void CommandBuffer_Blit_m440086202 (CommandBuffer_t2206337031 * __this, RenderTargetIdentifier_t2079184500  p0, RenderTargetIdentifier_t2079184500  p1, Material_t340375123 * p2, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::ReleaseTemporaryRT(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void CommandBuffer_ReleaseTemporaryRT_m2627662573 (CommandBuffer_t2206337031 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::EndSample(System.String)
extern "C" IL2CPP_METHOD_ATTR void CommandBuffer_EndSample_m536251891 (CommandBuffer_t2206337031 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void Graphics_Blit_m890955694 (RuntimeObject * __this /* static, unused */, Texture_t3661962703 * p0, RenderTexture_t2108887433 * p1, Material_t340375123 * p2, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t1817901843  Matrix4x4_get_identity_m1406790249 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<HighlightingSystem.HighlighterRenderer>::.ctor()
inline void HashSet_1__ctor_m301462680 (HashSet_1_t341111925 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t341111925 *, const RuntimeMethod*))HashSet_1__ctor_m4231804131_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<HighlightingSystem.HighlightingBase>::.ctor()
inline void List_1__ctor_m2379666983 (List_1_t2054449622 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2054449622 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<HighlightingSystem.HighlightingBase>::get_Item(System.Int32)
inline HighlightingBase_t582374880 * List_1_get_Item_m3623705544 (List_1_t2054449622 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  HighlightingBase_t582374880 * (*) (List_1_t2054449622 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// System.Int32 System.Collections.Generic.List`1<HighlightingSystem.HighlightingBase>::get_Count()
inline int32_t List_1_get_Count_m1560982368 (List_1_t2054449622 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2054449622 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<HighlightingSystem.HighlightingBase>::Contains(!0)
inline bool List_1_Contains_m2616101103 (List_1_t2054449622 * __this, HighlightingBase_t582374880 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t2054449622 *, HighlightingBase_t582374880 *, const RuntimeMethod*))List_1_Contains_m2654125393_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<HighlightingSystem.HighlightingBase>::Add(!0)
inline void List_1_Add_m209993823 (List_1_t2054449622 * __this, HighlightingBase_t582374880 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2054449622 *, HighlightingBase_t582374880 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Int32 System.Collections.Generic.List`1<HighlightingSystem.HighlightingBase>::IndexOf(!0)
inline int32_t List_1_IndexOf_m1028121169 (List_1_t2054449622 * __this, HighlightingBase_t582374880 * p0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2054449622 *, HighlightingBase_t582374880 *, const RuntimeMethod*))List_1_IndexOf_m2662756272_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<HighlightingSystem.HighlightingBase>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m437886299 (List_1_t2054449622 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2054449622 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m2730968292_gshared)(__this, p0, method);
}
// System.String HighlightingSystem.HighlightingPreset::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* HighlightingPreset_get_name_m2442625189 (HighlightingPreset_t635619791 * __this, const RuntimeMethod* method);
// System.Void HighlightingSystem.HighlightingPreset::set_name(System.String)
extern "C" IL2CPP_METHOD_ATTR void HighlightingPreset_set_name_m3652595480 (HighlightingPreset_t635619791 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Single HighlightingSystem.HighlightingPreset::get_fillAlpha()
extern "C" IL2CPP_METHOD_ATTR float HighlightingPreset_get_fillAlpha_m4098226882 (HighlightingPreset_t635619791 * __this, const RuntimeMethod* method);
// System.Void HighlightingSystem.HighlightingPreset::set_fillAlpha(System.Single)
extern "C" IL2CPP_METHOD_ATTR void HighlightingPreset_set_fillAlpha_m2992891845 (HighlightingPreset_t635619791 * __this, float ___value0, const RuntimeMethod* method);
// System.Int32 HighlightingSystem.HighlightingPreset::get_downsampleFactor()
extern "C" IL2CPP_METHOD_ATTR int32_t HighlightingPreset_get_downsampleFactor_m584427446 (HighlightingPreset_t635619791 * __this, const RuntimeMethod* method);
// System.Void HighlightingSystem.HighlightingPreset::set_downsampleFactor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void HighlightingPreset_set_downsampleFactor_m2267913048 (HighlightingPreset_t635619791 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 HighlightingSystem.HighlightingPreset::get_iterations()
extern "C" IL2CPP_METHOD_ATTR int32_t HighlightingPreset_get_iterations_m916685867 (HighlightingPreset_t635619791 * __this, const RuntimeMethod* method);
// System.Void HighlightingSystem.HighlightingPreset::set_iterations(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void HighlightingPreset_set_iterations_m2768683975 (HighlightingPreset_t635619791 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Single HighlightingSystem.HighlightingPreset::get_blurMinSpread()
extern "C" IL2CPP_METHOD_ATTR float HighlightingPreset_get_blurMinSpread_m3148680741 (HighlightingPreset_t635619791 * __this, const RuntimeMethod* method);
// System.Void HighlightingSystem.HighlightingPreset::set_blurMinSpread(System.Single)
extern "C" IL2CPP_METHOD_ATTR void HighlightingPreset_set_blurMinSpread_m2462936007 (HighlightingPreset_t635619791 * __this, float ___value0, const RuntimeMethod* method);
// System.Single HighlightingSystem.HighlightingPreset::get_blurSpread()
extern "C" IL2CPP_METHOD_ATTR float HighlightingPreset_get_blurSpread_m98452518 (HighlightingPreset_t635619791 * __this, const RuntimeMethod* method);
// System.Void HighlightingSystem.HighlightingPreset::set_blurSpread(System.Single)
extern "C" IL2CPP_METHOD_ATTR void HighlightingPreset_set_blurSpread_m4014750025 (HighlightingPreset_t635619791 * __this, float ___value0, const RuntimeMethod* method);
// System.Single HighlightingSystem.HighlightingPreset::get_blurIntensity()
extern "C" IL2CPP_METHOD_ATTR float HighlightingPreset_get_blurIntensity_m1570413397 (HighlightingPreset_t635619791 * __this, const RuntimeMethod* method);
// System.Void HighlightingSystem.HighlightingPreset::set_blurIntensity(System.Single)
extern "C" IL2CPP_METHOD_ATTR void HighlightingPreset_set_blurIntensity_m737297107 (HighlightingPreset_t635619791 * __this, float ___value0, const RuntimeMethod* method);
// HighlightingSystem.BlurDirections HighlightingSystem.HighlightingPreset::get_blurDirections()
extern "C" IL2CPP_METHOD_ATTR int32_t HighlightingPreset_get_blurDirections_m2320407461 (HighlightingPreset_t635619791 * __this, const RuntimeMethod* method);
// System.Void HighlightingSystem.HighlightingPreset::set_blurDirections(HighlightingSystem.BlurDirections)
extern "C" IL2CPP_METHOD_ATTR void HighlightingPreset_set_blurDirections_m1483946675 (HighlightingPreset_t635619791 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean HighlightingSystem.HighlightingPreset::System.IEquatable<HighlightingSystem.HighlightingPreset>.Equals(HighlightingSystem.HighlightingPreset)
extern "C" IL2CPP_METHOD_ATTR bool HighlightingPreset_System_IEquatableU3CHighlightingSystem_HighlightingPresetU3E_Equals_m9867215 (HighlightingPreset_t635619791 * __this, HighlightingPreset_t635619791  ___other0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<HighlightingSystem.HighlightingPreset>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m1684465584 (List_1_t2107694533 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2107694533 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1684465584_gshared)(__this, p0, method);
}
// System.Void HighlightingSystem.HighlightingBase::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HighlightingBase__ctor_m505259048 (HighlightingBase_t582374880 * __this, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<!0> System.Collections.Generic.List`1<HighlightingSystem.HighlightingPreset>::AsReadOnly()
inline ReadOnlyCollection_1_t1848196078 * List_1_AsReadOnly_m2209084598 (List_1_t2107694533 * __this, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_t1848196078 * (*) (List_1_t2107694533 *, const RuntimeMethod*))List_1_AsReadOnly_m2209084598_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<HighlightingSystem.HighlightingPreset>::get_Item(System.Int32)
inline HighlightingPreset_t635619791  List_1_get_Item_m3008735210 (List_1_t2107694533 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  HighlightingPreset_t635619791  (*) (List_1_t2107694533 *, int32_t, const RuntimeMethod*))List_1_get_Item_m3008735210_gshared)(__this, p0, method);
}
// System.Int32 System.Collections.Generic.List`1<HighlightingSystem.HighlightingPreset>::get_Count()
inline int32_t List_1_get_Count_m3944991828 (List_1_t2107694533 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2107694533 *, const RuntimeMethod*))List_1_get_Count_m3944991828_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<HighlightingSystem.HighlightingPreset>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m3277764254 (List_1_t2107694533 * __this, int32_t p0, HighlightingPreset_t635619791  p1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2107694533 *, int32_t, HighlightingPreset_t635619791 , const RuntimeMethod*))List_1_set_Item_m3277764254_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.List`1<HighlightingSystem.HighlightingPreset>::Add(!0)
inline void List_1_Add_m3778980941 (List_1_t2107694533 * __this, HighlightingPreset_t635619791  p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2107694533 *, HighlightingPreset_t635619791 , const RuntimeMethod*))List_1_Add_m3778980941_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<HighlightingSystem.HighlightingPreset>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m3885651965 (List_1_t2107694533 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2107694533 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m3885651965_gshared)(__this, p0, method);
}
// System.Boolean HighlightingSystem.HighlightingRenderer::GetPreset(System.String,HighlightingSystem.HighlightingPreset&)
extern "C" IL2CPP_METHOD_ATTR bool HighlightingRenderer_GetPreset_m608317482 (HighlightingRenderer_t1923179915 * __this, String_t* ___name0, HighlightingPreset_t635619791 * ___preset1, const RuntimeMethod* method);
// System.Void HighlightingSystem.HighlightingRenderer::ApplyPreset(HighlightingSystem.HighlightingPreset)
extern "C" IL2CPP_METHOD_ATTR void HighlightingRenderer_ApplyPreset_m1157430966 (HighlightingRenderer_t1923179915 * __this, HighlightingPreset_t635619791  ___preset0, const RuntimeMethod* method);
// System.Void HighlightingSystem.HighlightingBase::set_downsampleFactor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void HighlightingBase_set_downsampleFactor_m2422254815 (HighlightingBase_t582374880 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void HighlightingSystem.HighlightingBase::set_iterations(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void HighlightingBase_set_iterations_m2930427573 (HighlightingBase_t582374880 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void HighlightingSystem.HighlightingBase::set_blurMinSpread(System.Single)
extern "C" IL2CPP_METHOD_ATTR void HighlightingBase_set_blurMinSpread_m2098128336 (HighlightingBase_t582374880 * __this, float ___value0, const RuntimeMethod* method);
// System.Void HighlightingSystem.HighlightingBase::set_blurSpread(System.Single)
extern "C" IL2CPP_METHOD_ATTR void HighlightingBase_set_blurSpread_m3107107880 (HighlightingBase_t582374880 * __this, float ___value0, const RuntimeMethod* method);
// System.Void HighlightingSystem.HighlightingBase::set_blurIntensity(System.Single)
extern "C" IL2CPP_METHOD_ATTR void HighlightingBase_set_blurIntensity_m709625294 (HighlightingBase_t582374880 * __this, float ___value0, const RuntimeMethod* method);
// System.Void HighlightingSystem.HighlightingBase::set_blurDirections(HighlightingSystem.BlurDirections)
extern "C" IL2CPP_METHOD_ATTR void HighlightingBase_set_blurDirections_m2932430632 (HighlightingBase_t582374880 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<HighlightingSystem.HighlightingPreset>::Clear()
inline void List_1_Clear_m3214370389 (List_1_t2107694533 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2107694533 *, const RuntimeMethod*))List_1_Clear_m3214370389_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<HighlightingSystem.HighlightingPreset>::.ctor()
inline void List_1__ctor_m2449748141 (List_1_t2107694533 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2107694533 *, const RuntimeMethod*))List_1__ctor_m2449748141_gshared)(__this, method);
}
// System.Void UnityEngine.Material::EnableKeyword(System.String)
extern "C" IL2CPP_METHOD_ATTR void Material_EnableKeyword_m329692301 (Material_t340375123 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::DisableKeyword(System.String)
extern "C" IL2CPP_METHOD_ATTR void Material_DisableKeyword_m1245091008 (Material_t340375123 * __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_m1030499873 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
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
// System.Void HighlightingSystem.EndOfFrame::.ctor()
extern "C" IL2CPP_METHOD_ATTR void EndOfFrame__ctor_m3240973482 (EndOfFrame_t2825832094 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EndOfFrame__ctor_m3240973482_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WaitForEndOfFrame_t1314943911 * L_0 = (WaitForEndOfFrame_t1314943911 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m1381314187(L_0, /*hidden argument*/NULL);
		__this->set_waitForEndOfFrame_5(L_0);
		List_1_t4236248344 * L_1 = (List_1_t4236248344 *)il2cpp_codegen_object_new(List_1_t4236248344_il2cpp_TypeInfo_var);
		List_1__ctor_m4022584956(L_1, /*hidden argument*/List_1__ctor_m4022584956_RuntimeMethod_var);
		__this->set_listeners_7(L_1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// HighlightingSystem.EndOfFrame HighlightingSystem.EndOfFrame::get_singleton()
extern "C" IL2CPP_METHOD_ATTR EndOfFrame_t2825832094 * EndOfFrame_get_singleton_m1870795744 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EndOfFrame_get_singleton_m1870795744_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		EndOfFrame_t2825832094 * L_0 = ((EndOfFrame_t2825832094_StaticFields*)il2cpp_codegen_static_fields_for(EndOfFrame_t2825832094_il2cpp_TypeInfo_var))->get__singleton_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		GameObject_t1113636619 * L_2 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_2, _stringLiteral3534117913, /*hidden argument*/NULL);
		V_0 = L_2;
		GameObject_t1113636619 * L_3 = V_0;
		NullCheck(L_3);
		Object_set_hideFlags_m1648752846(L_3, ((int32_t)61), /*hidden argument*/NULL);
		GameObject_t1113636619 * L_4 = V_0;
		NullCheck(L_4);
		EndOfFrame_t2825832094 * L_5 = GameObject_AddComponent_TisEndOfFrame_t2825832094_m166707815(L_4, /*hidden argument*/GameObject_AddComponent_TisEndOfFrame_t2825832094_m166707815_RuntimeMethod_var);
		((EndOfFrame_t2825832094_StaticFields*)il2cpp_codegen_static_fields_for(EndOfFrame_t2825832094_il2cpp_TypeInfo_var))->set__singleton_4(L_5);
	}

IL_002e:
	{
		EndOfFrame_t2825832094 * L_6 = ((EndOfFrame_t2825832094_StaticFields*)il2cpp_codegen_static_fields_for(EndOfFrame_t2825832094_il2cpp_TypeInfo_var))->get__singleton_4();
		return L_6;
	}
}
// System.Void HighlightingSystem.EndOfFrame::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void EndOfFrame_OnEnable_m190804912 (EndOfFrame_t2825832094 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = EndOfFrame_EndOfFrameRoutine_m3056526405(__this, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_1 = MonoBehaviour_StartCoroutine_m3411253000(__this, L_0, /*hidden argument*/NULL);
		__this->set_coroutine_6(L_1);
		return;
	}
}
// System.Void HighlightingSystem.EndOfFrame::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void EndOfFrame_OnDisable_m2954275464 (EndOfFrame_t2825832094 * __this, const RuntimeMethod* method)
{
	{
		Coroutine_t3829159415 * L_0 = __this->get_coroutine_6();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Coroutine_t3829159415 * L_1 = __this->get_coroutine_6();
		MonoBehaviour_StopCoroutine_m907039165(__this, L_1, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void HighlightingSystem.EndOfFrame::AddListener(HighlightingSystem.EndOfFrame/OnEndOfFrame)
extern "C" IL2CPP_METHOD_ATTR void EndOfFrame_AddListener_m498318113 (RuntimeObject * __this /* static, unused */, OnEndOfFrame_t2764173602 * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EndOfFrame_AddListener_m498318113_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnEndOfFrame_t2764173602 * L_0 = ___listener0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		EndOfFrame_t2825832094 * L_1 = EndOfFrame_get_singleton_m1870795744(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		List_1_t4236248344 * L_2 = L_1->get_listeners_7();
		OnEndOfFrame_t2764173602 * L_3 = ___listener0;
		NullCheck(L_2);
		List_1_Add_m2657470822(L_2, L_3, /*hidden argument*/List_1_Add_m2657470822_RuntimeMethod_var);
		return;
	}
}
// System.Void HighlightingSystem.EndOfFrame::RemoveListener(HighlightingSystem.EndOfFrame/OnEndOfFrame)
extern "C" IL2CPP_METHOD_ATTR void EndOfFrame_RemoveListener_m3756592840 (RuntimeObject * __this /* static, unused */, OnEndOfFrame_t2764173602 * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EndOfFrame_RemoveListener_m3756592840_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnEndOfFrame_t2764173602 * L_0 = ___listener0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		EndOfFrame_t2825832094 * L_1 = ((EndOfFrame_t2825832094_StaticFields*)il2cpp_codegen_static_fields_for(EndOfFrame_t2825832094_il2cpp_TypeInfo_var))->get__singleton_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		return;
	}

IL_0017:
	{
		EndOfFrame_t2825832094 * L_3 = EndOfFrame_get_singleton_m1870795744(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		List_1_t4236248344 * L_4 = L_3->get_listeners_7();
		OnEndOfFrame_t2764173602 * L_5 = ___listener0;
		NullCheck(L_4);
		List_1_Remove_m2774071532(L_4, L_5, /*hidden argument*/List_1_Remove_m2774071532_RuntimeMethod_var);
		return;
	}
}
// System.Collections.IEnumerator HighlightingSystem.EndOfFrame::EndOfFrameRoutine()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* EndOfFrame_EndOfFrameRoutine_m3056526405 (EndOfFrame_t2825832094 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EndOfFrame_EndOfFrameRoutine_m3056526405_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CEndOfFrameRoutineU3Ec__Iterator0_t1448387516 * V_0 = NULL;
	{
		U3CEndOfFrameRoutineU3Ec__Iterator0_t1448387516 * L_0 = (U3CEndOfFrameRoutineU3Ec__Iterator0_t1448387516 *)il2cpp_codegen_object_new(U3CEndOfFrameRoutineU3Ec__Iterator0_t1448387516_il2cpp_TypeInfo_var);
		U3CEndOfFrameRoutineU3Ec__Iterator0__ctor_m2952852632(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CEndOfFrameRoutineU3Ec__Iterator0_t1448387516 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_0(__this);
		U3CEndOfFrameRoutineU3Ec__Iterator0_t1448387516 * L_2 = V_0;
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
// System.Void HighlightingSystem.EndOfFrame/<EndOfFrameRoutine>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CEndOfFrameRoutineU3Ec__Iterator0__ctor_m2952852632 (U3CEndOfFrameRoutineU3Ec__Iterator0_t1448387516 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean HighlightingSystem.EndOfFrame/<EndOfFrameRoutine>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CEndOfFrameRoutineU3Ec__Iterator0_MoveNext_m3788302542 (U3CEndOfFrameRoutineU3Ec__Iterator0_t1448387516 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CEndOfFrameRoutineU3Ec__Iterator0_MoveNext_m3788302542_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	OnEndOfFrame_t2764173602 * V_2 = NULL;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0046;
			}
		}
	}
	{
		goto IL_00a9;
	}

IL_0021:
	{
		EndOfFrame_t2825832094 * L_2 = __this->get_U24this_0();
		NullCheck(L_2);
		WaitForEndOfFrame_t1314943911 * L_3 = L_2->get_waitForEndOfFrame_5();
		__this->set_U24current_1(L_3);
		bool L_4 = __this->get_U24disposing_2();
		if (L_4)
		{
			goto IL_0041;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0041:
	{
		goto IL_00ab;
	}

IL_0046:
	{
		EndOfFrame_t2825832094 * L_5 = __this->get_U24this_0();
		NullCheck(L_5);
		List_1_t4236248344 * L_6 = L_5->get_listeners_7();
		NullCheck(L_6);
		int32_t L_7 = List_1_get_Count_m2263445553(L_6, /*hidden argument*/List_1_get_Count_m2263445553_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1));
		goto IL_0096;
	}

IL_005e:
	{
		EndOfFrame_t2825832094 * L_8 = __this->get_U24this_0();
		NullCheck(L_8);
		List_1_t4236248344 * L_9 = L_8->get_listeners_7();
		int32_t L_10 = V_1;
		NullCheck(L_9);
		OnEndOfFrame_t2764173602 * L_11 = List_1_get_Item_m2126599964(L_9, L_10, /*hidden argument*/List_1_get_Item_m2126599964_RuntimeMethod_var);
		V_2 = L_11;
		OnEndOfFrame_t2764173602 * L_12 = V_2;
		if (!L_12)
		{
			goto IL_0081;
		}
	}
	{
		OnEndOfFrame_t2764173602 * L_13 = V_2;
		NullCheck(L_13);
		OnEndOfFrame_Invoke_m2013331024(L_13, /*hidden argument*/NULL);
		goto IL_0092;
	}

IL_0081:
	{
		EndOfFrame_t2825832094 * L_14 = __this->get_U24this_0();
		NullCheck(L_14);
		List_1_t4236248344 * L_15 = L_14->get_listeners_7();
		int32_t L_16 = V_1;
		NullCheck(L_15);
		List_1_RemoveAt_m849693794(L_15, L_16, /*hidden argument*/List_1_RemoveAt_m849693794_RuntimeMethod_var);
	}

IL_0092:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1));
	}

IL_0096:
	{
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		goto IL_0021;
	}
	// Dead block : IL_00a2: ldarg.0

IL_00a9:
	{
		return (bool)0;
	}

IL_00ab:
	{
		return (bool)1;
	}
}
// System.Object HighlightingSystem.EndOfFrame/<EndOfFrameRoutine>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CEndOfFrameRoutineU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3583182297 (U3CEndOfFrameRoutineU3Ec__Iterator0_t1448387516 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object HighlightingSystem.EndOfFrame/<EndOfFrameRoutine>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CEndOfFrameRoutineU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m4008906639 (U3CEndOfFrameRoutineU3Ec__Iterator0_t1448387516 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void HighlightingSystem.EndOfFrame/<EndOfFrameRoutine>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CEndOfFrameRoutineU3Ec__Iterator0_Dispose_m590942905 (U3CEndOfFrameRoutineU3Ec__Iterator0_t1448387516 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void HighlightingSystem.EndOfFrame/<EndOfFrameRoutine>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CEndOfFrameRoutineU3Ec__Iterator0_Reset_m4073942580 (U3CEndOfFrameRoutineU3Ec__Iterator0_t1448387516 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CEndOfFrameRoutineU3Ec__Iterator0_Reset_m4073942580_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CEndOfFrameRoutineU3Ec__Iterator0_Reset_m4073942580_RuntimeMethod_var);
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
extern "C"  void DelegatePInvokeWrapper_OnEndOfFrame_t2764173602 (OnEndOfFrame_t2764173602 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void HighlightingSystem.EndOfFrame/OnEndOfFrame::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnEndOfFrame__ctor_m2041741679 (OnEndOfFrame_t2764173602 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void HighlightingSystem.EndOfFrame/OnEndOfFrame::Invoke()
extern "C" IL2CPP_METHOD_ATTR void OnEndOfFrame_Invoke_m2013331024 (OnEndOfFrame_t2764173602 * __this, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		OnEndOfFrame_Invoke_m2013331024((OnEndOfFrame_t2764173602 *)__this->get_prev_9(), method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult HighlightingSystem.EndOfFrame/OnEndOfFrame::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnEndOfFrame_BeginInvoke_m1030428616 (OnEndOfFrame_t2764173602 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void HighlightingSystem.EndOfFrame/OnEndOfFrame::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnEndOfFrame_EndInvoke_m1472696520 (OnEndOfFrame_t2764173602 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void HighlightingSystem.Highlighter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Highlighter__ctor_m3735811063 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Highlighter__ctor_m3735811063_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Gradient_t3067099924 * V_0 = NULL;
	{
		Color_t2555686324  L_0 = Color_get_red_m3227813939(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set__hoverColor_31(L_0);
		__this->set__hoverFrame_32((-1));
		Gradient_t3067099924 * L_1 = (Gradient_t3067099924 *)il2cpp_codegen_object_new(Gradient_t3067099924_il2cpp_TypeInfo_var);
		Gradient__ctor_m173848750(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		Gradient_t3067099924 * L_2 = V_0;
		GradientColorKeyU5BU5D_t4133731744* L_3 = (GradientColorKeyU5BU5D_t4133731744*)SZArrayNew(GradientColorKeyU5BU5D_t4133731744_il2cpp_TypeInfo_var, (uint32_t)2);
		GradientColorKeyU5BU5D_t4133731744* L_4 = L_3;
		NullCheck(L_4);
		Color_t2555686324  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Color__ctor_m2943235014((&L_5), (0.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		GradientColorKey_t812552589  L_6;
		memset(&L_6, 0, sizeof(L_6));
		GradientColorKey__ctor_m1007617986((&L_6), L_5, (0.0f), /*hidden argument*/NULL);
		*(GradientColorKey_t812552589 *)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))) = L_6;
		GradientColorKeyU5BU5D_t4133731744* L_7 = L_4;
		NullCheck(L_7);
		Color_t2555686324  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Color__ctor_m2943235014((&L_8), (0.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		GradientColorKey_t812552589  L_9;
		memset(&L_9, 0, sizeof(L_9));
		GradientColorKey__ctor_m1007617986((&L_9), L_8, (1.0f), /*hidden argument*/NULL);
		*(GradientColorKey_t812552589 *)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))) = L_9;
		NullCheck(L_2);
		Gradient_set_colorKeys_m1596543139(L_2, L_7, /*hidden argument*/NULL);
		Gradient_t3067099924 * L_10 = V_0;
		GradientAlphaKeyU5BU5D_t1986482519* L_11 = (GradientAlphaKeyU5BU5D_t1986482519*)SZArrayNew(GradientAlphaKeyU5BU5D_t1986482519_il2cpp_TypeInfo_var, (uint32_t)2);
		GradientAlphaKeyU5BU5D_t1986482519* L_12 = L_11;
		NullCheck(L_12);
		GradientAlphaKey_t2624742626  L_13;
		memset(&L_13, 0, sizeof(L_13));
		GradientAlphaKey__ctor_m1279830247((&L_13), (0.0f), (0.0f), /*hidden argument*/NULL);
		*(GradientAlphaKey_t2624742626 *)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))) = L_13;
		GradientAlphaKeyU5BU5D_t1986482519* L_14 = L_12;
		NullCheck(L_14);
		GradientAlphaKey_t2624742626  L_15;
		memset(&L_15, 0, sizeof(L_15));
		GradientAlphaKey__ctor_m1279830247((&L_15), (1.0f), (1.0f), /*hidden argument*/NULL);
		*(GradientAlphaKey_t2624742626 *)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))) = L_15;
		NullCheck(L_10);
		Gradient_set_alphaKeys_m1940335915(L_10, L_14, /*hidden argument*/NULL);
		Gradient_t3067099924 * L_16 = V_0;
		__this->set__tweenGradient_34(L_16);
		__this->set__tweenDuration_35((1.0f));
		__this->set__tweenLoop_37(2);
		__this->set__tweenRepeatCount_40((-1));
		Color_t2555686324  L_17 = Color_get_yellow_m1287957903(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set__constantColor_43(L_17);
		__this->set__constantFadeInTime_44((0.1f));
		__this->set__constantFadeOutTime_45((0.25f));
		List_1_t777473367 * L_18 = (List_1_t777473367 *)il2cpp_codegen_object_new(List_1_t777473367_il2cpp_TypeInfo_var);
		List_1__ctor_m925949354(L_18, /*hidden argument*/List_1__ctor_m925949354_RuntimeMethod_var);
		__this->set__filterList_49(L_18);
		GradientColorKeyU5BU5D_t4133731744* L_19 = (GradientColorKeyU5BU5D_t4133731744*)SZArrayNew(GradientColorKeyU5BU5D_t4133731744_il2cpp_TypeInfo_var, (uint32_t)2);
		GradientColorKeyU5BU5D_t4133731744* L_20 = L_19;
		NullCheck(L_20);
		Color_t2555686324  L_21;
		memset(&L_21, 0, sizeof(L_21));
		Color__ctor_m2943235014((&L_21), (0.0f), (1.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		GradientColorKey_t812552589  L_22;
		memset(&L_22, 0, sizeof(L_22));
		GradientColorKey__ctor_m1007617986((&L_22), L_21, (0.0f), /*hidden argument*/NULL);
		*(GradientColorKey_t812552589 *)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))) = L_22;
		GradientColorKeyU5BU5D_t4133731744* L_23 = L_20;
		NullCheck(L_23);
		Color_t2555686324  L_24;
		memset(&L_24, 0, sizeof(L_24));
		Color__ctor_m2943235014((&L_24), (0.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		GradientColorKey_t812552589  L_25;
		memset(&L_25, 0, sizeof(L_25));
		GradientColorKey__ctor_m1007617986((&L_25), L_24, (1.0f), /*hidden argument*/NULL);
		*(GradientColorKey_t812552589 *)((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))) = L_25;
		__this->set_flashingColorKeys_55(L_23);
		GradientAlphaKeyU5BU5D_t1986482519* L_26 = (GradientAlphaKeyU5BU5D_t1986482519*)SZArrayNew(GradientAlphaKeyU5BU5D_t1986482519_il2cpp_TypeInfo_var, (uint32_t)2);
		GradientAlphaKeyU5BU5D_t1986482519* L_27 = L_26;
		NullCheck(L_27);
		GradientAlphaKey_t2624742626  L_28;
		memset(&L_28, 0, sizeof(L_28));
		GradientAlphaKey__ctor_m1279830247((&L_28), (1.0f), (0.0f), /*hidden argument*/NULL);
		*(GradientAlphaKey_t2624742626 *)((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))) = L_28;
		GradientAlphaKeyU5BU5D_t1986482519* L_29 = L_27;
		NullCheck(L_29);
		GradientAlphaKey_t2624742626  L_30;
		memset(&L_30, 0, sizeof(L_30));
		GradientAlphaKey__ctor_m1279830247((&L_30), (1.0f), (1.0f), /*hidden argument*/NULL);
		*(GradientAlphaKey_t2624742626 *)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))) = L_30;
		__this->set_flashingAlphaKeys_56(L_29);
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		HighlighterCore__ctor_m200611106(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean HighlightingSystem.Highlighter::get_overlay()
extern "C" IL2CPP_METHOD_ATTR bool Highlighter_get_overlay_m2992336438 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__overlay_29();
		return L_0;
	}
}
// System.Void HighlightingSystem.Highlighter::set_overlay(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_set_overlay_m1883380581 (Highlighter_t672210414 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__overlay_29(L_0);
		return;
	}
}
// System.Boolean HighlightingSystem.Highlighter::get_occluder()
extern "C" IL2CPP_METHOD_ATTR bool Highlighter_get_occluder_m3802309144 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__occluder_30();
		return L_0;
	}
}
// System.Void HighlightingSystem.Highlighter::set_occluder(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_set_occluder_m4192382442 (Highlighter_t672210414 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__occluder_30(L_0);
		return;
	}
}
// System.Boolean HighlightingSystem.Highlighter::get_tween()
extern "C" IL2CPP_METHOD_ATTR bool Highlighter_get_tween_m3115203341 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__tween_33();
		return L_0;
	}
}
// System.Void HighlightingSystem.Highlighter::set_tween(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_set_tween_m1696351472 (Highlighter_t672210414 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		Highlighter_TweenSet_m2447418550(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Gradient HighlightingSystem.Highlighter::get_tweenGradient()
extern "C" IL2CPP_METHOD_ATTR Gradient_t3067099924 * Highlighter_get_tweenGradient_m3588495702 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	{
		Gradient_t3067099924 * L_0 = __this->get__tweenGradient_34();
		return L_0;
	}
}
// System.Void HighlightingSystem.Highlighter::set_tweenGradient(UnityEngine.Gradient)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_set_tweenGradient_m2572043118 (Highlighter_t672210414 * __this, Gradient_t3067099924 * ___value0, const RuntimeMethod* method)
{
	{
		Gradient_t3067099924 * L_0 = ___value0;
		__this->set__tweenGradient_34(L_0);
		return;
	}
}
// System.Single HighlightingSystem.Highlighter::get_tweenDuration()
extern "C" IL2CPP_METHOD_ATTR float Highlighter_get_tweenDuration_m3660505135 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__tweenDuration_35();
		return L_0;
	}
}
// System.Void HighlightingSystem.Highlighter::set_tweenDuration(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_set_tweenDuration_m3344834910 (Highlighter_t672210414 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set__tweenDuration_35(L_0);
		Highlighter_ValidateRanges_m3333118849(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single HighlightingSystem.Highlighter::get_tweenDelay()
extern "C" IL2CPP_METHOD_ATTR float Highlighter_get_tweenDelay_m3901229856 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__tweenDelay_39();
		return L_0;
	}
}
// System.Void HighlightingSystem.Highlighter::set_tweenDelay(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_set_tweenDelay_m416177962 (Highlighter_t672210414 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set__tweenDelay_39(L_0);
		return;
	}
}
// System.Boolean HighlightingSystem.Highlighter::get_tweenUseUnscaledTime()
extern "C" IL2CPP_METHOD_ATTR bool Highlighter_get_tweenUseUnscaledTime_m4222379826 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__tweenUseUnscaledTime_41();
		return L_0;
	}
}
// System.Void HighlightingSystem.Highlighter::set_tweenUseUnscaledTime(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_set_tweenUseUnscaledTime_m4202336332 (Highlighter_t672210414 * __this, bool ___value0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		bool L_0 = __this->get__tweenUseUnscaledTime_41();
		bool L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		float L_2 = Highlighter_GetTweenTime_m3824541298(__this, /*hidden argument*/NULL);
		float L_3 = __this->get__tweenStart_51();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_2, (float)L_3));
		bool L_4 = ___value0;
		__this->set__tweenUseUnscaledTime_41(L_4);
		float L_5 = Highlighter_GetTweenTime_m3824541298(__this, /*hidden argument*/NULL);
		float L_6 = V_0;
		__this->set__tweenStart_51(((float)il2cpp_codegen_subtract((float)L_5, (float)L_6)));
	}

IL_002f:
	{
		return;
	}
}
// HighlightingSystem.LoopMode HighlightingSystem.Highlighter::get_tweenLoop()
extern "C" IL2CPP_METHOD_ATTR int32_t Highlighter_get_tweenLoop_m1966285544 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__tweenLoop_37();
		return L_0;
	}
}
// System.Void HighlightingSystem.Highlighter::set_tweenLoop(HighlightingSystem.LoopMode)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_set_tweenLoop_m4052077281 (Highlighter_t672210414 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set__tweenLoop_37(L_0);
		return;
	}
}
// HighlightingSystem.Easing HighlightingSystem.Highlighter::get_tweenEasing()
extern "C" IL2CPP_METHOD_ATTR int32_t Highlighter_get_tweenEasing_m1846218096 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__tweenEasing_38();
		return L_0;
	}
}
// System.Void HighlightingSystem.Highlighter::set_tweenEasing(HighlightingSystem.Easing)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_set_tweenEasing_m1254445705 (Highlighter_t672210414 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set__tweenEasing_38(L_0);
		return;
	}
}
// System.Boolean HighlightingSystem.Highlighter::get_tweenReverse()
extern "C" IL2CPP_METHOD_ATTR bool Highlighter_get_tweenReverse_m715221672 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__tweenReverse_36();
		return L_0;
	}
}
// System.Void HighlightingSystem.Highlighter::set_tweenReverse(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_set_tweenReverse_m1628504604 (Highlighter_t672210414 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__tweenReverse_36(L_0);
		return;
	}
}
// System.Int32 HighlightingSystem.Highlighter::get_tweenRepeatCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Highlighter_get_tweenRepeatCount_m391639975 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__tweenRepeatCount_40();
		return L_0;
	}
}
// System.Void HighlightingSystem.Highlighter::set_tweenRepeatCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_set_tweenRepeatCount_m818489805 (Highlighter_t672210414 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set__tweenRepeatCount_40(L_0);
		return;
	}
}
// System.Boolean HighlightingSystem.Highlighter::get_constant()
extern "C" IL2CPP_METHOD_ATTR bool Highlighter_get_constant_m258706084 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__constant_42();
		return L_0;
	}
}
// System.Void HighlightingSystem.Highlighter::set_constant(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_set_constant_m2839280128 (Highlighter_t672210414 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		Highlighter_ConstantSet_m2418045208(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color HighlightingSystem.Highlighter::get_constantColor()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Highlighter_get_constantColor_m3427894128 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	{
		Color_t2555686324  L_0 = __this->get__constantColor_43();
		return L_0;
	}
}
// System.Void HighlightingSystem.Highlighter::set_constantColor(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_set_constantColor_m1046457932 (Highlighter_t672210414 * __this, Color_t2555686324  ___value0, const RuntimeMethod* method)
{
	{
		Color_t2555686324  L_0 = ___value0;
		__this->set__constantColor_43(L_0);
		return;
	}
}
// System.Void HighlightingSystem.Highlighter::set_constantFadeTime(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_set_constantFadeTime_m2085244716 (Highlighter_t672210414 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set__constantFadeInTime_44(L_0);
		float L_1 = ___value0;
		__this->set__constantFadeOutTime_45(L_1);
		Highlighter_ValidateRanges_m3333118849(__this, /*hidden argument*/NULL);
		Highlighter_ConstantSet_m2206652421(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single HighlightingSystem.Highlighter::get_constantFadeInTime()
extern "C" IL2CPP_METHOD_ATTR float Highlighter_get_constantFadeInTime_m2897410839 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__constantFadeInTime_44();
		return L_0;
	}
}
// System.Void HighlightingSystem.Highlighter::set_constantFadeInTime(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_set_constantFadeInTime_m2941143776 (Highlighter_t672210414 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set__constantFadeInTime_44(L_0);
		Highlighter_ValidateRanges_m3333118849(__this, /*hidden argument*/NULL);
		bool L_1 = __this->get__constant_42();
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		Highlighter_ConstantSet_m2206652421(__this, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Single HighlightingSystem.Highlighter::get_constantFadeOutTime()
extern "C" IL2CPP_METHOD_ATTR float Highlighter_get_constantFadeOutTime_m3101498938 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__constantFadeOutTime_45();
		return L_0;
	}
}
// System.Void HighlightingSystem.Highlighter::set_constantFadeOutTime(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_set_constantFadeOutTime_m2888025475 (Highlighter_t672210414 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set__constantFadeOutTime_45(L_0);
		Highlighter_ValidateRanges_m3333118849(__this, /*hidden argument*/NULL);
		bool L_1 = __this->get__constant_42();
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		Highlighter_ConstantSet_m2206652421(__this, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Boolean HighlightingSystem.Highlighter::get_constantUseUnscaledTime()
extern "C" IL2CPP_METHOD_ATTR bool Highlighter_get_constantUseUnscaledTime_m2701321741 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__constantUseUnscaledTime_47();
		return L_0;
	}
}
// System.Void HighlightingSystem.Highlighter::set_constantUseUnscaledTime(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_set_constantUseUnscaledTime_m953660144 (Highlighter_t672210414 * __this, bool ___value0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		bool L_0 = __this->get__constantUseUnscaledTime_47();
		bool L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		float L_2 = Highlighter_GetConstantTime_m831727855(__this, /*hidden argument*/NULL);
		float L_3 = __this->get__constantStart_53();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_2, (float)L_3));
		bool L_4 = ___value0;
		__this->set__constantUseUnscaledTime_47(L_4);
		float L_5 = Highlighter_GetConstantTime_m831727855(__this, /*hidden argument*/NULL);
		float L_6 = V_0;
		__this->set__constantStart_53(((float)il2cpp_codegen_subtract((float)L_5, (float)L_6)));
	}

IL_002f:
	{
		return;
	}
}
// HighlightingSystem.Easing HighlightingSystem.Highlighter::get_constantEasing()
extern "C" IL2CPP_METHOD_ATTR int32_t Highlighter_get_constantEasing_m1782324817 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__constantEasing_46();
		return L_0;
	}
}
// System.Void HighlightingSystem.Highlighter::set_constantEasing(HighlightingSystem.Easing)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_set_constantEasing_m1375194648 (Highlighter_t672210414 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set__constantEasing_46(L_0);
		return;
	}
}
// HighlightingSystem.RendererFilterMode HighlightingSystem.Highlighter::get_filterMode()
extern "C" IL2CPP_METHOD_ATTR int32_t Highlighter_get_filterMode_m4085371955 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__filterMode_48();
		return L_0;
	}
}
// System.Void HighlightingSystem.Highlighter::set_filterMode(HighlightingSystem.RendererFilterMode)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_set_filterMode_m3488626586 (Highlighter_t672210414 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__filterMode_48();
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = ___value0;
		__this->set__filterMode_48(L_2);
		HighlighterCore_SetDirty_m1369823605(__this, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Transform> HighlightingSystem.Highlighter::get_filterList()
extern "C" IL2CPP_METHOD_ATTR List_1_t777473367 * Highlighter_get_filterList_m1644436431 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	{
		List_1_t777473367 * L_0 = __this->get__filterList_49();
		return L_0;
	}
}
// HighlightingSystem.HighlighterCore/RendererFilter HighlightingSystem.Highlighter::get_rendererFilterToUse()
extern "C" IL2CPP_METHOD_ATTR RendererFilter_t73075700 * Highlighter_get_rendererFilterToUse_m1881621325 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Highlighter_get_rendererFilterToUse_m1881621325_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RendererFilter_t73075700 * G_B8_0 = NULL;
	{
		RendererFilter_t73075700 * L_0 = HighlighterCore_get_rendererFilter_m2619316656(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RendererFilter_t73075700 * L_1 = HighlighterCore_get_rendererFilter_m2619316656(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_0012:
	{
		int32_t L_2 = __this->get__filterMode_48();
		if (L_2)
		{
			goto IL_004f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		RendererFilter_t73075700 * L_3 = HighlighterCore_get_globalRendererFilter_m1103506028(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		RendererFilter_t73075700 * L_4 = HighlighterCore_get_globalRendererFilter_m1103506028(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B8_0 = L_4;
		goto IL_004e;
	}

IL_0031:
	{
		RendererFilter_t73075700 * L_5 = ((Highlighter_t672210414_StaticFields*)il2cpp_codegen_static_fields_for(Highlighter_t672210414_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_57();
		if (L_5)
		{
			goto IL_0049;
		}
	}
	{
		intptr_t L_6 = (intptr_t)HighlighterCore_DefaultRendererFilter_m3173747073_RuntimeMethod_var;
		RendererFilter_t73075700 * L_7 = (RendererFilter_t73075700 *)il2cpp_codegen_object_new(RendererFilter_t73075700_il2cpp_TypeInfo_var);
		RendererFilter__ctor_m1988673961(L_7, NULL, (intptr_t)L_6, /*hidden argument*/NULL);
		((Highlighter_t672210414_StaticFields*)il2cpp_codegen_static_fields_for(Highlighter_t672210414_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_57(L_7);
	}

IL_0049:
	{
		RendererFilter_t73075700 * L_8 = ((Highlighter_t672210414_StaticFields*)il2cpp_codegen_static_fields_for(Highlighter_t672210414_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_57();
		G_B8_0 = L_8;
	}

IL_004e:
	{
		return G_B8_0;
	}

IL_004f:
	{
		int32_t L_9 = __this->get__filterMode_48();
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		intptr_t L_10 = (intptr_t)Highlighter_TransformFilterInclude_m201777354_RuntimeMethod_var;
		RendererFilter_t73075700 * L_11 = (RendererFilter_t73075700 *)il2cpp_codegen_object_new(RendererFilter_t73075700_il2cpp_TypeInfo_var);
		RendererFilter__ctor_m1988673961(L_11, __this, (intptr_t)L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0068:
	{
		int32_t L_12 = __this->get__filterMode_48();
		if ((!(((uint32_t)L_12) == ((uint32_t)2))))
		{
			goto IL_0081;
		}
	}
	{
		intptr_t L_13 = (intptr_t)Highlighter_TransformFilterExclude_m1896708845_RuntimeMethod_var;
		RendererFilter_t73075700 * L_14 = (RendererFilter_t73075700 *)il2cpp_codegen_object_new(RendererFilter_t73075700_il2cpp_TypeInfo_var);
		RendererFilter__ctor_m1988673961(L_14, __this, (intptr_t)L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0081:
	{
		RendererFilter_t73075700 * L_15 = ((Highlighter_t672210414_StaticFields*)il2cpp_codegen_static_fields_for(Highlighter_t672210414_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_58();
		if (L_15)
		{
			goto IL_0099;
		}
	}
	{
		intptr_t L_16 = (intptr_t)HighlighterCore_DefaultRendererFilter_m3173747073_RuntimeMethod_var;
		RendererFilter_t73075700 * L_17 = (RendererFilter_t73075700 *)il2cpp_codegen_object_new(RendererFilter_t73075700_il2cpp_TypeInfo_var);
		RendererFilter__ctor_m1988673961(L_17, NULL, (intptr_t)L_16, /*hidden argument*/NULL);
		((Highlighter_t672210414_StaticFields*)il2cpp_codegen_static_fields_for(Highlighter_t672210414_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache1_58(L_17);
	}

IL_0099:
	{
		RendererFilter_t73075700 * L_18 = ((Highlighter_t672210414_StaticFields*)il2cpp_codegen_static_fields_for(Highlighter_t672210414_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_58();
		return L_18;
	}
}
// System.Boolean HighlightingSystem.Highlighter::get_hover()
extern "C" IL2CPP_METHOD_ATTR bool Highlighter_get_hover_m1413188133 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__hoverFrame_32();
		int32_t L_1 = Time_get_frameCount_m1220035214(NULL /*static, unused*/, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// System.Void HighlightingSystem.Highlighter::set_hover(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_set_hover_m3588790658 (Highlighter_t672210414 * __this, bool ___value0, const RuntimeMethod* method)
{
	Highlighter_t672210414 * G_B2_0 = NULL;
	Highlighter_t672210414 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Highlighter_t672210414 * G_B3_1 = NULL;
	{
		bool L_0 = ___value0;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = Time_get_frameCount_m1220035214(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		NullCheck(G_B3_1);
		G_B3_1->set__hoverFrame_32(G_B3_0);
		return;
	}
}
// System.Single HighlightingSystem.Highlighter::get_constantValue()
extern "C" IL2CPP_METHOD_ATTR float Highlighter_get_constantValue_m3011646541 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Highlighter_get_constantValue_m3011646541_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float G_B3_0 = 0.0f;
	{
		float L_0 = __this->get__constantDuration_54();
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_002e;
		}
	}
	{
		float L_1 = Highlighter_GetConstantTime_m831727855(__this, /*hidden argument*/NULL);
		float L_2 = __this->get__constantStart_53();
		float L_3 = __this->get__constantDuration_54();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_4 = Mathf_Clamp01_m56433566(NULL /*static, unused*/, ((float)((float)((float)il2cpp_codegen_subtract((float)L_1, (float)L_2))/(float)L_3)), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		goto IL_0033;
	}

IL_002e:
	{
		G_B3_0 = (1.0f);
	}

IL_0033:
	{
		return G_B3_0;
	}
}
// System.Void HighlightingSystem.Highlighter::OnDidApplyAnimationProperties()
extern "C" IL2CPP_METHOD_ATTR void Highlighter_OnDidApplyAnimationProperties_m254268261 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	{
		Highlighter_ValidateAll_m2299456659(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.Highlighter::OnEnableSafe()
extern "C" IL2CPP_METHOD_ATTR void Highlighter_OnEnableSafe_m3533771297 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	{
		Highlighter_ValidateAll_m2299456659(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.Highlighter::OnDisableSafe()
extern "C" IL2CPP_METHOD_ATTR void Highlighter_OnDisableSafe_m734807493 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	{
		__this->set__tweenEnabled_50((bool)0);
		__this->set__constantEnabled_52((bool)0);
		float L_0 = Highlighter_GetConstantTime_m831727855(__this, /*hidden argument*/NULL);
		float L_1 = __this->get__constantDuration_54();
		__this->set__constantStart_53(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		return;
	}
}
// System.Void HighlightingSystem.Highlighter::ValidateAll()
extern "C" IL2CPP_METHOD_ATTR void Highlighter_ValidateAll_m2299456659 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	{
		Highlighter_ValidateRanges_m3333118849(__this, /*hidden argument*/NULL);
		Highlighter_TweenSet_m4000638643(__this, /*hidden argument*/NULL);
		Highlighter_ConstantSet_m2206652421(__this, /*hidden argument*/NULL);
		HighlighterCore_SetDirty_m1369823605(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.Highlighter::ValidateRanges()
extern "C" IL2CPP_METHOD_ATTR void Highlighter_ValidateRanges_m3333118849 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__tweenDuration_35();
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_001b;
		}
	}
	{
		__this->set__tweenDuration_35((0.0f));
	}

IL_001b:
	{
		float L_1 = __this->get__constantFadeInTime_44();
		if ((!(((float)L_1) < ((float)(0.0f)))))
		{
			goto IL_0036;
		}
	}
	{
		__this->set__constantFadeInTime_44((0.0f));
	}

IL_0036:
	{
		float L_2 = __this->get__constantFadeOutTime_45();
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		__this->set__constantFadeInTime_44((0.0f));
	}

IL_0051:
	{
		return;
	}
}
// System.Void HighlightingSystem.Highlighter::Hover(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_Hover_m3025840679 (Highlighter_t672210414 * __this, Color_t2555686324  ___color0, const RuntimeMethod* method)
{
	{
		Color_t2555686324  L_0 = ___color0;
		__this->set__hoverColor_31(L_0);
		Highlighter_set_hover_m3588790658(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.Highlighter::ConstantOn(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_ConstantOn_m549377914 (Highlighter_t672210414 * __this, float ___fadeTime0, const RuntimeMethod* method)
{
	{
		float L_0 = ___fadeTime0;
		Highlighter_ConstantSet_m1419569991(__this, L_0, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.Highlighter::ConstantOn(UnityEngine.Color,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_ConstantOn_m1845554493 (Highlighter_t672210414 * __this, Color_t2555686324  ___color0, float ___fadeTime1, const RuntimeMethod* method)
{
	{
		Color_t2555686324  L_0 = ___color0;
		__this->set__constantColor_43(L_0);
		float L_1 = ___fadeTime1;
		Highlighter_ConstantSet_m1419569991(__this, L_1, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.Highlighter::ConstantOff(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_ConstantOff_m3681887709 (Highlighter_t672210414 * __this, float ___fadeTime0, const RuntimeMethod* method)
{
	{
		float L_0 = ___fadeTime0;
		Highlighter_ConstantSet_m1419569991(__this, L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.Highlighter::ConstantSwitch(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_ConstantSwitch_m1998683593 (Highlighter_t672210414 * __this, float ___fadeTime0, const RuntimeMethod* method)
{
	{
		float L_0 = ___fadeTime0;
		bool L_1 = __this->get__constant_42();
		Highlighter_ConstantSet_m1419569991(__this, L_0, (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.Highlighter::ConstantOnImmediate()
extern "C" IL2CPP_METHOD_ATTR void Highlighter_ConstantOnImmediate_m3844735251 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	{
		Highlighter_ConstantSet_m1419569991(__this, (0.0f), (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.Highlighter::ConstantOnImmediate(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_ConstantOnImmediate_m629589632 (Highlighter_t672210414 * __this, Color_t2555686324  ___color0, const RuntimeMethod* method)
{
	{
		Color_t2555686324  L_0 = ___color0;
		__this->set__constantColor_43(L_0);
		Highlighter_ConstantSet_m1419569991(__this, (0.0f), (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.Highlighter::ConstantOffImmediate()
extern "C" IL2CPP_METHOD_ATTR void Highlighter_ConstantOffImmediate_m896226998 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	{
		Highlighter_ConstantSet_m1419569991(__this, (0.0f), (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.Highlighter::ConstantSwitchImmediate()
extern "C" IL2CPP_METHOD_ATTR void Highlighter_ConstantSwitchImmediate_m3095673995 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__constant_42();
		Highlighter_ConstantSet_m1419569991(__this, (0.0f), (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.Highlighter::Off()
extern "C" IL2CPP_METHOD_ATTR void Highlighter_Off_m2001652583 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	{
		Highlighter_set_hover_m3588790658(__this, (bool)0, /*hidden argument*/NULL);
		Highlighter_TweenSet_m2447418550(__this, (bool)0, /*hidden argument*/NULL);
		Highlighter_ConstantSet_m1419569991(__this, (0.0f), (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.Highlighter::TweenStart()
extern "C" IL2CPP_METHOD_ATTR void Highlighter_TweenStart_m87541005 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	{
		Highlighter_TweenSet_m2447418550(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.Highlighter::TweenStop()
extern "C" IL2CPP_METHOD_ATTR void Highlighter_TweenStop_m4123635268 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	{
		Highlighter_TweenSet_m2447418550(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.Highlighter::TweenSet(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_TweenSet_m2447418550 (Highlighter_t672210414 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__tween_33(L_0);
		bool L_1 = __this->get__tweenEnabled_50();
		bool L_2 = __this->get__tween_33();
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0030;
		}
	}
	{
		bool L_3 = __this->get__tween_33();
		__this->set__tweenEnabled_50(L_3);
		float L_4 = Highlighter_GetTweenTime_m3824541298(__this, /*hidden argument*/NULL);
		__this->set__tweenStart_51(L_4);
	}

IL_0030:
	{
		return;
	}
}
// System.Void HighlightingSystem.Highlighter::ConstantSet(System.Single,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_ConstantSet_m1419569991 (Highlighter_t672210414 * __this, float ___fadeTime0, bool ___value1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	Highlighter_t672210414 * G_B5_0 = NULL;
	Highlighter_t672210414 * G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	Highlighter_t672210414 * G_B6_1 = NULL;
	{
		float L_0 = ___fadeTime0;
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_0012;
		}
	}
	{
		___fadeTime0 = (0.0f);
	}

IL_0012:
	{
		float L_1 = __this->get__constantDuration_54();
		float L_2 = ___fadeTime0;
		if ((((float)L_1) == ((float)L_2)))
		{
			goto IL_005d;
		}
	}
	{
		float L_3 = Highlighter_GetConstantTime_m831727855(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = __this->get__constantDuration_54();
		G_B4_0 = __this;
		if ((!(((float)L_4) > ((float)(0.0f)))))
		{
			G_B5_0 = __this;
			goto IL_004e;
		}
	}
	{
		float L_5 = V_0;
		float L_6 = ___fadeTime0;
		float L_7 = __this->get__constantDuration_54();
		float L_8 = V_0;
		float L_9 = __this->get__constantStart_53();
		G_B6_0 = ((float)il2cpp_codegen_subtract((float)L_5, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_6/(float)L_7)), (float)((float)il2cpp_codegen_subtract((float)L_8, (float)L_9))))));
		G_B6_1 = G_B4_0;
		goto IL_0051;
	}

IL_004e:
	{
		float L_10 = V_0;
		float L_11 = ___fadeTime0;
		G_B6_0 = ((float)il2cpp_codegen_subtract((float)L_10, (float)L_11));
		G_B6_1 = G_B5_0;
	}

IL_0051:
	{
		NullCheck(G_B6_1);
		G_B6_1->set__constantStart_53(G_B6_0);
		float L_12 = ___fadeTime0;
		__this->set__constantDuration_54(L_12);
	}

IL_005d:
	{
		bool L_13 = ___value1;
		__this->set__constant_42(L_13);
		bool L_14 = __this->get__constantEnabled_52();
		bool L_15 = __this->get__constant_42();
		if ((((int32_t)L_14) == ((int32_t)L_15)))
		{
			goto IL_00a1;
		}
	}
	{
		bool L_16 = __this->get__constant_42();
		__this->set__constantEnabled_52(L_16);
		float L_17 = Highlighter_GetConstantTime_m831727855(__this, /*hidden argument*/NULL);
		float L_18 = __this->get__constantDuration_54();
		float L_19 = Highlighter_get_constantValue_m3011646541(__this, /*hidden argument*/NULL);
		__this->set__constantStart_53(((float)il2cpp_codegen_subtract((float)L_17, (float)((float)il2cpp_codegen_multiply((float)L_18, (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_19)))))));
	}

IL_00a1:
	{
		return;
	}
}
// System.Void HighlightingSystem.Highlighter::TweenSet()
extern "C" IL2CPP_METHOD_ATTR void Highlighter_TweenSet_m4000638643 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__tween_33();
		Highlighter_TweenSet_m2447418550(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.Highlighter::ConstantSet()
extern "C" IL2CPP_METHOD_ATTR void Highlighter_ConstantSet_m2206652421 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__constant_42();
		Highlighter_ConstantSet_m2418045208(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.Highlighter::ConstantSet(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_ConstantSet_m2418045208 (Highlighter_t672210414 * __this, bool ___value0, const RuntimeMethod* method)
{
	Highlighter_t672210414 * G_B2_0 = NULL;
	Highlighter_t672210414 * G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Highlighter_t672210414 * G_B3_1 = NULL;
	{
		bool L_0 = ___value0;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0012;
		}
	}
	{
		float L_1 = Highlighter_get_constantFadeInTime_m2897410839(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0012:
	{
		float L_2 = __this->get__constantFadeOutTime_45();
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		bool L_3 = ___value0;
		NullCheck(G_B3_1);
		Highlighter_ConstantSet_m1419569991(G_B3_1, G_B3_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.Highlighter::UpdateHighlighting()
extern "C" IL2CPP_METHOD_ATTR void Highlighter_UpdateHighlighting_m1146510125 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Highlighter_t672210414 * G_B3_0 = NULL;
	Highlighter_t672210414 * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	Highlighter_t672210414 * G_B4_1 = NULL;
	float G_B10_0 = 0.0f;
	Highlighter_t672210414 * G_B13_0 = NULL;
	Highlighter_t672210414 * G_B12_0 = NULL;
	int32_t G_B14_0 = 0;
	Highlighter_t672210414 * G_B14_1 = NULL;
	float G_B18_0 = 0.0f;
	Highlighter_t672210414 * G_B21_0 = NULL;
	Highlighter_t672210414 * G_B20_0 = NULL;
	int32_t G_B22_0 = 0;
	Highlighter_t672210414 * G_B22_1 = NULL;
	{
		bool L_0 = Highlighter_get_hover_m1413188133(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		Color_t2555686324  L_1 = __this->get__hoverColor_31();
		((HighlighterCore_t3117871998 *)__this)->set_color_16(L_1);
		bool L_2 = __this->get__overlay_29();
		G_B2_0 = __this;
		if (!L_2)
		{
			G_B3_0 = __this;
			goto IL_0029;
		}
	}
	{
		G_B4_0 = 1;
		G_B4_1 = G_B2_0;
		goto IL_002a;
	}

IL_0029:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_002a:
	{
		NullCheck(G_B4_1);
		((HighlighterCore_t3117871998 *)G_B4_1)->set_mode_14(G_B4_0);
		return;
	}

IL_0030:
	{
		bool L_3 = __this->get__tweenEnabled_50();
		if (!L_3)
		{
			goto IL_00dc;
		}
	}
	{
		float L_4 = Highlighter_GetTweenTime_m3824541298(__this, /*hidden argument*/NULL);
		float L_5 = __this->get__tweenStart_51();
		float L_6 = __this->get__tweenDelay_39();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_4, (float)((float)il2cpp_codegen_add((float)L_5, (float)L_6))));
		float L_7 = V_0;
		if ((!(((float)L_7) >= ((float)(0.0f)))))
		{
			goto IL_00dc;
		}
	}
	{
		float L_8 = __this->get__tweenDuration_35();
		if ((!(((float)L_8) > ((float)(0.0f)))))
		{
			goto IL_0078;
		}
	}
	{
		float L_9 = V_0;
		float L_10 = __this->get__tweenDuration_35();
		G_B10_0 = ((float)((float)L_9/(float)L_10));
		goto IL_007d;
	}

IL_0078:
	{
		G_B10_0 = (0.0f);
	}

IL_007d:
	{
		V_1 = G_B10_0;
		float L_11 = V_1;
		int32_t L_12 = __this->get__tweenLoop_37();
		bool L_13 = __this->get__tweenReverse_36();
		int32_t L_14 = __this->get__tweenRepeatCount_40();
		float L_15 = Highlighter_Loop_m2912696432(__this, L_11, L_12, L_13, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		float L_16 = V_1;
		if ((!(((float)L_16) >= ((float)(0.0f)))))
		{
			goto IL_00dc;
		}
	}
	{
		float L_17 = V_1;
		int32_t L_18 = __this->get__tweenEasing_38();
		float L_19 = Highlighter_Ease_m1049319965(__this, L_17, L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		Gradient_t3067099924 * L_20 = __this->get__tweenGradient_34();
		float L_21 = V_1;
		NullCheck(L_20);
		Color_t2555686324  L_22 = Gradient_Evaluate_m1761152518(L_20, L_21, /*hidden argument*/NULL);
		((HighlighterCore_t3117871998 *)__this)->set_color_16(L_22);
		bool L_23 = __this->get__overlay_29();
		G_B12_0 = __this;
		if (!L_23)
		{
			G_B13_0 = __this;
			goto IL_00d5;
		}
	}
	{
		G_B14_0 = 1;
		G_B14_1 = G_B12_0;
		goto IL_00d6;
	}

IL_00d5:
	{
		G_B14_0 = 0;
		G_B14_1 = G_B13_0;
	}

IL_00d6:
	{
		NullCheck(G_B14_1);
		((HighlighterCore_t3117871998 *)G_B14_1)->set_mode_14(G_B14_0);
		return;
	}

IL_00dc:
	{
		bool L_24 = __this->get__constantEnabled_52();
		if (!L_24)
		{
			goto IL_00f2;
		}
	}
	{
		float L_25 = Highlighter_get_constantValue_m3011646541(__this, /*hidden argument*/NULL);
		G_B18_0 = L_25;
		goto IL_00fe;
	}

IL_00f2:
	{
		float L_26 = Highlighter_get_constantValue_m3011646541(__this, /*hidden argument*/NULL);
		G_B18_0 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_26));
	}

IL_00fe:
	{
		V_2 = G_B18_0;
		float L_27 = V_2;
		if ((!(((float)L_27) > ((float)(0.0f)))))
		{
			goto IL_0150;
		}
	}
	{
		float L_28 = V_2;
		int32_t L_29 = __this->get__constantEasing_46();
		float L_30 = Highlighter_Ease_m1049319965(__this, L_28, L_29, /*hidden argument*/NULL);
		V_2 = L_30;
		Color_t2555686324  L_31 = __this->get__constantColor_43();
		((HighlighterCore_t3117871998 *)__this)->set_color_16(L_31);
		Color_t2555686324 * L_32 = ((HighlighterCore_t3117871998 *)__this)->get_address_of_color_16();
		Color_t2555686324 * L_33 = L_32;
		float L_34 = L_33->get_a_3();
		float L_35 = V_2;
		L_33->set_a_3(((float)il2cpp_codegen_multiply((float)L_34, (float)L_35)));
		bool L_36 = __this->get__overlay_29();
		G_B20_0 = __this;
		if (!L_36)
		{
			G_B21_0 = __this;
			goto IL_0149;
		}
	}
	{
		G_B22_0 = 1;
		G_B22_1 = G_B20_0;
		goto IL_014a;
	}

IL_0149:
	{
		G_B22_0 = 0;
		G_B22_1 = G_B21_0;
	}

IL_014a:
	{
		NullCheck(G_B22_1);
		((HighlighterCore_t3117871998 *)G_B22_1)->set_mode_14(G_B22_0);
		return;
	}

IL_0150:
	{
		bool L_37 = __this->get__occluder_30();
		if (!L_37)
		{
			goto IL_0163;
		}
	}
	{
		((HighlighterCore_t3117871998 *)__this)->set_mode_14(2);
		return;
	}

IL_0163:
	{
		((HighlighterCore_t3117871998 *)__this)->set_mode_14((-1));
		return;
	}
}
// System.Boolean HighlightingSystem.Highlighter::TransformFilterInclude(UnityEngine.Renderer,System.Collections.Generic.List`1<System.Int32>)
extern "C" IL2CPP_METHOD_ATTR bool Highlighter_TransformFilterInclude_m201777354 (Highlighter_t672210414 * __this, Renderer_t2627027031 * ___renderer0, List_1_t128053199 * ___submeshIndices1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Highlighter_TransformFilterInclude_m201777354_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_t3600365921 * V_0 = NULL;
	int32_t V_1 = 0;
	Transform_t3600365921 * V_2 = NULL;
	{
		Renderer_t2627027031 * L_0 = ___renderer0;
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0045;
	}

IL_000e:
	{
		List_1_t777473367 * L_2 = __this->get__filterList_49();
		int32_t L_3 = V_1;
		NullCheck(L_2);
		Transform_t3600365921 * L_4 = List_1_get_Item_m1853759484(L_2, L_3, /*hidden argument*/List_1_get_Item_m1853759484_RuntimeMethod_var);
		V_2 = L_4;
		Transform_t3600365921 * L_5 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_5, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_0041;
	}

IL_002c:
	{
		Transform_t3600365921 * L_7 = V_0;
		Transform_t3600365921 * L_8 = V_2;
		NullCheck(L_7);
		bool L_9 = Transform_IsChildOf_m224006092(L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		List_1_t128053199 * L_10 = ___submeshIndices1;
		NullCheck(L_10);
		List_1_Add_m697420525(L_10, (-1), /*hidden argument*/List_1_Add_m697420525_RuntimeMethod_var);
		return (bool)1;
	}

IL_0041:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0045:
	{
		int32_t L_12 = V_1;
		List_1_t777473367 * L_13 = __this->get__filterList_49();
		NullCheck(L_13);
		int32_t L_14 = List_1_get_Count_m3686671980(L_13, /*hidden argument*/List_1_get_Count_m3686671980_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}
}
// System.Boolean HighlightingSystem.Highlighter::TransformFilterExclude(UnityEngine.Renderer,System.Collections.Generic.List`1<System.Int32>)
extern "C" IL2CPP_METHOD_ATTR bool Highlighter_TransformFilterExclude_m1896708845 (Highlighter_t672210414 * __this, Renderer_t2627027031 * ___renderer0, List_1_t128053199 * ___submeshIndices1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Highlighter_TransformFilterExclude_m1896708845_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_t3600365921 * V_0 = NULL;
	int32_t V_1 = 0;
	Transform_t3600365921 * V_2 = NULL;
	{
		Renderer_t2627027031 * L_0 = ___renderer0;
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_003e;
	}

IL_000e:
	{
		List_1_t777473367 * L_2 = __this->get__filterList_49();
		int32_t L_3 = V_1;
		NullCheck(L_2);
		Transform_t3600365921 * L_4 = List_1_get_Item_m1853759484(L_2, L_3, /*hidden argument*/List_1_get_Item_m1853759484_RuntimeMethod_var);
		V_2 = L_4;
		Transform_t3600365921 * L_5 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_5, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_003a;
	}

IL_002c:
	{
		Transform_t3600365921 * L_7 = V_0;
		Transform_t3600365921 * L_8 = V_2;
		NullCheck(L_7);
		bool L_9 = Transform_IsChildOf_m224006092(L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}
	{
		return (bool)0;
	}

IL_003a:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_003e:
	{
		int32_t L_11 = V_1;
		List_1_t777473367 * L_12 = __this->get__filterList_49();
		NullCheck(L_12);
		int32_t L_13 = List_1_get_Count_m3686671980(L_12, /*hidden argument*/List_1_get_Count_m3686671980_RuntimeMethod_var);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_000e;
		}
	}
	{
		List_1_t128053199 * L_14 = ___submeshIndices1;
		NullCheck(L_14);
		List_1_Add_m697420525(L_14, (-1), /*hidden argument*/List_1_Add_m697420525_RuntimeMethod_var);
		return (bool)1;
	}
}
// System.Single HighlightingSystem.Highlighter::Loop(System.Single,HighlightingSystem.LoopMode,System.Boolean,System.Int32)
extern "C" IL2CPP_METHOD_ATTR float Highlighter_Loop_m2912696432 (Highlighter_t672210414 * __this, float ___x0, int32_t ___loop1, bool ___reverse2, int32_t ___repeatCount3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Highlighter_Loop_m2912696432_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = (-1.0f);
		int32_t L_0 = ___loop1;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_003e;
			}
			case 2:
			{
				goto IL_005f;
			}
			case 3:
			{
				goto IL_009d;
			}
		}
	}
	{
		goto IL_0021;
	}

IL_0021:
	{
		float L_1 = ___x0;
		if ((!(((float)L_1) >= ((float)(0.0f)))))
		{
			goto IL_0039;
		}
	}
	{
		float L_2 = ___x0;
		if ((!(((float)L_2) <= ((float)(1.0f)))))
		{
			goto IL_0039;
		}
	}
	{
		float L_3 = ___x0;
		V_0 = L_3;
	}

IL_0039:
	{
		goto IL_00a9;
	}

IL_003e:
	{
		float L_4 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_5 = Mathf_FloorToInt_m1870542928(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = ___repeatCount3;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_7 = V_1;
		int32_t L_8 = ___repeatCount3;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_005a;
		}
	}

IL_0055:
	{
		float L_9 = ___x0;
		int32_t L_10 = V_1;
		V_0 = ((float)il2cpp_codegen_subtract((float)L_9, (float)(((float)((float)L_10)))));
	}

IL_005a:
	{
		goto IL_00a9;
	}

IL_005f:
	{
		float L_11 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_12 = Mathf_FloorToInt_m1870542928(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)L_11, (float)(0.5f))), /*hidden argument*/NULL);
		V_2 = L_12;
		int32_t L_13 = ___repeatCount3;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_14 = V_2;
		int32_t L_15 = ___repeatCount3;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0098;
		}
	}

IL_007c:
	{
		float L_16 = ___x0;
		int32_t L_17 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_18 = fabsf(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_16, (float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_17))), (float)(2.0f))))), (float)(1.0f))));
		V_0 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_18));
	}

IL_0098:
	{
		goto IL_00a9;
	}

IL_009d:
	{
		float L_19 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_20 = Mathf_Clamp01_m56433566(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		V_0 = L_20;
		goto IL_00a9;
	}

IL_00a9:
	{
		float L_21 = V_0;
		if ((!(((float)L_21) >= ((float)(0.0f)))))
		{
			goto IL_00c2;
		}
	}
	{
		bool L_22 = ___reverse2;
		if (!L_22)
		{
			goto IL_00c2;
		}
	}
	{
		float L_23 = V_0;
		V_0 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_23));
	}

IL_00c2:
	{
		float L_24 = V_0;
		return L_24;
	}
}
// System.Single HighlightingSystem.Highlighter::Ease(System.Single,HighlightingSystem.Easing)
extern "C" IL2CPP_METHOD_ATTR float Highlighter_Ease_m1049319965 (Highlighter_t672210414 * __this, float ___x0, int32_t ___easing1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Highlighter_Ease_m1049319965_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float G_B8_0 = 0.0f;
	{
		float L_0 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m56433566(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___x0 = L_1;
		int32_t L_2 = ___easing1;
		switch (L_2)
		{
			case 0:
			{
				goto IL_003b;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_004b;
			}
			case 3:
			{
				goto IL_005b;
			}
			case 4:
			{
				goto IL_008f;
			}
			case 5:
			{
				goto IL_009a;
			}
			case 6:
			{
				goto IL_00b4;
			}
			case 7:
			{
				goto IL_00f6;
			}
			case 8:
			{
				goto IL_010e;
			}
			case 9:
			{
				goto IL_0120;
			}
		}
	}
	{
		goto IL_003b;
	}

IL_003b:
	{
		float L_3 = ___x0;
		V_0 = L_3;
		goto IL_013e;
	}

IL_0042:
	{
		float L_4 = ___x0;
		float L_5 = ___x0;
		V_0 = ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5));
		goto IL_013e;
	}

IL_004b:
	{
		float L_6 = ___x0;
		float L_7 = ___x0;
		V_0 = ((float)il2cpp_codegen_multiply((float)((-L_6)), (float)((float)il2cpp_codegen_subtract((float)L_7, (float)(2.0f)))));
		goto IL_013e;
	}

IL_005b:
	{
		float L_8 = ___x0;
		if ((!(((float)L_8) < ((float)(0.5f)))))
		{
			goto IL_0074;
		}
	}
	{
		float L_9 = ___x0;
		float L_10 = ___x0;
		G_B8_0 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_9)), (float)L_10));
		goto IL_0089;
	}

IL_0074:
	{
		float L_11 = ___x0;
		float L_12 = ___x0;
		G_B8_0 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_11)), (float)((float)il2cpp_codegen_subtract((float)(2.0f), (float)L_12)))), (float)(1.0f)));
	}

IL_0089:
	{
		V_0 = G_B8_0;
		goto IL_013e;
	}

IL_008f:
	{
		float L_13 = ___x0;
		float L_14 = ___x0;
		float L_15 = ___x0;
		V_0 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_13, (float)L_14)), (float)L_15));
		goto IL_013e;
	}

IL_009a:
	{
		float L_16 = ___x0;
		___x0 = ((float)il2cpp_codegen_subtract((float)L_16, (float)(1.0f)));
		float L_17 = ___x0;
		float L_18 = ___x0;
		float L_19 = ___x0;
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_17, (float)L_18)), (float)L_19)), (float)(1.0f)));
		goto IL_013e;
	}

IL_00b4:
	{
		float L_20 = ___x0;
		if ((!(((float)L_20) < ((float)(0.5f)))))
		{
			goto IL_00d0;
		}
	}
	{
		float L_21 = ___x0;
		float L_22 = ___x0;
		float L_23 = ___x0;
		V_0 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(4.0f), (float)L_21)), (float)L_22)), (float)L_23));
		goto IL_00f1;
	}

IL_00d0:
	{
		float L_24 = ___x0;
		___x0 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_24)), (float)(2.0f)));
		float L_25 = ___x0;
		float L_26 = ___x0;
		float L_27 = ___x0;
		V_0 = ((float)il2cpp_codegen_multiply((float)(0.5f), (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_25, (float)L_26)), (float)L_27)), (float)(2.0f)))));
	}

IL_00f1:
	{
		goto IL_013e;
	}

IL_00f6:
	{
		float L_28 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_29 = cosf(((float)il2cpp_codegen_multiply((float)L_28, (float)(1.57079637f))));
		V_0 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_29));
		goto IL_013e;
	}

IL_010e:
	{
		float L_30 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_31 = sinf(((float)il2cpp_codegen_multiply((float)L_30, (float)(1.57079637f))));
		V_0 = L_31;
		goto IL_013e;
	}

IL_0120:
	{
		float L_32 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_33 = cosf(((float)il2cpp_codegen_multiply((float)L_32, (float)(3.14159274f))));
		V_0 = ((float)il2cpp_codegen_multiply((float)(-0.5f), (float)((float)il2cpp_codegen_subtract((float)L_33, (float)(1.0f)))));
		goto IL_013e;
	}

IL_013e:
	{
		float L_34 = V_0;
		return L_34;
	}
}
// System.Single HighlightingSystem.Highlighter::GetTweenTime()
extern "C" IL2CPP_METHOD_ATTR float Highlighter_GetTweenTime_m3824541298 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	float G_B3_0 = 0.0f;
	{
		bool L_0 = __this->get__tweenUseUnscaledTime_41();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		float L_1 = Time_get_unscaledTime_m3457564332(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001a;
	}

IL_0015:
	{
		float L_2 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// System.Single HighlightingSystem.Highlighter::GetConstantTime()
extern "C" IL2CPP_METHOD_ATTR float Highlighter_GetConstantTime_m831727855 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	float G_B3_0 = 0.0f;
	{
		bool L_0 = __this->get__constantUseUnscaledTime_47();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		float L_1 = Time_get_unscaledTime_m3457564332(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001a;
	}

IL_0015:
	{
		float L_2 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// UnityEngine.Color HighlightingSystem.Highlighter::HSVToRGB(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Highlighter_HSVToRGB_m852676966 (RuntimeObject * __this /* static, unused */, float ___hue0, float ___saturation1, float ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Highlighter_HSVToRGB_m852676966_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = ___hue0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m56433566(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_multiply((float)(6.0f), (float)L_1));
		float L_2 = ___saturation1;
		float L_3 = Mathf_Clamp01_m56433566(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		___saturation1 = L_3;
		float L_4 = ___value2;
		float L_5 = Mathf_Clamp01_m56433566(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		___value2 = L_5;
		float L_6 = ___value2;
		float L_7 = V_0;
		float L_8 = V_0;
		float L_9 = Mathf_Max_m3146388979(NULL /*static, unused*/, ((float)il2cpp_codegen_subtract((float)(2.0f), (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_8, (float)(4.0f))), /*hidden argument*/NULL);
		float L_10 = Mathf_Clamp01_m56433566(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		float L_11 = ___saturation1;
		float L_12 = ___value2;
		float L_13 = V_0;
		float L_14 = V_0;
		float L_15 = Mathf_Min_m1073399594(NULL /*static, unused*/, L_13, ((float)il2cpp_codegen_subtract((float)(4.0f), (float)L_14)), /*hidden argument*/NULL);
		float L_16 = Mathf_Clamp01_m56433566(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		float L_17 = ___saturation1;
		float L_18 = ___value2;
		float L_19 = V_0;
		float L_20 = V_0;
		float L_21 = Mathf_Min_m1073399594(NULL /*static, unused*/, ((float)il2cpp_codegen_subtract((float)L_19, (float)(2.0f))), ((float)il2cpp_codegen_subtract((float)(6.0f), (float)L_20)), /*hidden argument*/NULL);
		float L_22 = Mathf_Clamp01_m56433566(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		float L_23 = ___saturation1;
		Color_t2555686324  L_24;
		memset(&L_24, 0, sizeof(L_24));
		Color__ctor_m286683560((&L_24), ((float)il2cpp_codegen_multiply((float)L_6, (float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_10, (float)(1.0f))), (float)L_11)))))), ((float)il2cpp_codegen_multiply((float)L_12, (float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_16, (float)(1.0f))), (float)L_17)))))), ((float)il2cpp_codegen_multiply((float)L_18, (float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_22, (float)(1.0f))), (float)L_23)))))), /*hidden argument*/NULL);
		return L_24;
	}
}
// System.Void HighlightingSystem.Highlighter::On()
extern "C" IL2CPP_METHOD_ATTR void Highlighter_On_m3137510805 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	{
		Highlighter_set_hover_m3588790658(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.Highlighter::On(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_On_m4055708718 (Highlighter_t672210414 * __this, Color_t2555686324  ___color0, const RuntimeMethod* method)
{
	{
		Color_t2555686324  L_0 = ___color0;
		Highlighter_Hover_m3025840679(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.Highlighter::OnParams(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_OnParams_m2252697768 (Highlighter_t672210414 * __this, Color_t2555686324  ___color0, const RuntimeMethod* method)
{
	{
		Color_t2555686324  L_0 = ___color0;
		__this->set__hoverColor_31(L_0);
		return;
	}
}
// System.Void HighlightingSystem.Highlighter::ConstantParams(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_ConstantParams_m94334308 (Highlighter_t672210414 * __this, Color_t2555686324  ___color0, const RuntimeMethod* method)
{
	{
		Color_t2555686324  L_0 = ___color0;
		__this->set__constantColor_43(L_0);
		return;
	}
}
// System.Void HighlightingSystem.Highlighter::FlashingParams(UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_FlashingParams_m1173740141 (Highlighter_t672210414 * __this, Color_t2555686324  ___color10, Color_t2555686324  ___color21, float ___freq2, const RuntimeMethod* method)
{
	{
		GradientColorKeyU5BU5D_t4133731744* L_0 = __this->get_flashingColorKeys_55();
		NullCheck(L_0);
		Color_t2555686324  L_1 = ___color10;
		((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->set_color_0(L_1);
		GradientColorKeyU5BU5D_t4133731744* L_2 = __this->get_flashingColorKeys_55();
		NullCheck(L_2);
		Color_t2555686324  L_3 = ___color21;
		((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->set_color_0(L_3);
		Gradient_t3067099924 * L_4 = __this->get__tweenGradient_34();
		GradientColorKeyU5BU5D_t4133731744* L_5 = __this->get_flashingColorKeys_55();
		GradientAlphaKeyU5BU5D_t1986482519* L_6 = __this->get_flashingAlphaKeys_56();
		NullCheck(L_4);
		Gradient_SetKeys_m541963860(L_4, L_5, L_6, /*hidden argument*/NULL);
		float L_7 = ___freq2;
		__this->set__tweenDuration_35(((float)((float)(1.0f)/(float)L_7)));
		return;
	}
}
// System.Void HighlightingSystem.Highlighter::FlashingOn()
extern "C" IL2CPP_METHOD_ATTR void Highlighter_FlashingOn_m2831985614 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	{
		Highlighter_TweenSet_m2447418550(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.Highlighter::FlashingOn(UnityEngine.Color,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_FlashingOn_m2639306482 (Highlighter_t672210414 * __this, Color_t2555686324  ___color10, Color_t2555686324  ___color21, const RuntimeMethod* method)
{
	{
		GradientColorKeyU5BU5D_t4133731744* L_0 = __this->get_flashingColorKeys_55();
		NullCheck(L_0);
		Color_t2555686324  L_1 = ___color10;
		((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->set_color_0(L_1);
		GradientColorKeyU5BU5D_t4133731744* L_2 = __this->get_flashingColorKeys_55();
		NullCheck(L_2);
		Color_t2555686324  L_3 = ___color21;
		((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->set_color_0(L_3);
		Gradient_t3067099924 * L_4 = __this->get__tweenGradient_34();
		GradientColorKeyU5BU5D_t4133731744* L_5 = __this->get_flashingColorKeys_55();
		GradientAlphaKeyU5BU5D_t1986482519* L_6 = __this->get_flashingAlphaKeys_56();
		NullCheck(L_4);
		Gradient_SetKeys_m541963860(L_4, L_5, L_6, /*hidden argument*/NULL);
		Highlighter_TweenSet_m2447418550(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.Highlighter::FlashingOn(UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_FlashingOn_m66103418 (Highlighter_t672210414 * __this, Color_t2555686324  ___color10, Color_t2555686324  ___color21, float ___freq2, const RuntimeMethod* method)
{
	{
		GradientColorKeyU5BU5D_t4133731744* L_0 = __this->get_flashingColorKeys_55();
		NullCheck(L_0);
		Color_t2555686324  L_1 = ___color10;
		((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->set_color_0(L_1);
		GradientColorKeyU5BU5D_t4133731744* L_2 = __this->get_flashingColorKeys_55();
		NullCheck(L_2);
		Color_t2555686324  L_3 = ___color21;
		((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->set_color_0(L_3);
		Gradient_t3067099924 * L_4 = __this->get__tweenGradient_34();
		GradientColorKeyU5BU5D_t4133731744* L_5 = __this->get_flashingColorKeys_55();
		GradientAlphaKeyU5BU5D_t1986482519* L_6 = __this->get_flashingAlphaKeys_56();
		NullCheck(L_4);
		Gradient_SetKeys_m541963860(L_4, L_5, L_6, /*hidden argument*/NULL);
		float L_7 = ___freq2;
		__this->set__tweenDuration_35(((float)((float)(1.0f)/(float)L_7)));
		Highlighter_TweenSet_m2447418550(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.Highlighter::FlashingOn(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Highlighter_FlashingOn_m1779230420 (Highlighter_t672210414 * __this, float ___freq0, const RuntimeMethod* method)
{
	{
		float L_0 = ___freq0;
		__this->set__tweenDuration_35(((float)((float)(1.0f)/(float)L_0)));
		Highlighter_TweenSet_m2447418550(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.Highlighter::FlashingOff()
extern "C" IL2CPP_METHOD_ATTR void Highlighter_FlashingOff_m3181078149 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	{
		Highlighter_TweenSet_m2447418550(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.Highlighter::FlashingSwitch()
extern "C" IL2CPP_METHOD_ATTR void Highlighter_FlashingSwitch_m2758614773 (Highlighter_t672210414 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = Highlighter_get_tween_m3115203341(__this, /*hidden argument*/NULL);
		Highlighter_set_tween_m1696351472(__this, (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
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
// System.Void HighlightingSystem.HighlighterBlocker::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HighlighterBlocker__ctor_m684174407 (HighlighterBlocker_t3431127703 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
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
// System.Void HighlightingSystem.HighlighterCore::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HighlighterCore__ctor_m200611106 (HighlighterCore_t3117871998 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlighterCore__ctor_m200611106_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Color_t2555686324  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Color__ctor_m2943235014((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_occluderColor_5(L_0);
		Color_t2555686324  L_1 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_color_16(L_1);
		List_1_t3248237193 * L_2 = (List_1_t3248237193 *)il2cpp_codegen_object_new(List_1_t3248237193_il2cpp_TypeInfo_var);
		List_1__ctor_m3303104186(L_2, /*hidden argument*/List_1__ctor_m3303104186_RuntimeMethod_var);
		__this->set_highlightableRenderers_18(L_2);
		__this->set_isDirty_19((bool)1);
		Color_t2555686324  L_3 = Color_get_clear_m1016382534(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_cachedColor_21(L_3);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<HighlightingSystem.HighlighterCore> HighlightingSystem.HighlighterCore::get_highlighters()
extern "C" IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t35480989 * HighlighterCore_get_highlighters_m3025014769 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlighterCore_get_highlighters_m3025014769_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		ReadOnlyCollection_1_t35480989 * L_0 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get_sHighlightersReadonly_13();
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		List_1_t294979444 * L_1 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get_sHighlighters_12();
		NullCheck(L_1);
		ReadOnlyCollection_1_t35480989 * L_2 = List_1_AsReadOnly_m495744022(L_1, /*hidden argument*/List_1_AsReadOnly_m495744022_RuntimeMethod_var);
		((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->set_sHighlightersReadonly_13(L_2);
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		ReadOnlyCollection_1_t35480989 * L_3 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get_sHighlightersReadonly_13();
		return L_3;
	}
}
// UnityEngine.Shader HighlightingSystem.HighlighterCore::get_opaqueShader()
extern "C" IL2CPP_METHOD_ATTR Shader_t4151988712 * HighlighterCore_get_opaqueShader_m700923225 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlighterCore_get_opaqueShader_m700923225_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		Shader_t4151988712 * L_0 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get__opaqueShader_22();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		Shader_t4151988712 * L_2 = Shader_Find_m2092206247(NULL /*static, unused*/, _stringLiteral3294177151, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->set__opaqueShader_22(L_2);
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		Shader_t4151988712 * L_3 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get__opaqueShader_22();
		return L_3;
	}
}
// UnityEngine.Shader HighlightingSystem.HighlighterCore::get_transparentShader()
extern "C" IL2CPP_METHOD_ATTR Shader_t4151988712 * HighlighterCore_get_transparentShader_m2954448632 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlighterCore_get_transparentShader_m2954448632_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		Shader_t4151988712 * L_0 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get__transparentShader_23();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		Shader_t4151988712 * L_2 = Shader_Find_m2092206247(NULL /*static, unused*/, _stringLiteral2053713203, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->set__transparentShader_23(L_2);
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		Shader_t4151988712 * L_3 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get__transparentShader_23();
		return L_3;
	}
}
// UnityEngine.Material HighlightingSystem.HighlighterCore::get_opaqueMaterial()
extern "C" IL2CPP_METHOD_ATTR Material_t340375123 * HighlighterCore_get_opaqueMaterial_m177517982 (HighlighterCore_t3117871998 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlighterCore_get_opaqueMaterial_m177517982_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_t340375123 * L_0 = __this->get__opaqueMaterial_24();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		Shader_t4151988712 * L_2 = HighlighterCore_get_opaqueShader_m700923225(NULL /*static, unused*/, /*hidden argument*/NULL);
		Material_t340375123 * L_3 = (Material_t340375123 *)il2cpp_codegen_object_new(Material_t340375123_il2cpp_TypeInfo_var);
		Material__ctor_m1662457592(L_3, L_2, /*hidden argument*/NULL);
		__this->set__opaqueMaterial_24(L_3);
		Material_t340375123 * L_4 = __this->get__opaqueMaterial_24();
		bool L_5 = __this->get_cachedOverlay_20();
		MaterialExtensions_SetKeyword_m4077661988(NULL /*static, unused*/, L_4, _stringLiteral640967082, L_5, /*hidden argument*/NULL);
		Material_t340375123 * L_6 = __this->get__opaqueMaterial_24();
		IL2CPP_RUNTIME_CLASS_INIT(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var);
		int32_t L_7 = ((ShaderPropertyID_t567755140_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var))->get__HighlightingColor_4();
		Color_t2555686324  L_8 = __this->get_cachedColor_21();
		NullCheck(L_6);
		Material_SetColor_m355160541(L_6, L_7, L_8, /*hidden argument*/NULL);
	}

IL_004d:
	{
		Material_t340375123 * L_9 = __this->get__opaqueMaterial_24();
		return L_9;
	}
}
// HighlightingSystem.HighlighterCore/RendererFilter HighlightingSystem.HighlighterCore::get_globalRendererFilter()
extern "C" IL2CPP_METHOD_ATTR RendererFilter_t73075700 * HighlighterCore_get_globalRendererFilter_m1103506028 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlighterCore_get_globalRendererFilter_m1103506028_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		RendererFilter_t73075700 * L_0 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get__globalRendererFilter_25();
		return L_0;
	}
}
// System.Void HighlightingSystem.HighlighterCore::set_globalRendererFilter(HighlightingSystem.HighlighterCore/RendererFilter)
extern "C" IL2CPP_METHOD_ATTR void HighlighterCore_set_globalRendererFilter_m680021492 (RuntimeObject * __this /* static, unused */, RendererFilter_t73075700 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlighterCore_set_globalRendererFilter_m680021492_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HighlighterCore_t3117871998 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		RendererFilter_t73075700 * L_0 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get__globalRendererFilter_25();
		RendererFilter_t73075700 * L_1 = ___value0;
		bool L_2 = Delegate_op_Inequality_m1112333615(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_006c;
		}
	}
	{
		RendererFilter_t73075700 * L_3 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->set__globalRendererFilter_25(L_3);
		List_1_t294979444 * L_4 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get_sHighlighters_12();
		NullCheck(L_4);
		int32_t L_5 = List_1_get_Count_m3127650160(L_4, /*hidden argument*/List_1_get_Count_m3127650160_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1));
		goto IL_0065;
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		List_1_t294979444 * L_6 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get_sHighlighters_12();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		HighlighterCore_t3117871998 * L_8 = List_1_get_Item_m1940249347(L_6, L_7, /*hidden argument*/List_1_get_Item_m1940249347_RuntimeMethod_var);
		V_1 = L_8;
		HighlighterCore_t3117871998 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_9, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		List_1_t294979444 * L_11 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get_sHighlighters_12();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		List_1_RemoveAt_m1283052132(L_11, L_12, /*hidden argument*/List_1_RemoveAt_m1283052132_RuntimeMethod_var);
		goto IL_0061;
	}

IL_0050:
	{
		HighlighterCore_t3117871998 * L_13 = V_1;
		NullCheck(L_13);
		RendererFilter_t73075700 * L_14 = HighlighterCore_get_rendererFilter_m2619316656(L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0061;
		}
	}
	{
		HighlighterCore_t3117871998 * L_15 = V_1;
		NullCheck(L_15);
		HighlighterCore_SetDirty_m1369823605(L_15, /*hidden argument*/NULL);
	}

IL_0061:
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1));
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}

IL_006c:
	{
		return;
	}
}
// HighlightingSystem.HighlighterCore/RendererFilter HighlightingSystem.HighlighterCore::get_rendererFilter()
extern "C" IL2CPP_METHOD_ATTR RendererFilter_t73075700 * HighlighterCore_get_rendererFilter_m2619316656 (HighlighterCore_t3117871998 * __this, const RuntimeMethod* method)
{
	{
		RendererFilter_t73075700 * L_0 = __this->get__rendererFilter_26();
		return L_0;
	}
}
// System.Void HighlightingSystem.HighlighterCore::set_rendererFilter(HighlightingSystem.HighlighterCore/RendererFilter)
extern "C" IL2CPP_METHOD_ATTR void HighlighterCore_set_rendererFilter_m3025384944 (HighlighterCore_t3117871998 * __this, RendererFilter_t73075700 * ___value0, const RuntimeMethod* method)
{
	{
		RendererFilter_t73075700 * L_0 = __this->get__rendererFilter_26();
		RendererFilter_t73075700 * L_1 = ___value0;
		bool L_2 = Delegate_op_Inequality_m1112333615(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		RendererFilter_t73075700 * L_3 = ___value0;
		__this->set__rendererFilter_26(L_3);
		HighlighterCore_SetDirty_m1369823605(__this, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// HighlightingSystem.HighlighterCore/RendererFilter HighlightingSystem.HighlighterCore::get_rendererFilterToUse()
extern "C" IL2CPP_METHOD_ATTR RendererFilter_t73075700 * HighlighterCore_get_rendererFilterToUse_m444831848 (HighlighterCore_t3117871998 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlighterCore_get_rendererFilterToUse_m444831848_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RendererFilter_t73075700 * L_0 = __this->get__rendererFilter_26();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RendererFilter_t73075700 * L_1 = __this->get__rendererFilter_26();
		return L_1;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		RendererFilter_t73075700 * L_2 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get__globalRendererFilter_25();
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		RendererFilter_t73075700 * L_3 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get__globalRendererFilter_25();
		return L_3;
	}

IL_0022:
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		RendererFilter_t73075700 * L_4 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_27();
		if (L_4)
		{
			goto IL_003a;
		}
	}
	{
		intptr_t L_5 = (intptr_t)HighlighterCore_DefaultRendererFilter_m3173747073_RuntimeMethod_var;
		RendererFilter_t73075700 * L_6 = (RendererFilter_t73075700 *)il2cpp_codegen_object_new(RendererFilter_t73075700_il2cpp_TypeInfo_var);
		RendererFilter__ctor_m1988673961(L_6, NULL, (intptr_t)L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_27(L_6);
	}

IL_003a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		RendererFilter_t73075700 * L_7 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_27();
		return L_7;
	}
}
// System.Boolean HighlightingSystem.HighlighterCore::DefaultRendererFilter(UnityEngine.Renderer,System.Collections.Generic.List`1<System.Int32>)
extern "C" IL2CPP_METHOD_ATTR bool HighlighterCore_DefaultRendererFilter_m3173747073 (RuntimeObject * __this /* static, unused */, Renderer_t2627027031 * ___renderer0, List_1_t128053199 * ___submeshIndices1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlighterCore_DefaultRendererFilter_m3173747073_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Renderer_t2627027031 * L_0 = ___renderer0;
		NullCheck(L_0);
		HighlighterBlocker_t3431127703 * L_1 = Component_GetComponentInParent_TisHighlighterBlocker_t3431127703_m402451279(L_0, /*hidden argument*/Component_GetComponentInParent_TisHighlighterBlocker_t3431127703_m402451279_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		V_0 = (bool)0;
		Renderer_t2627027031 * L_3 = ___renderer0;
		if (!((MeshRenderer_t587009260 *)IsInstClass((RuntimeObject*)L_3, MeshRenderer_t587009260_il2cpp_TypeInfo_var)))
		{
			goto IL_0027;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_0058;
	}

IL_0027:
	{
		Renderer_t2627027031 * L_4 = ___renderer0;
		if (!((SkinnedMeshRenderer_t245602842 *)IsInstClass((RuntimeObject*)L_4, SkinnedMeshRenderer_t245602842_il2cpp_TypeInfo_var)))
		{
			goto IL_0039;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_0058;
	}

IL_0039:
	{
		Renderer_t2627027031 * L_5 = ___renderer0;
		if (!((SpriteRenderer_t3235626157 *)IsInstSealed((RuntimeObject*)L_5, SpriteRenderer_t3235626157_il2cpp_TypeInfo_var)))
		{
			goto IL_004b;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_0058;
	}

IL_004b:
	{
		Renderer_t2627027031 * L_6 = ___renderer0;
		if (!((ParticleSystemRenderer_t2065813411 *)IsInstSealed((RuntimeObject*)L_6, ParticleSystemRenderer_t2065813411_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_0058:
	{
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0065;
		}
	}
	{
		List_1_t128053199 * L_8 = ___submeshIndices1;
		NullCheck(L_8);
		List_1_Add_m697420525(L_8, (-1), /*hidden argument*/List_1_Add_m697420525_RuntimeMethod_var);
	}

IL_0065:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// System.Void HighlightingSystem.HighlighterCore::Awake()
extern "C" IL2CPP_METHOD_ATTR void HighlighterCore_Awake_m1549764141 (HighlighterCore_t3117871998 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlighterCore_Awake_m1549764141_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_GetComponent_TisTransform_t3600365921_m1200784320(__this, /*hidden argument*/Component_GetComponent_TisTransform_t3600365921_m1200784320_RuntimeMethod_var);
		__this->set_tr_17(L_0);
		VirtActionInvoker0::Invoke(5 /* System.Void HighlightingSystem.HighlighterCore::AwakeSafe() */, __this);
		return;
	}
}
// System.Void HighlightingSystem.HighlighterCore::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void HighlighterCore_OnEnable_m3378068848 (HighlighterCore_t3117871998 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlighterCore_OnEnable_m3378068848_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		List_1_t294979444 * L_0 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get_sHighlighters_12();
		NullCheck(L_0);
		bool L_1 = List_1_Contains_m3854673(L_0, __this, /*hidden argument*/List_1_Contains_m3854673_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		List_1_t294979444 * L_2 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get_sHighlighters_12();
		NullCheck(L_2);
		List_1_Add_m3529949829(L_2, __this, /*hidden argument*/List_1_Add_m3529949829_RuntimeMethod_var);
	}

IL_001b:
	{
		VirtActionInvoker0::Invoke(6 /* System.Void HighlightingSystem.HighlighterCore::OnEnableSafe() */, __this);
		return;
	}
}
// System.Void HighlightingSystem.HighlighterCore::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void HighlighterCore_OnDisable_m2062831095 (HighlighterCore_t3117871998 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlighterCore_OnDisable_m2062831095_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		List_1_t294979444 * L_0 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get_sHighlighters_12();
		NullCheck(L_0);
		List_1_Remove_m3523975345(L_0, __this, /*hidden argument*/List_1_Remove_m3523975345_RuntimeMethod_var);
		HighlighterCore_ClearRenderers_m3598559969(__this, /*hidden argument*/NULL);
		__this->set_isDirty_19((bool)1);
		VirtActionInvoker0::Invoke(7 /* System.Void HighlightingSystem.HighlighterCore::OnDisableSafe() */, __this);
		return;
	}
}
// System.Void HighlightingSystem.HighlighterCore::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void HighlighterCore_OnDestroy_m411929267 (HighlighterCore_t3117871998 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlighterCore_OnDestroy_m411929267_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_t340375123 * L_0 = __this->get__opaqueMaterial_24();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Material_t340375123 * L_2 = __this->get__opaqueMaterial_24();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_001c:
	{
		VirtActionInvoker0::Invoke(8 /* System.Void HighlightingSystem.HighlighterCore::OnDestroySafe() */, __this);
		return;
	}
}
// System.Void HighlightingSystem.HighlighterCore::AwakeSafe()
extern "C" IL2CPP_METHOD_ATTR void HighlighterCore_AwakeSafe_m2485383936 (HighlighterCore_t3117871998 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void HighlightingSystem.HighlighterCore::OnEnableSafe()
extern "C" IL2CPP_METHOD_ATTR void HighlighterCore_OnEnableSafe_m3437253381 (HighlighterCore_t3117871998 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void HighlightingSystem.HighlighterCore::OnDisableSafe()
extern "C" IL2CPP_METHOD_ATTR void HighlighterCore_OnDisableSafe_m1173509623 (HighlighterCore_t3117871998 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void HighlightingSystem.HighlighterCore::OnDestroySafe()
extern "C" IL2CPP_METHOD_ATTR void HighlighterCore_OnDestroySafe_m4218032096 (HighlighterCore_t3117871998 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void HighlightingSystem.HighlighterCore::SetDirty()
extern "C" IL2CPP_METHOD_ATTR void HighlighterCore_SetDirty_m1369823605 (HighlighterCore_t3117871998 * __this, const RuntimeMethod* method)
{
	{
		__this->set_isDirty_19((bool)1);
		return;
	}
}
// System.Void HighlightingSystem.HighlighterCore::UpdateHighlighting()
extern "C" IL2CPP_METHOD_ATTR void HighlighterCore_UpdateHighlighting_m3498229627 (HighlighterCore_t3117871998 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void HighlightingSystem.HighlighterCore::ClearRenderers()
extern "C" IL2CPP_METHOD_ATTR void HighlighterCore_ClearRenderers_m3598559969 (HighlighterCore_t3117871998 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlighterCore_ClearRenderers_m3598559969_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HighlighterRenderer_t1776162451 * V_1 = NULL;
	{
		List_1_t3248237193 * L_0 = __this->get_highlightableRenderers_18();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m2344231220(L_0, /*hidden argument*/List_1_get_Count_m2344231220_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		goto IL_002b;
	}

IL_0013:
	{
		List_1_t3248237193 * L_2 = __this->get_highlightableRenderers_18();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		HighlighterRenderer_t1776162451 * L_4 = List_1_get_Item_m2229786729(L_2, L_3, /*hidden argument*/List_1_get_Item_m2229786729_RuntimeMethod_var);
		V_1 = L_4;
		HighlighterRenderer_t1776162451 * L_5 = V_1;
		NullCheck(L_5);
		L_5->set_isAlive_12((bool)0);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1));
	}

IL_002b:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		List_1_t3248237193 * L_8 = __this->get_highlightableRenderers_18();
		NullCheck(L_8);
		List_1_Clear_m1664679213(L_8, /*hidden argument*/List_1_Clear_m1664679213_RuntimeMethod_var);
		return;
	}
}
// System.Void HighlightingSystem.HighlighterCore::UpdateRenderers()
extern "C" IL2CPP_METHOD_ATTR void HighlighterCore_UpdateRenderers_m865281105 (HighlighterCore_t3117871998 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlighterCore_UpdateRenderers_m865281105_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RendererData_t2749889453 * V_2 = NULL;
	GameObject_t1113636619 * V_3 = NULL;
	HighlighterRenderer_t1776162451 * V_4 = NULL;
	int32_t V_5 = 0;
	{
		bool L_0 = __this->get_isDirty_19();
		if (!L_0)
		{
			goto IL_00f7;
		}
	}
	{
		__this->set_isDirty_19((bool)0);
		HighlighterCore_ClearRenderers_m3598559969(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_1 = __this->get_tr_17();
		HighlighterCore_GrabRenderers_m2263268915(__this, L_1, /*hidden argument*/NULL);
		V_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		List_1_t4221964195 * L_2 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get_sRendererData_10();
		NullCheck(L_2);
		int32_t L_3 = List_1_get_Count_m3690354630(L_2, /*hidden argument*/List_1_get_Count_m3690354630_RuntimeMethod_var);
		V_1 = L_3;
		goto IL_00b6;
	}

IL_0036:
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		List_1_t4221964195 * L_4 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get_sRendererData_10();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RendererData_t2749889453 * L_6 = List_1_get_Item_m3191026567(L_4, L_5, /*hidden argument*/List_1_get_Item_m3191026567_RuntimeMethod_var);
		V_2 = L_6;
		RendererData_t2749889453 * L_7 = V_2;
		NullCheck(L_7);
		Renderer_t2627027031 * L_8 = L_7->get_renderer_0();
		NullCheck(L_8);
		GameObject_t1113636619 * L_9 = Component_get_gameObject_m442555142(L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		GameObject_t1113636619 * L_10 = V_3;
		NullCheck(L_10);
		HighlighterRenderer_t1776162451 * L_11 = GameObject_GetComponent_TisHighlighterRenderer_t1776162451_m2503969283(L_10, /*hidden argument*/GameObject_GetComponent_TisHighlighterRenderer_t1776162451_m2503969283_RuntimeMethod_var);
		V_4 = L_11;
		HighlighterRenderer_t1776162451 * L_12 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_12, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_006b;
		}
	}
	{
		GameObject_t1113636619 * L_14 = V_3;
		NullCheck(L_14);
		HighlighterRenderer_t1776162451 * L_15 = GameObject_AddComponent_TisHighlighterRenderer_t1776162451_m3971543210(L_14, /*hidden argument*/GameObject_AddComponent_TisHighlighterRenderer_t1776162451_m3971543210_RuntimeMethod_var);
		V_4 = L_15;
	}

IL_006b:
	{
		HighlighterRenderer_t1776162451 * L_16 = V_4;
		NullCheck(L_16);
		L_16->set_isAlive_12((bool)1);
		HighlighterRenderer_t1776162451 * L_17 = V_4;
		Material_t340375123 * L_18 = HighlighterCore_get_opaqueMaterial_m177517982(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		Shader_t4151988712 * L_19 = HighlighterCore_get_transparentShader_m2954448632(NULL /*static, unused*/, /*hidden argument*/NULL);
		RendererData_t2749889453 * L_20 = V_2;
		NullCheck(L_20);
		List_1_t128053199 * L_21 = L_20->get_submeshIndices_1();
		NullCheck(L_17);
		HighlighterRenderer_Initialize_m4000817202(L_17, L_18, L_19, L_21, /*hidden argument*/NULL);
		HighlighterRenderer_t1776162451 * L_22 = V_4;
		bool L_23 = __this->get_cachedOverlay_20();
		NullCheck(L_22);
		HighlighterRenderer_SetOverlay_m3780154417(L_22, L_23, /*hidden argument*/NULL);
		HighlighterRenderer_t1776162451 * L_24 = V_4;
		Color_t2555686324  L_25 = __this->get_cachedColor_21();
		NullCheck(L_24);
		HighlighterRenderer_SetColor_m4264849022(L_24, L_25, /*hidden argument*/NULL);
		List_1_t3248237193 * L_26 = __this->get_highlightableRenderers_18();
		HighlighterRenderer_t1776162451 * L_27 = V_4;
		NullCheck(L_26);
		List_1_Add_m2838435910(L_26, L_27, /*hidden argument*/List_1_Add_m2838435910_RuntimeMethod_var);
		int32_t L_28 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_00b6:
	{
		int32_t L_29 = V_0;
		int32_t L_30 = V_1;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0036;
		}
	}
	{
		V_5 = 0;
		goto IL_00dc;
	}

IL_00c5:
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		List_1_t4221964195 * L_31 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get_sRendererData_10();
		int32_t L_32 = V_5;
		NullCheck(L_31);
		RendererData_t2749889453 * L_33 = List_1_get_Item_m3191026567(L_31, L_32, /*hidden argument*/List_1_get_Item_m3191026567_RuntimeMethod_var);
		HighlighterCore_ReleaseRendererDataInstance_m2925833157(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00dc:
	{
		int32_t L_35 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		List_1_t4221964195 * L_36 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get_sRendererData_10();
		NullCheck(L_36);
		int32_t L_37 = List_1_get_Count_m3690354630(L_36, /*hidden argument*/List_1_get_Count_m3690354630_RuntimeMethod_var);
		if ((((int32_t)L_35) < ((int32_t)L_37)))
		{
			goto IL_00c5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		List_1_t4221964195 * L_38 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get_sRendererData_10();
		NullCheck(L_38);
		List_1_Clear_m3990828994(L_38, /*hidden argument*/List_1_Clear_m3990828994_RuntimeMethod_var);
	}

IL_00f7:
	{
		return;
	}
}
// System.Void HighlightingSystem.HighlighterCore::GrabRenderers(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void HighlighterCore_GrabRenderers_m2263268915 (HighlighterCore_t3117871998 * __this, Transform_t3600365921 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlighterCore_GrabRenderers_m2263268915_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Renderer_t2627027031 * V_3 = NULL;
	RendererData_t2749889453 * V_4 = NULL;
	List_1_t128053199 * V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Transform_t3600365921 * V_8 = NULL;
	HighlighterCore_t3117871998 * V_9 = NULL;
	{
		Transform_t3600365921 * L_0 = ___t0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GameObject_t1113636619 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		List_1_t4099101773 * L_3 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get_sRenderers_8();
		NullCheck(L_2);
		GameObject_GetComponents_TisRenderer_t2627027031_m3789954343(L_2, L_3, /*hidden argument*/GameObject_GetComponents_TisRenderer_t2627027031_m3789954343_RuntimeMethod_var);
		V_1 = 0;
		List_1_t4099101773 * L_4 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get_sRenderers_8();
		NullCheck(L_4);
		int32_t L_5 = List_1_get_Count_m754083996(L_4, /*hidden argument*/List_1_get_Count_m754083996_RuntimeMethod_var);
		V_2 = L_5;
		goto IL_008b;
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		List_1_t4099101773 * L_6 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get_sRenderers_8();
		int32_t L_7 = V_1;
		NullCheck(L_6);
		Renderer_t2627027031 * L_8 = List_1_get_Item_m4193176438(L_6, L_7, /*hidden argument*/List_1_get_Item_m4193176438_RuntimeMethod_var);
		V_3 = L_8;
		RendererFilter_t73075700 * L_9 = VirtFuncInvoker0< RendererFilter_t73075700 * >::Invoke(4 /* HighlightingSystem.HighlighterCore/RendererFilter HighlightingSystem.HighlighterCore::get_rendererFilterToUse() */, __this);
		Renderer_t2627027031 * L_10 = V_3;
		List_1_t128053199 * L_11 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get_sSubmeshIndices_11();
		NullCheck(L_9);
		bool L_12 = RendererFilter_Invoke_m3812187708(L_9, L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_007d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		RendererData_t2749889453 * L_13 = HighlighterCore_GetRendererDataInstance_m2663844405(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = L_13;
		RendererData_t2749889453 * L_14 = V_4;
		Renderer_t2627027031 * L_15 = V_3;
		NullCheck(L_14);
		L_14->set_renderer_0(L_15);
		RendererData_t2749889453 * L_16 = V_4;
		NullCheck(L_16);
		List_1_t128053199 * L_17 = L_16->get_submeshIndices_1();
		V_5 = L_17;
		List_1_t128053199 * L_18 = V_5;
		NullCheck(L_18);
		List_1_Clear_m2154023298(L_18, /*hidden argument*/List_1_Clear_m2154023298_RuntimeMethod_var);
		List_1_t128053199 * L_19 = V_5;
		List_1_t128053199 * L_20 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get_sSubmeshIndices_11();
		NullCheck(L_19);
		List_1_AddRange_m3513848896(L_19, L_20, /*hidden argument*/List_1_AddRange_m3513848896_RuntimeMethod_var);
		List_1_t4221964195 * L_21 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get_sRendererData_10();
		RendererData_t2749889453 * L_22 = V_4;
		NullCheck(L_21);
		List_1_Add_m3262131300(L_21, L_22, /*hidden argument*/List_1_Add_m3262131300_RuntimeMethod_var);
	}

IL_007d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		List_1_t128053199 * L_23 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get_sSubmeshIndices_11();
		NullCheck(L_23);
		List_1_Clear_m2154023298(L_23, /*hidden argument*/List_1_Clear_m2154023298_RuntimeMethod_var);
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_008b:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = V_2;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		List_1_t4099101773 * L_27 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get_sRenderers_8();
		NullCheck(L_27);
		List_1_Clear_m710377627(L_27, /*hidden argument*/List_1_Clear_m710377627_RuntimeMethod_var);
		Transform_t3600365921 * L_28 = ___t0;
		NullCheck(L_28);
		int32_t L_29 = Transform_get_childCount_m3145433196(L_28, /*hidden argument*/NULL);
		V_6 = L_29;
		int32_t L_30 = V_6;
		if (L_30)
		{
			goto IL_00ac;
		}
	}
	{
		return;
	}

IL_00ac:
	{
		V_7 = 0;
		goto IL_00e7;
	}

IL_00b4:
	{
		Transform_t3600365921 * L_31 = ___t0;
		int32_t L_32 = V_7;
		NullCheck(L_31);
		Transform_t3600365921 * L_33 = Transform_GetChild_m1092972975(L_31, L_32, /*hidden argument*/NULL);
		V_8 = L_33;
		Transform_t3600365921 * L_34 = V_8;
		NullCheck(L_34);
		HighlighterCore_t3117871998 * L_35 = Component_GetComponent_TisHighlighterCore_t3117871998_m87733586(L_34, /*hidden argument*/Component_GetComponent_TisHighlighterCore_t3117871998_m87733586_RuntimeMethod_var);
		V_9 = L_35;
		HighlighterCore_t3117871998 * L_36 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_37 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_36, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_00d9;
		}
	}
	{
		goto IL_00e1;
	}

IL_00d9:
	{
		Transform_t3600365921 * L_38 = V_8;
		HighlighterCore_GrabRenderers_m2263268915(__this, L_38, /*hidden argument*/NULL);
	}

IL_00e1:
	{
		int32_t L_39 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00e7:
	{
		int32_t L_40 = V_7;
		int32_t L_41 = V_6;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_00b4;
		}
	}
	{
		return;
	}
}
// System.Void HighlightingSystem.HighlighterCore::FillBufferInternal(UnityEngine.Rendering.CommandBuffer)
extern "C" IL2CPP_METHOD_ATTR void HighlighterCore_FillBufferInternal_m3415534260 (HighlighterCore_t3117871998 * __this, CommandBuffer_t2206337031 * ___buffer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlighterCore_FillBufferInternal_m3415534260_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Color_t2555686324  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	HighlighterRenderer_t1776162451 * V_5 = NULL;
	int32_t G_B3_0 = 0;
	Color_t2555686324  G_B10_0;
	memset(&G_B10_0, 0, sizeof(G_B10_0));
	{
		int32_t L_0 = __this->get_mode_14();
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = __this->get_mode_14();
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = __this->get_cachedOverlay_20();
		bool L_3 = V_0;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0075;
		}
	}
	{
		bool L_4 = V_0;
		__this->set_cachedOverlay_20(L_4);
		Material_t340375123 * L_5 = HighlighterCore_get_opaqueMaterial_m177517982(__this, /*hidden argument*/NULL);
		bool L_6 = __this->get_cachedOverlay_20();
		MaterialExtensions_SetKeyword_m4077661988(NULL /*static, unused*/, L_5, _stringLiteral640967082, L_6, /*hidden argument*/NULL);
		V_1 = 0;
		goto IL_0064;
	}

IL_0049:
	{
		List_1_t3248237193 * L_7 = __this->get_highlightableRenderers_18();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		HighlighterRenderer_t1776162451 * L_9 = List_1_get_Item_m2229786729(L_7, L_8, /*hidden argument*/List_1_get_Item_m2229786729_RuntimeMethod_var);
		bool L_10 = __this->get_cachedOverlay_20();
		NullCheck(L_9);
		HighlighterRenderer_SetOverlay_m3780154417(L_9, L_10, /*hidden argument*/NULL);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0064:
	{
		int32_t L_12 = V_1;
		List_1_t3248237193 * L_13 = __this->get_highlightableRenderers_18();
		NullCheck(L_13);
		int32_t L_14 = List_1_get_Count_m2344231220(L_13, /*hidden argument*/List_1_get_Count_m2344231220_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_0049;
		}
	}

IL_0075:
	{
		int32_t L_15 = __this->get_mode_14();
		if ((((int32_t)L_15) == ((int32_t)2)))
		{
			goto IL_008c;
		}
	}
	{
		Color_t2555686324  L_16 = __this->get_color_16();
		G_B10_0 = L_16;
		goto IL_0092;
	}

IL_008c:
	{
		Color_t2555686324  L_17 = __this->get_occluderColor_5();
		G_B10_0 = L_17;
	}

IL_0092:
	{
		V_2 = G_B10_0;
		Color_t2555686324  L_18 = __this->get_cachedColor_21();
		Color_t2555686324  L_19 = V_2;
		bool L_20 = Color_op_Inequality_m3353772181(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00f4;
		}
	}
	{
		Color_t2555686324  L_21 = V_2;
		__this->set_cachedColor_21(L_21);
		Material_t340375123 * L_22 = HighlighterCore_get_opaqueMaterial_m177517982(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var);
		int32_t L_23 = ((ShaderPropertyID_t567755140_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var))->get__HighlightingColor_4();
		Color_t2555686324  L_24 = __this->get_cachedColor_21();
		NullCheck(L_22);
		Material_SetColor_m355160541(L_22, L_23, L_24, /*hidden argument*/NULL);
		V_3 = 0;
		goto IL_00e3;
	}

IL_00c8:
	{
		List_1_t3248237193 * L_25 = __this->get_highlightableRenderers_18();
		int32_t L_26 = V_3;
		NullCheck(L_25);
		HighlighterRenderer_t1776162451 * L_27 = List_1_get_Item_m2229786729(L_25, L_26, /*hidden argument*/List_1_get_Item_m2229786729_RuntimeMethod_var);
		Color_t2555686324  L_28 = __this->get_cachedColor_21();
		NullCheck(L_27);
		HighlighterRenderer_SetColor_m4264849022(L_27, L_28, /*hidden argument*/NULL);
		int32_t L_29 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_00e3:
	{
		int32_t L_30 = V_3;
		List_1_t3248237193 * L_31 = __this->get_highlightableRenderers_18();
		NullCheck(L_31);
		int32_t L_32 = List_1_get_Count_m2344231220(L_31, /*hidden argument*/List_1_get_Count_m2344231220_RuntimeMethod_var);
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_00c8;
		}
	}

IL_00f4:
	{
		List_1_t3248237193 * L_33 = __this->get_highlightableRenderers_18();
		NullCheck(L_33);
		int32_t L_34 = List_1_get_Count_m2344231220(L_33, /*hidden argument*/List_1_get_Count_m2344231220_RuntimeMethod_var);
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)1));
		goto IL_0181;
	}

IL_0108:
	{
		List_1_t3248237193 * L_35 = __this->get_highlightableRenderers_18();
		int32_t L_36 = V_4;
		NullCheck(L_35);
		HighlighterRenderer_t1776162451 * L_37 = List_1_get_Item_m2229786729(L_35, L_36, /*hidden argument*/List_1_get_Item_m2229786729_RuntimeMethod_var);
		V_5 = L_37;
		HighlighterRenderer_t1776162451 * L_38 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_39 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_38, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_0136;
		}
	}
	{
		List_1_t3248237193 * L_40 = __this->get_highlightableRenderers_18();
		int32_t L_41 = V_4;
		NullCheck(L_40);
		List_1_RemoveAt_m1807562073(L_40, L_41, /*hidden argument*/List_1_RemoveAt_m1807562073_RuntimeMethod_var);
		goto IL_017b;
	}

IL_0136:
	{
		HighlighterRenderer_t1776162451 * L_42 = V_5;
		NullCheck(L_42);
		bool L_43 = HighlighterRenderer_IsValid_m3378537367(L_42, /*hidden argument*/NULL);
		if (L_43)
		{
			goto IL_015c;
		}
	}
	{
		List_1_t3248237193 * L_44 = __this->get_highlightableRenderers_18();
		int32_t L_45 = V_4;
		NullCheck(L_44);
		List_1_RemoveAt_m1807562073(L_44, L_45, /*hidden argument*/List_1_RemoveAt_m1807562073_RuntimeMethod_var);
		HighlighterRenderer_t1776162451 * L_46 = V_5;
		NullCheck(L_46);
		L_46->set_isAlive_12((bool)0);
		goto IL_017b;
	}

IL_015c:
	{
		HighlighterRenderer_t1776162451 * L_47 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(HighlightingBase_t582374880_il2cpp_TypeInfo_var);
		bool L_48 = HighlightingBase_GetVisible_m1401607538(NULL /*static, unused*/, L_47, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0173;
		}
	}
	{
		bool L_49 = __this->get_forceRender_15();
		if (!L_49)
		{
			goto IL_017b;
		}
	}

IL_0173:
	{
		HighlighterRenderer_t1776162451 * L_50 = V_5;
		CommandBuffer_t2206337031 * L_51 = ___buffer0;
		NullCheck(L_50);
		HighlighterRenderer_FillBuffer_m3166186691(L_50, L_51, /*hidden argument*/NULL);
	}

IL_017b:
	{
		int32_t L_52 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_52, (int32_t)1));
	}

IL_0181:
	{
		int32_t L_53 = V_4;
		if ((((int32_t)L_53) >= ((int32_t)0)))
		{
			goto IL_0108;
		}
	}
	{
		return;
	}
}
// System.Void HighlightingSystem.HighlighterCore::ExpandRendererDataPool(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void HighlighterCore_ExpandRendererDataPool_m543965256 (RuntimeObject * __this /* static, unused */, int32_t ___count0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlighterCore_ExpandRendererDataPool_m543965256_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RendererData_t2749889453 * V_1 = NULL;
	{
		V_0 = 0;
		goto IL_001c;
	}

IL_0007:
	{
		RendererData_t2749889453 * L_0 = (RendererData_t2749889453 *)il2cpp_codegen_object_new(RendererData_t2749889453_il2cpp_TypeInfo_var);
		RendererData__ctor_m894171524(L_0, /*hidden argument*/NULL);
		V_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		Stack_1_t3593278908 * L_1 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get_sRendererDataPool_9();
		RendererData_t2749889453 * L_2 = V_1;
		NullCheck(L_1);
		Stack_1_Push_m3773727479(L_1, L_2, /*hidden argument*/Stack_1_Push_m3773727479_RuntimeMethod_var);
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_001c:
	{
		int32_t L_4 = V_0;
		int32_t L_5 = ___count0;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// HighlightingSystem.HighlighterCore/RendererData HighlightingSystem.HighlighterCore::GetRendererDataInstance()
extern "C" IL2CPP_METHOD_ATTR RendererData_t2749889453 * HighlighterCore_GetRendererDataInstance_m2663844405 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlighterCore_GetRendererDataInstance_m2663844405_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RendererData_t2749889453 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		Stack_1_t3593278908 * L_0 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get_sRendererDataPool_9();
		NullCheck(L_0);
		int32_t L_1 = Stack_1_get_Count_m4233368765(L_0, /*hidden argument*/Stack_1_get_Count_m4233368765_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		HighlighterCore_ExpandRendererDataPool_m543965256(NULL /*static, unused*/, 4, /*hidden argument*/NULL);
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		Stack_1_t3593278908 * L_2 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get_sRendererDataPool_9();
		NullCheck(L_2);
		RendererData_t2749889453 * L_3 = Stack_1_Pop_m117725505(L_2, /*hidden argument*/Stack_1_Pop_m117725505_RuntimeMethod_var);
		V_0 = L_3;
		RendererData_t2749889453 * L_4 = V_0;
		return L_4;
	}
}
// System.Void HighlightingSystem.HighlighterCore::ReleaseRendererDataInstance(HighlightingSystem.HighlighterCore/RendererData)
extern "C" IL2CPP_METHOD_ATTR void HighlighterCore_ReleaseRendererDataInstance_m2925833157 (RuntimeObject * __this /* static, unused */, RendererData_t2749889453 * ___instance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlighterCore_ReleaseRendererDataInstance_m2925833157_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RendererData_t2749889453 * L_0 = ___instance0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		Stack_1_t3593278908 * L_1 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get_sRendererDataPool_9();
		RendererData_t2749889453 * L_2 = ___instance0;
		NullCheck(L_1);
		bool L_3 = Stack_1_Contains_m1656087833(L_1, L_2, /*hidden argument*/Stack_1_Contains_m1656087833_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		return;
	}

IL_0017:
	{
		RendererData_t2749889453 * L_4 = ___instance0;
		NullCheck(L_4);
		L_4->set_renderer_0((Renderer_t2627027031 *)NULL);
		RendererData_t2749889453 * L_5 = ___instance0;
		NullCheck(L_5);
		List_1_t128053199 * L_6 = L_5->get_submeshIndices_1();
		NullCheck(L_6);
		List_1_Clear_m2154023298(L_6, /*hidden argument*/List_1_Clear_m2154023298_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		Stack_1_t3593278908 * L_7 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get_sRendererDataPool_9();
		RendererData_t2749889453 * L_8 = ___instance0;
		NullCheck(L_7);
		Stack_1_Push_m3773727479(L_7, L_8, /*hidden argument*/Stack_1_Push_m3773727479_RuntimeMethod_var);
		return;
	}
}
// System.Void HighlightingSystem.HighlighterCore::FillBuffer(UnityEngine.Rendering.CommandBuffer)
extern "C" IL2CPP_METHOD_ATTR void HighlighterCore_FillBuffer_m3144797772 (RuntimeObject * __this /* static, unused */, CommandBuffer_t2206337031 * ___buffer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlighterCore_FillBuffer_m3144797772_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HighlighterCore_t3117871998 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	HighlighterCore_t3117871998 * V_5 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		List_1_t294979444 * L_0 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get_sHighlighters_12();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m3127650160(L_0, /*hidden argument*/List_1_get_Count_m3127650160_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		goto IL_0066;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		List_1_t294979444 * L_2 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get_sHighlighters_12();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		HighlighterCore_t3117871998 * L_4 = List_1_get_Item_m1940249347(L_2, L_3, /*hidden argument*/List_1_get_Item_m1940249347_RuntimeMethod_var);
		V_1 = L_4;
		HighlighterCore_t3117871998 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_5, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		List_1_t294979444 * L_7 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get_sHighlighters_12();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		List_1_RemoveAt_m1283052132(L_7, L_8, /*hidden argument*/List_1_RemoveAt_m1283052132_RuntimeMethod_var);
		goto IL_0062;
	}

IL_003a:
	{
		HighlighterCore_t3117871998 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker0::Invoke(9 /* System.Void HighlightingSystem.HighlighterCore::UpdateHighlighting() */, L_9);
		HighlighterCore_t3117871998 * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_10, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_005c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		List_1_t294979444 * L_12 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get_sHighlighters_12();
		int32_t L_13 = V_0;
		NullCheck(L_12);
		List_1_RemoveAt_m1283052132(L_12, L_13, /*hidden argument*/List_1_RemoveAt_m1283052132_RuntimeMethod_var);
		goto IL_0062;
	}

IL_005c:
	{
		HighlighterCore_t3117871998 * L_14 = V_1;
		NullCheck(L_14);
		HighlighterCore_UpdateRenderers_m865281105(L_14, /*hidden argument*/NULL);
	}

IL_0062:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1));
	}

IL_0066:
	{
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		V_2 = 0;
		goto IL_00c4;
	}

IL_0074:
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		HighlighterModeU5BU5D_t1249767391* L_17 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get_renderingOrder_6();
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		int32_t L_20 = (int32_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_3 = L_20;
		List_1_t294979444 * L_21 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get_sHighlighters_12();
		NullCheck(L_21);
		int32_t L_22 = List_1_get_Count_m3127650160(L_21, /*hidden argument*/List_1_get_Count_m3127650160_RuntimeMethod_var);
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)1));
		goto IL_00b8;
	}

IL_008f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		List_1_t294979444 * L_23 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get_sHighlighters_12();
		int32_t L_24 = V_4;
		NullCheck(L_23);
		HighlighterCore_t3117871998 * L_25 = List_1_get_Item_m1940249347(L_23, L_24, /*hidden argument*/List_1_get_Item_m1940249347_RuntimeMethod_var);
		V_5 = L_25;
		HighlighterCore_t3117871998 * L_26 = V_5;
		NullCheck(L_26);
		int32_t L_27 = L_26->get_mode_14();
		int32_t L_28 = V_3;
		if ((!(((uint32_t)L_27) == ((uint32_t)L_28))))
		{
			goto IL_00b2;
		}
	}
	{
		HighlighterCore_t3117871998 * L_29 = V_5;
		CommandBuffer_t2206337031 * L_30 = ___buffer0;
		NullCheck(L_29);
		HighlighterCore_FillBufferInternal_m3415534260(L_29, L_30, /*hidden argument*/NULL);
	}

IL_00b2:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)1));
	}

IL_00b8:
	{
		int32_t L_32 = V_4;
		if ((((int32_t)L_32) >= ((int32_t)0)))
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_33 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00c4:
	{
		int32_t L_34 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		HighlighterModeU5BU5D_t1249767391* L_35 = ((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->get_renderingOrder_6();
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_35)->max_length)))))))
		{
			goto IL_0074;
		}
	}
	{
		return;
	}
}
// System.Void HighlightingSystem.HighlighterCore::.cctor()
extern "C" IL2CPP_METHOD_ATTR void HighlighterCore__cctor_m3544078773 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlighterCore__cctor_m3544078773_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HighlighterModeU5BU5D_t1249767391* L_0 = (HighlighterModeU5BU5D_t1249767391*)SZArrayNew(HighlighterModeU5BU5D_t1249767391_il2cpp_TypeInfo_var, (uint32_t)3);
		HighlighterModeU5BU5D_t1249767391* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)1);
		HighlighterModeU5BU5D_t1249767391* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)2);
		((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->set_renderingOrder_6(L_2);
		List_1_t4099101773 * L_3 = (List_1_t4099101773 *)il2cpp_codegen_object_new(List_1_t4099101773_il2cpp_TypeInfo_var);
		List_1__ctor_m2755110883(L_3, 4, /*hidden argument*/List_1__ctor_m2755110883_RuntimeMethod_var);
		((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->set_sRenderers_8(L_3);
		Stack_1_t3593278908 * L_4 = (Stack_1_t3593278908 *)il2cpp_codegen_object_new(Stack_1_t3593278908_il2cpp_TypeInfo_var);
		Stack_1__ctor_m3269555132(L_4, /*hidden argument*/Stack_1__ctor_m3269555132_RuntimeMethod_var);
		((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->set_sRendererDataPool_9(L_4);
		List_1_t4221964195 * L_5 = (List_1_t4221964195 *)il2cpp_codegen_object_new(List_1_t4221964195_il2cpp_TypeInfo_var);
		List_1__ctor_m511393646(L_5, 4, /*hidden argument*/List_1__ctor_m511393646_RuntimeMethod_var);
		((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->set_sRendererData_10(L_5);
		List_1_t128053199 * L_6 = (List_1_t128053199 *)il2cpp_codegen_object_new(List_1_t128053199_il2cpp_TypeInfo_var);
		List_1__ctor_m1812987042(L_6, 4, /*hidden argument*/List_1__ctor_m1812987042_RuntimeMethod_var);
		((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->set_sSubmeshIndices_11(L_6);
		List_1_t294979444 * L_7 = (List_1_t294979444 *)il2cpp_codegen_object_new(List_1_t294979444_il2cpp_TypeInfo_var);
		List_1__ctor_m1138541799(L_7, /*hidden argument*/List_1__ctor_m1138541799_RuntimeMethod_var);
		((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->set_sHighlighters_12(L_7);
		((HighlighterCore_t3117871998_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterCore_t3117871998_il2cpp_TypeInfo_var))->set__globalRendererFilter_25((RendererFilter_t73075700 *)NULL);
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
// System.Void HighlightingSystem.HighlighterCore/RendererData::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RendererData__ctor_m894171524 (RendererData_t2749889453 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RendererData__ctor_m894171524_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t128053199 * L_0 = (List_1_t128053199 *)il2cpp_codegen_object_new(List_1_t128053199_il2cpp_TypeInfo_var);
		List_1__ctor_m1628857705(L_0, /*hidden argument*/List_1__ctor_m1628857705_RuntimeMethod_var);
		__this->set_submeshIndices_1(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void HighlightingSystem.HighlighterCore/RendererFilter::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void RendererFilter__ctor_m1988673961 (RendererFilter_t73075700 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean HighlightingSystem.HighlighterCore/RendererFilter::Invoke(UnityEngine.Renderer,System.Collections.Generic.List`1<System.Int32>)
extern "C" IL2CPP_METHOD_ATTR bool RendererFilter_Invoke_m3812187708 (RendererFilter_t73075700 * __this, Renderer_t2627027031 * ___renderer0, List_1_t128053199 * ___submeshIndices1, const RuntimeMethod* method)
{
	bool result = false;
	if(__this->get_prev_9() != NULL)
	{
		RendererFilter_Invoke_m3812187708((RendererFilter_t73075700 *)__this->get_prev_9(), ___renderer0, ___submeshIndices1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, Renderer_t2627027031 *, List_1_t128053199 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___renderer0, ___submeshIndices1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, void*, Renderer_t2627027031 *, List_1_t128053199 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___renderer0, ___submeshIndices1, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< bool, Renderer_t2627027031 *, List_1_t128053199 * >::Invoke(targetMethod, targetThis, ___renderer0, ___submeshIndices1);
					else
						result = GenericVirtFuncInvoker2< bool, Renderer_t2627027031 *, List_1_t128053199 * >::Invoke(targetMethod, targetThis, ___renderer0, ___submeshIndices1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< bool, Renderer_t2627027031 *, List_1_t128053199 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___renderer0, ___submeshIndices1);
					else
						result = VirtFuncInvoker2< bool, Renderer_t2627027031 *, List_1_t128053199 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___renderer0, ___submeshIndices1);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, Renderer_t2627027031 *, List_1_t128053199 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___renderer0, ___submeshIndices1, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, List_1_t128053199 * >::Invoke(targetMethod, ___renderer0, ___submeshIndices1);
					else
						result = GenericVirtFuncInvoker1< bool, List_1_t128053199 * >::Invoke(targetMethod, ___renderer0, ___submeshIndices1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, List_1_t128053199 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___renderer0, ___submeshIndices1);
					else
						result = VirtFuncInvoker1< bool, List_1_t128053199 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___renderer0, ___submeshIndices1);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (Renderer_t2627027031 *, List_1_t128053199 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___renderer0, ___submeshIndices1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult HighlightingSystem.HighlighterCore/RendererFilter::BeginInvoke(UnityEngine.Renderer,System.Collections.Generic.List`1<System.Int32>,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* RendererFilter_BeginInvoke_m3357701071 (RendererFilter_t73075700 * __this, Renderer_t2627027031 * ___renderer0, List_1_t128053199 * ___submeshIndices1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___renderer0;
	__d_args[1] = ___submeshIndices1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Boolean HighlightingSystem.HighlighterCore/RendererFilter::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR bool RendererFilter_EndInvoke_m3923168996 (RendererFilter_t73075700 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
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
// System.Void HighlightingSystem.HighlighterRenderer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HighlighterRenderer__ctor_m1877225433 (HighlighterRenderer_t1776162451 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlighterRenderer__ctor_m1877225433_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t1906947814 * L_0 = (List_1_t1906947814 *)il2cpp_codegen_object_new(List_1_t1906947814_il2cpp_TypeInfo_var);
		List_1__ctor_m158025881(L_0, /*hidden argument*/List_1__ctor_m158025881_RuntimeMethod_var);
		__this->set_data_14(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.HighlighterRenderer::Awake()
extern "C" IL2CPP_METHOD_ATTR void HighlighterRenderer_Awake_m3542215994 (HighlighterRenderer_t1776162451 * __this, const RuntimeMethod* method)
{
	{
		Object_set_hideFlags_m1648752846(__this, ((int32_t)30), /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.HighlighterRenderer::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void HighlighterRenderer_OnEnable_m3972142302 (HighlighterRenderer_t1776162451 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlighterRenderer_OnEnable_m3972142302_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)HighlighterRenderer_OnEndOfFrame_m415376616_RuntimeMethod_var;
		OnEndOfFrame_t2764173602 * L_1 = (OnEndOfFrame_t2764173602 *)il2cpp_codegen_object_new(OnEndOfFrame_t2764173602_il2cpp_TypeInfo_var);
		OnEndOfFrame__ctor_m2041741679(L_1, __this, (intptr_t)L_0, /*hidden argument*/NULL);
		EndOfFrame_AddListener_m498318113(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.HighlighterRenderer::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void HighlighterRenderer_OnDisable_m4013981340 (HighlighterRenderer_t1776162451 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlighterRenderer_OnDisable_m4013981340_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)HighlighterRenderer_OnEndOfFrame_m415376616_RuntimeMethod_var;
		OnEndOfFrame_t2764173602 * L_1 = (OnEndOfFrame_t2764173602 *)il2cpp_codegen_object_new(OnEndOfFrame_t2764173602_il2cpp_TypeInfo_var);
		OnEndOfFrame__ctor_m2041741679(L_1, __this, (intptr_t)L_0, /*hidden argument*/NULL);
		EndOfFrame_RemoveListener_m3756592840(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.HighlighterRenderer::OnWillRenderObject()
extern "C" IL2CPP_METHOD_ATTR void HighlighterRenderer_OnWillRenderObject_m3422390951 (HighlighterRenderer_t1776162451 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlighterRenderer_OnWillRenderObject_m3422390951_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlightingBase_t582374880_il2cpp_TypeInfo_var);
		HighlightingBase_SetVisible_m4170048733(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.HighlighterRenderer::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void HighlighterRenderer_OnDestroy_m725564864 (HighlighterRenderer_t1776162451 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlighterRenderer_OnDestroy_m725564864_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Data_t434873072  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		List_1_t1906947814 * L_0 = __this->get_data_14();
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
		V_0 = 0;
		List_1_t1906947814 * L_1 = __this->get_data_14();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m3704470943(L_1, /*hidden argument*/List_1_get_Count_m3704470943_RuntimeMethod_var);
		V_1 = L_2;
		goto IL_0048;
	}

IL_001f:
	{
		List_1_t1906947814 * L_3 = __this->get_data_14();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Data_t434873072  L_5 = List_1_get_Item_m2880296878(L_3, L_4, /*hidden argument*/List_1_get_Item_m2880296878_RuntimeMethod_var);
		V_2 = L_5;
		bool L_6 = (&V_2)->get_transparent_2();
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		Material_t340375123 * L_7 = (&V_2)->get_material_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_0044:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0048:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_001f;
		}
	}
	{
		return;
	}
}
// System.Void HighlightingSystem.HighlighterRenderer::Initialize(UnityEngine.Material,UnityEngine.Shader,System.Collections.Generic.List`1<System.Int32>)
extern "C" IL2CPP_METHOD_ATTR void HighlighterRenderer_Initialize_m4000817202 (HighlighterRenderer_t1776162451 * __this, Material_t340375123 * ___sharedOpaqueMaterial0, Shader_t4151988712 * ___transparentShader1, List_1_t128053199 * ___submeshIndices2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlighterRenderer_Initialize_m4000817202_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MaterialU5BU5D_t561872642* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Material_t340375123 * V_6 = NULL;
	Data_t434873072  V_7;
	memset(&V_7, 0, sizeof(V_7));
	String_t* V_8 = NULL;
	Material_t340375123 * V_9 = NULL;
	int32_t V_10 = 0;
	int32_t G_B21_0 = 0;
	Material_t340375123 * G_B21_1 = NULL;
	int32_t G_B20_0 = 0;
	Material_t340375123 * G_B20_1 = NULL;
	float G_B22_0 = 0.0f;
	int32_t G_B22_1 = 0;
	Material_t340375123 * G_B22_2 = NULL;
	{
		List_1_t1906947814 * L_0 = __this->get_data_14();
		NullCheck(L_0);
		List_1_Clear_m1796798839(L_0, /*hidden argument*/List_1_Clear_m1796798839_RuntimeMethod_var);
		Renderer_t2627027031 * L_1 = Component_GetComponent_TisRenderer_t2627027031_m2057483985(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m2057483985_RuntimeMethod_var);
		__this->set_r_13(L_1);
		Renderer_t2627027031 * L_2 = __this->get_r_13();
		NullCheck(L_2);
		MaterialU5BU5D_t561872642* L_3 = Renderer_get_sharedMaterials_m76747498(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		MaterialU5BU5D_t561872642* L_4 = V_0;
		NullCheck(L_4);
		V_1 = (((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))));
		MaterialU5BU5D_t561872642* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_6 = V_1;
		if (L_6)
		{
			goto IL_0034;
		}
	}

IL_0033:
	{
		return;
	}

IL_0034:
	{
		List_1_t128053199 * L_7 = ___submeshIndices2;
		NullCheck(L_7);
		int32_t L_8 = List_1_get_Count_m361000296(L_7, /*hidden argument*/List_1_get_Count_m361000296_RuntimeMethod_var);
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_006c;
		}
	}
	{
		List_1_t128053199 * L_9 = ___submeshIndices2;
		NullCheck(L_9);
		int32_t L_10 = List_1_get_Item_m2299965312(L_9, 0, /*hidden argument*/List_1_get_Item_m2299965312_RuntimeMethod_var);
		if ((!(((uint32_t)L_10) == ((uint32_t)(-1)))))
		{
			goto IL_006c;
		}
	}
	{
		List_1_t128053199 * L_11 = ___submeshIndices2;
		NullCheck(L_11);
		List_1_Clear_m2154023298(L_11, /*hidden argument*/List_1_Clear_m2154023298_RuntimeMethod_var);
		V_2 = 0;
		goto IL_0065;
	}

IL_005a:
	{
		List_1_t128053199 * L_12 = ___submeshIndices2;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		List_1_Add_m697420525(L_12, L_13, /*hidden argument*/List_1_Add_m697420525_RuntimeMethod_var);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0065:
	{
		int32_t L_15 = V_2;
		int32_t L_16 = V_1;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_005a;
		}
	}

IL_006c:
	{
		V_3 = 0;
		List_1_t128053199 * L_17 = ___submeshIndices2;
		NullCheck(L_17);
		int32_t L_18 = List_1_get_Count_m361000296(L_17, /*hidden argument*/List_1_get_Count_m361000296_RuntimeMethod_var);
		V_4 = L_18;
		goto IL_01c7;
	}

IL_007b:
	{
		List_1_t128053199 * L_19 = ___submeshIndices2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = List_1_get_Item_m2299965312(L_19, L_20, /*hidden argument*/List_1_get_Item_m2299965312_RuntimeMethod_var);
		V_5 = L_21;
		int32_t L_22 = V_5;
		int32_t L_23 = V_1;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0091;
		}
	}
	{
		goto IL_01c3;
	}

IL_0091:
	{
		MaterialU5BU5D_t561872642* L_24 = V_0;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		Material_t340375123 * L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_6 = L_27;
		Material_t340375123 * L_28 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_29 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_28, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00a9;
		}
	}
	{
		goto IL_01c3;
	}

IL_00a9:
	{
		il2cpp_codegen_initobj((&V_7), sizeof(Data_t434873072 ));
		Material_t340375123 * L_30 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterRenderer_t1776162451_il2cpp_TypeInfo_var);
		String_t* L_31 = ((HighlighterRenderer_t1776162451_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterRenderer_t1776162451_il2cpp_TypeInfo_var))->get_sRenderType_7();
		String_t* L_32 = ((HighlighterRenderer_t1776162451_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterRenderer_t1776162451_il2cpp_TypeInfo_var))->get_sOpaque_8();
		NullCheck(L_30);
		String_t* L_33 = Material_GetTag_m211081835(L_30, L_31, (bool)1, L_32, /*hidden argument*/NULL);
		V_8 = L_33;
		String_t* L_34 = V_8;
		String_t* L_35 = ((HighlighterRenderer_t1776162451_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterRenderer_t1776162451_il2cpp_TypeInfo_var))->get_sTransparent_9();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_36 = String_op_Equality_m920492651(NULL /*static, unused*/, L_34, L_35, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_00e7;
		}
	}
	{
		String_t* L_37 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterRenderer_t1776162451_il2cpp_TypeInfo_var);
		String_t* L_38 = ((HighlighterRenderer_t1776162451_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterRenderer_t1776162451_il2cpp_TypeInfo_var))->get_sTransparentCutout_10();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_39 = String_op_Equality_m920492651(NULL /*static, unused*/, L_37, L_38, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_019d;
		}
	}

IL_00e7:
	{
		Shader_t4151988712 * L_40 = ___transparentShader1;
		Material_t340375123 * L_41 = (Material_t340375123 *)il2cpp_codegen_object_new(Material_t340375123_il2cpp_TypeInfo_var);
		Material__ctor_m1662457592(L_41, L_40, /*hidden argument*/NULL);
		V_9 = L_41;
		Renderer_t2627027031 * L_42 = __this->get_r_13();
		if (!((SpriteRenderer_t3235626157 *)IsInstSealed((RuntimeObject*)L_42, SpriteRenderer_t3235626157_il2cpp_TypeInfo_var)))
		{
			goto IL_010c;
		}
	}
	{
		Material_t340375123 * L_43 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var);
		int32_t L_44 = ((ShaderPropertyID_t567755140_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var))->get__HighlightingCull_3();
		NullCheck(L_43);
		Material_SetInt_m475299667(L_43, L_44, 0, /*hidden argument*/NULL);
	}

IL_010c:
	{
		Material_t340375123 * L_45 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var);
		int32_t L_46 = ((ShaderPropertyID_t567755140_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var))->get__MainTex_0();
		NullCheck(L_45);
		bool L_47 = Material_HasProperty_m1904868334(L_45, L_46, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_0156;
		}
	}
	{
		Material_t340375123 * L_48 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var);
		int32_t L_49 = ((ShaderPropertyID_t567755140_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var))->get__MainTex_0();
		Material_t340375123 * L_50 = V_6;
		NullCheck(L_50);
		Texture_t3661962703 * L_51 = Material_get_mainTexture_m692510677(L_50, /*hidden argument*/NULL);
		NullCheck(L_48);
		Material_SetTexture_m3009528825(L_48, L_49, L_51, /*hidden argument*/NULL);
		Material_t340375123 * L_52 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterRenderer_t1776162451_il2cpp_TypeInfo_var);
		String_t* L_53 = ((HighlighterRenderer_t1776162451_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterRenderer_t1776162451_il2cpp_TypeInfo_var))->get_sMainTex_11();
		Material_t340375123 * L_54 = V_6;
		NullCheck(L_54);
		Vector2_t2156229523  L_55 = Material_get_mainTextureOffset_m87785737(L_54, /*hidden argument*/NULL);
		NullCheck(L_52);
		Material_SetTextureOffset_m2380336123(L_52, L_53, L_55, /*hidden argument*/NULL);
		Material_t340375123 * L_56 = V_9;
		String_t* L_57 = ((HighlighterRenderer_t1776162451_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterRenderer_t1776162451_il2cpp_TypeInfo_var))->get_sMainTex_11();
		Material_t340375123 * L_58 = V_6;
		NullCheck(L_58);
		Vector2_t2156229523  L_59 = Material_get_mainTextureScale_m3327734729(L_58, /*hidden argument*/NULL);
		NullCheck(L_56);
		Material_SetTextureScale_m1562018726(L_56, L_57, L_59, /*hidden argument*/NULL);
	}

IL_0156:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var);
		int32_t L_60 = ((ShaderPropertyID_t567755140_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var))->get__Cutoff_1();
		V_10 = L_60;
		Material_t340375123 * L_61 = V_9;
		int32_t L_62 = V_10;
		Material_t340375123 * L_63 = V_6;
		int32_t L_64 = V_10;
		NullCheck(L_63);
		bool L_65 = Material_HasProperty_m1904868334(L_63, L_64, /*hidden argument*/NULL);
		G_B20_0 = L_62;
		G_B20_1 = L_61;
		if (!L_65)
		{
			G_B21_0 = L_62;
			G_B21_1 = L_61;
			goto IL_017d;
		}
	}
	{
		Material_t340375123 * L_66 = V_6;
		int32_t L_67 = V_10;
		NullCheck(L_66);
		float L_68 = Material_GetFloat_m2836278142(L_66, L_67, /*hidden argument*/NULL);
		G_B22_0 = L_68;
		G_B22_1 = G_B20_0;
		G_B22_2 = G_B20_1;
		goto IL_0182;
	}

IL_017d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterRenderer_t1776162451_il2cpp_TypeInfo_var);
		float L_69 = ((HighlighterRenderer_t1776162451_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterRenderer_t1776162451_il2cpp_TypeInfo_var))->get_transparentCutoff_4();
		G_B22_0 = L_69;
		G_B22_1 = G_B21_0;
		G_B22_2 = G_B21_1;
	}

IL_0182:
	{
		NullCheck(G_B22_2);
		Material_SetFloat_m1688718093(G_B22_2, G_B22_1, G_B22_0, /*hidden argument*/NULL);
		Material_t340375123 * L_70 = V_9;
		(&V_7)->set_material_0(L_70);
		(&V_7)->set_transparent_2((bool)1);
		goto IL_01ad;
	}

IL_019d:
	{
		Material_t340375123 * L_71 = ___sharedOpaqueMaterial0;
		(&V_7)->set_material_0(L_71);
		(&V_7)->set_transparent_2((bool)0);
	}

IL_01ad:
	{
		int32_t L_72 = V_5;
		(&V_7)->set_submeshIndex_1(L_72);
		List_1_t1906947814 * L_73 = __this->get_data_14();
		Data_t434873072  L_74 = V_7;
		NullCheck(L_73);
		List_1_Add_m2736528363(L_73, L_74, /*hidden argument*/List_1_Add_m2736528363_RuntimeMethod_var);
	}

IL_01c3:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
	}

IL_01c7:
	{
		int32_t L_76 = V_3;
		int32_t L_77 = V_4;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_007b;
		}
	}
	{
		return;
	}
}
// System.Void HighlightingSystem.HighlighterRenderer::SetOverlay(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void HighlighterRenderer_SetOverlay_m3780154417 (HighlighterRenderer_t1776162451 * __this, bool ___overlay0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlighterRenderer_SetOverlay_m3780154417_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Data_t434873072  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		V_0 = 0;
		List_1_t1906947814 * L_0 = __this->get_data_14();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m3704470943(L_0, /*hidden argument*/List_1_get_Count_m3704470943_RuntimeMethod_var);
		V_1 = L_1;
		goto IL_0042;
	}

IL_0013:
	{
		List_1_t1906947814 * L_2 = __this->get_data_14();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Data_t434873072  L_4 = List_1_get_Item_m2880296878(L_2, L_3, /*hidden argument*/List_1_get_Item_m2880296878_RuntimeMethod_var);
		V_2 = L_4;
		bool L_5 = (&V_2)->get_transparent_2();
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		Material_t340375123 * L_6 = (&V_2)->get_material_0();
		bool L_7 = ___overlay0;
		MaterialExtensions_SetKeyword_m4077661988(NULL /*static, unused*/, L_6, _stringLiteral640967082, L_7, /*hidden argument*/NULL);
	}

IL_003e:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0042:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
// System.Void HighlightingSystem.HighlighterRenderer::SetColor(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void HighlighterRenderer_SetColor_m4264849022 (HighlighterRenderer_t1776162451 * __this, Color_t2555686324  ___clr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlighterRenderer_SetColor_m4264849022_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Data_t434873072  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		V_0 = 0;
		List_1_t1906947814 * L_0 = __this->get_data_14();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m3704470943(L_0, /*hidden argument*/List_1_get_Count_m3704470943_RuntimeMethod_var);
		V_1 = L_1;
		goto IL_0042;
	}

IL_0013:
	{
		List_1_t1906947814 * L_2 = __this->get_data_14();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Data_t434873072  L_4 = List_1_get_Item_m2880296878(L_2, L_3, /*hidden argument*/List_1_get_Item_m2880296878_RuntimeMethod_var);
		V_2 = L_4;
		bool L_5 = (&V_2)->get_transparent_2();
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		Material_t340375123 * L_6 = (&V_2)->get_material_0();
		IL2CPP_RUNTIME_CLASS_INIT(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var);
		int32_t L_7 = ((ShaderPropertyID_t567755140_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var))->get__HighlightingColor_4();
		Color_t2555686324  L_8 = ___clr0;
		NullCheck(L_6);
		Material_SetColor_m355160541(L_6, L_7, L_8, /*hidden argument*/NULL);
	}

IL_003e:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0042:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
// System.Void HighlightingSystem.HighlighterRenderer::FillBuffer(UnityEngine.Rendering.CommandBuffer)
extern "C" IL2CPP_METHOD_ATTR void HighlighterRenderer_FillBuffer_m3166186691 (HighlighterRenderer_t1776162451 * __this, CommandBuffer_t2206337031 * ___buffer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlighterRenderer_FillBuffer_m3166186691_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Data_t434873072  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		V_0 = 0;
		List_1_t1906947814 * L_0 = __this->get_data_14();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m3704470943(L_0, /*hidden argument*/List_1_get_Count_m3704470943_RuntimeMethod_var);
		V_1 = L_1;
		goto IL_003e;
	}

IL_0013:
	{
		List_1_t1906947814 * L_2 = __this->get_data_14();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Data_t434873072  L_4 = List_1_get_Item_m2880296878(L_2, L_3, /*hidden argument*/List_1_get_Item_m2880296878_RuntimeMethod_var);
		V_2 = L_4;
		CommandBuffer_t2206337031 * L_5 = ___buffer0;
		Renderer_t2627027031 * L_6 = __this->get_r_13();
		Material_t340375123 * L_7 = (&V_2)->get_material_0();
		int32_t L_8 = (&V_2)->get_submeshIndex_1();
		NullCheck(L_5);
		CommandBuffer_DrawRenderer_m3443435044(L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_003e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
// System.Boolean HighlightingSystem.HighlighterRenderer::IsValid()
extern "C" IL2CPP_METHOD_ATTR bool HighlighterRenderer_IsValid_m3378537367 (HighlighterRenderer_t1776162451 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlighterRenderer_IsValid_m3378537367_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Renderer_t2627027031 * L_0 = __this->get_r_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void HighlightingSystem.HighlighterRenderer::OnEndOfFrame()
extern "C" IL2CPP_METHOD_ATTR void HighlighterRenderer_OnEndOfFrame_m415376616 (HighlighterRenderer_t1776162451 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlighterRenderer_OnEndOfFrame_m415376616_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_isAlive_12();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void HighlightingSystem.HighlighterRenderer::.cctor()
extern "C" IL2CPP_METHOD_ATTR void HighlighterRenderer__cctor_m3104701346 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlighterRenderer__cctor_m3104701346_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((HighlighterRenderer_t1776162451_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterRenderer_t1776162451_il2cpp_TypeInfo_var))->set_transparentCutoff_4((0.5f));
		((HighlighterRenderer_t1776162451_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterRenderer_t1776162451_il2cpp_TypeInfo_var))->set_sRenderType_7(_stringLiteral3626444962);
		((HighlighterRenderer_t1776162451_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterRenderer_t1776162451_il2cpp_TypeInfo_var))->set_sOpaque_8(_stringLiteral757312457);
		((HighlighterRenderer_t1776162451_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterRenderer_t1776162451_il2cpp_TypeInfo_var))->set_sTransparent_9(_stringLiteral134923747);
		((HighlighterRenderer_t1776162451_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterRenderer_t1776162451_il2cpp_TypeInfo_var))->set_sTransparentCutout_10(_stringLiteral2906997769);
		((HighlighterRenderer_t1776162451_StaticFields*)il2cpp_codegen_static_fields_for(HighlighterRenderer_t1776162451_il2cpp_TypeInfo_var))->set_sMainTex_11(_stringLiteral3184621405);
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
// Conversion methods for marshalling of: HighlightingSystem.HighlighterRenderer/Data
extern "C" void Data_t434873072_marshal_pinvoke(const Data_t434873072& unmarshaled, Data_t434873072_marshaled_pinvoke& marshaled)
{
	Exception_t* ___material_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'material' of type 'Data': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___material_0Exception, NULL, NULL);
}
extern "C" void Data_t434873072_marshal_pinvoke_back(const Data_t434873072_marshaled_pinvoke& marshaled, Data_t434873072& unmarshaled)
{
	Exception_t* ___material_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'material' of type 'Data': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___material_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: HighlightingSystem.HighlighterRenderer/Data
extern "C" void Data_t434873072_marshal_pinvoke_cleanup(Data_t434873072_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: HighlightingSystem.HighlighterRenderer/Data
extern "C" void Data_t434873072_marshal_com(const Data_t434873072& unmarshaled, Data_t434873072_marshaled_com& marshaled)
{
	Exception_t* ___material_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'material' of type 'Data': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___material_0Exception, NULL, NULL);
}
extern "C" void Data_t434873072_marshal_com_back(const Data_t434873072_marshaled_com& marshaled, Data_t434873072& unmarshaled)
{
	Exception_t* ___material_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'material' of type 'Data': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___material_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: HighlightingSystem.HighlighterRenderer/Data
extern "C" void Data_t434873072_marshal_com_cleanup(Data_t434873072_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HighlightingSystem.HighlightingBase::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HighlightingBase__ctor_m505259048 (HighlightingBase_t582374880 * __this, const RuntimeMethod* method)
{
	{
		__this->set__downsampleFactor_16(4);
		__this->set__iterations_17(2);
		__this->set__blurMinSpread_18((0.65f));
		__this->set__blurSpread_19((0.25f));
		__this->set__blurIntensity_20((0.3f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean HighlightingSystem.HighlightingBase::get_isSupported()
extern "C" IL2CPP_METHOD_ATTR bool HighlightingBase_get_isSupported_m1996541036 (HighlightingBase_t582374880 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = VirtFuncInvoker1< bool, bool >::Invoke(13 /* System.Boolean HighlightingSystem.HighlightingBase::CheckSupported(System.Boolean) */, __this, (bool)0);
		return L_0;
	}
}
// System.Single HighlightingSystem.HighlightingBase::get_fillAlpha()
extern "C" IL2CPP_METHOD_ATTR float HighlightingBase_get_fillAlpha_m1428422174 (HighlightingBase_t582374880 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__fillAlpha_15();
		return L_0;
	}
}
// System.Void HighlightingSystem.HighlightingBase::set_fillAlpha(System.Single)
extern "C" IL2CPP_METHOD_ATTR void HighlightingBase_set_fillAlpha_m1870608081 (HighlightingBase_t582374880 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlightingBase_set_fillAlpha_m1870608081_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m56433566(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___value0 = L_1;
		float L_2 = __this->get__fillAlpha_15();
		float L_3 = ___value0;
		if ((((float)L_2) == ((float)L_3)))
		{
			goto IL_0036;
		}
	}
	{
		bool L_4 = Application_get_isPlaying_m100394690(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		Material_t340375123 * L_5 = __this->get_cutMaterial_36();
		IL2CPP_RUNTIME_CLASS_INIT(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var);
		int32_t L_6 = ((ShaderPropertyID_t567755140_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var))->get__HighlightingFillAlpha_6();
		float L_7 = ___value0;
		NullCheck(L_5);
		Material_SetFloat_m1688718093(L_5, L_6, L_7, /*hidden argument*/NULL);
	}

IL_002f:
	{
		float L_8 = ___value0;
		__this->set__fillAlpha_15(L_8);
	}

IL_0036:
	{
		return;
	}
}
// System.Int32 HighlightingSystem.HighlightingBase::get_downsampleFactor()
extern "C" IL2CPP_METHOD_ATTR int32_t HighlightingBase_get_downsampleFactor_m276459349 (HighlightingBase_t582374880 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__downsampleFactor_16();
		return L_0;
	}
}
// System.Void HighlightingSystem.HighlightingBase::set_downsampleFactor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void HighlightingBase_set_downsampleFactor_m2422254815 (HighlightingBase_t582374880 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlightingBase_set_downsampleFactor_m2422254815_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get__downsampleFactor_16();
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_2 = ___value0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___value0;
		int32_t L_4 = ___value0;
		if (((int32_t)((int32_t)L_3&(int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___value0;
		__this->set__downsampleFactor_16(L_5);
		goto IL_0032;
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral821289798, /*hidden argument*/NULL);
	}

IL_0032:
	{
		return;
	}
}
// System.Int32 HighlightingSystem.HighlightingBase::get_iterations()
extern "C" IL2CPP_METHOD_ATTR int32_t HighlightingBase_get_iterations_m2770856202 (HighlightingBase_t582374880 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__iterations_17();
		return L_0;
	}
}
// System.Void HighlightingSystem.HighlightingBase::set_iterations(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void HighlightingBase_set_iterations_m2930427573 (HighlightingBase_t582374880 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__iterations_17();
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = ___value0;
		__this->set__iterations_17(L_2);
	}

IL_0013:
	{
		return;
	}
}
// System.Single HighlightingSystem.HighlightingBase::get_blurMinSpread()
extern "C" IL2CPP_METHOD_ATTR float HighlightingBase_get_blurMinSpread_m1031240757 (HighlightingBase_t582374880 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__blurMinSpread_18();
		return L_0;
	}
}
// System.Void HighlightingSystem.HighlightingBase::set_blurMinSpread(System.Single)
extern "C" IL2CPP_METHOD_ATTR void HighlightingBase_set_blurMinSpread_m2098128336 (HighlightingBase_t582374880 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__blurMinSpread_18();
		float L_1 = ___value0;
		if ((((float)L_0) == ((float)L_1)))
		{
			goto IL_0013;
		}
	}
	{
		float L_2 = ___value0;
		__this->set__blurMinSpread_18(L_2);
	}

IL_0013:
	{
		return;
	}
}
// System.Single HighlightingSystem.HighlightingBase::get_blurSpread()
extern "C" IL2CPP_METHOD_ATTR float HighlightingBase_get_blurSpread_m2876024356 (HighlightingBase_t582374880 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__blurSpread_19();
		return L_0;
	}
}
// System.Void HighlightingSystem.HighlightingBase::set_blurSpread(System.Single)
extern "C" IL2CPP_METHOD_ATTR void HighlightingBase_set_blurSpread_m3107107880 (HighlightingBase_t582374880 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__blurSpread_19();
		float L_1 = ___value0;
		if ((((float)L_0) == ((float)L_1)))
		{
			goto IL_0013;
		}
	}
	{
		float L_2 = ___value0;
		__this->set__blurSpread_19(L_2);
	}

IL_0013:
	{
		return;
	}
}
// System.Single HighlightingSystem.HighlightingBase::get_blurIntensity()
extern "C" IL2CPP_METHOD_ATTR float HighlightingBase_get_blurIntensity_m744935819 (HighlightingBase_t582374880 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__blurIntensity_20();
		return L_0;
	}
}
// System.Void HighlightingSystem.HighlightingBase::set_blurIntensity(System.Single)
extern "C" IL2CPP_METHOD_ATTR void HighlightingBase_set_blurIntensity_m709625294 (HighlightingBase_t582374880 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlightingBase_set_blurIntensity_m709625294_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get__blurIntensity_20();
		float L_1 = ___value0;
		if ((((float)L_0) == ((float)L_1)))
		{
			goto IL_0033;
		}
	}
	{
		float L_2 = ___value0;
		__this->set__blurIntensity_20(L_2);
		bool L_3 = Application_get_isPlaying_m100394690(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		Material_t340375123 * L_4 = __this->get_blurMaterial_35();
		IL2CPP_RUNTIME_CLASS_INIT(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var);
		int32_t L_5 = ((ShaderPropertyID_t567755140_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var))->get__HighlightingIntensity_2();
		float L_6 = __this->get__blurIntensity_20();
		NullCheck(L_4);
		Material_SetFloat_m1688718093(L_4, L_5, L_6, /*hidden argument*/NULL);
	}

IL_0033:
	{
		return;
	}
}
// HighlightingSystem.BlurDirections HighlightingSystem.HighlightingBase::get_blurDirections()
extern "C" IL2CPP_METHOD_ATTR int32_t HighlightingBase_get_blurDirections_m710797524 (HighlightingBase_t582374880 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__blurDirections_21();
		return L_0;
	}
}
// System.Void HighlightingSystem.HighlightingBase::set_blurDirections(HighlightingSystem.BlurDirections)
extern "C" IL2CPP_METHOD_ATTR void HighlightingBase_set_blurDirections_m2932430632 (HighlightingBase_t582374880 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlightingBase_set_blurDirections_m2932430632_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get__blurDirections_21();
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_2 = ___value0;
		__this->set__blurDirections_21(L_2);
		bool L_3 = Application_get_isPlaying_m100394690(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		Material_t340375123 * L_4 = __this->get_blurMaterial_35();
		IL2CPP_RUNTIME_CLASS_INIT(HighlightingBase_t582374880_il2cpp_TypeInfo_var);
		String_t* L_5 = ((HighlightingBase_t582374880_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingBase_t582374880_il2cpp_TypeInfo_var))->get_keywordStraightDirections_7();
		int32_t L_6 = __this->get__blurDirections_21();
		MaterialExtensions_SetKeyword_m4077661988(NULL /*static, unused*/, L_4, L_5, (bool)((((int32_t)L_6) == ((int32_t)1))? 1 : 0), /*hidden argument*/NULL);
		Material_t340375123 * L_7 = __this->get_blurMaterial_35();
		String_t* L_8 = ((HighlightingBase_t582374880_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingBase_t582374880_il2cpp_TypeInfo_var))->get_keywordAllDirections_8();
		int32_t L_9 = __this->get__blurDirections_21();
		MaterialExtensions_SetKeyword_m4077661988(NULL /*static, unused*/, L_7, L_8, (bool)((((int32_t)L_9) == ((int32_t)2))? 1 : 0), /*hidden argument*/NULL);
	}

IL_004f:
	{
		return;
	}
}
// HighlightingSystem.HighlightingBlitter HighlightingSystem.HighlightingBase::get_blitter()
extern "C" IL2CPP_METHOD_ATTR HighlightingBlitter_t1505432117 * HighlightingBase_get_blitter_m1056088580 (HighlightingBase_t582374880 * __this, const RuntimeMethod* method)
{
	{
		HighlightingBlitter_t1505432117 * L_0 = __this->get__blitter_22();
		return L_0;
	}
}
// System.Void HighlightingSystem.HighlightingBase::set_blitter(HighlightingSystem.HighlightingBlitter)
extern "C" IL2CPP_METHOD_ATTR void HighlightingBase_set_blitter_m3154088708 (HighlightingBase_t582374880 * __this, HighlightingBlitter_t1505432117 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlightingBase_set_blitter_m3154088708_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HighlightingBlitter_t1505432117 * L_0 = __this->get__blitter_22();
		HighlightingBlitter_t1505432117 * L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0052;
		}
	}
	{
		HighlightingBlitter_t1505432117 * L_3 = __this->get__blitter_22();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		HighlightingBlitter_t1505432117 * L_5 = __this->get__blitter_22();
		NullCheck(L_5);
		VirtActionInvoker1< HighlightingBase_t582374880 * >::Invoke(6 /* System.Void HighlightingSystem.HighlightingBlitter::Unregister(HighlightingSystem.HighlightingBase) */, L_5, __this);
	}

IL_002e:
	{
		HighlightingBlitter_t1505432117 * L_6 = ___value0;
		__this->set__blitter_22(L_6);
		HighlightingBlitter_t1505432117 * L_7 = __this->get__blitter_22();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_7, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0052;
		}
	}
	{
		HighlightingBlitter_t1505432117 * L_9 = __this->get__blitter_22();
		NullCheck(L_9);
		VirtActionInvoker1< HighlightingBase_t582374880 * >::Invoke(5 /* System.Void HighlightingSystem.HighlightingBlitter::Register(HighlightingSystem.HighlightingBase) */, L_9, __this);
	}

IL_0052:
	{
		return;
	}
}
// HighlightingSystem.AntiAliasing HighlightingSystem.HighlightingBase::get_antiAliasing()
extern "C" IL2CPP_METHOD_ATTR int32_t HighlightingBase_get_antiAliasing_m1893770214 (HighlightingBase_t582374880 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__antiAliasing_23();
		return L_0;
	}
}
// System.Void HighlightingSystem.HighlightingBase::set_antiAliasing(HighlightingSystem.AntiAliasing)
extern "C" IL2CPP_METHOD_ATTR void HighlightingBase_set_antiAliasing_m1202982886 (HighlightingBase_t582374880 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__antiAliasing_23();
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = ___value0;
		__this->set__antiAliasing_23(L_2);
	}

IL_0013:
	{
		return;
	}
}
// System.Void HighlightingSystem.HighlightingBase::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void HighlightingBase_OnEnable_m275507140 (HighlightingBase_t582374880 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlightingBase_OnEnable_m275507140_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlightingBase_t582374880_il2cpp_TypeInfo_var);
		HighlightingBase_Initialize_m1939947958(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_0 = VirtFuncInvoker1< bool, bool >::Invoke(13 /* System.Boolean HighlightingSystem.HighlightingBase::CheckSupported(System.Boolean) */, __this, (bool)1);
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		Behaviour_set_enabled_m20417929(__this, (bool)0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral1613086517, /*hidden argument*/NULL);
		return;
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var);
		int32_t L_1 = ((ShaderPropertyID_t567755140_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var))->get__HighlightingBlur1_8();
		RenderTargetIdentifier_t2079184500  L_2;
		memset(&L_2, 0, sizeof(L_2));
		RenderTargetIdentifier__ctor_m4072422479((&L_2), L_1, /*hidden argument*/NULL);
		__this->set_blur1ID_25(L_2);
		int32_t L_3 = ((ShaderPropertyID_t567755140_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var))->get__HighlightingBlur2_9();
		RenderTargetIdentifier_t2079184500  L_4;
		memset(&L_4, 0, sizeof(L_4));
		RenderTargetIdentifier__ctor_m4072422479((&L_4), L_3, /*hidden argument*/NULL);
		__this->set_blur2ID_26(L_4);
		IL2CPP_RUNTIME_CLASS_INIT(HighlightingBase_t582374880_il2cpp_TypeInfo_var);
		MaterialU5BU5D_t561872642* L_5 = ((HighlightingBase_t582374880_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingBase_t582374880_il2cpp_TypeInfo_var))->get_materials_34();
		NullCheck(L_5);
		int32_t L_6 = 0;
		Material_t340375123 * L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Material_t340375123 * L_8 = (Material_t340375123 *)il2cpp_codegen_object_new(Material_t340375123_il2cpp_TypeInfo_var);
		Material__ctor_m249231841(L_8, L_7, /*hidden argument*/NULL);
		__this->set_blurMaterial_35(L_8);
		MaterialU5BU5D_t561872642* L_9 = ((HighlightingBase_t582374880_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingBase_t582374880_il2cpp_TypeInfo_var))->get_materials_34();
		NullCheck(L_9);
		int32_t L_10 = 1;
		Material_t340375123 * L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Material_t340375123 * L_12 = (Material_t340375123 *)il2cpp_codegen_object_new(Material_t340375123_il2cpp_TypeInfo_var);
		Material__ctor_m249231841(L_12, L_11, /*hidden argument*/NULL);
		__this->set_cutMaterial_36(L_12);
		MaterialU5BU5D_t561872642* L_13 = ((HighlightingBase_t582374880_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingBase_t582374880_il2cpp_TypeInfo_var))->get_materials_34();
		NullCheck(L_13);
		int32_t L_14 = 2;
		Material_t340375123 * L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		Material_t340375123 * L_16 = (Material_t340375123 *)il2cpp_codegen_object_new(Material_t340375123_il2cpp_TypeInfo_var);
		Material__ctor_m249231841(L_16, L_15, /*hidden argument*/NULL);
		__this->set_compMaterial_37(L_16);
		Material_t340375123 * L_17 = __this->get_blurMaterial_35();
		String_t* L_18 = ((HighlightingBase_t582374880_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingBase_t582374880_il2cpp_TypeInfo_var))->get_keywordStraightDirections_7();
		int32_t L_19 = __this->get__blurDirections_21();
		MaterialExtensions_SetKeyword_m4077661988(NULL /*static, unused*/, L_17, L_18, (bool)((((int32_t)L_19) == ((int32_t)1))? 1 : 0), /*hidden argument*/NULL);
		Material_t340375123 * L_20 = __this->get_blurMaterial_35();
		String_t* L_21 = ((HighlightingBase_t582374880_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingBase_t582374880_il2cpp_TypeInfo_var))->get_keywordAllDirections_8();
		int32_t L_22 = __this->get__blurDirections_21();
		MaterialExtensions_SetKeyword_m4077661988(NULL /*static, unused*/, L_20, L_21, (bool)((((int32_t)L_22) == ((int32_t)2))? 1 : 0), /*hidden argument*/NULL);
		Material_t340375123 * L_23 = __this->get_blurMaterial_35();
		int32_t L_24 = ((ShaderPropertyID_t567755140_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var))->get__HighlightingIntensity_2();
		float L_25 = __this->get__blurIntensity_20();
		NullCheck(L_23);
		Material_SetFloat_m1688718093(L_23, L_24, L_25, /*hidden argument*/NULL);
		Material_t340375123 * L_26 = __this->get_cutMaterial_36();
		int32_t L_27 = ((ShaderPropertyID_t567755140_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var))->get__HighlightingFillAlpha_6();
		float L_28 = __this->get__fillAlpha_15();
		NullCheck(L_26);
		Material_SetFloat_m1688718093(L_26, L_27, L_28, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_29 = (CommandBuffer_t2206337031 *)il2cpp_codegen_object_new(CommandBuffer_t2206337031_il2cpp_TypeInfo_var);
		CommandBuffer__ctor_m3028411456(L_29, /*hidden argument*/NULL);
		__this->set_renderBuffer_13(L_29);
		CommandBuffer_t2206337031 * L_30 = __this->get_renderBuffer_13();
		String_t* L_31 = ((HighlightingBase_t582374880_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingBase_t582374880_il2cpp_TypeInfo_var))->get_renderBufferName_5();
		NullCheck(L_30);
		CommandBuffer_set_name_m1839128424(L_30, L_31, /*hidden argument*/NULL);
		Camera_t4157153871 * L_32 = Component_GetComponent_TisCamera_t4157153871_m1557787507(__this, /*hidden argument*/Component_GetComponent_TisCamera_t4157153871_m1557787507_RuntimeMethod_var);
		__this->set_cam_28(L_32);
		Camera_t4157153871 * L_33 = __this->get_cam_28();
		Camera_t4157153871 * L_34 = L_33;
		NullCheck(L_34);
		int32_t L_35 = Camera_get_depthTextureMode_m871144641(L_34, /*hidden argument*/NULL);
		NullCheck(L_34);
		Camera_set_depthTextureMode_m754977860(L_34, ((int32_t)((int32_t)L_35|(int32_t)1)), /*hidden argument*/NULL);
		Camera_t4157153871 * L_36 = __this->get_cam_28();
		CommandBuffer_t2206337031 * L_37 = __this->get_renderBuffer_13();
		NullCheck(L_36);
		Camera_AddCommandBuffer_m1363239337(L_36, ((int32_t)12), L_37, /*hidden argument*/NULL);
		HighlightingBlitter_t1505432117 * L_38 = __this->get__blitter_22();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_39 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_38, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_0141;
		}
	}
	{
		HighlightingBlitter_t1505432117 * L_40 = __this->get__blitter_22();
		NullCheck(L_40);
		VirtActionInvoker1< HighlightingBase_t582374880 * >::Invoke(5 /* System.Void HighlightingSystem.HighlightingBlitter::Register(HighlightingSystem.HighlightingBase) */, L_40, __this);
	}

IL_0141:
	{
		intptr_t L_41 = (intptr_t)GetVirtualMethodInfo(__this, 9);
		OnEndOfFrame_t2764173602 * L_42 = (OnEndOfFrame_t2764173602 *)il2cpp_codegen_object_new(OnEndOfFrame_t2764173602_il2cpp_TypeInfo_var);
		OnEndOfFrame__ctor_m2041741679(L_42, __this, (intptr_t)L_41, /*hidden argument*/NULL);
		EndOfFrame_AddListener_m498318113(NULL /*static, unused*/, L_42, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.HighlightingBase::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void HighlightingBase_OnDisable_m2465875988 (HighlightingBase_t582374880 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlightingBase_OnDisable_m2465875988_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CommandBuffer_t2206337031 * L_0 = __this->get_renderBuffer_13();
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		Camera_t4157153871 * L_1 = __this->get_cam_28();
		CommandBuffer_t2206337031 * L_2 = __this->get_renderBuffer_13();
		NullCheck(L_1);
		Camera_RemoveCommandBuffer_m773243127(L_1, ((int32_t)12), L_2, /*hidden argument*/NULL);
		__this->set_renderBuffer_13((CommandBuffer_t2206337031 *)NULL);
	}

IL_0025:
	{
		RenderTexture_t2108887433 * L_3 = __this->get_highlightingBuffer_27();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0058;
		}
	}
	{
		RenderTexture_t2108887433 * L_5 = __this->get_highlightingBuffer_27();
		NullCheck(L_5);
		bool L_6 = RenderTexture_IsCreated_m1088809752(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		RenderTexture_t2108887433 * L_7 = __this->get_highlightingBuffer_27();
		NullCheck(L_7);
		RenderTexture_Release_m1749927881(L_7, /*hidden argument*/NULL);
		__this->set_highlightingBuffer_27((RenderTexture_t2108887433 *)NULL);
	}

IL_0058:
	{
		HighlightingBlitter_t1505432117 * L_8 = __this->get__blitter_22();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_8, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0075;
		}
	}
	{
		HighlightingBlitter_t1505432117 * L_10 = __this->get__blitter_22();
		NullCheck(L_10);
		VirtActionInvoker1< HighlightingBase_t582374880 * >::Invoke(6 /* System.Void HighlightingSystem.HighlightingBlitter::Unregister(HighlightingSystem.HighlightingBase) */, L_10, __this);
	}

IL_0075:
	{
		intptr_t L_11 = (intptr_t)GetVirtualMethodInfo(__this, 9);
		OnEndOfFrame_t2764173602 * L_12 = (OnEndOfFrame_t2764173602 *)il2cpp_codegen_object_new(OnEndOfFrame_t2764173602_il2cpp_TypeInfo_var);
		OnEndOfFrame__ctor_m2041741679(L_12, __this, (intptr_t)L_11, /*hidden argument*/NULL);
		EndOfFrame_RemoveListener_m3756592840(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.HighlightingBase::OnPreCull()
extern "C" IL2CPP_METHOD_ATTR void HighlightingBase_OnPreCull_m3104343130 (HighlightingBase_t582374880 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlightingBase_OnPreCull_m3104343130_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Camera_t4157153871 * L_0 = __this->get_cam_28();
		IL2CPP_RUNTIME_CLASS_INIT(HighlightingBase_t582374880_il2cpp_TypeInfo_var);
		((HighlightingBase_t582374880_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingBase_t582374880_il2cpp_TypeInfo_var))->set_currentCamera_11(L_0);
		HashSet_1_t341111925 * L_1 = ((HighlightingBase_t582374880_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingBase_t582374880_il2cpp_TypeInfo_var))->get_visibleRenderers_12();
		NullCheck(L_1);
		HashSet_1_Clear_m2623112546(L_1, /*hidden argument*/HashSet_1_Clear_m2623112546_RuntimeMethod_var);
		return;
	}
}
// System.Void HighlightingSystem.HighlightingBase::OnPreRender()
extern "C" IL2CPP_METHOD_ATTR void HighlightingBase_OnPreRender_m2841282639 (HighlightingBase_t582374880 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlightingBase_OnPreRender_m2841282639_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RenderTextureDescriptor_t1974534975  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		RenderTextureDescriptor_t1974534975  L_0 = VirtFuncInvoker0< RenderTextureDescriptor_t1974534975  >::Invoke(10 /* UnityEngine.RenderTextureDescriptor HighlightingSystem.HighlightingBase::GetDescriptor() */, __this);
		V_0 = L_0;
		RenderTexture_t2108887433 * L_1 = __this->get_highlightingBuffer_27();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		RenderTextureDescriptor_t1974534975  L_3 = __this->get_cachedDescriptor_14();
		RenderTextureDescriptor_t1974534975  L_4 = V_0;
		bool L_5 = VirtFuncInvoker2< bool, RenderTextureDescriptor_t1974534975 , RenderTextureDescriptor_t1974534975  >::Invoke(11 /* System.Boolean HighlightingSystem.HighlightingBase::Equals(UnityEngine.RenderTextureDescriptor,UnityEngine.RenderTextureDescriptor) */, __this, L_3, L_4);
		if (L_5)
		{
			goto IL_00ce;
		}
	}

IL_002a:
	{
		RenderTexture_t2108887433 * L_6 = __this->get_highlightingBuffer_27();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_6, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005d;
		}
	}
	{
		RenderTexture_t2108887433 * L_8 = __this->get_highlightingBuffer_27();
		NullCheck(L_8);
		bool L_9 = RenderTexture_IsCreated_m1088809752(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0056;
		}
	}
	{
		RenderTexture_t2108887433 * L_10 = __this->get_highlightingBuffer_27();
		NullCheck(L_10);
		RenderTexture_Release_m1749927881(L_10, /*hidden argument*/NULL);
	}

IL_0056:
	{
		__this->set_highlightingBuffer_27((RenderTexture_t2108887433 *)NULL);
	}

IL_005d:
	{
		RenderTextureDescriptor_t1974534975  L_11 = V_0;
		__this->set_cachedDescriptor_14(L_11);
		RenderTextureDescriptor_t1974534975  L_12 = __this->get_cachedDescriptor_14();
		RenderTexture_t2108887433 * L_13 = (RenderTexture_t2108887433 *)il2cpp_codegen_object_new(RenderTexture_t2108887433_il2cpp_TypeInfo_var);
		RenderTexture__ctor_m339910950(L_13, L_12, /*hidden argument*/NULL);
		__this->set_highlightingBuffer_27(L_13);
		RenderTexture_t2108887433 * L_14 = __this->get_highlightingBuffer_27();
		NullCheck(L_14);
		Texture_set_filterMode_m3078068058(L_14, 0, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_15 = __this->get_highlightingBuffer_27();
		NullCheck(L_15);
		Texture_set_wrapMode_m587872754(L_15, 1, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_16 = __this->get_highlightingBuffer_27();
		NullCheck(L_16);
		bool L_17 = RenderTexture_Create_m2861863713(L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_00a7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral884776689, /*hidden argument*/NULL);
	}

IL_00a7:
	{
		RenderTexture_t2108887433 * L_18 = __this->get_highlightingBuffer_27();
		RenderTargetIdentifier_t2079184500  L_19;
		memset(&L_19, 0, sizeof(L_19));
		RenderTargetIdentifier__ctor_m2966131472((&L_19), L_18, /*hidden argument*/NULL);
		__this->set_highlightingBufferID_24(L_19);
		Material_t340375123 * L_20 = __this->get_compMaterial_37();
		IL2CPP_RUNTIME_CLASS_INIT(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var);
		int32_t L_21 = ((ShaderPropertyID_t567755140_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var))->get__HighlightingBuffer_7();
		RenderTexture_t2108887433 * L_22 = __this->get_highlightingBuffer_27();
		NullCheck(L_20);
		Material_SetTexture_m3009528825(L_20, L_21, L_22, /*hidden argument*/NULL);
	}

IL_00ce:
	{
		VirtActionInvoker0::Invoke(14 /* System.Void HighlightingSystem.HighlightingBase::RebuildCommandBuffer() */, __this);
		return;
	}
}
// System.Void HighlightingSystem.HighlightingBase::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void HighlightingBase_OnRenderImage_m3863407741 (HighlightingBase_t582374880 * __this, RenderTexture_t2108887433 * ___src0, RenderTexture_t2108887433 * ___dst1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlightingBase_OnRenderImage_m3863407741_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HighlightingBlitter_t1505432117 * L_0 = HighlightingBase_get_blitter_m1056088580(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		RenderTexture_t2108887433 * L_2 = ___src0;
		RenderTexture_t2108887433 * L_3 = ___dst1;
		VirtActionInvoker2< RenderTexture_t2108887433 *, RenderTexture_t2108887433 * >::Invoke(15 /* System.Void HighlightingSystem.HighlightingBase::Blit(UnityEngine.RenderTexture,UnityEngine.RenderTexture) */, __this, L_2, L_3);
		goto IL_0025;
	}

IL_001e:
	{
		RenderTexture_t2108887433 * L_4 = ___src0;
		RenderTexture_t2108887433 * L_5 = ___dst1;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m1336850842(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void HighlightingSystem.HighlightingBase::OnEndOfFrame()
extern "C" IL2CPP_METHOD_ATTR void HighlightingBase_OnEndOfFrame_m2522856276 (HighlightingBase_t582374880 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlightingBase_OnEndOfFrame_m2522856276_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlightingBase_t582374880_il2cpp_TypeInfo_var);
		((HighlightingBase_t582374880_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingBase_t582374880_il2cpp_TypeInfo_var))->set_currentCamera_11((Camera_t4157153871 *)NULL);
		HashSet_1_t341111925 * L_0 = ((HighlightingBase_t582374880_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingBase_t582374880_il2cpp_TypeInfo_var))->get_visibleRenderers_12();
		NullCheck(L_0);
		HashSet_1_Clear_m2623112546(L_0, /*hidden argument*/HashSet_1_Clear_m2623112546_RuntimeMethod_var);
		return;
	}
}
// System.Void HighlightingSystem.HighlightingBase::SetVisible(HighlightingSystem.HighlighterRenderer)
extern "C" IL2CPP_METHOD_ATTR void HighlightingBase_SetVisible_m4170048733 (RuntimeObject * __this /* static, unused */, HighlighterRenderer_t1776162451 * ___renderer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlightingBase_SetVisible_m4170048733_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Camera_t4157153871 * L_0 = Camera_get_current_m929992396(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HighlightingBase_t582374880_il2cpp_TypeInfo_var);
		Camera_t4157153871 * L_1 = ((HighlightingBase_t582374880_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingBase_t582374880_il2cpp_TypeInfo_var))->get_currentCamera_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlightingBase_t582374880_il2cpp_TypeInfo_var);
		HashSet_1_t341111925 * L_3 = ((HighlightingBase_t582374880_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingBase_t582374880_il2cpp_TypeInfo_var))->get_visibleRenderers_12();
		HighlighterRenderer_t1776162451 * L_4 = ___renderer0;
		NullCheck(L_3);
		HashSet_1_Add_m2525925358(L_3, L_4, /*hidden argument*/HashSet_1_Add_m2525925358_RuntimeMethod_var);
		return;
	}
}
// System.Boolean HighlightingSystem.HighlightingBase::GetVisible(HighlightingSystem.HighlighterRenderer)
extern "C" IL2CPP_METHOD_ATTR bool HighlightingBase_GetVisible_m1401607538 (RuntimeObject * __this /* static, unused */, HighlighterRenderer_t1776162451 * ___renderer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlightingBase_GetVisible_m1401607538_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlightingBase_t582374880_il2cpp_TypeInfo_var);
		HashSet_1_t341111925 * L_0 = ((HighlightingBase_t582374880_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingBase_t582374880_il2cpp_TypeInfo_var))->get_visibleRenderers_12();
		HighlighterRenderer_t1776162451 * L_1 = ___renderer0;
		NullCheck(L_0);
		bool L_2 = HashSet_1_Contains_m2048367682(L_0, L_1, /*hidden argument*/HashSet_1_Contains_m2048367682_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void HighlightingSystem.HighlightingBase::Initialize()
extern "C" IL2CPP_METHOD_ATTR void HighlightingBase_Initialize_m1939947958 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlightingBase_Initialize_m1939947958_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Shader_t4151988712 * V_2 = NULL;
	Material_t340375123 * V_3 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlightingBase_t582374880_il2cpp_TypeInfo_var);
		bool L_0 = ((HighlightingBase_t582374880_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingBase_t582374880_il2cpp_TypeInfo_var))->get_initialized_38();
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlightingBase_t582374880_il2cpp_TypeInfo_var);
		StringU5BU5D_t1281789340* L_1 = ((HighlightingBase_t582374880_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingBase_t582374880_il2cpp_TypeInfo_var))->get_shaderPaths_32();
		NullCheck(L_1);
		V_0 = (((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))));
		int32_t L_2 = V_0;
		ShaderU5BU5D_t2047402361* L_3 = (ShaderU5BU5D_t2047402361*)SZArrayNew(ShaderU5BU5D_t2047402361_il2cpp_TypeInfo_var, (uint32_t)L_2);
		((HighlightingBase_t582374880_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingBase_t582374880_il2cpp_TypeInfo_var))->set_shaders_33(L_3);
		int32_t L_4 = V_0;
		MaterialU5BU5D_t561872642* L_5 = (MaterialU5BU5D_t561872642*)SZArrayNew(MaterialU5BU5D_t561872642_il2cpp_TypeInfo_var, (uint32_t)L_4);
		((HighlightingBase_t582374880_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingBase_t582374880_il2cpp_TypeInfo_var))->set_materials_34(L_5);
		V_1 = 0;
		goto IL_0058;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlightingBase_t582374880_il2cpp_TypeInfo_var);
		StringU5BU5D_t1281789340* L_6 = ((HighlightingBase_t582374880_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingBase_t582374880_il2cpp_TypeInfo_var))->get_shaderPaths_32();
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Shader_t4151988712 * L_10 = Shader_Find_m2092206247(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		ShaderU5BU5D_t2047402361* L_11 = ((HighlightingBase_t582374880_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingBase_t582374880_il2cpp_TypeInfo_var))->get_shaders_33();
		int32_t L_12 = V_1;
		Shader_t4151988712 * L_13 = V_2;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Shader_t4151988712 *)L_13);
		Shader_t4151988712 * L_14 = V_2;
		Material_t340375123 * L_15 = (Material_t340375123 *)il2cpp_codegen_object_new(Material_t340375123_il2cpp_TypeInfo_var);
		Material__ctor_m1662457592(L_15, L_14, /*hidden argument*/NULL);
		V_3 = L_15;
		MaterialU5BU5D_t561872642* L_16 = ((HighlightingBase_t582374880_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingBase_t582374880_il2cpp_TypeInfo_var))->get_materials_34();
		int32_t L_17 = V_1;
		Material_t340375123 * L_18 = V_3;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (Material_t340375123 *)L_18);
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0058:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = V_0;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0030;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlightingBase_t582374880_il2cpp_TypeInfo_var);
		((HighlightingBase_t582374880_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingBase_t582374880_il2cpp_TypeInfo_var))->set_initialized_38((bool)1);
		return;
	}
}
// UnityEngine.RenderTextureDescriptor HighlightingSystem.HighlightingBase::GetDescriptor()
extern "C" IL2CPP_METHOD_ATTR RenderTextureDescriptor_t1974534975  HighlightingBase_GetDescriptor_m306791711 (HighlightingBase_t582374880 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlightingBase_GetDescriptor_m306791711_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RenderTextureDescriptor_t1974534975  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RenderTexture_t2108887433 * V_1 = NULL;
	{
		Camera_t4157153871 * L_0 = __this->get_cam_28();
		NullCheck(L_0);
		RenderTexture_t2108887433 * L_1 = Camera_get_targetTexture_m2278634983(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		RenderTexture_t2108887433 * L_2 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		RenderTexture_t2108887433 * L_4 = V_1;
		NullCheck(L_4);
		RenderTextureDescriptor_t1974534975  L_5 = RenderTexture_get_descriptor_m722729156(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0059;
	}

IL_0024:
	{
		bool L_6 = XRSettings_get_enabled_m2032436980(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		RenderTextureDescriptor_t1974534975  L_7 = XRSettings_get_eyeTextureDesc_m4145342175(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0059;
	}

IL_0039:
	{
		Camera_t4157153871 * L_8 = __this->get_cam_28();
		NullCheck(L_8);
		int32_t L_9 = Camera_get_pixelWidth_m1110053668(L_8, /*hidden argument*/NULL);
		Camera_t4157153871 * L_10 = __this->get_cam_28();
		NullCheck(L_10);
		int32_t L_11 = Camera_get_pixelHeight_m722276884(L_10, /*hidden argument*/NULL);
		RenderTextureDescriptor__ctor_m505960146((RenderTextureDescriptor_t1974534975 *)(&V_0), L_9, L_11, 0, ((int32_t)24), /*hidden argument*/NULL);
	}

IL_0059:
	{
		RenderTextureDescriptor_set_colorFormat_m3409821771((RenderTextureDescriptor_t1974534975 *)(&V_0), 0, /*hidden argument*/NULL);
		int32_t L_12 = QualitySettings_get_activeColorSpace_m2902748248(NULL /*static, unused*/, /*hidden argument*/NULL);
		RenderTextureDescriptor_set_sRGB_m1977654705((RenderTextureDescriptor_t1974534975 *)(&V_0), (bool)((((int32_t)L_12) == ((int32_t)1))? 1 : 0), /*hidden argument*/NULL);
		RenderTextureDescriptor_set_useMipMap_m370486336((RenderTextureDescriptor_t1974534975 *)(&V_0), (bool)0, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_13 = V_1;
		int32_t L_14 = VirtFuncInvoker1< int32_t, RenderTexture_t2108887433 * >::Invoke(12 /* System.Int32 HighlightingSystem.HighlightingBase::GetAA(UnityEngine.RenderTexture) */, __this, L_13);
		RenderTextureDescriptor_set_msaaSamples_m2884263852((RenderTextureDescriptor_t1974534975 *)(&V_0), L_14, /*hidden argument*/NULL);
		RenderTextureDescriptor_t1974534975  L_15 = V_0;
		return L_15;
	}
}
// System.Boolean HighlightingSystem.HighlightingBase::Equals(UnityEngine.RenderTextureDescriptor,UnityEngine.RenderTextureDescriptor)
extern "C" IL2CPP_METHOD_ATTR bool HighlightingBase_Equals_m184643999 (HighlightingBase_t582374880 * __this, RenderTextureDescriptor_t1974534975  ___x0, RenderTextureDescriptor_t1974534975  ___y1, const RuntimeMethod* method)
{
	int32_t G_B4_0 = 0;
	{
		int32_t L_0 = RenderTextureDescriptor_get_width_m26344548((RenderTextureDescriptor_t1974534975 *)(&___x0), /*hidden argument*/NULL);
		int32_t L_1 = RenderTextureDescriptor_get_width_m26344548((RenderTextureDescriptor_t1974534975 *)(&___y1), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_2 = RenderTextureDescriptor_get_height_m1891977024((RenderTextureDescriptor_t1974534975 *)(&___x0), /*hidden argument*/NULL);
		int32_t L_3 = RenderTextureDescriptor_get_height_m1891977024((RenderTextureDescriptor_t1974534975 *)(&___y1), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_4 = RenderTextureDescriptor_get_msaaSamples_m2437860573((RenderTextureDescriptor_t1974534975 *)(&___x0), /*hidden argument*/NULL);
		int32_t L_5 = RenderTextureDescriptor_get_msaaSamples_m2437860573((RenderTextureDescriptor_t1974534975 *)(&___y1), /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = 0;
	}

IL_0039:
	{
		return (bool)G_B4_0;
	}
}
// System.Int32 HighlightingSystem.HighlightingBase::GetAA(UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR int32_t HighlightingBase_GetAA_m446378233 (HighlightingBase_t582374880 * __this, RenderTexture_t2108887433 * ___targetTexture0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlightingBase_GetAA_m446378233_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 1;
		int32_t L_0 = __this->get__antiAliasing_23();
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0028;
			}
			case 1:
			{
				goto IL_007c;
			}
			case 2:
			{
				goto IL_0083;
			}
			case 3:
			{
				goto IL_008a;
			}
			case 4:
			{
				goto IL_0091;
			}
		}
	}
	{
		goto IL_0098;
	}

IL_0028:
	{
		Camera_t4157153871 * L_2 = __this->get_cam_28();
		NullCheck(L_2);
		int32_t L_3 = Camera_get_actualRenderingPath_m423069678(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_004a;
		}
	}
	{
		Camera_t4157153871 * L_4 = __this->get_cam_28();
		NullCheck(L_4);
		int32_t L_5 = Camera_get_actualRenderingPath_m423069678(L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)3))))
		{
			goto IL_0051;
		}
	}

IL_004a:
	{
		V_0 = 1;
		goto IL_0077;
	}

IL_0051:
	{
		RenderTexture_t2108887433 * L_6 = ___targetTexture0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_6, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_8 = QualitySettings_get_antiAliasing_m1365131962(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_8;
		int32_t L_9 = V_0;
		if (L_9)
		{
			goto IL_006b;
		}
	}
	{
		V_0 = 1;
	}

IL_006b:
	{
		goto IL_0077;
	}

IL_0070:
	{
		RenderTexture_t2108887433 * L_10 = ___targetTexture0;
		NullCheck(L_10);
		int32_t L_11 = RenderTexture_get_antiAliasing_m302596907(L_10, /*hidden argument*/NULL);
		V_0 = L_11;
	}

IL_0077:
	{
		goto IL_0098;
	}

IL_007c:
	{
		V_0 = 1;
		goto IL_0098;
	}

IL_0083:
	{
		V_0 = 2;
		goto IL_0098;
	}

IL_008a:
	{
		V_0 = 4;
		goto IL_0098;
	}

IL_0091:
	{
		V_0 = 8;
		goto IL_0098;
	}

IL_0098:
	{
		int32_t L_12 = V_0;
		return L_12;
	}
}
// System.Boolean HighlightingSystem.HighlightingBase::CheckSupported(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool HighlightingBase_CheckSupported_m601906130 (HighlightingBase_t582374880 * __this, bool ___verbose0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlightingBase_CheckSupported_m601906130_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Shader_t4151988712 * V_2 = NULL;
	{
		V_0 = (bool)1;
		bool L_0 = SystemInfo_get_supportsImageEffects_m2886934848(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		bool L_1 = ___verbose0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral1913488897, /*hidden argument*/NULL);
	}

IL_001c:
	{
		V_0 = (bool)0;
	}

IL_001e:
	{
		bool L_2 = SystemInfo_SupportsRenderTextureFormat_m1663449629(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_003b;
		}
	}
	{
		bool L_3 = ___verbose0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral2259730303, /*hidden argument*/NULL);
	}

IL_0039:
	{
		V_0 = (bool)0;
	}

IL_003b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		Shader_t4151988712 * L_4 = HighlighterCore_get_opaqueShader_m700923225(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5 = Shader_get_isSupported_m755080316(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_005c;
		}
	}
	{
		bool L_6 = ___verbose0;
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral1539879099, /*hidden argument*/NULL);
	}

IL_005a:
	{
		V_0 = (bool)0;
	}

IL_005c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		Shader_t4151988712 * L_7 = HighlighterCore_get_transparentShader_m2954448632(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		bool L_8 = Shader_get_isSupported_m755080316(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_007d;
		}
	}
	{
		bool L_9 = ___verbose0;
		if (!L_9)
		{
			goto IL_007b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral4212753712, /*hidden argument*/NULL);
	}

IL_007b:
	{
		V_0 = (bool)0;
	}

IL_007d:
	{
		V_1 = 0;
		goto IL_00bd;
	}

IL_0084:
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlightingBase_t582374880_il2cpp_TypeInfo_var);
		ShaderU5BU5D_t2047402361* L_10 = ((HighlightingBase_t582374880_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingBase_t582374880_il2cpp_TypeInfo_var))->get_shaders_33();
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Shader_t4151988712 * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_2 = L_13;
		Shader_t4151988712 * L_14 = V_2;
		NullCheck(L_14);
		bool L_15 = Shader_get_isSupported_m755080316(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_00b9;
		}
	}
	{
		bool L_16 = ___verbose0;
		if (!L_16)
		{
			goto IL_00b7;
		}
	}
	{
		Shader_t4151988712 * L_17 = V_2;
		NullCheck(L_17);
		String_t* L_18 = Object_get_name_m4211327027(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral634398011, L_18, _stringLiteral3122373656, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
	}

IL_00b7:
	{
		V_0 = (bool)0;
	}

IL_00b9:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_00bd:
	{
		int32_t L_21 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(HighlightingBase_t582374880_il2cpp_TypeInfo_var);
		ShaderU5BU5D_t2047402361* L_22 = ((HighlightingBase_t582374880_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingBase_t582374880_il2cpp_TypeInfo_var))->get_shaders_33();
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length)))))))
		{
			goto IL_0084;
		}
	}
	{
		bool L_23 = V_0;
		return L_23;
	}
}
// System.Void HighlightingSystem.HighlightingBase::RebuildCommandBuffer()
extern "C" IL2CPP_METHOD_ATTR void HighlightingBase_RebuildCommandBuffer_m1673557669 (HighlightingBase_t582374880 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlightingBase_RebuildCommandBuffer_m1673557669_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RenderTextureDescriptor_t1974534975  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	CommandBuffer_t2206337031 * G_B8_0 = NULL;
	CommandBuffer_t2206337031 * G_B7_0 = NULL;
	RenderTargetIdentifier_t2079184500  G_B9_0;
	memset(&G_B9_0, 0, sizeof(G_B9_0));
	CommandBuffer_t2206337031 * G_B9_1 = NULL;
	{
		CommandBuffer_t2206337031 * L_0 = __this->get_renderBuffer_13();
		NullCheck(L_0);
		CommandBuffer_Clear_m3260707516(L_0, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_1 = __this->get_renderBuffer_13();
		IL2CPP_RUNTIME_CLASS_INIT(HighlightingBase_t582374880_il2cpp_TypeInfo_var);
		String_t* L_2 = ((HighlightingBase_t582374880_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingBase_t582374880_il2cpp_TypeInfo_var))->get_profileHighlightingSystem_9();
		NullCheck(L_1);
		CommandBuffer_BeginSample_m204508461(L_1, L_2, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_3 = __this->get_renderBuffer_13();
		RenderTargetIdentifier_t2079184500  L_4 = __this->get_highlightingBufferID_24();
		NullCheck(L_3);
		CommandBuffer_SetRenderTarget_m2373313166(L_3, L_4, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_5 = __this->get_renderBuffer_13();
		Color_t2555686324  L_6 = ((HighlightingBase_t582374880_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingBase_t582374880_il2cpp_TypeInfo_var))->get_colorClear_4();
		NullCheck(L_5);
		CommandBuffer_ClearRenderTarget_m1436931375(L_5, (bool)1, (bool)1, L_6, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_7 = __this->get_renderBuffer_13();
		IL2CPP_RUNTIME_CLASS_INIT(HighlighterCore_t3117871998_il2cpp_TypeInfo_var);
		HighlighterCore_FillBuffer_m3144797772(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		RenderTextureDescriptor_t1974534975  L_8 = __this->get_cachedDescriptor_14();
		V_0 = L_8;
		RenderTexture_t2108887433 * L_9 = __this->get_highlightingBuffer_27();
		NullCheck(L_9);
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_9);
		int32_t L_11 = __this->get__downsampleFactor_16();
		RenderTextureDescriptor_set_width_m2491653054((RenderTextureDescriptor_t1974534975 *)(&V_0), ((int32_t)((int32_t)L_10/(int32_t)L_11)), /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_12 = __this->get_highlightingBuffer_27();
		NullCheck(L_12);
		int32_t L_13 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_12);
		int32_t L_14 = __this->get__downsampleFactor_16();
		RenderTextureDescriptor_set_height_m2134913371((RenderTextureDescriptor_t1974534975 *)(&V_0), ((int32_t)((int32_t)L_13/(int32_t)L_14)), /*hidden argument*/NULL);
		RenderTextureDescriptor_set_depthBufferBits_m2738180586((RenderTextureDescriptor_t1974534975 *)(&V_0), 0, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_15 = __this->get_renderBuffer_13();
		IL2CPP_RUNTIME_CLASS_INIT(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var);
		int32_t L_16 = ((ShaderPropertyID_t567755140_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var))->get__HighlightingBlur1_8();
		RenderTextureDescriptor_t1974534975  L_17 = V_0;
		NullCheck(L_15);
		CommandBuffer_GetTemporaryRT_m2908861421(L_15, L_16, L_17, 1, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_18 = __this->get_renderBuffer_13();
		int32_t L_19 = ((ShaderPropertyID_t567755140_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var))->get__HighlightingBlur2_9();
		RenderTextureDescriptor_t1974534975  L_20 = V_0;
		NullCheck(L_18);
		CommandBuffer_GetTemporaryRT_m2908861421(L_18, L_19, L_20, 1, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_21 = __this->get_renderBuffer_13();
		RenderTargetIdentifier_t2079184500  L_22 = __this->get_highlightingBufferID_24();
		RenderTargetIdentifier_t2079184500  L_23 = __this->get_blur1ID_25();
		NullCheck(L_21);
		CommandBuffer_Blit_m1393847922(L_21, L_22, L_23, /*hidden argument*/NULL);
		V_1 = (bool)1;
		V_2 = 0;
		goto IL_013e;
	}

IL_00ce:
	{
		float L_24 = __this->get__blurMinSpread_18();
		float L_25 = __this->get__blurSpread_19();
		int32_t L_26 = V_2;
		V_3 = ((float)il2cpp_codegen_add((float)L_24, (float)((float)il2cpp_codegen_multiply((float)L_25, (float)(((float)((float)L_26)))))));
		CommandBuffer_t2206337031 * L_27 = __this->get_renderBuffer_13();
		IL2CPP_RUNTIME_CLASS_INIT(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var);
		int32_t L_28 = ((ShaderPropertyID_t567755140_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var))->get__HighlightingBlurOffset_5();
		float L_29 = V_3;
		NullCheck(L_27);
		CommandBuffer_SetGlobalFloat_m4256468291(L_27, L_28, L_29, /*hidden argument*/NULL);
		bool L_30 = V_1;
		if (!L_30)
		{
			goto IL_0118;
		}
	}
	{
		CommandBuffer_t2206337031 * L_31 = __this->get_renderBuffer_13();
		RenderTargetIdentifier_t2079184500  L_32 = __this->get_blur1ID_25();
		RenderTargetIdentifier_t2079184500  L_33 = __this->get_blur2ID_26();
		Material_t340375123 * L_34 = __this->get_blurMaterial_35();
		NullCheck(L_31);
		CommandBuffer_Blit_m440086202(L_31, L_32, L_33, L_34, /*hidden argument*/NULL);
		goto IL_0135;
	}

IL_0118:
	{
		CommandBuffer_t2206337031 * L_35 = __this->get_renderBuffer_13();
		RenderTargetIdentifier_t2079184500  L_36 = __this->get_blur2ID_26();
		RenderTargetIdentifier_t2079184500  L_37 = __this->get_blur1ID_25();
		Material_t340375123 * L_38 = __this->get_blurMaterial_35();
		NullCheck(L_35);
		CommandBuffer_Blit_m440086202(L_35, L_36, L_37, L_38, /*hidden argument*/NULL);
	}

IL_0135:
	{
		bool L_39 = V_1;
		V_1 = (bool)((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
		int32_t L_40 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_013e:
	{
		int32_t L_41 = V_2;
		int32_t L_42 = __this->get__iterations_17();
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_00ce;
		}
	}
	{
		CommandBuffer_t2206337031 * L_43 = __this->get_renderBuffer_13();
		bool L_44 = V_1;
		G_B7_0 = L_43;
		if (!L_44)
		{
			G_B8_0 = L_43;
			goto IL_0161;
		}
	}
	{
		RenderTargetIdentifier_t2079184500  L_45 = __this->get_blur1ID_25();
		G_B9_0 = L_45;
		G_B9_1 = G_B7_0;
		goto IL_0167;
	}

IL_0161:
	{
		RenderTargetIdentifier_t2079184500  L_46 = __this->get_blur2ID_26();
		G_B9_0 = L_46;
		G_B9_1 = G_B8_0;
	}

IL_0167:
	{
		RenderTargetIdentifier_t2079184500  L_47 = __this->get_highlightingBufferID_24();
		Material_t340375123 * L_48 = __this->get_cutMaterial_36();
		NullCheck(G_B9_1);
		CommandBuffer_Blit_m440086202(G_B9_1, G_B9_0, L_47, L_48, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_49 = __this->get_renderBuffer_13();
		IL2CPP_RUNTIME_CLASS_INIT(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var);
		int32_t L_50 = ((ShaderPropertyID_t567755140_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var))->get__HighlightingBlur1_8();
		NullCheck(L_49);
		CommandBuffer_ReleaseTemporaryRT_m2627662573(L_49, L_50, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_51 = __this->get_renderBuffer_13();
		int32_t L_52 = ((ShaderPropertyID_t567755140_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var))->get__HighlightingBlur2_9();
		NullCheck(L_51);
		CommandBuffer_ReleaseTemporaryRT_m2627662573(L_51, L_52, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_53 = __this->get_renderBuffer_13();
		IL2CPP_RUNTIME_CLASS_INIT(HighlightingBase_t582374880_il2cpp_TypeInfo_var);
		String_t* L_54 = ((HighlightingBase_t582374880_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingBase_t582374880_il2cpp_TypeInfo_var))->get_profileHighlightingSystem_9();
		NullCheck(L_53);
		CommandBuffer_EndSample_m536251891(L_53, L_54, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.HighlightingBase::Blit(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void HighlightingBase_Blit_m2508056597 (HighlightingBase_t582374880 * __this, RenderTexture_t2108887433 * ___src0, RenderTexture_t2108887433 * ___dst1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlightingBase_Blit_m2508056597_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RenderTexture_t2108887433 * L_0 = ___src0;
		RenderTexture_t2108887433 * L_1 = ___dst1;
		Material_t340375123 * L_2 = __this->get_compMaterial_37();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m890955694(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.HighlightingBase::.cctor()
extern "C" IL2CPP_METHOD_ATTR void HighlightingBase__cctor_m2500999928 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlightingBase__cctor_m2500999928_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Color_t2555686324  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Color__ctor_m2943235014((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		((HighlightingBase_t582374880_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingBase_t582374880_il2cpp_TypeInfo_var))->set_colorClear_4(L_0);
		((HighlightingBase_t582374880_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingBase_t582374880_il2cpp_TypeInfo_var))->set_renderBufferName_5(_stringLiteral1492096147);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t1817901843_il2cpp_TypeInfo_var);
		Matrix4x4_t1817901843  L_1 = Matrix4x4_get_identity_m1406790249(NULL /*static, unused*/, /*hidden argument*/NULL);
		((HighlightingBase_t582374880_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingBase_t582374880_il2cpp_TypeInfo_var))->set_identityMatrix_6(L_1);
		((HighlightingBase_t582374880_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingBase_t582374880_il2cpp_TypeInfo_var))->set_keywordStraightDirections_7(_stringLiteral901552060);
		((HighlightingBase_t582374880_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingBase_t582374880_il2cpp_TypeInfo_var))->set_keywordAllDirections_8(_stringLiteral1942974966);
		((HighlightingBase_t582374880_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingBase_t582374880_il2cpp_TypeInfo_var))->set_profileHighlightingSystem_9(_stringLiteral1492096147);
		HashSet_1_t341111925 * L_2 = (HashSet_1_t341111925 *)il2cpp_codegen_object_new(HashSet_1_t341111925_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m301462680(L_2, /*hidden argument*/HashSet_1__ctor_m301462680_RuntimeMethod_var);
		((HighlightingBase_t582374880_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingBase_t582374880_il2cpp_TypeInfo_var))->set_visibleRenderers_12(L_2);
		StringU5BU5D_t1281789340* L_3 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_t1281789340* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral3539164247);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3539164247);
		StringU5BU5D_t1281789340* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral3539373481);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3539373481);
		StringU5BU5D_t1281789340* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral2878535299);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2878535299);
		((HighlightingBase_t582374880_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingBase_t582374880_il2cpp_TypeInfo_var))->set_shaderPaths_32(L_6);
		((HighlightingBase_t582374880_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingBase_t582374880_il2cpp_TypeInfo_var))->set_initialized_38((bool)0);
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
// System.Void HighlightingSystem.HighlightingBlitter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HighlightingBlitter__ctor_m2686943818 (HighlightingBlitter_t1505432117 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlightingBlitter__ctor_m2686943818_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2054449622 * L_0 = (List_1_t2054449622 *)il2cpp_codegen_object_new(List_1_t2054449622_il2cpp_TypeInfo_var);
		List_1__ctor_m2379666983(L_0, /*hidden argument*/List_1__ctor_m2379666983_RuntimeMethod_var);
		__this->set_renderers_4(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.HighlightingBlitter::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void HighlightingBlitter_OnRenderImage_m3862676426 (HighlightingBlitter_t1505432117 * __this, RenderTexture_t2108887433 * ___src0, RenderTexture_t2108887433 * ___dst1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlightingBlitter_OnRenderImage_m3862676426_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	HighlightingBase_t582374880 * V_2 = NULL;
	{
		V_0 = (bool)1;
		V_1 = 0;
		goto IL_003a;
	}

IL_0009:
	{
		List_1_t2054449622 * L_0 = __this->get_renderers_4();
		int32_t L_1 = V_1;
		NullCheck(L_0);
		HighlightingBase_t582374880 * L_2 = List_1_get_Item_m3623705544(L_0, L_1, /*hidden argument*/List_1_get_Item_m3623705544_RuntimeMethod_var);
		V_2 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		HighlightingBase_t582374880 * L_4 = V_2;
		RenderTexture_t2108887433 * L_5 = ___src0;
		RenderTexture_t2108887433 * L_6 = ___dst1;
		NullCheck(L_4);
		VirtActionInvoker2< RenderTexture_t2108887433 *, RenderTexture_t2108887433 * >::Invoke(15 /* System.Void HighlightingSystem.HighlightingBase::Blit(UnityEngine.RenderTexture,UnityEngine.RenderTexture) */, L_4, L_5, L_6);
		goto IL_0031;
	}

IL_0029:
	{
		HighlightingBase_t582374880 * L_7 = V_2;
		RenderTexture_t2108887433 * L_8 = ___dst1;
		RenderTexture_t2108887433 * L_9 = ___src0;
		NullCheck(L_7);
		VirtActionInvoker2< RenderTexture_t2108887433 *, RenderTexture_t2108887433 * >::Invoke(15 /* System.Void HighlightingSystem.HighlightingBase::Blit(UnityEngine.RenderTexture,UnityEngine.RenderTexture) */, L_7, L_8, L_9);
	}

IL_0031:
	{
		bool L_10 = V_0;
		V_0 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_003a:
	{
		int32_t L_12 = V_1;
		List_1_t2054449622 * L_13 = __this->get_renderers_4();
		NullCheck(L_13);
		int32_t L_14 = List_1_get_Count_m1560982368(L_13, /*hidden argument*/List_1_get_Count_m1560982368_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_0009;
		}
	}
	{
		bool L_15 = V_0;
		if (!L_15)
		{
			goto IL_0058;
		}
	}
	{
		RenderTexture_t2108887433 * L_16 = ___src0;
		RenderTexture_t2108887433 * L_17 = ___dst1;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m1336850842(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
	}

IL_0058:
	{
		return;
	}
}
// System.Void HighlightingSystem.HighlightingBlitter::Register(HighlightingSystem.HighlightingBase)
extern "C" IL2CPP_METHOD_ATTR void HighlightingBlitter_Register_m3148226583 (HighlightingBlitter_t1505432117 * __this, HighlightingBase_t582374880 * ___renderer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlightingBlitter_Register_m3148226583_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2054449622 * L_0 = __this->get_renderers_4();
		HighlightingBase_t582374880 * L_1 = ___renderer0;
		NullCheck(L_0);
		bool L_2 = List_1_Contains_m2616101103(L_0, L_1, /*hidden argument*/List_1_Contains_m2616101103_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		List_1_t2054449622 * L_3 = __this->get_renderers_4();
		HighlightingBase_t582374880 * L_4 = ___renderer0;
		NullCheck(L_3);
		List_1_Add_m209993823(L_3, L_4, /*hidden argument*/List_1_Add_m209993823_RuntimeMethod_var);
	}

IL_001d:
	{
		List_1_t2054449622 * L_5 = __this->get_renderers_4();
		NullCheck(L_5);
		int32_t L_6 = List_1_get_Count_m1560982368(L_5, /*hidden argument*/List_1_get_Count_m1560982368_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(__this, (bool)((((int32_t)L_6) > ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.HighlightingBlitter::Unregister(HighlightingSystem.HighlightingBase)
extern "C" IL2CPP_METHOD_ATTR void HighlightingBlitter_Unregister_m2721466775 (HighlightingBlitter_t1505432117 * __this, HighlightingBase_t582374880 * ___renderer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlightingBlitter_Unregister_m2721466775_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t2054449622 * L_0 = __this->get_renderers_4();
		HighlightingBase_t582374880 * L_1 = ___renderer0;
		NullCheck(L_0);
		int32_t L_2 = List_1_IndexOf_m1028121169(L_0, L_1, /*hidden argument*/List_1_IndexOf_m1028121169_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0020;
		}
	}
	{
		List_1_t2054449622 * L_4 = __this->get_renderers_4();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		List_1_RemoveAt_m437886299(L_4, L_5, /*hidden argument*/List_1_RemoveAt_m437886299_RuntimeMethod_var);
	}

IL_0020:
	{
		List_1_t2054449622 * L_6 = __this->get_renderers_4();
		NullCheck(L_6);
		int32_t L_7 = List_1_get_Count_m1560982368(L_6, /*hidden argument*/List_1_get_Count_m1560982368_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(__this, (bool)((((int32_t)L_7) > ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: HighlightingSystem.HighlightingPreset
extern "C" void HighlightingPreset_t635619791_marshal_pinvoke(const HighlightingPreset_t635619791& unmarshaled, HighlightingPreset_t635619791_marshaled_pinvoke& marshaled)
{
	marshaled.____name_0 = il2cpp_codegen_marshal_string(unmarshaled.get__name_0());
	marshaled.____fillAlpha_1 = unmarshaled.get__fillAlpha_1();
	marshaled.____downsampleFactor_2 = unmarshaled.get__downsampleFactor_2();
	marshaled.____iterations_3 = unmarshaled.get__iterations_3();
	marshaled.____blurMinSpread_4 = unmarshaled.get__blurMinSpread_4();
	marshaled.____blurSpread_5 = unmarshaled.get__blurSpread_5();
	marshaled.____blurIntensity_6 = unmarshaled.get__blurIntensity_6();
	marshaled.____blurDirections_7 = unmarshaled.get__blurDirections_7();
}
extern "C" void HighlightingPreset_t635619791_marshal_pinvoke_back(const HighlightingPreset_t635619791_marshaled_pinvoke& marshaled, HighlightingPreset_t635619791& unmarshaled)
{
	unmarshaled.set__name_0(il2cpp_codegen_marshal_string_result(marshaled.____name_0));
	float unmarshaled__fillAlpha_temp_1 = 0.0f;
	unmarshaled__fillAlpha_temp_1 = marshaled.____fillAlpha_1;
	unmarshaled.set__fillAlpha_1(unmarshaled__fillAlpha_temp_1);
	int32_t unmarshaled__downsampleFactor_temp_2 = 0;
	unmarshaled__downsampleFactor_temp_2 = marshaled.____downsampleFactor_2;
	unmarshaled.set__downsampleFactor_2(unmarshaled__downsampleFactor_temp_2);
	int32_t unmarshaled__iterations_temp_3 = 0;
	unmarshaled__iterations_temp_3 = marshaled.____iterations_3;
	unmarshaled.set__iterations_3(unmarshaled__iterations_temp_3);
	float unmarshaled__blurMinSpread_temp_4 = 0.0f;
	unmarshaled__blurMinSpread_temp_4 = marshaled.____blurMinSpread_4;
	unmarshaled.set__blurMinSpread_4(unmarshaled__blurMinSpread_temp_4);
	float unmarshaled__blurSpread_temp_5 = 0.0f;
	unmarshaled__blurSpread_temp_5 = marshaled.____blurSpread_5;
	unmarshaled.set__blurSpread_5(unmarshaled__blurSpread_temp_5);
	float unmarshaled__blurIntensity_temp_6 = 0.0f;
	unmarshaled__blurIntensity_temp_6 = marshaled.____blurIntensity_6;
	unmarshaled.set__blurIntensity_6(unmarshaled__blurIntensity_temp_6);
	int32_t unmarshaled__blurDirections_temp_7 = 0;
	unmarshaled__blurDirections_temp_7 = marshaled.____blurDirections_7;
	unmarshaled.set__blurDirections_7(unmarshaled__blurDirections_temp_7);
}
// Conversion method for clean up from marshalling of: HighlightingSystem.HighlightingPreset
extern "C" void HighlightingPreset_t635619791_marshal_pinvoke_cleanup(HighlightingPreset_t635619791_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.____name_0);
	marshaled.____name_0 = NULL;
}
// Conversion methods for marshalling of: HighlightingSystem.HighlightingPreset
extern "C" void HighlightingPreset_t635619791_marshal_com(const HighlightingPreset_t635619791& unmarshaled, HighlightingPreset_t635619791_marshaled_com& marshaled)
{
	marshaled.____name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get__name_0());
	marshaled.____fillAlpha_1 = unmarshaled.get__fillAlpha_1();
	marshaled.____downsampleFactor_2 = unmarshaled.get__downsampleFactor_2();
	marshaled.____iterations_3 = unmarshaled.get__iterations_3();
	marshaled.____blurMinSpread_4 = unmarshaled.get__blurMinSpread_4();
	marshaled.____blurSpread_5 = unmarshaled.get__blurSpread_5();
	marshaled.____blurIntensity_6 = unmarshaled.get__blurIntensity_6();
	marshaled.____blurDirections_7 = unmarshaled.get__blurDirections_7();
}
extern "C" void HighlightingPreset_t635619791_marshal_com_back(const HighlightingPreset_t635619791_marshaled_com& marshaled, HighlightingPreset_t635619791& unmarshaled)
{
	unmarshaled.set__name_0(il2cpp_codegen_marshal_bstring_result(marshaled.____name_0));
	float unmarshaled__fillAlpha_temp_1 = 0.0f;
	unmarshaled__fillAlpha_temp_1 = marshaled.____fillAlpha_1;
	unmarshaled.set__fillAlpha_1(unmarshaled__fillAlpha_temp_1);
	int32_t unmarshaled__downsampleFactor_temp_2 = 0;
	unmarshaled__downsampleFactor_temp_2 = marshaled.____downsampleFactor_2;
	unmarshaled.set__downsampleFactor_2(unmarshaled__downsampleFactor_temp_2);
	int32_t unmarshaled__iterations_temp_3 = 0;
	unmarshaled__iterations_temp_3 = marshaled.____iterations_3;
	unmarshaled.set__iterations_3(unmarshaled__iterations_temp_3);
	float unmarshaled__blurMinSpread_temp_4 = 0.0f;
	unmarshaled__blurMinSpread_temp_4 = marshaled.____blurMinSpread_4;
	unmarshaled.set__blurMinSpread_4(unmarshaled__blurMinSpread_temp_4);
	float unmarshaled__blurSpread_temp_5 = 0.0f;
	unmarshaled__blurSpread_temp_5 = marshaled.____blurSpread_5;
	unmarshaled.set__blurSpread_5(unmarshaled__blurSpread_temp_5);
	float unmarshaled__blurIntensity_temp_6 = 0.0f;
	unmarshaled__blurIntensity_temp_6 = marshaled.____blurIntensity_6;
	unmarshaled.set__blurIntensity_6(unmarshaled__blurIntensity_temp_6);
	int32_t unmarshaled__blurDirections_temp_7 = 0;
	unmarshaled__blurDirections_temp_7 = marshaled.____blurDirections_7;
	unmarshaled.set__blurDirections_7(unmarshaled__blurDirections_temp_7);
}
// Conversion method for clean up from marshalling of: HighlightingSystem.HighlightingPreset
extern "C" void HighlightingPreset_t635619791_marshal_com_cleanup(HighlightingPreset_t635619791_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.____name_0);
	marshaled.____name_0 = NULL;
}
// System.String HighlightingSystem.HighlightingPreset::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* HighlightingPreset_get_name_m2442625189 (HighlightingPreset_t635619791 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__name_0();
		return L_0;
	}
}
extern "C"  String_t* HighlightingPreset_get_name_m2442625189_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	HighlightingPreset_t635619791 * _thisAdjusted = reinterpret_cast<HighlightingPreset_t635619791 *>(__this + 1);
	return HighlightingPreset_get_name_m2442625189(_thisAdjusted, method);
}
// System.Void HighlightingSystem.HighlightingPreset::set_name(System.String)
extern "C" IL2CPP_METHOD_ATTR void HighlightingPreset_set_name_m3652595480 (HighlightingPreset_t635619791 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set__name_0(L_0);
		return;
	}
}
extern "C"  void HighlightingPreset_set_name_m3652595480_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	HighlightingPreset_t635619791 * _thisAdjusted = reinterpret_cast<HighlightingPreset_t635619791 *>(__this + 1);
	HighlightingPreset_set_name_m3652595480(_thisAdjusted, ___value0, method);
}
// System.Single HighlightingSystem.HighlightingPreset::get_fillAlpha()
extern "C" IL2CPP_METHOD_ATTR float HighlightingPreset_get_fillAlpha_m4098226882 (HighlightingPreset_t635619791 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__fillAlpha_1();
		return L_0;
	}
}
extern "C"  float HighlightingPreset_get_fillAlpha_m4098226882_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	HighlightingPreset_t635619791 * _thisAdjusted = reinterpret_cast<HighlightingPreset_t635619791 *>(__this + 1);
	return HighlightingPreset_get_fillAlpha_m4098226882(_thisAdjusted, method);
}
// System.Void HighlightingSystem.HighlightingPreset::set_fillAlpha(System.Single)
extern "C" IL2CPP_METHOD_ATTR void HighlightingPreset_set_fillAlpha_m2992891845 (HighlightingPreset_t635619791 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set__fillAlpha_1(L_0);
		return;
	}
}
extern "C"  void HighlightingPreset_set_fillAlpha_m2992891845_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	HighlightingPreset_t635619791 * _thisAdjusted = reinterpret_cast<HighlightingPreset_t635619791 *>(__this + 1);
	HighlightingPreset_set_fillAlpha_m2992891845(_thisAdjusted, ___value0, method);
}
// System.Int32 HighlightingSystem.HighlightingPreset::get_downsampleFactor()
extern "C" IL2CPP_METHOD_ATTR int32_t HighlightingPreset_get_downsampleFactor_m584427446 (HighlightingPreset_t635619791 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__downsampleFactor_2();
		return L_0;
	}
}
extern "C"  int32_t HighlightingPreset_get_downsampleFactor_m584427446_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	HighlightingPreset_t635619791 * _thisAdjusted = reinterpret_cast<HighlightingPreset_t635619791 *>(__this + 1);
	return HighlightingPreset_get_downsampleFactor_m584427446(_thisAdjusted, method);
}
// System.Void HighlightingSystem.HighlightingPreset::set_downsampleFactor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void HighlightingPreset_set_downsampleFactor_m2267913048 (HighlightingPreset_t635619791 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set__downsampleFactor_2(L_0);
		return;
	}
}
extern "C"  void HighlightingPreset_set_downsampleFactor_m2267913048_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	HighlightingPreset_t635619791 * _thisAdjusted = reinterpret_cast<HighlightingPreset_t635619791 *>(__this + 1);
	HighlightingPreset_set_downsampleFactor_m2267913048(_thisAdjusted, ___value0, method);
}
// System.Int32 HighlightingSystem.HighlightingPreset::get_iterations()
extern "C" IL2CPP_METHOD_ATTR int32_t HighlightingPreset_get_iterations_m916685867 (HighlightingPreset_t635619791 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__iterations_3();
		return L_0;
	}
}
extern "C"  int32_t HighlightingPreset_get_iterations_m916685867_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	HighlightingPreset_t635619791 * _thisAdjusted = reinterpret_cast<HighlightingPreset_t635619791 *>(__this + 1);
	return HighlightingPreset_get_iterations_m916685867(_thisAdjusted, method);
}
// System.Void HighlightingSystem.HighlightingPreset::set_iterations(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void HighlightingPreset_set_iterations_m2768683975 (HighlightingPreset_t635619791 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set__iterations_3(L_0);
		return;
	}
}
extern "C"  void HighlightingPreset_set_iterations_m2768683975_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	HighlightingPreset_t635619791 * _thisAdjusted = reinterpret_cast<HighlightingPreset_t635619791 *>(__this + 1);
	HighlightingPreset_set_iterations_m2768683975(_thisAdjusted, ___value0, method);
}
// System.Single HighlightingSystem.HighlightingPreset::get_blurMinSpread()
extern "C" IL2CPP_METHOD_ATTR float HighlightingPreset_get_blurMinSpread_m3148680741 (HighlightingPreset_t635619791 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__blurMinSpread_4();
		return L_0;
	}
}
extern "C"  float HighlightingPreset_get_blurMinSpread_m3148680741_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	HighlightingPreset_t635619791 * _thisAdjusted = reinterpret_cast<HighlightingPreset_t635619791 *>(__this + 1);
	return HighlightingPreset_get_blurMinSpread_m3148680741(_thisAdjusted, method);
}
// System.Void HighlightingSystem.HighlightingPreset::set_blurMinSpread(System.Single)
extern "C" IL2CPP_METHOD_ATTR void HighlightingPreset_set_blurMinSpread_m2462936007 (HighlightingPreset_t635619791 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set__blurMinSpread_4(L_0);
		return;
	}
}
extern "C"  void HighlightingPreset_set_blurMinSpread_m2462936007_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	HighlightingPreset_t635619791 * _thisAdjusted = reinterpret_cast<HighlightingPreset_t635619791 *>(__this + 1);
	HighlightingPreset_set_blurMinSpread_m2462936007(_thisAdjusted, ___value0, method);
}
// System.Single HighlightingSystem.HighlightingPreset::get_blurSpread()
extern "C" IL2CPP_METHOD_ATTR float HighlightingPreset_get_blurSpread_m98452518 (HighlightingPreset_t635619791 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__blurSpread_5();
		return L_0;
	}
}
extern "C"  float HighlightingPreset_get_blurSpread_m98452518_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	HighlightingPreset_t635619791 * _thisAdjusted = reinterpret_cast<HighlightingPreset_t635619791 *>(__this + 1);
	return HighlightingPreset_get_blurSpread_m98452518(_thisAdjusted, method);
}
// System.Void HighlightingSystem.HighlightingPreset::set_blurSpread(System.Single)
extern "C" IL2CPP_METHOD_ATTR void HighlightingPreset_set_blurSpread_m4014750025 (HighlightingPreset_t635619791 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set__blurSpread_5(L_0);
		return;
	}
}
extern "C"  void HighlightingPreset_set_blurSpread_m4014750025_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	HighlightingPreset_t635619791 * _thisAdjusted = reinterpret_cast<HighlightingPreset_t635619791 *>(__this + 1);
	HighlightingPreset_set_blurSpread_m4014750025(_thisAdjusted, ___value0, method);
}
// System.Single HighlightingSystem.HighlightingPreset::get_blurIntensity()
extern "C" IL2CPP_METHOD_ATTR float HighlightingPreset_get_blurIntensity_m1570413397 (HighlightingPreset_t635619791 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__blurIntensity_6();
		return L_0;
	}
}
extern "C"  float HighlightingPreset_get_blurIntensity_m1570413397_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	HighlightingPreset_t635619791 * _thisAdjusted = reinterpret_cast<HighlightingPreset_t635619791 *>(__this + 1);
	return HighlightingPreset_get_blurIntensity_m1570413397(_thisAdjusted, method);
}
// System.Void HighlightingSystem.HighlightingPreset::set_blurIntensity(System.Single)
extern "C" IL2CPP_METHOD_ATTR void HighlightingPreset_set_blurIntensity_m737297107 (HighlightingPreset_t635619791 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set__blurIntensity_6(L_0);
		return;
	}
}
extern "C"  void HighlightingPreset_set_blurIntensity_m737297107_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	HighlightingPreset_t635619791 * _thisAdjusted = reinterpret_cast<HighlightingPreset_t635619791 *>(__this + 1);
	HighlightingPreset_set_blurIntensity_m737297107(_thisAdjusted, ___value0, method);
}
// HighlightingSystem.BlurDirections HighlightingSystem.HighlightingPreset::get_blurDirections()
extern "C" IL2CPP_METHOD_ATTR int32_t HighlightingPreset_get_blurDirections_m2320407461 (HighlightingPreset_t635619791 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__blurDirections_7();
		return L_0;
	}
}
extern "C"  int32_t HighlightingPreset_get_blurDirections_m2320407461_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	HighlightingPreset_t635619791 * _thisAdjusted = reinterpret_cast<HighlightingPreset_t635619791 *>(__this + 1);
	return HighlightingPreset_get_blurDirections_m2320407461(_thisAdjusted, method);
}
// System.Void HighlightingSystem.HighlightingPreset::set_blurDirections(HighlightingSystem.BlurDirections)
extern "C" IL2CPP_METHOD_ATTR void HighlightingPreset_set_blurDirections_m1483946675 (HighlightingPreset_t635619791 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set__blurDirections_7(L_0);
		return;
	}
}
extern "C"  void HighlightingPreset_set_blurDirections_m1483946675_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	HighlightingPreset_t635619791 * _thisAdjusted = reinterpret_cast<HighlightingPreset_t635619791 *>(__this + 1);
	HighlightingPreset_set_blurDirections_m1483946675(_thisAdjusted, ___value0, method);
}
// System.Boolean HighlightingSystem.HighlightingPreset::System.IEquatable<HighlightingSystem.HighlightingPreset>.Equals(HighlightingSystem.HighlightingPreset)
extern "C" IL2CPP_METHOD_ATTR bool HighlightingPreset_System_IEquatableU3CHighlightingSystem_HighlightingPresetU3E_Equals_m9867215 (HighlightingPreset_t635619791 * __this, HighlightingPreset_t635619791  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlightingPreset_System_IEquatableU3CHighlightingSystem_HighlightingPresetU3E_Equals_m9867215_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B9_0 = 0;
	{
		String_t* L_0 = __this->get__name_0();
		String_t* L_1 = (&___other0)->get__name_0();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m920492651(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0094;
		}
	}
	{
		float L_3 = __this->get__fillAlpha_1();
		float L_4 = (&___other0)->get__fillAlpha_1();
		if ((!(((float)L_3) == ((float)L_4))))
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_5 = __this->get__downsampleFactor_2();
		int32_t L_6 = (&___other0)->get__downsampleFactor_2();
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_7 = __this->get__iterations_3();
		int32_t L_8 = (&___other0)->get__iterations_3();
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0094;
		}
	}
	{
		float L_9 = __this->get__blurMinSpread_4();
		float L_10 = (&___other0)->get__blurMinSpread_4();
		if ((!(((float)L_9) == ((float)L_10))))
		{
			goto IL_0094;
		}
	}
	{
		float L_11 = __this->get__blurSpread_5();
		float L_12 = (&___other0)->get__blurSpread_5();
		if ((!(((float)L_11) == ((float)L_12))))
		{
			goto IL_0094;
		}
	}
	{
		float L_13 = __this->get__blurIntensity_6();
		float L_14 = (&___other0)->get__blurIntensity_6();
		if ((!(((float)L_13) == ((float)L_14))))
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_15 = __this->get__blurDirections_7();
		int32_t L_16 = (&___other0)->get__blurDirections_7();
		G_B9_0 = ((((int32_t)L_15) == ((int32_t)L_16))? 1 : 0);
		goto IL_0095;
	}

IL_0094:
	{
		G_B9_0 = 0;
	}

IL_0095:
	{
		return (bool)G_B9_0;
	}
}
extern "C"  bool HighlightingPreset_System_IEquatableU3CHighlightingSystem_HighlightingPresetU3E_Equals_m9867215_AdjustorThunk (RuntimeObject * __this, HighlightingPreset_t635619791  ___other0, const RuntimeMethod* method)
{
	HighlightingPreset_t635619791 * _thisAdjusted = reinterpret_cast<HighlightingPreset_t635619791 *>(__this + 1);
	return HighlightingPreset_System_IEquatableU3CHighlightingSystem_HighlightingPresetU3E_Equals_m9867215(_thisAdjusted, ___other0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HighlightingSystem.HighlightingRenderer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HighlightingRenderer__ctor_m332788478 (HighlightingRenderer_t1923179915 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlightingRenderer__ctor_m332788478_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HighlightingRenderer_t1923179915_il2cpp_TypeInfo_var);
		List_1_t2107694533 * L_0 = ((HighlightingRenderer_t1923179915_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingRenderer_t1923179915_il2cpp_TypeInfo_var))->get_defaultPresets_39();
		List_1_t2107694533 * L_1 = (List_1_t2107694533 *)il2cpp_codegen_object_new(List_1_t2107694533_il2cpp_TypeInfo_var);
		List_1__ctor_m1684465584(L_1, L_0, /*hidden argument*/List_1__ctor_m1684465584_RuntimeMethod_var);
		__this->set__presets_40(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(HighlightingBase_t582374880_il2cpp_TypeInfo_var);
		HighlightingBase__ctor_m505259048(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<HighlightingSystem.HighlightingPreset> HighlightingSystem.HighlightingRenderer::get_presets()
extern "C" IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t1848196078 * HighlightingRenderer_get_presets_m4161654280 (HighlightingRenderer_t1923179915 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlightingRenderer_get_presets_m4161654280_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReadOnlyCollection_1_t1848196078 * L_0 = __this->get__presetsReadonly_41();
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		List_1_t2107694533 * L_1 = __this->get__presets_40();
		NullCheck(L_1);
		ReadOnlyCollection_1_t1848196078 * L_2 = List_1_AsReadOnly_m2209084598(L_1, /*hidden argument*/List_1_AsReadOnly_m2209084598_RuntimeMethod_var);
		__this->set__presetsReadonly_41(L_2);
	}

IL_001c:
	{
		ReadOnlyCollection_1_t1848196078 * L_3 = __this->get__presetsReadonly_41();
		return L_3;
	}
}
// System.Boolean HighlightingSystem.HighlightingRenderer::GetPreset(System.String,HighlightingSystem.HighlightingPreset&)
extern "C" IL2CPP_METHOD_ATTR bool HighlightingRenderer_GetPreset_m608317482 (HighlightingRenderer_t1923179915 * __this, String_t* ___name0, HighlightingPreset_t635619791 * ___preset1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlightingRenderer_GetPreset_m608317482_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HighlightingPreset_t635619791  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0007:
	{
		List_1_t2107694533 * L_0 = __this->get__presets_40();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		HighlightingPreset_t635619791  L_2 = List_1_get_Item_m3008735210(L_0, L_1, /*hidden argument*/List_1_get_Item_m3008735210_RuntimeMethod_var);
		V_1 = L_2;
		String_t* L_3 = HighlightingPreset_get_name_m2442625189((HighlightingPreset_t635619791 *)(&V_1), /*hidden argument*/NULL);
		String_t* L_4 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m920492651(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		HighlightingPreset_t635619791 * L_6 = ___preset1;
		HighlightingPreset_t635619791  L_7 = V_1;
		*(HighlightingPreset_t635619791 *)L_6 = L_7;
		return (bool)1;
	}

IL_002f:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0033:
	{
		int32_t L_9 = V_0;
		List_1_t2107694533 * L_10 = __this->get__presets_40();
		NullCheck(L_10);
		int32_t L_11 = List_1_get_Count_m3944991828(L_10, /*hidden argument*/List_1_get_Count_m3944991828_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0007;
		}
	}
	{
		HighlightingPreset_t635619791 * L_12 = ___preset1;
		il2cpp_codegen_initobj(L_12, sizeof(HighlightingPreset_t635619791 ));
		return (bool)0;
	}
}
// System.Boolean HighlightingSystem.HighlightingRenderer::AddPreset(HighlightingSystem.HighlightingPreset,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool HighlightingRenderer_AddPreset_m3332834484 (HighlightingRenderer_t1923179915 * __this, HighlightingPreset_t635619791  ___preset0, bool ___overwrite1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlightingRenderer_AddPreset_m3332834484_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HighlightingPreset_t635619791  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		V_0 = 0;
		goto IL_0047;
	}

IL_0007:
	{
		List_1_t2107694533 * L_0 = __this->get__presets_40();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		HighlightingPreset_t635619791  L_2 = List_1_get_Item_m3008735210(L_0, L_1, /*hidden argument*/List_1_get_Item_m3008735210_RuntimeMethod_var);
		V_1 = L_2;
		String_t* L_3 = HighlightingPreset_get_name_m2442625189((HighlightingPreset_t635619791 *)(&V_1), /*hidden argument*/NULL);
		String_t* L_4 = HighlightingPreset_get_name_m2442625189((HighlightingPreset_t635619791 *)(&___preset0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m920492651(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		bool L_6 = ___overwrite1;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		List_1_t2107694533 * L_7 = __this->get__presets_40();
		int32_t L_8 = V_0;
		HighlightingPreset_t635619791  L_9 = ___preset0;
		NullCheck(L_7);
		List_1_set_Item_m3277764254(L_7, L_8, L_9, /*hidden argument*/List_1_set_Item_m3277764254_RuntimeMethod_var);
		return (bool)1;
	}

IL_0041:
	{
		return (bool)0;
	}

IL_0043:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_11 = V_0;
		List_1_t2107694533 * L_12 = __this->get__presets_40();
		NullCheck(L_12);
		int32_t L_13 = List_1_get_Count_m3944991828(L_12, /*hidden argument*/List_1_get_Count_m3944991828_RuntimeMethod_var);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0007;
		}
	}
	{
		List_1_t2107694533 * L_14 = __this->get__presets_40();
		HighlightingPreset_t635619791  L_15 = ___preset0;
		NullCheck(L_14);
		List_1_Add_m3778980941(L_14, L_15, /*hidden argument*/List_1_Add_m3778980941_RuntimeMethod_var);
		return (bool)1;
	}
}
// System.Boolean HighlightingSystem.HighlightingRenderer::RemovePreset(System.String)
extern "C" IL2CPP_METHOD_ATTR bool HighlightingRenderer_RemovePreset_m3776228819 (HighlightingRenderer_t1923179915 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlightingRenderer_RemovePreset_m3776228819_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HighlightingPreset_t635619791  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		V_0 = 0;
		goto IL_0038;
	}

IL_0007:
	{
		List_1_t2107694533 * L_0 = __this->get__presets_40();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		HighlightingPreset_t635619791  L_2 = List_1_get_Item_m3008735210(L_0, L_1, /*hidden argument*/List_1_get_Item_m3008735210_RuntimeMethod_var);
		V_1 = L_2;
		String_t* L_3 = HighlightingPreset_get_name_m2442625189((HighlightingPreset_t635619791 *)(&V_1), /*hidden argument*/NULL);
		String_t* L_4 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m920492651(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		List_1_t2107694533 * L_6 = __this->get__presets_40();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		List_1_RemoveAt_m3885651965(L_6, L_7, /*hidden argument*/List_1_RemoveAt_m3885651965_RuntimeMethod_var);
		return (bool)1;
	}

IL_0034:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0038:
	{
		int32_t L_9 = V_0;
		List_1_t2107694533 * L_10 = __this->get__presets_40();
		NullCheck(L_10);
		int32_t L_11 = List_1_get_Count_m3944991828(L_10, /*hidden argument*/List_1_get_Count_m3944991828_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0007;
		}
	}
	{
		return (bool)0;
	}
}
// System.Boolean HighlightingSystem.HighlightingRenderer::LoadPreset(System.String)
extern "C" IL2CPP_METHOD_ATTR bool HighlightingRenderer_LoadPreset_m1653773725 (HighlightingRenderer_t1923179915 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	HighlightingPreset_t635619791  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		String_t* L_0 = ___name0;
		bool L_1 = HighlightingRenderer_GetPreset_m608317482(__this, L_0, (HighlightingPreset_t635619791 *)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		HighlightingPreset_t635619791  L_2 = V_0;
		HighlightingRenderer_ApplyPreset_m1157430966(__this, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Void HighlightingSystem.HighlightingRenderer::ApplyPreset(HighlightingSystem.HighlightingPreset)
extern "C" IL2CPP_METHOD_ATTR void HighlightingRenderer_ApplyPreset_m1157430966 (HighlightingRenderer_t1923179915 * __this, HighlightingPreset_t635619791  ___preset0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = HighlightingPreset_get_downsampleFactor_m584427446((HighlightingPreset_t635619791 *)(&___preset0), /*hidden argument*/NULL);
		HighlightingBase_set_downsampleFactor_m2422254815(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = HighlightingPreset_get_iterations_m916685867((HighlightingPreset_t635619791 *)(&___preset0), /*hidden argument*/NULL);
		HighlightingBase_set_iterations_m2930427573(__this, L_1, /*hidden argument*/NULL);
		float L_2 = HighlightingPreset_get_blurMinSpread_m3148680741((HighlightingPreset_t635619791 *)(&___preset0), /*hidden argument*/NULL);
		HighlightingBase_set_blurMinSpread_m2098128336(__this, L_2, /*hidden argument*/NULL);
		float L_3 = HighlightingPreset_get_blurSpread_m98452518((HighlightingPreset_t635619791 *)(&___preset0), /*hidden argument*/NULL);
		HighlightingBase_set_blurSpread_m3107107880(__this, L_3, /*hidden argument*/NULL);
		float L_4 = HighlightingPreset_get_blurIntensity_m1570413397((HighlightingPreset_t635619791 *)(&___preset0), /*hidden argument*/NULL);
		HighlightingBase_set_blurIntensity_m709625294(__this, L_4, /*hidden argument*/NULL);
		int32_t L_5 = HighlightingPreset_get_blurDirections_m2320407461((HighlightingPreset_t635619791 *)(&___preset0), /*hidden argument*/NULL);
		HighlightingBase_set_blurDirections_m2932430632(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.HighlightingRenderer::ClearPresets()
extern "C" IL2CPP_METHOD_ATTR void HighlightingRenderer_ClearPresets_m682656353 (HighlightingRenderer_t1923179915 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlightingRenderer_ClearPresets_m682656353_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2107694533 * L_0 = __this->get__presets_40();
		NullCheck(L_0);
		List_1_Clear_m3214370389(L_0, /*hidden argument*/List_1_Clear_m3214370389_RuntimeMethod_var);
		return;
	}
}
// System.Void HighlightingSystem.HighlightingRenderer::.cctor()
extern "C" IL2CPP_METHOD_ATTR void HighlightingRenderer__cctor_m1369683028 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlightingRenderer__cctor_m1369683028_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t2107694533 * V_0 = NULL;
	HighlightingPreset_t635619791  V_1;
	memset(&V_1, 0, sizeof(V_1));
	HighlightingPreset_t635619791  V_2;
	memset(&V_2, 0, sizeof(V_2));
	HighlightingPreset_t635619791  V_3;
	memset(&V_3, 0, sizeof(V_3));
	HighlightingPreset_t635619791  V_4;
	memset(&V_4, 0, sizeof(V_4));
	HighlightingPreset_t635619791  V_5;
	memset(&V_5, 0, sizeof(V_5));
	HighlightingPreset_t635619791  V_6;
	memset(&V_6, 0, sizeof(V_6));
	HighlightingPreset_t635619791  V_7;
	memset(&V_7, 0, sizeof(V_7));
	{
		List_1_t2107694533 * L_0 = (List_1_t2107694533 *)il2cpp_codegen_object_new(List_1_t2107694533_il2cpp_TypeInfo_var);
		List_1__ctor_m2449748141(L_0, /*hidden argument*/List_1__ctor_m2449748141_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t2107694533 * L_1 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(HighlightingPreset_t635619791 ));
		HighlightingPreset_set_name_m3652595480((HighlightingPreset_t635619791 *)(&V_1), _stringLiteral1948333211, /*hidden argument*/NULL);
		HighlightingPreset_set_fillAlpha_m2992891845((HighlightingPreset_t635619791 *)(&V_1), (0.0f), /*hidden argument*/NULL);
		HighlightingPreset_set_downsampleFactor_m2267913048((HighlightingPreset_t635619791 *)(&V_1), 4, /*hidden argument*/NULL);
		HighlightingPreset_set_iterations_m2768683975((HighlightingPreset_t635619791 *)(&V_1), 2, /*hidden argument*/NULL);
		HighlightingPreset_set_blurMinSpread_m2462936007((HighlightingPreset_t635619791 *)(&V_1), (0.65f), /*hidden argument*/NULL);
		HighlightingPreset_set_blurSpread_m4014750025((HighlightingPreset_t635619791 *)(&V_1), (0.25f), /*hidden argument*/NULL);
		HighlightingPreset_set_blurIntensity_m737297107((HighlightingPreset_t635619791 *)(&V_1), (0.3f), /*hidden argument*/NULL);
		HighlightingPreset_set_blurDirections_m1483946675((HighlightingPreset_t635619791 *)(&V_1), 0, /*hidden argument*/NULL);
		HighlightingPreset_t635619791  L_2 = V_1;
		NullCheck(L_1);
		List_1_Add_m3778980941(L_1, L_2, /*hidden argument*/List_1_Add_m3778980941_RuntimeMethod_var);
		List_1_t2107694533 * L_3 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(HighlightingPreset_t635619791 ));
		HighlightingPreset_set_name_m3652595480((HighlightingPreset_t635619791 *)(&V_2), _stringLiteral1985563871, /*hidden argument*/NULL);
		HighlightingPreset_set_fillAlpha_m2992891845((HighlightingPreset_t635619791 *)(&V_2), (0.0f), /*hidden argument*/NULL);
		HighlightingPreset_set_downsampleFactor_m2267913048((HighlightingPreset_t635619791 *)(&V_2), 4, /*hidden argument*/NULL);
		HighlightingPreset_set_iterations_m2768683975((HighlightingPreset_t635619791 *)(&V_2), 4, /*hidden argument*/NULL);
		HighlightingPreset_set_blurMinSpread_m2462936007((HighlightingPreset_t635619791 *)(&V_2), (0.65f), /*hidden argument*/NULL);
		HighlightingPreset_set_blurSpread_m4014750025((HighlightingPreset_t635619791 *)(&V_2), (0.25f), /*hidden argument*/NULL);
		HighlightingPreset_set_blurIntensity_m737297107((HighlightingPreset_t635619791 *)(&V_2), (0.3f), /*hidden argument*/NULL);
		HighlightingPreset_set_blurDirections_m1483946675((HighlightingPreset_t635619791 *)(&V_2), 0, /*hidden argument*/NULL);
		HighlightingPreset_t635619791  L_4 = V_2;
		NullCheck(L_3);
		List_1_Add_m3778980941(L_3, L_4, /*hidden argument*/List_1_Add_m3778980941_RuntimeMethod_var);
		List_1_t2107694533 * L_5 = V_0;
		il2cpp_codegen_initobj((&V_3), sizeof(HighlightingPreset_t635619791 ));
		HighlightingPreset_set_name_m3652595480((HighlightingPreset_t635619791 *)(&V_3), _stringLiteral89118733, /*hidden argument*/NULL);
		HighlightingPreset_set_fillAlpha_m2992891845((HighlightingPreset_t635619791 *)(&V_3), (0.0f), /*hidden argument*/NULL);
		HighlightingPreset_set_downsampleFactor_m2267913048((HighlightingPreset_t635619791 *)(&V_3), 4, /*hidden argument*/NULL);
		HighlightingPreset_set_iterations_m2768683975((HighlightingPreset_t635619791 *)(&V_3), 2, /*hidden argument*/NULL);
		HighlightingPreset_set_blurMinSpread_m2462936007((HighlightingPreset_t635619791 *)(&V_3), (0.5f), /*hidden argument*/NULL);
		HighlightingPreset_set_blurSpread_m4014750025((HighlightingPreset_t635619791 *)(&V_3), (0.15f), /*hidden argument*/NULL);
		HighlightingPreset_set_blurIntensity_m737297107((HighlightingPreset_t635619791 *)(&V_3), (0.325f), /*hidden argument*/NULL);
		HighlightingPreset_set_blurDirections_m1483946675((HighlightingPreset_t635619791 *)(&V_3), 0, /*hidden argument*/NULL);
		HighlightingPreset_t635619791  L_6 = V_3;
		NullCheck(L_5);
		List_1_Add_m3778980941(L_5, L_6, /*hidden argument*/List_1_Add_m3778980941_RuntimeMethod_var);
		List_1_t2107694533 * L_7 = V_0;
		il2cpp_codegen_initobj((&V_4), sizeof(HighlightingPreset_t635619791 ));
		HighlightingPreset_set_name_m3652595480((HighlightingPreset_t635619791 *)(&V_4), _stringLiteral3556802456, /*hidden argument*/NULL);
		HighlightingPreset_set_fillAlpha_m2992891845((HighlightingPreset_t635619791 *)(&V_4), (0.0f), /*hidden argument*/NULL);
		HighlightingPreset_set_downsampleFactor_m2267913048((HighlightingPreset_t635619791 *)(&V_4), 4, /*hidden argument*/NULL);
		HighlightingPreset_set_iterations_m2768683975((HighlightingPreset_t635619791 *)(&V_4), 1, /*hidden argument*/NULL);
		HighlightingPreset_set_blurMinSpread_m2462936007((HighlightingPreset_t635619791 *)(&V_4), (0.75f), /*hidden argument*/NULL);
		HighlightingPreset_set_blurSpread_m4014750025((HighlightingPreset_t635619791 *)(&V_4), (0.0f), /*hidden argument*/NULL);
		HighlightingPreset_set_blurIntensity_m737297107((HighlightingPreset_t635619791 *)(&V_4), (0.35f), /*hidden argument*/NULL);
		HighlightingPreset_set_blurDirections_m1483946675((HighlightingPreset_t635619791 *)(&V_4), 0, /*hidden argument*/NULL);
		HighlightingPreset_t635619791  L_8 = V_4;
		NullCheck(L_7);
		List_1_Add_m3778980941(L_7, L_8, /*hidden argument*/List_1_Add_m3778980941_RuntimeMethod_var);
		List_1_t2107694533 * L_9 = V_0;
		il2cpp_codegen_initobj((&V_5), sizeof(HighlightingPreset_t635619791 ));
		HighlightingPreset_set_name_m3652595480((HighlightingPreset_t635619791 *)(&V_5), _stringLiteral168268734, /*hidden argument*/NULL);
		HighlightingPreset_set_fillAlpha_m2992891845((HighlightingPreset_t635619791 *)(&V_5), (0.0f), /*hidden argument*/NULL);
		HighlightingPreset_set_downsampleFactor_m2267913048((HighlightingPreset_t635619791 *)(&V_5), 2, /*hidden argument*/NULL);
		HighlightingPreset_set_iterations_m2768683975((HighlightingPreset_t635619791 *)(&V_5), 3, /*hidden argument*/NULL);
		HighlightingPreset_set_blurMinSpread_m2462936007((HighlightingPreset_t635619791 *)(&V_5), (0.5f), /*hidden argument*/NULL);
		HighlightingPreset_set_blurSpread_m4014750025((HighlightingPreset_t635619791 *)(&V_5), (0.5f), /*hidden argument*/NULL);
		HighlightingPreset_set_blurIntensity_m737297107((HighlightingPreset_t635619791 *)(&V_5), (0.28f), /*hidden argument*/NULL);
		HighlightingPreset_set_blurDirections_m1483946675((HighlightingPreset_t635619791 *)(&V_5), 0, /*hidden argument*/NULL);
		HighlightingPreset_t635619791  L_10 = V_5;
		NullCheck(L_9);
		List_1_Add_m3778980941(L_9, L_10, /*hidden argument*/List_1_Add_m3778980941_RuntimeMethod_var);
		List_1_t2107694533 * L_11 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(HighlightingPreset_t635619791 ));
		HighlightingPreset_set_name_m3652595480((HighlightingPreset_t635619791 *)(&V_6), _stringLiteral1324381939, /*hidden argument*/NULL);
		HighlightingPreset_set_fillAlpha_m2992891845((HighlightingPreset_t635619791 *)(&V_6), (0.0f), /*hidden argument*/NULL);
		HighlightingPreset_set_downsampleFactor_m2267913048((HighlightingPreset_t635619791 *)(&V_6), 1, /*hidden argument*/NULL);
		HighlightingPreset_set_iterations_m2768683975((HighlightingPreset_t635619791 *)(&V_6), 1, /*hidden argument*/NULL);
		HighlightingPreset_set_blurMinSpread_m2462936007((HighlightingPreset_t635619791 *)(&V_6), (1.0f), /*hidden argument*/NULL);
		HighlightingPreset_set_blurSpread_m4014750025((HighlightingPreset_t635619791 *)(&V_6), (0.0f), /*hidden argument*/NULL);
		HighlightingPreset_set_blurIntensity_m737297107((HighlightingPreset_t635619791 *)(&V_6), (1.0f), /*hidden argument*/NULL);
		HighlightingPreset_set_blurDirections_m1483946675((HighlightingPreset_t635619791 *)(&V_6), 2, /*hidden argument*/NULL);
		HighlightingPreset_t635619791  L_12 = V_6;
		NullCheck(L_11);
		List_1_Add_m3778980941(L_11, L_12, /*hidden argument*/List_1_Add_m3778980941_RuntimeMethod_var);
		List_1_t2107694533 * L_13 = V_0;
		il2cpp_codegen_initobj((&V_7), sizeof(HighlightingPreset_t635619791 ));
		HighlightingPreset_set_name_m3652595480((HighlightingPreset_t635619791 *)(&V_7), _stringLiteral1727666466, /*hidden argument*/NULL);
		HighlightingPreset_set_fillAlpha_m2992891845((HighlightingPreset_t635619791 *)(&V_7), (0.0f), /*hidden argument*/NULL);
		HighlightingPreset_set_downsampleFactor_m2267913048((HighlightingPreset_t635619791 *)(&V_7), 1, /*hidden argument*/NULL);
		HighlightingPreset_set_iterations_m2768683975((HighlightingPreset_t635619791 *)(&V_7), 2, /*hidden argument*/NULL);
		HighlightingPreset_set_blurMinSpread_m2462936007((HighlightingPreset_t635619791 *)(&V_7), (1.0f), /*hidden argument*/NULL);
		HighlightingPreset_set_blurSpread_m4014750025((HighlightingPreset_t635619791 *)(&V_7), (0.0f), /*hidden argument*/NULL);
		HighlightingPreset_set_blurIntensity_m737297107((HighlightingPreset_t635619791 *)(&V_7), (1.0f), /*hidden argument*/NULL);
		HighlightingPreset_set_blurDirections_m1483946675((HighlightingPreset_t635619791 *)(&V_7), 2, /*hidden argument*/NULL);
		HighlightingPreset_t635619791  L_14 = V_7;
		NullCheck(L_13);
		List_1_Add_m3778980941(L_13, L_14, /*hidden argument*/List_1_Add_m3778980941_RuntimeMethod_var);
		List_1_t2107694533 * L_15 = V_0;
		((HighlightingRenderer_t1923179915_StaticFields*)il2cpp_codegen_static_fields_for(HighlightingRenderer_t1923179915_il2cpp_TypeInfo_var))->set_defaultPresets_39(L_15);
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
// System.Void HighlightingSystem.MaterialExtensions::SetKeyword(UnityEngine.Material,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MaterialExtensions_SetKeyword_m4077661988 (RuntimeObject * __this /* static, unused */, Material_t340375123 * ___material0, String_t* ___keyword1, bool ___state2, const RuntimeMethod* method)
{
	{
		bool L_0 = ___state2;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		Material_t340375123 * L_1 = ___material0;
		String_t* L_2 = ___keyword1;
		NullCheck(L_1);
		Material_EnableKeyword_m329692301(L_1, L_2, /*hidden argument*/NULL);
		goto IL_0019;
	}

IL_0012:
	{
		Material_t340375123 * L_3 = ___material0;
		String_t* L_4 = ___keyword1;
		NullCheck(L_3);
		Material_DisableKeyword_m1245091008(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0019:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HighlightingSystem.ShaderPropertyID::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ShaderPropertyID__ctor_m2381806346 (ShaderPropertyID_t567755140 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightingSystem.ShaderPropertyID::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ShaderPropertyID__cctor_m4283463106 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShaderPropertyID__cctor_m4283463106_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3184621405, /*hidden argument*/NULL);
		((ShaderPropertyID_t567755140_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var))->set__MainTex_0(L_0);
		int32_t L_1 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3327625703, /*hidden argument*/NULL);
		((ShaderPropertyID_t567755140_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var))->set__Cutoff_1(L_1);
		int32_t L_2 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1277446993, /*hidden argument*/NULL);
		((ShaderPropertyID_t567755140_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var))->set__HighlightingIntensity_2(L_2);
		int32_t L_3 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral920004620, /*hidden argument*/NULL);
		((ShaderPropertyID_t567755140_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var))->set__HighlightingCull_3(L_3);
		int32_t L_4 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1009001145, /*hidden argument*/NULL);
		((ShaderPropertyID_t567755140_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var))->set__HighlightingColor_4(L_4);
		int32_t L_5 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral869484318, /*hidden argument*/NULL);
		((ShaderPropertyID_t567755140_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var))->set__HighlightingBlurOffset_5(L_5);
		int32_t L_6 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2645588130, /*hidden argument*/NULL);
		((ShaderPropertyID_t567755140_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var))->set__HighlightingFillAlpha_6(L_6);
		int32_t L_7 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3796104459, /*hidden argument*/NULL);
		((ShaderPropertyID_t567755140_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var))->set__HighlightingBuffer_7(L_7);
		int32_t L_8 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2231944451, /*hidden argument*/NULL);
		((ShaderPropertyID_t567755140_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var))->set__HighlightingBlur1_8(L_8);
		int32_t L_9 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2232141059, /*hidden argument*/NULL);
		((ShaderPropertyID_t567755140_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyID_t567755140_il2cpp_TypeInfo_var))->set__HighlightingBlur2_9(L_9);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
