#include "ClothingSystemRuntimeInterface.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UClothingSimulationInteractor
void UClothingSimulationInteractor::PhysicsAssetUpdated()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClothingSimulationInteractor", "PhysicsAssetUpdated");
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
