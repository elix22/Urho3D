﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <urho3d/actions/EaseRateAction.h>
void urho3d_actions_ActionEase_new(urho3d__actions__ActionEase,urho3d__actions__FiniteTimeAction);
#include <urho3d/Node.h>
#include <urho3d/actions/EaseRateActionState.h>
#include <urho3d/actions/FiniteTimeActionState.h>
extern hl_type t$urho3d_actions_EaseRateActionState;
void urho3d_actions_EaseRateActionState_new(urho3d__actions__EaseRateActionState,urho3d__actions__EaseRateAction,urho3d__Node);
extern hl_type t$urho3d_actions_EaseRateAction;

void urho3d_actions_EaseRateAction_new(urho3d__actions__EaseRateAction r0,urho3d__actions__FiniteTimeAction r1,double r2) {
	urho3d_actions_ActionEase_new(((urho3d__actions__ActionEase)r0),r1);
	r0->Rate = r2;
	return;
}

urho3d__actions__FiniteTimeActionState urho3d_actions_EaseRateAction_StartAction(urho3d__actions__EaseRateAction r0,urho3d__Node r1) {
	urho3d__actions__EaseRateActionState r2;
	r2 = (urho3d__actions__EaseRateActionState)hl_alloc_obj(&t$urho3d_actions_EaseRateActionState);
	urho3d_actions_EaseRateActionState_new(r2,r0,r1);
	return ((urho3d__actions__FiniteTimeActionState)r2);
}

urho3d__actions__FiniteTimeAction urho3d_actions_EaseRateAction_Reverse(urho3d__actions__EaseRateAction r0) {
	urho3d__actions__EaseRateAction r1;
	hl__types__ArrayObj r3;
	urho3d__actions__FiniteTimeAction r2;
	double r8, r9;
	vdynamic *r6;
	varray *r7;
	int r4, r5;
	r1 = (urho3d__actions__EaseRateAction)hl_alloc_obj(&t$urho3d_actions_EaseRateAction);
	r3 = r0->InnerAction;
	if( r3 == NULL ) hl_null_access();
	r4 = 0;
	r5 = r3->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$ffc30e5_3_8;
	r2 = NULL;
	goto label$ffc30e5_3_11;
	label$ffc30e5_3_8:
	r7 = r3->array;
	r6 = ((vdynamic**)(r7 + 1))[r4];
	r2 = (urho3d__actions__FiniteTimeAction)r6;
	label$ffc30e5_3_11:
	if( r2 == NULL ) hl_null_access();
	r2 = ((urho3d__actions__FiniteTimeAction (*)(urho3d__actions__FiniteTimeAction))r2->$type->vobj_proto[0])(r2);
	r8 = 1.;
	r9 = r0->Rate;
	r8 = r8 / r9;
	urho3d_actions_EaseRateAction_new(r1,r2,r8);
	return ((urho3d__actions__FiniteTimeAction)r1);
}

