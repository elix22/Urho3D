﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <urho3d/_Vector2/Vector2_Impl_.h>
#include <hl/natives.h>
extern String s$Vector2_;
String String___alloc__(vbyte*,int);
String String___add__(String,String);
extern String s$853ae90;
extern String s$9371d7a;
extern hl_type t$vrt_0241c6a;
extern urho3d___Vector2__$Vector2_Impl_ g$_urho3d__Vector2_Vector2_Impl_;
extern hl_type t$_f32;

hl_urho3d_math_vector2* urho3d__Vector2_Vector2_Impl___new(double* r0,double* r1) {
	hl_urho3d_math_vector2 *r4;
	float r5, r6;
	double r2, r3;
	if( r0 ) goto label$f391fb7_1_3;
	r2 = 0.;
	goto label$f391fb7_1_4;
	label$f391fb7_1_3:
	r2 = *r0;
	label$f391fb7_1_4:
	if( r1 ) goto label$f391fb7_1_7;
	r3 = 0.;
	goto label$f391fb7_1_8;
	label$f391fb7_1_7:
	r3 = *r1;
	label$f391fb7_1_8:
	r5 = (float)r2;
	r6 = (float)r3;
	r4 = Urho3D__math_vector2_create(r5,r6);
	return r4;
}

String urho3d__Vector2_Vector2_Impl__toString(hl_urho3d_math_vector2* r0) {
	String r1, r7;
	float r2;
	double r3;
	int *r5;
	vbyte *r6;
	int r4;
	r1 = (String)s$Vector2_;
	r2 = Urho3D__math_vector2_get_x(r0);
	r3 = (double)r2;
	r5 = &r4;
	r6 = hl_ftos(r3,r5);
	r7 = String___alloc__(r6,r4);
	r1 = String___add__(r1,r7);
	r7 = (String)s$853ae90;
	r1 = String___add__(r1,r7);
	r2 = Urho3D__math_vector2_get_y(r0);
	r3 = (double)r2;
	r5 = &r4;
	r6 = hl_ftos(r3,r5);
	r7 = String___alloc__(r6,r4);
	r1 = String___add__(r1,r7);
	r7 = (String)s$9371d7a;
	r1 = String___add__(r1,r7);
	return r1;
}

hl_urho3d_math_vector2* urho3d__Vector2_Vector2_Impl__fromStructVector2(vvirtual* r0) {
	hl_urho3d_math_vector2 *r1;
	float r3, r4;
	double r2;
	if( r0 == NULL ) hl_null_access();
	r2 = hl_vfields(r0)[0] ? (*(double*)(hl_vfields(r0)[0])) : (double)hl_dyn_getd(r0->value,120/*x*/);
	r3 = (float)r2;
	r2 = hl_vfields(r0)[1] ? (*(double*)(hl_vfields(r0)[1])) : (double)hl_dyn_getd(r0->value,121/*y*/);
	r4 = (float)r2;
	r1 = Urho3D__math_vector2_create(r3,r4);
	return r1;
}

vvirtual* urho3d__Vector2_Vector2_Impl__toStructVector2(hl_urho3d_math_vector2* r0) {
	vvirtual *r1;
	float r2;
	double r3;
	r1 = hl_alloc_virtual(&t$vrt_0241c6a);
	r2 = Urho3D__math_vector2_get_x(r0);
	r3 = (double)r2;
	if( hl_vfields(r1)[0] ) *(double*)(hl_vfields(r1)[0]) = (double)r3; else hl_dyn_setd(r1->value,120/*x*/,r3);
	r2 = Urho3D__math_vector2_get_y(r0);
	r3 = (double)r2;
	if( hl_vfields(r1)[1] ) *(double*)(hl_vfields(r1)[1]) = (double)r3; else hl_dyn_setd(r1->value,121/*y*/,r3);
	return r1;
}

bool urho3d__Vector2_Vector2_Impl__isEqual(hl_urho3d_math_vector2* r0,hl_urho3d_math_vector2* r1) {
	bool r5;
	float r2;
	double r3, r4;
	r2 = Urho3D__math_vector2_get_x(r0);
	r3 = (double)r2;
	r2 = Urho3D__math_vector2_get_x(r1);
	r4 = (double)r2;
	if( r3 != r4 ) goto label$f391fb7_5_14;
	r2 = Urho3D__math_vector2_get_y(r0);
	r3 = (double)r2;
	r2 = Urho3D__math_vector2_get_y(r1);
	r4 = (double)r2;
	if( r3 == r4 ) goto label$f391fb7_5_12;
	r5 = false;
	goto label$f391fb7_5_13;
	label$f391fb7_5_12:
	r5 = true;
	label$f391fb7_5_13:
	return r5;
	label$f391fb7_5_14:
	r5 = false;
	return r5;
}

bool urho3d__Vector2_Vector2_Impl__isNotEqual(hl_urho3d_math_vector2* r0,hl_urho3d_math_vector2* r1) {
	bool r2;
	float r3;
	double r4, r5;
	r3 = Urho3D__math_vector2_get_x(r0);
	r4 = (double)r3;
	r3 = Urho3D__math_vector2_get_x(r1);
	r5 = (double)r3;
	if( r4 != r5 ) goto label$f391fb7_6_12;
	r3 = Urho3D__math_vector2_get_y(r0);
	r4 = (double)r3;
	r3 = Urho3D__math_vector2_get_y(r1);
	r5 = (double)r3;
	if( r4 != r5 ) goto label$f391fb7_6_12;
	r2 = true;
	goto label$f391fb7_6_13;
	label$f391fb7_6_12:
	r2 = false;
	label$f391fb7_6_13:
	r2 = !r2;
	return r2;
}

hl_urho3d_math_vector2* urho3d__Vector2_Vector2_Impl__add(hl_urho3d_math_vector2* r0,hl_urho3d_math_vector2* r1) {
	hl_urho3d_math_vector2 *r4;
	float r3, r6;
	double r2, r5;
	r3 = Urho3D__math_vector2_get_x(r0);
	r2 = (double)r3;
	r3 = Urho3D__math_vector2_get_x(r1);
	r5 = (double)r3;
	r2 = r2 + r5;
	r3 = (float)r2;
	r6 = Urho3D__math_vector2_get_y(r0);
	r2 = (double)r6;
	r6 = Urho3D__math_vector2_get_y(r1);
	r5 = (double)r6;
	r2 = r2 + r5;
	r6 = (float)r2;
	r4 = Urho3D__math_vector2_create(r3,r6);
	return r4;
}

hl_urho3d_math_vector2* urho3d__Vector2_Vector2_Impl__addTo(hl_urho3d_math_vector2* r0,hl_urho3d_math_vector2* r1) {
	float r2;
	double r3, r4;
	r2 = Urho3D__math_vector2_get_x(r0);
	r3 = (double)r2;
	r2 = Urho3D__math_vector2_get_x(r1);
	r4 = (double)r2;
	r3 = r3 + r4;
	r2 = (float)r3;
	r2 = Urho3D__math_vector2_set_x(r0,r2);
	r2 = Urho3D__math_vector2_get_y(r0);
	r3 = (double)r2;
	r2 = Urho3D__math_vector2_get_y(r1);
	r4 = (double)r2;
	r3 = r3 + r4;
	r2 = (float)r3;
	r2 = Urho3D__math_vector2_set_y(r0,r2);
	return r0;
}

hl_urho3d_math_vector2* urho3d__Vector2_Vector2_Impl__sub(hl_urho3d_math_vector2* r0,hl_urho3d_math_vector2* r1) {
	hl_urho3d_math_vector2 *r4;
	float r3, r6;
	double r2, r5;
	r3 = Urho3D__math_vector2_get_x(r0);
	r2 = (double)r3;
	r3 = Urho3D__math_vector2_get_x(r1);
	r5 = (double)r3;
	r2 = r2 - r5;
	r3 = (float)r2;
	r6 = Urho3D__math_vector2_get_y(r0);
	r2 = (double)r6;
	r6 = Urho3D__math_vector2_get_y(r1);
	r5 = (double)r6;
	r2 = r2 - r5;
	r6 = (float)r2;
	r4 = Urho3D__math_vector2_create(r3,r6);
	return r4;
}

hl_urho3d_math_vector2* urho3d__Vector2_Vector2_Impl__subFrom(hl_urho3d_math_vector2* r0,hl_urho3d_math_vector2* r1) {
	float r2;
	double r3, r4;
	r2 = Urho3D__math_vector2_get_x(r0);
	r3 = (double)r2;
	r2 = Urho3D__math_vector2_get_x(r1);
	r4 = (double)r2;
	r3 = r3 - r4;
	r2 = (float)r3;
	r2 = Urho3D__math_vector2_set_x(r0,r2);
	r2 = Urho3D__math_vector2_get_y(r0);
	r3 = (double)r2;
	r2 = Urho3D__math_vector2_get_y(r1);
	r4 = (double)r2;
	r3 = r3 - r4;
	r2 = (float)r3;
	r2 = Urho3D__math_vector2_set_y(r0,r2);
	return r0;
}

hl_urho3d_math_vector2* urho3d__Vector2_Vector2_Impl__mul(hl_urho3d_math_vector2* r0,float r1) {
	hl_urho3d_math_vector2 *r4;
	float r3, r6;
	double r2, r5;
	r3 = Urho3D__math_vector2_get_x(r0);
	r2 = (double)r3;
	r5 = (double)r1;
	r2 = r2 * r5;
	r3 = (float)r2;
	r6 = Urho3D__math_vector2_get_y(r0);
	r2 = (double)r6;
	r5 = (double)r1;
	r2 = r2 * r5;
	r6 = (float)r2;
	r4 = Urho3D__math_vector2_create(r3,r6);
	return r4;
}

hl_urho3d_math_vector2* urho3d__Vector2_Vector2_Impl__mulWith(hl_urho3d_math_vector2* r0,float r1) {
	float r2;
	double r3, r4;
	r2 = Urho3D__math_vector2_get_x(r0);
	r3 = (double)r2;
	r4 = (double)r1;
	r3 = r3 * r4;
	r2 = (float)r3;
	r2 = Urho3D__math_vector2_set_x(r0,r2);
	r2 = Urho3D__math_vector2_get_y(r0);
	r3 = (double)r2;
	r4 = (double)r1;
	r3 = r3 * r4;
	r2 = (float)r3;
	r2 = Urho3D__math_vector2_set_y(r0,r2);
	return r0;
}

hl_urho3d_math_vector2* urho3d__Vector2_Vector2_Impl__mulVector2(hl_urho3d_math_vector2* r0,hl_urho3d_math_vector2* r1) {
	hl_urho3d_math_vector2 *r4;
	float r3, r6;
	double r2, r5;
	r3 = Urho3D__math_vector2_get_x(r0);
	r2 = (double)r3;
	r3 = Urho3D__math_vector2_get_x(r1);
	r5 = (double)r3;
	r2 = r2 * r5;
	r3 = (float)r2;
	r6 = Urho3D__math_vector2_get_y(r0);
	r2 = (double)r6;
	r6 = Urho3D__math_vector2_get_y(r1);
	r5 = (double)r6;
	r2 = r2 * r5;
	r6 = (float)r2;
	r4 = Urho3D__math_vector2_create(r3,r6);
	return r4;
}

hl_urho3d_math_vector2* urho3d__Vector2_Vector2_Impl__mulWithVector2(hl_urho3d_math_vector2* r0,hl_urho3d_math_vector2* r1) {
	float r2;
	double r3, r4;
	r2 = Urho3D__math_vector2_get_x(r0);
	r3 = (double)r2;
	r2 = Urho3D__math_vector2_get_x(r1);
	r4 = (double)r2;
	r3 = r3 * r4;
	r2 = (float)r3;
	r2 = Urho3D__math_vector2_set_x(r0,r2);
	r2 = Urho3D__math_vector2_get_y(r0);
	r3 = (double)r2;
	r2 = Urho3D__math_vector2_get_y(r1);
	r4 = (double)r2;
	r3 = r3 * r4;
	r2 = (float)r3;
	r2 = Urho3D__math_vector2_set_y(r0,r2);
	return r0;
}

hl_urho3d_math_vector2* urho3d__Vector2_Vector2_Impl__div(hl_urho3d_math_vector2* r0,float r1) {
	hl_urho3d_math_vector2 *r4;
	float r3, r6;
	double r2, r5;
	r3 = Urho3D__math_vector2_get_x(r0);
	r2 = (double)r3;
	r5 = (double)r1;
	r2 = r2 / r5;
	r3 = (float)r2;
	r6 = Urho3D__math_vector2_get_y(r0);
	r2 = (double)r6;
	r5 = (double)r1;
	r2 = r2 / r5;
	r6 = (float)r2;
	r4 = Urho3D__math_vector2_create(r3,r6);
	return r4;
}

hl_urho3d_math_vector2* urho3d__Vector2_Vector2_Impl__divWith(hl_urho3d_math_vector2* r0,float r1) {
	float r2;
	double r3, r4;
	r2 = Urho3D__math_vector2_get_x(r0);
	r3 = (double)r2;
	r4 = (double)r1;
	r3 = r3 / r4;
	r2 = (float)r3;
	r2 = Urho3D__math_vector2_set_x(r0,r2);
	r2 = Urho3D__math_vector2_get_y(r0);
	r3 = (double)r2;
	r4 = (double)r1;
	r3 = r3 / r4;
	r2 = (float)r3;
	r2 = Urho3D__math_vector2_set_y(r0,r2);
	return r0;
}

hl_urho3d_math_vector2* urho3d__Vector2_Vector2_Impl__divVector2(hl_urho3d_math_vector2* r0,hl_urho3d_math_vector2* r1) {
	hl_urho3d_math_vector2 *r4;
	float r3, r6;
	double r2, r5;
	r3 = Urho3D__math_vector2_get_x(r0);
	r2 = (double)r3;
	r3 = Urho3D__math_vector2_get_x(r1);
	r5 = (double)r3;
	r2 = r2 / r5;
	r3 = (float)r2;
	r6 = Urho3D__math_vector2_get_y(r0);
	r2 = (double)r6;
	r6 = Urho3D__math_vector2_get_y(r1);
	r5 = (double)r6;
	r2 = r2 / r5;
	r6 = (float)r2;
	r4 = Urho3D__math_vector2_create(r3,r6);
	return r4;
}

hl_urho3d_math_vector2* urho3d__Vector2_Vector2_Impl__divWithVector2(hl_urho3d_math_vector2* r0,hl_urho3d_math_vector2* r1) {
	float r2;
	double r3, r4;
	r2 = Urho3D__math_vector2_get_x(r0);
	r3 = (double)r2;
	r2 = Urho3D__math_vector2_get_x(r1);
	r4 = (double)r2;
	r3 = r3 / r4;
	r2 = (float)r3;
	r2 = Urho3D__math_vector2_set_x(r0,r2);
	r2 = Urho3D__math_vector2_get_y(r0);
	r3 = (double)r2;
	r2 = Urho3D__math_vector2_get_y(r1);
	r4 = (double)r2;
	r3 = r3 / r4;
	r2 = (float)r3;
	r2 = Urho3D__math_vector2_set_y(r0,r2);
	return r0;
}

hl_urho3d_math_vector2* urho3d__Vector2_Vector2_Impl__neg(hl_urho3d_math_vector2* r0) {
	float r1;
	double r2;
	r1 = Urho3D__math_vector2_get_x(r0);
	r2 = (double)r1;
	r2 = -r2;
	r1 = (float)r2;
	r1 = Urho3D__math_vector2_set_x(r0,r1);
	r1 = Urho3D__math_vector2_get_y(r0);
	r2 = (double)r1;
	r2 = -r2;
	r1 = (float)r2;
	r1 = Urho3D__math_vector2_set_y(r0,r1);
	return r0;
}

hl_urho3d_math_vector2* urho3d__Vector2_Vector2_Impl__preNeg(hl_urho3d_math_vector2* r0) {
	float r1;
	double r2, r3;
	r1 = Urho3D__math_vector2_get_x(r0);
	r2 = (double)r1;
	r3 = 1.;
	r2 = r2 - r3;
	r1 = (float)r2;
	r1 = Urho3D__math_vector2_set_x(r0,r1);
	r1 = Urho3D__math_vector2_set_x(r0,r1);
	r1 = Urho3D__math_vector2_get_y(r0);
	r2 = (double)r1;
	r3 = 1.;
	r2 = r2 - r3;
	r1 = (float)r2;
	r1 = Urho3D__math_vector2_set_y(r0,r1);
	r1 = Urho3D__math_vector2_set_y(r0,r1);
	return r0;
}

hl_urho3d_math_vector2* urho3d__Vector2_Vector2_Impl__postNeg(hl_urho3d_math_vector2* r0) {
	float r1, r3, r5;
	double r2;
	int r4;
	r1 = Urho3D__math_vector2_get_x(r0);
	r2 = (double)r1;
	r1 = (float)r2;
	r4 = 1;
	r5 = (float)r4;
	r3 = r1 - r5;
	r3 = Urho3D__math_vector2_set_x(r0,r3);
	r3 = Urho3D__math_vector2_set_x(r0,r1);
	r1 = Urho3D__math_vector2_get_y(r0);
	r2 = (double)r1;
	r1 = (float)r2;
	r4 = 1;
	r5 = (float)r4;
	r3 = r1 - r5;
	r3 = Urho3D__math_vector2_set_y(r0,r3);
	r3 = Urho3D__math_vector2_set_y(r0,r1);
	return r0;
}

hl_urho3d_math_vector2* urho3d__Vector2_Vector2_Impl__preAdd(hl_urho3d_math_vector2* r0) {
	float r1;
	double r2, r3;
	r1 = Urho3D__math_vector2_get_x(r0);
	r2 = (double)r1;
	r3 = 1.;
	r2 = r2 + r3;
	r1 = (float)r2;
	r1 = Urho3D__math_vector2_set_x(r0,r1);
	r1 = Urho3D__math_vector2_set_x(r0,r1);
	r1 = Urho3D__math_vector2_get_y(r0);
	r2 = (double)r1;
	r3 = 1.;
	r2 = r2 + r3;
	r1 = (float)r2;
	r1 = Urho3D__math_vector2_set_y(r0,r1);
	r1 = Urho3D__math_vector2_set_y(r0,r1);
	return r0;
}

hl_urho3d_math_vector2* urho3d__Vector2_Vector2_Impl__postAdd(hl_urho3d_math_vector2* r0) {
	float r1, r3, r5;
	double r2;
	int r4;
	r1 = Urho3D__math_vector2_get_x(r0);
	r2 = (double)r1;
	r1 = (float)r2;
	r4 = 1;
	r5 = (float)r4;
	r3 = r1 + r5;
	r3 = Urho3D__math_vector2_set_x(r0,r3);
	r3 = Urho3D__math_vector2_set_x(r0,r1);
	r1 = Urho3D__math_vector2_get_y(r0);
	r2 = (double)r1;
	r1 = (float)r2;
	r4 = 1;
	r5 = (float)r4;
	r3 = r1 + r5;
	r3 = Urho3D__math_vector2_set_y(r0,r3);
	r3 = Urho3D__math_vector2_set_y(r0,r1);
	return r0;
}

void urho3d__Vector2_Vector2_Impl__Normalize(hl_urho3d_math_vector2* r0) {
	Urho3D__math_vector2_normalize(r0);
	return;
}

double urho3d__Vector2_Vector2_Impl__Length(hl_urho3d_math_vector2* r0) {
	float r1;
	double r2;
	r1 = Urho3D__math_vector2_length(r0);
	r2 = (double)r1;
	return r2;
}

double urho3d__Vector2_Vector2_Impl__LengthSquared(hl_urho3d_math_vector2* r0) {
	float r1;
	double r2;
	r1 = Urho3D__math_vector2_length_squared(r0);
	r2 = (double)r1;
	return r2;
}

double urho3d__Vector2_Vector2_Impl__DotProduct(hl_urho3d_math_vector2* r0,hl_urho3d_math_vector2* r1) {
	float r2;
	double r3;
	r2 = Urho3D__math_vector2_dot_product(r0,r1);
	r3 = (double)r2;
	return r3;
}

double urho3d__Vector2_Vector2_Impl__AbsDotProduct(hl_urho3d_math_vector2* r0,hl_urho3d_math_vector2* r1) {
	float r2;
	double r3;
	r2 = Urho3D__math_vector2_dot_product(r0,r1);
	r3 = (double)r2;
	return r3;
}

float urho3d__Vector2_Vector2_Impl__ProjectOntoAxis(hl_urho3d_math_vector2* r0,hl_urho3d_math_vector2* r1) {
	float r2;
	r2 = Urho3D__math_vector2_project_onto_axis(r0,r1);
	return r2;
}

float urho3d__Vector2_Vector2_Impl__Angle(hl_urho3d_math_vector2* r0,hl_urho3d_math_vector2* r1) {
	float r2;
	r2 = Urho3D__math_vector2_angle(r0,r1);
	return r2;
}

hl_urho3d_math_vector2* urho3d__Vector2_Vector2_Impl__Lerp(hl_urho3d_math_vector2* r0,hl_urho3d_math_vector2* r1,float r2) {
	hl_urho3d_math_vector2 *r3;
	r3 = Urho3D__math_vector2_lerp(r0,r1,r2);
	return r3;
}

bool urho3d__Vector2_Vector2_Impl__Equals(hl_urho3d_math_vector2* r0,hl_urho3d_math_vector2* r1) {
	bool r2;
	r2 = Urho3D__math_vector2_equals(r0,r1);
	return r2;
}

bool urho3d__Vector2_Vector2_Impl__IsNaN(hl_urho3d_math_vector2* r0) {
	bool r1;
	r1 = Urho3D__math_vector2_is_nan(r0);
	return r1;
}

bool urho3d__Vector2_Vector2_Impl__IsInf(hl_urho3d_math_vector2* r0) {
	bool r1;
	r1 = Urho3D__math_vector2_is_inf(r0);
	return r1;
}

hl_urho3d_math_vector2* urho3d__Vector2_Vector2_Impl__Normalized(hl_urho3d_math_vector2* r0) {
	hl_urho3d_math_vector2 *r1;
	r1 = Urho3D__math_vector2_normalized(r0);
	return r1;
}

hl_urho3d_math_vector2* urho3d__Vector2_Vector2_Impl__NormalizedOrDefault(hl_urho3d_math_vector2* r0,hl_urho3d_math_vector2* r1,vdynamic* r2) {
	urho3d___Vector2__$Vector2_Impl_ r4;
	hl_urho3d_math_vector2 *r3;
	float r7;
	double r6;
	vdynamic *r5;
	if( r1 ) goto label$f391fb7_36_4;
	r4 = (urho3d___Vector2__$Vector2_Impl_)g$_urho3d__Vector2_Vector2_Impl_;
	r3 = r4->ZERO;
	r1 = r3;
	label$f391fb7_36_4:
	if( r2 ) goto label$f391fb7_36_9;
	r6 = 5.00000000000000024e-05;
	r7 = (float)r6;
	r5 = hl_alloc_dynamic(&t$_f32);
	r5->v.f = r7;
	r2 = r5;
	label$f391fb7_36_9:
	r7 = r2 ? r2->v.f : 0;
	r3 = Urho3D__math_vector2_normalized_or_default(r0,r1,r7);
	return r3;
}

hl_urho3d_math_vector2* urho3d__Vector2_Vector2_Impl__ReNormalized(hl_urho3d_math_vector2* r0,float r1,float r2,hl_urho3d_math_vector2* r3,vdynamic* r4) {
	urho3d___Vector2__$Vector2_Impl_ r6;
	hl_urho3d_math_vector2 *r5;
	float r9, r10;
	double r8;
	vdynamic *r7;
	if( r3 ) goto label$f391fb7_37_4;
	r6 = (urho3d___Vector2__$Vector2_Impl_)g$_urho3d__Vector2_Vector2_Impl_;
	r5 = r6->ZERO;
	r3 = r5;
	label$f391fb7_37_4:
	if( r4 ) goto label$f391fb7_37_9;
	r8 = 5.00000000000000024e-05;
	r9 = (float)r8;
	r7 = hl_alloc_dynamic(&t$_f32);
	r7->v.f = r9;
	r4 = r7;
	label$f391fb7_37_9:
	r10 = r4 ? r4->v.f : 0;
	r5 = Urho3D__math_vector2_renormalized(r0,r1,r2,r3,r10);
	return r5;
}

float urho3d__Vector2_Vector2_Impl__get_x(hl_urho3d_math_vector2* r0) {
	float r1;
	r1 = Urho3D__math_vector2_get_x(r0);
	return r1;
}

float urho3d__Vector2_Vector2_Impl__set_x(hl_urho3d_math_vector2* r0,float r1) {
	float r2;
	r2 = Urho3D__math_vector2_set_x(r0,r1);
	return r2;
}

float urho3d__Vector2_Vector2_Impl__get_y(hl_urho3d_math_vector2* r0) {
	float r1;
	r1 = Urho3D__math_vector2_get_y(r0);
	return r1;
}

float urho3d__Vector2_Vector2_Impl__set_y(hl_urho3d_math_vector2* r0,float r1) {
	float r2;
	r2 = Urho3D__math_vector2_set_y(r0,r1);
	return r2;
}

