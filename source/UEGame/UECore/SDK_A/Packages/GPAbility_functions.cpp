#include "GPAbility.hpp"
#include "Engine.hpp"
#include "GameplayAbilities.hpp"
#include "GameplayTags.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// IAttachedAbilities
struct TArray<struct UGameplayAbility*> IAttachedAbilities::Z_GetAbilitySet()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AttachedAbilities", "Z_GetAbilitySet");
    struct
    {
        struct TArray<struct UGameplayAbility*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGPAbilityBase
uint8_t UGPAbilityBase::OwnerHasGameplayTag(struct FGameplayTag Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAbilityBase", "OwnerHasGameplayTag");
    struct
    {
        struct FGameplayTag Tag;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Tag = (struct FGameplayTag)Tag;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAbilityBase::OwnerHasAnyGameplayTag(const struct FGameplayTagContainer& Tags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAbilityBase", "OwnerHasAnyGameplayTag");
    struct
    {
        struct FGameplayTagContainer Tags;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Tags = (struct FGameplayTagContainer)Tags;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAbilityBase::OwnerHasAllGameplayTag(const struct FGameplayTagContainer& Tags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAbilityBase", "OwnerHasAllGameplayTag");
    struct
    {
        struct FGameplayTagContainer Tags;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Tags = (struct FGameplayTagContainer)Tags;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPAbilityBase::OnGiveNotify()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAbilityBase", "OnGiveNotify");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPAbilityBase::OnGameplayEvent(struct FGameplayTag EventTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAbilityBase", "OnGameplayEvent");
    struct
    {
        struct FGameplayTag EventTag;
    } Parms{};
    Parms.EventTag = (struct FGameplayTag)EventTag;
    this->ProcessEvent(Func, &Parms);
}

void UGPAbilityBase::OnClientToServerActorSpawn(struct AActor* SpawnedActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAbilityBase", "OnClientToServerActorSpawn");
    struct
    {
        struct AActor* SpawnedActor;
    } Parms{};
    Parms.SpawnedActor = (struct AActor*)SpawnedActor;
    this->ProcessEvent(Func, &Parms);
}

void UGPAbilityBase::K2_RemoveGameplayCueWithParams(struct FGameplayTag GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAbilityBase", "K2_RemoveGameplayCueWithParams");
    struct
    {
        struct FGameplayTag GameplayCueTag;
        struct FGameplayCueParameters GameplayCueParameter;
    } Parms{};
    Parms.GameplayCueTag = (struct FGameplayTag)GameplayCueTag;
    Parms.GameplayCueParameter = (struct FGameplayCueParameters)GameplayCueParameter;
    this->ProcessEvent(Func, &Parms);
}

struct UGPASC* UGPAbilityBase::GetGPASC()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAbilityBase", "GetGPASC");
    struct
    {
        struct UGPASC* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGameplayTagContainer UGPAbilityBase::GetAbilityTags()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAbilityBase", "GetAbilityTags");
    struct
    {
        struct FGameplayTagContainer ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPAbilityBase::ClientTrySpawnActor(const struct FVector& Position, const struct FRotator& Rotation, float Speed, struct UObject* ActorType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAbilityBase", "ClientTrySpawnActor");
    struct
    {
        struct FVector Position;
        struct FRotator Rotation;
        float Speed;
        struct UObject* ActorType;
    } Parms{};
    Parms.Position = (struct FVector)Position;
    Parms.Rotation = (struct FRotator)Rotation;
    Parms.Speed = (float)Speed;
    Parms.ActorType = (struct UObject*)ActorType;
    this->ProcessEvent(Func, &Parms);
}

// IAttachedAttributes
struct TArray<struct UAttributeSet*> IAttachedAttributes::Z_GetAttributeSet()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AttachedAttributes", "Z_GetAttributeSet");
    struct
    {
        struct TArray<struct UAttributeSet*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGPASBluePrintLibrary
uint8_t UGPASBluePrintLibrary::EffectContextHasActors(struct FGameplayEffectContextHandle EffectContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPASBluePrintLibrary", "EffectContextHasActors");
    struct
    {
        struct FGameplayEffectContextHandle EffectContext;
        uint8_t ReturnValue;
    } Parms{};
    Parms.EffectContext = (struct FGameplayEffectContextHandle)EffectContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct AActor*> UGPASBluePrintLibrary::EffectContextGetActors(struct FGameplayEffectContextHandle EffectContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPASBluePrintLibrary", "EffectContextGetActors");
    struct
    {
        struct FGameplayEffectContextHandle EffectContext;
        struct TArray<struct AActor*> ReturnValue;
    } Parms{};
    Parms.EffectContext = (struct FGameplayEffectContextHandle)EffectContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPASBluePrintLibrary::EffectContextAddActors(struct FGameplayEffectContextHandle EffectContext, const struct TArray<struct AActor*>& InActors, uint8_t bReset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPASBluePrintLibrary", "EffectContextAddActors");
    struct
    {
        struct FGameplayEffectContextHandle EffectContext;
        struct TArray<struct AActor*> InActors;
        uint8_t bReset;
    } Parms{};
    Parms.EffectContext = (struct FGameplayEffectContextHandle)EffectContext;
    Parms.InActors = (struct TArray<struct AActor*>)InActors;
    Parms.bReset = (uint8_t)bReset;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UGPASC
uint8_t UGPASC::TryActivateAbilityByClassWithOutput(struct UGameplayAbility* InAbilityToActivate, struct TArray<struct UGPAbilityBase*>& activedAbility, uint8_t bAllowRemoteActivation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPASC", "TryActivateAbilityByClassWithOutput");
    struct
    {
        struct UGameplayAbility* InAbilityToActivate;
        struct TArray<struct UGPAbilityBase*> activedAbility;
        uint8_t bAllowRemoteActivation;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InAbilityToActivate = (struct UGameplayAbility*)InAbilityToActivate;
    Parms.bAllowRemoteActivation = (uint8_t)bAllowRemoteActivation;
    this->ProcessEvent(Func, &Parms);
    activedAbility = Parms.activedAbility;
    return Parms.ReturnValue;
}

uint8_t UGPASC::RemoveAttributeSetByClass(struct UAttributeSet* SetClass, uint8_t bEnsureExist)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPASC", "RemoveAttributeSetByClass");
    struct
    {
        struct UAttributeSet* SetClass;
        uint8_t bEnsureExist;
        uint8_t ReturnValue;
    } Parms{};
    Parms.SetClass = (struct UAttributeSet*)SetClass;
    Parms.bEnsureExist = (uint8_t)bEnsureExist;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPASC::OnRep_HandleInfos(const struct FGPAbilityRepHandles& OldInfos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPASC", "OnRep_HandleInfos");
    struct
    {
        struct FGPAbilityRepHandles OldInfos;
    } Parms{};
    Parms.OldInfos = (struct FGPAbilityRepHandles)OldInfos;
    this->ProcessEvent(Func, &Parms);
}

struct TArray<struct FActiveGameplayEffectHandle> UGPASC::K2_ApplyEffectsToTarget(struct AActor* TargetActor, const struct TArray<struct UGameplayEffect*>& EffectClasses, struct FHitResult HitResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPASC", "K2_ApplyEffectsToTarget");
    struct
    {
        struct AActor* TargetActor;
        struct TArray<struct UGameplayEffect*> EffectClasses;
        struct FHitResult HitResult;
        struct TArray<struct FActiveGameplayEffectHandle> ReturnValue;
    } Parms{};
    Parms.TargetActor = (struct AActor*)TargetActor;
    Parms.EffectClasses = (struct TArray<struct UGameplayEffect*>)EffectClasses;
    Parms.HitResult = (struct FHitResult)HitResult;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGPASC::GetDefaultLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPASC", "GetDefaultLevel");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPASC::GetActiveAbilitiesWithTags(const struct FGameplayTagContainer& GameplayTagContainer, struct TArray<struct UGPAbilityBase*>& ActiveAbilities)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPASC", "GetActiveAbilitiesWithTags");
    struct
    {
        struct FGameplayTagContainer GameplayTagContainer;
        struct TArray<struct UGPAbilityBase*> ActiveAbilities;
    } Parms{};
    Parms.GameplayTagContainer = (struct FGameplayTagContainer)GameplayTagContainer;
    this->ProcessEvent(Func, &Parms);
    ActiveAbilities = Parms.ActiveAbilities;
}

struct UGPASC* UGPASC::GetAbilitySystemComponentFromActor(struct AActor* Actor, uint8_t bEnsure)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPASC", "GetAbilitySystemComponentFromActor");
    struct
    {
        struct AActor* Actor;
        uint8_t bEnsure;
        struct UGPASC* ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.bEnsure = (uint8_t)bEnsure;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAttributeSet* UGPASC::FindEquipAttributeSetBySetName(struct FString SetName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPASC", "FindEquipAttributeSetBySetName");
    struct
    {
        struct FString SetName;
        struct UAttributeSet* ReturnValue;
    } Parms{};
    Parms.SetName = (struct FString)SetName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAttributeSet* UGPASC::FindAttributeSetBySetName(struct FString SetName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPASC", "FindAttributeSetBySetName");
    struct
    {
        struct FString SetName;
        struct UAttributeSet* ReturnValue;
    } Parms{};
    Parms.SetName = (struct FString)SetName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAttributeSet* UGPASC::FindAttributeSetByFName(struct FName SetName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPASC", "FindAttributeSetByFName");
    struct
    {
        struct FName SetName;
        struct UAttributeSet* ReturnValue;
    } Parms{};
    Parms.SetName = (struct FName)SetName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAttributeSet* UGPASC::FindAttributeSetByClass(struct UAttributeSet* SetClass, uint8_t bExact)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPASC", "FindAttributeSetByClass");
    struct
    {
        struct UAttributeSet* SetClass;
        uint8_t bExact;
        struct UAttributeSet* ReturnValue;
    } Parms{};
    Parms.SetClass = (struct UAttributeSet*)SetClass;
    Parms.bExact = (uint8_t)bExact;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UAttributeSet*> UGPASC::FilterAttributeSets(struct UAttributeSet* AttributeClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPASC", "FilterAttributeSets");
    struct
    {
        struct UAttributeSet* AttributeClass;
        struct TArray<struct UAttributeSet*> ReturnValue;
    } Parms{};
    Parms.AttributeClass = (struct UAttributeSet*)AttributeClass;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAttributeSet* UGPASC::AttachAttributeSetByClass(struct UGPAttributeSetBase* SetClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPASC", "AttachAttributeSetByClass");
    struct
    {
        struct UGPAttributeSetBase* SetClass;
        struct UAttributeSet* ReturnValue;
    } Parms{};
    Parms.SetClass = (struct UGPAttributeSetBase*)SetClass;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPASC::ASCModifyAttribute(struct FString SetClassAndPropName, float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPASC", "ASCModifyAttribute");
    struct
    {
        struct FString SetClassAndPropName;
        float Value;
    } Parms{};
    Parms.SetClassAndPropName = (struct FString)SetClassAndPropName;
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

struct UAttributeSet* UGPASC::AddEquipAttributeSetBySetName(struct FString EquipSetName, struct FString AttributeSetName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPASC", "AddEquipAttributeSetBySetName");
    struct
    {
        struct FString EquipSetName;
        struct FString AttributeSetName;
        struct UAttributeSet* ReturnValue;
    } Parms{};
    Parms.EquipSetName = (struct FString)EquipSetName;
    Parms.AttributeSetName = (struct FString)AttributeSetName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPASC::AddAttributeSetByObject(struct UAttributeSet* AttributeObj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPASC", "AddAttributeSetByObject");
    struct
    {
        struct UAttributeSet* AttributeObj;
        uint8_t ReturnValue;
    } Parms{};
    Parms.AttributeObj = (struct UAttributeSet*)AttributeObj;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAttributeSet* UGPASC::AddAttributeSetByClass(struct UAttributeSet* SetClass, uint8_t& bNewCreated)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPASC", "AddAttributeSetByClass");
    struct
    {
        struct UAttributeSet* SetClass;
        uint8_t bNewCreated;
        struct UAttributeSet* ReturnValue;
    } Parms{};
    Parms.SetClass = (struct UAttributeSet*)SetClass;
    this->ProcessEvent(Func, &Parms);
    bNewCreated = Parms.bNewCreated;
    return Parms.ReturnValue;
}

// UGPAttributeSetAbilityLevel
void UGPAttributeSetAbilityLevel::OnRep_AbilityLevel(const struct FGameplayAttributeData& OldData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAttributeSetAbilityLevel", "OnRep_AbilityLevel");
    struct
    {
        struct FGameplayAttributeData OldData;
    } Parms{};
    Parms.OldData = (struct FGameplayAttributeData)OldData;
    this->ProcessEvent(Func, &Parms);
}

// UGPBPLib
uint8_t UGPBPLib::IsInEditor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPBPLib", "IsInEditor");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGameplayTagContainer UGPBPLib::FindGameplayTag(const struct FGameplayTagContainer& Container, const struct FGameplayTagContainer& Filter, uint8_t bExact)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPBPLib", "FindGameplayTag");
    struct
    {
        struct FGameplayTagContainer Container;
        struct FGameplayTagContainer Filter;
        uint8_t bExact;
        struct FGameplayTagContainer ReturnValue;
    } Parms{};
    Parms.Container = (struct FGameplayTagContainer)Container;
    Parms.Filter = (struct FGameplayTagContainer)Filter;
    Parms.bExact = (uint8_t)bExact;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPBPLib::BranchInEditor(EEditorExec& Out)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPBPLib", "BranchInEditor");
    struct
    {
        enum EEditorExec Out;
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Out = Parms.Out;
    return Parms.ReturnValue;
}

// UGPClassReigstry
void UGPClassReigstry::RegisterAttribute(struct AActor* ActorClass, struct UAttributeSet* AttributeClass, uint8_t bPersistent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPClassReigstry", "RegisterAttribute");
    struct
    {
        struct AActor* ActorClass;
        struct UAttributeSet* AttributeClass;
        uint8_t bPersistent;
    } Parms{};
    Parms.ActorClass = (struct AActor*)ActorClass;
    Parms.AttributeClass = (struct UAttributeSet*)AttributeClass;
    Parms.bPersistent = (uint8_t)bPersistent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPClassReigstry::RegisterAbility(struct AActor* ActorClass, struct UGameplayAbility* AbilityClass, uint8_t bPersistent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPClassReigstry", "RegisterAbility");
    struct
    {
        struct AActor* ActorClass;
        struct UGameplayAbility* AbilityClass;
        uint8_t bPersistent;
    } Parms{};
    Parms.ActorClass = (struct AActor*)ActorClass;
    Parms.AbilityClass = (struct UGameplayAbility*)AbilityClass;
    Parms.bPersistent = (uint8_t)bPersistent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPClassReigstry::EnableAdd(uint8_t bNewEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPClassReigstry", "EnableAdd");
    struct
    {
        uint8_t bNewEnabled;
    } Parms{};
    Parms.bNewEnabled = (uint8_t)bNewEnabled;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UGPTypeToTableConfiguration
struct UDataTable* UGPTypeToTableConfiguration::FindTableForType(struct UObject* Class)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPTypeToTableConfiguration", "FindTableForType");
    struct
    {
        struct UObject* Class;
        struct UDataTable* ReturnValue;
    } Parms{};
    Parms.Class = (struct UObject*)Class;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
