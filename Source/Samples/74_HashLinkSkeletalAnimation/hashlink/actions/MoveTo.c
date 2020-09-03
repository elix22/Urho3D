﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <actions/MoveTo.h>
#include <hl/natives.h>
void actions_MoveBy_new(actions__MoveBy,double,hl_urho3d_math_vector3*);
#include <urho3d/Node.h>
#include <actions/MoveToState.h>
#include <actions/FiniteTimeActionState.h>
extern hl_type t$actions_MoveToState;
void actions_MoveToState_new(actions__MoveToState,actions__MoveTo,urho3d__Node);

void actions_MoveTo_new(actions__MoveTo r0,double r1,hl_urho3d_math_vector3* r2) {
	actions_MoveBy_new(((actions__MoveBy)r0),r1,r2);
	r0->EndPosition = r2;
	return;
}

hl_urho3d_math_vector3* actions_MoveTo_get_PositionEnd(actions__MoveTo r0) {
	hl_urho3d_math_vector3 *r1;
	r1 = r0->EndPosition;
	return r1;
}

actions__FiniteTimeActionState actions_MoveTo_StartAction(actions__MoveTo r0,urho3d__Node r1) {
	actions__MoveToState r2;
	r2 = (actions__MoveToState)hl_alloc_obj(&t$actions_MoveToState);
	actions_MoveToState_new(r2,r0,r1);
	return ((actions__FiniteTimeActionState)r2);
}

