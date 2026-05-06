#include "NiagaraAnimNotifies.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UAnimNotify_PlayNiagaraEffect
struct UFXSystemComponent* UAnimNotify_PlayNiagaraEffect::GetSpawnedEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AnimNotify_PlayNiagaraEffect", "GetSpawnedEffect");
    struct
    {
        struct UFXSystemComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
