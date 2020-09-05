﻿// Generated by HLC 4.1.2 (HL v4)
#ifndef INC_urho3d__actions__FiniteTimeActionState
#define INC_urho3d__actions__FiniteTimeActionState
typedef struct _urho3d__actions__$FiniteTimeActionState *urho3d__actions__$FiniteTimeActionState;
typedef struct _urho3d__actions__FiniteTimeActionState *urho3d__actions__FiniteTimeActionState;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <urho3d/Node.h>
#include <hl/types/ArrayObj.h>


struct _urho3d__actions__$FiniteTimeActionState {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _urho3d__actions__FiniteTimeActionState {
	hl_type *$type;
	bool firstTick;
	double Duration;
	double elapsed;
	urho3d__Node Target;
	urho3d__Node OriginalTarget;
	hl__types__ArrayObj Action;
};
#endif

