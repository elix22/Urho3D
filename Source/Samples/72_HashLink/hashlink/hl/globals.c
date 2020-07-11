﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hl/BaseType.h>
#include <hl/Class.h>
#include <_std/String.h>
#include <_std/Date.h>
#include <_std/HVector2.h>
#include <urho3d/Application.h>
#include <_std/MyApplication.h>
#include <hl/types/ArrayAccess.h>
#include <hl/types/ArrayBase.h>
#include <hl/types/ArrayBytes_hl_F32.h>
#include <haxe/Log.h>
#include <_std/StringBuf.h>
#include <_std/SysError.h>
#include <hl/natives.h>
#include <hl/Enum.h>
#include <haxe/Exception.h>
#include <haxe/ValueException.h>
#include <haxe/iterators/ArrayIterator.h>
#include <haxe/iterators/ArrayKeyValueIterator.h>
#include <hl/NativeArrayIterator_Dynamic.h>
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
#include <_std/Std.h>
#include <_std/Main.h>
#include <hl/CoreType.h>
#include <hl/CoreEnum.h>
#include <hl/_Bytes/Bytes_Impl_.h>
#include <_std/Sys.h>
#include <_std/Type.h>
#include <haxe/NativeStackTrace.h>
#include <haxe/ds/ArraySort.h>
#include <hl/_NativeArray/NativeArray_Impl_.h>
#include <hl/_Type/Type_Impl_.h>
#include <hl/types/ArrayDyn.h>
#include <hl/types/_BytesMap/BytesMap_Impl_.h>
#include <urho3d/_AbstractApplication/AbstractApplication_Impl_.h>
#include <urho3d/_Context/Context_Impl_.h>
#include <urho3d/_StringHash/StringHash_Impl_.h>
#include <urho3d/_Variant/Variant_Impl_.h>
#include <urho3d/_VariantMap/VariantMap_Impl_.h>
#include <urho3d/_Vector2/Vector2_Impl_.h>
extern hl_type t$String;

// Globals
hl__$BaseType g$_hl_BaseType = 0;
hl__Class g$_hl_Class = 0;
$String g$_String = 0;
$Date g$_Date = 0;
$HVector2 g$_HVector2 = 0;
urho3d__$Application g$_urho3d_Application = 0;
$MyApplication g$_MyApplication = 0;
hl__types__$ArrayAccess g$_hl_types_ArrayAccess = 0;
hl__types__$ArrayBase g$_hl_types_ArrayBase = 0;
hl__types__$ArrayBytes_hl_F32 g$_hl_types_ArrayBytes_hl_F32 = 0;
haxe__$Log g$_haxe_Log = 0;
String s$Setup = 0;
String s$src_haxe_Main_hx = 0;
String s$MyApplication = 0;
String s$Update = 0;
String s$Start_ = 0;
String s$Start = 0;
String s$update_hx = 0;
String s$HandleUpdate = 0;
String s$Can_t_add_ = 0;
String s$84c4047 = 0;
String s$_and_ = 0;
String s$9371d7a = 0;
String s$Invalid_unicode_char_ = 0;
String s$null = 0;
String s$ = 0;
$StringBuf g$_StringBuf = 0;
$SysError g$_SysError = 0;
String s$SysError_ = 0;
String s$68b329d = 0;
hl_bytes_map* g$__types__ = 0;
hl__$Enum g$_hl_Enum = 0;
haxe__$Exception g$_haxe_Exception = 0;
haxe__$ValueException g$_haxe_ValueException = 0;
String s$853ae90 = 0;
String s$fc763cb = 0;
String s$e265492 = 0;
String s$stack = 0;
String s$NativeStackTrace_callStack = 0;
haxe__iterators__$ArrayIterator g$_haxe_iterators_ArrayIterator = 0;
haxe__iterators__$ArrayKeyValueIterator g$19142ef = 0;
hl__$NativeArrayIterator_Dynamic g$_hl_NativeArrayIterator_Dynamic = 0;
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
$Std g$_Std = 0;
String s$2f43b42 = 0;
String s$test = 0;
$Main g$_Main = 0;
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
urho3d___AbstractApplication__$AbstractApplication_Impl_ g$73bcf85 = 0;
urho3d___Context__$Context_Impl_ g$_urho3d__Context_Context_Impl_ = 0;
urho3d___StringHash__$StringHash_Impl_ g$4d1fd18 = 0;
urho3d___Variant__$Variant_Impl_ g$_urho3d__Variant_Variant_Impl_ = 0;
urho3d___VariantMap__$VariantMap_Impl_ g$50a5cf6 = 0;
urho3d___Vector2__$Vector2_Impl_ g$_urho3d__Vector2_Vector2_Impl_ = 0;
static struct _String const_s$Setup = {&t$String,(vbyte*)USTR("Setup"),5};
static struct _String const_s$src_haxe_Main_hx = {&t$String,(vbyte*)USTR("src/haxe/Main.hx"),16};
static struct _String const_s$MyApplication = {&t$String,(vbyte*)USTR("MyApplication"),13};
static struct _String const_s$Update = {&t$String,(vbyte*)USTR("Update"),6};
static struct _String const_s$Start_ = {&t$String,(vbyte*)USTR("Start "),6};
static struct _String const_s$Start = {&t$String,(vbyte*)USTR("Start"),5};
static struct _String const_s$update_hx = {&t$String,(vbyte*)USTR("update hx"),9};
static struct _String const_s$HandleUpdate = {&t$String,(vbyte*)USTR("HandleUpdate"),12};
static struct _String const_s$Can_t_add_ = {&t$String,(vbyte*)USTR("Can't add "),10};
static struct _String const_s$84c4047 = {&t$String,(vbyte*)USTR("("),1};
static struct _String const_s$_and_ = {&t$String,(vbyte*)USTR(") and "),6};
static struct _String const_s$9371d7a = {&t$String,(vbyte*)USTR(")"),1};
static struct _String const_s$Invalid_unicode_char_ = {&t$String,(vbyte*)USTR("Invalid unicode char "),21};
static struct _String const_s$null = {&t$String,(vbyte*)USTR("null"),4};
static struct _String const_s$ = {&t$String,(vbyte*)USTR(""),0};
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
static struct _String const_s$test = {&t$String,(vbyte*)USTR("test"),4};
static struct _String const_s$Float = {&t$String,(vbyte*)USTR("Float"),5};
static struct _String const_s$Int = {&t$String,(vbyte*)USTR("Int"),3};
static struct _String const_s$Bool = {&t$String,(vbyte*)USTR("Bool"),4};
static struct _String const_s$Dynamic = {&t$String,(vbyte*)USTR("Dynamic"),7};
static struct _String const_s$Array = {&t$String,(vbyte*)USTR("Array"),5};
static struct _String const_s$hl_types_ArrayDyn = {&t$String,(vbyte*)USTR("hl.types.ArrayDyn"),17};

void hl_init_roots() {
	s$Setup = &const_s$Setup;
	s$src_haxe_Main_hx = &const_s$src_haxe_Main_hx;
	s$MyApplication = &const_s$MyApplication;
	s$Update = &const_s$Update;
	s$Start_ = &const_s$Start_;
	s$Start = &const_s$Start;
	s$update_hx = &const_s$update_hx;
	s$HandleUpdate = &const_s$HandleUpdate;
	s$Can_t_add_ = &const_s$Can_t_add_;
	s$84c4047 = &const_s$84c4047;
	s$_and_ = &const_s$_and_;
	s$9371d7a = &const_s$9371d7a;
	s$Invalid_unicode_char_ = &const_s$Invalid_unicode_char_;
	s$null = &const_s$null;
	s$ = &const_s$;
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
	s$test = &const_s$test;
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
	hl_add_root((void**)&g$_HVector2);
	hl_add_root((void**)&g$_urho3d_Application);
	hl_add_root((void**)&g$_MyApplication);
	hl_add_root((void**)&g$_hl_types_ArrayAccess);
	hl_add_root((void**)&g$_hl_types_ArrayBase);
	hl_add_root((void**)&g$_hl_types_ArrayBytes_hl_F32);
	hl_add_root((void**)&g$_haxe_Log);
	hl_add_root((void**)&g$_StringBuf);
	hl_add_root((void**)&g$_SysError);
	hl_add_root((void**)&g$__types__);
	hl_add_root((void**)&g$_hl_Enum);
	hl_add_root((void**)&g$_haxe_Exception);
	hl_add_root((void**)&g$_haxe_ValueException);
	hl_add_root((void**)&g$_haxe_iterators_ArrayIterator);
	hl_add_root((void**)&g$19142ef);
	hl_add_root((void**)&g$_hl_NativeArrayIterator_Dynamic);
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
	hl_add_root((void**)&g$_Std);
	hl_add_root((void**)&g$_Main);
	hl_add_root((void**)&g$_Float);
	hl_add_root((void**)&g$_Int);
	hl_add_root((void**)&g$_Bool);
	hl_add_root((void**)&g$_Dynamic);
	hl_add_root((void**)&g$_hl__Bytes_Bytes_Impl_);
	hl_add_root((void**)&g$_Sys);
	hl_add_root((void**)&g$_Type);
	hl_add_root((void**)&g$_haxe_NativeStackTrace);
	hl_add_root((void**)&g$_haxe_ds_ArraySort);
	hl_add_root((void**)&g$haxe_io_Error_Blocked);
	hl_add_root((void**)&g$haxe_io_Error_Overflow);
	hl_add_root((void**)&g$7abf311);
	hl_add_root((void**)&g$_hl__Type_Type_Impl_);
	hl_add_root((void**)&g$_hl_types_ArrayDyn);
	hl_add_root((void**)&g$2c4fafe);
	hl_add_root((void**)&g$73bcf85);
	hl_add_root((void**)&g$_urho3d__Context_Context_Impl_);
	hl_add_root((void**)&g$4d1fd18);
	hl_add_root((void**)&g$_urho3d__Variant_Variant_Impl_);
	hl_add_root((void**)&g$50a5cf6);
	hl_add_root((void**)&g$_urho3d__Vector2_Vector2_Impl_);
}
