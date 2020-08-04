﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <urho3d/_TVector3/TVector3_Impl_.h>
#include <hl/natives.h>
extern String s$TVector3_;
String String___alloc__(vbyte*,int);
String String___add__(String,String);
extern String s$853ae90;
extern String s$9371d7a;
extern hl_type t$vrt_5bf093d;

hl_urho3d_math_tvector3* urho3d__TVector3_TVector3_Impl___new(double* r0,double* r1,double* r2) {
	float r7, r8, r9;
	double r3, r4, r5;
	hl_urho3d_math_tvector3 *r6;
	if( r0 ) goto label$73e1e63_1_3;
	r3 = 0.;
	goto label$73e1e63_1_4;
	label$73e1e63_1_3:
	r3 = *r0;
	label$73e1e63_1_4:
	if( r1 ) goto label$73e1e63_1_7;
	r4 = 0.;
	goto label$73e1e63_1_8;
	label$73e1e63_1_7:
	r4 = *r1;
	label$73e1e63_1_8:
	if( r2 ) goto label$73e1e63_1_11;
	r5 = 0.;
	goto label$73e1e63_1_12;
	label$73e1e63_1_11:
	r5 = *r2;
	label$73e1e63_1_12:
	r7 = (float)r3;
	r8 = (float)r4;
	r9 = (float)r5;
	r6 = Urho3D__math_tvector3_create(r7,r8,r9);
	return r6;
}

String urho3d__TVector3_TVector3_Impl__toString(hl_urho3d_math_tvector3* r0) {
	String r1, r7;
	float r2;
	double r3;
	int *r5;
	vbyte *r6;
	int r4;
	r1 = (String)s$TVector3_;
	r2 = Urho3D__math_tvector3_get_x(r0);
	r3 = (double)r2;
	r5 = &r4;
	r6 = hl_ftos(r3,r5);
	r7 = String___alloc__(r6,r4);
	r1 = String___add__(r1,r7);
	r7 = (String)s$853ae90;
	r1 = String___add__(r1,r7);
	r2 = Urho3D__math_tvector3_get_y(r0);
	r3 = (double)r2;
	r5 = &r4;
	r6 = hl_ftos(r3,r5);
	r7 = String___alloc__(r6,r4);
	r1 = String___add__(r1,r7);
	r7 = (String)s$853ae90;
	r1 = String___add__(r1,r7);
	r2 = Urho3D__math_tvector3_get_z(r0);
	r3 = (double)r2;
	r5 = &r4;
	r6 = hl_ftos(r3,r5);
	r7 = String___alloc__(r6,r4);
	r1 = String___add__(r1,r7);
	r7 = (String)s$9371d7a;
	r1 = String___add__(r1,r7);
	return r1;
}

hl_urho3d_math_vector3* urho3d__TVector3_TVector3_Impl__toVector3(hl_urho3d_math_tvector3* r0) {
	hl_urho3d_math_vector3 *r1;
	r1 = Urho3D__math_tvector3_cast_to_vector3(r0);
	return r1;
}

hl_urho3d_math_tvector3* urho3d__TVector3_TVector3_Impl__fromVector3(hl_urho3d_math_vector3* r0) {
	hl_urho3d_math_tvector3 *r1;
	r1 = Urho3D__math_tvector3_cast_from_vector3(r0);
	return r1;
}

hl_urho3d_math_tvector3* urho3d__TVector3_TVector3_Impl__fromStructVector3(vvirtual* r0) {
	float r3, r4, r5;
	double r2;
	hl_urho3d_math_tvector3 *r1;
	if( r0 == NULL ) hl_null_access();
	r2 = hl_vfields(r0)[0] ? (*(double*)(hl_vfields(r0)[0])) : (double)hl_dyn_getd(r0->value,120/*x*/);
	r3 = (float)r2;
	r2 = hl_vfields(r0)[1] ? (*(double*)(hl_vfields(r0)[1])) : (double)hl_dyn_getd(r0->value,121/*y*/);
	r4 = (float)r2;
	r2 = hl_vfields(r0)[2] ? (*(double*)(hl_vfields(r0)[2])) : (double)hl_dyn_getd(r0->value,122/*z*/);
	r5 = (float)r2;
	r1 = Urho3D__math_tvector3_create(r3,r4,r5);
	return r1;
}

hl_urho3d_math_tvector3* urho3d__TVector3_TVector3_Impl__fromFloat(double r0) {
	float r2, r3, r4;
	hl_urho3d_math_tvector3 *r1;
	r2 = (float)r0;
	r3 = (float)r0;
	r4 = (float)r0;
	r1 = Urho3D__math_tvector3_create(r2,r3,r4);
	return r1;
}

hl_urho3d_math_tvector3* urho3d__TVector3_TVector3_Impl__fromSingle(float r0) {
	hl_urho3d_math_tvector3 *r1;
	r1 = Urho3D__math_tvector3_create(r0,r0,r0);
	return r1;
}

vvirtual* urho3d__TVector3_TVector3_Impl__toStructVector3(hl_urho3d_math_tvector3* r0) {
	vvirtual *r1;
	float r2;
	double r3;
	r1 = hl_alloc_virtual(&t$vrt_5bf093d);
	r2 = Urho3D__math_tvector3_get_x(r0);
	r3 = (double)r2;
	if( hl_vfields(r1)[0] ) *(double*)(hl_vfields(r1)[0]) = (double)r3; else hl_dyn_setd(r1->value,120/*x*/,r3);
	r2 = Urho3D__math_tvector3_get_y(r0);
	r3 = (double)r2;
	if( hl_vfields(r1)[1] ) *(double*)(hl_vfields(r1)[1]) = (double)r3; else hl_dyn_setd(r1->value,121/*y*/,r3);
	r2 = Urho3D__math_tvector3_get_z(r0);
	r3 = (double)r2;
	if( hl_vfields(r1)[2] ) *(double*)(hl_vfields(r1)[2]) = (double)r3; else hl_dyn_setd(r1->value,122/*z*/,r3);
	return r1;
}

bool urho3d__TVector3_TVector3_Impl__isEqual(hl_urho3d_math_tvector3* r0,hl_urho3d_math_tvector3* r1) {
	bool r5;
	float r2;
	double r3, r4;
	r2 = Urho3D__math_tvector3_get_x(r0);
	r3 = (double)r2;
	r2 = Urho3D__math_tvector3_get_x(r1);
	r4 = (double)r2;
	if( r3 != r4 ) goto label$73e1e63_9_19;
	r2 = Urho3D__math_tvector3_get_y(r0);
	r3 = (double)r2;
	r2 = Urho3D__math_tvector3_get_y(r1);
	r4 = (double)r2;
	if( r3 != r4 ) goto label$73e1e63_9_19;
	r2 = Urho3D__math_tvector3_get_z(r0);
	r3 = (double)r2;
	r2 = Urho3D__math_tvector3_get_z(r1);
	r4 = (double)r2;
	if( r3 == r4 ) goto label$73e1e63_9_17;
	r5 = false;
	goto label$73e1e63_9_18;
	label$73e1e63_9_17:
	r5 = true;
	label$73e1e63_9_18:
	return r5;
	label$73e1e63_9_19:
	r5 = false;
	return r5;
}

bool urho3d__TVector3_TVector3_Impl__isNotEqual(hl_urho3d_math_tvector3* r0,hl_urho3d_math_tvector3* r1) {
	bool r2;
	float r3;
	double r4, r5;
	r3 = Urho3D__math_tvector3_get_x(r0);
	r4 = (double)r3;
	r3 = Urho3D__math_tvector3_get_x(r1);
	r5 = (double)r3;
	if( r4 != r5 ) goto label$73e1e63_10_17;
	r3 = Urho3D__math_tvector3_get_y(r0);
	r4 = (double)r3;
	r3 = Urho3D__math_tvector3_get_y(r1);
	r5 = (double)r3;
	if( r4 != r5 ) goto label$73e1e63_10_17;
	r3 = Urho3D__math_tvector3_get_z(r0);
	r4 = (double)r3;
	r3 = Urho3D__math_tvector3_get_z(r1);
	r5 = (double)r3;
	if( r4 != r5 ) goto label$73e1e63_10_17;
	r2 = true;
	goto label$73e1e63_10_18;
	label$73e1e63_10_17:
	r2 = false;
	label$73e1e63_10_18:
	r2 = !r2;
	return r2;
}

hl_urho3d_math_tvector3* urho3d__TVector3_TVector3_Impl__add(hl_urho3d_math_tvector3* r0,hl_urho3d_math_tvector3* r1) {
	float r3, r6, r7;
	double r2, r5;
	hl_urho3d_math_tvector3 *r4;
	r3 = Urho3D__math_tvector3_get_x(r0);
	r2 = (double)r3;
	r3 = Urho3D__math_tvector3_get_x(r1);
	r5 = (double)r3;
	r2 = r2 + r5;
	r3 = (float)r2;
	r6 = Urho3D__math_tvector3_get_y(r0);
	r2 = (double)r6;
	r6 = Urho3D__math_tvector3_get_y(r1);
	r5 = (double)r6;
	r2 = r2 + r5;
	r6 = (float)r2;
	r7 = Urho3D__math_tvector3_get_z(r0);
	r2 = (double)r7;
	r7 = Urho3D__math_tvector3_get_z(r1);
	r5 = (double)r7;
	r2 = r2 + r5;
	r7 = (float)r2;
	r4 = Urho3D__math_tvector3_create(r3,r6,r7);
	return r4;
}

hl_urho3d_math_tvector3* urho3d__TVector3_TVector3_Impl__addTo(hl_urho3d_math_tvector3* r0,hl_urho3d_math_tvector3* r1) {
	float r2;
	double r3, r4;
	r2 = Urho3D__math_tvector3_get_x(r0);
	r3 = (double)r2;
	r2 = Urho3D__math_tvector3_get_x(r1);
	r4 = (double)r2;
	r3 = r3 + r4;
	r2 = (float)r3;
	r2 = Urho3D__math_tvector3_set_x(r0,r2);
	r2 = Urho3D__math_tvector3_get_y(r0);
	r3 = (double)r2;
	r2 = Urho3D__math_tvector3_get_y(r1);
	r4 = (double)r2;
	r3 = r3 + r4;
	r2 = (float)r3;
	r2 = Urho3D__math_tvector3_set_y(r0,r2);
	r2 = Urho3D__math_tvector3_get_z(r0);
	r3 = (double)r2;
	r2 = Urho3D__math_tvector3_get_z(r1);
	r4 = (double)r2;
	r3 = r3 + r4;
	r2 = (float)r3;
	r2 = Urho3D__math_tvector3_set_z(r0,r2);
	return r0;
}

hl_urho3d_math_tvector3* urho3d__TVector3_TVector3_Impl__sub(hl_urho3d_math_tvector3* r0,hl_urho3d_math_tvector3* r1) {
	float r3, r6, r7;
	double r2, r5;
	hl_urho3d_math_tvector3 *r4;
	r3 = Urho3D__math_tvector3_get_x(r0);
	r2 = (double)r3;
	r3 = Urho3D__math_tvector3_get_x(r1);
	r5 = (double)r3;
	r2 = r2 - r5;
	r3 = (float)r2;
	r6 = Urho3D__math_tvector3_get_y(r0);
	r2 = (double)r6;
	r6 = Urho3D__math_tvector3_get_y(r1);
	r5 = (double)r6;
	r2 = r2 - r5;
	r6 = (float)r2;
	r7 = Urho3D__math_tvector3_get_z(r0);
	r2 = (double)r7;
	r7 = Urho3D__math_tvector3_get_z(r1);
	r5 = (double)r7;
	r2 = r2 - r5;
	r7 = (float)r2;
	r4 = Urho3D__math_tvector3_create(r3,r6,r7);
	return r4;
}

hl_urho3d_math_tvector3* urho3d__TVector3_TVector3_Impl__subFrom(hl_urho3d_math_tvector3* r0,hl_urho3d_math_tvector3* r1) {
	float r2;
	double r3, r4;
	r2 = Urho3D__math_tvector3_get_x(r0);
	r3 = (double)r2;
	r2 = Urho3D__math_tvector3_get_x(r1);
	r4 = (double)r2;
	r3 = r3 - r4;
	r2 = (float)r3;
	r2 = Urho3D__math_tvector3_set_x(r0,r2);
	r2 = Urho3D__math_tvector3_get_y(r0);
	r3 = (double)r2;
	r2 = Urho3D__math_tvector3_get_y(r1);
	r4 = (double)r2;
	r3 = r3 - r4;
	r2 = (float)r3;
	r2 = Urho3D__math_tvector3_set_y(r0,r2);
	r2 = Urho3D__math_tvector3_get_z(r0);
	r3 = (double)r2;
	r2 = Urho3D__math_tvector3_get_z(r1);
	r4 = (double)r2;
	r3 = r3 - r4;
	r2 = (float)r3;
	r2 = Urho3D__math_tvector3_set_z(r0,r2);
	return r0;
}

hl_urho3d_math_tvector3* urho3d__TVector3_TVector3_Impl__mul(hl_urho3d_math_tvector3* r0,float r1) {
	float r3, r6, r7;
	double r2, r5;
	hl_urho3d_math_tvector3 *r4;
	r3 = Urho3D__math_tvector3_get_x(r0);
	r2 = (double)r3;
	r5 = (double)r1;
	r2 = r2 * r5;
	r3 = (float)r2;
	r6 = Urho3D__math_tvector3_get_y(r0);
	r2 = (double)r6;
	r5 = (double)r1;
	r2 = r2 * r5;
	r6 = (float)r2;
	r7 = Urho3D__math_tvector3_get_z(r0);
	r2 = (double)r7;
	r5 = (double)r1;
	r2 = r2 * r5;
	r7 = (float)r2;
	r4 = Urho3D__math_tvector3_create(r3,r6,r7);
	return r4;
}

hl_urho3d_math_tvector3* urho3d__TVector3_TVector3_Impl__mulWith(hl_urho3d_math_tvector3* r0,float r1) {
	float r2;
	double r3, r4;
	r2 = Urho3D__math_tvector3_get_x(r0);
	r3 = (double)r2;
	r4 = (double)r1;
	r3 = r3 * r4;
	r2 = (float)r3;
	r2 = Urho3D__math_tvector3_set_x(r0,r2);
	r2 = Urho3D__math_tvector3_get_y(r0);
	r3 = (double)r2;
	r4 = (double)r1;
	r3 = r3 * r4;
	r2 = (float)r3;
	r2 = Urho3D__math_tvector3_set_y(r0,r2);
	r2 = Urho3D__math_tvector3_get_z(r0);
	r3 = (double)r2;
	r4 = (double)r1;
	r3 = r3 * r4;
	r2 = (float)r3;
	r2 = Urho3D__math_tvector3_set_z(r0,r2);
	return r0;
}

hl_urho3d_math_tvector3* urho3d__TVector3_TVector3_Impl__mulVector2(hl_urho3d_math_tvector3* r0,hl_urho3d_math_tvector3* r1) {
	float r3, r6, r7;
	double r2, r5;
	hl_urho3d_math_tvector3 *r4;
	r3 = Urho3D__math_tvector3_get_x(r0);
	r2 = (double)r3;
	r3 = Urho3D__math_tvector3_get_x(r1);
	r5 = (double)r3;
	r2 = r2 * r5;
	r3 = (float)r2;
	r6 = Urho3D__math_tvector3_get_y(r0);
	r2 = (double)r6;
	r6 = Urho3D__math_tvector3_get_y(r1);
	r5 = (double)r6;
	r2 = r2 * r5;
	r6 = (float)r2;
	r7 = Urho3D__math_tvector3_get_z(r0);
	r2 = (double)r7;
	r7 = Urho3D__math_tvector3_get_z(r1);
	r5 = (double)r7;
	r2 = r2 * r5;
	r7 = (float)r2;
	r4 = Urho3D__math_tvector3_create(r3,r6,r7);
	return r4;
}

hl_urho3d_math_tvector3* urho3d__TVector3_TVector3_Impl__mulWithVector2(hl_urho3d_math_tvector3* r0,hl_urho3d_math_tvector3* r1) {
	float r2;
	double r3, r4;
	r2 = Urho3D__math_tvector3_get_x(r0);
	r3 = (double)r2;
	r2 = Urho3D__math_tvector3_get_x(r1);
	r4 = (double)r2;
	r3 = r3 * r4;
	r2 = (float)r3;
	r2 = Urho3D__math_tvector3_set_x(r0,r2);
	r2 = Urho3D__math_tvector3_get_y(r0);
	r3 = (double)r2;
	r2 = Urho3D__math_tvector3_get_y(r1);
	r4 = (double)r2;
	r3 = r3 * r4;
	r2 = (float)r3;
	r2 = Urho3D__math_tvector3_set_y(r0,r2);
	r2 = Urho3D__math_tvector3_get_z(r0);
	r3 = (double)r2;
	r2 = Urho3D__math_tvector3_get_z(r1);
	r4 = (double)r2;
	r3 = r3 * r4;
	r2 = (float)r3;
	r2 = Urho3D__math_tvector3_set_z(r0,r2);
	return r0;
}

hl_urho3d_math_tvector3* urho3d__TVector3_TVector3_Impl__div(hl_urho3d_math_tvector3* r0,float r1) {
	float r3, r6, r7;
	double r2, r5;
	hl_urho3d_math_tvector3 *r4;
	r3 = Urho3D__math_tvector3_get_x(r0);
	r2 = (double)r3;
	r5 = (double)r1;
	r2 = r2 / r5;
	r3 = (float)r2;
	r6 = Urho3D__math_tvector3_get_y(r0);
	r2 = (double)r6;
	r5 = (double)r1;
	r2 = r2 / r5;
	r6 = (float)r2;
	r7 = Urho3D__math_tvector3_get_z(r0);
	r2 = (double)r7;
	r5 = (double)r1;
	r2 = r2 / r5;
	r7 = (float)r2;
	r4 = Urho3D__math_tvector3_create(r3,r6,r7);
	return r4;
}

hl_urho3d_math_tvector3* urho3d__TVector3_TVector3_Impl__divWith(hl_urho3d_math_tvector3* r0,float r1) {
	float r2;
	double r3, r4;
	r2 = Urho3D__math_tvector3_get_x(r0);
	r3 = (double)r2;
	r4 = (double)r1;
	r3 = r3 / r4;
	r2 = (float)r3;
	r2 = Urho3D__math_tvector3_set_x(r0,r2);
	r2 = Urho3D__math_tvector3_get_y(r0);
	r3 = (double)r2;
	r4 = (double)r1;
	r3 = r3 / r4;
	r2 = (float)r3;
	r2 = Urho3D__math_tvector3_set_y(r0,r2);
	r2 = Urho3D__math_tvector3_get_z(r0);
	r3 = (double)r2;
	r4 = (double)r1;
	r3 = r3 / r4;
	r2 = (float)r3;
	r2 = Urho3D__math_tvector3_set_z(r0,r2);
	return r0;
}

hl_urho3d_math_tvector3* urho3d__TVector3_TVector3_Impl__divVector2(hl_urho3d_math_tvector3* r0,hl_urho3d_math_tvector3* r1) {
	float r3, r6, r7, r8;
	double r2, r5;
	hl_urho3d_math_tvector3 *r4;
	r3 = Urho3D__math_tvector3_get_x(r0);
	r2 = (double)r3;
	r3 = Urho3D__math_tvector3_get_x(r1);
	r5 = (double)r3;
	r2 = r2 / r5;
	r3 = (float)r2;
	r6 = Urho3D__math_tvector3_get_y(r0);
	r2 = (double)r6;
	r6 = Urho3D__math_tvector3_get_y(r1);
	r5 = (double)r6;
	r2 = r2 / r5;
	r6 = (float)r2;
	r7 = Urho3D__math_tvector3_get_z(r0);
	r2 = (double)r7;
	r7 = Urho3D__math_tvector3_get_z(r1);
	r5 = (double)r7;
	r2 = r2 / r5;
	r7 = (float)r2;
	r2 = 0.;
	r8 = (float)r2;
	r4 = Urho3D__math_tvector3_create(r3,r6,r8);
	return r4;
}

hl_urho3d_math_tvector3* urho3d__TVector3_TVector3_Impl__divWithVector2(hl_urho3d_math_tvector3* r0,hl_urho3d_math_tvector3* r1) {
	float r2;
	double r3, r4;
	r2 = Urho3D__math_tvector3_get_x(r0);
	r3 = (double)r2;
	r2 = Urho3D__math_tvector3_get_x(r1);
	r4 = (double)r2;
	r3 = r3 / r4;
	r2 = (float)r3;
	r2 = Urho3D__math_tvector3_set_x(r0,r2);
	r2 = Urho3D__math_tvector3_get_y(r0);
	r3 = (double)r2;
	r2 = Urho3D__math_tvector3_get_y(r1);
	r4 = (double)r2;
	r3 = r3 / r4;
	r2 = (float)r3;
	r2 = Urho3D__math_tvector3_set_y(r0,r2);
	r2 = Urho3D__math_tvector3_get_z(r0);
	r3 = (double)r2;
	r2 = Urho3D__math_tvector3_get_z(r1);
	r4 = (double)r2;
	r3 = r3 / r4;
	r2 = (float)r3;
	r2 = Urho3D__math_tvector3_set_z(r0,r2);
	return r0;
}

hl_urho3d_math_tvector3* urho3d__TVector3_TVector3_Impl__neg(hl_urho3d_math_tvector3* r0) {
	float r1;
	double r2;
	r1 = Urho3D__math_tvector3_get_x(r0);
	r2 = (double)r1;
	r2 = -r2;
	r1 = (float)r2;
	r1 = Urho3D__math_tvector3_set_x(r0,r1);
	r1 = Urho3D__math_tvector3_get_y(r0);
	r2 = (double)r1;
	r2 = -r2;
	r1 = (float)r2;
	r1 = Urho3D__math_tvector3_set_y(r0,r1);
	r1 = Urho3D__math_tvector3_get_z(r0);
	r2 = (double)r1;
	r2 = -r2;
	r1 = (float)r2;
	r1 = Urho3D__math_tvector3_set_z(r0,r1);
	return r0;
}

hl_urho3d_math_tvector3* urho3d__TVector3_TVector3_Impl__preNeg(hl_urho3d_math_tvector3* r0) {
	float r1;
	double r2, r3;
	r1 = Urho3D__math_tvector3_get_x(r0);
	r2 = (double)r1;
	r3 = 1.;
	r2 = r2 - r3;
	r1 = (float)r2;
	r1 = Urho3D__math_tvector3_set_x(r0,r1);
	r1 = Urho3D__math_tvector3_set_x(r0,r1);
	r1 = Urho3D__math_tvector3_get_y(r0);
	r2 = (double)r1;
	r3 = 1.;
	r2 = r2 - r3;
	r1 = (float)r2;
	r1 = Urho3D__math_tvector3_set_y(r0,r1);
	r1 = Urho3D__math_tvector3_set_y(r0,r1);
	r1 = Urho3D__math_tvector3_get_z(r0);
	r2 = (double)r1;
	r3 = 1.;
	r2 = r2 - r3;
	r1 = (float)r2;
	r1 = Urho3D__math_tvector3_set_z(r0,r1);
	r1 = Urho3D__math_tvector3_set_z(r0,r1);
	return r0;
}

hl_urho3d_math_tvector3* urho3d__TVector3_TVector3_Impl__postNeg(hl_urho3d_math_tvector3* r0) {
	float r1, r3, r5;
	double r2;
	int r4;
	r1 = Urho3D__math_tvector3_get_x(r0);
	r2 = (double)r1;
	r1 = (float)r2;
	r4 = 1;
	r5 = (float)r4;
	r3 = r1 - r5;
	r3 = Urho3D__math_tvector3_set_x(r0,r3);
	r3 = Urho3D__math_tvector3_set_x(r0,r1);
	r1 = Urho3D__math_tvector3_get_y(r0);
	r2 = (double)r1;
	r1 = (float)r2;
	r4 = 1;
	r5 = (float)r4;
	r3 = r1 - r5;
	r3 = Urho3D__math_tvector3_set_y(r0,r3);
	r3 = Urho3D__math_tvector3_set_y(r0,r1);
	r1 = Urho3D__math_tvector3_get_z(r0);
	r2 = (double)r1;
	r1 = (float)r2;
	r4 = 1;
	r5 = (float)r4;
	r3 = r1 - r5;
	r3 = Urho3D__math_tvector3_set_z(r0,r3);
	r3 = Urho3D__math_tvector3_set_z(r0,r1);
	return r0;
}

hl_urho3d_math_tvector3* urho3d__TVector3_TVector3_Impl__preAdd(hl_urho3d_math_tvector3* r0) {
	float r1;
	double r2, r3;
	r1 = Urho3D__math_tvector3_get_x(r0);
	r2 = (double)r1;
	r3 = 1.;
	r2 = r2 + r3;
	r1 = (float)r2;
	r1 = Urho3D__math_tvector3_set_x(r0,r1);
	r1 = Urho3D__math_tvector3_set_x(r0,r1);
	r1 = Urho3D__math_tvector3_get_y(r0);
	r2 = (double)r1;
	r3 = 1.;
	r2 = r2 + r3;
	r1 = (float)r2;
	r1 = Urho3D__math_tvector3_set_y(r0,r1);
	r1 = Urho3D__math_tvector3_set_y(r0,r1);
	r1 = Urho3D__math_tvector3_get_z(r0);
	r2 = (double)r1;
	r3 = 1.;
	r2 = r2 + r3;
	r1 = (float)r2;
	r1 = Urho3D__math_tvector3_set_z(r0,r1);
	r1 = Urho3D__math_tvector3_set_z(r0,r1);
	return r0;
}

hl_urho3d_math_tvector3* urho3d__TVector3_TVector3_Impl__postAdd(hl_urho3d_math_tvector3* r0) {
	float r1, r3, r5;
	double r2;
	int r4;
	r1 = Urho3D__math_tvector3_get_x(r0);
	r2 = (double)r1;
	r1 = (float)r2;
	r4 = 1;
	r5 = (float)r4;
	r3 = r1 + r5;
	r3 = Urho3D__math_tvector3_set_x(r0,r3);
	r3 = Urho3D__math_tvector3_set_x(r0,r1);
	r1 = Urho3D__math_tvector3_get_y(r0);
	r2 = (double)r1;
	r1 = (float)r2;
	r4 = 1;
	r5 = (float)r4;
	r3 = r1 + r5;
	r3 = Urho3D__math_tvector3_set_y(r0,r3);
	r3 = Urho3D__math_tvector3_set_y(r0,r1);
	r1 = Urho3D__math_tvector3_get_z(r0);
	r2 = (double)r1;
	r1 = (float)r2;
	r4 = 1;
	r5 = (float)r4;
	r3 = r1 + r5;
	r3 = Urho3D__math_tvector3_set_z(r0,r3);
	r3 = Urho3D__math_tvector3_set_z(r0,r1);
	return r0;
}

float urho3d__TVector3_TVector3_Impl__get_x(hl_urho3d_math_tvector3* r0) {
	float r1;
	r1 = Urho3D__math_tvector3_get_x(r0);
	return r1;
}

float urho3d__TVector3_TVector3_Impl__set_x(hl_urho3d_math_tvector3* r0,float r1) {
	float r2;
	r2 = Urho3D__math_tvector3_set_x(r0,r1);
	return r2;
}

float urho3d__TVector3_TVector3_Impl__get_y(hl_urho3d_math_tvector3* r0) {
	float r1;
	r1 = Urho3D__math_tvector3_get_y(r0);
	return r1;
}

float urho3d__TVector3_TVector3_Impl__set_y(hl_urho3d_math_tvector3* r0,float r1) {
	float r2;
	r2 = Urho3D__math_tvector3_set_y(r0,r1);
	return r2;
}

float urho3d__TVector3_TVector3_Impl__get_z(hl_urho3d_math_tvector3* r0) {
	float r1;
	r1 = Urho3D__math_tvector3_get_z(r0);
	return r1;
}

float urho3d__TVector3_TVector3_Impl__set_z(hl_urho3d_math_tvector3* r0,float r1) {
	float r2;
	r2 = Urho3D__math_tvector3_set_z(r0,r1);
	return r2;
}

