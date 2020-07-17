﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <urho3d/_Variant/Variant_Impl_.h>
#include <hl/natives.h>

hl_urho3d_variant* urho3d__Variant_Variant_Impl___new() {
	hl_urho3d_variant *r0;
	r0 = Urho3D__create_variant();
	return r0;
}

float urho3d__Variant_Variant_Impl__GetSingle(hl_urho3d_variant* r0) {
	float r1;
	r1 = Urho3D__variant_get_float(r0);
	return r1;
}

int urho3d__Variant_Variant_Impl__GetInt(hl_urho3d_variant* r0) {
	int r1;
	r1 = Urho3D__variant_get_int(r0);
	return r1;
}

hl_urho3d_vector2* urho3d__Variant_Variant_Impl__GetVector2(hl_urho3d_variant* r0) {
	hl_urho3d_vector2 *r1;
	float r3, r4;
	double r2;
	r2 = 0.;
	r3 = (float)r2;
	r2 = 0.;
	r4 = (float)r2;
	r1 = Urho3D__create_vector2(r3,r4);
	Urho3D__variant_get_vector2(r0,r1);
	return r1;
}

hl_urho3d_variant* urho3d__Variant_Variant_Impl__fromVector2(hl_urho3d_vector2* r0) {
	hl_urho3d_variant *r1;
	r1 = Urho3D__create_variant();
	Urho3D__variant_set_vector2(r1,r0);
	return r1;
}

hl_urho3d_variant* urho3d__Variant_Variant_Impl__fromInt(int r0) {
	hl_urho3d_variant *r1;
	r1 = Urho3D__create_variant();
	Urho3D__variant_set_int(r1,r0);
	return r1;
}

hl_urho3d_variant* urho3d__Variant_Variant_Impl__fromSingle(float r0) {
	hl_urho3d_variant *r1;
	r1 = Urho3D__create_variant();
	Urho3D__variant_set_float(r1,r0);
	return r1;
}

