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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// ARReferenceImagesSet
struct ARReferenceImagesSet_t4271437859;
// ARReferenceObjectsSetAsset
struct ARReferenceObjectsSetAsset_t1991292594;
// DrawLines
struct DrawLines_t4192295860;
// HintController
struct HintController_t1002117908;
// ModelController
struct ModelController_t213260968;
// ModelController/ResetHandler
struct ResetHandler_t86549611;
// ModelController/SetModelActiveHandler
struct SetModelActiveHandler_t2568636180;
// ModelController/SetModelInactiveHandler
struct SetModelInactiveHandler_t522955110;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// System.Action`1<UnityEngine.XR.iOS.ARWorldMap>
struct Action_1_t2413258402;
// System.Action`2<System.IntPtr,System.IntPtr>
struct Action_2_t1399479586;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Single,System.Collections.DictionaryEntry>
struct Transform_1_t295322967;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Networking.NetworkBehaviour/Invoker>
struct Dictionary_2_t100189446;
// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_t1182523073;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// System.Collections.Generic.List`1<UnityEngine.XR.iOS.UnityARVideoFormat>
struct List_1_t3416529523;
// System.Delegate
struct Delegate_t1188392813;
// System.DelegateData
struct DelegateData_t1677132599;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IO.MemoryStream
struct MemoryStream_t94973147;
// System.IO.Stream
struct Stream_t1273022909;
// System.Int16[]
struct Int16U5BU5D_t3686840178;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t3197753202;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t3040401154;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t274213469;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Text.EncodingInfo[]
struct EncodingInfoU5BU5D_t2292552583;
// System.Void
struct Void_t1185182177;
// UnityARCameraManager
struct UnityARCameraManager_t4002280589;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.CanvasGroup
struct CanvasGroup_t4083511760;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.LineRenderer
struct LineRenderer_t3154350270;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t3299519057;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.XR.iOS.ARFaceAnchor
struct ARFaceAnchor_t1844206636;
// UnityEngine.XR.iOS.ARFaceAnchor/DictionaryVisitorHandler
struct DictionaryVisitorHandler_t414487210;
// UnityEngine.XR.iOS.ARFaceGeometry
struct ARFaceGeometry_t5139606;
// UnityEngine.XR.iOS.ARPlaneAnchor
struct ARPlaneAnchor_t2049372221;
// UnityEngine.XR.iOS.ARPlaneGeometry
struct ARPlaneGeometry_t1169415986;
// UnityEngine.XR.iOS.ARReferenceObject
struct ARReferenceObject_t1065366714;
// UnityEngine.XR.iOS.ARWorldMap
struct ARWorldMap_t2240790807;
// UnityEngine.XR.iOS.UnityARDirectionalLightEstimate
struct UnityARDirectionalLightEstimate_t2924556994;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct UnityARSessionNativeInterface_t3929719369;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded
struct ARAnchorAdded_t1608557165;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved
struct ARAnchorRemoved_t4030593004;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated
struct ARAnchorUpdated_t3113222537;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/AREnvironmentProbeAnchorAdded
struct AREnvironmentProbeAnchorAdded_t3774282462;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/AREnvironmentProbeAnchorRemoved
struct AREnvironmentProbeAnchorRemoved_t1734228730;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/AREnvironmentProbeAnchorUpdated
struct AREnvironmentProbeAnchorUpdated_t3203876919;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorAdded
struct ARFaceAnchorAdded_t3526051790;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorRemoved
struct ARFaceAnchorRemoved_t2550278937;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorUpdated
struct ARFaceAnchorUpdated_t3258688950;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate
struct ARFrameUpdate_t1157215840;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARImageAnchorAdded
struct ARImageAnchorAdded_t763367172;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARImageAnchorRemoved
struct ARImageAnchorRemoved_t841752569;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARImageAnchorUpdated
struct ARImageAnchorUpdated_t1988379239;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARObjectAnchorAdded
struct ARObjectAnchorAdded_t7898010;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARObjectAnchorRemoved
struct ARObjectAnchorRemoved_t3027817546;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARObjectAnchorUpdated
struct ARObjectAnchorUpdated_t2167628997;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback
struct ARSessionCallback_t3772093212;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed
struct ARSessionFailed_t2125002991;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionLocalizeCallback
struct ARSessionLocalizeCallback_t3284060032;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged
struct ARSessionTrackingChanged_t923029411;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded
struct ARUserAnchorAdded_t1851120876;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved
struct ARUserAnchorRemoved_t23344545;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated
struct ARUserAnchorUpdated_t4007601678;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded
struct internal_ARAnchorAdded_t1565083332;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved
struct internal_ARAnchorRemoved_t3371657877;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated
struct internal_ARAnchorUpdated_t2645242205;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_AREnvironmentProbeAnchorAdded
struct internal_AREnvironmentProbeAnchorAdded_t1786467930;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_AREnvironmentProbeAnchorRemoved
struct internal_AREnvironmentProbeAnchorRemoved_t3912910743;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_AREnvironmentProbeAnchorUpdated
struct internal_AREnvironmentProbeAnchorUpdated_t3576551915;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorAdded
struct internal_ARFaceAnchorAdded_t1021040265;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorRemoved
struct internal_ARFaceAnchorRemoved_t2563439402;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorUpdated
struct internal_ARFaceAnchorUpdated_t3423900432;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate
struct internal_ARFrameUpdate_t3254989823;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARImageAnchorAdded
struct internal_ARImageAnchorAdded_t958088978;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARImageAnchorRemoved
struct internal_ARImageAnchorRemoved_t1751104571;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARImageAnchorUpdated
struct internal_ARImageAnchorUpdated_t294417830;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARObjectAnchorAdded
struct internal_ARObjectAnchorAdded_t1222097505;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARObjectAnchorRemoved
struct internal_ARObjectAnchorRemoved_t1225376916;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARObjectAnchorUpdated
struct internal_ARObjectAnchorUpdated_t3492445690;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged
struct internal_ARSessionTrackingChanged_t1988849735;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded
struct internal_ARUserAnchorAdded_t3285282493;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved
struct internal_ARUserAnchorRemoved_t386858594;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated
struct internal_ARUserAnchorUpdated_t3964727538;
// UnityEngine.XR.iOS.UnityARVideoFormat[]
struct UnityARVideoFormatU5BU5D_t3086264048;
// UnityEngine.XR.iOS.Utils.SerializableVector4
struct SerializableVector4_t2739337940;
// UnityEngine.XR.iOS.Utils.serializableARKitInit
struct serializableARKitInit_t3839227232;
// UnityEngine.XR.iOS.Utils.serializableARSessionConfiguration
struct serializableARSessionConfiguration_t30565192;
// UnityEngine.XR.iOS.Utils.serializableFaceGeometry
struct serializableFaceGeometry_t1893768467;
// UnityEngine.XR.iOS.Utils.serializableFromEditorMessage
struct serializableFromEditorMessage_t2731251371;
// UnityEngine.XR.iOS.Utils.serializablePlaneGeometry
struct serializablePlaneGeometry_t3471745378;
// UnityEngine.XR.iOS.Utils.serializablePointCloud
struct serializablePointCloud_t4241265545;
// UnityEngine.XR.iOS.Utils.serializableSHC
struct serializableSHC_t226029808;
// UnityEngine.XR.iOS.Utils.serializableUnityARCamera
struct serializableUnityARCamera_t1848993995;
// UnityEngine.XR.iOS.Utils.serializableUnityARFaceAnchor
struct serializableUnityARFaceAnchor_t1413500457;
// UnityEngine.XR.iOS.Utils.serializableUnityARLightData
struct serializableUnityARLightData_t3029229948;
// UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4
struct serializableUnityARMatrix4x4_t255097097;
// UnityEngine.XR.iOS.Utils.serializableUnityARPlaneAnchor
struct serializableUnityARPlaneAnchor_t3965207599;
// UnityEngine.XR.iOS.VideoFormatEnumerator
struct VideoFormatEnumerator_t3131638505;
// UnityEngine.XR.iOS.serializableARReferenceObject
struct serializableARReferenceObject_t2711648110;
// UnityEngine.XR.iOS.serializableARWorldMap
struct serializableARWorldMap_t2514323794;
// UnityEyeManager
struct UnityEyeManager_t3949445033;
// UnityPointCloudExample
struct UnityPointCloudExample_t3649008995;
// UpdateWorldMappingStatus
struct UpdateWorldMappingStatus_t2738391865;
// VideoFormatButton
struct VideoFormatButton_t1937817916;
// VideoFormatButton/VideoFormatButtonPressed
struct VideoFormatButtonPressed_t1187798507;
// VideoFormatsExample
struct VideoFormatsExample_t2303262312;
// VirtualImageController
struct VirtualImageController_t1421167262;
// Visible
struct Visible_t788833082;
// WorldMapManager
struct WorldMapManager_t2538599596;

extern RuntimeClass* ARFaceAnchorAdded_t3526051790_il2cpp_TypeInfo_var;
extern RuntimeClass* ARFaceAnchorRemoved_t2550278937_il2cpp_TypeInfo_var;
extern RuntimeClass* ARFaceAnchorUpdated_t3258688950_il2cpp_TypeInfo_var;
extern RuntimeClass* ARFrameUpdate_t1157215840_il2cpp_TypeInfo_var;
extern RuntimeClass* ARTrackingStateReason_t2348933773_il2cpp_TypeInfo_var;
extern RuntimeClass* ARTrackingState_t3182235352_il2cpp_TypeInfo_var;
extern RuntimeClass* ARWorldMappingStatus_t1606355445_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t2413258402_il2cpp_TypeInfo_var;
extern RuntimeClass* BinaryFormatter_t3197753202_il2cpp_TypeInfo_var;
extern RuntimeClass* BitConverter_t3118986983_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* Encoding_t1523322056_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2585711361_il2cpp_TypeInfo_var;
extern RuntimeClass* MemoryStream_t94973147_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Path_t1605229823_il2cpp_TypeInfo_var;
extern RuntimeClass* ResetHandler_t86549611_il2cpp_TypeInfo_var;
extern RuntimeClass* SerializableVector4_t2739337940_il2cpp_TypeInfo_var;
extern RuntimeClass* SingleU5BU5D_t1444911251_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityARDirectionalLightEstimate_t2924556994_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityARVideoFormat_t1944454781_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector4_t3319028937_il2cpp_TypeInfo_var;
extern RuntimeClass* VideoFormatButtonPressed_t1187798507_il2cpp_TypeInfo_var;
extern RuntimeClass* VideoFormatButton_t1937817916_il2cpp_TypeInfo_var;
extern RuntimeClass* serializableARReferenceObject_t2711648110_il2cpp_TypeInfo_var;
extern RuntimeClass* serializableARSessionConfiguration_t30565192_il2cpp_TypeInfo_var;
extern RuntimeClass* serializableARWorldMap_t2514323794_il2cpp_TypeInfo_var;
extern RuntimeClass* serializableFaceGeometry_t1893768467_il2cpp_TypeInfo_var;
extern RuntimeClass* serializablePlaneGeometry_t3471745378_il2cpp_TypeInfo_var;
extern RuntimeClass* serializablePointCloud_t4241265545_il2cpp_TypeInfo_var;
extern RuntimeClass* serializableSHC_t226029808_il2cpp_TypeInfo_var;
extern RuntimeClass* serializableUnityARCamera_t1848993995_il2cpp_TypeInfo_var;
extern RuntimeClass* serializableUnityARFaceAnchor_t1413500457_il2cpp_TypeInfo_var;
extern RuntimeClass* serializableUnityARLightData_t3029229948_il2cpp_TypeInfo_var;
extern RuntimeClass* serializableUnityARMatrix4x4_t255097097_il2cpp_TypeInfo_var;
extern RuntimeClass* serializableUnityARPlaneAnchor_t3965207599_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1432570861;
extern String_t* _stringLiteral1652116954;
extern String_t* _stringLiteral2128525251;
extern String_t* _stringLiteral2159623334;
extern String_t* _stringLiteral3005588141;
extern String_t* _stringLiteral3452614528;
extern String_t* _stringLiteral3452614616;
extern String_t* _stringLiteral3515884654;
extern String_t* _stringLiteral3550324993;
extern String_t* _stringLiteral3573715958;
extern String_t* _stringLiteral3723103738;
extern String_t* _stringLiteral3792478507;
extern String_t* _stringLiteral4108509802;
extern String_t* _stringLiteral51204818;
extern String_t* _stringLiteral539891790;
extern String_t* _stringLiteral809606867;
extern const RuntimeMethod* Action_1__ctor_m941087542_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisCanvasGroup_t4083511760_m1030459026_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m510309855_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2987439075_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3655906576_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisDrawLines_t4192295860_m2352987869_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisVideoFormatButton_t1937817916_m1994409976_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2765963565_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m3413760873_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3861397086_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m3052194546_RuntimeMethod_var;
extern const RuntimeMethod* ObjectSerializationExtension_Deserialize_TisInt32U5BU5D_t385246372_m1366516915_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m3215236302_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var;
extern const RuntimeMethod* UnityEyeManager_FaceAdded_m743662964_RuntimeMethod_var;
extern const RuntimeMethod* UnityEyeManager_FaceRemoved_m678205404_RuntimeMethod_var;
extern const RuntimeMethod* UnityEyeManager_FaceUpdated_m35923746_RuntimeMethod_var;
extern const RuntimeMethod* UnityPointCloudExample_ARFrameUpdated_m3531421433_RuntimeMethod_var;
extern const RuntimeMethod* UpdateWorldMappingStatus_CheckWorldMapStatus_m3083395961_RuntimeMethod_var;
extern const RuntimeMethod* VideoFormatsExample_ExampletButtonPressed_m2588664126_RuntimeMethod_var;
extern const RuntimeMethod* VirtualImageController_HideLineAndVF_m1404605849_RuntimeMethod_var;
extern const RuntimeMethod* WorldMapManager_OnFrameUpdate_m3236777077_RuntimeMethod_var;
extern const RuntimeMethod* WorldMapManager_OnWorldMapSerialized_m286052464_RuntimeMethod_var;
extern const RuntimeMethod* WorldMapManager_OnWorldMap_m528558470_RuntimeMethod_var;
extern const uint32_t ObjectSerializationExtension_SerializeToByteArray_m28764994_MetadataUsageId;
extern const uint32_t SerializableVector4_ToString_m1782193711_MetadataUsageId;
extern const uint32_t SerializableVector4_op_Implicit_m1552594547_MetadataUsageId;
extern const uint32_t UnityEyeManager_Start_m3569568970_MetadataUsageId;
extern const uint32_t UnityPointCloudExample_Start_m4202814548_MetadataUsageId;
extern const uint32_t UnityPointCloudExample_Update_m3072589646_MetadataUsageId;
extern const uint32_t UpdateWorldMappingStatus_CheckWorldMapStatus_m3083395961_MetadataUsageId;
extern const uint32_t UpdateWorldMappingStatus_OnDestroy_m1257722125_MetadataUsageId;
extern const uint32_t UpdateWorldMappingStatus_Start_m2506491011_MetadataUsageId;
extern const uint32_t VideoFormatButtonPressed_BeginInvoke_m3331672980_MetadataUsageId;
extern const uint32_t VideoFormatButton_ButtonPressed_m1715857364_MetadataUsageId;
extern const uint32_t VideoFormatButton_Populate_m915370135_MetadataUsageId;
extern const uint32_t VideoFormatButton_add_FormatButtonPressedEvent_m1863116585_MetadataUsageId;
extern const uint32_t VideoFormatButton_remove_FormatButtonPressedEvent_m3255418780_MetadataUsageId;
extern const uint32_t VideoFormatEnumerator_BeginInvoke_m3988644263_MetadataUsageId;
extern const uint32_t VideoFormatsExample_ExampletButtonPressed_m2588664126_MetadataUsageId;
extern const uint32_t VideoFormatsExample_OnDestroy_m541603283_MetadataUsageId;
extern const uint32_t VideoFormatsExample_PopulateVideoFormatButtons_m595526008_MetadataUsageId;
extern const uint32_t VideoFormatsExample_Start_m1615238214_MetadataUsageId;
extern const uint32_t VirtualImageController_Awake_m3463709440_MetadataUsageId;
extern const uint32_t VirtualImageController_ShowImageOrNot_m3944985682_MetadataUsageId;
extern const uint32_t VirtualImageController_Update_m3074897781_MetadataUsageId;
extern const uint32_t Visible_OnClick_m1437255289_MetadataUsageId;
extern const uint32_t WorldMapManager_LoadSerialized_m3529669931_MetadataUsageId;
extern const uint32_t WorldMapManager_Load_m1471745247_MetadataUsageId;
extern const uint32_t WorldMapManager_OnFrameUpdate_m3236777077_MetadataUsageId;
extern const uint32_t WorldMapManager_OnWorldMapSerialized_m286052464_MetadataUsageId;
extern const uint32_t WorldMapManager_OnWorldMap_m528558470_MetadataUsageId;
extern const uint32_t WorldMapManager_SaveSerialized_m1057740694_MetadataUsageId;
extern const uint32_t WorldMapManager_Save_m1685066494_MetadataUsageId;
extern const uint32_t WorldMapManager_Start_m1381697079_MetadataUsageId;
extern const uint32_t WorldMapManager_get_path_m263249698_MetadataUsageId;
extern const uint32_t WorldMapManager_get_session_m4054597902_MetadataUsageId;
extern const uint32_t serializableARReferenceObject_op_Implicit_m2151343210_MetadataUsageId;
extern const uint32_t serializableARSessionConfiguration_op_Implicit_m1090234578_MetadataUsageId;
extern const uint32_t serializableARWorldMap_op_Implicit_m1798102707_MetadataUsageId;
extern const uint32_t serializableFaceGeometry_get_TexCoords_m3196262590_MetadataUsageId;
extern const uint32_t serializableFaceGeometry_get_TriangleIndices_m3964555112_MetadataUsageId;
extern const uint32_t serializableFaceGeometry_get_Vertices_m3775952375_MetadataUsageId;
extern const uint32_t serializableFaceGeometry_op_Implicit_m1662172422_MetadataUsageId;
extern const uint32_t serializablePlaneGeometry_get_BoundaryVertices_m2706946419_MetadataUsageId;
extern const uint32_t serializablePlaneGeometry_get_TexCoords_m2833194137_MetadataUsageId;
extern const uint32_t serializablePlaneGeometry_get_TriangleIndices_m1206890056_MetadataUsageId;
extern const uint32_t serializablePlaneGeometry_get_Vertices_m372421006_MetadataUsageId;
extern const uint32_t serializablePlaneGeometry_op_Implicit_m2849839976_MetadataUsageId;
extern const uint32_t serializablePointCloud_op_Implicit_m1868975265_MetadataUsageId;
extern const uint32_t serializablePointCloud_op_Implicit_m3100839470_MetadataUsageId;
extern const uint32_t serializableSHC_op_Implicit_m142774640_MetadataUsageId;
extern const uint32_t serializableSHC_op_Implicit_m657028205_MetadataUsageId;
extern const uint32_t serializableUnityARCamera_op_Implicit_m3499307499_MetadataUsageId;
extern const uint32_t serializableUnityARFaceAnchor_op_Implicit_m174134999_MetadataUsageId;
extern const uint32_t serializableUnityARLightData__ctor_m3747442693_MetadataUsageId;
extern const uint32_t serializableUnityARLightData_op_Implicit_m1562974187_MetadataUsageId;
extern const uint32_t serializableUnityARLightData_op_Implicit_m864326423_MetadataUsageId;
extern const uint32_t serializableUnityARMatrix4x4_op_Implicit_m3916569269_MetadataUsageId;
extern const uint32_t serializableUnityARMatrix4x4_op_Implicit_m4130895361_MetadataUsageId;
extern const uint32_t serializableUnityARPlaneAnchor_op_Implicit_m1833342500_MetadataUsageId;
struct Vector3_t3722313464 ;

struct ByteU5BU5D_t4116647657;
struct Int32U5BU5D_t385246372;
struct ObjectU5BU5D_t2843939325;
struct SingleU5BU5D_t1444911251;
struct Vector2U5BU5D_t1457185986;
struct Vector3U5BU5D_t1718750761;


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
#ifndef DICTIONARY_2_T1182523073_H
#define DICTIONARY_2_T1182523073_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct  Dictionary_2_t1182523073  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	SingleU5BU5D_t1444911251* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1182523073, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1182523073, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1182523073, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1182523073, ___valueSlots_7)); }
	inline SingleU5BU5D_t1444911251* get_valueSlots_7() const { return ___valueSlots_7; }
	inline SingleU5BU5D_t1444911251** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(SingleU5BU5D_t1444911251* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1182523073, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1182523073, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1182523073, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1182523073, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1182523073, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1182523073, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1182523073, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1182523073_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t295322967 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1182523073_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t295322967 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t295322967 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t295322967 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1182523073_H
#ifndef LIST_1_T2585711361_H
#define LIST_1_T2585711361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_t2585711361  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_t3328599146* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____items_1)); }
	inline GameObjectU5BU5D_t3328599146* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_t3328599146** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_t3328599146* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2585711361_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	GameObjectU5BU5D_t3328599146* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2585711361_StaticFields, ___EmptyArray_4)); }
	inline GameObjectU5BU5D_t3328599146* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(GameObjectU5BU5D_t3328599146* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2585711361_H
#ifndef LIST_1_T3416529523_H
#define LIST_1_T3416529523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.XR.iOS.UnityARVideoFormat>
struct  List_1_t3416529523  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UnityARVideoFormatU5BU5D_t3086264048* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3416529523, ____items_1)); }
	inline UnityARVideoFormatU5BU5D_t3086264048* get__items_1() const { return ____items_1; }
	inline UnityARVideoFormatU5BU5D_t3086264048** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UnityARVideoFormatU5BU5D_t3086264048* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3416529523, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3416529523, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3416529523_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	UnityARVideoFormatU5BU5D_t3086264048* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3416529523_StaticFields, ___EmptyArray_4)); }
	inline UnityARVideoFormatU5BU5D_t3086264048* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline UnityARVideoFormatU5BU5D_t3086264048** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(UnityARVideoFormatU5BU5D_t3086264048* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3416529523_H
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public RuntimeObject
{
public:

public:
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_0)); }
	inline Stream_t1273022909 * get_Null_0() const { return ___Null_0; }
	inline Stream_t1273022909 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_t1273022909 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
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
#ifndef OBJECTSERIALIZATIONEXTENSION_T1997214439_H
#define OBJECTSERIALIZATIONEXTENSION_T1997214439_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.Utils.ObjectSerializationExtension
struct  ObjectSerializationExtension_t1997214439  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTSERIALIZATIONEXTENSION_T1997214439_H
#ifndef SERIALIZABLEVECTOR4_T2739337940_H
#define SERIALIZABLEVECTOR4_T2739337940_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.Utils.SerializableVector4
struct  SerializableVector4_t2739337940  : public RuntimeObject
{
public:
	// System.Single UnityEngine.XR.iOS.Utils.SerializableVector4::x
	float ___x_0;
	// System.Single UnityEngine.XR.iOS.Utils.SerializableVector4::y
	float ___y_1;
	// System.Single UnityEngine.XR.iOS.Utils.SerializableVector4::z
	float ___z_2;
	// System.Single UnityEngine.XR.iOS.Utils.SerializableVector4::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(SerializableVector4_t2739337940, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(SerializableVector4_t2739337940, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(SerializableVector4_t2739337940, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(SerializableVector4_t2739337940, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEVECTOR4_T2739337940_H
#ifndef SERIALIZABLEFACEGEOMETRY_T1893768467_H
#define SERIALIZABLEFACEGEOMETRY_T1893768467_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.Utils.serializableFaceGeometry
struct  serializableFaceGeometry_t1893768467  : public RuntimeObject
{
public:
	// System.Byte[] UnityEngine.XR.iOS.Utils.serializableFaceGeometry::vertices
	ByteU5BU5D_t4116647657* ___vertices_0;
	// System.Byte[] UnityEngine.XR.iOS.Utils.serializableFaceGeometry::texCoords
	ByteU5BU5D_t4116647657* ___texCoords_1;
	// System.Byte[] UnityEngine.XR.iOS.Utils.serializableFaceGeometry::triIndices
	ByteU5BU5D_t4116647657* ___triIndices_2;

public:
	inline static int32_t get_offset_of_vertices_0() { return static_cast<int32_t>(offsetof(serializableFaceGeometry_t1893768467, ___vertices_0)); }
	inline ByteU5BU5D_t4116647657* get_vertices_0() const { return ___vertices_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_vertices_0() { return &___vertices_0; }
	inline void set_vertices_0(ByteU5BU5D_t4116647657* value)
	{
		___vertices_0 = value;
		Il2CppCodeGenWriteBarrier((&___vertices_0), value);
	}

	inline static int32_t get_offset_of_texCoords_1() { return static_cast<int32_t>(offsetof(serializableFaceGeometry_t1893768467, ___texCoords_1)); }
	inline ByteU5BU5D_t4116647657* get_texCoords_1() const { return ___texCoords_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_texCoords_1() { return &___texCoords_1; }
	inline void set_texCoords_1(ByteU5BU5D_t4116647657* value)
	{
		___texCoords_1 = value;
		Il2CppCodeGenWriteBarrier((&___texCoords_1), value);
	}

	inline static int32_t get_offset_of_triIndices_2() { return static_cast<int32_t>(offsetof(serializableFaceGeometry_t1893768467, ___triIndices_2)); }
	inline ByteU5BU5D_t4116647657* get_triIndices_2() const { return ___triIndices_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_triIndices_2() { return &___triIndices_2; }
	inline void set_triIndices_2(ByteU5BU5D_t4116647657* value)
	{
		___triIndices_2 = value;
		Il2CppCodeGenWriteBarrier((&___triIndices_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEFACEGEOMETRY_T1893768467_H
#ifndef SERIALIZABLEPLANEGEOMETRY_T3471745378_H
#define SERIALIZABLEPLANEGEOMETRY_T3471745378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.Utils.serializablePlaneGeometry
struct  serializablePlaneGeometry_t3471745378  : public RuntimeObject
{
public:
	// System.Byte[] UnityEngine.XR.iOS.Utils.serializablePlaneGeometry::vertices
	ByteU5BU5D_t4116647657* ___vertices_0;
	// System.Byte[] UnityEngine.XR.iOS.Utils.serializablePlaneGeometry::texCoords
	ByteU5BU5D_t4116647657* ___texCoords_1;
	// System.Byte[] UnityEngine.XR.iOS.Utils.serializablePlaneGeometry::triIndices
	ByteU5BU5D_t4116647657* ___triIndices_2;
	// System.Byte[] UnityEngine.XR.iOS.Utils.serializablePlaneGeometry::boundaryVertices
	ByteU5BU5D_t4116647657* ___boundaryVertices_3;

public:
	inline static int32_t get_offset_of_vertices_0() { return static_cast<int32_t>(offsetof(serializablePlaneGeometry_t3471745378, ___vertices_0)); }
	inline ByteU5BU5D_t4116647657* get_vertices_0() const { return ___vertices_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_vertices_0() { return &___vertices_0; }
	inline void set_vertices_0(ByteU5BU5D_t4116647657* value)
	{
		___vertices_0 = value;
		Il2CppCodeGenWriteBarrier((&___vertices_0), value);
	}

	inline static int32_t get_offset_of_texCoords_1() { return static_cast<int32_t>(offsetof(serializablePlaneGeometry_t3471745378, ___texCoords_1)); }
	inline ByteU5BU5D_t4116647657* get_texCoords_1() const { return ___texCoords_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_texCoords_1() { return &___texCoords_1; }
	inline void set_texCoords_1(ByteU5BU5D_t4116647657* value)
	{
		___texCoords_1 = value;
		Il2CppCodeGenWriteBarrier((&___texCoords_1), value);
	}

	inline static int32_t get_offset_of_triIndices_2() { return static_cast<int32_t>(offsetof(serializablePlaneGeometry_t3471745378, ___triIndices_2)); }
	inline ByteU5BU5D_t4116647657* get_triIndices_2() const { return ___triIndices_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_triIndices_2() { return &___triIndices_2; }
	inline void set_triIndices_2(ByteU5BU5D_t4116647657* value)
	{
		___triIndices_2 = value;
		Il2CppCodeGenWriteBarrier((&___triIndices_2), value);
	}

	inline static int32_t get_offset_of_boundaryVertices_3() { return static_cast<int32_t>(offsetof(serializablePlaneGeometry_t3471745378, ___boundaryVertices_3)); }
	inline ByteU5BU5D_t4116647657* get_boundaryVertices_3() const { return ___boundaryVertices_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_boundaryVertices_3() { return &___boundaryVertices_3; }
	inline void set_boundaryVertices_3(ByteU5BU5D_t4116647657* value)
	{
		___boundaryVertices_3 = value;
		Il2CppCodeGenWriteBarrier((&___boundaryVertices_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEPLANEGEOMETRY_T3471745378_H
#ifndef SERIALIZABLEPOINTCLOUD_T4241265545_H
#define SERIALIZABLEPOINTCLOUD_T4241265545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.Utils.serializablePointCloud
struct  serializablePointCloud_t4241265545  : public RuntimeObject
{
public:
	// System.Byte[] UnityEngine.XR.iOS.Utils.serializablePointCloud::pointCloudData
	ByteU5BU5D_t4116647657* ___pointCloudData_0;

public:
	inline static int32_t get_offset_of_pointCloudData_0() { return static_cast<int32_t>(offsetof(serializablePointCloud_t4241265545, ___pointCloudData_0)); }
	inline ByteU5BU5D_t4116647657* get_pointCloudData_0() const { return ___pointCloudData_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_pointCloudData_0() { return &___pointCloudData_0; }
	inline void set_pointCloudData_0(ByteU5BU5D_t4116647657* value)
	{
		___pointCloudData_0 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloudData_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEPOINTCLOUD_T4241265545_H
#ifndef SERIALIZABLESHC_T226029808_H
#define SERIALIZABLESHC_T226029808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.Utils.serializableSHC
struct  serializableSHC_t226029808  : public RuntimeObject
{
public:
	// System.Byte[] UnityEngine.XR.iOS.Utils.serializableSHC::shcData
	ByteU5BU5D_t4116647657* ___shcData_0;

public:
	inline static int32_t get_offset_of_shcData_0() { return static_cast<int32_t>(offsetof(serializableSHC_t226029808, ___shcData_0)); }
	inline ByteU5BU5D_t4116647657* get_shcData_0() const { return ___shcData_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_shcData_0() { return &___shcData_0; }
	inline void set_shcData_0(ByteU5BU5D_t4116647657* value)
	{
		___shcData_0 = value;
		Il2CppCodeGenWriteBarrier((&___shcData_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLESHC_T226029808_H
#ifndef SERIALIZABLEUNITYARFACEANCHOR_T1413500457_H
#define SERIALIZABLEUNITYARFACEANCHOR_T1413500457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.Utils.serializableUnityARFaceAnchor
struct  serializableUnityARFaceAnchor_t1413500457  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4 UnityEngine.XR.iOS.Utils.serializableUnityARFaceAnchor::worldTransform
	serializableUnityARMatrix4x4_t255097097 * ___worldTransform_0;
	// UnityEngine.XR.iOS.Utils.serializableFaceGeometry UnityEngine.XR.iOS.Utils.serializableUnityARFaceAnchor::faceGeometry
	serializableFaceGeometry_t1893768467 * ___faceGeometry_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Single> UnityEngine.XR.iOS.Utils.serializableUnityARFaceAnchor::arBlendShapes
	Dictionary_2_t1182523073 * ___arBlendShapes_2;
	// System.Byte[] UnityEngine.XR.iOS.Utils.serializableUnityARFaceAnchor::identifierStr
	ByteU5BU5D_t4116647657* ___identifierStr_3;
	// System.Boolean UnityEngine.XR.iOS.Utils.serializableUnityARFaceAnchor::isTracked
	bool ___isTracked_4;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(serializableUnityARFaceAnchor_t1413500457, ___worldTransform_0)); }
	inline serializableUnityARMatrix4x4_t255097097 * get_worldTransform_0() const { return ___worldTransform_0; }
	inline serializableUnityARMatrix4x4_t255097097 ** get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(serializableUnityARMatrix4x4_t255097097 * value)
	{
		___worldTransform_0 = value;
		Il2CppCodeGenWriteBarrier((&___worldTransform_0), value);
	}

	inline static int32_t get_offset_of_faceGeometry_1() { return static_cast<int32_t>(offsetof(serializableUnityARFaceAnchor_t1413500457, ___faceGeometry_1)); }
	inline serializableFaceGeometry_t1893768467 * get_faceGeometry_1() const { return ___faceGeometry_1; }
	inline serializableFaceGeometry_t1893768467 ** get_address_of_faceGeometry_1() { return &___faceGeometry_1; }
	inline void set_faceGeometry_1(serializableFaceGeometry_t1893768467 * value)
	{
		___faceGeometry_1 = value;
		Il2CppCodeGenWriteBarrier((&___faceGeometry_1), value);
	}

	inline static int32_t get_offset_of_arBlendShapes_2() { return static_cast<int32_t>(offsetof(serializableUnityARFaceAnchor_t1413500457, ___arBlendShapes_2)); }
	inline Dictionary_2_t1182523073 * get_arBlendShapes_2() const { return ___arBlendShapes_2; }
	inline Dictionary_2_t1182523073 ** get_address_of_arBlendShapes_2() { return &___arBlendShapes_2; }
	inline void set_arBlendShapes_2(Dictionary_2_t1182523073 * value)
	{
		___arBlendShapes_2 = value;
		Il2CppCodeGenWriteBarrier((&___arBlendShapes_2), value);
	}

	inline static int32_t get_offset_of_identifierStr_3() { return static_cast<int32_t>(offsetof(serializableUnityARFaceAnchor_t1413500457, ___identifierStr_3)); }
	inline ByteU5BU5D_t4116647657* get_identifierStr_3() const { return ___identifierStr_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_identifierStr_3() { return &___identifierStr_3; }
	inline void set_identifierStr_3(ByteU5BU5D_t4116647657* value)
	{
		___identifierStr_3 = value;
		Il2CppCodeGenWriteBarrier((&___identifierStr_3), value);
	}

	inline static int32_t get_offset_of_isTracked_4() { return static_cast<int32_t>(offsetof(serializableUnityARFaceAnchor_t1413500457, ___isTracked_4)); }
	inline bool get_isTracked_4() const { return ___isTracked_4; }
	inline bool* get_address_of_isTracked_4() { return &___isTracked_4; }
	inline void set_isTracked_4(bool value)
	{
		___isTracked_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARFACEANCHOR_T1413500457_H
#ifndef SERIALIZABLEUNITYARMATRIX4X4_T255097097_H
#define SERIALIZABLEUNITYARMATRIX4X4_T255097097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4
struct  serializableUnityARMatrix4x4_t255097097  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.Utils.SerializableVector4 UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4::column0
	SerializableVector4_t2739337940 * ___column0_0;
	// UnityEngine.XR.iOS.Utils.SerializableVector4 UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4::column1
	SerializableVector4_t2739337940 * ___column1_1;
	// UnityEngine.XR.iOS.Utils.SerializableVector4 UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4::column2
	SerializableVector4_t2739337940 * ___column2_2;
	// UnityEngine.XR.iOS.Utils.SerializableVector4 UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4::column3
	SerializableVector4_t2739337940 * ___column3_3;

public:
	inline static int32_t get_offset_of_column0_0() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t255097097, ___column0_0)); }
	inline SerializableVector4_t2739337940 * get_column0_0() const { return ___column0_0; }
	inline SerializableVector4_t2739337940 ** get_address_of_column0_0() { return &___column0_0; }
	inline void set_column0_0(SerializableVector4_t2739337940 * value)
	{
		___column0_0 = value;
		Il2CppCodeGenWriteBarrier((&___column0_0), value);
	}

	inline static int32_t get_offset_of_column1_1() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t255097097, ___column1_1)); }
	inline SerializableVector4_t2739337940 * get_column1_1() const { return ___column1_1; }
	inline SerializableVector4_t2739337940 ** get_address_of_column1_1() { return &___column1_1; }
	inline void set_column1_1(SerializableVector4_t2739337940 * value)
	{
		___column1_1 = value;
		Il2CppCodeGenWriteBarrier((&___column1_1), value);
	}

	inline static int32_t get_offset_of_column2_2() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t255097097, ___column2_2)); }
	inline SerializableVector4_t2739337940 * get_column2_2() const { return ___column2_2; }
	inline SerializableVector4_t2739337940 ** get_address_of_column2_2() { return &___column2_2; }
	inline void set_column2_2(SerializableVector4_t2739337940 * value)
	{
		___column2_2 = value;
		Il2CppCodeGenWriteBarrier((&___column2_2), value);
	}

	inline static int32_t get_offset_of_column3_3() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t255097097, ___column3_3)); }
	inline SerializableVector4_t2739337940 * get_column3_3() const { return ___column3_3; }
	inline SerializableVector4_t2739337940 ** get_address_of_column3_3() { return &___column3_3; }
	inline void set_column3_3(SerializableVector4_t2739337940 * value)
	{
		___column3_3 = value;
		Il2CppCodeGenWriteBarrier((&___column3_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARMATRIX4X4_T255097097_H
#ifndef SERIALIZABLEARREFERENCEOBJECT_T2711648110_H
#define SERIALIZABLEARREFERENCEOBJECT_T2711648110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.serializableARReferenceObject
struct  serializableARReferenceObject_t2711648110  : public RuntimeObject
{
public:
	// System.Byte[] UnityEngine.XR.iOS.serializableARReferenceObject::arReferenceObjectData
	ByteU5BU5D_t4116647657* ___arReferenceObjectData_0;

public:
	inline static int32_t get_offset_of_arReferenceObjectData_0() { return static_cast<int32_t>(offsetof(serializableARReferenceObject_t2711648110, ___arReferenceObjectData_0)); }
	inline ByteU5BU5D_t4116647657* get_arReferenceObjectData_0() const { return ___arReferenceObjectData_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_arReferenceObjectData_0() { return &___arReferenceObjectData_0; }
	inline void set_arReferenceObjectData_0(ByteU5BU5D_t4116647657* value)
	{
		___arReferenceObjectData_0 = value;
		Il2CppCodeGenWriteBarrier((&___arReferenceObjectData_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEARREFERENCEOBJECT_T2711648110_H
#ifndef SERIALIZABLEARWORLDMAP_T2514323794_H
#define SERIALIZABLEARWORLDMAP_T2514323794_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.serializableARWorldMap
struct  serializableARWorldMap_t2514323794  : public RuntimeObject
{
public:
	// System.Byte[] UnityEngine.XR.iOS.serializableARWorldMap::arWorldMapData
	ByteU5BU5D_t4116647657* ___arWorldMapData_0;

public:
	inline static int32_t get_offset_of_arWorldMapData_0() { return static_cast<int32_t>(offsetof(serializableARWorldMap_t2514323794, ___arWorldMapData_0)); }
	inline ByteU5BU5D_t4116647657* get_arWorldMapData_0() const { return ___arWorldMapData_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_arWorldMapData_0() { return &___arWorldMapData_0; }
	inline void set_arWorldMapData_0(ByteU5BU5D_t4116647657* value)
	{
		___arWorldMapData_0 = value;
		Il2CppCodeGenWriteBarrier((&___arWorldMapData_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEARWORLDMAP_T2514323794_H
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
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t386037858 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t386037858 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t386037858 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t386037858 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t386037858 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef MEMORYSTREAM_T94973147_H
#define MEMORYSTREAM_T94973147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MemoryStream
struct  MemoryStream_t94973147  : public Stream_t1273022909
{
public:
	// System.Boolean System.IO.MemoryStream::canWrite
	bool ___canWrite_1;
	// System.Boolean System.IO.MemoryStream::allowGetBuffer
	bool ___allowGetBuffer_2;
	// System.Int32 System.IO.MemoryStream::capacity
	int32_t ___capacity_3;
	// System.Int32 System.IO.MemoryStream::length
	int32_t ___length_4;
	// System.Byte[] System.IO.MemoryStream::internalBuffer
	ByteU5BU5D_t4116647657* ___internalBuffer_5;
	// System.Int32 System.IO.MemoryStream::initialIndex
	int32_t ___initialIndex_6;
	// System.Boolean System.IO.MemoryStream::expandable
	bool ___expandable_7;
	// System.Boolean System.IO.MemoryStream::streamClosed
	bool ___streamClosed_8;
	// System.Int32 System.IO.MemoryStream::position
	int32_t ___position_9;
	// System.Int32 System.IO.MemoryStream::dirty_bytes
	int32_t ___dirty_bytes_10;

public:
	inline static int32_t get_offset_of_canWrite_1() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___canWrite_1)); }
	inline bool get_canWrite_1() const { return ___canWrite_1; }
	inline bool* get_address_of_canWrite_1() { return &___canWrite_1; }
	inline void set_canWrite_1(bool value)
	{
		___canWrite_1 = value;
	}

	inline static int32_t get_offset_of_allowGetBuffer_2() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___allowGetBuffer_2)); }
	inline bool get_allowGetBuffer_2() const { return ___allowGetBuffer_2; }
	inline bool* get_address_of_allowGetBuffer_2() { return &___allowGetBuffer_2; }
	inline void set_allowGetBuffer_2(bool value)
	{
		___allowGetBuffer_2 = value;
	}

	inline static int32_t get_offset_of_capacity_3() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___capacity_3)); }
	inline int32_t get_capacity_3() const { return ___capacity_3; }
	inline int32_t* get_address_of_capacity_3() { return &___capacity_3; }
	inline void set_capacity_3(int32_t value)
	{
		___capacity_3 = value;
	}

	inline static int32_t get_offset_of_length_4() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___length_4)); }
	inline int32_t get_length_4() const { return ___length_4; }
	inline int32_t* get_address_of_length_4() { return &___length_4; }
	inline void set_length_4(int32_t value)
	{
		___length_4 = value;
	}

	inline static int32_t get_offset_of_internalBuffer_5() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___internalBuffer_5)); }
	inline ByteU5BU5D_t4116647657* get_internalBuffer_5() const { return ___internalBuffer_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_internalBuffer_5() { return &___internalBuffer_5; }
	inline void set_internalBuffer_5(ByteU5BU5D_t4116647657* value)
	{
		___internalBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___internalBuffer_5), value);
	}

	inline static int32_t get_offset_of_initialIndex_6() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___initialIndex_6)); }
	inline int32_t get_initialIndex_6() const { return ___initialIndex_6; }
	inline int32_t* get_address_of_initialIndex_6() { return &___initialIndex_6; }
	inline void set_initialIndex_6(int32_t value)
	{
		___initialIndex_6 = value;
	}

	inline static int32_t get_offset_of_expandable_7() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___expandable_7)); }
	inline bool get_expandable_7() const { return ___expandable_7; }
	inline bool* get_address_of_expandable_7() { return &___expandable_7; }
	inline void set_expandable_7(bool value)
	{
		___expandable_7 = value;
	}

	inline static int32_t get_offset_of_streamClosed_8() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___streamClosed_8)); }
	inline bool get_streamClosed_8() const { return ___streamClosed_8; }
	inline bool* get_address_of_streamClosed_8() { return &___streamClosed_8; }
	inline void set_streamClosed_8(bool value)
	{
		___streamClosed_8 = value;
	}

	inline static int32_t get_offset_of_position_9() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___position_9)); }
	inline int32_t get_position_9() const { return ___position_9; }
	inline int32_t* get_address_of_position_9() { return &___position_9; }
	inline void set_position_9(int32_t value)
	{
		___position_9 = value;
	}

	inline static int32_t get_offset_of_dirty_bytes_10() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___dirty_bytes_10)); }
	inline int32_t get_dirty_bytes_10() const { return ___dirty_bytes_10; }
	inline int32_t* get_address_of_dirty_bytes_10() { return &___dirty_bytes_10; }
	inline void set_dirty_bytes_10(int32_t value)
	{
		___dirty_bytes_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMORYSTREAM_T94973147_H
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
#ifndef UNITYARLIGHTESTIMATE_T1498306117_H
#define UNITYARLIGHTESTIMATE_T1498306117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARLightEstimate
struct  UnityARLightEstimate_t1498306117 
{
public:
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientIntensity
	float ___ambientIntensity_0;
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientColorTemperature
	float ___ambientColorTemperature_1;

public:
	inline static int32_t get_offset_of_ambientIntensity_0() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_t1498306117, ___ambientIntensity_0)); }
	inline float get_ambientIntensity_0() const { return ___ambientIntensity_0; }
	inline float* get_address_of_ambientIntensity_0() { return &___ambientIntensity_0; }
	inline void set_ambientIntensity_0(float value)
	{
		___ambientIntensity_0 = value;
	}

	inline static int32_t get_offset_of_ambientColorTemperature_1() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_t1498306117, ___ambientColorTemperature_1)); }
	inline float get_ambientColorTemperature_1() const { return ___ambientColorTemperature_1; }
	inline float* get_address_of_ambientColorTemperature_1() { return &___ambientColorTemperature_1; }
	inline void set_ambientColorTemperature_1(float value)
	{
		___ambientColorTemperature_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARLIGHTESTIMATE_T1498306117_H
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
#ifndef FORMATTERASSEMBLYSTYLE_T868039825_H
#define FORMATTERASSEMBLYSTYLE_T868039825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
struct  FormatterAssemblyStyle_t868039825 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterAssemblyStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FormatterAssemblyStyle_t868039825, ___value___1)); }
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
#endif // FORMATTERASSEMBLYSTYLE_T868039825_H
#ifndef FORMATTERTYPESTYLE_T3400733584_H
#define FORMATTERTYPESTYLE_T3400733584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.FormatterTypeStyle
struct  FormatterTypeStyle_t3400733584 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterTypeStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FormatterTypeStyle_t3400733584, ___value___1)); }
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
#endif // FORMATTERTYPESTYLE_T3400733584_H
#ifndef TYPEFILTERLEVEL_T977535029_H
#define TYPEFILTERLEVEL_T977535029_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.TypeFilterLevel
struct  TypeFilterLevel_t977535029 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.TypeFilterLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeFilterLevel_t977535029, ___value___1)); }
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
#endif // TYPEFILTERLEVEL_T977535029_H
#ifndef STREAMINGCONTEXTSTATES_T3580100459_H
#define STREAMINGCONTEXTSTATES_T3580100459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t3580100459 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StreamingContextStates_t3580100459, ___value___1)); }
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
#endif // STREAMINGCONTEXTSTATES_T3580100459_H
#ifndef LOGTYPE_T73765434_H
#define LOGTYPE_T73765434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LogType
struct  LogType_t73765434 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LogType_t73765434, ___value___1)); }
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
#endif // LOGTYPE_T73765434_H
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
#ifndef POSE_T545244865_H
#define POSE_T545244865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Pose
struct  Pose_t545244865 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t3722313464  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t2301928331  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t545244865, ___position_0)); }
	inline Vector3_t3722313464  get_position_0() const { return ___position_0; }
	inline Vector3_t3722313464 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t3722313464  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t545244865, ___rotation_1)); }
	inline Quaternion_t2301928331  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t2301928331 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t2301928331  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t545244865_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t545244865  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t545244865_StaticFields, ___k_Identity_2)); }
	inline Pose_t545244865  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t545244865 * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t545244865  value)
	{
		___k_Identity_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSE_T545244865_H
#ifndef STACKTRACELOGTYPE_T1711085474_H
#define STACKTRACELOGTYPE_T1711085474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.StackTraceLogType
struct  StackTraceLogType_t1711085474 
{
public:
	// System.Int32 UnityEngine.StackTraceLogType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StackTraceLogType_t1711085474, ___value___1)); }
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
#endif // STACKTRACELOGTYPE_T1711085474_H
#ifndef ARPLANEANCHORALIGNMENT_T2311256121_H
#define ARPLANEANCHORALIGNMENT_T2311256121_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneAnchorAlignment
struct  ARPlaneAnchorAlignment_t2311256121 
{
public:
	// System.Int64 UnityEngine.XR.iOS.ARPlaneAnchorAlignment::value__
	int64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARPlaneAnchorAlignment_t2311256121, ___value___1)); }
	inline int64_t get_value___1() const { return ___value___1; }
	inline int64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARPLANEANCHORALIGNMENT_T2311256121_H
#ifndef ARREFERENCEOBJECT_T1065366714_H
#define ARREFERENCEOBJECT_T1065366714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARReferenceObject
struct  ARReferenceObject_t1065366714  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.iOS.ARReferenceObject::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ARReferenceObject_t1065366714, ___m_Ptr_0)); }
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
#endif // ARREFERENCEOBJECT_T1065366714_H
#ifndef ARTRACKINGSTATE_T3182235352_H
#define ARTRACKINGSTATE_T3182235352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingState
struct  ARTrackingState_t3182235352 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingState_t3182235352, ___value___1)); }
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
#endif // ARTRACKINGSTATE_T3182235352_H
#ifndef ARTRACKINGSTATEREASON_T2348933773_H
#define ARTRACKINGSTATEREASON_T2348933773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingStateReason
struct  ARTrackingStateReason_t2348933773 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingStateReason::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingStateReason_t2348933773, ___value___1)); }
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
#endif // ARTRACKINGSTATEREASON_T2348933773_H
#ifndef ARWORLDMAP_T2240790807_H
#define ARWORLDMAP_T2240790807_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARWorldMap
struct  ARWorldMap_t2240790807  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.iOS.ARWorldMap::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ARWorldMap_t2240790807, ___m_Ptr_0)); }
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
#endif // ARWORLDMAP_T2240790807_H
#ifndef ARWORLDMAPPINGSTATUS_T1606355445_H
#define ARWORLDMAPPINGSTATUS_T1606355445_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARWorldMappingStatus
struct  ARWorldMappingStatus_t1606355445 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARWorldMappingStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARWorldMappingStatus_t1606355445, ___value___1)); }
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
#endif // ARWORLDMAPPINGSTATUS_T1606355445_H
#ifndef LIGHTDATATYPE_T2323651587_H
#define LIGHTDATATYPE_T2323651587_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.LightDataType
struct  LightDataType_t2323651587 
{
public:
	// System.Int32 UnityEngine.XR.iOS.LightDataType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LightDataType_t2323651587, ___value___1)); }
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
#endif // LIGHTDATATYPE_T2323651587_H
#ifndef MARSHALDIRECTIONALLIGHTESTIMATE_T3803901471_H
#define MARSHALDIRECTIONALLIGHTESTIMATE_T3803901471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.MarshalDirectionalLightEstimate
struct  MarshalDirectionalLightEstimate_t3803901471 
{
public:
	// UnityEngine.Vector4 UnityEngine.XR.iOS.MarshalDirectionalLightEstimate::primaryDirAndIntensity
	Vector4_t3319028937  ___primaryDirAndIntensity_0;
	// System.IntPtr UnityEngine.XR.iOS.MarshalDirectionalLightEstimate::sphericalHarmonicCoefficientsPtr
	intptr_t ___sphericalHarmonicCoefficientsPtr_1;

public:
	inline static int32_t get_offset_of_primaryDirAndIntensity_0() { return static_cast<int32_t>(offsetof(MarshalDirectionalLightEstimate_t3803901471, ___primaryDirAndIntensity_0)); }
	inline Vector4_t3319028937  get_primaryDirAndIntensity_0() const { return ___primaryDirAndIntensity_0; }
	inline Vector4_t3319028937 * get_address_of_primaryDirAndIntensity_0() { return &___primaryDirAndIntensity_0; }
	inline void set_primaryDirAndIntensity_0(Vector4_t3319028937  value)
	{
		___primaryDirAndIntensity_0 = value;
	}

	inline static int32_t get_offset_of_sphericalHarmonicCoefficientsPtr_1() { return static_cast<int32_t>(offsetof(MarshalDirectionalLightEstimate_t3803901471, ___sphericalHarmonicCoefficientsPtr_1)); }
	inline intptr_t get_sphericalHarmonicCoefficientsPtr_1() const { return ___sphericalHarmonicCoefficientsPtr_1; }
	inline intptr_t* get_address_of_sphericalHarmonicCoefficientsPtr_1() { return &___sphericalHarmonicCoefficientsPtr_1; }
	inline void set_sphericalHarmonicCoefficientsPtr_1(intptr_t value)
	{
		___sphericalHarmonicCoefficientsPtr_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALDIRECTIONALLIGHTESTIMATE_T3803901471_H
#ifndef UNITYARALIGNMENT_T3792119710_H
#define UNITYARALIGNMENT_T3792119710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAlignment
struct  UnityARAlignment_t3792119710 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARAlignment::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityARAlignment_t3792119710, ___value___1)); }
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
#endif // UNITYARALIGNMENT_T3792119710_H
#ifndef UNITYARDIRECTIONALLIGHTESTIMATE_T2924556994_H
#define UNITYARDIRECTIONALLIGHTESTIMATE_T2924556994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARDirectionalLightEstimate
struct  UnityARDirectionalLightEstimate_t2924556994  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.XR.iOS.UnityARDirectionalLightEstimate::primaryLightDirection
	Vector3_t3722313464  ___primaryLightDirection_0;
	// System.Single UnityEngine.XR.iOS.UnityARDirectionalLightEstimate::primaryLightIntensity
	float ___primaryLightIntensity_1;
	// System.Single[] UnityEngine.XR.iOS.UnityARDirectionalLightEstimate::sphericalHarmonicsCoefficients
	SingleU5BU5D_t1444911251* ___sphericalHarmonicsCoefficients_2;

public:
	inline static int32_t get_offset_of_primaryLightDirection_0() { return static_cast<int32_t>(offsetof(UnityARDirectionalLightEstimate_t2924556994, ___primaryLightDirection_0)); }
	inline Vector3_t3722313464  get_primaryLightDirection_0() const { return ___primaryLightDirection_0; }
	inline Vector3_t3722313464 * get_address_of_primaryLightDirection_0() { return &___primaryLightDirection_0; }
	inline void set_primaryLightDirection_0(Vector3_t3722313464  value)
	{
		___primaryLightDirection_0 = value;
	}

	inline static int32_t get_offset_of_primaryLightIntensity_1() { return static_cast<int32_t>(offsetof(UnityARDirectionalLightEstimate_t2924556994, ___primaryLightIntensity_1)); }
	inline float get_primaryLightIntensity_1() const { return ___primaryLightIntensity_1; }
	inline float* get_address_of_primaryLightIntensity_1() { return &___primaryLightIntensity_1; }
	inline void set_primaryLightIntensity_1(float value)
	{
		___primaryLightIntensity_1 = value;
	}

	inline static int32_t get_offset_of_sphericalHarmonicsCoefficients_2() { return static_cast<int32_t>(offsetof(UnityARDirectionalLightEstimate_t2924556994, ___sphericalHarmonicsCoefficients_2)); }
	inline SingleU5BU5D_t1444911251* get_sphericalHarmonicsCoefficients_2() const { return ___sphericalHarmonicsCoefficients_2; }
	inline SingleU5BU5D_t1444911251** get_address_of_sphericalHarmonicsCoefficients_2() { return &___sphericalHarmonicsCoefficients_2; }
	inline void set_sphericalHarmonicsCoefficients_2(SingleU5BU5D_t1444911251* value)
	{
		___sphericalHarmonicsCoefficients_2 = value;
		Il2CppCodeGenWriteBarrier((&___sphericalHarmonicsCoefficients_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARDIRECTIONALLIGHTESTIMATE_T2924556994_H
#ifndef UNITYARENVIRONMENTTEXTURING_T3781250847_H
#define UNITYARENVIRONMENTTEXTURING_T3781250847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityAREnvironmentTexturing
struct  UnityAREnvironmentTexturing_t3781250847 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityAREnvironmentTexturing::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityAREnvironmentTexturing_t3781250847, ___value___1)); }
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
#endif // UNITYARENVIRONMENTTEXTURING_T3781250847_H
#ifndef UNITYARFACEGEOMETRY_T4178775532_H
#define UNITYARFACEGEOMETRY_T4178775532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARFaceGeometry
struct  UnityARFaceGeometry_t4178775532 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARFaceGeometry::vertexCount
	int32_t ___vertexCount_0;
	// System.IntPtr UnityEngine.XR.iOS.UnityARFaceGeometry::vertices
	intptr_t ___vertices_1;
	// System.Int32 UnityEngine.XR.iOS.UnityARFaceGeometry::textureCoordinateCount
	int32_t ___textureCoordinateCount_2;
	// System.IntPtr UnityEngine.XR.iOS.UnityARFaceGeometry::textureCoordinates
	intptr_t ___textureCoordinates_3;
	// System.Int32 UnityEngine.XR.iOS.UnityARFaceGeometry::triangleCount
	int32_t ___triangleCount_4;
	// System.IntPtr UnityEngine.XR.iOS.UnityARFaceGeometry::triangleIndices
	intptr_t ___triangleIndices_5;

public:
	inline static int32_t get_offset_of_vertexCount_0() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t4178775532, ___vertexCount_0)); }
	inline int32_t get_vertexCount_0() const { return ___vertexCount_0; }
	inline int32_t* get_address_of_vertexCount_0() { return &___vertexCount_0; }
	inline void set_vertexCount_0(int32_t value)
	{
		___vertexCount_0 = value;
	}

	inline static int32_t get_offset_of_vertices_1() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t4178775532, ___vertices_1)); }
	inline intptr_t get_vertices_1() const { return ___vertices_1; }
	inline intptr_t* get_address_of_vertices_1() { return &___vertices_1; }
	inline void set_vertices_1(intptr_t value)
	{
		___vertices_1 = value;
	}

	inline static int32_t get_offset_of_textureCoordinateCount_2() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t4178775532, ___textureCoordinateCount_2)); }
	inline int32_t get_textureCoordinateCount_2() const { return ___textureCoordinateCount_2; }
	inline int32_t* get_address_of_textureCoordinateCount_2() { return &___textureCoordinateCount_2; }
	inline void set_textureCoordinateCount_2(int32_t value)
	{
		___textureCoordinateCount_2 = value;
	}

	inline static int32_t get_offset_of_textureCoordinates_3() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t4178775532, ___textureCoordinates_3)); }
	inline intptr_t get_textureCoordinates_3() const { return ___textureCoordinates_3; }
	inline intptr_t* get_address_of_textureCoordinates_3() { return &___textureCoordinates_3; }
	inline void set_textureCoordinates_3(intptr_t value)
	{
		___textureCoordinates_3 = value;
	}

	inline static int32_t get_offset_of_triangleCount_4() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t4178775532, ___triangleCount_4)); }
	inline int32_t get_triangleCount_4() const { return ___triangleCount_4; }
	inline int32_t* get_address_of_triangleCount_4() { return &___triangleCount_4; }
	inline void set_triangleCount_4(int32_t value)
	{
		___triangleCount_4 = value;
	}

	inline static int32_t get_offset_of_triangleIndices_5() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t4178775532, ___triangleIndices_5)); }
	inline intptr_t get_triangleIndices_5() const { return ___triangleIndices_5; }
	inline intptr_t* get_address_of_triangleIndices_5() { return &___triangleIndices_5; }
	inline void set_triangleIndices_5(intptr_t value)
	{
		___triangleIndices_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARFACEGEOMETRY_T4178775532_H
#ifndef UNITYARMATRIX4X4_T4073345847_H
#define UNITYARMATRIX4X4_T4073345847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARMatrix4x4
struct  UnityARMatrix4x4_t4073345847 
{
public:
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column0
	Vector4_t3319028937  ___column0_0;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column1
	Vector4_t3319028937  ___column1_1;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column2
	Vector4_t3319028937  ___column2_2;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column3
	Vector4_t3319028937  ___column3_3;

public:
	inline static int32_t get_offset_of_column0_0() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t4073345847, ___column0_0)); }
	inline Vector4_t3319028937  get_column0_0() const { return ___column0_0; }
	inline Vector4_t3319028937 * get_address_of_column0_0() { return &___column0_0; }
	inline void set_column0_0(Vector4_t3319028937  value)
	{
		___column0_0 = value;
	}

	inline static int32_t get_offset_of_column1_1() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t4073345847, ___column1_1)); }
	inline Vector4_t3319028937  get_column1_1() const { return ___column1_1; }
	inline Vector4_t3319028937 * get_address_of_column1_1() { return &___column1_1; }
	inline void set_column1_1(Vector4_t3319028937  value)
	{
		___column1_1 = value;
	}

	inline static int32_t get_offset_of_column2_2() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t4073345847, ___column2_2)); }
	inline Vector4_t3319028937  get_column2_2() const { return ___column2_2; }
	inline Vector4_t3319028937 * get_address_of_column2_2() { return &___column2_2; }
	inline void set_column2_2(Vector4_t3319028937  value)
	{
		___column2_2 = value;
	}

	inline static int32_t get_offset_of_column3_3() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t4073345847, ___column3_3)); }
	inline Vector4_t3319028937  get_column3_3() const { return ___column3_3; }
	inline Vector4_t3319028937 * get_address_of_column3_3() { return &___column3_3; }
	inline void set_column3_3(Vector4_t3319028937  value)
	{
		___column3_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARMATRIX4X4_T4073345847_H
#ifndef UNITYARPLANEDETECTION_T1367733575_H
#define UNITYARPLANEDETECTION_T1367733575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARPlaneDetection
struct  UnityARPlaneDetection_t1367733575 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARPlaneDetection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityARPlaneDetection_t1367733575, ___value___1)); }
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
#endif // UNITYARPLANEDETECTION_T1367733575_H
#ifndef UNITYARPLANEGEOMETRY_T1646881137_H
#define UNITYARPLANEGEOMETRY_T1646881137_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARPlaneGeometry
struct  UnityARPlaneGeometry_t1646881137 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARPlaneGeometry::vertexCount
	int32_t ___vertexCount_0;
	// System.IntPtr UnityEngine.XR.iOS.UnityARPlaneGeometry::vertices
	intptr_t ___vertices_1;
	// System.Int32 UnityEngine.XR.iOS.UnityARPlaneGeometry::textureCoordinateCount
	int32_t ___textureCoordinateCount_2;
	// System.IntPtr UnityEngine.XR.iOS.UnityARPlaneGeometry::textureCoordinates
	intptr_t ___textureCoordinates_3;
	// System.Int32 UnityEngine.XR.iOS.UnityARPlaneGeometry::triangleCount
	int32_t ___triangleCount_4;
	// System.IntPtr UnityEngine.XR.iOS.UnityARPlaneGeometry::triangleIndices
	intptr_t ___triangleIndices_5;
	// System.Int32 UnityEngine.XR.iOS.UnityARPlaneGeometry::boundaryVertexCount
	int32_t ___boundaryVertexCount_6;
	// System.IntPtr UnityEngine.XR.iOS.UnityARPlaneGeometry::boundaryVertices
	intptr_t ___boundaryVertices_7;

public:
	inline static int32_t get_offset_of_vertexCount_0() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t1646881137, ___vertexCount_0)); }
	inline int32_t get_vertexCount_0() const { return ___vertexCount_0; }
	inline int32_t* get_address_of_vertexCount_0() { return &___vertexCount_0; }
	inline void set_vertexCount_0(int32_t value)
	{
		___vertexCount_0 = value;
	}

	inline static int32_t get_offset_of_vertices_1() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t1646881137, ___vertices_1)); }
	inline intptr_t get_vertices_1() const { return ___vertices_1; }
	inline intptr_t* get_address_of_vertices_1() { return &___vertices_1; }
	inline void set_vertices_1(intptr_t value)
	{
		___vertices_1 = value;
	}

	inline static int32_t get_offset_of_textureCoordinateCount_2() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t1646881137, ___textureCoordinateCount_2)); }
	inline int32_t get_textureCoordinateCount_2() const { return ___textureCoordinateCount_2; }
	inline int32_t* get_address_of_textureCoordinateCount_2() { return &___textureCoordinateCount_2; }
	inline void set_textureCoordinateCount_2(int32_t value)
	{
		___textureCoordinateCount_2 = value;
	}

	inline static int32_t get_offset_of_textureCoordinates_3() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t1646881137, ___textureCoordinates_3)); }
	inline intptr_t get_textureCoordinates_3() const { return ___textureCoordinates_3; }
	inline intptr_t* get_address_of_textureCoordinates_3() { return &___textureCoordinates_3; }
	inline void set_textureCoordinates_3(intptr_t value)
	{
		___textureCoordinates_3 = value;
	}

	inline static int32_t get_offset_of_triangleCount_4() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t1646881137, ___triangleCount_4)); }
	inline int32_t get_triangleCount_4() const { return ___triangleCount_4; }
	inline int32_t* get_address_of_triangleCount_4() { return &___triangleCount_4; }
	inline void set_triangleCount_4(int32_t value)
	{
		___triangleCount_4 = value;
	}

	inline static int32_t get_offset_of_triangleIndices_5() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t1646881137, ___triangleIndices_5)); }
	inline intptr_t get_triangleIndices_5() const { return ___triangleIndices_5; }
	inline intptr_t* get_address_of_triangleIndices_5() { return &___triangleIndices_5; }
	inline void set_triangleIndices_5(intptr_t value)
	{
		___triangleIndices_5 = value;
	}

	inline static int32_t get_offset_of_boundaryVertexCount_6() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t1646881137, ___boundaryVertexCount_6)); }
	inline int32_t get_boundaryVertexCount_6() const { return ___boundaryVertexCount_6; }
	inline int32_t* get_address_of_boundaryVertexCount_6() { return &___boundaryVertexCount_6; }
	inline void set_boundaryVertexCount_6(int32_t value)
	{
		___boundaryVertexCount_6 = value;
	}

	inline static int32_t get_offset_of_boundaryVertices_7() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t1646881137, ___boundaryVertices_7)); }
	inline intptr_t get_boundaryVertices_7() const { return ___boundaryVertices_7; }
	inline intptr_t* get_address_of_boundaryVertices_7() { return &___boundaryVertices_7; }
	inline void set_boundaryVertices_7(intptr_t value)
	{
		___boundaryVertices_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARPLANEGEOMETRY_T1646881137_H
#ifndef UNITYARSESSIONRUNOPTION_T942967030_H
#define UNITYARSESSIONRUNOPTION_T942967030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionRunOption
struct  UnityARSessionRunOption_t942967030 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARSessionRunOption::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityARSessionRunOption_t942967030, ___value___1)); }
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
#endif // UNITYARSESSIONRUNOPTION_T942967030_H
#ifndef UNITYARVIDEOFORMAT_T1944454781_H
#define UNITYARVIDEOFORMAT_T1944454781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARVideoFormat
struct  UnityARVideoFormat_t1944454781 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARVideoFormat::videoFormatPtr
	intptr_t ___videoFormatPtr_0;
	// System.Single UnityEngine.XR.iOS.UnityARVideoFormat::imageResolutionWidth
	float ___imageResolutionWidth_1;
	// System.Single UnityEngine.XR.iOS.UnityARVideoFormat::imageResolutionHeight
	float ___imageResolutionHeight_2;
	// System.Int32 UnityEngine.XR.iOS.UnityARVideoFormat::framesPerSecond
	int32_t ___framesPerSecond_3;

public:
	inline static int32_t get_offset_of_videoFormatPtr_0() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_t1944454781, ___videoFormatPtr_0)); }
	inline intptr_t get_videoFormatPtr_0() const { return ___videoFormatPtr_0; }
	inline intptr_t* get_address_of_videoFormatPtr_0() { return &___videoFormatPtr_0; }
	inline void set_videoFormatPtr_0(intptr_t value)
	{
		___videoFormatPtr_0 = value;
	}

	inline static int32_t get_offset_of_imageResolutionWidth_1() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_t1944454781, ___imageResolutionWidth_1)); }
	inline float get_imageResolutionWidth_1() const { return ___imageResolutionWidth_1; }
	inline float* get_address_of_imageResolutionWidth_1() { return &___imageResolutionWidth_1; }
	inline void set_imageResolutionWidth_1(float value)
	{
		___imageResolutionWidth_1 = value;
	}

	inline static int32_t get_offset_of_imageResolutionHeight_2() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_t1944454781, ___imageResolutionHeight_2)); }
	inline float get_imageResolutionHeight_2() const { return ___imageResolutionHeight_2; }
	inline float* get_address_of_imageResolutionHeight_2() { return &___imageResolutionHeight_2; }
	inline void set_imageResolutionHeight_2(float value)
	{
		___imageResolutionHeight_2 = value;
	}

	inline static int32_t get_offset_of_framesPerSecond_3() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_t1944454781, ___framesPerSecond_3)); }
	inline int32_t get_framesPerSecond_3() const { return ___framesPerSecond_3; }
	inline int32_t* get_address_of_framesPerSecond_3() { return &___framesPerSecond_3; }
	inline void set_framesPerSecond_3(int32_t value)
	{
		___framesPerSecond_3 = value;
	}
};

struct UnityARVideoFormat_t1944454781_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.iOS.UnityARVideoFormat> UnityEngine.XR.iOS.UnityARVideoFormat::videoFormatsList
	List_1_t3416529523 * ___videoFormatsList_4;
	// UnityEngine.XR.iOS.VideoFormatEnumerator UnityEngine.XR.iOS.UnityARVideoFormat::<>f__mg$cache0
	VideoFormatEnumerator_t3131638505 * ___U3CU3Ef__mgU24cache0_5;

public:
	inline static int32_t get_offset_of_videoFormatsList_4() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_t1944454781_StaticFields, ___videoFormatsList_4)); }
	inline List_1_t3416529523 * get_videoFormatsList_4() const { return ___videoFormatsList_4; }
	inline List_1_t3416529523 ** get_address_of_videoFormatsList_4() { return &___videoFormatsList_4; }
	inline void set_videoFormatsList_4(List_1_t3416529523 * value)
	{
		___videoFormatsList_4 = value;
		Il2CppCodeGenWriteBarrier((&___videoFormatsList_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_5() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_t1944454781_StaticFields, ___U3CU3Ef__mgU24cache0_5)); }
	inline VideoFormatEnumerator_t3131638505 * get_U3CU3Ef__mgU24cache0_5() const { return ___U3CU3Ef__mgU24cache0_5; }
	inline VideoFormatEnumerator_t3131638505 ** get_address_of_U3CU3Ef__mgU24cache0_5() { return &___U3CU3Ef__mgU24cache0_5; }
	inline void set_U3CU3Ef__mgU24cache0_5(VideoFormatEnumerator_t3131638505 * value)
	{
		___U3CU3Ef__mgU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARVIDEOFORMAT_T1944454781_H
#ifndef UNITYVIDEOPARAMS_T4155354995_H
#define UNITYVIDEOPARAMS_T4155354995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityVideoParams
struct  UnityVideoParams_t4155354995 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yWidth
	int32_t ___yWidth_0;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yHeight
	int32_t ___yHeight_1;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::screenOrientation
	int32_t ___screenOrientation_2;
	// System.Single UnityEngine.XR.iOS.UnityVideoParams::texCoordScale
	float ___texCoordScale_3;
	// System.IntPtr UnityEngine.XR.iOS.UnityVideoParams::cvPixelBufferPtr
	intptr_t ___cvPixelBufferPtr_4;

public:
	inline static int32_t get_offset_of_yWidth_0() { return static_cast<int32_t>(offsetof(UnityVideoParams_t4155354995, ___yWidth_0)); }
	inline int32_t get_yWidth_0() const { return ___yWidth_0; }
	inline int32_t* get_address_of_yWidth_0() { return &___yWidth_0; }
	inline void set_yWidth_0(int32_t value)
	{
		___yWidth_0 = value;
	}

	inline static int32_t get_offset_of_yHeight_1() { return static_cast<int32_t>(offsetof(UnityVideoParams_t4155354995, ___yHeight_1)); }
	inline int32_t get_yHeight_1() const { return ___yHeight_1; }
	inline int32_t* get_address_of_yHeight_1() { return &___yHeight_1; }
	inline void set_yHeight_1(int32_t value)
	{
		___yHeight_1 = value;
	}

	inline static int32_t get_offset_of_screenOrientation_2() { return static_cast<int32_t>(offsetof(UnityVideoParams_t4155354995, ___screenOrientation_2)); }
	inline int32_t get_screenOrientation_2() const { return ___screenOrientation_2; }
	inline int32_t* get_address_of_screenOrientation_2() { return &___screenOrientation_2; }
	inline void set_screenOrientation_2(int32_t value)
	{
		___screenOrientation_2 = value;
	}

	inline static int32_t get_offset_of_texCoordScale_3() { return static_cast<int32_t>(offsetof(UnityVideoParams_t4155354995, ___texCoordScale_3)); }
	inline float get_texCoordScale_3() const { return ___texCoordScale_3; }
	inline float* get_address_of_texCoordScale_3() { return &___texCoordScale_3; }
	inline void set_texCoordScale_3(float value)
	{
		___texCoordScale_3 = value;
	}

	inline static int32_t get_offset_of_cvPixelBufferPtr_4() { return static_cast<int32_t>(offsetof(UnityVideoParams_t4155354995, ___cvPixelBufferPtr_4)); }
	inline intptr_t get_cvPixelBufferPtr_4() const { return ___cvPixelBufferPtr_4; }
	inline intptr_t* get_address_of_cvPixelBufferPtr_4() { return &___cvPixelBufferPtr_4; }
	inline void set_cvPixelBufferPtr_4(intptr_t value)
	{
		___cvPixelBufferPtr_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYVIDEOPARAMS_T4155354995_H
#ifndef SERIALIZABLEFROMEDITORMESSAGE_T2731251371_H
#define SERIALIZABLEFROMEDITORMESSAGE_T2731251371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.Utils.serializableFromEditorMessage
struct  serializableFromEditorMessage_t2731251371  : public RuntimeObject
{
public:
	// System.Guid UnityEngine.XR.iOS.Utils.serializableFromEditorMessage::subMessageId
	Guid_t  ___subMessageId_0;
	// UnityEngine.XR.iOS.Utils.serializableARKitInit UnityEngine.XR.iOS.Utils.serializableFromEditorMessage::arkitConfigMsg
	serializableARKitInit_t3839227232 * ___arkitConfigMsg_1;

public:
	inline static int32_t get_offset_of_subMessageId_0() { return static_cast<int32_t>(offsetof(serializableFromEditorMessage_t2731251371, ___subMessageId_0)); }
	inline Guid_t  get_subMessageId_0() const { return ___subMessageId_0; }
	inline Guid_t * get_address_of_subMessageId_0() { return &___subMessageId_0; }
	inline void set_subMessageId_0(Guid_t  value)
	{
		___subMessageId_0 = value;
	}

	inline static int32_t get_offset_of_arkitConfigMsg_1() { return static_cast<int32_t>(offsetof(serializableFromEditorMessage_t2731251371, ___arkitConfigMsg_1)); }
	inline serializableARKitInit_t3839227232 * get_arkitConfigMsg_1() const { return ___arkitConfigMsg_1; }
	inline serializableARKitInit_t3839227232 ** get_address_of_arkitConfigMsg_1() { return &___arkitConfigMsg_1; }
	inline void set_arkitConfigMsg_1(serializableARKitInit_t3839227232 * value)
	{
		___arkitConfigMsg_1 = value;
		Il2CppCodeGenWriteBarrier((&___arkitConfigMsg_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEFROMEDITORMESSAGE_T2731251371_H
#ifndef ENUMERATOR_T1010806104_H
#define ENUMERATOR_T1010806104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.UnityARVideoFormat>
struct  Enumerator_t1010806104 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3416529523 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	UnityARVideoFormat_t1944454781  ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t1010806104, ___l_0)); }
	inline List_1_t3416529523 * get_l_0() const { return ___l_0; }
	inline List_1_t3416529523 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3416529523 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1010806104, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t1010806104, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1010806104, ___current_3)); }
	inline UnityARVideoFormat_t1944454781  get_current_3() const { return ___current_3; }
	inline UnityARVideoFormat_t1944454781 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(UnityARVideoFormat_t1944454781  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1010806104_H
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
#ifndef STREAMINGCONTEXT_T3711869237_H
#define STREAMINGCONTEXT_T3711869237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t3711869237 
{
public:
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::state
	int32_t ___state_0;
	// System.Object System.Runtime.Serialization.StreamingContext::additional
	RuntimeObject * ___additional_1;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_additional_1() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___additional_1)); }
	inline RuntimeObject * get_additional_1() const { return ___additional_1; }
	inline RuntimeObject ** get_address_of_additional_1() { return &___additional_1; }
	inline void set_additional_1(RuntimeObject * value)
	{
		___additional_1 = value;
		Il2CppCodeGenWriteBarrier((&___additional_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3711869237_marshaled_pinvoke
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3711869237_marshaled_com
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
#endif // STREAMINGCONTEXT_T3711869237_H
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
#ifndef ARFACEGEOMETRY_T5139606_H
#define ARFACEGEOMETRY_T5139606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARFaceGeometry
struct  ARFaceGeometry_t5139606  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.UnityARFaceGeometry UnityEngine.XR.iOS.ARFaceGeometry::<uFaceGeometry>k__BackingField
	UnityARFaceGeometry_t4178775532  ___U3CuFaceGeometryU3Ek__BackingField_0;
	// UnityEngine.Vector3[] UnityEngine.XR.iOS.ARFaceGeometry::m_Vertices
	Vector3U5BU5D_t1718750761* ___m_Vertices_1;
	// UnityEngine.Vector2[] UnityEngine.XR.iOS.ARFaceGeometry::m_TextureCoordinates
	Vector2U5BU5D_t1457185986* ___m_TextureCoordinates_2;
	// System.Int32[] UnityEngine.XR.iOS.ARFaceGeometry::m_TriangleIndices
	Int32U5BU5D_t385246372* ___m_TriangleIndices_3;
	// System.Single[] UnityEngine.XR.iOS.ARFaceGeometry::m_WorkVertices
	SingleU5BU5D_t1444911251* ___m_WorkVertices_4;
	// System.Single[] UnityEngine.XR.iOS.ARFaceGeometry::m_WorkTextureCoordinates
	SingleU5BU5D_t1444911251* ___m_WorkTextureCoordinates_5;
	// System.Int16[] UnityEngine.XR.iOS.ARFaceGeometry::m_WorkIndices
	Int16U5BU5D_t3686840178* ___m_WorkIndices_6;
	// System.Int32 UnityEngine.XR.iOS.ARFaceGeometry::m_VertexCount
	int32_t ___m_VertexCount_7;
	// System.Int32 UnityEngine.XR.iOS.ARFaceGeometry::m_TextureCoordinateCount
	int32_t ___m_TextureCoordinateCount_8;
	// System.Int32 UnityEngine.XR.iOS.ARFaceGeometry::m_TriangleCount
	int32_t ___m_TriangleCount_9;
	// System.Int32 UnityEngine.XR.iOS.ARFaceGeometry::m_IndexCount
	int32_t ___m_IndexCount_10;
	// System.Int32 UnityEngine.XR.iOS.ARFaceGeometry::m_WorkVertexCount
	int32_t ___m_WorkVertexCount_11;
	// System.Int32 UnityEngine.XR.iOS.ARFaceGeometry::m_WorkTextureCoordinateCount
	int32_t ___m_WorkTextureCoordinateCount_12;

public:
	inline static int32_t get_offset_of_U3CuFaceGeometryU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARFaceGeometry_t5139606, ___U3CuFaceGeometryU3Ek__BackingField_0)); }
	inline UnityARFaceGeometry_t4178775532  get_U3CuFaceGeometryU3Ek__BackingField_0() const { return ___U3CuFaceGeometryU3Ek__BackingField_0; }
	inline UnityARFaceGeometry_t4178775532 * get_address_of_U3CuFaceGeometryU3Ek__BackingField_0() { return &___U3CuFaceGeometryU3Ek__BackingField_0; }
	inline void set_U3CuFaceGeometryU3Ek__BackingField_0(UnityARFaceGeometry_t4178775532  value)
	{
		___U3CuFaceGeometryU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Vertices_1() { return static_cast<int32_t>(offsetof(ARFaceGeometry_t5139606, ___m_Vertices_1)); }
	inline Vector3U5BU5D_t1718750761* get_m_Vertices_1() const { return ___m_Vertices_1; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Vertices_1() { return &___m_Vertices_1; }
	inline void set_m_Vertices_1(Vector3U5BU5D_t1718750761* value)
	{
		___m_Vertices_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Vertices_1), value);
	}

	inline static int32_t get_offset_of_m_TextureCoordinates_2() { return static_cast<int32_t>(offsetof(ARFaceGeometry_t5139606, ___m_TextureCoordinates_2)); }
	inline Vector2U5BU5D_t1457185986* get_m_TextureCoordinates_2() const { return ___m_TextureCoordinates_2; }
	inline Vector2U5BU5D_t1457185986** get_address_of_m_TextureCoordinates_2() { return &___m_TextureCoordinates_2; }
	inline void set_m_TextureCoordinates_2(Vector2U5BU5D_t1457185986* value)
	{
		___m_TextureCoordinates_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextureCoordinates_2), value);
	}

	inline static int32_t get_offset_of_m_TriangleIndices_3() { return static_cast<int32_t>(offsetof(ARFaceGeometry_t5139606, ___m_TriangleIndices_3)); }
	inline Int32U5BU5D_t385246372* get_m_TriangleIndices_3() const { return ___m_TriangleIndices_3; }
	inline Int32U5BU5D_t385246372** get_address_of_m_TriangleIndices_3() { return &___m_TriangleIndices_3; }
	inline void set_m_TriangleIndices_3(Int32U5BU5D_t385246372* value)
	{
		___m_TriangleIndices_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_TriangleIndices_3), value);
	}

	inline static int32_t get_offset_of_m_WorkVertices_4() { return static_cast<int32_t>(offsetof(ARFaceGeometry_t5139606, ___m_WorkVertices_4)); }
	inline SingleU5BU5D_t1444911251* get_m_WorkVertices_4() const { return ___m_WorkVertices_4; }
	inline SingleU5BU5D_t1444911251** get_address_of_m_WorkVertices_4() { return &___m_WorkVertices_4; }
	inline void set_m_WorkVertices_4(SingleU5BU5D_t1444911251* value)
	{
		___m_WorkVertices_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_WorkVertices_4), value);
	}

	inline static int32_t get_offset_of_m_WorkTextureCoordinates_5() { return static_cast<int32_t>(offsetof(ARFaceGeometry_t5139606, ___m_WorkTextureCoordinates_5)); }
	inline SingleU5BU5D_t1444911251* get_m_WorkTextureCoordinates_5() const { return ___m_WorkTextureCoordinates_5; }
	inline SingleU5BU5D_t1444911251** get_address_of_m_WorkTextureCoordinates_5() { return &___m_WorkTextureCoordinates_5; }
	inline void set_m_WorkTextureCoordinates_5(SingleU5BU5D_t1444911251* value)
	{
		___m_WorkTextureCoordinates_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_WorkTextureCoordinates_5), value);
	}

	inline static int32_t get_offset_of_m_WorkIndices_6() { return static_cast<int32_t>(offsetof(ARFaceGeometry_t5139606, ___m_WorkIndices_6)); }
	inline Int16U5BU5D_t3686840178* get_m_WorkIndices_6() const { return ___m_WorkIndices_6; }
	inline Int16U5BU5D_t3686840178** get_address_of_m_WorkIndices_6() { return &___m_WorkIndices_6; }
	inline void set_m_WorkIndices_6(Int16U5BU5D_t3686840178* value)
	{
		___m_WorkIndices_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_WorkIndices_6), value);
	}

	inline static int32_t get_offset_of_m_VertexCount_7() { return static_cast<int32_t>(offsetof(ARFaceGeometry_t5139606, ___m_VertexCount_7)); }
	inline int32_t get_m_VertexCount_7() const { return ___m_VertexCount_7; }
	inline int32_t* get_address_of_m_VertexCount_7() { return &___m_VertexCount_7; }
	inline void set_m_VertexCount_7(int32_t value)
	{
		___m_VertexCount_7 = value;
	}

	inline static int32_t get_offset_of_m_TextureCoordinateCount_8() { return static_cast<int32_t>(offsetof(ARFaceGeometry_t5139606, ___m_TextureCoordinateCount_8)); }
	inline int32_t get_m_TextureCoordinateCount_8() const { return ___m_TextureCoordinateCount_8; }
	inline int32_t* get_address_of_m_TextureCoordinateCount_8() { return &___m_TextureCoordinateCount_8; }
	inline void set_m_TextureCoordinateCount_8(int32_t value)
	{
		___m_TextureCoordinateCount_8 = value;
	}

	inline static int32_t get_offset_of_m_TriangleCount_9() { return static_cast<int32_t>(offsetof(ARFaceGeometry_t5139606, ___m_TriangleCount_9)); }
	inline int32_t get_m_TriangleCount_9() const { return ___m_TriangleCount_9; }
	inline int32_t* get_address_of_m_TriangleCount_9() { return &___m_TriangleCount_9; }
	inline void set_m_TriangleCount_9(int32_t value)
	{
		___m_TriangleCount_9 = value;
	}

	inline static int32_t get_offset_of_m_IndexCount_10() { return static_cast<int32_t>(offsetof(ARFaceGeometry_t5139606, ___m_IndexCount_10)); }
	inline int32_t get_m_IndexCount_10() const { return ___m_IndexCount_10; }
	inline int32_t* get_address_of_m_IndexCount_10() { return &___m_IndexCount_10; }
	inline void set_m_IndexCount_10(int32_t value)
	{
		___m_IndexCount_10 = value;
	}

	inline static int32_t get_offset_of_m_WorkVertexCount_11() { return static_cast<int32_t>(offsetof(ARFaceGeometry_t5139606, ___m_WorkVertexCount_11)); }
	inline int32_t get_m_WorkVertexCount_11() const { return ___m_WorkVertexCount_11; }
	inline int32_t* get_address_of_m_WorkVertexCount_11() { return &___m_WorkVertexCount_11; }
	inline void set_m_WorkVertexCount_11(int32_t value)
	{
		___m_WorkVertexCount_11 = value;
	}

	inline static int32_t get_offset_of_m_WorkTextureCoordinateCount_12() { return static_cast<int32_t>(offsetof(ARFaceGeometry_t5139606, ___m_WorkTextureCoordinateCount_12)); }
	inline int32_t get_m_WorkTextureCoordinateCount_12() const { return ___m_WorkTextureCoordinateCount_12; }
	inline int32_t* get_address_of_m_WorkTextureCoordinateCount_12() { return &___m_WorkTextureCoordinateCount_12; }
	inline void set_m_WorkTextureCoordinateCount_12(int32_t value)
	{
		___m_WorkTextureCoordinateCount_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARFACEGEOMETRY_T5139606_H
#ifndef ARKITFACETRACKINGCONFIGURATION_T386387352_H
#define ARKITFACETRACKINGCONFIGURATION_T386387352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARKitFaceTrackingConfiguration
struct  ARKitFaceTrackingConfiguration_t386387352 
{
public:
	// UnityEngine.XR.iOS.UnityARAlignment UnityEngine.XR.iOS.ARKitFaceTrackingConfiguration::alignment
	int32_t ___alignment_0;
	// System.Boolean UnityEngine.XR.iOS.ARKitFaceTrackingConfiguration::enableLightEstimation
	bool ___enableLightEstimation_1;

public:
	inline static int32_t get_offset_of_alignment_0() { return static_cast<int32_t>(offsetof(ARKitFaceTrackingConfiguration_t386387352, ___alignment_0)); }
	inline int32_t get_alignment_0() const { return ___alignment_0; }
	inline int32_t* get_address_of_alignment_0() { return &___alignment_0; }
	inline void set_alignment_0(int32_t value)
	{
		___alignment_0 = value;
	}

	inline static int32_t get_offset_of_enableLightEstimation_1() { return static_cast<int32_t>(offsetof(ARKitFaceTrackingConfiguration_t386387352, ___enableLightEstimation_1)); }
	inline bool get_enableLightEstimation_1() const { return ___enableLightEstimation_1; }
	inline bool* get_address_of_enableLightEstimation_1() { return &___enableLightEstimation_1; }
	inline void set_enableLightEstimation_1(bool value)
	{
		___enableLightEstimation_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARKitFaceTrackingConfiguration
struct ARKitFaceTrackingConfiguration_t386387352_marshaled_pinvoke
{
	int32_t ___alignment_0;
	int32_t ___enableLightEstimation_1;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARKitFaceTrackingConfiguration
struct ARKitFaceTrackingConfiguration_t386387352_marshaled_com
{
	int32_t ___alignment_0;
	int32_t ___enableLightEstimation_1;
};
#endif // ARKITFACETRACKINGCONFIGURATION_T386387352_H
#ifndef ARKITWORLDTRACKINGSESSIONCONFIGURATION_T273386347_H
#define ARKITWORLDTRACKINGSESSIONCONFIGURATION_T273386347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct  ARKitWorldTrackingSessionConfiguration_t273386347 
{
public:
	// UnityEngine.XR.iOS.UnityARAlignment UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::alignment
	int32_t ___alignment_0;
	// UnityEngine.XR.iOS.UnityARPlaneDetection UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::planeDetection
	int32_t ___planeDetection_1;
	// System.Boolean UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::getPointCloudData
	bool ___getPointCloudData_2;
	// System.Boolean UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::enableLightEstimation
	bool ___enableLightEstimation_3;
	// System.Boolean UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::enableAutoFocus
	bool ___enableAutoFocus_4;
	// UnityEngine.XR.iOS.UnityAREnvironmentTexturing UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::environmentTexturing
	int32_t ___environmentTexturing_5;
	// System.Int32 UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::maximumNumberOfTrackedImages
	int32_t ___maximumNumberOfTrackedImages_6;
	// System.IntPtr UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::videoFormat
	intptr_t ___videoFormat_7;
	// System.String UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::referenceImagesGroupName
	String_t* ___referenceImagesGroupName_8;
	// System.String UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::referenceObjectsGroupName
	String_t* ___referenceObjectsGroupName_9;
	// System.IntPtr UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::dynamicReferenceObjectsPtr
	intptr_t ___dynamicReferenceObjectsPtr_10;
	// System.IntPtr UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::m_worldMapPtr
	intptr_t ___m_worldMapPtr_11;

public:
	inline static int32_t get_offset_of_alignment_0() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___alignment_0)); }
	inline int32_t get_alignment_0() const { return ___alignment_0; }
	inline int32_t* get_address_of_alignment_0() { return &___alignment_0; }
	inline void set_alignment_0(int32_t value)
	{
		___alignment_0 = value;
	}

	inline static int32_t get_offset_of_planeDetection_1() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___planeDetection_1)); }
	inline int32_t get_planeDetection_1() const { return ___planeDetection_1; }
	inline int32_t* get_address_of_planeDetection_1() { return &___planeDetection_1; }
	inline void set_planeDetection_1(int32_t value)
	{
		___planeDetection_1 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_2() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___getPointCloudData_2)); }
	inline bool get_getPointCloudData_2() const { return ___getPointCloudData_2; }
	inline bool* get_address_of_getPointCloudData_2() { return &___getPointCloudData_2; }
	inline void set_getPointCloudData_2(bool value)
	{
		___getPointCloudData_2 = value;
	}

	inline static int32_t get_offset_of_enableLightEstimation_3() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___enableLightEstimation_3)); }
	inline bool get_enableLightEstimation_3() const { return ___enableLightEstimation_3; }
	inline bool* get_address_of_enableLightEstimation_3() { return &___enableLightEstimation_3; }
	inline void set_enableLightEstimation_3(bool value)
	{
		___enableLightEstimation_3 = value;
	}

	inline static int32_t get_offset_of_enableAutoFocus_4() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___enableAutoFocus_4)); }
	inline bool get_enableAutoFocus_4() const { return ___enableAutoFocus_4; }
	inline bool* get_address_of_enableAutoFocus_4() { return &___enableAutoFocus_4; }
	inline void set_enableAutoFocus_4(bool value)
	{
		___enableAutoFocus_4 = value;
	}

	inline static int32_t get_offset_of_environmentTexturing_5() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___environmentTexturing_5)); }
	inline int32_t get_environmentTexturing_5() const { return ___environmentTexturing_5; }
	inline int32_t* get_address_of_environmentTexturing_5() { return &___environmentTexturing_5; }
	inline void set_environmentTexturing_5(int32_t value)
	{
		___environmentTexturing_5 = value;
	}

	inline static int32_t get_offset_of_maximumNumberOfTrackedImages_6() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___maximumNumberOfTrackedImages_6)); }
	inline int32_t get_maximumNumberOfTrackedImages_6() const { return ___maximumNumberOfTrackedImages_6; }
	inline int32_t* get_address_of_maximumNumberOfTrackedImages_6() { return &___maximumNumberOfTrackedImages_6; }
	inline void set_maximumNumberOfTrackedImages_6(int32_t value)
	{
		___maximumNumberOfTrackedImages_6 = value;
	}

	inline static int32_t get_offset_of_videoFormat_7() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___videoFormat_7)); }
	inline intptr_t get_videoFormat_7() const { return ___videoFormat_7; }
	inline intptr_t* get_address_of_videoFormat_7() { return &___videoFormat_7; }
	inline void set_videoFormat_7(intptr_t value)
	{
		___videoFormat_7 = value;
	}

	inline static int32_t get_offset_of_referenceImagesGroupName_8() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___referenceImagesGroupName_8)); }
	inline String_t* get_referenceImagesGroupName_8() const { return ___referenceImagesGroupName_8; }
	inline String_t** get_address_of_referenceImagesGroupName_8() { return &___referenceImagesGroupName_8; }
	inline void set_referenceImagesGroupName_8(String_t* value)
	{
		___referenceImagesGroupName_8 = value;
		Il2CppCodeGenWriteBarrier((&___referenceImagesGroupName_8), value);
	}

	inline static int32_t get_offset_of_referenceObjectsGroupName_9() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___referenceObjectsGroupName_9)); }
	inline String_t* get_referenceObjectsGroupName_9() const { return ___referenceObjectsGroupName_9; }
	inline String_t** get_address_of_referenceObjectsGroupName_9() { return &___referenceObjectsGroupName_9; }
	inline void set_referenceObjectsGroupName_9(String_t* value)
	{
		___referenceObjectsGroupName_9 = value;
		Il2CppCodeGenWriteBarrier((&___referenceObjectsGroupName_9), value);
	}

	inline static int32_t get_offset_of_dynamicReferenceObjectsPtr_10() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___dynamicReferenceObjectsPtr_10)); }
	inline intptr_t get_dynamicReferenceObjectsPtr_10() const { return ___dynamicReferenceObjectsPtr_10; }
	inline intptr_t* get_address_of_dynamicReferenceObjectsPtr_10() { return &___dynamicReferenceObjectsPtr_10; }
	inline void set_dynamicReferenceObjectsPtr_10(intptr_t value)
	{
		___dynamicReferenceObjectsPtr_10 = value;
	}

	inline static int32_t get_offset_of_m_worldMapPtr_11() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___m_worldMapPtr_11)); }
	inline intptr_t get_m_worldMapPtr_11() const { return ___m_worldMapPtr_11; }
	inline intptr_t* get_address_of_m_worldMapPtr_11() { return &___m_worldMapPtr_11; }
	inline void set_m_worldMapPtr_11(intptr_t value)
	{
		___m_worldMapPtr_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct ARKitWorldTrackingSessionConfiguration_t273386347_marshaled_pinvoke
{
	int32_t ___alignment_0;
	int32_t ___planeDetection_1;
	int32_t ___getPointCloudData_2;
	int32_t ___enableLightEstimation_3;
	int32_t ___enableAutoFocus_4;
	int32_t ___environmentTexturing_5;
	int32_t ___maximumNumberOfTrackedImages_6;
	intptr_t ___videoFormat_7;
	char* ___referenceImagesGroupName_8;
	char* ___referenceObjectsGroupName_9;
	intptr_t ___dynamicReferenceObjectsPtr_10;
	intptr_t ___m_worldMapPtr_11;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct ARKitWorldTrackingSessionConfiguration_t273386347_marshaled_com
{
	int32_t ___alignment_0;
	int32_t ___planeDetection_1;
	int32_t ___getPointCloudData_2;
	int32_t ___enableLightEstimation_3;
	int32_t ___enableAutoFocus_4;
	int32_t ___environmentTexturing_5;
	int32_t ___maximumNumberOfTrackedImages_6;
	intptr_t ___videoFormat_7;
	Il2CppChar* ___referenceImagesGroupName_8;
	Il2CppChar* ___referenceObjectsGroupName_9;
	intptr_t ___dynamicReferenceObjectsPtr_10;
	intptr_t ___m_worldMapPtr_11;
};
#endif // ARKITWORLDTRACKINGSESSIONCONFIGURATION_T273386347_H
#ifndef ARPLANEGEOMETRY_T1169415986_H
#define ARPLANEGEOMETRY_T1169415986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneGeometry
struct  ARPlaneGeometry_t1169415986  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.UnityARPlaneGeometry UnityEngine.XR.iOS.ARPlaneGeometry::uPlaneGeometry
	UnityARPlaneGeometry_t1646881137  ___uPlaneGeometry_0;

public:
	inline static int32_t get_offset_of_uPlaneGeometry_0() { return static_cast<int32_t>(offsetof(ARPlaneGeometry_t1169415986, ___uPlaneGeometry_0)); }
	inline UnityARPlaneGeometry_t1646881137  get_uPlaneGeometry_0() const { return ___uPlaneGeometry_0; }
	inline UnityARPlaneGeometry_t1646881137 * get_address_of_uPlaneGeometry_0() { return &___uPlaneGeometry_0; }
	inline void set_uPlaneGeometry_0(UnityARPlaneGeometry_t1646881137  value)
	{
		___uPlaneGeometry_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARPLANEGEOMETRY_T1169415986_H
#ifndef UNITYARANCHORDATA_T1157236668_H
#define UNITYARANCHORDATA_T1157236668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAnchorData
struct  UnityARAnchorData_t1157236668 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARAnchorData::ptrIdentifier
	intptr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARAnchorData::transform
	UnityARMatrix4x4_t4073345847  ___transform_1;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment UnityEngine.XR.iOS.UnityARAnchorData::alignment
	int64_t ___alignment_2;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARAnchorData::center
	Vector4_t3319028937  ___center_3;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARAnchorData::extent
	Vector4_t3319028937  ___extent_4;
	// UnityEngine.XR.iOS.UnityARPlaneGeometry UnityEngine.XR.iOS.UnityARAnchorData::planeGeometry
	UnityARPlaneGeometry_t1646881137  ___planeGeometry_5;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1157236668, ___ptrIdentifier_0)); }
	inline intptr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline intptr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(intptr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1157236668, ___transform_1)); }
	inline UnityARMatrix4x4_t4073345847  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_t4073345847  value)
	{
		___transform_1 = value;
	}

	inline static int32_t get_offset_of_alignment_2() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1157236668, ___alignment_2)); }
	inline int64_t get_alignment_2() const { return ___alignment_2; }
	inline int64_t* get_address_of_alignment_2() { return &___alignment_2; }
	inline void set_alignment_2(int64_t value)
	{
		___alignment_2 = value;
	}

	inline static int32_t get_offset_of_center_3() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1157236668, ___center_3)); }
	inline Vector4_t3319028937  get_center_3() const { return ___center_3; }
	inline Vector4_t3319028937 * get_address_of_center_3() { return &___center_3; }
	inline void set_center_3(Vector4_t3319028937  value)
	{
		___center_3 = value;
	}

	inline static int32_t get_offset_of_extent_4() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1157236668, ___extent_4)); }
	inline Vector4_t3319028937  get_extent_4() const { return ___extent_4; }
	inline Vector4_t3319028937 * get_address_of_extent_4() { return &___extent_4; }
	inline void set_extent_4(Vector4_t3319028937  value)
	{
		___extent_4 = value;
	}

	inline static int32_t get_offset_of_planeGeometry_5() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1157236668, ___planeGeometry_5)); }
	inline UnityARPlaneGeometry_t1646881137  get_planeGeometry_5() const { return ___planeGeometry_5; }
	inline UnityARPlaneGeometry_t1646881137 * get_address_of_planeGeometry_5() { return &___planeGeometry_5; }
	inline void set_planeGeometry_5(UnityARPlaneGeometry_t1646881137  value)
	{
		___planeGeometry_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARANCHORDATA_T1157236668_H
#ifndef UNITYARFACEANCHORDATA_T2028622935_H
#define UNITYARFACEANCHORDATA_T2028622935_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARFaceAnchorData
struct  UnityARFaceAnchorData_t2028622935 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARFaceAnchorData::ptrIdentifier
	intptr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARFaceAnchorData::transform
	UnityARMatrix4x4_t4073345847  ___transform_1;
	// UnityEngine.XR.iOS.UnityARFaceGeometry UnityEngine.XR.iOS.UnityARFaceAnchorData::faceGeometry
	UnityARFaceGeometry_t4178775532  ___faceGeometry_2;
	// System.IntPtr UnityEngine.XR.iOS.UnityARFaceAnchorData::blendShapes
	intptr_t ___blendShapes_3;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARFaceAnchorData::leftEyeTransform
	UnityARMatrix4x4_t4073345847  ___leftEyeTransform_4;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARFaceAnchorData::rightEyeTransform
	UnityARMatrix4x4_t4073345847  ___rightEyeTransform_5;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.UnityARFaceAnchorData::lookAtPoint
	Vector3_t3722313464  ___lookAtPoint_6;
	// System.Boolean UnityEngine.XR.iOS.UnityARFaceAnchorData::isTracked
	bool ___isTracked_7;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorData_t2028622935, ___ptrIdentifier_0)); }
	inline intptr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline intptr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(intptr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorData_t2028622935, ___transform_1)); }
	inline UnityARMatrix4x4_t4073345847  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_t4073345847  value)
	{
		___transform_1 = value;
	}

	inline static int32_t get_offset_of_faceGeometry_2() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorData_t2028622935, ___faceGeometry_2)); }
	inline UnityARFaceGeometry_t4178775532  get_faceGeometry_2() const { return ___faceGeometry_2; }
	inline UnityARFaceGeometry_t4178775532 * get_address_of_faceGeometry_2() { return &___faceGeometry_2; }
	inline void set_faceGeometry_2(UnityARFaceGeometry_t4178775532  value)
	{
		___faceGeometry_2 = value;
	}

	inline static int32_t get_offset_of_blendShapes_3() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorData_t2028622935, ___blendShapes_3)); }
	inline intptr_t get_blendShapes_3() const { return ___blendShapes_3; }
	inline intptr_t* get_address_of_blendShapes_3() { return &___blendShapes_3; }
	inline void set_blendShapes_3(intptr_t value)
	{
		___blendShapes_3 = value;
	}

	inline static int32_t get_offset_of_leftEyeTransform_4() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorData_t2028622935, ___leftEyeTransform_4)); }
	inline UnityARMatrix4x4_t4073345847  get_leftEyeTransform_4() const { return ___leftEyeTransform_4; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_leftEyeTransform_4() { return &___leftEyeTransform_4; }
	inline void set_leftEyeTransform_4(UnityARMatrix4x4_t4073345847  value)
	{
		___leftEyeTransform_4 = value;
	}

	inline static int32_t get_offset_of_rightEyeTransform_5() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorData_t2028622935, ___rightEyeTransform_5)); }
	inline UnityARMatrix4x4_t4073345847  get_rightEyeTransform_5() const { return ___rightEyeTransform_5; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_rightEyeTransform_5() { return &___rightEyeTransform_5; }
	inline void set_rightEyeTransform_5(UnityARMatrix4x4_t4073345847  value)
	{
		___rightEyeTransform_5 = value;
	}

	inline static int32_t get_offset_of_lookAtPoint_6() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorData_t2028622935, ___lookAtPoint_6)); }
	inline Vector3_t3722313464  get_lookAtPoint_6() const { return ___lookAtPoint_6; }
	inline Vector3_t3722313464 * get_address_of_lookAtPoint_6() { return &___lookAtPoint_6; }
	inline void set_lookAtPoint_6(Vector3_t3722313464  value)
	{
		___lookAtPoint_6 = value;
	}

	inline static int32_t get_offset_of_isTracked_7() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorData_t2028622935, ___isTracked_7)); }
	inline bool get_isTracked_7() const { return ___isTracked_7; }
	inline bool* get_address_of_isTracked_7() { return &___isTracked_7; }
	inline void set_isTracked_7(bool value)
	{
		___isTracked_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.UnityARFaceAnchorData
struct UnityARFaceAnchorData_t2028622935_marshaled_pinvoke
{
	intptr_t ___ptrIdentifier_0;
	UnityARMatrix4x4_t4073345847  ___transform_1;
	UnityARFaceGeometry_t4178775532  ___faceGeometry_2;
	intptr_t ___blendShapes_3;
	UnityARMatrix4x4_t4073345847  ___leftEyeTransform_4;
	UnityARMatrix4x4_t4073345847  ___rightEyeTransform_5;
	Vector3_t3722313464  ___lookAtPoint_6;
	int32_t ___isTracked_7;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.UnityARFaceAnchorData
struct UnityARFaceAnchorData_t2028622935_marshaled_com
{
	intptr_t ___ptrIdentifier_0;
	UnityARMatrix4x4_t4073345847  ___transform_1;
	UnityARFaceGeometry_t4178775532  ___faceGeometry_2;
	intptr_t ___blendShapes_3;
	UnityARMatrix4x4_t4073345847  ___leftEyeTransform_4;
	UnityARMatrix4x4_t4073345847  ___rightEyeTransform_5;
	Vector3_t3722313464  ___lookAtPoint_6;
	int32_t ___isTracked_7;
};
#endif // UNITYARFACEANCHORDATA_T2028622935_H
#ifndef UNITYARLIGHTDATA_T2160616730_H
#define UNITYARLIGHTDATA_T2160616730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARLightData
struct  UnityARLightData_t2160616730 
{
public:
	// UnityEngine.XR.iOS.LightDataType UnityEngine.XR.iOS.UnityARLightData::arLightingType
	int32_t ___arLightingType_0;
	// UnityEngine.XR.iOS.UnityARLightEstimate UnityEngine.XR.iOS.UnityARLightData::arLightEstimate
	UnityARLightEstimate_t1498306117  ___arLightEstimate_1;
	// UnityEngine.XR.iOS.UnityARDirectionalLightEstimate UnityEngine.XR.iOS.UnityARLightData::arDirectonalLightEstimate
	UnityARDirectionalLightEstimate_t2924556994 * ___arDirectonalLightEstimate_2;

public:
	inline static int32_t get_offset_of_arLightingType_0() { return static_cast<int32_t>(offsetof(UnityARLightData_t2160616730, ___arLightingType_0)); }
	inline int32_t get_arLightingType_0() const { return ___arLightingType_0; }
	inline int32_t* get_address_of_arLightingType_0() { return &___arLightingType_0; }
	inline void set_arLightingType_0(int32_t value)
	{
		___arLightingType_0 = value;
	}

	inline static int32_t get_offset_of_arLightEstimate_1() { return static_cast<int32_t>(offsetof(UnityARLightData_t2160616730, ___arLightEstimate_1)); }
	inline UnityARLightEstimate_t1498306117  get_arLightEstimate_1() const { return ___arLightEstimate_1; }
	inline UnityARLightEstimate_t1498306117 * get_address_of_arLightEstimate_1() { return &___arLightEstimate_1; }
	inline void set_arLightEstimate_1(UnityARLightEstimate_t1498306117  value)
	{
		___arLightEstimate_1 = value;
	}

	inline static int32_t get_offset_of_arDirectonalLightEstimate_2() { return static_cast<int32_t>(offsetof(UnityARLightData_t2160616730, ___arDirectonalLightEstimate_2)); }
	inline UnityARDirectionalLightEstimate_t2924556994 * get_arDirectonalLightEstimate_2() const { return ___arDirectonalLightEstimate_2; }
	inline UnityARDirectionalLightEstimate_t2924556994 ** get_address_of_arDirectonalLightEstimate_2() { return &___arDirectonalLightEstimate_2; }
	inline void set_arDirectonalLightEstimate_2(UnityARDirectionalLightEstimate_t2924556994 * value)
	{
		___arDirectonalLightEstimate_2 = value;
		Il2CppCodeGenWriteBarrier((&___arDirectonalLightEstimate_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.UnityARLightData
struct UnityARLightData_t2160616730_marshaled_pinvoke
{
	int32_t ___arLightingType_0;
	UnityARLightEstimate_t1498306117  ___arLightEstimate_1;
	UnityARDirectionalLightEstimate_t2924556994 * ___arDirectonalLightEstimate_2;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.UnityARLightData
struct UnityARLightData_t2160616730_marshaled_com
{
	int32_t ___arLightingType_0;
	UnityARLightEstimate_t1498306117  ___arLightEstimate_1;
	UnityARDirectionalLightEstimate_t2924556994 * ___arDirectonalLightEstimate_2;
};
#endif // UNITYARLIGHTDATA_T2160616730_H
#ifndef UNITYMARSHALLIGHTDATA_T1623228070_H
#define UNITYMARSHALLIGHTDATA_T1623228070_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityMarshalLightData
struct  UnityMarshalLightData_t1623228070 
{
public:
	// UnityEngine.XR.iOS.LightDataType UnityEngine.XR.iOS.UnityMarshalLightData::arLightingType
	int32_t ___arLightingType_0;
	// UnityEngine.XR.iOS.UnityARLightEstimate UnityEngine.XR.iOS.UnityMarshalLightData::arLightEstimate
	UnityARLightEstimate_t1498306117  ___arLightEstimate_1;
	// UnityEngine.XR.iOS.MarshalDirectionalLightEstimate UnityEngine.XR.iOS.UnityMarshalLightData::arDirectonalLightEstimate
	MarshalDirectionalLightEstimate_t3803901471  ___arDirectonalLightEstimate_2;

public:
	inline static int32_t get_offset_of_arLightingType_0() { return static_cast<int32_t>(offsetof(UnityMarshalLightData_t1623228070, ___arLightingType_0)); }
	inline int32_t get_arLightingType_0() const { return ___arLightingType_0; }
	inline int32_t* get_address_of_arLightingType_0() { return &___arLightingType_0; }
	inline void set_arLightingType_0(int32_t value)
	{
		___arLightingType_0 = value;
	}

	inline static int32_t get_offset_of_arLightEstimate_1() { return static_cast<int32_t>(offsetof(UnityMarshalLightData_t1623228070, ___arLightEstimate_1)); }
	inline UnityARLightEstimate_t1498306117  get_arLightEstimate_1() const { return ___arLightEstimate_1; }
	inline UnityARLightEstimate_t1498306117 * get_address_of_arLightEstimate_1() { return &___arLightEstimate_1; }
	inline void set_arLightEstimate_1(UnityARLightEstimate_t1498306117  value)
	{
		___arLightEstimate_1 = value;
	}

	inline static int32_t get_offset_of_arDirectonalLightEstimate_2() { return static_cast<int32_t>(offsetof(UnityMarshalLightData_t1623228070, ___arDirectonalLightEstimate_2)); }
	inline MarshalDirectionalLightEstimate_t3803901471  get_arDirectonalLightEstimate_2() const { return ___arDirectonalLightEstimate_2; }
	inline MarshalDirectionalLightEstimate_t3803901471 * get_address_of_arDirectonalLightEstimate_2() { return &___arDirectonalLightEstimate_2; }
	inline void set_arDirectonalLightEstimate_2(MarshalDirectionalLightEstimate_t3803901471  value)
	{
		___arDirectonalLightEstimate_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYMARSHALLIGHTDATA_T1623228070_H
#ifndef SERIALIZABLEARKITINIT_T3839227232_H
#define SERIALIZABLEARKITINIT_T3839227232_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.Utils.serializableARKitInit
struct  serializableARKitInit_t3839227232  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.Utils.serializableARSessionConfiguration UnityEngine.XR.iOS.Utils.serializableARKitInit::config
	serializableARSessionConfiguration_t30565192 * ___config_0;
	// UnityEngine.XR.iOS.UnityARSessionRunOption UnityEngine.XR.iOS.Utils.serializableARKitInit::runOption
	int32_t ___runOption_1;

public:
	inline static int32_t get_offset_of_config_0() { return static_cast<int32_t>(offsetof(serializableARKitInit_t3839227232, ___config_0)); }
	inline serializableARSessionConfiguration_t30565192 * get_config_0() const { return ___config_0; }
	inline serializableARSessionConfiguration_t30565192 ** get_address_of_config_0() { return &___config_0; }
	inline void set_config_0(serializableARSessionConfiguration_t30565192 * value)
	{
		___config_0 = value;
		Il2CppCodeGenWriteBarrier((&___config_0), value);
	}

	inline static int32_t get_offset_of_runOption_1() { return static_cast<int32_t>(offsetof(serializableARKitInit_t3839227232, ___runOption_1)); }
	inline int32_t get_runOption_1() const { return ___runOption_1; }
	inline int32_t* get_address_of_runOption_1() { return &___runOption_1; }
	inline void set_runOption_1(int32_t value)
	{
		___runOption_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEARKITINIT_T3839227232_H
#ifndef SERIALIZABLEARSESSIONCONFIGURATION_T30565192_H
#define SERIALIZABLEARSESSIONCONFIGURATION_T30565192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.Utils.serializableARSessionConfiguration
struct  serializableARSessionConfiguration_t30565192  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.UnityARAlignment UnityEngine.XR.iOS.Utils.serializableARSessionConfiguration::alignment
	int32_t ___alignment_0;
	// UnityEngine.XR.iOS.UnityARPlaneDetection UnityEngine.XR.iOS.Utils.serializableARSessionConfiguration::planeDetection
	int32_t ___planeDetection_1;
	// System.Boolean UnityEngine.XR.iOS.Utils.serializableARSessionConfiguration::getPointCloudData
	bool ___getPointCloudData_2;
	// System.Boolean UnityEngine.XR.iOS.Utils.serializableARSessionConfiguration::enableLightEstimation
	bool ___enableLightEstimation_3;
	// System.Boolean UnityEngine.XR.iOS.Utils.serializableARSessionConfiguration::enableAutoFocus
	bool ___enableAutoFocus_4;

public:
	inline static int32_t get_offset_of_alignment_0() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t30565192, ___alignment_0)); }
	inline int32_t get_alignment_0() const { return ___alignment_0; }
	inline int32_t* get_address_of_alignment_0() { return &___alignment_0; }
	inline void set_alignment_0(int32_t value)
	{
		___alignment_0 = value;
	}

	inline static int32_t get_offset_of_planeDetection_1() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t30565192, ___planeDetection_1)); }
	inline int32_t get_planeDetection_1() const { return ___planeDetection_1; }
	inline int32_t* get_address_of_planeDetection_1() { return &___planeDetection_1; }
	inline void set_planeDetection_1(int32_t value)
	{
		___planeDetection_1 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_2() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t30565192, ___getPointCloudData_2)); }
	inline bool get_getPointCloudData_2() const { return ___getPointCloudData_2; }
	inline bool* get_address_of_getPointCloudData_2() { return &___getPointCloudData_2; }
	inline void set_getPointCloudData_2(bool value)
	{
		___getPointCloudData_2 = value;
	}

	inline static int32_t get_offset_of_enableLightEstimation_3() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t30565192, ___enableLightEstimation_3)); }
	inline bool get_enableLightEstimation_3() const { return ___enableLightEstimation_3; }
	inline bool* get_address_of_enableLightEstimation_3() { return &___enableLightEstimation_3; }
	inline void set_enableLightEstimation_3(bool value)
	{
		___enableLightEstimation_3 = value;
	}

	inline static int32_t get_offset_of_enableAutoFocus_4() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t30565192, ___enableAutoFocus_4)); }
	inline bool get_enableAutoFocus_4() const { return ___enableAutoFocus_4; }
	inline bool* get_address_of_enableAutoFocus_4() { return &___enableAutoFocus_4; }
	inline void set_enableAutoFocus_4(bool value)
	{
		___enableAutoFocus_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEARSESSIONCONFIGURATION_T30565192_H
#ifndef SERIALIZABLEUNITYARCAMERA_T1848993995_H
#define SERIALIZABLEUNITYARCAMERA_T1848993995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.Utils.serializableUnityARCamera
struct  serializableUnityARCamera_t1848993995  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4 UnityEngine.XR.iOS.Utils.serializableUnityARCamera::worldTransform
	serializableUnityARMatrix4x4_t255097097 * ___worldTransform_0;
	// UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4 UnityEngine.XR.iOS.Utils.serializableUnityARCamera::projectionMatrix
	serializableUnityARMatrix4x4_t255097097 * ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState UnityEngine.XR.iOS.Utils.serializableUnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason UnityEngine.XR.iOS.Utils.serializableUnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams UnityEngine.XR.iOS.Utils.serializableUnityARCamera::videoParams
	UnityVideoParams_t4155354995  ___videoParams_4;
	// UnityEngine.XR.iOS.Utils.serializableUnityARLightData UnityEngine.XR.iOS.Utils.serializableUnityARCamera::lightData
	serializableUnityARLightData_t3029229948 * ___lightData_5;
	// UnityEngine.XR.iOS.Utils.serializablePointCloud UnityEngine.XR.iOS.Utils.serializableUnityARCamera::pointCloud
	serializablePointCloud_t4241265545 * ___pointCloud_6;
	// UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4 UnityEngine.XR.iOS.Utils.serializableUnityARCamera::displayTransform
	serializableUnityARMatrix4x4_t255097097 * ___displayTransform_7;
	// UnityEngine.XR.iOS.ARWorldMappingStatus UnityEngine.XR.iOS.Utils.serializableUnityARCamera::worldMappingStatus
	int32_t ___worldMappingStatus_8;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t1848993995, ___worldTransform_0)); }
	inline serializableUnityARMatrix4x4_t255097097 * get_worldTransform_0() const { return ___worldTransform_0; }
	inline serializableUnityARMatrix4x4_t255097097 ** get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(serializableUnityARMatrix4x4_t255097097 * value)
	{
		___worldTransform_0 = value;
		Il2CppCodeGenWriteBarrier((&___worldTransform_0), value);
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t1848993995, ___projectionMatrix_1)); }
	inline serializableUnityARMatrix4x4_t255097097 * get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline serializableUnityARMatrix4x4_t255097097 ** get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(serializableUnityARMatrix4x4_t255097097 * value)
	{
		___projectionMatrix_1 = value;
		Il2CppCodeGenWriteBarrier((&___projectionMatrix_1), value);
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t1848993995, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t1848993995, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t1848993995, ___videoParams_4)); }
	inline UnityVideoParams_t4155354995  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t4155354995 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t4155354995  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightData_5() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t1848993995, ___lightData_5)); }
	inline serializableUnityARLightData_t3029229948 * get_lightData_5() const { return ___lightData_5; }
	inline serializableUnityARLightData_t3029229948 ** get_address_of_lightData_5() { return &___lightData_5; }
	inline void set_lightData_5(serializableUnityARLightData_t3029229948 * value)
	{
		___lightData_5 = value;
		Il2CppCodeGenWriteBarrier((&___lightData_5), value);
	}

	inline static int32_t get_offset_of_pointCloud_6() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t1848993995, ___pointCloud_6)); }
	inline serializablePointCloud_t4241265545 * get_pointCloud_6() const { return ___pointCloud_6; }
	inline serializablePointCloud_t4241265545 ** get_address_of_pointCloud_6() { return &___pointCloud_6; }
	inline void set_pointCloud_6(serializablePointCloud_t4241265545 * value)
	{
		___pointCloud_6 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloud_6), value);
	}

	inline static int32_t get_offset_of_displayTransform_7() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t1848993995, ___displayTransform_7)); }
	inline serializableUnityARMatrix4x4_t255097097 * get_displayTransform_7() const { return ___displayTransform_7; }
	inline serializableUnityARMatrix4x4_t255097097 ** get_address_of_displayTransform_7() { return &___displayTransform_7; }
	inline void set_displayTransform_7(serializableUnityARMatrix4x4_t255097097 * value)
	{
		___displayTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___displayTransform_7), value);
	}

	inline static int32_t get_offset_of_worldMappingStatus_8() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t1848993995, ___worldMappingStatus_8)); }
	inline int32_t get_worldMappingStatus_8() const { return ___worldMappingStatus_8; }
	inline int32_t* get_address_of_worldMappingStatus_8() { return &___worldMappingStatus_8; }
	inline void set_worldMappingStatus_8(int32_t value)
	{
		___worldMappingStatus_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARCAMERA_T1848993995_H
#ifndef SERIALIZABLEUNITYARLIGHTDATA_T3029229948_H
#define SERIALIZABLEUNITYARLIGHTDATA_T3029229948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.Utils.serializableUnityARLightData
struct  serializableUnityARLightData_t3029229948  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.LightDataType UnityEngine.XR.iOS.Utils.serializableUnityARLightData::whichLight
	int32_t ___whichLight_0;
	// UnityEngine.XR.iOS.Utils.serializableSHC UnityEngine.XR.iOS.Utils.serializableUnityARLightData::lightSHC
	serializableSHC_t226029808 * ___lightSHC_1;
	// UnityEngine.XR.iOS.Utils.SerializableVector4 UnityEngine.XR.iOS.Utils.serializableUnityARLightData::primaryLightDirAndIntensity
	SerializableVector4_t2739337940 * ___primaryLightDirAndIntensity_2;
	// System.Single UnityEngine.XR.iOS.Utils.serializableUnityARLightData::ambientIntensity
	float ___ambientIntensity_3;
	// System.Single UnityEngine.XR.iOS.Utils.serializableUnityARLightData::ambientColorTemperature
	float ___ambientColorTemperature_4;

public:
	inline static int32_t get_offset_of_whichLight_0() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t3029229948, ___whichLight_0)); }
	inline int32_t get_whichLight_0() const { return ___whichLight_0; }
	inline int32_t* get_address_of_whichLight_0() { return &___whichLight_0; }
	inline void set_whichLight_0(int32_t value)
	{
		___whichLight_0 = value;
	}

	inline static int32_t get_offset_of_lightSHC_1() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t3029229948, ___lightSHC_1)); }
	inline serializableSHC_t226029808 * get_lightSHC_1() const { return ___lightSHC_1; }
	inline serializableSHC_t226029808 ** get_address_of_lightSHC_1() { return &___lightSHC_1; }
	inline void set_lightSHC_1(serializableSHC_t226029808 * value)
	{
		___lightSHC_1 = value;
		Il2CppCodeGenWriteBarrier((&___lightSHC_1), value);
	}

	inline static int32_t get_offset_of_primaryLightDirAndIntensity_2() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t3029229948, ___primaryLightDirAndIntensity_2)); }
	inline SerializableVector4_t2739337940 * get_primaryLightDirAndIntensity_2() const { return ___primaryLightDirAndIntensity_2; }
	inline SerializableVector4_t2739337940 ** get_address_of_primaryLightDirAndIntensity_2() { return &___primaryLightDirAndIntensity_2; }
	inline void set_primaryLightDirAndIntensity_2(SerializableVector4_t2739337940 * value)
	{
		___primaryLightDirAndIntensity_2 = value;
		Il2CppCodeGenWriteBarrier((&___primaryLightDirAndIntensity_2), value);
	}

	inline static int32_t get_offset_of_ambientIntensity_3() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t3029229948, ___ambientIntensity_3)); }
	inline float get_ambientIntensity_3() const { return ___ambientIntensity_3; }
	inline float* get_address_of_ambientIntensity_3() { return &___ambientIntensity_3; }
	inline void set_ambientIntensity_3(float value)
	{
		___ambientIntensity_3 = value;
	}

	inline static int32_t get_offset_of_ambientColorTemperature_4() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t3029229948, ___ambientColorTemperature_4)); }
	inline float get_ambientColorTemperature_4() const { return ___ambientColorTemperature_4; }
	inline float* get_address_of_ambientColorTemperature_4() { return &___ambientColorTemperature_4; }
	inline void set_ambientColorTemperature_4(float value)
	{
		___ambientColorTemperature_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARLIGHTDATA_T3029229948_H
#ifndef SERIALIZABLEUNITYARPLANEANCHOR_T3965207599_H
#define SERIALIZABLEUNITYARPLANEANCHOR_T3965207599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.Utils.serializableUnityARPlaneAnchor
struct  serializableUnityARPlaneAnchor_t3965207599  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4 UnityEngine.XR.iOS.Utils.serializableUnityARPlaneAnchor::worldTransform
	serializableUnityARMatrix4x4_t255097097 * ___worldTransform_0;
	// UnityEngine.XR.iOS.Utils.SerializableVector4 UnityEngine.XR.iOS.Utils.serializableUnityARPlaneAnchor::center
	SerializableVector4_t2739337940 * ___center_1;
	// UnityEngine.XR.iOS.Utils.SerializableVector4 UnityEngine.XR.iOS.Utils.serializableUnityARPlaneAnchor::extent
	SerializableVector4_t2739337940 * ___extent_2;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment UnityEngine.XR.iOS.Utils.serializableUnityARPlaneAnchor::planeAlignment
	int64_t ___planeAlignment_3;
	// UnityEngine.XR.iOS.Utils.serializablePlaneGeometry UnityEngine.XR.iOS.Utils.serializableUnityARPlaneAnchor::planeGeometry
	serializablePlaneGeometry_t3471745378 * ___planeGeometry_4;
	// System.Byte[] UnityEngine.XR.iOS.Utils.serializableUnityARPlaneAnchor::identifierStr
	ByteU5BU5D_t4116647657* ___identifierStr_5;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t3965207599, ___worldTransform_0)); }
	inline serializableUnityARMatrix4x4_t255097097 * get_worldTransform_0() const { return ___worldTransform_0; }
	inline serializableUnityARMatrix4x4_t255097097 ** get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(serializableUnityARMatrix4x4_t255097097 * value)
	{
		___worldTransform_0 = value;
		Il2CppCodeGenWriteBarrier((&___worldTransform_0), value);
	}

	inline static int32_t get_offset_of_center_1() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t3965207599, ___center_1)); }
	inline SerializableVector4_t2739337940 * get_center_1() const { return ___center_1; }
	inline SerializableVector4_t2739337940 ** get_address_of_center_1() { return &___center_1; }
	inline void set_center_1(SerializableVector4_t2739337940 * value)
	{
		___center_1 = value;
		Il2CppCodeGenWriteBarrier((&___center_1), value);
	}

	inline static int32_t get_offset_of_extent_2() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t3965207599, ___extent_2)); }
	inline SerializableVector4_t2739337940 * get_extent_2() const { return ___extent_2; }
	inline SerializableVector4_t2739337940 ** get_address_of_extent_2() { return &___extent_2; }
	inline void set_extent_2(SerializableVector4_t2739337940 * value)
	{
		___extent_2 = value;
		Il2CppCodeGenWriteBarrier((&___extent_2), value);
	}

	inline static int32_t get_offset_of_planeAlignment_3() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t3965207599, ___planeAlignment_3)); }
	inline int64_t get_planeAlignment_3() const { return ___planeAlignment_3; }
	inline int64_t* get_address_of_planeAlignment_3() { return &___planeAlignment_3; }
	inline void set_planeAlignment_3(int64_t value)
	{
		___planeAlignment_3 = value;
	}

	inline static int32_t get_offset_of_planeGeometry_4() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t3965207599, ___planeGeometry_4)); }
	inline serializablePlaneGeometry_t3471745378 * get_planeGeometry_4() const { return ___planeGeometry_4; }
	inline serializablePlaneGeometry_t3471745378 ** get_address_of_planeGeometry_4() { return &___planeGeometry_4; }
	inline void set_planeGeometry_4(serializablePlaneGeometry_t3471745378 * value)
	{
		___planeGeometry_4 = value;
		Il2CppCodeGenWriteBarrier((&___planeGeometry_4), value);
	}

	inline static int32_t get_offset_of_identifierStr_5() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t3965207599, ___identifierStr_5)); }
	inline ByteU5BU5D_t4116647657* get_identifierStr_5() const { return ___identifierStr_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_identifierStr_5() { return &___identifierStr_5; }
	inline void set_identifierStr_5(ByteU5BU5D_t4116647657* value)
	{
		___identifierStr_5 = value;
		Il2CppCodeGenWriteBarrier((&___identifierStr_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARPLANEANCHOR_T3965207599_H
#ifndef RESETHANDLER_T86549611_H
#define RESETHANDLER_T86549611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ModelController/ResetHandler
struct  ResetHandler_t86549611  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESETHANDLER_T86549611_H
#ifndef ACTION_1_T2413258402_H
#define ACTION_1_T2413258402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.iOS.ARWorldMap>
struct  Action_1_t2413258402  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T2413258402_H
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
#ifndef BINARYFORMATTER_T3197753202_H
#define BINARYFORMATTER_T3197753202_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct  BinaryFormatter_t3197753202  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::assembly_format
	int32_t ___assembly_format_0;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::binder
	SerializationBinder_t274213469 * ___binder_1;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::context
	StreamingContext_t3711869237  ___context_2;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::surrogate_selector
	RuntimeObject* ___surrogate_selector_3;
	// System.Runtime.Serialization.Formatters.FormatterTypeStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::type_format
	int32_t ___type_format_4;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::filter_level
	int32_t ___filter_level_5;

public:
	inline static int32_t get_offset_of_assembly_format_0() { return static_cast<int32_t>(offsetof(BinaryFormatter_t3197753202, ___assembly_format_0)); }
	inline int32_t get_assembly_format_0() const { return ___assembly_format_0; }
	inline int32_t* get_address_of_assembly_format_0() { return &___assembly_format_0; }
	inline void set_assembly_format_0(int32_t value)
	{
		___assembly_format_0 = value;
	}

	inline static int32_t get_offset_of_binder_1() { return static_cast<int32_t>(offsetof(BinaryFormatter_t3197753202, ___binder_1)); }
	inline SerializationBinder_t274213469 * get_binder_1() const { return ___binder_1; }
	inline SerializationBinder_t274213469 ** get_address_of_binder_1() { return &___binder_1; }
	inline void set_binder_1(SerializationBinder_t274213469 * value)
	{
		___binder_1 = value;
		Il2CppCodeGenWriteBarrier((&___binder_1), value);
	}

	inline static int32_t get_offset_of_context_2() { return static_cast<int32_t>(offsetof(BinaryFormatter_t3197753202, ___context_2)); }
	inline StreamingContext_t3711869237  get_context_2() const { return ___context_2; }
	inline StreamingContext_t3711869237 * get_address_of_context_2() { return &___context_2; }
	inline void set_context_2(StreamingContext_t3711869237  value)
	{
		___context_2 = value;
	}

	inline static int32_t get_offset_of_surrogate_selector_3() { return static_cast<int32_t>(offsetof(BinaryFormatter_t3197753202, ___surrogate_selector_3)); }
	inline RuntimeObject* get_surrogate_selector_3() const { return ___surrogate_selector_3; }
	inline RuntimeObject** get_address_of_surrogate_selector_3() { return &___surrogate_selector_3; }
	inline void set_surrogate_selector_3(RuntimeObject* value)
	{
		___surrogate_selector_3 = value;
		Il2CppCodeGenWriteBarrier((&___surrogate_selector_3), value);
	}

	inline static int32_t get_offset_of_type_format_4() { return static_cast<int32_t>(offsetof(BinaryFormatter_t3197753202, ___type_format_4)); }
	inline int32_t get_type_format_4() const { return ___type_format_4; }
	inline int32_t* get_address_of_type_format_4() { return &___type_format_4; }
	inline void set_type_format_4(int32_t value)
	{
		___type_format_4 = value;
	}

	inline static int32_t get_offset_of_filter_level_5() { return static_cast<int32_t>(offsetof(BinaryFormatter_t3197753202, ___filter_level_5)); }
	inline int32_t get_filter_level_5() const { return ___filter_level_5; }
	inline int32_t* get_address_of_filter_level_5() { return &___filter_level_5; }
	inline void set_filter_level_5(int32_t value)
	{
		___filter_level_5 = value;
	}
};

struct BinaryFormatter_t3197753202_StaticFields
{
public:
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::<DefaultSurrogateSelector>k__BackingField
	RuntimeObject* ___U3CDefaultSurrogateSelectorU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CDefaultSurrogateSelectorU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BinaryFormatter_t3197753202_StaticFields, ___U3CDefaultSurrogateSelectorU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CDefaultSurrogateSelectorU3Ek__BackingField_6() const { return ___U3CDefaultSurrogateSelectorU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CDefaultSurrogateSelectorU3Ek__BackingField_6() { return &___U3CDefaultSurrogateSelectorU3Ek__BackingField_6; }
	inline void set_U3CDefaultSurrogateSelectorU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CDefaultSurrogateSelectorU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDefaultSurrogateSelectorU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYFORMATTER_T3197753202_H
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
#ifndef CANVASGROUP_T4083511760_H
#define CANVASGROUP_T4083511760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CanvasGroup
struct  CanvasGroup_t4083511760  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVASGROUP_T4083511760_H
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
#ifndef ARFACEANCHOR_T1844206636_H
#define ARFACEANCHOR_T1844206636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARFaceAnchor
struct  ARFaceAnchor_t1844206636  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.UnityARFaceAnchorData UnityEngine.XR.iOS.ARFaceAnchor::faceAnchorData
	UnityARFaceAnchorData_t2028622935  ___faceAnchorData_0;
	// UnityEngine.XR.iOS.ARFaceGeometry UnityEngine.XR.iOS.ARFaceAnchor::m_FaceGeometry
	ARFaceGeometry_t5139606 * ___m_FaceGeometry_2;

public:
	inline static int32_t get_offset_of_faceAnchorData_0() { return static_cast<int32_t>(offsetof(ARFaceAnchor_t1844206636, ___faceAnchorData_0)); }
	inline UnityARFaceAnchorData_t2028622935  get_faceAnchorData_0() const { return ___faceAnchorData_0; }
	inline UnityARFaceAnchorData_t2028622935 * get_address_of_faceAnchorData_0() { return &___faceAnchorData_0; }
	inline void set_faceAnchorData_0(UnityARFaceAnchorData_t2028622935  value)
	{
		___faceAnchorData_0 = value;
	}

	inline static int32_t get_offset_of_m_FaceGeometry_2() { return static_cast<int32_t>(offsetof(ARFaceAnchor_t1844206636, ___m_FaceGeometry_2)); }
	inline ARFaceGeometry_t5139606 * get_m_FaceGeometry_2() const { return ___m_FaceGeometry_2; }
	inline ARFaceGeometry_t5139606 ** get_address_of_m_FaceGeometry_2() { return &___m_FaceGeometry_2; }
	inline void set_m_FaceGeometry_2(ARFaceGeometry_t5139606 * value)
	{
		___m_FaceGeometry_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_FaceGeometry_2), value);
	}
};

struct ARFaceAnchor_t1844206636_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Single> UnityEngine.XR.iOS.ARFaceAnchor::blendshapesDictionary
	Dictionary_2_t1182523073 * ___blendshapesDictionary_1;
	// UnityEngine.XR.iOS.ARFaceAnchor/DictionaryVisitorHandler UnityEngine.XR.iOS.ARFaceAnchor::<>f__mg$cache0
	DictionaryVisitorHandler_t414487210 * ___U3CU3Ef__mgU24cache0_3;

public:
	inline static int32_t get_offset_of_blendshapesDictionary_1() { return static_cast<int32_t>(offsetof(ARFaceAnchor_t1844206636_StaticFields, ___blendshapesDictionary_1)); }
	inline Dictionary_2_t1182523073 * get_blendshapesDictionary_1() const { return ___blendshapesDictionary_1; }
	inline Dictionary_2_t1182523073 ** get_address_of_blendshapesDictionary_1() { return &___blendshapesDictionary_1; }
	inline void set_blendshapesDictionary_1(Dictionary_2_t1182523073 * value)
	{
		___blendshapesDictionary_1 = value;
		Il2CppCodeGenWriteBarrier((&___blendshapesDictionary_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_3() { return static_cast<int32_t>(offsetof(ARFaceAnchor_t1844206636_StaticFields, ___U3CU3Ef__mgU24cache0_3)); }
	inline DictionaryVisitorHandler_t414487210 * get_U3CU3Ef__mgU24cache0_3() const { return ___U3CU3Ef__mgU24cache0_3; }
	inline DictionaryVisitorHandler_t414487210 ** get_address_of_U3CU3Ef__mgU24cache0_3() { return &___U3CU3Ef__mgU24cache0_3; }
	inline void set_U3CU3Ef__mgU24cache0_3(DictionaryVisitorHandler_t414487210 * value)
	{
		___U3CU3Ef__mgU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARFACEANCHOR_T1844206636_H
#ifndef ARPLANEANCHOR_T2049372221_H
#define ARPLANEANCHOR_T2049372221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneAnchor
struct  ARPlaneAnchor_t2049372221  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.UnityARAnchorData UnityEngine.XR.iOS.ARPlaneAnchor::planeAnchorData
	UnityARAnchorData_t1157236668  ___planeAnchorData_0;
	// System.String UnityEngine.XR.iOS.ARPlaneAnchor::<identifierStr>k__BackingField
	String_t* ___U3CidentifierStrU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_planeAnchorData_0() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t2049372221, ___planeAnchorData_0)); }
	inline UnityARAnchorData_t1157236668  get_planeAnchorData_0() const { return ___planeAnchorData_0; }
	inline UnityARAnchorData_t1157236668 * get_address_of_planeAnchorData_0() { return &___planeAnchorData_0; }
	inline void set_planeAnchorData_0(UnityARAnchorData_t1157236668  value)
	{
		___planeAnchorData_0 = value;
	}

	inline static int32_t get_offset_of_U3CidentifierStrU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t2049372221, ___U3CidentifierStrU3Ek__BackingField_1)); }
	inline String_t* get_U3CidentifierStrU3Ek__BackingField_1() const { return ___U3CidentifierStrU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CidentifierStrU3Ek__BackingField_1() { return &___U3CidentifierStrU3Ek__BackingField_1; }
	inline void set_U3CidentifierStrU3Ek__BackingField_1(String_t* value)
	{
		___U3CidentifierStrU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CidentifierStrU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARPLANEANCHOR_T2049372221_H
#ifndef UNITYARCAMERA_T2069150450_H
#define UNITYARCAMERA_T2069150450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARCamera
struct  UnityARCamera_t2069150450 
{
public:
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::worldTransform
	UnityARMatrix4x4_t4073345847  ___worldTransform_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::projectionMatrix
	UnityARMatrix4x4_t4073345847  ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState UnityEngine.XR.iOS.UnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason UnityEngine.XR.iOS.UnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams UnityEngine.XR.iOS.UnityARCamera::videoParams
	UnityVideoParams_t4155354995  ___videoParams_4;
	// UnityEngine.XR.iOS.UnityARLightData UnityEngine.XR.iOS.UnityARCamera::lightData
	UnityARLightData_t2160616730  ___lightData_5;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::displayTransform
	UnityARMatrix4x4_t4073345847  ___displayTransform_6;
	// UnityEngine.Vector3[] UnityEngine.XR.iOS.UnityARCamera::pointCloudData
	Vector3U5BU5D_t1718750761* ___pointCloudData_7;
	// UnityEngine.XR.iOS.ARWorldMappingStatus UnityEngine.XR.iOS.UnityARCamera::worldMappingStatus
	int32_t ___worldMappingStatus_8;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___worldTransform_0)); }
	inline UnityARMatrix4x4_t4073345847  get_worldTransform_0() const { return ___worldTransform_0; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(UnityARMatrix4x4_t4073345847  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___projectionMatrix_1)); }
	inline UnityARMatrix4x4_t4073345847  get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(UnityARMatrix4x4_t4073345847  value)
	{
		___projectionMatrix_1 = value;
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___videoParams_4)); }
	inline UnityVideoParams_t4155354995  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t4155354995 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t4155354995  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightData_5() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___lightData_5)); }
	inline UnityARLightData_t2160616730  get_lightData_5() const { return ___lightData_5; }
	inline UnityARLightData_t2160616730 * get_address_of_lightData_5() { return &___lightData_5; }
	inline void set_lightData_5(UnityARLightData_t2160616730  value)
	{
		___lightData_5 = value;
	}

	inline static int32_t get_offset_of_displayTransform_6() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___displayTransform_6)); }
	inline UnityARMatrix4x4_t4073345847  get_displayTransform_6() const { return ___displayTransform_6; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_displayTransform_6() { return &___displayTransform_6; }
	inline void set_displayTransform_6(UnityARMatrix4x4_t4073345847  value)
	{
		___displayTransform_6 = value;
	}

	inline static int32_t get_offset_of_pointCloudData_7() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___pointCloudData_7)); }
	inline Vector3U5BU5D_t1718750761* get_pointCloudData_7() const { return ___pointCloudData_7; }
	inline Vector3U5BU5D_t1718750761** get_address_of_pointCloudData_7() { return &___pointCloudData_7; }
	inline void set_pointCloudData_7(Vector3U5BU5D_t1718750761* value)
	{
		___pointCloudData_7 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloudData_7), value);
	}

	inline static int32_t get_offset_of_worldMappingStatus_8() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___worldMappingStatus_8)); }
	inline int32_t get_worldMappingStatus_8() const { return ___worldMappingStatus_8; }
	inline int32_t* get_address_of_worldMappingStatus_8() { return &___worldMappingStatus_8; }
	inline void set_worldMappingStatus_8(int32_t value)
	{
		___worldMappingStatus_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.UnityARCamera
struct UnityARCamera_t2069150450_marshaled_pinvoke
{
	UnityARMatrix4x4_t4073345847  ___worldTransform_0;
	UnityARMatrix4x4_t4073345847  ___projectionMatrix_1;
	int32_t ___trackingState_2;
	int32_t ___trackingReason_3;
	UnityVideoParams_t4155354995  ___videoParams_4;
	UnityARLightData_t2160616730_marshaled_pinvoke ___lightData_5;
	UnityARMatrix4x4_t4073345847  ___displayTransform_6;
	Vector3_t3722313464 * ___pointCloudData_7;
	int32_t ___worldMappingStatus_8;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.UnityARCamera
struct UnityARCamera_t2069150450_marshaled_com
{
	UnityARMatrix4x4_t4073345847  ___worldTransform_0;
	UnityARMatrix4x4_t4073345847  ___projectionMatrix_1;
	int32_t ___trackingState_2;
	int32_t ___trackingReason_3;
	UnityVideoParams_t4155354995  ___videoParams_4;
	UnityARLightData_t2160616730_marshaled_com ___lightData_5;
	UnityARMatrix4x4_t4073345847  ___displayTransform_6;
	Vector3_t3722313464 * ___pointCloudData_7;
	int32_t ___worldMappingStatus_8;
};
#endif // UNITYARCAMERA_T2069150450_H
#ifndef ARFACEANCHORADDED_T3526051790_H
#define ARFACEANCHORADDED_T3526051790_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorAdded
struct  ARFaceAnchorAdded_t3526051790  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARFACEANCHORADDED_T3526051790_H
#ifndef ARFACEANCHORREMOVED_T2550278937_H
#define ARFACEANCHORREMOVED_T2550278937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorRemoved
struct  ARFaceAnchorRemoved_t2550278937  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARFACEANCHORREMOVED_T2550278937_H
#ifndef ARFACEANCHORUPDATED_T3258688950_H
#define ARFACEANCHORUPDATED_T3258688950_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorUpdated
struct  ARFaceAnchorUpdated_t3258688950  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARFACEANCHORUPDATED_T3258688950_H
#ifndef VIDEOFORMATENUMERATOR_T3131638505_H
#define VIDEOFORMATENUMERATOR_T3131638505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.VideoFormatEnumerator
struct  VideoFormatEnumerator_t3131638505  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOFORMATENUMERATOR_T3131638505_H
#ifndef INTERNAL_UNITYARCAMERA_T3920739388_H
#define INTERNAL_UNITYARCAMERA_T3920739388_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.internal_UnityARCamera
struct  internal_UnityARCamera_t3920739388 
{
public:
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::worldTransform
	UnityARMatrix4x4_t4073345847  ___worldTransform_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::projectionMatrix
	UnityARMatrix4x4_t4073345847  ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState UnityEngine.XR.iOS.internal_UnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason UnityEngine.XR.iOS.internal_UnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams UnityEngine.XR.iOS.internal_UnityARCamera::videoParams
	UnityVideoParams_t4155354995  ___videoParams_4;
	// UnityEngine.XR.iOS.UnityMarshalLightData UnityEngine.XR.iOS.internal_UnityARCamera::lightData
	UnityMarshalLightData_t1623228070  ___lightData_5;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::displayTransform
	UnityARMatrix4x4_t4073345847  ___displayTransform_6;
	// System.UInt32 UnityEngine.XR.iOS.internal_UnityARCamera::getPointCloudData
	uint32_t ___getPointCloudData_7;
	// System.UInt32 UnityEngine.XR.iOS.internal_UnityARCamera::getLightEstimation
	uint32_t ___getLightEstimation_8;
	// UnityEngine.XR.iOS.ARWorldMappingStatus UnityEngine.XR.iOS.internal_UnityARCamera::worldMappngStatus
	int32_t ___worldMappngStatus_9;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3920739388, ___worldTransform_0)); }
	inline UnityARMatrix4x4_t4073345847  get_worldTransform_0() const { return ___worldTransform_0; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(UnityARMatrix4x4_t4073345847  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3920739388, ___projectionMatrix_1)); }
	inline UnityARMatrix4x4_t4073345847  get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(UnityARMatrix4x4_t4073345847  value)
	{
		___projectionMatrix_1 = value;
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3920739388, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3920739388, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3920739388, ___videoParams_4)); }
	inline UnityVideoParams_t4155354995  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t4155354995 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t4155354995  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightData_5() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3920739388, ___lightData_5)); }
	inline UnityMarshalLightData_t1623228070  get_lightData_5() const { return ___lightData_5; }
	inline UnityMarshalLightData_t1623228070 * get_address_of_lightData_5() { return &___lightData_5; }
	inline void set_lightData_5(UnityMarshalLightData_t1623228070  value)
	{
		___lightData_5 = value;
	}

	inline static int32_t get_offset_of_displayTransform_6() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3920739388, ___displayTransform_6)); }
	inline UnityARMatrix4x4_t4073345847  get_displayTransform_6() const { return ___displayTransform_6; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_displayTransform_6() { return &___displayTransform_6; }
	inline void set_displayTransform_6(UnityARMatrix4x4_t4073345847  value)
	{
		___displayTransform_6 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_7() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3920739388, ___getPointCloudData_7)); }
	inline uint32_t get_getPointCloudData_7() const { return ___getPointCloudData_7; }
	inline uint32_t* get_address_of_getPointCloudData_7() { return &___getPointCloudData_7; }
	inline void set_getPointCloudData_7(uint32_t value)
	{
		___getPointCloudData_7 = value;
	}

	inline static int32_t get_offset_of_getLightEstimation_8() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3920739388, ___getLightEstimation_8)); }
	inline uint32_t get_getLightEstimation_8() const { return ___getLightEstimation_8; }
	inline uint32_t* get_address_of_getLightEstimation_8() { return &___getLightEstimation_8; }
	inline void set_getLightEstimation_8(uint32_t value)
	{
		___getLightEstimation_8 = value;
	}

	inline static int32_t get_offset_of_worldMappngStatus_9() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3920739388, ___worldMappngStatus_9)); }
	inline int32_t get_worldMappngStatus_9() const { return ___worldMappngStatus_9; }
	inline int32_t* get_address_of_worldMappngStatus_9() { return &___worldMappngStatus_9; }
	inline void set_worldMappngStatus_9(int32_t value)
	{
		___worldMappngStatus_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_UNITYARCAMERA_T3920739388_H
#ifndef VIDEOFORMATBUTTONPRESSED_T1187798507_H
#define VIDEOFORMATBUTTONPRESSED_T1187798507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VideoFormatButton/VideoFormatButtonPressed
struct  VideoFormatButtonPressed_t1187798507  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOFORMATBUTTONPRESSED_T1187798507_H
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
#ifndef UNITYARSESSIONNATIVEINTERFACE_T3929719369_H
#define UNITYARSESSIONNATIVEINTERFACE_T3929719369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct  UnityARSessionNativeInterface_t3929719369  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARSessionNativeInterface::m_NativeARSession
	intptr_t ___m_NativeARSession_25;

public:
	inline static int32_t get_offset_of_m_NativeARSession_25() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369, ___m_NativeARSession_25)); }
	inline intptr_t get_m_NativeARSession_25() const { return ___m_NativeARSession_25; }
	inline intptr_t* get_address_of_m_NativeARSession_25() { return &___m_NativeARSession_25; }
	inline void set_m_NativeARSession_25(intptr_t value)
	{
		___m_NativeARSession_25 = value;
	}
};

struct UnityARSessionNativeInterface_t3929719369_StaticFields
{
public:
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/AREnvironmentProbeAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::AREnvironmentProbeAnchorAddedEvent
	AREnvironmentProbeAnchorAdded_t3774282462 * ___AREnvironmentProbeAnchorAddedEvent_0;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/AREnvironmentProbeAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::AREnvironmentProbeAnchorUpdatedEvent
	AREnvironmentProbeAnchorUpdated_t3203876919 * ___AREnvironmentProbeAnchorUpdatedEvent_1;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/AREnvironmentProbeAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::AREnvironmentProbeAnchorRemovedEvent
	AREnvironmentProbeAnchorRemoved_t1734228730 * ___AREnvironmentProbeAnchorRemovedEvent_2;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARObjectAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARObjectAnchorAddedEvent
	ARObjectAnchorAdded_t7898010 * ___ARObjectAnchorAddedEvent_3;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARObjectAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARObjectAnchorUpdatedEvent
	ARObjectAnchorUpdated_t2167628997 * ___ARObjectAnchorUpdatedEvent_4;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARObjectAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARObjectAnchorRemovedEvent
	ARObjectAnchorRemoved_t3027817546 * ___ARObjectAnchorRemovedEvent_5;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFrameUpdatedEvent
	ARFrameUpdate_t1157215840 * ___ARFrameUpdatedEvent_6;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorAddedEvent
	ARAnchorAdded_t1608557165 * ___ARAnchorAddedEvent_7;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorUpdatedEvent
	ARAnchorUpdated_t3113222537 * ___ARAnchorUpdatedEvent_8;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorRemovedEvent
	ARAnchorRemoved_t4030593004 * ___ARAnchorRemovedEvent_9;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorAddedEvent
	ARUserAnchorAdded_t1851120876 * ___ARUserAnchorAddedEvent_10;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorUpdatedEvent
	ARUserAnchorUpdated_t4007601678 * ___ARUserAnchorUpdatedEvent_11;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorRemovedEvent
	ARUserAnchorRemoved_t23344545 * ___ARUserAnchorRemovedEvent_12;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFaceAnchorAddedEvent
	ARFaceAnchorAdded_t3526051790 * ___ARFaceAnchorAddedEvent_13;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFaceAnchorUpdatedEvent
	ARFaceAnchorUpdated_t3258688950 * ___ARFaceAnchorUpdatedEvent_14;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFaceAnchorRemovedEvent
	ARFaceAnchorRemoved_t2550278937 * ___ARFaceAnchorRemovedEvent_15;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARImageAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARImageAnchorAddedEvent
	ARImageAnchorAdded_t763367172 * ___ARImageAnchorAddedEvent_16;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARImageAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARImageAnchorUpdatedEvent
	ARImageAnchorUpdated_t1988379239 * ___ARImageAnchorUpdatedEvent_17;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARImageAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARImageAnchorRemovedEvent
	ARImageAnchorRemoved_t841752569 * ___ARImageAnchorRemovedEvent_18;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionFailedEvent
	ARSessionFailed_t2125002991 * ___ARSessionFailedEvent_19;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionInterruptedEvent
	ARSessionCallback_t3772093212 * ___ARSessionInterruptedEvent_20;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessioninterruptionEndedEvent
	ARSessionCallback_t3772093212 * ___ARSessioninterruptionEndedEvent_21;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionTrackingChangedEvent
	ARSessionTrackingChanged_t923029411 * ___ARSessionTrackingChangedEvent_22;
	// System.Boolean UnityEngine.XR.iOS.UnityARSessionNativeInterface::<ARSessionShouldAttemptRelocalization>k__BackingField
	bool ___U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_23;
	// UnityEngine.XR.iOS.UnityARCamera UnityEngine.XR.iOS.UnityARSessionNativeInterface::s_Camera
	UnityARCamera_t2069150450  ___s_Camera_24;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.UnityARSessionNativeInterface::s_UnityARSessionNativeInterface
	UnityARSessionNativeInterface_t3929719369 * ___s_UnityARSessionNativeInterface_26;
	// UnityEngine.XR.iOS.ARFaceAnchor UnityEngine.XR.iOS.UnityARSessionNativeInterface::arFaceAnchor
	ARFaceAnchor_t1844206636 * ___arFaceAnchor_27;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache0
	internal_ARFrameUpdate_t3254989823 * ___U3CU3Ef__mgU24cache0_28;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache1
	ARSessionFailed_t2125002991 * ___U3CU3Ef__mgU24cache1_29;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache2
	ARSessionCallback_t3772093212 * ___U3CU3Ef__mgU24cache2_30;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache3
	ARSessionCallback_t3772093212 * ___U3CU3Ef__mgU24cache3_31;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionLocalizeCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache4
	ARSessionLocalizeCallback_t3284060032 * ___U3CU3Ef__mgU24cache4_32;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache5
	internal_ARSessionTrackingChanged_t1988849735 * ___U3CU3Ef__mgU24cache5_33;
	// System.Action`2<System.IntPtr,System.IntPtr> UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache6
	Action_2_t1399479586 * ___U3CU3Ef__mgU24cache6_34;
	// System.Action`2<System.IntPtr,System.IntPtr> UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache7
	Action_2_t1399479586 * ___U3CU3Ef__mgU24cache7_35;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache8
	internal_ARAnchorAdded_t1565083332 * ___U3CU3Ef__mgU24cache8_36;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache9
	internal_ARAnchorUpdated_t2645242205 * ___U3CU3Ef__mgU24cache9_37;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cacheA
	internal_ARAnchorRemoved_t3371657877 * ___U3CU3Ef__mgU24cacheA_38;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cacheB
	internal_ARUserAnchorAdded_t3285282493 * ___U3CU3Ef__mgU24cacheB_39;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cacheC
	internal_ARUserAnchorUpdated_t3964727538 * ___U3CU3Ef__mgU24cacheC_40;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cacheD
	internal_ARUserAnchorRemoved_t386858594 * ___U3CU3Ef__mgU24cacheD_41;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cacheE
	internal_ARFaceAnchorAdded_t1021040265 * ___U3CU3Ef__mgU24cacheE_42;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cacheF
	internal_ARFaceAnchorUpdated_t3423900432 * ___U3CU3Ef__mgU24cacheF_43;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache10
	internal_ARFaceAnchorRemoved_t2563439402 * ___U3CU3Ef__mgU24cache10_44;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARImageAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache11
	internal_ARImageAnchorAdded_t958088978 * ___U3CU3Ef__mgU24cache11_45;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARImageAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache12
	internal_ARImageAnchorUpdated_t294417830 * ___U3CU3Ef__mgU24cache12_46;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARImageAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache13
	internal_ARImageAnchorRemoved_t1751104571 * ___U3CU3Ef__mgU24cache13_47;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARObjectAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache14
	internal_ARObjectAnchorAdded_t1222097505 * ___U3CU3Ef__mgU24cache14_48;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARObjectAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache15
	internal_ARObjectAnchorUpdated_t3492445690 * ___U3CU3Ef__mgU24cache15_49;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARObjectAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache16
	internal_ARObjectAnchorRemoved_t1225376916 * ___U3CU3Ef__mgU24cache16_50;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_AREnvironmentProbeAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache17
	internal_AREnvironmentProbeAnchorAdded_t1786467930 * ___U3CU3Ef__mgU24cache17_51;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_AREnvironmentProbeAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache18
	internal_AREnvironmentProbeAnchorUpdated_t3576551915 * ___U3CU3Ef__mgU24cache18_52;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_AREnvironmentProbeAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache19
	internal_AREnvironmentProbeAnchorRemoved_t3912910743 * ___U3CU3Ef__mgU24cache19_53;

public:
	inline static int32_t get_offset_of_AREnvironmentProbeAnchorAddedEvent_0() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___AREnvironmentProbeAnchorAddedEvent_0)); }
	inline AREnvironmentProbeAnchorAdded_t3774282462 * get_AREnvironmentProbeAnchorAddedEvent_0() const { return ___AREnvironmentProbeAnchorAddedEvent_0; }
	inline AREnvironmentProbeAnchorAdded_t3774282462 ** get_address_of_AREnvironmentProbeAnchorAddedEvent_0() { return &___AREnvironmentProbeAnchorAddedEvent_0; }
	inline void set_AREnvironmentProbeAnchorAddedEvent_0(AREnvironmentProbeAnchorAdded_t3774282462 * value)
	{
		___AREnvironmentProbeAnchorAddedEvent_0 = value;
		Il2CppCodeGenWriteBarrier((&___AREnvironmentProbeAnchorAddedEvent_0), value);
	}

	inline static int32_t get_offset_of_AREnvironmentProbeAnchorUpdatedEvent_1() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___AREnvironmentProbeAnchorUpdatedEvent_1)); }
	inline AREnvironmentProbeAnchorUpdated_t3203876919 * get_AREnvironmentProbeAnchorUpdatedEvent_1() const { return ___AREnvironmentProbeAnchorUpdatedEvent_1; }
	inline AREnvironmentProbeAnchorUpdated_t3203876919 ** get_address_of_AREnvironmentProbeAnchorUpdatedEvent_1() { return &___AREnvironmentProbeAnchorUpdatedEvent_1; }
	inline void set_AREnvironmentProbeAnchorUpdatedEvent_1(AREnvironmentProbeAnchorUpdated_t3203876919 * value)
	{
		___AREnvironmentProbeAnchorUpdatedEvent_1 = value;
		Il2CppCodeGenWriteBarrier((&___AREnvironmentProbeAnchorUpdatedEvent_1), value);
	}

	inline static int32_t get_offset_of_AREnvironmentProbeAnchorRemovedEvent_2() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___AREnvironmentProbeAnchorRemovedEvent_2)); }
	inline AREnvironmentProbeAnchorRemoved_t1734228730 * get_AREnvironmentProbeAnchorRemovedEvent_2() const { return ___AREnvironmentProbeAnchorRemovedEvent_2; }
	inline AREnvironmentProbeAnchorRemoved_t1734228730 ** get_address_of_AREnvironmentProbeAnchorRemovedEvent_2() { return &___AREnvironmentProbeAnchorRemovedEvent_2; }
	inline void set_AREnvironmentProbeAnchorRemovedEvent_2(AREnvironmentProbeAnchorRemoved_t1734228730 * value)
	{
		___AREnvironmentProbeAnchorRemovedEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___AREnvironmentProbeAnchorRemovedEvent_2), value);
	}

	inline static int32_t get_offset_of_ARObjectAnchorAddedEvent_3() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARObjectAnchorAddedEvent_3)); }
	inline ARObjectAnchorAdded_t7898010 * get_ARObjectAnchorAddedEvent_3() const { return ___ARObjectAnchorAddedEvent_3; }
	inline ARObjectAnchorAdded_t7898010 ** get_address_of_ARObjectAnchorAddedEvent_3() { return &___ARObjectAnchorAddedEvent_3; }
	inline void set_ARObjectAnchorAddedEvent_3(ARObjectAnchorAdded_t7898010 * value)
	{
		___ARObjectAnchorAddedEvent_3 = value;
		Il2CppCodeGenWriteBarrier((&___ARObjectAnchorAddedEvent_3), value);
	}

	inline static int32_t get_offset_of_ARObjectAnchorUpdatedEvent_4() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARObjectAnchorUpdatedEvent_4)); }
	inline ARObjectAnchorUpdated_t2167628997 * get_ARObjectAnchorUpdatedEvent_4() const { return ___ARObjectAnchorUpdatedEvent_4; }
	inline ARObjectAnchorUpdated_t2167628997 ** get_address_of_ARObjectAnchorUpdatedEvent_4() { return &___ARObjectAnchorUpdatedEvent_4; }
	inline void set_ARObjectAnchorUpdatedEvent_4(ARObjectAnchorUpdated_t2167628997 * value)
	{
		___ARObjectAnchorUpdatedEvent_4 = value;
		Il2CppCodeGenWriteBarrier((&___ARObjectAnchorUpdatedEvent_4), value);
	}

	inline static int32_t get_offset_of_ARObjectAnchorRemovedEvent_5() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARObjectAnchorRemovedEvent_5)); }
	inline ARObjectAnchorRemoved_t3027817546 * get_ARObjectAnchorRemovedEvent_5() const { return ___ARObjectAnchorRemovedEvent_5; }
	inline ARObjectAnchorRemoved_t3027817546 ** get_address_of_ARObjectAnchorRemovedEvent_5() { return &___ARObjectAnchorRemovedEvent_5; }
	inline void set_ARObjectAnchorRemovedEvent_5(ARObjectAnchorRemoved_t3027817546 * value)
	{
		___ARObjectAnchorRemovedEvent_5 = value;
		Il2CppCodeGenWriteBarrier((&___ARObjectAnchorRemovedEvent_5), value);
	}

	inline static int32_t get_offset_of_ARFrameUpdatedEvent_6() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARFrameUpdatedEvent_6)); }
	inline ARFrameUpdate_t1157215840 * get_ARFrameUpdatedEvent_6() const { return ___ARFrameUpdatedEvent_6; }
	inline ARFrameUpdate_t1157215840 ** get_address_of_ARFrameUpdatedEvent_6() { return &___ARFrameUpdatedEvent_6; }
	inline void set_ARFrameUpdatedEvent_6(ARFrameUpdate_t1157215840 * value)
	{
		___ARFrameUpdatedEvent_6 = value;
		Il2CppCodeGenWriteBarrier((&___ARFrameUpdatedEvent_6), value);
	}

	inline static int32_t get_offset_of_ARAnchorAddedEvent_7() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARAnchorAddedEvent_7)); }
	inline ARAnchorAdded_t1608557165 * get_ARAnchorAddedEvent_7() const { return ___ARAnchorAddedEvent_7; }
	inline ARAnchorAdded_t1608557165 ** get_address_of_ARAnchorAddedEvent_7() { return &___ARAnchorAddedEvent_7; }
	inline void set_ARAnchorAddedEvent_7(ARAnchorAdded_t1608557165 * value)
	{
		___ARAnchorAddedEvent_7 = value;
		Il2CppCodeGenWriteBarrier((&___ARAnchorAddedEvent_7), value);
	}

	inline static int32_t get_offset_of_ARAnchorUpdatedEvent_8() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARAnchorUpdatedEvent_8)); }
	inline ARAnchorUpdated_t3113222537 * get_ARAnchorUpdatedEvent_8() const { return ___ARAnchorUpdatedEvent_8; }
	inline ARAnchorUpdated_t3113222537 ** get_address_of_ARAnchorUpdatedEvent_8() { return &___ARAnchorUpdatedEvent_8; }
	inline void set_ARAnchorUpdatedEvent_8(ARAnchorUpdated_t3113222537 * value)
	{
		___ARAnchorUpdatedEvent_8 = value;
		Il2CppCodeGenWriteBarrier((&___ARAnchorUpdatedEvent_8), value);
	}

	inline static int32_t get_offset_of_ARAnchorRemovedEvent_9() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARAnchorRemovedEvent_9)); }
	inline ARAnchorRemoved_t4030593004 * get_ARAnchorRemovedEvent_9() const { return ___ARAnchorRemovedEvent_9; }
	inline ARAnchorRemoved_t4030593004 ** get_address_of_ARAnchorRemovedEvent_9() { return &___ARAnchorRemovedEvent_9; }
	inline void set_ARAnchorRemovedEvent_9(ARAnchorRemoved_t4030593004 * value)
	{
		___ARAnchorRemovedEvent_9 = value;
		Il2CppCodeGenWriteBarrier((&___ARAnchorRemovedEvent_9), value);
	}

	inline static int32_t get_offset_of_ARUserAnchorAddedEvent_10() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARUserAnchorAddedEvent_10)); }
	inline ARUserAnchorAdded_t1851120876 * get_ARUserAnchorAddedEvent_10() const { return ___ARUserAnchorAddedEvent_10; }
	inline ARUserAnchorAdded_t1851120876 ** get_address_of_ARUserAnchorAddedEvent_10() { return &___ARUserAnchorAddedEvent_10; }
	inline void set_ARUserAnchorAddedEvent_10(ARUserAnchorAdded_t1851120876 * value)
	{
		___ARUserAnchorAddedEvent_10 = value;
		Il2CppCodeGenWriteBarrier((&___ARUserAnchorAddedEvent_10), value);
	}

	inline static int32_t get_offset_of_ARUserAnchorUpdatedEvent_11() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARUserAnchorUpdatedEvent_11)); }
	inline ARUserAnchorUpdated_t4007601678 * get_ARUserAnchorUpdatedEvent_11() const { return ___ARUserAnchorUpdatedEvent_11; }
	inline ARUserAnchorUpdated_t4007601678 ** get_address_of_ARUserAnchorUpdatedEvent_11() { return &___ARUserAnchorUpdatedEvent_11; }
	inline void set_ARUserAnchorUpdatedEvent_11(ARUserAnchorUpdated_t4007601678 * value)
	{
		___ARUserAnchorUpdatedEvent_11 = value;
		Il2CppCodeGenWriteBarrier((&___ARUserAnchorUpdatedEvent_11), value);
	}

	inline static int32_t get_offset_of_ARUserAnchorRemovedEvent_12() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARUserAnchorRemovedEvent_12)); }
	inline ARUserAnchorRemoved_t23344545 * get_ARUserAnchorRemovedEvent_12() const { return ___ARUserAnchorRemovedEvent_12; }
	inline ARUserAnchorRemoved_t23344545 ** get_address_of_ARUserAnchorRemovedEvent_12() { return &___ARUserAnchorRemovedEvent_12; }
	inline void set_ARUserAnchorRemovedEvent_12(ARUserAnchorRemoved_t23344545 * value)
	{
		___ARUserAnchorRemovedEvent_12 = value;
		Il2CppCodeGenWriteBarrier((&___ARUserAnchorRemovedEvent_12), value);
	}

	inline static int32_t get_offset_of_ARFaceAnchorAddedEvent_13() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARFaceAnchorAddedEvent_13)); }
	inline ARFaceAnchorAdded_t3526051790 * get_ARFaceAnchorAddedEvent_13() const { return ___ARFaceAnchorAddedEvent_13; }
	inline ARFaceAnchorAdded_t3526051790 ** get_address_of_ARFaceAnchorAddedEvent_13() { return &___ARFaceAnchorAddedEvent_13; }
	inline void set_ARFaceAnchorAddedEvent_13(ARFaceAnchorAdded_t3526051790 * value)
	{
		___ARFaceAnchorAddedEvent_13 = value;
		Il2CppCodeGenWriteBarrier((&___ARFaceAnchorAddedEvent_13), value);
	}

	inline static int32_t get_offset_of_ARFaceAnchorUpdatedEvent_14() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARFaceAnchorUpdatedEvent_14)); }
	inline ARFaceAnchorUpdated_t3258688950 * get_ARFaceAnchorUpdatedEvent_14() const { return ___ARFaceAnchorUpdatedEvent_14; }
	inline ARFaceAnchorUpdated_t3258688950 ** get_address_of_ARFaceAnchorUpdatedEvent_14() { return &___ARFaceAnchorUpdatedEvent_14; }
	inline void set_ARFaceAnchorUpdatedEvent_14(ARFaceAnchorUpdated_t3258688950 * value)
	{
		___ARFaceAnchorUpdatedEvent_14 = value;
		Il2CppCodeGenWriteBarrier((&___ARFaceAnchorUpdatedEvent_14), value);
	}

	inline static int32_t get_offset_of_ARFaceAnchorRemovedEvent_15() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARFaceAnchorRemovedEvent_15)); }
	inline ARFaceAnchorRemoved_t2550278937 * get_ARFaceAnchorRemovedEvent_15() const { return ___ARFaceAnchorRemovedEvent_15; }
	inline ARFaceAnchorRemoved_t2550278937 ** get_address_of_ARFaceAnchorRemovedEvent_15() { return &___ARFaceAnchorRemovedEvent_15; }
	inline void set_ARFaceAnchorRemovedEvent_15(ARFaceAnchorRemoved_t2550278937 * value)
	{
		___ARFaceAnchorRemovedEvent_15 = value;
		Il2CppCodeGenWriteBarrier((&___ARFaceAnchorRemovedEvent_15), value);
	}

	inline static int32_t get_offset_of_ARImageAnchorAddedEvent_16() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARImageAnchorAddedEvent_16)); }
	inline ARImageAnchorAdded_t763367172 * get_ARImageAnchorAddedEvent_16() const { return ___ARImageAnchorAddedEvent_16; }
	inline ARImageAnchorAdded_t763367172 ** get_address_of_ARImageAnchorAddedEvent_16() { return &___ARImageAnchorAddedEvent_16; }
	inline void set_ARImageAnchorAddedEvent_16(ARImageAnchorAdded_t763367172 * value)
	{
		___ARImageAnchorAddedEvent_16 = value;
		Il2CppCodeGenWriteBarrier((&___ARImageAnchorAddedEvent_16), value);
	}

	inline static int32_t get_offset_of_ARImageAnchorUpdatedEvent_17() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARImageAnchorUpdatedEvent_17)); }
	inline ARImageAnchorUpdated_t1988379239 * get_ARImageAnchorUpdatedEvent_17() const { return ___ARImageAnchorUpdatedEvent_17; }
	inline ARImageAnchorUpdated_t1988379239 ** get_address_of_ARImageAnchorUpdatedEvent_17() { return &___ARImageAnchorUpdatedEvent_17; }
	inline void set_ARImageAnchorUpdatedEvent_17(ARImageAnchorUpdated_t1988379239 * value)
	{
		___ARImageAnchorUpdatedEvent_17 = value;
		Il2CppCodeGenWriteBarrier((&___ARImageAnchorUpdatedEvent_17), value);
	}

	inline static int32_t get_offset_of_ARImageAnchorRemovedEvent_18() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARImageAnchorRemovedEvent_18)); }
	inline ARImageAnchorRemoved_t841752569 * get_ARImageAnchorRemovedEvent_18() const { return ___ARImageAnchorRemovedEvent_18; }
	inline ARImageAnchorRemoved_t841752569 ** get_address_of_ARImageAnchorRemovedEvent_18() { return &___ARImageAnchorRemovedEvent_18; }
	inline void set_ARImageAnchorRemovedEvent_18(ARImageAnchorRemoved_t841752569 * value)
	{
		___ARImageAnchorRemovedEvent_18 = value;
		Il2CppCodeGenWriteBarrier((&___ARImageAnchorRemovedEvent_18), value);
	}

	inline static int32_t get_offset_of_ARSessionFailedEvent_19() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARSessionFailedEvent_19)); }
	inline ARSessionFailed_t2125002991 * get_ARSessionFailedEvent_19() const { return ___ARSessionFailedEvent_19; }
	inline ARSessionFailed_t2125002991 ** get_address_of_ARSessionFailedEvent_19() { return &___ARSessionFailedEvent_19; }
	inline void set_ARSessionFailedEvent_19(ARSessionFailed_t2125002991 * value)
	{
		___ARSessionFailedEvent_19 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessionFailedEvent_19), value);
	}

	inline static int32_t get_offset_of_ARSessionInterruptedEvent_20() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARSessionInterruptedEvent_20)); }
	inline ARSessionCallback_t3772093212 * get_ARSessionInterruptedEvent_20() const { return ___ARSessionInterruptedEvent_20; }
	inline ARSessionCallback_t3772093212 ** get_address_of_ARSessionInterruptedEvent_20() { return &___ARSessionInterruptedEvent_20; }
	inline void set_ARSessionInterruptedEvent_20(ARSessionCallback_t3772093212 * value)
	{
		___ARSessionInterruptedEvent_20 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessionInterruptedEvent_20), value);
	}

	inline static int32_t get_offset_of_ARSessioninterruptionEndedEvent_21() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARSessioninterruptionEndedEvent_21)); }
	inline ARSessionCallback_t3772093212 * get_ARSessioninterruptionEndedEvent_21() const { return ___ARSessioninterruptionEndedEvent_21; }
	inline ARSessionCallback_t3772093212 ** get_address_of_ARSessioninterruptionEndedEvent_21() { return &___ARSessioninterruptionEndedEvent_21; }
	inline void set_ARSessioninterruptionEndedEvent_21(ARSessionCallback_t3772093212 * value)
	{
		___ARSessioninterruptionEndedEvent_21 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessioninterruptionEndedEvent_21), value);
	}

	inline static int32_t get_offset_of_ARSessionTrackingChangedEvent_22() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARSessionTrackingChangedEvent_22)); }
	inline ARSessionTrackingChanged_t923029411 * get_ARSessionTrackingChangedEvent_22() const { return ___ARSessionTrackingChangedEvent_22; }
	inline ARSessionTrackingChanged_t923029411 ** get_address_of_ARSessionTrackingChangedEvent_22() { return &___ARSessionTrackingChangedEvent_22; }
	inline void set_ARSessionTrackingChangedEvent_22(ARSessionTrackingChanged_t923029411 * value)
	{
		___ARSessionTrackingChangedEvent_22 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessionTrackingChangedEvent_22), value);
	}

	inline static int32_t get_offset_of_U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_23)); }
	inline bool get_U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_23() const { return ___U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_23; }
	inline bool* get_address_of_U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_23() { return &___U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_23; }
	inline void set_U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_23(bool value)
	{
		___U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_s_Camera_24() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___s_Camera_24)); }
	inline UnityARCamera_t2069150450  get_s_Camera_24() const { return ___s_Camera_24; }
	inline UnityARCamera_t2069150450 * get_address_of_s_Camera_24() { return &___s_Camera_24; }
	inline void set_s_Camera_24(UnityARCamera_t2069150450  value)
	{
		___s_Camera_24 = value;
	}

	inline static int32_t get_offset_of_s_UnityARSessionNativeInterface_26() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___s_UnityARSessionNativeInterface_26)); }
	inline UnityARSessionNativeInterface_t3929719369 * get_s_UnityARSessionNativeInterface_26() const { return ___s_UnityARSessionNativeInterface_26; }
	inline UnityARSessionNativeInterface_t3929719369 ** get_address_of_s_UnityARSessionNativeInterface_26() { return &___s_UnityARSessionNativeInterface_26; }
	inline void set_s_UnityARSessionNativeInterface_26(UnityARSessionNativeInterface_t3929719369 * value)
	{
		___s_UnityARSessionNativeInterface_26 = value;
		Il2CppCodeGenWriteBarrier((&___s_UnityARSessionNativeInterface_26), value);
	}

	inline static int32_t get_offset_of_arFaceAnchor_27() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___arFaceAnchor_27)); }
	inline ARFaceAnchor_t1844206636 * get_arFaceAnchor_27() const { return ___arFaceAnchor_27; }
	inline ARFaceAnchor_t1844206636 ** get_address_of_arFaceAnchor_27() { return &___arFaceAnchor_27; }
	inline void set_arFaceAnchor_27(ARFaceAnchor_t1844206636 * value)
	{
		___arFaceAnchor_27 = value;
		Il2CppCodeGenWriteBarrier((&___arFaceAnchor_27), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_28() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache0_28)); }
	inline internal_ARFrameUpdate_t3254989823 * get_U3CU3Ef__mgU24cache0_28() const { return ___U3CU3Ef__mgU24cache0_28; }
	inline internal_ARFrameUpdate_t3254989823 ** get_address_of_U3CU3Ef__mgU24cache0_28() { return &___U3CU3Ef__mgU24cache0_28; }
	inline void set_U3CU3Ef__mgU24cache0_28(internal_ARFrameUpdate_t3254989823 * value)
	{
		___U3CU3Ef__mgU24cache0_28 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_28), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_29() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache1_29)); }
	inline ARSessionFailed_t2125002991 * get_U3CU3Ef__mgU24cache1_29() const { return ___U3CU3Ef__mgU24cache1_29; }
	inline ARSessionFailed_t2125002991 ** get_address_of_U3CU3Ef__mgU24cache1_29() { return &___U3CU3Ef__mgU24cache1_29; }
	inline void set_U3CU3Ef__mgU24cache1_29(ARSessionFailed_t2125002991 * value)
	{
		___U3CU3Ef__mgU24cache1_29 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_29), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_30() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache2_30)); }
	inline ARSessionCallback_t3772093212 * get_U3CU3Ef__mgU24cache2_30() const { return ___U3CU3Ef__mgU24cache2_30; }
	inline ARSessionCallback_t3772093212 ** get_address_of_U3CU3Ef__mgU24cache2_30() { return &___U3CU3Ef__mgU24cache2_30; }
	inline void set_U3CU3Ef__mgU24cache2_30(ARSessionCallback_t3772093212 * value)
	{
		___U3CU3Ef__mgU24cache2_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_30), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_31() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache3_31)); }
	inline ARSessionCallback_t3772093212 * get_U3CU3Ef__mgU24cache3_31() const { return ___U3CU3Ef__mgU24cache3_31; }
	inline ARSessionCallback_t3772093212 ** get_address_of_U3CU3Ef__mgU24cache3_31() { return &___U3CU3Ef__mgU24cache3_31; }
	inline void set_U3CU3Ef__mgU24cache3_31(ARSessionCallback_t3772093212 * value)
	{
		___U3CU3Ef__mgU24cache3_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_32() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache4_32)); }
	inline ARSessionLocalizeCallback_t3284060032 * get_U3CU3Ef__mgU24cache4_32() const { return ___U3CU3Ef__mgU24cache4_32; }
	inline ARSessionLocalizeCallback_t3284060032 ** get_address_of_U3CU3Ef__mgU24cache4_32() { return &___U3CU3Ef__mgU24cache4_32; }
	inline void set_U3CU3Ef__mgU24cache4_32(ARSessionLocalizeCallback_t3284060032 * value)
	{
		___U3CU3Ef__mgU24cache4_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4_32), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_33() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache5_33)); }
	inline internal_ARSessionTrackingChanged_t1988849735 * get_U3CU3Ef__mgU24cache5_33() const { return ___U3CU3Ef__mgU24cache5_33; }
	inline internal_ARSessionTrackingChanged_t1988849735 ** get_address_of_U3CU3Ef__mgU24cache5_33() { return &___U3CU3Ef__mgU24cache5_33; }
	inline void set_U3CU3Ef__mgU24cache5_33(internal_ARSessionTrackingChanged_t1988849735 * value)
	{
		___U3CU3Ef__mgU24cache5_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache5_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_34() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache6_34)); }
	inline Action_2_t1399479586 * get_U3CU3Ef__mgU24cache6_34() const { return ___U3CU3Ef__mgU24cache6_34; }
	inline Action_2_t1399479586 ** get_address_of_U3CU3Ef__mgU24cache6_34() { return &___U3CU3Ef__mgU24cache6_34; }
	inline void set_U3CU3Ef__mgU24cache6_34(Action_2_t1399479586 * value)
	{
		___U3CU3Ef__mgU24cache6_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache6_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7_35() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache7_35)); }
	inline Action_2_t1399479586 * get_U3CU3Ef__mgU24cache7_35() const { return ___U3CU3Ef__mgU24cache7_35; }
	inline Action_2_t1399479586 ** get_address_of_U3CU3Ef__mgU24cache7_35() { return &___U3CU3Ef__mgU24cache7_35; }
	inline void set_U3CU3Ef__mgU24cache7_35(Action_2_t1399479586 * value)
	{
		___U3CU3Ef__mgU24cache7_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache7_35), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8_36() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache8_36)); }
	inline internal_ARAnchorAdded_t1565083332 * get_U3CU3Ef__mgU24cache8_36() const { return ___U3CU3Ef__mgU24cache8_36; }
	inline internal_ARAnchorAdded_t1565083332 ** get_address_of_U3CU3Ef__mgU24cache8_36() { return &___U3CU3Ef__mgU24cache8_36; }
	inline void set_U3CU3Ef__mgU24cache8_36(internal_ARAnchorAdded_t1565083332 * value)
	{
		___U3CU3Ef__mgU24cache8_36 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache8_36), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache9_37() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache9_37)); }
	inline internal_ARAnchorUpdated_t2645242205 * get_U3CU3Ef__mgU24cache9_37() const { return ___U3CU3Ef__mgU24cache9_37; }
	inline internal_ARAnchorUpdated_t2645242205 ** get_address_of_U3CU3Ef__mgU24cache9_37() { return &___U3CU3Ef__mgU24cache9_37; }
	inline void set_U3CU3Ef__mgU24cache9_37(internal_ARAnchorUpdated_t2645242205 * value)
	{
		___U3CU3Ef__mgU24cache9_37 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache9_37), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA_38() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cacheA_38)); }
	inline internal_ARAnchorRemoved_t3371657877 * get_U3CU3Ef__mgU24cacheA_38() const { return ___U3CU3Ef__mgU24cacheA_38; }
	inline internal_ARAnchorRemoved_t3371657877 ** get_address_of_U3CU3Ef__mgU24cacheA_38() { return &___U3CU3Ef__mgU24cacheA_38; }
	inline void set_U3CU3Ef__mgU24cacheA_38(internal_ARAnchorRemoved_t3371657877 * value)
	{
		___U3CU3Ef__mgU24cacheA_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheA_38), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheB_39() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cacheB_39)); }
	inline internal_ARUserAnchorAdded_t3285282493 * get_U3CU3Ef__mgU24cacheB_39() const { return ___U3CU3Ef__mgU24cacheB_39; }
	inline internal_ARUserAnchorAdded_t3285282493 ** get_address_of_U3CU3Ef__mgU24cacheB_39() { return &___U3CU3Ef__mgU24cacheB_39; }
	inline void set_U3CU3Ef__mgU24cacheB_39(internal_ARUserAnchorAdded_t3285282493 * value)
	{
		___U3CU3Ef__mgU24cacheB_39 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheB_39), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheC_40() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cacheC_40)); }
	inline internal_ARUserAnchorUpdated_t3964727538 * get_U3CU3Ef__mgU24cacheC_40() const { return ___U3CU3Ef__mgU24cacheC_40; }
	inline internal_ARUserAnchorUpdated_t3964727538 ** get_address_of_U3CU3Ef__mgU24cacheC_40() { return &___U3CU3Ef__mgU24cacheC_40; }
	inline void set_U3CU3Ef__mgU24cacheC_40(internal_ARUserAnchorUpdated_t3964727538 * value)
	{
		___U3CU3Ef__mgU24cacheC_40 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheC_40), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheD_41() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cacheD_41)); }
	inline internal_ARUserAnchorRemoved_t386858594 * get_U3CU3Ef__mgU24cacheD_41() const { return ___U3CU3Ef__mgU24cacheD_41; }
	inline internal_ARUserAnchorRemoved_t386858594 ** get_address_of_U3CU3Ef__mgU24cacheD_41() { return &___U3CU3Ef__mgU24cacheD_41; }
	inline void set_U3CU3Ef__mgU24cacheD_41(internal_ARUserAnchorRemoved_t386858594 * value)
	{
		___U3CU3Ef__mgU24cacheD_41 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheD_41), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheE_42() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cacheE_42)); }
	inline internal_ARFaceAnchorAdded_t1021040265 * get_U3CU3Ef__mgU24cacheE_42() const { return ___U3CU3Ef__mgU24cacheE_42; }
	inline internal_ARFaceAnchorAdded_t1021040265 ** get_address_of_U3CU3Ef__mgU24cacheE_42() { return &___U3CU3Ef__mgU24cacheE_42; }
	inline void set_U3CU3Ef__mgU24cacheE_42(internal_ARFaceAnchorAdded_t1021040265 * value)
	{
		___U3CU3Ef__mgU24cacheE_42 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheE_42), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheF_43() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cacheF_43)); }
	inline internal_ARFaceAnchorUpdated_t3423900432 * get_U3CU3Ef__mgU24cacheF_43() const { return ___U3CU3Ef__mgU24cacheF_43; }
	inline internal_ARFaceAnchorUpdated_t3423900432 ** get_address_of_U3CU3Ef__mgU24cacheF_43() { return &___U3CU3Ef__mgU24cacheF_43; }
	inline void set_U3CU3Ef__mgU24cacheF_43(internal_ARFaceAnchorUpdated_t3423900432 * value)
	{
		___U3CU3Ef__mgU24cacheF_43 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheF_43), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache10_44() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache10_44)); }
	inline internal_ARFaceAnchorRemoved_t2563439402 * get_U3CU3Ef__mgU24cache10_44() const { return ___U3CU3Ef__mgU24cache10_44; }
	inline internal_ARFaceAnchorRemoved_t2563439402 ** get_address_of_U3CU3Ef__mgU24cache10_44() { return &___U3CU3Ef__mgU24cache10_44; }
	inline void set_U3CU3Ef__mgU24cache10_44(internal_ARFaceAnchorRemoved_t2563439402 * value)
	{
		___U3CU3Ef__mgU24cache10_44 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache10_44), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache11_45() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache11_45)); }
	inline internal_ARImageAnchorAdded_t958088978 * get_U3CU3Ef__mgU24cache11_45() const { return ___U3CU3Ef__mgU24cache11_45; }
	inline internal_ARImageAnchorAdded_t958088978 ** get_address_of_U3CU3Ef__mgU24cache11_45() { return &___U3CU3Ef__mgU24cache11_45; }
	inline void set_U3CU3Ef__mgU24cache11_45(internal_ARImageAnchorAdded_t958088978 * value)
	{
		___U3CU3Ef__mgU24cache11_45 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache11_45), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache12_46() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache12_46)); }
	inline internal_ARImageAnchorUpdated_t294417830 * get_U3CU3Ef__mgU24cache12_46() const { return ___U3CU3Ef__mgU24cache12_46; }
	inline internal_ARImageAnchorUpdated_t294417830 ** get_address_of_U3CU3Ef__mgU24cache12_46() { return &___U3CU3Ef__mgU24cache12_46; }
	inline void set_U3CU3Ef__mgU24cache12_46(internal_ARImageAnchorUpdated_t294417830 * value)
	{
		___U3CU3Ef__mgU24cache12_46 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache12_46), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache13_47() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache13_47)); }
	inline internal_ARImageAnchorRemoved_t1751104571 * get_U3CU3Ef__mgU24cache13_47() const { return ___U3CU3Ef__mgU24cache13_47; }
	inline internal_ARImageAnchorRemoved_t1751104571 ** get_address_of_U3CU3Ef__mgU24cache13_47() { return &___U3CU3Ef__mgU24cache13_47; }
	inline void set_U3CU3Ef__mgU24cache13_47(internal_ARImageAnchorRemoved_t1751104571 * value)
	{
		___U3CU3Ef__mgU24cache13_47 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache13_47), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache14_48() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache14_48)); }
	inline internal_ARObjectAnchorAdded_t1222097505 * get_U3CU3Ef__mgU24cache14_48() const { return ___U3CU3Ef__mgU24cache14_48; }
	inline internal_ARObjectAnchorAdded_t1222097505 ** get_address_of_U3CU3Ef__mgU24cache14_48() { return &___U3CU3Ef__mgU24cache14_48; }
	inline void set_U3CU3Ef__mgU24cache14_48(internal_ARObjectAnchorAdded_t1222097505 * value)
	{
		___U3CU3Ef__mgU24cache14_48 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache14_48), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache15_49() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache15_49)); }
	inline internal_ARObjectAnchorUpdated_t3492445690 * get_U3CU3Ef__mgU24cache15_49() const { return ___U3CU3Ef__mgU24cache15_49; }
	inline internal_ARObjectAnchorUpdated_t3492445690 ** get_address_of_U3CU3Ef__mgU24cache15_49() { return &___U3CU3Ef__mgU24cache15_49; }
	inline void set_U3CU3Ef__mgU24cache15_49(internal_ARObjectAnchorUpdated_t3492445690 * value)
	{
		___U3CU3Ef__mgU24cache15_49 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache15_49), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache16_50() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache16_50)); }
	inline internal_ARObjectAnchorRemoved_t1225376916 * get_U3CU3Ef__mgU24cache16_50() const { return ___U3CU3Ef__mgU24cache16_50; }
	inline internal_ARObjectAnchorRemoved_t1225376916 ** get_address_of_U3CU3Ef__mgU24cache16_50() { return &___U3CU3Ef__mgU24cache16_50; }
	inline void set_U3CU3Ef__mgU24cache16_50(internal_ARObjectAnchorRemoved_t1225376916 * value)
	{
		___U3CU3Ef__mgU24cache16_50 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache16_50), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache17_51() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache17_51)); }
	inline internal_AREnvironmentProbeAnchorAdded_t1786467930 * get_U3CU3Ef__mgU24cache17_51() const { return ___U3CU3Ef__mgU24cache17_51; }
	inline internal_AREnvironmentProbeAnchorAdded_t1786467930 ** get_address_of_U3CU3Ef__mgU24cache17_51() { return &___U3CU3Ef__mgU24cache17_51; }
	inline void set_U3CU3Ef__mgU24cache17_51(internal_AREnvironmentProbeAnchorAdded_t1786467930 * value)
	{
		___U3CU3Ef__mgU24cache17_51 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache17_51), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache18_52() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache18_52)); }
	inline internal_AREnvironmentProbeAnchorUpdated_t3576551915 * get_U3CU3Ef__mgU24cache18_52() const { return ___U3CU3Ef__mgU24cache18_52; }
	inline internal_AREnvironmentProbeAnchorUpdated_t3576551915 ** get_address_of_U3CU3Ef__mgU24cache18_52() { return &___U3CU3Ef__mgU24cache18_52; }
	inline void set_U3CU3Ef__mgU24cache18_52(internal_AREnvironmentProbeAnchorUpdated_t3576551915 * value)
	{
		___U3CU3Ef__mgU24cache18_52 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache18_52), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache19_53() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache19_53)); }
	inline internal_AREnvironmentProbeAnchorRemoved_t3912910743 * get_U3CU3Ef__mgU24cache19_53() const { return ___U3CU3Ef__mgU24cache19_53; }
	inline internal_AREnvironmentProbeAnchorRemoved_t3912910743 ** get_address_of_U3CU3Ef__mgU24cache19_53() { return &___U3CU3Ef__mgU24cache19_53; }
	inline void set_U3CU3Ef__mgU24cache19_53(internal_AREnvironmentProbeAnchorRemoved_t3912910743 * value)
	{
		___U3CU3Ef__mgU24cache19_53 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache19_53), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARSESSIONNATIVEINTERFACE_T3929719369_H
#ifndef ARFRAMEUPDATE_T1157215840_H
#define ARFRAMEUPDATE_T1157215840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate
struct  ARFrameUpdate_t1157215840  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARFRAMEUPDATE_T1157215840_H
#ifndef DRAWLINES_T4192295860_H
#define DRAWLINES_T4192295860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DrawLines
struct  DrawLines_t4192295860  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Material DrawLines::lineMat
	Material_t340375123 * ___lineMat_4;
	// UnityEngine.Material DrawLines::HorizontalLine
	Material_t340375123 * ___HorizontalLine_5;
	// UnityEngine.GameObject DrawLines::RPoint
	GameObject_t1113636619 * ___RPoint_6;
	// UnityEngine.GameObject DrawLines::VPoint
	GameObject_t1113636619 * ___VPoint_7;
	// UnityEngine.GameObject DrawLines::Pedal
	GameObject_t1113636619 * ___Pedal_8;
	// UnityEngine.GameObject DrawLines::RF
	GameObject_t1113636619 * ___RF_9;
	// UnityEngine.GameObject DrawLines::VF
	GameObject_t1113636619 * ___VF_10;
	// UnityEngine.LineRenderer DrawLines::LineRenderer
	LineRenderer_t3154350270 * ___LineRenderer_11;

public:
	inline static int32_t get_offset_of_lineMat_4() { return static_cast<int32_t>(offsetof(DrawLines_t4192295860, ___lineMat_4)); }
	inline Material_t340375123 * get_lineMat_4() const { return ___lineMat_4; }
	inline Material_t340375123 ** get_address_of_lineMat_4() { return &___lineMat_4; }
	inline void set_lineMat_4(Material_t340375123 * value)
	{
		___lineMat_4 = value;
		Il2CppCodeGenWriteBarrier((&___lineMat_4), value);
	}

	inline static int32_t get_offset_of_HorizontalLine_5() { return static_cast<int32_t>(offsetof(DrawLines_t4192295860, ___HorizontalLine_5)); }
	inline Material_t340375123 * get_HorizontalLine_5() const { return ___HorizontalLine_5; }
	inline Material_t340375123 ** get_address_of_HorizontalLine_5() { return &___HorizontalLine_5; }
	inline void set_HorizontalLine_5(Material_t340375123 * value)
	{
		___HorizontalLine_5 = value;
		Il2CppCodeGenWriteBarrier((&___HorizontalLine_5), value);
	}

	inline static int32_t get_offset_of_RPoint_6() { return static_cast<int32_t>(offsetof(DrawLines_t4192295860, ___RPoint_6)); }
	inline GameObject_t1113636619 * get_RPoint_6() const { return ___RPoint_6; }
	inline GameObject_t1113636619 ** get_address_of_RPoint_6() { return &___RPoint_6; }
	inline void set_RPoint_6(GameObject_t1113636619 * value)
	{
		___RPoint_6 = value;
		Il2CppCodeGenWriteBarrier((&___RPoint_6), value);
	}

	inline static int32_t get_offset_of_VPoint_7() { return static_cast<int32_t>(offsetof(DrawLines_t4192295860, ___VPoint_7)); }
	inline GameObject_t1113636619 * get_VPoint_7() const { return ___VPoint_7; }
	inline GameObject_t1113636619 ** get_address_of_VPoint_7() { return &___VPoint_7; }
	inline void set_VPoint_7(GameObject_t1113636619 * value)
	{
		___VPoint_7 = value;
		Il2CppCodeGenWriteBarrier((&___VPoint_7), value);
	}

	inline static int32_t get_offset_of_Pedal_8() { return static_cast<int32_t>(offsetof(DrawLines_t4192295860, ___Pedal_8)); }
	inline GameObject_t1113636619 * get_Pedal_8() const { return ___Pedal_8; }
	inline GameObject_t1113636619 ** get_address_of_Pedal_8() { return &___Pedal_8; }
	inline void set_Pedal_8(GameObject_t1113636619 * value)
	{
		___Pedal_8 = value;
		Il2CppCodeGenWriteBarrier((&___Pedal_8), value);
	}

	inline static int32_t get_offset_of_RF_9() { return static_cast<int32_t>(offsetof(DrawLines_t4192295860, ___RF_9)); }
	inline GameObject_t1113636619 * get_RF_9() const { return ___RF_9; }
	inline GameObject_t1113636619 ** get_address_of_RF_9() { return &___RF_9; }
	inline void set_RF_9(GameObject_t1113636619 * value)
	{
		___RF_9 = value;
		Il2CppCodeGenWriteBarrier((&___RF_9), value);
	}

	inline static int32_t get_offset_of_VF_10() { return static_cast<int32_t>(offsetof(DrawLines_t4192295860, ___VF_10)); }
	inline GameObject_t1113636619 * get_VF_10() const { return ___VF_10; }
	inline GameObject_t1113636619 ** get_address_of_VF_10() { return &___VF_10; }
	inline void set_VF_10(GameObject_t1113636619 * value)
	{
		___VF_10 = value;
		Il2CppCodeGenWriteBarrier((&___VF_10), value);
	}

	inline static int32_t get_offset_of_LineRenderer_11() { return static_cast<int32_t>(offsetof(DrawLines_t4192295860, ___LineRenderer_11)); }
	inline LineRenderer_t3154350270 * get_LineRenderer_11() const { return ___LineRenderer_11; }
	inline LineRenderer_t3154350270 ** get_address_of_LineRenderer_11() { return &___LineRenderer_11; }
	inline void set_LineRenderer_11(LineRenderer_t3154350270 * value)
	{
		___LineRenderer_11 = value;
		Il2CppCodeGenWriteBarrier((&___LineRenderer_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRAWLINES_T4192295860_H
#ifndef UNITYARCAMERAMANAGER_T4002280589_H
#define UNITYARCAMERAMANAGER_T4002280589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityARCameraManager
struct  UnityARCameraManager_t4002280589  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Camera UnityARCameraManager::m_camera
	Camera_t4157153871 * ___m_camera_4;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityARCameraManager::m_session
	UnityARSessionNativeInterface_t3929719369 * ___m_session_5;
	// UnityEngine.Material UnityARCameraManager::savedClearMaterial
	Material_t340375123 * ___savedClearMaterial_6;
	// UnityEngine.XR.iOS.UnityARAlignment UnityARCameraManager::startAlignment
	int32_t ___startAlignment_7;
	// UnityEngine.XR.iOS.UnityARPlaneDetection UnityARCameraManager::planeDetection
	int32_t ___planeDetection_8;
	// System.Boolean UnityARCameraManager::getPointCloud
	bool ___getPointCloud_9;
	// System.Boolean UnityARCameraManager::enableLightEstimation
	bool ___enableLightEstimation_10;
	// System.Boolean UnityARCameraManager::enableAutoFocus
	bool ___enableAutoFocus_11;
	// UnityEngine.XR.iOS.UnityAREnvironmentTexturing UnityARCameraManager::environmentTexturing
	int32_t ___environmentTexturing_12;
	// ARReferenceImagesSet UnityARCameraManager::detectionImages
	ARReferenceImagesSet_t4271437859 * ___detectionImages_13;
	// System.Int32 UnityARCameraManager::maximumNumberOfTrackedImages
	int32_t ___maximumNumberOfTrackedImages_14;
	// ARReferenceObjectsSetAsset UnityARCameraManager::detectionObjects
	ARReferenceObjectsSetAsset_t1991292594 * ___detectionObjects_15;
	// System.Boolean UnityARCameraManager::sessionStarted
	bool ___sessionStarted_16;

public:
	inline static int32_t get_offset_of_m_camera_4() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t4002280589, ___m_camera_4)); }
	inline Camera_t4157153871 * get_m_camera_4() const { return ___m_camera_4; }
	inline Camera_t4157153871 ** get_address_of_m_camera_4() { return &___m_camera_4; }
	inline void set_m_camera_4(Camera_t4157153871 * value)
	{
		___m_camera_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_camera_4), value);
	}

	inline static int32_t get_offset_of_m_session_5() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t4002280589, ___m_session_5)); }
	inline UnityARSessionNativeInterface_t3929719369 * get_m_session_5() const { return ___m_session_5; }
	inline UnityARSessionNativeInterface_t3929719369 ** get_address_of_m_session_5() { return &___m_session_5; }
	inline void set_m_session_5(UnityARSessionNativeInterface_t3929719369 * value)
	{
		___m_session_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_session_5), value);
	}

	inline static int32_t get_offset_of_savedClearMaterial_6() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t4002280589, ___savedClearMaterial_6)); }
	inline Material_t340375123 * get_savedClearMaterial_6() const { return ___savedClearMaterial_6; }
	inline Material_t340375123 ** get_address_of_savedClearMaterial_6() { return &___savedClearMaterial_6; }
	inline void set_savedClearMaterial_6(Material_t340375123 * value)
	{
		___savedClearMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((&___savedClearMaterial_6), value);
	}

	inline static int32_t get_offset_of_startAlignment_7() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t4002280589, ___startAlignment_7)); }
	inline int32_t get_startAlignment_7() const { return ___startAlignment_7; }
	inline int32_t* get_address_of_startAlignment_7() { return &___startAlignment_7; }
	inline void set_startAlignment_7(int32_t value)
	{
		___startAlignment_7 = value;
	}

	inline static int32_t get_offset_of_planeDetection_8() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t4002280589, ___planeDetection_8)); }
	inline int32_t get_planeDetection_8() const { return ___planeDetection_8; }
	inline int32_t* get_address_of_planeDetection_8() { return &___planeDetection_8; }
	inline void set_planeDetection_8(int32_t value)
	{
		___planeDetection_8 = value;
	}

	inline static int32_t get_offset_of_getPointCloud_9() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t4002280589, ___getPointCloud_9)); }
	inline bool get_getPointCloud_9() const { return ___getPointCloud_9; }
	inline bool* get_address_of_getPointCloud_9() { return &___getPointCloud_9; }
	inline void set_getPointCloud_9(bool value)
	{
		___getPointCloud_9 = value;
	}

	inline static int32_t get_offset_of_enableLightEstimation_10() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t4002280589, ___enableLightEstimation_10)); }
	inline bool get_enableLightEstimation_10() const { return ___enableLightEstimation_10; }
	inline bool* get_address_of_enableLightEstimation_10() { return &___enableLightEstimation_10; }
	inline void set_enableLightEstimation_10(bool value)
	{
		___enableLightEstimation_10 = value;
	}

	inline static int32_t get_offset_of_enableAutoFocus_11() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t4002280589, ___enableAutoFocus_11)); }
	inline bool get_enableAutoFocus_11() const { return ___enableAutoFocus_11; }
	inline bool* get_address_of_enableAutoFocus_11() { return &___enableAutoFocus_11; }
	inline void set_enableAutoFocus_11(bool value)
	{
		___enableAutoFocus_11 = value;
	}

	inline static int32_t get_offset_of_environmentTexturing_12() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t4002280589, ___environmentTexturing_12)); }
	inline int32_t get_environmentTexturing_12() const { return ___environmentTexturing_12; }
	inline int32_t* get_address_of_environmentTexturing_12() { return &___environmentTexturing_12; }
	inline void set_environmentTexturing_12(int32_t value)
	{
		___environmentTexturing_12 = value;
	}

	inline static int32_t get_offset_of_detectionImages_13() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t4002280589, ___detectionImages_13)); }
	inline ARReferenceImagesSet_t4271437859 * get_detectionImages_13() const { return ___detectionImages_13; }
	inline ARReferenceImagesSet_t4271437859 ** get_address_of_detectionImages_13() { return &___detectionImages_13; }
	inline void set_detectionImages_13(ARReferenceImagesSet_t4271437859 * value)
	{
		___detectionImages_13 = value;
		Il2CppCodeGenWriteBarrier((&___detectionImages_13), value);
	}

	inline static int32_t get_offset_of_maximumNumberOfTrackedImages_14() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t4002280589, ___maximumNumberOfTrackedImages_14)); }
	inline int32_t get_maximumNumberOfTrackedImages_14() const { return ___maximumNumberOfTrackedImages_14; }
	inline int32_t* get_address_of_maximumNumberOfTrackedImages_14() { return &___maximumNumberOfTrackedImages_14; }
	inline void set_maximumNumberOfTrackedImages_14(int32_t value)
	{
		___maximumNumberOfTrackedImages_14 = value;
	}

	inline static int32_t get_offset_of_detectionObjects_15() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t4002280589, ___detectionObjects_15)); }
	inline ARReferenceObjectsSetAsset_t1991292594 * get_detectionObjects_15() const { return ___detectionObjects_15; }
	inline ARReferenceObjectsSetAsset_t1991292594 ** get_address_of_detectionObjects_15() { return &___detectionObjects_15; }
	inline void set_detectionObjects_15(ARReferenceObjectsSetAsset_t1991292594 * value)
	{
		___detectionObjects_15 = value;
		Il2CppCodeGenWriteBarrier((&___detectionObjects_15), value);
	}

	inline static int32_t get_offset_of_sessionStarted_16() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t4002280589, ___sessionStarted_16)); }
	inline bool get_sessionStarted_16() const { return ___sessionStarted_16; }
	inline bool* get_address_of_sessionStarted_16() { return &___sessionStarted_16; }
	inline void set_sessionStarted_16(bool value)
	{
		___sessionStarted_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARCAMERAMANAGER_T4002280589_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
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
#ifndef UNITYEYEMANAGER_T3949445033_H
#define UNITYEYEMANAGER_T3949445033_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEyeManager
struct  UnityEyeManager_t3949445033  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject UnityEyeManager::eyePrefab
	GameObject_t1113636619 * ___eyePrefab_4;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEyeManager::m_session
	UnityARSessionNativeInterface_t3929719369 * ___m_session_5;
	// UnityEngine.GameObject UnityEyeManager::leftEyeGo
	GameObject_t1113636619 * ___leftEyeGo_6;
	// UnityEngine.GameObject UnityEyeManager::rightEyeGo
	GameObject_t1113636619 * ___rightEyeGo_7;

public:
	inline static int32_t get_offset_of_eyePrefab_4() { return static_cast<int32_t>(offsetof(UnityEyeManager_t3949445033, ___eyePrefab_4)); }
	inline GameObject_t1113636619 * get_eyePrefab_4() const { return ___eyePrefab_4; }
	inline GameObject_t1113636619 ** get_address_of_eyePrefab_4() { return &___eyePrefab_4; }
	inline void set_eyePrefab_4(GameObject_t1113636619 * value)
	{
		___eyePrefab_4 = value;
		Il2CppCodeGenWriteBarrier((&___eyePrefab_4), value);
	}

	inline static int32_t get_offset_of_m_session_5() { return static_cast<int32_t>(offsetof(UnityEyeManager_t3949445033, ___m_session_5)); }
	inline UnityARSessionNativeInterface_t3929719369 * get_m_session_5() const { return ___m_session_5; }
	inline UnityARSessionNativeInterface_t3929719369 ** get_address_of_m_session_5() { return &___m_session_5; }
	inline void set_m_session_5(UnityARSessionNativeInterface_t3929719369 * value)
	{
		___m_session_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_session_5), value);
	}

	inline static int32_t get_offset_of_leftEyeGo_6() { return static_cast<int32_t>(offsetof(UnityEyeManager_t3949445033, ___leftEyeGo_6)); }
	inline GameObject_t1113636619 * get_leftEyeGo_6() const { return ___leftEyeGo_6; }
	inline GameObject_t1113636619 ** get_address_of_leftEyeGo_6() { return &___leftEyeGo_6; }
	inline void set_leftEyeGo_6(GameObject_t1113636619 * value)
	{
		___leftEyeGo_6 = value;
		Il2CppCodeGenWriteBarrier((&___leftEyeGo_6), value);
	}

	inline static int32_t get_offset_of_rightEyeGo_7() { return static_cast<int32_t>(offsetof(UnityEyeManager_t3949445033, ___rightEyeGo_7)); }
	inline GameObject_t1113636619 * get_rightEyeGo_7() const { return ___rightEyeGo_7; }
	inline GameObject_t1113636619 ** get_address_of_rightEyeGo_7() { return &___rightEyeGo_7; }
	inline void set_rightEyeGo_7(GameObject_t1113636619 * value)
	{
		___rightEyeGo_7 = value;
		Il2CppCodeGenWriteBarrier((&___rightEyeGo_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEYEMANAGER_T3949445033_H
#ifndef UNITYPOINTCLOUDEXAMPLE_T3649008995_H
#define UNITYPOINTCLOUDEXAMPLE_T3649008995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityPointCloudExample
struct  UnityPointCloudExample_t3649008995  : public MonoBehaviour_t3962482529
{
public:
	// System.UInt32 UnityPointCloudExample::numPointsToShow
	uint32_t ___numPointsToShow_4;
	// UnityEngine.GameObject UnityPointCloudExample::PointCloudPrefab
	GameObject_t1113636619 * ___PointCloudPrefab_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityPointCloudExample::pointCloudObjects
	List_1_t2585711361 * ___pointCloudObjects_6;
	// UnityEngine.Vector3[] UnityPointCloudExample::m_PointCloudData
	Vector3U5BU5D_t1718750761* ___m_PointCloudData_7;

public:
	inline static int32_t get_offset_of_numPointsToShow_4() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t3649008995, ___numPointsToShow_4)); }
	inline uint32_t get_numPointsToShow_4() const { return ___numPointsToShow_4; }
	inline uint32_t* get_address_of_numPointsToShow_4() { return &___numPointsToShow_4; }
	inline void set_numPointsToShow_4(uint32_t value)
	{
		___numPointsToShow_4 = value;
	}

	inline static int32_t get_offset_of_PointCloudPrefab_5() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t3649008995, ___PointCloudPrefab_5)); }
	inline GameObject_t1113636619 * get_PointCloudPrefab_5() const { return ___PointCloudPrefab_5; }
	inline GameObject_t1113636619 ** get_address_of_PointCloudPrefab_5() { return &___PointCloudPrefab_5; }
	inline void set_PointCloudPrefab_5(GameObject_t1113636619 * value)
	{
		___PointCloudPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((&___PointCloudPrefab_5), value);
	}

	inline static int32_t get_offset_of_pointCloudObjects_6() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t3649008995, ___pointCloudObjects_6)); }
	inline List_1_t2585711361 * get_pointCloudObjects_6() const { return ___pointCloudObjects_6; }
	inline List_1_t2585711361 ** get_address_of_pointCloudObjects_6() { return &___pointCloudObjects_6; }
	inline void set_pointCloudObjects_6(List_1_t2585711361 * value)
	{
		___pointCloudObjects_6 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloudObjects_6), value);
	}

	inline static int32_t get_offset_of_m_PointCloudData_7() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t3649008995, ___m_PointCloudData_7)); }
	inline Vector3U5BU5D_t1718750761* get_m_PointCloudData_7() const { return ___m_PointCloudData_7; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_PointCloudData_7() { return &___m_PointCloudData_7; }
	inline void set_m_PointCloudData_7(Vector3U5BU5D_t1718750761* value)
	{
		___m_PointCloudData_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointCloudData_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYPOINTCLOUDEXAMPLE_T3649008995_H
#ifndef UPDATEWORLDMAPPINGSTATUS_T2738391865_H
#define UPDATEWORLDMAPPINGSTATUS_T2738391865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UpdateWorldMappingStatus
struct  UpdateWorldMappingStatus_t2738391865  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text UpdateWorldMappingStatus::text
	Text_t1901882714 * ___text_4;
	// UnityEngine.UI.Text UpdateWorldMappingStatus::tracking
	Text_t1901882714 * ___tracking_5;

public:
	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(UpdateWorldMappingStatus_t2738391865, ___text_4)); }
	inline Text_t1901882714 * get_text_4() const { return ___text_4; }
	inline Text_t1901882714 ** get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(Text_t1901882714 * value)
	{
		___text_4 = value;
		Il2CppCodeGenWriteBarrier((&___text_4), value);
	}

	inline static int32_t get_offset_of_tracking_5() { return static_cast<int32_t>(offsetof(UpdateWorldMappingStatus_t2738391865, ___tracking_5)); }
	inline Text_t1901882714 * get_tracking_5() const { return ___tracking_5; }
	inline Text_t1901882714 ** get_address_of_tracking_5() { return &___tracking_5; }
	inline void set_tracking_5(Text_t1901882714 * value)
	{
		___tracking_5 = value;
		Il2CppCodeGenWriteBarrier((&___tracking_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEWORLDMAPPINGSTATUS_T2738391865_H
#ifndef VIDEOFORMATBUTTON_T1937817916_H
#define VIDEOFORMATBUTTON_T1937817916_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VideoFormatButton
struct  VideoFormatButton_t1937817916  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text VideoFormatButton::videoFormatDescription
	Text_t1901882714 * ___videoFormatDescription_4;
	// UnityEngine.XR.iOS.UnityARVideoFormat VideoFormatButton::arVideoFormat
	UnityARVideoFormat_t1944454781  ___arVideoFormat_5;

public:
	inline static int32_t get_offset_of_videoFormatDescription_4() { return static_cast<int32_t>(offsetof(VideoFormatButton_t1937817916, ___videoFormatDescription_4)); }
	inline Text_t1901882714 * get_videoFormatDescription_4() const { return ___videoFormatDescription_4; }
	inline Text_t1901882714 ** get_address_of_videoFormatDescription_4() { return &___videoFormatDescription_4; }
	inline void set_videoFormatDescription_4(Text_t1901882714 * value)
	{
		___videoFormatDescription_4 = value;
		Il2CppCodeGenWriteBarrier((&___videoFormatDescription_4), value);
	}

	inline static int32_t get_offset_of_arVideoFormat_5() { return static_cast<int32_t>(offsetof(VideoFormatButton_t1937817916, ___arVideoFormat_5)); }
	inline UnityARVideoFormat_t1944454781  get_arVideoFormat_5() const { return ___arVideoFormat_5; }
	inline UnityARVideoFormat_t1944454781 * get_address_of_arVideoFormat_5() { return &___arVideoFormat_5; }
	inline void set_arVideoFormat_5(UnityARVideoFormat_t1944454781  value)
	{
		___arVideoFormat_5 = value;
	}
};

struct VideoFormatButton_t1937817916_StaticFields
{
public:
	// VideoFormatButton/VideoFormatButtonPressed VideoFormatButton::FormatButtonPressedEvent
	VideoFormatButtonPressed_t1187798507 * ___FormatButtonPressedEvent_6;

public:
	inline static int32_t get_offset_of_FormatButtonPressedEvent_6() { return static_cast<int32_t>(offsetof(VideoFormatButton_t1937817916_StaticFields, ___FormatButtonPressedEvent_6)); }
	inline VideoFormatButtonPressed_t1187798507 * get_FormatButtonPressedEvent_6() const { return ___FormatButtonPressedEvent_6; }
	inline VideoFormatButtonPressed_t1187798507 ** get_address_of_FormatButtonPressedEvent_6() { return &___FormatButtonPressedEvent_6; }
	inline void set_FormatButtonPressedEvent_6(VideoFormatButtonPressed_t1187798507 * value)
	{
		___FormatButtonPressedEvent_6 = value;
		Il2CppCodeGenWriteBarrier((&___FormatButtonPressedEvent_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOFORMATBUTTON_T1937817916_H
#ifndef VIDEOFORMATSEXAMPLE_T2303262312_H
#define VIDEOFORMATSEXAMPLE_T2303262312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VideoFormatsExample
struct  VideoFormatsExample_t2303262312  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform VideoFormatsExample::formatsParent
	Transform_t3600365921 * ___formatsParent_4;
	// UnityEngine.GameObject VideoFormatsExample::videoFormatButtonPrefab
	GameObject_t1113636619 * ___videoFormatButtonPrefab_5;

public:
	inline static int32_t get_offset_of_formatsParent_4() { return static_cast<int32_t>(offsetof(VideoFormatsExample_t2303262312, ___formatsParent_4)); }
	inline Transform_t3600365921 * get_formatsParent_4() const { return ___formatsParent_4; }
	inline Transform_t3600365921 ** get_address_of_formatsParent_4() { return &___formatsParent_4; }
	inline void set_formatsParent_4(Transform_t3600365921 * value)
	{
		___formatsParent_4 = value;
		Il2CppCodeGenWriteBarrier((&___formatsParent_4), value);
	}

	inline static int32_t get_offset_of_videoFormatButtonPrefab_5() { return static_cast<int32_t>(offsetof(VideoFormatsExample_t2303262312, ___videoFormatButtonPrefab_5)); }
	inline GameObject_t1113636619 * get_videoFormatButtonPrefab_5() const { return ___videoFormatButtonPrefab_5; }
	inline GameObject_t1113636619 ** get_address_of_videoFormatButtonPrefab_5() { return &___videoFormatButtonPrefab_5; }
	inline void set_videoFormatButtonPrefab_5(GameObject_t1113636619 * value)
	{
		___videoFormatButtonPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((&___videoFormatButtonPrefab_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOFORMATSEXAMPLE_T2303262312_H
#ifndef VIRTUALIMAGECONTROLLER_T1421167262_H
#define VIRTUALIMAGECONTROLLER_T1421167262_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VirtualImageController
struct  VirtualImageController_t1421167262  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject VirtualImageController::Model
	GameObject_t1113636619 * ___Model_4;
	// UnityEngine.GameObject VirtualImageController::RF
	GameObject_t1113636619 * ___RF_5;
	// UnityEngine.GameObject VirtualImageController::Glass
	GameObject_t1113636619 * ___Glass_6;
	// UnityEngine.GameObject VirtualImageController::VF
	GameObject_t1113636619 * ___VF_7;
	// UnityEngine.GameObject VirtualImageController::HorizontalLine
	GameObject_t1113636619 * ___HorizontalLine_8;
	// UnityEngine.GameObject VirtualImageController::LightLine
	GameObject_t1113636619 * ___LightLine_9;
	// ModelController VirtualImageController::ModelController
	ModelController_t213260968 * ___ModelController_10;
	// UnityEngine.UI.Text VirtualImageController::text
	Text_t1901882714 * ___text_11;
	// UnityEngine.GameObject VirtualImageController::Button
	GameObject_t1113636619 * ___Button_12;
	// System.Single VirtualImageController::focal
	float ___focal_13;
	// System.Single VirtualImageController::scale
	float ___scale_14;

public:
	inline static int32_t get_offset_of_Model_4() { return static_cast<int32_t>(offsetof(VirtualImageController_t1421167262, ___Model_4)); }
	inline GameObject_t1113636619 * get_Model_4() const { return ___Model_4; }
	inline GameObject_t1113636619 ** get_address_of_Model_4() { return &___Model_4; }
	inline void set_Model_4(GameObject_t1113636619 * value)
	{
		___Model_4 = value;
		Il2CppCodeGenWriteBarrier((&___Model_4), value);
	}

	inline static int32_t get_offset_of_RF_5() { return static_cast<int32_t>(offsetof(VirtualImageController_t1421167262, ___RF_5)); }
	inline GameObject_t1113636619 * get_RF_5() const { return ___RF_5; }
	inline GameObject_t1113636619 ** get_address_of_RF_5() { return &___RF_5; }
	inline void set_RF_5(GameObject_t1113636619 * value)
	{
		___RF_5 = value;
		Il2CppCodeGenWriteBarrier((&___RF_5), value);
	}

	inline static int32_t get_offset_of_Glass_6() { return static_cast<int32_t>(offsetof(VirtualImageController_t1421167262, ___Glass_6)); }
	inline GameObject_t1113636619 * get_Glass_6() const { return ___Glass_6; }
	inline GameObject_t1113636619 ** get_address_of_Glass_6() { return &___Glass_6; }
	inline void set_Glass_6(GameObject_t1113636619 * value)
	{
		___Glass_6 = value;
		Il2CppCodeGenWriteBarrier((&___Glass_6), value);
	}

	inline static int32_t get_offset_of_VF_7() { return static_cast<int32_t>(offsetof(VirtualImageController_t1421167262, ___VF_7)); }
	inline GameObject_t1113636619 * get_VF_7() const { return ___VF_7; }
	inline GameObject_t1113636619 ** get_address_of_VF_7() { return &___VF_7; }
	inline void set_VF_7(GameObject_t1113636619 * value)
	{
		___VF_7 = value;
		Il2CppCodeGenWriteBarrier((&___VF_7), value);
	}

	inline static int32_t get_offset_of_HorizontalLine_8() { return static_cast<int32_t>(offsetof(VirtualImageController_t1421167262, ___HorizontalLine_8)); }
	inline GameObject_t1113636619 * get_HorizontalLine_8() const { return ___HorizontalLine_8; }
	inline GameObject_t1113636619 ** get_address_of_HorizontalLine_8() { return &___HorizontalLine_8; }
	inline void set_HorizontalLine_8(GameObject_t1113636619 * value)
	{
		___HorizontalLine_8 = value;
		Il2CppCodeGenWriteBarrier((&___HorizontalLine_8), value);
	}

	inline static int32_t get_offset_of_LightLine_9() { return static_cast<int32_t>(offsetof(VirtualImageController_t1421167262, ___LightLine_9)); }
	inline GameObject_t1113636619 * get_LightLine_9() const { return ___LightLine_9; }
	inline GameObject_t1113636619 ** get_address_of_LightLine_9() { return &___LightLine_9; }
	inline void set_LightLine_9(GameObject_t1113636619 * value)
	{
		___LightLine_9 = value;
		Il2CppCodeGenWriteBarrier((&___LightLine_9), value);
	}

	inline static int32_t get_offset_of_ModelController_10() { return static_cast<int32_t>(offsetof(VirtualImageController_t1421167262, ___ModelController_10)); }
	inline ModelController_t213260968 * get_ModelController_10() const { return ___ModelController_10; }
	inline ModelController_t213260968 ** get_address_of_ModelController_10() { return &___ModelController_10; }
	inline void set_ModelController_10(ModelController_t213260968 * value)
	{
		___ModelController_10 = value;
		Il2CppCodeGenWriteBarrier((&___ModelController_10), value);
	}

	inline static int32_t get_offset_of_text_11() { return static_cast<int32_t>(offsetof(VirtualImageController_t1421167262, ___text_11)); }
	inline Text_t1901882714 * get_text_11() const { return ___text_11; }
	inline Text_t1901882714 ** get_address_of_text_11() { return &___text_11; }
	inline void set_text_11(Text_t1901882714 * value)
	{
		___text_11 = value;
		Il2CppCodeGenWriteBarrier((&___text_11), value);
	}

	inline static int32_t get_offset_of_Button_12() { return static_cast<int32_t>(offsetof(VirtualImageController_t1421167262, ___Button_12)); }
	inline GameObject_t1113636619 * get_Button_12() const { return ___Button_12; }
	inline GameObject_t1113636619 ** get_address_of_Button_12() { return &___Button_12; }
	inline void set_Button_12(GameObject_t1113636619 * value)
	{
		___Button_12 = value;
		Il2CppCodeGenWriteBarrier((&___Button_12), value);
	}

	inline static int32_t get_offset_of_focal_13() { return static_cast<int32_t>(offsetof(VirtualImageController_t1421167262, ___focal_13)); }
	inline float get_focal_13() const { return ___focal_13; }
	inline float* get_address_of_focal_13() { return &___focal_13; }
	inline void set_focal_13(float value)
	{
		___focal_13 = value;
	}

	inline static int32_t get_offset_of_scale_14() { return static_cast<int32_t>(offsetof(VirtualImageController_t1421167262, ___scale_14)); }
	inline float get_scale_14() const { return ___scale_14; }
	inline float* get_address_of_scale_14() { return &___scale_14; }
	inline void set_scale_14(float value)
	{
		___scale_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALIMAGECONTROLLER_T1421167262_H
#ifndef VISIBLE_T788833082_H
#define VISIBLE_T788833082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Visible
struct  Visible_t788833082  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean Visible::visable
	bool ___visable_4;

public:
	inline static int32_t get_offset_of_visable_4() { return static_cast<int32_t>(offsetof(Visible_t788833082, ___visable_4)); }
	inline bool get_visable_4() const { return ___visable_4; }
	inline bool* get_address_of_visable_4() { return &___visable_4; }
	inline void set_visable_4(bool value)
	{
		___visable_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VISIBLE_T788833082_H
#ifndef WORLDMAPMANAGER_T2538599596_H
#define WORLDMAPMANAGER_T2538599596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WorldMapManager
struct  WorldMapManager_t2538599596  : public MonoBehaviour_t3962482529
{
public:
	// UnityARCameraManager WorldMapManager::m_ARCameraManager
	UnityARCameraManager_t4002280589 * ___m_ARCameraManager_4;
	// UnityEngine.XR.iOS.ARWorldMap WorldMapManager::m_LoadedMap
	ARWorldMap_t2240790807 * ___m_LoadedMap_5;
	// UnityEngine.XR.iOS.serializableARWorldMap WorldMapManager::serializedWorldMap
	serializableARWorldMap_t2514323794 * ___serializedWorldMap_6;
	// UnityEngine.XR.iOS.ARTrackingStateReason WorldMapManager::m_LastReason
	int32_t ___m_LastReason_7;

public:
	inline static int32_t get_offset_of_m_ARCameraManager_4() { return static_cast<int32_t>(offsetof(WorldMapManager_t2538599596, ___m_ARCameraManager_4)); }
	inline UnityARCameraManager_t4002280589 * get_m_ARCameraManager_4() const { return ___m_ARCameraManager_4; }
	inline UnityARCameraManager_t4002280589 ** get_address_of_m_ARCameraManager_4() { return &___m_ARCameraManager_4; }
	inline void set_m_ARCameraManager_4(UnityARCameraManager_t4002280589 * value)
	{
		___m_ARCameraManager_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_ARCameraManager_4), value);
	}

	inline static int32_t get_offset_of_m_LoadedMap_5() { return static_cast<int32_t>(offsetof(WorldMapManager_t2538599596, ___m_LoadedMap_5)); }
	inline ARWorldMap_t2240790807 * get_m_LoadedMap_5() const { return ___m_LoadedMap_5; }
	inline ARWorldMap_t2240790807 ** get_address_of_m_LoadedMap_5() { return &___m_LoadedMap_5; }
	inline void set_m_LoadedMap_5(ARWorldMap_t2240790807 * value)
	{
		___m_LoadedMap_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_LoadedMap_5), value);
	}

	inline static int32_t get_offset_of_serializedWorldMap_6() { return static_cast<int32_t>(offsetof(WorldMapManager_t2538599596, ___serializedWorldMap_6)); }
	inline serializableARWorldMap_t2514323794 * get_serializedWorldMap_6() const { return ___serializedWorldMap_6; }
	inline serializableARWorldMap_t2514323794 ** get_address_of_serializedWorldMap_6() { return &___serializedWorldMap_6; }
	inline void set_serializedWorldMap_6(serializableARWorldMap_t2514323794 * value)
	{
		___serializedWorldMap_6 = value;
		Il2CppCodeGenWriteBarrier((&___serializedWorldMap_6), value);
	}

	inline static int32_t get_offset_of_m_LastReason_7() { return static_cast<int32_t>(offsetof(WorldMapManager_t2538599596, ___m_LastReason_7)); }
	inline int32_t get_m_LastReason_7() const { return ___m_LastReason_7; }
	inline int32_t* get_address_of_m_LastReason_7() { return &___m_LastReason_7; }
	inline void set_m_LastReason_7(int32_t value)
	{
		___m_LastReason_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORLDMAPMANAGER_T2538599596_H
#ifndef MODELCONTROLLER_T213260968_H
#define MODELCONTROLLER_T213260968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ModelController
struct  ModelController_t213260968  : public NetworkBehaviour_t204670959
{
public:
	// UnityARCameraManager ModelController::UnityARCameraManager
	UnityARCameraManager_t4002280589 * ___UnityARCameraManager_10;
	// UnityEngine.GameObject ModelController::Model
	GameObject_t1113636619 * ___Model_11;
	// UnityEngine.GameObject ModelController::Button
	GameObject_t1113636619 * ___Button_12;
	// UnityEngine.GameObject ModelController::GeneratePlane
	GameObject_t1113636619 * ___GeneratePlane_13;
	// UnityEngine.GameObject ModelController::FocusSquare
	GameObject_t1113636619 * ___FocusSquare_14;
	// UnityEngine.Vector3 ModelController::transforme
	Vector3_t3722313464  ___transforme_15;
	// UnityEngine.GameObject ModelController::obj1
	GameObject_t1113636619 * ___obj1_16;
	// UnityEngine.GameObject ModelController::obj2
	GameObject_t1113636619 * ___obj2_17;
	// UnityEngine.GameObject ModelController::obj3
	GameObject_t1113636619 * ___obj3_18;
	// System.Single ModelController::distance1
	float ___distance1_19;
	// System.Single ModelController::distance2
	float ___distance2_20;
	// System.Single ModelController::distance
	float ___distance_21;
	// UnityEngine.Vector3 ModelController::oldRemove1
	Vector3_t3722313464  ___oldRemove1_22;
	// UnityEngine.Vector3 ModelController::oldRemove2
	Vector3_t3722313464  ___oldRemove2_23;
	// System.Boolean ModelController::flag
	bool ___flag_24;
	// System.Boolean ModelController::adjustable
	bool ___adjustable_25;
	// HintController ModelController::HintController
	HintController_t1002117908 * ___HintController_26;
	// System.Single ModelController::time
	float ___time_27;
	// System.Single ModelController::thresholdTime
	float ___thresholdTime_28;
	// System.Boolean ModelController::hintFinished
	bool ___hintFinished_29;
	// ModelController/SetModelActiveHandler ModelController::SetModelActiveEvent
	SetModelActiveHandler_t2568636180 * ___SetModelActiveEvent_30;
	// ModelController/SetModelInactiveHandler ModelController::SetModelInactiveEvent
	SetModelInactiveHandler_t522955110 * ___SetModelInactiveEvent_31;
	// ModelController/ResetHandler ModelController::ResetHandlerEvent
	ResetHandler_t86549611 * ___ResetHandlerEvent_32;
	// UnityEngine.Vector3 ModelController::oldPosition1
	Vector3_t3722313464  ___oldPosition1_33;
	// UnityEngine.Vector3 ModelController::oldPosition2
	Vector3_t3722313464  ___oldPosition2_34;
	// System.Boolean ModelController::first
	bool ___first_35;

public:
	inline static int32_t get_offset_of_UnityARCameraManager_10() { return static_cast<int32_t>(offsetof(ModelController_t213260968, ___UnityARCameraManager_10)); }
	inline UnityARCameraManager_t4002280589 * get_UnityARCameraManager_10() const { return ___UnityARCameraManager_10; }
	inline UnityARCameraManager_t4002280589 ** get_address_of_UnityARCameraManager_10() { return &___UnityARCameraManager_10; }
	inline void set_UnityARCameraManager_10(UnityARCameraManager_t4002280589 * value)
	{
		___UnityARCameraManager_10 = value;
		Il2CppCodeGenWriteBarrier((&___UnityARCameraManager_10), value);
	}

	inline static int32_t get_offset_of_Model_11() { return static_cast<int32_t>(offsetof(ModelController_t213260968, ___Model_11)); }
	inline GameObject_t1113636619 * get_Model_11() const { return ___Model_11; }
	inline GameObject_t1113636619 ** get_address_of_Model_11() { return &___Model_11; }
	inline void set_Model_11(GameObject_t1113636619 * value)
	{
		___Model_11 = value;
		Il2CppCodeGenWriteBarrier((&___Model_11), value);
	}

	inline static int32_t get_offset_of_Button_12() { return static_cast<int32_t>(offsetof(ModelController_t213260968, ___Button_12)); }
	inline GameObject_t1113636619 * get_Button_12() const { return ___Button_12; }
	inline GameObject_t1113636619 ** get_address_of_Button_12() { return &___Button_12; }
	inline void set_Button_12(GameObject_t1113636619 * value)
	{
		___Button_12 = value;
		Il2CppCodeGenWriteBarrier((&___Button_12), value);
	}

	inline static int32_t get_offset_of_GeneratePlane_13() { return static_cast<int32_t>(offsetof(ModelController_t213260968, ___GeneratePlane_13)); }
	inline GameObject_t1113636619 * get_GeneratePlane_13() const { return ___GeneratePlane_13; }
	inline GameObject_t1113636619 ** get_address_of_GeneratePlane_13() { return &___GeneratePlane_13; }
	inline void set_GeneratePlane_13(GameObject_t1113636619 * value)
	{
		___GeneratePlane_13 = value;
		Il2CppCodeGenWriteBarrier((&___GeneratePlane_13), value);
	}

	inline static int32_t get_offset_of_FocusSquare_14() { return static_cast<int32_t>(offsetof(ModelController_t213260968, ___FocusSquare_14)); }
	inline GameObject_t1113636619 * get_FocusSquare_14() const { return ___FocusSquare_14; }
	inline GameObject_t1113636619 ** get_address_of_FocusSquare_14() { return &___FocusSquare_14; }
	inline void set_FocusSquare_14(GameObject_t1113636619 * value)
	{
		___FocusSquare_14 = value;
		Il2CppCodeGenWriteBarrier((&___FocusSquare_14), value);
	}

	inline static int32_t get_offset_of_transforme_15() { return static_cast<int32_t>(offsetof(ModelController_t213260968, ___transforme_15)); }
	inline Vector3_t3722313464  get_transforme_15() const { return ___transforme_15; }
	inline Vector3_t3722313464 * get_address_of_transforme_15() { return &___transforme_15; }
	inline void set_transforme_15(Vector3_t3722313464  value)
	{
		___transforme_15 = value;
	}

	inline static int32_t get_offset_of_obj1_16() { return static_cast<int32_t>(offsetof(ModelController_t213260968, ___obj1_16)); }
	inline GameObject_t1113636619 * get_obj1_16() const { return ___obj1_16; }
	inline GameObject_t1113636619 ** get_address_of_obj1_16() { return &___obj1_16; }
	inline void set_obj1_16(GameObject_t1113636619 * value)
	{
		___obj1_16 = value;
		Il2CppCodeGenWriteBarrier((&___obj1_16), value);
	}

	inline static int32_t get_offset_of_obj2_17() { return static_cast<int32_t>(offsetof(ModelController_t213260968, ___obj2_17)); }
	inline GameObject_t1113636619 * get_obj2_17() const { return ___obj2_17; }
	inline GameObject_t1113636619 ** get_address_of_obj2_17() { return &___obj2_17; }
	inline void set_obj2_17(GameObject_t1113636619 * value)
	{
		___obj2_17 = value;
		Il2CppCodeGenWriteBarrier((&___obj2_17), value);
	}

	inline static int32_t get_offset_of_obj3_18() { return static_cast<int32_t>(offsetof(ModelController_t213260968, ___obj3_18)); }
	inline GameObject_t1113636619 * get_obj3_18() const { return ___obj3_18; }
	inline GameObject_t1113636619 ** get_address_of_obj3_18() { return &___obj3_18; }
	inline void set_obj3_18(GameObject_t1113636619 * value)
	{
		___obj3_18 = value;
		Il2CppCodeGenWriteBarrier((&___obj3_18), value);
	}

	inline static int32_t get_offset_of_distance1_19() { return static_cast<int32_t>(offsetof(ModelController_t213260968, ___distance1_19)); }
	inline float get_distance1_19() const { return ___distance1_19; }
	inline float* get_address_of_distance1_19() { return &___distance1_19; }
	inline void set_distance1_19(float value)
	{
		___distance1_19 = value;
	}

	inline static int32_t get_offset_of_distance2_20() { return static_cast<int32_t>(offsetof(ModelController_t213260968, ___distance2_20)); }
	inline float get_distance2_20() const { return ___distance2_20; }
	inline float* get_address_of_distance2_20() { return &___distance2_20; }
	inline void set_distance2_20(float value)
	{
		___distance2_20 = value;
	}

	inline static int32_t get_offset_of_distance_21() { return static_cast<int32_t>(offsetof(ModelController_t213260968, ___distance_21)); }
	inline float get_distance_21() const { return ___distance_21; }
	inline float* get_address_of_distance_21() { return &___distance_21; }
	inline void set_distance_21(float value)
	{
		___distance_21 = value;
	}

	inline static int32_t get_offset_of_oldRemove1_22() { return static_cast<int32_t>(offsetof(ModelController_t213260968, ___oldRemove1_22)); }
	inline Vector3_t3722313464  get_oldRemove1_22() const { return ___oldRemove1_22; }
	inline Vector3_t3722313464 * get_address_of_oldRemove1_22() { return &___oldRemove1_22; }
	inline void set_oldRemove1_22(Vector3_t3722313464  value)
	{
		___oldRemove1_22 = value;
	}

	inline static int32_t get_offset_of_oldRemove2_23() { return static_cast<int32_t>(offsetof(ModelController_t213260968, ___oldRemove2_23)); }
	inline Vector3_t3722313464  get_oldRemove2_23() const { return ___oldRemove2_23; }
	inline Vector3_t3722313464 * get_address_of_oldRemove2_23() { return &___oldRemove2_23; }
	inline void set_oldRemove2_23(Vector3_t3722313464  value)
	{
		___oldRemove2_23 = value;
	}

	inline static int32_t get_offset_of_flag_24() { return static_cast<int32_t>(offsetof(ModelController_t213260968, ___flag_24)); }
	inline bool get_flag_24() const { return ___flag_24; }
	inline bool* get_address_of_flag_24() { return &___flag_24; }
	inline void set_flag_24(bool value)
	{
		___flag_24 = value;
	}

	inline static int32_t get_offset_of_adjustable_25() { return static_cast<int32_t>(offsetof(ModelController_t213260968, ___adjustable_25)); }
	inline bool get_adjustable_25() const { return ___adjustable_25; }
	inline bool* get_address_of_adjustable_25() { return &___adjustable_25; }
	inline void set_adjustable_25(bool value)
	{
		___adjustable_25 = value;
	}

	inline static int32_t get_offset_of_HintController_26() { return static_cast<int32_t>(offsetof(ModelController_t213260968, ___HintController_26)); }
	inline HintController_t1002117908 * get_HintController_26() const { return ___HintController_26; }
	inline HintController_t1002117908 ** get_address_of_HintController_26() { return &___HintController_26; }
	inline void set_HintController_26(HintController_t1002117908 * value)
	{
		___HintController_26 = value;
		Il2CppCodeGenWriteBarrier((&___HintController_26), value);
	}

	inline static int32_t get_offset_of_time_27() { return static_cast<int32_t>(offsetof(ModelController_t213260968, ___time_27)); }
	inline float get_time_27() const { return ___time_27; }
	inline float* get_address_of_time_27() { return &___time_27; }
	inline void set_time_27(float value)
	{
		___time_27 = value;
	}

	inline static int32_t get_offset_of_thresholdTime_28() { return static_cast<int32_t>(offsetof(ModelController_t213260968, ___thresholdTime_28)); }
	inline float get_thresholdTime_28() const { return ___thresholdTime_28; }
	inline float* get_address_of_thresholdTime_28() { return &___thresholdTime_28; }
	inline void set_thresholdTime_28(float value)
	{
		___thresholdTime_28 = value;
	}

	inline static int32_t get_offset_of_hintFinished_29() { return static_cast<int32_t>(offsetof(ModelController_t213260968, ___hintFinished_29)); }
	inline bool get_hintFinished_29() const { return ___hintFinished_29; }
	inline bool* get_address_of_hintFinished_29() { return &___hintFinished_29; }
	inline void set_hintFinished_29(bool value)
	{
		___hintFinished_29 = value;
	}

	inline static int32_t get_offset_of_SetModelActiveEvent_30() { return static_cast<int32_t>(offsetof(ModelController_t213260968, ___SetModelActiveEvent_30)); }
	inline SetModelActiveHandler_t2568636180 * get_SetModelActiveEvent_30() const { return ___SetModelActiveEvent_30; }
	inline SetModelActiveHandler_t2568636180 ** get_address_of_SetModelActiveEvent_30() { return &___SetModelActiveEvent_30; }
	inline void set_SetModelActiveEvent_30(SetModelActiveHandler_t2568636180 * value)
	{
		___SetModelActiveEvent_30 = value;
		Il2CppCodeGenWriteBarrier((&___SetModelActiveEvent_30), value);
	}

	inline static int32_t get_offset_of_SetModelInactiveEvent_31() { return static_cast<int32_t>(offsetof(ModelController_t213260968, ___SetModelInactiveEvent_31)); }
	inline SetModelInactiveHandler_t522955110 * get_SetModelInactiveEvent_31() const { return ___SetModelInactiveEvent_31; }
	inline SetModelInactiveHandler_t522955110 ** get_address_of_SetModelInactiveEvent_31() { return &___SetModelInactiveEvent_31; }
	inline void set_SetModelInactiveEvent_31(SetModelInactiveHandler_t522955110 * value)
	{
		___SetModelInactiveEvent_31 = value;
		Il2CppCodeGenWriteBarrier((&___SetModelInactiveEvent_31), value);
	}

	inline static int32_t get_offset_of_ResetHandlerEvent_32() { return static_cast<int32_t>(offsetof(ModelController_t213260968, ___ResetHandlerEvent_32)); }
	inline ResetHandler_t86549611 * get_ResetHandlerEvent_32() const { return ___ResetHandlerEvent_32; }
	inline ResetHandler_t86549611 ** get_address_of_ResetHandlerEvent_32() { return &___ResetHandlerEvent_32; }
	inline void set_ResetHandlerEvent_32(ResetHandler_t86549611 * value)
	{
		___ResetHandlerEvent_32 = value;
		Il2CppCodeGenWriteBarrier((&___ResetHandlerEvent_32), value);
	}

	inline static int32_t get_offset_of_oldPosition1_33() { return static_cast<int32_t>(offsetof(ModelController_t213260968, ___oldPosition1_33)); }
	inline Vector3_t3722313464  get_oldPosition1_33() const { return ___oldPosition1_33; }
	inline Vector3_t3722313464 * get_address_of_oldPosition1_33() { return &___oldPosition1_33; }
	inline void set_oldPosition1_33(Vector3_t3722313464  value)
	{
		___oldPosition1_33 = value;
	}

	inline static int32_t get_offset_of_oldPosition2_34() { return static_cast<int32_t>(offsetof(ModelController_t213260968, ___oldPosition2_34)); }
	inline Vector3_t3722313464  get_oldPosition2_34() const { return ___oldPosition2_34; }
	inline Vector3_t3722313464 * get_address_of_oldPosition2_34() { return &___oldPosition2_34; }
	inline void set_oldPosition2_34(Vector3_t3722313464  value)
	{
		___oldPosition2_34 = value;
	}

	inline static int32_t get_offset_of_first_35() { return static_cast<int32_t>(offsetof(ModelController_t213260968, ___first_35)); }
	inline bool get_first_35() const { return ___first_35; }
	inline bool* get_address_of_first_35() { return &___first_35; }
	inline void set_first_35(bool value)
	{
		___first_35 = value;
	}
};

struct ModelController_t213260968_StaticFields
{
public:
	// System.Int32 ModelController::kCmdCmdChangeTransform
	int32_t ___kCmdCmdChangeTransform_36;
	// System.Int32 ModelController::kRpcRpcChangeTransform
	int32_t ___kRpcRpcChangeTransform_37;
	// System.Int32 ModelController::kCmdCmdChangeScale
	int32_t ___kCmdCmdChangeScale_38;
	// System.Int32 ModelController::kRpcRpcChangeScale
	int32_t ___kRpcRpcChangeScale_39;
	// System.Int32 ModelController::kCmdCmdRotate
	int32_t ___kCmdCmdRotate_40;
	// System.Int32 ModelController::kRpcRpcRotate
	int32_t ___kRpcRpcRotate_41;
	// System.Int32 ModelController::kCmdCmdSetModelActive
	int32_t ___kCmdCmdSetModelActive_42;
	// System.Int32 ModelController::kRpcRpcSetModelActive
	int32_t ___kRpcRpcSetModelActive_43;
	// System.Int32 ModelController::kCmdCmdSetConfirmButtonActive
	int32_t ___kCmdCmdSetConfirmButtonActive_44;
	// System.Int32 ModelController::kRpcRpcSetConfirmButtonActive
	int32_t ___kRpcRpcSetConfirmButtonActive_45;
	// System.Int32 ModelController::kCmdCmdConfirm
	int32_t ___kCmdCmdConfirm_46;
	// System.Int32 ModelController::kRpcRpcConfirm
	int32_t ___kRpcRpcConfirm_47;
	// System.Int32 ModelController::kCmdCmdReset
	int32_t ___kCmdCmdReset_48;
	// System.Int32 ModelController::kRpcRpcReset
	int32_t ___kRpcRpcReset_49;

public:
	inline static int32_t get_offset_of_kCmdCmdChangeTransform_36() { return static_cast<int32_t>(offsetof(ModelController_t213260968_StaticFields, ___kCmdCmdChangeTransform_36)); }
	inline int32_t get_kCmdCmdChangeTransform_36() const { return ___kCmdCmdChangeTransform_36; }
	inline int32_t* get_address_of_kCmdCmdChangeTransform_36() { return &___kCmdCmdChangeTransform_36; }
	inline void set_kCmdCmdChangeTransform_36(int32_t value)
	{
		___kCmdCmdChangeTransform_36 = value;
	}

	inline static int32_t get_offset_of_kRpcRpcChangeTransform_37() { return static_cast<int32_t>(offsetof(ModelController_t213260968_StaticFields, ___kRpcRpcChangeTransform_37)); }
	inline int32_t get_kRpcRpcChangeTransform_37() const { return ___kRpcRpcChangeTransform_37; }
	inline int32_t* get_address_of_kRpcRpcChangeTransform_37() { return &___kRpcRpcChangeTransform_37; }
	inline void set_kRpcRpcChangeTransform_37(int32_t value)
	{
		___kRpcRpcChangeTransform_37 = value;
	}

	inline static int32_t get_offset_of_kCmdCmdChangeScale_38() { return static_cast<int32_t>(offsetof(ModelController_t213260968_StaticFields, ___kCmdCmdChangeScale_38)); }
	inline int32_t get_kCmdCmdChangeScale_38() const { return ___kCmdCmdChangeScale_38; }
	inline int32_t* get_address_of_kCmdCmdChangeScale_38() { return &___kCmdCmdChangeScale_38; }
	inline void set_kCmdCmdChangeScale_38(int32_t value)
	{
		___kCmdCmdChangeScale_38 = value;
	}

	inline static int32_t get_offset_of_kRpcRpcChangeScale_39() { return static_cast<int32_t>(offsetof(ModelController_t213260968_StaticFields, ___kRpcRpcChangeScale_39)); }
	inline int32_t get_kRpcRpcChangeScale_39() const { return ___kRpcRpcChangeScale_39; }
	inline int32_t* get_address_of_kRpcRpcChangeScale_39() { return &___kRpcRpcChangeScale_39; }
	inline void set_kRpcRpcChangeScale_39(int32_t value)
	{
		___kRpcRpcChangeScale_39 = value;
	}

	inline static int32_t get_offset_of_kCmdCmdRotate_40() { return static_cast<int32_t>(offsetof(ModelController_t213260968_StaticFields, ___kCmdCmdRotate_40)); }
	inline int32_t get_kCmdCmdRotate_40() const { return ___kCmdCmdRotate_40; }
	inline int32_t* get_address_of_kCmdCmdRotate_40() { return &___kCmdCmdRotate_40; }
	inline void set_kCmdCmdRotate_40(int32_t value)
	{
		___kCmdCmdRotate_40 = value;
	}

	inline static int32_t get_offset_of_kRpcRpcRotate_41() { return static_cast<int32_t>(offsetof(ModelController_t213260968_StaticFields, ___kRpcRpcRotate_41)); }
	inline int32_t get_kRpcRpcRotate_41() const { return ___kRpcRpcRotate_41; }
	inline int32_t* get_address_of_kRpcRpcRotate_41() { return &___kRpcRpcRotate_41; }
	inline void set_kRpcRpcRotate_41(int32_t value)
	{
		___kRpcRpcRotate_41 = value;
	}

	inline static int32_t get_offset_of_kCmdCmdSetModelActive_42() { return static_cast<int32_t>(offsetof(ModelController_t213260968_StaticFields, ___kCmdCmdSetModelActive_42)); }
	inline int32_t get_kCmdCmdSetModelActive_42() const { return ___kCmdCmdSetModelActive_42; }
	inline int32_t* get_address_of_kCmdCmdSetModelActive_42() { return &___kCmdCmdSetModelActive_42; }
	inline void set_kCmdCmdSetModelActive_42(int32_t value)
	{
		___kCmdCmdSetModelActive_42 = value;
	}

	inline static int32_t get_offset_of_kRpcRpcSetModelActive_43() { return static_cast<int32_t>(offsetof(ModelController_t213260968_StaticFields, ___kRpcRpcSetModelActive_43)); }
	inline int32_t get_kRpcRpcSetModelActive_43() const { return ___kRpcRpcSetModelActive_43; }
	inline int32_t* get_address_of_kRpcRpcSetModelActive_43() { return &___kRpcRpcSetModelActive_43; }
	inline void set_kRpcRpcSetModelActive_43(int32_t value)
	{
		___kRpcRpcSetModelActive_43 = value;
	}

	inline static int32_t get_offset_of_kCmdCmdSetConfirmButtonActive_44() { return static_cast<int32_t>(offsetof(ModelController_t213260968_StaticFields, ___kCmdCmdSetConfirmButtonActive_44)); }
	inline int32_t get_kCmdCmdSetConfirmButtonActive_44() const { return ___kCmdCmdSetConfirmButtonActive_44; }
	inline int32_t* get_address_of_kCmdCmdSetConfirmButtonActive_44() { return &___kCmdCmdSetConfirmButtonActive_44; }
	inline void set_kCmdCmdSetConfirmButtonActive_44(int32_t value)
	{
		___kCmdCmdSetConfirmButtonActive_44 = value;
	}

	inline static int32_t get_offset_of_kRpcRpcSetConfirmButtonActive_45() { return static_cast<int32_t>(offsetof(ModelController_t213260968_StaticFields, ___kRpcRpcSetConfirmButtonActive_45)); }
	inline int32_t get_kRpcRpcSetConfirmButtonActive_45() const { return ___kRpcRpcSetConfirmButtonActive_45; }
	inline int32_t* get_address_of_kRpcRpcSetConfirmButtonActive_45() { return &___kRpcRpcSetConfirmButtonActive_45; }
	inline void set_kRpcRpcSetConfirmButtonActive_45(int32_t value)
	{
		___kRpcRpcSetConfirmButtonActive_45 = value;
	}

	inline static int32_t get_offset_of_kCmdCmdConfirm_46() { return static_cast<int32_t>(offsetof(ModelController_t213260968_StaticFields, ___kCmdCmdConfirm_46)); }
	inline int32_t get_kCmdCmdConfirm_46() const { return ___kCmdCmdConfirm_46; }
	inline int32_t* get_address_of_kCmdCmdConfirm_46() { return &___kCmdCmdConfirm_46; }
	inline void set_kCmdCmdConfirm_46(int32_t value)
	{
		___kCmdCmdConfirm_46 = value;
	}

	inline static int32_t get_offset_of_kRpcRpcConfirm_47() { return static_cast<int32_t>(offsetof(ModelController_t213260968_StaticFields, ___kRpcRpcConfirm_47)); }
	inline int32_t get_kRpcRpcConfirm_47() const { return ___kRpcRpcConfirm_47; }
	inline int32_t* get_address_of_kRpcRpcConfirm_47() { return &___kRpcRpcConfirm_47; }
	inline void set_kRpcRpcConfirm_47(int32_t value)
	{
		___kRpcRpcConfirm_47 = value;
	}

	inline static int32_t get_offset_of_kCmdCmdReset_48() { return static_cast<int32_t>(offsetof(ModelController_t213260968_StaticFields, ___kCmdCmdReset_48)); }
	inline int32_t get_kCmdCmdReset_48() const { return ___kCmdCmdReset_48; }
	inline int32_t* get_address_of_kCmdCmdReset_48() { return &___kCmdCmdReset_48; }
	inline void set_kCmdCmdReset_48(int32_t value)
	{
		___kCmdCmdReset_48 = value;
	}

	inline static int32_t get_offset_of_kRpcRpcReset_49() { return static_cast<int32_t>(offsetof(ModelController_t213260968_StaticFields, ___kRpcRpcReset_49)); }
	inline int32_t get_kRpcRpcReset_49() const { return ___kRpcRpcReset_49; }
	inline int32_t* get_address_of_kRpcRpcReset_49() { return &___kRpcRpcReset_49; }
	inline void set_kRpcRpcReset_49(int32_t value)
	{
		___kRpcRpcReset_49 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODELCONTROLLER_T213260968_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_8;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_9;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_t2598313366 * ___m_CanvasRenderer_10;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_11;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_12;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_14;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_16;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_19;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_6)); }
	inline Material_t340375123 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t340375123 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t340375123 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_6), value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_7)); }
	inline Color_t2555686324  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t2555686324 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t2555686324  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_8)); }
	inline bool get_m_RaycastTarget_8() const { return ___m_RaycastTarget_8; }
	inline bool* get_address_of_m_RaycastTarget_8() { return &___m_RaycastTarget_8; }
	inline void set_m_RaycastTarget_8(bool value)
	{
		___m_RaycastTarget_8 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_9)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_9() const { return ___m_RectTransform_9; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_9() { return &___m_RectTransform_9; }
	inline void set_m_RectTransform_9(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_9), value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRenderer_10)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRenderer_10() const { return ___m_CanvasRenderer_10; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRenderer_10() { return &___m_CanvasRenderer_10; }
	inline void set_m_CanvasRenderer_10(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRenderer_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRenderer_10), value);
	}

	inline static int32_t get_offset_of_m_Canvas_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_11)); }
	inline Canvas_t3310196443 * get_m_Canvas_11() const { return ___m_Canvas_11; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_11() { return &___m_Canvas_11; }
	inline void set_m_Canvas_11(Canvas_t3310196443 * value)
	{
		___m_Canvas_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_11), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_12)); }
	inline bool get_m_VertsDirty_12() const { return ___m_VertsDirty_12; }
	inline bool* get_address_of_m_VertsDirty_12() { return &___m_VertsDirty_12; }
	inline void set_m_VertsDirty_12(bool value)
	{
		___m_VertsDirty_12 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_13)); }
	inline bool get_m_MaterialDirty_13() const { return ___m_MaterialDirty_13; }
	inline bool* get_address_of_m_MaterialDirty_13() { return &___m_MaterialDirty_13; }
	inline void set_m_MaterialDirty_13(bool value)
	{
		___m_MaterialDirty_13 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_14() const { return ___m_OnDirtyLayoutCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_14() { return &___m_OnDirtyLayoutCallback_14; }
	inline void set_m_OnDirtyLayoutCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_14), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_15)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_15() const { return ___m_OnDirtyVertsCallback_15; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_15() { return &___m_OnDirtyVertsCallback_15; }
	inline void set_m_OnDirtyVertsCallback_15(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_15), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_16)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_16() const { return ___m_OnDirtyMaterialCallback_16; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_16() { return &___m_OnDirtyMaterialCallback_16; }
	inline void set_m_OnDirtyMaterialCallback_16(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_16), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_19() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_19)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_19() const { return ___m_ColorTweenRunner_19; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_19() { return &___m_ColorTweenRunner_19; }
	inline void set_m_ColorTweenRunner_19(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_19), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_20(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_20 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_17;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_18;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t340375123 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t340375123 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_4), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_5), value);
	}

	inline static int32_t get_offset_of_s_Mesh_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_17)); }
	inline Mesh_t3648964284 * get_s_Mesh_17() const { return ___s_Mesh_17; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_17() { return &___s_Mesh_17; }
	inline void set_s_Mesh_17(Mesh_t3648964284 * value)
	{
		___s_Mesh_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_17), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_18)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_18() const { return ___s_VertexHelper_18; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_18() { return &___s_VertexHelper_18; }
	inline void set_s_VertexHelper_18(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_21;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_22;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_23;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_25;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_26;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_27;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_28;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_29;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_21)); }
	inline bool get_m_ShouldRecalculateStencil_21() const { return ___m_ShouldRecalculateStencil_21; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_21() { return &___m_ShouldRecalculateStencil_21; }
	inline void set_m_ShouldRecalculateStencil_21(bool value)
	{
		___m_ShouldRecalculateStencil_21 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_22)); }
	inline Material_t340375123 * get_m_MaskMaterial_22() const { return ___m_MaskMaterial_22; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_22() { return &___m_MaskMaterial_22; }
	inline void set_m_MaskMaterial_22(Material_t340375123 * value)
	{
		___m_MaskMaterial_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_22), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_23)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_23() const { return ___m_ParentMask_23; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_23() { return &___m_ParentMask_23; }
	inline void set_m_ParentMask_23(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_23), value);
	}

	inline static int32_t get_offset_of_m_Maskable_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_24)); }
	inline bool get_m_Maskable_24() const { return ___m_Maskable_24; }
	inline bool* get_address_of_m_Maskable_24() { return &___m_Maskable_24; }
	inline void set_m_Maskable_24(bool value)
	{
		___m_Maskable_24 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_25)); }
	inline bool get_m_IncludeForMasking_25() const { return ___m_IncludeForMasking_25; }
	inline bool* get_address_of_m_IncludeForMasking_25() { return &___m_IncludeForMasking_25; }
	inline void set_m_IncludeForMasking_25(bool value)
	{
		___m_IncludeForMasking_25 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_26)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_26() const { return ___m_OnCullStateChanged_26; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_26() { return &___m_OnCullStateChanged_26; }
	inline void set_m_OnCullStateChanged_26(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_26), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_27)); }
	inline bool get_m_ShouldRecalculate_27() const { return ___m_ShouldRecalculate_27; }
	inline bool* get_address_of_m_ShouldRecalculate_27() { return &___m_ShouldRecalculate_27; }
	inline void set_m_ShouldRecalculate_27(bool value)
	{
		___m_ShouldRecalculate_27 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_28)); }
	inline int32_t get_m_StencilValue_28() const { return ___m_StencilValue_28; }
	inline int32_t* get_address_of_m_StencilValue_28() { return &___m_StencilValue_28; }
	inline void set_m_StencilValue_28(int32_t value)
	{
		___m_StencilValue_28 = value;
	}

	inline static int32_t get_offset_of_m_Corners_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_29)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_29() const { return ___m_Corners_29; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_29() { return &___m_Corners_29; }
	inline void set_m_Corners_29(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_30;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_31;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_32;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_33;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_35;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_36;

public:
	inline static int32_t get_offset_of_m_FontData_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_30)); }
	inline FontData_t746620069 * get_m_FontData_30() const { return ___m_FontData_30; }
	inline FontData_t746620069 ** get_address_of_m_FontData_30() { return &___m_FontData_30; }
	inline void set_m_FontData_30(FontData_t746620069 * value)
	{
		___m_FontData_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_30), value);
	}

	inline static int32_t get_offset_of_m_Text_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_31)); }
	inline String_t* get_m_Text_31() const { return ___m_Text_31; }
	inline String_t** get_address_of_m_Text_31() { return &___m_Text_31; }
	inline void set_m_Text_31(String_t* value)
	{
		___m_Text_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_31), value);
	}

	inline static int32_t get_offset_of_m_TextCache_32() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_32)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_32() const { return ___m_TextCache_32; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_32() { return &___m_TextCache_32; }
	inline void set_m_TextCache_32(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_32), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_33)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_33() const { return ___m_TextCacheForLayout_33; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_33() { return &___m_TextCacheForLayout_33; }
	inline void set_m_TextCacheForLayout_33(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_33), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_35() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_35)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_35() const { return ___m_DisableFontTextureRebuiltCallback_35; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_35() { return &___m_DisableFontTextureRebuiltCallback_35; }
	inline void set_m_DisableFontTextureRebuiltCallback_35(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_35 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_36() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_36)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_36() const { return ___m_TempVerts_36; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_36() { return &___m_TempVerts_36; }
	inline void set_m_TempVerts_36(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_36 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_36), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_34;

public:
	inline static int32_t get_offset_of_s_DefaultText_34() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_34)); }
	inline Material_t340375123 * get_s_DefaultText_34() const { return ___s_DefaultText_34; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_34() { return &___s_DefaultText_34; }
	inline void set_s_DefaultText_34(Material_t340375123 * value)
	{
		___s_DefaultText_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_34), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
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
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t3722313464  m_Items[1];

public:
	inline Vector3_t3722313464  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t3722313464  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_t2156229523  m_Items[1];

public:
	inline Vector2_t2156229523  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t2156229523 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t2156229523  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t2156229523  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t2156229523 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t2156229523  value)
	{
		m_Items[index] = value;
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
// System.Single[]
struct SingleU5BU5D_t1444911251  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
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


// T UnityEngine.XR.iOS.Utils.ObjectSerializationExtension::Deserialize<System.Object>(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ObjectSerializationExtension_Deserialize_TisRuntimeObject_m3752543098_gshared (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___byteArray0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m2446893047_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.iOS.UnityARVideoFormat>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t1010806104  List_1_GetEnumerator_m3413760873_gshared (List_1_t3416529523 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.UnityARVideoFormat>::get_Current()
extern "C" IL2CPP_METHOD_ATTR UnityARVideoFormat_t1944454781  Enumerator_get_Current_m3655906576_gshared (Enumerator_t1010806104 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m1061214600_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Transform_t3600365921 * p1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m1913675517_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.UnityARVideoFormat>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2987439075_gshared (Enumerator_t1010806104 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.UnityARVideoFormat>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m510309855_gshared (Enumerator_t1010806104 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_1__ctor_m118522912_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);

// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BinaryFormatter__ctor_m971003555 (BinaryFormatter_t3197753202 * __this, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MemoryStream__ctor_m2678285228 (MemoryStream_t94973147 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Serialize(System.IO.Stream,System.Object)
extern "C" IL2CPP_METHOD_ATTR void BinaryFormatter_Serialize_m1744386044 (BinaryFormatter_t3197753202 * __this, Stream_t1273022909 * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m630303134 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector4__ctor_m2498754347 (Vector4_t3319028937 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.Utils.SerializableVector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void SerializableVector4__ctor_m2807424733 (SerializableVector4_t2739337940 * __this, float ___rX0, float ___rY1, float ___rZ2, float ___rW3, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.Utils.serializableARSessionConfiguration::.ctor(UnityEngine.XR.iOS.UnityARAlignment,UnityEngine.XR.iOS.UnityARPlaneDetection,System.Boolean,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void serializableARSessionConfiguration__ctor_m1129393182 (serializableARSessionConfiguration_t30565192 * __this, int32_t ___align0, int32_t ___planeDet1, bool ___getPtCloud2, bool ___enableLightEst3, bool ___enableAutoFoc4, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::.ctor(UnityEngine.XR.iOS.UnityARAlignment,UnityEngine.XR.iOS.UnityARPlaneDetection,System.Boolean,System.Boolean,System.Boolean,UnityEngine.XR.iOS.UnityAREnvironmentTexturing,System.Int32,System.IntPtr,System.String,System.String,UnityEngine.XR.iOS.ARWorldMap)
extern "C" IL2CPP_METHOD_ATTR void ARKitWorldTrackingSessionConfiguration__ctor_m2092370092 (ARKitWorldTrackingSessionConfiguration_t273386347 * __this, int32_t ___alignment0, int32_t ___planeDetection1, bool ___getPointCloudData2, bool ___enableLightEstimation3, bool ___enableAutoFocus4, int32_t ___environmentTexturing5, int32_t ___maximumNumberOfTrackedImages6, intptr_t ___vidFormat7, String_t* ___refImageGroup8, String_t* ___refObjectGroup9, ARWorldMap_t2240790807 * ___worldMap10, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.ARKitFaceTrackingConfiguration::.ctor(UnityEngine.XR.iOS.UnityARAlignment,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ARKitFaceTrackingConfiguration__ctor_m3001147642 (ARKitFaceTrackingConfiguration_t386387352 * __this, int32_t ___alignment0, bool ___enableLightEstimation1, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.iOS.ARFaceGeometry::get_vertexCount()
extern "C" IL2CPP_METHOD_ATTR int32_t ARFaceGeometry_get_vertexCount_m189993435 (ARFaceGeometry_t5139606 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.iOS.ARFaceGeometry::get_textureCoordinateCount()
extern "C" IL2CPP_METHOD_ATTR int32_t ARFaceGeometry_get_textureCoordinateCount_m526317715 (ARFaceGeometry_t5139606 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.iOS.ARFaceGeometry::get_triangleCount()
extern "C" IL2CPP_METHOD_ATTR int32_t ARFaceGeometry_get_triangleCount_m3343863450 (ARFaceGeometry_t5139606 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3[] UnityEngine.XR.iOS.ARFaceGeometry::get_vertices()
extern "C" IL2CPP_METHOD_ATTR Vector3U5BU5D_t1718750761* ARFaceGeometry_get_vertices_m2610047597 (ARFaceGeometry_t5139606 * __this, const RuntimeMethod* method);
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2884209081 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method);
// UnityEngine.Vector2[] UnityEngine.XR.iOS.ARFaceGeometry::get_textureCoordinates()
extern "C" IL2CPP_METHOD_ATTR Vector2U5BU5D_t1457185986* ARFaceGeometry_get_textureCoordinates_m2869279217 (ARFaceGeometry_t5139606 * __this, const RuntimeMethod* method);
// System.Int32[] UnityEngine.XR.iOS.ARFaceGeometry::get_triangleIndices()
extern "C" IL2CPP_METHOD_ATTR Int32U5BU5D_t385246372* ARFaceGeometry_get_triangleIndices_m2682150509 (ARFaceGeometry_t5139606 * __this, const RuntimeMethod* method);
// System.Byte[] UnityEngine.XR.iOS.Utils.ObjectSerializationExtension::SerializeToByteArray(System.Object)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* ObjectSerializationExtension_SerializeToByteArray_m28764994 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.Utils.serializableFaceGeometry::.ctor(System.Byte[],System.Byte[],System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void serializableFaceGeometry__ctor_m3710354308 (serializableFaceGeometry_t1893768467 * __this, ByteU5BU5D_t4116647657* ___inputVertices0, ByteU5BU5D_t4116647657* ___inputTexCoords1, ByteU5BU5D_t4116647657* ___inputTriIndices2, const RuntimeMethod* method);
// System.Single System.BitConverter::ToSingle(System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR float BitConverter_ToSingle_m2597008633 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* p0, int32_t p1, const RuntimeMethod* method);
// T UnityEngine.XR.iOS.Utils.ObjectSerializationExtension::Deserialize<System.Int32[]>(System.Byte[])
inline Int32U5BU5D_t385246372* ObjectSerializationExtension_Deserialize_TisInt32U5BU5D_t385246372_m1366516915 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___byteArray0, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t385246372* (*) (RuntimeObject * /* static, unused */, ByteU5BU5D_t4116647657*, const RuntimeMethod*))ObjectSerializationExtension_Deserialize_TisRuntimeObject_m3752543098_gshared)(__this /* static, unused */, ___byteArray0, method);
}
// System.Int32 UnityEngine.XR.iOS.ARPlaneGeometry::get_vertexCount()
extern "C" IL2CPP_METHOD_ATTR int32_t ARPlaneGeometry_get_vertexCount_m2299852998 (ARPlaneGeometry_t1169415986 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.iOS.ARPlaneGeometry::get_textureCoordinateCount()
extern "C" IL2CPP_METHOD_ATTR int32_t ARPlaneGeometry_get_textureCoordinateCount_m4191571174 (ARPlaneGeometry_t1169415986 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.iOS.ARPlaneGeometry::get_triangleCount()
extern "C" IL2CPP_METHOD_ATTR int32_t ARPlaneGeometry_get_triangleCount_m846416585 (ARPlaneGeometry_t1169415986 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3[] UnityEngine.XR.iOS.ARPlaneGeometry::get_vertices()
extern "C" IL2CPP_METHOD_ATTR Vector3U5BU5D_t1718750761* ARPlaneGeometry_get_vertices_m3949474048 (ARPlaneGeometry_t1169415986 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3[] UnityEngine.XR.iOS.ARPlaneGeometry::get_boundaryVertices()
extern "C" IL2CPP_METHOD_ATTR Vector3U5BU5D_t1718750761* ARPlaneGeometry_get_boundaryVertices_m1646330886 (ARPlaneGeometry_t1169415986 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.iOS.ARPlaneGeometry::get_boundaryVertexCount()
extern "C" IL2CPP_METHOD_ATTR int32_t ARPlaneGeometry_get_boundaryVertexCount_m3107326718 (ARPlaneGeometry_t1169415986 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2[] UnityEngine.XR.iOS.ARPlaneGeometry::get_textureCoordinates()
extern "C" IL2CPP_METHOD_ATTR Vector2U5BU5D_t1457185986* ARPlaneGeometry_get_textureCoordinates_m1206112685 (ARPlaneGeometry_t1169415986 * __this, const RuntimeMethod* method);
// System.Int32[] UnityEngine.XR.iOS.ARPlaneGeometry::get_triangleIndices()
extern "C" IL2CPP_METHOD_ATTR Int32U5BU5D_t385246372* ARPlaneGeometry_get_triangleIndices_m3110323458 (ARPlaneGeometry_t1169415986 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.Utils.serializablePlaneGeometry::.ctor(System.Byte[],System.Byte[],System.Byte[],System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void serializablePlaneGeometry__ctor_m2543286638 (serializablePlaneGeometry_t3471745378 * __this, ByteU5BU5D_t4116647657* ___inputVertices0, ByteU5BU5D_t4116647657* ___inputTexCoords1, ByteU5BU5D_t4116647657* ___inputTriIndices2, ByteU5BU5D_t4116647657* ___boundaryVerts3, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Single)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* BitConverter_GetBytes_m692533364 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.Utils.serializablePointCloud::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void serializablePointCloud__ctor_m1387577147 (serializablePointCloud_t4241265545 * __this, ByteU5BU5D_t4116647657* ___inputPoints0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.Utils.serializableSHC::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void serializableSHC__ctor_m1264141150 (serializableSHC_t226029808 * __this, ByteU5BU5D_t4116647657* ___inputSHCData0, const RuntimeMethod* method);
// UnityEngine.XR.iOS.Utils.serializableUnityARLightData UnityEngine.XR.iOS.Utils.serializableUnityARLightData::op_Implicit(UnityEngine.XR.iOS.UnityARLightData)
extern "C" IL2CPP_METHOD_ATTR serializableUnityARLightData_t3029229948 * serializableUnityARLightData_op_Implicit_m1562974187 (RuntimeObject * __this /* static, unused */, UnityARLightData_t2160616730  ___rValue0, const RuntimeMethod* method);
// UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4 UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.XR.iOS.UnityARMatrix4x4)
extern "C" IL2CPP_METHOD_ATTR serializableUnityARMatrix4x4_t255097097 * serializableUnityARMatrix4x4_op_Implicit_m4130895361 (RuntimeObject * __this /* static, unused */, UnityARMatrix4x4_t4073345847  ___rValue0, const RuntimeMethod* method);
// UnityEngine.XR.iOS.Utils.serializablePointCloud UnityEngine.XR.iOS.Utils.serializablePointCloud::op_Implicit(UnityEngine.Vector3[])
extern "C" IL2CPP_METHOD_ATTR serializablePointCloud_t4241265545 * serializablePointCloud_op_Implicit_m1868975265 (RuntimeObject * __this /* static, unused */, Vector3U5BU5D_t1718750761* ___vecPointCloud0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.Utils.serializableUnityARCamera::.ctor(UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4,UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4,UnityEngine.XR.iOS.ARTrackingState,UnityEngine.XR.iOS.ARTrackingStateReason,UnityEngine.XR.iOS.UnityVideoParams,UnityEngine.XR.iOS.UnityARLightData,UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4,UnityEngine.XR.iOS.Utils.serializablePointCloud,UnityEngine.XR.iOS.ARWorldMappingStatus)
extern "C" IL2CPP_METHOD_ATTR void serializableUnityARCamera__ctor_m2253830471 (serializableUnityARCamera_t1848993995 * __this, serializableUnityARMatrix4x4_t255097097 * ___wt0, serializableUnityARMatrix4x4_t255097097 * ___pm1, int32_t ___ats2, int32_t ___atsr3, UnityVideoParams_t4155354995  ___uvp4, UnityARLightData_t2160616730  ___lightDat5, serializableUnityARMatrix4x4_t255097097 * ___dt6, serializablePointCloud_t4241265545 * ___spc7, int32_t ___awms8, const RuntimeMethod* method);
// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4)
extern "C" IL2CPP_METHOD_ATTR UnityARMatrix4x4_t4073345847  serializableUnityARMatrix4x4_op_Implicit_m1102094950 (RuntimeObject * __this /* static, unused */, serializableUnityARMatrix4x4_t255097097 * ___rValue0, const RuntimeMethod* method);
// UnityEngine.XR.iOS.UnityARLightData UnityEngine.XR.iOS.Utils.serializableUnityARLightData::op_Implicit(UnityEngine.XR.iOS.Utils.serializableUnityARLightData)
extern "C" IL2CPP_METHOD_ATTR UnityARLightData_t2160616730  serializableUnityARLightData_op_Implicit_m864326423 (RuntimeObject * __this /* static, unused */, serializableUnityARLightData_t3029229948 * ___rValue0, const RuntimeMethod* method);
// UnityEngine.Vector3[] UnityEngine.XR.iOS.Utils.serializablePointCloud::op_Implicit(UnityEngine.XR.iOS.Utils.serializablePointCloud)
extern "C" IL2CPP_METHOD_ATTR Vector3U5BU5D_t1718750761* serializablePointCloud_op_Implicit_m3100839470 (RuntimeObject * __this /* static, unused */, serializablePointCloud_t4241265545 * ___spc0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARCamera::.ctor(UnityEngine.XR.iOS.UnityARMatrix4x4,UnityEngine.XR.iOS.UnityARMatrix4x4,UnityEngine.XR.iOS.ARTrackingState,UnityEngine.XR.iOS.ARTrackingStateReason,UnityEngine.XR.iOS.UnityVideoParams,UnityEngine.XR.iOS.UnityARLightData,UnityEngine.XR.iOS.UnityARMatrix4x4,UnityEngine.Vector3[],UnityEngine.XR.iOS.ARWorldMappingStatus)
extern "C" IL2CPP_METHOD_ATTR void UnityARCamera__ctor_m4225117993 (UnityARCamera_t2069150450 * __this, UnityARMatrix4x4_t4073345847  ___wt0, UnityARMatrix4x4_t4073345847  ___pm1, int32_t ___ats2, int32_t ___atsr3, UnityVideoParams_t4155354995  ___uvp4, UnityARLightData_t2160616730  ___lightDat5, UnityARMatrix4x4_t4073345847  ___dt6, Vector3U5BU5D_t1718750761* ___pointCloud7, int32_t ___awms8, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARFaceAnchor::get_transform()
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t1817901843  ARFaceAnchor_get_transform_m2525862755 (ARFaceAnchor_t1844206636 * __this, const RuntimeMethod* method);
// UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4 UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.Matrix4x4)
extern "C" IL2CPP_METHOD_ATTR serializableUnityARMatrix4x4_t255097097 * serializableUnityARMatrix4x4_op_Implicit_m3916569269 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  ___rValue0, const RuntimeMethod* method);
// UnityEngine.XR.iOS.ARFaceGeometry UnityEngine.XR.iOS.ARFaceAnchor::get_faceGeometry()
extern "C" IL2CPP_METHOD_ATTR ARFaceGeometry_t5139606 * ARFaceAnchor_get_faceGeometry_m1319421082 (ARFaceAnchor_t1844206636 * __this, const RuntimeMethod* method);
// UnityEngine.XR.iOS.Utils.serializableFaceGeometry UnityEngine.XR.iOS.Utils.serializableFaceGeometry::op_Implicit(UnityEngine.XR.iOS.ARFaceGeometry)
extern "C" IL2CPP_METHOD_ATTR serializableFaceGeometry_t1893768467 * serializableFaceGeometry_op_Implicit_m1662172422 (RuntimeObject * __this /* static, unused */, ARFaceGeometry_t5139606 * ___faceGeom0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C" IL2CPP_METHOD_ATTR Encoding_t1523322056 * Encoding_get_UTF8_m1008486739 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String UnityEngine.XR.iOS.ARFaceAnchor::get_identifierStr()
extern "C" IL2CPP_METHOD_ATTR String_t* ARFaceAnchor_get_identifierStr_m1822207425 (ARFaceAnchor_t1844206636 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Single> UnityEngine.XR.iOS.ARFaceAnchor::get_blendShapes()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t1182523073 * ARFaceAnchor_get_blendShapes_m335066950 (ARFaceAnchor_t1844206636 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.iOS.ARFaceAnchor::get_isTracked()
extern "C" IL2CPP_METHOD_ATTR bool ARFaceAnchor_get_isTracked_m3291349908 (ARFaceAnchor_t1844206636 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.Utils.serializableUnityARFaceAnchor::.ctor(UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4,UnityEngine.XR.iOS.Utils.serializableFaceGeometry,System.Collections.Generic.Dictionary`2<System.String,System.Single>,System.Byte[],System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void serializableUnityARFaceAnchor__ctor_m3796934863 (serializableUnityARFaceAnchor_t1413500457 * __this, serializableUnityARMatrix4x4_t255097097 * ___wt0, serializableFaceGeometry_t1893768467 * ___fg1, Dictionary_2_t1182523073 * ___bs2, ByteU5BU5D_t4116647657* ___idstr3, bool ___bIsTracked4, const RuntimeMethod* method);
// UnityEngine.XR.iOS.Utils.serializableSHC UnityEngine.XR.iOS.Utils.serializableSHC::op_Implicit(System.Single[])
extern "C" IL2CPP_METHOD_ATTR serializableSHC_t226029808 * serializableSHC_op_Implicit_m657028205 (RuntimeObject * __this /* static, unused */, SingleU5BU5D_t1444911251* ___floatsSHC0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.Utils.serializableUnityARLightData::.ctor(UnityEngine.XR.iOS.UnityARLightData)
extern "C" IL2CPP_METHOD_ATTR void serializableUnityARLightData__ctor_m3747442693 (serializableUnityARLightData_t3029229948 * __this, UnityARLightData_t2160616730  ___lightData0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARLightEstimate::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void UnityARLightEstimate__ctor_m1412967459 (UnityARLightEstimate_t1498306117 * __this, float ___intensity0, float ___temperature1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Single[] UnityEngine.XR.iOS.Utils.serializableSHC::op_Implicit(UnityEngine.XR.iOS.Utils.serializableSHC)
extern "C" IL2CPP_METHOD_ATTR SingleU5BU5D_t1444911251* serializableSHC_op_Implicit_m142774640 (RuntimeObject * __this /* static, unused */, serializableSHC_t226029808 * ___spc0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARDirectionalLightEstimate::.ctor(System.Single[],UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR void UnityARDirectionalLightEstimate__ctor_m3248127264 (UnityARDirectionalLightEstimate_t2924556994 * __this, SingleU5BU5D_t1444911251* ___SHC0, Vector3_t3722313464  ___direction1, float ___intensity2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARLightData::.ctor(UnityEngine.XR.iOS.LightDataType,UnityEngine.XR.iOS.UnityARLightEstimate,UnityEngine.XR.iOS.UnityARDirectionalLightEstimate)
extern "C" IL2CPP_METHOD_ATTR void UnityARLightData__ctor_m4238079321 (UnityARLightData_t2160616730 * __this, int32_t ___ldt0, UnityARLightEstimate_t1498306117  ___ule1, UnityARDirectionalLightEstimate_t2924556994 * ___udle2, const RuntimeMethod* method);
// UnityEngine.XR.iOS.Utils.SerializableVector4 UnityEngine.XR.iOS.Utils.SerializableVector4::op_Implicit(UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR SerializableVector4_t2739337940 * SerializableVector4_op_Implicit_m1552594547 (RuntimeObject * __this /* static, unused */, Vector4_t3319028937  ___rValue0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4::.ctor(UnityEngine.XR.iOS.Utils.SerializableVector4,UnityEngine.XR.iOS.Utils.SerializableVector4,UnityEngine.XR.iOS.Utils.SerializableVector4,UnityEngine.XR.iOS.Utils.SerializableVector4)
extern "C" IL2CPP_METHOD_ATTR void serializableUnityARMatrix4x4__ctor_m3005749355 (serializableUnityARMatrix4x4_t255097097 * __this, SerializableVector4_t2739337940 * ___v00, SerializableVector4_t2739337940 * ___v11, SerializableVector4_t2739337940 * ___v22, SerializableVector4_t2739337940 * ___v33, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.XR.iOS.Utils.SerializableVector4::op_Implicit(UnityEngine.XR.iOS.Utils.SerializableVector4)
extern "C" IL2CPP_METHOD_ATTR Vector4_t3319028937  SerializableVector4_op_Implicit_m187218805 (RuntimeObject * __this /* static, unused */, SerializableVector4_t2739337940 * ___rValue0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARMatrix4x4::.ctor(UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR void UnityARMatrix4x4__ctor_m3835909947 (UnityARMatrix4x4_t4073345847 * __this, Vector4_t3319028937  ___c00, Vector4_t3319028937  ___c11, Vector4_t3319028937  ___c22, Vector4_t3319028937  ___c33, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Vector4_t3319028937  Matrix4x4_GetColumn_m461504848 (Matrix4x4_t1817901843 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Matrix4x4::.ctor(UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR void Matrix4x4__ctor_m53065545 (Matrix4x4_t1817901843 * __this, Vector4_t3319028937  p0, Vector4_t3319028937  p1, Vector4_t3319028937  p2, Vector4_t3319028937  p3, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARPlaneAnchor::get_transform()
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t1817901843  ARPlaneAnchor_get_transform_m1915241100 (ARPlaneAnchor_t2049372221 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.iOS.ARPlaneAnchor::get_center()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  ARPlaneAnchor_get_center_m3271753266 (ARPlaneAnchor_t2049372221 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.iOS.ARPlaneAnchor::get_extent()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  ARPlaneAnchor_get_extent_m687688995 (ARPlaneAnchor_t2049372221 * __this, const RuntimeMethod* method);
// System.String UnityEngine.XR.iOS.ARPlaneAnchor::get_identifier()
extern "C" IL2CPP_METHOD_ATTR String_t* ARPlaneAnchor_get_identifier_m3202847065 (ARPlaneAnchor_t2049372221 * __this, const RuntimeMethod* method);
// UnityEngine.XR.iOS.ARPlaneGeometry UnityEngine.XR.iOS.ARPlaneAnchor::get_planeGeometry()
extern "C" IL2CPP_METHOD_ATTR ARPlaneGeometry_t1169415986 * ARPlaneAnchor_get_planeGeometry_m4284775768 (ARPlaneAnchor_t2049372221 * __this, const RuntimeMethod* method);
// UnityEngine.XR.iOS.Utils.serializablePlaneGeometry UnityEngine.XR.iOS.Utils.serializablePlaneGeometry::op_Implicit(UnityEngine.XR.iOS.ARPlaneGeometry)
extern "C" IL2CPP_METHOD_ATTR serializablePlaneGeometry_t3471745378 * serializablePlaneGeometry_op_Implicit_m2849839976 (RuntimeObject * __this /* static, unused */, ARPlaneGeometry_t1169415986 * ___planeGeom0, const RuntimeMethod* method);
// UnityEngine.XR.iOS.ARPlaneAnchorAlignment UnityEngine.XR.iOS.ARPlaneAnchor::get_alignment()
extern "C" IL2CPP_METHOD_ATTR int64_t ARPlaneAnchor_get_alignment_m2029387076 (ARPlaneAnchor_t2049372221 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.Utils.serializableUnityARPlaneAnchor::.ctor(UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4,UnityEngine.XR.iOS.Utils.SerializableVector4,UnityEngine.XR.iOS.Utils.SerializableVector4,UnityEngine.XR.iOS.ARPlaneAnchorAlignment,UnityEngine.XR.iOS.Utils.serializablePlaneGeometry,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void serializableUnityARPlaneAnchor__ctor_m3615116360 (serializableUnityARPlaneAnchor_t3965207599 * __this, serializableUnityARMatrix4x4_t255097097 * ___wt0, SerializableVector4_t2739337940 * ___ctr1, SerializableVector4_t2739337940 * ___ext2, int64_t ___apaa3, serializablePlaneGeometry_t3471745378 * ___spg4, ByteU5BU5D_t4116647657* ___idstr5, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.VideoFormatEnumerator::Invoke(UnityEngine.XR.iOS.UnityARVideoFormat)
extern "C" IL2CPP_METHOD_ATTR void VideoFormatEnumerator_Invoke_m100250450 (VideoFormatEnumerator_t3131638505 * __this, UnityARVideoFormat_t1944454781  ___videoFormat0, const RuntimeMethod* method);
// System.Byte[] UnityEngine.XR.iOS.ARReferenceObject::SerializeToByteArray()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* ARReferenceObject_SerializeToByteArray_m2720564955 (ARReferenceObject_t1065366714 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.serializableARReferenceObject::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void serializableARReferenceObject__ctor_m4187961053 (serializableARReferenceObject_t2711648110 * __this, ByteU5BU5D_t4116647657* ___inputObjectData0, const RuntimeMethod* method);
// UnityEngine.XR.iOS.ARReferenceObject UnityEngine.XR.iOS.ARReferenceObject::SerializeFromByteArray(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ARReferenceObject_t1065366714 * ARReferenceObject_SerializeFromByteArray_m3386329296 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___mapByteArray0, const RuntimeMethod* method);
// System.Byte[] UnityEngine.XR.iOS.ARWorldMap::SerializeToByteArray()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* ARWorldMap_SerializeToByteArray_m221362025 (ARWorldMap_t2240790807 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.serializableARWorldMap::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void serializableARWorldMap__ctor_m3113242015 (serializableARWorldMap_t2514323794 * __this, ByteU5BU5D_t4116647657* ___inputMapData0, const RuntimeMethod* method);
// UnityEngine.XR.iOS.ARWorldMap UnityEngine.XR.iOS.ARWorldMap::SerializeFromByteArray(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ARWorldMap_t2240790807 * ARWorldMap_SerializeFromByteArray_m942818637 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___mapByteArray0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.UnityARSessionNativeInterface::GetARSessionNativeInterface()
extern "C" IL2CPP_METHOD_ATTR UnityARSessionNativeInterface_t3929719369 * UnityARSessionNativeInterface_GetARSessionNativeInterface_m1118592565 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_m3682352535 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.iOS.ARKitFaceTrackingConfiguration::get_IsSupported()
extern "C" IL2CPP_METHOD_ATTR bool ARKitFaceTrackingConfiguration_get_IsSupported_m3877962633 (ARKitFaceTrackingConfiguration_t386387352 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::RunWithConfig(UnityEngine.XR.iOS.ARKitFaceTrackingConfiguration)
extern "C" IL2CPP_METHOD_ATTR void UnityARSessionNativeInterface_RunWithConfig_m2126515950 (UnityARSessionNativeInterface_t3929719369 * __this, ARKitFaceTrackingConfiguration_t386387352  ___config0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorAdded::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ARFaceAnchorAdded__ctor_m1429680355 (ARFaceAnchorAdded_t3526051790 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::add_ARFaceAnchorAddedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorAdded)
extern "C" IL2CPP_METHOD_ATTR void UnityARSessionNativeInterface_add_ARFaceAnchorAddedEvent_m878631319 (RuntimeObject * __this /* static, unused */, ARFaceAnchorAdded_t3526051790 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorUpdated::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ARFaceAnchorUpdated__ctor_m3658882913 (ARFaceAnchorUpdated_t3258688950 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::add_ARFaceAnchorUpdatedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorUpdated)
extern "C" IL2CPP_METHOD_ATTR void UnityARSessionNativeInterface_add_ARFaceAnchorUpdatedEvent_m4045499720 (RuntimeObject * __this /* static, unused */, ARFaceAnchorUpdated_t3258688950 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorRemoved::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ARFaceAnchorRemoved__ctor_m2470011458 (ARFaceAnchorRemoved_t2550278937 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::add_ARFaceAnchorRemovedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorRemoved)
extern "C" IL2CPP_METHOD_ATTR void UnityARSessionNativeInterface_add_ARFaceAnchorRemovedEvent_m297437947 (RuntimeObject * __this /* static, unused */, ARFaceAnchorRemoved_t2550278937 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_t1113636619 * Object_Instantiate_TisGameObject_t1113636619_m4070250708 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * p0, const RuntimeMethod* method)
{
	return ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2446893047_gshared)(__this /* static, unused */, p0, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.XR.iOS.ARFaceAnchor::get_leftEyePose()
extern "C" IL2CPP_METHOD_ATTR Pose_t545244865  ARFaceAnchor_get_leftEyePose_m2262139276 (ARFaceAnchor_t1844206636 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.XR.iOS.ARFaceAnchor::get_rightEyePose()
extern "C" IL2CPP_METHOD_ATTR Pose_t545244865  ARFaceAnchor_get_rightEyePose_m1811836275 (ARFaceAnchor_t1844206636 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ARFrameUpdate__ctor_m3633991724 (ARFrameUpdate_t1157215840 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::add_ARFrameUpdatedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate)
extern "C" IL2CPP_METHOD_ATTR void UnityARSessionNativeInterface_add_ARFrameUpdatedEvent_m3366057771 (RuntimeObject * __this /* static, unused */, ARFrameUpdate_t1157215840 * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m3861397086 (List_1_t2585711361 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2585711361 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m2765963565 (List_1_t2585711361 * __this, GameObject_t1113636619 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2585711361 *, GameObject_t1113636619 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector4_t3319028937  Vector4_op_Implicit_m2966035112 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t1113636619 * List_1_get_Item_m3052194546 (List_1_t2585711361 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  GameObject_t1113636619 * (*) (List_1_t2585711361 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// System.Int64 System.Math::Min(System.Int64,System.Int64)
extern "C" IL2CPP_METHOD_ATTR int64_t Math_Min_m2427345610 (RuntimeObject * __this /* static, unused */, int64_t p0, int64_t p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::remove_ARFrameUpdatedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate)
extern "C" IL2CPP_METHOD_ATTR void UnityARSessionNativeInterface_remove_ARFrameUpdatedEvent_m772523965 (RuntimeObject * __this /* static, unused */, ARFrameUpdate_t1157215840 * ___value0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Remove_m334097152 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method);
// System.Void VideoFormatButton/VideoFormatButtonPressed::Invoke(UnityEngine.XR.iOS.UnityARVideoFormat)
extern "C" IL2CPP_METHOD_ATTR void VideoFormatButtonPressed_Invoke_m3826882959 (VideoFormatButtonPressed_t1187798507 * __this, UnityARVideoFormat_t1944454781  ___videoFormat0, const RuntimeMethod* method);
// System.Void VideoFormatButton/VideoFormatButtonPressed::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void VideoFormatButtonPressed__ctor_m1152072860 (VideoFormatButtonPressed_t1187798507 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void VideoFormatButton::add_FormatButtonPressedEvent(VideoFormatButton/VideoFormatButtonPressed)
extern "C" IL2CPP_METHOD_ATTR void VideoFormatButton_add_FormatButtonPressedEvent_m1863116585 (RuntimeObject * __this /* static, unused */, VideoFormatButtonPressed_t1187798507 * ___value0, const RuntimeMethod* method);
// System.Void VideoFormatsExample::PopulateVideoFormatButtons()
extern "C" IL2CPP_METHOD_ATTR void VideoFormatsExample_PopulateVideoFormatButtons_m595526008 (VideoFormatsExample_t2303262312 * __this, const RuntimeMethod* method);
// System.Void VideoFormatButton::remove_FormatButtonPressedEvent(VideoFormatButton/VideoFormatButtonPressed)
extern "C" IL2CPP_METHOD_ATTR void VideoFormatButton_remove_FormatButtonPressedEvent_m3255418780 (RuntimeObject * __this /* static, unused */, VideoFormatButtonPressed_t1187798507 * ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.XR.iOS.UnityARVideoFormat> UnityEngine.XR.iOS.UnityARVideoFormat::SupportedVideoFormats()
extern "C" IL2CPP_METHOD_ATTR List_1_t3416529523 * UnityARVideoFormat_SupportedVideoFormats_m1522157695 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.iOS.UnityARVideoFormat>::GetEnumerator()
inline Enumerator_t1010806104  List_1_GetEnumerator_m3413760873 (List_1_t3416529523 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1010806104  (*) (List_1_t3416529523 *, const RuntimeMethod*))List_1_GetEnumerator_m3413760873_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.UnityARVideoFormat>::get_Current()
inline UnityARVideoFormat_t1944454781  Enumerator_get_Current_m3655906576 (Enumerator_t1010806104 * __this, const RuntimeMethod* method)
{
	return ((  UnityARVideoFormat_t1944454781  (*) (Enumerator_t1010806104 *, const RuntimeMethod*))Enumerator_get_Current_m3655906576_gshared)(__this, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_t1113636619 * Object_Instantiate_TisGameObject_t1113636619_m3215236302 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * p0, Transform_t3600365921 * p1, const RuntimeMethod* method)
{
	return ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, Transform_t3600365921 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1061214600_gshared)(__this /* static, unused */, p0, p1, method);
}
// !!0 UnityEngine.GameObject::GetComponent<VideoFormatButton>()
inline VideoFormatButton_t1937817916 * GameObject_GetComponent_TisVideoFormatButton_t1937817916_m1994409976 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  VideoFormatButton_t1937817916 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m1913675517_gshared)(__this, method);
}
// System.Void VideoFormatButton::Populate(UnityEngine.XR.iOS.UnityARVideoFormat)
extern "C" IL2CPP_METHOD_ATTR void VideoFormatButton_Populate_m915370135 (VideoFormatButton_t1937817916 * __this, UnityARVideoFormat_t1944454781  ___videoFormat0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.UnityARVideoFormat>::MoveNext()
inline bool Enumerator_MoveNext_m2987439075 (Enumerator_t1010806104 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1010806104 *, const RuntimeMethod*))Enumerator_MoveNext_m2987439075_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.UnityARVideoFormat>::Dispose()
inline void Enumerator_Dispose_m510309855 (Enumerator_t1010806104 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1010806104 *, const RuntimeMethod*))Enumerator_Dispose_m510309855_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::get_IsSupported()
extern "C" IL2CPP_METHOD_ATTR bool ARKitWorldTrackingSessionConfiguration_get_IsSupported_m4234602811 (ARKitWorldTrackingSessionConfiguration_t273386347 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::RunWithConfigAndOptions(UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration,UnityEngine.XR.iOS.UnityARSessionRunOption)
extern "C" IL2CPP_METHOD_ATTR void UnityARSessionNativeInterface_RunWithConfigAndOptions_m2136170177 (UnityARSessionNativeInterface_t3929719369 * __this, ARKitWorldTrackingSessionConfiguration_t273386347  ___config0, int32_t ___runOptions1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_localScale_m129152068 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Void ModelController/ResetHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ResetHandler__ctor_m290481212 (ResetHandler_t86549611 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void ModelController::add_ResetHandlerEvent(ModelController/ResetHandler)
extern "C" IL2CPP_METHOD_ATTR void ModelController_add_ResetHandlerEvent_m765362552 (ModelController_t213260968 * __this, ResetHandler_t86549611 * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
extern "C" IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m1767405923 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector3_get_magnitude_m27958459 (Vector3_t3722313464 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_normalized_m2454957984 (Vector3_t3722313464 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<DrawLines>()
inline DrawLines_t4192295860 * GameObject_GetComponent_TisDrawLines_t4192295860_m2352987869 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  DrawLines_t4192295860 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m1913675517_gshared)(__this, method);
}
// System.Void DrawLines::DrawHorizontalLine()
extern "C" IL2CPP_METHOD_ATTR void DrawLines_DrawHorizontalLine_m937329354 (DrawLines_t4192295860 * __this, const RuntimeMethod* method);
// System.Void DrawLines::DrawLight()
extern "C" IL2CPP_METHOD_ATTR void DrawLines_DrawLight_m385049073 (DrawLines_t4192295860 * __this, const RuntimeMethod* method);
// System.Void VirtualImageController::HideLineAndVF()
extern "C" IL2CPP_METHOD_ATTR void VirtualImageController_HideLineAndVF_m1404605849 (VirtualImageController_t1421167262 * __this, const RuntimeMethod* method);
// System.Void VirtualImageController::ShowLineAndVF()
extern "C" IL2CPP_METHOD_ATTR void VirtualImageController_ShowLineAndVF_m2955396186 (VirtualImageController_t1421167262 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CanvasGroup>()
inline CanvasGroup_t4083511760 * Component_GetComponent_TisCanvasGroup_t4083511760_m1030459026 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  CanvasGroup_t4083511760 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
extern "C" IL2CPP_METHOD_ATTR void CanvasGroup_set_alpha_m4032573 (CanvasGroup_t4083511760 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.CanvasGroup::set_interactable(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void CanvasGroup_set_interactable_m1698617177 (CanvasGroup_t4083511760 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.CanvasGroup::set_blocksRaycasts(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void CanvasGroup_set_blocksRaycasts_m3675023212 (CanvasGroup_t4083511760 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::SetStackTraceLogType(UnityEngine.LogType,UnityEngine.StackTraceLogType)
extern "C" IL2CPP_METHOD_ATTR void Application_SetStackTraceLogType_m956885415 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void Debug_LogFormat_m309087137 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
extern "C" IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_m1428108154 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Path_Combine_m3389272516 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String WorldMapManager::get_path()
extern "C" IL2CPP_METHOD_ATTR String_t* WorldMapManager_get_path_m263249698 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.iOS.ARWorldMap::Save(System.String)
extern "C" IL2CPP_METHOD_ATTR bool ARWorldMap_Save_m696239647 (ARWorldMap_t2240790807 * __this, String_t* ___path0, const RuntimeMethod* method);
// UnityEngine.XR.iOS.UnityARSessionNativeInterface WorldMapManager::get_session()
extern "C" IL2CPP_METHOD_ATTR UnityARSessionNativeInterface_t3929719369 * WorldMapManager_get_session_m4054597902 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.iOS.ARWorldMap>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m941087542 (Action_1_t2413258402 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2413258402 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::GetCurrentWorldMapAsync(System.Action`1<UnityEngine.XR.iOS.ARWorldMap>)
extern "C" IL2CPP_METHOD_ATTR void UnityARSessionNativeInterface_GetCurrentWorldMapAsync_m1688705226 (UnityARSessionNativeInterface_t3929719369 * __this, Action_1_t2413258402 * ___completionCallback0, const RuntimeMethod* method);
// UnityEngine.XR.iOS.ARWorldMap UnityEngine.XR.iOS.ARWorldMap::Load(System.String)
extern "C" IL2CPP_METHOD_ATTR ARWorldMap_t2240790807 * ARWorldMap_Load_m229573624 (RuntimeObject * __this /* static, unused */, String_t* ___path0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.iOS.ARWorldMap::get_center()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  ARWorldMap_get_center_m2261591742 (ARWorldMap_t2240790807 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.iOS.ARWorldMap::get_extent()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  ARWorldMap_get_extent_m815776976 (ARWorldMap_t2240790807 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::set_ARSessionShouldAttemptRelocalization(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UnityARSessionNativeInterface_set_ARSessionShouldAttemptRelocalization_m3516918436 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method);
// UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration UnityARCameraManager::get_sessionConfiguration()
extern "C" IL2CPP_METHOD_ATTR ARKitWorldTrackingSessionConfiguration_t273386347  UnityARCameraManager_get_sessionConfiguration_m3942467652 (UnityARCameraManager_t4002280589 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::set_worldMap(UnityEngine.XR.iOS.ARWorldMap)
extern "C" IL2CPP_METHOD_ATTR void ARKitWorldTrackingSessionConfiguration_set_worldMap_m722344241 (ARKitWorldTrackingSessionConfiguration_t273386347 * __this, ARWorldMap_t2240790807 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// UnityEngine.XR.iOS.serializableARWorldMap UnityEngine.XR.iOS.serializableARWorldMap::op_Implicit(UnityEngine.XR.iOS.ARWorldMap)
extern "C" IL2CPP_METHOD_ATTR serializableARWorldMap_t2514323794 * serializableARWorldMap_op_Implicit_m1798102707 (RuntimeObject * __this /* static, unused */, ARWorldMap_t2240790807 * ___arWorldMap0, const RuntimeMethod* method);
// UnityEngine.XR.iOS.ARWorldMap UnityEngine.XR.iOS.serializableARWorldMap::op_Implicit(UnityEngine.XR.iOS.serializableARWorldMap)
extern "C" IL2CPP_METHOD_ATTR ARWorldMap_t2240790807 * serializableARWorldMap_op_Implicit_m3533126774 (RuntimeObject * __this /* static, unused */, serializableARWorldMap_t2514323794 * ___serWorldMap0, const RuntimeMethod* method);
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
// System.Byte[] UnityEngine.XR.iOS.Utils.ObjectSerializationExtension::SerializeToByteArray(System.Object)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* ObjectSerializationExtension_SerializeToByteArray_m28764994 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectSerializationExtension_SerializeToByteArray_m28764994_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BinaryFormatter_t3197753202 * V_0 = NULL;
	MemoryStream_t94973147 * V_1 = NULL;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (ByteU5BU5D_t4116647657*)NULL;
	}

IL_0008:
	{
		BinaryFormatter_t3197753202 * L_1 = (BinaryFormatter_t3197753202 *)il2cpp_codegen_object_new(BinaryFormatter_t3197753202_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_m971003555(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		MemoryStream_t94973147 * L_2 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m2678285228(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		BinaryFormatter_t3197753202 * L_3 = V_0;
		MemoryStream_t94973147 * L_4 = V_1;
		RuntimeObject * L_5 = ___obj0;
		NullCheck(L_3);
		BinaryFormatter_Serialize_m1744386044(L_3, L_4, L_5, /*hidden argument*/NULL);
		MemoryStream_t94973147 * L_6 = V_1;
		NullCheck(L_6);
		ByteU5BU5D_t4116647657* L_7 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(26 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_6);
		V_2 = L_7;
		IL2CPP_LEAVE(0x35, FINALLY_0028);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0028;
	}

FINALLY_0028:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t94973147 * L_8 = V_1;
			if (!L_8)
			{
				goto IL_0034;
			}
		}

IL_002e:
		{
			MemoryStream_t94973147 * L_9 = V_1;
			NullCheck(L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_9);
		}

IL_0034:
		{
			IL2CPP_END_FINALLY(40)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(40)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0035:
	{
		ByteU5BU5D_t4116647657* L_10 = V_2;
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
// System.Void UnityEngine.XR.iOS.Utils.SerializableVector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void SerializableVector4__ctor_m2807424733 (SerializableVector4_t2739337940 * __this, float ___rX0, float ___rY1, float ___rZ2, float ___rW3, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		float L_0 = ___rX0;
		__this->set_x_0(L_0);
		float L_1 = ___rY1;
		__this->set_y_1(L_1);
		float L_2 = ___rZ2;
		__this->set_z_2(L_2);
		float L_3 = ___rW3;
		__this->set_w_3(L_3);
		return;
	}
}
// System.String UnityEngine.XR.iOS.Utils.SerializableVector4::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* SerializableVector4_ToString_m1782193711 (SerializableVector4_t2739337940 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SerializableVector4_ToString_m1782193711_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		float L_2 = __this->get_x_0();
		float L_3 = L_2;
		RuntimeObject * L_4 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = L_1;
		float L_6 = __this->get_y_1();
		float L_7 = L_6;
		RuntimeObject * L_8 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t2843939325* L_9 = L_5;
		float L_10 = __this->get_z_2();
		float L_11 = L_10;
		RuntimeObject * L_12 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		ObjectU5BU5D_t2843939325* L_13 = L_9;
		float L_14 = __this->get_w_3();
		float L_15 = L_14;
		RuntimeObject * L_16 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Format_m630303134(NULL /*static, unused*/, _stringLiteral1432570861, L_13, /*hidden argument*/NULL);
		return L_17;
	}
}
// UnityEngine.Vector4 UnityEngine.XR.iOS.Utils.SerializableVector4::op_Implicit(UnityEngine.XR.iOS.Utils.SerializableVector4)
extern "C" IL2CPP_METHOD_ATTR Vector4_t3319028937  SerializableVector4_op_Implicit_m187218805 (RuntimeObject * __this /* static, unused */, SerializableVector4_t2739337940 * ___rValue0, const RuntimeMethod* method)
{
	{
		SerializableVector4_t2739337940 * L_0 = ___rValue0;
		NullCheck(L_0);
		float L_1 = L_0->get_x_0();
		SerializableVector4_t2739337940 * L_2 = ___rValue0;
		NullCheck(L_2);
		float L_3 = L_2->get_y_1();
		SerializableVector4_t2739337940 * L_4 = ___rValue0;
		NullCheck(L_4);
		float L_5 = L_4->get_z_2();
		SerializableVector4_t2739337940 * L_6 = ___rValue0;
		NullCheck(L_6);
		float L_7 = L_6->get_w_3();
		Vector4_t3319028937  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector4__ctor_m2498754347((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.XR.iOS.Utils.SerializableVector4 UnityEngine.XR.iOS.Utils.SerializableVector4::op_Implicit(UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR SerializableVector4_t2739337940 * SerializableVector4_op_Implicit_m1552594547 (RuntimeObject * __this /* static, unused */, Vector4_t3319028937  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SerializableVector4_op_Implicit_m1552594547_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = (&___rValue0)->get_x_1();
		float L_1 = (&___rValue0)->get_y_2();
		float L_2 = (&___rValue0)->get_z_3();
		float L_3 = (&___rValue0)->get_w_4();
		SerializableVector4_t2739337940 * L_4 = (SerializableVector4_t2739337940 *)il2cpp_codegen_object_new(SerializableVector4_t2739337940_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_m2807424733(L_4, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
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
// System.Void UnityEngine.XR.iOS.Utils.serializableARKitInit::.ctor(UnityEngine.XR.iOS.Utils.serializableARSessionConfiguration,UnityEngine.XR.iOS.UnityARSessionRunOption)
extern "C" IL2CPP_METHOD_ATTR void serializableARKitInit__ctor_m1681371711 (serializableARKitInit_t3839227232 * __this, serializableARSessionConfiguration_t30565192 * ___cfg0, int32_t ___option1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		serializableARSessionConfiguration_t30565192 * L_0 = ___cfg0;
		__this->set_config_0(L_0);
		int32_t L_1 = ___option1;
		__this->set_runOption_1(L_1);
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
// System.Void UnityEngine.XR.iOS.Utils.serializableARSessionConfiguration::.ctor(UnityEngine.XR.iOS.UnityARAlignment,UnityEngine.XR.iOS.UnityARPlaneDetection,System.Boolean,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void serializableARSessionConfiguration__ctor_m1129393182 (serializableARSessionConfiguration_t30565192 * __this, int32_t ___align0, int32_t ___planeDet1, bool ___getPtCloud2, bool ___enableLightEst3, bool ___enableAutoFoc4, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___align0;
		__this->set_alignment_0(L_0);
		int32_t L_1 = ___planeDet1;
		__this->set_planeDetection_1(L_1);
		bool L_2 = ___getPtCloud2;
		__this->set_getPointCloudData_2(L_2);
		bool L_3 = ___enableLightEst3;
		__this->set_enableLightEstimation_3(L_3);
		bool L_4 = ___enableAutoFoc4;
		__this->set_enableAutoFocus_4(L_4);
		return;
	}
}
// UnityEngine.XR.iOS.Utils.serializableARSessionConfiguration UnityEngine.XR.iOS.Utils.serializableARSessionConfiguration::op_Implicit(UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration)
extern "C" IL2CPP_METHOD_ATTR serializableARSessionConfiguration_t30565192 * serializableARSessionConfiguration_op_Implicit_m1090234578 (RuntimeObject * __this /* static, unused */, ARKitWorldTrackingSessionConfiguration_t273386347  ___awtsc0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableARSessionConfiguration_op_Implicit_m1090234578_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (&___awtsc0)->get_alignment_0();
		int32_t L_1 = (&___awtsc0)->get_planeDetection_1();
		bool L_2 = (&___awtsc0)->get_getPointCloudData_2();
		bool L_3 = (&___awtsc0)->get_enableLightEstimation_3();
		bool L_4 = (&___awtsc0)->get_enableAutoFocus_4();
		serializableARSessionConfiguration_t30565192 * L_5 = (serializableARSessionConfiguration_t30565192 *)il2cpp_codegen_object_new(serializableARSessionConfiguration_t30565192_il2cpp_TypeInfo_var);
		serializableARSessionConfiguration__ctor_m1129393182(L_5, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration UnityEngine.XR.iOS.Utils.serializableARSessionConfiguration::op_Implicit(UnityEngine.XR.iOS.Utils.serializableARSessionConfiguration)
extern "C" IL2CPP_METHOD_ATTR ARKitWorldTrackingSessionConfiguration_t273386347  serializableARSessionConfiguration_op_Implicit_m1438553410 (RuntimeObject * __this /* static, unused */, serializableARSessionConfiguration_t30565192 * ___sasc0, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		serializableARSessionConfiguration_t30565192 * L_0 = ___sasc0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_alignment_0();
		serializableARSessionConfiguration_t30565192 * L_2 = ___sasc0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_planeDetection_1();
		serializableARSessionConfiguration_t30565192 * L_4 = ___sasc0;
		NullCheck(L_4);
		bool L_5 = L_4->get_getPointCloudData_2();
		serializableARSessionConfiguration_t30565192 * L_6 = ___sasc0;
		NullCheck(L_6);
		bool L_7 = L_6->get_enableLightEstimation_3();
		serializableARSessionConfiguration_t30565192 * L_8 = ___sasc0;
		NullCheck(L_8);
		bool L_9 = L_8->get_enableAutoFocus_4();
		il2cpp_codegen_initobj((&V_0), sizeof(intptr_t));
		intptr_t L_10 = V_0;
		ARKitWorldTrackingSessionConfiguration_t273386347  L_11;
		memset(&L_11, 0, sizeof(L_11));
		ARKitWorldTrackingSessionConfiguration__ctor_m2092370092((&L_11), L_1, L_3, L_5, L_7, L_9, 0, 0, (intptr_t)L_10, (String_t*)NULL, (String_t*)NULL, (ARWorldMap_t2240790807 *)NULL, /*hidden argument*/NULL);
		return L_11;
	}
}
// UnityEngine.XR.iOS.ARKitFaceTrackingConfiguration UnityEngine.XR.iOS.Utils.serializableARSessionConfiguration::op_Implicit(UnityEngine.XR.iOS.Utils.serializableARSessionConfiguration)
extern "C" IL2CPP_METHOD_ATTR ARKitFaceTrackingConfiguration_t386387352  serializableARSessionConfiguration_op_Implicit_m2683215506 (RuntimeObject * __this /* static, unused */, serializableARSessionConfiguration_t30565192 * ___sasc0, const RuntimeMethod* method)
{
	{
		serializableARSessionConfiguration_t30565192 * L_0 = ___sasc0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_alignment_0();
		serializableARSessionConfiguration_t30565192 * L_2 = ___sasc0;
		NullCheck(L_2);
		bool L_3 = L_2->get_enableLightEstimation_3();
		ARKitFaceTrackingConfiguration_t386387352  L_4;
		memset(&L_4, 0, sizeof(L_4));
		ARKitFaceTrackingConfiguration__ctor_m3001147642((&L_4), L_1, L_3, /*hidden argument*/NULL);
		return L_4;
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
// System.Void UnityEngine.XR.iOS.Utils.serializableFaceGeometry::.ctor(System.Byte[],System.Byte[],System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void serializableFaceGeometry__ctor_m3710354308 (serializableFaceGeometry_t1893768467 * __this, ByteU5BU5D_t4116647657* ___inputVertices0, ByteU5BU5D_t4116647657* ___inputTexCoords1, ByteU5BU5D_t4116647657* ___inputTriIndices2, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_0 = ___inputVertices0;
		__this->set_vertices_0(L_0);
		ByteU5BU5D_t4116647657* L_1 = ___inputTexCoords1;
		__this->set_texCoords_1(L_1);
		ByteU5BU5D_t4116647657* L_2 = ___inputTriIndices2;
		__this->set_triIndices_2(L_2);
		return;
	}
}
// UnityEngine.XR.iOS.Utils.serializableFaceGeometry UnityEngine.XR.iOS.Utils.serializableFaceGeometry::op_Implicit(UnityEngine.XR.iOS.ARFaceGeometry)
extern "C" IL2CPP_METHOD_ATTR serializableFaceGeometry_t1893768467 * serializableFaceGeometry_op_Implicit_m1662172422 (RuntimeObject * __this /* static, unused */, ARFaceGeometry_t5139606 * ___faceGeom0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableFaceGeometry_op_Implicit_m1662172422_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_t1718750761* V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	Vector2U5BU5D_t1457185986* V_2 = NULL;
	ByteU5BU5D_t4116647657* V_3 = NULL;
	Int32U5BU5D_t385246372* V_4 = NULL;
	ByteU5BU5D_t4116647657* V_5 = NULL;
	{
		ARFaceGeometry_t5139606 * L_0 = ___faceGeom0;
		NullCheck(L_0);
		int32_t L_1 = ARFaceGeometry_get_vertexCount_m189993435(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0090;
		}
	}
	{
		ARFaceGeometry_t5139606 * L_2 = ___faceGeom0;
		NullCheck(L_2);
		int32_t L_3 = ARFaceGeometry_get_textureCoordinateCount_m526317715(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0090;
		}
	}
	{
		ARFaceGeometry_t5139606 * L_4 = ___faceGeom0;
		NullCheck(L_4);
		int32_t L_5 = ARFaceGeometry_get_triangleCount_m3343863450(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0090;
		}
	}
	{
		ARFaceGeometry_t5139606 * L_6 = ___faceGeom0;
		NullCheck(L_6);
		Vector3U5BU5D_t1718750761* L_7 = ARFaceGeometry_get_vertices_m2610047597(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		ARFaceGeometry_t5139606 * L_8 = ___faceGeom0;
		NullCheck(L_8);
		int32_t L_9 = ARFaceGeometry_get_vertexCount_m189993435(L_8, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_10 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)4)), (int32_t)3)));
		V_1 = L_10;
		Vector3U5BU5D_t1718750761* L_11 = V_0;
		ByteU5BU5D_t4116647657* L_12 = V_1;
		ARFaceGeometry_t5139606 * L_13 = ___faceGeom0;
		NullCheck(L_13);
		int32_t L_14 = ARFaceGeometry_get_vertexCount_m189993435(L_13, /*hidden argument*/NULL);
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_11, 0, (RuntimeArray *)(RuntimeArray *)L_12, 0, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)4)), (int32_t)3)), /*hidden argument*/NULL);
		ARFaceGeometry_t5139606 * L_15 = ___faceGeom0;
		NullCheck(L_15);
		Vector2U5BU5D_t1457185986* L_16 = ARFaceGeometry_get_textureCoordinates_m2869279217(L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		ARFaceGeometry_t5139606 * L_17 = ___faceGeom0;
		NullCheck(L_17);
		int32_t L_18 = ARFaceGeometry_get_textureCoordinateCount_m526317715(L_17, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_19 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_18, (int32_t)4)), (int32_t)2)));
		V_3 = L_19;
		Vector2U5BU5D_t1457185986* L_20 = V_2;
		ByteU5BU5D_t4116647657* L_21 = V_3;
		ARFaceGeometry_t5139606 * L_22 = ___faceGeom0;
		NullCheck(L_22);
		int32_t L_23 = ARFaceGeometry_get_textureCoordinateCount_m526317715(L_22, /*hidden argument*/NULL);
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_20, 0, (RuntimeArray *)(RuntimeArray *)L_21, 0, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_23, (int32_t)4)), (int32_t)2)), /*hidden argument*/NULL);
		ARFaceGeometry_t5139606 * L_24 = ___faceGeom0;
		NullCheck(L_24);
		Int32U5BU5D_t385246372* L_25 = ARFaceGeometry_get_triangleIndices_m2682150509(L_24, /*hidden argument*/NULL);
		V_4 = L_25;
		Int32U5BU5D_t385246372* L_26 = V_4;
		ByteU5BU5D_t4116647657* L_27 = ObjectSerializationExtension_SerializeToByteArray_m28764994(NULL /*static, unused*/, (RuntimeObject *)(RuntimeObject *)L_26, /*hidden argument*/NULL);
		V_5 = L_27;
		ByteU5BU5D_t4116647657* L_28 = V_1;
		ByteU5BU5D_t4116647657* L_29 = V_3;
		ByteU5BU5D_t4116647657* L_30 = V_5;
		serializableFaceGeometry_t1893768467 * L_31 = (serializableFaceGeometry_t1893768467 *)il2cpp_codegen_object_new(serializableFaceGeometry_t1893768467_il2cpp_TypeInfo_var);
		serializableFaceGeometry__ctor_m3710354308(L_31, L_28, L_29, L_30, /*hidden argument*/NULL);
		return L_31;
	}

IL_0090:
	{
		serializableFaceGeometry_t1893768467 * L_32 = (serializableFaceGeometry_t1893768467 *)il2cpp_codegen_object_new(serializableFaceGeometry_t1893768467_il2cpp_TypeInfo_var);
		serializableFaceGeometry__ctor_m3710354308(L_32, (ByteU5BU5D_t4116647657*)(ByteU5BU5D_t4116647657*)NULL, (ByteU5BU5D_t4116647657*)(ByteU5BU5D_t4116647657*)NULL, (ByteU5BU5D_t4116647657*)(ByteU5BU5D_t4116647657*)NULL, /*hidden argument*/NULL);
		return L_32;
	}
}
// UnityEngine.Vector3[] UnityEngine.XR.iOS.Utils.serializableFaceGeometry::get_Vertices()
extern "C" IL2CPP_METHOD_ATTR Vector3U5BU5D_t1718750761* serializableFaceGeometry_get_Vertices_m3775952375 (serializableFaceGeometry_t1893768467 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableFaceGeometry_get_Vertices_m3775952375_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3U5BU5D_t1718750761* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_vertices_0();
		if (!L_0)
		{
			goto IL_0088;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_1 = __this->get_vertices_0();
		NullCheck(L_1);
		V_0 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))/(int32_t)((int32_t)12)));
		int32_t L_2 = V_0;
		Vector3U5BU5D_t1718750761* L_3 = (Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_1 = L_3;
		V_2 = 0;
		goto IL_007f;
	}

IL_0025:
	{
		int32_t L_4 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)3));
		Vector3U5BU5D_t1718750761* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		ByteU5BU5D_t4116647657* L_7 = __this->get_vertices_0();
		int32_t L_8 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		float L_9 = BitConverter_ToSingle_m2597008633(NULL /*static, unused*/, L_7, ((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)4)), /*hidden argument*/NULL);
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->set_x_2(L_9);
		Vector3U5BU5D_t1718750761* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		ByteU5BU5D_t4116647657* L_12 = __this->get_vertices_0();
		int32_t L_13 = V_3;
		float L_14 = BitConverter_ToSingle_m2597008633(NULL /*static, unused*/, L_12, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)), (int32_t)4)), /*hidden argument*/NULL);
		((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->set_y_3(L_14);
		Vector3U5BU5D_t1718750761* L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		ByteU5BU5D_t4116647657* L_17 = __this->get_vertices_0();
		int32_t L_18 = V_3;
		float L_19 = BitConverter_ToSingle_m2597008633(NULL /*static, unused*/, L_17, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)2)), (int32_t)4)), /*hidden argument*/NULL);
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->set_z_4(L_19);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_007f:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0025;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_23 = V_1;
		return L_23;
	}

IL_0088:
	{
		return (Vector3U5BU5D_t1718750761*)NULL;
	}
}
// UnityEngine.Vector2[] UnityEngine.XR.iOS.Utils.serializableFaceGeometry::get_TexCoords()
extern "C" IL2CPP_METHOD_ATTR Vector2U5BU5D_t1457185986* serializableFaceGeometry_get_TexCoords_m3196262590 (serializableFaceGeometry_t1893768467 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableFaceGeometry_get_TexCoords_m3196262590_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector2U5BU5D_t1457185986* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_texCoords_1();
		if (!L_0)
		{
			goto IL_006b;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_1 = __this->get_texCoords_1();
		NullCheck(L_1);
		V_0 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))/(int32_t)8));
		int32_t L_2 = V_0;
		Vector2U5BU5D_t1457185986* L_3 = (Vector2U5BU5D_t1457185986*)SZArrayNew(Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_1 = L_3;
		V_2 = 0;
		goto IL_0062;
	}

IL_0024:
	{
		int32_t L_4 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)2));
		Vector2U5BU5D_t1457185986* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		ByteU5BU5D_t4116647657* L_7 = __this->get_texCoords_1();
		int32_t L_8 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		float L_9 = BitConverter_ToSingle_m2597008633(NULL /*static, unused*/, L_7, ((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)4)), /*hidden argument*/NULL);
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->set_x_0(L_9);
		Vector2U5BU5D_t1457185986* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		ByteU5BU5D_t4116647657* L_12 = __this->get_texCoords_1();
		int32_t L_13 = V_3;
		float L_14 = BitConverter_ToSingle_m2597008633(NULL /*static, unused*/, L_12, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)), (int32_t)4)), /*hidden argument*/NULL);
		((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->set_y_1(L_14);
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0062:
	{
		int32_t L_16 = V_2;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		Vector2U5BU5D_t1457185986* L_18 = V_1;
		return L_18;
	}

IL_006b:
	{
		return (Vector2U5BU5D_t1457185986*)NULL;
	}
}
// System.Int32[] UnityEngine.XR.iOS.Utils.serializableFaceGeometry::get_TriangleIndices()
extern "C" IL2CPP_METHOD_ATTR Int32U5BU5D_t385246372* serializableFaceGeometry_get_TriangleIndices_m3964555112 (serializableFaceGeometry_t1893768467 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableFaceGeometry_get_TriangleIndices_m3964555112_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t385246372* V_0 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_triIndices_2();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_1 = __this->get_triIndices_2();
		Int32U5BU5D_t385246372* L_2 = ObjectSerializationExtension_Deserialize_TisInt32U5BU5D_t385246372_m1366516915(NULL /*static, unused*/, L_1, /*hidden argument*/ObjectSerializationExtension_Deserialize_TisInt32U5BU5D_t385246372_m1366516915_RuntimeMethod_var);
		V_0 = L_2;
		Int32U5BU5D_t385246372* L_3 = V_0;
		return L_3;
	}

IL_0019:
	{
		return (Int32U5BU5D_t385246372*)NULL;
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
// System.Void UnityEngine.XR.iOS.Utils.serializableFromEditorMessage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void serializableFromEditorMessage__ctor_m2463776463 (serializableFromEditorMessage_t2731251371 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void UnityEngine.XR.iOS.Utils.serializablePlaneGeometry::.ctor(System.Byte[],System.Byte[],System.Byte[],System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void serializablePlaneGeometry__ctor_m2543286638 (serializablePlaneGeometry_t3471745378 * __this, ByteU5BU5D_t4116647657* ___inputVertices0, ByteU5BU5D_t4116647657* ___inputTexCoords1, ByteU5BU5D_t4116647657* ___inputTriIndices2, ByteU5BU5D_t4116647657* ___boundaryVerts3, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_0 = ___inputVertices0;
		__this->set_vertices_0(L_0);
		ByteU5BU5D_t4116647657* L_1 = ___inputTexCoords1;
		__this->set_texCoords_1(L_1);
		ByteU5BU5D_t4116647657* L_2 = ___inputTriIndices2;
		__this->set_triIndices_2(L_2);
		ByteU5BU5D_t4116647657* L_3 = ___boundaryVerts3;
		__this->set_boundaryVertices_3(L_3);
		return;
	}
}
// UnityEngine.XR.iOS.Utils.serializablePlaneGeometry UnityEngine.XR.iOS.Utils.serializablePlaneGeometry::op_Implicit(UnityEngine.XR.iOS.ARPlaneGeometry)
extern "C" IL2CPP_METHOD_ATTR serializablePlaneGeometry_t3471745378 * serializablePlaneGeometry_op_Implicit_m2849839976 (RuntimeObject * __this /* static, unused */, ARPlaneGeometry_t1169415986 * ___planeGeom0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializablePlaneGeometry_op_Implicit_m2849839976_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_t1718750761* V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	Vector3U5BU5D_t1718750761* V_2 = NULL;
	ByteU5BU5D_t4116647657* V_3 = NULL;
	Vector2U5BU5D_t1457185986* V_4 = NULL;
	ByteU5BU5D_t4116647657* V_5 = NULL;
	Int32U5BU5D_t385246372* V_6 = NULL;
	ByteU5BU5D_t4116647657* V_7 = NULL;
	{
		ARPlaneGeometry_t1169415986 * L_0 = ___planeGeom0;
		NullCheck(L_0);
		int32_t L_1 = ARPlaneGeometry_get_vertexCount_m2299852998(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00c0;
		}
	}
	{
		ARPlaneGeometry_t1169415986 * L_2 = ___planeGeom0;
		NullCheck(L_2);
		int32_t L_3 = ARPlaneGeometry_get_textureCoordinateCount_m4191571174(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00c0;
		}
	}
	{
		ARPlaneGeometry_t1169415986 * L_4 = ___planeGeom0;
		NullCheck(L_4);
		int32_t L_5 = ARPlaneGeometry_get_triangleCount_m846416585(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_00c0;
		}
	}
	{
		ARPlaneGeometry_t1169415986 * L_6 = ___planeGeom0;
		NullCheck(L_6);
		Vector3U5BU5D_t1718750761* L_7 = ARPlaneGeometry_get_vertices_m3949474048(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		ARPlaneGeometry_t1169415986 * L_8 = ___planeGeom0;
		NullCheck(L_8);
		int32_t L_9 = ARPlaneGeometry_get_vertexCount_m2299852998(L_8, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_10 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)4)), (int32_t)3)));
		V_1 = L_10;
		Vector3U5BU5D_t1718750761* L_11 = V_0;
		ByteU5BU5D_t4116647657* L_12 = V_1;
		ARPlaneGeometry_t1169415986 * L_13 = ___planeGeom0;
		NullCheck(L_13);
		int32_t L_14 = ARPlaneGeometry_get_vertexCount_m2299852998(L_13, /*hidden argument*/NULL);
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_11, 0, (RuntimeArray *)(RuntimeArray *)L_12, 0, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)4)), (int32_t)3)), /*hidden argument*/NULL);
		ARPlaneGeometry_t1169415986 * L_15 = ___planeGeom0;
		NullCheck(L_15);
		Vector3U5BU5D_t1718750761* L_16 = ARPlaneGeometry_get_boundaryVertices_m1646330886(L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		ARPlaneGeometry_t1169415986 * L_17 = ___planeGeom0;
		NullCheck(L_17);
		int32_t L_18 = ARPlaneGeometry_get_boundaryVertexCount_m3107326718(L_17, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_19 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_18, (int32_t)4)), (int32_t)3)));
		V_3 = L_19;
		Vector3U5BU5D_t1718750761* L_20 = V_2;
		ByteU5BU5D_t4116647657* L_21 = V_3;
		ARPlaneGeometry_t1169415986 * L_22 = ___planeGeom0;
		NullCheck(L_22);
		int32_t L_23 = ARPlaneGeometry_get_boundaryVertexCount_m3107326718(L_22, /*hidden argument*/NULL);
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_20, 0, (RuntimeArray *)(RuntimeArray *)L_21, 0, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_23, (int32_t)4)), (int32_t)3)), /*hidden argument*/NULL);
		ARPlaneGeometry_t1169415986 * L_24 = ___planeGeom0;
		NullCheck(L_24);
		Vector2U5BU5D_t1457185986* L_25 = ARPlaneGeometry_get_textureCoordinates_m1206112685(L_24, /*hidden argument*/NULL);
		V_4 = L_25;
		ARPlaneGeometry_t1169415986 * L_26 = ___planeGeom0;
		NullCheck(L_26);
		int32_t L_27 = ARPlaneGeometry_get_textureCoordinateCount_m4191571174(L_26, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_28 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_27, (int32_t)4)), (int32_t)2)));
		V_5 = L_28;
		Vector2U5BU5D_t1457185986* L_29 = V_4;
		ByteU5BU5D_t4116647657* L_30 = V_5;
		ARPlaneGeometry_t1169415986 * L_31 = ___planeGeom0;
		NullCheck(L_31);
		int32_t L_32 = ARPlaneGeometry_get_textureCoordinateCount_m4191571174(L_31, /*hidden argument*/NULL);
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_29, 0, (RuntimeArray *)(RuntimeArray *)L_30, 0, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_32, (int32_t)4)), (int32_t)2)), /*hidden argument*/NULL);
		ARPlaneGeometry_t1169415986 * L_33 = ___planeGeom0;
		NullCheck(L_33);
		Int32U5BU5D_t385246372* L_34 = ARPlaneGeometry_get_triangleIndices_m3110323458(L_33, /*hidden argument*/NULL);
		V_6 = L_34;
		Int32U5BU5D_t385246372* L_35 = V_6;
		ByteU5BU5D_t4116647657* L_36 = ObjectSerializationExtension_SerializeToByteArray_m28764994(NULL /*static, unused*/, (RuntimeObject *)(RuntimeObject *)L_35, /*hidden argument*/NULL);
		V_7 = L_36;
		ByteU5BU5D_t4116647657* L_37 = V_1;
		ByteU5BU5D_t4116647657* L_38 = V_5;
		ByteU5BU5D_t4116647657* L_39 = V_7;
		ByteU5BU5D_t4116647657* L_40 = V_3;
		serializablePlaneGeometry_t3471745378 * L_41 = (serializablePlaneGeometry_t3471745378 *)il2cpp_codegen_object_new(serializablePlaneGeometry_t3471745378_il2cpp_TypeInfo_var);
		serializablePlaneGeometry__ctor_m2543286638(L_41, L_37, L_38, L_39, L_40, /*hidden argument*/NULL);
		return L_41;
	}

IL_00c0:
	{
		serializablePlaneGeometry_t3471745378 * L_42 = (serializablePlaneGeometry_t3471745378 *)il2cpp_codegen_object_new(serializablePlaneGeometry_t3471745378_il2cpp_TypeInfo_var);
		serializablePlaneGeometry__ctor_m2543286638(L_42, (ByteU5BU5D_t4116647657*)(ByteU5BU5D_t4116647657*)NULL, (ByteU5BU5D_t4116647657*)(ByteU5BU5D_t4116647657*)NULL, (ByteU5BU5D_t4116647657*)(ByteU5BU5D_t4116647657*)NULL, (ByteU5BU5D_t4116647657*)(ByteU5BU5D_t4116647657*)NULL, /*hidden argument*/NULL);
		return L_42;
	}
}
// UnityEngine.Vector3[] UnityEngine.XR.iOS.Utils.serializablePlaneGeometry::get_Vertices()
extern "C" IL2CPP_METHOD_ATTR Vector3U5BU5D_t1718750761* serializablePlaneGeometry_get_Vertices_m372421006 (serializablePlaneGeometry_t3471745378 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializablePlaneGeometry_get_Vertices_m372421006_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3U5BU5D_t1718750761* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_vertices_0();
		if (!L_0)
		{
			goto IL_0088;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_1 = __this->get_vertices_0();
		NullCheck(L_1);
		V_0 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))/(int32_t)((int32_t)12)));
		int32_t L_2 = V_0;
		Vector3U5BU5D_t1718750761* L_3 = (Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_1 = L_3;
		V_2 = 0;
		goto IL_007f;
	}

IL_0025:
	{
		int32_t L_4 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)3));
		Vector3U5BU5D_t1718750761* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		ByteU5BU5D_t4116647657* L_7 = __this->get_vertices_0();
		int32_t L_8 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		float L_9 = BitConverter_ToSingle_m2597008633(NULL /*static, unused*/, L_7, ((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)4)), /*hidden argument*/NULL);
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->set_x_2(L_9);
		Vector3U5BU5D_t1718750761* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		ByteU5BU5D_t4116647657* L_12 = __this->get_vertices_0();
		int32_t L_13 = V_3;
		float L_14 = BitConverter_ToSingle_m2597008633(NULL /*static, unused*/, L_12, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)), (int32_t)4)), /*hidden argument*/NULL);
		((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->set_y_3(L_14);
		Vector3U5BU5D_t1718750761* L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		ByteU5BU5D_t4116647657* L_17 = __this->get_vertices_0();
		int32_t L_18 = V_3;
		float L_19 = BitConverter_ToSingle_m2597008633(NULL /*static, unused*/, L_17, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)2)), (int32_t)4)), /*hidden argument*/NULL);
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->set_z_4(L_19);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_007f:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0025;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_23 = V_1;
		return L_23;
	}

IL_0088:
	{
		return (Vector3U5BU5D_t1718750761*)NULL;
	}
}
// UnityEngine.Vector3[] UnityEngine.XR.iOS.Utils.serializablePlaneGeometry::get_BoundaryVertices()
extern "C" IL2CPP_METHOD_ATTR Vector3U5BU5D_t1718750761* serializablePlaneGeometry_get_BoundaryVertices_m2706946419 (serializablePlaneGeometry_t3471745378 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializablePlaneGeometry_get_BoundaryVertices_m2706946419_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3U5BU5D_t1718750761* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_boundaryVertices_3();
		if (!L_0)
		{
			goto IL_0088;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_1 = __this->get_boundaryVertices_3();
		NullCheck(L_1);
		V_0 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))/(int32_t)((int32_t)12)));
		int32_t L_2 = V_0;
		Vector3U5BU5D_t1718750761* L_3 = (Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_1 = L_3;
		V_2 = 0;
		goto IL_007f;
	}

IL_0025:
	{
		int32_t L_4 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)3));
		Vector3U5BU5D_t1718750761* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		ByteU5BU5D_t4116647657* L_7 = __this->get_boundaryVertices_3();
		int32_t L_8 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		float L_9 = BitConverter_ToSingle_m2597008633(NULL /*static, unused*/, L_7, ((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)4)), /*hidden argument*/NULL);
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->set_x_2(L_9);
		Vector3U5BU5D_t1718750761* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		ByteU5BU5D_t4116647657* L_12 = __this->get_boundaryVertices_3();
		int32_t L_13 = V_3;
		float L_14 = BitConverter_ToSingle_m2597008633(NULL /*static, unused*/, L_12, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)), (int32_t)4)), /*hidden argument*/NULL);
		((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->set_y_3(L_14);
		Vector3U5BU5D_t1718750761* L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		ByteU5BU5D_t4116647657* L_17 = __this->get_boundaryVertices_3();
		int32_t L_18 = V_3;
		float L_19 = BitConverter_ToSingle_m2597008633(NULL /*static, unused*/, L_17, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)2)), (int32_t)4)), /*hidden argument*/NULL);
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->set_z_4(L_19);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_007f:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0025;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_23 = V_1;
		return L_23;
	}

IL_0088:
	{
		return (Vector3U5BU5D_t1718750761*)NULL;
	}
}
// UnityEngine.Vector2[] UnityEngine.XR.iOS.Utils.serializablePlaneGeometry::get_TexCoords()
extern "C" IL2CPP_METHOD_ATTR Vector2U5BU5D_t1457185986* serializablePlaneGeometry_get_TexCoords_m2833194137 (serializablePlaneGeometry_t3471745378 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializablePlaneGeometry_get_TexCoords_m2833194137_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector2U5BU5D_t1457185986* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_texCoords_1();
		if (!L_0)
		{
			goto IL_006b;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_1 = __this->get_texCoords_1();
		NullCheck(L_1);
		V_0 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))/(int32_t)8));
		int32_t L_2 = V_0;
		Vector2U5BU5D_t1457185986* L_3 = (Vector2U5BU5D_t1457185986*)SZArrayNew(Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_1 = L_3;
		V_2 = 0;
		goto IL_0062;
	}

IL_0024:
	{
		int32_t L_4 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)2));
		Vector2U5BU5D_t1457185986* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		ByteU5BU5D_t4116647657* L_7 = __this->get_texCoords_1();
		int32_t L_8 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		float L_9 = BitConverter_ToSingle_m2597008633(NULL /*static, unused*/, L_7, ((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)4)), /*hidden argument*/NULL);
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->set_x_0(L_9);
		Vector2U5BU5D_t1457185986* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		ByteU5BU5D_t4116647657* L_12 = __this->get_texCoords_1();
		int32_t L_13 = V_3;
		float L_14 = BitConverter_ToSingle_m2597008633(NULL /*static, unused*/, L_12, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)), (int32_t)4)), /*hidden argument*/NULL);
		((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->set_y_1(L_14);
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0062:
	{
		int32_t L_16 = V_2;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		Vector2U5BU5D_t1457185986* L_18 = V_1;
		return L_18;
	}

IL_006b:
	{
		return (Vector2U5BU5D_t1457185986*)NULL;
	}
}
// System.Int32[] UnityEngine.XR.iOS.Utils.serializablePlaneGeometry::get_TriangleIndices()
extern "C" IL2CPP_METHOD_ATTR Int32U5BU5D_t385246372* serializablePlaneGeometry_get_TriangleIndices_m1206890056 (serializablePlaneGeometry_t3471745378 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializablePlaneGeometry_get_TriangleIndices_m1206890056_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t385246372* V_0 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_triIndices_2();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_1 = __this->get_triIndices_2();
		Int32U5BU5D_t385246372* L_2 = ObjectSerializationExtension_Deserialize_TisInt32U5BU5D_t385246372_m1366516915(NULL /*static, unused*/, L_1, /*hidden argument*/ObjectSerializationExtension_Deserialize_TisInt32U5BU5D_t385246372_m1366516915_RuntimeMethod_var);
		V_0 = L_2;
		Int32U5BU5D_t385246372* L_3 = V_0;
		return L_3;
	}

IL_0019:
	{
		return (Int32U5BU5D_t385246372*)NULL;
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
// System.Void UnityEngine.XR.iOS.Utils.serializablePointCloud::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void serializablePointCloud__ctor_m1387577147 (serializablePointCloud_t4241265545 * __this, ByteU5BU5D_t4116647657* ___inputPoints0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_0 = ___inputPoints0;
		__this->set_pointCloudData_0(L_0);
		return;
	}
}
// UnityEngine.XR.iOS.Utils.serializablePointCloud UnityEngine.XR.iOS.Utils.serializablePointCloud::op_Implicit(UnityEngine.Vector3[])
extern "C" IL2CPP_METHOD_ATTR serializablePointCloud_t4241265545 * serializablePointCloud_op_Implicit_m1868975265 (RuntimeObject * __this /* static, unused */, Vector3U5BU5D_t1718750761* ___vecPointCloud0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializablePointCloud_op_Implicit_m1868975265_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Vector3U5BU5D_t1718750761* L_0 = ___vecPointCloud0;
		if (!L_0)
		{
			goto IL_008a;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_1 = ___vecPointCloud0;
		NullCheck(L_1);
		ByteU5BU5D_t4116647657* L_2 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))), (int32_t)4)), (int32_t)3)));
		V_0 = L_2;
		V_1 = 0;
		goto IL_007a;
	}

IL_001a:
	{
		int32_t L_3 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)3));
		Vector3U5BU5D_t1718750761* L_4 = ___vecPointCloud0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		float L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_7 = BitConverter_GetBytes_m692533364(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_8 = V_0;
		int32_t L_9 = V_2;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_7, 0, (RuntimeArray *)(RuntimeArray *)L_8, ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)4)), 4, /*hidden argument*/NULL);
		Vector3U5BU5D_t1718750761* L_10 = ___vecPointCloud0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->get_y_3();
		ByteU5BU5D_t4116647657* L_13 = BitConverter_GetBytes_m692533364(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_14 = V_0;
		int32_t L_15 = V_2;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_13, 0, (RuntimeArray *)(RuntimeArray *)L_14, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)), (int32_t)4)), 4, /*hidden argument*/NULL);
		Vector3U5BU5D_t1718750761* L_16 = ___vecPointCloud0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		float L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->get_z_4();
		ByteU5BU5D_t4116647657* L_19 = BitConverter_GetBytes_m692533364(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_20 = V_0;
		int32_t L_21 = V_2;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_19, 0, (RuntimeArray *)(RuntimeArray *)L_20, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)2)), (int32_t)4)), 4, /*hidden argument*/NULL);
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_007a:
	{
		int32_t L_23 = V_1;
		Vector3U5BU5D_t1718750761* L_24 = ___vecPointCloud0;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_24)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_25 = V_0;
		serializablePointCloud_t4241265545 * L_26 = (serializablePointCloud_t4241265545 *)il2cpp_codegen_object_new(serializablePointCloud_t4241265545_il2cpp_TypeInfo_var);
		serializablePointCloud__ctor_m1387577147(L_26, L_25, /*hidden argument*/NULL);
		return L_26;
	}

IL_008a:
	{
		serializablePointCloud_t4241265545 * L_27 = (serializablePointCloud_t4241265545 *)il2cpp_codegen_object_new(serializablePointCloud_t4241265545_il2cpp_TypeInfo_var);
		serializablePointCloud__ctor_m1387577147(L_27, (ByteU5BU5D_t4116647657*)(ByteU5BU5D_t4116647657*)NULL, /*hidden argument*/NULL);
		return L_27;
	}
}
// UnityEngine.Vector3[] UnityEngine.XR.iOS.Utils.serializablePointCloud::op_Implicit(UnityEngine.XR.iOS.Utils.serializablePointCloud)
extern "C" IL2CPP_METHOD_ATTR Vector3U5BU5D_t1718750761* serializablePointCloud_op_Implicit_m3100839470 (RuntimeObject * __this /* static, unused */, serializablePointCloud_t4241265545 * ___spc0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializablePointCloud_op_Implicit_m3100839470_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3U5BU5D_t1718750761* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		serializablePointCloud_t4241265545 * L_0 = ___spc0;
		NullCheck(L_0);
		ByteU5BU5D_t4116647657* L_1 = L_0->get_pointCloudData_0();
		if (!L_1)
		{
			goto IL_0088;
		}
	}
	{
		serializablePointCloud_t4241265545 * L_2 = ___spc0;
		NullCheck(L_2);
		ByteU5BU5D_t4116647657* L_3 = L_2->get_pointCloudData_0();
		NullCheck(L_3);
		V_0 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))/(int32_t)((int32_t)12)));
		int32_t L_4 = V_0;
		Vector3U5BU5D_t1718750761* L_5 = (Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		V_2 = 0;
		goto IL_007f;
	}

IL_0025:
	{
		int32_t L_6 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)3));
		Vector3U5BU5D_t1718750761* L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		serializablePointCloud_t4241265545 * L_9 = ___spc0;
		NullCheck(L_9);
		ByteU5BU5D_t4116647657* L_10 = L_9->get_pointCloudData_0();
		int32_t L_11 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		float L_12 = BitConverter_ToSingle_m2597008633(NULL /*static, unused*/, L_10, ((int32_t)il2cpp_codegen_multiply((int32_t)L_11, (int32_t)4)), /*hidden argument*/NULL);
		((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->set_x_2(L_12);
		Vector3U5BU5D_t1718750761* L_13 = V_1;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		serializablePointCloud_t4241265545 * L_15 = ___spc0;
		NullCheck(L_15);
		ByteU5BU5D_t4116647657* L_16 = L_15->get_pointCloudData_0();
		int32_t L_17 = V_3;
		float L_18 = BitConverter_ToSingle_m2597008633(NULL /*static, unused*/, L_16, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1)), (int32_t)4)), /*hidden argument*/NULL);
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->set_y_3(L_18);
		Vector3U5BU5D_t1718750761* L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		serializablePointCloud_t4241265545 * L_21 = ___spc0;
		NullCheck(L_21);
		ByteU5BU5D_t4116647657* L_22 = L_21->get_pointCloudData_0();
		int32_t L_23 = V_3;
		float L_24 = BitConverter_ToSingle_m2597008633(NULL /*static, unused*/, L_22, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)2)), (int32_t)4)), /*hidden argument*/NULL);
		((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->set_z_4(L_24);
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_007f:
	{
		int32_t L_26 = V_2;
		int32_t L_27 = V_0;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0025;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_28 = V_1;
		return L_28;
	}

IL_0088:
	{
		return (Vector3U5BU5D_t1718750761*)NULL;
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
// System.Void UnityEngine.XR.iOS.Utils.serializableSHC::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void serializableSHC__ctor_m1264141150 (serializableSHC_t226029808 * __this, ByteU5BU5D_t4116647657* ___inputSHCData0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_0 = ___inputSHCData0;
		__this->set_shcData_0(L_0);
		return;
	}
}
// UnityEngine.XR.iOS.Utils.serializableSHC UnityEngine.XR.iOS.Utils.serializableSHC::op_Implicit(System.Single[])
extern "C" IL2CPP_METHOD_ATTR serializableSHC_t226029808 * serializableSHC_op_Implicit_m657028205 (RuntimeObject * __this /* static, unused */, SingleU5BU5D_t1444911251* ___floatsSHC0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableSHC_op_Implicit_m657028205_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	int32_t V_1 = 0;
	{
		SingleU5BU5D_t1444911251* L_0 = ___floatsSHC0;
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		SingleU5BU5D_t1444911251* L_1 = ___floatsSHC0;
		NullCheck(L_1);
		ByteU5BU5D_t4116647657* L_2 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))), (int32_t)4)));
		V_0 = L_2;
		V_1 = 0;
		goto IL_002f;
	}

IL_0018:
	{
		SingleU5BU5D_t1444911251* L_3 = ___floatsSHC0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		float L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_7 = BitConverter_GetBytes_m692533364(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_8 = V_0;
		int32_t L_9 = V_1;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_7, 0, (RuntimeArray *)(RuntimeArray *)L_8, ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)4)), 4, /*hidden argument*/NULL);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002f:
	{
		int32_t L_11 = V_1;
		SingleU5BU5D_t1444911251* L_12 = ___floatsSHC0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_0018;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_13 = V_0;
		serializableSHC_t226029808 * L_14 = (serializableSHC_t226029808 *)il2cpp_codegen_object_new(serializableSHC_t226029808_il2cpp_TypeInfo_var);
		serializableSHC__ctor_m1264141150(L_14, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_003f:
	{
		serializableSHC_t226029808 * L_15 = (serializableSHC_t226029808 *)il2cpp_codegen_object_new(serializableSHC_t226029808_il2cpp_TypeInfo_var);
		serializableSHC__ctor_m1264141150(L_15, (ByteU5BU5D_t4116647657*)(ByteU5BU5D_t4116647657*)NULL, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Single[] UnityEngine.XR.iOS.Utils.serializableSHC::op_Implicit(UnityEngine.XR.iOS.Utils.serializableSHC)
extern "C" IL2CPP_METHOD_ATTR SingleU5BU5D_t1444911251* serializableSHC_op_Implicit_m142774640 (RuntimeObject * __this /* static, unused */, serializableSHC_t226029808 * ___spc0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableSHC_op_Implicit_m142774640_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SingleU5BU5D_t1444911251* V_1 = NULL;
	int32_t V_2 = 0;
	{
		serializableSHC_t226029808 * L_0 = ___spc0;
		NullCheck(L_0);
		ByteU5BU5D_t4116647657* L_1 = L_0->get_shcData_0();
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		serializableSHC_t226029808 * L_2 = ___spc0;
		NullCheck(L_2);
		ByteU5BU5D_t4116647657* L_3 = L_2->get_shcData_0();
		NullCheck(L_3);
		V_0 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))/(int32_t)4));
		int32_t L_4 = V_0;
		SingleU5BU5D_t1444911251* L_5 = (SingleU5BU5D_t1444911251*)SZArrayNew(SingleU5BU5D_t1444911251_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		V_2 = 0;
		goto IL_0039;
	}

IL_0024:
	{
		SingleU5BU5D_t1444911251* L_6 = V_1;
		int32_t L_7 = V_2;
		serializableSHC_t226029808 * L_8 = ___spc0;
		NullCheck(L_8);
		ByteU5BU5D_t4116647657* L_9 = L_8->get_shcData_0();
		int32_t L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		float L_11 = BitConverter_ToSingle_m2597008633(NULL /*static, unused*/, L_9, ((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)4)), /*hidden argument*/NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (float)L_11);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0039:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0024;
		}
	}
	{
		SingleU5BU5D_t1444911251* L_15 = V_1;
		return L_15;
	}

IL_0042:
	{
		return (SingleU5BU5D_t1444911251*)NULL;
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
// System.Void UnityEngine.XR.iOS.Utils.serializableUnityARCamera::.ctor(UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4,UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4,UnityEngine.XR.iOS.ARTrackingState,UnityEngine.XR.iOS.ARTrackingStateReason,UnityEngine.XR.iOS.UnityVideoParams,UnityEngine.XR.iOS.UnityARLightData,UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4,UnityEngine.XR.iOS.Utils.serializablePointCloud,UnityEngine.XR.iOS.ARWorldMappingStatus)
extern "C" IL2CPP_METHOD_ATTR void serializableUnityARCamera__ctor_m2253830471 (serializableUnityARCamera_t1848993995 * __this, serializableUnityARMatrix4x4_t255097097 * ___wt0, serializableUnityARMatrix4x4_t255097097 * ___pm1, int32_t ___ats2, int32_t ___atsr3, UnityVideoParams_t4155354995  ___uvp4, UnityARLightData_t2160616730  ___lightDat5, serializableUnityARMatrix4x4_t255097097 * ___dt6, serializablePointCloud_t4241265545 * ___spc7, int32_t ___awms8, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t255097097 * L_0 = ___wt0;
		__this->set_worldTransform_0(L_0);
		serializableUnityARMatrix4x4_t255097097 * L_1 = ___pm1;
		__this->set_projectionMatrix_1(L_1);
		int32_t L_2 = ___ats2;
		__this->set_trackingState_2(L_2);
		int32_t L_3 = ___atsr3;
		__this->set_trackingReason_3(L_3);
		UnityVideoParams_t4155354995  L_4 = ___uvp4;
		__this->set_videoParams_4(L_4);
		UnityARLightData_t2160616730  L_5 = ___lightDat5;
		serializableUnityARLightData_t3029229948 * L_6 = serializableUnityARLightData_op_Implicit_m1562974187(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		__this->set_lightData_5(L_6);
		serializableUnityARMatrix4x4_t255097097 * L_7 = ___dt6;
		__this->set_displayTransform_7(L_7);
		serializablePointCloud_t4241265545 * L_8 = ___spc7;
		__this->set_pointCloud_6(L_8);
		int32_t L_9 = ___awms8;
		__this->set_worldMappingStatus_8(L_9);
		return;
	}
}
// UnityEngine.XR.iOS.Utils.serializableUnityARCamera UnityEngine.XR.iOS.Utils.serializableUnityARCamera::op_Implicit(UnityEngine.XR.iOS.UnityARCamera)
extern "C" IL2CPP_METHOD_ATTR serializableUnityARCamera_t1848993995 * serializableUnityARCamera_op_Implicit_m3499307499 (RuntimeObject * __this /* static, unused */, UnityARCamera_t2069150450  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARCamera_op_Implicit_m3499307499_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityARMatrix4x4_t4073345847  L_0 = (&___rValue0)->get_worldTransform_0();
		serializableUnityARMatrix4x4_t255097097 * L_1 = serializableUnityARMatrix4x4_op_Implicit_m4130895361(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		UnityARMatrix4x4_t4073345847  L_2 = (&___rValue0)->get_projectionMatrix_1();
		serializableUnityARMatrix4x4_t255097097 * L_3 = serializableUnityARMatrix4x4_op_Implicit_m4130895361(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		int32_t L_4 = (&___rValue0)->get_trackingState_2();
		int32_t L_5 = (&___rValue0)->get_trackingReason_3();
		UnityVideoParams_t4155354995  L_6 = (&___rValue0)->get_videoParams_4();
		UnityARLightData_t2160616730  L_7 = (&___rValue0)->get_lightData_5();
		UnityARMatrix4x4_t4073345847  L_8 = (&___rValue0)->get_displayTransform_6();
		serializableUnityARMatrix4x4_t255097097 * L_9 = serializableUnityARMatrix4x4_op_Implicit_m4130895361(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		Vector3U5BU5D_t1718750761* L_10 = (&___rValue0)->get_pointCloudData_7();
		serializablePointCloud_t4241265545 * L_11 = serializablePointCloud_op_Implicit_m1868975265(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		int32_t L_12 = (&___rValue0)->get_worldMappingStatus_8();
		serializableUnityARCamera_t1848993995 * L_13 = (serializableUnityARCamera_t1848993995 *)il2cpp_codegen_object_new(serializableUnityARCamera_t1848993995_il2cpp_TypeInfo_var);
		serializableUnityARCamera__ctor_m2253830471(L_13, L_1, L_3, L_4, L_5, L_6, L_7, L_9, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// UnityEngine.XR.iOS.UnityARCamera UnityEngine.XR.iOS.Utils.serializableUnityARCamera::op_Implicit(UnityEngine.XR.iOS.Utils.serializableUnityARCamera)
extern "C" IL2CPP_METHOD_ATTR UnityARCamera_t2069150450  serializableUnityARCamera_op_Implicit_m2231207423 (RuntimeObject * __this /* static, unused */, serializableUnityARCamera_t1848993995 * ___rValue0, const RuntimeMethod* method)
{
	{
		serializableUnityARCamera_t1848993995 * L_0 = ___rValue0;
		NullCheck(L_0);
		serializableUnityARMatrix4x4_t255097097 * L_1 = L_0->get_worldTransform_0();
		UnityARMatrix4x4_t4073345847  L_2 = serializableUnityARMatrix4x4_op_Implicit_m1102094950(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		serializableUnityARCamera_t1848993995 * L_3 = ___rValue0;
		NullCheck(L_3);
		serializableUnityARMatrix4x4_t255097097 * L_4 = L_3->get_projectionMatrix_1();
		UnityARMatrix4x4_t4073345847  L_5 = serializableUnityARMatrix4x4_op_Implicit_m1102094950(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		serializableUnityARCamera_t1848993995 * L_6 = ___rValue0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_trackingState_2();
		serializableUnityARCamera_t1848993995 * L_8 = ___rValue0;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_trackingReason_3();
		serializableUnityARCamera_t1848993995 * L_10 = ___rValue0;
		NullCheck(L_10);
		UnityVideoParams_t4155354995  L_11 = L_10->get_videoParams_4();
		serializableUnityARCamera_t1848993995 * L_12 = ___rValue0;
		NullCheck(L_12);
		serializableUnityARLightData_t3029229948 * L_13 = L_12->get_lightData_5();
		UnityARLightData_t2160616730  L_14 = serializableUnityARLightData_op_Implicit_m864326423(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		serializableUnityARCamera_t1848993995 * L_15 = ___rValue0;
		NullCheck(L_15);
		serializableUnityARMatrix4x4_t255097097 * L_16 = L_15->get_displayTransform_7();
		UnityARMatrix4x4_t4073345847  L_17 = serializableUnityARMatrix4x4_op_Implicit_m1102094950(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		serializableUnityARCamera_t1848993995 * L_18 = ___rValue0;
		NullCheck(L_18);
		serializablePointCloud_t4241265545 * L_19 = L_18->get_pointCloud_6();
		Vector3U5BU5D_t1718750761* L_20 = serializablePointCloud_op_Implicit_m3100839470(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		serializableUnityARCamera_t1848993995 * L_21 = ___rValue0;
		NullCheck(L_21);
		int32_t L_22 = L_21->get_worldMappingStatus_8();
		UnityARCamera_t2069150450  L_23;
		memset(&L_23, 0, sizeof(L_23));
		UnityARCamera__ctor_m4225117993((&L_23), L_2, L_5, L_7, L_9, L_11, L_14, L_17, L_20, L_22, /*hidden argument*/NULL);
		return L_23;
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
// System.Void UnityEngine.XR.iOS.Utils.serializableUnityARFaceAnchor::.ctor(UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4,UnityEngine.XR.iOS.Utils.serializableFaceGeometry,System.Collections.Generic.Dictionary`2<System.String,System.Single>,System.Byte[],System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void serializableUnityARFaceAnchor__ctor_m3796934863 (serializableUnityARFaceAnchor_t1413500457 * __this, serializableUnityARMatrix4x4_t255097097 * ___wt0, serializableFaceGeometry_t1893768467 * ___fg1, Dictionary_2_t1182523073 * ___bs2, ByteU5BU5D_t4116647657* ___idstr3, bool ___bIsTracked4, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t255097097 * L_0 = ___wt0;
		__this->set_worldTransform_0(L_0);
		serializableFaceGeometry_t1893768467 * L_1 = ___fg1;
		__this->set_faceGeometry_1(L_1);
		Dictionary_2_t1182523073 * L_2 = ___bs2;
		__this->set_arBlendShapes_2(L_2);
		ByteU5BU5D_t4116647657* L_3 = ___idstr3;
		__this->set_identifierStr_3(L_3);
		bool L_4 = ___bIsTracked4;
		__this->set_isTracked_4(L_4);
		return;
	}
}
// UnityEngine.XR.iOS.Utils.serializableUnityARFaceAnchor UnityEngine.XR.iOS.Utils.serializableUnityARFaceAnchor::op_Implicit(UnityEngine.XR.iOS.ARFaceAnchor)
extern "C" IL2CPP_METHOD_ATTR serializableUnityARFaceAnchor_t1413500457 * serializableUnityARFaceAnchor_op_Implicit_m174134999 (RuntimeObject * __this /* static, unused */, ARFaceAnchor_t1844206636 * ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARFaceAnchor_op_Implicit_m174134999_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	serializableUnityARMatrix4x4_t255097097 * V_0 = NULL;
	serializableFaceGeometry_t1893768467 * V_1 = NULL;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	{
		ARFaceAnchor_t1844206636 * L_0 = ___rValue0;
		NullCheck(L_0);
		Matrix4x4_t1817901843  L_1 = ARFaceAnchor_get_transform_m2525862755(L_0, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t255097097 * L_2 = serializableUnityARMatrix4x4_op_Implicit_m3916569269(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ARFaceAnchor_t1844206636 * L_3 = ___rValue0;
		NullCheck(L_3);
		ARFaceGeometry_t5139606 * L_4 = ARFaceAnchor_get_faceGeometry_m1319421082(L_3, /*hidden argument*/NULL);
		serializableFaceGeometry_t1893768467 * L_5 = serializableFaceGeometry_op_Implicit_m1662172422(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_6 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		ARFaceAnchor_t1844206636 * L_7 = ___rValue0;
		NullCheck(L_7);
		String_t* L_8 = ARFaceAnchor_get_identifierStr_m1822207425(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ByteU5BU5D_t4116647657* L_9 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_6, L_8);
		V_2 = L_9;
		serializableUnityARMatrix4x4_t255097097 * L_10 = V_0;
		serializableFaceGeometry_t1893768467 * L_11 = V_1;
		ARFaceAnchor_t1844206636 * L_12 = ___rValue0;
		NullCheck(L_12);
		Dictionary_2_t1182523073 * L_13 = ARFaceAnchor_get_blendShapes_m335066950(L_12, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_14 = V_2;
		ARFaceAnchor_t1844206636 * L_15 = ___rValue0;
		NullCheck(L_15);
		bool L_16 = ARFaceAnchor_get_isTracked_m3291349908(L_15, /*hidden argument*/NULL);
		serializableUnityARFaceAnchor_t1413500457 * L_17 = (serializableUnityARFaceAnchor_t1413500457 *)il2cpp_codegen_object_new(serializableUnityARFaceAnchor_t1413500457_il2cpp_TypeInfo_var);
		serializableUnityARFaceAnchor__ctor_m3796934863(L_17, L_10, L_11, L_13, L_14, L_16, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.iOS.Utils.serializableUnityARLightData::.ctor(UnityEngine.XR.iOS.UnityARLightData)
extern "C" IL2CPP_METHOD_ATTR void serializableUnityARLightData__ctor_m3747442693 (serializableUnityARLightData_t3029229948 * __this, UnityARLightData_t2160616730  ___lightData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARLightData__ctor_m3747442693_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = (&___lightData0)->get_arLightingType_0();
		__this->set_whichLight_0(L_0);
		int32_t L_1 = __this->get_whichLight_0();
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0076;
		}
	}
	{
		UnityARDirectionalLightEstimate_t2924556994 * L_2 = (&___lightData0)->get_arDirectonalLightEstimate_2();
		NullCheck(L_2);
		SingleU5BU5D_t1444911251* L_3 = L_2->get_sphericalHarmonicsCoefficients_2();
		serializableSHC_t226029808 * L_4 = serializableSHC_op_Implicit_m657028205(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		__this->set_lightSHC_1(L_4);
		UnityARDirectionalLightEstimate_t2924556994 * L_5 = (&___lightData0)->get_arDirectonalLightEstimate_2();
		NullCheck(L_5);
		Vector3_t3722313464  L_6 = L_5->get_primaryLightDirection_0();
		V_0 = L_6;
		UnityARDirectionalLightEstimate_t2924556994 * L_7 = (&___lightData0)->get_arDirectonalLightEstimate_2();
		NullCheck(L_7);
		float L_8 = L_7->get_primaryLightIntensity_1();
		V_1 = L_8;
		float L_9 = (&V_0)->get_x_2();
		float L_10 = (&V_0)->get_y_3();
		float L_11 = (&V_0)->get_z_4();
		float L_12 = V_1;
		SerializableVector4_t2739337940 * L_13 = (SerializableVector4_t2739337940 *)il2cpp_codegen_object_new(SerializableVector4_t2739337940_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_m2807424733(L_13, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		__this->set_primaryLightDirAndIntensity_2(L_13);
		goto IL_009a;
	}

IL_0076:
	{
		UnityARLightEstimate_t1498306117 * L_14 = (&___lightData0)->get_address_of_arLightEstimate_1();
		float L_15 = L_14->get_ambientIntensity_0();
		__this->set_ambientIntensity_3(L_15);
		UnityARLightEstimate_t1498306117 * L_16 = (&___lightData0)->get_address_of_arLightEstimate_1();
		float L_17 = L_16->get_ambientColorTemperature_1();
		__this->set_ambientColorTemperature_4(L_17);
	}

IL_009a:
	{
		return;
	}
}
// UnityEngine.XR.iOS.Utils.serializableUnityARLightData UnityEngine.XR.iOS.Utils.serializableUnityARLightData::op_Implicit(UnityEngine.XR.iOS.UnityARLightData)
extern "C" IL2CPP_METHOD_ATTR serializableUnityARLightData_t3029229948 * serializableUnityARLightData_op_Implicit_m1562974187 (RuntimeObject * __this /* static, unused */, UnityARLightData_t2160616730  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARLightData_op_Implicit_m1562974187_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityARLightData_t2160616730  L_0 = ___rValue0;
		serializableUnityARLightData_t3029229948 * L_1 = (serializableUnityARLightData_t3029229948 *)il2cpp_codegen_object_new(serializableUnityARLightData_t3029229948_il2cpp_TypeInfo_var);
		serializableUnityARLightData__ctor_m3747442693(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.XR.iOS.UnityARLightData UnityEngine.XR.iOS.Utils.serializableUnityARLightData::op_Implicit(UnityEngine.XR.iOS.Utils.serializableUnityARLightData)
extern "C" IL2CPP_METHOD_ATTR UnityARLightData_t2160616730  serializableUnityARLightData_op_Implicit_m864326423 (RuntimeObject * __this /* static, unused */, serializableUnityARLightData_t3029229948 * ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARLightData_op_Implicit_m864326423_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityARDirectionalLightEstimate_t2924556994 * V_0 = NULL;
	UnityARLightEstimate_t1498306117  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		V_0 = (UnityARDirectionalLightEstimate_t2924556994 *)NULL;
		serializableUnityARLightData_t3029229948 * L_0 = ___rValue0;
		NullCheck(L_0);
		float L_1 = L_0->get_ambientIntensity_3();
		serializableUnityARLightData_t3029229948 * L_2 = ___rValue0;
		NullCheck(L_2);
		float L_3 = L_2->get_ambientColorTemperature_4();
		UnityARLightEstimate__ctor_m1412967459((UnityARLightEstimate_t1498306117 *)(&V_1), L_1, L_3, /*hidden argument*/NULL);
		serializableUnityARLightData_t3029229948 * L_4 = ___rValue0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_whichLight_0();
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0066;
		}
	}
	{
		serializableUnityARLightData_t3029229948 * L_6 = ___rValue0;
		NullCheck(L_6);
		SerializableVector4_t2739337940 * L_7 = L_6->get_primaryLightDirAndIntensity_2();
		NullCheck(L_7);
		float L_8 = L_7->get_x_0();
		serializableUnityARLightData_t3029229948 * L_9 = ___rValue0;
		NullCheck(L_9);
		SerializableVector4_t2739337940 * L_10 = L_9->get_primaryLightDirAndIntensity_2();
		NullCheck(L_10);
		float L_11 = L_10->get_y_1();
		serializableUnityARLightData_t3029229948 * L_12 = ___rValue0;
		NullCheck(L_12);
		SerializableVector4_t2739337940 * L_13 = L_12->get_primaryLightDirAndIntensity_2();
		NullCheck(L_13);
		float L_14 = L_13->get_z_2();
		Vector3__ctor_m3353183577((Vector3_t3722313464 *)(&V_2), L_8, L_11, L_14, /*hidden argument*/NULL);
		serializableUnityARLightData_t3029229948 * L_15 = ___rValue0;
		NullCheck(L_15);
		serializableSHC_t226029808 * L_16 = L_15->get_lightSHC_1();
		SingleU5BU5D_t1444911251* L_17 = serializableSHC_op_Implicit_m142774640(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		Vector3_t3722313464  L_18 = V_2;
		serializableUnityARLightData_t3029229948 * L_19 = ___rValue0;
		NullCheck(L_19);
		SerializableVector4_t2739337940 * L_20 = L_19->get_primaryLightDirAndIntensity_2();
		NullCheck(L_20);
		float L_21 = L_20->get_w_3();
		UnityARDirectionalLightEstimate_t2924556994 * L_22 = (UnityARDirectionalLightEstimate_t2924556994 *)il2cpp_codegen_object_new(UnityARDirectionalLightEstimate_t2924556994_il2cpp_TypeInfo_var);
		UnityARDirectionalLightEstimate__ctor_m3248127264(L_22, L_17, L_18, L_21, /*hidden argument*/NULL);
		V_0 = L_22;
	}

IL_0066:
	{
		serializableUnityARLightData_t3029229948 * L_23 = ___rValue0;
		NullCheck(L_23);
		int32_t L_24 = L_23->get_whichLight_0();
		UnityARLightEstimate_t1498306117  L_25 = V_1;
		UnityARDirectionalLightEstimate_t2924556994 * L_26 = V_0;
		UnityARLightData_t2160616730  L_27;
		memset(&L_27, 0, sizeof(L_27));
		UnityARLightData__ctor_m4238079321((&L_27), L_24, L_25, L_26, /*hidden argument*/NULL);
		return L_27;
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
// System.Void UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4::.ctor(UnityEngine.XR.iOS.Utils.SerializableVector4,UnityEngine.XR.iOS.Utils.SerializableVector4,UnityEngine.XR.iOS.Utils.SerializableVector4,UnityEngine.XR.iOS.Utils.SerializableVector4)
extern "C" IL2CPP_METHOD_ATTR void serializableUnityARMatrix4x4__ctor_m3005749355 (serializableUnityARMatrix4x4_t255097097 * __this, SerializableVector4_t2739337940 * ___v00, SerializableVector4_t2739337940 * ___v11, SerializableVector4_t2739337940 * ___v22, SerializableVector4_t2739337940 * ___v33, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		SerializableVector4_t2739337940 * L_0 = ___v00;
		__this->set_column0_0(L_0);
		SerializableVector4_t2739337940 * L_1 = ___v11;
		__this->set_column1_1(L_1);
		SerializableVector4_t2739337940 * L_2 = ___v22;
		__this->set_column2_2(L_2);
		SerializableVector4_t2739337940 * L_3 = ___v33;
		__this->set_column3_3(L_3);
		return;
	}
}
// UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4 UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.XR.iOS.UnityARMatrix4x4)
extern "C" IL2CPP_METHOD_ATTR serializableUnityARMatrix4x4_t255097097 * serializableUnityARMatrix4x4_op_Implicit_m4130895361 (RuntimeObject * __this /* static, unused */, UnityARMatrix4x4_t4073345847  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARMatrix4x4_op_Implicit_m4130895361_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector4_t3319028937  L_0 = (&___rValue0)->get_column0_0();
		SerializableVector4_t2739337940 * L_1 = SerializableVector4_op_Implicit_m1552594547(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Vector4_t3319028937  L_2 = (&___rValue0)->get_column1_1();
		SerializableVector4_t2739337940 * L_3 = SerializableVector4_op_Implicit_m1552594547(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Vector4_t3319028937  L_4 = (&___rValue0)->get_column2_2();
		SerializableVector4_t2739337940 * L_5 = SerializableVector4_op_Implicit_m1552594547(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Vector4_t3319028937  L_6 = (&___rValue0)->get_column3_3();
		SerializableVector4_t2739337940 * L_7 = SerializableVector4_op_Implicit_m1552594547(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t255097097 * L_8 = (serializableUnityARMatrix4x4_t255097097 *)il2cpp_codegen_object_new(serializableUnityARMatrix4x4_t255097097_il2cpp_TypeInfo_var);
		serializableUnityARMatrix4x4__ctor_m3005749355(L_8, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4)
extern "C" IL2CPP_METHOD_ATTR UnityARMatrix4x4_t4073345847  serializableUnityARMatrix4x4_op_Implicit_m1102094950 (RuntimeObject * __this /* static, unused */, serializableUnityARMatrix4x4_t255097097 * ___rValue0, const RuntimeMethod* method)
{
	{
		serializableUnityARMatrix4x4_t255097097 * L_0 = ___rValue0;
		NullCheck(L_0);
		SerializableVector4_t2739337940 * L_1 = L_0->get_column0_0();
		Vector4_t3319028937  L_2 = SerializableVector4_op_Implicit_m187218805(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t255097097 * L_3 = ___rValue0;
		NullCheck(L_3);
		SerializableVector4_t2739337940 * L_4 = L_3->get_column1_1();
		Vector4_t3319028937  L_5 = SerializableVector4_op_Implicit_m187218805(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t255097097 * L_6 = ___rValue0;
		NullCheck(L_6);
		SerializableVector4_t2739337940 * L_7 = L_6->get_column2_2();
		Vector4_t3319028937  L_8 = SerializableVector4_op_Implicit_m187218805(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t255097097 * L_9 = ___rValue0;
		NullCheck(L_9);
		SerializableVector4_t2739337940 * L_10 = L_9->get_column3_3();
		Vector4_t3319028937  L_11 = SerializableVector4_op_Implicit_m187218805(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		UnityARMatrix4x4_t4073345847  L_12;
		memset(&L_12, 0, sizeof(L_12));
		UnityARMatrix4x4__ctor_m3835909947((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4 UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.Matrix4x4)
extern "C" IL2CPP_METHOD_ATTR serializableUnityARMatrix4x4_t255097097 * serializableUnityARMatrix4x4_op_Implicit_m3916569269 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARMatrix4x4_op_Implicit_m3916569269_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector4_t3319028937  L_0 = Matrix4x4_GetColumn_m461504848((Matrix4x4_t1817901843 *)(&___rValue0), 0, /*hidden argument*/NULL);
		SerializableVector4_t2739337940 * L_1 = SerializableVector4_op_Implicit_m1552594547(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Vector4_t3319028937  L_2 = Matrix4x4_GetColumn_m461504848((Matrix4x4_t1817901843 *)(&___rValue0), 1, /*hidden argument*/NULL);
		SerializableVector4_t2739337940 * L_3 = SerializableVector4_op_Implicit_m1552594547(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Vector4_t3319028937  L_4 = Matrix4x4_GetColumn_m461504848((Matrix4x4_t1817901843 *)(&___rValue0), 2, /*hidden argument*/NULL);
		SerializableVector4_t2739337940 * L_5 = SerializableVector4_op_Implicit_m1552594547(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Vector4_t3319028937  L_6 = Matrix4x4_GetColumn_m461504848((Matrix4x4_t1817901843 *)(&___rValue0), 3, /*hidden argument*/NULL);
		SerializableVector4_t2739337940 * L_7 = SerializableVector4_op_Implicit_m1552594547(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t255097097 * L_8 = (serializableUnityARMatrix4x4_t255097097 *)il2cpp_codegen_object_new(serializableUnityARMatrix4x4_t255097097_il2cpp_TypeInfo_var);
		serializableUnityARMatrix4x4__ctor_m3005749355(L_8, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4)
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t1817901843  serializableUnityARMatrix4x4_op_Implicit_m1013705361 (RuntimeObject * __this /* static, unused */, serializableUnityARMatrix4x4_t255097097 * ___rValue0, const RuntimeMethod* method)
{
	{
		serializableUnityARMatrix4x4_t255097097 * L_0 = ___rValue0;
		NullCheck(L_0);
		SerializableVector4_t2739337940 * L_1 = L_0->get_column0_0();
		Vector4_t3319028937  L_2 = SerializableVector4_op_Implicit_m187218805(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t255097097 * L_3 = ___rValue0;
		NullCheck(L_3);
		SerializableVector4_t2739337940 * L_4 = L_3->get_column1_1();
		Vector4_t3319028937  L_5 = SerializableVector4_op_Implicit_m187218805(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t255097097 * L_6 = ___rValue0;
		NullCheck(L_6);
		SerializableVector4_t2739337940 * L_7 = L_6->get_column2_2();
		Vector4_t3319028937  L_8 = SerializableVector4_op_Implicit_m187218805(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t255097097 * L_9 = ___rValue0;
		NullCheck(L_9);
		SerializableVector4_t2739337940 * L_10 = L_9->get_column3_3();
		Vector4_t3319028937  L_11 = SerializableVector4_op_Implicit_m187218805(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		Matrix4x4_t1817901843  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Matrix4x4__ctor_m53065545((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		return L_12;
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
// System.Void UnityEngine.XR.iOS.Utils.serializableUnityARPlaneAnchor::.ctor(UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4,UnityEngine.XR.iOS.Utils.SerializableVector4,UnityEngine.XR.iOS.Utils.SerializableVector4,UnityEngine.XR.iOS.ARPlaneAnchorAlignment,UnityEngine.XR.iOS.Utils.serializablePlaneGeometry,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void serializableUnityARPlaneAnchor__ctor_m3615116360 (serializableUnityARPlaneAnchor_t3965207599 * __this, serializableUnityARMatrix4x4_t255097097 * ___wt0, SerializableVector4_t2739337940 * ___ctr1, SerializableVector4_t2739337940 * ___ext2, int64_t ___apaa3, serializablePlaneGeometry_t3471745378 * ___spg4, ByteU5BU5D_t4116647657* ___idstr5, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t255097097 * L_0 = ___wt0;
		__this->set_worldTransform_0(L_0);
		SerializableVector4_t2739337940 * L_1 = ___ctr1;
		__this->set_center_1(L_1);
		SerializableVector4_t2739337940 * L_2 = ___ext2;
		__this->set_extent_2(L_2);
		int64_t L_3 = ___apaa3;
		__this->set_planeAlignment_3(L_3);
		ByteU5BU5D_t4116647657* L_4 = ___idstr5;
		__this->set_identifierStr_5(L_4);
		serializablePlaneGeometry_t3471745378 * L_5 = ___spg4;
		__this->set_planeGeometry_4(L_5);
		return;
	}
}
// UnityEngine.XR.iOS.Utils.serializableUnityARPlaneAnchor UnityEngine.XR.iOS.Utils.serializableUnityARPlaneAnchor::op_Implicit(UnityEngine.XR.iOS.ARPlaneAnchor)
extern "C" IL2CPP_METHOD_ATTR serializableUnityARPlaneAnchor_t3965207599 * serializableUnityARPlaneAnchor_op_Implicit_m1833342500 (RuntimeObject * __this /* static, unused */, ARPlaneAnchor_t2049372221 * ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARPlaneAnchor_op_Implicit_m1833342500_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	serializableUnityARMatrix4x4_t255097097 * V_0 = NULL;
	SerializableVector4_t2739337940 * V_1 = NULL;
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	SerializableVector4_t2739337940 * V_5 = NULL;
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector3_t3722313464  V_8;
	memset(&V_8, 0, sizeof(V_8));
	ByteU5BU5D_t4116647657* V_9 = NULL;
	serializablePlaneGeometry_t3471745378 * V_10 = NULL;
	{
		ARPlaneAnchor_t2049372221 * L_0 = ___rValue0;
		NullCheck(L_0);
		Matrix4x4_t1817901843  L_1 = ARPlaneAnchor_get_transform_m1915241100(L_0, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t255097097 * L_2 = serializableUnityARMatrix4x4_op_Implicit_m3916569269(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ARPlaneAnchor_t2049372221 * L_3 = ___rValue0;
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = ARPlaneAnchor_get_center_m3271753266(L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		float L_5 = (&V_2)->get_x_2();
		ARPlaneAnchor_t2049372221 * L_6 = ___rValue0;
		NullCheck(L_6);
		Vector3_t3722313464  L_7 = ARPlaneAnchor_get_center_m3271753266(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		float L_8 = (&V_3)->get_y_3();
		ARPlaneAnchor_t2049372221 * L_9 = ___rValue0;
		NullCheck(L_9);
		Vector3_t3722313464  L_10 = ARPlaneAnchor_get_center_m3271753266(L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		float L_11 = (&V_4)->get_z_4();
		SerializableVector4_t2739337940 * L_12 = (SerializableVector4_t2739337940 *)il2cpp_codegen_object_new(SerializableVector4_t2739337940_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_m2807424733(L_12, L_5, L_8, L_11, (1.0f), /*hidden argument*/NULL);
		V_1 = L_12;
		ARPlaneAnchor_t2049372221 * L_13 = ___rValue0;
		NullCheck(L_13);
		Vector3_t3722313464  L_14 = ARPlaneAnchor_get_extent_m687688995(L_13, /*hidden argument*/NULL);
		V_6 = L_14;
		float L_15 = (&V_6)->get_x_2();
		ARPlaneAnchor_t2049372221 * L_16 = ___rValue0;
		NullCheck(L_16);
		Vector3_t3722313464  L_17 = ARPlaneAnchor_get_extent_m687688995(L_16, /*hidden argument*/NULL);
		V_7 = L_17;
		float L_18 = (&V_7)->get_y_3();
		ARPlaneAnchor_t2049372221 * L_19 = ___rValue0;
		NullCheck(L_19);
		Vector3_t3722313464  L_20 = ARPlaneAnchor_get_extent_m687688995(L_19, /*hidden argument*/NULL);
		V_8 = L_20;
		float L_21 = (&V_8)->get_z_4();
		SerializableVector4_t2739337940 * L_22 = (SerializableVector4_t2739337940 *)il2cpp_codegen_object_new(SerializableVector4_t2739337940_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_m2807424733(L_22, L_15, L_18, L_21, (1.0f), /*hidden argument*/NULL);
		V_5 = L_22;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_23 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		ARPlaneAnchor_t2049372221 * L_24 = ___rValue0;
		NullCheck(L_24);
		String_t* L_25 = ARPlaneAnchor_get_identifier_m3202847065(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		ByteU5BU5D_t4116647657* L_26 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_23, L_25);
		V_9 = L_26;
		ARPlaneAnchor_t2049372221 * L_27 = ___rValue0;
		NullCheck(L_27);
		ARPlaneGeometry_t1169415986 * L_28 = ARPlaneAnchor_get_planeGeometry_m4284775768(L_27, /*hidden argument*/NULL);
		serializablePlaneGeometry_t3471745378 * L_29 = serializablePlaneGeometry_op_Implicit_m2849839976(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		V_10 = L_29;
		serializableUnityARMatrix4x4_t255097097 * L_30 = V_0;
		SerializableVector4_t2739337940 * L_31 = V_1;
		SerializableVector4_t2739337940 * L_32 = V_5;
		ARPlaneAnchor_t2049372221 * L_33 = ___rValue0;
		NullCheck(L_33);
		int64_t L_34 = ARPlaneAnchor_get_alignment_m2029387076(L_33, /*hidden argument*/NULL);
		serializablePlaneGeometry_t3471745378 * L_35 = V_10;
		ByteU5BU5D_t4116647657* L_36 = V_9;
		serializableUnityARPlaneAnchor_t3965207599 * L_37 = (serializableUnityARPlaneAnchor_t3965207599 *)il2cpp_codegen_object_new(serializableUnityARPlaneAnchor_t3965207599_il2cpp_TypeInfo_var);
		serializableUnityARPlaneAnchor__ctor_m3615116360(L_37, L_30, L_31, L_32, L_34, L_35, L_36, /*hidden argument*/NULL);
		return L_37;
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
extern "C"  void DelegatePInvokeWrapper_VideoFormatEnumerator_t3131638505 (VideoFormatEnumerator_t3131638505 * __this, UnityARVideoFormat_t1944454781  ___videoFormat0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(UnityARVideoFormat_t1944454781 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___videoFormat0);

}
// System.Void UnityEngine.XR.iOS.VideoFormatEnumerator::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void VideoFormatEnumerator__ctor_m397483959 (VideoFormatEnumerator_t3131638505 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.VideoFormatEnumerator::Invoke(UnityEngine.XR.iOS.UnityARVideoFormat)
extern "C" IL2CPP_METHOD_ATTR void VideoFormatEnumerator_Invoke_m100250450 (VideoFormatEnumerator_t3131638505 * __this, UnityARVideoFormat_t1944454781  ___videoFormat0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		VideoFormatEnumerator_Invoke_m100250450((VideoFormatEnumerator_t3131638505 *)__this->get_prev_9(), ___videoFormat0, method);
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
				typedef void (*FunctionPointerType) (RuntimeObject *, UnityARVideoFormat_t1944454781 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___videoFormat0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, UnityARVideoFormat_t1944454781 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___videoFormat0, targetMethod);
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
						GenericInterfaceActionInvoker1< UnityARVideoFormat_t1944454781  >::Invoke(targetMethod, targetThis, ___videoFormat0);
					else
						GenericVirtActionInvoker1< UnityARVideoFormat_t1944454781  >::Invoke(targetMethod, targetThis, ___videoFormat0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< UnityARVideoFormat_t1944454781  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___videoFormat0);
					else
						VirtActionInvoker1< UnityARVideoFormat_t1944454781  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___videoFormat0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UnityARVideoFormat_t1944454781 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___videoFormat0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.VideoFormatEnumerator::BeginInvoke(UnityEngine.XR.iOS.UnityARVideoFormat,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* VideoFormatEnumerator_BeginInvoke_m3988644263 (VideoFormatEnumerator_t3131638505 * __this, UnityARVideoFormat_t1944454781  ___videoFormat0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatEnumerator_BeginInvoke_m3988644263_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UnityARVideoFormat_t1944454781_il2cpp_TypeInfo_var, &___videoFormat0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.VideoFormatEnumerator::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void VideoFormatEnumerator_EndInvoke_m2608799897 (VideoFormatEnumerator_t3131638505 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.iOS.serializableARReferenceObject::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void serializableARReferenceObject__ctor_m4187961053 (serializableARReferenceObject_t2711648110 * __this, ByteU5BU5D_t4116647657* ___inputObjectData0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_0 = ___inputObjectData0;
		__this->set_arReferenceObjectData_0(L_0);
		return;
	}
}
// UnityEngine.XR.iOS.serializableARReferenceObject UnityEngine.XR.iOS.serializableARReferenceObject::op_Implicit(UnityEngine.XR.iOS.ARReferenceObject)
extern "C" IL2CPP_METHOD_ATTR serializableARReferenceObject_t2711648110 * serializableARReferenceObject_op_Implicit_m2151343210 (RuntimeObject * __this /* static, unused */, ARReferenceObject_t1065366714 * ___arReferenceObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableARReferenceObject_op_Implicit_m2151343210_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ARReferenceObject_t1065366714 * L_0 = ___arReferenceObject0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		ARReferenceObject_t1065366714 * L_1 = ___arReferenceObject0;
		NullCheck(L_1);
		ByteU5BU5D_t4116647657* L_2 = ARReferenceObject_SerializeToByteArray_m2720564955(L_1, /*hidden argument*/NULL);
		serializableARReferenceObject_t2711648110 * L_3 = (serializableARReferenceObject_t2711648110 *)il2cpp_codegen_object_new(serializableARReferenceObject_t2711648110_il2cpp_TypeInfo_var);
		serializableARReferenceObject__ctor_m4187961053(L_3, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0012:
	{
		serializableARReferenceObject_t2711648110 * L_4 = (serializableARReferenceObject_t2711648110 *)il2cpp_codegen_object_new(serializableARReferenceObject_t2711648110_il2cpp_TypeInfo_var);
		serializableARReferenceObject__ctor_m4187961053(L_4, (ByteU5BU5D_t4116647657*)(ByteU5BU5D_t4116647657*)NULL, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.XR.iOS.ARReferenceObject UnityEngine.XR.iOS.serializableARReferenceObject::op_Implicit(UnityEngine.XR.iOS.serializableARReferenceObject)
extern "C" IL2CPP_METHOD_ATTR ARReferenceObject_t1065366714 * serializableARReferenceObject_op_Implicit_m146288711 (RuntimeObject * __this /* static, unused */, serializableARReferenceObject_t2711648110 * ___serReferenceObject0, const RuntimeMethod* method)
{
	{
		serializableARReferenceObject_t2711648110 * L_0 = ___serReferenceObject0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		serializableARReferenceObject_t2711648110 * L_1 = ___serReferenceObject0;
		NullCheck(L_1);
		ByteU5BU5D_t4116647657* L_2 = L_1->get_arReferenceObjectData_0();
		ARReferenceObject_t1065366714 * L_3 = ARReferenceObject_SerializeFromByteArray_m3386329296(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0012:
	{
		return (ARReferenceObject_t1065366714 *)NULL;
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
// System.Void UnityEngine.XR.iOS.serializableARWorldMap::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void serializableARWorldMap__ctor_m3113242015 (serializableARWorldMap_t2514323794 * __this, ByteU5BU5D_t4116647657* ___inputMapData0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_0 = ___inputMapData0;
		__this->set_arWorldMapData_0(L_0);
		return;
	}
}
// UnityEngine.XR.iOS.serializableARWorldMap UnityEngine.XR.iOS.serializableARWorldMap::op_Implicit(UnityEngine.XR.iOS.ARWorldMap)
extern "C" IL2CPP_METHOD_ATTR serializableARWorldMap_t2514323794 * serializableARWorldMap_op_Implicit_m1798102707 (RuntimeObject * __this /* static, unused */, ARWorldMap_t2240790807 * ___arWorldMap0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableARWorldMap_op_Implicit_m1798102707_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ARWorldMap_t2240790807 * L_0 = ___arWorldMap0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		ARWorldMap_t2240790807 * L_1 = ___arWorldMap0;
		NullCheck(L_1);
		ByteU5BU5D_t4116647657* L_2 = ARWorldMap_SerializeToByteArray_m221362025(L_1, /*hidden argument*/NULL);
		serializableARWorldMap_t2514323794 * L_3 = (serializableARWorldMap_t2514323794 *)il2cpp_codegen_object_new(serializableARWorldMap_t2514323794_il2cpp_TypeInfo_var);
		serializableARWorldMap__ctor_m3113242015(L_3, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0012:
	{
		serializableARWorldMap_t2514323794 * L_4 = (serializableARWorldMap_t2514323794 *)il2cpp_codegen_object_new(serializableARWorldMap_t2514323794_il2cpp_TypeInfo_var);
		serializableARWorldMap__ctor_m3113242015(L_4, (ByteU5BU5D_t4116647657*)(ByteU5BU5D_t4116647657*)NULL, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.XR.iOS.ARWorldMap UnityEngine.XR.iOS.serializableARWorldMap::op_Implicit(UnityEngine.XR.iOS.serializableARWorldMap)
extern "C" IL2CPP_METHOD_ATTR ARWorldMap_t2240790807 * serializableARWorldMap_op_Implicit_m3533126774 (RuntimeObject * __this /* static, unused */, serializableARWorldMap_t2514323794 * ___serWorldMap0, const RuntimeMethod* method)
{
	{
		serializableARWorldMap_t2514323794 * L_0 = ___serWorldMap0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		serializableARWorldMap_t2514323794 * L_1 = ___serWorldMap0;
		NullCheck(L_1);
		ByteU5BU5D_t4116647657* L_2 = L_1->get_arWorldMapData_0();
		ARWorldMap_t2240790807 * L_3 = ARWorldMap_SerializeFromByteArray_m942818637(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0012:
	{
		return (ARWorldMap_t2240790807 *)NULL;
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
// System.Void UnityEyeManager::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEyeManager__ctor_m3195371094 (UnityEyeManager_t3949445033 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEyeManager::Start()
extern "C" IL2CPP_METHOD_ATTR void UnityEyeManager_Start_m3569568970 (UnityEyeManager_t3949445033 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEyeManager_Start_m3569568970_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARKitFaceTrackingConfiguration_t386387352  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_t3929719369 * L_0 = UnityARSessionNativeInterface_GetARSessionNativeInterface_m1118592565(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_session_5(L_0);
		Application_set_targetFrameRate_m3682352535(NULL /*static, unused*/, ((int32_t)60), /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(ARKitFaceTrackingConfiguration_t386387352 ));
		(&V_0)->set_alignment_0(0);
		(&V_0)->set_enableLightEstimation_1((bool)1);
		bool L_1 = ARKitFaceTrackingConfiguration_get_IsSupported_m3877962633((ARKitFaceTrackingConfiguration_t386387352 *)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0075;
		}
	}
	{
		UnityARSessionNativeInterface_t3929719369 * L_2 = __this->get_m_session_5();
		ARKitFaceTrackingConfiguration_t386387352  L_3 = V_0;
		NullCheck(L_2);
		UnityARSessionNativeInterface_RunWithConfig_m2126515950(L_2, L_3, /*hidden argument*/NULL);
		intptr_t L_4 = (intptr_t)UnityEyeManager_FaceAdded_m743662964_RuntimeMethod_var;
		ARFaceAnchorAdded_t3526051790 * L_5 = (ARFaceAnchorAdded_t3526051790 *)il2cpp_codegen_object_new(ARFaceAnchorAdded_t3526051790_il2cpp_TypeInfo_var);
		ARFaceAnchorAdded__ctor_m1429680355(L_5, __this, (intptr_t)L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_add_ARFaceAnchorAddedEvent_m878631319(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		intptr_t L_6 = (intptr_t)UnityEyeManager_FaceUpdated_m35923746_RuntimeMethod_var;
		ARFaceAnchorUpdated_t3258688950 * L_7 = (ARFaceAnchorUpdated_t3258688950 *)il2cpp_codegen_object_new(ARFaceAnchorUpdated_t3258688950_il2cpp_TypeInfo_var);
		ARFaceAnchorUpdated__ctor_m3658882913(L_7, __this, (intptr_t)L_6, /*hidden argument*/NULL);
		UnityARSessionNativeInterface_add_ARFaceAnchorUpdatedEvent_m4045499720(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		intptr_t L_8 = (intptr_t)UnityEyeManager_FaceRemoved_m678205404_RuntimeMethod_var;
		ARFaceAnchorRemoved_t2550278937 * L_9 = (ARFaceAnchorRemoved_t2550278937 *)il2cpp_codegen_object_new(ARFaceAnchorRemoved_t2550278937_il2cpp_TypeInfo_var);
		ARFaceAnchorRemoved__ctor_m2470011458(L_9, __this, (intptr_t)L_8, /*hidden argument*/NULL);
		UnityARSessionNativeInterface_add_ARFaceAnchorRemovedEvent_m297437947(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
	}

IL_0075:
	{
		GameObject_t1113636619 * L_10 = __this->get_eyePrefab_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_11 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_10, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		__this->set_leftEyeGo_6(L_11);
		GameObject_t1113636619 * L_12 = __this->get_eyePrefab_4();
		GameObject_t1113636619 * L_13 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_12, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		__this->set_rightEyeGo_7(L_13);
		GameObject_t1113636619 * L_14 = __this->get_leftEyeGo_6();
		NullCheck(L_14);
		GameObject_SetActive_m796801857(L_14, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_15 = __this->get_rightEyeGo_7();
		NullCheck(L_15);
		GameObject_SetActive_m796801857(L_15, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEyeManager::FaceAdded(UnityEngine.XR.iOS.ARFaceAnchor)
extern "C" IL2CPP_METHOD_ATTR void UnityEyeManager_FaceAdded_m743662964 (UnityEyeManager_t3949445033 * __this, ARFaceAnchor_t1844206636 * ___anchorData0, const RuntimeMethod* method)
{
	Pose_t545244865  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Pose_t545244865  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Pose_t545244865  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Pose_t545244865  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		GameObject_t1113636619 * L_0 = __this->get_leftEyeGo_6();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		ARFaceAnchor_t1844206636 * L_2 = ___anchorData0;
		NullCheck(L_2);
		Pose_t545244865  L_3 = ARFaceAnchor_get_leftEyePose_m2262139276(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector3_t3722313464  L_4 = (&V_0)->get_position_0();
		NullCheck(L_1);
		Transform_set_position_m3387557959(L_1, L_4, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_5 = __this->get_leftEyeGo_6();
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = GameObject_get_transform_m1369836730(L_5, /*hidden argument*/NULL);
		ARFaceAnchor_t1844206636 * L_7 = ___anchorData0;
		NullCheck(L_7);
		Pose_t545244865  L_8 = ARFaceAnchor_get_leftEyePose_m2262139276(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		Quaternion_t2301928331  L_9 = (&V_1)->get_rotation_1();
		NullCheck(L_6);
		Transform_set_rotation_m3524318132(L_6, L_9, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_10 = __this->get_rightEyeGo_7();
		NullCheck(L_10);
		Transform_t3600365921 * L_11 = GameObject_get_transform_m1369836730(L_10, /*hidden argument*/NULL);
		ARFaceAnchor_t1844206636 * L_12 = ___anchorData0;
		NullCheck(L_12);
		Pose_t545244865  L_13 = ARFaceAnchor_get_rightEyePose_m1811836275(L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		Vector3_t3722313464  L_14 = (&V_2)->get_position_0();
		NullCheck(L_11);
		Transform_set_position_m3387557959(L_11, L_14, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_15 = __this->get_rightEyeGo_7();
		NullCheck(L_15);
		Transform_t3600365921 * L_16 = GameObject_get_transform_m1369836730(L_15, /*hidden argument*/NULL);
		ARFaceAnchor_t1844206636 * L_17 = ___anchorData0;
		NullCheck(L_17);
		Pose_t545244865  L_18 = ARFaceAnchor_get_rightEyePose_m1811836275(L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		Quaternion_t2301928331  L_19 = (&V_3)->get_rotation_1();
		NullCheck(L_16);
		Transform_set_rotation_m3524318132(L_16, L_19, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_20 = __this->get_leftEyeGo_6();
		NullCheck(L_20);
		GameObject_SetActive_m796801857(L_20, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_21 = __this->get_rightEyeGo_7();
		NullCheck(L_21);
		GameObject_SetActive_m796801857(L_21, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEyeManager::FaceUpdated(UnityEngine.XR.iOS.ARFaceAnchor)
extern "C" IL2CPP_METHOD_ATTR void UnityEyeManager_FaceUpdated_m35923746 (UnityEyeManager_t3949445033 * __this, ARFaceAnchor_t1844206636 * ___anchorData0, const RuntimeMethod* method)
{
	Pose_t545244865  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Pose_t545244865  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Pose_t545244865  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Pose_t545244865  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		GameObject_t1113636619 * L_0 = __this->get_leftEyeGo_6();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		ARFaceAnchor_t1844206636 * L_2 = ___anchorData0;
		NullCheck(L_2);
		Pose_t545244865  L_3 = ARFaceAnchor_get_leftEyePose_m2262139276(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector3_t3722313464  L_4 = (&V_0)->get_position_0();
		NullCheck(L_1);
		Transform_set_position_m3387557959(L_1, L_4, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_5 = __this->get_leftEyeGo_6();
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = GameObject_get_transform_m1369836730(L_5, /*hidden argument*/NULL);
		ARFaceAnchor_t1844206636 * L_7 = ___anchorData0;
		NullCheck(L_7);
		Pose_t545244865  L_8 = ARFaceAnchor_get_leftEyePose_m2262139276(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		Quaternion_t2301928331  L_9 = (&V_1)->get_rotation_1();
		NullCheck(L_6);
		Transform_set_rotation_m3524318132(L_6, L_9, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_10 = __this->get_rightEyeGo_7();
		NullCheck(L_10);
		Transform_t3600365921 * L_11 = GameObject_get_transform_m1369836730(L_10, /*hidden argument*/NULL);
		ARFaceAnchor_t1844206636 * L_12 = ___anchorData0;
		NullCheck(L_12);
		Pose_t545244865  L_13 = ARFaceAnchor_get_rightEyePose_m1811836275(L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		Vector3_t3722313464  L_14 = (&V_2)->get_position_0();
		NullCheck(L_11);
		Transform_set_position_m3387557959(L_11, L_14, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_15 = __this->get_rightEyeGo_7();
		NullCheck(L_15);
		Transform_t3600365921 * L_16 = GameObject_get_transform_m1369836730(L_15, /*hidden argument*/NULL);
		ARFaceAnchor_t1844206636 * L_17 = ___anchorData0;
		NullCheck(L_17);
		Pose_t545244865  L_18 = ARFaceAnchor_get_rightEyePose_m1811836275(L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		Quaternion_t2301928331  L_19 = (&V_3)->get_rotation_1();
		NullCheck(L_16);
		Transform_set_rotation_m3524318132(L_16, L_19, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEyeManager::FaceRemoved(UnityEngine.XR.iOS.ARFaceAnchor)
extern "C" IL2CPP_METHOD_ATTR void UnityEyeManager_FaceRemoved_m678205404 (UnityEyeManager_t3949445033 * __this, ARFaceAnchor_t1844206636 * ___anchorData0, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get_leftEyeGo_6();
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = __this->get_rightEyeGo_7();
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEyeManager::Update()
extern "C" IL2CPP_METHOD_ATTR void UnityEyeManager_Update_m1336641415 (UnityEyeManager_t3949445033 * __this, const RuntimeMethod* method)
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
// System.Void UnityPointCloudExample::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityPointCloudExample__ctor_m3444243678 (UnityPointCloudExample_t3649008995 * __this, const RuntimeMethod* method)
{
	{
		__this->set_numPointsToShow_4(((int32_t)100));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityPointCloudExample::Start()
extern "C" IL2CPP_METHOD_ATTR void UnityPointCloudExample_Start_m4202814548 (UnityPointCloudExample_t3649008995 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityPointCloudExample_Start_m4202814548_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		intptr_t L_0 = (intptr_t)UnityPointCloudExample_ARFrameUpdated_m3531421433_RuntimeMethod_var;
		ARFrameUpdate_t1157215840 * L_1 = (ARFrameUpdate_t1157215840 *)il2cpp_codegen_object_new(ARFrameUpdate_t1157215840_il2cpp_TypeInfo_var);
		ARFrameUpdate__ctor_m3633991724(L_1, __this, (intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_add_ARFrameUpdatedEvent_m3366057771(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_PointCloudPrefab_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_005c;
		}
	}
	{
		List_1_t2585711361 * L_4 = (List_1_t2585711361 *)il2cpp_codegen_object_new(List_1_t2585711361_il2cpp_TypeInfo_var);
		List_1__ctor_m3861397086(L_4, /*hidden argument*/List_1__ctor_m3861397086_RuntimeMethod_var);
		__this->set_pointCloudObjects_6(L_4);
		V_0 = 0;
		goto IL_004e;
	}

IL_0034:
	{
		List_1_t2585711361 * L_5 = __this->get_pointCloudObjects_6();
		GameObject_t1113636619 * L_6 = __this->get_PointCloudPrefab_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_7 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		NullCheck(L_5);
		List_1_Add_m2765963565(L_5, L_7, /*hidden argument*/List_1_Add_m2765963565_RuntimeMethod_var);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_004e:
	{
		int32_t L_9 = V_0;
		uint32_t L_10 = __this->get_numPointsToShow_4();
		if ((((int64_t)(((int64_t)((int64_t)L_9)))) < ((int64_t)(((int64_t)((uint64_t)L_10))))))
		{
			goto IL_0034;
		}
	}

IL_005c:
	{
		return;
	}
}
// System.Void UnityPointCloudExample::ARFrameUpdated(UnityEngine.XR.iOS.UnityARCamera)
extern "C" IL2CPP_METHOD_ATTR void UnityPointCloudExample_ARFrameUpdated_m3531421433 (UnityPointCloudExample_t3649008995 * __this, UnityARCamera_t2069150450  ___camera0, const RuntimeMethod* method)
{
	{
		Vector3U5BU5D_t1718750761* L_0 = (&___camera0)->get_pointCloudData_7();
		__this->set_m_PointCloudData_7(L_0);
		return;
	}
}
// System.Void UnityPointCloudExample::Update()
extern "C" IL2CPP_METHOD_ATTR void UnityPointCloudExample_Update_m3072589646 (UnityPointCloudExample_t3649008995 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityPointCloudExample_Update_m3072589646_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector4_t3319028937  V_1;
	memset(&V_1, 0, sizeof(V_1));
	GameObject_t1113636619 * V_2 = NULL;
	{
		GameObject_t1113636619 * L_0 = __this->get_PointCloudPrefab_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_008c;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_2 = __this->get_m_PointCloudData_7();
		if (!L_2)
		{
			goto IL_008c;
		}
	}
	{
		V_0 = 0;
		goto IL_0070;
	}

IL_0023:
	{
		Vector3U5BU5D_t1718750761* L_3 = __this->get_m_PointCloudData_7();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_5 = Vector4_op_Implicit_m2966035112(NULL /*static, unused*/, (*(Vector3_t3722313464 *)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))), /*hidden argument*/NULL);
		V_1 = L_5;
		List_1_t2585711361 * L_6 = __this->get_pointCloudObjects_6();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		GameObject_t1113636619 * L_8 = List_1_get_Item_m3052194546(L_6, L_7, /*hidden argument*/List_1_get_Item_m3052194546_RuntimeMethod_var);
		V_2 = L_8;
		GameObject_t1113636619 * L_9 = V_2;
		NullCheck(L_9);
		Transform_t3600365921 * L_10 = GameObject_get_transform_m1369836730(L_9, /*hidden argument*/NULL);
		float L_11 = (&V_1)->get_x_1();
		float L_12 = (&V_1)->get_y_2();
		float L_13 = (&V_1)->get_z_3();
		Vector3_t3722313464  L_14;
		memset(&L_14, 0, sizeof(L_14));
		Vector3__ctor_m3353183577((&L_14), L_11, L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_position_m3387557959(L_10, L_14, /*hidden argument*/NULL);
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0070:
	{
		int32_t L_16 = V_0;
		Vector3U5BU5D_t1718750761* L_17 = __this->get_m_PointCloudData_7();
		NullCheck(L_17);
		uint32_t L_18 = __this->get_numPointsToShow_4();
		int64_t L_19 = Math_Min_m2427345610(NULL /*static, unused*/, (((int64_t)((int64_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length))))))), (((int64_t)((uint64_t)L_18))), /*hidden argument*/NULL);
		if ((((int64_t)(((int64_t)((int64_t)L_16)))) < ((int64_t)L_19)))
		{
			goto IL_0023;
		}
	}

IL_008c:
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
// System.Void UpdateWorldMappingStatus::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UpdateWorldMappingStatus__ctor_m1849069329 (UpdateWorldMappingStatus_t2738391865 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UpdateWorldMappingStatus::Start()
extern "C" IL2CPP_METHOD_ATTR void UpdateWorldMappingStatus_Start_m2506491011 (UpdateWorldMappingStatus_t2738391865 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UpdateWorldMappingStatus_Start_m2506491011_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)UpdateWorldMappingStatus_CheckWorldMapStatus_m3083395961_RuntimeMethod_var;
		ARFrameUpdate_t1157215840 * L_1 = (ARFrameUpdate_t1157215840 *)il2cpp_codegen_object_new(ARFrameUpdate_t1157215840_il2cpp_TypeInfo_var);
		ARFrameUpdate__ctor_m3633991724(L_1, __this, (intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_add_ARFrameUpdatedEvent_m3366057771(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UpdateWorldMappingStatus::CheckWorldMapStatus(UnityEngine.XR.iOS.UnityARCamera)
extern "C" IL2CPP_METHOD_ATTR void UpdateWorldMappingStatus_CheckWorldMapStatus_m3083395961 (UpdateWorldMappingStatus_t2738391865 * __this, UnityARCamera_t2069150450  ___cam0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UpdateWorldMappingStatus_CheckWorldMapStatus_m3083395961_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t1901882714 * L_0 = __this->get_text_4();
		int32_t* L_1 = (&___cam0)->get_address_of_worldMappingStatus_8();
		RuntimeObject * L_2 = Box(ARWorldMappingStatus_t1606355445_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		*L_1 = *(int32_t*)UnBox(L_2);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		Text_t1901882714 * L_4 = __this->get_tracking_5();
		int32_t* L_5 = (&___cam0)->get_address_of_trackingState_2();
		RuntimeObject * L_6 = Box(ARTrackingState_t3182235352_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		*L_5 = *(int32_t*)UnBox(L_6);
		int32_t* L_8 = (&___cam0)->get_address_of_trackingReason_3();
		RuntimeObject * L_9 = Box(ARTrackingStateReason_t2348933773_il2cpp_TypeInfo_var, L_8);
		NullCheck(L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		*L_8 = *(int32_t*)UnBox(L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m3755062657(NULL /*static, unused*/, L_7, _stringLiteral3452614528, L_10, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_11);
		return;
	}
}
// System.Void UpdateWorldMappingStatus::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void UpdateWorldMappingStatus_OnDestroy_m1257722125 (UpdateWorldMappingStatus_t2738391865 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UpdateWorldMappingStatus_OnDestroy_m1257722125_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)UpdateWorldMappingStatus_CheckWorldMapStatus_m3083395961_RuntimeMethod_var;
		ARFrameUpdate_t1157215840 * L_1 = (ARFrameUpdate_t1157215840 *)il2cpp_codegen_object_new(ARFrameUpdate_t1157215840_il2cpp_TypeInfo_var);
		ARFrameUpdate__ctor_m3633991724(L_1, __this, (intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_remove_ARFrameUpdatedEvent_m772523965(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
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
// System.Void VideoFormatButton::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VideoFormatButton__ctor_m7407655 (VideoFormatButton_t1937817916 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VideoFormatButton::add_FormatButtonPressedEvent(VideoFormatButton/VideoFormatButtonPressed)
extern "C" IL2CPP_METHOD_ATTR void VideoFormatButton_add_FormatButtonPressedEvent_m1863116585 (RuntimeObject * __this /* static, unused */, VideoFormatButtonPressed_t1187798507 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatButton_add_FormatButtonPressedEvent_m1863116585_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VideoFormatButtonPressed_t1187798507 * V_0 = NULL;
	VideoFormatButtonPressed_t1187798507 * V_1 = NULL;
	{
		VideoFormatButtonPressed_t1187798507 * L_0 = ((VideoFormatButton_t1937817916_StaticFields*)il2cpp_codegen_static_fields_for(VideoFormatButton_t1937817916_il2cpp_TypeInfo_var))->get_FormatButtonPressedEvent_6();
		V_0 = L_0;
	}

IL_0006:
	{
		VideoFormatButtonPressed_t1187798507 * L_1 = V_0;
		V_1 = L_1;
		VideoFormatButtonPressed_t1187798507 * L_2 = V_1;
		VideoFormatButtonPressed_t1187798507 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		VideoFormatButtonPressed_t1187798507 * L_5 = V_0;
		VideoFormatButtonPressed_t1187798507 * L_6 = InterlockedCompareExchangeImpl<VideoFormatButtonPressed_t1187798507 *>((VideoFormatButtonPressed_t1187798507 **)(((VideoFormatButton_t1937817916_StaticFields*)il2cpp_codegen_static_fields_for(VideoFormatButton_t1937817916_il2cpp_TypeInfo_var))->get_address_of_FormatButtonPressedEvent_6()), ((VideoFormatButtonPressed_t1187798507 *)CastclassSealed((RuntimeObject*)L_4, VideoFormatButtonPressed_t1187798507_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		VideoFormatButtonPressed_t1187798507 * L_7 = V_0;
		VideoFormatButtonPressed_t1187798507 * L_8 = V_1;
		if ((!(((RuntimeObject*)(VideoFormatButtonPressed_t1187798507 *)L_7) == ((RuntimeObject*)(VideoFormatButtonPressed_t1187798507 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void VideoFormatButton::remove_FormatButtonPressedEvent(VideoFormatButton/VideoFormatButtonPressed)
extern "C" IL2CPP_METHOD_ATTR void VideoFormatButton_remove_FormatButtonPressedEvent_m3255418780 (RuntimeObject * __this /* static, unused */, VideoFormatButtonPressed_t1187798507 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatButton_remove_FormatButtonPressedEvent_m3255418780_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VideoFormatButtonPressed_t1187798507 * V_0 = NULL;
	VideoFormatButtonPressed_t1187798507 * V_1 = NULL;
	{
		VideoFormatButtonPressed_t1187798507 * L_0 = ((VideoFormatButton_t1937817916_StaticFields*)il2cpp_codegen_static_fields_for(VideoFormatButton_t1937817916_il2cpp_TypeInfo_var))->get_FormatButtonPressedEvent_6();
		V_0 = L_0;
	}

IL_0006:
	{
		VideoFormatButtonPressed_t1187798507 * L_1 = V_0;
		V_1 = L_1;
		VideoFormatButtonPressed_t1187798507 * L_2 = V_1;
		VideoFormatButtonPressed_t1187798507 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		VideoFormatButtonPressed_t1187798507 * L_5 = V_0;
		VideoFormatButtonPressed_t1187798507 * L_6 = InterlockedCompareExchangeImpl<VideoFormatButtonPressed_t1187798507 *>((VideoFormatButtonPressed_t1187798507 **)(((VideoFormatButton_t1937817916_StaticFields*)il2cpp_codegen_static_fields_for(VideoFormatButton_t1937817916_il2cpp_TypeInfo_var))->get_address_of_FormatButtonPressedEvent_6()), ((VideoFormatButtonPressed_t1187798507 *)CastclassSealed((RuntimeObject*)L_4, VideoFormatButtonPressed_t1187798507_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		VideoFormatButtonPressed_t1187798507 * L_7 = V_0;
		VideoFormatButtonPressed_t1187798507 * L_8 = V_1;
		if ((!(((RuntimeObject*)(VideoFormatButtonPressed_t1187798507 *)L_7) == ((RuntimeObject*)(VideoFormatButtonPressed_t1187798507 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void VideoFormatButton::Populate(UnityEngine.XR.iOS.UnityARVideoFormat)
extern "C" IL2CPP_METHOD_ATTR void VideoFormatButton_Populate_m915370135 (VideoFormatButton_t1937817916 * __this, UnityARVideoFormat_t1944454781  ___videoFormat0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatButton_Populate_m915370135_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityARVideoFormat_t1944454781  L_0 = ___videoFormat0;
		__this->set_arVideoFormat_5(L_0);
		Text_t1901882714 * L_1 = __this->get_videoFormatDescription_4();
		ObjectU5BU5D_t2843939325* L_2 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t2843939325* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral51204818);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral51204818);
		ObjectU5BU5D_t2843939325* L_4 = L_3;
		float L_5 = (&___videoFormat0)->get_imageResolutionWidth_1();
		float L_6 = L_5;
		RuntimeObject * L_7 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_4;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral3452614616);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3452614616);
		ObjectU5BU5D_t2843939325* L_9 = L_8;
		float L_10 = (&___videoFormat0)->get_imageResolutionHeight_2();
		float L_11 = L_10;
		RuntimeObject * L_12 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_12);
		ObjectU5BU5D_t2843939325* L_13 = L_9;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral1652116954);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral1652116954);
		ObjectU5BU5D_t2843939325* L_14 = L_13;
		int32_t L_15 = (&___videoFormat0)->get_framesPerSecond_3();
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_17);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = String_Concat_m2971454694(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_18);
		return;
	}
}
// System.Void VideoFormatButton::ButtonPressed()
extern "C" IL2CPP_METHOD_ATTR void VideoFormatButton_ButtonPressed_m1715857364 (VideoFormatButton_t1937817916 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatButton_ButtonPressed_m1715857364_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VideoFormatButtonPressed_t1187798507 * L_0 = ((VideoFormatButton_t1937817916_StaticFields*)il2cpp_codegen_static_fields_for(VideoFormatButton_t1937817916_il2cpp_TypeInfo_var))->get_FormatButtonPressedEvent_6();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		VideoFormatButtonPressed_t1187798507 * L_1 = ((VideoFormatButton_t1937817916_StaticFields*)il2cpp_codegen_static_fields_for(VideoFormatButton_t1937817916_il2cpp_TypeInfo_var))->get_FormatButtonPressedEvent_6();
		UnityARVideoFormat_t1944454781  L_2 = __this->get_arVideoFormat_5();
		NullCheck(L_1);
		VideoFormatButtonPressed_Invoke_m3826882959(L_1, L_2, /*hidden argument*/NULL);
	}

IL_001a:
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
extern "C"  void DelegatePInvokeWrapper_VideoFormatButtonPressed_t1187798507 (VideoFormatButtonPressed_t1187798507 * __this, UnityARVideoFormat_t1944454781  ___videoFormat0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(UnityARVideoFormat_t1944454781 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___videoFormat0);

}
// System.Void VideoFormatButton/VideoFormatButtonPressed::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void VideoFormatButtonPressed__ctor_m1152072860 (VideoFormatButtonPressed_t1187798507 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void VideoFormatButton/VideoFormatButtonPressed::Invoke(UnityEngine.XR.iOS.UnityARVideoFormat)
extern "C" IL2CPP_METHOD_ATTR void VideoFormatButtonPressed_Invoke_m3826882959 (VideoFormatButtonPressed_t1187798507 * __this, UnityARVideoFormat_t1944454781  ___videoFormat0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		VideoFormatButtonPressed_Invoke_m3826882959((VideoFormatButtonPressed_t1187798507 *)__this->get_prev_9(), ___videoFormat0, method);
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
				typedef void (*FunctionPointerType) (RuntimeObject *, UnityARVideoFormat_t1944454781 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___videoFormat0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, UnityARVideoFormat_t1944454781 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___videoFormat0, targetMethod);
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
						GenericInterfaceActionInvoker1< UnityARVideoFormat_t1944454781  >::Invoke(targetMethod, targetThis, ___videoFormat0);
					else
						GenericVirtActionInvoker1< UnityARVideoFormat_t1944454781  >::Invoke(targetMethod, targetThis, ___videoFormat0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< UnityARVideoFormat_t1944454781  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___videoFormat0);
					else
						VirtActionInvoker1< UnityARVideoFormat_t1944454781  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___videoFormat0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UnityARVideoFormat_t1944454781 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___videoFormat0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult VideoFormatButton/VideoFormatButtonPressed::BeginInvoke(UnityEngine.XR.iOS.UnityARVideoFormat,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* VideoFormatButtonPressed_BeginInvoke_m3331672980 (VideoFormatButtonPressed_t1187798507 * __this, UnityARVideoFormat_t1944454781  ___videoFormat0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatButtonPressed_BeginInvoke_m3331672980_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UnityARVideoFormat_t1944454781_il2cpp_TypeInfo_var, &___videoFormat0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void VideoFormatButton/VideoFormatButtonPressed::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void VideoFormatButtonPressed_EndInvoke_m419070761 (VideoFormatButtonPressed_t1187798507 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void VideoFormatsExample::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VideoFormatsExample__ctor_m143854614 (VideoFormatsExample_t2303262312 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VideoFormatsExample::Start()
extern "C" IL2CPP_METHOD_ATTR void VideoFormatsExample_Start_m1615238214 (VideoFormatsExample_t2303262312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatsExample_Start_m1615238214_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)VideoFormatsExample_ExampletButtonPressed_m2588664126_RuntimeMethod_var;
		VideoFormatButtonPressed_t1187798507 * L_1 = (VideoFormatButtonPressed_t1187798507 *)il2cpp_codegen_object_new(VideoFormatButtonPressed_t1187798507_il2cpp_TypeInfo_var);
		VideoFormatButtonPressed__ctor_m1152072860(L_1, __this, (intptr_t)L_0, /*hidden argument*/NULL);
		VideoFormatButton_add_FormatButtonPressedEvent_m1863116585(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		VideoFormatsExample_PopulateVideoFormatButtons_m595526008(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VideoFormatsExample::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void VideoFormatsExample_OnDestroy_m541603283 (VideoFormatsExample_t2303262312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatsExample_OnDestroy_m541603283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)VideoFormatsExample_ExampletButtonPressed_m2588664126_RuntimeMethod_var;
		VideoFormatButtonPressed_t1187798507 * L_1 = (VideoFormatButtonPressed_t1187798507 *)il2cpp_codegen_object_new(VideoFormatButtonPressed_t1187798507_il2cpp_TypeInfo_var);
		VideoFormatButtonPressed__ctor_m1152072860(L_1, __this, (intptr_t)L_0, /*hidden argument*/NULL);
		VideoFormatButton_remove_FormatButtonPressedEvent_m3255418780(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VideoFormatsExample::PopulateVideoFormatButtons()
extern "C" IL2CPP_METHOD_ATTR void VideoFormatsExample_PopulateVideoFormatButtons_m595526008 (VideoFormatsExample_t2303262312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatsExample_PopulateVideoFormatButtons_m595526008_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityARVideoFormat_t1944454781  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Enumerator_t1010806104  V_1;
	memset(&V_1, 0, sizeof(V_1));
	GameObject_t1113636619 * V_2 = NULL;
	VideoFormatButton_t1937817916 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t3416529523 * L_0 = UnityARVideoFormat_SupportedVideoFormats_m1522157695(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Enumerator_t1010806104  L_1 = List_1_GetEnumerator_m3413760873(L_0, /*hidden argument*/List_1_GetEnumerator_m3413760873_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0044;
		}

IL_0010:
		{
			UnityARVideoFormat_t1944454781  L_2 = Enumerator_get_Current_m3655906576((Enumerator_t1010806104 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m3655906576_RuntimeMethod_var);
			V_0 = L_2;
			GameObject_t1113636619 * L_3 = __this->get_videoFormatButtonPrefab_5();
			Transform_t3600365921 * L_4 = __this->get_formatsParent_4();
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			GameObject_t1113636619 * L_5 = Object_Instantiate_TisGameObject_t1113636619_m3215236302(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3215236302_RuntimeMethod_var);
			V_2 = L_5;
			GameObject_t1113636619 * L_6 = V_2;
			NullCheck(L_6);
			VideoFormatButton_t1937817916 * L_7 = GameObject_GetComponent_TisVideoFormatButton_t1937817916_m1994409976(L_6, /*hidden argument*/GameObject_GetComponent_TisVideoFormatButton_t1937817916_m1994409976_RuntimeMethod_var);
			V_3 = L_7;
			VideoFormatButton_t1937817916 * L_8 = V_3;
			bool L_9 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_8, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_0044;
			}
		}

IL_003d:
		{
			VideoFormatButton_t1937817916 * L_10 = V_3;
			UnityARVideoFormat_t1944454781  L_11 = V_0;
			NullCheck(L_10);
			VideoFormatButton_Populate_m915370135(L_10, L_11, /*hidden argument*/NULL);
		}

IL_0044:
		{
			bool L_12 = Enumerator_MoveNext_m2987439075((Enumerator_t1010806104 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2987439075_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0010;
			}
		}

IL_0050:
		{
			IL2CPP_LEAVE(0x63, FINALLY_0055);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0055;
	}

FINALLY_0055:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m510309855((Enumerator_t1010806104 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m510309855_RuntimeMethod_var);
		IL2CPP_END_FINALLY(85)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(85)
	{
		IL2CPP_JUMP_TBL(0x63, IL_0063)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0063:
	{
		return;
	}
}
// System.Void VideoFormatsExample::ExampletButtonPressed(UnityEngine.XR.iOS.UnityARVideoFormat)
extern "C" IL2CPP_METHOD_ATTR void VideoFormatsExample_ExampletButtonPressed_m2588664126 (VideoFormatsExample_t2303262312 * __this, UnityARVideoFormat_t1944454781  ___videoFormat0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatsExample_ExampletButtonPressed_m2588664126_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityARSessionNativeInterface_t3929719369 * V_0 = NULL;
	ARKitWorldTrackingSessionConfiguration_t273386347  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_t3929719369 * L_0 = UnityARSessionNativeInterface_GetARSessionNativeInterface_m1118592565(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		il2cpp_codegen_initobj((&V_1), sizeof(ARKitWorldTrackingSessionConfiguration_t273386347 ));
		bool L_1 = ARKitWorldTrackingSessionConfiguration_get_IsSupported_m4234602811((ARKitWorldTrackingSessionConfiguration_t273386347 *)(&V_1), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0066;
		}
	}
	{
		(&V_1)->set_planeDetection_1(3);
		(&V_1)->set_alignment_0(0);
		(&V_1)->set_getPointCloudData_2((bool)1);
		(&V_1)->set_enableLightEstimation_3((bool)1);
		(&V_1)->set_enableAutoFocus_4((bool)1);
		intptr_t L_2 = (&___videoFormat0)->get_videoFormatPtr_0();
		(&V_1)->set_videoFormat_7((intptr_t)L_2);
		int32_t L_3 = (&___videoFormat0)->get_framesPerSecond_3();
		Application_set_targetFrameRate_m3682352535(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_2 = 3;
		UnityARSessionNativeInterface_t3929719369 * L_4 = V_0;
		ARKitWorldTrackingSessionConfiguration_t273386347  L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_4);
		UnityARSessionNativeInterface_RunWithConfigAndOptions_m2136170177(L_4, L_5, L_6, /*hidden argument*/NULL);
	}

IL_0066:
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
// System.Void VirtualImageController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VirtualImageController__ctor_m3898288261 (VirtualImageController_t1421167262 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VirtualImageController::Awake()
extern "C" IL2CPP_METHOD_ATTR void VirtualImageController_Awake_m3463709440 (VirtualImageController_t1421167262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualImageController_Awake_m3463709440_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		GameObject_t1113636619 * L_0 = __this->get_Model_4();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_localScale_m129152068(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_x_2();
		__this->set_focal_13(((float)il2cpp_codegen_multiply((float)(0.15f), (float)L_3)));
		ModelController_t213260968 * L_4 = __this->get_ModelController_10();
		intptr_t L_5 = (intptr_t)VirtualImageController_HideLineAndVF_m1404605849_RuntimeMethod_var;
		ResetHandler_t86549611 * L_6 = (ResetHandler_t86549611 *)il2cpp_codegen_object_new(ResetHandler_t86549611_il2cpp_TypeInfo_var);
		ResetHandler__ctor_m290481212(L_6, __this, (intptr_t)L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ModelController_add_ResetHandlerEvent_m765362552(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VirtualImageController::Update()
extern "C" IL2CPP_METHOD_ATTR void VirtualImageController_Update_m3074897781 (VirtualImageController_t1421167262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualImageController_Update_m3074897781_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		GameObject_t1113636619 * L_0 = __this->get_Model_4();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_localScale_m129152068(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_x_2();
		__this->set_focal_13(((float)il2cpp_codegen_multiply((float)(0.15f), (float)L_3)));
		GameObject_t1113636619 * L_4 = __this->get_Model_4();
		NullCheck(L_4);
		bool L_5 = GameObject_get_activeSelf_m1767405923(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0146;
		}
	}
	{
		GameObject_t1113636619 * L_6 = __this->get_Button_12();
		NullCheck(L_6);
		GameObject_SetActive_m796801857(L_6, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_7 = __this->get_Glass_6();
		NullCheck(L_7);
		Transform_t3600365921 * L_8 = GameObject_get_transform_m1369836730(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t3722313464  L_9 = Transform_get_position_m36019626(L_8, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_10 = __this->get_RF_5();
		NullCheck(L_10);
		Transform_t3600365921 * L_11 = GameObject_get_transform_m1369836730(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t3722313464  L_12 = Transform_get_position_m36019626(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_13 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_9, L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		float L_14 = Vector3_get_magnitude_m27958459((Vector3_t3722313464 *)(&V_2), /*hidden argument*/NULL);
		V_1 = L_14;
		float L_15 = __this->get_focal_13();
		float L_16 = V_1;
		float L_17 = __this->get_focal_13();
		__this->set_scale_14(((float)((float)L_15/(float)((float)il2cpp_codegen_subtract((float)L_16, (float)L_17)))));
		GameObject_t1113636619 * L_18 = __this->get_VF_7();
		NullCheck(L_18);
		Transform_t3600365921 * L_19 = GameObject_get_transform_m1369836730(L_18, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_20 = __this->get_Glass_6();
		NullCheck(L_20);
		Transform_t3600365921 * L_21 = GameObject_get_transform_m1369836730(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_t3722313464  L_22 = Transform_get_position_m36019626(L_21, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_23 = __this->get_Glass_6();
		NullCheck(L_23);
		Transform_t3600365921 * L_24 = GameObject_get_transform_m1369836730(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_t3722313464  L_25 = Transform_get_position_m36019626(L_24, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_26 = __this->get_RF_5();
		NullCheck(L_26);
		Transform_t3600365921 * L_27 = GameObject_get_transform_m1369836730(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_t3722313464  L_28 = Transform_get_position_m36019626(L_27, /*hidden argument*/NULL);
		Vector3_t3722313464  L_29 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_25, L_28, /*hidden argument*/NULL);
		V_3 = L_29;
		Vector3_t3722313464  L_30 = Vector3_get_normalized_m2454957984((Vector3_t3722313464 *)(&V_3), /*hidden argument*/NULL);
		float L_31 = V_1;
		Vector3_t3722313464  L_32 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/NULL);
		float L_33 = __this->get_scale_14();
		Vector3_t3722313464  L_34 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_32, L_33, /*hidden argument*/NULL);
		Vector3_t3722313464  L_35 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_22, L_34, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_position_m3387557959(L_19, L_35, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_36 = __this->get_VF_7();
		NullCheck(L_36);
		Transform_t3600365921 * L_37 = GameObject_get_transform_m1369836730(L_36, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_38 = __this->get_RF_5();
		NullCheck(L_38);
		Transform_t3600365921 * L_39 = GameObject_get_transform_m1369836730(L_38, /*hidden argument*/NULL);
		NullCheck(L_39);
		Vector3_t3722313464  L_40 = Transform_get_localScale_m129152068(L_39, /*hidden argument*/NULL);
		float L_41 = __this->get_scale_14();
		Vector3_t3722313464  L_42 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_40, L_41, /*hidden argument*/NULL);
		NullCheck(L_37);
		Transform_set_localScale_m3053443106(L_37, L_42, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_43 = __this->get_VF_7();
		NullCheck(L_43);
		bool L_44 = GameObject_get_activeSelf_m1767405923(L_43, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_0141;
		}
	}
	{
		GameObject_t1113636619 * L_45 = __this->get_HorizontalLine_8();
		NullCheck(L_45);
		DrawLines_t4192295860 * L_46 = GameObject_GetComponent_TisDrawLines_t4192295860_m2352987869(L_45, /*hidden argument*/GameObject_GetComponent_TisDrawLines_t4192295860_m2352987869_RuntimeMethod_var);
		NullCheck(L_46);
		DrawLines_DrawHorizontalLine_m937329354(L_46, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_47 = __this->get_LightLine_9();
		NullCheck(L_47);
		DrawLines_t4192295860 * L_48 = GameObject_GetComponent_TisDrawLines_t4192295860_m2352987869(L_47, /*hidden argument*/GameObject_GetComponent_TisDrawLines_t4192295860_m2352987869_RuntimeMethod_var);
		NullCheck(L_48);
		DrawLines_DrawLight_m385049073(L_48, /*hidden argument*/NULL);
	}

IL_0141:
	{
		goto IL_0152;
	}

IL_0146:
	{
		GameObject_t1113636619 * L_49 = __this->get_Button_12();
		NullCheck(L_49);
		GameObject_SetActive_m796801857(L_49, (bool)0, /*hidden argument*/NULL);
	}

IL_0152:
	{
		return;
	}
}
// System.Void VirtualImageController::ShowImageOrNot()
extern "C" IL2CPP_METHOD_ATTR void VirtualImageController_ShowImageOrNot_m3944985682 (VirtualImageController_t1421167262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualImageController_ShowImageOrNot_m3944985682_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_VF_7();
		NullCheck(L_0);
		bool L_1 = GameObject_get_activeSelf_m1767405923(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		Text_t1901882714 * L_2 = __this->get_text_11();
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteral3005588141);
		VirtualImageController_HideLineAndVF_m1404605849(__this, /*hidden argument*/NULL);
		goto IL_0041;
	}

IL_002b:
	{
		Text_t1901882714 * L_3 = __this->get_text_11();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteral3792478507);
		VirtualImageController_ShowLineAndVF_m2955396186(__this, /*hidden argument*/NULL);
	}

IL_0041:
	{
		return;
	}
}
// System.Void VirtualImageController::HideLineAndVF()
extern "C" IL2CPP_METHOD_ATTR void VirtualImageController_HideLineAndVF_m1404605849 (VirtualImageController_t1421167262 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get_VF_7();
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = __this->get_HorizontalLine_8();
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_LightLine_9();
		NullCheck(L_2);
		GameObject_SetActive_m796801857(L_2, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VirtualImageController::ShowLineAndVF()
extern "C" IL2CPP_METHOD_ATTR void VirtualImageController_ShowLineAndVF_m2955396186 (VirtualImageController_t1421167262 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get_VF_7();
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = __this->get_HorizontalLine_8();
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_LightLine_9();
		NullCheck(L_2);
		GameObject_SetActive_m796801857(L_2, (bool)1, /*hidden argument*/NULL);
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
// System.Void Visible::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Visible__ctor_m1313863213 (Visible_t788833082 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Visible::Start()
extern "C" IL2CPP_METHOD_ATTR void Visible_Start_m3671297619 (Visible_t788833082 * __this, const RuntimeMethod* method)
{
	{
		__this->set_visable_4((bool)0);
		return;
	}
}
// System.Void Visible::OnClick()
extern "C" IL2CPP_METHOD_ATTR void Visible_OnClick_m1437255289 (Visible_t788833082 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Visible_OnClick_m1437255289_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_visable_4();
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		CanvasGroup_t4083511760 * L_1 = Component_GetComponent_TisCanvasGroup_t4083511760_m1030459026(__this, /*hidden argument*/Component_GetComponent_TisCanvasGroup_t4083511760_m1030459026_RuntimeMethod_var);
		NullCheck(L_1);
		CanvasGroup_set_alpha_m4032573(L_1, (0.0f), /*hidden argument*/NULL);
		CanvasGroup_t4083511760 * L_2 = Component_GetComponent_TisCanvasGroup_t4083511760_m1030459026(__this, /*hidden argument*/Component_GetComponent_TisCanvasGroup_t4083511760_m1030459026_RuntimeMethod_var);
		NullCheck(L_2);
		CanvasGroup_set_interactable_m1698617177(L_2, (bool)0, /*hidden argument*/NULL);
		CanvasGroup_t4083511760 * L_3 = Component_GetComponent_TisCanvasGroup_t4083511760_m1030459026(__this, /*hidden argument*/Component_GetComponent_TisCanvasGroup_t4083511760_m1030459026_RuntimeMethod_var);
		NullCheck(L_3);
		CanvasGroup_set_blocksRaycasts_m3675023212(L_3, (bool)0, /*hidden argument*/NULL);
		__this->set_visable_4((bool)0);
		goto IL_006e;
	}

IL_003f:
	{
		CanvasGroup_t4083511760 * L_4 = Component_GetComponent_TisCanvasGroup_t4083511760_m1030459026(__this, /*hidden argument*/Component_GetComponent_TisCanvasGroup_t4083511760_m1030459026_RuntimeMethod_var);
		NullCheck(L_4);
		CanvasGroup_set_alpha_m4032573(L_4, (1.0f), /*hidden argument*/NULL);
		CanvasGroup_t4083511760 * L_5 = Component_GetComponent_TisCanvasGroup_t4083511760_m1030459026(__this, /*hidden argument*/Component_GetComponent_TisCanvasGroup_t4083511760_m1030459026_RuntimeMethod_var);
		NullCheck(L_5);
		CanvasGroup_set_interactable_m1698617177(L_5, (bool)1, /*hidden argument*/NULL);
		CanvasGroup_t4083511760 * L_6 = Component_GetComponent_TisCanvasGroup_t4083511760_m1030459026(__this, /*hidden argument*/Component_GetComponent_TisCanvasGroup_t4083511760_m1030459026_RuntimeMethod_var);
		NullCheck(L_6);
		CanvasGroup_set_blocksRaycasts_m3675023212(L_6, (bool)1, /*hidden argument*/NULL);
		__this->set_visable_4((bool)1);
	}

IL_006e:
	{
		return;
	}
}
// System.Void Visible::Update()
extern "C" IL2CPP_METHOD_ATTR void Visible_Update_m261057091 (Visible_t788833082 * __this, const RuntimeMethod* method)
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
// System.Void WorldMapManager::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WorldMapManager__ctor_m4129481033 (WorldMapManager_t2538599596 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WorldMapManager::Start()
extern "C" IL2CPP_METHOD_ATTR void WorldMapManager_Start_m1381697079 (WorldMapManager_t2538599596 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldMapManager_Start_m1381697079_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)WorldMapManager_OnFrameUpdate_m3236777077_RuntimeMethod_var;
		ARFrameUpdate_t1157215840 * L_1 = (ARFrameUpdate_t1157215840 *)il2cpp_codegen_object_new(ARFrameUpdate_t1157215840_il2cpp_TypeInfo_var);
		ARFrameUpdate__ctor_m3633991724(L_1, __this, (intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_add_ARFrameUpdatedEvent_m3366057771(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WorldMapManager::OnFrameUpdate(UnityEngine.XR.iOS.UnityARCamera)
extern "C" IL2CPP_METHOD_ATTR void WorldMapManager_OnFrameUpdate_m3236777077 (WorldMapManager_t2538599596 * __this, UnityARCamera_t2069150450  ___arCamera0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldMapManager_OnFrameUpdate_m3236777077_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (&___arCamera0)->get_trackingReason_3();
		int32_t L_1 = __this->get_m_LastReason_7();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0078;
		}
	}
	{
		Application_SetStackTraceLogType_m956885415(NULL /*static, unused*/, 3, 0, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_2 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_3 = L_2;
		UnityARMatrix4x4_t4073345847 * L_4 = (&___arCamera0)->get_address_of_worldTransform_0();
		Vector4_t3319028937  L_5 = L_4->get_column3_3();
		Vector4_t3319028937  L_6 = L_5;
		RuntimeObject * L_7 = Box(Vector4_t3319028937_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_7);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogFormat_m309087137(NULL /*static, unused*/, _stringLiteral539891790, L_3, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_8 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_9 = L_8;
		int32_t L_10 = (&___arCamera0)->get_trackingState_2();
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(ARTrackingState_t3182235352_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_12);
		ObjectU5BU5D_t2843939325* L_13 = L_9;
		int32_t L_14 = (&___arCamera0)->get_trackingReason_3();
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(ARTrackingStateReason_t2348933773_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_16);
		Debug_LogFormat_m309087137(NULL /*static, unused*/, _stringLiteral809606867, L_13, /*hidden argument*/NULL);
		int32_t L_17 = (&___arCamera0)->get_trackingReason_3();
		__this->set_m_LastReason_7(L_17);
	}

IL_0078:
	{
		return;
	}
}
// UnityEngine.XR.iOS.UnityARSessionNativeInterface WorldMapManager::get_session()
extern "C" IL2CPP_METHOD_ATTR UnityARSessionNativeInterface_t3929719369 * WorldMapManager_get_session_m4054597902 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldMapManager_get_session_m4054597902_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_t3929719369 * L_0 = UnityARSessionNativeInterface_GetARSessionNativeInterface_m1118592565(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String WorldMapManager::get_path()
extern "C" IL2CPP_METHOD_ATTR String_t* WorldMapManager_get_path_m263249698 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldMapManager_get_path_m263249698_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Application_get_persistentDataPath_m1428108154(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_1 = Path_Combine_m3389272516(NULL /*static, unused*/, L_0, _stringLiteral2159623334, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void WorldMapManager::OnWorldMap(UnityEngine.XR.iOS.ARWorldMap)
extern "C" IL2CPP_METHOD_ATTR void WorldMapManager_OnWorldMap_m528558470 (WorldMapManager_t2538599596 * __this, ARWorldMap_t2240790807 * ___worldMap0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldMapManager_OnWorldMap_m528558470_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ARWorldMap_t2240790807 * L_0 = ___worldMap0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		ARWorldMap_t2240790807 * L_1 = ___worldMap0;
		String_t* L_2 = WorldMapManager_get_path_m263249698(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		ARWorldMap_Save_m696239647(L_1, L_2, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_3 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_4 = L_3;
		String_t* L_5 = WorldMapManager_get_path_m263249698(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogFormat_m309087137(NULL /*static, unused*/, _stringLiteral3515884654, L_4, /*hidden argument*/NULL);
	}

IL_002a:
	{
		return;
	}
}
// System.Void WorldMapManager::Save()
extern "C" IL2CPP_METHOD_ATTR void WorldMapManager_Save_m1685066494 (WorldMapManager_t2538599596 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldMapManager_Save_m1685066494_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityARSessionNativeInterface_t3929719369 * L_0 = WorldMapManager_get_session_m4054597902(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_1 = (intptr_t)WorldMapManager_OnWorldMap_m528558470_RuntimeMethod_var;
		Action_1_t2413258402 * L_2 = (Action_1_t2413258402 *)il2cpp_codegen_object_new(Action_1_t2413258402_il2cpp_TypeInfo_var);
		Action_1__ctor_m941087542(L_2, __this, (intptr_t)L_1, /*hidden argument*/Action_1__ctor_m941087542_RuntimeMethod_var);
		NullCheck(L_0);
		UnityARSessionNativeInterface_GetCurrentWorldMapAsync_m1688705226(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WorldMapManager::Load()
extern "C" IL2CPP_METHOD_ATTR void WorldMapManager_Load_m1471745247 (WorldMapManager_t2538599596 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldMapManager_Load_m1471745247_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARWorldMap_t2240790807 * V_0 = NULL;
	ARKitWorldTrackingSessionConfiguration_t273386347  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		String_t* L_2 = WorldMapManager_get_path_m263249698(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogFormat_m309087137(NULL /*static, unused*/, _stringLiteral2128525251, L_1, /*hidden argument*/NULL);
		String_t* L_3 = WorldMapManager_get_path_m263249698(NULL /*static, unused*/, /*hidden argument*/NULL);
		ARWorldMap_t2240790807 * L_4 = ARWorldMap_Load_m229573624(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		ARWorldMap_t2240790807 * L_5 = V_0;
		if (!L_5)
		{
			goto IL_008e;
		}
	}
	{
		ARWorldMap_t2240790807 * L_6 = V_0;
		__this->set_m_LoadedMap_5(L_6);
		ObjectU5BU5D_t2843939325* L_7 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_8 = L_7;
		ARWorldMap_t2240790807 * L_9 = V_0;
		NullCheck(L_9);
		Vector3_t3722313464  L_10 = ARWorldMap_get_center_m2261591742(L_9, /*hidden argument*/NULL);
		Vector3_t3722313464  L_11 = L_10;
		RuntimeObject * L_12 = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_12);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_12);
		ObjectU5BU5D_t2843939325* L_13 = L_8;
		ARWorldMap_t2240790807 * L_14 = V_0;
		NullCheck(L_14);
		Vector3_t3722313464  L_15 = ARWorldMap_get_extent_m815776976(L_14, /*hidden argument*/NULL);
		Vector3_t3722313464  L_16 = L_15;
		RuntimeObject * L_17 = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_17);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_17);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogFormat_m309087137(NULL /*static, unused*/, _stringLiteral3573715958, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_set_ARSessionShouldAttemptRelocalization_m3516918436(NULL /*static, unused*/, (bool)1, /*hidden argument*/NULL);
		UnityARCameraManager_t4002280589 * L_18 = __this->get_m_ARCameraManager_4();
		NullCheck(L_18);
		ARKitWorldTrackingSessionConfiguration_t273386347  L_19 = UnityARCameraManager_get_sessionConfiguration_m3942467652(L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		ARWorldMap_t2240790807 * L_20 = V_0;
		ARKitWorldTrackingSessionConfiguration_set_worldMap_m722344241((ARKitWorldTrackingSessionConfiguration_t273386347 *)(&V_1), L_20, /*hidden argument*/NULL);
		V_2 = 3;
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4108509802, /*hidden argument*/NULL);
		UnityARSessionNativeInterface_t3929719369 * L_21 = WorldMapManager_get_session_m4054597902(NULL /*static, unused*/, /*hidden argument*/NULL);
		ARKitWorldTrackingSessionConfiguration_t273386347  L_22 = V_1;
		int32_t L_23 = V_2;
		NullCheck(L_21);
		UnityARSessionNativeInterface_RunWithConfigAndOptions_m2136170177(L_21, L_22, L_23, /*hidden argument*/NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Void WorldMapManager::OnWorldMapSerialized(UnityEngine.XR.iOS.ARWorldMap)
extern "C" IL2CPP_METHOD_ATTR void WorldMapManager_OnWorldMapSerialized_m286052464 (WorldMapManager_t2538599596 * __this, ARWorldMap_t2240790807 * ___worldMap0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldMapManager_OnWorldMapSerialized_m286052464_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ARWorldMap_t2240790807 * L_0 = ___worldMap0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		ARWorldMap_t2240790807 * L_1 = ___worldMap0;
		serializableARWorldMap_t2514323794 * L_2 = serializableARWorldMap_op_Implicit_m1798102707(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->set_serializedWorldMap_6(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3723103738, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void WorldMapManager::SaveSerialized()
extern "C" IL2CPP_METHOD_ATTR void WorldMapManager_SaveSerialized_m1057740694 (WorldMapManager_t2538599596 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldMapManager_SaveSerialized_m1057740694_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityARSessionNativeInterface_t3929719369 * L_0 = WorldMapManager_get_session_m4054597902(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_1 = (intptr_t)WorldMapManager_OnWorldMapSerialized_m286052464_RuntimeMethod_var;
		Action_1_t2413258402 * L_2 = (Action_1_t2413258402 *)il2cpp_codegen_object_new(Action_1_t2413258402_il2cpp_TypeInfo_var);
		Action_1__ctor_m941087542(L_2, __this, (intptr_t)L_1, /*hidden argument*/Action_1__ctor_m941087542_RuntimeMethod_var);
		NullCheck(L_0);
		UnityARSessionNativeInterface_GetCurrentWorldMapAsync_m1688705226(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WorldMapManager::LoadSerialized()
extern "C" IL2CPP_METHOD_ATTR void WorldMapManager_LoadSerialized_m3529669931 (WorldMapManager_t2538599596 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldMapManager_LoadSerialized_m3529669931_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARWorldMap_t2240790807 * V_0 = NULL;
	ARKitWorldTrackingSessionConfiguration_t273386347  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3550324993, /*hidden argument*/NULL);
		serializableARWorldMap_t2514323794 * L_0 = __this->get_serializedWorldMap_6();
		ARWorldMap_t2240790807 * L_1 = serializableARWorldMap_op_Implicit_m3533126774(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ARWorldMap_t2240790807 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0081;
		}
	}
	{
		ARWorldMap_t2240790807 * L_3 = V_0;
		__this->set_m_LoadedMap_5(L_3);
		ObjectU5BU5D_t2843939325* L_4 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_5 = L_4;
		ARWorldMap_t2240790807 * L_6 = V_0;
		NullCheck(L_6);
		Vector3_t3722313464  L_7 = ARWorldMap_get_center_m2261591742(L_6, /*hidden argument*/NULL);
		Vector3_t3722313464  L_8 = L_7;
		RuntimeObject * L_9 = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_9);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_9);
		ObjectU5BU5D_t2843939325* L_10 = L_5;
		ARWorldMap_t2240790807 * L_11 = V_0;
		NullCheck(L_11);
		Vector3_t3722313464  L_12 = ARWorldMap_get_extent_m815776976(L_11, /*hidden argument*/NULL);
		Vector3_t3722313464  L_13 = L_12;
		RuntimeObject * L_14 = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_14);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_14);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogFormat_m309087137(NULL /*static, unused*/, _stringLiteral3573715958, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_set_ARSessionShouldAttemptRelocalization_m3516918436(NULL /*static, unused*/, (bool)1, /*hidden argument*/NULL);
		UnityARCameraManager_t4002280589 * L_15 = __this->get_m_ARCameraManager_4();
		NullCheck(L_15);
		ARKitWorldTrackingSessionConfiguration_t273386347  L_16 = UnityARCameraManager_get_sessionConfiguration_m3942467652(L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		ARWorldMap_t2240790807 * L_17 = V_0;
		ARKitWorldTrackingSessionConfiguration_set_worldMap_m722344241((ARKitWorldTrackingSessionConfiguration_t273386347 *)(&V_1), L_17, /*hidden argument*/NULL);
		V_2 = 3;
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4108509802, /*hidden argument*/NULL);
		UnityARSessionNativeInterface_t3929719369 * L_18 = WorldMapManager_get_session_m4054597902(NULL /*static, unused*/, /*hidden argument*/NULL);
		ARKitWorldTrackingSessionConfiguration_t273386347  L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_18);
		UnityARSessionNativeInterface_RunWithConfigAndOptions_m2136170177(L_18, L_19, L_20, /*hidden argument*/NULL);
	}

IL_0081:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
