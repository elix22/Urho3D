﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <urho3d/_AnimatedModel/AbstractAnimatedModel_Impl_.h>
#include <hl/natives.h>
#include <urho3d/_Context/Context_Impl_.h>
extern urho3d___Context__$Context_Impl_ g$_urho3d__Context_Context_Impl_;
extern hl_type t$urho3d_AnimatedModel;
void urho3d_AnimatedModel_new(urho3d__AnimatedModel,hl_urho3d_graphics_animatedmodel*);

hl_urho3d_graphics_animatedmodel* urho3d__AnimatedModel_AbstractAnimatedModel_Impl___new() {
	urho3d___Context__$Context_Impl_ r2;
	urho3d_context *r1;
	hl_urho3d_graphics_animatedmodel *r0;
	r2 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r1 = r2->context;
	r0 = Urho3D__graphics_animatedmodel_create(r1);
	return r0;
}

urho3d__AnimatedModel urho3d__AnimatedModel_AbstractAnimatedModel_Impl__toAnimatedModel(hl_urho3d_graphics_animatedmodel* r0) {
	urho3d__AnimatedModel r1;
	r1 = (urho3d__AnimatedModel)hl_alloc_obj(&t$urho3d_AnimatedModel);
	urho3d_AnimatedModel_new(r1,r0);
	return r1;
}

