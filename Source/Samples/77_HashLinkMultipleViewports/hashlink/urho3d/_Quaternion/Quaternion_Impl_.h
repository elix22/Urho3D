﻿// Generated by HLC 4.1.2 (HL v4)
#ifndef INC_urho3d___Quaternion__Quaternion_Impl_
#define INC_urho3d___Quaternion__Quaternion_Impl_
typedef struct _urho3d___Quaternion__$Quaternion_Impl_ *urho3d___Quaternion__$Quaternion_Impl_;
typedef struct _urho3d___Quaternion__Quaternion_Impl_ *urho3d___Quaternion__Quaternion_Impl_;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/natives.h>


struct _urho3d___Quaternion__$Quaternion_Impl_ {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	hl_urho3d_math_quaternion* IDENTITY;
	vclosure* _new;
	vclosure* Normalize;
	vclosure* SetAngles;
	vclosure* mulTQuaternion;
	vclosure* mulQuaternion;
	vclosure* toTQuaternion;
	vclosure* fromTQuaternion;
};
struct _urho3d___Quaternion__Quaternion_Impl_ {
	hl_type *$type;
};
#endif

