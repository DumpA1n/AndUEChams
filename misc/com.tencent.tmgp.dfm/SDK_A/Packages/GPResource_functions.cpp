#include "GPResource.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UFXComponentManager::* ----
struct UFXComponentManager* UFXComponentManager::Get(struct UWorld* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FXComponentManager", "Get");
    struct
    {
        struct UWorld* WorldContext;
        struct UFXComponentManager* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UWorld*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UFXResourceContainerComponent::* ----
uint8_t UFXResourceContainerComponent::SetResourceFX(const struct FName& ResourceFXId, uint8_t bInAutoActive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FXResourceContainerComponent", "SetResourceFX");
    struct
    {
        struct FName ResourceFXId;
        uint8_t bInAutoActive;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ResourceFXId = (struct FName)ResourceFXId;
    Parms.bInAutoActive = (uint8_t)bInAutoActive;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UFXResourceContainerComponent::SetFXStencilOutside(int32_t Value, ERendererStencilMask StencilMask)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FXResourceContainerComponent", "SetFXStencilOutside");
    struct
    {
        int32_t Value;
        enum ERendererStencilMask StencilMask;
    } Parms{};
    Parms.Value = (int32_t)Value;
    Parms.StencilMask = (enum ERendererStencilMask)StencilMask;
    this->ProcessEvent(Func, &Parms);
}

void UFXResourceContainerComponent::ProcessTranslucencySortInRecover()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FXResourceContainerComponent", "ProcessTranslucencySortInRecover");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UFXResourceContainerComponent::ProcessTranslucencySortInPlay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FXResourceContainerComponent", "ProcessTranslucencySortInPlay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UFXResourceContainerComponent::PlayResourceSoundOnly(const struct FName& ResourceFXId, uint8_t bInAutoActive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FXResourceContainerComponent", "PlayResourceSoundOnly");
    struct
    {
        struct FName ResourceFXId;
        uint8_t bInAutoActive;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ResourceFXId = (struct FName)ResourceFXId;
    Parms.bInAutoActive = (uint8_t)bInAutoActive;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UFXResourceContainerComponent* UFXResourceContainerComponent::PlayEffect(struct UObject* WorldContext, const struct FName& EffectId, const struct FTransform& PlayTransform, struct AActor* CreatorOwner, uint8_t bUseObjectPool, struct USceneComponent* Socket, struct FName InSocketName, uint8_t bIsHighFrequency, EFXResourceCompPriority Priority, uint8_t bEnableInstanceLimit, struct ACHARACTER* InCharacterToBlame, float RTPCValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FXResourceContainerComponent", "PlayEffect");
    struct
    {
        struct UObject* WorldContext;
        struct FName EffectId;
        struct FTransform PlayTransform;
        struct AActor* CreatorOwner;
        uint8_t bUseObjectPool;
        struct USceneComponent* Socket;
        struct FName InSocketName;
        uint8_t bIsHighFrequency;
        enum EFXResourceCompPriority Priority;
        uint8_t bEnableInstanceLimit;
        struct ACHARACTER* InCharacterToBlame;
        float RTPCValue;
        struct UFXResourceContainerComponent* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.EffectId = (struct FName)EffectId;
    Parms.PlayTransform = (struct FTransform)PlayTransform;
    Parms.CreatorOwner = (struct AActor*)CreatorOwner;
    Parms.bUseObjectPool = (uint8_t)bUseObjectPool;
    Parms.Socket = (struct USceneComponent*)Socket;
    Parms.InSocketName = (struct FName)InSocketName;
    Parms.bIsHighFrequency = (uint8_t)bIsHighFrequency;
    Parms.Priority = (enum EFXResourceCompPriority)Priority;
    Parms.bEnableInstanceLimit = (uint8_t)bEnableInstanceLimit;
    Parms.InCharacterToBlame = (struct ACHARACTER*)InCharacterToBlame;
    Parms.RTPCValue = (float)RTPCValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UFXResourceContainerComponent::OnRecycleReset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FXResourceContainerComponent", "OnRecycleReset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UFXResourceContainerComponent::OnPSLoaded(const struct FSoftObjectPath& ResourcePaths)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FXResourceContainerComponent", "OnPSLoaded");
    struct
    {
        struct FSoftObjectPath ResourcePaths;
    } Parms{};
    Parms.ResourcePaths = (struct FSoftObjectPath)ResourcePaths;
    this->ProcessEvent(Func, &Parms);
}

void UFXResourceContainerComponent::KillTargetEmitter(struct FName EmiterName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FXResourceContainerComponent", "KillTargetEmitter");
    struct
    {
        struct FName EmiterName;
    } Parms{};
    Parms.EmiterName = (struct FName)EmiterName;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UFXResourceContainerComponent::IsHandleIndexValid(int32_t CheckHandleIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FXResourceContainerComponent", "IsHandleIndexValid");
    struct
    {
        int32_t CheckHandleIndex;
        uint8_t ReturnValue;
    } Parms{};
    Parms.CheckHandleIndex = (int32_t)CheckHandleIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UFXResourceContainerComponent::GetHandleIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FXResourceContainerComponent", "GetHandleIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UFXResourceContainerComponent::DeactivatePSC(uint8_t bDoFadeOutCheck, int32_t TargetEffectHandle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FXResourceContainerComponent", "DeactivatePSC");
    struct
    {
        uint8_t bDoFadeOutCheck;
        int32_t TargetEffectHandle;
    } Parms{};
    Parms.bDoFadeOutCheck = (uint8_t)bDoFadeOutCheck;
    Parms.TargetEffectHandle = (int32_t)TargetEffectHandle;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UFXResourceContainerComponent::DeactivateEffect(struct UFXResourceContainerComponent* TargetEffect, int32_t TargetEffectHandle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FXResourceContainerComponent", "DeactivateEffect");
    struct
    {
        struct UFXResourceContainerComponent* TargetEffect;
        int32_t TargetEffectHandle;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TargetEffect = (struct UFXResourceContainerComponent*)TargetEffect;
    Parms.TargetEffectHandle = (int32_t)TargetEffectHandle;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UFXResourceContainerComponent::ClearOutsideSetFXStencil()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FXResourceContainerComponent", "ClearOutsideSetFXStencil");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UFXResourceContainerComponent::BP_Deactivate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FXResourceContainerComponent", "BP_Deactivate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UFXResourceContainerComponent::BP_Activate(uint8_t bReset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FXResourceContainerComponent", "BP_Activate");
    struct
    {
        uint8_t bReset;
    } Parms{};
    Parms.bReset = (uint8_t)bReset;
    this->ProcessEvent(Func, &Parms);
}

void UFXResourceContainerComponent::ActivatePSC(uint8_t bFlagAsJustAttached, uint8_t bEnableDelayPlay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FXResourceContainerComponent", "ActivatePSC");
    struct
    {
        uint8_t bFlagAsJustAttached;
        uint8_t bEnableDelayPlay;
    } Parms{};
    Parms.bFlagAsJustAttached = (uint8_t)bFlagAsJustAttached;
    Parms.bEnableDelayPlay = (uint8_t)bEnableDelayPlay;
    this->ProcessEvent(Func, &Parms);
}

struct UFXResourceContainerComponent* UFXResourceContainerComponent::AcquireFromPool(struct UObject* WorldContext, struct FName FXName, uint8_t inFxQualityOverride)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FXResourceContainerComponent", "AcquireFromPool");
    struct
    {
        struct UObject* WorldContext;
        struct FName FXName;
        uint8_t inFxQualityOverride;
        struct UFXResourceContainerComponent* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.FXName = (struct FName)FXName;
    Parms.inFxQualityOverride = (uint8_t)inFxQualityOverride;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
