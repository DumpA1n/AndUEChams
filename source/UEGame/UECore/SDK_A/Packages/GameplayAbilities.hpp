#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GameplayTags.hpp"
#include "GameplayTasks.hpp"

namespace SDK
{

// Package: GameplayAbilities
// Enums: 31
// Structs: 83
// Classes: 79

struct AActor;
struct ACHARACTER;
struct APlayerController;
enum class EMovementMode : uint8_t;
enum class ERootMotionFinishVelocityMode : uint8_t;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FGameplayTagQuery;
struct FHitResult;
struct FVector_NetQuantize100;
struct UActorComponent;
struct UAnimInstance;
struct UAnimMontage;
struct UCapsuleComponent;
struct UCharacterMovementComponent;
struct UCurveFloat;
struct UCurveTable;
struct UCurveVector;
struct UDataTable;
struct UGameplayTagsManager;
struct UGameplayTask;
struct UMaterialInterface;
struct UMeshComponent;
struct UMovementComponent;
struct UObjectLibrary;
struct UParticleSystem;
struct UPhysicalMaterial;
struct UPrimitiveComponent;
struct USceneComponent;
struct USkeletalMeshComponent;
struct USoundBase;
struct FGameplayEffectAttributeCaptureSpecContainer;
struct FGameplayEffectContextHandle;
struct FTagContainerAggregator;
struct FGameplayEffectSpec;
struct FPredictionKey;
struct FActiveGameplayEffect;
struct FGameplayAbilitySpecHandle;
struct FScalableFloat;
struct FGameplayAbilitySpecDef;
struct FModifierSpec;
struct FGameplayAttribute;
struct FGameplayEffectAttributeCaptureDefinition;
struct FGameplayEffectAttributeCaptureSpec;
struct FGameplayEffectModifiedAttribute;
struct FActiveGameplayEffectHandle;
struct FGameplayEffectSpecHandle;
struct FGameplayEffectRemovalInfo;
struct FGameplayAbilityTargetDataHandle;
struct FGameplayEventData;
struct FGameplayAbilityActivationInfo;
struct FGameplayEffectQuery;
struct FGameplayCueParameters;
struct FGameplayEffectSpecForRPC;
struct FServerAbilityRPCBatch;
struct FReplicatedPredictionKeyMap;
struct FReplicatedPredictionKeyItem;
struct FMinimalReplicationTagCountMap;
struct FActiveGameplayCueContainer;
struct FActiveGameplayCue;
struct FActiveGameplayEffectsContainer;
struct FGameplayAbilityLocalAnimMontage;
struct FGameplayAbilityRepAnimMontage;
struct FGameplayAbilitySpecContainer;
struct FGameplayAbilitySpec;
struct FAttributeDefaults;
struct FGameplayEffectContext;
struct FNetSerializeScriptStructCache;
struct FAttributeMetaData;
struct FGameplayAttributeData;
struct FAbilityTriggerData;
struct FGameplayAbilityBindInfo;
struct FGameplayTargetDataFilterHandle;
struct FGameplayTargetDataFilter;
struct FGameplayAbilityTargetData;
struct FGameplayAbilityTargetData_SingleTargetHit;
struct FGameplayAbilityTargetingLocationInfo;
struct FGameplayAbilityTargetData_ActorArray;
struct FGameplayAbilityTargetData_LocationInfo;
struct FGameplayAbilitySpecHandleAndPredictionKey;
struct FAbilityTaskDebugMessage;
struct FAbilityEndedData;
struct FGameplayAbilityActorInfo;
struct FWorldReticleParameters;
struct FPreallocationInfo;
struct FGameplayCuePendingExecute;
struct FMinimalGameplayCueReplicationProxy;
struct FGameplayCueTag;
struct FGameplayCueObjectLibrary;
struct FGameplayCueNotifyData;
struct FGameplayCueTranslatorNodeIndex;
struct FGameplayCueTranslationManager;
struct FGameplayCueTranslatorNode;
struct FGameplayCueTranslationLink;
struct FActiveGameplayEffectQuery;
struct FInheritedTagContainer;
struct FGameplayEffectCue;
struct FAttributeBasedFloat;
struct FCustomCalculationBasedFloat;
struct FSetByCallerFloat;
struct FGameplayEffectModifierMagnitude;
struct FGameplayModEvaluationChannelSettings;
struct FGameplayTagRequirements;
struct FGameplayModifierInfo;
struct FGameplayEffectExecutionDefinition;
struct FConditionalGameplayEffect;
struct FGameplayEffectExecutionScopedModifierInfo;
struct FGameplayEffectCustomExecutionOutput;
struct FGameplayModifierEvaluatedData;
struct FGameplayEffectCustomExecutionParameters;
struct FGameplayTagBlueprintPropertyMap;
struct FGameplayTagBlueprintPropertyMapping;
struct FGameplayTagReponsePair;
struct FGameplayTagResponseTableEntry;
struct UGameplayAbility;
struct UAbilitySystemGlobals;
struct UAbilitySystemComponent;
struct UAttributeSet;
struct UGameplayCueManager;
struct UGameplayEffect;
struct UAbilitySystemBlueprintLibrary;
struct AAbilitySystemDebugHUD;
struct IAbilitySystemInterface;
struct IAbilitySystemReplicationProxyInterface;
struct UAbilitySystemTestAttributeSet;
struct AAbilitySystemTestPawn;
struct UAbilityTask;
struct UAbilityTask_ApplyRootMotion_Base;
struct UAbilityTask_ApplyRootMotionConstantForce;
struct UAbilityTask_ApplyRootMotionJumpForce;
struct UAbilityTask_ApplyRootMotionMoveToActorForce;
struct UAbilityTask_ApplyRootMotionMoveToForce;
struct UAbilityTask_ApplyRootMotionRadialForce;
struct UAbilityTask_MoveToLocation;
struct UAbilityTask_NetworkSyncPoint;
struct UAbilityTask_PlayMontageAndWait;
struct UAbilityTask_Repeat;
struct UAbilityTask_SpawnActor;
struct UAbilityTask_StartAbilityState;
struct UAbilityTask_VisualizeTargeting;
struct UAbilityTask_WaitAbilityActivate;
struct UAbilityTask_WaitAbilityCommit;
struct UAbilityTask_WaitAttributeChange;
struct UAbilityTask_WaitAttributeChangeRatioThreshold;
struct UAbilityTask_WaitAttributeChangeThreshold;
struct UAbilityTask_WaitCancel;
struct UAbilityTask_WaitConfirm;
struct UAbilityTask_WaitConfirmCancel;
struct UAbilityTask_WaitDelay;
struct UAbilityTask_WaitGameplayEffectApplied;
struct UAbilityTask_WaitGameplayEffectApplied_Self;
struct UAbilityTask_WaitGameplayEffectApplied_Target;
struct UAbilityTask_WaitGameplayEffectBlockedImmunity;
struct UAbilityTask_WaitGameplayEffectRemoved;
struct UAbilityTask_WaitGameplayEffectStackChange;
struct UAbilityTask_WaitGameplayEvent;
struct UAbilityTask_WaitGameplayTag;
struct UAbilityTask_WaitGameplayTagAdded;
struct UAbilityTask_WaitGameplayTagRemoved;
struct UAbilityTask_WaitInputPress;
struct UAbilityTask_WaitInputRelease;
struct UAbilityTask_WaitMovementModeChange;
struct UAbilityTask_WaitOverlap;
struct UAbilityTask_WaitTargetData;
struct UAbilityTask_WaitVelocityChange;
struct UGameplayAbility_CharacterJump;
struct UGameplayAbility_Montage;
struct UGameplayAbilityBlueprint;
struct UGameplayAbilitySet;
struct AGameplayAbilityTargetActor;
struct AGameplayAbilityTargetActor_Trace;
struct AGameplayAbilityTargetActor_GroundTrace;
struct AGameplayAbilityTargetActor_ActorPlacement;
struct AGameplayAbilityTargetActor_Radius;
struct AGameplayAbilityTargetActor_SingleLineTrace;
struct AGameplayAbilityWorldReticle;
struct AGameplayAbilityWorldReticle_ActorVisualization;
struct IGameplayCueInterface;
struct AGameplayCueNotify_Actor;
struct UGameplayCueNotify_Static;
struct UGameplayCueNotify_HitImpact;
struct UGameplayCueSet;
struct UGameplayCueTranslator;
struct UGameplayCueTranslator_Test;
struct UGameplayEffectCalculation;
struct UGameplayEffectCustomApplicationRequirement;
struct UGameplayEffectExecutionCalculation;
struct UGameplayEffectStackingExpiration;
struct UGameplayEffectUIData;
struct UGameplayEffectUIData_TextOnly;
struct UGameplayModMagnitudeCalculation;
struct UGameplayTagReponseTable;
struct ITickableAttributeSetInterface;

// Object: Enum GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8_t
{
	CancelAbilityImmediately = 0,
	RemoveAbilityOnEnd = 1,
	DoNothing = 2,
	EGameplayEffectGrantedAbilityRemovePolicy_MAX = 3
};

// Object: Enum GameplayAbilities.EGameplayEffectAttributeCaptureSource
enum class EGameplayEffectAttributeCaptureSource : uint8_t
{
	Source = 0,
	Target = 1,
	EGameplayEffectAttributeCaptureSource_MAX = 2
};

// Object: Enum GameplayAbilities.EGameplayAbilityActivationMode
enum class EGameplayAbilityActivationMode : uint8_t
{
	Authority = 0,
	NonAuthority = 1,
	Predicting = 2,
	Confirmed = 3,
	Rejected = 4,
	EGameplayAbilityActivationMode_MAX = 5
};

// Object: Enum GameplayAbilities.EAbilityGenericReplicatedEvent
enum class EAbilityGenericReplicatedEvent : uint8_t
{
	GenericConfirm = 0,
	GenericCancel = 1,
	InputPressed = 2,
	InputReleased = 3,
	GenericSignalFromClient = 4,
	GenericSignalFromServer = 5,
	GameCustom1 = 6,
	GameCustom2 = 7,
	GameCustom3 = 8,
	GameCustom4 = 9,
	GameCustom5 = 10,
	GameCustom6 = 11,
	MAX = 12
};

// Object: Enum GameplayAbilities.EGameplayEffectReplicationMode
enum class EGameplayEffectReplicationMode : uint8_t
{
	Minimal = 0,
	Mixed = 1,
	Full = 2,
	EGameplayEffectReplicationMode_MAX = 3
};

// Object: Enum GameplayAbilities.EAbilityTaskWaitState
enum class EAbilityTaskWaitState : uint8_t
{
	WaitingOnGame = 1,
	WaitingOnUser = 2,
	WaitingOnAvatar = 4,
	EAbilityTaskWaitState_MAX = 5
};

// Object: Enum GameplayAbilities.ERootMotionMoveToActorTargetOffsetType
enum class ERootMotionMoveToActorTargetOffsetType : uint8_t
{
	AlignFromTargetToSource = 0,
	AlignToTargetForward = 1,
	AlignToWorldSpace = 2,
	ERootMotionMoveToActorTargetOffsetType_MAX = 3
};

// Object: Enum GameplayAbilities.EAbilityTaskNetSyncType
enum class EAbilityTaskNetSyncType : uint8_t
{
	BothWait = 0,
	OnlyServerWait = 1,
	OnlyClientWait = 2,
	EAbilityTaskNetSyncType_MAX = 3
};

// Object: Enum GameplayAbilities.EWaitAttributeChangeComparison
enum class EWaitAttributeChangeComparison : uint8_t
{
	None = 0,
	GreaterThan = 1,
	LessThan = 2,
	GreaterThanOrEqualTo = 3,
	LessThanOrEqualTo = 4,
	NotEqualTo = 5,
	ExactlyEqualTo = 6,
	MAX = 7
};

// Object: Enum GameplayAbilities.EGameplayAbilityInputBinds
enum class EGameplayAbilityInputBinds : uint8_t
{
	Ability1 = 0,
	Ability2 = 1,
	Ability3 = 2,
	Ability4 = 3,
	Ability5 = 4,
	Ability6 = 5,
	Ability7 = 6,
	Ability8 = 7,
	Ability9 = 8,
	EGameplayAbilityInputBinds_MAX = 9
};

// Object: Enum GameplayAbilities.ETargetDataFilterSelf
enum class ETargetDataFilterSelf : uint8_t
{
	TDFS_Any = 0,
	TDFS_NoSelf = 1,
	TDFS_NoOthers = 2,
	TDFS_MAX = 3
};

// Object: Enum GameplayAbilities.EGameplayAbilityTargetingLocationType
enum class EGameplayAbilityTargetingLocationType : uint8_t
{
	LiteralTransform = 0,
	ActorTransform = 1,
	SocketTransform = 2,
	EGameplayAbilityTargetingLocationType_MAX = 3
};

// Object: Enum GameplayAbilities.EGameplayTargetingConfirmation
enum class EGameplayTargetingConfirmation : uint8_t
{
	Instant = 0,
	UserConfirmed = 1,
	Custom = 2,
	CustomMulti = 3,
	EGameplayTargetingConfirmation_MAX = 4
};

// Object: Enum GameplayAbilities.EGameplayAbilityTriggerSource
enum class EGameplayAbilityTriggerSource : uint8_t
{
	GameplayEvent = 0,
	OwnedTagAdded = 1,
	OwnedTagPresent = 2,
	EGameplayAbilityTriggerSource_MAX = 3
};

// Object: Enum GameplayAbilities.EGameplayAbilityReplicationPolicy
enum class EGameplayAbilityReplicationPolicy : uint8_t
{
	ReplicateNo = 0,
	ReplicateYes = 1,
	EGameplayAbilityReplicationPolicy_MAX = 2
};

// Object: Enum GameplayAbilities.EGameplayAbilityNetExecutionPolicy
enum class EGameplayAbilityNetExecutionPolicy : uint8_t
{
	LocalPredicted = 0,
	LocalOnly = 1,
	ServerInitiated = 2,
	ServerOnly = 3,
	EGameplayAbilityNetExecutionPolicy_MAX = 4
};

// Object: Enum GameplayAbilities.EGameplayAbilityInstancingPolicy
enum class EGameplayAbilityInstancingPolicy : uint8_t
{
	NonInstanced = 0,
	InstancedPerActor = 1,
	InstancedPerExecution = 2,
	EGameplayAbilityInstancingPolicy_MAX = 3
};

// Object: Enum GameplayAbilities.EGameplayCuePayloadType
enum class EGameplayCuePayloadType : uint8_t
{
	EffectContext = 0,
	CueParameters = 1,
	FromSpec = 2,
	EGameplayCuePayloadType_MAX = 3
};

// Object: Enum GameplayAbilities.EGameplayEffectPeriodInhibitionRemovedPolicy
enum class EGameplayEffectPeriodInhibitionRemovedPolicy : uint8_t
{
	NeverReset = 0,
	ResetPeriod = 1,
	ExecuteAndResetPeriod = 2,
	EGameplayEffectPeriodInhibitionRemovedPolicy_MAX = 3
};

// Object: Enum GameplayAbilities.EGameplayEffectStackingExpirationPolicy
enum class EGameplayEffectStackingExpirationPolicy : uint8_t
{
	ClearEntireStack = 0,
	RemoveSingleStackAndRefreshDuration = 1,
	RefreshDuration = 2,
	EGameplayEffectStackingExpirationPolicy_MAX = 3
};

// Object: Enum GameplayAbilities.EGameplayEffectStackingPeriodPolicy
enum class EGameplayEffectStackingPeriodPolicy : uint8_t
{
	ResetOnSuccessfulApplication = 0,
	NeverReset = 1,
	EGameplayEffectStackingPeriodPolicy_MAX = 2
};

// Object: Enum GameplayAbilities.EGameplayEffectStackingDurationPolicy
enum class EGameplayEffectStackingDurationPolicy : uint8_t
{
	RefreshOnSuccessfulApplication = 0,
	NeverRefresh = 1,
	EGameplayEffectStackingDurationPolicy_MAX = 2
};

// Object: Enum GameplayAbilities.EGameplayEffectDurationType
enum class EGameplayEffectDurationType : uint8_t
{
	Instant = 0,
	Infinite = 1,
	HasDuration = 2,
	EGameplayEffectDurationType_MAX = 3
};

// Object: Enum GameplayAbilities.EGameplayEffectScopedModifierAggregatorType
enum class EGameplayEffectScopedModifierAggregatorType : uint8_t
{
	CapturedAttributeBacked = 0,
	Transient = 1,
	EGameplayEffectScopedModifierAggregatorType_MAX = 2
};

// Object: Enum GameplayAbilities.EAttributeBasedFloatCalculationType
enum class EAttributeBasedFloatCalculationType : uint8_t
{
	AttributeMagnitude = 0,
	AttributeBaseValue = 1,
	AttributeBonusMagnitude = 2,
	AttributeMagnitudeEvaluatedUpToChannel = 3,
	EAttributeBasedFloatCalculationType_MAX = 4
};

// Object: Enum GameplayAbilities.EGameplayEffectMagnitudeCalculation
enum class EGameplayEffectMagnitudeCalculation : uint8_t
{
	ScalableFloat = 0,
	AttributeBased = 1,
	CustomCalculationClass = 2,
	SetByCaller = 3,
	EGameplayEffectMagnitudeCalculation_MAX = 4
};

// Object: Enum GameplayAbilities.EGameplayTagEventType
enum class EGameplayTagEventType : uint8_t
{
	NewOrRemoved = 0,
	AnyCountChange = 1,
	EGameplayTagEventType_MAX = 2
};

// Object: Enum GameplayAbilities.EGameplayCueEvent
enum class EGameplayCueEvent : uint8_t
{
	OnActive = 0,
	WhileActive = 1,
	Executed = 2,
	Removed = 3,
	EGameplayCueEvent_MAX = 4
};

// Object: Enum GameplayAbilities.EGameplayEffectStackingType
enum class EGameplayEffectStackingType : uint8_t
{
	None = 0,
	AggregateBySource = 1,
	AggregateByTarget = 2,
	EGameplayEffectStackingType_MAX = 3
};

// Object: Enum GameplayAbilities.EGameplayModOp
enum class EGameplayModOp : uint8_t
{
	Additive = 0,
	Multiplicitive = 1,
	Division = 2,
	Override = 3,
	Max = 4
};

// Object: Enum GameplayAbilities.EGameplayModEvaluationChannel
enum class EGameplayModEvaluationChannel : uint8_t
{
	Channel0 = 0,
	Channel1 = 1,
	Channel2 = 2,
	Channel3 = 3,
	Channel4 = 4,
	Channel5 = 5,
	Channel6 = 6,
	Channel7 = 7,
	Channel8 = 8,
	Channel9 = 9,
	Channel_MAX = 10,
	EGameplayModEvaluationChannel_MAX = 11
};

// Object: ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
// Size: 0x28 (Inherited: 0x0)
struct FGameplayEffectAttributeCaptureSpecContainer
{
	struct TArray<struct FGameplayEffectAttributeCaptureSpec> SourceAttributes; // 0x0(0x10)
	struct TArray<struct FGameplayEffectAttributeCaptureSpec> TargetAttributes; // 0x10(0x10)
	uint8_t bHasNonSnapshottedAttributes : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct GameplayAbilities.GameplayEffectContextHandle
// Size: 0x18 (Inherited: 0x0)
struct FGameplayEffectContextHandle
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct GameplayAbilities.TagContainerAggregator
// Size: 0x88 (Inherited: 0x0)
struct FTagContainerAggregator
{
	struct FGameplayTagContainer CapturedActorTags; // 0x0(0x20)
	struct FGameplayTagContainer CapturedSpecTags; // 0x20(0x20)
	struct FGameplayTagContainer ScopedTags; // 0x40(0x20)
	uint8_t Pad_0x60[0x28]; // 0x60(0x28)
};

// Object: ScriptStruct GameplayAbilities.GameplayEffectSpec
// Size: 0x298 (Inherited: 0x0)
struct FGameplayEffectSpec
{
	struct UGameplayEffect* Def; // 0x0(0x8)
	struct TArray<struct FGameplayEffectModifiedAttribute> ModifiedAttributes; // 0x8(0x10)
	struct FGameplayEffectAttributeCaptureSpecContainer CapturedRelevantAttributes; // 0x18(0x28)
	uint8_t Pad_0x40[0x10]; // 0x40(0x10)
	float Duration; // 0x50(0x4)
	float Period; // 0x54(0x4)
	float ChanceToApplyToTarget; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct FTagContainerAggregator CapturedSourceTags; // 0x60(0x88)
	struct FTagContainerAggregator CapturedTargetTags; // 0xE8(0x88)
	struct FGameplayTagContainer DynamicGrantedTags; // 0x170(0x20)
	struct FGameplayTagContainer DynamicAssetTags; // 0x190(0x20)
	struct TArray<struct FModifierSpec> Modifiers; // 0x1B0(0x10)
	int32_t StackCount; // 0x1C0(0x4)
	uint8_t bCompletedSourceAttributeCapture : 1; // 0x1C4(0x1), Mask(0x1)
	uint8_t bCompletedTargetAttributeCapture : 1; // 0x1C4(0x1), Mask(0x2)
	uint8_t bDurationLocked : 1; // 0x1C4(0x1), Mask(0x4)
	uint8_t BitPad_0x1C4_3 : 5; // 0x1C4(0x1)
	uint8_t Pad_0x1C5[0x3]; // 0x1C5(0x3)
	struct TArray<struct FGameplayAbilitySpecDef> GrantedAbilitySpecs; // 0x1C8(0x10)
	uint8_t Pad_0x1D8[0xA0]; // 0x1D8(0xA0)
	struct FGameplayEffectContextHandle EffectContext; // 0x278(0x18)
	float Level; // 0x290(0x4)
	uint8_t Pad_0x294[0x4]; // 0x294(0x4)
};

// Object: ScriptStruct GameplayAbilities.PredictionKey
// Size: 0x18 (Inherited: 0x0)
struct FPredictionKey
{
	int16_t Current; // 0x0(0x2)
	int16_t Base; // 0x2(0x2)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct UPackageMap* PredictiveConnection; // 0x8(0x8)
	uint8_t bIsStale : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t bIsServerInitiated : 1; // 0x11(0x1), Mask(0x1)
	uint8_t BitPad_0x11_1 : 7; // 0x11(0x1)
	uint8_t Pad_0x12[0x6]; // 0x12(0x6)
};

// Object: ScriptStruct GameplayAbilities.ActiveGameplayEffect
// Size: 0x370 (Inherited: 0xC)
struct FActiveGameplayEffect : FFastArraySerializerItem
{
	uint8_t Pad_0xC[0xC]; // 0xC(0xC)
	struct FGameplayEffectSpec Spec; // 0x18(0x298)
	struct FPredictionKey PredictionKey; // 0x2B0(0x18)
	float StartServerWorldTime; // 0x2C8(0x4)
	float CachedStartServerWorldTime; // 0x2CC(0x4)
	float StartWorldTime; // 0x2D0(0x4)
	uint8_t bIsInhibited : 1; // 0x2D4(0x1), Mask(0x1)
	uint8_t BitPad_0x2D4_1 : 7; // 0x2D4(0x1)
	uint8_t Pad_0x2D5[0x9B]; // 0x2D5(0x9B)
};

// Object: ScriptStruct GameplayAbilities.GameplayAbilitySpecHandle
// Size: 0x4 (Inherited: 0x0)
struct FGameplayAbilitySpecHandle
{
	int32_t Handle; // 0x0(0x4)
};

// Object: ScriptStruct GameplayAbilities.ScalableFloat
// Size: 0x20 (Inherited: 0x0)
struct FScalableFloat
{
	float Value; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FCurveTableRowHandle Curve; // 0x8(0x10)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
};

// Object: ScriptStruct GameplayAbilities.GameplayAbilitySpecDef
// Size: 0x90 (Inherited: 0x0)
struct FGameplayAbilitySpecDef
{
	struct UGameplayAbility* Ability; // 0x0(0x8)
	struct FScalableFloat LevelScalableFloat; // 0x8(0x20)
	int32_t InputID; // 0x28(0x4)
	EGameplayEffectGrantedAbilityRemovePolicy RemovalPolicy; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
	struct UObject* SourceObject; // 0x30(0x8)
	uint8_t Pad_0x38[0x50]; // 0x38(0x50)
	struct FGameplayAbilitySpecHandle AssignedHandle; // 0x88(0x4)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
};

// Object: ScriptStruct GameplayAbilities.ModifierSpec
// Size: 0x4 (Inherited: 0x0)
struct FModifierSpec
{
	float EvaluatedMagnitude; // 0x0(0x4)
};

// Object: ScriptStruct GameplayAbilities.GameplayAttribute
// Size: 0x38 (Inherited: 0x0)
struct FGameplayAttribute
{
	struct FString AttributeName; // 0x0(0x10)
	struct TFieldPath<FProperty> Attribute; // 0x10(0x20)
	struct UObject* AttributeOwner; // 0x30(0x8)
};

// Object: ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureDefinition
// Size: 0x40 (Inherited: 0x0)
struct FGameplayEffectAttributeCaptureDefinition
{
	struct FGameplayAttribute AttributeToCapture; // 0x0(0x38)
	EGameplayEffectAttributeCaptureSource AttributeSource; // 0x38(0x1)
	uint8_t bSnapshot : 1; // 0x39(0x1), Mask(0x1)
	uint8_t BitPad_0x39_1 : 7; // 0x39(0x1)
	uint8_t Pad_0x3A[0x6]; // 0x3A(0x6)
};

// Object: ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpec
// Size: 0x50 (Inherited: 0x0)
struct FGameplayEffectAttributeCaptureSpec
{
	struct FGameplayEffectAttributeCaptureDefinition BackingDefinition; // 0x0(0x40)
	uint8_t Pad_0x40[0x10]; // 0x40(0x10)
};

// Object: ScriptStruct GameplayAbilities.GameplayEffectModifiedAttribute
// Size: 0x40 (Inherited: 0x0)
struct FGameplayEffectModifiedAttribute
{
	struct FGameplayAttribute Attribute; // 0x0(0x38)
	float TotalMagnitude; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct GameplayAbilities.ActiveGameplayEffectHandle
// Size: 0x8 (Inherited: 0x0)
struct FActiveGameplayEffectHandle
{
	int32_t Handle; // 0x0(0x4)
	uint8_t bPassedFiltersAndWasExecuted : 1; // 0x4(0x1), Mask(0x1)
	uint8_t BitPad_0x4_1 : 7; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
};

// Object: ScriptStruct GameplayAbilities.GameplayEffectSpecHandle
// Size: 0x10 (Inherited: 0x0)
struct FGameplayEffectSpecHandle
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct GameplayAbilities.GameplayEffectRemovalInfo
// Size: 0x20 (Inherited: 0x0)
struct FGameplayEffectRemovalInfo
{
	uint8_t bPrematureRemoval : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t StackCount; // 0x4(0x4)
	struct FGameplayEffectContextHandle EffectContext; // 0x8(0x18)
};

// Object: ScriptStruct GameplayAbilities.GameplayAbilityTargetDataHandle
// Size: 0x28 (Inherited: 0x0)
struct FGameplayAbilityTargetDataHandle
{
	uint8_t Pad_0x0[0x28]; // 0x0(0x28)
};

// Object: ScriptStruct GameplayAbilities.GameplayEventData
// Size: 0xB0 (Inherited: 0x0)
struct FGameplayEventData
{
	struct FGameplayTag EventTag; // 0x0(0x8)
	struct AActor* Instigator; // 0x8(0x8)
	struct AActor* Target; // 0x10(0x8)
	struct UObject* OptionalObject; // 0x18(0x8)
	struct UObject* OptionalObject2; // 0x20(0x8)
	struct FGameplayEffectContextHandle ContextHandle; // 0x28(0x18)
	struct FGameplayTagContainer InstigatorTags; // 0x40(0x20)
	struct FGameplayTagContainer TargetTags; // 0x60(0x20)
	float EventMagnitude; // 0x80(0x4)
	uint8_t Pad_0x84[0x4]; // 0x84(0x4)
	struct FGameplayAbilityTargetDataHandle TargetData; // 0x88(0x28)
};

// Object: ScriptStruct GameplayAbilities.GameplayAbilityActivationInfo
// Size: 0x20 (Inherited: 0x0)
struct FGameplayAbilityActivationInfo
{
	EGameplayAbilityActivationMode ActivationMode; // 0x0(0x1)
	uint8_t bCanBeEndedByOtherInstance : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t Pad_0x2[0x6]; // 0x2(0x6)
	struct FPredictionKey PredictionKeyWhenActivated; // 0x8(0x18)
};

// Object: ScriptStruct GameplayAbilities.GameplayEffectQuery
// Size: 0x150 (Inherited: 0x0)
struct FGameplayEffectQuery
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
	struct FDelegate CustomMatchDelegate_BP; // 0x10(0x10)
	struct FGameplayTagQuery OwningTagQuery; // 0x20(0x48)
	struct FGameplayTagQuery EffectTagQuery; // 0x68(0x48)
	struct FGameplayTagQuery SourceTagQuery; // 0xB0(0x48)
	struct FGameplayAttribute ModifyingAttribute; // 0xF8(0x38)
	struct UObject* EffectSource; // 0x130(0x8)
	struct UGameplayEffect* EffectDefinition; // 0x138(0x8)
	uint8_t Pad_0x140[0x10]; // 0x140(0x10)
};

// Object: ScriptStruct GameplayAbilities.GameplayCueParameters
// Size: 0xB8 (Inherited: 0x0)
struct FGameplayCueParameters
{
	float NormalizedMagnitude; // 0x0(0x4)
	float RawMagnitude; // 0x4(0x4)
	struct FGameplayEffectContextHandle EffectContext; // 0x8(0x18)
	struct FGameplayTag MatchedTagName; // 0x20(0x8)
	struct FGameplayTag OriginalTag; // 0x28(0x8)
	struct FGameplayTagContainer AggregatedSourceTags; // 0x30(0x20)
	struct FGameplayTagContainer AggregatedTargetTags; // 0x50(0x20)
	struct FVector_NetQuantize10 Location; // 0x70(0xC)
	struct FVector_NetQuantizeNormal Normal; // 0x7C(0xC)
	struct TWeakObjectPtr<struct AActor> Instigator; // 0x88(0x8)
	struct TWeakObjectPtr<struct AActor> EffectCauser; // 0x90(0x8)
	struct TWeakObjectPtr<struct UObject> SourceObject; // 0x98(0x8)
	struct TWeakObjectPtr<struct UPhysicalMaterial> PhysicalMaterial; // 0xA0(0x8)
	int32_t GameplayEffectLevel; // 0xA8(0x4)
	int32_t AbilityLevel; // 0xAC(0x4)
	struct TWeakObjectPtr<struct USceneComponent> TargetAttachComponent; // 0xB0(0x8)
};

// Object: ScriptStruct GameplayAbilities.GameplayEffectSpecForRPC
// Size: 0x78 (Inherited: 0x0)
struct FGameplayEffectSpecForRPC
{
	struct UGameplayEffect* Def; // 0x0(0x8)
	struct TArray<struct FGameplayEffectModifiedAttribute> ModifiedAttributes; // 0x8(0x10)
	struct FGameplayEffectContextHandle EffectContext; // 0x18(0x18)
	struct FGameplayTagContainer AggregatedSourceTags; // 0x30(0x20)
	struct FGameplayTagContainer AggregatedTargetTags; // 0x50(0x20)
	float Level; // 0x70(0x4)
	float AbilityLevel; // 0x74(0x4)
};

// Object: ScriptStruct GameplayAbilities.ServerAbilityRPCBatch
// Size: 0x50 (Inherited: 0x0)
struct FServerAbilityRPCBatch
{
	struct FGameplayAbilitySpecHandle AbilitySpecHandle; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FPredictionKey PredictionKey; // 0x8(0x18)
	struct FGameplayAbilityTargetDataHandle TargetData; // 0x20(0x28)
	uint8_t InputPressed : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Ended : 1; // 0x49(0x1), Mask(0x1)
	uint8_t BitPad_0x49_1 : 7; // 0x49(0x1)
	uint8_t Started : 1; // 0x4A(0x1), Mask(0x1)
	uint8_t BitPad_0x4A_1 : 7; // 0x4A(0x1)
	uint8_t Pad_0x4B[0x5]; // 0x4B(0x5)
};

// Object: ScriptStruct GameplayAbilities.ReplicatedPredictionKeyMap
// Size: 0x118 (Inherited: 0x108)
struct FReplicatedPredictionKeyMap : FFastArraySerializer
{
	struct TArray<struct FReplicatedPredictionKeyItem> PredictionKeys; // 0x108(0x10)
};

// Object: ScriptStruct GameplayAbilities.ReplicatedPredictionKeyItem
// Size: 0x28 (Inherited: 0xC)
struct FReplicatedPredictionKeyItem : FFastArraySerializerItem
{
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FPredictionKey PredictionKey; // 0x10(0x18)
};

// Object: ScriptStruct GameplayAbilities.MinimalReplicationTagCountMap
// Size: 0x60 (Inherited: 0x0)
struct FMinimalReplicationTagCountMap
{
	uint8_t Pad_0x0[0x50]; // 0x0(0x50)
	struct UAbilitySystemComponent* Owner; // 0x50(0x8)
	uint8_t Pad_0x58[0x8]; // 0x58(0x8)
};

// Object: ScriptStruct GameplayAbilities.ActiveGameplayCueContainer
// Size: 0x128 (Inherited: 0x108)
struct FActiveGameplayCueContainer : FFastArraySerializer
{
	struct TArray<struct FActiveGameplayCue> GameplayCues; // 0x108(0x10)
	uint8_t Pad_0x118[0x8]; // 0x118(0x8)
	struct UAbilitySystemComponent* Owner; // 0x120(0x8)
};

// Object: ScriptStruct GameplayAbilities.ActiveGameplayCue
// Size: 0xF0 (Inherited: 0xC)
struct FActiveGameplayCue : FFastArraySerializerItem
{
	struct FGameplayTag GameplayCueTag; // 0xC(0x8)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FPredictionKey PredictionKey; // 0x18(0x18)
	struct FGameplayCueParameters Parameters; // 0x30(0xB8)
	uint8_t bPredictivelyRemoved : 1; // 0xE8(0x1), Mask(0x1)
	uint8_t BitPad_0xE8_1 : 7; // 0xE8(0x1)
	uint8_t Pad_0xE9[0x7]; // 0xE9(0x7)
};

// Object: ScriptStruct GameplayAbilities.ActiveGameplayEffectsContainer
// Size: 0x480 (Inherited: 0x108)
struct FActiveGameplayEffectsContainer : FFastArraySerializer
{
	uint8_t Pad_0x108[0x30]; // 0x108(0x30)
	struct TArray<struct FActiveGameplayEffect> GameplayEffects_Internal; // 0x138(0x10)
	uint8_t Pad_0x148[0x310]; // 0x148(0x310)
	struct TArray<struct UGameplayEffect*> ApplicationImmunityQueryEffects; // 0x458(0x10)
	uint8_t Pad_0x468[0x18]; // 0x468(0x18)
};

// Object: ScriptStruct GameplayAbilities.GameplayAbilityLocalAnimMontage
// Size: 0x30 (Inherited: 0x0)
struct FGameplayAbilityLocalAnimMontage
{
	struct UAnimMontage* AnimMontage; // 0x0(0x8)
	uint8_t PlayBit : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct FPredictionKey PredictionKey; // 0x10(0x18)
	struct UGameplayAbility* AnimatingAbility; // 0x28(0x8)
};

// Object: ScriptStruct GameplayAbilities.GameplayAbilityRepAnimMontage
// Size: 0x30 (Inherited: 0x0)
struct FGameplayAbilityRepAnimMontage
{
	struct UAnimMontage* AnimMontage; // 0x0(0x8)
	float PlayRate; // 0x8(0x4)
	float Position; // 0xC(0x4)
	float BlendTime; // 0x10(0x4)
	uint8_t NextSectionID; // 0x14(0x1)
	uint8_t IsStopped : 1; // 0x15(0x1), Mask(0x1)
	uint8_t ForcePlayBit : 1; // 0x15(0x1), Mask(0x2)
	uint8_t SkipPositionCorrection : 1; // 0x15(0x1), Mask(0x4)
	uint8_t bSkipPlayRate : 1; // 0x15(0x1), Mask(0x8)
	uint8_t BitPad_0x15_4 : 4; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
	struct FPredictionKey PredictionKey; // 0x18(0x18)
};

// Object: ScriptStruct GameplayAbilities.GameplayAbilitySpecContainer
// Size: 0x120 (Inherited: 0x108)
struct FGameplayAbilitySpecContainer : FFastArraySerializer
{
	struct TArray<struct FGameplayAbilitySpec> Items; // 0x108(0x10)
	struct UAbilitySystemComponent* Owner; // 0x118(0x8)
};

// Object: ScriptStruct GameplayAbilities.GameplayAbilitySpec
// Size: 0xC8 (Inherited: 0xC)
struct FGameplayAbilitySpec : FFastArraySerializerItem
{
	struct FGameplayAbilitySpecHandle Handle; // 0xC(0x4)
	struct UGameplayAbility* Ability; // 0x10(0x8)
	int32_t Level; // 0x18(0x4)
	int32_t InputID; // 0x1C(0x4)
	struct UObject* SourceObject; // 0x20(0x8)
	uint8_t ActiveCount; // 0x28(0x1)
	uint8_t InputPressed : 1; // 0x29(0x1), Mask(0x1)
	uint8_t RemoveAfterActivation : 1; // 0x29(0x1), Mask(0x2)
	uint8_t PendingRemove : 1; // 0x29(0x1), Mask(0x4)
	uint8_t BitPad_0x29_3 : 5; // 0x29(0x1)
	uint8_t Pad_0x2A[0x6]; // 0x2A(0x6)
	struct FGameplayAbilityActivationInfo ActivationInfo; // 0x30(0x20)
	struct TArray<struct UGameplayAbility*> NonReplicatedInstances; // 0x50(0x10)
	struct TArray<struct UGameplayAbility*> ReplicatedInstances; // 0x60(0x10)
	struct FActiveGameplayEffectHandle GameplayEffectHandle; // 0x70(0x8)
	uint8_t Pad_0x78[0x50]; // 0x78(0x50)
};

// Object: ScriptStruct GameplayAbilities.AttributeDefaults
// Size: 0x10 (Inherited: 0x0)
struct FAttributeDefaults
{
	struct UAttributeSet* Attributes; // 0x0(0x8)
	struct UDataTable* DefaultStartingTable; // 0x8(0x8)
};

// Object: ScriptStruct GameplayAbilities.GameplayEffectContext
// Size: 0x70 (Inherited: 0x0)
struct FGameplayEffectContext
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct TWeakObjectPtr<struct AActor> Instigator; // 0x8(0x8)
	struct TWeakObjectPtr<struct AActor> EffectCauser; // 0x10(0x8)
	struct TWeakObjectPtr<struct UGameplayAbility> AbilityCDO; // 0x18(0x8)
	struct TWeakObjectPtr<struct UGameplayAbility> AbilityInstanceNotReplicated; // 0x20(0x8)
	int32_t AbilityLevel; // 0x28(0x4)
	struct TWeakObjectPtr<struct UObject> SourceObject; // 0x2C(0x8)
	struct TWeakObjectPtr<struct UAbilitySystemComponent> InstigatorAbilitySystemComponent; // 0x34(0x8)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct TArray<struct TWeakObjectPtr<struct AActor>> Actors; // 0x40(0x10)
	uint8_t Pad_0x50[0x10]; // 0x50(0x10)
	struct FVector WorldOrigin; // 0x60(0xC)
	uint8_t bHasWorldOrigin : 1; // 0x6C(0x1), Mask(0x1)
	uint8_t bReplicateSourceObject : 1; // 0x6C(0x1), Mask(0x2)
	uint8_t BitPad_0x6C_2 : 6; // 0x6C(0x1)
	uint8_t Pad_0x6D[0x3]; // 0x6D(0x3)
};

// Object: ScriptStruct GameplayAbilities.NetSerializeScriptStructCache
// Size: 0x10 (Inherited: 0x0)
struct FNetSerializeScriptStructCache
{
	struct TArray<struct UScriptStruct*> ScriptStructs; // 0x0(0x10)
};

// Object: ScriptStruct GameplayAbilities.AttributeMetaData
// Size: 0x30 (Inherited: 0x8)
struct FAttributeMetaData : FTableRowBase
{
	float BaseValue; // 0x8(0x4)
	float MinValue; // 0xC(0x4)
	float MaxValue; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString DerivedAttributeInfo; // 0x18(0x10)
	uint8_t bCanStack : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
};

// Object: ScriptStruct GameplayAbilities.GameplayAttributeData
// Size: 0x10 (Inherited: 0x0)
struct FGameplayAttributeData
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	float BaseValue; // 0x8(0x4)
	float CurrentValue; // 0xC(0x4)
};

// Object: ScriptStruct GameplayAbilities.AbilityTriggerData
// Size: 0xC (Inherited: 0x0)
struct FAbilityTriggerData
{
	struct FGameplayTag TriggerTag; // 0x0(0x8)
	EGameplayAbilityTriggerSource TriggerSource; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Object: ScriptStruct GameplayAbilities.GameplayAbilityBindInfo
// Size: 0x10 (Inherited: 0x0)
struct FGameplayAbilityBindInfo
{
	EGameplayAbilityInputBinds Command; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct UGameplayAbility* GameplayAbilityClass; // 0x8(0x8)
};

// Object: ScriptStruct GameplayAbilities.GameplayTargetDataFilterHandle
// Size: 0x10 (Inherited: 0x0)
struct FGameplayTargetDataFilterHandle
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct GameplayAbilities.GameplayTargetDataFilter
// Size: 0x28 (Inherited: 0x0)
struct FGameplayTargetDataFilter
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct AActor* SelfActor; // 0x8(0x8)
	ETargetDataFilterSelf SelfFilter; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct AActor* RequiredActorClass; // 0x18(0x8)
	uint8_t bReverseFilter : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct GameplayAbilities.GameplayAbilityTargetData
// Size: 0x8 (Inherited: 0x0)
struct FGameplayAbilityTargetData
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
// Size: 0x98 (Inherited: 0x8)
struct FGameplayAbilityTargetData_SingleTargetHit : FGameplayAbilityTargetData
{
	struct FHitResult HitResult; // 0x8(0x88)
	uint8_t bHitReplaced : 1; // 0x90(0x1), Mask(0x1)
	uint8_t BitPad_0x90_1 : 7; // 0x90(0x1)
	uint8_t Pad_0x91[0x7]; // 0x91(0x7)
};

// Object: ScriptStruct GameplayAbilities.GameplayAbilityTargetingLocationInfo
// Size: 0x60 (Inherited: 0x0)
struct FGameplayAbilityTargetingLocationInfo
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	EGameplayAbilityTargetingLocationType LocationType; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct FTransform LiteralTransform; // 0x10(0x30)
	struct AActor* SourceActor; // 0x40(0x8)
	struct UMeshComponent* SourceComponent; // 0x48(0x8)
	struct UGameplayAbility* SourceAbility; // 0x50(0x8)
	struct FName SourceSocketName; // 0x58(0x8)
};

// Object: ScriptStruct GameplayAbilities.GameplayAbilityTargetData_ActorArray
// Size: 0x80 (Inherited: 0x8)
struct FGameplayAbilityTargetData_ActorArray : FGameplayAbilityTargetData
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FGameplayAbilityTargetingLocationInfo SourceLocation; // 0x10(0x60)
	struct TArray<struct TWeakObjectPtr<struct AActor>> TargetActorArray; // 0x70(0x10)
};

// Object: ScriptStruct GameplayAbilities.GameplayAbilityTargetData_LocationInfo
// Size: 0xD0 (Inherited: 0x8)
struct FGameplayAbilityTargetData_LocationInfo : FGameplayAbilityTargetData
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FGameplayAbilityTargetingLocationInfo SourceLocation; // 0x10(0x60)
	struct FGameplayAbilityTargetingLocationInfo TargetLocation; // 0x70(0x60)
};

// Object: ScriptStruct GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
// Size: 0x8 (Inherited: 0x0)
struct FGameplayAbilitySpecHandleAndPredictionKey
{
	struct FGameplayAbilitySpecHandle AbilityHandle; // 0x0(0x4)
	int32_t PredictionKeyAtCreation; // 0x4(0x4)
};

// Object: ScriptStruct GameplayAbilities.AbilityTaskDebugMessage
// Size: 0x18 (Inherited: 0x0)
struct FAbilityTaskDebugMessage
{
	struct UGameplayTask* FromTask; // 0x0(0x8)
	struct FString Message; // 0x8(0x10)
};

// Object: ScriptStruct GameplayAbilities.AbilityEndedData
// Size: 0x10 (Inherited: 0x0)
struct FAbilityEndedData
{
	struct UGameplayAbility* AbilityThatEnded; // 0x0(0x8)
	struct FGameplayAbilitySpecHandle AbilitySpecHandle; // 0x8(0x4)
	uint8_t bReplicateEndAbility : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t bWasCancelled : 1; // 0xD(0x1), Mask(0x1)
	uint8_t BitPad_0xD_1 : 7; // 0xD(0x1)
	uint8_t Pad_0xE[0x2]; // 0xE(0x2)
};

// Object: ScriptStruct GameplayAbilities.GameplayAbilityActorInfo
// Size: 0x48 (Inherited: 0x0)
struct FGameplayAbilityActorInfo
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct TWeakObjectPtr<struct AActor> OwnerActor; // 0x8(0x8)
	struct TWeakObjectPtr<struct AActor> AvatarActor; // 0x10(0x8)
	struct TWeakObjectPtr<struct APlayerController> PlayerController; // 0x18(0x8)
	struct TWeakObjectPtr<struct UAbilitySystemComponent> AbilitySystemComponent; // 0x20(0x8)
	struct TWeakObjectPtr<struct USkeletalMeshComponent> SkeletalMeshComponent; // 0x28(0x8)
	struct TWeakObjectPtr<struct UAnimInstance> AnimInstance; // 0x30(0x8)
	struct TWeakObjectPtr<struct UMovementComponent> MovementComponent; // 0x38(0x8)
	struct FName AffectedAnimInstanceTag; // 0x40(0x8)
};

// Object: ScriptStruct GameplayAbilities.WorldReticleParameters
// Size: 0xC (Inherited: 0x0)
struct FWorldReticleParameters
{
	struct FVector AOEScale; // 0x0(0xC)
};

// Object: ScriptStruct GameplayAbilities.PreallocationInfo
// Size: 0x68 (Inherited: 0x0)
struct FPreallocationInfo
{
	uint8_t Pad_0x0[0x50]; // 0x0(0x50)
	struct TArray<struct AGameplayCueNotify_Actor*> ClassesNeedingPreallocation; // 0x50(0x10)
	uint8_t Pad_0x60[0x8]; // 0x60(0x8)
};

// Object: ScriptStruct GameplayAbilities.GameplayCuePendingExecute
// Size: 0x170 (Inherited: 0x0)
struct FGameplayCuePendingExecute
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
	struct FPredictionKey PredictionKey; // 0x18(0x18)
	EGameplayCuePayloadType PayloadType; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
	struct UAbilitySystemComponent* OwningComponent; // 0x38(0x8)
	struct FGameplayEffectSpecForRPC FromSpec; // 0x40(0x78)
	struct FGameplayCueParameters CueParameters; // 0xB8(0xB8)
};

// Object: ScriptStruct GameplayAbilities.MinimalGameplayCueReplicationProxy
// Size: 0x1C0 (Inherited: 0x0)
struct FMinimalGameplayCueReplicationProxy
{
	uint8_t Pad_0x0[0x1B0]; // 0x0(0x1B0)
	struct UAbilitySystemComponent* Owner; // 0x1B0(0x8)
	uint8_t Pad_0x1B8[0x8]; // 0x1B8(0x8)
};

// Object: ScriptStruct GameplayAbilities.GameplayCueTag
// Size: 0x8 (Inherited: 0x0)
struct FGameplayCueTag
{
	struct FGameplayTag GameplayCueTag; // 0x0(0x8)
};

// Object: ScriptStruct GameplayAbilities.GameplayCueObjectLibrary
// Size: 0x50 (Inherited: 0x0)
struct FGameplayCueObjectLibrary
{
	struct TArray<struct FString> Paths; // 0x0(0x10)
	uint8_t Pad_0x10[0x20]; // 0x10(0x20)
	struct UObjectLibrary* ActorObjectLibrary; // 0x30(0x8)
	struct UObjectLibrary* StaticObjectLibrary; // 0x38(0x8)
	struct UGameplayCueSet* CueSet; // 0x40(0x8)
	uint8_t Pad_0x48[0x4]; // 0x48(0x4)
	uint8_t bShouldSyncScan : 1; // 0x4C(0x1), Mask(0x1)
	uint8_t BitPad_0x4C_1 : 7; // 0x4C(0x1)
	uint8_t bShouldAsyncLoad : 1; // 0x4D(0x1), Mask(0x1)
	uint8_t BitPad_0x4D_1 : 7; // 0x4D(0x1)
	uint8_t bShouldSyncLoad : 1; // 0x4E(0x1), Mask(0x1)
	uint8_t BitPad_0x4E_1 : 7; // 0x4E(0x1)
	uint8_t bHasBeenInitialized : 1; // 0x4F(0x1), Mask(0x1)
	uint8_t BitPad_0x4F_1 : 7; // 0x4F(0x1)
};

// Object: ScriptStruct GameplayAbilities.GameplayCueNotifyData
// Size: 0x30 (Inherited: 0x0)
struct FGameplayCueNotifyData
{
	struct FGameplayTag GameplayCueTag; // 0x0(0x8)
	struct FSoftObjectPath GameplayCueNotifyObj; // 0x8(0x18)
	struct UObject* LoadedGameplayCueClass; // 0x20(0x8)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: ScriptStruct GameplayAbilities.GameplayCueTranslatorNodeIndex
// Size: 0x4 (Inherited: 0x0)
struct FGameplayCueTranslatorNodeIndex
{
	int32_t Index; // 0x0(0x4)
};

// Object: ScriptStruct GameplayAbilities.GameplayCueTranslationManager
// Size: 0x80 (Inherited: 0x0)
struct FGameplayCueTranslationManager
{
	struct TArray<struct FGameplayCueTranslatorNode> TranslationLUT; // 0x0(0x10)
	struct TMap<struct FName, struct FGameplayCueTranslatorNodeIndex> TranslationNameToIndexMap; // 0x10(0x50)
	struct UGameplayTagsManager* TagManager; // 0x60(0x8)
	uint8_t Pad_0x68[0x18]; // 0x68(0x18)
};

// Object: ScriptStruct GameplayAbilities.GameplayCueTranslatorNode
// Size: 0x78 (Inherited: 0x0)
struct FGameplayCueTranslatorNode
{
	struct TArray<struct FGameplayCueTranslationLink> Links; // 0x0(0x10)
	struct FGameplayCueTranslatorNodeIndex CachedIndex; // 0x10(0x4)
	struct FGameplayTag CachedGameplayTag; // 0x14(0x8)
	struct FName CachedGameplayTagName; // 0x1C(0x8)
	uint8_t Pad_0x24[0x54]; // 0x24(0x54)
};

// Object: ScriptStruct GameplayAbilities.GameplayCueTranslationLink
// Size: 0x18 (Inherited: 0x0)
struct FGameplayCueTranslationLink
{
	struct UGameplayCueTranslator* RulesCDO; // 0x0(0x8)
	uint8_t Pad_0x8[0x10]; // 0x8(0x10)
};

// Object: ScriptStruct GameplayAbilities.ActiveGameplayEffectQuery
// Size: 0x88 (Inherited: 0x0)
struct FActiveGameplayEffectQuery
{
	uint8_t Pad_0x0[0x88]; // 0x0(0x88)
};

// Object: ScriptStruct GameplayAbilities.InheritedTagContainer
// Size: 0x60 (Inherited: 0x0)
struct FInheritedTagContainer
{
	struct FGameplayTagContainer CombinedTags; // 0x0(0x20)
	struct FGameplayTagContainer Added; // 0x20(0x20)
	struct FGameplayTagContainer Removed; // 0x40(0x20)
};

// Object: ScriptStruct GameplayAbilities.GameplayEffectCue
// Size: 0x60 (Inherited: 0x0)
struct FGameplayEffectCue
{
	struct FGameplayAttribute MagnitudeAttribute; // 0x0(0x38)
	float MinLevel; // 0x38(0x4)
	float MaxLevel; // 0x3C(0x4)
	struct FGameplayTagContainer GameplayCueTags; // 0x40(0x20)
};

// Object: ScriptStruct GameplayAbilities.AttributeBasedFloat
// Size: 0xF8 (Inherited: 0x0)
struct FAttributeBasedFloat
{
	struct FScalableFloat Coefficient; // 0x0(0x20)
	struct FScalableFloat PreMultiplyAdditiveValue; // 0x20(0x20)
	struct FScalableFloat PostMultiplyAdditiveValue; // 0x40(0x20)
	struct FGameplayEffectAttributeCaptureDefinition BackingAttribute; // 0x60(0x40)
	struct FCurveTableRowHandle AttributeCurve; // 0xA0(0x10)
	EAttributeBasedFloatCalculationType AttributeCalculationType; // 0xB0(0x1)
	EGameplayModEvaluationChannel FinalChannel; // 0xB1(0x1)
	uint8_t Pad_0xB2[0x6]; // 0xB2(0x6)
	struct FGameplayTagContainer SourceTagFilter; // 0xB8(0x20)
	struct FGameplayTagContainer TargetTagFilter; // 0xD8(0x20)
};

// Object: ScriptStruct GameplayAbilities.CustomCalculationBasedFloat
// Size: 0x78 (Inherited: 0x0)
struct FCustomCalculationBasedFloat
{
	struct UGameplayModMagnitudeCalculation* CalculationClassMagnitude; // 0x0(0x8)
	struct FScalableFloat Coefficient; // 0x8(0x20)
	struct FScalableFloat PreMultiplyAdditiveValue; // 0x28(0x20)
	struct FScalableFloat PostMultiplyAdditiveValue; // 0x48(0x20)
	struct FCurveTableRowHandle FinalLookupCurve; // 0x68(0x10)
};

// Object: ScriptStruct GameplayAbilities.SetByCallerFloat
// Size: 0x10 (Inherited: 0x0)
struct FSetByCallerFloat
{
	struct FName DataName; // 0x0(0x8)
	struct FGameplayTag DataTag; // 0x8(0x8)
};

// Object: ScriptStruct GameplayAbilities.GameplayEffectModifierMagnitude
// Size: 0x1A8 (Inherited: 0x0)
struct FGameplayEffectModifierMagnitude
{
	EGameplayEffectMagnitudeCalculation MagnitudeCalculationType; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FScalableFloat ScalableFloatMagnitude; // 0x8(0x20)
	struct FAttributeBasedFloat AttributeBasedMagnitude; // 0x28(0xF8)
	struct FCustomCalculationBasedFloat CustomMagnitude; // 0x120(0x78)
	struct FSetByCallerFloat SetByCallerMagnitude; // 0x198(0x10)
};

// Object: ScriptStruct GameplayAbilities.GameplayModEvaluationChannelSettings
// Size: 0x1 (Inherited: 0x0)
struct FGameplayModEvaluationChannelSettings
{
	EGameplayModEvaluationChannel Channel; // 0x0(0x1)
};

// Object: ScriptStruct GameplayAbilities.GameplayTagRequirements
// Size: 0x40 (Inherited: 0x0)
struct FGameplayTagRequirements
{
	struct FGameplayTagContainer RequireTags; // 0x0(0x20)
	struct FGameplayTagContainer IgnoreTags; // 0x20(0x20)
};

// Object: ScriptStruct GameplayAbilities.GameplayModifierInfo
// Size: 0x290 (Inherited: 0x0)
struct FGameplayModifierInfo
{
	struct FGameplayAttribute Attribute; // 0x0(0x38)
	EGameplayModOp ModifierOp; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
	struct FScalableFloat Magnitude; // 0x40(0x20)
	struct FGameplayEffectModifierMagnitude ModifierMagnitude; // 0x60(0x1A8)
	struct FGameplayModEvaluationChannelSettings EvaluationChannelSettings; // 0x208(0x1)
	uint8_t Pad_0x209[0x7]; // 0x209(0x7)
	struct FGameplayTagRequirements SourceTags; // 0x210(0x40)
	struct FGameplayTagRequirements TargetTags; // 0x250(0x40)
};

// Object: ScriptStruct GameplayAbilities.GameplayEffectExecutionDefinition
// Size: 0x58 (Inherited: 0x0)
struct FGameplayEffectExecutionDefinition
{
	struct UGameplayEffectExecutionCalculation* CalculationClass; // 0x0(0x8)
	struct FGameplayTagContainer PassedInTags; // 0x8(0x20)
	struct TArray<struct FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers; // 0x28(0x10)
	struct TArray<struct UGameplayEffect*> ConditionalGameplayEffectClasses; // 0x38(0x10)
	struct TArray<struct FConditionalGameplayEffect> ConditionalGameplayEffects; // 0x48(0x10)
};

// Object: ScriptStruct GameplayAbilities.ConditionalGameplayEffect
// Size: 0x28 (Inherited: 0x0)
struct FConditionalGameplayEffect
{
	struct UGameplayEffect* EffectClass; // 0x0(0x8)
	struct FGameplayTagContainer RequiredSourceTags; // 0x8(0x20)
};

// Object: ScriptStruct GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
// Size: 0x280 (Inherited: 0x0)
struct FGameplayEffectExecutionScopedModifierInfo
{
	struct FGameplayEffectAttributeCaptureDefinition CapturedAttribute; // 0x0(0x40)
	struct FGameplayTag TransientAggregatorIdentifier; // 0x40(0x8)
	EGameplayEffectScopedModifierAggregatorType AggregatorType; // 0x48(0x1)
	EGameplayModOp ModifierOp; // 0x49(0x1)
	uint8_t Pad_0x4A[0x6]; // 0x4A(0x6)
	struct FGameplayEffectModifierMagnitude ModifierMagnitude; // 0x50(0x1A8)
	struct FGameplayModEvaluationChannelSettings EvaluationChannelSettings; // 0x1F8(0x1)
	uint8_t Pad_0x1F9[0x7]; // 0x1F9(0x7)
	struct FGameplayTagRequirements SourceTags; // 0x200(0x40)
	struct FGameplayTagRequirements TargetTags; // 0x240(0x40)
};

// Object: ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionOutput
// Size: 0x18 (Inherited: 0x0)
struct FGameplayEffectCustomExecutionOutput
{
	struct TArray<struct FGameplayModifierEvaluatedData> OutputModifiers; // 0x0(0x10)
	uint8_t bTriggerConditionalGameplayEffects : 1; // 0x10(0x1), Mask(0x1)
	uint8_t bHandledStackCountManually : 1; // 0x10(0x1), Mask(0x2)
	uint8_t bHandledGameplayCuesManually : 1; // 0x10(0x1), Mask(0x4)
	uint8_t BitPad_0x10_3 : 5; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct GameplayAbilities.GameplayModifierEvaluatedData
// Size: 0x50 (Inherited: 0x0)
struct FGameplayModifierEvaluatedData
{
	struct FGameplayAttribute Attribute; // 0x0(0x38)
	EGameplayModOp ModifierOp; // 0x38(0x1)
	uint8_t Pad_0x39[0x3]; // 0x39(0x3)
	float Magnitude; // 0x3C(0x4)
	struct FActiveGameplayEffectHandle Handle; // 0x40(0x8)
	uint8_t IsValid : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
};

// Object: ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionParameters
// Size: 0xF8 (Inherited: 0x0)
struct FGameplayEffectCustomExecutionParameters
{
	uint8_t Pad_0x0[0xF8]; // 0x0(0xF8)
};

// Object: ScriptStruct GameplayAbilities.GameplayTagBlueprintPropertyMap
// Size: 0x20 (Inherited: 0x0)
struct FGameplayTagBlueprintPropertyMap
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
	struct TArray<struct FGameplayTagBlueprintPropertyMapping> PropertyMappings; // 0x10(0x10)
};

// Object: ScriptStruct GameplayAbilities.GameplayTagBlueprintPropertyMapping
// Size: 0x48 (Inherited: 0x0)
struct FGameplayTagBlueprintPropertyMapping
{
	struct FGameplayTag TagToMap; // 0x0(0x8)
	struct TFieldPath<FProperty> PropertyToEdit; // 0x8(0x20)
	struct FName PropertyName; // 0x28(0x8)
	struct FGuid PropertyGuid; // 0x30(0x10)
	uint8_t Pad_0x40[0x8]; // 0x40(0x8)
};

// Object: ScriptStruct GameplayAbilities.GameplayTagReponsePair
// Size: 0x28 (Inherited: 0x0)
struct FGameplayTagReponsePair
{
	struct FGameplayTag Tag; // 0x0(0x8)
	struct UGameplayEffect* ResponseGameplayEffect; // 0x8(0x8)
	struct TArray<struct UGameplayEffect*> ResponseGameplayEffects; // 0x10(0x10)
	int32_t SoftCountCap; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct GameplayAbilities.GameplayTagResponseTableEntry
// Size: 0x50 (Inherited: 0x0)
struct FGameplayTagResponseTableEntry
{
	struct FGameplayTagReponsePair Positive; // 0x0(0x28)
	struct FGameplayTagReponsePair Negative; // 0x28(0x28)
};

// Object: Class GameplayAbilities.GameplayAbility
// Size: 0x400 (Inherited: 0x28)
struct UGameplayAbility : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGameplayAbility, "GameplayAbility")

	uint8_t Pad_0x28[0x80]; // 0x28(0x80)
	struct FGameplayTagContainer AbilityTags; // 0xA8(0x20)
	uint8_t bReplicateInputDirectly : 1; // 0xC8(0x1), Mask(0x1)
	uint8_t BitPad_0xC8_1 : 7; // 0xC8(0x1)
	uint8_t RemoteInstanceEnded : 1; // 0xC9(0x1), Mask(0x1)
	uint8_t BitPad_0xC9_1 : 7; // 0xC9(0x1)
	uint8_t Pad_0xCA[0x4]; // 0xCA(0x4)
	EGameplayAbilityReplicationPolicy ReplicationPolicy; // 0xCE(0x1)
	EGameplayAbilityInstancingPolicy InstancingPolicy; // 0xCF(0x1)
	uint8_t bServerRespectsRemoteAbilityCancellation : 1; // 0xD0(0x1), Mask(0x1)
	uint8_t BitPad_0xD0_1 : 7; // 0xD0(0x1)
	uint8_t bRetriggerInstancedAbility : 1; // 0xD1(0x1), Mask(0x1)
	uint8_t BitPad_0xD1_1 : 7; // 0xD1(0x1)
	uint8_t Pad_0xD2[0x6]; // 0xD2(0x6)
	struct FGameplayAbilityActivationInfo CurrentActivationInfo; // 0xD8(0x20)
	struct FGameplayEventData CurrentEventData; // 0xF8(0xB0)
	EGameplayAbilityNetExecutionPolicy NetExecutionPolicy; // 0x1A8(0x1)
	uint8_t Pad_0x1A9[0x7]; // 0x1A9(0x7)
	struct UGameplayEffect* CostGameplayEffectClass; // 0x1B0(0x8)
	struct TArray<struct FAbilityTriggerData> AbilityTriggers; // 0x1B8(0x10)
	struct UGameplayEffect* CooldownGameplayEffectClass; // 0x1C8(0x8)
	struct FGameplayTagQuery CancelAbilitiesMatchingTagQuery; // 0x1D0(0x48)
	struct FGameplayTagContainer CancelAbilitiesWithTag; // 0x218(0x20)
	struct FGameplayTagContainer BlockAbilitiesWithTag; // 0x238(0x20)
	struct FGameplayTagContainer ActivationOwnedTags; // 0x258(0x20)
	struct FGameplayTagContainer ActivationRequiredTags; // 0x278(0x20)
	struct FGameplayTagContainer ActivationBlockedTags; // 0x298(0x20)
	struct FGameplayTagContainer SourceRequiredTags; // 0x2B8(0x20)
	struct FGameplayTagContainer SourceBlockedTags; // 0x2D8(0x20)
	struct FGameplayTagContainer TargetRequiredTags; // 0x2F8(0x20)
	struct FGameplayTagContainer TargetBlockedTags; // 0x318(0x20)
	uint8_t Pad_0x338[0x20]; // 0x338(0x20)
	struct TArray<struct UGameplayTask*> ActiveTasks; // 0x358(0x10)
	uint8_t Pad_0x368[0x10]; // 0x368(0x10)
	struct UAnimMontage* CurrentMontage; // 0x378(0x8)
	uint8_t Pad_0x380[0x60]; // 0x380(0x60)
	uint8_t bIsActive : 1; // 0x3E0(0x1), Mask(0x1)
	uint8_t BitPad_0x3E0_1 : 7; // 0x3E0(0x1)
	uint8_t bIsCancelable : 1; // 0x3E1(0x1), Mask(0x1)
	uint8_t BitPad_0x3E1_1 : 7; // 0x3E1(0x1)
	uint8_t bIsBlockingOtherAbilities : 1; // 0x3E2(0x1), Mask(0x1)
	uint8_t BitPad_0x3E2_1 : 7; // 0x3E2(0x1)
	uint8_t Pad_0x3E3[0x15]; // 0x3E3(0x15)
	uint8_t bMarkPendingKillOnAbilityEnd : 1; // 0x3F8(0x1), Mask(0x1)
	uint8_t BitPad_0x3F8_1 : 7; // 0x3F8(0x1)
	uint8_t Pad_0x3F9[0x7]; // 0x3F9(0x7)

	// Object: Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x7fd3290
	// Params: [ Num(1) Size(0x1) ]
	void SetShouldBlockOtherAbilities(uint8_t bShouldBlockAbilities);

	// Object: Function GameplayAbilities.GameplayAbility.SetCanBeCanceled
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x7fd31dc
	// Params: [ Num(1) Size(0x1) ]
	void SetCanBeCanceled(uint8_t bCanBeCanceled);

	// Object: Function GameplayAbilities.GameplayAbility.SendGameplayEvent
	// Flags: [Native|Protected|BlueprintCallable]
	// Offset: 0x7fd2f0c
	// Params: [ Num(2) Size(0xB8) ]
	void SendGameplayEvent(struct FGameplayTag EventTag, struct FGameplayEventData Payload);

	// Object: Function GameplayAbilities.GameplayAbility.RemoveGrantedByEffect
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x7fd2ef0
	// Params: [ Num(0) Size(0x0) ]
	void RemoveGrantedByEffect();

	// Object: Function GameplayAbilities.GameplayAbility.MontageStop
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x7fd2e4c
	// Params: [ Num(1) Size(0x4) ]
	void MontageStop(float OverrideBlendOutTime);

	// Object: Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x7fd2d70
	// Params: [ Num(2) Size(0x10) ]
	void MontageSetNextSectionName(struct FName FromSectionName, struct FName ToSectionName);

	// Object: Function GameplayAbilities.GameplayAbility.MontageJumpToSection
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x7fd2ccc
	// Params: [ Num(1) Size(0x8) ]
	void MontageJumpToSection(struct FName SectionName);

	// Object: Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fd2bf8
	// Params: [ Num(2) Size(0x70) ]
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(struct FName SocketName);

	// Object: Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fd2b74
	// Params: [ Num(1) Size(0x60) ]
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor();

	// Object: Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7fd29b4
	// Params: [ Num(3) Size(0x20) ]
	struct FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(struct UGameplayEffect* GameplayEffectClass, float Level);

	// Object: Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent
	// Flags: [Event|Protected|BlueprintEvent|Const]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0xF9) ]
	uint8_t K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayEventData Payload);

	// Object: Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue
	// Flags: [Native|Protected|BlueprintCallable]
	// Offset: 0x7fd2908
	// Params: [ Num(1) Size(0x8) ]
	void K2_RemoveGameplayCue(struct FGameplayTag GameplayCueTag);

	// Object: Function GameplayAbilities.GameplayAbility.K2_OnEndAbility
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void K2_OnEndAbility(uint8_t bWasCancelled);

	// Object: Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams
	// Flags: [Native|Protected|HasOutParms|BlueprintCallable]
	// Offset: 0x7fd2740
	// Params: [ Num(2) Size(0xC0) ]
	void K2_ExecuteGameplayCueWithParams(struct FGameplayTag GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters);

	// Object: Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue
	// Flags: [Native|Protected|BlueprintCallable]
	// Offset: 0x7fd2570
	// Params: [ Num(2) Size(0x20) ]
	void K2_ExecuteGameplayCue(struct FGameplayTag GameplayCueTag, struct FGameplayEffectContextHandle Context);

	// Object: Function GameplayAbilities.GameplayAbility.K2_EndAbility
	// Flags: [Native|Protected|BlueprintCallable]
	// Offset: 0x7fd2554
	// Params: [ Num(0) Size(0x0) ]
	void K2_EndAbility();

	// Object: Function GameplayAbilities.GameplayAbility.K2_CommitExecute
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void K2_CommitExecute();

	// Object: Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x7fd2494
	// Params: [ Num(2) Size(0x2) ]
	uint8_t K2_CommitAbilityCost(uint8_t BroadcastCommitEvent);

	// Object: Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x7fd2388
	// Params: [ Num(3) Size(0x3) ]
	uint8_t K2_CommitAbilityCooldown(uint8_t BroadcastCommitEvent, uint8_t ForceCooldown);

	// Object: Function GameplayAbilities.GameplayAbility.K2_CommitAbility
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x7fd2348
	// Params: [ Num(1) Size(0x1) ]
	uint8_t K2_CommitAbility();

	// Object: Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x7fd2308
	// Params: [ Num(1) Size(0x1) ]
	uint8_t K2_CheckAbilityCost();

	// Object: Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x7fd22c8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t K2_CheckAbilityCooldown();

	// Object: Function GameplayAbilities.GameplayAbility.K2_CancelAbility
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7fd22b4
	// Params: [ Num(0) Size(0x0) ]
	void K2_CancelAbility();

	// Object: Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility
	// Flags: [Event|Protected|HasOutParms|BlueprintEvent|Const]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x69) ]
	uint8_t K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayTagContainer& RelevantTags);

	// Object: Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x7fd206c
	// Params: [ Num(3) Size(0x48) ]
	struct TArray<struct FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle EffectSpecHandle, struct FGameplayAbilityTargetDataHandle TargetData);

	// Object: Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x7fd1ee4
	// Params: [ Num(2) Size(0x18) ]
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(struct FGameplayEffectSpecHandle EffectSpecHandle);

	// Object: Function GameplayAbilities.GameplayAbility.K2_AddGameplayCueWithParams
	// Flags: [Native|Protected|HasOutParms|BlueprintCallable]
	// Offset: 0x7fd1ccc
	// Params: [ Num(3) Size(0xC1) ]
	void K2_AddGameplayCueWithParams(struct FGameplayTag GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameter, uint8_t bRemoveOnAbilityEnd);

	// Object: Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue
	// Flags: [Native|Protected|BlueprintCallable]
	// Offset: 0x7fd1ab8
	// Params: [ Num(3) Size(0x21) ]
	void K2_AddGameplayCue(struct FGameplayTag GameplayCueTag, struct FGameplayEffectContextHandle Context, uint8_t bRemoveOnAbilityEnd);

	// Object: Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent
	// Flags: [Event|Protected|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0xB0) ]
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);

	// Object: Function GameplayAbilities.GameplayAbility.K2_ActivateAbility
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void K2_ActivateAbility();

	// Object: Function GameplayAbilities.GameplayAbility.InvalidateClientPredictionKey
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0x7fd1aa4
	// Params: [ Num(0) Size(0x0) ]
	void InvalidateClientPredictionKey();

	// Object: Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7fd1a70
	// Params: [ Num(1) Size(0x8) ]
	struct USkeletalMeshComponent* GetOwningComponentFromActorInfo();

	// Object: Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7fd1a3c
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetOwningActorFromActorInfo();

	// Object: Function GameplayAbilities.GameplayAbility.GetGrantedByEffectContext
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7fd18fc
	// Params: [ Num(1) Size(0x18) ]
	struct FGameplayEffectContextHandle GetGrantedByEffectContext();

	// Object: Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7fd18c8
	// Params: [ Num(1) Size(0x8) ]
	struct UObject* GetCurrentSourceObject();

	// Object: Function GameplayAbilities.GameplayAbility.GetCurrentMontage
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7fd1894
	// Params: [ Num(1) Size(0x8) ]
	struct UAnimMontage* GetCurrentMontage();

	// Object: Function GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7fd1860
	// Params: [ Num(1) Size(0x4) ]
	float GetCooldownTimeRemaining();

	// Object: Function GameplayAbilities.GameplayAbility.GetContextFromOwner
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7fd1674
	// Params: [ Num(2) Size(0x40) ]
	struct FGameplayEffectContextHandle GetContextFromOwner(struct FGameplayAbilityTargetDataHandle OptionalTargetData);

	// Object: Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7fd1640
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetAvatarActorFromActorInfo();

	// Object: Function GameplayAbilities.GameplayAbility.GetActorInfo
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7fd15c4
	// Params: [ Num(1) Size(0x48) ]
	struct FGameplayAbilityActorInfo GetActorInfo();

	// Object: Function GameplayAbilities.GameplayAbility.GetAbilitySystemComponentFromActorInfo
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7fd1590
	// Params: [ Num(1) Size(0x8) ]
	struct UAbilitySystemComponent* GetAbilitySystemComponentFromActorInfo();

	// Object: Function GameplayAbilities.GameplayAbility.GetAbilityLevel
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7fd155c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetAbilityLevel();

	// Object: Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x7fd14b8
	// Params: [ Num(1) Size(0x8) ]
	void EndTaskByInstanceName(struct FName InstanceName);

	// Object: Function GameplayAbilities.GameplayAbility.EndAbilityState
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x7fd1414
	// Params: [ Num(1) Size(0x8) ]
	void EndAbilityState(struct FName OptionalStateNameToEnd);

	// Object: Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x7fd132c
	// Params: [ Num(2) Size(0x9) ]
	void ConfirmTaskByInstanceName(struct FName InstanceName, uint8_t bEndTask);

	// Object: Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x7fd1288
	// Params: [ Num(1) Size(0x8) ]
	void CancelTaskByInstanceName(struct FName InstanceName);

	// Object: Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithHandle
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x7fd11a0
	// Params: [ Num(2) Size(0xC) ]
	void BP_RemoveGameplayEffectFromOwnerWithHandle(struct FActiveGameplayEffectHandle Handle, int32_t StacksToRemove);

	// Object: Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x7fd1080
	// Params: [ Num(2) Size(0x24) ]
	void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(struct FGameplayTagContainer WithGrantedTags, int32_t StacksToRemove);

	// Object: Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x7fd0f60
	// Params: [ Num(2) Size(0x24) ]
	void BP_RemoveGameplayEffectFromOwnerWithAssetTags(struct FGameplayTagContainer WithAssetTags, int32_t StacksToRemove);

	// Object: Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x7fd0d7c
	// Params: [ Num(5) Size(0x48) ]
	struct TArray<struct FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(struct FGameplayAbilityTargetDataHandle TargetData, struct UGameplayEffect* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks);

	// Object: Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x7fd0c54
	// Params: [ Num(4) Size(0x18) ]
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(struct UGameplayEffect* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks);
};

// Object: Class GameplayAbilities.AbilitySystemGlobals
// Size: 0x260 (Inherited: 0x28)
struct UAbilitySystemGlobals : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAbilitySystemGlobals, "AbilitySystemGlobals")

	struct FSoftClassPath AbilitySystemGlobalsClassName; // 0x28(0x18)
	uint8_t Pad_0x40[0x28]; // 0x40(0x28)
	struct FGameplayTag ActivateFailIsDeadTag; // 0x68(0x8)
	struct FName ActivateFailIsDeadName; // 0x70(0x8)
	struct FGameplayTag ActivateFailCooldownTag; // 0x78(0x8)
	struct FName ActivateFailCooldownName; // 0x80(0x8)
	struct FGameplayTag ActivateFailCostTag; // 0x88(0x8)
	struct FName ActivateFailCostName; // 0x90(0x8)
	struct FGameplayTag ActivateFailTagsBlockedTag; // 0x98(0x8)
	struct FName ActivateFailTagsBlockedName; // 0xA0(0x8)
	struct FGameplayTag ActivateFailTagsMissingTag; // 0xA8(0x8)
	struct FName ActivateFailTagsMissingName; // 0xB0(0x8)
	struct FGameplayTag ActivateFailNetworkingTag; // 0xB8(0x8)
	struct FName ActivateFailNetworkingName; // 0xC0(0x8)
	int32_t MinimalReplicationTagCountBits; // 0xC8(0x4)
	uint8_t Pad_0xCC[0x4]; // 0xCC(0x4)
	struct FNetSerializeScriptStructCache TargetDataStructCache; // 0xD0(0x10)
	uint8_t bAllowGameplayModEvaluationChannels : 1; // 0xE0(0x1), Mask(0x1)
	uint8_t BitPad_0xE0_1 : 7; // 0xE0(0x1)
	EGameplayModEvaluationChannel DefaultGameplayModEvaluationChannel; // 0xE1(0x1)
	uint8_t Pad_0xE2[0x2]; // 0xE2(0x2)
	struct FName GameplayModEvaluationChannelAliases[0xA]; // 0xE4(0x50)
	uint8_t Pad_0x134[0x4]; // 0x134(0x4)
	struct FSoftObjectPath GlobalCurveTableName; // 0x138(0x18)
	struct UCurveTable* GlobalCurveTable; // 0x150(0x8)
	struct FSoftObjectPath GlobalAttributeMetaDataTableName; // 0x158(0x18)
	struct UDataTable* GlobalAttributeMetaDataTable; // 0x170(0x8)
	struct FSoftObjectPath GlobalAttributeSetDefaultsTableName; // 0x178(0x18)
	struct TArray<struct FSoftObjectPath> GlobalAttributeSetDefaultsTableNames; // 0x190(0x10)
	struct TArray<struct UCurveTable*> GlobalAttributeDefaultsTables; // 0x1A0(0x10)
	struct FSoftObjectPath GlobalGameplayCueManagerClass; // 0x1B0(0x18)
	struct FSoftObjectPath GlobalGameplayCueManagerName; // 0x1C8(0x18)
	struct TArray<struct FString> GameplayCueNotifyPaths; // 0x1E0(0x10)
	struct FSoftObjectPath GameplayTagResponseTableName; // 0x1F0(0x18)
	struct UGameplayTagReponseTable* GameplayTagResponseTable; // 0x208(0x8)
	uint8_t PredictTargetGameplayEffects : 1; // 0x210(0x1), Mask(0x1)
	uint8_t BitPad_0x210_1 : 7; // 0x210(0x1)
	uint8_t Pad_0x211[0x7]; // 0x211(0x7)
	struct UGameplayCueManager* GlobalGameplayCueManager; // 0x218(0x8)
	uint8_t Pad_0x220[0x40]; // 0x220(0x40)

	// Object: Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts
	// Flags: [Exec|Native|Public]
	// Offset: 0x7fc64c8
	// Params: [ Num(0) Size(0x0) ]
	void ToggleIgnoreAbilitySystemCosts();

	// Object: Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns
	// Flags: [Exec|Native|Public]
	// Offset: 0x7fc64ac
	// Params: [ Num(0) Size(0x0) ]
	void ToggleIgnoreAbilitySystemCooldowns();
};

// Object: Class GameplayAbilities.AbilitySystemComponent
// Size: 0x1338 (Inherited: 0x168)
struct UAbilitySystemComponent : UGameplayTasksComponent
{
	DEFINE_UE_CLASS_HELPERS(UAbilitySystemComponent, "AbilitySystemComponent")

	uint8_t Pad_0x168[0x10]; // 0x168(0x10)
	struct TArray<struct FAttributeDefaults> DefaultStartingData; // 0x178(0x10)
	struct TArray<struct UAttributeSet*> SpawnedAttributes; // 0x188(0x10)
	struct FName AffectedAnimInstanceTag; // 0x198(0x8)
	uint8_t Pad_0x1A0[0x1A0]; // 0x1A0(0x1A0)
	float OutgoingDuration; // 0x340(0x4)
	float IncomingDuration; // 0x344(0x4)
	uint8_t Pad_0x348[0x20]; // 0x348(0x20)
	struct TArray<struct FString> ClientDebugStrings; // 0x368(0x10)
	struct TArray<struct FString> ServerDebugStrings; // 0x378(0x10)
	uint8_t Pad_0x388[0x60]; // 0x388(0x60)
	uint8_t UserAbilityActivationInhibited : 1; // 0x3E8(0x1), Mask(0x1)
	uint8_t BitPad_0x3E8_1 : 7; // 0x3E8(0x1)
	uint8_t ReplicationProxyEnabled : 1; // 0x3E9(0x1), Mask(0x1)
	uint8_t BitPad_0x3E9_1 : 7; // 0x3E9(0x1)
	uint8_t bSuppressGrantAbility : 1; // 0x3EA(0x1), Mask(0x1)
	uint8_t BitPad_0x3EA_1 : 7; // 0x3EA(0x1)
	uint8_t bSuppressGameplayCues : 1; // 0x3EB(0x1), Mask(0x1)
	uint8_t BitPad_0x3EB_1 : 7; // 0x3EB(0x1)
	uint8_t Pad_0x3EC[0x4]; // 0x3EC(0x4)
	struct TArray<struct AGameplayAbilityTargetActor*> SpawnedTargetActors; // 0x3F0(0x10)
	uint8_t Pad_0x400[0x28]; // 0x400(0x28)
	struct AActor* OwnerActor; // 0x428(0x8)
	struct AActor* AvatarActor; // 0x430(0x8)
	uint8_t Pad_0x438[0x10]; // 0x438(0x10)
	struct FGameplayAbilitySpecContainer ActivatableAbilities; // 0x448(0x120)
	uint8_t Pad_0x568[0x30]; // 0x568(0x30)
	struct TArray<struct UGameplayAbility*> AllReplicatedInstancedAbilities; // 0x598(0x10)
	uint8_t Pad_0x5A8[0x1D0]; // 0x5A8(0x1D0)
	struct FGameplayAbilityRepAnimMontage RepAnimMontageInfo; // 0x778(0x30)
	uint8_t bCachedIsNetSimulated : 1; // 0x7A8(0x1), Mask(0x1)
	uint8_t BitPad_0x7A8_1 : 7; // 0x7A8(0x1)
	uint8_t bPendingMontageRep : 1; // 0x7A9(0x1), Mask(0x1)
	uint8_t BitPad_0x7A9_1 : 7; // 0x7A9(0x1)
	uint8_t Pad_0x7AA[0x6]; // 0x7AA(0x6)
	struct FGameplayAbilityLocalAnimMontage LocalAnimMontageInfo; // 0x7B0(0x30)
	uint8_t Pad_0x7E0[0xA0]; // 0x7E0(0xA0)
	struct FActiveGameplayEffectsContainer ActiveGameplayEffects; // 0x880(0x480)
	struct FActiveGameplayCueContainer ActiveGameplayCues; // 0xD00(0x128)
	struct FActiveGameplayCueContainer MinimalReplicationGameplayCues; // 0xE28(0x128)
	uint8_t Pad_0xF50[0x128]; // 0xF50(0x128)
	struct TArray<uint8_t> BlockedAbilityBindings; // 0x1078(0x10)
	uint8_t Pad_0x1088[0x128]; // 0x1088(0x128)
	struct FMinimalReplicationTagCountMap MinimalReplicationTags; // 0x11B0(0x60)
	uint8_t Pad_0x1210[0x10]; // 0x1210(0x10)
	struct FReplicatedPredictionKeyMap ReplicatedPredictionKeyMap; // 0x1220(0x118)

	// Object: Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7fc6170
	// Params: [ Num(3) Size(0xA) ]
	uint8_t TryActivateAbilityByClass(struct UGameplayAbility* InAbilityToActivate, uint8_t bAllowRemoteActivation);

	// Object: Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7fc6050
	// Params: [ Num(3) Size(0x22) ]
	uint8_t TryActivateAbilitiesByTag(const struct FGameplayTagContainer& GameplayTagContainer, uint8_t bAllowRemoteActivation);

	// Object: Function GameplayAbilities.AbilitySystemComponent.TargetConfirm
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x7fc6034
	// Params: [ Num(0) Size(0x0) ]
	void TargetConfirm();

	// Object: Function GameplayAbilities.AbilitySystemComponent.TargetCancel
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x7fc6018
	// Params: [ Num(0) Size(0x0) ]
	void TargetCancel();

	// Object: Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x7fc5f64
	// Params: [ Num(1) Size(0x1) ]
	void SetUserAbilityActivationInhibited(uint8_t NewInhibit);

	// Object: Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevelUsingQuery
	// Flags: [BlueprintAuthorityOnly|Native|Public|BlueprintCallable]
	// Offset: 0x7fc5e5c
	// Params: [ Num(2) Size(0x154) ]
	void SetActiveGameplayEffectLevelUsingQuery(struct FGameplayEffectQuery Query, int32_t NewLevel);

	// Object: Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel
	// Flags: [BlueprintAuthorityOnly|Native|Public|BlueprintCallable]
	// Offset: 0x7fc5d6c
	// Params: [ Num(2) Size(0xC) ]
	void SetActiveGameplayEffectLevel(struct FActiveGameplayEffectHandle ActiveHandle, int32_t NewLevel);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x7fc588c
	// Params: [ Num(4) Size(0xD0) ]
	void ServerTryActivateAbilityWithEventData(struct FGameplayAbilitySpecHandle AbilityToActivate, uint8_t InputPressed, struct FPredictionKey PredictionKey, struct FGameplayEventData TriggerEventData);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x7fc5700
	// Params: [ Num(3) Size(0x20) ]
	void ServerTryActivateAbility(struct FGameplayAbilitySpecHandle AbilityToActivate, uint8_t InputPressed, struct FPredictionKey PredictionKey);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	// Offset: 0x7fc5554
	// Params: [ Num(3) Size(0x38) ]
	void ServerSetReplicatedTargetDataCancelled(struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FPredictionKey CurrentPredictionKey);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	// Offset: 0x7fc5310
	// Params: [ Num(5) Size(0x68) ]
	void ServerSetReplicatedTargetData(struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FGameplayAbilityTargetDataHandle ReplicatedTargetDataHandle, struct FGameplayTag ApplicationTag, struct FPredictionKey CurrentPredictionKey);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	// Offset: 0x7fc50e0
	// Params: [ Num(5) Size(0x44) ]
	void ServerSetReplicatedEventWithPayload(EAbilityGenericReplicatedEvent EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FPredictionKey CurrentPredictionKey, struct FVector_NetQuantize100 VectorPayload);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	// Offset: 0x7fc4ef4
	// Params: [ Num(4) Size(0x38) ]
	void ServerSetReplicatedEvent(EAbilityGenericReplicatedEvent EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FPredictionKey CurrentPredictionKey);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	// Offset: 0x7fc4e1c
	// Params: [ Num(1) Size(0x4) ]
	void ServerSetInputReleased(struct FGameplayAbilitySpecHandle AbilityHandle);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	// Offset: 0x7fc4d44
	// Params: [ Num(1) Size(0x4) ]
	void ServerSetInputPressed(struct FGameplayAbilitySpecHandle AbilityHandle);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_RequestWithStrings
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	// Offset: 0x7fc4c68
	// Params: [ Num(1) Size(0x10) ]
	void ServerPrintDebug_RequestWithStrings(struct TArray<struct FString> Strings);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	// Offset: 0x7fc4c0c
	// Params: [ Num(0) Size(0x0) ]
	void ServerPrintDebug_Request();

	// Object: Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x7fc4a64
	// Params: [ Num(3) Size(0x40) ]
	void ServerEndAbility(struct FGameplayAbilitySpecHandle AbilityToEnd, struct FGameplayAbilityActivationInfo ActivationInfo, struct FPredictionKey PredictionKey);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x7fc4950
	// Params: [ Num(2) Size(0xC) ]
	void ServerCurrentMontageSetPlayRate(struct UAnimMontage* ClientAnimMontage, float InPlayRate);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x7fc47c4
	// Params: [ Num(4) Size(0x1C) ]
	void ServerCurrentMontageSetNextSectionName(struct UAnimMontage* ClientAnimMontage, float ClientPosition, struct FName SectionName, struct FName NextSectionName);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x7fc46b8
	// Params: [ Num(2) Size(0x10) ]
	void ServerCurrentMontageJumpToSectionName(struct UAnimMontage* ClientAnimMontage, struct FName SectionName);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x7fc457c
	// Params: [ Num(2) Size(0x28) ]
	void ServerCancelAbility(struct FGameplayAbilitySpecHandle AbilityToCancel, struct FGameplayAbilityActivationInfo ActivationInfo);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	// Offset: 0x7fc43b4
	// Params: [ Num(1) Size(0x50) ]
	void ServerAbilityRPCBatch(struct FServerAbilityRPCBatch BatchInfo);

	// Object: Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect
	// Flags: [BlueprintAuthorityOnly|Native|Public|BlueprintCallable]
	// Offset: 0x7fc4294
	// Params: [ Num(3) Size(0x14) ]
	void RemoveActiveGameplayEffectBySourceEffect(struct UGameplayEffect* GameplayEffect, struct UAbilitySystemComponent* InstigatorAbilitySystemComponent, int32_t StacksToRemove);

	// Object: Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect
	// Flags: [BlueprintAuthorityOnly|Native|Public|BlueprintCallable]
	// Offset: 0x7fc4198
	// Params: [ Num(3) Size(0xD) ]
	uint8_t RemoveActiveGameplayEffect(struct FActiveGameplayEffectHandle Handle, int32_t StacksToRemove);

	// Object: Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7fc40a4
	// Params: [ Num(2) Size(0x24) ]
	int32_t RemoveActiveEffectsWithTags(struct FGameplayTagContainer Tags);

	// Object: Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7fc3fb0
	// Params: [ Num(2) Size(0x24) ]
	int32_t RemoveActiveEffectsWithSourceTags(struct FGameplayTagContainer Tags);

	// Object: Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7fc3ebc
	// Params: [ Num(2) Size(0x24) ]
	int32_t RemoveActiveEffectsWithGrantedTags(struct FGameplayTagContainer Tags);

	// Object: Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7fc3dc8
	// Params: [ Num(2) Size(0x24) ]
	int32_t RemoveActiveEffectsWithAppliedTags(struct FGameplayTagContainer Tags);

	// Object: Function GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString
	// Flags: [Native|Public]
	// Offset: 0x7fc3dac
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ServerDebugString();

	// Object: Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage
	// Flags: [Native|Protected]
	// Offset: 0x7fc3d90
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ReplicatedAnimMontage();

	// Object: Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor
	// Flags: [Final|Native|Public]
	// Offset: 0x7fc3d7c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_OwningActor();

	// Object: Function GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString
	// Flags: [Native|Public]
	// Offset: 0x7fc3d60
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ClientDebugString();

	// Object: Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities
	// Flags: [Native|Protected]
	// Offset: 0x7fc3d44
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ActivateAbilities();

	// Object: Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams
	// Flags: [Net|Native|Event|NetMulticast|Public]
	// Offset: 0x7fc39ec
	// Params: [ Num(3) Size(0xF0) ]
	void NetMulticast_InvokeGameplayCuesExecuted_WithParams(struct FGameplayTagContainer GameplayCueTags, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters);

	// Object: Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted
	// Flags: [Net|Native|Event|NetMulticast|Public]
	// Offset: 0x7fc3780
	// Params: [ Num(3) Size(0x50) ]
	void NetMulticast_InvokeGameplayCuesExecuted(struct FGameplayTagContainer GameplayCueTags, struct FPredictionKey PredictionKey, struct FGameplayEffectContextHandle EffectContext);

	// Object: Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams
	// Flags: [Net|Native|Event|NetMulticast|Public]
	// Offset: 0x7fc3428
	// Params: [ Num(3) Size(0xF0) ]
	void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(struct FGameplayTagContainer GameplayCueTags, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters);

	// Object: Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams
	// Flags: [Net|Native|Event|NetMulticast|Public]
	// Offset: 0x7fc312c
	// Params: [ Num(3) Size(0xD8) ]
	void NetMulticast_InvokeGameplayCueExecuted_WithParams(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters);

	// Object: Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec
	// Flags: [Net|Native|Event|NetMulticast|Public]
	// Offset: 0x7fc2e84
	// Params: [ Num(2) Size(0x90) ]
	void NetMulticast_InvokeGameplayCueExecuted_FromSpec(struct FGameplayEffectSpecForRPC Spec, struct FPredictionKey PredictionKey);

	// Object: Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted
	// Flags: [Net|Native|Event|NetMulticast|Public]
	// Offset: 0x7fc2c60
	// Params: [ Num(3) Size(0x38) ]
	void NetMulticast_InvokeGameplayCueExecuted(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayEffectContextHandle EffectContext);

	// Object: Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams
	// Flags: [Net|Native|Event|NetMulticast|Public]
	// Offset: 0x7fc2964
	// Params: [ Num(3) Size(0xD8) ]
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters);

	// Object: Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec
	// Flags: [Net|Native|Event|NetMulticast|Public]
	// Offset: 0x7fc27cc
	// Params: [ Num(2) Size(0x90) ]
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(struct FGameplayEffectSpecForRPC Spec, struct FPredictionKey PredictionKey);

	// Object: Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams
	// Flags: [Net|Native|Event|NetMulticast|Public]
	// Offset: 0x7fc24d0
	// Params: [ Num(3) Size(0xD8) ]
	void NetMulticast_InvokeGameplayCueAdded_WithParams(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayCueParameters Parameters);

	// Object: Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded
	// Flags: [Net|Native|Event|NetMulticast|Public]
	// Offset: 0x7fc22ac
	// Params: [ Num(3) Size(0x38) ]
	void NetMulticast_InvokeGameplayCueAdded(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayEffectContextHandle EffectContext);

	// Object: Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7fc1fb8
	// Params: [ Num(4) Size(0x38) ]
	struct FGameplayEffectSpecHandle MakeOutgoingSpec(struct UGameplayEffect* GameplayEffectClass, float Level, struct FGameplayEffectContextHandle Context);

	// Object: Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7fc1e70
	// Params: [ Num(1) Size(0x18) ]
	struct FGameplayEffectContextHandle MakeEffectContext();

	// Object: Function GameplayAbilities.AbilitySystemComponent.K2_InitStats
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7fc1d94
	// Params: [ Num(2) Size(0x10) ]
	void K2_InitStats(struct UAttributeSet* Attributes, struct UDataTable* DataTable);

	// Object: Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7fc1cdc
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsGameplayCueActive(struct FGameplayTag GameplayCueTag);

	// Object: Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7fc1ca4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetUserAbilityActivationInhibited();

	// Object: Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7fc1b58
	// Params: [ Num(3) Size(0x44) ]
	float GetGameplayEffectMagnitude(struct FActiveGameplayEffectHandle Handle, struct FGameplayAttribute Attribute);

	// Object: Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fc1a30
	// Params: [ Num(4) Size(0x18) ]
	int32_t GetGameplayEffectCount(struct UGameplayEffect* SourceGameplayEffect, struct UAbilitySystemComponent* OptionalInstigatorFilterComponent, uint8_t bEnforceOnGoingCheck);

	// Object: Function GameplayAbilities.AbilitySystemComponent.GetActiveEffects
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0x7fc192c
	// Params: [ Num(2) Size(0x160) ]
	struct TArray<struct FActiveGameplayEffectHandle> GetActiveEffects(const struct FGameplayEffectQuery& Query);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	// Offset: 0x7fc187c
	// Params: [ Num(1) Size(0x4) ]
	void ClientTryActivateAbility(struct FGameplayAbilitySpecHandle AbilityToActivate);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x7fc173c
	// Params: [ Num(3) Size(0x20) ]
	void ClientSetReplicatedEvent(EAbilityGenericReplicatedEvent EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x7fc164c
	// Params: [ Num(2) Size(0x14) ]
	void ClientPrintDebug_Response(struct TArray<struct FString> Strings, int32_t GameFlags);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	// Offset: 0x7fc1548
	// Params: [ Num(2) Size(0x28) ]
	void ClientEndAbility(struct FGameplayAbilitySpecHandle AbilityToEnd, struct FGameplayAbilityActivationInfo ActivationInfo);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	// Offset: 0x7fc1444
	// Params: [ Num(2) Size(0x28) ]
	void ClientCancelAbility(struct FGameplayAbilitySpecHandle AbilityToCancel, struct FGameplayAbilityActivationInfo ActivationInfo);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	// Offset: 0x7fc1110
	// Params: [ Num(3) Size(0xD0) ]
	void ClientActivateAbilitySucceedWithEventData(struct FGameplayAbilitySpecHandle AbilityToActivate, struct FPredictionKey PredictionKey, struct FGameplayEventData TriggerEventData);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	// Offset: 0x7fc100c
	// Params: [ Num(2) Size(0x20) ]
	void ClientActivateAbilitySucceed(struct FGameplayAbilitySpecHandle AbilityToActivate, struct FPredictionKey PredictionKey);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	// Offset: 0x7fc0f20
	// Params: [ Num(2) Size(0x6) ]
	void ClientActivateAbilityFailed(struct FGameplayAbilitySpecHandle AbilityToActivate, int16_t PredictionKey);

	// Object: Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7fc0ccc
	// Params: [ Num(5) Size(0x38) ]
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(struct UGameplayEffect* GameplayEffectClass, struct UAbilitySystemComponent* Target, float Level, struct FGameplayEffectContextHandle Context);

	// Object: Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7fc0ab0
	// Params: [ Num(4) Size(0x30) ]
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(struct UGameplayEffect* GameplayEffectClass, float Level, struct FGameplayEffectContextHandle EffectContext);

	// Object: Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7fc0948
	// Params: [ Num(3) Size(0x20) ]
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(const struct FGameplayEffectSpecHandle& SpecHandle, struct UAbilitySystemComponent* Target);

	// Object: Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7fc0828
	// Params: [ Num(2) Size(0x18) ]
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(const struct FGameplayEffectSpecHandle& SpecHandle);

	// Object: DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void AbilityConfirmOrCancel__DelegateSignature();

	// Object: DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void AbilityAbilityKey__DelegateSignature(int32_t InputID);
};

// Object: Class GameplayAbilities.AttributeSet
// Size: 0x30 (Inherited: 0x28)
struct UAttributeSet : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAttributeSet, "AttributeSet")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: Class GameplayAbilities.GameplayCueManager
// Size: 0x310 (Inherited: 0x30)
struct UGameplayCueManager : UDataAsset
{
	DEFINE_UE_CLASS_HELPERS(UGameplayCueManager, "GameplayCueManager")

	uint8_t Pad_0x30[0x18]; // 0x30(0x18)
	struct FGameplayCueObjectLibrary RuntimeGameplayCueObjectLibrary; // 0x48(0x50)
	struct FGameplayCueObjectLibrary EditorGameplayCueObjectLibrary; // 0x98(0x50)
	uint8_t Pad_0xE8[0x1C8]; // 0xE8(0x1C8)
	struct TArray<struct UObject*> LoadedGameplayCueNotifyClasses; // 0x2B0(0x10)
	struct TArray<struct AGameplayCueNotify_Actor*> GameplayCueClassesForPreallocation; // 0x2C0(0x10)
	struct TArray<struct FGameplayCuePendingExecute> PendingExecuteCues; // 0x2D0(0x10)
	int32_t GameplayCueSendContextCount; // 0x2E0(0x4)
	uint8_t Pad_0x2E4[0x4]; // 0x2E4(0x4)
	struct TArray<struct FPreallocationInfo> PreallocationInfoList_Internal; // 0x2E8(0x10)
	uint8_t Pad_0x2F8[0x18]; // 0x2F8(0x18)
};

// Object: Class GameplayAbilities.GameplayEffect
// Size: 0x7B8 (Inherited: 0x28)
struct UGameplayEffect : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGameplayEffect, "GameplayEffect")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	EGameplayEffectDurationType DurationPolicy; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
	struct FGameplayEffectModifierMagnitude DurationMagnitude; // 0x38(0x1A8)
	struct FScalableFloat Period; // 0x1E0(0x20)
	uint8_t bExecutePeriodicEffectOnApplication : 1; // 0x200(0x1), Mask(0x1)
	uint8_t BitPad_0x200_1 : 7; // 0x200(0x1)
	EGameplayEffectPeriodInhibitionRemovedPolicy PeriodicInhibitionPolicy; // 0x201(0x1)
	uint8_t Pad_0x202[0x6]; // 0x202(0x6)
	struct TArray<struct FGameplayModifierInfo> Modifiers; // 0x208(0x10)
	struct TArray<struct FGameplayEffectExecutionDefinition> Executions; // 0x218(0x10)
	struct FScalableFloat ChanceToApplyToTarget; // 0x228(0x20)
	struct TArray<struct UGameplayEffectCustomApplicationRequirement*> ApplicationRequirements; // 0x248(0x10)
	struct TArray<struct UGameplayEffect*> TargetEffectClasses; // 0x258(0x10)
	struct TArray<struct FConditionalGameplayEffect> ConditionalGameplayEffects; // 0x268(0x10)
	struct TArray<struct UGameplayEffect*> OverflowEffects; // 0x278(0x10)
	uint8_t bDenyOverflowApplication : 1; // 0x288(0x1), Mask(0x1)
	uint8_t BitPad_0x288_1 : 7; // 0x288(0x1)
	uint8_t bClearStackOnOverflow : 1; // 0x289(0x1), Mask(0x1)
	uint8_t BitPad_0x289_1 : 7; // 0x289(0x1)
	uint8_t Pad_0x28A[0x6]; // 0x28A(0x6)
	struct TArray<struct UGameplayEffect*> PrematureExpirationEffectClasses; // 0x290(0x10)
	struct TArray<struct UGameplayEffect*> RoutineExpirationEffectClasses; // 0x2A0(0x10)
	uint8_t bRequireModifierSuccessToTriggerCues : 1; // 0x2B0(0x1), Mask(0x1)
	uint8_t BitPad_0x2B0_1 : 7; // 0x2B0(0x1)
	uint8_t bSuppressStackingCues : 1; // 0x2B1(0x1), Mask(0x1)
	uint8_t BitPad_0x2B1_1 : 7; // 0x2B1(0x1)
	uint8_t Pad_0x2B2[0x6]; // 0x2B2(0x6)
	struct TArray<struct FGameplayEffectCue> GameplayCues; // 0x2B8(0x10)
	struct UGameplayEffectUIData* UIData; // 0x2C8(0x8)
	struct FInheritedTagContainer InheritableGameplayEffectTags; // 0x2D0(0x60)
	struct FInheritedTagContainer InheritableOwnedTagsContainer; // 0x330(0x60)
	struct FGameplayTagRequirements OngoingTagRequirements; // 0x390(0x40)
	struct FGameplayTagRequirements ApplicationTagRequirements; // 0x3D0(0x40)
	struct FGameplayTagRequirements RemovalTagRequirements; // 0x410(0x40)
	struct FInheritedTagContainer RemoveGameplayEffectsWithTags; // 0x450(0x60)
	struct FGameplayTagRequirements GrantedApplicationImmunityTags; // 0x4B0(0x40)
	struct FGameplayEffectQuery GrantedApplicationImmunityQuery; // 0x4F0(0x150)
	uint8_t Pad_0x640[0x8]; // 0x640(0x8)
	struct FGameplayEffectQuery RemoveGameplayEffectQuery; // 0x648(0x150)
	uint8_t Pad_0x798[0x1]; // 0x798(0x1)
	EGameplayEffectStackingType StackingType; // 0x799(0x1)
	uint8_t Pad_0x79A[0x2]; // 0x79A(0x2)
	int32_t StackLimitCount; // 0x79C(0x4)
	EGameplayEffectStackingDurationPolicy StackDurationRefreshPolicy; // 0x7A0(0x1)
	EGameplayEffectStackingPeriodPolicy StackPeriodResetPolicy; // 0x7A1(0x1)
	EGameplayEffectStackingExpirationPolicy StackExpirationPolicy; // 0x7A2(0x1)
	uint8_t Pad_0x7A3[0x5]; // 0x7A3(0x5)
	struct TArray<struct FGameplayAbilitySpecDef> GrantedAbilities; // 0x7A8(0x10)
};

// Object: Class GameplayAbilities.AbilitySystemBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAbilitySystemBlueprintLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UAbilitySystemBlueprintLibrary, "AbilitySystemBlueprintLibrary")

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fbdee8
	// Params: [ Num(3) Size(0x2D) ]
	static uint8_t TargetDataHasOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fbdde0
	// Params: [ Num(3) Size(0x2D) ]
	static uint8_t TargetDataHasHitResult(const struct FGameplayAbilityTargetDataHandle& HitResult, int32_t Index);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fbdcd8
	// Params: [ Num(3) Size(0x2D) ]
	static uint8_t TargetDataHasEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fbdbd0
	// Params: [ Num(3) Size(0x2D) ]
	static uint8_t TargetDataHasActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fbd980
	// Params: [ Num(2) Size(0x20) ]
	static struct FGameplayEffectSpecHandle SetStackCountToMax(struct FGameplayEffectSpecHandle SpecHandle);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fbd6f4
	// Params: [ Num(3) Size(0x28) ]
	static struct FGameplayEffectSpecHandle SetStackCount(struct FGameplayEffectSpecHandle SpecHandle, int32_t StackCount);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fbd468
	// Params: [ Num(3) Size(0x28) ]
	static struct FGameplayEffectSpecHandle SetDuration(struct FGameplayEffectSpecHandle SpecHandle, float Duration);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fbd170
	// Params: [ Num(3) Size(0xC0) ]
	static void SendGameplayEventToActor(struct AActor* Actor, struct FGameplayTag EventTag, struct FGameplayEventData Payload);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAttributeGameplayAttribute
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fbcfd8
	// Params: [ Num(3) Size(0x71) ]
	static uint8_t NotEqual_GameplayAttributeGameplayAttribute(struct FGameplayAttribute AttributeA, struct FGameplayAttribute AttributeB);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fbcdac
	// Params: [ Num(5) Size(0x30) ]
	static struct FGameplayEffectSpecHandle MakeSpecHandle(struct UGameplayEffect* InGameplayEffect, struct AActor* InInstigator, struct AActor* InEffectCauser, float InLevel);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeGameplayCueParameters
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fbc6a4
	// Params: [ Num(17) Size(0x170) ]
	static struct FGameplayCueParameters MakeGameplayCueParameters(float NormalizedMagnitude, float RawMagnitude, struct FGameplayEffectContextHandle EffectContext, struct FGameplayTag MatchedTagName, struct FGameplayTag OriginalTag, struct FGameplayTagContainer AggregatedSourceTags, struct FGameplayTagContainer AggregatedTargetTags, struct FVector Location, struct FVector Normal, struct AActor* Instigator, struct AActor* EffectCauser, struct UObject* SourceObject, struct UPhysicalMaterial* PhysicalMaterial, int32_t GameplayEffectLevel, int32_t AbilityLevel, struct USceneComponent* TargetAttachComponent);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fbc4cc
	// Params: [ Num(3) Size(0x40) ]
	static struct FGameplayTargetDataFilterHandle MakeFilterHandle(struct FGameplayTargetDataFilter Filter, struct AActor* FilterActor);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fbc3d4
	// Params: [ Num(2) Size(0x39) ]
	static uint8_t IsValid(struct FGameplayAttribute Attribute);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fbc17c
	// Params: [ Num(2) Size(0xB9) ]
	static uint8_t IsInstigatorLocallyControlledPlayer(struct FGameplayCueParameters Parameters);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fbbf24
	// Params: [ Num(2) Size(0xB9) ]
	static uint8_t IsInstigatorLocallyControlled(struct FGameplayCueParameters Parameters);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fbbccc
	// Params: [ Num(2) Size(0xB9) ]
	static uint8_t HasHitResult(struct FGameplayCueParameters Parameters);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fbbbb8
	// Params: [ Num(3) Size(0x60) ]
	static struct FTransform GetTargetDataOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fbbaa4
	// Params: [ Num(3) Size(0x60) ]
	static struct FTransform GetTargetDataEndPointTransform(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fbb99c
	// Params: [ Num(3) Size(0x38) ]
	static struct FVector GetTargetDataEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fbb744
	// Params: [ Num(2) Size(0xC4) ]
	static struct FVector GetOrigin(struct FGameplayCueParameters Parameters);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fbb540
	// Params: [ Num(3) Size(0x4C) ]
	static float GetModifiedAttributeMagnitude(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayAttribute Attribute);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fbb2e4
	// Params: [ Num(2) Size(0xF0) ]
	static struct FTransform GetInstigatorTransform(struct FGameplayCueParameters Parameters);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fbb090
	// Params: [ Num(2) Size(0xC0) ]
	static struct AActor* GetInstigatorActor(struct FGameplayCueParameters Parameters);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fbaf78
	// Params: [ Num(3) Size(0xB4) ]
	static struct FHitResult GetHitResultFromTargetData(const struct FGameplayAbilityTargetDataHandle& HitResult, int32_t Index);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fbad1c
	// Params: [ Num(2) Size(0x140) ]
	static struct FHitResult GetHitResult(struct FGameplayCueParameters Parameters);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fba9cc
	// Params: [ Num(5) Size(0xD9) ]
	static uint8_t GetGameplayCueEndLocationAndNormal(struct AActor* TargetActor, struct FGameplayCueParameters Parameters, struct FVector& Location, struct FVector& Normal);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fba6e4
	// Params: [ Num(4) Size(0xCD) ]
	static uint8_t GetGameplayCueDirection(struct AActor* TargetActor, struct FGameplayCueParameters Parameters, struct FVector& Direction);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fba558
	// Params: [ Num(4) Size(0x48) ]
	static float GetFloatAttributeFromAbilitySystemComponent(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute Attribute, uint8_t& bSuccessfullyFoundAttribute);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBaseFromAbilitySystemComponent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fba3cc
	// Params: [ Num(4) Size(0x48) ]
	static float GetFloatAttributeBaseFromAbilitySystemComponent(struct UAbilitySystemComponent* AbilitySystemComponent, struct FGameplayAttribute Attribute, uint8_t& bSuccessfullyFoundAttribute);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBase
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fba240
	// Params: [ Num(4) Size(0x48) ]
	static float GetFloatAttributeBase(struct AActor* Actor, struct FGameplayAttribute Attribute, uint8_t& bSuccessfullyFoundAttribute);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fba0b4
	// Params: [ Num(4) Size(0x48) ]
	static float GetFloatAttribute(struct AActor* Actor, struct FGameplayAttribute Attribute, uint8_t& bSuccessfullyFoundAttribute);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fb9e60
	// Params: [ Num(2) Size(0x28) ]
	static struct FGameplayEffectContextHandle GetEffectContext(struct FGameplayEffectSpecHandle SpecHandle);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fb9da0
	// Params: [ Num(2) Size(0x2C) ]
	static int32_t GetDataCountFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllLinkedGameplayEffectSpecHandles
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fb9c14
	// Params: [ Num(2) Size(0x20) ]
	static struct TArray<struct FGameplayEffectSpecHandle> GetAllLinkedGameplayEffectSpecHandles(struct FGameplayEffectSpecHandle SpecHandle);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllActorsFromTargetData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fb9b20
	// Params: [ Num(2) Size(0x38) ]
	static struct TArray<struct AActor*> GetAllActorsFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fb99e8
	// Params: [ Num(3) Size(0x40) ]
	static struct TArray<struct AActor*> GetActorsFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fb9794
	// Params: [ Num(2) Size(0xBC) ]
	static int32_t GetActorCount(struct FGameplayCueParameters Parameters);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fb950c
	// Params: [ Num(3) Size(0xC8) ]
	static struct AActor* GetActorByIndex(struct FGameplayCueParameters Parameters, int32_t Index);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectTotalDuration
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fb9460
	// Params: [ Num(2) Size(0xC) ]
	static float GetActiveGameplayEffectTotalDuration(struct FActiveGameplayEffectHandle ActiveHandle);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStartTime
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fb93b4
	// Params: [ Num(2) Size(0xC) ]
	static float GetActiveGameplayEffectStartTime(struct FActiveGameplayEffectHandle ActiveHandle);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fb9308
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetActiveGameplayEffectStackLimitCount(struct FActiveGameplayEffectHandle ActiveHandle);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fb925c
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetActiveGameplayEffectStackCount(struct FActiveGameplayEffectHandle ActiveHandle);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectRemainingDuration
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fb9178
	// Params: [ Num(3) Size(0x14) ]
	static float GetActiveGameplayEffectRemainingDuration(struct UObject* WorldContextObject, struct FActiveGameplayEffectHandle ActiveHandle);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectExpectedEndTime
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fb90cc
	// Params: [ Num(2) Size(0xC) ]
	static float GetActiveGameplayEffectExpectedEndTime(struct FActiveGameplayEffectHandle ActiveHandle);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fb8fec
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetActiveGameplayEffectDebugString(struct FActiveGameplayEffectHandle ActiveHandle);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fb8f48
	// Params: [ Num(2) Size(0x10) ]
	static struct UAbilitySystemComponent* GetAbilitySystemComponent(struct AActor* Actor);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fb8c74
	// Params: [ Num(3) Size(0xD0) ]
	static void ForwardGameplayCueToTarget(struct TScriptInterface<IGameplayCueInterface> TargetCueInterface, EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fb8a78
	// Params: [ Num(3) Size(0x60) ]
	static struct FGameplayAbilityTargetDataHandle FilterTargetData(const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, struct FGameplayTargetDataFilterHandle ActorFilterClass);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTagsAndBase
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fb87d4
	// Params: [ Num(7) Size(0x8C) ]
	static float EvaluateAttributeValueWithTagsAndBase(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute Attribute, const struct FGameplayTagContainer& SourceTags, const struct FGameplayTagContainer& TargetTags, float BaseValue, uint8_t& bSuccess);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTags
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fb856c
	// Params: [ Num(6) Size(0x88) ]
	static float EvaluateAttributeValueWithTags(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute Attribute, const struct FGameplayTagContainer& SourceTags, const struct FGameplayTagContainer& TargetTags, uint8_t& bSuccess);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAttributeGameplayAttribute
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fb83d4
	// Params: [ Num(3) Size(0x71) ]
	static uint8_t EqualEqual_GameplayAttributeGameplayAttribute(struct FGameplayAttribute AttributeA, struct FGameplayAttribute AttributeB);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextSetOrigin
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x7fb8214
	// Params: [ Num(2) Size(0x24) ]
	static void EffectContextSetOrigin(struct FGameplayEffectContextHandle EffectContext, struct FVector Origin);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fb8084
	// Params: [ Num(2) Size(0x19) ]
	static uint8_t EffectContextIsValid(struct FGameplayEffectContextHandle EffectContext);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fb7ef4
	// Params: [ Num(2) Size(0x19) ]
	static uint8_t EffectContextIsInstigatorLocallyControlled(struct FGameplayEffectContextHandle EffectContext);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fb7d64
	// Params: [ Num(2) Size(0x19) ]
	static uint8_t EffectContextHasHitResult(struct FGameplayEffectContextHandle EffectContext);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fb7bd8
	// Params: [ Num(2) Size(0x20) ]
	static struct UObject* EffectContextGetSourceObject(struct FGameplayEffectContextHandle EffectContext);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fb7a4c
	// Params: [ Num(2) Size(0x20) ]
	static struct AActor* EffectContextGetOriginalInstigatorActor(struct FGameplayEffectContextHandle EffectContext);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fb78bc
	// Params: [ Num(2) Size(0x24) ]
	static struct FVector EffectContextGetOrigin(struct FGameplayEffectContextHandle EffectContext);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fb7730
	// Params: [ Num(2) Size(0x20) ]
	static struct AActor* EffectContextGetInstigatorActor(struct FGameplayEffectContextHandle EffectContext);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fb7594
	// Params: [ Num(2) Size(0xA0) ]
	static struct FHitResult EffectContextGetHitResult(struct FGameplayEffectContextHandle EffectContext);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fb7408
	// Params: [ Num(2) Size(0x20) ]
	static struct AActor* EffectContextGetEffectCauser(struct FGameplayEffectContextHandle EffectContext);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextAddHitResult
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fb71d4
	// Params: [ Num(3) Size(0xA1) ]
	static void EffectContextAddHitResult(struct FGameplayEffectContextHandle EffectContext, struct FHitResult HitResult, uint8_t bReset);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fb7090
	// Params: [ Num(4) Size(0x39) ]
	static uint8_t DoesTargetDataContainActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index, struct AActor* Actor);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fb6d2c
	// Params: [ Num(4) Size(0x139) ]
	static uint8_t DoesGameplayCueMeetTagRequirements(struct FGameplayCueParameters Parameters, const struct FGameplayTagRequirements& SourceTagReqs, const struct FGameplayTagRequirements& TargetTagReqs);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.CloneSpecHandle
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fb6a68
	// Params: [ Num(4) Size(0x30) ]
	static struct FGameplayEffectSpecHandle CloneSpecHandle(struct AActor* InNewInstigator, struct AActor* InEffectCauser, struct FGameplayEffectSpecHandle GameplayEffectSpecHandle_Clone);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.BreakGameplayCueParameters
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fb6340
	// Params: [ Num(17) Size(0x170) ]
	static void BreakGameplayCueParameters(const struct FGameplayCueParameters& Parameters, float& NormalizedMagnitude, float& RawMagnitude, struct FGameplayEffectContextHandle& EffectContext, struct FGameplayTag& MatchedTagName, struct FGameplayTag& OriginalTag, struct FGameplayTagContainer& AggregatedSourceTags, struct FGameplayTagContainer& AggregatedTargetTags, struct FVector& Location, struct FVector& Normal, struct AActor*& Instigator, struct AActor*& EffectCauser, struct UObject*& SourceObject, struct UPhysicalMaterial*& PhysicalMaterial, int32_t& GameplayEffectLevel, int32_t& AbilityLevel, struct USceneComponent*& TargetAttachComponent);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignTagSetByCallerMagnitude
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fb6078
	// Params: [ Num(4) Size(0x30) ]
	static struct FGameplayEffectSpecHandle AssignTagSetByCallerMagnitude(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTag DataTag, float Magnitude);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fb5db0
	// Params: [ Num(4) Size(0x30) ]
	static struct FGameplayEffectSpecHandle AssignSetByCallerMagnitude(struct FGameplayEffectSpecHandle SpecHandle, struct FName DataName, float Magnitude);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7fb5c3c
	// Params: [ Num(3) Size(0x78) ]
	static struct FGameplayAbilityTargetDataHandle AppendTargetDataHandle(struct FGameplayAbilityTargetDataHandle TargetHandle, const struct FGameplayAbilityTargetDataHandle& HandleToAdd);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fb58dc
	// Params: [ Num(3) Size(0x30) ]
	static struct FGameplayEffectSpecHandle AddLinkedGameplayEffectSpec(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayEffectSpecHandle LinkedGameplayEffectSpec);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffect
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fb5650
	// Params: [ Num(3) Size(0x28) ]
	static struct FGameplayEffectSpecHandle AddLinkedGameplayEffect(struct FGameplayEffectSpecHandle SpecHandle, struct UGameplayEffect* LinkedGameplayEffect);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fb5384
	// Params: [ Num(3) Size(0x40) ]
	static struct FGameplayEffectSpecHandle AddGrantedTags(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTagContainer NewGameplayTags);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fb50f8
	// Params: [ Num(3) Size(0x28) ]
	static struct FGameplayEffectSpecHandle AddGrantedTag(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTag NewGameplayTag);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fb4e2c
	// Params: [ Num(3) Size(0x40) ]
	static struct FGameplayEffectSpecHandle AddAssetTags(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTagContainer NewGameplayTags);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fb4ba0
	// Params: [ Num(3) Size(0x28) ]
	static struct FGameplayEffectSpecHandle AddAssetTag(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTag NewGameplayTag);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fb4a04
	// Params: [ Num(3) Size(0xE8) ]
	static struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromLocations(const struct FGameplayAbilityTargetingLocationInfo& SourceLocation, const struct FGameplayAbilityTargetingLocationInfo& TargetLocation);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fb491c
	// Params: [ Num(2) Size(0xB0) ]
	static struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromHitResult(const struct FHitResult& HitResult);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fb47fc
	// Params: [ Num(3) Size(0x40) ]
	static struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActorArray(const struct TArray<struct AActor*>& ActorArray, uint8_t OneTargetPerHandle);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7fb4738
	// Params: [ Num(2) Size(0x30) ]
	static struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActor(struct AActor* Actor);
};

// Object: Class GameplayAbilities.AbilitySystemDebugHUD
// Size: 0x460 (Inherited: 0x460)
struct AAbilitySystemDebugHUD : AHUD
{
	DEFINE_UE_CLASS_HELPERS(AAbilitySystemDebugHUD, "AbilitySystemDebugHUD")
};

// Object: Class GameplayAbilities.AbilitySystemInterface
// Size: 0x28 (Inherited: 0x28)
struct IAbilitySystemInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IAbilitySystemInterface, "AbilitySystemInterface")
};

// Object: Class GameplayAbilities.AbilitySystemReplicationProxyInterface
// Size: 0x28 (Inherited: 0x28)
struct IAbilitySystemReplicationProxyInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IAbilitySystemReplicationProxyInterface, "AbilitySystemReplicationProxyInterface")
};

// Object: Class GameplayAbilities.AbilitySystemTestAttributeSet
// Size: 0x70 (Inherited: 0x30)
struct UAbilitySystemTestAttributeSet : UAttributeSet
{
	DEFINE_UE_CLASS_HELPERS(UAbilitySystemTestAttributeSet, "AbilitySystemTestAttributeSet")

	float MaxHealth; // 0x2C(0x4)
	float Health; // 0x30(0x4)
	float Mana; // 0x34(0x4)
	float MaxMana; // 0x38(0x4)
	float Damage; // 0x3C(0x4)
	float SpellDamage; // 0x40(0x4)
	float PhysicalDamage; // 0x44(0x4)
	float CritChance; // 0x48(0x4)
	float CritMultiplier; // 0x4C(0x4)
	float ArmorDamageReduction; // 0x50(0x4)
	float DodgeChance; // 0x54(0x4)
	float LifeSteal; // 0x58(0x4)
	float Strength; // 0x5C(0x4)
	float StackingAttribute1; // 0x60(0x4)
	float StackingAttribute2; // 0x64(0x4)
	float NoStackAttribute; // 0x68(0x4)
};

// Object: Class GameplayAbilities.AbilitySystemTestPawn
// Size: 0x418 (Inherited: 0x3F8)
struct AAbilitySystemTestPawn : ADefaultPawn
{
	DEFINE_UE_CLASS_HELPERS(AAbilitySystemTestPawn, "AbilitySystemTestPawn")

	uint8_t Pad_0x3F8[0x18]; // 0x3F8(0x18)
	struct UAbilitySystemComponent* AbilitySystemComponent; // 0x410(0x8)
};

// Object: Class GameplayAbilities.AbilityTask
// Size: 0x78 (Inherited: 0x60)
struct UAbilityTask : UGameplayTask
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask, "AbilityTask")

	struct UGameplayAbility* Ability; // 0x60(0x8)
	struct UAbilitySystemComponent* AbilitySystemComponent; // 0x68(0x8)
	uint8_t Pad_0x70[0x8]; // 0x70(0x8)
};

// Object: Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base
// Size: 0xA8 (Inherited: 0x78)
struct UAbilityTask_ApplyRootMotion_Base : UAbilityTask
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_ApplyRootMotion_Base, "AbilityTask_ApplyRootMotion_Base")

	struct FName ForceName; // 0x74(0x8)
	ERootMotionFinishVelocityMode FinishVelocityMode; // 0x7C(0x1)
	struct FVector FinishSetVelocity; // 0x80(0xC)
	float FinishClampVelocity; // 0x8C(0x4)
	struct UCharacterMovementComponent* MovementComponent; // 0x90(0x8)
	uint8_t Pad_0x99[0xF]; // 0x99(0xF)
};

// Object: Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
// Size: 0xD8 (Inherited: 0xA8)
struct UAbilityTask_ApplyRootMotionConstantForce : UAbilityTask_ApplyRootMotion_Base
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_ApplyRootMotionConstantForce, "AbilityTask_ApplyRootMotionConstantForce")

	struct FMulticastInlineDelegate OnFinish; // 0xA8(0x10)
	struct FVector WorldDirection; // 0xB8(0xC)
	float Strength; // 0xC4(0x4)
	float Duration; // 0xC8(0x4)
	uint8_t bIsAdditive : 1; // 0xCC(0x1), Mask(0x1)
	uint8_t BitPad_0xCC_1 : 7; // 0xCC(0x1)
	uint8_t Pad_0xCD[0x3]; // 0xCD(0x3)
	struct UCurveFloat* StrengthOverTime; // 0xD0(0x8)

	// Object: Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x7fc72d8
	// Params: [ Num(11) Size(0x50) ]
	static struct UAbilityTask_ApplyRootMotionConstantForce* ApplyRootMotionConstantForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector WorldDirection, float Strength, float Duration, uint8_t bIsAdditive, struct UCurveFloat* StrengthOverTime, ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish);
};

// Object: Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
// Size: 0x100 (Inherited: 0xA8)
struct UAbilityTask_ApplyRootMotionJumpForce : UAbilityTask_ApplyRootMotion_Base
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_ApplyRootMotionJumpForce, "AbilityTask_ApplyRootMotionJumpForce")

	struct FMulticastInlineDelegate OnFinish; // 0xA8(0x10)
	struct FMulticastInlineDelegate OnLanded; // 0xB8(0x10)
	struct FRotator Rotation; // 0xC8(0xC)
	float Distance; // 0xD4(0x4)
	float Height; // 0xD8(0x4)
	float Duration; // 0xDC(0x4)
	float MinimumLandedTriggerTime; // 0xE0(0x4)
	uint8_t bFinishOnLanded : 1; // 0xE4(0x1), Mask(0x1)
	uint8_t BitPad_0xE4_1 : 7; // 0xE4(0x1)
	uint8_t Pad_0xE5[0x3]; // 0xE5(0x3)
	struct UCurveVector* PathOffsetCurve; // 0xE8(0x8)
	struct UCurveFloat* TimeMappingCurve; // 0xF0(0x8)
	uint8_t Pad_0xF8[0x8]; // 0xF8(0x8)

	// Object: Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x7fc7948
	// Params: [ Num(1) Size(0x88) ]
	void OnLandedCallback(const struct FHitResult& Hit);

	// Object: Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7fc7934
	// Params: [ Num(0) Size(0x0) ]
	void Finish();

	// Object: Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x7fc75bc
	// Params: [ Num(14) Size(0x58) ]
	static struct UAbilityTask_ApplyRootMotionJumpForce* ApplyRootMotionJumpForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FRotator Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, uint8_t bFinishOnLanded, ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, struct UCurveVector* PathOffsetCurve, struct UCurveFloat* TimeMappingCurve);
};

// Object: Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
// Size: 0x120 (Inherited: 0xA8)
struct UAbilityTask_ApplyRootMotionMoveToActorForce : UAbilityTask_ApplyRootMotion_Base
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_ApplyRootMotionMoveToActorForce, "AbilityTask_ApplyRootMotionMoveToActorForce")

	struct FMulticastInlineDelegate OnFinished; // 0xA8(0x10)
	uint8_t Pad_0xB8[0x8]; // 0xB8(0x8)
	struct FVector StartLocation; // 0xC0(0xC)
	struct FVector TargetLocation; // 0xCC(0xC)
	struct AActor* TargetActor; // 0xD8(0x8)
	struct FVector TargetLocationOffset; // 0xE0(0xC)
	ERootMotionMoveToActorTargetOffsetType OffsetAlignment; // 0xEC(0x1)
	uint8_t Pad_0xED[0x3]; // 0xED(0x3)
	float Duration; // 0xF0(0x4)
	uint8_t bDisableDestinationReachedInterrupt : 1; // 0xF4(0x1), Mask(0x1)
	uint8_t BitPad_0xF4_1 : 7; // 0xF4(0x1)
	uint8_t bSetNewMovementMode : 1; // 0xF5(0x1), Mask(0x1)
	uint8_t BitPad_0xF5_1 : 7; // 0xF5(0x1)
	EMovementMode NewMovementMode; // 0xF6(0x1)
	uint8_t bRestrictSpeedToExpected : 1; // 0xF7(0x1), Mask(0x1)
	uint8_t BitPad_0xF7_1 : 7; // 0xF7(0x1)
	struct UCurveVector* PathOffsetCurve; // 0xF8(0x8)
	struct UCurveFloat* TimeMappingCurve; // 0x100(0x8)
	struct UCurveFloat* TargetLerpSpeedHorizontalCurve; // 0x108(0x8)
	struct UCurveFloat* TargetLerpSpeedVerticalCurve; // 0x110(0x8)
	uint8_t Pad_0x118[0x8]; // 0x118(0x8)

	// Object: Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnTargetActorSwapped
	// Flags: [Final|Native|Public]
	// Offset: 0x7fc84b4
	// Params: [ Num(2) Size(0x10) ]
	void OnTargetActorSwapped(struct AActor* OriginalTarget, struct AActor* NewTarget);

	// Object: Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation
	// Flags: [Final|Native|Protected]
	// Offset: 0x7fc84a0
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_TargetLocation();

	// Object: Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToTargetDataActorForce
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x7fc7f38
	// Params: [ Num(20) Size(0xA0) ]
	static struct UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToTargetDataActorForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FGameplayAbilityTargetDataHandle TargetDataHandle, int32_t TargetDataIndex, int32_t TargetActorIndex, struct FVector TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, struct UCurveFloat* TargetLerpSpeedHorizontal, struct UCurveFloat* TargetLerpSpeedVertical, uint8_t bSetNewMovementMode, EMovementMode MovementMode, uint8_t bRestrictSpeedToExpected, struct UCurveVector* PathOffsetCurve, struct UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, uint8_t bDisableDestinationReachedInterrupt);

	// Object: Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x7fc7ab0
	// Params: [ Num(18) Size(0x78) ]
	static struct UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToActorForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct AActor* TargetActor, struct FVector TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, struct UCurveFloat* TargetLerpSpeedHorizontal, struct UCurveFloat* TargetLerpSpeedVertical, uint8_t bSetNewMovementMode, EMovementMode MovementMode, uint8_t bRestrictSpeedToExpected, struct UCurveVector* PathOffsetCurve, struct UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, uint8_t bDisableDestinationReachedInterrupt);
};

// Object: Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
// Size: 0xF8 (Inherited: 0xA8)
struct UAbilityTask_ApplyRootMotionMoveToForce : UAbilityTask_ApplyRootMotion_Base
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_ApplyRootMotionMoveToForce, "AbilityTask_ApplyRootMotionMoveToForce")

	struct FMulticastInlineDelegate OnTimedOut; // 0xA8(0x10)
	struct FMulticastInlineDelegate OnTimedOutAndDestinationReached; // 0xB8(0x10)
	struct FVector StartLocation; // 0xC8(0xC)
	struct FVector TargetLocation; // 0xD4(0xC)
	float Duration; // 0xE0(0x4)
	uint8_t bSetNewMovementMode : 1; // 0xE4(0x1), Mask(0x1)
	uint8_t BitPad_0xE4_1 : 7; // 0xE4(0x1)
	EMovementMode NewMovementMode; // 0xE5(0x1)
	uint8_t bRestrictSpeedToExpected : 1; // 0xE6(0x1), Mask(0x1)
	uint8_t BitPad_0xE6_1 : 7; // 0xE6(0x1)
	uint8_t Pad_0xE7[0x1]; // 0xE7(0x1)
	struct UCurveVector* PathOffsetCurve; // 0xE8(0x8)
	uint8_t Pad_0xF0[0x8]; // 0xF0(0x8)

	// Object: Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x7fc86b8
	// Params: [ Num(12) Size(0x50) ]
	static struct UAbilityTask_ApplyRootMotionMoveToForce* ApplyRootMotionMoveToForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector TargetLocation, float Duration, uint8_t bSetNewMovementMode, EMovementMode MovementMode, uint8_t bRestrictSpeedToExpected, struct UCurveVector* PathOffsetCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish);
};

// Object: Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
// Size: 0x100 (Inherited: 0xA8)
struct UAbilityTask_ApplyRootMotionRadialForce : UAbilityTask_ApplyRootMotion_Base
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_ApplyRootMotionRadialForce, "AbilityTask_ApplyRootMotionRadialForce")

	struct FMulticastInlineDelegate OnFinish; // 0xA8(0x10)
	struct FVector Location; // 0xB8(0xC)
	uint8_t Pad_0xC4[0x4]; // 0xC4(0x4)
	struct AActor* LocationActor; // 0xC8(0x8)
	float Strength; // 0xD0(0x4)
	float Duration; // 0xD4(0x4)
	float radius; // 0xD8(0x4)
	uint8_t bIsPush : 1; // 0xDC(0x1), Mask(0x1)
	uint8_t BitPad_0xDC_1 : 7; // 0xDC(0x1)
	uint8_t bIsAdditive : 1; // 0xDD(0x1), Mask(0x1)
	uint8_t BitPad_0xDD_1 : 7; // 0xDD(0x1)
	uint8_t bNoZForce : 1; // 0xDE(0x1), Mask(0x1)
	uint8_t BitPad_0xDE_1 : 7; // 0xDE(0x1)
	uint8_t Pad_0xDF[0x1]; // 0xDF(0x1)
	struct UCurveFloat* StrengthDistanceFalloff; // 0xE0(0x8)
	struct UCurveFloat* StrengthOverTime; // 0xE8(0x8)
	uint8_t bUseFixedWorldDirection : 1; // 0xF0(0x1), Mask(0x1)
	uint8_t BitPad_0xF0_1 : 7; // 0xF0(0x1)
	uint8_t Pad_0xF1[0x3]; // 0xF1(0x3)
	struct FRotator FixedWorldDirection; // 0xF4(0xC)

	// Object: Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x7fc8a00
	// Params: [ Num(18) Size(0x78) ]
	static struct UAbilityTask_ApplyRootMotionRadialForce* ApplyRootMotionRadialForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector Location, struct AActor* LocationActor, float Strength, float Duration, float radius, uint8_t bIsPush, uint8_t bIsAdditive, uint8_t bNoZForce, struct UCurveFloat* StrengthDistanceFalloff, struct UCurveFloat* StrengthOverTime, uint8_t bUseFixedWorldDirection, struct FRotator FixedWorldDirection, ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish);
};

// Object: Class GameplayAbilities.AbilityTask_MoveToLocation
// Size: 0xC0 (Inherited: 0x78)
struct UAbilityTask_MoveToLocation : UAbilityTask
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_MoveToLocation, "AbilityTask_MoveToLocation")

	struct FMulticastInlineDelegate OnTargetLocationReached; // 0x78(0x10)
	uint8_t Pad_0x88[0x4]; // 0x88(0x4)
	struct FVector StartLocation; // 0x8C(0xC)
	struct FVector TargetLocation; // 0x98(0xC)
	float DurationOfMovement; // 0xA4(0x4)
	uint8_t Pad_0xA8[0x8]; // 0xA8(0x8)
	struct UCurveFloat* LerpCurve; // 0xB0(0x8)
	struct UCurveVector* LerpCurveVector; // 0xB8(0x8)

	// Object: Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x7fc8f0c
	// Params: [ Num(7) Size(0x38) ]
	static struct UAbilityTask_MoveToLocation* MoveToLocation(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector Location, float Duration, struct UCurveFloat* OptionalInterpolationCurve, struct UCurveVector* OptionalVectorInterpolationCurve);
};

// Object: Class GameplayAbilities.AbilityTask_NetworkSyncPoint
// Size: 0x90 (Inherited: 0x78)
struct UAbilityTask_NetworkSyncPoint : UAbilityTask
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_NetworkSyncPoint, "AbilityTask_NetworkSyncPoint")

	struct FMulticastInlineDelegate OnSync; // 0x78(0x10)
	uint8_t Pad_0x88[0x8]; // 0x88(0x8)

	// Object: Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fc9158
	// Params: [ Num(3) Size(0x18) ]
	static struct UAbilityTask_NetworkSyncPoint* WaitNetSync(struct UGameplayAbility* OwningAbility, EAbilityTaskNetSyncType SyncType);

	// Object: Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback
	// Flags: [Final|Native|Public]
	// Offset: 0x7fc9144
	// Params: [ Num(0) Size(0x0) ]
	void OnSignalCallback();
};

// Object: Class GameplayAbilities.AbilityTask_PlayMontageAndWait
// Size: 0x100 (Inherited: 0x78)
struct UAbilityTask_PlayMontageAndWait : UAbilityTask
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_PlayMontageAndWait, "AbilityTask_PlayMontageAndWait")

	struct FMulticastInlineDelegate OnCompleted; // 0x78(0x10)
	struct FMulticastInlineDelegate OnBlendOut; // 0x88(0x10)
	struct FMulticastInlineDelegate OnInterrupted; // 0x98(0x10)
	struct FMulticastInlineDelegate OnCancelled; // 0xA8(0x10)
	uint8_t Pad_0xB8[0x28]; // 0xB8(0x28)
	struct UAnimMontage* montageToPlay; // 0xE0(0x8)
	float Rate; // 0xE8(0x4)
	struct FName StartSection; // 0xEC(0x8)
	float AnimRootMotionTranslationScale; // 0xF4(0x4)
	uint8_t bStopWhenAbilityEnds : 1; // 0xF8(0x1), Mask(0x1)
	uint8_t BitPad_0xF8_1 : 7; // 0xF8(0x1)
	uint8_t Pad_0xF9[0x7]; // 0xF9(0x7)

	// Object: Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted
	// Flags: [Final|Native|Public]
	// Offset: 0x7fc9628
	// Params: [ Num(0) Size(0x0) ]
	void OnMontageInterrupted();

	// Object: Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded
	// Flags: [Final|Native|Public]
	// Offset: 0x7fc9540
	// Params: [ Num(2) Size(0x9) ]
	void OnMontageEnded(struct UAnimMontage* Montage, uint8_t bInterrupted);

	// Object: Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut
	// Flags: [Final|Native|Public]
	// Offset: 0x7fc9458
	// Params: [ Num(2) Size(0x9) ]
	void OnMontageBlendingOut(struct UAnimMontage* Montage, uint8_t bInterrupted);

	// Object: Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fc9248
	// Params: [ Num(8) Size(0x38) ]
	static struct UAbilityTask_PlayMontageAndWait* CreatePlayMontageAndWaitProxy(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct UAnimMontage* montageToPlay, float Rate, struct FName StartSection, uint8_t bStopWhenAbilityEnds, float AnimRootMotionTranslationScale);
};

// Object: Class GameplayAbilities.AbilityTask_Repeat
// Size: 0xB0 (Inherited: 0x78)
struct UAbilityTask_Repeat : UAbilityTask
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_Repeat, "AbilityTask_Repeat")

	struct FMulticastInlineDelegate OnPerformAction; // 0x78(0x10)
	struct FMulticastInlineDelegate OnFinished; // 0x88(0x10)
	uint8_t Pad_0x98[0x18]; // 0x98(0x18)

	// Object: Function GameplayAbilities.AbilityTask_Repeat.RepeatAction
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fc9674
	// Params: [ Num(4) Size(0x18) ]
	static struct UAbilityTask_Repeat* RepeatAction(struct UGameplayAbility* OwningAbility, float TimeBetweenActions, int32_t TotalActionCount);
};

// Object: Class GameplayAbilities.AbilityTask_SpawnActor
// Size: 0xC0 (Inherited: 0x78)
struct UAbilityTask_SpawnActor : UAbilityTask
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_SpawnActor, "AbilityTask_SpawnActor")

	struct FMulticastInlineDelegate Success; // 0x78(0x10)
	struct FMulticastInlineDelegate DidNotSpawn; // 0x88(0x10)
	uint8_t Pad_0x98[0x28]; // 0x98(0x28)

	// Object: Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fca6d8
	// Params: [ Num(4) Size(0x40) ]
	static struct UAbilityTask_SpawnActor* SpawnActor(struct UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle TargetData, struct AActor* Class);

	// Object: Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7fca564
	// Params: [ Num(3) Size(0x38) ]
	void FinishSpawningActor(struct UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle TargetData, struct AActor* SpawnedActor);

	// Object: Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7fca38c
	// Params: [ Num(5) Size(0x41) ]
	uint8_t BeginSpawningActor(struct UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle TargetData, struct AActor* Class, struct AActor*& SpawnedActor);
};

// Object: Class GameplayAbilities.AbilityTask_StartAbilityState
// Size: 0xB0 (Inherited: 0x78)
struct UAbilityTask_StartAbilityState : UAbilityTask
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_StartAbilityState, "AbilityTask_StartAbilityState")

	struct FMulticastInlineDelegate OnStateEnded; // 0x78(0x10)
	struct FMulticastInlineDelegate OnStateInterrupted; // 0x88(0x10)
	uint8_t Pad_0x98[0x18]; // 0x98(0x18)

	// Object: Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fca860
	// Params: [ Num(4) Size(0x20) ]
	static struct UAbilityTask_StartAbilityState* StartAbilityState(struct UGameplayAbility* OwningAbility, struct FName StateName, uint8_t bEndCurrentState);
};

// Object: Class GameplayAbilities.AbilityTask_VisualizeTargeting
// Size: 0xA0 (Inherited: 0x78)
struct UAbilityTask_VisualizeTargeting : UAbilityTask
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_VisualizeTargeting, "AbilityTask_VisualizeTargeting")

	struct FMulticastInlineDelegate TimeElapsed; // 0x78(0x10)
	uint8_t Pad_0x88[0x18]; // 0x88(0x18)

	// Object: Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fcacf8
	// Params: [ Num(5) Size(0x28) ]
	static struct UAbilityTask_VisualizeTargeting* VisualizeTargetingUsingActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* TargetActor, struct FName TaskInstanceName, float Duration);

	// Object: Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fcaba4
	// Params: [ Num(5) Size(0x28) ]
	static struct UAbilityTask_VisualizeTargeting* VisualizeTargeting(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* Class, struct FName TaskInstanceName, float Duration);

	// Object: Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7fcaac8
	// Params: [ Num(2) Size(0x10) ]
	void FinishSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* SpawnedActor);

	// Object: Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7fca994
	// Params: [ Num(4) Size(0x19) ]
	uint8_t BeginSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* Class, struct AGameplayAbilityTargetActor*& SpawnedActor);
};

// Object: Class GameplayAbilities.AbilityTask_WaitAbilityActivate
// Size: 0x130 (Inherited: 0x78)
struct UAbilityTask_WaitAbilityActivate : UAbilityTask
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_WaitAbilityActivate, "AbilityTask_WaitAbilityActivate")

	struct FMulticastInlineDelegate onActivate; // 0x78(0x10)
	uint8_t Pad_0x88[0xA8]; // 0x88(0xA8)

	// Object: Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fcb334
	// Params: [ Num(5) Size(0x58) ]
	static struct UAbilityTask_WaitAbilityActivate* WaitForAbilityActivateWithTagRequirements(struct UGameplayAbility* OwningAbility, struct FGameplayTagRequirements TagRequirements, uint8_t IncludeTriggeredAbilities, uint8_t TriggerOnce);

	// Object: Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate_Query
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fcb158
	// Params: [ Num(5) Size(0x60) ]
	static struct UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTagQuery Query, uint8_t IncludeTriggeredAbilities, uint8_t TriggerOnce);

	// Object: Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fcafb8
	// Params: [ Num(6) Size(0x28) ]
	static struct UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate(struct UGameplayAbility* OwningAbility, struct FGameplayTag WithTag, struct FGameplayTag WithoutTag, uint8_t IncludeTriggeredAbilities, uint8_t TriggerOnce);

	// Object: Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate
	// Flags: [Final|Native|Public]
	// Offset: 0x7fcaf14
	// Params: [ Num(1) Size(0x8) ]
	void OnAbilityActivate(struct UGameplayAbility* ActivatedAbility);
};

// Object: Class GameplayAbilities.AbilityTask_WaitAbilityCommit
// Size: 0xF0 (Inherited: 0x78)
struct UAbilityTask_WaitAbilityCommit : UAbilityTask
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_WaitAbilityCommit, "AbilityTask_WaitAbilityCommit")

	struct FMulticastInlineDelegate OnCommit; // 0x78(0x10)
	uint8_t Pad_0x88[0x68]; // 0x88(0x68)

	// Object: Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit_Query
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fcb834
	// Params: [ Num(4) Size(0x60) ]
	static struct UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTagQuery Query, uint8_t TriggerOnce);

	// Object: Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fcb6d8
	// Params: [ Num(5) Size(0x28) ]
	static struct UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit(struct UGameplayAbility* OwningAbility, struct FGameplayTag WithTag, struct FGameplayTag WithoutTage, uint8_t TriggerOnce);

	// Object: Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit
	// Flags: [Final|Native|Public]
	// Offset: 0x7fcb634
	// Params: [ Num(1) Size(0x8) ]
	void OnAbilityCommit(struct UGameplayAbility* ActivatedAbility);
};

// Object: Class GameplayAbilities.AbilityTask_WaitAttributeChange
// Size: 0xF0 (Inherited: 0x78)
struct UAbilityTask_WaitAttributeChange : UAbilityTask
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_WaitAttributeChange, "AbilityTask_WaitAttributeChange")

	struct FMulticastInlineDelegate OnChange; // 0x78(0x10)
	uint8_t Pad_0x88[0x60]; // 0x88(0x60)
	struct UAbilitySystemComponent* ExternalOwner; // 0xE8(0x8)

	// Object: Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fcbd30
	// Params: [ Num(9) Size(0x70) ]
	static struct UAbilityTask_WaitAttributeChange* WaitForAttributeChangeWithComparison(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute InAttribute, struct FGameplayTag InWithTag, struct FGameplayTag InWithoutTag, EWaitAttributeChangeComparison InComparisonType, float InComparisonValue, uint8_t TriggerOnce, struct AActor* OptionalExternalOwner);

	// Object: Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fcbafc
	// Params: [ Num(7) Size(0x68) ]
	static struct UAbilityTask_WaitAttributeChange* WaitForAttributeChange(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute Attribute, struct FGameplayTag WithSrcTag, struct FGameplayTag WithoutSrcTag, uint8_t TriggerOnce, struct AActor* OptionalExternalOwner);
};

// Object: Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
// Size: 0x138 (Inherited: 0x78)
struct UAbilityTask_WaitAttributeChangeRatioThreshold : UAbilityTask
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_WaitAttributeChangeRatioThreshold, "AbilityTask_WaitAttributeChangeRatioThreshold")

	struct FMulticastInlineDelegate OnChange; // 0x78(0x10)
	uint8_t Pad_0x88[0xA8]; // 0x88(0xA8)
	struct UAbilitySystemComponent* ExternalOwner; // 0x130(0x8)

	// Object: Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fcc0c4
	// Params: [ Num(8) Size(0x98) ]
	static struct UAbilityTask_WaitAttributeChangeRatioThreshold* WaitForAttributeChangeRatioThreshold(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute AttributeNumerator, struct FGameplayAttribute AttributeDenominator, EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, uint8_t bTriggerOnce, struct AActor* OptionalExternalOwner);
};

// Object: Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
// Size: 0xE8 (Inherited: 0x78)
struct UAbilityTask_WaitAttributeChangeThreshold : UAbilityTask
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_WaitAttributeChangeThreshold, "AbilityTask_WaitAttributeChangeThreshold")

	struct FMulticastInlineDelegate OnChange; // 0x78(0x10)
	uint8_t Pad_0x88[0x58]; // 0x88(0x58)
	struct UAbilitySystemComponent* ExternalOwner; // 0xE0(0x8)

	// Object: Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fcc3bc
	// Params: [ Num(7) Size(0x60) ]
	static struct UAbilityTask_WaitAttributeChangeThreshold* WaitForAttributeChangeThreshold(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute Attribute, EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, uint8_t bTriggerOnce, struct AActor* OptionalExternalOwner);
};

// Object: Class GameplayAbilities.AbilityTask_WaitCancel
// Size: 0x90 (Inherited: 0x78)
struct UAbilityTask_WaitCancel : UAbilityTask
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_WaitCancel, "AbilityTask_WaitCancel")

	struct FMulticastInlineDelegate OnCancel; // 0x78(0x10)
	uint8_t Pad_0x88[0x8]; // 0x88(0x8)

	// Object: Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fcc630
	// Params: [ Num(2) Size(0x10) ]
	static struct UAbilityTask_WaitCancel* WaitCancel(struct UGameplayAbility* OwningAbility);

	// Object: Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback
	// Flags: [Final|Native|Public]
	// Offset: 0x7fcc61c
	// Params: [ Num(0) Size(0x0) ]
	void OnLocalCancelCallback();

	// Object: Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback
	// Flags: [Final|Native|Public]
	// Offset: 0x7fcc608
	// Params: [ Num(0) Size(0x0) ]
	void OnCancelCallback();
};

// Object: Class GameplayAbilities.AbilityTask_WaitConfirm
// Size: 0x98 (Inherited: 0x78)
struct UAbilityTask_WaitConfirm : UAbilityTask
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_WaitConfirm, "AbilityTask_WaitConfirm")

	struct FMulticastInlineDelegate OnConfirm; // 0x78(0x10)
	uint8_t Pad_0x88[0x10]; // 0x88(0x10)

	// Object: Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fcc780
	// Params: [ Num(2) Size(0x10) ]
	static struct UAbilityTask_WaitConfirm* WaitConfirm(struct UGameplayAbility* OwningAbility);

	// Object: Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback
	// Flags: [Final|Native|Public]
	// Offset: 0x7fcc6dc
	// Params: [ Num(1) Size(0x8) ]
	void OnConfirmCallback(struct UGameplayAbility* InAbility);
};

// Object: Class GameplayAbilities.AbilityTask_WaitConfirmCancel
// Size: 0xA0 (Inherited: 0x78)
struct UAbilityTask_WaitConfirmCancel : UAbilityTask
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_WaitConfirmCancel, "AbilityTask_WaitConfirmCancel")

	struct FMulticastInlineDelegate OnConfirm; // 0x78(0x10)
	struct FMulticastInlineDelegate OnCancel; // 0x88(0x10)
	uint8_t Pad_0x98[0x8]; // 0x98(0x8)

	// Object: Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fcc87c
	// Params: [ Num(2) Size(0x10) ]
	static struct UAbilityTask_WaitConfirmCancel* WaitConfirmCancel(struct UGameplayAbility* OwningAbility);

	// Object: Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback
	// Flags: [Final|Native|Public]
	// Offset: 0x7fcc868
	// Params: [ Num(0) Size(0x0) ]
	void OnLocalConfirmCallback();

	// Object: Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback
	// Flags: [Final|Native|Public]
	// Offset: 0x7fcc854
	// Params: [ Num(0) Size(0x0) ]
	void OnLocalCancelCallback();

	// Object: Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback
	// Flags: [Final|Native|Public]
	// Offset: 0x7fcc840
	// Params: [ Num(0) Size(0x0) ]
	void OnConfirmCallback();

	// Object: Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback
	// Flags: [Final|Native|Public]
	// Offset: 0x7fcc82c
	// Params: [ Num(0) Size(0x0) ]
	void OnCancelCallback();
};

// Object: Class GameplayAbilities.AbilityTask_WaitDelay
// Size: 0x90 (Inherited: 0x78)
struct UAbilityTask_WaitDelay : UAbilityTask
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_WaitDelay, "AbilityTask_WaitDelay")

	struct FMulticastInlineDelegate OnFinish; // 0x78(0x10)
	uint8_t Pad_0x88[0x8]; // 0x88(0x8)

	// Object: Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fcc928
	// Params: [ Num(3) Size(0x18) ]
	static struct UAbilityTask_WaitDelay* WaitDelay(struct UGameplayAbility* OwningAbility, float Time);
};

// Object: Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
// Size: 0x1B0 (Inherited: 0x78)
struct UAbilityTask_WaitGameplayEffectApplied : UAbilityTask
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_WaitGameplayEffectApplied, "AbilityTask_WaitGameplayEffectApplied")

	uint8_t Pad_0x78[0x128]; // 0x78(0x128)
	struct UAbilitySystemComponent* ExternalOwner; // 0x1A0(0x8)
	uint8_t Pad_0x1A8[0x8]; // 0x1A8(0x8)

	// Object: Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x7fcca18
	// Params: [ Num(3) Size(0x2A8) ]
	void OnApplyGameplayEffectCallback(struct UAbilitySystemComponent* Target, const struct FGameplayEffectSpec& SpecApplied, struct FActiveGameplayEffectHandle ActiveHandle);
};

// Object: Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
// Size: 0x1D0 (Inherited: 0x1B0)
struct UAbilityTask_WaitGameplayEffectApplied_Self : UAbilityTask_WaitGameplayEffectApplied
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_WaitGameplayEffectApplied_Self, "AbilityTask_WaitGameplayEffectApplied_Self")

	struct FMulticastInlineDelegate OnApplied; // 0x1B0(0x10)
	uint8_t Pad_0x1C0[0x10]; // 0x1C0(0x10)

	// Object: Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf_Query
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fccf64
	// Params: [ Num(8) Size(0xC8) ]
	static struct UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagQuery SourceTagQuery, struct FGameplayTagQuery TargetTagQuery, uint8_t TriggerOnce, struct AActor* OptionalExternalOwner, uint8_t ListenForPeriodicEffect);

	// Object: Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fccb64
	// Params: [ Num(8) Size(0xB8) ]
	static struct UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, uint8_t TriggerOnce, struct AActor* OptionalExternalOwner, uint8_t ListenForPeriodicEffect);
};

// Object: Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
// Size: 0x1D0 (Inherited: 0x1B0)
struct UAbilityTask_WaitGameplayEffectApplied_Target : UAbilityTask_WaitGameplayEffectApplied
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_WaitGameplayEffectApplied_Target, "AbilityTask_WaitGameplayEffectApplied_Target")

	struct FMulticastInlineDelegate OnApplied; // 0x1B0(0x10)
	uint8_t Pad_0x1C0[0x10]; // 0x1C0(0x10)

	// Object: Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget_Query
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fcd810
	// Params: [ Num(8) Size(0xC8) ]
	static struct UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagQuery SourceTagQuery, struct FGameplayTagQuery TargetTagQuery, uint8_t TriggerOnce, struct AActor* OptionalExternalOwner, uint8_t ListenForPeriodicEffect);

	// Object: Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fcd410
	// Params: [ Num(8) Size(0xB8) ]
	static struct UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle TargetFilter, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, uint8_t TriggerOnce, struct AActor* OptionalExternalOwner, uint8_t ListenForPeriodicEffects);
};

// Object: Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
// Size: 0x120 (Inherited: 0x78)
struct UAbilityTask_WaitGameplayEffectBlockedImmunity : UAbilityTask
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_WaitGameplayEffectBlockedImmunity, "AbilityTask_WaitGameplayEffectBlockedImmunity")

	struct FMulticastInlineDelegate bLocked; // 0x78(0x10)
	uint8_t Pad_0x88[0x88]; // 0x88(0x88)
	struct UAbilitySystemComponent* ExternalOwner; // 0x110(0x8)
	uint8_t Pad_0x118[0x8]; // 0x118(0x8)

	// Object: Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fcdcbc
	// Params: [ Num(6) Size(0xA0) ]
	static struct UAbilityTask_WaitGameplayEffectBlockedImmunity* WaitGameplayEffectBlockedByImmunity(struct UGameplayAbility* OwningAbility, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, struct AActor* OptionalExternalTarget, uint8_t OnlyTriggerOnce);
};

// Object: Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
// Size: 0xB8 (Inherited: 0x78)
struct UAbilityTask_WaitGameplayEffectRemoved : UAbilityTask
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_WaitGameplayEffectRemoved, "AbilityTask_WaitGameplayEffectRemoved")

	struct FMulticastInlineDelegate OnRemoved; // 0x78(0x10)
	struct FMulticastInlineDelegate InvalidHandle; // 0x88(0x10)
	uint8_t Pad_0x98[0x20]; // 0x98(0x20)

	// Object: Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fce098
	// Params: [ Num(3) Size(0x18) ]
	static struct UAbilityTask_WaitGameplayEffectRemoved* WaitForGameplayEffectRemoved(struct UGameplayAbility* OwningAbility, struct FActiveGameplayEffectHandle Handle);

	// Object: Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x7fcdf7c
	// Params: [ Num(1) Size(0x20) ]
	void OnGameplayEffectRemoved(const struct FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo);
};

// Object: Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
// Size: 0xB0 (Inherited: 0x78)
struct UAbilityTask_WaitGameplayEffectStackChange : UAbilityTask
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_WaitGameplayEffectStackChange, "AbilityTask_WaitGameplayEffectStackChange")

	struct FMulticastInlineDelegate OnChange; // 0x78(0x10)
	struct FMulticastInlineDelegate InvalidHandle; // 0x88(0x10)
	uint8_t Pad_0x98[0x18]; // 0x98(0x18)

	// Object: Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fcef4c
	// Params: [ Num(3) Size(0x18) ]
	static struct UAbilityTask_WaitGameplayEffectStackChange* WaitForGameplayEffectStackChange(struct UGameplayAbility* OwningAbility, struct FActiveGameplayEffectHandle Handle);

	// Object: Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange
	// Flags: [Final|Native|Public]
	// Offset: 0x7fcee2c
	// Params: [ Num(3) Size(0x10) ]
	void OnGameplayEffectStackChange(struct FActiveGameplayEffectHandle Handle, int32_t NewCount, int32_t OldCount);
};

// Object: Class GameplayAbilities.AbilityTask_WaitGameplayEvent
// Size: 0xA8 (Inherited: 0x78)
struct UAbilityTask_WaitGameplayEvent : UAbilityTask
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_WaitGameplayEvent, "AbilityTask_WaitGameplayEvent")

	struct FMulticastInlineDelegate EventReceived; // 0x78(0x10)
	uint8_t Pad_0x88[0x8]; // 0x88(0x8)
	struct UAbilitySystemComponent* OptionalExternalTarget; // 0x90(0x8)
	uint8_t Pad_0x98[0x10]; // 0x98(0x10)

	// Object: Function GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fcf038
	// Params: [ Num(6) Size(0x28) ]
	static struct UAbilityTask_WaitGameplayEvent* WaitGameplayEvent(struct UGameplayAbility* OwningAbility, struct FGameplayTag EventTag, struct AActor* OptionalExternalTarget, uint8_t OnlyTriggerOnce, uint8_t OnlyMatchExact);
};

// Object: Class GameplayAbilities.AbilityTask_WaitGameplayTag
// Size: 0x98 (Inherited: 0x78)
struct UAbilityTask_WaitGameplayTag : UAbilityTask
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_WaitGameplayTag, "AbilityTask_WaitGameplayTag")

	uint8_t Pad_0x78[0x8]; // 0x78(0x8)
	struct UAbilitySystemComponent* OptionalExternalTarget; // 0x80(0x8)
	uint8_t Pad_0x88[0x10]; // 0x88(0x10)

	// Object: Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback
	// Flags: [Native|Public]
	// Offset: 0x7fcf4d8
	// Params: [ Num(2) Size(0xC) ]
	void GameplayTagCallback(struct FGameplayTag Tag, int32_t NewCount);
};

// Object: Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
// Size: 0xA8 (Inherited: 0x98)
struct UAbilityTask_WaitGameplayTagAdded : UAbilityTask_WaitGameplayTag
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_WaitGameplayTagAdded, "AbilityTask_WaitGameplayTagAdded")

	struct FMulticastInlineDelegate Added; // 0x98(0x10)

	// Object: Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fcf1f8
	// Params: [ Num(5) Size(0x28) ]
	static struct UAbilityTask_WaitGameplayTagAdded* WaitGameplayTagAdd(struct UGameplayAbility* OwningAbility, struct FGameplayTag Tag, struct AActor* InOptionalExternalTarget, uint8_t OnlyTriggerOnce);
};

// Object: Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
// Size: 0xA8 (Inherited: 0x98)
struct UAbilityTask_WaitGameplayTagRemoved : UAbilityTask_WaitGameplayTag
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_WaitGameplayTagRemoved, "AbilityTask_WaitGameplayTagRemoved")

	struct FMulticastInlineDelegate Removed; // 0x98(0x10)

	// Object: Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fcf368
	// Params: [ Num(5) Size(0x28) ]
	static struct UAbilityTask_WaitGameplayTagRemoved* WaitGameplayTagRemove(struct UGameplayAbility* OwningAbility, struct FGameplayTag Tag, struct AActor* InOptionalExternalTarget, uint8_t OnlyTriggerOnce);
};

// Object: Class GameplayAbilities.AbilityTask_WaitInputPress
// Size: 0x98 (Inherited: 0x78)
struct UAbilityTask_WaitInputPress : UAbilityTask
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_WaitInputPress, "AbilityTask_WaitInputPress")

	struct FMulticastInlineDelegate OnPress; // 0x78(0x10)
	uint8_t Pad_0x88[0x10]; // 0x88(0x10)

	// Object: Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fcf5dc
	// Params: [ Num(3) Size(0x18) ]
	static struct UAbilityTask_WaitInputPress* WaitInputPress(struct UGameplayAbility* OwningAbility, uint8_t bTestAlreadyPressed);

	// Object: Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback
	// Flags: [Final|Native|Public]
	// Offset: 0x7fcf5c8
	// Params: [ Num(0) Size(0x0) ]
	void OnPressCallback();
};

// Object: Class GameplayAbilities.AbilityTask_WaitInputRelease
// Size: 0x98 (Inherited: 0x78)
struct UAbilityTask_WaitInputRelease : UAbilityTask
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_WaitInputRelease, "AbilityTask_WaitInputRelease")

	struct FMulticastInlineDelegate OnRelease; // 0x78(0x10)
	uint8_t Pad_0x88[0x10]; // 0x88(0x10)

	// Object: Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fcf6ec
	// Params: [ Num(3) Size(0x18) ]
	static struct UAbilityTask_WaitInputRelease* WaitInputRelease(struct UGameplayAbility* OwningAbility, uint8_t bTestAlreadyReleased);

	// Object: Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback
	// Flags: [Final|Native|Public]
	// Offset: 0x7fcf6d8
	// Params: [ Num(0) Size(0x0) ]
	void OnReleaseCallback();
};

// Object: Class GameplayAbilities.AbilityTask_WaitMovementModeChange
// Size: 0x98 (Inherited: 0x78)
struct UAbilityTask_WaitMovementModeChange : UAbilityTask
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_WaitMovementModeChange, "AbilityTask_WaitMovementModeChange")

	struct FMulticastInlineDelegate OnChange; // 0x78(0x10)
	uint8_t Pad_0x88[0x10]; // 0x88(0x10)

	// Object: Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange
	// Flags: [Final|Native|Public]
	// Offset: 0x7fcf8c8
	// Params: [ Num(3) Size(0xA) ]
	void OnMovementModeChange(struct ACHARACTER* CHARACTER, EMovementMode PrevMovementMode, uint8_t PreviousCustomMode);

	// Object: Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fcf7e8
	// Params: [ Num(3) Size(0x18) ]
	static struct UAbilityTask_WaitMovementModeChange* CreateWaitMovementModeChange(struct UGameplayAbility* OwningAbility, EMovementMode NewMode);
};

// Object: Class GameplayAbilities.AbilityTask_WaitOverlap
// Size: 0x88 (Inherited: 0x78)
struct UAbilityTask_WaitOverlap : UAbilityTask
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_WaitOverlap, "AbilityTask_WaitOverlap")

	struct FMulticastInlineDelegate OnOverlap; // 0x78(0x10)

	// Object: Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fcfba4
	// Params: [ Num(2) Size(0x10) ]
	static struct UAbilityTask_WaitOverlap* WaitForOverlap(struct UGameplayAbility* OwningAbility);

	// Object: Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x7fcf9ec
	// Params: [ Num(5) Size(0xAC) ]
	void OnHitCallback(struct UPrimitiveComponent* HitComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, const struct FHitResult& Hit);
};

// Object: Class GameplayAbilities.AbilityTask_WaitTargetData
// Size: 0xB8 (Inherited: 0x78)
struct UAbilityTask_WaitTargetData : UAbilityTask
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_WaitTargetData, "AbilityTask_WaitTargetData")

	struct FMulticastInlineDelegate ValidData; // 0x78(0x10)
	struct FMulticastInlineDelegate Cancelled; // 0x88(0x10)
	struct AGameplayAbilityTargetActor* TargetClass; // 0x98(0x8)
	struct AGameplayAbilityTargetActor* TargetActor; // 0xA0(0x8)
	uint8_t Pad_0xA8[0x10]; // 0xA8(0x10)

	// Object: Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fd0250
	// Params: [ Num(5) Size(0x28) ]
	static struct UAbilityTask_WaitTargetData* WaitTargetDataUsingActor(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, EGameplayTargetingConfirmation ConfirmationType, struct AGameplayAbilityTargetActor* TargetActor);

	// Object: Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fd00f8
	// Params: [ Num(5) Size(0x28) ]
	static struct UAbilityTask_WaitTargetData* WaitTargetData(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, EGameplayTargetingConfirmation ConfirmationType, struct AGameplayAbilityTargetActor* Class);

	// Object: Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback
	// Flags: [Final|Native|Public]
	// Offset: 0x7fd00e4
	// Params: [ Num(0) Size(0x0) ]
	void OnTargetDataReplicatedCancelledCallback();

	// Object: Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x7fcffe0
	// Params: [ Num(2) Size(0x30) ]
	void OnTargetDataReplicatedCallback(const struct FGameplayAbilityTargetDataHandle& Data, struct FGameplayTag ActivationTag);

	// Object: Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x7fcff20
	// Params: [ Num(1) Size(0x28) ]
	void OnTargetDataReadyCallback(const struct FGameplayAbilityTargetDataHandle& Data);

	// Object: Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x7fcfe60
	// Params: [ Num(1) Size(0x28) ]
	void OnTargetDataCancelledCallback(const struct FGameplayAbilityTargetDataHandle& Data);

	// Object: Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7fcfd84
	// Params: [ Num(2) Size(0x10) ]
	void FinishSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* SpawnedActor);

	// Object: Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7fcfc50
	// Params: [ Num(4) Size(0x19) ]
	uint8_t BeginSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* Class, struct AGameplayAbilityTargetActor*& SpawnedActor);
};

// Object: Class GameplayAbilities.AbilityTask_WaitVelocityChange
// Size: 0xA0 (Inherited: 0x78)
struct UAbilityTask_WaitVelocityChange : UAbilityTask
{
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_WaitVelocityChange, "AbilityTask_WaitVelocityChange")

	struct FMulticastInlineDelegate OnVelocityChage; // 0x78(0x10)
	struct UMovementComponent* CachedMovementComponent; // 0x88(0x8)
	uint8_t Pad_0x90[0x10]; // 0x90(0x10)

	// Object: Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x7fd0470
	// Params: [ Num(4) Size(0x20) ]
	static struct UAbilityTask_WaitVelocityChange* CreateWaitVelocityChange(struct UGameplayAbility* OwningAbility, struct FVector Direction, float MinimumMagnitude);
};

// Object: Class GameplayAbilities.GameplayAbility_CharacterJump
// Size: 0x400 (Inherited: 0x400)
struct UGameplayAbility_CharacterJump : UGameplayAbility
{
	DEFINE_UE_CLASS_HELPERS(UGameplayAbility_CharacterJump, "GameplayAbility_CharacterJump")
};

// Object: Class GameplayAbilities.GameplayAbility_Montage
// Size: 0x438 (Inherited: 0x400)
struct UGameplayAbility_Montage : UGameplayAbility
{
	DEFINE_UE_CLASS_HELPERS(UGameplayAbility_Montage, "GameplayAbility_Montage")

	struct UAnimMontage* montageToPlay; // 0x400(0x8)
	float PlayRate; // 0x408(0x4)
	struct FName SectionName; // 0x40C(0x8)
	uint8_t Pad_0x414[0x4]; // 0x414(0x4)
	struct TArray<struct UGameplayEffect*> GameplayEffectClassesWhileAnimating; // 0x418(0x10)
	struct TArray<struct UGameplayEffect*> GameplayEffectsWhileAnimating; // 0x428(0x10)
};

// Object: Class GameplayAbilities.GameplayAbilityBlueprint
// Size: 0xA0 (Inherited: 0xA0)
struct UGameplayAbilityBlueprint : UBlueprint
{
	DEFINE_UE_CLASS_HELPERS(UGameplayAbilityBlueprint, "GameplayAbilityBlueprint")
};

// Object: Class GameplayAbilities.GameplayAbilitySet
// Size: 0x40 (Inherited: 0x30)
struct UGameplayAbilitySet : UDataAsset
{
	DEFINE_UE_CLASS_HELPERS(UGameplayAbilitySet, "GameplayAbilitySet")

	struct TArray<struct FGameplayAbilityBindInfo> Abilities; // 0x30(0x10)
};

// Object: Class GameplayAbilities.GameplayAbilityTargetActor
// Size: 0x480 (Inherited: 0x370)
struct AGameplayAbilityTargetActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AGameplayAbilityTargetActor, "GameplayAbilityTargetActor")

	uint8_t ShouldProduceTargetDataOnServer : 1; // 0x370(0x1), Mask(0x1)
	uint8_t BitPad_0x370_1 : 7; // 0x370(0x1)
	uint8_t Pad_0x371[0xF]; // 0x371(0xF)
	struct FGameplayAbilityTargetingLocationInfo StartLocation; // 0x380(0x60)
	uint8_t Pad_0x3E0[0x30]; // 0x3E0(0x30)
	struct APlayerController* MasterPC; // 0x410(0x8)
	struct UGameplayAbility* OwningAbility; // 0x418(0x8)
	uint8_t bDestroyOnConfirmation : 1; // 0x420(0x1), Mask(0x1)
	uint8_t BitPad_0x420_1 : 7; // 0x420(0x1)
	uint8_t Pad_0x421[0x7]; // 0x421(0x7)
	struct AActor* SourceActor; // 0x428(0x8)
	struct FWorldReticleParameters ReticleParams; // 0x430(0xC)
	uint8_t Pad_0x43C[0x4]; // 0x43C(0x4)
	struct AGameplayAbilityWorldReticle* ReticleClass; // 0x440(0x8)
	struct FGameplayTargetDataFilterHandle Filter; // 0x448(0x10)
	uint8_t bDebug : 1; // 0x458(0x1), Mask(0x1)
	uint8_t BitPad_0x458_1 : 7; // 0x458(0x1)
	uint8_t Pad_0x459[0x17]; // 0x459(0x17)
	struct UAbilitySystemComponent* GenericDelegateBoundASC; // 0x470(0x8)
	uint8_t Pad_0x478[0x8]; // 0x478(0x8)

	// Object: Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting
	// Flags: [Native|Public]
	// Offset: 0x7fd4af8
	// Params: [ Num(0) Size(0x0) ]
	void ConfirmTargeting();

	// Object: Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting
	// Flags: [Native|Public]
	// Offset: 0x7fd4adc
	// Params: [ Num(0) Size(0x0) ]
	void CancelTargeting();
};

// Object: Class GameplayAbilities.GameplayAbilityTargetActor_Trace
// Size: 0x490 (Inherited: 0x480)
struct AGameplayAbilityTargetActor_Trace : AGameplayAbilityTargetActor
{
	DEFINE_UE_CLASS_HELPERS(AGameplayAbilityTargetActor_Trace, "GameplayAbilityTargetActor_Trace")

	float MaxRange; // 0x478(0x4)
	struct FCollisionProfileName TraceProfile; // 0x47C(0x8)
	uint8_t bTraceAffectsAimPitch : 1; // 0x484(0x1), Mask(0x1)
	uint8_t BitPad_0x48C_1 : 7; // 0x48C(0x1)
	uint8_t Pad_0x48D[0x3]; // 0x48D(0x3)
};

// Object: Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
// Size: 0x4B0 (Inherited: 0x490)
struct AGameplayAbilityTargetActor_GroundTrace : AGameplayAbilityTargetActor_Trace
{
	DEFINE_UE_CLASS_HELPERS(AGameplayAbilityTargetActor_GroundTrace, "GameplayAbilityTargetActor_GroundTrace")

	float CollisionRadius; // 0x490(0x4)
	float CollisionHeight; // 0x494(0x4)
	uint8_t Pad_0x498[0x18]; // 0x498(0x18)
};

// Object: Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
// Size: 0x4D0 (Inherited: 0x4B0)
struct AGameplayAbilityTargetActor_ActorPlacement : AGameplayAbilityTargetActor_GroundTrace
{
	DEFINE_UE_CLASS_HELPERS(AGameplayAbilityTargetActor_ActorPlacement, "GameplayAbilityTargetActor_ActorPlacement")

	struct UObject* PlacedActorClass; // 0x4B0(0x8)
	struct UMaterialInterface* PlacedActorMaterial; // 0x4B8(0x8)
	uint8_t Pad_0x4C0[0x10]; // 0x4C0(0x10)
};

// Object: Class GameplayAbilities.GameplayAbilityTargetActor_Radius
// Size: 0x480 (Inherited: 0x480)
struct AGameplayAbilityTargetActor_Radius : AGameplayAbilityTargetActor
{
	DEFINE_UE_CLASS_HELPERS(AGameplayAbilityTargetActor_Radius, "GameplayAbilityTargetActor_Radius")

	float radius; // 0x478(0x4)
};

// Object: Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
// Size: 0x490 (Inherited: 0x490)
struct AGameplayAbilityTargetActor_SingleLineTrace : AGameplayAbilityTargetActor_Trace
{
	DEFINE_UE_CLASS_HELPERS(AGameplayAbilityTargetActor_SingleLineTrace, "GameplayAbilityTargetActor_SingleLineTrace")
};

// Object: Class GameplayAbilities.GameplayAbilityWorldReticle
// Size: 0x390 (Inherited: 0x370)
struct AGameplayAbilityWorldReticle : AActor
{
	DEFINE_UE_CLASS_HELPERS(AGameplayAbilityWorldReticle, "GameplayAbilityWorldReticle")

	struct FWorldReticleParameters Parameters; // 0x370(0xC)
	uint8_t bFaceOwnerFlat : 1; // 0x37C(0x1), Mask(0x1)
	uint8_t BitPad_0x37C_1 : 7; // 0x37C(0x1)
	uint8_t bSnapToTargetedActor : 1; // 0x37D(0x1), Mask(0x1)
	uint8_t BitPad_0x37D_1 : 7; // 0x37D(0x1)
	uint8_t bIsTargetValid : 1; // 0x37E(0x1), Mask(0x1)
	uint8_t BitPad_0x37E_1 : 7; // 0x37E(0x1)
	uint8_t bIsTargetAnActor : 1; // 0x37F(0x1), Mask(0x1)
	uint8_t BitPad_0x37F_1 : 7; // 0x37F(0x1)
	struct APlayerController* MasterPC; // 0x380(0x8)
	struct AActor* TargetingActor; // 0x388(0x8)

	// Object: Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector
	// Flags: [Event|Public|HasDefaults|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x14) ]
	void SetReticleMaterialParamVector(struct FName ParamName, struct FVector Value);

	// Object: Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0xC) ]
	void SetReticleMaterialParamFloat(struct FName ParamName, float Value);

	// Object: Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void OnValidTargetChanged(uint8_t bNewValue);

	// Object: Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void OnTargetingAnActor(uint8_t bNewValue);

	// Object: Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnParametersInitialized();

	// Object: Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7fd50fc
	// Params: [ Num(1) Size(0x1) ]
	void FaceTowardSource(uint8_t bFaceIn2D);
};

// Object: Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
// Size: 0x3A8 (Inherited: 0x390)
struct AGameplayAbilityWorldReticle_ActorVisualization : AGameplayAbilityWorldReticle
{
	DEFINE_UE_CLASS_HELPERS(AGameplayAbilityWorldReticle_ActorVisualization, "GameplayAbilityWorldReticle_ActorVisualization")

	struct UCapsuleComponent* CollisionComponent; // 0x390(0x8)
	struct TArray<struct UActorComponent*> VisualizationComponents; // 0x398(0x10)
};

// Object: Class GameplayAbilities.GameplayCueInterface
// Size: 0x28 (Inherited: 0x28)
struct IGameplayCueInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IGameplayCueInterface, "GameplayCueInterface")

	// Object: Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent
	// Flags: [BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x7fd8e90
	// Params: [ Num(0) Size(0x0) ]
	void ForwardGameplayCueToParent();

	// Object: Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0xC0) ]
	void BlueprintCustomHandler(EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters);
};

// Object: Class GameplayAbilities.GameplayCueNotify_Actor
// Size: 0x3E0 (Inherited: 0x370)
struct AGameplayCueNotify_Actor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AGameplayCueNotify_Actor, "GameplayCueNotify_Actor")

	uint8_t bAutoDestroyOnRemove : 1; // 0x370(0x1), Mask(0x1)
	uint8_t BitPad_0x370_1 : 7; // 0x370(0x1)
	uint8_t Pad_0x371[0x3]; // 0x371(0x3)
	float AutoDestroyDelay; // 0x374(0x4)
	uint8_t WarnIfTimelineIsStillRunning : 1; // 0x378(0x1), Mask(0x1)
	uint8_t BitPad_0x378_1 : 7; // 0x378(0x1)
	uint8_t WarnIfLatentActionIsStillRunning : 1; // 0x379(0x1), Mask(0x1)
	uint8_t BitPad_0x379_1 : 7; // 0x379(0x1)
	uint8_t Pad_0x37A[0x2]; // 0x37A(0x2)
	struct FGameplayTag GameplayCueTag; // 0x37C(0x8)
	uint8_t Pad_0x384[0x4]; // 0x384(0x4)
	struct FGameplayTagReferenceHelper ReferenceHelper; // 0x388(0x10)
	struct FName GameplayCueName; // 0x398(0x8)
	uint8_t bAutoAttachToOwner : 1; // 0x3A0(0x1), Mask(0x1)
	uint8_t BitPad_0x3A0_1 : 7; // 0x3A0(0x1)
	uint8_t IsOverride : 1; // 0x3A1(0x1), Mask(0x1)
	uint8_t BitPad_0x3A1_1 : 7; // 0x3A1(0x1)
	uint8_t bUniqueInstancePerInstigator : 1; // 0x3A2(0x1), Mask(0x1)
	uint8_t BitPad_0x3A2_1 : 7; // 0x3A2(0x1)
	uint8_t bUniqueInstancePerSourceObject : 1; // 0x3A3(0x1), Mask(0x1)
	uint8_t BitPad_0x3A3_1 : 7; // 0x3A3(0x1)
	uint8_t bAllowMultipleOnActiveEvents : 1; // 0x3A4(0x1), Mask(0x1)
	uint8_t BitPad_0x3A4_1 : 7; // 0x3A4(0x1)
	uint8_t bAllowMultipleWhileActiveEvents : 1; // 0x3A5(0x1), Mask(0x1)
	uint8_t BitPad_0x3A5_1 : 7; // 0x3A5(0x1)
	uint8_t Pad_0x3A6[0x2]; // 0x3A6(0x2)
	int32_t NumPreallocatedInstances; // 0x3A8(0x4)
	uint8_t Pad_0x3AC[0x34]; // 0x3AC(0x34)

	// Object: Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x7fda050
	// Params: [ Num(3) Size(0xC1) ]
	uint8_t WhileActive(struct AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

	// Object: Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x7fd9e74
	// Params: [ Num(3) Size(0xC1) ]
	uint8_t OnRemove(struct AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

	// Object: Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed
	// Flags: [Native|Public]
	// Offset: 0x7fd9dc8
	// Params: [ Num(1) Size(0x8) ]
	void OnOwnerDestroyed(struct AActor* DestroyedActor);

	// Object: Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x7fd9bec
	// Params: [ Num(3) Size(0xC1) ]
	uint8_t OnExecute(struct AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

	// Object: Function GameplayAbilities.GameplayCueNotify_Actor.OnActive
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x7fd9a10
	// Params: [ Num(3) Size(0xC1) ]
	uint8_t OnActive(struct AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

	// Object: Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0xC8) ]
	void K2_HandleGameplayCue(struct AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);

	// Object: Function GameplayAbilities.GameplayCueNotify_Actor.K2_EndGameplayCue
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x7fd99f4
	// Params: [ Num(0) Size(0x0) ]
	void K2_EndGameplayCue();
};

// Object: Class GameplayAbilities.GameplayCueNotify_Static
// Size: 0x50 (Inherited: 0x28)
struct UGameplayCueNotify_Static : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGameplayCueNotify_Static, "GameplayCueNotify_Static")

	struct FGameplayTag GameplayCueTag; // 0x28(0x8)
	struct FGameplayTagReferenceHelper ReferenceHelper; // 0x30(0x10)
	struct FName GameplayCueName; // 0x40(0x8)
	uint8_t IsOverride : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)

	// Object: Function GameplayAbilities.GameplayCueNotify_Static.WhileActive
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	// Offset: 0x7fdb374
	// Params: [ Num(3) Size(0xC1) ]
	uint8_t WhileActive(struct AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

	// Object: Function GameplayAbilities.GameplayCueNotify_Static.OnRemove
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	// Offset: 0x7fdb198
	// Params: [ Num(3) Size(0xC1) ]
	uint8_t OnRemove(struct AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

	// Object: Function GameplayAbilities.GameplayCueNotify_Static.OnExecute
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	// Offset: 0x7fdafbc
	// Params: [ Num(3) Size(0xC1) ]
	uint8_t OnExecute(struct AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

	// Object: Function GameplayAbilities.GameplayCueNotify_Static.OnActive
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	// Offset: 0x7fdade0
	// Params: [ Num(3) Size(0xC1) ]
	uint8_t OnActive(struct AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

	// Object: Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue
	// Flags: [Event|Public|HasOutParms|BlueprintEvent|Const]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0xC8) ]
	void K2_HandleGameplayCue(struct AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
};

// Object: Class GameplayAbilities.GameplayCueNotify_HitImpact
// Size: 0x60 (Inherited: 0x50)
struct UGameplayCueNotify_HitImpact : UGameplayCueNotify_Static
{
	DEFINE_UE_CLASS_HELPERS(UGameplayCueNotify_HitImpact, "GameplayCueNotify_HitImpact")

	struct USoundBase* Sound; // 0x50(0x8)
	struct UParticleSystem* ParticleSystem; // 0x58(0x8)
};

// Object: Class GameplayAbilities.GameplayCueSet
// Size: 0x90 (Inherited: 0x30)
struct UGameplayCueSet : UDataAsset
{
	DEFINE_UE_CLASS_HELPERS(UGameplayCueSet, "GameplayCueSet")

	struct TArray<struct FGameplayCueNotifyData> GameplayCueData; // 0x30(0x10)
	uint8_t Pad_0x40[0x50]; // 0x40(0x50)
};

// Object: Class GameplayAbilities.GameplayCueTranslator
// Size: 0x28 (Inherited: 0x28)
struct UGameplayCueTranslator : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGameplayCueTranslator, "GameplayCueTranslator")
};

// Object: Class GameplayAbilities.GameplayCueTranslator_Test
// Size: 0x28 (Inherited: 0x28)
struct UGameplayCueTranslator_Test : UGameplayCueTranslator
{
	DEFINE_UE_CLASS_HELPERS(UGameplayCueTranslator_Test, "GameplayCueTranslator_Test")
};

// Object: Class GameplayAbilities.GameplayEffectCalculation
// Size: 0x38 (Inherited: 0x28)
struct UGameplayEffectCalculation : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGameplayEffectCalculation, "GameplayEffectCalculation")

	struct TArray<struct FGameplayEffectAttributeCaptureDefinition> RelevantAttributesToCapture; // 0x28(0x10)
};

// Object: Class GameplayAbilities.GameplayEffectCustomApplicationRequirement
// Size: 0x28 (Inherited: 0x28)
struct UGameplayEffectCustomApplicationRequirement : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGameplayEffectCustomApplicationRequirement, "GameplayEffectCustomApplicationRequirement")

	// Object: Function GameplayAbilities.GameplayEffectCustomApplicationRequirement.CanApplyGameplayEffect
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent|Const]
	// Offset: 0x7fe0ff0
	// Params: [ Num(4) Size(0x2A9) ]
	uint8_t CanApplyGameplayEffect(struct UGameplayEffect* GameplayEffect, const struct FGameplayEffectSpec& Spec, struct UAbilitySystemComponent* ASC);
};

// Object: Class GameplayAbilities.GameplayEffectExecutionCalculation
// Size: 0x40 (Inherited: 0x38)
struct UGameplayEffectExecutionCalculation : UGameplayEffectCalculation
{
	DEFINE_UE_CLASS_HELPERS(UGameplayEffectExecutionCalculation, "GameplayEffectExecutionCalculation")

	uint8_t bRequiresPassedInTags : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)

	// Object: Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent|Const]
	// Offset: 0x7fe148c
	// Params: [ Num(2) Size(0x110) ]
	void Execute(const struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput& OutExecutionOutput);
};

// Object: Class GameplayAbilities.GameplayEffectStackingExpiration
// Size: 0x28 (Inherited: 0x28)
struct UGameplayEffectStackingExpiration : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGameplayEffectStackingExpiration, "GameplayEffectStackingExpiration")

	// Object: Function GameplayAbilities.GameplayEffectStackingExpiration.OnExpiration
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x7fe1610
	// Params: [ Num(3) Size(0x2A0) ]
	int32_t OnExpiration(const struct FGameplayEffectSpec& Spec, int32_t StackToRemove);
};

// Object: Class GameplayAbilities.GameplayEffectUIData
// Size: 0x28 (Inherited: 0x28)
struct UGameplayEffectUIData : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGameplayEffectUIData, "GameplayEffectUIData")
};

// Object: Class GameplayAbilities.GameplayEffectUIData_TextOnly
// Size: 0x40 (Inherited: 0x28)
struct UGameplayEffectUIData_TextOnly : UGameplayEffectUIData
{
	DEFINE_UE_CLASS_HELPERS(UGameplayEffectUIData_TextOnly, "GameplayEffectUIData_TextOnly")

	struct FText Description; // 0x28(0x18)
};

// Object: Class GameplayAbilities.GameplayModMagnitudeCalculation
// Size: 0x40 (Inherited: 0x38)
struct UGameplayModMagnitudeCalculation : UGameplayEffectCalculation
{
	DEFINE_UE_CLASS_HELPERS(UGameplayModMagnitudeCalculation, "GameplayModMagnitudeCalculation")

	uint8_t bAllowNonNetAuthorityDependencyRegistration : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)

	// Object: Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent|Const]
	// Offset: 0x7fe1c90
	// Params: [ Num(2) Size(0x29C) ]
	float CalculateBaseMagnitude(const struct FGameplayEffectSpec& Spec);
};

// Object: Class GameplayAbilities.GameplayTagReponseTable
// Size: 0x1E8 (Inherited: 0x30)
struct UGameplayTagReponseTable : UDataAsset
{
	DEFINE_UE_CLASS_HELPERS(UGameplayTagReponseTable, "GameplayTagReponseTable")

	struct TArray<struct FGameplayTagResponseTableEntry> Entries; // 0x30(0x10)
	uint8_t Pad_0x40[0x1A8]; // 0x40(0x1A8)

	// Object: Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent
	// Flags: [Final|Native|Protected]
	// Offset: 0x7fe1e4c
	// Params: [ Num(4) Size(0x1C) ]
	void TagResponseEvent(struct FGameplayTag Tag, int32_t NewCount, struct UAbilitySystemComponent* ASC, int32_t Idx);
};

// Object: Class GameplayAbilities.TickableAttributeSetInterface
// Size: 0x28 (Inherited: 0x28)
struct ITickableAttributeSetInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(ITickableAttributeSetInterface, "TickableAttributeSetInterface")
};

} // namespace SDK
