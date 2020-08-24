﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <urho3d/_RenderPath/RenderPath_Impl_.h>
#include <hl/natives.h>
#include <urho3d/_Context/Context_Impl_.h>
extern urho3d___Context__$Context_Impl_ g$_urho3d__Context_Context_Impl_;

hl_urho3d_graphics_render_path* urho3d__RenderPath_RenderPath_Impl___new() {
	hl_urho3d_graphics_render_path *r0;
	urho3d___Context__$Context_Impl_ r2;
	urho3d_context *r1;
	r2 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r1 = r2->context;
	r0 = Urho3D__graphics_render_path_create(r1);
	return r0;
}

hl_urho3d_graphics_render_path* urho3d__RenderPath_RenderPath_Impl__Clone(hl_urho3d_graphics_render_path* r0) {
	hl_urho3d_graphics_render_path *r1;
	urho3d___Context__$Context_Impl_ r3;
	urho3d_context *r2;
	r3 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r2 = r3->context;
	r1 = Urho3D__graphics_render_path_clone(r2,r0);
	return r1;
}

bool urho3d__RenderPath_RenderPath_Impl__Append(hl_urho3d_graphics_render_path* r0,hl_urho3d_resource_xml_file* r1) {
	bool r2;
	urho3d___Context__$Context_Impl_ r4;
	urho3d_context *r3;
	r4 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r3 = r4->context;
	r2 = Urho3D__graphics_render_path_append(r3,r0,r1);
	return r2;
}

void urho3d__RenderPath_RenderPath_Impl__SetShaderParameter(hl_urho3d_graphics_render_path* r0,String r1,hl_urho3d_variant* r2) {
	urho3d___Context__$Context_Impl_ r5;
	urho3d_context *r4;
	r5 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r4 = r5->context;
	Urho3D__graphics_render_set_shader_parameter(r4,r0,r1,r2);
	return;
}

hl_urho3d_variant* urho3d__RenderPath_RenderPath_Impl__GetShaderParameter(hl_urho3d_graphics_render_path* r0,String r1) {
	urho3d___Context__$Context_Impl_ r4;
	hl_urho3d_variant *r2;
	urho3d_context *r3;
	r4 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r3 = r4->context;
	r2 = Urho3D__graphics_render_get_shader_parameter(r3,r0,r1);
	return r2;
}

void urho3d__RenderPath_RenderPath_Impl__SetEnabled(hl_urho3d_graphics_render_path* r0,String r1,bool r2) {
	urho3d___Context__$Context_Impl_ r5;
	urho3d_context *r4;
	r5 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r4 = r5->context;
	Urho3D__graphics_render_set_enabled(r4,r0,r1,r2);
	return;
}

void urho3d__RenderPath_RenderPath_Impl__ToggleEnabled(hl_urho3d_graphics_render_path* r0,String r1) {
	urho3d___Context__$Context_Impl_ r4;
	urho3d_context *r3;
	r4 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r3 = r4->context;
	Urho3D__graphics_render_toggle_enabled(r3,r0,r1);
	return;
}

