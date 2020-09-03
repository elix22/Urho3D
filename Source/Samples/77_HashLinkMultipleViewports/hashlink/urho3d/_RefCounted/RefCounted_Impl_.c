﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <urho3d/_RefCounted/RefCounted_Impl_.h>
#include <hl/natives.h>
#include <urho3d/_Context/Context_Impl_.h>
extern urho3d___Context__$Context_Impl_ g$_urho3d__Context_Context_Impl_;
extern hl_type t$urho3d_Node;
void urho3d_Node_new(urho3d__Node,hl_urho3d_scene_node*);
extern hl_type t$urho3d_RigidBody;
void urho3d_RigidBody_new(urho3d__RigidBody,hl_urho3d_physics_rigid_body*);

urho3d__Node urho3d__RefCounted_RefCounted_Impl__ToNode(urho3d_refcounted* r0) {
	urho3d__Node r5;
	urho3d___Context__$Context_Impl_ r3;
	hl_urho3d_scene_node *r6;
	urho3d_context *r2;
	hl_urho3d_scene_t_node *r1;
	r3 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r2 = r3->context;
	r1 = Urho3D__container_refcounted_cast_to_t_node(r2,r0);
	r5 = (urho3d__Node)hl_alloc_obj(&t$urho3d_Node);
	r3 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r2 = r3->context;
	r6 = Urho3D__scene_t_node_cast_to_node(r2,r1);
	urho3d_Node_new(r5,r6);
	return r5;
}

hl_urho3d_scene_t_node* urho3d__RefCounted_RefCounted_Impl__ToTNode(urho3d_refcounted* r0) {
	urho3d___Context__$Context_Impl_ r3;
	urho3d_context *r2;
	hl_urho3d_scene_t_node *r1;
	r3 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r2 = r3->context;
	r1 = Urho3D__container_refcounted_cast_to_t_node(r2,r0);
	return r1;
}

urho3d__RigidBody urho3d__RefCounted_RefCounted_Impl__ToRigidBody(urho3d_refcounted* r0) {
	hl_urho3d_physics_rigid_body *r6;
	urho3d__RigidBody r5;
	hl_urho3d_physics_t_rigid_body *r1;
	urho3d___Context__$Context_Impl_ r3;
	urho3d_context *r2;
	r3 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r2 = r3->context;
	r1 = Urho3D__container_refcounted_cast_to_t_rigid_body(r2,r0);
	r5 = (urho3d__RigidBody)hl_alloc_obj(&t$urho3d_RigidBody);
	r3 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r2 = r3->context;
	r6 = Urho3D__physics_t_rigid_body_cast_to_rigid_body(r2,r1);
	urho3d_RigidBody_new(r5,r6);
	return r5;
}

hl_urho3d_physics_t_rigid_body* urho3d__RefCounted_RefCounted_Impl__ToTRigidBody(urho3d_refcounted* r0) {
	hl_urho3d_physics_t_rigid_body *r1;
	urho3d___Context__$Context_Impl_ r3;
	urho3d_context *r2;
	r3 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r2 = r3->context;
	r1 = Urho3D__container_refcounted_cast_to_t_rigid_body(r2,r0);
	return r1;
}

