﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <urho3d/Renderer.h>
#include <hl/natives.h>
#include <urho3d/_Context/Context_Impl_.h>
extern urho3d___Context__$Context_Impl_ g$_urho3d__Context_Context_Impl_;

void urho3d_Renderer_SetViewport(int r0,hl_urho3d_graphics_viewport* r1) {
	urho3d___Context__$Context_Impl_ r4;
	urho3d_context *r3;
	r4 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r3 = r4->context;
	Urho3D__graphics_renderer_set_viewport(r3,r0,r1);
	return;
}

