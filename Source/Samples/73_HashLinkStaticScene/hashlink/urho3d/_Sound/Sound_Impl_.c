﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <urho3d/_Sound/Sound_Impl_.h>
#include <hl/natives.h>
#include <urho3d/_Context/Context_Impl_.h>
extern urho3d___Context__$Context_Impl_ g$_urho3d__Context_Context_Impl_;
String urho3d__Sound_Sound_Impl__GetName(hl_urho3d_audio_sound*);
String String_fromUTF8(vbyte*);

hl_urho3d_audio_sound* urho3d__Sound_Sound_Impl___new(String r0) {
	hl_urho3d_audio_sound *r1;
	urho3d___Context__$Context_Impl_ r3;
	urho3d_context *r2;
	r3 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r2 = r3->context;
	r1 = Urho3D__audio_sound_create(r2,r0);
	return r1;
}

String urho3d__Sound_Sound_Impl__get_name(hl_urho3d_audio_sound* r0) {
	String r1;
	r1 = urho3d__Sound_Sound_Impl__GetName(r0);
	return r1;
}

String urho3d__Sound_Sound_Impl__GetName(hl_urho3d_audio_sound* r0) {
	String r1;
	vbyte *r2;
	r2 = Urho3D__audio_sound_get_name(r0);
	r1 = String_fromUTF8(r2);
	return r1;
}

