﻿// Generated by HLC 4.1.2 (HL v4)
#ifndef INC_urho3d__actions__ActionID
#define INC_urho3d__actions__ActionID
typedef struct _urho3d__actions__$ActionID *urho3d__actions__$ActionID;
typedef struct _urho3d__actions__ActionID *urho3d__actions__ActionID;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayObj.h>


struct _urho3d__actions__$ActionID {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	int _index_id;
};
struct _urho3d__actions__ActionID {
	hl_type *$type;
	hl__types__ArrayObj _action;
	vclosure* callback;
	int id;
};
#endif

