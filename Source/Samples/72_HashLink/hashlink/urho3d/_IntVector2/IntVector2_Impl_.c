﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <urho3d/_IntVector2/IntVector2_Impl_.h>
#include <hl/natives.h>
String String___alloc__(vbyte*,int);
extern String s$853ae90;
String String___add__(String,String);
extern hl_type t$_i32;

hl_urho3d_intvector2* urho3d__IntVector2_IntVector2_Impl___new(int* r0,int* r1) {
	hl_urho3d_intvector2 *r4;
	int r2, r3;
	if( r0 ) goto label$8c149a3_1_3;
	r2 = 0;
	goto label$8c149a3_1_4;
	label$8c149a3_1_3:
	r2 = *r0;
	label$8c149a3_1_4:
	if( r1 ) goto label$8c149a3_1_7;
	r3 = 0;
	goto label$8c149a3_1_8;
	label$8c149a3_1_7:
	r3 = *r1;
	label$8c149a3_1_8:
	r4 = Urho3D__create_intvector2(r2,r3);
	return r4;
}

String urho3d__IntVector2_IntVector2_Impl__toString(hl_urho3d_intvector2* r0) {
	String r1, r5;
	int *r3;
	vbyte *r4;
	int r2;
	r2 = Urho3D__intvector2_get_x(r0);
	r3 = &r2;
	r4 = hl_itos(r2,r3);
	r1 = String___alloc__(r4,r2);
	r5 = (String)s$853ae90;
	r1 = String___add__(r1,r5);
	r2 = Urho3D__intvector2_get_y(r0);
	r3 = &r2;
	r4 = hl_itos(r2,r3);
	r5 = String___alloc__(r4,r2);
	r1 = String___add__(r1,r5);
	return r1;
}

hl_urho3d_intvector2* urho3d__IntVector2_IntVector2_Impl__fromStructVector2(vvirtual* r0) {
	hl_urho3d_intvector2 *r1;
	int r2, r3;
	if( r0 == NULL ) hl_null_access();
	r2 = hl_vfields(r0)[0] ? (*(int*)(hl_vfields(r0)[0])) : (int)hl_dyn_geti(r0->value,120/*x*/,&t$_i32);
	r3 = hl_vfields(r0)[1] ? (*(int*)(hl_vfields(r0)[1])) : (int)hl_dyn_geti(r0->value,121/*y*/,&t$_i32);
	r1 = Urho3D__create_intvector2(r2,r3);
	return r1;
}

bool urho3d__IntVector2_IntVector2_Impl__isequal(hl_urho3d_intvector2* r0,hl_urho3d_intvector2* r1) {
	bool r4;
	int r2, r3;
	r2 = Urho3D__intvector2_get_x(r0);
	r3 = Urho3D__intvector2_get_x(r1);
	if( r2 != r3 ) goto label$8c149a3_4_10;
	r2 = Urho3D__intvector2_get_y(r0);
	r3 = Urho3D__intvector2_get_y(r1);
	if( r2 == r3 ) goto label$8c149a3_4_8;
	r4 = false;
	goto label$8c149a3_4_9;
	label$8c149a3_4_8:
	r4 = true;
	label$8c149a3_4_9:
	return r4;
	label$8c149a3_4_10:
	r4 = false;
	return r4;
}

bool urho3d__IntVector2_IntVector2_Impl__isnotequal(hl_urho3d_intvector2* r0,hl_urho3d_intvector2* r1) {
	bool r2;
	int r3, r4;
	r3 = Urho3D__intvector2_get_x(r0);
	r4 = Urho3D__intvector2_get_x(r1);
	if( r3 != r4 ) goto label$8c149a3_5_8;
	r3 = Urho3D__intvector2_get_y(r0);
	r4 = Urho3D__intvector2_get_y(r1);
	if( r3 != r4 ) goto label$8c149a3_5_8;
	r2 = true;
	goto label$8c149a3_5_9;
	label$8c149a3_5_8:
	r2 = false;
	label$8c149a3_5_9:
	r2 = !r2;
	return r2;
}

hl_urho3d_intvector2* urho3d__IntVector2_IntVector2_Impl__add(hl_urho3d_intvector2* r0,hl_urho3d_intvector2* r1) {
	hl_urho3d_intvector2 *r3;
	int r2, r4, r5;
	r2 = Urho3D__intvector2_get_x(r0);
	r4 = Urho3D__intvector2_get_x(r1);
	r2 = r2 + r4;
	r4 = Urho3D__intvector2_get_y(r0);
	r5 = Urho3D__intvector2_get_y(r1);
	r4 = r4 + r5;
	r3 = Urho3D__create_intvector2(r2,r4);
	return r3;
}

hl_urho3d_intvector2* urho3d__IntVector2_IntVector2_Impl__addto(hl_urho3d_intvector2* r0,hl_urho3d_intvector2* r1) {
	int r2, r3;
	r2 = Urho3D__intvector2_get_x(r0);
	r3 = Urho3D__intvector2_get_x(r1);
	r2 = r2 + r3;
	r2 = Urho3D__intvector2_set_x(r0,r2);
	r2 = Urho3D__intvector2_get_y(r0);
	r3 = Urho3D__intvector2_get_y(r1);
	r2 = r2 + r3;
	r2 = Urho3D__intvector2_set_y(r0,r2);
	return r0;
}

hl_urho3d_intvector2* urho3d__IntVector2_IntVector2_Impl__sub(hl_urho3d_intvector2* r0,hl_urho3d_intvector2* r1) {
	hl_urho3d_intvector2 *r3;
	int r2, r4, r5;
	r2 = Urho3D__intvector2_get_x(r0);
	r4 = Urho3D__intvector2_get_x(r1);
	r2 = r2 - r4;
	r4 = Urho3D__intvector2_get_y(r0);
	r5 = Urho3D__intvector2_get_y(r1);
	r4 = r4 - r5;
	r3 = Urho3D__create_intvector2(r2,r4);
	return r3;
}

hl_urho3d_intvector2* urho3d__IntVector2_IntVector2_Impl__subfrom(hl_urho3d_intvector2* r0,hl_urho3d_intvector2* r1) {
	int r2, r3;
	r2 = Urho3D__intvector2_get_x(r0);
	r3 = Urho3D__intvector2_get_x(r1);
	r2 = r2 - r3;
	r2 = Urho3D__intvector2_set_x(r0,r2);
	r2 = Urho3D__intvector2_get_y(r0);
	r3 = Urho3D__intvector2_get_y(r1);
	r2 = r2 - r3;
	r2 = Urho3D__intvector2_set_y(r0,r2);
	return r0;
}

hl_urho3d_intvector2* urho3d__IntVector2_IntVector2_Impl__mul(hl_urho3d_intvector2* r0,int r1) {
	hl_urho3d_intvector2 *r3;
	int r2, r4;
	r2 = Urho3D__intvector2_get_x(r0);
	r2 = r2 * r1;
	r4 = Urho3D__intvector2_get_y(r0);
	r4 = r4 * r1;
	r3 = Urho3D__create_intvector2(r2,r4);
	return r3;
}

hl_urho3d_intvector2* urho3d__IntVector2_IntVector2_Impl__mulwith(hl_urho3d_intvector2* r0,int r1) {
	int r2;
	r2 = Urho3D__intvector2_get_x(r0);
	r2 = r2 * r1;
	r2 = Urho3D__intvector2_set_x(r0,r2);
	r2 = Urho3D__intvector2_get_y(r0);
	r2 = r2 * r1;
	r2 = Urho3D__intvector2_set_y(r0,r2);
	return r0;
}

hl_urho3d_intvector2* urho3d__IntVector2_IntVector2_Impl__neg(hl_urho3d_intvector2* r0) {
	int r1;
	r1 = Urho3D__intvector2_get_x(r0);
	r1 = -r1;
	r1 = Urho3D__intvector2_set_x(r0,r1);
	r1 = Urho3D__intvector2_get_y(r0);
	r1 = -r1;
	r1 = Urho3D__intvector2_set_y(r0,r1);
	return r0;
}

hl_urho3d_intvector2* urho3d__IntVector2_IntVector2_Impl__preneg(hl_urho3d_intvector2* r0) {
	int r1, r2;
	r1 = Urho3D__intvector2_get_x(r0);
	r2 = 1;
	r1 = r1 - r2;
	r1 = Urho3D__intvector2_set_x(r0,r1);
	r1 = Urho3D__intvector2_set_x(r0,r1);
	r1 = Urho3D__intvector2_get_y(r0);
	r2 = 1;
	r1 = r1 - r2;
	r1 = Urho3D__intvector2_set_y(r0,r1);
	r1 = Urho3D__intvector2_set_y(r0,r1);
	return r0;
}

hl_urho3d_intvector2* urho3d__IntVector2_IntVector2_Impl__postneg(hl_urho3d_intvector2* r0) {
	int r1, r2, r3;
	r1 = Urho3D__intvector2_get_x(r0);
	r3 = 1;
	r2 = r1 - r3;
	r2 = Urho3D__intvector2_set_x(r0,r2);
	r2 = Urho3D__intvector2_set_x(r0,r1);
	r1 = Urho3D__intvector2_get_y(r0);
	r3 = 1;
	r2 = r1 - r3;
	r2 = Urho3D__intvector2_set_y(r0,r2);
	r2 = Urho3D__intvector2_set_y(r0,r1);
	return r0;
}

hl_urho3d_intvector2* urho3d__IntVector2_IntVector2_Impl__preadd(hl_urho3d_intvector2* r0) {
	int r1, r2;
	r1 = Urho3D__intvector2_get_x(r0);
	r2 = 1;
	r1 = r1 + r2;
	r1 = Urho3D__intvector2_set_x(r0,r1);
	r1 = Urho3D__intvector2_set_x(r0,r1);
	r1 = Urho3D__intvector2_get_y(r0);
	r2 = 1;
	r1 = r1 + r2;
	r1 = Urho3D__intvector2_set_y(r0,r1);
	r1 = Urho3D__intvector2_set_y(r0,r1);
	return r0;
}

hl_urho3d_intvector2* urho3d__IntVector2_IntVector2_Impl__postadd(hl_urho3d_intvector2* r0) {
	int r1, r2, r3;
	r1 = Urho3D__intvector2_get_x(r0);
	r3 = 1;
	r2 = r1 + r3;
	r2 = Urho3D__intvector2_set_x(r0,r2);
	r2 = Urho3D__intvector2_set_x(r0,r1);
	r1 = Urho3D__intvector2_get_y(r0);
	r3 = 1;
	r2 = r1 + r3;
	r2 = Urho3D__intvector2_set_y(r0,r2);
	r2 = Urho3D__intvector2_set_y(r0,r1);
	return r0;
}

int urho3d__IntVector2_IntVector2_Impl__get_x(hl_urho3d_intvector2* r0) {
	int r1;
	r1 = Urho3D__intvector2_get_x(r0);
	return r1;
}

int urho3d__IntVector2_IntVector2_Impl__set_x(hl_urho3d_intvector2* r0,int r1) {
	int r2;
	r2 = Urho3D__intvector2_set_x(r0,r1);
	return r2;
}

int urho3d__IntVector2_IntVector2_Impl__get_y(hl_urho3d_intvector2* r0) {
	int r1;
	r1 = Urho3D__intvector2_get_y(r0);
	return r1;
}

int urho3d__IntVector2_IntVector2_Impl__set_y(hl_urho3d_intvector2* r0,int r1) {
	int r2;
	r2 = Urho3D__intvector2_set_y(r0,r1);
	return r2;
}

