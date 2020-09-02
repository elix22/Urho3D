﻿// Generated by HLC 4.1.2 (HL v4)
#ifndef INC_samplygame__Missile
#define INC_samplygame__Missile
typedef struct _samplygame__$Missile *samplygame__$Missile;
typedef struct _samplygame__Missile *samplygame__Missile;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <samplygame/Weapon.h>
#include <urho3d/LogicComponent.h>
#include <urho3d/Component.h>
#include <urho3d/Node.h>
#include <urho3d/Scene.h>
#include <hl/natives.h>


struct _samplygame__$Missile {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _samplygame__Missile {
	hl_type *$type;
	urho3d__Node _node;
	urho3d__Scene _scene;
	hl_urho3d_scene_component* abstractComponent;
	hl_urho3d_scene_logic_component* abstractLogicComponent;
	bool isInited;
	int LastLaunchDate;
	int ReloadDuration;
	int Damage;
	int level;
};
#endif

