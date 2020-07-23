﻿// Generated by HLC 4.1.2 (HL v4)
#ifndef INC_urho3d__Scene
#define INC_urho3d__Scene
typedef struct _urho3d__$Scene *urho3d__$Scene;
typedef struct _urho3d__Scene *urho3d__Scene;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <urho3d/Node.h>
#include <hl/types/ArrayDyn.h>
#include <hl/types/ArrayObj.h>
#include <hl/natives.h>


struct _urho3d__$Scene {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	urho3d__Scene currentScene;
};
struct _urho3d__Scene {
	hl_type *$type;
	hl__types__ArrayDyn children;
	hl__types__ArrayObj components;
	hl_urho3d_scene_node* abstractNode;
	hl__types__ArrayObj nodes;
	hl_urho3d_scene_scene* abstractScene;
};
#endif

