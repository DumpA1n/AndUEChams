#include "GPDeviceEffect.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UGPDeviceEffectObject
void UGPDeviceEffectObject::OnSOLCharacterInEscapeState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeviceEffectObject", "OnSOLCharacterInEscapeState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPDeviceEffectObject::OnClientLocalPlayerSendOutMandel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeviceEffectObject", "OnClientLocalPlayerSendOutMandel");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
