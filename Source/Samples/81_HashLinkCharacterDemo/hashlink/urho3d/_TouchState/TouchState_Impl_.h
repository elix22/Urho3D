﻿// Generated by HLC 4.1.2 (HL v4)
#ifndef INC_urho3d___TouchState__TouchState_Impl_
#define INC_urho3d___TouchState__TouchState_Impl_
typedef struct _urho3d___TouchState__$TouchState_Impl_ *urho3d___TouchState__$TouchState_Impl_;
typedef struct _urho3d___TouchState__TouchState_Impl_ *urho3d___TouchState__TouchState_Impl_;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/natives.h>


struct _urho3d___TouchState__$TouchState_Impl_ {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* get_touchID;
	vclosure* get_position;
	vclosure* get_lastPosition;
	vclosure* get_delta;
	vclosure* get_pressure;
};
struct _urho3d___TouchState__TouchState_Impl_ {
	hl_type *$type;
};
#endif

