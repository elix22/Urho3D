﻿// Generated by HLC 4.1.2 (HL v4)
#ifndef INC_actions__MoveToState
#define INC_actions__MoveToState
typedef struct _actions__$MoveToState *actions__$MoveToState;
typedef struct _actions__MoveToState *actions__MoveToState;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <actions/MoveByState.h>
#include <actions/FiniteTimeActionState.h>
#include <urho3d/Node.h>
#include <hl/types/ArrayObj.h>
#include <hl/natives.h>


struct _actions__$MoveToState {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _actions__MoveToState {
	hl_type *$type;
	bool firstTick;
	double Duration;
	double elapsed;
	urho3d__Node Target;
	urho3d__Node OriginalTarget;
	hl__types__ArrayObj Action;
	hl_urho3d_math_vector3* PositionDelta;
	hl_urho3d_math_vector3* EndPosition;
	hl_urho3d_math_vector3* StartPosition;
	hl_urho3d_math_vector3* PreviousPosition;
};
#endif

