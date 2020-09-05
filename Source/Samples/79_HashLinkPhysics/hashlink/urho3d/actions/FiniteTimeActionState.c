﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <urho3d/actions/FiniteTimeActionState.h>
#include <hl/natives.h>
#include <urho3d/actions/FiniteTimeAction.h>
extern hl_type t$hl_types_ArrayObj;
void hl_types_ArrayObj_new(hl__types__ArrayObj);
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
double urho3d_actions_FiniteTimeAction_get_Duration(urho3d__actions__FiniteTimeAction);

double urho3d_actions_FiniteTimeActionState_get_Elapsed(urho3d__actions__FiniteTimeActionState r0) {
	double r1;
	r1 = r0->elapsed;
	return r1;
}

bool urho3d_actions_FiniteTimeActionState_IsDone(urho3d__actions__FiniteTimeActionState r0) {
	bool r3;
	urho3d__Node r4, r5;
	double r1, r2;
	r1 = r0->elapsed;
	r2 = r0->Duration;
	if( r1 >= r2 ) goto label$22c0648_2_10;
	r4 = r0->Target;
	r5 = NULL;
	if( r4 == r5 ) goto label$22c0648_2_8;
	r3 = false;
	goto label$22c0648_2_9;
	label$22c0648_2_8:
	r3 = true;
	label$22c0648_2_9:
	return r3;
	label$22c0648_2_10:
	r3 = true;
	return r3;
}

void urho3d_actions_FiniteTimeActionState_Update(urho3d__actions__FiniteTimeActionState r0,double r1) {
	return;
}

void urho3d_actions_FiniteTimeActionState_Step(urho3d__actions__FiniteTimeActionState r0,double r1) {
	bool r3;
	double r4, r5, r6, r7;
	r3 = r0->firstTick;
	if( !r3 ) goto label$22c0648_4_7;
	r3 = false;
	r0->firstTick = r3;
	r4 = 0.;
	r0->elapsed = r4;
	goto label$22c0648_4_10;
	label$22c0648_4_7:
	r4 = r0->elapsed;
	r4 = r4 + r1;
	r0->elapsed = r4;
	label$22c0648_4_10:
	r4 = r0->Duration;
	r5 = r0->elapsed;
	r7 = 9.999999999999999547e-08;
	if( r4 < r7 ) goto label$22c0648_4_17;
	r6 = 9.999999999999999547e-08;
	r3 = hl_math_isnan(r6);
	if( !r3 ) goto label$22c0648_4_19;
	label$22c0648_4_17:
	r6 = 9.999999999999999547e-08;
	goto label$22c0648_4_20;
	label$22c0648_4_19:
	r6 = r4;
	label$22c0648_4_20:
	r5 = r5 / r6;
	r6 = 1.;
	if( r6 < r5 ) goto label$22c0648_4_26;
	r6 = 1.;
	r3 = hl_math_isnan(r6);
	if( !r3 ) goto label$22c0648_4_28;
	label$22c0648_4_26:
	r6 = 1.;
	goto label$22c0648_4_29;
	label$22c0648_4_28:
	r6 = r5;
	label$22c0648_4_29:
	r7 = 0.;
	if( r7 < r6 ) goto label$22c0648_4_33;
	r3 = hl_math_isnan(r6);
	if( !r3 ) goto label$22c0648_4_35;
	label$22c0648_4_33:
	r7 = r6;
	goto label$22c0648_4_36;
	label$22c0648_4_35:
	r7 = 0.;
	label$22c0648_4_36:
	urho3d_actions_FiniteTimeActionState_Update(r0,r7);
	return;
}

void urho3d_actions_FiniteTimeActionState_Stop(urho3d__actions__FiniteTimeActionState r0) {
	urho3d__Node r1;
	r1 = NULL;
	r0->Target = r1;
	return;
}

void urho3d_actions_FiniteTimeActionState_new(urho3d__actions__FiniteTimeActionState r0,urho3d__actions__FiniteTimeAction r1,urho3d__Node r2) {
	hl__types__ArrayObj r3;
	bool r7;
	urho3d__Node r5;
	double r6;
	int r8;
	r3 = (hl__types__ArrayObj)hl_alloc_obj(&t$hl_types_ArrayObj);
	hl_types_ArrayObj_new(r3);
	r0->Action = r3;
	r5 = NULL;
	r0->OriginalTarget = r5;
	r5 = NULL;
	r0->Target = r5;
	r6 = 0.;
	r0->elapsed = r6;
	r6 = 0.;
	r0->Duration = r6;
	r7 = false;
	r0->firstTick = r7;
	r3 = r0->Action;
	if( r3 == NULL ) hl_null_access();
	r8 = hl_types_ArrayObj_push(r3,((vdynamic*)r1));
	r0->Target = r2;
	r0->OriginalTarget = r2;
	if( r1 == NULL ) hl_null_access();
	r6 = urho3d_actions_FiniteTimeAction_get_Duration(r1);
	r0->Duration = r6;
	r6 = 0.;
	r0->elapsed = r6;
	r7 = true;
	r0->firstTick = r7;
	return;
}

