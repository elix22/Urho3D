﻿// Generated by HLC 4.1.2 (HL v4)
#ifndef INC__std__StaticSceneSample
#define INC__std__StaticSceneSample
typedef struct _$StaticSceneSample *$StaticSceneSample;
typedef struct _StaticSceneSample *StaticSceneSample;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <urho3d/Application.h>
#include <hl/natives.h>
#include <urho3d/Scene.h>
#include <urho3d/Node.h>


struct _$StaticSceneSample {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _StaticSceneSample {
	hl_type *$type;
	hl_urho3d_application* abstractApplication;
	String EP_AUTOLOAD_PATHS;
	String EP_BORDERLESS;
	String EP_DUMP_SHADERS;
	String EP_EVENT_PROFILER;
	String EP_EXTERNAL_WINDOW;
	String EP_FLUSH_GPU;
	String EP_FORCE_GL2;
	String EP_FRAME_LIMITER;
	String EP_FULL_SCREEN;
	String EP_HEADLESS;
	String EP_HIGH_DPI;
	String EP_LOG_LEVEL;
	String EP_LOG_NAME;
	String EP_LOG_QUIET;
	String EP_LOW_QUALITY_SHADOWS;
	String EP_MATERIAL_QUALITY;
	String EP_MONITOR;
	String EP_MULTI_SAMPLE;
	String EP_ORIENTATIONS;
	String EP_PACKAGE_CACHE_DIR;
	String EP_RENDER_PATH;
	String EP_REFRESH_RATE;
	String EP_RESOURCE_PACKAGES;
	String EP_RESOURCE_PATHS;
	String EP_RESOURCE_PREFIX_PATHS;
	String EP_SHADER_CACHE_DIR;
	String EP_SHADOWS;
	String EP_SOUND;
	String EP_SOUND_BUFFER;
	String EP_SOUND_INTERPOLATION;
	String EP_SOUND_MIX_RATE;
	String EP_SOUND_STEREO;
	String EP_TEXTURE_ANISOTROPY;
	String EP_TEXTURE_FILTER_MODE;
	String EP_TEXTURE_QUALITY;
	String EP_TIME_OUT;
	String EP_TOUCH_EMULATION;
	String EP_TRIPLE_BUFFER;
	String EP_VSYNC;
	String EP_WINDOW_HEIGHT;
	String EP_WINDOW_ICON;
	String EP_WINDOW_POSITION_X;
	String EP_WINDOW_POSITION_Y;
	String EP_WINDOW_RESIZABLE;
	String EP_WINDOW_TITLE;
	String EP_WINDOW_WIDTH;
	String EP_WORKER_THREADS;
	urho3d__Scene scene;
	urho3d__Node cameraNode;
	double yaw;
	double pitch;
	int NUM_OBJECTS;
};
#endif

