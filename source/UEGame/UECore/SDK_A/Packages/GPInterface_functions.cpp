#include "GPInterface.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// IDFMPlayerCharacterInterface
struct UPhysicsCapsuleComponent* IDFMPlayerCharacterInterface::GetCharacterPhysicsCapsuleComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerCharacterInterface", "GetCharacterPhysicsCapsuleComponent");
    struct
    {
        struct UPhysicsCapsuleComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// IGPCharacterIGetVehiclenterface
struct APawn* IGPCharacterIGetVehiclenterface::GetCharacterVehicle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPCharacterIGetVehiclenterface", "GetCharacterVehicle");
    struct
    {
        struct APawn* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// IGPPlayerCameraManagerInterface
struct FConvexVolumeData IGPPlayerCameraManagerInterface::GetFrustumVolume()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPPlayerCameraManagerInterface", "GetFrustumVolume");
    struct
    {
        struct FConvexVolumeData ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
