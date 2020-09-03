﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <actions/FiniteTimeAction.h>
#include <urho3d/Node.h>
#include <actions/FiniteTimeActionState.h>
extern hl_type t$actions_FiniteTimeActionState;
void actions_FiniteTimeActionState_new(actions__FiniteTimeActionState,actions__FiniteTimeAction,urho3d__Node);

double actions_FiniteTimeAction_set_Duration(actions__FiniteTimeAction r0,double r1) {
	double r2, r3, r4;
	r2 = r1;
	r4 = 0.;
	if( r1 != r4 ) goto label$9a746bf_1_5;
	r3 = 9.999999999999999547e-08;
	r2 = r3;
	label$9a746bf_1_5:
	r0->duration = r2;
	r3 = r0->duration;
	return r3;
}

double actions_FiniteTimeAction_get_Duration(actions__FiniteTimeAction r0) {
	double r1;
	r1 = r0->duration;
	return r1;
}

actions__FiniteTimeAction actions_FiniteTimeAction_Reverse(actions__FiniteTimeAction r0) {
	return r0;
}

actions__FiniteTimeActionState actions_FiniteTimeAction_StartAction(actions__FiniteTimeAction r0,urho3d__Node r1) {
	actions__FiniteTimeActionState r2;
	r2 = (actions__FiniteTimeActionState)hl_alloc_obj(&t$actions_FiniteTimeActionState);
	actions_FiniteTimeActionState_new(r2,r0,r1);
	return r2;
}

void actions_FiniteTimeAction_new(actions__FiniteTimeAction r0,double* r1) {
	bool r3;
	double r2, r5;
	int r4;
	if( r1 ) goto label$9a746bf_5_3;
	r2 = 9.999999999999999547e-08;
	goto label$9a746bf_5_4;
	label$9a746bf_5_3:
	r2 = *r1;
	label$9a746bf_5_4:
	r3 = false;
	r0->isRepeatForever = r3;
	r4 = -1;
	r0->Tag = r4;
	r5 = 0.;
	r0->duration = r5;
	r5 = actions_FiniteTimeAction_set_Duration(r0,r2);
	r3 = false;
	r0->isRepeatForever = r3;
	return;
}

