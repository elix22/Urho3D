﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <actions/EaseOut.h>
void actions_EaseRateAction_new(actions__EaseRateAction,actions__FiniteTimeAction,double);
#include <urho3d/Node.h>
#include <actions/EaseOutState.h>
#include <actions/FiniteTimeActionState.h>
extern hl_type t$actions_EaseOutState;
void actions_EaseOutState_new(actions__EaseOutState,actions__EaseOut,urho3d__Node);
extern hl_type t$actions_EaseOut;

void actions_EaseOut_new(actions__EaseOut r0,actions__FiniteTimeAction r1,double r2) {
	actions_EaseRateAction_new(((actions__EaseRateAction)r0),r1,r2);
	return;
}

actions__FiniteTimeActionState actions_EaseOut_StartAction(actions__EaseOut r0,urho3d__Node r1) {
	actions__EaseOutState r2;
	r2 = (actions__EaseOutState)hl_alloc_obj(&t$actions_EaseOutState);
	actions_EaseOutState_new(r2,r0,r1);
	return ((actions__FiniteTimeActionState)r2);
}

actions__FiniteTimeAction actions_EaseOut_Reverse(actions__EaseOut r0) {
	hl__types__ArrayObj r3;
	actions__FiniteTimeAction r2;
	actions__EaseOut r1;
	double r8, r9;
	vdynamic *r6;
	varray *r7;
	int r4, r5;
	r1 = (actions__EaseOut)hl_alloc_obj(&t$actions_EaseOut);
	r3 = r0->InnerAction;
	if( r3 == NULL ) hl_null_access();
	r4 = 0;
	r5 = r3->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$9489f5a_3_8;
	r2 = NULL;
	goto label$9489f5a_3_11;
	label$9489f5a_3_8:
	r7 = r3->array;
	r6 = ((vdynamic**)(r7 + 1))[r4];
	r2 = (actions__FiniteTimeAction)r6;
	label$9489f5a_3_11:
	if( r2 == NULL ) hl_null_access();
	r2 = ((actions__FiniteTimeAction (*)(actions__FiniteTimeAction))r2->$type->vobj_proto[0])(r2);
	r8 = 1.;
	r9 = r0->Rate;
	r8 = r8 / r9;
	actions_EaseOut_new(r1,r2,r8);
	return ((actions__FiniteTimeAction)r1);
}

