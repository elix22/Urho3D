﻿// Generated by HLC 4.1.2 (HL v4)
#ifndef INC__std__Reflect
#define INC__std__Reflect
typedef struct _$Reflect *$Reflect;
typedef struct _Reflect *Reflect;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayDyn.h>
#include <hl/types/ArrayObj.h>


struct _$Reflect {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* field;
	vclosure* callMethod;
	vclosure* fields;
};
struct _Reflect {
	hl_type *$type;
};
#endif

