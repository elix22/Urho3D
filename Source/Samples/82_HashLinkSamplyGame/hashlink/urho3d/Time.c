﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <urho3d/Time.h>
#include <hl/natives.h>
#include <urho3d/_Context/Context_Impl_.h>
extern urho3d___Context__$Context_Impl_ g$_urho3d__Context_Context_Impl_;

int urho3d_Time_get_systemTime() {
	urho3d___Context__$Context_Impl_ r2;
	urho3d_context *r1;
	int r0;
	r2 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r1 = r2->context;
	r0 = Urho3D__core_time_get_system_time(r1);
	return r0;
}

