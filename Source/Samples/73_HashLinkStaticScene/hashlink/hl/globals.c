﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hl/BaseType.h>
#include <hl/Class.h>
#include <_std/String.h>
#include <_std/Date.h>
#include <urho3d/Application.h>
#include <haxe/ds/StringMap.h>
#include <haxe/ds/ObjectMap.h>
#include <urho3d/Node.h>
#include <hl/types/ArrayAccess.h>
#include <hl/types/ArrayBase.h>
#include <hl/types/ArrayBytes_hl_F32.h>
#include <urho3d/Scene.h>
#include <_std/StaticSceneSample.h>
#include <_std/Main.h>
#include <_std/Std.h>
#include <urho3d/_Context/Context_Impl_.h>
#include <haxe/Log.h>
#include <urho3d/Component.h>
#include <urho3d/Zone.h>
#include <urho3d/StaticModel.h>
#include <urho3d/Light.h>
#include <urho3d/Camera.h>
#include <urho3d/_Vector3/Vector3_Impl_.h>
#include <_std/StringBuf.h>
#include <_std/SysError.h>
#include <hl/natives.h>
#include <hl/Enum.h>
#include <sys/thread/Lock.h>
#include <haxe/EntryPoint.h>
#include <haxe/Exception.h>
#include <haxe/ValueException.h>
#include <haxe/_Int64/___Int64.h>
#include <haxe/MainEvent.h>
#include <_std/Math.h>
#include <haxe/MainLoop.h>
#include <hl/NativeArrayIterator_Dynamic.h>
#include <haxe/iterators/ArrayIterator.h>
#include <haxe/iterators/ArrayKeyValueIterator.h>
#include <hl/NativeArrayIterator_Int.h>
#include <haxe/io/Error.h>
#include <hl/types/BytesIterator_Float.h>
#include <hl/types/BytesKeyValueIterator_Float.h>
#include <hl/types/BytesIterator_Int.h>
#include <hl/types/BytesKeyValueIterator_Int.h>
#include <hl/types/BytesIterator_hl_F32.h>
#include <hl/types/BytesKeyValueIterator_hl_F32.h>
#include <hl/types/BytesIterator_hl_UI16.h>
#include <hl/types/BytesKeyValueIterator_hl_UI16.h>
#include <hl/types/ArrayDynIterator.h>
#include <hl/types/ArrayDynKeyValueIterator.h>
#include <hl/types/ArrayObjIterator.h>
#include <hl/types/ArrayObjKeyValueIterator.h>
#include <urho3d/AnimatedModel.h>
#include <urho3d/BillboardSet.h>
#include <urho3d/DecalSet.h>
#include <urho3d/RigidBody.h>
#include <urho3d/CollisionShape.h>
#include <urho3d/Skybox.h>
#include <urho3d/AnimationController.h>
#include <urho3d/LogicComponent.h>
#include <urho3d/Constraint.h>
#include <urho3d/SoundSource.h>
#include <urho3d/ParticleEmitter2D.h>
#include <urho3d/Graphics.h>
#include <urho3d/Math.h>
#include <urho3d/_Vector2/Vector2_Impl_.h>
#include <_std/Reflect.h>
#include <hl/CoreType.h>
#include <hl/CoreEnum.h>
#include <hl/_Bytes/Bytes_Impl_.h>
#include <_std/Sys.h>
#include <_std/Type.h>
#include <haxe/IMap.h>
#include <sys/thread/_Mutex/Mutex_Impl_.h>
#include <sys/thread/_Deque/Deque_Impl_.h>
#include <haxe/_Int32/Int32_Impl_.h>
#include <haxe/NativeStackTrace.h>
#include <haxe/ds/ArraySort.h>
#include <hl/_NativeArray/NativeArray_Impl_.h>
#include <hl/_Type/Type_Impl_.h>
#include <hl/types/ArrayDyn.h>
#include <hl/types/_BytesMap/BytesMap_Impl_.h>
#include <hl/types/_ObjectMap/ObjectMap_Impl_.h>
#include <urho3d/_AbstractApplication/AbstractApplication_Impl_.h>
#include <urho3d/_AnimatedModel/AbstractAnimatedModel_Impl_.h>
#include <urho3d/_Animation/Animation_Impl_.h>
#include <urho3d/_AnimationController/AbstractAnimationController_Impl_.h>
#include <urho3d/_AnimationState/AnimationState_Impl_.h>
#include <urho3d/_BiasParameters/BiasParameters_Impl_.h>
#include <urho3d/_Billboard/Billboard_Impl_.h>
#include <urho3d/_BillboardSet/BillboardPOD_Impl_.h>
#include <urho3d/_BillboardSet/AbstractBillboardSet_Impl_.h>
#include <urho3d/_Bone/Bone_Impl_.h>
#include <urho3d/_BoundingBox/BoundingBox_Impl_.h>
#include <urho3d/_Camera/AbstractCamera_Impl_.h>
#include <urho3d/_CascadeParameters/CascadeParameters_Impl_.h>
#include <urho3d/_CollisionShape/AbstractCollisionShape_Impl_.h>
#include <urho3d/_Color/Color_Impl_.h>
#include <urho3d/_Component/AbstractComponent_Impl_.h>
#include <urho3d/_Constraint/AbstractConstraint_Impl_.h>
#include <urho3d/_DecalSet/AbstractDecalSet_Impl_.h>
#include <urho3d/_Drawable/Drawable_Impl_.h>
#include <urho3d/_File/File_Impl_.h>
#include <urho3d/_HString/HString_Impl_.h>
#include <urho3d/_Input/KeyDown_Impl_.h>
#include <urho3d/_Input/KeyPress_Impl_.h>
#include <urho3d/Input.h>
#include <urho3d/_IntRect/IntRect_Impl_.h>
#include <urho3d/_IntVector2/IntVector2_Impl_.h>
#include <urho3d/_Light/AbstractLight_Impl_.h>
#include <urho3d/_LogicComponent/UpdateEvent_Impl_.h>
#include <urho3d/_LogicComponent/AbstractLogicComponent_Impl_.h>
#include <urho3d/_Material/Material_Impl_.h>
#include <urho3d/_Model/Model_Impl_.h>
#include <urho3d/_Node/AbstractNode_Impl_.h>
#include <urho3d/_Object/Object_Impl_.h>
#include <urho3d/_Octree/Octree_Impl_.h>
#include <urho3d/_ParticleEffect2D/ParticleEffect2D_Impl_.h>
#include <urho3d/_ParticleEmitter2D/AbstractParticleEmitter2D_Impl_.h>
#include <urho3d/_PhysicsRaycastResult/PhysicsRaycastResult_Impl_.h>
#include <urho3d/_PhysicsWorld/PhysicsWorld_Impl_.h>
#include <urho3d/_Quaternion/Quaternion_Impl_.h>
#include <urho3d/_Ray/Ray_Impl_.h>
#include <urho3d/_RayQueryResult/RayQueryResult_Impl_.h>
#include <urho3d/_RayQueryResults/RayQueryResults_Impl_.h>
#include <urho3d/_RefCounted/RefCounted_Impl_.h>
#include <urho3d/_RenderPath/RenderPath_Impl_.h>
#include <urho3d/_Renderer/Viewports_Impl_.h>
#include <urho3d/Renderer.h>
#include <urho3d/_RigidBody/AbstractRigidBody_Impl_.h>
#include <urho3d/_Scene/AbstractScene_Impl_.h>
#include <urho3d/_Skeleton/Skeleton_Impl_.h>
#include <urho3d/_Skybox/AbstractSkybox_Impl_.h>
#include <urho3d/_Sound/Sound_Impl_.h>
#include <urho3d/_SoundSource/AbstractSoundSource_Impl_.h>
#include <urho3d/_StaticModel/AbstractStaticModel_Impl_.h>
#include <urho3d/_StringHash/StringHash_Impl_.h>
#include <urho3d/_TColor/TColor_Impl_.h>
#include <urho3d/_TIntVector2/TIntVector2_Impl_.h>
#include <urho3d/_TNode/TNode_Impl_.h>
#include <urho3d/_TQuaternion/TQuaternion_Impl_.h>
#include <urho3d/_TRay/TRay_Impl_.h>
#include <urho3d/_TRigidBody/TRigidBody_Impl_.h>
#include <urho3d/_TStringHash/TStringHash_Impl_.h>
#include <urho3d/_TVariant/TVariant_Impl_.h>
#include <urho3d/_TVariantMap/TVariantMap_Impl_.h>
#include <urho3d/_TVector2/TVector2_Impl_.h>
#include <urho3d/_TVector3/TVector3_Impl_.h>
#include <urho3d/_TVectorBuffer/TVectorBuffer_Impl_.h>
#include <urho3d/_Technique/Technique_Impl_.h>
#include <urho3d/_Texture/Texture_Impl_.h>
#include <urho3d/_TouchState/TouchState_Impl_.h>
#include <urho3d/_ValueAnimation/ValueAnimation_Impl_.h>
#include <urho3d/_Variant/Variant_Impl_.h>
#include <urho3d/_VariantMap/VariantMap_Impl_.h>
#include <urho3d/_VectorBuffer/VectorBuffer_Impl_.h>
#include <urho3d/_Viewport/Viewport_Impl_.h>
#include <urho3d/_XMLFile/XMLFile_Impl_.h>
#include <urho3d/_Zone/AbstractZone_Impl_.h>
extern hl_type t$String;

// Globals
hl__$BaseType g$_hl_BaseType = 0;
hl__Class g$_hl_Class = 0;
$String g$_String = 0;
$Date g$_Date = 0;
urho3d__$Application g$_urho3d_Application = 0;
haxe__ds__$StringMap g$_haxe_ds_StringMap = 0;
haxe__ds__$ObjectMap g$_haxe_ds_ObjectMap = 0;
urho3d__$Node g$_urho3d_Node = 0;
hl__types__$ArrayAccess g$_hl_types_ArrayAccess = 0;
hl__types__$ArrayBase g$_hl_types_ArrayBase = 0;
hl__types__$ArrayBytes_hl_F32 g$_hl_types_ArrayBytes_hl_F32 = 0;
urho3d__$Scene g$_urho3d_Scene = 0;
$StaticSceneSample g$_StaticSceneSample = 0;
$Main g$_Main = 0;
$Std g$_Std = 0;
String s$Invalid_function_ = 0;
String s$WorkerThreads = 0;
String s$WindowWidth = 0;
String s$WindowTitle = 0;
String s$WindowResizable = 0;
String s$WindowPositionY = 0;
String s$WindowPositionX = 0;
String s$WindowIcon = 0;
String s$WindowHeight = 0;
String s$VSync = 0;
String s$TripleBuffer = 0;
String s$TouchEmulation = 0;
String s$TimeOut = 0;
String s$TextureQuality = 0;
String s$TextureFilterMode = 0;
String s$TextureAnisotropy = 0;
String s$SoundStereo = 0;
String s$SoundMixRate = 0;
String s$SoundInterpolation = 0;
String s$SoundBuffer = 0;
String s$Sound = 0;
String s$Shadows = 0;
String s$ShaderCacheDir = 0;
String s$ResourcePrefixPaths = 0;
String s$ResourcePaths = 0;
String s$ResourcePackages = 0;
String s$RefreshRate = 0;
String s$RenderPath = 0;
String s$PackageCacheDir = 0;
String s$Orientations = 0;
String s$MultiSample = 0;
String s$Monitor = 0;
String s$MaterialQuality = 0;
String s$LowQualityShadows = 0;
String s$LogQuiet = 0;
String s$LogName = 0;
String s$LogLevel = 0;
String s$HighDPI = 0;
String s$Headless = 0;
String s$FullScreen = 0;
String s$FrameLimiter = 0;
String s$ForceGL2 = 0;
String s$FlushGPU = 0;
String s$ExternalWindow = 0;
String s$EventProfiler = 0;
String s$DumpShaders = 0;
String s$Borderless = 0;
String s$AutoloadPaths = 0;
urho3d___Context__$Context_Impl_ g$_urho3d__Context_Context_Impl_ = 0;
haxe__$Log g$_haxe_Log = 0;
String s$Setup = 0;
String s$src_haxe_StaticSceneSample_hx = 0;
String s$StaticSceneSample = 0;
String s$Octree = 0;
String s$Zone = 0;
String s$ = 0;
urho3d__$Component g$_urho3d_Component = 0;
urho3d__$Zone g$_urho3d_Zone = 0;
String s$Plane = 0;
String s$StaticModel = 0;
urho3d__$StaticModel g$_urho3d_StaticModel = 0;
String s$Models_Plane_mdl = 0;
String s$Materials_StoneTiled_xml = 0;
String s$DirectionalLight = 0;
String s$Light = 0;
urho3d__$Light g$_urho3d_Light = 0;
String s$Mushroom = 0;
String s$Models_Mushroom_mdl = 0;
String s$Materials_Mushroom_xml = 0;
String s$Camera = 0;
urho3d__$Camera g$_urho3d_Camera = 0;
String s$Update = 0;
String s$HandleUpdate = 0;
urho3d___Vector3__$Vector3_Impl_ g$_urho3d__Vector3_Vector3_Impl_ = 0;
String s$TimeStep = 0;
String s$Can_t_add_ = 0;
String s$84c4047 = 0;
String s$_and_ = 0;
String s$9371d7a = 0;
String s$Invalid_unicode_char_ = 0;
String s$null = 0;
$StringBuf g$_StringBuf = 0;
$SysError g$_SysError = 0;
String s$SysError_ = 0;
String s$68b329d = 0;
hl_bytes_map* g$__types__ = 0;
hl__$Enum g$_hl_Enum = 0;
sys__thread__$Lock g$_sys_thread_Lock = 0;
haxe__$EntryPoint g$_haxe_EntryPoint = 0;
haxe__$Exception g$_haxe_Exception = 0;
haxe__$ValueException g$_haxe_ValueException = 0;
haxe___Int64__$___Int64 g$_haxe__Int64____Int64 = 0;
String s$853ae90 = 0;
String s$fc763cb = 0;
String s$e265492 = 0;
haxe__$MainEvent g$_haxe_MainEvent = 0;
$Math g$_Math = 0;
haxe__$MainLoop g$_haxe_MainLoop = 0;
String s$stack = 0;
String s$NativeStackTrace_callStack = 0;
hl__$NativeArrayIterator_Dynamic g$_hl_NativeArrayIterator_Dynamic = 0;
haxe__iterators__$ArrayIterator g$_haxe_iterators_ArrayIterator = 0;
haxe__iterators__$ArrayKeyValueIterator g$19142ef = 0;
hl__$NativeArrayIterator_Int g$_hl_NativeArrayIterator_Int = 0;
String s$Not_implemented = 0;
haxe__io__$Error g$haxe_io_Error = 0;
venum* g$haxe_io_Error_OutsideBounds = 0;
hl__types__$BytesIterator_Float g$_hl_types_BytesIterator_Float = 0;
hl__types__$BytesKeyValueIterator_Float g$1e08d4d = 0;
String s$Invalid_array_index_ = 0;
hl__types__$BytesIterator_Int g$_hl_types_BytesIterator_Int = 0;
hl__types__$BytesKeyValueIterator_Int g$d250582 = 0;
hl__types__$BytesIterator_hl_F32 g$_hl_types_BytesIterator_hl_F32 = 0;
hl__types__$BytesKeyValueIterator_hl_F32 g$d4ac488 = 0;
hl__types__$BytesIterator_hl_UI16 g$_hl_types_BytesIterator_hl_UI16 = 0;
hl__types__$BytesKeyValueIterator_hl_UI16 g$4aef89b = 0;
hl__types__$ArrayDynIterator g$_hl_types_ArrayDynIterator = 0;
hl__types__$ArrayDynKeyValueIterator g$d29ca94 = 0;
hl__types__$ArrayObjIterator g$_hl_types_ArrayObjIterator = 0;
hl__types__$ArrayObjKeyValueIterator g$1813e5a = 0;
String s$2f43b42 = 0;
urho3d__$AnimatedModel g$_urho3d_AnimatedModel = 0;
urho3d__$BillboardSet g$_urho3d_BillboardSet = 0;
urho3d__$DecalSet g$_urho3d_DecalSet = 0;
urho3d__$RigidBody g$_urho3d_RigidBody = 0;
urho3d__$CollisionShape g$_urho3d_CollisionShape = 0;
urho3d__$Skybox g$_urho3d_Skybox = 0;
urho3d__$AnimationController g$_urho3d_AnimationController = 0;
urho3d__$LogicComponent g$_urho3d_LogicComponent = 0;
urho3d__$Constraint g$_urho3d_Constraint = 0;
urho3d__$SoundSource g$_urho3d_SoundSource = 0;
urho3d__$ParticleEmitter2D g$_urho3d_ParticleEmitter2D = 0;
urho3d__$Graphics g$_urho3d_Graphics = 0;
String s$IntVector2_ = 0;
String s$fromStructVector2 = 0;
String s$src_haxe_urho3d_IntVector2_hx = 0;
String s$56cf1e1 = 0;
urho3d__$Math g$_urho3d_Math = 0;
String s$5058f1a = 0;
String s$c3e97dd = 0;
String s$5e732a1 = 0;
String s$StringHash_ = 0;
String s$TIntVector2_ = 0;
String s$TStringHash_ = 0;
String s$TVector2_ = 0;
String s$TVector3_ = 0;
String s$Vector2_ = 0;
urho3d___Vector2__$Vector2_Impl_ g$_urho3d__Vector2_Vector2_Impl_ = 0;
String s$Vector3_ = 0;
$Reflect g$_Reflect = 0;
hl__CoreType g$_Float = 0;
String s$Float = 0;
hl__CoreType g$_Int = 0;
String s$Int = 0;
hl__CoreEnum g$_Bool = 0;
String s$Bool = 0;
hl__CoreType g$_Dynamic = 0;
String s$Dynamic = 0;
hl___Bytes__$Bytes_Impl_ g$_hl__Bytes_Bytes_Impl_ = 0;
$Sys g$_Sys = 0;
$Type g$_Type = 0;
haxe__$IMap g$_haxe_IMap = 0;
sys__thread___Mutex__$Mutex_Impl_ g$_sys_thread__Mutex_Mutex_Impl_ = 0;
sys__thread___Deque__$Deque_Impl_ g$_sys_thread__Deque_Deque_Impl_ = 0;
haxe___Int32__$Int32_Impl_ g$_haxe__Int32_Int32_Impl_ = 0;
haxe__$NativeStackTrace g$_haxe_NativeStackTrace = 0;
haxe__ds__$ArraySort g$_haxe_ds_ArraySort = 0;
venum* g$haxe_io_Error_Blocked = 0;
venum* g$haxe_io_Error_Overflow = 0;
hl___NativeArray__$NativeArray_Impl_ g$7abf311 = 0;
hl___Type__$Type_Impl_ g$_hl__Type_Type_Impl_ = 0;
String s$Array = 0;
hl__types__$ArrayDyn g$_hl_types_ArrayDyn = 0;
String s$hl_types_ArrayDyn = 0;
hl__types___BytesMap__$BytesMap_Impl_ g$2c4fafe = 0;
hl__types___ObjectMap__$ObjectMap_Impl_ g$5fc41f7 = 0;
urho3d___AbstractApplication__$AbstractApplication_Impl_ g$73bcf85 = 0;
urho3d___AnimatedModel__$AbstractAnimatedModel_Impl_ g$4cfeda0 = 0;
urho3d___Animation__$Animation_Impl_ g$93b32b0 = 0;
urho3d___AnimationController__$AbstractAnimationController_Impl_ g$eaae17d = 0;
urho3d___AnimationState__$AnimationState_Impl_ g$3b6ff9a = 0;
urho3d___BiasParameters__$BiasParameters_Impl_ g$e752008 = 0;
urho3d___Billboard__$Billboard_Impl_ g$75967be = 0;
urho3d___BillboardSet__$BillboardPOD_Impl_ g$4bef870 = 0;
urho3d___BillboardSet__$AbstractBillboardSet_Impl_ g$91330fa = 0;
urho3d___Bone__$Bone_Impl_ g$_urho3d__Bone_Bone_Impl_ = 0;
urho3d___BoundingBox__$BoundingBox_Impl_ g$edbf3a2 = 0;
urho3d___Camera__$AbstractCamera_Impl_ g$b72081f = 0;
urho3d___CascadeParameters__$CascadeParameters_Impl_ g$2223ec8 = 0;
urho3d___CollisionShape__$AbstractCollisionShape_Impl_ g$020ee67 = 0;
urho3d___Color__$Color_Impl_ g$_urho3d__Color_Color_Impl_ = 0;
urho3d___Component__$AbstractComponent_Impl_ g$e790caf = 0;
urho3d___Constraint__$AbstractConstraint_Impl_ g$5f87804 = 0;
urho3d___DecalSet__$AbstractDecalSet_Impl_ g$d5f9fdf = 0;
urho3d___Drawable__$Drawable_Impl_ g$_urho3d__Drawable_Drawable_Impl_ = 0;
urho3d___File__$File_Impl_ g$_urho3d__File_File_Impl_ = 0;
urho3d___HString__$HString_Impl_ g$_urho3d__HString_HString_Impl_ = 0;
urho3d___Input__$KeyDown_Impl_ g$_urho3d__Input_KeyDown_Impl_ = 0;
urho3d___Input__$KeyPress_Impl_ g$_urho3d__Input_KeyPress_Impl_ = 0;
urho3d__$Input g$_urho3d_Input = 0;
urho3d___IntRect__$IntRect_Impl_ g$_urho3d__IntRect_IntRect_Impl_ = 0;
urho3d___IntVector2__$IntVector2_Impl_ g$e8eb13c = 0;
urho3d___Light__$AbstractLight_Impl_ g$82ddafb = 0;
urho3d___LogicComponent__$UpdateEvent_Impl_ g$e87da15 = 0;
urho3d___LogicComponent__$AbstractLogicComponent_Impl_ g$6c6278b = 0;
urho3d___Material__$Material_Impl_ g$_urho3d__Material_Material_Impl_ = 0;
urho3d___Model__$Model_Impl_ g$_urho3d__Model_Model_Impl_ = 0;
urho3d___Node__$AbstractNode_Impl_ g$_urho3d__Node_AbstractNode_Impl_ = 0;
urho3d___Object__$Object_Impl_ g$_urho3d__Object_Object_Impl_ = 0;
urho3d___Octree__$Octree_Impl_ g$_urho3d__Octree_Octree_Impl_ = 0;
urho3d___ParticleEffect2D__$ParticleEffect2D_Impl_ g$63cbf6c = 0;
urho3d___ParticleEmitter2D__$AbstractParticleEmitter2D_Impl_ g$85f35bd = 0;
urho3d___PhysicsRaycastResult__$PhysicsRaycastResult_Impl_ g$f8746a8 = 0;
urho3d___PhysicsWorld__$PhysicsWorld_Impl_ g$ea05d62 = 0;
urho3d___Quaternion__$Quaternion_Impl_ g$abe14a3 = 0;
urho3d___Ray__$Ray_Impl_ g$_urho3d__Ray_Ray_Impl_ = 0;
urho3d___RayQueryResult__$RayQueryResult_Impl_ g$1a78d58 = 0;
urho3d___RayQueryResults__$RayQueryResults_Impl_ g$8933580 = 0;
urho3d___RefCounted__$RefCounted_Impl_ g$3ce7ccc = 0;
urho3d___RenderPath__$RenderPath_Impl_ g$adad2bc = 0;
urho3d___Renderer__$Viewports_Impl_ g$049917e = 0;
urho3d__$Renderer g$_urho3d_Renderer = 0;
urho3d___RigidBody__$AbstractRigidBody_Impl_ g$0fbe7e1 = 0;
urho3d___Scene__$AbstractScene_Impl_ g$580026d = 0;
urho3d___Skeleton__$Skeleton_Impl_ g$_urho3d__Skeleton_Skeleton_Impl_ = 0;
urho3d___Skybox__$AbstractSkybox_Impl_ g$ac7172f = 0;
urho3d___Sound__$Sound_Impl_ g$_urho3d__Sound_Sound_Impl_ = 0;
urho3d___SoundSource__$AbstractSoundSource_Impl_ g$24764c8 = 0;
urho3d___StaticModel__$AbstractStaticModel_Impl_ g$bb27b12 = 0;
urho3d___StringHash__$StringHash_Impl_ g$4d1fd18 = 0;
urho3d___TColor__$TColor_Impl_ g$_urho3d__TColor_TColor_Impl_ = 0;
urho3d___TIntVector2__$TIntVector2_Impl_ g$41c7646 = 0;
urho3d___TNode__$TNode_Impl_ g$_urho3d__TNode_TNode_Impl_ = 0;
urho3d___TQuaternion__$TQuaternion_Impl_ g$a84cef1 = 0;
urho3d___TRay__$TRay_Impl_ g$_urho3d__TRay_TRay_Impl_ = 0;
urho3d___TRigidBody__$TRigidBody_Impl_ g$ec145fe = 0;
urho3d___TStringHash__$TStringHash_Impl_ g$9ea7242 = 0;
urho3d___TVariant__$TVariant_Impl_ g$_urho3d__TVariant_TVariant_Impl_ = 0;
urho3d___TVariantMap__$TVariantMap_Impl_ g$78176a5 = 0;
urho3d___TVector2__$TVector2_Impl_ g$_urho3d__TVector2_TVector2_Impl_ = 0;
urho3d___TVector3__$TVector3_Impl_ g$_urho3d__TVector3_TVector3_Impl_ = 0;
urho3d___TVectorBuffer__$TVectorBuffer_Impl_ g$0130c06 = 0;
urho3d___Technique__$Technique_Impl_ g$760d5a0 = 0;
urho3d___Texture__$Texture_Impl_ g$_urho3d__Texture_Texture_Impl_ = 0;
urho3d___TouchState__$TouchState_Impl_ g$552ed39 = 0;
urho3d___ValueAnimation__$ValueAnimation_Impl_ g$cd84af1 = 0;
urho3d___Variant__$Variant_Impl_ g$_urho3d__Variant_Variant_Impl_ = 0;
urho3d___VariantMap__$VariantMap_Impl_ g$50a5cf6 = 0;
urho3d___VectorBuffer__$VectorBuffer_Impl_ g$30f2db9 = 0;
urho3d___Viewport__$Viewport_Impl_ g$_urho3d__Viewport_Viewport_Impl_ = 0;
urho3d___XMLFile__$XMLFile_Impl_ g$_urho3d__XMLFile_XMLFile_Impl_ = 0;
urho3d___Zone__$AbstractZone_Impl_ g$_urho3d__Zone_AbstractZone_Impl_ = 0;
static struct _String const_s$Invalid_function_ = {&t$String,(vbyte*)USTR("Invalid function "),17};
static struct _String const_s$WorkerThreads = {&t$String,(vbyte*)USTR("WorkerThreads"),13};
static struct _String const_s$WindowWidth = {&t$String,(vbyte*)USTR("WindowWidth"),11};
static struct _String const_s$WindowTitle = {&t$String,(vbyte*)USTR("WindowTitle"),11};
static struct _String const_s$WindowResizable = {&t$String,(vbyte*)USTR("WindowResizable"),15};
static struct _String const_s$WindowPositionY = {&t$String,(vbyte*)USTR("WindowPositionY"),15};
static struct _String const_s$WindowPositionX = {&t$String,(vbyte*)USTR("WindowPositionX"),15};
static struct _String const_s$WindowIcon = {&t$String,(vbyte*)USTR("WindowIcon"),10};
static struct _String const_s$WindowHeight = {&t$String,(vbyte*)USTR("WindowHeight"),12};
static struct _String const_s$VSync = {&t$String,(vbyte*)USTR("VSync"),5};
static struct _String const_s$TripleBuffer = {&t$String,(vbyte*)USTR("TripleBuffer"),12};
static struct _String const_s$TouchEmulation = {&t$String,(vbyte*)USTR("TouchEmulation"),14};
static struct _String const_s$TimeOut = {&t$String,(vbyte*)USTR("TimeOut"),7};
static struct _String const_s$TextureQuality = {&t$String,(vbyte*)USTR("TextureQuality"),14};
static struct _String const_s$TextureFilterMode = {&t$String,(vbyte*)USTR("TextureFilterMode"),17};
static struct _String const_s$TextureAnisotropy = {&t$String,(vbyte*)USTR("TextureAnisotropy"),17};
static struct _String const_s$SoundStereo = {&t$String,(vbyte*)USTR("SoundStereo"),11};
static struct _String const_s$SoundMixRate = {&t$String,(vbyte*)USTR("SoundMixRate"),12};
static struct _String const_s$SoundInterpolation = {&t$String,(vbyte*)USTR("SoundInterpolation"),18};
static struct _String const_s$SoundBuffer = {&t$String,(vbyte*)USTR("SoundBuffer"),11};
static struct _String const_s$Sound = {&t$String,(vbyte*)USTR("Sound"),5};
static struct _String const_s$Shadows = {&t$String,(vbyte*)USTR("Shadows"),7};
static struct _String const_s$ShaderCacheDir = {&t$String,(vbyte*)USTR("ShaderCacheDir"),14};
static struct _String const_s$ResourcePrefixPaths = {&t$String,(vbyte*)USTR("ResourcePrefixPaths"),19};
static struct _String const_s$ResourcePaths = {&t$String,(vbyte*)USTR("ResourcePaths"),13};
static struct _String const_s$ResourcePackages = {&t$String,(vbyte*)USTR("ResourcePackages"),16};
static struct _String const_s$RefreshRate = {&t$String,(vbyte*)USTR("RefreshRate"),11};
static struct _String const_s$RenderPath = {&t$String,(vbyte*)USTR("RenderPath"),10};
static struct _String const_s$PackageCacheDir = {&t$String,(vbyte*)USTR("PackageCacheDir"),15};
static struct _String const_s$Orientations = {&t$String,(vbyte*)USTR("Orientations"),12};
static struct _String const_s$MultiSample = {&t$String,(vbyte*)USTR("MultiSample"),11};
static struct _String const_s$Monitor = {&t$String,(vbyte*)USTR("Monitor"),7};
static struct _String const_s$MaterialQuality = {&t$String,(vbyte*)USTR("MaterialQuality"),15};
static struct _String const_s$LowQualityShadows = {&t$String,(vbyte*)USTR("LowQualityShadows"),17};
static struct _String const_s$LogQuiet = {&t$String,(vbyte*)USTR("LogQuiet"),8};
static struct _String const_s$LogName = {&t$String,(vbyte*)USTR("LogName"),7};
static struct _String const_s$LogLevel = {&t$String,(vbyte*)USTR("LogLevel"),8};
static struct _String const_s$HighDPI = {&t$String,(vbyte*)USTR("HighDPI"),7};
static struct _String const_s$Headless = {&t$String,(vbyte*)USTR("Headless"),8};
static struct _String const_s$FullScreen = {&t$String,(vbyte*)USTR("FullScreen"),10};
static struct _String const_s$FrameLimiter = {&t$String,(vbyte*)USTR("FrameLimiter"),12};
static struct _String const_s$ForceGL2 = {&t$String,(vbyte*)USTR("ForceGL2"),8};
static struct _String const_s$FlushGPU = {&t$String,(vbyte*)USTR("FlushGPU"),8};
static struct _String const_s$ExternalWindow = {&t$String,(vbyte*)USTR("ExternalWindow"),14};
static struct _String const_s$EventProfiler = {&t$String,(vbyte*)USTR("EventProfiler"),13};
static struct _String const_s$DumpShaders = {&t$String,(vbyte*)USTR("DumpShaders"),11};
static struct _String const_s$Borderless = {&t$String,(vbyte*)USTR("Borderless"),10};
static struct _String const_s$AutoloadPaths = {&t$String,(vbyte*)USTR("AutoloadPaths"),13};
static struct _String const_s$Setup = {&t$String,(vbyte*)USTR("Setup"),5};
static struct _String const_s$src_haxe_StaticSceneSample_hx = {&t$String,(vbyte*)USTR("src/haxe/StaticSceneSample.hx"),29};
static struct _String const_s$StaticSceneSample = {&t$String,(vbyte*)USTR("StaticSceneSample"),17};
static struct _String const_s$Octree = {&t$String,(vbyte*)USTR("Octree"),6};
static struct _String const_s$Zone = {&t$String,(vbyte*)USTR("Zone"),4};
static struct _String const_s$ = {&t$String,(vbyte*)USTR(""),0};
static struct _String const_s$Plane = {&t$String,(vbyte*)USTR("Plane"),5};
static struct _String const_s$StaticModel = {&t$String,(vbyte*)USTR("StaticModel"),11};
static struct _String const_s$Models_Plane_mdl = {&t$String,(vbyte*)USTR("Models/Plane.mdl"),16};
static struct _String const_s$Materials_StoneTiled_xml = {&t$String,(vbyte*)USTR("Materials/StoneTiled.xml"),24};
static struct _String const_s$DirectionalLight = {&t$String,(vbyte*)USTR("DirectionalLight"),16};
static struct _String const_s$Light = {&t$String,(vbyte*)USTR("Light"),5};
static struct _String const_s$Mushroom = {&t$String,(vbyte*)USTR("Mushroom"),8};
static struct _String const_s$Models_Mushroom_mdl = {&t$String,(vbyte*)USTR("Models/Mushroom.mdl"),19};
static struct _String const_s$Materials_Mushroom_xml = {&t$String,(vbyte*)USTR("Materials/Mushroom.xml"),22};
static struct _String const_s$Camera = {&t$String,(vbyte*)USTR("Camera"),6};
static struct _String const_s$Update = {&t$String,(vbyte*)USTR("Update"),6};
static struct _String const_s$HandleUpdate = {&t$String,(vbyte*)USTR("HandleUpdate"),12};
static struct _String const_s$TimeStep = {&t$String,(vbyte*)USTR("TimeStep"),8};
static struct _String const_s$Can_t_add_ = {&t$String,(vbyte*)USTR("Can't add "),10};
static struct _String const_s$84c4047 = {&t$String,(vbyte*)USTR("("),1};
static struct _String const_s$_and_ = {&t$String,(vbyte*)USTR(") and "),6};
static struct _String const_s$9371d7a = {&t$String,(vbyte*)USTR(")"),1};
static struct _String const_s$Invalid_unicode_char_ = {&t$String,(vbyte*)USTR("Invalid unicode char "),21};
static struct _String const_s$null = {&t$String,(vbyte*)USTR("null"),4};
static struct _String const_s$SysError_ = {&t$String,(vbyte*)USTR("SysError("),9};
static struct _String const_s$68b329d = {&t$String,(vbyte*)USTR("\n"),1};
static struct _String const_s$853ae90 = {&t$String,(vbyte*)USTR(":"),1};
static struct _String const_s$fc763cb = {&t$String,(vbyte*)USTR(", "),2};
static struct _String const_s$e265492 = {&t$String,(vbyte*)USTR(": "),2};
static struct _String const_s$stack = {&t$String,(vbyte*)USTR("stack"),5};
static struct _String const_s$NativeStackTrace_callStack = {&t$String,(vbyte*)USTR("NativeStackTrace.callStack"),26};
static struct _String const_s$Not_implemented = {&t$String,(vbyte*)USTR("Not implemented"),15};
static struct _String const_s$Invalid_array_index_ = {&t$String,(vbyte*)USTR("Invalid array index "),20};
static struct _String const_s$2f43b42 = {&t$String,(vbyte*)USTR("..."),3};
static struct _String const_s$IntVector2_ = {&t$String,(vbyte*)USTR("IntVector2("),11};
static struct _String const_s$fromStructVector2 = {&t$String,(vbyte*)USTR("fromStructVector2"),17};
static struct _String const_s$src_haxe_urho3d_IntVector2_hx = {&t$String,(vbyte*)USTR("src/haxe/urho3d/IntVector2.hx"),29};
static struct _String const_s$56cf1e1 = {&t$String,(vbyte*)USTR("urho3d._IntVector2.IntVector2_Impl_"),35};
static struct _String const_s$5058f1a = {&t$String,(vbyte*)USTR("."),1};
static struct _String const_s$c3e97dd = {&t$String,(vbyte*)USTR("$"),1};
static struct _String const_s$5e732a1 = {&t$String,(vbyte*)USTR("\t"),1};
static struct _String const_s$StringHash_ = {&t$String,(vbyte*)USTR("StringHash :"),12};
static struct _String const_s$TIntVector2_ = {&t$String,(vbyte*)USTR("TIntVector2 ("),13};
static struct _String const_s$TStringHash_ = {&t$String,(vbyte*)USTR("TStringHash :"),13};
static struct _String const_s$TVector2_ = {&t$String,(vbyte*)USTR("TVector2 ("),10};
static struct _String const_s$TVector3_ = {&t$String,(vbyte*)USTR("TVector3 ("),10};
static struct _String const_s$Vector2_ = {&t$String,(vbyte*)USTR("Vector2 ("),9};
static struct _String const_s$Vector3_ = {&t$String,(vbyte*)USTR("Vector3 ("),9};
static struct _String const_s$Float = {&t$String,(vbyte*)USTR("Float"),5};
static struct _String const_s$Int = {&t$String,(vbyte*)USTR("Int"),3};
static struct _String const_s$Bool = {&t$String,(vbyte*)USTR("Bool"),4};
static struct _String const_s$Dynamic = {&t$String,(vbyte*)USTR("Dynamic"),7};
static struct _String const_s$Array = {&t$String,(vbyte*)USTR("Array"),5};
static struct _String const_s$hl_types_ArrayDyn = {&t$String,(vbyte*)USTR("hl.types.ArrayDyn"),17};

void hl_init_roots() {
	s$Invalid_function_ = &const_s$Invalid_function_;
	s$WorkerThreads = &const_s$WorkerThreads;
	s$WindowWidth = &const_s$WindowWidth;
	s$WindowTitle = &const_s$WindowTitle;
	s$WindowResizable = &const_s$WindowResizable;
	s$WindowPositionY = &const_s$WindowPositionY;
	s$WindowPositionX = &const_s$WindowPositionX;
	s$WindowIcon = &const_s$WindowIcon;
	s$WindowHeight = &const_s$WindowHeight;
	s$VSync = &const_s$VSync;
	s$TripleBuffer = &const_s$TripleBuffer;
	s$TouchEmulation = &const_s$TouchEmulation;
	s$TimeOut = &const_s$TimeOut;
	s$TextureQuality = &const_s$TextureQuality;
	s$TextureFilterMode = &const_s$TextureFilterMode;
	s$TextureAnisotropy = &const_s$TextureAnisotropy;
	s$SoundStereo = &const_s$SoundStereo;
	s$SoundMixRate = &const_s$SoundMixRate;
	s$SoundInterpolation = &const_s$SoundInterpolation;
	s$SoundBuffer = &const_s$SoundBuffer;
	s$Sound = &const_s$Sound;
	s$Shadows = &const_s$Shadows;
	s$ShaderCacheDir = &const_s$ShaderCacheDir;
	s$ResourcePrefixPaths = &const_s$ResourcePrefixPaths;
	s$ResourcePaths = &const_s$ResourcePaths;
	s$ResourcePackages = &const_s$ResourcePackages;
	s$RefreshRate = &const_s$RefreshRate;
	s$RenderPath = &const_s$RenderPath;
	s$PackageCacheDir = &const_s$PackageCacheDir;
	s$Orientations = &const_s$Orientations;
	s$MultiSample = &const_s$MultiSample;
	s$Monitor = &const_s$Monitor;
	s$MaterialQuality = &const_s$MaterialQuality;
	s$LowQualityShadows = &const_s$LowQualityShadows;
	s$LogQuiet = &const_s$LogQuiet;
	s$LogName = &const_s$LogName;
	s$LogLevel = &const_s$LogLevel;
	s$HighDPI = &const_s$HighDPI;
	s$Headless = &const_s$Headless;
	s$FullScreen = &const_s$FullScreen;
	s$FrameLimiter = &const_s$FrameLimiter;
	s$ForceGL2 = &const_s$ForceGL2;
	s$FlushGPU = &const_s$FlushGPU;
	s$ExternalWindow = &const_s$ExternalWindow;
	s$EventProfiler = &const_s$EventProfiler;
	s$DumpShaders = &const_s$DumpShaders;
	s$Borderless = &const_s$Borderless;
	s$AutoloadPaths = &const_s$AutoloadPaths;
	s$Setup = &const_s$Setup;
	s$src_haxe_StaticSceneSample_hx = &const_s$src_haxe_StaticSceneSample_hx;
	s$StaticSceneSample = &const_s$StaticSceneSample;
	s$Octree = &const_s$Octree;
	s$Zone = &const_s$Zone;
	s$ = &const_s$;
	s$Plane = &const_s$Plane;
	s$StaticModel = &const_s$StaticModel;
	s$Models_Plane_mdl = &const_s$Models_Plane_mdl;
	s$Materials_StoneTiled_xml = &const_s$Materials_StoneTiled_xml;
	s$DirectionalLight = &const_s$DirectionalLight;
	s$Light = &const_s$Light;
	s$Mushroom = &const_s$Mushroom;
	s$Models_Mushroom_mdl = &const_s$Models_Mushroom_mdl;
	s$Materials_Mushroom_xml = &const_s$Materials_Mushroom_xml;
	s$Camera = &const_s$Camera;
	s$Update = &const_s$Update;
	s$HandleUpdate = &const_s$HandleUpdate;
	s$TimeStep = &const_s$TimeStep;
	s$Can_t_add_ = &const_s$Can_t_add_;
	s$84c4047 = &const_s$84c4047;
	s$_and_ = &const_s$_and_;
	s$9371d7a = &const_s$9371d7a;
	s$Invalid_unicode_char_ = &const_s$Invalid_unicode_char_;
	s$null = &const_s$null;
	s$SysError_ = &const_s$SysError_;
	s$68b329d = &const_s$68b329d;
	s$853ae90 = &const_s$853ae90;
	s$fc763cb = &const_s$fc763cb;
	s$e265492 = &const_s$e265492;
	s$stack = &const_s$stack;
	s$NativeStackTrace_callStack = &const_s$NativeStackTrace_callStack;
	s$Not_implemented = &const_s$Not_implemented;
	s$Invalid_array_index_ = &const_s$Invalid_array_index_;
	s$2f43b42 = &const_s$2f43b42;
	s$IntVector2_ = &const_s$IntVector2_;
	s$fromStructVector2 = &const_s$fromStructVector2;
	s$src_haxe_urho3d_IntVector2_hx = &const_s$src_haxe_urho3d_IntVector2_hx;
	s$56cf1e1 = &const_s$56cf1e1;
	s$5058f1a = &const_s$5058f1a;
	s$c3e97dd = &const_s$c3e97dd;
	s$5e732a1 = &const_s$5e732a1;
	s$StringHash_ = &const_s$StringHash_;
	s$TIntVector2_ = &const_s$TIntVector2_;
	s$TStringHash_ = &const_s$TStringHash_;
	s$TVector2_ = &const_s$TVector2_;
	s$TVector3_ = &const_s$TVector3_;
	s$Vector2_ = &const_s$Vector2_;
	s$Vector3_ = &const_s$Vector3_;
	s$Float = &const_s$Float;
	s$Int = &const_s$Int;
	s$Bool = &const_s$Bool;
	s$Dynamic = &const_s$Dynamic;
	s$Array = &const_s$Array;
	s$hl_types_ArrayDyn = &const_s$hl_types_ArrayDyn;
	hl_add_root((void**)&g$_hl_BaseType);
	hl_add_root((void**)&g$_hl_Class);
	hl_add_root((void**)&g$_String);
	hl_add_root((void**)&g$_Date);
	hl_add_root((void**)&g$_urho3d_Application);
	hl_add_root((void**)&g$_haxe_ds_StringMap);
	hl_add_root((void**)&g$_haxe_ds_ObjectMap);
	hl_add_root((void**)&g$_urho3d_Node);
	hl_add_root((void**)&g$_hl_types_ArrayAccess);
	hl_add_root((void**)&g$_hl_types_ArrayBase);
	hl_add_root((void**)&g$_hl_types_ArrayBytes_hl_F32);
	hl_add_root((void**)&g$_urho3d_Scene);
	hl_add_root((void**)&g$_StaticSceneSample);
	hl_add_root((void**)&g$_Main);
	hl_add_root((void**)&g$_Std);
	hl_add_root((void**)&g$_urho3d__Context_Context_Impl_);
	hl_add_root((void**)&g$_haxe_Log);
	hl_add_root((void**)&g$_urho3d_Component);
	hl_add_root((void**)&g$_urho3d_Zone);
	hl_add_root((void**)&g$_urho3d_StaticModel);
	hl_add_root((void**)&g$_urho3d_Light);
	hl_add_root((void**)&g$_urho3d_Camera);
	hl_add_root((void**)&g$_urho3d__Vector3_Vector3_Impl_);
	hl_add_root((void**)&g$_StringBuf);
	hl_add_root((void**)&g$_SysError);
	hl_add_root((void**)&g$__types__);
	hl_add_root((void**)&g$_hl_Enum);
	hl_add_root((void**)&g$_sys_thread_Lock);
	hl_add_root((void**)&g$_haxe_EntryPoint);
	hl_add_root((void**)&g$_haxe_Exception);
	hl_add_root((void**)&g$_haxe_ValueException);
	hl_add_root((void**)&g$_haxe__Int64____Int64);
	hl_add_root((void**)&g$_haxe_MainEvent);
	hl_add_root((void**)&g$_Math);
	hl_add_root((void**)&g$_haxe_MainLoop);
	hl_add_root((void**)&g$_hl_NativeArrayIterator_Dynamic);
	hl_add_root((void**)&g$_haxe_iterators_ArrayIterator);
	hl_add_root((void**)&g$19142ef);
	hl_add_root((void**)&g$_hl_NativeArrayIterator_Int);
	hl_add_root((void**)&g$haxe_io_Error);
	hl_add_root((void**)&g$haxe_io_Error_OutsideBounds);
	hl_add_root((void**)&g$_hl_types_BytesIterator_Float);
	hl_add_root((void**)&g$1e08d4d);
	hl_add_root((void**)&g$_hl_types_BytesIterator_Int);
	hl_add_root((void**)&g$d250582);
	hl_add_root((void**)&g$_hl_types_BytesIterator_hl_F32);
	hl_add_root((void**)&g$d4ac488);
	hl_add_root((void**)&g$_hl_types_BytesIterator_hl_UI16);
	hl_add_root((void**)&g$4aef89b);
	hl_add_root((void**)&g$_hl_types_ArrayDynIterator);
	hl_add_root((void**)&g$d29ca94);
	hl_add_root((void**)&g$_hl_types_ArrayObjIterator);
	hl_add_root((void**)&g$1813e5a);
	hl_add_root((void**)&g$_urho3d_AnimatedModel);
	hl_add_root((void**)&g$_urho3d_BillboardSet);
	hl_add_root((void**)&g$_urho3d_DecalSet);
	hl_add_root((void**)&g$_urho3d_RigidBody);
	hl_add_root((void**)&g$_urho3d_CollisionShape);
	hl_add_root((void**)&g$_urho3d_Skybox);
	hl_add_root((void**)&g$_urho3d_AnimationController);
	hl_add_root((void**)&g$_urho3d_LogicComponent);
	hl_add_root((void**)&g$_urho3d_Constraint);
	hl_add_root((void**)&g$_urho3d_SoundSource);
	hl_add_root((void**)&g$_urho3d_ParticleEmitter2D);
	hl_add_root((void**)&g$_urho3d_Graphics);
	hl_add_root((void**)&g$_urho3d_Math);
	hl_add_root((void**)&g$_urho3d__Vector2_Vector2_Impl_);
	hl_add_root((void**)&g$_Reflect);
	hl_add_root((void**)&g$_Float);
	hl_add_root((void**)&g$_Int);
	hl_add_root((void**)&g$_Bool);
	hl_add_root((void**)&g$_Dynamic);
	hl_add_root((void**)&g$_hl__Bytes_Bytes_Impl_);
	hl_add_root((void**)&g$_Sys);
	hl_add_root((void**)&g$_Type);
	hl_add_root((void**)&g$_haxe_IMap);
	hl_add_root((void**)&g$_sys_thread__Mutex_Mutex_Impl_);
	hl_add_root((void**)&g$_sys_thread__Deque_Deque_Impl_);
	hl_add_root((void**)&g$_haxe__Int32_Int32_Impl_);
	hl_add_root((void**)&g$_haxe_NativeStackTrace);
	hl_add_root((void**)&g$_haxe_ds_ArraySort);
	hl_add_root((void**)&g$haxe_io_Error_Blocked);
	hl_add_root((void**)&g$haxe_io_Error_Overflow);
	hl_add_root((void**)&g$7abf311);
	hl_add_root((void**)&g$_hl__Type_Type_Impl_);
	hl_add_root((void**)&g$_hl_types_ArrayDyn);
	hl_add_root((void**)&g$2c4fafe);
	hl_add_root((void**)&g$5fc41f7);
	hl_add_root((void**)&g$73bcf85);
	hl_add_root((void**)&g$4cfeda0);
	hl_add_root((void**)&g$93b32b0);
	hl_add_root((void**)&g$eaae17d);
	hl_add_root((void**)&g$3b6ff9a);
	hl_add_root((void**)&g$e752008);
	hl_add_root((void**)&g$75967be);
	hl_add_root((void**)&g$4bef870);
	hl_add_root((void**)&g$91330fa);
	hl_add_root((void**)&g$_urho3d__Bone_Bone_Impl_);
	hl_add_root((void**)&g$edbf3a2);
	hl_add_root((void**)&g$b72081f);
	hl_add_root((void**)&g$2223ec8);
	hl_add_root((void**)&g$020ee67);
	hl_add_root((void**)&g$_urho3d__Color_Color_Impl_);
	hl_add_root((void**)&g$e790caf);
	hl_add_root((void**)&g$5f87804);
	hl_add_root((void**)&g$d5f9fdf);
	hl_add_root((void**)&g$_urho3d__Drawable_Drawable_Impl_);
	hl_add_root((void**)&g$_urho3d__File_File_Impl_);
	hl_add_root((void**)&g$_urho3d__HString_HString_Impl_);
	hl_add_root((void**)&g$_urho3d__Input_KeyDown_Impl_);
	hl_add_root((void**)&g$_urho3d__Input_KeyPress_Impl_);
	hl_add_root((void**)&g$_urho3d_Input);
	hl_add_root((void**)&g$_urho3d__IntRect_IntRect_Impl_);
	hl_add_root((void**)&g$e8eb13c);
	hl_add_root((void**)&g$82ddafb);
	hl_add_root((void**)&g$e87da15);
	hl_add_root((void**)&g$6c6278b);
	hl_add_root((void**)&g$_urho3d__Material_Material_Impl_);
	hl_add_root((void**)&g$_urho3d__Model_Model_Impl_);
	hl_add_root((void**)&g$_urho3d__Node_AbstractNode_Impl_);
	hl_add_root((void**)&g$_urho3d__Object_Object_Impl_);
	hl_add_root((void**)&g$_urho3d__Octree_Octree_Impl_);
	hl_add_root((void**)&g$63cbf6c);
	hl_add_root((void**)&g$85f35bd);
	hl_add_root((void**)&g$f8746a8);
	hl_add_root((void**)&g$ea05d62);
	hl_add_root((void**)&g$abe14a3);
	hl_add_root((void**)&g$_urho3d__Ray_Ray_Impl_);
	hl_add_root((void**)&g$1a78d58);
	hl_add_root((void**)&g$8933580);
	hl_add_root((void**)&g$3ce7ccc);
	hl_add_root((void**)&g$adad2bc);
	hl_add_root((void**)&g$049917e);
	hl_add_root((void**)&g$_urho3d_Renderer);
	hl_add_root((void**)&g$0fbe7e1);
	hl_add_root((void**)&g$580026d);
	hl_add_root((void**)&g$_urho3d__Skeleton_Skeleton_Impl_);
	hl_add_root((void**)&g$ac7172f);
	hl_add_root((void**)&g$_urho3d__Sound_Sound_Impl_);
	hl_add_root((void**)&g$24764c8);
	hl_add_root((void**)&g$bb27b12);
	hl_add_root((void**)&g$4d1fd18);
	hl_add_root((void**)&g$_urho3d__TColor_TColor_Impl_);
	hl_add_root((void**)&g$41c7646);
	hl_add_root((void**)&g$_urho3d__TNode_TNode_Impl_);
	hl_add_root((void**)&g$a84cef1);
	hl_add_root((void**)&g$_urho3d__TRay_TRay_Impl_);
	hl_add_root((void**)&g$ec145fe);
	hl_add_root((void**)&g$9ea7242);
	hl_add_root((void**)&g$_urho3d__TVariant_TVariant_Impl_);
	hl_add_root((void**)&g$78176a5);
	hl_add_root((void**)&g$_urho3d__TVector2_TVector2_Impl_);
	hl_add_root((void**)&g$_urho3d__TVector3_TVector3_Impl_);
	hl_add_root((void**)&g$0130c06);
	hl_add_root((void**)&g$760d5a0);
	hl_add_root((void**)&g$_urho3d__Texture_Texture_Impl_);
	hl_add_root((void**)&g$552ed39);
	hl_add_root((void**)&g$cd84af1);
	hl_add_root((void**)&g$_urho3d__Variant_Variant_Impl_);
	hl_add_root((void**)&g$50a5cf6);
	hl_add_root((void**)&g$30f2db9);
	hl_add_root((void**)&g$_urho3d__Viewport_Viewport_Impl_);
	hl_add_root((void**)&g$_urho3d__XMLFile_XMLFile_Impl_);
	hl_add_root((void**)&g$_urho3d__Zone_AbstractZone_Impl_);
}
