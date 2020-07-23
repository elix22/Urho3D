﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <urho3d/Light.h>
#include <hl/natives.h>
#include <urho3d/_Context/Context_Impl_.h>
extern urho3d___Context__$Context_Impl_ g$_urho3d__Context_Context_Impl_;
void urho3d_Component_new(urho3d__Component,hl_urho3d_scene_component*);

int urho3d_Light_set_lightType(urho3d__Light r0,int r1) {
	urho3d___Context__$Context_Impl_ r4;
	urho3d_context *r3;
	hl_urho3d_graphics_light *r5;
	r4 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r3 = r4->context;
	r5 = r0->_abstract;
	Urho3D__graphics_light_set_light_type(r3,r5,r1);
	return r1;
}

int urho3d_Light_get_lightType(urho3d__Light r0) {
	urho3d___Context__$Context_Impl_ r3;
	urho3d_context *r2;
	hl_urho3d_graphics_light *r4;
	int r1;
	r3 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r2 = r3->context;
	r4 = r0->_abstract;
	r1 = Urho3D__graphics_light_get_light_type(r2,r4);
	return r1;
}

double urho3d_Light_set_range(urho3d__Light r0,double r1) {
	urho3d___Context__$Context_Impl_ r4;
	urho3d_context *r3;
	hl_urho3d_graphics_light *r5;
	r4 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r3 = r4->context;
	r5 = r0->_abstract;
	Urho3D__graphics_light_set_range(r3,r5,r1);
	return r1;
}

double urho3d_Light_get_range(urho3d__Light r0) {
	urho3d___Context__$Context_Impl_ r3;
	urho3d_context *r2;
	hl_urho3d_graphics_light *r4;
	double r1;
	r3 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r2 = r3->context;
	r4 = r0->_abstract;
	r1 = Urho3D__graphics_light_get_range(r2,r4);
	return r1;
}

void urho3d_Light_new(urho3d__Light r0,hl_urho3d_graphics_light* r1) {
	hl_urho3d_scene_component *r6;
	urho3d___Context__$Context_Impl_ r5;
	urho3d_context *r4;
	hl_urho3d_graphics_light *r2;
	r2 = NULL;
	r0->_abstract = r2;
	if( !r1 ) goto label$ff815c4_5_5;
	r0->_abstract = r1;
	goto label$ff815c4_5_9;
	label$ff815c4_5_5:
	r5 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r4 = r5->context;
	r2 = Urho3D__graphics_light_create(r4);
	r0->_abstract = r2;
	label$ff815c4_5_9:
	r5 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r4 = r5->context;
	r2 = r0->_abstract;
	r6 = Urho3D__graphics_light_cast_to_component(r4,r2);
	urho3d_Component_new(((urho3d__Component)r0),r6);
	return;
}

