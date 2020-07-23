﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <urho3d/Zone.h>
#include <hl/natives.h>
#include <urho3d/_Context/Context_Impl_.h>
extern urho3d___Context__$Context_Impl_ g$_urho3d__Context_Context_Impl_;
void urho3d_Component_new(urho3d__Component,hl_urho3d_scene_component*);

hl_urho3d_math_boundingbox* urho3d_Zone_set_boundingBox(urho3d__Zone r0,hl_urho3d_math_boundingbox* r1) {
	hl_urho3d_graphics_zone *r5;
	urho3d___Context__$Context_Impl_ r4;
	urho3d_context *r3;
	hl_urho3d_math_boundingbox *r2;
	r4 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r3 = r4->context;
	r5 = r0->abstractZone;
	r2 = Urho3D__graphics_zone_set_boundingbox(r3,r5,r1);
	return r2;
}

hl_urho3d_math_boundingbox* urho3d_Zone_get_boundingBox(urho3d__Zone r0) {
	hl_urho3d_graphics_zone *r4;
	urho3d___Context__$Context_Impl_ r3;
	urho3d_context *r2;
	hl_urho3d_math_boundingbox *r1;
	r3 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r2 = r3->context;
	r4 = r0->abstractZone;
	r1 = Urho3D__graphics_zone_get_boundingbox(r2,r4);
	return r1;
}

hl_urho3d_color* urho3d_Zone_set_ambientColor(urho3d__Zone r0,hl_urho3d_color* r1) {
	hl_urho3d_color *r2;
	hl_urho3d_graphics_zone *r5;
	urho3d___Context__$Context_Impl_ r4;
	urho3d_context *r3;
	r4 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r3 = r4->context;
	r5 = r0->abstractZone;
	r2 = Urho3D__graphics_zone_set_ambient_color(r3,r5,r1);
	return r2;
}

hl_urho3d_color* urho3d_Zone_get_ambientColor(urho3d__Zone r0) {
	hl_urho3d_color *r1;
	hl_urho3d_graphics_zone *r4;
	urho3d___Context__$Context_Impl_ r3;
	urho3d_context *r2;
	r3 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r2 = r3->context;
	r4 = r0->abstractZone;
	r1 = Urho3D__graphics_zone_get_ambient_color(r2,r4);
	return r1;
}

hl_urho3d_color* urho3d_Zone_set_fogColor(urho3d__Zone r0,hl_urho3d_color* r1) {
	hl_urho3d_color *r2;
	hl_urho3d_graphics_zone *r5;
	urho3d___Context__$Context_Impl_ r4;
	urho3d_context *r3;
	r4 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r3 = r4->context;
	r5 = r0->abstractZone;
	r2 = Urho3D__graphics_zone_set_fog_color(r3,r5,r1);
	return r2;
}

hl_urho3d_color* urho3d_Zone_get_fogColor(urho3d__Zone r0) {
	hl_urho3d_color *r1;
	hl_urho3d_graphics_zone *r4;
	urho3d___Context__$Context_Impl_ r3;
	urho3d_context *r2;
	r3 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r2 = r3->context;
	r4 = r0->abstractZone;
	r1 = Urho3D__graphics_zone_get_fog_color(r2,r4);
	return r1;
}

float urho3d_Zone_set_fogStart(urho3d__Zone r0,float r1) {
	hl_urho3d_graphics_zone *r5;
	urho3d___Context__$Context_Impl_ r4;
	urho3d_context *r3;
	float r2;
	r4 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r3 = r4->context;
	r5 = r0->abstractZone;
	r2 = Urho3D__graphics_zone_set_fog_start(r3,r5,r1);
	return r2;
}

float urho3d_Zone_get_fogStart(urho3d__Zone r0) {
	hl_urho3d_graphics_zone *r4;
	urho3d___Context__$Context_Impl_ r3;
	urho3d_context *r2;
	float r1;
	r3 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r2 = r3->context;
	r4 = r0->abstractZone;
	r1 = Urho3D__graphics_zone_get_fog_start(r2,r4);
	return r1;
}

float urho3d_Zone_set_fogEnd(urho3d__Zone r0,float r1) {
	hl_urho3d_graphics_zone *r5;
	urho3d___Context__$Context_Impl_ r4;
	urho3d_context *r3;
	float r2;
	r4 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r3 = r4->context;
	r5 = r0->abstractZone;
	r2 = Urho3D__graphics_zone_set_fog_start(r3,r5,r1);
	return r2;
}

float urho3d_Zone_get_fogEnd(urho3d__Zone r0) {
	hl_urho3d_graphics_zone *r4;
	urho3d___Context__$Context_Impl_ r3;
	urho3d_context *r2;
	float r1;
	r3 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r2 = r3->context;
	r4 = r0->abstractZone;
	r1 = Urho3D__graphics_zone_get_fog_start(r2,r4);
	return r1;
}

void urho3d_Zone_new(urho3d__Zone r0,hl_urho3d_graphics_zone* r1) {
	hl_urho3d_scene_component *r6;
	hl_urho3d_graphics_zone *r2;
	urho3d___Context__$Context_Impl_ r5;
	urho3d_context *r4;
	r2 = NULL;
	r0->abstractZone = r2;
	if( !r1 ) goto label$19ce23d_11_5;
	r0->abstractZone = r1;
	goto label$19ce23d_11_9;
	label$19ce23d_11_5:
	r5 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r4 = r5->context;
	r2 = Urho3D__graphics_zone_create(r4);
	r0->abstractZone = r2;
	label$19ce23d_11_9:
	r5 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r4 = r5->context;
	r2 = r0->abstractZone;
	r6 = Urho3D__graphics_zone_cast_to_component(r4,r2);
	urho3d_Component_new(((urho3d__Component)r0),r6);
	return;
}

