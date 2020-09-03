﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <urho3d/Math.h>
#include <hl/natives.h>
extern urho3d__$Math g$_urho3d_Math;
int haxe__Int32_Int32_Impl__ucompare(int,int);
extern hl_type t$haxe__Int64____Int64;
void haxe__Int64____Int64_new(haxe___Int64_____Int64,int,int);
double Math_random(void);

double urho3d_Math_Lerp(double r0,double r1,double r2) {
	double r3, r4;
	r4 = 1.;
	r4 = r4 - r2;
	r3 = r0 * r4;
	r4 = r1 * r2;
	r3 = r3 + r4;
	return r3;
}

double urho3d_Math_InverseLerp(double r0,double r1,double r2) {
	double r3, r4;
	r3 = r2 - r0;
	r4 = r1 - r0;
	r3 = r3 / r4;
	return r3;
}

double urho3d_Math_Max(double r0,double r1) {
	bool r2;
	if( r0 < r1 ) goto label$e53f207_3_3;
	r2 = hl_math_isnan(r1);
	if( !r2 ) goto label$e53f207_3_4;
	label$e53f207_3_3:
	return r1;
	label$e53f207_3_4:
	return r0;
}

double urho3d_Math_Min(double r0,double r1) {
	bool r2;
	if( r0 < r1 ) goto label$e53f207_4_3;
	r2 = hl_math_isnan(r0);
	if( !r2 ) goto label$e53f207_4_4;
	label$e53f207_4_3:
	return r0;
	label$e53f207_4_4:
	return r1;
}

double urho3d_Math_Abs(double r0) {
	double r1, r2;
	r2 = 0.;
	if( !(r0 >= r2) ) goto label$e53f207_5_3;
	return r0;
	label$e53f207_5_3:
	r1 = -r0;
	return r1;
}

double urho3d_Math_Sign(double r0) {
	double r1, r2;
	r2 = 0.;
	if( !(r2 < r0) ) goto label$e53f207_6_4;
	r1 = 1.;
	return r1;
	label$e53f207_6_4:
	r2 = 0.;
	if( !(r0 < r2) ) goto label$e53f207_6_8;
	r1 = -1.;
	return r1;
	label$e53f207_6_8:
	r1 = 0.;
	return r1;
}

double urho3d_Math_ToRadians(double r0) {
	urho3d__$Math r3;
	double r1, r2;
	r3 = (urho3d__$Math)g$_urho3d_Math;
	r2 = r3->_DEGTORAD_;
	r1 = r0 * r2;
	return r1;
}

double urho3d_Math_ToDegrees(double r0) {
	urho3d__$Math r2;
	double r1;
	r2 = (urho3d__$Math)g$_urho3d_Math;
	r1 = r2->_RADTODEG_;
	r1 = r1 * r0;
	return r1;
}

bool urho3d_Math_IsNaN(double r0) {
	bool r1;
	r1 = hl_math_isnan(r0);
	return r1;
}

bool urho3d_Math_IsInf(double r0) {
	bool r1;
	r1 = hl_math_isfinite(r0);
	r1 = !r1;
	return r1;
}

double urho3d_Math_Clamp(double r0,double r1,double r2) {
	if( !(r0 < r1) ) goto label$e53f207_11_2;
	return r1;
	label$e53f207_11_2:
	if( !(r2 < r0) ) goto label$e53f207_11_4;
	return r2;
	label$e53f207_11_4:
	return r0;
}

double urho3d_Math_SmoothStep(double r0,double r1,double r2) {
	double r3, r4, r5, r6;
	r3 = r2 - r0;
	r4 = r1 - r0;
	r3 = r3 / r4;
	r5 = 0.;
	if( !(r3 < r5) ) goto label$e53f207_12_7;
	r4 = 0.;
	goto label$e53f207_12_12;
	label$e53f207_12_7:
	r5 = 1.;
	if( !(r5 < r3) ) goto label$e53f207_12_11;
	r4 = 1.;
	goto label$e53f207_12_12;
	label$e53f207_12_11:
	r4 = r3;
	label$e53f207_12_12:
	r2 = r4;
	r4 = r4 * r4;
	r5 = 3.;
	r6 = 2.;
	r6 = r6 * r2;
	r5 = r5 - r6;
	r4 = r4 * r5;
	return r4;
}

double urho3d_Math_Sin(double r0) {
	urho3d__$Math r3;
	double r1, r2;
	r3 = (urho3d__$Math)g$_urho3d_Math;
	r2 = r3->_DEGTORAD_;
	r1 = r0 * r2;
	r1 = hl_math_sin(r1);
	return r1;
}

double urho3d_Math_Cos(double r0) {
	urho3d__$Math r3;
	double r1, r2;
	r3 = (urho3d__$Math)g$_urho3d_Math;
	r2 = r3->_DEGTORAD_;
	r1 = r0 * r2;
	r1 = hl_math_cos(r1);
	return r1;
}

double urho3d_Math_Tan(double r0) {
	urho3d__$Math r3;
	double r1, r2;
	r3 = (urho3d__$Math)g$_urho3d_Math;
	r2 = r3->_DEGTORAD_;
	r1 = r0 * r2;
	r1 = hl_math_tan(r1);
	return r1;
}

double urho3d_Math_Asin(double r0) {
	urho3d__$Math r2;
	double r1, r3, r4;
	r2 = (urho3d__$Math)g$_urho3d_Math;
	r1 = r2->_RADTODEG_;
	r4 = -1.;
	if( !(r0 < r4) ) goto label$e53f207_16_6;
	r3 = -1.;
	goto label$e53f207_16_11;
	label$e53f207_16_6:
	r4 = 1.;
	if( !(r4 < r0) ) goto label$e53f207_16_10;
	r3 = 1.;
	goto label$e53f207_16_11;
	label$e53f207_16_10:
	r3 = r0;
	label$e53f207_16_11:
	r3 = hl_math_asin(r3);
	r1 = r1 * r3;
	return r1;
}

double urho3d_Math_Acos(double r0) {
	urho3d__$Math r2;
	double r1, r3, r4;
	r2 = (urho3d__$Math)g$_urho3d_Math;
	r1 = r2->_RADTODEG_;
	r4 = -1.;
	if( !(r0 < r4) ) goto label$e53f207_17_6;
	r3 = -1.;
	goto label$e53f207_17_11;
	label$e53f207_17_6:
	r4 = 1.;
	if( !(r4 < r0) ) goto label$e53f207_17_10;
	r3 = 1.;
	goto label$e53f207_17_11;
	label$e53f207_17_10:
	r3 = r0;
	label$e53f207_17_11:
	r3 = hl_math_acos(r3);
	r1 = r1 * r3;
	return r1;
}

double urho3d_Math_Atan(double r0) {
	urho3d__$Math r2;
	double r1, r3;
	r2 = (urho3d__$Math)g$_urho3d_Math;
	r1 = r2->_RADTODEG_;
	r3 = hl_math_atan(r0);
	r1 = r1 * r3;
	return r1;
}

double urho3d_Math_Atan2(double r0,double r1) {
	urho3d__$Math r3;
	double r2, r4;
	r3 = (urho3d__$Math)g$_urho3d_Math;
	r2 = r3->_RADTODEG_;
	r4 = hl_math_atan2(r0,r1);
	r2 = r2 * r4;
	return r2;
}

double urho3d_Math_Pow(double r0,double r1) {
	double r2;
	r2 = hl_math_pow(r0,r1);
	return r2;
}

double urho3d_Math_Ln(double r0) {
	double r1;
	r1 = hl_math_log(r0);
	return r1;
}

double urho3d_Math_Sqrt(double r0) {
	double r1;
	r1 = hl_math_sqrt(r0);
	return r1;
}

double urho3d_Math_Mod(double r0,double r1) {
	double r2;
	r2 = fmod(r0,r1);
	return r2;
}

double urho3d_Math_AbsMod(double r0,double r1) {
	double r2, r3, r4;
	r2 = fmod(r0,r1);
	r4 = 0.;
	if( !(r2 < r4) ) goto label$e53f207_24_5;
	r3 = r2 + r1;
	return r3;
	label$e53f207_24_5:
	return r2;
}

double urho3d_Math_Fract(double r0) {
	double r1, r3;
	int r2;
	r2 = hl_math_floor(r0);
	r3 = (double)r2;
	r1 = r0 - r3;
	return r1;
}

int urho3d_Math_Floor(double r0) {
	int r1;
	r1 = hl_math_floor(r0);
	return r1;
}

int urho3d_Math_FloorToInt(double r0) {
	int r1;
	r1 = hl_math_floor(r0);
	return r1;
}

int urho3d_Math_Round(double r0) {
	int r1;
	r1 = hl_math_round(r0);
	return r1;
}

int urho3d_Math_RoundToInt(double r0) {
	int r1;
	r1 = hl_math_round(r0);
	return r1;
}

double urho3d_Math_RoundToNearestMultiple(double r0,double r1) {
	double r2, r3, r4, r5, r6;
	int r7;
	r3 = 0.;
	if( !(r0 >= r3) ) goto label$e53f207_30_4;
	r2 = r0;
	goto label$e53f207_30_5;
	label$e53f207_30_4:
	r2 = -r0;
	label$e53f207_30_5:
	r4 = 0.;
	if( r1 >= r4 ) goto label$e53f207_30_9;
	r3 = -r1;
	r1 = r3;
	label$e53f207_30_9:
	r3 = fmod(r2,r1);
	r6 = 2.;
	r5 = r1 / r6;
	if( !(r3 >= r5) ) goto label$e53f207_30_29;
	r4 = r2 / r1;
	r7 = hl_math_floor(r4);
	r4 = (double)r7;
	r4 = r4 * r1;
	r4 = r4 + r1;
	r6 = 0.;
	if( !(r6 < r0) ) goto label$e53f207_30_22;
	r5 = 1.;
	goto label$e53f207_30_27;
	label$e53f207_30_22:
	r6 = 0.;
	if( !(r0 < r6) ) goto label$e53f207_30_26;
	r5 = -1.;
	goto label$e53f207_30_27;
	label$e53f207_30_26:
	r5 = 0.;
	label$e53f207_30_27:
	r4 = r4 * r5;
	return r4;
	label$e53f207_30_29:
	r4 = r2 / r1;
	r7 = hl_math_floor(r4);
	r4 = (double)r7;
	r4 = r4 * r1;
	r6 = 0.;
	if( !(r6 < r0) ) goto label$e53f207_30_37;
	r5 = 1.;
	goto label$e53f207_30_42;
	label$e53f207_30_37:
	r6 = 0.;
	if( !(r0 < r6) ) goto label$e53f207_30_41;
	r5 = -1.;
	goto label$e53f207_30_42;
	label$e53f207_30_41:
	r5 = 0.;
	label$e53f207_30_42:
	r4 = r4 * r5;
	return r4;
}

int urho3d_Math_Ceil(double r0) {
	int r1;
	r1 = hl_math_ceil(r0);
	return r1;
}

int urho3d_Math_CeilToInt(double r0) {
	int r1;
	r1 = hl_math_ceil(r0);
	return r1;
}

bool urho3d_Math_IsPowerOfTwo(haxe___Int64_____Int64 r0) {
	bool r11;
	int r1, r2, r3, r4, r5, r6, r7, r8, r9, r10;
	r1 = 0;
	r2 = 1;
	if( r0 == NULL ) hl_null_access();
	r3 = r0->high;
	r3 = r3 - r1;
	r4 = r0->low;
	r4 = r4 - r2;
	r5 = r0->low;
	r5 = haxe__Int32_Int32_Impl__ucompare(r5,r2);
	r6 = 0;
	if( r5 >= r6 ) goto label$e53f207_33_12;
	--r3;
	label$e53f207_33_12:
	r7 = r0->high;
	r7 = r7 & r3;
	r8 = r0->low;
	r8 = r8 & r4;
	r9 = 0;
	r10 = 0;
	if( r7 != r9 ) goto label$e53f207_33_24;
	if( r8 == r10 ) goto label$e53f207_33_22;
	r11 = false;
	goto label$e53f207_33_23;
	label$e53f207_33_22:
	r11 = true;
	label$e53f207_33_23:
	return r11;
	label$e53f207_33_24:
	r11 = false;
	return r11;
}

haxe___Int64_____Int64 urho3d_Math_NextPowerOfTwo(haxe___Int64_____Int64 r0) {
	haxe___Int64_____Int64 r1, r3, r6, r10, r11, r13, r14, r16, r17, r19, r20;
	int r2, r4, r7, r8, r9, r12, r15, r18, r21;
	r1 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	if( r0 == NULL ) hl_null_access();
	r2 = r0->high;
	r4 = r0->low;
	haxe__Int64____Int64_new(r1,r2,r4);
	r0 = r1;
	r2 = r1->low;
	r4 = 0;
	if( r2 != r4 ) goto label$e53f207_34_15;
	r2 = r1->high;
	r4 = r2;
	--r2;
	r1->high = r2;
	r4 = r1->high;
	r1->high = r4;
	label$e53f207_34_15:
	r2 = r1->low;
	r4 = r2;
	--r2;
	r1->low = r2;
	r4 = r1->low;
	r1->low = r4;
	r2 = 1;
	r7 = 63;
	r4 = r2 & r7;
	r2 = r4;
	r7 = 0;
	if( r4 != r7 ) goto label$e53f207_34_33;
	r1 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r4 = r0->high;
	r7 = r0->low;
	haxe__Int64____Int64_new(r1,r4,r7);
	r3 = r1;
	goto label$e53f207_34_58;
	label$e53f207_34_33:
	r7 = 32;
	if( r4 >= r7 ) goto label$e53f207_34_48;
	r1 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r4 = r0->high;
	r4 = r4 >> r2;
	r7 = r0->high;
	r8 = 32;
	r8 = r8 - r2;
	r7 = r7 << r8;
	r8 = r0->low;
	r8 = ((unsigned)r8) >> r2;
	r7 = r7 | r8;
	haxe__Int64____Int64_new(r1,r4,r7);
	r3 = r1;
	goto label$e53f207_34_58;
	label$e53f207_34_48:
	r1 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r4 = r0->high;
	r7 = 31;
	r4 = r4 >> r7;
	r7 = r0->high;
	r9 = 32;
	r8 = r2 - r9;
	r7 = r7 >> r8;
	haxe__Int64____Int64_new(r1,r4,r7);
	r3 = r1;
	label$e53f207_34_58:
	r1 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r4 = r0->high;
	r7 = r3->high;
	r4 = r4 | r7;
	r7 = r0->low;
	r8 = r3->low;
	r7 = r7 | r8;
	haxe__Int64____Int64_new(r1,r4,r7);
	r4 = 2;
	r8 = 63;
	r7 = r4 & r8;
	r4 = r7;
	r8 = 0;
	if( r7 != r8 ) goto label$e53f207_34_78;
	r6 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r7 = r1->high;
	r8 = r1->low;
	haxe__Int64____Int64_new(r6,r7,r8);
	r10 = r6;
	goto label$e53f207_34_103;
	label$e53f207_34_78:
	r8 = 32;
	if( r7 >= r8 ) goto label$e53f207_34_93;
	r6 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r7 = r1->high;
	r7 = r7 >> r4;
	r8 = r1->high;
	r9 = 32;
	r9 = r9 - r4;
	r8 = r8 << r9;
	r9 = r1->low;
	r9 = ((unsigned)r9) >> r4;
	r8 = r8 | r9;
	haxe__Int64____Int64_new(r6,r7,r8);
	r10 = r6;
	goto label$e53f207_34_103;
	label$e53f207_34_93:
	r6 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r7 = r1->high;
	r8 = 31;
	r7 = r7 >> r8;
	r8 = r1->high;
	r12 = 32;
	r9 = r4 - r12;
	r8 = r8 >> r9;
	haxe__Int64____Int64_new(r6,r7,r8);
	r10 = r6;
	label$e53f207_34_103:
	r6 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r7 = r1->high;
	r8 = r10->high;
	r7 = r7 | r8;
	r8 = r1->low;
	r9 = r10->low;
	r8 = r8 | r9;
	haxe__Int64____Int64_new(r6,r7,r8);
	r7 = 4;
	r9 = 63;
	r8 = r7 & r9;
	r7 = r8;
	r9 = 0;
	if( r8 != r9 ) goto label$e53f207_34_123;
	r11 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r8 = r6->high;
	r9 = r6->low;
	haxe__Int64____Int64_new(r11,r8,r9);
	r13 = r11;
	goto label$e53f207_34_148;
	label$e53f207_34_123:
	r9 = 32;
	if( r8 >= r9 ) goto label$e53f207_34_138;
	r11 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r8 = r6->high;
	r8 = r8 >> r7;
	r9 = r6->high;
	r12 = 32;
	r12 = r12 - r7;
	r9 = r9 << r12;
	r12 = r6->low;
	r12 = ((unsigned)r12) >> r7;
	r9 = r9 | r12;
	haxe__Int64____Int64_new(r11,r8,r9);
	r13 = r11;
	goto label$e53f207_34_148;
	label$e53f207_34_138:
	r11 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r8 = r6->high;
	r9 = 31;
	r8 = r8 >> r9;
	r9 = r6->high;
	r15 = 32;
	r12 = r7 - r15;
	r9 = r9 >> r12;
	haxe__Int64____Int64_new(r11,r8,r9);
	r13 = r11;
	label$e53f207_34_148:
	r11 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r8 = r6->high;
	r9 = r13->high;
	r8 = r8 | r9;
	r9 = r6->low;
	r12 = r13->low;
	r9 = r9 | r12;
	haxe__Int64____Int64_new(r11,r8,r9);
	r8 = 8;
	r12 = 63;
	r9 = r8 & r12;
	r8 = r9;
	r12 = 0;
	if( r9 != r12 ) goto label$e53f207_34_168;
	r14 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r9 = r11->high;
	r12 = r11->low;
	haxe__Int64____Int64_new(r14,r9,r12);
	r16 = r14;
	goto label$e53f207_34_193;
	label$e53f207_34_168:
	r12 = 32;
	if( r9 >= r12 ) goto label$e53f207_34_183;
	r14 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r9 = r11->high;
	r9 = r9 >> r8;
	r12 = r11->high;
	r15 = 32;
	r15 = r15 - r8;
	r12 = r12 << r15;
	r15 = r11->low;
	r15 = ((unsigned)r15) >> r8;
	r12 = r12 | r15;
	haxe__Int64____Int64_new(r14,r9,r12);
	r16 = r14;
	goto label$e53f207_34_193;
	label$e53f207_34_183:
	r14 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r9 = r11->high;
	r12 = 31;
	r9 = r9 >> r12;
	r12 = r11->high;
	r18 = 32;
	r15 = r8 - r18;
	r12 = r12 >> r15;
	haxe__Int64____Int64_new(r14,r9,r12);
	r16 = r14;
	label$e53f207_34_193:
	r14 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r9 = r11->high;
	r12 = r16->high;
	r9 = r9 | r12;
	r12 = r11->low;
	r15 = r16->low;
	r12 = r12 | r15;
	haxe__Int64____Int64_new(r14,r9,r12);
	r9 = 16;
	r15 = 63;
	r12 = r9 & r15;
	r9 = r12;
	r15 = 0;
	if( r12 != r15 ) goto label$e53f207_34_213;
	r17 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r12 = r14->high;
	r15 = r14->low;
	haxe__Int64____Int64_new(r17,r12,r15);
	r19 = r17;
	goto label$e53f207_34_238;
	label$e53f207_34_213:
	r15 = 32;
	if( r12 >= r15 ) goto label$e53f207_34_228;
	r17 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r12 = r14->high;
	r12 = r12 >> r9;
	r15 = r14->high;
	r18 = 32;
	r18 = r18 - r9;
	r15 = r15 << r18;
	r18 = r14->low;
	r18 = ((unsigned)r18) >> r9;
	r15 = r15 | r18;
	haxe__Int64____Int64_new(r17,r12,r15);
	r19 = r17;
	goto label$e53f207_34_238;
	label$e53f207_34_228:
	r17 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r12 = r14->high;
	r15 = 31;
	r12 = r12 >> r15;
	r15 = r14->high;
	r21 = 32;
	r18 = r9 - r21;
	r15 = r15 >> r18;
	haxe__Int64____Int64_new(r17,r12,r15);
	r19 = r17;
	label$e53f207_34_238:
	r17 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r12 = r14->high;
	r15 = r19->high;
	r12 = r12 | r15;
	r15 = r14->low;
	r18 = r19->low;
	r15 = r15 | r18;
	haxe__Int64____Int64_new(r17,r12,r15);
	r20 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r12 = r17->high;
	r15 = r17->low;
	haxe__Int64____Int64_new(r20,r12,r15);
	r12 = r20->low;
	r15 = r12;
	++r12;
	r20->low = r12;
	r15 = r20->low;
	r20->low = r15;
	r12 = r20->low;
	r15 = 0;
	if( r12 != r15 ) goto label$e53f207_34_265;
	r12 = r20->high;
	r15 = r12;
	++r12;
	r20->high = r12;
	r15 = r20->high;
	r20->high = r15;
	label$e53f207_34_265:
	return r20;
}

haxe___Int64_____Int64 urho3d_Math_ClosestPowerOfTwo(haxe___Int64_____Int64 r0) {
	haxe___Int64_____Int64 r1, r3, r5, r7, r11, r12, r14, r15, r17, r18, r20, r21, r23, r24;
	int r4, r6, r8, r9, r10, r13, r16, r19, r22, r25, r26, r27, r28, r29, r30, r31, r32;
	r3 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	if( r0 == NULL ) hl_null_access();
	r4 = r0->high;
	r6 = r0->low;
	haxe__Int64____Int64_new(r3,r4,r6);
	r1 = r3;
	r4 = r3->low;
	r6 = 0;
	if( r4 != r6 ) goto label$e53f207_35_15;
	r4 = r3->high;
	r6 = r4;
	--r4;
	r3->high = r4;
	r6 = r3->high;
	r3->high = r6;
	label$e53f207_35_15:
	r4 = r3->low;
	r6 = r4;
	--r4;
	r3->low = r4;
	r6 = r3->low;
	r3->low = r6;
	r4 = 1;
	r8 = 63;
	r6 = r4 & r8;
	r4 = r6;
	r8 = 0;
	if( r6 != r8 ) goto label$e53f207_35_33;
	r3 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r6 = r1->high;
	r8 = r1->low;
	haxe__Int64____Int64_new(r3,r6,r8);
	r5 = r3;
	goto label$e53f207_35_58;
	label$e53f207_35_33:
	r8 = 32;
	if( r6 >= r8 ) goto label$e53f207_35_48;
	r3 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r6 = r1->high;
	r6 = r6 >> r4;
	r8 = r1->high;
	r9 = 32;
	r9 = r9 - r4;
	r8 = r8 << r9;
	r9 = r1->low;
	r9 = ((unsigned)r9) >> r4;
	r8 = r8 | r9;
	haxe__Int64____Int64_new(r3,r6,r8);
	r5 = r3;
	goto label$e53f207_35_58;
	label$e53f207_35_48:
	r3 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r6 = r1->high;
	r8 = 31;
	r6 = r6 >> r8;
	r8 = r1->high;
	r10 = 32;
	r9 = r4 - r10;
	r8 = r8 >> r9;
	haxe__Int64____Int64_new(r3,r6,r8);
	r5 = r3;
	label$e53f207_35_58:
	r3 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r6 = r1->high;
	r8 = r5->high;
	r6 = r6 | r8;
	r8 = r1->low;
	r9 = r5->low;
	r8 = r8 | r9;
	haxe__Int64____Int64_new(r3,r6,r8);
	r6 = 2;
	r9 = 63;
	r8 = r6 & r9;
	r6 = r8;
	r9 = 0;
	if( r8 != r9 ) goto label$e53f207_35_78;
	r7 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r8 = r3->high;
	r9 = r3->low;
	haxe__Int64____Int64_new(r7,r8,r9);
	r11 = r7;
	goto label$e53f207_35_103;
	label$e53f207_35_78:
	r9 = 32;
	if( r8 >= r9 ) goto label$e53f207_35_93;
	r7 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r8 = r3->high;
	r8 = r8 >> r6;
	r9 = r3->high;
	r10 = 32;
	r10 = r10 - r6;
	r9 = r9 << r10;
	r10 = r3->low;
	r10 = ((unsigned)r10) >> r6;
	r9 = r9 | r10;
	haxe__Int64____Int64_new(r7,r8,r9);
	r11 = r7;
	goto label$e53f207_35_103;
	label$e53f207_35_93:
	r7 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r8 = r3->high;
	r9 = 31;
	r8 = r8 >> r9;
	r9 = r3->high;
	r13 = 32;
	r10 = r6 - r13;
	r9 = r9 >> r10;
	haxe__Int64____Int64_new(r7,r8,r9);
	r11 = r7;
	label$e53f207_35_103:
	r7 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r8 = r3->high;
	r9 = r11->high;
	r8 = r8 | r9;
	r9 = r3->low;
	r10 = r11->low;
	r9 = r9 | r10;
	haxe__Int64____Int64_new(r7,r8,r9);
	r8 = 4;
	r10 = 63;
	r9 = r8 & r10;
	r8 = r9;
	r10 = 0;
	if( r9 != r10 ) goto label$e53f207_35_123;
	r12 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r9 = r7->high;
	r10 = r7->low;
	haxe__Int64____Int64_new(r12,r9,r10);
	r14 = r12;
	goto label$e53f207_35_148;
	label$e53f207_35_123:
	r10 = 32;
	if( r9 >= r10 ) goto label$e53f207_35_138;
	r12 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r9 = r7->high;
	r9 = r9 >> r8;
	r10 = r7->high;
	r13 = 32;
	r13 = r13 - r8;
	r10 = r10 << r13;
	r13 = r7->low;
	r13 = ((unsigned)r13) >> r8;
	r10 = r10 | r13;
	haxe__Int64____Int64_new(r12,r9,r10);
	r14 = r12;
	goto label$e53f207_35_148;
	label$e53f207_35_138:
	r12 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r9 = r7->high;
	r10 = 31;
	r9 = r9 >> r10;
	r10 = r7->high;
	r16 = 32;
	r13 = r8 - r16;
	r10 = r10 >> r13;
	haxe__Int64____Int64_new(r12,r9,r10);
	r14 = r12;
	label$e53f207_35_148:
	r12 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r9 = r7->high;
	r10 = r14->high;
	r9 = r9 | r10;
	r10 = r7->low;
	r13 = r14->low;
	r10 = r10 | r13;
	haxe__Int64____Int64_new(r12,r9,r10);
	r9 = 8;
	r13 = 63;
	r10 = r9 & r13;
	r9 = r10;
	r13 = 0;
	if( r10 != r13 ) goto label$e53f207_35_168;
	r15 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r10 = r12->high;
	r13 = r12->low;
	haxe__Int64____Int64_new(r15,r10,r13);
	r17 = r15;
	goto label$e53f207_35_193;
	label$e53f207_35_168:
	r13 = 32;
	if( r10 >= r13 ) goto label$e53f207_35_183;
	r15 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r10 = r12->high;
	r10 = r10 >> r9;
	r13 = r12->high;
	r16 = 32;
	r16 = r16 - r9;
	r13 = r13 << r16;
	r16 = r12->low;
	r16 = ((unsigned)r16) >> r9;
	r13 = r13 | r16;
	haxe__Int64____Int64_new(r15,r10,r13);
	r17 = r15;
	goto label$e53f207_35_193;
	label$e53f207_35_183:
	r15 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r10 = r12->high;
	r13 = 31;
	r10 = r10 >> r13;
	r13 = r12->high;
	r19 = 32;
	r16 = r9 - r19;
	r13 = r13 >> r16;
	haxe__Int64____Int64_new(r15,r10,r13);
	r17 = r15;
	label$e53f207_35_193:
	r15 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r10 = r12->high;
	r13 = r17->high;
	r10 = r10 | r13;
	r13 = r12->low;
	r16 = r17->low;
	r13 = r13 | r16;
	haxe__Int64____Int64_new(r15,r10,r13);
	r10 = 16;
	r16 = 63;
	r13 = r10 & r16;
	r10 = r13;
	r16 = 0;
	if( r13 != r16 ) goto label$e53f207_35_213;
	r18 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r13 = r15->high;
	r16 = r15->low;
	haxe__Int64____Int64_new(r18,r13,r16);
	r20 = r18;
	goto label$e53f207_35_238;
	label$e53f207_35_213:
	r16 = 32;
	if( r13 >= r16 ) goto label$e53f207_35_228;
	r18 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r13 = r15->high;
	r13 = r13 >> r10;
	r16 = r15->high;
	r19 = 32;
	r19 = r19 - r10;
	r16 = r16 << r19;
	r19 = r15->low;
	r19 = ((unsigned)r19) >> r10;
	r16 = r16 | r19;
	haxe__Int64____Int64_new(r18,r13,r16);
	r20 = r18;
	goto label$e53f207_35_238;
	label$e53f207_35_228:
	r18 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r13 = r15->high;
	r16 = 31;
	r13 = r13 >> r16;
	r16 = r15->high;
	r22 = 32;
	r19 = r10 - r22;
	r16 = r16 >> r19;
	haxe__Int64____Int64_new(r18,r13,r16);
	r20 = r18;
	label$e53f207_35_238:
	r18 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r13 = r15->high;
	r16 = r20->high;
	r13 = r13 | r16;
	r16 = r15->low;
	r19 = r20->low;
	r16 = r16 | r19;
	haxe__Int64____Int64_new(r18,r13,r16);
	r21 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r13 = r18->high;
	r16 = r18->low;
	haxe__Int64____Int64_new(r21,r13,r16);
	r13 = r21->low;
	r16 = r13;
	++r13;
	r21->low = r13;
	r16 = r21->low;
	r21->low = r16;
	r13 = r21->low;
	r16 = 0;
	if( r13 != r16 ) goto label$e53f207_35_265;
	r13 = r21->high;
	r16 = r13;
	++r13;
	r21->high = r13;
	r16 = r21->high;
	r21->high = r16;
	label$e53f207_35_265:
	r13 = 1;
	r19 = 63;
	r16 = r13 & r19;
	r13 = r16;
	r19 = 0;
	if( r16 != r19 ) goto label$e53f207_35_277;
	r23 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r16 = r21->high;
	r19 = r21->low;
	haxe__Int64____Int64_new(r23,r16,r19);
	r24 = r23;
	goto label$e53f207_35_302;
	label$e53f207_35_277:
	r19 = 32;
	if( r16 >= r19 ) goto label$e53f207_35_292;
	r23 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r16 = r21->high;
	r16 = r16 >> r13;
	r19 = r21->high;
	r22 = 32;
	r22 = r22 - r13;
	r19 = r19 << r22;
	r22 = r21->low;
	r22 = ((unsigned)r22) >> r13;
	r19 = r19 | r22;
	haxe__Int64____Int64_new(r23,r16,r19);
	r24 = r23;
	goto label$e53f207_35_302;
	label$e53f207_35_292:
	r23 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r16 = r21->high;
	r19 = 31;
	r16 = r16 >> r19;
	r19 = r21->high;
	r25 = 32;
	r22 = r13 - r25;
	r19 = r19 >> r22;
	haxe__Int64____Int64_new(r23,r16,r19);
	r24 = r23;
	label$e53f207_35_302:
	r16 = r0->high;
	r19 = r24->high;
	r16 = r16 - r19;
	r19 = r0->low;
	r22 = r24->low;
	r19 = r19 - r22;
	r22 = r0->low;
	r25 = r24->low;
	r22 = haxe__Int32_Int32_Impl__ucompare(r22,r25);
	r25 = 0;
	if( r22 >= r25 ) goto label$e53f207_35_314;
	--r16;
	label$e53f207_35_314:
	r26 = r21->high;
	r27 = r0->high;
	r26 = r26 - r27;
	r27 = r21->low;
	r28 = r0->low;
	r27 = r27 - r28;
	r28 = r21->low;
	r29 = r0->low;
	r28 = haxe__Int32_Int32_Impl__ucompare(r28,r29);
	r29 = 0;
	if( r28 >= r29 ) goto label$e53f207_35_326;
	--r26;
	label$e53f207_35_326:
	r30 = r16 - r26;
	r32 = 0;
	if( r30 != r32 ) goto label$e53f207_35_331;
	r31 = haxe__Int32_Int32_Impl__ucompare(r19,r27);
	r30 = r31;
	label$e53f207_35_331:
	r32 = 0;
	if( r16 >= r32 ) goto label$e53f207_35_339;
	r32 = 0;
	if( r26 >= r32 ) goto label$e53f207_35_337;
	r31 = r30;
	goto label$e53f207_35_338;
	label$e53f207_35_337:
	r31 = -1;
	label$e53f207_35_338:
	goto label$e53f207_35_344;
	label$e53f207_35_339:
	r32 = 0;
	if( r26 < r32 ) goto label$e53f207_35_343;
	r31 = r30;
	goto label$e53f207_35_344;
	label$e53f207_35_343:
	r31 = 1;
	label$e53f207_35_344:
	r32 = 0;
	if( r32 >= r31 ) goto label$e53f207_35_347;
	return r21;
	label$e53f207_35_347:
	return r24;
}

haxe___Int64_____Int64 urho3d_Math_LogBaseTwo(haxe___Int64_____Int64 r0) {
	bool r6;
	haxe___Int64_____Int64 r1, r5, r8, r9;
	int r2, r3, r7, r10, r11;
	r1 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r2 = 0;
	r3 = 0;
	haxe__Int64____Int64_new(r1,r2,r3);
	r5 = r1;
	label$e53f207_36_5:
	r6 = true;
	if( !r6 ) goto label$e53f207_36_77;
	r2 = 1;
	r7 = 63;
	r3 = r2 & r7;
	r2 = r3;
	r7 = 0;
	if( r3 != r7 ) goto label$e53f207_36_21;
	r8 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	if( r0 == NULL ) hl_null_access();
	r3 = r0->high;
	r7 = r0->low;
	haxe__Int64____Int64_new(r8,r3,r7);
	r0 = r8;
	goto label$e53f207_36_48;
	label$e53f207_36_21:
	r7 = 32;
	if( r3 >= r7 ) goto label$e53f207_36_37;
	r8 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	if( r0 == NULL ) hl_null_access();
	r3 = r0->high;
	r3 = r3 >> r2;
	r7 = r0->high;
	r10 = 32;
	r10 = r10 - r2;
	r7 = r7 << r10;
	r10 = r0->low;
	r10 = ((unsigned)r10) >> r2;
	r7 = r7 | r10;
	haxe__Int64____Int64_new(r8,r3,r7);
	r0 = r8;
	goto label$e53f207_36_48;
	label$e53f207_36_37:
	r8 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	if( r0 == NULL ) hl_null_access();
	r3 = r0->high;
	r7 = 31;
	r3 = r3 >> r7;
	r7 = r0->high;
	r11 = 32;
	r10 = r2 - r11;
	r7 = r7 >> r10;
	haxe__Int64____Int64_new(r8,r3,r7);
	r0 = r8;
	label$e53f207_36_48:
	r3 = 0;
	r7 = 0;
	r10 = r8->high;
	if( r10 != r3 ) goto label$e53f207_36_55;
	r10 = r8->low;
	if( r10 != r7 ) goto label$e53f207_36_55;
	goto label$e53f207_36_77;
	label$e53f207_36_55:
	r9 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	if( r5 == NULL ) hl_null_access();
	r10 = r5->high;
	r11 = r5->low;
	haxe__Int64____Int64_new(r9,r10,r11);
	r5 = r9;
	r10 = r9->low;
	r11 = r10;
	++r10;
	r9->low = r10;
	r11 = r9->low;
	r9->low = r11;
	r10 = r9->low;
	r11 = 0;
	if( r10 != r11 ) goto label$e53f207_36_76;
	r10 = r9->high;
	r11 = r10;
	++r10;
	r9->high = r10;
	r11 = r9->high;
	r9->high = r11;
	label$e53f207_36_76:
	goto label$e53f207_36_5;
	label$e53f207_36_77:
	return r5;
}

int urho3d_Math_CountSetBits(haxe___Int64_____Int64 r0) {
	bool r3;
	haxe___Int64_____Int64 r7;
	int r1, r4, r5, r6, r8, r9, r10, r11, r12, r13, r14;
	r1 = 0;
	label$e53f207_37_1:
	r3 = true;
	if( !r3 ) goto label$e53f207_37_32;
	r4 = 0;
	r5 = 0;
	if( r0 == NULL ) hl_null_access();
	r6 = r0->high;
	if( r6 != r4 ) goto label$e53f207_37_12;
	r6 = r0->low;
	if( r6 != r5 ) goto label$e53f207_37_12;
	goto label$e53f207_37_32;
	label$e53f207_37_12:
	r6 = 0;
	r8 = 1;
	r9 = r0->high;
	r9 = r9 - r6;
	r10 = r0->low;
	r10 = r10 - r8;
	r11 = r0->low;
	r11 = haxe__Int32_Int32_Impl__ucompare(r11,r8);
	r12 = 0;
	if( r11 >= r12 ) goto label$e53f207_37_23;
	--r9;
	label$e53f207_37_23:
	r7 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r13 = r0->high;
	r13 = r13 & r9;
	r14 = r0->low;
	r14 = r14 & r10;
	haxe__Int64____Int64_new(r7,r13,r14);
	r0 = r7;
	++r1;
	goto label$e53f207_37_1;
	label$e53f207_37_32:
	return r1;
}

haxe___Int64_____Int64 urho3d_Math_SDBMHash(haxe___Int64_____Int64 r0,int r1) {
	haxe___Int64_____Int64 r8;
	int r2, r3, r5, r6, r7, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19;
	r3 = 31;
	r2 = r1 >> r3;
	r5 = 6;
	r7 = 63;
	r6 = r5 & r7;
	r5 = r6;
	r7 = 0;
	if( r6 != r7 ) goto label$e53f207_38_14;
	r8 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	if( r0 == NULL ) hl_null_access();
	r6 = r0->high;
	r7 = r0->low;
	haxe__Int64____Int64_new(r8,r6,r7);
	goto label$e53f207_38_37;
	label$e53f207_38_14:
	r7 = 32;
	if( r6 >= r7 ) goto label$e53f207_38_29;
	r8 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	if( r0 == NULL ) hl_null_access();
	r6 = r0->high;
	r6 = r6 << r5;
	r7 = r0->low;
	r9 = 32;
	r9 = r9 - r5;
	r7 = ((unsigned)r7) >> r9;
	r6 = r6 | r7;
	r7 = r0->low;
	r7 = r7 << r5;
	haxe__Int64____Int64_new(r8,r6,r7);
	goto label$e53f207_38_37;
	label$e53f207_38_29:
	r8 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	if( r0 == NULL ) hl_null_access();
	r6 = r0->low;
	r9 = 32;
	r7 = r5 - r9;
	r6 = r6 << r7;
	r7 = 0;
	haxe__Int64____Int64_new(r8,r6,r7);
	label$e53f207_38_37:
	r7 = r8->high;
	r6 = r2 + r7;
	r9 = r8->low;
	r7 = r1 + r9;
	r9 = haxe__Int32_Int32_Impl__ucompare(r7,r1);
	r10 = 0;
	if( r9 >= r10 ) goto label$e53f207_38_45;
	++r6;
	label$e53f207_38_45:
	r11 = 16;
	r13 = 63;
	r12 = r11 & r13;
	r11 = r12;
	r13 = 0;
	if( r12 != r13 ) goto label$e53f207_38_56;
	r8 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r12 = r0->high;
	r13 = r0->low;
	haxe__Int64____Int64_new(r8,r12,r13);
	goto label$e53f207_38_77;
	label$e53f207_38_56:
	r13 = 32;
	if( r12 >= r13 ) goto label$e53f207_38_70;
	r8 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r12 = r0->high;
	r12 = r12 << r11;
	r13 = r0->low;
	r14 = 32;
	r14 = r14 - r11;
	r13 = ((unsigned)r13) >> r14;
	r12 = r12 | r13;
	r13 = r0->low;
	r13 = r13 << r11;
	haxe__Int64____Int64_new(r8,r12,r13);
	goto label$e53f207_38_77;
	label$e53f207_38_70:
	r8 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	r12 = r0->low;
	r14 = 32;
	r13 = r11 - r14;
	r12 = r12 << r13;
	r13 = 0;
	haxe__Int64____Int64_new(r8,r12,r13);
	label$e53f207_38_77:
	r13 = r8->high;
	r12 = r6 + r13;
	r14 = r8->low;
	r13 = r7 + r14;
	r14 = haxe__Int32_Int32_Impl__ucompare(r13,r7);
	r15 = 0;
	if( r14 >= r15 ) goto label$e53f207_38_85;
	++r12;
	label$e53f207_38_85:
	r17 = r0->high;
	r16 = r12 - r17;
	r18 = r0->low;
	r17 = r13 - r18;
	r19 = r0->low;
	r18 = haxe__Int32_Int32_Impl__ucompare(r13,r19);
	r19 = 0;
	if( r18 >= r19 ) goto label$e53f207_38_94;
	--r16;
	label$e53f207_38_94:
	r8 = (haxe___Int64_____Int64)hl_alloc_obj(&t$haxe__Int64____Int64);
	haxe__Int64____Int64_new(r8,r16,r17);
	return r8;
}

double urho3d_Math_Random(vdynamic* r0,vdynamic* r1) {
	double r2, r3, r4;
	if( r0 ) goto label$e53f207_39_3;
	r2 = Math_random();
	return r2;
	label$e53f207_39_3:
	if( !r0 ) goto label$e53f207_39_9;
	if( r1 ) goto label$e53f207_39_9;
	r2 = Math_random();
	r3 = r0 ? r0->v.d : 0;
	r2 = r2 * r3;
	return r2;
	label$e53f207_39_9:
	r2 = Math_random();
	r3 = r1 ? r1->v.d : 0;
	r4 = r0 ? r0->v.d : 0;
	r3 = r3 - r4;
	r2 = r2 * r3;
	r3 = r0 ? r0->v.d : 0;
	r2 = r2 + r3;
	return r2;
}

double urho3d_Math_RandStandardNormal() {
	double r0, r1, r2;
	r0 = 0.;
	r2 = Math_random();
	r1 = r0 + r2;
	r2 = Math_random();
	r1 = r1 + r2;
	r2 = Math_random();
	r1 = r1 + r2;
	r2 = Math_random();
	r1 = r1 + r2;
	r2 = Math_random();
	r1 = r1 + r2;
	r2 = Math_random();
	r1 = r1 + r2;
	r2 = Math_random();
	r1 = r1 + r2;
	r2 = Math_random();
	r1 = r1 + r2;
	r2 = Math_random();
	r1 = r1 + r2;
	r2 = Math_random();
	r1 = r1 + r2;
	r2 = Math_random();
	r1 = r1 + r2;
	r2 = Math_random();
	r1 = r1 + r2;
	r2 = 6.;
	r1 = r1 - r2;
	return r1;
}

double urho3d_Math_RandomNormal(double r0,double r1) {
	double r2, r3, r4;
	r2 = 0.;
	r4 = Math_random();
	r3 = r2 + r4;
	r4 = Math_random();
	r3 = r3 + r4;
	r4 = Math_random();
	r3 = r3 + r4;
	r4 = Math_random();
	r3 = r3 + r4;
	r4 = Math_random();
	r3 = r3 + r4;
	r4 = Math_random();
	r3 = r3 + r4;
	r4 = Math_random();
	r3 = r3 + r4;
	r4 = Math_random();
	r3 = r3 + r4;
	r4 = Math_random();
	r3 = r3 + r4;
	r4 = Math_random();
	r3 = r3 + r4;
	r4 = Math_random();
	r3 = r3 + r4;
	r4 = Math_random();
	r3 = r3 + r4;
	r4 = 6.;
	r3 = r3 - r4;
	r4 = hl_math_sqrt(r1);
	r3 = r3 * r4;
	r3 = r3 + r0;
	return r3;
}

double urho3d_Math_ExponentialOut(double r0) {
	double r1, r2, r3;
	r2 = 1.;
	if( r0 != r2 ) goto label$e53f207_42_4;
	r1 = 1.;
	return r1;
	label$e53f207_42_4:
	r1 = 2.;
	r2 = -10.;
	r2 = r2 * r0;
	r3 = 1.;
	r2 = r2 / r3;
	r1 = hl_math_pow(r1,r2);
	r1 = -r1;
	r2 = 1.;
	r1 = r1 + r2;
	return r1;
}

double urho3d_Math_BackInOut(double r0) {
	double r1, r2, r3, r4;
	r1 = 2.59490949999999998;
	r3 = 2.;
	r2 = r0 * r3;
	r0 = r2;
	r3 = 1.;
	if( !(r2 < r3) ) goto label$e53f207_43_15;
	r2 = r2 * r2;
	r4 = 1.;
	r3 = r1 + r4;
	r3 = r3 * r0;
	r3 = r3 - r1;
	r2 = r2 * r3;
	r3 = 2.;
	r2 = r2 / r3;
	return r2;
	label$e53f207_43_15:
	r3 = 2.;
	r2 = r2 - r3;
	r0 = r2;
	r2 = r2 * r2;
	r4 = 1.;
	r3 = r1 + r4;
	r3 = r3 * r0;
	r3 = r3 + r1;
	r2 = r2 * r3;
	r3 = 2.;
	r2 = r2 / r3;
	r3 = 1.;
	r2 = r2 + r3;
	return r2;
}

double urho3d_Math_CubicBezier(double r0,double r1,double r2,double r3,double r4) {
	double r5, r6, r7, r8;
	r5 = 1.;
	r5 = r5 - r4;
	r6 = r5 * r5;
	r6 = r6 * r5;
	r6 = r6 * r0;
	r7 = 3.;
	r7 = r7 * r4;
	r8 = r5 * r5;
	r7 = r7 * r8;
	r7 = r7 * r1;
	r6 = r6 + r7;
	r7 = 3.;
	r8 = r4 * r4;
	r7 = r7 * r8;
	r7 = r7 * r5;
	r7 = r7 * r2;
	r6 = r6 + r7;
	r7 = r4 * r4;
	r7 = r7 * r4;
	r7 = r7 * r3;
	r6 = r6 + r7;
	return r6;
}

double urho3d_Math_QuadBezier(double r0,double r1,double r2,double r3) {
	double r4, r5, r6;
	r4 = 1.;
	r4 = r4 - r3;
	r5 = r4 * r4;
	r5 = r5 * r0;
	r6 = 2.;
	r6 = r6 * r4;
	r6 = r6 * r3;
	r6 = r6 * r1;
	r5 = r5 + r6;
	r6 = r3 * r3;
	r6 = r6 * r2;
	r5 = r5 + r6;
	return r5;
}

