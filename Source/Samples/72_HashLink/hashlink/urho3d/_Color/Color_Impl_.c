﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <urho3d/_Color/Color_Impl_.h>
#include <hl/natives.h>

hl_urho3d_color* urho3d__Color_Color_Impl___new(float* r0,float* r1,float* r2,float* r3) {
	hl_urho3d_color *r8;
	float r4, r5, r6, r7;
	if( r0 ) goto label$7ccca4c_1_3;
	r4 = 0.;
	goto label$7ccca4c_1_4;
	label$7ccca4c_1_3:
	r4 = *r0;
	label$7ccca4c_1_4:
	if( r1 ) goto label$7ccca4c_1_7;
	r5 = 0.;
	goto label$7ccca4c_1_8;
	label$7ccca4c_1_7:
	r5 = *r1;
	label$7ccca4c_1_8:
	if( r2 ) goto label$7ccca4c_1_11;
	r6 = 0.;
	goto label$7ccca4c_1_12;
	label$7ccca4c_1_11:
	r6 = *r2;
	label$7ccca4c_1_12:
	if( r3 ) goto label$7ccca4c_1_15;
	r7 = 1.;
	goto label$7ccca4c_1_16;
	label$7ccca4c_1_15:
	r7 = *r3;
	label$7ccca4c_1_16:
	r8 = Urho3D__math_create_color(r4,r5,r6,r7);
	return r8;
}

