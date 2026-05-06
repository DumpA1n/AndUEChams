#include "Dawn20RuntimeComponents.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UDawn20InteriorVolumePlaneGroupComponent
void UDawn20InteriorVolumePlaneGroupComponent::SetWeight(float InWeight)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Dawn20InteriorVolumePlaneGroupComponent", "SetWeight");
    struct
    {
        float InWeight;
    } Parms{};
    Parms.InWeight = (float)InWeight;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
