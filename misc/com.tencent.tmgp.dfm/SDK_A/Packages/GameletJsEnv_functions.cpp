#include "GameletJsEnv.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UGameletDynamicDelegateProxy::* ----
void UGameletDynamicDelegateProxy::Fire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameletDynamicDelegateProxy", "Fire");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
