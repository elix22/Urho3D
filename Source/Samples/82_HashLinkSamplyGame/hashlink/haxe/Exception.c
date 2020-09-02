﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <haxe/Exception.h>
#include <haxe/ValueException.h>
extern haxe__$Exception g$_haxe_Exception;
bool Std_isOfType(vdynamic*,vdynamic*);
extern hl_type t$haxe_Exception;
extern hl_type t$_dyn;
extern hl_type t$haxe_ValueException;
void haxe_ValueException_new(haxe__ValueException,vdynamic*,haxe__Exception,vdynamic*);
vdynamic* haxe_Exception_get_native(haxe__Exception);
String haxe_Exception_toString(haxe__Exception);
String haxe_Exception_get_message(haxe__Exception);
#include <hl/natives.h>
varray* haxe_NativeStackTrace_callStack(void);

haxe__Exception haxe_Exception_caught(vdynamic* r0) {
	bool r2;
	haxe__$Exception r3;
	haxe__ValueException r5;
	haxe__Exception r4;
	r3 = (haxe__$Exception)g$_haxe_Exception;
	r2 = Std_isOfType(r0,((vdynamic*)r3));
	if( !r2 ) goto label$2937a61_1_5;
	r4 = (haxe__Exception)hl_dyn_castp(&r0,&t$_dyn,&t$haxe_Exception);
	return r4;
	label$2937a61_1_5:
	r5 = (haxe__ValueException)hl_alloc_obj(&t$haxe_ValueException);
	r4 = NULL;
	haxe_ValueException_new(r5,r0,r4,r0);
	return ((haxe__Exception)r5);
}

vdynamic* haxe_Exception_thrown(vdynamic* r0) {
	bool r2;
	haxe__$Exception r4;
	haxe__ValueException r6;
	haxe__Exception r5;
	vdynamic *r3, *r7;
	int r8;
	r4 = (haxe__$Exception)g$_haxe_Exception;
	r2 = Std_isOfType(r0,((vdynamic*)r4));
	if( !r2 ) goto label$2937a61_2_7;
	r5 = (haxe__Exception)hl_dyn_castp(&r0,&t$_dyn,&t$haxe_Exception);
	if( r5 == NULL ) hl_null_access();
	r3 = haxe_Exception_get_native(r5);
	return r3;
	label$2937a61_2_7:
	r6 = (haxe__ValueException)hl_alloc_obj(&t$haxe_ValueException);
	r5 = NULL;
	r7 = NULL;
	haxe_ValueException_new(r6,r0,r5,r7);
	r8 = r6->__skipStack;
	++r8;
	r6->__skipStack = r8;
	return ((vdynamic*)r6);
}

vdynamic* haxe_Exception_unwrap(haxe__Exception r0) {
	vdynamic *r1;
	r1 = r0->__nativeException;
	return r1;
}

vbyte* haxe_Exception___string(haxe__Exception r0) {
	String r2;
	vbyte *r1;
	r2 = haxe_Exception_toString(r0);
	if( r2 == NULL ) hl_null_access();
	r1 = r2->bytes;
	return r1;
}

String haxe_Exception_toString(haxe__Exception r0) {
	String r1;
	r1 = haxe_Exception_get_message(r0);
	return r1;
}

String haxe_Exception_get_message(haxe__Exception r0) {
	String r1;
	r1 = r0->__exceptionMessage;
	return r1;
}

vdynamic* haxe_Exception_get_native(haxe__Exception r0) {
	vdynamic *r1;
	r1 = r0->__nativeException;
	return r1;
}

void haxe_Exception_new(haxe__Exception r0,String r1,haxe__Exception r2,vdynamic* r3) {
	varray *r6;
	int r4;
	r4 = 0;
	r0->__skipStack = r4;
	r0->__exceptionMessage = r1;
	r0->__previousException = r2;
	if( !r3 ) goto label$2937a61_8_9;
	r6 = hl_exception_stack();
	r0->__nativeStack = r6;
	r0->__nativeException = r3;
	goto label$2937a61_8_12;
	label$2937a61_8_9:
	r6 = haxe_NativeStackTrace_callStack();
	r0->__nativeStack = r6;
	r0->__nativeException = ((vdynamic*)r0);
	label$2937a61_8_12:
	return;
}

