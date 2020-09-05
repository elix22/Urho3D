﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
void fun$init(void);

#include <hlc_main.c>

#ifndef HL_MAKE
#  include <hl/hashes.c>
#  include <hl/functions.c>
#  include <hl/BaseType.c>
#  include <_std/String.c>
#  include <_std/Date.c>
#  include <urho3d/Application.c>
#  include <hl/types/ArrayAccess.c>
#  include <hl/types/ArrayBase.c>
#  include <hl/types/ArrayObj.c>
#  include <haxe/ds/StringMap.c>
#  include <haxe/ds/ObjectMap.c>
#  include <urho3d/Node.c>
#  include <hl/types/ArrayBytes_Int.c>
#  include <hl/types/ArrayBytes_hl_UI16.c>
#  include <hl/types/ArrayBytes_hl_F32.c>
#  include <hl/types/ArrayBytes_Float.c>
#  include <urho3d/Scene.c>
#  include <urho3d/DelayedCall.c>
#  include <_std/PhysicsSample.c>
#  include <_std/Main.c>
#  include <_std/Std.c>
#  include <urho3d/_Context/Context_Impl_.c>
#  include <urho3d/actions/FiniteTimeAction.c>
#  include <urho3d/actions/FiniteTimeActionState.c>
#  include <urho3d/actions/ActionDef.c>
#  include <urho3d/actions/ActionID.c>
#  include <haxe/Log.c>
#  include <hl/types/ArrayDyn.c>
#  include <urho3d/Component.c>
#  include <urho3d/Zone.c>
#  include <urho3d/Light.c>
#  include <urho3d/StaticModel.c>
#  include <urho3d/Skybox.c>
#  include <urho3d/RigidBody.c>
#  include <urho3d/CollisionShape.c>
#  include <urho3d/_Vector3/Vector3_Impl_.c>
#  include <urho3d/Camera.c>
#  include <_std/StringBuf.c>
#  include <_std/SysError.c>
#  include <_std/Sys.c>
#  include <sys/thread/Lock.c>
#  include <haxe/EntryPoint.c>
#  include <haxe/Exception.c>
#  include <haxe/ValueException.c>
#  include <haxe/_Int64/___Int64.c>
#  include <haxe/MainEvent.c>
#  include <_std/Math.c>
#  include <haxe/MainLoop.c>
#  include <hl/NativeArrayIterator_Dynamic.c>
#  include <haxe/iterators/ArrayIterator.c>
#  include <haxe/iterators/ArrayKeyValueIterator.c>
#  include <hl/NativeArrayIterator_Int.c>
#  include <hl/types/BytesIterator_Float.c>
#  include <hl/types/BytesKeyValueIterator_Float.c>
#  include <hl/types/BytesIterator_Int.c>
#  include <hl/types/BytesKeyValueIterator_Int.c>
#  include <hl/types/BytesIterator_hl_F32.c>
#  include <hl/types/BytesKeyValueIterator_hl_F32.c>
#  include <hl/types/BytesIterator_hl_UI16.c>
#  include <hl/types/BytesKeyValueIterator_hl_UI16.c>
#  include <hl/types/ArrayDynIterator.c>
#  include <hl/types/ArrayDynKeyValueIterator.c>
#  include <hl/types/ArrayObjIterator.c>
#  include <hl/types/ArrayObjKeyValueIterator.c>
#  include <urho3d/AnimatedModel.c>
#  include <urho3d/BillboardSet.c>
#  include <urho3d/DecalSet.c>
#  include <urho3d/AnimationController.c>
#  include <urho3d/LogicComponent.c>
#  include <urho3d/Constraint.c>
#  include <urho3d/SoundSource.c>
#  include <urho3d/ParticleEmitter2D.c>
#  include <urho3d/Graphics.c>
#  include <urho3d/Math.c>
#  include <urho3d/_Vector2/Vector2_Impl_.c>
#  include <urho3d/actions/ActionGroup.c>
#  include <urho3d/actions/ActionManager.c>
#  include <_std/Reflect.c>
#  include <hl/_Bytes/Bytes_Impl_.c>
#  include <_std/Type.c>
#  include <sys/thread/_Mutex/Mutex_Impl_.c>
#  include <sys/thread/_Deque/Deque_Impl_.c>
#  include <haxe/_Int32/Int32_Impl_.c>
#  include <haxe/NativeStackTrace.c>
#  include <haxe/ds/ArraySort.c>
#  include <urho3d/_AbstractApplication/AbstractApplication_Impl_.c>
#  include <urho3d/_AnimatedModel/AbstractAnimatedModel_Impl_.c>
#  include <urho3d/_Animation/Animation_Impl_.c>
#  include <urho3d/_AnimationController/AbstractAnimationController_Impl_.c>
#  include <urho3d/_AnimationState/AnimationState_Impl_.c>
#  include <urho3d/_BiasParameters/BiasParameters_Impl_.c>
#  include <urho3d/_Billboard/Billboard_Impl_.c>
#  include <urho3d/_BillboardSet/BillboardPOD_Impl_.c>
#  include <urho3d/_BillboardSet/AbstractBillboardSet_Impl_.c>
#  include <urho3d/_Bone/Bone_Impl_.c>
#  include <urho3d/_BoundingBox/BoundingBox_Impl_.c>
#  include <urho3d/_Camera/AbstractCamera_Impl_.c>
#  include <urho3d/_CascadeParameters/CascadeParameters_Impl_.c>
#  include <urho3d/_CollisionShape/AbstractCollisionShape_Impl_.c>
#  include <urho3d/_Color/Color_Impl_.c>
#  include <urho3d/_Component/AbstractComponent_Impl_.c>
#  include <urho3d/_Constraint/AbstractConstraint_Impl_.c>
#  include <urho3d/_DecalSet/AbstractDecalSet_Impl_.c>
#  include <urho3d/_Drawable/Drawable_Impl_.c>
#  include <urho3d/_File/File_Impl_.c>
#  include <urho3d/_HString/HString_Impl_.c>
#  include <urho3d/_Input/KeyDown_Impl_.c>
#  include <urho3d/_Input/KeyPress_Impl_.c>
#  include <urho3d/Input.c>
#  include <urho3d/_IntRect/IntRect_Impl_.c>
#  include <urho3d/_IntVector2/IntVector2_Impl_.c>
#  include <urho3d/_Light/AbstractLight_Impl_.c>
#  include <urho3d/_LogicComponent/UpdateEvent_Impl_.c>
#  include <urho3d/_LogicComponent/AbstractLogicComponent_Impl_.c>
#  include <urho3d/_Material/Material_Impl_.c>
#  include <urho3d/_Model/Model_Impl_.c>
#  include <urho3d/_Node/AbstractNode_Impl_.c>
#  include <urho3d/_Object/Object_Impl_.c>
#  include <urho3d/_Octree/Octree_Impl_.c>
#  include <urho3d/_ParticleEffect2D/ParticleEffect2D_Impl_.c>
#  include <urho3d/_ParticleEmitter2D/AbstractParticleEmitter2D_Impl_.c>
#  include <urho3d/_PhysicsRaycastResult/PhysicsRaycastResult_Impl_.c>
#  include <urho3d/_PhysicsWorld/PhysicsWorld_Impl_.c>
#  include <urho3d/_Quaternion/Quaternion_Impl_.c>
#  include <urho3d/_Ray/Ray_Impl_.c>
#  include <urho3d/_RayQueryResult/RayQueryResult_Impl_.c>
#  include <urho3d/_RayQueryResults/RayQueryResults_Impl_.c>
#  include <urho3d/_RefCounted/RefCounted_Impl_.c>
#  include <urho3d/_RenderPath/RenderPath_Impl_.c>
#  include <urho3d/_Renderer/Viewports_Impl_.c>
#  include <urho3d/Renderer.c>
#  include <urho3d/_RigidBody/AbstractRigidBody_Impl_.c>
#  include <urho3d/_Scene/AbstractScene_Impl_.c>
#  include <urho3d/_Skeleton/Skeleton_Impl_.c>
#  include <urho3d/_Skybox/AbstractSkybox_Impl_.c>
#  include <urho3d/_Sound/Sound_Impl_.c>
#  include <urho3d/_SoundSource/AbstractSoundSource_Impl_.c>
#  include <urho3d/_StaticModel/AbstractStaticModel_Impl_.c>
#  include <urho3d/_StringHash/StringHash_Impl_.c>
#  include <urho3d/_TColor/TColor_Impl_.c>
#  include <urho3d/_TIntVector2/TIntVector2_Impl_.c>
#  include <urho3d/_TNode/TNode_Impl_.c>
#  include <urho3d/_TQuaternion/TQuaternion_Impl_.c>
#  include <urho3d/_TRay/TRay_Impl_.c>
#  include <urho3d/_TRigidBody/TRigidBody_Impl_.c>
#  include <urho3d/_TStringHash/TStringHash_Impl_.c>
#  include <urho3d/_TVariant/TVariant_Impl_.c>
#  include <urho3d/_TVariantMap/TVariantMap_Impl_.c>
#  include <urho3d/_TVector2/TVector2_Impl_.c>
#  include <urho3d/_TVector3/TVector3_Impl_.c>
#  include <urho3d/_TVectorBuffer/TVectorBuffer_Impl_.c>
#  include <urho3d/_Technique/Technique_Impl_.c>
#  include <urho3d/_Texture/Texture_Impl_.c>
#  include <urho3d/_TouchState/TouchState_Impl_.c>
#  include <urho3d/_ValueAnimation/ValueAnimation_Impl_.c>
#  include <urho3d/_Variant/Variant_Impl_.c>
#  include <urho3d/_VariantMap/VariantMap_Impl_.c>
#  include <urho3d/_VectorBuffer/VectorBuffer_Impl_.c>
#  include <urho3d/_Viewport/Viewport_Impl_.c>
#  include <urho3d/_XMLFile/XMLFile_Impl_.c>
#  include <urho3d/_Zone/AbstractZone_Impl_.c>
#  include <hl/init.c>
#  include <hl/reflect.c>
#  include <hl/types.c>
#  include <hl/globals.c>
#endif

void hl_init_hashes();
void hl_init_roots();
void hl_init_types( hl_module_context *ctx );
extern void *hl_functions_ptrs[];
extern hl_type *hl_functions_types[];

// Entry point
void hl_entry_point() {
	hl_module_context ctx;
	hl_alloc_init(&ctx.alloc);
	ctx.functions_ptrs = hl_functions_ptrs;
	ctx.functions_types = hl_functions_types;
	hl_init_types(&ctx);
	hl_init_hashes();
	hl_init_roots();
	fun$init();
}

