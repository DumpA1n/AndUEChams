#include "ClothingSystemRuntimeInterface.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UClothingSimulationInteractor
void UClothingSimulationInteractor::SetAnimDriveSpringStiffness(float InStiffness)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClothingSimulationInteractor", "SetAnimDriveSpringStiffness");
    struct
    {
        float InStiffness;
    } Parms{};
    Parms.InStiffness = (float)InStiffness;
    this->ProcessEvent(Func, &Parms);
}

void UClothingSimulationInteractor::PhysicsAssetUpdated()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClothingSimulationInteractor", "PhysicsAssetUpdated");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

float UClothingSimulationInteractor::GetSimulationTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClothingSimulationInteractor", "GetSimulationTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UClothingSimulationInteractor::GetNumSubsteps()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClothingSimulationInteractor", "GetNumSubsteps");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UClothingSimulationInteractor::GetNumKinematicParticles()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClothingSimulationInteractor", "GetNumKinematicParticles");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UClothingSimulationInteractor::GetNumIterations()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClothingSimulationInteractor", "GetNumIterations");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UClothingSimulationInteractor::GetNumDynamicParticles()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClothingSimulationInteractor", "GetNumDynamicParticles");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UClothingSimulationInteractor::GetNumCloths()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClothingSimulationInteractor", "GetNumCloths");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UClothingSimulationInteractor::EnableGravityOverride(const struct FVector& InVector)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClothingSimulationInteractor", "EnableGravityOverride");
    struct
    {
        struct FVector InVector;
    } Parms{};
    Parms.InVector = (struct FVector)InVector;
    this->ProcessEvent(Func, &Parms);
}

void UClothingSimulationInteractor::DisableGravityOverride()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClothingSimulationInteractor", "DisableGravityOverride");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UClothingSimulationInteractor::ClothConfigUpdated()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClothingSimulationInteractor", "ClothConfigUpdated");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
