﻿// Generated by HLC 4.1.2 (HL v4)
#ifndef INC__std__MyApplication
#define INC__std__MyApplication
typedef struct _$MyApplication *$MyApplication;
typedef struct _MyApplication *MyApplication;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <urho3d/Application.h>
#include <hl/natives.h>


struct _$MyApplication {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _MyApplication {
	hl_type *$type;
	hl_urho3d_application* abstractApplication;
};
#endif

