﻿// Generated by HLC 4.1.2 (HL v4)
#define HLC_BOOT
#include <hlc.h>


void hl_init_hashes() {
	hl_hash((vbyte*)USTR("__type__"));
	hl_hash((vbyte*)USTR("__meta__"));
	hl_hash((vbyte*)USTR("__implementedBy__"));
	hl_hash((vbyte*)USTR("check"));
	hl_hash((vbyte*)USTR("__name__"));
	hl_hash((vbyte*)USTR("__constructor__"));
	hl_hash((vbyte*)USTR("bytes"));
	hl_hash((vbyte*)USTR("length"));
	hl_hash((vbyte*)USTR("toUpperCase"));
	hl_hash((vbyte*)USTR("toLowerCase"));
	hl_hash((vbyte*)USTR("charAt"));
	hl_hash((vbyte*)USTR("charCodeAt"));
	hl_hash((vbyte*)USTR("findChar"));
	hl_hash((vbyte*)USTR("indexOf"));
	hl_hash((vbyte*)USTR("lastIndexOf"));
	hl_hash((vbyte*)USTR("split"));
	hl_hash((vbyte*)USTR("substr"));
	hl_hash((vbyte*)USTR("substring"));
	hl_hash((vbyte*)USTR("toString"));
	hl_hash((vbyte*)USTR("toUtf8"));
	hl_hash((vbyte*)USTR("__string"));
	hl_hash((vbyte*)USTR("__compare"));
	hl_hash((vbyte*)USTR("fromCharCode"));
	hl_hash((vbyte*)USTR("__alloc__"));
	hl_hash((vbyte*)USTR("call_toString"));
	hl_hash((vbyte*)USTR("fromUCS2"));
	hl_hash((vbyte*)USTR("fromUTF8"));
	hl_hash((vbyte*)USTR("__add__"));
	hl_hash((vbyte*)USTR("application"));
	hl_hash((vbyte*)USTR("context"));
	hl_hash((vbyte*)USTR("abstractApplication"));
	hl_hash((vbyte*)USTR("Run"));
	hl_hash((vbyte*)USTR("Setup"));
	hl_hash((vbyte*)USTR("Start"));
	hl_hash((vbyte*)USTR("Stop"));
	hl_hash((vbyte*)USTR("SetScreenJoystickPatchString"));
	hl_hash((vbyte*)USTR("SubscribeToEvent"));
	hl_hash((vbyte*)USTR("Random"));
	hl_hash((vbyte*)USTR("Clamp"));
	hl_hash((vbyte*)USTR("IClamp"));
	hl_hash((vbyte*)USTR("IsTouchEnabled"));
	hl_hash((vbyte*)USTR("allocI32"));
	hl_hash((vbyte*)USTR("allocUI16"));
	hl_hash((vbyte*)USTR("allocF32"));
	hl_hash((vbyte*)USTR("allocF64"));
	hl_hash((vbyte*)USTR("getDyn"));
	hl_hash((vbyte*)USTR("setDyn"));
	hl_hash((vbyte*)USTR("blit"));
	hl_hash((vbyte*)USTR("pushDyn"));
	hl_hash((vbyte*)USTR("popDyn"));
	hl_hash((vbyte*)USTR("shiftDyn"));
	hl_hash((vbyte*)USTR("unshiftDyn"));
	hl_hash((vbyte*)USTR("insertDyn"));
	hl_hash((vbyte*)USTR("containsDyn"));
	hl_hash((vbyte*)USTR("removeDyn"));
	hl_hash((vbyte*)USTR("sortDyn"));
	hl_hash((vbyte*)USTR("slice"));
	hl_hash((vbyte*)USTR("splice"));
	hl_hash((vbyte*)USTR("join"));
	hl_hash((vbyte*)USTR("reverse"));
	hl_hash((vbyte*)USTR("resize"));
	hl_hash((vbyte*)USTR("__cast"));
	hl_hash((vbyte*)USTR("isArrayObj"));
	hl_hash((vbyte*)USTR("size"));
	hl_hash((vbyte*)USTR("concat"));
	hl_hash((vbyte*)USTR("pop"));
	hl_hash((vbyte*)USTR("push"));
	hl_hash((vbyte*)USTR("shift"));
	hl_hash((vbyte*)USTR("sort"));
	hl_hash((vbyte*)USTR("unshift"));
	hl_hash((vbyte*)USTR("insert"));
	hl_hash((vbyte*)USTR("contains"));
	hl_hash((vbyte*)USTR("remove"));
	hl_hash((vbyte*)USTR("copy"));
	hl_hash((vbyte*)USTR("iterator"));
	hl_hash((vbyte*)USTR("keyValueIterator"));
	hl_hash((vbyte*)USTR("map"));
	hl_hash((vbyte*)USTR("filter"));
	hl_hash((vbyte*)USTR("__expand"));
	hl_hash((vbyte*)USTR("currentScene"));
	hl_hash((vbyte*)USTR("children"));
	hl_hash((vbyte*)USTR("children_map"));
	hl_hash((vbyte*)USTR("components"));
	hl_hash((vbyte*)USTR("dynamic_map"));
	hl_hash((vbyte*)USTR("abstractNode"));
	hl_hash((vbyte*)USTR("CleanChildData"));
	hl_hash((vbyte*)USTR("bindComponent"));
	hl_hash((vbyte*)USTR("unbindComponent"));
	hl_hash((vbyte*)USTR("unbindComponentString"));
	hl_hash((vbyte*)USTR("CreateHashLinkLogicComponent"));
	hl_hash((vbyte*)USTR("CreateChildFromAbstractNode"));
	hl_hash((vbyte*)USTR("CreateChild"));
	hl_hash((vbyte*)USTR("CreateComponent"));
	hl_hash((vbyte*)USTR("GetComponent"));
	hl_hash((vbyte*)USTR("GetLogicComponent"));
	hl_hash((vbyte*)USTR("AddComponent"));
	hl_hash((vbyte*)USTR("AddLogicComponent"));
	hl_hash((vbyte*)USTR("RemoveComponent"));
	hl_hash((vbyte*)USTR("RemoveLogicComponent"));
	hl_hash((vbyte*)USTR("get_position"));
	hl_hash((vbyte*)USTR("set_position"));
	hl_hash((vbyte*)USTR("get_worldPosition"));
	hl_hash((vbyte*)USTR("set_worldPosition"));
	hl_hash((vbyte*)USTR("get_direction"));
	hl_hash((vbyte*)USTR("set_direction"));
	hl_hash((vbyte*)USTR("get_scale"));
	hl_hash((vbyte*)USTR("set_scale"));
	hl_hash((vbyte*)USTR("get_rotation"));
	hl_hash((vbyte*)USTR("set_rotation"));
	hl_hash((vbyte*)USTR("Rotate"));
	hl_hash((vbyte*)USTR("RotateEuler"));
	hl_hash((vbyte*)USTR("Translate"));
	hl_hash((vbyte*)USTR("Yaw"));
	hl_hash((vbyte*)USTR("Pitch"));
	hl_hash((vbyte*)USTR("Roll"));
	hl_hash((vbyte*)USTR("GetChildrenWithComponent"));
	hl_hash((vbyte*)USTR("GetChild"));
	hl_hash((vbyte*)USTR("LookAt"));
	hl_hash((vbyte*)USTR("array"));
	hl_hash((vbyte*)USTR("h"));
	hl_hash((vbyte*)USTR(""));
	hl_hash((vbyte*)USTR("set"));
	hl_hash((vbyte*)USTR("get"));
	hl_hash((vbyte*)USTR("clear"));
	hl_hash((vbyte*)USTR("nodes"));
	hl_hash((vbyte*)USTR("abstractScene"));
	hl_hash((vbyte*)USTR("get_octree"));
	hl_hash((vbyte*)USTR("SaveXML"));
	hl_hash((vbyte*)USTR("LoadXML"));
	hl_hash((vbyte*)USTR("get_physicsWorld"));
	hl_hash((vbyte*)USTR("app"));
	hl_hash((vbyte*)USTR("main"));
	hl_hash((vbyte*)USTR("scene"));
	hl_hash((vbyte*)USTR("cameraNode"));
	hl_hash((vbyte*)USTR("rearCameraNode"));
	hl_hash((vbyte*)USTR("yaw"));
	hl_hash((vbyte*)USTR("pitch"));
	hl_hash((vbyte*)USTR("drawDebug"));
	hl_hash((vbyte*)USTR("NUM_OBJECTS"));
	hl_hash((vbyte*)USTR("CreateScene"));
	hl_hash((vbyte*)USTR("SetupViewport"));
	hl_hash((vbyte*)USTR("SubscribeToEvents"));
	hl_hash((vbyte*)USTR("MoveCamera"));
	hl_hash((vbyte*)USTR("HandleUpdate"));
	hl_hash((vbyte*)USTR("HandlePostRenderUpdate"));
	hl_hash((vbyte*)USTR("_new"));
	hl_hash((vbyte*)USTR("formatOutput"));
	hl_hash((vbyte*)USTR("trace"));
	hl_hash((vbyte*)USTR("className"));
	hl_hash((vbyte*)USTR("customParams"));
	hl_hash((vbyte*)USTR("fileName"));
	hl_hash((vbyte*)USTR("lineNumber"));
	hl_hash((vbyte*)USTR("methodName"));
	hl_hash((vbyte*)USTR("allowReinterpret"));
	hl_hash((vbyte*)USTR("get_length"));
	hl_hash((vbyte*)USTR("__get_field"));
	hl_hash((vbyte*)USTR("ZERO"));
	hl_hash((vbyte*)USTR("LEFT"));
	hl_hash((vbyte*)USTR("RIGHT"));
	hl_hash((vbyte*)USTR("UP"));
	hl_hash((vbyte*)USTR("DOWN"));
	hl_hash((vbyte*)USTR("FORWARD"));
	hl_hash((vbyte*)USTR("BACK"));
	hl_hash((vbyte*)USTR("ONE"));
	hl_hash((vbyte*)USTR("isTypeOf"));
	hl_hash((vbyte*)USTR("fromStructVector3"));
	hl_hash((vbyte*)USTR("fromFloat"));
	hl_hash((vbyte*)USTR("fromSingle"));
	hl_hash((vbyte*)USTR("toStructVector3"));
	hl_hash((vbyte*)USTR("isEqual"));
	hl_hash((vbyte*)USTR("isNotEqual"));
	hl_hash((vbyte*)USTR("add"));
	hl_hash((vbyte*)USTR("addTo"));
	hl_hash((vbyte*)USTR("sub"));
	hl_hash((vbyte*)USTR("subFrom"));
	hl_hash((vbyte*)USTR("mul"));
	hl_hash((vbyte*)USTR("mulWith"));
	hl_hash((vbyte*)USTR("mulVector2"));
	hl_hash((vbyte*)USTR("mulWithVector2"));
	hl_hash((vbyte*)USTR("div"));
	hl_hash((vbyte*)USTR("divWith"));
	hl_hash((vbyte*)USTR("divVector2"));
	hl_hash((vbyte*)USTR("divWithVector2"));
	hl_hash((vbyte*)USTR("neg"));
	hl_hash((vbyte*)USTR("preNeg"));
	hl_hash((vbyte*)USTR("postNeg"));
	hl_hash((vbyte*)USTR("preAdd"));
	hl_hash((vbyte*)USTR("postAdd"));
	hl_hash((vbyte*)USTR("Normalize"));
	hl_hash((vbyte*)USTR("Length"));
	hl_hash((vbyte*)USTR("LengthSquared"));
	hl_hash((vbyte*)USTR("DotProduct"));
	hl_hash((vbyte*)USTR("AbsDotProduct"));
	hl_hash((vbyte*)USTR("ProjectOntoAxis"));
	hl_hash((vbyte*)USTR("Angle"));
	hl_hash((vbyte*)USTR("Lerp"));
	hl_hash((vbyte*)USTR("Equals"));
	hl_hash((vbyte*)USTR("IsNaN"));
	hl_hash((vbyte*)USTR("IsInf"));
	hl_hash((vbyte*)USTR("Normalized"));
	hl_hash((vbyte*)USTR("NormalizedOrDefault"));
	hl_hash((vbyte*)USTR("ReNormalized"));
	hl_hash((vbyte*)USTR("get_x"));
	hl_hash((vbyte*)USTR("set_x"));
	hl_hash((vbyte*)USTR("get_y"));
	hl_hash((vbyte*)USTR("set_y"));
	hl_hash((vbyte*)USTR("get_z"));
	hl_hash((vbyte*)USTR("set_z"));
	hl_hash((vbyte*)USTR("x"));
	hl_hash((vbyte*)USTR("y"));
	hl_hash((vbyte*)USTR("z"));
	hl_hash((vbyte*)USTR("viewports"));
	hl_hash((vbyte*)USTR("SetViewport"));
	hl_hash((vbyte*)USTR("set_numViewports"));
	hl_hash((vbyte*)USTR("get_numViewports"));
	hl_hash((vbyte*)USTR("DrawDebugGeometry"));
	hl_hash((vbyte*)USTR("keyDown"));
	hl_hash((vbyte*)USTR("keyPress"));
	hl_hash((vbyte*)USTR("GetKeyDown"));
	hl_hash((vbyte*)USTR("GetKeyPress"));
	hl_hash((vbyte*)USTR("get_mouseMove"));
	hl_hash((vbyte*)USTR("get_mouseMoveX"));
	hl_hash((vbyte*)USTR("get_mouseMoveY"));
	hl_hash((vbyte*)USTR("get_numTouches"));
	hl_hash((vbyte*)USTR("touchID"));
	hl_hash((vbyte*)USTR("GetTouch"));
	hl_hash((vbyte*)USTR("SetMouseVisible"));
	hl_hash((vbyte*)USTR("SetMouseMode"));
	hl_hash((vbyte*)USTR("GetMouseButtonPress"));
	hl_hash((vbyte*)USTR("GetMouseButtonDown"));
	hl_hash((vbyte*)USTR("rnd"));
	hl_hash((vbyte*)USTR("toStringDepth"));
	hl_hash((vbyte*)USTR("random"));
	hl_hash((vbyte*)USTR("isOfType"));
	hl_hash((vbyte*)USTR("string"));
	hl_hash((vbyte*)USTR("sleepLock"));
	hl_hash((vbyte*)USTR("mutex"));
	hl_hash((vbyte*)USTR("pending"));
	hl_hash((vbyte*)USTR("threadCount"));
	hl_hash((vbyte*)USTR("processEvents"));
	hl_hash((vbyte*)USTR("run"));
	hl_hash((vbyte*)USTR("deque"));
	hl_hash((vbyte*)USTR("wait"));
	hl_hash((vbyte*)USTR("caught"));
	hl_hash((vbyte*)USTR("thrown"));
	hl_hash((vbyte*)USTR("__exceptionMessage"));
	hl_hash((vbyte*)USTR("__nativeStack"));
	hl_hash((vbyte*)USTR("__skipStack"));
	hl_hash((vbyte*)USTR("__nativeException"));
	hl_hash((vbyte*)USTR("__previousException"));
	hl_hash((vbyte*)USTR("unwrap"));
	hl_hash((vbyte*)USTR("get_message"));
	hl_hash((vbyte*)USTR("get_native"));
	hl_hash((vbyte*)USTR("PI"));
	hl_hash((vbyte*)USTR("NaN"));
	hl_hash((vbyte*)USTR("POSITIVE_INFINITY"));
	hl_hash((vbyte*)USTR("NEGATIVE_INFINITY"));
	hl_hash((vbyte*)USTR("hasEvents"));
	hl_hash((vbyte*)USTR("sortEvents"));
	hl_hash((vbyte*)USTR("tick"));
	hl_hash((vbyte*)USTR("f"));
	hl_hash((vbyte*)USTR("prev"));
	hl_hash((vbyte*)USTR("next"));
	hl_hash((vbyte*)USTR("isBlocking"));
	hl_hash((vbyte*)USTR("nextRun"));
	hl_hash((vbyte*)USTR("priority"));
	hl_hash((vbyte*)USTR("__ename__"));
	hl_hash((vbyte*)USTR("__emap__"));
	hl_hash((vbyte*)USTR("__constructs__"));
	hl_hash((vbyte*)USTR("__evalues__"));
	hl_hash((vbyte*)USTR("CreateFactory"));
	hl_hash((vbyte*)USTR("RegisterObject"));
	hl_hash((vbyte*)USTR("gl3Support"));
	hl_hash((vbyte*)USTR("GetAlphaFormat"));
	hl_hash((vbyte*)USTR("GetLuminanceFormat"));
	hl_hash((vbyte*)USTR("GetLuminanceAlphaFormat"));
	hl_hash((vbyte*)USTR("GetRGBFormat"));
	hl_hash((vbyte*)USTR("GetRGBAFormat"));
	hl_hash((vbyte*)USTR("GetRGBA16Format"));
	hl_hash((vbyte*)USTR("GetRGBAFloat16Format"));
	hl_hash((vbyte*)USTR("GetRGBAFloat32Format"));
	hl_hash((vbyte*)USTR("GetRG16Format"));
	hl_hash((vbyte*)USTR("GetRGFloat16Format"));
	hl_hash((vbyte*)USTR("GetRGFloat32Format"));
	hl_hash((vbyte*)USTR("GetFloat16Format"));
	hl_hash((vbyte*)USTR("GetFloat32Format"));
	hl_hash((vbyte*)USTR("GetLinearDepthFormat"));
	hl_hash((vbyte*)USTR("GetDepthStencilFormat"));
	hl_hash((vbyte*)USTR("GetReadableDepthFormat"));
	hl_hash((vbyte*)USTR("get_width"));
	hl_hash((vbyte*)USTR("get_height"));
	hl_hash((vbyte*)USTR("fromStructVector2"));
	hl_hash((vbyte*)USTR("toStructVector2"));
	hl_hash((vbyte*)USTR("field"));
	hl_hash((vbyte*)USTR("callMethod"));
	hl_hash((vbyte*)USTR("fields"));
	hl_hash((vbyte*)USTR("utf8Path"));
	hl_hash((vbyte*)USTR("println"));
	hl_hash((vbyte*)USTR("init"));
	hl_hash((vbyte*)USTR("initClass"));
	hl_hash((vbyte*)USTR("initEnum"));
	hl_hash((vbyte*)USTR("register"));
	hl_hash((vbyte*)USTR("resolveClass"));
	hl_hash((vbyte*)USTR("createInstance"));
	hl_hash((vbyte*)USTR("saveStack"));
	hl_hash((vbyte*)USTR("callStack"));
	hl_hash((vbyte*)USTR("rec"));
	hl_hash((vbyte*)USTR("doMerge"));
	hl_hash((vbyte*)USTR("rotate"));
	hl_hash((vbyte*)USTR("gcd"));
	hl_hash((vbyte*)USTR("upper"));
	hl_hash((vbyte*)USTR("lower"));
	hl_hash((vbyte*)USTR("swap"));
	hl_hash((vbyte*)USTR("alloc"));
	hl_hash((vbyte*)USTR("RegisterSetupClosure"));
	hl_hash((vbyte*)USTR("RegisterStartClosure"));
	hl_hash((vbyte*)USTR("RegisterStopClosure"));
	hl_hash((vbyte*)USTR("toAnimatedModel"));
	hl_hash((vbyte*)USTR("_node"));
	hl_hash((vbyte*)USTR("abstractComponent"));
	hl_hash((vbyte*)USTR("get_node"));
	hl_hash((vbyte*)USTR("set_node"));
	hl_hash((vbyte*)USTR("toZone"));
	hl_hash((vbyte*)USTR("toStaticModel"));
	hl_hash((vbyte*)USTR("toCamera"));
	hl_hash((vbyte*)USTR("toLight"));
	hl_hash((vbyte*)USTR("toBillboardset"));
	hl_hash((vbyte*)USTR("toDecalset"));
	hl_hash((vbyte*)USTR("toRigidBody"));
	hl_hash((vbyte*)USTR("toCollisionShape"));
	hl_hash((vbyte*)USTR("toSkybox"));
	hl_hash((vbyte*)USTR("toAnimationController"));
	hl_hash((vbyte*)USTR("toLogicComponent"));
	hl_hash((vbyte*)USTR("_abstract"));
	hl_hash((vbyte*)USTR("set_updateInvisible"));
	hl_hash((vbyte*)USTR("get_updateInvisible"));
	hl_hash((vbyte*)USTR("set_occluder"));
	hl_hash((vbyte*)USTR("get_occluder"));
	hl_hash((vbyte*)USTR("set_occludee"));
	hl_hash((vbyte*)USTR("get_occludee"));
	hl_hash((vbyte*)USTR("set_model"));
	hl_hash((vbyte*)USTR("get_model"));
	hl_hash((vbyte*)USTR("set_material"));
	hl_hash((vbyte*)USTR("get_material"));
	hl_hash((vbyte*)USTR("set_castShadows"));
	hl_hash((vbyte*)USTR("get_castShadows"));
	hl_hash((vbyte*)USTR("AddAnimationState"));
	hl_hash((vbyte*)USTR("GetAnimationState"));
	hl_hash((vbyte*)USTR("get_skeleton"));
	hl_hash((vbyte*)USTR("PlayExclusive"));
	hl_hash((vbyte*)USTR("SetSpeed"));
	hl_hash((vbyte*)USTR("GetSpeed"));
	hl_hash((vbyte*)USTR("AddTime"));
	hl_hash((vbyte*)USTR("AddWeight"));
	hl_hash((vbyte*)USTR("set_weight"));
	hl_hash((vbyte*)USTR("get_weight"));
	hl_hash((vbyte*)USTR("set_time"));
	hl_hash((vbyte*)USTR("get_time"));
	hl_hash((vbyte*)USTR("set_looped"));
	hl_hash((vbyte*)USTR("get_looped"));
	hl_hash((vbyte*)USTR("set_size"));
	hl_hash((vbyte*)USTR("get_size"));
	hl_hash((vbyte*)USTR("set_enabled"));
	hl_hash((vbyte*)USTR("get_enabled"));
	hl_hash((vbyte*)USTR("GetBillboard"));
	hl_hash((vbyte*)USTR("toBillboardSet"));
	hl_hash((vbyte*)USTR("Commit"));
	hl_hash((vbyte*)USTR("set_numBillboards"));
	hl_hash((vbyte*)USTR("get_numBillboards"));
	hl_hash((vbyte*)USTR("set_sorted"));
	hl_hash((vbyte*)USTR("get_sorted"));
	hl_hash((vbyte*)USTR("get_billboards"));
	hl_hash((vbyte*)USTR("set_animated"));
	hl_hash((vbyte*)USTR("get_animated"));
	hl_hash((vbyte*)USTR("set_min"));
	hl_hash((vbyte*)USTR("get_min"));
	hl_hash((vbyte*)USTR("set_max"));
	hl_hash((vbyte*)USTR("get_max"));
	hl_hash((vbyte*)USTR("GetScreenRay"));
	hl_hash((vbyte*)USTR("set_farClip"));
	hl_hash((vbyte*)USTR("get_farClip"));
	hl_hash((vbyte*)USTR("set_fov"));
	hl_hash((vbyte*)USTR("get_fov"));
	hl_hash((vbyte*)USTR("set_viewOverrideFlags"));
	hl_hash((vbyte*)USTR("get_viewOverrideFlags"));
	hl_hash((vbyte*)USTR("toComponent"));
	hl_hash((vbyte*)USTR("toAbstractRigidBody"));
	hl_hash((vbyte*)USTR("toConstraint"));
	hl_hash((vbyte*)USTR("toAbstractConstraint"));
	hl_hash((vbyte*)USTR("toAbstractLogicComponent"));
	hl_hash((vbyte*)USTR("abstractZone"));
	hl_hash((vbyte*)USTR("set_boundingBox"));
	hl_hash((vbyte*)USTR("get_boundingBox"));
	hl_hash((vbyte*)USTR("set_ambientColor"));
	hl_hash((vbyte*)USTR("get_ambientColor"));
	hl_hash((vbyte*)USTR("set_fogColor"));
	hl_hash((vbyte*)USTR("get_fogColor"));
	hl_hash((vbyte*)USTR("set_fogStart"));
	hl_hash((vbyte*)USTR("get_fogStart"));
	hl_hash((vbyte*)USTR("set_fogEnd"));
	hl_hash((vbyte*)USTR("get_fogEnd"));
	hl_hash((vbyte*)USTR("set_lightType"));
	hl_hash((vbyte*)USTR("get_lightType"));
	hl_hash((vbyte*)USTR("set_range"));
	hl_hash((vbyte*)USTR("get_range"));
	hl_hash((vbyte*)USTR("set_color"));
	hl_hash((vbyte*)USTR("get_color"));
	hl_hash((vbyte*)USTR("set_shadowBias"));
	hl_hash((vbyte*)USTR("get_shadowBias"));
	hl_hash((vbyte*)USTR("set_shadowCascade"));
	hl_hash((vbyte*)USTR("get_shadowCascade"));
	hl_hash((vbyte*)USTR("set_specularIntensity"));
	hl_hash((vbyte*)USTR("get_specularIntensity"));
	hl_hash((vbyte*)USTR("set_rampTexture"));
	hl_hash((vbyte*)USTR("get_rampTexture"));
	hl_hash((vbyte*)USTR("set_shadowDistance"));
	hl_hash((vbyte*)USTR("get_shadowDistance"));
	hl_hash((vbyte*)USTR("set_shadowFadeDistance"));
	hl_hash((vbyte*)USTR("get_shadowFadeDistance"));
	hl_hash((vbyte*)USTR("set_shadowResolution"));
	hl_hash((vbyte*)USTR("get_shadowResolution"));
	hl_hash((vbyte*)USTR("set_shadowNearFarRatio"));
	hl_hash((vbyte*)USTR("get_shadowNearFarRatio"));
	hl_hash((vbyte*)USTR("AddDecal"));
	hl_hash((vbyte*)USTR("set_mass"));
	hl_hash((vbyte*)USTR("get_mass"));
	hl_hash((vbyte*)USTR("set_friction"));
	hl_hash((vbyte*)USTR("get_friction"));
	hl_hash((vbyte*)USTR("set_rollingFriction"));
	hl_hash((vbyte*)USTR("get_rollingFriction"));
	hl_hash((vbyte*)USTR("set_linearVelocity"));
	hl_hash((vbyte*)USTR("get_linearVelocity"));
	hl_hash((vbyte*)USTR("set_trigger"));
	hl_hash((vbyte*)USTR("get_trigger"));
	hl_hash((vbyte*)USTR("set_linearDamping"));
	hl_hash((vbyte*)USTR("get_linearDamping"));
	hl_hash((vbyte*)USTR("set_angularDamping"));
	hl_hash((vbyte*)USTR("get_angularDamping"));
	hl_hash((vbyte*)USTR("set_linearRestThreshold"));
	hl_hash((vbyte*)USTR("get_linearRestThreshold"));
	hl_hash((vbyte*)USTR("set_angularRestThreshold"));
	hl_hash((vbyte*)USTR("get_angularRestThreshold"));
	hl_hash((vbyte*)USTR("set_collisionLayer"));
	hl_hash((vbyte*)USTR("get_collisionLayer"));
	hl_hash((vbyte*)USTR("set_collisionMask"));
	hl_hash((vbyte*)USTR("get_collisionMask"));
	hl_hash((vbyte*)USTR("ApplyImpulse"));
	hl_hash((vbyte*)USTR("set_angularFactor"));
	hl_hash((vbyte*)USTR("get_angularFactor"));
	hl_hash((vbyte*)USTR("set_collisionEventMode"));
	hl_hash((vbyte*)USTR("get_collisionEventMode"));
	hl_hash((vbyte*)USTR("SetBox"));
	hl_hash((vbyte*)USTR("SetSphere"));
	hl_hash((vbyte*)USTR("SetStaticPlane"));
	hl_hash((vbyte*)USTR("SetCylinder"));
	hl_hash((vbyte*)USTR("SetCapsule"));
	hl_hash((vbyte*)USTR("SetTriangleMesh"));
	hl_hash((vbyte*)USTR("set_constraintType"));
	hl_hash((vbyte*)USTR("get_constraintType"));
	hl_hash((vbyte*)USTR("set_disableCollision"));
	hl_hash((vbyte*)USTR("get_disableCollision"));
	hl_hash((vbyte*)USTR("set_otherBody"));
	hl_hash((vbyte*)USTR("get_otherBody"));
	hl_hash((vbyte*)USTR("set_axis"));
	hl_hash((vbyte*)USTR("set_otherAxis"));
	hl_hash((vbyte*)USTR("set_highLimit"));
	hl_hash((vbyte*)USTR("get_highLimit"));
	hl_hash((vbyte*)USTR("set_lowLimit"));
	hl_hash((vbyte*)USTR("get_lowLimit"));
	hl_hash((vbyte*)USTR("_abstractSkybox"));
	hl_hash((vbyte*)USTR("abstractLogicComponent"));
	hl_hash((vbyte*)USTR("GetClassName"));
	hl_hash((vbyte*)USTR("GetFields"));
	hl_hash((vbyte*)USTR("GetField"));
	hl_hash((vbyte*)USTR("GetFieldType"));
	hl_hash((vbyte*)USTR("set_updateEventMask"));
	hl_hash((vbyte*)USTR("get_updateEventMask"));
	hl_hash((vbyte*)USTR("DelayedStart"));
	hl_hash((vbyte*)USTR("Update"));
	hl_hash((vbyte*)USTR("PostUpdate"));
	hl_hash((vbyte*)USTR("FixedUpdate"));
	hl_hash((vbyte*)USTR("FixedPostUpdate"));
	hl_hash((vbyte*)USTR("_OnNodeSet"));
	hl_hash((vbyte*)USTR("OnNodeSet"));
	hl_hash((vbyte*)USTR("_OnSceneSet"));
	hl_hash((vbyte*)USTR("OnSceneSet"));
	hl_hash((vbyte*)USTR("_OnMarkedDirty"));
	hl_hash((vbyte*)USTR("OnMarkedDirty"));
	hl_hash((vbyte*)USTR("_OnNodeSetEnabled"));
	hl_hash((vbyte*)USTR("OnNodeSetEnabled"));
	hl_hash((vbyte*)USTR("CallMethod"));
	hl_hash((vbyte*)USTR("toDecalSet"));
	hl_hash((vbyte*)USTR("fromBytes"));
	hl_hash((vbyte*)USTR("toBytes"));
	hl_hash((vbyte*)USTR("getKeyDown"));
	hl_hash((vbyte*)USTR("getKeyPress"));
	hl_hash((vbyte*)USTR("isequal"));
	hl_hash((vbyte*)USTR("isnotequal"));
	hl_hash((vbyte*)USTR("preneg"));
	hl_hash((vbyte*)USTR("postneg"));
	hl_hash((vbyte*)USTR("preadd"));
	hl_hash((vbyte*)USTR("postadd"));
	hl_hash((vbyte*)USTR("USE_NO_EVENT"));
	hl_hash((vbyte*)USTR("USE_UPDATE"));
	hl_hash((vbyte*)USTR("USE_POSTUPDATE"));
	hl_hash((vbyte*)USTR("USE_FIXEDUPDATE"));
	hl_hash((vbyte*)USTR("USE_FIXEDPOSTUPDATE"));
	hl_hash((vbyte*)USTR("OpMathOr"));
	hl_hash((vbyte*)USTR("fromAbstractComponent"));
	hl_hash((vbyte*)USTR("SetTechnique"));
	hl_hash((vbyte*)USTR("SetTexture"));
	hl_hash((vbyte*)USTR("set_depthBias"));
	hl_hash((vbyte*)USTR("get_depthBias"));
	hl_hash((vbyte*)USTR("toNode"));
	hl_hash((vbyte*)USTR("fromComponent"));
	hl_hash((vbyte*)USTR("fromNode"));
	hl_hash((vbyte*)USTR("RaycastSingle"));
	hl_hash((vbyte*)USTR("get_normal"));
	hl_hash((vbyte*)USTR("get_distance"));
	hl_hash((vbyte*)USTR("get_hitFraction"));
	hl_hash((vbyte*)USTR("get_body"));
	hl_hash((vbyte*)USTR("IDENTITY"));
	hl_hash((vbyte*)USTR("SetAngles"));
	hl_hash((vbyte*)USTR("get_drawable"));
	hl_hash((vbyte*)USTR("getValue"));
	hl_hash((vbyte*)USTR("Clone"));
	hl_hash((vbyte*)USTR("Append"));
	hl_hash((vbyte*)USTR("SetShaderParameter"));
	hl_hash((vbyte*)USTR("GetShaderParameter"));
	hl_hash((vbyte*)USTR("SetEnabled"));
	hl_hash((vbyte*)USTR("ToggleEnabled"));
	hl_hash((vbyte*)USTR("setViewPort"));
	hl_hash((vbyte*)USTR("getViewPort"));
	hl_hash((vbyte*)USTR("toScene"));
	hl_hash((vbyte*)USTR("GetBone"));
	hl_hash((vbyte*)USTR("fromString"));
	hl_hash((vbyte*)USTR("GetString"));
	hl_hash((vbyte*)USTR("toIntVector2"));
	hl_hash((vbyte*)USTR("fromIntVector2"));
	hl_hash((vbyte*)USTR("toQuaternion"));
	hl_hash((vbyte*)USTR("fromQuaternion"));
	hl_hash((vbyte*)USTR("mulTVector3"));
	hl_hash((vbyte*)USTR("mulVector3"));
	hl_hash((vbyte*)USTR("mulTQuaternion"));
	hl_hash((vbyte*)USTR("toRay"));
	hl_hash((vbyte*)USTR("fromRay"));
	hl_hash((vbyte*)USTR("toStringHash"));
	hl_hash((vbyte*)USTR("fromStringHash"));
	hl_hash((vbyte*)USTR("get_int"));
	hl_hash((vbyte*)USTR("get_float"));
	hl_hash((vbyte*)USTR("get_single"));
	hl_hash((vbyte*)USTR("get_variant"));
	hl_hash((vbyte*)USTR("get_vector2"));
	hl_hash((vbyte*)USTR("get_tvector2"));
	hl_hash((vbyte*)USTR("get_tintvector2"));
	hl_hash((vbyte*)USTR("get_object"));
	hl_hash((vbyte*)USTR("get_component"));
	hl_hash((vbyte*)USTR("GetRigidBody"));
	hl_hash((vbyte*)USTR("GetObject"));
	hl_hash((vbyte*)USTR("ToVariant"));
	hl_hash((vbyte*)USTR("GetSingle"));
	hl_hash((vbyte*)USTR("GetFloat"));
	hl_hash((vbyte*)USTR("GetInt"));
	hl_hash((vbyte*)USTR("GetVector2"));
	hl_hash((vbyte*)USTR("GetTVector2"));
	hl_hash((vbyte*)USTR("GetTIntVector2"));
	hl_hash((vbyte*)USTR("GetTIntVectorBuffer"));
	hl_hash((vbyte*)USTR("fromTVectorBuffer"));
	hl_hash((vbyte*)USTR("fromObject"));
	hl_hash((vbyte*)USTR("FromVariant"));
	hl_hash((vbyte*)USTR("FromTIntVector2"));
	hl_hash((vbyte*)USTR("FromTVector2"));
	hl_hash((vbyte*)USTR("FromVector2"));
	hl_hash((vbyte*)USTR("FromInt"));
	hl_hash((vbyte*)USTR("FromFloat"));
	hl_hash((vbyte*)USTR("toVector2"));
	hl_hash((vbyte*)USTR("fromVector2"));
	hl_hash((vbyte*)USTR("toVector3"));
	hl_hash((vbyte*)USTR("fromVector3"));
	hl_hash((vbyte*)USTR("toVectorBuffer"));
	hl_hash((vbyte*)USTR("fromVectorBuffer"));
	hl_hash((vbyte*)USTR("get_eof"));
	hl_hash((vbyte*)USTR("ReadBool"));
	hl_hash((vbyte*)USTR("ReadInt"));
	hl_hash((vbyte*)USTR("ReadFloat"));
	hl_hash((vbyte*)USTR("ReadVector2"));
	hl_hash((vbyte*)USTR("ReadVector3"));
	hl_hash((vbyte*)USTR("get_name"));
	hl_hash((vbyte*)USTR("GetName"));
	hl_hash((vbyte*)USTR("get_touchID"));
	hl_hash((vbyte*)USTR("get_lastPosition"));
	hl_hash((vbyte*)USTR("get_delta"));
	hl_hash((vbyte*)USTR("get_pressure"));
	hl_hash((vbyte*)USTR("fromTIntVector2"));
	hl_hash((vbyte*)USTR("fromTVector2"));
	hl_hash((vbyte*)USTR("fromInt"));
	hl_hash((vbyte*)USTR("Clear"));
	hl_hash((vbyte*)USTR("setValue"));
	hl_hash((vbyte*)USTR("getKeyValue"));
	hl_hash((vbyte*)USTR("setKeyValue"));
	hl_hash((vbyte*)USTR("set_renderPath"));
	hl_hash((vbyte*)USTR("get_renderPath"));
	hl_hash((vbyte*)USTR("t"));
	hl_hash((vbyte*)USTR("b"));
	hl_hash((vbyte*)USTR("pos"));
	hl_hash((vbyte*)USTR("addChar"));
	hl_hash((vbyte*)USTR("msg"));
	hl_hash((vbyte*)USTR("value"));
	hl_hash((vbyte*)USTR("current"));
	hl_hash((vbyte*)USTR("hasNext"));
	hl_hash((vbyte*)USTR("arr"));
	hl_hash((vbyte*)USTR("a"));
	hl_hash((vbyte*)USTR("key"));
}
