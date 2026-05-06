#include "BP_GameInstance.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UBP_GameInstance_C
void UBP_GameInstance_C::OnAndroidBackPressed__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GameInstance_C", "OnAndroidBackPressed__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
