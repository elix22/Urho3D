﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <urho3d/_BoundingBox/BoundingBox_Impl_.h>
#include <hl/natives.h>

hl_urho3d_math_boundingbox* urho3d__BoundingBox_BoundingBox_Impl___new(hl_urho3d_math_vector3* r0,hl_urho3d_math_vector3* r1) {
	hl_urho3d_math_boundingbox *r2;
	r2 = Urho3D__math_boundingbox_create_v3_v3(r0,r1);
	return r2;
}

hl_urho3d_math_tvector3* urho3d__BoundingBox_BoundingBox_Impl__set_min(hl_urho3d_math_boundingbox* r0,hl_urho3d_math_tvector3* r1) {
	Urho3D__math_boundingbox_set_min(r0,r1);
	return r1;
}

hl_urho3d_math_tvector3* urho3d__BoundingBox_BoundingBox_Impl__get_min(hl_urho3d_math_boundingbox* r0) {
	hl_urho3d_math_tvector3 *r1;
	r1 = Urho3D__math_boundingbox_get_min(r0);
	return r1;
}

hl_urho3d_math_tvector3* urho3d__BoundingBox_BoundingBox_Impl__set_max(hl_urho3d_math_boundingbox* r0,hl_urho3d_math_tvector3* r1) {
	Urho3D__math_boundingbox_set_max(r0,r1);
	return r1;
}

hl_urho3d_math_tvector3* urho3d__BoundingBox_BoundingBox_Impl__get_max(hl_urho3d_math_boundingbox* r0) {
	hl_urho3d_math_tvector3 *r1;
	r1 = Urho3D__math_boundingbox_get_max(r0);
	return r1;
}

