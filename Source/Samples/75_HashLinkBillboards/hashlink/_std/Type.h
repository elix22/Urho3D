﻿// Generated by HLC 4.1.2 (HL v4)
#ifndef INC__std__Type
#define INC__std__Type
typedef struct _$Type *$Type;
typedef struct _Type *Type;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/Enum.h>
#include <hl/types/ArrayDyn.h>


struct _$Type {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* init;
	vclosure* initClass;
	vclosure* initEnum;
	vclosure* _register;
	vclosure* getClass;
	vclosure* getSuperClass;
	vclosure* resolveClass;
	vclosure* createInstance;
};
struct _Type {
	hl_type *$type;
};
#endif

