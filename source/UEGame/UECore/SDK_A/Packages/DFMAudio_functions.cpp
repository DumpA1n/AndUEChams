#include "DFMAudio.hpp"
#include "DFMGameplay.hpp"
#include "Engine.hpp"
#include "GPAudioRuntime.hpp"
#include "GPGameplay.hpp"
#include "GPGlobalDefines.hpp"
#include "GPResource.hpp"
#include "GPWeaponDefineForPlugin.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UAnimNotify_FootStepAudio
void UAnimNotify_FootStepAudio::ReceivedNotifyFunc(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, struct UPhysicalMaterial* BindPhysMat, struct UPhysicalMaterialAudioDataAsset* BindConfig, EGPAudioFootSoundType AudioType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AnimNotify_FootStepAudio", "ReceivedNotifyFunc");
    struct
    {
        struct USkeletalMeshComponent* MeshComp;
        struct UAnimSequenceBase* Animation;
        struct UPhysicalMaterial* BindPhysMat;
        struct UPhysicalMaterialAudioDataAsset* BindConfig;
        enum EGPAudioFootSoundType AudioType;
    } Parms{};
    Parms.MeshComp = (struct USkeletalMeshComponent*)MeshComp;
    Parms.Animation = (struct UAnimSequenceBase*)Animation;
    Parms.BindPhysMat = (struct UPhysicalMaterial*)BindPhysMat;
    Parms.BindConfig = (struct UPhysicalMaterialAudioDataAsset*)BindConfig;
    Parms.AudioType = (enum EGPAudioFootSoundType)AudioType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAnimNotify_FootStepAudio::InnerProcessTPPFootstep(struct UAnimSequenceBase* Animation, struct ADFMCharacter* DFMCharacter, struct UPhysicalMaterial* BindPhysMat, struct UPhysicalMaterialAudioDataAsset* BindConfig, EGPAudioFootSoundType AudioType, uint8_t bIsTPPNotify)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AnimNotify_FootStepAudio", "InnerProcessTPPFootstep");
    struct
    {
        struct UAnimSequenceBase* Animation;
        struct ADFMCharacter* DFMCharacter;
        struct UPhysicalMaterial* BindPhysMat;
        struct UPhysicalMaterialAudioDataAsset* BindConfig;
        enum EGPAudioFootSoundType AudioType;
        uint8_t bIsTPPNotify;
    } Parms{};
    Parms.Animation = (struct UAnimSequenceBase*)Animation;
    Parms.DFMCharacter = (struct ADFMCharacter*)DFMCharacter;
    Parms.BindPhysMat = (struct UPhysicalMaterial*)BindPhysMat;
    Parms.BindConfig = (struct UPhysicalMaterialAudioDataAsset*)BindConfig;
    Parms.AudioType = (enum EGPAudioFootSoundType)AudioType;
    Parms.bIsTPPNotify = (uint8_t)bIsTPPNotify;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAnimNotify_FootStepAudio::InnerProcessSimulatedCharacterFootstep(struct UAnimSequenceBase* Animation, struct ADFMCharacter* DFMCharacter, struct UPhysicalMaterial* BindPhysMat, struct UPhysicalMaterialAudioDataAsset* BindConfig, EGPAudioFootSoundType AudioType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AnimNotify_FootStepAudio", "InnerProcessSimulatedCharacterFootstep");
    struct
    {
        struct UAnimSequenceBase* Animation;
        struct ADFMCharacter* DFMCharacter;
        struct UPhysicalMaterial* BindPhysMat;
        struct UPhysicalMaterialAudioDataAsset* BindConfig;
        enum EGPAudioFootSoundType AudioType;
    } Parms{};
    Parms.Animation = (struct UAnimSequenceBase*)Animation;
    Parms.DFMCharacter = (struct ADFMCharacter*)DFMCharacter;
    Parms.BindPhysMat = (struct UPhysicalMaterial*)BindPhysMat;
    Parms.BindConfig = (struct UPhysicalMaterialAudioDataAsset*)BindConfig;
    Parms.AudioType = (enum EGPAudioFootSoundType)AudioType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAnimNotify_FootStepAudio::InnerProcessFPPFootstep(struct UAnimSequenceBase* Animation, struct ADFMCharacter* DFMCharacter, struct UPhysicalMaterial* BindPhysMat, struct UPhysicalMaterialAudioDataAsset* BindConfig, EGPAudioFootSoundType AudioType, uint8_t bIsTPPNotify)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AnimNotify_FootStepAudio", "InnerProcessFPPFootstep");
    struct
    {
        struct UAnimSequenceBase* Animation;
        struct ADFMCharacter* DFMCharacter;
        struct UPhysicalMaterial* BindPhysMat;
        struct UPhysicalMaterialAudioDataAsset* BindConfig;
        enum EGPAudioFootSoundType AudioType;
        uint8_t bIsTPPNotify;
    } Parms{};
    Parms.Animation = (struct UAnimSequenceBase*)Animation;
    Parms.DFMCharacter = (struct ADFMCharacter*)DFMCharacter;
    Parms.BindPhysMat = (struct UPhysicalMaterial*)BindPhysMat;
    Parms.BindConfig = (struct UPhysicalMaterialAudioDataAsset*)BindConfig;
    Parms.AudioType = (enum EGPAudioFootSoundType)AudioType;
    Parms.bIsTPPNotify = (uint8_t)bIsTPPNotify;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UAnimNotify_GPAudioEvent
void UAnimNotify_GPAudioEvent::ReceivedGPAudioEventNotifyFunc(struct USkeletalMeshComponent* MeshComp, struct UGPAudioEventAsset* AudioEvent, uint8_t bFollow, EGPAudioBlueprintType AudioType, struct FName NotifyName, uint8_t bOnlyFPP, uint8_t bOnlyTPP, struct FGPAudioEventAdditionalFunction AddFunc, struct FString AttachName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AnimNotify_GPAudioEvent", "ReceivedGPAudioEventNotifyFunc");
    struct
    {
        struct USkeletalMeshComponent* MeshComp;
        struct UGPAudioEventAsset* AudioEvent;
        uint8_t bFollow;
        enum EGPAudioBlueprintType AudioType;
        struct FName NotifyName;
        uint8_t bOnlyFPP;
        uint8_t bOnlyTPP;
        struct FGPAudioEventAdditionalFunction AddFunc;
        struct FString AttachName;
    } Parms{};
    Parms.MeshComp = (struct USkeletalMeshComponent*)MeshComp;
    Parms.AudioEvent = (struct UGPAudioEventAsset*)AudioEvent;
    Parms.bFollow = (uint8_t)bFollow;
    Parms.AudioType = (enum EGPAudioBlueprintType)AudioType;
    Parms.NotifyName = (struct FName)NotifyName;
    Parms.bOnlyFPP = (uint8_t)bOnlyFPP;
    Parms.bOnlyTPP = (uint8_t)bOnlyTPP;
    Parms.AddFunc = (struct FGPAudioEventAdditionalFunction)AddFunc;
    Parms.AttachName = (struct FString)AttachName;
    this->ProcessEvent(Func, &Parms);
}

void UAnimNotify_GPAudioEvent::ProcessNoOwnerEvent(struct USkeletalMeshComponent* MeshComp, struct UGPAudioEventAsset* AudioEventAsset, EGPAudioBlueprintType AudioType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AnimNotify_GPAudioEvent", "ProcessNoOwnerEvent");
    struct
    {
        struct USkeletalMeshComponent* MeshComp;
        struct UGPAudioEventAsset* AudioEventAsset;
        enum EGPAudioBlueprintType AudioType;
    } Parms{};
    Parms.MeshComp = (struct USkeletalMeshComponent*)MeshComp;
    Parms.AudioEventAsset = (struct UGPAudioEventAsset*)AudioEventAsset;
    Parms.AudioType = (enum EGPAudioBlueprintType)AudioType;
    this->ProcessEvent(Func, &Parms);
}

struct UGPAudioEventAsset* UAnimNotify_GPAudioEvent::GetAvatarAudioEventByCharacter(struct AGPCharacter* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AnimNotify_GPAudioEvent", "GetAvatarAudioEventByCharacter");
    struct
    {
        struct AGPCharacter* CHARACTER;
        struct UGPAudioEventAsset* ReturnValue;
    } Parms{};
    Parms.CHARACTER = (struct AGPCharacter*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPAudioEventAsset* UAnimNotify_GPAudioEvent::GetAvatarAudioEvent(struct USkeletalMeshComponent* MeshComp, struct UGPAudioEventAsset* AudioEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AnimNotify_GPAudioEvent", "GetAvatarAudioEvent");
    struct
    {
        struct USkeletalMeshComponent* MeshComp;
        struct UGPAudioEventAsset* AudioEvent;
        struct UGPAudioEventAsset* ReturnValue;
    } Parms{};
    Parms.MeshComp = (struct USkeletalMeshComponent*)MeshComp;
    Parms.AudioEvent = (struct UGPAudioEventAsset*)AudioEvent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UAnimNotify_GPAudioEvent2D
void UAnimNotify_GPAudioEvent2D::ReceivedGPAudioEventNotifyFunc(struct USkeletalMeshComponent* MeshComp, struct UGPAudioEventAsset* AudioEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AnimNotify_GPAudioEvent2D", "ReceivedGPAudioEventNotifyFunc");
    struct
    {
        struct USkeletalMeshComponent* MeshComp;
        struct UGPAudioEventAsset* AudioEvent;
    } Parms{};
    Parms.MeshComp = (struct USkeletalMeshComponent*)MeshComp;
    Parms.AudioEvent = (struct UGPAudioEventAsset*)AudioEvent;
    this->ProcessEvent(Func, &Parms);
}

struct UGPAudioEventAsset* UAnimNotify_GPAudioEvent2D::GetAvatarAudioEvent(struct USkeletalMeshComponent* MeshComp, struct UGPAudioEventAsset* AudioEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AnimNotify_GPAudioEvent2D", "GetAvatarAudioEvent");
    struct
    {
        struct USkeletalMeshComponent* MeshComp;
        struct UGPAudioEventAsset* AudioEvent;
        struct UGPAudioEventAsset* ReturnValue;
    } Parms{};
    Parms.MeshComp = (struct USkeletalMeshComponent*)MeshComp;
    Parms.AudioEvent = (struct UGPAudioEventAsset*)AudioEvent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UAnimNotifyState_DFMAudioEvent
struct UGPAudioEventAsset* UAnimNotifyState_DFMAudioEvent::GetAvatarStartAudioEvent(struct USkeletalMeshComponent* MeshComp, struct UGPAudioEventAsset* AudioEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AnimNotifyState_DFMAudioEvent", "GetAvatarStartAudioEvent");
    struct
    {
        struct USkeletalMeshComponent* MeshComp;
        struct UGPAudioEventAsset* AudioEvent;
        struct UGPAudioEventAsset* ReturnValue;
    } Parms{};
    Parms.MeshComp = (struct USkeletalMeshComponent*)MeshComp;
    Parms.AudioEvent = (struct UGPAudioEventAsset*)AudioEvent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPAudioEventAsset* UAnimNotifyState_DFMAudioEvent::GetAvatarEndAudioEvent(struct USkeletalMeshComponent* MeshComp, struct UGPAudioEventAsset* AudioEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AnimNotifyState_DFMAudioEvent", "GetAvatarEndAudioEvent");
    struct
    {
        struct USkeletalMeshComponent* MeshComp;
        struct UGPAudioEventAsset* AudioEvent;
        struct UGPAudioEventAsset* ReturnValue;
    } Parms{};
    Parms.MeshComp = (struct USkeletalMeshComponent*)MeshComp;
    Parms.AudioEvent = (struct UGPAudioEventAsset*)AudioEvent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPAudioEventAsset* UAnimNotifyState_DFMAudioEvent::GetAvatarCharacterStartAudioEvent(struct AGPCharacter* GPOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AnimNotifyState_DFMAudioEvent", "GetAvatarCharacterStartAudioEvent");
    struct
    {
        struct AGPCharacter* GPOwner;
        struct UGPAudioEventAsset* ReturnValue;
    } Parms{};
    Parms.GPOwner = (struct AGPCharacter*)GPOwner;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPAudioEventAsset* UAnimNotifyState_DFMAudioEvent::GetAvatarCharacterEndAudioEvent(struct AGPCharacter* GPOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AnimNotifyState_DFMAudioEvent", "GetAvatarCharacterEndAudioEvent");
    struct
    {
        struct AGPCharacter* GPOwner;
        struct UGPAudioEventAsset* ReturnValue;
    } Parms{};
    Parms.GPOwner = (struct AGPCharacter*)GPOwner;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFMAudioMastering
uint8_t UDFMAudioMastering::SetPCNightMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMAudioMastering", "SetPCNightMode");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMAudioMastering::SetPCHomeCinema()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMAudioMastering", "SetPCHomeCinema");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMAudioMastering::SetPCHeadphones()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMAudioMastering", "SetPCHeadphones");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMAudioMastering::SetMobileMobileSpeakers()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMAudioMastering", "SetMobileMobileSpeakers");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMAudioMastering::SetMobileHeadphones()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMAudioMastering", "SetMobileHeadphones");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFMAudioSubsystem
struct UDFMAudioSubsystem* UDFMAudioSubsystem::GetDFMAudioSubsystem(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMAudioSubsystem", "GetDFMAudioSubsystem");
    struct
    {
        struct UObject* WorldContext;
        struct UDFMAudioSubsystem* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFMCharacterAudioComponent
void UDFMCharacterAudioComponent::UpdateUnderWaterMaskingByOnwer(uint8_t bNeedCheckAlive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCharacterAudioComponent", "UpdateUnderWaterMaskingByOnwer");
    struct
    {
        uint8_t bNeedCheckAlive;
    } Parms{};
    Parms.bNeedCheckAlive = (uint8_t)bNeedCheckAlive;
    this->ProcessEvent(Func, &Parms);
}

void UDFMCharacterAudioComponent::TryUpdateAudioHandle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCharacterAudioComponent", "TryUpdateAudioHandle");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMCharacterAudioComponent::SetSameCamp_AI()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCharacterAudioComponent", "SetSameCamp_AI");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMCharacterAudioComponent::OnXPPChange(uint8_t bNewFPP)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCharacterAudioComponent", "OnXPPChange");
    struct
    {
        uint8_t bNewFPP;
    } Parms{};
    Parms.bNewFPP = (uint8_t)bNewFPP;
    this->ProcessEvent(Func, &Parms);
}

void UDFMCharacterAudioComponent::OnUnderWaterStateChanged(uint8_t bUnderWater)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCharacterAudioComponent", "OnUnderWaterStateChanged");
    struct
    {
        uint8_t bUnderWater;
    } Parms{};
    Parms.bUnderWater = (uint8_t)bUnderWater;
    this->ProcessEvent(Func, &Parms);
}

void UDFMCharacterAudioComponent::OnPickupAmmoSucc(int32_t AmmoNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCharacterAudioComponent", "OnPickupAmmoSucc");
    struct
    {
        int32_t AmmoNum;
    } Parms{};
    Parms.AmmoNum = (int32_t)AmmoNum;
    this->ProcessEvent(Func, &Parms);
}

void UDFMCharacterAudioComponent::OnLocalPlayerPawnChanged(struct AActor* OldCharacter, struct AActor* NewCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCharacterAudioComponent", "OnLocalPlayerPawnChanged");
    struct
    {
        struct AActor* OldCharacter;
        struct AActor* NewCharacter;
    } Parms{};
    Parms.OldCharacter = (struct AActor*)OldCharacter;
    Parms.NewCharacter = (struct AActor*)NewCharacter;
    this->ProcessEvent(Func, &Parms);
}

void UDFMCharacterAudioComponent::OnLocalCharacterStopUIAudio(const struct FName& AudioName, uint32_t AudioIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCharacterAudioComponent", "OnLocalCharacterStopUIAudio");
    struct
    {
        struct FName AudioName;
        uint32_t AudioIndex;
    } Parms{};
    Parms.AudioName = (struct FName)AudioName;
    Parms.AudioIndex = (uint32_t)AudioIndex;
    this->ProcessEvent(Func, &Parms);
}

void UDFMCharacterAudioComponent::OnLocalCharacterPlayUIAudio(const struct FName& AudioName, uint32_t AudioIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCharacterAudioComponent", "OnLocalCharacterPlayUIAudio");
    struct
    {
        struct FName AudioName;
        uint32_t AudioIndex;
    } Parms{};
    Parms.AudioName = (struct FName)AudioName;
    Parms.AudioIndex = (uint32_t)AudioIndex;
    this->ProcessEvent(Func, &Parms);
}

void UDFMCharacterAudioComponent::OnFootstepEventsLoadedFinished(struct TArray<struct FSoftObjectPath> ObjectPaths)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCharacterAudioComponent", "OnFootstepEventsLoadedFinished");
    struct
    {
        struct TArray<struct FSoftObjectPath> ObjectPaths;
    } Parms{};
    Parms.ObjectPaths = (struct TArray<struct FSoftObjectPath>)ObjectPaths;
    this->ProcessEvent(Func, &Parms);
}

void UDFMCharacterAudioComponent::OnCharacterReborn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCharacterAudioComponent", "OnCharacterReborn");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMCharacterAudioComponent::OnCharacterPVSVisibilityChanged(uint8_t bNewVisibility)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCharacterAudioComponent", "OnCharacterPVSVisibilityChanged");
    struct
    {
        uint8_t bNewVisibility;
    } Parms{};
    Parms.bNewVisibility = (uint8_t)bNewVisibility;
    this->ProcessEvent(Func, &Parms);
}

void UDFMCharacterAudioComponent::OnCharacterDead(struct AGPCharacterBase* CHARACTER, struct AController* Killer, struct UDamageType* DamageType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCharacterAudioComponent", "OnCharacterDead");
    struct
    {
        struct AGPCharacterBase* CHARACTER;
        struct AController* Killer;
        struct UDamageType* DamageType;
    } Parms{};
    Parms.CHARACTER = (struct AGPCharacterBase*)CHARACTER;
    Parms.Killer = (struct AController*)Killer;
    Parms.DamageType = (struct UDamageType*)DamageType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMCharacterAudioComponent::ChangeUnderWaterMasking(uint8_t bUnderWater, uint8_t bNeedCheckAlive, struct AGPCharacter* FocusedCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMCharacterAudioComponent", "ChangeUnderWaterMasking");
    struct
    {
        uint8_t bUnderWater;
        uint8_t bNeedCheckAlive;
        struct AGPCharacter* FocusedCharacter;
    } Parms{};
    Parms.bUnderWater = (uint8_t)bUnderWater;
    Parms.bNeedCheckAlive = (uint8_t)bNeedCheckAlive;
    Parms.FocusedCharacter = (struct AGPCharacter*)FocusedCharacter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UDFMControllerAudioComponent
void UDFMControllerAudioComponent::UpdateClientPVSActorInfo(uint64_t CharacterUin, struct FPVSAudioActorInfo PVSAudioActorInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMControllerAudioComponent", "UpdateClientPVSActorInfo");
    struct
    {
        uint64_t CharacterUin;
        struct FPVSAudioActorInfo PVSAudioActorInfo;
    } Parms{};
    Parms.CharacterUin = (uint64_t)CharacterUin;
    Parms.PVSAudioActorInfo = (struct FPVSAudioActorInfo)PVSAudioActorInfo;
    this->ProcessEvent(Func, &Parms);
}

void UDFMControllerAudioComponent::OnStopLocalFocus(struct AActor* TargetActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMControllerAudioComponent", "OnStopLocalFocus");
    struct
    {
        struct AActor* TargetActor;
    } Parms{};
    Parms.TargetActor = (struct AActor*)TargetActor;
    this->ProcessEvent(Func, &Parms);
}

void UDFMControllerAudioComponent::OnStateAudioTypeChanged(EStateAudioEventType InType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMControllerAudioComponent", "OnStateAudioTypeChanged");
    struct
    {
        enum EStateAudioEventType InType;
    } Parms{};
    Parms.InType = (enum EStateAudioEventType)InType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMControllerAudioComponent::OnStartLocalFocus(struct AActor* TargetActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMControllerAudioComponent", "OnStartLocalFocus");
    struct
    {
        struct AActor* TargetActor;
    } Parms{};
    Parms.TargetActor = (struct AActor*)TargetActor;
    this->ProcessEvent(Func, &Parms);
}

void UDFMControllerAudioComponent::OnMatchOver(const EMatchOverReason& MatchOverReason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMControllerAudioComponent", "OnMatchOver");
    struct
    {
        enum EMatchOverReason MatchOverReason;
    } Parms{};
    Parms.MatchOverReason = (enum EMatchOverReason)MatchOverReason;
    this->ProcessEvent(Func, &Parms);
}

void UDFMControllerAudioComponent::OnLocalPlayerPawnChanged(struct AActor* OldCharacter, struct AActor* NewCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMControllerAudioComponent", "OnLocalPlayerPawnChanged");
    struct
    {
        struct AActor* OldCharacter;
        struct AActor* NewCharacter;
    } Parms{};
    Parms.OldCharacter = (struct AActor*)OldCharacter;
    Parms.NewCharacter = (struct AActor*)NewCharacter;
    this->ProcessEvent(Func, &Parms);
}

void UDFMControllerAudioComponent::OnGamePlayModeChanged(EDFMGamePlayMode NewGamePlayMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMControllerAudioComponent", "OnGamePlayModeChanged");
    struct
    {
        enum EDFMGamePlayMode NewGamePlayMode;
    } Parms{};
    Parms.NewGamePlayMode = (enum EDFMGamePlayMode)NewGamePlayMode;
    this->ProcessEvent(Func, &Parms);
}

void UDFMControllerAudioComponent::AsyncLoadAssetDataFinished(struct TArray<struct FSoftObjectPath> OutPaths, struct FGPClippedWeaponFakeEventNeededInfo FakeEventInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMControllerAudioComponent", "AsyncLoadAssetDataFinished");
    struct
    {
        struct TArray<struct FSoftObjectPath> OutPaths;
        struct FGPClippedWeaponFakeEventNeededInfo FakeEventInfo;
    } Parms{};
    Parms.OutPaths = (struct TArray<struct FSoftObjectPath>)OutPaths;
    Parms.FakeEventInfo = (struct FGPClippedWeaponFakeEventNeededInfo)FakeEventInfo;
    this->ProcessEvent(Func, &Parms);
}

// UDFMUIAudioPlayer
uint8_t UDFMUIAudioPlayer::StopUIEventByName(const struct FName& EvtName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMUIAudioPlayer", "StopUIEventByName");
    struct
    {
        struct FName EvtName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.EvtName = (struct FName)EvtName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMUIAudioPlayer::StopUIAudio(struct UObject* WorldContext, struct FString EvtName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMUIAudioPlayer", "StopUIAudio");
    struct
    {
        struct UObject* WorldContext;
        struct FString EvtName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.EvtName = (struct FString)EvtName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMUIAudioPlayer::SeekUIAudioToPercent(const struct FName& EvtName, float Percent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMUIAudioPlayer", "SeekUIAudioToPercent");
    struct
    {
        struct FName EvtName;
        float Percent;
    } Parms{};
    Parms.EvtName = (struct FName)EvtName;
    Parms.Percent = (float)Percent;
    this->ProcessEvent(Func, &Parms);
}

void UDFMUIAudioPlayer::ResumeUIAudio(const struct FName& EvtName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMUIAudioPlayer", "ResumeUIAudio");
    struct
    {
        struct FName EvtName;
    } Parms{};
    Parms.EvtName = (struct FName)EvtName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMUIAudioPlayer::Reset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMUIAudioPlayer", "Reset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMUIAudioPlayer::ReleaseCachedAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMUIAudioPlayer", "ReleaseCachedAudio");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMUIAudioPlayer::ProcessUIAudioAction(const struct FName& EvtName, EGPAudioActionOnEventType InType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMUIAudioPlayer", "ProcessUIAudioAction");
    struct
    {
        struct FName EvtName;
        enum EGPAudioActionOnEventType InType;
    } Parms{};
    Parms.EvtName = (struct FName)EvtName;
    Parms.InType = (enum EGPAudioActionOnEventType)InType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMUIAudioPlayer::PreloadAudioAssets(EUIAudioPreloadState UIAudioPreloadState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMUIAudioPlayer", "PreloadAudioAssets");
    struct
    {
        enum EUIAudioPreloadState UIAudioPreloadState;
    } Parms{};
    Parms.UIAudioPreloadState = (enum EUIAudioPreloadState)UIAudioPreloadState;
    this->ProcessEvent(Func, &Parms);
}

void UDFMUIAudioPlayer::PreloadAssetsByName(const struct FName& EvtName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMUIAudioPlayer", "PreloadAssetsByName");
    struct
    {
        struct FName EvtName;
    } Parms{};
    Parms.EvtName = (struct FName)EvtName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMUIAudioPlayer::PlayUIEventWithSeek(const struct FName& EvtName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMUIAudioPlayer", "PlayUIEventWithSeek");
    struct
    {
        struct FName EvtName;
    } Parms{};
    Parms.EvtName = (struct FName)EvtName;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMUIAudioPlayer::PlayUIEventByNameWrapper(const struct FName& EvtName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMUIAudioPlayer", "PlayUIEventByNameWrapper");
    struct
    {
        struct FName EvtName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.EvtName = (struct FName)EvtName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMUIAudioPlayer::PlayUIEventByName(const struct FName& EvtName, uint8_t bNeedGetPosion)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMUIAudioPlayer", "PlayUIEventByName");
    struct
    {
        struct FName EvtName;
        uint8_t bNeedGetPosion;
        uint8_t ReturnValue;
    } Parms{};
    Parms.EvtName = (struct FName)EvtName;
    Parms.bNeedGetPosion = (uint8_t)bNeedGetPosion;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMUIAudioPlayer::PlayUIAudioWithEndCallback(const struct FName& EvtName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMUIAudioPlayer", "PlayUIAudioWithEndCallback");
    struct
    {
        struct FName EvtName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.EvtName = (struct FName)EvtName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMUIAudioPlayer::PlayUIAudioWithCallback(const struct FSoftObjectPath& AudioSoftPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMUIAudioPlayer", "PlayUIAudioWithCallback");
    struct
    {
        struct FSoftObjectPath AudioSoftPath;
    } Parms{};
    Parms.AudioSoftPath = (struct FSoftObjectPath)AudioSoftPath;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMUIAudioPlayer::PlayUIAudio(struct UObject* WorldContext, struct FString EvtName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMUIAudioPlayer", "PlayUIAudio");
    struct
    {
        struct UObject* WorldContext;
        struct FString EvtName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.EvtName = (struct FString)EvtName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMUIAudioPlayer::PlayMusicByName(const struct FName& MusicEventName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMUIAudioPlayer", "PlayMusicByName");
    struct
    {
        struct FName MusicEventName;
    } Parms{};
    Parms.MusicEventName = (struct FName)MusicEventName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMUIAudioPlayer::PlayIngameMusicByName(struct FString MusicEventName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMUIAudioPlayer", "PlayIngameMusicByName");
    struct
    {
        struct FString MusicEventName;
    } Parms{};
    Parms.MusicEventName = (struct FString)MusicEventName;
    this->ProcessEvent(Func, &Parms);
}

int32_t UDFMUIAudioPlayer::PlayAudioWithEndCallback(struct UGPAudioEventAsset* InAudioAsset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMUIAudioPlayer", "PlayAudioWithEndCallback");
    struct
    {
        struct UGPAudioEventAsset* InAudioAsset;
        int32_t ReturnValue;
    } Parms{};
    Parms.InAudioAsset = (struct UGPAudioEventAsset*)InAudioAsset;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMUIAudioPlayer::PauseUIAudio(const struct FName& EvtName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMUIAudioPlayer", "PauseUIAudio");
    struct
    {
        struct FName EvtName;
    } Parms{};
    Parms.EvtName = (struct FName)EvtName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMUIAudioPlayer::OnStopUIEventByName(const struct FName& EvtName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMUIAudioPlayer", "OnStopUIEventByName");
    struct
    {
        struct FName EvtName;
    } Parms{};
    Parms.EvtName = (struct FName)EvtName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMUIAudioPlayer::OnSingleAudioPreloadFinished(const struct FSoftObjectPath& AudioPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMUIAudioPlayer", "OnSingleAudioPreloadFinished");
    struct
    {
        struct FSoftObjectPath AudioPath;
    } Parms{};
    Parms.AudioPath = (struct FSoftObjectPath)AudioPath;
    this->ProcessEvent(Func, &Parms);
}

void UDFMUIAudioPlayer::OnPlayUIEventByName(const struct FName& EvtName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMUIAudioPlayer", "OnPlayUIEventByName");
    struct
    {
        struct FName EvtName;
    } Parms{};
    Parms.EvtName = (struct FName)EvtName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMUIAudioPlayer::OnGPAudioPlayFinishEnd(EGPEventCallbackType EventCallbackType, int32_t PlayingId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMUIAudioPlayer", "OnGPAudioPlayFinishEnd");
    struct
    {
        enum EGPEventCallbackType EventCallbackType;
        int32_t PlayingId;
    } Parms{};
    Parms.EventCallbackType = (enum EGPEventCallbackType)EventCallbackType;
    Parms.PlayingId = (int32_t)PlayingId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMUIAudioPlayer::OnAudioPreloadFinished(struct TArray<struct FSoftObjectPath> PreloadedAssets, EUIAudioPreloadState UIAudioPreloadState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMUIAudioPlayer", "OnAudioPreloadFinished");
    struct
    {
        struct TArray<struct FSoftObjectPath> PreloadedAssets;
        enum EUIAudioPreloadState UIAudioPreloadState;
    } Parms{};
    Parms.PreloadedAssets = (struct TArray<struct FSoftObjectPath>)PreloadedAssets;
    Parms.UIAudioPreloadState = (enum EUIAudioPreloadState)UIAudioPreloadState;
    this->ProcessEvent(Func, &Parms);
}

void UDFMUIAudioPlayer::InitAudioAsset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMUIAudioPlayer", "InitAudioAsset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMUIAudioPlayer::Init()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMUIAudioPlayer", "Init");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

int32_t UDFMUIAudioPlayer::GetUIEventPlayPosition(const struct FName& EvtName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMUIAudioPlayer", "GetUIEventPlayPosition");
    struct
    {
        struct FName EvtName;
        int32_t ReturnValue;
    } Parms{};
    Parms.EvtName = (struct FName)EvtName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMUIAudioPlayer::GetIsAssetInit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMUIAudioPlayer", "GetIsAssetInit");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMUIAudioPlayer* UDFMUIAudioPlayer::Get(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMUIAudioPlayer", "Get");
    struct
    {
        struct UObject* WorldContext;
        struct UDFMUIAudioPlayer* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMUIAudioPlayer::DumpCachedAudioInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMUIAudioPlayer", "DumpCachedAudioInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMUIAudioPlayer::ClearLoadingAsset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMUIAudioPlayer", "ClearLoadingAsset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMUIAudioPlayer::CancelLoading(struct FString InAssetPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMUIAudioPlayer", "CancelLoading");
    struct
    {
        struct FString InAssetPath;
    } Parms{};
    Parms.InAssetPath = (struct FString)InAssetPath;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMUIAudioPlayer::AsyncPlayUIAudioWithEndCallback(const struct FName& EvtName, struct TSoftObjectPtr<UGPAudioEventAsset> AssetSoftPtr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMUIAudioPlayer", "AsyncPlayUIAudioWithEndCallback");
    struct
    {
        struct FName EvtName;
        struct TSoftObjectPtr<UGPAudioEventAsset> AssetSoftPtr;
        uint8_t ReturnValue;
    } Parms{};
    Parms.EvtName = (struct FName)EvtName;
    Parms.AssetSoftPtr = (struct TSoftObjectPtr<UGPAudioEventAsset>)AssetSoftPtr;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMUIAudioPlayer::AsyncPlay2DGlobalAudio(struct TSoftObjectPtr<UGPAudioEventAsset> AssetSoftPtr, const struct FName& EvtName, uint8_t bIsStopEvent, uint8_t bNeedGetPosion)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMUIAudioPlayer", "AsyncPlay2DGlobalAudio");
    struct
    {
        struct TSoftObjectPtr<UGPAudioEventAsset> AssetSoftPtr;
        struct FName EvtName;
        uint8_t bIsStopEvent;
        uint8_t bNeedGetPosion;
        uint8_t ReturnValue;
    } Parms{};
    Parms.AssetSoftPtr = (struct TSoftObjectPtr<UGPAudioEventAsset>)AssetSoftPtr;
    Parms.EvtName = (struct FName)EvtName;
    Parms.bIsStopEvent = (uint8_t)bIsStopEvent;
    Parms.bNeedGetPosion = (uint8_t)bNeedGetPosion;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFMusicPlayer
void UDFMusicPlayer::StopMusicByName(struct FName InMusicName, int32_t TransitionMS)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMusicPlayer", "StopMusicByName");
    struct
    {
        struct FName InMusicName;
        int32_t TransitionMS;
    } Parms{};
    Parms.InMusicName = (struct FName)InMusicName;
    Parms.TransitionMS = (int32_t)TransitionMS;
    this->ProcessEvent(Func, &Parms);
}

void UDFMusicPlayer::StopAllMusicForce(int32_t TransitionMS)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMusicPlayer", "StopAllMusicForce");
    struct
    {
        int32_t TransitionMS;
    } Parms{};
    Parms.TransitionMS = (int32_t)TransitionMS;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMusicPlayer::SeekMusicToPercent(const struct FName& EvtName, float InPercent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMusicPlayer", "SeekMusicToPercent");
    struct
    {
        struct FName EvtName;
        float InPercent;
        uint8_t ReturnValue;
    } Parms{};
    Parms.EvtName = (struct FName)EvtName;
    Parms.InPercent = (float)InPercent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMusicPlayer::Reset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMusicPlayer", "Reset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMusicPlayer::PlayMusicWithDependencyAsset(const struct FSoftObjectPath& InDependencyMusicAssetPath, const struct FSoftObjectPath& InAudioMusicAssetPath, uint8_t bIs3DPlay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMusicPlayer", "PlayMusicWithDependencyAsset");
    struct
    {
        struct FSoftObjectPath InDependencyMusicAssetPath;
        struct FSoftObjectPath InAudioMusicAssetPath;
        uint8_t bIs3DPlay;
    } Parms{};
    Parms.InDependencyMusicAssetPath = (struct FSoftObjectPath)InDependencyMusicAssetPath;
    Parms.InAudioMusicAssetPath = (struct FSoftObjectPath)InAudioMusicAssetPath;
    Parms.bIs3DPlay = (uint8_t)bIs3DPlay;
    this->ProcessEvent(Func, &Parms);
}

void UDFMusicPlayer::PlayMusicByName(struct FName InMusicName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMusicPlayer", "PlayMusicByName");
    struct
    {
        struct FName InMusicName;
    } Parms{};
    Parms.InMusicName = (struct FName)InMusicName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMusicPlayer::PlayLobbyMusicByName(struct FName InMusicName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMusicPlayer", "PlayLobbyMusicByName");
    struct
    {
        struct FName InMusicName;
    } Parms{};
    Parms.InMusicName = (struct FName)InMusicName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMusicPlayer::OnMusicAssetLoadCompleted(const struct FSoftObjectPath& InAudioAssetPath, uint8_t bIs3DPlay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMusicPlayer", "OnMusicAssetLoadCompleted");
    struct
    {
        struct FSoftObjectPath InAudioAssetPath;
        uint8_t bIs3DPlay;
    } Parms{};
    Parms.InAudioAssetPath = (struct FSoftObjectPath)InAudioAssetPath;
    Parms.bIs3DPlay = (uint8_t)bIs3DPlay;
    this->ProcessEvent(Func, &Parms);
}

void UDFMusicPlayer::OnDependedMusicBeginPlay(const struct FSoftObjectPath& AudioAssetPath, int32_t PlayingId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMusicPlayer", "OnDependedMusicBeginPlay");
    struct
    {
        struct FSoftObjectPath AudioAssetPath;
        int32_t PlayingId;
    } Parms{};
    Parms.AudioAssetPath = (struct FSoftObjectPath)AudioAssetPath;
    Parms.PlayingId = (int32_t)PlayingId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMusicPlayer::OnDelayPlayMusic()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMusicPlayer", "OnDelayPlayMusic");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMusicPlayer::IsMusicPlaying(const struct FName& EvtName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMusicPlayer", "IsMusicPlaying");
    struct
    {
        struct FName EvtName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.EvtName = (struct FName)EvtName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMusicPlayer::InitAudioAsset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMusicPlayer", "InitAudioAsset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

float UDFMusicPlayer::GetMusicPlayPercent(const struct FName& EvtName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMusicPlayer", "GetMusicPlayPercent");
    struct
    {
        struct FName EvtName;
        float ReturnValue;
    } Parms{};
    Parms.EvtName = (struct FName)EvtName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMusicPlayer* UDFMusicPlayer::GetMusicPlayer(struct UObject* Context)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMusicPlayer", "GetMusicPlayer");
    struct
    {
        struct UObject* Context;
        struct UDFMusicPlayer* ReturnValue;
    } Parms{};
    Parms.Context = (struct UObject*)Context;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UDFMusicPlayer::GetMusicDuration(const struct FName& EvtName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMusicPlayer", "GetMusicDuration");
    struct
    {
        struct FName EvtName;
        float ReturnValue;
    } Parms{};
    Parms.EvtName = (struct FName)EvtName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UDFMusicPlayer::GetLobbyMusicPlayerActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMusicPlayer", "GetLobbyMusicPlayerActor");
    struct
    {
        struct AActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMusicPlayer::AsyncPlayMusic(const struct FSoftObjectPath& InAudioAssetPath, uint8_t bIs3DPlay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMusicPlayer", "AsyncPlayMusic");
    struct
    {
        struct FSoftObjectPath InAudioAssetPath;
        uint8_t bIs3DPlay;
    } Parms{};
    Parms.InAudioAssetPath = (struct FSoftObjectPath)InAudioAssetPath;
    Parms.bIs3DPlay = (uint8_t)bIs3DPlay;
    this->ProcessEvent(Func, &Parms);
}

// UDFMusicPlayWrapper
void UDFMusicPlayWrapper::UpdateLoadingId(uint64_t InLoadingId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMusicPlayWrapper", "UpdateLoadingId");
    struct
    {
        uint64_t InLoadingId;
    } Parms{};
    Parms.InLoadingId = (uint64_t)InLoadingId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMusicPlayWrapper::OnDependencyAudioBeginPlay(EGPEventCallbackType EventCallbackType, int32_t PlayingId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMusicPlayWrapper", "OnDependencyAudioBeginPlay");
    struct
    {
        enum EGPEventCallbackType EventCallbackType;
        int32_t PlayingId;
    } Parms{};
    Parms.EventCallbackType = (enum EGPEventCallbackType)EventCallbackType;
    Parms.PlayingId = (int32_t)PlayingId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMusicPlayWrapper::CancelLoading()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMusicPlayWrapper", "CancelLoading");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UWeaponFuncComponentAudio
void UWeaponFuncComponentAudio::UpdateMagazineDropConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFuncComponentAudio", "UpdateMagazineDropConfig");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UWeaponFuncComponentAudio::ShouldUseSkillAudioType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFuncComponentAudio", "ShouldUseSkillAudioType");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UWeaponFuncComponentAudio::SendAudioListenerEvent(EGPWeaponInnerEvent WeaponEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFuncComponentAudio", "SendAudioListenerEvent");
    struct
    {
        enum EGPWeaponInnerEvent WeaponEvent;
    } Parms{};
    Parms.WeaponEvent = (enum EGPWeaponInnerEvent)WeaponEvent;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFuncComponentAudio::OnWeaponStartFireFailed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFuncComponentAudio", "OnWeaponStartFireFailed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFuncComponentAudio::OnTimeDilationChanged(float InNewTimeDilation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFuncComponentAudio", "OnTimeDilationChanged");
    struct
    {
        float InNewTimeDilation;
    } Parms{};
    Parms.InNewTimeDilation = (float)InNewTimeDilation;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFuncComponentAudio::OnRoleLoadChanged(uint8_t CurrentRoleLoadValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFuncComponentAudio", "OnRoleLoadChanged");
    struct
    {
        uint8_t CurrentRoleLoadValue;
    } Parms{};
    Parms.CurrentRoleLoadValue = (uint8_t)CurrentRoleLoadValue;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFuncComponentAudio::OnProjectileHited(struct APawn* SourcePawn, struct FHitResult& HitReslut)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFuncComponentAudio", "OnProjectileHited");
    struct
    {
        struct APawn* SourcePawn;
        struct FHitResult HitReslut;
    } Parms{};
    Parms.SourcePawn = (struct APawn*)SourcePawn;
    this->ProcessEvent(Func, &Parms);
    HitReslut = Parms.HitReslut;
}

void UWeaponFuncComponentAudio::OnPlaySwitchZoomRateAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFuncComponentAudio", "OnPlaySwitchZoomRateAudio");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFuncComponentAudio::OnPlay3PWeaponChangeClipAudio(struct UAnimSequenceBase* AnimSeq, float PlayRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFuncComponentAudio", "OnPlay3PWeaponChangeClipAudio");
    struct
    {
        struct UAnimSequenceBase* AnimSeq;
        float PlayRate;
    } Parms{};
    Parms.AnimSeq = (struct UAnimSequenceBase*)AnimSeq;
    Parms.PlayRate = (float)PlayRate;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFuncComponentAudio::OnOpenWarTapeModeChange(uint8_t IsOpen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFuncComponentAudio", "OnOpenWarTapeModeChange");
    struct
    {
        uint8_t IsOpen;
    } Parms{};
    Parms.IsOpen = (uint8_t)IsOpen;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFuncComponentAudio::OnGameStateBegin(EDFMGamePlayMode NewGamePlayMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFuncComponentAudio", "OnGameStateBegin");
    struct
    {
        enum EDFMGamePlayMode NewGamePlayMode;
    } Parms{};
    Parms.NewGamePlayMode = (enum EDFMGamePlayMode)NewGamePlayMode;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFuncComponentAudio::OnGameAkMoved(float DistanceFromListener)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFuncComponentAudio", "OnGameAkMoved");
    struct
    {
        float DistanceFromListener;
    } Parms{};
    Parms.DistanceFromListener = (float)DistanceFromListener;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UWeaponFuncComponentAudio::IsTriggerBulletCrack()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFuncComponentAudio", "IsTriggerBulletCrack");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UWeaponFuncComponentAudio::CheckStopLoopFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFuncComponentAudio", "CheckStopLoopFire");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFuncComponentAudio::CheckStop1pReflFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFuncComponentAudio", "CheckStop1pReflFire");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// USlowBulletAudioComponent
void USlowBulletAudioComponent::OnBulletUsed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SlowBulletAudioComponent", "OnBulletUsed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UThrowableWeaponFuncComponentAudio
void UThrowableWeaponFuncComponentAudio::RefreshCacheByAddDataAsset(int32_t InPriority)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowableWeaponFuncComponentAudio", "RefreshCacheByAddDataAsset");
    struct
    {
        int32_t InPriority;
    } Parms{};
    Parms.InPriority = (int32_t)InPriority;
    this->ProcessEvent(Func, &Parms);
}

void UThrowableWeaponFuncComponentAudio::PlayPrefireLoopAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowableWeaponFuncComponentAudio", "PlayPrefireLoopAudio");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UThrowableWeaponFuncComponentAudio::PlayIdleLoopAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowableWeaponFuncComponentAudio", "PlayIdleLoopAudio");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UThrowableWeaponFuncComponentAudio::IsAutonomousOrObserve()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowableWeaponFuncComponentAudio", "IsAutonomousOrObserve");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UWeaponFuncComponentAudioElectricShock
void UWeaponFuncComponentAudioElectricShock::ElectricShockPreFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFuncComponentAudioElectricShock", "ElectricShockPreFire");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFuncComponentAudioElectricShock::ElectricShockEndFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFuncComponentAudioElectricShock", "ElectricShockEndFire");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFuncComponentAudioElectricShock::ElectricShockBeginFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFuncComponentAudioElectricShock", "ElectricShockBeginFire");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFuncComponentAudioElectricShock::DoEndFire3P()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFuncComponentAudioElectricShock", "DoEndFire3P");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFuncComponentAudioElectricShock::DoEndFire1P()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFuncComponentAudioElectricShock", "DoEndFire1P");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UWeaponFuncComponentAudioFlameThrower
void UWeaponFuncComponentAudioFlameThrower::FlameThrowerPreFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFuncComponentAudioFlameThrower", "FlameThrowerPreFire");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFuncComponentAudioFlameThrower::FlameThrowerEndFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFuncComponentAudioFlameThrower", "FlameThrowerEndFire");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFuncComponentAudioFlameThrower::FlameThrowerBeginFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFuncComponentAudioFlameThrower", "FlameThrowerBeginFire");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFuncComponentAudioFlameThrower::DoEndFire3P()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFuncComponentAudioFlameThrower", "DoEndFire3P");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFuncComponentAudioFlameThrower::DoEndFire1P()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFuncComponentAudioFlameThrower", "DoEndFire1P");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
