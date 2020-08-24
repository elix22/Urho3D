﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <urho3d/_StringHash/StringHash_Impl_.h>
#include <hl/natives.h>
extern String s$StringHash_;
String urho3d__StringHash_StringHash_Impl__GetString(hl_urho3d_stringhash*);
String String___add__(String,String);
String String_fromUTF8(vbyte*);

hl_urho3d_stringhash* urho3d__StringHash_StringHash_Impl___new(String r0) {
	hl_urho3d_stringhash *r1;
	r1 = Urho3D__create_stringhash(r0);
	return r1;
}

hl_urho3d_stringhash* urho3d__StringHash_StringHash_Impl__fromString(String r0) {
	hl_urho3d_stringhash *r1;
	r1 = Urho3D__create_stringhash(r0);
	return r1;
}

String urho3d__StringHash_StringHash_Impl__toString(hl_urho3d_stringhash* r0) {
	String r1, r2;
	r1 = (String)s$StringHash_;
	r2 = urho3d__StringHash_StringHash_Impl__GetString(r0);
	r1 = String___add__(r1,r2);
	return r1;
}

String urho3d__StringHash_StringHash_Impl__GetString(hl_urho3d_stringhash* r0) {
	String r1;
	vbyte *r2;
	r2 = Urho3D__get_stringhash_string(r0);
	r1 = String_fromUTF8(r2);
	return r1;
}

