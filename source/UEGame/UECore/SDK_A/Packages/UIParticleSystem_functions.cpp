#include "UIParticleSystem.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UParticleSystemWidget
void UParticleSystemWidget::SetReactivate(bool bActivateAndReset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ParticleSystemWidget", "SetReactivate");
    struct
    {
        bool bActivateAndReset;
    } Parms{};
    Parms.bActivateAndReset = (bool)bActivateAndReset;
    this->ProcessEvent(Func, &Parms);
}

struct UParticleSystemComponent* UParticleSystemWidget::GetParticleComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ParticleSystemWidget", "GetParticleComponent");
    struct
    {
        struct UParticleSystemComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UParticleSystemWidget::ActivateParticles(bool bActive, bool bReset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ParticleSystemWidget", "ActivateParticles");
    struct
    {
        bool bActive;
        bool bReset;
    } Parms{};
    Parms.bActive = (bool)bActive;
    Parms.bReset = (bool)bReset;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
