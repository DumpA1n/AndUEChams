#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GameCore.hpp"
#include "GameplayAbilities.hpp"
#include "GameplayTags.hpp"

namespace SDK
{

// Package: GPAbility
// Enums: 4
// Structs: 12
// Classes: 22

struct AActor;
struct AGameplayCueNotify_Actor;
struct FActiveGameplayEffectHandle;
struct FGameplayAbilitySpecHandle;
struct FGameplayAttributeData;
struct FGameplayCueParameters;
struct FGameplayEffectContextHandle;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FHitResult;
struct UAbilitySystemComponent;
struct UAttributeSet;
struct UCurveTable;
struct UDataTable;
struct UGameplayAbility;
struct UGameplayCueNotify_Static;
struct UGameplayEffect;
struct UWorld;
struct FGPAbilitySpecHandleKey;
struct FAbilityActivationInfos;
struct FAbilityActivationItem;
struct FGPAbilityPairArray;
struct FGPAbilityRepHandles;
struct FGPAbilityPair;
struct FSavedAttribute;
struct FAttributeChangeCustomData;
struct FGPAbilitySystemAttributeReg;
struct FGPAbilitySystemAbilityReg;
struct FGPEffectContext;
struct FGPTypeToTable;
struct IAttachedAbilities;
struct UGPAbilityInner;
struct UGPAbilityBase;
struct IAttachedAttributes;
struct UGPAbilitySystemGlobals;
struct UGPASBluePrintLibrary;
struct UGPAttributeIniter;
struct UGPASC;
struct IGPASC_AttributeSet_Minimal;
struct UGPAttributeHandler;
struct UGPAttributesComponent;
struct UGPAttributeSetBase;
struct UGPAttributeSetAbilityLevel;
struct UGPBPLib;
struct UGPClassReigstry;
struct AGPAbilitySystem;
struct UGPCueManager;
struct AGPCueManagerWatcher;
struct UGPEffect;
struct UGPOriginals;
struct UGPTypeToTableDeclaration;
struct UGPTypeToTableConfiguration;

// Object: Enum GPAbility.EGPAbilityGivenPolicy
enum class EGPAbilityGivenPolicy : uint8_t
{
	GiveNew = 0,
	GiveOnce = 1,
	FindOrGiveNew = 2,
	FindOrGiveOnce = 3,
	FindExisted = 4,
	OnceFlag = 5,
	FindFlag = 6,
	EGPAbilityGivenPolicy_MAX = 7
};

// Object: Enum GPAbility.EAttributeSetTickType
enum class EAttributeSetTickType : uint8_t
{
	None = 0,
	ServerSide = 1,
	ClientSide = 2,
	BothSide = 3,
	Max = 4
};

// Object: Enum GPAbility.EGPValidFlag
enum class EGPValidFlag : uint8_t
{
	Valid = 0,
	Invalid = 1,
	EGPValidFlag_MAX = 2
};

// Object: Enum GPAbility.EEditorExec
enum class EEditorExec : uint8_t
{
	InEditorExec = 0,
	NoEditorExec = 1,
	EEditorExec_MAX = 2
};

// Object: ScriptStruct GPAbility.GPAbilitySpecHandleKey
// Size: 0x8 (Inherited: 0x0)
struct FGPAbilitySpecHandleKey
{
	struct FGameplayAbilitySpecHandle AbilityHandle; // 0x0(0x4)
	int32_t Key; // 0x4(0x4)
};

// Object: ScriptStruct GPAbility.AbilityActivationInfos
// Size: 0x130 (Inherited: 0x108)
struct FAbilityActivationInfos : FFastArraySerializer
{
	struct TArray<struct FAbilityActivationItem> Handles; // 0x108(0x10)
	struct UGPASC* Owner; // 0x118(0x8)
	struct TArray<struct FAbilityActivationItem> Predictions; // 0x120(0x10)
};

// Object: ScriptStruct GPAbility.AbilityActivationItem
// Size: 0xE0 (Inherited: 0xC)
struct FAbilityActivationItem : FFastArraySerializerItem
{
	struct FGameplayAbilitySpecHandle Handle; // 0xC(0x4)
	struct FPredictionKey PredictionKey; // 0x10(0x18)
	struct FGameplayEventData TriggerEventData; // 0x28(0xB0)
	uint8_t bReplicateEventData : 1; // 0xD8(0x1), Mask(0x1)
	uint8_t BitPad_0xD8_1 : 7; // 0xD8(0x1)
	uint8_t bRemovedByRPC : 1; // 0xD9(0x1), Mask(0x1)
	uint8_t BitPad_0xD9_1 : 7; // 0xD9(0x1)
	uint8_t Pad_0xDA[0x6]; // 0xDA(0x6)
};

// Object: ScriptStruct GPAbility.GPAbilityPairArray
// Size: 0x10 (Inherited: 0x0)
struct FGPAbilityPairArray
{
	struct TArray<struct FGPAbilityPair> Info; // 0x0(0x10)
};

// Object: ScriptStruct GPAbility.GPAbilityRepHandles
// Size: 0xA0 (Inherited: 0x0)
struct FGPAbilityRepHandles
{
	struct TMap<struct FGameplayAbilitySpecHandle, struct FGPAbilityPairArray> AbilityAttachedData; // 0x0(0x50)
	struct TMap<struct FGameplayAbilitySpecHandle, struct FGameplayAbilitySpecHandle> OuterLookup; // 0x50(0x50)
};

// Object: ScriptStruct GPAbility.GPAbilityPair
// Size: 0x10 (Inherited: 0x0)
struct FGPAbilityPair
{
	struct UGameplayAbility* AbilityClass; // 0x0(0x8)
	struct FGameplayAbilitySpecHandle SpecHandle; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct GPAbility.SavedAttribute
// Size: 0x40 (Inherited: 0x0)
struct FSavedAttribute
{
	struct FGameplayAttribute Attribute; // 0x0(0x38)
	float SavedValue; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct GPAbility.AttributeChangeCustomData
// Size: 0x38 (Inherited: 0x0)
struct FAttributeChangeCustomData
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct TWeakObjectPtr<struct AActor> Instigator; // 0x8(0x8)
	struct TWeakObjectPtr<struct AActor> EffectCauser; // 0x10(0x8)
	uint8_t Pad_0x18[0x20]; // 0x18(0x20)
};

// Object: ScriptStruct GPAbility.GPAbilitySystemAttributeReg
// Size: 0x10 (Inherited: 0x0)
struct FGPAbilitySystemAttributeReg
{
	struct TArray<struct UAttributeSet*> Infos; // 0x0(0x10)
};

// Object: ScriptStruct GPAbility.GPAbilitySystemAbilityReg
// Size: 0x10 (Inherited: 0x0)
struct FGPAbilitySystemAbilityReg
{
	struct TArray<struct UGameplayAbility*> Infos; // 0x0(0x10)
};

// Object: ScriptStruct GPAbility.GPEffectContext
// Size: 0xD0 (Inherited: 0x70)
struct FGPEffectContext : FGameplayEffectContext
{
	struct TWeakObjectPtr<struct UAbilitySystemComponent> OriginalInstigatorASC; // 0x70(0x8)
	struct TWeakObjectPtr<struct AActor> OriginalInstigator; // 0x78(0x8)
	struct TMap<struct FName, float> ContextFloats; // 0x80(0x50)
};

// Object: ScriptStruct GPAbility.GPTypeToTable
// Size: 0x10 (Inherited: 0x0)
struct FGPTypeToTable
{
	struct UObject* Type; // 0x0(0x8)
	struct UDataTable* Table; // 0x8(0x8)
};

// Object: Class GPAbility.AttachedAbilities
// Size: 0x28 (Inherited: 0x28)
struct IAttachedAbilities : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IAttachedAbilities, "AttachedAbilities")

	// Object: Function GPAbility.AttachedAbilities.Z_GetAbilitySet
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UGameplayAbility*> Z_GetAbilitySet();
};

// Object: Class GPAbility.GPAbilityInner
// Size: 0x410 (Inherited: 0x400)
struct UGPAbilityInner : UGameplayAbility
{
	DEFINE_UE_CLASS_HELPERS(UGPAbilityInner, "GPAbilityInner")

	uint8_t bReplicates : 1; // 0x3F9(0x1), Mask(0x1)
	struct TArray<struct UAttributeSet*> Deps; // 0x400(0x10)
};

// Object: Class GPAbility.GPAbilityBase
// Size: 0x488 (Inherited: 0x410)
struct UGPAbilityBase : UGPAbilityInner
{
	DEFINE_UE_CLASS_HELPERS(UGPAbilityBase, "GPAbilityBase")

	struct TArray<struct UGPAbilityBase*> GrantedAbilities; // 0x410(0x10)
	uint8_t ActivateAbilityOnGranted : 1; // 0x420(0x1), Mask(0x1)
	uint8_t BitPad_0x420_1 : 7; // 0x420(0x1)
	uint8_t Pad_0x421[0x7]; // 0x421(0x7)
	struct TArray<struct FGameplayAbilitySpecHandle> GrantedAbilitiesHandles; // 0x428(0x10)
	uint8_t Pad_0x438[0x50]; // 0x438(0x50)

	// Object: Function GPAbility.GPAbilityBase.OwnerHasGameplayTag
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7ed3a0c
	// Params: [ Num(2) Size(0x9) ]
	uint8_t OwnerHasGameplayTag(struct FGameplayTag Tag);

	// Object: Function GPAbility.GPAbilityBase.OwnerHasAnyGameplayTag
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7ed3930
	// Params: [ Num(2) Size(0x21) ]
	uint8_t OwnerHasAnyGameplayTag(const struct FGameplayTagContainer& Tags);

	// Object: Function GPAbility.GPAbilityBase.OwnerHasAllGameplayTag
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7ed3854
	// Params: [ Num(2) Size(0x21) ]
	uint8_t OwnerHasAllGameplayTag(const struct FGameplayTagContainer& Tags);

	// Object: Function GPAbility.GPAbilityBase.OnGiveNotify
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnGiveNotify();

	// Object: Function GPAbility.GPAbilityBase.OnGameplayEvent
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnGameplayEvent(struct FGameplayTag EventTag);

	// Object: Function GPAbility.GPAbilityBase.OnClientToServerActorSpawn
	// Flags: [BlueprintAuthorityOnly|Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnClientToServerActorSpawn(struct AActor* SpawnedActor);

	// Object: Function GPAbility.GPAbilityBase.K2_RemoveGameplayCueWithParams
	// Flags: [Native|Protected|HasOutParms|BlueprintCallable]
	// Offset: 0x7ed368c
	// Params: [ Num(2) Size(0xC0) ]
	void K2_RemoveGameplayCueWithParams(struct FGameplayTag GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameter);

	// Object: Function GPAbility.GPAbilityBase.GetGPASC
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7ed3658
	// Params: [ Num(1) Size(0x8) ]
	struct UGPASC* GetGPASC();

	// Object: Function GPAbility.GPAbilityBase.GetAbilityTags
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7ed35c4
	// Params: [ Num(1) Size(0x20) ]
	struct FGameplayTagContainer GetAbilityTags();

	// Object: Function GPAbility.GPAbilityBase.ClientTrySpawnActor
	// Flags: [Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x7ed344c
	// Params: [ Num(4) Size(0x28) ]
	void ClientTrySpawnActor(const struct FVector& Position, const struct FRotator& Rotation, float Speed, struct UObject* ActorType);
};

// Object: Class GPAbility.AttachedAttributes
// Size: 0x28 (Inherited: 0x28)
struct IAttachedAttributes : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IAttachedAttributes, "AttachedAttributes")

	// Object: Function GPAbility.AttachedAttributes.Z_GetAttributeSet
	// Flags: [Native|Event|Protected|BlueprintEvent]
	// Offset: 0x7ed3af4
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UAttributeSet*> Z_GetAttributeSet();
};

// Object: Class GPAbility.GPAbilitySystemGlobals
// Size: 0x290 (Inherited: 0x260)
struct UGPAbilitySystemGlobals : UAbilitySystemGlobals
{
	DEFINE_UE_CLASS_HELPERS(UGPAbilitySystemGlobals, "GPAbilitySystemGlobals")

	struct TArray<struct UAttributeSet*> BPAttributeSetsHolder; // 0x260(0x10)
	struct TArray<struct UAttributeSet*> BPAttributeSets; // 0x270(0x10)
	uint8_t Pad_0x280[0x10]; // 0x280(0x10)
};

// Object: Class GPAbility.GPASBluePrintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGPASBluePrintLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UGPASBluePrintLibrary, "GPASBluePrintLibrary")

	// Object: Function GPAbility.GPASBluePrintLibrary.EffectContextHasActors
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7ed41e8
	// Params: [ Num(2) Size(0x19) ]
	static uint8_t EffectContextHasActors(struct FGameplayEffectContextHandle EffectContext);

	// Object: Function GPAbility.GPASBluePrintLibrary.EffectContextGetActors
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7ed4004
	// Params: [ Num(2) Size(0x28) ]
	static struct TArray<struct AActor*> EffectContextGetActors(struct FGameplayEffectContextHandle EffectContext);

	// Object: Function GPAbility.GPASBluePrintLibrary.EffectContextAddActors
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7ed3de4
	// Params: [ Num(3) Size(0x29) ]
	static void EffectContextAddActors(struct FGameplayEffectContextHandle EffectContext, const struct TArray<struct AActor*>& InActors, uint8_t bReset);
};

// Object: Class GPAbility.GPAttributeIniter
// Size: 0x30 (Inherited: 0x28)
struct UGPAttributeIniter : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGPAttributeIniter, "GPAttributeIniter")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: Class GPAbility.GPASC
// Size: 0x19B0 (Inherited: 0x1338)
struct UGPASC : UAbilitySystemComponent
{
	DEFINE_UE_CLASS_HELPERS(UGPASC, "GPASC")

	uint8_t Pad_0x1338[0x110]; // 0x1338(0x110)
	int32_t DefaultAbiityLevel; // 0x1448(0x4)
	struct FGameplayTag TypeOfASC; // 0x144C(0x8)
	uint8_t Pad_0x1454[0x4]; // 0x1454(0x4)
	struct TArray<struct FName> AttributeGroups; // 0x1458(0x10)
	struct TArray<struct UGPAttributeSetBase*> StaticAttributes; // 0x1468(0x10)
	struct TSet<struct UGPAttributeSetBase*> AttachedAttributes; // 0x1478(0x50)
	struct TArray<struct UGPEffect*> PassiveEffects; // 0x14C8(0x10)
	struct TArray<struct UGPAbilityBase*> StaticAbilities; // 0x14D8(0x10)
	struct TMap<struct UAttributeSet*, struct UAttributeSet*> LookupTable; // 0x14E8(0x50)
	struct TMap<struct FString, struct UAttributeSet*> EquipAttrSetLookupTable; // 0x1538(0x50)
	struct FGameplayTagContainer StaticGameplayTags; // 0x1588(0x20)
	uint8_t Pad_0x15A8[0x8]; // 0x15A8(0x8)
	struct FAbilityActivationInfos ActivedAbilities; // 0x15B0(0x130)
	uint8_t Pad_0x16E0[0x140]; // 0x16E0(0x140)
	struct FGPAbilityRepHandles HandleInfos; // 0x1820(0xA0)
	uint8_t Pad_0x18C0[0x60]; // 0x18C0(0x60)
	struct TMap<struct AActor*, struct AActor*> CacheActors; // 0x1920(0x50)
	struct TSoftObjectPtr<UCurveTable> OverrideAtrributeConfig; // 0x1970(0x28)
	uint8_t Pad_0x1998[0x18]; // 0x1998(0x18)

	// Object: Function GPAbility.GPASC.TryActivateAbilityByClassWithOutput
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7ed5200
	// Params: [ Num(4) Size(0x1A) ]
	uint8_t TryActivateAbilityByClassWithOutput(struct UGameplayAbility* InAbilityToActivate, struct TArray<struct UGPAbilityBase*>& activedAbility, uint8_t bAllowRemoteActivation);

	// Object: Function GPAbility.GPASC.RemoveAttributeSetByClass
	// Flags: [Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable]
	// Offset: 0x7ed510c
	// Params: [ Num(3) Size(0xA) ]
	uint8_t RemoveAttributeSetByClass(struct UAttributeSet* SetClass, uint8_t bEnsureExist);

	// Object: Function GPAbility.GPASC.OnRep_HandleInfos
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0x7ed4ff4
	// Params: [ Num(1) Size(0xA0) ]
	void OnRep_HandleInfos(const struct FGPAbilityRepHandles& OldInfos);

	// Object: Function GPAbility.GPASC.K2_ApplyEffectsToTarget
	// Flags: [Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7ed4e48
	// Params: [ Num(4) Size(0xB0) ]
	struct TArray<struct FActiveGameplayEffectHandle> K2_ApplyEffectsToTarget(struct AActor* TargetActor, const struct TArray<struct UGameplayEffect*>& EffectClasses, struct FHitResult HitResult);

	// Object: Function GPAbility.GPASC.GetDefaultLevel
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7ed4e14
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetDefaultLevel();

	// Object: Function GPAbility.GPASC.GetActiveAbilitiesWithTags
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7ed4cf0
	// Params: [ Num(2) Size(0x30) ]
	void GetActiveAbilitiesWithTags(const struct FGameplayTagContainer& GameplayTagContainer, struct TArray<struct UGPAbilityBase*>& ActiveAbilities);

	// Object: Function GPAbility.GPASC.GetAbilitySystemComponentFromActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7ed4c08
	// Params: [ Num(3) Size(0x18) ]
	static struct UGPASC* GetAbilitySystemComponentFromActor(struct AActor* Actor, uint8_t bEnsure);

	// Object: Function GPAbility.GPASC.FindEquipAttributeSetBySetName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7ed4b54
	// Params: [ Num(2) Size(0x18) ]
	struct UAttributeSet* FindEquipAttributeSetBySetName(struct FString SetName);

	// Object: Function GPAbility.GPASC.FindAttributeSetBySetName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7ed4a54
	// Params: [ Num(2) Size(0x18) ]
	struct UAttributeSet* FindAttributeSetBySetName(struct FString SetName);

	// Object: Function GPAbility.GPASC.FindAttributeSetByFName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7ed49a8
	// Params: [ Num(2) Size(0x10) ]
	struct UAttributeSet* FindAttributeSetByFName(struct FName SetName);

	// Object: Function GPAbility.GPASC.FindAttributeSetByClass
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7ed48b8
	// Params: [ Num(3) Size(0x18) ]
	struct UAttributeSet* FindAttributeSetByClass(struct UAttributeSet* SetClass, uint8_t bExact);

	// Object: Function GPAbility.GPASC.FilterAttributeSets
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7ed47d8
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct UAttributeSet*> FilterAttributeSets(struct UAttributeSet* AttributeClass);

	// Object: Function GPAbility.GPASC.AttachAttributeSetByClass
	// Flags: [Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable]
	// Offset: 0x7ed472c
	// Params: [ Num(2) Size(0x10) ]
	struct UAttributeSet* AttachAttributeSetByClass(struct UGPAttributeSetBase* SetClass);

	// Object: Function GPAbility.GPASC.ASCModifyAttribute
	// Flags: [Final|Exec|Native|Protected]
	// Offset: 0x7ed4644
	// Params: [ Num(2) Size(0x14) ]
	void ASCModifyAttribute(struct FString SetClassAndPropName, float Value);

	// Object: Function GPAbility.GPASC.AddEquipAttributeSetBySetName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7ed454c
	// Params: [ Num(3) Size(0x28) ]
	struct UAttributeSet* AddEquipAttributeSetBySetName(struct FString EquipSetName, struct FString AttributeSetName);

	// Object: Function GPAbility.GPASC.AddAttributeSetByObject
	// Flags: [Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable]
	// Offset: 0x7ed449c
	// Params: [ Num(2) Size(0x9) ]
	uint8_t AddAttributeSetByObject(struct UAttributeSet* AttributeObj);

	// Object: Function GPAbility.GPASC.AddAttributeSetByClass
	// Flags: [Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7ed43a4
	// Params: [ Num(3) Size(0x18) ]
	struct UAttributeSet* AddAttributeSetByClass(struct UAttributeSet* SetClass, uint8_t& bNewCreated);
};

// Object: Class GPAbility.GPASC_AttributeSet_Minimal
// Size: 0x28 (Inherited: 0x28)
struct IGPASC_AttributeSet_Minimal : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IGPASC_AttributeSet_Minimal, "GPASC_AttributeSet_Minimal")
};

// Object: Class GPAbility.GPAttributeHandler
// Size: 0x100 (Inherited: 0xF8)
struct UGPAttributeHandler : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UGPAttributeHandler, "GPAttributeHandler")

	struct UGPASC* OwnerASC; // 0xF8(0x8)
};

// Object: Class GPAbility.GPAttributesComponent
// Size: 0x110 (Inherited: 0x100)
struct UGPAttributesComponent : UGPAttributeHandler
{
	DEFINE_UE_CLASS_HELPERS(UGPAttributesComponent, "GPAttributesComponent")

	struct TArray<struct UGPAttributeSetBase*> StaticAttributes; // 0x100(0x10)
};

// Object: Class GPAbility.GPAttributeSetBase
// Size: 0x48 (Inherited: 0x30)
struct UGPAttributeSetBase : UAttributeSet
{
	DEFINE_UE_CLASS_HELPERS(UGPAttributeSetBase, "GPAttributeSetBase")

	uint8_t Pad_0x30[0x18]; // 0x30(0x18)
};

// Object: Class GPAbility.GPAttributeSetAbilityLevel
// Size: 0x60 (Inherited: 0x48)
struct UGPAttributeSetAbilityLevel : UGPAttributeSetBase
{
	DEFINE_UE_CLASS_HELPERS(UGPAttributeSetAbilityLevel, "GPAttributeSetAbilityLevel")

	struct FGameplayAttributeData AbilityLevel; // 0x48(0x10)
	float MaxAbilityLevel; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)

	// Object: Function GPAbility.GPAttributeSetAbilityLevel.OnRep_AbilityLevel
	// Flags: [Native|Protected|HasOutParms]
	// Offset: 0x7ed57c4
	// Params: [ Num(1) Size(0x10) ]
	void OnRep_AbilityLevel(const struct FGameplayAttributeData& OldData);
};

// Object: Class GPAbility.GPBPLib
// Size: 0x28 (Inherited: 0x28)
struct UGPBPLib : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UGPBPLib, "GPBPLib")

	// Object: Function GPAbility.GPBPLib.IsInEditor
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xfb0556c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsInEditor();

	// Object: Function GPAbility.GPBPLib.FindGameplayTag
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7ed5a08
	// Params: [ Num(4) Size(0x68) ]
	static struct FGameplayTagContainer FindGameplayTag(const struct FGameplayTagContainer& Container, const struct FGameplayTagContainer& Filter, uint8_t bExact);

	// Object: Function GPAbility.GPBPLib.BranchInEditor
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7ed5950
	// Params: [ Num(2) Size(0x2) ]
	static uint8_t BranchInEditor(EEditorExec& Out);
};

// Object: Class GPAbility.GPClassReigstry
// Size: 0x28 (Inherited: 0x28)
struct UGPClassReigstry : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UGPClassReigstry, "GPClassReigstry")

	// Object: Function GPAbility.GPClassReigstry.RegisterAttribute
	// Flags: [Final|Native|Static|Protected|BlueprintCallable]
	// Offset: 0x7ed5d7c
	// Params: [ Num(3) Size(0x11) ]
	static void RegisterAttribute(struct AActor* ActorClass, struct UAttributeSet* AttributeClass, uint8_t bPersistent);

	// Object: Function GPAbility.GPClassReigstry.RegisterAbility
	// Flags: [Final|Native|Static|Protected|BlueprintCallable]
	// Offset: 0x7ed5c6c
	// Params: [ Num(3) Size(0x11) ]
	static void RegisterAbility(struct AActor* ActorClass, struct UGameplayAbility* AbilityClass, uint8_t bPersistent);

	// Object: Function GPAbility.GPClassReigstry.EnableAdd
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7ed5bd0
	// Params: [ Num(1) Size(0x1) ]
	static void EnableAdd(uint8_t bNewEnabled);
};

// Object: Class GPAbility.GPAbilitySystem
// Size: 0x410 (Inherited: 0x370)
struct AGPAbilitySystem : ALevelSubsystem
{
	DEFINE_UE_CLASS_HELPERS(AGPAbilitySystem, "GPAbilitySystem")

	struct TMap<struct AActor*, struct FGPAbilitySystemAbilityReg> AbilityConfigs; // 0x370(0x50)
	struct TMap<struct AActor*, struct FGPAbilitySystemAttributeReg> AttributeConfigs; // 0x3C0(0x50)
};

// Object: Class GPAbility.GPCueManager
// Size: 0x328 (Inherited: 0x310)
struct UGPCueManager : UGameplayCueManager
{
	DEFINE_UE_CLASS_HELPERS(UGPCueManager, "GPCueManager")

	struct TArray<struct FSoftObjectPath> SoftPaths; // 0x310(0x10)
	struct TWeakObjectPtr<struct UWorld> CurWorld; // 0x320(0x8)
};

// Object: Class GPAbility.GPCueManagerWatcher
// Size: 0x378 (Inherited: 0x370)
struct AGPCueManagerWatcher : AActor
{
	DEFINE_UE_CLASS_HELPERS(AGPCueManagerWatcher, "GPCueManagerWatcher")

	struct UGPCueManager* Instance; // 0x370(0x8)
};

// Object: Class GPAbility.GPEffect
// Size: 0x7B8 (Inherited: 0x7B8)
struct UGPEffect : UGameplayEffect
{
	DEFINE_UE_CLASS_HELPERS(UGPEffect, "GPEffect")
};

// Object: Class GPAbility.GPOriginals
// Size: 0xF0 (Inherited: 0x28)
struct UGPOriginals : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGPOriginals, "GPOriginals")

	struct FSoftClassPath GPOriginalsClassName; // 0x28(0x18)
	struct UGPOriginals* ConfigGPOriginals; // 0x40(0x8)
	struct FGameplayTag Tag_Demo; // 0x48(0x8)
	struct FGameplayTag Tag_Shield; // 0x50(0x8)
	struct FGameplayTag Tag_Health; // 0x58(0x8)
	struct FGameplayTag Tag_WeakenState; // 0x60(0x8)
	struct FGameplayTag Tag_RealDamage; // 0x68(0x8)
	struct FGameplayTag AttackType_Corrosive; // 0x70(0x8)
	struct FGameplayTag AttackType_Explosive; // 0x78(0x8)
	struct FGameplayTag AttackType_Incendiary; // 0x80(0x8)
	struct FGameplayTag AttackType_Shock; // 0x88(0x8)
	struct FGameplayTag DefenceType_EnergyShield; // 0x90(0x8)
	struct FGameplayTag State_Ice; // 0x98(0x8)
	struct FGameplayTag Tag_IgnoreDamage; // 0xA0(0x8)
	struct UGameplayEffect* GE_Demo; // 0xA8(0x8)
	struct UGameplayEffect* CompatibleDamageEffect; // 0xB0(0x8)
	struct UGameplayEffect* SuicideDamageEffect; // 0xB8(0x8)
	struct UGameplayEffect* EnergyShieldEffect; // 0xC0(0x8)
	struct TArray<struct UGameplayCueNotify_Static*> StaticCues; // 0xC8(0x10)
	struct TArray<struct AGameplayCueNotify_Actor*> InstancedCues; // 0xD8(0x10)
	struct FGameplayTag SkillCooldownSetByCallerTag; // 0xE8(0x8)
};

// Object: Class GPAbility.GPTypeToTableDeclaration
// Size: 0x80 (Inherited: 0x30)
struct UGPTypeToTableDeclaration : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UGPTypeToTableDeclaration, "GPTypeToTableDeclaration")

	uint8_t Pad_0x30[0x50]; // 0x30(0x50)
};

// Object: Class GPAbility.GPTypeToTableConfiguration
// Size: 0x88 (Inherited: 0x28)
struct UGPTypeToTableConfiguration : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGPTypeToTableConfiguration, "GPTypeToTableConfiguration")

	struct TArray<struct FGPTypeToTable> TypeToTable; // 0x28(0x10)
	struct TMap<struct UObject*, struct UDataTable*> Cache; // 0x38(0x50)

	// Object: Function GPAbility.GPTypeToTableConfiguration.FindTableForType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7ed6058
	// Params: [ Num(2) Size(0x10) ]
	struct UDataTable* FindTableForType(struct UObject* Class);
};

} // namespace SDK
