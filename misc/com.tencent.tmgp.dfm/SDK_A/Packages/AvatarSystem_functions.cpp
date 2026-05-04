#include "AvatarSystem.hpp"
#include "Engine.hpp"
#include "GPAudioRuntime.hpp"
#include "GPGameplay.hpp"
#include "GPResource.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UAvatarSystem::* ----
void UAvatarSystem::TransientPlayCharacterAvatarLocationAudio(struct FName AudioId, struct AGPCharacter* AvatarCharacter, struct FVector Location, struct FRotator Rotator, struct UObject* WorldContext, uint8_t bActiveStopRequired, EGameAkType InGameAkType, uint8_t bPreCutted, float AttenuationScalar, uint8_t bCalcSimplifiedTranDiff, struct FVector LocationOffset, uint8_t bCalcCompletedTranDiff, float RTPCValue, EGPAudioWaterPreset WaterPresetState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AvatarSystem", "TransientPlayCharacterAvatarLocationAudio");
    struct
    {
        struct FName AudioId;
        struct AGPCharacter* AvatarCharacter;
        struct FVector Location;
        struct FRotator Rotator;
        struct UObject* WorldContext;
        uint8_t bActiveStopRequired;
        enum EGameAkType InGameAkType;
        uint8_t bPreCutted;
        float AttenuationScalar;
        uint8_t bCalcSimplifiedTranDiff;
        struct FVector LocationOffset;
        uint8_t bCalcCompletedTranDiff;
        float RTPCValue;
        enum EGPAudioWaterPreset WaterPresetState;
    } Parms{};
    Parms.AudioId = (struct FName)AudioId;
    Parms.AvatarCharacter = (struct AGPCharacter*)AvatarCharacter;
    Parms.Location = (struct FVector)Location;
    Parms.Rotator = (struct FRotator)Rotator;
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.bActiveStopRequired = (uint8_t)bActiveStopRequired;
    Parms.InGameAkType = (enum EGameAkType)InGameAkType;
    Parms.bPreCutted = (uint8_t)bPreCutted;
    Parms.AttenuationScalar = (float)AttenuationScalar;
    Parms.bCalcSimplifiedTranDiff = (uint8_t)bCalcSimplifiedTranDiff;
    Parms.LocationOffset = (struct FVector)LocationOffset;
    Parms.bCalcCompletedTranDiff = (uint8_t)bCalcCompletedTranDiff;
    Parms.RTPCValue = (float)RTPCValue;
    Parms.WaterPresetState = (enum EGPAudioWaterPreset)WaterPresetState;
    this->ProcessEvent(Func, &Parms);
}

void UAvatarSystem::TransientPlayCharacterAvatarActorAudio(struct FName AudioId, struct AGPCharacter* AvatarCharacter, struct AActor* TargetPlayer, float Duration, uint8_t bNeedMakeNoise, uint8_t bPreCutted, float AttenuationScalar, uint8_t bNeedGetPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AvatarSystem", "TransientPlayCharacterAvatarActorAudio");
    struct
    {
        struct FName AudioId;
        struct AGPCharacter* AvatarCharacter;
        struct AActor* TargetPlayer;
        float Duration;
        uint8_t bNeedMakeNoise;
        uint8_t bPreCutted;
        float AttenuationScalar;
        uint8_t bNeedGetPosition;
    } Parms{};
    Parms.AudioId = (struct FName)AudioId;
    Parms.AvatarCharacter = (struct AGPCharacter*)AvatarCharacter;
    Parms.TargetPlayer = (struct AActor*)TargetPlayer;
    Parms.Duration = (float)Duration;
    Parms.bNeedMakeNoise = (uint8_t)bNeedMakeNoise;
    Parms.bPreCutted = (uint8_t)bPreCutted;
    Parms.AttenuationScalar = (float)AttenuationScalar;
    Parms.bNeedGetPosition = (uint8_t)bNeedGetPosition;
    this->ProcessEvent(Func, &Parms);
}

void UAvatarSystem::TransientPlayCharacterAvatar2DAudio(struct FName AudioId, struct AGPCharacter* AvatarCharacter, uint8_t bNeedGetPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AvatarSystem", "TransientPlayCharacterAvatar2DAudio");
    struct
    {
        struct FName AudioId;
        struct AGPCharacter* AvatarCharacter;
        uint8_t bNeedGetPosition;
    } Parms{};
    Parms.AudioId = (struct FName)AudioId;
    Parms.AvatarCharacter = (struct AGPCharacter*)AvatarCharacter;
    Parms.bNeedGetPosition = (uint8_t)bNeedGetPosition;
    this->ProcessEvent(Func, &Parms);
}

void UAvatarSystem::StopAvatarFX(const struct FAvatarFXOperateHandle& Handle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AvatarSystem", "StopAvatarFX");
    struct
    {
        struct FAvatarFXOperateHandle Handle;
    } Parms{};
    Parms.Handle = (struct FAvatarFXOperateHandle)Handle;
    this->ProcessEvent(Func, &Parms);
}

void UAvatarSystem::StopAvatarExtraPartMontage(const struct FAvatarMontageOperateHandle& Handle, float BlendOutTime, struct FName StopSection)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AvatarSystem", "StopAvatarExtraPartMontage");
    struct
    {
        struct FAvatarMontageOperateHandle Handle;
        float BlendOutTime;
        struct FName StopSection;
    } Parms{};
    Parms.Handle = (struct FAvatarMontageOperateHandle)Handle;
    Parms.BlendOutTime = (float)BlendOutTime;
    Parms.StopSection = (struct FName)StopSection;
    this->ProcessEvent(Func, &Parms);
}

void UAvatarSystem::StopAvatarAudio(const struct FAvatarAudioOperateHandle& Handle, int32_t TransitionMS)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AvatarSystem", "StopAvatarAudio");
    struct
    {
        struct FAvatarAudioOperateHandle Handle;
        int32_t TransitionMS;
    } Parms{};
    Parms.Handle = (struct FAvatarAudioOperateHandle)Handle;
    Parms.TransitionMS = (int32_t)TransitionMS;
    this->ProcessEvent(Func, &Parms);
}

void UAvatarSystem::RemoveAvatarScreenEffect(const struct FAvatarScreenEffectOperateHandle& Handle, struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AvatarSystem", "RemoveAvatarScreenEffect");
    struct
    {
        struct FAvatarScreenEffectOperateHandle Handle;
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.Handle = (struct FAvatarScreenEffectOperateHandle)Handle;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    this->ProcessEvent(Func, &Parms);
}

void UAvatarSystem::RemoveAvatarHUDOrState(const struct FAvatarHUDOperateHandle& Handle, struct UObject* WorldContextObject, uint8_t bReleasePanel, uint8_t bForceRefreshHudState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AvatarSystem", "RemoveAvatarHUDOrState");
    struct
    {
        struct FAvatarHUDOperateHandle Handle;
        struct UObject* WorldContextObject;
        uint8_t bReleasePanel;
        uint8_t bForceRefreshHudState;
    } Parms{};
    Parms.Handle = (struct FAvatarHUDOperateHandle)Handle;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.bReleasePanel = (uint8_t)bReleasePanel;
    Parms.bForceRefreshHudState = (uint8_t)bForceRefreshHudState;
    this->ProcessEvent(Func, &Parms);
}

void UAvatarSystem::RefreshAvatarAudioLifeTime(const struct FAvatarAudioOperateHandle& Handle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AvatarSystem", "RefreshAvatarAudioLifeTime");
    struct
    {
        struct FAvatarAudioOperateHandle Handle;
    } Parms{};
    Parms.Handle = (struct FAvatarAudioOperateHandle)Handle;
    this->ProcessEvent(Func, &Parms);
}

struct UFXResourceContainerComponent* UAvatarSystem::PlaySkillItemAvatarFX(struct FName FXKey, int32_t SkillSkinId, struct UObject* WorldContext, uint8_t bIsIndependentFOV, const struct FTransform& PlayTransform, struct AActor* CreatorOwner, struct USceneComponent* Socket, struct FName SocketName, uint8_t bUseObjectPool, uint8_t bIsHighFrequency, uint8_t bEnableInstanceLimit, EFXResourceCompPriority Priority)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AvatarSystem", "PlaySkillItemAvatarFX");
    struct
    {
        struct FName FXKey;
        int32_t SkillSkinId;
        struct UObject* WorldContext;
        uint8_t bIsIndependentFOV;
        struct FTransform PlayTransform;
        struct AActor* CreatorOwner;
        struct USceneComponent* Socket;
        struct FName SocketName;
        uint8_t bUseObjectPool;
        uint8_t bIsHighFrequency;
        uint8_t bEnableInstanceLimit;
        enum EFXResourceCompPriority Priority;
        struct UFXResourceContainerComponent* ReturnValue;
    } Parms{};
    Parms.FXKey = (struct FName)FXKey;
    Parms.SkillSkinId = (int32_t)SkillSkinId;
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.bIsIndependentFOV = (uint8_t)bIsIndependentFOV;
    Parms.PlayTransform = (struct FTransform)PlayTransform;
    Parms.CreatorOwner = (struct AActor*)CreatorOwner;
    Parms.Socket = (struct USceneComponent*)Socket;
    Parms.SocketName = (struct FName)SocketName;
    Parms.bUseObjectPool = (uint8_t)bUseObjectPool;
    Parms.bIsHighFrequency = (uint8_t)bIsHighFrequency;
    Parms.bEnableInstanceLimit = (uint8_t)bEnableInstanceLimit;
    Parms.Priority = (enum EFXResourceCompPriority)Priority;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FAvatarAudioOperateHandle UAvatarSystem::PlayCharacterAvatarLocationAudio(struct FName AudioId, struct AGPCharacter* AvatarCharacter, struct FVector Location, struct FRotator Rotator, struct UObject* WorldContext, uint8_t bNeedRefreshLifeTime, uint8_t bActiveStopRequired, EGameAkType InGameAkType, uint8_t bPreCutted, float AttenuationScalar, uint8_t bCalcSimplifiedTranDiff, struct FVector LocationOffset, uint8_t bCalcCompletedTranDiff, float RTPCValue, EGPAudioWaterPreset WaterPresetState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AvatarSystem", "PlayCharacterAvatarLocationAudio");
    struct
    {
        struct FName AudioId;
        struct AGPCharacter* AvatarCharacter;
        struct FVector Location;
        struct FRotator Rotator;
        struct UObject* WorldContext;
        uint8_t bNeedRefreshLifeTime;
        uint8_t bActiveStopRequired;
        enum EGameAkType InGameAkType;
        uint8_t bPreCutted;
        float AttenuationScalar;
        uint8_t bCalcSimplifiedTranDiff;
        struct FVector LocationOffset;
        uint8_t bCalcCompletedTranDiff;
        float RTPCValue;
        enum EGPAudioWaterPreset WaterPresetState;
        struct FAvatarAudioOperateHandle ReturnValue;
    } Parms{};
    Parms.AudioId = (struct FName)AudioId;
    Parms.AvatarCharacter = (struct AGPCharacter*)AvatarCharacter;
    Parms.Location = (struct FVector)Location;
    Parms.Rotator = (struct FRotator)Rotator;
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.bNeedRefreshLifeTime = (uint8_t)bNeedRefreshLifeTime;
    Parms.bActiveStopRequired = (uint8_t)bActiveStopRequired;
    Parms.InGameAkType = (enum EGameAkType)InGameAkType;
    Parms.bPreCutted = (uint8_t)bPreCutted;
    Parms.AttenuationScalar = (float)AttenuationScalar;
    Parms.bCalcSimplifiedTranDiff = (uint8_t)bCalcSimplifiedTranDiff;
    Parms.LocationOffset = (struct FVector)LocationOffset;
    Parms.bCalcCompletedTranDiff = (uint8_t)bCalcCompletedTranDiff;
    Parms.RTPCValue = (float)RTPCValue;
    Parms.WaterPresetState = (enum EGPAudioWaterPreset)WaterPresetState;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FAvatarFXOperateHandle UAvatarSystem::PlayCharacterAvatarFX(struct FName FXKey, struct AGPCharacter* AvatarCharacter, uint8_t bIsIndependentFOV, const struct FTransform& PlayTransform, struct AActor* CreatorOwner, struct USceneComponent* Socket, struct FName SocketName, uint8_t bUseObjectPool, uint8_t bIsHighFrequency, uint8_t bEnableInstanceLimit, EFXResourceCompPriority Priority)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AvatarSystem", "PlayCharacterAvatarFX");
    struct
    {
        struct FName FXKey;
        struct AGPCharacter* AvatarCharacter;
        uint8_t bIsIndependentFOV;
        struct FTransform PlayTransform;
        struct AActor* CreatorOwner;
        struct USceneComponent* Socket;
        struct FName SocketName;
        uint8_t bUseObjectPool;
        uint8_t bIsHighFrequency;
        uint8_t bEnableInstanceLimit;
        enum EFXResourceCompPriority Priority;
        struct FAvatarFXOperateHandle ReturnValue;
    } Parms{};
    Parms.FXKey = (struct FName)FXKey;
    Parms.AvatarCharacter = (struct AGPCharacter*)AvatarCharacter;
    Parms.bIsIndependentFOV = (uint8_t)bIsIndependentFOV;
    Parms.PlayTransform = (struct FTransform)PlayTransform;
    Parms.CreatorOwner = (struct AActor*)CreatorOwner;
    Parms.Socket = (struct USceneComponent*)Socket;
    Parms.SocketName = (struct FName)SocketName;
    Parms.bUseObjectPool = (uint8_t)bUseObjectPool;
    Parms.bIsHighFrequency = (uint8_t)bIsHighFrequency;
    Parms.bEnableInstanceLimit = (uint8_t)bEnableInstanceLimit;
    Parms.Priority = (enum EFXResourceCompPriority)Priority;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FAvatarMontageOperateHandle UAvatarSystem::PlayCharacterAvatarExtraPartMontage(struct FName AnimId, struct AGPCharacter* AvatarCharacter, struct FName ItemMeshName, float PlayRate, float StartingPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AvatarSystem", "PlayCharacterAvatarExtraPartMontage");
    struct
    {
        struct FName AnimId;
        struct AGPCharacter* AvatarCharacter;
        struct FName ItemMeshName;
        float PlayRate;
        float StartingPosition;
        struct FAvatarMontageOperateHandle ReturnValue;
    } Parms{};
    Parms.AnimId = (struct FName)AnimId;
    Parms.AvatarCharacter = (struct AGPCharacter*)AvatarCharacter;
    Parms.ItemMeshName = (struct FName)ItemMeshName;
    Parms.PlayRate = (float)PlayRate;
    Parms.StartingPosition = (float)StartingPosition;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FAvatarAudioOperateHandle UAvatarSystem::PlayCharacterAvatarActorAudio(struct FName AudioId, struct AGPCharacter* AvatarCharacter, struct AActor* TargetPlayer, uint8_t bNeedRefreshLifeTime, float Duration, uint8_t bNeedMakeNoise, uint8_t bPreCutted, float AttenuationScalar, uint8_t bNeedGetPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AvatarSystem", "PlayCharacterAvatarActorAudio");
    struct
    {
        struct FName AudioId;
        struct AGPCharacter* AvatarCharacter;
        struct AActor* TargetPlayer;
        uint8_t bNeedRefreshLifeTime;
        float Duration;
        uint8_t bNeedMakeNoise;
        uint8_t bPreCutted;
        float AttenuationScalar;
        uint8_t bNeedGetPosition;
        struct FAvatarAudioOperateHandle ReturnValue;
    } Parms{};
    Parms.AudioId = (struct FName)AudioId;
    Parms.AvatarCharacter = (struct AGPCharacter*)AvatarCharacter;
    Parms.TargetPlayer = (struct AActor*)TargetPlayer;
    Parms.bNeedRefreshLifeTime = (uint8_t)bNeedRefreshLifeTime;
    Parms.Duration = (float)Duration;
    Parms.bNeedMakeNoise = (uint8_t)bNeedMakeNoise;
    Parms.bPreCutted = (uint8_t)bPreCutted;
    Parms.AttenuationScalar = (float)AttenuationScalar;
    Parms.bNeedGetPosition = (uint8_t)bNeedGetPosition;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FAvatarAudioOperateHandle UAvatarSystem::PlayCharacterAvatar2DAudio(struct FName AudioId, struct AGPCharacter* AvatarCharacter, uint8_t bNeedRefreshLifeTime, uint8_t bNeedGetPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AvatarSystem", "PlayCharacterAvatar2DAudio");
    struct
    {
        struct FName AudioId;
        struct AGPCharacter* AvatarCharacter;
        uint8_t bNeedRefreshLifeTime;
        uint8_t bNeedGetPosition;
        struct FAvatarAudioOperateHandle ReturnValue;
    } Parms{};
    Parms.AudioId = (struct FName)AudioId;
    Parms.AvatarCharacter = (struct AGPCharacter*)AvatarCharacter;
    Parms.bNeedRefreshLifeTime = (uint8_t)bNeedRefreshLifeTime;
    Parms.bNeedGetPosition = (uint8_t)bNeedGetPosition;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAvatarSystem::InitializeAvatarAbilityMesh(struct FName MeshID, int64_t AvatarID, struct UMeshComponent* TargetMeshComponent, uint8_t bInitialHide)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AvatarSystem", "InitializeAvatarAbilityMesh");
    struct
    {
        struct FName MeshID;
        int64_t AvatarID;
        struct UMeshComponent* TargetMeshComponent;
        uint8_t bInitialHide;
    } Parms{};
    Parms.MeshID = (struct FName)MeshID;
    Parms.AvatarID = (int64_t)AvatarID;
    Parms.TargetMeshComponent = (struct UMeshComponent*)TargetMeshComponent;
    Parms.bInitialHide = (uint8_t)bInitialHide;
    this->ProcessEvent(Func, &Parms);
}

struct FName UAvatarSystem::GetSkillItemAvatarKeyOverride(struct FName OriginKey, int64_t AvatarID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AvatarSystem", "GetSkillItemAvatarKeyOverride");
    struct
    {
        struct FName OriginKey;
        int64_t AvatarID;
        struct FName ReturnValue;
    } Parms{};
    Parms.OriginKey = (struct FName)OriginKey;
    Parms.AvatarID = (int64_t)AvatarID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAvatarSystem* UAvatarSystem::GetInstance(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AvatarSystem", "GetInstance");
    struct
    {
        struct UObject* WorldContextObject;
        struct UAvatarSystem* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UAvatarSystem::GetCharacterAvatarSocketNameOverride(struct FName OriginKey, int64_t AvatarID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AvatarSystem", "GetCharacterAvatarSocketNameOverride");
    struct
    {
        struct FName OriginKey;
        int64_t AvatarID;
        struct FName ReturnValue;
    } Parms{};
    Parms.OriginKey = (struct FName)OriginKey;
    Parms.AvatarID = (int64_t)AvatarID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UAvatarSystem::GetCharacterAvatarKeyOverride(struct FName OriginKey, int64_t AvatarID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AvatarSystem", "GetCharacterAvatarKeyOverride");
    struct
    {
        struct FName OriginKey;
        int64_t AvatarID;
        struct FName ReturnValue;
    } Parms{};
    Parms.OriginKey = (struct FName)OriginKey;
    Parms.AvatarID = (int64_t)AvatarID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UAvatarSystem::GetCharacterAvatarClientBuffOverride(struct FName OriginKey, int64_t AvatarID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AvatarSystem", "GetCharacterAvatarClientBuffOverride");
    struct
    {
        struct FName OriginKey;
        int64_t AvatarID;
        struct FName ReturnValue;
    } Parms{};
    Parms.OriginKey = (struct FName)OriginKey;
    Parms.AvatarID = (int64_t)AvatarID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FAvatarScreenEffectOperateHandle UAvatarSystem::AddCharacterAvatarScreenEffect(struct FName ScreenEffectID, struct AGPCharacter* AvatarCharacter, struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AvatarSystem", "AddCharacterAvatarScreenEffect");
    struct
    {
        struct FName ScreenEffectID;
        struct AGPCharacter* AvatarCharacter;
        struct UObject* WorldContextObject;
        struct FAvatarScreenEffectOperateHandle ReturnValue;
    } Parms{};
    Parms.ScreenEffectID = (struct FName)ScreenEffectID;
    Parms.AvatarCharacter = (struct AGPCharacter*)AvatarCharacter;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FAvatarHUDOperateHandle UAvatarSystem::AddCharacterAvatarHUDOrState(struct FName HUDKey, struct AGPCharacter* AvatarCharacter, struct UObject* WorldContextObject, struct UObject* HudOwner, uint8_t bForceRefreshHudState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AvatarSystem", "AddCharacterAvatarHUDOrState");
    struct
    {
        struct FName HUDKey;
        struct AGPCharacter* AvatarCharacter;
        struct UObject* WorldContextObject;
        struct UObject* HudOwner;
        uint8_t bForceRefreshHudState;
        struct FAvatarHUDOperateHandle ReturnValue;
    } Parms{};
    Parms.HUDKey = (struct FName)HUDKey;
    Parms.AvatarCharacter = (struct AGPCharacter*)AvatarCharacter;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.HudOwner = (struct UObject*)HudOwner;
    Parms.bForceRefreshHudState = (uint8_t)bForceRefreshHudState;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- USkillItemAvatarComponent::* ----
void USkillItemAvatarComponent::SetVisibility(uint8_t bNewVisibility)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SkillItemAvatarComponent", "SetVisibility");
    struct
    {
        uint8_t bNewVisibility;
    } Parms{};
    Parms.bNewVisibility = (uint8_t)bNewVisibility;
    this->ProcessEvent(Func, &Parms);
}

void USkillItemAvatarComponent::SetMeshPartVisibility(struct FName MeshPartTag, uint8_t bNewVisibility)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SkillItemAvatarComponent", "SetMeshPartVisibility");
    struct
    {
        struct FName MeshPartTag;
        uint8_t bNewVisibility;
    } Parms{};
    Parms.MeshPartTag = (struct FName)MeshPartTag;
    Parms.bNewVisibility = (uint8_t)bNewVisibility;
    this->ProcessEvent(Func, &Parms);
}

uint8_t USkillItemAvatarComponent::IsVisible()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SkillItemAvatarComponent", "IsVisible");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USkillItemAvatarComponent::IsMeshPartVisible(struct FName MeshPartTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SkillItemAvatarComponent", "IsMeshPartVisible");
    struct
    {
        struct FName MeshPartTag;
        uint8_t ReturnValue;
    } Parms{};
    Parms.MeshPartTag = (struct FName)MeshPartTag;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USkeletalMeshComponent* USkillItemAvatarComponent::GetPrimarySkeletalMeshComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SkillItemAvatarComponent", "GetPrimarySkeletalMeshComponent");
    struct
    {
        struct USkeletalMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAnimInstance* USkillItemAvatarComponent::GetPrimaryAnimInstance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SkillItemAvatarComponent", "GetPrimaryAnimInstance");
    struct
    {
        struct UAnimInstance* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMeshComponent* USkillItemAvatarComponent::GetMeshPart(struct FName MeshPartTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SkillItemAvatarComponent", "GetMeshPart");
    struct
    {
        struct FName MeshPartTag;
        struct UMeshComponent* ReturnValue;
    } Parms{};
    Parms.MeshPartTag = (struct FName)MeshPartTag;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
