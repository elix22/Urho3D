﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <urho3d/Scene.h>
#include <hl/natives.h>
#include <urho3d/_Context/Context_Impl_.h>
extern urho3d___Context__$Context_Impl_ g$_urho3d__Context_Context_Impl_;
extern hl_type t$urho3d_Node;
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
void urho3d_Node_new(urho3d__Node,hl_urho3d_scene_node*);

hl_urho3d_graphics_octree* urho3d_Scene_get_octree(urho3d__Scene r0) {
	urho3d___Context__$Context_Impl_ r3;
	urho3d_context *r2;
	hl_urho3d_scene_scene *r4;
	hl_urho3d_graphics_octree *r1;
	r3 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r2 = r3->context;
	r4 = r0->abstractScene;
	r1 = Urho3D__scene_scene_get_octree(r2,r4);
	return r1;
}

void urho3d_Scene_new(urho3d__Scene r0,hl_urho3d_scene_scene* r1) {
	hl__types__ArrayObj r3;
	hl_type *r5;
	urho3d___Context__$Context_Impl_ r9;
	hl_urho3d_scene_node *r10;
	urho3d_context *r8;
	hl_urho3d_scene_scene *r2;
	int r6;
	varray *r4;
	r2 = NULL;
	r0->abstractScene = r2;
	r5 = &t$urho3d_Node;
	r6 = 0;
	r4 = hl_alloc_array(r5,r6);
	r3 = hl_types_ArrayObj_alloc(r4);
	r0->nodes = r3;
	if( !r1 ) goto label$27beee0_2_10;
	r0->abstractScene = r1;
	goto label$27beee0_2_14;
	label$27beee0_2_10:
	r9 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r8 = r9->context;
	r2 = Urho3D__scene_scene_create(r8);
	r0->abstractScene = r2;
	label$27beee0_2_14:
	r9 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r8 = r9->context;
	r2 = r0->abstractScene;
	r10 = Urho3D__scene_scene_cast_to_node(r8,r2);
	urho3d_Node_new(((urho3d__Node)r0),r10);
	return;
}

