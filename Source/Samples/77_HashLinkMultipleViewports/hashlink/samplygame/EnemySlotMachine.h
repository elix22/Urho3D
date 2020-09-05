﻿// Generated by HLC 4.1.2 (HL v4)
#ifndef INC_samplygame__EnemySlotMachine
#define INC_samplygame__EnemySlotMachine
typedef struct _samplygame__$EnemySlotMachine *samplygame__$EnemySlotMachine;
typedef struct _samplygame__EnemySlotMachine *samplygame__EnemySlotMachine;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <samplygame/Enemy.h>
#include <samplygame/Aircraft.h>
#include <urho3d/LogicComponent.h>
#include <urho3d/Component.h>
#include <urho3d/Node.h>
#include <urho3d/Scene.h>
#include <hl/natives.h>


struct _samplygame__$EnemySlotMachine {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _samplygame__EnemySlotMachine {
	hl_type *$type;
	urho3d__Node _node;
	urho3d__Scene _scene;
	hl_urho3d_scene_component* abstractComponent;
	hl_urho3d_scene_logic_component* abstractLogicComponent;
	int Health;
	int MaxHealth;
	int level;
	int CollisionLayer;
	hl_urho3d_math_vector3* CollisionShapeSize;
	String name;
};
#endif

