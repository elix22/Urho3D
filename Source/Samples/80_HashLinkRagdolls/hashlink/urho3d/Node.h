﻿// Generated by HLC 4.1.2 (HL v4)
#ifndef INC_urho3d__Node
#define INC_urho3d__Node
typedef struct _urho3d__$Node *urho3d__$Node;
typedef struct _urho3d__Node *urho3d__Node;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayObj.h>
#include <haxe/ds/StringMap.h>
#include <hl/natives.h>


struct _urho3d__$Node {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _urho3d__Node {
	hl_type *$type;
	hl__types__ArrayObj children;
	haxe__ds__StringMap children_map;
	hl__types__ArrayObj components;
	haxe__ds__StringMap dynamic_map;
	hl_urho3d_scene_node* abstractNode;
};
#endif

