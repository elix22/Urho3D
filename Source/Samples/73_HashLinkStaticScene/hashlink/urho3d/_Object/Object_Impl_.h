﻿// Generated by HLC 4.1.2 (HL v4)
#ifndef INC_urho3d___Object__Object_Impl_
#define INC_urho3d___Object__Object_Impl_
typedef struct _urho3d___Object__$Object_Impl_ *urho3d___Object__$Object_Impl_;
typedef struct _urho3d___Object__Object_Impl_ *urho3d___Object__Object_Impl_;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/natives.h>
#include <urho3d/Component.h>
#include <urho3d/Node.h>


struct _urho3d___Object__$Object_Impl_ {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* toComponent;
	vclosure* fromComponent;
	vclosure* toNode;
	vclosure* fromNode;
	vclosure* toAbstractNode;
	vclosure* fromAbstractNode;
};
struct _urho3d___Object__Object_Impl_ {
	hl_type *$type;
};
#endif

