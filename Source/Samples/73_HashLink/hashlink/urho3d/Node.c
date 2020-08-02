﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <urho3d/Node.h>
#include <urho3d/Component.h>
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
urho3d__Node urho3d_Component_set_node(urho3d__Component,urho3d__Node);
#include <hl/natives.h>
#include <urho3d/_Context/Context_Impl_.h>
extern String s$;
extern urho3d___Context__$Context_Impl_ g$_urho3d__Context_Context_Impl_;
extern hl_type t$urho3d_Node;
void urho3d_Node_new(urho3d__Node,hl_urho3d_scene_node*);
#include <urho3d/Scene.h>
extern hl_type t$urho3d_Component;
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
extern urho3d__$Scene g$_urho3d_Scene;

void urho3d_Node_bindComponent(urho3d__Node r0,urho3d__Component r1) {
	hl__types__ArrayObj r3;
	urho3d__Node r4;
	int r2;
	r3 = r0->components;
	if( r3 == NULL ) hl_null_access();
	r2 = hl_types_ArrayObj_push(r3,((vdynamic*)r1));
	if( r1 == NULL ) hl_null_access();
	r4 = urho3d_Component_set_node(r1,r0);
	return;
}

urho3d__Node urho3d_Node_CreateChild(urho3d__Node r0,String r1,int* r2,int* r3,bool* r4) {
	String r5;
	hl__types__ArrayObj r15;
	bool r8;
	urho3d__Node r14;
	urho3d___Context__$Context_Impl_ r11;
	urho3d_context *r10;
	hl_urho3d_scene_node *r9;
	int r6, r7, r12;
	if( r1 ) goto label$fd82567_2_3;
	r5 = (String)s$;
	r1 = r5;
	label$fd82567_2_3:
	if( r2 ) goto label$fd82567_2_6;
	r6 = 0;
	goto label$fd82567_2_7;
	label$fd82567_2_6:
	r6 = *r2;
	label$fd82567_2_7:
	if( r3 ) goto label$fd82567_2_10;
	r7 = 0;
	goto label$fd82567_2_11;
	label$fd82567_2_10:
	r7 = *r3;
	label$fd82567_2_11:
	if( r4 ) goto label$fd82567_2_14;
	r8 = false;
	goto label$fd82567_2_15;
	label$fd82567_2_14:
	r8 = *r4;
	label$fd82567_2_15:
	r11 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r10 = r11->context;
	r9 = r0->abstractNode;
	r9 = Urho3D__scene_node_create_child(r10,r9,r1,r6,r7,r8);
	r14 = (urho3d__Node)hl_alloc_obj(&t$urho3d_Node);
	urho3d_Node_new(r14,r9);
	r15 = r0->children;
	if( r15 == NULL ) hl_null_access();
	r12 = hl_types_ArrayObj_push(r15,((vdynamic*)r14));
	return r14;
}

hl_urho3d_scene_component* urho3d_Node_CreateComponent(urho3d__Node r0,String r1,int* r2,int* r3) {
	hl_urho3d_scene_component *r6;
	urho3d___Context__$Context_Impl_ r8;
	hl_urho3d_scene_node *r9;
	urho3d_context *r7;
	int r4, r5;
	if( r2 ) goto label$fd82567_3_3;
	r4 = 0;
	goto label$fd82567_3_4;
	label$fd82567_3_3:
	r4 = *r2;
	label$fd82567_3_4:
	if( r3 ) goto label$fd82567_3_7;
	r5 = 0;
	goto label$fd82567_3_8;
	label$fd82567_3_7:
	r5 = *r3;
	label$fd82567_3_8:
	r8 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r7 = r8->context;
	r9 = r0->abstractNode;
	r6 = Urho3D__scene_node_create_component(r7,r9,r1,r4,r5);
	return r6;
}

hl_urho3d_scene_component* urho3d_Node_GetComponent(urho3d__Node r0,String r1,bool* r2) {
	hl_urho3d_scene_component *r4;
	bool r3;
	urho3d___Context__$Context_Impl_ r6;
	hl_urho3d_scene_node *r7;
	urho3d_context *r5;
	if( r2 ) goto label$fd82567_4_3;
	r3 = false;
	goto label$fd82567_4_4;
	label$fd82567_4_3:
	r3 = *r2;
	label$fd82567_4_4:
	r6 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r5 = r6->context;
	r7 = r0->abstractNode;
	r4 = Urho3D__scene_node_get_component(r5,r7,r1,r3);
	return r4;
}

void urho3d_Node_AddComponent(urho3d__Node r0,urho3d__Component r1,int* r2,int* r3) {
	hl_urho3d_scene_component *r10;
	urho3d___Context__$Context_Impl_ r8;
	hl_urho3d_scene_node *r9;
	urho3d_context *r7;
	int r4, r5;
	if( r2 ) goto label$fd82567_5_3;
	r4 = 0;
	goto label$fd82567_5_4;
	label$fd82567_5_3:
	r4 = *r2;
	label$fd82567_5_4:
	if( r3 ) goto label$fd82567_5_7;
	r5 = 0;
	goto label$fd82567_5_8;
	label$fd82567_5_7:
	r5 = *r3;
	label$fd82567_5_8:
	urho3d_Node_bindComponent(r0,r1);
	r8 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r7 = r8->context;
	r9 = r0->abstractNode;
	if( r1 == NULL ) hl_null_access();
	r10 = r1->abstractComponent;
	Urho3D__scene_node_add_component(r7,r9,r10,r5,r4);
	return;
}

hl_urho3d_math_tvector3* urho3d_Node_get_position(urho3d__Node r0) {
	urho3d___Context__$Context_Impl_ r3;
	hl_urho3d_scene_node *r4;
	urho3d_context *r2;
	hl_urho3d_math_tvector3 *r1;
	r3 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r2 = r3->context;
	r4 = r0->abstractNode;
	r1 = Urho3D__scene_node_get_position(r2,r4);
	return r1;
}

hl_urho3d_math_tvector3* urho3d_Node_set_position(urho3d__Node r0,hl_urho3d_math_tvector3* r1) {
	urho3d___Context__$Context_Impl_ r4;
	hl_urho3d_scene_node *r5;
	urho3d_context *r3;
	r4 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r3 = r4->context;
	r5 = r0->abstractNode;
	Urho3D__scene_node_set_position(r3,r5,r1);
	return r1;
}

hl_urho3d_math_tvector3* urho3d_Node_get_direction(urho3d__Node r0) {
	urho3d___Context__$Context_Impl_ r3;
	hl_urho3d_scene_node *r4;
	urho3d_context *r2;
	hl_urho3d_math_tvector3 *r1;
	r3 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r2 = r3->context;
	r4 = r0->abstractNode;
	r1 = Urho3D__scene_node_get_direction(r2,r4);
	return r1;
}

hl_urho3d_math_tvector3* urho3d_Node_set_direction(urho3d__Node r0,hl_urho3d_math_tvector3* r1) {
	urho3d___Context__$Context_Impl_ r4;
	hl_urho3d_scene_node *r5;
	urho3d_context *r3;
	r4 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r3 = r4->context;
	r5 = r0->abstractNode;
	Urho3D__scene_node_set_direction(r3,r5,r1);
	return r1;
}

hl_urho3d_math_tvector3* urho3d_Node_get_scale(urho3d__Node r0) {
	urho3d___Context__$Context_Impl_ r3;
	hl_urho3d_scene_node *r4;
	urho3d_context *r2;
	hl_urho3d_math_tvector3 *r1;
	r3 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r2 = r3->context;
	r4 = r0->abstractNode;
	r1 = Urho3D__scene_node_get_scale(r2,r4);
	return r1;
}

hl_urho3d_math_tvector3* urho3d_Node_set_scale(urho3d__Node r0,hl_urho3d_math_tvector3* r1) {
	urho3d___Context__$Context_Impl_ r4;
	hl_urho3d_scene_node *r5;
	urho3d_context *r3;
	r4 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r3 = r4->context;
	r5 = r0->abstractNode;
	Urho3D__scene_node_set_scale(r3,r5,r1);
	return r1;
}

hl_urho3d_math_tquaternion* urho3d_Node_get_rotation(urho3d__Node r0) {
	hl_urho3d_math_tquaternion *r1;
	urho3d___Context__$Context_Impl_ r3;
	hl_urho3d_scene_node *r4;
	urho3d_context *r2;
	r3 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r2 = r3->context;
	r4 = r0->abstractNode;
	r1 = Urho3D__scene_node_get_rotation(r2,r4);
	return r1;
}

hl_urho3d_math_tquaternion* urho3d_Node_set_rotation(urho3d__Node r0,hl_urho3d_math_tquaternion* r1) {
	urho3d___Context__$Context_Impl_ r4;
	hl_urho3d_scene_node *r5;
	urho3d_context *r3;
	r4 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r3 = r4->context;
	r5 = r0->abstractNode;
	Urho3D__scene_node_set_rotation(r3,r5,r1);
	return r1;
}

void urho3d_Node_Rotate(urho3d__Node r0,hl_urho3d_math_tquaternion* r1,int* r2) {
	urho3d___Context__$Context_Impl_ r6;
	hl_urho3d_scene_node *r7;
	urho3d_context *r5;
	int r3;
	if( r2 ) goto label$fd82567_14_3;
	r3 = 0;
	goto label$fd82567_14_4;
	label$fd82567_14_3:
	r3 = *r2;
	label$fd82567_14_4:
	r6 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r5 = r6->context;
	r7 = r0->abstractNode;
	Urho3D__scene_node_rotate(r5,r7,r1,r3);
	return;
}

void urho3d_Node_RotateEuler(urho3d__Node r0,double r1,double r2,double r3,int* r4) {
	urho3d___Context__$Context_Impl_ r8;
	float r10, r11, r12;
	hl_urho3d_scene_node *r9;
	urho3d_context *r7;
	int r5;
	if( r4 ) goto label$fd82567_15_3;
	r5 = 0;
	goto label$fd82567_15_4;
	label$fd82567_15_3:
	r5 = *r4;
	label$fd82567_15_4:
	r8 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r7 = r8->context;
	r9 = r0->abstractNode;
	r10 = (float)r1;
	r11 = (float)r2;
	r12 = (float)r3;
	Urho3D__scene_node_rotate_euler(r7,r9,r10,r11,r12,r5);
	return;
}

void urho3d_Node_Translate(urho3d__Node r0,hl_urho3d_math_tvector3* r1,int* r2) {
	urho3d___Context__$Context_Impl_ r6;
	hl_urho3d_scene_node *r7;
	urho3d_context *r5;
	int r3;
	if( r2 ) goto label$fd82567_16_3;
	r3 = 0;
	goto label$fd82567_16_4;
	label$fd82567_16_3:
	r3 = *r2;
	label$fd82567_16_4:
	r6 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r5 = r6->context;
	r7 = r0->abstractNode;
	Urho3D__scene_node_translate(r5,r7,r1,r3);
	return;
}

void urho3d_Node_Yaw(urho3d__Node r0,double r1,int* r2) {
	urho3d___Context__$Context_Impl_ r6;
	float r8;
	hl_urho3d_scene_node *r7;
	urho3d_context *r5;
	int r3;
	if( r2 ) goto label$fd82567_17_3;
	r3 = 0;
	goto label$fd82567_17_4;
	label$fd82567_17_3:
	r3 = *r2;
	label$fd82567_17_4:
	r6 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r5 = r6->context;
	r7 = r0->abstractNode;
	r8 = (float)r1;
	Urho3D__scene_node_yaw(r5,r7,r8,r3);
	return;
}

void urho3d_Node_Pitch(urho3d__Node r0,double r1,int* r2) {
	urho3d___Context__$Context_Impl_ r6;
	float r8;
	hl_urho3d_scene_node *r7;
	urho3d_context *r5;
	int r3;
	if( r2 ) goto label$fd82567_18_3;
	r3 = 0;
	goto label$fd82567_18_4;
	label$fd82567_18_3:
	r3 = *r2;
	label$fd82567_18_4:
	r6 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r5 = r6->context;
	r7 = r0->abstractNode;
	r8 = (float)r1;
	Urho3D__scene_node_pitch(r5,r7,r8,r3);
	return;
}

void urho3d_Node_Roll(urho3d__Node r0,double r1,int* r2) {
	urho3d___Context__$Context_Impl_ r6;
	float r8;
	hl_urho3d_scene_node *r7;
	urho3d_context *r5;
	int r3;
	if( r2 ) goto label$fd82567_19_3;
	r3 = 0;
	goto label$fd82567_19_4;
	label$fd82567_19_3:
	r3 = *r2;
	label$fd82567_19_4:
	r6 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r5 = r6->context;
	r7 = r0->abstractNode;
	r8 = (float)r1;
	Urho3D__scene_node_roll(r5,r7,r8,r3);
	return;
}

void urho3d_Node_new(urho3d__Node r0,hl_urho3d_scene_node* r1) {
	hl__types__ArrayObj r3;
	hl_type *r5;
	urho3d__Scene r10;
	urho3d___Context__$Context_Impl_ r9;
	urho3d__$Scene r11;
	urho3d_context *r8;
	hl_urho3d_scene_node *r2;
	int r6;
	varray *r4;
	r2 = NULL;
	r0->abstractNode = r2;
	r5 = &t$urho3d_Component;
	r6 = 0;
	r4 = hl_alloc_array(r5,r6);
	r3 = hl_types_ArrayObj_alloc(r4);
	r0->components = r3;
	r5 = &t$urho3d_Node;
	r6 = 0;
	r4 = hl_alloc_array(r5,r6);
	r3 = hl_types_ArrayObj_alloc(r4);
	r0->children = r3;
	if( !r1 ) goto label$fd82567_20_15;
	r0->abstractNode = r1;
	goto label$fd82567_20_19;
	label$fd82567_20_15:
	r9 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r8 = r9->context;
	r2 = Urho3D__scene_node_create(r8);
	r0->abstractNode = r2;
	label$fd82567_20_19:
	r11 = (urho3d__$Scene)g$_urho3d_Scene;
	r10 = r11->currentScene;
	if( !r10 ) goto label$fd82567_20_28;
	r11 = (urho3d__$Scene)g$_urho3d_Scene;
	r10 = r11->currentScene;
	if( r10 == NULL ) hl_null_access();
	r3 = r10->nodes;
	if( r3 == NULL ) hl_null_access();
	r6 = hl_types_ArrayObj_push(r3,((vdynamic*)r0));
	label$fd82567_20_28:
	return;
}

