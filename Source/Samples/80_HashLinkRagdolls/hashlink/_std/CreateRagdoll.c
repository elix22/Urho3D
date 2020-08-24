﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <_std/CreateRagdoll.h>
void urho3d_LogicComponent_new(urho3d__LogicComponent,vdynamic*);
#include <hl/natives.h>
#include <urho3d/_Context/Context_Impl_.h>
urho3d__Node urho3d_Component_get_node(urho3d__Component);
extern urho3d___Context__$Context_Impl_ g$_urho3d__Context_Context_Impl_;
extern String s$NodeCollisionStart;
extern String s$HandleNodeCollision;
void urho3d_Component_SubscribeToEvent(urho3d__Component,hl_urho3d_core_object*,hl_urho3d_stringhash*,String);
#include <urho3d/RigidBody.h>
#include <urho3d/_Vector3/Vector3_Impl_.h>
#include <urho3d/_Vector2/Vector2_Impl_.h>
extern String s$OtherBody;
extern hl_type t$urho3d_RigidBody;
void urho3d_RigidBody_new(urho3d__RigidBody,hl_urho3d_physics_rigid_body*);
float urho3d_RigidBody_get_mass(urho3d__RigidBody);
extern String s$RigidBody;
void urho3d_Node_RemoveComponent(urho3d__Node,String,urho3d__Component);
extern String s$CollisionShape;
extern String s$Bip01_Pelvis;
void CreateRagdoll_CreateRagdollBone(CreateRagdoll,String,int,hl_urho3d_math_vector3*,hl_urho3d_math_vector3*,hl_urho3d_math_quaternion*);
extern String s$Bip01_Spine1;
extern String s$Bip01_L_Thigh;
extern String s$Bip01_R_Thigh;
extern String s$Bip01_L_Calf;
extern String s$Bip01_R_Calf;
extern String s$Bip01_Head;
extern String s$Bip01_L_UpperArm;
extern String s$Bip01_R_UpperArm;
extern String s$Bip01_L_Forearm;
extern String s$Bip01_R_Forearm;
extern urho3d___Vector3__$Vector3_Impl_ g$_urho3d__Vector3_Vector3_Impl_;
extern urho3d___Vector2__$Vector2_Impl_ g$_urho3d__Vector2_Vector2_Impl_;
void CreateRagdoll_CreateRagdollConstraint(CreateRagdoll,String,String,int,hl_urho3d_math_vector3*,hl_urho3d_math_vector3*,hl_urho3d_math_vector2*,hl_urho3d_math_vector2*,bool*);
#include <hl/types/ArrayDyn.h>
#include <haxe/Log.h>
#include <urho3d/CollisionShape.h>
urho3d__Node urho3d_Node_GetChild(urho3d__Node,String,bool*);
extern haxe__$Log g$_haxe_Log;
extern String s$Could_not_find_bone_;
String String___add__(String,String);
extern String s$6815feb;
extern hl_type t$vrt_329ffa8;
extern String s$src_haxe_RagdollsSample_hx;
extern hl_type t$String;
extern hl_type t$_i32;
extern String s$CreateRagdoll;
extern String s$CreateRagdollBone;
extern hl_type t$vrt_eaa6a3b;
hl_urho3d_scene_component* urho3d_Node_CreateComponent(urho3d__Node,String,int*,int*);
float urho3d_RigidBody_set_mass(urho3d__RigidBody,float);
float urho3d_RigidBody_set_linearDamping(urho3d__RigidBody,float);
float urho3d_RigidBody_set_angularDamping(urho3d__RigidBody,float);
float urho3d_RigidBody_set_linearRestThreshold(urho3d__RigidBody,float);
float urho3d_RigidBody_set_angularRestThreshold(urho3d__RigidBody,float);
extern hl_type t$urho3d_CollisionShape;
void urho3d_CollisionShape_new(urho3d__CollisionShape,hl_urho3d_physics_collision_shape*);
#include <urho3d/Constraint.h>
extern String s$_for_creating_ragdoll_constraint;
extern String s$CreateRagdollConstraint;
extern String s$Constraint;
extern hl_type t$urho3d_Constraint;
void urho3d_Constraint_new(urho3d__Constraint,hl_urho3d_physics_constraint*);
int urho3d_Constraint_set_constraintType(urho3d__Constraint,int);
bool urho3d_Constraint_set_disableCollision(urho3d__Constraint,bool);
hl_urho3d_scene_component* urho3d_Node_GetComponent(urho3d__Node,String,bool*);
hl_urho3d_physics_rigid_body* urho3d_Constraint_set_otherBody(urho3d__Constraint,hl_urho3d_physics_rigid_body*);
hl_urho3d_math_tvector3* urho3d_Node_get_worldPosition(urho3d__Node);
hl_urho3d_math_tvector3* urho3d_Constraint_set_worldPosition(urho3d__Constraint,hl_urho3d_math_tvector3*);
hl_urho3d_math_tvector3* urho3d_Constraint_set_axis(urho3d__Constraint,hl_urho3d_math_tvector3*);
hl_urho3d_math_tvector3* urho3d_Constraint_set_otherAxis(urho3d__Constraint,hl_urho3d_math_tvector3*);
hl_urho3d_math_tvector2* urho3d_Constraint_set_highLimit(urho3d__Constraint,hl_urho3d_math_tvector2*);
hl_urho3d_math_tvector2* urho3d_Constraint_set_lowLimit(urho3d__Constraint,hl_urho3d_math_tvector2*);

void CreateRagdoll_new(CreateRagdoll r0) {
	vdynamic *r2;
	r2 = NULL;
	urho3d_LogicComponent_new(((urho3d__LogicComponent)r0),r2);
	return;
}

void CreateRagdoll_Start(CreateRagdoll r0) {
	String r8;
	hl_urho3d_stringhash *r7;
	hl_urho3d_core_object *r3;
	urho3d__Node r1;
	urho3d___Context__$Context_Impl_ r5;
	hl_urho3d_scene_node *r6;
	urho3d_context *r4;
	r1 = urho3d_Component_get_node(((urho3d__Component)r0));
	r5 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r4 = r5->context;
	if( r1 == NULL ) hl_null_access();
	r6 = r1->abstractNode;
	r3 = Urho3D__core_object_cast_from_node(r4,r6);
	r8 = (String)s$NodeCollisionStart;
	r7 = Urho3D__create_stringhash(r8);
	r8 = (String)s$HandleNodeCollision;
	urho3d_Component_SubscribeToEvent(((urho3d__Component)r0),r3,r7,r8);
	return;
}

void CreateRagdoll_HandleNodeCollision(CreateRagdoll r0,hl_urho3d_stringhash* r1,hl_urho3d_variantmap* r2) {
	bool *r74;
	String r6, r68;
	hl_urho3d_physics_rigid_body *r10;
	hl_urho3d_scene_component *r7;
	bool r94, r98;
	urho3d___Vector3__$Vector3_Impl_ r66;
	urho3d__RigidBody r11;
	hl_urho3d_core_object *r4;
	hl_urho3d_math_quaternion *r23, *r28, *r32, *r36, *r40, *r44, *r48, *r52, *r56, *r60, *r63;
	hl_urho3d_math_vector3 *r17, *r20, *r25, *r26, *r29, *r30, *r33, *r34, *r37, *r38, *r41, *r42, *r45, *r46, *r49, *r50, *r53, *r54, *r57, *r58, *r61, *r62, *r64, *r65, *r69, *r70, *r75, *r76, *r78, *r79, *r81, *r82, *r84, *r85, *r88, *r89, *r91, *r92, *r95, *r96, *r99, *r100;
	urho3d__Node r15;
	hl_urho3d_tvariant *r5;
	urho3d___Vector2__$Vector2_Impl_ r73;
	hl_urho3d_math_vector2 *r67, *r71, *r72, *r77, *r80, *r83, *r86, *r87, *r90, *r93, *r97, *r101, *r102;
	urho3d__Component r16;
	urho3d___Context__$Context_Impl_ r9;
	float r12, r18, r19;
	urho3d_context *r8;
	double r13, r14;
	hl_urho3d_math_tvector3 *r21, *r22, *r27, *r31, *r35, *r39, *r43, *r47, *r51, *r55, *r59;
	int r24;
	r6 = (String)s$OtherBody;
	r5 = Urho3D__core_variantmap_get_key_string_value(r2,r6);
	r4 = Urho3D__tvariant_get_object(r5);
	r9 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r8 = r9->context;
	r7 = Urho3D__core_object_cast_to_component(r8,r4);
	if( !r7 ) goto label$ef7054a_3_16;
	r9 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r8 = r9->context;
	r10 = Urho3D__physics_rigid_body_cast_from_component(r8,r7);
	if( !r10 ) goto label$ef7054a_3_14;
	r11 = (urho3d__RigidBody)hl_alloc_obj(&t$urho3d_RigidBody);
	urho3d_RigidBody_new(r11,r10);
	goto label$ef7054a_3_15;
	label$ef7054a_3_14:
	r11 = NULL;
	label$ef7054a_3_15:
	goto label$ef7054a_3_17;
	label$ef7054a_3_16:
	r11 = NULL;
	label$ef7054a_3_17:
	if( r11 == NULL ) hl_null_access();
	r12 = urho3d_RigidBody_get_mass(r11);
	r13 = (double)r12;
	r14 = 0.;
	if( !(r14 < r13) ) goto label$ef7054a_3_527;
	r15 = urho3d_Component_get_node(((urho3d__Component)r0));
	if( r15 == NULL ) hl_null_access();
	r6 = (String)s$RigidBody;
	r16 = NULL;
	urho3d_Node_RemoveComponent(r15,r6,r16);
	r15 = urho3d_Component_get_node(((urho3d__Component)r0));
	if( r15 == NULL ) hl_null_access();
	r6 = (String)s$CollisionShape;
	r16 = NULL;
	urho3d_Node_RemoveComponent(r15,r6,r16);
	r13 = 0.2999999999999999889;
	r12 = (float)r13;
	r13 = 0.2000000000000000111;
	r18 = (float)r13;
	r13 = 0.25;
	r19 = (float)r13;
	r17 = Urho3D__math_vector3_create(r12,r18,r19);
	r13 = 0.;
	r12 = (float)r13;
	r13 = 0.;
	r18 = (float)r13;
	r13 = 0.;
	r19 = (float)r13;
	r20 = Urho3D__math_vector3_create(r12,r18,r19);
	r21 = NULL;
	if( !r21 ) goto label$ef7054a_3_52;
	r13 = 0.;
	r12 = (float)r13;
	r23 = Urho3D__math_quaternion_create_fv(r12,r21);
	goto label$ef7054a_3_59;
	label$ef7054a_3_52:
	r13 = 0.;
	r12 = (float)r13;
	r13 = 0.;
	r18 = (float)r13;
	r13 = 0.;
	r19 = (float)r13;
	r23 = Urho3D__math_quaternion_create(r12,r18,r19);
	label$ef7054a_3_59:
	r6 = (String)s$Bip01_Pelvis;
	r24 = 0;
	CreateRagdoll_CreateRagdollBone(r0,r6,r24,r17,r20,r23);
	r13 = 0.3499999999999999778;
	r12 = (float)r13;
	r13 = 0.2000000000000000111;
	r18 = (float)r13;
	r13 = 0.2999999999999999889;
	r19 = (float)r13;
	r25 = Urho3D__math_vector3_create(r12,r18,r19);
	r13 = 0.1499999999999999944;
	r12 = (float)r13;
	r13 = 0.;
	r18 = (float)r13;
	r13 = 0.;
	r19 = (float)r13;
	r26 = Urho3D__math_vector3_create(r12,r18,r19);
	r22 = NULL;
	if( !r22 ) goto label$ef7054a_3_82;
	r13 = 0.;
	r12 = (float)r13;
	r28 = Urho3D__math_quaternion_create_fv(r12,r22);
	goto label$ef7054a_3_89;
	label$ef7054a_3_82:
	r13 = 0.;
	r12 = (float)r13;
	r13 = 0.;
	r18 = (float)r13;
	r13 = 0.;
	r19 = (float)r13;
	r28 = Urho3D__math_quaternion_create(r12,r18,r19);
	label$ef7054a_3_89:
	r6 = (String)s$Bip01_Spine1;
	r24 = 0;
	CreateRagdoll_CreateRagdollBone(r0,r6,r24,r25,r26,r28);
	r13 = 0.1749999999999999889;
	r12 = (float)r13;
	r13 = 0.4500000000000000111;
	r18 = (float)r13;
	r13 = 0.1749999999999999889;
	r19 = (float)r13;
	r29 = Urho3D__math_vector3_create(r12,r18,r19);
	r13 = 0.25;
	r12 = (float)r13;
	r13 = 0.;
	r18 = (float)r13;
	r13 = 0.;
	r19 = (float)r13;
	r30 = Urho3D__math_vector3_create(r12,r18,r19);
	r27 = NULL;
	if( !r27 ) goto label$ef7054a_3_112;
	r13 = 0.;
	r12 = (float)r13;
	r32 = Urho3D__math_quaternion_create_fv(r12,r27);
	goto label$ef7054a_3_119;
	label$ef7054a_3_112:
	r13 = 0.;
	r12 = (float)r13;
	r13 = 0.;
	r18 = (float)r13;
	r13 = 90.;
	r19 = (float)r13;
	r32 = Urho3D__math_quaternion_create(r12,r18,r19);
	label$ef7054a_3_119:
	r6 = (String)s$Bip01_L_Thigh;
	r24 = 4;
	CreateRagdoll_CreateRagdollBone(r0,r6,r24,r29,r30,r32);
	r13 = 0.1749999999999999889;
	r12 = (float)r13;
	r13 = 0.4500000000000000111;
	r18 = (float)r13;
	r13 = 0.1749999999999999889;
	r19 = (float)r13;
	r33 = Urho3D__math_vector3_create(r12,r18,r19);
	r13 = 0.25;
	r12 = (float)r13;
	r13 = 0.;
	r18 = (float)r13;
	r13 = 0.;
	r19 = (float)r13;
	r34 = Urho3D__math_vector3_create(r12,r18,r19);
	r31 = NULL;
	if( !r31 ) goto label$ef7054a_3_142;
	r13 = 0.;
	r12 = (float)r13;
	r36 = Urho3D__math_quaternion_create_fv(r12,r31);
	goto label$ef7054a_3_149;
	label$ef7054a_3_142:
	r13 = 0.;
	r12 = (float)r13;
	r13 = 0.;
	r18 = (float)r13;
	r13 = 90.;
	r19 = (float)r13;
	r36 = Urho3D__math_quaternion_create(r12,r18,r19);
	label$ef7054a_3_149:
	r6 = (String)s$Bip01_R_Thigh;
	r24 = 4;
	CreateRagdoll_CreateRagdollBone(r0,r6,r24,r33,r34,r36);
	r13 = 0.1499999999999999944;
	r12 = (float)r13;
	r13 = 0.5500000000000000444;
	r18 = (float)r13;
	r13 = 0.1499999999999999944;
	r19 = (float)r13;
	r37 = Urho3D__math_vector3_create(r12,r18,r19);
	r13 = 0.25;
	r12 = (float)r13;
	r13 = 0.;
	r18 = (float)r13;
	r13 = 0.;
	r19 = (float)r13;
	r38 = Urho3D__math_vector3_create(r12,r18,r19);
	r35 = NULL;
	if( !r35 ) goto label$ef7054a_3_172;
	r13 = 0.;
	r12 = (float)r13;
	r40 = Urho3D__math_quaternion_create_fv(r12,r35);
	goto label$ef7054a_3_179;
	label$ef7054a_3_172:
	r13 = 0.;
	r12 = (float)r13;
	r13 = 0.;
	r18 = (float)r13;
	r13 = 90.;
	r19 = (float)r13;
	r40 = Urho3D__math_quaternion_create(r12,r18,r19);
	label$ef7054a_3_179:
	r6 = (String)s$Bip01_L_Calf;
	r24 = 4;
	CreateRagdoll_CreateRagdollBone(r0,r6,r24,r37,r38,r40);
	r13 = 0.1499999999999999944;
	r12 = (float)r13;
	r13 = 0.5500000000000000444;
	r18 = (float)r13;
	r13 = 0.1499999999999999944;
	r19 = (float)r13;
	r41 = Urho3D__math_vector3_create(r12,r18,r19);
	r13 = 0.25;
	r12 = (float)r13;
	r13 = 0.;
	r18 = (float)r13;
	r13 = 0.;
	r19 = (float)r13;
	r42 = Urho3D__math_vector3_create(r12,r18,r19);
	r39 = NULL;
	if( !r39 ) goto label$ef7054a_3_202;
	r13 = 0.;
	r12 = (float)r13;
	r44 = Urho3D__math_quaternion_create_fv(r12,r39);
	goto label$ef7054a_3_209;
	label$ef7054a_3_202:
	r13 = 0.;
	r12 = (float)r13;
	r13 = 0.;
	r18 = (float)r13;
	r13 = 90.;
	r19 = (float)r13;
	r44 = Urho3D__math_quaternion_create(r12,r18,r19);
	label$ef7054a_3_209:
	r6 = (String)s$Bip01_R_Calf;
	r24 = 4;
	CreateRagdoll_CreateRagdollBone(r0,r6,r24,r41,r42,r44);
	r13 = 0.2000000000000000111;
	r12 = (float)r13;
	r13 = 0.2000000000000000111;
	r18 = (float)r13;
	r13 = 0.2000000000000000111;
	r19 = (float)r13;
	r45 = Urho3D__math_vector3_create(r12,r18,r19);
	r13 = 0.1000000000000000056;
	r12 = (float)r13;
	r13 = 0.;
	r18 = (float)r13;
	r13 = 0.;
	r19 = (float)r13;
	r46 = Urho3D__math_vector3_create(r12,r18,r19);
	r43 = NULL;
	if( !r43 ) goto label$ef7054a_3_232;
	r13 = 0.;
	r12 = (float)r13;
	r48 = Urho3D__math_quaternion_create_fv(r12,r43);
	goto label$ef7054a_3_239;
	label$ef7054a_3_232:
	r13 = 0.;
	r12 = (float)r13;
	r13 = 0.;
	r18 = (float)r13;
	r13 = 0.;
	r19 = (float)r13;
	r48 = Urho3D__math_quaternion_create(r12,r18,r19);
	label$ef7054a_3_239:
	r6 = (String)s$Bip01_Head;
	r24 = 0;
	CreateRagdoll_CreateRagdollBone(r0,r6,r24,r45,r46,r48);
	r13 = 0.1499999999999999944;
	r12 = (float)r13;
	r13 = 0.3499999999999999778;
	r18 = (float)r13;
	r13 = 0.1499999999999999944;
	r19 = (float)r13;
	r49 = Urho3D__math_vector3_create(r12,r18,r19);
	r13 = 0.1000000000000000056;
	r12 = (float)r13;
	r13 = 0.;
	r18 = (float)r13;
	r13 = 0.;
	r19 = (float)r13;
	r50 = Urho3D__math_vector3_create(r12,r18,r19);
	r47 = NULL;
	if( !r47 ) goto label$ef7054a_3_262;
	r13 = 0.;
	r12 = (float)r13;
	r52 = Urho3D__math_quaternion_create_fv(r12,r47);
	goto label$ef7054a_3_269;
	label$ef7054a_3_262:
	r13 = 0.;
	r12 = (float)r13;
	r13 = 0.;
	r18 = (float)r13;
	r13 = 90.;
	r19 = (float)r13;
	r52 = Urho3D__math_quaternion_create(r12,r18,r19);
	label$ef7054a_3_269:
	r6 = (String)s$Bip01_L_UpperArm;
	r24 = 4;
	CreateRagdoll_CreateRagdollBone(r0,r6,r24,r49,r50,r52);
	r13 = 0.1499999999999999944;
	r12 = (float)r13;
	r13 = 0.3499999999999999778;
	r18 = (float)r13;
	r13 = 0.1499999999999999944;
	r19 = (float)r13;
	r53 = Urho3D__math_vector3_create(r12,r18,r19);
	r13 = 0.1000000000000000056;
	r12 = (float)r13;
	r13 = 0.;
	r18 = (float)r13;
	r13 = 0.;
	r19 = (float)r13;
	r54 = Urho3D__math_vector3_create(r12,r18,r19);
	r51 = NULL;
	if( !r51 ) goto label$ef7054a_3_292;
	r13 = 0.;
	r12 = (float)r13;
	r56 = Urho3D__math_quaternion_create_fv(r12,r51);
	goto label$ef7054a_3_299;
	label$ef7054a_3_292:
	r13 = 0.;
	r12 = (float)r13;
	r13 = 0.;
	r18 = (float)r13;
	r13 = 90.;
	r19 = (float)r13;
	r56 = Urho3D__math_quaternion_create(r12,r18,r19);
	label$ef7054a_3_299:
	r6 = (String)s$Bip01_R_UpperArm;
	r24 = 4;
	CreateRagdoll_CreateRagdollBone(r0,r6,r24,r53,r54,r56);
	r13 = 0.125;
	r12 = (float)r13;
	r13 = 0.4000000000000000222;
	r18 = (float)r13;
	r13 = 0.125;
	r19 = (float)r13;
	r57 = Urho3D__math_vector3_create(r12,r18,r19);
	r13 = 0.2000000000000000111;
	r12 = (float)r13;
	r13 = 0.;
	r18 = (float)r13;
	r13 = 0.;
	r19 = (float)r13;
	r58 = Urho3D__math_vector3_create(r12,r18,r19);
	r55 = NULL;
	if( !r55 ) goto label$ef7054a_3_322;
	r13 = 0.;
	r12 = (float)r13;
	r60 = Urho3D__math_quaternion_create_fv(r12,r55);
	goto label$ef7054a_3_329;
	label$ef7054a_3_322:
	r13 = 0.;
	r12 = (float)r13;
	r13 = 0.;
	r18 = (float)r13;
	r13 = 90.;
	r19 = (float)r13;
	r60 = Urho3D__math_quaternion_create(r12,r18,r19);
	label$ef7054a_3_329:
	r6 = (String)s$Bip01_L_Forearm;
	r24 = 4;
	CreateRagdoll_CreateRagdollBone(r0,r6,r24,r57,r58,r60);
	r13 = 0.125;
	r12 = (float)r13;
	r13 = 0.4000000000000000222;
	r18 = (float)r13;
	r13 = 0.125;
	r19 = (float)r13;
	r61 = Urho3D__math_vector3_create(r12,r18,r19);
	r13 = 0.2000000000000000111;
	r12 = (float)r13;
	r13 = 0.;
	r18 = (float)r13;
	r13 = 0.;
	r19 = (float)r13;
	r62 = Urho3D__math_vector3_create(r12,r18,r19);
	r59 = NULL;
	if( !r59 ) goto label$ef7054a_3_352;
	r13 = 0.;
	r12 = (float)r13;
	r63 = Urho3D__math_quaternion_create_fv(r12,r59);
	goto label$ef7054a_3_359;
	label$ef7054a_3_352:
	r13 = 0.;
	r12 = (float)r13;
	r13 = 0.;
	r18 = (float)r13;
	r13 = 90.;
	r19 = (float)r13;
	r63 = Urho3D__math_quaternion_create(r12,r18,r19);
	label$ef7054a_3_359:
	r6 = (String)s$Bip01_R_Forearm;
	r24 = 4;
	CreateRagdoll_CreateRagdollBone(r0,r6,r24,r61,r62,r63);
	r66 = (urho3d___Vector3__$Vector3_Impl_)g$_urho3d__Vector3_Vector3_Impl_;
	r64 = r66->BACK;
	r66 = (urho3d___Vector3__$Vector3_Impl_)g$_urho3d__Vector3_Vector3_Impl_;
	r65 = r66->FORWARD;
	r13 = 45.;
	r12 = (float)r13;
	r13 = 45.;
	r18 = (float)r13;
	r67 = Urho3D__math_vector2_create(r12,r18);
	r6 = (String)s$Bip01_L_Thigh;
	r68 = (String)s$Bip01_Pelvis;
	r24 = 3;
	r73 = (urho3d___Vector2__$Vector2_Impl_)g$_urho3d__Vector2_Vector2_Impl_;
	r72 = r73->ZERO;
	r74 = NULL;
	CreateRagdoll_CreateRagdollConstraint(r0,r6,r68,r24,r64,r65,r67,r72,r74);
	r66 = (urho3d___Vector3__$Vector3_Impl_)g$_urho3d__Vector3_Vector3_Impl_;
	r69 = r66->BACK;
	r66 = (urho3d___Vector3__$Vector3_Impl_)g$_urho3d__Vector3_Vector3_Impl_;
	r70 = r66->FORWARD;
	r13 = 45.;
	r12 = (float)r13;
	r13 = 45.;
	r18 = (float)r13;
	r71 = Urho3D__math_vector2_create(r12,r18);
	r6 = (String)s$Bip01_R_Thigh;
	r68 = (String)s$Bip01_Pelvis;
	r24 = 3;
	r73 = (urho3d___Vector2__$Vector2_Impl_)g$_urho3d__Vector2_Vector2_Impl_;
	r77 = r73->ZERO;
	r74 = NULL;
	CreateRagdoll_CreateRagdollConstraint(r0,r6,r68,r24,r69,r70,r71,r77,r74);
	r66 = (urho3d___Vector3__$Vector3_Impl_)g$_urho3d__Vector3_Vector3_Impl_;
	r75 = r66->BACK;
	r66 = (urho3d___Vector3__$Vector3_Impl_)g$_urho3d__Vector3_Vector3_Impl_;
	r76 = r66->BACK;
	r13 = 90.;
	r12 = (float)r13;
	r13 = 0.;
	r18 = (float)r13;
	r72 = Urho3D__math_vector2_create(r12,r18);
	r6 = (String)s$Bip01_L_Calf;
	r68 = (String)s$Bip01_L_Thigh;
	r24 = 1;
	r73 = (urho3d___Vector2__$Vector2_Impl_)g$_urho3d__Vector2_Vector2_Impl_;
	r80 = r73->ZERO;
	r74 = NULL;
	CreateRagdoll_CreateRagdollConstraint(r0,r6,r68,r24,r75,r76,r72,r80,r74);
	r66 = (urho3d___Vector3__$Vector3_Impl_)g$_urho3d__Vector3_Vector3_Impl_;
	r78 = r66->BACK;
	r66 = (urho3d___Vector3__$Vector3_Impl_)g$_urho3d__Vector3_Vector3_Impl_;
	r79 = r66->BACK;
	r13 = 90.;
	r12 = (float)r13;
	r13 = 0.;
	r18 = (float)r13;
	r77 = Urho3D__math_vector2_create(r12,r18);
	r6 = (String)s$Bip01_R_Calf;
	r68 = (String)s$Bip01_R_Thigh;
	r24 = 1;
	r73 = (urho3d___Vector2__$Vector2_Impl_)g$_urho3d__Vector2_Vector2_Impl_;
	r83 = r73->ZERO;
	r74 = NULL;
	CreateRagdoll_CreateRagdollConstraint(r0,r6,r68,r24,r78,r79,r77,r83,r74);
	r66 = (urho3d___Vector3__$Vector3_Impl_)g$_urho3d__Vector3_Vector3_Impl_;
	r81 = r66->FORWARD;
	r66 = (urho3d___Vector3__$Vector3_Impl_)g$_urho3d__Vector3_Vector3_Impl_;
	r82 = r66->FORWARD;
	r13 = 45.;
	r12 = (float)r13;
	r13 = 0.;
	r18 = (float)r13;
	r80 = Urho3D__math_vector2_create(r12,r18);
	r13 = -10.;
	r12 = (float)r13;
	r13 = 0.;
	r18 = (float)r13;
	r83 = Urho3D__math_vector2_create(r12,r18);
	r6 = (String)s$Bip01_Spine1;
	r68 = (String)s$Bip01_Pelvis;
	r24 = 1;
	r74 = NULL;
	CreateRagdoll_CreateRagdollConstraint(r0,r6,r68,r24,r81,r82,r80,r83,r74);
	r66 = (urho3d___Vector3__$Vector3_Impl_)g$_urho3d__Vector3_Vector3_Impl_;
	r84 = r66->LEFT;
	r66 = (urho3d___Vector3__$Vector3_Impl_)g$_urho3d__Vector3_Vector3_Impl_;
	r85 = r66->LEFT;
	r13 = 0.;
	r12 = (float)r13;
	r13 = 30.;
	r18 = (float)r13;
	r86 = Urho3D__math_vector2_create(r12,r18);
	r6 = (String)s$Bip01_Head;
	r68 = (String)s$Bip01_Spine1;
	r24 = 3;
	r73 = (urho3d___Vector2__$Vector2_Impl_)g$_urho3d__Vector2_Vector2_Impl_;
	r90 = r73->ZERO;
	r74 = NULL;
	CreateRagdoll_CreateRagdollConstraint(r0,r6,r68,r24,r84,r85,r86,r90,r74);
	r66 = (urho3d___Vector3__$Vector3_Impl_)g$_urho3d__Vector3_Vector3_Impl_;
	r88 = r66->DOWN;
	r66 = (urho3d___Vector3__$Vector3_Impl_)g$_urho3d__Vector3_Vector3_Impl_;
	r89 = r66->UP;
	r13 = 45.;
	r12 = (float)r13;
	r13 = 45.;
	r18 = (float)r13;
	r87 = Urho3D__math_vector2_create(r12,r18);
	r6 = (String)s$Bip01_L_UpperArm;
	r68 = (String)s$Bip01_Spine1;
	r24 = 3;
	r73 = (urho3d___Vector2__$Vector2_Impl_)g$_urho3d__Vector2_Vector2_Impl_;
	r93 = r73->ZERO;
	r94 = false;
	r74 = &r94;
	CreateRagdoll_CreateRagdollConstraint(r0,r6,r68,r24,r88,r89,r87,r93,r74);
	r66 = (urho3d___Vector3__$Vector3_Impl_)g$_urho3d__Vector3_Vector3_Impl_;
	r91 = r66->DOWN;
	r66 = (urho3d___Vector3__$Vector3_Impl_)g$_urho3d__Vector3_Vector3_Impl_;
	r92 = r66->UP;
	r13 = 45.;
	r12 = (float)r13;
	r13 = 45.;
	r18 = (float)r13;
	r90 = Urho3D__math_vector2_create(r12,r18);
	r6 = (String)s$Bip01_R_UpperArm;
	r68 = (String)s$Bip01_Spine1;
	r24 = 3;
	r73 = (urho3d___Vector2__$Vector2_Impl_)g$_urho3d__Vector2_Vector2_Impl_;
	r97 = r73->ZERO;
	r98 = false;
	r74 = &r98;
	CreateRagdoll_CreateRagdollConstraint(r0,r6,r68,r24,r91,r92,r90,r97,r74);
	r66 = (urho3d___Vector3__$Vector3_Impl_)g$_urho3d__Vector3_Vector3_Impl_;
	r95 = r66->BACK;
	r66 = (urho3d___Vector3__$Vector3_Impl_)g$_urho3d__Vector3_Vector3_Impl_;
	r96 = r66->BACK;
	r13 = 90.;
	r12 = (float)r13;
	r13 = 0.;
	r18 = (float)r13;
	r93 = Urho3D__math_vector2_create(r12,r18);
	r6 = (String)s$Bip01_L_Forearm;
	r68 = (String)s$Bip01_L_UpperArm;
	r24 = 1;
	r73 = (urho3d___Vector2__$Vector2_Impl_)g$_urho3d__Vector2_Vector2_Impl_;
	r101 = r73->ZERO;
	r74 = NULL;
	CreateRagdoll_CreateRagdollConstraint(r0,r6,r68,r24,r95,r96,r93,r101,r74);
	r66 = (urho3d___Vector3__$Vector3_Impl_)g$_urho3d__Vector3_Vector3_Impl_;
	r99 = r66->BACK;
	r66 = (urho3d___Vector3__$Vector3_Impl_)g$_urho3d__Vector3_Vector3_Impl_;
	r100 = r66->BACK;
	r13 = 90.;
	r12 = (float)r13;
	r13 = 0.;
	r18 = (float)r13;
	r97 = Urho3D__math_vector2_create(r12,r18);
	r6 = (String)s$Bip01_R_Forearm;
	r68 = (String)s$Bip01_R_UpperArm;
	r24 = 1;
	r73 = (urho3d___Vector2__$Vector2_Impl_)g$_urho3d__Vector2_Vector2_Impl_;
	r102 = r73->ZERO;
	r74 = NULL;
	CreateRagdoll_CreateRagdollConstraint(r0,r6,r68,r24,r99,r100,r97,r102,r74);
	label$ef7054a_3_527:
	return;
}

void CreateRagdoll_CreateRagdollBone(CreateRagdoll r0,String r1,int r2,hl_urho3d_math_vector3* r3,hl_urho3d_math_vector3* r4,hl_urho3d_math_quaternion* r5) {
	bool *r9;
	String r7, r13;
	hl_urho3d_physics_rigid_body *r21;
	vvirtual *r14, *r16;
	hl_urho3d_scene_component *r17, *r20;
	urho3d__RigidBody r24;
	bool r8;
	urho3d__Node r6;
	urho3d__CollisionShape r28;
	haxe__$Log r12;
	hl_urho3d_math_tquaternion *r32, *r36;
	urho3d___Context__$Context_Impl_ r23;
	float r25, r34, r35;
	urho3d_context *r22;
	double r26, r37, r38, r39;
	vclosure *r11;
	hl_urho3d_math_tvector3 *r30, *r31, *r33;
	hl_urho3d_physics_collision_shape *r27;
	int *r18, *r19;
	int r15, r29;
	r6 = urho3d_Component_get_node(((urho3d__Component)r0));
	if( r6 == NULL ) hl_null_access();
	r8 = true;
	r9 = &r8;
	r6 = urho3d_Node_GetChild(r6,r1,r9);
	if( r6 ) goto label$ef7054a_4_25;
	r12 = (haxe__$Log)g$_haxe_Log;
	r11 = r12->trace;
	if( r11 == NULL ) hl_null_access();
	r7 = (String)s$Could_not_find_bone_;
	r7 = String___add__(r7,r1);
	r13 = (String)s$6815feb;
	r7 = String___add__(r7,r13);
	r14 = hl_alloc_virtual(&t$vrt_329ffa8);
	r13 = (String)s$src_haxe_RagdollsSample_hx;
	if( hl_vfields(r14)[1] ) *(String*)(hl_vfields(r14)[1]) = (String)r13; else hl_dyn_setp(r14->value,37969014/*fileName*/,&t$String,r13);
	r15 = 53;
	if( hl_vfields(r14)[2] ) *(int*)(hl_vfields(r14)[2]) = (int)r15; else hl_dyn_seti(r14->value,371360620/*lineNumber*/,&t$_i32,r15);
	r13 = (String)s$CreateRagdoll;
	if( hl_vfields(r14)[0] ) *(String*)(hl_vfields(r14)[0]) = (String)r13; else hl_dyn_setp(r14->value,-63073762/*className*/,&t$String,r13);
	r13 = (String)s$CreateRagdollBone;
	if( hl_vfields(r14)[3] ) *(String*)(hl_vfields(r14)[3]) = (String)r13; else hl_dyn_setp(r14->value,302979532/*methodName*/,&t$String,r13);
	r16 = hl_to_virtual(&t$vrt_eaa6a3b,(vdynamic*)r14);
	r11->hasValue ? ((void (*)(vdynamic*,vdynamic*,vvirtual*))r11->fun)((vdynamic*)r11->value,((vdynamic*)r7),r16) : ((void (*)(vdynamic*,vvirtual*))r11->fun)(((vdynamic*)r7),r16);
	return;
	label$ef7054a_4_25:
	if( r6 == NULL ) hl_null_access();
	r7 = (String)s$RigidBody;
	r18 = NULL;
	r19 = NULL;
	r17 = urho3d_Node_CreateComponent(r6,r7,r18,r19);
	if( !r17 ) goto label$ef7054a_4_40;
	r23 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r22 = r23->context;
	r21 = Urho3D__physics_rigid_body_cast_from_component(r22,r17);
	if( !r21 ) goto label$ef7054a_4_38;
	r24 = (urho3d__RigidBody)hl_alloc_obj(&t$urho3d_RigidBody);
	urho3d_RigidBody_new(r24,r21);
	goto label$ef7054a_4_39;
	label$ef7054a_4_38:
	r24 = NULL;
	label$ef7054a_4_39:
	goto label$ef7054a_4_41;
	label$ef7054a_4_40:
	r24 = NULL;
	label$ef7054a_4_41:
	if( r24 == NULL ) hl_null_access();
	r26 = 1.;
	r25 = (float)r26;
	r25 = urho3d_RigidBody_set_mass(r24,r25);
	r26 = (double)r25;
	r26 = 0.05000000000000000278;
	r25 = (float)r26;
	r25 = urho3d_RigidBody_set_linearDamping(r24,r25);
	r26 = (double)r25;
	r26 = 0.8499999999999999778;
	r25 = (float)r26;
	r25 = urho3d_RigidBody_set_angularDamping(r24,r25);
	r26 = (double)r25;
	r26 = 1.5;
	r25 = (float)r26;
	r25 = urho3d_RigidBody_set_linearRestThreshold(r24,r25);
	r26 = (double)r25;
	r26 = 2.5;
	r25 = (float)r26;
	r25 = urho3d_RigidBody_set_angularRestThreshold(r24,r25);
	r26 = (double)r25;
	r7 = (String)s$CollisionShape;
	r18 = NULL;
	r19 = NULL;
	r20 = urho3d_Node_CreateComponent(r6,r7,r18,r19);
	if( !r20 ) goto label$ef7054a_4_76;
	r23 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r22 = r23->context;
	r27 = Urho3D__physics_collision_shape_cast_from_component(r22,r20);
	if( !r27 ) goto label$ef7054a_4_74;
	r28 = (urho3d__CollisionShape)hl_alloc_obj(&t$urho3d_CollisionShape);
	urho3d_CollisionShape_new(r28,r27);
	goto label$ef7054a_4_75;
	label$ef7054a_4_74:
	r28 = NULL;
	label$ef7054a_4_75:
	goto label$ef7054a_4_77;
	label$ef7054a_4_76:
	r28 = NULL;
	label$ef7054a_4_77:
	r29 = 0;
	if( r2 != r29 ) goto label$ef7054a_4_111;
	r30 = Urho3D__math_tvector3_cast_from_vector3(r3);
	r31 = Urho3D__math_tvector3_cast_from_vector3(r4);
	r32 = Urho3D__math_tquaternion_cast_from_quaternion(r5);
	if( r31 ) goto label$ef7054a_4_91;
	r26 = 0.;
	r25 = (float)r26;
	r26 = 0.;
	r34 = (float)r26;
	r26 = 0.;
	r35 = (float)r26;
	r33 = Urho3D__math_tvector3_create(r25,r34,r35);
	r31 = r33;
	label$ef7054a_4_91:
	if( r32 ) goto label$ef7054a_4_105;
	r26 = 0.;
	r33 = NULL;
	if( !r33 ) goto label$ef7054a_4_98;
	r25 = (float)r26;
	r36 = Urho3D__math_tquaternion_create_fv(r25,r33);
	goto label$ef7054a_4_104;
	label$ef7054a_4_98:
	r25 = (float)r26;
	r37 = 0.;
	r34 = (float)r37;
	r37 = 0.;
	r35 = (float)r37;
	r36 = Urho3D__math_tquaternion_create(r25,r34,r35);
	label$ef7054a_4_104:
	r32 = r36;
	label$ef7054a_4_105:
	r23 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r22 = r23->context;
	if( r28 == NULL ) hl_null_access();
	r27 = r28->_abstract;
	Urho3D__physics_collision_shape_set_box(r22,r27,r30,r31,r32);
	goto label$ef7054a_4_147;
	label$ef7054a_4_111:
	r25 = Urho3D__math_vector3_get_x(r3);
	r26 = (double)r25;
	r25 = Urho3D__math_vector3_get_y(r3);
	r37 = (double)r25;
	r30 = Urho3D__math_tvector3_cast_from_vector3(r4);
	r32 = Urho3D__math_tquaternion_cast_from_quaternion(r5);
	if( r30 ) goto label$ef7054a_4_126;
	r38 = 0.;
	r25 = (float)r38;
	r38 = 0.;
	r34 = (float)r38;
	r38 = 0.;
	r35 = (float)r38;
	r31 = Urho3D__math_tvector3_create(r25,r34,r35);
	r30 = r31;
	label$ef7054a_4_126:
	if( r32 ) goto label$ef7054a_4_140;
	r38 = 0.;
	r31 = NULL;
	if( !r31 ) goto label$ef7054a_4_133;
	r25 = (float)r38;
	r36 = Urho3D__math_tquaternion_create_fv(r25,r31);
	goto label$ef7054a_4_139;
	label$ef7054a_4_133:
	r25 = (float)r38;
	r39 = 0.;
	r34 = (float)r39;
	r39 = 0.;
	r35 = (float)r39;
	r36 = Urho3D__math_tquaternion_create(r25,r34,r35);
	label$ef7054a_4_139:
	r32 = r36;
	label$ef7054a_4_140:
	r23 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r22 = r23->context;
	if( r28 == NULL ) hl_null_access();
	r27 = r28->_abstract;
	r25 = (float)r26;
	r34 = (float)r37;
	Urho3D__physics_collision_shape_set_capsule(r22,r27,r25,r34,r30,r32);
	label$ef7054a_4_147:
	return;
}

void CreateRagdoll_CreateRagdollConstraint(CreateRagdoll r0,String r1,String r2,int r3,hl_urho3d_math_vector3* r4,hl_urho3d_math_vector3* r5,hl_urho3d_math_vector2* r6,hl_urho3d_math_vector2* r7,bool* r8) {
	String r11, r18;
	hl_urho3d_physics_rigid_body *r31, *r32, *r33;
	vvirtual *r19, *r21;
	hl_urho3d_scene_component *r22, *r25;
	bool r9, r12, r15, r30;
	urho3d__Node r10, r14;
	hl_urho3d_physics_constraint *r26;
	haxe__$Log r17;
	urho3d___Context__$Context_Impl_ r28;
	urho3d_context *r27;
	urho3d__Constraint r29;
	vclosure *r16;
	hl_urho3d_math_tvector2 *r35;
	hl_urho3d_math_tvector3 *r34;
	int *r23, *r24;
	int r20;
	if( r8 ) goto label$ef7054a_5_3;
	r9 = true;
	goto label$ef7054a_5_4;
	label$ef7054a_5_3:
	r9 = *r8;
	label$ef7054a_5_4:
	r10 = urho3d_Component_get_node(((urho3d__Component)r0));
	if( r10 == NULL ) hl_null_access();
	r12 = true;
	r8 = &r12;
	r10 = urho3d_Node_GetChild(r10,r1,r8);
	r14 = urho3d_Component_get_node(((urho3d__Component)r0));
	if( r14 == NULL ) hl_null_access();
	r15 = true;
	r8 = &r15;
	r14 = urho3d_Node_GetChild(r14,r2,r8);
	if( r10 ) goto label$ef7054a_5_34;
	r17 = (haxe__$Log)g$_haxe_Log;
	r16 = r17->trace;
	if( r16 == NULL ) hl_null_access();
	r11 = (String)s$Could_not_find_bone_;
	r11 = String___add__(r11,r1);
	r18 = (String)s$_for_creating_ragdoll_constraint;
	r11 = String___add__(r11,r18);
	r19 = hl_alloc_virtual(&t$vrt_329ffa8);
	r18 = (String)s$src_haxe_RagdollsSample_hx;
	if( hl_vfields(r19)[1] ) *(String*)(hl_vfields(r19)[1]) = (String)r18; else hl_dyn_setp(r19->value,37969014/*fileName*/,&t$String,r18);
	r20 = 80;
	if( hl_vfields(r19)[2] ) *(int*)(hl_vfields(r19)[2]) = (int)r20; else hl_dyn_seti(r19->value,371360620/*lineNumber*/,&t$_i32,r20);
	r18 = (String)s$CreateRagdoll;
	if( hl_vfields(r19)[0] ) *(String*)(hl_vfields(r19)[0]) = (String)r18; else hl_dyn_setp(r19->value,-63073762/*className*/,&t$String,r18);
	r18 = (String)s$CreateRagdollConstraint;
	if( hl_vfields(r19)[3] ) *(String*)(hl_vfields(r19)[3]) = (String)r18; else hl_dyn_setp(r19->value,302979532/*methodName*/,&t$String,r18);
	r21 = hl_to_virtual(&t$vrt_eaa6a3b,(vdynamic*)r19);
	r16->hasValue ? ((void (*)(vdynamic*,vdynamic*,vvirtual*))r16->fun)((vdynamic*)r16->value,((vdynamic*)r11),r21) : ((void (*)(vdynamic*,vvirtual*))r16->fun)(((vdynamic*)r11),r21);
	return;
	label$ef7054a_5_34:
	if( r14 ) goto label$ef7054a_5_54;
	r17 = (haxe__$Log)g$_haxe_Log;
	r16 = r17->trace;
	if( r16 == NULL ) hl_null_access();
	r11 = (String)s$Could_not_find_bone_;
	r11 = String___add__(r11,r2);
	r18 = (String)s$_for_creating_ragdoll_constraint;
	r11 = String___add__(r11,r18);
	r19 = hl_alloc_virtual(&t$vrt_329ffa8);
	r18 = (String)s$src_haxe_RagdollsSample_hx;
	if( hl_vfields(r19)[1] ) *(String*)(hl_vfields(r19)[1]) = (String)r18; else hl_dyn_setp(r19->value,37969014/*fileName*/,&t$String,r18);
	r20 = 84;
	if( hl_vfields(r19)[2] ) *(int*)(hl_vfields(r19)[2]) = (int)r20; else hl_dyn_seti(r19->value,371360620/*lineNumber*/,&t$_i32,r20);
	r18 = (String)s$CreateRagdoll;
	if( hl_vfields(r19)[0] ) *(String*)(hl_vfields(r19)[0]) = (String)r18; else hl_dyn_setp(r19->value,-63073762/*className*/,&t$String,r18);
	r18 = (String)s$CreateRagdollConstraint;
	if( hl_vfields(r19)[3] ) *(String*)(hl_vfields(r19)[3]) = (String)r18; else hl_dyn_setp(r19->value,302979532/*methodName*/,&t$String,r18);
	r21 = hl_to_virtual(&t$vrt_eaa6a3b,(vdynamic*)r19);
	r16->hasValue ? ((void (*)(vdynamic*,vdynamic*,vvirtual*))r16->fun)((vdynamic*)r16->value,((vdynamic*)r11),r21) : ((void (*)(vdynamic*,vvirtual*))r16->fun)(((vdynamic*)r11),r21);
	return;
	label$ef7054a_5_54:
	if( r10 == NULL ) hl_null_access();
	r11 = (String)s$Constraint;
	r23 = NULL;
	r24 = NULL;
	r22 = urho3d_Node_CreateComponent(r10,r11,r23,r24);
	if( !r22 ) goto label$ef7054a_5_69;
	r28 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r27 = r28->context;
	r26 = Urho3D__physics_constraint_cast_from_component(r27,r22);
	if( !r26 ) goto label$ef7054a_5_67;
	r29 = (urho3d__Constraint)hl_alloc_obj(&t$urho3d_Constraint);
	urho3d_Constraint_new(r29,r26);
	goto label$ef7054a_5_68;
	label$ef7054a_5_67:
	r29 = NULL;
	label$ef7054a_5_68:
	goto label$ef7054a_5_70;
	label$ef7054a_5_69:
	r29 = NULL;
	label$ef7054a_5_70:
	if( r29 == NULL ) hl_null_access();
	r20 = urho3d_Constraint_set_constraintType(r29,r3);
	r30 = urho3d_Constraint_set_disableCollision(r29,r9);
	if( r14 == NULL ) hl_null_access();
	r11 = (String)s$RigidBody;
	r8 = NULL;
	r25 = urho3d_Node_GetComponent(r14,r11,r8);
	if( !r25 ) goto label$ef7054a_5_87;
	r28 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r27 = r28->context;
	r31 = Urho3D__physics_rigid_body_cast_from_component(r27,r25);
	if( !r31 ) goto label$ef7054a_5_84;
	r33 = r31;
	goto label$ef7054a_5_85;
	label$ef7054a_5_84:
	r33 = NULL;
	label$ef7054a_5_85:
	r32 = r33;
	goto label$ef7054a_5_89;
	label$ef7054a_5_87:
	r31 = NULL;
	r32 = r31;
	label$ef7054a_5_89:
	r31 = urho3d_Constraint_set_otherBody(r29,r32);
	r34 = urho3d_Node_get_worldPosition(r10);
	r34 = urho3d_Constraint_set_worldPosition(r29,r34);
	r34 = Urho3D__math_tvector3_cast_from_vector3(r4);
	r34 = urho3d_Constraint_set_axis(r29,r34);
	r34 = Urho3D__math_tvector3_cast_from_vector3(r5);
	r34 = urho3d_Constraint_set_otherAxis(r29,r34);
	r35 = Urho3D__math_tvector2_cast_from_vector2(r6);
	r35 = urho3d_Constraint_set_highLimit(r29,r35);
	r35 = Urho3D__math_tvector2_cast_from_vector2(r7);
	r35 = urho3d_Constraint_set_lowLimit(r29,r35);
	return;
}

