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
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Attribute
struct Attribute_t861562559;
// System.Byte
struct Byte_t1134296376;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkConnection/PacketStat>
struct Dictionary_2_t1333685985;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkMessageDelegate>
struct Dictionary_2_t2550447661;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Networking.NetworkBehaviour/Invoker>
struct Dictionary_2_t100189446;
// System.Collections.Generic.HashSet`1/Link<UnityEngine.Networking.NetworkInstanceId>[]
struct LinkU5BU5D_t4014378265;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t1515895227;
// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkIdentity>
struct HashSet_1_t1864468531;
// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkInstanceId>
struct HashSet_1_t3646266945;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Networking.NetworkInstanceId>
struct IEqualityComparer_1_t2893682193;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t1569362707;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t2869341516;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t4032136720;
// System.Collections.Generic.List`1<UnityEngine.Networking.LocalClient/InternalMsg>
struct List_1_t3843830149;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkClient>
struct List_1_t935303414;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection>
struct List_1_t4177294833;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkSystem.PeerInfoPlayer>
struct List_1_t2079534799;
// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerController>
struct List_1_t1968562558;
// System.Collections.Generic.Stack`1<UnityEngine.Networking.LocalClient/InternalMsg>
struct Stack_1_t3215144862;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Double
struct Double_t594665363;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t1578797820;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.Net.EndPoint
struct EndPoint_t982345378;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.String
struct String_t;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Text.EncodingInfo[]
struct EncodingInfoU5BU5D_t2292552583;
// System.Text.UTF8Encoding
struct UTF8Encoding_t3956466879;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.UInt16
struct UInt16_t2177724958;
// System.Void
struct Void_t1185182177;
// UnityEngine.CharacterController
struct CharacterController_t1138636865;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Networking.ChannelBuffer[]
struct ChannelBufferU5BU5D_t2631829696;
// UnityEngine.Networking.HostTopology
struct HostTopology_t4059263395;
// UnityEngine.Networking.LocalClient
struct LocalClient_t1191103892;
// UnityEngine.Networking.MessageBase
struct MessageBase_t3584795631;
// UnityEngine.Networking.NetBuffer
struct NetBuffer_t2156033743;
// UnityEngine.Networking.NetworkBehaviour
struct NetworkBehaviour_t204670959;
// UnityEngine.Networking.NetworkBehaviour[]
struct NetworkBehaviourU5BU5D_t2652047222;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t2705220091;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t3299519057;
// UnityEngine.Networking.NetworkIdentity/ClientAuthorityCallback
struct ClientAuthorityCallback_t1145534953;
// UnityEngine.Networking.NetworkInstanceId[]
struct NetworkInstanceIdU5BU5D_t1326493510;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t1192515889;
// UnityEngine.Networking.NetworkMessageDelegate
struct NetworkMessageDelegate_t360140524;
// UnityEngine.Networking.NetworkMessageHandlers
struct NetworkMessageHandlers_t82575973;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1574750186;
// UnityEngine.Networking.NetworkScene
struct NetworkScene_t3519296737;
// UnityEngine.Networking.NetworkServer
struct NetworkServer_t2920297688;
// UnityEngine.Networking.NetworkServer/ServerSimpleWrapper
struct ServerSimpleWrapper_t3640015215;
// UnityEngine.Networking.NetworkSettingsAttribute
struct NetworkSettingsAttribute_t4047325829;
// UnityEngine.Networking.NetworkStartPosition
struct NetworkStartPosition_t3934012644;
// UnityEngine.Networking.NetworkSystem.AddPlayerMessage
struct AddPlayerMessage_t787692541;
// UnityEngine.Networking.NetworkSystem.AnimationMessage
struct AnimationMessage_t2187129444;
// UnityEngine.Networking.NetworkSystem.AnimationParametersMessage
struct AnimationParametersMessage_t2014820556;
// UnityEngine.Networking.NetworkSystem.AnimationTriggerMessage
struct AnimationTriggerMessage_t1881009617;
// UnityEngine.Networking.NetworkSystem.CRCMessage
struct CRCMessage_t4148217304;
// UnityEngine.Networking.NetworkSystem.CRCMessageEntry[]
struct CRCMessageEntryU5BU5D_t2683386060;
// UnityEngine.Networking.NetworkSystem.ClientAuthorityMessage
struct ClientAuthorityMessage_t2167651785;
// UnityEngine.Networking.NetworkSystem.EmptyMessage
struct EmptyMessage_t3892466266;
// UnityEngine.Networking.NetworkSystem.ErrorMessage
struct ErrorMessage_t4257973676;
// UnityEngine.Networking.NetworkSystem.IntegerMessage
struct IntegerMessage_t4071108245;
// UnityEngine.Networking.NetworkSystem.LobbyReadyToBeginMessage
struct LobbyReadyToBeginMessage_t1454406147;
// UnityEngine.Networking.NetworkSystem.NotReadyMessage
struct NotReadyMessage_t1149106928;
// UnityEngine.Networking.NetworkSystem.ObjectDestroyMessage
struct ObjectDestroyMessage_t1358562099;
// UnityEngine.Networking.NetworkSystem.ObjectSpawnFinishedMessage
struct ObjectSpawnFinishedMessage_t2314084871;
// UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage
struct ObjectSpawnMessage_t10889831;
// UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage
struct ObjectSpawnSceneMessage_t2191101100;
// UnityEngine.Networking.NetworkSystem.OverrideTransformMessage
struct OverrideTransformMessage_t1366792551;
// UnityEngine.Networking.NetworkSystem.OwnerMessage
struct OwnerMessage_t4130858210;
// UnityEngine.Networking.NetworkSystem.PeerAuthorityMessage
struct PeerAuthorityMessage_t1590291995;
// UnityEngine.Networking.NetworkSystem.PeerInfoMessage
struct PeerInfoMessage_t1835608005;
// UnityEngine.Networking.NetworkSystem.PeerInfoMessage[]
struct PeerInfoMessageU5BU5D_t2256646024;
// UnityEngine.Networking.NetworkSystem.PeerInfoPlayer[]
struct PeerInfoPlayerU5BU5D_t2287290788;
// UnityEngine.Networking.NetworkSystem.PeerListMessage
struct PeerListMessage_t3055989278;
// UnityEngine.Networking.NetworkSystem.ReadyMessage
struct ReadyMessage_t1708534618;
// UnityEngine.Networking.NetworkSystem.ReconnectMessage
struct ReconnectMessage_t1996592154;
// UnityEngine.Networking.NetworkSystem.RemovePlayerMessage
struct RemovePlayerMessage_t1120190071;
// UnityEngine.Networking.NetworkSystem.StringMessage
struct StringMessage_t3467362783;
// UnityEngine.Networking.NetworkTransform
struct NetworkTransform_t3548153263;
// UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D
struct ClientMoveCallback2D_t270751497;
// UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D
struct ClientMoveCallback3D_t1836835438;
// UnityEngine.Networking.NetworkTransformChild
struct NetworkTransformChild_t2600331682;
// UnityEngine.Networking.NetworkTransformChild[]
struct NetworkTransformChildU5BU5D_t625172887;
// UnityEngine.Networking.NetworkTransformVisualizer
struct NetworkTransformVisualizer_t2328387012;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3928387057;
// UnityEngine.Networking.PlayerController
struct PlayerController_t496487816;
// UnityEngine.Networking.ServerAttribute
struct ServerAttribute_t3576563794;
// UnityEngine.Networking.ServerCallbackAttribute
struct ServerCallbackAttribute_t137408393;
// UnityEngine.Networking.SpawnDelegate
struct SpawnDelegate_t1585635496;
// UnityEngine.Networking.SyncEventAttribute
struct SyncEventAttribute_t1173463645;
// UnityEngine.Networking.SyncListBool
struct SyncListBool_t2976666744;
// UnityEngine.Networking.SyncListFloat
struct SyncListFloat_t1924884630;
// UnityEngine.Networking.SyncListInt
struct SyncListInt_t3061596081;
// UnityEngine.Networking.SyncListString
struct SyncListString_t3633002311;
// UnityEngine.Networking.SyncListUInt
struct SyncListUInt_t1324480882;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.Boolean>
struct SyncListChanged_t543615847;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.Int32>
struct SyncListChanged_t3397273635;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.Single>
struct SyncListChanged_t1843594656;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.String>
struct SyncListChanged_t2293778571;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.UInt32>
struct SyncListChanged_t3006389860;
// UnityEngine.Networking.SyncList`1<System.Boolean>
struct SyncList_1_t2187079102;
// UnityEngine.Networking.SyncList`1<System.Int32>
struct SyncList_1_t745769594;
// UnityEngine.Networking.SyncList`1<System.Object>
struct SyncList_1_t874930005;
// UnityEngine.Networking.SyncList`1<System.Single>
struct SyncList_1_t3487057911;
// UnityEngine.Networking.SyncList`1<System.String>
struct SyncList_1_t3937241826;
// UnityEngine.Networking.SyncList`1<System.UInt32>
struct SyncList_1_t354885819;
// UnityEngine.Networking.SyncVarAttribute
struct SyncVarAttribute_t562797116;
// UnityEngine.Networking.TargetRpcAttribute
struct TargetRpcAttribute_t3963917861;
// UnityEngine.Networking.ULocalConnectionToClient
struct ULocalConnectionToClient_t1858816613;
// UnityEngine.Networking.ULocalConnectionToServer
struct ULocalConnectionToServer_t1112427013;
// UnityEngine.Networking.UnSpawnDelegate
struct UnSpawnDelegate_t851741660;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Rigidbody
struct Rigidbody_t3916780224;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t939494601;
// UnityEngine.Shader
struct Shader_t4151988712;
// UnityEngine.Transform
struct Transform_t3600365921;

extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern RuntimeClass* CRCMessageEntryU5BU5D_t2683386060_il2cpp_TypeInfo_var;
extern RuntimeClass* ClientScene_t3640716971_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* Decimal_t2948259380_il2cpp_TypeInfo_var;
extern RuntimeClass* IndexOutOfRangeException_t1578797820_il2cpp_TypeInfo_var;
extern RuntimeClass* Int16_t2552820387_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2079534799_il2cpp_TypeInfo_var;
extern RuntimeClass* LogFilter_t3573890335_il2cpp_TypeInfo_var;
extern RuntimeClass* Material_t340375123_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* NetBuffer_t2156033743_il2cpp_TypeInfo_var;
extern RuntimeClass* NetworkBehaviour_t204670959_il2cpp_TypeInfo_var;
extern RuntimeClass* NetworkClient_t3758195968_il2cpp_TypeInfo_var;
extern RuntimeClass* NetworkHash128_t2391674535_il2cpp_TypeInfo_var;
extern RuntimeClass* NetworkInstanceId_t786350175_il2cpp_TypeInfo_var;
extern RuntimeClass* NetworkManager_t468665779_il2cpp_TypeInfo_var;
extern RuntimeClass* NetworkServer_t2920297688_il2cpp_TypeInfo_var;
extern RuntimeClass* NetworkTransformVisualizer_t2328387012_il2cpp_TypeInfo_var;
extern RuntimeClass* NetworkWriter_t3928387057_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* PeerInfoMessageU5BU5D_t2256646024_il2cpp_TypeInfo_var;
extern RuntimeClass* PeerInfoMessage_t1835608005_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* SyncListBool_t2976666744_il2cpp_TypeInfo_var;
extern RuntimeClass* SyncListFloat_t1924884630_il2cpp_TypeInfo_var;
extern RuntimeClass* SyncListInt_t3061596081_il2cpp_TypeInfo_var;
extern RuntimeClass* SyncListString_t3633002311_il2cpp_TypeInfo_var;
extern RuntimeClass* SyncListUInt_t1324480882_il2cpp_TypeInfo_var;
extern RuntimeClass* TransformSyncMode_t1892665719_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* UTF8Encoding_t3956466879_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1035402498;
extern String_t* _stringLiteral1195343550;
extern String_t* _stringLiteral1202628576;
extern String_t* _stringLiteral1207897643;
extern String_t* _stringLiteral1316770405;
extern String_t* _stringLiteral1337943847;
extern String_t* _stringLiteral148958899;
extern String_t* _stringLiteral1613730879;
extern String_t* _stringLiteral163873836;
extern String_t* _stringLiteral1659358499;
extern String_t* _stringLiteral1665107978;
extern String_t* _stringLiteral1728819234;
extern String_t* _stringLiteral1810507830;
extern String_t* _stringLiteral2061384552;
extern String_t* _stringLiteral2199325090;
extern String_t* _stringLiteral2263479475;
extern String_t* _stringLiteral2303274273;
extern String_t* _stringLiteral2461225795;
extern String_t* _stringLiteral2502184034;
extern String_t* _stringLiteral253864552;
extern String_t* _stringLiteral2793551955;
extern String_t* _stringLiteral2900427655;
extern String_t* _stringLiteral3032379270;
extern String_t* _stringLiteral3051958475;
extern String_t* _stringLiteral3130457374;
extern String_t* _stringLiteral3162848157;
extern String_t* _stringLiteral3221776185;
extern String_t* _stringLiteral3452614550;
extern String_t* _stringLiteral3495671313;
extern String_t* _stringLiteral3514328747;
extern String_t* _stringLiteral3525122471;
extern String_t* _stringLiteral3702469874;
extern String_t* _stringLiteral4229007791;
extern String_t* _stringLiteral542057799;
extern String_t* _stringLiteral59005065;
extern String_t* _stringLiteral663917154;
extern const RuntimeMethod* ArraySegment_1_get_Array_m2580038436_RuntimeMethod_var;
extern const RuntimeMethod* ArraySegment_1_get_Count_m4110759063_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisCharacterController_t1138636865_m1645616368_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisNetworkTransform_t3548153263_m4257392998_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisRigidbody2D_t939494601_m3412538942_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisRigidbody_t3916780224_m2301377470_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponents_TisNetworkTransformChild_t2600331682_m615632565_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisNetworkIdentity_t3299519057_m4215495152_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisNetworkTransform_t3548153263_m4093321400_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_t939494601_m577109995_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t3916780224_m3944438356_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponents_TisNetworkTransformChild_t2600331682_m2654119007_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1_Contains_m1296176293_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2963065281_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m218384935_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3222186439_RuntimeMethod_var;
extern const RuntimeMethod* NetworkTransform_VerifySerializeComponentExists_m3529188128_RuntimeMethod_var;
extern const RuntimeMethod* NetworkWriter_Write_m2410084080_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m1553712732_RuntimeMethod_var;
extern const RuntimeMethod* SyncList_1_AddInternal_m2707695638_RuntimeMethod_var;
extern const RuntimeMethod* SyncList_1_AddInternal_m277591762_RuntimeMethod_var;
extern const RuntimeMethod* SyncList_1_AddInternal_m3519097998_RuntimeMethod_var;
extern const RuntimeMethod* SyncList_1_AddInternal_m3876800740_RuntimeMethod_var;
extern const RuntimeMethod* SyncList_1_AddInternal_m613808320_RuntimeMethod_var;
extern const RuntimeMethod* SyncList_1_Clear_m1121888670_RuntimeMethod_var;
extern const RuntimeMethod* SyncList_1_Clear_m1260889700_RuntimeMethod_var;
extern const RuntimeMethod* SyncList_1_Clear_m3269847844_RuntimeMethod_var;
extern const RuntimeMethod* SyncList_1_Clear_m3306438993_RuntimeMethod_var;
extern const RuntimeMethod* SyncList_1_Clear_m672306289_RuntimeMethod_var;
extern const RuntimeMethod* SyncList_1__ctor_m1007556774_RuntimeMethod_var;
extern const RuntimeMethod* SyncList_1__ctor_m1252447513_RuntimeMethod_var;
extern const RuntimeMethod* SyncList_1__ctor_m1604967930_RuntimeMethod_var;
extern const RuntimeMethod* SyncList_1__ctor_m2821956447_RuntimeMethod_var;
extern const RuntimeMethod* SyncList_1__ctor_m3510382209_RuntimeMethod_var;
extern const RuntimeMethod* SyncList_1_get_Count_m120976442_RuntimeMethod_var;
extern const RuntimeMethod* SyncList_1_get_Count_m1619578576_RuntimeMethod_var;
extern const RuntimeMethod* SyncList_1_get_Count_m2152775233_RuntimeMethod_var;
extern const RuntimeMethod* SyncList_1_get_Count_m3238029537_RuntimeMethod_var;
extern const RuntimeMethod* SyncList_1_get_Count_m3693813194_RuntimeMethod_var;
extern const RuntimeMethod* SyncList_1_get_Item_m1374023387_RuntimeMethod_var;
extern const RuntimeMethod* SyncList_1_get_Item_m1975160048_RuntimeMethod_var;
extern const RuntimeMethod* SyncList_1_get_Item_m2119903705_RuntimeMethod_var;
extern const RuntimeMethod* SyncList_1_get_Item_m2226358506_RuntimeMethod_var;
extern const RuntimeMethod* SyncList_1_get_Item_m664118597_RuntimeMethod_var;
extern const RuntimeType* CharacterController_t1138636865_0_0_0_var;
extern const RuntimeType* Rigidbody2D_t939494601_0_0_0_var;
extern const RuntimeType* Rigidbody_t3916780224_0_0_0_var;
extern const uint32_t CRCMessage_Deserialize_m1541620046_MetadataUsageId;
extern const uint32_t ClientMoveCallback2D_BeginInvoke_m650381289_MetadataUsageId;
extern const uint32_t ClientMoveCallback3D_BeginInvoke_m243277252_MetadataUsageId;
extern const uint32_t NetworkStartPosition_Awake_m4104348295_MetadataUsageId;
extern const uint32_t NetworkStartPosition_OnDestroy_m2657404384_MetadataUsageId;
extern const uint32_t NetworkTransformChild_Awake_m2646391189_MetadataUsageId;
extern const uint32_t NetworkTransformChild_FixedUpdateClient_m1112757836_MetadataUsageId;
extern const uint32_t NetworkTransformChild_FixedUpdateServer_m857381952_MetadataUsageId;
extern const uint32_t NetworkTransformChild_HandleChildTransform_m1783918615_MetadataUsageId;
extern const uint32_t NetworkTransformChild_HasMoved_m673081863_MetadataUsageId;
extern const uint32_t NetworkTransformChild_OnDeserialize_m3953719358_MetadataUsageId;
extern const uint32_t NetworkTransformChild_OnValidate_m1781966712_MetadataUsageId;
extern const uint32_t NetworkTransformChild_SendTransform_m3675938991_MetadataUsageId;
extern const uint32_t NetworkTransformChild_UnserializeModeTransform_m2691581115_MetadataUsageId;
extern const uint32_t NetworkTransformChild_Update_m3369411374_MetadataUsageId;
extern const uint32_t NetworkTransformChild__ctor_m3242800869_MetadataUsageId;
extern const uint32_t NetworkTransformVisualizer_CreateLineMaterial_m3214025820_MetadataUsageId;
extern const uint32_t NetworkTransformVisualizer_DrawRotationInterpolation_m1716797941_MetadataUsageId;
extern const uint32_t NetworkTransformVisualizer_FixedUpdate_m3503359228_MetadataUsageId;
extern const uint32_t NetworkTransformVisualizer_OnDestroy_m2854303748_MetadataUsageId;
extern const uint32_t NetworkTransformVisualizer_OnRenderObject_m843166100_MetadataUsageId;
extern const uint32_t NetworkTransformVisualizer_OnStartClient_m2754427721_MetadataUsageId;
extern const uint32_t NetworkTransformVisualizer_OnStartLocalPlayer_m3884173815_MetadataUsageId;
extern const uint32_t NetworkTransformVisualizer__ctor_m942684589_MetadataUsageId;
extern const uint32_t NetworkTransform_Awake_m2180609175_MetadataUsageId;
extern const uint32_t NetworkTransform_CheckVelocityChanged_m483418602_MetadataUsageId;
extern const uint32_t NetworkTransform_FixedUpdateClient_m1456995231_MetadataUsageId;
extern const uint32_t NetworkTransform_FixedUpdateServer_m961931446_MetadataUsageId;
extern const uint32_t NetworkTransform_HandleTransform_m2231391039_MetadataUsageId;
extern const uint32_t NetworkTransform_HasMoved_m5550782_MetadataUsageId;
extern const uint32_t NetworkTransform_InterpolateTransformMode2D_m1581623809_MetadataUsageId;
extern const uint32_t NetworkTransform_InterpolateTransformMode3D_m1581623810_MetadataUsageId;
extern const uint32_t NetworkTransform_InterpolateTransformModeCharacterController_m3454043386_MetadataUsageId;
extern const uint32_t NetworkTransform_OnDeserialize_m1230745388_MetadataUsageId;
extern const uint32_t NetworkTransform_SendTransform_m3176084316_MetadataUsageId;
extern const uint32_t NetworkTransform_SerializeMode2D_m906862596_MetadataUsageId;
extern const uint32_t NetworkTransform_UnserializeMode2D_m4000618177_MetadataUsageId;
extern const uint32_t NetworkTransform_UnserializeMode3D_m1904062442_MetadataUsageId;
extern const uint32_t NetworkTransform_UnserializeModeCharacterController_m4186511990_MetadataUsageId;
extern const uint32_t NetworkTransform_UnserializeModeTransform_m3827994885_MetadataUsageId;
extern const uint32_t NetworkTransform_UnserializeRotation3D_m2713487431_MetadataUsageId;
extern const uint32_t NetworkTransform_UnserializeSpin3D_m3995136278_MetadataUsageId;
extern const uint32_t NetworkTransform_UnserializeVelocity2D_m586500050_MetadataUsageId;
extern const uint32_t NetworkTransform_Update_m1381845480_MetadataUsageId;
extern const uint32_t NetworkTransform_VerifySerializeComponentExists_m3529188128_MetadataUsageId;
extern const uint32_t NetworkTransform__ctor_m3832563862_MetadataUsageId;
extern const uint32_t NetworkWriter_AsArray_m3793159246_MetadataUsageId;
extern const uint32_t NetworkWriter_ToArray_m132610877_MetadataUsageId;
extern const uint32_t NetworkWriter_WriteBytesAndSize_m542866276_MetadataUsageId;
extern const uint32_t NetworkWriter_WriteBytesFull_m804870477_MetadataUsageId;
extern const uint32_t NetworkWriter_Write_m1337490735_MetadataUsageId;
extern const uint32_t NetworkWriter_Write_m189730350_MetadataUsageId;
extern const uint32_t NetworkWriter_Write_m1946185738_MetadataUsageId;
extern const uint32_t NetworkWriter_Write_m2295136255_MetadataUsageId;
extern const uint32_t NetworkWriter_Write_m2410084080_MetadataUsageId;
extern const uint32_t NetworkWriter_Write_m2507998834_MetadataUsageId;
extern const uint32_t NetworkWriter_Write_m2878035860_MetadataUsageId;
extern const uint32_t NetworkWriter_Write_m3035096652_MetadataUsageId;
extern const uint32_t NetworkWriter_Write_m3133882443_MetadataUsageId;
extern const uint32_t NetworkWriter__ctor_m18760743_MetadataUsageId;
extern const uint32_t NetworkWriter__ctor_m824815027_MetadataUsageId;
extern const uint32_t PeerInfoMessage_Deserialize_m329771560_MetadataUsageId;
extern const uint32_t PeerInfoMessage_ToString_m3887802383_MetadataUsageId;
extern const uint32_t PeerListMessage_Deserialize_m2781203116_MetadataUsageId;
extern const uint32_t PlayerController_ToString_m451687094_MetadataUsageId;
extern const uint32_t PlayerController__ctor_m1563370273_MetadataUsageId;
extern const uint32_t SpawnDelegate_BeginInvoke_m3131172266_MetadataUsageId;
extern const uint32_t SyncListBool_ReadInstance_m820966434_MetadataUsageId;
extern const uint32_t SyncListBool_ReadReference_m3578578461_MetadataUsageId;
extern const uint32_t SyncListBool_WriteInstance_m2961228772_MetadataUsageId;
extern const uint32_t SyncListBool__ctor_m4271378930_MetadataUsageId;
extern const uint32_t SyncListFloat_ReadInstance_m1361610567_MetadataUsageId;
extern const uint32_t SyncListFloat_ReadReference_m3907681595_MetadataUsageId;
extern const uint32_t SyncListFloat_WriteInstance_m2399586300_MetadataUsageId;
extern const uint32_t SyncListFloat__ctor_m3007803704_MetadataUsageId;
extern const uint32_t SyncListInt_ReadInstance_m702108680_MetadataUsageId;
extern const uint32_t SyncListInt_ReadReference_m2130258271_MetadataUsageId;
extern const uint32_t SyncListInt_WriteInstance_m3879054733_MetadataUsageId;
extern const uint32_t SyncListInt__ctor_m1747608816_MetadataUsageId;
extern const uint32_t SyncListString_ReadInstance_m2797657582_MetadataUsageId;
extern const uint32_t SyncListString_ReadReference_m3451015765_MetadataUsageId;
extern const uint32_t SyncListString_WriteInstance_m2960124210_MetadataUsageId;
extern const uint32_t SyncListString__ctor_m3133147658_MetadataUsageId;
extern const uint32_t SyncListUInt_ReadInstance_m568257550_MetadataUsageId;
extern const uint32_t SyncListUInt_ReadReference_m191287357_MetadataUsageId;
extern const uint32_t SyncListUInt_WriteInstance_m3270047898_MetadataUsageId;
extern const uint32_t SyncListUInt__ctor_m3640746336_MetadataUsageId;
extern const uint32_t ULocalConnectionToClient__ctor_m3225125635_MetadataUsageId;
extern const uint32_t ULocalConnectionToServer_SendBytes_m3941987877_MetadataUsageId;
extern const uint32_t ULocalConnectionToServer__ctor_m130825988_MetadataUsageId;

struct ByteU5BU5D_t4116647657;
struct Int32U5BU5D_t385246372;
struct ObjectU5BU5D_t2843939325;
struct CRCMessageEntryU5BU5D_t2683386060;
struct PeerInfoMessageU5BU5D_t2256646024;
struct PeerInfoPlayerU5BU5D_t2287290788;
struct NetworkTransformChildU5BU5D_t625172887;


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
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef HASHSET_1_T3646266945_H
#define HASHSET_1_T3646266945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkInstanceId>
struct  HashSet_1_t3646266945  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1::links
	LinkU5BU5D_t4014378265* ___links_5;
	// T[] System.Collections.Generic.HashSet`1::slots
	NetworkInstanceIdU5BU5D_t1326493510* ___slots_6;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(HashSet_1_t3646266945, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_links_5() { return static_cast<int32_t>(offsetof(HashSet_1_t3646266945, ___links_5)); }
	inline LinkU5BU5D_t4014378265* get_links_5() const { return ___links_5; }
	inline LinkU5BU5D_t4014378265** get_address_of_links_5() { return &___links_5; }
	inline void set_links_5(LinkU5BU5D_t4014378265* value)
	{
		___links_5 = value;
		Il2CppCodeGenWriteBarrier((&___links_5), value);
	}

	inline static int32_t get_offset_of_slots_6() { return static_cast<int32_t>(offsetof(HashSet_1_t3646266945, ___slots_6)); }
	inline NetworkInstanceIdU5BU5D_t1326493510* get_slots_6() const { return ___slots_6; }
	inline NetworkInstanceIdU5BU5D_t1326493510** get_address_of_slots_6() { return &___slots_6; }
	inline void set_slots_6(NetworkInstanceIdU5BU5D_t1326493510* value)
	{
		___slots_6 = value;
		Il2CppCodeGenWriteBarrier((&___slots_6), value);
	}

	inline static int32_t get_offset_of_touched_7() { return static_cast<int32_t>(offsetof(HashSet_1_t3646266945, ___touched_7)); }
	inline int32_t get_touched_7() const { return ___touched_7; }
	inline int32_t* get_address_of_touched_7() { return &___touched_7; }
	inline void set_touched_7(int32_t value)
	{
		___touched_7 = value;
	}

	inline static int32_t get_offset_of_empty_slot_8() { return static_cast<int32_t>(offsetof(HashSet_1_t3646266945, ___empty_slot_8)); }
	inline int32_t get_empty_slot_8() const { return ___empty_slot_8; }
	inline int32_t* get_address_of_empty_slot_8() { return &___empty_slot_8; }
	inline void set_empty_slot_8(int32_t value)
	{
		___empty_slot_8 = value;
	}

	inline static int32_t get_offset_of_count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t3646266945, ___count_9)); }
	inline int32_t get_count_9() const { return ___count_9; }
	inline int32_t* get_address_of_count_9() { return &___count_9; }
	inline void set_count_9(int32_t value)
	{
		___count_9 = value;
	}

	inline static int32_t get_offset_of_threshold_10() { return static_cast<int32_t>(offsetof(HashSet_1_t3646266945, ___threshold_10)); }
	inline int32_t get_threshold_10() const { return ___threshold_10; }
	inline int32_t* get_address_of_threshold_10() { return &___threshold_10; }
	inline void set_threshold_10(int32_t value)
	{
		___threshold_10 = value;
	}

	inline static int32_t get_offset_of_comparer_11() { return static_cast<int32_t>(offsetof(HashSet_1_t3646266945, ___comparer_11)); }
	inline RuntimeObject* get_comparer_11() const { return ___comparer_11; }
	inline RuntimeObject** get_address_of_comparer_11() { return &___comparer_11; }
	inline void set_comparer_11(RuntimeObject* value)
	{
		___comparer_11 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_11), value);
	}

	inline static int32_t get_offset_of_si_12() { return static_cast<int32_t>(offsetof(HashSet_1_t3646266945, ___si_12)); }
	inline SerializationInfo_t950877179 * get_si_12() const { return ___si_12; }
	inline SerializationInfo_t950877179 ** get_address_of_si_12() { return &___si_12; }
	inline void set_si_12(SerializationInfo_t950877179 * value)
	{
		___si_12 = value;
		Il2CppCodeGenWriteBarrier((&___si_12), value);
	}

	inline static int32_t get_offset_of_generation_13() { return static_cast<int32_t>(offsetof(HashSet_1_t3646266945, ___generation_13)); }
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
#endif // HASHSET_1_T3646266945_H
#ifndef LIST_1_T2079534799_H
#define LIST_1_T2079534799_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkSystem.PeerInfoPlayer>
struct  List_1_t2079534799  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PeerInfoPlayerU5BU5D_t2287290788* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2079534799, ____items_1)); }
	inline PeerInfoPlayerU5BU5D_t2287290788* get__items_1() const { return ____items_1; }
	inline PeerInfoPlayerU5BU5D_t2287290788** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PeerInfoPlayerU5BU5D_t2287290788* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2079534799, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2079534799, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2079534799_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	PeerInfoPlayerU5BU5D_t2287290788* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2079534799_StaticFields, ___EmptyArray_4)); }
	inline PeerInfoPlayerU5BU5D_t2287290788* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline PeerInfoPlayerU5BU5D_t2287290788** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(PeerInfoPlayerU5BU5D_t2287290788* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2079534799_H
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
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
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
#ifndef ENCODING_T1523322056_H
#define ENCODING_T1523322056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1523322056  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::codePage
	int32_t ___codePage_0;
	// System.Int32 System.Text.Encoding::windows_code_page
	int32_t ___windows_code_page_1;
	// System.Boolean System.Text.Encoding::is_readonly
	bool ___is_readonly_2;
	// System.Text.DecoderFallback System.Text.Encoding::decoder_fallback
	DecoderFallback_t3123823036 * ___decoder_fallback_3;
	// System.Text.EncoderFallback System.Text.Encoding::encoder_fallback
	EncoderFallback_t1188251036 * ___encoder_fallback_4;
	// System.String System.Text.Encoding::body_name
	String_t* ___body_name_9;
	// System.String System.Text.Encoding::encoding_name
	String_t* ___encoding_name_10;
	// System.String System.Text.Encoding::header_name
	String_t* ___header_name_11;
	// System.Boolean System.Text.Encoding::is_mail_news_display
	bool ___is_mail_news_display_12;
	// System.Boolean System.Text.Encoding::is_mail_news_save
	bool ___is_mail_news_save_13;
	// System.Boolean System.Text.Encoding::is_browser_save
	bool ___is_browser_save_14;
	// System.Boolean System.Text.Encoding::is_browser_display
	bool ___is_browser_display_15;
	// System.String System.Text.Encoding::web_name
	String_t* ___web_name_16;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_windows_code_page_1() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___windows_code_page_1)); }
	inline int32_t get_windows_code_page_1() const { return ___windows_code_page_1; }
	inline int32_t* get_address_of_windows_code_page_1() { return &___windows_code_page_1; }
	inline void set_windows_code_page_1(int32_t value)
	{
		___windows_code_page_1 = value;
	}

	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}

	inline static int32_t get_offset_of_decoder_fallback_3() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___decoder_fallback_3)); }
	inline DecoderFallback_t3123823036 * get_decoder_fallback_3() const { return ___decoder_fallback_3; }
	inline DecoderFallback_t3123823036 ** get_address_of_decoder_fallback_3() { return &___decoder_fallback_3; }
	inline void set_decoder_fallback_3(DecoderFallback_t3123823036 * value)
	{
		___decoder_fallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_fallback_3), value);
	}

	inline static int32_t get_offset_of_encoder_fallback_4() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoder_fallback_4)); }
	inline EncoderFallback_t1188251036 * get_encoder_fallback_4() const { return ___encoder_fallback_4; }
	inline EncoderFallback_t1188251036 ** get_address_of_encoder_fallback_4() { return &___encoder_fallback_4; }
	inline void set_encoder_fallback_4(EncoderFallback_t1188251036 * value)
	{
		___encoder_fallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_fallback_4), value);
	}

	inline static int32_t get_offset_of_body_name_9() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___body_name_9)); }
	inline String_t* get_body_name_9() const { return ___body_name_9; }
	inline String_t** get_address_of_body_name_9() { return &___body_name_9; }
	inline void set_body_name_9(String_t* value)
	{
		___body_name_9 = value;
		Il2CppCodeGenWriteBarrier((&___body_name_9), value);
	}

	inline static int32_t get_offset_of_encoding_name_10() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoding_name_10)); }
	inline String_t* get_encoding_name_10() const { return ___encoding_name_10; }
	inline String_t** get_address_of_encoding_name_10() { return &___encoding_name_10; }
	inline void set_encoding_name_10(String_t* value)
	{
		___encoding_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_name_10), value);
	}

	inline static int32_t get_offset_of_header_name_11() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___header_name_11)); }
	inline String_t* get_header_name_11() const { return ___header_name_11; }
	inline String_t** get_address_of_header_name_11() { return &___header_name_11; }
	inline void set_header_name_11(String_t* value)
	{
		___header_name_11 = value;
		Il2CppCodeGenWriteBarrier((&___header_name_11), value);
	}

	inline static int32_t get_offset_of_is_mail_news_display_12() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_display_12)); }
	inline bool get_is_mail_news_display_12() const { return ___is_mail_news_display_12; }
	inline bool* get_address_of_is_mail_news_display_12() { return &___is_mail_news_display_12; }
	inline void set_is_mail_news_display_12(bool value)
	{
		___is_mail_news_display_12 = value;
	}

	inline static int32_t get_offset_of_is_mail_news_save_13() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_save_13)); }
	inline bool get_is_mail_news_save_13() const { return ___is_mail_news_save_13; }
	inline bool* get_address_of_is_mail_news_save_13() { return &___is_mail_news_save_13; }
	inline void set_is_mail_news_save_13(bool value)
	{
		___is_mail_news_save_13 = value;
	}

	inline static int32_t get_offset_of_is_browser_save_14() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_save_14)); }
	inline bool get_is_browser_save_14() const { return ___is_browser_save_14; }
	inline bool* get_address_of_is_browser_save_14() { return &___is_browser_save_14; }
	inline void set_is_browser_save_14(bool value)
	{
		___is_browser_save_14 = value;
	}

	inline static int32_t get_offset_of_is_browser_display_15() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_display_15)); }
	inline bool get_is_browser_display_15() const { return ___is_browser_display_15; }
	inline bool* get_address_of_is_browser_display_15() { return &___is_browser_display_15; }
	inline void set_is_browser_display_15(bool value)
	{
		___is_browser_display_15 = value;
	}

	inline static int32_t get_offset_of_web_name_16() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___web_name_16)); }
	inline String_t* get_web_name_16() const { return ___web_name_16; }
	inline String_t** get_address_of_web_name_16() { return &___web_name_16; }
	inline void set_web_name_16(String_t* value)
	{
		___web_name_16 = value;
		Il2CppCodeGenWriteBarrier((&___web_name_16), value);
	}
};

struct Encoding_t1523322056_StaticFields
{
public:
	// System.Reflection.Assembly System.Text.Encoding::i18nAssembly
	Assembly_t * ___i18nAssembly_5;
	// System.Boolean System.Text.Encoding::i18nDisabled
	bool ___i18nDisabled_6;
	// System.Text.EncodingInfo[] System.Text.Encoding::encoding_infos
	EncodingInfoU5BU5D_t2292552583* ___encoding_infos_7;
	// System.Object[] System.Text.Encoding::encodings
	ObjectU5BU5D_t2843939325* ___encodings_8;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1523322056 * ___asciiEncoding_17;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianEncoding
	Encoding_t1523322056 * ___bigEndianEncoding_18;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1523322056 * ___defaultEncoding_19;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1523322056 * ___utf7Encoding_20;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithMarkers
	Encoding_t1523322056 * ___utf8EncodingWithMarkers_21;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithoutMarkers
	Encoding_t1523322056 * ___utf8EncodingWithoutMarkers_22;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1523322056 * ___unicodeEncoding_23;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::isoLatin1Encoding
	Encoding_t1523322056 * ___isoLatin1Encoding_24;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingUnsafe
	Encoding_t1523322056 * ___utf8EncodingUnsafe_25;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1523322056 * ___utf32Encoding_26;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUTF32Encoding
	Encoding_t1523322056 * ___bigEndianUTF32Encoding_27;
	// System.Object System.Text.Encoding::lockobj
	RuntimeObject * ___lockobj_28;

public:
	inline static int32_t get_offset_of_i18nAssembly_5() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nAssembly_5)); }
	inline Assembly_t * get_i18nAssembly_5() const { return ___i18nAssembly_5; }
	inline Assembly_t ** get_address_of_i18nAssembly_5() { return &___i18nAssembly_5; }
	inline void set_i18nAssembly_5(Assembly_t * value)
	{
		___i18nAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_5), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_6() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nDisabled_6)); }
	inline bool get_i18nDisabled_6() const { return ___i18nDisabled_6; }
	inline bool* get_address_of_i18nDisabled_6() { return &___i18nDisabled_6; }
	inline void set_i18nDisabled_6(bool value)
	{
		___i18nDisabled_6 = value;
	}

	inline static int32_t get_offset_of_encoding_infos_7() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___encoding_infos_7)); }
	inline EncodingInfoU5BU5D_t2292552583* get_encoding_infos_7() const { return ___encoding_infos_7; }
	inline EncodingInfoU5BU5D_t2292552583** get_address_of_encoding_infos_7() { return &___encoding_infos_7; }
	inline void set_encoding_infos_7(EncodingInfoU5BU5D_t2292552583* value)
	{
		___encoding_infos_7 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_infos_7), value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___encodings_8)); }
	inline ObjectU5BU5D_t2843939325* get_encodings_8() const { return ___encodings_8; }
	inline ObjectU5BU5D_t2843939325** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(ObjectU5BU5D_t2843939325* value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_8), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_17() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___asciiEncoding_17)); }
	inline Encoding_t1523322056 * get_asciiEncoding_17() const { return ___asciiEncoding_17; }
	inline Encoding_t1523322056 ** get_address_of_asciiEncoding_17() { return &___asciiEncoding_17; }
	inline void set_asciiEncoding_17(Encoding_t1523322056 * value)
	{
		___asciiEncoding_17 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_17), value);
	}

	inline static int32_t get_offset_of_bigEndianEncoding_18() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianEncoding_18)); }
	inline Encoding_t1523322056 * get_bigEndianEncoding_18() const { return ___bigEndianEncoding_18; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianEncoding_18() { return &___bigEndianEncoding_18; }
	inline void set_bigEndianEncoding_18(Encoding_t1523322056 * value)
	{
		___bigEndianEncoding_18 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianEncoding_18), value);
	}

	inline static int32_t get_offset_of_defaultEncoding_19() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___defaultEncoding_19)); }
	inline Encoding_t1523322056 * get_defaultEncoding_19() const { return ___defaultEncoding_19; }
	inline Encoding_t1523322056 ** get_address_of_defaultEncoding_19() { return &___defaultEncoding_19; }
	inline void set_defaultEncoding_19(Encoding_t1523322056 * value)
	{
		___defaultEncoding_19 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_19), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_20() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf7Encoding_20)); }
	inline Encoding_t1523322056 * get_utf7Encoding_20() const { return ___utf7Encoding_20; }
	inline Encoding_t1523322056 ** get_address_of_utf7Encoding_20() { return &___utf7Encoding_20; }
	inline void set_utf7Encoding_20(Encoding_t1523322056 * value)
	{
		___utf7Encoding_20 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_20), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithMarkers_21() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithMarkers_21)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithMarkers_21() const { return ___utf8EncodingWithMarkers_21; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithMarkers_21() { return &___utf8EncodingWithMarkers_21; }
	inline void set_utf8EncodingWithMarkers_21(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithMarkers_21 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithMarkers_21), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_22() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithoutMarkers_22)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithoutMarkers_22() const { return ___utf8EncodingWithoutMarkers_22; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithoutMarkers_22() { return &___utf8EncodingWithoutMarkers_22; }
	inline void set_utf8EncodingWithoutMarkers_22(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithoutMarkers_22 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_22), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_23() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___unicodeEncoding_23)); }
	inline Encoding_t1523322056 * get_unicodeEncoding_23() const { return ___unicodeEncoding_23; }
	inline Encoding_t1523322056 ** get_address_of_unicodeEncoding_23() { return &___unicodeEncoding_23; }
	inline void set_unicodeEncoding_23(Encoding_t1523322056 * value)
	{
		___unicodeEncoding_23 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_23), value);
	}

	inline static int32_t get_offset_of_isoLatin1Encoding_24() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___isoLatin1Encoding_24)); }
	inline Encoding_t1523322056 * get_isoLatin1Encoding_24() const { return ___isoLatin1Encoding_24; }
	inline Encoding_t1523322056 ** get_address_of_isoLatin1Encoding_24() { return &___isoLatin1Encoding_24; }
	inline void set_isoLatin1Encoding_24(Encoding_t1523322056 * value)
	{
		___isoLatin1Encoding_24 = value;
		Il2CppCodeGenWriteBarrier((&___isoLatin1Encoding_24), value);
	}

	inline static int32_t get_offset_of_utf8EncodingUnsafe_25() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingUnsafe_25)); }
	inline Encoding_t1523322056 * get_utf8EncodingUnsafe_25() const { return ___utf8EncodingUnsafe_25; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingUnsafe_25() { return &___utf8EncodingUnsafe_25; }
	inline void set_utf8EncodingUnsafe_25(Encoding_t1523322056 * value)
	{
		___utf8EncodingUnsafe_25 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingUnsafe_25), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_26() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf32Encoding_26)); }
	inline Encoding_t1523322056 * get_utf32Encoding_26() const { return ___utf32Encoding_26; }
	inline Encoding_t1523322056 ** get_address_of_utf32Encoding_26() { return &___utf32Encoding_26; }
	inline void set_utf32Encoding_26(Encoding_t1523322056 * value)
	{
		___utf32Encoding_26 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_26), value);
	}

	inline static int32_t get_offset_of_bigEndianUTF32Encoding_27() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianUTF32Encoding_27)); }
	inline Encoding_t1523322056 * get_bigEndianUTF32Encoding_27() const { return ___bigEndianUTF32Encoding_27; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianUTF32Encoding_27() { return &___bigEndianUTF32Encoding_27; }
	inline void set_bigEndianUTF32Encoding_27(Encoding_t1523322056 * value)
	{
		___bigEndianUTF32Encoding_27 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUTF32Encoding_27), value);
	}

	inline static int32_t get_offset_of_lockobj_28() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___lockobj_28)); }
	inline RuntimeObject * get_lockobj_28() const { return ___lockobj_28; }
	inline RuntimeObject ** get_address_of_lockobj_28() { return &___lockobj_28; }
	inline void set_lockobj_28(RuntimeObject * value)
	{
		___lockobj_28 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_28), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1523322056_H
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
#ifndef MESSAGEBASE_T3584795631_H
#define MESSAGEBASE_T3584795631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.MessageBase
struct  MessageBase_t3584795631  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEBASE_T3584795631_H
#ifndef NETBUFFER_T2156033743_H
#define NETBUFFER_T2156033743_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetBuffer
struct  NetBuffer_t2156033743  : public RuntimeObject
{
public:
	// System.Byte[] UnityEngine.Networking.NetBuffer::m_Buffer
	ByteU5BU5D_t4116647657* ___m_Buffer_0;
	// System.UInt32 UnityEngine.Networking.NetBuffer::m_Pos
	uint32_t ___m_Pos_1;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NetBuffer_t2156033743, ___m_Buffer_0)); }
	inline ByteU5BU5D_t4116647657* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(ByteU5BU5D_t4116647657* value)
	{
		___m_Buffer_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Buffer_0), value);
	}

	inline static int32_t get_offset_of_m_Pos_1() { return static_cast<int32_t>(offsetof(NetBuffer_t2156033743, ___m_Pos_1)); }
	inline uint32_t get_m_Pos_1() const { return ___m_Pos_1; }
	inline uint32_t* get_address_of_m_Pos_1() { return &___m_Pos_1; }
	inline void set_m_Pos_1(uint32_t value)
	{
		___m_Pos_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETBUFFER_T2156033743_H
#ifndef NETWORKMESSAGE_T1192515889_H
#define NETWORKMESSAGE_T1192515889_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkMessage
struct  NetworkMessage_t1192515889  : public RuntimeObject
{
public:
	// System.Int16 UnityEngine.Networking.NetworkMessage::msgType
	int16_t ___msgType_1;
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkMessage::conn
	NetworkConnection_t2705220091 * ___conn_2;
	// UnityEngine.Networking.NetworkReader UnityEngine.Networking.NetworkMessage::reader
	NetworkReader_t1574750186 * ___reader_3;
	// System.Int32 UnityEngine.Networking.NetworkMessage::channelId
	int32_t ___channelId_4;

public:
	inline static int32_t get_offset_of_msgType_1() { return static_cast<int32_t>(offsetof(NetworkMessage_t1192515889, ___msgType_1)); }
	inline int16_t get_msgType_1() const { return ___msgType_1; }
	inline int16_t* get_address_of_msgType_1() { return &___msgType_1; }
	inline void set_msgType_1(int16_t value)
	{
		___msgType_1 = value;
	}

	inline static int32_t get_offset_of_conn_2() { return static_cast<int32_t>(offsetof(NetworkMessage_t1192515889, ___conn_2)); }
	inline NetworkConnection_t2705220091 * get_conn_2() const { return ___conn_2; }
	inline NetworkConnection_t2705220091 ** get_address_of_conn_2() { return &___conn_2; }
	inline void set_conn_2(NetworkConnection_t2705220091 * value)
	{
		___conn_2 = value;
		Il2CppCodeGenWriteBarrier((&___conn_2), value);
	}

	inline static int32_t get_offset_of_reader_3() { return static_cast<int32_t>(offsetof(NetworkMessage_t1192515889, ___reader_3)); }
	inline NetworkReader_t1574750186 * get_reader_3() const { return ___reader_3; }
	inline NetworkReader_t1574750186 ** get_address_of_reader_3() { return &___reader_3; }
	inline void set_reader_3(NetworkReader_t1574750186 * value)
	{
		___reader_3 = value;
		Il2CppCodeGenWriteBarrier((&___reader_3), value);
	}

	inline static int32_t get_offset_of_channelId_4() { return static_cast<int32_t>(offsetof(NetworkMessage_t1192515889, ___channelId_4)); }
	inline int32_t get_channelId_4() const { return ___channelId_4; }
	inline int32_t* get_address_of_channelId_4() { return &___channelId_4; }
	inline void set_channelId_4(int32_t value)
	{
		___channelId_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKMESSAGE_T1192515889_H
#ifndef NETWORKREADER_T1574750186_H
#define NETWORKREADER_T1574750186_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkReader
struct  NetworkReader_t1574750186  : public RuntimeObject
{
public:
	// UnityEngine.Networking.NetBuffer UnityEngine.Networking.NetworkReader::m_buf
	NetBuffer_t2156033743 * ___m_buf_0;

public:
	inline static int32_t get_offset_of_m_buf_0() { return static_cast<int32_t>(offsetof(NetworkReader_t1574750186, ___m_buf_0)); }
	inline NetBuffer_t2156033743 * get_m_buf_0() const { return ___m_buf_0; }
	inline NetBuffer_t2156033743 ** get_address_of_m_buf_0() { return &___m_buf_0; }
	inline void set_m_buf_0(NetBuffer_t2156033743 * value)
	{
		___m_buf_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_buf_0), value);
	}
};

struct NetworkReader_t1574750186_StaticFields
{
public:
	// System.Byte[] UnityEngine.Networking.NetworkReader::s_StringReaderBuffer
	ByteU5BU5D_t4116647657* ___s_StringReaderBuffer_3;
	// System.Text.Encoding UnityEngine.Networking.NetworkReader::s_Encoding
	Encoding_t1523322056 * ___s_Encoding_4;

public:
	inline static int32_t get_offset_of_s_StringReaderBuffer_3() { return static_cast<int32_t>(offsetof(NetworkReader_t1574750186_StaticFields, ___s_StringReaderBuffer_3)); }
	inline ByteU5BU5D_t4116647657* get_s_StringReaderBuffer_3() const { return ___s_StringReaderBuffer_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_s_StringReaderBuffer_3() { return &___s_StringReaderBuffer_3; }
	inline void set_s_StringReaderBuffer_3(ByteU5BU5D_t4116647657* value)
	{
		___s_StringReaderBuffer_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_StringReaderBuffer_3), value);
	}

	inline static int32_t get_offset_of_s_Encoding_4() { return static_cast<int32_t>(offsetof(NetworkReader_t1574750186_StaticFields, ___s_Encoding_4)); }
	inline Encoding_t1523322056 * get_s_Encoding_4() const { return ___s_Encoding_4; }
	inline Encoding_t1523322056 ** get_address_of_s_Encoding_4() { return &___s_Encoding_4; }
	inline void set_s_Encoding_4(Encoding_t1523322056 * value)
	{
		___s_Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_Encoding_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKREADER_T1574750186_H
#ifndef NETWORKSERVER_T2920297688_H
#define NETWORKSERVER_T2920297688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkServer
struct  NetworkServer_t2920297688  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Networking.NetworkServer::m_LocalClientActive
	bool ___m_LocalClientActive_4;
	// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection> UnityEngine.Networking.NetworkServer::m_LocalConnectionsFakeList
	List_1_t4177294833 * ___m_LocalConnectionsFakeList_5;
	// UnityEngine.Networking.ULocalConnectionToClient UnityEngine.Networking.NetworkServer::m_LocalConnection
	ULocalConnectionToClient_t1858816613 * ___m_LocalConnection_6;
	// UnityEngine.Networking.NetworkScene UnityEngine.Networking.NetworkServer::m_NetworkScene
	NetworkScene_t3519296737 * ___m_NetworkScene_7;
	// System.Collections.Generic.HashSet`1<System.Int32> UnityEngine.Networking.NetworkServer::m_ExternalConnections
	HashSet_1_t1515895227 * ___m_ExternalConnections_8;
	// UnityEngine.Networking.NetworkServer/ServerSimpleWrapper UnityEngine.Networking.NetworkServer::m_SimpleServerSimple
	ServerSimpleWrapper_t3640015215 * ___m_SimpleServerSimple_9;
	// System.Single UnityEngine.Networking.NetworkServer::m_MaxDelay
	float ___m_MaxDelay_10;
	// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkInstanceId> UnityEngine.Networking.NetworkServer::m_RemoveList
	HashSet_1_t3646266945 * ___m_RemoveList_11;
	// System.Int32 UnityEngine.Networking.NetworkServer::m_RemoveListCount
	int32_t ___m_RemoveListCount_12;

public:
	inline static int32_t get_offset_of_m_LocalClientActive_4() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688, ___m_LocalClientActive_4)); }
	inline bool get_m_LocalClientActive_4() const { return ___m_LocalClientActive_4; }
	inline bool* get_address_of_m_LocalClientActive_4() { return &___m_LocalClientActive_4; }
	inline void set_m_LocalClientActive_4(bool value)
	{
		___m_LocalClientActive_4 = value;
	}

	inline static int32_t get_offset_of_m_LocalConnectionsFakeList_5() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688, ___m_LocalConnectionsFakeList_5)); }
	inline List_1_t4177294833 * get_m_LocalConnectionsFakeList_5() const { return ___m_LocalConnectionsFakeList_5; }
	inline List_1_t4177294833 ** get_address_of_m_LocalConnectionsFakeList_5() { return &___m_LocalConnectionsFakeList_5; }
	inline void set_m_LocalConnectionsFakeList_5(List_1_t4177294833 * value)
	{
		___m_LocalConnectionsFakeList_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_LocalConnectionsFakeList_5), value);
	}

	inline static int32_t get_offset_of_m_LocalConnection_6() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688, ___m_LocalConnection_6)); }
	inline ULocalConnectionToClient_t1858816613 * get_m_LocalConnection_6() const { return ___m_LocalConnection_6; }
	inline ULocalConnectionToClient_t1858816613 ** get_address_of_m_LocalConnection_6() { return &___m_LocalConnection_6; }
	inline void set_m_LocalConnection_6(ULocalConnectionToClient_t1858816613 * value)
	{
		___m_LocalConnection_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_LocalConnection_6), value);
	}

	inline static int32_t get_offset_of_m_NetworkScene_7() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688, ___m_NetworkScene_7)); }
	inline NetworkScene_t3519296737 * get_m_NetworkScene_7() const { return ___m_NetworkScene_7; }
	inline NetworkScene_t3519296737 ** get_address_of_m_NetworkScene_7() { return &___m_NetworkScene_7; }
	inline void set_m_NetworkScene_7(NetworkScene_t3519296737 * value)
	{
		___m_NetworkScene_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_NetworkScene_7), value);
	}

	inline static int32_t get_offset_of_m_ExternalConnections_8() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688, ___m_ExternalConnections_8)); }
	inline HashSet_1_t1515895227 * get_m_ExternalConnections_8() const { return ___m_ExternalConnections_8; }
	inline HashSet_1_t1515895227 ** get_address_of_m_ExternalConnections_8() { return &___m_ExternalConnections_8; }
	inline void set_m_ExternalConnections_8(HashSet_1_t1515895227 * value)
	{
		___m_ExternalConnections_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_ExternalConnections_8), value);
	}

	inline static int32_t get_offset_of_m_SimpleServerSimple_9() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688, ___m_SimpleServerSimple_9)); }
	inline ServerSimpleWrapper_t3640015215 * get_m_SimpleServerSimple_9() const { return ___m_SimpleServerSimple_9; }
	inline ServerSimpleWrapper_t3640015215 ** get_address_of_m_SimpleServerSimple_9() { return &___m_SimpleServerSimple_9; }
	inline void set_m_SimpleServerSimple_9(ServerSimpleWrapper_t3640015215 * value)
	{
		___m_SimpleServerSimple_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_SimpleServerSimple_9), value);
	}

	inline static int32_t get_offset_of_m_MaxDelay_10() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688, ___m_MaxDelay_10)); }
	inline float get_m_MaxDelay_10() const { return ___m_MaxDelay_10; }
	inline float* get_address_of_m_MaxDelay_10() { return &___m_MaxDelay_10; }
	inline void set_m_MaxDelay_10(float value)
	{
		___m_MaxDelay_10 = value;
	}

	inline static int32_t get_offset_of_m_RemoveList_11() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688, ___m_RemoveList_11)); }
	inline HashSet_1_t3646266945 * get_m_RemoveList_11() const { return ___m_RemoveList_11; }
	inline HashSet_1_t3646266945 ** get_address_of_m_RemoveList_11() { return &___m_RemoveList_11; }
	inline void set_m_RemoveList_11(HashSet_1_t3646266945 * value)
	{
		___m_RemoveList_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_RemoveList_11), value);
	}

	inline static int32_t get_offset_of_m_RemoveListCount_12() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688, ___m_RemoveListCount_12)); }
	inline int32_t get_m_RemoveListCount_12() const { return ___m_RemoveListCount_12; }
	inline int32_t* get_address_of_m_RemoveListCount_12() { return &___m_RemoveListCount_12; }
	inline void set_m_RemoveListCount_12(int32_t value)
	{
		___m_RemoveListCount_12 = value;
	}
};

struct NetworkServer_t2920297688_StaticFields
{
public:
	// System.Boolean UnityEngine.Networking.NetworkServer::s_Active
	bool ___s_Active_0;
	// UnityEngine.Networking.NetworkServer modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngine.Networking.NetworkServer::s_Instance
	NetworkServer_t2920297688 * ___s_Instance_1;
	// System.Object UnityEngine.Networking.NetworkServer::s_Sync
	RuntimeObject * ___s_Sync_2;
	// System.Boolean UnityEngine.Networking.NetworkServer::m_DontListen
	bool ___m_DontListen_3;
	// System.UInt16 UnityEngine.Networking.NetworkServer::maxPacketSize
	uint16_t ___maxPacketSize_14;
	// UnityEngine.Networking.NetworkSystem.RemovePlayerMessage UnityEngine.Networking.NetworkServer::s_RemovePlayerMessage
	RemovePlayerMessage_t1120190071 * ___s_RemovePlayerMessage_15;
	// UnityEngine.Networking.NetworkMessageDelegate UnityEngine.Networking.NetworkServer::<>f__mg$cache0
	NetworkMessageDelegate_t360140524 * ___U3CU3Ef__mgU24cache0_16;
	// UnityEngine.Networking.NetworkMessageDelegate UnityEngine.Networking.NetworkServer::<>f__mg$cache1
	NetworkMessageDelegate_t360140524 * ___U3CU3Ef__mgU24cache1_17;
	// UnityEngine.Networking.NetworkMessageDelegate UnityEngine.Networking.NetworkServer::<>f__mg$cache2
	NetworkMessageDelegate_t360140524 * ___U3CU3Ef__mgU24cache2_18;
	// UnityEngine.Networking.NetworkMessageDelegate UnityEngine.Networking.NetworkServer::<>f__mg$cache3
	NetworkMessageDelegate_t360140524 * ___U3CU3Ef__mgU24cache3_19;
	// UnityEngine.Networking.NetworkMessageDelegate UnityEngine.Networking.NetworkServer::<>f__mg$cache4
	NetworkMessageDelegate_t360140524 * ___U3CU3Ef__mgU24cache4_20;
	// UnityEngine.Networking.NetworkMessageDelegate UnityEngine.Networking.NetworkServer::<>f__mg$cache5
	NetworkMessageDelegate_t360140524 * ___U3CU3Ef__mgU24cache5_21;
	// UnityEngine.Networking.NetworkMessageDelegate UnityEngine.Networking.NetworkServer::<>f__mg$cache6
	NetworkMessageDelegate_t360140524 * ___U3CU3Ef__mgU24cache6_22;
	// UnityEngine.Networking.NetworkMessageDelegate UnityEngine.Networking.NetworkServer::<>f__mg$cache7
	NetworkMessageDelegate_t360140524 * ___U3CU3Ef__mgU24cache7_23;
	// UnityEngine.Networking.NetworkMessageDelegate UnityEngine.Networking.NetworkServer::<>f__mg$cache8
	NetworkMessageDelegate_t360140524 * ___U3CU3Ef__mgU24cache8_24;

public:
	inline static int32_t get_offset_of_s_Active_0() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688_StaticFields, ___s_Active_0)); }
	inline bool get_s_Active_0() const { return ___s_Active_0; }
	inline bool* get_address_of_s_Active_0() { return &___s_Active_0; }
	inline void set_s_Active_0(bool value)
	{
		___s_Active_0 = value;
	}

	inline static int32_t get_offset_of_s_Instance_1() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688_StaticFields, ___s_Instance_1)); }
	inline NetworkServer_t2920297688 * get_s_Instance_1() const { return ___s_Instance_1; }
	inline NetworkServer_t2920297688 ** get_address_of_s_Instance_1() { return &___s_Instance_1; }
	inline void set_s_Instance_1(NetworkServer_t2920297688 * value)
	{
		___s_Instance_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_Instance_1), value);
	}

	inline static int32_t get_offset_of_s_Sync_2() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688_StaticFields, ___s_Sync_2)); }
	inline RuntimeObject * get_s_Sync_2() const { return ___s_Sync_2; }
	inline RuntimeObject ** get_address_of_s_Sync_2() { return &___s_Sync_2; }
	inline void set_s_Sync_2(RuntimeObject * value)
	{
		___s_Sync_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_Sync_2), value);
	}

	inline static int32_t get_offset_of_m_DontListen_3() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688_StaticFields, ___m_DontListen_3)); }
	inline bool get_m_DontListen_3() const { return ___m_DontListen_3; }
	inline bool* get_address_of_m_DontListen_3() { return &___m_DontListen_3; }
	inline void set_m_DontListen_3(bool value)
	{
		___m_DontListen_3 = value;
	}

	inline static int32_t get_offset_of_maxPacketSize_14() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688_StaticFields, ___maxPacketSize_14)); }
	inline uint16_t get_maxPacketSize_14() const { return ___maxPacketSize_14; }
	inline uint16_t* get_address_of_maxPacketSize_14() { return &___maxPacketSize_14; }
	inline void set_maxPacketSize_14(uint16_t value)
	{
		___maxPacketSize_14 = value;
	}

	inline static int32_t get_offset_of_s_RemovePlayerMessage_15() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688_StaticFields, ___s_RemovePlayerMessage_15)); }
	inline RemovePlayerMessage_t1120190071 * get_s_RemovePlayerMessage_15() const { return ___s_RemovePlayerMessage_15; }
	inline RemovePlayerMessage_t1120190071 ** get_address_of_s_RemovePlayerMessage_15() { return &___s_RemovePlayerMessage_15; }
	inline void set_s_RemovePlayerMessage_15(RemovePlayerMessage_t1120190071 * value)
	{
		___s_RemovePlayerMessage_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_RemovePlayerMessage_15), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_16() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688_StaticFields, ___U3CU3Ef__mgU24cache0_16)); }
	inline NetworkMessageDelegate_t360140524 * get_U3CU3Ef__mgU24cache0_16() const { return ___U3CU3Ef__mgU24cache0_16; }
	inline NetworkMessageDelegate_t360140524 ** get_address_of_U3CU3Ef__mgU24cache0_16() { return &___U3CU3Ef__mgU24cache0_16; }
	inline void set_U3CU3Ef__mgU24cache0_16(NetworkMessageDelegate_t360140524 * value)
	{
		___U3CU3Ef__mgU24cache0_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_16), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_17() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688_StaticFields, ___U3CU3Ef__mgU24cache1_17)); }
	inline NetworkMessageDelegate_t360140524 * get_U3CU3Ef__mgU24cache1_17() const { return ___U3CU3Ef__mgU24cache1_17; }
	inline NetworkMessageDelegate_t360140524 ** get_address_of_U3CU3Ef__mgU24cache1_17() { return &___U3CU3Ef__mgU24cache1_17; }
	inline void set_U3CU3Ef__mgU24cache1_17(NetworkMessageDelegate_t360140524 * value)
	{
		___U3CU3Ef__mgU24cache1_17 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_17), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_18() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688_StaticFields, ___U3CU3Ef__mgU24cache2_18)); }
	inline NetworkMessageDelegate_t360140524 * get_U3CU3Ef__mgU24cache2_18() const { return ___U3CU3Ef__mgU24cache2_18; }
	inline NetworkMessageDelegate_t360140524 ** get_address_of_U3CU3Ef__mgU24cache2_18() { return &___U3CU3Ef__mgU24cache2_18; }
	inline void set_U3CU3Ef__mgU24cache2_18(NetworkMessageDelegate_t360140524 * value)
	{
		___U3CU3Ef__mgU24cache2_18 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_18), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_19() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688_StaticFields, ___U3CU3Ef__mgU24cache3_19)); }
	inline NetworkMessageDelegate_t360140524 * get_U3CU3Ef__mgU24cache3_19() const { return ___U3CU3Ef__mgU24cache3_19; }
	inline NetworkMessageDelegate_t360140524 ** get_address_of_U3CU3Ef__mgU24cache3_19() { return &___U3CU3Ef__mgU24cache3_19; }
	inline void set_U3CU3Ef__mgU24cache3_19(NetworkMessageDelegate_t360140524 * value)
	{
		___U3CU3Ef__mgU24cache3_19 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_19), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_20() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688_StaticFields, ___U3CU3Ef__mgU24cache4_20)); }
	inline NetworkMessageDelegate_t360140524 * get_U3CU3Ef__mgU24cache4_20() const { return ___U3CU3Ef__mgU24cache4_20; }
	inline NetworkMessageDelegate_t360140524 ** get_address_of_U3CU3Ef__mgU24cache4_20() { return &___U3CU3Ef__mgU24cache4_20; }
	inline void set_U3CU3Ef__mgU24cache4_20(NetworkMessageDelegate_t360140524 * value)
	{
		___U3CU3Ef__mgU24cache4_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4_20), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_21() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688_StaticFields, ___U3CU3Ef__mgU24cache5_21)); }
	inline NetworkMessageDelegate_t360140524 * get_U3CU3Ef__mgU24cache5_21() const { return ___U3CU3Ef__mgU24cache5_21; }
	inline NetworkMessageDelegate_t360140524 ** get_address_of_U3CU3Ef__mgU24cache5_21() { return &___U3CU3Ef__mgU24cache5_21; }
	inline void set_U3CU3Ef__mgU24cache5_21(NetworkMessageDelegate_t360140524 * value)
	{
		___U3CU3Ef__mgU24cache5_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache5_21), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_22() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688_StaticFields, ___U3CU3Ef__mgU24cache6_22)); }
	inline NetworkMessageDelegate_t360140524 * get_U3CU3Ef__mgU24cache6_22() const { return ___U3CU3Ef__mgU24cache6_22; }
	inline NetworkMessageDelegate_t360140524 ** get_address_of_U3CU3Ef__mgU24cache6_22() { return &___U3CU3Ef__mgU24cache6_22; }
	inline void set_U3CU3Ef__mgU24cache6_22(NetworkMessageDelegate_t360140524 * value)
	{
		___U3CU3Ef__mgU24cache6_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache6_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7_23() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688_StaticFields, ___U3CU3Ef__mgU24cache7_23)); }
	inline NetworkMessageDelegate_t360140524 * get_U3CU3Ef__mgU24cache7_23() const { return ___U3CU3Ef__mgU24cache7_23; }
	inline NetworkMessageDelegate_t360140524 ** get_address_of_U3CU3Ef__mgU24cache7_23() { return &___U3CU3Ef__mgU24cache7_23; }
	inline void set_U3CU3Ef__mgU24cache7_23(NetworkMessageDelegate_t360140524 * value)
	{
		___U3CU3Ef__mgU24cache7_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache7_23), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8_24() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688_StaticFields, ___U3CU3Ef__mgU24cache8_24)); }
	inline NetworkMessageDelegate_t360140524 * get_U3CU3Ef__mgU24cache8_24() const { return ___U3CU3Ef__mgU24cache8_24; }
	inline NetworkMessageDelegate_t360140524 ** get_address_of_U3CU3Ef__mgU24cache8_24() { return &___U3CU3Ef__mgU24cache8_24; }
	inline void set_U3CU3Ef__mgU24cache8_24(NetworkMessageDelegate_t360140524 * value)
	{
		___U3CU3Ef__mgU24cache8_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache8_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKSERVER_T2920297688_H
#ifndef PLAYERCONTROLLER_T496487816_H
#define PLAYERCONTROLLER_T496487816_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerController
struct  PlayerController_t496487816  : public RuntimeObject
{
public:
	// System.Int16 UnityEngine.Networking.PlayerController::playerControllerId
	int16_t ___playerControllerId_1;
	// UnityEngine.Networking.NetworkIdentity UnityEngine.Networking.PlayerController::unetView
	NetworkIdentity_t3299519057 * ___unetView_2;
	// UnityEngine.GameObject UnityEngine.Networking.PlayerController::gameObject
	GameObject_t1113636619 * ___gameObject_3;

public:
	inline static int32_t get_offset_of_playerControllerId_1() { return static_cast<int32_t>(offsetof(PlayerController_t496487816, ___playerControllerId_1)); }
	inline int16_t get_playerControllerId_1() const { return ___playerControllerId_1; }
	inline int16_t* get_address_of_playerControllerId_1() { return &___playerControllerId_1; }
	inline void set_playerControllerId_1(int16_t value)
	{
		___playerControllerId_1 = value;
	}

	inline static int32_t get_offset_of_unetView_2() { return static_cast<int32_t>(offsetof(PlayerController_t496487816, ___unetView_2)); }
	inline NetworkIdentity_t3299519057 * get_unetView_2() const { return ___unetView_2; }
	inline NetworkIdentity_t3299519057 ** get_address_of_unetView_2() { return &___unetView_2; }
	inline void set_unetView_2(NetworkIdentity_t3299519057 * value)
	{
		___unetView_2 = value;
		Il2CppCodeGenWriteBarrier((&___unetView_2), value);
	}

	inline static int32_t get_offset_of_gameObject_3() { return static_cast<int32_t>(offsetof(PlayerController_t496487816, ___gameObject_3)); }
	inline GameObject_t1113636619 * get_gameObject_3() const { return ___gameObject_3; }
	inline GameObject_t1113636619 ** get_address_of_gameObject_3() { return &___gameObject_3; }
	inline void set_gameObject_3(GameObject_t1113636619 * value)
	{
		___gameObject_3 = value;
		Il2CppCodeGenWriteBarrier((&___gameObject_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONTROLLER_T496487816_H
#ifndef SYNCLIST_1_T2187079102_H
#define SYNCLIST_1_T2187079102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.SyncList`1<System.Boolean>
struct  SyncList_1_t2187079102  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.Networking.SyncList`1::m_Objects
	List_1_t1569362707 * ___m_Objects_0;
	// UnityEngine.Networking.NetworkBehaviour UnityEngine.Networking.SyncList`1::m_Behaviour
	NetworkBehaviour_t204670959 * ___m_Behaviour_1;
	// System.Int32 UnityEngine.Networking.SyncList`1::m_CmdHash
	int32_t ___m_CmdHash_2;
	// UnityEngine.Networking.SyncList`1/SyncListChanged<T> UnityEngine.Networking.SyncList`1::m_Callback
	SyncListChanged_t543615847 * ___m_Callback_3;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(SyncList_1_t2187079102, ___m_Objects_0)); }
	inline List_1_t1569362707 * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_t1569362707 ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_t1569362707 * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Objects_0), value);
	}

	inline static int32_t get_offset_of_m_Behaviour_1() { return static_cast<int32_t>(offsetof(SyncList_1_t2187079102, ___m_Behaviour_1)); }
	inline NetworkBehaviour_t204670959 * get_m_Behaviour_1() const { return ___m_Behaviour_1; }
	inline NetworkBehaviour_t204670959 ** get_address_of_m_Behaviour_1() { return &___m_Behaviour_1; }
	inline void set_m_Behaviour_1(NetworkBehaviour_t204670959 * value)
	{
		___m_Behaviour_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Behaviour_1), value);
	}

	inline static int32_t get_offset_of_m_CmdHash_2() { return static_cast<int32_t>(offsetof(SyncList_1_t2187079102, ___m_CmdHash_2)); }
	inline int32_t get_m_CmdHash_2() const { return ___m_CmdHash_2; }
	inline int32_t* get_address_of_m_CmdHash_2() { return &___m_CmdHash_2; }
	inline void set_m_CmdHash_2(int32_t value)
	{
		___m_CmdHash_2 = value;
	}

	inline static int32_t get_offset_of_m_Callback_3() { return static_cast<int32_t>(offsetof(SyncList_1_t2187079102, ___m_Callback_3)); }
	inline SyncListChanged_t543615847 * get_m_Callback_3() const { return ___m_Callback_3; }
	inline SyncListChanged_t543615847 ** get_address_of_m_Callback_3() { return &___m_Callback_3; }
	inline void set_m_Callback_3(SyncListChanged_t543615847 * value)
	{
		___m_Callback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Callback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCLIST_1_T2187079102_H
#ifndef SYNCLIST_1_T745769594_H
#define SYNCLIST_1_T745769594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.SyncList`1<System.Int32>
struct  SyncList_1_t745769594  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.Networking.SyncList`1::m_Objects
	List_1_t128053199 * ___m_Objects_0;
	// UnityEngine.Networking.NetworkBehaviour UnityEngine.Networking.SyncList`1::m_Behaviour
	NetworkBehaviour_t204670959 * ___m_Behaviour_1;
	// System.Int32 UnityEngine.Networking.SyncList`1::m_CmdHash
	int32_t ___m_CmdHash_2;
	// UnityEngine.Networking.SyncList`1/SyncListChanged<T> UnityEngine.Networking.SyncList`1::m_Callback
	SyncListChanged_t3397273635 * ___m_Callback_3;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(SyncList_1_t745769594, ___m_Objects_0)); }
	inline List_1_t128053199 * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_t128053199 ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_t128053199 * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Objects_0), value);
	}

	inline static int32_t get_offset_of_m_Behaviour_1() { return static_cast<int32_t>(offsetof(SyncList_1_t745769594, ___m_Behaviour_1)); }
	inline NetworkBehaviour_t204670959 * get_m_Behaviour_1() const { return ___m_Behaviour_1; }
	inline NetworkBehaviour_t204670959 ** get_address_of_m_Behaviour_1() { return &___m_Behaviour_1; }
	inline void set_m_Behaviour_1(NetworkBehaviour_t204670959 * value)
	{
		___m_Behaviour_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Behaviour_1), value);
	}

	inline static int32_t get_offset_of_m_CmdHash_2() { return static_cast<int32_t>(offsetof(SyncList_1_t745769594, ___m_CmdHash_2)); }
	inline int32_t get_m_CmdHash_2() const { return ___m_CmdHash_2; }
	inline int32_t* get_address_of_m_CmdHash_2() { return &___m_CmdHash_2; }
	inline void set_m_CmdHash_2(int32_t value)
	{
		___m_CmdHash_2 = value;
	}

	inline static int32_t get_offset_of_m_Callback_3() { return static_cast<int32_t>(offsetof(SyncList_1_t745769594, ___m_Callback_3)); }
	inline SyncListChanged_t3397273635 * get_m_Callback_3() const { return ___m_Callback_3; }
	inline SyncListChanged_t3397273635 ** get_address_of_m_Callback_3() { return &___m_Callback_3; }
	inline void set_m_Callback_3(SyncListChanged_t3397273635 * value)
	{
		___m_Callback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Callback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCLIST_1_T745769594_H
#ifndef SYNCLIST_1_T3487057911_H
#define SYNCLIST_1_T3487057911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.SyncList`1<System.Single>
struct  SyncList_1_t3487057911  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.Networking.SyncList`1::m_Objects
	List_1_t2869341516 * ___m_Objects_0;
	// UnityEngine.Networking.NetworkBehaviour UnityEngine.Networking.SyncList`1::m_Behaviour
	NetworkBehaviour_t204670959 * ___m_Behaviour_1;
	// System.Int32 UnityEngine.Networking.SyncList`1::m_CmdHash
	int32_t ___m_CmdHash_2;
	// UnityEngine.Networking.SyncList`1/SyncListChanged<T> UnityEngine.Networking.SyncList`1::m_Callback
	SyncListChanged_t1843594656 * ___m_Callback_3;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(SyncList_1_t3487057911, ___m_Objects_0)); }
	inline List_1_t2869341516 * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_t2869341516 ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_t2869341516 * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Objects_0), value);
	}

	inline static int32_t get_offset_of_m_Behaviour_1() { return static_cast<int32_t>(offsetof(SyncList_1_t3487057911, ___m_Behaviour_1)); }
	inline NetworkBehaviour_t204670959 * get_m_Behaviour_1() const { return ___m_Behaviour_1; }
	inline NetworkBehaviour_t204670959 ** get_address_of_m_Behaviour_1() { return &___m_Behaviour_1; }
	inline void set_m_Behaviour_1(NetworkBehaviour_t204670959 * value)
	{
		___m_Behaviour_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Behaviour_1), value);
	}

	inline static int32_t get_offset_of_m_CmdHash_2() { return static_cast<int32_t>(offsetof(SyncList_1_t3487057911, ___m_CmdHash_2)); }
	inline int32_t get_m_CmdHash_2() const { return ___m_CmdHash_2; }
	inline int32_t* get_address_of_m_CmdHash_2() { return &___m_CmdHash_2; }
	inline void set_m_CmdHash_2(int32_t value)
	{
		___m_CmdHash_2 = value;
	}

	inline static int32_t get_offset_of_m_Callback_3() { return static_cast<int32_t>(offsetof(SyncList_1_t3487057911, ___m_Callback_3)); }
	inline SyncListChanged_t1843594656 * get_m_Callback_3() const { return ___m_Callback_3; }
	inline SyncListChanged_t1843594656 ** get_address_of_m_Callback_3() { return &___m_Callback_3; }
	inline void set_m_Callback_3(SyncListChanged_t1843594656 * value)
	{
		___m_Callback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Callback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCLIST_1_T3487057911_H
#ifndef SYNCLIST_1_T3937241826_H
#define SYNCLIST_1_T3937241826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.SyncList`1<System.String>
struct  SyncList_1_t3937241826  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.Networking.SyncList`1::m_Objects
	List_1_t3319525431 * ___m_Objects_0;
	// UnityEngine.Networking.NetworkBehaviour UnityEngine.Networking.SyncList`1::m_Behaviour
	NetworkBehaviour_t204670959 * ___m_Behaviour_1;
	// System.Int32 UnityEngine.Networking.SyncList`1::m_CmdHash
	int32_t ___m_CmdHash_2;
	// UnityEngine.Networking.SyncList`1/SyncListChanged<T> UnityEngine.Networking.SyncList`1::m_Callback
	SyncListChanged_t2293778571 * ___m_Callback_3;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(SyncList_1_t3937241826, ___m_Objects_0)); }
	inline List_1_t3319525431 * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_t3319525431 ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_t3319525431 * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Objects_0), value);
	}

	inline static int32_t get_offset_of_m_Behaviour_1() { return static_cast<int32_t>(offsetof(SyncList_1_t3937241826, ___m_Behaviour_1)); }
	inline NetworkBehaviour_t204670959 * get_m_Behaviour_1() const { return ___m_Behaviour_1; }
	inline NetworkBehaviour_t204670959 ** get_address_of_m_Behaviour_1() { return &___m_Behaviour_1; }
	inline void set_m_Behaviour_1(NetworkBehaviour_t204670959 * value)
	{
		___m_Behaviour_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Behaviour_1), value);
	}

	inline static int32_t get_offset_of_m_CmdHash_2() { return static_cast<int32_t>(offsetof(SyncList_1_t3937241826, ___m_CmdHash_2)); }
	inline int32_t get_m_CmdHash_2() const { return ___m_CmdHash_2; }
	inline int32_t* get_address_of_m_CmdHash_2() { return &___m_CmdHash_2; }
	inline void set_m_CmdHash_2(int32_t value)
	{
		___m_CmdHash_2 = value;
	}

	inline static int32_t get_offset_of_m_Callback_3() { return static_cast<int32_t>(offsetof(SyncList_1_t3937241826, ___m_Callback_3)); }
	inline SyncListChanged_t2293778571 * get_m_Callback_3() const { return ___m_Callback_3; }
	inline SyncListChanged_t2293778571 ** get_address_of_m_Callback_3() { return &___m_Callback_3; }
	inline void set_m_Callback_3(SyncListChanged_t2293778571 * value)
	{
		___m_Callback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Callback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCLIST_1_T3937241826_H
#ifndef SYNCLIST_1_T354885819_H
#define SYNCLIST_1_T354885819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.SyncList`1<System.UInt32>
struct  SyncList_1_t354885819  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.Networking.SyncList`1::m_Objects
	List_1_t4032136720 * ___m_Objects_0;
	// UnityEngine.Networking.NetworkBehaviour UnityEngine.Networking.SyncList`1::m_Behaviour
	NetworkBehaviour_t204670959 * ___m_Behaviour_1;
	// System.Int32 UnityEngine.Networking.SyncList`1::m_CmdHash
	int32_t ___m_CmdHash_2;
	// UnityEngine.Networking.SyncList`1/SyncListChanged<T> UnityEngine.Networking.SyncList`1::m_Callback
	SyncListChanged_t3006389860 * ___m_Callback_3;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(SyncList_1_t354885819, ___m_Objects_0)); }
	inline List_1_t4032136720 * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_t4032136720 ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_t4032136720 * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Objects_0), value);
	}

	inline static int32_t get_offset_of_m_Behaviour_1() { return static_cast<int32_t>(offsetof(SyncList_1_t354885819, ___m_Behaviour_1)); }
	inline NetworkBehaviour_t204670959 * get_m_Behaviour_1() const { return ___m_Behaviour_1; }
	inline NetworkBehaviour_t204670959 ** get_address_of_m_Behaviour_1() { return &___m_Behaviour_1; }
	inline void set_m_Behaviour_1(NetworkBehaviour_t204670959 * value)
	{
		___m_Behaviour_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Behaviour_1), value);
	}

	inline static int32_t get_offset_of_m_CmdHash_2() { return static_cast<int32_t>(offsetof(SyncList_1_t354885819, ___m_CmdHash_2)); }
	inline int32_t get_m_CmdHash_2() const { return ___m_CmdHash_2; }
	inline int32_t* get_address_of_m_CmdHash_2() { return &___m_CmdHash_2; }
	inline void set_m_CmdHash_2(int32_t value)
	{
		___m_CmdHash_2 = value;
	}

	inline static int32_t get_offset_of_m_Callback_3() { return static_cast<int32_t>(offsetof(SyncList_1_t354885819, ___m_Callback_3)); }
	inline SyncListChanged_t3006389860 * get_m_Callback_3() const { return ___m_Callback_3; }
	inline SyncListChanged_t3006389860 ** get_address_of_m_Callback_3() { return &___m_Callback_3; }
	inline void set_m_Callback_3(SyncListChanged_t3006389860 * value)
	{
		___m_Callback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Callback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCLIST_1_T354885819_H
#ifndef ARRAYSEGMENT_1_T283560987_H
#define ARRAYSEGMENT_1_T283560987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArraySegment`1<System.Byte>
struct  ArraySegment_1_t283560987 
{
public:
	// T[] System.ArraySegment`1::array
	ByteU5BU5D_t4116647657* ___array_0;
	// System.Int32 System.ArraySegment`1::offset
	int32_t ___offset_1;
	// System.Int32 System.ArraySegment`1::count
	int32_t ___count_2;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(ArraySegment_1_t283560987, ___array_0)); }
	inline ByteU5BU5D_t4116647657* get_array_0() const { return ___array_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(ByteU5BU5D_t4116647657* value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier((&___array_0), value);
	}

	inline static int32_t get_offset_of_offset_1() { return static_cast<int32_t>(offsetof(ArraySegment_1_t283560987, ___offset_1)); }
	inline int32_t get_offset_1() const { return ___offset_1; }
	inline int32_t* get_address_of_offset_1() { return &___offset_1; }
	inline void set_offset_1(int32_t value)
	{
		___offset_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(ArraySegment_1_t283560987, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYSEGMENT_1_T283560987_H
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
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef DECIMAL_T2948259380_H
#define DECIMAL_T2948259380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2948259380 
{
public:
	// System.UInt32 System.Decimal::flags
	uint32_t ___flags_5;
	// System.UInt32 System.Decimal::hi
	uint32_t ___hi_6;
	// System.UInt32 System.Decimal::lo
	uint32_t ___lo_7;
	// System.UInt32 System.Decimal::mid
	uint32_t ___mid_8;

public:
	inline static int32_t get_offset_of_flags_5() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___flags_5)); }
	inline uint32_t get_flags_5() const { return ___flags_5; }
	inline uint32_t* get_address_of_flags_5() { return &___flags_5; }
	inline void set_flags_5(uint32_t value)
	{
		___flags_5 = value;
	}

	inline static int32_t get_offset_of_hi_6() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___hi_6)); }
	inline uint32_t get_hi_6() const { return ___hi_6; }
	inline uint32_t* get_address_of_hi_6() { return &___hi_6; }
	inline void set_hi_6(uint32_t value)
	{
		___hi_6 = value;
	}

	inline static int32_t get_offset_of_lo_7() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___lo_7)); }
	inline uint32_t get_lo_7() const { return ___lo_7; }
	inline uint32_t* get_address_of_lo_7() { return &___lo_7; }
	inline void set_lo_7(uint32_t value)
	{
		___lo_7 = value;
	}

	inline static int32_t get_offset_of_mid_8() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___mid_8)); }
	inline uint32_t get_mid_8() const { return ___mid_8; }
	inline uint32_t* get_address_of_mid_8() { return &___mid_8; }
	inline void set_mid_8(uint32_t value)
	{
		___mid_8 = value;
	}
};

struct Decimal_t2948259380_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t2948259380  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2948259380  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2948259380  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t2948259380  ___One_3;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t2948259380  ___MaxValueDiv10_4;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinValue_0)); }
	inline Decimal_t2948259380  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t2948259380 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t2948259380  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValue_1)); }
	inline Decimal_t2948259380  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t2948259380 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t2948259380  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinusOne_2)); }
	inline Decimal_t2948259380  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t2948259380 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t2948259380  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___One_3)); }
	inline Decimal_t2948259380  get_One_3() const { return ___One_3; }
	inline Decimal_t2948259380 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t2948259380  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_4() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValueDiv10_4)); }
	inline Decimal_t2948259380  get_MaxValueDiv10_4() const { return ___MaxValueDiv10_4; }
	inline Decimal_t2948259380 * get_address_of_MaxValueDiv10_4() { return &___MaxValueDiv10_4; }
	inline void set_MaxValueDiv10_4(Decimal_t2948259380  value)
	{
		___MaxValueDiv10_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2948259380_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
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
#ifndef INT16_T2552820387_H
#define INT16_T2552820387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2552820387 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int16_t2552820387, ___m_value_2)); }
	inline int16_t get_m_value_2() const { return ___m_value_2; }
	inline int16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T2552820387_H
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
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
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
#ifndef SBYTE_T1669577662_H
#define SBYTE_T1669577662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SByte
struct  SByte_t1669577662 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t1669577662, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTE_T1669577662_H
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
#ifndef UTF8ENCODING_T3956466879_H
#define UTF8ENCODING_T3956466879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF8Encoding
struct  UTF8Encoding_t3956466879  : public Encoding_t1523322056
{
public:
	// System.Boolean System.Text.UTF8Encoding::emitIdentifier
	bool ___emitIdentifier_29;

public:
	inline static int32_t get_offset_of_emitIdentifier_29() { return static_cast<int32_t>(offsetof(UTF8Encoding_t3956466879, ___emitIdentifier_29)); }
	inline bool get_emitIdentifier_29() const { return ___emitIdentifier_29; }
	inline bool* get_address_of_emitIdentifier_29() { return &___emitIdentifier_29; }
	inline void set_emitIdentifier_29(bool value)
	{
		___emitIdentifier_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF8ENCODING_T3956466879_H
#ifndef UINT16_T2177724958_H
#define UINT16_T2177724958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2177724958 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt16_t2177724958, ___m_value_2)); }
	inline uint16_t get_m_value_2() const { return ___m_value_2; }
	inline uint16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T2177724958_H
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
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_2)); }
	inline uint64_t get_m_value_2() const { return ___m_value_2; }
	inline uint64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
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
#ifndef COLOR32_T2600501292_H
#define COLOR32_T2600501292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct  Color32_t2600501292 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T2600501292_H
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
#ifndef NETWORKHASH128_T2391674535_H
#define NETWORKHASH128_T2391674535_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkHash128
struct  NetworkHash128_t2391674535 
{
public:
	// System.Byte UnityEngine.Networking.NetworkHash128::i0
	uint8_t ___i0_0;
	// System.Byte UnityEngine.Networking.NetworkHash128::i1
	uint8_t ___i1_1;
	// System.Byte UnityEngine.Networking.NetworkHash128::i2
	uint8_t ___i2_2;
	// System.Byte UnityEngine.Networking.NetworkHash128::i3
	uint8_t ___i3_3;
	// System.Byte UnityEngine.Networking.NetworkHash128::i4
	uint8_t ___i4_4;
	// System.Byte UnityEngine.Networking.NetworkHash128::i5
	uint8_t ___i5_5;
	// System.Byte UnityEngine.Networking.NetworkHash128::i6
	uint8_t ___i6_6;
	// System.Byte UnityEngine.Networking.NetworkHash128::i7
	uint8_t ___i7_7;
	// System.Byte UnityEngine.Networking.NetworkHash128::i8
	uint8_t ___i8_8;
	// System.Byte UnityEngine.Networking.NetworkHash128::i9
	uint8_t ___i9_9;
	// System.Byte UnityEngine.Networking.NetworkHash128::i10
	uint8_t ___i10_10;
	// System.Byte UnityEngine.Networking.NetworkHash128::i11
	uint8_t ___i11_11;
	// System.Byte UnityEngine.Networking.NetworkHash128::i12
	uint8_t ___i12_12;
	// System.Byte UnityEngine.Networking.NetworkHash128::i13
	uint8_t ___i13_13;
	// System.Byte UnityEngine.Networking.NetworkHash128::i14
	uint8_t ___i14_14;
	// System.Byte UnityEngine.Networking.NetworkHash128::i15
	uint8_t ___i15_15;

public:
	inline static int32_t get_offset_of_i0_0() { return static_cast<int32_t>(offsetof(NetworkHash128_t2391674535, ___i0_0)); }
	inline uint8_t get_i0_0() const { return ___i0_0; }
	inline uint8_t* get_address_of_i0_0() { return &___i0_0; }
	inline void set_i0_0(uint8_t value)
	{
		___i0_0 = value;
	}

	inline static int32_t get_offset_of_i1_1() { return static_cast<int32_t>(offsetof(NetworkHash128_t2391674535, ___i1_1)); }
	inline uint8_t get_i1_1() const { return ___i1_1; }
	inline uint8_t* get_address_of_i1_1() { return &___i1_1; }
	inline void set_i1_1(uint8_t value)
	{
		___i1_1 = value;
	}

	inline static int32_t get_offset_of_i2_2() { return static_cast<int32_t>(offsetof(NetworkHash128_t2391674535, ___i2_2)); }
	inline uint8_t get_i2_2() const { return ___i2_2; }
	inline uint8_t* get_address_of_i2_2() { return &___i2_2; }
	inline void set_i2_2(uint8_t value)
	{
		___i2_2 = value;
	}

	inline static int32_t get_offset_of_i3_3() { return static_cast<int32_t>(offsetof(NetworkHash128_t2391674535, ___i3_3)); }
	inline uint8_t get_i3_3() const { return ___i3_3; }
	inline uint8_t* get_address_of_i3_3() { return &___i3_3; }
	inline void set_i3_3(uint8_t value)
	{
		___i3_3 = value;
	}

	inline static int32_t get_offset_of_i4_4() { return static_cast<int32_t>(offsetof(NetworkHash128_t2391674535, ___i4_4)); }
	inline uint8_t get_i4_4() const { return ___i4_4; }
	inline uint8_t* get_address_of_i4_4() { return &___i4_4; }
	inline void set_i4_4(uint8_t value)
	{
		___i4_4 = value;
	}

	inline static int32_t get_offset_of_i5_5() { return static_cast<int32_t>(offsetof(NetworkHash128_t2391674535, ___i5_5)); }
	inline uint8_t get_i5_5() const { return ___i5_5; }
	inline uint8_t* get_address_of_i5_5() { return &___i5_5; }
	inline void set_i5_5(uint8_t value)
	{
		___i5_5 = value;
	}

	inline static int32_t get_offset_of_i6_6() { return static_cast<int32_t>(offsetof(NetworkHash128_t2391674535, ___i6_6)); }
	inline uint8_t get_i6_6() const { return ___i6_6; }
	inline uint8_t* get_address_of_i6_6() { return &___i6_6; }
	inline void set_i6_6(uint8_t value)
	{
		___i6_6 = value;
	}

	inline static int32_t get_offset_of_i7_7() { return static_cast<int32_t>(offsetof(NetworkHash128_t2391674535, ___i7_7)); }
	inline uint8_t get_i7_7() const { return ___i7_7; }
	inline uint8_t* get_address_of_i7_7() { return &___i7_7; }
	inline void set_i7_7(uint8_t value)
	{
		___i7_7 = value;
	}

	inline static int32_t get_offset_of_i8_8() { return static_cast<int32_t>(offsetof(NetworkHash128_t2391674535, ___i8_8)); }
	inline uint8_t get_i8_8() const { return ___i8_8; }
	inline uint8_t* get_address_of_i8_8() { return &___i8_8; }
	inline void set_i8_8(uint8_t value)
	{
		___i8_8 = value;
	}

	inline static int32_t get_offset_of_i9_9() { return static_cast<int32_t>(offsetof(NetworkHash128_t2391674535, ___i9_9)); }
	inline uint8_t get_i9_9() const { return ___i9_9; }
	inline uint8_t* get_address_of_i9_9() { return &___i9_9; }
	inline void set_i9_9(uint8_t value)
	{
		___i9_9 = value;
	}

	inline static int32_t get_offset_of_i10_10() { return static_cast<int32_t>(offsetof(NetworkHash128_t2391674535, ___i10_10)); }
	inline uint8_t get_i10_10() const { return ___i10_10; }
	inline uint8_t* get_address_of_i10_10() { return &___i10_10; }
	inline void set_i10_10(uint8_t value)
	{
		___i10_10 = value;
	}

	inline static int32_t get_offset_of_i11_11() { return static_cast<int32_t>(offsetof(NetworkHash128_t2391674535, ___i11_11)); }
	inline uint8_t get_i11_11() const { return ___i11_11; }
	inline uint8_t* get_address_of_i11_11() { return &___i11_11; }
	inline void set_i11_11(uint8_t value)
	{
		___i11_11 = value;
	}

	inline static int32_t get_offset_of_i12_12() { return static_cast<int32_t>(offsetof(NetworkHash128_t2391674535, ___i12_12)); }
	inline uint8_t get_i12_12() const { return ___i12_12; }
	inline uint8_t* get_address_of_i12_12() { return &___i12_12; }
	inline void set_i12_12(uint8_t value)
	{
		___i12_12 = value;
	}

	inline static int32_t get_offset_of_i13_13() { return static_cast<int32_t>(offsetof(NetworkHash128_t2391674535, ___i13_13)); }
	inline uint8_t get_i13_13() const { return ___i13_13; }
	inline uint8_t* get_address_of_i13_13() { return &___i13_13; }
	inline void set_i13_13(uint8_t value)
	{
		___i13_13 = value;
	}

	inline static int32_t get_offset_of_i14_14() { return static_cast<int32_t>(offsetof(NetworkHash128_t2391674535, ___i14_14)); }
	inline uint8_t get_i14_14() const { return ___i14_14; }
	inline uint8_t* get_address_of_i14_14() { return &___i14_14; }
	inline void set_i14_14(uint8_t value)
	{
		___i14_14 = value;
	}

	inline static int32_t get_offset_of_i15_15() { return static_cast<int32_t>(offsetof(NetworkHash128_t2391674535, ___i15_15)); }
	inline uint8_t get_i15_15() const { return ___i15_15; }
	inline uint8_t* get_address_of_i15_15() { return &___i15_15; }
	inline void set_i15_15(uint8_t value)
	{
		___i15_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKHASH128_T2391674535_H
#ifndef NETWORKINSTANCEID_T786350175_H
#define NETWORKINSTANCEID_T786350175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkInstanceId
struct  NetworkInstanceId_t786350175 
{
public:
	// System.UInt32 UnityEngine.Networking.NetworkInstanceId::m_Value
	uint32_t ___m_Value_0;

public:
	inline static int32_t get_offset_of_m_Value_0() { return static_cast<int32_t>(offsetof(NetworkInstanceId_t786350175, ___m_Value_0)); }
	inline uint32_t get_m_Value_0() const { return ___m_Value_0; }
	inline uint32_t* get_address_of_m_Value_0() { return &___m_Value_0; }
	inline void set_m_Value_0(uint32_t value)
	{
		___m_Value_0 = value;
	}
};

struct NetworkInstanceId_t786350175_StaticFields
{
public:
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkInstanceId::Invalid
	NetworkInstanceId_t786350175  ___Invalid_1;
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkInstanceId::Zero
	NetworkInstanceId_t786350175  ___Zero_2;

public:
	inline static int32_t get_offset_of_Invalid_1() { return static_cast<int32_t>(offsetof(NetworkInstanceId_t786350175_StaticFields, ___Invalid_1)); }
	inline NetworkInstanceId_t786350175  get_Invalid_1() const { return ___Invalid_1; }
	inline NetworkInstanceId_t786350175 * get_address_of_Invalid_1() { return &___Invalid_1; }
	inline void set_Invalid_1(NetworkInstanceId_t786350175  value)
	{
		___Invalid_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(NetworkInstanceId_t786350175_StaticFields, ___Zero_2)); }
	inline NetworkInstanceId_t786350175  get_Zero_2() const { return ___Zero_2; }
	inline NetworkInstanceId_t786350175 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(NetworkInstanceId_t786350175  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKINSTANCEID_T786350175_H
#ifndef NETWORKSCENEID_T717048590_H
#define NETWORKSCENEID_T717048590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSceneId
struct  NetworkSceneId_t717048590 
{
public:
	// System.UInt32 UnityEngine.Networking.NetworkSceneId::m_Value
	uint32_t ___m_Value_0;

public:
	inline static int32_t get_offset_of_m_Value_0() { return static_cast<int32_t>(offsetof(NetworkSceneId_t717048590, ___m_Value_0)); }
	inline uint32_t get_m_Value_0() const { return ___m_Value_0; }
	inline uint32_t* get_address_of_m_Value_0() { return &___m_Value_0; }
	inline void set_m_Value_0(uint32_t value)
	{
		___m_Value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKSCENEID_T717048590_H
#ifndef NETWORKSETTINGSATTRIBUTE_T4047325829_H
#define NETWORKSETTINGSATTRIBUTE_T4047325829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSettingsAttribute
struct  NetworkSettingsAttribute_t4047325829  : public Attribute_t861562559
{
public:
	// System.Int32 UnityEngine.Networking.NetworkSettingsAttribute::channel
	int32_t ___channel_0;
	// System.Single UnityEngine.Networking.NetworkSettingsAttribute::sendInterval
	float ___sendInterval_1;

public:
	inline static int32_t get_offset_of_channel_0() { return static_cast<int32_t>(offsetof(NetworkSettingsAttribute_t4047325829, ___channel_0)); }
	inline int32_t get_channel_0() const { return ___channel_0; }
	inline int32_t* get_address_of_channel_0() { return &___channel_0; }
	inline void set_channel_0(int32_t value)
	{
		___channel_0 = value;
	}

	inline static int32_t get_offset_of_sendInterval_1() { return static_cast<int32_t>(offsetof(NetworkSettingsAttribute_t4047325829, ___sendInterval_1)); }
	inline float get_sendInterval_1() const { return ___sendInterval_1; }
	inline float* get_address_of_sendInterval_1() { return &___sendInterval_1; }
	inline void set_sendInterval_1(float value)
	{
		___sendInterval_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKSETTINGSATTRIBUTE_T4047325829_H
#ifndef ADDPLAYERMESSAGE_T787692541_H
#define ADDPLAYERMESSAGE_T787692541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSystem.AddPlayerMessage
struct  AddPlayerMessage_t787692541  : public MessageBase_t3584795631
{
public:
	// System.Int16 UnityEngine.Networking.NetworkSystem.AddPlayerMessage::playerControllerId
	int16_t ___playerControllerId_0;
	// System.Int32 UnityEngine.Networking.NetworkSystem.AddPlayerMessage::msgSize
	int32_t ___msgSize_1;
	// System.Byte[] UnityEngine.Networking.NetworkSystem.AddPlayerMessage::msgData
	ByteU5BU5D_t4116647657* ___msgData_2;

public:
	inline static int32_t get_offset_of_playerControllerId_0() { return static_cast<int32_t>(offsetof(AddPlayerMessage_t787692541, ___playerControllerId_0)); }
	inline int16_t get_playerControllerId_0() const { return ___playerControllerId_0; }
	inline int16_t* get_address_of_playerControllerId_0() { return &___playerControllerId_0; }
	inline void set_playerControllerId_0(int16_t value)
	{
		___playerControllerId_0 = value;
	}

	inline static int32_t get_offset_of_msgSize_1() { return static_cast<int32_t>(offsetof(AddPlayerMessage_t787692541, ___msgSize_1)); }
	inline int32_t get_msgSize_1() const { return ___msgSize_1; }
	inline int32_t* get_address_of_msgSize_1() { return &___msgSize_1; }
	inline void set_msgSize_1(int32_t value)
	{
		___msgSize_1 = value;
	}

	inline static int32_t get_offset_of_msgData_2() { return static_cast<int32_t>(offsetof(AddPlayerMessage_t787692541, ___msgData_2)); }
	inline ByteU5BU5D_t4116647657* get_msgData_2() const { return ___msgData_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_msgData_2() { return &___msgData_2; }
	inline void set_msgData_2(ByteU5BU5D_t4116647657* value)
	{
		___msgData_2 = value;
		Il2CppCodeGenWriteBarrier((&___msgData_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDPLAYERMESSAGE_T787692541_H
#ifndef CRCMESSAGE_T4148217304_H
#define CRCMESSAGE_T4148217304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSystem.CRCMessage
struct  CRCMessage_t4148217304  : public MessageBase_t3584795631
{
public:
	// UnityEngine.Networking.NetworkSystem.CRCMessageEntry[] UnityEngine.Networking.NetworkSystem.CRCMessage::scripts
	CRCMessageEntryU5BU5D_t2683386060* ___scripts_0;

public:
	inline static int32_t get_offset_of_scripts_0() { return static_cast<int32_t>(offsetof(CRCMessage_t4148217304, ___scripts_0)); }
	inline CRCMessageEntryU5BU5D_t2683386060* get_scripts_0() const { return ___scripts_0; }
	inline CRCMessageEntryU5BU5D_t2683386060** get_address_of_scripts_0() { return &___scripts_0; }
	inline void set_scripts_0(CRCMessageEntryU5BU5D_t2683386060* value)
	{
		___scripts_0 = value;
		Il2CppCodeGenWriteBarrier((&___scripts_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRCMESSAGE_T4148217304_H
#ifndef CRCMESSAGEENTRY_T1041239249_H
#define CRCMESSAGEENTRY_T1041239249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSystem.CRCMessageEntry
struct  CRCMessageEntry_t1041239249 
{
public:
	// System.String UnityEngine.Networking.NetworkSystem.CRCMessageEntry::name
	String_t* ___name_0;
	// System.Byte UnityEngine.Networking.NetworkSystem.CRCMessageEntry::channel
	uint8_t ___channel_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(CRCMessageEntry_t1041239249, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_channel_1() { return static_cast<int32_t>(offsetof(CRCMessageEntry_t1041239249, ___channel_1)); }
	inline uint8_t get_channel_1() const { return ___channel_1; }
	inline uint8_t* get_address_of_channel_1() { return &___channel_1; }
	inline void set_channel_1(uint8_t value)
	{
		___channel_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.NetworkSystem.CRCMessageEntry
struct CRCMessageEntry_t1041239249_marshaled_pinvoke
{
	char* ___name_0;
	uint8_t ___channel_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.NetworkSystem.CRCMessageEntry
struct CRCMessageEntry_t1041239249_marshaled_com
{
	Il2CppChar* ___name_0;
	uint8_t ___channel_1;
};
#endif // CRCMESSAGEENTRY_T1041239249_H
#ifndef EMPTYMESSAGE_T3892466266_H
#define EMPTYMESSAGE_T3892466266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSystem.EmptyMessage
struct  EmptyMessage_t3892466266  : public MessageBase_t3584795631
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMPTYMESSAGE_T3892466266_H
#ifndef ERRORMESSAGE_T4257973676_H
#define ERRORMESSAGE_T4257973676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSystem.ErrorMessage
struct  ErrorMessage_t4257973676  : public MessageBase_t3584795631
{
public:
	// System.Int32 UnityEngine.Networking.NetworkSystem.ErrorMessage::errorCode
	int32_t ___errorCode_0;

public:
	inline static int32_t get_offset_of_errorCode_0() { return static_cast<int32_t>(offsetof(ErrorMessage_t4257973676, ___errorCode_0)); }
	inline int32_t get_errorCode_0() const { return ___errorCode_0; }
	inline int32_t* get_address_of_errorCode_0() { return &___errorCode_0; }
	inline void set_errorCode_0(int32_t value)
	{
		___errorCode_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERRORMESSAGE_T4257973676_H
#ifndef INTEGERMESSAGE_T4071108245_H
#define INTEGERMESSAGE_T4071108245_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSystem.IntegerMessage
struct  IntegerMessage_t4071108245  : public MessageBase_t3584795631
{
public:
	// System.Int32 UnityEngine.Networking.NetworkSystem.IntegerMessage::value
	int32_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(IntegerMessage_t4071108245, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTEGERMESSAGE_T4071108245_H
#ifndef LOBBYREADYTOBEGINMESSAGE_T1454406147_H
#define LOBBYREADYTOBEGINMESSAGE_T1454406147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSystem.LobbyReadyToBeginMessage
struct  LobbyReadyToBeginMessage_t1454406147  : public MessageBase_t3584795631
{
public:
	// System.Byte UnityEngine.Networking.NetworkSystem.LobbyReadyToBeginMessage::slotId
	uint8_t ___slotId_0;
	// System.Boolean UnityEngine.Networking.NetworkSystem.LobbyReadyToBeginMessage::readyState
	bool ___readyState_1;

public:
	inline static int32_t get_offset_of_slotId_0() { return static_cast<int32_t>(offsetof(LobbyReadyToBeginMessage_t1454406147, ___slotId_0)); }
	inline uint8_t get_slotId_0() const { return ___slotId_0; }
	inline uint8_t* get_address_of_slotId_0() { return &___slotId_0; }
	inline void set_slotId_0(uint8_t value)
	{
		___slotId_0 = value;
	}

	inline static int32_t get_offset_of_readyState_1() { return static_cast<int32_t>(offsetof(LobbyReadyToBeginMessage_t1454406147, ___readyState_1)); }
	inline bool get_readyState_1() const { return ___readyState_1; }
	inline bool* get_address_of_readyState_1() { return &___readyState_1; }
	inline void set_readyState_1(bool value)
	{
		___readyState_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOBBYREADYTOBEGINMESSAGE_T1454406147_H
#ifndef OBJECTSPAWNFINISHEDMESSAGE_T2314084871_H
#define OBJECTSPAWNFINISHEDMESSAGE_T2314084871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSystem.ObjectSpawnFinishedMessage
struct  ObjectSpawnFinishedMessage_t2314084871  : public MessageBase_t3584795631
{
public:
	// System.UInt32 UnityEngine.Networking.NetworkSystem.ObjectSpawnFinishedMessage::state
	uint32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(ObjectSpawnFinishedMessage_t2314084871, ___state_0)); }
	inline uint32_t get_state_0() const { return ___state_0; }
	inline uint32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(uint32_t value)
	{
		___state_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTSPAWNFINISHEDMESSAGE_T2314084871_H
#ifndef PEERINFOMESSAGE_T1835608005_H
#define PEERINFOMESSAGE_T1835608005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSystem.PeerInfoMessage
struct  PeerInfoMessage_t1835608005  : public MessageBase_t3584795631
{
public:
	// System.Int32 UnityEngine.Networking.NetworkSystem.PeerInfoMessage::connectionId
	int32_t ___connectionId_0;
	// System.String UnityEngine.Networking.NetworkSystem.PeerInfoMessage::address
	String_t* ___address_1;
	// System.Int32 UnityEngine.Networking.NetworkSystem.PeerInfoMessage::port
	int32_t ___port_2;
	// System.Boolean UnityEngine.Networking.NetworkSystem.PeerInfoMessage::isHost
	bool ___isHost_3;
	// System.Boolean UnityEngine.Networking.NetworkSystem.PeerInfoMessage::isYou
	bool ___isYou_4;
	// UnityEngine.Networking.NetworkSystem.PeerInfoPlayer[] UnityEngine.Networking.NetworkSystem.PeerInfoMessage::playerIds
	PeerInfoPlayerU5BU5D_t2287290788* ___playerIds_5;

public:
	inline static int32_t get_offset_of_connectionId_0() { return static_cast<int32_t>(offsetof(PeerInfoMessage_t1835608005, ___connectionId_0)); }
	inline int32_t get_connectionId_0() const { return ___connectionId_0; }
	inline int32_t* get_address_of_connectionId_0() { return &___connectionId_0; }
	inline void set_connectionId_0(int32_t value)
	{
		___connectionId_0 = value;
	}

	inline static int32_t get_offset_of_address_1() { return static_cast<int32_t>(offsetof(PeerInfoMessage_t1835608005, ___address_1)); }
	inline String_t* get_address_1() const { return ___address_1; }
	inline String_t** get_address_of_address_1() { return &___address_1; }
	inline void set_address_1(String_t* value)
	{
		___address_1 = value;
		Il2CppCodeGenWriteBarrier((&___address_1), value);
	}

	inline static int32_t get_offset_of_port_2() { return static_cast<int32_t>(offsetof(PeerInfoMessage_t1835608005, ___port_2)); }
	inline int32_t get_port_2() const { return ___port_2; }
	inline int32_t* get_address_of_port_2() { return &___port_2; }
	inline void set_port_2(int32_t value)
	{
		___port_2 = value;
	}

	inline static int32_t get_offset_of_isHost_3() { return static_cast<int32_t>(offsetof(PeerInfoMessage_t1835608005, ___isHost_3)); }
	inline bool get_isHost_3() const { return ___isHost_3; }
	inline bool* get_address_of_isHost_3() { return &___isHost_3; }
	inline void set_isHost_3(bool value)
	{
		___isHost_3 = value;
	}

	inline static int32_t get_offset_of_isYou_4() { return static_cast<int32_t>(offsetof(PeerInfoMessage_t1835608005, ___isYou_4)); }
	inline bool get_isYou_4() const { return ___isYou_4; }
	inline bool* get_address_of_isYou_4() { return &___isYou_4; }
	inline void set_isYou_4(bool value)
	{
		___isYou_4 = value;
	}

	inline static int32_t get_offset_of_playerIds_5() { return static_cast<int32_t>(offsetof(PeerInfoMessage_t1835608005, ___playerIds_5)); }
	inline PeerInfoPlayerU5BU5D_t2287290788* get_playerIds_5() const { return ___playerIds_5; }
	inline PeerInfoPlayerU5BU5D_t2287290788** get_address_of_playerIds_5() { return &___playerIds_5; }
	inline void set_playerIds_5(PeerInfoPlayerU5BU5D_t2287290788* value)
	{
		___playerIds_5 = value;
		Il2CppCodeGenWriteBarrier((&___playerIds_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PEERINFOMESSAGE_T1835608005_H
#ifndef PEERLISTMESSAGE_T3055989278_H
#define PEERLISTMESSAGE_T3055989278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSystem.PeerListMessage
struct  PeerListMessage_t3055989278  : public MessageBase_t3584795631
{
public:
	// UnityEngine.Networking.NetworkSystem.PeerInfoMessage[] UnityEngine.Networking.NetworkSystem.PeerListMessage::peers
	PeerInfoMessageU5BU5D_t2256646024* ___peers_0;
	// System.Int32 UnityEngine.Networking.NetworkSystem.PeerListMessage::oldServerConnectionId
	int32_t ___oldServerConnectionId_1;

public:
	inline static int32_t get_offset_of_peers_0() { return static_cast<int32_t>(offsetof(PeerListMessage_t3055989278, ___peers_0)); }
	inline PeerInfoMessageU5BU5D_t2256646024* get_peers_0() const { return ___peers_0; }
	inline PeerInfoMessageU5BU5D_t2256646024** get_address_of_peers_0() { return &___peers_0; }
	inline void set_peers_0(PeerInfoMessageU5BU5D_t2256646024* value)
	{
		___peers_0 = value;
		Il2CppCodeGenWriteBarrier((&___peers_0), value);
	}

	inline static int32_t get_offset_of_oldServerConnectionId_1() { return static_cast<int32_t>(offsetof(PeerListMessage_t3055989278, ___oldServerConnectionId_1)); }
	inline int32_t get_oldServerConnectionId_1() const { return ___oldServerConnectionId_1; }
	inline int32_t* get_address_of_oldServerConnectionId_1() { return &___oldServerConnectionId_1; }
	inline void set_oldServerConnectionId_1(int32_t value)
	{
		___oldServerConnectionId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PEERLISTMESSAGE_T3055989278_H
#ifndef REMOVEPLAYERMESSAGE_T1120190071_H
#define REMOVEPLAYERMESSAGE_T1120190071_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSystem.RemovePlayerMessage
struct  RemovePlayerMessage_t1120190071  : public MessageBase_t3584795631
{
public:
	// System.Int16 UnityEngine.Networking.NetworkSystem.RemovePlayerMessage::playerControllerId
	int16_t ___playerControllerId_0;

public:
	inline static int32_t get_offset_of_playerControllerId_0() { return static_cast<int32_t>(offsetof(RemovePlayerMessage_t1120190071, ___playerControllerId_0)); }
	inline int16_t get_playerControllerId_0() const { return ___playerControllerId_0; }
	inline int16_t* get_address_of_playerControllerId_0() { return &___playerControllerId_0; }
	inline void set_playerControllerId_0(int16_t value)
	{
		___playerControllerId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOVEPLAYERMESSAGE_T1120190071_H
#ifndef STRINGMESSAGE_T3467362783_H
#define STRINGMESSAGE_T3467362783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSystem.StringMessage
struct  StringMessage_t3467362783  : public MessageBase_t3584795631
{
public:
	// System.String UnityEngine.Networking.NetworkSystem.StringMessage::value
	String_t* ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(StringMessage_t3467362783, ___value_0)); }
	inline String_t* get_value_0() const { return ___value_0; }
	inline String_t** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(String_t* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGMESSAGE_T3467362783_H
#ifndef SERVERATTRIBUTE_T3576563794_H
#define SERVERATTRIBUTE_T3576563794_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.ServerAttribute
struct  ServerAttribute_t3576563794  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVERATTRIBUTE_T3576563794_H
#ifndef SERVERCALLBACKATTRIBUTE_T137408393_H
#define SERVERCALLBACKATTRIBUTE_T137408393_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.ServerCallbackAttribute
struct  ServerCallbackAttribute_t137408393  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVERCALLBACKATTRIBUTE_T137408393_H
#ifndef SYNCEVENTATTRIBUTE_T1173463645_H
#define SYNCEVENTATTRIBUTE_T1173463645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.SyncEventAttribute
struct  SyncEventAttribute_t1173463645  : public Attribute_t861562559
{
public:
	// System.Int32 UnityEngine.Networking.SyncEventAttribute::channel
	int32_t ___channel_0;

public:
	inline static int32_t get_offset_of_channel_0() { return static_cast<int32_t>(offsetof(SyncEventAttribute_t1173463645, ___channel_0)); }
	inline int32_t get_channel_0() const { return ___channel_0; }
	inline int32_t* get_address_of_channel_0() { return &___channel_0; }
	inline void set_channel_0(int32_t value)
	{
		___channel_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCEVENTATTRIBUTE_T1173463645_H
#ifndef SYNCLISTBOOL_T2976666744_H
#define SYNCLISTBOOL_T2976666744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.SyncListBool
struct  SyncListBool_t2976666744  : public SyncList_1_t2187079102
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCLISTBOOL_T2976666744_H
#ifndef SYNCLISTFLOAT_T1924884630_H
#define SYNCLISTFLOAT_T1924884630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.SyncListFloat
struct  SyncListFloat_t1924884630  : public SyncList_1_t3487057911
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCLISTFLOAT_T1924884630_H
#ifndef SYNCLISTINT_T3061596081_H
#define SYNCLISTINT_T3061596081_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.SyncListInt
struct  SyncListInt_t3061596081  : public SyncList_1_t745769594
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCLISTINT_T3061596081_H
#ifndef SYNCLISTSTRING_T3633002311_H
#define SYNCLISTSTRING_T3633002311_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.SyncListString
struct  SyncListString_t3633002311  : public SyncList_1_t3937241826
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCLISTSTRING_T3633002311_H
#ifndef SYNCLISTUINT_T1324480882_H
#define SYNCLISTUINT_T1324480882_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.SyncListUInt
struct  SyncListUInt_t1324480882  : public SyncList_1_t354885819
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCLISTUINT_T1324480882_H
#ifndef SYNCVARATTRIBUTE_T562797116_H
#define SYNCVARATTRIBUTE_T562797116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.SyncVarAttribute
struct  SyncVarAttribute_t562797116  : public Attribute_t861562559
{
public:
	// System.String UnityEngine.Networking.SyncVarAttribute::hook
	String_t* ___hook_0;

public:
	inline static int32_t get_offset_of_hook_0() { return static_cast<int32_t>(offsetof(SyncVarAttribute_t562797116, ___hook_0)); }
	inline String_t* get_hook_0() const { return ___hook_0; }
	inline String_t** get_address_of_hook_0() { return &___hook_0; }
	inline void set_hook_0(String_t* value)
	{
		___hook_0 = value;
		Il2CppCodeGenWriteBarrier((&___hook_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCVARATTRIBUTE_T562797116_H
#ifndef TARGETRPCATTRIBUTE_T3963917861_H
#define TARGETRPCATTRIBUTE_T3963917861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.TargetRpcAttribute
struct  TargetRpcAttribute_t3963917861  : public Attribute_t861562559
{
public:
	// System.Int32 UnityEngine.Networking.TargetRpcAttribute::channel
	int32_t ___channel_0;

public:
	inline static int32_t get_offset_of_channel_0() { return static_cast<int32_t>(offsetof(TargetRpcAttribute_t3963917861, ___channel_0)); }
	inline int32_t get_channel_0() const { return ___channel_0; }
	inline int32_t* get_address_of_channel_0() { return &___channel_0; }
	inline void set_channel_0(int32_t value)
	{
		___channel_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETRPCATTRIBUTE_T3963917861_H
#ifndef UINTFLOAT_T1701239927_H
#define UINTFLOAT_T1701239927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UIntFloat
struct  UIntFloat_t1701239927 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single UnityEngine.Networking.UIntFloat::floatValue
			float ___floatValue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___floatValue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 UnityEngine.Networking.UIntFloat::intValue
			uint32_t ___intValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___intValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double UnityEngine.Networking.UIntFloat::doubleValue
			double ___doubleValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___doubleValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 UnityEngine.Networking.UIntFloat::longValue
			uint64_t ___longValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___longValue_3_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_floatValue_0() { return static_cast<int32_t>(offsetof(UIntFloat_t1701239927, ___floatValue_0)); }
	inline float get_floatValue_0() const { return ___floatValue_0; }
	inline float* get_address_of_floatValue_0() { return &___floatValue_0; }
	inline void set_floatValue_0(float value)
	{
		___floatValue_0 = value;
	}

	inline static int32_t get_offset_of_intValue_1() { return static_cast<int32_t>(offsetof(UIntFloat_t1701239927, ___intValue_1)); }
	inline uint32_t get_intValue_1() const { return ___intValue_1; }
	inline uint32_t* get_address_of_intValue_1() { return &___intValue_1; }
	inline void set_intValue_1(uint32_t value)
	{
		___intValue_1 = value;
	}

	inline static int32_t get_offset_of_doubleValue_2() { return static_cast<int32_t>(offsetof(UIntFloat_t1701239927, ___doubleValue_2)); }
	inline double get_doubleValue_2() const { return ___doubleValue_2; }
	inline double* get_address_of_doubleValue_2() { return &___doubleValue_2; }
	inline void set_doubleValue_2(double value)
	{
		___doubleValue_2 = value;
	}

	inline static int32_t get_offset_of_longValue_3() { return static_cast<int32_t>(offsetof(UIntFloat_t1701239927, ___longValue_3)); }
	inline uint64_t get_longValue_3() const { return ___longValue_3; }
	inline uint64_t* get_address_of_longValue_3() { return &___longValue_3; }
	inline void set_longValue_3(uint64_t value)
	{
		___longValue_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTFLOAT_T1701239927_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
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
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
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
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef VECTOR4_T3319028937_H
#define VECTOR4_T3319028937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3319028937 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3319028937_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3319028937  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3319028937  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3319028937  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3319028937  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3319028937  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3319028937 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3319028937  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___oneVector_6)); }
	inline Vector4_t3319028937  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3319028937 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3319028937  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3319028937  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3319028937 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3319028937  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3319028937  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3319028937 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3319028937  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3319028937_H
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
#ifndef INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#define INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_t1578797820  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
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
#endif // BINDINGFLAGS_T2721792723_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef COLLISIONFLAGS_T1776808576_H
#define COLLISIONFLAGS_T1776808576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CollisionFlags
struct  CollisionFlags_t1776808576 
{
public:
	// System.Int32 UnityEngine.CollisionFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CollisionFlags_t1776808576, ___value___1)); }
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
#endif // COLLISIONFLAGS_T1776808576_H
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
#ifndef CONNECTSTATE_T1049972864_H
#define CONNECTSTATE_T1049972864_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkClient/ConnectState
struct  ConnectState_t1049972864 
{
public:
	// System.Int32 UnityEngine.Networking.NetworkClient/ConnectState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConnectState_t1049972864, ___value___1)); }
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
#endif // CONNECTSTATE_T1049972864_H
#ifndef NETWORKERROR_T2038193525_H
#define NETWORKERROR_T2038193525_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkError
struct  NetworkError_t2038193525 
{
public:
	// System.Int32 UnityEngine.Networking.NetworkError::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NetworkError_t2038193525, ___value___1)); }
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
#endif // NETWORKERROR_T2038193525_H
#ifndef ANIMATIONMESSAGE_T2187129444_H
#define ANIMATIONMESSAGE_T2187129444_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSystem.AnimationMessage
struct  AnimationMessage_t2187129444  : public MessageBase_t3584795631
{
public:
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.AnimationMessage::netId
	NetworkInstanceId_t786350175  ___netId_0;
	// System.Int32 UnityEngine.Networking.NetworkSystem.AnimationMessage::stateHash
	int32_t ___stateHash_1;
	// System.Single UnityEngine.Networking.NetworkSystem.AnimationMessage::normalizedTime
	float ___normalizedTime_2;
	// System.Byte[] UnityEngine.Networking.NetworkSystem.AnimationMessage::parameters
	ByteU5BU5D_t4116647657* ___parameters_3;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(AnimationMessage_t2187129444, ___netId_0)); }
	inline NetworkInstanceId_t786350175  get_netId_0() const { return ___netId_0; }
	inline NetworkInstanceId_t786350175 * get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(NetworkInstanceId_t786350175  value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_stateHash_1() { return static_cast<int32_t>(offsetof(AnimationMessage_t2187129444, ___stateHash_1)); }
	inline int32_t get_stateHash_1() const { return ___stateHash_1; }
	inline int32_t* get_address_of_stateHash_1() { return &___stateHash_1; }
	inline void set_stateHash_1(int32_t value)
	{
		___stateHash_1 = value;
	}

	inline static int32_t get_offset_of_normalizedTime_2() { return static_cast<int32_t>(offsetof(AnimationMessage_t2187129444, ___normalizedTime_2)); }
	inline float get_normalizedTime_2() const { return ___normalizedTime_2; }
	inline float* get_address_of_normalizedTime_2() { return &___normalizedTime_2; }
	inline void set_normalizedTime_2(float value)
	{
		___normalizedTime_2 = value;
	}

	inline static int32_t get_offset_of_parameters_3() { return static_cast<int32_t>(offsetof(AnimationMessage_t2187129444, ___parameters_3)); }
	inline ByteU5BU5D_t4116647657* get_parameters_3() const { return ___parameters_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_parameters_3() { return &___parameters_3; }
	inline void set_parameters_3(ByteU5BU5D_t4116647657* value)
	{
		___parameters_3 = value;
		Il2CppCodeGenWriteBarrier((&___parameters_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONMESSAGE_T2187129444_H
#ifndef ANIMATIONPARAMETERSMESSAGE_T2014820556_H
#define ANIMATIONPARAMETERSMESSAGE_T2014820556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSystem.AnimationParametersMessage
struct  AnimationParametersMessage_t2014820556  : public MessageBase_t3584795631
{
public:
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.AnimationParametersMessage::netId
	NetworkInstanceId_t786350175  ___netId_0;
	// System.Byte[] UnityEngine.Networking.NetworkSystem.AnimationParametersMessage::parameters
	ByteU5BU5D_t4116647657* ___parameters_1;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(AnimationParametersMessage_t2014820556, ___netId_0)); }
	inline NetworkInstanceId_t786350175  get_netId_0() const { return ___netId_0; }
	inline NetworkInstanceId_t786350175 * get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(NetworkInstanceId_t786350175  value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_parameters_1() { return static_cast<int32_t>(offsetof(AnimationParametersMessage_t2014820556, ___parameters_1)); }
	inline ByteU5BU5D_t4116647657* get_parameters_1() const { return ___parameters_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_parameters_1() { return &___parameters_1; }
	inline void set_parameters_1(ByteU5BU5D_t4116647657* value)
	{
		___parameters_1 = value;
		Il2CppCodeGenWriteBarrier((&___parameters_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONPARAMETERSMESSAGE_T2014820556_H
#ifndef ANIMATIONTRIGGERMESSAGE_T1881009617_H
#define ANIMATIONTRIGGERMESSAGE_T1881009617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSystem.AnimationTriggerMessage
struct  AnimationTriggerMessage_t1881009617  : public MessageBase_t3584795631
{
public:
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.AnimationTriggerMessage::netId
	NetworkInstanceId_t786350175  ___netId_0;
	// System.Int32 UnityEngine.Networking.NetworkSystem.AnimationTriggerMessage::hash
	int32_t ___hash_1;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(AnimationTriggerMessage_t1881009617, ___netId_0)); }
	inline NetworkInstanceId_t786350175  get_netId_0() const { return ___netId_0; }
	inline NetworkInstanceId_t786350175 * get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(NetworkInstanceId_t786350175  value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_hash_1() { return static_cast<int32_t>(offsetof(AnimationTriggerMessage_t1881009617, ___hash_1)); }
	inline int32_t get_hash_1() const { return ___hash_1; }
	inline int32_t* get_address_of_hash_1() { return &___hash_1; }
	inline void set_hash_1(int32_t value)
	{
		___hash_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONTRIGGERMESSAGE_T1881009617_H
#ifndef CLIENTAUTHORITYMESSAGE_T2167651785_H
#define CLIENTAUTHORITYMESSAGE_T2167651785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSystem.ClientAuthorityMessage
struct  ClientAuthorityMessage_t2167651785  : public MessageBase_t3584795631
{
public:
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.ClientAuthorityMessage::netId
	NetworkInstanceId_t786350175  ___netId_0;
	// System.Boolean UnityEngine.Networking.NetworkSystem.ClientAuthorityMessage::authority
	bool ___authority_1;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(ClientAuthorityMessage_t2167651785, ___netId_0)); }
	inline NetworkInstanceId_t786350175  get_netId_0() const { return ___netId_0; }
	inline NetworkInstanceId_t786350175 * get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(NetworkInstanceId_t786350175  value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_authority_1() { return static_cast<int32_t>(offsetof(ClientAuthorityMessage_t2167651785, ___authority_1)); }
	inline bool get_authority_1() const { return ___authority_1; }
	inline bool* get_address_of_authority_1() { return &___authority_1; }
	inline void set_authority_1(bool value)
	{
		___authority_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTAUTHORITYMESSAGE_T2167651785_H
#ifndef NOTREADYMESSAGE_T1149106928_H
#define NOTREADYMESSAGE_T1149106928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSystem.NotReadyMessage
struct  NotReadyMessage_t1149106928  : public EmptyMessage_t3892466266
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTREADYMESSAGE_T1149106928_H
#ifndef OBJECTDESTROYMESSAGE_T1358562099_H
#define OBJECTDESTROYMESSAGE_T1358562099_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSystem.ObjectDestroyMessage
struct  ObjectDestroyMessage_t1358562099  : public MessageBase_t3584795631
{
public:
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.ObjectDestroyMessage::netId
	NetworkInstanceId_t786350175  ___netId_0;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(ObjectDestroyMessage_t1358562099, ___netId_0)); }
	inline NetworkInstanceId_t786350175  get_netId_0() const { return ___netId_0; }
	inline NetworkInstanceId_t786350175 * get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(NetworkInstanceId_t786350175  value)
	{
		___netId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTDESTROYMESSAGE_T1358562099_H
#ifndef OBJECTSPAWNMESSAGE_T10889831_H
#define OBJECTSPAWNMESSAGE_T10889831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage
struct  ObjectSpawnMessage_t10889831  : public MessageBase_t3584795631
{
public:
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage::netId
	NetworkInstanceId_t786350175  ___netId_0;
	// UnityEngine.Networking.NetworkHash128 UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage::assetId
	NetworkHash128_t2391674535  ___assetId_1;
	// UnityEngine.Vector3 UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage::position
	Vector3_t3722313464  ___position_2;
	// System.Byte[] UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage::payload
	ByteU5BU5D_t4116647657* ___payload_3;
	// UnityEngine.Quaternion UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage::rotation
	Quaternion_t2301928331  ___rotation_4;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(ObjectSpawnMessage_t10889831, ___netId_0)); }
	inline NetworkInstanceId_t786350175  get_netId_0() const { return ___netId_0; }
	inline NetworkInstanceId_t786350175 * get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(NetworkInstanceId_t786350175  value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_assetId_1() { return static_cast<int32_t>(offsetof(ObjectSpawnMessage_t10889831, ___assetId_1)); }
	inline NetworkHash128_t2391674535  get_assetId_1() const { return ___assetId_1; }
	inline NetworkHash128_t2391674535 * get_address_of_assetId_1() { return &___assetId_1; }
	inline void set_assetId_1(NetworkHash128_t2391674535  value)
	{
		___assetId_1 = value;
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(ObjectSpawnMessage_t10889831, ___position_2)); }
	inline Vector3_t3722313464  get_position_2() const { return ___position_2; }
	inline Vector3_t3722313464 * get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(Vector3_t3722313464  value)
	{
		___position_2 = value;
	}

	inline static int32_t get_offset_of_payload_3() { return static_cast<int32_t>(offsetof(ObjectSpawnMessage_t10889831, ___payload_3)); }
	inline ByteU5BU5D_t4116647657* get_payload_3() const { return ___payload_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_payload_3() { return &___payload_3; }
	inline void set_payload_3(ByteU5BU5D_t4116647657* value)
	{
		___payload_3 = value;
		Il2CppCodeGenWriteBarrier((&___payload_3), value);
	}

	inline static int32_t get_offset_of_rotation_4() { return static_cast<int32_t>(offsetof(ObjectSpawnMessage_t10889831, ___rotation_4)); }
	inline Quaternion_t2301928331  get_rotation_4() const { return ___rotation_4; }
	inline Quaternion_t2301928331 * get_address_of_rotation_4() { return &___rotation_4; }
	inline void set_rotation_4(Quaternion_t2301928331  value)
	{
		___rotation_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTSPAWNMESSAGE_T10889831_H
#ifndef OBJECTSPAWNSCENEMESSAGE_T2191101100_H
#define OBJECTSPAWNSCENEMESSAGE_T2191101100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage
struct  ObjectSpawnSceneMessage_t2191101100  : public MessageBase_t3584795631
{
public:
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage::netId
	NetworkInstanceId_t786350175  ___netId_0;
	// UnityEngine.Networking.NetworkSceneId UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage::sceneId
	NetworkSceneId_t717048590  ___sceneId_1;
	// UnityEngine.Vector3 UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage::position
	Vector3_t3722313464  ___position_2;
	// System.Byte[] UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage::payload
	ByteU5BU5D_t4116647657* ___payload_3;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(ObjectSpawnSceneMessage_t2191101100, ___netId_0)); }
	inline NetworkInstanceId_t786350175  get_netId_0() const { return ___netId_0; }
	inline NetworkInstanceId_t786350175 * get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(NetworkInstanceId_t786350175  value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_sceneId_1() { return static_cast<int32_t>(offsetof(ObjectSpawnSceneMessage_t2191101100, ___sceneId_1)); }
	inline NetworkSceneId_t717048590  get_sceneId_1() const { return ___sceneId_1; }
	inline NetworkSceneId_t717048590 * get_address_of_sceneId_1() { return &___sceneId_1; }
	inline void set_sceneId_1(NetworkSceneId_t717048590  value)
	{
		___sceneId_1 = value;
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(ObjectSpawnSceneMessage_t2191101100, ___position_2)); }
	inline Vector3_t3722313464  get_position_2() const { return ___position_2; }
	inline Vector3_t3722313464 * get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(Vector3_t3722313464  value)
	{
		___position_2 = value;
	}

	inline static int32_t get_offset_of_payload_3() { return static_cast<int32_t>(offsetof(ObjectSpawnSceneMessage_t2191101100, ___payload_3)); }
	inline ByteU5BU5D_t4116647657* get_payload_3() const { return ___payload_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_payload_3() { return &___payload_3; }
	inline void set_payload_3(ByteU5BU5D_t4116647657* value)
	{
		___payload_3 = value;
		Il2CppCodeGenWriteBarrier((&___payload_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTSPAWNSCENEMESSAGE_T2191101100_H
#ifndef OVERRIDETRANSFORMMESSAGE_T1366792551_H
#define OVERRIDETRANSFORMMESSAGE_T1366792551_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSystem.OverrideTransformMessage
struct  OverrideTransformMessage_t1366792551  : public MessageBase_t3584795631
{
public:
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.OverrideTransformMessage::netId
	NetworkInstanceId_t786350175  ___netId_0;
	// System.Byte[] UnityEngine.Networking.NetworkSystem.OverrideTransformMessage::payload
	ByteU5BU5D_t4116647657* ___payload_1;
	// System.Boolean UnityEngine.Networking.NetworkSystem.OverrideTransformMessage::teleport
	bool ___teleport_2;
	// System.Int32 UnityEngine.Networking.NetworkSystem.OverrideTransformMessage::time
	int32_t ___time_3;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(OverrideTransformMessage_t1366792551, ___netId_0)); }
	inline NetworkInstanceId_t786350175  get_netId_0() const { return ___netId_0; }
	inline NetworkInstanceId_t786350175 * get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(NetworkInstanceId_t786350175  value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_payload_1() { return static_cast<int32_t>(offsetof(OverrideTransformMessage_t1366792551, ___payload_1)); }
	inline ByteU5BU5D_t4116647657* get_payload_1() const { return ___payload_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_payload_1() { return &___payload_1; }
	inline void set_payload_1(ByteU5BU5D_t4116647657* value)
	{
		___payload_1 = value;
		Il2CppCodeGenWriteBarrier((&___payload_1), value);
	}

	inline static int32_t get_offset_of_teleport_2() { return static_cast<int32_t>(offsetof(OverrideTransformMessage_t1366792551, ___teleport_2)); }
	inline bool get_teleport_2() const { return ___teleport_2; }
	inline bool* get_address_of_teleport_2() { return &___teleport_2; }
	inline void set_teleport_2(bool value)
	{
		___teleport_2 = value;
	}

	inline static int32_t get_offset_of_time_3() { return static_cast<int32_t>(offsetof(OverrideTransformMessage_t1366792551, ___time_3)); }
	inline int32_t get_time_3() const { return ___time_3; }
	inline int32_t* get_address_of_time_3() { return &___time_3; }
	inline void set_time_3(int32_t value)
	{
		___time_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OVERRIDETRANSFORMMESSAGE_T1366792551_H
#ifndef OWNERMESSAGE_T4130858210_H
#define OWNERMESSAGE_T4130858210_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSystem.OwnerMessage
struct  OwnerMessage_t4130858210  : public MessageBase_t3584795631
{
public:
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.OwnerMessage::netId
	NetworkInstanceId_t786350175  ___netId_0;
	// System.Int16 UnityEngine.Networking.NetworkSystem.OwnerMessage::playerControllerId
	int16_t ___playerControllerId_1;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(OwnerMessage_t4130858210, ___netId_0)); }
	inline NetworkInstanceId_t786350175  get_netId_0() const { return ___netId_0; }
	inline NetworkInstanceId_t786350175 * get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(NetworkInstanceId_t786350175  value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_playerControllerId_1() { return static_cast<int32_t>(offsetof(OwnerMessage_t4130858210, ___playerControllerId_1)); }
	inline int16_t get_playerControllerId_1() const { return ___playerControllerId_1; }
	inline int16_t* get_address_of_playerControllerId_1() { return &___playerControllerId_1; }
	inline void set_playerControllerId_1(int16_t value)
	{
		___playerControllerId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OWNERMESSAGE_T4130858210_H
#ifndef PEERAUTHORITYMESSAGE_T1590291995_H
#define PEERAUTHORITYMESSAGE_T1590291995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSystem.PeerAuthorityMessage
struct  PeerAuthorityMessage_t1590291995  : public MessageBase_t3584795631
{
public:
	// System.Int32 UnityEngine.Networking.NetworkSystem.PeerAuthorityMessage::connectionId
	int32_t ___connectionId_0;
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.PeerAuthorityMessage::netId
	NetworkInstanceId_t786350175  ___netId_1;
	// System.Boolean UnityEngine.Networking.NetworkSystem.PeerAuthorityMessage::authorityState
	bool ___authorityState_2;

public:
	inline static int32_t get_offset_of_connectionId_0() { return static_cast<int32_t>(offsetof(PeerAuthorityMessage_t1590291995, ___connectionId_0)); }
	inline int32_t get_connectionId_0() const { return ___connectionId_0; }
	inline int32_t* get_address_of_connectionId_0() { return &___connectionId_0; }
	inline void set_connectionId_0(int32_t value)
	{
		___connectionId_0 = value;
	}

	inline static int32_t get_offset_of_netId_1() { return static_cast<int32_t>(offsetof(PeerAuthorityMessage_t1590291995, ___netId_1)); }
	inline NetworkInstanceId_t786350175  get_netId_1() const { return ___netId_1; }
	inline NetworkInstanceId_t786350175 * get_address_of_netId_1() { return &___netId_1; }
	inline void set_netId_1(NetworkInstanceId_t786350175  value)
	{
		___netId_1 = value;
	}

	inline static int32_t get_offset_of_authorityState_2() { return static_cast<int32_t>(offsetof(PeerAuthorityMessage_t1590291995, ___authorityState_2)); }
	inline bool get_authorityState_2() const { return ___authorityState_2; }
	inline bool* get_address_of_authorityState_2() { return &___authorityState_2; }
	inline void set_authorityState_2(bool value)
	{
		___authorityState_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PEERAUTHORITYMESSAGE_T1590291995_H
#ifndef PEERINFOPLAYER_T607460057_H
#define PEERINFOPLAYER_T607460057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSystem.PeerInfoPlayer
struct  PeerInfoPlayer_t607460057 
{
public:
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.PeerInfoPlayer::netId
	NetworkInstanceId_t786350175  ___netId_0;
	// System.Int16 UnityEngine.Networking.NetworkSystem.PeerInfoPlayer::playerControllerId
	int16_t ___playerControllerId_1;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(PeerInfoPlayer_t607460057, ___netId_0)); }
	inline NetworkInstanceId_t786350175  get_netId_0() const { return ___netId_0; }
	inline NetworkInstanceId_t786350175 * get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(NetworkInstanceId_t786350175  value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_playerControllerId_1() { return static_cast<int32_t>(offsetof(PeerInfoPlayer_t607460057, ___playerControllerId_1)); }
	inline int16_t get_playerControllerId_1() const { return ___playerControllerId_1; }
	inline int16_t* get_address_of_playerControllerId_1() { return &___playerControllerId_1; }
	inline void set_playerControllerId_1(int16_t value)
	{
		___playerControllerId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PEERINFOPLAYER_T607460057_H
#ifndef READYMESSAGE_T1708534618_H
#define READYMESSAGE_T1708534618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSystem.ReadyMessage
struct  ReadyMessage_t1708534618  : public EmptyMessage_t3892466266
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READYMESSAGE_T1708534618_H
#ifndef RECONNECTMESSAGE_T1996592154_H
#define RECONNECTMESSAGE_T1996592154_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSystem.ReconnectMessage
struct  ReconnectMessage_t1996592154  : public MessageBase_t3584795631
{
public:
	// System.Int32 UnityEngine.Networking.NetworkSystem.ReconnectMessage::oldConnectionId
	int32_t ___oldConnectionId_0;
	// System.Int16 UnityEngine.Networking.NetworkSystem.ReconnectMessage::playerControllerId
	int16_t ___playerControllerId_1;
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.ReconnectMessage::netId
	NetworkInstanceId_t786350175  ___netId_2;
	// System.Int32 UnityEngine.Networking.NetworkSystem.ReconnectMessage::msgSize
	int32_t ___msgSize_3;
	// System.Byte[] UnityEngine.Networking.NetworkSystem.ReconnectMessage::msgData
	ByteU5BU5D_t4116647657* ___msgData_4;

public:
	inline static int32_t get_offset_of_oldConnectionId_0() { return static_cast<int32_t>(offsetof(ReconnectMessage_t1996592154, ___oldConnectionId_0)); }
	inline int32_t get_oldConnectionId_0() const { return ___oldConnectionId_0; }
	inline int32_t* get_address_of_oldConnectionId_0() { return &___oldConnectionId_0; }
	inline void set_oldConnectionId_0(int32_t value)
	{
		___oldConnectionId_0 = value;
	}

	inline static int32_t get_offset_of_playerControllerId_1() { return static_cast<int32_t>(offsetof(ReconnectMessage_t1996592154, ___playerControllerId_1)); }
	inline int16_t get_playerControllerId_1() const { return ___playerControllerId_1; }
	inline int16_t* get_address_of_playerControllerId_1() { return &___playerControllerId_1; }
	inline void set_playerControllerId_1(int16_t value)
	{
		___playerControllerId_1 = value;
	}

	inline static int32_t get_offset_of_netId_2() { return static_cast<int32_t>(offsetof(ReconnectMessage_t1996592154, ___netId_2)); }
	inline NetworkInstanceId_t786350175  get_netId_2() const { return ___netId_2; }
	inline NetworkInstanceId_t786350175 * get_address_of_netId_2() { return &___netId_2; }
	inline void set_netId_2(NetworkInstanceId_t786350175  value)
	{
		___netId_2 = value;
	}

	inline static int32_t get_offset_of_msgSize_3() { return static_cast<int32_t>(offsetof(ReconnectMessage_t1996592154, ___msgSize_3)); }
	inline int32_t get_msgSize_3() const { return ___msgSize_3; }
	inline int32_t* get_address_of_msgSize_3() { return &___msgSize_3; }
	inline void set_msgSize_3(int32_t value)
	{
		___msgSize_3 = value;
	}

	inline static int32_t get_offset_of_msgData_4() { return static_cast<int32_t>(offsetof(ReconnectMessage_t1996592154, ___msgData_4)); }
	inline ByteU5BU5D_t4116647657* get_msgData_4() const { return ___msgData_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_msgData_4() { return &___msgData_4; }
	inline void set_msgData_4(ByteU5BU5D_t4116647657* value)
	{
		___msgData_4 = value;
		Il2CppCodeGenWriteBarrier((&___msgData_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECONNECTMESSAGE_T1996592154_H
#ifndef AXISSYNCMODE_T3537925286_H
#define AXISSYNCMODE_T3537925286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkTransform/AxisSyncMode
struct  AxisSyncMode_t3537925286 
{
public:
	// System.Int32 UnityEngine.Networking.NetworkTransform/AxisSyncMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AxisSyncMode_t3537925286, ___value___1)); }
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
#endif // AXISSYNCMODE_T3537925286_H
#ifndef COMPRESSIONSYNCMODE_T293282462_H
#define COMPRESSIONSYNCMODE_T293282462_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkTransform/CompressionSyncMode
struct  CompressionSyncMode_t293282462 
{
public:
	// System.Int32 UnityEngine.Networking.NetworkTransform/CompressionSyncMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompressionSyncMode_t293282462, ___value___1)); }
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
#endif // COMPRESSIONSYNCMODE_T293282462_H
#ifndef TRANSFORMSYNCMODE_T1892665719_H
#define TRANSFORMSYNCMODE_T1892665719_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkTransform/TransformSyncMode
struct  TransformSyncMode_t1892665719 
{
public:
	// System.Int32 UnityEngine.Networking.NetworkTransform/TransformSyncMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TransformSyncMode_t1892665719, ___value___1)); }
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
#endif // TRANSFORMSYNCMODE_T1892665719_H
#ifndef NETWORKWRITER_T3928387057_H
#define NETWORKWRITER_T3928387057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkWriter
struct  NetworkWriter_t3928387057  : public RuntimeObject
{
public:
	// UnityEngine.Networking.NetBuffer UnityEngine.Networking.NetworkWriter::m_Buffer
	NetBuffer_t2156033743 * ___m_Buffer_1;

public:
	inline static int32_t get_offset_of_m_Buffer_1() { return static_cast<int32_t>(offsetof(NetworkWriter_t3928387057, ___m_Buffer_1)); }
	inline NetBuffer_t2156033743 * get_m_Buffer_1() const { return ___m_Buffer_1; }
	inline NetBuffer_t2156033743 ** get_address_of_m_Buffer_1() { return &___m_Buffer_1; }
	inline void set_m_Buffer_1(NetBuffer_t2156033743 * value)
	{
		___m_Buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Buffer_1), value);
	}
};

struct NetworkWriter_t3928387057_StaticFields
{
public:
	// System.Text.Encoding UnityEngine.Networking.NetworkWriter::s_Encoding
	Encoding_t1523322056 * ___s_Encoding_2;
	// System.Byte[] UnityEngine.Networking.NetworkWriter::s_StringWriteBuffer
	ByteU5BU5D_t4116647657* ___s_StringWriteBuffer_3;
	// UnityEngine.Networking.UIntFloat UnityEngine.Networking.NetworkWriter::s_FloatConverter
	UIntFloat_t1701239927  ___s_FloatConverter_4;

public:
	inline static int32_t get_offset_of_s_Encoding_2() { return static_cast<int32_t>(offsetof(NetworkWriter_t3928387057_StaticFields, ___s_Encoding_2)); }
	inline Encoding_t1523322056 * get_s_Encoding_2() const { return ___s_Encoding_2; }
	inline Encoding_t1523322056 ** get_address_of_s_Encoding_2() { return &___s_Encoding_2; }
	inline void set_s_Encoding_2(Encoding_t1523322056 * value)
	{
		___s_Encoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_Encoding_2), value);
	}

	inline static int32_t get_offset_of_s_StringWriteBuffer_3() { return static_cast<int32_t>(offsetof(NetworkWriter_t3928387057_StaticFields, ___s_StringWriteBuffer_3)); }
	inline ByteU5BU5D_t4116647657* get_s_StringWriteBuffer_3() const { return ___s_StringWriteBuffer_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_s_StringWriteBuffer_3() { return &___s_StringWriteBuffer_3; }
	inline void set_s_StringWriteBuffer_3(ByteU5BU5D_t4116647657* value)
	{
		___s_StringWriteBuffer_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_StringWriteBuffer_3), value);
	}

	inline static int32_t get_offset_of_s_FloatConverter_4() { return static_cast<int32_t>(offsetof(NetworkWriter_t3928387057_StaticFields, ___s_FloatConverter_4)); }
	inline UIntFloat_t1701239927  get_s_FloatConverter_4() const { return ___s_FloatConverter_4; }
	inline UIntFloat_t1701239927 * get_address_of_s_FloatConverter_4() { return &___s_FloatConverter_4; }
	inline void set_s_FloatConverter_4(UIntFloat_t1701239927  value)
	{
		___s_FloatConverter_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKWRITER_T3928387057_H
#ifndef PLAYERSPAWNMETHOD_T923284173_H
#define PLAYERSPAWNMETHOD_T923284173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerSpawnMethod
struct  PlayerSpawnMethod_t923284173 
{
public:
	// System.Int32 UnityEngine.Networking.PlayerSpawnMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PlayerSpawnMethod_t923284173, ___value___1)); }
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
#endif // PLAYERSPAWNMETHOD_T923284173_H
#ifndef UINTDECIMAL_T1696657874_H
#define UINTDECIMAL_T1696657874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UIntDecimal
struct  UIntDecimal_t1696657874 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 UnityEngine.Networking.UIntDecimal::longValue1
			uint64_t ___longValue1_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___longValue1_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___longValue2_1_OffsetPadding[8];
			// System.UInt64 UnityEngine.Networking.UIntDecimal::longValue2
			uint64_t ___longValue2_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___longValue2_1_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___longValue2_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Decimal UnityEngine.Networking.UIntDecimal::decimalValue
			Decimal_t2948259380  ___decimalValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			Decimal_t2948259380  ___decimalValue_2_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_longValue1_0() { return static_cast<int32_t>(offsetof(UIntDecimal_t1696657874, ___longValue1_0)); }
	inline uint64_t get_longValue1_0() const { return ___longValue1_0; }
	inline uint64_t* get_address_of_longValue1_0() { return &___longValue1_0; }
	inline void set_longValue1_0(uint64_t value)
	{
		___longValue1_0 = value;
	}

	inline static int32_t get_offset_of_longValue2_1() { return static_cast<int32_t>(offsetof(UIntDecimal_t1696657874, ___longValue2_1)); }
	inline uint64_t get_longValue2_1() const { return ___longValue2_1; }
	inline uint64_t* get_address_of_longValue2_1() { return &___longValue2_1; }
	inline void set_longValue2_1(uint64_t value)
	{
		___longValue2_1 = value;
	}

	inline static int32_t get_offset_of_decimalValue_2() { return static_cast<int32_t>(offsetof(UIntDecimal_t1696657874, ___decimalValue_2)); }
	inline Decimal_t2948259380  get_decimalValue_2() const { return ___decimalValue_2; }
	inline Decimal_t2948259380 * get_address_of_decimalValue_2() { return &___decimalValue_2; }
	inline void set_decimalValue_2(Decimal_t2948259380  value)
	{
		___decimalValue_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTDECIMAL_T1696657874_H
#ifndef VERSION_T2795014528_H
#define VERSION_T2795014528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Version
struct  Version_t2795014528 
{
public:
	// System.Int32 UnityEngine.Networking.Version::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Version_t2795014528, ___value___1)); }
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
#endif // VERSION_T2795014528_H
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
#ifndef PLANE_T1000493321_H
#define PLANE_T1000493321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Plane
struct  Plane_t1000493321 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t3722313464  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t1000493321, ___m_Normal_0)); }
	inline Vector3_t3722313464  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_t3722313464 * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_t3722313464  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t1000493321, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLANE_T1000493321_H
#ifndef RAY_T3785851493_H
#define RAY_T3785851493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t3785851493 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t3722313464  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t3722313464  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Origin_0)); }
	inline Vector3_t3722313464  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t3722313464 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t3722313464  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Direction_1)); }
	inline Vector3_t3722313464  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t3722313464 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t3722313464  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T3785851493_H
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
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
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
#ifndef NETWORKCLIENT_T3758195968_H
#define NETWORKCLIENT_T3758195968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkClient
struct  NetworkClient_t3758195968  : public RuntimeObject
{
public:
	// System.Type UnityEngine.Networking.NetworkClient::m_NetworkConnectionClass
	Type_t * ___m_NetworkConnectionClass_0;
	// UnityEngine.Networking.HostTopology UnityEngine.Networking.NetworkClient::m_HostTopology
	HostTopology_t4059263395 * ___m_HostTopology_4;
	// System.Int32 UnityEngine.Networking.NetworkClient::m_HostPort
	int32_t ___m_HostPort_5;
	// System.Boolean UnityEngine.Networking.NetworkClient::m_UseSimulator
	bool ___m_UseSimulator_6;
	// System.Int32 UnityEngine.Networking.NetworkClient::m_SimulatedLatency
	int32_t ___m_SimulatedLatency_7;
	// System.Single UnityEngine.Networking.NetworkClient::m_PacketLoss
	float ___m_PacketLoss_8;
	// System.String UnityEngine.Networking.NetworkClient::m_ServerIp
	String_t* ___m_ServerIp_9;
	// System.Int32 UnityEngine.Networking.NetworkClient::m_ServerPort
	int32_t ___m_ServerPort_10;
	// System.Int32 UnityEngine.Networking.NetworkClient::m_ClientId
	int32_t ___m_ClientId_11;
	// System.Int32 UnityEngine.Networking.NetworkClient::m_ClientConnectionId
	int32_t ___m_ClientConnectionId_12;
	// System.Int32 UnityEngine.Networking.NetworkClient::m_StatResetTime
	int32_t ___m_StatResetTime_13;
	// System.Net.EndPoint UnityEngine.Networking.NetworkClient::m_RemoteEndPoint
	EndPoint_t982345378 * ___m_RemoteEndPoint_14;
	// UnityEngine.Networking.NetworkMessageHandlers UnityEngine.Networking.NetworkClient::m_MessageHandlers
	NetworkMessageHandlers_t82575973 * ___m_MessageHandlers_16;
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkClient::m_Connection
	NetworkConnection_t2705220091 * ___m_Connection_17;
	// System.Byte[] UnityEngine.Networking.NetworkClient::m_MsgBuffer
	ByteU5BU5D_t4116647657* ___m_MsgBuffer_18;
	// UnityEngine.Networking.NetworkReader UnityEngine.Networking.NetworkClient::m_MsgReader
	NetworkReader_t1574750186 * ___m_MsgReader_19;
	// UnityEngine.Networking.NetworkClient/ConnectState UnityEngine.Networking.NetworkClient::m_AsyncConnect
	int32_t ___m_AsyncConnect_20;
	// System.String UnityEngine.Networking.NetworkClient::m_RequestedServerHost
	String_t* ___m_RequestedServerHost_21;

public:
	inline static int32_t get_offset_of_m_NetworkConnectionClass_0() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968, ___m_NetworkConnectionClass_0)); }
	inline Type_t * get_m_NetworkConnectionClass_0() const { return ___m_NetworkConnectionClass_0; }
	inline Type_t ** get_address_of_m_NetworkConnectionClass_0() { return &___m_NetworkConnectionClass_0; }
	inline void set_m_NetworkConnectionClass_0(Type_t * value)
	{
		___m_NetworkConnectionClass_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_NetworkConnectionClass_0), value);
	}

	inline static int32_t get_offset_of_m_HostTopology_4() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968, ___m_HostTopology_4)); }
	inline HostTopology_t4059263395 * get_m_HostTopology_4() const { return ___m_HostTopology_4; }
	inline HostTopology_t4059263395 ** get_address_of_m_HostTopology_4() { return &___m_HostTopology_4; }
	inline void set_m_HostTopology_4(HostTopology_t4059263395 * value)
	{
		___m_HostTopology_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_HostTopology_4), value);
	}

	inline static int32_t get_offset_of_m_HostPort_5() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968, ___m_HostPort_5)); }
	inline int32_t get_m_HostPort_5() const { return ___m_HostPort_5; }
	inline int32_t* get_address_of_m_HostPort_5() { return &___m_HostPort_5; }
	inline void set_m_HostPort_5(int32_t value)
	{
		___m_HostPort_5 = value;
	}

	inline static int32_t get_offset_of_m_UseSimulator_6() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968, ___m_UseSimulator_6)); }
	inline bool get_m_UseSimulator_6() const { return ___m_UseSimulator_6; }
	inline bool* get_address_of_m_UseSimulator_6() { return &___m_UseSimulator_6; }
	inline void set_m_UseSimulator_6(bool value)
	{
		___m_UseSimulator_6 = value;
	}

	inline static int32_t get_offset_of_m_SimulatedLatency_7() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968, ___m_SimulatedLatency_7)); }
	inline int32_t get_m_SimulatedLatency_7() const { return ___m_SimulatedLatency_7; }
	inline int32_t* get_address_of_m_SimulatedLatency_7() { return &___m_SimulatedLatency_7; }
	inline void set_m_SimulatedLatency_7(int32_t value)
	{
		___m_SimulatedLatency_7 = value;
	}

	inline static int32_t get_offset_of_m_PacketLoss_8() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968, ___m_PacketLoss_8)); }
	inline float get_m_PacketLoss_8() const { return ___m_PacketLoss_8; }
	inline float* get_address_of_m_PacketLoss_8() { return &___m_PacketLoss_8; }
	inline void set_m_PacketLoss_8(float value)
	{
		___m_PacketLoss_8 = value;
	}

	inline static int32_t get_offset_of_m_ServerIp_9() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968, ___m_ServerIp_9)); }
	inline String_t* get_m_ServerIp_9() const { return ___m_ServerIp_9; }
	inline String_t** get_address_of_m_ServerIp_9() { return &___m_ServerIp_9; }
	inline void set_m_ServerIp_9(String_t* value)
	{
		___m_ServerIp_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_ServerIp_9), value);
	}

	inline static int32_t get_offset_of_m_ServerPort_10() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968, ___m_ServerPort_10)); }
	inline int32_t get_m_ServerPort_10() const { return ___m_ServerPort_10; }
	inline int32_t* get_address_of_m_ServerPort_10() { return &___m_ServerPort_10; }
	inline void set_m_ServerPort_10(int32_t value)
	{
		___m_ServerPort_10 = value;
	}

	inline static int32_t get_offset_of_m_ClientId_11() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968, ___m_ClientId_11)); }
	inline int32_t get_m_ClientId_11() const { return ___m_ClientId_11; }
	inline int32_t* get_address_of_m_ClientId_11() { return &___m_ClientId_11; }
	inline void set_m_ClientId_11(int32_t value)
	{
		___m_ClientId_11 = value;
	}

	inline static int32_t get_offset_of_m_ClientConnectionId_12() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968, ___m_ClientConnectionId_12)); }
	inline int32_t get_m_ClientConnectionId_12() const { return ___m_ClientConnectionId_12; }
	inline int32_t* get_address_of_m_ClientConnectionId_12() { return &___m_ClientConnectionId_12; }
	inline void set_m_ClientConnectionId_12(int32_t value)
	{
		___m_ClientConnectionId_12 = value;
	}

	inline static int32_t get_offset_of_m_StatResetTime_13() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968, ___m_StatResetTime_13)); }
	inline int32_t get_m_StatResetTime_13() const { return ___m_StatResetTime_13; }
	inline int32_t* get_address_of_m_StatResetTime_13() { return &___m_StatResetTime_13; }
	inline void set_m_StatResetTime_13(int32_t value)
	{
		___m_StatResetTime_13 = value;
	}

	inline static int32_t get_offset_of_m_RemoteEndPoint_14() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968, ___m_RemoteEndPoint_14)); }
	inline EndPoint_t982345378 * get_m_RemoteEndPoint_14() const { return ___m_RemoteEndPoint_14; }
	inline EndPoint_t982345378 ** get_address_of_m_RemoteEndPoint_14() { return &___m_RemoteEndPoint_14; }
	inline void set_m_RemoteEndPoint_14(EndPoint_t982345378 * value)
	{
		___m_RemoteEndPoint_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_RemoteEndPoint_14), value);
	}

	inline static int32_t get_offset_of_m_MessageHandlers_16() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968, ___m_MessageHandlers_16)); }
	inline NetworkMessageHandlers_t82575973 * get_m_MessageHandlers_16() const { return ___m_MessageHandlers_16; }
	inline NetworkMessageHandlers_t82575973 ** get_address_of_m_MessageHandlers_16() { return &___m_MessageHandlers_16; }
	inline void set_m_MessageHandlers_16(NetworkMessageHandlers_t82575973 * value)
	{
		___m_MessageHandlers_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_MessageHandlers_16), value);
	}

	inline static int32_t get_offset_of_m_Connection_17() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968, ___m_Connection_17)); }
	inline NetworkConnection_t2705220091 * get_m_Connection_17() const { return ___m_Connection_17; }
	inline NetworkConnection_t2705220091 ** get_address_of_m_Connection_17() { return &___m_Connection_17; }
	inline void set_m_Connection_17(NetworkConnection_t2705220091 * value)
	{
		___m_Connection_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_Connection_17), value);
	}

	inline static int32_t get_offset_of_m_MsgBuffer_18() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968, ___m_MsgBuffer_18)); }
	inline ByteU5BU5D_t4116647657* get_m_MsgBuffer_18() const { return ___m_MsgBuffer_18; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_MsgBuffer_18() { return &___m_MsgBuffer_18; }
	inline void set_m_MsgBuffer_18(ByteU5BU5D_t4116647657* value)
	{
		___m_MsgBuffer_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_MsgBuffer_18), value);
	}

	inline static int32_t get_offset_of_m_MsgReader_19() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968, ___m_MsgReader_19)); }
	inline NetworkReader_t1574750186 * get_m_MsgReader_19() const { return ___m_MsgReader_19; }
	inline NetworkReader_t1574750186 ** get_address_of_m_MsgReader_19() { return &___m_MsgReader_19; }
	inline void set_m_MsgReader_19(NetworkReader_t1574750186 * value)
	{
		___m_MsgReader_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_MsgReader_19), value);
	}

	inline static int32_t get_offset_of_m_AsyncConnect_20() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968, ___m_AsyncConnect_20)); }
	inline int32_t get_m_AsyncConnect_20() const { return ___m_AsyncConnect_20; }
	inline int32_t* get_address_of_m_AsyncConnect_20() { return &___m_AsyncConnect_20; }
	inline void set_m_AsyncConnect_20(int32_t value)
	{
		___m_AsyncConnect_20 = value;
	}

	inline static int32_t get_offset_of_m_RequestedServerHost_21() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968, ___m_RequestedServerHost_21)); }
	inline String_t* get_m_RequestedServerHost_21() const { return ___m_RequestedServerHost_21; }
	inline String_t** get_address_of_m_RequestedServerHost_21() { return &___m_RequestedServerHost_21; }
	inline void set_m_RequestedServerHost_21(String_t* value)
	{
		___m_RequestedServerHost_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_RequestedServerHost_21), value);
	}
};

struct NetworkClient_t3758195968_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkClient> UnityEngine.Networking.NetworkClient::s_Clients
	List_1_t935303414 * ___s_Clients_2;
	// System.Boolean UnityEngine.Networking.NetworkClient::s_IsActive
	bool ___s_IsActive_3;
	// UnityEngine.Networking.NetworkSystem.CRCMessage UnityEngine.Networking.NetworkClient::s_CRCMessage
	CRCMessage_t4148217304 * ___s_CRCMessage_15;
	// System.AsyncCallback UnityEngine.Networking.NetworkClient::<>f__mg$cache0
	AsyncCallback_t3962456242 * ___U3CU3Ef__mgU24cache0_22;
	// UnityEngine.Networking.NetworkMessageDelegate UnityEngine.Networking.NetworkClient::<>f__mg$cache1
	NetworkMessageDelegate_t360140524 * ___U3CU3Ef__mgU24cache1_23;

public:
	inline static int32_t get_offset_of_s_Clients_2() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968_StaticFields, ___s_Clients_2)); }
	inline List_1_t935303414 * get_s_Clients_2() const { return ___s_Clients_2; }
	inline List_1_t935303414 ** get_address_of_s_Clients_2() { return &___s_Clients_2; }
	inline void set_s_Clients_2(List_1_t935303414 * value)
	{
		___s_Clients_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_Clients_2), value);
	}

	inline static int32_t get_offset_of_s_IsActive_3() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968_StaticFields, ___s_IsActive_3)); }
	inline bool get_s_IsActive_3() const { return ___s_IsActive_3; }
	inline bool* get_address_of_s_IsActive_3() { return &___s_IsActive_3; }
	inline void set_s_IsActive_3(bool value)
	{
		___s_IsActive_3 = value;
	}

	inline static int32_t get_offset_of_s_CRCMessage_15() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968_StaticFields, ___s_CRCMessage_15)); }
	inline CRCMessage_t4148217304 * get_s_CRCMessage_15() const { return ___s_CRCMessage_15; }
	inline CRCMessage_t4148217304 ** get_address_of_s_CRCMessage_15() { return &___s_CRCMessage_15; }
	inline void set_s_CRCMessage_15(CRCMessage_t4148217304 * value)
	{
		___s_CRCMessage_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_CRCMessage_15), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_22() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968_StaticFields, ___U3CU3Ef__mgU24cache0_22)); }
	inline AsyncCallback_t3962456242 * get_U3CU3Ef__mgU24cache0_22() const { return ___U3CU3Ef__mgU24cache0_22; }
	inline AsyncCallback_t3962456242 ** get_address_of_U3CU3Ef__mgU24cache0_22() { return &___U3CU3Ef__mgU24cache0_22; }
	inline void set_U3CU3Ef__mgU24cache0_22(AsyncCallback_t3962456242 * value)
	{
		___U3CU3Ef__mgU24cache0_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_23() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968_StaticFields, ___U3CU3Ef__mgU24cache1_23)); }
	inline NetworkMessageDelegate_t360140524 * get_U3CU3Ef__mgU24cache1_23() const { return ___U3CU3Ef__mgU24cache1_23; }
	inline NetworkMessageDelegate_t360140524 ** get_address_of_U3CU3Ef__mgU24cache1_23() { return &___U3CU3Ef__mgU24cache1_23; }
	inline void set_U3CU3Ef__mgU24cache1_23(NetworkMessageDelegate_t360140524 * value)
	{
		___U3CU3Ef__mgU24cache1_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKCLIENT_T3758195968_H
#ifndef NETWORKCONNECTION_T2705220091_H
#define NETWORKCONNECTION_T2705220091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkConnection
struct  NetworkConnection_t2705220091  : public RuntimeObject
{
public:
	// UnityEngine.Networking.ChannelBuffer[] UnityEngine.Networking.NetworkConnection::m_Channels
	ChannelBufferU5BU5D_t2631829696* ___m_Channels_0;
	// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerController> UnityEngine.Networking.NetworkConnection::m_PlayerControllers
	List_1_t1968562558 * ___m_PlayerControllers_1;
	// UnityEngine.Networking.NetworkMessage UnityEngine.Networking.NetworkConnection::m_NetMsg
	NetworkMessage_t1192515889 * ___m_NetMsg_2;
	// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkIdentity> UnityEngine.Networking.NetworkConnection::m_VisList
	HashSet_1_t1864468531 * ___m_VisList_3;
	// UnityEngine.Networking.NetworkWriter UnityEngine.Networking.NetworkConnection::m_Writer
	NetworkWriter_t3928387057 * ___m_Writer_4;
	// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkMessageDelegate> UnityEngine.Networking.NetworkConnection::m_MessageHandlersDict
	Dictionary_2_t2550447661 * ___m_MessageHandlersDict_5;
	// UnityEngine.Networking.NetworkMessageHandlers UnityEngine.Networking.NetworkConnection::m_MessageHandlers
	NetworkMessageHandlers_t82575973 * ___m_MessageHandlers_6;
	// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkInstanceId> UnityEngine.Networking.NetworkConnection::m_ClientOwnedObjects
	HashSet_1_t3646266945 * ___m_ClientOwnedObjects_7;
	// UnityEngine.Networking.NetworkMessage UnityEngine.Networking.NetworkConnection::m_MessageInfo
	NetworkMessage_t1192515889 * ___m_MessageInfo_8;
	// UnityEngine.Networking.NetworkError UnityEngine.Networking.NetworkConnection::error
	int32_t ___error_10;
	// System.Int32 UnityEngine.Networking.NetworkConnection::hostId
	int32_t ___hostId_11;
	// System.Int32 UnityEngine.Networking.NetworkConnection::connectionId
	int32_t ___connectionId_12;
	// System.Boolean UnityEngine.Networking.NetworkConnection::isReady
	bool ___isReady_13;
	// System.String UnityEngine.Networking.NetworkConnection::address
	String_t* ___address_14;
	// System.Single UnityEngine.Networking.NetworkConnection::lastMessageTime
	float ___lastMessageTime_15;
	// System.Boolean UnityEngine.Networking.NetworkConnection::logNetworkMessages
	bool ___logNetworkMessages_16;
	// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkConnection/PacketStat> UnityEngine.Networking.NetworkConnection::m_PacketStats
	Dictionary_2_t1333685985 * ___m_PacketStats_17;
	// System.Boolean UnityEngine.Networking.NetworkConnection::m_Disposed
	bool ___m_Disposed_18;

public:
	inline static int32_t get_offset_of_m_Channels_0() { return static_cast<int32_t>(offsetof(NetworkConnection_t2705220091, ___m_Channels_0)); }
	inline ChannelBufferU5BU5D_t2631829696* get_m_Channels_0() const { return ___m_Channels_0; }
	inline ChannelBufferU5BU5D_t2631829696** get_address_of_m_Channels_0() { return &___m_Channels_0; }
	inline void set_m_Channels_0(ChannelBufferU5BU5D_t2631829696* value)
	{
		___m_Channels_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Channels_0), value);
	}

	inline static int32_t get_offset_of_m_PlayerControllers_1() { return static_cast<int32_t>(offsetof(NetworkConnection_t2705220091, ___m_PlayerControllers_1)); }
	inline List_1_t1968562558 * get_m_PlayerControllers_1() const { return ___m_PlayerControllers_1; }
	inline List_1_t1968562558 ** get_address_of_m_PlayerControllers_1() { return &___m_PlayerControllers_1; }
	inline void set_m_PlayerControllers_1(List_1_t1968562558 * value)
	{
		___m_PlayerControllers_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PlayerControllers_1), value);
	}

	inline static int32_t get_offset_of_m_NetMsg_2() { return static_cast<int32_t>(offsetof(NetworkConnection_t2705220091, ___m_NetMsg_2)); }
	inline NetworkMessage_t1192515889 * get_m_NetMsg_2() const { return ___m_NetMsg_2; }
	inline NetworkMessage_t1192515889 ** get_address_of_m_NetMsg_2() { return &___m_NetMsg_2; }
	inline void set_m_NetMsg_2(NetworkMessage_t1192515889 * value)
	{
		___m_NetMsg_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_NetMsg_2), value);
	}

	inline static int32_t get_offset_of_m_VisList_3() { return static_cast<int32_t>(offsetof(NetworkConnection_t2705220091, ___m_VisList_3)); }
	inline HashSet_1_t1864468531 * get_m_VisList_3() const { return ___m_VisList_3; }
	inline HashSet_1_t1864468531 ** get_address_of_m_VisList_3() { return &___m_VisList_3; }
	inline void set_m_VisList_3(HashSet_1_t1864468531 * value)
	{
		___m_VisList_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_VisList_3), value);
	}

	inline static int32_t get_offset_of_m_Writer_4() { return static_cast<int32_t>(offsetof(NetworkConnection_t2705220091, ___m_Writer_4)); }
	inline NetworkWriter_t3928387057 * get_m_Writer_4() const { return ___m_Writer_4; }
	inline NetworkWriter_t3928387057 ** get_address_of_m_Writer_4() { return &___m_Writer_4; }
	inline void set_m_Writer_4(NetworkWriter_t3928387057 * value)
	{
		___m_Writer_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Writer_4), value);
	}

	inline static int32_t get_offset_of_m_MessageHandlersDict_5() { return static_cast<int32_t>(offsetof(NetworkConnection_t2705220091, ___m_MessageHandlersDict_5)); }
	inline Dictionary_2_t2550447661 * get_m_MessageHandlersDict_5() const { return ___m_MessageHandlersDict_5; }
	inline Dictionary_2_t2550447661 ** get_address_of_m_MessageHandlersDict_5() { return &___m_MessageHandlersDict_5; }
	inline void set_m_MessageHandlersDict_5(Dictionary_2_t2550447661 * value)
	{
		___m_MessageHandlersDict_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_MessageHandlersDict_5), value);
	}

	inline static int32_t get_offset_of_m_MessageHandlers_6() { return static_cast<int32_t>(offsetof(NetworkConnection_t2705220091, ___m_MessageHandlers_6)); }
	inline NetworkMessageHandlers_t82575973 * get_m_MessageHandlers_6() const { return ___m_MessageHandlers_6; }
	inline NetworkMessageHandlers_t82575973 ** get_address_of_m_MessageHandlers_6() { return &___m_MessageHandlers_6; }
	inline void set_m_MessageHandlers_6(NetworkMessageHandlers_t82575973 * value)
	{
		___m_MessageHandlers_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_MessageHandlers_6), value);
	}

	inline static int32_t get_offset_of_m_ClientOwnedObjects_7() { return static_cast<int32_t>(offsetof(NetworkConnection_t2705220091, ___m_ClientOwnedObjects_7)); }
	inline HashSet_1_t3646266945 * get_m_ClientOwnedObjects_7() const { return ___m_ClientOwnedObjects_7; }
	inline HashSet_1_t3646266945 ** get_address_of_m_ClientOwnedObjects_7() { return &___m_ClientOwnedObjects_7; }
	inline void set_m_ClientOwnedObjects_7(HashSet_1_t3646266945 * value)
	{
		___m_ClientOwnedObjects_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_ClientOwnedObjects_7), value);
	}

	inline static int32_t get_offset_of_m_MessageInfo_8() { return static_cast<int32_t>(offsetof(NetworkConnection_t2705220091, ___m_MessageInfo_8)); }
	inline NetworkMessage_t1192515889 * get_m_MessageInfo_8() const { return ___m_MessageInfo_8; }
	inline NetworkMessage_t1192515889 ** get_address_of_m_MessageInfo_8() { return &___m_MessageInfo_8; }
	inline void set_m_MessageInfo_8(NetworkMessage_t1192515889 * value)
	{
		___m_MessageInfo_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_MessageInfo_8), value);
	}

	inline static int32_t get_offset_of_error_10() { return static_cast<int32_t>(offsetof(NetworkConnection_t2705220091, ___error_10)); }
	inline int32_t get_error_10() const { return ___error_10; }
	inline int32_t* get_address_of_error_10() { return &___error_10; }
	inline void set_error_10(int32_t value)
	{
		___error_10 = value;
	}

	inline static int32_t get_offset_of_hostId_11() { return static_cast<int32_t>(offsetof(NetworkConnection_t2705220091, ___hostId_11)); }
	inline int32_t get_hostId_11() const { return ___hostId_11; }
	inline int32_t* get_address_of_hostId_11() { return &___hostId_11; }
	inline void set_hostId_11(int32_t value)
	{
		___hostId_11 = value;
	}

	inline static int32_t get_offset_of_connectionId_12() { return static_cast<int32_t>(offsetof(NetworkConnection_t2705220091, ___connectionId_12)); }
	inline int32_t get_connectionId_12() const { return ___connectionId_12; }
	inline int32_t* get_address_of_connectionId_12() { return &___connectionId_12; }
	inline void set_connectionId_12(int32_t value)
	{
		___connectionId_12 = value;
	}

	inline static int32_t get_offset_of_isReady_13() { return static_cast<int32_t>(offsetof(NetworkConnection_t2705220091, ___isReady_13)); }
	inline bool get_isReady_13() const { return ___isReady_13; }
	inline bool* get_address_of_isReady_13() { return &___isReady_13; }
	inline void set_isReady_13(bool value)
	{
		___isReady_13 = value;
	}

	inline static int32_t get_offset_of_address_14() { return static_cast<int32_t>(offsetof(NetworkConnection_t2705220091, ___address_14)); }
	inline String_t* get_address_14() const { return ___address_14; }
	inline String_t** get_address_of_address_14() { return &___address_14; }
	inline void set_address_14(String_t* value)
	{
		___address_14 = value;
		Il2CppCodeGenWriteBarrier((&___address_14), value);
	}

	inline static int32_t get_offset_of_lastMessageTime_15() { return static_cast<int32_t>(offsetof(NetworkConnection_t2705220091, ___lastMessageTime_15)); }
	inline float get_lastMessageTime_15() const { return ___lastMessageTime_15; }
	inline float* get_address_of_lastMessageTime_15() { return &___lastMessageTime_15; }
	inline void set_lastMessageTime_15(float value)
	{
		___lastMessageTime_15 = value;
	}

	inline static int32_t get_offset_of_logNetworkMessages_16() { return static_cast<int32_t>(offsetof(NetworkConnection_t2705220091, ___logNetworkMessages_16)); }
	inline bool get_logNetworkMessages_16() const { return ___logNetworkMessages_16; }
	inline bool* get_address_of_logNetworkMessages_16() { return &___logNetworkMessages_16; }
	inline void set_logNetworkMessages_16(bool value)
	{
		___logNetworkMessages_16 = value;
	}

	inline static int32_t get_offset_of_m_PacketStats_17() { return static_cast<int32_t>(offsetof(NetworkConnection_t2705220091, ___m_PacketStats_17)); }
	inline Dictionary_2_t1333685985 * get_m_PacketStats_17() const { return ___m_PacketStats_17; }
	inline Dictionary_2_t1333685985 ** get_address_of_m_PacketStats_17() { return &___m_PacketStats_17; }
	inline void set_m_PacketStats_17(Dictionary_2_t1333685985 * value)
	{
		___m_PacketStats_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_PacketStats_17), value);
	}

	inline static int32_t get_offset_of_m_Disposed_18() { return static_cast<int32_t>(offsetof(NetworkConnection_t2705220091, ___m_Disposed_18)); }
	inline bool get_m_Disposed_18() const { return ___m_Disposed_18; }
	inline bool* get_address_of_m_Disposed_18() { return &___m_Disposed_18; }
	inline void set_m_Disposed_18(bool value)
	{
		___m_Disposed_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKCONNECTION_T2705220091_H
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
#ifndef COLLIDER_T1773347010_H
#define COLLIDER_T1773347010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t1773347010  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T1773347010_H
#ifndef LOCALCLIENT_T1191103892_H
#define LOCALCLIENT_T1191103892_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.LocalClient
struct  LocalClient_t1191103892  : public NetworkClient_t3758195968
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Networking.LocalClient/InternalMsg> UnityEngine.Networking.LocalClient::m_InternalMsgs
	List_1_t3843830149 * ___m_InternalMsgs_25;
	// System.Collections.Generic.List`1<UnityEngine.Networking.LocalClient/InternalMsg> UnityEngine.Networking.LocalClient::m_InternalMsgs2
	List_1_t3843830149 * ___m_InternalMsgs2_26;
	// System.Collections.Generic.Stack`1<UnityEngine.Networking.LocalClient/InternalMsg> UnityEngine.Networking.LocalClient::m_FreeMessages
	Stack_1_t3215144862 * ___m_FreeMessages_27;
	// UnityEngine.Networking.NetworkServer UnityEngine.Networking.LocalClient::m_LocalServer
	NetworkServer_t2920297688 * ___m_LocalServer_28;
	// System.Boolean UnityEngine.Networking.LocalClient::m_Connected
	bool ___m_Connected_29;
	// UnityEngine.Networking.NetworkMessage UnityEngine.Networking.LocalClient::s_InternalMessage
	NetworkMessage_t1192515889 * ___s_InternalMessage_30;

public:
	inline static int32_t get_offset_of_m_InternalMsgs_25() { return static_cast<int32_t>(offsetof(LocalClient_t1191103892, ___m_InternalMsgs_25)); }
	inline List_1_t3843830149 * get_m_InternalMsgs_25() const { return ___m_InternalMsgs_25; }
	inline List_1_t3843830149 ** get_address_of_m_InternalMsgs_25() { return &___m_InternalMsgs_25; }
	inline void set_m_InternalMsgs_25(List_1_t3843830149 * value)
	{
		___m_InternalMsgs_25 = value;
		Il2CppCodeGenWriteBarrier((&___m_InternalMsgs_25), value);
	}

	inline static int32_t get_offset_of_m_InternalMsgs2_26() { return static_cast<int32_t>(offsetof(LocalClient_t1191103892, ___m_InternalMsgs2_26)); }
	inline List_1_t3843830149 * get_m_InternalMsgs2_26() const { return ___m_InternalMsgs2_26; }
	inline List_1_t3843830149 ** get_address_of_m_InternalMsgs2_26() { return &___m_InternalMsgs2_26; }
	inline void set_m_InternalMsgs2_26(List_1_t3843830149 * value)
	{
		___m_InternalMsgs2_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_InternalMsgs2_26), value);
	}

	inline static int32_t get_offset_of_m_FreeMessages_27() { return static_cast<int32_t>(offsetof(LocalClient_t1191103892, ___m_FreeMessages_27)); }
	inline Stack_1_t3215144862 * get_m_FreeMessages_27() const { return ___m_FreeMessages_27; }
	inline Stack_1_t3215144862 ** get_address_of_m_FreeMessages_27() { return &___m_FreeMessages_27; }
	inline void set_m_FreeMessages_27(Stack_1_t3215144862 * value)
	{
		___m_FreeMessages_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_FreeMessages_27), value);
	}

	inline static int32_t get_offset_of_m_LocalServer_28() { return static_cast<int32_t>(offsetof(LocalClient_t1191103892, ___m_LocalServer_28)); }
	inline NetworkServer_t2920297688 * get_m_LocalServer_28() const { return ___m_LocalServer_28; }
	inline NetworkServer_t2920297688 ** get_address_of_m_LocalServer_28() { return &___m_LocalServer_28; }
	inline void set_m_LocalServer_28(NetworkServer_t2920297688 * value)
	{
		___m_LocalServer_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_LocalServer_28), value);
	}

	inline static int32_t get_offset_of_m_Connected_29() { return static_cast<int32_t>(offsetof(LocalClient_t1191103892, ___m_Connected_29)); }
	inline bool get_m_Connected_29() const { return ___m_Connected_29; }
	inline bool* get_address_of_m_Connected_29() { return &___m_Connected_29; }
	inline void set_m_Connected_29(bool value)
	{
		___m_Connected_29 = value;
	}

	inline static int32_t get_offset_of_s_InternalMessage_30() { return static_cast<int32_t>(offsetof(LocalClient_t1191103892, ___s_InternalMessage_30)); }
	inline NetworkMessage_t1192515889 * get_s_InternalMessage_30() const { return ___s_InternalMessage_30; }
	inline NetworkMessage_t1192515889 ** get_address_of_s_InternalMessage_30() { return &___s_InternalMessage_30; }
	inline void set_s_InternalMessage_30(NetworkMessage_t1192515889 * value)
	{
		___s_InternalMessage_30 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalMessage_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALCLIENT_T1191103892_H
#ifndef CLIENTMOVECALLBACK2D_T270751497_H
#define CLIENTMOVECALLBACK2D_T270751497_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D
struct  ClientMoveCallback2D_t270751497  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTMOVECALLBACK2D_T270751497_H
#ifndef CLIENTMOVECALLBACK3D_T1836835438_H
#define CLIENTMOVECALLBACK3D_T1836835438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D
struct  ClientMoveCallback3D_t1836835438  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTMOVECALLBACK3D_T1836835438_H
#ifndef SPAWNDELEGATE_T1585635496_H
#define SPAWNDELEGATE_T1585635496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.SpawnDelegate
struct  SpawnDelegate_t1585635496  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPAWNDELEGATE_T1585635496_H
#ifndef ULOCALCONNECTIONTOCLIENT_T1858816613_H
#define ULOCALCONNECTIONTOCLIENT_T1858816613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.ULocalConnectionToClient
struct  ULocalConnectionToClient_t1858816613  : public NetworkConnection_t2705220091
{
public:
	// UnityEngine.Networking.LocalClient UnityEngine.Networking.ULocalConnectionToClient::m_LocalClient
	LocalClient_t1191103892 * ___m_LocalClient_19;

public:
	inline static int32_t get_offset_of_m_LocalClient_19() { return static_cast<int32_t>(offsetof(ULocalConnectionToClient_t1858816613, ___m_LocalClient_19)); }
	inline LocalClient_t1191103892 * get_m_LocalClient_19() const { return ___m_LocalClient_19; }
	inline LocalClient_t1191103892 ** get_address_of_m_LocalClient_19() { return &___m_LocalClient_19; }
	inline void set_m_LocalClient_19(LocalClient_t1191103892 * value)
	{
		___m_LocalClient_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_LocalClient_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ULOCALCONNECTIONTOCLIENT_T1858816613_H
#ifndef ULOCALCONNECTIONTOSERVER_T1112427013_H
#define ULOCALCONNECTIONTOSERVER_T1112427013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.ULocalConnectionToServer
struct  ULocalConnectionToServer_t1112427013  : public NetworkConnection_t2705220091
{
public:
	// UnityEngine.Networking.NetworkServer UnityEngine.Networking.ULocalConnectionToServer::m_LocalServer
	NetworkServer_t2920297688 * ___m_LocalServer_19;

public:
	inline static int32_t get_offset_of_m_LocalServer_19() { return static_cast<int32_t>(offsetof(ULocalConnectionToServer_t1112427013, ___m_LocalServer_19)); }
	inline NetworkServer_t2920297688 * get_m_LocalServer_19() const { return ___m_LocalServer_19; }
	inline NetworkServer_t2920297688 ** get_address_of_m_LocalServer_19() { return &___m_LocalServer_19; }
	inline void set_m_LocalServer_19(NetworkServer_t2920297688 * value)
	{
		___m_LocalServer_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_LocalServer_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ULOCALCONNECTIONTOSERVER_T1112427013_H
#ifndef UNSPAWNDELEGATE_T851741660_H
#define UNSPAWNDELEGATE_T851741660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UnSpawnDelegate
struct  UnSpawnDelegate_t851741660  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNSPAWNDELEGATE_T851741660_H
#ifndef RIGIDBODY_T3916780224_H
#define RIGIDBODY_T3916780224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody
struct  Rigidbody_t3916780224  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY_T3916780224_H
#ifndef RIGIDBODY2D_T939494601_H
#define RIGIDBODY2D_T939494601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody2D
struct  Rigidbody2D_t939494601  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY2D_T939494601_H
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
#ifndef CHARACTERCONTROLLER_T1138636865_H
#define CHARACTERCONTROLLER_T1138636865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CharacterController
struct  CharacterController_t1138636865  : public Collider_t1773347010
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERCONTROLLER_T1138636865_H
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
#ifndef NETWORKBEHAVIOUR_T204670959_H
#define NETWORKBEHAVIOUR_T204670959_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkBehaviour
struct  NetworkBehaviour_t204670959  : public MonoBehaviour_t3962482529
{
public:
	// System.UInt32 UnityEngine.Networking.NetworkBehaviour::m_SyncVarDirtyBits
	uint32_t ___m_SyncVarDirtyBits_4;
	// System.Single UnityEngine.Networking.NetworkBehaviour::m_LastSendTime
	float ___m_LastSendTime_5;
	// System.Boolean UnityEngine.Networking.NetworkBehaviour::m_SyncVarGuard
	bool ___m_SyncVarGuard_6;
	// UnityEngine.Networking.NetworkIdentity UnityEngine.Networking.NetworkBehaviour::m_MyView
	NetworkIdentity_t3299519057 * ___m_MyView_8;

public:
	inline static int32_t get_offset_of_m_SyncVarDirtyBits_4() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t204670959, ___m_SyncVarDirtyBits_4)); }
	inline uint32_t get_m_SyncVarDirtyBits_4() const { return ___m_SyncVarDirtyBits_4; }
	inline uint32_t* get_address_of_m_SyncVarDirtyBits_4() { return &___m_SyncVarDirtyBits_4; }
	inline void set_m_SyncVarDirtyBits_4(uint32_t value)
	{
		___m_SyncVarDirtyBits_4 = value;
	}

	inline static int32_t get_offset_of_m_LastSendTime_5() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t204670959, ___m_LastSendTime_5)); }
	inline float get_m_LastSendTime_5() const { return ___m_LastSendTime_5; }
	inline float* get_address_of_m_LastSendTime_5() { return &___m_LastSendTime_5; }
	inline void set_m_LastSendTime_5(float value)
	{
		___m_LastSendTime_5 = value;
	}

	inline static int32_t get_offset_of_m_SyncVarGuard_6() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t204670959, ___m_SyncVarGuard_6)); }
	inline bool get_m_SyncVarGuard_6() const { return ___m_SyncVarGuard_6; }
	inline bool* get_address_of_m_SyncVarGuard_6() { return &___m_SyncVarGuard_6; }
	inline void set_m_SyncVarGuard_6(bool value)
	{
		___m_SyncVarGuard_6 = value;
	}

	inline static int32_t get_offset_of_m_MyView_8() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t204670959, ___m_MyView_8)); }
	inline NetworkIdentity_t3299519057 * get_m_MyView_8() const { return ___m_MyView_8; }
	inline NetworkIdentity_t3299519057 ** get_address_of_m_MyView_8() { return &___m_MyView_8; }
	inline void set_m_MyView_8(NetworkIdentity_t3299519057 * value)
	{
		___m_MyView_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_MyView_8), value);
	}
};

struct NetworkBehaviour_t204670959_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Networking.NetworkBehaviour/Invoker> UnityEngine.Networking.NetworkBehaviour::s_CmdHandlerDelegates
	Dictionary_2_t100189446 * ___s_CmdHandlerDelegates_9;

public:
	inline static int32_t get_offset_of_s_CmdHandlerDelegates_9() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t204670959_StaticFields, ___s_CmdHandlerDelegates_9)); }
	inline Dictionary_2_t100189446 * get_s_CmdHandlerDelegates_9() const { return ___s_CmdHandlerDelegates_9; }
	inline Dictionary_2_t100189446 ** get_address_of_s_CmdHandlerDelegates_9() { return &___s_CmdHandlerDelegates_9; }
	inline void set_s_CmdHandlerDelegates_9(Dictionary_2_t100189446 * value)
	{
		___s_CmdHandlerDelegates_9 = value;
		Il2CppCodeGenWriteBarrier((&___s_CmdHandlerDelegates_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKBEHAVIOUR_T204670959_H
#ifndef NETWORKIDENTITY_T3299519057_H
#define NETWORKIDENTITY_T3299519057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkIdentity
struct  NetworkIdentity_t3299519057  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Networking.NetworkSceneId UnityEngine.Networking.NetworkIdentity::m_SceneId
	NetworkSceneId_t717048590  ___m_SceneId_4;
	// UnityEngine.Networking.NetworkHash128 UnityEngine.Networking.NetworkIdentity::m_AssetId
	NetworkHash128_t2391674535  ___m_AssetId_5;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_ServerOnly
	bool ___m_ServerOnly_6;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_LocalPlayerAuthority
	bool ___m_LocalPlayerAuthority_7;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_IsClient
	bool ___m_IsClient_8;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_IsServer
	bool ___m_IsServer_9;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_HasAuthority
	bool ___m_HasAuthority_10;
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkIdentity::m_NetId
	NetworkInstanceId_t786350175  ___m_NetId_11;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_IsLocalPlayer
	bool ___m_IsLocalPlayer_12;
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkIdentity::m_ConnectionToServer
	NetworkConnection_t2705220091 * ___m_ConnectionToServer_13;
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkIdentity::m_ConnectionToClient
	NetworkConnection_t2705220091 * ___m_ConnectionToClient_14;
	// System.Int16 UnityEngine.Networking.NetworkIdentity::m_PlayerId
	int16_t ___m_PlayerId_15;
	// UnityEngine.Networking.NetworkBehaviour[] UnityEngine.Networking.NetworkIdentity::m_NetworkBehaviours
	NetworkBehaviourU5BU5D_t2652047222* ___m_NetworkBehaviours_16;
	// System.Collections.Generic.HashSet`1<System.Int32> UnityEngine.Networking.NetworkIdentity::m_ObserverConnections
	HashSet_1_t1515895227 * ___m_ObserverConnections_17;
	// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection> UnityEngine.Networking.NetworkIdentity::m_Observers
	List_1_t4177294833 * ___m_Observers_18;
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkIdentity::m_ClientAuthorityOwner
	NetworkConnection_t2705220091 * ___m_ClientAuthorityOwner_19;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_Reset
	bool ___m_Reset_20;

public:
	inline static int32_t get_offset_of_m_SceneId_4() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057, ___m_SceneId_4)); }
	inline NetworkSceneId_t717048590  get_m_SceneId_4() const { return ___m_SceneId_4; }
	inline NetworkSceneId_t717048590 * get_address_of_m_SceneId_4() { return &___m_SceneId_4; }
	inline void set_m_SceneId_4(NetworkSceneId_t717048590  value)
	{
		___m_SceneId_4 = value;
	}

	inline static int32_t get_offset_of_m_AssetId_5() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057, ___m_AssetId_5)); }
	inline NetworkHash128_t2391674535  get_m_AssetId_5() const { return ___m_AssetId_5; }
	inline NetworkHash128_t2391674535 * get_address_of_m_AssetId_5() { return &___m_AssetId_5; }
	inline void set_m_AssetId_5(NetworkHash128_t2391674535  value)
	{
		___m_AssetId_5 = value;
	}

	inline static int32_t get_offset_of_m_ServerOnly_6() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057, ___m_ServerOnly_6)); }
	inline bool get_m_ServerOnly_6() const { return ___m_ServerOnly_6; }
	inline bool* get_address_of_m_ServerOnly_6() { return &___m_ServerOnly_6; }
	inline void set_m_ServerOnly_6(bool value)
	{
		___m_ServerOnly_6 = value;
	}

	inline static int32_t get_offset_of_m_LocalPlayerAuthority_7() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057, ___m_LocalPlayerAuthority_7)); }
	inline bool get_m_LocalPlayerAuthority_7() const { return ___m_LocalPlayerAuthority_7; }
	inline bool* get_address_of_m_LocalPlayerAuthority_7() { return &___m_LocalPlayerAuthority_7; }
	inline void set_m_LocalPlayerAuthority_7(bool value)
	{
		___m_LocalPlayerAuthority_7 = value;
	}

	inline static int32_t get_offset_of_m_IsClient_8() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057, ___m_IsClient_8)); }
	inline bool get_m_IsClient_8() const { return ___m_IsClient_8; }
	inline bool* get_address_of_m_IsClient_8() { return &___m_IsClient_8; }
	inline void set_m_IsClient_8(bool value)
	{
		___m_IsClient_8 = value;
	}

	inline static int32_t get_offset_of_m_IsServer_9() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057, ___m_IsServer_9)); }
	inline bool get_m_IsServer_9() const { return ___m_IsServer_9; }
	inline bool* get_address_of_m_IsServer_9() { return &___m_IsServer_9; }
	inline void set_m_IsServer_9(bool value)
	{
		___m_IsServer_9 = value;
	}

	inline static int32_t get_offset_of_m_HasAuthority_10() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057, ___m_HasAuthority_10)); }
	inline bool get_m_HasAuthority_10() const { return ___m_HasAuthority_10; }
	inline bool* get_address_of_m_HasAuthority_10() { return &___m_HasAuthority_10; }
	inline void set_m_HasAuthority_10(bool value)
	{
		___m_HasAuthority_10 = value;
	}

	inline static int32_t get_offset_of_m_NetId_11() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057, ___m_NetId_11)); }
	inline NetworkInstanceId_t786350175  get_m_NetId_11() const { return ___m_NetId_11; }
	inline NetworkInstanceId_t786350175 * get_address_of_m_NetId_11() { return &___m_NetId_11; }
	inline void set_m_NetId_11(NetworkInstanceId_t786350175  value)
	{
		___m_NetId_11 = value;
	}

	inline static int32_t get_offset_of_m_IsLocalPlayer_12() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057, ___m_IsLocalPlayer_12)); }
	inline bool get_m_IsLocalPlayer_12() const { return ___m_IsLocalPlayer_12; }
	inline bool* get_address_of_m_IsLocalPlayer_12() { return &___m_IsLocalPlayer_12; }
	inline void set_m_IsLocalPlayer_12(bool value)
	{
		___m_IsLocalPlayer_12 = value;
	}

	inline static int32_t get_offset_of_m_ConnectionToServer_13() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057, ___m_ConnectionToServer_13)); }
	inline NetworkConnection_t2705220091 * get_m_ConnectionToServer_13() const { return ___m_ConnectionToServer_13; }
	inline NetworkConnection_t2705220091 ** get_address_of_m_ConnectionToServer_13() { return &___m_ConnectionToServer_13; }
	inline void set_m_ConnectionToServer_13(NetworkConnection_t2705220091 * value)
	{
		___m_ConnectionToServer_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_ConnectionToServer_13), value);
	}

	inline static int32_t get_offset_of_m_ConnectionToClient_14() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057, ___m_ConnectionToClient_14)); }
	inline NetworkConnection_t2705220091 * get_m_ConnectionToClient_14() const { return ___m_ConnectionToClient_14; }
	inline NetworkConnection_t2705220091 ** get_address_of_m_ConnectionToClient_14() { return &___m_ConnectionToClient_14; }
	inline void set_m_ConnectionToClient_14(NetworkConnection_t2705220091 * value)
	{
		___m_ConnectionToClient_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_ConnectionToClient_14), value);
	}

	inline static int32_t get_offset_of_m_PlayerId_15() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057, ___m_PlayerId_15)); }
	inline int16_t get_m_PlayerId_15() const { return ___m_PlayerId_15; }
	inline int16_t* get_address_of_m_PlayerId_15() { return &___m_PlayerId_15; }
	inline void set_m_PlayerId_15(int16_t value)
	{
		___m_PlayerId_15 = value;
	}

	inline static int32_t get_offset_of_m_NetworkBehaviours_16() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057, ___m_NetworkBehaviours_16)); }
	inline NetworkBehaviourU5BU5D_t2652047222* get_m_NetworkBehaviours_16() const { return ___m_NetworkBehaviours_16; }
	inline NetworkBehaviourU5BU5D_t2652047222** get_address_of_m_NetworkBehaviours_16() { return &___m_NetworkBehaviours_16; }
	inline void set_m_NetworkBehaviours_16(NetworkBehaviourU5BU5D_t2652047222* value)
	{
		___m_NetworkBehaviours_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_NetworkBehaviours_16), value);
	}

	inline static int32_t get_offset_of_m_ObserverConnections_17() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057, ___m_ObserverConnections_17)); }
	inline HashSet_1_t1515895227 * get_m_ObserverConnections_17() const { return ___m_ObserverConnections_17; }
	inline HashSet_1_t1515895227 ** get_address_of_m_ObserverConnections_17() { return &___m_ObserverConnections_17; }
	inline void set_m_ObserverConnections_17(HashSet_1_t1515895227 * value)
	{
		___m_ObserverConnections_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObserverConnections_17), value);
	}

	inline static int32_t get_offset_of_m_Observers_18() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057, ___m_Observers_18)); }
	inline List_1_t4177294833 * get_m_Observers_18() const { return ___m_Observers_18; }
	inline List_1_t4177294833 ** get_address_of_m_Observers_18() { return &___m_Observers_18; }
	inline void set_m_Observers_18(List_1_t4177294833 * value)
	{
		___m_Observers_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_Observers_18), value);
	}

	inline static int32_t get_offset_of_m_ClientAuthorityOwner_19() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057, ___m_ClientAuthorityOwner_19)); }
	inline NetworkConnection_t2705220091 * get_m_ClientAuthorityOwner_19() const { return ___m_ClientAuthorityOwner_19; }
	inline NetworkConnection_t2705220091 ** get_address_of_m_ClientAuthorityOwner_19() { return &___m_ClientAuthorityOwner_19; }
	inline void set_m_ClientAuthorityOwner_19(NetworkConnection_t2705220091 * value)
	{
		___m_ClientAuthorityOwner_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_ClientAuthorityOwner_19), value);
	}

	inline static int32_t get_offset_of_m_Reset_20() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057, ___m_Reset_20)); }
	inline bool get_m_Reset_20() const { return ___m_Reset_20; }
	inline bool* get_address_of_m_Reset_20() { return &___m_Reset_20; }
	inline void set_m_Reset_20(bool value)
	{
		___m_Reset_20 = value;
	}
};

struct NetworkIdentity_t3299519057_StaticFields
{
public:
	// System.UInt32 UnityEngine.Networking.NetworkIdentity::s_NextNetworkId
	uint32_t ___s_NextNetworkId_21;
	// UnityEngine.Networking.NetworkWriter UnityEngine.Networking.NetworkIdentity::s_UpdateWriter
	NetworkWriter_t3928387057 * ___s_UpdateWriter_22;
	// UnityEngine.Networking.NetworkIdentity/ClientAuthorityCallback UnityEngine.Networking.NetworkIdentity::clientAuthorityCallback
	ClientAuthorityCallback_t1145534953 * ___clientAuthorityCallback_23;

public:
	inline static int32_t get_offset_of_s_NextNetworkId_21() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057_StaticFields, ___s_NextNetworkId_21)); }
	inline uint32_t get_s_NextNetworkId_21() const { return ___s_NextNetworkId_21; }
	inline uint32_t* get_address_of_s_NextNetworkId_21() { return &___s_NextNetworkId_21; }
	inline void set_s_NextNetworkId_21(uint32_t value)
	{
		___s_NextNetworkId_21 = value;
	}

	inline static int32_t get_offset_of_s_UpdateWriter_22() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057_StaticFields, ___s_UpdateWriter_22)); }
	inline NetworkWriter_t3928387057 * get_s_UpdateWriter_22() const { return ___s_UpdateWriter_22; }
	inline NetworkWriter_t3928387057 ** get_address_of_s_UpdateWriter_22() { return &___s_UpdateWriter_22; }
	inline void set_s_UpdateWriter_22(NetworkWriter_t3928387057 * value)
	{
		___s_UpdateWriter_22 = value;
		Il2CppCodeGenWriteBarrier((&___s_UpdateWriter_22), value);
	}

	inline static int32_t get_offset_of_clientAuthorityCallback_23() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057_StaticFields, ___clientAuthorityCallback_23)); }
	inline ClientAuthorityCallback_t1145534953 * get_clientAuthorityCallback_23() const { return ___clientAuthorityCallback_23; }
	inline ClientAuthorityCallback_t1145534953 ** get_address_of_clientAuthorityCallback_23() { return &___clientAuthorityCallback_23; }
	inline void set_clientAuthorityCallback_23(ClientAuthorityCallback_t1145534953 * value)
	{
		___clientAuthorityCallback_23 = value;
		Il2CppCodeGenWriteBarrier((&___clientAuthorityCallback_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKIDENTITY_T3299519057_H
#ifndef NETWORKSTARTPOSITION_T3934012644_H
#define NETWORKSTARTPOSITION_T3934012644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkStartPosition
struct  NetworkStartPosition_t3934012644  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKSTARTPOSITION_T3934012644_H
#ifndef NETWORKTRANSFORM_T3548153263_H
#define NETWORKTRANSFORM_T3548153263_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkTransform
struct  NetworkTransform_t3548153263  : public NetworkBehaviour_t204670959
{
public:
	// UnityEngine.Networking.NetworkTransform/TransformSyncMode UnityEngine.Networking.NetworkTransform::m_TransformSyncMode
	int32_t ___m_TransformSyncMode_10;
	// System.Single UnityEngine.Networking.NetworkTransform::m_SendInterval
	float ___m_SendInterval_11;
	// UnityEngine.Networking.NetworkTransform/AxisSyncMode UnityEngine.Networking.NetworkTransform::m_SyncRotationAxis
	int32_t ___m_SyncRotationAxis_12;
	// UnityEngine.Networking.NetworkTransform/CompressionSyncMode UnityEngine.Networking.NetworkTransform::m_RotationSyncCompression
	int32_t ___m_RotationSyncCompression_13;
	// System.Boolean UnityEngine.Networking.NetworkTransform::m_SyncSpin
	bool ___m_SyncSpin_14;
	// System.Single UnityEngine.Networking.NetworkTransform::m_MovementTheshold
	float ___m_MovementTheshold_15;
	// System.Single UnityEngine.Networking.NetworkTransform::m_VelocityThreshold
	float ___m_VelocityThreshold_16;
	// System.Single UnityEngine.Networking.NetworkTransform::m_SnapThreshold
	float ___m_SnapThreshold_17;
	// System.Single UnityEngine.Networking.NetworkTransform::m_InterpolateRotation
	float ___m_InterpolateRotation_18;
	// System.Single UnityEngine.Networking.NetworkTransform::m_InterpolateMovement
	float ___m_InterpolateMovement_19;
	// UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D UnityEngine.Networking.NetworkTransform::m_ClientMoveCallback3D
	ClientMoveCallback3D_t1836835438 * ___m_ClientMoveCallback3D_20;
	// UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D UnityEngine.Networking.NetworkTransform::m_ClientMoveCallback2D
	ClientMoveCallback2D_t270751497 * ___m_ClientMoveCallback2D_21;
	// UnityEngine.Rigidbody UnityEngine.Networking.NetworkTransform::m_RigidBody3D
	Rigidbody_t3916780224 * ___m_RigidBody3D_22;
	// UnityEngine.Rigidbody2D UnityEngine.Networking.NetworkTransform::m_RigidBody2D
	Rigidbody2D_t939494601 * ___m_RigidBody2D_23;
	// UnityEngine.CharacterController UnityEngine.Networking.NetworkTransform::m_CharacterController
	CharacterController_t1138636865 * ___m_CharacterController_24;
	// System.Boolean UnityEngine.Networking.NetworkTransform::m_Grounded
	bool ___m_Grounded_25;
	// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::m_TargetSyncPosition
	Vector3_t3722313464  ___m_TargetSyncPosition_26;
	// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::m_TargetSyncVelocity
	Vector3_t3722313464  ___m_TargetSyncVelocity_27;
	// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::m_FixedPosDiff
	Vector3_t3722313464  ___m_FixedPosDiff_28;
	// UnityEngine.Quaternion UnityEngine.Networking.NetworkTransform::m_TargetSyncRotation3D
	Quaternion_t2301928331  ___m_TargetSyncRotation3D_29;
	// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::m_TargetSyncAngularVelocity3D
	Vector3_t3722313464  ___m_TargetSyncAngularVelocity3D_30;
	// System.Single UnityEngine.Networking.NetworkTransform::m_TargetSyncRotation2D
	float ___m_TargetSyncRotation2D_31;
	// System.Single UnityEngine.Networking.NetworkTransform::m_TargetSyncAngularVelocity2D
	float ___m_TargetSyncAngularVelocity2D_32;
	// System.Single UnityEngine.Networking.NetworkTransform::m_LastClientSyncTime
	float ___m_LastClientSyncTime_33;
	// System.Single UnityEngine.Networking.NetworkTransform::m_LastClientSendTime
	float ___m_LastClientSendTime_34;
	// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::m_PrevPosition
	Vector3_t3722313464  ___m_PrevPosition_35;
	// UnityEngine.Quaternion UnityEngine.Networking.NetworkTransform::m_PrevRotation
	Quaternion_t2301928331  ___m_PrevRotation_36;
	// System.Single UnityEngine.Networking.NetworkTransform::m_PrevRotation2D
	float ___m_PrevRotation2D_37;
	// System.Single UnityEngine.Networking.NetworkTransform::m_PrevVelocity
	float ___m_PrevVelocity_38;
	// UnityEngine.Networking.NetworkWriter UnityEngine.Networking.NetworkTransform::m_LocalTransformWriter
	NetworkWriter_t3928387057 * ___m_LocalTransformWriter_43;

public:
	inline static int32_t get_offset_of_m_TransformSyncMode_10() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_TransformSyncMode_10)); }
	inline int32_t get_m_TransformSyncMode_10() const { return ___m_TransformSyncMode_10; }
	inline int32_t* get_address_of_m_TransformSyncMode_10() { return &___m_TransformSyncMode_10; }
	inline void set_m_TransformSyncMode_10(int32_t value)
	{
		___m_TransformSyncMode_10 = value;
	}

	inline static int32_t get_offset_of_m_SendInterval_11() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_SendInterval_11)); }
	inline float get_m_SendInterval_11() const { return ___m_SendInterval_11; }
	inline float* get_address_of_m_SendInterval_11() { return &___m_SendInterval_11; }
	inline void set_m_SendInterval_11(float value)
	{
		___m_SendInterval_11 = value;
	}

	inline static int32_t get_offset_of_m_SyncRotationAxis_12() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_SyncRotationAxis_12)); }
	inline int32_t get_m_SyncRotationAxis_12() const { return ___m_SyncRotationAxis_12; }
	inline int32_t* get_address_of_m_SyncRotationAxis_12() { return &___m_SyncRotationAxis_12; }
	inline void set_m_SyncRotationAxis_12(int32_t value)
	{
		___m_SyncRotationAxis_12 = value;
	}

	inline static int32_t get_offset_of_m_RotationSyncCompression_13() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_RotationSyncCompression_13)); }
	inline int32_t get_m_RotationSyncCompression_13() const { return ___m_RotationSyncCompression_13; }
	inline int32_t* get_address_of_m_RotationSyncCompression_13() { return &___m_RotationSyncCompression_13; }
	inline void set_m_RotationSyncCompression_13(int32_t value)
	{
		___m_RotationSyncCompression_13 = value;
	}

	inline static int32_t get_offset_of_m_SyncSpin_14() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_SyncSpin_14)); }
	inline bool get_m_SyncSpin_14() const { return ___m_SyncSpin_14; }
	inline bool* get_address_of_m_SyncSpin_14() { return &___m_SyncSpin_14; }
	inline void set_m_SyncSpin_14(bool value)
	{
		___m_SyncSpin_14 = value;
	}

	inline static int32_t get_offset_of_m_MovementTheshold_15() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_MovementTheshold_15)); }
	inline float get_m_MovementTheshold_15() const { return ___m_MovementTheshold_15; }
	inline float* get_address_of_m_MovementTheshold_15() { return &___m_MovementTheshold_15; }
	inline void set_m_MovementTheshold_15(float value)
	{
		___m_MovementTheshold_15 = value;
	}

	inline static int32_t get_offset_of_m_VelocityThreshold_16() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_VelocityThreshold_16)); }
	inline float get_m_VelocityThreshold_16() const { return ___m_VelocityThreshold_16; }
	inline float* get_address_of_m_VelocityThreshold_16() { return &___m_VelocityThreshold_16; }
	inline void set_m_VelocityThreshold_16(float value)
	{
		___m_VelocityThreshold_16 = value;
	}

	inline static int32_t get_offset_of_m_SnapThreshold_17() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_SnapThreshold_17)); }
	inline float get_m_SnapThreshold_17() const { return ___m_SnapThreshold_17; }
	inline float* get_address_of_m_SnapThreshold_17() { return &___m_SnapThreshold_17; }
	inline void set_m_SnapThreshold_17(float value)
	{
		___m_SnapThreshold_17 = value;
	}

	inline static int32_t get_offset_of_m_InterpolateRotation_18() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_InterpolateRotation_18)); }
	inline float get_m_InterpolateRotation_18() const { return ___m_InterpolateRotation_18; }
	inline float* get_address_of_m_InterpolateRotation_18() { return &___m_InterpolateRotation_18; }
	inline void set_m_InterpolateRotation_18(float value)
	{
		___m_InterpolateRotation_18 = value;
	}

	inline static int32_t get_offset_of_m_InterpolateMovement_19() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_InterpolateMovement_19)); }
	inline float get_m_InterpolateMovement_19() const { return ___m_InterpolateMovement_19; }
	inline float* get_address_of_m_InterpolateMovement_19() { return &___m_InterpolateMovement_19; }
	inline void set_m_InterpolateMovement_19(float value)
	{
		___m_InterpolateMovement_19 = value;
	}

	inline static int32_t get_offset_of_m_ClientMoveCallback3D_20() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_ClientMoveCallback3D_20)); }
	inline ClientMoveCallback3D_t1836835438 * get_m_ClientMoveCallback3D_20() const { return ___m_ClientMoveCallback3D_20; }
	inline ClientMoveCallback3D_t1836835438 ** get_address_of_m_ClientMoveCallback3D_20() { return &___m_ClientMoveCallback3D_20; }
	inline void set_m_ClientMoveCallback3D_20(ClientMoveCallback3D_t1836835438 * value)
	{
		___m_ClientMoveCallback3D_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_ClientMoveCallback3D_20), value);
	}

	inline static int32_t get_offset_of_m_ClientMoveCallback2D_21() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_ClientMoveCallback2D_21)); }
	inline ClientMoveCallback2D_t270751497 * get_m_ClientMoveCallback2D_21() const { return ___m_ClientMoveCallback2D_21; }
	inline ClientMoveCallback2D_t270751497 ** get_address_of_m_ClientMoveCallback2D_21() { return &___m_ClientMoveCallback2D_21; }
	inline void set_m_ClientMoveCallback2D_21(ClientMoveCallback2D_t270751497 * value)
	{
		___m_ClientMoveCallback2D_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ClientMoveCallback2D_21), value);
	}

	inline static int32_t get_offset_of_m_RigidBody3D_22() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_RigidBody3D_22)); }
	inline Rigidbody_t3916780224 * get_m_RigidBody3D_22() const { return ___m_RigidBody3D_22; }
	inline Rigidbody_t3916780224 ** get_address_of_m_RigidBody3D_22() { return &___m_RigidBody3D_22; }
	inline void set_m_RigidBody3D_22(Rigidbody_t3916780224 * value)
	{
		___m_RigidBody3D_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_RigidBody3D_22), value);
	}

	inline static int32_t get_offset_of_m_RigidBody2D_23() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_RigidBody2D_23)); }
	inline Rigidbody2D_t939494601 * get_m_RigidBody2D_23() const { return ___m_RigidBody2D_23; }
	inline Rigidbody2D_t939494601 ** get_address_of_m_RigidBody2D_23() { return &___m_RigidBody2D_23; }
	inline void set_m_RigidBody2D_23(Rigidbody2D_t939494601 * value)
	{
		___m_RigidBody2D_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_RigidBody2D_23), value);
	}

	inline static int32_t get_offset_of_m_CharacterController_24() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_CharacterController_24)); }
	inline CharacterController_t1138636865 * get_m_CharacterController_24() const { return ___m_CharacterController_24; }
	inline CharacterController_t1138636865 ** get_address_of_m_CharacterController_24() { return &___m_CharacterController_24; }
	inline void set_m_CharacterController_24(CharacterController_t1138636865 * value)
	{
		___m_CharacterController_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_CharacterController_24), value);
	}

	inline static int32_t get_offset_of_m_Grounded_25() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_Grounded_25)); }
	inline bool get_m_Grounded_25() const { return ___m_Grounded_25; }
	inline bool* get_address_of_m_Grounded_25() { return &___m_Grounded_25; }
	inline void set_m_Grounded_25(bool value)
	{
		___m_Grounded_25 = value;
	}

	inline static int32_t get_offset_of_m_TargetSyncPosition_26() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_TargetSyncPosition_26)); }
	inline Vector3_t3722313464  get_m_TargetSyncPosition_26() const { return ___m_TargetSyncPosition_26; }
	inline Vector3_t3722313464 * get_address_of_m_TargetSyncPosition_26() { return &___m_TargetSyncPosition_26; }
	inline void set_m_TargetSyncPosition_26(Vector3_t3722313464  value)
	{
		___m_TargetSyncPosition_26 = value;
	}

	inline static int32_t get_offset_of_m_TargetSyncVelocity_27() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_TargetSyncVelocity_27)); }
	inline Vector3_t3722313464  get_m_TargetSyncVelocity_27() const { return ___m_TargetSyncVelocity_27; }
	inline Vector3_t3722313464 * get_address_of_m_TargetSyncVelocity_27() { return &___m_TargetSyncVelocity_27; }
	inline void set_m_TargetSyncVelocity_27(Vector3_t3722313464  value)
	{
		___m_TargetSyncVelocity_27 = value;
	}

	inline static int32_t get_offset_of_m_FixedPosDiff_28() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_FixedPosDiff_28)); }
	inline Vector3_t3722313464  get_m_FixedPosDiff_28() const { return ___m_FixedPosDiff_28; }
	inline Vector3_t3722313464 * get_address_of_m_FixedPosDiff_28() { return &___m_FixedPosDiff_28; }
	inline void set_m_FixedPosDiff_28(Vector3_t3722313464  value)
	{
		___m_FixedPosDiff_28 = value;
	}

	inline static int32_t get_offset_of_m_TargetSyncRotation3D_29() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_TargetSyncRotation3D_29)); }
	inline Quaternion_t2301928331  get_m_TargetSyncRotation3D_29() const { return ___m_TargetSyncRotation3D_29; }
	inline Quaternion_t2301928331 * get_address_of_m_TargetSyncRotation3D_29() { return &___m_TargetSyncRotation3D_29; }
	inline void set_m_TargetSyncRotation3D_29(Quaternion_t2301928331  value)
	{
		___m_TargetSyncRotation3D_29 = value;
	}

	inline static int32_t get_offset_of_m_TargetSyncAngularVelocity3D_30() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_TargetSyncAngularVelocity3D_30)); }
	inline Vector3_t3722313464  get_m_TargetSyncAngularVelocity3D_30() const { return ___m_TargetSyncAngularVelocity3D_30; }
	inline Vector3_t3722313464 * get_address_of_m_TargetSyncAngularVelocity3D_30() { return &___m_TargetSyncAngularVelocity3D_30; }
	inline void set_m_TargetSyncAngularVelocity3D_30(Vector3_t3722313464  value)
	{
		___m_TargetSyncAngularVelocity3D_30 = value;
	}

	inline static int32_t get_offset_of_m_TargetSyncRotation2D_31() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_TargetSyncRotation2D_31)); }
	inline float get_m_TargetSyncRotation2D_31() const { return ___m_TargetSyncRotation2D_31; }
	inline float* get_address_of_m_TargetSyncRotation2D_31() { return &___m_TargetSyncRotation2D_31; }
	inline void set_m_TargetSyncRotation2D_31(float value)
	{
		___m_TargetSyncRotation2D_31 = value;
	}

	inline static int32_t get_offset_of_m_TargetSyncAngularVelocity2D_32() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_TargetSyncAngularVelocity2D_32)); }
	inline float get_m_TargetSyncAngularVelocity2D_32() const { return ___m_TargetSyncAngularVelocity2D_32; }
	inline float* get_address_of_m_TargetSyncAngularVelocity2D_32() { return &___m_TargetSyncAngularVelocity2D_32; }
	inline void set_m_TargetSyncAngularVelocity2D_32(float value)
	{
		___m_TargetSyncAngularVelocity2D_32 = value;
	}

	inline static int32_t get_offset_of_m_LastClientSyncTime_33() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_LastClientSyncTime_33)); }
	inline float get_m_LastClientSyncTime_33() const { return ___m_LastClientSyncTime_33; }
	inline float* get_address_of_m_LastClientSyncTime_33() { return &___m_LastClientSyncTime_33; }
	inline void set_m_LastClientSyncTime_33(float value)
	{
		___m_LastClientSyncTime_33 = value;
	}

	inline static int32_t get_offset_of_m_LastClientSendTime_34() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_LastClientSendTime_34)); }
	inline float get_m_LastClientSendTime_34() const { return ___m_LastClientSendTime_34; }
	inline float* get_address_of_m_LastClientSendTime_34() { return &___m_LastClientSendTime_34; }
	inline void set_m_LastClientSendTime_34(float value)
	{
		___m_LastClientSendTime_34 = value;
	}

	inline static int32_t get_offset_of_m_PrevPosition_35() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_PrevPosition_35)); }
	inline Vector3_t3722313464  get_m_PrevPosition_35() const { return ___m_PrevPosition_35; }
	inline Vector3_t3722313464 * get_address_of_m_PrevPosition_35() { return &___m_PrevPosition_35; }
	inline void set_m_PrevPosition_35(Vector3_t3722313464  value)
	{
		___m_PrevPosition_35 = value;
	}

	inline static int32_t get_offset_of_m_PrevRotation_36() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_PrevRotation_36)); }
	inline Quaternion_t2301928331  get_m_PrevRotation_36() const { return ___m_PrevRotation_36; }
	inline Quaternion_t2301928331 * get_address_of_m_PrevRotation_36() { return &___m_PrevRotation_36; }
	inline void set_m_PrevRotation_36(Quaternion_t2301928331  value)
	{
		___m_PrevRotation_36 = value;
	}

	inline static int32_t get_offset_of_m_PrevRotation2D_37() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_PrevRotation2D_37)); }
	inline float get_m_PrevRotation2D_37() const { return ___m_PrevRotation2D_37; }
	inline float* get_address_of_m_PrevRotation2D_37() { return &___m_PrevRotation2D_37; }
	inline void set_m_PrevRotation2D_37(float value)
	{
		___m_PrevRotation2D_37 = value;
	}

	inline static int32_t get_offset_of_m_PrevVelocity_38() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_PrevVelocity_38)); }
	inline float get_m_PrevVelocity_38() const { return ___m_PrevVelocity_38; }
	inline float* get_address_of_m_PrevVelocity_38() { return &___m_PrevVelocity_38; }
	inline void set_m_PrevVelocity_38(float value)
	{
		___m_PrevVelocity_38 = value;
	}

	inline static int32_t get_offset_of_m_LocalTransformWriter_43() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_LocalTransformWriter_43)); }
	inline NetworkWriter_t3928387057 * get_m_LocalTransformWriter_43() const { return ___m_LocalTransformWriter_43; }
	inline NetworkWriter_t3928387057 ** get_address_of_m_LocalTransformWriter_43() { return &___m_LocalTransformWriter_43; }
	inline void set_m_LocalTransformWriter_43(NetworkWriter_t3928387057 * value)
	{
		___m_LocalTransformWriter_43 = value;
		Il2CppCodeGenWriteBarrier((&___m_LocalTransformWriter_43), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKTRANSFORM_T3548153263_H
#ifndef NETWORKTRANSFORMCHILD_T2600331682_H
#define NETWORKTRANSFORMCHILD_T2600331682_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkTransformChild
struct  NetworkTransformChild_t2600331682  : public NetworkBehaviour_t204670959
{
public:
	// UnityEngine.Transform UnityEngine.Networking.NetworkTransformChild::m_Target
	Transform_t3600365921 * ___m_Target_10;
	// System.UInt32 UnityEngine.Networking.NetworkTransformChild::m_ChildIndex
	uint32_t ___m_ChildIndex_11;
	// UnityEngine.Networking.NetworkTransform UnityEngine.Networking.NetworkTransformChild::m_Root
	NetworkTransform_t3548153263 * ___m_Root_12;
	// System.Single UnityEngine.Networking.NetworkTransformChild::m_SendInterval
	float ___m_SendInterval_13;
	// UnityEngine.Networking.NetworkTransform/AxisSyncMode UnityEngine.Networking.NetworkTransformChild::m_SyncRotationAxis
	int32_t ___m_SyncRotationAxis_14;
	// UnityEngine.Networking.NetworkTransform/CompressionSyncMode UnityEngine.Networking.NetworkTransformChild::m_RotationSyncCompression
	int32_t ___m_RotationSyncCompression_15;
	// System.Single UnityEngine.Networking.NetworkTransformChild::m_MovementThreshold
	float ___m_MovementThreshold_16;
	// System.Single UnityEngine.Networking.NetworkTransformChild::m_InterpolateRotation
	float ___m_InterpolateRotation_17;
	// System.Single UnityEngine.Networking.NetworkTransformChild::m_InterpolateMovement
	float ___m_InterpolateMovement_18;
	// UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D UnityEngine.Networking.NetworkTransformChild::m_ClientMoveCallback3D
	ClientMoveCallback3D_t1836835438 * ___m_ClientMoveCallback3D_19;
	// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransformChild::m_TargetSyncPosition
	Vector3_t3722313464  ___m_TargetSyncPosition_20;
	// UnityEngine.Quaternion UnityEngine.Networking.NetworkTransformChild::m_TargetSyncRotation3D
	Quaternion_t2301928331  ___m_TargetSyncRotation3D_21;
	// System.Single UnityEngine.Networking.NetworkTransformChild::m_LastClientSyncTime
	float ___m_LastClientSyncTime_22;
	// System.Single UnityEngine.Networking.NetworkTransformChild::m_LastClientSendTime
	float ___m_LastClientSendTime_23;
	// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransformChild::m_PrevPosition
	Vector3_t3722313464  ___m_PrevPosition_24;
	// UnityEngine.Quaternion UnityEngine.Networking.NetworkTransformChild::m_PrevRotation
	Quaternion_t2301928331  ___m_PrevRotation_25;
	// UnityEngine.Networking.NetworkWriter UnityEngine.Networking.NetworkTransformChild::m_LocalTransformWriter
	NetworkWriter_t3928387057 * ___m_LocalTransformWriter_28;

public:
	inline static int32_t get_offset_of_m_Target_10() { return static_cast<int32_t>(offsetof(NetworkTransformChild_t2600331682, ___m_Target_10)); }
	inline Transform_t3600365921 * get_m_Target_10() const { return ___m_Target_10; }
	inline Transform_t3600365921 ** get_address_of_m_Target_10() { return &___m_Target_10; }
	inline void set_m_Target_10(Transform_t3600365921 * value)
	{
		___m_Target_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_10), value);
	}

	inline static int32_t get_offset_of_m_ChildIndex_11() { return static_cast<int32_t>(offsetof(NetworkTransformChild_t2600331682, ___m_ChildIndex_11)); }
	inline uint32_t get_m_ChildIndex_11() const { return ___m_ChildIndex_11; }
	inline uint32_t* get_address_of_m_ChildIndex_11() { return &___m_ChildIndex_11; }
	inline void set_m_ChildIndex_11(uint32_t value)
	{
		___m_ChildIndex_11 = value;
	}

	inline static int32_t get_offset_of_m_Root_12() { return static_cast<int32_t>(offsetof(NetworkTransformChild_t2600331682, ___m_Root_12)); }
	inline NetworkTransform_t3548153263 * get_m_Root_12() const { return ___m_Root_12; }
	inline NetworkTransform_t3548153263 ** get_address_of_m_Root_12() { return &___m_Root_12; }
	inline void set_m_Root_12(NetworkTransform_t3548153263 * value)
	{
		___m_Root_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_Root_12), value);
	}

	inline static int32_t get_offset_of_m_SendInterval_13() { return static_cast<int32_t>(offsetof(NetworkTransformChild_t2600331682, ___m_SendInterval_13)); }
	inline float get_m_SendInterval_13() const { return ___m_SendInterval_13; }
	inline float* get_address_of_m_SendInterval_13() { return &___m_SendInterval_13; }
	inline void set_m_SendInterval_13(float value)
	{
		___m_SendInterval_13 = value;
	}

	inline static int32_t get_offset_of_m_SyncRotationAxis_14() { return static_cast<int32_t>(offsetof(NetworkTransformChild_t2600331682, ___m_SyncRotationAxis_14)); }
	inline int32_t get_m_SyncRotationAxis_14() const { return ___m_SyncRotationAxis_14; }
	inline int32_t* get_address_of_m_SyncRotationAxis_14() { return &___m_SyncRotationAxis_14; }
	inline void set_m_SyncRotationAxis_14(int32_t value)
	{
		___m_SyncRotationAxis_14 = value;
	}

	inline static int32_t get_offset_of_m_RotationSyncCompression_15() { return static_cast<int32_t>(offsetof(NetworkTransformChild_t2600331682, ___m_RotationSyncCompression_15)); }
	inline int32_t get_m_RotationSyncCompression_15() const { return ___m_RotationSyncCompression_15; }
	inline int32_t* get_address_of_m_RotationSyncCompression_15() { return &___m_RotationSyncCompression_15; }
	inline void set_m_RotationSyncCompression_15(int32_t value)
	{
		___m_RotationSyncCompression_15 = value;
	}

	inline static int32_t get_offset_of_m_MovementThreshold_16() { return static_cast<int32_t>(offsetof(NetworkTransformChild_t2600331682, ___m_MovementThreshold_16)); }
	inline float get_m_MovementThreshold_16() const { return ___m_MovementThreshold_16; }
	inline float* get_address_of_m_MovementThreshold_16() { return &___m_MovementThreshold_16; }
	inline void set_m_MovementThreshold_16(float value)
	{
		___m_MovementThreshold_16 = value;
	}

	inline static int32_t get_offset_of_m_InterpolateRotation_17() { return static_cast<int32_t>(offsetof(NetworkTransformChild_t2600331682, ___m_InterpolateRotation_17)); }
	inline float get_m_InterpolateRotation_17() const { return ___m_InterpolateRotation_17; }
	inline float* get_address_of_m_InterpolateRotation_17() { return &___m_InterpolateRotation_17; }
	inline void set_m_InterpolateRotation_17(float value)
	{
		___m_InterpolateRotation_17 = value;
	}

	inline static int32_t get_offset_of_m_InterpolateMovement_18() { return static_cast<int32_t>(offsetof(NetworkTransformChild_t2600331682, ___m_InterpolateMovement_18)); }
	inline float get_m_InterpolateMovement_18() const { return ___m_InterpolateMovement_18; }
	inline float* get_address_of_m_InterpolateMovement_18() { return &___m_InterpolateMovement_18; }
	inline void set_m_InterpolateMovement_18(float value)
	{
		___m_InterpolateMovement_18 = value;
	}

	inline static int32_t get_offset_of_m_ClientMoveCallback3D_19() { return static_cast<int32_t>(offsetof(NetworkTransformChild_t2600331682, ___m_ClientMoveCallback3D_19)); }
	inline ClientMoveCallback3D_t1836835438 * get_m_ClientMoveCallback3D_19() const { return ___m_ClientMoveCallback3D_19; }
	inline ClientMoveCallback3D_t1836835438 ** get_address_of_m_ClientMoveCallback3D_19() { return &___m_ClientMoveCallback3D_19; }
	inline void set_m_ClientMoveCallback3D_19(ClientMoveCallback3D_t1836835438 * value)
	{
		___m_ClientMoveCallback3D_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_ClientMoveCallback3D_19), value);
	}

	inline static int32_t get_offset_of_m_TargetSyncPosition_20() { return static_cast<int32_t>(offsetof(NetworkTransformChild_t2600331682, ___m_TargetSyncPosition_20)); }
	inline Vector3_t3722313464  get_m_TargetSyncPosition_20() const { return ___m_TargetSyncPosition_20; }
	inline Vector3_t3722313464 * get_address_of_m_TargetSyncPosition_20() { return &___m_TargetSyncPosition_20; }
	inline void set_m_TargetSyncPosition_20(Vector3_t3722313464  value)
	{
		___m_TargetSyncPosition_20 = value;
	}

	inline static int32_t get_offset_of_m_TargetSyncRotation3D_21() { return static_cast<int32_t>(offsetof(NetworkTransformChild_t2600331682, ___m_TargetSyncRotation3D_21)); }
	inline Quaternion_t2301928331  get_m_TargetSyncRotation3D_21() const { return ___m_TargetSyncRotation3D_21; }
	inline Quaternion_t2301928331 * get_address_of_m_TargetSyncRotation3D_21() { return &___m_TargetSyncRotation3D_21; }
	inline void set_m_TargetSyncRotation3D_21(Quaternion_t2301928331  value)
	{
		___m_TargetSyncRotation3D_21 = value;
	}

	inline static int32_t get_offset_of_m_LastClientSyncTime_22() { return static_cast<int32_t>(offsetof(NetworkTransformChild_t2600331682, ___m_LastClientSyncTime_22)); }
	inline float get_m_LastClientSyncTime_22() const { return ___m_LastClientSyncTime_22; }
	inline float* get_address_of_m_LastClientSyncTime_22() { return &___m_LastClientSyncTime_22; }
	inline void set_m_LastClientSyncTime_22(float value)
	{
		___m_LastClientSyncTime_22 = value;
	}

	inline static int32_t get_offset_of_m_LastClientSendTime_23() { return static_cast<int32_t>(offsetof(NetworkTransformChild_t2600331682, ___m_LastClientSendTime_23)); }
	inline float get_m_LastClientSendTime_23() const { return ___m_LastClientSendTime_23; }
	inline float* get_address_of_m_LastClientSendTime_23() { return &___m_LastClientSendTime_23; }
	inline void set_m_LastClientSendTime_23(float value)
	{
		___m_LastClientSendTime_23 = value;
	}

	inline static int32_t get_offset_of_m_PrevPosition_24() { return static_cast<int32_t>(offsetof(NetworkTransformChild_t2600331682, ___m_PrevPosition_24)); }
	inline Vector3_t3722313464  get_m_PrevPosition_24() const { return ___m_PrevPosition_24; }
	inline Vector3_t3722313464 * get_address_of_m_PrevPosition_24() { return &___m_PrevPosition_24; }
	inline void set_m_PrevPosition_24(Vector3_t3722313464  value)
	{
		___m_PrevPosition_24 = value;
	}

	inline static int32_t get_offset_of_m_PrevRotation_25() { return static_cast<int32_t>(offsetof(NetworkTransformChild_t2600331682, ___m_PrevRotation_25)); }
	inline Quaternion_t2301928331  get_m_PrevRotation_25() const { return ___m_PrevRotation_25; }
	inline Quaternion_t2301928331 * get_address_of_m_PrevRotation_25() { return &___m_PrevRotation_25; }
	inline void set_m_PrevRotation_25(Quaternion_t2301928331  value)
	{
		___m_PrevRotation_25 = value;
	}

	inline static int32_t get_offset_of_m_LocalTransformWriter_28() { return static_cast<int32_t>(offsetof(NetworkTransformChild_t2600331682, ___m_LocalTransformWriter_28)); }
	inline NetworkWriter_t3928387057 * get_m_LocalTransformWriter_28() const { return ___m_LocalTransformWriter_28; }
	inline NetworkWriter_t3928387057 ** get_address_of_m_LocalTransformWriter_28() { return &___m_LocalTransformWriter_28; }
	inline void set_m_LocalTransformWriter_28(NetworkWriter_t3928387057 * value)
	{
		___m_LocalTransformWriter_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_LocalTransformWriter_28), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKTRANSFORMCHILD_T2600331682_H
#ifndef NETWORKTRANSFORMVISUALIZER_T2328387012_H
#define NETWORKTRANSFORMVISUALIZER_T2328387012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkTransformVisualizer
struct  NetworkTransformVisualizer_t2328387012  : public NetworkBehaviour_t204670959
{
public:
	// UnityEngine.GameObject UnityEngine.Networking.NetworkTransformVisualizer::m_VisualizerPrefab
	GameObject_t1113636619 * ___m_VisualizerPrefab_10;
	// UnityEngine.Networking.NetworkTransform UnityEngine.Networking.NetworkTransformVisualizer::m_NetworkTransform
	NetworkTransform_t3548153263 * ___m_NetworkTransform_11;
	// UnityEngine.GameObject UnityEngine.Networking.NetworkTransformVisualizer::m_Visualizer
	GameObject_t1113636619 * ___m_Visualizer_12;

public:
	inline static int32_t get_offset_of_m_VisualizerPrefab_10() { return static_cast<int32_t>(offsetof(NetworkTransformVisualizer_t2328387012, ___m_VisualizerPrefab_10)); }
	inline GameObject_t1113636619 * get_m_VisualizerPrefab_10() const { return ___m_VisualizerPrefab_10; }
	inline GameObject_t1113636619 ** get_address_of_m_VisualizerPrefab_10() { return &___m_VisualizerPrefab_10; }
	inline void set_m_VisualizerPrefab_10(GameObject_t1113636619 * value)
	{
		___m_VisualizerPrefab_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_VisualizerPrefab_10), value);
	}

	inline static int32_t get_offset_of_m_NetworkTransform_11() { return static_cast<int32_t>(offsetof(NetworkTransformVisualizer_t2328387012, ___m_NetworkTransform_11)); }
	inline NetworkTransform_t3548153263 * get_m_NetworkTransform_11() const { return ___m_NetworkTransform_11; }
	inline NetworkTransform_t3548153263 ** get_address_of_m_NetworkTransform_11() { return &___m_NetworkTransform_11; }
	inline void set_m_NetworkTransform_11(NetworkTransform_t3548153263 * value)
	{
		___m_NetworkTransform_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_NetworkTransform_11), value);
	}

	inline static int32_t get_offset_of_m_Visualizer_12() { return static_cast<int32_t>(offsetof(NetworkTransformVisualizer_t2328387012, ___m_Visualizer_12)); }
	inline GameObject_t1113636619 * get_m_Visualizer_12() const { return ___m_Visualizer_12; }
	inline GameObject_t1113636619 ** get_address_of_m_Visualizer_12() { return &___m_Visualizer_12; }
	inline void set_m_Visualizer_12(GameObject_t1113636619 * value)
	{
		___m_Visualizer_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_Visualizer_12), value);
	}
};

struct NetworkTransformVisualizer_t2328387012_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.Networking.NetworkTransformVisualizer::s_LineMaterial
	Material_t340375123 * ___s_LineMaterial_13;

public:
	inline static int32_t get_offset_of_s_LineMaterial_13() { return static_cast<int32_t>(offsetof(NetworkTransformVisualizer_t2328387012_StaticFields, ___s_LineMaterial_13)); }
	inline Material_t340375123 * get_s_LineMaterial_13() const { return ___s_LineMaterial_13; }
	inline Material_t340375123 ** get_address_of_s_LineMaterial_13() { return &___s_LineMaterial_13; }
	inline void set_s_LineMaterial_13(Material_t340375123 * value)
	{
		___s_LineMaterial_13 = value;
		Il2CppCodeGenWriteBarrier((&___s_LineMaterial_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKTRANSFORMVISUALIZER_T2328387012_H
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
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
// UnityEngine.Networking.NetworkSystem.CRCMessageEntry[]
struct CRCMessageEntryU5BU5D_t2683386060  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CRCMessageEntry_t1041239249  m_Items[1];

public:
	inline CRCMessageEntry_t1041239249  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CRCMessageEntry_t1041239249 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CRCMessageEntry_t1041239249  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CRCMessageEntry_t1041239249  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CRCMessageEntry_t1041239249 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CRCMessageEntry_t1041239249  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Networking.NetworkSystem.PeerInfoPlayer[]
struct PeerInfoPlayerU5BU5D_t2287290788  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PeerInfoPlayer_t607460057  m_Items[1];

public:
	inline PeerInfoPlayer_t607460057  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PeerInfoPlayer_t607460057 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PeerInfoPlayer_t607460057  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline PeerInfoPlayer_t607460057  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PeerInfoPlayer_t607460057 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PeerInfoPlayer_t607460057  value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Networking.NetworkSystem.PeerInfoMessage[]
struct PeerInfoMessageU5BU5D_t2256646024  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PeerInfoMessage_t1835608005 * m_Items[1];

public:
	inline PeerInfoMessage_t1835608005 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PeerInfoMessage_t1835608005 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PeerInfoMessage_t1835608005 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline PeerInfoMessage_t1835608005 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PeerInfoMessage_t1835608005 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PeerInfoMessage_t1835608005 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Networking.NetworkTransformChild[]
struct NetworkTransformChildU5BU5D_t625172887  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) NetworkTransformChild_t2600331682 * m_Items[1];

public:
	inline NetworkTransformChild_t2600331682 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NetworkTransformChild_t2600331682 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NetworkTransformChild_t2600331682 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline NetworkTransformChild_t2600331682 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NetworkTransformChild_t2600331682 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NetworkTransformChild_t2600331682 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
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


// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.NetworkSystem.PeerInfoPlayer>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m3222186439_gshared (List_1_t2079534799 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.NetworkSystem.PeerInfoPlayer>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m2963065281_gshared (List_1_t2079534799 * __this, PeerInfoPlayer_t607460057  p0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.Networking.NetworkSystem.PeerInfoPlayer>::ToArray()
extern "C" IL2CPP_METHOD_ATTR PeerInfoPlayerU5BU5D_t2287290788* List_1_ToArray_m218384935_gshared (List_1_t2079534799 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m1913675517_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkInstanceId>::Contains(!0)
extern "C" IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m1296176293_gshared (HashSet_1_t3646266945 * __this, NetworkInstanceId_t786350175  p0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponents<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* Component_GetComponents_TisRuntimeObject_m2299767091_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponents<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* GameObject_GetComponents_TisRuntimeObject_m4251161329_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m2523540636_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Vector3_t3722313464  p1, Quaternion_t2301928331  p2, const RuntimeMethod* method);
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m4110759063_gshared (ArraySegment_1_t283560987 * __this, const RuntimeMethod* method);
// !0[] System.ArraySegment`1<System.Byte>::get_Array()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* ArraySegment_1_get_Array_m2580038436_gshared (ArraySegment_1_t283560987 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SyncList_1__ctor_m3510382209_gshared (SyncList_1_t2187079102 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::AddInternal(T)
extern "C" IL2CPP_METHOD_ATTR void SyncList_1_AddInternal_m2707695638_gshared (SyncList_1_t2187079102 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::Clear()
extern "C" IL2CPP_METHOD_ATTR void SyncList_1_Clear_m672306289_gshared (SyncList_1_t2187079102 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.SyncList`1<System.Boolean>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t SyncList_1_get_Count_m1619578576_gshared (SyncList_1_t2187079102 * __this, const RuntimeMethod* method);
// T UnityEngine.Networking.SyncList`1<System.Boolean>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool SyncList_1_get_Item_m2119903705_gshared (SyncList_1_t2187079102 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SyncList_1__ctor_m1007556774_gshared (SyncList_1_t3487057911 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::AddInternal(T)
extern "C" IL2CPP_METHOD_ATTR void SyncList_1_AddInternal_m3876800740_gshared (SyncList_1_t3487057911 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::Clear()
extern "C" IL2CPP_METHOD_ATTR void SyncList_1_Clear_m3306438993_gshared (SyncList_1_t3487057911 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.SyncList`1<System.Single>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t SyncList_1_get_Count_m3693813194_gshared (SyncList_1_t3487057911 * __this, const RuntimeMethod* method);
// T UnityEngine.Networking.SyncList`1<System.Single>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float SyncList_1_get_Item_m2226358506_gshared (SyncList_1_t3487057911 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SyncList_1__ctor_m1604967930_gshared (SyncList_1_t745769594 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::AddInternal(T)
extern "C" IL2CPP_METHOD_ATTR void SyncList_1_AddInternal_m3519097998_gshared (SyncList_1_t745769594 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::Clear()
extern "C" IL2CPP_METHOD_ATTR void SyncList_1_Clear_m1121888670_gshared (SyncList_1_t745769594 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.SyncList`1<System.Int32>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t SyncList_1_get_Count_m2152775233_gshared (SyncList_1_t745769594 * __this, const RuntimeMethod* method);
// T UnityEngine.Networking.SyncList`1<System.Int32>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t SyncList_1_get_Item_m664118597_gshared (SyncList_1_t745769594 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SyncList_1__ctor_m3429287748_gshared (SyncList_1_t874930005 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::AddInternal(T)
extern "C" IL2CPP_METHOD_ATTR void SyncList_1_AddInternal_m1790636807_gshared (SyncList_1_t874930005 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void SyncList_1_Clear_m1580098991_gshared (SyncList_1_t874930005 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.SyncList`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t SyncList_1_get_Count_m508618974_gshared (SyncList_1_t874930005 * __this, const RuntimeMethod* method);
// T UnityEngine.Networking.SyncList`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SyncList_1_get_Item_m2413022885_gshared (SyncList_1_t874930005 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SyncList_1__ctor_m2821956447_gshared (SyncList_1_t354885819 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::AddInternal(T)
extern "C" IL2CPP_METHOD_ATTR void SyncList_1_AddInternal_m277591762_gshared (SyncList_1_t354885819 * __this, uint32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::Clear()
extern "C" IL2CPP_METHOD_ATTR void SyncList_1_Clear_m3269847844_gshared (SyncList_1_t354885819 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.SyncList`1<System.UInt32>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t SyncList_1_get_Count_m3238029537_gshared (SyncList_1_t354885819 * __this, const RuntimeMethod* method);
// T UnityEngine.Networking.SyncList`1<System.UInt32>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint32_t SyncList_1_get_Item_m1374023387_gshared (SyncList_1_t354885819 * __this, int32_t p0, const RuntimeMethod* method);

// System.Void System.Attribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Attribute__ctor_m1529526131 (Attribute_t861562559 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkManager::RegisterStartPosition(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void NetworkManager_RegisterStartPosition_m1654181428 (RuntimeObject * __this /* static, unused */, Transform_t3600365921 * ___start0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkManager::UnRegisterStartPosition(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void NetworkManager_UnRegisterStartPosition_m2082425396 (RuntimeObject * __this /* static, unused */, Transform_t3600365921 * ___start0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.MessageBase::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MessageBase__ctor_m2164585239 (MessageBase_t3584795631 * __this, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.NetworkReader::ReadUInt16()
extern "C" IL2CPP_METHOD_ATTR uint16_t NetworkReader_ReadUInt16_m2326281171 (NetworkReader_t1574750186 * __this, const RuntimeMethod* method);
// System.Byte[] UnityEngine.Networking.NetworkReader::ReadBytesAndSize()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* NetworkReader_ReadBytesAndSize_m2467253557 (NetworkReader_t1574750186 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m413412595 (NetworkWriter_t3928387057 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::WriteBytesAndSize(System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_WriteBytesAndSize_m542866276 (NetworkWriter_t3928387057 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___count1, const RuntimeMethod* method);
// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkReader::ReadNetworkId()
extern "C" IL2CPP_METHOD_ATTR NetworkInstanceId_t786350175  NetworkReader_ReadNetworkId_m1117804330 (NetworkReader_t1574750186 * __this, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.NetworkReader::ReadPackedUInt32()
extern "C" IL2CPP_METHOD_ATTR uint32_t NetworkReader_ReadPackedUInt32_m1668516449 (NetworkReader_t1574750186 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Networking.NetworkReader::ReadSingle()
extern "C" IL2CPP_METHOD_ATTR float NetworkReader_ReadSingle_m2704596705 (NetworkReader_t1574750186 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.NetworkInstanceId)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m2257467436 (NetworkWriter_t3928387057 * __this, NetworkInstanceId_t786350175  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::WritePackedUInt32(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_WritePackedUInt32_m3131691200 (NetworkWriter_t3928387057 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Single)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m189730350 (NetworkWriter_t3928387057 * __this, float ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Networking.NetworkReader::ReadString()
extern "C" IL2CPP_METHOD_ATTR String_t* NetworkReader_ReadString_m1528719253 (NetworkReader_t1574750186 * __this, const RuntimeMethod* method);
// System.Byte UnityEngine.Networking.NetworkReader::ReadByte()
extern "C" IL2CPP_METHOD_ATTR uint8_t NetworkReader_ReadByte_m735744747 (NetworkReader_t1574750186 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.String)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m2410084080 (NetworkWriter_t3928387057 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m524839711 (NetworkWriter_t3928387057 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkReader::ReadBoolean()
extern "C" IL2CPP_METHOD_ATTR bool NetworkReader_ReadBoolean_m3855332856 (NetworkReader_t1574750186 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m2977220184 (NetworkWriter_t3928387057 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkSystem.EmptyMessage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void EmptyMessage__ctor_m2353732991 (EmptyMessage_t3892466266 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.NetworkHash128 UnityEngine.Networking.NetworkReader::ReadNetworkHash128()
extern "C" IL2CPP_METHOD_ATTR NetworkHash128_t2391674535  NetworkReader_ReadNetworkHash128_m4142791195 (NetworkReader_t1574750186 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Networking.NetworkReader::ReadVector3()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  NetworkReader_ReadVector3_m2097563330 (NetworkReader_t1574750186 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.NetworkReader::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkReader_get_Length_m2129561061 (NetworkReader_t1574750186 * __this, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.NetworkReader::get_Position()
extern "C" IL2CPP_METHOD_ATTR uint32_t NetworkReader_get_Position_m673994364 (NetworkReader_t1574750186 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Networking.NetworkReader::ReadQuaternion()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  NetworkReader_ReadQuaternion_m1467983897 (NetworkReader_t1574750186 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.NetworkHash128)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m426356230 (NetworkWriter_t3928387057 * __this, NetworkHash128_t2391674535  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m13082585 (NetworkWriter_t3928387057 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::WriteBytesFull(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_WriteBytesFull_m804870477 (NetworkWriter_t3928387057 * __this, ByteU5BU5D_t4116647657* ___buffer0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m2449292798 (NetworkWriter_t3928387057 * __this, Quaternion_t2301928331  ___value0, const RuntimeMethod* method);
// UnityEngine.Networking.NetworkSceneId UnityEngine.Networking.NetworkReader::ReadSceneId()
extern "C" IL2CPP_METHOD_ATTR NetworkSceneId_t717048590  NetworkReader_ReadSceneId_m3537241608 (NetworkReader_t1574750186 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.NetworkSceneId)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m3340287509 (NetworkWriter_t3928387057 * __this, NetworkSceneId_t717048590  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.NetworkSystem.PeerInfoPlayer>::.ctor()
inline void List_1__ctor_m3222186439 (List_1_t2079534799 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2079534799 *, const RuntimeMethod*))List_1__ctor_m3222186439_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.NetworkSystem.PeerInfoPlayer>::Add(!0)
inline void List_1_Add_m2963065281 (List_1_t2079534799 * __this, PeerInfoPlayer_t607460057  p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2079534799 *, PeerInfoPlayer_t607460057 , const RuntimeMethod*))List_1_Add_m2963065281_gshared)(__this, p0, method);
}
// !0[] System.Collections.Generic.List`1<UnityEngine.Networking.NetworkSystem.PeerInfoPlayer>::ToArray()
inline PeerInfoPlayerU5BU5D_t2287290788* List_1_ToArray_m218384935 (List_1_t2079534799 * __this, const RuntimeMethod* method)
{
	return ((  PeerInfoPlayerU5BU5D_t2287290788* (*) (List_1_t2079534799 *, const RuntimeMethod*))List_1_ToArray_m218384935_gshared)(__this, method);
}
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkSystem.PeerInfoMessage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PeerInfoMessage__ctor_m2153887162 (PeerInfoMessage_t1835608005 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NetworkBehaviour__ctor_m930927820 (NetworkBehaviour_t204670959 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t3916780224 * Component_GetComponent_TisRigidbody_t3916780224_m2301377470 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t3916780224 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_t939494601 * Component_GetComponent_TisRigidbody2D_t939494601_m3412538942 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_t939494601 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
inline CharacterController_t1138636865 * Component_GetComponent_TisCharacterController_t1138636865_m1645616368 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  CharacterController_t1138636865 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Transform_get_rotation_m3502953881 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkBehaviour::get_localPlayerAuthority()
extern "C" IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_localPlayerAuthority_m3825444790 (NetworkBehaviour_t204670959 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter__ctor_m18760743 (NetworkWriter_t3928387057 * __this, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.NetworkBehaviour::get_syncVarDirtyBits()
extern "C" IL2CPP_METHOD_ATTR uint32_t NetworkBehaviour_get_syncVarDirtyBits_m4125085072 (NetworkBehaviour_t204670959 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.NetworkTransform/TransformSyncMode UnityEngine.Networking.NetworkTransform::get_transformSyncMode()
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransform_get_transformSyncMode_m1860479488 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransform::SerializeModeTransform(UnityEngine.Networking.NetworkWriter)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_SerializeModeTransform_m1783024825 (NetworkTransform_t3548153263 * __this, NetworkWriter_t3928387057 * ___writer0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransform::SerializeMode3D(UnityEngine.Networking.NetworkWriter)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_SerializeMode3D_m1737298308 (NetworkTransform_t3548153263 * __this, NetworkWriter_t3928387057 * ___writer0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransform::SerializeMode2D(UnityEngine.Networking.NetworkWriter)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_SerializeMode2D_m906862596 (NetworkTransform_t3548153263 * __this, NetworkWriter_t3928387057 * ___writer0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransform::SerializeModeCharacterController(UnityEngine.Networking.NetworkWriter)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_SerializeModeCharacterController_m305220996 (NetworkTransform_t3548153263 * __this, NetworkWriter_t3928387057 * ___writer0, const RuntimeMethod* method);
// UnityEngine.Networking.NetworkTransform/AxisSyncMode UnityEngine.Networking.NetworkTransform::get_syncRotationAxis()
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransform_get_syncRotationAxis_m375318554 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.NetworkTransform/CompressionSyncMode UnityEngine.Networking.NetworkTransform::get_rotationSyncCompression()
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransform_get_rotationSyncCompression_m2323361826 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransform::SerializeRotation3D(UnityEngine.Networking.NetworkWriter,UnityEngine.Quaternion,UnityEngine.Networking.NetworkTransform/AxisSyncMode,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_SerializeRotation3D_m2417259645 (RuntimeObject * __this /* static, unused */, NetworkWriter_t3928387057 * ___writer0, Quaternion_t2301928331  ___rot1, int32_t ___mode2, int32_t ___compression3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransform::VerifySerializeComponentExists()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_VerifySerializeComponentExists_m3529188128 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkBehaviour::get_isServer()
extern "C" IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_isServer_m3662737156 (NetworkBehaviour_t204670959 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransform::SerializeVelocity3D(UnityEngine.Networking.NetworkWriter,UnityEngine.Vector3,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_SerializeVelocity3D_m2367663390 (RuntimeObject * __this /* static, unused */, NetworkWriter_t3928387057 * ___writer0, Vector3_t3722313464  ___velocity1, int32_t ___compression2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Rigidbody_get_position_m1712729619 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Rigidbody_get_velocity_m2993632669 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Rigidbody::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Rigidbody_get_rotation_m3610554181 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_angularVelocity()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Rigidbody_get_angularVelocity_m191123884 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransform::SerializeSpin3D(UnityEngine.Networking.NetworkWriter,UnityEngine.Vector3,UnityEngine.Networking.NetworkTransform/AxisSyncMode,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_SerializeSpin3D_m3447179846 (RuntimeObject * __this /* static, unused */, NetworkWriter_t3928387057 * ___writer0, Vector3_t3722313464  ___angularVelocity1, int32_t ___mode2, int32_t ___compression3, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m1474274574 (Vector3_t3722313464 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Implicit_m4260192859 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m13017049 (NetworkWriter_t3928387057 * __this, Vector2_t2156229523  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransform::SerializeVelocity2D(UnityEngine.Networking.NetworkWriter,UnityEngine.Vector2,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_SerializeVelocity2D_m3451347480 (RuntimeObject * __this /* static, unused */, NetworkWriter_t3928387057 * ___writer0, Vector2_t2156229523  ___velocity1, int32_t ___compression2, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransform::SerializeRotation2D(UnityEngine.Networking.NetworkWriter,System.Single,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_SerializeRotation2D_m2242062180 (RuntimeObject * __this /* static, unused */, NetworkWriter_t3928387057 * ___writer0, float ___rot1, int32_t ___compression2, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Rigidbody2D_get_position_m2575647076 (Rigidbody2D_t939494601 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Rigidbody2D_get_velocity_m366589732 (Rigidbody2D_t939494601 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rigidbody2D::get_rotation()
extern "C" IL2CPP_METHOD_ATTR float Rigidbody2D_get_rotation_m1584227507 (Rigidbody2D_t939494601 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rigidbody2D::get_angularVelocity()
extern "C" IL2CPP_METHOD_ATTR float Rigidbody2D_get_angularVelocity_m1959705066 (Rigidbody2D_t939494601 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransform::SerializeSpin2D(UnityEngine.Networking.NetworkWriter,System.Single,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_SerializeSpin2D_m2352206203 (RuntimeObject * __this /* static, unused */, NetworkWriter_t3928387057 * ___writer0, float ___angularVelocity1, int32_t ___compression2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_m837837635 (Vector2_t2156229523 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkServer::get_localClientActive()
extern "C" IL2CPP_METHOD_ATTR bool NetworkServer_get_localClientActive_m1778516964 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransform::UnserializeModeTransform(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_UnserializeModeTransform_m3827994885 (NetworkTransform_t3548153263 * __this, NetworkReader_t1574750186 * ___reader0, bool ___initialState1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransform::UnserializeMode3D(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_UnserializeMode3D_m1904062442 (NetworkTransform_t3548153263 * __this, NetworkReader_t1574750186 * ___reader0, bool ___initialState1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransform::UnserializeMode2D(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_UnserializeMode2D_m4000618177 (NetworkTransform_t3548153263 * __this, NetworkReader_t1574750186 * ___reader0, bool ___initialState1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransform::UnserializeModeCharacterController(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_UnserializeModeCharacterController_m4186511990 (NetworkTransform_t3548153263 * __this, NetworkReader_t1574750186 * ___reader0, bool ___initialState1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
extern "C" IL2CPP_METHOD_ATTR float Time_get_time_m2907476221 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkBehaviour::get_hasAuthority()
extern "C" IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_hasAuthority_m3994339092 (NetworkBehaviour_t204670959 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Networking.NetworkTransform::UnserializeRotation3D(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.NetworkTransform/AxisSyncMode,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  NetworkTransform_UnserializeRotation3D_m2713487431 (RuntimeObject * __this /* static, unused */, NetworkReader_t1574750186 * ___reader0, int32_t ___mode1, int32_t ___compression2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_get_identity_m3722672781 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D::Invoke(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR bool ClientMoveCallback3D_Invoke_m341842940 (ClientMoveCallback3D_t1836835438 * __this, Vector3_t3722313464 * ___position0, Vector3_t3722313464 * ___velocity1, Quaternion_t2301928331 * ___rotation2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkTransform::get_syncSpin()
extern "C" IL2CPP_METHOD_ATTR bool NetworkTransform_get_syncSpin_m3846305034 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::UnserializeSpin3D(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.NetworkTransform/AxisSyncMode,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  NetworkTransform_UnserializeSpin3D_m3995136278 (RuntimeObject * __this /* static, unused */, NetworkReader_t1574750186 * ___reader0, int32_t ___mode1, int32_t ___compression2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkBehaviour::get_isClient()
extern "C" IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_isClient_m792420926 (NetworkBehaviour_t204670959 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_MovePosition_m2109341474 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::MoveRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_MoveRotation_m72717779 (Rigidbody_t3916780224 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_m2899403247 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_angularVelocity_m4254006699 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector3_get_magnitude_m27958459 (Vector3_t3722313464 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Networking.NetworkTransform::get_snapThreshold()
extern "C" IL2CPP_METHOD_ATTR float NetworkTransform_get_snapThreshold_m1083191548 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_position_m2293099797 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Single UnityEngine.Networking.NetworkTransform::get_interpolateRotation()
extern "C" IL2CPP_METHOD_ATTR float NetworkTransform_get_interpolateRotation_m4199485228 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_rotation_m4187031548 (Rigidbody_t3916780224 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Networking.NetworkReader::ReadVector2()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  NetworkReader_ReadVector2_m4151988315 (NetworkReader_t1574750186 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Networking.NetworkTransform::UnserializeRotation2D(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C" IL2CPP_METHOD_ATTR float NetworkTransform_UnserializeRotation2D_m2763521727 (RuntimeObject * __this /* static, unused */, NetworkReader_t1574750186 * ___reader0, int32_t ___compression1, const RuntimeMethod* method);
// System.Single UnityEngine.Networking.NetworkTransform::UnserializeSpin2D(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C" IL2CPP_METHOD_ATTR float NetworkTransform_UnserializeSpin2D_m1793448452 (RuntimeObject * __this /* static, unused */, NetworkReader_t1574750186 * ___reader0, int32_t ___compression1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D::Invoke(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single&)
extern "C" IL2CPP_METHOD_ATTR bool ClientMoveCallback2D_Invoke_m3510372298 (ClientMoveCallback2D_t270751497 * __this, Vector2_t2156229523 * ___position0, Vector2_t2156229523 * ___velocity1, float* ___rotation2, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::MoveRotation(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody2D_MoveRotation_m3032842781 (Rigidbody2D_t939494601 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m2898400508 (Rigidbody2D_t939494601 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_angularVelocity(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody2D_set_angularVelocity_m2791812150 (Rigidbody2D_t939494601 * __this, float p0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Subtraction_m73004381 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m2752892833 (Vector2_t2156229523 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_position(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody2D_set_position_m1659195711 (Rigidbody2D_t939494601 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_rotation(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody2D_set_rotation_m1493600238 (Rigidbody2D_t939494601 * __this, float p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.CharacterController::get_velocity()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  CharacterController_get_velocity_m3517335080 (CharacterController_t1138636865 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Division_m510815599 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_fixedDeltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m3595802076 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransform::FixedUpdateServer()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_FixedUpdateServer_m961931446 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransform::FixedUpdateClient()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_FixedUpdateClient_m1456995231 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkServer::get_active()
extern "C" IL2CPP_METHOD_ATTR bool NetworkServer_get_active_m2527733392 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single UnityEngine.Networking.NetworkTransform::get_movementTheshold()
extern "C" IL2CPP_METHOD_ATTR float NetworkTransform_get_movementTheshold_m2177353652 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Quaternion::Angle(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR float Quaternion_Angle_m1586774072 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Quaternion_t2301928331  p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkTransform::CheckVelocityChanged()
extern "C" IL2CPP_METHOD_ATTR bool NetworkTransform_CheckVelocityChanged_m483418602 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkBehaviour::SetDirtyBit(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void NetworkBehaviour_SetDirtyBit_m3911198689 (NetworkBehaviour_t204670959 * __this, uint32_t ___dirtyBit0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkClient::get_active()
extern "C" IL2CPP_METHOD_ATTR bool NetworkClient_get_active_m761030454 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransform::InterpolateTransformMode3D()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_InterpolateTransformMode3D_m1581623810 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransform::InterpolateTransformMode2D()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_InterpolateTransformMode2D_m1581623809 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransform::InterpolateTransformModeCharacterController()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_InterpolateTransformModeCharacterController_m3454043386 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_Slerp_m1234055455 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Quaternion_t2301928331  p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m4231250055 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Quaternion::op_Equality(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_m1582314779 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Quaternion_t2301928331  p1, const RuntimeMethod* method);
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR int32_t CharacterController_Move_m1547317252 (CharacterController_t1138636865 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Multiply_m2347887432 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Division_m132623573 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_Euler_m3049309462 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Quaternion_get_eulerAngles_m3425202016 (Quaternion_t2301928331 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransform::SendTransform()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_SendTransform_m3176084316 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkTransform::HasMoved()
extern "C" IL2CPP_METHOD_ATTR bool NetworkTransform_HasMoved_m5550782 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.ClientScene::get_readyConnection()
extern "C" IL2CPP_METHOD_ATTR NetworkConnection_t2705220091 * ClientScene_get_readyConnection_m1213877119 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::StartMessage(System.Int16)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_StartMessage_m841875667 (NetworkWriter_t3928387057 * __this, int16_t ___msgType0, const RuntimeMethod* method);
// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkBehaviour::get_netId()
extern "C" IL2CPP_METHOD_ATTR NetworkInstanceId_t786350175  NetworkBehaviour_get_netId_m3535684635 (NetworkBehaviour_t204670959 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::FinishMessage()
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_FinishMessage_m3971444334 (NetworkWriter_t3928387057 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Networking.NetworkServer::FindLocalObject(UnityEngine.Networking.NetworkInstanceId)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * NetworkServer_FindLocalObject_m2800748537 (RuntimeObject * __this /* static, unused */, NetworkInstanceId_t786350175  ___netId0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.LogFilter::get_logError()
extern "C" IL2CPP_METHOD_ATTR bool LogFilter_get_logError_m2939562087 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Networking.NetworkTransform>()
inline NetworkTransform_t3548153263 * GameObject_GetComponent_TisNetworkTransform_t3548153263_m4093321400 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  NetworkTransform_t3548153263 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m1913675517_gshared)(__this, method);
}
// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkInstanceId> UnityEngine.Networking.NetworkConnection::get_clientOwnedObjects()
extern "C" IL2CPP_METHOD_ATTR HashSet_1_t3646266945 * NetworkConnection_get_clientOwnedObjects_m146181522 (NetworkConnection_t2705220091 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkInstanceId>::Contains(!0)
inline bool HashSet_1_Contains_m1296176293 (HashSet_1_t3646266945 * __this, NetworkInstanceId_t786350175  p0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t3646266945 *, NetworkInstanceId_t786350175 , const RuntimeMethod*))HashSet_1_Contains_m1296176293_gshared)(__this, p0, method);
}
// System.Boolean UnityEngine.Networking.LogFilter::get_logWarn()
extern "C" IL2CPP_METHOD_ATTR bool LogFilter_get_logWarn_m1931385554 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m1715369213 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Int16)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m297525087 (NetworkWriter_t3928387057 * __this, int16_t ___value0, const RuntimeMethod* method);
// System.Int16 UnityEngine.Networking.NetworkReader::ReadInt16()
extern "C" IL2CPP_METHOD_ATTR int16_t NetworkReader_ReadInt16_m2638377632 (NetworkReader_t1574750186 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransform::WriteAngle(UnityEngine.Networking.NetworkWriter,System.Single,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_WriteAngle_m3326937041 (RuntimeObject * __this /* static, unused */, NetworkWriter_t3928387057 * ___writer0, float ___angle1, int32_t ___compression2, const RuntimeMethod* method);
// System.Single UnityEngine.Networking.NetworkTransform::ReadAngle(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C" IL2CPP_METHOD_ATTR float NetworkTransform_ReadAngle_m1266769566 (RuntimeObject * __this /* static, unused */, NetworkReader_t1574750186 * ___reader0, int32_t ___compression1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Set(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3_Set_m1737058353 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::set_eulerAngles(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Quaternion_set_eulerAngles_m793195291 (Quaternion_t2301928331 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransformChild::OnValidate()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformChild_OnValidate_m1781966712 (NetworkTransformChild_t2600331682 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Transform_get_parent_m835071599 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponents<UnityEngine.Networking.NetworkTransformChild>()
inline NetworkTransformChildU5BU5D_t625172887* Component_GetComponents_TisNetworkTransformChild_t2600331682_m615632565 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  NetworkTransformChildU5BU5D_t625172887* (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_m2299767091_gshared)(__this, method);
}
// System.Single UnityEngine.Networking.NetworkTransformChild::get_movementThreshold()
extern "C" IL2CPP_METHOD_ATTR float NetworkTransformChild_get_movementThreshold_m286011546 (NetworkTransformChild_t2600331682 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransformChild::set_movementThreshold(System.Single)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformChild_set_movementThreshold_m685789584 (NetworkTransformChild_t2600331682 * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Networking.NetworkTransformChild::get_interpolateRotation()
extern "C" IL2CPP_METHOD_ATTR float NetworkTransformChild_get_interpolateRotation_m1528666188 (NetworkTransformChild_t2600331682 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransformChild::set_interpolateRotation(System.Single)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformChild_set_interpolateRotation_m836062001 (NetworkTransformChild_t2600331682 * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Networking.NetworkTransformChild::get_interpolateMovement()
extern "C" IL2CPP_METHOD_ATTR float NetworkTransformChild_get_interpolateMovement_m1181562889 (NetworkTransformChild_t2600331682 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransformChild::set_interpolateMovement(System.Single)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformChild_set_interpolateMovement_m788793289 (NetworkTransformChild_t2600331682 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_localPosition_m4234289348 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Transform_get_localRotation_m3487911431 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransformChild::SerializeModeTransform(UnityEngine.Networking.NetworkWriter)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformChild_SerializeModeTransform_m4127082126 (NetworkTransformChild_t2600331682 * __this, NetworkWriter_t3928387057 * ___writer0, const RuntimeMethod* method);
// UnityEngine.Networking.NetworkTransform/AxisSyncMode UnityEngine.Networking.NetworkTransformChild::get_syncRotationAxis()
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransformChild_get_syncRotationAxis_m2926896441 (NetworkTransformChild_t2600331682 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.NetworkTransform/CompressionSyncMode UnityEngine.Networking.NetworkTransformChild::get_rotationSyncCompression()
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransformChild_get_rotationSyncCompression_m556326378 (NetworkTransformChild_t2600331682 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransformChild::UnserializeModeTransform(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformChild_UnserializeModeTransform_m2691581115 (NetworkTransformChild_t2600331682 * __this, NetworkReader_t1574750186 * ___reader0, bool ___initialState1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransformChild::FixedUpdateServer()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformChild_FixedUpdateServer_m857381952 (NetworkTransformChild_t2600331682 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransformChild::FixedUpdateClient()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformChild_FixedUpdateClient_m1112757836 (NetworkTransformChild_t2600331682 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_Lerp_m407887542 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localPosition_m4128471975 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localRotation_m19445462 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransformChild::SendTransform()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformChild_SendTransform_m3675938991 (NetworkTransformChild_t2600331682 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkTransformChild::HasMoved()
extern "C" IL2CPP_METHOD_ATTR bool NetworkTransformChild_HasMoved_m673081863 (NetworkTransformChild_t2600331682 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponents<UnityEngine.Networking.NetworkTransformChild>()
inline NetworkTransformChildU5BU5D_t625172887* GameObject_GetComponents_TisNetworkTransformChild_t2600331682_m2654119007 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  NetworkTransformChildU5BU5D_t625172887* (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponents_TisRuntimeObject_m4251161329_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Networking.NetworkTransform>()
inline NetworkTransform_t3548153263 * Component_GetComponent_TisNetworkTransform_t3548153263_m4257392998 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  NetworkTransform_t3548153263 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void UnityEngine.Networking.NetworkTransformVisualizer::CreateLineMaterial()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformVisualizer_CreateLineMaterial_m3214025820 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t1113636619 * Object_Instantiate_TisGameObject_t1113636619_m1553712732 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * p0, Vector3_t3722313464  p1, Quaternion_t2301928331  p2, const RuntimeMethod* method)
{
	return ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, Vector3_t3722313464 , Quaternion_t2301928331 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2523540636_gshared)(__this /* static, unused */, p0, p1, p2, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::get_targetSyncPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  NetworkTransform_get_targetSyncPosition_m3939799000 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method);
// UnityEngine.Rigidbody UnityEngine.Networking.NetworkTransform::get_rigidbody3D()
extern "C" IL2CPP_METHOD_ATTR Rigidbody_t3916780224 * NetworkTransform_get_rigidbody3D_m1680182927 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t3916780224 * GameObject_GetComponent_TisRigidbody_t3916780224_m3944438356 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t3916780224 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m1913675517_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::get_targetSyncVelocity()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  NetworkTransform_get_targetSyncVelocity_m3799605955 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method);
// UnityEngine.Rigidbody2D UnityEngine.Networking.NetworkTransform::get_rigidbody2D()
extern "C" IL2CPP_METHOD_ATTR Rigidbody2D_t939494601 * NetworkTransform_get_rigidbody2D_m3914535243 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_t939494601 * GameObject_GetComponent_TisRigidbody2D_t939494601_m577109995 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_t939494601 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m1913675517_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Networking.NetworkTransform::get_targetSyncRotation3D()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  NetworkTransform_get_targetSyncRotation3D_m3959327059 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Networking.NetworkTransform::get_targetSyncRotation2D()
extern "C" IL2CPP_METHOD_ATTR float NetworkTransform_get_targetSyncRotation2D_m383745925 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Networking.NetworkTransform::get_lastSyncTime()
extern "C" IL2CPP_METHOD_ATTR float NetworkTransform_get_lastSyncTime_m3727643043 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Material_SetPass_m686253719 (Material_t340375123 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.GL::Begin(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GL_Begin_m1290681325 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_white_m332174077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.GL::Color(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void GL_Color_m2127587175 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, const RuntimeMethod* method);
// System.Void UnityEngine.GL::Vertex3(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void GL_Vertex3_m766753641 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.GL::End()
extern "C" IL2CPP_METHOD_ATTR void GL_End_m539612367 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransformVisualizer::DrawRotationInterpolation()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformVisualizer_DrawRotationInterpolation_m1716797941 (NetworkTransformVisualizer_t2328387012 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_yellow()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_yellow_m1287957903 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_right_m2535262102 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_green_m490390750 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_right_m1913784872 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Quaternion_op_Multiply_m2607404835 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
extern "C" IL2CPP_METHOD_ATTR Shader_t4151988712 * Shader_Find_m2092206247 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
extern "C" IL2CPP_METHOD_ATTR void Material__ctor_m1662457592 (Material_t340375123 * __this, Shader_t4151988712 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern "C" IL2CPP_METHOD_ATTR void Object_set_hideFlags_m1648752846 (Object_t631007953 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Material_SetInt_m1783799378 (Material_t340375123 * __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetBuffer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NetBuffer__ctor_m3439388757 (NetBuffer_t2156033743 * __this, const RuntimeMethod* method);
// System.Void System.Text.UTF8Encoding::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UTF8Encoding__ctor_m1224805231 (UTF8Encoding_t3956466879 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetBuffer::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void NetBuffer__ctor_m1859496364 (NetBuffer_t2156033743 * __this, ByteU5BU5D_t4116647657* ___buffer0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.NetBuffer::get_Position()
extern "C" IL2CPP_METHOD_ATTR uint32_t NetBuffer_get_Position_m2888524920 (NetBuffer_t2156033743 * __this, const RuntimeMethod* method);
// System.ArraySegment`1<System.Byte> UnityEngine.Networking.NetBuffer::AsArraySegment()
extern "C" IL2CPP_METHOD_ATTR ArraySegment_1_t283560987  NetBuffer_AsArraySegment_m2456076681 (NetBuffer_t2156033743 * __this, const RuntimeMethod* method);
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
inline int32_t ArraySegment_1_get_Count_m4110759063 (ArraySegment_1_t283560987 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t283560987 *, const RuntimeMethod*))ArraySegment_1_get_Count_m4110759063_gshared)(__this, method);
}
// !0[] System.ArraySegment`1<System.Byte>::get_Array()
inline ByteU5BU5D_t4116647657* ArraySegment_1_get_Array_m2580038436 (ArraySegment_1_t283560987 * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_t4116647657* (*) (ArraySegment_1_t283560987 *, const RuntimeMethod*))ArraySegment_1_get_Array_m2580038436_gshared)(__this, method);
}
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_Copy_m1988217701 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeArray * p1, int32_t p2, const RuntimeMethod* method);
// System.ArraySegment`1<System.Byte> UnityEngine.Networking.NetworkWriter::AsArraySegment()
extern "C" IL2CPP_METHOD_ATTR ArraySegment_1_t283560987  NetworkWriter_AsArraySegment_m857312692 (NetworkWriter_t3928387057 * __this, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.NetworkInstanceId::get_Value()
extern "C" IL2CPP_METHOD_ATTR uint32_t NetworkInstanceId_get_Value_m3072328574 (NetworkInstanceId_t786350175 * __this, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.NetworkSceneId::get_Value()
extern "C" IL2CPP_METHOD_ATTR uint32_t NetworkSceneId_get_Value_m1596061750 (NetworkSceneId_t717048590 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetBuffer::WriteByte(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void NetBuffer_WriteByte_m3822302387 (NetBuffer_t2156033743 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetBuffer::WriteByte2(System.Byte,System.Byte)
extern "C" IL2CPP_METHOD_ATTR void NetBuffer_WriteByte2_m389295316 (NetBuffer_t2156033743 * __this, uint8_t ___value00, uint8_t ___value11, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetBuffer::WriteByte4(System.Byte,System.Byte,System.Byte,System.Byte)
extern "C" IL2CPP_METHOD_ATTR void NetBuffer_WriteByte4_m2453375265 (NetBuffer_t2156033743 * __this, uint8_t ___value00, uint8_t ___value11, uint8_t ___value22, uint8_t ___value33, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetBuffer::WriteByte8(System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte)
extern "C" IL2CPP_METHOD_ATTR void NetBuffer_WriteByte8_m1631847787 (NetBuffer_t2156033743 * __this, uint8_t ___value00, uint8_t ___value11, uint8_t ___value22, uint8_t ___value33, uint8_t ___value44, uint8_t ___value55, uint8_t ___value66, uint8_t ___value77, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m2780906429 (NetworkWriter_t3928387057 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m3168402614 (NetworkWriter_t3928387057 * __this, uint64_t ___value0, const RuntimeMethod* method);
// System.Int32[] System.Decimal::GetBits(System.Decimal)
extern "C" IL2CPP_METHOD_ATTR Int32U5BU5D_t385246372* Decimal_GetBits_m453754410 (RuntimeObject * __this /* static, unused */, Decimal_t2948259380  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m2267024627 (NetworkWriter_t3928387057 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m3408750441 (IndexOutOfRangeException_t1578797820 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetBuffer::WriteBytes(System.Byte[],System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void NetBuffer_WriteBytes_m3812345676 (NetBuffer_t2156033743 * __this, ByteU5BU5D_t4116647657* ___buffer0, uint16_t ___count1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetBuffer::WriteBytesAtOffset(System.Byte[],System.UInt16,System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void NetBuffer_WriteBytesAtOffset_m2613591720 (NetBuffer_t2156033743 * __this, ByteU5BU5D_t4116647657* ___buffer0, uint16_t ___targetOffset1, uint16_t ___count2, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_xMin()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_xMin_m581135837 (Rect_t2360479859 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_yMin()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_yMin_m2601414109 (Rect_t2360479859 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_width_m3421484486 (Rect_t2360479859 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_height_m1358425599 (Rect_t2360479859 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Plane_get_normal_m2366091158 (Plane_t1000493321 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Plane::get_distance()
extern "C" IL2CPP_METHOD_ATTR float Plane_get_distance_m3054241251 (Plane_t1000493321 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Ray_get_direction_m761601601 (Ray_t3785851493 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Ray_get_origin_m2819290985 (Ray_t3785851493 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkIdentity::get_netId()
extern "C" IL2CPP_METHOD_ATTR NetworkInstanceId_t786350175  NetworkIdentity_get_netId_m3534357786 (NetworkIdentity_t3299519057 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Networking.NetworkIdentity>()
inline NetworkIdentity_t3299519057 * GameObject_GetComponent_TisNetworkIdentity_t3299519057_m4215495152 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  NetworkIdentity_t3299519057 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m1913675517_gshared)(__this, method);
}
// System.Void UnityEngine.Networking.NetBuffer::SeekZero()
extern "C" IL2CPP_METHOD_ATTR void NetBuffer_SeekZero_m818658810 (NetBuffer_t2156033743 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::SeekZero()
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_SeekZero_m4052279075 (NetworkWriter_t3928387057 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetBuffer::FinishMessage()
extern "C" IL2CPP_METHOD_ATTR void NetBuffer_FinishMessage_m1626721425 (NetBuffer_t2156033743 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.NetworkInstanceId::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* NetworkInstanceId_ToString_m2512558384 (NetworkInstanceId_t786350175 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* Object_get_name_m4211327027 (Object_t631007953 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m630303134 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Networking.SpawnDelegate::Invoke(UnityEngine.Vector3,UnityEngine.Networking.NetworkHash128)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * SpawnDelegate_Invoke_m2080818349 (SpawnDelegate_t1585635496 * __this, Vector3_t3722313464  ___position0, NetworkHash128_t2391674535  ___assetId1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::.ctor()
inline void SyncList_1__ctor_m3510382209 (SyncList_1_t2187079102 * __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_t2187079102 *, const RuntimeMethod*))SyncList_1__ctor_m3510382209_gshared)(__this, method);
}
// System.Void UnityEngine.Networking.SyncListBool::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SyncListBool__ctor_m4271378930 (SyncListBool_t2976666744 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::AddInternal(T)
inline void SyncList_1_AddInternal_m2707695638 (SyncList_1_t2187079102 * __this, bool p0, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_t2187079102 *, bool, const RuntimeMethod*))SyncList_1_AddInternal_m2707695638_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::Clear()
inline void SyncList_1_Clear_m672306289 (SyncList_1_t2187079102 * __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_t2187079102 *, const RuntimeMethod*))SyncList_1_Clear_m672306289_gshared)(__this, method);
}
// System.Int32 UnityEngine.Networking.SyncList`1<System.Boolean>::get_Count()
inline int32_t SyncList_1_get_Count_m1619578576 (SyncList_1_t2187079102 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SyncList_1_t2187079102 *, const RuntimeMethod*))SyncList_1_get_Count_m1619578576_gshared)(__this, method);
}
// T UnityEngine.Networking.SyncList`1<System.Boolean>::get_Item(System.Int32)
inline bool SyncList_1_get_Item_m2119903705 (SyncList_1_t2187079102 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  bool (*) (SyncList_1_t2187079102 *, int32_t, const RuntimeMethod*))SyncList_1_get_Item_m2119903705_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::.ctor()
inline void SyncList_1__ctor_m1007556774 (SyncList_1_t3487057911 * __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_t3487057911 *, const RuntimeMethod*))SyncList_1__ctor_m1007556774_gshared)(__this, method);
}
// System.Void UnityEngine.Networking.SyncListFloat::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SyncListFloat__ctor_m3007803704 (SyncListFloat_t1924884630 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::AddInternal(T)
inline void SyncList_1_AddInternal_m3876800740 (SyncList_1_t3487057911 * __this, float p0, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_t3487057911 *, float, const RuntimeMethod*))SyncList_1_AddInternal_m3876800740_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::Clear()
inline void SyncList_1_Clear_m3306438993 (SyncList_1_t3487057911 * __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_t3487057911 *, const RuntimeMethod*))SyncList_1_Clear_m3306438993_gshared)(__this, method);
}
// System.Int32 UnityEngine.Networking.SyncList`1<System.Single>::get_Count()
inline int32_t SyncList_1_get_Count_m3693813194 (SyncList_1_t3487057911 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SyncList_1_t3487057911 *, const RuntimeMethod*))SyncList_1_get_Count_m3693813194_gshared)(__this, method);
}
// T UnityEngine.Networking.SyncList`1<System.Single>::get_Item(System.Int32)
inline float SyncList_1_get_Item_m2226358506 (SyncList_1_t3487057911 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  float (*) (SyncList_1_t3487057911 *, int32_t, const RuntimeMethod*))SyncList_1_get_Item_m2226358506_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::.ctor()
inline void SyncList_1__ctor_m1604967930 (SyncList_1_t745769594 * __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_t745769594 *, const RuntimeMethod*))SyncList_1__ctor_m1604967930_gshared)(__this, method);
}
// System.Void UnityEngine.Networking.SyncListInt::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SyncListInt__ctor_m1747608816 (SyncListInt_t3061596081 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::AddInternal(T)
inline void SyncList_1_AddInternal_m3519097998 (SyncList_1_t745769594 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_t745769594 *, int32_t, const RuntimeMethod*))SyncList_1_AddInternal_m3519097998_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::Clear()
inline void SyncList_1_Clear_m1121888670 (SyncList_1_t745769594 * __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_t745769594 *, const RuntimeMethod*))SyncList_1_Clear_m1121888670_gshared)(__this, method);
}
// System.Int32 UnityEngine.Networking.SyncList`1<System.Int32>::get_Count()
inline int32_t SyncList_1_get_Count_m2152775233 (SyncList_1_t745769594 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SyncList_1_t745769594 *, const RuntimeMethod*))SyncList_1_get_Count_m2152775233_gshared)(__this, method);
}
// T UnityEngine.Networking.SyncList`1<System.Int32>::get_Item(System.Int32)
inline int32_t SyncList_1_get_Item_m664118597 (SyncList_1_t745769594 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SyncList_1_t745769594 *, int32_t, const RuntimeMethod*))SyncList_1_get_Item_m664118597_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Networking.SyncList`1<System.String>::.ctor()
inline void SyncList_1__ctor_m1252447513 (SyncList_1_t3937241826 * __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_t3937241826 *, const RuntimeMethod*))SyncList_1__ctor_m3429287748_gshared)(__this, method);
}
// System.Void UnityEngine.Networking.SyncListString::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SyncListString__ctor_m3133147658 (SyncListString_t3633002311 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.String>::AddInternal(T)
inline void SyncList_1_AddInternal_m613808320 (SyncList_1_t3937241826 * __this, String_t* p0, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_t3937241826 *, String_t*, const RuntimeMethod*))SyncList_1_AddInternal_m1790636807_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Networking.SyncList`1<System.String>::Clear()
inline void SyncList_1_Clear_m1260889700 (SyncList_1_t3937241826 * __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_t3937241826 *, const RuntimeMethod*))SyncList_1_Clear_m1580098991_gshared)(__this, method);
}
// System.Int32 UnityEngine.Networking.SyncList`1<System.String>::get_Count()
inline int32_t SyncList_1_get_Count_m120976442 (SyncList_1_t3937241826 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SyncList_1_t3937241826 *, const RuntimeMethod*))SyncList_1_get_Count_m508618974_gshared)(__this, method);
}
// T UnityEngine.Networking.SyncList`1<System.String>::get_Item(System.Int32)
inline String_t* SyncList_1_get_Item_m1975160048 (SyncList_1_t3937241826 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (SyncList_1_t3937241826 *, int32_t, const RuntimeMethod*))SyncList_1_get_Item_m2413022885_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::.ctor()
inline void SyncList_1__ctor_m2821956447 (SyncList_1_t354885819 * __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_t354885819 *, const RuntimeMethod*))SyncList_1__ctor_m2821956447_gshared)(__this, method);
}
// System.Void UnityEngine.Networking.SyncListUInt::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SyncListUInt__ctor_m3640746336 (SyncListUInt_t1324480882 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::AddInternal(T)
inline void SyncList_1_AddInternal_m277591762 (SyncList_1_t354885819 * __this, uint32_t p0, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_t354885819 *, uint32_t, const RuntimeMethod*))SyncList_1_AddInternal_m277591762_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::Clear()
inline void SyncList_1_Clear_m3269847844 (SyncList_1_t354885819 * __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_t354885819 *, const RuntimeMethod*))SyncList_1_Clear_m3269847844_gshared)(__this, method);
}
// System.Int32 UnityEngine.Networking.SyncList`1<System.UInt32>::get_Count()
inline int32_t SyncList_1_get_Count_m3238029537 (SyncList_1_t354885819 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SyncList_1_t354885819 *, const RuntimeMethod*))SyncList_1_get_Count_m3238029537_gshared)(__this, method);
}
// T UnityEngine.Networking.SyncList`1<System.UInt32>::get_Item(System.Int32)
inline uint32_t SyncList_1_get_Item_m1374023387 (SyncList_1_t354885819 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (SyncList_1_t354885819 *, int32_t, const RuntimeMethod*))SyncList_1_get_Item_m1374023387_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Networking.NetworkConnection::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NetworkConnection__ctor_m3056801716 (NetworkConnection_t2705220091 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.LocalClient::InvokeHandlerOnClient(System.Int16,UnityEngine.Networking.MessageBase,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void LocalClient_InvokeHandlerOnClient_m480158021 (LocalClient_t1191103892 * __this, int16_t ___msgType0, MessageBase_t3584795631 * ___msg1, int32_t ___channelId2, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.LocalClient::InvokeBytesOnClient(System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void LocalClient_InvokeBytesOnClient_m4098541965 (LocalClient_t1191103892 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___channelId1, const RuntimeMethod* method);
// System.Byte[] UnityEngine.Networking.NetworkWriter::AsArray()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* NetworkWriter_AsArray_m3793159246 (NetworkWriter_t3928387057 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkServer::InvokeHandlerOnServer(UnityEngine.Networking.ULocalConnectionToServer,System.Int16,UnityEngine.Networking.MessageBase,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool NetworkServer_InvokeHandlerOnServer_m645830171 (NetworkServer_t2920297688 * __this, ULocalConnectionToServer_t1112427013 * ___conn0, int16_t ___msgType1, MessageBase_t3584795631 * ___msg2, int32_t ___channelId3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkServer::InvokeBytes(UnityEngine.Networking.ULocalConnectionToServer,System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool NetworkServer_InvokeBytes_m3498919961 (NetworkServer_t2920297688 * __this, ULocalConnectionToServer_t1112427013 * ___conn0, ByteU5BU5D_t4116647657* ___buffer1, int32_t ___numBytes2, int32_t ___channelId3, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnSpawnDelegate::Invoke(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void UnSpawnDelegate_Invoke_m948252931 (UnSpawnDelegate_t851741660 * __this, GameObject_t1113636619 * ___spawned0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.NetworkSettingsAttribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NetworkSettingsAttribute__ctor_m2272638480 (NetworkSettingsAttribute_t4047325829 * __this, const RuntimeMethod* method)
{
	{
		__this->set_channel_0(0);
		__this->set_sendInterval_1((0.1f));
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Networking.NetworkStartPosition::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NetworkStartPosition__ctor_m4062121188 (NetworkStartPosition_t3934012644 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkStartPosition::Awake()
extern "C" IL2CPP_METHOD_ATTR void NetworkStartPosition_Awake_m4104348295 (NetworkStartPosition_t3934012644 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkStartPosition_Awake_m4104348295_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_t468665779_il2cpp_TypeInfo_var);
		NetworkManager_RegisterStartPosition_m1654181428(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkStartPosition::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void NetworkStartPosition_OnDestroy_m2657404384 (NetworkStartPosition_t3934012644 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkStartPosition_OnDestroy_m2657404384_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_t468665779_il2cpp_TypeInfo_var);
		NetworkManager_UnRegisterStartPosition_m2082425396(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.AddPlayerMessage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AddPlayerMessage__ctor_m279233149 (AddPlayerMessage_t787692541 * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_m2164585239(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.AddPlayerMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C" IL2CPP_METHOD_ATTR void AddPlayerMessage_Deserialize_m186926774 (AddPlayerMessage_t787692541 * __this, NetworkReader_t1574750186 * ___reader0, const RuntimeMethod* method)
{
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1 = NetworkReader_ReadUInt16_m2326281171(L_0, /*hidden argument*/NULL);
		__this->set_playerControllerId_0((((int16_t)((int16_t)L_1))));
		NetworkReader_t1574750186 * L_2 = ___reader0;
		NullCheck(L_2);
		ByteU5BU5D_t4116647657* L_3 = NetworkReader_ReadBytesAndSize_m2467253557(L_2, /*hidden argument*/NULL);
		__this->set_msgData_2(L_3);
		ByteU5BU5D_t4116647657* L_4 = __this->get_msgData_2();
		if (L_4)
		{
			goto IL_0033;
		}
	}
	{
		__this->set_msgSize_1(0);
		goto IL_0043;
	}

IL_0033:
	{
		ByteU5BU5D_t4116647657* L_5 = __this->get_msgData_2();
		NullCheck(L_5);
		__this->set_msgSize_1((((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))));
	}

IL_0043:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.AddPlayerMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C" IL2CPP_METHOD_ATTR void AddPlayerMessage_Serialize_m597273176 (AddPlayerMessage_t787692541 * __this, NetworkWriter_t3928387057 * ___writer0, const RuntimeMethod* method)
{
	{
		NetworkWriter_t3928387057 * L_0 = ___writer0;
		int16_t L_1 = __this->get_playerControllerId_0();
		NullCheck(L_0);
		NetworkWriter_Write_m413412595(L_0, (uint16_t)(((int32_t)((uint16_t)L_1))), /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_2 = ___writer0;
		ByteU5BU5D_t4116647657* L_3 = __this->get_msgData_2();
		int32_t L_4 = __this->get_msgSize_1();
		NullCheck(L_2);
		NetworkWriter_WriteBytesAndSize_m542866276(L_2, L_3, L_4, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.AnimationMessage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AnimationMessage__ctor_m1056235352 (AnimationMessage_t2187129444 * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_m2164585239(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.AnimationMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C" IL2CPP_METHOD_ATTR void AnimationMessage_Deserialize_m4161278668 (AnimationMessage_t2187129444 * __this, NetworkReader_t1574750186 * ___reader0, const RuntimeMethod* method)
{
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		NetworkInstanceId_t786350175  L_1 = NetworkReader_ReadNetworkId_m1117804330(L_0, /*hidden argument*/NULL);
		__this->set_netId_0(L_1);
		NetworkReader_t1574750186 * L_2 = ___reader0;
		NullCheck(L_2);
		uint32_t L_3 = NetworkReader_ReadPackedUInt32_m1668516449(L_2, /*hidden argument*/NULL);
		__this->set_stateHash_1(L_3);
		NetworkReader_t1574750186 * L_4 = ___reader0;
		NullCheck(L_4);
		float L_5 = NetworkReader_ReadSingle_m2704596705(L_4, /*hidden argument*/NULL);
		__this->set_normalizedTime_2(L_5);
		NetworkReader_t1574750186 * L_6 = ___reader0;
		NullCheck(L_6);
		ByteU5BU5D_t4116647657* L_7 = NetworkReader_ReadBytesAndSize_m2467253557(L_6, /*hidden argument*/NULL);
		__this->set_parameters_3(L_7);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.AnimationMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C" IL2CPP_METHOD_ATTR void AnimationMessage_Serialize_m292377326 (AnimationMessage_t2187129444 * __this, NetworkWriter_t3928387057 * ___writer0, const RuntimeMethod* method)
{
	{
		NetworkWriter_t3928387057 * L_0 = ___writer0;
		NetworkInstanceId_t786350175  L_1 = __this->get_netId_0();
		NullCheck(L_0);
		NetworkWriter_Write_m2257467436(L_0, L_1, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_2 = ___writer0;
		int32_t L_3 = __this->get_stateHash_1();
		NullCheck(L_2);
		NetworkWriter_WritePackedUInt32_m3131691200(L_2, L_3, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_4 = ___writer0;
		float L_5 = __this->get_normalizedTime_2();
		NullCheck(L_4);
		NetworkWriter_Write_m189730350(L_4, L_5, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_6 = __this->get_parameters_3();
		if (L_6)
		{
			goto IL_0042;
		}
	}
	{
		NetworkWriter_t3928387057 * L_7 = ___writer0;
		ByteU5BU5D_t4116647657* L_8 = __this->get_parameters_3();
		NullCheck(L_7);
		NetworkWriter_WriteBytesAndSize_m542866276(L_7, L_8, 0, /*hidden argument*/NULL);
		goto IL_0056;
	}

IL_0042:
	{
		NetworkWriter_t3928387057 * L_9 = ___writer0;
		ByteU5BU5D_t4116647657* L_10 = __this->get_parameters_3();
		ByteU5BU5D_t4116647657* L_11 = __this->get_parameters_3();
		NullCheck(L_11);
		NullCheck(L_9);
		NetworkWriter_WriteBytesAndSize_m542866276(L_9, L_10, (((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))), /*hidden argument*/NULL);
	}

IL_0056:
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
// System.Void UnityEngine.Networking.NetworkSystem.AnimationParametersMessage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AnimationParametersMessage__ctor_m861654173 (AnimationParametersMessage_t2014820556 * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_m2164585239(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.AnimationParametersMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C" IL2CPP_METHOD_ATTR void AnimationParametersMessage_Deserialize_m2514234204 (AnimationParametersMessage_t2014820556 * __this, NetworkReader_t1574750186 * ___reader0, const RuntimeMethod* method)
{
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		NetworkInstanceId_t786350175  L_1 = NetworkReader_ReadNetworkId_m1117804330(L_0, /*hidden argument*/NULL);
		__this->set_netId_0(L_1);
		NetworkReader_t1574750186 * L_2 = ___reader0;
		NullCheck(L_2);
		ByteU5BU5D_t4116647657* L_3 = NetworkReader_ReadBytesAndSize_m2467253557(L_2, /*hidden argument*/NULL);
		__this->set_parameters_1(L_3);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.AnimationParametersMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C" IL2CPP_METHOD_ATTR void AnimationParametersMessage_Serialize_m2568074375 (AnimationParametersMessage_t2014820556 * __this, NetworkWriter_t3928387057 * ___writer0, const RuntimeMethod* method)
{
	{
		NetworkWriter_t3928387057 * L_0 = ___writer0;
		NetworkInstanceId_t786350175  L_1 = __this->get_netId_0();
		NullCheck(L_0);
		NetworkWriter_Write_m2257467436(L_0, L_1, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_2 = __this->get_parameters_1();
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		NetworkWriter_t3928387057 * L_3 = ___writer0;
		ByteU5BU5D_t4116647657* L_4 = __this->get_parameters_1();
		NullCheck(L_3);
		NetworkWriter_WriteBytesAndSize_m542866276(L_3, L_4, 0, /*hidden argument*/NULL);
		goto IL_003e;
	}

IL_002a:
	{
		NetworkWriter_t3928387057 * L_5 = ___writer0;
		ByteU5BU5D_t4116647657* L_6 = __this->get_parameters_1();
		ByteU5BU5D_t4116647657* L_7 = __this->get_parameters_1();
		NullCheck(L_7);
		NullCheck(L_5);
		NetworkWriter_WriteBytesAndSize_m542866276(L_5, L_6, (((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length)))), /*hidden argument*/NULL);
	}

IL_003e:
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
// System.Void UnityEngine.Networking.NetworkSystem.AnimationTriggerMessage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AnimationTriggerMessage__ctor_m2840879992 (AnimationTriggerMessage_t1881009617 * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_m2164585239(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.AnimationTriggerMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C" IL2CPP_METHOD_ATTR void AnimationTriggerMessage_Deserialize_m608659875 (AnimationTriggerMessage_t1881009617 * __this, NetworkReader_t1574750186 * ___reader0, const RuntimeMethod* method)
{
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		NetworkInstanceId_t786350175  L_1 = NetworkReader_ReadNetworkId_m1117804330(L_0, /*hidden argument*/NULL);
		__this->set_netId_0(L_1);
		NetworkReader_t1574750186 * L_2 = ___reader0;
		NullCheck(L_2);
		uint32_t L_3 = NetworkReader_ReadPackedUInt32_m1668516449(L_2, /*hidden argument*/NULL);
		__this->set_hash_1(L_3);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.AnimationTriggerMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C" IL2CPP_METHOD_ATTR void AnimationTriggerMessage_Serialize_m3388995776 (AnimationTriggerMessage_t1881009617 * __this, NetworkWriter_t3928387057 * ___writer0, const RuntimeMethod* method)
{
	{
		NetworkWriter_t3928387057 * L_0 = ___writer0;
		NetworkInstanceId_t786350175  L_1 = __this->get_netId_0();
		NullCheck(L_0);
		NetworkWriter_Write_m2257467436(L_0, L_1, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_2 = ___writer0;
		int32_t L_3 = __this->get_hash_1();
		NullCheck(L_2);
		NetworkWriter_WritePackedUInt32_m3131691200(L_2, L_3, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.CRCMessage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CRCMessage__ctor_m1058917016 (CRCMessage_t4148217304 * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_m2164585239(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.CRCMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C" IL2CPP_METHOD_ATTR void CRCMessage_Deserialize_m1541620046 (CRCMessage_t4148217304 * __this, NetworkReader_t1574750186 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CRCMessage_Deserialize_m1541620046_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CRCMessageEntry_t1041239249  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1 = NetworkReader_ReadUInt16_m2326281171(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		CRCMessageEntryU5BU5D_t2683386060* L_3 = (CRCMessageEntryU5BU5D_t2683386060*)SZArrayNew(CRCMessageEntryU5BU5D_t2683386060_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->set_scripts_0(L_3);
		V_1 = 0;
		goto IL_0055;
	}

IL_001b:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(CRCMessageEntry_t1041239249 ));
		NetworkReader_t1574750186 * L_4 = ___reader0;
		NullCheck(L_4);
		String_t* L_5 = NetworkReader_ReadString_m1528719253(L_4, /*hidden argument*/NULL);
		(&V_2)->set_name_0(L_5);
		NetworkReader_t1574750186 * L_6 = ___reader0;
		NullCheck(L_6);
		uint8_t L_7 = NetworkReader_ReadByte_m735744747(L_6, /*hidden argument*/NULL);
		(&V_2)->set_channel_1(L_7);
		CRCMessageEntryU5BU5D_t2683386060* L_8 = __this->get_scripts_0();
		int32_t L_9 = V_1;
		NullCheck(L_8);
		CRCMessageEntry_t1041239249  L_10 = V_2;
		*(CRCMessageEntry_t1041239249 *)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))) = L_10;
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0055:
	{
		int32_t L_12 = V_1;
		CRCMessageEntryU5BU5D_t2683386060* L_13 = __this->get_scripts_0();
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length)))))))
		{
			goto IL_001b;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.CRCMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C" IL2CPP_METHOD_ATTR void CRCMessage_Serialize_m1000739189 (CRCMessage_t4148217304 * __this, NetworkWriter_t3928387057 * ___writer0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		NetworkWriter_t3928387057 * L_0 = ___writer0;
		CRCMessageEntryU5BU5D_t2683386060* L_1 = __this->get_scripts_0();
		NullCheck(L_1);
		NullCheck(L_0);
		NetworkWriter_Write_m413412595(L_0, (uint16_t)(((int32_t)((uint16_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))))), /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_004b;
	}

IL_0017:
	{
		NetworkWriter_t3928387057 * L_2 = ___writer0;
		CRCMessageEntryU5BU5D_t2683386060* L_3 = __this->get_scripts_0();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		String_t* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->get_name_0();
		NullCheck(L_2);
		NetworkWriter_Write_m2410084080(L_2, L_5, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_6 = ___writer0;
		CRCMessageEntryU5BU5D_t2683386060* L_7 = __this->get_scripts_0();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		uint8_t L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->get_channel_1();
		NullCheck(L_6);
		NetworkWriter_Write_m524839711(L_6, L_9, /*hidden argument*/NULL);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_004b:
	{
		int32_t L_11 = V_0;
		CRCMessageEntryU5BU5D_t2683386060* L_12 = __this->get_scripts_0();
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_0017;
		}
	}
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
// Conversion methods for marshalling of: UnityEngine.Networking.NetworkSystem.CRCMessageEntry
extern "C" void CRCMessageEntry_t1041239249_marshal_pinvoke(const CRCMessageEntry_t1041239249& unmarshaled, CRCMessageEntry_t1041239249_marshaled_pinvoke& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.get_name_0());
	marshaled.___channel_1 = unmarshaled.get_channel_1();
}
extern "C" void CRCMessageEntry_t1041239249_marshal_pinvoke_back(const CRCMessageEntry_t1041239249_marshaled_pinvoke& marshaled, CRCMessageEntry_t1041239249& unmarshaled)
{
	unmarshaled.set_name_0(il2cpp_codegen_marshal_string_result(marshaled.___name_0));
	uint8_t unmarshaled_channel_temp_1 = 0x0;
	unmarshaled_channel_temp_1 = marshaled.___channel_1;
	unmarshaled.set_channel_1(unmarshaled_channel_temp_1);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.NetworkSystem.CRCMessageEntry
extern "C" void CRCMessageEntry_t1041239249_marshal_pinvoke_cleanup(CRCMessageEntry_t1041239249_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.Networking.NetworkSystem.CRCMessageEntry
extern "C" void CRCMessageEntry_t1041239249_marshal_com(const CRCMessageEntry_t1041239249& unmarshaled, CRCMessageEntry_t1041239249_marshaled_com& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_name_0());
	marshaled.___channel_1 = unmarshaled.get_channel_1();
}
extern "C" void CRCMessageEntry_t1041239249_marshal_com_back(const CRCMessageEntry_t1041239249_marshaled_com& marshaled, CRCMessageEntry_t1041239249& unmarshaled)
{
	unmarshaled.set_name_0(il2cpp_codegen_marshal_bstring_result(marshaled.___name_0));
	uint8_t unmarshaled_channel_temp_1 = 0x0;
	unmarshaled_channel_temp_1 = marshaled.___channel_1;
	unmarshaled.set_channel_1(unmarshaled_channel_temp_1);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.NetworkSystem.CRCMessageEntry
extern "C" void CRCMessageEntry_t1041239249_marshal_com_cleanup(CRCMessageEntry_t1041239249_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.NetworkSystem.ClientAuthorityMessage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ClientAuthorityMessage__ctor_m1408352057 (ClientAuthorityMessage_t2167651785 * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_m2164585239(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ClientAuthorityMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C" IL2CPP_METHOD_ATTR void ClientAuthorityMessage_Deserialize_m3799124416 (ClientAuthorityMessage_t2167651785 * __this, NetworkReader_t1574750186 * ___reader0, const RuntimeMethod* method)
{
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		NetworkInstanceId_t786350175  L_1 = NetworkReader_ReadNetworkId_m1117804330(L_0, /*hidden argument*/NULL);
		__this->set_netId_0(L_1);
		NetworkReader_t1574750186 * L_2 = ___reader0;
		NullCheck(L_2);
		bool L_3 = NetworkReader_ReadBoolean_m3855332856(L_2, /*hidden argument*/NULL);
		__this->set_authority_1(L_3);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ClientAuthorityMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C" IL2CPP_METHOD_ATTR void ClientAuthorityMessage_Serialize_m1306264366 (ClientAuthorityMessage_t2167651785 * __this, NetworkWriter_t3928387057 * ___writer0, const RuntimeMethod* method)
{
	{
		NetworkWriter_t3928387057 * L_0 = ___writer0;
		NetworkInstanceId_t786350175  L_1 = __this->get_netId_0();
		NullCheck(L_0);
		NetworkWriter_Write_m2257467436(L_0, L_1, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_2 = ___writer0;
		bool L_3 = __this->get_authority_1();
		NullCheck(L_2);
		NetworkWriter_Write_m2977220184(L_2, L_3, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.EmptyMessage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void EmptyMessage__ctor_m2353732991 (EmptyMessage_t3892466266 * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_m2164585239(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.EmptyMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C" IL2CPP_METHOD_ATTR void EmptyMessage_Deserialize_m2722141725 (EmptyMessage_t3892466266 * __this, NetworkReader_t1574750186 * ___reader0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.EmptyMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C" IL2CPP_METHOD_ATTR void EmptyMessage_Serialize_m2651148324 (EmptyMessage_t3892466266 * __this, NetworkWriter_t3928387057 * ___writer0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Networking.NetworkSystem.ErrorMessage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ErrorMessage__ctor_m3831077308 (ErrorMessage_t4257973676 * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_m2164585239(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ErrorMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C" IL2CPP_METHOD_ATTR void ErrorMessage_Deserialize_m199894194 (ErrorMessage_t4257973676 * __this, NetworkReader_t1574750186 * ___reader0, const RuntimeMethod* method)
{
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1 = NetworkReader_ReadUInt16_m2326281171(L_0, /*hidden argument*/NULL);
		__this->set_errorCode_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ErrorMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C" IL2CPP_METHOD_ATTR void ErrorMessage_Serialize_m1602653335 (ErrorMessage_t4257973676 * __this, NetworkWriter_t3928387057 * ___writer0, const RuntimeMethod* method)
{
	{
		NetworkWriter_t3928387057 * L_0 = ___writer0;
		int32_t L_1 = __this->get_errorCode_0();
		NullCheck(L_0);
		NetworkWriter_Write_m413412595(L_0, (uint16_t)(((int32_t)((uint16_t)L_1))), /*hidden argument*/NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.IntegerMessage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void IntegerMessage__ctor_m4181640010 (IntegerMessage_t4071108245 * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_m2164585239(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.IntegerMessage::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void IntegerMessage__ctor_m4217909131 (IntegerMessage_t4071108245 * __this, int32_t ___v0, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_m2164585239(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___v0;
		__this->set_value_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.IntegerMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C" IL2CPP_METHOD_ATTR void IntegerMessage_Deserialize_m3989696613 (IntegerMessage_t4071108245 * __this, NetworkReader_t1574750186 * ___reader0, const RuntimeMethod* method)
{
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		uint32_t L_1 = NetworkReader_ReadPackedUInt32_m1668516449(L_0, /*hidden argument*/NULL);
		__this->set_value_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.IntegerMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C" IL2CPP_METHOD_ATTR void IntegerMessage_Serialize_m62083268 (IntegerMessage_t4071108245 * __this, NetworkWriter_t3928387057 * ___writer0, const RuntimeMethod* method)
{
	{
		NetworkWriter_t3928387057 * L_0 = ___writer0;
		int32_t L_1 = __this->get_value_0();
		NullCheck(L_0);
		NetworkWriter_WritePackedUInt32_m3131691200(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.LobbyReadyToBeginMessage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void LobbyReadyToBeginMessage__ctor_m3250534602 (LobbyReadyToBeginMessage_t1454406147 * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_m2164585239(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.LobbyReadyToBeginMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C" IL2CPP_METHOD_ATTR void LobbyReadyToBeginMessage_Deserialize_m861331589 (LobbyReadyToBeginMessage_t1454406147 * __this, NetworkReader_t1574750186 * ___reader0, const RuntimeMethod* method)
{
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		uint8_t L_1 = NetworkReader_ReadByte_m735744747(L_0, /*hidden argument*/NULL);
		__this->set_slotId_0(L_1);
		NetworkReader_t1574750186 * L_2 = ___reader0;
		NullCheck(L_2);
		bool L_3 = NetworkReader_ReadBoolean_m3855332856(L_2, /*hidden argument*/NULL);
		__this->set_readyState_1(L_3);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.LobbyReadyToBeginMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C" IL2CPP_METHOD_ATTR void LobbyReadyToBeginMessage_Serialize_m1743798546 (LobbyReadyToBeginMessage_t1454406147 * __this, NetworkWriter_t3928387057 * ___writer0, const RuntimeMethod* method)
{
	{
		NetworkWriter_t3928387057 * L_0 = ___writer0;
		uint8_t L_1 = __this->get_slotId_0();
		NullCheck(L_0);
		NetworkWriter_Write_m524839711(L_0, L_1, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_2 = ___writer0;
		bool L_3 = __this->get_readyState_1();
		NullCheck(L_2);
		NetworkWriter_Write_m2977220184(L_2, L_3, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.NotReadyMessage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotReadyMessage__ctor_m47666903 (NotReadyMessage_t1149106928 * __this, const RuntimeMethod* method)
{
	{
		EmptyMessage__ctor_m2353732991(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.ObjectDestroyMessage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ObjectDestroyMessage__ctor_m1527059792 (ObjectDestroyMessage_t1358562099 * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_m2164585239(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ObjectDestroyMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C" IL2CPP_METHOD_ATTR void ObjectDestroyMessage_Deserialize_m112983854 (ObjectDestroyMessage_t1358562099 * __this, NetworkReader_t1574750186 * ___reader0, const RuntimeMethod* method)
{
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		NetworkInstanceId_t786350175  L_1 = NetworkReader_ReadNetworkId_m1117804330(L_0, /*hidden argument*/NULL);
		__this->set_netId_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ObjectDestroyMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C" IL2CPP_METHOD_ATTR void ObjectDestroyMessage_Serialize_m101690188 (ObjectDestroyMessage_t1358562099 * __this, NetworkWriter_t3928387057 * ___writer0, const RuntimeMethod* method)
{
	{
		NetworkWriter_t3928387057 * L_0 = ___writer0;
		NetworkInstanceId_t786350175  L_1 = __this->get_netId_0();
		NullCheck(L_0);
		NetworkWriter_Write_m2257467436(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnFinishedMessage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ObjectSpawnFinishedMessage__ctor_m2086645993 (ObjectSpawnFinishedMessage_t2314084871 * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_m2164585239(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnFinishedMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C" IL2CPP_METHOD_ATTR void ObjectSpawnFinishedMessage_Deserialize_m1834205572 (ObjectSpawnFinishedMessage_t2314084871 * __this, NetworkReader_t1574750186 * ___reader0, const RuntimeMethod* method)
{
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		uint32_t L_1 = NetworkReader_ReadPackedUInt32_m1668516449(L_0, /*hidden argument*/NULL);
		__this->set_state_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnFinishedMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C" IL2CPP_METHOD_ATTR void ObjectSpawnFinishedMessage_Serialize_m1488300325 (ObjectSpawnFinishedMessage_t2314084871 * __this, NetworkWriter_t3928387057 * ___writer0, const RuntimeMethod* method)
{
	{
		NetworkWriter_t3928387057 * L_0 = ___writer0;
		uint32_t L_1 = __this->get_state_0();
		NullCheck(L_0);
		NetworkWriter_WritePackedUInt32_m3131691200(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ObjectSpawnMessage__ctor_m1283039093 (ObjectSpawnMessage_t10889831 * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_m2164585239(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C" IL2CPP_METHOD_ATTR void ObjectSpawnMessage_Deserialize_m66664296 (ObjectSpawnMessage_t10889831 * __this, NetworkReader_t1574750186 * ___reader0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		NetworkInstanceId_t786350175  L_1 = NetworkReader_ReadNetworkId_m1117804330(L_0, /*hidden argument*/NULL);
		__this->set_netId_0(L_1);
		NetworkReader_t1574750186 * L_2 = ___reader0;
		NullCheck(L_2);
		NetworkHash128_t2391674535  L_3 = NetworkReader_ReadNetworkHash128_m4142791195(L_2, /*hidden argument*/NULL);
		__this->set_assetId_1(L_3);
		NetworkReader_t1574750186 * L_4 = ___reader0;
		NullCheck(L_4);
		Vector3_t3722313464  L_5 = NetworkReader_ReadVector3_m2097563330(L_4, /*hidden argument*/NULL);
		__this->set_position_2(L_5);
		NetworkReader_t1574750186 * L_6 = ___reader0;
		NullCheck(L_6);
		ByteU5BU5D_t4116647657* L_7 = NetworkReader_ReadBytesAndSize_m2467253557(L_6, /*hidden argument*/NULL);
		__this->set_payload_3(L_7);
		V_0 = ((int32_t)16);
		NetworkReader_t1574750186 * L_8 = ___reader0;
		NullCheck(L_8);
		int32_t L_9 = NetworkReader_get_Length_m2129561061(L_8, /*hidden argument*/NULL);
		NetworkReader_t1574750186 * L_10 = ___reader0;
		NullCheck(L_10);
		uint32_t L_11 = NetworkReader_get_Position_m673994364(L_10, /*hidden argument*/NULL);
		uint32_t L_12 = V_0;
		if ((((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)(((int64_t)((int64_t)L_9))), (int64_t)(((int64_t)((uint64_t)L_11)))))) < ((int64_t)(((int64_t)((uint64_t)L_12))))))
		{
			goto IL_0058;
		}
	}
	{
		NetworkReader_t1574750186 * L_13 = ___reader0;
		NullCheck(L_13);
		Quaternion_t2301928331  L_14 = NetworkReader_ReadQuaternion_m1467983897(L_13, /*hidden argument*/NULL);
		__this->set_rotation_4(L_14);
	}

IL_0058:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C" IL2CPP_METHOD_ATTR void ObjectSpawnMessage_Serialize_m3968742765 (ObjectSpawnMessage_t10889831 * __this, NetworkWriter_t3928387057 * ___writer0, const RuntimeMethod* method)
{
	{
		NetworkWriter_t3928387057 * L_0 = ___writer0;
		NetworkInstanceId_t786350175  L_1 = __this->get_netId_0();
		NullCheck(L_0);
		NetworkWriter_Write_m2257467436(L_0, L_1, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_2 = ___writer0;
		NetworkHash128_t2391674535  L_3 = __this->get_assetId_1();
		NullCheck(L_2);
		NetworkWriter_Write_m426356230(L_2, L_3, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_4 = ___writer0;
		Vector3_t3722313464  L_5 = __this->get_position_2();
		NullCheck(L_4);
		NetworkWriter_Write_m13082585(L_4, L_5, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_6 = ___writer0;
		ByteU5BU5D_t4116647657* L_7 = __this->get_payload_3();
		NullCheck(L_6);
		NetworkWriter_WriteBytesFull_m804870477(L_6, L_7, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_8 = ___writer0;
		Quaternion_t2301928331  L_9 = __this->get_rotation_4();
		NullCheck(L_8);
		NetworkWriter_Write_m2449292798(L_8, L_9, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ObjectSpawnSceneMessage__ctor_m1005584195 (ObjectSpawnSceneMessage_t2191101100 * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_m2164585239(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C" IL2CPP_METHOD_ATTR void ObjectSpawnSceneMessage_Deserialize_m3847944495 (ObjectSpawnSceneMessage_t2191101100 * __this, NetworkReader_t1574750186 * ___reader0, const RuntimeMethod* method)
{
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		NetworkInstanceId_t786350175  L_1 = NetworkReader_ReadNetworkId_m1117804330(L_0, /*hidden argument*/NULL);
		__this->set_netId_0(L_1);
		NetworkReader_t1574750186 * L_2 = ___reader0;
		NullCheck(L_2);
		NetworkSceneId_t717048590  L_3 = NetworkReader_ReadSceneId_m3537241608(L_2, /*hidden argument*/NULL);
		__this->set_sceneId_1(L_3);
		NetworkReader_t1574750186 * L_4 = ___reader0;
		NullCheck(L_4);
		Vector3_t3722313464  L_5 = NetworkReader_ReadVector3_m2097563330(L_4, /*hidden argument*/NULL);
		__this->set_position_2(L_5);
		NetworkReader_t1574750186 * L_6 = ___reader0;
		NullCheck(L_6);
		ByteU5BU5D_t4116647657* L_7 = NetworkReader_ReadBytesAndSize_m2467253557(L_6, /*hidden argument*/NULL);
		__this->set_payload_3(L_7);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C" IL2CPP_METHOD_ATTR void ObjectSpawnSceneMessage_Serialize_m912144042 (ObjectSpawnSceneMessage_t2191101100 * __this, NetworkWriter_t3928387057 * ___writer0, const RuntimeMethod* method)
{
	{
		NetworkWriter_t3928387057 * L_0 = ___writer0;
		NetworkInstanceId_t786350175  L_1 = __this->get_netId_0();
		NullCheck(L_0);
		NetworkWriter_Write_m2257467436(L_0, L_1, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_2 = ___writer0;
		NetworkSceneId_t717048590  L_3 = __this->get_sceneId_1();
		NullCheck(L_2);
		NetworkWriter_Write_m3340287509(L_2, L_3, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_4 = ___writer0;
		Vector3_t3722313464  L_5 = __this->get_position_2();
		NullCheck(L_4);
		NetworkWriter_Write_m13082585(L_4, L_5, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_6 = ___writer0;
		ByteU5BU5D_t4116647657* L_7 = __this->get_payload_3();
		NullCheck(L_6);
		NetworkWriter_WriteBytesFull_m804870477(L_6, L_7, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.OverrideTransformMessage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void OverrideTransformMessage__ctor_m1317227922 (OverrideTransformMessage_t1366792551 * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_m2164585239(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.OverrideTransformMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C" IL2CPP_METHOD_ATTR void OverrideTransformMessage_Deserialize_m1999136243 (OverrideTransformMessage_t1366792551 * __this, NetworkReader_t1574750186 * ___reader0, const RuntimeMethod* method)
{
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		NetworkInstanceId_t786350175  L_1 = NetworkReader_ReadNetworkId_m1117804330(L_0, /*hidden argument*/NULL);
		__this->set_netId_0(L_1);
		NetworkReader_t1574750186 * L_2 = ___reader0;
		NullCheck(L_2);
		ByteU5BU5D_t4116647657* L_3 = NetworkReader_ReadBytesAndSize_m2467253557(L_2, /*hidden argument*/NULL);
		__this->set_payload_1(L_3);
		NetworkReader_t1574750186 * L_4 = ___reader0;
		NullCheck(L_4);
		bool L_5 = NetworkReader_ReadBoolean_m3855332856(L_4, /*hidden argument*/NULL);
		__this->set_teleport_2(L_5);
		NetworkReader_t1574750186 * L_6 = ___reader0;
		NullCheck(L_6);
		uint32_t L_7 = NetworkReader_ReadPackedUInt32_m1668516449(L_6, /*hidden argument*/NULL);
		__this->set_time_3(L_7);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.OverrideTransformMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C" IL2CPP_METHOD_ATTR void OverrideTransformMessage_Serialize_m488494557 (OverrideTransformMessage_t1366792551 * __this, NetworkWriter_t3928387057 * ___writer0, const RuntimeMethod* method)
{
	{
		NetworkWriter_t3928387057 * L_0 = ___writer0;
		NetworkInstanceId_t786350175  L_1 = __this->get_netId_0();
		NullCheck(L_0);
		NetworkWriter_Write_m2257467436(L_0, L_1, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_2 = ___writer0;
		ByteU5BU5D_t4116647657* L_3 = __this->get_payload_1();
		NullCheck(L_2);
		NetworkWriter_WriteBytesFull_m804870477(L_2, L_3, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_4 = ___writer0;
		bool L_5 = __this->get_teleport_2();
		NullCheck(L_4);
		NetworkWriter_Write_m2977220184(L_4, L_5, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_6 = ___writer0;
		int32_t L_7 = __this->get_time_3();
		NullCheck(L_6);
		NetworkWriter_WritePackedUInt32_m3131691200(L_6, L_7, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.OwnerMessage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void OwnerMessage__ctor_m2602482133 (OwnerMessage_t4130858210 * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_m2164585239(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.OwnerMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C" IL2CPP_METHOD_ATTR void OwnerMessage_Deserialize_m1310493824 (OwnerMessage_t4130858210 * __this, NetworkReader_t1574750186 * ___reader0, const RuntimeMethod* method)
{
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		NetworkInstanceId_t786350175  L_1 = NetworkReader_ReadNetworkId_m1117804330(L_0, /*hidden argument*/NULL);
		__this->set_netId_0(L_1);
		NetworkReader_t1574750186 * L_2 = ___reader0;
		NullCheck(L_2);
		uint32_t L_3 = NetworkReader_ReadPackedUInt32_m1668516449(L_2, /*hidden argument*/NULL);
		__this->set_playerControllerId_1((((int16_t)((int16_t)L_3))));
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.OwnerMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C" IL2CPP_METHOD_ATTR void OwnerMessage_Serialize_m852869967 (OwnerMessage_t4130858210 * __this, NetworkWriter_t3928387057 * ___writer0, const RuntimeMethod* method)
{
	{
		NetworkWriter_t3928387057 * L_0 = ___writer0;
		NetworkInstanceId_t786350175  L_1 = __this->get_netId_0();
		NullCheck(L_0);
		NetworkWriter_Write_m2257467436(L_0, L_1, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_2 = ___writer0;
		int16_t L_3 = __this->get_playerControllerId_1();
		NullCheck(L_2);
		NetworkWriter_WritePackedUInt32_m3131691200(L_2, (((int32_t)((uint32_t)L_3))), /*hidden argument*/NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.PeerAuthorityMessage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PeerAuthorityMessage__ctor_m2231586751 (PeerAuthorityMessage_t1590291995 * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_m2164585239(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.PeerAuthorityMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C" IL2CPP_METHOD_ATTR void PeerAuthorityMessage_Deserialize_m299959791 (PeerAuthorityMessage_t1590291995 * __this, NetworkReader_t1574750186 * ___reader0, const RuntimeMethod* method)
{
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		uint32_t L_1 = NetworkReader_ReadPackedUInt32_m1668516449(L_0, /*hidden argument*/NULL);
		__this->set_connectionId_0(L_1);
		NetworkReader_t1574750186 * L_2 = ___reader0;
		NullCheck(L_2);
		NetworkInstanceId_t786350175  L_3 = NetworkReader_ReadNetworkId_m1117804330(L_2, /*hidden argument*/NULL);
		__this->set_netId_1(L_3);
		NetworkReader_t1574750186 * L_4 = ___reader0;
		NullCheck(L_4);
		bool L_5 = NetworkReader_ReadBoolean_m3855332856(L_4, /*hidden argument*/NULL);
		__this->set_authorityState_2(L_5);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.PeerAuthorityMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C" IL2CPP_METHOD_ATTR void PeerAuthorityMessage_Serialize_m2667078943 (PeerAuthorityMessage_t1590291995 * __this, NetworkWriter_t3928387057 * ___writer0, const RuntimeMethod* method)
{
	{
		NetworkWriter_t3928387057 * L_0 = ___writer0;
		int32_t L_1 = __this->get_connectionId_0();
		NullCheck(L_0);
		NetworkWriter_WritePackedUInt32_m3131691200(L_0, L_1, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_2 = ___writer0;
		NetworkInstanceId_t786350175  L_3 = __this->get_netId_1();
		NullCheck(L_2);
		NetworkWriter_Write_m2257467436(L_2, L_3, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_4 = ___writer0;
		bool L_5 = __this->get_authorityState_2();
		NullCheck(L_4);
		NetworkWriter_Write_m2977220184(L_4, L_5, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.PeerInfoMessage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PeerInfoMessage__ctor_m2153887162 (PeerInfoMessage_t1835608005 * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_m2164585239(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.PeerInfoMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C" IL2CPP_METHOD_ATTR void PeerInfoMessage_Deserialize_m329771560 (PeerInfoMessage_t1835608005 * __this, NetworkReader_t1574750186 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PeerInfoMessage_Deserialize_m329771560_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	List_1_t2079534799 * V_1 = NULL;
	uint32_t V_2 = 0;
	PeerInfoPlayer_t607460057  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		uint32_t L_1 = NetworkReader_ReadPackedUInt32_m1668516449(L_0, /*hidden argument*/NULL);
		__this->set_connectionId_0(L_1);
		NetworkReader_t1574750186 * L_2 = ___reader0;
		NullCheck(L_2);
		String_t* L_3 = NetworkReader_ReadString_m1528719253(L_2, /*hidden argument*/NULL);
		__this->set_address_1(L_3);
		NetworkReader_t1574750186 * L_4 = ___reader0;
		NullCheck(L_4);
		uint32_t L_5 = NetworkReader_ReadPackedUInt32_m1668516449(L_4, /*hidden argument*/NULL);
		__this->set_port_2(L_5);
		NetworkReader_t1574750186 * L_6 = ___reader0;
		NullCheck(L_6);
		bool L_7 = NetworkReader_ReadBoolean_m3855332856(L_6, /*hidden argument*/NULL);
		__this->set_isHost_3(L_7);
		NetworkReader_t1574750186 * L_8 = ___reader0;
		NullCheck(L_8);
		bool L_9 = NetworkReader_ReadBoolean_m3855332856(L_8, /*hidden argument*/NULL);
		__this->set_isYou_4(L_9);
		NetworkReader_t1574750186 * L_10 = ___reader0;
		NullCheck(L_10);
		uint32_t L_11 = NetworkReader_ReadPackedUInt32_m1668516449(L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		uint32_t L_12 = V_0;
		if ((!(((uint32_t)L_12) > ((uint32_t)0))))
		{
			goto IL_0095;
		}
	}
	{
		List_1_t2079534799 * L_13 = (List_1_t2079534799 *)il2cpp_codegen_object_new(List_1_t2079534799_il2cpp_TypeInfo_var);
		List_1__ctor_m3222186439(L_13, /*hidden argument*/List_1__ctor_m3222186439_RuntimeMethod_var);
		V_1 = L_13;
		V_2 = 0;
		goto IL_0081;
	}

IL_0059:
	{
		NetworkReader_t1574750186 * L_14 = ___reader0;
		NullCheck(L_14);
		NetworkInstanceId_t786350175  L_15 = NetworkReader_ReadNetworkId_m1117804330(L_14, /*hidden argument*/NULL);
		(&V_3)->set_netId_0(L_15);
		NetworkReader_t1574750186 * L_16 = ___reader0;
		NullCheck(L_16);
		uint32_t L_17 = NetworkReader_ReadPackedUInt32_m1668516449(L_16, /*hidden argument*/NULL);
		(&V_3)->set_playerControllerId_1((((int16_t)((int16_t)L_17))));
		List_1_t2079534799 * L_18 = V_1;
		PeerInfoPlayer_t607460057  L_19 = V_3;
		NullCheck(L_18);
		List_1_Add_m2963065281(L_18, L_19, /*hidden argument*/List_1_Add_m2963065281_RuntimeMethod_var);
		uint32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0081:
	{
		uint32_t L_21 = V_2;
		uint32_t L_22 = V_0;
		if ((!(((uint32_t)L_21) >= ((uint32_t)L_22))))
		{
			goto IL_0059;
		}
	}
	{
		List_1_t2079534799 * L_23 = V_1;
		NullCheck(L_23);
		PeerInfoPlayerU5BU5D_t2287290788* L_24 = List_1_ToArray_m218384935(L_23, /*hidden argument*/List_1_ToArray_m218384935_RuntimeMethod_var);
		__this->set_playerIds_5(L_24);
	}

IL_0095:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.PeerInfoMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C" IL2CPP_METHOD_ATTR void PeerInfoMessage_Serialize_m1575555581 (PeerInfoMessage_t1835608005 * __this, NetworkWriter_t3928387057 * ___writer0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		NetworkWriter_t3928387057 * L_0 = ___writer0;
		int32_t L_1 = __this->get_connectionId_0();
		NullCheck(L_0);
		NetworkWriter_WritePackedUInt32_m3131691200(L_0, L_1, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_2 = ___writer0;
		String_t* L_3 = __this->get_address_1();
		NullCheck(L_2);
		NetworkWriter_Write_m2410084080(L_2, L_3, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_4 = ___writer0;
		int32_t L_5 = __this->get_port_2();
		NullCheck(L_4);
		NetworkWriter_WritePackedUInt32_m3131691200(L_4, L_5, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_6 = ___writer0;
		bool L_7 = __this->get_isHost_3();
		NullCheck(L_6);
		NetworkWriter_Write_m2977220184(L_6, L_7, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_8 = ___writer0;
		bool L_9 = __this->get_isYou_4();
		NullCheck(L_8);
		NetworkWriter_Write_m2977220184(L_8, L_9, /*hidden argument*/NULL);
		PeerInfoPlayerU5BU5D_t2287290788* L_10 = __this->get_playerIds_5();
		if (L_10)
		{
			goto IL_0056;
		}
	}
	{
		NetworkWriter_t3928387057 * L_11 = ___writer0;
		NullCheck(L_11);
		NetworkWriter_WritePackedUInt32_m3131691200(L_11, 0, /*hidden argument*/NULL);
		goto IL_00b0;
	}

IL_0056:
	{
		NetworkWriter_t3928387057 * L_12 = ___writer0;
		PeerInfoPlayerU5BU5D_t2287290788* L_13 = __this->get_playerIds_5();
		NullCheck(L_13);
		NullCheck(L_12);
		NetworkWriter_WritePackedUInt32_m3131691200(L_12, (((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length)))), /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_00a1;
	}

IL_006c:
	{
		NetworkWriter_t3928387057 * L_14 = ___writer0;
		PeerInfoPlayerU5BU5D_t2287290788* L_15 = __this->get_playerIds_5();
		int32_t L_16 = V_0;
		NullCheck(L_15);
		NetworkInstanceId_t786350175  L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->get_netId_0();
		NullCheck(L_14);
		NetworkWriter_Write_m2257467436(L_14, L_17, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_18 = ___writer0;
		PeerInfoPlayerU5BU5D_t2287290788* L_19 = __this->get_playerIds_5();
		int32_t L_20 = V_0;
		NullCheck(L_19);
		int16_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->get_playerControllerId_1();
		NullCheck(L_18);
		NetworkWriter_WritePackedUInt32_m3131691200(L_18, (((int32_t)((uint32_t)L_21))), /*hidden argument*/NULL);
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_00a1:
	{
		int32_t L_23 = V_0;
		PeerInfoPlayerU5BU5D_t2287290788* L_24 = __this->get_playerIds_5();
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_24)->max_length)))))))
		{
			goto IL_006c;
		}
	}
	{
	}

IL_00b0:
	{
		return;
	}
}
// System.String UnityEngine.Networking.NetworkSystem.PeerInfoMessage::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* PeerInfoMessage_ToString_m3887802383 (PeerInfoMessage_t1835608005 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PeerInfoMessage_ToString_m3887802383_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral1316770405);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1316770405);
		ObjectU5BU5D_t2843939325* L_2 = L_1;
		int32_t L_3 = __this->get_connectionId_0();
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = L_2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral3130457374);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3130457374);
		ObjectU5BU5D_t2843939325* L_7 = L_6;
		String_t* L_8 = __this->get_address_1();
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_8);
		ObjectU5BU5D_t2843939325* L_9 = L_7;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral3452614550);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral3452614550);
		ObjectU5BU5D_t2843939325* L_10 = L_9;
		int32_t L_11 = __this->get_port_2();
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_13);
		ObjectU5BU5D_t2843939325* L_14 = L_10;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral3495671313);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral3495671313);
		ObjectU5BU5D_t2843939325* L_15 = L_14;
		bool L_16 = __this->get_isHost_3();
		bool L_17 = L_16;
		RuntimeObject * L_18 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_18);
		ObjectU5BU5D_t2843939325* L_19 = L_15;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral663917154);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)_stringLiteral663917154);
		ObjectU5BU5D_t2843939325* L_20 = L_19;
		bool L_21 = __this->get_isYou_4();
		bool L_22 = L_21;
		RuntimeObject * L_23 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)L_23);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_24 = String_Concat_m2971454694(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_007d;
	}

IL_007d:
	{
		String_t* L_25 = V_0;
		return L_25;
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
// System.Void UnityEngine.Networking.NetworkSystem.PeerListMessage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PeerListMessage__ctor_m3095994077 (PeerListMessage_t3055989278 * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_m2164585239(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.PeerListMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C" IL2CPP_METHOD_ATTR void PeerListMessage_Deserialize_m2781203116 (PeerListMessage_t3055989278 * __this, NetworkReader_t1574750186 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PeerListMessage_Deserialize_m2781203116_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PeerInfoMessage_t1835608005 * V_2 = NULL;
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		uint32_t L_1 = NetworkReader_ReadPackedUInt32_m1668516449(L_0, /*hidden argument*/NULL);
		__this->set_oldServerConnectionId_1(L_1);
		NetworkReader_t1574750186 * L_2 = ___reader0;
		NullCheck(L_2);
		uint16_t L_3 = NetworkReader_ReadUInt16_m2326281171(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		PeerInfoMessageU5BU5D_t2256646024* L_5 = (PeerInfoMessageU5BU5D_t2256646024*)SZArrayNew(PeerInfoMessageU5BU5D_t2256646024_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->set_peers_0(L_5);
		V_1 = 0;
		goto IL_0043;
	}

IL_0027:
	{
		PeerInfoMessage_t1835608005 * L_6 = (PeerInfoMessage_t1835608005 *)il2cpp_codegen_object_new(PeerInfoMessage_t1835608005_il2cpp_TypeInfo_var);
		PeerInfoMessage__ctor_m2153887162(L_6, /*hidden argument*/NULL);
		V_2 = L_6;
		PeerInfoMessage_t1835608005 * L_7 = V_2;
		NetworkReader_t1574750186 * L_8 = ___reader0;
		NullCheck(L_7);
		VirtActionInvoker1< NetworkReader_t1574750186 * >::Invoke(4 /* System.Void UnityEngine.Networking.MessageBase::Deserialize(UnityEngine.Networking.NetworkReader) */, L_7, L_8);
		PeerInfoMessageU5BU5D_t2256646024* L_9 = __this->get_peers_0();
		int32_t L_10 = V_1;
		PeerInfoMessage_t1835608005 * L_11 = V_2;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (PeerInfoMessage_t1835608005 *)L_11);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0043:
	{
		int32_t L_13 = V_1;
		PeerInfoMessageU5BU5D_t2256646024* L_14 = __this->get_peers_0();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))))
		{
			goto IL_0027;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.PeerListMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C" IL2CPP_METHOD_ATTR void PeerListMessage_Serialize_m1116401607 (PeerListMessage_t3055989278 * __this, NetworkWriter_t3928387057 * ___writer0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		NetworkWriter_t3928387057 * L_0 = ___writer0;
		int32_t L_1 = __this->get_oldServerConnectionId_1();
		NullCheck(L_0);
		NetworkWriter_WritePackedUInt32_m3131691200(L_0, L_1, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_2 = ___writer0;
		PeerInfoMessageU5BU5D_t2256646024* L_3 = __this->get_peers_0();
		NullCheck(L_3);
		NullCheck(L_2);
		NetworkWriter_Write_m413412595(L_2, (uint16_t)(((int32_t)((uint16_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))))), /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_0037;
	}

IL_0023:
	{
		PeerInfoMessageU5BU5D_t2256646024* L_4 = __this->get_peers_0();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		PeerInfoMessage_t1835608005 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NetworkWriter_t3928387057 * L_8 = ___writer0;
		NullCheck(L_7);
		VirtActionInvoker1< NetworkWriter_t3928387057 * >::Invoke(5 /* System.Void UnityEngine.Networking.MessageBase::Serialize(UnityEngine.Networking.NetworkWriter) */, L_7, L_8);
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0037:
	{
		int32_t L_10 = V_0;
		PeerInfoMessageU5BU5D_t2256646024* L_11 = __this->get_peers_0();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_0023;
		}
	}
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
// System.Void UnityEngine.Networking.NetworkSystem.ReadyMessage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ReadyMessage__ctor_m2682124222 (ReadyMessage_t1708534618 * __this, const RuntimeMethod* method)
{
	{
		EmptyMessage__ctor_m2353732991(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.ReconnectMessage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ReconnectMessage__ctor_m2832524951 (ReconnectMessage_t1996592154 * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_m2164585239(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ReconnectMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C" IL2CPP_METHOD_ATTR void ReconnectMessage_Deserialize_m1724909956 (ReconnectMessage_t1996592154 * __this, NetworkReader_t1574750186 * ___reader0, const RuntimeMethod* method)
{
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		uint32_t L_1 = NetworkReader_ReadPackedUInt32_m1668516449(L_0, /*hidden argument*/NULL);
		__this->set_oldConnectionId_0(L_1);
		NetworkReader_t1574750186 * L_2 = ___reader0;
		NullCheck(L_2);
		uint32_t L_3 = NetworkReader_ReadPackedUInt32_m1668516449(L_2, /*hidden argument*/NULL);
		__this->set_playerControllerId_1((((int16_t)((int16_t)L_3))));
		NetworkReader_t1574750186 * L_4 = ___reader0;
		NullCheck(L_4);
		NetworkInstanceId_t786350175  L_5 = NetworkReader_ReadNetworkId_m1117804330(L_4, /*hidden argument*/NULL);
		__this->set_netId_2(L_5);
		NetworkReader_t1574750186 * L_6 = ___reader0;
		NullCheck(L_6);
		ByteU5BU5D_t4116647657* L_7 = NetworkReader_ReadBytesAndSize_m2467253557(L_6, /*hidden argument*/NULL);
		__this->set_msgData_4(L_7);
		ByteU5BU5D_t4116647657* L_8 = __this->get_msgData_4();
		NullCheck(L_8);
		__this->set_msgSize_3((((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))));
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ReconnectMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C" IL2CPP_METHOD_ATTR void ReconnectMessage_Serialize_m2768541593 (ReconnectMessage_t1996592154 * __this, NetworkWriter_t3928387057 * ___writer0, const RuntimeMethod* method)
{
	{
		NetworkWriter_t3928387057 * L_0 = ___writer0;
		int32_t L_1 = __this->get_oldConnectionId_0();
		NullCheck(L_0);
		NetworkWriter_WritePackedUInt32_m3131691200(L_0, L_1, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_2 = ___writer0;
		int16_t L_3 = __this->get_playerControllerId_1();
		NullCheck(L_2);
		NetworkWriter_WritePackedUInt32_m3131691200(L_2, (((int32_t)((uint32_t)L_3))), /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_4 = ___writer0;
		NetworkInstanceId_t786350175  L_5 = __this->get_netId_2();
		NullCheck(L_4);
		NetworkWriter_Write_m2257467436(L_4, L_5, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_6 = ___writer0;
		ByteU5BU5D_t4116647657* L_7 = __this->get_msgData_4();
		int32_t L_8 = __this->get_msgSize_3();
		NullCheck(L_6);
		NetworkWriter_WriteBytesAndSize_m542866276(L_6, L_7, L_8, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.RemovePlayerMessage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RemovePlayerMessage__ctor_m1822371910 (RemovePlayerMessage_t1120190071 * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_m2164585239(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.RemovePlayerMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C" IL2CPP_METHOD_ATTR void RemovePlayerMessage_Deserialize_m2265548774 (RemovePlayerMessage_t1120190071 * __this, NetworkReader_t1574750186 * ___reader0, const RuntimeMethod* method)
{
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1 = NetworkReader_ReadUInt16_m2326281171(L_0, /*hidden argument*/NULL);
		__this->set_playerControllerId_0((((int16_t)((int16_t)L_1))));
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.RemovePlayerMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C" IL2CPP_METHOD_ATTR void RemovePlayerMessage_Serialize_m3532277549 (RemovePlayerMessage_t1120190071 * __this, NetworkWriter_t3928387057 * ___writer0, const RuntimeMethod* method)
{
	{
		NetworkWriter_t3928387057 * L_0 = ___writer0;
		int16_t L_1 = __this->get_playerControllerId_0();
		NullCheck(L_0);
		NetworkWriter_Write_m413412595(L_0, (uint16_t)(((int32_t)((uint16_t)L_1))), /*hidden argument*/NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.StringMessage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StringMessage__ctor_m1654746512 (StringMessage_t3467362783 * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_m2164585239(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.StringMessage::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void StringMessage__ctor_m1794770051 (StringMessage_t3467362783 * __this, String_t* ___v0, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_m2164585239(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___v0;
		__this->set_value_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.StringMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C" IL2CPP_METHOD_ATTR void StringMessage_Deserialize_m2167977832 (StringMessage_t3467362783 * __this, NetworkReader_t1574750186 * ___reader0, const RuntimeMethod* method)
{
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		String_t* L_1 = NetworkReader_ReadString_m1528719253(L_0, /*hidden argument*/NULL);
		__this->set_value_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.StringMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C" IL2CPP_METHOD_ATTR void StringMessage_Serialize_m3108650819 (StringMessage_t3467362783 * __this, NetworkWriter_t3928387057 * ___writer0, const RuntimeMethod* method)
{
	{
		NetworkWriter_t3928387057 * L_0 = ___writer0;
		String_t* L_1 = __this->get_value_0();
		NullCheck(L_0);
		NetworkWriter_Write_m2410084080(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Networking.NetworkTransform::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform__ctor_m3832563862 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransform__ctor_m3832563862_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_TransformSyncMode_10(0);
		__this->set_m_SendInterval_11((0.1f));
		__this->set_m_SyncRotationAxis_12(7);
		__this->set_m_RotationSyncCompression_13(0);
		__this->set_m_MovementTheshold_15((0.001f));
		__this->set_m_VelocityThreshold_16((0.0001f));
		__this->set_m_SnapThreshold_17((5.0f));
		__this->set_m_InterpolateRotation_18((1.0f));
		__this->set_m_InterpolateMovement_19((1.0f));
		__this->set_m_Grounded_25((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkBehaviour_t204670959_il2cpp_TypeInfo_var);
		NetworkBehaviour__ctor_m930927820(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.NetworkTransform/TransformSyncMode UnityEngine.Networking.NetworkTransform::get_transformSyncMode()
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransform_get_transformSyncMode_m1860479488 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_TransformSyncMode_10();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::set_transformSyncMode(UnityEngine.Networking.NetworkTransform/TransformSyncMode)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_set_transformSyncMode_m1481691075 (NetworkTransform_t3548153263 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_TransformSyncMode_10(L_0);
		return;
	}
}
// System.Single UnityEngine.Networking.NetworkTransform::get_sendInterval()
extern "C" IL2CPP_METHOD_ATTR float NetworkTransform_get_sendInterval_m1754554454 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_SendInterval_11();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::set_sendInterval(System.Single)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_set_sendInterval_m472562598 (NetworkTransform_t3548153263 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_SendInterval_11(L_0);
		return;
	}
}
// UnityEngine.Networking.NetworkTransform/AxisSyncMode UnityEngine.Networking.NetworkTransform::get_syncRotationAxis()
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransform_get_syncRotationAxis_m375318554 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_SyncRotationAxis_12();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::set_syncRotationAxis(UnityEngine.Networking.NetworkTransform/AxisSyncMode)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_set_syncRotationAxis_m201504949 (NetworkTransform_t3548153263 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_SyncRotationAxis_12(L_0);
		return;
	}
}
// UnityEngine.Networking.NetworkTransform/CompressionSyncMode UnityEngine.Networking.NetworkTransform::get_rotationSyncCompression()
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransform_get_rotationSyncCompression_m2323361826 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_RotationSyncCompression_13();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::set_rotationSyncCompression(UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_set_rotationSyncCompression_m2503059336 (NetworkTransform_t3548153263 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_RotationSyncCompression_13(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Networking.NetworkTransform::get_syncSpin()
extern "C" IL2CPP_METHOD_ATTR bool NetworkTransform_get_syncSpin_m3846305034 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_SyncSpin_14();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::set_syncSpin(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_set_syncSpin_m3298959402 (NetworkTransform_t3548153263 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_SyncSpin_14(L_0);
		return;
	}
}
// System.Single UnityEngine.Networking.NetworkTransform::get_movementTheshold()
extern "C" IL2CPP_METHOD_ATTR float NetworkTransform_get_movementTheshold_m2177353652 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_MovementTheshold_15();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::set_movementTheshold(System.Single)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_set_movementTheshold_m4244697115 (NetworkTransform_t3548153263 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_MovementTheshold_15(L_0);
		return;
	}
}
// System.Single UnityEngine.Networking.NetworkTransform::get_velocityThreshold()
extern "C" IL2CPP_METHOD_ATTR float NetworkTransform_get_velocityThreshold_m982527457 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_VelocityThreshold_16();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::set_velocityThreshold(System.Single)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_set_velocityThreshold_m828451491 (NetworkTransform_t3548153263 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_VelocityThreshold_16(L_0);
		return;
	}
}
// System.Single UnityEngine.Networking.NetworkTransform::get_snapThreshold()
extern "C" IL2CPP_METHOD_ATTR float NetworkTransform_get_snapThreshold_m1083191548 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_SnapThreshold_17();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::set_snapThreshold(System.Single)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_set_snapThreshold_m4181395327 (NetworkTransform_t3548153263 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_SnapThreshold_17(L_0);
		return;
	}
}
// System.Single UnityEngine.Networking.NetworkTransform::get_interpolateRotation()
extern "C" IL2CPP_METHOD_ATTR float NetworkTransform_get_interpolateRotation_m4199485228 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_InterpolateRotation_18();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::set_interpolateRotation(System.Single)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_set_interpolateRotation_m119065792 (NetworkTransform_t3548153263 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_InterpolateRotation_18(L_0);
		return;
	}
}
// System.Single UnityEngine.Networking.NetworkTransform::get_interpolateMovement()
extern "C" IL2CPP_METHOD_ATTR float NetworkTransform_get_interpolateMovement_m383600570 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_InterpolateMovement_19();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::set_interpolateMovement(System.Single)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_set_interpolateMovement_m4223789894 (NetworkTransform_t3548153263 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_InterpolateMovement_19(L_0);
		return;
	}
}
// UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D UnityEngine.Networking.NetworkTransform::get_clientMoveCallback3D()
extern "C" IL2CPP_METHOD_ATTR ClientMoveCallback3D_t1836835438 * NetworkTransform_get_clientMoveCallback3D_m1017819967 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	ClientMoveCallback3D_t1836835438 * V_0 = NULL;
	{
		ClientMoveCallback3D_t1836835438 * L_0 = __this->get_m_ClientMoveCallback3D_20();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		ClientMoveCallback3D_t1836835438 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::set_clientMoveCallback3D(UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_set_clientMoveCallback3D_m645399186 (NetworkTransform_t3548153263 * __this, ClientMoveCallback3D_t1836835438 * ___value0, const RuntimeMethod* method)
{
	{
		ClientMoveCallback3D_t1836835438 * L_0 = ___value0;
		__this->set_m_ClientMoveCallback3D_20(L_0);
		return;
	}
}
// UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D UnityEngine.Networking.NetworkTransform::get_clientMoveCallback2D()
extern "C" IL2CPP_METHOD_ATTR ClientMoveCallback2D_t270751497 * NetworkTransform_get_clientMoveCallback2D_m1582206778 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	ClientMoveCallback2D_t270751497 * V_0 = NULL;
	{
		ClientMoveCallback2D_t270751497 * L_0 = __this->get_m_ClientMoveCallback2D_21();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		ClientMoveCallback2D_t270751497 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::set_clientMoveCallback2D(UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_set_clientMoveCallback2D_m2034593145 (NetworkTransform_t3548153263 * __this, ClientMoveCallback2D_t270751497 * ___value0, const RuntimeMethod* method)
{
	{
		ClientMoveCallback2D_t270751497 * L_0 = ___value0;
		__this->set_m_ClientMoveCallback2D_21(L_0);
		return;
	}
}
// UnityEngine.CharacterController UnityEngine.Networking.NetworkTransform::get_characterContoller()
extern "C" IL2CPP_METHOD_ATTR CharacterController_t1138636865 * NetworkTransform_get_characterContoller_m1058080923 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	CharacterController_t1138636865 * V_0 = NULL;
	{
		CharacterController_t1138636865 * L_0 = __this->get_m_CharacterController_24();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		CharacterController_t1138636865 * L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Rigidbody UnityEngine.Networking.NetworkTransform::get_rigidbody3D()
extern "C" IL2CPP_METHOD_ATTR Rigidbody_t3916780224 * NetworkTransform_get_rigidbody3D_m1680182927 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	Rigidbody_t3916780224 * V_0 = NULL;
	{
		Rigidbody_t3916780224 * L_0 = __this->get_m_RigidBody3D_22();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Rigidbody_t3916780224 * L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Rigidbody2D UnityEngine.Networking.NetworkTransform::get_rigidbody2D()
extern "C" IL2CPP_METHOD_ATTR Rigidbody2D_t939494601 * NetworkTransform_get_rigidbody2D_m3914535243 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	Rigidbody2D_t939494601 * V_0 = NULL;
	{
		Rigidbody2D_t939494601 * L_0 = __this->get_m_RigidBody2D_23();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Rigidbody2D_t939494601 * L_1 = V_0;
		return L_1;
	}
}
// System.Single UnityEngine.Networking.NetworkTransform::get_lastSyncTime()
extern "C" IL2CPP_METHOD_ATTR float NetworkTransform_get_lastSyncTime_m3727643043 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_LastClientSyncTime_33();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::get_targetSyncPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  NetworkTransform_get_targetSyncPosition_m3939799000 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t3722313464  L_0 = __this->get_m_TargetSyncPosition_26();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector3_t3722313464  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::get_targetSyncVelocity()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  NetworkTransform_get_targetSyncVelocity_m3799605955 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t3722313464  L_0 = __this->get_m_TargetSyncVelocity_27();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector3_t3722313464  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Quaternion UnityEngine.Networking.NetworkTransform::get_targetSyncRotation3D()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  NetworkTransform_get_targetSyncRotation3D_m3959327059 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Quaternion_t2301928331  L_0 = __this->get_m_TargetSyncRotation3D_29();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Quaternion_t2301928331  L_1 = V_0;
		return L_1;
	}
}
// System.Single UnityEngine.Networking.NetworkTransform::get_targetSyncRotation2D()
extern "C" IL2CPP_METHOD_ATTR float NetworkTransform_get_targetSyncRotation2D_m383745925 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_TargetSyncRotation2D_31();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Networking.NetworkTransform::get_grounded()
extern "C" IL2CPP_METHOD_ATTR bool NetworkTransform_get_grounded_m2452041702 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_Grounded_25();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::set_grounded(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_set_grounded_m216444588 (NetworkTransform_t3548153263 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_Grounded_25(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::OnValidate()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_OnValidate_m2179758343 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_TransformSyncMode_10();
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = __this->get_m_TransformSyncMode_10();
		if ((((int32_t)L_1) <= ((int32_t)4)))
		{
			goto IL_0022;
		}
	}

IL_0019:
	{
		__this->set_m_TransformSyncMode_10(1);
	}

IL_0022:
	{
		float L_2 = __this->get_m_SendInterval_11();
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_003f;
		}
	}
	{
		__this->set_m_SendInterval_11((0.0f));
	}

IL_003f:
	{
		int32_t L_3 = __this->get_m_SyncRotationAxis_12();
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_4 = __this->get_m_SyncRotationAxis_12();
		if ((((int32_t)L_4) <= ((int32_t)7)))
		{
			goto IL_0060;
		}
	}

IL_0057:
	{
		__this->set_m_SyncRotationAxis_12(0);
	}

IL_0060:
	{
		float L_5 = __this->get_m_MovementTheshold_15();
		if ((!(((float)L_5) < ((float)(0.0f)))))
		{
			goto IL_007d;
		}
	}
	{
		__this->set_m_MovementTheshold_15((0.0f));
	}

IL_007d:
	{
		float L_6 = __this->get_m_VelocityThreshold_16();
		if ((!(((float)L_6) < ((float)(0.0f)))))
		{
			goto IL_009a;
		}
	}
	{
		__this->set_m_VelocityThreshold_16((0.0f));
	}

IL_009a:
	{
		float L_7 = __this->get_m_SnapThreshold_17();
		if ((!(((float)L_7) < ((float)(0.0f)))))
		{
			goto IL_00b7;
		}
	}
	{
		__this->set_m_SnapThreshold_17((0.01f));
	}

IL_00b7:
	{
		float L_8 = __this->get_m_InterpolateRotation_18();
		if ((!(((float)L_8) < ((float)(0.0f)))))
		{
			goto IL_00d4;
		}
	}
	{
		__this->set_m_InterpolateRotation_18((0.01f));
	}

IL_00d4:
	{
		float L_9 = __this->get_m_InterpolateMovement_19();
		if ((!(((float)L_9) < ((float)(0.0f)))))
		{
			goto IL_00f1;
		}
	}
	{
		__this->set_m_InterpolateMovement_19((0.01f));
	}

IL_00f1:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::Awake()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_Awake_m2180609175 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransform_Awake_m2180609175_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_t3916780224 * L_0 = Component_GetComponent_TisRigidbody_t3916780224_m2301377470(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3916780224_m2301377470_RuntimeMethod_var);
		__this->set_m_RigidBody3D_22(L_0);
		Rigidbody2D_t939494601 * L_1 = Component_GetComponent_TisRigidbody2D_t939494601_m3412538942(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t939494601_m3412538942_RuntimeMethod_var);
		__this->set_m_RigidBody2D_23(L_1);
		CharacterController_t1138636865 * L_2 = Component_GetComponent_TisCharacterController_t1138636865_m1645616368(__this, /*hidden argument*/Component_GetComponent_TisCharacterController_t1138636865_m1645616368_RuntimeMethod_var);
		__this->set_m_CharacterController_24(L_2);
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		__this->set_m_PrevPosition_35(L_4);
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Quaternion_t2301928331  L_6 = Transform_get_rotation_m3502953881(L_5, /*hidden argument*/NULL);
		__this->set_m_PrevRotation_36(L_6);
		__this->set_m_PrevVelocity_38((0.0f));
		bool L_7 = NetworkBehaviour_get_localPlayerAuthority_m3825444790(__this, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006a;
		}
	}
	{
		NetworkWriter_t3928387057 * L_8 = (NetworkWriter_t3928387057 *)il2cpp_codegen_object_new(NetworkWriter_t3928387057_il2cpp_TypeInfo_var);
		NetworkWriter__ctor_m18760743(L_8, /*hidden argument*/NULL);
		__this->set_m_LocalTransformWriter_43(L_8);
	}

IL_006a:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::OnStartServer()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_OnStartServer_m2254368826 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_LastClientSyncTime_33((0.0f));
		return;
	}
}
// System.Boolean UnityEngine.Networking.NetworkTransform::OnSerialize(UnityEngine.Networking.NetworkWriter,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool NetworkTransform_OnSerialize_m1083203954 (NetworkTransform_t3548153263 * __this, NetworkWriter_t3928387057 * ___writer0, bool ___initialState1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		bool L_0 = ___initialState1;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		goto IL_0031;
	}

IL_000e:
	{
		uint32_t L_1 = NetworkBehaviour_get_syncVarDirtyBits_m4125085072(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		NetworkWriter_t3928387057 * L_2 = ___writer0;
		NullCheck(L_2);
		NetworkWriter_WritePackedUInt32_m3131691200(L_2, 0, /*hidden argument*/NULL);
		V_0 = (bool)0;
		goto IL_009a;
	}

IL_0028:
	{
		NetworkWriter_t3928387057 * L_3 = ___writer0;
		NullCheck(L_3);
		NetworkWriter_WritePackedUInt32_m3131691200(L_3, 1, /*hidden argument*/NULL);
	}

IL_0031:
	{
		int32_t L_4 = NetworkTransform_get_transformSyncMode_m1860479488(__this, /*hidden argument*/NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0057;
			}
			case 1:
			{
				goto IL_005f;
			}
			case 2:
			{
				goto IL_0079;
			}
			case 3:
			{
				goto IL_006c;
			}
			case 4:
			{
				goto IL_0086;
			}
		}
	}
	{
		goto IL_0093;
	}

IL_0057:
	{
		V_0 = (bool)0;
		goto IL_009a;
	}

IL_005f:
	{
		NetworkWriter_t3928387057 * L_6 = ___writer0;
		NetworkTransform_SerializeModeTransform_m1783024825(__this, L_6, /*hidden argument*/NULL);
		goto IL_0093;
	}

IL_006c:
	{
		NetworkWriter_t3928387057 * L_7 = ___writer0;
		NetworkTransform_SerializeMode3D_m1737298308(__this, L_7, /*hidden argument*/NULL);
		goto IL_0093;
	}

IL_0079:
	{
		NetworkWriter_t3928387057 * L_8 = ___writer0;
		NetworkTransform_SerializeMode2D_m906862596(__this, L_8, /*hidden argument*/NULL);
		goto IL_0093;
	}

IL_0086:
	{
		NetworkWriter_t3928387057 * L_9 = ___writer0;
		NetworkTransform_SerializeModeCharacterController_m305220996(__this, L_9, /*hidden argument*/NULL);
		goto IL_0093;
	}

IL_0093:
	{
		V_0 = (bool)1;
		goto IL_009a;
	}

IL_009a:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::SerializeModeTransform(UnityEngine.Networking.NetworkWriter)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_SerializeModeTransform_m1783024825 (NetworkTransform_t3548153263 * __this, NetworkWriter_t3928387057 * ___writer0, const RuntimeMethod* method)
{
	{
		NetworkWriter_t3928387057 * L_0 = ___writer0;
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		NetworkWriter_Write_m13082585(L_0, L_2, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_m_SyncRotationAxis_12();
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		NetworkWriter_t3928387057 * L_4 = ___writer0;
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Quaternion_t2301928331  L_6 = Transform_get_rotation_m3502953881(L_5, /*hidden argument*/NULL);
		int32_t L_7 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		int32_t L_8 = NetworkTransform_get_rotationSyncCompression_m2323361826(__this, /*hidden argument*/NULL);
		NetworkTransform_SerializeRotation3D_m2417259645(NULL /*static, unused*/, L_4, L_6, L_7, L_8, /*hidden argument*/NULL);
	}

IL_003c:
	{
		Transform_t3600365921 * L_9 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t3722313464  L_10 = Transform_get_position_m36019626(L_9, /*hidden argument*/NULL);
		__this->set_m_PrevPosition_35(L_10);
		Transform_t3600365921 * L_11 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Quaternion_t2301928331  L_12 = Transform_get_rotation_m3502953881(L_11, /*hidden argument*/NULL);
		__this->set_m_PrevRotation_36(L_12);
		__this->set_m_PrevVelocity_38((0.0f));
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::VerifySerializeComponentExists()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_VerifySerializeComponentExists_m3529188128 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransform_VerifySerializeComponentExists_m3529188128_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Type_t * V_1 = NULL;
	int32_t V_2 = 0;
	CharacterController_t1138636865 * V_3 = NULL;
	Rigidbody2D_t939494601 * V_4 = NULL;
	Rigidbody_t3916780224 * V_5 = NULL;
	{
		V_0 = (bool)0;
		V_1 = (Type_t *)NULL;
		int32_t L_0 = NetworkTransform_get_transformSyncMode_m1860479488(__this, /*hidden argument*/NULL);
		V_2 = L_0;
		int32_t L_1 = V_2;
		if ((((int32_t)L_1) == ((int32_t)4)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_2 = V_2;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)3)))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_00e1;
	}

IL_0026:
	{
		CharacterController_t1138636865 * L_4 = __this->get_m_CharacterController_24();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_005e;
		}
	}
	{
		CharacterController_t1138636865 * L_6 = Component_GetComponent_TisCharacterController_t1138636865_m1645616368(__this, /*hidden argument*/Component_GetComponent_TisCharacterController_t1138636865_m1645616368_RuntimeMethod_var);
		CharacterController_t1138636865 * L_7 = L_6;
		V_3 = L_7;
		__this->set_m_CharacterController_24(L_7);
		CharacterController_t1138636865 * L_8 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_005e;
		}
	}
	{
		V_0 = (bool)1;
		RuntimeTypeHandle_t3027515415  L_10 = { reinterpret_cast<intptr_t> (CharacterController_t1138636865_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
	}

IL_005e:
	{
		goto IL_00e1;
	}

IL_0063:
	{
		Rigidbody2D_t939494601 * L_12 = __this->get_m_RigidBody2D_23();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_009d;
		}
	}
	{
		Rigidbody2D_t939494601 * L_14 = Component_GetComponent_TisRigidbody2D_t939494601_m3412538942(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t939494601_m3412538942_RuntimeMethod_var);
		Rigidbody2D_t939494601 * L_15 = L_14;
		V_4 = L_15;
		__this->set_m_RigidBody2D_23(L_15);
		Rigidbody2D_t939494601 * L_16 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_17 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_009d;
		}
	}
	{
		V_0 = (bool)1;
		RuntimeTypeHandle_t3027515415  L_18 = { reinterpret_cast<intptr_t> (Rigidbody2D_t939494601_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		V_1 = L_19;
	}

IL_009d:
	{
		goto IL_00e1;
	}

IL_00a2:
	{
		Rigidbody_t3916780224 * L_20 = __this->get_m_RigidBody3D_22();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_21 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_00dc;
		}
	}
	{
		Rigidbody_t3916780224 * L_22 = Component_GetComponent_TisRigidbody_t3916780224_m2301377470(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3916780224_m2301377470_RuntimeMethod_var);
		Rigidbody_t3916780224 * L_23 = L_22;
		V_5 = L_23;
		__this->set_m_RigidBody3D_22(L_23);
		Rigidbody_t3916780224 * L_24 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_25 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_00dc;
		}
	}
	{
		V_0 = (bool)1;
		RuntimeTypeHandle_t3027515415  L_26 = { reinterpret_cast<intptr_t> (Rigidbody_t3916780224_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_27 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		V_1 = L_27;
	}

IL_00dc:
	{
		goto IL_00e1;
	}

IL_00e1:
	{
		bool L_28 = V_0;
		if (!L_28)
		{
			goto IL_010f;
		}
	}
	{
		Type_t * L_29 = V_1;
		if (!L_29)
		{
			goto IL_010f;
		}
	}
	{
		int32_t L_30 = NetworkTransform_get_transformSyncMode_m1860479488(__this, /*hidden argument*/NULL);
		int32_t L_31 = L_30;
		RuntimeObject * L_32 = Box(TransformSyncMode_t1892665719_il2cpp_TypeInfo_var, &L_31);
		Type_t * L_33 = V_1;
		NullCheck(L_33);
		String_t* L_34 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_33);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_35 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral3032379270, L_32, L_34, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_36 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_36, L_35, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, NULL, NetworkTransform_VerifySerializeComponentExists_m3529188128_RuntimeMethod_var);
	}

IL_010f:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::SerializeMode3D(UnityEngine.Networking.NetworkWriter)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_SerializeMode3D_m1737298308 (NetworkTransform_t3548153263 * __this, NetworkWriter_t3928387057 * ___writer0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		NetworkTransform_VerifySerializeComponentExists_m3529188128(__this, /*hidden argument*/NULL);
		bool L_0 = NetworkBehaviour_get_isServer_m3662737156(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0067;
		}
	}
	{
		float L_1 = __this->get_m_LastClientSyncTime_33();
		if ((((float)L_1) == ((float)(0.0f))))
		{
			goto IL_0067;
		}
	}
	{
		NetworkWriter_t3928387057 * L_2 = ___writer0;
		Vector3_t3722313464  L_3 = __this->get_m_TargetSyncPosition_26();
		NullCheck(L_2);
		NetworkWriter_Write_m13082585(L_2, L_3, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_4 = ___writer0;
		Vector3_t3722313464  L_5 = __this->get_m_TargetSyncVelocity_27();
		NetworkTransform_SerializeVelocity3D_m2367663390(NULL /*static, unused*/, L_4, L_5, 0, /*hidden argument*/NULL);
		int32_t L_6 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0061;
		}
	}
	{
		NetworkWriter_t3928387057 * L_7 = ___writer0;
		Quaternion_t2301928331  L_8 = __this->get_m_TargetSyncRotation3D_29();
		int32_t L_9 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		int32_t L_10 = NetworkTransform_get_rotationSyncCompression_m2323361826(__this, /*hidden argument*/NULL);
		NetworkTransform_SerializeRotation3D_m2417259645(NULL /*static, unused*/, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
	}

IL_0061:
	{
		goto IL_00b6;
	}

IL_0067:
	{
		NetworkWriter_t3928387057 * L_11 = ___writer0;
		Rigidbody_t3916780224 * L_12 = __this->get_m_RigidBody3D_22();
		NullCheck(L_12);
		Vector3_t3722313464  L_13 = Rigidbody_get_position_m1712729619(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		NetworkWriter_Write_m13082585(L_11, L_13, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_14 = ___writer0;
		Rigidbody_t3916780224 * L_15 = __this->get_m_RigidBody3D_22();
		NullCheck(L_15);
		Vector3_t3722313464  L_16 = Rigidbody_get_velocity_m2993632669(L_15, /*hidden argument*/NULL);
		NetworkTransform_SerializeVelocity3D_m2367663390(NULL /*static, unused*/, L_14, L_16, 0, /*hidden argument*/NULL);
		int32_t L_17 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00b5;
		}
	}
	{
		NetworkWriter_t3928387057 * L_18 = ___writer0;
		Rigidbody_t3916780224 * L_19 = __this->get_m_RigidBody3D_22();
		NullCheck(L_19);
		Quaternion_t2301928331  L_20 = Rigidbody_get_rotation_m3610554181(L_19, /*hidden argument*/NULL);
		int32_t L_21 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		int32_t L_22 = NetworkTransform_get_rotationSyncCompression_m2323361826(__this, /*hidden argument*/NULL);
		NetworkTransform_SerializeRotation3D_m2417259645(NULL /*static, unused*/, L_18, L_20, L_21, L_22, /*hidden argument*/NULL);
	}

IL_00b5:
	{
	}

IL_00b6:
	{
		bool L_23 = __this->get_m_SyncSpin_14();
		if (!L_23)
		{
			goto IL_00e0;
		}
	}
	{
		NetworkWriter_t3928387057 * L_24 = ___writer0;
		Rigidbody_t3916780224 * L_25 = __this->get_m_RigidBody3D_22();
		NullCheck(L_25);
		Vector3_t3722313464  L_26 = Rigidbody_get_angularVelocity_m191123884(L_25, /*hidden argument*/NULL);
		int32_t L_27 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		int32_t L_28 = NetworkTransform_get_rotationSyncCompression_m2323361826(__this, /*hidden argument*/NULL);
		NetworkTransform_SerializeSpin3D_m3447179846(NULL /*static, unused*/, L_24, L_26, L_27, L_28, /*hidden argument*/NULL);
	}

IL_00e0:
	{
		Rigidbody_t3916780224 * L_29 = __this->get_m_RigidBody3D_22();
		NullCheck(L_29);
		Vector3_t3722313464  L_30 = Rigidbody_get_position_m1712729619(L_29, /*hidden argument*/NULL);
		__this->set_m_PrevPosition_35(L_30);
		Transform_t3600365921 * L_31 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_31);
		Quaternion_t2301928331  L_32 = Transform_get_rotation_m3502953881(L_31, /*hidden argument*/NULL);
		__this->set_m_PrevRotation_36(L_32);
		Rigidbody_t3916780224 * L_33 = __this->get_m_RigidBody3D_22();
		NullCheck(L_33);
		Vector3_t3722313464  L_34 = Rigidbody_get_velocity_m2993632669(L_33, /*hidden argument*/NULL);
		V_0 = L_34;
		float L_35 = Vector3_get_sqrMagnitude_m1474274574((Vector3_t3722313464 *)(&V_0), /*hidden argument*/NULL);
		__this->set_m_PrevVelocity_38(L_35);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::SerializeModeCharacterController(UnityEngine.Networking.NetworkWriter)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_SerializeModeCharacterController_m305220996 (NetworkTransform_t3548153263 * __this, NetworkWriter_t3928387057 * ___writer0, const RuntimeMethod* method)
{
	{
		NetworkTransform_VerifySerializeComponentExists_m3529188128(__this, /*hidden argument*/NULL);
		bool L_0 = NetworkBehaviour_get_isServer_m3662737156(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_005a;
		}
	}
	{
		float L_1 = __this->get_m_LastClientSyncTime_33();
		if ((((float)L_1) == ((float)(0.0f))))
		{
			goto IL_005a;
		}
	}
	{
		NetworkWriter_t3928387057 * L_2 = ___writer0;
		Vector3_t3722313464  L_3 = __this->get_m_TargetSyncPosition_26();
		NullCheck(L_2);
		NetworkWriter_Write_m13082585(L_2, L_3, /*hidden argument*/NULL);
		int32_t L_4 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0054;
		}
	}
	{
		NetworkWriter_t3928387057 * L_5 = ___writer0;
		Quaternion_t2301928331  L_6 = __this->get_m_TargetSyncRotation3D_29();
		int32_t L_7 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		int32_t L_8 = NetworkTransform_get_rotationSyncCompression_m2323361826(__this, /*hidden argument*/NULL);
		NetworkTransform_SerializeRotation3D_m2417259645(NULL /*static, unused*/, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
	}

IL_0054:
	{
		goto IL_0097;
	}

IL_005a:
	{
		NetworkWriter_t3928387057 * L_9 = ___writer0;
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t3722313464  L_11 = Transform_get_position_m36019626(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		NetworkWriter_Write_m13082585(L_9, L_11, /*hidden argument*/NULL);
		int32_t L_12 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0096;
		}
	}
	{
		NetworkWriter_t3928387057 * L_13 = ___writer0;
		Transform_t3600365921 * L_14 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Quaternion_t2301928331  L_15 = Transform_get_rotation_m3502953881(L_14, /*hidden argument*/NULL);
		int32_t L_16 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		int32_t L_17 = NetworkTransform_get_rotationSyncCompression_m2323361826(__this, /*hidden argument*/NULL);
		NetworkTransform_SerializeRotation3D_m2417259645(NULL /*static, unused*/, L_13, L_15, L_16, L_17, /*hidden argument*/NULL);
	}

IL_0096:
	{
	}

IL_0097:
	{
		Transform_t3600365921 * L_18 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t3722313464  L_19 = Transform_get_position_m36019626(L_18, /*hidden argument*/NULL);
		__this->set_m_PrevPosition_35(L_19);
		Transform_t3600365921 * L_20 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		Quaternion_t2301928331  L_21 = Transform_get_rotation_m3502953881(L_20, /*hidden argument*/NULL);
		__this->set_m_PrevRotation_36(L_21);
		__this->set_m_PrevVelocity_38((0.0f));
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::SerializeMode2D(UnityEngine.Networking.NetworkWriter)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_SerializeMode2D_m906862596 (NetworkTransform_t3548153263 * __this, NetworkWriter_t3928387057 * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransform_SerializeMode2D_m906862596_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		NetworkTransform_VerifySerializeComponentExists_m3529188128(__this, /*hidden argument*/NULL);
		bool L_0 = NetworkBehaviour_get_isServer_m3662737156(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0086;
		}
	}
	{
		float L_1 = __this->get_m_LastClientSyncTime_33();
		if ((((float)L_1) == ((float)(0.0f))))
		{
			goto IL_0086;
		}
	}
	{
		NetworkWriter_t3928387057 * L_2 = ___writer0;
		Vector3_t3722313464  L_3 = __this->get_m_TargetSyncPosition_26();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_4 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		NetworkWriter_Write_m13017049(L_2, L_4, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_5 = ___writer0;
		Vector3_t3722313464  L_6 = __this->get_m_TargetSyncVelocity_27();
		Vector2_t2156229523  L_7 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		NetworkTransform_SerializeVelocity2D_m3451347480(NULL /*static, unused*/, L_5, L_7, 0, /*hidden argument*/NULL);
		int32_t L_8 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0080;
		}
	}
	{
		float L_9 = __this->get_m_TargetSyncRotation2D_31();
		V_0 = (fmodf(L_9, (360.0f)));
		float L_10 = V_0;
		if ((!(((float)L_10) < ((float)(0.0f)))))
		{
			goto IL_0072;
		}
	}
	{
		float L_11 = V_0;
		V_0 = ((float)il2cpp_codegen_add((float)L_11, (float)(360.0f)));
	}

IL_0072:
	{
		NetworkWriter_t3928387057 * L_12 = ___writer0;
		float L_13 = V_0;
		int32_t L_14 = NetworkTransform_get_rotationSyncCompression_m2323361826(__this, /*hidden argument*/NULL);
		NetworkTransform_SerializeRotation2D_m2242062180(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/NULL);
	}

IL_0080:
	{
		goto IL_00ea;
	}

IL_0086:
	{
		NetworkWriter_t3928387057 * L_15 = ___writer0;
		Rigidbody2D_t939494601 * L_16 = __this->get_m_RigidBody2D_23();
		NullCheck(L_16);
		Vector2_t2156229523  L_17 = Rigidbody2D_get_position_m2575647076(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		NetworkWriter_Write_m13017049(L_15, L_17, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_18 = ___writer0;
		Rigidbody2D_t939494601 * L_19 = __this->get_m_RigidBody2D_23();
		NullCheck(L_19);
		Vector2_t2156229523  L_20 = Rigidbody2D_get_velocity_m366589732(L_19, /*hidden argument*/NULL);
		NetworkTransform_SerializeVelocity2D_m3451347480(NULL /*static, unused*/, L_18, L_20, 0, /*hidden argument*/NULL);
		int32_t L_21 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00e9;
		}
	}
	{
		Rigidbody2D_t939494601 * L_22 = __this->get_m_RigidBody2D_23();
		NullCheck(L_22);
		float L_23 = Rigidbody2D_get_rotation_m1584227507(L_22, /*hidden argument*/NULL);
		V_1 = (fmodf(L_23, (360.0f)));
		float L_24 = V_1;
		if ((!(((float)L_24) < ((float)(0.0f)))))
		{
			goto IL_00db;
		}
	}
	{
		float L_25 = V_1;
		V_1 = ((float)il2cpp_codegen_add((float)L_25, (float)(360.0f)));
	}

IL_00db:
	{
		NetworkWriter_t3928387057 * L_26 = ___writer0;
		float L_27 = V_1;
		int32_t L_28 = NetworkTransform_get_rotationSyncCompression_m2323361826(__this, /*hidden argument*/NULL);
		NetworkTransform_SerializeRotation2D_m2242062180(NULL /*static, unused*/, L_26, L_27, L_28, /*hidden argument*/NULL);
	}

IL_00e9:
	{
	}

IL_00ea:
	{
		bool L_29 = __this->get_m_SyncSpin_14();
		if (!L_29)
		{
			goto IL_010e;
		}
	}
	{
		NetworkWriter_t3928387057 * L_30 = ___writer0;
		Rigidbody2D_t939494601 * L_31 = __this->get_m_RigidBody2D_23();
		NullCheck(L_31);
		float L_32 = Rigidbody2D_get_angularVelocity_m1959705066(L_31, /*hidden argument*/NULL);
		int32_t L_33 = NetworkTransform_get_rotationSyncCompression_m2323361826(__this, /*hidden argument*/NULL);
		NetworkTransform_SerializeSpin2D_m2352206203(NULL /*static, unused*/, L_30, L_32, L_33, /*hidden argument*/NULL);
	}

IL_010e:
	{
		Rigidbody2D_t939494601 * L_34 = __this->get_m_RigidBody2D_23();
		NullCheck(L_34);
		Vector2_t2156229523  L_35 = Rigidbody2D_get_position_m2575647076(L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_36 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		__this->set_m_PrevPosition_35(L_36);
		Transform_t3600365921 * L_37 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_37);
		Quaternion_t2301928331  L_38 = Transform_get_rotation_m3502953881(L_37, /*hidden argument*/NULL);
		__this->set_m_PrevRotation_36(L_38);
		Rigidbody2D_t939494601 * L_39 = __this->get_m_RigidBody2D_23();
		NullCheck(L_39);
		Vector2_t2156229523  L_40 = Rigidbody2D_get_velocity_m366589732(L_39, /*hidden argument*/NULL);
		V_2 = L_40;
		float L_41 = Vector2_get_sqrMagnitude_m837837635((Vector2_t2156229523 *)(&V_2), /*hidden argument*/NULL);
		__this->set_m_PrevVelocity_38(L_41);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::OnDeserialize(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_OnDeserialize_m1230745388 (NetworkTransform_t3548153263 * __this, NetworkReader_t1574750186 * ___reader0, bool ___initialState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransform_OnDeserialize_m1230745388_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = NetworkBehaviour_get_isServer_m3662737156(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t2920297688_il2cpp_TypeInfo_var);
		bool L_1 = NetworkServer_get_localClientActive_m1778516964(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		goto IL_00a2;
	}

IL_001b:
	{
		bool L_2 = ___initialState1;
		if (L_2)
		{
			goto IL_0033;
		}
	}
	{
		NetworkReader_t1574750186 * L_3 = ___reader0;
		NullCheck(L_3);
		uint32_t L_4 = NetworkReader_ReadPackedUInt32_m1668516449(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0032;
		}
	}
	{
		goto IL_00a2;
	}

IL_0032:
	{
	}

IL_0033:
	{
		int32_t L_5 = NetworkTransform_get_transformSyncMode_m1860479488(__this, /*hidden argument*/NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0059;
			}
			case 1:
			{
				goto IL_005f;
			}
			case 2:
			{
				goto IL_007b;
			}
			case 3:
			{
				goto IL_006d;
			}
			case 4:
			{
				goto IL_0089;
			}
		}
	}
	{
		goto IL_0097;
	}

IL_0059:
	{
		goto IL_00a2;
	}

IL_005f:
	{
		NetworkReader_t1574750186 * L_7 = ___reader0;
		bool L_8 = ___initialState1;
		NetworkTransform_UnserializeModeTransform_m3827994885(__this, L_7, L_8, /*hidden argument*/NULL);
		goto IL_0097;
	}

IL_006d:
	{
		NetworkReader_t1574750186 * L_9 = ___reader0;
		bool L_10 = ___initialState1;
		NetworkTransform_UnserializeMode3D_m1904062442(__this, L_9, L_10, /*hidden argument*/NULL);
		goto IL_0097;
	}

IL_007b:
	{
		NetworkReader_t1574750186 * L_11 = ___reader0;
		bool L_12 = ___initialState1;
		NetworkTransform_UnserializeMode2D_m4000618177(__this, L_11, L_12, /*hidden argument*/NULL);
		goto IL_0097;
	}

IL_0089:
	{
		NetworkReader_t1574750186 * L_13 = ___reader0;
		bool L_14 = ___initialState1;
		NetworkTransform_UnserializeModeCharacterController_m4186511990(__this, L_13, L_14, /*hidden argument*/NULL);
		goto IL_0097;
	}

IL_0097:
	{
		float L_15 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_LastClientSyncTime_33(L_15);
	}

IL_00a2:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::UnserializeModeTransform(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_UnserializeModeTransform_m3827994885 (NetworkTransform_t3548153263 * __this, NetworkReader_t1574750186 * ___reader0, bool ___initialState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransform_UnserializeModeTransform_m3827994885_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Quaternion_t2301928331  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		bool L_0 = NetworkBehaviour_get_hasAuthority_m3994339092(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		NetworkReader_t1574750186 * L_1 = ___reader0;
		NullCheck(L_1);
		NetworkReader_ReadVector3_m2097563330(L_1, /*hidden argument*/NULL);
		int32_t L_2 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		NetworkReader_t1574750186 * L_3 = ___reader0;
		int32_t L_4 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		int32_t L_5 = NetworkTransform_get_rotationSyncCompression_m2323361826(__this, /*hidden argument*/NULL);
		NetworkTransform_UnserializeRotation3D_m2713487431(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_0034:
	{
		goto IL_010e;
	}

IL_0039:
	{
		bool L_6 = NetworkBehaviour_get_isServer_m3662737156(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_00d1;
		}
	}
	{
		ClientMoveCallback3D_t1836835438 * L_7 = __this->get_m_ClientMoveCallback3D_20();
		if (!L_7)
		{
			goto IL_00d1;
		}
	}
	{
		NetworkReader_t1574750186 * L_8 = ___reader0;
		NullCheck(L_8);
		Vector3_t3722313464  L_9 = NetworkReader_ReadVector3_m2097563330(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_10 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_10;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_11 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_11;
		int32_t L_12 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0083;
		}
	}
	{
		NetworkReader_t1574750186 * L_13 = ___reader0;
		int32_t L_14 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		int32_t L_15 = NetworkTransform_get_rotationSyncCompression_m2323361826(__this, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_16 = NetworkTransform_UnserializeRotation3D_m2713487431(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
	}

IL_0083:
	{
		ClientMoveCallback3D_t1836835438 * L_17 = __this->get_m_ClientMoveCallback3D_20();
		NullCheck(L_17);
		bool L_18 = ClientMoveCallback3D_Invoke_m341842940(L_17, (Vector3_t3722313464 *)(&V_0), (Vector3_t3722313464 *)(&V_1), (Quaternion_t2301928331 *)(&V_2), /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00c5;
		}
	}
	{
		Transform_t3600365921 * L_19 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_20 = V_0;
		NullCheck(L_19);
		Transform_set_position_m3387557959(L_19, L_20, /*hidden argument*/NULL);
		int32_t L_21 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00bf;
		}
	}
	{
		Transform_t3600365921 * L_22 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_23 = V_2;
		NullCheck(L_22);
		Transform_set_rotation_m3524318132(L_22, L_23, /*hidden argument*/NULL);
	}

IL_00bf:
	{
		goto IL_00cb;
	}

IL_00c5:
	{
		goto IL_010e;
	}

IL_00cb:
	{
		goto IL_010e;
	}

IL_00d1:
	{
		Transform_t3600365921 * L_24 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NetworkReader_t1574750186 * L_25 = ___reader0;
		NullCheck(L_25);
		Vector3_t3722313464  L_26 = NetworkReader_ReadVector3_m2097563330(L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_position_m3387557959(L_24, L_26, /*hidden argument*/NULL);
		int32_t L_27 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_010d;
		}
	}
	{
		Transform_t3600365921 * L_28 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NetworkReader_t1574750186 * L_29 = ___reader0;
		int32_t L_30 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		int32_t L_31 = NetworkTransform_get_rotationSyncCompression_m2323361826(__this, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_32 = NetworkTransform_UnserializeRotation3D_m2713487431(NULL /*static, unused*/, L_29, L_30, L_31, /*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_set_rotation_m3524318132(L_28, L_32, /*hidden argument*/NULL);
	}

IL_010d:
	{
	}

IL_010e:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::UnserializeMode3D(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_UnserializeMode3D_m1904062442 (NetworkTransform_t3548153263 * __this, NetworkReader_t1574750186 * ___reader0, bool ___initialState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransform_UnserializeMode3D_m1904062442_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Quaternion_t2301928331  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		bool L_0 = NetworkBehaviour_get_hasAuthority_m3994339092(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0060;
		}
	}
	{
		NetworkReader_t1574750186 * L_1 = ___reader0;
		NullCheck(L_1);
		NetworkReader_ReadVector3_m2097563330(L_1, /*hidden argument*/NULL);
		NetworkReader_t1574750186 * L_2 = ___reader0;
		NullCheck(L_2);
		NetworkReader_ReadVector3_m2097563330(L_2, /*hidden argument*/NULL);
		int32_t L_3 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		NetworkReader_t1574750186 * L_4 = ___reader0;
		int32_t L_5 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		int32_t L_6 = NetworkTransform_get_rotationSyncCompression_m2323361826(__this, /*hidden argument*/NULL);
		NetworkTransform_UnserializeRotation3D_m2713487431(NULL /*static, unused*/, L_4, L_5, L_6, /*hidden argument*/NULL);
	}

IL_003b:
	{
		bool L_7 = NetworkTransform_get_syncSpin_m3846305034(__this, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005b;
		}
	}
	{
		NetworkReader_t1574750186 * L_8 = ___reader0;
		int32_t L_9 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		int32_t L_10 = NetworkTransform_get_rotationSyncCompression_m2323361826(__this, /*hidden argument*/NULL);
		NetworkTransform_UnserializeSpin3D_m3995136278(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/NULL);
	}

IL_005b:
	{
		goto IL_0316;
	}

IL_0060:
	{
		bool L_11 = NetworkBehaviour_get_isServer_m3662737156(__this, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00f6;
		}
	}
	{
		ClientMoveCallback3D_t1836835438 * L_12 = __this->get_m_ClientMoveCallback3D_20();
		if (!L_12)
		{
			goto IL_00f6;
		}
	}
	{
		NetworkReader_t1574750186 * L_13 = ___reader0;
		NullCheck(L_13);
		Vector3_t3722313464  L_14 = NetworkReader_ReadVector3_m2097563330(L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		NetworkReader_t1574750186 * L_15 = ___reader0;
		NullCheck(L_15);
		Vector3_t3722313464  L_16 = NetworkReader_ReadVector3_m2097563330(L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_17 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_17;
		int32_t L_18 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00ab;
		}
	}
	{
		NetworkReader_t1574750186 * L_19 = ___reader0;
		int32_t L_20 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		int32_t L_21 = NetworkTransform_get_rotationSyncCompression_m2323361826(__this, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_22 = NetworkTransform_UnserializeRotation3D_m2713487431(NULL /*static, unused*/, L_19, L_20, L_21, /*hidden argument*/NULL);
		V_2 = L_22;
	}

IL_00ab:
	{
		ClientMoveCallback3D_t1836835438 * L_23 = __this->get_m_ClientMoveCallback3D_20();
		NullCheck(L_23);
		bool L_24 = ClientMoveCallback3D_Invoke_m341842940(L_23, (Vector3_t3722313464 *)(&V_0), (Vector3_t3722313464 *)(&V_1), (Quaternion_t2301928331 *)(&V_2), /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00ea;
		}
	}
	{
		Vector3_t3722313464  L_25 = V_0;
		__this->set_m_TargetSyncPosition_26(L_25);
		Vector3_t3722313464  L_26 = V_1;
		__this->set_m_TargetSyncVelocity_27(L_26);
		int32_t L_27 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00e4;
		}
	}
	{
		Quaternion_t2301928331  L_28 = V_2;
		__this->set_m_TargetSyncRotation3D_29(L_28);
	}

IL_00e4:
	{
		goto IL_00f0;
	}

IL_00ea:
	{
		goto IL_0316;
	}

IL_00f0:
	{
		goto IL_0135;
	}

IL_00f6:
	{
		NetworkReader_t1574750186 * L_29 = ___reader0;
		NullCheck(L_29);
		Vector3_t3722313464  L_30 = NetworkReader_ReadVector3_m2097563330(L_29, /*hidden argument*/NULL);
		__this->set_m_TargetSyncPosition_26(L_30);
		NetworkReader_t1574750186 * L_31 = ___reader0;
		NullCheck(L_31);
		Vector3_t3722313464  L_32 = NetworkReader_ReadVector3_m2097563330(L_31, /*hidden argument*/NULL);
		__this->set_m_TargetSyncVelocity_27(L_32);
		int32_t L_33 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_0134;
		}
	}
	{
		NetworkReader_t1574750186 * L_34 = ___reader0;
		int32_t L_35 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		int32_t L_36 = NetworkTransform_get_rotationSyncCompression_m2323361826(__this, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_37 = NetworkTransform_UnserializeRotation3D_m2713487431(NULL /*static, unused*/, L_34, L_35, L_36, /*hidden argument*/NULL);
		__this->set_m_TargetSyncRotation3D_29(L_37);
	}

IL_0134:
	{
	}

IL_0135:
	{
		bool L_38 = NetworkTransform_get_syncSpin_m3846305034(__this, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_015a;
		}
	}
	{
		NetworkReader_t1574750186 * L_39 = ___reader0;
		int32_t L_40 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		int32_t L_41 = NetworkTransform_get_rotationSyncCompression_m2323361826(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_42 = NetworkTransform_UnserializeSpin3D_m3995136278(NULL /*static, unused*/, L_39, L_40, L_41, /*hidden argument*/NULL);
		__this->set_m_TargetSyncAngularVelocity3D_30(L_42);
	}

IL_015a:
	{
		Rigidbody_t3916780224 * L_43 = __this->get_m_RigidBody3D_22();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_44 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_43, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_0170;
		}
	}
	{
		goto IL_0316;
	}

IL_0170:
	{
		bool L_45 = NetworkBehaviour_get_isServer_m3662737156(__this, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_01bf;
		}
	}
	{
		bool L_46 = NetworkBehaviour_get_isClient_m792420926(__this, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_01bf;
		}
	}
	{
		Rigidbody_t3916780224 * L_47 = __this->get_m_RigidBody3D_22();
		Vector3_t3722313464  L_48 = __this->get_m_TargetSyncPosition_26();
		NullCheck(L_47);
		Rigidbody_MovePosition_m2109341474(L_47, L_48, /*hidden argument*/NULL);
		Rigidbody_t3916780224 * L_49 = __this->get_m_RigidBody3D_22();
		Quaternion_t2301928331  L_50 = __this->get_m_TargetSyncRotation3D_29();
		NullCheck(L_49);
		Rigidbody_MoveRotation_m72717779(L_49, L_50, /*hidden argument*/NULL);
		Rigidbody_t3916780224 * L_51 = __this->get_m_RigidBody3D_22();
		Vector3_t3722313464  L_52 = __this->get_m_TargetSyncVelocity_27();
		NullCheck(L_51);
		Rigidbody_set_velocity_m2899403247(L_51, L_52, /*hidden argument*/NULL);
		goto IL_0316;
	}

IL_01bf:
	{
		float L_53 = VirtFuncInvoker0< float >::Invoke(21 /* System.Single UnityEngine.Networking.NetworkBehaviour::GetNetworkSendInterval() */, __this);
		if ((!(((float)L_53) == ((float)(0.0f)))))
		{
			goto IL_0233;
		}
	}
	{
		Rigidbody_t3916780224 * L_54 = __this->get_m_RigidBody3D_22();
		Vector3_t3722313464  L_55 = __this->get_m_TargetSyncPosition_26();
		NullCheck(L_54);
		Rigidbody_MovePosition_m2109341474(L_54, L_55, /*hidden argument*/NULL);
		Rigidbody_t3916780224 * L_56 = __this->get_m_RigidBody3D_22();
		Vector3_t3722313464  L_57 = __this->get_m_TargetSyncVelocity_27();
		NullCheck(L_56);
		Rigidbody_set_velocity_m2899403247(L_56, L_57, /*hidden argument*/NULL);
		int32_t L_58 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_0210;
		}
	}
	{
		Rigidbody_t3916780224 * L_59 = __this->get_m_RigidBody3D_22();
		Quaternion_t2301928331  L_60 = __this->get_m_TargetSyncRotation3D_29();
		NullCheck(L_59);
		Rigidbody_MoveRotation_m72717779(L_59, L_60, /*hidden argument*/NULL);
	}

IL_0210:
	{
		bool L_61 = NetworkTransform_get_syncSpin_m3846305034(__this, /*hidden argument*/NULL);
		if (!L_61)
		{
			goto IL_022e;
		}
	}
	{
		Rigidbody_t3916780224 * L_62 = __this->get_m_RigidBody3D_22();
		Vector3_t3722313464  L_63 = __this->get_m_TargetSyncAngularVelocity3D_30();
		NullCheck(L_62);
		Rigidbody_set_angularVelocity_m4254006699(L_62, L_63, /*hidden argument*/NULL);
	}

IL_022e:
	{
		goto IL_0316;
	}

IL_0233:
	{
		Rigidbody_t3916780224 * L_64 = __this->get_m_RigidBody3D_22();
		NullCheck(L_64);
		Vector3_t3722313464  L_65 = Rigidbody_get_position_m1712729619(L_64, /*hidden argument*/NULL);
		Vector3_t3722313464  L_66 = __this->get_m_TargetSyncPosition_26();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_67 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_65, L_66, /*hidden argument*/NULL);
		V_4 = L_67;
		float L_68 = Vector3_get_magnitude_m27958459((Vector3_t3722313464 *)(&V_4), /*hidden argument*/NULL);
		V_3 = L_68;
		float L_69 = V_3;
		float L_70 = NetworkTransform_get_snapThreshold_m1083191548(__this, /*hidden argument*/NULL);
		if ((!(((float)L_69) > ((float)L_70))))
		{
			goto IL_0283;
		}
	}
	{
		Rigidbody_t3916780224 * L_71 = __this->get_m_RigidBody3D_22();
		Vector3_t3722313464  L_72 = __this->get_m_TargetSyncPosition_26();
		NullCheck(L_71);
		Rigidbody_set_position_m2293099797(L_71, L_72, /*hidden argument*/NULL);
		Rigidbody_t3916780224 * L_73 = __this->get_m_RigidBody3D_22();
		Vector3_t3722313464  L_74 = __this->get_m_TargetSyncVelocity_27();
		NullCheck(L_73);
		Rigidbody_set_velocity_m2899403247(L_73, L_74, /*hidden argument*/NULL);
	}

IL_0283:
	{
		float L_75 = NetworkTransform_get_interpolateRotation_m4199485228(__this, /*hidden argument*/NULL);
		if ((!(((float)L_75) == ((float)(0.0f)))))
		{
			goto IL_02cf;
		}
	}
	{
		int32_t L_76 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		if (!L_76)
		{
			goto IL_02cf;
		}
	}
	{
		Rigidbody_t3916780224 * L_77 = __this->get_m_RigidBody3D_22();
		Quaternion_t2301928331  L_78 = __this->get_m_TargetSyncRotation3D_29();
		NullCheck(L_77);
		Rigidbody_set_rotation_m4187031548(L_77, L_78, /*hidden argument*/NULL);
		bool L_79 = NetworkTransform_get_syncSpin_m3846305034(__this, /*hidden argument*/NULL);
		if (!L_79)
		{
			goto IL_02ce;
		}
	}
	{
		Rigidbody_t3916780224 * L_80 = __this->get_m_RigidBody3D_22();
		Vector3_t3722313464  L_81 = __this->get_m_TargetSyncAngularVelocity3D_30();
		NullCheck(L_80);
		Rigidbody_set_angularVelocity_m4254006699(L_80, L_81, /*hidden argument*/NULL);
	}

IL_02ce:
	{
	}

IL_02cf:
	{
		float L_82 = __this->get_m_InterpolateMovement_19();
		if ((!(((float)L_82) == ((float)(0.0f)))))
		{
			goto IL_02f2;
		}
	}
	{
		Rigidbody_t3916780224 * L_83 = __this->get_m_RigidBody3D_22();
		Vector3_t3722313464  L_84 = __this->get_m_TargetSyncPosition_26();
		NullCheck(L_83);
		Rigidbody_set_position_m2293099797(L_83, L_84, /*hidden argument*/NULL);
	}

IL_02f2:
	{
		bool L_85 = ___initialState1;
		if (!L_85)
		{
			goto IL_0316;
		}
	}
	{
		int32_t L_86 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		if (!L_86)
		{
			goto IL_0316;
		}
	}
	{
		Rigidbody_t3916780224 * L_87 = __this->get_m_RigidBody3D_22();
		Quaternion_t2301928331  L_88 = __this->get_m_TargetSyncRotation3D_29();
		NullCheck(L_87);
		Rigidbody_set_rotation_m4187031548(L_87, L_88, /*hidden argument*/NULL);
	}

IL_0316:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::UnserializeMode2D(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_UnserializeMode2D_m4000618177 (NetworkTransform_t3548153263 * __this, NetworkReader_t1574750186 * ___reader0, bool ___initialState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransform_UnserializeMode2D_m4000618177_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector2_t2156229523  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		bool L_0 = NetworkBehaviour_get_hasAuthority_m3994339092(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0054;
		}
	}
	{
		NetworkReader_t1574750186 * L_1 = ___reader0;
		NullCheck(L_1);
		NetworkReader_ReadVector2_m4151988315(L_1, /*hidden argument*/NULL);
		NetworkReader_t1574750186 * L_2 = ___reader0;
		NullCheck(L_2);
		NetworkReader_ReadVector2_m4151988315(L_2, /*hidden argument*/NULL);
		int32_t L_3 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		NetworkReader_t1574750186 * L_4 = ___reader0;
		int32_t L_5 = NetworkTransform_get_rotationSyncCompression_m2323361826(__this, /*hidden argument*/NULL);
		NetworkTransform_UnserializeRotation2D_m2763521727(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
	}

IL_0035:
	{
		bool L_6 = NetworkTransform_get_syncSpin_m3846305034(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		NetworkReader_t1574750186 * L_7 = ___reader0;
		int32_t L_8 = NetworkTransform_get_rotationSyncCompression_m2323361826(__this, /*hidden argument*/NULL);
		NetworkTransform_UnserializeSpin2D_m1793448452(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
	}

IL_004f:
	{
		goto IL_031f;
	}

IL_0054:
	{
		Rigidbody2D_t939494601 * L_9 = __this->get_m_RigidBody2D_23();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_9, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006a;
		}
	}
	{
		goto IL_031f;
	}

IL_006a:
	{
		bool L_11 = NetworkBehaviour_get_isServer_m3662737156(__this, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0104;
		}
	}
	{
		ClientMoveCallback2D_t270751497 * L_12 = __this->get_m_ClientMoveCallback2D_21();
		if (!L_12)
		{
			goto IL_0104;
		}
	}
	{
		NetworkReader_t1574750186 * L_13 = ___reader0;
		NullCheck(L_13);
		Vector2_t2156229523  L_14 = NetworkReader_ReadVector2_m4151988315(L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		NetworkReader_t1574750186 * L_15 = ___reader0;
		NullCheck(L_15);
		Vector2_t2156229523  L_16 = NetworkReader_ReadVector2_m4151988315(L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		V_2 = (0.0f);
		int32_t L_17 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00af;
		}
	}
	{
		NetworkReader_t1574750186 * L_18 = ___reader0;
		int32_t L_19 = NetworkTransform_get_rotationSyncCompression_m2323361826(__this, /*hidden argument*/NULL);
		float L_20 = NetworkTransform_UnserializeRotation2D_m2763521727(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		V_2 = L_20;
	}

IL_00af:
	{
		ClientMoveCallback2D_t270751497 * L_21 = __this->get_m_ClientMoveCallback2D_21();
		NullCheck(L_21);
		bool L_22 = ClientMoveCallback2D_Invoke_m3510372298(L_21, (Vector2_t2156229523 *)(&V_0), (Vector2_t2156229523 *)(&V_1), (float*)(&V_2), /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00f8;
		}
	}
	{
		Vector2_t2156229523  L_23 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_24 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		__this->set_m_TargetSyncPosition_26(L_24);
		Vector2_t2156229523  L_25 = V_1;
		Vector3_t3722313464  L_26 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		__this->set_m_TargetSyncVelocity_27(L_26);
		int32_t L_27 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00f2;
		}
	}
	{
		float L_28 = V_2;
		__this->set_m_TargetSyncRotation2D_31(L_28);
	}

IL_00f2:
	{
		goto IL_00fe;
	}

IL_00f8:
	{
		goto IL_031f;
	}

IL_00fe:
	{
		goto IL_0147;
	}

IL_0104:
	{
		NetworkReader_t1574750186 * L_29 = ___reader0;
		NullCheck(L_29);
		Vector2_t2156229523  L_30 = NetworkReader_ReadVector2_m4151988315(L_29, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_31 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		__this->set_m_TargetSyncPosition_26(L_31);
		NetworkReader_t1574750186 * L_32 = ___reader0;
		NullCheck(L_32);
		Vector2_t2156229523  L_33 = NetworkReader_ReadVector2_m4151988315(L_32, /*hidden argument*/NULL);
		Vector3_t3722313464  L_34 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		__this->set_m_TargetSyncVelocity_27(L_34);
		int32_t L_35 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_0146;
		}
	}
	{
		NetworkReader_t1574750186 * L_36 = ___reader0;
		int32_t L_37 = NetworkTransform_get_rotationSyncCompression_m2323361826(__this, /*hidden argument*/NULL);
		float L_38 = NetworkTransform_UnserializeRotation2D_m2763521727(NULL /*static, unused*/, L_36, L_37, /*hidden argument*/NULL);
		__this->set_m_TargetSyncRotation2D_31(L_38);
	}

IL_0146:
	{
	}

IL_0147:
	{
		bool L_39 = NetworkTransform_get_syncSpin_m3846305034(__this, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_0166;
		}
	}
	{
		NetworkReader_t1574750186 * L_40 = ___reader0;
		int32_t L_41 = NetworkTransform_get_rotationSyncCompression_m2323361826(__this, /*hidden argument*/NULL);
		float L_42 = NetworkTransform_UnserializeSpin2D_m1793448452(NULL /*static, unused*/, L_40, L_41, /*hidden argument*/NULL);
		__this->set_m_TargetSyncAngularVelocity2D_32(L_42);
	}

IL_0166:
	{
		bool L_43 = NetworkBehaviour_get_isServer_m3662737156(__this, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_01ba;
		}
	}
	{
		bool L_44 = NetworkBehaviour_get_isClient_m792420926(__this, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_01ba;
		}
	}
	{
		Transform_t3600365921 * L_45 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_46 = __this->get_m_TargetSyncPosition_26();
		NullCheck(L_45);
		Transform_set_position_m3387557959(L_45, L_46, /*hidden argument*/NULL);
		Rigidbody2D_t939494601 * L_47 = __this->get_m_RigidBody2D_23();
		float L_48 = __this->get_m_TargetSyncRotation2D_31();
		NullCheck(L_47);
		Rigidbody2D_MoveRotation_m3032842781(L_47, L_48, /*hidden argument*/NULL);
		Rigidbody2D_t939494601 * L_49 = __this->get_m_RigidBody2D_23();
		Vector3_t3722313464  L_50 = __this->get_m_TargetSyncVelocity_27();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_51 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_50, /*hidden argument*/NULL);
		NullCheck(L_49);
		Rigidbody2D_set_velocity_m2898400508(L_49, L_51, /*hidden argument*/NULL);
		goto IL_031f;
	}

IL_01ba:
	{
		float L_52 = VirtFuncInvoker0< float >::Invoke(21 /* System.Single UnityEngine.Networking.NetworkBehaviour::GetNetworkSendInterval() */, __this);
		if ((!(((float)L_52) == ((float)(0.0f)))))
		{
			goto IL_0233;
		}
	}
	{
		Transform_t3600365921 * L_53 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_54 = __this->get_m_TargetSyncPosition_26();
		NullCheck(L_53);
		Transform_set_position_m3387557959(L_53, L_54, /*hidden argument*/NULL);
		Rigidbody2D_t939494601 * L_55 = __this->get_m_RigidBody2D_23();
		Vector3_t3722313464  L_56 = __this->get_m_TargetSyncVelocity_27();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_57 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_56, /*hidden argument*/NULL);
		NullCheck(L_55);
		Rigidbody2D_set_velocity_m2898400508(L_55, L_57, /*hidden argument*/NULL);
		int32_t L_58 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_0210;
		}
	}
	{
		Rigidbody2D_t939494601 * L_59 = __this->get_m_RigidBody2D_23();
		float L_60 = __this->get_m_TargetSyncRotation2D_31();
		NullCheck(L_59);
		Rigidbody2D_MoveRotation_m3032842781(L_59, L_60, /*hidden argument*/NULL);
	}

IL_0210:
	{
		bool L_61 = NetworkTransform_get_syncSpin_m3846305034(__this, /*hidden argument*/NULL);
		if (!L_61)
		{
			goto IL_022e;
		}
	}
	{
		Rigidbody2D_t939494601 * L_62 = __this->get_m_RigidBody2D_23();
		float L_63 = __this->get_m_TargetSyncAngularVelocity2D_32();
		NullCheck(L_62);
		Rigidbody2D_set_angularVelocity_m2791812150(L_62, L_63, /*hidden argument*/NULL);
	}

IL_022e:
	{
		goto IL_031f;
	}

IL_0233:
	{
		Rigidbody2D_t939494601 * L_64 = __this->get_m_RigidBody2D_23();
		NullCheck(L_64);
		Vector2_t2156229523  L_65 = Rigidbody2D_get_position_m2575647076(L_64, /*hidden argument*/NULL);
		Vector3_t3722313464  L_66 = __this->get_m_TargetSyncPosition_26();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_67 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_66, /*hidden argument*/NULL);
		Vector2_t2156229523  L_68 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_65, L_67, /*hidden argument*/NULL);
		V_4 = L_68;
		float L_69 = Vector2_get_magnitude_m2752892833((Vector2_t2156229523 *)(&V_4), /*hidden argument*/NULL);
		V_3 = L_69;
		float L_70 = V_3;
		float L_71 = NetworkTransform_get_snapThreshold_m1083191548(__this, /*hidden argument*/NULL);
		if ((!(((float)L_70) > ((float)L_71))))
		{
			goto IL_0292;
		}
	}
	{
		Rigidbody2D_t939494601 * L_72 = __this->get_m_RigidBody2D_23();
		Vector3_t3722313464  L_73 = __this->get_m_TargetSyncPosition_26();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_74 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_73, /*hidden argument*/NULL);
		NullCheck(L_72);
		Rigidbody2D_set_position_m1659195711(L_72, L_74, /*hidden argument*/NULL);
		Rigidbody2D_t939494601 * L_75 = __this->get_m_RigidBody2D_23();
		Vector3_t3722313464  L_76 = __this->get_m_TargetSyncVelocity_27();
		Vector2_t2156229523  L_77 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_76, /*hidden argument*/NULL);
		NullCheck(L_75);
		Rigidbody2D_set_velocity_m2898400508(L_75, L_77, /*hidden argument*/NULL);
	}

IL_0292:
	{
		float L_78 = NetworkTransform_get_interpolateRotation_m4199485228(__this, /*hidden argument*/NULL);
		if ((!(((float)L_78) == ((float)(0.0f)))))
		{
			goto IL_02de;
		}
	}
	{
		int32_t L_79 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		if (!L_79)
		{
			goto IL_02de;
		}
	}
	{
		Rigidbody2D_t939494601 * L_80 = __this->get_m_RigidBody2D_23();
		float L_81 = __this->get_m_TargetSyncRotation2D_31();
		NullCheck(L_80);
		Rigidbody2D_set_rotation_m1493600238(L_80, L_81, /*hidden argument*/NULL);
		bool L_82 = NetworkTransform_get_syncSpin_m3846305034(__this, /*hidden argument*/NULL);
		if (!L_82)
		{
			goto IL_02dd;
		}
	}
	{
		Rigidbody2D_t939494601 * L_83 = __this->get_m_RigidBody2D_23();
		float L_84 = __this->get_m_TargetSyncAngularVelocity2D_32();
		NullCheck(L_83);
		Rigidbody2D_set_angularVelocity_m2791812150(L_83, L_84, /*hidden argument*/NULL);
	}

IL_02dd:
	{
	}

IL_02de:
	{
		float L_85 = __this->get_m_InterpolateMovement_19();
		if ((!(((float)L_85) == ((float)(0.0f)))))
		{
			goto IL_0306;
		}
	}
	{
		Rigidbody2D_t939494601 * L_86 = __this->get_m_RigidBody2D_23();
		Vector3_t3722313464  L_87 = __this->get_m_TargetSyncPosition_26();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_88 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_87, /*hidden argument*/NULL);
		NullCheck(L_86);
		Rigidbody2D_set_position_m1659195711(L_86, L_88, /*hidden argument*/NULL);
	}

IL_0306:
	{
		bool L_89 = ___initialState1;
		if (!L_89)
		{
			goto IL_031f;
		}
	}
	{
		Rigidbody2D_t939494601 * L_90 = __this->get_m_RigidBody2D_23();
		float L_91 = __this->get_m_TargetSyncRotation2D_31();
		NullCheck(L_90);
		Rigidbody2D_set_rotation_m1493600238(L_90, L_91, /*hidden argument*/NULL);
	}

IL_031f:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::UnserializeModeCharacterController(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_UnserializeModeCharacterController_m4186511990 (NetworkTransform_t3548153263 * __this, NetworkReader_t1574750186 * ___reader0, bool ___initialState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransform_UnserializeModeCharacterController_m4186511990_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t2301928331  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	float V_5 = 0.0f;
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	{
		bool L_0 = NetworkBehaviour_get_hasAuthority_m3994339092(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		NetworkReader_t1574750186 * L_1 = ___reader0;
		NullCheck(L_1);
		NetworkReader_ReadVector3_m2097563330(L_1, /*hidden argument*/NULL);
		int32_t L_2 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		NetworkReader_t1574750186 * L_3 = ___reader0;
		int32_t L_4 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		int32_t L_5 = NetworkTransform_get_rotationSyncCompression_m2323361826(__this, /*hidden argument*/NULL);
		NetworkTransform_UnserializeRotation3D_m2713487431(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_0034:
	{
		goto IL_02a3;
	}

IL_0039:
	{
		bool L_6 = NetworkBehaviour_get_isServer_m3662737156(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_00ea;
		}
	}
	{
		ClientMoveCallback3D_t1836835438 * L_7 = __this->get_m_ClientMoveCallback3D_20();
		if (!L_7)
		{
			goto IL_00ea;
		}
	}
	{
		NetworkReader_t1574750186 * L_8 = ___reader0;
		NullCheck(L_8);
		Vector3_t3722313464  L_9 = NetworkReader_ReadVector3_m2097563330(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_10 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_10;
		int32_t L_11 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_007d;
		}
	}
	{
		NetworkReader_t1574750186 * L_12 = ___reader0;
		int32_t L_13 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		int32_t L_14 = NetworkTransform_get_rotationSyncCompression_m2323361826(__this, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_15 = NetworkTransform_UnserializeRotation3D_m2713487431(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
	}

IL_007d:
	{
		CharacterController_t1138636865 * L_16 = __this->get_m_CharacterController_24();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_17 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_16, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0093;
		}
	}
	{
		goto IL_02a3;
	}

IL_0093:
	{
		CharacterController_t1138636865 * L_18 = __this->get_m_CharacterController_24();
		NullCheck(L_18);
		Vector3_t3722313464  L_19 = CharacterController_get_velocity_m3517335080(L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		ClientMoveCallback3D_t1836835438 * L_20 = __this->get_m_ClientMoveCallback3D_20();
		NullCheck(L_20);
		bool L_21 = ClientMoveCallback3D_Invoke_m341842940(L_20, (Vector3_t3722313464 *)(&V_0), (Vector3_t3722313464 *)(&V_2), (Quaternion_t2301928331 *)(&V_1), /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00de;
		}
	}
	{
		Vector3_t3722313464  L_22 = V_0;
		__this->set_m_TargetSyncPosition_26(L_22);
		Vector3_t3722313464  L_23 = V_2;
		__this->set_m_TargetSyncVelocity_27(L_23);
		int32_t L_24 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00d8;
		}
	}
	{
		Quaternion_t2301928331  L_25 = V_1;
		__this->set_m_TargetSyncRotation3D_29(L_25);
	}

IL_00d8:
	{
		goto IL_00e4;
	}

IL_00de:
	{
		goto IL_02a3;
	}

IL_00e4:
	{
		goto IL_011d;
	}

IL_00ea:
	{
		NetworkReader_t1574750186 * L_26 = ___reader0;
		NullCheck(L_26);
		Vector3_t3722313464  L_27 = NetworkReader_ReadVector3_m2097563330(L_26, /*hidden argument*/NULL);
		__this->set_m_TargetSyncPosition_26(L_27);
		int32_t L_28 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_011c;
		}
	}
	{
		NetworkReader_t1574750186 * L_29 = ___reader0;
		int32_t L_30 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		int32_t L_31 = NetworkTransform_get_rotationSyncCompression_m2323361826(__this, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_32 = NetworkTransform_UnserializeRotation3D_m2713487431(NULL /*static, unused*/, L_29, L_30, L_31, /*hidden argument*/NULL);
		__this->set_m_TargetSyncRotation3D_29(L_32);
	}

IL_011c:
	{
	}

IL_011d:
	{
		CharacterController_t1138636865 * L_33 = __this->get_m_CharacterController_24();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_34 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_33, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0133;
		}
	}
	{
		goto IL_02a3;
	}

IL_0133:
	{
		Vector3_t3722313464  L_35 = __this->get_m_TargetSyncPosition_26();
		Transform_t3600365921 * L_36 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_36);
		Vector3_t3722313464  L_37 = Transform_get_position_m36019626(L_36, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_38 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_35, L_37, /*hidden argument*/NULL);
		V_3 = L_38;
		Vector3_t3722313464  L_39 = V_3;
		float L_40 = VirtFuncInvoker0< float >::Invoke(21 /* System.Single UnityEngine.Networking.NetworkBehaviour::GetNetworkSendInterval() */, __this);
		Vector3_t3722313464  L_41 = Vector3_op_Division_m510815599(NULL /*static, unused*/, L_39, L_40, /*hidden argument*/NULL);
		V_4 = L_41;
		Vector3_t3722313464  L_42 = V_4;
		float L_43 = Time_get_fixedDeltaTime_m3595802076(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_44 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_42, L_43, /*hidden argument*/NULL);
		__this->set_m_FixedPosDiff_28(L_44);
		bool L_45 = NetworkBehaviour_get_isServer_m3662737156(__this, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_01a8;
		}
	}
	{
		bool L_46 = NetworkBehaviour_get_isClient_m792420926(__this, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_01a8;
		}
	}
	{
		Transform_t3600365921 * L_47 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_48 = __this->get_m_TargetSyncPosition_26();
		NullCheck(L_47);
		Transform_set_position_m3387557959(L_47, L_48, /*hidden argument*/NULL);
		Transform_t3600365921 * L_49 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_50 = __this->get_m_TargetSyncRotation3D_29();
		NullCheck(L_49);
		Transform_set_rotation_m3524318132(L_49, L_50, /*hidden argument*/NULL);
		goto IL_02a3;
	}

IL_01a8:
	{
		float L_51 = VirtFuncInvoker0< float >::Invoke(21 /* System.Single UnityEngine.Networking.NetworkBehaviour::GetNetworkSendInterval() */, __this);
		if ((!(((float)L_51) == ((float)(0.0f)))))
		{
			goto IL_01ed;
		}
	}
	{
		Transform_t3600365921 * L_52 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_53 = __this->get_m_TargetSyncPosition_26();
		NullCheck(L_52);
		Transform_set_position_m3387557959(L_52, L_53, /*hidden argument*/NULL);
		int32_t L_54 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_01e8;
		}
	}
	{
		Transform_t3600365921 * L_55 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_56 = __this->get_m_TargetSyncRotation3D_29();
		NullCheck(L_55);
		Transform_set_rotation_m3524318132(L_55, L_56, /*hidden argument*/NULL);
	}

IL_01e8:
	{
		goto IL_02a3;
	}

IL_01ed:
	{
		Transform_t3600365921 * L_57 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_57);
		Vector3_t3722313464  L_58 = Transform_get_position_m36019626(L_57, /*hidden argument*/NULL);
		Vector3_t3722313464  L_59 = __this->get_m_TargetSyncPosition_26();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_60 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_58, L_59, /*hidden argument*/NULL);
		V_6 = L_60;
		float L_61 = Vector3_get_magnitude_m27958459((Vector3_t3722313464 *)(&V_6), /*hidden argument*/NULL);
		V_5 = L_61;
		float L_62 = V_5;
		float L_63 = NetworkTransform_get_snapThreshold_m1083191548(__this, /*hidden argument*/NULL);
		if ((!(((float)L_62) > ((float)L_63))))
		{
			goto IL_022e;
		}
	}
	{
		Transform_t3600365921 * L_64 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_65 = __this->get_m_TargetSyncPosition_26();
		NullCheck(L_64);
		Transform_set_position_m3387557959(L_64, L_65, /*hidden argument*/NULL);
	}

IL_022e:
	{
		float L_66 = NetworkTransform_get_interpolateRotation_m4199485228(__this, /*hidden argument*/NULL);
		if ((!(((float)L_66) == ((float)(0.0f)))))
		{
			goto IL_025c;
		}
	}
	{
		int32_t L_67 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		if (!L_67)
		{
			goto IL_025c;
		}
	}
	{
		Transform_t3600365921 * L_68 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_69 = __this->get_m_TargetSyncRotation3D_29();
		NullCheck(L_68);
		Transform_set_rotation_m3524318132(L_68, L_69, /*hidden argument*/NULL);
	}

IL_025c:
	{
		float L_70 = __this->get_m_InterpolateMovement_19();
		if ((!(((float)L_70) == ((float)(0.0f)))))
		{
			goto IL_027f;
		}
	}
	{
		Transform_t3600365921 * L_71 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_72 = __this->get_m_TargetSyncPosition_26();
		NullCheck(L_71);
		Transform_set_position_m3387557959(L_71, L_72, /*hidden argument*/NULL);
	}

IL_027f:
	{
		bool L_73 = ___initialState1;
		if (!L_73)
		{
			goto IL_02a3;
		}
	}
	{
		int32_t L_74 = NetworkTransform_get_syncRotationAxis_m375318554(__this, /*hidden argument*/NULL);
		if (!L_74)
		{
			goto IL_02a3;
		}
	}
	{
		Transform_t3600365921 * L_75 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_76 = __this->get_m_TargetSyncRotation3D_29();
		NullCheck(L_75);
		Transform_set_rotation_m3524318132(L_75, L_76, /*hidden argument*/NULL);
	}

IL_02a3:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::FixedUpdate()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_FixedUpdate_m1667120571 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = NetworkBehaviour_get_isServer_m3662737156(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		NetworkTransform_FixedUpdateServer_m961931446(__this, /*hidden argument*/NULL);
	}

IL_0014:
	{
		bool L_1 = NetworkBehaviour_get_isClient_m792420926(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		NetworkTransform_FixedUpdateClient_m1456995231(__this, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::FixedUpdateServer()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_FixedUpdateServer_m961931446 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransform_FixedUpdateServer_m961931446_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		uint32_t L_0 = NetworkBehaviour_get_syncVarDirtyBits_m4125085072(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		goto IL_00af;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t2920297688_il2cpp_TypeInfo_var);
		bool L_1 = NetworkServer_get_active_m2527733392(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		goto IL_00af;
	}

IL_0020:
	{
		bool L_2 = NetworkBehaviour_get_isServer_m3662737156(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0030;
		}
	}
	{
		goto IL_00af;
	}

IL_0030:
	{
		float L_3 = VirtFuncInvoker0< float >::Invoke(21 /* System.Single UnityEngine.Networking.NetworkBehaviour::GetNetworkSendInterval() */, __this);
		if ((!(((float)L_3) == ((float)(0.0f)))))
		{
			goto IL_0045;
		}
	}
	{
		goto IL_00af;
	}

IL_0045:
	{
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		Vector3_t3722313464  L_6 = __this->get_m_PrevPosition_35();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_7 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		float L_8 = Vector3_get_magnitude_m27958459((Vector3_t3722313464 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_8;
		float L_9 = V_0;
		float L_10 = NetworkTransform_get_movementTheshold_m2177353652(__this, /*hidden argument*/NULL);
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_00a8;
		}
	}
	{
		Quaternion_t2301928331  L_11 = __this->get_m_PrevRotation_36();
		Transform_t3600365921 * L_12 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Quaternion_t2301928331  L_13 = Transform_get_rotation_m3502953881(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		float L_14 = Quaternion_Angle_m1586774072(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		float L_15 = V_0;
		float L_16 = NetworkTransform_get_movementTheshold_m2177353652(__this, /*hidden argument*/NULL);
		if ((!(((float)L_15) < ((float)L_16))))
		{
			goto IL_00a7;
		}
	}
	{
		bool L_17 = NetworkTransform_CheckVelocityChanged_m483418602(__this, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_00a6;
		}
	}
	{
		goto IL_00af;
	}

IL_00a6:
	{
	}

IL_00a7:
	{
	}

IL_00a8:
	{
		NetworkBehaviour_SetDirtyBit_m3911198689(__this, 1, /*hidden argument*/NULL);
	}

IL_00af:
	{
		return;
	}
}
// System.Boolean UnityEngine.Networking.NetworkTransform::CheckVelocityChanged()
extern "C" IL2CPP_METHOD_ATTR bool NetworkTransform_CheckVelocityChanged_m483418602 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransform_CheckVelocityChanged_m483418602_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		int32_t L_0 = NetworkTransform_get_transformSyncMode_m1860479488(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		goto IL_00cd;
	}

IL_001b:
	{
		Rigidbody2D_t939494601 * L_3 = __this->get_m_RigidBody2D_23();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_006c;
		}
	}
	{
		float L_5 = __this->get_m_VelocityThreshold_16();
		if ((!(((float)L_5) > ((float)(0.0f)))))
		{
			goto IL_006c;
		}
	}
	{
		Rigidbody2D_t939494601 * L_6 = __this->get_m_RigidBody2D_23();
		NullCheck(L_6);
		Vector2_t2156229523  L_7 = Rigidbody2D_get_velocity_m366589732(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		float L_8 = Vector2_get_sqrMagnitude_m837837635((Vector2_t2156229523 *)(&V_1), /*hidden argument*/NULL);
		float L_9 = __this->get_m_PrevVelocity_38();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_10 = fabsf(((float)il2cpp_codegen_subtract((float)L_8, (float)L_9)));
		float L_11 = __this->get_m_VelocityThreshold_16();
		V_2 = (bool)((((int32_t)((!(((float)L_10) >= ((float)L_11)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00d4;
	}

IL_006c:
	{
		V_2 = (bool)0;
		goto IL_00d4;
	}

IL_0074:
	{
		Rigidbody_t3916780224 * L_12 = __this->get_m_RigidBody3D_22();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00c5;
		}
	}
	{
		float L_14 = __this->get_m_VelocityThreshold_16();
		if ((!(((float)L_14) > ((float)(0.0f)))))
		{
			goto IL_00c5;
		}
	}
	{
		Rigidbody_t3916780224 * L_15 = __this->get_m_RigidBody3D_22();
		NullCheck(L_15);
		Vector3_t3722313464  L_16 = Rigidbody_get_velocity_m2993632669(L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		float L_17 = Vector3_get_sqrMagnitude_m1474274574((Vector3_t3722313464 *)(&V_3), /*hidden argument*/NULL);
		float L_18 = __this->get_m_PrevVelocity_38();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_19 = fabsf(((float)il2cpp_codegen_subtract((float)L_17, (float)L_18)));
		float L_20 = __this->get_m_VelocityThreshold_16();
		V_2 = (bool)((((int32_t)((!(((float)L_19) >= ((float)L_20)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00d4;
	}

IL_00c5:
	{
		V_2 = (bool)0;
		goto IL_00d4;
	}

IL_00cd:
	{
		V_2 = (bool)0;
		goto IL_00d4;
	}

IL_00d4:
	{
		bool L_21 = V_2;
		return L_21;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::FixedUpdateClient()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_FixedUpdateClient_m1456995231 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransform_FixedUpdateClient_m1456995231_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = __this->get_m_LastClientSyncTime_33();
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0016;
		}
	}
	{
		goto IL_00c5;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t2920297688_il2cpp_TypeInfo_var);
		bool L_1 = NetworkServer_get_active_m2527733392(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkClient_t3758195968_il2cpp_TypeInfo_var);
		bool L_2 = NetworkClient_get_active_m761030454(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		goto IL_00c5;
	}

IL_002f:
	{
		bool L_3 = NetworkBehaviour_get_isServer_m3662737156(__this, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_004a;
		}
	}
	{
		bool L_4 = NetworkBehaviour_get_isClient_m792420926(__this, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_004a;
		}
	}
	{
		goto IL_00c5;
	}

IL_004a:
	{
		float L_5 = VirtFuncInvoker0< float >::Invoke(21 /* System.Single UnityEngine.Networking.NetworkBehaviour::GetNetworkSendInterval() */, __this);
		if ((!(((float)L_5) == ((float)(0.0f)))))
		{
			goto IL_005f;
		}
	}
	{
		goto IL_00c5;
	}

IL_005f:
	{
		bool L_6 = NetworkBehaviour_get_hasAuthority_m3994339092(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_00c5;
	}

IL_006f:
	{
		int32_t L_7 = NetworkTransform_get_transformSyncMode_m1860479488(__this, /*hidden argument*/NULL);
		V_0 = L_7;
		int32_t L_8 = V_0;
		switch (L_8)
		{
			case 0:
			{
				goto IL_0095;
			}
			case 1:
			{
				goto IL_009b;
			}
			case 2:
			{
				goto IL_00ad;
			}
			case 3:
			{
				goto IL_00a1;
			}
			case 4:
			{
				goto IL_00b9;
			}
		}
	}
	{
		goto IL_00c5;
	}

IL_0095:
	{
		goto IL_00c5;
	}

IL_009b:
	{
		goto IL_00c5;
	}

IL_00a1:
	{
		NetworkTransform_InterpolateTransformMode3D_m1581623810(__this, /*hidden argument*/NULL);
		goto IL_00c5;
	}

IL_00ad:
	{
		NetworkTransform_InterpolateTransformMode2D_m1581623809(__this, /*hidden argument*/NULL);
		goto IL_00c5;
	}

IL_00b9:
	{
		NetworkTransform_InterpolateTransformModeCharacterController_m3454043386(__this, /*hidden argument*/NULL);
		goto IL_00c5;
	}

IL_00c5:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::InterpolateTransformMode3D()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_InterpolateTransformMode3D_m1581623810 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransform_InterpolateTransformMode3D_m1581623810_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = __this->get_m_InterpolateMovement_19();
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_004c;
		}
	}
	{
		Vector3_t3722313464  L_1 = __this->get_m_TargetSyncPosition_26();
		Rigidbody_t3916780224 * L_2 = __this->get_m_RigidBody3D_22();
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = Rigidbody_get_position_m1712729619(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		float L_5 = __this->get_m_InterpolateMovement_19();
		Vector3_t3722313464  L_6 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		float L_7 = VirtFuncInvoker0< float >::Invoke(21 /* System.Single UnityEngine.Networking.NetworkBehaviour::GetNetworkSendInterval() */, __this);
		Vector3_t3722313464  L_8 = Vector3_op_Division_m510815599(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		Rigidbody_t3916780224 * L_9 = __this->get_m_RigidBody3D_22();
		Vector3_t3722313464  L_10 = V_0;
		NullCheck(L_9);
		Rigidbody_set_velocity_m2899403247(L_9, L_10, /*hidden argument*/NULL);
	}

IL_004c:
	{
		float L_11 = NetworkTransform_get_interpolateRotation_m4199485228(__this, /*hidden argument*/NULL);
		if ((((float)L_11) == ((float)(0.0f))))
		{
			goto IL_008b;
		}
	}
	{
		Rigidbody_t3916780224 * L_12 = __this->get_m_RigidBody3D_22();
		Rigidbody_t3916780224 * L_13 = __this->get_m_RigidBody3D_22();
		NullCheck(L_13);
		Quaternion_t2301928331  L_14 = Rigidbody_get_rotation_m3610554181(L_13, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_15 = __this->get_m_TargetSyncRotation3D_29();
		float L_16 = Time_get_fixedDeltaTime_m3595802076(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_17 = NetworkTransform_get_interpolateRotation_m4199485228(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_18 = Quaternion_Slerp_m1234055455(NULL /*static, unused*/, L_14, L_15, ((float)il2cpp_codegen_multiply((float)L_16, (float)L_17)), /*hidden argument*/NULL);
		NullCheck(L_12);
		Rigidbody_MoveRotation_m72717779(L_12, L_18, /*hidden argument*/NULL);
	}

IL_008b:
	{
		Vector3_t3722313464  L_19 = __this->get_m_TargetSyncPosition_26();
		Vector3_t3722313464  L_20 = __this->get_m_TargetSyncVelocity_27();
		float L_21 = Time_get_fixedDeltaTime_m3595802076(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_22 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		Vector3_t3722313464  L_23 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_22, (0.1f), /*hidden argument*/NULL);
		Vector3_t3722313464  L_24 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_19, L_23, /*hidden argument*/NULL);
		__this->set_m_TargetSyncPosition_26(L_24);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::InterpolateTransformModeCharacterController()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_InterpolateTransformModeCharacterController_m3454043386 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransform_InterpolateTransformModeCharacterController_m3454043386_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t3722313464  L_0 = __this->get_m_FixedPosDiff_28();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_2 = Vector3_op_Equality_m4231250055(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		Quaternion_t2301928331  L_3 = __this->get_m_TargetSyncRotation3D_29();
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Quaternion_t2301928331  L_5 = Transform_get_rotation_m3502953881(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		bool L_6 = Quaternion_op_Equality_m1582314779(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		goto IL_00f2;
	}

IL_0036:
	{
		float L_7 = __this->get_m_InterpolateMovement_19();
		if ((((float)L_7) == ((float)(0.0f))))
		{
			goto IL_0065;
		}
	}
	{
		CharacterController_t1138636865 * L_8 = __this->get_m_CharacterController_24();
		Vector3_t3722313464  L_9 = __this->get_m_FixedPosDiff_28();
		float L_10 = __this->get_m_InterpolateMovement_19();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_11 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		CharacterController_Move_m1547317252(L_8, L_11, /*hidden argument*/NULL);
	}

IL_0065:
	{
		float L_12 = NetworkTransform_get_interpolateRotation_m4199485228(__this, /*hidden argument*/NULL);
		if ((((float)L_12) == ((float)(0.0f))))
		{
			goto IL_00aa;
		}
	}
	{
		Transform_t3600365921 * L_13 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_14 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Quaternion_t2301928331  L_15 = Transform_get_rotation_m3502953881(L_14, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_16 = __this->get_m_TargetSyncRotation3D_29();
		float L_17 = Time_get_fixedDeltaTime_m3595802076(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_18 = NetworkTransform_get_interpolateRotation_m4199485228(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_19 = Quaternion_Slerp_m1234055455(NULL /*static, unused*/, L_15, L_16, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_17, (float)L_18)), (float)(10.0f))), /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_rotation_m3524318132(L_13, L_19, /*hidden argument*/NULL);
	}

IL_00aa:
	{
		float L_20 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_21 = __this->get_m_LastClientSyncTime_33();
		float L_22 = VirtFuncInvoker0< float >::Invoke(21 /* System.Single UnityEngine.Networking.NetworkBehaviour::GetNetworkSendInterval() */, __this);
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_20, (float)L_21))) > ((float)L_22))))
		{
			goto IL_00f2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_23 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_FixedPosDiff_28(L_23);
		Vector3_t3722313464  L_24 = __this->get_m_TargetSyncPosition_26();
		Transform_t3600365921 * L_25 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t3722313464  L_26 = Transform_get_position_m36019626(L_25, /*hidden argument*/NULL);
		Vector3_t3722313464  L_27 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_24, L_26, /*hidden argument*/NULL);
		V_0 = L_27;
		CharacterController_t1138636865 * L_28 = __this->get_m_CharacterController_24();
		Vector3_t3722313464  L_29 = V_0;
		NullCheck(L_28);
		CharacterController_Move_m1547317252(L_28, L_29, /*hidden argument*/NULL);
	}

IL_00f2:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::InterpolateTransformMode2D()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_InterpolateTransformMode2D_m1581623809 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransform_InterpolateTransformMode2D_m1581623809_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	Quaternion_t2301928331  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		float L_0 = __this->get_m_InterpolateMovement_19();
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_0089;
		}
	}
	{
		Rigidbody2D_t939494601 * L_1 = __this->get_m_RigidBody2D_23();
		NullCheck(L_1);
		Vector2_t2156229523  L_2 = Rigidbody2D_get_velocity_m366589732(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_t3722313464  L_3 = __this->get_m_TargetSyncPosition_26();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_4 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		Rigidbody2D_t939494601 * L_5 = __this->get_m_RigidBody2D_23();
		NullCheck(L_5);
		Vector2_t2156229523  L_6 = Rigidbody2D_get_position_m2575647076(L_5, /*hidden argument*/NULL);
		Vector2_t2156229523  L_7 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		float L_8 = __this->get_m_InterpolateMovement_19();
		Vector2_t2156229523  L_9 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		float L_10 = VirtFuncInvoker0< float >::Invoke(21 /* System.Single UnityEngine.Networking.NetworkBehaviour::GetNetworkSendInterval() */, __this);
		Vector2_t2156229523  L_11 = Vector2_op_Division_m132623573(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		bool L_12 = __this->get_m_Grounded_25();
		if (L_12)
		{
			goto IL_007c;
		}
	}
	{
		float L_13 = (&V_1)->get_y_1();
		if ((!(((float)L_13) < ((float)(0.0f)))))
		{
			goto IL_007c;
		}
	}
	{
		float L_14 = (&V_0)->get_y_1();
		(&V_1)->set_y_1(L_14);
	}

IL_007c:
	{
		Rigidbody2D_t939494601 * L_15 = __this->get_m_RigidBody2D_23();
		Vector2_t2156229523  L_16 = V_1;
		NullCheck(L_15);
		Rigidbody2D_set_velocity_m2898400508(L_15, L_16, /*hidden argument*/NULL);
	}

IL_0089:
	{
		float L_17 = NetworkTransform_get_interpolateRotation_m4199485228(__this, /*hidden argument*/NULL);
		if ((((float)L_17) == ((float)(0.0f))))
		{
			goto IL_0135;
		}
	}
	{
		Rigidbody2D_t939494601 * L_18 = __this->get_m_RigidBody2D_23();
		NullCheck(L_18);
		float L_19 = Rigidbody2D_get_rotation_m1584227507(L_18, /*hidden argument*/NULL);
		V_2 = (fmodf(L_19, (360.0f)));
		float L_20 = V_2;
		if ((!(((float)L_20) < ((float)(0.0f)))))
		{
			goto IL_00c1;
		}
	}
	{
		float L_21 = V_2;
		V_2 = ((float)il2cpp_codegen_add((float)L_21, (float)(360.0f)));
	}

IL_00c1:
	{
		Transform_t3600365921 * L_22 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		Quaternion_t2301928331  L_23 = Transform_get_rotation_m3502953881(L_22, /*hidden argument*/NULL);
		float L_24 = __this->get_m_TargetSyncRotation2D_31();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_25 = Quaternion_Euler_m3049309462(NULL /*static, unused*/, (0.0f), (0.0f), L_24, /*hidden argument*/NULL);
		float L_26 = Time_get_fixedDeltaTime_m3595802076(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_27 = NetworkTransform_get_interpolateRotation_m4199485228(__this, /*hidden argument*/NULL);
		float L_28 = VirtFuncInvoker0< float >::Invoke(21 /* System.Single UnityEngine.Networking.NetworkBehaviour::GetNetworkSendInterval() */, __this);
		Quaternion_t2301928331  L_29 = Quaternion_Slerp_m1234055455(NULL /*static, unused*/, L_23, L_25, ((float)((float)((float)il2cpp_codegen_multiply((float)L_26, (float)L_27))/(float)L_28)), /*hidden argument*/NULL);
		V_3 = L_29;
		Rigidbody2D_t939494601 * L_30 = __this->get_m_RigidBody2D_23();
		Vector3_t3722313464  L_31 = Quaternion_get_eulerAngles_m3425202016((Quaternion_t2301928331 *)(&V_3), /*hidden argument*/NULL);
		V_4 = L_31;
		float L_32 = (&V_4)->get_z_4();
		NullCheck(L_30);
		Rigidbody2D_MoveRotation_m3032842781(L_30, L_32, /*hidden argument*/NULL);
		float L_33 = __this->get_m_TargetSyncRotation2D_31();
		float L_34 = __this->get_m_TargetSyncAngularVelocity2D_32();
		float L_35 = Time_get_fixedDeltaTime_m3595802076(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_TargetSyncRotation2D_31(((float)il2cpp_codegen_add((float)L_33, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_34, (float)L_35)), (float)(0.1f))))));
	}

IL_0135:
	{
		Vector3_t3722313464  L_36 = __this->get_m_TargetSyncPosition_26();
		Vector3_t3722313464  L_37 = __this->get_m_TargetSyncVelocity_27();
		float L_38 = Time_get_fixedDeltaTime_m3595802076(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_39 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_37, L_38, /*hidden argument*/NULL);
		Vector3_t3722313464  L_40 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_39, (0.1f), /*hidden argument*/NULL);
		Vector3_t3722313464  L_41 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_36, L_40, /*hidden argument*/NULL);
		__this->set_m_TargetSyncPosition_26(L_41);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::Update()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_Update_m1381845480 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransform_Update_m1381845480_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = NetworkBehaviour_get_hasAuthority_m3994339092(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		goto IL_005a;
	}

IL_0011:
	{
		bool L_1 = NetworkBehaviour_get_localPlayerAuthority_m3825444790(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_005a;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t2920297688_il2cpp_TypeInfo_var);
		bool L_2 = NetworkServer_get_active_m2527733392(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		goto IL_005a;
	}

IL_0030:
	{
		float L_3 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = __this->get_m_LastClientSendTime_34();
		float L_5 = VirtFuncInvoker0< float >::Invoke(21 /* System.Single UnityEngine.Networking.NetworkBehaviour::GetNetworkSendInterval() */, __this);
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_4))) > ((float)L_5))))
		{
			goto IL_005a;
		}
	}
	{
		NetworkTransform_SendTransform_m3176084316(__this, /*hidden argument*/NULL);
		float L_6 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_LastClientSendTime_34(L_6);
	}

IL_005a:
	{
		return;
	}
}
// System.Boolean UnityEngine.Networking.NetworkTransform::HasMoved()
extern "C" IL2CPP_METHOD_ATTR bool NetworkTransform_HasMoved_m5550782 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransform_HasMoved_m5550782_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	bool V_4 = false;
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector2_t2156229523  V_6;
	memset(&V_6, 0, sizeof(V_6));
	{
		V_0 = (0.0f);
		Rigidbody_t3916780224 * L_0 = __this->get_m_RigidBody3D_22();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		Rigidbody_t3916780224 * L_2 = __this->get_m_RigidBody3D_22();
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = Rigidbody_get_position_m1712729619(L_2, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = __this->get_m_PrevPosition_35();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_5 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6 = Vector3_get_magnitude_m27958459((Vector3_t3722313464 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_009b;
	}

IL_003e:
	{
		Rigidbody2D_t939494601 * L_7 = __this->get_m_RigidBody2D_23();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_7, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_007a;
		}
	}
	{
		Rigidbody2D_t939494601 * L_9 = __this->get_m_RigidBody2D_23();
		NullCheck(L_9);
		Vector2_t2156229523  L_10 = Rigidbody2D_get_position_m2575647076(L_9, /*hidden argument*/NULL);
		Vector3_t3722313464  L_11 = __this->get_m_PrevPosition_35();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_12 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		Vector2_t2156229523  L_13 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_10, L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		float L_14 = Vector2_get_magnitude_m2752892833((Vector2_t2156229523 *)(&V_2), /*hidden argument*/NULL);
		V_0 = L_14;
		goto IL_009b;
	}

IL_007a:
	{
		Transform_t3600365921 * L_15 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t3722313464  L_16 = Transform_get_position_m36019626(L_15, /*hidden argument*/NULL);
		Vector3_t3722313464  L_17 = __this->get_m_PrevPosition_35();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_18 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		float L_19 = Vector3_get_magnitude_m27958459((Vector3_t3722313464 *)(&V_3), /*hidden argument*/NULL);
		V_0 = L_19;
	}

IL_009b:
	{
		float L_20 = V_0;
		if ((!(((float)L_20) > ((float)(1.0E-05f)))))
		{
			goto IL_00af;
		}
	}
	{
		V_4 = (bool)1;
		goto IL_01c4;
	}

IL_00af:
	{
		Rigidbody_t3916780224 * L_21 = __this->get_m_RigidBody3D_22();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_22 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_21, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00de;
		}
	}
	{
		Rigidbody_t3916780224 * L_23 = __this->get_m_RigidBody3D_22();
		NullCheck(L_23);
		Quaternion_t2301928331  L_24 = Rigidbody_get_rotation_m3610554181(L_23, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_25 = __this->get_m_PrevRotation_36();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		float L_26 = Quaternion_Angle_m1586774072(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		V_0 = L_26;
		goto IL_0127;
	}

IL_00de:
	{
		Rigidbody2D_t939494601 * L_27 = __this->get_m_RigidBody2D_23();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_28 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_27, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_010e;
		}
	}
	{
		Rigidbody2D_t939494601 * L_29 = __this->get_m_RigidBody2D_23();
		NullCheck(L_29);
		float L_30 = Rigidbody2D_get_rotation_m1584227507(L_29, /*hidden argument*/NULL);
		float L_31 = __this->get_m_PrevRotation2D_37();
		float L_32 = fabsf(((float)il2cpp_codegen_subtract((float)L_30, (float)L_31)));
		V_0 = L_32;
		goto IL_0127;
	}

IL_010e:
	{
		Transform_t3600365921 * L_33 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		Quaternion_t2301928331  L_34 = Transform_get_rotation_m3502953881(L_33, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_35 = __this->get_m_PrevRotation_36();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		float L_36 = Quaternion_Angle_m1586774072(NULL /*static, unused*/, L_34, L_35, /*hidden argument*/NULL);
		V_0 = L_36;
	}

IL_0127:
	{
		float L_37 = V_0;
		if ((!(((float)L_37) > ((float)(1.0E-05f)))))
		{
			goto IL_013b;
		}
	}
	{
		V_4 = (bool)1;
		goto IL_01c4;
	}

IL_013b:
	{
		Rigidbody_t3916780224 * L_38 = __this->get_m_RigidBody3D_22();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_39 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_38, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_0174;
		}
	}
	{
		Rigidbody_t3916780224 * L_40 = __this->get_m_RigidBody3D_22();
		NullCheck(L_40);
		Vector3_t3722313464  L_41 = Rigidbody_get_velocity_m2993632669(L_40, /*hidden argument*/NULL);
		V_5 = L_41;
		float L_42 = Vector3_get_sqrMagnitude_m1474274574((Vector3_t3722313464 *)(&V_5), /*hidden argument*/NULL);
		float L_43 = __this->get_m_PrevVelocity_38();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_44 = fabsf(((float)il2cpp_codegen_subtract((float)L_42, (float)L_43)));
		V_0 = L_44;
		goto IL_01a8;
	}

IL_0174:
	{
		Rigidbody2D_t939494601 * L_45 = __this->get_m_RigidBody2D_23();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_46 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_45, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_01a8;
		}
	}
	{
		Rigidbody2D_t939494601 * L_47 = __this->get_m_RigidBody2D_23();
		NullCheck(L_47);
		Vector2_t2156229523  L_48 = Rigidbody2D_get_velocity_m366589732(L_47, /*hidden argument*/NULL);
		V_6 = L_48;
		float L_49 = Vector2_get_sqrMagnitude_m837837635((Vector2_t2156229523 *)(&V_6), /*hidden argument*/NULL);
		float L_50 = __this->get_m_PrevVelocity_38();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_51 = fabsf(((float)il2cpp_codegen_subtract((float)L_49, (float)L_50)));
		V_0 = L_51;
	}

IL_01a8:
	{
		float L_52 = V_0;
		if ((!(((float)L_52) > ((float)(1.0E-05f)))))
		{
			goto IL_01bc;
		}
	}
	{
		V_4 = (bool)1;
		goto IL_01c4;
	}

IL_01bc:
	{
		V_4 = (bool)0;
		goto IL_01c4;
	}

IL_01c4:
	{
		bool L_53 = V_4;
		return L_53;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::SendTransform()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_SendTransform_m3176084316 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransform_SendTransform_m3176084316_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		bool L_0 = NetworkTransform_HasMoved_m5550782(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ClientScene_t3640716971_il2cpp_TypeInfo_var);
		NetworkConnection_t2705220091 * L_1 = ClientScene_get_readyConnection_m1213877119(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}

IL_0016:
	{
		goto IL_019e;
	}

IL_001c:
	{
		NetworkWriter_t3928387057 * L_2 = __this->get_m_LocalTransformWriter_43();
		NullCheck(L_2);
		NetworkWriter_StartMessage_m841875667(L_2, (int16_t)6, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_3 = __this->get_m_LocalTransformWriter_43();
		NetworkInstanceId_t786350175  L_4 = NetworkBehaviour_get_netId_m3535684635(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		NetworkWriter_Write_m2257467436(L_3, L_4, /*hidden argument*/NULL);
		int32_t L_5 = NetworkTransform_get_transformSyncMode_m1860479488(__this, /*hidden argument*/NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		switch (L_6)
		{
			case 0:
			{
				goto IL_005f;
			}
			case 1:
			{
				goto IL_0065;
			}
			case 2:
			{
				goto IL_0089;
			}
			case 3:
			{
				goto IL_0077;
			}
			case 4:
			{
				goto IL_009b;
			}
		}
	}
	{
		goto IL_00ad;
	}

IL_005f:
	{
		goto IL_019e;
	}

IL_0065:
	{
		NetworkWriter_t3928387057 * L_7 = __this->get_m_LocalTransformWriter_43();
		NetworkTransform_SerializeModeTransform_m1783024825(__this, L_7, /*hidden argument*/NULL);
		goto IL_00ad;
	}

IL_0077:
	{
		NetworkWriter_t3928387057 * L_8 = __this->get_m_LocalTransformWriter_43();
		NetworkTransform_SerializeMode3D_m1737298308(__this, L_8, /*hidden argument*/NULL);
		goto IL_00ad;
	}

IL_0089:
	{
		NetworkWriter_t3928387057 * L_9 = __this->get_m_LocalTransformWriter_43();
		NetworkTransform_SerializeMode2D_m906862596(__this, L_9, /*hidden argument*/NULL);
		goto IL_00ad;
	}

IL_009b:
	{
		NetworkWriter_t3928387057 * L_10 = __this->get_m_LocalTransformWriter_43();
		NetworkTransform_SerializeModeCharacterController_m305220996(__this, L_10, /*hidden argument*/NULL);
		goto IL_00ad;
	}

IL_00ad:
	{
		Rigidbody_t3916780224 * L_11 = __this->get_m_RigidBody3D_22();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_11, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0100;
		}
	}
	{
		Rigidbody_t3916780224 * L_13 = __this->get_m_RigidBody3D_22();
		NullCheck(L_13);
		Vector3_t3722313464  L_14 = Rigidbody_get_position_m1712729619(L_13, /*hidden argument*/NULL);
		__this->set_m_PrevPosition_35(L_14);
		Rigidbody_t3916780224 * L_15 = __this->get_m_RigidBody3D_22();
		NullCheck(L_15);
		Quaternion_t2301928331  L_16 = Rigidbody_get_rotation_m3610554181(L_15, /*hidden argument*/NULL);
		__this->set_m_PrevRotation_36(L_16);
		Rigidbody_t3916780224 * L_17 = __this->get_m_RigidBody3D_22();
		NullCheck(L_17);
		Vector3_t3722313464  L_18 = Rigidbody_get_velocity_m2993632669(L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		float L_19 = Vector3_get_sqrMagnitude_m1474274574((Vector3_t3722313464 *)(&V_1), /*hidden argument*/NULL);
		__this->set_m_PrevVelocity_38(L_19);
		goto IL_017c;
	}

IL_0100:
	{
		Rigidbody2D_t939494601 * L_20 = __this->get_m_RigidBody2D_23();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_21 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_20, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0158;
		}
	}
	{
		Rigidbody2D_t939494601 * L_22 = __this->get_m_RigidBody2D_23();
		NullCheck(L_22);
		Vector2_t2156229523  L_23 = Rigidbody2D_get_position_m2575647076(L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_24 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		__this->set_m_PrevPosition_35(L_24);
		Rigidbody2D_t939494601 * L_25 = __this->get_m_RigidBody2D_23();
		NullCheck(L_25);
		float L_26 = Rigidbody2D_get_rotation_m1584227507(L_25, /*hidden argument*/NULL);
		__this->set_m_PrevRotation2D_37(L_26);
		Rigidbody2D_t939494601 * L_27 = __this->get_m_RigidBody2D_23();
		NullCheck(L_27);
		Vector2_t2156229523  L_28 = Rigidbody2D_get_velocity_m366589732(L_27, /*hidden argument*/NULL);
		V_2 = L_28;
		float L_29 = Vector2_get_sqrMagnitude_m837837635((Vector2_t2156229523 *)(&V_2), /*hidden argument*/NULL);
		__this->set_m_PrevVelocity_38(L_29);
		goto IL_017c;
	}

IL_0158:
	{
		Transform_t3600365921 * L_30 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_t3722313464  L_31 = Transform_get_position_m36019626(L_30, /*hidden argument*/NULL);
		__this->set_m_PrevPosition_35(L_31);
		Transform_t3600365921 * L_32 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		Quaternion_t2301928331  L_33 = Transform_get_rotation_m3502953881(L_32, /*hidden argument*/NULL);
		__this->set_m_PrevRotation_36(L_33);
	}

IL_017c:
	{
		NetworkWriter_t3928387057 * L_34 = __this->get_m_LocalTransformWriter_43();
		NullCheck(L_34);
		NetworkWriter_FinishMessage_m3971444334(L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ClientScene_t3640716971_il2cpp_TypeInfo_var);
		NetworkConnection_t2705220091 * L_35 = ClientScene_get_readyConnection_m1213877119(NULL /*static, unused*/, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_36 = __this->get_m_LocalTransformWriter_43();
		int32_t L_37 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 UnityEngine.Networking.NetworkBehaviour::GetNetworkChannel() */, __this);
		NullCheck(L_35);
		VirtFuncInvoker2< bool, NetworkWriter_t3928387057 *, int32_t >::Invoke(11 /* System.Boolean UnityEngine.Networking.NetworkConnection::SendWriter(UnityEngine.Networking.NetworkWriter,System.Int32) */, L_35, L_36, L_37);
	}

IL_019e:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::HandleTransform(UnityEngine.Networking.NetworkMessage)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_HandleTransform_m2231391039 (RuntimeObject * __this /* static, unused */, NetworkMessage_t1192515889 * ___netMsg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransform_HandleTransform_m2231391039_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkInstanceId_t786350175  V_0;
	memset(&V_0, 0, sizeof(V_0));
	GameObject_t1113636619 * V_1 = NULL;
	NetworkTransform_t3548153263 * V_2 = NULL;
	int32_t V_3 = 0;
	{
		NetworkMessage_t1192515889 * L_0 = ___netMsg0;
		NullCheck(L_0);
		NetworkReader_t1574750186 * L_1 = L_0->get_reader_3();
		NullCheck(L_1);
		NetworkInstanceId_t786350175  L_2 = NetworkReader_ReadNetworkId_m1117804330(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		NetworkInstanceId_t786350175  L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t2920297688_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_4 = NetworkServer_FindLocalObject_m2800748537(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		GameObject_t1113636619 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_5, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t3573890335_il2cpp_TypeInfo_var);
		bool L_7 = LogFilter_get_logError_m2939562087(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral2793551955, /*hidden argument*/NULL);
	}

IL_0037:
	{
		goto IL_0183;
	}

IL_003c:
	{
		GameObject_t1113636619 * L_8 = V_1;
		NullCheck(L_8);
		NetworkTransform_t3548153263 * L_9 = GameObject_GetComponent_TisNetworkTransform_t3548153263_m4093321400(L_8, /*hidden argument*/GameObject_GetComponent_TisNetworkTransform_t3548153263_m4093321400_RuntimeMethod_var);
		V_2 = L_9;
		NetworkTransform_t3548153263 * L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_10, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_006b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t3573890335_il2cpp_TypeInfo_var);
		bool L_12 = LogFilter_get_logError_m2939562087(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0066;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral1195343550, /*hidden argument*/NULL);
	}

IL_0066:
	{
		goto IL_0183;
	}

IL_006b:
	{
		NetworkTransform_t3548153263 * L_13 = V_2;
		NullCheck(L_13);
		bool L_14 = NetworkBehaviour_get_localPlayerAuthority_m3825444790(L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0092;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t3573890335_il2cpp_TypeInfo_var);
		bool L_15 = LogFilter_get_logError_m2939562087(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_008d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral3525122471, /*hidden argument*/NULL);
	}

IL_008d:
	{
		goto IL_0183;
	}

IL_0092:
	{
		NetworkMessage_t1192515889 * L_16 = ___netMsg0;
		NullCheck(L_16);
		NetworkConnection_t2705220091 * L_17 = L_16->get_conn_2();
		NullCheck(L_17);
		HashSet_1_t3646266945 * L_18 = NetworkConnection_get_clientOwnedObjects_m146181522(L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_00be;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t3573890335_il2cpp_TypeInfo_var);
		bool L_19 = LogFilter_get_logError_m2939562087(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00b9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral1613730879, /*hidden argument*/NULL);
	}

IL_00b9:
	{
		goto IL_0183;
	}

IL_00be:
	{
		NetworkMessage_t1192515889 * L_20 = ___netMsg0;
		NullCheck(L_20);
		NetworkConnection_t2705220091 * L_21 = L_20->get_conn_2();
		NullCheck(L_21);
		HashSet_1_t3646266945 * L_22 = NetworkConnection_get_clientOwnedObjects_m146181522(L_21, /*hidden argument*/NULL);
		NetworkInstanceId_t786350175  L_23 = V_0;
		NullCheck(L_22);
		bool L_24 = HashSet_1_Contains_m1296176293(L_22, L_23, /*hidden argument*/HashSet_1_Contains_m1296176293_RuntimeMethod_var);
		if (!L_24)
		{
			goto IL_015d;
		}
	}
	{
		NetworkTransform_t3548153263 * L_25 = V_2;
		NullCheck(L_25);
		int32_t L_26 = NetworkTransform_get_transformSyncMode_m1860479488(L_25, /*hidden argument*/NULL);
		V_3 = L_26;
		int32_t L_27 = V_3;
		switch (L_27)
		{
			case 0:
			{
				goto IL_00fb;
			}
			case 1:
			{
				goto IL_0101;
			}
			case 2:
			{
				goto IL_0127;
			}
			case 3:
			{
				goto IL_0114;
			}
			case 4:
			{
				goto IL_013a;
			}
		}
	}
	{
		goto IL_014d;
	}

IL_00fb:
	{
		goto IL_0183;
	}

IL_0101:
	{
		NetworkTransform_t3548153263 * L_28 = V_2;
		NetworkMessage_t1192515889 * L_29 = ___netMsg0;
		NullCheck(L_29);
		NetworkReader_t1574750186 * L_30 = L_29->get_reader_3();
		NullCheck(L_28);
		NetworkTransform_UnserializeModeTransform_m3827994885(L_28, L_30, (bool)0, /*hidden argument*/NULL);
		goto IL_014d;
	}

IL_0114:
	{
		NetworkTransform_t3548153263 * L_31 = V_2;
		NetworkMessage_t1192515889 * L_32 = ___netMsg0;
		NullCheck(L_32);
		NetworkReader_t1574750186 * L_33 = L_32->get_reader_3();
		NullCheck(L_31);
		NetworkTransform_UnserializeMode3D_m1904062442(L_31, L_33, (bool)0, /*hidden argument*/NULL);
		goto IL_014d;
	}

IL_0127:
	{
		NetworkTransform_t3548153263 * L_34 = V_2;
		NetworkMessage_t1192515889 * L_35 = ___netMsg0;
		NullCheck(L_35);
		NetworkReader_t1574750186 * L_36 = L_35->get_reader_3();
		NullCheck(L_34);
		NetworkTransform_UnserializeMode2D_m4000618177(L_34, L_36, (bool)0, /*hidden argument*/NULL);
		goto IL_014d;
	}

IL_013a:
	{
		NetworkTransform_t3548153263 * L_37 = V_2;
		NetworkMessage_t1192515889 * L_38 = ___netMsg0;
		NullCheck(L_38);
		NetworkReader_t1574750186 * L_39 = L_38->get_reader_3();
		NullCheck(L_37);
		NetworkTransform_UnserializeModeCharacterController_m4186511990(L_37, L_39, (bool)0, /*hidden argument*/NULL);
		goto IL_014d;
	}

IL_014d:
	{
		NetworkTransform_t3548153263 * L_40 = V_2;
		float L_41 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_40);
		L_40->set_m_LastClientSyncTime_33(L_41);
		goto IL_0183;
	}

IL_015d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t3573890335_il2cpp_TypeInfo_var);
		bool L_42 = LogFilter_get_logWarn_m1931385554(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_0183;
		}
	}
	{
		NetworkInstanceId_t786350175  L_43 = V_0;
		NetworkInstanceId_t786350175  L_44 = L_43;
		RuntimeObject * L_45 = Box(NetworkInstanceId_t786350175_il2cpp_TypeInfo_var, &L_44);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_46 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral2502184034, L_45, _stringLiteral1207897643, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_46, /*hidden argument*/NULL);
	}

IL_0183:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::WriteAngle(UnityEngine.Networking.NetworkWriter,System.Single,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_WriteAngle_m3326937041 (RuntimeObject * __this /* static, unused */, NetworkWriter_t3928387057 * ___writer0, float ___angle1, int32_t ___compression2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___compression2;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = ___compression2;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_2 = ___compression2;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_0043;
	}

IL_001a:
	{
		NetworkWriter_t3928387057 * L_3 = ___writer0;
		float L_4 = ___angle1;
		NullCheck(L_3);
		NetworkWriter_Write_m189730350(L_3, L_4, /*hidden argument*/NULL);
		goto IL_0043;
	}

IL_0027:
	{
		NetworkWriter_t3928387057 * L_5 = ___writer0;
		float L_6 = ___angle1;
		NullCheck(L_5);
		NetworkWriter_Write_m297525087(L_5, (((int16_t)((int16_t)L_6))), /*hidden argument*/NULL);
		goto IL_0043;
	}

IL_0035:
	{
		NetworkWriter_t3928387057 * L_7 = ___writer0;
		float L_8 = ___angle1;
		NullCheck(L_7);
		NetworkWriter_Write_m297525087(L_7, (((int16_t)((int16_t)L_8))), /*hidden argument*/NULL);
		goto IL_0043;
	}

IL_0043:
	{
		return;
	}
}
// System.Single UnityEngine.Networking.NetworkTransform::ReadAngle(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C" IL2CPP_METHOD_ATTR float NetworkTransform_ReadAngle_m1266769566 (RuntimeObject * __this /* static, unused */, NetworkReader_t1574750186 * ___reader0, int32_t ___compression1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		int32_t L_0 = ___compression1;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = ___compression1;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_2 = ___compression1;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_0043;
	}

IL_001a:
	{
		NetworkReader_t1574750186 * L_3 = ___reader0;
		NullCheck(L_3);
		float L_4 = NetworkReader_ReadSingle_m2704596705(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_004e;
	}

IL_0027:
	{
		NetworkReader_t1574750186 * L_5 = ___reader0;
		NullCheck(L_5);
		int16_t L_6 = NetworkReader_ReadInt16_m2638377632(L_5, /*hidden argument*/NULL);
		V_0 = (((float)((float)L_6)));
		goto IL_004e;
	}

IL_0035:
	{
		NetworkReader_t1574750186 * L_7 = ___reader0;
		NullCheck(L_7);
		int16_t L_8 = NetworkReader_ReadInt16_m2638377632(L_7, /*hidden argument*/NULL);
		V_0 = (((float)((float)L_8)));
		goto IL_004e;
	}

IL_0043:
	{
		V_0 = (0.0f);
		goto IL_004e;
	}

IL_004e:
	{
		float L_9 = V_0;
		return L_9;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::SerializeVelocity3D(UnityEngine.Networking.NetworkWriter,UnityEngine.Vector3,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_SerializeVelocity3D_m2367663390 (RuntimeObject * __this /* static, unused */, NetworkWriter_t3928387057 * ___writer0, Vector3_t3722313464  ___velocity1, int32_t ___compression2, const RuntimeMethod* method)
{
	{
		NetworkWriter_t3928387057 * L_0 = ___writer0;
		Vector3_t3722313464  L_1 = ___velocity1;
		NullCheck(L_0);
		NetworkWriter_Write_m13082585(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::SerializeVelocity2D(UnityEngine.Networking.NetworkWriter,UnityEngine.Vector2,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_SerializeVelocity2D_m3451347480 (RuntimeObject * __this /* static, unused */, NetworkWriter_t3928387057 * ___writer0, Vector2_t2156229523  ___velocity1, int32_t ___compression2, const RuntimeMethod* method)
{
	{
		NetworkWriter_t3928387057 * L_0 = ___writer0;
		Vector2_t2156229523  L_1 = ___velocity1;
		NullCheck(L_0);
		NetworkWriter_Write_m13017049(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::SerializeRotation3D(UnityEngine.Networking.NetworkWriter,UnityEngine.Quaternion,UnityEngine.Networking.NetworkTransform/AxisSyncMode,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_SerializeRotation3D_m2417259645 (RuntimeObject * __this /* static, unused */, NetworkWriter_t3928387057 * ___writer0, Quaternion_t2301928331  ___rot1, int32_t ___mode2, int32_t ___compression3, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector3_t3722313464  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Vector3_t3722313464  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Vector3_t3722313464  V_10;
	memset(&V_10, 0, sizeof(V_10));
	Vector3_t3722313464  V_11;
	memset(&V_11, 0, sizeof(V_11));
	{
		int32_t L_0 = ___mode2;
		switch (L_0)
		{
			case 0:
			{
				goto IL_002c;
			}
			case 1:
			{
				goto IL_0031;
			}
			case 2:
			{
				goto IL_004c;
			}
			case 3:
			{
				goto IL_0067;
			}
			case 4:
			{
				goto IL_0082;
			}
			case 5:
			{
				goto IL_00b4;
			}
			case 6:
			{
				goto IL_00e7;
			}
			case 7:
			{
				goto IL_011a;
			}
		}
	}
	{
		goto IL_0164;
	}

IL_002c:
	{
		goto IL_0164;
	}

IL_0031:
	{
		NetworkWriter_t3928387057 * L_1 = ___writer0;
		Vector3_t3722313464  L_2 = Quaternion_get_eulerAngles_m3425202016((Quaternion_t2301928331 *)(&___rot1), /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_x_2();
		int32_t L_4 = ___compression3;
		NetworkTransform_WriteAngle_m3326937041(NULL /*static, unused*/, L_1, L_3, L_4, /*hidden argument*/NULL);
		goto IL_0164;
	}

IL_004c:
	{
		NetworkWriter_t3928387057 * L_5 = ___writer0;
		Vector3_t3722313464  L_6 = Quaternion_get_eulerAngles_m3425202016((Quaternion_t2301928331 *)(&___rot1), /*hidden argument*/NULL);
		V_1 = L_6;
		float L_7 = (&V_1)->get_y_3();
		int32_t L_8 = ___compression3;
		NetworkTransform_WriteAngle_m3326937041(NULL /*static, unused*/, L_5, L_7, L_8, /*hidden argument*/NULL);
		goto IL_0164;
	}

IL_0067:
	{
		NetworkWriter_t3928387057 * L_9 = ___writer0;
		Vector3_t3722313464  L_10 = Quaternion_get_eulerAngles_m3425202016((Quaternion_t2301928331 *)(&___rot1), /*hidden argument*/NULL);
		V_2 = L_10;
		float L_11 = (&V_2)->get_z_4();
		int32_t L_12 = ___compression3;
		NetworkTransform_WriteAngle_m3326937041(NULL /*static, unused*/, L_9, L_11, L_12, /*hidden argument*/NULL);
		goto IL_0164;
	}

IL_0082:
	{
		NetworkWriter_t3928387057 * L_13 = ___writer0;
		Vector3_t3722313464  L_14 = Quaternion_get_eulerAngles_m3425202016((Quaternion_t2301928331 *)(&___rot1), /*hidden argument*/NULL);
		V_3 = L_14;
		float L_15 = (&V_3)->get_x_2();
		int32_t L_16 = ___compression3;
		NetworkTransform_WriteAngle_m3326937041(NULL /*static, unused*/, L_13, L_15, L_16, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_17 = ___writer0;
		Vector3_t3722313464  L_18 = Quaternion_get_eulerAngles_m3425202016((Quaternion_t2301928331 *)(&___rot1), /*hidden argument*/NULL);
		V_4 = L_18;
		float L_19 = (&V_4)->get_y_3();
		int32_t L_20 = ___compression3;
		NetworkTransform_WriteAngle_m3326937041(NULL /*static, unused*/, L_17, L_19, L_20, /*hidden argument*/NULL);
		goto IL_0164;
	}

IL_00b4:
	{
		NetworkWriter_t3928387057 * L_21 = ___writer0;
		Vector3_t3722313464  L_22 = Quaternion_get_eulerAngles_m3425202016((Quaternion_t2301928331 *)(&___rot1), /*hidden argument*/NULL);
		V_5 = L_22;
		float L_23 = (&V_5)->get_x_2();
		int32_t L_24 = ___compression3;
		NetworkTransform_WriteAngle_m3326937041(NULL /*static, unused*/, L_21, L_23, L_24, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_25 = ___writer0;
		Vector3_t3722313464  L_26 = Quaternion_get_eulerAngles_m3425202016((Quaternion_t2301928331 *)(&___rot1), /*hidden argument*/NULL);
		V_6 = L_26;
		float L_27 = (&V_6)->get_z_4();
		int32_t L_28 = ___compression3;
		NetworkTransform_WriteAngle_m3326937041(NULL /*static, unused*/, L_25, L_27, L_28, /*hidden argument*/NULL);
		goto IL_0164;
	}

IL_00e7:
	{
		NetworkWriter_t3928387057 * L_29 = ___writer0;
		Vector3_t3722313464  L_30 = Quaternion_get_eulerAngles_m3425202016((Quaternion_t2301928331 *)(&___rot1), /*hidden argument*/NULL);
		V_7 = L_30;
		float L_31 = (&V_7)->get_y_3();
		int32_t L_32 = ___compression3;
		NetworkTransform_WriteAngle_m3326937041(NULL /*static, unused*/, L_29, L_31, L_32, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_33 = ___writer0;
		Vector3_t3722313464  L_34 = Quaternion_get_eulerAngles_m3425202016((Quaternion_t2301928331 *)(&___rot1), /*hidden argument*/NULL);
		V_8 = L_34;
		float L_35 = (&V_8)->get_z_4();
		int32_t L_36 = ___compression3;
		NetworkTransform_WriteAngle_m3326937041(NULL /*static, unused*/, L_33, L_35, L_36, /*hidden argument*/NULL);
		goto IL_0164;
	}

IL_011a:
	{
		NetworkWriter_t3928387057 * L_37 = ___writer0;
		Vector3_t3722313464  L_38 = Quaternion_get_eulerAngles_m3425202016((Quaternion_t2301928331 *)(&___rot1), /*hidden argument*/NULL);
		V_9 = L_38;
		float L_39 = (&V_9)->get_x_2();
		int32_t L_40 = ___compression3;
		NetworkTransform_WriteAngle_m3326937041(NULL /*static, unused*/, L_37, L_39, L_40, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_41 = ___writer0;
		Vector3_t3722313464  L_42 = Quaternion_get_eulerAngles_m3425202016((Quaternion_t2301928331 *)(&___rot1), /*hidden argument*/NULL);
		V_10 = L_42;
		float L_43 = (&V_10)->get_y_3();
		int32_t L_44 = ___compression3;
		NetworkTransform_WriteAngle_m3326937041(NULL /*static, unused*/, L_41, L_43, L_44, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_45 = ___writer0;
		Vector3_t3722313464  L_46 = Quaternion_get_eulerAngles_m3425202016((Quaternion_t2301928331 *)(&___rot1), /*hidden argument*/NULL);
		V_11 = L_46;
		float L_47 = (&V_11)->get_z_4();
		int32_t L_48 = ___compression3;
		NetworkTransform_WriteAngle_m3326937041(NULL /*static, unused*/, L_45, L_47, L_48, /*hidden argument*/NULL);
		goto IL_0164;
	}

IL_0164:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::SerializeRotation2D(UnityEngine.Networking.NetworkWriter,System.Single,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_SerializeRotation2D_m2242062180 (RuntimeObject * __this /* static, unused */, NetworkWriter_t3928387057 * ___writer0, float ___rot1, int32_t ___compression2, const RuntimeMethod* method)
{
	{
		NetworkWriter_t3928387057 * L_0 = ___writer0;
		float L_1 = ___rot1;
		int32_t L_2 = ___compression2;
		NetworkTransform_WriteAngle_m3326937041(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::SerializeSpin3D(UnityEngine.Networking.NetworkWriter,UnityEngine.Vector3,UnityEngine.Networking.NetworkTransform/AxisSyncMode,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_SerializeSpin3D_m3447179846 (RuntimeObject * __this /* static, unused */, NetworkWriter_t3928387057 * ___writer0, Vector3_t3722313464  ___angularVelocity1, int32_t ___mode2, int32_t ___compression3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___mode2;
		switch (L_0)
		{
			case 0:
			{
				goto IL_002c;
			}
			case 1:
			{
				goto IL_0031;
			}
			case 2:
			{
				goto IL_0044;
			}
			case 3:
			{
				goto IL_0057;
			}
			case 4:
			{
				goto IL_006a;
			}
			case 5:
			{
				goto IL_008b;
			}
			case 6:
			{
				goto IL_00ac;
			}
			case 7:
			{
				goto IL_00cd;
			}
		}
	}
	{
		goto IL_00fc;
	}

IL_002c:
	{
		goto IL_00fc;
	}

IL_0031:
	{
		NetworkWriter_t3928387057 * L_1 = ___writer0;
		float L_2 = (&___angularVelocity1)->get_x_2();
		int32_t L_3 = ___compression3;
		NetworkTransform_WriteAngle_m3326937041(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		goto IL_00fc;
	}

IL_0044:
	{
		NetworkWriter_t3928387057 * L_4 = ___writer0;
		float L_5 = (&___angularVelocity1)->get_y_3();
		int32_t L_6 = ___compression3;
		NetworkTransform_WriteAngle_m3326937041(NULL /*static, unused*/, L_4, L_5, L_6, /*hidden argument*/NULL);
		goto IL_00fc;
	}

IL_0057:
	{
		NetworkWriter_t3928387057 * L_7 = ___writer0;
		float L_8 = (&___angularVelocity1)->get_z_4();
		int32_t L_9 = ___compression3;
		NetworkTransform_WriteAngle_m3326937041(NULL /*static, unused*/, L_7, L_8, L_9, /*hidden argument*/NULL);
		goto IL_00fc;
	}

IL_006a:
	{
		NetworkWriter_t3928387057 * L_10 = ___writer0;
		float L_11 = (&___angularVelocity1)->get_x_2();
		int32_t L_12 = ___compression3;
		NetworkTransform_WriteAngle_m3326937041(NULL /*static, unused*/, L_10, L_11, L_12, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_13 = ___writer0;
		float L_14 = (&___angularVelocity1)->get_y_3();
		int32_t L_15 = ___compression3;
		NetworkTransform_WriteAngle_m3326937041(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/NULL);
		goto IL_00fc;
	}

IL_008b:
	{
		NetworkWriter_t3928387057 * L_16 = ___writer0;
		float L_17 = (&___angularVelocity1)->get_x_2();
		int32_t L_18 = ___compression3;
		NetworkTransform_WriteAngle_m3326937041(NULL /*static, unused*/, L_16, L_17, L_18, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_19 = ___writer0;
		float L_20 = (&___angularVelocity1)->get_z_4();
		int32_t L_21 = ___compression3;
		NetworkTransform_WriteAngle_m3326937041(NULL /*static, unused*/, L_19, L_20, L_21, /*hidden argument*/NULL);
		goto IL_00fc;
	}

IL_00ac:
	{
		NetworkWriter_t3928387057 * L_22 = ___writer0;
		float L_23 = (&___angularVelocity1)->get_y_3();
		int32_t L_24 = ___compression3;
		NetworkTransform_WriteAngle_m3326937041(NULL /*static, unused*/, L_22, L_23, L_24, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_25 = ___writer0;
		float L_26 = (&___angularVelocity1)->get_z_4();
		int32_t L_27 = ___compression3;
		NetworkTransform_WriteAngle_m3326937041(NULL /*static, unused*/, L_25, L_26, L_27, /*hidden argument*/NULL);
		goto IL_00fc;
	}

IL_00cd:
	{
		NetworkWriter_t3928387057 * L_28 = ___writer0;
		float L_29 = (&___angularVelocity1)->get_x_2();
		int32_t L_30 = ___compression3;
		NetworkTransform_WriteAngle_m3326937041(NULL /*static, unused*/, L_28, L_29, L_30, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_31 = ___writer0;
		float L_32 = (&___angularVelocity1)->get_y_3();
		int32_t L_33 = ___compression3;
		NetworkTransform_WriteAngle_m3326937041(NULL /*static, unused*/, L_31, L_32, L_33, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_34 = ___writer0;
		float L_35 = (&___angularVelocity1)->get_z_4();
		int32_t L_36 = ___compression3;
		NetworkTransform_WriteAngle_m3326937041(NULL /*static, unused*/, L_34, L_35, L_36, /*hidden argument*/NULL);
		goto IL_00fc;
	}

IL_00fc:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::SerializeSpin2D(UnityEngine.Networking.NetworkWriter,System.Single,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_SerializeSpin2D_m2352206203 (RuntimeObject * __this /* static, unused */, NetworkWriter_t3928387057 * ___writer0, float ___angularVelocity1, int32_t ___compression2, const RuntimeMethod* method)
{
	{
		NetworkWriter_t3928387057 * L_0 = ___writer0;
		float L_1 = ___angularVelocity1;
		int32_t L_2 = ___compression2;
		NetworkTransform_WriteAngle_m3326937041(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::UnserializeVelocity3D(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  NetworkTransform_UnserializeVelocity3D_m2585810748 (RuntimeObject * __this /* static, unused */, NetworkReader_t1574750186 * ___reader0, int32_t ___compression1, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = NetworkReader_ReadVector3_m2097563330(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		Vector3_t3722313464  L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::UnserializeVelocity2D(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  NetworkTransform_UnserializeVelocity2D_m586500050 (RuntimeObject * __this /* static, unused */, NetworkReader_t1574750186 * ___reader0, int32_t ___compression1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransform_UnserializeVelocity2D_m586500050_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		Vector2_t2156229523  L_1 = NetworkReader_ReadVector2_m4151988315(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0012;
	}

IL_0012:
	{
		Vector3_t3722313464  L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Quaternion UnityEngine.Networking.NetworkTransform::UnserializeRotation3D(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.NetworkTransform/AxisSyncMode,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  NetworkTransform_UnserializeRotation3D_m2713487431 (RuntimeObject * __this /* static, unused */, NetworkReader_t1574750186 * ___reader0, int32_t ___mode1, int32_t ___compression2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransform_UnserializeRotation3D_m2713487431_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Quaternion_t2301928331  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_0 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = ___mode1;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0038;
			}
			case 1:
			{
				goto IL_003d;
			}
			case 2:
			{
				goto IL_0062;
			}
			case 3:
			{
				goto IL_0087;
			}
			case 4:
			{
				goto IL_00ac;
			}
			case 5:
			{
				goto IL_00d3;
			}
			case 6:
			{
				goto IL_00fa;
			}
			case 7:
			{
				goto IL_0121;
			}
		}
	}
	{
		goto IL_014a;
	}

IL_0038:
	{
		goto IL_014a;
	}

IL_003d:
	{
		NetworkReader_t1574750186 * L_3 = ___reader0;
		int32_t L_4 = ___compression2;
		float L_5 = NetworkTransform_ReadAngle_m1266769566(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Vector3_Set_m1737058353((Vector3_t3722313464 *)(&V_1), L_5, (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t3722313464  L_6 = V_1;
		Quaternion_set_eulerAngles_m793195291((Quaternion_t2301928331 *)(&V_0), L_6, /*hidden argument*/NULL);
		goto IL_014a;
	}

IL_0062:
	{
		NetworkReader_t1574750186 * L_7 = ___reader0;
		int32_t L_8 = ___compression2;
		float L_9 = NetworkTransform_ReadAngle_m1266769566(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		Vector3_Set_m1737058353((Vector3_t3722313464 *)(&V_1), (0.0f), L_9, (0.0f), /*hidden argument*/NULL);
		Vector3_t3722313464  L_10 = V_1;
		Quaternion_set_eulerAngles_m793195291((Quaternion_t2301928331 *)(&V_0), L_10, /*hidden argument*/NULL);
		goto IL_014a;
	}

IL_0087:
	{
		NetworkReader_t1574750186 * L_11 = ___reader0;
		int32_t L_12 = ___compression2;
		float L_13 = NetworkTransform_ReadAngle_m1266769566(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		Vector3_Set_m1737058353((Vector3_t3722313464 *)(&V_1), (0.0f), (0.0f), L_13, /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = V_1;
		Quaternion_set_eulerAngles_m793195291((Quaternion_t2301928331 *)(&V_0), L_14, /*hidden argument*/NULL);
		goto IL_014a;
	}

IL_00ac:
	{
		NetworkReader_t1574750186 * L_15 = ___reader0;
		int32_t L_16 = ___compression2;
		float L_17 = NetworkTransform_ReadAngle_m1266769566(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		NetworkReader_t1574750186 * L_18 = ___reader0;
		int32_t L_19 = ___compression2;
		float L_20 = NetworkTransform_ReadAngle_m1266769566(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		Vector3_Set_m1737058353((Vector3_t3722313464 *)(&V_1), L_17, L_20, (0.0f), /*hidden argument*/NULL);
		Vector3_t3722313464  L_21 = V_1;
		Quaternion_set_eulerAngles_m793195291((Quaternion_t2301928331 *)(&V_0), L_21, /*hidden argument*/NULL);
		goto IL_014a;
	}

IL_00d3:
	{
		NetworkReader_t1574750186 * L_22 = ___reader0;
		int32_t L_23 = ___compression2;
		float L_24 = NetworkTransform_ReadAngle_m1266769566(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
		NetworkReader_t1574750186 * L_25 = ___reader0;
		int32_t L_26 = ___compression2;
		float L_27 = NetworkTransform_ReadAngle_m1266769566(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		Vector3_Set_m1737058353((Vector3_t3722313464 *)(&V_1), L_24, (0.0f), L_27, /*hidden argument*/NULL);
		Vector3_t3722313464  L_28 = V_1;
		Quaternion_set_eulerAngles_m793195291((Quaternion_t2301928331 *)(&V_0), L_28, /*hidden argument*/NULL);
		goto IL_014a;
	}

IL_00fa:
	{
		NetworkReader_t1574750186 * L_29 = ___reader0;
		int32_t L_30 = ___compression2;
		float L_31 = NetworkTransform_ReadAngle_m1266769566(NULL /*static, unused*/, L_29, L_30, /*hidden argument*/NULL);
		NetworkReader_t1574750186 * L_32 = ___reader0;
		int32_t L_33 = ___compression2;
		float L_34 = NetworkTransform_ReadAngle_m1266769566(NULL /*static, unused*/, L_32, L_33, /*hidden argument*/NULL);
		Vector3_Set_m1737058353((Vector3_t3722313464 *)(&V_1), (0.0f), L_31, L_34, /*hidden argument*/NULL);
		Vector3_t3722313464  L_35 = V_1;
		Quaternion_set_eulerAngles_m793195291((Quaternion_t2301928331 *)(&V_0), L_35, /*hidden argument*/NULL);
		goto IL_014a;
	}

IL_0121:
	{
		NetworkReader_t1574750186 * L_36 = ___reader0;
		int32_t L_37 = ___compression2;
		float L_38 = NetworkTransform_ReadAngle_m1266769566(NULL /*static, unused*/, L_36, L_37, /*hidden argument*/NULL);
		NetworkReader_t1574750186 * L_39 = ___reader0;
		int32_t L_40 = ___compression2;
		float L_41 = NetworkTransform_ReadAngle_m1266769566(NULL /*static, unused*/, L_39, L_40, /*hidden argument*/NULL);
		NetworkReader_t1574750186 * L_42 = ___reader0;
		int32_t L_43 = ___compression2;
		float L_44 = NetworkTransform_ReadAngle_m1266769566(NULL /*static, unused*/, L_42, L_43, /*hidden argument*/NULL);
		Vector3_Set_m1737058353((Vector3_t3722313464 *)(&V_1), L_38, L_41, L_44, /*hidden argument*/NULL);
		Vector3_t3722313464  L_45 = V_1;
		Quaternion_set_eulerAngles_m793195291((Quaternion_t2301928331 *)(&V_0), L_45, /*hidden argument*/NULL);
		goto IL_014a;
	}

IL_014a:
	{
		Quaternion_t2301928331  L_46 = V_0;
		V_2 = L_46;
		goto IL_0151;
	}

IL_0151:
	{
		Quaternion_t2301928331  L_47 = V_2;
		return L_47;
	}
}
// System.Single UnityEngine.Networking.NetworkTransform::UnserializeRotation2D(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C" IL2CPP_METHOD_ATTR float NetworkTransform_UnserializeRotation2D_m2763521727 (RuntimeObject * __this /* static, unused */, NetworkReader_t1574750186 * ___reader0, int32_t ___compression1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		int32_t L_1 = ___compression1;
		float L_2 = NetworkTransform_ReadAngle_m1266769566(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000e;
	}

IL_000e:
	{
		float L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::UnserializeSpin3D(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.NetworkTransform/AxisSyncMode,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  NetworkTransform_UnserializeSpin3D_m3995136278 (RuntimeObject * __this /* static, unused */, NetworkReader_t1574750186 * ___reader0, int32_t ___mode1, int32_t ___compression2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransform_UnserializeSpin3D_m3995136278_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = ___mode1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0032;
			}
			case 1:
			{
				goto IL_0037;
			}
			case 2:
			{
				goto IL_0054;
			}
			case 3:
			{
				goto IL_0071;
			}
			case 4:
			{
				goto IL_008e;
			}
			case 5:
			{
				goto IL_00ad;
			}
			case 6:
			{
				goto IL_00cc;
			}
			case 7:
			{
				goto IL_00eb;
			}
		}
	}
	{
		goto IL_010c;
	}

IL_0032:
	{
		goto IL_010c;
	}

IL_0037:
	{
		NetworkReader_t1574750186 * L_2 = ___reader0;
		int32_t L_3 = ___compression2;
		float L_4 = NetworkTransform_ReadAngle_m1266769566(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Vector3_Set_m1737058353((Vector3_t3722313464 *)(&V_0), L_4, (0.0f), (0.0f), /*hidden argument*/NULL);
		goto IL_010c;
	}

IL_0054:
	{
		NetworkReader_t1574750186 * L_5 = ___reader0;
		int32_t L_6 = ___compression2;
		float L_7 = NetworkTransform_ReadAngle_m1266769566(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		Vector3_Set_m1737058353((Vector3_t3722313464 *)(&V_0), (0.0f), L_7, (0.0f), /*hidden argument*/NULL);
		goto IL_010c;
	}

IL_0071:
	{
		NetworkReader_t1574750186 * L_8 = ___reader0;
		int32_t L_9 = ___compression2;
		float L_10 = NetworkTransform_ReadAngle_m1266769566(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		Vector3_Set_m1737058353((Vector3_t3722313464 *)(&V_0), (0.0f), (0.0f), L_10, /*hidden argument*/NULL);
		goto IL_010c;
	}

IL_008e:
	{
		NetworkReader_t1574750186 * L_11 = ___reader0;
		int32_t L_12 = ___compression2;
		float L_13 = NetworkTransform_ReadAngle_m1266769566(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		NetworkReader_t1574750186 * L_14 = ___reader0;
		int32_t L_15 = ___compression2;
		float L_16 = NetworkTransform_ReadAngle_m1266769566(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		Vector3_Set_m1737058353((Vector3_t3722313464 *)(&V_0), L_13, L_16, (0.0f), /*hidden argument*/NULL);
		goto IL_010c;
	}

IL_00ad:
	{
		NetworkReader_t1574750186 * L_17 = ___reader0;
		int32_t L_18 = ___compression2;
		float L_19 = NetworkTransform_ReadAngle_m1266769566(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		NetworkReader_t1574750186 * L_20 = ___reader0;
		int32_t L_21 = ___compression2;
		float L_22 = NetworkTransform_ReadAngle_m1266769566(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		Vector3_Set_m1737058353((Vector3_t3722313464 *)(&V_0), L_19, (0.0f), L_22, /*hidden argument*/NULL);
		goto IL_010c;
	}

IL_00cc:
	{
		NetworkReader_t1574750186 * L_23 = ___reader0;
		int32_t L_24 = ___compression2;
		float L_25 = NetworkTransform_ReadAngle_m1266769566(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
		NetworkReader_t1574750186 * L_26 = ___reader0;
		int32_t L_27 = ___compression2;
		float L_28 = NetworkTransform_ReadAngle_m1266769566(NULL /*static, unused*/, L_26, L_27, /*hidden argument*/NULL);
		Vector3_Set_m1737058353((Vector3_t3722313464 *)(&V_0), (0.0f), L_25, L_28, /*hidden argument*/NULL);
		goto IL_010c;
	}

IL_00eb:
	{
		NetworkReader_t1574750186 * L_29 = ___reader0;
		int32_t L_30 = ___compression2;
		float L_31 = NetworkTransform_ReadAngle_m1266769566(NULL /*static, unused*/, L_29, L_30, /*hidden argument*/NULL);
		NetworkReader_t1574750186 * L_32 = ___reader0;
		int32_t L_33 = ___compression2;
		float L_34 = NetworkTransform_ReadAngle_m1266769566(NULL /*static, unused*/, L_32, L_33, /*hidden argument*/NULL);
		NetworkReader_t1574750186 * L_35 = ___reader0;
		int32_t L_36 = ___compression2;
		float L_37 = NetworkTransform_ReadAngle_m1266769566(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		Vector3_Set_m1737058353((Vector3_t3722313464 *)(&V_0), L_31, L_34, L_37, /*hidden argument*/NULL);
		goto IL_010c;
	}

IL_010c:
	{
		Vector3_t3722313464  L_38 = V_0;
		V_1 = L_38;
		goto IL_0113;
	}

IL_0113:
	{
		Vector3_t3722313464  L_39 = V_1;
		return L_39;
	}
}
// System.Single UnityEngine.Networking.NetworkTransform::UnserializeSpin2D(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C" IL2CPP_METHOD_ATTR float NetworkTransform_UnserializeSpin2D_m1793448452 (RuntimeObject * __this /* static, unused */, NetworkReader_t1574750186 * ___reader0, int32_t ___compression1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		int32_t L_1 = ___compression1;
		float L_2 = NetworkTransform_ReadAngle_m1266769566(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000e;
	}

IL_000e:
	{
		float L_3 = V_0;
		return L_3;
	}
}
// System.Int32 UnityEngine.Networking.NetworkTransform::GetNetworkChannel()
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransform_GetNetworkChannel_m2864603622 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 1;
		goto IL_0008;
	}

IL_0008:
	{
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Single UnityEngine.Networking.NetworkTransform::GetNetworkSendInterval()
extern "C" IL2CPP_METHOD_ATTR float NetworkTransform_GetNetworkSendInterval_m2612700881 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_SendInterval_11();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.NetworkTransform::OnStartAuthority()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransform_OnStartAuthority_m994522644 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_LastClientSyncTime_33((0.0f));
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
extern "C"  bool DelegatePInvokeWrapper_ClientMoveCallback2D_t270751497 (ClientMoveCallback2D_t270751497 * __this, Vector2_t2156229523 * ___position0, Vector2_t2156229523 * ___velocity1, float* ___rotation2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(Vector2_t2156229523 *, Vector2_t2156229523 *, float*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___position0, ___velocity1, ___rotation2);

	return static_cast<bool>(returnValue);
}
// System.Void UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ClientMoveCallback2D__ctor_m2037801281 (ClientMoveCallback2D_t270751497 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D::Invoke(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single&)
extern "C" IL2CPP_METHOD_ATTR bool ClientMoveCallback2D_Invoke_m3510372298 (ClientMoveCallback2D_t270751497 * __this, Vector2_t2156229523 * ___position0, Vector2_t2156229523 * ___velocity1, float* ___rotation2, const RuntimeMethod* method)
{
	bool result = false;
	if(__this->get_prev_9() != NULL)
	{
		ClientMoveCallback2D_Invoke_m3510372298((ClientMoveCallback2D_t270751497 *)__this->get_prev_9(), ___position0, ___velocity1, ___rotation2, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
		{
			// open
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, Vector2_t2156229523 *, Vector2_t2156229523 *, float*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___position0, ___velocity1, ___rotation2, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, void*, Vector2_t2156229523 *, Vector2_t2156229523 *, float*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___position0, ___velocity1, ___rotation2, targetMethod);
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
						result = GenericInterfaceFuncInvoker3< bool, Vector2_t2156229523 *, Vector2_t2156229523 *, float* >::Invoke(targetMethod, targetThis, ___position0, ___velocity1, ___rotation2);
					else
						result = GenericVirtFuncInvoker3< bool, Vector2_t2156229523 *, Vector2_t2156229523 *, float* >::Invoke(targetMethod, targetThis, ___position0, ___velocity1, ___rotation2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< bool, Vector2_t2156229523 *, Vector2_t2156229523 *, float* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___position0, ___velocity1, ___rotation2);
					else
						result = VirtFuncInvoker3< bool, Vector2_t2156229523 *, Vector2_t2156229523 *, float* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___position0, ___velocity1, ___rotation2);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, Vector2_t2156229523 *, Vector2_t2156229523 *, float*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___position0, ___velocity1, ___rotation2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D::BeginInvoke(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single&,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ClientMoveCallback2D_BeginInvoke_m650381289 (ClientMoveCallback2D_t270751497 * __this, Vector2_t2156229523 * ___position0, Vector2_t2156229523 * ___velocity1, float* ___rotation2, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClientMoveCallback2D_BeginInvoke_m650381289_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Vector2_t2156229523_il2cpp_TypeInfo_var, &*___position0);
	__d_args[1] = Box(Vector2_t2156229523_il2cpp_TypeInfo_var, &*___velocity1);
	__d_args[2] = Box(Single_t1397266774_il2cpp_TypeInfo_var, &*___rotation2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Boolean UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D::EndInvoke(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single&,System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR bool ClientMoveCallback2D_EndInvoke_m2506226374 (ClientMoveCallback2D_t270751497 * __this, Vector2_t2156229523 * ___position0, Vector2_t2156229523 * ___velocity1, float* ___rotation2, RuntimeObject* ___result3, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___position0,
	___velocity1,
	___rotation2,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result3, ___out_args);
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
extern "C"  bool DelegatePInvokeWrapper_ClientMoveCallback3D_t1836835438 (ClientMoveCallback3D_t1836835438 * __this, Vector3_t3722313464 * ___position0, Vector3_t3722313464 * ___velocity1, Quaternion_t2301928331 * ___rotation2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(Vector3_t3722313464 *, Vector3_t3722313464 *, Quaternion_t2301928331 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___position0, ___velocity1, ___rotation2);

	return static_cast<bool>(returnValue);
}
// System.Void UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ClientMoveCallback3D__ctor_m367875228 (ClientMoveCallback3D_t1836835438 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D::Invoke(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR bool ClientMoveCallback3D_Invoke_m341842940 (ClientMoveCallback3D_t1836835438 * __this, Vector3_t3722313464 * ___position0, Vector3_t3722313464 * ___velocity1, Quaternion_t2301928331 * ___rotation2, const RuntimeMethod* method)
{
	bool result = false;
	if(__this->get_prev_9() != NULL)
	{
		ClientMoveCallback3D_Invoke_m341842940((ClientMoveCallback3D_t1836835438 *)__this->get_prev_9(), ___position0, ___velocity1, ___rotation2, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
		{
			// open
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, Vector3_t3722313464 *, Vector3_t3722313464 *, Quaternion_t2301928331 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___position0, ___velocity1, ___rotation2, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, void*, Vector3_t3722313464 *, Vector3_t3722313464 *, Quaternion_t2301928331 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___position0, ___velocity1, ___rotation2, targetMethod);
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
						result = GenericInterfaceFuncInvoker3< bool, Vector3_t3722313464 *, Vector3_t3722313464 *, Quaternion_t2301928331 * >::Invoke(targetMethod, targetThis, ___position0, ___velocity1, ___rotation2);
					else
						result = GenericVirtFuncInvoker3< bool, Vector3_t3722313464 *, Vector3_t3722313464 *, Quaternion_t2301928331 * >::Invoke(targetMethod, targetThis, ___position0, ___velocity1, ___rotation2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< bool, Vector3_t3722313464 *, Vector3_t3722313464 *, Quaternion_t2301928331 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___position0, ___velocity1, ___rotation2);
					else
						result = VirtFuncInvoker3< bool, Vector3_t3722313464 *, Vector3_t3722313464 *, Quaternion_t2301928331 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___position0, ___velocity1, ___rotation2);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, Vector3_t3722313464 *, Vector3_t3722313464 *, Quaternion_t2301928331 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___position0, ___velocity1, ___rotation2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D::BeginInvoke(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ClientMoveCallback3D_BeginInvoke_m243277252 (ClientMoveCallback3D_t1836835438 * __this, Vector3_t3722313464 * ___position0, Vector3_t3722313464 * ___velocity1, Quaternion_t2301928331 * ___rotation2, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClientMoveCallback3D_BeginInvoke_m243277252_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &*___position0);
	__d_args[1] = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &*___velocity1);
	__d_args[2] = Box(Quaternion_t2301928331_il2cpp_TypeInfo_var, &*___rotation2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Boolean UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D::EndInvoke(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR bool ClientMoveCallback3D_EndInvoke_m2168504064 (ClientMoveCallback3D_t1836835438 * __this, Vector3_t3722313464 * ___position0, Vector3_t3722313464 * ___velocity1, Quaternion_t2301928331 * ___rotation2, RuntimeObject* ___result3, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___position0,
	___velocity1,
	___rotation2,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result3, ___out_args);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.NetworkTransformChild::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformChild__ctor_m3242800869 (NetworkTransformChild_t2600331682 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransformChild__ctor_m3242800869_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_SendInterval_13((0.1f));
		__this->set_m_SyncRotationAxis_14(7);
		__this->set_m_RotationSyncCompression_15(0);
		__this->set_m_MovementThreshold_16((0.001f));
		__this->set_m_InterpolateRotation_17((0.5f));
		__this->set_m_InterpolateMovement_18((0.5f));
		IL2CPP_RUNTIME_CLASS_INIT(NetworkBehaviour_t204670959_il2cpp_TypeInfo_var);
		NetworkBehaviour__ctor_m930927820(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Networking.NetworkTransformChild::get_target()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * NetworkTransformChild_get_target_m3273026023 (NetworkTransformChild_t2600331682 * __this, const RuntimeMethod* method)
{
	Transform_t3600365921 * V_0 = NULL;
	{
		Transform_t3600365921 * L_0 = __this->get_m_Target_10();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Transform_t3600365921 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.NetworkTransformChild::set_target(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformChild_set_target_m145594720 (NetworkTransformChild_t2600331682 * __this, Transform_t3600365921 * ___value0, const RuntimeMethod* method)
{
	{
		Transform_t3600365921 * L_0 = ___value0;
		__this->set_m_Target_10(L_0);
		NetworkTransformChild_OnValidate_m1781966712(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.UInt32 UnityEngine.Networking.NetworkTransformChild::get_childIndex()
extern "C" IL2CPP_METHOD_ATTR uint32_t NetworkTransformChild_get_childIndex_m3027979396 (NetworkTransformChild_t2600331682 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_ChildIndex_11();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Single UnityEngine.Networking.NetworkTransformChild::get_sendInterval()
extern "C" IL2CPP_METHOD_ATTR float NetworkTransformChild_get_sendInterval_m3985886459 (NetworkTransformChild_t2600331682 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_SendInterval_13();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.NetworkTransformChild::set_sendInterval(System.Single)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformChild_set_sendInterval_m2824579232 (NetworkTransformChild_t2600331682 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_SendInterval_13(L_0);
		return;
	}
}
// UnityEngine.Networking.NetworkTransform/AxisSyncMode UnityEngine.Networking.NetworkTransformChild::get_syncRotationAxis()
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransformChild_get_syncRotationAxis_m2926896441 (NetworkTransformChild_t2600331682 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_SyncRotationAxis_14();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.NetworkTransformChild::set_syncRotationAxis(UnityEngine.Networking.NetworkTransform/AxisSyncMode)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformChild_set_syncRotationAxis_m3840961693 (NetworkTransformChild_t2600331682 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_SyncRotationAxis_14(L_0);
		return;
	}
}
// UnityEngine.Networking.NetworkTransform/CompressionSyncMode UnityEngine.Networking.NetworkTransformChild::get_rotationSyncCompression()
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransformChild_get_rotationSyncCompression_m556326378 (NetworkTransformChild_t2600331682 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_RotationSyncCompression_15();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.NetworkTransformChild::set_rotationSyncCompression(UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformChild_set_rotationSyncCompression_m352654611 (NetworkTransformChild_t2600331682 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_RotationSyncCompression_15(L_0);
		return;
	}
}
// System.Single UnityEngine.Networking.NetworkTransformChild::get_movementThreshold()
extern "C" IL2CPP_METHOD_ATTR float NetworkTransformChild_get_movementThreshold_m286011546 (NetworkTransformChild_t2600331682 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_MovementThreshold_16();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.NetworkTransformChild::set_movementThreshold(System.Single)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformChild_set_movementThreshold_m685789584 (NetworkTransformChild_t2600331682 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_MovementThreshold_16(L_0);
		return;
	}
}
// System.Single UnityEngine.Networking.NetworkTransformChild::get_interpolateRotation()
extern "C" IL2CPP_METHOD_ATTR float NetworkTransformChild_get_interpolateRotation_m1528666188 (NetworkTransformChild_t2600331682 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_InterpolateRotation_17();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.NetworkTransformChild::set_interpolateRotation(System.Single)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformChild_set_interpolateRotation_m836062001 (NetworkTransformChild_t2600331682 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_InterpolateRotation_17(L_0);
		return;
	}
}
// System.Single UnityEngine.Networking.NetworkTransformChild::get_interpolateMovement()
extern "C" IL2CPP_METHOD_ATTR float NetworkTransformChild_get_interpolateMovement_m1181562889 (NetworkTransformChild_t2600331682 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_InterpolateMovement_18();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.NetworkTransformChild::set_interpolateMovement(System.Single)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformChild_set_interpolateMovement_m788793289 (NetworkTransformChild_t2600331682 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_InterpolateMovement_18(L_0);
		return;
	}
}
// UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D UnityEngine.Networking.NetworkTransformChild::get_clientMoveCallback3D()
extern "C" IL2CPP_METHOD_ATTR ClientMoveCallback3D_t1836835438 * NetworkTransformChild_get_clientMoveCallback3D_m1471222415 (NetworkTransformChild_t2600331682 * __this, const RuntimeMethod* method)
{
	ClientMoveCallback3D_t1836835438 * V_0 = NULL;
	{
		ClientMoveCallback3D_t1836835438 * L_0 = __this->get_m_ClientMoveCallback3D_19();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		ClientMoveCallback3D_t1836835438 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.NetworkTransformChild::set_clientMoveCallback3D(UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformChild_set_clientMoveCallback3D_m2916159232 (NetworkTransformChild_t2600331682 * __this, ClientMoveCallback3D_t1836835438 * ___value0, const RuntimeMethod* method)
{
	{
		ClientMoveCallback3D_t1836835438 * L_0 = ___value0;
		__this->set_m_ClientMoveCallback3D_19(L_0);
		return;
	}
}
// System.Single UnityEngine.Networking.NetworkTransformChild::get_lastSyncTime()
extern "C" IL2CPP_METHOD_ATTR float NetworkTransformChild_get_lastSyncTime_m3424892045 (NetworkTransformChild_t2600331682 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_LastClientSyncTime_22();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransformChild::get_targetSyncPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  NetworkTransformChild_get_targetSyncPosition_m3460165376 (NetworkTransformChild_t2600331682 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t3722313464  L_0 = __this->get_m_TargetSyncPosition_20();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector3_t3722313464  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Quaternion UnityEngine.Networking.NetworkTransformChild::get_targetSyncRotation3D()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  NetworkTransformChild_get_targetSyncRotation3D_m122263203 (NetworkTransformChild_t2600331682 * __this, const RuntimeMethod* method)
{
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Quaternion_t2301928331  L_0 = __this->get_m_TargetSyncRotation3D_21();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Quaternion_t2301928331  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.NetworkTransformChild::OnValidate()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformChild_OnValidate_m1781966712 (NetworkTransformChild_t2600331682 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransformChild_OnValidate_m1781966712_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_t3600365921 * V_0 = NULL;
	NetworkTransformChildU5BU5D_t625172887* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		Transform_t3600365921 * L_0 = __this->get_m_Target_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00b3;
		}
	}
	{
		Transform_t3600365921 * L_2 = __this->get_m_Target_10();
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = Transform_get_parent_m835071599(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Transform_t3600365921 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t3573890335_il2cpp_TypeInfo_var);
		bool L_6 = LogFilter_get_logError_m2939562087(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral2303274273, /*hidden argument*/NULL);
	}

IL_0042:
	{
		__this->set_m_Target_10((Transform_t3600365921 *)NULL);
		goto IL_0207;
	}

IL_004e:
	{
		goto IL_005c;
	}

IL_0053:
	{
		Transform_t3600365921 * L_7 = V_0;
		NullCheck(L_7);
		Transform_t3600365921 * L_8 = Transform_get_parent_m835071599(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
	}

IL_005c:
	{
		Transform_t3600365921 * L_9 = V_0;
		NullCheck(L_9);
		Transform_t3600365921 * L_10 = Transform_get_parent_m835071599(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_10, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0053;
		}
	}
	{
		Transform_t3600365921 * L_12 = V_0;
		NullCheck(L_12);
		GameObject_t1113636619 * L_13 = Component_get_gameObject_m442555142(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		NetworkTransform_t3548153263 * L_14 = GameObject_GetComponent_TisNetworkTransform_t3548153263_m4093321400(L_13, /*hidden argument*/GameObject_GetComponent_TisNetworkTransform_t3548153263_m4093321400_RuntimeMethod_var);
		__this->set_m_Root_12(L_14);
		NetworkTransform_t3548153263 * L_15 = __this->get_m_Root_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_16 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_15, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00b2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t3573890335_il2cpp_TypeInfo_var);
		bool L_17 = LogFilter_get_logError_m2939562087(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00a6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral253864552, /*hidden argument*/NULL);
	}

IL_00a6:
	{
		__this->set_m_Target_10((Transform_t3600365921 *)NULL);
		goto IL_0207;
	}

IL_00b2:
	{
	}

IL_00b3:
	{
		NetworkTransform_t3548153263 * L_18 = __this->get_m_Root_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_19 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_18, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0138;
		}
	}
	{
		__this->set_m_ChildIndex_11((-1));
		NetworkTransform_t3548153263 * L_20 = __this->get_m_Root_12();
		NullCheck(L_20);
		NetworkTransformChildU5BU5D_t625172887* L_21 = Component_GetComponents_TisNetworkTransformChild_t2600331682_m615632565(L_20, /*hidden argument*/Component_GetComponents_TisNetworkTransformChild_t2600331682_m615632565_RuntimeMethod_var);
		V_1 = L_21;
		V_2 = 0;
		goto IL_0101;
	}

IL_00df:
	{
		NetworkTransformChildU5BU5D_t625172887* L_22 = V_1;
		uint32_t L_23 = V_2;
		NullCheck(L_22);
		uintptr_t L_24 = (((uintptr_t)L_23));
		NetworkTransformChild_t2600331682 * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_26 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_25, __this, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00fc;
		}
	}
	{
		uint32_t L_27 = V_2;
		__this->set_m_ChildIndex_11(L_27);
		goto IL_010c;
	}

IL_00fc:
	{
		uint32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_0101:
	{
		uint32_t L_29 = V_2;
		NetworkTransformChildU5BU5D_t625172887* L_30 = V_1;
		NullCheck(L_30);
		if ((((int64_t)(((int64_t)((uint64_t)L_29)))) < ((int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)(((RuntimeArray *)L_30)->max_length))))))))))
		{
			goto IL_00df;
		}
	}

IL_010c:
	{
		uint32_t L_31 = __this->get_m_ChildIndex_11();
		if ((!(((uint32_t)L_31) == ((uint32_t)(-1)))))
		{
			goto IL_0137;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t3573890335_il2cpp_TypeInfo_var);
		bool L_32 = LogFilter_get_logError_m2939562087(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_012f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral59005065, /*hidden argument*/NULL);
	}

IL_012f:
	{
		__this->set_m_Target_10((Transform_t3600365921 *)NULL);
	}

IL_0137:
	{
	}

IL_0138:
	{
		float L_33 = __this->get_m_SendInterval_13();
		if ((!(((float)L_33) < ((float)(0.0f)))))
		{
			goto IL_0155;
		}
	}
	{
		__this->set_m_SendInterval_13((0.0f));
	}

IL_0155:
	{
		int32_t L_34 = __this->get_m_SyncRotationAxis_14();
		if ((((int32_t)L_34) < ((int32_t)0)))
		{
			goto IL_016d;
		}
	}
	{
		int32_t L_35 = __this->get_m_SyncRotationAxis_14();
		if ((((int32_t)L_35) <= ((int32_t)7)))
		{
			goto IL_0176;
		}
	}

IL_016d:
	{
		__this->set_m_SyncRotationAxis_14(0);
	}

IL_0176:
	{
		float L_36 = NetworkTransformChild_get_movementThreshold_m286011546(__this, /*hidden argument*/NULL);
		if ((!(((float)L_36) < ((float)(0.0f)))))
		{
			goto IL_0193;
		}
	}
	{
		NetworkTransformChild_set_movementThreshold_m685789584(__this, (0.0f), /*hidden argument*/NULL);
	}

IL_0193:
	{
		float L_37 = NetworkTransformChild_get_interpolateRotation_m1528666188(__this, /*hidden argument*/NULL);
		if ((!(((float)L_37) < ((float)(0.0f)))))
		{
			goto IL_01b0;
		}
	}
	{
		NetworkTransformChild_set_interpolateRotation_m836062001(__this, (0.01f), /*hidden argument*/NULL);
	}

IL_01b0:
	{
		float L_38 = NetworkTransformChild_get_interpolateRotation_m1528666188(__this, /*hidden argument*/NULL);
		if ((!(((float)L_38) > ((float)(1.0f)))))
		{
			goto IL_01cd;
		}
	}
	{
		NetworkTransformChild_set_interpolateRotation_m836062001(__this, (1.0f), /*hidden argument*/NULL);
	}

IL_01cd:
	{
		float L_39 = NetworkTransformChild_get_interpolateMovement_m1181562889(__this, /*hidden argument*/NULL);
		if ((!(((float)L_39) < ((float)(0.0f)))))
		{
			goto IL_01ea;
		}
	}
	{
		NetworkTransformChild_set_interpolateMovement_m788793289(__this, (0.01f), /*hidden argument*/NULL);
	}

IL_01ea:
	{
		float L_40 = NetworkTransformChild_get_interpolateMovement_m1181562889(__this, /*hidden argument*/NULL);
		if ((!(((float)L_40) > ((float)(1.0f)))))
		{
			goto IL_0207;
		}
	}
	{
		NetworkTransformChild_set_interpolateMovement_m788793289(__this, (1.0f), /*hidden argument*/NULL);
	}

IL_0207:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransformChild::Awake()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformChild_Awake_m2646391189 (NetworkTransformChild_t2600331682 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransformChild_Awake_m2646391189_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = __this->get_m_Target_10();
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_localPosition_m4234289348(L_0, /*hidden argument*/NULL);
		__this->set_m_PrevPosition_24(L_1);
		Transform_t3600365921 * L_2 = __this->get_m_Target_10();
		NullCheck(L_2);
		Quaternion_t2301928331  L_3 = Transform_get_localRotation_m3487911431(L_2, /*hidden argument*/NULL);
		__this->set_m_PrevRotation_25(L_3);
		bool L_4 = NetworkBehaviour_get_localPlayerAuthority_m3825444790(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		NetworkWriter_t3928387057 * L_5 = (NetworkWriter_t3928387057 *)il2cpp_codegen_object_new(NetworkWriter_t3928387057_il2cpp_TypeInfo_var);
		NetworkWriter__ctor_m18760743(L_5, /*hidden argument*/NULL);
		__this->set_m_LocalTransformWriter_28(L_5);
	}

IL_003b:
	{
		return;
	}
}
// System.Boolean UnityEngine.Networking.NetworkTransformChild::OnSerialize(UnityEngine.Networking.NetworkWriter,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool NetworkTransformChild_OnSerialize_m1751139163 (NetworkTransformChild_t2600331682 * __this, NetworkWriter_t3928387057 * ___writer0, bool ___initialState1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = ___initialState1;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		goto IL_0031;
	}

IL_000e:
	{
		uint32_t L_1 = NetworkBehaviour_get_syncVarDirtyBits_m4125085072(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		NetworkWriter_t3928387057 * L_2 = ___writer0;
		NullCheck(L_2);
		NetworkWriter_WritePackedUInt32_m3131691200(L_2, 0, /*hidden argument*/NULL);
		V_0 = (bool)0;
		goto IL_003f;
	}

IL_0028:
	{
		NetworkWriter_t3928387057 * L_3 = ___writer0;
		NullCheck(L_3);
		NetworkWriter_WritePackedUInt32_m3131691200(L_3, 1, /*hidden argument*/NULL);
	}

IL_0031:
	{
		NetworkWriter_t3928387057 * L_4 = ___writer0;
		NetworkTransformChild_SerializeModeTransform_m4127082126(__this, L_4, /*hidden argument*/NULL);
		V_0 = (bool)1;
		goto IL_003f;
	}

IL_003f:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Void UnityEngine.Networking.NetworkTransformChild::SerializeModeTransform(UnityEngine.Networking.NetworkWriter)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformChild_SerializeModeTransform_m4127082126 (NetworkTransformChild_t2600331682 * __this, NetworkWriter_t3928387057 * ___writer0, const RuntimeMethod* method)
{
	{
		NetworkWriter_t3928387057 * L_0 = ___writer0;
		Transform_t3600365921 * L_1 = __this->get_m_Target_10();
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_localPosition_m4234289348(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		NetworkWriter_Write_m13082585(L_0, L_2, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_m_SyncRotationAxis_14();
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		NetworkWriter_t3928387057 * L_4 = ___writer0;
		Transform_t3600365921 * L_5 = __this->get_m_Target_10();
		NullCheck(L_5);
		Quaternion_t2301928331  L_6 = Transform_get_localRotation_m3487911431(L_5, /*hidden argument*/NULL);
		int32_t L_7 = NetworkTransformChild_get_syncRotationAxis_m2926896441(__this, /*hidden argument*/NULL);
		int32_t L_8 = NetworkTransformChild_get_rotationSyncCompression_m556326378(__this, /*hidden argument*/NULL);
		NetworkTransform_SerializeRotation3D_m2417259645(NULL /*static, unused*/, L_4, L_6, L_7, L_8, /*hidden argument*/NULL);
	}

IL_003c:
	{
		Transform_t3600365921 * L_9 = __this->get_m_Target_10();
		NullCheck(L_9);
		Vector3_t3722313464  L_10 = Transform_get_localPosition_m4234289348(L_9, /*hidden argument*/NULL);
		__this->set_m_PrevPosition_24(L_10);
		Transform_t3600365921 * L_11 = __this->get_m_Target_10();
		NullCheck(L_11);
		Quaternion_t2301928331  L_12 = Transform_get_localRotation_m3487911431(L_11, /*hidden argument*/NULL);
		__this->set_m_PrevRotation_25(L_12);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransformChild::OnDeserialize(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformChild_OnDeserialize_m3953719358 (NetworkTransformChild_t2600331682 * __this, NetworkReader_t1574750186 * ___reader0, bool ___initialState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransformChild_OnDeserialize_m3953719358_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = NetworkBehaviour_get_isServer_m3662737156(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t2920297688_il2cpp_TypeInfo_var);
		bool L_1 = NetworkServer_get_localClientActive_m1778516964(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		goto IL_0046;
	}

IL_001b:
	{
		bool L_2 = ___initialState1;
		if (L_2)
		{
			goto IL_0033;
		}
	}
	{
		NetworkReader_t1574750186 * L_3 = ___reader0;
		NullCheck(L_3);
		uint32_t L_4 = NetworkReader_ReadPackedUInt32_m1668516449(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0032;
		}
	}
	{
		goto IL_0046;
	}

IL_0032:
	{
	}

IL_0033:
	{
		NetworkReader_t1574750186 * L_5 = ___reader0;
		bool L_6 = ___initialState1;
		NetworkTransformChild_UnserializeModeTransform_m2691581115(__this, L_5, L_6, /*hidden argument*/NULL);
		float L_7 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_LastClientSyncTime_22(L_7);
	}

IL_0046:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransformChild::UnserializeModeTransform(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformChild_UnserializeModeTransform_m2691581115 (NetworkTransformChild_t2600331682 * __this, NetworkReader_t1574750186 * ___reader0, bool ___initialState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransformChild_UnserializeModeTransform_m2691581115_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Quaternion_t2301928331  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		bool L_0 = NetworkBehaviour_get_hasAuthority_m3994339092(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		NetworkReader_t1574750186 * L_1 = ___reader0;
		NullCheck(L_1);
		NetworkReader_ReadVector3_m2097563330(L_1, /*hidden argument*/NULL);
		int32_t L_2 = NetworkTransformChild_get_syncRotationAxis_m2926896441(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		NetworkReader_t1574750186 * L_3 = ___reader0;
		int32_t L_4 = NetworkTransformChild_get_syncRotationAxis_m2926896441(__this, /*hidden argument*/NULL);
		int32_t L_5 = NetworkTransformChild_get_rotationSyncCompression_m556326378(__this, /*hidden argument*/NULL);
		NetworkTransform_UnserializeRotation3D_m2713487431(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_0034:
	{
		goto IL_00fa;
	}

IL_0039:
	{
		bool L_6 = NetworkBehaviour_get_isServer_m3662737156(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_00c7;
		}
	}
	{
		ClientMoveCallback3D_t1836835438 * L_7 = __this->get_m_ClientMoveCallback3D_19();
		if (!L_7)
		{
			goto IL_00c7;
		}
	}
	{
		NetworkReader_t1574750186 * L_8 = ___reader0;
		NullCheck(L_8);
		Vector3_t3722313464  L_9 = NetworkReader_ReadVector3_m2097563330(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_10 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_10;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_11 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_11;
		int32_t L_12 = NetworkTransformChild_get_syncRotationAxis_m2926896441(__this, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0083;
		}
	}
	{
		NetworkReader_t1574750186 * L_13 = ___reader0;
		int32_t L_14 = NetworkTransformChild_get_syncRotationAxis_m2926896441(__this, /*hidden argument*/NULL);
		int32_t L_15 = NetworkTransformChild_get_rotationSyncCompression_m556326378(__this, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_16 = NetworkTransform_UnserializeRotation3D_m2713487431(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
	}

IL_0083:
	{
		ClientMoveCallback3D_t1836835438 * L_17 = __this->get_m_ClientMoveCallback3D_19();
		NullCheck(L_17);
		bool L_18 = ClientMoveCallback3D_Invoke_m341842940(L_17, (Vector3_t3722313464 *)(&V_0), (Vector3_t3722313464 *)(&V_1), (Quaternion_t2301928331 *)(&V_2), /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00bb;
		}
	}
	{
		Vector3_t3722313464  L_19 = V_0;
		__this->set_m_TargetSyncPosition_20(L_19);
		int32_t L_20 = NetworkTransformChild_get_syncRotationAxis_m2926896441(__this, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00b5;
		}
	}
	{
		Quaternion_t2301928331  L_21 = V_2;
		__this->set_m_TargetSyncRotation3D_21(L_21);
	}

IL_00b5:
	{
		goto IL_00c1;
	}

IL_00bb:
	{
		goto IL_00fa;
	}

IL_00c1:
	{
		goto IL_00fa;
	}

IL_00c7:
	{
		NetworkReader_t1574750186 * L_22 = ___reader0;
		NullCheck(L_22);
		Vector3_t3722313464  L_23 = NetworkReader_ReadVector3_m2097563330(L_22, /*hidden argument*/NULL);
		__this->set_m_TargetSyncPosition_20(L_23);
		int32_t L_24 = NetworkTransformChild_get_syncRotationAxis_m2926896441(__this, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00f9;
		}
	}
	{
		NetworkReader_t1574750186 * L_25 = ___reader0;
		int32_t L_26 = NetworkTransformChild_get_syncRotationAxis_m2926896441(__this, /*hidden argument*/NULL);
		int32_t L_27 = NetworkTransformChild_get_rotationSyncCompression_m556326378(__this, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_28 = NetworkTransform_UnserializeRotation3D_m2713487431(NULL /*static, unused*/, L_25, L_26, L_27, /*hidden argument*/NULL);
		__this->set_m_TargetSyncRotation3D_21(L_28);
	}

IL_00f9:
	{
	}

IL_00fa:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransformChild::FixedUpdate()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformChild_FixedUpdate_m1611224862 (NetworkTransformChild_t2600331682 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = NetworkBehaviour_get_isServer_m3662737156(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		NetworkTransformChild_FixedUpdateServer_m857381952(__this, /*hidden argument*/NULL);
	}

IL_0014:
	{
		bool L_1 = NetworkBehaviour_get_isClient_m792420926(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		NetworkTransformChild_FixedUpdateClient_m1112757836(__this, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransformChild::FixedUpdateServer()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformChild_FixedUpdateServer_m857381952 (NetworkTransformChild_t2600331682 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransformChild_FixedUpdateServer_m857381952_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		uint32_t L_0 = NetworkBehaviour_get_syncVarDirtyBits_m4125085072(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		goto IL_00a2;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t2920297688_il2cpp_TypeInfo_var);
		bool L_1 = NetworkServer_get_active_m2527733392(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		goto IL_00a2;
	}

IL_0020:
	{
		bool L_2 = NetworkBehaviour_get_isServer_m3662737156(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0030;
		}
	}
	{
		goto IL_00a2;
	}

IL_0030:
	{
		float L_3 = VirtFuncInvoker0< float >::Invoke(21 /* System.Single UnityEngine.Networking.NetworkBehaviour::GetNetworkSendInterval() */, __this);
		if ((!(((float)L_3) == ((float)(0.0f)))))
		{
			goto IL_0045;
		}
	}
	{
		goto IL_00a2;
	}

IL_0045:
	{
		Transform_t3600365921 * L_4 = __this->get_m_Target_10();
		NullCheck(L_4);
		Vector3_t3722313464  L_5 = Transform_get_localPosition_m4234289348(L_4, /*hidden argument*/NULL);
		Vector3_t3722313464  L_6 = __this->get_m_PrevPosition_24();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_7 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		float L_8 = Vector3_get_sqrMagnitude_m1474274574((Vector3_t3722313464 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_8;
		float L_9 = V_0;
		float L_10 = NetworkTransformChild_get_movementThreshold_m286011546(__this, /*hidden argument*/NULL);
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_009b;
		}
	}
	{
		Quaternion_t2301928331  L_11 = __this->get_m_PrevRotation_25();
		Transform_t3600365921 * L_12 = __this->get_m_Target_10();
		NullCheck(L_12);
		Quaternion_t2301928331  L_13 = Transform_get_localRotation_m3487911431(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		float L_14 = Quaternion_Angle_m1586774072(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		float L_15 = V_0;
		float L_16 = NetworkTransformChild_get_movementThreshold_m286011546(__this, /*hidden argument*/NULL);
		if ((!(((float)L_15) < ((float)L_16))))
		{
			goto IL_009a;
		}
	}
	{
		goto IL_00a2;
	}

IL_009a:
	{
	}

IL_009b:
	{
		NetworkBehaviour_SetDirtyBit_m3911198689(__this, 1, /*hidden argument*/NULL);
	}

IL_00a2:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransformChild::FixedUpdateClient()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformChild_FixedUpdateClient_m1112757836 (NetworkTransformChild_t2600331682 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransformChild_FixedUpdateClient_m1112757836_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_m_LastClientSyncTime_22();
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0016;
		}
	}
	{
		goto IL_0123;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t2920297688_il2cpp_TypeInfo_var);
		bool L_1 = NetworkServer_get_active_m2527733392(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkClient_t3758195968_il2cpp_TypeInfo_var);
		bool L_2 = NetworkClient_get_active_m761030454(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		goto IL_0123;
	}

IL_002f:
	{
		bool L_3 = NetworkBehaviour_get_isServer_m3662737156(__this, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_004a;
		}
	}
	{
		bool L_4 = NetworkBehaviour_get_isClient_m792420926(__this, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_004a;
		}
	}
	{
		goto IL_0123;
	}

IL_004a:
	{
		float L_5 = VirtFuncInvoker0< float >::Invoke(21 /* System.Single UnityEngine.Networking.NetworkBehaviour::GetNetworkSendInterval() */, __this);
		if ((!(((float)L_5) == ((float)(0.0f)))))
		{
			goto IL_005f;
		}
	}
	{
		goto IL_0123;
	}

IL_005f:
	{
		bool L_6 = NetworkBehaviour_get_hasAuthority_m3994339092(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0123;
	}

IL_006f:
	{
		float L_7 = __this->get_m_LastClientSyncTime_22();
		if ((((float)L_7) == ((float)(0.0f))))
		{
			goto IL_0123;
		}
	}
	{
		float L_8 = __this->get_m_InterpolateMovement_18();
		if ((!(((float)L_8) > ((float)(0.0f)))))
		{
			goto IL_00be;
		}
	}
	{
		Transform_t3600365921 * L_9 = __this->get_m_Target_10();
		Transform_t3600365921 * L_10 = __this->get_m_Target_10();
		NullCheck(L_10);
		Vector3_t3722313464  L_11 = Transform_get_localPosition_m4234289348(L_10, /*hidden argument*/NULL);
		Vector3_t3722313464  L_12 = __this->get_m_TargetSyncPosition_20();
		float L_13 = __this->get_m_InterpolateMovement_18();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_14 = Vector3_Lerp_m407887542(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localPosition_m4128471975(L_9, L_14, /*hidden argument*/NULL);
		goto IL_00d1;
	}

IL_00be:
	{
		Transform_t3600365921 * L_15 = __this->get_m_Target_10();
		Vector3_t3722313464  L_16 = __this->get_m_TargetSyncPosition_20();
		NullCheck(L_15);
		Transform_set_localPosition_m4128471975(L_15, L_16, /*hidden argument*/NULL);
	}

IL_00d1:
	{
		float L_17 = __this->get_m_InterpolateRotation_17();
		if ((!(((float)L_17) > ((float)(0.0f)))))
		{
			goto IL_010f;
		}
	}
	{
		Transform_t3600365921 * L_18 = __this->get_m_Target_10();
		Transform_t3600365921 * L_19 = __this->get_m_Target_10();
		NullCheck(L_19);
		Quaternion_t2301928331  L_20 = Transform_get_localRotation_m3487911431(L_19, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_21 = __this->get_m_TargetSyncRotation3D_21();
		float L_22 = __this->get_m_InterpolateRotation_17();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_23 = Quaternion_Slerp_m1234055455(NULL /*static, unused*/, L_20, L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_localRotation_m19445462(L_18, L_23, /*hidden argument*/NULL);
		goto IL_0122;
	}

IL_010f:
	{
		Transform_t3600365921 * L_24 = __this->get_m_Target_10();
		Quaternion_t2301928331  L_25 = __this->get_m_TargetSyncRotation3D_21();
		NullCheck(L_24);
		Transform_set_localRotation_m19445462(L_24, L_25, /*hidden argument*/NULL);
	}

IL_0122:
	{
	}

IL_0123:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransformChild::Update()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformChild_Update_m3369411374 (NetworkTransformChild_t2600331682 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransformChild_Update_m3369411374_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = NetworkBehaviour_get_hasAuthority_m3994339092(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		goto IL_005a;
	}

IL_0011:
	{
		bool L_1 = NetworkBehaviour_get_localPlayerAuthority_m3825444790(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_005a;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t2920297688_il2cpp_TypeInfo_var);
		bool L_2 = NetworkServer_get_active_m2527733392(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		goto IL_005a;
	}

IL_0030:
	{
		float L_3 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = __this->get_m_LastClientSendTime_23();
		float L_5 = VirtFuncInvoker0< float >::Invoke(21 /* System.Single UnityEngine.Networking.NetworkBehaviour::GetNetworkSendInterval() */, __this);
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_4))) > ((float)L_5))))
		{
			goto IL_005a;
		}
	}
	{
		NetworkTransformChild_SendTransform_m3675938991(__this, /*hidden argument*/NULL);
		float L_6 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_LastClientSendTime_23(L_6);
	}

IL_005a:
	{
		return;
	}
}
// System.Boolean UnityEngine.Networking.NetworkTransformChild::HasMoved()
extern "C" IL2CPP_METHOD_ATTR bool NetworkTransformChild_HasMoved_m673081863 (NetworkTransformChild_t2600331682 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransformChild_HasMoved_m673081863_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	{
		V_0 = (0.0f);
		Transform_t3600365921 * L_0 = __this->get_m_Target_10();
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_localPosition_m4234289348(L_0, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = __this->get_m_PrevPosition_24();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_3 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = Vector3_get_sqrMagnitude_m1474274574((Vector3_t3722313464 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = V_0;
		if ((!(((float)L_5) > ((float)(1.0E-05f)))))
		{
			goto IL_0039;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_006a;
	}

IL_0039:
	{
		Transform_t3600365921 * L_6 = __this->get_m_Target_10();
		NullCheck(L_6);
		Quaternion_t2301928331  L_7 = Transform_get_localRotation_m3487911431(L_6, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_8 = __this->get_m_PrevRotation_25();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		float L_9 = Quaternion_Angle_m1586774072(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		float L_10 = V_0;
		if ((!(((float)L_10) > ((float)(1.0E-05f)))))
		{
			goto IL_0063;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_006a;
	}

IL_0063:
	{
		V_2 = (bool)0;
		goto IL_006a;
	}

IL_006a:
	{
		bool L_11 = V_2;
		return L_11;
	}
}
// System.Void UnityEngine.Networking.NetworkTransformChild::SendTransform()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformChild_SendTransform_m3675938991 (NetworkTransformChild_t2600331682 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransformChild_SendTransform_m3675938991_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = NetworkTransformChild_HasMoved_m673081863(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ClientScene_t3640716971_il2cpp_TypeInfo_var);
		NetworkConnection_t2705220091 * L_1 = ClientScene_get_readyConnection_m1213877119(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}

IL_0016:
	{
		goto IL_009b;
	}

IL_001c:
	{
		NetworkWriter_t3928387057 * L_2 = __this->get_m_LocalTransformWriter_28();
		NullCheck(L_2);
		NetworkWriter_StartMessage_m841875667(L_2, (int16_t)((int32_t)16), /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_3 = __this->get_m_LocalTransformWriter_28();
		NetworkInstanceId_t786350175  L_4 = NetworkBehaviour_get_netId_m3535684635(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		NetworkWriter_Write_m2257467436(L_3, L_4, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_5 = __this->get_m_LocalTransformWriter_28();
		uint32_t L_6 = __this->get_m_ChildIndex_11();
		NullCheck(L_5);
		NetworkWriter_WritePackedUInt32_m3131691200(L_5, L_6, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_7 = __this->get_m_LocalTransformWriter_28();
		NetworkTransformChild_SerializeModeTransform_m4127082126(__this, L_7, /*hidden argument*/NULL);
		Transform_t3600365921 * L_8 = __this->get_m_Target_10();
		NullCheck(L_8);
		Vector3_t3722313464  L_9 = Transform_get_localPosition_m4234289348(L_8, /*hidden argument*/NULL);
		__this->set_m_PrevPosition_24(L_9);
		Transform_t3600365921 * L_10 = __this->get_m_Target_10();
		NullCheck(L_10);
		Quaternion_t2301928331  L_11 = Transform_get_localRotation_m3487911431(L_10, /*hidden argument*/NULL);
		__this->set_m_PrevRotation_25(L_11);
		NetworkWriter_t3928387057 * L_12 = __this->get_m_LocalTransformWriter_28();
		NullCheck(L_12);
		NetworkWriter_FinishMessage_m3971444334(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ClientScene_t3640716971_il2cpp_TypeInfo_var);
		NetworkConnection_t2705220091 * L_13 = ClientScene_get_readyConnection_m1213877119(NULL /*static, unused*/, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_14 = __this->get_m_LocalTransformWriter_28();
		int32_t L_15 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 UnityEngine.Networking.NetworkBehaviour::GetNetworkChannel() */, __this);
		NullCheck(L_13);
		VirtFuncInvoker2< bool, NetworkWriter_t3928387057 *, int32_t >::Invoke(11 /* System.Boolean UnityEngine.Networking.NetworkConnection::SendWriter(UnityEngine.Networking.NetworkWriter,System.Int32) */, L_13, L_14, L_15);
	}

IL_009b:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransformChild::HandleChildTransform(UnityEngine.Networking.NetworkMessage)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformChild_HandleChildTransform_m1783918615 (RuntimeObject * __this /* static, unused */, NetworkMessage_t1192515889 * ___netMsg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransformChild_HandleChildTransform_m1783918615_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkInstanceId_t786350175  V_0;
	memset(&V_0, 0, sizeof(V_0));
	uint32_t V_1 = 0;
	GameObject_t1113636619 * V_2 = NULL;
	NetworkTransformChildU5BU5D_t625172887* V_3 = NULL;
	NetworkTransformChild_t2600331682 * V_4 = NULL;
	{
		NetworkMessage_t1192515889 * L_0 = ___netMsg0;
		NullCheck(L_0);
		NetworkReader_t1574750186 * L_1 = L_0->get_reader_3();
		NullCheck(L_1);
		NetworkInstanceId_t786350175  L_2 = NetworkReader_ReadNetworkId_m1117804330(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		NetworkMessage_t1192515889 * L_3 = ___netMsg0;
		NullCheck(L_3);
		NetworkReader_t1574750186 * L_4 = L_3->get_reader_3();
		NullCheck(L_4);
		uint32_t L_5 = NetworkReader_ReadPackedUInt32_m1668516449(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		NetworkInstanceId_t786350175  L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t2920297688_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_7 = NetworkServer_FindLocalObject_m2800748537(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		GameObject_t1113636619 * L_8 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_8, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t3573890335_il2cpp_TypeInfo_var);
		bool L_10 = LogFilter_get_logError_m2939562087(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0043;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral2199325090, /*hidden argument*/NULL);
	}

IL_0043:
	{
		goto IL_0187;
	}

IL_0048:
	{
		GameObject_t1113636619 * L_11 = V_2;
		NullCheck(L_11);
		NetworkTransformChildU5BU5D_t625172887* L_12 = GameObject_GetComponents_TisNetworkTransformChild_t2600331682_m2654119007(L_11, /*hidden argument*/GameObject_GetComponents_TisNetworkTransformChild_t2600331682_m2654119007_RuntimeMethod_var);
		V_3 = L_12;
		NetworkTransformChildU5BU5D_t625172887* L_13 = V_3;
		if (!L_13)
		{
			goto IL_005d;
		}
	}
	{
		NetworkTransformChildU5BU5D_t625172887* L_14 = V_3;
		NullCheck(L_14);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))
		{
			goto IL_0079;
		}
	}

IL_005d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t3573890335_il2cpp_TypeInfo_var);
		bool L_15 = LogFilter_get_logError_m2939562087(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0074;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral1337943847, /*hidden argument*/NULL);
	}

IL_0074:
	{
		goto IL_0187;
	}

IL_0079:
	{
		uint32_t L_16 = V_1;
		NetworkTransformChildU5BU5D_t625172887* L_17 = V_3;
		NullCheck(L_17);
		if ((((int64_t)(((int64_t)((uint64_t)L_16)))) < ((int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length))))))))))
		{
			goto IL_00a0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t3573890335_il2cpp_TypeInfo_var);
		bool L_18 = LogFilter_get_logError_m2939562087(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_009b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral542057799, /*hidden argument*/NULL);
	}

IL_009b:
	{
		goto IL_0187;
	}

IL_00a0:
	{
		NetworkTransformChildU5BU5D_t625172887* L_19 = V_3;
		uint32_t L_20 = V_1;
		NullCheck(L_19);
		uintptr_t L_21 = (((uintptr_t)L_20));
		NetworkTransformChild_t2600331682 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_4 = L_22;
		NetworkTransformChild_t2600331682 * L_23 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_24 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_23, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00cf;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t3573890335_il2cpp_TypeInfo_var);
		bool L_25 = LogFilter_get_logError_m2939562087(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00ca;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral2461225795, /*hidden argument*/NULL);
	}

IL_00ca:
	{
		goto IL_0187;
	}

IL_00cf:
	{
		NetworkTransformChild_t2600331682 * L_26 = V_4;
		NullCheck(L_26);
		bool L_27 = NetworkBehaviour_get_localPlayerAuthority_m3825444790(L_26, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_00f7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t3573890335_il2cpp_TypeInfo_var);
		bool L_28 = LogFilter_get_logError_m2939562087(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00f2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral3162848157, /*hidden argument*/NULL);
	}

IL_00f2:
	{
		goto IL_0187;
	}

IL_00f7:
	{
		NetworkMessage_t1192515889 * L_29 = ___netMsg0;
		NullCheck(L_29);
		NetworkConnection_t2705220091 * L_30 = L_29->get_conn_2();
		NullCheck(L_30);
		HashSet_1_t3646266945 * L_31 = NetworkConnection_get_clientOwnedObjects_m146181522(L_30, /*hidden argument*/NULL);
		NetworkInstanceId_t786350175  L_32 = V_0;
		NullCheck(L_31);
		bool L_33 = HashSet_1_Contains_m1296176293(L_31, L_32, /*hidden argument*/HashSet_1_Contains_m1296176293_RuntimeMethod_var);
		if (L_33)
		{
			goto IL_0139;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t3573890335_il2cpp_TypeInfo_var);
		bool L_34 = LogFilter_get_logWarn_m1931385554(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0134;
		}
	}
	{
		NetworkInstanceId_t786350175  L_35 = V_0;
		NetworkInstanceId_t786350175  L_36 = L_35;
		RuntimeObject * L_37 = Box(NetworkInstanceId_t786350175_il2cpp_TypeInfo_var, &L_36);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_38 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral2900427655, L_37, _stringLiteral1207897643, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
	}

IL_0134:
	{
		goto IL_0187;
	}

IL_0139:
	{
		NetworkTransformChild_t2600331682 * L_39 = V_4;
		NetworkMessage_t1192515889 * L_40 = ___netMsg0;
		NullCheck(L_40);
		NetworkReader_t1574750186 * L_41 = L_40->get_reader_3();
		NullCheck(L_39);
		NetworkTransformChild_UnserializeModeTransform_m2691581115(L_39, L_41, (bool)0, /*hidden argument*/NULL);
		NetworkTransformChild_t2600331682 * L_42 = V_4;
		float L_43 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_42);
		L_42->set_m_LastClientSyncTime_22(L_43);
		NetworkTransformChild_t2600331682 * L_44 = V_4;
		NullCheck(L_44);
		bool L_45 = NetworkBehaviour_get_isClient_m792420926(L_44, /*hidden argument*/NULL);
		if (L_45)
		{
			goto IL_0187;
		}
	}
	{
		NetworkTransformChild_t2600331682 * L_46 = V_4;
		NullCheck(L_46);
		Transform_t3600365921 * L_47 = L_46->get_m_Target_10();
		NetworkTransformChild_t2600331682 * L_48 = V_4;
		NullCheck(L_48);
		Vector3_t3722313464  L_49 = L_48->get_m_TargetSyncPosition_20();
		NullCheck(L_47);
		Transform_set_localPosition_m4128471975(L_47, L_49, /*hidden argument*/NULL);
		NetworkTransformChild_t2600331682 * L_50 = V_4;
		NullCheck(L_50);
		Transform_t3600365921 * L_51 = L_50->get_m_Target_10();
		NetworkTransformChild_t2600331682 * L_52 = V_4;
		NullCheck(L_52);
		Quaternion_t2301928331  L_53 = L_52->get_m_TargetSyncRotation3D_21();
		NullCheck(L_51);
		Transform_set_localRotation_m19445462(L_51, L_53, /*hidden argument*/NULL);
	}

IL_0187:
	{
		return;
	}
}
// System.Int32 UnityEngine.Networking.NetworkTransformChild::GetNetworkChannel()
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransformChild_GetNetworkChannel_m4234887186 (NetworkTransformChild_t2600331682 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 1;
		goto IL_0008;
	}

IL_0008:
	{
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Single UnityEngine.Networking.NetworkTransformChild::GetNetworkSendInterval()
extern "C" IL2CPP_METHOD_ATTR float NetworkTransformChild_GetNetworkSendInterval_m3231355640 (NetworkTransformChild_t2600331682 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_SendInterval_13();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
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
// System.Void UnityEngine.Networking.NetworkTransformVisualizer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformVisualizer__ctor_m942684589 (NetworkTransformVisualizer_t2328387012 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransformVisualizer__ctor_m942684589_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkBehaviour_t204670959_il2cpp_TypeInfo_var);
		NetworkBehaviour__ctor_m930927820(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GameObject UnityEngine.Networking.NetworkTransformVisualizer::get_visualizerPrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * NetworkTransformVisualizer_get_visualizerPrefab_m3168581260 (NetworkTransformVisualizer_t2328387012 * __this, const RuntimeMethod* method)
{
	GameObject_t1113636619 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = __this->get_m_VisualizerPrefab_10();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		GameObject_t1113636619 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.NetworkTransformVisualizer::set_visualizerPrefab(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformVisualizer_set_visualizerPrefab_m2314136229 (NetworkTransformVisualizer_t2328387012 * __this, GameObject_t1113636619 * ___value0, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = ___value0;
		__this->set_m_VisualizerPrefab_10(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransformVisualizer::OnStartClient()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformVisualizer_OnStartClient_m2754427721 (NetworkTransformVisualizer_t2328387012 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransformVisualizer_OnStartClient_m2754427721_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_m_VisualizerPrefab_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0046;
		}
	}
	{
		NetworkTransform_t3548153263 * L_2 = Component_GetComponent_TisNetworkTransform_t3548153263_m4257392998(__this, /*hidden argument*/Component_GetComponent_TisNetworkTransform_t3548153263_m4257392998_RuntimeMethod_var);
		__this->set_m_NetworkTransform_11(L_2);
		NetworkTransformVisualizer_CreateLineMaterial_m3214025820(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_3 = __this->get_m_VisualizerPrefab_10();
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_6 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_7 = Object_Instantiate_TisGameObject_t1113636619_m1553712732(NULL /*static, unused*/, L_3, L_5, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m1553712732_RuntimeMethod_var);
		__this->set_m_Visualizer_12(L_7);
	}

IL_0046:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransformVisualizer::OnStartLocalPlayer()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformVisualizer_OnStartLocalPlayer_m3884173815 (NetworkTransformVisualizer_t2328387012 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransformVisualizer_OnStartLocalPlayer_m3884173815_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_m_Visualizer_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_003f;
	}

IL_0017:
	{
		NetworkTransform_t3548153263 * L_2 = __this->get_m_NetworkTransform_11();
		NullCheck(L_2);
		bool L_3 = NetworkBehaviour_get_localPlayerAuthority_m3825444790(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		bool L_4 = NetworkBehaviour_get_isServer_m3662737156(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003f;
		}
	}

IL_0032:
	{
		GameObject_t1113636619 * L_5 = __this->get_m_Visualizer_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_003f:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransformVisualizer::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformVisualizer_OnDestroy_m2854303748 (NetworkTransformVisualizer_t2328387012 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransformVisualizer_OnDestroy_m2854303748_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_m_Visualizer_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		GameObject_t1113636619 * L_2 = __this->get_m_Visualizer_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransformVisualizer::FixedUpdate()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformVisualizer_FixedUpdate_m3503359228 (NetworkTransformVisualizer_t2328387012 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransformVisualizer_FixedUpdate_m3503359228_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		GameObject_t1113636619 * L_0 = __this->get_m_Visualizer_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_018b;
	}

IL_0017:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t2920297688_il2cpp_TypeInfo_var);
		bool L_2 = NetworkServer_get_active_m2527733392(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0030;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkClient_t3758195968_il2cpp_TypeInfo_var);
		bool L_3 = NetworkClient_get_active_m761030454(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		goto IL_018b;
	}

IL_0030:
	{
		bool L_4 = NetworkBehaviour_get_isServer_m3662737156(__this, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_004b;
		}
	}
	{
		bool L_5 = NetworkBehaviour_get_isClient_m792420926(__this, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_004b;
		}
	}
	{
		goto IL_018b;
	}

IL_004b:
	{
		bool L_6 = NetworkBehaviour_get_hasAuthority_m3994339092(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_006b;
		}
	}
	{
		NetworkTransform_t3548153263 * L_7 = __this->get_m_NetworkTransform_11();
		NullCheck(L_7);
		bool L_8 = NetworkBehaviour_get_localPlayerAuthority_m3825444790(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_006b;
		}
	}
	{
		goto IL_018b;
	}

IL_006b:
	{
		GameObject_t1113636619 * L_9 = __this->get_m_Visualizer_12();
		NullCheck(L_9);
		Transform_t3600365921 * L_10 = GameObject_get_transform_m1369836730(L_9, /*hidden argument*/NULL);
		NetworkTransform_t3548153263 * L_11 = __this->get_m_NetworkTransform_11();
		NullCheck(L_11);
		Vector3_t3722313464  L_12 = NetworkTransform_get_targetSyncPosition_m3939799000(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_position_m3387557959(L_10, L_12, /*hidden argument*/NULL);
		NetworkTransform_t3548153263 * L_13 = __this->get_m_NetworkTransform_11();
		NullCheck(L_13);
		Rigidbody_t3916780224 * L_14 = NetworkTransform_get_rigidbody3D_m1680182927(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_15 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_14, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00cf;
		}
	}
	{
		GameObject_t1113636619 * L_16 = __this->get_m_Visualizer_12();
		NullCheck(L_16);
		Rigidbody_t3916780224 * L_17 = GameObject_GetComponent_TisRigidbody_t3916780224_m3944438356(L_16, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t3916780224_m3944438356_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_17, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00cf;
		}
	}
	{
		GameObject_t1113636619 * L_19 = __this->get_m_Visualizer_12();
		NullCheck(L_19);
		Rigidbody_t3916780224 * L_20 = GameObject_GetComponent_TisRigidbody_t3916780224_m3944438356(L_19, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t3916780224_m3944438356_RuntimeMethod_var);
		NetworkTransform_t3548153263 * L_21 = __this->get_m_NetworkTransform_11();
		NullCheck(L_21);
		Vector3_t3722313464  L_22 = NetworkTransform_get_targetSyncVelocity_m3799605955(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		Rigidbody_set_velocity_m2899403247(L_20, L_22, /*hidden argument*/NULL);
	}

IL_00cf:
	{
		NetworkTransform_t3548153263 * L_23 = __this->get_m_NetworkTransform_11();
		NullCheck(L_23);
		Rigidbody2D_t939494601 * L_24 = NetworkTransform_get_rigidbody2D_m3914535243(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_25 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_24, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_011d;
		}
	}
	{
		GameObject_t1113636619 * L_26 = __this->get_m_Visualizer_12();
		NullCheck(L_26);
		Rigidbody2D_t939494601 * L_27 = GameObject_GetComponent_TisRigidbody2D_t939494601_m577109995(L_26, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_t939494601_m577109995_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_28 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_27, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_011d;
		}
	}
	{
		GameObject_t1113636619 * L_29 = __this->get_m_Visualizer_12();
		NullCheck(L_29);
		Rigidbody2D_t939494601 * L_30 = GameObject_GetComponent_TisRigidbody2D_t939494601_m577109995(L_29, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_t939494601_m577109995_RuntimeMethod_var);
		NetworkTransform_t3548153263 * L_31 = __this->get_m_NetworkTransform_11();
		NullCheck(L_31);
		Vector3_t3722313464  L_32 = NetworkTransform_get_targetSyncVelocity_m3799605955(L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_33 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		NullCheck(L_30);
		Rigidbody2D_set_velocity_m2898400508(L_30, L_33, /*hidden argument*/NULL);
	}

IL_011d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_34 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_34;
		NetworkTransform_t3548153263 * L_35 = __this->get_m_NetworkTransform_11();
		NullCheck(L_35);
		Rigidbody_t3916780224 * L_36 = NetworkTransform_get_rigidbody3D_m1680182927(L_35, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_37 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_36, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0147;
		}
	}
	{
		NetworkTransform_t3548153263 * L_38 = __this->get_m_NetworkTransform_11();
		NullCheck(L_38);
		Quaternion_t2301928331  L_39 = NetworkTransform_get_targetSyncRotation3D_m3959327059(L_38, /*hidden argument*/NULL);
		V_0 = L_39;
	}

IL_0147:
	{
		NetworkTransform_t3548153263 * L_40 = __this->get_m_NetworkTransform_11();
		NullCheck(L_40);
		Rigidbody2D_t939494601 * L_41 = NetworkTransform_get_rigidbody2D_m3914535243(L_40, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_42 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_41, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_017a;
		}
	}
	{
		NetworkTransform_t3548153263 * L_43 = __this->get_m_NetworkTransform_11();
		NullCheck(L_43);
		float L_44 = NetworkTransform_get_targetSyncRotation2D_m383745925(L_43, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_45 = Quaternion_Euler_m3049309462(NULL /*static, unused*/, (0.0f), (0.0f), L_44, /*hidden argument*/NULL);
		V_0 = L_45;
	}

IL_017a:
	{
		GameObject_t1113636619 * L_46 = __this->get_m_Visualizer_12();
		NullCheck(L_46);
		Transform_t3600365921 * L_47 = GameObject_get_transform_m1369836730(L_46, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_48 = V_0;
		NullCheck(L_47);
		Transform_set_rotation_m3524318132(L_47, L_48, /*hidden argument*/NULL);
	}

IL_018b:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransformVisualizer::OnRenderObject()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformVisualizer_OnRenderObject_m843166100 (NetworkTransformVisualizer_t2328387012 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransformVisualizer_OnRenderObject_m843166100_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		GameObject_t1113636619 * L_0 = __this->get_m_Visualizer_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_00f6;
	}

IL_0017:
	{
		NetworkTransform_t3548153263 * L_2 = __this->get_m_NetworkTransform_11();
		NullCheck(L_2);
		bool L_3 = NetworkBehaviour_get_localPlayerAuthority_m3825444790(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		bool L_4 = NetworkBehaviour_get_hasAuthority_m3994339092(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		goto IL_00f6;
	}

IL_0037:
	{
		NetworkTransform_t3548153263 * L_5 = __this->get_m_NetworkTransform_11();
		NullCheck(L_5);
		float L_6 = NetworkTransform_get_lastSyncTime_m3727643043(L_5, /*hidden argument*/NULL);
		if ((!(((float)L_6) == ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		goto IL_00f6;
	}

IL_0051:
	{
		Material_t340375123 * L_7 = ((NetworkTransformVisualizer_t2328387012_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTransformVisualizer_t2328387012_il2cpp_TypeInfo_var))->get_s_LineMaterial_13();
		NullCheck(L_7);
		Material_SetPass_m686253719(L_7, 0, /*hidden argument*/NULL);
		GL_Begin_m1290681325(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		Color_t2555686324  L_8 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		GL_Color_m2127587175(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		Transform_t3600365921 * L_9 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t3722313464  L_10 = Transform_get_position_m36019626(L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		float L_11 = (&V_0)->get_x_2();
		Transform_t3600365921 * L_12 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t3722313464  L_13 = Transform_get_position_m36019626(L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		float L_14 = (&V_1)->get_y_3();
		Transform_t3600365921 * L_15 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t3722313464  L_16 = Transform_get_position_m36019626(L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		float L_17 = (&V_2)->get_z_4();
		GL_Vertex3_m766753641(NULL /*static, unused*/, L_11, L_14, L_17, /*hidden argument*/NULL);
		NetworkTransform_t3548153263 * L_18 = __this->get_m_NetworkTransform_11();
		NullCheck(L_18);
		Vector3_t3722313464  L_19 = NetworkTransform_get_targetSyncPosition_m3939799000(L_18, /*hidden argument*/NULL);
		V_3 = L_19;
		float L_20 = (&V_3)->get_x_2();
		NetworkTransform_t3548153263 * L_21 = __this->get_m_NetworkTransform_11();
		NullCheck(L_21);
		Vector3_t3722313464  L_22 = NetworkTransform_get_targetSyncPosition_m3939799000(L_21, /*hidden argument*/NULL);
		V_4 = L_22;
		float L_23 = (&V_4)->get_y_3();
		NetworkTransform_t3548153263 * L_24 = __this->get_m_NetworkTransform_11();
		NullCheck(L_24);
		Vector3_t3722313464  L_25 = NetworkTransform_get_targetSyncPosition_m3939799000(L_24, /*hidden argument*/NULL);
		V_5 = L_25;
		float L_26 = (&V_5)->get_z_4();
		GL_Vertex3_m766753641(NULL /*static, unused*/, L_20, L_23, L_26, /*hidden argument*/NULL);
		GL_End_m539612367(NULL /*static, unused*/, /*hidden argument*/NULL);
		NetworkTransformVisualizer_DrawRotationInterpolation_m1716797941(__this, /*hidden argument*/NULL);
	}

IL_00f6:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransformVisualizer::DrawRotationInterpolation()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformVisualizer_DrawRotationInterpolation_m1716797941 (NetworkTransformVisualizer_t2328387012 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransformVisualizer_DrawRotationInterpolation_m1716797941_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector3_t3722313464  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Vector3_t3722313464  V_9;
	memset(&V_9, 0, sizeof(V_9));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_0 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		NetworkTransform_t3548153263 * L_1 = __this->get_m_NetworkTransform_11();
		NullCheck(L_1);
		Rigidbody_t3916780224 * L_2 = NetworkTransform_get_rigidbody3D_m1680182927(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		NetworkTransform_t3548153263 * L_4 = __this->get_m_NetworkTransform_11();
		NullCheck(L_4);
		Quaternion_t2301928331  L_5 = NetworkTransform_get_targetSyncRotation3D_m3959327059(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_002b:
	{
		NetworkTransform_t3548153263 * L_6 = __this->get_m_NetworkTransform_11();
		NullCheck(L_6);
		Rigidbody2D_t939494601 * L_7 = NetworkTransform_get_rigidbody2D_m3914535243(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_7, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_005e;
		}
	}
	{
		NetworkTransform_t3548153263 * L_9 = __this->get_m_NetworkTransform_11();
		NullCheck(L_9);
		float L_10 = NetworkTransform_get_targetSyncRotation2D_m383745925(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_11 = Quaternion_Euler_m3049309462(NULL /*static, unused*/, (0.0f), (0.0f), L_10, /*hidden argument*/NULL);
		V_0 = L_11;
	}

IL_005e:
	{
		Quaternion_t2301928331  L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_13 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_14 = Quaternion_op_Equality_m1582314779(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0073;
		}
	}
	{
		goto IL_018e;
	}

IL_0073:
	{
		GL_Begin_m1290681325(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		Color_t2555686324  L_15 = Color_get_yellow_m1287957903(NULL /*static, unused*/, /*hidden argument*/NULL);
		GL_Color_m2127587175(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		Transform_t3600365921 * L_16 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t3722313464  L_17 = Transform_get_position_m36019626(L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		float L_18 = (&V_1)->get_x_2();
		Transform_t3600365921 * L_19 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t3722313464  L_20 = Transform_get_position_m36019626(L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		float L_21 = (&V_2)->get_y_3();
		Transform_t3600365921 * L_22 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t3722313464  L_23 = Transform_get_position_m36019626(L_22, /*hidden argument*/NULL);
		V_3 = L_23;
		float L_24 = (&V_3)->get_z_4();
		GL_Vertex3_m766753641(NULL /*static, unused*/, L_18, L_21, L_24, /*hidden argument*/NULL);
		Transform_t3600365921 * L_25 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t3722313464  L_26 = Transform_get_position_m36019626(L_25, /*hidden argument*/NULL);
		Transform_t3600365921 * L_27 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_t3722313464  L_28 = Transform_get_right_m2535262102(L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_29 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_26, L_28, /*hidden argument*/NULL);
		V_4 = L_29;
		float L_30 = (&V_4)->get_x_2();
		float L_31 = (&V_4)->get_y_3();
		float L_32 = (&V_4)->get_z_4();
		GL_Vertex3_m766753641(NULL /*static, unused*/, L_30, L_31, L_32, /*hidden argument*/NULL);
		GL_End_m539612367(NULL /*static, unused*/, /*hidden argument*/NULL);
		GL_Begin_m1290681325(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		Color_t2555686324  L_33 = Color_get_green_m490390750(NULL /*static, unused*/, /*hidden argument*/NULL);
		GL_Color_m2127587175(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		Transform_t3600365921 * L_34 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector3_t3722313464  L_35 = Transform_get_position_m36019626(L_34, /*hidden argument*/NULL);
		V_5 = L_35;
		float L_36 = (&V_5)->get_x_2();
		Transform_t3600365921 * L_37 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_37);
		Vector3_t3722313464  L_38 = Transform_get_position_m36019626(L_37, /*hidden argument*/NULL);
		V_6 = L_38;
		float L_39 = (&V_6)->get_y_3();
		Transform_t3600365921 * L_40 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_40);
		Vector3_t3722313464  L_41 = Transform_get_position_m36019626(L_40, /*hidden argument*/NULL);
		V_7 = L_41;
		float L_42 = (&V_7)->get_z_4();
		GL_Vertex3_m766753641(NULL /*static, unused*/, L_36, L_39, L_42, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_43 = V_0;
		Vector3_t3722313464  L_44 = Vector3_get_right_m1913784872(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_45 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_43, L_44, /*hidden argument*/NULL);
		V_8 = L_45;
		Transform_t3600365921 * L_46 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_46);
		Vector3_t3722313464  L_47 = Transform_get_position_m36019626(L_46, /*hidden argument*/NULL);
		Vector3_t3722313464  L_48 = V_8;
		Vector3_t3722313464  L_49 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_47, L_48, /*hidden argument*/NULL);
		V_9 = L_49;
		float L_50 = (&V_9)->get_x_2();
		float L_51 = (&V_9)->get_y_3();
		float L_52 = (&V_9)->get_z_4();
		GL_Vertex3_m766753641(NULL /*static, unused*/, L_50, L_51, L_52, /*hidden argument*/NULL);
		GL_End_m539612367(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_018e:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransformVisualizer::CreateLineMaterial()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformVisualizer_CreateLineMaterial_m3214025820 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransformVisualizer_CreateLineMaterial_m3214025820_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Shader_t4151988712 * V_0 = NULL;
	{
		Material_t340375123 * L_0 = ((NetworkTransformVisualizer_t2328387012_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTransformVisualizer_t2328387012_il2cpp_TypeInfo_var))->get_s_LineMaterial_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		goto IL_0062;
	}

IL_0015:
	{
		Shader_t4151988712 * L_2 = Shader_Find_m2092206247(NULL /*static, unused*/, _stringLiteral163873836, /*hidden argument*/NULL);
		V_0 = L_2;
		Shader_t4151988712 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral1728819234, /*hidden argument*/NULL);
		goto IL_0062;
	}

IL_003b:
	{
		Shader_t4151988712 * L_5 = V_0;
		Material_t340375123 * L_6 = (Material_t340375123 *)il2cpp_codegen_object_new(Material_t340375123_il2cpp_TypeInfo_var);
		Material__ctor_m1662457592(L_6, L_5, /*hidden argument*/NULL);
		((NetworkTransformVisualizer_t2328387012_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTransformVisualizer_t2328387012_il2cpp_TypeInfo_var))->set_s_LineMaterial_13(L_6);
		Material_t340375123 * L_7 = ((NetworkTransformVisualizer_t2328387012_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTransformVisualizer_t2328387012_il2cpp_TypeInfo_var))->get_s_LineMaterial_13();
		NullCheck(L_7);
		Object_set_hideFlags_m1648752846(L_7, ((int32_t)61), /*hidden argument*/NULL);
		Material_t340375123 * L_8 = ((NetworkTransformVisualizer_t2328387012_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTransformVisualizer_t2328387012_il2cpp_TypeInfo_var))->get_s_LineMaterial_13();
		NullCheck(L_8);
		Material_SetInt_m1783799378(L_8, _stringLiteral1810507830, 0, /*hidden argument*/NULL);
	}

IL_0062:
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
// System.Void UnityEngine.Networking.NetworkWriter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter__ctor_m18760743 (NetworkWriter_t3928387057 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkWriter__ctor_m18760743_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		NetBuffer_t2156033743 * L_0 = (NetBuffer_t2156033743 *)il2cpp_codegen_object_new(NetBuffer_t2156033743_il2cpp_TypeInfo_var);
		NetBuffer__ctor_m3439388757(L_0, /*hidden argument*/NULL);
		__this->set_m_Buffer_1(L_0);
		Encoding_t1523322056 * L_1 = ((NetworkWriter_t3928387057_StaticFields*)il2cpp_codegen_static_fields_for(NetworkWriter_t3928387057_il2cpp_TypeInfo_var))->get_s_Encoding_2();
		if (L_1)
		{
			goto IL_0037;
		}
	}
	{
		UTF8Encoding_t3956466879 * L_2 = (UTF8Encoding_t3956466879 *)il2cpp_codegen_object_new(UTF8Encoding_t3956466879_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_m1224805231(L_2, /*hidden argument*/NULL);
		((NetworkWriter_t3928387057_StaticFields*)il2cpp_codegen_static_fields_for(NetworkWriter_t3928387057_il2cpp_TypeInfo_var))->set_s_Encoding_2(L_2);
		ByteU5BU5D_t4116647657* L_3 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32768));
		((NetworkWriter_t3928387057_StaticFields*)il2cpp_codegen_static_fields_for(NetworkWriter_t3928387057_il2cpp_TypeInfo_var))->set_s_StringWriteBuffer_3(L_3);
	}

IL_0037:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter__ctor_m824815027 (NetworkWriter_t3928387057 * __this, ByteU5BU5D_t4116647657* ___buffer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkWriter__ctor_m824815027_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_0 = ___buffer0;
		NetBuffer_t2156033743 * L_1 = (NetBuffer_t2156033743 *)il2cpp_codegen_object_new(NetBuffer_t2156033743_il2cpp_TypeInfo_var);
		NetBuffer__ctor_m1859496364(L_1, L_0, /*hidden argument*/NULL);
		__this->set_m_Buffer_1(L_1);
		Encoding_t1523322056 * L_2 = ((NetworkWriter_t3928387057_StaticFields*)il2cpp_codegen_static_fields_for(NetworkWriter_t3928387057_il2cpp_TypeInfo_var))->get_s_Encoding_2();
		if (L_2)
		{
			goto IL_0038;
		}
	}
	{
		UTF8Encoding_t3956466879 * L_3 = (UTF8Encoding_t3956466879 *)il2cpp_codegen_object_new(UTF8Encoding_t3956466879_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_m1224805231(L_3, /*hidden argument*/NULL);
		((NetworkWriter_t3928387057_StaticFields*)il2cpp_codegen_static_fields_for(NetworkWriter_t3928387057_il2cpp_TypeInfo_var))->set_s_Encoding_2(L_3);
		ByteU5BU5D_t4116647657* L_4 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32768));
		((NetworkWriter_t3928387057_StaticFields*)il2cpp_codegen_static_fields_for(NetworkWriter_t3928387057_il2cpp_TypeInfo_var))->set_s_StringWriteBuffer_3(L_4);
	}

IL_0038:
	{
		return;
	}
}
// System.Int16 UnityEngine.Networking.NetworkWriter::get_Position()
extern "C" IL2CPP_METHOD_ATTR int16_t NetworkWriter_get_Position_m2028972219 (NetworkWriter_t3928387057 * __this, const RuntimeMethod* method)
{
	int16_t V_0 = 0;
	{
		NetBuffer_t2156033743 * L_0 = __this->get_m_Buffer_1();
		NullCheck(L_0);
		uint32_t L_1 = NetBuffer_get_Position_m2888524920(L_0, /*hidden argument*/NULL);
		V_0 = (((int16_t)((int16_t)L_1)));
		goto IL_0013;
	}

IL_0013:
	{
		int16_t L_2 = V_0;
		return L_2;
	}
}
// System.Byte[] UnityEngine.Networking.NetworkWriter::ToArray()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* NetworkWriter_ToArray_m132610877 (NetworkWriter_t3928387057 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkWriter_ToArray_m132610877_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	ArraySegment_1_t283560987  V_1;
	memset(&V_1, 0, sizeof(V_1));
	ArraySegment_1_t283560987  V_2;
	memset(&V_2, 0, sizeof(V_2));
	ArraySegment_1_t283560987  V_3;
	memset(&V_3, 0, sizeof(V_3));
	ByteU5BU5D_t4116647657* V_4 = NULL;
	{
		NetBuffer_t2156033743 * L_0 = __this->get_m_Buffer_1();
		NullCheck(L_0);
		ArraySegment_1_t283560987  L_1 = NetBuffer_AsArraySegment_m2456076681(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = ArraySegment_1_get_Count_m4110759063((ArraySegment_1_t283560987 *)(&V_1), /*hidden argument*/ArraySegment_1_get_Count_m4110759063_RuntimeMethod_var);
		ByteU5BU5D_t4116647657* L_3 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_0 = L_3;
		NetBuffer_t2156033743 * L_4 = __this->get_m_Buffer_1();
		NullCheck(L_4);
		ArraySegment_1_t283560987  L_5 = NetBuffer_AsArraySegment_m2456076681(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		ByteU5BU5D_t4116647657* L_6 = ArraySegment_1_get_Array_m2580038436((ArraySegment_1_t283560987 *)(&V_2), /*hidden argument*/ArraySegment_1_get_Array_m2580038436_RuntimeMethod_var);
		ByteU5BU5D_t4116647657* L_7 = V_0;
		NetBuffer_t2156033743 * L_8 = __this->get_m_Buffer_1();
		NullCheck(L_8);
		ArraySegment_1_t283560987  L_9 = NetBuffer_AsArraySegment_m2456076681(L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		int32_t L_10 = ArraySegment_1_get_Count_m4110759063((ArraySegment_1_t283560987 *)(&V_3), /*hidden argument*/ArraySegment_1_get_Count_m4110759063_RuntimeMethod_var);
		Array_Copy_m1988217701(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_6, (RuntimeArray *)(RuntimeArray *)L_7, L_10, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_11 = V_0;
		V_4 = L_11;
		goto IL_004e;
	}

IL_004e:
	{
		ByteU5BU5D_t4116647657* L_12 = V_4;
		return L_12;
	}
}
// System.Byte[] UnityEngine.Networking.NetworkWriter::AsArray()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* NetworkWriter_AsArray_m3793159246 (NetworkWriter_t3928387057 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkWriter_AsArray_m3793159246_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ArraySegment_1_t283560987  V_0;
	memset(&V_0, 0, sizeof(V_0));
	ByteU5BU5D_t4116647657* V_1 = NULL;
	{
		ArraySegment_1_t283560987  L_0 = NetworkWriter_AsArraySegment_m857312692(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		ByteU5BU5D_t4116647657* L_1 = ArraySegment_1_get_Array_m2580038436((ArraySegment_1_t283560987 *)(&V_0), /*hidden argument*/ArraySegment_1_get_Array_m2580038436_RuntimeMethod_var);
		V_1 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		ByteU5BU5D_t4116647657* L_2 = V_1;
		return L_2;
	}
}
// System.ArraySegment`1<System.Byte> UnityEngine.Networking.NetworkWriter::AsArraySegment()
extern "C" IL2CPP_METHOD_ATTR ArraySegment_1_t283560987  NetworkWriter_AsArraySegment_m857312692 (NetworkWriter_t3928387057 * __this, const RuntimeMethod* method)
{
	ArraySegment_1_t283560987  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		NetBuffer_t2156033743 * L_0 = __this->get_m_Buffer_1();
		NullCheck(L_0);
		ArraySegment_1_t283560987  L_1 = NetBuffer_AsArraySegment_m2456076681(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		ArraySegment_1_t283560987  L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::WritePackedUInt32(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_WritePackedUInt32_m3131691200 (NetworkWriter_t3928387057 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		if ((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)240)))))
		{
			goto IL_001a;
		}
	}
	{
		uint32_t L_1 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)L_1))), /*hidden argument*/NULL);
		goto IL_0133;
	}

IL_001a:
	{
		uint32_t L_2 = ___value0;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)2287)))))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t L_3 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)240)))/(uint32_t)(int32_t)((int32_t)256))), (int32_t)((int32_t)241)))))), /*hidden argument*/NULL);
		uint32_t L_4 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)240)))%(uint32_t)(int32_t)((int32_t)256)))))), /*hidden argument*/NULL);
		goto IL_0133;
	}

IL_0059:
	{
		uint32_t L_5 = ___value0;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)67823)))))
		{
			goto IL_009d;
		}
	}
	{
		NetworkWriter_Write_m524839711(__this, (uint8_t)((int32_t)249), /*hidden argument*/NULL);
		uint32_t L_6 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)((int32_t)2288)))/(uint32_t)(int32_t)((int32_t)256)))))), /*hidden argument*/NULL);
		uint32_t L_7 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)2288)))%(uint32_t)(int32_t)((int32_t)256)))))), /*hidden argument*/NULL);
		goto IL_0133;
	}

IL_009d:
	{
		uint32_t L_8 = ___value0;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)16777215)))))
		{
			goto IL_00e8;
		}
	}
	{
		NetworkWriter_Write_m524839711(__this, (uint8_t)((int32_t)250), /*hidden argument*/NULL);
		uint32_t L_9 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_9&(int32_t)((int32_t)255)))))), /*hidden argument*/NULL);
		uint32_t L_10 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_10>>8))&(int32_t)((int32_t)255)))))), /*hidden argument*/NULL);
		uint32_t L_11 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_11>>((int32_t)16)))&(int32_t)((int32_t)255)))))), /*hidden argument*/NULL);
		goto IL_0133;
	}

IL_00e8:
	{
		NetworkWriter_Write_m524839711(__this, (uint8_t)((int32_t)251), /*hidden argument*/NULL);
		uint32_t L_12 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)255)))))), /*hidden argument*/NULL);
		uint32_t L_13 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_13>>8))&(int32_t)((int32_t)255)))))), /*hidden argument*/NULL);
		uint32_t L_14 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_14>>((int32_t)16)))&(int32_t)((int32_t)255)))))), /*hidden argument*/NULL);
		uint32_t L_15 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_15>>((int32_t)24)))&(int32_t)((int32_t)255)))))), /*hidden argument*/NULL);
	}

IL_0133:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::WritePackedUInt64(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_WritePackedUInt64_m797187740 (NetworkWriter_t3928387057 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___value0;
		if ((!(((uint64_t)L_0) <= ((uint64_t)(((int64_t)((int64_t)((int32_t)240))))))))
		{
			goto IL_001b;
		}
	}
	{
		uint64_t L_1 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)L_1))), /*hidden argument*/NULL);
		goto IL_0386;
	}

IL_001b:
	{
		uint64_t L_2 = ___value0;
		if ((!(((uint64_t)L_2) <= ((uint64_t)(((int64_t)((int64_t)((int32_t)2287))))))))
		{
			goto IL_0060;
		}
	}
	{
		uint64_t L_3 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((uint64_t)(int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_3, (int64_t)(((int64_t)((int64_t)((int32_t)240))))))/(uint64_t)(int64_t)(((int64_t)((int64_t)((int32_t)256)))))), (int64_t)(((int64_t)((int64_t)((int32_t)241))))))))), /*hidden argument*/NULL);
		uint64_t L_4 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((uint64_t)(int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_4, (int64_t)(((int64_t)((int64_t)((int32_t)240))))))%(uint64_t)(int64_t)(((int64_t)((int64_t)((int32_t)256))))))))), /*hidden argument*/NULL);
		goto IL_0386;
	}

IL_0060:
	{
		uint64_t L_5 = ___value0;
		if ((!(((uint64_t)L_5) <= ((uint64_t)(((int64_t)((int64_t)((int32_t)67823))))))))
		{
			goto IL_00a9;
		}
	}
	{
		NetworkWriter_Write_m524839711(__this, (uint8_t)((int32_t)249), /*hidden argument*/NULL);
		uint64_t L_6 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((uint64_t)(int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_6, (int64_t)(((int64_t)((int64_t)((int32_t)2288))))))/(uint64_t)(int64_t)(((int64_t)((int64_t)((int32_t)256))))))))), /*hidden argument*/NULL);
		uint64_t L_7 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((uint64_t)(int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_7, (int64_t)(((int64_t)((int64_t)((int32_t)2288))))))%(uint64_t)(int64_t)(((int64_t)((int64_t)((int32_t)256))))))))), /*hidden argument*/NULL);
		goto IL_0386;
	}

IL_00a9:
	{
		uint64_t L_8 = ___value0;
		if ((!(((uint64_t)L_8) <= ((uint64_t)(((int64_t)((int64_t)((int32_t)16777215))))))))
		{
			goto IL_00f8;
		}
	}
	{
		NetworkWriter_Write_m524839711(__this, (uint8_t)((int32_t)250), /*hidden argument*/NULL);
		uint64_t L_9 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)L_9&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_10 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_10>>8))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_11 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_11>>((int32_t)16)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		goto IL_0386;
	}

IL_00f8:
	{
		uint64_t L_12 = ___value0;
		if ((!(((uint64_t)L_12) <= ((uint64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1)))))))))))
		{
			goto IL_0155;
		}
	}
	{
		NetworkWriter_Write_m524839711(__this, (uint8_t)((int32_t)251), /*hidden argument*/NULL);
		uint64_t L_13 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)L_13&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_14 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_14>>8))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_15 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_15>>((int32_t)16)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_16 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_16>>((int32_t)24)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		goto IL_0386;
	}

IL_0155:
	{
		uint64_t L_17 = ___value0;
		if ((!(((uint64_t)L_17) <= ((uint64_t)((int64_t)1099511627775LL)))))
		{
			goto IL_01cb;
		}
	}
	{
		NetworkWriter_Write_m524839711(__this, (uint8_t)((int32_t)252), /*hidden argument*/NULL);
		uint64_t L_18 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)L_18&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_19 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_19>>8))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_20 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_20>>((int32_t)16)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_21 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_21>>((int32_t)24)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_22 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_22>>((int32_t)32)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		goto IL_0386;
	}

IL_01cb:
	{
		uint64_t L_23 = ___value0;
		if ((!(((uint64_t)L_23) <= ((uint64_t)((int64_t)281474976710655LL)))))
		{
			goto IL_0253;
		}
	}
	{
		NetworkWriter_Write_m524839711(__this, (uint8_t)((int32_t)253), /*hidden argument*/NULL);
		uint64_t L_24 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)L_24&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_25 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_25>>8))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_26 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_26>>((int32_t)16)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_27 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_27>>((int32_t)24)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_28 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_28>>((int32_t)32)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_29 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_29>>((int32_t)40)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		goto IL_0386;
	}

IL_0253:
	{
		uint64_t L_30 = ___value0;
		if ((!(((uint64_t)L_30) <= ((uint64_t)((int64_t)72057594037927935LL)))))
		{
			goto IL_02ed;
		}
	}
	{
		NetworkWriter_Write_m524839711(__this, (uint8_t)((int32_t)254), /*hidden argument*/NULL);
		uint64_t L_31 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)L_31&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_32 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_32>>8))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_33 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_33>>((int32_t)16)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_34 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_34>>((int32_t)24)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_35 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_35>>((int32_t)32)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_36 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_36>>((int32_t)40)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_37 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_37>>((int32_t)48)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		goto IL_0386;
	}

IL_02ed:
	{
		NetworkWriter_Write_m524839711(__this, (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		uint64_t L_38 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)L_38&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_39 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_39>>8))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_40 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_40>>((int32_t)16)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_41 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_41>>((int32_t)24)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_42 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_42>>((int32_t)32)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_43 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_43>>((int32_t)40)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_44 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_44>>((int32_t)48)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		uint64_t L_45 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_45>>((int32_t)56)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
	}

IL_0386:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.NetworkInstanceId)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m2257467436 (NetworkWriter_t3928387057 * __this, NetworkInstanceId_t786350175  ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = NetworkInstanceId_get_Value_m3072328574((NetworkInstanceId_t786350175 *)(&___value0), /*hidden argument*/NULL);
		NetworkWriter_WritePackedUInt32_m3131691200(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.NetworkSceneId)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m3340287509 (NetworkWriter_t3928387057 * __this, NetworkSceneId_t717048590  ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = NetworkSceneId_get_Value_m1596061750((NetworkSceneId_t717048590 *)(&___value0), /*hidden argument*/NULL);
		NetworkWriter_WritePackedUInt32_m3131691200(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Char)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m1266427311 (NetworkWriter_t3928387057 * __this, Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		NetBuffer_t2156033743 * L_0 = __this->get_m_Buffer_1();
		Il2CppChar L_1 = ___value0;
		NullCheck(L_0);
		NetBuffer_WriteByte_m3822302387(L_0, (uint8_t)(((int32_t)((uint8_t)L_1))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m524839711 (NetworkWriter_t3928387057 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		NetBuffer_t2156033743 * L_0 = __this->get_m_Buffer_1();
		uint8_t L_1 = ___value0;
		NullCheck(L_0);
		NetBuffer_WriteByte_m3822302387(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.SByte)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m2671232307 (NetworkWriter_t3928387057 * __this, int8_t ___value0, const RuntimeMethod* method)
{
	{
		NetBuffer_t2156033743 * L_0 = __this->get_m_Buffer_1();
		int8_t L_1 = ___value0;
		NullCheck(L_0);
		NetBuffer_WriteByte_m3822302387(L_0, (uint8_t)(((int32_t)((uint8_t)L_1))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Int16)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m297525087 (NetworkWriter_t3928387057 * __this, int16_t ___value0, const RuntimeMethod* method)
{
	{
		NetBuffer_t2156033743 * L_0 = __this->get_m_Buffer_1();
		int16_t L_1 = ___value0;
		int16_t L_2 = ___value0;
		NullCheck(L_0);
		NetBuffer_WriteByte2_m389295316(L_0, (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)255)))))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2>>(int32_t)8))&(int32_t)((int32_t)255)))))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m413412595 (NetworkWriter_t3928387057 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		NetBuffer_t2156033743 * L_0 = __this->get_m_Buffer_1();
		uint16_t L_1 = ___value0;
		uint16_t L_2 = ___value0;
		NullCheck(L_0);
		NetBuffer_WriteByte2_m389295316(L_0, (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)255)))))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2>>(int32_t)8))&(int32_t)((int32_t)255)))))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m2267024627 (NetworkWriter_t3928387057 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		NetBuffer_t2156033743 * L_0 = __this->get_m_Buffer_1();
		int32_t L_1 = ___value0;
		int32_t L_2 = ___value0;
		int32_t L_3 = ___value0;
		int32_t L_4 = ___value0;
		NullCheck(L_0);
		NetBuffer_WriteByte4_m2453375265(L_0, (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)255)))))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2>>(int32_t)8))&(int32_t)((int32_t)255)))))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3>>(int32_t)((int32_t)16)))&(int32_t)((int32_t)255)))))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_4>>(int32_t)((int32_t)24)))&(int32_t)((int32_t)255)))))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m2780906429 (NetworkWriter_t3928387057 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		NetBuffer_t2156033743 * L_0 = __this->get_m_Buffer_1();
		uint32_t L_1 = ___value0;
		uint32_t L_2 = ___value0;
		uint32_t L_3 = ___value0;
		uint32_t L_4 = ___value0;
		NullCheck(L_0);
		NetBuffer_WriteByte4_m2453375265(L_0, (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)255)))))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_2>>8))&(int32_t)((int32_t)255)))))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_3>>((int32_t)16)))&(int32_t)((int32_t)255)))))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_4>>((int32_t)24)))&(int32_t)((int32_t)255)))))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m1460652181 (NetworkWriter_t3928387057 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		NetBuffer_t2156033743 * L_0 = __this->get_m_Buffer_1();
		int64_t L_1 = ___value0;
		int64_t L_2 = ___value0;
		int64_t L_3 = ___value0;
		int64_t L_4 = ___value0;
		int64_t L_5 = ___value0;
		int64_t L_6 = ___value0;
		int64_t L_7 = ___value0;
		int64_t L_8 = ___value0;
		NullCheck(L_0);
		NetBuffer_WriteByte8_m1631847787(L_0, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)L_1&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((int64_t)L_2>>(int32_t)8))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((int64_t)L_3>>(int32_t)((int32_t)16)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((int64_t)L_4>>(int32_t)((int32_t)24)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((int64_t)L_5>>(int32_t)((int32_t)32)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((int64_t)L_6>>(int32_t)((int32_t)40)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((int64_t)L_7>>(int32_t)((int32_t)48)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((int64_t)L_8>>(int32_t)((int32_t)56)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m3168402614 (NetworkWriter_t3928387057 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		NetBuffer_t2156033743 * L_0 = __this->get_m_Buffer_1();
		uint64_t L_1 = ___value0;
		uint64_t L_2 = ___value0;
		uint64_t L_3 = ___value0;
		uint64_t L_4 = ___value0;
		uint64_t L_5 = ___value0;
		uint64_t L_6 = ___value0;
		uint64_t L_7 = ___value0;
		uint64_t L_8 = ___value0;
		NullCheck(L_0);
		NetBuffer_WriteByte8_m1631847787(L_0, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)L_1&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_2>>8))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_3>>((int32_t)16)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_4>>((int32_t)24)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_5>>((int32_t)32)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_6>>((int32_t)40)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_7>>((int32_t)48)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_8>>((int32_t)56)))&(int64_t)(((int64_t)((int64_t)((int32_t)255))))))))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Single)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m189730350 (NetworkWriter_t3928387057 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkWriter_Write_m189730350_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		(((NetworkWriter_t3928387057_StaticFields*)il2cpp_codegen_static_fields_for(NetworkWriter_t3928387057_il2cpp_TypeInfo_var))->get_address_of_s_FloatConverter_4())->set_floatValue_0(L_0);
		uint32_t L_1 = (((NetworkWriter_t3928387057_StaticFields*)il2cpp_codegen_static_fields_for(NetworkWriter_t3928387057_il2cpp_TypeInfo_var))->get_address_of_s_FloatConverter_4())->get_intValue_1();
		NetworkWriter_Write_m2780906429(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Double)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m2878035860 (NetworkWriter_t3928387057 * __this, double ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkWriter_Write_m2878035860_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___value0;
		(((NetworkWriter_t3928387057_StaticFields*)il2cpp_codegen_static_fields_for(NetworkWriter_t3928387057_il2cpp_TypeInfo_var))->get_address_of_s_FloatConverter_4())->set_doubleValue_2(L_0);
		uint64_t L_1 = (((NetworkWriter_t3928387057_StaticFields*)il2cpp_codegen_static_fields_for(NetworkWriter_t3928387057_il2cpp_TypeInfo_var))->get_address_of_s_FloatConverter_4())->get_longValue_3();
		NetworkWriter_Write_m3168402614(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Decimal)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m3035096652 (NetworkWriter_t3928387057 * __this, Decimal_t2948259380  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkWriter_Write_m3035096652_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t385246372* V_0 = NULL;
	{
		Decimal_t2948259380  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2948259380_il2cpp_TypeInfo_var);
		Int32U5BU5D_t385246372* L_1 = Decimal_GetBits_m453754410(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Int32U5BU5D_t385246372* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		int32_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NetworkWriter_Write_m2267024627(__this, L_4, /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = 1;
		int32_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NetworkWriter_Write_m2267024627(__this, L_7, /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = 2;
		int32_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NetworkWriter_Write_m2267024627(__this, L_10, /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = 3;
		int32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NetworkWriter_Write_m2267024627(__this, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.String)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m2410084080 (NetworkWriter_t3928387057 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkWriter_Write_m2410084080_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		NetBuffer_t2156033743 * L_1 = __this->get_m_Buffer_1();
		NullCheck(L_1);
		NetBuffer_WriteByte2_m389295316(L_1, (uint8_t)0, (uint8_t)0, /*hidden argument*/NULL);
		goto IL_0080;
	}

IL_001a:
	{
		Encoding_t1523322056 * L_2 = ((NetworkWriter_t3928387057_StaticFields*)il2cpp_codegen_static_fields_for(NetworkWriter_t3928387057_il2cpp_TypeInfo_var))->get_s_Encoding_2();
		String_t* L_3 = ___value0;
		NullCheck(L_2);
		int32_t L_4 = VirtFuncInvoker1< int32_t, String_t* >::Invoke(6 /* System.Int32 System.Text.Encoding::GetByteCount(System.String) */, L_2, L_3);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)32768))))
		{
			goto IL_004d;
		}
	}
	{
		String_t* L_6 = ___value0;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m3847582255(L_6, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral1659358499, L_9, /*hidden argument*/NULL);
		IndexOutOfRangeException_t1578797820 * L_11 = (IndexOutOfRangeException_t1578797820 *)il2cpp_codegen_object_new(IndexOutOfRangeException_t1578797820_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m3408750441(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, NetworkWriter_Write_m2410084080_RuntimeMethod_var);
	}

IL_004d:
	{
		int32_t L_12 = V_0;
		NetworkWriter_Write_m413412595(__this, (uint16_t)(((int32_t)((uint16_t)L_12))), /*hidden argument*/NULL);
		Encoding_t1523322056 * L_13 = ((NetworkWriter_t3928387057_StaticFields*)il2cpp_codegen_static_fields_for(NetworkWriter_t3928387057_il2cpp_TypeInfo_var))->get_s_Encoding_2();
		String_t* L_14 = ___value0;
		String_t* L_15 = ___value0;
		NullCheck(L_15);
		int32_t L_16 = String_get_Length_m3847582255(L_15, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_17 = ((NetworkWriter_t3928387057_StaticFields*)il2cpp_codegen_static_fields_for(NetworkWriter_t3928387057_il2cpp_TypeInfo_var))->get_s_StringWriteBuffer_3();
		NullCheck(L_13);
		int32_t L_18 = VirtFuncInvoker5< int32_t, String_t*, int32_t, int32_t, ByteU5BU5D_t4116647657*, int32_t >::Invoke(9 /* System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32) */, L_13, L_14, 0, L_16, L_17, 0);
		V_1 = L_18;
		NetBuffer_t2156033743 * L_19 = __this->get_m_Buffer_1();
		ByteU5BU5D_t4116647657* L_20 = ((NetworkWriter_t3928387057_StaticFields*)il2cpp_codegen_static_fields_for(NetworkWriter_t3928387057_il2cpp_TypeInfo_var))->get_s_StringWriteBuffer_3();
		int32_t L_21 = V_1;
		NullCheck(L_19);
		NetBuffer_WriteBytes_m3812345676(L_19, L_20, (uint16_t)(((int32_t)((uint16_t)L_21))), /*hidden argument*/NULL);
	}

IL_0080:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m2977220184 (NetworkWriter_t3928387057 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		NetBuffer_t2156033743 * L_1 = __this->get_m_Buffer_1();
		NullCheck(L_1);
		NetBuffer_WriteByte_m3822302387(L_1, (uint8_t)1, /*hidden argument*/NULL);
		goto IL_0024;
	}

IL_0018:
	{
		NetBuffer_t2156033743 * L_2 = __this->get_m_Buffer_1();
		NullCheck(L_2);
		NetBuffer_WriteByte_m3822302387(L_2, (uint8_t)0, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m2507998834 (NetworkWriter_t3928387057 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___count1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkWriter_Write_m2507998834_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___count1;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t3573890335_il2cpp_TypeInfo_var);
		bool L_1 = LogFilter_get_logError_m2939562087(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_2 = ___count1;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral4229007791, L_4, _stringLiteral3051958475, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_0033:
	{
		goto IL_0046;
	}

IL_0038:
	{
		NetBuffer_t2156033743 * L_6 = __this->get_m_Buffer_1();
		ByteU5BU5D_t4116647657* L_7 = ___buffer0;
		int32_t L_8 = ___count1;
		NullCheck(L_6);
		NetBuffer_WriteBytes_m3812345676(L_6, L_7, (uint16_t)(((int32_t)((uint16_t)L_8))), /*hidden argument*/NULL);
	}

IL_0046:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m3133882443 (NetworkWriter_t3928387057 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkWriter_Write_m3133882443_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___count2;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t3573890335_il2cpp_TypeInfo_var);
		bool L_1 = LogFilter_get_logError_m2939562087(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_2 = ___count2;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral4229007791, L_4, _stringLiteral3051958475, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_0033:
	{
		goto IL_0048;
	}

IL_0038:
	{
		NetBuffer_t2156033743 * L_6 = __this->get_m_Buffer_1();
		ByteU5BU5D_t4116647657* L_7 = ___buffer0;
		int32_t L_8 = ___offset1;
		int32_t L_9 = ___count2;
		NullCheck(L_6);
		NetBuffer_WriteBytesAtOffset_m2613591720(L_6, L_7, (uint16_t)(((int32_t)((uint16_t)L_8))), (uint16_t)(((int32_t)((uint16_t)L_9))), /*hidden argument*/NULL);
	}

IL_0048:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::WriteBytesAndSize(System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_WriteBytesAndSize_m542866276 (NetworkWriter_t3928387057 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___count1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkWriter_WriteBytesAndSize_m542866276_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = ___buffer0;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___count1;
		if (L_1)
		{
			goto IL_001a;
		}
	}

IL_000d:
	{
		NetworkWriter_Write_m413412595(__this, (uint16_t)0, /*hidden argument*/NULL);
		goto IL_0067;
	}

IL_001a:
	{
		int32_t L_2 = ___count1;
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0051;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t3573890335_il2cpp_TypeInfo_var);
		bool L_3 = LogFilter_get_logError_m2939562087(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_4 = ___count1;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral3221776185, L_6, _stringLiteral3051958475, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_004c:
	{
		goto IL_0067;
	}

IL_0051:
	{
		int32_t L_8 = ___count1;
		NetworkWriter_Write_m413412595(__this, (uint16_t)(((int32_t)((uint16_t)L_8))), /*hidden argument*/NULL);
		NetBuffer_t2156033743 * L_9 = __this->get_m_Buffer_1();
		ByteU5BU5D_t4116647657* L_10 = ___buffer0;
		int32_t L_11 = ___count1;
		NullCheck(L_9);
		NetBuffer_WriteBytes_m3812345676(L_9, L_10, (uint16_t)(((int32_t)((uint16_t)L_11))), /*hidden argument*/NULL);
	}

IL_0067:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::WriteBytesFull(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_WriteBytesFull_m804870477 (NetworkWriter_t3928387057 * __this, ByteU5BU5D_t4116647657* ___buffer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkWriter_WriteBytesFull_m804870477_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = ___buffer0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		NetworkWriter_Write_m413412595(__this, (uint16_t)0, /*hidden argument*/NULL);
		goto IL_0069;
	}

IL_0014:
	{
		ByteU5BU5D_t4116647657* L_1 = ___buffer0;
		NullCheck(L_1);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_004f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t3573890335_il2cpp_TypeInfo_var);
		bool L_2 = LogFilter_get_logError_m2939562087(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004a;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_3 = ___buffer0;
		NullCheck(L_3);
		int32_t L_4 = (((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))));
		RuntimeObject * L_5 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral2263479475, L_5, _stringLiteral3051958475, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
	}

IL_004a:
	{
		goto IL_0069;
	}

IL_004f:
	{
		ByteU5BU5D_t4116647657* L_7 = ___buffer0;
		NullCheck(L_7);
		NetworkWriter_Write_m413412595(__this, (uint16_t)(((int32_t)((uint16_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length))))))), /*hidden argument*/NULL);
		NetBuffer_t2156033743 * L_8 = __this->get_m_Buffer_1();
		ByteU5BU5D_t4116647657* L_9 = ___buffer0;
		ByteU5BU5D_t4116647657* L_10 = ___buffer0;
		NullCheck(L_10);
		NullCheck(L_8);
		NetBuffer_WriteBytes_m3812345676(L_8, L_9, (uint16_t)(((int32_t)((uint16_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length))))))), /*hidden argument*/NULL);
	}

IL_0069:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m13017049 (NetworkWriter_t3928387057 * __this, Vector2_t2156229523  ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = (&___value0)->get_x_0();
		NetworkWriter_Write_m189730350(__this, L_0, /*hidden argument*/NULL);
		float L_1 = (&___value0)->get_y_1();
		NetworkWriter_Write_m189730350(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m13082585 (NetworkWriter_t3928387057 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = (&___value0)->get_x_2();
		NetworkWriter_Write_m189730350(__this, L_0, /*hidden argument*/NULL);
		float L_1 = (&___value0)->get_y_3();
		NetworkWriter_Write_m189730350(__this, L_1, /*hidden argument*/NULL);
		float L_2 = (&___value0)->get_z_4();
		NetworkWriter_Write_m189730350(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m12623833 (NetworkWriter_t3928387057 * __this, Vector4_t3319028937  ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = (&___value0)->get_x_1();
		NetworkWriter_Write_m189730350(__this, L_0, /*hidden argument*/NULL);
		float L_1 = (&___value0)->get_y_2();
		NetworkWriter_Write_m189730350(__this, L_1, /*hidden argument*/NULL);
		float L_2 = (&___value0)->get_z_3();
		NetworkWriter_Write_m189730350(__this, L_2, /*hidden argument*/NULL);
		float L_3 = (&___value0)->get_w_4();
		NetworkWriter_Write_m189730350(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m259584188 (NetworkWriter_t3928387057 * __this, Color_t2555686324  ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = (&___value0)->get_r_0();
		NetworkWriter_Write_m189730350(__this, L_0, /*hidden argument*/NULL);
		float L_1 = (&___value0)->get_g_1();
		NetworkWriter_Write_m189730350(__this, L_1, /*hidden argument*/NULL);
		float L_2 = (&___value0)->get_b_2();
		NetworkWriter_Write_m189730350(__this, L_2, /*hidden argument*/NULL);
		float L_3 = (&___value0)->get_a_3();
		NetworkWriter_Write_m189730350(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Color32)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m517046788 (NetworkWriter_t3928387057 * __this, Color32_t2600501292  ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = (&___value0)->get_r_1();
		NetworkWriter_Write_m524839711(__this, L_0, /*hidden argument*/NULL);
		uint8_t L_1 = (&___value0)->get_g_2();
		NetworkWriter_Write_m524839711(__this, L_1, /*hidden argument*/NULL);
		uint8_t L_2 = (&___value0)->get_b_3();
		NetworkWriter_Write_m524839711(__this, L_2, /*hidden argument*/NULL);
		uint8_t L_3 = (&___value0)->get_a_4();
		NetworkWriter_Write_m524839711(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m2449292798 (NetworkWriter_t3928387057 * __this, Quaternion_t2301928331  ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = (&___value0)->get_x_0();
		NetworkWriter_Write_m189730350(__this, L_0, /*hidden argument*/NULL);
		float L_1 = (&___value0)->get_y_1();
		NetworkWriter_Write_m189730350(__this, L_1, /*hidden argument*/NULL);
		float L_2 = (&___value0)->get_z_2();
		NetworkWriter_Write_m189730350(__this, L_2, /*hidden argument*/NULL);
		float L_3 = (&___value0)->get_w_3();
		NetworkWriter_Write_m189730350(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Rect)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m2526662752 (NetworkWriter_t3928387057 * __this, Rect_t2360479859  ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = Rect_get_xMin_m581135837((Rect_t2360479859 *)(&___value0), /*hidden argument*/NULL);
		NetworkWriter_Write_m189730350(__this, L_0, /*hidden argument*/NULL);
		float L_1 = Rect_get_yMin_m2601414109((Rect_t2360479859 *)(&___value0), /*hidden argument*/NULL);
		NetworkWriter_Write_m189730350(__this, L_1, /*hidden argument*/NULL);
		float L_2 = Rect_get_width_m3421484486((Rect_t2360479859 *)(&___value0), /*hidden argument*/NULL);
		NetworkWriter_Write_m189730350(__this, L_2, /*hidden argument*/NULL);
		float L_3 = Rect_get_height_m1358425599((Rect_t2360479859 *)(&___value0), /*hidden argument*/NULL);
		NetworkWriter_Write_m189730350(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Plane)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m3013698952 (NetworkWriter_t3928387057 * __this, Plane_t1000493321  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = Plane_get_normal_m2366091158((Plane_t1000493321 *)(&___value0), /*hidden argument*/NULL);
		NetworkWriter_Write_m13082585(__this, L_0, /*hidden argument*/NULL);
		float L_1 = Plane_get_distance_m3054241251((Plane_t1000493321 *)(&___value0), /*hidden argument*/NULL);
		NetworkWriter_Write_m189730350(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m2596080445 (NetworkWriter_t3928387057 * __this, Ray_t3785851493  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = Ray_get_direction_m761601601((Ray_t3785851493 *)(&___value0), /*hidden argument*/NULL);
		NetworkWriter_Write_m13082585(__this, L_0, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Ray_get_origin_m2819290985((Ray_t3785851493 *)(&___value0), /*hidden argument*/NULL);
		NetworkWriter_Write_m13082585(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Matrix4x4)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m983228899 (NetworkWriter_t3928387057 * __this, Matrix4x4_t1817901843  ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = (&___value0)->get_m00_0();
		NetworkWriter_Write_m189730350(__this, L_0, /*hidden argument*/NULL);
		float L_1 = (&___value0)->get_m01_4();
		NetworkWriter_Write_m189730350(__this, L_1, /*hidden argument*/NULL);
		float L_2 = (&___value0)->get_m02_8();
		NetworkWriter_Write_m189730350(__this, L_2, /*hidden argument*/NULL);
		float L_3 = (&___value0)->get_m03_12();
		NetworkWriter_Write_m189730350(__this, L_3, /*hidden argument*/NULL);
		float L_4 = (&___value0)->get_m10_1();
		NetworkWriter_Write_m189730350(__this, L_4, /*hidden argument*/NULL);
		float L_5 = (&___value0)->get_m11_5();
		NetworkWriter_Write_m189730350(__this, L_5, /*hidden argument*/NULL);
		float L_6 = (&___value0)->get_m12_9();
		NetworkWriter_Write_m189730350(__this, L_6, /*hidden argument*/NULL);
		float L_7 = (&___value0)->get_m13_13();
		NetworkWriter_Write_m189730350(__this, L_7, /*hidden argument*/NULL);
		float L_8 = (&___value0)->get_m20_2();
		NetworkWriter_Write_m189730350(__this, L_8, /*hidden argument*/NULL);
		float L_9 = (&___value0)->get_m21_6();
		NetworkWriter_Write_m189730350(__this, L_9, /*hidden argument*/NULL);
		float L_10 = (&___value0)->get_m22_10();
		NetworkWriter_Write_m189730350(__this, L_10, /*hidden argument*/NULL);
		float L_11 = (&___value0)->get_m23_14();
		NetworkWriter_Write_m189730350(__this, L_11, /*hidden argument*/NULL);
		float L_12 = (&___value0)->get_m30_3();
		NetworkWriter_Write_m189730350(__this, L_12, /*hidden argument*/NULL);
		float L_13 = (&___value0)->get_m31_7();
		NetworkWriter_Write_m189730350(__this, L_13, /*hidden argument*/NULL);
		float L_14 = (&___value0)->get_m32_11();
		NetworkWriter_Write_m189730350(__this, L_14, /*hidden argument*/NULL);
		float L_15 = (&___value0)->get_m33_15();
		NetworkWriter_Write_m189730350(__this, L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.NetworkHash128)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m426356230 (NetworkWriter_t3928387057 * __this, NetworkHash128_t2391674535  ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = (&___value0)->get_i0_0();
		NetworkWriter_Write_m524839711(__this, L_0, /*hidden argument*/NULL);
		uint8_t L_1 = (&___value0)->get_i1_1();
		NetworkWriter_Write_m524839711(__this, L_1, /*hidden argument*/NULL);
		uint8_t L_2 = (&___value0)->get_i2_2();
		NetworkWriter_Write_m524839711(__this, L_2, /*hidden argument*/NULL);
		uint8_t L_3 = (&___value0)->get_i3_3();
		NetworkWriter_Write_m524839711(__this, L_3, /*hidden argument*/NULL);
		uint8_t L_4 = (&___value0)->get_i4_4();
		NetworkWriter_Write_m524839711(__this, L_4, /*hidden argument*/NULL);
		uint8_t L_5 = (&___value0)->get_i5_5();
		NetworkWriter_Write_m524839711(__this, L_5, /*hidden argument*/NULL);
		uint8_t L_6 = (&___value0)->get_i6_6();
		NetworkWriter_Write_m524839711(__this, L_6, /*hidden argument*/NULL);
		uint8_t L_7 = (&___value0)->get_i7_7();
		NetworkWriter_Write_m524839711(__this, L_7, /*hidden argument*/NULL);
		uint8_t L_8 = (&___value0)->get_i8_8();
		NetworkWriter_Write_m524839711(__this, L_8, /*hidden argument*/NULL);
		uint8_t L_9 = (&___value0)->get_i9_9();
		NetworkWriter_Write_m524839711(__this, L_9, /*hidden argument*/NULL);
		uint8_t L_10 = (&___value0)->get_i10_10();
		NetworkWriter_Write_m524839711(__this, L_10, /*hidden argument*/NULL);
		uint8_t L_11 = (&___value0)->get_i11_11();
		NetworkWriter_Write_m524839711(__this, L_11, /*hidden argument*/NULL);
		uint8_t L_12 = (&___value0)->get_i12_12();
		NetworkWriter_Write_m524839711(__this, L_12, /*hidden argument*/NULL);
		uint8_t L_13 = (&___value0)->get_i13_13();
		NetworkWriter_Write_m524839711(__this, L_13, /*hidden argument*/NULL);
		uint8_t L_14 = (&___value0)->get_i14_14();
		NetworkWriter_Write_m524839711(__this, L_14, /*hidden argument*/NULL);
		uint8_t L_15 = (&___value0)->get_i15_15();
		NetworkWriter_Write_m524839711(__this, L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.NetworkIdentity)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m1946185738 (NetworkWriter_t3928387057 * __this, NetworkIdentity_t3299519057 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkWriter_Write_m1946185738_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkIdentity_t3299519057 * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		NetworkWriter_WritePackedUInt32_m3131691200(__this, 0, /*hidden argument*/NULL);
		goto IL_0026;
	}

IL_001a:
	{
		NetworkIdentity_t3299519057 * L_2 = ___value0;
		NullCheck(L_2);
		NetworkInstanceId_t786350175  L_3 = NetworkIdentity_get_netId_m3534357786(L_2, /*hidden argument*/NULL);
		NetworkWriter_Write_m2257467436(__this, L_3, /*hidden argument*/NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m1337490735 (NetworkWriter_t3928387057 * __this, Transform_t3600365921 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkWriter_Write_m1337490735_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkIdentity_t3299519057 * V_0 = NULL;
	{
		Transform_t3600365921 * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		Transform_t3600365921 * L_2 = ___value0;
		NullCheck(L_2);
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}

IL_001e:
	{
		NetworkWriter_WritePackedUInt32_m3131691200(__this, 0, /*hidden argument*/NULL);
		goto IL_0080;
	}

IL_002b:
	{
		Transform_t3600365921 * L_5 = ___value0;
		NullCheck(L_5);
		GameObject_t1113636619 * L_6 = Component_get_gameObject_m442555142(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		NetworkIdentity_t3299519057 * L_7 = GameObject_GetComponent_TisNetworkIdentity_t3299519057_m4215495152(L_6, /*hidden argument*/GameObject_GetComponent_TisNetworkIdentity_t3299519057_m4215495152_RuntimeMethod_var);
		V_0 = L_7;
		NetworkIdentity_t3299519057 * L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_8, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0056;
		}
	}
	{
		NetworkIdentity_t3299519057 * L_10 = V_0;
		NullCheck(L_10);
		NetworkInstanceId_t786350175  L_11 = NetworkIdentity_get_netId_m3534357786(L_10, /*hidden argument*/NULL);
		NetworkWriter_Write_m2257467436(__this, L_11, /*hidden argument*/NULL);
		goto IL_0080;
	}

IL_0056:
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t3573890335_il2cpp_TypeInfo_var);
		bool L_12 = LogFilter_get_logWarn_m1931385554(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0078;
		}
	}
	{
		Transform_t3600365921 * L_13 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral3514328747, L_13, _stringLiteral1665107978, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
	}

IL_0078:
	{
		NetworkWriter_WritePackedUInt32_m3131691200(__this, 0, /*hidden argument*/NULL);
	}

IL_0080:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m2295136255 (NetworkWriter_t3928387057 * __this, GameObject_t1113636619 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkWriter_Write_m2295136255_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkIdentity_t3299519057 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		NetworkWriter_WritePackedUInt32_m3131691200(__this, 0, /*hidden argument*/NULL);
		goto IL_006a;
	}

IL_001a:
	{
		GameObject_t1113636619 * L_2 = ___value0;
		NullCheck(L_2);
		NetworkIdentity_t3299519057 * L_3 = GameObject_GetComponent_TisNetworkIdentity_t3299519057_m4215495152(L_2, /*hidden argument*/GameObject_GetComponent_TisNetworkIdentity_t3299519057_m4215495152_RuntimeMethod_var);
		V_0 = L_3;
		NetworkIdentity_t3299519057 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		NetworkIdentity_t3299519057 * L_6 = V_0;
		NullCheck(L_6);
		NetworkInstanceId_t786350175  L_7 = NetworkIdentity_get_netId_m3534357786(L_6, /*hidden argument*/NULL);
		NetworkWriter_Write_m2257467436(__this, L_7, /*hidden argument*/NULL);
		goto IL_006a;
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t3573890335_il2cpp_TypeInfo_var);
		bool L_8 = LogFilter_get_logWarn_m1931385554(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0062;
		}
	}
	{
		GameObject_t1113636619 * L_9 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral3514328747, L_9, _stringLiteral1665107978, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
	}

IL_0062:
	{
		NetworkWriter_WritePackedUInt32_m3131691200(__this, 0, /*hidden argument*/NULL);
	}

IL_006a:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.MessageBase)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m4236632238 (NetworkWriter_t3928387057 * __this, MessageBase_t3584795631 * ___msg0, const RuntimeMethod* method)
{
	{
		MessageBase_t3584795631 * L_0 = ___msg0;
		NullCheck(L_0);
		VirtActionInvoker1< NetworkWriter_t3928387057 * >::Invoke(5 /* System.Void UnityEngine.Networking.MessageBase::Serialize(UnityEngine.Networking.NetworkWriter) */, L_0, __this);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::SeekZero()
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_SeekZero_m4052279075 (NetworkWriter_t3928387057 * __this, const RuntimeMethod* method)
{
	{
		NetBuffer_t2156033743 * L_0 = __this->get_m_Buffer_1();
		NullCheck(L_0);
		NetBuffer_SeekZero_m818658810(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::StartMessage(System.Int16)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_StartMessage_m841875667 (NetworkWriter_t3928387057 * __this, int16_t ___msgType0, const RuntimeMethod* method)
{
	{
		NetworkWriter_SeekZero_m4052279075(__this, /*hidden argument*/NULL);
		NetBuffer_t2156033743 * L_0 = __this->get_m_Buffer_1();
		NullCheck(L_0);
		NetBuffer_WriteByte2_m389295316(L_0, (uint8_t)0, (uint8_t)0, /*hidden argument*/NULL);
		int16_t L_1 = ___msgType0;
		NetworkWriter_Write_m297525087(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::FinishMessage()
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_FinishMessage_m3971444334 (NetworkWriter_t3928387057 * __this, const RuntimeMethod* method)
{
	{
		NetBuffer_t2156033743 * L_0 = __this->get_m_Buffer_1();
		NullCheck(L_0);
		NetBuffer_FinishMessage_m1626721425(L_0, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Networking.PlayerController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PlayerController__ctor_m3978748274 (PlayerController_t496487816 * __this, const RuntimeMethod* method)
{
	{
		__this->set_playerControllerId_1((int16_t)(-1));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.PlayerController::.ctor(UnityEngine.GameObject,System.Int16)
extern "C" IL2CPP_METHOD_ATTR void PlayerController__ctor_m1563370273 (PlayerController_t496487816 * __this, GameObject_t1113636619 * ___go0, int16_t ___playerControllerId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController__ctor_m1563370273_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_playerControllerId_1((int16_t)(-1));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_0 = ___go0;
		__this->set_gameObject_3(L_0);
		GameObject_t1113636619 * L_1 = ___go0;
		NullCheck(L_1);
		NetworkIdentity_t3299519057 * L_2 = GameObject_GetComponent_TisNetworkIdentity_t3299519057_m4215495152(L_1, /*hidden argument*/GameObject_GetComponent_TisNetworkIdentity_t3299519057_m4215495152_RuntimeMethod_var);
		__this->set_unetView_2(L_2);
		int16_t L_3 = ___playerControllerId1;
		__this->set_playerControllerId_1(L_3);
		return;
	}
}
// System.Boolean UnityEngine.Networking.PlayerController::get_IsValid()
extern "C" IL2CPP_METHOD_ATTR bool PlayerController_get_IsValid_m3565267537 (PlayerController_t496487816 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int16_t L_0 = __this->get_playerControllerId_1();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0013;
	}

IL_0013:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Networking.PlayerController::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* PlayerController_ToString_m451687094 (PlayerController_t496487816 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_ToString_m451687094_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkInstanceId_t786350175  V_0;
	memset(&V_0, 0, sizeof(V_0));
	String_t* V_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t2843939325* G_B2_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t2843939325* G_B1_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t2843939325* G_B3_2 = NULL;
	ObjectU5BU5D_t2843939325* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t2843939325* G_B5_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t2843939325* G_B4_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t2843939325* G_B6_2 = NULL;
	ObjectU5BU5D_t2843939325* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		int16_t L_2 = __this->get_playerControllerId_1();
		int16_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int16_t2552820387_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = L_1;
		NetworkIdentity_t3299519057 * L_6 = __this->get_unetView_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_6, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		G_B1_0 = 1;
		G_B1_1 = L_5;
		G_B1_2 = L_5;
		G_B1_3 = _stringLiteral148958899;
		if (!L_7)
		{
			G_B2_0 = 1;
			G_B2_1 = L_5;
			G_B2_2 = L_5;
			G_B2_3 = _stringLiteral148958899;
			goto IL_004b;
		}
	}
	{
		NetworkIdentity_t3299519057 * L_8 = __this->get_unetView_2();
		NullCheck(L_8);
		NetworkInstanceId_t786350175  L_9 = NetworkIdentity_get_netId_m3534357786(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		String_t* L_10 = NetworkInstanceId_ToString_m2512558384((NetworkInstanceId_t786350175 *)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_10;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0050;
	}

IL_004b:
	{
		G_B3_0 = _stringLiteral1202628576;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0050:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject *)G_B3_0);
		ObjectU5BU5D_t2843939325* L_11 = G_B3_3;
		GameObject_t1113636619 * L_12 = __this->get_gameObject_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_12, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		G_B4_0 = 2;
		G_B4_1 = L_11;
		G_B4_2 = L_11;
		G_B4_3 = G_B3_4;
		if (!L_13)
		{
			G_B5_0 = 2;
			G_B5_1 = L_11;
			G_B5_2 = L_11;
			G_B5_3 = G_B3_4;
			goto IL_0074;
		}
	}
	{
		GameObject_t1113636619 * L_14 = __this->get_gameObject_3();
		NullCheck(L_14);
		String_t* L_15 = Object_get_name_m4211327027(L_14, /*hidden argument*/NULL);
		G_B6_0 = L_15;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_0079;
	}

IL_0074:
	{
		G_B6_0 = _stringLiteral1202628576;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_0079:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject *)G_B6_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Format_m630303134(NULL /*static, unused*/, G_B6_4, G_B6_3, /*hidden argument*/NULL);
		V_1 = L_16;
		goto IL_0085;
	}

IL_0085:
	{
		String_t* L_17 = V_1;
		return L_17;
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
// System.Void UnityEngine.Networking.ServerAttribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ServerAttribute__ctor_m1722638297 (ServerAttribute_t3576563794 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Networking.ServerCallbackAttribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ServerCallbackAttribute__ctor_m1582116148 (ServerCallbackAttribute_t137408393 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Networking.SpawnDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SpawnDelegate__ctor_m3439234033 (SpawnDelegate_t1585635496 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// UnityEngine.GameObject UnityEngine.Networking.SpawnDelegate::Invoke(UnityEngine.Vector3,UnityEngine.Networking.NetworkHash128)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * SpawnDelegate_Invoke_m2080818349 (SpawnDelegate_t1585635496 * __this, Vector3_t3722313464  ___position0, NetworkHash128_t2391674535  ___assetId1, const RuntimeMethod* method)
{
	GameObject_t1113636619 * result = NULL;
	if(__this->get_prev_9() != NULL)
	{
		SpawnDelegate_Invoke_m2080818349((SpawnDelegate_t1585635496 *)__this->get_prev_9(), ___position0, ___assetId1, method);
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
				typedef GameObject_t1113636619 * (*FunctionPointerType) (RuntimeObject *, Vector3_t3722313464 , NetworkHash128_t2391674535 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___position0, ___assetId1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef GameObject_t1113636619 * (*FunctionPointerType) (RuntimeObject *, void*, Vector3_t3722313464 , NetworkHash128_t2391674535 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___position0, ___assetId1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< GameObject_t1113636619 *, Vector3_t3722313464 , NetworkHash128_t2391674535  >::Invoke(targetMethod, targetThis, ___position0, ___assetId1);
					else
						result = GenericVirtFuncInvoker2< GameObject_t1113636619 *, Vector3_t3722313464 , NetworkHash128_t2391674535  >::Invoke(targetMethod, targetThis, ___position0, ___assetId1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< GameObject_t1113636619 *, Vector3_t3722313464 , NetworkHash128_t2391674535  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___position0, ___assetId1);
					else
						result = VirtFuncInvoker2< GameObject_t1113636619 *, Vector3_t3722313464 , NetworkHash128_t2391674535  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___position0, ___assetId1);
				}
			}
			else
			{
				typedef GameObject_t1113636619 * (*FunctionPointerType) (void*, Vector3_t3722313464 , NetworkHash128_t2391674535 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___position0, ___assetId1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.Networking.SpawnDelegate::BeginInvoke(UnityEngine.Vector3,UnityEngine.Networking.NetworkHash128,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SpawnDelegate_BeginInvoke_m3131172266 (SpawnDelegate_t1585635496 * __this, Vector3_t3722313464  ___position0, NetworkHash128_t2391674535  ___assetId1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpawnDelegate_BeginInvoke_m3131172266_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &___position0);
	__d_args[1] = Box(NetworkHash128_t2391674535_il2cpp_TypeInfo_var, &___assetId1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// UnityEngine.GameObject UnityEngine.Networking.SpawnDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * SpawnDelegate_EndInvoke_m3848942832 (SpawnDelegate_t1585635496 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (GameObject_t1113636619 *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.SyncEventAttribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SyncEventAttribute__ctor_m3286595593 (SyncEventAttribute_t1173463645 * __this, const RuntimeMethod* method)
{
	{
		__this->set_channel_0(0);
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Networking.SyncListBool::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SyncListBool__ctor_m4271378930 (SyncListBool_t2976666744 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncListBool__ctor_m4271378930_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SyncList_1__ctor_m3510382209(__this, /*hidden argument*/SyncList_1__ctor_m3510382209_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.Networking.SyncListBool::SerializeItem(UnityEngine.Networking.NetworkWriter,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SyncListBool_SerializeItem_m238978743 (SyncListBool_t2976666744 * __this, NetworkWriter_t3928387057 * ___writer0, bool ___item1, const RuntimeMethod* method)
{
	{
		NetworkWriter_t3928387057 * L_0 = ___writer0;
		bool L_1 = ___item1;
		NullCheck(L_0);
		NetworkWriter_Write_m2977220184(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Networking.SyncListBool::DeserializeItem(UnityEngine.Networking.NetworkReader)
extern "C" IL2CPP_METHOD_ATTR bool SyncListBool_DeserializeItem_m1898196257 (SyncListBool_t2976666744 * __this, NetworkReader_t1574750186 * ___reader0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		bool L_1 = NetworkReader_ReadBoolean_m3855332856(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Networking.SyncListBool UnityEngine.Networking.SyncListBool::ReadInstance(UnityEngine.Networking.NetworkReader)
extern "C" IL2CPP_METHOD_ATTR SyncListBool_t2976666744 * SyncListBool_ReadInstance_m820966434 (RuntimeObject * __this /* static, unused */, NetworkReader_t1574750186 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncListBool_ReadInstance_m820966434_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	SyncListBool_t2976666744 * V_1 = NULL;
	uint16_t V_2 = 0;
	SyncListBool_t2976666744 * V_3 = NULL;
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1 = NetworkReader_ReadUInt16_m2326281171(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		SyncListBool_t2976666744 * L_2 = (SyncListBool_t2976666744 *)il2cpp_codegen_object_new(SyncListBool_t2976666744_il2cpp_TypeInfo_var);
		SyncListBool__ctor_m4271378930(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		V_2 = (uint16_t)0;
		goto IL_0028;
	}

IL_0015:
	{
		SyncListBool_t2976666744 * L_3 = V_1;
		NetworkReader_t1574750186 * L_4 = ___reader0;
		NullCheck(L_4);
		bool L_5 = NetworkReader_ReadBoolean_m3855332856(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		SyncList_1_AddInternal_m2707695638(L_3, L_5, /*hidden argument*/SyncList_1_AddInternal_m2707695638_RuntimeMethod_var);
		uint16_t L_6 = V_2;
		V_2 = (uint16_t)(((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)))));
	}

IL_0028:
	{
		uint16_t L_7 = V_2;
		uint16_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0015;
		}
	}
	{
		SyncListBool_t2976666744 * L_9 = V_1;
		V_3 = L_9;
		goto IL_0036;
	}

IL_0036:
	{
		SyncListBool_t2976666744 * L_10 = V_3;
		return L_10;
	}
}
// System.Void UnityEngine.Networking.SyncListBool::ReadReference(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.SyncListBool)
extern "C" IL2CPP_METHOD_ATTR void SyncListBool_ReadReference_m3578578461 (RuntimeObject * __this /* static, unused */, NetworkReader_t1574750186 * ___reader0, SyncListBool_t2976666744 * ___syncList1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncListBool_ReadReference_m3578578461_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	uint16_t V_1 = 0;
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1 = NetworkReader_ReadUInt16_m2326281171(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		SyncListBool_t2976666744 * L_2 = ___syncList1;
		NullCheck(L_2);
		SyncList_1_Clear_m672306289(L_2, /*hidden argument*/SyncList_1_Clear_m672306289_RuntimeMethod_var);
		V_1 = (uint16_t)0;
		goto IL_0028;
	}

IL_0015:
	{
		SyncListBool_t2976666744 * L_3 = ___syncList1;
		NetworkReader_t1574750186 * L_4 = ___reader0;
		NullCheck(L_4);
		bool L_5 = NetworkReader_ReadBoolean_m3855332856(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		SyncList_1_AddInternal_m2707695638(L_3, L_5, /*hidden argument*/SyncList_1_AddInternal_m2707695638_RuntimeMethod_var);
		uint16_t L_6 = V_1;
		V_1 = (uint16_t)(((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)))));
	}

IL_0028:
	{
		uint16_t L_7 = V_1;
		uint16_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Networking.SyncListBool::WriteInstance(UnityEngine.Networking.NetworkWriter,UnityEngine.Networking.SyncListBool)
extern "C" IL2CPP_METHOD_ATTR void SyncListBool_WriteInstance_m2961228772 (RuntimeObject * __this /* static, unused */, NetworkWriter_t3928387057 * ___writer0, SyncListBool_t2976666744 * ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncListBool_WriteInstance_m2961228772_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		NetworkWriter_t3928387057 * L_0 = ___writer0;
		SyncListBool_t2976666744 * L_1 = ___items1;
		NullCheck(L_1);
		int32_t L_2 = SyncList_1_get_Count_m1619578576(L_1, /*hidden argument*/SyncList_1_get_Count_m1619578576_RuntimeMethod_var);
		NullCheck(L_0);
		NetworkWriter_Write_m413412595(L_0, (uint16_t)(((int32_t)((uint16_t)L_2))), /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_0028;
	}

IL_0015:
	{
		NetworkWriter_t3928387057 * L_3 = ___writer0;
		SyncListBool_t2976666744 * L_4 = ___items1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		bool L_6 = SyncList_1_get_Item_m2119903705(L_4, L_5, /*hidden argument*/SyncList_1_get_Item_m2119903705_RuntimeMethod_var);
		NullCheck(L_3);
		NetworkWriter_Write_m2977220184(L_3, L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0028:
	{
		int32_t L_8 = V_0;
		SyncListBool_t2976666744 * L_9 = ___items1;
		NullCheck(L_9);
		int32_t L_10 = SyncList_1_get_Count_m1619578576(L_9, /*hidden argument*/SyncList_1_get_Count_m1619578576_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0015;
		}
	}
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
// System.Void UnityEngine.Networking.SyncListFloat::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SyncListFloat__ctor_m3007803704 (SyncListFloat_t1924884630 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncListFloat__ctor_m3007803704_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SyncList_1__ctor_m1007556774(__this, /*hidden argument*/SyncList_1__ctor_m1007556774_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.Networking.SyncListFloat::SerializeItem(UnityEngine.Networking.NetworkWriter,System.Single)
extern "C" IL2CPP_METHOD_ATTR void SyncListFloat_SerializeItem_m3523510761 (SyncListFloat_t1924884630 * __this, NetworkWriter_t3928387057 * ___writer0, float ___item1, const RuntimeMethod* method)
{
	{
		NetworkWriter_t3928387057 * L_0 = ___writer0;
		float L_1 = ___item1;
		NullCheck(L_0);
		NetworkWriter_Write_m189730350(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.Networking.SyncListFloat::DeserializeItem(UnityEngine.Networking.NetworkReader)
extern "C" IL2CPP_METHOD_ATTR float SyncListFloat_DeserializeItem_m1630667112 (SyncListFloat_t1924884630 * __this, NetworkReader_t1574750186 * ___reader0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		float L_1 = NetworkReader_ReadSingle_m2704596705(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Networking.SyncListFloat UnityEngine.Networking.SyncListFloat::ReadInstance(UnityEngine.Networking.NetworkReader)
extern "C" IL2CPP_METHOD_ATTR SyncListFloat_t1924884630 * SyncListFloat_ReadInstance_m1361610567 (RuntimeObject * __this /* static, unused */, NetworkReader_t1574750186 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncListFloat_ReadInstance_m1361610567_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	SyncListFloat_t1924884630 * V_1 = NULL;
	uint16_t V_2 = 0;
	SyncListFloat_t1924884630 * V_3 = NULL;
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1 = NetworkReader_ReadUInt16_m2326281171(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		SyncListFloat_t1924884630 * L_2 = (SyncListFloat_t1924884630 *)il2cpp_codegen_object_new(SyncListFloat_t1924884630_il2cpp_TypeInfo_var);
		SyncListFloat__ctor_m3007803704(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		V_2 = (uint16_t)0;
		goto IL_0028;
	}

IL_0015:
	{
		SyncListFloat_t1924884630 * L_3 = V_1;
		NetworkReader_t1574750186 * L_4 = ___reader0;
		NullCheck(L_4);
		float L_5 = NetworkReader_ReadSingle_m2704596705(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		SyncList_1_AddInternal_m3876800740(L_3, L_5, /*hidden argument*/SyncList_1_AddInternal_m3876800740_RuntimeMethod_var);
		uint16_t L_6 = V_2;
		V_2 = (uint16_t)(((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)))));
	}

IL_0028:
	{
		uint16_t L_7 = V_2;
		uint16_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0015;
		}
	}
	{
		SyncListFloat_t1924884630 * L_9 = V_1;
		V_3 = L_9;
		goto IL_0036;
	}

IL_0036:
	{
		SyncListFloat_t1924884630 * L_10 = V_3;
		return L_10;
	}
}
// System.Void UnityEngine.Networking.SyncListFloat::ReadReference(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.SyncListFloat)
extern "C" IL2CPP_METHOD_ATTR void SyncListFloat_ReadReference_m3907681595 (RuntimeObject * __this /* static, unused */, NetworkReader_t1574750186 * ___reader0, SyncListFloat_t1924884630 * ___syncList1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncListFloat_ReadReference_m3907681595_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	uint16_t V_1 = 0;
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1 = NetworkReader_ReadUInt16_m2326281171(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		SyncListFloat_t1924884630 * L_2 = ___syncList1;
		NullCheck(L_2);
		SyncList_1_Clear_m3306438993(L_2, /*hidden argument*/SyncList_1_Clear_m3306438993_RuntimeMethod_var);
		V_1 = (uint16_t)0;
		goto IL_0028;
	}

IL_0015:
	{
		SyncListFloat_t1924884630 * L_3 = ___syncList1;
		NetworkReader_t1574750186 * L_4 = ___reader0;
		NullCheck(L_4);
		float L_5 = NetworkReader_ReadSingle_m2704596705(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		SyncList_1_AddInternal_m3876800740(L_3, L_5, /*hidden argument*/SyncList_1_AddInternal_m3876800740_RuntimeMethod_var);
		uint16_t L_6 = V_1;
		V_1 = (uint16_t)(((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)))));
	}

IL_0028:
	{
		uint16_t L_7 = V_1;
		uint16_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Networking.SyncListFloat::WriteInstance(UnityEngine.Networking.NetworkWriter,UnityEngine.Networking.SyncListFloat)
extern "C" IL2CPP_METHOD_ATTR void SyncListFloat_WriteInstance_m2399586300 (RuntimeObject * __this /* static, unused */, NetworkWriter_t3928387057 * ___writer0, SyncListFloat_t1924884630 * ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncListFloat_WriteInstance_m2399586300_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		NetworkWriter_t3928387057 * L_0 = ___writer0;
		SyncListFloat_t1924884630 * L_1 = ___items1;
		NullCheck(L_1);
		int32_t L_2 = SyncList_1_get_Count_m3693813194(L_1, /*hidden argument*/SyncList_1_get_Count_m3693813194_RuntimeMethod_var);
		NullCheck(L_0);
		NetworkWriter_Write_m413412595(L_0, (uint16_t)(((int32_t)((uint16_t)L_2))), /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_0028;
	}

IL_0015:
	{
		NetworkWriter_t3928387057 * L_3 = ___writer0;
		SyncListFloat_t1924884630 * L_4 = ___items1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		float L_6 = SyncList_1_get_Item_m2226358506(L_4, L_5, /*hidden argument*/SyncList_1_get_Item_m2226358506_RuntimeMethod_var);
		NullCheck(L_3);
		NetworkWriter_Write_m189730350(L_3, L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0028:
	{
		int32_t L_8 = V_0;
		SyncListFloat_t1924884630 * L_9 = ___items1;
		NullCheck(L_9);
		int32_t L_10 = SyncList_1_get_Count_m3693813194(L_9, /*hidden argument*/SyncList_1_get_Count_m3693813194_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0015;
		}
	}
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
// System.Void UnityEngine.Networking.SyncListInt::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SyncListInt__ctor_m1747608816 (SyncListInt_t3061596081 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncListInt__ctor_m1747608816_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SyncList_1__ctor_m1604967930(__this, /*hidden argument*/SyncList_1__ctor_m1604967930_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.Networking.SyncListInt::SerializeItem(UnityEngine.Networking.NetworkWriter,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SyncListInt_SerializeItem_m3942093871 (SyncListInt_t3061596081 * __this, NetworkWriter_t3928387057 * ___writer0, int32_t ___item1, const RuntimeMethod* method)
{
	{
		NetworkWriter_t3928387057 * L_0 = ___writer0;
		int32_t L_1 = ___item1;
		NullCheck(L_0);
		NetworkWriter_WritePackedUInt32_m3131691200(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Networking.SyncListInt::DeserializeItem(UnityEngine.Networking.NetworkReader)
extern "C" IL2CPP_METHOD_ATTR int32_t SyncListInt_DeserializeItem_m4061232961 (SyncListInt_t3061596081 * __this, NetworkReader_t1574750186 * ___reader0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		uint32_t L_1 = NetworkReader_ReadPackedUInt32_m1668516449(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Networking.SyncListInt UnityEngine.Networking.SyncListInt::ReadInstance(UnityEngine.Networking.NetworkReader)
extern "C" IL2CPP_METHOD_ATTR SyncListInt_t3061596081 * SyncListInt_ReadInstance_m702108680 (RuntimeObject * __this /* static, unused */, NetworkReader_t1574750186 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncListInt_ReadInstance_m702108680_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	SyncListInt_t3061596081 * V_1 = NULL;
	uint16_t V_2 = 0;
	SyncListInt_t3061596081 * V_3 = NULL;
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1 = NetworkReader_ReadUInt16_m2326281171(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		SyncListInt_t3061596081 * L_2 = (SyncListInt_t3061596081 *)il2cpp_codegen_object_new(SyncListInt_t3061596081_il2cpp_TypeInfo_var);
		SyncListInt__ctor_m1747608816(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		V_2 = (uint16_t)0;
		goto IL_0028;
	}

IL_0015:
	{
		SyncListInt_t3061596081 * L_3 = V_1;
		NetworkReader_t1574750186 * L_4 = ___reader0;
		NullCheck(L_4);
		uint32_t L_5 = NetworkReader_ReadPackedUInt32_m1668516449(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		SyncList_1_AddInternal_m3519097998(L_3, L_5, /*hidden argument*/SyncList_1_AddInternal_m3519097998_RuntimeMethod_var);
		uint16_t L_6 = V_2;
		V_2 = (uint16_t)(((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)))));
	}

IL_0028:
	{
		uint16_t L_7 = V_2;
		uint16_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0015;
		}
	}
	{
		SyncListInt_t3061596081 * L_9 = V_1;
		V_3 = L_9;
		goto IL_0036;
	}

IL_0036:
	{
		SyncListInt_t3061596081 * L_10 = V_3;
		return L_10;
	}
}
// System.Void UnityEngine.Networking.SyncListInt::ReadReference(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.SyncListInt)
extern "C" IL2CPP_METHOD_ATTR void SyncListInt_ReadReference_m2130258271 (RuntimeObject * __this /* static, unused */, NetworkReader_t1574750186 * ___reader0, SyncListInt_t3061596081 * ___syncList1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncListInt_ReadReference_m2130258271_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	uint16_t V_1 = 0;
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1 = NetworkReader_ReadUInt16_m2326281171(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		SyncListInt_t3061596081 * L_2 = ___syncList1;
		NullCheck(L_2);
		SyncList_1_Clear_m1121888670(L_2, /*hidden argument*/SyncList_1_Clear_m1121888670_RuntimeMethod_var);
		V_1 = (uint16_t)0;
		goto IL_0028;
	}

IL_0015:
	{
		SyncListInt_t3061596081 * L_3 = ___syncList1;
		NetworkReader_t1574750186 * L_4 = ___reader0;
		NullCheck(L_4);
		uint32_t L_5 = NetworkReader_ReadPackedUInt32_m1668516449(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		SyncList_1_AddInternal_m3519097998(L_3, L_5, /*hidden argument*/SyncList_1_AddInternal_m3519097998_RuntimeMethod_var);
		uint16_t L_6 = V_1;
		V_1 = (uint16_t)(((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)))));
	}

IL_0028:
	{
		uint16_t L_7 = V_1;
		uint16_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Networking.SyncListInt::WriteInstance(UnityEngine.Networking.NetworkWriter,UnityEngine.Networking.SyncListInt)
extern "C" IL2CPP_METHOD_ATTR void SyncListInt_WriteInstance_m3879054733 (RuntimeObject * __this /* static, unused */, NetworkWriter_t3928387057 * ___writer0, SyncListInt_t3061596081 * ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncListInt_WriteInstance_m3879054733_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		NetworkWriter_t3928387057 * L_0 = ___writer0;
		SyncListInt_t3061596081 * L_1 = ___items1;
		NullCheck(L_1);
		int32_t L_2 = SyncList_1_get_Count_m2152775233(L_1, /*hidden argument*/SyncList_1_get_Count_m2152775233_RuntimeMethod_var);
		NullCheck(L_0);
		NetworkWriter_Write_m413412595(L_0, (uint16_t)(((int32_t)((uint16_t)L_2))), /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_0028;
	}

IL_0015:
	{
		NetworkWriter_t3928387057 * L_3 = ___writer0;
		SyncListInt_t3061596081 * L_4 = ___items1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = SyncList_1_get_Item_m664118597(L_4, L_5, /*hidden argument*/SyncList_1_get_Item_m664118597_RuntimeMethod_var);
		NullCheck(L_3);
		NetworkWriter_WritePackedUInt32_m3131691200(L_3, L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0028:
	{
		int32_t L_8 = V_0;
		SyncListInt_t3061596081 * L_9 = ___items1;
		NullCheck(L_9);
		int32_t L_10 = SyncList_1_get_Count_m2152775233(L_9, /*hidden argument*/SyncList_1_get_Count_m2152775233_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0015;
		}
	}
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
// System.Void UnityEngine.Networking.SyncListString::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SyncListString__ctor_m3133147658 (SyncListString_t3633002311 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncListString__ctor_m3133147658_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SyncList_1__ctor_m1252447513(__this, /*hidden argument*/SyncList_1__ctor_m1252447513_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.Networking.SyncListString::SerializeItem(UnityEngine.Networking.NetworkWriter,System.String)
extern "C" IL2CPP_METHOD_ATTR void SyncListString_SerializeItem_m721181722 (SyncListString_t3633002311 * __this, NetworkWriter_t3928387057 * ___writer0, String_t* ___item1, const RuntimeMethod* method)
{
	{
		NetworkWriter_t3928387057 * L_0 = ___writer0;
		String_t* L_1 = ___item1;
		NullCheck(L_0);
		NetworkWriter_Write_m2410084080(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.SyncListString::DeserializeItem(UnityEngine.Networking.NetworkReader)
extern "C" IL2CPP_METHOD_ATTR String_t* SyncListString_DeserializeItem_m1647533424 (SyncListString_t3633002311 * __this, NetworkReader_t1574750186 * ___reader0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		String_t* L_1 = NetworkReader_ReadString_m1528719253(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Networking.SyncListString UnityEngine.Networking.SyncListString::ReadInstance(UnityEngine.Networking.NetworkReader)
extern "C" IL2CPP_METHOD_ATTR SyncListString_t3633002311 * SyncListString_ReadInstance_m2797657582 (RuntimeObject * __this /* static, unused */, NetworkReader_t1574750186 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncListString_ReadInstance_m2797657582_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	SyncListString_t3633002311 * V_1 = NULL;
	uint16_t V_2 = 0;
	SyncListString_t3633002311 * V_3 = NULL;
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1 = NetworkReader_ReadUInt16_m2326281171(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		SyncListString_t3633002311 * L_2 = (SyncListString_t3633002311 *)il2cpp_codegen_object_new(SyncListString_t3633002311_il2cpp_TypeInfo_var);
		SyncListString__ctor_m3133147658(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		V_2 = (uint16_t)0;
		goto IL_0028;
	}

IL_0015:
	{
		SyncListString_t3633002311 * L_3 = V_1;
		NetworkReader_t1574750186 * L_4 = ___reader0;
		NullCheck(L_4);
		String_t* L_5 = NetworkReader_ReadString_m1528719253(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		SyncList_1_AddInternal_m613808320(L_3, L_5, /*hidden argument*/SyncList_1_AddInternal_m613808320_RuntimeMethod_var);
		uint16_t L_6 = V_2;
		V_2 = (uint16_t)(((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)))));
	}

IL_0028:
	{
		uint16_t L_7 = V_2;
		uint16_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0015;
		}
	}
	{
		SyncListString_t3633002311 * L_9 = V_1;
		V_3 = L_9;
		goto IL_0036;
	}

IL_0036:
	{
		SyncListString_t3633002311 * L_10 = V_3;
		return L_10;
	}
}
// System.Void UnityEngine.Networking.SyncListString::ReadReference(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.SyncListString)
extern "C" IL2CPP_METHOD_ATTR void SyncListString_ReadReference_m3451015765 (RuntimeObject * __this /* static, unused */, NetworkReader_t1574750186 * ___reader0, SyncListString_t3633002311 * ___syncList1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncListString_ReadReference_m3451015765_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	uint16_t V_1 = 0;
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1 = NetworkReader_ReadUInt16_m2326281171(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		SyncListString_t3633002311 * L_2 = ___syncList1;
		NullCheck(L_2);
		SyncList_1_Clear_m1260889700(L_2, /*hidden argument*/SyncList_1_Clear_m1260889700_RuntimeMethod_var);
		V_1 = (uint16_t)0;
		goto IL_0028;
	}

IL_0015:
	{
		SyncListString_t3633002311 * L_3 = ___syncList1;
		NetworkReader_t1574750186 * L_4 = ___reader0;
		NullCheck(L_4);
		String_t* L_5 = NetworkReader_ReadString_m1528719253(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		SyncList_1_AddInternal_m613808320(L_3, L_5, /*hidden argument*/SyncList_1_AddInternal_m613808320_RuntimeMethod_var);
		uint16_t L_6 = V_1;
		V_1 = (uint16_t)(((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)))));
	}

IL_0028:
	{
		uint16_t L_7 = V_1;
		uint16_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Networking.SyncListString::WriteInstance(UnityEngine.Networking.NetworkWriter,UnityEngine.Networking.SyncListString)
extern "C" IL2CPP_METHOD_ATTR void SyncListString_WriteInstance_m2960124210 (RuntimeObject * __this /* static, unused */, NetworkWriter_t3928387057 * ___writer0, SyncListString_t3633002311 * ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncListString_WriteInstance_m2960124210_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		NetworkWriter_t3928387057 * L_0 = ___writer0;
		SyncListString_t3633002311 * L_1 = ___items1;
		NullCheck(L_1);
		int32_t L_2 = SyncList_1_get_Count_m120976442(L_1, /*hidden argument*/SyncList_1_get_Count_m120976442_RuntimeMethod_var);
		NullCheck(L_0);
		NetworkWriter_Write_m413412595(L_0, (uint16_t)(((int32_t)((uint16_t)L_2))), /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_0028;
	}

IL_0015:
	{
		NetworkWriter_t3928387057 * L_3 = ___writer0;
		SyncListString_t3633002311 * L_4 = ___items1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		String_t* L_6 = SyncList_1_get_Item_m1975160048(L_4, L_5, /*hidden argument*/SyncList_1_get_Item_m1975160048_RuntimeMethod_var);
		NullCheck(L_3);
		NetworkWriter_Write_m2410084080(L_3, L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0028:
	{
		int32_t L_8 = V_0;
		SyncListString_t3633002311 * L_9 = ___items1;
		NullCheck(L_9);
		int32_t L_10 = SyncList_1_get_Count_m120976442(L_9, /*hidden argument*/SyncList_1_get_Count_m120976442_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0015;
		}
	}
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
// System.Void UnityEngine.Networking.SyncListUInt::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SyncListUInt__ctor_m3640746336 (SyncListUInt_t1324480882 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncListUInt__ctor_m3640746336_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SyncList_1__ctor_m2821956447(__this, /*hidden argument*/SyncList_1__ctor_m2821956447_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.Networking.SyncListUInt::SerializeItem(UnityEngine.Networking.NetworkWriter,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void SyncListUInt_SerializeItem_m2107528284 (SyncListUInt_t1324480882 * __this, NetworkWriter_t3928387057 * ___writer0, uint32_t ___item1, const RuntimeMethod* method)
{
	{
		NetworkWriter_t3928387057 * L_0 = ___writer0;
		uint32_t L_1 = ___item1;
		NullCheck(L_0);
		NetworkWriter_WritePackedUInt32_m3131691200(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.UInt32 UnityEngine.Networking.SyncListUInt::DeserializeItem(UnityEngine.Networking.NetworkReader)
extern "C" IL2CPP_METHOD_ATTR uint32_t SyncListUInt_DeserializeItem_m1375025905 (SyncListUInt_t1324480882 * __this, NetworkReader_t1574750186 * ___reader0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		uint32_t L_1 = NetworkReader_ReadPackedUInt32_m1668516449(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		uint32_t L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Networking.SyncListUInt UnityEngine.Networking.SyncListUInt::ReadInstance(UnityEngine.Networking.NetworkReader)
extern "C" IL2CPP_METHOD_ATTR SyncListUInt_t1324480882 * SyncListUInt_ReadInstance_m568257550 (RuntimeObject * __this /* static, unused */, NetworkReader_t1574750186 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncListUInt_ReadInstance_m568257550_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	SyncListUInt_t1324480882 * V_1 = NULL;
	uint16_t V_2 = 0;
	SyncListUInt_t1324480882 * V_3 = NULL;
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1 = NetworkReader_ReadUInt16_m2326281171(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		SyncListUInt_t1324480882 * L_2 = (SyncListUInt_t1324480882 *)il2cpp_codegen_object_new(SyncListUInt_t1324480882_il2cpp_TypeInfo_var);
		SyncListUInt__ctor_m3640746336(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		V_2 = (uint16_t)0;
		goto IL_0028;
	}

IL_0015:
	{
		SyncListUInt_t1324480882 * L_3 = V_1;
		NetworkReader_t1574750186 * L_4 = ___reader0;
		NullCheck(L_4);
		uint32_t L_5 = NetworkReader_ReadPackedUInt32_m1668516449(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		SyncList_1_AddInternal_m277591762(L_3, L_5, /*hidden argument*/SyncList_1_AddInternal_m277591762_RuntimeMethod_var);
		uint16_t L_6 = V_2;
		V_2 = (uint16_t)(((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)))));
	}

IL_0028:
	{
		uint16_t L_7 = V_2;
		uint16_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0015;
		}
	}
	{
		SyncListUInt_t1324480882 * L_9 = V_1;
		V_3 = L_9;
		goto IL_0036;
	}

IL_0036:
	{
		SyncListUInt_t1324480882 * L_10 = V_3;
		return L_10;
	}
}
// System.Void UnityEngine.Networking.SyncListUInt::ReadReference(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.SyncListUInt)
extern "C" IL2CPP_METHOD_ATTR void SyncListUInt_ReadReference_m191287357 (RuntimeObject * __this /* static, unused */, NetworkReader_t1574750186 * ___reader0, SyncListUInt_t1324480882 * ___syncList1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncListUInt_ReadReference_m191287357_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	uint16_t V_1 = 0;
	{
		NetworkReader_t1574750186 * L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1 = NetworkReader_ReadUInt16_m2326281171(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		SyncListUInt_t1324480882 * L_2 = ___syncList1;
		NullCheck(L_2);
		SyncList_1_Clear_m3269847844(L_2, /*hidden argument*/SyncList_1_Clear_m3269847844_RuntimeMethod_var);
		V_1 = (uint16_t)0;
		goto IL_0028;
	}

IL_0015:
	{
		SyncListUInt_t1324480882 * L_3 = ___syncList1;
		NetworkReader_t1574750186 * L_4 = ___reader0;
		NullCheck(L_4);
		uint32_t L_5 = NetworkReader_ReadPackedUInt32_m1668516449(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		SyncList_1_AddInternal_m277591762(L_3, L_5, /*hidden argument*/SyncList_1_AddInternal_m277591762_RuntimeMethod_var);
		uint16_t L_6 = V_1;
		V_1 = (uint16_t)(((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)))));
	}

IL_0028:
	{
		uint16_t L_7 = V_1;
		uint16_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Networking.SyncListUInt::WriteInstance(UnityEngine.Networking.NetworkWriter,UnityEngine.Networking.SyncListUInt)
extern "C" IL2CPP_METHOD_ATTR void SyncListUInt_WriteInstance_m3270047898 (RuntimeObject * __this /* static, unused */, NetworkWriter_t3928387057 * ___writer0, SyncListUInt_t1324480882 * ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncListUInt_WriteInstance_m3270047898_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		NetworkWriter_t3928387057 * L_0 = ___writer0;
		SyncListUInt_t1324480882 * L_1 = ___items1;
		NullCheck(L_1);
		int32_t L_2 = SyncList_1_get_Count_m3238029537(L_1, /*hidden argument*/SyncList_1_get_Count_m3238029537_RuntimeMethod_var);
		NullCheck(L_0);
		NetworkWriter_Write_m413412595(L_0, (uint16_t)(((int32_t)((uint16_t)L_2))), /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_0028;
	}

IL_0015:
	{
		NetworkWriter_t3928387057 * L_3 = ___writer0;
		SyncListUInt_t1324480882 * L_4 = ___items1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		uint32_t L_6 = SyncList_1_get_Item_m1374023387(L_4, L_5, /*hidden argument*/SyncList_1_get_Item_m1374023387_RuntimeMethod_var);
		NullCheck(L_3);
		NetworkWriter_WritePackedUInt32_m3131691200(L_3, L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0028:
	{
		int32_t L_8 = V_0;
		SyncListUInt_t1324480882 * L_9 = ___items1;
		NullCheck(L_9);
		int32_t L_10 = SyncList_1_get_Count_m3238029537(L_9, /*hidden argument*/SyncList_1_get_Count_m3238029537_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0015;
		}
	}
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
// System.Void UnityEngine.Networking.SyncVarAttribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SyncVarAttribute__ctor_m417388672 (SyncVarAttribute_t562797116 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Networking.TargetRpcAttribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TargetRpcAttribute__ctor_m2822923366 (TargetRpcAttribute_t3963917861 * __this, const RuntimeMethod* method)
{
	{
		__this->set_channel_0(0);
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Networking.ULocalConnectionToClient::.ctor(UnityEngine.Networking.LocalClient)
extern "C" IL2CPP_METHOD_ATTR void ULocalConnectionToClient__ctor_m3225125635 (ULocalConnectionToClient_t1858816613 * __this, LocalClient_t1191103892 * ___localClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ULocalConnectionToClient__ctor_m3225125635_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkConnection__ctor_m3056801716(__this, /*hidden argument*/NULL);
		((NetworkConnection_t2705220091 *)__this)->set_address_14(_stringLiteral3702469874);
		LocalClient_t1191103892 * L_0 = ___localClient0;
		__this->set_m_LocalClient_19(L_0);
		return;
	}
}
// UnityEngine.Networking.LocalClient UnityEngine.Networking.ULocalConnectionToClient::get_localClient()
extern "C" IL2CPP_METHOD_ATTR LocalClient_t1191103892 * ULocalConnectionToClient_get_localClient_m3517974156 (ULocalConnectionToClient_t1858816613 * __this, const RuntimeMethod* method)
{
	LocalClient_t1191103892 * V_0 = NULL;
	{
		LocalClient_t1191103892 * L_0 = __this->get_m_LocalClient_19();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		LocalClient_t1191103892 * L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Networking.ULocalConnectionToClient::Send(System.Int16,UnityEngine.Networking.MessageBase)
extern "C" IL2CPP_METHOD_ATTR bool ULocalConnectionToClient_Send_m917486686 (ULocalConnectionToClient_t1858816613 * __this, int16_t ___msgType0, MessageBase_t3584795631 * ___msg1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		LocalClient_t1191103892 * L_0 = __this->get_m_LocalClient_19();
		int16_t L_1 = ___msgType0;
		MessageBase_t3584795631 * L_2 = ___msg1;
		NullCheck(L_0);
		LocalClient_InvokeHandlerOnClient_m480158021(L_0, L_1, L_2, 0, /*hidden argument*/NULL);
		V_0 = (bool)1;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Networking.ULocalConnectionToClient::SendUnreliable(System.Int16,UnityEngine.Networking.MessageBase)
extern "C" IL2CPP_METHOD_ATTR bool ULocalConnectionToClient_SendUnreliable_m3913064095 (ULocalConnectionToClient_t1858816613 * __this, int16_t ___msgType0, MessageBase_t3584795631 * ___msg1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		LocalClient_t1191103892 * L_0 = __this->get_m_LocalClient_19();
		int16_t L_1 = ___msgType0;
		MessageBase_t3584795631 * L_2 = ___msg1;
		NullCheck(L_0);
		LocalClient_InvokeHandlerOnClient_m480158021(L_0, L_1, L_2, 1, /*hidden argument*/NULL);
		V_0 = (bool)1;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Networking.ULocalConnectionToClient::SendByChannel(System.Int16,UnityEngine.Networking.MessageBase,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool ULocalConnectionToClient_SendByChannel_m1636964758 (ULocalConnectionToClient_t1858816613 * __this, int16_t ___msgType0, MessageBase_t3584795631 * ___msg1, int32_t ___channelId2, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		LocalClient_t1191103892 * L_0 = __this->get_m_LocalClient_19();
		int16_t L_1 = ___msgType0;
		MessageBase_t3584795631 * L_2 = ___msg1;
		int32_t L_3 = ___channelId2;
		NullCheck(L_0);
		LocalClient_InvokeHandlerOnClient_m480158021(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = (bool)1;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.Networking.ULocalConnectionToClient::SendBytes(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool ULocalConnectionToClient_SendBytes_m3166529203 (ULocalConnectionToClient_t1858816613 * __this, ByteU5BU5D_t4116647657* ___bytes0, int32_t ___numBytes1, int32_t ___channelId2, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		LocalClient_t1191103892 * L_0 = __this->get_m_LocalClient_19();
		ByteU5BU5D_t4116647657* L_1 = ___bytes0;
		int32_t L_2 = ___channelId2;
		NullCheck(L_0);
		LocalClient_InvokeBytesOnClient_m4098541965(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = (bool)1;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Networking.ULocalConnectionToClient::SendWriter(UnityEngine.Networking.NetworkWriter,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool ULocalConnectionToClient_SendWriter_m2957537543 (ULocalConnectionToClient_t1858816613 * __this, NetworkWriter_t3928387057 * ___writer0, int32_t ___channelId1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		LocalClient_t1191103892 * L_0 = __this->get_m_LocalClient_19();
		NetworkWriter_t3928387057 * L_1 = ___writer0;
		NullCheck(L_1);
		ByteU5BU5D_t4116647657* L_2 = NetworkWriter_AsArray_m3793159246(L_1, /*hidden argument*/NULL);
		int32_t L_3 = ___channelId1;
		NullCheck(L_0);
		LocalClient_InvokeBytesOnClient_m4098541965(L_0, L_2, L_3, /*hidden argument*/NULL);
		V_0 = (bool)1;
		goto IL_001a;
	}

IL_001a:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.Networking.ULocalConnectionToClient::GetStatsOut(System.Int32&,System.Int32&,System.Int32&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR void ULocalConnectionToClient_GetStatsOut_m3661569277 (ULocalConnectionToClient_t1858816613 * __this, int32_t* ___numMsgs0, int32_t* ___numBufferedMsgs1, int32_t* ___numBytes2, int32_t* ___lastBufferedPerSecond3, const RuntimeMethod* method)
{
	{
		int32_t* L_0 = ___numMsgs0;
		*((int32_t*)L_0) = (int32_t)0;
		int32_t* L_1 = ___numBufferedMsgs1;
		*((int32_t*)L_1) = (int32_t)0;
		int32_t* L_2 = ___numBytes2;
		*((int32_t*)L_2) = (int32_t)0;
		int32_t* L_3 = ___lastBufferedPerSecond3;
		*((int32_t*)L_3) = (int32_t)0;
		return;
	}
}
// System.Void UnityEngine.Networking.ULocalConnectionToClient::GetStatsIn(System.Int32&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR void ULocalConnectionToClient_GetStatsIn_m2137886024 (ULocalConnectionToClient_t1858816613 * __this, int32_t* ___numMsgs0, int32_t* ___numBytes1, const RuntimeMethod* method)
{
	{
		int32_t* L_0 = ___numMsgs0;
		*((int32_t*)L_0) = (int32_t)0;
		int32_t* L_1 = ___numBytes1;
		*((int32_t*)L_1) = (int32_t)0;
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
// System.Void UnityEngine.Networking.ULocalConnectionToServer::.ctor(UnityEngine.Networking.NetworkServer)
extern "C" IL2CPP_METHOD_ATTR void ULocalConnectionToServer__ctor_m130825988 (ULocalConnectionToServer_t1112427013 * __this, NetworkServer_t2920297688 * ___localServer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ULocalConnectionToServer__ctor_m130825988_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkConnection__ctor_m3056801716(__this, /*hidden argument*/NULL);
		((NetworkConnection_t2705220091 *)__this)->set_address_14(_stringLiteral1035402498);
		NetworkServer_t2920297688 * L_0 = ___localServer0;
		__this->set_m_LocalServer_19(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Networking.ULocalConnectionToServer::Send(System.Int16,UnityEngine.Networking.MessageBase)
extern "C" IL2CPP_METHOD_ATTR bool ULocalConnectionToServer_Send_m2280394388 (ULocalConnectionToServer_t1112427013 * __this, int16_t ___msgType0, MessageBase_t3584795631 * ___msg1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		NetworkServer_t2920297688 * L_0 = __this->get_m_LocalServer_19();
		int16_t L_1 = ___msgType0;
		MessageBase_t3584795631 * L_2 = ___msg1;
		NullCheck(L_0);
		bool L_3 = NetworkServer_InvokeHandlerOnServer_m645830171(L_0, __this, L_1, L_2, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.Networking.ULocalConnectionToServer::SendUnreliable(System.Int16,UnityEngine.Networking.MessageBase)
extern "C" IL2CPP_METHOD_ATTR bool ULocalConnectionToServer_SendUnreliable_m2616796310 (ULocalConnectionToServer_t1112427013 * __this, int16_t ___msgType0, MessageBase_t3584795631 * ___msg1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		NetworkServer_t2920297688 * L_0 = __this->get_m_LocalServer_19();
		int16_t L_1 = ___msgType0;
		MessageBase_t3584795631 * L_2 = ___msg1;
		NullCheck(L_0);
		bool L_3 = NetworkServer_InvokeHandlerOnServer_m645830171(L_0, __this, L_1, L_2, 1, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.Networking.ULocalConnectionToServer::SendByChannel(System.Int16,UnityEngine.Networking.MessageBase,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool ULocalConnectionToServer_SendByChannel_m2848768719 (ULocalConnectionToServer_t1112427013 * __this, int16_t ___msgType0, MessageBase_t3584795631 * ___msg1, int32_t ___channelId2, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		NetworkServer_t2920297688 * L_0 = __this->get_m_LocalServer_19();
		int16_t L_1 = ___msgType0;
		MessageBase_t3584795631 * L_2 = ___msg1;
		int32_t L_3 = ___channelId2;
		NullCheck(L_0);
		bool L_4 = NetworkServer_InvokeHandlerOnServer_m645830171(L_0, __this, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean UnityEngine.Networking.ULocalConnectionToServer::SendBytes(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool ULocalConnectionToServer_SendBytes_m3941987877 (ULocalConnectionToServer_t1112427013 * __this, ByteU5BU5D_t4116647657* ___bytes0, int32_t ___numBytes1, int32_t ___channelId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ULocalConnectionToServer_SendBytes_m3941987877_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = ___numBytes1;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t3573890335_il2cpp_TypeInfo_var);
		bool L_1 = LogFilter_get_logError_m2939562087(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral2061384552, /*hidden argument*/NULL);
	}

IL_001f:
	{
		V_0 = (bool)0;
		goto IL_003b;
	}

IL_0026:
	{
		NetworkServer_t2920297688 * L_2 = __this->get_m_LocalServer_19();
		ByteU5BU5D_t4116647657* L_3 = ___bytes0;
		int32_t L_4 = ___numBytes1;
		int32_t L_5 = ___channelId2;
		NullCheck(L_2);
		bool L_6 = NetworkServer_InvokeBytes_m3498919961(L_2, __this, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_003b;
	}

IL_003b:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Boolean UnityEngine.Networking.ULocalConnectionToServer::SendWriter(UnityEngine.Networking.NetworkWriter,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool ULocalConnectionToServer_SendWriter_m1904869898 (ULocalConnectionToServer_t1112427013 * __this, NetworkWriter_t3928387057 * ___writer0, int32_t ___channelId1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		NetworkServer_t2920297688 * L_0 = __this->get_m_LocalServer_19();
		NetworkWriter_t3928387057 * L_1 = ___writer0;
		NullCheck(L_1);
		ByteU5BU5D_t4116647657* L_2 = NetworkWriter_AsArray_m3793159246(L_1, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_3 = ___writer0;
		NullCheck(L_3);
		ByteU5BU5D_t4116647657* L_4 = NetworkWriter_AsArray_m3793159246(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = ___channelId1;
		NullCheck(L_0);
		bool L_6 = NetworkServer_InvokeBytes_m3498919961(L_0, __this, L_2, (((int16_t)((int16_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))))), L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Void UnityEngine.Networking.ULocalConnectionToServer::GetStatsOut(System.Int32&,System.Int32&,System.Int32&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR void ULocalConnectionToServer_GetStatsOut_m2678485750 (ULocalConnectionToServer_t1112427013 * __this, int32_t* ___numMsgs0, int32_t* ___numBufferedMsgs1, int32_t* ___numBytes2, int32_t* ___lastBufferedPerSecond3, const RuntimeMethod* method)
{
	{
		int32_t* L_0 = ___numMsgs0;
		*((int32_t*)L_0) = (int32_t)0;
		int32_t* L_1 = ___numBufferedMsgs1;
		*((int32_t*)L_1) = (int32_t)0;
		int32_t* L_2 = ___numBytes2;
		*((int32_t*)L_2) = (int32_t)0;
		int32_t* L_3 = ___lastBufferedPerSecond3;
		*((int32_t*)L_3) = (int32_t)0;
		return;
	}
}
// System.Void UnityEngine.Networking.ULocalConnectionToServer::GetStatsIn(System.Int32&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR void ULocalConnectionToServer_GetStatsIn_m2164877839 (ULocalConnectionToServer_t1112427013 * __this, int32_t* ___numMsgs0, int32_t* ___numBytes1, const RuntimeMethod* method)
{
	{
		int32_t* L_0 = ___numMsgs0;
		*((int32_t*)L_0) = (int32_t)0;
		int32_t* L_1 = ___numBytes1;
		*((int32_t*)L_1) = (int32_t)0;
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
// System.Void UnityEngine.Networking.UnSpawnDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnSpawnDelegate__ctor_m1746387355 (UnSpawnDelegate_t851741660 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Networking.UnSpawnDelegate::Invoke(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void UnSpawnDelegate_Invoke_m948252931 (UnSpawnDelegate_t851741660 * __this, GameObject_t1113636619 * ___spawned0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnSpawnDelegate_Invoke_m948252931((UnSpawnDelegate_t851741660 *)__this->get_prev_9(), ___spawned0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, GameObject_t1113636619 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___spawned0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, GameObject_t1113636619 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___spawned0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< GameObject_t1113636619 * >::Invoke(targetMethod, targetThis, ___spawned0);
					else
						GenericVirtActionInvoker1< GameObject_t1113636619 * >::Invoke(targetMethod, targetThis, ___spawned0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< GameObject_t1113636619 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___spawned0);
					else
						VirtActionInvoker1< GameObject_t1113636619 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___spawned0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, GameObject_t1113636619 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___spawned0, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___spawned0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___spawned0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___spawned0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___spawned0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (GameObject_t1113636619 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___spawned0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Networking.UnSpawnDelegate::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnSpawnDelegate_BeginInvoke_m2351730414 (UnSpawnDelegate_t851741660 * __this, GameObject_t1113636619 * ___spawned0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___spawned0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Networking.UnSpawnDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnSpawnDelegate_EndInvoke_m1927378850 (UnSpawnDelegate_t851741660 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
