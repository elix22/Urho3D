﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <_std/SkeletalAnimationSample.h>
#include <hl/types/ArrayDyn.h>
#include <haxe/Log.h>
extern haxe__$Log g$_haxe_Log;
extern String s$Setup;
extern hl_type t$vrt_329ffa8;
extern String s$0b9c65a;
extern hl_type t$String;
extern hl_type t$_i32;
extern String s$SkeletalAnimationSample;
extern hl_type t$vrt_eaa6a3b;
void SkeletalAnimationSample_CreateScene(SkeletalAnimationSample);
void SkeletalAnimationSample_SetupViewport(SkeletalAnimationSample);
void SkeletalAnimationSample_SubscribeToEvents(SkeletalAnimationSample);
#include <hl/natives.h>
#include <urho3d/_Context/Context_Impl_.h>
#include <haxe/ds/ObjectMap.h>
#include <haxe/ds/StringMap.h>
#include <urho3d/Zone.h>
#include <urho3d/StaticModel.h>
#include <urho3d/Light.h>
#include <urho3d/AnimatedModel.h>
#include <_std/Mover.h>
#include <urho3d/Component.h>
#include <urho3d/Camera.h>
extern hl_type t$urho3d_Scene;
void urho3d_Scene_new(urho3d__Scene,hl_urho3d_scene_scene*);
extern urho3d___Context__$Context_Impl_ g$_urho3d__Context_Context_Impl_;
extern String s$Octree;
extern String s$DebugRenderer;
extern String s$Zone;
extern String s$;
extern hl_type t$urho3d_Node;
void urho3d_Node_new(urho3d__Node,hl_urho3d_scene_node*);
hl_urho3d_scene_node_ptr* urho3d_Node_get_pointer(urho3d__Node);
extern hl_type t$hl_urho3d_scene_node_ptr;
void haxe_ds_ObjectMap_set(haxe__ds__ObjectMap,vdynamic*,vdynamic*);
int String___compare(String,vdynamic*);
void haxe_ds_StringMap_set(haxe__ds__StringMap,String,vdynamic*);
extern hl_type t$urho3d_Zone;
void urho3d_Zone_new(urho3d__Zone,hl_urho3d_graphics_zone*);
hl_urho3d_math_boundingbox* urho3d_Zone_set_boundingBox(urho3d__Zone,hl_urho3d_math_boundingbox*);
hl_urho3d_color* urho3d_Zone_set_ambientColor(urho3d__Zone,hl_urho3d_color*);
hl_urho3d_color* urho3d_Zone_set_fogColor(urho3d__Zone,hl_urho3d_color*);
float urho3d_Zone_set_fogStart(urho3d__Zone,float);
float urho3d_Zone_set_fogEnd(urho3d__Zone,float);
extern String s$Plane;
extern String s$StaticModel;
extern hl_type t$urho3d_StaticModel;
void urho3d_StaticModel_new(urho3d__StaticModel,hl_urho3d_graphics_staticmodel*);
extern String s$Models_Plane_mdl;
hl_urho3d_graphics_model* urho3d_StaticModel_set_model(urho3d__StaticModel,hl_urho3d_graphics_model*);
extern String s$Materials_StoneTiled_xml;
hl_urho3d_graphics_material* urho3d_StaticModel_set_material(urho3d__StaticModel,hl_urho3d_graphics_material*);
extern String s$DirectionalLight;
extern String s$Light;
extern hl_type t$urho3d_Light;
void urho3d_Light_new(urho3d__Light,hl_urho3d_graphics_light*);
int urho3d_Light_set_lightType(urho3d__Light,int);
hl_urho3d_color* urho3d_Light_set_color(urho3d__Light,hl_urho3d_color*);
bool urho3d_Light_set_castShadows(urho3d__Light,bool);
hl_urho3d_graphics_light_bias_parameters* urho3d__BiasParameters_BiasParameters_Impl___new(double,double,double*);
hl_urho3d_graphics_light_bias_parameters* urho3d_Light_set_shadowBias(urho3d__Light,hl_urho3d_graphics_light_bias_parameters*);
hl_urho3d_graphics_light_cascade_parameters* urho3d__CascadeParameters_CascadeParameters_Impl___new(double,double,double,double,double,double*);
hl_urho3d_graphics_light_cascade_parameters* urho3d_Light_set_shadowCascade(urho3d__Light,hl_urho3d_graphics_light_cascade_parameters*);
extern String s$Jill;
int Std_random(int);
extern String s$AnimatedModel;
extern hl_type t$urho3d_AnimatedModel;
void urho3d_AnimatedModel_new(urho3d__AnimatedModel,hl_urho3d_graphics_animatedmodel*);
extern String s$Models_Kachujin_Kachujin_mdl;
hl_urho3d_graphics_model* urho3d_AnimatedModel_set_model(urho3d__AnimatedModel,hl_urho3d_graphics_model*);
extern String s$48be8bf;
hl_urho3d_graphics_material* urho3d_AnimatedModel_set_material(urho3d__AnimatedModel,hl_urho3d_graphics_material*);
bool urho3d_AnimatedModel_set_castShadows(urho3d__AnimatedModel,bool);
extern String s$e522d85;
hl_urho3d_graphics_tanimation_state* urho3d_AnimatedModel_AddAnimationState(urho3d__AnimatedModel,hl_urho3d_graphics_animation*);
float urho3d__AnimationState_AnimationState_Impl__set_weight(hl_urho3d_graphics_tanimation_state*,float);
bool urho3d__AnimationState_AnimationState_Impl__set_looped(hl_urho3d_graphics_tanimation_state*,bool);
float urho3d__Animation_Animation_Impl__get_length(hl_urho3d_graphics_animation*);
extern hl_type t$_f64;
float urho3d__AnimationState_AnimationState_Impl__set_time(hl_urho3d_graphics_tanimation_state*,float);
extern hl_type t$Mover;
void Mover_new(Mover);
void Mover_SetParameters(Mover,double,double,hl_urho3d_math_boundingbox*);
extern hl_type t$urho3d_Component;
hl_urho3d_scene_component_ptr* urho3d_Component_get_pointer(urho3d__Component);
extern hl_type t$hl_urho3d_scene_component_ptr;
urho3d__Node urho3d_Component_set_node(urho3d__Component,urho3d__Node);
extern hl_type t$_dyn;
extern hl_type t$hl_urho3d_scene_component;
String Std_string(vdynamic*);
vdynamic* haxe_ds_StringMap_get(haxe__ds__StringMap,String);
extern hl_type t$hl_types_ArrayDyn;
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
#include <hl/types/ArrayBase.h>
hl__types__ArrayDyn hl_types_ArrayDyn_alloc(hl__types__ArrayBase,bool*);
int hl_types_ArrayDyn_push(hl__types__ArrayDyn,vdynamic*);
extern String s$Camera;
extern hl_type t$urho3d_Camera;
void urho3d_Camera_new(urho3d__Camera,hl_urho3d_graphics_camera*);
void urho3d_Renderer_SetViewport(int,hl_urho3d_graphics_viewport*);
extern String s$Update;
extern String s$HandleUpdate;
void urho3d_Application_SubscribeToEvent(urho3d__Application,hl_urho3d_core_object*,hl_urho3d_stringhash*,String);
int urho3d_Input_get_numTouches(void);
hl_urho3d_math_tintvector2* urho3d__TouchState_TouchState_Impl__get_delta(hl_urho3d_input_touch_state*);
float urho3d_Camera_get_fov(urho3d__Camera);
int urho3d_Graphics_get_height(void);
vvirtual* urho3d_Input_get_mouseMove(void);
extern String s$TimeStep;
void urho3d_Application_new(urho3d__Application);

void SkeletalAnimationSample_Setup(SkeletalAnimationSample r0) {
	String r4, r6;
	vvirtual *r5, *r8;
	haxe__$Log r3;
	vclosure *r2;
	int r7;
	r3 = (haxe__$Log)g$_haxe_Log;
	r2 = r3->trace;
	if( r2 == NULL ) hl_null_access();
	r4 = (String)s$Setup;
	r5 = hl_alloc_virtual(&t$vrt_329ffa8);
	r6 = (String)s$0b9c65a;
	if( hl_vfields(r5)[1] ) *(String*)(hl_vfields(r5)[1]) = (String)r6; else hl_dyn_setp(r5->value,37969014/*fileName*/,&t$String,r6);
	r7 = 17;
	if( hl_vfields(r5)[2] ) *(int*)(hl_vfields(r5)[2]) = (int)r7; else hl_dyn_seti(r5->value,371360620/*lineNumber*/,&t$_i32,r7);
	r6 = (String)s$SkeletalAnimationSample;
	if( hl_vfields(r5)[0] ) *(String*)(hl_vfields(r5)[0]) = (String)r6; else hl_dyn_setp(r5->value,-63073762/*className*/,&t$String,r6);
	r6 = (String)s$Setup;
	if( hl_vfields(r5)[3] ) *(String*)(hl_vfields(r5)[3]) = (String)r6; else hl_dyn_setp(r5->value,302979532/*methodName*/,&t$String,r6);
	r8 = hl_to_virtual(&t$vrt_eaa6a3b,(vdynamic*)r5);
	r2->hasValue ? ((void (*)(vdynamic*,vdynamic*,vvirtual*))r2->fun)((vdynamic*)r2->value,((vdynamic*)r4),r8) : ((void (*)(vdynamic*,vvirtual*))r2->fun)(((vdynamic*)r4),r8);
	return;
}

void SkeletalAnimationSample_Start(SkeletalAnimationSample r0) {
	SkeletalAnimationSample_CreateScene(r0);
	SkeletalAnimationSample_SetupViewport(r0);
	SkeletalAnimationSample_SubscribeToEvents(r0);
	return;
}

void SkeletalAnimationSample_CreateScene(SkeletalAnimationSample r0) {
	bool *r79;
	String r9, r12, r18, r36, r45, r59;
	hl_urho3d_color *r31, *r33, *r34, *r49;
	hl_urho3d_scene_node_ptr *r16;
	hl_urho3d_scene_component *r6;
	urho3d__StaticModel r39;
	bool r13;
	urho3d__AnimatedModel r66;
	hl_urho3d_graphics_zone *r20;
	hl_urho3d_math_quaternion *r63;
	hl_urho3d_math_vector3 *r22, *r27, *r29;
	urho3d__Node r14, r46, r60;
	urho3d__Scene r1, r5, r35, r44;
	hl_urho3d_math_tquaternion *r64;
	hl_urho3d_graphics_camera *r80;
	urho3d__Component r73;
	hl_urho3d_graphics_material *r42, *r43, *r68;
	urho3d_context *r7;
	hl_urho3d_scene_component_ptr *r74;
	hl_urho3d_graphics_animatedmodel *r65;
	urho3d__Light r48;
	hl_urho3d_graphics_light_cascade_parameters *r53;
	vdynamic *r17, *r61, *r62, *r72;
	hl_urho3d_scene_scene *r2;
	hl_urho3d_graphics_model *r40, *r41, *r67;
	int r10, r11, r57, r58;
	urho3d__Camera r81;
	haxe__ds__ObjectMap r15;
	hl__types__ArrayObj r78;
	haxe__ds__StringMap r19;
	hl_type *r77;
	urho3d___Context__$Context_Impl_ r8;
	hl_urho3d_graphics_tanimation_state *r70;
	urho3d__Zone r21;
	hl_urho3d_graphics_light_bias_parameters *r50;
	hl_urho3d_graphics_animation *r69;
	float r24, r25, r26, r32;
	hl_urho3d_scene_node *r4;
	hl__types__ArrayDyn r75;
	hl_urho3d_graphics_light *r47;
	hl_urho3d_graphics_staticmodel *r38;
	double r23, r51, r54, r55, r56;
	double *r52;
	hl_urho3d_math_tvector3 *r37;
	varray *r76;
	Mover r71;
	hl_urho3d_math_boundingbox *r28, *r30;
	r1 = (urho3d__Scene)hl_alloc_obj(&t$urho3d_Scene);
	r2 = NULL;
	urho3d_Scene_new(r1,r2);
	r0->scene = r1;
	r1 = r0->scene;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->abstractNode;
	if( !r4 ) goto label$90ddd8b_3_15;
	r8 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r7 = r8->context;
	r4 = r1->abstractNode;
	r9 = (String)s$Octree;
	r10 = 0;
	r11 = 0;
	r6 = Urho3D__scene_node_create_component(r7,r4,r9,r10,r11);
	label$90ddd8b_3_15:
	r1 = r0->scene;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->abstractNode;
	if( !r4 ) goto label$90ddd8b_3_26;
	r8 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r7 = r8->context;
	r4 = r1->abstractNode;
	r9 = (String)s$DebugRenderer;
	r10 = 0;
	r11 = 0;
	r6 = Urho3D__scene_node_create_component(r7,r4,r9,r10,r11);
	label$90ddd8b_3_26:
	r1 = r0->scene;
	r9 = (String)s$Zone;
	if( r9 ) goto label$90ddd8b_3_31;
	r12 = (String)s$;
	r9 = r12;
	label$90ddd8b_3_31:
	if( r1 == NULL ) hl_null_access();
	r4 = r1->abstractNode;
	if( !r4 ) goto label$90ddd8b_3_55;
	r8 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r7 = r8->context;
	r4 = r1->abstractNode;
	r10 = 0;
	r11 = 0;
	r13 = false;
	r4 = Urho3D__scene_node_create_child(r7,r4,r9,r10,r11,r13);
	r14 = (urho3d__Node)hl_alloc_obj(&t$urho3d_Node);
	urho3d_Node_new(r14,r4);
	r15 = r1->children_pointers_map;
	if( r15 == NULL ) hl_null_access();
	r16 = urho3d_Node_get_pointer(r14);
	if( r16 == NULL ) r17 = NULL; else {
		r17 = hl_alloc_dynamic(&t$hl_urho3d_scene_node_ptr);
		r17->v.ptr = r16;
	}
	haxe_ds_ObjectMap_set(r15,r17,((vdynamic*)r14));
	r18 = (String)s$;
	if( r9 == r18 || (r9 && r18 && String___compare(r9,(vdynamic*)r18) == 0) ) goto label$90ddd8b_3_53;
	r19 = r1->children_name_map;
	if( r19 == NULL ) hl_null_access();
	haxe_ds_StringMap_set(r19,r9,((vdynamic*)r14));
	label$90ddd8b_3_53:
	r14->_parent = ((urho3d__Node)r1);
	goto label$90ddd8b_3_56;
	label$90ddd8b_3_55:
	r14 = NULL;
	label$90ddd8b_3_56:
	if( r14 == NULL ) hl_null_access();
	r4 = r14->abstractNode;
	if( !r4 ) goto label$90ddd8b_3_67;
	r8 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r7 = r8->context;
	r4 = r14->abstractNode;
	r12 = (String)s$Zone;
	r10 = 0;
	r11 = 0;
	r6 = Urho3D__scene_node_create_component(r7,r4,r12,r10,r11);
	goto label$90ddd8b_3_68;
	label$90ddd8b_3_67:
	r6 = NULL;
	label$90ddd8b_3_68:
	if( !r6 ) goto label$90ddd8b_3_75;
	r8 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r7 = r8->context;
	r20 = Urho3D__graphics_zone_cast_from_component(r7,r6);
	r21 = (urho3d__Zone)hl_alloc_obj(&t$urho3d_Zone);
	urho3d_Zone_new(r21,r20);
	goto label$90ddd8b_3_76;
	label$90ddd8b_3_75:
	r21 = NULL;
	label$90ddd8b_3_76:
	r23 = -1000.;
	r24 = (float)r23;
	r23 = -1000.;
	r25 = (float)r23;
	r23 = -1000.;
	r26 = (float)r23;
	r22 = Urho3D__math_vector3_create(r24,r25,r26);
	r23 = 1000.;
	r24 = (float)r23;
	r23 = 1000.;
	r25 = (float)r23;
	r23 = 1000.;
	r26 = (float)r23;
	r27 = Urho3D__math_vector3_create(r24,r25,r26);
	r28 = Urho3D__math_boundingbox_create_v3_v3(r22,r27);
	if( r21 == NULL ) hl_null_access();
	r30 = urho3d_Zone_set_boundingBox(r21,r28);
	r23 = 0.5;
	r24 = (float)r23;
	r23 = 0.5;
	r25 = (float)r23;
	r23 = 0.5;
	r26 = (float)r23;
	r23 = 1.;
	r32 = (float)r23;
	r31 = Urho3D__math_create_color(r24,r25,r26,r32);
	r33 = urho3d_Zone_set_ambientColor(r21,r31);
	r23 = 0.4000000000000000222;
	r24 = (float)r23;
	r23 = 0.5;
	r25 = (float)r23;
	r23 = 0.8000000000000000444;
	r26 = (float)r23;
	r23 = 1.;
	r32 = (float)r23;
	r33 = Urho3D__math_create_color(r24,r25,r26,r32);
	r34 = urho3d_Zone_set_fogColor(r21,r33);
	r23 = 100.;
	r24 = (float)r23;
	r24 = urho3d_Zone_set_fogStart(r21,r24);
	r23 = (double)r24;
	r23 = 300.;
	r24 = (float)r23;
	r24 = urho3d_Zone_set_fogEnd(r21,r24);
	r23 = (double)r24;
	r5 = r0->scene;
	r12 = (String)s$Plane;
	if( r12 ) goto label$90ddd8b_3_126;
	r18 = (String)s$;
	r12 = r18;
	label$90ddd8b_3_126:
	if( r5 == NULL ) hl_null_access();
	r4 = r5->abstractNode;
	if( !r4 ) goto label$90ddd8b_3_150;
	r8 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r7 = r8->context;
	r4 = r5->abstractNode;
	r10 = 0;
	r11 = 0;
	r13 = false;
	r4 = Urho3D__scene_node_create_child(r7,r4,r12,r10,r11,r13);
	r14 = (urho3d__Node)hl_alloc_obj(&t$urho3d_Node);
	urho3d_Node_new(r14,r4);
	r15 = r5->children_pointers_map;
	if( r15 == NULL ) hl_null_access();
	r16 = urho3d_Node_get_pointer(r14);
	if( r16 == NULL ) r17 = NULL; else {
		r17 = hl_alloc_dynamic(&t$hl_urho3d_scene_node_ptr);
		r17->v.ptr = r16;
	}
	haxe_ds_ObjectMap_set(r15,r17,((vdynamic*)r14));
	r36 = (String)s$;
	if( r12 == r36 || (r12 && r36 && String___compare(r12,(vdynamic*)r36) == 0) ) goto label$90ddd8b_3_148;
	r19 = r5->children_name_map;
	if( r19 == NULL ) hl_null_access();
	haxe_ds_StringMap_set(r19,r12,((vdynamic*)r14));
	label$90ddd8b_3_148:
	r14->_parent = ((urho3d__Node)r5);
	goto label$90ddd8b_3_151;
	label$90ddd8b_3_150:
	r14 = NULL;
	label$90ddd8b_3_151:
	r23 = 50.;
	r24 = (float)r23;
	r23 = 1.;
	r25 = (float)r23;
	r23 = 50.;
	r26 = (float)r23;
	r37 = Urho3D__math_tvector3_create(r24,r25,r26);
	if( r14 == NULL ) hl_null_access();
	r4 = r14->abstractNode;
	if( !r4 ) goto label$90ddd8b_3_165;
	r8 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r7 = r8->context;
	r4 = r14->abstractNode;
	Urho3D__scene_node_set_scale(r7,r4,r37);
	label$90ddd8b_3_165:
	r4 = r14->abstractNode;
	if( !r4 ) goto label$90ddd8b_3_175;
	r8 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r7 = r8->context;
	r4 = r14->abstractNode;
	r18 = (String)s$StaticModel;
	r10 = 0;
	r11 = 0;
	r6 = Urho3D__scene_node_create_component(r7,r4,r18,r10,r11);
	goto label$90ddd8b_3_176;
	label$90ddd8b_3_175:
	r6 = NULL;
	label$90ddd8b_3_176:
	if( !r6 ) goto label$90ddd8b_3_183;
	r8 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r7 = r8->context;
	r38 = Urho3D__graphics_staticmodel_cast_from_component(r7,r6);
	r39 = (urho3d__StaticModel)hl_alloc_obj(&t$urho3d_StaticModel);
	urho3d_StaticModel_new(r39,r38);
	goto label$90ddd8b_3_184;
	label$90ddd8b_3_183:
	r39 = NULL;
	label$90ddd8b_3_184:
	r8 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r7 = r8->context;
	r18 = (String)s$Models_Plane_mdl;
	r40 = Urho3D__graphics_model_create(r7,r18);
	if( r39 == NULL ) hl_null_access();
	r41 = urho3d_StaticModel_set_model(r39,r40);
	r8 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r7 = r8->context;
	r18 = (String)s$Materials_StoneTiled_xml;
	r42 = Urho3D__graphics_material_create(r7,r18);
	r43 = urho3d_StaticModel_set_material(r39,r42);
	r35 = r0->scene;
	r18 = (String)s$DirectionalLight;
	if( r18 ) goto label$90ddd8b_3_200;
	r36 = (String)s$;
	r18 = r36;
	label$90ddd8b_3_200:
	if( r35 == NULL ) hl_null_access();
	r4 = r35->abstractNode;
	if( !r4 ) goto label$90ddd8b_3_224;
	r8 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r7 = r8->context;
	r4 = r35->abstractNode;
	r10 = 0;
	r11 = 0;
	r13 = false;
	r4 = Urho3D__scene_node_create_child(r7,r4,r18,r10,r11,r13);
	r14 = (urho3d__Node)hl_alloc_obj(&t$urho3d_Node);
	urho3d_Node_new(r14,r4);
	r15 = r35->children_pointers_map;
	if( r15 == NULL ) hl_null_access();
	r16 = urho3d_Node_get_pointer(r14);
	if( r16 == NULL ) r17 = NULL; else {
		r17 = hl_alloc_dynamic(&t$hl_urho3d_scene_node_ptr);
		r17->v.ptr = r16;
	}
	haxe_ds_ObjectMap_set(r15,r17,((vdynamic*)r14));
	r45 = (String)s$;
	if( r18 == r45 || (r18 && r45 && String___compare(r18,(vdynamic*)r45) == 0) ) goto label$90ddd8b_3_222;
	r19 = r35->children_name_map;
	if( r19 == NULL ) hl_null_access();
	haxe_ds_StringMap_set(r19,r18,((vdynamic*)r14));
	label$90ddd8b_3_222:
	r14->_parent = ((urho3d__Node)r35);
	goto label$90ddd8b_3_225;
	label$90ddd8b_3_224:
	r14 = NULL;
	label$90ddd8b_3_225:
	r23 = 0.5999999999999999778;
	r24 = (float)r23;
	r23 = -1.;
	r25 = (float)r23;
	r23 = 0.8000000000000000444;
	r26 = (float)r23;
	r37 = Urho3D__math_tvector3_create(r24,r25,r26);
	if( r14 == NULL ) hl_null_access();
	r4 = r14->abstractNode;
	if( !r4 ) goto label$90ddd8b_3_239;
	r8 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r7 = r8->context;
	r4 = r14->abstractNode;
	Urho3D__scene_node_set_direction(r7,r4,r37);
	label$90ddd8b_3_239:
	r4 = r14->abstractNode;
	if( !r4 ) goto label$90ddd8b_3_249;
	r8 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r7 = r8->context;
	r4 = r14->abstractNode;
	r36 = (String)s$Light;
	r10 = 0;
	r11 = 0;
	r6 = Urho3D__scene_node_create_component(r7,r4,r36,r10,r11);
	goto label$90ddd8b_3_250;
	label$90ddd8b_3_249:
	r6 = NULL;
	label$90ddd8b_3_250:
	if( !r6 ) goto label$90ddd8b_3_257;
	r8 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r7 = r8->context;
	r47 = Urho3D__graphics_light_cast_from_component(r7,r6);
	r48 = (urho3d__Light)hl_alloc_obj(&t$urho3d_Light);
	urho3d_Light_new(r48,r47);
	goto label$90ddd8b_3_258;
	label$90ddd8b_3_257:
	r48 = NULL;
	label$90ddd8b_3_258:
	if( r48 == NULL ) hl_null_access();
	r10 = 0;
	r10 = urho3d_Light_set_lightType(r48,r10);
	r23 = 0.5;
	r24 = (float)r23;
	r23 = 0.5;
	r25 = (float)r23;
	r23 = 0.5;
	r26 = (float)r23;
	r23 = 1.;
	r32 = (float)r23;
	r34 = Urho3D__math_create_color(r24,r25,r26,r32);
	r49 = urho3d_Light_set_color(r48,r34);
	r13 = true;
	r13 = urho3d_Light_set_castShadows(r48,r13);
	r23 = 0.0002500000000000000052;
	r51 = 0.5;
	r52 = NULL;
	r50 = urho3d__BiasParameters_BiasParameters_Impl___new(r23,r51,r52);
	r50 = urho3d_Light_set_shadowBias(r48,r50);
	r23 = 10.;
	r51 = 50.;
	r54 = 200.;
	r55 = 0.;
	r56 = 0.8000000000000000444;
	r52 = NULL;
	r53 = urho3d__CascadeParameters_CascadeParameters_Impl___new(r23,r51,r54,r55,r56,r52);
	r53 = urho3d_Light_set_shadowCascade(r48,r53);
	r10 = 0;
	r11 = r0->NUM_MODELS;
	label$90ddd8b_3_288:
	if( r10 >= r11 ) goto label$90ddd8b_3_524;
	++r10;
	r44 = r0->scene;
	r36 = (String)s$Jill;
	if( r36 ) goto label$90ddd8b_3_296;
	r45 = (String)s$;
	r36 = r45;
	label$90ddd8b_3_296:
	if( r44 == NULL ) hl_null_access();
	r4 = r44->abstractNode;
	if( !r4 ) goto label$90ddd8b_3_321;
	r8 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r7 = r8->context;
	r4 = r44->abstractNode;
	r57 = 0;
	r58 = 0;
	r13 = false;
	r4 = Urho3D__scene_node_create_child(r7,r4,r36,r57,r58,r13);
	r14 = (urho3d__Node)hl_alloc_obj(&t$urho3d_Node);
	urho3d_Node_new(r14,r4);
	r15 = r44->children_pointers_map;
	if( r15 == NULL ) hl_null_access();
	r16 = urho3d_Node_get_pointer(r14);
	if( r16 == NULL ) r17 = NULL; else {
		r17 = hl_alloc_dynamic(&t$hl_urho3d_scene_node_ptr);
		r17->v.ptr = r16;
	}
	haxe_ds_ObjectMap_set(r15,r17,((vdynamic*)r14));
	r59 = (String)s$;
	if( r36 == r59 || (r36 && r59 && String___compare(r36,(vdynamic*)r59) == 0) ) goto label$90ddd8b_3_318;
	r19 = r44->children_name_map;
	if( r19 == NULL ) hl_null_access();
	haxe_ds_StringMap_set(r19,r36,((vdynamic*)r14));
	label$90ddd8b_3_318:
	r14->_parent = ((urho3d__Node)r44);
	r46 = r14;
	goto label$90ddd8b_3_323;
	label$90ddd8b_3_321:
	r14 = NULL;
	r46 = r14;
	label$90ddd8b_3_323:
	r61 = NULL;
	r57 = 1000000;
	r57 = Std_random(r57);
	r23 = (double)r57;
	r51 = 1000000.;
	r23 = r23 / r51;
	r62 = NULL;
	r57 = 1000000;
	r57 = Std_random(r57);
	r51 = (double)r57;
	r54 = 1000000.;
	r51 = r51 / r54;
	if( r61 ) goto label$90ddd8b_3_339;
	r55 = 40.;
	r54 = r23 * r55;
	goto label$90ddd8b_3_345;
	label$90ddd8b_3_339:
	r55 = r61 ? r61->v.d : 0;
	r56 = 40.;
	r55 = r55 - r56;
	r54 = r23 * r55;
	r55 = 40.;
	r54 = r54 + r55;
	label$90ddd8b_3_345:
	r55 = 20.;
	r54 = r54 - r55;
	r24 = (float)r54;
	r54 = 0.;
	r25 = (float)r54;
	if( r62 ) goto label$90ddd8b_3_354;
	r55 = 40.;
	r54 = r51 * r55;
	goto label$90ddd8b_3_360;
	label$90ddd8b_3_354:
	r55 = r62 ? r62->v.d : 0;
	r56 = 40.;
	r55 = r55 - r56;
	r54 = r51 * r55;
	r55 = 40.;
	r54 = r54 + r55;
	label$90ddd8b_3_360:
	r55 = 20.;
	r54 = r54 - r55;
	r26 = (float)r54;
	r29 = Urho3D__math_vector3_create(r24,r25,r26);
	r37 = Urho3D__math_tvector3_cast_from_vector3(r29);
	if( r14 == NULL ) hl_null_access();
	r4 = r14->abstractNode;
	if( !r4 ) goto label$90ddd8b_3_372;
	r8 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r7 = r8->context;
	r4 = r14->abstractNode;
	Urho3D__scene_node_set_position(r7,r4,r37);
	label$90ddd8b_3_372:
	r61 = NULL;
	r57 = 1000000;
	r57 = Std_random(r57);
	r23 = (double)r57;
	r51 = 1000000.;
	r23 = r23 / r51;
	r37 = NULL;
	if( !r37 ) goto label$90ddd8b_3_384;
	r51 = 0.;
	r24 = (float)r51;
	r63 = Urho3D__math_quaternion_create_fv(r24,r37);
	goto label$90ddd8b_3_400;
	label$90ddd8b_3_384:
	r51 = 0.;
	r24 = (float)r51;
	if( r61 ) goto label$90ddd8b_3_390;
	r54 = 360.;
	r51 = r23 * r54;
	goto label$90ddd8b_3_396;
	label$90ddd8b_3_390:
	r54 = r61 ? r61->v.d : 0;
	r55 = 360.;
	r54 = r54 - r55;
	r51 = r23 * r54;
	r54 = 360.;
	r51 = r51 + r54;
	label$90ddd8b_3_396:
	r25 = (float)r51;
	r51 = 0.;
	r26 = (float)r51;
	r63 = Urho3D__math_quaternion_create(r24,r25,r26);
	label$90ddd8b_3_400:
	r64 = Urho3D__math_t_quaternion_cast_from_quaternion(r63);
	r4 = r14->abstractNode;
	if( !r4 ) goto label$90ddd8b_3_407;
	r8 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r7 = r8->context;
	r4 = r14->abstractNode;
	Urho3D__scene_node_set_rotation(r7,r4,r64);
	label$90ddd8b_3_407:
	r4 = r14->abstractNode;
	if( !r4 ) goto label$90ddd8b_3_417;
	r8 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r7 = r8->context;
	r4 = r14->abstractNode;
	r45 = (String)s$AnimatedModel;
	r57 = 0;
	r58 = 0;
	r6 = Urho3D__scene_node_create_component(r7,r4,r45,r57,r58);
	goto label$90ddd8b_3_418;
	label$90ddd8b_3_417:
	r6 = NULL;
	label$90ddd8b_3_418:
	if( !r6 ) goto label$90ddd8b_3_425;
	r8 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r7 = r8->context;
	r65 = Urho3D__graphics_animatedmodel_cast_from_component(r7,r6);
	r66 = (urho3d__AnimatedModel)hl_alloc_obj(&t$urho3d_AnimatedModel);
	urho3d_AnimatedModel_new(r66,r65);
	goto label$90ddd8b_3_426;
	label$90ddd8b_3_425:
	r66 = NULL;
	label$90ddd8b_3_426:
	r8 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r7 = r8->context;
	r45 = (String)s$Models_Kachujin_Kachujin_mdl;
	r41 = Urho3D__graphics_model_create(r7,r45);
	if( r66 == NULL ) hl_null_access();
	r67 = urho3d_AnimatedModel_set_model(r66,r41);
	r8 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r7 = r8->context;
	r45 = (String)s$48be8bf;
	r43 = Urho3D__graphics_material_create(r7,r45);
	r68 = urho3d_AnimatedModel_set_material(r66,r43);
	r13 = true;
	r13 = urho3d_AnimatedModel_set_castShadows(r66,r13);
	r8 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r7 = r8->context;
	r45 = (String)s$e522d85;
	r69 = Urho3D__graphics_animation_create(r7,r45);
	r70 = urho3d_AnimatedModel_AddAnimationState(r66,r69);
	r23 = 1.;
	r24 = (float)r23;
	r24 = urho3d__AnimationState_AnimationState_Impl__set_weight(r70,r24);
	r13 = true;
	r13 = urho3d__AnimationState_AnimationState_Impl__set_looped(r70,r13);
	r24 = urho3d__Animation_Animation_Impl__get_length(r69);
	r23 = (double)r24;
	r61 = hl_alloc_dynamic(&t$_f64);
	r61->v.d = r23;
	r62 = NULL;
	r57 = 1000000;
	r57 = Std_random(r57);
	r23 = (double)r57;
	r51 = 1000000.;
	r23 = r23 / r51;
	if( r61 ) goto label$90ddd8b_3_461;
	r51 = r23;
	goto label$90ddd8b_3_472;
	label$90ddd8b_3_461:
	if( !r61 ) goto label$90ddd8b_3_466;
	if( r62 ) goto label$90ddd8b_3_466;
	r54 = r61 ? r61->v.d : 0;
	r51 = r23 * r54;
	goto label$90ddd8b_3_472;
	label$90ddd8b_3_466:
	r54 = r62 ? r62->v.d : 0;
	r55 = r61 ? r61->v.d : 0;
	r54 = r54 - r55;
	r51 = r23 * r54;
	r54 = r61 ? r61->v.d : 0;
	r51 = r51 + r54;
	label$90ddd8b_3_472:
	r24 = (float)r51;
	r24 = urho3d__AnimationState_AnimationState_Impl__set_time(r70,r24);
	r71 = (Mover)hl_alloc_obj(&t$Mover);
	Mover_new(r71);
	r51 = r0->MODEL_MOVE_SPEED;
	r54 = r0->MODEL_ROTATE_SPEED;
	r30 = r0->bounds;
	Mover_SetParameters(r71,r51,r54,r30);
	r4 = r14->abstractNode;
	if( !r4 ) goto label$90ddd8b_3_523;
	r73 = (urho3d__Component)hl_dyn_castp(&r71,&t$Mover,&t$urho3d_Component);
	r15 = r14->components_map;
	if( r15 == NULL ) hl_null_access();
	if( r73 == NULL ) hl_null_access();
	r74 = urho3d_Component_get_pointer(r73);
	if( r74 == NULL ) r72 = NULL; else {
		r72 = hl_alloc_dynamic(&t$hl_urho3d_scene_component_ptr);
		r72->v.ptr = r74;
	}
	haxe_ds_ObjectMap_set(r15,r72,((vdynamic*)r73));
	r14 = urho3d_Component_set_node(r73,r14);
	r8 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r7 = r8->context;
	if( r46 == NULL ) hl_null_access();
	r4 = r46->abstractNode;
	r72 = (vdynamic*)hl_dyn_getp((vdynamic*)r71,-460463503/*abstractComponent*/,&t$_dyn);
	r6 = (hl_urho3d_scene_component*)hl_dyn_castp(&r72,&t$_dyn,&t$hl_urho3d_scene_component);
	r57 = 0;
	r58 = 0;
	Urho3D__scene_node_add_component(r7,r4,r6,r57,r58);
	r19 = r46->logic_components_map;
	if( r19 == NULL ) hl_null_access();
	r45 = Std_string(((vdynamic*)r71));
	r72 = haxe_ds_StringMap_get(r19,r45);
	r75 = (hl__types__ArrayDyn)hl_dyn_castp(&r72,&t$_dyn,&t$hl_types_ArrayDyn);
	if( r75 ) goto label$90ddd8b_3_516;
	r77 = &t$_dyn;
	r57 = 0;
	r76 = hl_alloc_array(r77,r57);
	r78 = hl_types_ArrayObj_alloc(r76);
	r13 = true;
	r79 = &r13;
	r75 = hl_types_ArrayDyn_alloc(((hl__types__ArrayBase)r78),r79);
	r19 = r46->logic_components_map;
	if( r19 == NULL ) hl_null_access();
	r45 = Std_string(((vdynamic*)r71));
	haxe_ds_StringMap_set(r19,r45,((vdynamic*)r75));
	label$90ddd8b_3_516:
	r19 = r46->logic_components_map;
	if( r19 == NULL ) hl_null_access();
	r45 = Std_string(((vdynamic*)r71));
	r72 = haxe_ds_StringMap_get(r19,r45);
	r75 = (hl__types__ArrayDyn)hl_dyn_castp(&r72,&t$_dyn,&t$hl_types_ArrayDyn);
	if( r75 == NULL ) hl_null_access();
	r57 = hl_types_ArrayDyn_push(r75,((vdynamic*)r71));
	label$90ddd8b_3_523:
	goto label$90ddd8b_3_288;
	label$90ddd8b_3_524:
	r44 = r0->scene;
	r36 = (String)s$Camera;
	if( r36 ) goto label$90ddd8b_3_529;
	r45 = (String)s$;
	r36 = r45;
	label$90ddd8b_3_529:
	if( r44 == NULL ) hl_null_access();
	r4 = r44->abstractNode;
	if( !r4 ) goto label$90ddd8b_3_553;
	r8 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r7 = r8->context;
	r4 = r44->abstractNode;
	r10 = 0;
	r11 = 0;
	r13 = false;
	r4 = Urho3D__scene_node_create_child(r7,r4,r36,r10,r11,r13);
	r14 = (urho3d__Node)hl_alloc_obj(&t$urho3d_Node);
	urho3d_Node_new(r14,r4);
	r15 = r44->children_pointers_map;
	if( r15 == NULL ) hl_null_access();
	r16 = urho3d_Node_get_pointer(r14);
	if( r16 == NULL ) r17 = NULL; else {
		r17 = hl_alloc_dynamic(&t$hl_urho3d_scene_node_ptr);
		r17->v.ptr = r16;
	}
	haxe_ds_ObjectMap_set(r15,r17,((vdynamic*)r14));
	r59 = (String)s$;
	if( r36 == r59 || (r36 && r59 && String___compare(r36,(vdynamic*)r59) == 0) ) goto label$90ddd8b_3_551;
	r19 = r44->children_name_map;
	if( r19 == NULL ) hl_null_access();
	haxe_ds_StringMap_set(r19,r36,((vdynamic*)r14));
	label$90ddd8b_3_551:
	r14->_parent = ((urho3d__Node)r44);
	goto label$90ddd8b_3_554;
	label$90ddd8b_3_553:
	r14 = NULL;
	label$90ddd8b_3_554:
	r0->cameraNode = r14;
	r14 = r0->cameraNode;
	if( r14 == NULL ) hl_null_access();
	r4 = r14->abstractNode;
	if( !r4 ) goto label$90ddd8b_3_567;
	r8 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r7 = r8->context;
	r4 = r14->abstractNode;
	r45 = (String)s$Camera;
	r10 = 0;
	r11 = 0;
	r6 = Urho3D__scene_node_create_component(r7,r4,r45,r10,r11);
	goto label$90ddd8b_3_568;
	label$90ddd8b_3_567:
	r6 = NULL;
	label$90ddd8b_3_568:
	if( !r6 ) goto label$90ddd8b_3_575;
	r8 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r7 = r8->context;
	r80 = Urho3D__graphics_camera_cast_from_component(r7,r6);
	r81 = (urho3d__Camera)hl_alloc_obj(&t$urho3d_Camera);
	urho3d_Camera_new(r81,r80);
	goto label$90ddd8b_3_576;
	label$90ddd8b_3_575:
	r81 = NULL;
	label$90ddd8b_3_576:
	r60 = r0->cameraNode;
	r23 = 0.;
	r24 = (float)r23;
	r23 = 5.;
	r25 = (float)r23;
	r23 = 0.;
	r26 = (float)r23;
	r37 = Urho3D__math_tvector3_create(r24,r25,r26);
	if( r60 == NULL ) hl_null_access();
	r4 = r60->abstractNode;
	if( !r4 ) goto label$90ddd8b_3_591;
	r8 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r7 = r8->context;
	r4 = r60->abstractNode;
	Urho3D__scene_node_set_position(r7,r4,r37);
	label$90ddd8b_3_591:
	return;
}

void SkeletalAnimationSample_SetupViewport(SkeletalAnimationSample r0) {
	urho3d__Camera r11;
	String r8;
	hl_urho3d_math_intrect *r12;
	hl_urho3d_scene_component *r5;
	bool r9;
	urho3d__Node r3;
	urho3d__Scene r1;
	hl_urho3d_graphics_camera *r10;
	urho3d___Context__$Context_Impl_ r7;
	hl_urho3d_graphics_viewport *r13;
	urho3d_context *r6;
	hl_urho3d_scene_node *r4;
	hl_urho3d_scene_scene *r14;
	int r15;
	r1 = r0->scene;
	r3 = r0->cameraNode;
	if( r3 == NULL ) hl_null_access();
	r4 = r3->abstractNode;
	if( !r4 ) goto label$90ddd8b_4_12;
	r7 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r6 = r7->context;
	r4 = r3->abstractNode;
	r8 = (String)s$Camera;
	r9 = false;
	r5 = Urho3D__scene_node_get_component(r6,r4,r8,r9);
	goto label$90ddd8b_4_13;
	label$90ddd8b_4_12:
	r5 = NULL;
	label$90ddd8b_4_13:
	if( !r5 ) goto label$90ddd8b_4_20;
	r7 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r6 = r7->context;
	r10 = Urho3D__graphics_camera_cast_from_component(r6,r5);
	r11 = (urho3d__Camera)hl_alloc_obj(&t$urho3d_Camera);
	urho3d_Camera_new(r11,r10);
	goto label$90ddd8b_4_21;
	label$90ddd8b_4_20:
	r11 = NULL;
	label$90ddd8b_4_21:
	r12 = NULL;
	if( !r12 ) goto label$90ddd8b_4_31;
	r7 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r6 = r7->context;
	if( r1 == NULL ) hl_null_access();
	r14 = r1->abstractScene;
	if( r11 == NULL ) hl_null_access();
	r10 = r11->_abstract;
	r13 = Urho3D__graphics_viewport_create_r(r6,r14,r10,r12);
	goto label$90ddd8b_4_38;
	label$90ddd8b_4_31:
	r7 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r6 = r7->context;
	if( r1 == NULL ) hl_null_access();
	r14 = r1->abstractScene;
	if( r11 == NULL ) hl_null_access();
	r10 = r11->_abstract;
	r13 = Urho3D__graphics_viewport_create(r6,r14,r10);
	label$90ddd8b_4_38:
	r15 = 0;
	urho3d_Renderer_SetViewport(r15,r13);
	return;
}

void SkeletalAnimationSample_SubscribeToEvents(SkeletalAnimationSample r0) {
	String r2;
	hl_urho3d_stringhash *r1;
	hl_urho3d_core_object *r4;
	r2 = (String)s$Update;
	r1 = Urho3D__create_stringhash(r2);
	r4 = NULL;
	r2 = (String)s$HandleUpdate;
	urho3d_Application_SubscribeToEvent(((urho3d__Application)r0),r4,r1,r2);
	return;
}

void SkeletalAnimationSample_MoveCamera(SkeletalAnimationSample r0,double r1) {
	urho3d__Camera r14, r15;
	String r11;
	vvirtual *r30;
	hl_urho3d_scene_component *r8;
	bool r12;
	urho3d__Node r5, r7;
	hl_urho3d_math_tquaternion *r27;
	hl_urho3d_math_tintvector2 *r20;
	hl_urho3d_graphics_camera *r13;
	urho3d___Context__$Context_Impl_ r10;
	float r24, r28, r29;
	hl_urho3d_input_touch_state *r19;
	urho3d_context *r9;
	hl_urho3d_scene_node *r6;
	double r16, r22, r23, r25, r31;
	hl_urho3d_math_tvector3 *r26;
	int r3, r4, r17, r18, r21;
	r3 = urho3d_Input_get_numTouches();
	r4 = 0;
	if( r4 >= r3 ) goto label$90ddd8b_6_93;
	r5 = r0->cameraNode;
	if( r5 == NULL ) hl_null_access();
	r6 = r5->abstractNode;
	if( !r6 ) goto label$90ddd8b_6_14;
	r10 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r9 = r10->context;
	r6 = r5->abstractNode;
	r11 = (String)s$Camera;
	r12 = false;
	r8 = Urho3D__scene_node_get_component(r9,r6,r11,r12);
	goto label$90ddd8b_6_15;
	label$90ddd8b_6_14:
	r8 = NULL;
	label$90ddd8b_6_15:
	if( !r8 ) goto label$90ddd8b_6_23;
	r10 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r9 = r10->context;
	r13 = Urho3D__graphics_camera_cast_from_component(r9,r8);
	r15 = (urho3d__Camera)hl_alloc_obj(&t$urho3d_Camera);
	urho3d_Camera_new(r15,r13);
	r14 = r15;
	goto label$90ddd8b_6_25;
	label$90ddd8b_6_23:
	r15 = NULL;
	r14 = r15;
	label$90ddd8b_6_25:
	r16 = 2.;
	if( !r15 ) goto label$90ddd8b_6_92;
	r3 = 0;
	r4 = urho3d_Input_get_numTouches();
	label$90ddd8b_6_29:
	if( r3 >= r4 ) goto label$90ddd8b_6_92;
	r17 = r3;
	++r3;
	r10 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r9 = r10->context;
	r19 = Urho3D__input_touch_state_get(r9,r17);
	r20 = urho3d__TouchState_TouchState_Impl__get_delta(r19);
	r18 = Urho3D__math_tintvector2_get_x(r20);
	r21 = 0;
	if( r18 != r21 ) goto label$90ddd8b_6_44;
	r20 = urho3d__TouchState_TouchState_Impl__get_delta(r19);
	r18 = Urho3D__math_tintvector2_get_y(r20);
	r21 = 0;
	if( r18 == r21 ) goto label$90ddd8b_6_91;
	label$90ddd8b_6_44:
	r22 = r0->yaw;
	if( r14 == NULL ) hl_null_access();
	r24 = urho3d_Camera_get_fov(r14);
	r25 = (double)r24;
	r23 = r16 * r25;
	r18 = urho3d_Graphics_get_height();
	r25 = (double)r18;
	r23 = r23 / r25;
	r20 = urho3d__TouchState_TouchState_Impl__get_delta(r19);
	r18 = Urho3D__math_tintvector2_get_x(r20);
	r25 = (double)r18;
	r23 = r23 * r25;
	r22 = r22 + r23;
	r0->yaw = r22;
	r22 = r0->pitch;
	r24 = urho3d_Camera_get_fov(r14);
	r25 = (double)r24;
	r23 = r16 * r25;
	r18 = urho3d_Graphics_get_height();
	r25 = (double)r18;
	r23 = r23 / r25;
	r20 = urho3d__TouchState_TouchState_Impl__get_delta(r19);
	r18 = Urho3D__math_tintvector2_get_y(r20);
	r25 = (double)r18;
	r23 = r23 * r25;
	r22 = r22 + r23;
	r0->pitch = r22;
	r7 = r0->cameraNode;
	r22 = r0->pitch;
	r23 = r0->yaw;
	r26 = NULL;
	if( !r26 ) goto label$90ddd8b_6_79;
	r24 = (float)r22;
	r27 = Urho3D__math_t_quaternion_create_fv(r24,r26);
	goto label$90ddd8b_6_84;
	label$90ddd8b_6_79:
	r24 = (float)r22;
	r28 = (float)r23;
	r25 = 0.;
	r29 = (float)r25;
	r27 = Urho3D__math_t_quaternion_create(r24,r28,r29);
	label$90ddd8b_6_84:
	if( r7 == NULL ) hl_null_access();
	r6 = r7->abstractNode;
	if( !r6 ) goto label$90ddd8b_6_91;
	r10 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r9 = r10->context;
	r6 = r7->abstractNode;
	Urho3D__scene_node_set_rotation(r9,r6,r27);
	label$90ddd8b_6_91:
	goto label$90ddd8b_6_29;
	label$90ddd8b_6_92:
	goto label$90ddd8b_6_140;
	label$90ddd8b_6_93:
	r16 = 0.1000000000000000056;
	r22 = r0->yaw;
	r30 = urho3d_Input_get_mouseMove();
	if( r30 == NULL ) hl_null_access();
	r3 = hl_vfields(r30)[0] ? (*(int*)(hl_vfields(r30)[0])) : (int)hl_dyn_geti(r30->value,120/*x*/,&t$_i32);
	r25 = (double)r3;
	r23 = r16 * r25;
	r22 = r22 + r23;
	r0->yaw = r22;
	r22 = r0->pitch;
	r30 = urho3d_Input_get_mouseMove();
	if( r30 == NULL ) hl_null_access();
	r3 = hl_vfields(r30)[1] ? (*(int*)(hl_vfields(r30)[1])) : (int)hl_dyn_geti(r30->value,121/*y*/,&t$_i32);
	r25 = (double)r3;
	r23 = r16 * r25;
	r22 = r22 + r23;
	r0->pitch = r22;
	r25 = -90.;
	if( !(r22 < r25) ) goto label$90ddd8b_6_114;
	r23 = -90.;
	goto label$90ddd8b_6_119;
	label$90ddd8b_6_114:
	r25 = 90.;
	if( !(r25 < r22) ) goto label$90ddd8b_6_118;
	r23 = 90.;
	goto label$90ddd8b_6_119;
	label$90ddd8b_6_118:
	r23 = r22;
	label$90ddd8b_6_119:
	r0->pitch = r23;
	r5 = r0->cameraNode;
	r23 = r0->pitch;
	r25 = r0->yaw;
	r26 = NULL;
	if( !r26 ) goto label$90ddd8b_6_128;
	r24 = (float)r23;
	r27 = Urho3D__math_t_quaternion_create_fv(r24,r26);
	goto label$90ddd8b_6_133;
	label$90ddd8b_6_128:
	r24 = (float)r23;
	r28 = (float)r25;
	r31 = 0.;
	r29 = (float)r31;
	r27 = Urho3D__math_t_quaternion_create(r24,r28,r29);
	label$90ddd8b_6_133:
	if( r5 == NULL ) hl_null_access();
	r6 = r5->abstractNode;
	if( !r6 ) goto label$90ddd8b_6_140;
	r10 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r9 = r10->context;
	r6 = r5->abstractNode;
	Urho3D__scene_node_set_rotation(r9,r6,r27);
	label$90ddd8b_6_140:
	return;
}

void SkeletalAnimationSample_HandleUpdate(SkeletalAnimationSample r0,hl_urho3d_stringhash* r1,hl_urho3d_variantmap* r2) {
	String r5;
	hl_urho3d_tvariant *r4;
	float r3;
	double r6;
	r5 = (String)s$TimeStep;
	r4 = Urho3D__core_variantmap_get_key_string_value(r2,r5);
	r3 = Urho3D__tvariant_get_float(r4);
	r6 = (double)r3;
	SkeletalAnimationSample_MoveCamera(r0,r6);
	return;
}

void SkeletalAnimationSample_new(SkeletalAnimationSample r0) {
	urho3d__Scene r11;
	urho3d__Node r10;
	hl_urho3d_math_vector3 *r2, *r8;
	float r5, r6, r7;
	double r4;
	hl_urho3d_math_tvector3 *r3;
	int r9;
	hl_urho3d_math_boundingbox *r1;
	r4 = -20.;
	r5 = (float)r4;
	r4 = 0.;
	r6 = (float)r4;
	r4 = -20.;
	r7 = (float)r4;
	r3 = Urho3D__math_tvector3_create(r5,r6,r7);
	r2 = Urho3D__math_tvector3_cast_to_vector3(r3);
	r4 = 20.;
	r5 = (float)r4;
	r4 = 0.;
	r6 = (float)r4;
	r4 = 20.;
	r7 = (float)r4;
	r3 = Urho3D__math_tvector3_create(r5,r6,r7);
	r8 = Urho3D__math_tvector3_cast_to_vector3(r3);
	r1 = Urho3D__math_boundingbox_create_v3_v3(r2,r8);
	r0->bounds = r1;
	r4 = 100.;
	r0->MODEL_ROTATE_SPEED = r4;
	r4 = 2.;
	r0->MODEL_MOVE_SPEED = r4;
	r9 = 30;
	r0->NUM_MODELS = r9;
	r10 = NULL;
	r0->cameraNode = r10;
	r11 = NULL;
	r0->scene = r11;
	urho3d_Application_new(((urho3d__Application)r0));
	return;
}

