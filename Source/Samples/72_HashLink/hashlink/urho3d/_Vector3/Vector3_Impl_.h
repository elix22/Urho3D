﻿// Generated by HLC 4.1.2 (HL v4)
#ifndef INC_urho3d___Vector3__Vector3_Impl_
#define INC_urho3d___Vector3__Vector3_Impl_
typedef struct _urho3d___Vector3__$Vector3_Impl_ *urho3d___Vector3__$Vector3_Impl_;
typedef struct _urho3d___Vector3__Vector3_Impl_ *urho3d___Vector3__Vector3_Impl_;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/natives.h>


struct _urho3d___Vector3__$Vector3_Impl_ {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	hl_urho3d_math_vector3* ZERO;
	hl_urho3d_math_vector3* LEFT;
	hl_urho3d_math_vector3* RIGHT;
	hl_urho3d_math_vector3* UP;
	hl_urho3d_math_vector3* DOWN;
	hl_urho3d_math_vector3* ONE;
	vclosure* _new;
	vclosure* isTypeOf;
	vclosure* toString;
	vclosure* fromStructVector3;
	vclosure* fromFloat;
	vclosure* fromSingle;
	vclosure* toStructVector3;
	vclosure* isEqual;
	vclosure* isNotEqual;
	vclosure* add;
	vclosure* addTo;
	vclosure* sub;
	vclosure* subFrom;
	vclosure* mul;
	vclosure* mulWith;
	vclosure* mulVector2;
	vclosure* mulWithVector2;
	vclosure* div;
	vclosure* divWith;
	vclosure* divVector2;
	vclosure* divWithVector2;
	vclosure* neg;
	vclosure* preNeg;
	vclosure* postNeg;
	vclosure* preAdd;
	vclosure* postAdd;
	vclosure* Normalize;
	vclosure* Length;
	vclosure* LengthSquared;
	vclosure* DotProduct;
	vclosure* AbsDotProduct;
	vclosure* ProjectOntoAxis;
	vclosure* Angle;
	vclosure* Lerp;
	vclosure* Equals;
	vclosure* IsNaN;
	vclosure* IsInf;
	vclosure* Normalized;
	vclosure* NormalizedOrDefault;
	vclosure* ReNormalized;
	vclosure* get_x;
	vclosure* set_x;
	vclosure* get_y;
	vclosure* set_y;
	vclosure* get_z;
	vclosure* set_z;
};
struct _urho3d___Vector3__Vector3_Impl_ {
	hl_type *$type;
};
#endif

