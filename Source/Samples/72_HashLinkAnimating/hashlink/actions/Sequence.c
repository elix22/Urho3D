﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <actions/Sequence.h>
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
#include <urho3d/Node.h>
#include <actions/SequenceState.h>
#include <actions/FiniteTimeActionState.h>
extern hl_type t$actions_SequenceState;
void actions_SequenceState_new(actions__SequenceState,actions__Sequence,urho3d__Node);
extern hl_type t$actions_Sequence;
void actions_Sequence_new(actions__Sequence,actions__FiniteTimeAction,actions__FiniteTimeAction,hl__types__ArrayObj);
#include <actions/ExtraAction.h>
extern hl_type t$actions_FiniteTimeAction;
#include <hl/natives.h>
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
double actions_FiniteTimeAction_get_Duration(actions__FiniteTimeAction);
void actions_FiniteTimeAction_new(actions__FiniteTimeAction,double*);
double actions_FiniteTimeAction_set_Duration(actions__FiniteTimeAction,double);
extern hl_type t$actions_ExtraAction;
void actions_ExtraAction_new(actions__ExtraAction);

void actions_Sequence_InitSequence(actions__Sequence r0,actions__FiniteTimeAction r1,actions__FiniteTimeAction r2) {
	hl__types__ArrayObj r4;
	int r3;
	r4 = r0->Actions;
	if( r4 == NULL ) hl_null_access();
	r3 = hl_types_ArrayObj_push(r4,((vdynamic*)r1));
	r4 = r0->Actions;
	if( r4 == NULL ) hl_null_access();
	r3 = hl_types_ArrayObj_push(r4,((vdynamic*)r2));
	return;
}

actions__FiniteTimeActionState actions_Sequence_StartAction(actions__Sequence r0,urho3d__Node r1) {
	actions__SequenceState r2;
	r2 = (actions__SequenceState)hl_alloc_obj(&t$actions_SequenceState);
	actions_SequenceState_new(r2,r0,r1);
	return ((actions__FiniteTimeActionState)r2);
}

actions__FiniteTimeAction actions_Sequence_Reverse(actions__Sequence r0) {
	hl__types__ArrayObj r3;
	actions__FiniteTimeAction r2, r8;
	actions__Sequence r1;
	vdynamic *r6;
	varray *r7;
	int r4, r5;
	r1 = (actions__Sequence)hl_alloc_obj(&t$actions_Sequence);
	r3 = r0->Actions;
	if( r3 == NULL ) hl_null_access();
	r4 = 1;
	r5 = r3->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$22a7b1b_3_8;
	r2 = NULL;
	goto label$22a7b1b_3_11;
	label$22a7b1b_3_8:
	r7 = r3->array;
	r6 = ((vdynamic**)(r7 + 1))[r4];
	r2 = (actions__FiniteTimeAction)r6;
	label$22a7b1b_3_11:
	if( r2 == NULL ) hl_null_access();
	r2 = ((actions__FiniteTimeAction (*)(actions__FiniteTimeAction))r2->$type->vobj_proto[0])(r2);
	r3 = r0->Actions;
	if( r3 == NULL ) hl_null_access();
	r4 = 0;
	r5 = r3->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$22a7b1b_3_20;
	r8 = NULL;
	goto label$22a7b1b_3_23;
	label$22a7b1b_3_20:
	r7 = r3->array;
	r6 = ((vdynamic**)(r7 + 1))[r4];
	r8 = (actions__FiniteTimeAction)r6;
	label$22a7b1b_3_23:
	if( r8 == NULL ) hl_null_access();
	r8 = ((actions__FiniteTimeAction (*)(actions__FiniteTimeAction))r8->$type->vobj_proto[0])(r8);
	r3 = NULL;
	actions_Sequence_new(r1,r2,r8,r3);
	return ((actions__FiniteTimeAction)r1);
}

void actions_Sequence_new(actions__Sequence r0,actions__FiniteTimeAction r1,actions__FiniteTimeAction r2,hl__types__ArrayObj r3) {
	hl__types__ArrayObj r4;
	hl_type *r6;
	actions__FiniteTimeAction r9, r13, r22;
	actions__ExtraAction r20;
	actions__Sequence r21;
	double r10, r11, r17, r18;
	vdynamic *r15;
	double *r12;
	int r7, r14, r16, r19;
	varray *r5;
	r6 = &t$actions_FiniteTimeAction;
	r7 = 0;
	r5 = hl_alloc_array(r6,r7);
	r4 = hl_types_ArrayObj_alloc(r5);
	r0->Actions = r4;
	if( !r1 ) goto label$22a7b1b_4_16;
	if( !r2 ) goto label$22a7b1b_4_16;
	if( r1 == NULL ) hl_null_access();
	r10 = actions_FiniteTimeAction_get_Duration(r1);
	if( r2 == NULL ) hl_null_access();
	r11 = actions_FiniteTimeAction_get_Duration(r2);
	r10 = r10 + r11;
	r12 = &r10;
	actions_FiniteTimeAction_new(((actions__FiniteTimeAction)r0),r12);
	actions_Sequence_InitSequence(r0,r1,r2);
	goto label$22a7b1b_4_89;
	label$22a7b1b_4_16:
	r12 = NULL;
	actions_FiniteTimeAction_new(((actions__FiniteTimeAction)r0),r12);
	if( r3 == NULL ) hl_null_access();
	r7 = 0;
	r14 = r3->length;
	if( ((unsigned)r7) < ((unsigned)r14) ) goto label$22a7b1b_4_24;
	r9 = NULL;
	goto label$22a7b1b_4_27;
	label$22a7b1b_4_24:
	r5 = r3->array;
	r15 = ((vdynamic**)(r5 + 1))[r7];
	r9 = (actions__FiniteTimeAction)r15;
	label$22a7b1b_4_27:
	r11 = 0.;
	r7 = 0;
	r14 = r3->length;
	label$22a7b1b_4_30:
	if( r7 >= r14 ) goto label$22a7b1b_4_47;
	r16 = r7;
	++r7;
	if( r3 == NULL ) hl_null_access();
	r19 = r3->length;
	if( ((unsigned)r16) < ((unsigned)r19) ) goto label$22a7b1b_4_39;
	r13 = NULL;
	goto label$22a7b1b_4_42;
	label$22a7b1b_4_39:
	r5 = r3->array;
	r15 = ((vdynamic**)(r5 + 1))[r16];
	r13 = (actions__FiniteTimeAction)r15;
	label$22a7b1b_4_42:
	if( r13 == NULL ) hl_null_access();
	r18 = actions_FiniteTimeAction_get_Duration(r13);
	r17 = r11 + r18;
	r11 = r17;
	goto label$22a7b1b_4_30;
	label$22a7b1b_4_47:
	r17 = actions_FiniteTimeAction_set_Duration(((actions__FiniteTimeAction)r0),r11);
	if( r3 == NULL ) hl_null_access();
	r7 = r3->length;
	r14 = 1;
	if( r7 != r14 ) goto label$22a7b1b_4_56;
	r20 = (actions__ExtraAction)hl_alloc_obj(&t$actions_ExtraAction);
	actions_ExtraAction_new(r20);
	actions_Sequence_InitSequence(r0,r9,((actions__FiniteTimeAction)r20));
	goto label$22a7b1b_4_89;
	label$22a7b1b_4_56:
	r7 = 0;
	r14 = r3->length;
	r16 = 1;
	r14 = r14 - r16;
	label$22a7b1b_4_60:
	if( r7 >= r14 ) goto label$22a7b1b_4_77;
	r16 = r7;
	++r7;
	r21 = (actions__Sequence)hl_alloc_obj(&t$actions_Sequence);
	if( r3 == NULL ) hl_null_access();
	r19 = r3->length;
	if( ((unsigned)r16) < ((unsigned)r19) ) goto label$22a7b1b_4_70;
	r22 = NULL;
	goto label$22a7b1b_4_73;
	label$22a7b1b_4_70:
	r5 = r3->array;
	r15 = ((vdynamic**)(r5 + 1))[r16];
	r22 = (actions__FiniteTimeAction)r15;
	label$22a7b1b_4_73:
	r4 = NULL;
	actions_Sequence_new(r21,r9,r22,r4);
	r9 = ((actions__FiniteTimeAction)r21);
	goto label$22a7b1b_4_60;
	label$22a7b1b_4_77:
	if( r3 == NULL ) hl_null_access();
	r7 = r3->length;
	r14 = 1;
	r7 = r7 - r14;
	r14 = r3->length;
	if( ((unsigned)r7) < ((unsigned)r14) ) goto label$22a7b1b_4_85;
	r22 = NULL;
	goto label$22a7b1b_4_88;
	label$22a7b1b_4_85:
	r5 = r3->array;
	r15 = ((vdynamic**)(r5 + 1))[r7];
	r22 = (actions__FiniteTimeAction)r15;
	label$22a7b1b_4_88:
	actions_Sequence_InitSequence(r0,r9,r22);
	label$22a7b1b_4_89:
	return;
}

