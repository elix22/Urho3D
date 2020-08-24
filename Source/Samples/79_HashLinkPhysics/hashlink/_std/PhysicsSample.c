﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <_std/PhysicsSample.h>
#include <hl/types/ArrayDyn.h>
#include <haxe/Log.h>
extern haxe__$Log g$_haxe_Log;
extern String s$Setup;
extern hl_type t$vrt_329ffa8;
extern String s$src_haxe_PhysicsSample_hx;
extern hl_type t$String;
extern hl_type t$_i32;
extern String s$PhysicsSample;
extern hl_type t$vrt_eaa6a3b;
void PhysicsSample_CreateScene(PhysicsSample);
void PhysicsSample_SetupViewport(PhysicsSample);
void PhysicsSample_SubscribeToEvents(PhysicsSample);
#include <hl/natives.h>
#include <urho3d/_Context/Context_Impl_.h>
#include <urho3d/Zone.h>
#include <urho3d/Light.h>
#include <urho3d/Skybox.h>
#include <urho3d/StaticModel.h>
#include <urho3d/RigidBody.h>
#include <urho3d/CollisionShape.h>
#include <urho3d/_Vector3/Vector3_Impl_.h>
#include <urho3d/Camera.h>
extern hl_type t$urho3d_Scene;
void urho3d_Scene_new(urho3d__Scene,hl_urho3d_scene_scene*);
extern String s$Octree;
hl_urho3d_scene_component* urho3d_Node_CreateComponent(urho3d__Node,String,int*,int*);
extern String s$PhysicsWorld;
extern String s$DebugRenderer;
extern String s$Zone;
urho3d__Node urho3d_Node_CreateChild(urho3d__Node,String,int*,int*,bool*);
extern urho3d___Context__$Context_Impl_ g$_urho3d__Context_Context_Impl_;
extern hl_type t$urho3d_Zone;
void urho3d_Zone_new(urho3d__Zone,hl_urho3d_graphics_zone*);
hl_urho3d_math_boundingbox* urho3d_Zone_set_boundingBox(urho3d__Zone,hl_urho3d_math_boundingbox*);
hl_urho3d_color* urho3d_Zone_set_ambientColor(urho3d__Zone,hl_urho3d_color*);
hl_urho3d_color* urho3d_Zone_set_fogColor(urho3d__Zone,hl_urho3d_color*);
float urho3d_Zone_set_fogStart(urho3d__Zone,float);
float urho3d_Zone_set_fogEnd(urho3d__Zone,float);
extern String s$DirectionalLight;
hl_urho3d_math_tvector3* urho3d_Node_set_direction(urho3d__Node,hl_urho3d_math_tvector3*);
extern String s$Light;
extern hl_type t$urho3d_Light;
void urho3d_Light_new(urho3d__Light,hl_urho3d_graphics_light*);
int urho3d_Light_set_lightType(urho3d__Light,int);
bool urho3d_Light_set_castShadows(urho3d__Light,bool);
hl_urho3d_graphics_light_bias_parameters* urho3d__BiasParameters_BiasParameters_Impl___new(double,double,double*);
hl_urho3d_graphics_light_bias_parameters* urho3d_Light_set_shadowBias(urho3d__Light,hl_urho3d_graphics_light_bias_parameters*);
hl_urho3d_graphics_light_cascade_parameters* urho3d__CascadeParameters_CascadeParameters_Impl___new(double,double,double,double,double,double*);
hl_urho3d_graphics_light_cascade_parameters* urho3d_Light_set_shadowCascade(urho3d__Light,hl_urho3d_graphics_light_cascade_parameters*);
extern String s$Sky;
hl_urho3d_math_tvector3* urho3d_Node_set_scale(urho3d__Node,hl_urho3d_math_tvector3*);
extern String s$Skybox;
extern hl_type t$urho3d_Skybox;
void urho3d_Skybox_new(urho3d__Skybox,hl_urho3d_graphics_skybox*);
extern String s$Models_Box_mdl;
hl_urho3d_graphics_model* urho3d_StaticModel_set_model(urho3d__StaticModel,hl_urho3d_graphics_model*);
extern String s$Materials_Skybox_xml;
hl_urho3d_graphics_material* urho3d_StaticModel_set_material(urho3d__StaticModel,hl_urho3d_graphics_material*);
extern String s$Floor;
hl_urho3d_math_tvector3* urho3d_Node_set_position(urho3d__Node,hl_urho3d_math_tvector3*);
extern String s$StaticModel;
extern hl_type t$urho3d_StaticModel;
void urho3d_StaticModel_new(urho3d__StaticModel,hl_urho3d_graphics_staticmodel*);
extern String s$Materials_StoneTiled_xml;
extern String s$RigidBody;
extern hl_type t$urho3d_RigidBody;
void urho3d_RigidBody_new(urho3d__RigidBody,hl_urho3d_physics_rigid_body*);
extern String s$CollisionShape;
extern hl_type t$urho3d_CollisionShape;
void urho3d_CollisionShape_new(urho3d__CollisionShape,hl_urho3d_physics_collision_shape*);
extern urho3d___Vector3__$Vector3_Impl_ g$_urho3d__Vector3_Vector3_Impl_;
extern String s$Box;
extern String s$Materials_StoneEnvMapSmall_xml;
bool urho3d_StaticModel_set_castShadows(urho3d__StaticModel,bool);
float urho3d_RigidBody_set_mass(urho3d__RigidBody,float);
float urho3d_RigidBody_set_friction(urho3d__RigidBody,float);
extern String s$Camera;
extern hl_type t$urho3d_Camera;
void urho3d_Camera_new(urho3d__Camera,hl_urho3d_graphics_camera*);
hl_urho3d_scene_component* urho3d_Node_GetComponent(urho3d__Node,String,bool*);
void urho3d_Renderer_SetViewport(int,hl_urho3d_graphics_viewport*);
extern String s$Update;
extern String s$HandleUpdate;
void urho3d_Application_SubscribeToEvent(urho3d__Application,hl_urho3d_core_object*,hl_urho3d_stringhash*,String);
int urho3d_Input_get_numTouches(void);
hl_urho3d_math_tintvector2* urho3d__TouchState_TouchState_Impl__get_delta(hl_urho3d_input_touch_state*);
float urho3d_Camera_get_fov(urho3d__Camera);
int urho3d_Graphics_get_height(void);
hl_urho3d_math_tquaternion* urho3d_Node_set_rotation(urho3d__Node,hl_urho3d_math_tquaternion*);
vvirtual* urho3d_Input_get_mouseMove(void);
bool urho3d_Input_GetKeyDown(int);
void urho3d_Node_Translate(urho3d__Node,hl_urho3d_math_tvector3*,int*);
void PhysicsSample_SpawnObject(PhysicsSample);
extern String s$SmallBox;
hl_urho3d_math_tvector3* urho3d_Node_get_position(urho3d__Node);
hl_urho3d_math_tquaternion* urho3d_Node_get_rotation(urho3d__Node);
hl_urho3d_math_tvector3* urho3d_RigidBody_set_linearVelocity(urho3d__RigidBody,hl_urho3d_math_tvector3*);
extern String s$TimeStep;
void urho3d_Application_new(urho3d__Application);

void PhysicsSample_Setup(PhysicsSample r0) {
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
	r6 = (String)s$src_haxe_PhysicsSample_hx;
	if( hl_vfields(r5)[1] ) *(String*)(hl_vfields(r5)[1]) = (String)r6; else hl_dyn_setp(r5->value,37969014/*fileName*/,&t$String,r6);
	r7 = 13;
	if( hl_vfields(r5)[2] ) *(int*)(hl_vfields(r5)[2]) = (int)r7; else hl_dyn_seti(r5->value,371360620/*lineNumber*/,&t$_i32,r7);
	r6 = (String)s$PhysicsSample;
	if( hl_vfields(r5)[0] ) *(String*)(hl_vfields(r5)[0]) = (String)r6; else hl_dyn_setp(r5->value,-63073762/*className*/,&t$String,r6);
	r6 = (String)s$Setup;
	if( hl_vfields(r5)[3] ) *(String*)(hl_vfields(r5)[3]) = (String)r6; else hl_dyn_setp(r5->value,302979532/*methodName*/,&t$String,r6);
	r8 = hl_to_virtual(&t$vrt_eaa6a3b,(vdynamic*)r5);
	r2->hasValue ? ((void (*)(vdynamic*,vdynamic*,vvirtual*))r2->fun)((vdynamic*)r2->value,((vdynamic*)r4),r8) : ((void (*)(vdynamic*,vvirtual*))r2->fun)(((vdynamic*)r4),r8);
	return;
}

void PhysicsSample_Start(PhysicsSample r0) {
	PhysicsSample_CreateScene(r0);
	PhysicsSample_SetupViewport(r0);
	PhysicsSample_SubscribeToEvents(r0);
	return;
}

void PhysicsSample_CreateScene(PhysicsSample r0) {
	urho3d__Skybox r48;
	bool *r9;
	String r5;
	hl_urho3d_physics_rigid_body *r61;
	hl_urho3d_color *r26, *r28, *r29;
	hl_urho3d_scene_component *r4, *r11, *r32, *r46, *r55, *r60;
	urho3d__StaticModel r57;
	bool r36;
	hl_urho3d_graphics_zone *r12;
	hl_urho3d_math_vector3 *r16, *r21, *r23, *r24, *r53, *r54;
	urho3d__Node r8, r10, r31, r45;
	urho3d__Scene r1;
	urho3d__CollisionShape r64;
	hl_urho3d_math_tquaternion *r67, *r69;
	hl_urho3d_graphics_camera *r75;
	hl_urho3d_graphics_material *r51, *r52, *r59;
	urho3d_context *r13;
	urho3d__Light r34;
	hl_urho3d_graphics_light_cascade_parameters *r40;
	int *r6, *r7;
	hl_urho3d_scene_scene *r2;
	hl_urho3d_graphics_model *r49, *r50, *r58;
	int r35, r70, r71, r72, r73, r74;
	urho3d__Camera r76;
	urho3d___Vector3__$Vector3_Impl_ r65;
	urho3d__RigidBody r62;
	hl_urho3d_graphics_skybox *r47;
	urho3d___Context__$Context_Impl_ r14;
	urho3d__Zone r15;
	hl_urho3d_graphics_light_bias_parameters *r37;
	float r18, r19, r20, r27;
	hl_urho3d_graphics_staticmodel *r56;
	hl_urho3d_graphics_light *r33;
	double r17, r38, r41, r42, r43;
	hl_urho3d_physics_collision_shape *r63;
	double *r39;
	hl_urho3d_math_tvector3 *r30, *r44, *r66, *r68;
	hl_urho3d_math_boundingbox *r22, *r25;
	r1 = (urho3d__Scene)hl_alloc_obj(&t$urho3d_Scene);
	r2 = NULL;
	urho3d_Scene_new(r1,r2);
	r0->scene = r1;
	r1 = r0->scene;
	if( r1 == NULL ) hl_null_access();
	r5 = (String)s$Octree;
	r6 = NULL;
	r7 = NULL;
	r4 = urho3d_Node_CreateComponent(((urho3d__Node)r1),r5,r6,r7);
	r1 = r0->scene;
	if( r1 == NULL ) hl_null_access();
	r5 = (String)s$PhysicsWorld;
	r6 = NULL;
	r7 = NULL;
	r4 = urho3d_Node_CreateComponent(((urho3d__Node)r1),r5,r6,r7);
	r1 = r0->scene;
	if( r1 == NULL ) hl_null_access();
	r5 = (String)s$DebugRenderer;
	r6 = NULL;
	r7 = NULL;
	r4 = urho3d_Node_CreateComponent(((urho3d__Node)r1),r5,r6,r7);
	r1 = r0->scene;
	if( r1 == NULL ) hl_null_access();
	r5 = (String)s$Zone;
	r6 = NULL;
	r7 = NULL;
	r9 = NULL;
	r8 = urho3d_Node_CreateChild(((urho3d__Node)r1),r5,r6,r7,r9);
	if( r8 == NULL ) hl_null_access();
	r5 = (String)s$Zone;
	r6 = NULL;
	r7 = NULL;
	r4 = urho3d_Node_CreateComponent(r8,r5,r6,r7);
	if( !r4 ) goto label$20c38e3_3_41;
	r14 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r13 = r14->context;
	r12 = Urho3D__graphics_zone_cast_from_component(r13,r4);
	r15 = (urho3d__Zone)hl_alloc_obj(&t$urho3d_Zone);
	urho3d_Zone_new(r15,r12);
	goto label$20c38e3_3_42;
	label$20c38e3_3_41:
	r15 = NULL;
	label$20c38e3_3_42:
	r17 = -1000.;
	r18 = (float)r17;
	r17 = -1000.;
	r19 = (float)r17;
	r17 = -1000.;
	r20 = (float)r17;
	r16 = Urho3D__math_vector3_create(r18,r19,r20);
	r17 = 1000.;
	r18 = (float)r17;
	r17 = 1000.;
	r19 = (float)r17;
	r17 = 1000.;
	r20 = (float)r17;
	r21 = Urho3D__math_vector3_create(r18,r19,r20);
	r22 = Urho3D__math_boundingbox_create_v3_v3(r16,r21);
	if( r15 == NULL ) hl_null_access();
	r25 = urho3d_Zone_set_boundingBox(r15,r22);
	r17 = 0.1499999999999999944;
	r18 = (float)r17;
	r17 = 0.1499999999999999944;
	r19 = (float)r17;
	r17 = 0.1499999999999999944;
	r20 = (float)r17;
	r17 = 1.;
	r27 = (float)r17;
	r26 = Urho3D__math_create_color(r18,r19,r20,r27);
	r28 = urho3d_Zone_set_ambientColor(r15,r26);
	r17 = 1.;
	r18 = (float)r17;
	r17 = 1.;
	r19 = (float)r17;
	r17 = 1.;
	r20 = (float)r17;
	r17 = 1.;
	r27 = (float)r17;
	r28 = Urho3D__math_create_color(r18,r19,r20,r27);
	r29 = urho3d_Zone_set_fogColor(r15,r28);
	r17 = 300.;
	r18 = (float)r17;
	r18 = urho3d_Zone_set_fogStart(r15,r18);
	r17 = (double)r18;
	r17 = 500.;
	r18 = (float)r17;
	r18 = urho3d_Zone_set_fogEnd(r15,r18);
	r17 = (double)r18;
	r1 = r0->scene;
	if( r1 == NULL ) hl_null_access();
	r5 = (String)s$DirectionalLight;
	r6 = NULL;
	r7 = NULL;
	r9 = NULL;
	r10 = urho3d_Node_CreateChild(((urho3d__Node)r1),r5,r6,r7,r9);
	r17 = 0.5999999999999999778;
	r18 = (float)r17;
	r17 = -1.;
	r19 = (float)r17;
	r17 = 0.8000000000000000444;
	r20 = (float)r17;
	r23 = Urho3D__math_vector3_create(r18,r19,r20);
	if( r10 == NULL ) hl_null_access();
	r30 = Urho3D__math_tvector3_cast_from_vector3(r23);
	r30 = urho3d_Node_set_direction(r10,r30);
	r5 = (String)s$Light;
	r6 = NULL;
	r7 = NULL;
	r11 = urho3d_Node_CreateComponent(r10,r5,r6,r7);
	if( !r11 ) goto label$20c38e3_3_115;
	r14 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r13 = r14->context;
	r33 = Urho3D__graphics_light_cast_from_component(r13,r11);
	r34 = (urho3d__Light)hl_alloc_obj(&t$urho3d_Light);
	urho3d_Light_new(r34,r33);
	goto label$20c38e3_3_116;
	label$20c38e3_3_115:
	r34 = NULL;
	label$20c38e3_3_116:
	if( r34 == NULL ) hl_null_access();
	r35 = 0;
	r35 = urho3d_Light_set_lightType(r34,r35);
	r36 = true;
	r36 = urho3d_Light_set_castShadows(r34,r36);
	r17 = 0.0002500000000000000052;
	r38 = 0.5;
	r39 = NULL;
	r37 = urho3d__BiasParameters_BiasParameters_Impl___new(r17,r38,r39);
	r37 = urho3d_Light_set_shadowBias(r34,r37);
	r17 = 10.;
	r38 = 50.;
	r41 = 200.;
	r42 = 0.;
	r43 = 0.8000000000000000444;
	r39 = NULL;
	r40 = urho3d__CascadeParameters_CascadeParameters_Impl___new(r17,r38,r41,r42,r43,r39);
	r40 = urho3d_Light_set_shadowCascade(r34,r40);
	r1 = r0->scene;
	if( r1 == NULL ) hl_null_access();
	r5 = (String)s$Sky;
	r6 = NULL;
	r7 = NULL;
	r9 = NULL;
	r31 = urho3d_Node_CreateChild(((urho3d__Node)r1),r5,r6,r7,r9);
	r17 = 500.;
	r18 = (float)r17;
	r17 = 500.;
	r19 = (float)r17;
	r17 = 500.;
	r20 = (float)r17;
	r30 = Urho3D__math_tvector3_create(r18,r19,r20);
	if( r31 == NULL ) hl_null_access();
	r44 = urho3d_Node_set_scale(r31,r30);
	r5 = (String)s$Skybox;
	r6 = NULL;
	r7 = NULL;
	r32 = urho3d_Node_CreateComponent(r31,r5,r6,r7);
	if( !r32 ) goto label$20c38e3_3_164;
	r14 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r13 = r14->context;
	r47 = Urho3D__graphics_skybox_cast_from_component(r13,r32);
	if( !r47 ) goto label$20c38e3_3_162;
	r48 = (urho3d__Skybox)hl_alloc_obj(&t$urho3d_Skybox);
	urho3d_Skybox_new(r48,r47);
	goto label$20c38e3_3_163;
	label$20c38e3_3_162:
	r48 = NULL;
	label$20c38e3_3_163:
	goto label$20c38e3_3_165;
	label$20c38e3_3_164:
	r48 = NULL;
	label$20c38e3_3_165:
	r14 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r13 = r14->context;
	r5 = (String)s$Models_Box_mdl;
	r49 = Urho3D__graphics_model_create(r13,r5);
	if( r48 == NULL ) hl_null_access();
	r50 = urho3d_StaticModel_set_model(((urho3d__StaticModel)r48),r49);
	r14 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r13 = r14->context;
	r5 = (String)s$Materials_Skybox_xml;
	r51 = Urho3D__graphics_material_create(r13,r5);
	r52 = urho3d_StaticModel_set_material(((urho3d__StaticModel)r48),r51);
	r1 = r0->scene;
	if( r1 == NULL ) hl_null_access();
	r5 = (String)s$Floor;
	r6 = NULL;
	r7 = NULL;
	r9 = NULL;
	r45 = urho3d_Node_CreateChild(((urho3d__Node)r1),r5,r6,r7,r9);
	r17 = 0.;
	r18 = (float)r17;
	r17 = -0.5;
	r19 = (float)r17;
	r17 = 0.;
	r20 = (float)r17;
	r24 = Urho3D__math_vector3_create(r18,r19,r20);
	if( r45 == NULL ) hl_null_access();
	r44 = Urho3D__math_tvector3_cast_from_vector3(r24);
	r44 = urho3d_Node_set_position(r45,r44);
	r17 = 1000.;
	r18 = (float)r17;
	r17 = 1.;
	r19 = (float)r17;
	r17 = 1000.;
	r20 = (float)r17;
	r53 = Urho3D__math_vector3_create(r18,r19,r20);
	r44 = Urho3D__math_tvector3_cast_from_vector3(r53);
	r44 = urho3d_Node_set_scale(r45,r44);
	r5 = (String)s$StaticModel;
	r6 = NULL;
	r7 = NULL;
	r46 = urho3d_Node_CreateComponent(r45,r5,r6,r7);
	if( !r46 ) goto label$20c38e3_3_213;
	r14 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r13 = r14->context;
	r56 = Urho3D__graphics_staticmodel_cast_from_component(r13,r46);
	r57 = (urho3d__StaticModel)hl_alloc_obj(&t$urho3d_StaticModel);
	urho3d_StaticModel_new(r57,r56);
	goto label$20c38e3_3_214;
	label$20c38e3_3_213:
	r57 = NULL;
	label$20c38e3_3_214:
	r14 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r13 = r14->context;
	r5 = (String)s$Models_Box_mdl;
	r50 = Urho3D__graphics_model_create(r13,r5);
	if( r57 == NULL ) hl_null_access();
	r58 = urho3d_StaticModel_set_model(r57,r50);
	r14 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r13 = r14->context;
	r5 = (String)s$Materials_StoneTiled_xml;
	r52 = Urho3D__graphics_material_create(r13,r5);
	r59 = urho3d_StaticModel_set_material(r57,r52);
	r5 = (String)s$RigidBody;
	r6 = NULL;
	r7 = NULL;
	r55 = urho3d_Node_CreateComponent(r45,r5,r6,r7);
	if( !r55 ) goto label$20c38e3_3_239;
	r14 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r13 = r14->context;
	r61 = Urho3D__physics_rigid_body_cast_from_component(r13,r55);
	if( !r61 ) goto label$20c38e3_3_237;
	r62 = (urho3d__RigidBody)hl_alloc_obj(&t$urho3d_RigidBody);
	urho3d_RigidBody_new(r62,r61);
	goto label$20c38e3_3_238;
	label$20c38e3_3_237:
	r62 = NULL;
	label$20c38e3_3_238:
	goto label$20c38e3_3_240;
	label$20c38e3_3_239:
	r62 = NULL;
	label$20c38e3_3_240:
	r5 = (String)s$CollisionShape;
	r6 = NULL;
	r7 = NULL;
	r60 = urho3d_Node_CreateComponent(r45,r5,r6,r7);
	if( !r60 ) goto label$20c38e3_3_254;
	r14 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r13 = r14->context;
	r63 = Urho3D__physics_collision_shape_cast_from_component(r13,r60);
	if( !r63 ) goto label$20c38e3_3_252;
	r64 = (urho3d__CollisionShape)hl_alloc_obj(&t$urho3d_CollisionShape);
	urho3d_CollisionShape_new(r64,r63);
	goto label$20c38e3_3_253;
	label$20c38e3_3_252:
	r64 = NULL;
	label$20c38e3_3_253:
	goto label$20c38e3_3_255;
	label$20c38e3_3_254:
	r64 = NULL;
	label$20c38e3_3_255:
	r65 = (urho3d___Vector3__$Vector3_Impl_)g$_urho3d__Vector3_Vector3_Impl_;
	r54 = r65->ONE;
	r44 = Urho3D__math_tvector3_cast_from_vector3(r54);
	r66 = NULL;
	r67 = NULL;
	if( r66 ) goto label$20c38e3_3_269;
	r17 = 0.;
	r18 = (float)r17;
	r17 = 0.;
	r19 = (float)r17;
	r17 = 0.;
	r20 = (float)r17;
	r68 = Urho3D__math_tvector3_create(r18,r19,r20);
	r66 = r68;
	label$20c38e3_3_269:
	if( r67 ) goto label$20c38e3_3_283;
	r17 = 0.;
	r68 = NULL;
	if( !r68 ) goto label$20c38e3_3_276;
	r18 = (float)r17;
	r69 = Urho3D__math_tquaternion_create_fv(r18,r68);
	goto label$20c38e3_3_282;
	label$20c38e3_3_276:
	r18 = (float)r17;
	r38 = 0.;
	r19 = (float)r38;
	r38 = 0.;
	r20 = (float)r38;
	r69 = Urho3D__math_tquaternion_create(r18,r19,r20);
	label$20c38e3_3_282:
	r67 = r69;
	label$20c38e3_3_283:
	r14 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r13 = r14->context;
	if( r64 == NULL ) hl_null_access();
	r63 = r64->_abstract;
	Urho3D__physics_collision_shape_set_box(r13,r63,r44,r66,r67);
	r35 = 0;
	label$20c38e3_3_289:
	r71 = 8;
	if( r35 >= r71 ) goto label$20c38e3_3_418;
	r70 = r35;
	++r35;
	r71 = -r70;
	r72 = r70;
	label$20c38e3_3_296:
	if( r71 >= r72 ) goto label$20c38e3_3_417;
	r73 = r71;
	++r71;
	r1 = r0->scene;
	if( r1 == NULL ) hl_null_access();
	r5 = (String)s$Box;
	r6 = NULL;
	r7 = NULL;
	r9 = NULL;
	r45 = urho3d_Node_CreateChild(((urho3d__Node)r1),r5,r6,r7,r9);
	r18 = (float)r73;
	r74 = -r70;
	r17 = (double)r74;
	r38 = 8.;
	r17 = r17 + r38;
	r19 = (float)r17;
	r17 = 0.;
	r20 = (float)r17;
	r24 = Urho3D__math_vector3_create(r18,r19,r20);
	if( r45 == NULL ) hl_null_access();
	r44 = Urho3D__math_tvector3_cast_from_vector3(r24);
	r44 = urho3d_Node_set_position(r45,r44);
	r5 = (String)s$StaticModel;
	r6 = NULL;
	r7 = NULL;
	r46 = urho3d_Node_CreateComponent(r45,r5,r6,r7);
	if( !r46 ) goto label$20c38e3_3_330;
	r14 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r13 = r14->context;
	r56 = Urho3D__graphics_staticmodel_cast_from_component(r13,r46);
	r57 = (urho3d__StaticModel)hl_alloc_obj(&t$urho3d_StaticModel);
	urho3d_StaticModel_new(r57,r56);
	goto label$20c38e3_3_331;
	label$20c38e3_3_330:
	r57 = NULL;
	label$20c38e3_3_331:
	r14 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r13 = r14->context;
	r5 = (String)s$Models_Box_mdl;
	r50 = Urho3D__graphics_model_create(r13,r5);
	if( r57 == NULL ) hl_null_access();
	r58 = urho3d_StaticModel_set_model(r57,r50);
	r14 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r13 = r14->context;
	r5 = (String)s$Materials_StoneEnvMapSmall_xml;
	r52 = Urho3D__graphics_material_create(r13,r5);
	r59 = urho3d_StaticModel_set_material(r57,r52);
	r36 = true;
	r36 = urho3d_StaticModel_set_castShadows(r57,r36);
	r5 = (String)s$RigidBody;
	r6 = NULL;
	r7 = NULL;
	r55 = urho3d_Node_CreateComponent(r45,r5,r6,r7);
	if( !r55 ) goto label$20c38e3_3_358;
	r14 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r13 = r14->context;
	r61 = Urho3D__physics_rigid_body_cast_from_component(r13,r55);
	if( !r61 ) goto label$20c38e3_3_356;
	r62 = (urho3d__RigidBody)hl_alloc_obj(&t$urho3d_RigidBody);
	urho3d_RigidBody_new(r62,r61);
	goto label$20c38e3_3_357;
	label$20c38e3_3_356:
	r62 = NULL;
	label$20c38e3_3_357:
	goto label$20c38e3_3_359;
	label$20c38e3_3_358:
	r62 = NULL;
	label$20c38e3_3_359:
	if( r62 == NULL ) hl_null_access();
	r17 = 1.;
	r18 = (float)r17;
	r18 = urho3d_RigidBody_set_mass(r62,r18);
	r17 = (double)r18;
	r17 = 0.75;
	r18 = (float)r17;
	r18 = urho3d_RigidBody_set_friction(r62,r18);
	r17 = (double)r18;
	r5 = (String)s$CollisionShape;
	r6 = NULL;
	r7 = NULL;
	r60 = urho3d_Node_CreateComponent(r45,r5,r6,r7);
	if( !r60 ) goto label$20c38e3_3_382;
	r14 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r13 = r14->context;
	r63 = Urho3D__physics_collision_shape_cast_from_component(r13,r60);
	if( !r63 ) goto label$20c38e3_3_380;
	r64 = (urho3d__CollisionShape)hl_alloc_obj(&t$urho3d_CollisionShape);
	urho3d_CollisionShape_new(r64,r63);
	goto label$20c38e3_3_381;
	label$20c38e3_3_380:
	r64 = NULL;
	label$20c38e3_3_381:
	goto label$20c38e3_3_383;
	label$20c38e3_3_382:
	r64 = NULL;
	label$20c38e3_3_383:
	r65 = (urho3d___Vector3__$Vector3_Impl_)g$_urho3d__Vector3_Vector3_Impl_;
	r53 = r65->ONE;
	r44 = Urho3D__math_tvector3_cast_from_vector3(r53);
	r66 = NULL;
	r67 = NULL;
	if( r66 ) goto label$20c38e3_3_397;
	r17 = 0.;
	r18 = (float)r17;
	r17 = 0.;
	r19 = (float)r17;
	r17 = 0.;
	r20 = (float)r17;
	r68 = Urho3D__math_tvector3_create(r18,r19,r20);
	r66 = r68;
	label$20c38e3_3_397:
	if( r67 ) goto label$20c38e3_3_411;
	r17 = 0.;
	r68 = NULL;
	if( !r68 ) goto label$20c38e3_3_404;
	r18 = (float)r17;
	r69 = Urho3D__math_tquaternion_create_fv(r18,r68);
	goto label$20c38e3_3_410;
	label$20c38e3_3_404:
	r18 = (float)r17;
	r38 = 0.;
	r19 = (float)r38;
	r38 = 0.;
	r20 = (float)r38;
	r69 = Urho3D__math_tquaternion_create(r18,r19,r20);
	label$20c38e3_3_410:
	r67 = r69;
	label$20c38e3_3_411:
	r14 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r13 = r14->context;
	if( r64 == NULL ) hl_null_access();
	r63 = r64->_abstract;
	Urho3D__physics_collision_shape_set_box(r13,r63,r44,r66,r67);
	goto label$20c38e3_3_296;
	label$20c38e3_3_417:
	goto label$20c38e3_3_289;
	label$20c38e3_3_418:
	r1 = r0->scene;
	if( r1 == NULL ) hl_null_access();
	r5 = (String)s$Camera;
	r6 = NULL;
	r7 = NULL;
	r9 = NULL;
	r45 = urho3d_Node_CreateChild(((urho3d__Node)r1),r5,r6,r7,r9);
	r0->cameraNode = r45;
	r45 = r0->cameraNode;
	if( r45 == NULL ) hl_null_access();
	r5 = (String)s$Camera;
	r6 = NULL;
	r7 = NULL;
	r46 = urho3d_Node_CreateComponent(r45,r5,r6,r7);
	if( !r46 ) goto label$20c38e3_3_439;
	r14 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r13 = r14->context;
	r75 = Urho3D__graphics_camera_cast_from_component(r13,r46);
	r76 = (urho3d__Camera)hl_alloc_obj(&t$urho3d_Camera);
	urho3d_Camera_new(r76,r75);
	goto label$20c38e3_3_440;
	label$20c38e3_3_439:
	r76 = NULL;
	label$20c38e3_3_440:
	r45 = r0->cameraNode;
	r17 = 0.;
	r18 = (float)r17;
	r17 = 5.;
	r19 = (float)r17;
	r17 = -20.;
	r20 = (float)r17;
	r44 = Urho3D__math_tvector3_create(r18,r19,r20);
	if( r45 == NULL ) hl_null_access();
	r66 = urho3d_Node_set_position(r45,r44);
	return;
}

void PhysicsSample_SetupViewport(PhysicsSample r0) {
	urho3d__Camera r10;
	bool *r6;
	String r5;
	hl_urho3d_math_intrect *r11;
	hl_urho3d_scene_component *r3;
	urho3d__Node r4;
	urho3d__Scene r1;
	urho3d___Context__$Context_Impl_ r9;
	hl_urho3d_graphics_camera *r7;
	hl_urho3d_graphics_viewport *r12;
	urho3d_context *r8;
	hl_urho3d_scene_scene *r13;
	int r14;
	r1 = r0->scene;
	r4 = r0->cameraNode;
	if( r4 == NULL ) hl_null_access();
	r5 = (String)s$Camera;
	r6 = NULL;
	r3 = urho3d_Node_GetComponent(r4,r5,r6);
	if( !r3 ) goto label$20c38e3_4_13;
	r9 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r8 = r9->context;
	r7 = Urho3D__graphics_camera_cast_from_component(r8,r3);
	r10 = (urho3d__Camera)hl_alloc_obj(&t$urho3d_Camera);
	urho3d_Camera_new(r10,r7);
	goto label$20c38e3_4_14;
	label$20c38e3_4_13:
	r10 = NULL;
	label$20c38e3_4_14:
	r11 = NULL;
	if( !r11 ) goto label$20c38e3_4_24;
	r9 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r8 = r9->context;
	if( r1 == NULL ) hl_null_access();
	r13 = r1->abstractScene;
	if( r10 == NULL ) hl_null_access();
	r7 = r10->_abstract;
	r12 = Urho3D__graphics_viewport_create_r(r8,r13,r7,r11);
	goto label$20c38e3_4_31;
	label$20c38e3_4_24:
	r9 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r8 = r9->context;
	if( r1 == NULL ) hl_null_access();
	r13 = r1->abstractScene;
	if( r10 == NULL ) hl_null_access();
	r7 = r10->_abstract;
	r12 = Urho3D__graphics_viewport_create(r8,r13,r7);
	label$20c38e3_4_31:
	r14 = 0;
	urho3d_Renderer_SetViewport(r14,r12);
	return;
}

void PhysicsSample_SubscribeToEvents(PhysicsSample r0) {
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

void PhysicsSample_MoveCamera(PhysicsSample r0,double r1) {
	urho3d__Camera r13, r14;
	bool *r9;
	String r8;
	vvirtual *r29;
	hl_urho3d_scene_component *r6;
	urho3d___Vector3__$Vector3_Impl_ r33;
	bool r31;
	hl_urho3d_math_vector3 *r32, *r34, *r38;
	urho3d__Node r7;
	hl_urho3d_math_tquaternion *r26;
	hl_urho3d_math_tintvector2 *r19;
	urho3d___Context__$Context_Impl_ r12;
	hl_urho3d_graphics_camera *r10;
	float r23, r27, r28, r35, r36, r37;
	hl_urho3d_input_touch_state *r18;
	urho3d_context *r11;
	double r2, r15, r21, r22, r24, r30;
	int *r39;
	hl_urho3d_math_tvector3 *r25;
	int r4, r5, r16, r17, r20;
	r2 = 20.;
	r4 = urho3d_Input_get_numTouches();
	r5 = 0;
	if( r5 >= r4 ) goto label$20c38e3_6_82;
	r7 = r0->cameraNode;
	if( r7 == NULL ) hl_null_access();
	r8 = (String)s$Camera;
	r9 = NULL;
	r6 = urho3d_Node_GetComponent(r7,r8,r9);
	if( !r6 ) goto label$20c38e3_6_17;
	r12 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r11 = r12->context;
	r10 = Urho3D__graphics_camera_cast_from_component(r11,r6);
	r14 = (urho3d__Camera)hl_alloc_obj(&t$urho3d_Camera);
	urho3d_Camera_new(r14,r10);
	r13 = r14;
	goto label$20c38e3_6_19;
	label$20c38e3_6_17:
	r14 = NULL;
	r13 = r14;
	label$20c38e3_6_19:
	r15 = 2.;
	if( !r14 ) goto label$20c38e3_6_81;
	r4 = 0;
	r5 = urho3d_Input_get_numTouches();
	label$20c38e3_6_23:
	if( r4 >= r5 ) goto label$20c38e3_6_81;
	r16 = r4;
	++r4;
	r12 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r11 = r12->context;
	r18 = Urho3D__input_touch_state_get(r11,r16);
	r19 = urho3d__TouchState_TouchState_Impl__get_delta(r18);
	r17 = Urho3D__math_tintvector2_get_x(r19);
	r20 = 0;
	if( r17 != r20 ) goto label$20c38e3_6_38;
	r19 = urho3d__TouchState_TouchState_Impl__get_delta(r18);
	r17 = Urho3D__math_tintvector2_get_y(r19);
	r20 = 0;
	if( r17 == r20 ) goto label$20c38e3_6_80;
	label$20c38e3_6_38:
	r21 = r0->yaw;
	if( r13 == NULL ) hl_null_access();
	r23 = urho3d_Camera_get_fov(r13);
	r24 = (double)r23;
	r22 = r15 * r24;
	r17 = urho3d_Graphics_get_height();
	r24 = (double)r17;
	r22 = r22 / r24;
	r19 = urho3d__TouchState_TouchState_Impl__get_delta(r18);
	r17 = Urho3D__math_tintvector2_get_x(r19);
	r24 = (double)r17;
	r22 = r22 * r24;
	r21 = r21 + r22;
	r0->yaw = r21;
	r21 = r0->pitch;
	r23 = urho3d_Camera_get_fov(r13);
	r24 = (double)r23;
	r22 = r15 * r24;
	r17 = urho3d_Graphics_get_height();
	r24 = (double)r17;
	r22 = r22 / r24;
	r19 = urho3d__TouchState_TouchState_Impl__get_delta(r18);
	r17 = Urho3D__math_tintvector2_get_y(r19);
	r24 = (double)r17;
	r22 = r22 * r24;
	r21 = r21 + r22;
	r0->pitch = r21;
	r7 = r0->cameraNode;
	r21 = r0->pitch;
	r22 = r0->yaw;
	r25 = NULL;
	if( !r25 ) goto label$20c38e3_6_73;
	r23 = (float)r21;
	r26 = Urho3D__math_tquaternion_create_fv(r23,r25);
	goto label$20c38e3_6_78;
	label$20c38e3_6_73:
	r23 = (float)r21;
	r27 = (float)r22;
	r24 = 0.;
	r28 = (float)r24;
	r26 = Urho3D__math_tquaternion_create(r23,r27,r28);
	label$20c38e3_6_78:
	if( r7 == NULL ) hl_null_access();
	r26 = urho3d_Node_set_rotation(r7,r26);
	label$20c38e3_6_80:
	goto label$20c38e3_6_23;
	label$20c38e3_6_81:
	goto label$20c38e3_6_124;
	label$20c38e3_6_82:
	r15 = 0.1000000000000000056;
	r21 = r0->yaw;
	r29 = urho3d_Input_get_mouseMove();
	if( r29 == NULL ) hl_null_access();
	r4 = hl_vfields(r29)[0] ? (*(int*)(hl_vfields(r29)[0])) : (int)hl_dyn_geti(r29->value,120/*x*/,&t$_i32);
	r24 = (double)r4;
	r22 = r15 * r24;
	r21 = r21 + r22;
	r0->yaw = r21;
	r21 = r0->pitch;
	r29 = urho3d_Input_get_mouseMove();
	if( r29 == NULL ) hl_null_access();
	r4 = hl_vfields(r29)[1] ? (*(int*)(hl_vfields(r29)[1])) : (int)hl_dyn_geti(r29->value,121/*y*/,&t$_i32);
	r24 = (double)r4;
	r22 = r15 * r24;
	r21 = r21 + r22;
	r0->pitch = r21;
	r24 = -90.;
	if( !(r21 < r24) ) goto label$20c38e3_6_103;
	r22 = -90.;
	goto label$20c38e3_6_108;
	label$20c38e3_6_103:
	r24 = 90.;
	if( !(r24 < r21) ) goto label$20c38e3_6_107;
	r22 = 90.;
	goto label$20c38e3_6_108;
	label$20c38e3_6_107:
	r22 = r21;
	label$20c38e3_6_108:
	r0->pitch = r22;
	r7 = r0->cameraNode;
	r22 = r0->pitch;
	r24 = r0->yaw;
	r25 = NULL;
	if( !r25 ) goto label$20c38e3_6_117;
	r23 = (float)r22;
	r26 = Urho3D__math_tquaternion_create_fv(r23,r25);
	goto label$20c38e3_6_122;
	label$20c38e3_6_117:
	r23 = (float)r22;
	r27 = (float)r24;
	r30 = 0.;
	r28 = (float)r30;
	r26 = Urho3D__math_tquaternion_create(r23,r27,r28);
	label$20c38e3_6_122:
	if( r7 == NULL ) hl_null_access();
	r26 = urho3d_Node_set_rotation(r7,r26);
	label$20c38e3_6_124:
	r4 = 119;
	r31 = urho3d_Input_GetKeyDown(r4);
	if( !r31 ) goto label$20c38e3_6_160;
	r7 = r0->cameraNode;
	r33 = (urho3d___Vector3__$Vector3_Impl_)g$_urho3d__Vector3_Vector3_Impl_;
	r32 = r33->FORWARD;
	r23 = Urho3D__math_vector3_get_x(r32);
	r15 = (double)r23;
	r15 = r15 * r2;
	r23 = (float)r15;
	r27 = Urho3D__math_vector3_get_y(r32);
	r15 = (double)r27;
	r15 = r15 * r2;
	r27 = (float)r15;
	r28 = Urho3D__math_vector3_get_z(r32);
	r15 = (double)r28;
	r15 = r15 * r2;
	r28 = (float)r15;
	r34 = Urho3D__math_vector3_create(r23,r27,r28);
	r35 = Urho3D__math_vector3_get_x(r34);
	r15 = (double)r35;
	r15 = r15 * r1;
	r35 = (float)r15;
	r36 = Urho3D__math_vector3_get_y(r34);
	r15 = (double)r36;
	r15 = r15 * r1;
	r36 = (float)r15;
	r37 = Urho3D__math_vector3_get_z(r34);
	r15 = (double)r37;
	r15 = r15 * r1;
	r37 = (float)r15;
	r38 = Urho3D__math_vector3_create(r35,r36,r37);
	if( r7 == NULL ) hl_null_access();
	r25 = Urho3D__math_tvector3_cast_from_vector3(r38);
	r39 = NULL;
	urho3d_Node_Translate(r7,r25,r39);
	label$20c38e3_6_160:
	r4 = 115;
	r31 = urho3d_Input_GetKeyDown(r4);
	if( !r31 ) goto label$20c38e3_6_196;
	r7 = r0->cameraNode;
	r33 = (urho3d___Vector3__$Vector3_Impl_)g$_urho3d__Vector3_Vector3_Impl_;
	r32 = r33->BACK;
	r23 = Urho3D__math_vector3_get_x(r32);
	r15 = (double)r23;
	r15 = r15 * r2;
	r23 = (float)r15;
	r27 = Urho3D__math_vector3_get_y(r32);
	r15 = (double)r27;
	r15 = r15 * r2;
	r27 = (float)r15;
	r28 = Urho3D__math_vector3_get_z(r32);
	r15 = (double)r28;
	r15 = r15 * r2;
	r28 = (float)r15;
	r34 = Urho3D__math_vector3_create(r23,r27,r28);
	r35 = Urho3D__math_vector3_get_x(r34);
	r15 = (double)r35;
	r15 = r15 * r1;
	r35 = (float)r15;
	r36 = Urho3D__math_vector3_get_y(r34);
	r15 = (double)r36;
	r15 = r15 * r1;
	r36 = (float)r15;
	r37 = Urho3D__math_vector3_get_z(r34);
	r15 = (double)r37;
	r15 = r15 * r1;
	r37 = (float)r15;
	r38 = Urho3D__math_vector3_create(r35,r36,r37);
	if( r7 == NULL ) hl_null_access();
	r25 = Urho3D__math_tvector3_cast_from_vector3(r38);
	r39 = NULL;
	urho3d_Node_Translate(r7,r25,r39);
	label$20c38e3_6_196:
	r4 = 97;
	r31 = urho3d_Input_GetKeyDown(r4);
	if( !r31 ) goto label$20c38e3_6_232;
	r7 = r0->cameraNode;
	r33 = (urho3d___Vector3__$Vector3_Impl_)g$_urho3d__Vector3_Vector3_Impl_;
	r32 = r33->LEFT;
	r23 = Urho3D__math_vector3_get_x(r32);
	r15 = (double)r23;
	r15 = r15 * r2;
	r23 = (float)r15;
	r27 = Urho3D__math_vector3_get_y(r32);
	r15 = (double)r27;
	r15 = r15 * r2;
	r27 = (float)r15;
	r28 = Urho3D__math_vector3_get_z(r32);
	r15 = (double)r28;
	r15 = r15 * r2;
	r28 = (float)r15;
	r34 = Urho3D__math_vector3_create(r23,r27,r28);
	r35 = Urho3D__math_vector3_get_x(r34);
	r15 = (double)r35;
	r15 = r15 * r1;
	r35 = (float)r15;
	r36 = Urho3D__math_vector3_get_y(r34);
	r15 = (double)r36;
	r15 = r15 * r1;
	r36 = (float)r15;
	r37 = Urho3D__math_vector3_get_z(r34);
	r15 = (double)r37;
	r15 = r15 * r1;
	r37 = (float)r15;
	r38 = Urho3D__math_vector3_create(r35,r36,r37);
	if( r7 == NULL ) hl_null_access();
	r25 = Urho3D__math_tvector3_cast_from_vector3(r38);
	r39 = NULL;
	urho3d_Node_Translate(r7,r25,r39);
	label$20c38e3_6_232:
	r4 = 100;
	r31 = urho3d_Input_GetKeyDown(r4);
	if( !r31 ) goto label$20c38e3_6_268;
	r7 = r0->cameraNode;
	r33 = (urho3d___Vector3__$Vector3_Impl_)g$_urho3d__Vector3_Vector3_Impl_;
	r32 = r33->RIGHT;
	r23 = Urho3D__math_vector3_get_x(r32);
	r15 = (double)r23;
	r15 = r15 * r2;
	r23 = (float)r15;
	r27 = Urho3D__math_vector3_get_y(r32);
	r15 = (double)r27;
	r15 = r15 * r2;
	r27 = (float)r15;
	r28 = Urho3D__math_vector3_get_z(r32);
	r15 = (double)r28;
	r15 = r15 * r2;
	r28 = (float)r15;
	r34 = Urho3D__math_vector3_create(r23,r27,r28);
	r35 = Urho3D__math_vector3_get_x(r34);
	r15 = (double)r35;
	r15 = r15 * r1;
	r35 = (float)r15;
	r36 = Urho3D__math_vector3_get_y(r34);
	r15 = (double)r36;
	r15 = r15 * r1;
	r36 = (float)r15;
	r37 = Urho3D__math_vector3_get_z(r34);
	r15 = (double)r37;
	r15 = r15 * r1;
	r37 = (float)r15;
	r38 = Urho3D__math_vector3_create(r35,r36,r37);
	if( r7 == NULL ) hl_null_access();
	r25 = Urho3D__math_tvector3_cast_from_vector3(r38);
	r39 = NULL;
	urho3d_Node_Translate(r7,r25,r39);
	label$20c38e3_6_268:
	r12 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r11 = r12->context;
	r4 = 1;
	r31 = Urho3D__input_get_mouse_button_press(r11,r4);
	if( !r31 ) goto label$20c38e3_6_274;
	PhysicsSample_SpawnObject(r0);
	label$20c38e3_6_274:
	return;
}

void PhysicsSample_SpawnObject(PhysicsSample r0) {
	bool *r6;
	String r3;
	hl_urho3d_physics_rigid_body *r29;
	hl_urho3d_scene_component *r17, *r18, *r28;
	urho3d___Vector3__$Vector3_Impl_ r34;
	urho3d__RigidBody r30;
	bool r27;
	urho3d__StaticModel r22;
	hl_urho3d_math_vector3 *r33;
	urho3d__Scene r2;
	urho3d__Node r1, r9, r10;
	urho3d__CollisionShape r32;
	hl_urho3d_math_tquaternion *r11, *r38;
	hl_urho3d_graphics_material *r25, *r26;
	urho3d___Context__$Context_Impl_ r21;
	urho3d_context *r20;
	float r13, r14, r15;
	hl_urho3d_graphics_staticmodel *r19;
	double r12, r39;
	hl_urho3d_physics_collision_shape *r31;
	hl_urho3d_math_tvector3 *r8, *r16, *r35, *r36, *r37;
	int *r4, *r5;
	hl_urho3d_graphics_model *r23, *r24;
	r2 = r0->scene;
	if( r2 == NULL ) hl_null_access();
	r3 = (String)s$SmallBox;
	r4 = NULL;
	r5 = NULL;
	r6 = NULL;
	r1 = urho3d_Node_CreateChild(((urho3d__Node)r2),r3,r4,r5,r6);
	if( r1 == NULL ) hl_null_access();
	r10 = r0->cameraNode;
	if( r10 == NULL ) hl_null_access();
	r8 = urho3d_Node_get_position(r10);
	r8 = urho3d_Node_set_position(r1,r8);
	r10 = r0->cameraNode;
	if( r10 == NULL ) hl_null_access();
	r11 = urho3d_Node_get_rotation(r10);
	r11 = urho3d_Node_set_rotation(r1,r11);
	r12 = 0.25;
	r13 = (float)r12;
	r12 = 0.25;
	r14 = (float)r12;
	r12 = 0.25;
	r15 = (float)r12;
	r8 = Urho3D__math_tvector3_create(r13,r14,r15);
	r16 = urho3d_Node_set_scale(r1,r8);
	r3 = (String)s$StaticModel;
	r4 = NULL;
	r5 = NULL;
	r17 = urho3d_Node_CreateComponent(r1,r3,r4,r5);
	if( !r17 ) goto label$20c38e3_7_35;
	r21 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r20 = r21->context;
	r19 = Urho3D__graphics_staticmodel_cast_from_component(r20,r17);
	r22 = (urho3d__StaticModel)hl_alloc_obj(&t$urho3d_StaticModel);
	urho3d_StaticModel_new(r22,r19);
	goto label$20c38e3_7_36;
	label$20c38e3_7_35:
	r22 = NULL;
	label$20c38e3_7_36:
	r21 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r20 = r21->context;
	r3 = (String)s$Models_Box_mdl;
	r23 = Urho3D__graphics_model_create(r20,r3);
	if( r22 == NULL ) hl_null_access();
	r24 = urho3d_StaticModel_set_model(r22,r23);
	r21 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r20 = r21->context;
	r3 = (String)s$Materials_StoneEnvMapSmall_xml;
	r25 = Urho3D__graphics_material_create(r20,r3);
	r26 = urho3d_StaticModel_set_material(r22,r25);
	r27 = true;
	r27 = urho3d_StaticModel_set_castShadows(r22,r27);
	r3 = (String)s$RigidBody;
	r4 = NULL;
	r5 = NULL;
	r18 = urho3d_Node_CreateComponent(r1,r3,r4,r5);
	if( !r18 ) goto label$20c38e3_7_63;
	r21 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r20 = r21->context;
	r29 = Urho3D__physics_rigid_body_cast_from_component(r20,r18);
	if( !r29 ) goto label$20c38e3_7_61;
	r30 = (urho3d__RigidBody)hl_alloc_obj(&t$urho3d_RigidBody);
	urho3d_RigidBody_new(r30,r29);
	goto label$20c38e3_7_62;
	label$20c38e3_7_61:
	r30 = NULL;
	label$20c38e3_7_62:
	goto label$20c38e3_7_64;
	label$20c38e3_7_63:
	r30 = NULL;
	label$20c38e3_7_64:
	if( r30 == NULL ) hl_null_access();
	r12 = 0.25;
	r13 = (float)r12;
	r13 = urho3d_RigidBody_set_mass(r30,r13);
	r12 = (double)r13;
	r12 = 0.75;
	r13 = (float)r12;
	r13 = urho3d_RigidBody_set_friction(r30,r13);
	r12 = (double)r13;
	r3 = (String)s$CollisionShape;
	r4 = NULL;
	r5 = NULL;
	r28 = urho3d_Node_CreateComponent(r1,r3,r4,r5);
	if( !r28 ) goto label$20c38e3_7_87;
	r21 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r20 = r21->context;
	r31 = Urho3D__physics_collision_shape_cast_from_component(r20,r28);
	if( !r31 ) goto label$20c38e3_7_85;
	r32 = (urho3d__CollisionShape)hl_alloc_obj(&t$urho3d_CollisionShape);
	urho3d_CollisionShape_new(r32,r31);
	goto label$20c38e3_7_86;
	label$20c38e3_7_85:
	r32 = NULL;
	label$20c38e3_7_86:
	goto label$20c38e3_7_88;
	label$20c38e3_7_87:
	r32 = NULL;
	label$20c38e3_7_88:
	r34 = (urho3d___Vector3__$Vector3_Impl_)g$_urho3d__Vector3_Vector3_Impl_;
	r33 = r34->ONE;
	r16 = Urho3D__math_tvector3_cast_from_vector3(r33);
	r35 = NULL;
	r11 = NULL;
	if( r35 ) goto label$20c38e3_7_102;
	r12 = 0.;
	r13 = (float)r12;
	r12 = 0.;
	r14 = (float)r12;
	r12 = 0.;
	r15 = (float)r12;
	r36 = Urho3D__math_tvector3_create(r13,r14,r15);
	r35 = r36;
	label$20c38e3_7_102:
	if( r11 ) goto label$20c38e3_7_116;
	r12 = 0.;
	r36 = NULL;
	if( !r36 ) goto label$20c38e3_7_109;
	r13 = (float)r12;
	r38 = Urho3D__math_tquaternion_create_fv(r13,r36);
	goto label$20c38e3_7_115;
	label$20c38e3_7_109:
	r13 = (float)r12;
	r39 = 0.;
	r14 = (float)r39;
	r39 = 0.;
	r15 = (float)r39;
	r38 = Urho3D__math_tquaternion_create(r13,r14,r15);
	label$20c38e3_7_115:
	r11 = r38;
	label$20c38e3_7_116:
	r21 = (urho3d___Context__$Context_Impl_)g$_urho3d__Context_Context_Impl_;
	r20 = r21->context;
	if( r32 == NULL ) hl_null_access();
	r31 = r32->_abstract;
	Urho3D__physics_collision_shape_set_box(r20,r31,r16,r35,r11);
	r12 = 10.;
	r9 = r0->cameraNode;
	if( r9 == NULL ) hl_null_access();
	r11 = urho3d_Node_get_rotation(r9);
	r39 = 0.;
	r13 = (float)r39;
	r39 = 0.25;
	r14 = (float)r39;
	r39 = 1.;
	r15 = (float)r39;
	r16 = Urho3D__math_tvector3_create(r13,r14,r15);
	r35 = Urho3D__math_tquaternion_multiply_tvector3(r11,r16);
	r13 = Urho3D__math_tvector3_get_x(r35);
	r39 = (double)r13;
	r39 = r39 * r12;
	r13 = (float)r39;
	r14 = Urho3D__math_tvector3_get_y(r35);
	r39 = (double)r14;
	r39 = r39 * r12;
	r14 = (float)r39;
	r15 = Urho3D__math_tvector3_get_z(r35);
	r39 = (double)r15;
	r39 = r39 * r12;
	r15 = (float)r39;
	r36 = Urho3D__math_tvector3_create(r13,r14,r15);
	r37 = urho3d_RigidBody_set_linearVelocity(r30,r36);
	return;
}

void PhysicsSample_HandleUpdate(PhysicsSample r0,hl_urho3d_stringhash* r1,hl_urho3d_variantmap* r2) {
	String r5;
	hl_urho3d_tvariant *r4;
	float r3;
	double r6;
	r5 = (String)s$TimeStep;
	r4 = Urho3D__core_variantmap_get_key_string_value(r2,r5);
	r3 = Urho3D__tvariant_get_float(r4);
	r6 = (double)r3;
	PhysicsSample_MoveCamera(r0,r6);
	return;
}

void PhysicsSample_new(PhysicsSample r0) {
	urho3d__Scene r3;
	urho3d__Node r2;
	int r1;
	r1 = 200;
	r0->NUM_OBJECTS = r1;
	r2 = NULL;
	r0->cameraNode = r2;
	r3 = NULL;
	r0->scene = r3;
	urho3d_Application_new(((urho3d__Application)r0));
	return;
}

