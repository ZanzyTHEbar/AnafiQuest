#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<Oculus.Interaction.HandPosing.ISnapper>
struct Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038;
// System.Action`1<Oculus.Interaction.InteractableStateChangeArgs>
struct Action_1_t6FD8B79CDD506D49592A37BD0E0C9D68FC730BA5;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// Oculus.Interaction.CollisionInteractionRegistry`2<Oculus.Interaction.HandPosing.HandGrabInteractor,Oculus.Interaction.HandPosing.HandGrabInteractable>
struct CollisionInteractionRegistry_2_tEFBB537D54ED80B332B265B4D00DB7ACD8DCF833;
// System.Converter`2<Oculus.Interaction.HandPosing.ISnapper,UnityEngine.MonoBehaviour>
struct Converter_2_t294CE4BF5F775A119FCEE6220D8EC6A8084B01D5;
// System.Converter`2<UnityEngine.MonoBehaviour,Oculus.Interaction.HandPosing.ISnapper>
struct Converter_2_t6BBCBCD21171D7F33E059ACE84167B6D3DC16BD5;
// System.Converter`2<System.Object,System.Object>
struct Converter_2_tC9AFAC88B7B2F2A78BE628A4D126535F0A4A1486;
// Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.HandDataAsset>
struct DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E;
// Oculus.Interaction.Input.DataSource`1<System.Object>
struct DataSource_1_tE4347B771FFD29D6E6CF9CBDFF842BBE043BF642;
// System.Collections.Generic.HashSet`1<Oculus.Interaction.HandPosing.HandGrabInteractor>
struct HashSet_1_t78794DD2D0A0752525F93002D691BBFD48718DA8;
// Oculus.Interaction.Input.IDataSource`1<Oculus.Interaction.Input.HandDataAsset>
struct IDataSource_1_t64076376CABC9460F59D2C56BDC13312CE38E57E;
// Oculus.Interaction.Input.IDataSource`1<Oculus.Interaction.Input.HmdDataAsset>
struct IDataSource_1_tF480A42B5EAEB7D784BC8544380614A779E7BE3A;
// Oculus.Interaction.IInteractableRegistry`2<Oculus.Interaction.HandPosing.HandGrabInteractor,Oculus.Interaction.HandPosing.HandGrabInteractable>
struct IInteractableRegistry_2_t211202968E2350FAB8BE2292FA995B6152A3CF65;
// System.Collections.Generic.List`1<Oculus.Interaction.HandPosing.HandGrabPoint>
struct List_1_tA3C96FB2BF6285D5475DB19EF23AF65E5EDF7721;
// System.Collections.Generic.List`1<Oculus.Interaction.HandPosing.Visuals.HandJointMap>
struct List_1_t1761C86DC042A8F64FB55B6F1F872C07D735D0A1;
// System.Collections.Generic.List`1<Oculus.Interaction.HandPosing.ISnapper>
struct List_1_t3E48FD3D0973549A1410A423D470FEE7B0780644;
// System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>
struct List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// Oculus.Interaction.MultiAction`1<Oculus.Interaction.HandPosing.HandGrabInteractor>
struct MultiAction_1_t57302A46EA8CDBBC3894C93E89DC8229A019690E;
// System.Predicate`1<Oculus.Interaction.HandPosing.Visuals.HandJointMap>
struct Predicate_1_t91687CB2B83ADB88C43DFAB4EEB94032829B503A;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// UnityEngine.Component[]
struct ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Oculus.Interaction.Input.HandFinger[]
struct HandFingerU5BU5D_t5CD937F49C0BC1B9170C45F066E7F6BE862554E2;
// Oculus.Interaction.HandPosing.Visuals.HandGhostProvider[]
struct HandGhostProviderU5BU5D_t60E5D526211255639258E0DE343759F1B075190E;
// Oculus.Interaction.Input.HandJointId[]
struct HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587;
// Oculus.Interaction.HandPosing.Visuals.HandJointMap[]
struct HandJointMapU5BU5D_tCD9725B697CACB0EB246DBAE478EE984AEB2F377;
// Oculus.Interaction.HandPosing.ISnapper[]
struct ISnapperU5BU5D_tC022C1EDCDC8AC72A731B3F505D0954159E2C948;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// Oculus.Interaction.Input.JointFreedom[]
struct JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Oculus.Interaction.ProgressCurve[]
struct ProgressCurveU5BU5D_tC39B4D277C25EC7E806915D61959688D3B51A76D;
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/FingerGrabData[]
struct FingerGrabDataU5BU5D_t355B76E1A2C739371F924F6FDF480C4DD36249F9;
// Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/FingerPinchData[]
struct FingerPinchDataU5BU5D_t467FB074609811D7B32AF170A4D7E4F52FF6E708;
// Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData[]
struct FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface
struct BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977;
// Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurfaceData
struct BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// Oculus.Interaction.HandPosing.SnapSurfaces.ColliderSurface
struct ColliderSurface_tD86CE6FAE81AE6A40C631D4452569C21092E31C4;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface
struct CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8;
// Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurfaceData
struct CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Oculus.Interaction.Deprecated.DummyDataModifier
struct DummyDataModifier_t9697A00B2EE833C729C15C325713BD3C053FDF1B;
// Oculus.Interaction.Deprecated.FingerGrabAPI
struct FingerGrabAPI_t3C16A7EFBD664E8A8966BFD6632D4211B4A8584D;
// Oculus.Interaction.GrabAPI.FingerPalmGrabAPI
struct FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327;
// Oculus.Interaction.Deprecated.FingerPinchAPI
struct FingerPinchAPI_t262FF8BDF662BA6239445E197D50038A09ABCA04;
// Oculus.Interaction.GrabAPI.FingerPinchGrabAPI
struct FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832;
// Oculus.Interaction.GrabAPI.FingerRawPinchAPI
struct FingerRawPinchAPI_t1AD298888438539EB75E75FF0E4F46751B7FBFF1;
// Oculus.Interaction.GrabAPI.FingerRawPinchInjector
struct FingerRawPinchInjector_t5592589F13477BF139F3F637F378D9F6986AB176;
// Oculus.Interaction.Deprecated.FixedScaleDataModifier
struct FixedScaleDataModifier_t0C4BC79CB314F63A3FE6F23EDD144DBA3C778B28;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Oculus.Interaction.Deprecated.GrabPoint
struct GrabPoint_tF1744AF0289E825C7C63D10B1FA2BE545DDEE985;
// Oculus.Interaction.HandPosing.GrabPointsPoseFinder
struct GrabPointsPoseFinder_t89BF512A1E1A7EAD94A8B140B2D86BB108E27095;
// Oculus.Interaction.Grabbable
struct Grabbable_tC5F191DABDA6ADE2D8270476D37B4E122C1387D3;
// Oculus.Interaction.Input.HandDataAsset
struct HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3;
// Oculus.Interaction.Input.HandDataSourceConfig
struct HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054;
// Oculus.Interaction.HandPosing.Visuals.HandGhost
struct HandGhost_tCAE715DC9E23EAE5DAFEA521288F18A8D3AFEA58;
// Oculus.Interaction.HandPosing.Visuals.HandGhostProvider
struct HandGhostProvider_t6BCEB5A0DAC371CA099D0F65BB6C0799C5A2BAFF;
// Oculus.Interaction.GrabAPI.HandGrabAPI
struct HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787;
// Oculus.Interaction.HandPosing.HandGrabInteractable
struct HandGrabInteractable_tFC8AD4C83FE1A0BEB86FF5F8D39052FF7C0A0986;
// Oculus.Interaction.Grab.HandGrabInteractableData
struct HandGrabInteractableData_t46F6982E1DA3B4A95A3510E6E001D4FF8CB51C69;
// Oculus.Interaction.Deprecated.HandGrabInteractionUtilities
struct HandGrabInteractionUtilities_t938018C797EBE51065FF75A77AECA109EA7E157E;
// Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual
struct HandGrabInteractorVisual_tC7BD96F6109967EA0B7DACE15907F34E7DE61F6B;
// Oculus.Interaction.HandPosing.HandGrabPoint
struct HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C;
// Oculus.Interaction.Input.HandJointCache
struct HandJointCache_t8BDBDA97A57F7D39288F80C40A225C050A05116B;
// Oculus.Interaction.HandPosing.Visuals.HandJointMap
struct HandJointMap_t7BF884CEE017C3A9708D2E30BEEA7184CBAA6B12;
// Oculus.Interaction.HandPosing.HandPose
struct HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8;
// Oculus.Interaction.Deprecated.HandPoseRecordable
struct HandPoseRecordable_t14C8028E918A613DAC091C87FD53826267E5AA89;
// Oculus.Interaction.Deprecated.HandPoseRecorder
struct HandPoseRecorder_tFFC867D177BB2A3F71AEC5602232A3442D969417;
// Oculus.Interaction.HandPosing.Visuals.HandPuppet
struct HandPuppet_tF32101BA76C9B7D199C764ED4E0D8E31C00ECD70;
// Oculus.Interaction.Input.HandSkeleton
struct HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Oculus.Interaction.Input.IDataSource
struct IDataSource_t682BCFAE95AD4135956A60A61649AD955D665712;
// Oculus.Interaction.GrabAPI.IFingerAPI
struct IFingerAPI_t984A994F01A7F7E4391CE4EDD04479304F220454;
// Oculus.Interaction.Input.IHand
struct IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5;
// Oculus.Interaction.Grab.IHandGrabInteractable
struct IHandGrabInteractable_t5A13AA20D7149B38A9897B859E407F8FD05A9EA5;
// Oculus.Interaction.Grab.IHandGrabInteractor
struct IHandGrabInteractor_t6BF20261AFC2BE665EF540E91CE8D6116645E50F;
// Oculus.Interaction.HandPosing.SnapSurfaces.ISnapSurface
struct ISnapSurface_t5AD10554B4D4119A5D36DA2C083AE0572CFF69A8;
// Oculus.Interaction.HandPosing.ISnapper
struct ISnapper_t54B03424DDEA6B8A93A3BEEDB696378FCC8F1D84;
// Oculus.Interaction.Input.ITrackingToWorldTransformer
struct ITrackingToWorldTransformer_t193B383D2CCDEDD1521A0197EB476879DD657B2E;
// Oculus.Interaction.Deprecated.InteractableTransformableConnection
struct InteractableTransformableConnection_tB872442B5A31F08BCB12A7270EAB415F82F7BA6E;
// Oculus.Interaction.HandPosing.Visuals.JointCollection
struct JointCollection_t5BE41E43E94A9070AEF4E7BFA23C3C82D5EF3CAA;
// Oculus.Interaction.Deprecated.JointLocking
struct JointLocking_t7E9BB5955E0CCE41E59BD886BED92798FC6B2038;
// Oculus.Interaction.Deprecated.JointRotationHistoryModifier
struct JointRotationHistoryModifier_tC19F39663A0EB67C977C0403041E5F486DDC24A8;
// Oculus.Interaction.Deprecated.LastKnownGoodDataModifier
struct LastKnownGoodDataModifier_t80A78C5ECFB38E898AC5CE2FE9B8F3DDD112922C;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Oculus.Interaction.Deprecated.OneEuroFilterPositionDataModifier
struct OneEuroFilterPositionDataModifier_t5B3CB83D9A08142C0C38588D2E4DEE16FB0A37BC;
// Oculus.Interaction.Deprecated.OneEuroFilterRotationDataModifier
struct OneEuroFilterRotationDataModifier_tAD359702D9F84B8159042B94BE0E5AB29A97500E;
// Oculus.Interaction.Deprecated.OneHandFreeTransformer
struct OneHandFreeTransformer_t571E099023652EED3F3C15D41409FC531ABB778B;
// Oculus.Interaction.Deprecated.OneHandPhysicsJointTransformer
struct OneHandPhysicsJointTransformer_t4C159D48CF783C45378E718AA6F5DB6D7E47E6E3;
// Oculus.Interaction.Deprecated.OneHandRotateTransformer
struct OneHandRotateTransformer_tEE2AC7B0C36D7211445C1A309688F4A4B367A988;
// Oculus.Interaction.Deprecated.OneHandTranslateTransformer
struct OneHandTranslateTransformer_t64D5E9E2C0A42EE79C58F5929131FBBBEBD86C7F;
// Oculus.Interaction.PhysicsGrabbable
struct PhysicsGrabbable_tD148E9FA4004FE544C31B83B6435EDAE852C61BF;
// Oculus.Interaction.Deprecated.PhysicsTransformable
struct PhysicsTransformable_t387F108E92330DCE5547F4A316233A4FFF6B1926;
// Oculus.Interaction.ProgressCurve
struct ProgressCurve_t4240A915DEBE2CD7C1D414683EB5A89A06494401;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// Oculus.Interaction.Deprecated.SnapPoint
struct SnapPoint_t61DC9883BEC8539C7C51CC7C98E5C28B4FEDF6E6;
// Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface
struct SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E;
// Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurfaceData
struct SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A;
// System.String
struct String_t;
// Oculus.Interaction.Input.SyntheticHand
struct SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185;
// Oculus.Interaction.Deprecated.SyntheticHandModifier
struct SyntheticHandModifier_t59CA9B8F4D363EA2846F84E1CF9B9D7FDE05F16F;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// Oculus.Interaction.Deprecated.Transformable
struct Transformable_tBBAF38A85C229EA188DB5F5A6A42008F3B672993;
// Oculus.Interaction.Deprecated.TransformableUnityEventWrapper
struct TransformableUnityEventWrapper_tF76B34B54AA37FD9322E031288288A7BDB5B5EE2;
// Oculus.Interaction.Deprecated.TwoHandFreeTransformer
struct TwoHandFreeTransformer_tB5076772ECD47864807B3F53631E18DE1C77EB9E;
// Oculus.Interaction.Deprecated.TwoHandPlaneTransformer
struct TwoHandPlaneTransformer_t8DE5F7E27BBF9683D3A7E7754A1D6ABC8B91CB34;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/FingerGrabData
struct FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D;
// Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/FingerPinchData
struct FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702;
// Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData
struct FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9;
// Oculus.Interaction.HandPosing.HandGrabInteractor/<>c
struct U3CU3Ec_t7AFC96100701BBEE927BCADD76132B25C689BF19;
// Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual/<>c
struct U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8;
// Oculus.Interaction.HandPosing.Visuals.JointCollection/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tB5698602B356E87D981BF38982C0DE6CB4A55136;
// Oculus.Interaction.HandPosing.SnapSurfaces.SnapSurfaceHelper/PoseCalculator
struct PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Converter_2_t294CE4BF5F775A119FCEE6220D8EC6A8084B01D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Converter_2_t6BBCBCD21171D7F33E059ACE84167B6D3DC16BD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FingerGrabDataU5BU5D_t355B76E1A2C739371F924F6FDF480C4DD36249F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FingerPinchDataU5BU5D_t467FB074609811D7B32AF170A4D7E4F52FF6E708_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FingerRawPinchAPI_t1AD298888438539EB75E75FF0E4F46751B7FBFF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandJointUtils_t398E7EA5CA755A046BC60F9C5F8A144650D37DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFingerAPI_t984A994F01A7F7E4391CE4EDD04479304F220454_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHandGrabInteractable_t5A13AA20D7149B38A9897B859E407F8FD05A9EA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHandGrabInteractor_t6BF20261AFC2BE665EF540E91CE8D6116645E50F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISnapData_tF679483EF2786EFCAECA0D238B062543C2E988A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISnapSurface_t5AD10554B4D4119A5D36DA2C083AE0572CFF69A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISnapper_t54B03424DDEA6B8A93A3BEEDB696378FCC8F1D84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITrackingToWorldTransformer_t193B383D2CCDEDD1521A0197EB476879DD657B2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JointCollection_t5BE41E43E94A9070AEF4E7BFA23C3C82D5EF3CAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1761C86DC042A8F64FB55B6F1F872C07D735D0A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t91687CB2B83ADB88C43DFAB4EEB94032829B503A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_tB5698602B356E87D981BF38982C0DE6CB4A55136_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7AFC96100701BBEE927BCADD76132B25C689BF19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6884355282165D4E80B093E8026110DAC79B4BC8____AEB38775B3F59A70B85E7077A3B6583458E3EE605C4160C7FDB05DA461AC8978_20_FieldInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* BoxSurface_MinimalRotationPoseAtSurface_mA1E20D1B37A8247F4860A81FE4AC9057827FBA21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BoxSurface_MinimalTranslationPoseAtSurface_mD7608A89BCBBE0755F5791DB997375CF41AA2C5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisHandGrabInteractable_tFC8AD4C83FE1A0BEB86FF5F8D39052FF7C0A0986_mB4C0BD99D482F9A98D5CFA389DECFA7E56BA1976_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisHandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C_mFEE233FBDA73F6A6DFADE3346B0A51B5E8B58082_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHandPuppet_tF32101BA76C9B7D199C764ED4E0D8E31C00ECD70_m9414E1198DF365CA26895A6E9695686C49B99770_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisHandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C_mF3D3F1BBB511A0FECDD90D56B98D820B1085DCA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CylinderSurface_MinimalRotationPoseAtSurface_m6332A75A429AADB6C146A0F3A96AAE466734F6CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CylinderSurface_MinimalTranslationPoseAtSurface_m3969B101312C52DB0B2EBD8F6840601E8A0EFAAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSource_1_GetData_m61634C67200FCA53F1CDA0334E39EC4784C83AF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m24AEC49266104042F07427E487B601309C5CBEDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA18455211C51A1DBF839683A9A405FFB3E51EE32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7F890D387B8294FF405777D929F894DF8863409F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE3E48706852292B6DC099210FFF50627AC662A63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m677B6DAF16A498C87390EB1D8491F59DC1225A64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFB6425578B24D629189776244C61788BD5E98C48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisBoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977_m913CAF39D0BEF03A8270DDA1494E349BF897E126_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisColliderSurface_tD86CE6FAE81AE6A40C631D4452569C21092E31C4_m0FA96BCF8F09F71CD4DE26C6750A78ECC5AA2862_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8_m6A3866D30A44EE2674A08AADB1EE08334776B813_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E_m610C4B895B9CAD51DB73FB01BF5F53491EFC039A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandGrabAPI_OnHandUpdated_m6E4AF640C0462C4C6C5F432757D377F4CAD9F84A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandGrabInteractorVisual_HandleSnapEnded_mBC05BB45107C708C7A5FE9479E893CBA49AD6CEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandGrabInteractorVisual_HandleSnapStarted_m509260DF34463EC432B264657C7EB3E8700A3C6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ConvertAll_TisISnapper_t54B03424DDEA6B8A93A3BEEDB696378FCC8F1D84_m244103330D0516D8004EC91A8205CE597C1BF0DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ConvertAll_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_mA692175C0E59B8791293D644A837531D852F29B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_FindIndex_m26868EB42FA10D2E8B9FC435BBEE15862FD288B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m6634056FE8223F5FBF4B35F680857B49FA138DC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m9E169FBC2227D19589EDA47E649FC19A39E9B3D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0B7B3208E0D8AA0ED774EBCF28503122FF6B22B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m89FD74624095A867D0AA0D96610D7707B2EEAC4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_FindObjectsOfTypeAll_TisHandGhostProvider_t6BCEB5A0DAC371CA099D0F65BB6C0799C5A2BAFF_mE8C6E22AC0428C0575478262AC555C05EF3BABB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SphereSurface_MinimalRotationPoseAtSurface_m240601F09B8048BAA5111B3F7BAB458A7EB7B9B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SphereSurface_MinimalTranslationPoseAtSurface_mBE8B978B29B9C498B7864119315C055184EDBA3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAwakeU3Eb__8_0_mB7A2DE9A7C49655EDDCB0B7B6EE2F6275320D252_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInjectSnappersU3Eb__23_0_m39FC3A605CAC2CA18269CAFFB2243A95298AB5D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_mC298EECC3154B8D7182DFCCF9A841E6B7AA522D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct HandGhostProviderU5BU5D_t60E5D526211255639258E0DE343759F1B075190E;
struct HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4;
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct FingerGrabDataU5BU5D_t355B76E1A2C739371F924F6FDF480C4DD36249F9;
struct FingerPinchDataU5BU5D_t467FB074609811D7B32AF170A4D7E4F52FF6E708;
struct FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Oculus.Interaction.HandPosing.Visuals.HandJointMap>
struct List_1_t1761C86DC042A8F64FB55B6F1F872C07D735D0A1  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	HandJointMapU5BU5D_tCD9725B697CACB0EB246DBAE478EE984AEB2F377* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t1761C86DC042A8F64FB55B6F1F872C07D735D0A1_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	HandJointMapU5BU5D_tCD9725B697CACB0EB246DBAE478EE984AEB2F377* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Oculus.Interaction.HandPosing.ISnapper>
struct List_1_t3E48FD3D0973549A1410A423D470FEE7B0780644  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ISnapperU5BU5D_tC022C1EDCDC8AC72A731B3F505D0954159E2C948* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t3E48FD3D0973549A1410A423D470FEE7B0780644_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ISnapperU5BU5D_tC022C1EDCDC8AC72A731B3F505D0954159E2C948* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>
struct List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Oculus.Interaction.GrabAPI.FingerPinchGrabAPI
struct FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832  : public RuntimeObject
{
	// System.Boolean Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::_isPinchVisibilityGood
	bool ____isPinchVisibilityGood_0;
	// Oculus.Interaction.Input.HandJointId[] Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::thumbJointList
	HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587* ___thumbJointList_8;
	// Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/FingerPinchData[] Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::_fingersPinchData
	FingerPinchDataU5BU5D_t467FB074609811D7B32AF170A4D7E4F52FF6E708* ____fingersPinchData_9;
};

// Oculus.Interaction.GrabAPI.FingerRawPinchAPI
struct FingerRawPinchAPI_t1AD298888438539EB75E75FF0E4F46751B7FBFF1  : public RuntimeObject
{
	// Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData[] Oculus.Interaction.GrabAPI.FingerRawPinchAPI::_fingersPinchData
	FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2* ____fingersPinchData_0;
};

// Oculus.Interaction.Input.FingersMetadata
struct FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E  : public RuntimeObject
{
};

struct FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_StaticFields
{
	// Oculus.Interaction.Input.HandJointId[] Oculus.Interaction.Input.FingersMetadata::HAND_JOINT_IDS
	HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587* ___HAND_JOINT_IDS_0;
	// System.Int32[][] Oculus.Interaction.Input.FingersMetadata::FINGER_TO_JOINT_INDEX
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___FINGER_TO_JOINT_INDEX_1;
	// System.Boolean[] Oculus.Interaction.Input.FingersMetadata::HAND_JOINT_CAN_SPREAD
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___HAND_JOINT_CAN_SPREAD_2;
	// Oculus.Interaction.Input.HandFinger[] Oculus.Interaction.Input.FingersMetadata::HAND_FINGER_ID
	HandFingerU5BU5D_t5CD937F49C0BC1B9170C45F066E7F6BE862554E2* ___HAND_FINGER_ID_3;
};

// Oculus.Interaction.Input.HandDataSourceConfig
struct HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054  : public RuntimeObject
{
	// Oculus.Interaction.Input.Handedness Oculus.Interaction.Input.HandDataSourceConfig::<Handedness>k__BackingField
	int32_t ___U3CHandednessU3Ek__BackingField_0;
	// Oculus.Interaction.Input.ITrackingToWorldTransformer Oculus.Interaction.Input.HandDataSourceConfig::<TrackingToWorldTransformer>k__BackingField
	RuntimeObject* ___U3CTrackingToWorldTransformerU3Ek__BackingField_1;
	// Oculus.Interaction.Input.HandSkeleton Oculus.Interaction.Input.HandDataSourceConfig::<HandSkeleton>k__BackingField
	HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* ___U3CHandSkeletonU3Ek__BackingField_2;
	// Oculus.Interaction.Input.IDataSource`1<Oculus.Interaction.Input.HmdDataAsset> Oculus.Interaction.Input.HandDataSourceConfig::<HmdData>k__BackingField
	RuntimeObject* ___U3CHmdDataU3Ek__BackingField_3;
};

// Oculus.Interaction.Grab.HandGrab
struct HandGrab_t7DEEC830BBA026DE256CE743A52D8B9B7D6C5E4E  : public RuntimeObject
{
};

// Oculus.Interaction.HandPosing.HandPose
struct HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8  : public RuntimeObject
{
	// Oculus.Interaction.Input.Handedness Oculus.Interaction.HandPosing.HandPose::_handedness
	int32_t ____handedness_0;
	// Oculus.Interaction.Input.JointFreedom[] Oculus.Interaction.HandPosing.HandPose::_fingersFreedom
	JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* ____fingersFreedom_1;
	// UnityEngine.Quaternion[] Oculus.Interaction.HandPosing.HandPose::_jointRotations
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ____jointRotations_2;
};

// Oculus.Interaction.HandPosing.Visuals.JointCollection
struct JointCollection_t5BE41E43E94A9070AEF4E7BFA23C3C82D5EF3CAA  : public RuntimeObject
{
	// System.Int32[] Oculus.Interaction.HandPosing.Visuals.JointCollection::_jointIndices
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____jointIndices_0;
	// System.Collections.Generic.List`1<Oculus.Interaction.HandPosing.Visuals.HandJointMap> Oculus.Interaction.HandPosing.Visuals.JointCollection::_jointMaps
	List_1_t1761C86DC042A8F64FB55B6F1F872C07D735D0A1* ____jointMaps_1;
};

// Oculus.Interaction.HandPosing.SnapSurfaces.SnapSurfaceHelper
struct SnapSurfaceHelper_t89930EC10C9583FF0D2E447689F0BD293A2FDC9D  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Oculus.Interaction.HandPosing.HandGrabInteractor/<>c
struct U3CU3Ec_t7AFC96100701BBEE927BCADD76132B25C689BF19  : public RuntimeObject
{
};

struct U3CU3Ec_t7AFC96100701BBEE927BCADD76132B25C689BF19_StaticFields
{
	// Oculus.Interaction.HandPosing.HandGrabInteractor/<>c Oculus.Interaction.HandPosing.HandGrabInteractor/<>c::<>9
	U3CU3Ec_t7AFC96100701BBEE927BCADD76132B25C689BF19* ___U3CU3E9_0;
	// System.Action`1<Oculus.Interaction.HandPosing.ISnapper> Oculus.Interaction.HandPosing.HandGrabInteractor/<>c::<>9__75_0
	Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038* ___U3CU3E9__75_0_1;
	// System.Action`1<Oculus.Interaction.HandPosing.ISnapper> Oculus.Interaction.HandPosing.HandGrabInteractor/<>c::<>9__75_1
	Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038* ___U3CU3E9__75_1_2;
};

// Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual/<>c
struct U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8  : public RuntimeObject
{
};

struct U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8_StaticFields
{
	// Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual/<>c Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual/<>c::<>9
	U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8* ___U3CU3E9_0;
	// System.Converter`2<UnityEngine.MonoBehaviour,Oculus.Interaction.HandPosing.ISnapper> Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual/<>c::<>9__8_0
	Converter_2_t6BBCBCD21171D7F33E059ACE84167B6D3DC16BD5* ___U3CU3E9__8_0_1;
	// System.Converter`2<Oculus.Interaction.HandPosing.ISnapper,UnityEngine.MonoBehaviour> Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual/<>c::<>9__23_0
	Converter_2_t294CE4BF5F775A119FCEE6220D8EC6A8084B01D5* ___U3CU3E9__23_0_2;
};

// Oculus.Interaction.HandPosing.Visuals.JointCollection/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tB5698602B356E87D981BF38982C0DE6CB4A55136  : public RuntimeObject
{
	// Oculus.Interaction.Input.HandJointId Oculus.Interaction.HandPosing.Visuals.JointCollection/<>c__DisplayClass2_0::boneId
	int32_t ___boneId_0;
};

// System.Collections.Generic.List`1/Enumerator<Oculus.Interaction.HandPosing.ISnapper>
struct Enumerator_t4F8EC6B979623B6202DB16CF53FDD479D1B49B70 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t3E48FD3D0973549A1410A423D470FEE7B0780644* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.MonoBehaviour>
struct Enumerator_t07C2E5693B034463FB920742E4CC32D19677F76F 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// Oculus.Interaction.GrabAPI.GrabbingRule
struct GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D 
{
	// Oculus.Interaction.GrabAPI.FingerRequirement Oculus.Interaction.GrabAPI.GrabbingRule::_thumbRequirement
	int32_t ____thumbRequirement_0;
	// Oculus.Interaction.GrabAPI.FingerRequirement Oculus.Interaction.GrabAPI.GrabbingRule::_indexRequirement
	int32_t ____indexRequirement_1;
	// Oculus.Interaction.GrabAPI.FingerRequirement Oculus.Interaction.GrabAPI.GrabbingRule::_middleRequirement
	int32_t ____middleRequirement_2;
	// Oculus.Interaction.GrabAPI.FingerRequirement Oculus.Interaction.GrabAPI.GrabbingRule::_ringRequirement
	int32_t ____ringRequirement_3;
	// Oculus.Interaction.GrabAPI.FingerRequirement Oculus.Interaction.GrabAPI.GrabbingRule::_pinkyRequirement
	int32_t ____pinkyRequirement_4;
	// Oculus.Interaction.GrabAPI.FingerUnselectMode Oculus.Interaction.GrabAPI.GrabbingRule::_unselectMode
	int32_t ____unselectMode_5;
};

struct GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_StaticFields
{
	// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.GrabAPI.GrabbingRule::<DefaultPalmRule>k__BackingField
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D ___U3CDefaultPalmRuleU3Ek__BackingField_6;
	// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.GrabAPI.GrabbingRule::<DefaultPinchRule>k__BackingField
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D ___U3CDefaultPinchRuleU3Ek__BackingField_7;
	// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.GrabAPI.GrabbingRule::<FullGrab>k__BackingField
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D ___U3CFullGrabU3Ek__BackingField_8;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
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
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// Oculus.Interaction.HandPosing.PoseMeasureParameters
struct PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1 
{
	// System.Single Oculus.Interaction.HandPosing.PoseMeasureParameters::_maxDistance
	float ____maxDistance_0;
	// System.Single Oculus.Interaction.HandPosing.PoseMeasureParameters::_positionRotationWeight
	float ____positionRotationWeight_1;
};

// Oculus.Interaction.HandPosing.PoseTravelData
struct PoseTravelData_tEA43924FF66519ACC37762A17B8491C3FAD6A825 
{
	union
	{
		struct
		{
		};
		uint8_t PoseTravelData_tEA43924FF66519ACC37762A17B8491C3FAD6A825__padding[1];
	};
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D__padding[12];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121__padding[16];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=17
struct __StaticArrayInitTypeSizeU3D17_t4959168BD7CF3BF86512C10948FAE301A1A2E0AB 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D17_t4959168BD7CF3BF86512C10948FAE301A1A2E0AB__padding[17];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct __StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001__padding[20];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68
struct __StaticArrayInitTypeSizeU3D68_t8553F026D1D75E1D4A7C21EEB23D8BCC30DCA6C5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D68_t8553F026D1D75E1D4A7C21EEB23D8BCC30DCA6C5__padding[68];
	};
};

// System.ValueTuple`2<UnityEngine.Vector3,UnityEngine.Vector3>
struct ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3 
{
	// T1 System.ValueTuple`2::Item1
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Item2_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t6884355282165D4E80B093E8026110DAC79B4BC8  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t6884355282165D4E80B093E8026110DAC79B4BC8_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68 <PrivateImplementationDetails>::0299EA23B40AFFB6F2D4C56761D939F88BEAEDFFC98799B1D0011E2FC867A388
	__StaticArrayInitTypeSizeU3D68_t8553F026D1D75E1D4A7C21EEB23D8BCC30DCA6C5 ___0299EA23B40AFFB6F2D4C56761D939F88BEAEDFFC98799B1D0011E2FC867A388_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::1085AB18045526E0E6BC49579C2783F82561DA676F694D26D184D6EB7F99118F
	__StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001 ___1085AB18045526E0E6BC49579C2783F82561DA676F694D26D184D6EB7F99118F_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::1C3D8119FF82FC2957242BBC5C8A184F08DADCE3CF113F282639E90D4E35BC0B
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___1C3D8119FF82FC2957242BBC5C8A184F08DADCE3CF113F282639E90D4E35BC0B_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::2E72A286F6E80D4ED2E83596D4A0AA21DCECB4DD925F30310EC73BCDF7BCFF08
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___2E72A286F6E80D4ED2E83596D4A0AA21DCECB4DD925F30310EC73BCDF7BCFF08_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::3CF966F20334243238BDC191F80FA740E98ACF8F5FDD0CA2DCCE683C1542EEDF
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___3CF966F20334243238BDC191F80FA740E98ACF8F5FDD0CA2DCCE683C1542EEDF_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::407885E61A69335134A1F85FD82A94E871508B8B6E33095F8E39FAEAC298C63E
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___407885E61A69335134A1F85FD82A94E871508B8B6E33095F8E39FAEAC298C63E_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::418D8378E48059C857D5F7CA8BE28422B288CAAD519525F1A1FF93F68F825B97
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___418D8378E48059C857D5F7CA8BE28422B288CAAD519525F1A1FF93F68F825B97_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::4F26A554B65395F540C074E9557877CF00BC194281240AB820E5297B8C499C70
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___4F26A554B65395F540C074E9557877CF00BC194281240AB820E5297B8C499C70_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::5B3F9EC0646608DAE43294162F92F82B97E7011A2BFA51A25FE477D18BDC6B21
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___5B3F9EC0646608DAE43294162F92F82B97E7011A2BFA51A25FE477D18BDC6B21_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::63859276EDC9733EDCD11B6E9B87C024B4519C893567720D95DA60C9850C22DE
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___63859276EDC9733EDCD11B6E9B87C024B4519C893567720D95DA60C9850C22DE_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::6FD4287A48C4D2CF873A476F8EA1781656383AE265F2F2FAE9C6B9F159863EFE
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___6FD4287A48C4D2CF873A476F8EA1781656383AE265F2F2FAE9C6B9F159863EFE_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::8CA6EE1043DEFCFD05AA29DEE581CBC519E783E414A687D7C26AC6070D3F6DEE
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___8CA6EE1043DEFCFD05AA29DEE581CBC519E783E414A687D7C26AC6070D3F6DEE_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::8E1614B69F720DC37A9ED6825E1DD7A6656F63DD9ABE7D0A48C911FD2DC418CE
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___8E1614B69F720DC37A9ED6825E1DD7A6656F63DD9ABE7D0A48C911FD2DC418CE_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::8EE3A1C9C508357E9D0EBCB0A6C6F8E01416BD7CDA0320AC080CEA649014F412
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___8EE3A1C9C508357E9D0EBCB0A6C6F8E01416BD7CDA0320AC080CEA649014F412_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::918234F629EBF0C84BFE41B60824833200105B6094AB357EE6A872A28F2BAD6A
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___918234F629EBF0C84BFE41B60824833200105B6094AB357EE6A872A28F2BAD6A_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::9290AB548294BA6BFDDD1E2EE079ABB3E02A463A085D6CFA86701AE11DAF4E85
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___9290AB548294BA6BFDDD1E2EE079ABB3E02A463A085D6CFA86701AE11DAF4E85_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::94AD2BDBB6455BBF8B60747E6C5D85F859F15DFEDAAE84DA39E8AF4D5F07BFC9
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___94AD2BDBB6455BBF8B60747E6C5D85F859F15DFEDAAE84DA39E8AF4D5F07BFC9_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::9C3B1F31D79675E772863CCCEEBB691C9A6C10718B45796B5DA322FB6C7A4881
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___9C3B1F31D79675E772863CCCEEBB691C9A6C10718B45796B5DA322FB6C7A4881_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::9D525C94DA0D9E0D4A9CE96909F6AE5E6C4DB27466EF98E0288AC9A99A07F07B
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___9D525C94DA0D9E0D4A9CE96909F6AE5E6C4DB27466EF98E0288AC9A99A07F07B_18;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::A56D6BBBE254A23749343FB727E7F348B719BC6314763D6A792843E2F7C466EE
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___A56D6BBBE254A23749343FB727E7F348B719BC6314763D6A792843E2F7C466EE_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::AEB38775B3F59A70B85E7077A3B6583458E3EE605C4160C7FDB05DA461AC8978
	__StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001 ___AEB38775B3F59A70B85E7077A3B6583458E3EE605C4160C7FDB05DA461AC8978_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::B5D565C4D932EDF37E8039156FB4F9391D01A5EA20FCD322DB107B5FB01AF5F3
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___B5D565C4D932EDF37E8039156FB4F9391D01A5EA20FCD322DB107B5FB01AF5F3_21;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_22;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::BCBC01A5036673E493422616677A83718EDFE475D3E938B1A879903FFB2A05A0
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___BCBC01A5036673E493422616677A83718EDFE475D3E938B1A879903FFB2A05A0_23;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::C1C0669C18711EC44EABC6FF99E1BCB996C6B892AF94287F5CC4B8774138D7AC
	__StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001 ___C1C0669C18711EC44EABC6FF99E1BCB996C6B892AF94287F5CC4B8774138D7AC_24;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::CE99AE045C8B2A2A8A58FD1A2120956E74E90322EEF45F7DFE1CA73EEFE655D4
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___CE99AE045C8B2A2A8A58FD1A2120956E74E90322EEF45F7DFE1CA73EEFE655D4_25;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::CFDD61EEBBC699DC56E78F04CF5CCE1896957BC5D29AF2B21468B62CD1E759C5
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___CFDD61EEBBC699DC56E78F04CF5CCE1896957BC5D29AF2B21468B62CD1E759C5_26;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=17 <PrivateImplementationDetails>::D421CA4F288D780319BC80684387DE61CF750142A8AC39A87240A6CB9261F552
	__StaticArrayInitTypeSizeU3D17_t4959168BD7CF3BF86512C10948FAE301A1A2E0AB ___D421CA4F288D780319BC80684387DE61CF750142A8AC39A87240A6CB9261F552_27;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::D8C9807AE9FA3FFE054D614675E4FD8DEE163272C453DEA596107ABE48E4412B
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___D8C9807AE9FA3FFE054D614675E4FD8DEE163272C453DEA596107ABE48E4412B_28;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::D9F6C3F18D26E171FCA762EBF56C34EA1CAAF992D3AF8F901BC55595F2BE125F
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___D9F6C3F18D26E171FCA762EBF56C34EA1CAAF992D3AF8F901BC55595F2BE125F_29;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68 <PrivateImplementationDetails>::DE9362862EE0149108BF27AB6A13264945BF3001B6A2810CBFBB7BD0C93B490D
	__StaticArrayInitTypeSizeU3D68_t8553F026D1D75E1D4A7C21EEB23D8BCC30DCA6C5 ___DE9362862EE0149108BF27AB6A13264945BF3001B6A2810CBFBB7BD0C93B490D_30;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::E54A423CAFA0DAA9A176E7D9CB32B41C39E2A6BF367AA389214A3FC6A1044F78
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___E54A423CAFA0DAA9A176E7D9CB32B41C39E2A6BF367AA389214A3FC6A1044F78_31;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurfaceData
struct BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28  : public RuntimeObject
{
	// System.Single Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurfaceData::widthOffset
	float ___widthOffset_0;
	// UnityEngine.Vector4 Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurfaceData::snapOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___snapOffset_1;
	// UnityEngine.Vector3 Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurfaceData::size
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___size_2;
	// UnityEngine.Vector3 Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurfaceData::eulerAngles
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulerAngles_3;
};

// Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurfaceData
struct CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13  : public RuntimeObject
{
	// UnityEngine.Vector3 Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurfaceData::startPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPoint_0;
	// UnityEngine.Vector3 Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurfaceData::endPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endPoint_1;
	// System.Single Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurfaceData::angle
	float ___angle_2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// Oculus.Interaction.GrabAPI.FingerPalmGrabAPI
struct FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327  : public RuntimeObject
{
	// UnityEngine.Vector3 Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::_poseVolumeCenterOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____poseVolumeCenterOffset_0;
	// UnityEngine.Vector3 Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::_poseVolumeCenter
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____poseVolumeCenter_1;
	// Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/FingerGrabData[] Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::_fingersGrabData
	FingerGrabDataU5BU5D_t355B76E1A2C739371F924F6FDF480C4DD36249F9* ____fingersGrabData_8;
};

struct FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_StaticFields
{
	// System.Single Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::START_THRESHOLD
	float ___START_THRESHOLD_2;
	// System.Single Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::RELEASE_THRESHOLD
	float ___RELEASE_THRESHOLD_3;
	// System.Single Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::FINGER_TIP_RADIUS
	float ___FINGER_TIP_RADIUS_4;
	// System.Single Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::POSE_VOLUME_RADIUS
	float ___POSE_VOLUME_RADIUS_5;
	// UnityEngine.Vector3 Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::POSE_VOLUME_OFFSET_RIGHT
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___POSE_VOLUME_OFFSET_RIGHT_6;
	// UnityEngine.Vector3 Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::POSE_VOLUME_OFFSET_LEFT
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___POSE_VOLUME_OFFSET_LEFT_7;
};

// Oculus.Interaction.Grab.HandGrabInteractableData
struct HandGrabInteractableData_t46F6982E1DA3B4A95A3510E6E001D4FF8CB51C69  : public RuntimeObject
{
	// Oculus.Interaction.Grab.GrabTypeFlags Oculus.Interaction.Grab.HandGrabInteractableData::<SupportedGrabTypes>k__BackingField
	int32_t ___U3CSupportedGrabTypesU3Ek__BackingField_0;
	// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.Grab.HandGrabInteractableData::<PinchGrabRules>k__BackingField
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D ___U3CPinchGrabRulesU3Ek__BackingField_1;
	// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.Grab.HandGrabInteractableData::<PalmGrabRules>k__BackingField
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D ___U3CPalmGrabRulesU3Ek__BackingField_2;
};

// Oculus.Interaction.Input.HandJointId
struct HandJointId_t112B251DAEDE9EF4C669D039AB9CE6B2A01AB898 
{
	// System.Int32 Oculus.Interaction.Input.HandJointId::value__
	int32_t ___value___2;
};

// Oculus.Interaction.HandPosing.Visuals.HandJointMap
struct HandJointMap_t7BF884CEE017C3A9708D2E30BEEA7184CBAA6B12  : public RuntimeObject
{
	// Oculus.Interaction.Input.HandJointId Oculus.Interaction.HandPosing.Visuals.HandJointMap::id
	int32_t ___id_0;
	// UnityEngine.Transform Oculus.Interaction.HandPosing.Visuals.HandJointMap::transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_1;
	// UnityEngine.Vector3 Oculus.Interaction.HandPosing.Visuals.HandJointMap::rotationOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotationOffset_2;
};

// Oculus.Interaction.Input.JointFreedom
struct JointFreedom_tF6851AF256BDF4B02750F92160070BDF1F3B14A9 
{
	// System.Int32 Oculus.Interaction.Input.JointFreedom::value__
	int32_t ___value___2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Plane
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_2;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurfaceData
struct SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A  : public RuntimeObject
{
	// UnityEngine.Vector3 Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurfaceData::centre
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___centre_0;
};

// Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/FingerGrabData
struct FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D  : public RuntimeObject
{
	// Oculus.Interaction.Input.HandJointId Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/FingerGrabData::_tipId
	int32_t ____tipId_0;
	// UnityEngine.Vector3 Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/FingerGrabData::_tipPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____tipPosition_1;
	// System.Single Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/FingerGrabData::GrabStrength
	float ___GrabStrength_2;
	// System.Boolean Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/FingerGrabData::IsGrabbing
	bool ___IsGrabbing_3;
	// System.Boolean Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/FingerGrabData::<IsGrabbingChanged>k__BackingField
	bool ___U3CIsGrabbingChangedU3Ek__BackingField_4;
};

// Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/FingerPinchData
struct FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702  : public RuntimeObject
{
	// Oculus.Interaction.Input.HandJointId Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/FingerPinchData::_tipId
	int32_t ____tipId_0;
	// System.Single Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/FingerPinchData::_minPinchDistance
	float ____minPinchDistance_1;
	// UnityEngine.Vector3 Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/FingerPinchData::<TipPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CTipPositionU3Ek__BackingField_2;
	// System.Boolean Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/FingerPinchData::<IsPinchingChanged>k__BackingField
	bool ___U3CIsPinchingChangedU3Ek__BackingField_3;
	// System.Single Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/FingerPinchData::PinchStrength
	float ___PinchStrength_4;
	// System.Boolean Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/FingerPinchData::IsPinching
	bool ___IsPinching_5;
};

// Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData
struct FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9  : public RuntimeObject
{
	// Oculus.Interaction.Input.HandFinger Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::_finger
	int32_t ____finger_0;
	// Oculus.Interaction.Input.HandJointId Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::_tipId
	int32_t ____tipId_1;
	// System.Single Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::PinchStrength
	float ___PinchStrength_2;
	// System.Boolean Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::IsPinching
	bool ___IsPinching_3;
	// System.Boolean Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::<IsPinchingChanged>k__BackingField
	bool ___U3CIsPinchingChangedU3Ek__BackingField_4;
	// UnityEngine.Vector3 Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::<TipPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CTipPositionU3Ek__BackingField_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Oculus.Interaction.Input.HandDataAsset
struct HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3  : public RuntimeObject
{
	// System.Boolean Oculus.Interaction.Input.HandDataAsset::IsDataValid
	bool ___IsDataValid_0;
	// System.Boolean Oculus.Interaction.Input.HandDataAsset::IsConnected
	bool ___IsConnected_1;
	// System.Boolean Oculus.Interaction.Input.HandDataAsset::IsTracked
	bool ___IsTracked_2;
	// UnityEngine.Pose Oculus.Interaction.Input.HandDataAsset::Root
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___Root_3;
	// Oculus.Interaction.Input.PoseOrigin Oculus.Interaction.Input.HandDataAsset::RootPoseOrigin
	int32_t ___RootPoseOrigin_4;
	// UnityEngine.Quaternion[] Oculus.Interaction.Input.HandDataAsset::Joints
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___Joints_5;
	// System.Boolean Oculus.Interaction.Input.HandDataAsset::IsHighConfidence
	bool ___IsHighConfidence_6;
	// System.Boolean[] Oculus.Interaction.Input.HandDataAsset::IsFingerPinching
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___IsFingerPinching_7;
	// System.Boolean[] Oculus.Interaction.Input.HandDataAsset::IsFingerHighConfidence
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___IsFingerHighConfidence_8;
	// System.Single[] Oculus.Interaction.Input.HandDataAsset::FingerPinchStrength
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___FingerPinchStrength_9;
	// System.Single Oculus.Interaction.Input.HandDataAsset::HandScale
	float ___HandScale_10;
	// UnityEngine.Pose Oculus.Interaction.Input.HandDataAsset::PointerPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___PointerPose_11;
	// Oculus.Interaction.Input.PoseOrigin Oculus.Interaction.Input.HandDataAsset::PointerPoseOrigin
	int32_t ___PointerPoseOrigin_12;
	// System.Boolean Oculus.Interaction.Input.HandDataAsset::IsDominantHand
	bool ___IsDominantHand_13;
	// Oculus.Interaction.Input.HandDataSourceConfig Oculus.Interaction.Input.HandDataAsset::Config
	HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* ___Config_14;
};

// Oculus.Interaction.HandPosing.HandGrabPointData
struct HandGrabPointData_tBA3966DD98D8606128F8BCFA5613B269D44A8289 
{
	// UnityEngine.Pose Oculus.Interaction.HandPosing.HandGrabPointData::gripPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___gripPose_0;
	// Oculus.Interaction.HandPosing.HandPose Oculus.Interaction.HandPosing.HandGrabPointData::handPose
	HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* ___handPose_1;
	// System.Single Oculus.Interaction.HandPosing.HandGrabPointData::scale
	float ___scale_2;
};
// Native definition for P/Invoke marshalling of Oculus.Interaction.HandPosing.HandGrabPointData
struct HandGrabPointData_tBA3966DD98D8606128F8BCFA5613B269D44A8289_marshaled_pinvoke
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___gripPose_0;
	HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* ___handPose_1;
	float ___scale_2;
};
// Native definition for COM marshalling of Oculus.Interaction.HandPosing.HandGrabPointData
struct HandGrabPointData_tBA3966DD98D8606128F8BCFA5613B269D44A8289_marshaled_com
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___gripPose_0;
	HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* ___handPose_1;
	float ___scale_2;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.Action`1<Oculus.Interaction.HandPosing.ISnapper>
struct Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038  : public MulticastDelegate_t
{
};

// System.Converter`2<Oculus.Interaction.HandPosing.ISnapper,UnityEngine.MonoBehaviour>
struct Converter_2_t294CE4BF5F775A119FCEE6220D8EC6A8084B01D5  : public MulticastDelegate_t
{
};

// System.Converter`2<UnityEngine.MonoBehaviour,Oculus.Interaction.HandPosing.ISnapper>
struct Converter_2_t6BBCBCD21171D7F33E059ACE84167B6D3DC16BD5  : public MulticastDelegate_t
{
};

// System.Predicate`1<Oculus.Interaction.HandPosing.Visuals.HandJointMap>
struct Predicate_1_t91687CB2B83ADB88C43DFAB4EEB94032829B503A  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Oculus.Interaction.HandPosing.Visuals.HandGhostProvider
struct HandGhostProvider_t6BCEB5A0DAC371CA099D0F65BB6C0799C5A2BAFF  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// Oculus.Interaction.HandPosing.Visuals.HandGhost Oculus.Interaction.HandPosing.Visuals.HandGhostProvider::_leftHand
	HandGhost_tCAE715DC9E23EAE5DAFEA521288F18A8D3AFEA58* ____leftHand_4;
	// Oculus.Interaction.HandPosing.Visuals.HandGhost Oculus.Interaction.HandPosing.Visuals.HandGhostProvider::_rightHand
	HandGhost_tCAE715DC9E23EAE5DAFEA521288F18A8D3AFEA58* ____rightHand_5;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Oculus.Interaction.HandPosing.SnapSurfaces.SnapSurfaceHelper/PoseCalculator
struct PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.HandDataAsset>
struct DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Oculus.Interaction.Input.DataSource`1::<Started>k__BackingField
	bool ___U3CStartedU3Ek__BackingField_4;
	// System.Boolean Oculus.Interaction.Input.DataSource`1::_started
	bool ____started_5;
	// System.Boolean Oculus.Interaction.Input.DataSource`1::_requiresUpdate
	bool ____requiresUpdate_6;
	// Oculus.Interaction.Input.DataSource`1/UpdateModeFlags<TData> Oculus.Interaction.Input.DataSource`1::_updateMode
	int32_t ____updateMode_7;
	// UnityEngine.MonoBehaviour Oculus.Interaction.Input.DataSource`1::_updateAfter
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____updateAfter_8;
	// Oculus.Interaction.Input.IDataSource Oculus.Interaction.Input.DataSource`1::UpdateAfter
	RuntimeObject* ___UpdateAfter_9;
	// System.Int32 Oculus.Interaction.Input.DataSource`1::_currentDataVersion
	int32_t ____currentDataVersion_10;
	// System.Action Oculus.Interaction.Input.DataSource`1::InputDataAvailable
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___InputDataAvailable_11;
};

// Oculus.Interaction.Interactable`2<Oculus.Interaction.HandPosing.HandGrabInteractor,Oculus.Interaction.HandPosing.HandGrabInteractable>
struct Interactable_2_t85AE2A52B087345A658C36D072087160847F424C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Oculus.Interaction.Interactable`2::_maxInteractors
	int32_t ____maxInteractors_4;
	// System.Int32 Oculus.Interaction.Interactable`2::_maxSelectingInteractors
	int32_t ____maxSelectingInteractors_5;
	// System.Collections.Generic.HashSet`1<TInteractor> Oculus.Interaction.Interactable`2::_interactors
	HashSet_1_t78794DD2D0A0752525F93002D691BBFD48718DA8* ____interactors_6;
	// System.Collections.Generic.HashSet`1<TInteractor> Oculus.Interaction.Interactable`2::_selectingInteractors
	HashSet_1_t78794DD2D0A0752525F93002D691BBFD48718DA8* ____selectingInteractors_7;
	// System.Action Oculus.Interaction.Interactable`2::WhenInteractorsCountUpdated
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenInteractorsCountUpdated_8;
	// System.Action Oculus.Interaction.Interactable`2::WhenSelectingInteractorsCountUpdated
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenSelectingInteractorsCountUpdated_9;
	// Oculus.Interaction.InteractableState Oculus.Interaction.Interactable`2::_state
	int32_t ____state_10;
	// System.Action`1<Oculus.Interaction.InteractableStateChangeArgs> Oculus.Interaction.Interactable`2::WhenStateChanged
	Action_1_t6FD8B79CDD506D49592A37BD0E0C9D68FC730BA5* ___WhenStateChanged_11;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenInteractorAdded
	MultiAction_1_t57302A46EA8CDBBC3894C93E89DC8229A019690E* ____whenInteractorAdded_12;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenInteractorRemoved
	MultiAction_1_t57302A46EA8CDBBC3894C93E89DC8229A019690E* ____whenInteractorRemoved_13;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenSelectingInteractorAdded
	MultiAction_1_t57302A46EA8CDBBC3894C93E89DC8229A019690E* ____whenSelectingInteractorAdded_14;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenSelectingInteractorRemoved
	MultiAction_1_t57302A46EA8CDBBC3894C93E89DC8229A019690E* ____whenSelectingInteractorRemoved_15;
};

struct Interactable_2_t85AE2A52B087345A658C36D072087160847F424C_StaticFields
{
	// Oculus.Interaction.IInteractableRegistry`2<TInteractor,TInteractable> Oculus.Interaction.Interactable`2::_registry
	RuntimeObject* ____registry_16;
};

// Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface
struct BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurfaceData Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::_data
	BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* ____data_4;
	// UnityEngine.Transform Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::_relativeTo
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____relativeTo_5;
	// UnityEngine.Transform Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::_gripPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____gripPoint_6;
};

// Oculus.Interaction.HandPosing.SnapSurfaces.ColliderSurface
struct ColliderSurface_tD86CE6FAE81AE6A40C631D4452569C21092E31C4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Collider Oculus.Interaction.HandPosing.SnapSurfaces.ColliderSurface::_collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ____collider_4;
};

// Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface
struct CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurfaceData Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::_data
	CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* ____data_4;
	// UnityEngine.Transform Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::_relativeTo
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____relativeTo_5;
	// UnityEngine.Transform Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::_gripPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____gripPoint_6;
};

// Oculus.Interaction.Deprecated.DummyDataModifier
struct DummyDataModifier_t9697A00B2EE833C729C15C325713BD3C053FDF1B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Oculus.Interaction.Deprecated.FingerGrabAPI
struct FingerGrabAPI_t3C16A7EFBD664E8A8966BFD6632D4211B4A8584D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Oculus.Interaction.Deprecated.FingerPinchAPI
struct FingerPinchAPI_t262FF8BDF662BA6239445E197D50038A09ABCA04  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Oculus.Interaction.GrabAPI.FingerRawPinchInjector
struct FingerRawPinchInjector_t5592589F13477BF139F3F637F378D9F6986AB176  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Oculus.Interaction.GrabAPI.HandGrabAPI Oculus.Interaction.GrabAPI.FingerRawPinchInjector::_handGrabAPI
	HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* ____handGrabAPI_4;
};

// Oculus.Interaction.Deprecated.FixedScaleDataModifier
struct FixedScaleDataModifier_t0C4BC79CB314F63A3FE6F23EDD144DBA3C778B28  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Oculus.Interaction.Deprecated.GrabPoint
struct GrabPoint_tF1744AF0289E825C7C63D10B1FA2BE545DDEE985  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Oculus.Interaction.HandPosing.Visuals.HandGhost
struct HandGhost_tCAE715DC9E23EAE5DAFEA521288F18A8D3AFEA58  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Oculus.Interaction.HandPosing.Visuals.HandPuppet Oculus.Interaction.HandPosing.Visuals.HandGhost::_puppet
	HandPuppet_tF32101BA76C9B7D199C764ED4E0D8E31C00ECD70* ____puppet_4;
	// UnityEngine.Transform Oculus.Interaction.HandPosing.Visuals.HandGhost::_gripPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____gripPoint_5;
	// Oculus.Interaction.HandPosing.HandGrabPoint Oculus.Interaction.HandPosing.Visuals.HandGhost::_handGrabPoint
	HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* ____handGrabPoint_6;
};

// Oculus.Interaction.GrabAPI.HandGrabAPI
struct HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.MonoBehaviour Oculus.Interaction.GrabAPI.HandGrabAPI::_hand
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____hand_4;
	// Oculus.Interaction.Input.IHand Oculus.Interaction.GrabAPI.HandGrabAPI::<Hand>k__BackingField
	RuntimeObject* ___U3CHandU3Ek__BackingField_5;
	// Oculus.Interaction.GrabAPI.IFingerAPI Oculus.Interaction.GrabAPI.HandGrabAPI::_fingerPinchGrabAPI
	RuntimeObject* ____fingerPinchGrabAPI_6;
	// Oculus.Interaction.GrabAPI.IFingerAPI Oculus.Interaction.GrabAPI.HandGrabAPI::_fingerPalmGrabAPI
	RuntimeObject* ____fingerPalmGrabAPI_7;
	// System.Boolean Oculus.Interaction.GrabAPI.HandGrabAPI::_started
	bool ____started_8;
};

// Oculus.Interaction.Deprecated.HandGrabInteractionUtilities
struct HandGrabInteractionUtilities_t938018C797EBE51065FF75A77AECA109EA7E157E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual
struct HandGrabInteractorVisual_tC7BD96F6109967EA0B7DACE15907F34E7DE61F6B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual::_snappers
	List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* ____snappers_4;
	// System.Collections.Generic.List`1<Oculus.Interaction.HandPosing.ISnapper> Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual::Snappers
	List_1_t3E48FD3D0973549A1410A423D470FEE7B0780644* ___Snappers_5;
	// Oculus.Interaction.Input.SyntheticHand Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual::_syntheticHand
	SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* ____syntheticHand_6;
	// System.Boolean Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual::_areFingersFree
	bool ____areFingersFree_7;
	// System.Boolean Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual::_isWristFree
	bool ____isWristFree_8;
	// Oculus.Interaction.Input.ITrackingToWorldTransformer Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual::Transformer
	RuntimeObject* ___Transformer_9;
	// Oculus.Interaction.HandPosing.ISnapper Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual::_currentSnapper
	RuntimeObject* ____currentSnapper_10;
	// System.Boolean Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual::_started
	bool ____started_11;
};

// Oculus.Interaction.HandPosing.HandGrabPoint
struct HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Oculus.Interaction.HandPosing.HandGrabPoint::_relativeTo
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____relativeTo_4;
	// UnityEngine.MonoBehaviour Oculus.Interaction.HandPosing.HandGrabPoint::_surface
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____surface_5;
	// Oculus.Interaction.HandPosing.SnapSurfaces.ISnapSurface Oculus.Interaction.HandPosing.HandGrabPoint::_snapSurface
	RuntimeObject* ____snapSurface_6;
	// System.Boolean Oculus.Interaction.HandPosing.HandGrabPoint::_usesHandPose
	bool ____usesHandPose_7;
	// Oculus.Interaction.HandPosing.HandPose Oculus.Interaction.HandPosing.HandGrabPoint::_handPose
	HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* ____handPose_8;
};

// Oculus.Interaction.Deprecated.HandPoseRecordable
struct HandPoseRecordable_t14C8028E918A613DAC091C87FD53826267E5AA89  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Oculus.Interaction.Deprecated.HandPoseRecorder
struct HandPoseRecorder_tFFC867D177BB2A3F71AEC5602232A3442D969417  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Oculus.Interaction.HandPosing.Visuals.HandPuppet
struct HandPuppet_tF32101BA76C9B7D199C764ED4E0D8E31C00ECD70  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<Oculus.Interaction.HandPosing.Visuals.HandJointMap> Oculus.Interaction.HandPosing.Visuals.HandPuppet::_jointMaps
	List_1_t1761C86DC042A8F64FB55B6F1F872C07D735D0A1* ____jointMaps_4;
	// Oculus.Interaction.HandPosing.Visuals.JointCollection Oculus.Interaction.HandPosing.Visuals.HandPuppet::_jointsCache
	JointCollection_t5BE41E43E94A9070AEF4E7BFA23C3C82D5EF3CAA* ____jointsCache_5;
};

// Oculus.Interaction.Deprecated.InteractableTransformableConnection
struct InteractableTransformableConnection_tB872442B5A31F08BCB12A7270EAB415F82F7BA6E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Oculus.Interaction.Deprecated.JointLocking
struct JointLocking_t7E9BB5955E0CCE41E59BD886BED92798FC6B2038  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Oculus.Interaction.Deprecated.JointRotationHistoryModifier
struct JointRotationHistoryModifier_tC19F39663A0EB67C977C0403041E5F486DDC24A8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Oculus.Interaction.Deprecated.LastKnownGoodDataModifier
struct LastKnownGoodDataModifier_t80A78C5ECFB38E898AC5CE2FE9B8F3DDD112922C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Oculus.Interaction.Deprecated.OneEuroFilterPositionDataModifier
struct OneEuroFilterPositionDataModifier_t5B3CB83D9A08142C0C38588D2E4DEE16FB0A37BC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Oculus.Interaction.Deprecated.OneEuroFilterRotationDataModifier
struct OneEuroFilterRotationDataModifier_tAD359702D9F84B8159042B94BE0E5AB29A97500E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Oculus.Interaction.Deprecated.OneHandFreeTransformer
struct OneHandFreeTransformer_t571E099023652EED3F3C15D41409FC531ABB778B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Oculus.Interaction.Deprecated.OneHandPhysicsJointTransformer
struct OneHandPhysicsJointTransformer_t4C159D48CF783C45378E718AA6F5DB6D7E47E6E3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Oculus.Interaction.Deprecated.OneHandRotateTransformer
struct OneHandRotateTransformer_tEE2AC7B0C36D7211445C1A309688F4A4B367A988  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Oculus.Interaction.Deprecated.OneHandTranslateTransformer
struct OneHandTranslateTransformer_t64D5E9E2C0A42EE79C58F5929131FBBBEBD86C7F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Oculus.Interaction.Deprecated.PhysicsTransformable
struct PhysicsTransformable_t387F108E92330DCE5547F4A316233A4FFF6B1926  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Oculus.Interaction.Deprecated.SnapPoint
struct SnapPoint_t61DC9883BEC8539C7C51CC7C98E5C28B4FEDF6E6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface
struct SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurfaceData Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::_data
	SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A* ____data_4;
	// UnityEngine.Transform Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::_relativeTo
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____relativeTo_5;
	// UnityEngine.Transform Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::_gripPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____gripPoint_6;
};

// Oculus.Interaction.Deprecated.SyntheticHandModifier
struct SyntheticHandModifier_t59CA9B8F4D363EA2846F84E1CF9B9D7FDE05F16F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Oculus.Interaction.Deprecated.Transformable
struct Transformable_tBBAF38A85C229EA188DB5F5A6A42008F3B672993  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Oculus.Interaction.Deprecated.TransformableUnityEventWrapper
struct TransformableUnityEventWrapper_tF76B34B54AA37FD9322E031288288A7BDB5B5EE2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Oculus.Interaction.Deprecated.TwoHandFreeTransformer
struct TwoHandFreeTransformer_tB5076772ECD47864807B3F53631E18DE1C77EB9E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Oculus.Interaction.Deprecated.TwoHandPlaneTransformer
struct TwoHandPlaneTransformer_t8DE5F7E27BBF9683D3A7E7754A1D6ABC8B91CB34  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Oculus.Interaction.Input.DataModifier`1<Oculus.Interaction.Input.HandDataAsset>
struct DataModifier_1_t07168F3D3D5863B9EC34501A83C8C3FD7889C6A5  : public DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E
{
	// UnityEngine.MonoBehaviour Oculus.Interaction.Input.DataModifier`1::_iModifyDataFromSourceMono
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____iModifyDataFromSourceMono_12;
	// Oculus.Interaction.Input.IDataSource`1<TData> Oculus.Interaction.Input.DataModifier`1::_modifyDataFromSource
	RuntimeObject* ____modifyDataFromSource_13;
	// System.Boolean Oculus.Interaction.Input.DataModifier`1::_applyModifier
	bool ____applyModifier_14;
	// TData Oculus.Interaction.Input.DataModifier`1::_thisDataAsset
	HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* ____thisDataAsset_16;
	// TData Oculus.Interaction.Input.DataModifier`1::_currentDataAsset
	HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* ____currentDataAsset_17;
};

struct DataModifier_1_t07168F3D3D5863B9EC34501A83C8C3FD7889C6A5_StaticFields
{
	// TData Oculus.Interaction.Input.DataModifier`1::<InvalidAsset>k__BackingField
	HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* ___U3CInvalidAssetU3Ek__BackingField_15;
};

// Oculus.Interaction.HandPosing.HandGrabInteractable
struct HandGrabInteractable_tFC8AD4C83FE1A0BEB86FF5F8D39052FF7C0A0986  : public Interactable_2_t85AE2A52B087345A658C36D072087160847F424C
{
	// UnityEngine.Transform Oculus.Interaction.HandPosing.HandGrabInteractable::_relativeTo
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____relativeTo_17;
	// UnityEngine.Rigidbody Oculus.Interaction.HandPosing.HandGrabInteractable::_rigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ____rigidbody_18;
	// Oculus.Interaction.Grabbable Oculus.Interaction.HandPosing.HandGrabInteractable::_grabbable
	Grabbable_tC5F191DABDA6ADE2D8270476D37B4E122C1387D3* ____grabbable_19;
	// System.Boolean Oculus.Interaction.HandPosing.HandGrabInteractable::_resetGrabOnGrabsUpdated
	bool ____resetGrabOnGrabsUpdated_20;
	// Oculus.Interaction.PhysicsGrabbable Oculus.Interaction.HandPosing.HandGrabInteractable::_physicsGrabbable
	PhysicsGrabbable_tD148E9FA4004FE544C31B83B6435EDAE852C61BF* ____physicsGrabbable_21;
	// Oculus.Interaction.HandPosing.PoseMeasureParameters Oculus.Interaction.HandPosing.HandGrabInteractable::_scoringModifier
	PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1 ____scoringModifier_22;
	// Oculus.Interaction.Grab.GrabTypeFlags Oculus.Interaction.HandPosing.HandGrabInteractable::_supportedGrabTypes
	int32_t ____supportedGrabTypes_23;
	// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.HandPosing.HandGrabInteractable::_pinchGrabRules
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D ____pinchGrabRules_24;
	// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.HandPosing.HandGrabInteractable::_palmGrabRules
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D ____palmGrabRules_25;
	// Oculus.Interaction.HandPosing.SnapType Oculus.Interaction.HandPosing.HandGrabInteractable::_snapType
	int32_t ____snapType_26;
	// System.Single Oculus.Interaction.HandPosing.HandGrabInteractable::_travelSpeed
	float ____travelSpeed_27;
	// System.Boolean Oculus.Interaction.HandPosing.HandGrabInteractable::_useFixedTravelTime
	bool ____useFixedTravelTime_28;
	// UnityEngine.AnimationCurve Oculus.Interaction.HandPosing.HandGrabInteractable::_travelCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ____travelCurve_29;
	// System.Collections.Generic.List`1<Oculus.Interaction.HandPosing.HandGrabPoint> Oculus.Interaction.HandPosing.HandGrabInteractable::_handGrabPoints
	List_1_tA3C96FB2BF6285D5475DB19EF23AF65E5EDF7721* ____handGrabPoints_30;
	// UnityEngine.Collider[] Oculus.Interaction.HandPosing.HandGrabInteractable::<Colliders>k__BackingField
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___U3CCollidersU3Ek__BackingField_31;
	// Oculus.Interaction.HandPosing.GrabPointsPoseFinder Oculus.Interaction.HandPosing.HandGrabInteractable::_grabPointsPoseFinder
	GrabPointsPoseFinder_t89BF512A1E1A7EAD94A8B140B2D86BB108E27095* ____grabPointsPoseFinder_32;
	// System.Boolean Oculus.Interaction.HandPosing.HandGrabInteractable::_started
	bool ____started_34;
};

struct HandGrabInteractable_tFC8AD4C83FE1A0BEB86FF5F8D39052FF7C0A0986_StaticFields
{
	// Oculus.Interaction.CollisionInteractionRegistry`2<Oculus.Interaction.HandPosing.HandGrabInteractor,Oculus.Interaction.HandPosing.HandGrabInteractable> Oculus.Interaction.HandPosing.HandGrabInteractable::_registry
	CollisionInteractionRegistry_2_tEFBB537D54ED80B332B265B4D00DB7ACD8DCF833* ____registry_33;
};

// Oculus.Interaction.Input.Hand
struct Hand_tC61A0092374A077C2B2C040DC5CBF6D768A92B9A  : public DataModifier_1_t07168F3D3D5863B9EC34501A83C8C3FD7889C6A5
{
	// UnityEngine.Component[] Oculus.Interaction.Input.Hand::_aspects
	ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E* ____aspects_18;
	// Oculus.Interaction.Input.HandJointCache Oculus.Interaction.Input.Hand::_jointPosesCache
	HandJointCache_t8BDBDA97A57F7D39288F80C40A225C050A05116B* ____jointPosesCache_19;
	// System.Action Oculus.Interaction.Input.Hand::WhenHandUpdated
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenHandUpdated_20;
};

struct Hand_tC61A0092374A077C2B2C040DC5CBF6D768A92B9A_StaticFields
{
	// UnityEngine.Vector3 Oculus.Interaction.Input.Hand::PALM_LOCAL_OFFSET
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PALM_LOCAL_OFFSET_21;
};

// Oculus.Interaction.Input.SyntheticHand
struct SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185  : public Hand_tC61A0092374A077C2B2C040DC5CBF6D768A92B9A
{
	// Oculus.Interaction.ProgressCurve Oculus.Interaction.Input.SyntheticHand::_wristPositionLockCurve
	ProgressCurve_t4240A915DEBE2CD7C1D414683EB5A89A06494401* ____wristPositionLockCurve_22;
	// Oculus.Interaction.ProgressCurve Oculus.Interaction.Input.SyntheticHand::_wristPositionUnlockCurve
	ProgressCurve_t4240A915DEBE2CD7C1D414683EB5A89A06494401* ____wristPositionUnlockCurve_23;
	// Oculus.Interaction.ProgressCurve Oculus.Interaction.Input.SyntheticHand::_wristRotationLockCurve
	ProgressCurve_t4240A915DEBE2CD7C1D414683EB5A89A06494401* ____wristRotationLockCurve_24;
	// Oculus.Interaction.ProgressCurve Oculus.Interaction.Input.SyntheticHand::_wristRotationUnlockCurve
	ProgressCurve_t4240A915DEBE2CD7C1D414683EB5A89A06494401* ____wristRotationUnlockCurve_25;
	// Oculus.Interaction.ProgressCurve Oculus.Interaction.Input.SyntheticHand::_jointLockCurve
	ProgressCurve_t4240A915DEBE2CD7C1D414683EB5A89A06494401* ____jointLockCurve_26;
	// Oculus.Interaction.ProgressCurve Oculus.Interaction.Input.SyntheticHand::_jointUnlockCurve
	ProgressCurve_t4240A915DEBE2CD7C1D414683EB5A89A06494401* ____jointUnlockCurve_27;
	// System.Single Oculus.Interaction.Input.SyntheticHand::_spreadAllowance
	float ____spreadAllowance_28;
	// System.Action Oculus.Interaction.Input.SyntheticHand::UpdateRequired
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___UpdateRequired_29;
	// Oculus.Interaction.Input.HandDataAsset Oculus.Interaction.Input.SyntheticHand::_lastStates
	HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* ____lastStates_30;
	// System.Single Oculus.Interaction.Input.SyntheticHand::_wristPositionOverrideFactor
	float ____wristPositionOverrideFactor_31;
	// System.Single Oculus.Interaction.Input.SyntheticHand::_wristRotationOverrideFactor
	float ____wristRotationOverrideFactor_32;
	// System.Single[] Oculus.Interaction.Input.SyntheticHand::_jointsOverrideFactor
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____jointsOverrideFactor_33;
	// Oculus.Interaction.ProgressCurve[] Oculus.Interaction.Input.SyntheticHand::_jointLockProgressCurves
	ProgressCurveU5BU5D_tC39B4D277C25EC7E806915D61959688D3B51A76D* ____jointLockProgressCurves_34;
	// Oculus.Interaction.ProgressCurve[] Oculus.Interaction.Input.SyntheticHand::_jointUnlockProgressCurves
	ProgressCurveU5BU5D_tC39B4D277C25EC7E806915D61959688D3B51A76D* ____jointUnlockProgressCurves_35;
	// UnityEngine.Pose Oculus.Interaction.Input.SyntheticHand::_desiredWristPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____desiredWristPose_36;
	// System.Boolean Oculus.Interaction.Input.SyntheticHand::_wristPositionLocked
	bool ____wristPositionLocked_37;
	// System.Boolean Oculus.Interaction.Input.SyntheticHand::_wristRotationLocked
	bool ____wristRotationLocked_38;
	// UnityEngine.Pose Oculus.Interaction.Input.SyntheticHand::_constrainedWristPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____constrainedWristPose_39;
	// UnityEngine.Pose Oculus.Interaction.Input.SyntheticHand::_lastWristPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____lastWristPose_40;
	// UnityEngine.Quaternion[] Oculus.Interaction.Input.SyntheticHand::_desiredJointsRotation
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ____desiredJointsRotation_41;
	// UnityEngine.Quaternion[] Oculus.Interaction.Input.SyntheticHand::_constrainedJointRotations
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ____constrainedJointRotations_42;
	// UnityEngine.Quaternion[] Oculus.Interaction.Input.SyntheticHand::_lastSyntheticRotation
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ____lastSyntheticRotation_43;
	// Oculus.Interaction.Input.JointFreedom[] Oculus.Interaction.Input.SyntheticHand::_jointsFreedomLevels
	JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* ____jointsFreedomLevels_44;
	// System.Boolean Oculus.Interaction.Input.SyntheticHand::_hasConnectedData
	bool ____hasConnectedData_45;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7  : public RuntimeArray
{
	ALIGN_FIELD (8) Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 m_Items[1];

	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 value)
	{
		m_Items[index] = value;
	}
};
// Oculus.Interaction.Input.HandJointId[]
struct HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
// Oculus.Interaction.Input.JointFreedom[]
struct JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
// Oculus.Interaction.HandPosing.Visuals.HandGhostProvider[]
struct HandGhostProviderU5BU5D_t60E5D526211255639258E0DE343759F1B075190E  : public RuntimeArray
{
	ALIGN_FIELD (8) HandGhostProvider_t6BCEB5A0DAC371CA099D0F65BB6C0799C5A2BAFF* m_Items[1];

	inline HandGhostProvider_t6BCEB5A0DAC371CA099D0F65BB6C0799C5A2BAFF* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HandGhostProvider_t6BCEB5A0DAC371CA099D0F65BB6C0799C5A2BAFF** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HandGhostProvider_t6BCEB5A0DAC371CA099D0F65BB6C0799C5A2BAFF* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline HandGhostProvider_t6BCEB5A0DAC371CA099D0F65BB6C0799C5A2BAFF* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HandGhostProvider_t6BCEB5A0DAC371CA099D0F65BB6C0799C5A2BAFF** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HandGhostProvider_t6BCEB5A0DAC371CA099D0F65BB6C0799C5A2BAFF* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
// System.Delegate[]
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
// Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/FingerGrabData[]
struct FingerGrabDataU5BU5D_t355B76E1A2C739371F924F6FDF480C4DD36249F9  : public RuntimeArray
{
	ALIGN_FIELD (8) FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D* m_Items[1];

	inline FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/FingerPinchData[]
struct FingerPinchDataU5BU5D_t467FB074609811D7B32AF170A4D7E4F52FF6E708  : public RuntimeArray
{
	ALIGN_FIELD (8) FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* m_Items[1];

	inline FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData[]
struct FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2  : public RuntimeArray
{
	ALIGN_FIELD (8) FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* m_Items[1];

	inline FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Resources::FindObjectsOfTypeAll<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Resources_FindObjectsOfTypeAll_TisRuntimeObject_m5C85593AB0779ED746918A1F2DB94A678C17110A_gshared (const RuntimeMethod* method) ;
// System.Void System.Converter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Converter_2__ctor_mB107CD0E28B613EFEB2F8599A3A56AFA1C4AD1B0_gshared (Converter_2_tC9AFAC88B7B2F2A78BE628A4D126535F0A4A1486* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TOutput> System.Collections.Generic.List`1<System.Object>::ConvertAll<System.Object>(System.Converter`2<T,TOutput>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* List_1_ConvertAll_TisRuntimeObject_m8B145AE4F761F7CEF799C90CA74FFDE44521B3F7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Converter_2_tC9AFAC88B7B2F2A78BE628A4D126535F0A4A1486* ___converter0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// TData Oculus.Interaction.Input.DataSource`1<System.Object>::GetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSource_1_GetData_mE0944D4610B955BBECA722C21CCC9B01D9400925_gshared (DataSource_1_tE4347B771FFD29D6E6CF9CBDFF842BBE043BF642* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::FindIndex(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m9875FFE328FA833B2617915FF976DEDA4724EBC3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, RuntimeObject** ___component0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`2<UnityEngine.Vector3,UnityEngine.Vector3>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F_gshared (ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item10, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item21, const RuntimeMethod* method) ;

// System.Void Oculus.Interaction.HandPosing.HandGrabInteractor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4557110DD8AFB3F71B31D5395378952483771849 (U3CU3Ec_t7AFC96100701BBEE927BCADD76132B25C689BF19* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform Oculus.Interaction.HandPosing.HandGrabPoint::get_RelativeTo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* HandGrabPoint_get_RelativeTo_mE6D33E23708CD8E671E965978C4488CCA7B68679_inline (HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.PoseUtils::RelativeOffset(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 PoseUtils_RelativeOffset_m3CB9005781614AFF2FB327373F64AEBF20FE2696 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___to0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___from1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<Oculus.Interaction.HandPosing.HandGrabInteractable>()
inline HandGrabInteractable_tFC8AD4C83FE1A0BEB86FF5F8D39052FF7C0A0986* Component_GetComponentInParent_TisHandGrabInteractable_tFC8AD4C83FE1A0BEB86FF5F8D39052FF7C0A0986_mB4C0BD99D482F9A98D5CFA389DECFA7E56BA1976 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  HandGrabInteractable_tFC8AD4C83FE1A0BEB86FF5F8D39052FF7C0A0986* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// UnityEngine.Transform Oculus.Interaction.HandPosing.HandGrabInteractable::get_RelativeTo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* HandGrabInteractable_get_RelativeTo_mE918B8DADECC3F1F448116F19AB06FCA629E678B (HandGrabInteractable_tFC8AD4C83FE1A0BEB86FF5F8D39052FF7C0A0986* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.HandPose::.ctor(Oculus.Interaction.HandPosing.HandPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPose__ctor_mB3C88F78B053CFB5F715B86E8CE122D543156B26 (HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* __this, HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* ___other0, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.PoseUtils::GlobalPose(UnityEngine.Transform,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 PoseUtils_GlobalPose_m6B6464C721166ABEE4B301A3296ED085B428BD7F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___reference0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___offset1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.PoseUtils::SetPose(UnityEngine.Transform,UnityEngine.Pose&,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseUtils_SetPose_m6C9BE185A66754389A49FD711DEE68A07DE059BB (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose1, int32_t ___space2, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.HandPosing.HandGrabPoint::get_Scale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandGrabPoint_get_Scale_mD8585DB58DB4316669AA16061543EA9D63BB19D3 (HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// Oculus.Interaction.HandPosing.HandPose Oculus.Interaction.HandPosing.HandGrabPoint::get_HandPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* HandGrabPoint_get_HandPose_mB785342F2B3DE6A3691BFCDBCE49A2256D2EDB77 (HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* __this, const RuntimeMethod* method) ;
// Oculus.Interaction.Input.Handedness Oculus.Interaction.HandPosing.HandPose::get_Handedness()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HandPose_get_Handedness_m34F5F962E694094AA60C7415BA94CB4A8E79FC52_inline (HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* __this, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.HandPosing.HandGrabPoint::CompareNearPoses(UnityEngine.Pose&,UnityEngine.Pose&,Oculus.Interaction.HandPosing.PoseMeasureParameters&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandGrabPoint_CompareNearPoses_m27DB24437A70F7B3A5970A549F120C199CF1A79F (HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___worldPoint0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___bestSnapPoint1, PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* ___scoringModifier2, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.HandPose::CopyFrom(Oculus.Interaction.HandPosing.HandPose,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPose_CopyFrom_mB4B0A33C4CD7A004BD54D9E1A1E34C250F8AE5EB (HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* __this, HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* ___from0, bool ___mirrorHandedness1, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.PoseUtils::GetPose(UnityEngine.Transform,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 PoseUtils_GetPose_m913669538E46AA3E2671EFA9B84A6E449C05886D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, int32_t ___space1, const RuntimeMethod* method) ;
// Oculus.Interaction.HandPosing.SnapSurfaces.ISnapSurface Oculus.Interaction.HandPosing.HandGrabPoint::get_SnapSurface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandGrabPoint_get_SnapSurface_mBB4F6AEAFF69A3B8138E9CE91D860D2A57CD73C6 (HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* __this, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.PoseUtils::Similarity(UnityEngine.Pose&,UnityEngine.Pose&,Oculus.Interaction.HandPosing.PoseMeasureParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PoseUtils_Similarity_mA20326AC09282B566B6FA2295EC79A522BAC183C (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___from0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___to1, PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1 ___scoringModifier2, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.PoseUtils::RelativeOffset(UnityEngine.Transform,UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseUtils_RelativeOffset_m019B113B86E5B8E1061059D5BCA0315DFC091320 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___to0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___from1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___result2, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.HandGrabPoint::set_SnapSurface(Oculus.Interaction.HandPosing.SnapSurfaces.ISnapSurface)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabPoint_set_SnapSurface_m7993B7323F2FCE40AFB15CBEAB5B8E9F5A27D781_inline (HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.HandGrabPoint::InjectRelativeTo(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabPoint_InjectRelativeTo_m157DB78365211780A5DD01FF40DB09B430CEBBEC_inline (HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.HandPose::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPose__ctor_mC0B9635C91D52D4EC49CC4BD970CBBDB248CC443 (HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// Oculus.Interaction.Input.JointFreedom[] Oculus.Interaction.Input.FingersMetadata::DefaultFingersFreedom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* FingersMetadata_DefaultFingersFreedom_m652A4BFA22044A9F52A4520C59785BE7F4C5999F (const RuntimeMethod* method) ;
// Oculus.Interaction.Input.JointFreedom[] Oculus.Interaction.HandPosing.HandPose::get_FingersFreedom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* HandPose_get_FingersFreedom_mF8266A82C0115F83283119E26FAF03F3B1E53397 (HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion[] Oculus.Interaction.HandPosing.HandPose::get_JointRotations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* HandPose_get_JointRotations_m67D61CC5658CC151843B59844D1E59DE839AF078 (HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::SlerpUnclamped(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_SlerpUnclamped_mB38920352A1B11369D782F78E183568CAFA82C0F (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.HandPosing.PoseMeasureParameters::get_MaxDistance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PoseMeasureParameters_get_MaxDistance_mDC7ED28CDF4C34843DE9A4D3F2964F0E7C9012E2_inline (PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* __this, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.HandPosing.PoseMeasureParameters::get_PositionRotationWeight()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PoseMeasureParameters_get_PositionRotationWeight_m5B280E4B485A6666B2E1BE5D4BB54CB73FAD2A10_inline (PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.PoseMeasureParameters::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseMeasureParameters__ctor_mE06FDCF64D9F6F7CA18E52980A25CD9C059CEB61 (PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* __this, float ___maxDistance0, float ___positionRotationWeight1, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.PoseUtils::RelativeOffset(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 PoseUtils_RelativeOffset_mBD229EA35C60DD61F36CB719D08DE3398A1888D3 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___from0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___to1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Pose::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Pose_get_forward_m510527153754B6C2B2CDFDEE25D7168E3C82372A (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Pose::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Pose_get_up_m5431E350242BEBB0CD7B0AAF9DC9468DC6DDFE5C (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Pose::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Pose_get_right_m8518E7BCEB74B9798BADB001B9E38756CC35ECFE (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mDFA261F10D391C520F1E8B27A02F8EC44DEDA9F4_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___values0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Oculus.Interaction.HandPosing.Visuals.HandPuppet>()
inline HandPuppet_tF32101BA76C9B7D199C764ED4E0D8E31C00ECD70* Component_GetComponent_TisHandPuppet_tF32101BA76C9B7D199C764ED4E0D8E31C00ECD70_m9414E1198DF365CA26895A6E9695686C49B99770 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  HandPuppet_tF32101BA76C9B7D199C764ED4E0D8E31C00ECD70* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInParent<Oculus.Interaction.HandPosing.HandGrabPoint>()
inline HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* Component_GetComponentInParent_TisHandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C_mFEE233FBDA73F6A6DFADE3346B0A51B5E8B58082 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGhost::SetPose(Oculus.Interaction.HandPosing.HandGrabPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGhost_SetPose_m603749B9961ACB1C1103D6F2B3E91B9143986BA0 (HandGhost_tCAE715DC9E23EAE5DAFEA521288F18A8D3AFEA58* __this, HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* ___handGrabPoint0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.Visuals.HandPuppet::SetJointRotations(UnityEngine.Quaternion[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPuppet_SetJointRotations_m447EBB853EB2A6797911032D20FEB5E300263882 (HandPuppet_tF32101BA76C9B7D199C764ED4E0D8E31C00ECD70* __this, QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7** ___jointRotations0, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.HandPosing.HandGrabPoint::get_RelativeGrip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 HandGrabPoint_get_RelativeGrip_m33DE465EC10D1271A4E4BD5AC1818C5870B2DF0A (HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGhost::SetGripPose(UnityEngine.Pose,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGhost_SetGripPose_mDD5C27356BC6D1E4319155FA5FE3077F965C9E44 (HandGhost_tCAE715DC9E23EAE5DAFEA521288F18A8D3AFEA58* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___gripPose0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.PoseUtils::Premultiply(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseUtils_Premultiply_m0C6B153A3DAECFCCD4D0999DCD8C069CCBE822CD (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___a0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___b1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.PoseUtils::Postmultiply(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseUtils_Postmultiply_m4F1BBE85E92DC9DE3AFDFE54C520174A5ACCE9E9 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___a0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___b1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.Visuals.HandPuppet::SetRootPose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPuppet_SetRootPose_m0A17926BA47B9268010FDC3279FAD47ECAEDA021 (HandPuppet_tF32101BA76C9B7D199C764ED4E0D8E31C00ECD70* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___rootPose0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGhost::InjectHandPuppet(Oculus.Interaction.HandPosing.Visuals.HandPuppet)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGhost_InjectHandPuppet_m8BEBAEED79E5CD179F968882AF227927CB004B27_inline (HandGhost_tCAE715DC9E23EAE5DAFEA521288F18A8D3AFEA58* __this, HandPuppet_tF32101BA76C9B7D199C764ED4E0D8E31C00ECD70* ___puppet0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGhost::InjectGripPoint(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGhost_InjectGripPoint_m1F32A1B18176A6F40778E0275580C29237076ACC_inline (HandGhost_tCAE715DC9E23EAE5DAFEA521288F18A8D3AFEA58* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___gripPoint0, const RuntimeMethod* method) ;
// T[] UnityEngine.Resources::FindObjectsOfTypeAll<Oculus.Interaction.HandPosing.Visuals.HandGhostProvider>()
inline HandGhostProviderU5BU5D_t60E5D526211255639258E0DE343759F1B075190E* Resources_FindObjectsOfTypeAll_TisHandGhostProvider_t6BCEB5A0DAC371CA099D0F65BB6C0799C5A2BAFF_mE8C6E22AC0428C0575478262AC555C05EF3BABB9 (const RuntimeMethod* method)
{
	return ((  HandGhostProviderU5BU5D_t60E5D526211255639258E0DE343759F1B075190E* (*) (const RuntimeMethod*))Resources_FindObjectsOfTypeAll_TisRuntimeObject_m5C85593AB0779ED746918A1F2DB94A678C17110A_gshared)(method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void System.Converter`2<UnityEngine.MonoBehaviour,Oculus.Interaction.HandPosing.ISnapper>::.ctor(System.Object,System.IntPtr)
inline void Converter_2__ctor_m991BFF54FEA8553125E8C78B9F8619AA8930F4B5 (Converter_2_t6BBCBCD21171D7F33E059ACE84167B6D3DC16BD5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Converter_2_t6BBCBCD21171D7F33E059ACE84167B6D3DC16BD5*, RuntimeObject*, intptr_t, const RuntimeMethod*))Converter_2__ctor_mB107CD0E28B613EFEB2F8599A3A56AFA1C4AD1B0_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.List`1<TOutput> System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::ConvertAll<Oculus.Interaction.HandPosing.ISnapper>(System.Converter`2<T,TOutput>)
inline List_1_t3E48FD3D0973549A1410A423D470FEE7B0780644* List_1_ConvertAll_TisISnapper_t54B03424DDEA6B8A93A3BEEDB696378FCC8F1D84_m244103330D0516D8004EC91A8205CE597C1BF0DB (List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* __this, Converter_2_t6BBCBCD21171D7F33E059ACE84167B6D3DC16BD5* ___converter0, const RuntimeMethod* method)
{
	return ((  List_1_t3E48FD3D0973549A1410A423D470FEE7B0780644* (*) (List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81*, Converter_2_t6BBCBCD21171D7F33E059ACE84167B6D3DC16BD5*, const RuntimeMethod*))List_1_ConvertAll_TisRuntimeObject_m8B145AE4F761F7CEF799C90CA74FFDE44521B3F7_gshared)(__this, ___converter0, method);
}
// System.Void Oculus.Interaction.MonoBehaviourStartExtensions::BeginStart(UnityEngine.MonoBehaviour,System.Boolean&,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourStartExtensions_BeginStart_mDD969725C4C386681AC8271DD8C4073818218BBA (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___monoBehaviour0, bool* ___started1, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___baseStart2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Oculus.Interaction.HandPosing.ISnapper>::GetEnumerator()
inline Enumerator_t4F8EC6B979623B6202DB16CF53FDD479D1B49B70 List_1_GetEnumerator_m9E169FBC2227D19589EDA47E649FC19A39E9B3D3 (List_1_t3E48FD3D0973549A1410A423D470FEE7B0780644* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4F8EC6B979623B6202DB16CF53FDD479D1B49B70 (*) (List_1_t3E48FD3D0973549A1410A423D470FEE7B0780644*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Oculus.Interaction.HandPosing.ISnapper>::Dispose()
inline void Enumerator_Dispose_m24AEC49266104042F07427E487B601309C5CBEDA (Enumerator_t4F8EC6B979623B6202DB16CF53FDD479D1B49B70* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4F8EC6B979623B6202DB16CF53FDD479D1B49B70*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Oculus.Interaction.HandPosing.ISnapper>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mFB6425578B24D629189776244C61788BD5E98C48_inline (Enumerator_t4F8EC6B979623B6202DB16CF53FDD479D1B49B70* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t4F8EC6B979623B6202DB16CF53FDD479D1B49B70*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Oculus.Interaction.HandPosing.ISnapper>::MoveNext()
inline bool Enumerator_MoveNext_mE3E48706852292B6DC099210FFF50627AC662A63 (Enumerator_t4F8EC6B979623B6202DB16CF53FDD479D1B49B70* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4F8EC6B979623B6202DB16CF53FDD479D1B49B70*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// TData Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.HandDataAsset>::GetData()
inline HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* DataSource_1_GetData_m61634C67200FCA53F1CDA0334E39EC4784C83AF0 (DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E* __this, const RuntimeMethod* method)
{
	return ((  HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* (*) (DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E*, const RuntimeMethod*))DataSource_1_GetData_mE0944D4610B955BBECA722C21CCC9B01D9400925_gshared)(__this, method);
}
// Oculus.Interaction.Input.ITrackingToWorldTransformer Oculus.Interaction.Input.HandDataSourceConfig::get_TrackingToWorldTransformer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HandDataSourceConfig_get_TrackingToWorldTransformer_m78056DEE0EA266365275987EB71CA8DDF9313400_inline (HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.MonoBehaviourStartExtensions::EndStart(UnityEngine.MonoBehaviour,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourStartExtensions_EndStart_m886958C775D916BE56C23EF36B446A1D268AABF0 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___monoBehaviour0, bool* ___started1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::GetEnumerator()
inline Enumerator_t07C2E5693B034463FB920742E4CC32D19677F76F List_1_GetEnumerator_m6634056FE8223F5FBF4B35F680857B49FA138DC2 (List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t07C2E5693B034463FB920742E4CC32D19677F76F (*) (List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.MonoBehaviour>::Dispose()
inline void Enumerator_Dispose_mA18455211C51A1DBF839683A9A405FFB3E51EE32 (Enumerator_t07C2E5693B034463FB920742E4CC32D19677F76F* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t07C2E5693B034463FB920742E4CC32D19677F76F*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.MonoBehaviour>::get_Current()
inline MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* Enumerator_get_Current_m677B6DAF16A498C87390EB1D8491F59DC1225A64_inline (Enumerator_t07C2E5693B034463FB920742E4CC32D19677F76F* __this, const RuntimeMethod* method)
{
	return ((  MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* (*) (Enumerator_t07C2E5693B034463FB920742E4CC32D19677F76F*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void System.Action`1<Oculus.Interaction.HandPosing.ISnapper>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mE2E2F7BD38D859455DEDBF534843720FBC749401 (Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.MonoBehaviour>::MoveNext()
inline bool Enumerator_MoveNext_m7F890D387B8294FF405777D929F894DF8863409F (Enumerator_t07C2E5693B034463FB920742E4CC32D19677F76F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t07C2E5693B034463FB920742E4CC32D19677F76F*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual::UpdateHand(Oculus.Interaction.HandPosing.ISnapper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabInteractorVisual_UpdateHand_m2AABBC3306B11D89A00A97533976E40DB440EF80 (HandGrabInteractorVisual_tC7BD96F6109967EA0B7DACE15907F34E7DE61F6B* __this, RuntimeObject* ___constrainingSnapper0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual::ConstrainingForce(Oculus.Interaction.HandPosing.ISnapper,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabInteractorVisual_ConstrainingForce_m8B775FAF9A65A9844FC2A4E9EF5A70CEA6BDC245 (HandGrabInteractorVisual_tC7BD96F6109967EA0B7DACE15907F34E7DE61F6B* __this, RuntimeObject* ___snapper0, float* ___fingersConstraint1, float* ___wristConstraint2, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual::UpdateHandPose(Oculus.Interaction.HandPosing.ISnapper,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabInteractorVisual_UpdateHandPose_mF180BE13338C28C3B0A719B69446729F45EC9987 (HandGrabInteractorVisual_tC7BD96F6109967EA0B7DACE15907F34E7DE61F6B* __this, RuntimeObject* ___snapper0, float ___fingersConstraint1, float ___wristConstraint2, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual::FreeFingers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabInteractorVisual_FreeFingers_m445A770159339A4C082869BB0FC26014B963465A (HandGrabInteractorVisual_tC7BD96F6109967EA0B7DACE15907F34E7DE61F6B* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual::FreeWrist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabInteractorVisual_FreeWrist_m5B646BDD3D5C8E9112CF106D47565747780785C1 (HandGrabInteractorVisual_tC7BD96F6109967EA0B7DACE15907F34E7DE61F6B* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual::UpdateFingers(Oculus.Interaction.HandPosing.HandPose,Oculus.Interaction.Input.HandFingerFlags,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabInteractorVisual_UpdateFingers_m23FFC73D45128D51232A4E368908E2CA7CB07B87 (HandGrabInteractorVisual_tC7BD96F6109967EA0B7DACE15907F34E7DE61F6B* __this, HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* ___handPose0, int32_t ___grabbingFingers1, float ___strength2, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual::GetWristPose(UnityEngine.Pose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 HandGrabInteractorVisual_GetWristPose_m18BA82D3846ACB4691A8C289DCE3F02993681ECE (HandGrabInteractorVisual_tC7BD96F6109967EA0B7DACE15907F34E7DE61F6B* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___gripPoint0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___offset1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.SyntheticHand::LockWristPose(UnityEngine.Pose,System.Single,Oculus.Interaction.Input.SyntheticHand/WristLockMode,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyntheticHand_LockWristPose_mAC782FC91F436A63D7E0E01FDD5BE8B88F7E5BE3 (SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___wristPose0, float ___overrideFactor1, int32_t ___lockMode2, bool ___worldPose3, bool ___skipAnimation4, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.SyntheticHand::OverrideAllJoints(UnityEngine.Quaternion[]&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyntheticHand_OverrideAllJoints_m112B93989E6B93073B12D39FE25FD5361D93CC2D (SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* __this, QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7** ___jointRotations0, float ___overrideFactor1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.SyntheticHand::SetFingerFreedom(Oculus.Interaction.Input.HandFinger&,Oculus.Interaction.Input.JointFreedom&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyntheticHand_SetFingerFreedom_mAD5CA90074DAA92F5D145AF40F861187C2CFB8D8 (SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* __this, int32_t* ___finger0, int32_t* ___freedomLevel1, bool ___skipAnimation2, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.PoseUtils::Invert(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseUtils_Invert_mCA28790C8C9D9F4FE754FA31D4C796035C36ED13 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___a0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.SyntheticHand::FreeAllJoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyntheticHand_FreeAllJoints_mEE570EF11E376D0E4487AA90EF853EE9D8FBF964 (SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.SyntheticHand::FreeWrist(Oculus.Interaction.Input.SyntheticHand/WristLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyntheticHand_FreeWrist_m2FD78586CE1880855ABB6C02BB0D657BB154C5E6 (SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* __this, int32_t ___lockMode0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual::InjectSnappers(System.Collections.Generic.List`1<Oculus.Interaction.HandPosing.ISnapper>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabInteractorVisual_InjectSnappers_m86A714ACC72E1CFAA0FDE62007AF41FB4455C623 (HandGrabInteractorVisual_tC7BD96F6109967EA0B7DACE15907F34E7DE61F6B* __this, List_1_t3E48FD3D0973549A1410A423D470FEE7B0780644* ___snappers0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual::InjectSyntheticHand(Oculus.Interaction.Input.SyntheticHand)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabInteractorVisual_InjectSyntheticHand_m7F26C9D33D0D8F58837B25102D6FC41F7C043F77_inline (HandGrabInteractorVisual_tC7BD96F6109967EA0B7DACE15907F34E7DE61F6B* __this, SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* ___syntheticHand0, const RuntimeMethod* method) ;
// System.Void System.Converter`2<Oculus.Interaction.HandPosing.ISnapper,UnityEngine.MonoBehaviour>::.ctor(System.Object,System.IntPtr)
inline void Converter_2__ctor_m9B50528B43D5DBFBBBFFA4478C8A06ED286A4286 (Converter_2_t294CE4BF5F775A119FCEE6220D8EC6A8084B01D5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Converter_2_t294CE4BF5F775A119FCEE6220D8EC6A8084B01D5*, RuntimeObject*, intptr_t, const RuntimeMethod*))Converter_2__ctor_mB107CD0E28B613EFEB2F8599A3A56AFA1C4AD1B0_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.List`1<TOutput> System.Collections.Generic.List`1<Oculus.Interaction.HandPosing.ISnapper>::ConvertAll<UnityEngine.MonoBehaviour>(System.Converter`2<T,TOutput>)
inline List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* List_1_ConvertAll_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_mA692175C0E59B8791293D644A837531D852F29B6 (List_1_t3E48FD3D0973549A1410A423D470FEE7B0780644* __this, Converter_2_t294CE4BF5F775A119FCEE6220D8EC6A8084B01D5* ___converter0, const RuntimeMethod* method)
{
	return ((  List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* (*) (List_1_t3E48FD3D0973549A1410A423D470FEE7B0780644*, Converter_2_t294CE4BF5F775A119FCEE6220D8EC6A8084B01D5*, const RuntimeMethod*))List_1_ConvertAll_TisRuntimeObject_m8B145AE4F761F7CEF799C90CA74FFDE44521B3F7_gshared)(__this, ___converter0, method);
}
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m90C834B1D8DD913F005A3C326296284DF151C4C4 (U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Oculus.Interaction.HandPosing.Visuals.HandJointMap::get_RotationOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 HandJointMap_get_RotationOffset_m3F54EEE6340792BF7F87C7E0BCF72F629FF6337C (HandJointMap_t7BF884CEE017C3A9708D2E30BEEA7184CBAA6B12* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.Visuals.JointCollection/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m5755470DDAB44754BD22D5D5EF9384CB1748AAE6 (U3CU3Ec__DisplayClass2_0_tB5698602B356E87D981BF38982C0DE6CB4A55136* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<Oculus.Interaction.HandPosing.Visuals.HandJointMap>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m6BE658BFF1257EBB7D475DDEC4E0ECF758661FD3 (Predicate_1_t91687CB2B83ADB88C43DFAB4EEB94032829B503A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t91687CB2B83ADB88C43DFAB4EEB94032829B503A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Collections.Generic.List`1<Oculus.Interaction.HandPosing.Visuals.HandJointMap>::FindIndex(System.Predicate`1<T>)
inline int32_t List_1_FindIndex_m26868EB42FA10D2E8B9FC435BBEE15862FD288B6 (List_1_t1761C86DC042A8F64FB55B6F1F872C07D735D0A1* __this, Predicate_1_t91687CB2B83ADB88C43DFAB4EEB94032829B503A* ___match0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1761C86DC042A8F64FB55B6F1F872C07D735D0A1*, Predicate_1_t91687CB2B83ADB88C43DFAB4EEB94032829B503A*, const RuntimeMethod*))List_1_FindIndex_m9875FFE328FA833B2617915FF976DEDA4724EBC3_gshared)(__this, ___match0, method);
}
// T System.Collections.Generic.List`1<Oculus.Interaction.HandPosing.Visuals.HandJointMap>::get_Item(System.Int32)
inline HandJointMap_t7BF884CEE017C3A9708D2E30BEEA7184CBAA6B12* List_1_get_Item_m89FD74624095A867D0AA0D96610D7707B2EEAC4D (List_1_t1761C86DC042A8F64FB55B6F1F872C07D735D0A1* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  HandJointMap_t7BF884CEE017C3A9708D2E30BEEA7184CBAA6B12* (*) (List_1_t1761C86DC042A8F64FB55B6F1F872C07D735D0A1*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.Visuals.JointCollection::.ctor(System.Collections.Generic.List`1<Oculus.Interaction.HandPosing.Visuals.HandJointMap>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointCollection__ctor_m3F2EB05BEC599312AACD9140A54CC183101DB21E (JointCollection_t5BE41E43E94A9070AEF4E7BFA23C3C82D5EF3CAA* __this, List_1_t1761C86DC042A8F64FB55B6F1F872C07D735D0A1* ___joints0, const RuntimeMethod* method) ;
// Oculus.Interaction.HandPosing.Visuals.JointCollection Oculus.Interaction.HandPosing.Visuals.HandPuppet::get_JointsCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JointCollection_t5BE41E43E94A9070AEF4E7BFA23C3C82D5EF3CAA* HandPuppet_get_JointsCache_m2FB6F991F95164D215EB430E10D949EA07228CA9 (HandPuppet_tF32101BA76C9B7D199C764ED4E0D8E31C00ECD70* __this, const RuntimeMethod* method) ;
// Oculus.Interaction.HandPosing.Visuals.HandJointMap Oculus.Interaction.HandPosing.Visuals.JointCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandJointMap_t7BF884CEE017C3A9708D2E30BEEA7184CBAA6B12* JointCollection_get_Item_m71C90D76C75B852EA69C007AB837CD2B07F562DB (JointCollection_t5BE41E43E94A9070AEF4E7BFA23C3C82D5EF3CAA* __this, int32_t ___jointIndex0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Oculus.Interaction.HandPosing.Visuals.HandJointMap::get_TrackedRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 HandJointMap_get_TrackedRotation_m3DD2FC11CF2041258B1C612934DD9F61F4B964A2 (HandJointMap_t7BF884CEE017C3A9708D2E30BEEA7184CBAA6B12* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Oculus.Interaction.HandPosing.Visuals.HandJointMap>::.ctor(System.Int32)
inline void List_1__ctor_m0B7B3208E0D8AA0ED774EBCF28503122FF6B22B9 (List_1_t1761C86DC042A8F64FB55B6F1F872C07D735D0A1* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1761C86DC042A8F64FB55B6F1F872C07D735D0A1*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurfaceData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxSurfaceData__ctor_m52BC545F4F428404CD567B47808C118A25C15AA9 (BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* __this, const RuntimeMethod* method) ;
// System.Object Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurfaceData::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BoxSurfaceData_Clone_m0347CF1D71EC2B6F071B458B250FFE879B644848 (BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Transform Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::get_RelativeTo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* BoxSurface_get_RelativeTo_m68823C05FA1E3A26DAEEFCC6A586C0EF17F1CD81_inline (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 BoxSurface_get_Rotation_mE44EF9561F7DA6A8FDCBCDF1B7C5D40812256E33 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<Oculus.Interaction.HandPosing.HandGrabPoint>(T&)
inline bool Component_TryGetComponent_TisHandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C_mF3D3F1BBB511A0FECDD90D56B98D820B1085DCA2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___component0, method);
}
// UnityEngine.Vector3 Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoxSurface_get_Direction_mF82BF328A59977F84E19CEBFF705630C0A06FAF3 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.PoseUtils::MirrorPoseRotation(UnityEngine.Pose&,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 PoseUtils_MirrorPoseRotation_m75D90FFDF911D1B55C9B272F1E979172CA07F985 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tangent2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface>()
inline BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* GameObject_AddComponent_TisBoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977_m913CAF39D0BEF03A8270DDA1494E349BF897E126 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurfaceData Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurfaceData::Mirror()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* BoxSurfaceData_Mirror_m3CE4900CB86FBBCFA2AA44BFE99975849B0CB9FD (BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::set_Data(Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurfaceData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoxSurface_set_Data_m9FDF515CE7A5CCB7CC2331C4F26D285A349B9631_inline (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.SnapSurfaceHelper/PoseCalculator::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseCalculator__ctor_m8A64193C82848D172536F690815D51139A1A7019 (PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.HandPosing.SnapSurfaces.SnapSurfaceHelper::CalculateBestPoseAtSurface(UnityEngine.Pose&,UnityEngine.Pose&,UnityEngine.Pose&,Oculus.Interaction.HandPosing.PoseMeasureParameters&,Oculus.Interaction.HandPosing.SnapSurfaces.SnapSurfaceHelper/PoseCalculator,Oculus.Interaction.HandPosing.SnapSurfaces.SnapSurfaceHelper/PoseCalculator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SnapSurfaceHelper_CalculateBestPoseAtSurface_mBCF5860B0EED51F07471540A2E9DC48298067EFE (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___desiredPose0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___snapPose1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___bestPose2, PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* ___scoringModifier3, PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9* ___minimalTranslationPoseCalculator4, PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9* ___minimalRotationPoseCalculator5, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) ;
// UnityEngine.Transform Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::get_GripPoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* BoxSurface_get_GripPoint_m8FB2DB8D71AB2B5EA2FB6AB6A6E836D874526155_inline (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Project(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Project_m47BC1C674D5732D50B6E136626FB2C53E18A706E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___onNormal1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane__ctor_m2BFB65EBFF51123791878684ECC375B99FAD10A2 (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___inNormal0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___inPoint1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plane_Raycast_mC6D25A732413A2694A75CB0F2F9E75DEDDA117F0 (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, float* ___enter1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::NearestPointInSurface(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoxSurface_NearestPointInSurface_m9BF2E8F551A1209996BC1BF0DEB91B9DB8706419 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Pose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::MinimalTranslationPoseAtSurface(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BoxSurface_MinimalTranslationPoseAtSurface_mD7608A89BCBBE0755F5791DB997375CF41AA2C5D (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___userPose0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___snapPose1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::NearestPointAndAngleInSurface(UnityEngine.Vector3,UnityEngine.Vector3&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxSurface_NearestPointAndAngleInSurface_mF363A54ADCDE16A22817C968D47C12CE50E63D21 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___surfacePoint1, float* ___angle2, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::CalculateCorners(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxSurface_CalculateCorners_m6C5C6ECDEAD93A44CDAB93B740109BF7A8A5D83E (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___bottomLeft0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___bottomRight1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___topLeft2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___topRight3, const RuntimeMethod* method) ;
// UnityEngine.Vector4 Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::get_SnapOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 BoxSurface_get_SnapOffset_m4C1BFC078BA32B3E9A47BD52B3CD3F3C72D31B83 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`2<UnityEngine.Vector3,UnityEngine.Vector3>::.ctor(T1,T2)
inline void ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F (ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item10, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F_gshared)(__this, ___item10, ___item21, method);
}
// UnityEngine.Vector3 Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::ProjectOnSegment(UnityEngine.Vector3,System.ValueTuple`2<UnityEngine.Vector3,UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoxSurface_ProjectOnSegment_m0BA7D4004312EE8632A8A9AA5DF418BC90B77F24 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3 ___segment1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.PoseUtils::RotationalSimilarity(UnityEngine.Quaternion&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PoseUtils_RotationalSimilarity_mD087E6543B452A612111592AEDBCAEB060F014A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___from0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___to1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::RotateUp(UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 BoxSurface_RotateUp_m4A4AFD04CCEABFD9B771AD6F27E4A27E9A184112 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___baseRot0, float ___angle1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::InjectData(Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurfaceData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoxSurface_InjectData_mBAFBCED8AA78EE8ED58DD4AF22D687D9B2927CC4_inline (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* ___data0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::InjectRelativeTo(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoxSurface_InjectRelativeTo_m8341182DED88E327488B3E38226B052A66FAD2E6_inline (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::InjectGripPoint(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoxSurface_InjectGripPoint_m01B5459B30796A1A8A59E9F5B891FF82206A3721_inline (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___gripPoint0, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::CalculateBestPoseAtSurface(UnityEngine.Pose&,UnityEngine.Pose&,UnityEngine.Pose&,Oculus.Interaction.HandPosing.PoseMeasureParameters&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BoxSurface_CalculateBestPoseAtSurface_m02AD52CA19D1CB295436ECB013C751156FB456F2 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___targetPose0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___reference1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___bestPose2, PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* ___scoringModifier3, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::CalculateBestPoseAtSurface(UnityEngine.Ray,UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoxSurface_CalculateBestPoseAtSurface_mB385716B166F3C1681D76E7097D12ABF66C8D589 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___targetRay0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___recordedPose1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___bestPose2, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::MirrorPose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BoxSurface_MirrorPose_m1D1BE8E6B3098C2155ED1977244A82F2BEC195BC (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose0, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Bounds::Contains(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bounds_Contains_m584E9DE0CF9D90C3C4F928BA8F5AD328393F3555 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Collider::ClosestPointOnBounds(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Collider_ClosestPointOnBounds_mBF2F0C0E76C5F11AED801931D780823A94630952 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Collider::ClosestPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Collider_ClosestPoint_mFFF9B6F6CF9F18B22B325835A3E2E78A1C03BFCB (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.HandPosing.SnapSurfaces.ColliderSurface::NearestPointInSurface(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ColliderSurface_NearestPointInSurface_mAA8CD46474C060B19481FAE042F08ECC8FA5573C (ColliderSurface_tD86CE6FAE81AE6A40C631D4452569C21092E31C4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.PoseUtils::PositionalSimilarity(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PoseUtils_PositionalSimilarity_m15282E40451240B3507DC91DD0701313FC4A8F96 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___to1, float ___maxDistance2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Collider::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_Raycast_mD7683E94051173B3FFC0862F4A17847E94AEB938 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Pose_get_identity_m523758317678304723B886B84FEFC973E9FE1BBE (const RuntimeMethod* method) ;
// Oculus.Interaction.HandPosing.SnapSurfaces.ISnapSurface Oculus.Interaction.HandPosing.SnapSurfaces.ColliderSurface::CreateDuplicatedSurface(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ColliderSurface_CreateDuplicatedSurface_mC0EF21F942A05378EAFE8FC4685793BC273FCF27 (ColliderSurface_tD86CE6FAE81AE6A40C631D4452569C21092E31C4* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Oculus.Interaction.HandPosing.SnapSurfaces.ColliderSurface>()
inline ColliderSurface_tD86CE6FAE81AE6A40C631D4452569C21092E31C4* GameObject_AddComponent_TisColliderSurface_tD86CE6FAE81AE6A40C631D4452569C21092E31C4_m0FA96BCF8F09F71CD4DE26C6750A78ECC5AA2862 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ColliderSurface_tD86CE6FAE81AE6A40C631D4452569C21092E31C4* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.ColliderSurface::InjectAllColliderSurface(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderSurface_InjectAllColliderSurface_mF2028B80E81CC10974B2547413013DF68E9789B4 (ColliderSurface_tD86CE6FAE81AE6A40C631D4452569C21092E31C4* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.ColliderSurface::InjectCollider(UnityEngine.Collider)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColliderSurface_InjectCollider_m4C1AC74F1CF206F58246DF738A4DDC84F121CC5C_inline (ColliderSurface_tD86CE6FAE81AE6A40C631D4452569C21092E31C4* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider0, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.HandPosing.SnapSurfaces.ColliderSurface::CalculateBestPoseAtSurface(UnityEngine.Pose&,UnityEngine.Pose&,UnityEngine.Pose&,Oculus.Interaction.HandPosing.PoseMeasureParameters&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ColliderSurface_CalculateBestPoseAtSurface_mD2FE0C3DB53479CE343B9AFC4C6B432368803E50 (ColliderSurface_tD86CE6FAE81AE6A40C631D4452569C21092E31C4* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___targetPose0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___snapPose1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___bestPose2, PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* ___scoringModifier3, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.HandPosing.SnapSurfaces.ColliderSurface::CalculateBestPoseAtSurface(UnityEngine.Ray,UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderSurface_CalculateBestPoseAtSurface_m2D75A4351E70D8127DA5463B8F823F7CD7E6CDB1 (ColliderSurface_tD86CE6FAE81AE6A40C631D4452569C21092E31C4* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___targetRay0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___recordedPose1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___bestPose2, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.HandPosing.SnapSurfaces.ColliderSurface::MirrorPose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ColliderSurface_MirrorPose_m5F584223DCA2913242AA165E0C08186077A872BE (ColliderSurface_tD86CE6FAE81AE6A40C631D4452569C21092E31C4* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___gripPose0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurfaceData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CylinderSurfaceData__ctor_m305B0457074DDBFAB596955FF0FEA998F2E48E2E (CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* __this, const RuntimeMethod* method) ;
// System.Object Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurfaceData::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CylinderSurfaceData_Clone_m2EA1FEF792339B1FCCB6AAE23C67C73CD5EA9B9C (CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::get_GripPoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* CylinderSurface_get_GripPoint_mAA81F61E2271E2125C756B3BD3EFAA9FAB05E877_inline (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::get_StartPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CylinderSurface_get_StartPoint_mB6637372DB826E60E4340BA8C6A0FFC153FC0844 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CylinderSurface_get_Direction_m07F109F47417C1017C7F121AD6E19EA642C7A3B6 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::ProjectOnPlane(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ProjectOnPlane_mCAFA9F9416EA4740DCA8757B6E52260BF536770A_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___planeNormal1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::get_Angle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CylinderSurface_get_Angle_m624EC15AE4BA62FB4692DB0CA480D585626F4B10 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::get_StartAngleDir()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CylinderSurface_get_StartAngleDir_m5733F48D749259C66192FF33F2ED4D7452140CD3 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::get_RelativeTo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* CylinderSurface_get_RelativeTo_m38D2A74202F0E53281B082B564827F5C63C36739_inline (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline (float ___t0, float ___length1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::get_EndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CylinderSurface_get_EndPoint_m5D9D1F675FB4E86A77F4C573C67888AD75B28990 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upwards1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface>()
inline CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* GameObject_AddComponent_TisCylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8_m6A3866D30A44EE2674A08AADB1EE08334776B813 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurfaceData Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurfaceData::Mirror()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* CylinderSurfaceData_Mirror_mB74EE6C67C95269833955E8970A4BEDC23E3FE9C (CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::set_Data(Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurfaceData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CylinderSurface_set_Data_m3E62E48BC647779CF1737370D509BAB3AD63278B_inline (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* ___value0, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CylinderSurface_get_Height_m7021CA6717B684F1FD4002CFE5DD24EF4914D295 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::SignedAngle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_SignedAngle_mD30E71B2F64983C2C4D86F17E7023BAA84CE50BE_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::get_EndAngleDir()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CylinderSurface_get_EndAngleDir_mA73998BCEFB4794C9E889E109E5E937867890298 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::get_Radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CylinderSurface_get_Radius_m583FC7EB1EBE612222F0A6E6C281A1352C6D2CB7 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::NearestPointInSurface(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CylinderSurface_NearestPointInSurface_mD00A9E03833220F80F828C660B11A2C1477FF82B (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::MinimalTranslationPoseAtSurface(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 CylinderSurface_MinimalTranslationPoseAtSurface_m3969B101312C52DB0B2EBD8F6840601E8A0EFAAE (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___userPose0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___snapPose1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CylinderSurface_get_Rotation_mA5087FD98DB58DA7BE0DDD458C04B73A9D555DC2 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::PointAltitude(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CylinderSurface_PointAltitude_m1437BE3591041B38F4A912326270FFEFD3C6B87B (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::CalculateRotationOffset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CylinderSurface_CalculateRotationOffset_mE86652F816ACBCF282E258C9512FCFCC3A049BB7 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___surfacePoint0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_FromToRotation_m041093DBB23CB3641118310881D6B7746E3B8418 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fromDirection0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___toDirection1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::InjectData(Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurfaceData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CylinderSurface_InjectData_m0F95758FD54FA036A69E3CF0CF64AF5A5689C61C_inline (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* ___data0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::InjectRelativeTo(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CylinderSurface_InjectRelativeTo_m3A4143D6DAAFF5DBD243489A6996243B4F681669_inline (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::InjectGripPoint(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CylinderSurface_InjectGripPoint_m72AA9E8869F7DF78724EC8BAACA6DEA6E4572517_inline (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___gripPoint0, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::CalculateBestPoseAtSurface(UnityEngine.Pose&,UnityEngine.Pose&,UnityEngine.Pose&,Oculus.Interaction.HandPosing.PoseMeasureParameters&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CylinderSurface_CalculateBestPoseAtSurface_m84C16566F546AC2A2320168B218631922E28EF52 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___targetPose0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___reference1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___bestPose2, PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* ___scoringModifier3, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::CalculateBestPoseAtSurface(UnityEngine.Ray,UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CylinderSurface_CalculateBestPoseAtSurface_mFD2117B4AC79E2503B42737915B2C8A17930EF4E (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___targetRay0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___recordedPose1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___bestPose2, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::MirrorPose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 CylinderSurface_MirrorPose_mE0D518C3965A9A851BD8516EEEFC4E52582D7A96 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose0, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.HandPosing.SnapSurfaces.SnapSurfaceHelper/PoseCalculator::Invoke(UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 PoseCalculator_Invoke_m35DB7C55FD3BAE3D5614737177E10D9273F5D27D_inline (PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___desiredPose0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___snapPose1, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.HandPosing.SnapSurfaces.SnapSurfaceHelper::SelectBestPose(UnityEngine.Pose&,UnityEngine.Pose&,UnityEngine.Pose&,Oculus.Interaction.HandPosing.PoseMeasureParameters,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 SnapSurfaceHelper_SelectBestPose_m0B7FDAA9F6EFF5067E371A1B2CCA3C12277F61F2 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___a0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___b1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___reference2, PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1 ___scoringModifier3, float* ___bestScore4, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurfaceData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereSurfaceData__ctor_m266AE72DF1DA7F04774876776C2A5570B5D91DE1 (SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A* __this, const RuntimeMethod* method) ;
// System.Object Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurfaceData::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SphereSurfaceData_Clone_mE5EAFCBCF90AED9393045EF33A65BAF0AC898F94 (SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::get_RelativeTo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* SphereSurface_get_RelativeTo_m1F769107F4CA85046D0330189DA956FE5F9E1C6C_inline (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::get_GripPoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* SphereSurface_get_GripPoint_m8522E647F035327EFC168A9C0C31AC0B007EBF57_inline (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::get_Centre()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SphereSurface_get_Centre_m4724AC8A79D22FC1532C45E892EE534E14FB520C (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SphereSurface_get_Direction_m2ACD11F782EB1AFA6983E7176F62CDC0C88F8528 (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_m77F64620D73934C56BEE37A64016DBDCB9D21DB8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::get_Radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SphereSurface_get_Radius_mA861B88AF762E71D821F394072E117C374BC2739 (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::NearestPointInSurface(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SphereSurface_NearestPointInSurface_mED38A5FD68C8D6BDFC528DE31A9DAE2D6249B9AF (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::MinimalTranslationPoseAtSurface(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 SphereSurface_MinimalTranslationPoseAtSurface_mBE8B978B29B9C498B7864119315C055184EDBA3C (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___userPose0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___snapPose1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface>()
inline SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* GameObject_AddComponent_TisSphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E_m610C4B895B9CAD51DB73FB01BF5F53491EFC039A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurfaceData Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurfaceData::Mirror()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A* SphereSurfaceData_Mirror_m9BFBFFD2638E2A51740D8919BA7898F9923F5F8D (SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::set_Data(Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurfaceData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SphereSurface_set_Data_m8F045794467C4365539C07B4613E77B309C7C69F_inline (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::RotationAtPoint(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SphereSurface_RotationAtPoint_m60E7F3C3838601AEB14F28FB6CEF3651ED88E12A (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___surfacePoint0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___baseRot1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___desiredRotation2, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::InjectData(Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurfaceData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SphereSurface_InjectData_m867B1DDD82F515363ADEA3F1B2983B738E415F39_inline (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A* ___data0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::InjectRelativeTo(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SphereSurface_InjectRelativeTo_m270C5FD4255D7B28D3D1AC8CC7E0073D785C270D_inline (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::InjectGripPoint(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SphereSurface_InjectGripPoint_m8FEC738D640CF2E4FE97FDB0B7CFB07C62F456FB_inline (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___gripPoint0, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::CalculateBestPoseAtSurface(UnityEngine.Pose&,UnityEngine.Pose&,UnityEngine.Pose&,Oculus.Interaction.HandPosing.PoseMeasureParameters&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SphereSurface_CalculateBestPoseAtSurface_m95A7ED6DEC2D47724CCC6D3FE546F699123DDDB2 (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___targetPose0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___reference1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___bestPose2, PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* ___scoringModifier3, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::CalculateBestPoseAtSurface(UnityEngine.Ray,UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SphereSurface_CalculateBestPoseAtSurface_mF1FF0078CC2AE2AAE754F802F8CF05A76C0E3261 (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___targetRay0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___recordedPose1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___bestPose2, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::MirrorPose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 SphereSurface_MirrorPose_m8004320D10784FB322E2620A5D13C3C320B90286 (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose0, const RuntimeMethod* method) ;
// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.GrabAPI.GrabbingRule::get_DefaultPinchRule()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D GrabbingRule_get_DefaultPinchRule_m4D757CE5E8DD549FDB7E01FFD283DE8F6C0061F5_inline (const RuntimeMethod* method) ;
// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.GrabAPI.GrabbingRule::get_DefaultPalmRule()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D GrabbingRule_get_DefaultPalmRule_mB9E377D27547C4D09D89E03ABE38940977732768_inline (const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Grab.HandGrabInteractableData::set_SupportedGrabTypes(Oculus.Interaction.Grab.GrabTypeFlags)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabInteractableData_set_SupportedGrabTypes_m5B8FE59B7EAAF0915DC9F99B920EBB17E17F9F5A_inline (HandGrabInteractableData_t46F6982E1DA3B4A95A3510E6E001D4FF8CB51C69* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.Grab.HandGrab::SupportsPinch(Oculus.Interaction.Grab.IHandGrabInteractor,Oculus.Interaction.Grab.IHandGrabInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrab_SupportsPinch_m98F4E97BCA37CC8DB5BDC94733B0F22D221BFFE6 (RuntimeObject* ___interactor0, RuntimeObject* ___interactable1, const RuntimeMethod* method) ;
// Oculus.Interaction.Input.HandFingerFlags Oculus.Interaction.GrabAPI.HandGrabAPI::HandPinchGrabbingFingers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandGrabAPI_HandPinchGrabbingFingers_m0C39BC9CA1B701B249975739A776C78FF399F4B2 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.GrabAPI.HandGrabAPI::IsSustainingGrab(Oculus.Interaction.GrabAPI.GrabbingRule&,Oculus.Interaction.Input.HandFingerFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabAPI_IsSustainingGrab_m3D572C621F6A5DA88F50AAC29E2E3D0E62BA6798 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___fingers0, int32_t ___grabbingFingers1, const RuntimeMethod* method) ;
// Oculus.Interaction.Grab.GrabTypeFlags Oculus.Interaction.Grab.HandGrabInteractableData::get_SupportedGrabTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HandGrabInteractableData_get_SupportedGrabTypes_m645BE16149B48BCD75C7CB1EAAB08D95780CB364_inline (HandGrabInteractableData_t46F6982E1DA3B4A95A3510E6E001D4FF8CB51C69* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.GrabbingRule::.ctor(Oculus.Interaction.Input.HandFingerFlags,Oculus.Interaction.GrabAPI.GrabbingRule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabbingRule__ctor_m1A7CF0E024E02E1A7BA82B8FC6390AD4E8D59AF3 (GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* __this, int32_t ___mask0, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___otherRule1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Grab.HandGrabInteractableData::set_PinchGrabRules(Oculus.Interaction.GrabAPI.GrabbingRule)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabInteractableData_set_PinchGrabRules_m344A0095D6EC49A3C0D18F03A2429E40E2DD8D3F_inline (HandGrabInteractableData_t46F6982E1DA3B4A95A3510E6E001D4FF8CB51C69* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D ___value0, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.Grab.HandGrab::SupportsPalm(Oculus.Interaction.Grab.IHandGrabInteractor,Oculus.Interaction.Grab.IHandGrabInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrab_SupportsPalm_mF10A7EEAF76DDE5D106858DAFD4891F1C45C9165 (RuntimeObject* ___interactor0, RuntimeObject* ___interactable1, const RuntimeMethod* method) ;
// Oculus.Interaction.Input.HandFingerFlags Oculus.Interaction.GrabAPI.HandGrabAPI::HandPalmGrabbingFingers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandGrabAPI_HandPalmGrabbingFingers_m0D9B276FA470653292D47DF7D3BE5D6595407DEC (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Grab.HandGrabInteractableData::set_PalmGrabRules(Oculus.Interaction.GrabAPI.GrabbingRule)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabInteractableData_set_PalmGrabRules_mFF0D9A26D57EA0FAEE2BE3566D09D601CF5DCFA4_inline (HandGrabInteractableData_t46F6982E1DA3B4A95A3510E6E001D4FF8CB51C69* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D ___value0, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.GrabAPI.HandGrabAPI::GetHandPinchStrength(Oculus.Interaction.GrabAPI.GrabbingRule&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandGrabAPI_GetHandPinchStrength_m8436E27FA3BB79B7C6CDE7F17AF82183177344AB (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___fingers0, bool ___includePinching1, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.GrabAPI.HandGrabAPI::GetHandPalmStrength(Oculus.Interaction.GrabAPI.GrabbingRule&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandGrabAPI_GetHandPalmStrength_m999B7B6A1D08C27390F4B874703D8ED675F43E42 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___fingers0, bool ___includeGrabbing1, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.GrabAPI.HandGrabAPI::IsHandSelectPinchFingersChanged(Oculus.Interaction.GrabAPI.GrabbingRule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabAPI_IsHandSelectPinchFingersChanged_mDEE9E9F826A9D2CB0C41301B9AFC1E91F9897722 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___fingers0, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.GrabAPI.HandGrabAPI::IsHandSelectPalmFingersChanged(Oculus.Interaction.GrabAPI.GrabbingRule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabAPI_IsHandSelectPalmFingersChanged_mEE727D93CA46FE21A81048E57361B384DD1D1F6D (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___fingers0, const RuntimeMethod* method) ;
// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.GrabAPI.GrabbingRule::get_FullGrab()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D GrabbingRule_get_FullGrab_mEF2400CB55E6A3D0CE520CD0F7EEFC68AAB1C828_inline (const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.Grab.HandGrab::SupportsPinch(Oculus.Interaction.Grab.IHandGrabInteractor,Oculus.Interaction.Grab.GrabTypeFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrab_SupportsPinch_mBB1923135E088A09751D4BA2491183A5EF1D7430 (RuntimeObject* ___interactor0, int32_t ___grabTypes1, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.GrabAPI.HandGrabAPI::IsHandUnselectPinchFingersChanged(Oculus.Interaction.GrabAPI.GrabbingRule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabAPI_IsHandUnselectPinchFingersChanged_mE1C455D9B209E1A3B1542B3BB66B4C69C1054A70 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___fingers0, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.Grab.HandGrab::SupportsPalm(Oculus.Interaction.Grab.IHandGrabInteractor,Oculus.Interaction.Grab.GrabTypeFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrab_SupportsPalm_m50874A4E3BD7F16F48EAABF8486AD0EACC98E818 (RuntimeObject* ___interactor0, int32_t ___grabTypes1, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.GrabAPI.HandGrabAPI::IsHandUnselectPalmFingersChanged(Oculus.Interaction.GrabAPI.GrabbingRule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabAPI_IsHandUnselectPalmFingersChanged_m6FAE8A160394C24EB8CF18A3D8F412D0ECF49E29 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___fingers0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.GrabbingRule::StripIrrelevant(Oculus.Interaction.Input.HandFingerFlags&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabbingRule_StripIrrelevant_m160B28EF238610D089F85F8CEF30B7E4DDB4B39A (GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* __this, int32_t* ___fingerFlags0, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/FingerGrabData::get_IsGrabbingChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FingerGrabData_get_IsGrabbingChanged_m637945455FACC83F5D0507B69D4CE34AD9C9973A_inline (FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::ClearState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPalmGrabAPI_ClearState_mEE04361BF8998A37C95219F0150E4B9C64FB67B3 (FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::UpdateVolumeCenter(Oculus.Interaction.Input.IHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPalmGrabAPI_UpdateVolumeCenter_m718C6FCAAFFC26B3C6B54CCD86C222CD3B21C0EB (FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327* __this, RuntimeObject* ___hand0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/FingerGrabData::UpdateTipValues(Oculus.Interaction.Input.IHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerGrabData_UpdateTipValues_m30A05F64BA568511CB0F549E2B7940ADEF78C95A (FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D* __this, RuntimeObject* ___hand0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/FingerGrabData::UpdateGrabStrength(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerGrabData_UpdateGrabStrength_m2F1DBFC392D829D0EFD79733B2BE1020AE2C797F (FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___poseVolumeCenter0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/FingerGrabData::UpdateIsGrabbing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerGrabData_UpdateIsGrabbing_mE4B4B11CF2C24890A759B31FCB90C50BCC2126E2 (FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/FingerGrabData::ClearState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerGrabData_ClearState_mC17219861E9F53E477E73D7CECE4664A2406A976 (FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_TRS_mFEBA6926DB0044B96EF0CE98F30FEE7596820680 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/FingerGrabData::.ctor(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerGrabData__ctor_m5D6D85D51D8448D3C284D6DDBC79AB97B0BF065D (FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D* __this, int32_t ___fingerId0, const RuntimeMethod* method) ;
// Oculus.Interaction.Input.HandJointId Oculus.Interaction.Input.HandJointUtils::GetHandFingerTip(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandJointUtils_GetHandFingerTip_m4E1A205E74BA3C398144D7EDD5E940C808929DF0 (int32_t ___finger0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/FingerGrabData::set_IsGrabbingChanged(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FingerGrabData_set_IsGrabbingChanged_m6476DBC59E4B5EC3BD9BCB9DF9D4F22DFE5D3C28_inline (FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/FingerPinchData::get_TipPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FingerPinchData_get_TipPosition_m58FA8A0B4731588698E3A5CDF80267150D195F4E_inline (FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::GetFingerIsGrabbing(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FingerPinchGrabAPI_GetFingerIsGrabbing_m0020BB2B19FDEB907D52BB3FEC56A11057A950C0 (FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832* __this, int32_t ___finger0, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/FingerPinchData::get_IsPinchingChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FingerPinchData_get_IsPinchingChanged_mC7CD68EA612DC57CB0920BC1A1151AFBBDC7B859_inline (FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::ClearState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchGrabAPI_ClearState_m2D00129DA613AC324C38152F291197D4B96C7AD4 (FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::PinchHasGoodVisibility(Oculus.Interaction.Input.IHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FingerPinchGrabAPI_PinchHasGoodVisibility_m3EA4ECD3418C6D03E701A3C33112EA8D1FBD4AEC (FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832* __this, RuntimeObject* ___hand0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/FingerPinchData::UpdateTipPosition(Oculus.Interaction.Input.IHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchData_UpdateTipPosition_m9E17EB70A89EE6706D81DC312DCB4D4E1C3ADF6A (FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* __this, RuntimeObject* ___hand0, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::GetClosestDistanceToThumb(Oculus.Interaction.Input.IHand,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FingerPinchGrabAPI_GetClosestDistanceToThumb_m7F8A0C5AACA9F8C0D804A2D4FC750B7B478B9891 (FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832* __this, RuntimeObject* ___hand0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::get_DistanceStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FingerPinchGrabAPI_get_DistanceStart_m9537C5FAAEF7A704779CC31CFBC8C62F18BC7BD7 (FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832* __this, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::get_DistanceStopOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FingerPinchGrabAPI_get_DistanceStopOffset_m6A1D4596FD2B7F72299A28B982DC1606F01BA9C2 (FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832* __this, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::get_DistanceStopMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FingerPinchGrabAPI_get_DistanceStopMax_m96AA0C888EA3CA230805E41D61872E55F1491D29 (FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/FingerPinchData::UpdateIsPinching(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchData_UpdateIsPinching_mE099354AFD057B7ED02631AC1ABB9A412A3F2A1E (FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* __this, float ___distance0, float ___start1, float ___stopOffset2, float ___stopMax3, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/FingerPinchData::ClearState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchData_ClearState_mFA67B576B3E4E5749E68C821D5494B183058FFA2 (FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* __this, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::ClosestDistanceToLineSegment(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FingerPinchGrabAPI_ClosestDistanceToLineSegment_mE32D036FBA8AA403FD30278060975D08B845D7FE (FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p01, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p12, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/FingerPinchData::.ctor(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchData__ctor_m5B62B14AF96308E57837D3396783AF2133E9CA64 (FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* __this, int32_t ___fingerId0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/FingerPinchData::set_TipPosition(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FingerPinchData_set_TipPosition_mC73A53E4D31D91685484226D669D44646B0CA042_inline (FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/FingerPinchData::set_IsPinchingChanged(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FingerPinchData_set_IsPinchingChanged_mF0BFCA9BE005D7373EDB2093035102FB668EBF6B_inline (FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::get_TipPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FingerPinchData_get_TipPosition_mD5B40DFF813DE6F3C3B6BCF1091C32D028AAF5D7_inline (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::get_IsPinchingChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FingerPinchData_get_IsPinchingChanged_mCC16B97C0A6CA61D1D18800F7FBF1E2F4E08340A_inline (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.FingerRawPinchAPI::ClearState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerRawPinchAPI_ClearState_m22847F4F203CEEE8AB4F3A352044FA12ADC3C9B8 (FingerRawPinchAPI_t1AD298888438539EB75E75FF0E4F46751B7FBFF1* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::UpdateIsPinching(Oculus.Interaction.Input.IHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchData_UpdateIsPinching_mF6AC20AE2029F842D68FFCCBD38F00E8CDDFD138 (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, RuntimeObject* ___hand0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::ClearState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchData_ClearState_mFC11EF56BB84EB4D7503C13F1C1385AD52336105 (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::.ctor(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchData__ctor_mF3292DF9F4DD1FD4B0051B20494767C58AA2A048 (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, int32_t ___fingerId0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::set_TipPosition(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FingerPinchData_set_TipPosition_m2E44E281C9260D70D7A96DDF84EDA38C06E79480_inline (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::set_IsPinchingChanged(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FingerPinchData_set_IsPinchingChanged_m36687E55DAA73DDC0177E6E9E6A1E23D91600B4A_inline (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.FingerRawPinchAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerRawPinchAPI__ctor_m805D09118C5FE7C1300350C73BA36B98CE1528B3 (FingerRawPinchAPI_t1AD298888438539EB75E75FF0E4F46751B7FBFF1* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.HandGrabAPI::InjectOptionalFingerPinchAPI(Oculus.Interaction.GrabAPI.IFingerAPI)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabAPI_InjectOptionalFingerPinchAPI_m7BE3F921672379C65B3D661312A72627D343282A_inline (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, RuntimeObject* ___fingerPinchAPI0, const RuntimeMethod* method) ;
// Oculus.Interaction.GrabAPI.FingerUnselectMode Oculus.Interaction.GrabAPI.GrabbingRule::get_UnselectMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GrabbingRule_get_UnselectMode_m74121A8FF930D66225FF446E8062C536D20E8045_inline (GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.GrabAPI.GrabbingRule::get_SelectsWithOptionals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GrabbingRule_get_SelectsWithOptionals_m93735F7E62317ED4A0FF86D0F76C4CC487901749 (GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* __this, const RuntimeMethod* method) ;
// Oculus.Interaction.GrabAPI.FingerRequirement Oculus.Interaction.GrabAPI.GrabbingRule::get_Item(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GrabbingRule_get_Item_m87B36C25D493D03CB84F3CC495841F952C2025AC (GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* __this, int32_t ___fingerID0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.GrabbingRule::set_Item(Oculus.Interaction.Input.HandFinger,Oculus.Interaction.GrabAPI.FingerRequirement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabbingRule_set_Item_m170315382876BD6460CD190359386202E4840F08 (GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* __this, int32_t ___fingerID0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.HandGrabAPI::set_Hand(Oculus.Interaction.Input.IHand)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabAPI_set_Hand_mD5AFDFC0CD8B3C0E7BCDD6B7B9BEFF70CC90F455_inline (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// Oculus.Interaction.Input.IHand Oculus.Interaction.GrabAPI.HandGrabAPI::get_Hand()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HandGrabAPI_get_Hand_m72A5774D97A3AAC504C0B4CAB2AD193323236A6E_inline (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// Oculus.Interaction.Input.HandFingerFlags Oculus.Interaction.GrabAPI.HandGrabAPI::HandGrabbingFingers(Oculus.Interaction.GrabAPI.IFingerAPI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandGrabAPI_HandGrabbingFingers_m3FF099AF6AE870A978D604643E53B3A70722052E (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, RuntimeObject* ___fingerAPI0, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.GrabAPI.HandGrabAPI::IsHandSelectFingersChanged(Oculus.Interaction.GrabAPI.GrabbingRule&,Oculus.Interaction.GrabAPI.IFingerAPI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabAPI_IsHandSelectFingersChanged_m700927546B27801F77A02EE13BBD2635E19A8556 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___fingers0, RuntimeObject* ___fingerAPI1, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.GrabAPI.HandGrabAPI::IsHandUnselectFingersChanged(Oculus.Interaction.GrabAPI.GrabbingRule&,Oculus.Interaction.GrabAPI.IFingerAPI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabAPI_IsHandUnselectFingersChanged_m797F66ACF291DCE88CB05FCE6409621A2F4A6591 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___fingers0, RuntimeObject* ___fingerAPI1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.GrabAPI.HandGrabAPI::WristOffsetToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HandGrabAPI_WristOffsetToWorldPoint_mBB6C13E0BA2C62676646899435F3F3AD0201681F (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset0, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.GrabAPI.HandGrabAPI::GetHandStrength(Oculus.Interaction.GrabAPI.GrabbingRule&,System.Boolean,Oculus.Interaction.GrabAPI.IFingerAPI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandGrabAPI_GetHandStrength_mFBD1F31B18D0CF98D4EA256893C687B165CD3A10 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___fingers0, bool ___includeGrabbing1, RuntimeObject* ___fingerAPI2, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.HandGrabAPI::InjectHand(Oculus.Interaction.Input.IHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabAPI_InjectHand_m8D8F7F371C2A3E16C0C80D69E1052555FE28C17F (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, RuntimeObject* ___hand0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchGrabAPI__ctor_mB9D2EDD374CB70D1E4009C4769043AF7D9874875 (FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPalmGrabAPI__ctor_mC033897D9E80D5FC6BF9BE712495460B91A7CD99 (FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline (float ___f0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.HandPosing.HandGrabInteractor/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m3BD14582F59F5306B9EADB4F4557C0C7F03E676C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7AFC96100701BBEE927BCADD76132B25C689BF19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7AFC96100701BBEE927BCADD76132B25C689BF19* L_0 = (U3CU3Ec_t7AFC96100701BBEE927BCADD76132B25C689BF19*)il2cpp_codegen_object_new(U3CU3Ec_t7AFC96100701BBEE927BCADD76132B25C689BF19_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m4557110DD8AFB3F71B31D5395378952483771849(L_0, NULL);
		((U3CU3Ec_t7AFC96100701BBEE927BCADD76132B25C689BF19_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AFC96100701BBEE927BCADD76132B25C689BF19_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7AFC96100701BBEE927BCADD76132B25C689BF19_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AFC96100701BBEE927BCADD76132B25C689BF19_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.HandGrabInteractor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4557110DD8AFB3F71B31D5395378952483771849 (U3CU3Ec_t7AFC96100701BBEE927BCADD76132B25C689BF19* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.HandGrabInteractor/<>c::<.ctor>b__75_0(Oculus.Interaction.HandPosing.ISnapper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__75_0_mCA8F25503D86AFB7F459CB63EB485AB1D3558FBB (U3CU3Ec_t7AFC96100701BBEE927BCADD76132B25C689BF19* __this, RuntimeObject* ___U3Cp0U3E0, const RuntimeMethod* method) 
{
	{
		// public System.Action<ISnapper> WhenSnapStarted { get; set; } = delegate { };
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.HandGrabInteractor/<>c::<.ctor>b__75_1(Oculus.Interaction.HandPosing.ISnapper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__75_1_m72D50EC3EC5BC94D6FB807BE25A6AFD13FE169D0 (U3CU3Ec_t7AFC96100701BBEE927BCADD76132B25C689BF19* __this, RuntimeObject* ___U3Cp0U3E0, const RuntimeMethod* method) 
{
	{
		// public System.Action<ISnapper> WhenSnapEnded { get; set; } = delegate { };
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
// Conversion methods for marshalling of: Oculus.Interaction.HandPosing.HandGrabPointData
IL2CPP_EXTERN_C void HandGrabPointData_tBA3966DD98D8606128F8BCFA5613B269D44A8289_marshal_pinvoke(const HandGrabPointData_tBA3966DD98D8606128F8BCFA5613B269D44A8289& unmarshaled, HandGrabPointData_tBA3966DD98D8606128F8BCFA5613B269D44A8289_marshaled_pinvoke& marshaled)
{
	Exception_t* ___handPose_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'handPose' of type 'HandGrabPointData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___handPose_1Exception, NULL);
}
IL2CPP_EXTERN_C void HandGrabPointData_tBA3966DD98D8606128F8BCFA5613B269D44A8289_marshal_pinvoke_back(const HandGrabPointData_tBA3966DD98D8606128F8BCFA5613B269D44A8289_marshaled_pinvoke& marshaled, HandGrabPointData_tBA3966DD98D8606128F8BCFA5613B269D44A8289& unmarshaled)
{
	Exception_t* ___handPose_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'handPose' of type 'HandGrabPointData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___handPose_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Oculus.Interaction.HandPosing.HandGrabPointData
IL2CPP_EXTERN_C void HandGrabPointData_tBA3966DD98D8606128F8BCFA5613B269D44A8289_marshal_pinvoke_cleanup(HandGrabPointData_tBA3966DD98D8606128F8BCFA5613B269D44A8289_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Oculus.Interaction.HandPosing.HandGrabPointData
IL2CPP_EXTERN_C void HandGrabPointData_tBA3966DD98D8606128F8BCFA5613B269D44A8289_marshal_com(const HandGrabPointData_tBA3966DD98D8606128F8BCFA5613B269D44A8289& unmarshaled, HandGrabPointData_tBA3966DD98D8606128F8BCFA5613B269D44A8289_marshaled_com& marshaled)
{
	Exception_t* ___handPose_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'handPose' of type 'HandGrabPointData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___handPose_1Exception, NULL);
}
IL2CPP_EXTERN_C void HandGrabPointData_tBA3966DD98D8606128F8BCFA5613B269D44A8289_marshal_com_back(const HandGrabPointData_tBA3966DD98D8606128F8BCFA5613B269D44A8289_marshaled_com& marshaled, HandGrabPointData_tBA3966DD98D8606128F8BCFA5613B269D44A8289& unmarshaled)
{
	Exception_t* ___handPose_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'handPose' of type 'HandGrabPointData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___handPose_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Oculus.Interaction.HandPosing.HandGrabPointData
IL2CPP_EXTERN_C void HandGrabPointData_tBA3966DD98D8606128F8BCFA5613B269D44A8289_marshal_com_cleanup(HandGrabPointData_tBA3966DD98D8606128F8BCFA5613B269D44A8289_marshaled_com& marshaled)
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
// Oculus.Interaction.HandPosing.SnapSurfaces.ISnapSurface Oculus.Interaction.HandPosing.HandGrabPoint::get_SnapSurface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandGrabPoint_get_SnapSurface_mBB4F6AEAFF69A3B8138E9CE91D860D2A57CD73C6 (HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISnapSurface_t5AD10554B4D4119A5D36DA2C083AE0572CFF69A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// get => _snapSurface ?? _surface as ISnapSurface;
		RuntimeObject* L_0 = __this->____snapSurface_6;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0015;
		}
	}
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_2 = __this->____surface_5;
		G_B2_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, ISnapSurface_t5AD10554B4D4119A5D36DA2C083AE0572CFF69A8_il2cpp_TypeInfo_var));
	}

IL_0015:
	{
		return G_B2_0;
	}
}
// System.Void Oculus.Interaction.HandPosing.HandGrabPoint::set_SnapSurface(Oculus.Interaction.HandPosing.SnapSurfaces.ISnapSurface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabPoint_set_SnapSurface_m7993B7323F2FCE40AFB15CBEAB5B8E9F5A27D781 (HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// _snapSurface = value;
		RuntimeObject* L_0 = ___value0;
		__this->____snapSurface_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____snapSurface_6), (void*)L_0);
		// }
		return;
	}
}
// Oculus.Interaction.HandPosing.HandPose Oculus.Interaction.HandPosing.HandGrabPoint::get_HandPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* HandGrabPoint_get_HandPose_mB785342F2B3DE6A3691BFCDBCE49A2256D2EDB77 (HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* __this, const RuntimeMethod* method) 
{
	{
		// public HandPose HandPose => _usesHandPose ? _handPose : null;
		bool L_0 = __this->____usesHandPose_7;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8*)NULL;
	}

IL_000a:
	{
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_1 = __this->____handPose_8;
		return L_1;
	}
}
// System.Single Oculus.Interaction.HandPosing.HandGrabPoint::get_Scale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandGrabPoint_get_Scale_mD8585DB58DB4316669AA16061543EA9D63BB19D3 (HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* __this, const RuntimeMethod* method) 
{
	{
		// public float Scale => this.transform.lossyScale.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_0, NULL);
		float L_2 = L_1.___x_2;
		return L_2;
	}
}
// UnityEngine.Transform Oculus.Interaction.HandPosing.HandGrabPoint::get_RelativeTo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* HandGrabPoint_get_RelativeTo_mE6D33E23708CD8E671E965978C4488CCA7B68679 (HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* __this, const RuntimeMethod* method) 
{
	{
		// public Transform RelativeTo { get => _relativeTo; set => _relativeTo = value; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____relativeTo_4;
		return L_0;
	}
}
// System.Void Oculus.Interaction.HandPosing.HandGrabPoint::set_RelativeTo(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabPoint_set_RelativeTo_m2D703E8143E751DC0D4809056C4FD50B28B28026 (HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// public Transform RelativeTo { get => _relativeTo; set => _relativeTo = value; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->____relativeTo_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____relativeTo_4), (void*)L_0);
		return;
	}
}
// UnityEngine.Pose Oculus.Interaction.HandPosing.HandGrabPoint::get_RelativeGrip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 HandGrabPoint_get_RelativeGrip_m33DE465EC10D1271A4E4BD5AC1818C5870B2DF0A (HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* __this, const RuntimeMethod* method) 
{
	{
		// public Pose RelativeGrip => RelativeTo.RelativeOffset(this.transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = HandGrabPoint_get_RelativeTo_mE6D33E23708CD8E671E965978C4488CCA7B68679_inline(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2;
		L_2 = PoseUtils_RelativeOffset_m3CB9005781614AFF2FB327373F64AEBF20FE2696(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void Oculus.Interaction.HandPosing.HandGrabPoint::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabPoint_Reset_m362BAB72304160CB259EF341F8780A6CD6AC699F (HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisHandGrabInteractable_tFC8AD4C83FE1A0BEB86FF5F8D39052FF7C0A0986_mB4C0BD99D482F9A98D5CFA389DECFA7E56BA1976_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	HandGrabInteractable_tFC8AD4C83FE1A0BEB86FF5F8D39052FF7C0A0986* G_B2_0 = NULL;
	HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* G_B2_1 = NULL;
	HandGrabInteractable_tFC8AD4C83FE1A0BEB86FF5F8D39052FF7C0A0986* G_B1_0 = NULL;
	HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* G_B1_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B3_0 = NULL;
	HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* G_B3_1 = NULL;
	{
		// _relativeTo = this.GetComponentInParent<HandGrabInteractable>()?.RelativeTo;
		HandGrabInteractable_tFC8AD4C83FE1A0BEB86FF5F8D39052FF7C0A0986* L_0;
		L_0 = Component_GetComponentInParent_TisHandGrabInteractable_tFC8AD4C83FE1A0BEB86FF5F8D39052FF7C0A0986_mB4C0BD99D482F9A98D5CFA389DECFA7E56BA1976(__this, Component_GetComponentInParent_TisHandGrabInteractable_tFC8AD4C83FE1A0BEB86FF5F8D39052FF7C0A0986_mB4C0BD99D482F9A98D5CFA389DECFA7E56BA1976_RuntimeMethod_var);
		HandGrabInteractable_tFC8AD4C83FE1A0BEB86FF5F8D39052FF7C0A0986* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_0013;
	}

IL_000e:
	{
		NullCheck(G_B2_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = HandGrabInteractable_get_RelativeTo_mE918B8DADECC3F1F448116F19AB06FCA629E678B(G_B2_0, NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_1;
	}

IL_0013:
	{
		NullCheck(G_B3_1);
		G_B3_1->____relativeTo_4 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->____relativeTo_4), (void*)G_B3_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.HandGrabPoint::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabPoint_Start_mCC6E33B33C262C098937C455CC1194C4D7B49736 (HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.HandGrabPoint::SetPose(Oculus.Interaction.HandPosing.HandPose,UnityEngine.Pose&,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabPoint_SetPose_m5B68CC972D09B9B74DE95B037C6050FB99ADE08F (HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* __this, HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* ___handPose0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___gripPoint1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _handPose = new HandPose(handPose);
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_0 = ___handPose0;
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_1 = (HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8*)il2cpp_codegen_object_new(HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HandPose__ctor_mB3C88F78B053CFB5F715B86E8CE122D543156B26(L_1, L_0, NULL);
		__this->____handPose_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handPose_8), (void*)L_1);
		// _relativeTo = relativeTo;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___relativeTo2;
		__this->____relativeTo_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____relativeTo_4), (void*)L_2);
		// this.transform.SetPose(relativeTo.GlobalPose(gripPoint));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___relativeTo2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_5 = ___gripPoint1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_6;
		L_6 = PoseUtils_GlobalPose_m6B6464C721166ABEE4B301A3296ED085B428BD7F(L_4, L_5, NULL);
		V_0 = L_6;
		PoseUtils_SetPose_m6C9BE185A66754389A49FD711DEE68A07DE059BB(L_3, (&V_0), 0, NULL);
		// }
		return;
	}
}
// Oculus.Interaction.HandPosing.HandGrabPointData Oculus.Interaction.HandPosing.HandGrabPoint::SaveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandGrabPointData_tBA3966DD98D8606128F8BCFA5613B269D44A8289 HandGrabPoint_SaveData_mDD4D4889DF08A7AA707AAAD4743B9F30841D78D2 (HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandGrabPointData_tBA3966DD98D8606128F8BCFA5613B269D44A8289 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// HandGrabPointData data = new HandGrabPointData()
		// {
		//     handPose = new HandPose(_handPose),
		//     scale = Scale,
		//     gripPose = _relativeTo.RelativeOffset(this.transform)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(HandGrabPointData_tBA3966DD98D8606128F8BCFA5613B269D44A8289));
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_0 = __this->____handPose_8;
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_1 = (HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8*)il2cpp_codegen_object_new(HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HandPose__ctor_mB3C88F78B053CFB5F715B86E8CE122D543156B26(L_1, L_0, NULL);
		(&V_0)->___handPose_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___handPose_1), (void*)L_1);
		float L_2;
		L_2 = HandGrabPoint_get_Scale_mD8585DB58DB4316669AA16061543EA9D63BB19D3(__this, NULL);
		(&V_0)->___scale_2 = L_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->____relativeTo_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_5;
		L_5 = PoseUtils_RelativeOffset_m3CB9005781614AFF2FB327373F64AEBF20FE2696(L_3, L_4, NULL);
		(&V_0)->___gripPose_0 = L_5;
		HandGrabPointData_tBA3966DD98D8606128F8BCFA5613B269D44A8289 L_6 = V_0;
		// return data;
		return L_6;
	}
}
// System.Void Oculus.Interaction.HandPosing.HandGrabPoint::LoadData(Oculus.Interaction.HandPosing.HandGrabPointData,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabPoint_LoadData_m879C3A2185A01C1AEB6B0390096A088DEEA68502 (HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* __this, HandGrabPointData_tBA3966DD98D8606128F8BCFA5613B269D44A8289 ___data0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _relativeTo = relativeTo;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___relativeTo1;
		__this->____relativeTo_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____relativeTo_4), (void*)L_0);
		// this.transform.localScale = Vector3.one * data.scale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		HandGrabPointData_tBA3966DD98D8606128F8BCFA5613B269D44A8289 L_3 = ___data0;
		float L_4 = L_3.___scale_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_2, L_4, NULL);
		NullCheck(L_1);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_1, L_5, NULL);
		// this.transform.SetPose(_relativeTo.GlobalPose(data.gripPose));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->____relativeTo_4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_8 = (&(&___data0)->___gripPose_0);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9;
		L_9 = PoseUtils_GlobalPose_m6B6464C721166ABEE4B301A3296ED085B428BD7F(L_7, L_8, NULL);
		V_0 = L_9;
		PoseUtils_SetPose_m6C9BE185A66754389A49FD711DEE68A07DE059BB(L_6, (&V_0), 0, NULL);
		// if (data.handPose != null)
		HandGrabPointData_tBA3966DD98D8606128F8BCFA5613B269D44A8289 L_10 = ___data0;
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_11 = L_10.___handPose_1;
		if (!L_11)
		{
			goto IL_005c;
		}
	}
	{
		// _handPose = new HandPose(data.handPose);
		HandGrabPointData_tBA3966DD98D8606128F8BCFA5613B269D44A8289 L_12 = ___data0;
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_13 = L_12.___handPose_1;
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_14 = (HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8*)il2cpp_codegen_object_new(HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		HandPose__ctor_mB3C88F78B053CFB5F715B86E8CE122D543156B26(L_14, L_13, NULL);
		__this->____handPose_8 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handPose_8), (void*)L_14);
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Boolean Oculus.Interaction.HandPosing.HandGrabPoint::CalculateBestPose(UnityEngine.Pose,Oculus.Interaction.Input.Handedness,Oculus.Interaction.HandPosing.HandPose&,UnityEngine.Pose&,Oculus.Interaction.HandPosing.PoseMeasureParameters& modreq(System.Runtime.InteropServices.InAttribute),System.Boolean&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabPoint_CalculateBestPose_mC5948BE442219113EB89F1B2BFFEB27BF7E1E66B (HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___userPose0, int32_t ___handedness1, HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8** ___bestHandPose2, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___bestSnapPoint3, PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* ___scoringModifier4, bool* ___usesHandPose5, float* ___score6, const RuntimeMethod* method) 
{
	{
		// usesHandPose = false;
		bool* L_0 = ___usesHandPose5;
		*((int8_t*)L_0) = (int8_t)0;
		// if (HandPose != null && HandPose.Handedness != handedness)
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_1;
		L_1 = HandGrabPoint_get_HandPose_mB785342F2B3DE6A3691BFCDBCE49A2256D2EDB77(__this, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_2;
		L_2 = HandGrabPoint_get_HandPose_mB785342F2B3DE6A3691BFCDBCE49A2256D2EDB77(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = HandPose_get_Handedness_m34F5F962E694094AA60C7415BA94CB4A8E79FC52_inline(L_2, NULL);
		int32_t L_4 = ___handedness1;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0024;
		}
	}
	{
		// score = float.NaN;
		float* L_5 = ___score6;
		*((float*)L_5) = (float)(std::numeric_limits<float>::quiet_NaN());
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// score = CompareNearPoses(userPose, ref bestSnapPoint, scoringModifier);
		float* L_6 = ___score6;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_7 = ___bestSnapPoint3;
		PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* L_8 = ___scoringModifier4;
		float L_9;
		L_9 = HandGrabPoint_CompareNearPoses_m27DB24437A70F7B3A5970A549F120C199CF1A79F(__this, (&___userPose0), L_7, L_8, NULL);
		*((float*)L_6) = (float)L_9;
		// if (HandPose != null)
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_10;
		L_10 = HandGrabPoint_get_HandPose_mB785342F2B3DE6A3691BFCDBCE49A2256D2EDB77(__this, NULL);
		if (!L_10)
		{
			goto IL_004d;
		}
	}
	{
		// usesHandPose = true;
		bool* L_11 = ___usesHandPose5;
		*((int8_t*)L_11) = (int8_t)1;
		// bestHandPose.CopyFrom(HandPose);
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8** L_12 = ___bestHandPose2;
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_13 = *((HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8**)L_12);
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_14;
		L_14 = HandGrabPoint_get_HandPose_mB785342F2B3DE6A3691BFCDBCE49A2256D2EDB77(__this, NULL);
		NullCheck(L_13);
		HandPose_CopyFrom_mB4B0A33C4CD7A004BD54D9E1A1E34C250F8AE5EB(L_13, L_14, (bool)0, NULL);
	}

IL_004d:
	{
		// return true;
		return (bool)1;
	}
}
// System.Single Oculus.Interaction.HandPosing.HandGrabPoint::CompareNearPoses(UnityEngine.Pose&,UnityEngine.Pose&,Oculus.Interaction.HandPosing.PoseMeasureParameters&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandGrabPoint_CompareNearPoses_m27DB24437A70F7B3A5970A549F120C199CF1A79F (HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___worldPoint0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___bestSnapPoint1, PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* ___scoringModifier2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISnapSurface_t5AD10554B4D4119A5D36DA2C083AE0572CFF69A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Pose desired = worldPoint;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___worldPoint0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = (*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_0);
		V_0 = L_1;
		// Pose snap = this.transform.GetPose();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3;
		L_3 = PoseUtils_GetPose_m913669538E46AA3E2671EFA9B84A6E449C05886D(L_2, 0, NULL);
		V_1 = L_3;
		// if (SnapSurface != null)
		RuntimeObject* L_4;
		L_4 = HandGrabPoint_get_SnapSurface_mBB4F6AEAFF69A3B8138E9CE91D860D2A57CD73C6(__this, NULL);
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// bestScore = SnapSurface.CalculateBestPoseAtSurface(desired, snap, out bestPlace, scoringModifier);
		RuntimeObject* L_5;
		L_5 = HandGrabPoint_get_SnapSurface_mBB4F6AEAFF69A3B8138E9CE91D860D2A57CD73C6(__this, NULL);
		PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* L_6 = ___scoringModifier2;
		NullCheck(L_5);
		float L_7;
		L_7 = InterfaceFuncInvoker4< float, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*, PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* >::Invoke(0 /* System.Single Oculus.Interaction.HandPosing.SnapSurfaces.ISnapSurface::CalculateBestPoseAtSurface(UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Pose&,Oculus.Interaction.HandPosing.PoseMeasureParameters& modreq(System.Runtime.InteropServices.InAttribute)) */, ISnapSurface_t5AD10554B4D4119A5D36DA2C083AE0572CFF69A8_il2cpp_TypeInfo_var, L_5, (&V_0), (&V_1), (&V_3), L_6);
		V_2 = L_7;
		goto IL_0043;
	}

IL_0031:
	{
		// bestPlace = snap;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_8 = V_1;
		V_3 = L_8;
		// bestScore = PoseUtils.Similarity(desired, snap, scoringModifier);
		PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* L_9 = ___scoringModifier2;
		PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1 L_10 = (*(PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1*)L_9);
		float L_11;
		L_11 = PoseUtils_Similarity_mA20326AC09282B566B6FA2295EC79A522BAC183C((&V_0), (&V_1), L_10, NULL);
		V_2 = L_11;
	}

IL_0043:
	{
		// _relativeTo.RelativeOffset(bestPlace, ref bestSnapPoint);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->____relativeTo_4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_13 = ___bestSnapPoint1;
		PoseUtils_RelativeOffset_m019B113B86E5B8E1061059D5BCA0315DFC091320(L_12, (&V_3), L_13, NULL);
		// return bestScore;
		float L_14 = V_2;
		return L_14;
	}
}
// System.Void Oculus.Interaction.HandPosing.HandGrabPoint::InjectRelativeTo(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabPoint_InjectRelativeTo_m157DB78365211780A5DD01FF40DB09B430CEBBEC (HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo0, const RuntimeMethod* method) 
{
	{
		// _relativeTo = relativeTo;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___relativeTo0;
		__this->____relativeTo_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____relativeTo_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.HandGrabPoint::InjectOptionalSurface(Oculus.Interaction.HandPosing.SnapSurfaces.ISnapSurface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabPoint_InjectOptionalSurface_mEE1D6B5E9D392D60B97E0966A4479F0C906A134C (HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* __this, RuntimeObject* ___surface0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _surface = surface as MonoBehaviour;
		RuntimeObject* L_0 = ___surface0;
		__this->____surface_5 = ((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____surface_5), (void*)((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var)));
		// SnapSurface = surface;
		RuntimeObject* L_1 = ___surface0;
		HandGrabPoint_set_SnapSurface_m7993B7323F2FCE40AFB15CBEAB5B8E9F5A27D781_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.HandGrabPoint::InjectOptionalHandPose(Oculus.Interaction.HandPosing.HandPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabPoint_InjectOptionalHandPose_mBE1EF9528DAF0E055CFE58B0A2C7FD731665E62C (HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* __this, HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* ___handPose0, const RuntimeMethod* method) 
{
	{
		// _handPose = handPose;
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_0 = ___handPose0;
		__this->____handPose_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handPose_8), (void*)L_0);
		// _usesHandPose = _handPose != null;
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_1 = __this->____handPose_8;
		__this->____usesHandPose_7 = (bool)((!(((RuntimeObject*)(HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.HandGrabPoint::InjectAllHandGrabPoint(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabPoint_InjectAllHandGrabPoint_mB39449716B8E1BB9BE1313DE31FE113400B9DBC0 (HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo0, const RuntimeMethod* method) 
{
	{
		// InjectRelativeTo(relativeTo);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___relativeTo0;
		HandGrabPoint_InjectRelativeTo_m157DB78365211780A5DD01FF40DB09B430CEBBEC_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.HandGrabPoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabPoint__ctor_m4F60E603B930C3C43D9DC67B2BDD21DF98F54722 (HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool _usesHandPose = true;
		__this->____usesHandPose_7 = (bool)1;
		// private HandPose _handPose = new HandPose();
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_0 = (HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8*)il2cpp_codegen_object_new(HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HandPose__ctor_mC0B9635C91D52D4EC49CC4BD970CBBDB248CC443(L_0, NULL);
		__this->____handPose_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handPose_8), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Oculus.Interaction.Input.Handedness Oculus.Interaction.HandPosing.HandPose::get_Handedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandPose_get_Handedness_m34F5F962E694094AA60C7415BA94CB4A8E79FC52 (HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* __this, const RuntimeMethod* method) 
{
	{
		// get => _handedness;
		int32_t L_0 = __this->____handedness_0;
		return L_0;
	}
}
// System.Void Oculus.Interaction.HandPosing.HandPose::set_Handedness(Oculus.Interaction.Input.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPose_set_Handedness_m4602A739EBFC356E85DA08CC80C837894F5FC4AA (HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => _handedness = value;
		int32_t L_0 = ___value0;
		__this->____handedness_0 = L_0;
		return;
	}
}
// UnityEngine.Quaternion[] Oculus.Interaction.HandPosing.HandPose::get_JointRotations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* HandPose_get_JointRotations_m67D61CC5658CC151843B59844D1E59DE839AF078 (HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_jointRotations == null
		//     || _jointRotations.Length == 0)
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_0 = __this->____jointRotations_2;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_1 = __this->____jointRotations_2;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0023;
		}
	}

IL_0011:
	{
		// _jointRotations = new Quaternion[FingersMetadata.HAND_JOINT_IDS.Length];
		il2cpp_codegen_runtime_class_init_inline(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587* L_2 = ((FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_StaticFields*)il2cpp_codegen_static_fields_for(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var))->___HAND_JOINT_IDS_0;
		NullCheck(L_2);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_3 = (QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)SZArrayNew(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		__this->____jointRotations_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jointRotations_2), (void*)L_3);
	}

IL_0023:
	{
		// return _jointRotations;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_4 = __this->____jointRotations_2;
		return L_4;
	}
}
// System.Void Oculus.Interaction.HandPosing.HandPose::set_JointRotations(UnityEngine.Quaternion[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPose_set_JointRotations_mCC0FA44096ED30BF37768EE7D0D3E80446DCCF96 (HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* __this, QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___value0, const RuntimeMethod* method) 
{
	{
		// _jointRotations = value;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_0 = ___value0;
		__this->____jointRotations_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jointRotations_2), (void*)L_0);
		// }
		return;
	}
}
// Oculus.Interaction.Input.JointFreedom[] Oculus.Interaction.HandPosing.HandPose::get_FingersFreedom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* HandPose_get_FingersFreedom_mF8266A82C0115F83283119E26FAF03F3B1E53397 (HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_fingersFreedom == null
		//     || _fingersFreedom.Length == 0)
		JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* L_0 = __this->____fingersFreedom_1;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* L_1 = __this->____fingersFreedom_1;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_001c;
		}
	}

IL_0011:
	{
		// _fingersFreedom = FingersMetadata.DefaultFingersFreedom();
		il2cpp_codegen_runtime_class_init_inline(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* L_2;
		L_2 = FingersMetadata_DefaultFingersFreedom_m652A4BFA22044A9F52A4520C59785BE7F4C5999F(NULL);
		__this->____fingersFreedom_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fingersFreedom_1), (void*)L_2);
	}

IL_001c:
	{
		// return _fingersFreedom;
		JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* L_3 = __this->____fingersFreedom_1;
		return L_3;
	}
}
// System.Void Oculus.Interaction.HandPosing.HandPose::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPose__ctor_mC0B9635C91D52D4EC49CC4BD970CBBDB248CC443 (HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private JointFreedom[] _fingersFreedom = FingersMetadata.DefaultFingersFreedom();
		il2cpp_codegen_runtime_class_init_inline(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* L_0;
		L_0 = FingersMetadata_DefaultFingersFreedom_m652A4BFA22044A9F52A4520C59785BE7F4C5999F(NULL);
		__this->____fingersFreedom_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fingersFreedom_1), (void*)L_0);
		// private Quaternion[] _jointRotations = new Quaternion[FingersMetadata.HAND_JOINT_IDS.Length];
		HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587* L_1 = ((FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_StaticFields*)il2cpp_codegen_static_fields_for(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var))->___HAND_JOINT_IDS_0;
		NullCheck(L_1);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_2 = (QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)SZArrayNew(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		__this->____jointRotations_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jointRotations_2), (void*)L_2);
		// public HandPose()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.HandPose::.ctor(Oculus.Interaction.Input.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPose__ctor_m59EE65B9104C16338B78F35CFC7C78E05624B9DA (HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* __this, int32_t ___handedness0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private JointFreedom[] _fingersFreedom = FingersMetadata.DefaultFingersFreedom();
		il2cpp_codegen_runtime_class_init_inline(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* L_0;
		L_0 = FingersMetadata_DefaultFingersFreedom_m652A4BFA22044A9F52A4520C59785BE7F4C5999F(NULL);
		__this->____fingersFreedom_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fingersFreedom_1), (void*)L_0);
		// private Quaternion[] _jointRotations = new Quaternion[FingersMetadata.HAND_JOINT_IDS.Length];
		HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587* L_1 = ((FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_StaticFields*)il2cpp_codegen_static_fields_for(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var))->___HAND_JOINT_IDS_0;
		NullCheck(L_1);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_2 = (QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)SZArrayNew(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		__this->____jointRotations_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jointRotations_2), (void*)L_2);
		// public HandPose(Handedness handedness)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _handedness = handedness;
		int32_t L_3 = ___handedness0;
		__this->____handedness_0 = L_3;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.HandPose::.ctor(Oculus.Interaction.HandPosing.HandPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPose__ctor_mB3C88F78B053CFB5F715B86E8CE122D543156B26 (HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* __this, HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private JointFreedom[] _fingersFreedom = FingersMetadata.DefaultFingersFreedom();
		il2cpp_codegen_runtime_class_init_inline(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* L_0;
		L_0 = FingersMetadata_DefaultFingersFreedom_m652A4BFA22044A9F52A4520C59785BE7F4C5999F(NULL);
		__this->____fingersFreedom_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fingersFreedom_1), (void*)L_0);
		// private Quaternion[] _jointRotations = new Quaternion[FingersMetadata.HAND_JOINT_IDS.Length];
		HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587* L_1 = ((FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_StaticFields*)il2cpp_codegen_static_fields_for(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var))->___HAND_JOINT_IDS_0;
		NullCheck(L_1);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_2 = (QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)SZArrayNew(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		__this->____jointRotations_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jointRotations_2), (void*)L_2);
		// public HandPose(HandPose other)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.CopyFrom(other);
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_3 = ___other0;
		HandPose_CopyFrom_mB4B0A33C4CD7A004BD54D9E1A1E34C250F8AE5EB(__this, L_3, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.HandPose::CopyFrom(Oculus.Interaction.HandPosing.HandPose,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPose_CopyFrom_mB4B0A33C4CD7A004BD54D9E1A1E34C250F8AE5EB (HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* __this, HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* ___from0, bool ___mirrorHandedness1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (mirrorHandedness)
		bool L_0 = ___mirrorHandedness1;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// _handedness = from.Handedness;
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_1 = ___from0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = HandPose_get_Handedness_m34F5F962E694094AA60C7415BA94CB4A8E79FC52_inline(L_1, NULL);
		__this->____handedness_0 = L_2;
	}

IL_000f:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		V_0 = 0;
		goto IL_0027;
	}

IL_0013:
	{
		// FingersFreedom[i] = from.FingersFreedom[i];
		JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* L_3;
		L_3 = HandPose_get_FingersFreedom_mF8266A82C0115F83283119E26FAF03F3B1E53397(__this, NULL);
		int32_t L_4 = V_0;
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_5 = ___from0;
		NullCheck(L_5);
		JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* L_6;
		L_6 = HandPose_get_FingersFreedom_mF8266A82C0115F83283119E26FAF03F3B1E53397(L_5, NULL);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (int32_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (int32_t)L_9);
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0027:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) < ((int32_t)5)))
		{
			goto IL_0013;
		}
	}
	{
		// for (int i = 0; i < FingersMetadata.HAND_JOINT_IDS.Length; i++)
		V_1 = 0;
		goto IL_004b;
	}

IL_002f:
	{
		// JointRotations[i] = from.JointRotations[i];
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_12;
		L_12 = HandPose_get_JointRotations_m67D61CC5658CC151843B59844D1E59DE839AF078(__this, NULL);
		int32_t L_13 = V_1;
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_14 = ___from0;
		NullCheck(L_14);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_15;
		L_15 = HandPose_get_JointRotations_m67D61CC5658CC151843B59844D1E59DE839AF078(L_14, NULL);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974)L_18);
		// for (int i = 0; i < FingersMetadata.HAND_JOINT_IDS.Length; i++)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_004b:
	{
		// for (int i = 0; i < FingersMetadata.HAND_JOINT_IDS.Length; i++)
		int32_t L_20 = V_1;
		il2cpp_codegen_runtime_class_init_inline(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587* L_21 = ((FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_StaticFields*)il2cpp_codegen_static_fields_for(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var))->___HAND_JOINT_IDS_0;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_002f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.HandPose::Lerp(Oculus.Interaction.HandPosing.HandPose&,Oculus.Interaction.HandPosing.HandPose&,System.Single,Oculus.Interaction.HandPosing.HandPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPose_Lerp_m9C9D0A697E3E2E4BE6DE62395E2FC0B63E790735 (HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8** ___from0, HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8** ___to1, float ___t2, HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8** ___result3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* G_B6_0 = NULL;
	{
		// for (int i = 0; i < FingersMetadata.HAND_JOINT_IDS.Length; i++)
		V_1 = 0;
		goto IL_0035;
	}

IL_0004:
	{
		// result.JointRotations[i] = Quaternion.SlerpUnclamped(from.JointRotations[i], to.JointRotations[i], t);
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8** L_0 = ___result3;
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_1 = *((HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8**)L_0);
		NullCheck(L_1);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_2;
		L_2 = HandPose_get_JointRotations_m67D61CC5658CC151843B59844D1E59DE839AF078(L_1, NULL);
		int32_t L_3 = V_1;
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8** L_4 = ___from0;
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_5 = *((HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8**)L_4);
		NullCheck(L_5);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_6;
		L_6 = HandPose_get_JointRotations_m67D61CC5658CC151843B59844D1E59DE839AF078(L_5, NULL);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8** L_10 = ___to1;
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_11 = *((HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8**)L_10);
		NullCheck(L_11);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_12;
		L_12 = HandPose_get_JointRotations_m67D61CC5658CC151843B59844D1E59DE839AF078(L_11, NULL);
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		float L_16 = ___t2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_SlerpUnclamped_mB38920352A1B11369D782F78E183568CAFA82C0F(L_9, L_15, L_16, NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974)L_17);
		// for (int i = 0; i < FingersMetadata.HAND_JOINT_IDS.Length; i++)
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0035:
	{
		// for (int i = 0; i < FingersMetadata.HAND_JOINT_IDS.Length; i++)
		int32_t L_19 = V_1;
		il2cpp_codegen_runtime_class_init_inline(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587* L_20 = ((FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_StaticFields*)il2cpp_codegen_static_fields_for(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var))->___HAND_JOINT_IDS_0;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// HandPose dominantPose = t <= 0.5f ? from : to;
		float L_21 = ___t2;
		if ((((float)L_21) <= ((float)(0.5f))))
		{
			goto IL_004b;
		}
	}
	{
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8** L_22 = ___to1;
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_23 = *((HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8**)L_22);
		G_B6_0 = L_23;
		goto IL_004d;
	}

IL_004b:
	{
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8** L_24 = ___from0;
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_25 = *((HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8**)L_24);
		G_B6_0 = L_25;
	}

IL_004d:
	{
		V_0 = G_B6_0;
		// result._handedness = dominantPose.Handedness;
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8** L_26 = ___result3;
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_27 = *((HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8**)L_26);
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = HandPose_get_Handedness_m34F5F962E694094AA60C7415BA94CB4A8E79FC52_inline(L_28, NULL);
		NullCheck(L_27);
		L_27->____handedness_0 = L_29;
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		V_2 = 0;
		goto IL_0074;
	}

IL_005f:
	{
		// result.FingersFreedom[i] = dominantPose.FingersFreedom[i];
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8** L_30 = ___result3;
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_31 = *((HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8**)L_30);
		NullCheck(L_31);
		JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* L_32;
		L_32 = HandPose_get_FingersFreedom_mF8266A82C0115F83283119E26FAF03F3B1E53397(L_31, NULL);
		int32_t L_33 = V_2;
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_34 = V_0;
		NullCheck(L_34);
		JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* L_35;
		L_35 = HandPose_get_FingersFreedom_mF8266A82C0115F83283119E26FAF03F3B1E53397(L_34, NULL);
		int32_t L_36 = V_2;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		int32_t L_38 = (int32_t)(L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (int32_t)L_38);
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		int32_t L_39 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_0074:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		int32_t L_40 = V_2;
		if ((((int32_t)L_40) < ((int32_t)5)))
		{
			goto IL_005f;
		}
	}
	{
		// }
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
// System.Single Oculus.Interaction.HandPosing.PoseMeasureParameters::get_MaxDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PoseMeasureParameters_get_MaxDistance_mDC7ED28CDF4C34843DE9A4D3F2964F0E7C9012E2 (PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* __this, const RuntimeMethod* method) 
{
	{
		// public float MaxDistance => _maxDistance;
		float L_0 = __this->____maxDistance_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  float PoseMeasureParameters_get_MaxDistance_mDC7ED28CDF4C34843DE9A4D3F2964F0E7C9012E2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1*>(__this + _offset);
	float _returnValue;
	_returnValue = PoseMeasureParameters_get_MaxDistance_mDC7ED28CDF4C34843DE9A4D3F2964F0E7C9012E2_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Single Oculus.Interaction.HandPosing.PoseMeasureParameters::get_PositionRotationWeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PoseMeasureParameters_get_PositionRotationWeight_m5B280E4B485A6666B2E1BE5D4BB54CB73FAD2A10 (PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* __this, const RuntimeMethod* method) 
{
	{
		// public float PositionRotationWeight => _positionRotationWeight;
		float L_0 = __this->____positionRotationWeight_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  float PoseMeasureParameters_get_PositionRotationWeight_m5B280E4B485A6666B2E1BE5D4BB54CB73FAD2A10_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1*>(__this + _offset);
	float _returnValue;
	_returnValue = PoseMeasureParameters_get_PositionRotationWeight_m5B280E4B485A6666B2E1BE5D4BB54CB73FAD2A10_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Oculus.Interaction.HandPosing.PoseMeasureParameters::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseMeasureParameters__ctor_mE06FDCF64D9F6F7CA18E52980A25CD9C059CEB61 (PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* __this, float ___maxDistance0, float ___positionRotationWeight1, const RuntimeMethod* method) 
{
	{
		// _maxDistance = maxDistance;
		float L_0 = ___maxDistance0;
		__this->____maxDistance_0 = L_0;
		// _positionRotationWeight = positionRotationWeight;
		float L_1 = ___positionRotationWeight1;
		__this->____positionRotationWeight_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void PoseMeasureParameters__ctor_mE06FDCF64D9F6F7CA18E52980A25CD9C059CEB61_AdjustorThunk (RuntimeObject* __this, float ___maxDistance0, float ___positionRotationWeight1, const RuntimeMethod* method)
{
	PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1*>(__this + _offset);
	PoseMeasureParameters__ctor_mE06FDCF64D9F6F7CA18E52980A25CD9C059CEB61(_thisAdjusted, ___maxDistance0, ___positionRotationWeight1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Oculus.Interaction.HandPosing.PoseTravelData::PerceivedDistance(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PoseTravelData_PerceivedDistance_mDD9D346AFD5A6785CE538498C46D5D6351CC8D43 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___from0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___to1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Pose grabOffset = PoseUtils.RelativeOffset(from, to);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___from0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_1 = ___to1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2;
		L_2 = PoseUtils_RelativeOffset_mBD229EA35C60DD61F36CB719D08DE3398A1888D3(L_0, L_1, NULL);
		V_0 = L_2;
		// float translationDistance = grabOffset.position.magnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (&(&V_0)->___position_0);
		float L_4;
		L_4 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline(L_3, NULL);
		V_1 = L_4;
		// float rotationDistance = DEGREES_TO_PERCEIVED_METERS * Mathf.Max(
		//     Mathf.Max(Vector3.Angle(from.forward, to.forward),
		//     Vector3.Angle(from.up, to.up),
		//     Vector3.Angle(from.right, to.right)));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = L_5;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = L_7;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_9 = ___from0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_10 = (*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_9);
		V_3 = L_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Pose_get_forward_m510527153754B6C2B2CDFDEE25D7168E3C82372A((&V_3), NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_12 = ___to1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_13 = (*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_12);
		V_3 = L_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Pose_get_forward_m510527153754B6C2B2CDFDEE25D7168E3C82372A((&V_3), NULL);
		float L_15;
		L_15 = Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline(L_11, L_14, NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_15);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = L_8;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_17 = ___from0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_18 = (*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_17);
		V_3 = L_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Pose_get_up_m5431E350242BEBB0CD7B0AAF9DC9468DC6DDFE5C((&V_3), NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_20 = ___to1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_21 = (*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_20);
		V_3 = L_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Pose_get_up_m5431E350242BEBB0CD7B0AAF9DC9468DC6DDFE5C((&V_3), NULL);
		float L_23;
		L_23 = Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline(L_19, L_22, NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_23);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_24 = L_16;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_25 = ___from0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_26 = (*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_25);
		V_3 = L_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Pose_get_right_m8518E7BCEB74B9798BADB001B9E38756CC35ECFE((&V_3), NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_28 = ___to1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_29 = (*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_28);
		V_3 = L_29;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Pose_get_right_m8518E7BCEB74B9798BADB001B9E38756CC35ECFE((&V_3), NULL);
		float L_31;
		L_31 = Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline(L_27, L_30, NULL);
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_31);
		float L_32;
		L_32 = Mathf_Max_mDFA261F10D391C520F1E8B27A02F8EC44DEDA9F4_inline(L_24, NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_32);
		float L_33;
		L_33 = Mathf_Max_mDFA261F10D391C520F1E8B27A02F8EC44DEDA9F4_inline(L_6, NULL);
		V_2 = ((float)il2cpp_codegen_multiply((0.00138888892f), L_33));
		// float travelDistance = Mathf.Max(translationDistance, rotationDistance);
		float L_34 = V_1;
		float L_35 = V_2;
		float L_36;
		L_36 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_34, L_35, NULL);
		// return travelDistance;
		return L_36;
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
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGhost::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGhost_Reset_m7A5F1601A687D8726BBD25BCAA1BEAD3A861DC38 (HandGhost_tCAE715DC9E23EAE5DAFEA521288F18A8D3AFEA58* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisHandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C_mFEE233FBDA73F6A6DFADE3346B0A51B5E8B58082_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHandPuppet_tF32101BA76C9B7D199C764ED4E0D8E31C00ECD70_m9414E1198DF365CA26895A6E9695686C49B99770_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _puppet = this.GetComponent<HandPuppet>();
		HandPuppet_tF32101BA76C9B7D199C764ED4E0D8E31C00ECD70* L_0;
		L_0 = Component_GetComponent_TisHandPuppet_tF32101BA76C9B7D199C764ED4E0D8E31C00ECD70_m9414E1198DF365CA26895A6E9695686C49B99770(__this, Component_GetComponent_TisHandPuppet_tF32101BA76C9B7D199C764ED4E0D8E31C00ECD70_m9414E1198DF365CA26895A6E9695686C49B99770_RuntimeMethod_var);
		__this->____puppet_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____puppet_4), (void*)L_0);
		// _handGrabPoint = this.GetComponentInParent<HandGrabPoint>();
		HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* L_1;
		L_1 = Component_GetComponentInParent_TisHandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C_mFEE233FBDA73F6A6DFADE3346B0A51B5E8B58082(__this, Component_GetComponentInParent_TisHandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C_mFEE233FBDA73F6A6DFADE3346B0A51B5E8B58082_RuntimeMethod_var);
		__this->____handGrabPoint_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handGrabPoint_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGhost::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGhost_OnValidate_m4884444C166FE033126984F182B937D14B444CAF (HandGhost_tCAE715DC9E23EAE5DAFEA521288F18A8D3AFEA58* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisHandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C_mFEE233FBDA73F6A6DFADE3346B0A51B5E8B58082_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* V_0 = NULL;
	{
		// if (_puppet == null
		//     || _gripPoint == null)
		HandPuppet_tF32101BA76C9B7D199C764ED4E0D8E31C00ECD70* L_0 = __this->____puppet_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->____gripPoint_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}

IL_001c:
	{
		// return;
		return;
	}

IL_001d:
	{
		// if (_handGrabPoint == null)
		HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* L_4 = __this->____handGrabPoint_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		// HandGrabPoint point = this.GetComponentInParent<HandGrabPoint>();
		HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* L_6;
		L_6 = Component_GetComponentInParent_TisHandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C_mFEE233FBDA73F6A6DFADE3346B0A51B5E8B58082(__this, Component_GetComponentInParent_TisHandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C_mFEE233FBDA73F6A6DFADE3346B0A51B5E8B58082_RuntimeMethod_var);
		V_0 = L_6;
		// if (point != null)
		HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_005d;
		}
	}
	{
		// SetPose(point);
		HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* L_9 = V_0;
		HandGhost_SetPose_m603749B9961ACB1C1103D6F2B3E91B9143986BA0(__this, L_9, NULL);
		return;
	}

IL_0043:
	{
		// else if (_handGrabPoint != null)
		HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* L_10 = __this->____handGrabPoint_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		// SetPose(_handGrabPoint);
		HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* L_12 = __this->____handGrabPoint_6;
		HandGhost_SetPose_m603749B9961ACB1C1103D6F2B3E91B9143986BA0(__this, L_12, NULL);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGhost::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGhost_Start_m36778382DA4C18D3B475E691AA311D9021D5481A (HandGhost_tCAE715DC9E23EAE5DAFEA521288F18A8D3AFEA58* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGhost::SetPose(Oculus.Interaction.HandPosing.HandGrabPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGhost_SetPose_m603749B9961ACB1C1103D6F2B3E91B9143986BA0 (HandGhost_tCAE715DC9E23EAE5DAFEA521288F18A8D3AFEA58* __this, HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* ___handGrabPoint0, const RuntimeMethod* method) 
{
	HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* V_2 = NULL;
	{
		// HandPose userPose = handGrabPoint.HandPose;
		HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* L_0 = ___handGrabPoint0;
		NullCheck(L_0);
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_1;
		L_1 = HandGrabPoint_get_HandPose_mB785342F2B3DE6A3691BFCDBCE49A2256D2EDB77(L_0, NULL);
		V_0 = L_1;
		// if (userPose == null)
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		// return;
		return;
	}

IL_000b:
	{
		// Transform relativeTo = handGrabPoint.RelativeTo;
		HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* L_3 = ___handGrabPoint0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = HandGrabPoint_get_RelativeTo_mE6D33E23708CD8E671E965978C4488CCA7B68679_inline(L_3, NULL);
		V_1 = L_4;
		// _puppet.SetJointRotations(userPose.JointRotations);
		HandPuppet_tF32101BA76C9B7D199C764ED4E0D8E31C00ECD70* L_5 = __this->____puppet_4;
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_6 = V_0;
		NullCheck(L_6);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_7;
		L_7 = HandPose_get_JointRotations_m67D61CC5658CC151843B59844D1E59DE839AF078(L_6, NULL);
		V_2 = L_7;
		NullCheck(L_5);
		HandPuppet_SetJointRotations_m447EBB853EB2A6797911032D20FEB5E300263882(L_5, (&V_2), NULL);
		// SetGripPose(handGrabPoint.RelativeGrip, relativeTo);
		HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* L_8 = ___handGrabPoint0;
		NullCheck(L_8);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9;
		L_9 = HandGrabPoint_get_RelativeGrip_m33DE465EC10D1271A4E4BD5AC1818C5870B2DF0A(L_8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = V_1;
		HandGhost_SetGripPose_mDD5C27356BC6D1E4319155FA5FE3077F965C9E44(__this, L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGhost::SetGripPose(UnityEngine.Pose,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGhost_SetGripPose_mDD5C27356BC6D1E4319155FA5FE3077F965C9E44 (HandGhost_tCAE715DC9E23EAE5DAFEA521288F18A8D3AFEA58* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___gripPose0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo1, const RuntimeMethod* method) 
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Pose inverseGrip = _gripPoint.RelativeOffset(this.transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____gripPoint_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2;
		L_2 = PoseUtils_RelativeOffset_m3CB9005781614AFF2FB327373F64AEBF20FE2696(L_0, L_1, NULL);
		V_0 = L_2;
		// gripPose.Premultiply(inverseGrip);
		PoseUtils_Premultiply_m0C6B153A3DAECFCCD4D0999DCD8C069CCBE822CD((&___gripPose0), (&V_0), NULL);
		// gripPose.Postmultiply(relativeTo.GetPose());
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___relativeTo1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_4;
		L_4 = PoseUtils_GetPose_m913669538E46AA3E2671EFA9B84A6E449C05886D(L_3, 0, NULL);
		V_1 = L_4;
		PoseUtils_Postmultiply_m4F1BBE85E92DC9DE3AFDFE54C520174A5ACCE9E9((&___gripPose0), (&V_1), NULL);
		// _puppet.SetRootPose(gripPose);
		HandPuppet_tF32101BA76C9B7D199C764ED4E0D8E31C00ECD70* L_5 = __this->____puppet_4;
		NullCheck(L_5);
		HandPuppet_SetRootPose_m0A17926BA47B9268010FDC3279FAD47ECAEDA021(L_5, (&___gripPose0), NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGhost::InjectHandPuppet(Oculus.Interaction.HandPosing.Visuals.HandPuppet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGhost_InjectHandPuppet_m8BEBAEED79E5CD179F968882AF227927CB004B27 (HandGhost_tCAE715DC9E23EAE5DAFEA521288F18A8D3AFEA58* __this, HandPuppet_tF32101BA76C9B7D199C764ED4E0D8E31C00ECD70* ___puppet0, const RuntimeMethod* method) 
{
	{
		// _puppet = puppet;
		HandPuppet_tF32101BA76C9B7D199C764ED4E0D8E31C00ECD70* L_0 = ___puppet0;
		__this->____puppet_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____puppet_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGhost::InjectGripPoint(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGhost_InjectGripPoint_m1F32A1B18176A6F40778E0275580C29237076ACC (HandGhost_tCAE715DC9E23EAE5DAFEA521288F18A8D3AFEA58* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___gripPoint0, const RuntimeMethod* method) 
{
	{
		// _gripPoint = gripPoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___gripPoint0;
		__this->____gripPoint_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gripPoint_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGhost::InjectOptionalHandGrabPoint(Oculus.Interaction.HandPosing.HandGrabPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGhost_InjectOptionalHandGrabPoint_m797C471AFBC3ECC07F978D1B2B7A1D659AFA66B0 (HandGhost_tCAE715DC9E23EAE5DAFEA521288F18A8D3AFEA58* __this, HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* ___handGrabPoint0, const RuntimeMethod* method) 
{
	{
		// _handGrabPoint = handGrabPoint;
		HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* L_0 = ___handGrabPoint0;
		__this->____handGrabPoint_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handGrabPoint_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGhost::InjectAllHandGhost(Oculus.Interaction.HandPosing.Visuals.HandPuppet,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGhost_InjectAllHandGhost_mBF8FE63222975F5FA23214508A5045E0967153A2 (HandGhost_tCAE715DC9E23EAE5DAFEA521288F18A8D3AFEA58* __this, HandPuppet_tF32101BA76C9B7D199C764ED4E0D8E31C00ECD70* ___puppet0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___gripPoint1, const RuntimeMethod* method) 
{
	{
		// InjectHandPuppet(puppet);
		HandPuppet_tF32101BA76C9B7D199C764ED4E0D8E31C00ECD70* L_0 = ___puppet0;
		HandGhost_InjectHandPuppet_m8BEBAEED79E5CD179F968882AF227927CB004B27_inline(__this, L_0, NULL);
		// InjectGripPoint(gripPoint);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___gripPoint1;
		HandGhost_InjectGripPoint_m1F32A1B18176A6F40778E0275580C29237076ACC_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGhost::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGhost__ctor_m6B41EAAB67A5784C20B03B7699D677F80F0BFABD (HandGhost_tCAE715DC9E23EAE5DAFEA521288F18A8D3AFEA58* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Oculus.Interaction.HandPosing.Visuals.HandGhost Oculus.Interaction.HandPosing.Visuals.HandGhostProvider::GetHand(Oculus.Interaction.Input.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandGhost_tCAE715DC9E23EAE5DAFEA521288F18A8D3AFEA58* HandGhostProvider_GetHand_mC1D5D08C3D6D84B751724F185B18470F8B8EE9C1 (HandGhostProvider_t6BCEB5A0DAC371CA099D0F65BB6C0799C5A2BAFF* __this, int32_t ___handedness0, const RuntimeMethod* method) 
{
	{
		// return handedness == Handedness.Left ? _leftHand : _rightHand;
		int32_t L_0 = ___handedness0;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		HandGhost_tCAE715DC9E23EAE5DAFEA521288F18A8D3AFEA58* L_1 = __this->____rightHand_5;
		return L_1;
	}

IL_000a:
	{
		HandGhost_tCAE715DC9E23EAE5DAFEA521288F18A8D3AFEA58* L_2 = __this->____leftHand_4;
		return L_2;
	}
}
// System.Boolean Oculus.Interaction.HandPosing.Visuals.HandGhostProvider::TryGetDefault(Oculus.Interaction.HandPosing.Visuals.HandGhostProvider&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGhostProvider_TryGetDefault_mB62DE508FA7E16440AEE87AD877CB1CB6EDEC5AD (HandGhostProvider_t6BCEB5A0DAC371CA099D0F65BB6C0799C5A2BAFF** ___provider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_FindObjectsOfTypeAll_TisHandGhostProvider_t6BCEB5A0DAC371CA099D0F65BB6C0799C5A2BAFF_mE8C6E22AC0428C0575478262AC555C05EF3BABB9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	HandGhostProviderU5BU5D_t60E5D526211255639258E0DE343759F1B075190E* V_0 = NULL;
	{
		// HandGhostProvider[] providers = Resources.FindObjectsOfTypeAll<HandGhostProvider>();
		HandGhostProviderU5BU5D_t60E5D526211255639258E0DE343759F1B075190E* L_0;
		L_0 = Resources_FindObjectsOfTypeAll_TisHandGhostProvider_t6BCEB5A0DAC371CA099D0F65BB6C0799C5A2BAFF_mE8C6E22AC0428C0575478262AC555C05EF3BABB9(Resources_FindObjectsOfTypeAll_TisHandGhostProvider_t6BCEB5A0DAC371CA099D0F65BB6C0799C5A2BAFF_mE8C6E22AC0428C0575478262AC555C05EF3BABB9_RuntimeMethod_var);
		V_0 = L_0;
		// if (providers != null && providers.Length > 0)
		HandGhostProviderU5BU5D_t60E5D526211255639258E0DE343759F1B075190E* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		HandGhostProviderU5BU5D_t60E5D526211255639258E0DE343759F1B075190E* L_2 = V_0;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0014;
		}
	}
	{
		// provider = providers[0];
		HandGhostProvider_t6BCEB5A0DAC371CA099D0F65BB6C0799C5A2BAFF** L_3 = ___provider0;
		HandGhostProviderU5BU5D_t60E5D526211255639258E0DE343759F1B075190E* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = 0;
		HandGhostProvider_t6BCEB5A0DAC371CA099D0F65BB6C0799C5A2BAFF* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_6);
		// return true;
		return (bool)1;
	}

IL_0014:
	{
		// provider = null;
		HandGhostProvider_t6BCEB5A0DAC371CA099D0F65BB6C0799C5A2BAFF** L_7 = ___provider0;
		*((RuntimeObject**)L_7) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_7, (void*)(RuntimeObject*)NULL);
		// return false;
		return (bool)0;
	}
}
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGhostProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGhostProvider__ctor_mCACA6E7FDB76D7B72669B65C7B13949E734D2A8E (HandGhostProvider_t6BCEB5A0DAC371CA099D0F65BB6C0799C5A2BAFF* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabInteractorVisual_Awake_m926EF6553388A4FC27E6CA83CAB37A91A24FB26F (HandGrabInteractorVisual_tC7BD96F6109967EA0B7DACE15907F34E7DE61F6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converter_2_t6BBCBCD21171D7F33E059ACE84167B6D3DC16BD5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ConvertAll_TisISnapper_t54B03424DDEA6B8A93A3BEEDB696378FCC8F1D84_m244103330D0516D8004EC91A8205CE597C1BF0DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAwakeU3Eb__8_0_mB7A2DE9A7C49655EDDCB0B7B6EE2F6275320D252_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Converter_2_t6BBCBCD21171D7F33E059ACE84167B6D3DC16BD5* G_B2_0 = NULL;
	List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* G_B2_1 = NULL;
	HandGrabInteractorVisual_tC7BD96F6109967EA0B7DACE15907F34E7DE61F6B* G_B2_2 = NULL;
	Converter_2_t6BBCBCD21171D7F33E059ACE84167B6D3DC16BD5* G_B1_0 = NULL;
	List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* G_B1_1 = NULL;
	HandGrabInteractorVisual_tC7BD96F6109967EA0B7DACE15907F34E7DE61F6B* G_B1_2 = NULL;
	{
		// Snappers = _snappers.ConvertAll(mono => mono as ISnapper);
		List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* L_0 = __this->____snappers_4;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8_il2cpp_TypeInfo_var);
		Converter_2_t6BBCBCD21171D7F33E059ACE84167B6D3DC16BD5* L_1 = ((U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1;
		Converter_2_t6BBCBCD21171D7F33E059ACE84167B6D3DC16BD5* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		G_B1_2 = __this;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			G_B2_2 = __this;
			goto IL_0026;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8_il2cpp_TypeInfo_var);
		U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8* L_3 = ((U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Converter_2_t6BBCBCD21171D7F33E059ACE84167B6D3DC16BD5* L_4 = (Converter_2_t6BBCBCD21171D7F33E059ACE84167B6D3DC16BD5*)il2cpp_codegen_object_new(Converter_2_t6BBCBCD21171D7F33E059ACE84167B6D3DC16BD5_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Converter_2__ctor_m991BFF54FEA8553125E8C78B9F8619AA8930F4B5(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CAwakeU3Eb__8_0_mB7A2DE9A7C49655EDDCB0B7B6EE2F6275320D252_RuntimeMethod_var), NULL);
		Converter_2_t6BBCBCD21171D7F33E059ACE84167B6D3DC16BD5* L_5 = L_4;
		((U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0026:
	{
		NullCheck(G_B2_1);
		List_1_t3E48FD3D0973549A1410A423D470FEE7B0780644* L_6;
		L_6 = List_1_ConvertAll_TisISnapper_t54B03424DDEA6B8A93A3BEEDB696378FCC8F1D84_m244103330D0516D8004EC91A8205CE597C1BF0DB(G_B2_1, G_B2_0, List_1_ConvertAll_TisISnapper_t54B03424DDEA6B8A93A3BEEDB696378FCC8F1D84_m244103330D0516D8004EC91A8205CE597C1BF0DB_RuntimeMethod_var);
		NullCheck(G_B2_2);
		G_B2_2->___Snappers_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_2->___Snappers_5), (void*)L_6);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabInteractorVisual_Start_m01660EFB481D5D5FC102724FCD8C76593E29801B (HandGrabInteractorVisual_tC7BD96F6109967EA0B7DACE15907F34E7DE61F6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_GetData_m61634C67200FCA53F1CDA0334E39EC4784C83AF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m24AEC49266104042F07427E487B601309C5CBEDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE3E48706852292B6DC099210FFF50627AC662A63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFB6425578B24D629189776244C61788BD5E98C48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m9E169FBC2227D19589EDA47E649FC19A39E9B3D3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t4F8EC6B979623B6202DB16CF53FDD479D1B49B70 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// this.BeginStart(ref _started);
		bool* L_0 = (&__this->____started_11);
		MonoBehaviourStartExtensions_BeginStart_mDD969725C4C386681AC8271DD8C4073818218BBA(__this, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		// foreach (ISnapper snapper in Snappers)
		List_1_t3E48FD3D0973549A1410A423D470FEE7B0780644* L_1 = __this->___Snappers_5;
		NullCheck(L_1);
		Enumerator_t4F8EC6B979623B6202DB16CF53FDD479D1B49B70 L_2;
		L_2 = List_1_GetEnumerator_m9E169FBC2227D19589EDA47E649FC19A39E9B3D3(L_1, List_1_GetEnumerator_m9E169FBC2227D19589EDA47E649FC19A39E9B3D3_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m24AEC49266104042F07427E487B601309C5CBEDA((&V_0), Enumerator_Dispose_m24AEC49266104042F07427E487B601309C5CBEDA_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0023_1;
			}

IL_001b_1:
			{
				// foreach (ISnapper snapper in Snappers)
				RuntimeObject* L_3;
				L_3 = Enumerator_get_Current_mFB6425578B24D629189776244C61788BD5E98C48_inline((&V_0), Enumerator_get_Current_mFB6425578B24D629189776244C61788BD5E98C48_RuntimeMethod_var);
			}

IL_0023_1:
			{
				// foreach (ISnapper snapper in Snappers)
				bool L_4;
				L_4 = Enumerator_MoveNext_mE3E48706852292B6DC099210FFF50627AC662A63((&V_0), Enumerator_MoveNext_mE3E48706852292B6DC099210FFF50627AC662A63_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_001b_1;
				}
			}
			{
				goto IL_003c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		// Transformer = _syntheticHand.GetData().Config.TrackingToWorldTransformer;
		SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* L_5 = __this->____syntheticHand_6;
		NullCheck(L_5);
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_6;
		L_6 = DataSource_1_GetData_m61634C67200FCA53F1CDA0334E39EC4784C83AF0(L_5, DataSource_1_GetData_m61634C67200FCA53F1CDA0334E39EC4784C83AF0_RuntimeMethod_var);
		NullCheck(L_6);
		HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* L_7 = L_6->___Config_14;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = HandDataSourceConfig_get_TrackingToWorldTransformer_m78056DEE0EA266365275987EB71CA8DDF9313400_inline(L_7, NULL);
		__this->___Transformer_9 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Transformer_9), (void*)L_8);
		// this.EndStart(ref _started);
		bool* L_9 = (&__this->____started_11);
		MonoBehaviourStartExtensions_EndStart_m886958C775D916BE56C23EF36B446A1D268AABF0(__this, L_9, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabInteractorVisual_OnEnable_mBC34F63EA97C7A68F61EF49450D9405DE256566A (HandGrabInteractorVisual_tC7BD96F6109967EA0B7DACE15907F34E7DE61F6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA18455211C51A1DBF839683A9A405FFB3E51EE32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7F890D387B8294FF405777D929F894DF8863409F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m677B6DAF16A498C87390EB1D8491F59DC1225A64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandGrabInteractorVisual_HandleSnapEnded_mBC05BB45107C708C7A5FE9479E893CBA49AD6CEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandGrabInteractorVisual_HandleSnapStarted_m509260DF34463EC432B264657C7EB3E8700A3C6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISnapper_t54B03424DDEA6B8A93A3BEEDB696378FCC8F1D84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6634056FE8223F5FBF4B35F680857B49FA138DC2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t07C2E5693B034463FB920742E4CC32D19677F76F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (_started)
		bool L_0 = __this->____started_11;
		if (!L_0)
		{
			goto IL_007e;
		}
	}
	{
		// foreach (ISnapper snapper in _snappers)
		List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* L_1 = __this->____snappers_4;
		NullCheck(L_1);
		Enumerator_t07C2E5693B034463FB920742E4CC32D19677F76F L_2;
		L_2 = List_1_GetEnumerator_m6634056FE8223F5FBF4B35F680857B49FA138DC2(L_1, List_1_GetEnumerator_m6634056FE8223F5FBF4B35F680857B49FA138DC2_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0070:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA18455211C51A1DBF839683A9A405FFB3E51EE32((&V_0), Enumerator_Dispose_mA18455211C51A1DBF839683A9A405FFB3E51EE32_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0065_1;
			}

IL_0016_1:
			{
				// foreach (ISnapper snapper in _snappers)
				MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_3;
				L_3 = Enumerator_get_Current_m677B6DAF16A498C87390EB1D8491F59DC1225A64_inline((&V_0), Enumerator_get_Current_m677B6DAF16A498C87390EB1D8491F59DC1225A64_RuntimeMethod_var);
				// snapper.WhenSnapStarted += HandleSnapStarted;
				RuntimeObject* L_4 = ((RuntimeObject*)Castclass((RuntimeObject*)L_3, ISnapper_t54B03424DDEA6B8A93A3BEEDB696378FCC8F1D84_il2cpp_TypeInfo_var));
				RuntimeObject* L_5 = L_4;
				NullCheck(L_5);
				Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038* L_6;
				L_6 = InterfaceFuncInvoker0< Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038* >::Invoke(5 /* System.Action`1<Oculus.Interaction.HandPosing.ISnapper> Oculus.Interaction.HandPosing.ISnapper::get_WhenSnapStarted() */, ISnapper_t54B03424DDEA6B8A93A3BEEDB696378FCC8F1D84_il2cpp_TypeInfo_var, L_5);
				Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038* L_7 = (Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038*)il2cpp_codegen_object_new(Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038_il2cpp_TypeInfo_var);
				NullCheck(L_7);
				Action_1__ctor_mE2E2F7BD38D859455DEDBF534843720FBC749401(L_7, __this, (intptr_t)((void*)HandGrabInteractorVisual_HandleSnapStarted_m509260DF34463EC432B264657C7EB3E8700A3C6E_RuntimeMethod_var), NULL);
				Delegate_t* L_8;
				L_8 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_6, L_7, NULL);
				NullCheck(L_5);
				InterfaceActionInvoker1< Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038* >::Invoke(6 /* System.Void Oculus.Interaction.HandPosing.ISnapper::set_WhenSnapStarted(System.Action`1<Oculus.Interaction.HandPosing.ISnapper>) */, ISnapper_t54B03424DDEA6B8A93A3BEEDB696378FCC8F1D84_il2cpp_TypeInfo_var, L_5, ((Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038*)Castclass((RuntimeObject*)L_8, Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038_il2cpp_TypeInfo_var)));
				// snapper.WhenSnapEnded += HandleSnapEnded;
				RuntimeObject* L_9 = L_4;
				NullCheck(L_9);
				Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038* L_10;
				L_10 = InterfaceFuncInvoker0< Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038* >::Invoke(7 /* System.Action`1<Oculus.Interaction.HandPosing.ISnapper> Oculus.Interaction.HandPosing.ISnapper::get_WhenSnapEnded() */, ISnapper_t54B03424DDEA6B8A93A3BEEDB696378FCC8F1D84_il2cpp_TypeInfo_var, L_9);
				Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038* L_11 = (Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038*)il2cpp_codegen_object_new(Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038_il2cpp_TypeInfo_var);
				NullCheck(L_11);
				Action_1__ctor_mE2E2F7BD38D859455DEDBF534843720FBC749401(L_11, __this, (intptr_t)((void*)HandGrabInteractorVisual_HandleSnapEnded_mBC05BB45107C708C7A5FE9479E893CBA49AD6CEB_RuntimeMethod_var), NULL);
				Delegate_t* L_12;
				L_12 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_10, L_11, NULL);
				NullCheck(L_9);
				InterfaceActionInvoker1< Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038* >::Invoke(8 /* System.Void Oculus.Interaction.HandPosing.ISnapper::set_WhenSnapEnded(System.Action`1<Oculus.Interaction.HandPosing.ISnapper>) */, ISnapper_t54B03424DDEA6B8A93A3BEEDB696378FCC8F1D84_il2cpp_TypeInfo_var, L_9, ((Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038*)Castclass((RuntimeObject*)L_12, Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038_il2cpp_TypeInfo_var)));
			}

IL_0065_1:
			{
				// foreach (ISnapper snapper in _snappers)
				bool L_13;
				L_13 = Enumerator_MoveNext_m7F890D387B8294FF405777D929F894DF8863409F((&V_0), Enumerator_MoveNext_m7F890D387B8294FF405777D929F894DF8863409F_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_0016_1;
				}
			}
			{
				goto IL_007e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007e:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabInteractorVisual_OnDisable_m7324D53E36CDC203B98006208C312A92D877D6AC (HandGrabInteractorVisual_tC7BD96F6109967EA0B7DACE15907F34E7DE61F6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA18455211C51A1DBF839683A9A405FFB3E51EE32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7F890D387B8294FF405777D929F894DF8863409F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m677B6DAF16A498C87390EB1D8491F59DC1225A64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandGrabInteractorVisual_HandleSnapEnded_mBC05BB45107C708C7A5FE9479E893CBA49AD6CEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandGrabInteractorVisual_HandleSnapStarted_m509260DF34463EC432B264657C7EB3E8700A3C6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISnapper_t54B03424DDEA6B8A93A3BEEDB696378FCC8F1D84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6634056FE8223F5FBF4B35F680857B49FA138DC2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t07C2E5693B034463FB920742E4CC32D19677F76F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (_started)
		bool L_0 = __this->____started_11;
		if (!L_0)
		{
			goto IL_007e;
		}
	}
	{
		// foreach (ISnapper snapper in _snappers)
		List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* L_1 = __this->____snappers_4;
		NullCheck(L_1);
		Enumerator_t07C2E5693B034463FB920742E4CC32D19677F76F L_2;
		L_2 = List_1_GetEnumerator_m6634056FE8223F5FBF4B35F680857B49FA138DC2(L_1, List_1_GetEnumerator_m6634056FE8223F5FBF4B35F680857B49FA138DC2_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0070:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA18455211C51A1DBF839683A9A405FFB3E51EE32((&V_0), Enumerator_Dispose_mA18455211C51A1DBF839683A9A405FFB3E51EE32_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0065_1;
			}

IL_0016_1:
			{
				// foreach (ISnapper snapper in _snappers)
				MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_3;
				L_3 = Enumerator_get_Current_m677B6DAF16A498C87390EB1D8491F59DC1225A64_inline((&V_0), Enumerator_get_Current_m677B6DAF16A498C87390EB1D8491F59DC1225A64_RuntimeMethod_var);
				// snapper.WhenSnapStarted -= HandleSnapStarted;
				RuntimeObject* L_4 = ((RuntimeObject*)Castclass((RuntimeObject*)L_3, ISnapper_t54B03424DDEA6B8A93A3BEEDB696378FCC8F1D84_il2cpp_TypeInfo_var));
				RuntimeObject* L_5 = L_4;
				NullCheck(L_5);
				Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038* L_6;
				L_6 = InterfaceFuncInvoker0< Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038* >::Invoke(5 /* System.Action`1<Oculus.Interaction.HandPosing.ISnapper> Oculus.Interaction.HandPosing.ISnapper::get_WhenSnapStarted() */, ISnapper_t54B03424DDEA6B8A93A3BEEDB696378FCC8F1D84_il2cpp_TypeInfo_var, L_5);
				Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038* L_7 = (Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038*)il2cpp_codegen_object_new(Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038_il2cpp_TypeInfo_var);
				NullCheck(L_7);
				Action_1__ctor_mE2E2F7BD38D859455DEDBF534843720FBC749401(L_7, __this, (intptr_t)((void*)HandGrabInteractorVisual_HandleSnapStarted_m509260DF34463EC432B264657C7EB3E8700A3C6E_RuntimeMethod_var), NULL);
				Delegate_t* L_8;
				L_8 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_6, L_7, NULL);
				NullCheck(L_5);
				InterfaceActionInvoker1< Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038* >::Invoke(6 /* System.Void Oculus.Interaction.HandPosing.ISnapper::set_WhenSnapStarted(System.Action`1<Oculus.Interaction.HandPosing.ISnapper>) */, ISnapper_t54B03424DDEA6B8A93A3BEEDB696378FCC8F1D84_il2cpp_TypeInfo_var, L_5, ((Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038*)Castclass((RuntimeObject*)L_8, Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038_il2cpp_TypeInfo_var)));
				// snapper.WhenSnapEnded -= HandleSnapEnded;
				RuntimeObject* L_9 = L_4;
				NullCheck(L_9);
				Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038* L_10;
				L_10 = InterfaceFuncInvoker0< Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038* >::Invoke(7 /* System.Action`1<Oculus.Interaction.HandPosing.ISnapper> Oculus.Interaction.HandPosing.ISnapper::get_WhenSnapEnded() */, ISnapper_t54B03424DDEA6B8A93A3BEEDB696378FCC8F1D84_il2cpp_TypeInfo_var, L_9);
				Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038* L_11 = (Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038*)il2cpp_codegen_object_new(Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038_il2cpp_TypeInfo_var);
				NullCheck(L_11);
				Action_1__ctor_mE2E2F7BD38D859455DEDBF534843720FBC749401(L_11, __this, (intptr_t)((void*)HandGrabInteractorVisual_HandleSnapEnded_mBC05BB45107C708C7A5FE9479E893CBA49AD6CEB_RuntimeMethod_var), NULL);
				Delegate_t* L_12;
				L_12 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_10, L_11, NULL);
				NullCheck(L_9);
				InterfaceActionInvoker1< Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038* >::Invoke(8 /* System.Void Oculus.Interaction.HandPosing.ISnapper::set_WhenSnapEnded(System.Action`1<Oculus.Interaction.HandPosing.ISnapper>) */, ISnapper_t54B03424DDEA6B8A93A3BEEDB696378FCC8F1D84_il2cpp_TypeInfo_var, L_9, ((Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038*)Castclass((RuntimeObject*)L_12, Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038_il2cpp_TypeInfo_var)));
			}

IL_0065_1:
			{
				// foreach (ISnapper snapper in _snappers)
				bool L_13;
				L_13 = Enumerator_MoveNext_m7F890D387B8294FF405777D929F894DF8863409F((&V_0), Enumerator_MoveNext_m7F890D387B8294FF405777D929F894DF8863409F_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_0016_1;
				}
			}
			{
				goto IL_007e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007e:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabInteractorVisual_LateUpdate_m16BE3AD2ECD80FCFF4DD33027061724C9D54F797 (HandGrabInteractorVisual_tC7BD96F6109967EA0B7DACE15907F34E7DE61F6B* __this, const RuntimeMethod* method) 
{
	{
		// UpdateHand(_currentSnapper);
		RuntimeObject* L_0 = __this->____currentSnapper_10;
		HandGrabInteractorVisual_UpdateHand_m2AABBC3306B11D89A00A97533976E40DB440EF80(__this, L_0, NULL);
		// _syntheticHand.MarkInputDataRequiresUpdate();
		SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* L_1 = __this->____syntheticHand_6;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(16 /* System.Void Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.HandDataAsset>::MarkInputDataRequiresUpdate() */, L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual::HandleSnapStarted(Oculus.Interaction.HandPosing.ISnapper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabInteractorVisual_HandleSnapStarted_m509260DF34463EC432B264657C7EB3E8700A3C6E (HandGrabInteractorVisual_tC7BD96F6109967EA0B7DACE15907F34E7DE61F6B* __this, RuntimeObject* ___snapper0, const RuntimeMethod* method) 
{
	{
		// _currentSnapper = snapper;
		RuntimeObject* L_0 = ___snapper0;
		__this->____currentSnapper_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentSnapper_10), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual::HandleSnapEnded(Oculus.Interaction.HandPosing.ISnapper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabInteractorVisual_HandleSnapEnded_mBC05BB45107C708C7A5FE9479E893CBA49AD6CEB (HandGrabInteractorVisual_tC7BD96F6109967EA0B7DACE15907F34E7DE61F6B* __this, RuntimeObject* ___snapper0, const RuntimeMethod* method) 
{
	{
		// if (_currentSnapper == snapper)
		RuntimeObject* L_0 = __this->____currentSnapper_10;
		RuntimeObject* L_1 = ___snapper0;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_0010;
		}
	}
	{
		// _currentSnapper = null;
		__this->____currentSnapper_10 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentSnapper_10), (void*)(RuntimeObject*)NULL);
	}

IL_0010:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual::UpdateHand(Oculus.Interaction.HandPosing.ISnapper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabInteractorVisual_UpdateHand_m2AABBC3306B11D89A00A97533976E40DB440EF80 (HandGrabInteractorVisual_tC7BD96F6109967EA0B7DACE15907F34E7DE61F6B* __this, RuntimeObject* ___constrainingSnapper0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (constrainingSnapper != null)
		RuntimeObject* L_0 = ___constrainingSnapper0;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// ConstrainingForce(constrainingSnapper, out float fingersConstraint, out float wristConstraint);
		RuntimeObject* L_1 = ___constrainingSnapper0;
		HandGrabInteractorVisual_ConstrainingForce_m8B775FAF9A65A9844FC2A4E9EF5A70CEA6BDC245(__this, L_1, (&V_0), (&V_1), NULL);
		// UpdateHandPose(constrainingSnapper, fingersConstraint, wristConstraint);
		RuntimeObject* L_2 = ___constrainingSnapper0;
		float L_3 = V_0;
		float L_4 = V_1;
		HandGrabInteractorVisual_UpdateHandPose_mF180BE13338C28C3B0A719B69446729F45EC9987(__this, L_2, L_3, L_4, NULL);
		return;
	}

IL_0018:
	{
		// FreeFingers();
		bool L_5;
		L_5 = HandGrabInteractorVisual_FreeFingers_m445A770159339A4C082869BB0FC26014B963465A(__this, NULL);
		// FreeWrist();
		bool L_6;
		L_6 = HandGrabInteractorVisual_FreeWrist_m5B646BDD3D5C8E9112CF106D47565747780785C1(__this, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual::ConstrainingForce(Oculus.Interaction.HandPosing.ISnapper,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabInteractorVisual_ConstrainingForce_m8B775FAF9A65A9844FC2A4E9EF5A70CEA6BDC245 (HandGrabInteractorVisual_tC7BD96F6109967EA0B7DACE15907F34E7DE61F6B* __this, RuntimeObject* ___snapper0, float* ___fingersConstraint1, float* ___wristConstraint2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISnapData_tF679483EF2786EFCAECA0D238B062543C2E988A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISnapper_t54B03424DDEA6B8A93A3BEEDB696378FCC8F1D84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	float V_2 = 0.0f;
	float* G_B6_0 = NULL;
	float* G_B5_0 = NULL;
	float G_B7_0 = 0.0f;
	float* G_B7_1 = NULL;
	float* G_B12_0 = NULL;
	float* G_B11_0 = NULL;
	float G_B13_0 = 0.0f;
	float* G_B13_1 = NULL;
	{
		// ISnapData snap = snapper.SnapData;
		RuntimeObject* L_0 = ___snapper0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Oculus.Interaction.HandPosing.ISnapData Oculus.Interaction.HandPosing.ISnapper::get_SnapData() */, ISnapper_t54B03424DDEA6B8A93A3BEEDB696378FCC8F1D84_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		// fingersConstraint = wristConstraint = 0;
		float* L_2 = ___fingersConstraint1;
		float* L_3 = ___wristConstraint2;
		float L_4 = (0.0f);
		V_2 = L_4;
		*((float*)L_3) = (float)L_4;
		float L_5 = V_2;
		*((float*)L_2) = (float)L_5;
		// if (snap == null)
		RuntimeObject* L_6 = V_0;
		if (L_6)
		{
			goto IL_0017;
		}
	}
	{
		// return;
		return;
	}

IL_0017:
	{
		// bool isSnapping = snapper.IsSnapping;
		RuntimeObject* L_7 = ___snapper0;
		NullCheck(L_7);
		bool L_8;
		L_8 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Oculus.Interaction.HandPosing.ISnapper::get_IsSnapping() */, ISnapper_t54B03424DDEA6B8A93A3BEEDB696378FCC8F1D84_il2cpp_TypeInfo_var, L_7);
		V_1 = L_8;
		// if (isSnapping && snap.SnapType != SnapType.None)
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0049;
		}
	}
	{
		RuntimeObject* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Oculus.Interaction.HandPosing.SnapType Oculus.Interaction.HandPosing.ISnapData::get_SnapType() */, ISnapData_tF679483EF2786EFCAECA0D238B062543C2E988A4_il2cpp_TypeInfo_var, L_10);
		if ((((int32_t)L_11) == ((int32_t)3)))
		{
			goto IL_0049;
		}
	}
	{
		// fingersConstraint = snap.HandPose != null ? 1f : 0f;
		float* L_12 = ___fingersConstraint1;
		RuntimeObject* L_13 = V_0;
		NullCheck(L_13);
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_14;
		L_14 = InterfaceFuncInvoker0< HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* >::Invoke(1 /* Oculus.Interaction.HandPosing.HandPose Oculus.Interaction.HandPosing.ISnapData::get_HandPose() */, ISnapData_tF679483EF2786EFCAECA0D238B062543C2E988A4_il2cpp_TypeInfo_var, L_13);
		G_B5_0 = L_12;
		if (L_14)
		{
			G_B6_0 = L_12;
			goto IL_003a;
		}
	}
	{
		G_B7_0 = (0.0f);
		G_B7_1 = G_B5_0;
		goto IL_003f;
	}

IL_003a:
	{
		G_B7_0 = (1.0f);
		G_B7_1 = G_B6_0;
	}

IL_003f:
	{
		*((float*)G_B7_1) = (float)G_B7_0;
		// wristConstraint = 1f;
		float* L_15 = ___wristConstraint2;
		*((float*)L_15) = (float)(1.0f);
		goto IL_007a;
	}

IL_0049:
	{
		// else if (snap.SnapType == SnapType.HandToObject
		//     || snap.SnapType == SnapType.HandToObjectAndReturn)
		RuntimeObject* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Oculus.Interaction.HandPosing.SnapType Oculus.Interaction.HandPosing.ISnapData::get_SnapType() */, ISnapData_tF679483EF2786EFCAECA0D238B062543C2E988A4_il2cpp_TypeInfo_var, L_16);
		if ((((int32_t)L_17) == ((int32_t)1)))
		{
			goto IL_005b;
		}
	}
	{
		RuntimeObject* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Oculus.Interaction.HandPosing.SnapType Oculus.Interaction.HandPosing.ISnapData::get_SnapType() */, ISnapData_tF679483EF2786EFCAECA0D238B062543C2E988A4_il2cpp_TypeInfo_var, L_18);
		if ((!(((uint32_t)L_19) == ((uint32_t)2))))
		{
			goto IL_007a;
		}
	}

IL_005b:
	{
		// fingersConstraint = snap.HandPose != null ? snapper.SnapStrength : 0f;
		float* L_20 = ___fingersConstraint1;
		RuntimeObject* L_21 = V_0;
		NullCheck(L_21);
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_22;
		L_22 = InterfaceFuncInvoker0< HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* >::Invoke(1 /* Oculus.Interaction.HandPosing.HandPose Oculus.Interaction.HandPosing.ISnapData::get_HandPose() */, ISnapData_tF679483EF2786EFCAECA0D238B062543C2E988A4_il2cpp_TypeInfo_var, L_21);
		G_B11_0 = L_20;
		if (L_22)
		{
			G_B12_0 = L_20;
			goto IL_006b;
		}
	}
	{
		G_B13_0 = (0.0f);
		G_B13_1 = G_B11_0;
		goto IL_0071;
	}

IL_006b:
	{
		RuntimeObject* L_23 = ___snapper0;
		NullCheck(L_23);
		float L_24;
		L_24 = InterfaceFuncInvoker0< float >::Invoke(1 /* System.Single Oculus.Interaction.HandPosing.ISnapper::get_SnapStrength() */, ISnapper_t54B03424DDEA6B8A93A3BEEDB696378FCC8F1D84_il2cpp_TypeInfo_var, L_23);
		G_B13_0 = L_24;
		G_B13_1 = G_B12_0;
	}

IL_0071:
	{
		*((float*)G_B13_1) = (float)G_B13_0;
		// wristConstraint = snapper.SnapStrength;
		float* L_25 = ___wristConstraint2;
		RuntimeObject* L_26 = ___snapper0;
		NullCheck(L_26);
		float L_27;
		L_27 = InterfaceFuncInvoker0< float >::Invoke(1 /* System.Single Oculus.Interaction.HandPosing.ISnapper::get_SnapStrength() */, ISnapper_t54B03424DDEA6B8A93A3BEEDB696378FCC8F1D84_il2cpp_TypeInfo_var, L_26);
		*((float*)L_25) = (float)L_27;
	}

IL_007a:
	{
		// if (fingersConstraint >= 1f && !isSnapping)
		float* L_28 = ___fingersConstraint1;
		float L_29 = *((float*)L_28);
		if ((!(((float)L_29) >= ((float)(1.0f)))))
		{
			goto IL_008d;
		}
	}
	{
		bool L_30 = V_1;
		if (L_30)
		{
			goto IL_008d;
		}
	}
	{
		// fingersConstraint = 0;
		float* L_31 = ___fingersConstraint1;
		*((float*)L_31) = (float)(0.0f);
	}

IL_008d:
	{
		// if (wristConstraint >= 1f && !isSnapping)
		float* L_32 = ___wristConstraint2;
		float L_33 = *((float*)L_32);
		if ((!(((float)L_33) >= ((float)(1.0f)))))
		{
			goto IL_00a0;
		}
	}
	{
		bool L_34 = V_1;
		if (L_34)
		{
			goto IL_00a0;
		}
	}
	{
		// wristConstraint = 0f;
		float* L_35 = ___wristConstraint2;
		*((float*)L_35) = (float)(0.0f);
	}

IL_00a0:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual::UpdateHandPose(Oculus.Interaction.HandPosing.ISnapper,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabInteractorVisual_UpdateHandPose_mF180BE13338C28C3B0A719B69446729F45EC9987 (HandGrabInteractorVisual_tC7BD96F6109967EA0B7DACE15907F34E7DE61F6B* __this, RuntimeObject* ___snapper0, float ___fingersConstraint1, float ___wristConstraint2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISnapData_tF679483EF2786EFCAECA0D238B062543C2E988A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISnapper_t54B03424DDEA6B8A93A3BEEDB696378FCC8F1D84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITrackingToWorldTransformer_t193B383D2CCDEDD1521A0197EB476879DD657B2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// ISnapData snap = snapper.SnapData;
		RuntimeObject* L_0 = ___snapper0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Oculus.Interaction.HandPosing.ISnapData Oculus.Interaction.HandPosing.ISnapper::get_SnapData() */, ISnapper_t54B03424DDEA6B8A93A3BEEDB696378FCC8F1D84_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		// if (snap == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		// FreeFingers();
		bool L_3;
		L_3 = HandGrabInteractorVisual_FreeFingers_m445A770159339A4C082869BB0FC26014B963465A(__this, NULL);
		// FreeWrist();
		bool L_4;
		L_4 = HandGrabInteractorVisual_FreeWrist_m5B646BDD3D5C8E9112CF106D47565747780785C1(__this, NULL);
		// return;
		return;
	}

IL_0019:
	{
		// if (fingersConstraint > 0f
		//     && snap.HandPose != null)
		float L_5 = ___fingersConstraint1;
		if ((!(((float)L_5) > ((float)(0.0f)))))
		{
			goto IL_0045;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_7;
		L_7 = InterfaceFuncInvoker0< HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* >::Invoke(1 /* Oculus.Interaction.HandPosing.HandPose Oculus.Interaction.HandPosing.ISnapData::get_HandPose() */, ISnapData_tF679483EF2786EFCAECA0D238B062543C2E988A4_il2cpp_TypeInfo_var, L_6);
		if (!L_7)
		{
			goto IL_0045;
		}
	}
	{
		// UpdateFingers(snap.HandPose, snapper.SnappingFingers(), fingersConstraint);
		RuntimeObject* L_8 = V_0;
		NullCheck(L_8);
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_9;
		L_9 = InterfaceFuncInvoker0< HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* >::Invoke(1 /* Oculus.Interaction.HandPosing.HandPose Oculus.Interaction.HandPosing.ISnapData::get_HandPose() */, ISnapData_tF679483EF2786EFCAECA0D238B062543C2E988A4_il2cpp_TypeInfo_var, L_8);
		RuntimeObject* L_10 = ___snapper0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* Oculus.Interaction.Input.HandFingerFlags Oculus.Interaction.HandPosing.ISnapper::SnappingFingers() */, ISnapper_t54B03424DDEA6B8A93A3BEEDB696378FCC8F1D84_il2cpp_TypeInfo_var, L_10);
		float L_12 = ___fingersConstraint1;
		HandGrabInteractorVisual_UpdateFingers_m23FFC73D45128D51232A4E368908E2CA7CB07B87(__this, L_9, L_11, L_12, NULL);
		// _areFingersFree = false;
		__this->____areFingersFree_7 = (bool)0;
		goto IL_004c;
	}

IL_0045:
	{
		// FreeFingers();
		bool L_13;
		L_13 = HandGrabInteractorVisual_FreeFingers_m445A770159339A4C082869BB0FC26014B963465A(__this, NULL);
	}

IL_004c:
	{
		// if (wristConstraint > 0f)
		float L_14 = ___wristConstraint2;
		if ((!(((float)L_14) > ((float)(0.0f)))))
		{
			goto IL_008d;
		}
	}
	{
		// Pose wristLocalPose = GetWristPose(snap.WorldSnapPose, snapper.WristToSnapOffset);
		RuntimeObject* L_15 = V_0;
		NullCheck(L_15);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_16;
		L_16 = InterfaceFuncInvoker0< Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 >::Invoke(2 /* UnityEngine.Pose Oculus.Interaction.HandPosing.ISnapData::get_WorldSnapPose() */, ISnapData_tF679483EF2786EFCAECA0D238B062543C2E988A4_il2cpp_TypeInfo_var, L_15);
		RuntimeObject* L_17 = ___snapper0;
		NullCheck(L_17);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_18;
		L_18 = InterfaceFuncInvoker0< Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 >::Invoke(2 /* UnityEngine.Pose Oculus.Interaction.HandPosing.ISnapper::get_WristToSnapOffset() */, ISnapper_t54B03424DDEA6B8A93A3BEEDB696378FCC8F1D84_il2cpp_TypeInfo_var, L_17);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_19;
		L_19 = HandGrabInteractorVisual_GetWristPose_m18BA82D3846ACB4691A8C289DCE3F02993681ECE(__this, L_16, L_18, NULL);
		V_1 = L_19;
		// Pose wristPose = Transformer.ToTrackingPose(wristLocalPose);
		RuntimeObject* L_20 = __this->___Transformer_9;
		NullCheck(L_20);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_21;
		L_21 = InterfaceFuncInvoker1< Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(2 /* UnityEngine.Pose Oculus.Interaction.Input.ITrackingToWorldTransformer::ToTrackingPose(UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute)) */, ITrackingToWorldTransformer_t193B383D2CCDEDD1521A0197EB476879DD657B2E_il2cpp_TypeInfo_var, L_20, (&V_1));
		V_2 = L_21;
		// _syntheticHand.LockWristPose(wristPose, wristConstraint);
		SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* L_22 = __this->____syntheticHand_6;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_23 = V_2;
		float L_24 = ___wristConstraint2;
		NullCheck(L_22);
		SyntheticHand_LockWristPose_mAC782FC91F436A63D7E0E01FDD5BE8B88F7E5BE3(L_22, L_23, L_24, 3, (bool)0, (bool)0, NULL);
		// _isWristFree = false;
		__this->____isWristFree_8 = (bool)0;
		return;
	}

IL_008d:
	{
		// FreeWrist();
		bool L_25;
		L_25 = HandGrabInteractorVisual_FreeWrist_m5B646BDD3D5C8E9112CF106D47565747780785C1(__this, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual::UpdateFingers(Oculus.Interaction.HandPosing.HandPose,Oculus.Interaction.Input.HandFingerFlags,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabInteractorVisual_UpdateFingers_m23FFC73D45128D51232A4E368908E2CA7CB07B87 (HandGrabInteractorVisual_tC7BD96F6109967EA0B7DACE15907F34E7DE61F6B* __this, HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* ___handPose0, int32_t ___grabbingFingers1, float ___strength2, const RuntimeMethod* method) 
{
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// Quaternion[] desiredRotations = handPose.JointRotations;
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_0 = ___handPose0;
		NullCheck(L_0);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_1;
		L_1 = HandPose_get_JointRotations_m67D61CC5658CC151843B59844D1E59DE839AF078(L_0, NULL);
		V_0 = L_1;
		// _syntheticHand.OverrideAllJoints(desiredRotations, strength);
		SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* L_2 = __this->____syntheticHand_6;
		float L_3 = ___strength2;
		NullCheck(L_2);
		SyntheticHand_OverrideAllJoints_m112B93989E6B93073B12D39FE25FD5361D93CC2D(L_2, (&V_0), L_3, NULL);
		// for (int fingerIndex = 0; fingerIndex < Constants.NUM_FINGERS; fingerIndex++)
		V_1 = 0;
		goto IL_004b;
	}

IL_0019:
	{
		// int fingerFlag = 1 << fingerIndex;
		int32_t L_4 = V_1;
		V_2 = ((int32_t)(1<<((int32_t)(L_4&((int32_t)31)))));
		// JointFreedom fingerFreedom = handPose.FingersFreedom[fingerIndex];
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_5 = ___handPose0;
		NullCheck(L_5);
		JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* L_6;
		L_6 = HandPose_get_FingersFreedom_mF8266A82C0115F83283119E26FAF03F3B1E53397(L_5, NULL);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (int32_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		// if (fingerFreedom == JointFreedom.Constrained
		//     && ((int)grabbingFingers & fingerFlag) != 0)
		int32_t L_10 = V_3;
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_11 = ___grabbingFingers1;
		int32_t L_12 = V_2;
		if (!((int32_t)((int32_t)L_11&L_12)))
		{
			goto IL_0034;
		}
	}
	{
		// fingerFreedom = JointFreedom.Locked;
		V_3 = 2;
	}

IL_0034:
	{
		// _syntheticHand.SetFingerFreedom((HandFinger)fingerIndex, fingerFreedom);
		SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* L_13 = __this->____syntheticHand_6;
		int32_t L_14 = V_1;
		V_4 = L_14;
		NullCheck(L_13);
		SyntheticHand_SetFingerFreedom_mAD5CA90074DAA92F5D145AF40F861187C2CFB8D8(L_13, (&V_4), (&V_3), (bool)0, NULL);
		// for (int fingerIndex = 0; fingerIndex < Constants.NUM_FINGERS; fingerIndex++)
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_004b:
	{
		// for (int fingerIndex = 0; fingerIndex < Constants.NUM_FINGERS; fingerIndex++)
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) < ((int32_t)5)))
		{
			goto IL_0019;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Pose Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual::GetWristPose(UnityEngine.Pose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 HandGrabInteractorVisual_GetWristPose_m18BA82D3846ACB4691A8C289DCE3F02993681ECE (HandGrabInteractorVisual_tC7BD96F6109967EA0B7DACE15907F34E7DE61F6B* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___gripPoint0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___offset1, const RuntimeMethod* method) 
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Pose wristOffset = offset;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___offset1;
		V_0 = L_0;
		// wristOffset.Invert();
		PoseUtils_Invert_mCA28790C8C9D9F4FE754FA31D4C796035C36ED13((&V_0), NULL);
		// gripPoint.Premultiply(wristOffset);
		PoseUtils_Premultiply_m0C6B153A3DAECFCCD4D0999DCD8C069CCBE822CD((&___gripPoint0), (&V_0), NULL);
		// return gripPoint;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = ___gripPoint0;
		return L_1;
	}
}
// System.Boolean Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual::FreeFingers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabInteractorVisual_FreeFingers_m445A770159339A4C082869BB0FC26014B963465A (HandGrabInteractorVisual_tC7BD96F6109967EA0B7DACE15907F34E7DE61F6B* __this, const RuntimeMethod* method) 
{
	{
		// if (!_areFingersFree)
		bool L_0 = __this->____areFingersFree_7;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		// _syntheticHand.FreeAllJoints();
		SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* L_1 = __this->____syntheticHand_6;
		NullCheck(L_1);
		SyntheticHand_FreeAllJoints_mEE570EF11E376D0E4487AA90EF853EE9D8FBF964(L_1, NULL);
		// _areFingersFree = true;
		__this->____areFingersFree_7 = (bool)1;
		// return true;
		return (bool)1;
	}

IL_001c:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual::FreeWrist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabInteractorVisual_FreeWrist_m5B646BDD3D5C8E9112CF106D47565747780785C1 (HandGrabInteractorVisual_tC7BD96F6109967EA0B7DACE15907F34E7DE61F6B* __this, const RuntimeMethod* method) 
{
	{
		// if (!_isWristFree)
		bool L_0 = __this->____isWristFree_8;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		// _syntheticHand.FreeWrist();
		SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* L_1 = __this->____syntheticHand_6;
		NullCheck(L_1);
		SyntheticHand_FreeWrist_m2FD78586CE1880855ABB6C02BB0D657BB154C5E6(L_1, 3, NULL);
		// _isWristFree = true;
		__this->____isWristFree_8 = (bool)1;
		// return true;
		return (bool)1;
	}

IL_001d:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual::InjectAllHandGrabInteractorVisual(System.Collections.Generic.List`1<Oculus.Interaction.HandPosing.ISnapper>,Oculus.Interaction.Input.SyntheticHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabInteractorVisual_InjectAllHandGrabInteractorVisual_m11A2348F554E49BC355701EF091DE0376DE89129 (HandGrabInteractorVisual_tC7BD96F6109967EA0B7DACE15907F34E7DE61F6B* __this, List_1_t3E48FD3D0973549A1410A423D470FEE7B0780644* ___snappers0, SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* ___syntheticHand1, const RuntimeMethod* method) 
{
	{
		// InjectSnappers(snappers);
		List_1_t3E48FD3D0973549A1410A423D470FEE7B0780644* L_0 = ___snappers0;
		HandGrabInteractorVisual_InjectSnappers_m86A714ACC72E1CFAA0FDE62007AF41FB4455C623(__this, L_0, NULL);
		// InjectSyntheticHand(syntheticHand);
		SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* L_1 = ___syntheticHand1;
		HandGrabInteractorVisual_InjectSyntheticHand_m7F26C9D33D0D8F58837B25102D6FC41F7C043F77_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual::InjectSnappers(System.Collections.Generic.List`1<Oculus.Interaction.HandPosing.ISnapper>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabInteractorVisual_InjectSnappers_m86A714ACC72E1CFAA0FDE62007AF41FB4455C623 (HandGrabInteractorVisual_tC7BD96F6109967EA0B7DACE15907F34E7DE61F6B* __this, List_1_t3E48FD3D0973549A1410A423D470FEE7B0780644* ___snappers0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converter_2_t294CE4BF5F775A119FCEE6220D8EC6A8084B01D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ConvertAll_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_mA692175C0E59B8791293D644A837531D852F29B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CInjectSnappersU3Eb__23_0_m39FC3A605CAC2CA18269CAFFB2243A95298AB5D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Converter_2_t294CE4BF5F775A119FCEE6220D8EC6A8084B01D5* G_B2_0 = NULL;
	List_1_t3E48FD3D0973549A1410A423D470FEE7B0780644* G_B2_1 = NULL;
	HandGrabInteractorVisual_tC7BD96F6109967EA0B7DACE15907F34E7DE61F6B* G_B2_2 = NULL;
	Converter_2_t294CE4BF5F775A119FCEE6220D8EC6A8084B01D5* G_B1_0 = NULL;
	List_1_t3E48FD3D0973549A1410A423D470FEE7B0780644* G_B1_1 = NULL;
	HandGrabInteractorVisual_tC7BD96F6109967EA0B7DACE15907F34E7DE61F6B* G_B1_2 = NULL;
	{
		// _snappers = snappers.ConvertAll(mono => mono as MonoBehaviour);
		List_1_t3E48FD3D0973549A1410A423D470FEE7B0780644* L_0 = ___snappers0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8_il2cpp_TypeInfo_var);
		Converter_2_t294CE4BF5F775A119FCEE6220D8EC6A8084B01D5* L_1 = ((U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8_il2cpp_TypeInfo_var))->___U3CU3E9__23_0_2;
		Converter_2_t294CE4BF5F775A119FCEE6220D8EC6A8084B01D5* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		G_B1_2 = __this;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			G_B2_2 = __this;
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8_il2cpp_TypeInfo_var);
		U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8* L_3 = ((U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Converter_2_t294CE4BF5F775A119FCEE6220D8EC6A8084B01D5* L_4 = (Converter_2_t294CE4BF5F775A119FCEE6220D8EC6A8084B01D5*)il2cpp_codegen_object_new(Converter_2_t294CE4BF5F775A119FCEE6220D8EC6A8084B01D5_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Converter_2__ctor_m9B50528B43D5DBFBBBFFA4478C8A06ED286A4286(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CInjectSnappersU3Eb__23_0_m39FC3A605CAC2CA18269CAFFB2243A95298AB5D6_RuntimeMethod_var), NULL);
		Converter_2_t294CE4BF5F775A119FCEE6220D8EC6A8084B01D5* L_5 = L_4;
		((U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8_il2cpp_TypeInfo_var))->___U3CU3E9__23_0_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8_il2cpp_TypeInfo_var))->___U3CU3E9__23_0_2), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0021:
	{
		NullCheck(G_B2_1);
		List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* L_6;
		L_6 = List_1_ConvertAll_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_mA692175C0E59B8791293D644A837531D852F29B6(G_B2_1, G_B2_0, List_1_ConvertAll_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_mA692175C0E59B8791293D644A837531D852F29B6_RuntimeMethod_var);
		NullCheck(G_B2_2);
		G_B2_2->____snappers_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_2->____snappers_4), (void*)L_6);
		// Snappers = snappers;
		List_1_t3E48FD3D0973549A1410A423D470FEE7B0780644* L_7 = ___snappers0;
		__this->___Snappers_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Snappers_5), (void*)L_7);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual::InjectSyntheticHand(Oculus.Interaction.Input.SyntheticHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabInteractorVisual_InjectSyntheticHand_m7F26C9D33D0D8F58837B25102D6FC41F7C043F77 (HandGrabInteractorVisual_tC7BD96F6109967EA0B7DACE15907F34E7DE61F6B* __this, SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* ___syntheticHand0, const RuntimeMethod* method) 
{
	{
		// _syntheticHand = syntheticHand;
		SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* L_0 = ___syntheticHand0;
		__this->____syntheticHand_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____syntheticHand_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabInteractorVisual__ctor_m90C05E6FD2AB220F607F5DD3E2B33E9E3B068136 (HandGrabInteractorVisual_tC7BD96F6109967EA0B7DACE15907F34E7DE61F6B* __this, const RuntimeMethod* method) 
{
	{
		// private bool _areFingersFree = true;
		__this->____areFingersFree_7 = (bool)1;
		// private bool _isWristFree = true;
		__this->____isWristFree_8 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2C6B13050564530FFF942ED2592EF3BD9D8EE598 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8* L_0 = (U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8*)il2cpp_codegen_object_new(U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m90C834B1D8DD913F005A3C326296284DF151C4C4(L_0, NULL);
		((U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m90C834B1D8DD913F005A3C326296284DF151C4C4 (U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Oculus.Interaction.HandPosing.ISnapper Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual/<>c::<Awake>b__8_0(UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CAwakeU3Eb__8_0_mB7A2DE9A7C49655EDDCB0B7B6EE2F6275320D252 (U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8* __this, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___mono0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISnapper_t54B03424DDEA6B8A93A3BEEDB696378FCC8F1D84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Snappers = _snappers.ConvertAll(mono => mono as ISnapper);
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = ___mono0;
		return ((RuntimeObject*)IsInst((RuntimeObject*)L_0, ISnapper_t54B03424DDEA6B8A93A3BEEDB696378FCC8F1D84_il2cpp_TypeInfo_var));
	}
}
// UnityEngine.MonoBehaviour Oculus.Interaction.HandPosing.Visuals.HandGrabInteractorVisual/<>c::<InjectSnappers>b__23_0(Oculus.Interaction.HandPosing.ISnapper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* U3CU3Ec_U3CInjectSnappersU3Eb__23_0_m39FC3A605CAC2CA18269CAFFB2243A95298AB5D6 (U3CU3Ec_t11F87016E22CC0DE2847F0052700EDE4EB3A1CB8* __this, RuntimeObject* ___mono0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _snappers = snappers.ConvertAll(mono => mono as MonoBehaviour);
		RuntimeObject* L_0 = ___mono0;
		return ((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var));
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
// UnityEngine.Quaternion Oculus.Interaction.HandPosing.Visuals.HandJointMap::get_RotationOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 HandJointMap_get_RotationOffset_m3F54EEE6340792BF7F87C7E0BCF72F629FF6337C (HandJointMap_t7BF884CEE017C3A9708D2E30BEEA7184CBAA6B12* __this, const RuntimeMethod* method) 
{
	{
		// return Quaternion.Euler(rotationOffset);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___rotationOffset_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.Quaternion Oculus.Interaction.HandPosing.Visuals.HandJointMap::get_TrackedRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 HandJointMap_get_TrackedRotation_m3DD2FC11CF2041258B1C612934DD9F61F4B964A2 (HandJointMap_t7BF884CEE017C3A9708D2E30BEEA7184CBAA6B12* __this, const RuntimeMethod* method) 
{
	{
		// return Quaternion.Inverse(RotationOffset) * transform.localRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = HandJointMap_get_RotationOffset_m3F54EEE6340792BF7F87C7E0BCF72F629FF6337C(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___transform_1;
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_2, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_1, L_3, NULL);
		return L_4;
	}
}
// System.Void Oculus.Interaction.HandPosing.Visuals.HandJointMap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandJointMap__ctor_m1D4679CE06D2BCDBE635E7F9893EA655E8E4EFF4 (HandJointMap_t7BF884CEE017C3A9708D2E30BEEA7184CBAA6B12* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Oculus.Interaction.HandPosing.Visuals.JointCollection::.ctor(System.Collections.Generic.List`1<Oculus.Interaction.HandPosing.Visuals.HandJointMap>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointCollection__ctor_m3F2EB05BEC599312AACD9140A54CC183101DB21E (JointCollection_t5BE41E43E94A9070AEF4E7BFA23C3C82D5EF3CAA* __this, List_1_t1761C86DC042A8F64FB55B6F1F872C07D735D0A1* ___joints0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_FindIndex_m26868EB42FA10D2E8B9FC435BBEE15862FD288B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t91687CB2B83ADB88C43DFAB4EEB94032829B503A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_mC298EECC3154B8D7182DFCCF9A841E6B7AA522D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_tB5698602B356E87D981BF38982C0DE6CB4A55136_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass2_0_tB5698602B356E87D981BF38982C0DE6CB4A55136* V_1 = NULL;
	{
		// private int[] _jointIndices = new int[FingersMetadata.HAND_JOINT_IDS.Length];
		il2cpp_codegen_runtime_class_init_inline(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587* L_0 = ((FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_StaticFields*)il2cpp_codegen_static_fields_for(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var))->___HAND_JOINT_IDS_0;
		NullCheck(L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		__this->____jointIndices_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jointIndices_0), (void*)L_1);
		// public JointCollection(List<HandJointMap> joints)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _jointMaps = joints;
		List_1_t1761C86DC042A8F64FB55B6F1F872C07D735D0A1* L_2 = ___joints0;
		__this->____jointMaps_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jointMaps_1), (void*)L_2);
		// for (int i = 0; i < FingersMetadata.HAND_JOINT_IDS.Length; i++)
		V_0 = 0;
		goto IL_0054;
	}

IL_0023:
	{
		U3CU3Ec__DisplayClass2_0_tB5698602B356E87D981BF38982C0DE6CB4A55136* L_3 = (U3CU3Ec__DisplayClass2_0_tB5698602B356E87D981BF38982C0DE6CB4A55136*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_tB5698602B356E87D981BF38982C0DE6CB4A55136_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CU3Ec__DisplayClass2_0__ctor_m5755470DDAB44754BD22D5D5EF9384CB1748AAE6(L_3, NULL);
		V_1 = L_3;
		// HandJointId boneId = FingersMetadata.HAND_JOINT_IDS[i];
		U3CU3Ec__DisplayClass2_0_tB5698602B356E87D981BF38982C0DE6CB4A55136* L_4 = V_1;
		il2cpp_codegen_runtime_class_init_inline(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587* L_5 = ((FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_StaticFields*)il2cpp_codegen_static_fields_for(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var))->___HAND_JOINT_IDS_0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (int32_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		L_4->___boneId_0 = L_8;
		// _jointIndices[i] = joints.FindIndex(bone => bone.id == boneId);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____jointIndices_0;
		int32_t L_10 = V_0;
		List_1_t1761C86DC042A8F64FB55B6F1F872C07D735D0A1* L_11 = ___joints0;
		U3CU3Ec__DisplayClass2_0_tB5698602B356E87D981BF38982C0DE6CB4A55136* L_12 = V_1;
		Predicate_1_t91687CB2B83ADB88C43DFAB4EEB94032829B503A* L_13 = (Predicate_1_t91687CB2B83ADB88C43DFAB4EEB94032829B503A*)il2cpp_codegen_object_new(Predicate_1_t91687CB2B83ADB88C43DFAB4EEB94032829B503A_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Predicate_1__ctor_m6BE658BFF1257EBB7D475DDEC4E0ECF758661FD3(L_13, L_12, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_mC298EECC3154B8D7182DFCCF9A841E6B7AA522D7_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		int32_t L_14;
		L_14 = List_1_FindIndex_m26868EB42FA10D2E8B9FC435BBEE15862FD288B6(L_11, L_13, List_1_FindIndex_m26868EB42FA10D2E8B9FC435BBEE15862FD288B6_RuntimeMethod_var);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (int32_t)L_14);
		// for (int i = 0; i < FingersMetadata.HAND_JOINT_IDS.Length; i++)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0054:
	{
		// for (int i = 0; i < FingersMetadata.HAND_JOINT_IDS.Length; i++)
		int32_t L_16 = V_0;
		il2cpp_codegen_runtime_class_init_inline(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587* L_17 = ((FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_StaticFields*)il2cpp_codegen_static_fields_for(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var))->___HAND_JOINT_IDS_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0023;
		}
	}
	{
		// }
		return;
	}
}
// Oculus.Interaction.HandPosing.Visuals.HandJointMap Oculus.Interaction.HandPosing.Visuals.JointCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandJointMap_t7BF884CEE017C3A9708D2E30BEEA7184CBAA6B12* JointCollection_get_Item_m71C90D76C75B852EA69C007AB837CD2B07F562DB (JointCollection_t5BE41E43E94A9070AEF4E7BFA23C3C82D5EF3CAA* __this, int32_t ___jointIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m89FD74624095A867D0AA0D96610D7707B2EEAC4D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int joint = _jointIndices[jointIndex];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____jointIndices_0;
		int32_t L_1 = ___jointIndex0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// if (joint >= 0)
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		// return _jointMaps[joint];
		List_1_t1761C86DC042A8F64FB55B6F1F872C07D735D0A1* L_5 = __this->____jointMaps_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		HandJointMap_t7BF884CEE017C3A9708D2E30BEEA7184CBAA6B12* L_7;
		L_7 = List_1_get_Item_m89FD74624095A867D0AA0D96610D7707B2EEAC4D(L_5, L_6, List_1_get_Item_m89FD74624095A867D0AA0D96610D7707B2EEAC4D_RuntimeMethod_var);
		return L_7;
	}

IL_001a:
	{
		// return null;
		return (HandJointMap_t7BF884CEE017C3A9708D2E30BEEA7184CBAA6B12*)NULL;
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
// System.Void Oculus.Interaction.HandPosing.Visuals.JointCollection/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m5755470DDAB44754BD22D5D5EF9384CB1748AAE6 (U3CU3Ec__DisplayClass2_0_tB5698602B356E87D981BF38982C0DE6CB4A55136* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Oculus.Interaction.HandPosing.Visuals.JointCollection/<>c__DisplayClass2_0::<.ctor>b__0(Oculus.Interaction.HandPosing.Visuals.HandJointMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_mC298EECC3154B8D7182DFCCF9A841E6B7AA522D7 (U3CU3Ec__DisplayClass2_0_tB5698602B356E87D981BF38982C0DE6CB4A55136* __this, HandJointMap_t7BF884CEE017C3A9708D2E30BEEA7184CBAA6B12* ___bone0, const RuntimeMethod* method) 
{
	{
		// _jointIndices[i] = joints.FindIndex(bone => bone.id == boneId);
		HandJointMap_t7BF884CEE017C3A9708D2E30BEEA7184CBAA6B12* L_0 = ___bone0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___id_0;
		int32_t L_2 = __this->___boneId_0;
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
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
// System.Collections.Generic.List`1<Oculus.Interaction.HandPosing.Visuals.HandJointMap> Oculus.Interaction.HandPosing.Visuals.HandPuppet::get_JointMaps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t1761C86DC042A8F64FB55B6F1F872C07D735D0A1* HandPuppet_get_JointMaps_mCDAE4776BDC1FD21AA8D2A4073778414FECE7F70 (HandPuppet_tF32101BA76C9B7D199C764ED4E0D8E31C00ECD70* __this, const RuntimeMethod* method) 
{
	{
		// return _jointMaps;
		List_1_t1761C86DC042A8F64FB55B6F1F872C07D735D0A1* L_0 = __this->____jointMaps_4;
		return L_0;
	}
}
// System.Single Oculus.Interaction.HandPosing.Visuals.HandPuppet::get_Scale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandPuppet_get_Scale_mBEA554E7F4A20840C4B0CFC68A4F61A97652B22A (HandPuppet_tF32101BA76C9B7D199C764ED4E0D8E31C00ECD70* __this, const RuntimeMethod* method) 
{
	{
		// return this.transform.localScale.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_0, NULL);
		float L_2 = L_1.___x_2;
		return L_2;
	}
}
// System.Void Oculus.Interaction.HandPosing.Visuals.HandPuppet::set_Scale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPuppet_set_Scale_mFC2CD89A6DFF8FE951B53335261FE8EACF8F1D95 (HandPuppet_tF32101BA76C9B7D199C764ED4E0D8E31C00ECD70* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// this.transform.localScale = Vector3.one * value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		float L_2 = ___value0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, L_2, NULL);
		NullCheck(L_0);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_0, L_3, NULL);
		// }
		return;
	}
}
// Oculus.Interaction.HandPosing.Visuals.JointCollection Oculus.Interaction.HandPosing.Visuals.HandPuppet::get_JointsCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JointCollection_t5BE41E43E94A9070AEF4E7BFA23C3C82D5EF3CAA* HandPuppet_get_JointsCache_m2FB6F991F95164D215EB430E10D949EA07228CA9 (HandPuppet_tF32101BA76C9B7D199C764ED4E0D8E31C00ECD70* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JointCollection_t5BE41E43E94A9070AEF4E7BFA23C3C82D5EF3CAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_jointsCache == null)
		JointCollection_t5BE41E43E94A9070AEF4E7BFA23C3C82D5EF3CAA* L_0 = __this->____jointsCache_5;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// _jointsCache = new JointCollection(_jointMaps);
		List_1_t1761C86DC042A8F64FB55B6F1F872C07D735D0A1* L_1 = __this->____jointMaps_4;
		JointCollection_t5BE41E43E94A9070AEF4E7BFA23C3C82D5EF3CAA* L_2 = (JointCollection_t5BE41E43E94A9070AEF4E7BFA23C3C82D5EF3CAA*)il2cpp_codegen_object_new(JointCollection_t5BE41E43E94A9070AEF4E7BFA23C3C82D5EF3CAA_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		JointCollection__ctor_m3F2EB05BEC599312AACD9140A54CC183101DB21E(L_2, L_1, NULL);
		__this->____jointsCache_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jointsCache_5), (void*)L_2);
	}

IL_0019:
	{
		// return _jointsCache;
		JointCollection_t5BE41E43E94A9070AEF4E7BFA23C3C82D5EF3CAA* L_3 = __this->____jointsCache_5;
		return L_3;
	}
}
// System.Void Oculus.Interaction.HandPosing.Visuals.HandPuppet::SetJointRotations(UnityEngine.Quaternion[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPuppet_SetJointRotations_m447EBB853EB2A6797911032D20FEB5E300263882 (HandPuppet_tF32101BA76C9B7D199C764ED4E0D8E31C00ECD70* __this, QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7** ___jointRotations0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HandJointMap_t7BF884CEE017C3A9708D2E30BEEA7184CBAA6B12* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// for (int i = 0; i < FingersMetadata.HAND_JOINT_IDS.Length; ++i)
		V_0 = 0;
		goto IL_003a;
	}

IL_0004:
	{
		// HandJointMap jointMap = JointsCache[i];
		JointCollection_t5BE41E43E94A9070AEF4E7BFA23C3C82D5EF3CAA* L_0;
		L_0 = HandPuppet_get_JointsCache_m2FB6F991F95164D215EB430E10D949EA07228CA9(__this, NULL);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		HandJointMap_t7BF884CEE017C3A9708D2E30BEEA7184CBAA6B12* L_2;
		L_2 = JointCollection_get_Item_m71C90D76C75B852EA69C007AB837CD2B07F562DB(L_0, L_1, NULL);
		V_1 = L_2;
		// if (jointMap != null)
		HandJointMap_t7BF884CEE017C3A9708D2E30BEEA7184CBAA6B12* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// Transform jointTransform = jointMap.transform;
		HandJointMap_t7BF884CEE017C3A9708D2E30BEEA7184CBAA6B12* L_4 = V_1;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = L_4->___transform_1;
		V_2 = L_5;
		// Quaternion targetRot = jointMap.RotationOffset * jointRotations[i];
		HandJointMap_t7BF884CEE017C3A9708D2E30BEEA7184CBAA6B12* L_6 = V_1;
		NullCheck(L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = HandJointMap_get_RotationOffset_m3F54EEE6340792BF7F87C7E0BCF72F629FF6337C(L_6, NULL);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7** L_8 = ___jointRotations0;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_9 = *((QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7**)L_8);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_7, L_12, NULL);
		V_3 = L_13;
		// jointTransform.localRotation = targetRot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = V_3;
		NullCheck(L_14);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_14, L_15, NULL);
	}

IL_0036:
	{
		// for (int i = 0; i < FingersMetadata.HAND_JOINT_IDS.Length; ++i)
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_003a:
	{
		// for (int i = 0; i < FingersMetadata.HAND_JOINT_IDS.Length; ++i)
		int32_t L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587* L_18 = ((FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_StaticFields*)il2cpp_codegen_static_fields_for(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var))->___HAND_JOINT_IDS_0;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.Visuals.HandPuppet::SetRootPose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPuppet_SetRootPose_m0A17926BA47B9268010FDC3279FAD47ECAEDA021 (HandPuppet_tF32101BA76C9B7D199C764ED4E0D8E31C00ECD70* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___rootPose0, const RuntimeMethod* method) 
{
	{
		// this.transform.SetPose(rootPose, Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_1 = ___rootPose0;
		PoseUtils_SetPose_m6C9BE185A66754389A49FD711DEE68A07DE059BB(L_0, L_1, 0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.Visuals.HandPuppet::CopyCachedJoints(Oculus.Interaction.HandPosing.HandPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPuppet_CopyCachedJoints_m3F0FE9839AECE6592799B8179B4A4D1BDDA41310 (HandPuppet_tF32101BA76C9B7D199C764ED4E0D8E31C00ECD70* __this, HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8** ___result0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HandJointMap_t7BF884CEE017C3A9708D2E30BEEA7184CBAA6B12* V_1 = NULL;
	{
		// for (int i = 0; i < FingersMetadata.HAND_JOINT_IDS.Length; ++i)
		V_0 = 0;
		goto IL_002b;
	}

IL_0004:
	{
		// HandJointMap jointMap = JointsCache[i];
		JointCollection_t5BE41E43E94A9070AEF4E7BFA23C3C82D5EF3CAA* L_0;
		L_0 = HandPuppet_get_JointsCache_m2FB6F991F95164D215EB430E10D949EA07228CA9(__this, NULL);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		HandJointMap_t7BF884CEE017C3A9708D2E30BEEA7184CBAA6B12* L_2;
		L_2 = JointCollection_get_Item_m71C90D76C75B852EA69C007AB837CD2B07F562DB(L_0, L_1, NULL);
		V_1 = L_2;
		// if (jointMap != null)
		HandJointMap_t7BF884CEE017C3A9708D2E30BEEA7184CBAA6B12* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// result.JointRotations[i] = jointMap.TrackedRotation;
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8** L_4 = ___result0;
		HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* L_5 = *((HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8**)L_4);
		NullCheck(L_5);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_6;
		L_6 = HandPose_get_JointRotations_m67D61CC5658CC151843B59844D1E59DE839AF078(L_5, NULL);
		int32_t L_7 = V_0;
		HandJointMap_t7BF884CEE017C3A9708D2E30BEEA7184CBAA6B12* L_8 = V_1;
		NullCheck(L_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = HandJointMap_get_TrackedRotation_m3DD2FC11CF2041258B1C612934DD9F61F4B964A2(L_8, NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974)L_9);
	}

IL_0027:
	{
		// for (int i = 0; i < FingersMetadata.HAND_JOINT_IDS.Length; ++i)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002b:
	{
		// for (int i = 0; i < FingersMetadata.HAND_JOINT_IDS.Length; ++i)
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587* L_12 = ((FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_StaticFields*)il2cpp_codegen_static_fields_for(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var))->___HAND_JOINT_IDS_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.Visuals.HandPuppet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPuppet__ctor_m652FAD349AEA7EE83172299EF0D5FB64EAC96C23 (HandPuppet_tF32101BA76C9B7D199C764ED4E0D8E31C00ECD70* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0B7B3208E0D8AA0ED774EBCF28503122FF6B22B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1761C86DC042A8F64FB55B6F1F872C07D735D0A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<HandJointMap> _jointMaps = new List<HandJointMap>(FingersMetadata.HAND_JOINT_IDS.Length);
		il2cpp_codegen_runtime_class_init_inline(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587* L_0 = ((FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_StaticFields*)il2cpp_codegen_static_fields_for(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var))->___HAND_JOINT_IDS_0;
		NullCheck(L_0);
		List_1_t1761C86DC042A8F64FB55B6F1F872C07D735D0A1* L_1 = (List_1_t1761C86DC042A8F64FB55B6F1F872C07D735D0A1*)il2cpp_codegen_object_new(List_1_t1761C86DC042A8F64FB55B6F1F872C07D735D0A1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m0B7B3208E0D8AA0ED774EBCF28503122FF6B22B9(L_1, ((int32_t)(((RuntimeArray*)L_0)->max_length)), List_1__ctor_m0B7B3208E0D8AA0ED774EBCF28503122FF6B22B9_RuntimeMethod_var);
		__this->____jointMaps_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jointMaps_4), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Object Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurfaceData::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BoxSurfaceData_Clone_m0347CF1D71EC2B6F071B458B250FFE879B644848 (BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BoxSurfaceData clone = new BoxSurfaceData();
		BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* L_0 = (BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28*)il2cpp_codegen_object_new(BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BoxSurfaceData__ctor_m52BC545F4F428404CD567B47808C118A25C15AA9(L_0, NULL);
		// clone.widthOffset = this.widthOffset;
		BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* L_1 = L_0;
		float L_2 = __this->___widthOffset_0;
		NullCheck(L_1);
		L_1->___widthOffset_0 = L_2;
		// clone.snapOffset = this.snapOffset;
		BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* L_3 = L_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = __this->___snapOffset_1;
		NullCheck(L_3);
		L_3->___snapOffset_1 = L_4;
		// clone.size = this.size;
		BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* L_5 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___size_2;
		NullCheck(L_5);
		L_5->___size_2 = L_6;
		// clone.eulerAngles = this.eulerAngles;
		BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* L_7 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___eulerAngles_3;
		NullCheck(L_7);
		L_7->___eulerAngles_3 = L_8;
		// return clone;
		return L_7;
	}
}
// Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurfaceData Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurfaceData::Mirror()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* BoxSurfaceData_Mirror_m3CE4900CB86FBBCFA2AA44BFE99975849B0CB9FD (BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* V_0 = NULL;
	{
		// BoxSurfaceData mirror = Clone() as BoxSurfaceData;
		RuntimeObject* L_0;
		L_0 = BoxSurfaceData_Clone_m0347CF1D71EC2B6F071B458B250FFE879B644848(__this, NULL);
		V_0 = ((BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28*)IsInstClass((RuntimeObject*)L_0, BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28_il2cpp_TypeInfo_var));
		// mirror.snapOffset = new Vector4(
		//     -mirror.snapOffset.y, -mirror.snapOffset.x,
		//     -mirror.snapOffset.w, -mirror.snapOffset.z);
		BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* L_1 = V_0;
		BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* L_2 = V_0;
		NullCheck(L_2);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_3 = (&L_2->___snapOffset_1);
		float L_4 = L_3->___y_2;
		BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* L_5 = V_0;
		NullCheck(L_5);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_6 = (&L_5->___snapOffset_1);
		float L_7 = L_6->___x_1;
		BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* L_8 = V_0;
		NullCheck(L_8);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_9 = (&L_8->___snapOffset_1);
		float L_10 = L_9->___w_4;
		BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* L_11 = V_0;
		NullCheck(L_11);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_12 = (&L_11->___snapOffset_1);
		float L_13 = L_12->___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_14), ((-L_4)), ((-L_7)), ((-L_10)), ((-L_13)), /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->___snapOffset_1 = L_14;
		// return mirror;
		BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* L_15 = V_0;
		return L_15;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurfaceData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxSurfaceData__ctor_m52BC545F4F428404CD567B47808C118A25C15AA9 (BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* __this, const RuntimeMethod* method) 
{
	{
		// public float widthOffset = 0.5f;
		__this->___widthOffset_0 = (0.5f);
		// public Vector3 size = new Vector3(0.1f, 0f, 0.1f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.100000001f), (0.0f), (0.100000001f), /*hidden argument*/NULL);
		__this->___size_2 = L_0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurfaceData Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* BoxSurface_get_Data_mB8871B6463B0ADA6EFD88C127C3A40F89ACE72C1 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, const RuntimeMethod* method) 
{
	{
		// return _data;
		BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* L_0 = __this->____data_4;
		return L_0;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::set_Data(Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurfaceData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxSurface_set_Data_m9FDF515CE7A5CCB7CC2331C4F26D285A349B9631 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* ___value0, const RuntimeMethod* method) 
{
	{
		// _data = value;
		BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* L_0 = ___value0;
		__this->____data_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_4), (void*)L_0);
		// }
		return;
	}
}
// UnityEngine.Transform Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::get_RelativeTo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* BoxSurface_get_RelativeTo_m68823C05FA1E3A26DAEEFCC6A586C0EF17F1CD81 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, const RuntimeMethod* method) 
{
	{
		// get => _relativeTo;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____relativeTo_5;
		return L_0;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::set_RelativeTo(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxSurface_set_RelativeTo_m64BB5E3AF1C555B4E532891FEFB7868730BCBE25 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => _relativeTo = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->____relativeTo_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____relativeTo_5), (void*)L_0);
		return;
	}
}
// UnityEngine.Transform Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::get_GripPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* BoxSurface_get_GripPoint_m8FB2DB8D71AB2B5EA2FB6AB6A6E836D874526155 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, const RuntimeMethod* method) 
{
	{
		// get => _gripPoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____gripPoint_6;
		return L_0;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::set_GripPoint(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxSurface_set_GripPoint_m3F6BB85F344B0F7555F81711D51A84E4896C7F53 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => _gripPoint = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->____gripPoint_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gripPoint_6), (void*)L_0);
		return;
	}
}
// System.Single Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::get_WidthOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BoxSurface_get_WidthOffset_mEE4C239A342B4CFA4C97849690DB5396279BF358 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, const RuntimeMethod* method) 
{
	{
		// return _data.widthOffset;
		BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* L_0 = __this->____data_4;
		NullCheck(L_0);
		float L_1 = L_0->___widthOffset_0;
		return L_1;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::set_WidthOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxSurface_set_WidthOffset_mD66C90B0EF023C6DAE1FB4E05FBF963B5F468862 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// _data.widthOffset = value;
		BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* L_0 = __this->____data_4;
		float L_1 = ___value0;
		NullCheck(L_0);
		L_0->___widthOffset_0 = L_1;
		// }
		return;
	}
}
// UnityEngine.Vector4 Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::get_SnapOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 BoxSurface_get_SnapOffset_m4C1BFC078BA32B3E9A47BD52B3CD3F3C72D31B83 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, const RuntimeMethod* method) 
{
	{
		// return _data.snapOffset;
		BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* L_0 = __this->____data_4;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = L_0->___snapOffset_1;
		return L_1;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::set_SnapOffset(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxSurface_set_SnapOffset_m7DFBA18428445664E4FCD771F2D69B5DBA429356 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value0, const RuntimeMethod* method) 
{
	{
		// _data.snapOffset = value;
		BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* L_0 = __this->____data_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___value0;
		NullCheck(L_0);
		L_0->___snapOffset_1 = L_1;
		// }
		return;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoxSurface_get_Size_mB5471FD6C4230D3CAB4EE37812A7E0359C4533D5 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, const RuntimeMethod* method) 
{
	{
		// return _data.size;
		BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* L_0 = __this->____data_4;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0->___size_2;
		return L_1;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::set_Size(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxSurface_set_Size_mD1524574E90FA11343B4C9996DBB9C6E7AEA3404 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// _data.size = value;
		BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* L_0 = __this->____data_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___value0;
		NullCheck(L_0);
		L_0->___size_2 = L_1;
		// }
		return;
	}
}
// UnityEngine.Quaternion Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 BoxSurface_get_Rotation_mE44EF9561F7DA6A8FDCBCDF1B7C5D40812256E33 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, const RuntimeMethod* method) 
{
	{
		// return this.RelativeTo.rotation * Quaternion.Euler(_data.eulerAngles);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = BoxSurface_get_RelativeTo_m68823C05FA1E3A26DAEEFCC6A586C0EF17F1CD81_inline(__this, NULL);
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* L_2 = __this->____data_4;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = L_2->___eulerAngles_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_1, L_4, NULL);
		return L_5;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::set_Rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxSurface_set_Rotation_mA4307E393F1AD3D399F962E028672E0D27162BA9 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _data.eulerAngles = (Quaternion.Inverse(this.RelativeTo.rotation) * value).eulerAngles;
		BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* L_0 = __this->____data_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = BoxSurface_get_RelativeTo_m68823C05FA1E3A26DAEEFCC6A586C0EF17F1CD81_inline(__this, NULL);
		NullCheck(L_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_1, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_2, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___value0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_3, L_4, NULL);
		V_0 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_0), NULL);
		NullCheck(L_0);
		L_0->___eulerAngles_3 = L_6;
		// }
		return;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoxSurface_get_Direction_mF82BF328A59977F84E19CEBFF705630C0A06FAF3 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, const RuntimeMethod* method) 
{
	{
		// return Rotation * Vector3.forward;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = BoxSurface_get_Rotation_mE44EF9561F7DA6A8FDCBCDF1B7C5D40812256E33(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxSurface_Reset_mC78595C6270F1A5454712C575226FCC9C6550997 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisHandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C_mF3D3F1BBB511A0FECDD90D56B98D820B1085DCA2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* V_0 = NULL;
	{
		// _gripPoint = this.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->____gripPoint_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gripPoint_6), (void*)L_0);
		// if (this.TryGetComponent(out HandGrabPoint grabPoint))
		bool L_1;
		L_1 = Component_TryGetComponent_TisHandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C_mF3D3F1BBB511A0FECDD90D56B98D820B1085DCA2(__this, (&V_0), Component_TryGetComponent_TisHandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C_mF3D3F1BBB511A0FECDD90D56B98D820B1085DCA2_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// _relativeTo = grabPoint.RelativeTo;
		HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* L_2 = V_0;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = HandGrabPoint_get_RelativeTo_mE6D33E23708CD8E671E965978C4488CCA7B68679_inline(L_2, NULL);
		__this->____relativeTo_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____relativeTo_5), (void*)L_3);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxSurface_Start_m9E2DCBEBA12FE6281AD9FB55D218411AD5F0518D (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// UnityEngine.Pose Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::MirrorPose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BoxSurface_MirrorPose_m1D1BE8E6B3098C2155ED1977244A82F2BEC195BC (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 normal = Quaternion.Inverse(this.RelativeTo.rotation) * Direction;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = BoxSurface_get_RelativeTo_m68823C05FA1E3A26DAEEFCC6A586C0EF17F1CD81_inline(__this, NULL);
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = BoxSurface_get_Direction_mF82BF328A59977F84E19CEBFF705630C0A06FAF3(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_2, L_3, NULL);
		V_0 = L_4;
		// Vector3 tangent = Quaternion.Inverse(this.RelativeTo.rotation) * (Rotation * Vector3.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = BoxSurface_get_RelativeTo_m68823C05FA1E3A26DAEEFCC6A586C0EF17F1CD81_inline(__this, NULL);
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = BoxSurface_get_Rotation_mE44EF9561F7DA6A8FDCBCDF1B7C5D40812256E33(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_8, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_7, L_10, NULL);
		V_1 = L_11;
		// return pose.MirrorPoseRotation(normal, tangent);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_12 = ___pose0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_15;
		L_15 = PoseUtils_MirrorPoseRotation_m75D90FFDF911D1B55C9B272F1E979172CA07F985(L_12, L_13, L_14, NULL);
		return L_15;
	}
}
// Oculus.Interaction.HandPosing.SnapSurfaces.ISnapSurface Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::CreateMirroredSurface(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BoxSurface_CreateMirroredSurface_m83EE00B923A71F05850ECDFC7286BDC2982709BD (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977_m913CAF39D0BEF03A8270DDA1494E349BF897E126_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BoxSurface surface = gameObject.AddComponent<BoxSurface>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___gameObject0;
		NullCheck(L_0);
		BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* L_1;
		L_1 = GameObject_AddComponent_TisBoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977_m913CAF39D0BEF03A8270DDA1494E349BF897E126(L_0, GameObject_AddComponent_TisBoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977_m913CAF39D0BEF03A8270DDA1494E349BF897E126_RuntimeMethod_var);
		// surface.Data = _data.Mirror();
		BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* L_2 = L_1;
		BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* L_3 = __this->____data_4;
		NullCheck(L_3);
		BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* L_4;
		L_4 = BoxSurfaceData_Mirror_m3CE4900CB86FBBCFA2AA44BFE99975849B0CB9FD(L_3, NULL);
		NullCheck(L_2);
		BoxSurface_set_Data_m9FDF515CE7A5CCB7CC2331C4F26D285A349B9631_inline(L_2, L_4, NULL);
		// return surface;
		return L_2;
	}
}
// Oculus.Interaction.HandPosing.SnapSurfaces.ISnapSurface Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::CreateDuplicatedSurface(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BoxSurface_CreateDuplicatedSurface_mA31C46F09D1F824C32FFC69C7D885E9D13F1BBE5 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977_m913CAF39D0BEF03A8270DDA1494E349BF897E126_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BoxSurface surface = gameObject.AddComponent<BoxSurface>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___gameObject0;
		NullCheck(L_0);
		BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* L_1;
		L_1 = GameObject_AddComponent_TisBoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977_m913CAF39D0BEF03A8270DDA1494E349BF897E126(L_0, GameObject_AddComponent_TisBoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977_m913CAF39D0BEF03A8270DDA1494E349BF897E126_RuntimeMethod_var);
		// surface.Data = _data;
		BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* L_2 = L_1;
		BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* L_3 = __this->____data_4;
		NullCheck(L_2);
		BoxSurface_set_Data_m9FDF515CE7A5CCB7CC2331C4F26D285A349B9631_inline(L_2, L_3, NULL);
		// return surface;
		return L_2;
	}
}
// System.Single Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::CalculateBestPoseAtSurface(UnityEngine.Pose&,UnityEngine.Pose&,UnityEngine.Pose&,Oculus.Interaction.HandPosing.PoseMeasureParameters&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BoxSurface_CalculateBestPoseAtSurface_m02AD52CA19D1CB295436ECB013C751156FB456F2 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___targetPose0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___reference1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___bestPose2, PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* ___scoringModifier3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoxSurface_MinimalRotationPoseAtSurface_mA1E20D1B37A8247F4860A81FE4AC9057827FBA21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoxSurface_MinimalTranslationPoseAtSurface_mD7608A89BCBBE0755F5791DB997375CF41AA2C5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SnapSurfaceHelper.CalculateBestPoseAtSurface(targetPose, reference, out bestPose,
		//     scoringModifier, MinimalTranslationPoseAtSurface, MinimalRotationPoseAtSurface);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___targetPose0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_1 = ___reference1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___bestPose2;
		PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* L_3 = ___scoringModifier3;
		PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9* L_4 = (PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9*)il2cpp_codegen_object_new(PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		PoseCalculator__ctor_m8A64193C82848D172536F690815D51139A1A7019(L_4, __this, (intptr_t)((void*)BoxSurface_MinimalTranslationPoseAtSurface_mD7608A89BCBBE0755F5791DB997375CF41AA2C5D_RuntimeMethod_var), NULL);
		PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9* L_5 = (PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9*)il2cpp_codegen_object_new(PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		PoseCalculator__ctor_m8A64193C82848D172536F690815D51139A1A7019(L_5, __this, (intptr_t)((void*)BoxSurface_MinimalRotationPoseAtSurface_mA1E20D1B37A8247F4860A81FE4AC9057827FBA21_RuntimeMethod_var), NULL);
		float L_6;
		L_6 = SnapSurfaceHelper_CalculateBestPoseAtSurface_mBCF5860B0EED51F07471540A2E9DC48298067EFE(L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::CalculateCorners(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxSurface_CalculateCorners_m6C5C6ECDEAD93A44CDAB93B740109BF7A8A5D83E (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___bottomLeft0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___bottomRight1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___topLeft2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___topRight3, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 rightRot = Rotation * Vector3.right;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = BoxSurface_get_Rotation_mE44EF9561F7DA6A8FDCBCDF1B7C5D40812256E33(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_0, L_1, NULL);
		V_0 = L_2;
		// bottomLeft = GripPoint.position - rightRot * _data.size.x * (1f - _data.widthOffset);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___bottomLeft0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = BoxSurface_get_GripPoint_m8FB2DB8D71AB2B5EA2FB6AB6A6E836D874526155_inline(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* L_7 = __this->____data_4;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (&L_7->___size_2);
		float L_9 = L_8->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_6, L_9, NULL);
		BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* L_11 = __this->____data_4;
		NullCheck(L_11);
		float L_12 = L_11->___widthOffset_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_10, ((float)il2cpp_codegen_subtract((1.0f), L_12)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_5, L_13, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_3 = L_14;
		// bottomRight = GripPoint.position + rightRot * _data.size.x * (_data.widthOffset);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_15 = ___bottomRight1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = BoxSurface_get_GripPoint_m8FB2DB8D71AB2B5EA2FB6AB6A6E836D874526155_inline(__this, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_0;
		BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* L_19 = __this->____data_4;
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = (&L_19->___size_2);
		float L_21 = L_20->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_18, L_21, NULL);
		BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* L_23 = __this->____data_4;
		NullCheck(L_23);
		float L_24 = L_23->___widthOffset_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_22, L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_17, L_25, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_15 = L_26;
		// Vector3 forwardOffset = Rotation * Vector3.forward * _data.size.z;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = BoxSurface_get_Rotation_mE44EF9561F7DA6A8FDCBCDF1B7C5D40812256E33(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_27, L_28, NULL);
		BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* L_30 = __this->____data_4;
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_31 = (&L_30->___size_2);
		float L_32 = L_31->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_29, L_32, NULL);
		V_1 = L_33;
		// topLeft = bottomLeft + forwardOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_34 = ___topLeft2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_35 = ___bottomLeft0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_36, L_37, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_34 = L_38;
		// topRight = bottomRight + forwardOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_39 = ___topRight3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_40 = ___bottomRight1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_40);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_41, L_42, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_39 = L_43;
		// }
		return;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::ProjectOnSegment(UnityEngine.Vector3,System.ValueTuple`2<UnityEngine.Vector3,UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoxSurface_ProjectOnSegment_m0BA7D4004312EE8632A8A9AA5DF418BC90B77F24 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3 ___segment1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 line = segment.Item2 - segment.Item1;
		ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3 L_0 = ___segment1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0.___Item2_1;
		ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3 L_2 = ___segment1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = L_2.___Item1_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_1, L_3, NULL);
		V_0 = L_4;
		// Vector3 projection = Vector3.Project(point - segment.Item1, line);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___point0;
		ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3 L_6 = ___segment1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6.___Item1_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_5, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_Project_m47BC1C674D5732D50B6E136626FB2C53E18A706E_inline(L_8, L_9, NULL);
		V_1 = L_10;
		// if (Vector3.Dot(projection, line) < 0f)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		float L_13;
		L_13 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_11, L_12, NULL);
		if ((!(((float)L_13) < ((float)(0.0f)))))
		{
			goto IL_003c;
		}
	}
	{
		// projection = segment.Item1;
		ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3 L_14 = ___segment1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = L_14.___Item1_0;
		V_1 = L_15;
		goto IL_0062;
	}

IL_003c:
	{
		// else if (projection.magnitude > line.magnitude)
		float L_16;
		L_16 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		float L_17;
		L_17 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		if ((!(((float)L_16) > ((float)L_17))))
		{
			goto IL_0055;
		}
	}
	{
		// projection = segment.Item2;
		ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3 L_18 = ___segment1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = L_18.___Item2_1;
		V_1 = L_19;
		goto IL_0062;
	}

IL_0055:
	{
		// projection += segment.Item1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_1;
		ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3 L_21 = ___segment1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = L_21.___Item1_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_20, L_22, NULL);
		V_1 = L_23;
	}

IL_0062:
	{
		// return projection;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_1;
		return L_24;
	}
}
// System.Boolean Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::CalculateBestPoseAtSurface(UnityEngine.Ray,UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoxSurface_CalculateBestPoseAtSurface_mB385716B166F3C1681D76E7097D12ABF66C8D589 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___targetRay0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___recordedPose1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___bestPose2, const RuntimeMethod* method) 
{
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// Plane plane = new Plane(Rotation * Vector3.up, this.transform.position);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = BoxSurface_get_Rotation_mE44EF9561F7DA6A8FDCBCDF1B7C5D40812256E33(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_0, L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Plane__ctor_m2BFB65EBFF51123791878684ECC375B99FAD10A2((&V_0), L_2, L_4, NULL);
		// plane.Raycast(targetRay, out float rayDistance);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_5 = ___targetRay0;
		bool L_6;
		L_6 = Plane_Raycast_mC6D25A732413A2694A75CB0F2F9E75DEDDA117F0((&V_0), L_5, (&V_1), NULL);
		// Vector3 proximalPoint = targetRay.origin + targetRay.direction * rayDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&___targetRay0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&___targetRay0), NULL);
		float L_9 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_8, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_7, L_10, NULL);
		V_2 = L_11;
		// Vector3 surfacePoint = NearestPointInSurface(proximalPoint);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = BoxSurface_NearestPointInSurface_m9BF2E8F551A1209996BC1BF0DEB91B9DB8706419(__this, L_12, NULL);
		V_3 = L_13;
		// Pose desiredPose = new Pose(surfacePoint, recordedPose.rotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_3;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_15 = ___recordedPose1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = L_15->___rotation_1;
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&V_4), L_14, L_16, NULL);
		// bestPose = MinimalTranslationPoseAtSurface(desiredPose, recordedPose);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_17 = ___bestPose2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_18 = ___recordedPose1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_19;
		L_19 = BoxSurface_MinimalTranslationPoseAtSurface_mD7608A89BCBBE0755F5791DB997375CF41AA2C5D(__this, (&V_4), L_18, NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_17 = L_19;
		// return true;
		return (bool)1;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::NearestPointInSurface(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoxSurface_NearestPointInSurface_m9BF2E8F551A1209996BC1BF0DEB91B9DB8706419 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// NearestPointAndAngleInSurface(targetPosition, out Vector3 surfacePoint, out float angle);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___targetPosition0;
		BoxSurface_NearestPointAndAngleInSurface_mF363A54ADCDE16A22817C968D47C12CE50E63D21(__this, L_0, (&V_0), (&V_1), NULL);
		// return surfacePoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::NearestPointAndAngleInSurface(UnityEngine.Vector3,UnityEngine.Vector3&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxSurface_NearestPointAndAngleInSurface_mF363A54ADCDE16A22817C968D47C12CE50E63D21 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___surfacePoint1, float* ___angle2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	{
		// Vector3 rightDir = Rotation * Vector3.right;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = BoxSurface_get_Rotation_mE44EF9561F7DA6A8FDCBCDF1B7C5D40812256E33(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_0, L_1, NULL);
		V_0 = L_2;
		// Vector3 forwardDir = Rotation * Vector3.forward;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = BoxSurface_get_Rotation_mE44EF9561F7DA6A8FDCBCDF1B7C5D40812256E33(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_3, L_4, NULL);
		V_1 = L_5;
		// CalculateCorners(out bottomLeft, out bottomRight, out topLeft, out topRight);
		BoxSurface_CalculateCorners_m6C5C6ECDEAD93A44CDAB93B740109BF7A8A5D83E(__this, (&V_2), (&V_3), (&V_4), (&V_5), NULL);
		// Vector3 bottomP = ProjectOnSegment(targetPosition, (bottomLeft + rightDir * SnapOffset.y, bottomRight + rightDir * SnapOffset.x));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___targetPosition0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9;
		L_9 = BoxSurface_get_SnapOffset_m4C1BFC078BA32B3E9A47BD52B3CD3F3C72D31B83(__this, NULL);
		float L_10 = L_9.___y_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_8, L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_7, L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15;
		L_15 = BoxSurface_get_SnapOffset_m4C1BFC078BA32B3E9A47BD52B3CD3F3C72D31B83(__this, NULL);
		float L_16 = L_15.___x_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_14, L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_13, L_17, NULL);
		ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3 L_19;
		memset((&L_19), 0, sizeof(L_19));
		ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F((&L_19), L_12, L_18, /*hidden argument*/ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = BoxSurface_ProjectOnSegment_m0BA7D4004312EE8632A8A9AA5DF418BC90B77F24(__this, L_6, L_19, NULL);
		V_6 = L_20;
		// Vector3 topP = ProjectOnSegment(targetPosition, (topLeft - rightDir * SnapOffset.x, topRight - rightDir * SnapOffset.y));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___targetPosition0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_24;
		L_24 = BoxSurface_get_SnapOffset_m4C1BFC078BA32B3E9A47BD52B3CD3F3C72D31B83(__this, NULL);
		float L_25 = L_24.___x_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_23, L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_22, L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_30;
		L_30 = BoxSurface_get_SnapOffset_m4C1BFC078BA32B3E9A47BD52B3CD3F3C72D31B83(__this, NULL);
		float L_31 = L_30.___y_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_29, L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_28, L_32, NULL);
		ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3 L_34;
		memset((&L_34), 0, sizeof(L_34));
		ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F((&L_34), L_27, L_33, /*hidden argument*/ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = BoxSurface_ProjectOnSegment_m0BA7D4004312EE8632A8A9AA5DF418BC90B77F24(__this, L_21, L_34, NULL);
		V_7 = L_35;
		// Vector3 leftP = ProjectOnSegment(targetPosition, (bottomLeft - forwardDir * SnapOffset.z, topLeft - forwardDir * SnapOffset.w));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = ___targetPosition0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_39;
		L_39 = BoxSurface_get_SnapOffset_m4C1BFC078BA32B3E9A47BD52B3CD3F3C72D31B83(__this, NULL);
		float L_40 = L_39.___z_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_38, L_40, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_37, L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_45;
		L_45 = BoxSurface_get_SnapOffset_m4C1BFC078BA32B3E9A47BD52B3CD3F3C72D31B83(__this, NULL);
		float L_46 = L_45.___w_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_44, L_46, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_43, L_47, NULL);
		ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3 L_49;
		memset((&L_49), 0, sizeof(L_49));
		ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F((&L_49), L_42, L_48, /*hidden argument*/ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = BoxSurface_ProjectOnSegment_m0BA7D4004312EE8632A8A9AA5DF418BC90B77F24(__this, L_36, L_49, NULL);
		V_8 = L_50;
		// Vector3 rightP = ProjectOnSegment(targetPosition, (bottomRight + forwardDir * SnapOffset.w, topRight + forwardDir * SnapOffset.z));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = ___targetPosition0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_54;
		L_54 = BoxSurface_get_SnapOffset_m4C1BFC078BA32B3E9A47BD52B3CD3F3C72D31B83(__this, NULL);
		float L_55 = L_54.___w_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_53, L_55, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_52, L_56, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_60;
		L_60 = BoxSurface_get_SnapOffset_m4C1BFC078BA32B3E9A47BD52B3CD3F3C72D31B83(__this, NULL);
		float L_61 = L_60.___z_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_59, L_61, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_58, L_62, NULL);
		ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3 L_64;
		memset((&L_64), 0, sizeof(L_64));
		ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F((&L_64), L_57, L_63, /*hidden argument*/ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = BoxSurface_ProjectOnSegment_m0BA7D4004312EE8632A8A9AA5DF418BC90B77F24(__this, L_51, L_64, NULL);
		V_9 = L_65;
		// float bottomDistance = Vector3.Distance(bottomP, targetPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67 = ___targetPosition0;
		float L_68;
		L_68 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_66, L_67, NULL);
		// float topDistance = Vector3.Distance(topP, targetPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70 = ___targetPosition0;
		float L_71;
		L_71 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_69, L_70, NULL);
		V_10 = L_71;
		// float leftDistance = Vector3.Distance(leftP, targetPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = ___targetPosition0;
		float L_74;
		L_74 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_72, L_73, NULL);
		V_11 = L_74;
		// float rightDistance = Vector3.Distance(rightP, targetPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = ___targetPosition0;
		float L_77;
		L_77 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_75, L_76, NULL);
		V_12 = L_77;
		// float minDistance = Mathf.Min(bottomDistance, Mathf.Min(topDistance, Mathf.Min(leftDistance, rightDistance)));
		float L_78 = L_68;
		float L_79 = V_10;
		float L_80 = V_11;
		float L_81 = V_12;
		float L_82;
		L_82 = Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline(L_80, L_81, NULL);
		float L_83;
		L_83 = Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline(L_79, L_82, NULL);
		float L_84;
		L_84 = Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline(L_78, L_83, NULL);
		V_13 = L_84;
		// if (bottomDistance == minDistance)
		float L_85 = V_13;
		if ((!(((float)L_78) == ((float)L_85))))
		{
			goto IL_0176;
		}
	}
	{
		// surfacePoint = bottomP;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_86 = ___surfacePoint1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87 = V_6;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_86 = L_87;
		// angle = 0f;
		float* L_88 = ___angle2;
		*((float*)L_88) = (float)(0.0f);
		// return;
		return;
	}

IL_0176:
	{
		// if (topDistance == minDistance)
		float L_89 = V_10;
		float L_90 = V_13;
		if ((!(((float)L_89) == ((float)L_90))))
		{
			goto IL_018c;
		}
	}
	{
		// surfacePoint = topP;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_91 = ___surfacePoint1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92 = V_7;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_91 = L_92;
		// angle = 180f;
		float* L_93 = ___angle2;
		*((float*)L_93) = (float)(180.0f);
		// return;
		return;
	}

IL_018c:
	{
		// if (leftDistance == minDistance)
		float L_94 = V_11;
		float L_95 = V_13;
		if ((!(((float)L_94) == ((float)L_95))))
		{
			goto IL_01a2;
		}
	}
	{
		// surfacePoint = leftP;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_96 = ___surfacePoint1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97 = V_8;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_96 = L_97;
		// angle = 90f;
		float* L_98 = ___angle2;
		*((float*)L_98) = (float)(90.0f);
		// return;
		return;
	}

IL_01a2:
	{
		// surfacePoint = rightP;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_99 = ___surfacePoint1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100 = V_9;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_99 = L_100;
		// angle = -90f;
		float* L_101 = ___angle2;
		*((float*)L_101) = (float)(-90.0f);
		// }
		return;
	}
}
// UnityEngine.Pose Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::MinimalRotationPoseAtSurface(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BoxSurface_MinimalRotationPoseAtSurface_mA1E20D1B37A8247F4860A81FE4AC9057827FBA21 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___userPose0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___snapPose1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_13;
	memset((&V_13), 0, sizeof(V_13));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_14;
	memset((&V_14), 0, sizeof(V_14));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_15;
	memset((&V_15), 0, sizeof(V_15));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_16;
	memset((&V_16), 0, sizeof(V_16));
	float V_17 = 0.0f;
	{
		// Vector3 desiredPos = userPose.position;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___userPose0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0->___position_0;
		V_0 = L_1;
		// Quaternion baseRot = snapPose.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___snapPose1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = L_2->___rotation_1;
		V_1 = L_3;
		// Quaternion desiredRot = userPose.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_4 = ___userPose0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = L_4->___rotation_1;
		V_2 = L_5;
		// Vector3 up = Rotation * Vector3.up;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = BoxSurface_get_Rotation_mE44EF9561F7DA6A8FDCBCDF1B7C5D40812256E33(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_6, L_7, NULL);
		V_3 = L_8;
		// Quaternion bottomRot = baseRot;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = V_1;
		V_4 = L_9;
		// Quaternion topRot = Quaternion.AngleAxis(180f, up) * baseRot;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8((180.0f), L_10, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_11, L_12, NULL);
		V_5 = L_13;
		// Quaternion leftRot = Quaternion.AngleAxis(90f, up) * baseRot;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8((90.0f), L_14, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_15, L_16, NULL);
		V_6 = L_17;
		// Quaternion rightRot = Quaternion.AngleAxis(-90f, up) * baseRot;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8((-90.0f), L_18, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_19, L_20, NULL);
		V_7 = L_21;
		// float bottomDot = PoseUtils.RotationalSimilarity(bottomRot, desiredRot);
		float L_22;
		L_22 = PoseUtils_RotationalSimilarity_mD087E6543B452A612111592AEDBCAEB060F014A8((&V_4), (&V_2), NULL);
		// float topDot = PoseUtils.RotationalSimilarity(topRot, desiredRot);
		float L_23;
		L_23 = PoseUtils_RotationalSimilarity_mD087E6543B452A612111592AEDBCAEB060F014A8((&V_5), (&V_2), NULL);
		V_8 = L_23;
		// float leftDot = PoseUtils.RotationalSimilarity(leftRot, desiredRot);
		float L_24;
		L_24 = PoseUtils_RotationalSimilarity_mD087E6543B452A612111592AEDBCAEB060F014A8((&V_6), (&V_2), NULL);
		V_9 = L_24;
		// float rightDot = PoseUtils.RotationalSimilarity(rightRot, desiredRot);
		float L_25;
		L_25 = PoseUtils_RotationalSimilarity_mD087E6543B452A612111592AEDBCAEB060F014A8((&V_7), (&V_2), NULL);
		V_10 = L_25;
		// Vector3 rightDir = Rotation * Vector3.right;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
		L_26 = BoxSurface_get_Rotation_mE44EF9561F7DA6A8FDCBCDF1B7C5D40812256E33(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_26, L_27, NULL);
		V_11 = L_28;
		// Vector3 forwardDir = Rotation * Vector3.forward;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = BoxSurface_get_Rotation_mE44EF9561F7DA6A8FDCBCDF1B7C5D40812256E33(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_29, L_30, NULL);
		V_12 = L_31;
		// CalculateCorners(out bottomLeft, out bottomRight, out topLeft, out topRight);
		BoxSurface_CalculateCorners_m6C5C6ECDEAD93A44CDAB93B740109BF7A8A5D83E(__this, (&V_13), (&V_14), (&V_15), (&V_16), NULL);
		// float maxDot = Mathf.Max(bottomDot, Mathf.Max(topDot, Mathf.Max(leftDot, rightDot)));
		float L_32 = L_22;
		float L_33 = V_8;
		float L_34 = V_9;
		float L_35 = V_10;
		float L_36;
		L_36 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_34, L_35, NULL);
		float L_37;
		L_37 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_33, L_36, NULL);
		float L_38;
		L_38 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_32, L_37, NULL);
		V_17 = L_38;
		// if (bottomDot == maxDot)
		float L_39 = V_17;
		if ((!(((float)L_32) == ((float)L_39))))
		{
			goto IL_0120;
		}
	}
	{
		// Vector3 projBottom = ProjectOnSegment(desiredPos, (bottomLeft + rightDir * SnapOffset.y, bottomRight + rightDir * SnapOffset.x));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_11;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_43;
		L_43 = BoxSurface_get_SnapOffset_m4C1BFC078BA32B3E9A47BD52B3CD3F3C72D31B83(__this, NULL);
		float L_44 = L_43.___y_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_42, L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_41, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = V_11;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_49;
		L_49 = BoxSurface_get_SnapOffset_m4C1BFC078BA32B3E9A47BD52B3CD3F3C72D31B83(__this, NULL);
		float L_50 = L_49.___x_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_48, L_50, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_47, L_51, NULL);
		ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3 L_53;
		memset((&L_53), 0, sizeof(L_53));
		ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F((&L_53), L_46, L_52, /*hidden argument*/ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = BoxSurface_ProjectOnSegment_m0BA7D4004312EE8632A8A9AA5DF418BC90B77F24(__this, L_40, L_53, NULL);
		// return new Pose(projBottom, bottomRot);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_55 = V_4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_56;
		memset((&L_56), 0, sizeof(L_56));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_56), L_54, L_55, /*hidden argument*/NULL);
		return L_56;
	}

IL_0120:
	{
		// if (topDot == maxDot)
		float L_57 = V_8;
		float L_58 = V_17;
		if ((!(((float)L_57) == ((float)L_58))))
		{
			goto IL_016c;
		}
	}
	{
		// Vector3 projTop = ProjectOnSegment(desiredPos, (topLeft - rightDir * SnapOffset.x, topRight - rightDir * SnapOffset.y));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = V_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61 = V_11;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_62;
		L_62 = BoxSurface_get_SnapOffset_m4C1BFC078BA32B3E9A47BD52B3CD3F3C72D31B83(__this, NULL);
		float L_63 = L_62.___x_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_61, L_63, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_60, L_64, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = V_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67 = V_11;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_68;
		L_68 = BoxSurface_get_SnapOffset_m4C1BFC078BA32B3E9A47BD52B3CD3F3C72D31B83(__this, NULL);
		float L_69 = L_68.___y_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_67, L_69, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_66, L_70, NULL);
		ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3 L_72;
		memset((&L_72), 0, sizeof(L_72));
		ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F((&L_72), L_65, L_71, /*hidden argument*/ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = BoxSurface_ProjectOnSegment_m0BA7D4004312EE8632A8A9AA5DF418BC90B77F24(__this, L_59, L_72, NULL);
		// return new Pose(projTop, topRot);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_74 = V_5;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_75;
		memset((&L_75), 0, sizeof(L_75));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_75), L_73, L_74, /*hidden argument*/NULL);
		return L_75;
	}

IL_016c:
	{
		// if (leftDot == maxDot)
		float L_76 = V_9;
		float L_77 = V_17;
		if ((!(((float)L_76) == ((float)L_77))))
		{
			goto IL_01b8;
		}
	}
	{
		// Vector3 projLeft = ProjectOnSegment(desiredPos, (bottomLeft - forwardDir * SnapOffset.z, topLeft - forwardDir * SnapOffset.w));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = V_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80 = V_12;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_81;
		L_81 = BoxSurface_get_SnapOffset_m4C1BFC078BA32B3E9A47BD52B3CD3F3C72D31B83(__this, NULL);
		float L_82 = L_81.___z_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		L_83 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_80, L_82, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_79, L_83, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = V_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = V_12;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_87;
		L_87 = BoxSurface_get_SnapOffset_m4C1BFC078BA32B3E9A47BD52B3CD3F3C72D31B83(__this, NULL);
		float L_88 = L_87.___w_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_86, L_88, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		L_90 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_85, L_89, NULL);
		ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3 L_91;
		memset((&L_91), 0, sizeof(L_91));
		ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F((&L_91), L_84, L_90, /*hidden argument*/ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = BoxSurface_ProjectOnSegment_m0BA7D4004312EE8632A8A9AA5DF418BC90B77F24(__this, L_78, L_91, NULL);
		// return new Pose(projLeft, leftRot);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_93 = V_6;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_94;
		memset((&L_94), 0, sizeof(L_94));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_94), L_92, L_93, /*hidden argument*/NULL);
		return L_94;
	}

IL_01b8:
	{
		// Vector3 projRight = ProjectOnSegment(desiredPos, (bottomRight + forwardDir * SnapOffset.w, topRight + forwardDir * SnapOffset.z));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = V_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97 = V_12;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_98;
		L_98 = BoxSurface_get_SnapOffset_m4C1BFC078BA32B3E9A47BD52B3CD3F3C72D31B83(__this, NULL);
		float L_99 = L_98.___w_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100;
		L_100 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_97, L_99, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101;
		L_101 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_96, L_100, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102 = V_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103 = V_12;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_104;
		L_104 = BoxSurface_get_SnapOffset_m4C1BFC078BA32B3E9A47BD52B3CD3F3C72D31B83(__this, NULL);
		float L_105 = L_104.___z_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106;
		L_106 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_103, L_105, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		L_107 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_102, L_106, NULL);
		ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3 L_108;
		memset((&L_108), 0, sizeof(L_108));
		ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F((&L_108), L_101, L_107, /*hidden argument*/ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109;
		L_109 = BoxSurface_ProjectOnSegment_m0BA7D4004312EE8632A8A9AA5DF418BC90B77F24(__this, L_95, L_108, NULL);
		// return new Pose(projRight, rightRot);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_110 = V_7;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_111;
		memset((&L_111), 0, sizeof(L_111));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_111), L_109, L_110, /*hidden argument*/NULL);
		return L_111;
	}
}
// UnityEngine.Pose Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::MinimalTranslationPoseAtSurface(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BoxSurface_MinimalTranslationPoseAtSurface_mD7608A89BCBBE0755F5791DB997375CF41AA2C5D (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___userPose0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___snapPose1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// Vector3 desiredPos = userPose.position;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___userPose0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0->___position_0;
		V_0 = L_1;
		// Quaternion baseRot = snapPose.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___snapPose1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = L_2->___rotation_1;
		V_1 = L_3;
		// NearestPointAndAngleInSurface(desiredPos, out surfacePoint, out surfaceAngle);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		BoxSurface_NearestPointAndAngleInSurface_mF363A54ADCDE16A22817C968D47C12CE50E63D21(__this, L_4, (&V_2), (&V_3), NULL);
		// Quaternion surfaceRotation = RotateUp(baseRot, surfaceAngle);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = V_1;
		float L_6 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = BoxSurface_RotateUp_m4A4AFD04CCEABFD9B771AD6F27E4A27E9A184112(__this, L_5, L_6, NULL);
		V_4 = L_7;
		// return new Pose(surfacePoint, surfaceRotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = V_4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_10), L_8, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// UnityEngine.Quaternion Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::RotateUp(UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 BoxSurface_RotateUp_m4A4AFD04CCEABFD9B771AD6F27E4A27E9A184112 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___baseRot0, float ___angle1, const RuntimeMethod* method) 
{
	{
		// Quaternion offset = Quaternion.AngleAxis(angle, Rotation * Vector3.up);
		float L_0 = ___angle1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = BoxSurface_get_Rotation_mE44EF9561F7DA6A8FDCBCDF1B7C5D40812256E33(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_1, L_2, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8(L_0, L_3, NULL);
		// return offset * baseRot;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = ___baseRot0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_4, L_5, NULL);
		return L_6;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::InjectAllBoxSurface(Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurfaceData,UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxSurface_InjectAllBoxSurface_mDC2ACB3FE53CC43CC7CC6FEF294D45B30C0C1B14 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* ___data0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___gripPoint2, const RuntimeMethod* method) 
{
	{
		// InjectData(data);
		BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* L_0 = ___data0;
		BoxSurface_InjectData_mBAFBCED8AA78EE8ED58DD4AF22D687D9B2927CC4_inline(__this, L_0, NULL);
		// InjectRelativeTo(relativeTo);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___relativeTo1;
		BoxSurface_InjectRelativeTo_m8341182DED88E327488B3E38226B052A66FAD2E6_inline(__this, L_1, NULL);
		// InjectGripPoint(gripPoint);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___gripPoint2;
		BoxSurface_InjectGripPoint_m01B5459B30796A1A8A59E9F5B891FF82206A3721_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::InjectData(Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurfaceData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxSurface_InjectData_mBAFBCED8AA78EE8ED58DD4AF22D687D9B2927CC4 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* ___data0, const RuntimeMethod* method) 
{
	{
		// _data = data;
		BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* L_0 = ___data0;
		__this->____data_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::InjectRelativeTo(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxSurface_InjectRelativeTo_m8341182DED88E327488B3E38226B052A66FAD2E6 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo0, const RuntimeMethod* method) 
{
	{
		// _relativeTo = relativeTo;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___relativeTo0;
		__this->____relativeTo_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____relativeTo_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::InjectGripPoint(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxSurface_InjectGripPoint_m01B5459B30796A1A8A59E9F5B891FF82206A3721 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___gripPoint0, const RuntimeMethod* method) 
{
	{
		// _gripPoint = gripPoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___gripPoint0;
		__this->____gripPoint_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gripPoint_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxSurface__ctor_m3DCB36F9DAF05F396F81E5480A0754FD3B173CAC (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected BoxSurfaceData _data = new BoxSurfaceData();
		BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* L_0 = (BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28*)il2cpp_codegen_object_new(BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BoxSurfaceData__ctor_m52BC545F4F428404CD567B47808C118A25C15AA9(L_0, NULL);
		__this->____data_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Single Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::Oculus.Interaction.HandPosing.SnapSurfaces.ISnapSurface.CalculateBestPoseAtSurface(UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Pose&,Oculus.Interaction.HandPosing.PoseMeasureParameters& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BoxSurface_Oculus_Interaction_HandPosing_SnapSurfaces_ISnapSurface_CalculateBestPoseAtSurface_mB87DACB2D12242991B7DF367AF5B186A21953246 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___targetPose0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___reference1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___bestPose2, PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* ___scoringModifier3, const RuntimeMethod* method) 
{
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___targetPose0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_1 = ___reference1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___bestPose2;
		PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* L_3 = ___scoringModifier3;
		float L_4;
		L_4 = BoxSurface_CalculateBestPoseAtSurface_m02AD52CA19D1CB295436ECB013C751156FB456F2(__this, L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Boolean Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::Oculus.Interaction.HandPosing.SnapSurfaces.ISnapSurface.CalculateBestPoseAtSurface(UnityEngine.Ray,UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoxSurface_Oculus_Interaction_HandPosing_SnapSurfaces_ISnapSurface_CalculateBestPoseAtSurface_mDE416BFF555C08573EAD748C5627B853ACDB156A (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___targetRay0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___reference1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___bestPose2, const RuntimeMethod* method) 
{
	{
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_0 = ___targetRay0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_1 = ___reference1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___bestPose2;
		bool L_3;
		L_3 = BoxSurface_CalculateBestPoseAtSurface_mB385716B166F3C1681D76E7097D12ABF66C8D589(__this, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// UnityEngine.Pose Oculus.Interaction.HandPosing.SnapSurfaces.BoxSurface::Oculus.Interaction.HandPosing.SnapSurfaces.ISnapSurface.MirrorPose(UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BoxSurface_Oculus_Interaction_HandPosing_SnapSurfaces_ISnapSurface_MirrorPose_m983BE71AD2FA18B4BBD9DDCD3DEAC4DF294491A1 (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___gripPose0, const RuntimeMethod* method) 
{
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___gripPose0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = BoxSurface_MirrorPose_m1D1BE8E6B3098C2155ED1977244A82F2BEC195BC(__this, L_0, NULL);
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
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.ColliderSurface::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderSurface_Start_mD6031B0B7CE6EB620611931DBB909350D2A6ED8D (ColliderSurface_tD86CE6FAE81AE6A40C631D4452569C21092E31C4* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.HandPosing.SnapSurfaces.ColliderSurface::NearestPointInSurface(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ColliderSurface_NearestPointInSurface_mAA8CD46474C060B19481FAE042F08ECC8FA5573C (ColliderSurface_tD86CE6FAE81AE6A40C631D4452569C21092E31C4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, const RuntimeMethod* method) 
{
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (_collider.bounds.Contains(targetPosition))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = __this->____collider_4;
		NullCheck(L_0);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_1;
		L_1 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_0, NULL);
		V_0 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___targetPosition0;
		bool L_3;
		L_3 = Bounds_Contains_m584E9DE0CF9D90C3C4F928BA8F5AD328393F3555((&V_0), L_2, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// targetPosition = _collider.ClosestPointOnBounds(targetPosition);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_4 = __this->____collider_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___targetPosition0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Collider_ClosestPointOnBounds_mBF2F0C0E76C5F11AED801931D780823A94630952(L_4, L_5, NULL);
		___targetPosition0 = L_6;
	}

IL_0024:
	{
		// return _collider.ClosestPoint(targetPosition);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7 = __this->____collider_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___targetPosition0;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Collider_ClosestPoint_mFFF9B6F6CF9F18B22B325835A3E2E78A1C03BFCB(L_7, L_8, NULL);
		return L_9;
	}
}
// System.Single Oculus.Interaction.HandPosing.SnapSurfaces.ColliderSurface::CalculateBestPoseAtSurface(UnityEngine.Pose&,UnityEngine.Pose&,UnityEngine.Pose&,Oculus.Interaction.HandPosing.PoseMeasureParameters&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ColliderSurface_CalculateBestPoseAtSurface_mD2FE0C3DB53479CE343B9AFC4C6B432368803E50 (ColliderSurface_tD86CE6FAE81AE6A40C631D4452569C21092E31C4* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___targetPose0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___snapPose1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___bestPose2, PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* ___scoringModifier3, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Vector3 surfacePoint = NearestPointInSurface(targetPose.position);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___targetPose0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = ColliderSurface_NearestPointInSurface_mAA8CD46474C060B19481FAE042F08ECC8FA5573C(__this, L_1, NULL);
		V_0 = L_2;
		// float bestScore = 1f;
		V_1 = (1.0f);
		// if (scoringModifier.MaxDistance > 0)
		PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* L_3 = ___scoringModifier3;
		PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1 L_4 = (*(PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1*)L_3);
		V_2 = L_4;
		float L_5;
		L_5 = PoseMeasureParameters_get_MaxDistance_mDC7ED28CDF4C34843DE9A4D3F2964F0E7C9012E2_inline((&V_2), NULL);
		if ((!(((float)L_5) > ((float)(0.0f)))))
		{
			goto IL_0046;
		}
	}
	{
		// bestScore = PoseUtils.PositionalSimilarity(surfacePoint, targetPose.position, scoringModifier.MaxDistance);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_6 = ___targetPose0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&L_6->___position_0);
		PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* L_8 = ___scoringModifier3;
		PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1 L_9 = (*(PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1*)L_8);
		V_2 = L_9;
		float L_10;
		L_10 = PoseMeasureParameters_get_MaxDistance_mDC7ED28CDF4C34843DE9A4D3F2964F0E7C9012E2_inline((&V_2), NULL);
		float L_11;
		L_11 = PoseUtils_PositionalSimilarity_m15282E40451240B3507DC91DD0701313FC4A8F96((&V_0), L_7, L_10, NULL);
		V_1 = L_11;
	}

IL_0046:
	{
		// bestPose = new Pose(surfacePoint, targetPose.rotation);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_12 = ___bestPose2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_14 = ___targetPose0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = L_14->___rotation_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_16), L_13, L_15, /*hidden argument*/NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_12 = L_16;
		// return bestScore;
		float L_17 = V_1;
		return L_17;
	}
}
// System.Boolean Oculus.Interaction.HandPosing.SnapSurfaces.ColliderSurface::CalculateBestPoseAtSurface(UnityEngine.Ray,UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderSurface_CalculateBestPoseAtSurface_m2D75A4351E70D8127DA5463B8F823F7CD7E6CDB1 (ColliderSurface_tD86CE6FAE81AE6A40C631D4452569C21092E31C4* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___targetRay0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___recordedPose1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___bestPose2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (_collider.Raycast(targetRay, out RaycastHit hit, Mathf.Infinity))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = __this->____collider_4;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_1 = ___targetRay0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Collider_Raycast_mD7683E94051173B3FFC0862F4A17847E94AEB938(L_0, L_1, (&V_0), (std::numeric_limits<float>::infinity()), NULL);
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		// bestPose.position = hit.point;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_3 = ___bestPose2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		L_3->___position_0 = L_4;
		// bestPose.rotation = recordedPose.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_5 = ___bestPose2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_6 = ___recordedPose1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = L_6->___rotation_1;
		L_5->___rotation_1 = L_7;
		// return true;
		return (bool)1;
	}

IL_0030:
	{
		// bestPose = Pose.identity;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_8 = ___bestPose2;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9;
		L_9 = Pose_get_identity_m523758317678304723B886B84FEFC973E9FE1BBE(NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_8 = L_9;
		// return false;
		return (bool)0;
	}
}
// UnityEngine.Pose Oculus.Interaction.HandPosing.SnapSurfaces.ColliderSurface::MirrorPose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ColliderSurface_MirrorPose_m5F584223DCA2913242AA165E0C08186077A872BE (ColliderSurface_tD86CE6FAE81AE6A40C631D4452569C21092E31C4* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___gripPose0, const RuntimeMethod* method) 
{
	{
		// return gripPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___gripPose0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = (*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_0);
		return L_1;
	}
}
// Oculus.Interaction.HandPosing.SnapSurfaces.ISnapSurface Oculus.Interaction.HandPosing.SnapSurfaces.ColliderSurface::CreateMirroredSurface(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ColliderSurface_CreateMirroredSurface_mE3D51CA9445F56475ADC3133181FF5FE525CB130 (ColliderSurface_tD86CE6FAE81AE6A40C631D4452569C21092E31C4* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) 
{
	{
		// return CreateDuplicatedSurface(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___gameObject0;
		RuntimeObject* L_1;
		L_1 = ColliderSurface_CreateDuplicatedSurface_mC0EF21F942A05378EAFE8FC4685793BC273FCF27(__this, L_0, NULL);
		return L_1;
	}
}
// Oculus.Interaction.HandPosing.SnapSurfaces.ISnapSurface Oculus.Interaction.HandPosing.SnapSurfaces.ColliderSurface::CreateDuplicatedSurface(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ColliderSurface_CreateDuplicatedSurface_mC0EF21F942A05378EAFE8FC4685793BC273FCF27 (ColliderSurface_tD86CE6FAE81AE6A40C631D4452569C21092E31C4* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisColliderSurface_tD86CE6FAE81AE6A40C631D4452569C21092E31C4_m0FA96BCF8F09F71CD4DE26C6750A78ECC5AA2862_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ColliderSurface colliderSurface = gameObject.AddComponent<ColliderSurface>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___gameObject0;
		NullCheck(L_0);
		ColliderSurface_tD86CE6FAE81AE6A40C631D4452569C21092E31C4* L_1;
		L_1 = GameObject_AddComponent_TisColliderSurface_tD86CE6FAE81AE6A40C631D4452569C21092E31C4_m0FA96BCF8F09F71CD4DE26C6750A78ECC5AA2862(L_0, GameObject_AddComponent_TisColliderSurface_tD86CE6FAE81AE6A40C631D4452569C21092E31C4_m0FA96BCF8F09F71CD4DE26C6750A78ECC5AA2862_RuntimeMethod_var);
		// colliderSurface.InjectAllColliderSurface(_collider);
		ColliderSurface_tD86CE6FAE81AE6A40C631D4452569C21092E31C4* L_2 = L_1;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = __this->____collider_4;
		NullCheck(L_2);
		ColliderSurface_InjectAllColliderSurface_mF2028B80E81CC10974B2547413013DF68E9789B4(L_2, L_3, NULL);
		// return colliderSurface;
		return L_2;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.ColliderSurface::InjectCollider(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderSurface_InjectCollider_m4C1AC74F1CF206F58246DF738A4DDC84F121CC5C (ColliderSurface_tD86CE6FAE81AE6A40C631D4452569C21092E31C4* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider0, const RuntimeMethod* method) 
{
	{
		// _collider = collider;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___collider0;
		__this->____collider_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____collider_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.ColliderSurface::InjectAllColliderSurface(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderSurface_InjectAllColliderSurface_mF2028B80E81CC10974B2547413013DF68E9789B4 (ColliderSurface_tD86CE6FAE81AE6A40C631D4452569C21092E31C4* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider0, const RuntimeMethod* method) 
{
	{
		// InjectCollider(collider);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___collider0;
		ColliderSurface_InjectCollider_m4C1AC74F1CF206F58246DF738A4DDC84F121CC5C_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.ColliderSurface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderSurface__ctor_m84EF8A0CAC4C6A8F50587FFCFE3A6F72E6344DB8 (ColliderSurface_tD86CE6FAE81AE6A40C631D4452569C21092E31C4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Single Oculus.Interaction.HandPosing.SnapSurfaces.ColliderSurface::Oculus.Interaction.HandPosing.SnapSurfaces.ISnapSurface.CalculateBestPoseAtSurface(UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Pose&,Oculus.Interaction.HandPosing.PoseMeasureParameters& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ColliderSurface_Oculus_Interaction_HandPosing_SnapSurfaces_ISnapSurface_CalculateBestPoseAtSurface_mE892206A47427F33B8AE0A7A175660C7D30113C5 (ColliderSurface_tD86CE6FAE81AE6A40C631D4452569C21092E31C4* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___targetPose0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___reference1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___bestPose2, PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* ___scoringModifier3, const RuntimeMethod* method) 
{
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___targetPose0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_1 = ___reference1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___bestPose2;
		PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* L_3 = ___scoringModifier3;
		float L_4;
		L_4 = ColliderSurface_CalculateBestPoseAtSurface_mD2FE0C3DB53479CE343B9AFC4C6B432368803E50(__this, L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Boolean Oculus.Interaction.HandPosing.SnapSurfaces.ColliderSurface::Oculus.Interaction.HandPosing.SnapSurfaces.ISnapSurface.CalculateBestPoseAtSurface(UnityEngine.Ray,UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderSurface_Oculus_Interaction_HandPosing_SnapSurfaces_ISnapSurface_CalculateBestPoseAtSurface_m4AC8CDB3E5153AD24E269997F9E5D1A4915E1ABF (ColliderSurface_tD86CE6FAE81AE6A40C631D4452569C21092E31C4* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___targetRay0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___reference1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___bestPose2, const RuntimeMethod* method) 
{
	{
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_0 = ___targetRay0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_1 = ___reference1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___bestPose2;
		bool L_3;
		L_3 = ColliderSurface_CalculateBestPoseAtSurface_m2D75A4351E70D8127DA5463B8F823F7CD7E6CDB1(__this, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// UnityEngine.Pose Oculus.Interaction.HandPosing.SnapSurfaces.ColliderSurface::Oculus.Interaction.HandPosing.SnapSurfaces.ISnapSurface.MirrorPose(UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ColliderSurface_Oculus_Interaction_HandPosing_SnapSurfaces_ISnapSurface_MirrorPose_m2E30F512EEBA048F8C5F0CCD85C5345A62846B69 (ColliderSurface_tD86CE6FAE81AE6A40C631D4452569C21092E31C4* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___gripPose0, const RuntimeMethod* method) 
{
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___gripPose0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = ColliderSurface_MirrorPose_m5F584223DCA2913242AA165E0C08186077A872BE(__this, L_0, NULL);
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
// System.Object Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurfaceData::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CylinderSurfaceData_Clone_m2EA1FEF792339B1FCCB6AAE23C67C73CD5EA9B9C (CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CylinderSurfaceData clone = new CylinderSurfaceData();
		CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* L_0 = (CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13*)il2cpp_codegen_object_new(CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CylinderSurfaceData__ctor_m305B0457074DDBFAB596955FF0FEA998F2E48E2E(L_0, NULL);
		// clone.startPoint = this.startPoint;
		CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* L_1 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___startPoint_0;
		NullCheck(L_1);
		L_1->___startPoint_0 = L_2;
		// clone.endPoint = this.endPoint;
		CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* L_3 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___endPoint_1;
		NullCheck(L_3);
		L_3->___endPoint_1 = L_4;
		// clone.angle = this.angle;
		CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* L_5 = L_3;
		float L_6 = __this->___angle_2;
		NullCheck(L_5);
		L_5->___angle_2 = L_6;
		// return clone;
		return L_5;
	}
}
// Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurfaceData Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurfaceData::Mirror()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* CylinderSurfaceData_Mirror_mB74EE6C67C95269833955E8970A4BEDC23E3FE9C (CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CylinderSurfaceData mirror = Clone() as CylinderSurfaceData;
		RuntimeObject* L_0;
		L_0 = CylinderSurfaceData_Clone_m2EA1FEF792339B1FCCB6AAE23C67C73CD5EA9B9C(__this, NULL);
		// return mirror;
		return ((CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13*)IsInstClass((RuntimeObject*)L_0, CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13_il2cpp_TypeInfo_var));
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurfaceData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CylinderSurfaceData__ctor_m305B0457074DDBFAB596955FF0FEA998F2E48E2E (CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 startPoint = new Vector3(0f, 0.1f, 0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.100000001f), (0.0f), /*hidden argument*/NULL);
		__this->___startPoint_0 = L_0;
		// public Vector3 endPoint = new Vector3(0f, -0.1f, 0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (0.0f), (-0.100000001f), (0.0f), /*hidden argument*/NULL);
		__this->___endPoint_1 = L_1;
		// public float angle = 120f;
		__this->___angle_2 = (120.0f);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurfaceData Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* CylinderSurface_get_Data_m81F037E973AC7B479F2A9293D33160FA891EF607 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, const RuntimeMethod* method) 
{
	{
		// return _data;
		CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* L_0 = __this->____data_4;
		return L_0;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::set_Data(Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurfaceData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CylinderSurface_set_Data_m3E62E48BC647779CF1737370D509BAB3AD63278B (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* ___value0, const RuntimeMethod* method) 
{
	{
		// _data = value;
		CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* L_0 = ___value0;
		__this->____data_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_4), (void*)L_0);
		// }
		return;
	}
}
// UnityEngine.Transform Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::get_RelativeTo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* CylinderSurface_get_RelativeTo_m38D2A74202F0E53281B082B564827F5C63C36739 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, const RuntimeMethod* method) 
{
	{
		// get => _relativeTo;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____relativeTo_5;
		return L_0;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::set_RelativeTo(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CylinderSurface_set_RelativeTo_m051A4E57717FEFD802E5D02972EF8A20DA688FD9 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => _relativeTo = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->____relativeTo_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____relativeTo_5), (void*)L_0);
		return;
	}
}
// UnityEngine.Transform Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::get_GripPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* CylinderSurface_get_GripPoint_mAA81F61E2271E2125C756B3BD3EFAA9FAB05E877 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, const RuntimeMethod* method) 
{
	{
		// get => _gripPoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____gripPoint_6;
		return L_0;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::set_GripPoint(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CylinderSurface_set_GripPoint_m94A98AE4D5DCA2D745BC8C3B97C82D6DD39F6A6D (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => _gripPoint = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->____gripPoint_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gripPoint_6), (void*)L_0);
		return;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::get_StartAngleDir()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CylinderSurface_get_StartAngleDir_m5733F48D749259C66192FF33F2ED4D7452140CD3 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (this.GripPoint == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = CylinderSurface_get_GripPoint_mAA81F61E2271E2125C756B3BD3EFAA9FAB05E877_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		return L_2;
	}

IL_0014:
	{
		// return Vector3.ProjectOnPlane(GripPoint.transform.position - StartPoint, Direction).normalized;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = CylinderSurface_get_GripPoint_mAA81F61E2271E2125C756B3BD3EFAA9FAB05E877_inline(__this, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = CylinderSurface_get_StartPoint_mB6637372DB826E60E4340BA8C6A0FFC153FC0844(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_5, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = CylinderSurface_get_Direction_m07F109F47417C1017C7F121AD6E19EA642C7A3B6(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_ProjectOnPlane_mCAFA9F9416EA4740DCA8757B6E52260BF536770A_inline(L_7, L_8, NULL);
		V_0 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		return L_10;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::get_EndAngleDir()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CylinderSurface_get_EndAngleDir_mA73998BCEFB4794C9E889E109E5E937867890298 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, const RuntimeMethod* method) 
{
	{
		// return Quaternion.AngleAxis(Angle, Direction) * StartAngleDir;
		float L_0;
		L_0 = CylinderSurface_get_Angle_m624EC15AE4BA62FB4692DB0CA480D585626F4B10(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = CylinderSurface_get_Direction_m07F109F47417C1017C7F121AD6E19EA642C7A3B6(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8(L_0, L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = CylinderSurface_get_StartAngleDir_m5733F48D749259C66192FF33F2ED4D7452140CD3(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_2, L_3, NULL);
		return L_4;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::get_StartPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CylinderSurface_get_StartPoint_mB6637372DB826E60E4340BA8C6A0FFC153FC0844 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.RelativeTo != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = CylinderSurface_get_RelativeTo_m38D2A74202F0E53281B082B564827F5C63C36739_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// return this.RelativeTo.TransformPoint(_data.startPoint);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = CylinderSurface_get_RelativeTo_m38D2A74202F0E53281B082B564827F5C63C36739_inline(__this, NULL);
		CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* L_3 = __this->____data_4;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3->___startPoint_0;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_2, L_4, NULL);
		return L_5;
	}

IL_0025:
	{
		// return _data.startPoint;
		CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* L_6 = __this->____data_4;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6->___startPoint_0;
		return L_7;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::set_StartPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CylinderSurface_set_StartPoint_m126B2291CC0251CD539A9533205807B7357F5F89 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.RelativeTo != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = CylinderSurface_get_RelativeTo_m38D2A74202F0E53281B082B564827F5C63C36739_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// _data.startPoint = this.RelativeTo.InverseTransformPoint(value);
		CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* L_2 = __this->____data_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = CylinderSurface_get_RelativeTo_m38D2A74202F0E53281B082B564827F5C63C36739_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_3, L_4, NULL);
		NullCheck(L_2);
		L_2->___startPoint_0 = L_5;
		return;
	}

IL_0026:
	{
		// _data.startPoint = value;
		CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* L_6 = __this->____data_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___value0;
		NullCheck(L_6);
		L_6->___startPoint_0 = L_7;
		// }
		return;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::get_EndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CylinderSurface_get_EndPoint_m5D9D1F675FB4E86A77F4C573C67888AD75B28990 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.RelativeTo != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = CylinderSurface_get_RelativeTo_m38D2A74202F0E53281B082B564827F5C63C36739_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// return this.RelativeTo.TransformPoint(_data.endPoint);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = CylinderSurface_get_RelativeTo_m38D2A74202F0E53281B082B564827F5C63C36739_inline(__this, NULL);
		CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* L_3 = __this->____data_4;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3->___endPoint_1;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_2, L_4, NULL);
		return L_5;
	}

IL_0025:
	{
		// return _data.endPoint;
		CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* L_6 = __this->____data_4;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6->___endPoint_1;
		return L_7;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::set_EndPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CylinderSurface_set_EndPoint_m5E9E6AF71A12C8E93E23D3A22B133C47B52E3E0B (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.RelativeTo != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = CylinderSurface_get_RelativeTo_m38D2A74202F0E53281B082B564827F5C63C36739_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// _data.endPoint = this.RelativeTo.InverseTransformPoint(value);
		CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* L_2 = __this->____data_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = CylinderSurface_get_RelativeTo_m38D2A74202F0E53281B082B564827F5C63C36739_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_3, L_4, NULL);
		NullCheck(L_2);
		L_2->___endPoint_1 = L_5;
		return;
	}

IL_0026:
	{
		// _data.endPoint = value;
		CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* L_6 = __this->____data_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___value0;
		NullCheck(L_6);
		L_6->___endPoint_1 = L_7;
		// }
		return;
	}
}
// System.Single Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::get_Angle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CylinderSurface_get_Angle_m624EC15AE4BA62FB4692DB0CA480D585626F4B10 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, const RuntimeMethod* method) 
{
	{
		// return _data.angle;
		CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* L_0 = __this->____data_4;
		NullCheck(L_0);
		float L_1 = L_0->___angle_2;
		return L_1;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::set_Angle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CylinderSurface_set_Angle_m36558FBBA0CCB389E641380D2B136BBF2B25500B (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// _data.angle = Mathf.Repeat(value, 360f);
		CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* L_0 = __this->____data_4;
		float L_1 = ___value0;
		float L_2;
		L_2 = Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline(L_1, (360.0f), NULL);
		NullCheck(L_0);
		L_0->___angle_2 = L_2;
		// }
		return;
	}
}
// System.Single Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::get_Radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CylinderSurface_get_Radius_m583FC7EB1EBE612222F0A6E6C281A1352C6D2CB7 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (this.GripPoint == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = CylinderSurface_get_GripPoint_mAA81F61E2271E2125C756B3BD3EFAA9FAB05E877_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return 0f;
		return (0.0f);
	}

IL_0014:
	{
		// Vector3 start = StartPoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = CylinderSurface_get_StartPoint_mB6637372DB826E60E4340BA8C6A0FFC153FC0844(__this, NULL);
		V_0 = L_2;
		// Vector3 projectedPoint = start + Vector3.Project(this.GripPoint.position - start, Direction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = CylinderSurface_get_GripPoint_mAA81F61E2271E2125C756B3BD3EFAA9FAB05E877_inline(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_5, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = CylinderSurface_get_Direction_m07F109F47417C1017C7F121AD6E19EA642C7A3B6(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_Project_m47BC1C674D5732D50B6E136626FB2C53E18A706E_inline(L_7, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_3, L_9, NULL);
		// return Vector3.Distance(projectedPoint, this.GripPoint.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = CylinderSurface_get_GripPoint_mAA81F61E2271E2125C756B3BD3EFAA9FAB05E877_inline(__this, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		float L_13;
		L_13 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_10, L_12, NULL);
		return L_13;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CylinderSurface_get_Direction_m07F109F47417C1017C7F121AD6E19EA642C7A3B6 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 dir = (EndPoint - StartPoint);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = CylinderSurface_get_EndPoint_m5D9D1F675FB4E86A77F4C573C67888AD75B28990(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = CylinderSurface_get_StartPoint_mB6637372DB826E60E4340BA8C6A0FFC153FC0844(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// if (dir.sqrMagnitude == 0f)
		float L_3;
		L_3 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_0), NULL);
		if ((!(((float)L_3) == ((float)(0.0f)))))
		{
			goto IL_003f;
		}
	}
	{
		// return this.RelativeTo ? this.RelativeTo.up : Vector3.up;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = CylinderSurface_get_RelativeTo_m38D2A74202F0E53281B082B564827F5C63C36739_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_4, NULL);
		if (L_5)
		{
			goto IL_0033;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		return L_6;
	}

IL_0033:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = CylinderSurface_get_RelativeTo_m38D2A74202F0E53281B082B564827F5C63C36739_inline(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_7, NULL);
		return L_8;
	}

IL_003f:
	{
		// return dir.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		return L_9;
	}
}
// System.Single Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CylinderSurface_get_Height_m7021CA6717B684F1FD4002CFE5DD24EF4914D295 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return (EndPoint - StartPoint).magnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = CylinderSurface_get_EndPoint_m5D9D1F675FB4E86A77F4C573C67888AD75B28990(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = CylinderSurface_get_StartPoint_mB6637372DB826E60E4340BA8C6A0FFC153FC0844(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_0, L_1, NULL);
		V_0 = L_2;
		float L_3;
		L_3 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		return L_3;
	}
}
// UnityEngine.Quaternion Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CylinderSurface_get_Rotation_mA5087FD98DB58DA7BE0DDD458C04B73A9D555DC2 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, const RuntimeMethod* method) 
{
	{
		// if (_data.startPoint == _data.endPoint)
		CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* L_0 = __this->____data_4;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0->___startPoint_0;
		CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* L_2 = __this->____data_4;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = L_2->___endPoint_1;
		bool L_4;
		L_4 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		// return Quaternion.LookRotation(Vector3.forward);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_5, NULL);
		return L_6;
	}

IL_0028:
	{
		// return Quaternion.LookRotation(StartAngleDir, Direction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = CylinderSurface_get_StartAngleDir_m5733F48D749259C66192FF33F2ED4D7452140CD3(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = CylinderSurface_get_Direction_m07F109F47417C1017C7F121AD6E19EA642C7A3B6(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401(L_7, L_8, NULL);
		return L_9;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CylinderSurface_Reset_m902ADBD95FFA50231717D67F4044E8D43F1F2506 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisHandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C_mF3D3F1BBB511A0FECDD90D56B98D820B1085DCA2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* V_0 = NULL;
	{
		// _gripPoint = this.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->____gripPoint_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gripPoint_6), (void*)L_0);
		// if (this.TryGetComponent(out HandGrabPoint grabPoint))
		bool L_1;
		L_1 = Component_TryGetComponent_TisHandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C_mF3D3F1BBB511A0FECDD90D56B98D820B1085DCA2(__this, (&V_0), Component_TryGetComponent_TisHandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C_mF3D3F1BBB511A0FECDD90D56B98D820B1085DCA2_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// _relativeTo = grabPoint.RelativeTo;
		HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* L_2 = V_0;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = HandGrabPoint_get_RelativeTo_mE6D33E23708CD8E671E965978C4488CCA7B68679_inline(L_2, NULL);
		__this->____relativeTo_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____relativeTo_5), (void*)L_3);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CylinderSurface_Start_mBAAB0F3DFC3864F212CD3A30AEE2FC708157C8C7 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// UnityEngine.Pose Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::MirrorPose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 CylinderSurface_MirrorPose_mE0D518C3965A9A851BD8516EEEFC4E52582D7A96 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 normal = Quaternion.Inverse(this.RelativeTo.rotation) * StartAngleDir;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = CylinderSurface_get_RelativeTo_m38D2A74202F0E53281B082B564827F5C63C36739_inline(__this, NULL);
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = CylinderSurface_get_StartAngleDir_m5733F48D749259C66192FF33F2ED4D7452140CD3(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_2, L_3, NULL);
		V_0 = L_4;
		// Vector3 tangent = Quaternion.Inverse(this.RelativeTo.rotation) * Direction;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = CylinderSurface_get_RelativeTo_m38D2A74202F0E53281B082B564827F5C63C36739_inline(__this, NULL);
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = CylinderSurface_get_Direction_m07F109F47417C1017C7F121AD6E19EA642C7A3B6(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_7, L_8, NULL);
		V_1 = L_9;
		// return pose.MirrorPoseRotation(normal, tangent);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_10 = ___pose0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_13;
		L_13 = PoseUtils_MirrorPoseRotation_m75D90FFDF911D1B55C9B272F1E979172CA07F985(L_10, L_11, L_12, NULL);
		return L_13;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::PointAltitude(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CylinderSurface_PointAltitude_m1437BE3591041B38F4A912326270FFEFD3C6B87B (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 start = StartPoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = CylinderSurface_get_StartPoint_mB6637372DB826E60E4340BA8C6A0FFC153FC0844(__this, NULL);
		V_0 = L_0;
		// Vector3 projectedPoint = start + Vector3.Project(point - start, Direction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___point0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_2, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = CylinderSurface_get_Direction_m07F109F47417C1017C7F121AD6E19EA642C7A3B6(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_Project_m47BC1C674D5732D50B6E136626FB2C53E18A706E_inline(L_4, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_1, L_6, NULL);
		// return projectedPoint;
		return L_7;
	}
}
// System.Single Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::CalculateBestPoseAtSurface(UnityEngine.Pose&,UnityEngine.Pose&,UnityEngine.Pose&,Oculus.Interaction.HandPosing.PoseMeasureParameters&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CylinderSurface_CalculateBestPoseAtSurface_m84C16566F546AC2A2320168B218631922E28EF52 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___targetPose0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___reference1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___bestPose2, PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* ___scoringModifier3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CylinderSurface_MinimalRotationPoseAtSurface_m6332A75A429AADB6C146A0F3A96AAE466734F6CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CylinderSurface_MinimalTranslationPoseAtSurface_m3969B101312C52DB0B2EBD8F6840601E8A0EFAAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SnapSurfaceHelper.CalculateBestPoseAtSurface(targetPose, reference, out bestPose,
		//     scoringModifier, MinimalTranslationPoseAtSurface, MinimalRotationPoseAtSurface);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___targetPose0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_1 = ___reference1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___bestPose2;
		PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* L_3 = ___scoringModifier3;
		PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9* L_4 = (PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9*)il2cpp_codegen_object_new(PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		PoseCalculator__ctor_m8A64193C82848D172536F690815D51139A1A7019(L_4, __this, (intptr_t)((void*)CylinderSurface_MinimalTranslationPoseAtSurface_m3969B101312C52DB0B2EBD8F6840601E8A0EFAAE_RuntimeMethod_var), NULL);
		PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9* L_5 = (PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9*)il2cpp_codegen_object_new(PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		PoseCalculator__ctor_m8A64193C82848D172536F690815D51139A1A7019(L_5, __this, (intptr_t)((void*)CylinderSurface_MinimalRotationPoseAtSurface_m6332A75A429AADB6C146A0F3A96AAE466734F6CE_RuntimeMethod_var), NULL);
		float L_6;
		L_6 = SnapSurfaceHelper_CalculateBestPoseAtSurface_mBCF5860B0EED51F07471540A2E9DC48298067EFE(L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// Oculus.Interaction.HandPosing.SnapSurfaces.ISnapSurface Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::CreateMirroredSurface(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CylinderSurface_CreateMirroredSurface_mDB93BF08728E1347E230A8B1C070F02C7B58AC45 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8_m6A3866D30A44EE2674A08AADB1EE08334776B813_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CylinderSurface surface = gameObject.AddComponent<CylinderSurface>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___gameObject0;
		NullCheck(L_0);
		CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* L_1;
		L_1 = GameObject_AddComponent_TisCylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8_m6A3866D30A44EE2674A08AADB1EE08334776B813(L_0, GameObject_AddComponent_TisCylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8_m6A3866D30A44EE2674A08AADB1EE08334776B813_RuntimeMethod_var);
		// surface.Data = _data.Mirror();
		CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* L_2 = L_1;
		CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* L_3 = __this->____data_4;
		NullCheck(L_3);
		CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* L_4;
		L_4 = CylinderSurfaceData_Mirror_mB74EE6C67C95269833955E8970A4BEDC23E3FE9C(L_3, NULL);
		NullCheck(L_2);
		CylinderSurface_set_Data_m3E62E48BC647779CF1737370D509BAB3AD63278B_inline(L_2, L_4, NULL);
		// return surface;
		return L_2;
	}
}
// Oculus.Interaction.HandPosing.SnapSurfaces.ISnapSurface Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::CreateDuplicatedSurface(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CylinderSurface_CreateDuplicatedSurface_m8C0EADD6B6B6076A390855D2894D425AB72D01A6 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8_m6A3866D30A44EE2674A08AADB1EE08334776B813_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CylinderSurface surface = gameObject.AddComponent<CylinderSurface>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___gameObject0;
		NullCheck(L_0);
		CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* L_1;
		L_1 = GameObject_AddComponent_TisCylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8_m6A3866D30A44EE2674A08AADB1EE08334776B813(L_0, GameObject_AddComponent_TisCylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8_m6A3866D30A44EE2674A08AADB1EE08334776B813_RuntimeMethod_var);
		// surface.Data = _data;
		CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* L_2 = L_1;
		CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* L_3 = __this->____data_4;
		NullCheck(L_2);
		CylinderSurface_set_Data_m3E62E48BC647779CF1737370D509BAB3AD63278B_inline(L_2, L_3, NULL);
		// return surface;
		return L_2;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::NearestPointInSurface(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CylinderSurface_NearestPointInSurface_mD00A9E03833220F80F828C660B11A2C1477FF82B (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// Vector3 start = StartPoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = CylinderSurface_get_StartPoint_mB6637372DB826E60E4340BA8C6A0FFC153FC0844(__this, NULL);
		V_0 = L_0;
		// Vector3 dir = Direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = CylinderSurface_get_Direction_m07F109F47417C1017C7F121AD6E19EA642C7A3B6(__this, NULL);
		V_1 = L_1;
		// Vector3 projectedVector = Vector3.Project(targetPosition - start, dir);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___targetPosition0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_2, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_Project_m47BC1C674D5732D50B6E136626FB2C53E18A706E_inline(L_4, L_5, NULL);
		V_2 = L_6;
		// if (projectedVector.magnitude > Height)
		float L_7;
		L_7 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		float L_8;
		L_8 = CylinderSurface_get_Height_m7021CA6717B684F1FD4002CFE5DD24EF4914D295(__this, NULL);
		if ((!(((float)L_7) > ((float)L_8))))
		{
			goto IL_003e;
		}
	}
	{
		// projectedVector = projectedVector.normalized * Height;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_2), NULL);
		float L_10;
		L_10 = CylinderSurface_get_Height_m7021CA6717B684F1FD4002CFE5DD24EF4914D295(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_9, L_10, NULL);
		V_2 = L_11;
	}

IL_003e:
	{
		// if (Vector3.Dot(projectedVector, dir) < 0f)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_1;
		float L_14;
		L_14 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_12, L_13, NULL);
		if ((!(((float)L_14) < ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		// projectedVector = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_15;
	}

IL_0052:
	{
		// Vector3 projectedPoint = StartPoint + projectedVector;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = CylinderSurface_get_StartPoint_mB6637372DB826E60E4340BA8C6A0FFC153FC0844(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_16, L_17, NULL);
		V_3 = L_18;
		// Vector3 targetDirection = Vector3.ProjectOnPlane((targetPosition - projectedPoint), dir).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = ___targetPosition0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_19, L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_ProjectOnPlane_mCAFA9F9416EA4740DCA8757B6E52260BF536770A_inline(L_21, L_22, NULL);
		V_6 = L_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_6), NULL);
		V_4 = L_24;
		// float desiredAngle = Mathf.Repeat(Vector3.SignedAngle(StartAngleDir, targetDirection, dir), 360f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = CylinderSurface_get_StartAngleDir_m5733F48D749259C66192FF33F2ED4D7452140CD3(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_1;
		float L_28;
		L_28 = Vector3_SignedAngle_mD30E71B2F64983C2C4D86F17E7023BAA84CE50BE_inline(L_25, L_26, L_27, NULL);
		float L_29;
		L_29 = Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline(L_28, (360.0f), NULL);
		V_5 = L_29;
		// if (desiredAngle > Angle)
		float L_30 = V_5;
		float L_31;
		L_31 = CylinderSurface_get_Angle_m624EC15AE4BA62FB4692DB0CA480D585626F4B10(__this, NULL);
		if ((!(((float)L_30) > ((float)L_31))))
		{
			goto IL_00ca;
		}
	}
	{
		// if (Mathf.Abs(desiredAngle - Angle) >= Mathf.Abs(360f - desiredAngle))
		float L_32 = V_5;
		float L_33;
		L_33 = CylinderSurface_get_Angle_m624EC15AE4BA62FB4692DB0CA480D585626F4B10(__this, NULL);
		float L_34;
		L_34 = fabsf(((float)il2cpp_codegen_subtract(L_32, L_33)));
		float L_35 = V_5;
		float L_36;
		L_36 = fabsf(((float)il2cpp_codegen_subtract((360.0f), L_35)));
		if ((!(((float)L_34) >= ((float)L_36))))
		{
			goto IL_00c2;
		}
	}
	{
		// targetDirection = StartAngleDir;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = CylinderSurface_get_StartAngleDir_m5733F48D749259C66192FF33F2ED4D7452140CD3(__this, NULL);
		V_4 = L_37;
		goto IL_00ca;
	}

IL_00c2:
	{
		// targetDirection = EndAngleDir;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = CylinderSurface_get_EndAngleDir_mA73998BCEFB4794C9E889E109E5E937867890298(__this, NULL);
		V_4 = L_38;
	}

IL_00ca:
	{
		// Vector3 surfacePoint = projectedPoint + targetDirection * Radius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_4;
		float L_41;
		L_41 = CylinderSurface_get_Radius_m583FC7EB1EBE612222F0A6E6C281A1352C6D2CB7(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_40, L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_39, L_42, NULL);
		// return surfacePoint;
		return L_43;
	}
}
// System.Boolean Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::CalculateBestPoseAtSurface(UnityEngine.Ray,UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CylinderSurface_CalculateBestPoseAtSurface_mFD2117B4AC79E2503B42737915B2C8A17930EF4E (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___targetRay0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___recordedPose1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___bestPose2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	{
		// Vector3 lineToCylinder = StartPoint - targetRay.origin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = CylinderSurface_get_StartPoint_mB6637372DB826E60E4340BA8C6A0FFC153FC0844(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&___targetRay0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_0, L_1, NULL);
		// float perpendiculiarity = Vector3.Dot(targetRay.direction, Direction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&___targetRay0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = CylinderSurface_get_Direction_m07F109F47417C1017C7F121AD6E19EA642C7A3B6(__this, NULL);
		float L_5;
		L_5 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_3, L_4, NULL);
		V_0 = L_5;
		// float rayToLineDiff = Vector3.Dot(lineToCylinder, targetRay.direction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&___targetRay0), NULL);
		float L_8;
		L_8 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_6, L_7, NULL);
		V_1 = L_8;
		// float cylinderToLineDiff = Vector3.Dot(lineToCylinder, Direction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = CylinderSurface_get_Direction_m07F109F47417C1017C7F121AD6E19EA642C7A3B6(__this, NULL);
		float L_10;
		L_10 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_6, L_9, NULL);
		V_2 = L_10;
		// float determinant = 1f / (perpendiculiarity * perpendiculiarity - 1f);
		float L_11 = V_0;
		float L_12 = V_0;
		V_3 = ((float)((1.0f)/((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_11, L_12)), (1.0f)))));
		// float lineOffset = (perpendiculiarity * cylinderToLineDiff - rayToLineDiff) * determinant;
		float L_13 = V_0;
		float L_14 = V_2;
		float L_15 = V_1;
		float L_16 = V_3;
		V_4 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_13, L_14)), L_15)), L_16));
		// float cylinderOffset = (cylinderToLineDiff - perpendiculiarity * rayToLineDiff) * determinant;
		float L_17 = V_2;
		float L_18 = V_0;
		float L_19 = V_1;
		float L_20 = V_3;
		V_5 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_17, ((float)il2cpp_codegen_multiply(L_18, L_19)))), L_20));
		// Vector3 pointInLine = targetRay.origin + targetRay.direction * lineOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&___targetRay0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&___targetRay0), NULL);
		float L_23 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_22, L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_21, L_24, NULL);
		V_6 = L_25;
		// Vector3 pointInCylinder = StartPoint + Direction * cylinderOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = CylinderSurface_get_StartPoint_mB6637372DB826E60E4340BA8C6A0FFC153FC0844(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = CylinderSurface_get_Direction_m07F109F47417C1017C7F121AD6E19EA642C7A3B6(__this, NULL);
		float L_28 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_27, L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_26, L_29, NULL);
		V_7 = L_30;
		// float distanceToSurface = Mathf.Max(Vector3.Distance(pointInCylinder, pointInLine) - Radius);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_31 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_32 = L_31;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_6;
		float L_35;
		L_35 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_33, L_34, NULL);
		float L_36;
		L_36 = CylinderSurface_get_Radius_m583FC7EB1EBE612222F0A6E6C281A1352C6D2CB7(__this, NULL);
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)((float)il2cpp_codegen_subtract(L_35, L_36)));
		float L_37;
		L_37 = Mathf_Max_mDFA261F10D391C520F1E8B27A02F8EC44DEDA9F4_inline(L_32, NULL);
		V_8 = L_37;
		// if (distanceToSurface < Radius)
		float L_38 = V_8;
		float L_39;
		L_39 = CylinderSurface_get_Radius_m583FC7EB1EBE612222F0A6E6C281A1352C6D2CB7(__this, NULL);
		if ((!(((float)L_38) < ((float)L_39))))
		{
			goto IL_00f2;
		}
	}
	{
		// float adjustedDistance = Mathf.Sqrt(Radius * Radius - distanceToSurface * distanceToSurface);
		float L_40;
		L_40 = CylinderSurface_get_Radius_m583FC7EB1EBE612222F0A6E6C281A1352C6D2CB7(__this, NULL);
		float L_41;
		L_41 = CylinderSurface_get_Radius_m583FC7EB1EBE612222F0A6E6C281A1352C6D2CB7(__this, NULL);
		float L_42 = V_8;
		float L_43 = V_8;
		float L_44;
		L_44 = sqrtf(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_40, L_41)), ((float)il2cpp_codegen_multiply(L_42, L_43)))));
		V_11 = L_44;
		// pointInLine -= targetRay.direction * adjustedDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&___targetRay0), NULL);
		float L_47 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_46, L_47, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_45, L_48, NULL);
		V_6 = L_49;
	}

IL_00f2:
	{
		// Vector3 surfacePoint = NearestPointInSurface(pointInLine);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = CylinderSurface_NearestPointInSurface_mD00A9E03833220F80F828C660B11A2C1477FF82B(__this, L_50, NULL);
		V_9 = L_51;
		// Pose desiredPose = new Pose(surfacePoint, recordedPose.rotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = V_9;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_53 = ___recordedPose1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = L_53->___rotation_1;
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&V_10), L_52, L_54, NULL);
		// bestPose = MinimalTranslationPoseAtSurface(desiredPose, recordedPose);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_55 = ___bestPose2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_56 = ___recordedPose1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_57;
		L_57 = CylinderSurface_MinimalTranslationPoseAtSurface_m3969B101312C52DB0B2EBD8F6840601E8A0EFAAE(__this, (&V_10), L_56, NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_55 = L_57;
		// return true;
		return (bool)1;
	}
}
// UnityEngine.Pose Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::MinimalRotationPoseAtSurface(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 CylinderSurface_MinimalRotationPoseAtSurface_m6332A75A429AADB6C146A0F3A96AAE466734F6CE (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___userPose0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___snapPose1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// Vector3 desiredPos = userPose.position;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___userPose0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0->___position_0;
		V_0 = L_1;
		// Quaternion desiredRot = userPose.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___userPose0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = L_2->___rotation_1;
		// Quaternion baseRot = snapPose.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_4 = ___snapPose1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = L_4->___rotation_1;
		V_1 = L_5;
		// Quaternion rotDif = (desiredRot) * Quaternion.Inverse(baseRot);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_3, L_7, NULL);
		// Vector3 desiredDirection = (rotDif * Rotation) * Vector3.forward;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = CylinderSurface_get_Rotation_mA5087FD98DB58DA7BE0DDD458C04B73A9D555DC2(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_8, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_10, L_11, NULL);
		// Vector3 projectedDirection = Vector3.ProjectOnPlane(desiredDirection, Direction).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = CylinderSurface_get_Direction_m07F109F47417C1017C7F121AD6E19EA642C7A3B6(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_ProjectOnPlane_mCAFA9F9416EA4740DCA8757B6E52260BF536770A_inline(L_12, L_13, NULL);
		V_6 = L_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_6), NULL);
		V_2 = L_15;
		// Vector3 altitudePoint = PointAltitude(desiredPos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = CylinderSurface_PointAltitude_m1437BE3591041B38F4A912326270FFEFD3C6B87B(__this, L_16, NULL);
		V_3 = L_17;
		// Vector3 surfacePoint = NearestPointInSurface(altitudePoint + projectedDirection * Radius);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_2;
		float L_20;
		L_20 = CylinderSurface_get_Radius_m583FC7EB1EBE612222F0A6E6C281A1352C6D2CB7(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_19, L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_18, L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = CylinderSurface_NearestPointInSurface_mD00A9E03833220F80F828C660B11A2C1477FF82B(__this, L_22, NULL);
		V_4 = L_23;
		// Quaternion surfaceRotation = CalculateRotationOffset(surfacePoint) * baseRot;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = CylinderSurface_CalculateRotationOffset_mE86652F816ACBCF282E258C9512FCFCC3A049BB7(__this, L_24, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_25, L_26, NULL);
		V_5 = L_27;
		// return new Pose(surfacePoint, surfaceRotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29 = V_5;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_30;
		memset((&L_30), 0, sizeof(L_30));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_30), L_28, L_29, /*hidden argument*/NULL);
		return L_30;
	}
}
// UnityEngine.Pose Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::MinimalTranslationPoseAtSurface(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 CylinderSurface_MinimalTranslationPoseAtSurface_m3969B101312C52DB0B2EBD8F6840601E8A0EFAAE (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___userPose0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___snapPose1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector3 desiredPos = userPose.position;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___userPose0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0->___position_0;
		V_0 = L_1;
		// Quaternion baseRot = snapPose.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___snapPose1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = L_2->___rotation_1;
		V_1 = L_3;
		// Vector3 surfacePoint = NearestPointInSurface(desiredPos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = CylinderSurface_NearestPointInSurface_mD00A9E03833220F80F828C660B11A2C1477FF82B(__this, L_4, NULL);
		V_2 = L_5;
		// Quaternion surfaceRotation = CalculateRotationOffset(surfacePoint) * baseRot;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = CylinderSurface_CalculateRotationOffset_mE86652F816ACBCF282E258C9512FCFCC3A049BB7(__this, L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_7, L_8, NULL);
		V_3 = L_9;
		// return new Pose(surfacePoint, surfaceRotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = V_3;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_12), L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.Quaternion Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::CalculateRotationOffset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CylinderSurface_CalculateRotationOffset_mE86652F816ACBCF282E258C9512FCFCC3A049BB7 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___surfacePoint0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 recordedDirection = Vector3.ProjectOnPlane(this.GripPoint.position - StartPoint, Direction);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = CylinderSurface_get_GripPoint_mAA81F61E2271E2125C756B3BD3EFAA9FAB05E877_inline(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = CylinderSurface_get_StartPoint_mB6637372DB826E60E4340BA8C6A0FFC153FC0844(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = CylinderSurface_get_Direction_m07F109F47417C1017C7F121AD6E19EA642C7A3B6(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_ProjectOnPlane_mCAFA9F9416EA4740DCA8757B6E52260BF536770A_inline(L_3, L_4, NULL);
		// Vector3 desiredDirection = Vector3.ProjectOnPlane(surfacePoint - StartPoint, Direction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___surfacePoint0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = CylinderSurface_get_StartPoint_mB6637372DB826E60E4340BA8C6A0FFC153FC0844(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_6, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = CylinderSurface_get_Direction_m07F109F47417C1017C7F121AD6E19EA642C7A3B6(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_ProjectOnPlane_mCAFA9F9416EA4740DCA8757B6E52260BF536770A_inline(L_8, L_9, NULL);
		V_0 = L_10;
		// return Quaternion.FromToRotation(recordedDirection, desiredDirection);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_FromToRotation_m041093DBB23CB3641118310881D6B7746E3B8418(L_5, L_11, NULL);
		return L_12;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::InjectAllCylinderSurface(Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurfaceData,UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CylinderSurface_InjectAllCylinderSurface_m29B58FD742CED22E74AAA57D15D8E21E077958D2 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* ___data0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___gripPoint2, const RuntimeMethod* method) 
{
	{
		// InjectData(data);
		CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* L_0 = ___data0;
		CylinderSurface_InjectData_m0F95758FD54FA036A69E3CF0CF64AF5A5689C61C_inline(__this, L_0, NULL);
		// InjectRelativeTo(relativeTo);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___relativeTo1;
		CylinderSurface_InjectRelativeTo_m3A4143D6DAAFF5DBD243489A6996243B4F681669_inline(__this, L_1, NULL);
		// InjectGripPoint(gripPoint);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___gripPoint2;
		CylinderSurface_InjectGripPoint_m72AA9E8869F7DF78724EC8BAACA6DEA6E4572517_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::InjectData(Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurfaceData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CylinderSurface_InjectData_m0F95758FD54FA036A69E3CF0CF64AF5A5689C61C (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* ___data0, const RuntimeMethod* method) 
{
	{
		// _data = data;
		CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* L_0 = ___data0;
		__this->____data_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::InjectRelativeTo(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CylinderSurface_InjectRelativeTo_m3A4143D6DAAFF5DBD243489A6996243B4F681669 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo0, const RuntimeMethod* method) 
{
	{
		// _relativeTo = relativeTo;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___relativeTo0;
		__this->____relativeTo_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____relativeTo_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::InjectGripPoint(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CylinderSurface_InjectGripPoint_m72AA9E8869F7DF78724EC8BAACA6DEA6E4572517 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___gripPoint0, const RuntimeMethod* method) 
{
	{
		// _gripPoint = gripPoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___gripPoint0;
		__this->____gripPoint_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gripPoint_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CylinderSurface__ctor_m82962F38C7A50574488D2A8FFBD979101C83E427 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected CylinderSurfaceData _data = new CylinderSurfaceData();
		CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* L_0 = (CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13*)il2cpp_codegen_object_new(CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CylinderSurfaceData__ctor_m305B0457074DDBFAB596955FF0FEA998F2E48E2E(L_0, NULL);
		__this->____data_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Single Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::Oculus.Interaction.HandPosing.SnapSurfaces.ISnapSurface.CalculateBestPoseAtSurface(UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Pose&,Oculus.Interaction.HandPosing.PoseMeasureParameters& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CylinderSurface_Oculus_Interaction_HandPosing_SnapSurfaces_ISnapSurface_CalculateBestPoseAtSurface_m8A41820C99B5B12FAF80A6AFD2CF2B9C4C431A12 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___targetPose0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___reference1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___bestPose2, PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* ___scoringModifier3, const RuntimeMethod* method) 
{
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___targetPose0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_1 = ___reference1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___bestPose2;
		PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* L_3 = ___scoringModifier3;
		float L_4;
		L_4 = CylinderSurface_CalculateBestPoseAtSurface_m84C16566F546AC2A2320168B218631922E28EF52(__this, L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Boolean Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::Oculus.Interaction.HandPosing.SnapSurfaces.ISnapSurface.CalculateBestPoseAtSurface(UnityEngine.Ray,UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CylinderSurface_Oculus_Interaction_HandPosing_SnapSurfaces_ISnapSurface_CalculateBestPoseAtSurface_m7517EB46BC37B04A4AB85EAAB1A458CA41BA2158 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___targetRay0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___reference1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___bestPose2, const RuntimeMethod* method) 
{
	{
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_0 = ___targetRay0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_1 = ___reference1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___bestPose2;
		bool L_3;
		L_3 = CylinderSurface_CalculateBestPoseAtSurface_mFD2117B4AC79E2503B42737915B2C8A17930EF4E(__this, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// UnityEngine.Pose Oculus.Interaction.HandPosing.SnapSurfaces.CylinderSurface::Oculus.Interaction.HandPosing.SnapSurfaces.ISnapSurface.MirrorPose(UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 CylinderSurface_Oculus_Interaction_HandPosing_SnapSurfaces_ISnapSurface_MirrorPose_mDF72421671E6273F1AB13E1222F5222D9A295318 (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___gripPose0, const RuntimeMethod* method) 
{
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___gripPose0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = CylinderSurface_MirrorPose_mE0D518C3965A9A851BD8516EEEFC4E52582D7A96(__this, L_0, NULL);
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
// System.Single Oculus.Interaction.HandPosing.SnapSurfaces.SnapSurfaceHelper::CalculateBestPoseAtSurface(UnityEngine.Pose&,UnityEngine.Pose&,UnityEngine.Pose&,Oculus.Interaction.HandPosing.PoseMeasureParameters&,Oculus.Interaction.HandPosing.SnapSurfaces.SnapSurfaceHelper/PoseCalculator,Oculus.Interaction.HandPosing.SnapSurfaces.SnapSurfaceHelper/PoseCalculator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SnapSurfaceHelper_CalculateBestPoseAtSurface_mBCF5860B0EED51F07471540A2E9DC48298067EFE (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___desiredPose0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___snapPose1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___bestPose2, PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* ___scoringModifier3, PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9* ___minimalTranslationPoseCalculator4, PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9* ___minimalRotationPoseCalculator5, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Pose minimalRotationPose = minimalRotationPoseCalculator(desiredPose, snapPose);
		PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9* L_0 = ___minimalRotationPoseCalculator5;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_1 = ___desiredPose0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___snapPose1;
		NullCheck(L_0);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3;
		L_3 = PoseCalculator_Invoke_m35DB7C55FD3BAE3D5614737177E10D9273F5D27D_inline(L_0, L_1, L_2, NULL);
		V_1 = L_3;
		// if (scoringModifier.MaxDistance > 0)
		PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* L_4 = ___scoringModifier3;
		PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1 L_5 = (*(PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1*)L_4);
		V_2 = L_5;
		float L_6;
		L_6 = PoseMeasureParameters_get_MaxDistance_mDC7ED28CDF4C34843DE9A4D3F2964F0E7C9012E2_inline((&V_2), NULL);
		if ((!(((float)L_6) > ((float)(0.0f)))))
		{
			goto IL_0043;
		}
	}
	{
		// Pose minimalTranslationPose = minimalTranslationPoseCalculator(desiredPose, snapPose);
		PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9* L_7 = ___minimalTranslationPoseCalculator4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_8 = ___desiredPose0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_9 = ___snapPose1;
		NullCheck(L_7);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_10;
		L_10 = PoseCalculator_Invoke_m35DB7C55FD3BAE3D5614737177E10D9273F5D27D_inline(L_7, L_8, L_9, NULL);
		V_3 = L_10;
		// bestPose = SelectBestPose(minimalRotationPose, minimalTranslationPose, desiredPose, scoringModifier, out bestScore);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_11 = ___bestPose2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_12 = ___desiredPose0;
		PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* L_13 = ___scoringModifier3;
		PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1 L_14 = (*(PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1*)L_13);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_15;
		L_15 = SnapSurfaceHelper_SelectBestPose_m0B7FDAA9F6EFF5067E371A1B2CCA3C12277F61F2((&V_1), (&V_3), L_12, L_14, (&V_0), NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_11 = L_15;
		goto IL_005c;
	}

IL_0043:
	{
		// bestPose = minimalRotationPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_16 = ___bestPose2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_17 = V_1;
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_16 = L_17;
		// bestScore = PoseUtils.RotationalSimilarity(desiredPose.rotation, bestPose.rotation);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_18 = ___desiredPose0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_19 = (&L_18->___rotation_1);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_20 = ___bestPose2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_21 = (&L_20->___rotation_1);
		float L_22;
		L_22 = PoseUtils_RotationalSimilarity_mD087E6543B452A612111592AEDBCAEB060F014A8(L_19, L_21, NULL);
		V_0 = L_22;
	}

IL_005c:
	{
		// return bestScore;
		float L_23 = V_0;
		return L_23;
	}
}
// UnityEngine.Pose Oculus.Interaction.HandPosing.SnapSurfaces.SnapSurfaceHelper::SelectBestPose(UnityEngine.Pose&,UnityEngine.Pose&,UnityEngine.Pose&,Oculus.Interaction.HandPosing.PoseMeasureParameters,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 SnapSurfaceHelper_SelectBestPose_m0B7FDAA9F6EFF5067E371A1B2CCA3C12277F61F2 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___a0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___b1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___reference2, PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1 ___scoringModifier3, float* ___bestScore4, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float aScore = PoseUtils.Similarity(reference, a, scoringModifier);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___reference2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_1 = ___a0;
		PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1 L_2 = ___scoringModifier3;
		float L_3;
		L_3 = PoseUtils_Similarity_mA20326AC09282B566B6FA2295EC79A522BAC183C(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// float bScore = PoseUtils.Similarity(reference, b, scoringModifier);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_4 = ___reference2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_5 = ___b1;
		PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1 L_6 = ___scoringModifier3;
		float L_7;
		L_7 = PoseUtils_Similarity_mA20326AC09282B566B6FA2295EC79A522BAC183C(L_4, L_5, L_6, NULL);
		V_1 = L_7;
		// if (aScore >= bScore)
		float L_8 = V_0;
		float L_9 = V_1;
		if ((!(((float)L_8) >= ((float)L_9))))
		{
			goto IL_0021;
		}
	}
	{
		// bestScore = aScore;
		float* L_10 = ___bestScore4;
		float L_11 = V_0;
		*((float*)L_10) = (float)L_11;
		// return a;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_12 = ___a0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_13 = (*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_12);
		return L_13;
	}

IL_0021:
	{
		// bestScore = bScore;
		float* L_14 = ___bestScore4;
		float L_15 = V_1;
		*((float*)L_14) = (float)L_15;
		// return b;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_16 = ___b1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_17 = (*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_16);
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
Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 PoseCalculator_Invoke_m35DB7C55FD3BAE3D5614737177E10D9273F5D27D_Multicast(PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___desiredPose0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___snapPose1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9* currentDelegate = reinterpret_cast<PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9*>(delegatesToInvoke[i]);
		typedef Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 (*FunctionPointerType) (RuntimeObject*, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___desiredPose0, ___snapPose1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 PoseCalculator_Invoke_m35DB7C55FD3BAE3D5614737177E10D9273F5D27D_Open(PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___desiredPose0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___snapPose1, const RuntimeMethod* method)
{
	typedef Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 (*FunctionPointerType) (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___desiredPose0, ___snapPose1, method);
}
Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 PoseCalculator_Invoke_m35DB7C55FD3BAE3D5614737177E10D9273F5D27D_OpenStaticInvoker(PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___desiredPose0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___snapPose1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(__this->___method_ptr_0, method, NULL, ___desiredPose0, ___snapPose1);
}
Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 PoseCalculator_Invoke_m35DB7C55FD3BAE3D5614737177E10D9273F5D27D_ClosedStaticInvoker(PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___desiredPose0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___snapPose1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971, RuntimeObject*, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___desiredPose0, ___snapPose1);
}
IL2CPP_EXTERN_C  Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 DelegatePInvokeWrapper_PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9 (PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___desiredPose0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___snapPose1, const RuntimeMethod* method)
{
	typedef Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 (DEFAULT_CALL *PInvokeFunc)(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 returnValue = il2cppPInvokeFunc(___desiredPose0, ___snapPose1);

	return returnValue;
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.SnapSurfaceHelper/PoseCalculator::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseCalculator__ctor_m8A64193C82848D172536F690815D51139A1A7019 (PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PoseCalculator_Invoke_m35DB7C55FD3BAE3D5614737177E10D9273F5D27D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PoseCalculator_Invoke_m35DB7C55FD3BAE3D5614737177E10D9273F5D27D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PoseCalculator_Invoke_m35DB7C55FD3BAE3D5614737177E10D9273F5D27D_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&PoseCalculator_Invoke_m35DB7C55FD3BAE3D5614737177E10D9273F5D27D_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&PoseCalculator_Invoke_m35DB7C55FD3BAE3D5614737177E10D9273F5D27D_Multicast;
}
// UnityEngine.Pose Oculus.Interaction.HandPosing.SnapSurfaces.SnapSurfaceHelper/PoseCalculator::Invoke(UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 PoseCalculator_Invoke_m35DB7C55FD3BAE3D5614737177E10D9273F5D27D (PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___desiredPose0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___snapPose1, const RuntimeMethod* method) 
{
	typedef Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 (*FunctionPointerType) (RuntimeObject*, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___desiredPose0, ___snapPose1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Oculus.Interaction.HandPosing.SnapSurfaces.SnapSurfaceHelper/PoseCalculator::BeginInvoke(UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PoseCalculator_BeginInvoke_m58EAE1ADAECC37D85961B1B9ACEA8C1A3E79E47B (PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___desiredPose0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___snapPose1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var, &*___desiredPose0);
	__d_args[1] = Box(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var, &*___snapPose1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// UnityEngine.Pose Oculus.Interaction.HandPosing.SnapSurfaces.SnapSurfaceHelper/PoseCalculator::EndInvoke(UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 PoseCalculator_EndInvoke_mAC79EE3A2B2995AEE9332F2EAB34A8DAF4E68434 (PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___desiredPose0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___snapPose1, RuntimeObject* ___result2, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, 0);
	return *(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurfaceData::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SphereSurfaceData_Clone_mE5EAFCBCF90AED9393045EF33A65BAF0AC898F94 (SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SphereSurfaceData clone = new SphereSurfaceData();
		SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A* L_0 = (SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A*)il2cpp_codegen_object_new(SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SphereSurfaceData__ctor_m266AE72DF1DA7F04774876776C2A5570B5D91DE1(L_0, NULL);
		// clone.centre = this.centre;
		SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A* L_1 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___centre_0;
		NullCheck(L_1);
		L_1->___centre_0 = L_2;
		// return clone;
		return L_1;
	}
}
// Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurfaceData Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurfaceData::Mirror()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A* SphereSurfaceData_Mirror_m9BFBFFD2638E2A51740D8919BA7898F9923F5F8D (SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SphereSurfaceData mirror = Clone() as SphereSurfaceData;
		RuntimeObject* L_0;
		L_0 = SphereSurfaceData_Clone_mE5EAFCBCF90AED9393045EF33A65BAF0AC898F94(__this, NULL);
		// return mirror;
		return ((SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A*)IsInstClass((RuntimeObject*)L_0, SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A_il2cpp_TypeInfo_var));
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurfaceData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereSurfaceData__ctor_m266AE72DF1DA7F04774876776C2A5570B5D91DE1 (SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurfaceData Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A* SphereSurface_get_Data_m2CE953EAE36D1EE1AE3CCB38D4183B516A381104 (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, const RuntimeMethod* method) 
{
	{
		// return _data;
		SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A* L_0 = __this->____data_4;
		return L_0;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::set_Data(Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurfaceData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereSurface_set_Data_m8F045794467C4365539C07B4613E77B309C7C69F (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A* ___value0, const RuntimeMethod* method) 
{
	{
		// _data = value;
		SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A* L_0 = ___value0;
		__this->____data_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_4), (void*)L_0);
		// }
		return;
	}
}
// UnityEngine.Transform Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::get_RelativeTo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* SphereSurface_get_RelativeTo_m1F769107F4CA85046D0330189DA956FE5F9E1C6C (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, const RuntimeMethod* method) 
{
	{
		// get => _relativeTo;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____relativeTo_5;
		return L_0;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::set_RelativeTo(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereSurface_set_RelativeTo_mF61E98FF564D7F72F1C6695E44D4B4F69D15747D (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => _relativeTo = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->____relativeTo_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____relativeTo_5), (void*)L_0);
		return;
	}
}
// UnityEngine.Transform Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::get_GripPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* SphereSurface_get_GripPoint_m8522E647F035327EFC168A9C0C31AC0B007EBF57 (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, const RuntimeMethod* method) 
{
	{
		// get => _gripPoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____gripPoint_6;
		return L_0;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::set_GripPoint(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereSurface_set_GripPoint_mB322003B07B925649AE20042025CB54F95C53F3F (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => _gripPoint = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->____gripPoint_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gripPoint_6), (void*)L_0);
		return;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::get_Centre()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SphereSurface_get_Centre_m4724AC8A79D22FC1532C45E892EE534E14FB520C (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (RelativeTo != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = SphereSurface_get_RelativeTo_m1F769107F4CA85046D0330189DA956FE5F9E1C6C_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// return RelativeTo.TransformPoint(_data.centre);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = SphereSurface_get_RelativeTo_m1F769107F4CA85046D0330189DA956FE5F9E1C6C_inline(__this, NULL);
		SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A* L_3 = __this->____data_4;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3->___centre_0;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_2, L_4, NULL);
		return L_5;
	}

IL_0025:
	{
		// return _data.centre;
		SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A* L_6 = __this->____data_4;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6->___centre_0;
		return L_7;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::set_Centre(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereSurface_set_Centre_mAD927C6A1C9528C4E18279BAE3C0EF0584BC86F2 (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (RelativeTo != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = SphereSurface_get_RelativeTo_m1F769107F4CA85046D0330189DA956FE5F9E1C6C_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// _data.centre = RelativeTo.InverseTransformPoint(value);
		SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A* L_2 = __this->____data_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = SphereSurface_get_RelativeTo_m1F769107F4CA85046D0330189DA956FE5F9E1C6C_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_3, L_4, NULL);
		NullCheck(L_2);
		L_2->___centre_0 = L_5;
		return;
	}

IL_0026:
	{
		// _data.centre = value;
		SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A* L_6 = __this->____data_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___value0;
		NullCheck(L_6);
		L_6->___centre_0 = L_7;
		// }
		return;
	}
}
// System.Single Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::get_Radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SphereSurface_get_Radius_mA861B88AF762E71D821F394072E117C374BC2739 (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.GripPoint == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = SphereSurface_get_GripPoint_m8522E647F035327EFC168A9C0C31AC0B007EBF57_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return 0f;
		return (0.0f);
	}

IL_0014:
	{
		// return Vector3.Distance(Centre, this.GripPoint.position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = SphereSurface_get_Centre_m4724AC8A79D22FC1532C45E892EE534E14FB520C(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = SphereSurface_get_GripPoint_m8522E647F035327EFC168A9C0C31AC0B007EBF57_inline(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5;
		L_5 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_2, L_4, NULL);
		return L_5;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SphereSurface_get_Direction_m2ACD11F782EB1AFA6983E7176F62CDC0C88F8528 (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return (this.GripPoint.position - Centre).normalized;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = SphereSurface_get_GripPoint_m8522E647F035327EFC168A9C0C31AC0B007EBF57_inline(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = SphereSurface_get_Centre_m4724AC8A79D22FC1532C45E892EE534E14FB520C(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_1, L_2, NULL);
		V_0 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		return L_4;
	}
}
// UnityEngine.Quaternion Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SphereSurface_get_Rotation_m20AD373DE1FAC5793F6310E4128B6E7B33E0E5FE (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, const RuntimeMethod* method) 
{
	{
		// return Quaternion.LookRotation(Direction, this.GripPoint.forward);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = SphereSurface_get_Direction_m2ACD11F782EB1AFA6983E7176F62CDC0C88F8528(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = SphereSurface_get_GripPoint_m8522E647F035327EFC168A9C0C31AC0B007EBF57_inline(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_1, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401(L_0, L_2, NULL);
		return L_3;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereSurface_Reset_mE3804B223374472E33E84A4E0AF0842336ADB851 (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisHandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C_mF3D3F1BBB511A0FECDD90D56B98D820B1085DCA2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* V_0 = NULL;
	{
		// _gripPoint = this.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->____gripPoint_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gripPoint_6), (void*)L_0);
		// if (this.TryGetComponent(out HandGrabPoint grabPoint))
		bool L_1;
		L_1 = Component_TryGetComponent_TisHandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C_mF3D3F1BBB511A0FECDD90D56B98D820B1085DCA2(__this, (&V_0), Component_TryGetComponent_TisHandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C_mF3D3F1BBB511A0FECDD90D56B98D820B1085DCA2_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// _relativeTo = grabPoint.RelativeTo;
		HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* L_2 = V_0;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = HandGrabPoint_get_RelativeTo_mE6D33E23708CD8E671E965978C4488CCA7B68679_inline(L_2, NULL);
		__this->____relativeTo_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____relativeTo_5), (void*)L_3);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereSurface_Start_m1416A0B76929758A024351BF7324580E355F7DEF (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// UnityEngine.Pose Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::MirrorPose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 SphereSurface_MirrorPose_m8004320D10784FB322E2620A5D13C3C320B90286 (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 normal = Quaternion.Inverse(RelativeTo.rotation) * Direction;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = SphereSurface_get_RelativeTo_m1F769107F4CA85046D0330189DA956FE5F9E1C6C_inline(__this, NULL);
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = SphereSurface_get_Direction_m2ACD11F782EB1AFA6983E7176F62CDC0C88F8528(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_2, L_3, NULL);
		V_0 = L_4;
		// Vector3 tangent = Vector3.Cross(normal, Vector3.up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_Cross_m77F64620D73934C56BEE37A64016DBDCB9D21DB8_inline(L_5, L_6, NULL);
		V_1 = L_7;
		// return pose.MirrorPoseRotation(normal, tangent);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_8 = ___pose0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_11;
		L_11 = PoseUtils_MirrorPoseRotation_m75D90FFDF911D1B55C9B272F1E979172CA07F985(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
// System.Boolean Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::CalculateBestPoseAtSurface(UnityEngine.Ray,UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SphereSurface_CalculateBestPoseAtSurface_mF1FF0078CC2AE2AAE754F802F8CF05A76C0E3261 (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___targetRay0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___recordedPose1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___bestPose2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	{
		// Vector3 projection = Vector3.Project(Centre - targetRay.origin, targetRay.direction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = SphereSurface_get_Centre_m4724AC8A79D22FC1532C45E892EE534E14FB520C(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&___targetRay0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_0, L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&___targetRay0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_Project_m47BC1C674D5732D50B6E136626FB2C53E18A706E_inline(L_2, L_3, NULL);
		V_0 = L_4;
		// Vector3 nearestCentre = targetRay.origin + projection;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&___targetRay0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_5, L_6, NULL);
		V_1 = L_7;
		// float distanceToSurface = Mathf.Max(Vector3.Distance(Centre, nearestCentre) - Radius);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = SphereSurface_get_Centre_m4724AC8A79D22FC1532C45E892EE534E14FB520C(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_1;
		float L_12;
		L_12 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_10, L_11, NULL);
		float L_13;
		L_13 = SphereSurface_get_Radius_mA861B88AF762E71D821F394072E117C374BC2739(__this, NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)((float)il2cpp_codegen_subtract(L_12, L_13)));
		float L_14;
		L_14 = Mathf_Max_mDFA261F10D391C520F1E8B27A02F8EC44DEDA9F4_inline(L_9, NULL);
		V_2 = L_14;
		// if (distanceToSurface < Radius)
		float L_15 = V_2;
		float L_16;
		L_16 = SphereSurface_get_Radius_mA861B88AF762E71D821F394072E117C374BC2739(__this, NULL);
		if ((!(((float)L_15) < ((float)L_16))))
		{
			goto IL_0085;
		}
	}
	{
		// float adjustedDistance = Mathf.Sqrt(Radius * Radius - distanceToSurface * distanceToSurface);
		float L_17;
		L_17 = SphereSurface_get_Radius_mA861B88AF762E71D821F394072E117C374BC2739(__this, NULL);
		float L_18;
		L_18 = SphereSurface_get_Radius_mA861B88AF762E71D821F394072E117C374BC2739(__this, NULL);
		float L_19 = V_2;
		float L_20 = V_2;
		float L_21;
		L_21 = sqrtf(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_18)), ((float)il2cpp_codegen_multiply(L_19, L_20)))));
		V_5 = L_21;
		// nearestCentre -= targetRay.direction * adjustedDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&___targetRay0), NULL);
		float L_24 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_23, L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_22, L_25, NULL);
		V_1 = L_26;
	}

IL_0085:
	{
		// Vector3 surfacePoint = NearestPointInSurface(nearestCentre);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = SphereSurface_NearestPointInSurface_mED38A5FD68C8D6BDFC528DE31A9DAE2D6249B9AF(__this, L_27, NULL);
		V_3 = L_28;
		// Pose desiredPose = new Pose(surfacePoint, recordedPose.rotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_3;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_30 = ___recordedPose1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31 = L_30->___rotation_1;
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&V_4), L_29, L_31, NULL);
		// bestPose = MinimalTranslationPoseAtSurface(desiredPose, recordedPose);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_32 = ___bestPose2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_33 = ___recordedPose1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_34;
		L_34 = SphereSurface_MinimalTranslationPoseAtSurface_mBE8B978B29B9C498B7864119315C055184EDBA3C(__this, (&V_4), L_33, NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_32 = L_34;
		// return true;
		return (bool)1;
	}
}
// System.Single Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::CalculateBestPoseAtSurface(UnityEngine.Pose&,UnityEngine.Pose&,UnityEngine.Pose&,Oculus.Interaction.HandPosing.PoseMeasureParameters&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SphereSurface_CalculateBestPoseAtSurface_m95A7ED6DEC2D47724CCC6D3FE546F699123DDDB2 (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___targetPose0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___reference1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___bestPose2, PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* ___scoringModifier3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SphereSurface_MinimalRotationPoseAtSurface_m240601F09B8048BAA5111B3F7BAB458A7EB7B9B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SphereSurface_MinimalTranslationPoseAtSurface_mBE8B978B29B9C498B7864119315C055184EDBA3C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SnapSurfaceHelper.CalculateBestPoseAtSurface(targetPose, reference, out bestPose,
		//     scoringModifier, MinimalTranslationPoseAtSurface, MinimalRotationPoseAtSurface);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___targetPose0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_1 = ___reference1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___bestPose2;
		PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* L_3 = ___scoringModifier3;
		PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9* L_4 = (PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9*)il2cpp_codegen_object_new(PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		PoseCalculator__ctor_m8A64193C82848D172536F690815D51139A1A7019(L_4, __this, (intptr_t)((void*)SphereSurface_MinimalTranslationPoseAtSurface_mBE8B978B29B9C498B7864119315C055184EDBA3C_RuntimeMethod_var), NULL);
		PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9* L_5 = (PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9*)il2cpp_codegen_object_new(PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		PoseCalculator__ctor_m8A64193C82848D172536F690815D51139A1A7019(L_5, __this, (intptr_t)((void*)SphereSurface_MinimalRotationPoseAtSurface_m240601F09B8048BAA5111B3F7BAB458A7EB7B9B2_RuntimeMethod_var), NULL);
		float L_6;
		L_6 = SnapSurfaceHelper_CalculateBestPoseAtSurface_mBCF5860B0EED51F07471540A2E9DC48298067EFE(L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// Oculus.Interaction.HandPosing.SnapSurfaces.ISnapSurface Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::CreateMirroredSurface(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SphereSurface_CreateMirroredSurface_m7AAB0299966FCAE6531FE8D5539188E2B2C51761 (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E_m610C4B895B9CAD51DB73FB01BF5F53491EFC039A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SphereSurface surface = gameObject.AddComponent<SphereSurface>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___gameObject0;
		NullCheck(L_0);
		SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* L_1;
		L_1 = GameObject_AddComponent_TisSphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E_m610C4B895B9CAD51DB73FB01BF5F53491EFC039A(L_0, GameObject_AddComponent_TisSphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E_m610C4B895B9CAD51DB73FB01BF5F53491EFC039A_RuntimeMethod_var);
		// surface.Data = _data.Mirror();
		SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* L_2 = L_1;
		SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A* L_3 = __this->____data_4;
		NullCheck(L_3);
		SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A* L_4;
		L_4 = SphereSurfaceData_Mirror_m9BFBFFD2638E2A51740D8919BA7898F9923F5F8D(L_3, NULL);
		NullCheck(L_2);
		SphereSurface_set_Data_m8F045794467C4365539C07B4613E77B309C7C69F_inline(L_2, L_4, NULL);
		// return surface;
		return L_2;
	}
}
// Oculus.Interaction.HandPosing.SnapSurfaces.ISnapSurface Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::CreateDuplicatedSurface(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SphereSurface_CreateDuplicatedSurface_m29628FF3DBDA7FBF9A55724A173EC48E780A3DA6 (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E_m610C4B895B9CAD51DB73FB01BF5F53491EFC039A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SphereSurface surface = gameObject.AddComponent<SphereSurface>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___gameObject0;
		NullCheck(L_0);
		SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* L_1;
		L_1 = GameObject_AddComponent_TisSphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E_m610C4B895B9CAD51DB73FB01BF5F53491EFC039A(L_0, GameObject_AddComponent_TisSphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E_m610C4B895B9CAD51DB73FB01BF5F53491EFC039A_RuntimeMethod_var);
		// surface.Data = _data;
		SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* L_2 = L_1;
		SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A* L_3 = __this->____data_4;
		NullCheck(L_2);
		SphereSurface_set_Data_m8F045794467C4365539C07B4613E77B309C7C69F_inline(L_2, L_3, NULL);
		// return surface;
		return L_2;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::NearestPointInSurface(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SphereSurface_NearestPointInSurface_mED38A5FD68C8D6BDFC528DE31A9DAE2D6249B9AF (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 direction = (targetPosition - Centre).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___targetPosition0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = SphereSurface_get_Centre_m4724AC8A79D22FC1532C45E892EE534E14FB520C(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_0, L_1, NULL);
		V_1 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		V_0 = L_3;
		// return Centre + direction * Radius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = SphereSurface_get_Centre_m4724AC8A79D22FC1532C45E892EE534E14FB520C(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		float L_6;
		L_6 = SphereSurface_get_Radius_mA861B88AF762E71D821F394072E117C374BC2739(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_5, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_4, L_7, NULL);
		return L_8;
	}
}
// UnityEngine.Pose Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::MinimalRotationPoseAtSurface(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 SphereSurface_MinimalRotationPoseAtSurface_m240601F09B8048BAA5111B3F7BAB458A7EB7B9B2 (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___userPose0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___snapPose1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Quaternion rotCorrection = userPose.rotation * Quaternion.Inverse(snapPose.rotation);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___userPose0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = L_0->___rotation_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___snapPose1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = L_2->___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_1, L_4, NULL);
		// Vector3 correctedDir = rotCorrection * Direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = SphereSurface_get_Direction_m2ACD11F782EB1AFA6983E7176F62CDC0C88F8528(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_5, L_6, NULL);
		V_0 = L_7;
		// Vector3 surfacePoint = NearestPointInSurface(Centre + correctedDir * Radius);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = SphereSurface_get_Centre_m4724AC8A79D22FC1532C45E892EE534E14FB520C(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		float L_10;
		L_10 = SphereSurface_get_Radius_mA861B88AF762E71D821F394072E117C374BC2739(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_9, L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_8, L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = SphereSurface_NearestPointInSurface_mED38A5FD68C8D6BDFC528DE31A9DAE2D6249B9AF(__this, L_12, NULL);
		V_1 = L_13;
		// Quaternion surfaceRotation = RotationAtPoint(surfacePoint, snapPose.rotation, userPose.rotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_15 = ___snapPose1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = L_15->___rotation_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_17 = ___userPose0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = L_17->___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = SphereSurface_RotationAtPoint_m60E7F3C3838601AEB14F28FB6CEF3651ED88E12A(__this, L_14, L_16, L_18, NULL);
		V_2 = L_19;
		// return new Pose(surfacePoint, surfaceRotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21 = V_2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_22), L_20, L_21, /*hidden argument*/NULL);
		return L_22;
	}
}
// UnityEngine.Pose Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::MinimalTranslationPoseAtSurface(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 SphereSurface_MinimalTranslationPoseAtSurface_mBE8B978B29B9C498B7864119315C055184EDBA3C (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___userPose0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___snapPose1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector3 desiredPos = userPose.position;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___userPose0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0->___position_0;
		V_0 = L_1;
		// Quaternion baseRot = snapPose.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___snapPose1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = L_2->___rotation_1;
		V_1 = L_3;
		// Vector3 surfacePoint = NearestPointInSurface(desiredPos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = SphereSurface_NearestPointInSurface_mED38A5FD68C8D6BDFC528DE31A9DAE2D6249B9AF(__this, L_4, NULL);
		V_2 = L_5;
		// Quaternion surfaceRotation = RotationAtPoint(surfacePoint, baseRot, userPose.rotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = V_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_8 = ___userPose0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = L_8->___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = SphereSurface_RotationAtPoint_m60E7F3C3838601AEB14F28FB6CEF3651ED88E12A(__this, L_6, L_7, L_9, NULL);
		V_3 = L_10;
		// return new Pose(surfacePoint, surfaceRotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = V_3;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_13), L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// UnityEngine.Quaternion Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::RotationAtPoint(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SphereSurface_RotationAtPoint_m60E7F3C3838601AEB14F28FB6CEF3651ED88E12A (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___surfacePoint0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___baseRot1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___desiredRotation2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector3 desiredDirection = (surfacePoint - Centre).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___surfacePoint0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = SphereSurface_get_Centre_m4724AC8A79D22FC1532C45E892EE534E14FB520C(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_0, L_1, NULL);
		V_3 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		V_0 = L_3;
		// Quaternion targetRotation = Quaternion.FromToRotation(Direction, desiredDirection) * baseRot;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = SphereSurface_get_Direction_m2ACD11F782EB1AFA6983E7176F62CDC0C88F8528(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_FromToRotation_m041093DBB23CB3641118310881D6B7746E3B8418(L_4, L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = ___baseRot1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_6, L_7, NULL);
		V_1 = L_8;
		// Vector3 targetProjected = Vector3.ProjectOnPlane(targetRotation * Vector3.forward, desiredDirection).normalized;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_9, L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_ProjectOnPlane_mCAFA9F9416EA4740DCA8757B6E52260BF536770A_inline(L_11, L_12, NULL);
		V_3 = L_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		// Vector3 desiredProjected = Vector3.ProjectOnPlane(desiredRotation * Vector3.forward, desiredDirection).normalized;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = ___desiredRotation2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_15, L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_ProjectOnPlane_mCAFA9F9416EA4740DCA8757B6E52260BF536770A_inline(L_17, L_18, NULL);
		V_3 = L_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		V_2 = L_20;
		// Quaternion rotCorrection = Quaternion.FromToRotation(targetProjected, desiredProjected);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Quaternion_FromToRotation_m041093DBB23CB3641118310881D6B7746E3B8418(L_14, L_21, NULL);
		// return rotCorrection * targetRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_22, L_23, NULL);
		return L_24;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::InjectAllSphereSurface(Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurfaceData,UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereSurface_InjectAllSphereSurface_mE88F7088C30230DFB43A770F6E8636C0760F0AC3 (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A* ___data0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___gripPoint2, const RuntimeMethod* method) 
{
	{
		// InjectData(data);
		SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A* L_0 = ___data0;
		SphereSurface_InjectData_m867B1DDD82F515363ADEA3F1B2983B738E415F39_inline(__this, L_0, NULL);
		// InjectRelativeTo(relativeTo);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___relativeTo1;
		SphereSurface_InjectRelativeTo_m270C5FD4255D7B28D3D1AC8CC7E0073D785C270D_inline(__this, L_1, NULL);
		// InjectGripPoint(gripPoint);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___gripPoint2;
		SphereSurface_InjectGripPoint_m8FEC738D640CF2E4FE97FDB0B7CFB07C62F456FB_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::InjectData(Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurfaceData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereSurface_InjectData_m867B1DDD82F515363ADEA3F1B2983B738E415F39 (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A* ___data0, const RuntimeMethod* method) 
{
	{
		// _data = data;
		SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A* L_0 = ___data0;
		__this->____data_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::InjectRelativeTo(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereSurface_InjectRelativeTo_m270C5FD4255D7B28D3D1AC8CC7E0073D785C270D (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo0, const RuntimeMethod* method) 
{
	{
		// _relativeTo = relativeTo;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___relativeTo0;
		__this->____relativeTo_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____relativeTo_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::InjectGripPoint(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereSurface_InjectGripPoint_m8FEC738D640CF2E4FE97FDB0B7CFB07C62F456FB (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___gripPoint0, const RuntimeMethod* method) 
{
	{
		// _gripPoint = gripPoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___gripPoint0;
		__this->____gripPoint_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gripPoint_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereSurface__ctor_m8A0EB4B594ADFB40B55634B572AF092D4D68D7E3 (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected SphereSurfaceData _data = new SphereSurfaceData();
		SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A* L_0 = (SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A*)il2cpp_codegen_object_new(SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SphereSurfaceData__ctor_m266AE72DF1DA7F04774876776C2A5570B5D91DE1(L_0, NULL);
		__this->____data_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Single Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::Oculus.Interaction.HandPosing.SnapSurfaces.ISnapSurface.CalculateBestPoseAtSurface(UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Pose&,Oculus.Interaction.HandPosing.PoseMeasureParameters& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SphereSurface_Oculus_Interaction_HandPosing_SnapSurfaces_ISnapSurface_CalculateBestPoseAtSurface_m7167B04676E7CD9CB6A6B34058859325C883AA12 (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___targetPose0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___reference1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___bestPose2, PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* ___scoringModifier3, const RuntimeMethod* method) 
{
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___targetPose0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_1 = ___reference1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___bestPose2;
		PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* L_3 = ___scoringModifier3;
		float L_4;
		L_4 = SphereSurface_CalculateBestPoseAtSurface_m95A7ED6DEC2D47724CCC6D3FE546F699123DDDB2(__this, L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Boolean Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::Oculus.Interaction.HandPosing.SnapSurfaces.ISnapSurface.CalculateBestPoseAtSurface(UnityEngine.Ray,UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SphereSurface_Oculus_Interaction_HandPosing_SnapSurfaces_ISnapSurface_CalculateBestPoseAtSurface_mCE351990227D2FADCEDA26EAC3775C9FDF356712 (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___targetRay0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___reference1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___bestPose2, const RuntimeMethod* method) 
{
	{
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_0 = ___targetRay0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_1 = ___reference1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___bestPose2;
		bool L_3;
		L_3 = SphereSurface_CalculateBestPoseAtSurface_mF1FF0078CC2AE2AAE754F802F8CF05A76C0E3261(__this, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// UnityEngine.Pose Oculus.Interaction.HandPosing.SnapSurfaces.SphereSurface::Oculus.Interaction.HandPosing.SnapSurfaces.ISnapSurface.MirrorPose(UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 SphereSurface_Oculus_Interaction_HandPosing_SnapSurfaces_ISnapSurface_MirrorPose_mA569F9C63E0E0073CAD2D946285F5909E17A2F5C (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___gripPose0, const RuntimeMethod* method) 
{
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___gripPose0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = SphereSurface_MirrorPose_m8004320D10784FB322E2620A5D13C3C320B90286(__this, L_0, NULL);
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
// Oculus.Interaction.Grab.GrabTypeFlags Oculus.Interaction.Grab.HandGrabInteractableData::get_SupportedGrabTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandGrabInteractableData_get_SupportedGrabTypes_m645BE16149B48BCD75C7CB1EAAB08D95780CB364 (HandGrabInteractableData_t46F6982E1DA3B4A95A3510E6E001D4FF8CB51C69* __this, const RuntimeMethod* method) 
{
	{
		// public GrabTypeFlags SupportedGrabTypes { get; set; } = GrabTypeFlags.All;
		int32_t L_0 = __this->___U3CSupportedGrabTypesU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Grab.HandGrabInteractableData::set_SupportedGrabTypes(Oculus.Interaction.Grab.GrabTypeFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabInteractableData_set_SupportedGrabTypes_m5B8FE59B7EAAF0915DC9F99B920EBB17E17F9F5A (HandGrabInteractableData_t46F6982E1DA3B4A95A3510E6E001D4FF8CB51C69* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public GrabTypeFlags SupportedGrabTypes { get; set; } = GrabTypeFlags.All;
		int32_t L_0 = ___value0;
		__this->___U3CSupportedGrabTypesU3Ek__BackingField_0 = L_0;
		return;
	}
}
// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.Grab.HandGrabInteractableData::get_PinchGrabRules()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D HandGrabInteractableData_get_PinchGrabRules_m7B937B2D967815B586A3C90009911FC70DDBB0EF (HandGrabInteractableData_t46F6982E1DA3B4A95A3510E6E001D4FF8CB51C69* __this, const RuntimeMethod* method) 
{
	{
		// public GrabbingRule PinchGrabRules { get; set; } = GrabbingRule.DefaultPinchRule;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_0 = __this->___U3CPinchGrabRulesU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Grab.HandGrabInteractableData::set_PinchGrabRules(Oculus.Interaction.GrabAPI.GrabbingRule)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabInteractableData_set_PinchGrabRules_m344A0095D6EC49A3C0D18F03A2429E40E2DD8D3F (HandGrabInteractableData_t46F6982E1DA3B4A95A3510E6E001D4FF8CB51C69* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D ___value0, const RuntimeMethod* method) 
{
	{
		// public GrabbingRule PinchGrabRules { get; set; } = GrabbingRule.DefaultPinchRule;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_0 = ___value0;
		__this->___U3CPinchGrabRulesU3Ek__BackingField_1 = L_0;
		return;
	}
}
// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.Grab.HandGrabInteractableData::get_PalmGrabRules()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D HandGrabInteractableData_get_PalmGrabRules_mE4190C7D893093728301FE2441181194BA6667FC (HandGrabInteractableData_t46F6982E1DA3B4A95A3510E6E001D4FF8CB51C69* __this, const RuntimeMethod* method) 
{
	{
		// public GrabbingRule PalmGrabRules { get; set; } = GrabbingRule.DefaultPalmRule;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_0 = __this->___U3CPalmGrabRulesU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Grab.HandGrabInteractableData::set_PalmGrabRules(Oculus.Interaction.GrabAPI.GrabbingRule)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabInteractableData_set_PalmGrabRules_mFF0D9A26D57EA0FAEE2BE3566D09D601CF5DCFA4 (HandGrabInteractableData_t46F6982E1DA3B4A95A3510E6E001D4FF8CB51C69* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D ___value0, const RuntimeMethod* method) 
{
	{
		// public GrabbingRule PalmGrabRules { get; set; } = GrabbingRule.DefaultPalmRule;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_0 = ___value0;
		__this->___U3CPalmGrabRulesU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void Oculus.Interaction.Grab.HandGrabInteractableData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabInteractableData__ctor_m09C29051E4A4067FB9D3D46B63745CE5571A6796 (HandGrabInteractableData_t46F6982E1DA3B4A95A3510E6E001D4FF8CB51C69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public GrabTypeFlags SupportedGrabTypes { get; set; } = GrabTypeFlags.All;
		__this->___U3CSupportedGrabTypesU3Ek__BackingField_0 = 3;
		// public GrabbingRule PinchGrabRules { get; set; } = GrabbingRule.DefaultPinchRule;
		il2cpp_codegen_runtime_class_init_inline(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_0;
		L_0 = GrabbingRule_get_DefaultPinchRule_m4D757CE5E8DD549FDB7E01FFD283DE8F6C0061F5_inline(NULL);
		__this->___U3CPinchGrabRulesU3Ek__BackingField_1 = L_0;
		// public GrabbingRule PalmGrabRules { get; set; } = GrabbingRule.DefaultPalmRule;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_1;
		L_1 = GrabbingRule_get_DefaultPalmRule_mB9E377D27547C4D09D89E03ABE38940977732768_inline(NULL);
		__this->___U3CPalmGrabRulesU3Ek__BackingField_2 = L_1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Oculus.Interaction.Grab.HandGrab::StoreGrabData(Oculus.Interaction.Grab.IHandGrabInteractor,Oculus.Interaction.Grab.IHandGrabInteractable,Oculus.Interaction.Grab.HandGrabInteractableData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrab_StoreGrabData_mD9B8601732288C30B9E149FD7505890E88DC79FC (RuntimeObject* ___interactor0, RuntimeObject* ___interactable1, HandGrabInteractableData_t46F6982E1DA3B4A95A3510E6E001D4FF8CB51C69** ___cache2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabInteractable_t5A13AA20D7149B38A9897B859E407F8FD05A9EA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabInteractor_t6BF20261AFC2BE665EF540E91CE8D6116645E50F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* V_0 = NULL;
	int32_t V_1 = 0;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		// HandGrabAPI api = interactor.HandGrabApi;
		RuntimeObject* L_0 = ___interactor0;
		NullCheck(L_0);
		HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* L_1;
		L_1 = InterfaceFuncInvoker0< HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* >::Invoke(0 /* Oculus.Interaction.GrabAPI.HandGrabAPI Oculus.Interaction.Grab.IHandGrabInteractor::get_HandGrabApi() */, IHandGrabInteractor_t6BF20261AFC2BE665EF540E91CE8D6116645E50F_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		// cache.SupportedGrabTypes = GrabTypeFlags.None;
		HandGrabInteractableData_t46F6982E1DA3B4A95A3510E6E001D4FF8CB51C69** L_2 = ___cache2;
		HandGrabInteractableData_t46F6982E1DA3B4A95A3510E6E001D4FF8CB51C69* L_3 = *((HandGrabInteractableData_t46F6982E1DA3B4A95A3510E6E001D4FF8CB51C69**)L_2);
		NullCheck(L_3);
		HandGrabInteractableData_set_SupportedGrabTypes_m5B8FE59B7EAAF0915DC9F99B920EBB17E17F9F5A_inline(L_3, 0, NULL);
		// if (SupportsPinch(interactor, interactable))
		RuntimeObject* L_4 = ___interactor0;
		RuntimeObject* L_5 = ___interactable1;
		bool L_6;
		L_6 = HandGrab_SupportsPinch_m98F4E97BCA37CC8DB5BDC94733B0F22D221BFFE6(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0056;
		}
	}
	{
		// HandFingerFlags pinchFingers = api.HandPinchGrabbingFingers();
		HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = HandGrabAPI_HandPinchGrabbingFingers_m0C39BC9CA1B701B249975739A776C78FF399F4B2(L_7, NULL);
		V_1 = L_8;
		// if (api.IsSustainingGrab(interactable.PinchGrabRules, pinchFingers))
		HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* L_9 = V_0;
		RuntimeObject* L_10 = ___interactable1;
		NullCheck(L_10);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_11;
		L_11 = InterfaceFuncInvoker0< GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D >::Invoke(1 /* Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.Grab.IHandGrabInteractable::get_PinchGrabRules() */, IHandGrabInteractable_t5A13AA20D7149B38A9897B859E407F8FD05A9EA5_il2cpp_TypeInfo_var, L_10);
		V_2 = L_11;
		int32_t L_12 = V_1;
		NullCheck(L_9);
		bool L_13;
		L_13 = HandGrabAPI_IsSustainingGrab_m3D572C621F6A5DA88F50AAC29E2E3D0E62BA6798(L_9, (&V_2), L_12, NULL);
		if (!L_13)
		{
			goto IL_0056;
		}
	}
	{
		// cache.SupportedGrabTypes |= GrabTypeFlags.Pinch;
		HandGrabInteractableData_t46F6982E1DA3B4A95A3510E6E001D4FF8CB51C69** L_14 = ___cache2;
		HandGrabInteractableData_t46F6982E1DA3B4A95A3510E6E001D4FF8CB51C69* L_15 = *((HandGrabInteractableData_t46F6982E1DA3B4A95A3510E6E001D4FF8CB51C69**)L_14);
		HandGrabInteractableData_t46F6982E1DA3B4A95A3510E6E001D4FF8CB51C69* L_16 = L_15;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = HandGrabInteractableData_get_SupportedGrabTypes_m645BE16149B48BCD75C7CB1EAAB08D95780CB364_inline(L_16, NULL);
		NullCheck(L_16);
		HandGrabInteractableData_set_SupportedGrabTypes_m5B8FE59B7EAAF0915DC9F99B920EBB17E17F9F5A_inline(L_16, ((int32_t)((int32_t)L_17|1)), NULL);
		// cache.PinchGrabRules = new GrabbingRule(pinchFingers, interactable.PinchGrabRules);
		HandGrabInteractableData_t46F6982E1DA3B4A95A3510E6E001D4FF8CB51C69** L_18 = ___cache2;
		HandGrabInteractableData_t46F6982E1DA3B4A95A3510E6E001D4FF8CB51C69* L_19 = *((HandGrabInteractableData_t46F6982E1DA3B4A95A3510E6E001D4FF8CB51C69**)L_18);
		int32_t L_20 = V_1;
		RuntimeObject* L_21 = ___interactable1;
		NullCheck(L_21);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_22;
		L_22 = InterfaceFuncInvoker0< GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D >::Invoke(1 /* Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.Grab.IHandGrabInteractable::get_PinchGrabRules() */, IHandGrabInteractable_t5A13AA20D7149B38A9897B859E407F8FD05A9EA5_il2cpp_TypeInfo_var, L_21);
		V_2 = L_22;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_23;
		memset((&L_23), 0, sizeof(L_23));
		GrabbingRule__ctor_m1A7CF0E024E02E1A7BA82B8FC6390AD4E8D59AF3((&L_23), L_20, (&V_2), /*hidden argument*/NULL);
		NullCheck(L_19);
		HandGrabInteractableData_set_PinchGrabRules_m344A0095D6EC49A3C0D18F03A2429E40E2DD8D3F_inline(L_19, L_23, NULL);
	}

IL_0056:
	{
		// if (SupportsPalm(interactor, interactable))
		RuntimeObject* L_24 = ___interactor0;
		RuntimeObject* L_25 = ___interactable1;
		bool L_26;
		L_26 = HandGrab_SupportsPalm_mF10A7EEAF76DDE5D106858DAFD4891F1C45C9165(L_24, L_25, NULL);
		if (!L_26)
		{
			goto IL_009d;
		}
	}
	{
		// HandFingerFlags palmFingers = api.HandPalmGrabbingFingers();
		HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = HandGrabAPI_HandPalmGrabbingFingers_m0D9B276FA470653292D47DF7D3BE5D6595407DEC(L_27, NULL);
		V_3 = L_28;
		// if (api.IsSustainingGrab(interactable.PalmGrabRules, palmFingers))
		HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* L_29 = V_0;
		RuntimeObject* L_30 = ___interactable1;
		NullCheck(L_30);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_31;
		L_31 = InterfaceFuncInvoker0< GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D >::Invoke(2 /* Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.Grab.IHandGrabInteractable::get_PalmGrabRules() */, IHandGrabInteractable_t5A13AA20D7149B38A9897B859E407F8FD05A9EA5_il2cpp_TypeInfo_var, L_30);
		V_2 = L_31;
		int32_t L_32 = V_3;
		NullCheck(L_29);
		bool L_33;
		L_33 = HandGrabAPI_IsSustainingGrab_m3D572C621F6A5DA88F50AAC29E2E3D0E62BA6798(L_29, (&V_2), L_32, NULL);
		if (!L_33)
		{
			goto IL_009d;
		}
	}
	{
		// cache.SupportedGrabTypes |= GrabTypeFlags.Palm;
		HandGrabInteractableData_t46F6982E1DA3B4A95A3510E6E001D4FF8CB51C69** L_34 = ___cache2;
		HandGrabInteractableData_t46F6982E1DA3B4A95A3510E6E001D4FF8CB51C69* L_35 = *((HandGrabInteractableData_t46F6982E1DA3B4A95A3510E6E001D4FF8CB51C69**)L_34);
		HandGrabInteractableData_t46F6982E1DA3B4A95A3510E6E001D4FF8CB51C69* L_36 = L_35;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = HandGrabInteractableData_get_SupportedGrabTypes_m645BE16149B48BCD75C7CB1EAAB08D95780CB364_inline(L_36, NULL);
		NullCheck(L_36);
		HandGrabInteractableData_set_SupportedGrabTypes_m5B8FE59B7EAAF0915DC9F99B920EBB17E17F9F5A_inline(L_36, ((int32_t)((int32_t)L_37|2)), NULL);
		// cache.PalmGrabRules = new GrabbingRule(palmFingers, interactable.PalmGrabRules);
		HandGrabInteractableData_t46F6982E1DA3B4A95A3510E6E001D4FF8CB51C69** L_38 = ___cache2;
		HandGrabInteractableData_t46F6982E1DA3B4A95A3510E6E001D4FF8CB51C69* L_39 = *((HandGrabInteractableData_t46F6982E1DA3B4A95A3510E6E001D4FF8CB51C69**)L_38);
		int32_t L_40 = V_3;
		RuntimeObject* L_41 = ___interactable1;
		NullCheck(L_41);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_42;
		L_42 = InterfaceFuncInvoker0< GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D >::Invoke(2 /* Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.Grab.IHandGrabInteractable::get_PalmGrabRules() */, IHandGrabInteractable_t5A13AA20D7149B38A9897B859E407F8FD05A9EA5_il2cpp_TypeInfo_var, L_41);
		V_2 = L_42;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_43;
		memset((&L_43), 0, sizeof(L_43));
		GrabbingRule__ctor_m1A7CF0E024E02E1A7BA82B8FC6390AD4E8D59AF3((&L_43), L_40, (&V_2), /*hidden argument*/NULL);
		NullCheck(L_39);
		HandGrabInteractableData_set_PalmGrabRules_mFF0D9A26D57EA0FAEE2BE3566D09D601CF5DCFA4_inline(L_39, L_43, NULL);
	}

IL_009d:
	{
		// }
		return;
	}
}
// System.Single Oculus.Interaction.Grab.HandGrab::ComputeHoverStrength(Oculus.Interaction.Grab.IHandGrabInteractor,Oculus.Interaction.Grab.IHandGrabInteractable,Oculus.Interaction.Grab.GrabTypeFlags&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandGrab_ComputeHoverStrength_mFE02DD69C9B8FDFA0605C5E276484A103C565366 (RuntimeObject* ___interactor0, RuntimeObject* ___interactable1, int32_t* ___hoveringGrabTypes2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabInteractable_t5A13AA20D7149B38A9897B859E407F8FD05A9EA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabInteractor_t6BF20261AFC2BE665EF540E91CE8D6116645E50F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	{
		// HandGrabAPI api = interactor.HandGrabApi;
		RuntimeObject* L_0 = ___interactor0;
		NullCheck(L_0);
		HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* L_1;
		L_1 = InterfaceFuncInvoker0< HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* >::Invoke(0 /* Oculus.Interaction.GrabAPI.HandGrabAPI Oculus.Interaction.Grab.IHandGrabInteractor::get_HandGrabApi() */, IHandGrabInteractor_t6BF20261AFC2BE665EF540E91CE8D6116645E50F_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		// hoveringGrabTypes = GrabTypeFlags.None;
		int32_t* L_2 = ___hoveringGrabTypes2;
		*((int32_t*)L_2) = (int32_t)0;
		// float hoverStrength = 0f;
		V_1 = (0.0f);
		// if (SupportsPinch(interactor, interactable))
		RuntimeObject* L_3 = ___interactor0;
		RuntimeObject* L_4 = ___interactable1;
		bool L_5;
		L_5 = HandGrab_SupportsPinch_m98F4E97BCA37CC8DB5BDC94733B0F22D221BFFE6(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		// float pinchStrength = api.GetHandPinchStrength(interactable.PinchGrabRules, false);
		HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* L_6 = V_0;
		RuntimeObject* L_7 = ___interactable1;
		NullCheck(L_7);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_8;
		L_8 = InterfaceFuncInvoker0< GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D >::Invoke(1 /* Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.Grab.IHandGrabInteractable::get_PinchGrabRules() */, IHandGrabInteractable_t5A13AA20D7149B38A9897B859E407F8FD05A9EA5_il2cpp_TypeInfo_var, L_7);
		V_3 = L_8;
		NullCheck(L_6);
		float L_9;
		L_9 = HandGrabAPI_GetHandPinchStrength_m8436E27FA3BB79B7C6CDE7F17AF82183177344AB(L_6, (&V_3), (bool)0, NULL);
		V_2 = L_9;
		// if (pinchStrength > hoverStrength)
		float L_10 = V_2;
		float L_11 = V_1;
		if ((!(((float)L_10) > ((float)L_11))))
		{
			goto IL_0033;
		}
	}
	{
		// hoverStrength = pinchStrength;
		float L_12 = V_2;
		V_1 = L_12;
		// hoveringGrabTypes = GrabTypeFlags.Pinch;
		int32_t* L_13 = ___hoveringGrabTypes2;
		*((int32_t*)L_13) = (int32_t)1;
	}

IL_0033:
	{
		// if (SupportsPalm(interactor, interactable))
		RuntimeObject* L_14 = ___interactor0;
		RuntimeObject* L_15 = ___interactable1;
		bool L_16;
		L_16 = HandGrab_SupportsPalm_mF10A7EEAF76DDE5D106858DAFD4891F1C45C9165(L_14, L_15, NULL);
		if (!L_16)
		{
			goto IL_0059;
		}
	}
	{
		// float palmStrength = api.GetHandPalmStrength(interactable.PalmGrabRules, false);
		HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* L_17 = V_0;
		RuntimeObject* L_18 = ___interactable1;
		NullCheck(L_18);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_19;
		L_19 = InterfaceFuncInvoker0< GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D >::Invoke(2 /* Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.Grab.IHandGrabInteractable::get_PalmGrabRules() */, IHandGrabInteractable_t5A13AA20D7149B38A9897B859E407F8FD05A9EA5_il2cpp_TypeInfo_var, L_18);
		V_3 = L_19;
		NullCheck(L_17);
		float L_20;
		L_20 = HandGrabAPI_GetHandPalmStrength_m999B7B6A1D08C27390F4B874703D8ED675F43E42(L_17, (&V_3), (bool)0, NULL);
		V_4 = L_20;
		// if (palmStrength > hoverStrength)
		float L_21 = V_4;
		float L_22 = V_1;
		if ((!(((float)L_21) > ((float)L_22))))
		{
			goto IL_0059;
		}
	}
	{
		// hoverStrength = palmStrength;
		float L_23 = V_4;
		V_1 = L_23;
		// hoveringGrabTypes = GrabTypeFlags.Palm;
		int32_t* L_24 = ___hoveringGrabTypes2;
		*((int32_t*)L_24) = (int32_t)2;
	}

IL_0059:
	{
		// return hoverStrength;
		float L_25 = V_1;
		return L_25;
	}
}
// System.Boolean Oculus.Interaction.Grab.HandGrab::ComputeShouldSelect(Oculus.Interaction.Grab.IHandGrabInteractor,Oculus.Interaction.Grab.IHandGrabInteractable,Oculus.Interaction.Grab.GrabTypeFlags&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrab_ComputeShouldSelect_mF740B3CFD057AB6EDEFF5E2D34BA2A2E4F9B272F (RuntimeObject* ___interactor0, RuntimeObject* ___interactable1, int32_t* ___selectingGrabTypes2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabInteractable_t5A13AA20D7149B38A9897B859E407F8FD05A9EA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabInteractor_t6BF20261AFC2BE665EF540E91CE8D6116645E50F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* V_0 = NULL;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (interactable == null)
		RuntimeObject* L_0 = ___interactable1;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// selectingGrabTypes = GrabTypeFlags.None;
		int32_t* L_1 = ___selectingGrabTypes2;
		*((int32_t*)L_1) = (int32_t)0;
		// return false;
		return (bool)0;
	}

IL_0008:
	{
		// HandGrabAPI api = interactor.HandGrabApi;
		RuntimeObject* L_2 = ___interactor0;
		NullCheck(L_2);
		HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* L_3;
		L_3 = InterfaceFuncInvoker0< HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* >::Invoke(0 /* Oculus.Interaction.GrabAPI.HandGrabAPI Oculus.Interaction.Grab.IHandGrabInteractor::get_HandGrabApi() */, IHandGrabInteractor_t6BF20261AFC2BE665EF540E91CE8D6116645E50F_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		// selectingGrabTypes = GrabTypeFlags.None;
		int32_t* L_4 = ___selectingGrabTypes2;
		*((int32_t*)L_4) = (int32_t)0;
		// if (SupportsPinch(interactor, interactable) &&
		//      api.IsHandSelectPinchFingersChanged(interactable.PinchGrabRules))
		RuntimeObject* L_5 = ___interactor0;
		RuntimeObject* L_6 = ___interactable1;
		bool L_7;
		L_7 = HandGrab_SupportsPinch_m98F4E97BCA37CC8DB5BDC94733B0F22D221BFFE6(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* L_8 = V_0;
		RuntimeObject* L_9 = ___interactable1;
		NullCheck(L_9);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_10;
		L_10 = InterfaceFuncInvoker0< GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D >::Invoke(1 /* Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.Grab.IHandGrabInteractable::get_PinchGrabRules() */, IHandGrabInteractable_t5A13AA20D7149B38A9897B859E407F8FD05A9EA5_il2cpp_TypeInfo_var, L_9);
		V_1 = L_10;
		NullCheck(L_8);
		bool L_11;
		L_11 = HandGrabAPI_IsHandSelectPinchFingersChanged_mDEE9E9F826A9D2CB0C41301B9AFC1E91F9897722(L_8, (&V_1), NULL);
		if (!L_11)
		{
			goto IL_0032;
		}
	}
	{
		// selectingGrabTypes |= GrabTypeFlags.Pinch;
		int32_t* L_12 = ___selectingGrabTypes2;
		int32_t* L_13 = ___selectingGrabTypes2;
		int32_t L_14 = *((int32_t*)L_13);
		*((int32_t*)L_12) = (int32_t)((int32_t)(L_14|1));
	}

IL_0032:
	{
		// if (SupportsPalm(interactor, interactable) &&
		//      api.IsHandSelectPalmFingersChanged(interactable.PalmGrabRules))
		RuntimeObject* L_15 = ___interactor0;
		RuntimeObject* L_16 = ___interactable1;
		bool L_17;
		L_17 = HandGrab_SupportsPalm_mF10A7EEAF76DDE5D106858DAFD4891F1C45C9165(L_15, L_16, NULL);
		if (!L_17)
		{
			goto IL_0052;
		}
	}
	{
		HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* L_18 = V_0;
		RuntimeObject* L_19 = ___interactable1;
		NullCheck(L_19);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_20;
		L_20 = InterfaceFuncInvoker0< GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D >::Invoke(2 /* Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.Grab.IHandGrabInteractable::get_PalmGrabRules() */, IHandGrabInteractable_t5A13AA20D7149B38A9897B859E407F8FD05A9EA5_il2cpp_TypeInfo_var, L_19);
		V_1 = L_20;
		NullCheck(L_18);
		bool L_21;
		L_21 = HandGrabAPI_IsHandSelectPalmFingersChanged_mEE727D93CA46FE21A81048E57361B384DD1D1F6D(L_18, (&V_1), NULL);
		if (!L_21)
		{
			goto IL_0052;
		}
	}
	{
		// selectingGrabTypes |= GrabTypeFlags.Palm;
		int32_t* L_22 = ___selectingGrabTypes2;
		int32_t* L_23 = ___selectingGrabTypes2;
		int32_t L_24 = *((int32_t*)L_23);
		*((int32_t*)L_22) = (int32_t)((int32_t)(L_24|2));
	}

IL_0052:
	{
		// return selectingGrabTypes != GrabTypeFlags.None;
		int32_t* L_25 = ___selectingGrabTypes2;
		int32_t L_26 = *((int32_t*)L_25);
		return (bool)((!(((uint32_t)L_26) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean Oculus.Interaction.Grab.HandGrab::ComputeShouldUnselect(Oculus.Interaction.Grab.IHandGrabInteractor,Oculus.Interaction.Grab.IHandGrabInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrab_ComputeShouldUnselect_mD987B05B2E670B3F6E4B39AAFD5394D238445976 (RuntimeObject* ___interactor0, RuntimeObject* ___interactable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabInteractable_t5A13AA20D7149B38A9897B859E407F8FD05A9EA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabInteractor_t6BF20261AFC2BE665EF540E91CE8D6116645E50F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D V_7;
	memset((&V_7), 0, sizeof(V_7));
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// HandGrabAPI api = interactor.HandGrabApi;
		RuntimeObject* L_0 = ___interactor0;
		NullCheck(L_0);
		HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* L_1;
		L_1 = InterfaceFuncInvoker0< HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* >::Invoke(0 /* Oculus.Interaction.GrabAPI.HandGrabAPI Oculus.Interaction.Grab.IHandGrabInteractor::get_HandGrabApi() */, IHandGrabInteractor_t6BF20261AFC2BE665EF540E91CE8D6116645E50F_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		// HandFingerFlags pinchFingers = api.HandPinchGrabbingFingers();
		HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = HandGrabAPI_HandPinchGrabbingFingers_m0C39BC9CA1B701B249975739A776C78FF399F4B2(L_2, NULL);
		V_1 = L_3;
		// HandFingerFlags palmFingers = api.HandPalmGrabbingFingers();
		HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = HandGrabAPI_HandPalmGrabbingFingers_m0D9B276FA470653292D47DF7D3BE5D6595407DEC(L_4, NULL);
		V_2 = L_5;
		// if (interactable.SupportedGrabTypes == GrabTypeFlags.None)
		RuntimeObject* L_6 = ___interactable1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Oculus.Interaction.Grab.GrabTypeFlags Oculus.Interaction.Grab.IHandGrabInteractable::get_SupportedGrabTypes() */, IHandGrabInteractable_t5A13AA20D7149B38A9897B859E407F8FD05A9EA5_il2cpp_TypeInfo_var, L_6);
		if (L_7)
		{
			goto IL_0045;
		}
	}
	{
		// if (!api.IsSustainingGrab(GrabbingRule.FullGrab, pinchFingers) &&
		//     !api.IsSustainingGrab(GrabbingRule.FullGrab, palmFingers))
		HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_9;
		L_9 = GrabbingRule_get_FullGrab_mEF2400CB55E6A3D0CE520CD0F7EEFC68AAB1C828_inline(NULL);
		V_7 = L_9;
		int32_t L_10 = V_1;
		NullCheck(L_8);
		bool L_11;
		L_11 = HandGrabAPI_IsSustainingGrab_m3D572C621F6A5DA88F50AAC29E2E3D0E62BA6798(L_8, (&V_7), L_10, NULL);
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_13;
		L_13 = GrabbingRule_get_FullGrab_mEF2400CB55E6A3D0CE520CD0F7EEFC68AAB1C828_inline(NULL);
		V_8 = L_13;
		int32_t L_14 = V_2;
		NullCheck(L_12);
		bool L_15;
		L_15 = HandGrabAPI_IsSustainingGrab_m3D572C621F6A5DA88F50AAC29E2E3D0E62BA6798(L_12, (&V_8), L_14, NULL);
		if (L_15)
		{
			goto IL_0043;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0043:
	{
		// return false;
		return (bool)0;
	}

IL_0045:
	{
		// bool pinchHolding = false;
		V_3 = (bool)0;
		// bool palmHolding = false;
		V_4 = (bool)0;
		// bool pinchReleased = false;
		V_5 = (bool)0;
		// bool palmReleased = false;
		V_6 = (bool)0;
		// if (SupportsPinch(interactor, interactable.SupportedGrabTypes))
		RuntimeObject* L_16 = ___interactor0;
		RuntimeObject* L_17 = ___interactable1;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Oculus.Interaction.Grab.GrabTypeFlags Oculus.Interaction.Grab.IHandGrabInteractable::get_SupportedGrabTypes() */, IHandGrabInteractable_t5A13AA20D7149B38A9897B859E407F8FD05A9EA5_il2cpp_TypeInfo_var, L_17);
		bool L_19;
		L_19 = HandGrab_SupportsPinch_mBB1923135E088A09751D4BA2491183A5EF1D7430(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_0085;
		}
	}
	{
		// pinchHolding = api.IsSustainingGrab(interactable.PinchGrabRules, pinchFingers);
		HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* L_20 = V_0;
		RuntimeObject* L_21 = ___interactable1;
		NullCheck(L_21);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_22;
		L_22 = InterfaceFuncInvoker0< GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D >::Invoke(1 /* Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.Grab.IHandGrabInteractable::get_PinchGrabRules() */, IHandGrabInteractable_t5A13AA20D7149B38A9897B859E407F8FD05A9EA5_il2cpp_TypeInfo_var, L_21);
		V_7 = L_22;
		int32_t L_23 = V_1;
		NullCheck(L_20);
		bool L_24;
		L_24 = HandGrabAPI_IsSustainingGrab_m3D572C621F6A5DA88F50AAC29E2E3D0E62BA6798(L_20, (&V_7), L_23, NULL);
		V_3 = L_24;
		// if (api.IsHandUnselectPinchFingersChanged(interactable.PinchGrabRules))
		HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* L_25 = V_0;
		RuntimeObject* L_26 = ___interactable1;
		NullCheck(L_26);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_27;
		L_27 = InterfaceFuncInvoker0< GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D >::Invoke(1 /* Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.Grab.IHandGrabInteractable::get_PinchGrabRules() */, IHandGrabInteractable_t5A13AA20D7149B38A9897B859E407F8FD05A9EA5_il2cpp_TypeInfo_var, L_26);
		V_7 = L_27;
		NullCheck(L_25);
		bool L_28;
		L_28 = HandGrabAPI_IsHandUnselectPinchFingersChanged_mE1C455D9B209E1A3B1542B3BB66B4C69C1054A70(L_25, (&V_7), NULL);
		if (!L_28)
		{
			goto IL_0085;
		}
	}
	{
		// pinchReleased = true;
		V_5 = (bool)1;
	}

IL_0085:
	{
		// if (SupportsPalm(interactor, interactable.SupportedGrabTypes))
		RuntimeObject* L_29 = ___interactor0;
		RuntimeObject* L_30 = ___interactable1;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Oculus.Interaction.Grab.GrabTypeFlags Oculus.Interaction.Grab.IHandGrabInteractable::get_SupportedGrabTypes() */, IHandGrabInteractable_t5A13AA20D7149B38A9897B859E407F8FD05A9EA5_il2cpp_TypeInfo_var, L_30);
		bool L_32;
		L_32 = HandGrab_SupportsPalm_m50874A4E3BD7F16F48EAABF8486AD0EACC98E818(L_29, L_31, NULL);
		if (!L_32)
		{
			goto IL_00bb;
		}
	}
	{
		// palmHolding = api.IsSustainingGrab(interactable.PalmGrabRules, palmFingers);
		HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* L_33 = V_0;
		RuntimeObject* L_34 = ___interactable1;
		NullCheck(L_34);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_35;
		L_35 = InterfaceFuncInvoker0< GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D >::Invoke(2 /* Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.Grab.IHandGrabInteractable::get_PalmGrabRules() */, IHandGrabInteractable_t5A13AA20D7149B38A9897B859E407F8FD05A9EA5_il2cpp_TypeInfo_var, L_34);
		V_7 = L_35;
		int32_t L_36 = V_2;
		NullCheck(L_33);
		bool L_37;
		L_37 = HandGrabAPI_IsSustainingGrab_m3D572C621F6A5DA88F50AAC29E2E3D0E62BA6798(L_33, (&V_7), L_36, NULL);
		V_4 = L_37;
		// if (api.IsHandUnselectPalmFingersChanged(interactable.PalmGrabRules))
		HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* L_38 = V_0;
		RuntimeObject* L_39 = ___interactable1;
		NullCheck(L_39);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_40;
		L_40 = InterfaceFuncInvoker0< GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D >::Invoke(2 /* Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.Grab.IHandGrabInteractable::get_PalmGrabRules() */, IHandGrabInteractable_t5A13AA20D7149B38A9897B859E407F8FD05A9EA5_il2cpp_TypeInfo_var, L_39);
		V_7 = L_40;
		NullCheck(L_38);
		bool L_41;
		L_41 = HandGrabAPI_IsHandUnselectPalmFingersChanged_m6FAE8A160394C24EB8CF18A3D8F412D0ECF49E29(L_38, (&V_7), NULL);
		if (!L_41)
		{
			goto IL_00bb;
		}
	}
	{
		// palmReleased = true;
		V_6 = (bool)1;
	}

IL_00bb:
	{
		// return !pinchHolding && !palmHolding && (pinchReleased || palmReleased);
		bool L_42 = V_3;
		if (L_42)
		{
			goto IL_00c8;
		}
	}
	{
		bool L_43 = V_4;
		if (L_43)
		{
			goto IL_00c8;
		}
	}
	{
		bool L_44 = V_5;
		bool L_45 = V_6;
		return (bool)((int32_t)((int32_t)L_44|(int32_t)L_45));
	}

IL_00c8:
	{
		return (bool)0;
	}
}
// Oculus.Interaction.Input.HandFingerFlags Oculus.Interaction.Grab.HandGrab::GrabbingFingers(Oculus.Interaction.Grab.IHandGrabInteractor,Oculus.Interaction.Grab.IHandGrabInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandGrab_GrabbingFingers_m0999F6E930F354D0C52B672F810D257F39653CFB (RuntimeObject* ___interactor0, RuntimeObject* ___interactable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabInteractable_t5A13AA20D7149B38A9897B859E407F8FD05A9EA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabInteractor_t6BF20261AFC2BE665EF540E91CE8D6116645E50F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	{
		// HandGrabAPI api = interactor.HandGrabApi;
		RuntimeObject* L_0 = ___interactor0;
		NullCheck(L_0);
		HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* L_1;
		L_1 = InterfaceFuncInvoker0< HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* >::Invoke(0 /* Oculus.Interaction.GrabAPI.HandGrabAPI Oculus.Interaction.Grab.IHandGrabInteractor::get_HandGrabApi() */, IHandGrabInteractor_t6BF20261AFC2BE665EF540E91CE8D6116645E50F_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		// if (interactable == null)
		RuntimeObject* L_2 = ___interactable1;
		if (L_2)
		{
			goto IL_000c;
		}
	}
	{
		// return HandFingerFlags.None;
		return (int32_t)(0);
	}

IL_000c:
	{
		// HandFingerFlags fingers = HandFingerFlags.None;
		V_1 = 0;
		// if (SupportsPinch(interactor, interactable))
		RuntimeObject* L_3 = ___interactor0;
		RuntimeObject* L_4 = ___interactable1;
		bool L_5;
		L_5 = HandGrab_SupportsPinch_m98F4E97BCA37CC8DB5BDC94733B0F22D221BFFE6(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		// HandFingerFlags pinchingFingers = api.HandPinchGrabbingFingers();
		HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = HandGrabAPI_HandPinchGrabbingFingers_m0C39BC9CA1B701B249975739A776C78FF399F4B2(L_6, NULL);
		V_2 = L_7;
		// interactable.PinchGrabRules.StripIrrelevant(ref pinchingFingers);
		RuntimeObject* L_8 = ___interactable1;
		NullCheck(L_8);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_9;
		L_9 = InterfaceFuncInvoker0< GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D >::Invoke(1 /* Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.Grab.IHandGrabInteractable::get_PinchGrabRules() */, IHandGrabInteractable_t5A13AA20D7149B38A9897B859E407F8FD05A9EA5_il2cpp_TypeInfo_var, L_8);
		V_3 = L_9;
		GrabbingRule_StripIrrelevant_m160B28EF238610D089F85F8CEF30B7E4DDB4B39A((&V_3), (&V_2), NULL);
		// fingers = fingers | pinchingFingers;
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		V_1 = ((int32_t)((int32_t)L_10|(int32_t)L_11));
	}

IL_0032:
	{
		// if (SupportsPalm(interactor, interactable))
		RuntimeObject* L_12 = ___interactor0;
		RuntimeObject* L_13 = ___interactable1;
		bool L_14;
		L_14 = HandGrab_SupportsPalm_mF10A7EEAF76DDE5D106858DAFD4891F1C45C9165(L_12, L_13, NULL);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		// HandFingerFlags grabbingFingers = api.HandPalmGrabbingFingers();
		HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = HandGrabAPI_HandPalmGrabbingFingers_m0D9B276FA470653292D47DF7D3BE5D6595407DEC(L_15, NULL);
		V_4 = L_16;
		// interactable.PalmGrabRules.StripIrrelevant(ref grabbingFingers);
		RuntimeObject* L_17 = ___interactable1;
		NullCheck(L_17);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_18;
		L_18 = InterfaceFuncInvoker0< GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D >::Invoke(2 /* Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.Grab.IHandGrabInteractable::get_PalmGrabRules() */, IHandGrabInteractable_t5A13AA20D7149B38A9897B859E407F8FD05A9EA5_il2cpp_TypeInfo_var, L_17);
		V_3 = L_18;
		GrabbingRule_StripIrrelevant_m160B28EF238610D089F85F8CEF30B7E4DDB4B39A((&V_3), (&V_4), NULL);
		// fingers = fingers | grabbingFingers;
		int32_t L_19 = V_1;
		int32_t L_20 = V_4;
		V_1 = ((int32_t)((int32_t)L_19|(int32_t)L_20));
	}

IL_0058:
	{
		// return fingers;
		int32_t L_21 = V_1;
		return L_21;
	}
}
// System.Boolean Oculus.Interaction.Grab.HandGrab::SupportsPinch(Oculus.Interaction.Grab.IHandGrabInteractor,Oculus.Interaction.Grab.IHandGrabInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrab_SupportsPinch_m98F4E97BCA37CC8DB5BDC94733B0F22D221BFFE6 (RuntimeObject* ___interactor0, RuntimeObject* ___interactable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabInteractable_t5A13AA20D7149B38A9897B859E407F8FD05A9EA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SupportsPinch(interactor, interactable.SupportedGrabTypes);
		RuntimeObject* L_0 = ___interactor0;
		RuntimeObject* L_1 = ___interactable1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Oculus.Interaction.Grab.GrabTypeFlags Oculus.Interaction.Grab.IHandGrabInteractable::get_SupportedGrabTypes() */, IHandGrabInteractable_t5A13AA20D7149B38A9897B859E407F8FD05A9EA5_il2cpp_TypeInfo_var, L_1);
		bool L_3;
		L_3 = HandGrab_SupportsPinch_mBB1923135E088A09751D4BA2491183A5EF1D7430(L_0, L_2, NULL);
		return L_3;
	}
}
// System.Boolean Oculus.Interaction.Grab.HandGrab::SupportsPalm(Oculus.Interaction.Grab.IHandGrabInteractor,Oculus.Interaction.Grab.IHandGrabInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrab_SupportsPalm_mF10A7EEAF76DDE5D106858DAFD4891F1C45C9165 (RuntimeObject* ___interactor0, RuntimeObject* ___interactable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabInteractable_t5A13AA20D7149B38A9897B859E407F8FD05A9EA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SupportsPalm(interactor, interactable.SupportedGrabTypes);
		RuntimeObject* L_0 = ___interactor0;
		RuntimeObject* L_1 = ___interactable1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Oculus.Interaction.Grab.GrabTypeFlags Oculus.Interaction.Grab.IHandGrabInteractable::get_SupportedGrabTypes() */, IHandGrabInteractable_t5A13AA20D7149B38A9897B859E407F8FD05A9EA5_il2cpp_TypeInfo_var, L_1);
		bool L_3;
		L_3 = HandGrab_SupportsPalm_m50874A4E3BD7F16F48EAABF8486AD0EACC98E818(L_0, L_2, NULL);
		return L_3;
	}
}
// System.Boolean Oculus.Interaction.Grab.HandGrab::SupportsPinch(Oculus.Interaction.Grab.IHandGrabInteractor,Oculus.Interaction.Grab.GrabTypeFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrab_SupportsPinch_mBB1923135E088A09751D4BA2491183A5EF1D7430 (RuntimeObject* ___interactor0, int32_t ___grabTypes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabInteractor_t6BF20261AFC2BE665EF540E91CE8D6116645E50F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (interactor.SupportedGrabTypes & GrabTypeFlags.Pinch) != 0 &&
		//     (grabTypes & GrabTypeFlags.Pinch) != 0;
		RuntimeObject* L_0 = ___interactor0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Oculus.Interaction.Grab.GrabTypeFlags Oculus.Interaction.Grab.IHandGrabInteractor::get_SupportedGrabTypes() */, IHandGrabInteractor_t6BF20261AFC2BE665EF540E91CE8D6116645E50F_il2cpp_TypeInfo_var, L_0);
		if (!((int32_t)((int32_t)L_1&1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = ___grabTypes1;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_2&1))) <= ((uint32_t)0)))? 1 : 0);
	}

IL_0011:
	{
		return (bool)0;
	}
}
// System.Boolean Oculus.Interaction.Grab.HandGrab::SupportsPalm(Oculus.Interaction.Grab.IHandGrabInteractor,Oculus.Interaction.Grab.GrabTypeFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrab_SupportsPalm_m50874A4E3BD7F16F48EAABF8486AD0EACC98E818 (RuntimeObject* ___interactor0, int32_t ___grabTypes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabInteractor_t6BF20261AFC2BE665EF540E91CE8D6116645E50F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (interactor.SupportedGrabTypes & GrabTypeFlags.Palm) != 0 &&
		//     (grabTypes & GrabTypeFlags.Palm) != 0;
		RuntimeObject* L_0 = ___interactor0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Oculus.Interaction.Grab.GrabTypeFlags Oculus.Interaction.Grab.IHandGrabInteractor::get_SupportedGrabTypes() */, IHandGrabInteractor_t6BF20261AFC2BE665EF540E91CE8D6116645E50F_il2cpp_TypeInfo_var, L_0);
		if (!((int32_t)((int32_t)L_1&2)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = ___grabTypes1;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_2&2))) <= ((uint32_t)0)))? 1 : 0);
	}

IL_0011:
	{
		return (bool)0;
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
// System.Boolean Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::GetFingerIsGrabbing(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FingerPalmGrabAPI_GetFingerIsGrabbing_m3602DFE874E040B94A76DACD3CEAD4DC6FD789D3 (FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327* __this, int32_t ___finger0, const RuntimeMethod* method) 
{
	{
		// return _fingersGrabData[(int)finger].IsGrabbing;
		FingerGrabDataU5BU5D_t355B76E1A2C739371F924F6FDF480C4DD36249F9* L_0 = __this->____fingersGrabData_8;
		int32_t L_1 = ___finger0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		bool L_4 = L_3->___IsGrabbing_3;
		return L_4;
	}
}
// System.Boolean Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::GetFingerIsGrabbingChanged(Oculus.Interaction.Input.HandFinger,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FingerPalmGrabAPI_GetFingerIsGrabbingChanged_mB1DD336FBE4A6C9ECA31938D9DFF89A2603AA942 (FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327* __this, int32_t ___finger0, bool ___targetGrabState1, const RuntimeMethod* method) 
{
	{
		// return _fingersGrabData[(int)finger].IsGrabbingChanged &&
		//        _fingersGrabData[(int)finger].IsGrabbing == targetGrabState;
		FingerGrabDataU5BU5D_t355B76E1A2C739371F924F6FDF480C4DD36249F9* L_0 = __this->____fingersGrabData_8;
		int32_t L_1 = ___finger0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		bool L_4;
		L_4 = FingerGrabData_get_IsGrabbingChanged_m637945455FACC83F5D0507B69D4CE34AD9C9973A_inline(L_3, NULL);
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		FingerGrabDataU5BU5D_t355B76E1A2C739371F924F6FDF480C4DD36249F9* L_5 = __this->____fingersGrabData_8;
		int32_t L_6 = ___finger0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		bool L_9 = L_8->___IsGrabbing_3;
		bool L_10 = ___targetGrabState1;
		return (bool)((((int32_t)L_9) == ((int32_t)L_10))? 1 : 0);
	}

IL_0020:
	{
		return (bool)0;
	}
}
// System.Single Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::GetFingerGrabStrength(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FingerPalmGrabAPI_GetFingerGrabStrength_m906D9E4849EC5BC16E055BB1EEE56A127D71D956 (FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327* __this, int32_t ___finger0, const RuntimeMethod* method) 
{
	{
		// return _fingersGrabData[(int)finger].GrabStrength;
		FingerGrabDataU5BU5D_t355B76E1A2C739371F924F6FDF480C4DD36249F9* L_0 = __this->____fingersGrabData_8;
		int32_t L_1 = ___finger0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		float L_4 = L_3->___GrabStrength_2;
		return L_4;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::GetCenterOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FingerPalmGrabAPI_GetCenterOffset_m3E0878B6E613A7C0D103A4B1783B6021941E3170 (FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327* __this, const RuntimeMethod* method) 
{
	{
		// return _poseVolumeCenterOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____poseVolumeCenterOffset_0;
		return L_0;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::Update(Oculus.Interaction.Input.IHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPalmGrabAPI_Update_m1ABD787123D96AE064611D45D83AF8BB1DDD96AB (FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327* __this, RuntimeObject* ___hand0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// ClearState();
		FingerPalmGrabAPI_ClearState_mEE04361BF8998A37C95219F0150E4B9C64FB67B3(__this, NULL);
		// if (hand == null || !hand.IsTrackedDataValid)
		RuntimeObject* L_0 = ___hand0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_1 = ___hand0;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(17 /* System.Boolean Oculus.Interaction.Input.IHand::get_IsTrackedDataValid() */, IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var, L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}

IL_0011:
	{
		// return;
		return;
	}

IL_0012:
	{
		// UpdateVolumeCenter(hand);
		RuntimeObject* L_3 = ___hand0;
		FingerPalmGrabAPI_UpdateVolumeCenter_m718C6FCAAFFC26B3C6B54CCD86C222CD3B21C0EB(__this, L_3, NULL);
		// for (int i = 0; i < Constants.NUM_FINGERS; ++i)
		V_0 = 0;
		goto IL_004f;
	}

IL_001d:
	{
		// _fingersGrabData[i].UpdateTipValues(hand);
		FingerGrabDataU5BU5D_t355B76E1A2C739371F924F6FDF480C4DD36249F9* L_4 = __this->____fingersGrabData_8;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		RuntimeObject* L_8 = ___hand0;
		NullCheck(L_7);
		FingerGrabData_UpdateTipValues_m30A05F64BA568511CB0F549E2B7940ADEF78C95A(L_7, L_8, NULL);
		// _fingersGrabData[i].UpdateGrabStrength(_poseVolumeCenter);
		FingerGrabDataU5BU5D_t355B76E1A2C739371F924F6FDF480C4DD36249F9* L_9 = __this->____fingersGrabData_8;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->____poseVolumeCenter_1;
		NullCheck(L_12);
		FingerGrabData_UpdateGrabStrength_m2F1DBFC392D829D0EFD79733B2BE1020AE2C797F(L_12, L_13, NULL);
		// _fingersGrabData[i].UpdateIsGrabbing();
		FingerGrabDataU5BU5D_t355B76E1A2C739371F924F6FDF480C4DD36249F9* L_14 = __this->____fingersGrabData_8;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		FingerGrabData_UpdateIsGrabbing_mE4B4B11CF2C24890A759B31FCB90C50BCC2126E2(L_17, NULL);
		// for (int i = 0; i < Constants.NUM_FINGERS; ++i)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_004f:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; ++i)
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) < ((int32_t)5)))
		{
			goto IL_001d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::ClearState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPalmGrabAPI_ClearState_mEE04361BF8998A37C95219F0150E4B9C64FB67B3 (FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; ++i)
		V_0 = 0;
		goto IL_0015;
	}

IL_0004:
	{
		// _fingersGrabData[i].ClearState();
		FingerGrabDataU5BU5D_t355B76E1A2C739371F924F6FDF480C4DD36249F9* L_0 = __this->____fingersGrabData_8;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		FingerGrabData_ClearState_mC17219861E9F53E477E73D7CECE4664A2406A976(L_3, NULL);
		// for (int i = 0; i < Constants.NUM_FINGERS; ++i)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0015:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; ++i)
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)5)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::UpdateVolumeCenter(Oculus.Interaction.Input.IHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPalmGrabAPI_UpdateVolumeCenter_m718C6FCAAFFC26B3C6B54CCD86C222CD3B21C0EB (FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327* __this, RuntimeObject* ___hand0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327* G_B4_0 = NULL;
	FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327* G_B3_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327* G_B5_1 = NULL;
	{
		// if (!hand.GetJointPoseFromWrist(HandJointId.HandWristRoot, out var wristPose))
		RuntimeObject* L_0 = ___hand0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(12 /* System.Boolean Oculus.Interaction.Input.IHand::GetJointPoseFromWrist(Oculus.Interaction.Input.HandJointId,UnityEngine.Pose&) */, IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var, L_0, 0, (&V_0));
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		// return;
		return;
	}

IL_000c:
	{
		// Matrix4x4 wristPoseMat = Matrix4x4.TRS(wristPose.position, wristPose.rotation, Vector3.one);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = L_2.___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_4 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = L_4.___rotation_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7;
		L_7 = Matrix4x4_TRS_mFEBA6926DB0044B96EF0CE98F30FEE7596820680(L_3, L_5, L_6, NULL);
		V_1 = L_7;
		// _poseVolumeCenterOffset = hand.Handedness == Handedness.Left
		//     ? POSE_VOLUME_OFFSET_LEFT
		//     : POSE_VOLUME_OFFSET_RIGHT;
		RuntimeObject* L_8 = ___hand0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Oculus.Interaction.Input.Handedness Oculus.Interaction.Input.IHand::get_Handedness() */, IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var, L_8);
		G_B3_0 = __this;
		if (!L_9)
		{
			G_B4_0 = __this;
			goto IL_0033;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ((FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_StaticFields*)il2cpp_codegen_static_fields_for(FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_il2cpp_TypeInfo_var))->___POSE_VOLUME_OFFSET_RIGHT_6;
		G_B5_0 = L_10;
		G_B5_1 = G_B3_0;
		goto IL_0038;
	}

IL_0033:
	{
		il2cpp_codegen_runtime_class_init_inline(FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ((FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_StaticFields*)il2cpp_codegen_static_fields_for(FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_il2cpp_TypeInfo_var))->___POSE_VOLUME_OFFSET_LEFT_7;
		G_B5_0 = L_11;
		G_B5_1 = G_B4_0;
	}

IL_0038:
	{
		NullCheck(G_B5_1);
		G_B5_1->____poseVolumeCenterOffset_0 = G_B5_0;
		// _poseVolumeCenter = wristPose.position +
		//                     wristPoseMat.MultiplyVector(_poseVolumeCenterOffset);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_12 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12.___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->____poseVolumeCenterOffset_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937((&V_1), L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_13, L_15, NULL);
		__this->____poseVolumeCenter_1 = L_16;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPalmGrabAPI__ctor_mC033897D9E80D5FC6BF9BE712495460B91A7CD99 (FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingerGrabDataU5BU5D_t355B76E1A2C739371F924F6FDF480C4DD36249F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 _poseVolumeCenterOffset = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->____poseVolumeCenterOffset_0 = L_0;
		// private Vector3 _poseVolumeCenter = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->____poseVolumeCenter_1 = L_1;
		// private readonly FingerGrabData[] _fingersGrabData = {
		//     new FingerGrabData(HandFinger.Thumb),
		//     new FingerGrabData(HandFinger.Index),
		//     new FingerGrabData(HandFinger.Middle),
		//     new FingerGrabData(HandFinger.Ring),
		//     new FingerGrabData(HandFinger.Pinky)
		// };
		FingerGrabDataU5BU5D_t355B76E1A2C739371F924F6FDF480C4DD36249F9* L_2 = (FingerGrabDataU5BU5D_t355B76E1A2C739371F924F6FDF480C4DD36249F9*)(FingerGrabDataU5BU5D_t355B76E1A2C739371F924F6FDF480C4DD36249F9*)SZArrayNew(FingerGrabDataU5BU5D_t355B76E1A2C739371F924F6FDF480C4DD36249F9_il2cpp_TypeInfo_var, (uint32_t)5);
		FingerGrabDataU5BU5D_t355B76E1A2C739371F924F6FDF480C4DD36249F9* L_3 = L_2;
		FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D* L_4 = (FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D*)il2cpp_codegen_object_new(FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		FingerGrabData__ctor_m5D6D85D51D8448D3C284D6DDBC79AB97B0BF065D(L_4, 0, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D*)L_4);
		FingerGrabDataU5BU5D_t355B76E1A2C739371F924F6FDF480C4DD36249F9* L_5 = L_3;
		FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D* L_6 = (FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D*)il2cpp_codegen_object_new(FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		FingerGrabData__ctor_m5D6D85D51D8448D3C284D6DDBC79AB97B0BF065D(L_6, 1, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D*)L_6);
		FingerGrabDataU5BU5D_t355B76E1A2C739371F924F6FDF480C4DD36249F9* L_7 = L_5;
		FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D* L_8 = (FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D*)il2cpp_codegen_object_new(FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		FingerGrabData__ctor_m5D6D85D51D8448D3C284D6DDBC79AB97B0BF065D(L_8, 2, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D*)L_8);
		FingerGrabDataU5BU5D_t355B76E1A2C739371F924F6FDF480C4DD36249F9* L_9 = L_7;
		FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D* L_10 = (FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D*)il2cpp_codegen_object_new(FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		FingerGrabData__ctor_m5D6D85D51D8448D3C284D6DDBC79AB97B0BF065D(L_10, 3, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D*)L_10);
		FingerGrabDataU5BU5D_t355B76E1A2C739371F924F6FDF480C4DD36249F9* L_11 = L_9;
		FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D* L_12 = (FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D*)il2cpp_codegen_object_new(FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		FingerGrabData__ctor_m5D6D85D51D8448D3C284D6DDBC79AB97B0BF065D(L_12, 4, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D*)L_12);
		__this->____fingersGrabData_8 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fingersGrabData_8), (void*)L_11);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPalmGrabAPI__cctor_mB6A4AC888AE65840DFA33CD295A8AD57E547C339 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly float START_THRESHOLD = 0.75f;
		((FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_StaticFields*)il2cpp_codegen_static_fields_for(FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_il2cpp_TypeInfo_var))->___START_THRESHOLD_2 = (0.75f);
		// private static readonly float RELEASE_THRESHOLD = 0.25f;
		((FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_StaticFields*)il2cpp_codegen_static_fields_for(FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_il2cpp_TypeInfo_var))->___RELEASE_THRESHOLD_3 = (0.25f);
		// private static readonly float FINGER_TIP_RADIUS = 0.01f;
		((FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_StaticFields*)il2cpp_codegen_static_fields_for(FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_il2cpp_TypeInfo_var))->___FINGER_TIP_RADIUS_4 = (0.00999999978f);
		// private static readonly float POSE_VOLUME_RADIUS = 0.05f;
		((FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_StaticFields*)il2cpp_codegen_static_fields_for(FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_il2cpp_TypeInfo_var))->___POSE_VOLUME_RADIUS_5 = (0.0500000007f);
		// private static readonly Vector3 POSE_VOLUME_OFFSET_RIGHT = new Vector3(0.07f, -0.03f, 0.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0700000003f), (-0.0299999993f), (0.0f), /*hidden argument*/NULL);
		((FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_StaticFields*)il2cpp_codegen_static_fields_for(FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_il2cpp_TypeInfo_var))->___POSE_VOLUME_OFFSET_RIGHT_6 = L_0;
		// private static readonly Vector3 POSE_VOLUME_OFFSET_LEFT = new Vector3(-0.07f, 0.03f, 0.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (-0.0700000003f), (0.0299999993f), (0.0f), /*hidden argument*/NULL);
		((FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_StaticFields*)il2cpp_codegen_static_fields_for(FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_il2cpp_TypeInfo_var))->___POSE_VOLUME_OFFSET_LEFT_7 = L_1;
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
// System.Boolean Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/FingerGrabData::get_IsGrabbingChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FingerGrabData_get_IsGrabbingChanged_m637945455FACC83F5D0507B69D4CE34AD9C9973A (FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsGrabbingChanged { get; private set; }
		bool L_0 = __this->___U3CIsGrabbingChangedU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/FingerGrabData::set_IsGrabbingChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerGrabData_set_IsGrabbingChanged_m6476DBC59E4B5EC3BD9BCB9DF9D4F22DFE5D3C28 (FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsGrabbingChanged { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsGrabbingChangedU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/FingerGrabData::.ctor(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerGrabData__ctor_m5D6D85D51D8448D3C284D6DDBC79AB97B0BF065D (FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D* __this, int32_t ___fingerId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandJointUtils_t398E7EA5CA755A046BC60F9C5F8A144650D37DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public FingerGrabData(HandFinger fingerId)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _tipId = HandJointUtils.GetHandFingerTip(fingerId);
		int32_t L_0 = ___fingerId0;
		il2cpp_codegen_runtime_class_init_inline(HandJointUtils_t398E7EA5CA755A046BC60F9C5F8A144650D37DF7_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HandJointUtils_GetHandFingerTip_m4E1A205E74BA3C398144D7EDD5E940C808929DF0(L_0, NULL);
		__this->____tipId_0 = L_1;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/FingerGrabData::UpdateTipValues(Oculus.Interaction.Input.IHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerGrabData_UpdateTipValues_m30A05F64BA568511CB0F549E2B7940ADEF78C95A (FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D* __this, RuntimeObject* ___hand0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (hand.GetJointPoseFromWrist(_tipId, out Pose pose))
		RuntimeObject* L_0 = ___hand0;
		int32_t L_1 = __this->____tipId_0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(12 /* System.Boolean Oculus.Interaction.Input.IHand::GetJointPoseFromWrist(Oculus.Interaction.Input.HandJointId,UnityEngine.Pose&) */, IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var, L_0, L_1, (&V_0));
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// _tipPosition = pose.position;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3.___position_0;
		__this->____tipPosition_1 = L_4;
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/FingerGrabData::UpdateGrabStrength(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerGrabData_UpdateGrabStrength_m2F1DBFC392D829D0EFD79733B2BE1020AE2C797F (FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___poseVolumeCenter0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	{
		// float outsidePoseVolumeRadius = POSE_VOLUME_RADIUS + FINGER_TIP_RADIUS;
		il2cpp_codegen_runtime_class_init_inline(FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_il2cpp_TypeInfo_var);
		float L_0 = ((FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_StaticFields*)il2cpp_codegen_static_fields_for(FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_il2cpp_TypeInfo_var))->___POSE_VOLUME_RADIUS_5;
		float L_1 = ((FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_StaticFields*)il2cpp_codegen_static_fields_for(FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_il2cpp_TypeInfo_var))->___FINGER_TIP_RADIUS_4;
		// float insidePoseVolumeRadius = POSE_VOLUME_RADIUS - FINGER_TIP_RADIUS;
		float L_2 = ((FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_StaticFields*)il2cpp_codegen_static_fields_for(FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_il2cpp_TypeInfo_var))->___POSE_VOLUME_RADIUS_5;
		float L_3 = ((FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_StaticFields*)il2cpp_codegen_static_fields_for(FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_il2cpp_TypeInfo_var))->___FINGER_TIP_RADIUS_4;
		V_0 = ((float)il2cpp_codegen_subtract(L_2, L_3));
		// float sqrOutsidePoseVolume = outsidePoseVolumeRadius * outsidePoseVolumeRadius;
		float L_4 = ((float)il2cpp_codegen_add(L_0, L_1));
		V_1 = ((float)il2cpp_codegen_multiply(L_4, L_4));
		// float sqrInsidePoseVolume = insidePoseVolumeRadius * insidePoseVolumeRadius;
		float L_5 = V_0;
		float L_6 = V_0;
		V_2 = ((float)il2cpp_codegen_multiply(L_5, L_6));
		// float sqrDist = (poseVolumeCenter - _tipPosition).sqrMagnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___poseVolumeCenter0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->____tipPosition_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_7, L_8, NULL);
		V_4 = L_9;
		float L_10;
		L_10 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_4), NULL);
		V_3 = L_10;
		// if (sqrDist >= sqrOutsidePoseVolume)
		float L_11 = V_3;
		float L_12 = V_1;
		if ((!(((float)L_11) >= ((float)L_12))))
		{
			goto IL_0044;
		}
	}
	{
		// GrabStrength = 0.0f;
		__this->___GrabStrength_2 = (0.0f);
		return;
	}

IL_0044:
	{
		// else if (sqrDist <= sqrInsidePoseVolume)
		float L_13 = V_3;
		float L_14 = V_2;
		if ((!(((float)L_13) <= ((float)L_14))))
		{
			goto IL_0054;
		}
	}
	{
		// GrabStrength = 1.0f;
		__this->___GrabStrength_2 = (1.0f);
		return;
	}

IL_0054:
	{
		// float distance = Mathf.Sqrt(sqrDist);
		float L_15 = V_3;
		float L_16;
		L_16 = sqrtf(L_15);
		V_5 = L_16;
		// GrabStrength = 1.0f - Mathf.Clamp01(
		//     (distance - insidePoseVolumeRadius) / (2.0f * FINGER_TIP_RADIUS));
		float L_17 = V_5;
		float L_18 = V_0;
		il2cpp_codegen_runtime_class_init_inline(FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_il2cpp_TypeInfo_var);
		float L_19 = ((FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_StaticFields*)il2cpp_codegen_static_fields_for(FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_il2cpp_TypeInfo_var))->___FINGER_TIP_RADIUS_4;
		float L_20;
		L_20 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(((float)(((float)il2cpp_codegen_subtract(L_17, L_18))/((float)il2cpp_codegen_multiply((2.0f), L_19)))), NULL);
		__this->___GrabStrength_2 = ((float)il2cpp_codegen_subtract((1.0f), L_20));
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/FingerGrabData::UpdateIsGrabbing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerGrabData_UpdateIsGrabbing_mE4B4B11CF2C24890A759B31FCB90C50BCC2126E2 (FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GrabStrength > START_THRESHOLD)
		float L_0 = __this->___GrabStrength_2;
		il2cpp_codegen_runtime_class_init_inline(FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_il2cpp_TypeInfo_var);
		float L_1 = ((FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_StaticFields*)il2cpp_codegen_static_fields_for(FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_il2cpp_TypeInfo_var))->___START_THRESHOLD_2;
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0024;
		}
	}
	{
		// if (!IsGrabbing)
		bool L_2 = __this->___IsGrabbing_3;
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		// IsGrabbing = true;
		__this->___IsGrabbing_3 = (bool)1;
		// IsGrabbingChanged = true;
		FingerGrabData_set_IsGrabbingChanged_m6476DBC59E4B5EC3BD9BCB9DF9D4F22DFE5D3C28_inline(__this, (bool)1, NULL);
	}

IL_0023:
	{
		// return;
		return;
	}

IL_0024:
	{
		// if (GrabStrength < RELEASE_THRESHOLD)
		float L_3 = __this->___GrabStrength_2;
		il2cpp_codegen_runtime_class_init_inline(FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_il2cpp_TypeInfo_var);
		float L_4 = ((FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_StaticFields*)il2cpp_codegen_static_fields_for(FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_il2cpp_TypeInfo_var))->___RELEASE_THRESHOLD_3;
		if ((!(((float)L_3) < ((float)L_4))))
		{
			goto IL_0047;
		}
	}
	{
		// if (IsGrabbing)
		bool L_5 = __this->___IsGrabbing_3;
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		// IsGrabbing = false;
		__this->___IsGrabbing_3 = (bool)0;
		// IsGrabbingChanged = true;
		FingerGrabData_set_IsGrabbingChanged_m6476DBC59E4B5EC3BD9BCB9DF9D4F22DFE5D3C28_inline(__this, (bool)1, NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/FingerGrabData::ClearState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerGrabData_ClearState_mC17219861E9F53E477E73D7CECE4664A2406A976 (FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D* __this, const RuntimeMethod* method) 
{
	{
		// IsGrabbingChanged = false;
		FingerGrabData_set_IsGrabbingChanged_m6476DBC59E4B5EC3BD9BCB9DF9D4F22DFE5D3C28_inline(__this, (bool)0, NULL);
		// }
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
// System.Single Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::get_DistanceStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FingerPinchGrabAPI_get_DistanceStart_m9537C5FAAEF7A704779CC31CFBC8C62F18BC7BD7 (FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832* __this, const RuntimeMethod* method) 
{
	{
		// private float DistanceStart => _isPinchVisibilityGood ? PINCH_HQ_DISTANCE_START : PINCH_DISTANCE_START;
		bool L_0 = __this->____isPinchVisibilityGood_0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		return (0.0299999993f);
	}

IL_000e:
	{
		return (0.0160000008f);
	}
}
// System.Single Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::get_DistanceStopMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FingerPinchGrabAPI_get_DistanceStopMax_m96AA0C888EA3CA230805E41D61872E55F1491D29 (FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832* __this, const RuntimeMethod* method) 
{
	{
		// private float DistanceStopMax => _isPinchVisibilityGood ? PINCH_HQ_DISTANCE_STOP_MAX : PINCH_DISTANCE_STOP_MAX;
		bool L_0 = __this->____isPinchVisibilityGood_0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		return (0.100000001f);
	}

IL_000e:
	{
		return (0.100000001f);
	}
}
// System.Single Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::get_DistanceStopOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FingerPinchGrabAPI_get_DistanceStopOffset_m6A1D4596FD2B7F72299A28B982DC1606F01BA9C2 (FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832* __this, const RuntimeMethod* method) 
{
	{
		// private float DistanceStopOffset => _isPinchVisibilityGood ? PINCH_HQ_DISTANCE_STOP_OFFSET : PINCH_DISTANCE_STOP_OFFSET;
		bool L_0 = __this->____isPinchVisibilityGood_0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		return (0.0399999991f);
	}

IL_000e:
	{
		return (0.0160000008f);
	}
}
// System.Boolean Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::GetFingerIsGrabbing(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FingerPinchGrabAPI_GetFingerIsGrabbing_m0020BB2B19FDEB907D52BB3FEC56A11057A950C0 (FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832* __this, int32_t ___finger0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (finger == HandFinger.Thumb)
		int32_t L_0 = ___finger0;
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		// for (int i = 1; i < Constants.NUM_FINGERS; ++i)
		V_0 = 1;
		goto IL_001c;
	}

IL_0007:
	{
		// if (_fingersPinchData[i].IsPinching)
		FingerPinchDataU5BU5D_t467FB074609811D7B32AF170A4D7E4F52FF6E708* L_1 = __this->____fingersPinchData_9;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		bool L_5 = L_4->___IsPinching_5;
		if (!L_5)
		{
			goto IL_0018;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0018:
	{
		// for (int i = 1; i < Constants.NUM_FINGERS; ++i)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001c:
	{
		// for (int i = 1; i < Constants.NUM_FINGERS; ++i)
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)5)))
		{
			goto IL_0007;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0022:
	{
		// return _fingersPinchData[(int)finger].IsPinching;
		FingerPinchDataU5BU5D_t467FB074609811D7B32AF170A4D7E4F52FF6E708* L_8 = __this->____fingersPinchData_9;
		int32_t L_9 = ___finger0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		bool L_12 = L_11->___IsPinching_5;
		return L_12;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::GetCenterOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FingerPinchGrabAPI_GetCenterOffset_m8D6D30B62E0D11CAA37A6B4DD226E502F0BC777B (FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// float maxStrength = float.NegativeInfinity;
		V_0 = (-std::numeric_limits<float>::infinity());
		// Vector3 thumbTip = _fingersPinchData[0].TipPosition;
		FingerPinchDataU5BU5D_t467FB074609811D7B32AF170A4D7E4F52FF6E708* L_0 = __this->____fingersPinchData_9;
		NullCheck(L_0);
		int32_t L_1 = 0;
		FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = FingerPinchData_get_TipPosition_m58FA8A0B4731588698E3A5CDF80267150D195F4E_inline(L_2, NULL);
		V_1 = L_3;
		// Vector3 center = thumbTip;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_1;
		V_2 = L_4;
		// for (int i = 1; i < Constants.NUM_FINGERS; ++i)
		V_3 = 1;
		goto IL_0057;
	}

IL_001a:
	{
		// float strength = _fingersPinchData[i].PinchStrength;
		FingerPinchDataU5BU5D_t467FB074609811D7B32AF170A4D7E4F52FF6E708* L_5 = __this->____fingersPinchData_9;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		float L_9 = L_8->___PinchStrength_4;
		V_4 = L_9;
		// if (strength > maxStrength)
		float L_10 = V_4;
		float L_11 = V_0;
		if ((!(((float)L_10) > ((float)L_11))))
		{
			goto IL_0053;
		}
	}
	{
		// maxStrength = strength;
		float L_12 = V_4;
		V_0 = L_12;
		// Vector3 fingerTip = _fingersPinchData[i].TipPosition;
		FingerPinchDataU5BU5D_t467FB074609811D7B32AF170A4D7E4F52FF6E708* L_13 = __this->____fingersPinchData_9;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = FingerPinchData_get_TipPosition_m58FA8A0B4731588698E3A5CDF80267150D195F4E_inline(L_16, NULL);
		V_5 = L_17;
		// center = (thumbTip + fingerTip) * 0.5f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_18, L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_20, (0.5f), NULL);
		V_2 = L_21;
	}

IL_0053:
	{
		// for (int i = 1; i < Constants.NUM_FINGERS; ++i)
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0057:
	{
		// for (int i = 1; i < Constants.NUM_FINGERS; ++i)
		int32_t L_23 = V_3;
		if ((((int32_t)L_23) < ((int32_t)5)))
		{
			goto IL_001a;
		}
	}
	{
		// return center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_2;
		return L_24;
	}
}
// System.Boolean Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::GetFingerIsGrabbingChanged(Oculus.Interaction.Input.HandFinger,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FingerPinchGrabAPI_GetFingerIsGrabbingChanged_mCABCED3CEFEB9EEF9291CF59034B8C82D6DE0749 (FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832* __this, int32_t ___finger0, bool ___targetPinchState1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// if (finger == HandFinger.Thumb)
		int32_t L_0 = ___finger0;
		if (L_0)
		{
			goto IL_0062;
		}
	}
	{
		// bool pinching = GetFingerIsGrabbing(finger);
		int32_t L_1 = ___finger0;
		bool L_2;
		L_2 = FingerPinchGrabAPI_GetFingerIsGrabbing_m0020BB2B19FDEB907D52BB3FEC56A11057A950C0(__this, L_1, NULL);
		V_0 = L_2;
		// if (pinching != targetPinchState)
		bool L_3 = V_0;
		bool L_4 = ___targetPinchState1;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0011;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0011:
	{
		// if (pinching)
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		// for (int i = 1; i < Constants.NUM_FINGERS; ++i)
		V_1 = 1;
		goto IL_003d;
	}

IL_0018:
	{
		// if (_fingersPinchData[i].IsPinching == pinching &&
		//     !_fingersPinchData[i].IsPinchingChanged)
		FingerPinchDataU5BU5D_t467FB074609811D7B32AF170A4D7E4F52FF6E708* L_6 = __this->____fingersPinchData_9;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		bool L_10 = L_9->___IsPinching_5;
		bool L_11 = V_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0039;
		}
	}
	{
		FingerPinchDataU5BU5D_t467FB074609811D7B32AF170A4D7E4F52FF6E708* L_12 = __this->____fingersPinchData_9;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		bool L_16;
		L_16 = FingerPinchData_get_IsPinchingChanged_mC7CD68EA612DC57CB0920BC1A1151AFBBDC7B859_inline(L_15, NULL);
		if (L_16)
		{
			goto IL_0039;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0039:
	{
		// for (int i = 1; i < Constants.NUM_FINGERS; ++i)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_003d:
	{
		// for (int i = 1; i < Constants.NUM_FINGERS; ++i)
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) < ((int32_t)5)))
		{
			goto IL_0018;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0043:
	{
		// for (int i = 1; i < Constants.NUM_FINGERS; ++i)
		V_2 = 1;
		goto IL_005c;
	}

IL_0047:
	{
		// if (_fingersPinchData[i].IsPinchingChanged)
		FingerPinchDataU5BU5D_t467FB074609811D7B32AF170A4D7E4F52FF6E708* L_19 = __this->____fingersPinchData_9;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		bool L_23;
		L_23 = FingerPinchData_get_IsPinchingChanged_mC7CD68EA612DC57CB0920BC1A1151AFBBDC7B859_inline(L_22, NULL);
		if (!L_23)
		{
			goto IL_0058;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0058:
	{
		// for (int i = 1; i < Constants.NUM_FINGERS; ++i)
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_005c:
	{
		// for (int i = 1; i < Constants.NUM_FINGERS; ++i)
		int32_t L_25 = V_2;
		if ((((int32_t)L_25) < ((int32_t)5)))
		{
			goto IL_0047;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0062:
	{
		// return _fingersPinchData[(int)finger].IsPinchingChanged &&
		//        _fingersPinchData[(int)finger].IsPinching == targetPinchState;
		FingerPinchDataU5BU5D_t467FB074609811D7B32AF170A4D7E4F52FF6E708* L_26 = __this->____fingersPinchData_9;
		int32_t L_27 = ___finger0;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_29);
		bool L_30;
		L_30 = FingerPinchData_get_IsPinchingChanged_mC7CD68EA612DC57CB0920BC1A1151AFBBDC7B859_inline(L_29, NULL);
		if (!L_30)
		{
			goto IL_0082;
		}
	}
	{
		FingerPinchDataU5BU5D_t467FB074609811D7B32AF170A4D7E4F52FF6E708* L_31 = __this->____fingersPinchData_9;
		int32_t L_32 = ___finger0;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_34);
		bool L_35 = L_34->___IsPinching_5;
		bool L_36 = ___targetPinchState1;
		return (bool)((((int32_t)L_35) == ((int32_t)L_36))? 1 : 0);
	}

IL_0082:
	{
		return (bool)0;
	}
}
// System.Single Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::GetFingerGrabStrength(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FingerPinchGrabAPI_GetFingerGrabStrength_m700A89DD27792862465D5154F3C7D9B5D4B361AE (FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832* __this, int32_t ___finger0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		// if (finger == HandFinger.Thumb)
		int32_t L_0 = ___finger0;
		if (L_0)
		{
			goto IL_002b;
		}
	}
	{
		// float max = 0.0f;
		V_0 = (0.0f);
		// for (int i = 1; i < Constants.NUM_FINGERS; ++i)
		V_1 = 1;
		goto IL_0025;
	}

IL_000d:
	{
		// max = Mathf.Max(max, _fingersPinchData[i].PinchStrength);
		float L_1 = V_0;
		FingerPinchDataU5BU5D_t467FB074609811D7B32AF170A4D7E4F52FF6E708* L_2 = __this->____fingersPinchData_9;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		float L_6 = L_5->___PinchStrength_4;
		float L_7;
		L_7 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_1, L_6, NULL);
		V_0 = L_7;
		// for (int i = 1; i < Constants.NUM_FINGERS; ++i)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0025:
	{
		// for (int i = 1; i < Constants.NUM_FINGERS; ++i)
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) < ((int32_t)5)))
		{
			goto IL_000d;
		}
	}
	{
		// return max;
		float L_10 = V_0;
		return L_10;
	}

IL_002b:
	{
		// return _fingersPinchData[(int)finger].PinchStrength;
		FingerPinchDataU5BU5D_t467FB074609811D7B32AF170A4D7E4F52FF6E708* L_11 = __this->____fingersPinchData_9;
		int32_t L_12 = ___finger0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		float L_15 = L_14->___PinchStrength_4;
		return L_15;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::Update(Oculus.Interaction.Input.IHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchGrabAPI_Update_m9E946B09C83DF6202583529837CFCADC62F7BAAB (FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832* __this, RuntimeObject* ___hand0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		// ClearState();
		FingerPinchGrabAPI_ClearState_m2D00129DA613AC324C38152F291197D4B96C7AD4(__this, NULL);
		// _isPinchVisibilityGood = PinchHasGoodVisibility(hand);
		RuntimeObject* L_0 = ___hand0;
		bool L_1;
		L_1 = FingerPinchGrabAPI_PinchHasGoodVisibility_m3EA4ECD3418C6D03E701A3C33112EA8D1FBD4AEC(__this, L_0, NULL);
		__this->____isPinchVisibilityGood_0 = L_1;
		// for (int i = 0; i < Constants.NUM_FINGERS; ++i)
		V_0 = 0;
		goto IL_0029;
	}

IL_0017:
	{
		// _fingersPinchData[i].UpdateTipPosition(hand);
		FingerPinchDataU5BU5D_t467FB074609811D7B32AF170A4D7E4F52FF6E708* L_2 = __this->____fingersPinchData_9;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		RuntimeObject* L_6 = ___hand0;
		NullCheck(L_5);
		FingerPinchData_UpdateTipPosition_m9E17EB70A89EE6706D81DC312DCB4D4E1C3ADF6A(L_5, L_6, NULL);
		// for (int i = 0; i < Constants.NUM_FINGERS; ++i)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0029:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; ++i)
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)5)))
		{
			goto IL_0017;
		}
	}
	{
		// for (int i = 1; i < Constants.NUM_FINGERS; ++i)
		V_1 = 1;
		goto IL_009e;
	}

IL_0031:
	{
		// float distance = GetClosestDistanceToThumb(hand, _fingersPinchData[i].TipPosition);
		RuntimeObject* L_9 = ___hand0;
		FingerPinchDataU5BU5D_t467FB074609811D7B32AF170A4D7E4F52FF6E708* L_10 = __this->____fingersPinchData_9;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = FingerPinchData_get_TipPosition_m58FA8A0B4731588698E3A5CDF80267150D195F4E_inline(L_13, NULL);
		float L_15;
		L_15 = FingerPinchGrabAPI_GetClosestDistanceToThumb_m7F8A0C5AACA9F8C0D804A2D4FC750B7B478B9891(__this, L_9, L_14, NULL);
		V_2 = L_15;
		// _fingersPinchData[i].UpdateIsPinching(distance,
		//     DistanceStart, DistanceStopOffset, DistanceStopMax);
		FingerPinchDataU5BU5D_t467FB074609811D7B32AF170A4D7E4F52FF6E708* L_16 = __this->____fingersPinchData_9;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		float L_20 = V_2;
		float L_21;
		L_21 = FingerPinchGrabAPI_get_DistanceStart_m9537C5FAAEF7A704779CC31CFBC8C62F18BC7BD7(__this, NULL);
		float L_22;
		L_22 = FingerPinchGrabAPI_get_DistanceStopOffset_m6A1D4596FD2B7F72299A28B982DC1606F01BA9C2(__this, NULL);
		float L_23;
		L_23 = FingerPinchGrabAPI_get_DistanceStopMax_m96AA0C888EA3CA230805E41D61872E55F1491D29(__this, NULL);
		NullCheck(L_19);
		FingerPinchData_UpdateIsPinching_mE099354AFD057B7ED02631AC1ABB9A412A3F2A1E(L_19, L_20, L_21, L_22, L_23, NULL);
		// float pinchPercent = (distance - DistanceStart)
		//                                  (DistanceStopMax - DistanceStart);
		float L_24 = V_2;
		float L_25;
		L_25 = FingerPinchGrabAPI_get_DistanceStart_m9537C5FAAEF7A704779CC31CFBC8C62F18BC7BD7(__this, NULL);
		float L_26;
		L_26 = FingerPinchGrabAPI_get_DistanceStopMax_m96AA0C888EA3CA230805E41D61872E55F1491D29(__this, NULL);
		float L_27;
		L_27 = FingerPinchGrabAPI_get_DistanceStart_m9537C5FAAEF7A704779CC31CFBC8C62F18BC7BD7(__this, NULL);
		V_3 = ((float)(((float)il2cpp_codegen_subtract(L_24, L_25))/((float)il2cpp_codegen_subtract(L_26, L_27))));
		// float pinchStrength = 1f - Mathf.Clamp01(pinchPercent);
		float L_28 = V_3;
		float L_29;
		L_29 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_28, NULL);
		V_4 = ((float)il2cpp_codegen_subtract((1.0f), L_29));
		// _fingersPinchData[i].PinchStrength = pinchStrength;
		FingerPinchDataU5BU5D_t467FB074609811D7B32AF170A4D7E4F52FF6E708* L_30 = __this->____fingersPinchData_9;
		int32_t L_31 = V_1;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		float L_34 = V_4;
		NullCheck(L_33);
		L_33->___PinchStrength_4 = L_34;
		// for (int i = 1; i < Constants.NUM_FINGERS; ++i)
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_009e:
	{
		// for (int i = 1; i < Constants.NUM_FINGERS; ++i)
		int32_t L_36 = V_1;
		if ((((int32_t)L_36) < ((int32_t)5)))
		{
			goto IL_0031;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::ClearState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchGrabAPI_ClearState_m2D00129DA613AC324C38152F291197D4B96C7AD4 (FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; ++i)
		V_0 = 0;
		goto IL_0015;
	}

IL_0004:
	{
		// _fingersPinchData[i].ClearState();
		FingerPinchDataU5BU5D_t467FB074609811D7B32AF170A4D7E4F52FF6E708* L_0 = __this->____fingersPinchData_9;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		FingerPinchData_ClearState_mFA67B576B3E4E5749E68C821D5494B183058FFA2(L_3, NULL);
		// for (int i = 0; i < Constants.NUM_FINGERS; ++i)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0015:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; ++i)
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)5)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Single Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::GetClosestDistanceToThumb(Oculus.Interaction.Input.IHand,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FingerPinchGrabAPI_GetClosestDistanceToThumb_m7F8A0C5AACA9F8C0D804A2D4FC750B7B478B9891 (FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832* __this, RuntimeObject* ___hand0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// float minDistance = float.MaxValue;
		V_0 = ((std::numeric_limits<float>::max)());
		// for (int i = 0; i < thumbJointList.Length - 1; i++)
		V_1 = 0;
		goto IL_005a;
	}

IL_000a:
	{
		// if (!hand.GetJointPoseFromWrist(thumbJointList[i], out Pose pose0))
		RuntimeObject* L_0 = ___hand0;
		HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587* L_1 = __this->___thumbJointList_8;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (int32_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_0);
		bool L_5;
		L_5 = InterfaceFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(12 /* System.Boolean Oculus.Interaction.Input.IHand::GetJointPoseFromWrist(Oculus.Interaction.Input.HandJointId,UnityEngine.Pose&) */, IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var, L_0, L_4, (&V_2));
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		// return float.MaxValue;
		return ((std::numeric_limits<float>::max)());
	}

IL_0022:
	{
		// if (!hand.GetJointPoseFromWrist(thumbJointList[i + 1], out Pose pose1))
		RuntimeObject* L_6 = ___hand0;
		HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587* L_7 = __this->___thumbJointList_8;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_10 = (int32_t)(L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_6);
		bool L_11;
		L_11 = InterfaceFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(12 /* System.Boolean Oculus.Interaction.Input.IHand::GetJointPoseFromWrist(Oculus.Interaction.Input.HandJointId,UnityEngine.Pose&) */, IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var, L_6, L_10, (&V_3));
		if (L_11)
		{
			goto IL_003c;
		}
	}
	{
		// return float.MaxValue;
		return ((std::numeric_limits<float>::max)());
	}

IL_003c:
	{
		// minDistance = Mathf.Min(minDistance,
		//     ClosestDistanceToLineSegment(position, pose0.position, pose1.position));
		float L_12 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___position1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_14 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = L_14.___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_16 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = L_16.___position_0;
		float L_18;
		L_18 = FingerPinchGrabAPI_ClosestDistanceToLineSegment_mE32D036FBA8AA403FD30278060975D08B845D7FE(__this, L_13, L_15, L_17, NULL);
		float L_19;
		L_19 = Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline(L_12, L_18, NULL);
		V_0 = L_19;
		// for (int i = 0; i < thumbJointList.Length - 1; i++)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005a:
	{
		// for (int i = 0; i < thumbJointList.Length - 1; i++)
		int32_t L_21 = V_1;
		HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587* L_22 = __this->___thumbJointList_8;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_22)->max_length)), 1)))))
		{
			goto IL_000a;
		}
	}
	{
		// return minDistance;
		float L_23 = V_0;
		return L_23;
	}
}
// System.Single Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::ClosestDistanceToLineSegment(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FingerPinchGrabAPI_ClosestDistanceToLineSegment_mE32D036FBA8AA403FD30278060975D08B845D7FE (FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p01, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p12, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Vector3 lineVec = p1 - p0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___p12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___p01;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// Vector3 fromP0 = position - p0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___position0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___p01;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_3, L_4, NULL);
		// float normalizedProjection = Vector3.Dot(fromP0, lineVec) / Vector3.Dot(lineVec, lineVec);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		float L_7;
		L_7 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_5, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		float L_10;
		L_10 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_8, L_9, NULL);
		// float closestT = Mathf.Clamp01(normalizedProjection);
		float L_11;
		L_11 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(((float)(L_7/L_10)), NULL);
		V_1 = L_11;
		// Vector3 closestPoint = p0 + closestT * lineVec;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___p01;
		float L_13 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_13, L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_12, L_15, NULL);
		// return (closestPoint - position).magnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___position0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_16, L_17, NULL);
		V_2 = L_18;
		float L_19;
		L_19 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		return L_19;
	}
}
// System.Boolean Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::PinchHasGoodVisibility(Oculus.Interaction.Input.IHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FingerPinchGrabAPI_PinchHasGoodVisibility_m3EA4ECD3418C6D03E701A3C33112EA8D1FBD4AEC (FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832* __this, RuntimeObject* ___hand0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (!hand.GetJointPose(HandJointId.HandWristRoot, out Pose wristPose)
		//     || !hand.GetCenterEyePose(out Pose centerEyePose))
		RuntimeObject* L_0 = ___hand0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(9 /* System.Boolean Oculus.Interaction.Input.IHand::GetJointPose(Oculus.Interaction.Input.HandJointId,UnityEngine.Pose&) */, IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var, L_0, 0, (&V_0));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___hand0;
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(20 /* System.Boolean Oculus.Interaction.Input.IHand::GetCenterEyePose(UnityEngine.Pose&) */, IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var, L_2, (&V_1));
		if (L_3)
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		// return false;
		return (bool)0;
	}

IL_0017:
	{
		// Vector3 handVector = -1.0f * wristPose.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Pose_get_forward_m510527153754B6C2B2CDFDEE25D7168E3C82372A((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline((-1.0f), L_4, NULL);
		V_2 = L_5;
		// Vector3 targetVector = -1.0f * centerEyePose.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Pose_get_forward_m510527153754B6C2B2CDFDEE25D7168E3C82372A((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline((-1.0f), L_6, NULL);
		V_3 = L_7;
		// if (hand.Handedness == Handedness.Right)
		RuntimeObject* L_8 = ___hand0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Oculus.Interaction.Input.Handedness Oculus.Interaction.Input.IHand::get_Handedness() */, IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var, L_8);
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_004b;
		}
	}
	{
		// handVector = -handVector;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_10, NULL);
		V_2 = L_11;
	}

IL_004b:
	{
		// float angle = Vector3.Angle(handVector, targetVector);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_3;
		float L_14;
		L_14 = Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline(L_12, L_13, NULL);
		// return angle <= PINCH_HQ_VIEW_ANGLE_THRESHOLD;
		return (bool)((((int32_t)((!(((float)L_14) <= ((float)(40.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchGrabAPI__ctor_mB9D2EDD374CB70D1E4009C4769043AF7D9874875 (FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingerPinchDataU5BU5D_t467FB074609811D7B32AF170A4D7E4F52FF6E708_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6884355282165D4E80B093E8026110DAC79B4BC8____AEB38775B3F59A70B85E7077A3B6583458E3EE605C4160C7FDB05DA461AC8978_20_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private HandJointId[] thumbJointList = new[]
		// {
		//     HandJointId.HandThumb0,
		//     HandJointId.HandThumb1,
		//     HandJointId.HandThumb2,
		//     HandJointId.HandThumb3,
		//     HandJointId.HandThumbTip
		// };
		HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587* L_0 = (HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587*)(HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587*)SZArrayNew(HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587_il2cpp_TypeInfo_var, (uint32_t)5);
		HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6884355282165D4E80B093E8026110DAC79B4BC8____AEB38775B3F59A70B85E7077A3B6583458E3EE605C4160C7FDB05DA461AC8978_20_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		__this->___thumbJointList_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thumbJointList_8), (void*)L_1);
		// private readonly FingerPinchData[] _fingersPinchData =
		// {
		//     new FingerPinchData(HandFinger.Thumb),
		//     new FingerPinchData(HandFinger.Index),
		//     new FingerPinchData(HandFinger.Middle),
		//     new FingerPinchData(HandFinger.Ring),
		//     new FingerPinchData(HandFinger.Pinky)
		// };
		FingerPinchDataU5BU5D_t467FB074609811D7B32AF170A4D7E4F52FF6E708* L_3 = (FingerPinchDataU5BU5D_t467FB074609811D7B32AF170A4D7E4F52FF6E708*)(FingerPinchDataU5BU5D_t467FB074609811D7B32AF170A4D7E4F52FF6E708*)SZArrayNew(FingerPinchDataU5BU5D_t467FB074609811D7B32AF170A4D7E4F52FF6E708_il2cpp_TypeInfo_var, (uint32_t)5);
		FingerPinchDataU5BU5D_t467FB074609811D7B32AF170A4D7E4F52FF6E708* L_4 = L_3;
		FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* L_5 = (FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702*)il2cpp_codegen_object_new(FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		FingerPinchData__ctor_m5B62B14AF96308E57837D3396783AF2133E9CA64(L_5, 0, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702*)L_5);
		FingerPinchDataU5BU5D_t467FB074609811D7B32AF170A4D7E4F52FF6E708* L_6 = L_4;
		FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* L_7 = (FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702*)il2cpp_codegen_object_new(FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		FingerPinchData__ctor_m5B62B14AF96308E57837D3396783AF2133E9CA64(L_7, 1, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702*)L_7);
		FingerPinchDataU5BU5D_t467FB074609811D7B32AF170A4D7E4F52FF6E708* L_8 = L_6;
		FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* L_9 = (FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702*)il2cpp_codegen_object_new(FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		FingerPinchData__ctor_m5B62B14AF96308E57837D3396783AF2133E9CA64(L_9, 2, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702*)L_9);
		FingerPinchDataU5BU5D_t467FB074609811D7B32AF170A4D7E4F52FF6E708* L_10 = L_8;
		FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* L_11 = (FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702*)il2cpp_codegen_object_new(FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		FingerPinchData__ctor_m5B62B14AF96308E57837D3396783AF2133E9CA64(L_11, 3, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702*)L_11);
		FingerPinchDataU5BU5D_t467FB074609811D7B32AF170A4D7E4F52FF6E708* L_12 = L_10;
		FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* L_13 = (FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702*)il2cpp_codegen_object_new(FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		FingerPinchData__ctor_m5B62B14AF96308E57837D3396783AF2133E9CA64(L_13, 4, NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702*)L_13);
		__this->____fingersPinchData_9 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fingersPinchData_9), (void*)L_12);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// UnityEngine.Vector3 Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/FingerPinchData::get_TipPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FingerPinchData_get_TipPosition_m58FA8A0B4731588698E3A5CDF80267150D195F4E (FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 TipPosition { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CTipPositionU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/FingerPinchData::set_TipPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchData_set_TipPosition_mC73A53E4D31D91685484226D669D44646B0CA042 (FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 TipPosition { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CTipPositionU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Boolean Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/FingerPinchData::get_IsPinchingChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FingerPinchData_get_IsPinchingChanged_mC7CD68EA612DC57CB0920BC1A1151AFBBDC7B859 (FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsPinchingChanged { get; private set; }
		bool L_0 = __this->___U3CIsPinchingChangedU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/FingerPinchData::set_IsPinchingChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchData_set_IsPinchingChanged_mF0BFCA9BE005D7373EDB2093035102FB668EBF6B (FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsPinchingChanged { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsPinchingChangedU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/FingerPinchData::.ctor(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchData__ctor_m5B62B14AF96308E57837D3396783AF2133E9CA64 (FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* __this, int32_t ___fingerId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandJointUtils_t398E7EA5CA755A046BC60F9C5F8A144650D37DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public FingerPinchData(HandFinger fingerId)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _tipId = HandJointUtils.GetHandFingerTip(fingerId);
		int32_t L_0 = ___fingerId0;
		il2cpp_codegen_runtime_class_init_inline(HandJointUtils_t398E7EA5CA755A046BC60F9C5F8A144650D37DF7_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HandJointUtils_GetHandFingerTip_m4E1A205E74BA3C398144D7EDD5E940C808929DF0(L_0, NULL);
		__this->____tipId_0 = L_1;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/FingerPinchData::UpdateTipPosition(Oculus.Interaction.Input.IHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchData_UpdateTipPosition_m9E17EB70A89EE6706D81DC312DCB4D4E1C3ADF6A (FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* __this, RuntimeObject* ___hand0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (hand.GetJointPoseFromWrist(_tipId, out Pose pose))
		RuntimeObject* L_0 = ___hand0;
		int32_t L_1 = __this->____tipId_0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(12 /* System.Boolean Oculus.Interaction.Input.IHand::GetJointPoseFromWrist(Oculus.Interaction.Input.HandJointId,UnityEngine.Pose&) */, IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var, L_0, L_1, (&V_0));
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// TipPosition = pose.position;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3.___position_0;
		FingerPinchData_set_TipPosition_mC73A53E4D31D91685484226D669D44646B0CA042_inline(__this, L_4, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/FingerPinchData::UpdateIsPinching(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchData_UpdateIsPinching_mE099354AFD057B7ED02631AC1ABB9A412A3F2A1E (FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* __this, float ___distance0, float ___start1, float ___stopOffset2, float ___stopMax3, const RuntimeMethod* method) 
{
	{
		// if (!IsPinching)
		bool L_0 = __this->___IsPinching_5;
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		// if (distance < start)
		float L_1 = ___distance0;
		float L_2 = ___start1;
		if ((!(((float)L_1) < ((float)L_2))))
		{
			goto IL_005d;
		}
	}
	{
		// IsPinching = true;
		__this->___IsPinching_5 = (bool)1;
		// IsPinchingChanged = true;
		FingerPinchData_set_IsPinchingChanged_mF0BFCA9BE005D7373EDB2093035102FB668EBF6B_inline(__this, (bool)1, NULL);
		// _minPinchDistance = distance;
		float L_3 = ___distance0;
		__this->____minPinchDistance_1 = L_3;
		return;
	}

IL_0022:
	{
		// _minPinchDistance = Mathf.Min(_minPinchDistance, distance);
		float L_4 = __this->____minPinchDistance_1;
		float L_5 = ___distance0;
		float L_6;
		L_6 = Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline(L_4, L_5, NULL);
		__this->____minPinchDistance_1 = L_6;
		// if (distance > stopMax ||
		//     distance > _minPinchDistance + stopOffset)
		float L_7 = ___distance0;
		float L_8 = ___stopMax3;
		if ((((float)L_7) > ((float)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		float L_9 = ___distance0;
		float L_10 = __this->____minPinchDistance_1;
		float L_11 = ___stopOffset2;
		if ((!(((float)L_9) > ((float)((float)il2cpp_codegen_add(L_10, L_11))))))
		{
			goto IL_005d;
		}
	}

IL_0044:
	{
		// IsPinching = false;
		__this->___IsPinching_5 = (bool)0;
		// IsPinchingChanged = true;
		FingerPinchData_set_IsPinchingChanged_mF0BFCA9BE005D7373EDB2093035102FB668EBF6B_inline(__this, (bool)1, NULL);
		// _minPinchDistance = float.MaxValue;
		__this->____minPinchDistance_1 = ((std::numeric_limits<float>::max)());
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/FingerPinchData::ClearState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchData_ClearState_mFA67B576B3E4E5749E68C821D5494B183058FFA2 (FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* __this, const RuntimeMethod* method) 
{
	{
		// IsPinchingChanged = false;
		FingerPinchData_set_IsPinchingChanged_mF0BFCA9BE005D7373EDB2093035102FB668EBF6B_inline(__this, (bool)0, NULL);
		// }
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
// System.Boolean Oculus.Interaction.GrabAPI.FingerRawPinchAPI::GetFingerIsGrabbing(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FingerRawPinchAPI_GetFingerIsGrabbing_mB91F33CB1F10A009AA3E5D322E453107B6208FA8 (FingerRawPinchAPI_t1AD298888438539EB75E75FF0E4F46751B7FBFF1* __this, int32_t ___finger0, const RuntimeMethod* method) 
{
	{
		// return _fingersPinchData[(int)finger].IsPinching;
		FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2* L_0 = __this->____fingersPinchData_0;
		int32_t L_1 = ___finger0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		bool L_4 = L_3->___IsPinching_3;
		return L_4;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.GrabAPI.FingerRawPinchAPI::GetCenterOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FingerRawPinchAPI_GetCenterOffset_m45DC063BF13CAB54DF48AC654705E3CA4197E858 (FingerRawPinchAPI_t1AD298888438539EB75E75FF0E4F46751B7FBFF1* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// float maxStrength = float.NegativeInfinity;
		V_0 = (-std::numeric_limits<float>::infinity());
		// Vector3 thumbTip = _fingersPinchData[0].TipPosition;
		FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2* L_0 = __this->____fingersPinchData_0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = FingerPinchData_get_TipPosition_mD5B40DFF813DE6F3C3B6BCF1091C32D028AAF5D7_inline(L_2, NULL);
		V_1 = L_3;
		// Vector3 center = thumbTip;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_1;
		V_2 = L_4;
		// for (int i = 1; i < Constants.NUM_FINGERS; ++i)
		V_3 = 1;
		goto IL_0057;
	}

IL_001a:
	{
		// float strength = _fingersPinchData[i].PinchStrength;
		FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2* L_5 = __this->____fingersPinchData_0;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		float L_9 = L_8->___PinchStrength_2;
		V_4 = L_9;
		// if (strength > maxStrength)
		float L_10 = V_4;
		float L_11 = V_0;
		if ((!(((float)L_10) > ((float)L_11))))
		{
			goto IL_0053;
		}
	}
	{
		// maxStrength = strength;
		float L_12 = V_4;
		V_0 = L_12;
		// Vector3 fingerTip = _fingersPinchData[i].TipPosition;
		FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2* L_13 = __this->____fingersPinchData_0;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = FingerPinchData_get_TipPosition_mD5B40DFF813DE6F3C3B6BCF1091C32D028AAF5D7_inline(L_16, NULL);
		V_5 = L_17;
		// center = (thumbTip + fingerTip) * 0.5f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_18, L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_20, (0.5f), NULL);
		V_2 = L_21;
	}

IL_0053:
	{
		// for (int i = 1; i < Constants.NUM_FINGERS; ++i)
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0057:
	{
		// for (int i = 1; i < Constants.NUM_FINGERS; ++i)
		int32_t L_23 = V_3;
		if ((((int32_t)L_23) < ((int32_t)5)))
		{
			goto IL_001a;
		}
	}
	{
		// return center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_2;
		return L_24;
	}
}
// System.Boolean Oculus.Interaction.GrabAPI.FingerRawPinchAPI::GetFingerIsGrabbingChanged(Oculus.Interaction.Input.HandFinger,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FingerRawPinchAPI_GetFingerIsGrabbingChanged_mDDE133CC303C1AC07D0CBFD2AA8A7E06E437D6F4 (FingerRawPinchAPI_t1AD298888438539EB75E75FF0E4F46751B7FBFF1* __this, int32_t ___finger0, bool ___targetPinchState1, const RuntimeMethod* method) 
{
	{
		// return _fingersPinchData[(int)finger].IsPinchingChanged &&
		//        _fingersPinchData[(int)finger].IsPinching == targetPinchState;
		FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2* L_0 = __this->____fingersPinchData_0;
		int32_t L_1 = ___finger0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		bool L_4;
		L_4 = FingerPinchData_get_IsPinchingChanged_mCC16B97C0A6CA61D1D18800F7FBF1E2F4E08340A_inline(L_3, NULL);
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2* L_5 = __this->____fingersPinchData_0;
		int32_t L_6 = ___finger0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		bool L_9 = L_8->___IsPinching_3;
		bool L_10 = ___targetPinchState1;
		return (bool)((((int32_t)L_9) == ((int32_t)L_10))? 1 : 0);
	}

IL_0020:
	{
		return (bool)0;
	}
}
// System.Single Oculus.Interaction.GrabAPI.FingerRawPinchAPI::GetFingerGrabStrength(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FingerRawPinchAPI_GetFingerGrabStrength_mDB98618B846625EA698771A38718DCE203B52BD2 (FingerRawPinchAPI_t1AD298888438539EB75E75FF0E4F46751B7FBFF1* __this, int32_t ___finger0, const RuntimeMethod* method) 
{
	{
		// return _fingersPinchData[(int)finger].PinchStrength;
		FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2* L_0 = __this->____fingersPinchData_0;
		int32_t L_1 = ___finger0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		float L_4 = L_3->___PinchStrength_2;
		return L_4;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerRawPinchAPI::Update(Oculus.Interaction.Input.IHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerRawPinchAPI_Update_mE2C0A0C6FC00BF44F062BA687819FF593B0F3B3A (FingerRawPinchAPI_t1AD298888438539EB75E75FF0E4F46751B7FBFF1* __this, RuntimeObject* ___hand0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// ClearState();
		FingerRawPinchAPI_ClearState_m22847F4F203CEEE8AB4F3A352044FA12ADC3C9B8(__this, NULL);
		// for (int i = 0; i < Constants.NUM_FINGERS; ++i)
		V_0 = 0;
		goto IL_001c;
	}

IL_000a:
	{
		// _fingersPinchData[i].UpdateIsPinching(hand);
		FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2* L_0 = __this->____fingersPinchData_0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		RuntimeObject* L_4 = ___hand0;
		NullCheck(L_3);
		FingerPinchData_UpdateIsPinching_mF6AC20AE2029F842D68FFCCBD38F00E8CDDFD138(L_3, L_4, NULL);
		// for (int i = 0; i < Constants.NUM_FINGERS; ++i)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001c:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; ++i)
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)5)))
		{
			goto IL_000a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerRawPinchAPI::ClearState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerRawPinchAPI_ClearState_m22847F4F203CEEE8AB4F3A352044FA12ADC3C9B8 (FingerRawPinchAPI_t1AD298888438539EB75E75FF0E4F46751B7FBFF1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; ++i)
		V_0 = 0;
		goto IL_0015;
	}

IL_0004:
	{
		// _fingersPinchData[i].ClearState();
		FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2* L_0 = __this->____fingersPinchData_0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		FingerPinchData_ClearState_mFC11EF56BB84EB4D7503C13F1C1385AD52336105(L_3, NULL);
		// for (int i = 0; i < Constants.NUM_FINGERS; ++i)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0015:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; ++i)
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)5)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerRawPinchAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerRawPinchAPI__ctor_m805D09118C5FE7C1300350C73BA36B98CE1528B3 (FingerRawPinchAPI_t1AD298888438539EB75E75FF0E4F46751B7FBFF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly FingerPinchData[] _fingersPinchData =
		// {
		//     new FingerPinchData(HandFinger.Thumb),
		//     new FingerPinchData(HandFinger.Index),
		//     new FingerPinchData(HandFinger.Middle),
		//     new FingerPinchData(HandFinger.Ring),
		//     new FingerPinchData(HandFinger.Pinky)
		// };
		FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2* L_0 = (FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2*)(FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2*)SZArrayNew(FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2_il2cpp_TypeInfo_var, (uint32_t)5);
		FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2* L_1 = L_0;
		FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* L_2 = (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9*)il2cpp_codegen_object_new(FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		FingerPinchData__ctor_mF3292DF9F4DD1FD4B0051B20494767C58AA2A048(L_2, 0, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9*)L_2);
		FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2* L_3 = L_1;
		FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* L_4 = (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9*)il2cpp_codegen_object_new(FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		FingerPinchData__ctor_mF3292DF9F4DD1FD4B0051B20494767C58AA2A048(L_4, 1, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9*)L_4);
		FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2* L_5 = L_3;
		FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* L_6 = (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9*)il2cpp_codegen_object_new(FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		FingerPinchData__ctor_mF3292DF9F4DD1FD4B0051B20494767C58AA2A048(L_6, 2, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9*)L_6);
		FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2* L_7 = L_5;
		FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* L_8 = (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9*)il2cpp_codegen_object_new(FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		FingerPinchData__ctor_mF3292DF9F4DD1FD4B0051B20494767C58AA2A048(L_8, 3, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9*)L_8);
		FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2* L_9 = L_7;
		FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* L_10 = (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9*)il2cpp_codegen_object_new(FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		FingerPinchData__ctor_mF3292DF9F4DD1FD4B0051B20494767C58AA2A048(L_10, 4, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9*)L_10);
		__this->____fingersPinchData_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fingersPinchData_0), (void*)L_9);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::get_IsPinchingChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FingerPinchData_get_IsPinchingChanged_mCC16B97C0A6CA61D1D18800F7FBF1E2F4E08340A (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsPinchingChanged { get; private set; }
		bool L_0 = __this->___U3CIsPinchingChangedU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::set_IsPinchingChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchData_set_IsPinchingChanged_m36687E55DAA73DDC0177E6E9E6A1E23D91600B4A (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsPinchingChanged { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsPinchingChangedU3Ek__BackingField_4 = L_0;
		return;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::get_TipPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FingerPinchData_get_TipPosition_mD5B40DFF813DE6F3C3B6BCF1091C32D028AAF5D7 (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 TipPosition { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CTipPositionU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::set_TipPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchData_set_TipPosition_m2E44E281C9260D70D7A96DDF84EDA38C06E79480 (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 TipPosition { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CTipPositionU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::.ctor(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchData__ctor_mF3292DF9F4DD1FD4B0051B20494767C58AA2A048 (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, int32_t ___fingerId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandJointUtils_t398E7EA5CA755A046BC60F9C5F8A144650D37DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public FingerPinchData(HandFinger fingerId)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _finger = fingerId;
		int32_t L_0 = ___fingerId0;
		__this->____finger_0 = L_0;
		// _tipId = HandJointUtils.GetHandFingerTip(fingerId);
		int32_t L_1 = ___fingerId0;
		il2cpp_codegen_runtime_class_init_inline(HandJointUtils_t398E7EA5CA755A046BC60F9C5F8A144650D37DF7_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = HandJointUtils_GetHandFingerTip_m4E1A205E74BA3C398144D7EDD5E940C808929DF0(L_1, NULL);
		__this->____tipId_1 = L_2;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::UpdateTipPosition(Oculus.Interaction.Input.IHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchData_UpdateTipPosition_m5B978AF1E9F2A7853F0FEFF4009C60C2F1A323A0 (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, RuntimeObject* ___hand0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (hand.GetJointPoseFromWrist(_tipId, out Pose pose))
		RuntimeObject* L_0 = ___hand0;
		int32_t L_1 = __this->____tipId_1;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(12 /* System.Boolean Oculus.Interaction.Input.IHand::GetJointPoseFromWrist(Oculus.Interaction.Input.HandJointId,UnityEngine.Pose&) */, IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var, L_0, L_1, (&V_0));
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// TipPosition = pose.position;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3.___position_0;
		FingerPinchData_set_TipPosition_m2E44E281C9260D70D7A96DDF84EDA38C06E79480_inline(__this, L_4, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::UpdateIsPinching(Oculus.Interaction.Input.IHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchData_UpdateIsPinching_mF6AC20AE2029F842D68FFCCBD38F00E8CDDFD138 (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, RuntimeObject* ___hand0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// PinchStrength = hand.GetFingerPinchStrength(_finger);
		RuntimeObject* L_0 = ___hand0;
		int32_t L_1 = __this->____finger_0;
		NullCheck(L_0);
		float L_2;
		L_2 = InterfaceFuncInvoker1< float, int32_t >::Invoke(16 /* System.Single Oculus.Interaction.Input.IHand::GetFingerPinchStrength(Oculus.Interaction.Input.HandFinger) */, IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var, L_0, L_1);
		__this->___PinchStrength_2 = L_2;
		// bool isPinching = hand.GetFingerIsPinching(_finger);
		RuntimeObject* L_3 = ___hand0;
		int32_t L_4 = __this->____finger_0;
		NullCheck(L_3);
		bool L_5;
		L_5 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(5 /* System.Boolean Oculus.Interaction.Input.IHand::GetFingerIsPinching(Oculus.Interaction.Input.HandFinger) */, IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var, L_3, L_4);
		V_0 = L_5;
		// if(isPinching != IsPinching)
		bool L_6 = V_0;
		bool L_7 = __this->___IsPinching_3;
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_002f;
		}
	}
	{
		// IsPinchingChanged = true;
		FingerPinchData_set_IsPinchingChanged_m36687E55DAA73DDC0177E6E9E6A1E23D91600B4A_inline(__this, (bool)1, NULL);
	}

IL_002f:
	{
		// IsPinching = isPinching;
		bool L_8 = V_0;
		__this->___IsPinching_3 = L_8;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::ClearState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchData_ClearState_mFC11EF56BB84EB4D7503C13F1C1385AD52336105 (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, const RuntimeMethod* method) 
{
	{
		// IsPinchingChanged = false;
		FingerPinchData_set_IsPinchingChanged_m36687E55DAA73DDC0177E6E9E6A1E23D91600B4A_inline(__this, (bool)0, NULL);
		// }
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
// System.Void Oculus.Interaction.GrabAPI.FingerRawPinchInjector::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerRawPinchInjector_Awake_mE42E9730403F68A77F421386947726484AB28507 (FingerRawPinchInjector_t5592589F13477BF139F3F637F378D9F6986AB176* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingerRawPinchAPI_t1AD298888438539EB75E75FF0E4F46751B7FBFF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _handGrabAPI.InjectOptionalFingerPinchAPI(new FingerRawPinchAPI());
		HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* L_0 = __this->____handGrabAPI_4;
		FingerRawPinchAPI_t1AD298888438539EB75E75FF0E4F46751B7FBFF1* L_1 = (FingerRawPinchAPI_t1AD298888438539EB75E75FF0E4F46751B7FBFF1*)il2cpp_codegen_object_new(FingerRawPinchAPI_t1AD298888438539EB75E75FF0E4F46751B7FBFF1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FingerRawPinchAPI__ctor_m805D09118C5FE7C1300350C73BA36B98CE1528B3(L_1, NULL);
		NullCheck(L_0);
		HandGrabAPI_InjectOptionalFingerPinchAPI_m7BE3F921672379C65B3D661312A72627D343282A_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerRawPinchInjector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerRawPinchInjector__ctor_m9A4650E88AD94CBF1BEFC5AB13E3D8718985C321 (FingerRawPinchInjector_t5592589F13477BF139F3F637F378D9F6986AB176* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Oculus.Interaction.GrabAPI.FingerUnselectMode Oculus.Interaction.GrabAPI.GrabbingRule::get_UnselectMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GrabbingRule_get_UnselectMode_m74121A8FF930D66225FF446E8062C536D20E8045 (GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* __this, const RuntimeMethod* method) 
{
	{
		// public FingerUnselectMode UnselectMode => _unselectMode;
		int32_t L_0 = __this->____unselectMode_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t GrabbingRule_get_UnselectMode_m74121A8FF930D66225FF446E8062C536D20E8045_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = GrabbingRule_get_UnselectMode_m74121A8FF930D66225FF446E8062C536D20E8045_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Oculus.Interaction.GrabAPI.GrabbingRule::get_SelectsWithOptionals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GrabbingRule_get_SelectsWithOptionals_m93735F7E62317ED4A0FF86D0F76C4CC487901749 (GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* __this, const RuntimeMethod* method) 
{
	{
		// return _thumbRequirement != FingerRequirement.Required
		//     && _indexRequirement != FingerRequirement.Required
		//     && _middleRequirement != FingerRequirement.Required
		//     && _ringRequirement != FingerRequirement.Required
		//     && _pinkyRequirement != FingerRequirement.Required;
		int32_t L_0 = __this->____thumbRequirement_0;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_1 = __this->____indexRequirement_1;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_2 = __this->____middleRequirement_2;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_3 = __this->____ringRequirement_3;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_4 = __this->____pinkyRequirement_4;
		return (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0031:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool GrabbingRule_get_SelectsWithOptionals_m93735F7E62317ED4A0FF86D0F76C4CC487901749_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*>(__this + _offset);
	bool _returnValue;
	_returnValue = GrabbingRule_get_SelectsWithOptionals_m93735F7E62317ED4A0FF86D0F76C4CC487901749(_thisAdjusted, method);
	return _returnValue;
}
// Oculus.Interaction.GrabAPI.FingerRequirement Oculus.Interaction.GrabAPI.GrabbingRule::get_Item(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GrabbingRule_get_Item_m87B36C25D493D03CB84F3CC495841F952C2025AC (GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* __this, int32_t ___fingerID0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___fingerID0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001c;
			}
			case 1:
			{
				goto IL_0023;
			}
			case 2:
			{
				goto IL_002a;
			}
			case 3:
			{
				goto IL_0031;
			}
			case 4:
			{
				goto IL_0038;
			}
		}
	}
	{
		goto IL_003f;
	}

IL_001c:
	{
		// case HandFinger.Thumb: return _thumbRequirement;
		int32_t L_1 = __this->____thumbRequirement_0;
		return L_1;
	}

IL_0023:
	{
		// case HandFinger.Index: return _indexRequirement;
		int32_t L_2 = __this->____indexRequirement_1;
		return L_2;
	}

IL_002a:
	{
		// case HandFinger.Middle: return _middleRequirement;
		int32_t L_3 = __this->____middleRequirement_2;
		return L_3;
	}

IL_0031:
	{
		// case HandFinger.Ring: return _ringRequirement;
		int32_t L_4 = __this->____ringRequirement_3;
		return L_4;
	}

IL_0038:
	{
		// case HandFinger.Pinky: return _pinkyRequirement;
		int32_t L_5 = __this->____pinkyRequirement_4;
		return L_5;
	}

IL_003f:
	{
		// return FingerRequirement.Ignored;
		return (int32_t)(0);
	}
}
IL2CPP_EXTERN_C  int32_t GrabbingRule_get_Item_m87B36C25D493D03CB84F3CC495841F952C2025AC_AdjustorThunk (RuntimeObject* __this, int32_t ___fingerID0, const RuntimeMethod* method)
{
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = GrabbingRule_get_Item_m87B36C25D493D03CB84F3CC495841F952C2025AC(_thisAdjusted, ___fingerID0, method);
	return _returnValue;
}
// System.Void Oculus.Interaction.GrabAPI.GrabbingRule::set_Item(Oculus.Interaction.Input.HandFinger,Oculus.Interaction.GrabAPI.FingerRequirement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabbingRule_set_Item_m170315382876BD6460CD190359386202E4840F08 (GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* __this, int32_t ___fingerID0, int32_t ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___fingerID0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0023;
			}
			case 2:
			{
				goto IL_002b;
			}
			case 3:
			{
				goto IL_0033;
			}
			case 4:
			{
				goto IL_003b;
			}
		}
	}
	{
		return;
	}

IL_001b:
	{
		// case HandFinger.Thumb: _thumbRequirement = value; break;
		int32_t L_1 = ___value1;
		__this->____thumbRequirement_0 = L_1;
		// case HandFinger.Thumb: _thumbRequirement = value; break;
		return;
	}

IL_0023:
	{
		// case HandFinger.Index: _indexRequirement = value; break;
		int32_t L_2 = ___value1;
		__this->____indexRequirement_1 = L_2;
		// case HandFinger.Index: _indexRequirement = value; break;
		return;
	}

IL_002b:
	{
		// case HandFinger.Middle: _middleRequirement = value; break;
		int32_t L_3 = ___value1;
		__this->____middleRequirement_2 = L_3;
		// case HandFinger.Middle: _middleRequirement = value; break;
		return;
	}

IL_0033:
	{
		// case HandFinger.Ring: _ringRequirement = value; break;
		int32_t L_4 = ___value1;
		__this->____ringRequirement_3 = L_4;
		// case HandFinger.Ring: _ringRequirement = value; break;
		return;
	}

IL_003b:
	{
		// case HandFinger.Pinky: _pinkyRequirement = value; break;
		int32_t L_5 = ___value1;
		__this->____pinkyRequirement_4 = L_5;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void GrabbingRule_set_Item_m170315382876BD6460CD190359386202E4840F08_AdjustorThunk (RuntimeObject* __this, int32_t ___fingerID0, int32_t ___value1, const RuntimeMethod* method)
{
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*>(__this + _offset);
	GrabbingRule_set_Item_m170315382876BD6460CD190359386202E4840F08(_thisAdjusted, ___fingerID0, ___value1, method);
}
// System.Void Oculus.Interaction.GrabAPI.GrabbingRule::StripIrrelevant(Oculus.Interaction.Input.HandFingerFlags&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabbingRule_StripIrrelevant_m160B28EF238610D089F85F8CEF30B7E4DDB4B39A (GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* __this, int32_t* ___fingerFlags0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		V_0 = 0;
		goto IL_001f;
	}

IL_0004:
	{
		// HandFinger finger = (HandFinger)i;
		int32_t L_0 = V_0;
		V_1 = L_0;
		// if (this[finger] == FingerRequirement.Ignored)
		int32_t L_1 = V_1;
		int32_t L_2;
		L_2 = GrabbingRule_get_Item_m87B36C25D493D03CB84F3CC495841F952C2025AC(__this, L_1, NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// fingerFlags = (HandFingerFlags)((int)fingerFlags & ~(1 << i));
		int32_t* L_3 = ___fingerFlags0;
		int32_t* L_4 = ___fingerFlags0;
		int32_t L_5 = *((int32_t*)L_4);
		int32_t L_6 = V_0;
		*((int32_t*)L_3) = (int32_t)((int32_t)(L_5&((~((int32_t)(1<<((int32_t)(L_6&((int32_t)31)))))))));
	}

IL_001b:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_001f:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)5)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void GrabbingRule_StripIrrelevant_m160B28EF238610D089F85F8CEF30B7E4DDB4B39A_AdjustorThunk (RuntimeObject* __this, int32_t* ___fingerFlags0, const RuntimeMethod* method)
{
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*>(__this + _offset);
	GrabbingRule_StripIrrelevant_m160B28EF238610D089F85F8CEF30B7E4DDB4B39A(_thisAdjusted, ___fingerFlags0, method);
}
// System.Void Oculus.Interaction.GrabAPI.GrabbingRule::.ctor(Oculus.Interaction.Input.HandFingerFlags,Oculus.Interaction.GrabAPI.GrabbingRule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabbingRule__ctor_m1A7CF0E024E02E1A7BA82B8FC6390AD4E8D59AF3 (GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* __this, int32_t ___mask0, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___otherRule1, const RuntimeMethod* method) 
{
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D V_0;
	memset((&V_0), 0, sizeof(V_0));
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* G_B2_0 = NULL;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* G_B3_1 = NULL;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* G_B5_0 = NULL;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* G_B6_1 = NULL;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* G_B8_0 = NULL;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* G_B9_1 = NULL;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* G_B11_0 = NULL;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* G_B12_1 = NULL;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* G_B14_0 = NULL;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* G_B13_0 = NULL;
	int32_t G_B15_0 = 0;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* G_B15_1 = NULL;
	{
		// _thumbRequirement = (mask & HandFingerFlags.Thumb) != 0 ?
		//     otherRule._thumbRequirement : FingerRequirement.Ignored;
		int32_t L_0 = ___mask0;
		G_B1_0 = __this;
		if (((int32_t)((int32_t)L_0&1)))
		{
			G_B2_0 = __this;
			goto IL_0009;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000f;
	}

IL_0009:
	{
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_1 = ___otherRule1;
		int32_t L_2 = L_1->____thumbRequirement_0;
		G_B3_0 = ((int32_t)(L_2));
		G_B3_1 = G_B2_0;
	}

IL_000f:
	{
		G_B3_1->____thumbRequirement_0 = G_B3_0;
		// _indexRequirement = (mask & HandFingerFlags.Index) != 0 ?
		//     otherRule._indexRequirement : FingerRequirement.Ignored;
		int32_t L_3 = ___mask0;
		G_B4_0 = __this;
		if (((int32_t)((int32_t)L_3&2)))
		{
			G_B5_0 = __this;
			goto IL_001d;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0023;
	}

IL_001d:
	{
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_4 = ___otherRule1;
		int32_t L_5 = L_4->____indexRequirement_1;
		G_B6_0 = ((int32_t)(L_5));
		G_B6_1 = G_B5_0;
	}

IL_0023:
	{
		G_B6_1->____indexRequirement_1 = G_B6_0;
		// _middleRequirement = (mask & HandFingerFlags.Middle) != 0 ?
		//     otherRule._middleRequirement : FingerRequirement.Ignored;
		int32_t L_6 = ___mask0;
		G_B7_0 = __this;
		if (((int32_t)((int32_t)L_6&4)))
		{
			G_B8_0 = __this;
			goto IL_0031;
		}
	}
	{
		G_B9_0 = 0;
		G_B9_1 = G_B7_0;
		goto IL_0037;
	}

IL_0031:
	{
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_7 = ___otherRule1;
		int32_t L_8 = L_7->____middleRequirement_2;
		G_B9_0 = ((int32_t)(L_8));
		G_B9_1 = G_B8_0;
	}

IL_0037:
	{
		G_B9_1->____middleRequirement_2 = G_B9_0;
		// _ringRequirement = (mask & HandFingerFlags.Ring) != 0 ?
		//     otherRule._ringRequirement : FingerRequirement.Ignored;
		int32_t L_9 = ___mask0;
		G_B10_0 = __this;
		if (((int32_t)((int32_t)L_9&8)))
		{
			G_B11_0 = __this;
			goto IL_0045;
		}
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_0;
		goto IL_004b;
	}

IL_0045:
	{
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_10 = ___otherRule1;
		int32_t L_11 = L_10->____ringRequirement_3;
		G_B12_0 = ((int32_t)(L_11));
		G_B12_1 = G_B11_0;
	}

IL_004b:
	{
		G_B12_1->____ringRequirement_3 = G_B12_0;
		// _pinkyRequirement = (mask & HandFingerFlags.Pinky) != 0 ?
		//     otherRule._pinkyRequirement : FingerRequirement.Ignored;
		int32_t L_12 = ___mask0;
		G_B13_0 = __this;
		if (((int32_t)((int32_t)L_12&((int32_t)16))))
		{
			G_B14_0 = __this;
			goto IL_005a;
		}
	}
	{
		G_B15_0 = 0;
		G_B15_1 = G_B13_0;
		goto IL_0060;
	}

IL_005a:
	{
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_13 = ___otherRule1;
		int32_t L_14 = L_13->____pinkyRequirement_4;
		G_B15_0 = ((int32_t)(L_14));
		G_B15_1 = G_B14_0;
	}

IL_0060:
	{
		G_B15_1->____pinkyRequirement_4 = G_B15_0;
		// _unselectMode = otherRule.UnselectMode;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_15 = ___otherRule1;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_16 = (*(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*)L_15);
		V_0 = L_16;
		int32_t L_17;
		L_17 = GrabbingRule_get_UnselectMode_m74121A8FF930D66225FF446E8062C536D20E8045_inline((&V_0), NULL);
		__this->____unselectMode_5 = L_17;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void GrabbingRule__ctor_m1A7CF0E024E02E1A7BA82B8FC6390AD4E8D59AF3_AdjustorThunk (RuntimeObject* __this, int32_t ___mask0, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___otherRule1, const RuntimeMethod* method)
{
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*>(__this + _offset);
	GrabbingRule__ctor_m1A7CF0E024E02E1A7BA82B8FC6390AD4E8D59AF3(_thisAdjusted, ___mask0, ___otherRule1, method);
}
// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.GrabAPI.GrabbingRule::get_DefaultPalmRule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D GrabbingRule_get_DefaultPalmRule_mB9E377D27547C4D09D89E03ABE38940977732768 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GrabbingRule DefaultPalmRule { get; } = new GrabbingRule()
		il2cpp_codegen_runtime_class_init_inline(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_0 = ((GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_StaticFields*)il2cpp_codegen_static_fields_for(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var))->___U3CDefaultPalmRuleU3Ek__BackingField_6;
		return L_0;
	}
}
// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.GrabAPI.GrabbingRule::get_DefaultPinchRule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D GrabbingRule_get_DefaultPinchRule_m4D757CE5E8DD549FDB7E01FFD283DE8F6C0061F5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GrabbingRule DefaultPinchRule { get; } = new GrabbingRule()
		il2cpp_codegen_runtime_class_init_inline(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_0 = ((GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_StaticFields*)il2cpp_codegen_static_fields_for(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var))->___U3CDefaultPinchRuleU3Ek__BackingField_7;
		return L_0;
	}
}
// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.GrabAPI.GrabbingRule::get_FullGrab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D GrabbingRule_get_FullGrab_mEF2400CB55E6A3D0CE520CD0F7EEFC68AAB1C828 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GrabbingRule FullGrab { get; } = new GrabbingRule()
		il2cpp_codegen_runtime_class_init_inline(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_0 = ((GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_StaticFields*)il2cpp_codegen_static_fields_for(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var))->___U3CFullGrabU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Oculus.Interaction.GrabAPI.GrabbingRule::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabbingRule__cctor_m0E1F1260C0C2989A98B55D7E2D6B5FC02C32E712 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static GrabbingRule DefaultPalmRule { get; } = new GrabbingRule()
		// {
		//     _thumbRequirement = FingerRequirement.Optional,
		//     _indexRequirement = FingerRequirement.Required,
		//     _middleRequirement = FingerRequirement.Required,
		//     _ringRequirement = FingerRequirement.Required,
		//     _pinkyRequirement = FingerRequirement.Optional,
		// 
		//     _unselectMode = FingerUnselectMode.AllReleased
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D));
		(&V_0)->____thumbRequirement_0 = 1;
		(&V_0)->____indexRequirement_1 = 2;
		(&V_0)->____middleRequirement_2 = 2;
		(&V_0)->____ringRequirement_3 = 2;
		(&V_0)->____pinkyRequirement_4 = 1;
		(&V_0)->____unselectMode_5 = 0;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_0 = V_0;
		((GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_StaticFields*)il2cpp_codegen_static_fields_for(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var))->___U3CDefaultPalmRuleU3Ek__BackingField_6 = L_0;
		// public static GrabbingRule DefaultPinchRule { get; } = new GrabbingRule()
		// {
		//     _thumbRequirement = FingerRequirement.Required,
		//     _indexRequirement = FingerRequirement.Optional,
		//     _middleRequirement = FingerRequirement.Optional,
		//     _ringRequirement = FingerRequirement.Ignored,
		//     _pinkyRequirement = FingerRequirement.Ignored,
		// 
		//     _unselectMode = FingerUnselectMode.AllReleased
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D));
		(&V_0)->____thumbRequirement_0 = 2;
		(&V_0)->____indexRequirement_1 = 1;
		(&V_0)->____middleRequirement_2 = 1;
		(&V_0)->____ringRequirement_3 = 0;
		(&V_0)->____pinkyRequirement_4 = 0;
		(&V_0)->____unselectMode_5 = 0;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_1 = V_0;
		((GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_StaticFields*)il2cpp_codegen_static_fields_for(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var))->___U3CDefaultPinchRuleU3Ek__BackingField_7 = L_1;
		// public static GrabbingRule FullGrab { get; } = new GrabbingRule()
		// {
		//     _thumbRequirement = FingerRequirement.Required,
		//     _indexRequirement = FingerRequirement.Required,
		//     _middleRequirement = FingerRequirement.Required,
		//     _ringRequirement = FingerRequirement.Required,
		//     _pinkyRequirement = FingerRequirement.Required,
		// 
		//     _unselectMode = FingerUnselectMode.AllReleased
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D));
		(&V_0)->____thumbRequirement_0 = 2;
		(&V_0)->____indexRequirement_1 = 2;
		(&V_0)->____middleRequirement_2 = 2;
		(&V_0)->____ringRequirement_3 = 2;
		(&V_0)->____pinkyRequirement_4 = 2;
		(&V_0)->____unselectMode_5 = 0;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_2 = V_0;
		((GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_StaticFields*)il2cpp_codegen_static_fields_for(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var))->___U3CFullGrabU3Ek__BackingField_8 = L_2;
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
// Oculus.Interaction.Input.IHand Oculus.Interaction.GrabAPI.HandGrabAPI::get_Hand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandGrabAPI_get_Hand_m72A5774D97A3AAC504C0B4CAB2AD193323236A6E (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, const RuntimeMethod* method) 
{
	{
		// public IHand Hand { get; private set; }
		RuntimeObject* L_0 = __this->___U3CHandU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Oculus.Interaction.GrabAPI.HandGrabAPI::set_Hand(Oculus.Interaction.Input.IHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabAPI_set_Hand_mD5AFDFC0CD8B3C0E7BCDD6B7B9BEFF70CC90F455 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IHand Hand { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CHandU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHandU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.HandGrabAPI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabAPI_Awake_mA4F67BA8DB7E8EAB9A205D8FC1A017A6D65CC6AF (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Hand = _hand as IHand;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->____hand_4;
		HandGrabAPI_set_Hand_mD5AFDFC0CD8B3C0E7BCDD6B7B9BEFF70CC90F455_inline(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var)), NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.HandGrabAPI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabAPI_Start_m4DEF80E56D8B47BA50FC442F4AFA60A073341168 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, const RuntimeMethod* method) 
{
	{
		// this.BeginStart(ref _started);
		bool* L_0 = (&__this->____started_8);
		MonoBehaviourStartExtensions_BeginStart_mDD969725C4C386681AC8271DD8C4073818218BBA(__this, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		// this.EndStart(ref _started);
		bool* L_1 = (&__this->____started_8);
		MonoBehaviourStartExtensions_EndStart_m886958C775D916BE56C23EF36B446A1D268AABF0(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.HandGrabAPI::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabAPI_OnEnable_mE03829B2B59CD7511F1AACB759F0B4330EF4A073 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandGrabAPI_OnHandUpdated_m6E4AF640C0462C4C6C5F432757D377F4CAD9F84A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_started)
		bool L_0 = __this->____started_8;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// Hand.WhenHandUpdated += OnHandUpdated;
		RuntimeObject* L_1;
		L_1 = HandGrabAPI_get_Hand_m72A5774D97A3AAC504C0B4CAB2AD193323236A6E_inline(__this, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_2, __this, (intptr_t)((void*)HandGrabAPI_OnHandUpdated_m6E4AF640C0462C4C6C5F432757D377F4CAD9F84A_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(24 /* System.Void Oculus.Interaction.Input.IHand::add_WhenHandUpdated(System.Action) */, IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.HandGrabAPI::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabAPI_OnDisable_m52698327EE64FBB5EBD0A006E1C55D6484705738 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandGrabAPI_OnHandUpdated_m6E4AF640C0462C4C6C5F432757D377F4CAD9F84A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_started)
		bool L_0 = __this->____started_8;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// Hand.WhenHandUpdated -= OnHandUpdated;
		RuntimeObject* L_1;
		L_1 = HandGrabAPI_get_Hand_m72A5774D97A3AAC504C0B4CAB2AD193323236A6E_inline(__this, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_2, __this, (intptr_t)((void*)HandGrabAPI_OnHandUpdated_m6E4AF640C0462C4C6C5F432757D377F4CAD9F84A_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(25 /* System.Void Oculus.Interaction.Input.IHand::remove_WhenHandUpdated(System.Action) */, IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.HandGrabAPI::OnHandUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabAPI_OnHandUpdated_m6E4AF640C0462C4C6C5F432757D377F4CAD9F84A (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFingerAPI_t984A994F01A7F7E4391CE4EDD04479304F220454_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _fingerPinchGrabAPI.Update(Hand);
		RuntimeObject* L_0 = __this->____fingerPinchGrabAPI_6;
		RuntimeObject* L_1;
		L_1 = HandGrabAPI_get_Hand_m72A5774D97A3AAC504C0B4CAB2AD193323236A6E_inline(__this, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(4 /* System.Void Oculus.Interaction.GrabAPI.IFingerAPI::Update(Oculus.Interaction.Input.IHand) */, IFingerAPI_t984A994F01A7F7E4391CE4EDD04479304F220454_il2cpp_TypeInfo_var, L_0, L_1);
		// _fingerPalmGrabAPI.Update(Hand);
		RuntimeObject* L_2 = __this->____fingerPalmGrabAPI_7;
		RuntimeObject* L_3;
		L_3 = HandGrabAPI_get_Hand_m72A5774D97A3AAC504C0B4CAB2AD193323236A6E_inline(__this, NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(4 /* System.Void Oculus.Interaction.GrabAPI.IFingerAPI::Update(Oculus.Interaction.Input.IHand) */, IFingerAPI_t984A994F01A7F7E4391CE4EDD04479304F220454_il2cpp_TypeInfo_var, L_2, L_3);
		// }
		return;
	}
}
// Oculus.Interaction.Input.HandFingerFlags Oculus.Interaction.GrabAPI.HandGrabAPI::HandPinchGrabbingFingers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandGrabAPI_HandPinchGrabbingFingers_m0C39BC9CA1B701B249975739A776C78FF399F4B2 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, const RuntimeMethod* method) 
{
	{
		// return HandGrabbingFingers(_fingerPinchGrabAPI);
		RuntimeObject* L_0 = __this->____fingerPinchGrabAPI_6;
		int32_t L_1;
		L_1 = HandGrabAPI_HandGrabbingFingers_m3FF099AF6AE870A978D604643E53B3A70722052E(__this, L_0, NULL);
		return L_1;
	}
}
// Oculus.Interaction.Input.HandFingerFlags Oculus.Interaction.GrabAPI.HandGrabAPI::HandPalmGrabbingFingers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandGrabAPI_HandPalmGrabbingFingers_m0D9B276FA470653292D47DF7D3BE5D6595407DEC (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, const RuntimeMethod* method) 
{
	{
		// return HandGrabbingFingers(_fingerPalmGrabAPI);
		RuntimeObject* L_0 = __this->____fingerPalmGrabAPI_7;
		int32_t L_1;
		L_1 = HandGrabAPI_HandGrabbingFingers_m3FF099AF6AE870A978D604643E53B3A70722052E(__this, L_0, NULL);
		return L_1;
	}
}
// Oculus.Interaction.Input.HandFingerFlags Oculus.Interaction.GrabAPI.HandGrabAPI::HandGrabbingFingers(Oculus.Interaction.GrabAPI.IFingerAPI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandGrabAPI_HandGrabbingFingers_m3FF099AF6AE870A978D604643E53B3A70722052E (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, RuntimeObject* ___fingerAPI0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFingerAPI_t984A994F01A7F7E4391CE4EDD04479304F220454_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// HandFingerFlags grabbingFingers = HandFingerFlags.None;
		V_0 = 0;
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		V_1 = 0;
		goto IL_001e;
	}

IL_0006:
	{
		// HandFinger finger = (HandFinger)i;
		int32_t L_0 = V_1;
		V_2 = L_0;
		// bool isGrabbing = fingerAPI.GetFingerIsGrabbing(finger);
		RuntimeObject* L_1 = ___fingerAPI0;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(0 /* System.Boolean Oculus.Interaction.GrabAPI.IFingerAPI::GetFingerIsGrabbing(Oculus.Interaction.Input.HandFinger) */, IFingerAPI_t984A994F01A7F7E4391CE4EDD04479304F220454_il2cpp_TypeInfo_var, L_1, L_2);
		// if (isGrabbing)
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		// grabbingFingers |= (HandFingerFlags)(1 << i);
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		V_0 = ((int32_t)((int32_t)L_4|((int32_t)(1<<((int32_t)(L_5&((int32_t)31)))))));
	}

IL_001a:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001e:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) < ((int32_t)5)))
		{
			goto IL_0006;
		}
	}
	{
		// return grabbingFingers;
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Boolean Oculus.Interaction.GrabAPI.HandGrabAPI::IsHandPinchGrabbing(Oculus.Interaction.GrabAPI.GrabbingRule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabAPI_IsHandPinchGrabbing_m908BE2D65BE012C1D7ECB5194AB530254BB748EC (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___fingers0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// HandFingerFlags pinchFingers = HandPinchGrabbingFingers();
		int32_t L_0;
		L_0 = HandGrabAPI_HandPinchGrabbingFingers_m0C39BC9CA1B701B249975739A776C78FF399F4B2(__this, NULL);
		V_0 = L_0;
		// return IsSustainingGrab(fingers, pinchFingers);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_1 = ___fingers0;
		int32_t L_2 = V_0;
		bool L_3;
		L_3 = HandGrabAPI_IsSustainingGrab_m3D572C621F6A5DA88F50AAC29E2E3D0E62BA6798(__this, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Boolean Oculus.Interaction.GrabAPI.HandGrabAPI::IsHandPalmGrabbing(Oculus.Interaction.GrabAPI.GrabbingRule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabAPI_IsHandPalmGrabbing_m21D6E3381C996B1F918F1A6E75038FDDC4C58BED (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___fingers0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// HandFingerFlags palmFingers = HandPalmGrabbingFingers();
		int32_t L_0;
		L_0 = HandGrabAPI_HandPalmGrabbingFingers_m0D9B276FA470653292D47DF7D3BE5D6595407DEC(__this, NULL);
		V_0 = L_0;
		// return IsSustainingGrab(fingers, palmFingers);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_1 = ___fingers0;
		int32_t L_2 = V_0;
		bool L_3;
		L_3 = HandGrabAPI_IsSustainingGrab_m3D572C621F6A5DA88F50AAC29E2E3D0E62BA6798(__this, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Boolean Oculus.Interaction.GrabAPI.HandGrabAPI::IsSustainingGrab(Oculus.Interaction.GrabAPI.GrabbingRule&,Oculus.Interaction.Input.HandFingerFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabAPI_IsSustainingGrab_m3D572C621F6A5DA88F50AAC29E2E3D0E62BA6798 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___fingers0, int32_t ___grabbingFingers1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// bool anyHolding = false;
		V_0 = (bool)0;
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		V_1 = 0;
		goto IL_007c;
	}

IL_0006:
	{
		// HandFinger finger = (HandFinger)i;
		int32_t L_0 = V_1;
		V_2 = L_0;
		// HandFingerFlags fingerFlag = (HandFingerFlags)(1 << i);
		int32_t L_1 = V_1;
		V_3 = ((int32_t)(1<<((int32_t)(L_1&((int32_t)31)))));
		// bool isFingerGrabbing = (grabbingFingers & fingerFlag) != 0;
		int32_t L_2 = ___grabbingFingers1;
		int32_t L_3 = V_3;
		V_4 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_2&(int32_t)L_3))) <= ((uint32_t)0)))? 1 : 0);
		// if (fingers[finger] == FingerRequirement.Required)
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_4 = ___fingers0;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_5 = (*(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*)L_4);
		V_5 = L_5;
		int32_t L_6 = V_2;
		int32_t L_7;
		L_7 = GrabbingRule_get_Item_m87B36C25D493D03CB84F3CC495841F952C2025AC((&V_5), L_6, NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_0060;
		}
	}
	{
		// anyHolding |= isFingerGrabbing;
		bool L_8 = V_0;
		bool L_9 = V_4;
		V_0 = (bool)((int32_t)((int32_t)L_8|(int32_t)L_9));
		// if (fingers.UnselectMode == FingerUnselectMode.AnyReleased
		//     && !isFingerGrabbing)
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_10 = ___fingers0;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_11 = (*(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*)L_10);
		V_5 = L_11;
		int32_t L_12;
		L_12 = GrabbingRule_get_UnselectMode_m74121A8FF930D66225FF446E8062C536D20E8045_inline((&V_5), NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0047;
		}
	}
	{
		bool L_13 = V_4;
		if (L_13)
		{
			goto IL_0047;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0047:
	{
		// if (fingers.UnselectMode == FingerUnselectMode.AllReleased
		//     && isFingerGrabbing)
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_14 = ___fingers0;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_15 = (*(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*)L_14);
		V_5 = L_15;
		int32_t L_16;
		L_16 = GrabbingRule_get_UnselectMode_m74121A8FF930D66225FF446E8062C536D20E8045_inline((&V_5), NULL);
		bool L_17 = V_4;
		if (!((int32_t)(((((int32_t)L_16) == ((int32_t)0))? 1 : 0)&(int32_t)L_17)))
		{
			goto IL_0078;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0060:
	{
		// else if (fingers[finger] == FingerRequirement.Optional)
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_18 = ___fingers0;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_19 = (*(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*)L_18);
		V_5 = L_19;
		int32_t L_20 = V_2;
		int32_t L_21;
		L_21 = GrabbingRule_get_Item_m87B36C25D493D03CB84F3CC495841F952C2025AC((&V_5), L_20, NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)1))))
		{
			goto IL_0078;
		}
	}
	{
		// anyHolding |= isFingerGrabbing;
		bool L_22 = V_0;
		bool L_23 = V_4;
		V_0 = (bool)((int32_t)((int32_t)L_22|(int32_t)L_23));
	}

IL_0078:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_007c:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		int32_t L_25 = V_1;
		if ((((int32_t)L_25) < ((int32_t)5)))
		{
			goto IL_0006;
		}
	}
	{
		// return anyHolding;
		bool L_26 = V_0;
		return L_26;
	}
}
// System.Boolean Oculus.Interaction.GrabAPI.HandGrabAPI::IsHandSelectPinchFingersChanged(Oculus.Interaction.GrabAPI.GrabbingRule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabAPI_IsHandSelectPinchFingersChanged_mDEE9E9F826A9D2CB0C41301B9AFC1E91F9897722 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___fingers0, const RuntimeMethod* method) 
{
	{
		// return IsHandSelectFingersChanged(fingers, _fingerPinchGrabAPI);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_0 = ___fingers0;
		RuntimeObject* L_1 = __this->____fingerPinchGrabAPI_6;
		bool L_2;
		L_2 = HandGrabAPI_IsHandSelectFingersChanged_m700927546B27801F77A02EE13BBD2635E19A8556(__this, L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean Oculus.Interaction.GrabAPI.HandGrabAPI::IsHandSelectPalmFingersChanged(Oculus.Interaction.GrabAPI.GrabbingRule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabAPI_IsHandSelectPalmFingersChanged_mEE727D93CA46FE21A81048E57361B384DD1D1F6D (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___fingers0, const RuntimeMethod* method) 
{
	{
		// return IsHandSelectFingersChanged(fingers, _fingerPalmGrabAPI);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_0 = ___fingers0;
		RuntimeObject* L_1 = __this->____fingerPalmGrabAPI_7;
		bool L_2;
		L_2 = HandGrabAPI_IsHandSelectFingersChanged_m700927546B27801F77A02EE13BBD2635E19A8556(__this, L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean Oculus.Interaction.GrabAPI.HandGrabAPI::IsHandUnselectPinchFingersChanged(Oculus.Interaction.GrabAPI.GrabbingRule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabAPI_IsHandUnselectPinchFingersChanged_mE1C455D9B209E1A3B1542B3BB66B4C69C1054A70 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___fingers0, const RuntimeMethod* method) 
{
	{
		// return IsHandUnselectFingersChanged(fingers, _fingerPinchGrabAPI);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_0 = ___fingers0;
		RuntimeObject* L_1 = __this->____fingerPinchGrabAPI_6;
		bool L_2;
		L_2 = HandGrabAPI_IsHandUnselectFingersChanged_m797F66ACF291DCE88CB05FCE6409621A2F4A6591(__this, L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean Oculus.Interaction.GrabAPI.HandGrabAPI::IsHandUnselectPalmFingersChanged(Oculus.Interaction.GrabAPI.GrabbingRule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabAPI_IsHandUnselectPalmFingersChanged_m6FAE8A160394C24EB8CF18A3D8F412D0ECF49E29 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___fingers0, const RuntimeMethod* method) 
{
	{
		// return IsHandUnselectFingersChanged(fingers, _fingerPalmGrabAPI);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_0 = ___fingers0;
		RuntimeObject* L_1 = __this->____fingerPalmGrabAPI_7;
		bool L_2;
		L_2 = HandGrabAPI_IsHandUnselectFingersChanged_m797F66ACF291DCE88CB05FCE6409621A2F4A6591(__this, L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean Oculus.Interaction.GrabAPI.HandGrabAPI::IsHandSelectFingersChanged(Oculus.Interaction.GrabAPI.GrabbingRule&,Oculus.Interaction.GrabAPI.IFingerAPI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabAPI_IsHandSelectFingersChanged_m700927546B27801F77A02EE13BBD2635E19A8556 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___fingers0, RuntimeObject* ___fingerAPI1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFingerAPI_t984A994F01A7F7E4391CE4EDD04479304F220454_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// bool selectsWithOptionals = fingers.SelectsWithOptionals;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_0 = ___fingers0;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_1 = (*(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*)L_0);
		V_2 = L_1;
		bool L_2;
		L_2 = GrabbingRule_get_SelectsWithOptionals_m93735F7E62317ED4A0FF86D0F76C4CC487901749((&V_2), NULL);
		V_0 = L_2;
		// bool aFingerGrabbed = false;
		V_1 = (bool)0;
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		V_3 = 0;
		goto IL_006d;
	}

IL_0015:
	{
		// HandFinger finger = (HandFinger)i;
		int32_t L_3 = V_3;
		V_4 = L_3;
		// if (fingers[finger] == FingerRequirement.Required)
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_4 = ___fingers0;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_5 = (*(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*)L_4);
		V_2 = L_5;
		int32_t L_6 = V_4;
		int32_t L_7;
		L_7 = GrabbingRule_get_Item_m87B36C25D493D03CB84F3CC495841F952C2025AC((&V_2), L_6, NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_0046;
		}
	}
	{
		// if (!fingerAPI.GetFingerIsGrabbing(finger))
		RuntimeObject* L_8 = ___fingerAPI1;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		bool L_10;
		L_10 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(0 /* System.Boolean Oculus.Interaction.GrabAPI.IFingerAPI::GetFingerIsGrabbing(Oculus.Interaction.Input.HandFinger) */, IFingerAPI_t984A994F01A7F7E4391CE4EDD04479304F220454_il2cpp_TypeInfo_var, L_8, L_9);
		if (L_10)
		{
			goto IL_0037;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0037:
	{
		// if (fingerAPI.GetFingerIsGrabbingChanged(finger, true))
		RuntimeObject* L_11 = ___fingerAPI1;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		bool L_13;
		L_13 = InterfaceFuncInvoker2< bool, int32_t, bool >::Invoke(1 /* System.Boolean Oculus.Interaction.GrabAPI.IFingerAPI::GetFingerIsGrabbingChanged(Oculus.Interaction.Input.HandFinger,System.Boolean) */, IFingerAPI_t984A994F01A7F7E4391CE4EDD04479304F220454_il2cpp_TypeInfo_var, L_11, L_12, (bool)1);
		if (!L_13)
		{
			goto IL_0069;
		}
	}
	{
		// aFingerGrabbed = true;
		V_1 = (bool)1;
		goto IL_0069;
	}

IL_0046:
	{
		// else if (selectsWithOptionals
		//     && fingers[finger] == FingerRequirement.Optional)
		bool L_14 = V_0;
		if (!L_14)
		{
			goto IL_0069;
		}
	}
	{
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_15 = ___fingers0;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_16 = (*(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*)L_15);
		V_2 = L_16;
		int32_t L_17 = V_4;
		int32_t L_18;
		L_18 = GrabbingRule_get_Item_m87B36C25D493D03CB84F3CC495841F952C2025AC((&V_2), L_17, NULL);
		if ((!(((uint32_t)L_18) == ((uint32_t)1))))
		{
			goto IL_0069;
		}
	}
	{
		// if (fingerAPI.GetFingerIsGrabbingChanged(finger, true))
		RuntimeObject* L_19 = ___fingerAPI1;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		bool L_21;
		L_21 = InterfaceFuncInvoker2< bool, int32_t, bool >::Invoke(1 /* System.Boolean Oculus.Interaction.GrabAPI.IFingerAPI::GetFingerIsGrabbingChanged(Oculus.Interaction.Input.HandFinger,System.Boolean) */, IFingerAPI_t984A994F01A7F7E4391CE4EDD04479304F220454_il2cpp_TypeInfo_var, L_19, L_20, (bool)1);
		if (!L_21)
		{
			goto IL_0069;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0069:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_006d:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		int32_t L_23 = V_3;
		if ((((int32_t)L_23) < ((int32_t)5)))
		{
			goto IL_0015;
		}
	}
	{
		// return aFingerGrabbed;
		bool L_24 = V_1;
		return L_24;
	}
}
// System.Boolean Oculus.Interaction.GrabAPI.HandGrabAPI::IsHandUnselectFingersChanged(Oculus.Interaction.GrabAPI.GrabbingRule&,Oculus.Interaction.GrabAPI.IFingerAPI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabAPI_IsHandUnselectFingersChanged_m797F66ACF291DCE88CB05FCE6409621A2F4A6591 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___fingers0, RuntimeObject* ___fingerAPI1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFingerAPI_t984A994F01A7F7E4391CE4EDD04479304F220454_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// bool isAnyFingerGrabbing = false;
		V_0 = (bool)0;
		// bool aFingerUngrabbed = false;
		V_1 = (bool)0;
		// bool selectsWithOptionals = fingers.SelectsWithOptionals;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_0 = ___fingers0;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_1 = (*(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*)L_0);
		V_3 = L_1;
		bool L_2;
		L_2 = GrabbingRule_get_SelectsWithOptionals_m93735F7E62317ED4A0FF86D0F76C4CC487901749((&V_3), NULL);
		V_2 = L_2;
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		V_4 = 0;
		goto IL_00ac;
	}

IL_001b:
	{
		// HandFinger finger = (HandFinger)i;
		int32_t L_3 = V_4;
		V_5 = L_3;
		// if (fingers[finger] == FingerRequirement.Ignored)
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_4 = ___fingers0;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_5 = (*(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*)L_4);
		V_3 = L_5;
		int32_t L_6 = V_5;
		int32_t L_7;
		L_7 = GrabbingRule_get_Item_m87B36C25D493D03CB84F3CC495841F952C2025AC((&V_3), L_6, NULL);
		if (!L_7)
		{
			goto IL_00a6;
		}
	}
	{
		// isAnyFingerGrabbing |= fingerAPI.GetFingerIsGrabbing(finger);
		bool L_8 = V_0;
		RuntimeObject* L_9 = ___fingerAPI1;
		int32_t L_10 = V_5;
		NullCheck(L_9);
		bool L_11;
		L_11 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(0 /* System.Boolean Oculus.Interaction.GrabAPI.IFingerAPI::GetFingerIsGrabbing(Oculus.Interaction.Input.HandFinger) */, IFingerAPI_t984A994F01A7F7E4391CE4EDD04479304F220454_il2cpp_TypeInfo_var, L_9, L_10);
		V_0 = (bool)((int32_t)((int32_t)L_8|(int32_t)L_11));
		// if (fingers[finger] == FingerRequirement.Required)
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_12 = ___fingers0;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_13 = (*(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*)L_12);
		V_3 = L_13;
		int32_t L_14 = V_5;
		int32_t L_15;
		L_15 = GrabbingRule_get_Item_m87B36C25D493D03CB84F3CC495841F952C2025AC((&V_3), L_14, NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)2))))
		{
			goto IL_006f;
		}
	}
	{
		// if (fingerAPI.GetFingerIsGrabbingChanged(finger, false))
		RuntimeObject* L_16 = ___fingerAPI1;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		bool L_18;
		L_18 = InterfaceFuncInvoker2< bool, int32_t, bool >::Invoke(1 /* System.Boolean Oculus.Interaction.GrabAPI.IFingerAPI::GetFingerIsGrabbingChanged(Oculus.Interaction.Input.HandFinger,System.Boolean) */, IFingerAPI_t984A994F01A7F7E4391CE4EDD04479304F220454_il2cpp_TypeInfo_var, L_16, L_17, (bool)0);
		if (!L_18)
		{
			goto IL_006f;
		}
	}
	{
		// aFingerUngrabbed = true;
		V_1 = (bool)1;
		// if (fingers.UnselectMode == FingerUnselectMode.AnyReleased)
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_19 = ___fingers0;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_20 = (*(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*)L_19);
		V_3 = L_20;
		int32_t L_21;
		L_21 = GrabbingRule_get_UnselectMode_m74121A8FF930D66225FF446E8062C536D20E8045_inline((&V_3), NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)1))))
		{
			goto IL_006f;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_006f:
	{
		// if (fingers[finger] == FingerRequirement.Optional)
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_22 = ___fingers0;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_23 = (*(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*)L_22);
		V_3 = L_23;
		int32_t L_24 = V_5;
		int32_t L_25;
		L_25 = GrabbingRule_get_Item_m87B36C25D493D03CB84F3CC495841F952C2025AC((&V_3), L_24, NULL);
		if ((!(((uint32_t)L_25) == ((uint32_t)1))))
		{
			goto IL_00a6;
		}
	}
	{
		// if (fingerAPI.GetFingerIsGrabbingChanged(finger, false))
		RuntimeObject* L_26 = ___fingerAPI1;
		int32_t L_27 = V_5;
		NullCheck(L_26);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, int32_t, bool >::Invoke(1 /* System.Boolean Oculus.Interaction.GrabAPI.IFingerAPI::GetFingerIsGrabbingChanged(Oculus.Interaction.Input.HandFinger,System.Boolean) */, IFingerAPI_t984A994F01A7F7E4391CE4EDD04479304F220454_il2cpp_TypeInfo_var, L_26, L_27, (bool)0);
		if (!L_28)
		{
			goto IL_00a6;
		}
	}
	{
		// aFingerUngrabbed = true;
		V_1 = (bool)1;
		// if (fingers.UnselectMode == FingerUnselectMode.AnyReleased
		//     && selectsWithOptionals)
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_29 = ___fingers0;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_30 = (*(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*)L_29);
		V_3 = L_30;
		int32_t L_31;
		L_31 = GrabbingRule_get_UnselectMode_m74121A8FF930D66225FF446E8062C536D20E8045_inline((&V_3), NULL);
		bool L_32 = V_2;
		if (!((int32_t)(((((int32_t)L_31) == ((int32_t)1))? 1 : 0)&(int32_t)L_32)))
		{
			goto IL_00a6;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_00a6:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00ac:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		int32_t L_34 = V_4;
		if ((((int32_t)L_34) < ((int32_t)5)))
		{
			goto IL_001b;
		}
	}
	{
		// return !isAnyFingerGrabbing && aFingerUngrabbed;
		bool L_35 = V_0;
		bool L_36 = V_1;
		return (bool)((int32_t)(((((int32_t)L_35) == ((int32_t)0))? 1 : 0)&(int32_t)L_36));
	}
}
// UnityEngine.Vector3 Oculus.Interaction.GrabAPI.HandGrabAPI::GetPinchCenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HandGrabAPI_GetPinchCenter_m661D263F3C12107ECF5B7EC45558E60DFC55AF1D (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFingerAPI_t984A994F01A7F7E4391CE4EDD04479304F220454_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return WristOffsetToWorldPoint(_fingerPinchGrabAPI.GetCenterOffset());
		RuntimeObject* L_0 = __this->____fingerPinchGrabAPI_6;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(3 /* UnityEngine.Vector3 Oculus.Interaction.GrabAPI.IFingerAPI::GetCenterOffset() */, IFingerAPI_t984A994F01A7F7E4391CE4EDD04479304F220454_il2cpp_TypeInfo_var, L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = HandGrabAPI_WristOffsetToWorldPoint_mBB6C13E0BA2C62676646899435F3F3AD0201681F(__this, L_1, NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.GrabAPI.HandGrabAPI::GetPalmCenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HandGrabAPI_GetPalmCenter_m0519058D80C1672222960787EF1C5014AF4CEA2E (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFingerAPI_t984A994F01A7F7E4391CE4EDD04479304F220454_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return WristOffsetToWorldPoint(_fingerPalmGrabAPI.GetCenterOffset());
		RuntimeObject* L_0 = __this->____fingerPalmGrabAPI_7;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(3 /* UnityEngine.Vector3 Oculus.Interaction.GrabAPI.IFingerAPI::GetCenterOffset() */, IFingerAPI_t984A994F01A7F7E4391CE4EDD04479304F220454_il2cpp_TypeInfo_var, L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = HandGrabAPI_WristOffsetToWorldPoint_mBB6C13E0BA2C62676646899435F3F3AD0201681F(__this, L_1, NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.GrabAPI.HandGrabAPI::WristOffsetToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HandGrabAPI_WristOffsetToWorldPoint_mBB6C13E0BA2C62676646899435F3F3AD0201681F (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!Hand.GetJointPose(HandJointId.HandWristRoot, out Pose wristPose))
		RuntimeObject* L_0;
		L_0 = HandGrabAPI_get_Hand_m72A5774D97A3AAC504C0B4CAB2AD193323236A6E_inline(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(9 /* System.Boolean Oculus.Interaction.Input.IHand::GetJointPose(Oculus.Interaction.Input.HandJointId,UnityEngine.Pose&) */, IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var, L_0, 0, (&V_0));
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		// return offset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___offset0;
		return L_2;
	}

IL_0012:
	{
		// return wristPose.position + wristPose.rotation * offset;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3.___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_5 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = L_5.___rotation_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___offset0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_6, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_4, L_8, NULL);
		return L_9;
	}
}
// System.Single Oculus.Interaction.GrabAPI.HandGrabAPI::GetHandPinchStrength(Oculus.Interaction.GrabAPI.GrabbingRule&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandGrabAPI_GetHandPinchStrength_m8436E27FA3BB79B7C6CDE7F17AF82183177344AB (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___fingers0, bool ___includePinching1, const RuntimeMethod* method) 
{
	{
		// return GetHandStrength(fingers, includePinching, _fingerPinchGrabAPI);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_0 = ___fingers0;
		bool L_1 = ___includePinching1;
		RuntimeObject* L_2 = __this->____fingerPinchGrabAPI_6;
		float L_3;
		L_3 = HandGrabAPI_GetHandStrength_mFBD1F31B18D0CF98D4EA256893C687B165CD3A10(__this, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Single Oculus.Interaction.GrabAPI.HandGrabAPI::GetHandPalmStrength(Oculus.Interaction.GrabAPI.GrabbingRule&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandGrabAPI_GetHandPalmStrength_m999B7B6A1D08C27390F4B874703D8ED675F43E42 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___fingers0, bool ___includeGrabbing1, const RuntimeMethod* method) 
{
	{
		// return GetHandStrength(fingers, includeGrabbing, _fingerPalmGrabAPI);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_0 = ___fingers0;
		bool L_1 = ___includeGrabbing1;
		RuntimeObject* L_2 = __this->____fingerPalmGrabAPI_7;
		float L_3;
		L_3 = HandGrabAPI_GetHandStrength_mFBD1F31B18D0CF98D4EA256893C687B165CD3A10(__this, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Single Oculus.Interaction.GrabAPI.HandGrabAPI::GetFingerPinchStrength(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandGrabAPI_GetFingerPinchStrength_mC78A52FED9A699CB1238902F100A8CCA91608C51 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, int32_t ___finger0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFingerAPI_t984A994F01A7F7E4391CE4EDD04479304F220454_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _fingerPinchGrabAPI.GetFingerGrabStrength(finger);
		RuntimeObject* L_0 = __this->____fingerPinchGrabAPI_6;
		int32_t L_1 = ___finger0;
		NullCheck(L_0);
		float L_2;
		L_2 = InterfaceFuncInvoker1< float, int32_t >::Invoke(2 /* System.Single Oculus.Interaction.GrabAPI.IFingerAPI::GetFingerGrabStrength(Oculus.Interaction.Input.HandFinger) */, IFingerAPI_t984A994F01A7F7E4391CE4EDD04479304F220454_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Single Oculus.Interaction.GrabAPI.HandGrabAPI::GetFingerPalmStrength(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandGrabAPI_GetFingerPalmStrength_mEBE3EA5D0A30C0F731EEDC921EE68CF9317A8136 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, int32_t ___finger0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFingerAPI_t984A994F01A7F7E4391CE4EDD04479304F220454_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _fingerPalmGrabAPI.GetFingerGrabStrength(finger);
		RuntimeObject* L_0 = __this->____fingerPalmGrabAPI_7;
		int32_t L_1 = ___finger0;
		NullCheck(L_0);
		float L_2;
		L_2 = InterfaceFuncInvoker1< float, int32_t >::Invoke(2 /* System.Single Oculus.Interaction.GrabAPI.IFingerAPI::GetFingerGrabStrength(Oculus.Interaction.Input.HandFinger) */, IFingerAPI_t984A994F01A7F7E4391CE4EDD04479304F220454_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Single Oculus.Interaction.GrabAPI.HandGrabAPI::GetHandStrength(Oculus.Interaction.GrabAPI.GrabbingRule&,System.Boolean,Oculus.Interaction.GrabAPI.IFingerAPI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandGrabAPI_GetHandStrength_mFBD1F31B18D0CF98D4EA256893C687B165CD3A10 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___fingers0, bool ___includeGrabbing1, RuntimeObject* ___fingerAPI2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFingerAPI_t984A994F01A7F7E4391CE4EDD04479304F220454_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// float requiredMin = 1.0f;
		V_0 = (1.0f);
		// float optionalMax = 0f;
		V_1 = (0.0f);
		// bool usesOptionals = fingers.SelectsWithOptionals;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_0 = ___fingers0;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_1 = (*(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*)L_0);
		V_3 = L_1;
		bool L_2;
		L_2 = GrabbingRule_get_SelectsWithOptionals_m93735F7E62317ED4A0FF86D0F76C4CC487901749((&V_3), NULL);
		V_2 = L_2;
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		V_4 = 0;
		goto IL_008d;
	}

IL_0020:
	{
		// HandFinger finger = (HandFinger)i;
		int32_t L_3 = V_4;
		V_5 = L_3;
		// if (!includeGrabbing && fingerAPI.GetFingerIsGrabbing((HandFinger)i))
		bool L_4 = ___includeGrabbing1;
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		RuntimeObject* L_5 = ___fingerAPI2;
		int32_t L_6 = V_4;
		NullCheck(L_5);
		bool L_7;
		L_7 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(0 /* System.Boolean Oculus.Interaction.GrabAPI.IFingerAPI::GetFingerIsGrabbing(Oculus.Interaction.Input.HandFinger) */, IFingerAPI_t984A994F01A7F7E4391CE4EDD04479304F220454_il2cpp_TypeInfo_var, L_5, L_6);
		if (L_7)
		{
			goto IL_0087;
		}
	}

IL_0031:
	{
		// if (fingers[finger] == FingerRequirement.Ignored)
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_8 = ___fingers0;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_9 = (*(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*)L_8);
		V_3 = L_9;
		int32_t L_10 = V_5;
		int32_t L_11;
		L_11 = GrabbingRule_get_Item_m87B36C25D493D03CB84F3CC495841F952C2025AC((&V_3), L_10, NULL);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		// if (fingers[finger] == FingerRequirement.Optional)
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_12 = ___fingers0;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_13 = (*(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*)L_12);
		V_3 = L_13;
		int32_t L_14 = V_5;
		int32_t L_15;
		L_15 = GrabbingRule_get_Item_m87B36C25D493D03CB84F3CC495841F952C2025AC((&V_3), L_14, NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_0065;
		}
	}
	{
		// optionalMax = Mathf.Max(optionalMax, fingerAPI.GetFingerGrabStrength(finger));
		float L_16 = V_1;
		RuntimeObject* L_17 = ___fingerAPI2;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		float L_19;
		L_19 = InterfaceFuncInvoker1< float, int32_t >::Invoke(2 /* System.Single Oculus.Interaction.GrabAPI.IFingerAPI::GetFingerGrabStrength(Oculus.Interaction.Input.HandFinger) */, IFingerAPI_t984A994F01A7F7E4391CE4EDD04479304F220454_il2cpp_TypeInfo_var, L_17, L_18);
		float L_20;
		L_20 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_16, L_19, NULL);
		V_1 = L_20;
	}

IL_0065:
	{
		// if (fingers[finger] == FingerRequirement.Required)
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_21 = ___fingers0;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_22 = (*(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*)L_21);
		V_3 = L_22;
		int32_t L_23 = V_5;
		int32_t L_24;
		L_24 = GrabbingRule_get_Item_m87B36C25D493D03CB84F3CC495841F952C2025AC((&V_3), L_23, NULL);
		if ((!(((uint32_t)L_24) == ((uint32_t)2))))
		{
			goto IL_0087;
		}
	}
	{
		// requiredMin = Mathf.Min(requiredMin, fingerAPI.GetFingerGrabStrength(finger));
		float L_25 = V_0;
		RuntimeObject* L_26 = ___fingerAPI2;
		int32_t L_27 = V_5;
		NullCheck(L_26);
		float L_28;
		L_28 = InterfaceFuncInvoker1< float, int32_t >::Invoke(2 /* System.Single Oculus.Interaction.GrabAPI.IFingerAPI::GetFingerGrabStrength(Oculus.Interaction.Input.HandFinger) */, IFingerAPI_t984A994F01A7F7E4391CE4EDD04479304F220454_il2cpp_TypeInfo_var, L_26, L_27);
		float L_29;
		L_29 = Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline(L_25, L_28, NULL);
		V_0 = L_29;
	}

IL_0087:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		int32_t L_30 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_008d:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		int32_t L_31 = V_4;
		if ((((int32_t)L_31) < ((int32_t)5)))
		{
			goto IL_0020;
		}
	}
	{
		// return usesOptionals ? optionalMax : requiredMin;
		bool L_32 = V_2;
		if (L_32)
		{
			goto IL_0097;
		}
	}
	{
		float L_33 = V_0;
		return L_33;
	}

IL_0097:
	{
		float L_34 = V_1;
		return L_34;
	}
}
// System.Void Oculus.Interaction.GrabAPI.HandGrabAPI::InjectAllHandGrabAPI(Oculus.Interaction.Input.IHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabAPI_InjectAllHandGrabAPI_m2916A5FA3D9B5E3C2A7BCD5B9FC5B7767864FE0A (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, RuntimeObject* ___hand0, const RuntimeMethod* method) 
{
	{
		// InjectHand(hand);
		RuntimeObject* L_0 = ___hand0;
		HandGrabAPI_InjectHand_m8D8F7F371C2A3E16C0C80D69E1052555FE28C17F(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.HandGrabAPI::InjectHand(Oculus.Interaction.Input.IHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabAPI_InjectHand_m8D8F7F371C2A3E16C0C80D69E1052555FE28C17F (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, RuntimeObject* ___hand0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _hand = hand as MonoBehaviour;
		RuntimeObject* L_0 = ___hand0;
		__this->____hand_4 = ((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hand_4), (void*)((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var)));
		// Hand = hand;
		RuntimeObject* L_1 = ___hand0;
		HandGrabAPI_set_Hand_mD5AFDFC0CD8B3C0E7BCDD6B7B9BEFF70CC90F455_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.HandGrabAPI::InjectOptionalFingerPinchAPI(Oculus.Interaction.GrabAPI.IFingerAPI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabAPI_InjectOptionalFingerPinchAPI_m7BE3F921672379C65B3D661312A72627D343282A (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, RuntimeObject* ___fingerPinchAPI0, const RuntimeMethod* method) 
{
	{
		// _fingerPinchGrabAPI = fingerPinchAPI;
		RuntimeObject* L_0 = ___fingerPinchAPI0;
		__this->____fingerPinchGrabAPI_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fingerPinchGrabAPI_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.HandGrabAPI::InjectOptionalFingerGrabAPI(Oculus.Interaction.GrabAPI.IFingerAPI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabAPI_InjectOptionalFingerGrabAPI_m50BCB75D522CD46136042BCCCBAF14F21F16DE26 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, RuntimeObject* ___fingerGrabAPI0, const RuntimeMethod* method) 
{
	{
		// _fingerPalmGrabAPI = fingerGrabAPI;
		RuntimeObject* L_0 = ___fingerGrabAPI0;
		__this->____fingerPalmGrabAPI_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fingerPalmGrabAPI_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.HandGrabAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabAPI__ctor_m029469D1D2A5CE1AE394167404689C4F0D217009 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private IFingerAPI _fingerPinchGrabAPI = new FingerPinchGrabAPI();
		FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832* L_0 = (FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832*)il2cpp_codegen_object_new(FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		FingerPinchGrabAPI__ctor_mB9D2EDD374CB70D1E4009C4769043AF7D9874875(L_0, NULL);
		__this->____fingerPinchGrabAPI_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fingerPinchGrabAPI_6), (void*)L_0);
		// private IFingerAPI _fingerPalmGrabAPI = new FingerPalmGrabAPI();
		FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327* L_1 = (FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327*)il2cpp_codegen_object_new(FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FingerPalmGrabAPI__ctor_mC033897D9E80D5FC6BF9BE712495460B91A7CD99(L_1, NULL);
		__this->____fingerPalmGrabAPI_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fingerPalmGrabAPI_7), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Interaction.Deprecated.FingerGrabAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerGrabAPI__ctor_m3B9926AE56338B82DD0CEE906301CED1C1378011 (FingerGrabAPI_t3C16A7EFBD664E8A8966BFD6632D4211B4A8584D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Interaction.Deprecated.FingerPinchAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchAPI__ctor_m37A59B06AA86CC5E8E5B044E0796A746341202EF (FingerPinchAPI_t262FF8BDF662BA6239445E197D50038A09ABCA04* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Interaction.Deprecated.HandPoseRecordable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPoseRecordable__ctor_mD6A2E43C42E976857781023B22A1BB6F146A363E (HandPoseRecordable_t14C8028E918A613DAC091C87FD53826267E5AA89* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Interaction.Deprecated.HandPoseRecorder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPoseRecorder__ctor_m6696EA3046C50EE7444CBEDC2AF9E25B090B1D62 (HandPoseRecorder_tFFC867D177BB2A3F71AEC5602232A3442D969417* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Interaction.Deprecated.DummyDataModifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyDataModifier__ctor_mD9E07EA68F920761DA4B4B76BDB4F598FCE8D62D (DummyDataModifier_t9697A00B2EE833C729C15C325713BD3C053FDF1B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Interaction.Deprecated.FixedScaleDataModifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedScaleDataModifier__ctor_mE9BAF71E118CDAC357131DF2A837FF2E07A8322A (FixedScaleDataModifier_t0C4BC79CB314F63A3FE6F23EDD144DBA3C778B28* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Interaction.Deprecated.JointRotationHistoryModifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointRotationHistoryModifier__ctor_m74F9C578C4703F97E49007125BA6E882B50C55AD (JointRotationHistoryModifier_tC19F39663A0EB67C977C0403041E5F486DDC24A8* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Interaction.Deprecated.LastKnownGoodDataModifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LastKnownGoodDataModifier__ctor_m2310F04F21D4AF648B31C45E5C6BB98BC5A5B0CA (LastKnownGoodDataModifier_t80A78C5ECFB38E898AC5CE2FE9B8F3DDD112922C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Interaction.Deprecated.OneEuroFilterPositionDataModifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneEuroFilterPositionDataModifier__ctor_m2AC97FD9FB1F6B5862ED1074B10F75DDDE955073 (OneEuroFilterPositionDataModifier_t5B3CB83D9A08142C0C38588D2E4DEE16FB0A37BC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Interaction.Deprecated.OneEuroFilterRotationDataModifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneEuroFilterRotationDataModifier__ctor_m8B7E4A57F5649BFE21C63F474A9923FCA69BB3CD (OneEuroFilterRotationDataModifier_tAD359702D9F84B8159042B94BE0E5AB29A97500E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Interaction.Deprecated.SyntheticHandModifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyntheticHandModifier__ctor_mDBE3D14C2D21839B6DF01C8CA4681A2B033E8A17 (SyntheticHandModifier_t59CA9B8F4D363EA2846F84E1CF9B9D7FDE05F16F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Interaction.Deprecated.JointLocking::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointLocking__ctor_m2B510082FA2944D8DBDE242EF0D115AC95D3434D (JointLocking_t7E9BB5955E0CCE41E59BD886BED92798FC6B2038* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Interaction.Deprecated.HandGrabInteractionUtilities::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabInteractionUtilities__ctor_mBC4A4695E6E253D5C87EF180FFEF6EDFC6045015 (HandGrabInteractionUtilities_t938018C797EBE51065FF75A77AECA109EA7E157E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Interaction.Deprecated.GrabPoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabPoint__ctor_m595907CF5C5D3EF04D928B178363627E62C5E692 (GrabPoint_tF1744AF0289E825C7C63D10B1FA2BE545DDEE985* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Interaction.Deprecated.InteractableTransformableConnection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableTransformableConnection__ctor_m6C8C3D619620AA67FD11B34C09F93E1713E4D1FA (InteractableTransformableConnection_tB872442B5A31F08BCB12A7270EAB415F82F7BA6E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Interaction.Deprecated.OneHandFreeTransformer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneHandFreeTransformer__ctor_m874D76B537F24DC5DD00EC00C884623CD393040E (OneHandFreeTransformer_t571E099023652EED3F3C15D41409FC531ABB778B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Interaction.Deprecated.OneHandPhysicsJointTransformer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneHandPhysicsJointTransformer__ctor_m9DE77036FB7AD03F4D95CB702966FAB0BD1676BD (OneHandPhysicsJointTransformer_t4C159D48CF783C45378E718AA6F5DB6D7E47E6E3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Interaction.Deprecated.OneHandRotateTransformer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneHandRotateTransformer__ctor_m3A7B55E87E48FB73EC3C0BC439E37D4129519D63 (OneHandRotateTransformer_tEE2AC7B0C36D7211445C1A309688F4A4B367A988* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Interaction.Deprecated.OneHandTranslateTransformer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneHandTranslateTransformer__ctor_mE4FAC9ACDBD337C9168EBCA2CE08D65485EDCD31 (OneHandTranslateTransformer_t64D5E9E2C0A42EE79C58F5929131FBBBEBD86C7F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Interaction.Deprecated.SnapPoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnapPoint__ctor_mCA1B3E0216D382D49D1CF8E8B4726353ED68F5FD (SnapPoint_t61DC9883BEC8539C7C51CC7C98E5C28B4FEDF6E6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Interaction.Deprecated.Transformable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transformable__ctor_m94DFA9B2DA02F0377FA2833A577719BAEFD79BD4 (Transformable_tBBAF38A85C229EA188DB5F5A6A42008F3B672993* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Interaction.Deprecated.TwoHandFreeTransformer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoHandFreeTransformer__ctor_mEB07358952A8BA6ACE7F63038072F8F06E7E7C3C (TwoHandFreeTransformer_tB5076772ECD47864807B3F53631E18DE1C77EB9E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Interaction.Deprecated.TwoHandPlaneTransformer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoHandPlaneTransformer__ctor_mBD8470876630FA91BE3C5363DEE6CB9C9D57F1E4 (TwoHandPlaneTransformer_t8DE5F7E27BBF9683D3A7E7754A1D6ABC8B91CB34* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Interaction.Deprecated.PhysicsTransformable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsTransformable__ctor_m77CB4E951916E7554F3E45EE9C14A19AD686D8AD (PhysicsTransformable_t387F108E92330DCE5547F4A316233A4FFF6B1926* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Interaction.Deprecated.TransformableUnityEventWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformableUnityEventWrapper__ctor_m7E6F876FACFC86CDF53E929DBBDBE30F7E803F7C (TransformableUnityEventWrapper_tF76B34B54AA37FD9322E031288288A7BDB5B5EE2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* HandGrabPoint_get_RelativeTo_mE6D33E23708CD8E671E965978C4488CCA7B68679_inline (HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* __this, const RuntimeMethod* method) 
{
	{
		// public Transform RelativeTo { get => _relativeTo; set => _relativeTo = value; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____relativeTo_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HandPose_get_Handedness_m34F5F962E694094AA60C7415BA94CB4A8E79FC52_inline (HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* __this, const RuntimeMethod* method) 
{
	{
		// get => _handedness;
		int32_t L_0 = __this->____handedness_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabPoint_set_SnapSurface_m7993B7323F2FCE40AFB15CBEAB5B8E9F5A27D781_inline (HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// _snapSurface = value;
		RuntimeObject* L_0 = ___value0;
		__this->____snapSurface_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____snapSurface_6), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabPoint_InjectRelativeTo_m157DB78365211780A5DD01FF40DB09B430CEBBEC_inline (HandGrabPoint_t9173C1325B1744B13D3FC363EDB9FD4233B7C40C* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo0, const RuntimeMethod* method) 
{
	{
		// _relativeTo = relativeTo;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___relativeTo0;
		__this->____relativeTo_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____relativeTo_4), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PoseMeasureParameters_get_MaxDistance_mDC7ED28CDF4C34843DE9A4D3F2964F0E7C9012E2_inline (PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* __this, const RuntimeMethod* method) 
{
	{
		// public float MaxDistance => _maxDistance;
		float L_0 = __this->____maxDistance_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PoseMeasureParameters_get_PositionRotationWeight_m5B280E4B485A6666B2E1BE5D4BB54CB73FAD2A10_inline (PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1* __this, const RuntimeMethod* method) 
{
	{
		// public float PositionRotationWeight => _positionRotationWeight;
		float L_0 = __this->____positionRotationWeight_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___from0), NULL);
		float L_1;
		L_1 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___to1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___from0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___to1;
		float L_7;
		L_7 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mDFA261F10D391C520F1E8B27A02F8EC44DEDA9F4_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___values0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___values0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0047;
	}

IL_0015:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___values0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		V_4 = 1;
		goto IL_0038;
	}

IL_001e:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___values0;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		float L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		float L_10 = V_1;
		V_5 = (bool)((((float)L_9) > ((float)L_10))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = ___values0;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		float L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = L_15;
	}

IL_0031:
	{
		int32_t L_16 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0038:
	{
		int32_t L_17 = V_4;
		int32_t L_18 = V_0;
		V_6 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_6;
		if (L_19)
		{
			goto IL_001e;
		}
	}
	{
		float L_20 = V_1;
		V_3 = L_20;
		goto IL_0047;
	}

IL_0047:
	{
		float L_21 = V_3;
		return L_21;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGhost_InjectHandPuppet_m8BEBAEED79E5CD179F968882AF227927CB004B27_inline (HandGhost_tCAE715DC9E23EAE5DAFEA521288F18A8D3AFEA58* __this, HandPuppet_tF32101BA76C9B7D199C764ED4E0D8E31C00ECD70* ___puppet0, const RuntimeMethod* method) 
{
	{
		// _puppet = puppet;
		HandPuppet_tF32101BA76C9B7D199C764ED4E0D8E31C00ECD70* L_0 = ___puppet0;
		__this->____puppet_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____puppet_4), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGhost_InjectGripPoint_m1F32A1B18176A6F40778E0275580C29237076ACC_inline (HandGhost_tCAE715DC9E23EAE5DAFEA521288F18A8D3AFEA58* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___gripPoint0, const RuntimeMethod* method) 
{
	{
		// _gripPoint = gripPoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___gripPoint0;
		__this->____gripPoint_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gripPoint_5), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HandDataSourceConfig_get_TrackingToWorldTransformer_m78056DEE0EA266365275987EB71CA8DDF9313400_inline (HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* __this, const RuntimeMethod* method) 
{
	{
		// public ITrackingToWorldTransformer TrackingToWorldTransformer { get; set; }
		RuntimeObject* L_0 = __this->___U3CTrackingToWorldTransformerU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabInteractorVisual_InjectSyntheticHand_m7F26C9D33D0D8F58837B25102D6FC41F7C043F77_inline (HandGrabInteractorVisual_tC7BD96F6109967EA0B7DACE15907F34E7DE61F6B* __this, SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* ___syntheticHand0, const RuntimeMethod* method) 
{
	{
		// _syntheticHand = syntheticHand;
		SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* L_0 = ___syntheticHand0;
		__this->____syntheticHand_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____syntheticHand_6), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* BoxSurface_get_RelativeTo_m68823C05FA1E3A26DAEEFCC6A586C0EF17F1CD81_inline (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, const RuntimeMethod* method) 
{
	{
		// get => _relativeTo;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____relativeTo_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoxSurface_set_Data_m9FDF515CE7A5CCB7CC2331C4F26D285A349B9631_inline (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* ___value0, const RuntimeMethod* method) 
{
	{
		// _data = value;
		BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* L_0 = ___value0;
		__this->____data_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_4), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* BoxSurface_get_GripPoint_m8FB2DB8D71AB2B5EA2FB6AB6A6E836D874526155_inline (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, const RuntimeMethod* method) 
{
	{
		// get => _gripPoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____gripPoint_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Project_m47BC1C674D5732D50B6E136626FB2C53E18A706E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___onNormal1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___onNormal1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___onNormal1;
		float L_2;
		L_2 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_0, L_1, NULL);
		V_0 = L_2;
		float L_3 = V_0;
		float L_4 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		V_1 = (bool)((((float)L_3) < ((float)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_6;
		goto IL_004c;
	}

IL_001d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___vector0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___onNormal1;
		float L_9;
		L_9 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_7, L_8, NULL);
		V_3 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___onNormal1;
		float L_11 = L_10.___x_2;
		float L_12 = V_3;
		float L_13 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___onNormal1;
		float L_15 = L_14.___y_3;
		float L_16 = V_3;
		float L_17 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___onNormal1;
		float L_19 = L_18.___z_4;
		float L_20 = V_3;
		float L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), ((float)(((float)il2cpp_codegen_multiply(L_11, L_12))/L_13)), ((float)(((float)il2cpp_codegen_multiply(L_15, L_16))/L_17)), ((float)(((float)il2cpp_codegen_multiply(L_19, L_20))/L_21)), /*hidden argument*/NULL);
		V_2 = L_22;
		goto IL_004c;
	}

IL_004c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_2;
		return L_23;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoxSurface_InjectData_mBAFBCED8AA78EE8ED58DD4AF22D687D9B2927CC4_inline (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* ___data0, const RuntimeMethod* method) 
{
	{
		// _data = data;
		BoxSurfaceData_tE7530C8B4574CF84202A7DC65044C7AAD2545C28* L_0 = ___data0;
		__this->____data_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_4), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoxSurface_InjectRelativeTo_m8341182DED88E327488B3E38226B052A66FAD2E6_inline (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo0, const RuntimeMethod* method) 
{
	{
		// _relativeTo = relativeTo;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___relativeTo0;
		__this->____relativeTo_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____relativeTo_5), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoxSurface_InjectGripPoint_m01B5459B30796A1A8A59E9F5B891FF82206A3721_inline (BoxSurface_tB52DEAEBF76A367FCCF318D7850D6881324DA977* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___gripPoint0, const RuntimeMethod* method) 
{
	{
		// _gripPoint = gripPoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___gripPoint0;
		__this->____gripPoint_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gripPoint_6), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColliderSurface_InjectCollider_m4C1AC74F1CF206F58246DF738A4DDC84F121CC5C_inline (ColliderSurface_tD86CE6FAE81AE6A40C631D4452569C21092E31C4* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider0, const RuntimeMethod* method) 
{
	{
		// _collider = collider;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___collider0;
		__this->____collider_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____collider_4), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* CylinderSurface_get_GripPoint_mAA81F61E2271E2125C756B3BD3EFAA9FAB05E877_inline (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, const RuntimeMethod* method) 
{
	{
		// get => _gripPoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____gripPoint_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ProjectOnPlane_mCAFA9F9416EA4740DCA8757B6E52260BF536770A_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___planeNormal1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___planeNormal1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___planeNormal1;
		float L_2;
		L_2 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_0, L_1, NULL);
		V_0 = L_2;
		float L_3 = V_0;
		float L_4 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		V_1 = (bool)((((float)L_3) < ((float)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0019;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		V_2 = L_6;
		goto IL_005d;
	}

IL_0019:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___vector0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___planeNormal1;
		float L_9;
		L_9 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_7, L_8, NULL);
		V_3 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___planeNormal1;
		float L_13 = L_12.___x_2;
		float L_14 = V_3;
		float L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___vector0;
		float L_17 = L_16.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___planeNormal1;
		float L_19 = L_18.___y_3;
		float L_20 = V_3;
		float L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___vector0;
		float L_23 = L_22.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___planeNormal1;
		float L_25 = L_24.___z_4;
		float L_26 = V_3;
		float L_27 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_28), ((float)il2cpp_codegen_subtract(L_11, ((float)(((float)il2cpp_codegen_multiply(L_13, L_14))/L_15)))), ((float)il2cpp_codegen_subtract(L_17, ((float)(((float)il2cpp_codegen_multiply(L_19, L_20))/L_21)))), ((float)il2cpp_codegen_subtract(L_23, ((float)(((float)il2cpp_codegen_multiply(L_25, L_26))/L_27)))), /*hidden argument*/NULL);
		V_2 = L_28;
		goto IL_005d;
	}

IL_005d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_2;
		return L_29;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* CylinderSurface_get_RelativeTo_m38D2A74202F0E53281B082B564827F5C63C36739_inline (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, const RuntimeMethod* method) 
{
	{
		// get => _relativeTo;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____relativeTo_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline (float ___t0, float ___length1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___t0;
		float L_1 = ___t0;
		float L_2 = ___length1;
		float L_3;
		L_3 = floorf(((float)(L_1/L_2)));
		float L_4 = ___length1;
		float L_5 = ___length1;
		float L_6;
		L_6 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply(L_3, L_4)))), (0.0f), L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CylinderSurface_set_Data_m3E62E48BC647779CF1737370D509BAB3AD63278B_inline (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* ___value0, const RuntimeMethod* method) 
{
	{
		// _data = value;
		CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* L_0 = ___value0;
		__this->____data_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_4), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_SignedAngle_mD30E71B2F64983C2C4D86F17E7023BAA84CE50BE_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___from0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___to1;
		float L_2;
		L_2 = Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline(L_0, L_1, NULL);
		V_0 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___from0;
		float L_4 = L_3.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___to1;
		float L_6 = L_5.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___from0;
		float L_8 = L_7.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___to1;
		float L_10 = L_9.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_4, L_6)), ((float)il2cpp_codegen_multiply(L_8, L_10))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___from0;
		float L_12 = L_11.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___to1;
		float L_14 = L_13.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___from0;
		float L_16 = L_15.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___to1;
		float L_18 = L_17.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_12, L_14)), ((float)il2cpp_codegen_multiply(L_16, L_18))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = ___from0;
		float L_20 = L_19.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___to1;
		float L_22 = L_21.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = ___from0;
		float L_24 = L_23.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = ___to1;
		float L_26 = L_25.___x_2;
		V_3 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_20, L_22)), ((float)il2cpp_codegen_multiply(L_24, L_26))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___axis2;
		float L_28 = L_27.___x_2;
		float L_29 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = ___axis2;
		float L_31 = L_30.___y_3;
		float L_32 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = ___axis2;
		float L_34 = L_33.___z_4;
		float L_35 = V_3;
		float L_36;
		L_36 = Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_28, L_29)), ((float)il2cpp_codegen_multiply(L_31, L_32)))), ((float)il2cpp_codegen_multiply(L_34, L_35)))), NULL);
		V_4 = L_36;
		float L_37 = V_0;
		float L_38 = V_4;
		V_5 = ((float)il2cpp_codegen_multiply(L_37, L_38));
		goto IL_0086;
	}

IL_0086:
	{
		float L_39 = V_5;
		return L_39;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CylinderSurface_InjectData_m0F95758FD54FA036A69E3CF0CF64AF5A5689C61C_inline (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* ___data0, const RuntimeMethod* method) 
{
	{
		// _data = data;
		CylinderSurfaceData_t86BFD1C9A0D669E6280024BDA98CF4B6D695FA13* L_0 = ___data0;
		__this->____data_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_4), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CylinderSurface_InjectRelativeTo_m3A4143D6DAAFF5DBD243489A6996243B4F681669_inline (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo0, const RuntimeMethod* method) 
{
	{
		// _relativeTo = relativeTo;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___relativeTo0;
		__this->____relativeTo_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____relativeTo_5), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CylinderSurface_InjectGripPoint_m72AA9E8869F7DF78724EC8BAACA6DEA6E4572517_inline (CylinderSurface_t76E811798749CE18305C6C52C530DEE6D355CDB8* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___gripPoint0, const RuntimeMethod* method) 
{
	{
		// _gripPoint = gripPoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___gripPoint0;
		__this->____gripPoint_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gripPoint_6), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 PoseCalculator_Invoke_m35DB7C55FD3BAE3D5614737177E10D9273F5D27D_inline (PoseCalculator_t429ED47D5C6C634856123369B6EA2A294EE58ED9* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___desiredPose0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___snapPose1, const RuntimeMethod* method) 
{
	typedef Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 (*FunctionPointerType) (RuntimeObject*, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___desiredPose0, ___snapPose1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* SphereSurface_get_RelativeTo_m1F769107F4CA85046D0330189DA956FE5F9E1C6C_inline (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, const RuntimeMethod* method) 
{
	{
		// get => _relativeTo;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____relativeTo_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* SphereSurface_get_GripPoint_m8522E647F035327EFC168A9C0C31AC0B007EBF57_inline (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, const RuntimeMethod* method) 
{
	{
		// get => _gripPoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____gripPoint_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_m77F64620D73934C56BEE37A64016DBDCB9D21DB8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___lhs0;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___rhs1;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___lhs0;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___rhs1;
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___lhs0;
		float L_21 = L_20.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___rhs1;
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_005a;
	}

IL_005a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SphereSurface_set_Data_m8F045794467C4365539C07B4613E77B309C7C69F_inline (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A* ___value0, const RuntimeMethod* method) 
{
	{
		// _data = value;
		SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A* L_0 = ___value0;
		__this->____data_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_4), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SphereSurface_InjectData_m867B1DDD82F515363ADEA3F1B2983B738E415F39_inline (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A* ___data0, const RuntimeMethod* method) 
{
	{
		// _data = data;
		SphereSurfaceData_t237D86482D906393B8357ADC05409EE920B7274A* L_0 = ___data0;
		__this->____data_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_4), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SphereSurface_InjectRelativeTo_m270C5FD4255D7B28D3D1AC8CC7E0073D785C270D_inline (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo0, const RuntimeMethod* method) 
{
	{
		// _relativeTo = relativeTo;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___relativeTo0;
		__this->____relativeTo_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____relativeTo_5), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SphereSurface_InjectGripPoint_m8FEC738D640CF2E4FE97FDB0B7CFB07C62F456FB_inline (SphereSurface_t6C5FB3FC0C88AFC68A1DF0F855DBF1F429D5975E* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___gripPoint0, const RuntimeMethod* method) 
{
	{
		// _gripPoint = gripPoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___gripPoint0;
		__this->____gripPoint_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gripPoint_6), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D GrabbingRule_get_DefaultPinchRule_m4D757CE5E8DD549FDB7E01FFD283DE8F6C0061F5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GrabbingRule DefaultPinchRule { get; } = new GrabbingRule()
		il2cpp_codegen_runtime_class_init_inline(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_0 = ((GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_StaticFields*)il2cpp_codegen_static_fields_for(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var))->___U3CDefaultPinchRuleU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D GrabbingRule_get_DefaultPalmRule_mB9E377D27547C4D09D89E03ABE38940977732768_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GrabbingRule DefaultPalmRule { get; } = new GrabbingRule()
		il2cpp_codegen_runtime_class_init_inline(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_0 = ((GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_StaticFields*)il2cpp_codegen_static_fields_for(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var))->___U3CDefaultPalmRuleU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabInteractableData_set_SupportedGrabTypes_m5B8FE59B7EAAF0915DC9F99B920EBB17E17F9F5A_inline (HandGrabInteractableData_t46F6982E1DA3B4A95A3510E6E001D4FF8CB51C69* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public GrabTypeFlags SupportedGrabTypes { get; set; } = GrabTypeFlags.All;
		int32_t L_0 = ___value0;
		__this->___U3CSupportedGrabTypesU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HandGrabInteractableData_get_SupportedGrabTypes_m645BE16149B48BCD75C7CB1EAAB08D95780CB364_inline (HandGrabInteractableData_t46F6982E1DA3B4A95A3510E6E001D4FF8CB51C69* __this, const RuntimeMethod* method) 
{
	{
		// public GrabTypeFlags SupportedGrabTypes { get; set; } = GrabTypeFlags.All;
		int32_t L_0 = __this->___U3CSupportedGrabTypesU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabInteractableData_set_PinchGrabRules_m344A0095D6EC49A3C0D18F03A2429E40E2DD8D3F_inline (HandGrabInteractableData_t46F6982E1DA3B4A95A3510E6E001D4FF8CB51C69* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D ___value0, const RuntimeMethod* method) 
{
	{
		// public GrabbingRule PinchGrabRules { get; set; } = GrabbingRule.DefaultPinchRule;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_0 = ___value0;
		__this->___U3CPinchGrabRulesU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabInteractableData_set_PalmGrabRules_mFF0D9A26D57EA0FAEE2BE3566D09D601CF5DCFA4_inline (HandGrabInteractableData_t46F6982E1DA3B4A95A3510E6E001D4FF8CB51C69* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D ___value0, const RuntimeMethod* method) 
{
	{
		// public GrabbingRule PalmGrabRules { get; set; } = GrabbingRule.DefaultPalmRule;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_0 = ___value0;
		__this->___U3CPalmGrabRulesU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D GrabbingRule_get_FullGrab_mEF2400CB55E6A3D0CE520CD0F7EEFC68AAB1C828_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GrabbingRule FullGrab { get; } = new GrabbingRule()
		il2cpp_codegen_runtime_class_init_inline(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_0 = ((GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_StaticFields*)il2cpp_codegen_static_fields_for(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var))->___U3CFullGrabU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FingerGrabData_get_IsGrabbingChanged_m637945455FACC83F5D0507B69D4CE34AD9C9973A_inline (FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsGrabbingChanged { get; private set; }
		bool L_0 = __this->___U3CIsGrabbingChangedU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FingerGrabData_set_IsGrabbingChanged_m6476DBC59E4B5EC3BD9BCB9DF9D4F22DFE5D3C28_inline (FingerGrabData_t0B1160264E184A7CD94150DC098A56B254AB4C0D* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsGrabbingChanged { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsGrabbingChangedU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FingerPinchData_get_TipPosition_m58FA8A0B4731588698E3A5CDF80267150D195F4E_inline (FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 TipPosition { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CTipPositionU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FingerPinchData_get_IsPinchingChanged_mC7CD68EA612DC57CB0920BC1A1151AFBBDC7B859_inline (FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsPinchingChanged { get; private set; }
		bool L_0 = __this->___U3CIsPinchingChangedU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FingerPinchData_set_TipPosition_mC73A53E4D31D91685484226D669D44646B0CA042_inline (FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 TipPosition { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CTipPositionU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FingerPinchData_set_IsPinchingChanged_mF0BFCA9BE005D7373EDB2093035102FB668EBF6B_inline (FingerPinchData_tE7F40B3E549C2D3C381EC423BE1DBAEF77C49702* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsPinchingChanged { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsPinchingChangedU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FingerPinchData_get_TipPosition_mD5B40DFF813DE6F3C3B6BCF1091C32D028AAF5D7_inline (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 TipPosition { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CTipPositionU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FingerPinchData_get_IsPinchingChanged_mCC16B97C0A6CA61D1D18800F7FBF1E2F4E08340A_inline (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsPinchingChanged { get; private set; }
		bool L_0 = __this->___U3CIsPinchingChangedU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FingerPinchData_set_TipPosition_m2E44E281C9260D70D7A96DDF84EDA38C06E79480_inline (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 TipPosition { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CTipPositionU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FingerPinchData_set_IsPinchingChanged_m36687E55DAA73DDC0177E6E9E6A1E23D91600B4A_inline (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsPinchingChanged { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsPinchingChangedU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabAPI_InjectOptionalFingerPinchAPI_m7BE3F921672379C65B3D661312A72627D343282A_inline (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, RuntimeObject* ___fingerPinchAPI0, const RuntimeMethod* method) 
{
	{
		// _fingerPinchGrabAPI = fingerPinchAPI;
		RuntimeObject* L_0 = ___fingerPinchAPI0;
		__this->____fingerPinchGrabAPI_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fingerPinchGrabAPI_6), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GrabbingRule_get_UnselectMode_m74121A8FF930D66225FF446E8062C536D20E8045_inline (GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* __this, const RuntimeMethod* method) 
{
	{
		// public FingerUnselectMode UnselectMode => _unselectMode;
		int32_t L_0 = __this->____unselectMode_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabAPI_set_Hand_mD5AFDFC0CD8B3C0E7BCDD6B7B9BEFF70CC90F455_inline (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IHand Hand { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CHandU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHandU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HandGrabAPI_get_Hand_m72A5774D97A3AAC504C0B4CAB2AD193323236A6E_inline (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, const RuntimeMethod* method) 
{
	{
		// public IHand Hand { get; private set; }
		RuntimeObject* L_0 = __this->___U3CHandU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline (float ___f0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___f0;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
