﻿// Generated by HLC 4.1.2 (HL v4)
#ifndef INC_samplygame__SpawnMonitorScreenEntry
#define INC_samplygame__SpawnMonitorScreenEntry
typedef struct _samplygame__$SpawnMonitorScreenEntry *samplygame__$SpawnMonitorScreenEntry;
typedef struct _samplygame__SpawnMonitorScreenEntry *samplygame__SpawnMonitorScreenEntry;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <samplygame/SpawnEntry.h>
#include <samplygame/Enemy.h>
#include <hl/types/ArrayObj.h>


struct _samplygame__$SpawnMonitorScreenEntry {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _samplygame__SpawnMonitorScreenEntry {
	hl_type *$type;
	String name;
	vclosure* _CreateObject;
	hl__types__ArrayObj _enemy;
	int repeat;
	int repeat_counter;
	int msDelay;
	bool fromLeftSide;
};
#endif

