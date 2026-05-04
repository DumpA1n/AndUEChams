#include "GameplayAbilities.hpp"
#include "Engine.hpp"
#include "GameplayTags.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UGameplayAbility::* ----
void UGameplayAbility::SetShouldBlockOtherAbilities(uint8_t bShouldBlockAbilities)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "SetShouldBlockOtherAbilities");
    struct
    {
        uint8_t bShouldBlockAbilities;
    } Parms{};
    Parms.bShouldBlockAbilities = (uint8_t)bShouldBlockAbilities;
    this->ProcessEvent(Func, &Parms);
}

void UGameplayAbility::SetCanBeCanceled(uint8_t bCanBeCanceled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "SetCanBeCanceled");
    struct
    {
        uint8_t bCanBeCanceled;
    } Parms{};
    Parms.bCanBeCanceled = (uint8_t)bCanBeCanceled;
    this->ProcessEvent(Func, &Parms);
}

void UGameplayAbility::SendGameplayEvent(struct FGameplayTag EventTag, struct FGameplayEventData Payload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "SendGameplayEvent");
    struct
    {
        struct FGameplayTag EventTag;
        struct FGameplayEventData Payload;
    } Parms{};
    Parms.EventTag = (struct FGameplayTag)EventTag;
    Parms.Payload = (struct FGameplayEventData)Payload;
    this->ProcessEvent(Func, &Parms);
}

void UGameplayAbility::RemoveGrantedByEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "RemoveGrantedByEffect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGameplayAbility::MontageStop(float OverrideBlendOutTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "MontageStop");
    struct
    {
        float OverrideBlendOutTime;
    } Parms{};
    Parms.OverrideBlendOutTime = (float)OverrideBlendOutTime;
    this->ProcessEvent(Func, &Parms);
}

void UGameplayAbility::MontageSetNextSectionName(struct FName FromSectionName, struct FName ToSectionName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "MontageSetNextSectionName");
    struct
    {
        struct FName FromSectionName;
        struct FName ToSectionName;
    } Parms{};
    Parms.FromSectionName = (struct FName)FromSectionName;
    Parms.ToSectionName = (struct FName)ToSectionName;
    this->ProcessEvent(Func, &Parms);
}

void UGameplayAbility::MontageJumpToSection(struct FName SectionName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "MontageJumpToSection");
    struct
    {
        struct FName SectionName;
    } Parms{};
    Parms.SectionName = (struct FName)SectionName;
    this->ProcessEvent(Func, &Parms);
}

struct FGameplayAbilityTargetingLocationInfo UGameplayAbility::MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(struct FName SocketName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "MakeTargetLocationInfoFromOwnerSkeletalMeshComponent");
    struct
    {
        struct FName SocketName;
        struct FGameplayAbilityTargetingLocationInfo ReturnValue;
    } Parms{};
    Parms.SocketName = (struct FName)SocketName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGameplayAbilityTargetingLocationInfo UGameplayAbility::MakeTargetLocationInfoFromOwnerActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "MakeTargetLocationInfoFromOwnerActor");
    struct
    {
        struct FGameplayAbilityTargetingLocationInfo ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGameplayEffectSpecHandle UGameplayAbility::MakeOutgoingGameplayEffectSpec(struct UGameplayEffect* GameplayEffectClass, float Level)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "MakeOutgoingGameplayEffectSpec");
    struct
    {
        struct UGameplayEffect* GameplayEffectClass;
        float Level;
        struct FGameplayEffectSpecHandle ReturnValue;
    } Parms{};
    Parms.GameplayEffectClass = (struct UGameplayEffect*)GameplayEffectClass;
    Parms.Level = (float)Level;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameplayAbility::K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayEventData Payload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "K2_ShouldAbilityRespondToEvent");
    struct
    {
        struct FGameplayAbilityActorInfo ActorInfo;
        struct FGameplayEventData Payload;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ActorInfo = (struct FGameplayAbilityActorInfo)ActorInfo;
    Parms.Payload = (struct FGameplayEventData)Payload;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGameplayAbility::K2_RemoveGameplayCue(struct FGameplayTag GameplayCueTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "K2_RemoveGameplayCue");
    struct
    {
        struct FGameplayTag GameplayCueTag;
    } Parms{};
    Parms.GameplayCueTag = (struct FGameplayTag)GameplayCueTag;
    this->ProcessEvent(Func, &Parms);
}

void UGameplayAbility::K2_OnEndAbility(uint8_t bWasCancelled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "K2_OnEndAbility");
    struct
    {
        uint8_t bWasCancelled;
    } Parms{};
    Parms.bWasCancelled = (uint8_t)bWasCancelled;
    this->ProcessEvent(Func, &Parms);
}

void UGameplayAbility::K2_ExecuteGameplayCueWithParams(struct FGameplayTag GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "K2_ExecuteGameplayCueWithParams");
    struct
    {
        struct FGameplayTag GameplayCueTag;
        struct FGameplayCueParameters GameplayCueParameters;
    } Parms{};
    Parms.GameplayCueTag = (struct FGameplayTag)GameplayCueTag;
    Parms.GameplayCueParameters = (struct FGameplayCueParameters)GameplayCueParameters;
    this->ProcessEvent(Func, &Parms);
}

void UGameplayAbility::K2_ExecuteGameplayCue(struct FGameplayTag GameplayCueTag, struct FGameplayEffectContextHandle Context)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "K2_ExecuteGameplayCue");
    struct
    {
        struct FGameplayTag GameplayCueTag;
        struct FGameplayEffectContextHandle Context;
    } Parms{};
    Parms.GameplayCueTag = (struct FGameplayTag)GameplayCueTag;
    Parms.Context = (struct FGameplayEffectContextHandle)Context;
    this->ProcessEvent(Func, &Parms);
}

void UGameplayAbility::K2_EndAbility()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "K2_EndAbility");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGameplayAbility::K2_CommitExecute()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "K2_CommitExecute");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGameplayAbility::K2_CommitAbilityCost(uint8_t BroadcastCommitEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "K2_CommitAbilityCost");
    struct
    {
        uint8_t BroadcastCommitEvent;
        uint8_t ReturnValue;
    } Parms{};
    Parms.BroadcastCommitEvent = (uint8_t)BroadcastCommitEvent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameplayAbility::K2_CommitAbilityCooldown(uint8_t BroadcastCommitEvent, uint8_t ForceCooldown)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "K2_CommitAbilityCooldown");
    struct
    {
        uint8_t BroadcastCommitEvent;
        uint8_t ForceCooldown;
        uint8_t ReturnValue;
    } Parms{};
    Parms.BroadcastCommitEvent = (uint8_t)BroadcastCommitEvent;
    Parms.ForceCooldown = (uint8_t)ForceCooldown;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameplayAbility::K2_CommitAbility()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "K2_CommitAbility");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameplayAbility::K2_CheckAbilityCost()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "K2_CheckAbilityCost");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameplayAbility::K2_CheckAbilityCooldown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "K2_CheckAbilityCooldown");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGameplayAbility::K2_CancelAbility()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "K2_CancelAbility");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGameplayAbility::K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayTagContainer& RelevantTags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "K2_CanActivateAbility");
    struct
    {
        struct FGameplayAbilityActorInfo ActorInfo;
        struct FGameplayTagContainer RelevantTags;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ActorInfo = (struct FGameplayAbilityActorInfo)ActorInfo;
    this->ProcessEvent(Func, &Parms);
    RelevantTags = Parms.RelevantTags;
    return Parms.ReturnValue;
}

struct TArray<struct FActiveGameplayEffectHandle> UGameplayAbility::K2_ApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle EffectSpecHandle, struct FGameplayAbilityTargetDataHandle TargetData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "K2_ApplyGameplayEffectSpecToTarget");
    struct
    {
        struct FGameplayEffectSpecHandle EffectSpecHandle;
        struct FGameplayAbilityTargetDataHandle TargetData;
        struct TArray<struct FActiveGameplayEffectHandle> ReturnValue;
    } Parms{};
    Parms.EffectSpecHandle = (struct FGameplayEffectSpecHandle)EffectSpecHandle;
    Parms.TargetData = (struct FGameplayAbilityTargetDataHandle)TargetData;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FActiveGameplayEffectHandle UGameplayAbility::K2_ApplyGameplayEffectSpecToOwner(struct FGameplayEffectSpecHandle EffectSpecHandle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "K2_ApplyGameplayEffectSpecToOwner");
    struct
    {
        struct FGameplayEffectSpecHandle EffectSpecHandle;
        struct FActiveGameplayEffectHandle ReturnValue;
    } Parms{};
    Parms.EffectSpecHandle = (struct FGameplayEffectSpecHandle)EffectSpecHandle;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGameplayAbility::K2_AddGameplayCueWithParams(struct FGameplayTag GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameter, uint8_t bRemoveOnAbilityEnd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "K2_AddGameplayCueWithParams");
    struct
    {
        struct FGameplayTag GameplayCueTag;
        struct FGameplayCueParameters GameplayCueParameter;
        uint8_t bRemoveOnAbilityEnd;
    } Parms{};
    Parms.GameplayCueTag = (struct FGameplayTag)GameplayCueTag;
    Parms.GameplayCueParameter = (struct FGameplayCueParameters)GameplayCueParameter;
    Parms.bRemoveOnAbilityEnd = (uint8_t)bRemoveOnAbilityEnd;
    this->ProcessEvent(Func, &Parms);
}

void UGameplayAbility::K2_AddGameplayCue(struct FGameplayTag GameplayCueTag, struct FGameplayEffectContextHandle Context, uint8_t bRemoveOnAbilityEnd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "K2_AddGameplayCue");
    struct
    {
        struct FGameplayTag GameplayCueTag;
        struct FGameplayEffectContextHandle Context;
        uint8_t bRemoveOnAbilityEnd;
    } Parms{};
    Parms.GameplayCueTag = (struct FGameplayTag)GameplayCueTag;
    Parms.Context = (struct FGameplayEffectContextHandle)Context;
    Parms.bRemoveOnAbilityEnd = (uint8_t)bRemoveOnAbilityEnd;
    this->ProcessEvent(Func, &Parms);
}

void UGameplayAbility::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "K2_ActivateAbilityFromEvent");
    struct
    {
        struct FGameplayEventData EventData;
    } Parms{};
    Parms.EventData = (struct FGameplayEventData)EventData;
    this->ProcessEvent(Func, &Parms);
}

void UGameplayAbility::K2_ActivateAbility()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "K2_ActivateAbility");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGameplayAbility::InvalidateClientPredictionKey()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "InvalidateClientPredictionKey");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct USkeletalMeshComponent* UGameplayAbility::GetOwningComponentFromActorInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "GetOwningComponentFromActorInfo");
    struct
    {
        struct USkeletalMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UGameplayAbility::GetOwningActorFromActorInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "GetOwningActorFromActorInfo");
    struct
    {
        struct AActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGameplayEffectContextHandle UGameplayAbility::GetGrantedByEffectContext()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "GetGrantedByEffectContext");
    struct
    {
        struct FGameplayEffectContextHandle ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UGameplayAbility::GetCurrentSourceObject()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "GetCurrentSourceObject");
    struct
    {
        struct UObject* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAnimMontage* UGameplayAbility::GetCurrentMontage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "GetCurrentMontage");
    struct
    {
        struct UAnimMontage* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGameplayAbility::GetCooldownTimeRemaining()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "GetCooldownTimeRemaining");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGameplayEffectContextHandle UGameplayAbility::GetContextFromOwner(struct FGameplayAbilityTargetDataHandle OptionalTargetData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "GetContextFromOwner");
    struct
    {
        struct FGameplayAbilityTargetDataHandle OptionalTargetData;
        struct FGameplayEffectContextHandle ReturnValue;
    } Parms{};
    Parms.OptionalTargetData = (struct FGameplayAbilityTargetDataHandle)OptionalTargetData;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UGameplayAbility::GetAvatarActorFromActorInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "GetAvatarActorFromActorInfo");
    struct
    {
        struct AActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGameplayAbilityActorInfo UGameplayAbility::GetActorInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "GetActorInfo");
    struct
    {
        struct FGameplayAbilityActorInfo ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAbilitySystemComponent* UGameplayAbility::GetAbilitySystemComponentFromActorInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "GetAbilitySystemComponentFromActorInfo");
    struct
    {
        struct UAbilitySystemComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGameplayAbility::GetAbilityLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "GetAbilityLevel");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGameplayAbility::EndTaskByInstanceName(struct FName InstanceName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "EndTaskByInstanceName");
    struct
    {
        struct FName InstanceName;
    } Parms{};
    Parms.InstanceName = (struct FName)InstanceName;
    this->ProcessEvent(Func, &Parms);
}

void UGameplayAbility::EndAbilityState(struct FName OptionalStateNameToEnd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "EndAbilityState");
    struct
    {
        struct FName OptionalStateNameToEnd;
    } Parms{};
    Parms.OptionalStateNameToEnd = (struct FName)OptionalStateNameToEnd;
    this->ProcessEvent(Func, &Parms);
}

void UGameplayAbility::ConfirmTaskByInstanceName(struct FName InstanceName, uint8_t bEndTask)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "ConfirmTaskByInstanceName");
    struct
    {
        struct FName InstanceName;
        uint8_t bEndTask;
    } Parms{};
    Parms.InstanceName = (struct FName)InstanceName;
    Parms.bEndTask = (uint8_t)bEndTask;
    this->ProcessEvent(Func, &Parms);
}

void UGameplayAbility::CancelTaskByInstanceName(struct FName InstanceName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "CancelTaskByInstanceName");
    struct
    {
        struct FName InstanceName;
    } Parms{};
    Parms.InstanceName = (struct FName)InstanceName;
    this->ProcessEvent(Func, &Parms);
}

void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithHandle(struct FActiveGameplayEffectHandle Handle, int32_t StacksToRemove)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "BP_RemoveGameplayEffectFromOwnerWithHandle");
    struct
    {
        struct FActiveGameplayEffectHandle Handle;
        int32_t StacksToRemove;
    } Parms{};
    Parms.Handle = (struct FActiveGameplayEffectHandle)Handle;
    Parms.StacksToRemove = (int32_t)StacksToRemove;
    this->ProcessEvent(Func, &Parms);
}

void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithGrantedTags(struct FGameplayTagContainer WithGrantedTags, int32_t StacksToRemove)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "BP_RemoveGameplayEffectFromOwnerWithGrantedTags");
    struct
    {
        struct FGameplayTagContainer WithGrantedTags;
        int32_t StacksToRemove;
    } Parms{};
    Parms.WithGrantedTags = (struct FGameplayTagContainer)WithGrantedTags;
    Parms.StacksToRemove = (int32_t)StacksToRemove;
    this->ProcessEvent(Func, &Parms);
}

void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithAssetTags(struct FGameplayTagContainer WithAssetTags, int32_t StacksToRemove)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "BP_RemoveGameplayEffectFromOwnerWithAssetTags");
    struct
    {
        struct FGameplayTagContainer WithAssetTags;
        int32_t StacksToRemove;
    } Parms{};
    Parms.WithAssetTags = (struct FGameplayTagContainer)WithAssetTags;
    Parms.StacksToRemove = (int32_t)StacksToRemove;
    this->ProcessEvent(Func, &Parms);
}

struct TArray<struct FActiveGameplayEffectHandle> UGameplayAbility::BP_ApplyGameplayEffectToTarget(struct FGameplayAbilityTargetDataHandle TargetData, struct UGameplayEffect* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "BP_ApplyGameplayEffectToTarget");
    struct
    {
        struct FGameplayAbilityTargetDataHandle TargetData;
        struct UGameplayEffect* GameplayEffectClass;
        int32_t GameplayEffectLevel;
        int32_t Stacks;
        struct TArray<struct FActiveGameplayEffectHandle> ReturnValue;
    } Parms{};
    Parms.TargetData = (struct FGameplayAbilityTargetDataHandle)TargetData;
    Parms.GameplayEffectClass = (struct UGameplayEffect*)GameplayEffectClass;
    Parms.GameplayEffectLevel = (int32_t)GameplayEffectLevel;
    Parms.Stacks = (int32_t)Stacks;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FActiveGameplayEffectHandle UGameplayAbility::BP_ApplyGameplayEffectToOwner(struct UGameplayEffect* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbility", "BP_ApplyGameplayEffectToOwner");
    struct
    {
        struct UGameplayEffect* GameplayEffectClass;
        int32_t GameplayEffectLevel;
        int32_t Stacks;
        struct FActiveGameplayEffectHandle ReturnValue;
    } Parms{};
    Parms.GameplayEffectClass = (struct UGameplayEffect*)GameplayEffectClass;
    Parms.GameplayEffectLevel = (int32_t)GameplayEffectLevel;
    Parms.Stacks = (int32_t)Stacks;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UAbilitySystemGlobals::* ----
void UAbilitySystemGlobals::ToggleIgnoreAbilitySystemCosts()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemGlobals", "ToggleIgnoreAbilitySystemCosts");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemGlobals::ToggleIgnoreAbilitySystemCooldowns()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemGlobals", "ToggleIgnoreAbilitySystemCooldowns");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UAbilitySystemComponent::* ----
uint8_t UAbilitySystemComponent::TryActivateAbilityByClass(struct UGameplayAbility* InAbilityToActivate, uint8_t bAllowRemoteActivation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "TryActivateAbilityByClass");
    struct
    {
        struct UGameplayAbility* InAbilityToActivate;
        uint8_t bAllowRemoteActivation;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InAbilityToActivate = (struct UGameplayAbility*)InAbilityToActivate;
    Parms.bAllowRemoteActivation = (uint8_t)bAllowRemoteActivation;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAbilitySystemComponent::TryActivateAbilitiesByTag(const struct FGameplayTagContainer& GameplayTagContainer, uint8_t bAllowRemoteActivation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "TryActivateAbilitiesByTag");
    struct
    {
        struct FGameplayTagContainer GameplayTagContainer;
        uint8_t bAllowRemoteActivation;
        uint8_t ReturnValue;
    } Parms{};
    Parms.GameplayTagContainer = (struct FGameplayTagContainer)GameplayTagContainer;
    Parms.bAllowRemoteActivation = (uint8_t)bAllowRemoteActivation;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAbilitySystemComponent::TargetConfirm()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "TargetConfirm");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::TargetCancel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "TargetCancel");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::SetUserAbilityActivationInhibited(uint8_t NewInhibit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "SetUserAbilityActivationInhibited");
    struct
    {
        uint8_t NewInhibit;
    } Parms{};
    Parms.NewInhibit = (uint8_t)NewInhibit;
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::SetActiveGameplayEffectLevelUsingQuery(struct FGameplayEffectQuery Query, int32_t NewLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "SetActiveGameplayEffectLevelUsingQuery");
    struct
    {
        struct FGameplayEffectQuery Query;
        int32_t NewLevel;
    } Parms{};
    Parms.Query = (struct FGameplayEffectQuery)Query;
    Parms.NewLevel = (int32_t)NewLevel;
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::SetActiveGameplayEffectLevel(struct FActiveGameplayEffectHandle ActiveHandle, int32_t NewLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "SetActiveGameplayEffectLevel");
    struct
    {
        struct FActiveGameplayEffectHandle ActiveHandle;
        int32_t NewLevel;
    } Parms{};
    Parms.ActiveHandle = (struct FActiveGameplayEffectHandle)ActiveHandle;
    Parms.NewLevel = (int32_t)NewLevel;
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::ServerTryActivateAbilityWithEventData(struct FGameplayAbilitySpecHandle AbilityToActivate, uint8_t InputPressed, struct FPredictionKey PredictionKey, struct FGameplayEventData TriggerEventData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "ServerTryActivateAbilityWithEventData");
    struct
    {
        struct FGameplayAbilitySpecHandle AbilityToActivate;
        uint8_t InputPressed;
        struct FPredictionKey PredictionKey;
        struct FGameplayEventData TriggerEventData;
    } Parms{};
    Parms.AbilityToActivate = (struct FGameplayAbilitySpecHandle)AbilityToActivate;
    Parms.InputPressed = (uint8_t)InputPressed;
    Parms.PredictionKey = (struct FPredictionKey)PredictionKey;
    Parms.TriggerEventData = (struct FGameplayEventData)TriggerEventData;
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::ServerTryActivateAbility(struct FGameplayAbilitySpecHandle AbilityToActivate, uint8_t InputPressed, struct FPredictionKey PredictionKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "ServerTryActivateAbility");
    struct
    {
        struct FGameplayAbilitySpecHandle AbilityToActivate;
        uint8_t InputPressed;
        struct FPredictionKey PredictionKey;
    } Parms{};
    Parms.AbilityToActivate = (struct FGameplayAbilitySpecHandle)AbilityToActivate;
    Parms.InputPressed = (uint8_t)InputPressed;
    Parms.PredictionKey = (struct FPredictionKey)PredictionKey;
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::ServerSetReplicatedTargetDataCancelled(struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FPredictionKey CurrentPredictionKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "ServerSetReplicatedTargetDataCancelled");
    struct
    {
        struct FGameplayAbilitySpecHandle AbilityHandle;
        struct FPredictionKey AbilityOriginalPredictionKey;
        struct FPredictionKey CurrentPredictionKey;
    } Parms{};
    Parms.AbilityHandle = (struct FGameplayAbilitySpecHandle)AbilityHandle;
    Parms.AbilityOriginalPredictionKey = (struct FPredictionKey)AbilityOriginalPredictionKey;
    Parms.CurrentPredictionKey = (struct FPredictionKey)CurrentPredictionKey;
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::ServerSetReplicatedTargetData(struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FGameplayAbilityTargetDataHandle ReplicatedTargetDataHandle, struct FGameplayTag ApplicationTag, struct FPredictionKey CurrentPredictionKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "ServerSetReplicatedTargetData");
    struct
    {
        struct FGameplayAbilitySpecHandle AbilityHandle;
        struct FPredictionKey AbilityOriginalPredictionKey;
        struct FGameplayAbilityTargetDataHandle ReplicatedTargetDataHandle;
        struct FGameplayTag ApplicationTag;
        struct FPredictionKey CurrentPredictionKey;
    } Parms{};
    Parms.AbilityHandle = (struct FGameplayAbilitySpecHandle)AbilityHandle;
    Parms.AbilityOriginalPredictionKey = (struct FPredictionKey)AbilityOriginalPredictionKey;
    Parms.ReplicatedTargetDataHandle = (struct FGameplayAbilityTargetDataHandle)ReplicatedTargetDataHandle;
    Parms.ApplicationTag = (struct FGameplayTag)ApplicationTag;
    Parms.CurrentPredictionKey = (struct FPredictionKey)CurrentPredictionKey;
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::ServerSetReplicatedEventWithPayload(EAbilityGenericReplicatedEvent EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FPredictionKey CurrentPredictionKey, struct FVector_NetQuantize100 VectorPayload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "ServerSetReplicatedEventWithPayload");
    struct
    {
        enum EAbilityGenericReplicatedEvent EventType;
        struct FGameplayAbilitySpecHandle AbilityHandle;
        struct FPredictionKey AbilityOriginalPredictionKey;
        struct FPredictionKey CurrentPredictionKey;
        struct FVector_NetQuantize100 VectorPayload;
    } Parms{};
    Parms.EventType = (enum EAbilityGenericReplicatedEvent)EventType;
    Parms.AbilityHandle = (struct FGameplayAbilitySpecHandle)AbilityHandle;
    Parms.AbilityOriginalPredictionKey = (struct FPredictionKey)AbilityOriginalPredictionKey;
    Parms.CurrentPredictionKey = (struct FPredictionKey)CurrentPredictionKey;
    Parms.VectorPayload = (struct FVector_NetQuantize100)VectorPayload;
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::ServerSetReplicatedEvent(EAbilityGenericReplicatedEvent EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FPredictionKey CurrentPredictionKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "ServerSetReplicatedEvent");
    struct
    {
        enum EAbilityGenericReplicatedEvent EventType;
        struct FGameplayAbilitySpecHandle AbilityHandle;
        struct FPredictionKey AbilityOriginalPredictionKey;
        struct FPredictionKey CurrentPredictionKey;
    } Parms{};
    Parms.EventType = (enum EAbilityGenericReplicatedEvent)EventType;
    Parms.AbilityHandle = (struct FGameplayAbilitySpecHandle)AbilityHandle;
    Parms.AbilityOriginalPredictionKey = (struct FPredictionKey)AbilityOriginalPredictionKey;
    Parms.CurrentPredictionKey = (struct FPredictionKey)CurrentPredictionKey;
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::ServerSetInputReleased(struct FGameplayAbilitySpecHandle AbilityHandle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "ServerSetInputReleased");
    struct
    {
        struct FGameplayAbilitySpecHandle AbilityHandle;
    } Parms{};
    Parms.AbilityHandle = (struct FGameplayAbilitySpecHandle)AbilityHandle;
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::ServerSetInputPressed(struct FGameplayAbilitySpecHandle AbilityHandle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "ServerSetInputPressed");
    struct
    {
        struct FGameplayAbilitySpecHandle AbilityHandle;
    } Parms{};
    Parms.AbilityHandle = (struct FGameplayAbilitySpecHandle)AbilityHandle;
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::ServerPrintDebug_RequestWithStrings(struct TArray<struct FString> Strings)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "ServerPrintDebug_RequestWithStrings");
    struct
    {
        struct TArray<struct FString> Strings;
    } Parms{};
    Parms.Strings = (struct TArray<struct FString>)Strings;
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::ServerPrintDebug_Request()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "ServerPrintDebug_Request");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::ServerEndAbility(struct FGameplayAbilitySpecHandle AbilityToEnd, struct FGameplayAbilityActivationInfo ActivationInfo, struct FPredictionKey PredictionKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "ServerEndAbility");
    struct
    {
        struct FGameplayAbilitySpecHandle AbilityToEnd;
        struct FGameplayAbilityActivationInfo ActivationInfo;
        struct FPredictionKey PredictionKey;
    } Parms{};
    Parms.AbilityToEnd = (struct FGameplayAbilitySpecHandle)AbilityToEnd;
    Parms.ActivationInfo = (struct FGameplayAbilityActivationInfo)ActivationInfo;
    Parms.PredictionKey = (struct FPredictionKey)PredictionKey;
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::ServerCurrentMontageSetPlayRate(struct UAnimMontage* ClientAnimMontage, float InPlayRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "ServerCurrentMontageSetPlayRate");
    struct
    {
        struct UAnimMontage* ClientAnimMontage;
        float InPlayRate;
    } Parms{};
    Parms.ClientAnimMontage = (struct UAnimMontage*)ClientAnimMontage;
    Parms.InPlayRate = (float)InPlayRate;
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::ServerCurrentMontageSetNextSectionName(struct UAnimMontage* ClientAnimMontage, float ClientPosition, struct FName SectionName, struct FName NextSectionName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "ServerCurrentMontageSetNextSectionName");
    struct
    {
        struct UAnimMontage* ClientAnimMontage;
        float ClientPosition;
        struct FName SectionName;
        struct FName NextSectionName;
    } Parms{};
    Parms.ClientAnimMontage = (struct UAnimMontage*)ClientAnimMontage;
    Parms.ClientPosition = (float)ClientPosition;
    Parms.SectionName = (struct FName)SectionName;
    Parms.NextSectionName = (struct FName)NextSectionName;
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::ServerCurrentMontageJumpToSectionName(struct UAnimMontage* ClientAnimMontage, struct FName SectionName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "ServerCurrentMontageJumpToSectionName");
    struct
    {
        struct UAnimMontage* ClientAnimMontage;
        struct FName SectionName;
    } Parms{};
    Parms.ClientAnimMontage = (struct UAnimMontage*)ClientAnimMontage;
    Parms.SectionName = (struct FName)SectionName;
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::ServerCancelAbility(struct FGameplayAbilitySpecHandle AbilityToCancel, struct FGameplayAbilityActivationInfo ActivationInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "ServerCancelAbility");
    struct
    {
        struct FGameplayAbilitySpecHandle AbilityToCancel;
        struct FGameplayAbilityActivationInfo ActivationInfo;
    } Parms{};
    Parms.AbilityToCancel = (struct FGameplayAbilitySpecHandle)AbilityToCancel;
    Parms.ActivationInfo = (struct FGameplayAbilityActivationInfo)ActivationInfo;
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::ServerAbilityRPCBatch(struct FServerAbilityRPCBatch BatchInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "ServerAbilityRPCBatch");
    struct
    {
        struct FServerAbilityRPCBatch BatchInfo;
    } Parms{};
    Parms.BatchInfo = (struct FServerAbilityRPCBatch)BatchInfo;
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::RemoveActiveGameplayEffectBySourceEffect(struct UGameplayEffect* GameplayEffect, struct UAbilitySystemComponent* InstigatorAbilitySystemComponent, int32_t StacksToRemove)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "RemoveActiveGameplayEffectBySourceEffect");
    struct
    {
        struct UGameplayEffect* GameplayEffect;
        struct UAbilitySystemComponent* InstigatorAbilitySystemComponent;
        int32_t StacksToRemove;
    } Parms{};
    Parms.GameplayEffect = (struct UGameplayEffect*)GameplayEffect;
    Parms.InstigatorAbilitySystemComponent = (struct UAbilitySystemComponent*)InstigatorAbilitySystemComponent;
    Parms.StacksToRemove = (int32_t)StacksToRemove;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UAbilitySystemComponent::RemoveActiveGameplayEffect(struct FActiveGameplayEffectHandle Handle, int32_t StacksToRemove)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "RemoveActiveGameplayEffect");
    struct
    {
        struct FActiveGameplayEffectHandle Handle;
        int32_t StacksToRemove;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Handle = (struct FActiveGameplayEffectHandle)Handle;
    Parms.StacksToRemove = (int32_t)StacksToRemove;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAbilitySystemComponent::RemoveActiveEffectsWithTags(struct FGameplayTagContainer Tags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "RemoveActiveEffectsWithTags");
    struct
    {
        struct FGameplayTagContainer Tags;
        int32_t ReturnValue;
    } Parms{};
    Parms.Tags = (struct FGameplayTagContainer)Tags;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAbilitySystemComponent::RemoveActiveEffectsWithSourceTags(struct FGameplayTagContainer Tags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "RemoveActiveEffectsWithSourceTags");
    struct
    {
        struct FGameplayTagContainer Tags;
        int32_t ReturnValue;
    } Parms{};
    Parms.Tags = (struct FGameplayTagContainer)Tags;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAbilitySystemComponent::RemoveActiveEffectsWithGrantedTags(struct FGameplayTagContainer Tags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "RemoveActiveEffectsWithGrantedTags");
    struct
    {
        struct FGameplayTagContainer Tags;
        int32_t ReturnValue;
    } Parms{};
    Parms.Tags = (struct FGameplayTagContainer)Tags;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAbilitySystemComponent::RemoveActiveEffectsWithAppliedTags(struct FGameplayTagContainer Tags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "RemoveActiveEffectsWithAppliedTags");
    struct
    {
        struct FGameplayTagContainer Tags;
        int32_t ReturnValue;
    } Parms{};
    Parms.Tags = (struct FGameplayTagContainer)Tags;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAbilitySystemComponent::OnRep_ServerDebugString()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "OnRep_ServerDebugString");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::OnRep_ReplicatedAnimMontage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "OnRep_ReplicatedAnimMontage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::OnRep_OwningActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "OnRep_OwningActor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::OnRep_ClientDebugString()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "OnRep_ClientDebugString");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::OnRep_ActivateAbilities()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "OnRep_ActivateAbilities");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCuesExecuted_WithParams(struct FGameplayTagContainer GameplayCueTags, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCuesExecuted_WithParams");
    struct
    {
        struct FGameplayTagContainer GameplayCueTags;
        struct FPredictionKey PredictionKey;
        struct FGameplayCueParameters GameplayCueParameters;
    } Parms{};
    Parms.GameplayCueTags = (struct FGameplayTagContainer)GameplayCueTags;
    Parms.PredictionKey = (struct FPredictionKey)PredictionKey;
    Parms.GameplayCueParameters = (struct FGameplayCueParameters)GameplayCueParameters;
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCuesExecuted(struct FGameplayTagContainer GameplayCueTags, struct FPredictionKey PredictionKey, struct FGameplayEffectContextHandle EffectContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCuesExecuted");
    struct
    {
        struct FGameplayTagContainer GameplayCueTags;
        struct FPredictionKey PredictionKey;
        struct FGameplayEffectContextHandle EffectContext;
    } Parms{};
    Parms.GameplayCueTags = (struct FGameplayTagContainer)GameplayCueTags;
    Parms.PredictionKey = (struct FPredictionKey)PredictionKey;
    Parms.EffectContext = (struct FGameplayEffectContextHandle)EffectContext;
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(struct FGameplayTagContainer GameplayCueTags, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams");
    struct
    {
        struct FGameplayTagContainer GameplayCueTags;
        struct FPredictionKey PredictionKey;
        struct FGameplayCueParameters GameplayCueParameters;
    } Parms{};
    Parms.GameplayCueTags = (struct FGameplayTagContainer)GameplayCueTags;
    Parms.PredictionKey = (struct FPredictionKey)PredictionKey;
    Parms.GameplayCueParameters = (struct FGameplayCueParameters)GameplayCueParameters;
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted_WithParams(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCueExecuted_WithParams");
    struct
    {
        struct FGameplayTag GameplayCueTag;
        struct FPredictionKey PredictionKey;
        struct FGameplayCueParameters GameplayCueParameters;
    } Parms{};
    Parms.GameplayCueTag = (struct FGameplayTag)GameplayCueTag;
    Parms.PredictionKey = (struct FPredictionKey)PredictionKey;
    Parms.GameplayCueParameters = (struct FGameplayCueParameters)GameplayCueParameters;
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted_FromSpec(struct FGameplayEffectSpecForRPC Spec, struct FPredictionKey PredictionKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCueExecuted_FromSpec");
    struct
    {
        struct FGameplayEffectSpecForRPC Spec;
        struct FPredictionKey PredictionKey;
    } Parms{};
    Parms.Spec = (struct FGameplayEffectSpecForRPC)Spec;
    Parms.PredictionKey = (struct FPredictionKey)PredictionKey;
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayEffectContextHandle EffectContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCueExecuted");
    struct
    {
        struct FGameplayTag GameplayCueTag;
        struct FPredictionKey PredictionKey;
        struct FGameplayEffectContextHandle EffectContext;
    } Parms{};
    Parms.GameplayCueTag = (struct FGameplayTag)GameplayCueTag;
    Parms.PredictionKey = (struct FPredictionKey)PredictionKey;
    Parms.EffectContext = (struct FGameplayEffectContextHandle)EffectContext;
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams");
    struct
    {
        struct FGameplayTag GameplayCueTag;
        struct FPredictionKey PredictionKey;
        struct FGameplayCueParameters GameplayCueParameters;
    } Parms{};
    Parms.GameplayCueTag = (struct FGameplayTag)GameplayCueTag;
    Parms.PredictionKey = (struct FPredictionKey)PredictionKey;
    Parms.GameplayCueParameters = (struct FGameplayCueParameters)GameplayCueParameters;
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(struct FGameplayEffectSpecForRPC Spec, struct FPredictionKey PredictionKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec");
    struct
    {
        struct FGameplayEffectSpecForRPC Spec;
        struct FPredictionKey PredictionKey;
    } Parms{};
    Parms.Spec = (struct FGameplayEffectSpecForRPC)Spec;
    Parms.PredictionKey = (struct FPredictionKey)PredictionKey;
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAdded_WithParams(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayCueParameters Parameters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCueAdded_WithParams");
    struct
    {
        struct FGameplayTag GameplayCueTag;
        struct FPredictionKey PredictionKey;
        struct FGameplayCueParameters Parameters;
    } Parms{};
    Parms.GameplayCueTag = (struct FGameplayTag)GameplayCueTag;
    Parms.PredictionKey = (struct FPredictionKey)PredictionKey;
    Parms.Parameters = (struct FGameplayCueParameters)Parameters;
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAdded(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayEffectContextHandle EffectContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCueAdded");
    struct
    {
        struct FGameplayTag GameplayCueTag;
        struct FPredictionKey PredictionKey;
        struct FGameplayEffectContextHandle EffectContext;
    } Parms{};
    Parms.GameplayCueTag = (struct FGameplayTag)GameplayCueTag;
    Parms.PredictionKey = (struct FPredictionKey)PredictionKey;
    Parms.EffectContext = (struct FGameplayEffectContextHandle)EffectContext;
    this->ProcessEvent(Func, &Parms);
}

struct FGameplayEffectSpecHandle UAbilitySystemComponent::MakeOutgoingSpec(struct UGameplayEffect* GameplayEffectClass, float Level, struct FGameplayEffectContextHandle Context)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "MakeOutgoingSpec");
    struct
    {
        struct UGameplayEffect* GameplayEffectClass;
        float Level;
        struct FGameplayEffectContextHandle Context;
        struct FGameplayEffectSpecHandle ReturnValue;
    } Parms{};
    Parms.GameplayEffectClass = (struct UGameplayEffect*)GameplayEffectClass;
    Parms.Level = (float)Level;
    Parms.Context = (struct FGameplayEffectContextHandle)Context;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGameplayEffectContextHandle UAbilitySystemComponent::MakeEffectContext()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "MakeEffectContext");
    struct
    {
        struct FGameplayEffectContextHandle ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAbilitySystemComponent::K2_InitStats(struct UAttributeSet* Attributes, struct UDataTable* DataTable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "K2_InitStats");
    struct
    {
        struct UAttributeSet* Attributes;
        struct UDataTable* DataTable;
    } Parms{};
    Parms.Attributes = (struct UAttributeSet*)Attributes;
    Parms.DataTable = (struct UDataTable*)DataTable;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UAbilitySystemComponent::IsGameplayCueActive(struct FGameplayTag GameplayCueTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "IsGameplayCueActive");
    struct
    {
        struct FGameplayTag GameplayCueTag;
        uint8_t ReturnValue;
    } Parms{};
    Parms.GameplayCueTag = (struct FGameplayTag)GameplayCueTag;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAbilitySystemComponent::GetUserAbilityActivationInhibited()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "GetUserAbilityActivationInhibited");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UAbilitySystemComponent::GetGameplayEffectMagnitude(struct FActiveGameplayEffectHandle Handle, struct FGameplayAttribute Attribute)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "GetGameplayEffectMagnitude");
    struct
    {
        struct FActiveGameplayEffectHandle Handle;
        struct FGameplayAttribute Attribute;
        float ReturnValue;
    } Parms{};
    Parms.Handle = (struct FActiveGameplayEffectHandle)Handle;
    Parms.Attribute = (struct FGameplayAttribute)Attribute;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAbilitySystemComponent::GetGameplayEffectCount(struct UGameplayEffect* SourceGameplayEffect, struct UAbilitySystemComponent* OptionalInstigatorFilterComponent, uint8_t bEnforceOnGoingCheck)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "GetGameplayEffectCount");
    struct
    {
        struct UGameplayEffect* SourceGameplayEffect;
        struct UAbilitySystemComponent* OptionalInstigatorFilterComponent;
        uint8_t bEnforceOnGoingCheck;
        int32_t ReturnValue;
    } Parms{};
    Parms.SourceGameplayEffect = (struct UGameplayEffect*)SourceGameplayEffect;
    Parms.OptionalInstigatorFilterComponent = (struct UAbilitySystemComponent*)OptionalInstigatorFilterComponent;
    Parms.bEnforceOnGoingCheck = (uint8_t)bEnforceOnGoingCheck;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FActiveGameplayEffectHandle> UAbilitySystemComponent::GetActiveEffects(const struct FGameplayEffectQuery& Query)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "GetActiveEffects");
    struct
    {
        struct FGameplayEffectQuery Query;
        struct TArray<struct FActiveGameplayEffectHandle> ReturnValue;
    } Parms{};
    Parms.Query = (struct FGameplayEffectQuery)Query;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAbilitySystemComponent::ClientTryActivateAbility(struct FGameplayAbilitySpecHandle AbilityToActivate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "ClientTryActivateAbility");
    struct
    {
        struct FGameplayAbilitySpecHandle AbilityToActivate;
    } Parms{};
    Parms.AbilityToActivate = (struct FGameplayAbilitySpecHandle)AbilityToActivate;
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::ClientSetReplicatedEvent(EAbilityGenericReplicatedEvent EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "ClientSetReplicatedEvent");
    struct
    {
        enum EAbilityGenericReplicatedEvent EventType;
        struct FGameplayAbilitySpecHandle AbilityHandle;
        struct FPredictionKey AbilityOriginalPredictionKey;
    } Parms{};
    Parms.EventType = (enum EAbilityGenericReplicatedEvent)EventType;
    Parms.AbilityHandle = (struct FGameplayAbilitySpecHandle)AbilityHandle;
    Parms.AbilityOriginalPredictionKey = (struct FPredictionKey)AbilityOriginalPredictionKey;
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::ClientPrintDebug_Response(struct TArray<struct FString> Strings, int32_t GameFlags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "ClientPrintDebug_Response");
    struct
    {
        struct TArray<struct FString> Strings;
        int32_t GameFlags;
    } Parms{};
    Parms.Strings = (struct TArray<struct FString>)Strings;
    Parms.GameFlags = (int32_t)GameFlags;
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::ClientEndAbility(struct FGameplayAbilitySpecHandle AbilityToEnd, struct FGameplayAbilityActivationInfo ActivationInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "ClientEndAbility");
    struct
    {
        struct FGameplayAbilitySpecHandle AbilityToEnd;
        struct FGameplayAbilityActivationInfo ActivationInfo;
    } Parms{};
    Parms.AbilityToEnd = (struct FGameplayAbilitySpecHandle)AbilityToEnd;
    Parms.ActivationInfo = (struct FGameplayAbilityActivationInfo)ActivationInfo;
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::ClientCancelAbility(struct FGameplayAbilitySpecHandle AbilityToCancel, struct FGameplayAbilityActivationInfo ActivationInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "ClientCancelAbility");
    struct
    {
        struct FGameplayAbilitySpecHandle AbilityToCancel;
        struct FGameplayAbilityActivationInfo ActivationInfo;
    } Parms{};
    Parms.AbilityToCancel = (struct FGameplayAbilitySpecHandle)AbilityToCancel;
    Parms.ActivationInfo = (struct FGameplayAbilityActivationInfo)ActivationInfo;
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::ClientActivateAbilitySucceedWithEventData(struct FGameplayAbilitySpecHandle AbilityToActivate, struct FPredictionKey PredictionKey, struct FGameplayEventData TriggerEventData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "ClientActivateAbilitySucceedWithEventData");
    struct
    {
        struct FGameplayAbilitySpecHandle AbilityToActivate;
        struct FPredictionKey PredictionKey;
        struct FGameplayEventData TriggerEventData;
    } Parms{};
    Parms.AbilityToActivate = (struct FGameplayAbilitySpecHandle)AbilityToActivate;
    Parms.PredictionKey = (struct FPredictionKey)PredictionKey;
    Parms.TriggerEventData = (struct FGameplayEventData)TriggerEventData;
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::ClientActivateAbilitySucceed(struct FGameplayAbilitySpecHandle AbilityToActivate, struct FPredictionKey PredictionKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "ClientActivateAbilitySucceed");
    struct
    {
        struct FGameplayAbilitySpecHandle AbilityToActivate;
        struct FPredictionKey PredictionKey;
    } Parms{};
    Parms.AbilityToActivate = (struct FGameplayAbilitySpecHandle)AbilityToActivate;
    Parms.PredictionKey = (struct FPredictionKey)PredictionKey;
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::ClientActivateAbilityFailed(struct FGameplayAbilitySpecHandle AbilityToActivate, int16_t PredictionKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "ClientActivateAbilityFailed");
    struct
    {
        struct FGameplayAbilitySpecHandle AbilityToActivate;
        int16_t PredictionKey;
    } Parms{};
    Parms.AbilityToActivate = (struct FGameplayAbilitySpecHandle)AbilityToActivate;
    Parms.PredictionKey = (int16_t)PredictionKey;
    this->ProcessEvent(Func, &Parms);
}

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectToTarget(struct UGameplayEffect* GameplayEffectClass, struct UAbilitySystemComponent* Target, float Level, struct FGameplayEffectContextHandle Context)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "BP_ApplyGameplayEffectToTarget");
    struct
    {
        struct UGameplayEffect* GameplayEffectClass;
        struct UAbilitySystemComponent* Target;
        float Level;
        struct FGameplayEffectContextHandle Context;
        struct FActiveGameplayEffectHandle ReturnValue;
    } Parms{};
    Parms.GameplayEffectClass = (struct UGameplayEffect*)GameplayEffectClass;
    Parms.Target = (struct UAbilitySystemComponent*)Target;
    Parms.Level = (float)Level;
    Parms.Context = (struct FGameplayEffectContextHandle)Context;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectToSelf(struct UGameplayEffect* GameplayEffectClass, float Level, struct FGameplayEffectContextHandle EffectContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "BP_ApplyGameplayEffectToSelf");
    struct
    {
        struct UGameplayEffect* GameplayEffectClass;
        float Level;
        struct FGameplayEffectContextHandle EffectContext;
        struct FActiveGameplayEffectHandle ReturnValue;
    } Parms{};
    Parms.GameplayEffectClass = (struct UGameplayEffect*)GameplayEffectClass;
    Parms.Level = (float)Level;
    Parms.EffectContext = (struct FGameplayEffectContextHandle)EffectContext;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectSpecToTarget(const struct FGameplayEffectSpecHandle& SpecHandle, struct UAbilitySystemComponent* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "BP_ApplyGameplayEffectSpecToTarget");
    struct
    {
        struct FGameplayEffectSpecHandle SpecHandle;
        struct UAbilitySystemComponent* Target;
        struct FActiveGameplayEffectHandle ReturnValue;
    } Parms{};
    Parms.SpecHandle = (struct FGameplayEffectSpecHandle)SpecHandle;
    Parms.Target = (struct UAbilitySystemComponent*)Target;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectSpecToSelf(const struct FGameplayEffectSpecHandle& SpecHandle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "BP_ApplyGameplayEffectSpecToSelf");
    struct
    {
        struct FGameplayEffectSpecHandle SpecHandle;
        struct FActiveGameplayEffectHandle ReturnValue;
    } Parms{};
    Parms.SpecHandle = (struct FGameplayEffectSpecHandle)SpecHandle;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAbilitySystemComponent::AbilityConfirmOrCancel__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "AbilityConfirmOrCancel__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAbilitySystemComponent::AbilityAbilityKey__DelegateSignature(int32_t InputID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilitySystemComponent", "AbilityAbilityKey__DelegateSignature");
    struct
    {
        int32_t InputID;
    } Parms{};
    Parms.InputID = (int32_t)InputID;
    this->ProcessEvent(Func, &Parms);
}

// ---- UAbilitySystemBlueprintLibrary::* ----
uint8_t UAbilitySystemBlueprintLibrary::TargetDataHasOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "TargetDataHasOrigin");
    struct
    {
        struct FGameplayAbilityTargetDataHandle TargetData;
        int32_t Index;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TargetData = (struct FGameplayAbilityTargetDataHandle)TargetData;
    Parms.Index = (int32_t)Index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAbilitySystemBlueprintLibrary::TargetDataHasHitResult(const struct FGameplayAbilityTargetDataHandle& HitResult, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "TargetDataHasHitResult");
    struct
    {
        struct FGameplayAbilityTargetDataHandle HitResult;
        int32_t Index;
        uint8_t ReturnValue;
    } Parms{};
    Parms.HitResult = (struct FGameplayAbilityTargetDataHandle)HitResult;
    Parms.Index = (int32_t)Index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAbilitySystemBlueprintLibrary::TargetDataHasEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "TargetDataHasEndPoint");
    struct
    {
        struct FGameplayAbilityTargetDataHandle TargetData;
        int32_t Index;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TargetData = (struct FGameplayAbilityTargetDataHandle)TargetData;
    Parms.Index = (int32_t)Index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAbilitySystemBlueprintLibrary::TargetDataHasActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "TargetDataHasActor");
    struct
    {
        struct FGameplayAbilityTargetDataHandle TargetData;
        int32_t Index;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TargetData = (struct FGameplayAbilityTargetDataHandle)TargetData;
    Parms.Index = (int32_t)Index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::SetStackCountToMax(struct FGameplayEffectSpecHandle SpecHandle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "SetStackCountToMax");
    struct
    {
        struct FGameplayEffectSpecHandle SpecHandle;
        struct FGameplayEffectSpecHandle ReturnValue;
    } Parms{};
    Parms.SpecHandle = (struct FGameplayEffectSpecHandle)SpecHandle;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::SetStackCount(struct FGameplayEffectSpecHandle SpecHandle, int32_t StackCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "SetStackCount");
    struct
    {
        struct FGameplayEffectSpecHandle SpecHandle;
        int32_t StackCount;
        struct FGameplayEffectSpecHandle ReturnValue;
    } Parms{};
    Parms.SpecHandle = (struct FGameplayEffectSpecHandle)SpecHandle;
    Parms.StackCount = (int32_t)StackCount;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::SetDuration(struct FGameplayEffectSpecHandle SpecHandle, float Duration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "SetDuration");
    struct
    {
        struct FGameplayEffectSpecHandle SpecHandle;
        float Duration;
        struct FGameplayEffectSpecHandle ReturnValue;
    } Parms{};
    Parms.SpecHandle = (struct FGameplayEffectSpecHandle)SpecHandle;
    Parms.Duration = (float)Duration;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(struct AActor* Actor, struct FGameplayTag EventTag, struct FGameplayEventData Payload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "SendGameplayEventToActor");
    struct
    {
        struct AActor* Actor;
        struct FGameplayTag EventTag;
        struct FGameplayEventData Payload;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.EventTag = (struct FGameplayTag)EventTag;
    Parms.Payload = (struct FGameplayEventData)Payload;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UAbilitySystemBlueprintLibrary::NotEqual_GameplayAttributeGameplayAttribute(struct FGameplayAttribute AttributeA, struct FGameplayAttribute AttributeB)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "NotEqual_GameplayAttributeGameplayAttribute");
    struct
    {
        struct FGameplayAttribute AttributeA;
        struct FGameplayAttribute AttributeB;
        uint8_t ReturnValue;
    } Parms{};
    Parms.AttributeA = (struct FGameplayAttribute)AttributeA;
    Parms.AttributeB = (struct FGameplayAttribute)AttributeB;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::MakeSpecHandle(struct UGameplayEffect* InGameplayEffect, struct AActor* InInstigator, struct AActor* InEffectCauser, float InLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "MakeSpecHandle");
    struct
    {
        struct UGameplayEffect* InGameplayEffect;
        struct AActor* InInstigator;
        struct AActor* InEffectCauser;
        float InLevel;
        struct FGameplayEffectSpecHandle ReturnValue;
    } Parms{};
    Parms.InGameplayEffect = (struct UGameplayEffect*)InGameplayEffect;
    Parms.InInstigator = (struct AActor*)InInstigator;
    Parms.InEffectCauser = (struct AActor*)InEffectCauser;
    Parms.InLevel = (float)InLevel;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGameplayCueParameters UAbilitySystemBlueprintLibrary::MakeGameplayCueParameters(float NormalizedMagnitude, float RawMagnitude, struct FGameplayEffectContextHandle EffectContext, struct FGameplayTag MatchedTagName, struct FGameplayTag OriginalTag, struct FGameplayTagContainer AggregatedSourceTags, struct FGameplayTagContainer AggregatedTargetTags, struct FVector Location, struct FVector Normal, struct AActor* Instigator, struct AActor* EffectCauser, struct UObject* SourceObject, struct UPhysicalMaterial* PhysicalMaterial, int32_t GameplayEffectLevel, int32_t AbilityLevel, struct USceneComponent* TargetAttachComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "MakeGameplayCueParameters");
    struct
    {
        float NormalizedMagnitude;
        float RawMagnitude;
        struct FGameplayEffectContextHandle EffectContext;
        struct FGameplayTag MatchedTagName;
        struct FGameplayTag OriginalTag;
        struct FGameplayTagContainer AggregatedSourceTags;
        struct FGameplayTagContainer AggregatedTargetTags;
        struct FVector Location;
        struct FVector Normal;
        struct AActor* Instigator;
        struct AActor* EffectCauser;
        struct UObject* SourceObject;
        struct UPhysicalMaterial* PhysicalMaterial;
        int32_t GameplayEffectLevel;
        int32_t AbilityLevel;
        struct USceneComponent* TargetAttachComponent;
        struct FGameplayCueParameters ReturnValue;
    } Parms{};
    Parms.NormalizedMagnitude = (float)NormalizedMagnitude;
    Parms.RawMagnitude = (float)RawMagnitude;
    Parms.EffectContext = (struct FGameplayEffectContextHandle)EffectContext;
    Parms.MatchedTagName = (struct FGameplayTag)MatchedTagName;
    Parms.OriginalTag = (struct FGameplayTag)OriginalTag;
    Parms.AggregatedSourceTags = (struct FGameplayTagContainer)AggregatedSourceTags;
    Parms.AggregatedTargetTags = (struct FGameplayTagContainer)AggregatedTargetTags;
    Parms.Location = (struct FVector)Location;
    Parms.Normal = (struct FVector)Normal;
    Parms.Instigator = (struct AActor*)Instigator;
    Parms.EffectCauser = (struct AActor*)EffectCauser;
    Parms.SourceObject = (struct UObject*)SourceObject;
    Parms.PhysicalMaterial = (struct UPhysicalMaterial*)PhysicalMaterial;
    Parms.GameplayEffectLevel = (int32_t)GameplayEffectLevel;
    Parms.AbilityLevel = (int32_t)AbilityLevel;
    Parms.TargetAttachComponent = (struct USceneComponent*)TargetAttachComponent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGameplayTargetDataFilterHandle UAbilitySystemBlueprintLibrary::MakeFilterHandle(struct FGameplayTargetDataFilter Filter, struct AActor* FilterActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "MakeFilterHandle");
    struct
    {
        struct FGameplayTargetDataFilter Filter;
        struct AActor* FilterActor;
        struct FGameplayTargetDataFilterHandle ReturnValue;
    } Parms{};
    Parms.Filter = (struct FGameplayTargetDataFilter)Filter;
    Parms.FilterActor = (struct AActor*)FilterActor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAbilitySystemBlueprintLibrary::IsValid(struct FGameplayAttribute Attribute)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "IsValid");
    struct
    {
        struct FGameplayAttribute Attribute;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Attribute = (struct FGameplayAttribute)Attribute;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAbilitySystemBlueprintLibrary::IsInstigatorLocallyControlledPlayer(struct FGameplayCueParameters Parameters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "IsInstigatorLocallyControlledPlayer");
    struct
    {
        struct FGameplayCueParameters Parameters;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Parameters = (struct FGameplayCueParameters)Parameters;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAbilitySystemBlueprintLibrary::IsInstigatorLocallyControlled(struct FGameplayCueParameters Parameters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "IsInstigatorLocallyControlled");
    struct
    {
        struct FGameplayCueParameters Parameters;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Parameters = (struct FGameplayCueParameters)Parameters;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAbilitySystemBlueprintLibrary::HasHitResult(struct FGameplayCueParameters Parameters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "HasHitResult");
    struct
    {
        struct FGameplayCueParameters Parameters;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Parameters = (struct FGameplayCueParameters)Parameters;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTransform UAbilitySystemBlueprintLibrary::GetTargetDataOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetTargetDataOrigin");
    struct
    {
        struct FGameplayAbilityTargetDataHandle TargetData;
        int32_t Index;
        struct FTransform ReturnValue;
    } Parms{};
    Parms.TargetData = (struct FGameplayAbilityTargetDataHandle)TargetData;
    Parms.Index = (int32_t)Index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTransform UAbilitySystemBlueprintLibrary::GetTargetDataEndPointTransform(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetTargetDataEndPointTransform");
    struct
    {
        struct FGameplayAbilityTargetDataHandle TargetData;
        int32_t Index;
        struct FTransform ReturnValue;
    } Parms{};
    Parms.TargetData = (struct FGameplayAbilityTargetDataHandle)TargetData;
    Parms.Index = (int32_t)Index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UAbilitySystemBlueprintLibrary::GetTargetDataEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetTargetDataEndPoint");
    struct
    {
        struct FGameplayAbilityTargetDataHandle TargetData;
        int32_t Index;
        struct FVector ReturnValue;
    } Parms{};
    Parms.TargetData = (struct FGameplayAbilityTargetDataHandle)TargetData;
    Parms.Index = (int32_t)Index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UAbilitySystemBlueprintLibrary::GetOrigin(struct FGameplayCueParameters Parameters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetOrigin");
    struct
    {
        struct FGameplayCueParameters Parameters;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Parameters = (struct FGameplayCueParameters)Parameters;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UAbilitySystemBlueprintLibrary::GetModifiedAttributeMagnitude(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayAttribute Attribute)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetModifiedAttributeMagnitude");
    struct
    {
        struct FGameplayEffectSpecHandle SpecHandle;
        struct FGameplayAttribute Attribute;
        float ReturnValue;
    } Parms{};
    Parms.SpecHandle = (struct FGameplayEffectSpecHandle)SpecHandle;
    Parms.Attribute = (struct FGameplayAttribute)Attribute;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTransform UAbilitySystemBlueprintLibrary::GetInstigatorTransform(struct FGameplayCueParameters Parameters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetInstigatorTransform");
    struct
    {
        struct FGameplayCueParameters Parameters;
        struct FTransform ReturnValue;
    } Parms{};
    Parms.Parameters = (struct FGameplayCueParameters)Parameters;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UAbilitySystemBlueprintLibrary::GetInstigatorActor(struct FGameplayCueParameters Parameters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetInstigatorActor");
    struct
    {
        struct FGameplayCueParameters Parameters;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.Parameters = (struct FGameplayCueParameters)Parameters;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FHitResult UAbilitySystemBlueprintLibrary::GetHitResultFromTargetData(const struct FGameplayAbilityTargetDataHandle& HitResult, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetHitResultFromTargetData");
    struct
    {
        struct FGameplayAbilityTargetDataHandle HitResult;
        int32_t Index;
        struct FHitResult ReturnValue;
    } Parms{};
    Parms.HitResult = (struct FGameplayAbilityTargetDataHandle)HitResult;
    Parms.Index = (int32_t)Index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FHitResult UAbilitySystemBlueprintLibrary::GetHitResult(struct FGameplayCueParameters Parameters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetHitResult");
    struct
    {
        struct FGameplayCueParameters Parameters;
        struct FHitResult ReturnValue;
    } Parms{};
    Parms.Parameters = (struct FGameplayCueParameters)Parameters;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAbilitySystemBlueprintLibrary::GetGameplayCueEndLocationAndNormal(struct AActor* TargetActor, struct FGameplayCueParameters Parameters, struct FVector& Location, struct FVector& Normal)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetGameplayCueEndLocationAndNormal");
    struct
    {
        struct AActor* TargetActor;
        struct FGameplayCueParameters Parameters;
        struct FVector Location;
        struct FVector Normal;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TargetActor = (struct AActor*)TargetActor;
    Parms.Parameters = (struct FGameplayCueParameters)Parameters;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Location = Parms.Location;
    Normal = Parms.Normal;
    return Parms.ReturnValue;
}

uint8_t UAbilitySystemBlueprintLibrary::GetGameplayCueDirection(struct AActor* TargetActor, struct FGameplayCueParameters Parameters, struct FVector& Direction)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetGameplayCueDirection");
    struct
    {
        struct AActor* TargetActor;
        struct FGameplayCueParameters Parameters;
        struct FVector Direction;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TargetActor = (struct AActor*)TargetActor;
    Parms.Parameters = (struct FGameplayCueParameters)Parameters;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Direction = Parms.Direction;
    return Parms.ReturnValue;
}

float UAbilitySystemBlueprintLibrary::GetFloatAttributeFromAbilitySystemComponent(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute Attribute, uint8_t& bSuccessfullyFoundAttribute)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetFloatAttributeFromAbilitySystemComponent");
    struct
    {
        struct UAbilitySystemComponent* AbilitySystem;
        struct FGameplayAttribute Attribute;
        uint8_t bSuccessfullyFoundAttribute;
        float ReturnValue;
    } Parms{};
    Parms.AbilitySystem = (struct UAbilitySystemComponent*)AbilitySystem;
    Parms.Attribute = (struct FGameplayAttribute)Attribute;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    bSuccessfullyFoundAttribute = Parms.bSuccessfullyFoundAttribute;
    return Parms.ReturnValue;
}

float UAbilitySystemBlueprintLibrary::GetFloatAttributeBaseFromAbilitySystemComponent(struct UAbilitySystemComponent* AbilitySystemComponent, struct FGameplayAttribute Attribute, uint8_t& bSuccessfullyFoundAttribute)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetFloatAttributeBaseFromAbilitySystemComponent");
    struct
    {
        struct UAbilitySystemComponent* AbilitySystemComponent;
        struct FGameplayAttribute Attribute;
        uint8_t bSuccessfullyFoundAttribute;
        float ReturnValue;
    } Parms{};
    Parms.AbilitySystemComponent = (struct UAbilitySystemComponent*)AbilitySystemComponent;
    Parms.Attribute = (struct FGameplayAttribute)Attribute;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    bSuccessfullyFoundAttribute = Parms.bSuccessfullyFoundAttribute;
    return Parms.ReturnValue;
}

float UAbilitySystemBlueprintLibrary::GetFloatAttributeBase(struct AActor* Actor, struct FGameplayAttribute Attribute, uint8_t& bSuccessfullyFoundAttribute)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetFloatAttributeBase");
    struct
    {
        struct AActor* Actor;
        struct FGameplayAttribute Attribute;
        uint8_t bSuccessfullyFoundAttribute;
        float ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.Attribute = (struct FGameplayAttribute)Attribute;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    bSuccessfullyFoundAttribute = Parms.bSuccessfullyFoundAttribute;
    return Parms.ReturnValue;
}

float UAbilitySystemBlueprintLibrary::GetFloatAttribute(struct AActor* Actor, struct FGameplayAttribute Attribute, uint8_t& bSuccessfullyFoundAttribute)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetFloatAttribute");
    struct
    {
        struct AActor* Actor;
        struct FGameplayAttribute Attribute;
        uint8_t bSuccessfullyFoundAttribute;
        float ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.Attribute = (struct FGameplayAttribute)Attribute;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    bSuccessfullyFoundAttribute = Parms.bSuccessfullyFoundAttribute;
    return Parms.ReturnValue;
}

struct FGameplayEffectContextHandle UAbilitySystemBlueprintLibrary::GetEffectContext(struct FGameplayEffectSpecHandle SpecHandle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetEffectContext");
    struct
    {
        struct FGameplayEffectSpecHandle SpecHandle;
        struct FGameplayEffectContextHandle ReturnValue;
    } Parms{};
    Parms.SpecHandle = (struct FGameplayEffectSpecHandle)SpecHandle;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAbilitySystemBlueprintLibrary::GetDataCountFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetDataCountFromTargetData");
    struct
    {
        struct FGameplayAbilityTargetDataHandle TargetData;
        int32_t ReturnValue;
    } Parms{};
    Parms.TargetData = (struct FGameplayAbilityTargetDataHandle)TargetData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FGameplayEffectSpecHandle> UAbilitySystemBlueprintLibrary::GetAllLinkedGameplayEffectSpecHandles(struct FGameplayEffectSpecHandle SpecHandle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetAllLinkedGameplayEffectSpecHandles");
    struct
    {
        struct FGameplayEffectSpecHandle SpecHandle;
        struct TArray<struct FGameplayEffectSpecHandle> ReturnValue;
    } Parms{};
    Parms.SpecHandle = (struct FGameplayEffectSpecHandle)SpecHandle;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct AActor*> UAbilitySystemBlueprintLibrary::GetAllActorsFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetAllActorsFromTargetData");
    struct
    {
        struct FGameplayAbilityTargetDataHandle TargetData;
        struct TArray<struct AActor*> ReturnValue;
    } Parms{};
    Parms.TargetData = (struct FGameplayAbilityTargetDataHandle)TargetData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct AActor*> UAbilitySystemBlueprintLibrary::GetActorsFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetActorsFromTargetData");
    struct
    {
        struct FGameplayAbilityTargetDataHandle TargetData;
        int32_t Index;
        struct TArray<struct AActor*> ReturnValue;
    } Parms{};
    Parms.TargetData = (struct FGameplayAbilityTargetDataHandle)TargetData;
    Parms.Index = (int32_t)Index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAbilitySystemBlueprintLibrary::GetActorCount(struct FGameplayCueParameters Parameters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetActorCount");
    struct
    {
        struct FGameplayCueParameters Parameters;
        int32_t ReturnValue;
    } Parms{};
    Parms.Parameters = (struct FGameplayCueParameters)Parameters;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UAbilitySystemBlueprintLibrary::GetActorByIndex(struct FGameplayCueParameters Parameters, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetActorByIndex");
    struct
    {
        struct FGameplayCueParameters Parameters;
        int32_t Index;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.Parameters = (struct FGameplayCueParameters)Parameters;
    Parms.Index = (int32_t)Index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectTotalDuration(struct FActiveGameplayEffectHandle ActiveHandle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetActiveGameplayEffectTotalDuration");
    struct
    {
        struct FActiveGameplayEffectHandle ActiveHandle;
        float ReturnValue;
    } Parms{};
    Parms.ActiveHandle = (struct FActiveGameplayEffectHandle)ActiveHandle;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectStartTime(struct FActiveGameplayEffectHandle ActiveHandle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetActiveGameplayEffectStartTime");
    struct
    {
        struct FActiveGameplayEffectHandle ActiveHandle;
        float ReturnValue;
    } Parms{};
    Parms.ActiveHandle = (struct FActiveGameplayEffectHandle)ActiveHandle;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectStackLimitCount(struct FActiveGameplayEffectHandle ActiveHandle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetActiveGameplayEffectStackLimitCount");
    struct
    {
        struct FActiveGameplayEffectHandle ActiveHandle;
        int32_t ReturnValue;
    } Parms{};
    Parms.ActiveHandle = (struct FActiveGameplayEffectHandle)ActiveHandle;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectStackCount(struct FActiveGameplayEffectHandle ActiveHandle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetActiveGameplayEffectStackCount");
    struct
    {
        struct FActiveGameplayEffectHandle ActiveHandle;
        int32_t ReturnValue;
    } Parms{};
    Parms.ActiveHandle = (struct FActiveGameplayEffectHandle)ActiveHandle;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectRemainingDuration(struct UObject* WorldContextObject, struct FActiveGameplayEffectHandle ActiveHandle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetActiveGameplayEffectRemainingDuration");
    struct
    {
        struct UObject* WorldContextObject;
        struct FActiveGameplayEffectHandle ActiveHandle;
        float ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.ActiveHandle = (struct FActiveGameplayEffectHandle)ActiveHandle;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectExpectedEndTime(struct FActiveGameplayEffectHandle ActiveHandle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetActiveGameplayEffectExpectedEndTime");
    struct
    {
        struct FActiveGameplayEffectHandle ActiveHandle;
        float ReturnValue;
    } Parms{};
    Parms.ActiveHandle = (struct FActiveGameplayEffectHandle)ActiveHandle;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectDebugString(struct FActiveGameplayEffectHandle ActiveHandle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetActiveGameplayEffectDebugString");
    struct
    {
        struct FActiveGameplayEffectHandle ActiveHandle;
        struct FString ReturnValue;
    } Parms{};
    Parms.ActiveHandle = (struct FActiveGameplayEffectHandle)ActiveHandle;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAbilitySystemComponent* UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetAbilitySystemComponent");
    struct
    {
        struct AActor* Actor;
        struct UAbilitySystemComponent* ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAbilitySystemBlueprintLibrary::ForwardGameplayCueToTarget(struct TScriptInterface<IGameplayCueInterface> TargetCueInterface, EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "ForwardGameplayCueToTarget");
    struct
    {
        struct TScriptInterface<IGameplayCueInterface> TargetCueInterface;
        enum EGameplayCueEvent EventType;
        struct FGameplayCueParameters Parameters;
    } Parms{};
    Parms.TargetCueInterface = (struct TScriptInterface<IGameplayCueInterface>)TargetCueInterface;
    Parms.EventType = (enum EGameplayCueEvent)EventType;
    Parms.Parameters = (struct FGameplayCueParameters)Parameters;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::FilterTargetData(const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, struct FGameplayTargetDataFilterHandle ActorFilterClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "FilterTargetData");
    struct
    {
        struct FGameplayAbilityTargetDataHandle TargetDataHandle;
        struct FGameplayTargetDataFilterHandle ActorFilterClass;
        struct FGameplayAbilityTargetDataHandle ReturnValue;
    } Parms{};
    Parms.TargetDataHandle = (struct FGameplayAbilityTargetDataHandle)TargetDataHandle;
    Parms.ActorFilterClass = (struct FGameplayTargetDataFilterHandle)ActorFilterClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UAbilitySystemBlueprintLibrary::EvaluateAttributeValueWithTagsAndBase(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute Attribute, const struct FGameplayTagContainer& SourceTags, const struct FGameplayTagContainer& TargetTags, float BaseValue, uint8_t& bSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "EvaluateAttributeValueWithTagsAndBase");
    struct
    {
        struct UAbilitySystemComponent* AbilitySystem;
        struct FGameplayAttribute Attribute;
        struct FGameplayTagContainer SourceTags;
        struct FGameplayTagContainer TargetTags;
        float BaseValue;
        uint8_t bSuccess;
        float ReturnValue;
    } Parms{};
    Parms.AbilitySystem = (struct UAbilitySystemComponent*)AbilitySystem;
    Parms.Attribute = (struct FGameplayAttribute)Attribute;
    Parms.SourceTags = (struct FGameplayTagContainer)SourceTags;
    Parms.TargetTags = (struct FGameplayTagContainer)TargetTags;
    Parms.BaseValue = (float)BaseValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    bSuccess = Parms.bSuccess;
    return Parms.ReturnValue;
}

float UAbilitySystemBlueprintLibrary::EvaluateAttributeValueWithTags(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute Attribute, const struct FGameplayTagContainer& SourceTags, const struct FGameplayTagContainer& TargetTags, uint8_t& bSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "EvaluateAttributeValueWithTags");
    struct
    {
        struct UAbilitySystemComponent* AbilitySystem;
        struct FGameplayAttribute Attribute;
        struct FGameplayTagContainer SourceTags;
        struct FGameplayTagContainer TargetTags;
        uint8_t bSuccess;
        float ReturnValue;
    } Parms{};
    Parms.AbilitySystem = (struct UAbilitySystemComponent*)AbilitySystem;
    Parms.Attribute = (struct FGameplayAttribute)Attribute;
    Parms.SourceTags = (struct FGameplayTagContainer)SourceTags;
    Parms.TargetTags = (struct FGameplayTagContainer)TargetTags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    bSuccess = Parms.bSuccess;
    return Parms.ReturnValue;
}

uint8_t UAbilitySystemBlueprintLibrary::EqualEqual_GameplayAttributeGameplayAttribute(struct FGameplayAttribute AttributeA, struct FGameplayAttribute AttributeB)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "EqualEqual_GameplayAttributeGameplayAttribute");
    struct
    {
        struct FGameplayAttribute AttributeA;
        struct FGameplayAttribute AttributeB;
        uint8_t ReturnValue;
    } Parms{};
    Parms.AttributeA = (struct FGameplayAttribute)AttributeA;
    Parms.AttributeB = (struct FGameplayAttribute)AttributeB;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAbilitySystemBlueprintLibrary::EffectContextSetOrigin(struct FGameplayEffectContextHandle EffectContext, struct FVector Origin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextSetOrigin");
    struct
    {
        struct FGameplayEffectContextHandle EffectContext;
        struct FVector Origin;
    } Parms{};
    Parms.EffectContext = (struct FGameplayEffectContextHandle)EffectContext;
    Parms.Origin = (struct FVector)Origin;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UAbilitySystemBlueprintLibrary::EffectContextIsValid(struct FGameplayEffectContextHandle EffectContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextIsValid");
    struct
    {
        struct FGameplayEffectContextHandle EffectContext;
        uint8_t ReturnValue;
    } Parms{};
    Parms.EffectContext = (struct FGameplayEffectContextHandle)EffectContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAbilitySystemBlueprintLibrary::EffectContextIsInstigatorLocallyControlled(struct FGameplayEffectContextHandle EffectContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextIsInstigatorLocallyControlled");
    struct
    {
        struct FGameplayEffectContextHandle EffectContext;
        uint8_t ReturnValue;
    } Parms{};
    Parms.EffectContext = (struct FGameplayEffectContextHandle)EffectContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAbilitySystemBlueprintLibrary::EffectContextHasHitResult(struct FGameplayEffectContextHandle EffectContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextHasHitResult");
    struct
    {
        struct FGameplayEffectContextHandle EffectContext;
        uint8_t ReturnValue;
    } Parms{};
    Parms.EffectContext = (struct FGameplayEffectContextHandle)EffectContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UAbilitySystemBlueprintLibrary::EffectContextGetSourceObject(struct FGameplayEffectContextHandle EffectContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextGetSourceObject");
    struct
    {
        struct FGameplayEffectContextHandle EffectContext;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.EffectContext = (struct FGameplayEffectContextHandle)EffectContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UAbilitySystemBlueprintLibrary::EffectContextGetOriginalInstigatorActor(struct FGameplayEffectContextHandle EffectContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextGetOriginalInstigatorActor");
    struct
    {
        struct FGameplayEffectContextHandle EffectContext;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.EffectContext = (struct FGameplayEffectContextHandle)EffectContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UAbilitySystemBlueprintLibrary::EffectContextGetOrigin(struct FGameplayEffectContextHandle EffectContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextGetOrigin");
    struct
    {
        struct FGameplayEffectContextHandle EffectContext;
        struct FVector ReturnValue;
    } Parms{};
    Parms.EffectContext = (struct FGameplayEffectContextHandle)EffectContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UAbilitySystemBlueprintLibrary::EffectContextGetInstigatorActor(struct FGameplayEffectContextHandle EffectContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextGetInstigatorActor");
    struct
    {
        struct FGameplayEffectContextHandle EffectContext;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.EffectContext = (struct FGameplayEffectContextHandle)EffectContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FHitResult UAbilitySystemBlueprintLibrary::EffectContextGetHitResult(struct FGameplayEffectContextHandle EffectContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextGetHitResult");
    struct
    {
        struct FGameplayEffectContextHandle EffectContext;
        struct FHitResult ReturnValue;
    } Parms{};
    Parms.EffectContext = (struct FGameplayEffectContextHandle)EffectContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UAbilitySystemBlueprintLibrary::EffectContextGetEffectCauser(struct FGameplayEffectContextHandle EffectContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextGetEffectCauser");
    struct
    {
        struct FGameplayEffectContextHandle EffectContext;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.EffectContext = (struct FGameplayEffectContextHandle)EffectContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAbilitySystemBlueprintLibrary::EffectContextAddHitResult(struct FGameplayEffectContextHandle EffectContext, struct FHitResult HitResult, uint8_t bReset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextAddHitResult");
    struct
    {
        struct FGameplayEffectContextHandle EffectContext;
        struct FHitResult HitResult;
        uint8_t bReset;
    } Parms{};
    Parms.EffectContext = (struct FGameplayEffectContextHandle)EffectContext;
    Parms.HitResult = (struct FHitResult)HitResult;
    Parms.bReset = (uint8_t)bReset;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UAbilitySystemBlueprintLibrary::DoesTargetDataContainActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index, struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "DoesTargetDataContainActor");
    struct
    {
        struct FGameplayAbilityTargetDataHandle TargetData;
        int32_t Index;
        struct AActor* Actor;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TargetData = (struct FGameplayAbilityTargetDataHandle)TargetData;
    Parms.Index = (int32_t)Index;
    Parms.Actor = (struct AActor*)Actor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAbilitySystemBlueprintLibrary::DoesGameplayCueMeetTagRequirements(struct FGameplayCueParameters Parameters, const struct FGameplayTagRequirements& SourceTagReqs, const struct FGameplayTagRequirements& TargetTagReqs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "DoesGameplayCueMeetTagRequirements");
    struct
    {
        struct FGameplayCueParameters Parameters;
        struct FGameplayTagRequirements SourceTagReqs;
        struct FGameplayTagRequirements TargetTagReqs;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Parameters = (struct FGameplayCueParameters)Parameters;
    Parms.SourceTagReqs = (struct FGameplayTagRequirements)SourceTagReqs;
    Parms.TargetTagReqs = (struct FGameplayTagRequirements)TargetTagReqs;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::CloneSpecHandle(struct AActor* InNewInstigator, struct AActor* InEffectCauser, struct FGameplayEffectSpecHandle GameplayEffectSpecHandle_Clone)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "CloneSpecHandle");
    struct
    {
        struct AActor* InNewInstigator;
        struct AActor* InEffectCauser;
        struct FGameplayEffectSpecHandle GameplayEffectSpecHandle_Clone;
        struct FGameplayEffectSpecHandle ReturnValue;
    } Parms{};
    Parms.InNewInstigator = (struct AActor*)InNewInstigator;
    Parms.InEffectCauser = (struct AActor*)InEffectCauser;
    Parms.GameplayEffectSpecHandle_Clone = (struct FGameplayEffectSpecHandle)GameplayEffectSpecHandle_Clone;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAbilitySystemBlueprintLibrary::BreakGameplayCueParameters(const struct FGameplayCueParameters& Parameters, float& NormalizedMagnitude, float& RawMagnitude, struct FGameplayEffectContextHandle& EffectContext, struct FGameplayTag& MatchedTagName, struct FGameplayTag& OriginalTag, struct FGameplayTagContainer& AggregatedSourceTags, struct FGameplayTagContainer& AggregatedTargetTags, struct FVector& Location, struct FVector& Normal, struct AActor*& Instigator, struct AActor*& EffectCauser, struct UObject*& SourceObject, struct UPhysicalMaterial*& PhysicalMaterial, int32_t& GameplayEffectLevel, int32_t& AbilityLevel, struct USceneComponent*& TargetAttachComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "BreakGameplayCueParameters");
    struct
    {
        struct FGameplayCueParameters Parameters;
        float NormalizedMagnitude;
        float RawMagnitude;
        struct FGameplayEffectContextHandle EffectContext;
        struct FGameplayTag MatchedTagName;
        struct FGameplayTag OriginalTag;
        struct FGameplayTagContainer AggregatedSourceTags;
        struct FGameplayTagContainer AggregatedTargetTags;
        struct FVector Location;
        struct FVector Normal;
        struct AActor* Instigator;
        struct AActor* EffectCauser;
        struct UObject* SourceObject;
        struct UPhysicalMaterial* PhysicalMaterial;
        int32_t GameplayEffectLevel;
        int32_t AbilityLevel;
        struct USceneComponent* TargetAttachComponent;
    } Parms{};
    Parms.Parameters = (struct FGameplayCueParameters)Parameters;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    NormalizedMagnitude = Parms.NormalizedMagnitude;
    RawMagnitude = Parms.RawMagnitude;
    EffectContext = Parms.EffectContext;
    MatchedTagName = Parms.MatchedTagName;
    OriginalTag = Parms.OriginalTag;
    AggregatedSourceTags = Parms.AggregatedSourceTags;
    AggregatedTargetTags = Parms.AggregatedTargetTags;
    Location = Parms.Location;
    Normal = Parms.Normal;
    Instigator = Parms.Instigator;
    EffectCauser = Parms.EffectCauser;
    SourceObject = Parms.SourceObject;
    PhysicalMaterial = Parms.PhysicalMaterial;
    GameplayEffectLevel = Parms.GameplayEffectLevel;
    AbilityLevel = Parms.AbilityLevel;
    TargetAttachComponent = Parms.TargetAttachComponent;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AssignTagSetByCallerMagnitude(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTag DataTag, float Magnitude)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "AssignTagSetByCallerMagnitude");
    struct
    {
        struct FGameplayEffectSpecHandle SpecHandle;
        struct FGameplayTag DataTag;
        float Magnitude;
        struct FGameplayEffectSpecHandle ReturnValue;
    } Parms{};
    Parms.SpecHandle = (struct FGameplayEffectSpecHandle)SpecHandle;
    Parms.DataTag = (struct FGameplayTag)DataTag;
    Parms.Magnitude = (float)Magnitude;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AssignSetByCallerMagnitude(struct FGameplayEffectSpecHandle SpecHandle, struct FName DataName, float Magnitude)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "AssignSetByCallerMagnitude");
    struct
    {
        struct FGameplayEffectSpecHandle SpecHandle;
        struct FName DataName;
        float Magnitude;
        struct FGameplayEffectSpecHandle ReturnValue;
    } Parms{};
    Parms.SpecHandle = (struct FGameplayEffectSpecHandle)SpecHandle;
    Parms.DataName = (struct FName)DataName;
    Parms.Magnitude = (float)Magnitude;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AppendTargetDataHandle(struct FGameplayAbilityTargetDataHandle TargetHandle, const struct FGameplayAbilityTargetDataHandle& HandleToAdd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "AppendTargetDataHandle");
    struct
    {
        struct FGameplayAbilityTargetDataHandle TargetHandle;
        struct FGameplayAbilityTargetDataHandle HandleToAdd;
        struct FGameplayAbilityTargetDataHandle ReturnValue;
    } Parms{};
    Parms.TargetHandle = (struct FGameplayAbilityTargetDataHandle)TargetHandle;
    Parms.HandleToAdd = (struct FGameplayAbilityTargetDataHandle)HandleToAdd;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddLinkedGameplayEffectSpec(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayEffectSpecHandle LinkedGameplayEffectSpec)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "AddLinkedGameplayEffectSpec");
    struct
    {
        struct FGameplayEffectSpecHandle SpecHandle;
        struct FGameplayEffectSpecHandle LinkedGameplayEffectSpec;
        struct FGameplayEffectSpecHandle ReturnValue;
    } Parms{};
    Parms.SpecHandle = (struct FGameplayEffectSpecHandle)SpecHandle;
    Parms.LinkedGameplayEffectSpec = (struct FGameplayEffectSpecHandle)LinkedGameplayEffectSpec;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddLinkedGameplayEffect(struct FGameplayEffectSpecHandle SpecHandle, struct UGameplayEffect* LinkedGameplayEffect)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "AddLinkedGameplayEffect");
    struct
    {
        struct FGameplayEffectSpecHandle SpecHandle;
        struct UGameplayEffect* LinkedGameplayEffect;
        struct FGameplayEffectSpecHandle ReturnValue;
    } Parms{};
    Parms.SpecHandle = (struct FGameplayEffectSpecHandle)SpecHandle;
    Parms.LinkedGameplayEffect = (struct UGameplayEffect*)LinkedGameplayEffect;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddGrantedTags(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTagContainer NewGameplayTags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "AddGrantedTags");
    struct
    {
        struct FGameplayEffectSpecHandle SpecHandle;
        struct FGameplayTagContainer NewGameplayTags;
        struct FGameplayEffectSpecHandle ReturnValue;
    } Parms{};
    Parms.SpecHandle = (struct FGameplayEffectSpecHandle)SpecHandle;
    Parms.NewGameplayTags = (struct FGameplayTagContainer)NewGameplayTags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddGrantedTag(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTag NewGameplayTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "AddGrantedTag");
    struct
    {
        struct FGameplayEffectSpecHandle SpecHandle;
        struct FGameplayTag NewGameplayTag;
        struct FGameplayEffectSpecHandle ReturnValue;
    } Parms{};
    Parms.SpecHandle = (struct FGameplayEffectSpecHandle)SpecHandle;
    Parms.NewGameplayTag = (struct FGameplayTag)NewGameplayTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddAssetTags(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTagContainer NewGameplayTags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "AddAssetTags");
    struct
    {
        struct FGameplayEffectSpecHandle SpecHandle;
        struct FGameplayTagContainer NewGameplayTags;
        struct FGameplayEffectSpecHandle ReturnValue;
    } Parms{};
    Parms.SpecHandle = (struct FGameplayEffectSpecHandle)SpecHandle;
    Parms.NewGameplayTags = (struct FGameplayTagContainer)NewGameplayTags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddAssetTag(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTag NewGameplayTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "AddAssetTag");
    struct
    {
        struct FGameplayEffectSpecHandle SpecHandle;
        struct FGameplayTag NewGameplayTag;
        struct FGameplayEffectSpecHandle ReturnValue;
    } Parms{};
    Parms.SpecHandle = (struct FGameplayEffectSpecHandle)SpecHandle;
    Parms.NewGameplayTag = (struct FGameplayTag)NewGameplayTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromLocations(const struct FGameplayAbilityTargetingLocationInfo& SourceLocation, const struct FGameplayAbilityTargetingLocationInfo& TargetLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "AbilityTargetDataFromLocations");
    struct
    {
        struct FGameplayAbilityTargetingLocationInfo SourceLocation;
        struct FGameplayAbilityTargetingLocationInfo TargetLocation;
        struct FGameplayAbilityTargetDataHandle ReturnValue;
    } Parms{};
    Parms.SourceLocation = (struct FGameplayAbilityTargetingLocationInfo)SourceLocation;
    Parms.TargetLocation = (struct FGameplayAbilityTargetingLocationInfo)TargetLocation;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromHitResult(const struct FHitResult& HitResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "AbilityTargetDataFromHitResult");
    struct
    {
        struct FHitResult HitResult;
        struct FGameplayAbilityTargetDataHandle ReturnValue;
    } Parms{};
    Parms.HitResult = (struct FHitResult)HitResult;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromActorArray(const struct TArray<struct AActor*>& ActorArray, uint8_t OneTargetPerHandle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "AbilityTargetDataFromActorArray");
    struct
    {
        struct TArray<struct AActor*> ActorArray;
        uint8_t OneTargetPerHandle;
        struct FGameplayAbilityTargetDataHandle ReturnValue;
    } Parms{};
    Parms.ActorArray = (struct TArray<struct AActor*>)ActorArray;
    Parms.OneTargetPerHandle = (uint8_t)OneTargetPerHandle;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromActor(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "AbilityTargetDataFromActor");
    struct
    {
        struct AActor* Actor;
        struct FGameplayAbilityTargetDataHandle ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UAbilityTask_ApplyRootMotionConstantForce::* ----
struct UAbilityTask_ApplyRootMotionConstantForce* UAbilityTask_ApplyRootMotionConstantForce::ApplyRootMotionConstantForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector WorldDirection, float Strength, float Duration, uint8_t bIsAdditive, struct UCurveFloat* StrengthOverTime, ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_ApplyRootMotionConstantForce", "ApplyRootMotionConstantForce");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct FName TaskInstanceName;
        struct FVector WorldDirection;
        float Strength;
        float Duration;
        uint8_t bIsAdditive;
        struct UCurveFloat* StrengthOverTime;
        enum ERootMotionFinishVelocityMode VelocityOnFinishMode;
        struct FVector SetVelocityOnFinish;
        float ClampVelocityOnFinish;
        struct UAbilityTask_ApplyRootMotionConstantForce* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.TaskInstanceName = (struct FName)TaskInstanceName;
    Parms.WorldDirection = (struct FVector)WorldDirection;
    Parms.Strength = (float)Strength;
    Parms.Duration = (float)Duration;
    Parms.bIsAdditive = (uint8_t)bIsAdditive;
    Parms.StrengthOverTime = (struct UCurveFloat*)StrengthOverTime;
    Parms.VelocityOnFinishMode = (enum ERootMotionFinishVelocityMode)VelocityOnFinishMode;
    Parms.SetVelocityOnFinish = (struct FVector)SetVelocityOnFinish;
    Parms.ClampVelocityOnFinish = (float)ClampVelocityOnFinish;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UAbilityTask_ApplyRootMotionJumpForce::* ----
void UAbilityTask_ApplyRootMotionJumpForce::OnLandedCallback(const struct FHitResult& Hit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityTask_ApplyRootMotionJumpForce", "OnLandedCallback");
    struct
    {
        struct FHitResult Hit;
    } Parms{};
    Parms.Hit = (struct FHitResult)Hit;
    this->ProcessEvent(Func, &Parms);
}

void UAbilityTask_ApplyRootMotionJumpForce::Finish()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityTask_ApplyRootMotionJumpForce", "Finish");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UAbilityTask_ApplyRootMotionJumpForce* UAbilityTask_ApplyRootMotionJumpForce::ApplyRootMotionJumpForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FRotator Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, uint8_t bFinishOnLanded, ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, struct UCurveVector* PathOffsetCurve, struct UCurveFloat* TimeMappingCurve)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_ApplyRootMotionJumpForce", "ApplyRootMotionJumpForce");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct FName TaskInstanceName;
        struct FRotator Rotation;
        float Distance;
        float Height;
        float Duration;
        float MinimumLandedTriggerTime;
        uint8_t bFinishOnLanded;
        enum ERootMotionFinishVelocityMode VelocityOnFinishMode;
        struct FVector SetVelocityOnFinish;
        float ClampVelocityOnFinish;
        struct UCurveVector* PathOffsetCurve;
        struct UCurveFloat* TimeMappingCurve;
        struct UAbilityTask_ApplyRootMotionJumpForce* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.TaskInstanceName = (struct FName)TaskInstanceName;
    Parms.Rotation = (struct FRotator)Rotation;
    Parms.Distance = (float)Distance;
    Parms.Height = (float)Height;
    Parms.Duration = (float)Duration;
    Parms.MinimumLandedTriggerTime = (float)MinimumLandedTriggerTime;
    Parms.bFinishOnLanded = (uint8_t)bFinishOnLanded;
    Parms.VelocityOnFinishMode = (enum ERootMotionFinishVelocityMode)VelocityOnFinishMode;
    Parms.SetVelocityOnFinish = (struct FVector)SetVelocityOnFinish;
    Parms.ClampVelocityOnFinish = (float)ClampVelocityOnFinish;
    Parms.PathOffsetCurve = (struct UCurveVector*)PathOffsetCurve;
    Parms.TimeMappingCurve = (struct UCurveFloat*)TimeMappingCurve;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UAbilityTask_ApplyRootMotionMoveToActorForce::* ----
void UAbilityTask_ApplyRootMotionMoveToActorForce::OnTargetActorSwapped(struct AActor* OriginalTarget, struct AActor* NewTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityTask_ApplyRootMotionMoveToActorForce", "OnTargetActorSwapped");
    struct
    {
        struct AActor* OriginalTarget;
        struct AActor* NewTarget;
    } Parms{};
    Parms.OriginalTarget = (struct AActor*)OriginalTarget;
    Parms.NewTarget = (struct AActor*)NewTarget;
    this->ProcessEvent(Func, &Parms);
}

void UAbilityTask_ApplyRootMotionMoveToActorForce::OnRep_TargetLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityTask_ApplyRootMotionMoveToActorForce", "OnRep_TargetLocation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UAbilityTask_ApplyRootMotionMoveToActorForce* UAbilityTask_ApplyRootMotionMoveToActorForce::ApplyRootMotionMoveToTargetDataActorForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FGameplayAbilityTargetDataHandle TargetDataHandle, int32_t TargetDataIndex, int32_t TargetActorIndex, struct FVector TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, struct UCurveFloat* TargetLerpSpeedHorizontal, struct UCurveFloat* TargetLerpSpeedVertical, uint8_t bSetNewMovementMode, EMovementMode MovementMode, uint8_t bRestrictSpeedToExpected, struct UCurveVector* PathOffsetCurve, struct UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, uint8_t bDisableDestinationReachedInterrupt)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_ApplyRootMotionMoveToActorForce", "ApplyRootMotionMoveToTargetDataActorForce");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct FName TaskInstanceName;
        struct FGameplayAbilityTargetDataHandle TargetDataHandle;
        int32_t TargetDataIndex;
        int32_t TargetActorIndex;
        struct FVector TargetLocationOffset;
        enum ERootMotionMoveToActorTargetOffsetType OffsetAlignment;
        float Duration;
        struct UCurveFloat* TargetLerpSpeedHorizontal;
        struct UCurveFloat* TargetLerpSpeedVertical;
        uint8_t bSetNewMovementMode;
        enum EMovementMode MovementMode;
        uint8_t bRestrictSpeedToExpected;
        struct UCurveVector* PathOffsetCurve;
        struct UCurveFloat* TimeMappingCurve;
        enum ERootMotionFinishVelocityMode VelocityOnFinishMode;
        struct FVector SetVelocityOnFinish;
        float ClampVelocityOnFinish;
        uint8_t bDisableDestinationReachedInterrupt;
        struct UAbilityTask_ApplyRootMotionMoveToActorForce* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.TaskInstanceName = (struct FName)TaskInstanceName;
    Parms.TargetDataHandle = (struct FGameplayAbilityTargetDataHandle)TargetDataHandle;
    Parms.TargetDataIndex = (int32_t)TargetDataIndex;
    Parms.TargetActorIndex = (int32_t)TargetActorIndex;
    Parms.TargetLocationOffset = (struct FVector)TargetLocationOffset;
    Parms.OffsetAlignment = (enum ERootMotionMoveToActorTargetOffsetType)OffsetAlignment;
    Parms.Duration = (float)Duration;
    Parms.TargetLerpSpeedHorizontal = (struct UCurveFloat*)TargetLerpSpeedHorizontal;
    Parms.TargetLerpSpeedVertical = (struct UCurveFloat*)TargetLerpSpeedVertical;
    Parms.bSetNewMovementMode = (uint8_t)bSetNewMovementMode;
    Parms.MovementMode = (enum EMovementMode)MovementMode;
    Parms.bRestrictSpeedToExpected = (uint8_t)bRestrictSpeedToExpected;
    Parms.PathOffsetCurve = (struct UCurveVector*)PathOffsetCurve;
    Parms.TimeMappingCurve = (struct UCurveFloat*)TimeMappingCurve;
    Parms.VelocityOnFinishMode = (enum ERootMotionFinishVelocityMode)VelocityOnFinishMode;
    Parms.SetVelocityOnFinish = (struct FVector)SetVelocityOnFinish;
    Parms.ClampVelocityOnFinish = (float)ClampVelocityOnFinish;
    Parms.bDisableDestinationReachedInterrupt = (uint8_t)bDisableDestinationReachedInterrupt;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAbilityTask_ApplyRootMotionMoveToActorForce* UAbilityTask_ApplyRootMotionMoveToActorForce::ApplyRootMotionMoveToActorForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct AActor* TargetActor, struct FVector TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, struct UCurveFloat* TargetLerpSpeedHorizontal, struct UCurveFloat* TargetLerpSpeedVertical, uint8_t bSetNewMovementMode, EMovementMode MovementMode, uint8_t bRestrictSpeedToExpected, struct UCurveVector* PathOffsetCurve, struct UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, uint8_t bDisableDestinationReachedInterrupt)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_ApplyRootMotionMoveToActorForce", "ApplyRootMotionMoveToActorForce");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct FName TaskInstanceName;
        struct AActor* TargetActor;
        struct FVector TargetLocationOffset;
        enum ERootMotionMoveToActorTargetOffsetType OffsetAlignment;
        float Duration;
        struct UCurveFloat* TargetLerpSpeedHorizontal;
        struct UCurveFloat* TargetLerpSpeedVertical;
        uint8_t bSetNewMovementMode;
        enum EMovementMode MovementMode;
        uint8_t bRestrictSpeedToExpected;
        struct UCurveVector* PathOffsetCurve;
        struct UCurveFloat* TimeMappingCurve;
        enum ERootMotionFinishVelocityMode VelocityOnFinishMode;
        struct FVector SetVelocityOnFinish;
        float ClampVelocityOnFinish;
        uint8_t bDisableDestinationReachedInterrupt;
        struct UAbilityTask_ApplyRootMotionMoveToActorForce* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.TaskInstanceName = (struct FName)TaskInstanceName;
    Parms.TargetActor = (struct AActor*)TargetActor;
    Parms.TargetLocationOffset = (struct FVector)TargetLocationOffset;
    Parms.OffsetAlignment = (enum ERootMotionMoveToActorTargetOffsetType)OffsetAlignment;
    Parms.Duration = (float)Duration;
    Parms.TargetLerpSpeedHorizontal = (struct UCurveFloat*)TargetLerpSpeedHorizontal;
    Parms.TargetLerpSpeedVertical = (struct UCurveFloat*)TargetLerpSpeedVertical;
    Parms.bSetNewMovementMode = (uint8_t)bSetNewMovementMode;
    Parms.MovementMode = (enum EMovementMode)MovementMode;
    Parms.bRestrictSpeedToExpected = (uint8_t)bRestrictSpeedToExpected;
    Parms.PathOffsetCurve = (struct UCurveVector*)PathOffsetCurve;
    Parms.TimeMappingCurve = (struct UCurveFloat*)TimeMappingCurve;
    Parms.VelocityOnFinishMode = (enum ERootMotionFinishVelocityMode)VelocityOnFinishMode;
    Parms.SetVelocityOnFinish = (struct FVector)SetVelocityOnFinish;
    Parms.ClampVelocityOnFinish = (float)ClampVelocityOnFinish;
    Parms.bDisableDestinationReachedInterrupt = (uint8_t)bDisableDestinationReachedInterrupt;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UAbilityTask_ApplyRootMotionMoveToForce::* ----
struct UAbilityTask_ApplyRootMotionMoveToForce* UAbilityTask_ApplyRootMotionMoveToForce::ApplyRootMotionMoveToForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector TargetLocation, float Duration, uint8_t bSetNewMovementMode, EMovementMode MovementMode, uint8_t bRestrictSpeedToExpected, struct UCurveVector* PathOffsetCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_ApplyRootMotionMoveToForce", "ApplyRootMotionMoveToForce");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct FName TaskInstanceName;
        struct FVector TargetLocation;
        float Duration;
        uint8_t bSetNewMovementMode;
        enum EMovementMode MovementMode;
        uint8_t bRestrictSpeedToExpected;
        struct UCurveVector* PathOffsetCurve;
        enum ERootMotionFinishVelocityMode VelocityOnFinishMode;
        struct FVector SetVelocityOnFinish;
        float ClampVelocityOnFinish;
        struct UAbilityTask_ApplyRootMotionMoveToForce* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.TaskInstanceName = (struct FName)TaskInstanceName;
    Parms.TargetLocation = (struct FVector)TargetLocation;
    Parms.Duration = (float)Duration;
    Parms.bSetNewMovementMode = (uint8_t)bSetNewMovementMode;
    Parms.MovementMode = (enum EMovementMode)MovementMode;
    Parms.bRestrictSpeedToExpected = (uint8_t)bRestrictSpeedToExpected;
    Parms.PathOffsetCurve = (struct UCurveVector*)PathOffsetCurve;
    Parms.VelocityOnFinishMode = (enum ERootMotionFinishVelocityMode)VelocityOnFinishMode;
    Parms.SetVelocityOnFinish = (struct FVector)SetVelocityOnFinish;
    Parms.ClampVelocityOnFinish = (float)ClampVelocityOnFinish;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UAbilityTask_ApplyRootMotionRadialForce::* ----
struct UAbilityTask_ApplyRootMotionRadialForce* UAbilityTask_ApplyRootMotionRadialForce::ApplyRootMotionRadialForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector Location, struct AActor* LocationActor, float Strength, float Duration, float radius, uint8_t bIsPush, uint8_t bIsAdditive, uint8_t bNoZForce, struct UCurveFloat* StrengthDistanceFalloff, struct UCurveFloat* StrengthOverTime, uint8_t bUseFixedWorldDirection, struct FRotator FixedWorldDirection, ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_ApplyRootMotionRadialForce", "ApplyRootMotionRadialForce");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct FName TaskInstanceName;
        struct FVector Location;
        struct AActor* LocationActor;
        float Strength;
        float Duration;
        float radius;
        uint8_t bIsPush;
        uint8_t bIsAdditive;
        uint8_t bNoZForce;
        struct UCurveFloat* StrengthDistanceFalloff;
        struct UCurveFloat* StrengthOverTime;
        uint8_t bUseFixedWorldDirection;
        struct FRotator FixedWorldDirection;
        enum ERootMotionFinishVelocityMode VelocityOnFinishMode;
        struct FVector SetVelocityOnFinish;
        float ClampVelocityOnFinish;
        struct UAbilityTask_ApplyRootMotionRadialForce* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.TaskInstanceName = (struct FName)TaskInstanceName;
    Parms.Location = (struct FVector)Location;
    Parms.LocationActor = (struct AActor*)LocationActor;
    Parms.Strength = (float)Strength;
    Parms.Duration = (float)Duration;
    Parms.radius = (float)radius;
    Parms.bIsPush = (uint8_t)bIsPush;
    Parms.bIsAdditive = (uint8_t)bIsAdditive;
    Parms.bNoZForce = (uint8_t)bNoZForce;
    Parms.StrengthDistanceFalloff = (struct UCurveFloat*)StrengthDistanceFalloff;
    Parms.StrengthOverTime = (struct UCurveFloat*)StrengthOverTime;
    Parms.bUseFixedWorldDirection = (uint8_t)bUseFixedWorldDirection;
    Parms.FixedWorldDirection = (struct FRotator)FixedWorldDirection;
    Parms.VelocityOnFinishMode = (enum ERootMotionFinishVelocityMode)VelocityOnFinishMode;
    Parms.SetVelocityOnFinish = (struct FVector)SetVelocityOnFinish;
    Parms.ClampVelocityOnFinish = (float)ClampVelocityOnFinish;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UAbilityTask_MoveToLocation::* ----
struct UAbilityTask_MoveToLocation* UAbilityTask_MoveToLocation::MoveToLocation(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector Location, float Duration, struct UCurveFloat* OptionalInterpolationCurve, struct UCurveVector* OptionalVectorInterpolationCurve)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_MoveToLocation", "MoveToLocation");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct FName TaskInstanceName;
        struct FVector Location;
        float Duration;
        struct UCurveFloat* OptionalInterpolationCurve;
        struct UCurveVector* OptionalVectorInterpolationCurve;
        struct UAbilityTask_MoveToLocation* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.TaskInstanceName = (struct FName)TaskInstanceName;
    Parms.Location = (struct FVector)Location;
    Parms.Duration = (float)Duration;
    Parms.OptionalInterpolationCurve = (struct UCurveFloat*)OptionalInterpolationCurve;
    Parms.OptionalVectorInterpolationCurve = (struct UCurveVector*)OptionalVectorInterpolationCurve;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UAbilityTask_NetworkSyncPoint::* ----
struct UAbilityTask_NetworkSyncPoint* UAbilityTask_NetworkSyncPoint::WaitNetSync(struct UGameplayAbility* OwningAbility, EAbilityTaskNetSyncType SyncType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_NetworkSyncPoint", "WaitNetSync");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        enum EAbilityTaskNetSyncType SyncType;
        struct UAbilityTask_NetworkSyncPoint* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.SyncType = (enum EAbilityTaskNetSyncType)SyncType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAbilityTask_NetworkSyncPoint::OnSignalCallback()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityTask_NetworkSyncPoint", "OnSignalCallback");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UAbilityTask_PlayMontageAndWait::* ----
void UAbilityTask_PlayMontageAndWait::OnMontageInterrupted()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityTask_PlayMontageAndWait", "OnMontageInterrupted");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAbilityTask_PlayMontageAndWait::OnMontageEnded(struct UAnimMontage* Montage, uint8_t bInterrupted)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityTask_PlayMontageAndWait", "OnMontageEnded");
    struct
    {
        struct UAnimMontage* Montage;
        uint8_t bInterrupted;
    } Parms{};
    Parms.Montage = (struct UAnimMontage*)Montage;
    Parms.bInterrupted = (uint8_t)bInterrupted;
    this->ProcessEvent(Func, &Parms);
}

void UAbilityTask_PlayMontageAndWait::OnMontageBlendingOut(struct UAnimMontage* Montage, uint8_t bInterrupted)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityTask_PlayMontageAndWait", "OnMontageBlendingOut");
    struct
    {
        struct UAnimMontage* Montage;
        uint8_t bInterrupted;
    } Parms{};
    Parms.Montage = (struct UAnimMontage*)Montage;
    Parms.bInterrupted = (uint8_t)bInterrupted;
    this->ProcessEvent(Func, &Parms);
}

struct UAbilityTask_PlayMontageAndWait* UAbilityTask_PlayMontageAndWait::CreatePlayMontageAndWaitProxy(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct UAnimMontage* montageToPlay, float Rate, struct FName StartSection, uint8_t bStopWhenAbilityEnds, float AnimRootMotionTranslationScale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_PlayMontageAndWait", "CreatePlayMontageAndWaitProxy");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct FName TaskInstanceName;
        struct UAnimMontage* montageToPlay;
        float Rate;
        struct FName StartSection;
        uint8_t bStopWhenAbilityEnds;
        float AnimRootMotionTranslationScale;
        struct UAbilityTask_PlayMontageAndWait* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.TaskInstanceName = (struct FName)TaskInstanceName;
    Parms.montageToPlay = (struct UAnimMontage*)montageToPlay;
    Parms.Rate = (float)Rate;
    Parms.StartSection = (struct FName)StartSection;
    Parms.bStopWhenAbilityEnds = (uint8_t)bStopWhenAbilityEnds;
    Parms.AnimRootMotionTranslationScale = (float)AnimRootMotionTranslationScale;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UAbilityTask_Repeat::* ----
struct UAbilityTask_Repeat* UAbilityTask_Repeat::RepeatAction(struct UGameplayAbility* OwningAbility, float TimeBetweenActions, int32_t TotalActionCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_Repeat", "RepeatAction");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        float TimeBetweenActions;
        int32_t TotalActionCount;
        struct UAbilityTask_Repeat* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.TimeBetweenActions = (float)TimeBetweenActions;
    Parms.TotalActionCount = (int32_t)TotalActionCount;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UAbilityTask_SpawnActor::* ----
struct UAbilityTask_SpawnActor* UAbilityTask_SpawnActor::SpawnActor(struct UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle TargetData, struct AActor* Class)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_SpawnActor", "SpawnActor");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct FGameplayAbilityTargetDataHandle TargetData;
        struct AActor* Class;
        struct UAbilityTask_SpawnActor* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.TargetData = (struct FGameplayAbilityTargetDataHandle)TargetData;
    Parms.Class = (struct AActor*)Class;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAbilityTask_SpawnActor::FinishSpawningActor(struct UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle TargetData, struct AActor* SpawnedActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityTask_SpawnActor", "FinishSpawningActor");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct FGameplayAbilityTargetDataHandle TargetData;
        struct AActor* SpawnedActor;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.TargetData = (struct FGameplayAbilityTargetDataHandle)TargetData;
    Parms.SpawnedActor = (struct AActor*)SpawnedActor;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UAbilityTask_SpawnActor::BeginSpawningActor(struct UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle TargetData, struct AActor* Class, struct AActor*& SpawnedActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityTask_SpawnActor", "BeginSpawningActor");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct FGameplayAbilityTargetDataHandle TargetData;
        struct AActor* Class;
        struct AActor* SpawnedActor;
        uint8_t ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.TargetData = (struct FGameplayAbilityTargetDataHandle)TargetData;
    Parms.Class = (struct AActor*)Class;
    this->ProcessEvent(Func, &Parms);
    SpawnedActor = Parms.SpawnedActor;
    return Parms.ReturnValue;
}

// ---- UAbilityTask_StartAbilityState::* ----
struct UAbilityTask_StartAbilityState* UAbilityTask_StartAbilityState::StartAbilityState(struct UGameplayAbility* OwningAbility, struct FName StateName, uint8_t bEndCurrentState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_StartAbilityState", "StartAbilityState");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct FName StateName;
        uint8_t bEndCurrentState;
        struct UAbilityTask_StartAbilityState* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.StateName = (struct FName)StateName;
    Parms.bEndCurrentState = (uint8_t)bEndCurrentState;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UAbilityTask_VisualizeTargeting::* ----
struct UAbilityTask_VisualizeTargeting* UAbilityTask_VisualizeTargeting::VisualizeTargetingUsingActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* TargetActor, struct FName TaskInstanceName, float Duration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_VisualizeTargeting", "VisualizeTargetingUsingActor");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct AGameplayAbilityTargetActor* TargetActor;
        struct FName TaskInstanceName;
        float Duration;
        struct UAbilityTask_VisualizeTargeting* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.TargetActor = (struct AGameplayAbilityTargetActor*)TargetActor;
    Parms.TaskInstanceName = (struct FName)TaskInstanceName;
    Parms.Duration = (float)Duration;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAbilityTask_VisualizeTargeting* UAbilityTask_VisualizeTargeting::VisualizeTargeting(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* Class, struct FName TaskInstanceName, float Duration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_VisualizeTargeting", "VisualizeTargeting");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct AGameplayAbilityTargetActor* Class;
        struct FName TaskInstanceName;
        float Duration;
        struct UAbilityTask_VisualizeTargeting* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.Class = (struct AGameplayAbilityTargetActor*)Class;
    Parms.TaskInstanceName = (struct FName)TaskInstanceName;
    Parms.Duration = (float)Duration;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAbilityTask_VisualizeTargeting::FinishSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* SpawnedActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityTask_VisualizeTargeting", "FinishSpawningActor");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct AGameplayAbilityTargetActor* SpawnedActor;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.SpawnedActor = (struct AGameplayAbilityTargetActor*)SpawnedActor;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UAbilityTask_VisualizeTargeting::BeginSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* Class, struct AGameplayAbilityTargetActor*& SpawnedActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityTask_VisualizeTargeting", "BeginSpawningActor");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct AGameplayAbilityTargetActor* Class;
        struct AGameplayAbilityTargetActor* SpawnedActor;
        uint8_t ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.Class = (struct AGameplayAbilityTargetActor*)Class;
    this->ProcessEvent(Func, &Parms);
    SpawnedActor = Parms.SpawnedActor;
    return Parms.ReturnValue;
}

// ---- UAbilityTask_WaitAbilityActivate::* ----
struct UAbilityTask_WaitAbilityActivate* UAbilityTask_WaitAbilityActivate::WaitForAbilityActivateWithTagRequirements(struct UGameplayAbility* OwningAbility, struct FGameplayTagRequirements TagRequirements, uint8_t IncludeTriggeredAbilities, uint8_t TriggerOnce)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_WaitAbilityActivate", "WaitForAbilityActivateWithTagRequirements");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct FGameplayTagRequirements TagRequirements;
        uint8_t IncludeTriggeredAbilities;
        uint8_t TriggerOnce;
        struct UAbilityTask_WaitAbilityActivate* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.TagRequirements = (struct FGameplayTagRequirements)TagRequirements;
    Parms.IncludeTriggeredAbilities = (uint8_t)IncludeTriggeredAbilities;
    Parms.TriggerOnce = (uint8_t)TriggerOnce;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAbilityTask_WaitAbilityActivate* UAbilityTask_WaitAbilityActivate::WaitForAbilityActivate_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTagQuery Query, uint8_t IncludeTriggeredAbilities, uint8_t TriggerOnce)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_WaitAbilityActivate", "WaitForAbilityActivate_Query");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct FGameplayTagQuery Query;
        uint8_t IncludeTriggeredAbilities;
        uint8_t TriggerOnce;
        struct UAbilityTask_WaitAbilityActivate* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.Query = (struct FGameplayTagQuery)Query;
    Parms.IncludeTriggeredAbilities = (uint8_t)IncludeTriggeredAbilities;
    Parms.TriggerOnce = (uint8_t)TriggerOnce;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAbilityTask_WaitAbilityActivate* UAbilityTask_WaitAbilityActivate::WaitForAbilityActivate(struct UGameplayAbility* OwningAbility, struct FGameplayTag WithTag, struct FGameplayTag WithoutTag, uint8_t IncludeTriggeredAbilities, uint8_t TriggerOnce)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_WaitAbilityActivate", "WaitForAbilityActivate");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct FGameplayTag WithTag;
        struct FGameplayTag WithoutTag;
        uint8_t IncludeTriggeredAbilities;
        uint8_t TriggerOnce;
        struct UAbilityTask_WaitAbilityActivate* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.WithTag = (struct FGameplayTag)WithTag;
    Parms.WithoutTag = (struct FGameplayTag)WithoutTag;
    Parms.IncludeTriggeredAbilities = (uint8_t)IncludeTriggeredAbilities;
    Parms.TriggerOnce = (uint8_t)TriggerOnce;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAbilityTask_WaitAbilityActivate::OnAbilityActivate(struct UGameplayAbility* ActivatedAbility)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityTask_WaitAbilityActivate", "OnAbilityActivate");
    struct
    {
        struct UGameplayAbility* ActivatedAbility;
    } Parms{};
    Parms.ActivatedAbility = (struct UGameplayAbility*)ActivatedAbility;
    this->ProcessEvent(Func, &Parms);
}

// ---- UAbilityTask_WaitAbilityCommit::* ----
struct UAbilityTask_WaitAbilityCommit* UAbilityTask_WaitAbilityCommit::WaitForAbilityCommit_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTagQuery Query, uint8_t TriggerOnce)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_WaitAbilityCommit", "WaitForAbilityCommit_Query");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct FGameplayTagQuery Query;
        uint8_t TriggerOnce;
        struct UAbilityTask_WaitAbilityCommit* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.Query = (struct FGameplayTagQuery)Query;
    Parms.TriggerOnce = (uint8_t)TriggerOnce;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAbilityTask_WaitAbilityCommit* UAbilityTask_WaitAbilityCommit::WaitForAbilityCommit(struct UGameplayAbility* OwningAbility, struct FGameplayTag WithTag, struct FGameplayTag WithoutTage, uint8_t TriggerOnce)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_WaitAbilityCommit", "WaitForAbilityCommit");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct FGameplayTag WithTag;
        struct FGameplayTag WithoutTage;
        uint8_t TriggerOnce;
        struct UAbilityTask_WaitAbilityCommit* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.WithTag = (struct FGameplayTag)WithTag;
    Parms.WithoutTage = (struct FGameplayTag)WithoutTage;
    Parms.TriggerOnce = (uint8_t)TriggerOnce;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAbilityTask_WaitAbilityCommit::OnAbilityCommit(struct UGameplayAbility* ActivatedAbility)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityTask_WaitAbilityCommit", "OnAbilityCommit");
    struct
    {
        struct UGameplayAbility* ActivatedAbility;
    } Parms{};
    Parms.ActivatedAbility = (struct UGameplayAbility*)ActivatedAbility;
    this->ProcessEvent(Func, &Parms);
}

// ---- UAbilityTask_WaitAttributeChange::* ----
struct UAbilityTask_WaitAttributeChange* UAbilityTask_WaitAttributeChange::WaitForAttributeChangeWithComparison(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute InAttribute, struct FGameplayTag InWithTag, struct FGameplayTag InWithoutTag, EWaitAttributeChangeComparison InComparisonType, float InComparisonValue, uint8_t TriggerOnce, struct AActor* OptionalExternalOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_WaitAttributeChange", "WaitForAttributeChangeWithComparison");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct FGameplayAttribute InAttribute;
        struct FGameplayTag InWithTag;
        struct FGameplayTag InWithoutTag;
        enum EWaitAttributeChangeComparison InComparisonType;
        float InComparisonValue;
        uint8_t TriggerOnce;
        struct AActor* OptionalExternalOwner;
        struct UAbilityTask_WaitAttributeChange* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.InAttribute = (struct FGameplayAttribute)InAttribute;
    Parms.InWithTag = (struct FGameplayTag)InWithTag;
    Parms.InWithoutTag = (struct FGameplayTag)InWithoutTag;
    Parms.InComparisonType = (enum EWaitAttributeChangeComparison)InComparisonType;
    Parms.InComparisonValue = (float)InComparisonValue;
    Parms.TriggerOnce = (uint8_t)TriggerOnce;
    Parms.OptionalExternalOwner = (struct AActor*)OptionalExternalOwner;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAbilityTask_WaitAttributeChange* UAbilityTask_WaitAttributeChange::WaitForAttributeChange(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute Attribute, struct FGameplayTag WithSrcTag, struct FGameplayTag WithoutSrcTag, uint8_t TriggerOnce, struct AActor* OptionalExternalOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_WaitAttributeChange", "WaitForAttributeChange");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct FGameplayAttribute Attribute;
        struct FGameplayTag WithSrcTag;
        struct FGameplayTag WithoutSrcTag;
        uint8_t TriggerOnce;
        struct AActor* OptionalExternalOwner;
        struct UAbilityTask_WaitAttributeChange* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.Attribute = (struct FGameplayAttribute)Attribute;
    Parms.WithSrcTag = (struct FGameplayTag)WithSrcTag;
    Parms.WithoutSrcTag = (struct FGameplayTag)WithoutSrcTag;
    Parms.TriggerOnce = (uint8_t)TriggerOnce;
    Parms.OptionalExternalOwner = (struct AActor*)OptionalExternalOwner;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UAbilityTask_WaitAttributeChangeRatioThreshold::* ----
struct UAbilityTask_WaitAttributeChangeRatioThreshold* UAbilityTask_WaitAttributeChangeRatioThreshold::WaitForAttributeChangeRatioThreshold(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute AttributeNumerator, struct FGameplayAttribute AttributeDenominator, EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, uint8_t bTriggerOnce, struct AActor* OptionalExternalOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_WaitAttributeChangeRatioThreshold", "WaitForAttributeChangeRatioThreshold");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct FGameplayAttribute AttributeNumerator;
        struct FGameplayAttribute AttributeDenominator;
        enum EWaitAttributeChangeComparison ComparisonType;
        float ComparisonValue;
        uint8_t bTriggerOnce;
        struct AActor* OptionalExternalOwner;
        struct UAbilityTask_WaitAttributeChangeRatioThreshold* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.AttributeNumerator = (struct FGameplayAttribute)AttributeNumerator;
    Parms.AttributeDenominator = (struct FGameplayAttribute)AttributeDenominator;
    Parms.ComparisonType = (enum EWaitAttributeChangeComparison)ComparisonType;
    Parms.ComparisonValue = (float)ComparisonValue;
    Parms.bTriggerOnce = (uint8_t)bTriggerOnce;
    Parms.OptionalExternalOwner = (struct AActor*)OptionalExternalOwner;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UAbilityTask_WaitAttributeChangeThreshold::* ----
struct UAbilityTask_WaitAttributeChangeThreshold* UAbilityTask_WaitAttributeChangeThreshold::WaitForAttributeChangeThreshold(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute Attribute, EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, uint8_t bTriggerOnce, struct AActor* OptionalExternalOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_WaitAttributeChangeThreshold", "WaitForAttributeChangeThreshold");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct FGameplayAttribute Attribute;
        enum EWaitAttributeChangeComparison ComparisonType;
        float ComparisonValue;
        uint8_t bTriggerOnce;
        struct AActor* OptionalExternalOwner;
        struct UAbilityTask_WaitAttributeChangeThreshold* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.Attribute = (struct FGameplayAttribute)Attribute;
    Parms.ComparisonType = (enum EWaitAttributeChangeComparison)ComparisonType;
    Parms.ComparisonValue = (float)ComparisonValue;
    Parms.bTriggerOnce = (uint8_t)bTriggerOnce;
    Parms.OptionalExternalOwner = (struct AActor*)OptionalExternalOwner;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UAbilityTask_WaitCancel::* ----
struct UAbilityTask_WaitCancel* UAbilityTask_WaitCancel::WaitCancel(struct UGameplayAbility* OwningAbility)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_WaitCancel", "WaitCancel");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct UAbilityTask_WaitCancel* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAbilityTask_WaitCancel::OnLocalCancelCallback()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityTask_WaitCancel", "OnLocalCancelCallback");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAbilityTask_WaitCancel::OnCancelCallback()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityTask_WaitCancel", "OnCancelCallback");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UAbilityTask_WaitConfirm::* ----
struct UAbilityTask_WaitConfirm* UAbilityTask_WaitConfirm::WaitConfirm(struct UGameplayAbility* OwningAbility)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_WaitConfirm", "WaitConfirm");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct UAbilityTask_WaitConfirm* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAbilityTask_WaitConfirm::OnConfirmCallback(struct UGameplayAbility* InAbility)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityTask_WaitConfirm", "OnConfirmCallback");
    struct
    {
        struct UGameplayAbility* InAbility;
    } Parms{};
    Parms.InAbility = (struct UGameplayAbility*)InAbility;
    this->ProcessEvent(Func, &Parms);
}

// ---- UAbilityTask_WaitConfirmCancel::* ----
struct UAbilityTask_WaitConfirmCancel* UAbilityTask_WaitConfirmCancel::WaitConfirmCancel(struct UGameplayAbility* OwningAbility)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_WaitConfirmCancel", "WaitConfirmCancel");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct UAbilityTask_WaitConfirmCancel* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAbilityTask_WaitConfirmCancel::OnLocalConfirmCallback()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityTask_WaitConfirmCancel", "OnLocalConfirmCallback");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAbilityTask_WaitConfirmCancel::OnLocalCancelCallback()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityTask_WaitConfirmCancel", "OnLocalCancelCallback");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAbilityTask_WaitConfirmCancel::OnConfirmCallback()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityTask_WaitConfirmCancel", "OnConfirmCallback");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAbilityTask_WaitConfirmCancel::OnCancelCallback()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityTask_WaitConfirmCancel", "OnCancelCallback");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UAbilityTask_WaitDelay::* ----
struct UAbilityTask_WaitDelay* UAbilityTask_WaitDelay::WaitDelay(struct UGameplayAbility* OwningAbility, float Time)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_WaitDelay", "WaitDelay");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        float Time;
        struct UAbilityTask_WaitDelay* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.Time = (float)Time;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UAbilityTask_WaitGameplayEffectApplied::* ----
void UAbilityTask_WaitGameplayEffectApplied::OnApplyGameplayEffectCallback(struct UAbilitySystemComponent* Target, const struct FGameplayEffectSpec& SpecApplied, struct FActiveGameplayEffectHandle ActiveHandle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityTask_WaitGameplayEffectApplied", "OnApplyGameplayEffectCallback");
    struct
    {
        struct UAbilitySystemComponent* Target;
        struct FGameplayEffectSpec SpecApplied;
        struct FActiveGameplayEffectHandle ActiveHandle;
    } Parms{};
    Parms.Target = (struct UAbilitySystemComponent*)Target;
    Parms.SpecApplied = (struct FGameplayEffectSpec)SpecApplied;
    Parms.ActiveHandle = (struct FActiveGameplayEffectHandle)ActiveHandle;
    this->ProcessEvent(Func, &Parms);
}

// ---- UAbilityTask_WaitGameplayEffectApplied_Self::* ----
struct UAbilityTask_WaitGameplayEffectApplied_Self* UAbilityTask_WaitGameplayEffectApplied_Self::WaitGameplayEffectAppliedToSelf_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagQuery SourceTagQuery, struct FGameplayTagQuery TargetTagQuery, uint8_t TriggerOnce, struct AActor* OptionalExternalOwner, uint8_t ListenForPeriodicEffect)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_WaitGameplayEffectApplied_Self", "WaitGameplayEffectAppliedToSelf_Query");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct FGameplayTargetDataFilterHandle SourceFilter;
        struct FGameplayTagQuery SourceTagQuery;
        struct FGameplayTagQuery TargetTagQuery;
        uint8_t TriggerOnce;
        struct AActor* OptionalExternalOwner;
        uint8_t ListenForPeriodicEffect;
        struct UAbilityTask_WaitGameplayEffectApplied_Self* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.SourceFilter = (struct FGameplayTargetDataFilterHandle)SourceFilter;
    Parms.SourceTagQuery = (struct FGameplayTagQuery)SourceTagQuery;
    Parms.TargetTagQuery = (struct FGameplayTagQuery)TargetTagQuery;
    Parms.TriggerOnce = (uint8_t)TriggerOnce;
    Parms.OptionalExternalOwner = (struct AActor*)OptionalExternalOwner;
    Parms.ListenForPeriodicEffect = (uint8_t)ListenForPeriodicEffect;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAbilityTask_WaitGameplayEffectApplied_Self* UAbilityTask_WaitGameplayEffectApplied_Self::WaitGameplayEffectAppliedToSelf(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, uint8_t TriggerOnce, struct AActor* OptionalExternalOwner, uint8_t ListenForPeriodicEffect)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_WaitGameplayEffectApplied_Self", "WaitGameplayEffectAppliedToSelf");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct FGameplayTargetDataFilterHandle SourceFilter;
        struct FGameplayTagRequirements SourceTagRequirements;
        struct FGameplayTagRequirements TargetTagRequirements;
        uint8_t TriggerOnce;
        struct AActor* OptionalExternalOwner;
        uint8_t ListenForPeriodicEffect;
        struct UAbilityTask_WaitGameplayEffectApplied_Self* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.SourceFilter = (struct FGameplayTargetDataFilterHandle)SourceFilter;
    Parms.SourceTagRequirements = (struct FGameplayTagRequirements)SourceTagRequirements;
    Parms.TargetTagRequirements = (struct FGameplayTagRequirements)TargetTagRequirements;
    Parms.TriggerOnce = (uint8_t)TriggerOnce;
    Parms.OptionalExternalOwner = (struct AActor*)OptionalExternalOwner;
    Parms.ListenForPeriodicEffect = (uint8_t)ListenForPeriodicEffect;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UAbilityTask_WaitGameplayEffectApplied_Target::* ----
struct UAbilityTask_WaitGameplayEffectApplied_Target* UAbilityTask_WaitGameplayEffectApplied_Target::WaitGameplayEffectAppliedToTarget_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagQuery SourceTagQuery, struct FGameplayTagQuery TargetTagQuery, uint8_t TriggerOnce, struct AActor* OptionalExternalOwner, uint8_t ListenForPeriodicEffect)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_WaitGameplayEffectApplied_Target", "WaitGameplayEffectAppliedToTarget_Query");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct FGameplayTargetDataFilterHandle SourceFilter;
        struct FGameplayTagQuery SourceTagQuery;
        struct FGameplayTagQuery TargetTagQuery;
        uint8_t TriggerOnce;
        struct AActor* OptionalExternalOwner;
        uint8_t ListenForPeriodicEffect;
        struct UAbilityTask_WaitGameplayEffectApplied_Target* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.SourceFilter = (struct FGameplayTargetDataFilterHandle)SourceFilter;
    Parms.SourceTagQuery = (struct FGameplayTagQuery)SourceTagQuery;
    Parms.TargetTagQuery = (struct FGameplayTagQuery)TargetTagQuery;
    Parms.TriggerOnce = (uint8_t)TriggerOnce;
    Parms.OptionalExternalOwner = (struct AActor*)OptionalExternalOwner;
    Parms.ListenForPeriodicEffect = (uint8_t)ListenForPeriodicEffect;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAbilityTask_WaitGameplayEffectApplied_Target* UAbilityTask_WaitGameplayEffectApplied_Target::WaitGameplayEffectAppliedToTarget(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle TargetFilter, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, uint8_t TriggerOnce, struct AActor* OptionalExternalOwner, uint8_t ListenForPeriodicEffects)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_WaitGameplayEffectApplied_Target", "WaitGameplayEffectAppliedToTarget");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct FGameplayTargetDataFilterHandle TargetFilter;
        struct FGameplayTagRequirements SourceTagRequirements;
        struct FGameplayTagRequirements TargetTagRequirements;
        uint8_t TriggerOnce;
        struct AActor* OptionalExternalOwner;
        uint8_t ListenForPeriodicEffects;
        struct UAbilityTask_WaitGameplayEffectApplied_Target* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.TargetFilter = (struct FGameplayTargetDataFilterHandle)TargetFilter;
    Parms.SourceTagRequirements = (struct FGameplayTagRequirements)SourceTagRequirements;
    Parms.TargetTagRequirements = (struct FGameplayTagRequirements)TargetTagRequirements;
    Parms.TriggerOnce = (uint8_t)TriggerOnce;
    Parms.OptionalExternalOwner = (struct AActor*)OptionalExternalOwner;
    Parms.ListenForPeriodicEffects = (uint8_t)ListenForPeriodicEffects;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UAbilityTask_WaitGameplayEffectBlockedImmunity::* ----
struct UAbilityTask_WaitGameplayEffectBlockedImmunity* UAbilityTask_WaitGameplayEffectBlockedImmunity::WaitGameplayEffectBlockedByImmunity(struct UGameplayAbility* OwningAbility, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, struct AActor* OptionalExternalTarget, uint8_t OnlyTriggerOnce)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_WaitGameplayEffectBlockedImmunity", "WaitGameplayEffectBlockedByImmunity");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct FGameplayTagRequirements SourceTagRequirements;
        struct FGameplayTagRequirements TargetTagRequirements;
        struct AActor* OptionalExternalTarget;
        uint8_t OnlyTriggerOnce;
        struct UAbilityTask_WaitGameplayEffectBlockedImmunity* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.SourceTagRequirements = (struct FGameplayTagRequirements)SourceTagRequirements;
    Parms.TargetTagRequirements = (struct FGameplayTagRequirements)TargetTagRequirements;
    Parms.OptionalExternalTarget = (struct AActor*)OptionalExternalTarget;
    Parms.OnlyTriggerOnce = (uint8_t)OnlyTriggerOnce;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UAbilityTask_WaitGameplayEffectRemoved::* ----
struct UAbilityTask_WaitGameplayEffectRemoved* UAbilityTask_WaitGameplayEffectRemoved::WaitForGameplayEffectRemoved(struct UGameplayAbility* OwningAbility, struct FActiveGameplayEffectHandle Handle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_WaitGameplayEffectRemoved", "WaitForGameplayEffectRemoved");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct FActiveGameplayEffectHandle Handle;
        struct UAbilityTask_WaitGameplayEffectRemoved* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.Handle = (struct FActiveGameplayEffectHandle)Handle;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAbilityTask_WaitGameplayEffectRemoved::OnGameplayEffectRemoved(const struct FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityTask_WaitGameplayEffectRemoved", "OnGameplayEffectRemoved");
    struct
    {
        struct FGameplayEffectRemovalInfo InGameplayEffectRemovalInfo;
    } Parms{};
    Parms.InGameplayEffectRemovalInfo = (struct FGameplayEffectRemovalInfo)InGameplayEffectRemovalInfo;
    this->ProcessEvent(Func, &Parms);
}

// ---- UAbilityTask_WaitGameplayEffectStackChange::* ----
struct UAbilityTask_WaitGameplayEffectStackChange* UAbilityTask_WaitGameplayEffectStackChange::WaitForGameplayEffectStackChange(struct UGameplayAbility* OwningAbility, struct FActiveGameplayEffectHandle Handle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_WaitGameplayEffectStackChange", "WaitForGameplayEffectStackChange");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct FActiveGameplayEffectHandle Handle;
        struct UAbilityTask_WaitGameplayEffectStackChange* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.Handle = (struct FActiveGameplayEffectHandle)Handle;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAbilityTask_WaitGameplayEffectStackChange::OnGameplayEffectStackChange(struct FActiveGameplayEffectHandle Handle, int32_t NewCount, int32_t OldCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityTask_WaitGameplayEffectStackChange", "OnGameplayEffectStackChange");
    struct
    {
        struct FActiveGameplayEffectHandle Handle;
        int32_t NewCount;
        int32_t OldCount;
    } Parms{};
    Parms.Handle = (struct FActiveGameplayEffectHandle)Handle;
    Parms.NewCount = (int32_t)NewCount;
    Parms.OldCount = (int32_t)OldCount;
    this->ProcessEvent(Func, &Parms);
}

// ---- UAbilityTask_WaitGameplayEvent::* ----
struct UAbilityTask_WaitGameplayEvent* UAbilityTask_WaitGameplayEvent::WaitGameplayEvent(struct UGameplayAbility* OwningAbility, struct FGameplayTag EventTag, struct AActor* OptionalExternalTarget, uint8_t OnlyTriggerOnce, uint8_t OnlyMatchExact)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_WaitGameplayEvent", "WaitGameplayEvent");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct FGameplayTag EventTag;
        struct AActor* OptionalExternalTarget;
        uint8_t OnlyTriggerOnce;
        uint8_t OnlyMatchExact;
        struct UAbilityTask_WaitGameplayEvent* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.EventTag = (struct FGameplayTag)EventTag;
    Parms.OptionalExternalTarget = (struct AActor*)OptionalExternalTarget;
    Parms.OnlyTriggerOnce = (uint8_t)OnlyTriggerOnce;
    Parms.OnlyMatchExact = (uint8_t)OnlyMatchExact;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UAbilityTask_WaitGameplayTag::* ----
void UAbilityTask_WaitGameplayTag::GameplayTagCallback(struct FGameplayTag Tag, int32_t NewCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityTask_WaitGameplayTag", "GameplayTagCallback");
    struct
    {
        struct FGameplayTag Tag;
        int32_t NewCount;
    } Parms{};
    Parms.Tag = (struct FGameplayTag)Tag;
    Parms.NewCount = (int32_t)NewCount;
    this->ProcessEvent(Func, &Parms);
}

// ---- UAbilityTask_WaitGameplayTagAdded::* ----
struct UAbilityTask_WaitGameplayTagAdded* UAbilityTask_WaitGameplayTagAdded::WaitGameplayTagAdd(struct UGameplayAbility* OwningAbility, struct FGameplayTag Tag, struct AActor* InOptionalExternalTarget, uint8_t OnlyTriggerOnce)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_WaitGameplayTagAdded", "WaitGameplayTagAdd");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct FGameplayTag Tag;
        struct AActor* InOptionalExternalTarget;
        uint8_t OnlyTriggerOnce;
        struct UAbilityTask_WaitGameplayTagAdded* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.Tag = (struct FGameplayTag)Tag;
    Parms.InOptionalExternalTarget = (struct AActor*)InOptionalExternalTarget;
    Parms.OnlyTriggerOnce = (uint8_t)OnlyTriggerOnce;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UAbilityTask_WaitGameplayTagRemoved::* ----
struct UAbilityTask_WaitGameplayTagRemoved* UAbilityTask_WaitGameplayTagRemoved::WaitGameplayTagRemove(struct UGameplayAbility* OwningAbility, struct FGameplayTag Tag, struct AActor* InOptionalExternalTarget, uint8_t OnlyTriggerOnce)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_WaitGameplayTagRemoved", "WaitGameplayTagRemove");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct FGameplayTag Tag;
        struct AActor* InOptionalExternalTarget;
        uint8_t OnlyTriggerOnce;
        struct UAbilityTask_WaitGameplayTagRemoved* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.Tag = (struct FGameplayTag)Tag;
    Parms.InOptionalExternalTarget = (struct AActor*)InOptionalExternalTarget;
    Parms.OnlyTriggerOnce = (uint8_t)OnlyTriggerOnce;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UAbilityTask_WaitInputPress::* ----
struct UAbilityTask_WaitInputPress* UAbilityTask_WaitInputPress::WaitInputPress(struct UGameplayAbility* OwningAbility, uint8_t bTestAlreadyPressed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_WaitInputPress", "WaitInputPress");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        uint8_t bTestAlreadyPressed;
        struct UAbilityTask_WaitInputPress* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.bTestAlreadyPressed = (uint8_t)bTestAlreadyPressed;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAbilityTask_WaitInputPress::OnPressCallback()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityTask_WaitInputPress", "OnPressCallback");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UAbilityTask_WaitInputRelease::* ----
struct UAbilityTask_WaitInputRelease* UAbilityTask_WaitInputRelease::WaitInputRelease(struct UGameplayAbility* OwningAbility, uint8_t bTestAlreadyReleased)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_WaitInputRelease", "WaitInputRelease");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        uint8_t bTestAlreadyReleased;
        struct UAbilityTask_WaitInputRelease* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.bTestAlreadyReleased = (uint8_t)bTestAlreadyReleased;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAbilityTask_WaitInputRelease::OnReleaseCallback()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityTask_WaitInputRelease", "OnReleaseCallback");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UAbilityTask_WaitMovementModeChange::* ----
void UAbilityTask_WaitMovementModeChange::OnMovementModeChange(struct ACHARACTER* CHARACTER, EMovementMode PrevMovementMode, uint8_t PreviousCustomMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityTask_WaitMovementModeChange", "OnMovementModeChange");
    struct
    {
        struct ACHARACTER* CHARACTER;
        enum EMovementMode PrevMovementMode;
        uint8_t PreviousCustomMode;
    } Parms{};
    Parms.CHARACTER = (struct ACHARACTER*)CHARACTER;
    Parms.PrevMovementMode = (enum EMovementMode)PrevMovementMode;
    Parms.PreviousCustomMode = (uint8_t)PreviousCustomMode;
    this->ProcessEvent(Func, &Parms);
}

struct UAbilityTask_WaitMovementModeChange* UAbilityTask_WaitMovementModeChange::CreateWaitMovementModeChange(struct UGameplayAbility* OwningAbility, EMovementMode NewMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_WaitMovementModeChange", "CreateWaitMovementModeChange");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        enum EMovementMode NewMode;
        struct UAbilityTask_WaitMovementModeChange* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.NewMode = (enum EMovementMode)NewMode;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UAbilityTask_WaitOverlap::* ----
struct UAbilityTask_WaitOverlap* UAbilityTask_WaitOverlap::WaitForOverlap(struct UGameplayAbility* OwningAbility)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_WaitOverlap", "WaitForOverlap");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct UAbilityTask_WaitOverlap* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAbilityTask_WaitOverlap::OnHitCallback(struct UPrimitiveComponent* HitComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, const struct FHitResult& Hit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityTask_WaitOverlap", "OnHitCallback");
    struct
    {
        struct UPrimitiveComponent* HitComp;
        struct AActor* OtherActor;
        struct UPrimitiveComponent* OtherComp;
        struct FVector NormalImpulse;
        struct FHitResult Hit;
    } Parms{};
    Parms.HitComp = (struct UPrimitiveComponent*)HitComp;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.OtherComp = (struct UPrimitiveComponent*)OtherComp;
    Parms.NormalImpulse = (struct FVector)NormalImpulse;
    Parms.Hit = (struct FHitResult)Hit;
    this->ProcessEvent(Func, &Parms);
}

// ---- UAbilityTask_WaitTargetData::* ----
struct UAbilityTask_WaitTargetData* UAbilityTask_WaitTargetData::WaitTargetDataUsingActor(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, EGameplayTargetingConfirmation ConfirmationType, struct AGameplayAbilityTargetActor* TargetActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_WaitTargetData", "WaitTargetDataUsingActor");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct FName TaskInstanceName;
        enum EGameplayTargetingConfirmation ConfirmationType;
        struct AGameplayAbilityTargetActor* TargetActor;
        struct UAbilityTask_WaitTargetData* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.TaskInstanceName = (struct FName)TaskInstanceName;
    Parms.ConfirmationType = (enum EGameplayTargetingConfirmation)ConfirmationType;
    Parms.TargetActor = (struct AGameplayAbilityTargetActor*)TargetActor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAbilityTask_WaitTargetData* UAbilityTask_WaitTargetData::WaitTargetData(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, EGameplayTargetingConfirmation ConfirmationType, struct AGameplayAbilityTargetActor* Class)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_WaitTargetData", "WaitTargetData");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct FName TaskInstanceName;
        enum EGameplayTargetingConfirmation ConfirmationType;
        struct AGameplayAbilityTargetActor* Class;
        struct UAbilityTask_WaitTargetData* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.TaskInstanceName = (struct FName)TaskInstanceName;
    Parms.ConfirmationType = (enum EGameplayTargetingConfirmation)ConfirmationType;
    Parms.Class = (struct AGameplayAbilityTargetActor*)Class;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAbilityTask_WaitTargetData::OnTargetDataReplicatedCancelledCallback()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityTask_WaitTargetData", "OnTargetDataReplicatedCancelledCallback");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAbilityTask_WaitTargetData::OnTargetDataReplicatedCallback(const struct FGameplayAbilityTargetDataHandle& Data, struct FGameplayTag ActivationTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityTask_WaitTargetData", "OnTargetDataReplicatedCallback");
    struct
    {
        struct FGameplayAbilityTargetDataHandle Data;
        struct FGameplayTag ActivationTag;
    } Parms{};
    Parms.Data = (struct FGameplayAbilityTargetDataHandle)Data;
    Parms.ActivationTag = (struct FGameplayTag)ActivationTag;
    this->ProcessEvent(Func, &Parms);
}

void UAbilityTask_WaitTargetData::OnTargetDataReadyCallback(const struct FGameplayAbilityTargetDataHandle& Data)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityTask_WaitTargetData", "OnTargetDataReadyCallback");
    struct
    {
        struct FGameplayAbilityTargetDataHandle Data;
    } Parms{};
    Parms.Data = (struct FGameplayAbilityTargetDataHandle)Data;
    this->ProcessEvent(Func, &Parms);
}

void UAbilityTask_WaitTargetData::OnTargetDataCancelledCallback(const struct FGameplayAbilityTargetDataHandle& Data)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityTask_WaitTargetData", "OnTargetDataCancelledCallback");
    struct
    {
        struct FGameplayAbilityTargetDataHandle Data;
    } Parms{};
    Parms.Data = (struct FGameplayAbilityTargetDataHandle)Data;
    this->ProcessEvent(Func, &Parms);
}

void UAbilityTask_WaitTargetData::FinishSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* SpawnedActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityTask_WaitTargetData", "FinishSpawningActor");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct AGameplayAbilityTargetActor* SpawnedActor;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.SpawnedActor = (struct AGameplayAbilityTargetActor*)SpawnedActor;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UAbilityTask_WaitTargetData::BeginSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* Class, struct AGameplayAbilityTargetActor*& SpawnedActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityTask_WaitTargetData", "BeginSpawningActor");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct AGameplayAbilityTargetActor* Class;
        struct AGameplayAbilityTargetActor* SpawnedActor;
        uint8_t ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.Class = (struct AGameplayAbilityTargetActor*)Class;
    this->ProcessEvent(Func, &Parms);
    SpawnedActor = Parms.SpawnedActor;
    return Parms.ReturnValue;
}

// ---- UAbilityTask_WaitVelocityChange::* ----
struct UAbilityTask_WaitVelocityChange* UAbilityTask_WaitVelocityChange::CreateWaitVelocityChange(struct UGameplayAbility* OwningAbility, struct FVector Direction, float MinimumMagnitude)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_WaitVelocityChange", "CreateWaitVelocityChange");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        struct FVector Direction;
        float MinimumMagnitude;
        struct UAbilityTask_WaitVelocityChange* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.Direction = (struct FVector)Direction;
    Parms.MinimumMagnitude = (float)MinimumMagnitude;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- AGameplayAbilityTargetActor::* ----
void AGameplayAbilityTargetActor::ConfirmTargeting()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbilityTargetActor", "ConfirmTargeting");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGameplayAbilityTargetActor::CancelTargeting()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbilityTargetActor", "CancelTargeting");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- AGameplayAbilityWorldReticle::* ----
void AGameplayAbilityWorldReticle::SetReticleMaterialParamVector(struct FName ParamName, struct FVector Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbilityWorldReticle", "SetReticleMaterialParamVector");
    struct
    {
        struct FName ParamName;
        struct FVector Value;
    } Parms{};
    Parms.ParamName = (struct FName)ParamName;
    Parms.Value = (struct FVector)Value;
    this->ProcessEvent(Func, &Parms);
}

void AGameplayAbilityWorldReticle::SetReticleMaterialParamFloat(struct FName ParamName, float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbilityWorldReticle", "SetReticleMaterialParamFloat");
    struct
    {
        struct FName ParamName;
        float Value;
    } Parms{};
    Parms.ParamName = (struct FName)ParamName;
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void AGameplayAbilityWorldReticle::OnValidTargetChanged(uint8_t bNewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbilityWorldReticle", "OnValidTargetChanged");
    struct
    {
        uint8_t bNewValue;
    } Parms{};
    Parms.bNewValue = (uint8_t)bNewValue;
    this->ProcessEvent(Func, &Parms);
}

void AGameplayAbilityWorldReticle::OnTargetingAnActor(uint8_t bNewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbilityWorldReticle", "OnTargetingAnActor");
    struct
    {
        uint8_t bNewValue;
    } Parms{};
    Parms.bNewValue = (uint8_t)bNewValue;
    this->ProcessEvent(Func, &Parms);
}

void AGameplayAbilityWorldReticle::OnParametersInitialized()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbilityWorldReticle", "OnParametersInitialized");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGameplayAbilityWorldReticle::FaceTowardSource(uint8_t bFaceIn2D)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayAbilityWorldReticle", "FaceTowardSource");
    struct
    {
        uint8_t bFaceIn2D;
    } Parms{};
    Parms.bFaceIn2D = (uint8_t)bFaceIn2D;
    this->ProcessEvent(Func, &Parms);
}

// ---- IGameplayCueInterface::* ----
void IGameplayCueInterface::ForwardGameplayCueToParent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayCueInterface", "ForwardGameplayCueToParent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void IGameplayCueInterface::BlueprintCustomHandler(EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayCueInterface", "BlueprintCustomHandler");
    struct
    {
        enum EGameplayCueEvent EventType;
        struct FGameplayCueParameters Parameters;
    } Parms{};
    Parms.EventType = (enum EGameplayCueEvent)EventType;
    Parms.Parameters = (struct FGameplayCueParameters)Parameters;
    this->ProcessEvent(Func, &Parms);
}

// ---- AGameplayCueNotify_Actor::* ----
uint8_t AGameplayCueNotify_Actor::WhileActive(struct AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayCueNotify_Actor", "WhileActive");
    struct
    {
        struct AActor* MyTarget;
        struct FGameplayCueParameters Parameters;
        uint8_t ReturnValue;
    } Parms{};
    Parms.MyTarget = (struct AActor*)MyTarget;
    Parms.Parameters = (struct FGameplayCueParameters)Parameters;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AGameplayCueNotify_Actor::OnRemove(struct AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayCueNotify_Actor", "OnRemove");
    struct
    {
        struct AActor* MyTarget;
        struct FGameplayCueParameters Parameters;
        uint8_t ReturnValue;
    } Parms{};
    Parms.MyTarget = (struct AActor*)MyTarget;
    Parms.Parameters = (struct FGameplayCueParameters)Parameters;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AGameplayCueNotify_Actor::OnOwnerDestroyed(struct AActor* DestroyedActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayCueNotify_Actor", "OnOwnerDestroyed");
    struct
    {
        struct AActor* DestroyedActor;
    } Parms{};
    Parms.DestroyedActor = (struct AActor*)DestroyedActor;
    this->ProcessEvent(Func, &Parms);
}

uint8_t AGameplayCueNotify_Actor::OnExecute(struct AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayCueNotify_Actor", "OnExecute");
    struct
    {
        struct AActor* MyTarget;
        struct FGameplayCueParameters Parameters;
        uint8_t ReturnValue;
    } Parms{};
    Parms.MyTarget = (struct AActor*)MyTarget;
    Parms.Parameters = (struct FGameplayCueParameters)Parameters;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AGameplayCueNotify_Actor::OnActive(struct AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayCueNotify_Actor", "OnActive");
    struct
    {
        struct AActor* MyTarget;
        struct FGameplayCueParameters Parameters;
        uint8_t ReturnValue;
    } Parms{};
    Parms.MyTarget = (struct AActor*)MyTarget;
    Parms.Parameters = (struct FGameplayCueParameters)Parameters;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AGameplayCueNotify_Actor::K2_HandleGameplayCue(struct AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayCueNotify_Actor", "K2_HandleGameplayCue");
    struct
    {
        struct AActor* MyTarget;
        enum EGameplayCueEvent EventType;
        struct FGameplayCueParameters Parameters;
    } Parms{};
    Parms.MyTarget = (struct AActor*)MyTarget;
    Parms.EventType = (enum EGameplayCueEvent)EventType;
    Parms.Parameters = (struct FGameplayCueParameters)Parameters;
    this->ProcessEvent(Func, &Parms);
}

void AGameplayCueNotify_Actor::K2_EndGameplayCue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayCueNotify_Actor", "K2_EndGameplayCue");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UGameplayCueNotify_Static::* ----
uint8_t UGameplayCueNotify_Static::WhileActive(struct AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayCueNotify_Static", "WhileActive");
    struct
    {
        struct AActor* MyTarget;
        struct FGameplayCueParameters Parameters;
        uint8_t ReturnValue;
    } Parms{};
    Parms.MyTarget = (struct AActor*)MyTarget;
    Parms.Parameters = (struct FGameplayCueParameters)Parameters;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameplayCueNotify_Static::OnRemove(struct AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayCueNotify_Static", "OnRemove");
    struct
    {
        struct AActor* MyTarget;
        struct FGameplayCueParameters Parameters;
        uint8_t ReturnValue;
    } Parms{};
    Parms.MyTarget = (struct AActor*)MyTarget;
    Parms.Parameters = (struct FGameplayCueParameters)Parameters;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameplayCueNotify_Static::OnExecute(struct AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayCueNotify_Static", "OnExecute");
    struct
    {
        struct AActor* MyTarget;
        struct FGameplayCueParameters Parameters;
        uint8_t ReturnValue;
    } Parms{};
    Parms.MyTarget = (struct AActor*)MyTarget;
    Parms.Parameters = (struct FGameplayCueParameters)Parameters;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameplayCueNotify_Static::OnActive(struct AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayCueNotify_Static", "OnActive");
    struct
    {
        struct AActor* MyTarget;
        struct FGameplayCueParameters Parameters;
        uint8_t ReturnValue;
    } Parms{};
    Parms.MyTarget = (struct AActor*)MyTarget;
    Parms.Parameters = (struct FGameplayCueParameters)Parameters;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGameplayCueNotify_Static::K2_HandleGameplayCue(struct AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayCueNotify_Static", "K2_HandleGameplayCue");
    struct
    {
        struct AActor* MyTarget;
        enum EGameplayCueEvent EventType;
        struct FGameplayCueParameters Parameters;
    } Parms{};
    Parms.MyTarget = (struct AActor*)MyTarget;
    Parms.EventType = (enum EGameplayCueEvent)EventType;
    Parms.Parameters = (struct FGameplayCueParameters)Parameters;
    this->ProcessEvent(Func, &Parms);
}

// ---- UGameplayEffectCustomApplicationRequirement::* ----
uint8_t UGameplayEffectCustomApplicationRequirement::CanApplyGameplayEffect(struct UGameplayEffect* GameplayEffect, const struct FGameplayEffectSpec& Spec, struct UAbilitySystemComponent* ASC)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayEffectCustomApplicationRequirement", "CanApplyGameplayEffect");
    struct
    {
        struct UGameplayEffect* GameplayEffect;
        struct FGameplayEffectSpec Spec;
        struct UAbilitySystemComponent* ASC;
        uint8_t ReturnValue;
    } Parms{};
    Parms.GameplayEffect = (struct UGameplayEffect*)GameplayEffect;
    Parms.Spec = (struct FGameplayEffectSpec)Spec;
    Parms.ASC = (struct UAbilitySystemComponent*)ASC;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGameplayEffectExecutionCalculation::* ----
void UGameplayEffectExecutionCalculation::Execute(const struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput& OutExecutionOutput)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayEffectExecutionCalculation", "Execute");
    struct
    {
        struct FGameplayEffectCustomExecutionParameters ExecutionParams;
        struct FGameplayEffectCustomExecutionOutput OutExecutionOutput;
    } Parms{};
    Parms.ExecutionParams = (struct FGameplayEffectCustomExecutionParameters)ExecutionParams;
    this->ProcessEvent(Func, &Parms);
    OutExecutionOutput = Parms.OutExecutionOutput;
}

// ---- UGameplayEffectStackingExpiration::* ----
int32_t UGameplayEffectStackingExpiration::OnExpiration(const struct FGameplayEffectSpec& Spec, int32_t StackToRemove)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayEffectStackingExpiration", "OnExpiration");
    struct
    {
        struct FGameplayEffectSpec Spec;
        int32_t StackToRemove;
        int32_t ReturnValue;
    } Parms{};
    Parms.Spec = (struct FGameplayEffectSpec)Spec;
    Parms.StackToRemove = (int32_t)StackToRemove;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGameplayModMagnitudeCalculation::* ----
float UGameplayModMagnitudeCalculation::CalculateBaseMagnitude(const struct FGameplayEffectSpec& Spec)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayModMagnitudeCalculation", "CalculateBaseMagnitude");
    struct
    {
        struct FGameplayEffectSpec Spec;
        float ReturnValue;
    } Parms{};
    Parms.Spec = (struct FGameplayEffectSpec)Spec;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGameplayTagReponseTable::* ----
void UGameplayTagReponseTable::TagResponseEvent(struct FGameplayTag Tag, int32_t NewCount, struct UAbilitySystemComponent* ASC, int32_t Idx)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayTagReponseTable", "TagResponseEvent");
    struct
    {
        struct FGameplayTag Tag;
        int32_t NewCount;
        struct UAbilitySystemComponent* ASC;
        int32_t Idx;
    } Parms{};
    Parms.Tag = (struct FGameplayTag)Tag;
    Parms.NewCount = (int32_t)NewCount;
    Parms.ASC = (struct UAbilitySystemComponent*)ASC;
    Parms.Idx = (int32_t)Idx;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
