﻿// Generated by HLC 4.1.2 (HL v4)
#ifndef INC__std__Sys
#define INC__std__Sys
typedef struct _$Sys *$Sys;
typedef struct _Sys *Sys;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _$Sys {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	bool utf8Path;
	vclosure* println;
};
struct _Sys {
	hl_type *$type;
};
#endif

