﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <urho3d/DelayedCall.h>
#include <hl/types/ArrayObj.h>
extern String s$;
extern hl_type t$_dyn;
#include <hl/natives.h>
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
#include <hl/types/ArrayBase.h>
hl__types__ArrayDyn hl_types_ArrayDyn_alloc(hl__types__ArrayBase,bool*);

void urho3d_DelayedCall_new(urho3d__DelayedCall r0) {
	bool *r10;
	String r4;
	hl__types__ArrayObj r9;
	hl_type *r7;
	bool r2;
	hl__types__ArrayDyn r5;
	double r1;
	vdynamic *r3;
	int r8;
	varray *r6;
	r1 = 0.;
	r0->period_ = r1;
	r1 = 0.;
	r0->delay_ = r1;
	r2 = false;
	r0->repeat_ = r2;
	r3 = NULL;
	r0->obj_ = r3;
	r4 = (String)s$;
	r0->declaration_ = r4;
	r7 = &t$_dyn;
	r8 = 0;
	r6 = hl_alloc_array(r7,r8);
	r9 = hl_types_ArrayObj_alloc(r6);
	r2 = true;
	r10 = &r2;
	r5 = hl_types_ArrayDyn_alloc(((hl__types__ArrayBase)r9),r10);
	r0->parameters_ = r5;
	return;
}

