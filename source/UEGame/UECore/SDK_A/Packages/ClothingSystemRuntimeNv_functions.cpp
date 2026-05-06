#include "ClothingSystemRuntimeNv.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UClothingSimulationInteractorNv
void UClothingSimulationInteractorNv::SetAnimDriveDamperStiffness(float InStiffness)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClothingSimulationInteractorNv", "SetAnimDriveDamperStiffness");
    struct
    {
        float InStiffness;
    } Parms{};
    Parms.InStiffness = (float)InStiffness;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
