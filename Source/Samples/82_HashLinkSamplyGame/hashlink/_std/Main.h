﻿// Generated by HLC 4.1.2 (HL v4)
#ifndef INC__std__Main
#define INC__std__Main
typedef struct _$Main *$Main;
typedef struct _Main *Main;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <samplygame/SamplyGame.h>


struct _$Main {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	samplygame__SamplyGame app;
	vclosure* main;
};
struct _Main {
	hl_type *$type;
};
#endif

