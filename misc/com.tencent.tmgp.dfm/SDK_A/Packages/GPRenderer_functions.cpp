#include "GPRenderer.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UParticleRenderComponent2D::* ----
void UParticleRenderComponent2D::DrawMaterialParticlesToRenderTarget(const struct TArray<struct UParticleSystemComponent*>& InParticleSystemComponents, struct UTextureRenderTarget2D* InRenderTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ParticleRenderComponent2D", "DrawMaterialParticlesToRenderTarget");
    struct
    {
        struct TArray<struct UParticleSystemComponent*> InParticleSystemComponents;
        struct UTextureRenderTarget2D* InRenderTarget;
    } Parms{};
    Parms.InParticleSystemComponents = (struct TArray<struct UParticleSystemComponent*>)InParticleSystemComponents;
    Parms.InRenderTarget = (struct UTextureRenderTarget2D*)InRenderTarget;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
