﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <urho3d/AnimatedModel.h>
#include <hl/natives.h>
#include <urho3d/_Context/Context_Impl_.h>
extern urho3d___Context__$Context_Impl_ g$_urho3d__Context_Context_Impl_;
void urho3d_Component_new(urho3d__Component,hl_urho3d_scene_component*);

bool urho3d_AnimatedModel_set_updateInvisible(urho3d__AnimatedModel r0,bool r1) {
	urho3d___Context__$Context_Impl_ r4;
	urho3d_context *r3;
	hl_urho3d_graphics_animatedmodel *r5;
	r4 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r3 = r4->context;
	r5 = r0->_abstract;
	Urho3D__graphics_animatedmodel_set_update_invisible(r3,r5,r1);
	return r1;
}

bool urho3d_AnimatedModel_get_updateInvisible(urho3d__AnimatedModel r0) {
	bool r1;
	urho3d___Context__$Context_Impl_ r3;
	urho3d_context *r2;
	hl_urho3d_graphics_animatedmodel *r4;
	r3 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r2 = r3->context;
	r4 = r0->_abstract;
	r1 = Urho3D__graphics_animatedmodel_get_update_invisible(r2,r4);
	return r1;
}

bool urho3d_AnimatedModel_set_occluder(urho3d__AnimatedModel r0,bool r1) {
	urho3d___Context__$Context_Impl_ r4;
	urho3d_context *r3;
	hl_urho3d_graphics_animatedmodel *r5;
	r4 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r3 = r4->context;
	r5 = r0->_abstract;
	Urho3D__graphics_animatedmodel_set_occluder(r3,r5,r1);
	return r1;
}

bool urho3d_AnimatedModel_get_occluder(urho3d__AnimatedModel r0) {
	bool r1;
	urho3d___Context__$Context_Impl_ r3;
	urho3d_context *r2;
	hl_urho3d_graphics_animatedmodel *r4;
	r3 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r2 = r3->context;
	r4 = r0->_abstract;
	r1 = Urho3D__graphics_animatedmodel_get_occluder(r2,r4);
	return r1;
}

bool urho3d_AnimatedModel_set_occludee(urho3d__AnimatedModel r0,bool r1) {
	urho3d___Context__$Context_Impl_ r4;
	urho3d_context *r3;
	hl_urho3d_graphics_animatedmodel *r5;
	r4 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r3 = r4->context;
	r5 = r0->_abstract;
	Urho3D__graphics_animatedmodel_set_occludee(r3,r5,r1);
	return r1;
}

bool urho3d_AnimatedModel_get_occludee(urho3d__AnimatedModel r0) {
	bool r1;
	urho3d___Context__$Context_Impl_ r3;
	urho3d_context *r2;
	hl_urho3d_graphics_animatedmodel *r4;
	r3 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r2 = r3->context;
	r4 = r0->_abstract;
	r1 = Urho3D__graphics_animatedmodel_get_occludee(r2,r4);
	return r1;
}

hl_urho3d_graphics_model* urho3d_AnimatedModel_set_model(urho3d__AnimatedModel r0,hl_urho3d_graphics_model* r1) {
	urho3d___Context__$Context_Impl_ r4;
	urho3d_context *r3;
	hl_urho3d_graphics_animatedmodel *r5;
	r4 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r3 = r4->context;
	r5 = r0->_abstract;
	Urho3D__graphics_animatedmodel_set_model(r3,r5,r1);
	return r1;
}

hl_urho3d_graphics_model* urho3d_AnimatedModel_get_model(urho3d__AnimatedModel r0) {
	urho3d___Context__$Context_Impl_ r3;
	urho3d_context *r2;
	hl_urho3d_graphics_animatedmodel *r4;
	hl_urho3d_graphics_model *r1;
	r3 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r2 = r3->context;
	r4 = r0->_abstract;
	r1 = Urho3D__graphics_animatedmodel_get_model(r2,r4);
	return r1;
}

hl_urho3d_graphics_material* urho3d_AnimatedModel_set_material(urho3d__AnimatedModel r0,hl_urho3d_graphics_material* r1) {
	urho3d___Context__$Context_Impl_ r4;
	urho3d_context *r3;
	hl_urho3d_graphics_animatedmodel *r5;
	r4 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r3 = r4->context;
	r5 = r0->_abstract;
	Urho3D__graphics_animatedmodel_set_material(r3,r5,r1);
	return r1;
}

hl_urho3d_graphics_material* urho3d_AnimatedModel_get_material(urho3d__AnimatedModel r0) {
	urho3d___Context__$Context_Impl_ r3;
	hl_urho3d_graphics_material *r1;
	urho3d_context *r2;
	hl_urho3d_graphics_animatedmodel *r4;
	r3 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r2 = r3->context;
	r4 = r0->_abstract;
	r1 = Urho3D__graphics_animatedmodel_get_material(r2,r4);
	return r1;
}

bool urho3d_AnimatedModel_set_castShadows(urho3d__AnimatedModel r0,bool r1) {
	urho3d___Context__$Context_Impl_ r4;
	urho3d_context *r3;
	hl_urho3d_graphics_animatedmodel *r5;
	r4 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r3 = r4->context;
	r5 = r0->_abstract;
	Urho3D__graphics_animatedmodel_set_cast_shadows(r3,r5,r1);
	return r1;
}

bool urho3d_AnimatedModel_get_castShadows(urho3d__AnimatedModel r0) {
	bool r1;
	urho3d___Context__$Context_Impl_ r3;
	urho3d_context *r2;
	hl_urho3d_graphics_animatedmodel *r4;
	r3 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r2 = r3->context;
	r4 = r0->_abstract;
	r1 = Urho3D__graphics_animatedmodel_get_cast_shadows(r2,r4);
	return r1;
}

hl_urho3d_graphics_tanimation_state* urho3d_AnimatedModel_AddAnimationState(urho3d__AnimatedModel r0,hl_urho3d_graphics_animation* r1) {
	urho3d___Context__$Context_Impl_ r4;
	hl_urho3d_graphics_tanimation_state *r2;
	urho3d_context *r3;
	hl_urho3d_graphics_animatedmodel *r5;
	r4 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r3 = r4->context;
	r5 = r0->_abstract;
	r2 = Urho3D__graphics_animatedmodel_add_animation_state(r3,r5,r1);
	return r2;
}

hl_urho3d_graphics_tanimation_state* urho3d_AnimatedModel_GetAnimationState(urho3d__AnimatedModel r0,int r1) {
	urho3d___Context__$Context_Impl_ r4;
	hl_urho3d_graphics_tanimation_state *r2;
	urho3d_context *r3;
	hl_urho3d_graphics_animatedmodel *r5;
	r4 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r3 = r4->context;
	r5 = r0->_abstract;
	r2 = Urho3D__graphics_animatedmodel_get_animation_state(r3,r5,r1);
	return r2;
}

hl_urho3d_graphics_skeleton* urho3d_AnimatedModel_get_skeleton(urho3d__AnimatedModel r0) {
	hl_urho3d_graphics_skeleton *r1;
	urho3d___Context__$Context_Impl_ r3;
	urho3d_context *r2;
	hl_urho3d_graphics_animatedmodel *r4;
	r3 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r2 = r3->context;
	r4 = r0->_abstract;
	r1 = Urho3D__graphics_animatedmodel_get_skeleton(r2,r4);
	return r1;
}

void urho3d_AnimatedModel_new(urho3d__AnimatedModel r0,hl_urho3d_graphics_animatedmodel* r1) {
	hl_urho3d_scene_component *r6;
	urho3d___Context__$Context_Impl_ r5;
	urho3d_context *r4;
	hl_urho3d_graphics_animatedmodel *r2;
	r2 = NULL;
	r0->_abstract = r2;
	if( !r1 ) goto label$324d521_16_5;
	r0->_abstract = r1;
	goto label$324d521_16_9;
	label$324d521_16_5:
	r5 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r4 = r5->context;
	r2 = Urho3D__graphics_animatedmodel_create(r4);
	r0->_abstract = r2;
	label$324d521_16_9:
	r5 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r4 = r5->context;
	r2 = r0->_abstract;
	r6 = Urho3D__graphics_animatedmodel_cast_to_component(r4,r2);
	urho3d_Component_new(((urho3d__Component)r0),r6);
	return;
}

