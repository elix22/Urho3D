#include "../../Engine/DebugHud.h"
#include "../../DotNet/Defines.h"

using namespace Urho3D;

extern "C"
{

URHO3D_API void DebugHud_ToggleAll(DebugHud* nativeInstance)
{
    nativeInstance->ToggleAll();
}

URHO3D_API void DebugHud_SetDefaultStyle(DebugHud* nativeInstance, XMLFile* style)
{
    nativeInstance->SetDefaultStyle(style);
}

}
