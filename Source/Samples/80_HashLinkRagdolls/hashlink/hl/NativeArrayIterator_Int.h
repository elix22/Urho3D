﻿// Generated by HLC 4.1.2 (HL v4)
#ifndef INC_hl__NativeArrayIterator_Int
#define INC_hl__NativeArrayIterator_Int
typedef struct _hl__$NativeArrayIterator_Int *hl__$NativeArrayIterator_Int;
typedef struct _hl__NativeArrayIterator_Int *hl__NativeArrayIterator_Int;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _hl__$NativeArrayIterator_Int {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hl__NativeArrayIterator_Int {
	hl_type *$type;
	varray* arr;
	int pos;
	int length;
};
#endif

