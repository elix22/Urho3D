﻿// Generated by HLC 4.1.2 (HL v4)
#ifndef INC_urho3d__actions__RotateBy
#define INC_urho3d__actions__RotateBy
typedef struct _urho3d__actions__$RotateBy *urho3d__actions__$RotateBy;
typedef struct _urho3d__actions__RotateBy *urho3d__actions__RotateBy;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <urho3d/actions/FiniteTimeAction.h>


struct _urho3d__actions__$RotateBy {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _urho3d__actions__RotateBy {
	hl_type *$type;
	double duration;
	int Tag;
	bool isRepeatForever;
	double AngleX;
	double AngleY;
	double AngleZ;
};
#endif

