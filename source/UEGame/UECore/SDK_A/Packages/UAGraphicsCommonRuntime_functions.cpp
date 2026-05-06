#include "UAGraphicsCommonRuntime.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UMFCSettingsComponent
void UMFCSettingsComponent::UpdateMFCParamValues(bool bUseResetValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFCSettingsComponent", "UpdateMFCParamValues");
    struct
    {
        bool bUseResetValue;
    } Parms{};
    Parms.bUseResetValue = (bool)bUseResetValue;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
