﻿// Generated by HLC 4.1.2 (HL v4)
#ifndef INC_urho3d__Component
#define INC_urho3d__Component
typedef struct _urho3d__$Component *urho3d__$Component;
typedef struct _urho3d__Component *urho3d__Component;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <urho3d/Node.h>
#include <urho3d/Scene.h>
#include <hl/natives.h>


struct _urho3d__$Component {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _urho3d__Component {
	hl_type *$type;
	urho3d__Node _node;
	urho3d__Scene _scene;
	hl_urho3d_scene_component* abstractComponent;
};
#endif

