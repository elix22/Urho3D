﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <samplygame/Joysticks.h>
void samplygame_Weapon_new(samplygame__Weapon,vdynamic*);
#include <actions/ActionGroup.h>
#include <urho3d/Math.h>
#include <hl/natives.h>
#include <actions/ActionID.h>
#include <hl/types/ArrayObj.h>
extern hl_type t$actions_ActionGroup;
void actions_ActionGroup_new(actions__ActionGroup);
extern urho3d__$Math g$_urho3d_Math;
void samplygame_Joysticks_Fire(samplygame__Joysticks,hl_urho3d_math_vector3*,bool,actions__ActionGroup);
void samplygame_Joysticks_bulletNodeRemove(samplygame__Joysticks,actions__ActionID);
extern hl_type t$fun_cd54adc;
actions__ActionID actions_ActionManager_AddActions(hl__types__ArrayObj,actions__ActionGroup,vclosure*);
#include <urho3d/_Context/Context_Impl_.h>
#include <urho3d/StaticModel.h>
#include <actions/MoveBy.h>
urho3d__Node samplygame_Weapon_CreateRigidBullet(samplygame__Weapon,bool,hl_urho3d_math_vector3*);
extern urho3d___Context__$Context_Impl_ g$_urho3d__Context_Context_Impl_;
extern String s$StaticModel;
extern hl_type t$urho3d_StaticModel;
void urho3d_StaticModel_new(urho3d__StaticModel,hl_urho3d_graphics_staticmodel*);
extern String s$Models_SMWeapon_mdl;
hl_urho3d_graphics_model* urho3d_StaticModel_set_model(urho3d__StaticModel,hl_urho3d_graphics_model*);
extern String s$Materials_SMWeapon_xml;
hl_urho3d_graphics_material* urho3d_StaticModel_set_material(urho3d__StaticModel,hl_urho3d_graphics_material*);
extern hl_type t$actions_MoveBy;
void actions_MoveBy_new(actions__MoveBy,double,hl_urho3d_math_vector3*);
#include <actions/FiniteTimeAction.h>
void actions_ActionGroup_Push(actions__ActionGroup,actions__FiniteTimeAction,urho3d__Node);
void actions_ActionID_DeleteTargets(actions__ActionID);

void samplygame_Joysticks_new(samplygame__Joysticks r0) {
	vdynamic *r2;
	int r3;
	r2 = NULL;
	samplygame_Weapon_new(((samplygame__Weapon)r0),r2);
	r3 = 2000;
	r0->ReloadDuration = r3;
	r3 = 10;
	r0->Damage = r3;
	return;
}

void samplygame_Joysticks_OnFire(samplygame__Joysticks r0,bool r1) {
	hl__types__ArrayObj r20;
	urho3d__$Math r13;
	hl_urho3d_math_vector3 *r15;
	actions__ActionID r19;
	float r16, r17, r18;
	vclosure *r21;
	actions__ActionGroup r5;
	double r4, r10, r11, r12, r14;
	int r2, r6, r7, r8, r9;
	r2 = 12;
	r4 = 10.;
	r5 = (actions__ActionGroup)hl_alloc_obj(&t$actions_ActionGroup);
	actions_ActionGroup_new(r5);
	r6 = 0;
	r7 = r2;
	label$1718f78_2_6:
	if( r6 >= r7 ) goto label$1718f78_2_32;
	r8 = r6;
	++r6;
	r10 = 360.;
	r11 = (double)r2;
	r10 = r10 / r11;
	r11 = (double)r8;
	r10 = r10 * r11;
	r13 = (urho3d__$Math)g$_urho3d_Math;
	r12 = r13->_DEGTORAD_;
	r11 = r10 * r12;
	r11 = hl_math_cos(r11);
	r11 = r11 * r4;
	r13 = (urho3d__$Math)g$_urho3d_Math;
	r14 = r13->_DEGTORAD_;
	r12 = r10 * r14;
	r12 = hl_math_sin(r12);
	r12 = r12 * r4;
	r16 = (float)r11;
	r17 = (float)r12;
	r9 = 0;
	r18 = (float)r9;
	r15 = Urho3D__math_vector3_create(r16,r17,r18);
	samplygame_Joysticks_Fire(r0,r15,r1,r5);
	goto label$1718f78_2_6;
	label$1718f78_2_32:
	r20 = NULL;
	r21 = hl_alloc_closure_ptr(&t$fun_cd54adc,samplygame_Joysticks_bulletNodeRemove,r0);
	r19 = actions_ActionManager_AddActions(r20,r5,r21);
	return;
}

void samplygame_Joysticks_Fire(samplygame__Joysticks r0,hl_urho3d_math_vector3* r1,bool r2,actions__ActionGroup r3) {
	String r18;
	hl_urho3d_scene_component *r17;
	urho3d__StaticModel r21;
	hl_urho3d_math_vector3 *r5;
	urho3d__Node r4;
	actions__MoveBy r26;
	hl_urho3d_math_tquaternion *r8;
	hl_urho3d_graphics_material *r24, *r25;
	urho3d___Context__$Context_Impl_ r15;
	urho3d_context *r14;
	hl_urho3d_scene_node *r13;
	float r10, r11, r12;
	hl_urho3d_graphics_staticmodel *r20;
	double r16;
	hl_urho3d_math_tvector3 *r7;
	hl_urho3d_graphics_model *r22, *r23;
	int r9, r19;
	r5 = NULL;
	r4 = samplygame_Weapon_CreateRigidBullet(((samplygame__Weapon)r0),r2,r5);
	r7 = NULL;
	if( !r7 ) goto label$1718f78_3_8;
	r9 = 130;
	r10 = (float)r9;
	r8 = Urho3D__math_t_quaternion_create_fv(r10,r7);
	goto label$1718f78_3_15;
	label$1718f78_3_8:
	r9 = 130;
	r10 = (float)r9;
	r9 = 0;
	r11 = (float)r9;
	r9 = 0;
	r12 = (float)r9;
	r8 = Urho3D__math_t_quaternion_create(r10,r11,r12);
	label$1718f78_3_15:
	if( r4 == NULL ) hl_null_access();
	r13 = r4->abstractNode;
	if( !r13 ) goto label$1718f78_3_22;
	r15 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r14 = r15->context;
	r13 = r4->abstractNode;
	Urho3D__scene_node_set_rotation(r14,r13,r8);
	label$1718f78_3_22:
	r16 = 0.8000000000000000444;
	r10 = (float)r16;
	r16 = 0.8000000000000000444;
	r11 = (float)r16;
	r16 = 0.8000000000000000444;
	r12 = (float)r16;
	r7 = Urho3D__math_tvector3_create(r10,r11,r12);
	r13 = r4->abstractNode;
	if( !r13 ) goto label$1718f78_3_35;
	r15 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r14 = r15->context;
	r13 = r4->abstractNode;
	Urho3D__scene_node_set_scale(r14,r13,r7);
	label$1718f78_3_35:
	r13 = r4->abstractNode;
	if( !r13 ) goto label$1718f78_3_45;
	r15 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r14 = r15->context;
	r13 = r4->abstractNode;
	r18 = (String)s$StaticModel;
	r9 = 0;
	r19 = 0;
	r17 = Urho3D__scene_node_create_component(r14,r13,r18,r9,r19);
	goto label$1718f78_3_46;
	label$1718f78_3_45:
	r17 = NULL;
	label$1718f78_3_46:
	if( !r17 ) goto label$1718f78_3_53;
	r15 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r14 = r15->context;
	r20 = Urho3D__graphics_staticmodel_cast_from_component(r14,r17);
	r21 = (urho3d__StaticModel)hl_alloc_obj(&t$urho3d_StaticModel);
	urho3d_StaticModel_new(r21,r20);
	goto label$1718f78_3_54;
	label$1718f78_3_53:
	r21 = NULL;
	label$1718f78_3_54:
	r15 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r14 = r15->context;
	r18 = (String)s$Models_SMWeapon_mdl;
	r22 = Urho3D__graphics_model_create(r14,r18);
	if( r21 == NULL ) hl_null_access();
	r23 = urho3d_StaticModel_set_model(r21,r22);
	r15 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r14 = r15->context;
	r18 = (String)s$Materials_SMWeapon_xml;
	r24 = Urho3D__graphics_material_create(r14,r18);
	r25 = urho3d_StaticModel_set_material(r21,r24);
	if( r3 == NULL ) hl_null_access();
	r26 = (actions__MoveBy)hl_alloc_obj(&t$actions_MoveBy);
	r16 = 5.;
	actions_MoveBy_new(r26,r16,r1);
	actions_ActionGroup_Push(r3,((actions__FiniteTimeAction)r26),r4);
	return;
}

void samplygame_Joysticks_bulletNodeRemove(samplygame__Joysticks r0,actions__ActionID r1) {
	if( r1 == NULL ) hl_null_access();
	actions_ActionID_DeleteTargets(r1);
	return;
}

