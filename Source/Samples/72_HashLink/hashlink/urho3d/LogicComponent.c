﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <urho3d/LogicComponent.h>
#include <hl/natives.h>
#include <urho3d/_Context/Context_Impl_.h>
extern urho3d___Context__$Context_Impl_ g$_urho3d__Context_Context_Impl_;
void urho3d_Component_new(urho3d__Component,hl_urho3d_scene_component*);

void urho3d_LogicComponent_Start(urho3d__LogicComponent r0) {
	return;
}

void urho3d_LogicComponent_DelayedStart(urho3d__LogicComponent r0) {
	return;
}

void urho3d_LogicComponent_Stop(urho3d__LogicComponent r0) {
	return;
}

void urho3d_LogicComponent_Update(urho3d__LogicComponent r0,double r1) {
	return;
}

void urho3d_LogicComponent_PostUpdate(urho3d__LogicComponent r0,double r1) {
	return;
}

void urho3d_LogicComponent_FixedUpdate(urho3d__LogicComponent r0,double r1) {
	return;
}

void urho3d_LogicComponent_FixedPostUpdate(urho3d__LogicComponent r0,double r1) {
	return;
}

void urho3d_LogicComponent_new(urho3d__LogicComponent r0) {
	hl_urho3d_scene_component *r6;
	urho3d___Context__$Context_Impl_ r3;
	hl_urho3d_scene_logic_component *r1, *r5;
	urho3d_context *r2;
	r1 = NULL;
	r0->abstractLogicComponent = r1;
	r3 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r2 = r3->context;
	r1 = Urho3D__scene_logic_component_create(r2,((vdynamic*)r0));
	r0->abstractLogicComponent = r1;
	r3 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r2 = r3->context;
	r5 = r0->abstractLogicComponent;
	r6 = Urho3D__scene_logic_component_cast_to_component(r2,r5);
	urho3d_Component_new(((urho3d__Component)r0),r6);
	return;
}

