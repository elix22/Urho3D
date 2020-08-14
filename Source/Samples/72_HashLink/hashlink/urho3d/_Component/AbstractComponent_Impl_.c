﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <urho3d/_Component/AbstractComponent_Impl_.h>
#include <hl/natives.h>
#include <urho3d/_Context/Context_Impl_.h>
extern urho3d___Context__$Context_Impl_ g$_urho3d__Context_Context_Impl_;
extern hl_type t$urho3d_Component;
void urho3d_Component_new(urho3d__Component,hl_urho3d_scene_component*);
extern hl_type t$urho3d_Zone;
void urho3d_Zone_new(urho3d__Zone,hl_urho3d_graphics_zone*);
extern hl_type t$urho3d_StaticModel;
void urho3d_StaticModel_new(urho3d__StaticModel,hl_urho3d_graphics_staticmodel*);
extern hl_type t$urho3d_AnimatedModel;
void urho3d_AnimatedModel_new(urho3d__AnimatedModel,hl_urho3d_graphics_animatedmodel*);
extern hl_type t$urho3d_Camera;
void urho3d_Camera_new(urho3d__Camera,hl_urho3d_graphics_camera*);
extern hl_type t$urho3d_Light;
void urho3d_Light_new(urho3d__Light,hl_urho3d_graphics_light*);
extern hl_type t$urho3d_BillboardSet;
void urho3d_BillboardSet_new(urho3d__BillboardSet,hl_urho3d_graphics_billboardset*);
extern hl_type t$urho3d_DecalSet;
void urho3d_DecalSet_new(urho3d__DecalSet,hl_urho3d_graphics_decalset*);
extern hl_type t$urho3d_RigidBody;
void urho3d_RigidBody_new(urho3d__RigidBody,hl_urho3d_physics_rigid_body*);
extern hl_type t$urho3d_CollisionShape;
void urho3d_CollisionShape_new(urho3d__CollisionShape,hl_urho3d_physics_collision_shape*);
extern hl_type t$urho3d_Skybox;
void urho3d_Skybox_new(urho3d__Skybox,hl_urho3d_graphics_skybox*);

hl_urho3d_scene_component* urho3d__Component_AbstractComponent_Impl___new() {
	hl_urho3d_scene_component *r0;
	urho3d___Context__$Context_Impl_ r2;
	urho3d_context *r1;
	r2 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r1 = r2->context;
	r0 = Urho3D__scene_component_create(r1);
	return r0;
}

urho3d__Component urho3d__Component_AbstractComponent_Impl__toComponent(hl_urho3d_scene_component* r0) {
	urho3d__Component r2;
	if( !r0 ) goto label$3b3ff52_2_4;
	r2 = (urho3d__Component)hl_alloc_obj(&t$urho3d_Component);
	urho3d_Component_new(r2,r0);
	return r2;
	label$3b3ff52_2_4:
	r2 = NULL;
	return r2;
}

urho3d__Zone urho3d__Component_AbstractComponent_Impl__toZone(hl_urho3d_scene_component* r0) {
	hl_urho3d_graphics_zone *r2;
	urho3d___Context__$Context_Impl_ r4;
	urho3d__Zone r5;
	urho3d_context *r3;
	if( !r0 ) goto label$3b3ff52_3_7;
	r4 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r3 = r4->context;
	r2 = Urho3D__graphics_zone_cast_from_component(r3,r0);
	r5 = (urho3d__Zone)hl_alloc_obj(&t$urho3d_Zone);
	urho3d_Zone_new(r5,r2);
	return r5;
	label$3b3ff52_3_7:
	r5 = NULL;
	return r5;
}

urho3d__StaticModel urho3d__Component_AbstractComponent_Impl__toStaticModel(hl_urho3d_scene_component* r0) {
	urho3d__StaticModel r5;
	urho3d___Context__$Context_Impl_ r4;
	urho3d_context *r3;
	hl_urho3d_graphics_staticmodel *r2;
	if( !r0 ) goto label$3b3ff52_4_7;
	r4 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r3 = r4->context;
	r2 = Urho3D__graphics_staticmodel_cast_from_component(r3,r0);
	r5 = (urho3d__StaticModel)hl_alloc_obj(&t$urho3d_StaticModel);
	urho3d_StaticModel_new(r5,r2);
	return r5;
	label$3b3ff52_4_7:
	r5 = NULL;
	return r5;
}

urho3d__AnimatedModel urho3d__Component_AbstractComponent_Impl__toAnimatedModel(hl_urho3d_scene_component* r0) {
	urho3d__AnimatedModel r5;
	urho3d___Context__$Context_Impl_ r4;
	urho3d_context *r3;
	hl_urho3d_graphics_animatedmodel *r2;
	if( !r0 ) goto label$3b3ff52_5_7;
	r4 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r3 = r4->context;
	r2 = Urho3D__graphics_animatedmodel_cast_from_component(r3,r0);
	r5 = (urho3d__AnimatedModel)hl_alloc_obj(&t$urho3d_AnimatedModel);
	urho3d_AnimatedModel_new(r5,r2);
	return r5;
	label$3b3ff52_5_7:
	r5 = NULL;
	return r5;
}

urho3d__Camera urho3d__Component_AbstractComponent_Impl__toCamera(hl_urho3d_scene_component* r0) {
	urho3d__Camera r5;
	urho3d___Context__$Context_Impl_ r4;
	hl_urho3d_graphics_camera *r2;
	urho3d_context *r3;
	if( !r0 ) goto label$3b3ff52_6_7;
	r4 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r3 = r4->context;
	r2 = Urho3D__graphics_camera_cast_from_component(r3,r0);
	r5 = (urho3d__Camera)hl_alloc_obj(&t$urho3d_Camera);
	urho3d_Camera_new(r5,r2);
	return r5;
	label$3b3ff52_6_7:
	r5 = NULL;
	return r5;
}

urho3d__Light urho3d__Component_AbstractComponent_Impl__toLight(hl_urho3d_scene_component* r0) {
	urho3d___Context__$Context_Impl_ r4;
	urho3d_context *r3;
	urho3d__Light r5;
	hl_urho3d_graphics_light *r2;
	if( !r0 ) goto label$3b3ff52_7_7;
	r4 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r3 = r4->context;
	r2 = Urho3D__graphics_light_cast_from_component(r3,r0);
	r5 = (urho3d__Light)hl_alloc_obj(&t$urho3d_Light);
	urho3d_Light_new(r5,r2);
	return r5;
	label$3b3ff52_7_7:
	r5 = NULL;
	return r5;
}

urho3d__BillboardSet urho3d__Component_AbstractComponent_Impl__toBillboardset(hl_urho3d_scene_component* r0) {
	urho3d__BillboardSet r5;
	hl_urho3d_graphics_billboardset *r2;
	urho3d___Context__$Context_Impl_ r4;
	urho3d_context *r3;
	if( !r0 ) goto label$3b3ff52_8_7;
	r4 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r3 = r4->context;
	r2 = Urho3D__graphics_billboardset_cast_from_component(r3,r0);
	r5 = (urho3d__BillboardSet)hl_alloc_obj(&t$urho3d_BillboardSet);
	urho3d_BillboardSet_new(r5,r2);
	return r5;
	label$3b3ff52_8_7:
	r5 = NULL;
	return r5;
}

urho3d__DecalSet urho3d__Component_AbstractComponent_Impl__toDecalset(hl_urho3d_scene_component* r0) {
	urho3d__DecalSet r5;
	hl_urho3d_graphics_decalset *r2;
	urho3d___Context__$Context_Impl_ r4;
	urho3d_context *r3;
	if( !r0 ) goto label$3b3ff52_9_10;
	r4 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r3 = r4->context;
	r2 = Urho3D__graphics_decalset_cast_from_component(r3,r0);
	if( !r2 ) goto label$3b3ff52_9_8;
	r5 = (urho3d__DecalSet)hl_alloc_obj(&t$urho3d_DecalSet);
	urho3d_DecalSet_new(r5,r2);
	return r5;
	label$3b3ff52_9_8:
	r5 = NULL;
	return r5;
	label$3b3ff52_9_10:
	r5 = NULL;
	return r5;
}

urho3d__RigidBody urho3d__Component_AbstractComponent_Impl__toRigidBody(hl_urho3d_scene_component* r0) {
	hl_urho3d_physics_rigid_body *r2;
	urho3d__RigidBody r5;
	urho3d___Context__$Context_Impl_ r4;
	urho3d_context *r3;
	if( !r0 ) goto label$3b3ff52_10_10;
	r4 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r3 = r4->context;
	r2 = Urho3D__physics_rigid_body_cast_from_component(r3,r0);
	if( !r2 ) goto label$3b3ff52_10_8;
	r5 = (urho3d__RigidBody)hl_alloc_obj(&t$urho3d_RigidBody);
	urho3d_RigidBody_new(r5,r2);
	return r5;
	label$3b3ff52_10_8:
	r5 = NULL;
	return r5;
	label$3b3ff52_10_10:
	r5 = NULL;
	return r5;
}

urho3d__CollisionShape urho3d__Component_AbstractComponent_Impl__toCollisionShape(hl_urho3d_scene_component* r0) {
	urho3d__CollisionShape r5;
	urho3d___Context__$Context_Impl_ r4;
	urho3d_context *r3;
	hl_urho3d_physics_collision_shape *r2;
	if( !r0 ) goto label$3b3ff52_11_10;
	r4 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r3 = r4->context;
	r2 = Urho3D__physics_collision_shape_cast_from_component(r3,r0);
	if( !r2 ) goto label$3b3ff52_11_8;
	r5 = (urho3d__CollisionShape)hl_alloc_obj(&t$urho3d_CollisionShape);
	urho3d_CollisionShape_new(r5,r2);
	return r5;
	label$3b3ff52_11_8:
	r5 = NULL;
	return r5;
	label$3b3ff52_11_10:
	r5 = NULL;
	return r5;
}

urho3d__Skybox urho3d__Component_AbstractComponent_Impl__toSkybox(hl_urho3d_scene_component* r0) {
	urho3d__Skybox r5;
	urho3d___Context__$Context_Impl_ r4;
	hl_urho3d_graphics_skybox *r2;
	urho3d_context *r3;
	if( !r0 ) goto label$3b3ff52_12_10;
	r4 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r3 = r4->context;
	r2 = Urho3D__graphics_skybox_cast_from_component(r3,r0);
	if( !r2 ) goto label$3b3ff52_12_8;
	r5 = (urho3d__Skybox)hl_alloc_obj(&t$urho3d_Skybox);
	urho3d_Skybox_new(r5,r2);
	return r5;
	label$3b3ff52_12_8:
	r5 = NULL;
	return r5;
	label$3b3ff52_12_10:
	r5 = NULL;
	return r5;
}

void urho3d__Component_AbstractComponent_Impl__SubscribeToEvent(hl_urho3d_scene_component* r0,hl_urho3d_stringhash* r1,vdynamic* r2,String r3) {
	urho3d___Context__$Context_Impl_ r6;
	urho3d_context *r5;
	r6 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r5 = r6->context;
	Urho3D__scene_component_subscribe_to_event(r5,r0,r1,r2,r3);
	return;
}

