﻿// Generated by HLC 4.1.2 (HL v4)
#ifndef INC_hl__types__ArrayObjIterator
#define INC_hl__types__ArrayObjIterator
typedef struct _hl__types__$ArrayObjIterator *hl__types__$ArrayObjIterator;
typedef struct _hl__types__ArrayObjIterator *hl__types__ArrayObjIterator;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <haxe/iterators/ArrayIterator.h>
#include <hl/types/ArrayDyn.h>
#include <hl/types/ArrayObj.h>


struct _hl__types__$ArrayObjIterator {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hl__types__ArrayObjIterator {
	hl_type *$type;
	hl__types__ArrayDyn array;
	int current;
	hl__types__ArrayObj arr;
};
#endif

