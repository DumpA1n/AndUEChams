#include "MFPropsDestruction.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UGlassBoxComponent
void UGlassBoxComponent::TestHitGlass()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GlassBoxComponent", "TestHitGlass");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGlassBoxComponent::OnHitGlassOffline(const struct FHitResult& Hit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GlassBoxComponent", "OnHitGlassOffline");
    struct
    {
        struct FHitResult Hit;
    } Parms{};
    Parms.Hit = (struct FHitResult)Hit;
    this->ProcessEvent(Func, &Parms);
}

void UGlassBoxComponent::OnHitGlass()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GlassBoxComponent", "OnHitGlass");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UMFGlassCutterComponent
void UMFGlassCutterComponent::SetHitWeaponType(int32_t WeaponType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGlassCutterComponent", "SetHitWeaponType");
    struct
    {
        int32_t WeaponType;
    } Parms{};
    Parms.WeaponType = (int32_t)WeaponType;
    this->ProcessEvent(Func, &Parms);
}

void UMFGlassCutterComponent::ResetState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGlassCutterComponent", "ResetState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFGlassCutterComponent::ReConstructPhysic()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGlassCutterComponent", "ReConstructPhysic");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFGlassCutterComponent::OnReplicate_MaskIDCache()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGlassCutterComponent", "OnReplicate_MaskIDCache");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFGlassCutterComponent::OnRep_GlassHitEffectInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGlassCutterComponent", "OnRep_GlassHitEffectInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFGlassCutterComponent::OnRep_bResetState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGlassCutterComponent", "OnRep_bResetState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFGlassCutterComponent::ChangeShapeCollision(int32_t ColorID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGlassCutterComponent", "ChangeShapeCollision");
    struct
    {
        int32_t ColorID;
    } Parms{};
    Parms.ColorID = (int32_t)ColorID;
    this->ProcessEvent(Func, &Parms);
}

void UMFGlassCutterComponent::ChangeBehaviour(int32_t ColorID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGlassCutterComponent", "ChangeBehaviour");
    struct
    {
        int32_t ColorID;
    } Parms{};
    Parms.ColorID = (int32_t)ColorID;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
