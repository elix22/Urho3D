﻿// Generated by HLC 4.1.2 (HL v4)
#ifndef INC_actions__ActionDef
#define INC_actions__ActionDef
typedef struct _actions__$ActionDef *actions__$ActionDef;
typedef struct _actions__ActionDef *actions__ActionDef;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <actions/FiniteTimeActionState.h>


struct _actions__$ActionDef {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _actions__ActionDef {
	hl_type *$type;
	actions__FiniteTimeActionState actionState;
};
#endif

