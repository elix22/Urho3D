﻿// Generated by HLC 4.1.2 (HL v4)
#ifndef INC_urho3d___Component__AbstractComponent_Impl_
#define INC_urho3d___Component__AbstractComponent_Impl_
typedef struct _urho3d___Component__$AbstractComponent_Impl_ *urho3d___Component__$AbstractComponent_Impl_;
typedef struct _urho3d___Component__AbstractComponent_Impl_ *urho3d___Component__AbstractComponent_Impl_;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/natives.h>
#include <urho3d/Component.h>
#include <urho3d/Zone.h>
#include <urho3d/StaticModel.h>
#include <urho3d/AnimatedModel.h>
#include <urho3d/Camera.h>
#include <urho3d/Light.h>
#include <urho3d/BillboardSet.h>
#include <urho3d/DecalSet.h>
#include <urho3d/RigidBody.h>
#include <urho3d/CollisionShape.h>
#include <urho3d/Skybox.h>


struct _urho3d___Component__$AbstractComponent_Impl_ {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* _new;
	vclosure* toComponent;
	vclosure* toZone;
	vclosure* toStaticModel;
	vclosure* toAnimatedModel;
	vclosure* toCamera;
	vclosure* toLight;
	vclosure* toBillboardset;
	vclosure* toDecalset;
	vclosure* toRigidBody;
	vclosure* toCollisionShape;
	vclosure* toSkybox;
};
struct _urho3d___Component__AbstractComponent_Impl_ {
	hl_type *$type;
};
#endif

