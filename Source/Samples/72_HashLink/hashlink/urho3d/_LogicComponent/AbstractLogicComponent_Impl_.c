﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <urho3d/_LogicComponent/AbstractLogicComponent_Impl_.h>
#include <hl/natives.h>
#include <urho3d/_Context/Context_Impl_.h>
extern urho3d___Context__$Context_Impl_ g$_urho3d__Context_Context_Impl_;

hl_urho3d_scene_logic_component* urho3d__LogicComponent_AbstractLogicComponent_Impl___new(vdynamic* r0) {
	urho3d___Context__$Context_Impl_ r3;
	hl_urho3d_scene_logic_component *r1;
	urho3d_context *r2;
	r3 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r2 = r3->context;
	r1 = Urho3D__scene_logic_component_create(r2,r0);
	return r1;
}

