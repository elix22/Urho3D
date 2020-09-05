﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <samplygame/MachineGun.h>
#include <hl/natives.h>
#include <urho3d/_Context/Context_Impl_.h>
#include <urho3d/StaticModel.h>
#include <urho3d/_Vector3/Vector3_Impl_.h>
#include <urho3d/actions/MoveBy.h>
#include <urho3d/actions/ActionID.h>
#include <urho3d/actions/ActionDef.h>
#include <urho3d/actions/FiniteTimeActionState.h>
urho3d__Node samplygame_Weapon_CreateRigidBullet(samplygame__Weapon,bool,hl_urho3d_math_vector3*);
extern urho3d___Context__$Context_Impl_ g$_urho3d__Context_Context_Impl_;
extern String s$StaticModel;
extern hl_type t$urho3d_StaticModel;
void urho3d_StaticModel_new(urho3d__StaticModel,hl_urho3d_graphics_staticmodel*);
extern String s$Models_Box_mdl;
hl_urho3d_graphics_model* urho3d_StaticModel_set_model(urho3d__StaticModel,hl_urho3d_graphics_model*);
extern String s$Materials_MachineGun_xml;
hl_urho3d_graphics_material* urho3d_StaticModel_set_material(urho3d__StaticModel,hl_urho3d_graphics_material*);
extern urho3d___Vector3__$Vector3_Impl_ g$_urho3d__Vector3_Vector3_Impl_;
extern String s$Sounds_MachineGun_wav;
void urho3d_SoundSource_Play(urho3d__SoundSource,hl_urho3d_audio_sound*,vdynamic*,vdynamic*,vdynamic*);
extern hl_type t$urho3d_actions_MoveBy;
void urho3d_actions_MoveBy_new(urho3d__actions__MoveBy,double,hl_urho3d_math_vector3*);
void samplygame_MachineGun_bulletNodeRemove(samplygame__MachineGun,urho3d__actions__ActionID);
extern hl_type t$fun_7ca3bb3;
#include <urho3d/actions/FiniteTimeAction.h>
urho3d__actions__ActionID urho3d_actions_ActionManager_AddAction(urho3d__actions__ActionDef,urho3d__actions__FiniteTimeAction,urho3d__Node,urho3d__actions__FiniteTimeActionState,vclosure*);
void urho3d_actions_ActionID_DeleteTargets(urho3d__actions__ActionID);
urho3d__Node urho3d_Component_get_node(urho3d__Component);
extern String s$SoundSource;
extern hl_type t$urho3d_SoundSource;
void urho3d_SoundSource_new(urho3d__SoundSource,hl_urho3d_audio_sound_source*);
float urho3d_SoundSource_set_gain(urho3d__SoundSource,float);
void samplygame_Weapon_new(samplygame__Weapon,vdynamic*);

void samplygame_MachineGun_OnFire(samplygame__MachineGun r0,bool r1) {
	String r18;
	urho3d__SoundSource r32;
	urho3d__actions__ActionDef r39;
	hl_urho3d_scene_component *r17;
	urho3d__actions__FiniteTimeActionState r40;
	urho3d___Vector3__$Vector3_Impl_ r29;
	urho3d__StaticModel r21;
	bool r6;
	urho3d__actions__MoveBy r37;
	hl_urho3d_audio_sound *r31;
	hl_urho3d_math_vector3 *r7;
	urho3d__Node r5;
	hl_urho3d_math_tquaternion *r30;
	hl_urho3d_graphics_material *r24, *r25;
	urho3d___Context__$Context_Impl_ r15;
	urho3d_context *r14;
	hl_urho3d_scene_node *r13;
	float r9, r11, r12, r36;
	vclosure *r41;
	hl_urho3d_graphics_staticmodel *r20;
	double r2, r3;
	vdynamic *r33, *r34, *r35;
	hl_urho3d_math_tvector3 *r8, *r16, *r26, *r27, *r28;
	urho3d__actions__ActionID r38;
	hl_urho3d_graphics_model *r22, *r23;
	int r10, r19;
	r2 = r0->currentGunOffset;
	r3 = r0->GunOffsetSize;
	r2 = r2 + r3;
	r0->currentGunOffset = r2;
	r2 = r0->currentGunOffset;
	r3 = r0->GunOffsetSize;
	if( !(r3 < r2) ) goto label$430a900_1_10;
	r2 = r0->GunOffsetSize;
	r2 = -r2;
	r0->currentGunOffset = r2;
	label$430a900_1_10:
	r7 = NULL;
	r5 = samplygame_Weapon_CreateRigidBullet(((samplygame__Weapon)r0),r1,r7);
	r2 = r0->currentGunOffset;
	r9 = (float)r2;
	r10 = 0;
	r11 = (float)r10;
	r10 = 0;
	r12 = (float)r10;
	r8 = Urho3D__math_tvector3_create(r9,r11,r12);
	if( r5 == NULL ) hl_null_access();
	r13 = r5->abstractNode;
	if( !r13 ) goto label$430a900_1_27;
	r15 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r14 = r15->context;
	r13 = r5->abstractNode;
	r10 = 0;
	Urho3D__scene_node_translate(r14,r13,r8,r10);
	label$430a900_1_27:
	r13 = r5->abstractNode;
	if( !r13 ) goto label$430a900_1_37;
	r15 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r14 = r15->context;
	r13 = r5->abstractNode;
	r18 = (String)s$StaticModel;
	r10 = 0;
	r19 = 0;
	r17 = Urho3D__scene_node_create_component(r14,r13,r18,r10,r19);
	goto label$430a900_1_38;
	label$430a900_1_37:
	r17 = NULL;
	label$430a900_1_38:
	if( !r17 ) goto label$430a900_1_45;
	r15 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r14 = r15->context;
	r20 = Urho3D__graphics_staticmodel_cast_from_component(r14,r17);
	r21 = (urho3d__StaticModel)hl_alloc_obj(&t$urho3d_StaticModel);
	urho3d_StaticModel_new(r21,r20);
	goto label$430a900_1_46;
	label$430a900_1_45:
	r21 = NULL;
	label$430a900_1_46:
	r15 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r14 = r15->context;
	r18 = (String)s$Models_Box_mdl;
	r22 = Urho3D__graphics_model_create(r14,r18);
	if( r21 == NULL ) hl_null_access();
	r23 = urho3d_StaticModel_set_model(r21,r22);
	r15 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r14 = r15->context;
	r18 = (String)s$Materials_MachineGun_xml;
	r24 = Urho3D__graphics_material_create(r14,r18);
	r25 = urho3d_StaticModel_set_material(r21,r24);
	r13 = r5->abstractNode;
	if( !r13 ) goto label$430a900_1_64;
	r15 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r14 = r15->context;
	r13 = r5->abstractNode;
	r16 = Urho3D__scene_node_get_world_position(r14,r13);
	goto label$430a900_1_71;
	label$430a900_1_64:
	r2 = 0.;
	r9 = (float)r2;
	r2 = 0.;
	r11 = (float)r2;
	r2 = 0.;
	r12 = (float)r2;
	r16 = Urho3D__math_tvector3_create(r9,r11,r12);
	label$430a900_1_71:
	r9 = Urho3D__math_tvector3_get_x(r16);
	r2 = (double)r9;
	r9 = (float)r2;
	r10 = 10;
	r11 = (float)r10;
	r10 = -10;
	r12 = (float)r10;
	r16 = Urho3D__math_tvector3_create(r9,r11,r12);
	r10 = 0;
	r9 = (float)r10;
	r10 = 1;
	r11 = (float)r10;
	r10 = -1;
	r12 = (float)r10;
	r26 = Urho3D__math_tvector3_create(r9,r11,r12);
	r27 = r26;
	r13 = r5->abstractNode;
	if( !r13 ) goto label$430a900_1_99;
	if( r26 ) goto label$430a900_1_94;
	r29 = (urho3d___Vector3__$Vector3_Impl_)g$_urho3d__Vector3_Vector3_Impl_;
	r7 = r29->UP;
	r28 = Urho3D__math_tvector3_cast_from_vector3(r7);
	r27 = r28;
	label$430a900_1_94:
	r15 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r14 = r15->context;
	r13 = r5->abstractNode;
	r10 = 2;
	r6 = Urho3D__scene_node_look_at(r14,r13,r16,r27,r10);
	label$430a900_1_99:
	r8 = NULL;
	if( !r8 ) goto label$430a900_1_105;
	r10 = 0;
	r9 = (float)r10;
	r30 = Urho3D__math_t_quaternion_create_fv(r9,r8);
	goto label$430a900_1_112;
	label$430a900_1_105:
	r10 = 0;
	r9 = (float)r10;
	r10 = 45;
	r11 = (float)r10;
	r10 = 0;
	r12 = (float)r10;
	r30 = Urho3D__math_t_quaternion_create(r9,r11,r12);
	label$430a900_1_112:
	r13 = r5->abstractNode;
	if( !r13 ) goto label$430a900_1_119;
	r15 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r14 = r15->context;
	r13 = r5->abstractNode;
	r10 = 0;
	Urho3D__scene_node_rotate(r14,r13,r30,r10);
	label$430a900_1_119:
	r2 = 0.1000000000000000056;
	r9 = (float)r2;
	r2 = 0.2999999999999999889;
	r11 = (float)r2;
	r2 = 0.1000000000000000056;
	r12 = (float)r2;
	r8 = Urho3D__math_tvector3_create(r9,r11,r12);
	r13 = r5->abstractNode;
	if( !r13 ) goto label$430a900_1_132;
	r15 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r14 = r15->context;
	r13 = r5->abstractNode;
	Urho3D__scene_node_set_scale(r14,r13,r8);
	label$430a900_1_132:
	r15 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r14 = r15->context;
	r18 = (String)s$Sounds_MachineGun_wav;
	r31 = Urho3D__audio_sound_create(r14,r18);
	if( !r31 ) goto label$430a900_1_143;
	r32 = r0->soundSource;
	if( r32 == NULL ) hl_null_access();
	r33 = NULL;
	r34 = NULL;
	r35 = NULL;
	urho3d_SoundSource_Play(r32,r31,r33,r34,r35);
	label$430a900_1_143:
	r10 = 0;
	r9 = (float)r10;
	r10 = 10;
	r11 = (float)r10;
	r10 = 0;
	r12 = (float)r10;
	r8 = Urho3D__math_tvector3_create(r9,r11,r12);
	if( !r1 ) goto label$430a900_1_153;
	r10 = 1;
	goto label$430a900_1_154;
	label$430a900_1_153:
	r10 = -1;
	label$430a900_1_154:
	r9 = (float)r10;
	r11 = Urho3D__math_tvector3_get_x(r8);
	r2 = (double)r11;
	r3 = (double)r9;
	r2 = r2 * r3;
	r11 = (float)r2;
	r12 = Urho3D__math_tvector3_get_y(r8);
	r2 = (double)r12;
	r3 = (double)r9;
	r2 = r2 * r3;
	r12 = (float)r2;
	r36 = Urho3D__math_tvector3_get_z(r8);
	r2 = (double)r36;
	r3 = (double)r9;
	r2 = r2 * r3;
	r36 = (float)r2;
	r26 = Urho3D__math_tvector3_create(r11,r12,r36);
	r37 = (urho3d__actions__MoveBy)hl_alloc_obj(&t$urho3d_actions_MoveBy);
	r2 = 0.6999999999999999556;
	r7 = Urho3D__math_tvector3_cast_to_vector3(r26);
	urho3d_actions_MoveBy_new(r37,r2,r7);
	r39 = NULL;
	r40 = NULL;
	r41 = hl_alloc_closure_ptr(&t$fun_7ca3bb3,samplygame_MachineGun_bulletNodeRemove,r0);
	r38 = urho3d_actions_ActionManager_AddAction(r39,((urho3d__actions__FiniteTimeAction)r37),r5,r40,r41);
	return;
}

void samplygame_MachineGun_bulletNodeRemove(samplygame__MachineGun r0,urho3d__actions__ActionID r1) {
	if( r1 == NULL ) hl_null_access();
	urho3d_actions_ActionID_DeleteTargets(r1);
	return;
}

void samplygame_MachineGun_Init(samplygame__MachineGun r0) {
	String r7;
	urho3d__SoundSource r11;
	hl_urho3d_scene_component *r4;
	urho3d__Node r1;
	urho3d___Context__$Context_Impl_ r6;
	float r12;
	urho3d_context *r5;
	hl_urho3d_scene_node *r3;
	double r13;
	hl_urho3d_audio_sound_source *r10;
	int r8, r9;
	r1 = urho3d_Component_get_node(((urho3d__Component)r0));
	if( r1 == NULL ) hl_null_access();
	r3 = r1->abstractNode;
	if( !r3 ) goto label$430a900_3_12;
	r6 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r5 = r6->context;
	r3 = r1->abstractNode;
	r7 = (String)s$SoundSource;
	r8 = 0;
	r9 = 0;
	r4 = Urho3D__scene_node_create_component(r5,r3,r7,r8,r9);
	goto label$430a900_3_13;
	label$430a900_3_12:
	r4 = NULL;
	label$430a900_3_13:
	if( !r4 ) goto label$430a900_3_23;
	r6 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r5 = r6->context;
	r10 = Urho3D__audio_sound_source_cast_from_component(r5,r4);
	if( !r10 ) goto label$430a900_3_21;
	r11 = (urho3d__SoundSource)hl_alloc_obj(&t$urho3d_SoundSource);
	urho3d_SoundSource_new(r11,r10);
	goto label$430a900_3_22;
	label$430a900_3_21:
	r11 = NULL;
	label$430a900_3_22:
	goto label$430a900_3_24;
	label$430a900_3_23:
	r11 = NULL;
	label$430a900_3_24:
	r0->soundSource = r11;
	r11 = r0->soundSource;
	if( r11 == NULL ) hl_null_access();
	r13 = 0.1000000000000000056;
	r12 = (float)r13;
	r12 = urho3d_SoundSource_set_gain(r11,r12);
	r13 = (double)r12;
	return;
}

void samplygame_MachineGun_new(samplygame__MachineGun r0) {
	urho3d__SoundSource r1;
	double r2;
	vdynamic *r4;
	int r5;
	r1 = NULL;
	r0->soundSource = r1;
	r2 = -0.2000000000000000111;
	r0->currentGunOffset = r2;
	r2 = 0.2000000000000000111;
	r0->GunOffsetSize = r2;
	r4 = NULL;
	samplygame_Weapon_new(((samplygame__Weapon)r0),r4);
	r5 = 50;
	r0->ReloadDuration = r5;
	r5 = 3;
	r0->Damage = r5;
	return;
}

