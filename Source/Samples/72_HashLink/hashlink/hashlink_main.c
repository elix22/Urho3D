﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
void fun$init(void);

#//include <hlc_main.c>

#ifndef HL_MAKE
#  include <hl/hashes.c>
#  include <hl/functions.c>
#  include <hl/BaseType.c>
#  include <_std/String.c>
#  include <hl/types/ArrayAccess.c>
#  include <hl/types/ArrayBase.c>
#  include <hl/types/ArrayBytes_Int.c>
#  include <hl/types/ArrayBytes_hl_UI16.c>
#  include <hl/types/ArrayBytes_hl_F32.c>
#  include <hl/types/ArrayBytes_Float.c>
#  include <urho3d/Node.c>
#  include <urho3d/Component.c>
#  include <urho3d/_Context/Context_Impl_.c>
#  include <urho3d/LogicComponent.c>
#  include <_std/Rotator.c>
#  include <urho3d/Application.c>
#  include <urho3d/Scene.c>
#  include <hl/types/ArrayObj.c>
#  include <_std/AnimatingSceneSample.c>
#  include <haxe/Log.c>
#  include <hl/types/ArrayDyn.c>
#  include <urho3d/Zone.c>
#  include <urho3d/StaticModel.c>
#  include <urho3d/Camera.c>
#  include <urho3d/Light.c>
#  include <_std/Date.c>
#  include <_std/Main.c>
#  include <_std/Std.c>
#  include <_std/StringBuf.c>
#  include <_std/SysError.c>
#  include <haxe/Exception.c>
#  include <haxe/ValueException.c>
#  include <haxe/iterators/ArrayIterator.c>
#  include <haxe/iterators/ArrayKeyValueIterator.c>
#  include <hl/NativeArrayIterator_Dynamic.c>
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
#  include <urho3d/_Vector2/Vector2_Impl_.c>
#  include <urho3d/_Vector3/Vector3_Impl_.c>
#  include <hl/_Bytes/Bytes_Impl_.c>
#  include <_std/Sys.c>
#  include <_std/Type.c>
#  include <haxe/NativeStackTrace.c>
#  include <haxe/ds/ArraySort.c>
#  include <urho3d/_AbstractApplication/AbstractApplication_Impl_.c>
#  include <urho3d/_BoundingBox/BoundingBox_Impl_.c>
#  include <urho3d/_Camera/AbstractCamera_Impl_.c>
#  include <urho3d/_Color/Color_Impl_.c>
#  include <urho3d/_Component/AbstractComponent_Impl_.c>
#  include <urho3d/Graphics.c>
#  include <urho3d/Input.c>
#  include <urho3d/_IntVector2/IntVector2_Impl_.c>
#  include <urho3d/_Light/AbstractLight_Impl_.c>
#  include <urho3d/_LogicComponent/AbstractLogicComponent_Impl_.c>
#  include <urho3d/_Material/Material_Impl_.c>
#  include <urho3d/_Model/Model_Impl_.c>
#  include <urho3d/_Node/AbstractNode_Impl_.c>
#  include <urho3d/_Quaternion/Quaternion_Impl_.c>
#  include <urho3d/Renderer.c>
#  include <urho3d/_Scene/AbstractScene_Impl_.c>
#  include <urho3d/_StaticModel/AbstractStaticModel_Impl_.c>
#  include <urho3d/_StringHash/StringHash_Impl_.c>
#  include <urho3d/_TIntVector2/TIntVector2_Impl_.c>
#  include <urho3d/_TQuaternion/TQuaternion_Impl_.c>
#  include <urho3d/_TStringHash/TStringHash_Impl_.c>
#  include <urho3d/_TVariant/TVariant_Impl_.c>
#  include <urho3d/_TVector2/TVector2_Impl_.c>
#  include <urho3d/_TVector3/TVector3_Impl_.c>
#  include <urho3d/_Variant/Variant_Impl_.c>
#  include <urho3d/_VariantMap/VariantMap_Impl_.c>
#  include <urho3d/_Viewport/Viewport_Impl_.c>
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

