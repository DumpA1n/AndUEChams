#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GPAbility.hpp"
#include "GPWeaponDefineForPlugin.hpp"
#include "GPWeaponFSM.hpp"
#include "GameCore.hpp"
#include "GameplayAbilities.hpp"
#include "GameplayTags.hpp"

namespace SDK
{

// Package: GPWeaponRuntime
// Enums: 21
// Structs: 88
// Classes: 143

struct AActor;
struct ACHARACTER;
struct AGameStateBase;
struct APawn;
struct APlayerCameraManager;
struct APlayerController;
enum class ECollisionChannel : uint8_t;
enum class EDrawDebugTrace : uint8_t;
enum class EGPComponentSpawnCondition : uint8_t;
enum class EGPThrowableWeaponTypeForADS : uint8_t;
enum class EGPWeaponAppearanceAttachType : uint8_t;
enum class EGPWeaponAttachBackConflict : uint8_t;
enum class EGPWeaponAttachBackSocket : uint8_t;
enum class EGPWeaponFireSocketMode : uint8_t;
enum class EGPWeaponFiringMode : uint8_t;
enum class EGPWeaponInnerEvent : uint8_t;
enum class EGPWeaponMode : uint8_t;
enum class EGPWeaponStateEvent : uint8_t;
enum class EGPWeaponStateType : uint8_t;
enum class EObjectTypeQuery : uint8_t;
enum class EPhysicalSurface : uint8_t;
enum class EProjectileMedium : uint8_t;
enum class ERenderMatrixMode : uint8_t;
enum class EStateDepFrameCheckMode : uint8_t;
enum class ESwitchWeaponContext : uint8_t;
enum class ETraceTypeQuery : uint8_t;
enum class EWeaponMeshHideReason : uint8_t;
enum class EWeaponSwitchType : uint8_t;
struct FBulletHitInfo;
struct FGPWeaponMeleeComboData;
struct FGPWeaponMesh;
struct FGPWeaponPenetrationModifier;
struct FGameplayAttribute;
struct FGameplayAttributeData;
struct FGameplayTagContainer;
struct FHitResult;
struct FWeaponFireMulticastInfo;
struct FWeaponFireRepInfo;
struct FWeaponIdentity;
struct IGPASC_AttributeSet_Minimal;
struct UAbilitySystemComponent;
struct UAnimInstance;
struct UAnimMontage;
struct UAnimNotify;
struct UAnimSequence;
struct UCapsuleComponent;
struct UCurveFloat;
struct UGPFSMStateBase;
struct UGPWeaponBlackboard;
struct UGameplayAbility;
struct UGameplayEffect;
struct UMeshComponent;
struct UPhysicalMaterial;
struct UPhysicsAsset;
struct UPrimitiveComponent;
struct USceneComponent;
struct USkeletalMeshComponent;
struct UStaticMeshComponent;
struct UTexture;
struct UWorld;
struct FProjectileTrajectoryItem;
struct FProjectileTrajectory;
struct FRepProjectileTrajectory;
struct FGPWeaponDamageHitInfo;
struct FProjectileACInfo;
struct FProjectileMediumInfoBase;
struct FMediumBorder;
struct FActorPool;
struct FWorldActorPool;
struct FActorPoolElem;
struct FGPCircleArrayDataBase;
struct FGPProjectileInfo;
struct FProjectileRuntimeContext;
struct FProjectileConfig;
struct FProjectileEvent;
struct FProjectileMediumInfo;
struct FMediumSection;
struct FProjectileMediumProxy;
struct FGPProjectileMovementHitInfo;
struct FPredictProjectilePathFixStepParams;
struct FRPGExplosionInfo;
struct FRepRPGExplosionInfo;
struct FRepProjectileEvent;
struct FRepProjectileTrajectoryItem;
struct FGPWeaponBitTag;
struct FWeaponBulletBaseInitParam;
struct FProjectilePoolState;
struct FRepBulletInfoArray;
struct FRepBulletInfo;
struct FBulletInfo;
struct FWeaponBulletTeleportMovement;
struct FWeaponBulletRuntimeContext;
struct FWeaponBulletProjectileInitParam;
struct FGPWeaponBulletOnHitParams;
struct FBulletSpawnParam;
struct FBulletPath;
struct FStickyInfo;
struct FGPWeaponBulletThrowableProjectileInfo;
struct FGPWeaponDamageBodyPartInfo;
struct FGPWeaponDamageValidationData;
struct FGPRepFNamePropertyValue;
struct FGPRepFloatPropertyValue;
struct FGPRepBoolPropertyValue;
struct FGPRepIntPropertyValue;
struct FGPWeaponFireModeInstanceInfo;
struct FGPWeaponFireModeInfo;
struct FFireCacheEvent;
struct FGPWeaponFireRecordHitInfo;
struct FFireSocketInfo;
struct FWeaponPendantOption;
struct FWeaponSocketInfo;
struct FWeaponSocketItem;
struct FGPPhysicalSurfaceAtlasInfo;
struct FGPPhysicalSurfaceGroupInfo;
struct FGPWeaponMessageIndirectObjectRef;
struct FWeaponEndFireCacheInfo;
struct FWeaponFireMulticastInfo_Cache;
struct FWeaponFrameNumber;
struct FSlotActiveWeaponInfo;
struct FGPWeaponAttachmentGenerateInfo;
struct FGPWeaponHitImpactRepInfo;
struct FGPWeaponRepDataArray;
struct FGPReplicatedWeaponData;
struct FGPReplicatedBoolWeaponData;
struct FGPReplicatedIntWeaponData;
struct FGPReplicatedFloatWeaponData;
struct FGPWeaponEventRepInfoFastArray;
struct FGPWeaponEventRepInfo;
struct FGPWeaponDataOperationInfo;
struct FGPBoolWeaponDataOperation;
struct FGPIntWeaponDataOperation;
struct FGPReplicatedFNameWeaponData;
struct FGPFNameWeaponDataOperation;
struct FGPFloatWeaponDataOperation;
struct FGPReplicatedBoolWeaponDataArray;
struct FGPReplicatedFNameWeaponDataArray;
struct FGPReplicatedFloatWeaponDataArray;
struct FGPReplicatedIntWeaponDataArray;
struct FGPWeaponRepInfoPairFastArray;
struct FGPFastWeaponBPClassPath;
struct FGPWeaponRepInfoPair;
struct FWeaponReplicateComponentInfo;
struct FBasePreViewFrame;
struct FProjectileTimeProxyBase;
struct FProjectileTimeProxy_FixTickInterval;
struct FProjectileTimeProxy;
struct FRepWeaponStateTimeLine;
struct FStateFrame;
struct UAbilityTask_WaitDelayWhileAbilityActive;
struct IActorPoolInterface;
struct IADSDetectedInterface;
struct UConeTrace;
struct UGPBulletFilterComponent;
struct UGPFireModeProxy;
struct IGPGrenadeInterface;
struct UProjectileViewMovementComponent;
struct AGPProjectile;
struct UReplicatedProjectileMovementComponent;
struct UGPWeaponProjectileMovementComponent;
struct UGPProjectileMovementComponent;
struct UGPProjectileMovementUtils;
struct IGPProjectilePublishCenterInterface;
struct IGPProjectilePublisherInterface;
struct IGPProjectileSubscriberInterface;
struct UGPProjectileReplicateComponent;
struct UGPProjectileRotatingMovementComponent;
struct IGPProjectileSystemInterface;
struct IGPThrowableWeaponInterface;
struct UGPWeaponAimAssistorBase;
struct IGPWeaponAttachBackInterface;
struct UGPWeaponAttributeSetEquip;
struct UGPWeaponAttributeSetFireMode;
struct UGPWeaponAttributeSetWeaponAmmo;
struct UGPWeaponAttributeSetWeaponChangeClip;
struct UGPWeaponAttributeSetWeaponDamage;
struct UGPWeaponAttributeSetWeaponMovement;
struct UGPWeaponAttributeSetWeaponPerk;
struct UGPWeaponBlueprintLibrary;
struct AGPWeaponBulletBase;
struct IGPWeaponBulletDefensorInterface;
struct IGPWeaponBulletDetectorInterface;
struct UGPWeaponBulletManager;
struct AGPWeaponBulletProjectile;
struct AGPWeaponBulletPhysicsSimulate;
struct AGPWeaponBulletSystem;
struct AGPWeaponBulletThrowableProjectile;
struct UGPWeaponChangeClipExecution;
struct IGPWeaponComponentBase;
struct UGPWeaponComponentImplement;
struct UGPWeaponCostAmmoExecution;
struct UGPWeaponDamageSettings;
struct UGPWeaponDataComponentBase;
struct UGPWeaponDataComponentAdapter;
struct UGPWeaponViewComponentBase;
struct UGPWeaponDataComponentAnim;
struct IGPWeaponDataComponentAnimInterface;
struct UGPWeaponDataComponentAppearance;
struct IGPWeaponDataComponentAppearanceInterface;
struct UGPWeaponDataComponentCore;
struct UGPWeaponDataComponentDamage;
struct UGPWeaponDataComponentFiring;
struct IGPWeaponDataComponentFiringInterface;
struct UGPWeaponDataComponentImpact;
struct UGPWeaponDataComponentOverHeat;
struct IGPWeaponDataComponentOverHeatInterface;
struct UGPWeaponDataComponentProxy;
struct UGPWeaponDataComponentState;
struct UGPWeaponDataComponentStateAbility;
struct UGPWeaponDataComponentStateFSM;
struct IGPWeaponDataComponentStateInterface;
struct UGPWeaponDataComponentZoom;
struct IGPWeaponDataComponentZoomInterface;
struct IGPWeaponDataInterface;
struct UGPWeaponDelegates;
struct UGPWeaponFireAssistedAimingBase;
struct UGPWeaponFireModeParamsBase;
struct UGPWeaponFireModeBase;
struct UGPWeaponFireModeParamsInstantHit;
struct UGPWeaponFireModeInstantHit;
struct IGPWeaponFireModeInterface;
struct UGPWeaponFireModeParamsPhysicSimulate;
struct UGPWeaponFireModePhysicSimulate;
struct UWeaponFireModeParamsSpawnable;
struct UGPWeaponFireModeSpawnable;
struct UGPWeaponFireModeParamsThrowable;
struct UGPWeaponFireModeThrowable;
struct UGPWeaponFireRecoilBase;
struct UGPWeaponFireSocket;
struct IGPWeaponFireSocketInterface;
struct IGPWeaponFireSpreadOwnerInterface;
struct UGPWeaponFireSpreadBase;
struct UGPWeaponFSM;
struct UGPWeaponFSMStateBase;
struct UGPWeaponFSMSSawAttackState;
struct UGPWeaponFSMStateActive;
struct UGPWeaponFSMStateActive_Bow;
struct UGPWeaponFSMStateAutoFireActive;
struct UGPWeaponFSMStateBreakableEquip;
struct UGPWeaponFSMStateCancelPreFire;
struct UGPWeaponFSMStateCancelPreFire_Throw;
struct UGPWeaponFSMStateChamber;
struct UGPWeaponFSMStateChangeClip;
struct UGPWeaponFSMStateConditionEquip;
struct UGPWeaponFSMStateConditionEquip_Bow;
struct UGPWeaponFSMStateConditionEquip_Throw;
struct UGPWeaponFSMStateFiring;
struct UBowFireModeProxy;
struct UGPWeaponFSMStateFiring_Bow;
struct UFireModeProxy_CBow;
struct UGPWeaponFSMStateFiring_CBow;
struct UChargeFireModeProxy;
struct UGPWeaponFSMStateFiring_ChargeGun;
struct ULauncherFireModeProxy;
struct UGPWeaponFSMStateFiring_Launcher;
struct UGPWeaponFSMStateFlamethrowerPrefire;
struct UGPWeaponFSMStateKeepPreFire_Throw;
struct UGPWeaponFSMStateMeleeFiring;
struct UGPWeaponFSMStatePostFire;
struct UGPWeaponFSMStatePrefire;
struct UGPWeaponFSMStateThrow;
struct UGPWeaponFSMStateThrowActive;
struct UGPWeaponFSMStateThrowFiring_C103Smoke;
struct UGPWeaponFSMStateTimeOut;
struct UGPWeaponFuncComponentBase;
struct UGPWeaponFuncComponentAdapter;
struct UGPWeaponFuncComponentAnim;
struct UGPWeaponFuncComponentAppearance;
struct IGPWeaponFuncComponentAppearanceInterface;
struct UGPWeaponFuncComponentDamage;
struct UGPWeaponFuncComponentFiring;
struct IGPWeaponFuncComponentFiringInterface;
struct UGPWeaponFuncComponentState;
struct UGPWeaponFuncComponentZoom;
struct UGPWeaponGlobals;
struct UGPWeaponImpactSettings;
struct IGPWeaponInterface;
struct UGPWeaponManagerComponent;
struct IGPWeaponManagerInterface;
struct IGPWeaponOwnerInterface;
struct IGPWeaponPhysicsInterface;
struct IGPWeaponProxyInterface;
struct UGPWeaponReplicateComponent;
struct UGPWeaponStateBase;
struct UGPWeaponThrowableProjectileMovementComponent;
struct IGPWeaponTickInterface;
struct IGPWeaponTickActorInterface;
struct UGPWeaponViewComponentImpact;
struct IPreViewTimeLineOwnerInterface;
struct IWeaponStateTimeLineOwnerInterface;
struct IWeaponLogInterface;
struct IWeaponObInterface;

// Object: Enum GPWeaponRuntime.EProjectileTrajectoryFlag
enum class EProjectileTrajectoryFlag : uint8_t
{
	TrajectoryFlagNone = 0,
	TrajectoryFlagStart = 1,
	TrajectoryFlagBounce = 2,
	TrajectoryFlagStop = 3,
	TrajectoryFlagForce = 4,
	TrajectoryFlagMedium = 5,
	TrajectoryFlagZeroGravityEnd = 6,
	EProjectileTrajectoryFlag_MAX = 7
};

// Object: Enum GPWeaponRuntime.EActorPoolMethod
enum class EActorPoolMethod : uint8_t
{
	None = 0,
	AutoRelease = 1,
	ManualRelease = 2,
	ManualRelease_OnComplete = 3,
	EActorPoolMethod_MAX = 4
};

// Object: Enum GPWeaponRuntime.EProjectileEvent
enum class EProjectileEvent : uint8_t
{
	EVENT_STOP = 0,
	EVENT_BOUNCE = 1,
	EVENT_EXPLOSION = 2,
	EVENT_PenetratingMedium = 3,
	EVENT_MAX = 4
};

// Object: Enum GPWeaponRuntime.EMediumBorderType
enum class EMediumBorderType : uint8_t
{
	BorderIn = 0,
	BorderInner = 1,
	BorderOut = 2,
	BorderInOut = 3,
	EMediumBorderType_MAX = 4
};

// Object: Enum GPWeaponRuntime.EProjectileCustomReplicateRole
enum class EProjectileCustomReplicateRole : uint8_t
{
	None = 0,
	Publisher = 1,
	Subscriber = 2,
	EProjectileCustomReplicateRole_MAX = 3
};

// Object: Enum GPWeaponRuntime.EFakeBulletRole
enum class EFakeBulletRole : uint8_t
{
	FBRoleNone = 0,
	FBRoleFake = 1,
	FBRoleMaster = 2,
	EFakeBulletRole_MAX = 3
};

// Object: Enum GPWeaponRuntime.EGPWeaponEasingType
enum class EGPWeaponEasingType : uint8_t
{
	Linear = 0,
	EaseInSine = 1,
	EaseOutSine = 2,
	EaseInOutSine = 3,
	EaseInQuad = 4,
	EaseOutQuad = 5,
	EaseInOutQuad = 6,
	EaseInCubic = 7,
	EaseOutCubic = 8,
	EaseInOutCubic = 9,
	EaseInQuart = 10,
	EaseOutQuart = 11,
	EaseInOutQuart = 12,
	EaseInQuint = 13,
	EaseOutQuint = 14,
	EaseInOutQuint = 15,
	EaseInExpo = 16,
	EaseOutExpo = 17,
	EaseInOutExpo = 18,
	EaseInCirc = 19,
	EaseOutCirc = 20,
	EaseInOutCirc = 21,
	EaseInBack = 22,
	EaseOutBack = 23,
	EaseInOutBack = 24,
	EaseInElastic = 25,
	EaseOutElastic = 26,
	EaseInOutElastic = 27,
	EaseInBounce = 28,
	EaseOutBounce = 29,
	EaseInOutBounce = 30,
	EGPWeaponEasingType_MAX = 31
};

// Object: Enum GPWeaponRuntime.EWeaponRepCondition
enum class EWeaponRepCondition : uint8_t
{
	None = 0,
	Ob = 1,
	EWeaponRepCondition_MAX = 2
};

// Object: Enum GPWeaponRuntime.EGPWeaponAnimHandIKType
enum class EGPWeaponAnimHandIKType : uint8_t
{
	None = 0,
	Primary = 1,
	Pistol = 2,
	LongWeapon = 3,
	EGPWeaponAnimHandIKType_MAX = 4
};

// Object: Enum GPWeaponRuntime.EWeaponOverrideUseAttachParentBound
enum class EWeaponOverrideUseAttachParentBound : uint8_t
{
	Dont_Override = 0,
	Force_Dont_UseAttachParentBound = 1,
	Force_UseAttachParentBound = 2,
	EWeaponOverrideUseAttachParentBound_MAX = 3
};

// Object: Enum GPWeaponRuntime.EGPWeaponFireModeSubType
enum class EGPWeaponFireModeSubType : uint8_t
{
	Default = 0,
	Secondary = 1,
	EGPWeaponFireModeSubType_MAX = 2
};

// Object: Enum GPWeaponRuntime.EFiringModeContext
enum class EFiringModeContext : uint8_t
{
	Blueprint = 0,
	DataTable = 1,
	WeaponDesc = 2,
	Input = 3,
	Max = 4
};

// Object: Enum GPWeaponRuntime.EFireModeRole
enum class EFireModeRole : uint8_t
{
	FireModeROLE_SimulatedProxy = 0,
	FireModeROLE_AutonomousProxy = 1,
	FireModeROLE_Authority = 2,
	FireModeROLE_MAX = 3
};

// Object: Enum GPWeaponRuntime.EWeaponFuncAppearanceHideReason
enum class EWeaponFuncAppearanceHideReason : uint8_t
{
	None = 0,
	HideAllWeapon = 1,
	AttachParentHidden = 2,
	StateHidden = 3,
	XPPHidden = 4,
	FPPAttachBack = 5,
	ErrorSocket = 6,
	FPPInteraction = 8,
	InPending = 9,
	WeaponFeatureChange = 10,
	Inactive = 11,
	DelayVisible = 12,
	ReplayWorld = 13,
	HideAllWeapon_ByExtraTag = 14,
	SocketOccupied = 15,
	UseLeftHand = 16,
	SocketNotExist = 17,
	ShieldSpecialCase = 18,
	EWeaponFuncAppearanceHideReason_MAX = 19
};

// Object: Enum GPWeaponRuntime.EGPPhysicalSurfaceGroup
enum class EGPPhysicalSurfaceGroup : uint8_t
{
	Default = 0,
	Cement = 1,
	Soil = 2,
	Water = 3,
	Grass = 4,
	Glass = 5,
	Wood = 6,
	NoSurfaceEffect = 7,
	EGPPhysicalSurfaceGroup_MAX = 8
};

// Object: Enum GPWeaponRuntime.EGPReplicatedDataOperation
enum class EGPReplicatedDataOperation : uint8_t
{
	EGPReplicatedDataOperation_Add = 0,
	EGPReplicatedDataOperation_Delete = 1,
	EGPReplicatedDataOperation_Modify = 2,
	EGPReplicatedDataOperation_MAX = 3
};

// Object: Enum GPWeaponRuntime.EWeaponThrowableUnderWaterExplosionType
enum class EWeaponThrowableUnderWaterExplosionType : uint8_t
{
	None = 0,
	IntoWaterStartPreExp = 1,
	OutFromWaterStartExp = 2,
	EWeaponThrowableUnderWaterExplosionType_MAX = 3
};

// Object: Enum GPWeaponRuntime.EWeaponThrowableExplosionType
enum class EWeaponThrowableExplosionType : uint8_t
{
	None = 0,
	Hit = 1,
	Timer = 2,
	Stop = 3,
	Interval = 4,
	Manual = 5,
	HitGround = 6,
	HitEnemy = 7,
	HitVehicle = 8,
	HitOrTimer = 9,
	EWeaponThrowableExplosionType_MAX = 10
};

// Object: Enum GPWeaponRuntime.EWeaponThrowableEffectType
enum class EWeaponThrowableEffectType : uint8_t
{
	None = 0,
	Damage = 1,
	Smoke = 2,
	Flash = 3,
	Incendiary = 4,
	Interference = 5,
	EWeaponThrowableEffectType_MAX = 6
};

// Object: Enum GPWeaponRuntime.EPreViewRole
enum class EPreViewRole : uint8_t
{
	ROLE_None = 0,
	ROLE_SimulatedProxy = 1,
	ROLE_AutonomousProxy = 2,
	ROLE_Authority = 3,
	ROLE_MAX = 4
};

// Object: Enum GPWeaponRuntime.ECharacterOwnerObserveState
enum class ECharacterOwnerObserveState : uint8_t
{
	ObState_None = 0,
	ObState_PendingOb = 1,
	ObState_Observed = 2,
	ObState_MAX = 3
};

// Object: ScriptStruct GPWeaponRuntime.ProjectileTrajectoryItem
// Size: 0x30 (Inherited: 0x0)
struct FProjectileTrajectoryItem
{
	EProjectileTrajectoryFlag Flag; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float Time; // 0x4(0x4)
	struct FVector Position; // 0x8(0xC)
	struct FVector Velocity; // 0x14(0xC)
	struct FRotator Rotator; // 0x20(0xC)
	EProjectileMedium Medium; // 0x2C(0x1)
	uint8_t bRebased : 1; // 0x2D(0x1), Mask(0x1)
	uint8_t BitPad_0x2D_1 : 7; // 0x2D(0x1)
	uint8_t Pad_0x2E[0x2]; // 0x2E(0x2)
};

// Object: ScriptStruct GPWeaponRuntime.ProjectileTrajectory
// Size: 0x48 (Inherited: 0x0)
struct FProjectileTrajectory
{
	uint8_t Pad_0x0[0x48]; // 0x0(0x48)
};

// Object: ScriptStruct GPWeaponRuntime.RepProjectileTrajectory
// Size: 0x20 (Inherited: 0x0)
struct FRepProjectileTrajectory
{
	struct TArray<struct FProjectileTrajectoryItem> Data; // 0x0(0x10)
	int32_t Front; // 0x10(0x4)
	int32_t Rear; // 0x14(0x4)
	int32_t MaxSize; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct GPWeaponRuntime.GPWeaponDamageHitInfo
// Size: 0x20 (Inherited: 0x0)
struct FGPWeaponDamageHitInfo
{
	struct AActor* FromActor; // 0x0(0x8)
	struct AActor* ToActor; // 0x8(0x8)
	struct FVector HitLocation; // 0x10(0xC)
	float DamgeAmount; // 0x1C(0x4)
};

// Object: ScriptStruct GPWeaponRuntime.ProjectileACInfo
// Size: 0x5C (Inherited: 0x0)
struct FProjectileACInfo
{
	float SpawnTime; // 0x0(0x4)
	struct FVector CharDir; // 0x4(0xC)
	struct FVector AimStartLoc; // 0x10(0xC)
	struct FVector AimDir; // 0x1C(0xC)
	struct FVector AimDir_PostSpread; // 0x28(0xC)
	struct FVector AimTargetLoc; // 0x34(0xC)
	struct FVector ProjSpawnLoc; // 0x40(0xC)
	struct FVector ProjMoveDir; // 0x4C(0xC)
	uint8_t bRebased : 1; // 0x58(0x1), Mask(0x1)
	uint8_t BitPad_0x58_1 : 7; // 0x58(0x1)
	uint8_t Pad_0x59[0x3]; // 0x59(0x3)
};

// Object: ScriptStruct GPWeaponRuntime.ProjectileMediumInfoBase
// Size: 0x30 (Inherited: 0x0)
struct FProjectileMediumInfoBase
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct TArray<struct FMediumBorder> MediumBorders; // 0x8(0x10)
	struct FVector InitMoveDir; // 0x18(0xC)
	struct FVector OriginLocation; // 0x24(0xC)
};

// Object: ScriptStruct GPWeaponRuntime.MediumBorder
// Size: 0x9C (Inherited: 0x0)
struct FMediumBorder
{
	int32_t BorderIndex; // 0x0(0x4)
	EProjectileMedium Medium; // 0x4(0x1)
	EMediumBorderType BorderType; // 0x5(0x1)
	uint8_t Pad_0x6[0x2]; // 0x6(0x2)
	struct FVector BorderLoc; // 0x8(0xC)
	struct FHitResult HitResult; // 0x14(0x88)
};

// Object: ScriptStruct GPWeaponRuntime.ActorPool
// Size: 0x58 (Inherited: 0x0)
struct FActorPool
{
	struct TArray<struct FActorPoolElem> PropertyFreeActors; // 0x0(0x10)
	uint8_t Pad_0x10[0x10]; // 0x10(0x10)
	struct TArray<struct AActor*> InUseActors_Auto; // 0x20(0x10)
	struct TArray<struct AActor*> InUseActors_Manual; // 0x30(0x10)
	uint8_t Pad_0x40[0x18]; // 0x40(0x18)
};

// Object: ScriptStruct GPWeaponRuntime.WorldActorPool
// Size: 0x68 (Inherited: 0x0)
struct FWorldActorPool
{
	struct TMap<struct UObject*, struct FActorPool> WorldActorPool; // 0x0(0x50)
	struct UWorld* PoolWorld; // 0x50(0x8)
	uint8_t Pad_0x58[0x10]; // 0x58(0x10)
};

// Object: ScriptStruct GPWeaponRuntime.ActorPoolElem
// Size: 0x10 (Inherited: 0x0)
struct FActorPoolElem
{
	struct AActor* Actor; // 0x0(0x8)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
};

// Object: ScriptStruct GPWeaponRuntime.GPCircleArrayDataBase
// Size: 0xC (Inherited: 0x0)
struct FGPCircleArrayDataBase
{
	int32_t Front; // 0x0(0x4)
	int32_t Rear; // 0x4(0x4)
	int32_t size; // 0x8(0x4)
};

// Object: ScriptStruct GPWeaponRuntime.GPProjectileInfo
// Size: 0x4 (Inherited: 0x0)
struct FGPProjectileInfo
{
	float ReplicatedTime; // 0x0(0x4)
};

// Object: ScriptStruct GPWeaponRuntime.ProjectileRuntimeContext
// Size: 0x120 (Inherited: 0x0)
struct FProjectileRuntimeContext
{
	struct AGPProjectile* FakeProjectile; // 0x0(0x8)
	struct AGPProjectile* MasterProjectile; // 0x8(0x8)
	uint8_t bHasFakeProjectileReleased : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x32]; // 0x11(0x32)
	EProjectileMedium Medium; // 0x43(0x1)
	struct FVector MediumBorderLoc; // 0x44(0xC)
	uint8_t Pad_0x50[0xD0]; // 0x50(0xD0)
};

// Object: ScriptStruct GPWeaponRuntime.ProjectileConfig
// Size: 0x38 (Inherited: 0x0)
struct FProjectileConfig
{
	struct USceneComponent* ViewComponentClass; // 0x0(0x8)
	struct UProjectileViewMovementComponent* ViewMovementClass; // 0x8(0x8)
	float LifeSpanOnStop; // 0x10(0x4)
	float LifeSpan; // 0x14(0x4)
	uint8_t bEnableTimeModify : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t bEnableNetJitterBuffer : 1; // 0x19(0x1), Mask(0x1)
	uint8_t BitPad_0x19_1 : 7; // 0x19(0x1)
	uint8_t bEnableTimeModifyOnSpawn : 1; // 0x1A(0x1), Mask(0x1)
	uint8_t BitPad_0x1A_1 : 7; // 0x1A(0x1)
	uint8_t Pad_0x1B[0x1]; // 0x1B(0x1)
	float NetJitterTolerant; // 0x1C(0x4)
	uint8_t bSupportCustomReplicate : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t bEnableCustomReplicate : 1; // 0x21(0x1), Mask(0x1)
	uint8_t BitPad_0x21_1 : 7; // 0x21(0x1)
	uint8_t Pad_0x22[0x2]; // 0x22(0x2)
	float NetRelevantDistance; // 0x24(0x4)
	uint8_t bEnableStableMovement : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	float StableMoveStep; // 0x2C(0x4)
	uint8_t bEnableAccurateOptimize : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
};

// Object: ScriptStruct GPWeaponRuntime.ProjectileEvent
// Size: 0x28 (Inherited: 0x0)
struct FProjectileEvent
{
	float Time; // 0x0(0x4)
	EProjectileEvent Event; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
	struct FVector Position; // 0x8(0xC)
	uint8_t bMakeHitVfx : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t bMakeExplosionInAirVfx : 1; // 0x15(0x1), Mask(0x1)
	uint8_t BitPad_0x15_1 : 7; // 0x15(0x1)
	uint8_t bLocalRebased : 1; // 0x16(0x1), Mask(0x1)
	uint8_t BitPad_0x16_1 : 7; // 0x16(0x1)
	EProjectileMedium Medium; // 0x17(0x1)
	struct FVector MediumNormal; // 0x18(0xC)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct GPWeaponRuntime.ProjectileMediumInfo
// Size: 0x58 (Inherited: 0x30)
struct FProjectileMediumInfo : FProjectileMediumInfoBase
{
	struct FVector DetectStartLoc; // 0x30(0xC)
	struct FVector DetectEndLoc; // 0x3C(0xC)
	struct TArray<struct FMediumSection> MediumSections; // 0x48(0x10)
};

// Object: ScriptStruct GPWeaponRuntime.MediumSection
// Size: 0x68 (Inherited: 0x0)
struct FMediumSection
{
	uint16_t SecIndex; // 0x0(0x2)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	struct FVector BorderIn; // 0x4(0xC)
	int32_t BorderInIndex; // 0x10(0x4)
	int32_t BorderOutIndex; // 0x14(0x4)
	EProjectileMedium Medium; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
	struct TArray<int32_t> MainBorderIndices; // 0x20(0x10)
	struct TArray<int32_t> CandidateBorderIndices; // 0x30(0x10)
	struct TArray<float> PenePowers; // 0x40(0x10)
	uint8_t bBorderOutValid : 1; // 0x50(0x1), Mask(0x1)
	uint8_t BitPad_0x50_1 : 7; // 0x50(0x1)
	uint8_t Pad_0x51[0x3]; // 0x51(0x3)
	struct FVector BorderOut; // 0x54(0xC)
	uint8_t Pad_0x60[0x8]; // 0x60(0x8)
};

// Object: ScriptStruct GPWeaponRuntime.ProjectileMediumProxy
// Size: 0x60 (Inherited: 0x58)
struct FProjectileMediumProxy : FProjectileMediumInfo
{
	uint8_t Pad_0x58[0x8]; // 0x58(0x8)
};

// Object: ScriptStruct GPWeaponRuntime.GPProjectileMovementHitInfo
// Size: 0x1C (Inherited: 0x0)
struct FGPProjectileMovementHitInfo
{
	struct FVector HitLocation; // 0x0(0xC)
	struct FVector HitNormal; // 0xC(0xC)
	float MoveTime; // 0x18(0x4)
};

// Object: ScriptStruct GPWeaponRuntime.PredictProjectilePathFixStepParams
// Size: 0x68 (Inherited: 0x60)
struct FPredictProjectilePathFixStepParams : FPredictProjectilePathParams
{
	float ProjectileCapsuleHeight; // 0x5C(0x4)
	float AirDragFactor; // 0x60(0x4)
};

// Object: ScriptStruct GPWeaponRuntime.RPGExplosionInfo
// Size: 0x28 (Inherited: 0x0)
struct FRPGExplosionInfo
{
	EPhysicalSurface ProjectileHitSurface; // 0x0(0x1)
	uint8_t bHitLandScape : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	struct FVector ExplosionPlane; // 0x4(0xC)
	struct FVector Position; // 0x10(0xC)
	uint8_t bMakeHitVfx : 1; // 0x1C(0x1), Mask(0x1)
	uint8_t BitPad_0x1C_1 : 7; // 0x1C(0x1)
	uint8_t bMakeExplosionInAirVfx : 1; // 0x1D(0x1), Mask(0x1)
	uint8_t BitPad_0x1D_1 : 7; // 0x1D(0x1)
	uint8_t Pad_0x1E[0x2]; // 0x1E(0x2)
	struct TWeakObjectPtr<struct AActor> Actor; // 0x20(0x8)
};

// Object: ScriptStruct GPWeaponRuntime.RepRPGExplosionInfo
// Size: 0x30 (Inherited: 0x0)
struct FRepRPGExplosionInfo
{
	uint64_t Guid; // 0x0(0x8)
	struct FRPGExplosionInfo RPGExplosionInfo; // 0x8(0x28)
};

// Object: ScriptStruct GPWeaponRuntime.RepProjectileEvent
// Size: 0x30 (Inherited: 0x0)
struct FRepProjectileEvent
{
	uint64_t Guid; // 0x0(0x8)
	struct FProjectileEvent Event; // 0x8(0x28)
};

// Object: ScriptStruct GPWeaponRuntime.RepProjectileTrajectoryItem
// Size: 0x38 (Inherited: 0x0)
struct FRepProjectileTrajectoryItem
{
	uint64_t Guid; // 0x0(0x8)
	struct FProjectileTrajectoryItem TrajectoryItem; // 0x8(0x30)
};

// Object: ScriptStruct GPWeaponRuntime.GPWeaponBitTag
// Size: 0x20 (Inherited: 0x0)
struct FGPWeaponBitTag
{
	uint64_t Value; // 0x0(0x8)
	uint8_t Pad_0x8[0x18]; // 0x8(0x18)
};

// Object: ScriptStruct GPWeaponRuntime.WeaponBulletBaseInitParam
// Size: 0x130 (Inherited: 0x0)
struct FWeaponBulletBaseInitParam
{
	struct FVector BulletSpawnLoc; // 0x0(0xC)
	struct FRotator BulletSpawnRot; // 0xC(0xC)
	struct FVector InitVelocity; // 0x18(0xC)
	float InitSpeed; // 0x24(0x4)
	float InitSpeedFor3P; // 0x28(0x4)
	float Gravity; // 0x2C(0x4)
	float SpeedInWaterFactor; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	uint64_t FireId; // 0x38(0x8)
	uint64_t BulletIndex; // 0x40(0x8)
	float FireTime; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	uint64_t BulletId; // 0x50(0x8)
	EFakeBulletRole FakeBulletRole; // 0x58(0x1)
	uint8_t bMakeDamage : 1; // 0x59(0x1), Mask(0x1)
	uint8_t BitPad_0x59_1 : 7; // 0x59(0x1)
	uint8_t bReplicateTo1P : 1; // 0x5A(0x1), Mask(0x1)
	uint8_t BitPad_0x5A_1 : 7; // 0x5A(0x1)
	uint8_t bReplicateTo3P : 1; // 0x5B(0x1), Mask(0x1)
	uint8_t BitPad_0x5B_1 : 7; // 0x5B(0x1)
	uint8_t bEnableCustomReplication : 1; // 0x5C(0x1), Mask(0x1)
	uint8_t BitPad_0x5C_1 : 7; // 0x5C(0x1)
	uint8_t Pad_0x5D[0x3]; // 0x5D(0x3)
	float NetRelevantDistance; // 0x60(0x4)
	uint8_t bEnableStableMovement : 1; // 0x64(0x1), Mask(0x1)
	uint8_t BitPad_0x64_1 : 7; // 0x64(0x1)
	uint8_t Pad_0x65[0x3]; // 0x65(0x3)
	float StableMoveStep; // 0x68(0x4)
	uint8_t bEnableLinearMove : 1; // 0x6C(0x1), Mask(0x1)
	uint8_t BitPad_0x6C_1 : 7; // 0x6C(0x1)
	uint8_t Pad_0x6D[0x3]; // 0x6D(0x3)
	struct AActor* WeaponOwner; // 0x70(0x8)
	struct ACHARACTER* CharacterOwner; // 0x78(0x8)
	struct UGPWeaponFireModeBase* FireMode; // 0x80(0x8)
	int64_t ExplodeAttackerValueId; // 0x88(0x8)
	uint64_t WeaponOwnerId; // 0x90(0x8)
	uint8_t FireInfoCustomValue; // 0x98(0x1)
	uint8_t Pad_0x99[0x3]; // 0x99(0x3)
	uint32_t VehicleId; // 0x9C(0x4)
	uint8_t bIsInVehicleLeanOut : 1; // 0xA0(0x1), Mask(0x1)
	uint8_t BitPad_0xA0_1 : 7; // 0xA0(0x1)
	uint8_t bPenetratedLimbs : 1; // 0xA1(0x1), Mask(0x1)
	uint8_t BitPad_0xA1_1 : 7; // 0xA1(0x1)
	uint8_t Pad_0xA2[0x2]; // 0xA2(0x2)
	struct FHitResult LimbsHitResult; // 0xA4(0x88)
	uint8_t Pad_0x12C[0x4]; // 0x12C(0x4)
};

// Object: ScriptStruct GPWeaponRuntime.ProjectilePoolState
// Size: 0x4 (Inherited: 0x0)
struct FProjectilePoolState
{
	uint32_t PoolStateValue; // 0x0(0x4)
};

// Object: ScriptStruct GPWeaponRuntime.RepBulletInfoArray
// Size: 0x118 (Inherited: 0x108)
struct FRepBulletInfoArray : FFastArraySerializer
{
	struct TArray<struct FRepBulletInfo> Items; // 0x108(0x10)
};

// Object: ScriptStruct GPWeaponRuntime.RepBulletInfo
// Size: 0x48 (Inherited: 0xC)
struct FRepBulletInfo : FFastArraySerializerItem
{
	int32_t BulletIndex; // 0xC(0x4)
	struct FVector Location; // 0x10(0xC)
	struct FRotator Rotation; // 0x1C(0xC)
	float Speed; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct AActor* Instigator; // 0x30(0x8)
	struct AGPWeaponBulletProjectile* Bullet; // 0x38(0x8)
	uint8_t bSpawnBullet : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t Pad_0x41[0x7]; // 0x41(0x7)
};

// Object: ScriptStruct GPWeaponRuntime.BulletInfo
// Size: 0x48 (Inherited: 0x0)
struct FBulletInfo
{
	int32_t BulletIndex; // 0x0(0x4)
	struct FVector Location; // 0x4(0xC)
	struct FRotator Rotation; // 0x10(0xC)
	float Speed; // 0x1C(0x4)
	uint8_t bServerCheck : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
	struct AActor* Instigator; // 0x28(0x8)
	uint8_t bClientCheck : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
	struct AGPWeaponBulletProjectile* Bullet; // 0x38(0x8)
	uint8_t bSpawnBullet : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t Pad_0x41[0x7]; // 0x41(0x7)
};

// Object: ScriptStruct GPWeaponRuntime.WeaponBulletTeleportMovement
// Size: 0xA0 (Inherited: 0x0)
struct FWeaponBulletTeleportMovement
{
	uint8_t Pad_0x0[0xA0]; // 0x0(0xA0)
};

// Object: ScriptStruct GPWeaponRuntime.WeaponBulletRuntimeContext
// Size: 0x90 (Inherited: 0x0)
struct FWeaponBulletRuntimeContext
{
	struct UGPWeaponDataComponentFiring* DCFiring; // 0x0(0x8)
	struct FVector LastCheckLocation; // 0x8(0xC)
	uint8_t bHasGenerateDamage : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t bShouldMakeDamage : 1; // 0x15(0x1), Mask(0x1)
	uint8_t BitPad_0x15_1 : 7; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
	int64_t ProjectileMaxDamageDistanceSqr; // 0x18(0x8)
	float ProjectileViewFadeoutDistanceSqr; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct TArray<struct AActor*> ActorsToIgnore; // 0x28(0x10)
	struct TArray<struct UPrimitiveComponent*> CompsToIgnore; // 0x38(0x10)
	uint8_t Pad_0x48[0x9]; // 0x48(0x9)
	uint8_t bValid : 1; // 0x51(0x1), Mask(0x1)
	uint8_t BitPad_0x51_1 : 7; // 0x51(0x1)
	uint8_t Pad_0x52[0x3E]; // 0x52(0x3E)
};

// Object: ScriptStruct GPWeaponRuntime.WeaponBulletProjectileInitParam
// Size: 0x60 (Inherited: 0x0)
struct FWeaponBulletProjectileInitParam
{
	float ReleaseDelayOnHit; // 0x0(0x4)
	float ViewHiddenDelayOnStop; // 0x4(0x4)
	uint8_t bMoveByOwner : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	int64_t ProjectileMaxDamageDistance; // 0x10(0x8)
	float ProjectileViewFadeoutDistance; // 0x18(0x4)
	float BulletRadius; // 0x1C(0x4)
	float MinColCheckDistSq; // 0x20(0x4)
	uint8_t bEnableDynamicTickInterval : 1; // 0x24(0x1), Mask(0x1)
	uint8_t BitPad_0x24_1 : 7; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
	struct TSoftObjectPtr<UCurveFloat> TickIntervalCurve; // 0x28(0x28)
	float ProjectileExplosionInAirTime; // 0x50(0x4)
	uint8_t ProjectileExplosionInAirAlwaysPreview : 1; // 0x54(0x1), Mask(0x1)
	uint8_t BitPad_0x54_1 : 7; // 0x54(0x1)
	EActorPoolMethod ActorPoolMethod; // 0x55(0x1)
	uint8_t bSupportPenetratingWater : 1; // 0x56(0x1), Mask(0x1)
	uint8_t BitPad_0x56_1 : 7; // 0x56(0x1)
	uint8_t bSupportPenetrating : 1; // 0x57(0x1), Mask(0x1)
	uint8_t BitPad_0x57_1 : 7; // 0x57(0x1)
	float PenetratingPow; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
};

// Object: ScriptStruct GPWeaponRuntime.GPWeaponBulletOnHitParams
// Size: 0x4 (Inherited: 0x0)
struct FGPWeaponBulletOnHitParams
{
	uint8_t bMakeDamage : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bMakeHitVfx : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t bMakeExplosionInAirVfx : 1; // 0x2(0x1), Mask(0x1)
	uint8_t BitPad_0x2_1 : 7; // 0x2(0x1)
	EProjectileMedium Medium; // 0x3(0x1)
};

// Object: ScriptStruct GPWeaponRuntime.BulletSpawnParam
// Size: 0x20 (Inherited: 0x0)
struct FBulletSpawnParam
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: ScriptStruct GPWeaponRuntime.BulletPath
// Size: 0x20 (Inherited: 0x0)
struct FBulletPath
{
	struct FSoftObjectPath Path; // 0x0(0x18)
	struct UObject* BulletClass; // 0x18(0x8)
};

// Object: ScriptStruct GPWeaponRuntime.StickyInfo
// Size: 0xC0 (Inherited: 0x0)
struct FStickyInfo
{
	struct FVector CachedRelativeLocToBone; // 0x0(0xC)
	struct FVector Normal; // 0xC(0xC)
	struct FWeaponIdentity CachedWeaponIdentity; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct AActor* CachedWeaponCharOwner; // 0x20(0x8)
	struct FName BoneName; // 0x28(0x8)
	uint8_t bIsSticky : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t MarkInvalid : 1; // 0x31(0x1), Mask(0x1)
	uint8_t BitPad_0x31_1 : 7; // 0x31(0x1)
	uint8_t Pad_0x32[0x2]; // 0x32(0x2)
	struct FHitResult StickyHitResult; // 0x34(0x88)
	uint8_t Pad_0xBC[0x4]; // 0xBC(0x4)
};

// Object: ScriptStruct GPWeaponRuntime.GPWeaponBulletThrowableProjectileInfo
// Size: 0x78 (Inherited: 0x0)
struct FGPWeaponBulletThrowableProjectileInfo
{
	struct FVector InitLocation; // 0x0(0xC)
	struct FVector InitVelocity; // 0xC(0xC)
	struct FVector RotationRate; // 0x18(0xC)
	float MaxLifeTime; // 0x24(0x4)
	float GravityScale; // 0x28(0x4)
	uint8_t bShouldBounce : 1; // 0x2C(0x1), Mask(0x1)
	uint8_t BitPad_0x2C_1 : 7; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
	float Bounciness; // 0x30(0x4)
	float WallBounciness; // 0x34(0x4)
	float CeilingBounciness; // 0x38(0x4)
	float CharacterBounciness; // 0x3C(0x4)
	float Friction; // 0x40(0x4)
	float CharacterFriction; // 0x44(0x4)
	float SafeMoveDistance; // 0x48(0x4)
	float BounceVelocityStopLimited; // 0x4C(0x4)
	float DamageDistance; // 0x50(0x4)
	float FullExplodeDamageDistance; // 0x54(0x4)
	float FadeOutTime; // 0x58(0x4)
	int32_t FixedMoveFrame; // 0x5C(0x4)
	float WaterDragFactorLow; // 0x60(0x4)
	float WaterDragFactorHigh; // 0x64(0x4)
	float WaterDragChangeVelocity; // 0x68(0x4)
	float UnderWaterMinHorizontalVelocity; // 0x6C(0x4)
	float WaterBuoyancyScale; // 0x70(0x4)
	float ZeroGravityDistance; // 0x74(0x4)
};

// Object: ScriptStruct GPWeaponRuntime.GPWeaponDamageBodyPartInfo
// Size: 0x14 (Inherited: 0x0)
struct FGPWeaponDamageBodyPartInfo
{
	struct FName BoneName; // 0x0(0x8)
	struct FName DamageBoneName; // 0x8(0x8)
	float DamageShare; // 0x10(0x4)
};

// Object: ScriptStruct GPWeaponRuntime.GPWeaponDamageValidationData
// Size: 0x10 (Inherited: 0x0)
struct FGPWeaponDamageValidationData
{
	struct FVector StartPos; // 0x0(0xC)
	float ClientTime; // 0xC(0x4)
};

// Object: ScriptStruct GPWeaponRuntime.GPRepFNamePropertyValue
// Size: 0xC (Inherited: 0x0)
struct FGPRepFNamePropertyValue
{
	int32_t Index; // 0x0(0x4)
	struct FName OldValue; // 0x4(0x8)
};

// Object: ScriptStruct GPWeaponRuntime.GPRepFloatPropertyValue
// Size: 0x8 (Inherited: 0x0)
struct FGPRepFloatPropertyValue
{
	int32_t Index; // 0x0(0x4)
	float OldValue; // 0x4(0x4)
};

// Object: ScriptStruct GPWeaponRuntime.GPRepBoolPropertyValue
// Size: 0x8 (Inherited: 0x0)
struct FGPRepBoolPropertyValue
{
	int32_t Index; // 0x0(0x4)
	uint8_t OldValue : 1; // 0x4(0x1), Mask(0x1)
	uint8_t BitPad_0x4_1 : 7; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
};

// Object: ScriptStruct GPWeaponRuntime.GPRepIntPropertyValue
// Size: 0x8 (Inherited: 0x0)
struct FGPRepIntPropertyValue
{
	int32_t Index; // 0x0(0x4)
	int32_t OldValue; // 0x4(0x4)
};

// Object: ScriptStruct GPWeaponRuntime.GPWeaponFireModeInstanceInfo
// Size: 0x10 (Inherited: 0x0)
struct FGPWeaponFireModeInstanceInfo
{
	uint8_t Index; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct UGPWeaponFireModeBase* Instance; // 0x8(0x8)
};

// Object: ScriptStruct GPWeaponRuntime.GPWeaponFireModeInfo
// Size: 0x28 (Inherited: 0x0)
struct FGPWeaponFireModeInfo
{
	struct UGPWeaponFireModeBase* FireModeClass; // 0x0(0x8)
	struct TArray<EGPWeaponFiringMode> SupportFiringModes; // 0x8(0x10)
	EGPWeaponFiringMode DefaultFiringMode; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
	struct UGPWeaponFireModeParamsBase* FireModeParam; // 0x20(0x8)
};

// Object: ScriptStruct GPWeaponRuntime.FireCacheEvent
// Size: 0x8 (Inherited: 0x0)
struct FFireCacheEvent
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct GPWeaponRuntime.GPWeaponFireRecordHitInfo
// Size: 0xB0 (Inherited: 0x0)
struct FGPWeaponFireRecordHitInfo
{
	uint8_t Pad_0x0[0xB0]; // 0x0(0xB0)
};

// Object: ScriptStruct GPWeaponRuntime.FireSocketInfo
// Size: 0x10 (Inherited: 0x0)
struct FFireSocketInfo
{
	struct TWeakObjectPtr<struct UMeshComponent> MeshComponent; // 0x0(0x8)
	struct FName SocketName; // 0x8(0x8)
};

// Object: ScriptStruct GPWeaponRuntime.WeaponPendantOption
// Size: 0x10 (Inherited: 0x0)
struct FWeaponPendantOption
{
	struct TArray<struct FName> PrioritySockets; // 0x0(0x10)
};

// Object: ScriptStruct GPWeaponRuntime.WeaponSocketInfo
// Size: 0x10 (Inherited: 0x0)
struct FWeaponSocketInfo
{
	struct TArray<struct FWeaponSocketItem> Items; // 0x0(0x10)
};

// Object: ScriptStruct GPWeaponRuntime.WeaponSocketItem
// Size: 0xC (Inherited: 0x0)
struct FWeaponSocketItem
{
	int32_t EquipPosition; // 0x0(0x4)
	struct FName SocketName; // 0x4(0x8)
};

// Object: ScriptStruct GPWeaponRuntime.GPPhysicalSurfaceAtlasInfo
// Size: 0x2 (Inherited: 0x0)
struct FGPPhysicalSurfaceAtlasInfo
{
	EPhysicalSurface TargetSurfaceType; // 0x0(0x1)
	uint8_t bHideDecal : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
};

// Object: ScriptStruct GPWeaponRuntime.GPPhysicalSurfaceGroupInfo
// Size: 0x18 (Inherited: 0x0)
struct FGPPhysicalSurfaceGroupInfo
{
	EGPPhysicalSurfaceGroup GroupType; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TArray<EPhysicalSurface> SurfaceTypeList; // 0x8(0x10)
};

// Object: ScriptStruct GPWeaponRuntime.GPWeaponMessageIndirectObjectRef
// Size: 0x8 (Inherited: 0x0)
struct FGPWeaponMessageIndirectObjectRef
{
	struct UObject* obj; // 0x0(0x8)
};

// Object: ScriptStruct GPWeaponRuntime.WeaponEndFireCacheInfo
// Size: 0x10 (Inherited: 0x0)
struct FWeaponEndFireCacheInfo
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct GPWeaponRuntime.WeaponFireMulticastInfo_Cache
// Size: 0x88 (Inherited: 0x0)
struct FWeaponFireMulticastInfo_Cache
{
	struct FWeaponFireMulticastInfo FireMulticastInfo; // 0x0(0x78)
	uint8_t Pad_0x78[0x10]; // 0x78(0x10)
};

// Object: ScriptStruct GPWeaponRuntime.WeaponFrameNumber
// Size: 0x10 (Inherited: 0x0)
struct FWeaponFrameNumber
{
	struct AGameStateBase* CacheGS; // 0x0(0x8)
	struct UWorld* World; // 0x8(0x8)
};

// Object: ScriptStruct GPWeaponRuntime.SlotActiveWeaponInfo
// Size: 0x20 (Inherited: 0x0)
struct FSlotActiveWeaponInfo
{
	struct TScriptInterface<IGPWeaponInterface> CurrActiveWeaponAttachment; // 0x0(0x10)
	struct FWeaponIdentity CurActiveWeaponIdentity; // 0x10(0x4)
	uint8_t Pad_0x14[0xC]; // 0x14(0xC)
};

// Object: ScriptStruct GPWeaponRuntime.GPWeaponAttachmentGenerateInfo
// Size: 0x10 (Inherited: 0x0)
struct FGPWeaponAttachmentGenerateInfo
{
	struct FName AttachmentKeyName; // 0x0(0x8)
	struct AActor* AttachmentClassType; // 0x8(0x8)
};

// Object: ScriptStruct GPWeaponRuntime.GPWeaponHitImpactRepInfo
// Size: 0xB8 (Inherited: 0x0)
struct FGPWeaponHitImpactRepInfo
{
	uint8_t bFppPlay : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FWeaponIdentity WeaponIdentity; // 0x4(0x4)
	struct FBulletHitRepInfo BulletHitRepInfo; // 0x8(0xB0)
};

// Object: ScriptStruct GPWeaponRuntime.GPWeaponRepDataArray
// Size: 0x10 (Inherited: 0x0)
struct FGPWeaponRepDataArray
{
	struct TArray<struct FGPReplicatedWeaponData> Items; // 0x0(0x10)
};

// Object: ScriptStruct GPWeaponRuntime.GPReplicatedWeaponData
// Size: 0x50 (Inherited: 0x0)
struct FGPReplicatedWeaponData
{
	struct FWeaponIdentity WeaponIdentity; // 0x0(0x4)
	uint32_t DataCompNameHash; // 0x4(0x4)
	uint8_t bDataValid : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct TArray<struct FGPReplicatedIntWeaponData> IntItems; // 0x10(0x10)
	struct TArray<struct FGPReplicatedFloatWeaponData> FloatItems; // 0x20(0x10)
	struct TArray<struct FGPReplicatedIntWeaponData> EnumItems; // 0x30(0x10)
	struct TArray<struct FGPReplicatedBoolWeaponData> BoolItems; // 0x40(0x10)
};

// Object: ScriptStruct GPWeaponRuntime.GPReplicatedBoolWeaponData
// Size: 0x2 (Inherited: 0x0)
struct FGPReplicatedBoolWeaponData
{
	uint8_t DataIndex; // 0x0(0x1)
	uint8_t DataValue : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
};

// Object: ScriptStruct GPWeaponRuntime.GPReplicatedIntWeaponData
// Size: 0x8 (Inherited: 0x0)
struct FGPReplicatedIntWeaponData
{
	uint8_t DataIndex; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t DataValue; // 0x4(0x4)
};

// Object: ScriptStruct GPWeaponRuntime.GPReplicatedFloatWeaponData
// Size: 0x8 (Inherited: 0x0)
struct FGPReplicatedFloatWeaponData
{
	uint8_t DataIndex; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float DataValue; // 0x4(0x4)
};

// Object: ScriptStruct GPWeaponRuntime.GPWeaponEventRepInfoFastArray
// Size: 0x10 (Inherited: 0x0)
struct FGPWeaponEventRepInfoFastArray
{
	struct TArray<struct FGPWeaponEventRepInfo> Items; // 0x0(0x10)
};

// Object: ScriptStruct GPWeaponRuntime.GPWeaponEventRepInfo
// Size: 0x10 (Inherited: 0x0)
struct FGPWeaponEventRepInfo
{
	struct FWeaponIdentity WeaponIdentity; // 0x0(0x4)
	uint8_t WeaponRepStateEventType; // 0x4(0x1)
	uint8_t WeapRepContTimes; // 0x5(0x1)
	uint8_t Pad_0x6[0x2]; // 0x6(0x2)
	uint32_t WeapRepFrameNumber; // 0x8(0x4)
	uint8_t WeapRepInWeaponIndex; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct GPWeaponRuntime.GPWeaponDataOperationInfo
// Size: 0x58 (Inherited: 0x0)
struct FGPWeaponDataOperationInfo
{
	uint32_t DataCompNameHash; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FGPIntWeaponDataOperation> IntDataArray; // 0x8(0x10)
	struct TArray<struct FGPFloatWeaponDataOperation> FloatDataArray; // 0x18(0x10)
	struct TArray<struct FGPFNameWeaponDataOperation> FNameDataArray; // 0x28(0x10)
	struct TArray<struct FGPIntWeaponDataOperation> EnumDataArray; // 0x38(0x10)
	struct TArray<struct FGPBoolWeaponDataOperation> BoolDataArray; // 0x48(0x10)
};

// Object: ScriptStruct GPWeaponRuntime.GPBoolWeaponDataOperation
// Size: 0x3 (Inherited: 0x0)
struct FGPBoolWeaponDataOperation
{
	EGPReplicatedDataOperation Operation; // 0x0(0x1)
	struct FGPReplicatedBoolWeaponData WeaponData; // 0x1(0x2)
};

// Object: ScriptStruct GPWeaponRuntime.GPIntWeaponDataOperation
// Size: 0xC (Inherited: 0x0)
struct FGPIntWeaponDataOperation
{
	EGPReplicatedDataOperation Operation; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FGPReplicatedIntWeaponData WeaponData; // 0x4(0x8)
};

// Object: ScriptStruct GPWeaponRuntime.GPReplicatedFNameWeaponData
// Size: 0xC (Inherited: 0x0)
struct FGPReplicatedFNameWeaponData
{
	uint8_t DataIndex; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FName DataValue; // 0x4(0x8)
};

// Object: ScriptStruct GPWeaponRuntime.GPFNameWeaponDataOperation
// Size: 0x10 (Inherited: 0x0)
struct FGPFNameWeaponDataOperation
{
	EGPReplicatedDataOperation Operation; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FGPReplicatedFNameWeaponData WeaponData; // 0x4(0xC)
};

// Object: ScriptStruct GPWeaponRuntime.GPFloatWeaponDataOperation
// Size: 0xC (Inherited: 0x0)
struct FGPFloatWeaponDataOperation
{
	EGPReplicatedDataOperation Operation; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FGPReplicatedFloatWeaponData WeaponData; // 0x4(0x8)
};

// Object: ScriptStruct GPWeaponRuntime.GPReplicatedBoolWeaponDataArray
// Size: 0x10 (Inherited: 0x0)
struct FGPReplicatedBoolWeaponDataArray
{
	struct TArray<struct FGPReplicatedBoolWeaponData> Items; // 0x0(0x10)
};

// Object: ScriptStruct GPWeaponRuntime.GPReplicatedFNameWeaponDataArray
// Size: 0x10 (Inherited: 0x0)
struct FGPReplicatedFNameWeaponDataArray
{
	struct TArray<struct FGPReplicatedFNameWeaponData> Items; // 0x0(0x10)
};

// Object: ScriptStruct GPWeaponRuntime.GPReplicatedFloatWeaponDataArray
// Size: 0x10 (Inherited: 0x0)
struct FGPReplicatedFloatWeaponDataArray
{
	struct TArray<struct FGPReplicatedFloatWeaponData> Items; // 0x0(0x10)
};

// Object: ScriptStruct GPWeaponRuntime.GPReplicatedIntWeaponDataArray
// Size: 0x10 (Inherited: 0x0)
struct FGPReplicatedIntWeaponDataArray
{
	struct TArray<struct FGPReplicatedIntWeaponData> Items; // 0x0(0x10)
};

// Object: ScriptStruct GPWeaponRuntime.GPWeaponRepInfoPairFastArray
// Size: 0x118 (Inherited: 0x108)
struct FGPWeaponRepInfoPairFastArray : FFastArraySerializer
{
	struct TArray<struct FGPWeaponRepInfoPair> Items; // 0x108(0x10)
};

// Object: ScriptStruct GPWeaponRuntime.GPFastWeaponBPClassPath
// Size: 0x38 (Inherited: 0x0)
struct FGPFastWeaponBPClassPath
{
	uint8_t FastWeaponBPClassPathType; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	uint64_t FastWeaponBPClassId; // 0x8(0x8)
	struct TSoftClassPtr<struct AActor*> WeaponClassPath; // 0x10(0x28)
};

// Object: ScriptStruct GPWeaponRuntime.GPWeaponRepInfoPair
// Size: 0x58 (Inherited: 0xC)
struct FGPWeaponRepInfoPair : FFastArraySerializerItem
{
	uint8_t bShouldReserveLastWeapon : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	EWeaponSwitchType SwitchType; // 0xD(0x1)
	uint8_t Pad_0xE[0x2]; // 0xE(0x2)
	struct FWeaponIdentity WeaponIdentity; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FGPFastWeaponBPClassPath WeaponBPClassPath; // 0x18(0x38)
	uint32_t LastActiveFrame; // 0x50(0x4)
	uint8_t WeaponSlot; // 0x54(0x1)
	uint8_t Pad_0x55[0x3]; // 0x55(0x3)
};

// Object: ScriptStruct GPWeaponRuntime.WeaponReplicateComponentInfo
// Size: 0x18 (Inherited: 0x0)
struct FWeaponReplicateComponentInfo
{
	struct FWeaponIdentity WeaponIdentity; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<uint32_t> DataCompNameHashList; // 0x8(0x10)
};

// Object: ScriptStruct GPWeaponRuntime.BasePreViewFrame
// Size: 0x28 (Inherited: 0x0)
struct FBasePreViewFrame
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	int32_t LocalFrameNo; // 0x8(0x4)
	int32_t RemoteFrameNo; // 0xC(0x4)
	int32_t DepFrameNo; // 0x10(0x4)
	uint8_t Pad_0x14[0xC]; // 0x14(0xC)
	float WorldTime; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct GPWeaponRuntime.ProjectileTimeProxyBase
// Size: 0x10 (Inherited: 0x0)
struct FProjectileTimeProxyBase
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct GPWeaponRuntime.ProjectileTimeProxy_FixTickInterval
// Size: 0x18 (Inherited: 0x10)
struct FProjectileTimeProxy_FixTickInterval : FProjectileTimeProxyBase
{
	uint8_t Pad_0x10[0x8]; // 0x10(0x8)
};

// Object: ScriptStruct GPWeaponRuntime.ProjectileTimeProxy
// Size: 0x78 (Inherited: 0x10)
struct FProjectileTimeProxy : FProjectileTimeProxyBase
{
	uint8_t Pad_0x10[0x68]; // 0x10(0x68)
};

// Object: ScriptStruct GPWeaponRuntime.RepWeaponStateTimeLine
// Size: 0x20 (Inherited: 0x0)
struct FRepWeaponStateTimeLine
{
	struct TArray<struct FStateFrame> Data; // 0x0(0x10)
	int32_t Front; // 0x10(0x4)
	int32_t Rear; // 0x14(0x4)
	int32_t MaxSize; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct GPWeaponRuntime.StateFrame
// Size: 0x28 (Inherited: 0x28)
struct FStateFrame : FBasePreViewFrame
{
	EGPWeaponStateType LastStateType; // 0x24(0x1)
	EGPWeaponStateType StateType; // 0x25(0x1)
	EGPWeaponStateEvent EventType; // 0x26(0x1)
};

// Object: Class GPWeaponRuntime.AbilityTask_WaitDelayWhileAbilityActive
// Size: 0x98 (Inherited: 0x78)
struct UAbilityTask_WaitDelayWhileAbilityActive : UAbilityTask
{
	struct FMulticastInlineDelegate OnFinish; // 0x78(0x10)
	uint8_t Pad_0x88[0x10]; // 0x88(0x10)


	// Object: Function GPWeaponRuntime.AbilityTask_WaitDelayWhileAbilityActive.WaitDelayWhileAbilityActive
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x861944c
	// Params: [ Num(3) Size(0x18) ]
	static struct UAbilityTask_WaitDelayWhileAbilityActive* WaitDelayWhileAbilityActive(struct UGameplayAbility* OwningAbility, float Time);
	DEFINE_UE_CLASS_HELPERS(UAbilityTask_WaitDelayWhileAbilityActive, "AbilityTask_WaitDelayWhileAbilityActive")

};

// Object: Class GPWeaponRuntime.ActorPoolInterface
// Size: 0x28 (Inherited: 0x28)
struct IActorPoolInterface : IInterface
{

	// Object: Function GPWeaponRuntime.ActorPoolInterface.SetActorPoolMethod
	// Flags: [Native|Public]
	// Offset: 0x86196c0
	// Params: [ Num(1) Size(0x1) ]
	void SetActorPoolMethod(EActorPoolMethod Val);

	// Object: Function GPWeaponRuntime.ActorPoolInterface.ReleaseToPool
	// Flags: [Native|Public]
	// Offset: 0x86196a4
	// Params: [ Num(0) Size(0x0) ]
	void ReleaseToPool();

	// Object: Function GPWeaponRuntime.ActorPoolInterface.PreReleaseToPool
	// Flags: [Native|Public]
	// Offset: 0x8619688
	// Params: [ Num(0) Size(0x0) ]
	void PreReleaseToPool();

	// Object: Function GPWeaponRuntime.ActorPoolInterface.OnUsed
	// Flags: [Native|Public]
	// Offset: 0x861966c
	// Params: [ Num(0) Size(0x0) ]
	void OnUsed();

	// Object: Function GPWeaponRuntime.ActorPoolInterface.OnReclaim
	// Flags: [Native|Public]
	// Offset: 0x8619650
	// Params: [ Num(0) Size(0x0) ]
	void OnReclaim();

	// Object: Function GPWeaponRuntime.ActorPoolInterface.GetReusedCD
	// Flags: [Native|Public]
	// Offset: 0x8619614
	// Params: [ Num(1) Size(0x4) ]
	float GetReusedCD();

	// Object: Function GPWeaponRuntime.ActorPoolInterface.GetMaxPoolSize
	// Flags: [Native|Public]
	// Offset: 0x86195d8
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetMaxPoolSize();

	// Object: Function GPWeaponRuntime.ActorPoolInterface.GetActorPoolMethod
	// Flags: [Native|Public]
	// Offset: 0x861959c
	// Params: [ Num(1) Size(0x1) ]
	EActorPoolMethod GetActorPoolMethod();
	DEFINE_UE_CLASS_HELPERS(IActorPoolInterface, "ActorPoolInterface")

};

// Object: Class GPWeaponRuntime.ADSDetectedInterface
// Size: 0x28 (Inherited: 0x28)
struct IADSDetectedInterface : IInterface
{	DEFINE_UE_CLASS_HELPERS(IADSDetectedInterface, "ADSDetectedInterface")

};

// Object: Class GPWeaponRuntime.ConeTrace
// Size: 0x28 (Inherited: 0x28)
struct UConeTrace : UBlueprintFunctionLibrary
{

	// Object: Function GPWeaponRuntime.ConeTrace.SphereTraceMultiForObjects
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x861ac94
	// Params: [ Num(14) Size(0x91) ]
	static uint8_t SphereTraceMultiForObjects(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float radius, const struct TArray<EObjectTypeQuery>& ObjectTypes, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, struct TArray<struct FHitResult>& OutHits, uint8_t bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime);

	// Object: Function GPWeaponRuntime.ConeTrace.ConeTraceSingleForObjects
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x861a888
	// Params: [ Num(14) Size(0x105) ]
	static uint8_t ConeTraceSingleForObjects(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float radius, const struct TArray<EObjectTypeQuery>& ObjectTypes, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, struct FHitResult& OutHit, uint8_t bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime);

	// Object: Function GPWeaponRuntime.ConeTrace.ConeTraceSingleByProfile
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x861a494
	// Params: [ Num(14) Size(0xF5) ]
	static uint8_t ConeTraceSingleByProfile(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float radius, struct FName ProfileName, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, struct FHitResult& OutHit, uint8_t bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime);

	// Object: Function GPWeaponRuntime.ConeTrace.ConeTraceSingle
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x861a0a0
	// Params: [ Num(14) Size(0xED) ]
	static uint8_t ConeTraceSingle(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float radius, ETraceTypeQuery TraceChannel, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, struct FHitResult& OutHit, uint8_t bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime);

	// Object: Function GPWeaponRuntime.ConeTrace.ConeTraceMultiByProfile
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x8619cc4
	// Params: [ Num(14) Size(0x81) ]
	static uint8_t ConeTraceMultiByProfile(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float radius, struct FName ProfileName, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, struct TArray<struct FHitResult>& OutHits, uint8_t bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime);

	// Object: Function GPWeaponRuntime.ConeTrace.ConeTraceMulti
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x86198e8
	// Params: [ Num(14) Size(0x79) ]
	static uint8_t ConeTraceMulti(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float radius, ETraceTypeQuery TraceChannel, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, struct TArray<struct FHitResult>& OutHits, uint8_t bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime);
	DEFINE_UE_CLASS_HELPERS(UConeTrace, "ConeTrace")

};

// Object: Class GPWeaponRuntime.GPBulletFilterComponent
// Size: 0x100 (Inherited: 0xF8)
struct UGPBulletFilterComponent : UActorComponent
{
	float MinBulletBlockRadius; // 0xF8(0x4)
	uint8_t Pad_0xFC[0x4]; // 0xFC(0x4)
	DEFINE_UE_CLASS_HELPERS(UGPBulletFilterComponent, "GPBulletFilterComponent")

};

// Object: Class GPWeaponRuntime.GPFireModeProxy
// Size: 0xA8 (Inherited: 0x28)
struct UGPFireModeProxy : UObject
{
	uint8_t Pad_0x28[0x70]; // 0x28(0x70)
	struct UGPWeaponFSMStateFiring* StateFiring; // 0x98(0x8)
	uint8_t Pad_0xA0[0x8]; // 0xA0(0x8)
	DEFINE_UE_CLASS_HELPERS(UGPFireModeProxy, "GPFireModeProxy")

};

// Object: Class GPWeaponRuntime.GPGrenadeInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPGrenadeInterface : IInterface
{	DEFINE_UE_CLASS_HELPERS(IGPGrenadeInterface, "GPGrenadeInterface")

};

// Object: Class GPWeaponRuntime.ProjectileViewMovementComponent
// Size: 0x108 (Inherited: 0xF8)
struct UProjectileViewMovementComponent : UActorComponent
{
	struct USceneComponent* UpdatedComponent; // 0xF8(0x8)
	float LerpDuration; // 0x100(0x4)
	uint8_t Pad_0x104[0x4]; // 0x104(0x4)
	DEFINE_UE_CLASS_HELPERS(UProjectileViewMovementComponent, "ProjectileViewMovementComponent")

};

// Object: Class GPWeaponRuntime.GPProjectile
// Size: 0x5C8 (Inherited: 0x370)
struct AGPProjectile : AActor
{
	uint8_t Pad_0x370[0x28]; // 0x370(0x28)
	struct UReplicatedProjectileMovementComponent* ProjectileMovementComponent; // 0x398(0x8)
	struct USceneComponent* ViewComponent; // 0x3A0(0x8)
	struct UProjectileViewMovementComponent* ViewMovementComponent; // 0x3A8(0x8)
	uint64_t Guid; // 0x3B0(0x8)
	struct FGPProjectileInfo GPProjectileInfo; // 0x3B8(0x4)
	uint8_t Pad_0x3BC[0x4]; // 0x3BC(0x4)
	struct FProjectileConfig ProjectileConfig; // 0x3C0(0x38)
	struct FProjectileRuntimeContext RuntimeContext; // 0x3F8(0x120)
	uint8_t Pad_0x518[0x21]; // 0x518(0x21)
	uint8_t bInterpedByADSV2 : 1; // 0x539(0x1), Mask(0x1)
	uint8_t BitPad_0x539_1 : 7; // 0x539(0x1)
	uint8_t Pad_0x53A[0x6]; // 0x53A(0x6)
	struct TArray<struct FProjectileEvent> ReplicatedEvents; // 0x540(0x10)
	struct FProjectileTimeProxy ProjectileTimeProxy; // 0x550(0x78)


	// Object: Function GPWeaponRuntime.GPProjectile.SetCanTickMovement
	// Flags: [Final|Native|Protected]
	// Offset: 0x861bbd8
	// Params: [ Num(1) Size(0x1) ]
	void SetCanTickMovement(uint8_t IsCanTickMovement);

	// Object: Function GPWeaponRuntime.GPProjectile.OnProjectileStop
	// Flags: [Native|Protected|HasOutParms]
	// Offset: 0xe7ad48c
	// Params: [ Num(1) Size(0x88) ]
	void OnProjectileStop(const struct FHitResult& ImpactResult);

	// Object: Function GPWeaponRuntime.GPProjectile.OnProjectileRelease
	// Flags: [Native|Protected]
	// Offset: 0x861bb24
	// Params: [ Num(1) Size(0x1) ]
	void OnProjectileRelease(uint8_t bReclaim);

	// Object: Function GPWeaponRuntime.GPProjectile.OnProjectilePenetrating
	// Flags: [Native|Protected|HasOutParms]
	// Offset: 0x107f8a98
	// Params: [ Num(3) Size(0x8C) ]
	void OnProjectilePenetrating(EProjectileMedium OldMedium, EProjectileMedium NewMedium, const struct FHitResult& HitResult);

	// Object: Function GPWeaponRuntime.GPProjectile.OnProjectileBounce
	// Flags: [Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0xe7a55b4
	// Params: [ Num(2) Size(0x94) ]
	void OnProjectileBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);

	// Object: Function GPWeaponRuntime.GPProjectile.OnDelayTickMovement
	// Flags: [Final|Native|Public]
	// Offset: 0x861bb10
	// Params: [ Num(0) Size(0x0) ]
	void OnDelayTickMovement();

	// Object: Function GPWeaponRuntime.GPProjectile.MulticastEventUnReliable
	// Flags: [Net|Native|Event|NetMulticast|Public]
	// Offset: 0x861ba44
	// Params: [ Num(1) Size(0x28) ]
	void MulticastEventUnReliable(struct FProjectileEvent ProjectileEvent);

	// Object: Function GPWeaponRuntime.GPProjectile.MulticastEventReliable
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0xf135b30
	// Params: [ Num(1) Size(0x28) ]
	void MulticastEventReliable(struct FProjectileEvent ProjectileEvent);

	// Object: Function GPWeaponRuntime.GPProjectile.IsThrowableProjectile
	// Flags: [Native|Public]
	// Offset: 0x861ba04
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsThrowableProjectile();

	// Object: Function GPWeaponRuntime.GPProjectile.DelayTickMovement
	// Flags: [Final|Native|Public]
	// Offset: 0x861b960
	// Params: [ Num(1) Size(0x4) ]
	void DelayTickMovement(float DelayTime);

	// Object: Function GPWeaponRuntime.GPProjectile.DebugDrawServerPos
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults]
	// Offset: 0x861b878
	// Params: [ Num(2) Size(0x18) ]
	void DebugDrawServerPos(struct FVector WorldPos, struct FRotator Rotator);

	// Object: Function GPWeaponRuntime.GPProjectile.BP_OnProjectileUsed
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnProjectileUsed();

	// Object: Function GPWeaponRuntime.GPProjectile.BP_OnProjectileStop
	// Flags: [Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x88) ]
	void BP_OnProjectileStop(const struct FHitResult& ImpactResult);

	// Object: Function GPWeaponRuntime.GPProjectile.BP_OnProjectileRelease
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_OnProjectileRelease(uint8_t bReclaim);

	// Object: Function GPWeaponRuntime.GPProjectile.BP_OnProjectileBounce
	// Flags: [Event|Protected|HasOutParms|HasDefaults|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x94) ]
	void BP_OnProjectileBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	DEFINE_UE_CLASS_HELPERS(AGPProjectile, "GPProjectile")

};

// Object: Class GPWeaponRuntime.ReplicatedProjectileMovementComponent
// Size: 0x4D0 (Inherited: 0x210)
struct UReplicatedProjectileMovementComponent : UProjectileMovementComponent
{
	uint8_t Pad_0x210[0x8]; // 0x210(0x8)
	struct FHitResult StopHitResult; // 0x218(0x88)
	struct FRepProjectileTrajectory RepTrajectoryData; // 0x2A0(0x20)
	uint8_t Pad_0x2C0[0x28]; // 0x2C0(0x28)
	struct FProjectileTrajectory LocalProjectileTrajectory; // 0x2E8(0x48)
	struct FProjectileTrajectory RemoteProjectileTrajectory; // 0x330(0x48)
	struct FProjectileTrajectoryItem TrajectoryItemTolerant; // 0x378(0x30)
	struct TSet<uint8_t> TrajectoryFlagBlackSet; // 0x3A8(0x50)
	struct TArray<EProjectileTrajectoryFlag> TrajectoryFlagBlackSetEnum; // 0x3F8(0x10)
	uint8_t bMoveByOwner : 1; // 0x408(0x1), Mask(0x1)
	uint8_t BitPad_0x408_1 : 7; // 0x408(0x1)
	uint8_t Pad_0x409[0x3]; // 0x409(0x3)
	int32_t AllowMaxStuckedCount; // 0x40C(0x4)
	float StuckedHitTimeError; // 0x410(0x4)
	uint8_t bInWater : 1; // 0x414(0x1), Mask(0x1)
	uint8_t BitPad_0x414_1 : 7; // 0x414(0x1)
	uint8_t Pad_0x415[0x3B]; // 0x415(0x3B)
	struct FMulticastInlineDelegate OnPenetratingMedium; // 0x450(0x10)
	uint8_t Pad_0x460[0x70]; // 0x460(0x70)


	// Object: Function GPWeaponRuntime.ReplicatedProjectileMovementComponent.OnRep_StopHitResult
	// Flags: [Final|Native|Protected]
	// Offset: 0xf386c9c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_StopHitResult();

	// Object: Function GPWeaponRuntime.ReplicatedProjectileMovementComponent.OnRep_RepProjectileTrajectory
	// Flags: [Native|Protected]
	// Offset: 0x8642b8c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_RepProjectileTrajectory();

	// Object: DelegateFunction GPWeaponRuntime.ReplicatedProjectileMovementComponent.OnProjectilePenetratingMediumDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x8C) ]
	void OnProjectilePenetratingMediumDelegate__DelegateSignature(EProjectileMedium OldMedium, EProjectileMedium NewMedium, const struct FHitResult& InHitResult);
	DEFINE_UE_CLASS_HELPERS(UReplicatedProjectileMovementComponent, "ReplicatedProjectileMovementComponent")

};

// Object: Class GPWeaponRuntime.GPWeaponProjectileMovementComponent
// Size: 0x710 (Inherited: 0x4D0)
struct UGPWeaponProjectileMovementComponent : UReplicatedProjectileMovementComponent
{
	float CharMeshTraceThicknessOverride; // 0x4D0(0x4)
	float EnemyCharMeshTraceThicknessOverride; // 0x4D4(0x4)
	uint8_t bIgnoreServerFix : 1; // 0x4D8(0x1), Mask(0x1)
	uint8_t BitPad_0x4D8_1 : 7; // 0x4D8(0x1)
	uint8_t Pad_0x4D9[0x3]; // 0x4D9(0x3)
	float AirDragFactor; // 0x4DC(0x4)
	float WaterDragFactor; // 0x4E0(0x4)
	float WaterSpeedFactor; // 0x4E4(0x4)
	float WallBounciness; // 0x4E8(0x4)
	float CeilingBounciness; // 0x4EC(0x4)
	float CharacterBounciness; // 0x4F0(0x4)
	float VehicleBounciness; // 0x4F4(0x4)
	uint8_t bEnableVehicleBounciness : 1; // 0x4F8(0x1), Mask(0x1)
	uint8_t BitPad_0x4F8_1 : 7; // 0x4F8(0x1)
	uint8_t Pad_0x4F9[0x3]; // 0x4F9(0x3)
	float CharacterFriction; // 0x4FC(0x4)
	int32_t MaxCharacterBounceTimes; // 0x500(0x4)
	float ReportHitLocationTolerant; // 0x504(0x4)
	float WaterDragFactorLow; // 0x508(0x4)
	float WaterDragFactorHigh; // 0x50C(0x4)
	float WaterDragChangeVelocity; // 0x510(0x4)
	float UnderWaterMinHorizontalVelocity; // 0x514(0x4)
	float WaterBuoyancyScale; // 0x518(0x4)
	uint8_t bResetLocationOnServerStop : 1; // 0x51C(0x1), Mask(0x1)
	uint8_t BitPad_0x51C_1 : 7; // 0x51C(0x1)
	uint8_t Pad_0x51D[0x3]; // 0x51D(0x3)
	int32_t LocalTrajectorySizeOverride; // 0x520(0x4)
	float ZeroGravityDistance; // 0x524(0x4)
	uint8_t bMoveCollideWithPawn : 1; // 0x528(0x1), Mask(0x1)
	uint8_t BitPad_0x528_1 : 7; // 0x528(0x1)
	uint8_t bTraceCharacterMesh : 1; // 0x529(0x1), Mask(0x1)
	uint8_t BitPad_0x529_1 : 7; // 0x529(0x1)
	uint8_t bMoveCollideWithVehicle : 1; // 0x52A(0x1), Mask(0x1)
	uint8_t BitPad_0x52A_1 : 7; // 0x52A(0x1)
	uint8_t bFixedMoveEnable : 1; // 0x52B(0x1), Mask(0x1)
	uint8_t BitPad_0x52B_1 : 7; // 0x52B(0x1)
	uint8_t bMoveComponentSimple : 1; // 0x52C(0x1), Mask(0x1)
	uint8_t BitPad_0x52C_1 : 7; // 0x52C(0x1)
	uint8_t bTraceCompolex : 1; // 0x52D(0x1), Mask(0x1)
	uint8_t BitPad_0x52D_1 : 7; // 0x52D(0x1)
	uint8_t bUseAsyncTrace : 1; // 0x52E(0x1), Mask(0x1)
	uint8_t BitPad_0x52E_1 : 7; // 0x52E(0x1)
	uint8_t bComponentSweepByWeaponChannel : 1; // 0x52F(0x1), Mask(0x1)
	uint8_t BitPad_0x52F_1 : 7; // 0x52F(0x1)
	float ActorTempHitTime; // 0x530(0x4)
	uint8_t Pad_0x534[0x4]; // 0x534(0x4)
	struct TMap<struct AActor*, float> ActorTempHitTimeMap; // 0x538(0x50)
	uint8_t bCheckInteruptHit : 1; // 0x588(0x1), Mask(0x1)
	uint8_t BitPad_0x588_1 : 7; // 0x588(0x1)
	uint8_t bShouldBounceOnCharacter : 1; // 0x589(0x1), Mask(0x1)
	uint8_t BitPad_0x589_1 : 7; // 0x589(0x1)
	uint8_t Pad_0x58A[0xE]; // 0x58A(0xE)
	uint8_t bAsyncIsValid : 1; // 0x598(0x1), Mask(0x1)
	uint8_t BitPad_0x598_1 : 7; // 0x598(0x1)
	uint8_t Pad_0x599[0x3]; // 0x599(0x3)
	float CurrentMovementDeltaTime; // 0x59C(0x4)
	struct FVector CurrentMoveDelta; // 0x5A0(0xC)
	float LeftNoGravityTime; // 0x5AC(0x4)
	float NoGravityTime; // 0x5B0(0x4)
	uint8_t Pad_0x5B4[0x15C]; // 0x5B4(0x15C)


	// Object: Function GPWeaponRuntime.GPWeaponProjectileMovementComponent.SetInitFlyingInfo
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x8639684
	// Params: [ Num(3) Size(0x14) ]
	void SetInitFlyingInfo(struct FVector InFlyDir, float InInitSpeed, float InZeroDistance);

	// Object: Function GPWeaponRuntime.GPWeaponProjectileMovementComponent.SetFixedMoveFrame
	// Flags: [Native|Public]
	// Offset: 0x86395d8
	// Params: [ Num(1) Size(0x4) ]
	void SetFixedMoveFrame(int32_t Frame);

	// Object: Function GPWeaponRuntime.GPWeaponProjectileMovementComponent.IsSimpleMove
	// Flags: [Final|Native|Protected]
	// Offset: 0x86395a0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsSimpleMove();

	// Object: Function GPWeaponRuntime.GPWeaponProjectileMovementComponent.IsEnemy
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0x86394f0
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsEnemy(struct AActor* Target);

	// Object: Function GPWeaponRuntime.GPWeaponProjectileMovementComponent.GetMoveTime
	// Flags: [Native|Public]
	// Offset: 0x86394b4
	// Params: [ Num(1) Size(0x4) ]
	float GetMoveTime();
	DEFINE_UE_CLASS_HELPERS(UGPWeaponProjectileMovementComponent, "GPWeaponProjectileMovementComponent")

};

// Object: Class GPWeaponRuntime.GPProjectileMovementComponent
// Size: 0x750 (Inherited: 0x710)
struct UGPProjectileMovementComponent : UGPWeaponProjectileMovementComponent
{
	int32_t MoveFixedFrame; // 0x70C(0x4)
	float SingleFrameMoveMaxTime; // 0x710(0x4)
	int32_t SingleFrameMaxSimulateCount; // 0x714(0x4)
	uint8_t Pad_0x71C[0x10]; // 0x71C(0x10)
	float LastMoveTime; // 0x72C(0x4)
	int32_t MoveStepCount; // 0x730(0x4)
	uint8_t Pad_0x734[0x1C]; // 0x734(0x1C)


	// Object: Function GPWeaponRuntime.GPProjectileMovementComponent.MoveStep
	// Flags: [Native|Protected]
	// Offset: 0x861e0e8
	// Params: [ Num(2) Size(0x5) ]
	uint8_t MoveStep(float StepTime);

	// Object: Function GPWeaponRuntime.GPProjectileMovementComponent.CalcStepVelocity
	// Flags: [Native|Protected]
	// Offset: 0x861e0cc
	// Params: [ Num(0) Size(0x0) ]
	void CalcStepVelocity();
	DEFINE_UE_CLASS_HELPERS(UGPProjectileMovementComponent, "GPProjectileMovementComponent")

};

// Object: Class GPWeaponRuntime.GPProjectileMovementUtils
// Size: 0x28 (Inherited: 0x28)
struct UGPProjectileMovementUtils : UObject
{	DEFINE_UE_CLASS_HELPERS(UGPProjectileMovementUtils, "GPProjectileMovementUtils")

};

// Object: Class GPWeaponRuntime.GPProjectilePublishCenterInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPProjectilePublishCenterInterface : IInterface
{	DEFINE_UE_CLASS_HELPERS(IGPProjectilePublishCenterInterface, "GPProjectilePublishCenterInterface")

};

// Object: Class GPWeaponRuntime.GPProjectilePublisherInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPProjectilePublisherInterface : IInterface
{	DEFINE_UE_CLASS_HELPERS(IGPProjectilePublisherInterface, "GPProjectilePublisherInterface")

};

// Object: Class GPWeaponRuntime.GPProjectileSubscriberInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPProjectileSubscriberInterface : IInterface
{	DEFINE_UE_CLASS_HELPERS(IGPProjectileSubscriberInterface, "GPProjectileSubscriberInterface")

};

// Object: Class GPWeaponRuntime.GPProjectileReplicateComponent
// Size: 0x208 (Inherited: 0xF8)
struct UGPProjectileReplicateComponent : UActorComponent
{
	uint8_t Pad_0xF8[0x10]; // 0xF8(0x10)
	struct TScriptInterface<IWeaponLogInterface> WeaponLogInterface; // 0x108(0x10)
	struct TSet<uint64_t> PublisherGuids; // 0x118(0x50)
	struct AGPWeaponBulletSystem* CacheBulletSystem; // 0x168(0x8)
	uint8_t Pad_0x170[0x98]; // 0x170(0x98)


	// Object: Function GPWeaponRuntime.GPProjectileReplicateComponent.ClientPublishTrajectoryItems
	// Flags: [Net|Native|Event|Protected|NetClient]
	// Offset: 0xf576e80
	// Params: [ Num(1) Size(0x10) ]
	void ClientPublishTrajectoryItems(struct TArray<struct FRepProjectileTrajectoryItem> TrajectoryItems);

	// Object: Function GPWeaponRuntime.GPProjectileReplicateComponent.ClientPublishExplosionInfos
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	// Offset: 0xf57710c
	// Params: [ Num(1) Size(0x10) ]
	void ClientPublishExplosionInfos(struct TArray<struct FRepRPGExplosionInfo> RepExplosionInfos);

	// Object: Function GPWeaponRuntime.GPProjectileReplicateComponent.ClientPublishEventsUnreliable
	// Flags: [Net|Native|Event|Protected|NetClient]
	// Offset: 0x861e6d4
	// Params: [ Num(1) Size(0x10) ]
	void ClientPublishEventsUnreliable(struct TArray<struct FRepProjectileEvent> Events);

	// Object: Function GPWeaponRuntime.GPProjectileReplicateComponent.ClientPublishEvents
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	// Offset: 0xf576f44
	// Params: [ Num(1) Size(0x10) ]
	void ClientPublishEvents(struct TArray<struct FRepProjectileEvent> Events);
	DEFINE_UE_CLASS_HELPERS(UGPProjectileReplicateComponent, "GPProjectileReplicateComponent")

};

// Object: Class GPWeaponRuntime.GPProjectileRotatingMovementComponent
// Size: 0x190 (Inherited: 0x150)
struct UGPProjectileRotatingMovementComponent : URotatingMovementComponent
{
	uint8_t Pad_0x150[0x40]; // 0x150(0x40)
	DEFINE_UE_CLASS_HELPERS(UGPProjectileRotatingMovementComponent, "GPProjectileRotatingMovementComponent")

};

// Object: Class GPWeaponRuntime.GPProjectileSystemInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPProjectileSystemInterface : IInterface
{	DEFINE_UE_CLASS_HELPERS(IGPProjectileSystemInterface, "GPProjectileSystemInterface")

};

// Object: Class GPWeaponRuntime.GPThrowableWeaponInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPThrowableWeaponInterface : IInterface
{	DEFINE_UE_CLASS_HELPERS(IGPThrowableWeaponInterface, "GPThrowableWeaponInterface")

};

// Object: Class GPWeaponRuntime.GPWeaponAimAssistorBase
// Size: 0x50 (Inherited: 0x28)
struct UGPWeaponAimAssistorBase : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	uint8_t DCFiring[0x8]; // 0x30(0x8)
	uint8_t FCFiring[0x8]; // 0x38(0x8)
	struct UGPWeaponGlobals* WeaponGlobals; // 0x40(0x8)
	uint8_t Pad_0x48[0x8]; // 0x48(0x8)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponAimAssistorBase, "GPWeaponAimAssistorBase")

};

// Object: Class GPWeaponRuntime.GPWeaponAttachBackInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPWeaponAttachBackInterface : IInterface
{	DEFINE_UE_CLASS_HELPERS(IGPWeaponAttachBackInterface, "GPWeaponAttachBackInterface")

};

// Object: Class GPWeaponRuntime.GPWeaponAttributeSetEquip
// Size: 0xA8 (Inherited: 0x48)
struct UGPWeaponAttributeSetEquip : UGPAttributeSetBase
{
	float EquipTime; // 0x48(0x4)
	float EquipTime_DirectFire; // 0x4C(0x4)
	float UnEquipTime; // 0x50(0x4)
	float UnEquipTime_DirectFire; // 0x54(0x4)
	float FastEquipTime; // 0x58(0x4)
	float FastEquipTime_DirectFire; // 0x5C(0x4)
	float FastUnEquipTime; // 0x60(0x4)
	float FastUnEquipTime_DirectFire; // 0x64(0x4)
	float FirstEquipTime; // 0x68(0x4)
	float FirstEquipTime_DirectFire; // 0x6C(0x4)
	struct FGameplayAttributeData EquipTimeRate; // 0x70(0x10)
	struct FGameplayAttributeData UnEquipTimeRate; // 0x80(0x10)
	uint8_t Pad_0x90[0x18]; // 0x90(0x18)


	// Object: Function GPWeaponRuntime.GPWeaponAttributeSetEquip.OnRep_UnEquipTimeRate
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xf3ff418
	// Params: [ Num(1) Size(0x10) ]
	void OnRep_UnEquipTimeRate(const struct FGameplayAttributeData& OldData);

	// Object: Function GPWeaponRuntime.GPWeaponAttributeSetEquip.OnRep_EquipTimeRate
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xf3ff198
	// Params: [ Num(1) Size(0x10) ]
	void OnRep_EquipTimeRate(const struct FGameplayAttributeData& OldData);
	DEFINE_UE_CLASS_HELPERS(UGPWeaponAttributeSetEquip, "GPWeaponAttributeSetEquip")

};

// Object: Class GPWeaponRuntime.GPWeaponAttributeSetFireMode
// Size: 0x218 (Inherited: 0x48)
struct UGPWeaponAttributeSetFireMode : UGPAttributeSetBase
{
	struct FGameplayAttributeData FireInterval; // 0x48(0x10)
	struct FGameplayAttributeData FireInterval_DirectFire; // 0x58(0x10)
	struct FGameplayAttributeData FastFireInterval; // 0x68(0x10)
	struct FGameplayAttributeData FastFireInterval_DirectFire; // 0x78(0x10)
	struct FGameplayAttributeData FireCD; // 0x88(0x10)
	struct FGameplayAttributeData FireCD_DirectFire; // 0x98(0x10)
	struct FGameplayAttributeData AutoFireSingleInterval; // 0xA8(0x10)
	struct FGameplayAttributeData AutoFireBurstInterval; // 0xB8(0x10)
	struct FGameplayAttributeData FireDelayTime; // 0xC8(0x10)
	struct FGameplayAttributeData BurstInterval; // 0xD8(0x10)
	struct FGameplayAttributeData PostFireTime; // 0xE8(0x10)
	struct FGameplayAttributeData BurstFireInterval; // 0xF8(0x10)
	struct FGameplayAttributeData BurstFireCD; // 0x108(0x10)
	struct FGameplayAttributeData FiringMode; // 0x118(0x10)
	struct FGameplayAttributeData BurstFireBulletCount; // 0x128(0x10)
	struct FGameplayAttributeData ChamberTime; // 0x138(0x10)
	struct FGameplayAttributeData PreFireTime; // 0x148(0x10)
	struct FGameplayAttributeData PreFireTime_DirectFire; // 0x158(0x10)
	struct FGameplayAttributeData PreFireKeepTime; // 0x168(0x10)
	struct FGameplayAttributeData PreFireKeepTime_DirectFire; // 0x178(0x10)
	struct FGameplayAttributeData PreFireCancelTime; // 0x188(0x10)
	struct FGameplayAttributeData PreFireCancelTime_DirectFire; // 0x198(0x10)
	struct FGameplayAttributeData KeepPreFireDamageScale; // 0x1A8(0x10)
	struct FGameplayAttributeData BulletInOneShot; // 0x1B8(0x10)
	struct FGameplayAttributeData PullBoltTimeRate; // 0x1C8(0x10)
	struct FGameplayAttributeData ProjectileInitialVelocityRate; // 0x1D8(0x10)
	uint8_t Pad_0x1E8[0x30]; // 0x1E8(0x30)


	// Object: Function GPWeaponRuntime.GPWeaponAttributeSetFireMode.OnRep_PullBoltTimeRate
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xf3ffb98
	// Params: [ Num(1) Size(0x10) ]
	void OnRep_PullBoltTimeRate(const struct FGameplayAttributeData& OldData);

	// Object: Function GPWeaponRuntime.GPWeaponAttributeSetFireMode.OnRep_ProjectileInitialVelocityRate
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xf3ff918
	// Params: [ Num(1) Size(0x10) ]
	void OnRep_ProjectileInitialVelocityRate(const struct FGameplayAttributeData& OldData);

	// Object: Function GPWeaponRuntime.GPWeaponAttributeSetFireMode.OnRep_FiringMode
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xf4b7934
	// Params: [ Num(1) Size(0x10) ]
	void OnRep_FiringMode(const struct FGameplayAttributeData& OldData);

	// Object: Function GPWeaponRuntime.GPWeaponAttributeSetFireMode.OnRep_FireInterval
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xf3ff698
	// Params: [ Num(1) Size(0x10) ]
	void OnRep_FireInterval(const struct FGameplayAttributeData& OldData);

	// Object: Function GPWeaponRuntime.GPWeaponAttributeSetFireMode.OnRep_FireCD
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xf401780
	// Params: [ Num(1) Size(0x10) ]
	void OnRep_FireCD(const struct FGameplayAttributeData& OldData);

	// Object: Function GPWeaponRuntime.GPWeaponAttributeSetFireMode.OnRep_ChamberTime
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x861e938
	// Params: [ Num(1) Size(0x10) ]
	void OnRep_ChamberTime(const struct FGameplayAttributeData& OldData);

	// Object: Function GPWeaponRuntime.GPWeaponAttributeSetFireMode.OnRep_BurstFireCD
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xf5c4e10
	// Params: [ Num(1) Size(0x10) ]
	void OnRep_BurstFireCD(const struct FGameplayAttributeData& OldData);
	DEFINE_UE_CLASS_HELPERS(UGPWeaponAttributeSetFireMode, "GPWeaponAttributeSetFireMode")

};

// Object: Class GPWeaponRuntime.GPWeaponAttributeSetWeaponAmmo
// Size: 0xC0 (Inherited: 0x48)
struct UGPWeaponAttributeSetWeaponAmmo : UGPAttributeSetBase
{
	float WeaponAmmoCount; // 0x48(0x4)
	float WeaponCarriedAmmoCount; // 0x4C(0x4)
	float WeaponConsumeAmmoType; // 0x50(0x4)
	float WeaponAmmoCost; // 0x54(0x4)
	float ClipAmmoCount; // 0x58(0x4)
	float MaxCarriedAmmoCount; // 0x5C(0x4)
	float WeaponAmmoType; // 0x60(0x4)
	float CanAddAmmo; // 0x64(0x4)
	float AmmoPrice; // 0x68(0x4)
	uint8_t Pad_0x6C[0x54]; // 0x6C(0x54)


	// Object: Function GPWeaponRuntime.GPWeaponAttributeSetWeaponAmmo.SetWeaponCarriedAmmoCountWithCallBack
	// Flags: [Final|Native|Public]
	// Offset: 0x861ecb0
	// Params: [ Num(1) Size(0x4) ]
	void SetWeaponCarriedAmmoCountWithCallBack(float NewValue);

	// Object: Function GPWeaponRuntime.GPWeaponAttributeSetWeaponAmmo.SetWeaponAmmoCountWithCallBack
	// Flags: [Final|Native|Public]
	// Offset: 0x861ec0c
	// Params: [ Num(1) Size(0x4) ]
	void SetWeaponAmmoCountWithCallBack(float NewValue);

	// Object: Function GPWeaponRuntime.GPWeaponAttributeSetWeaponAmmo.OnRep_AmmoCount
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x861eb50
	// Params: [ Num(1) Size(0x10) ]
	void OnRep_AmmoCount(const struct FGameplayAttributeData& OldData);

	// Object: Function GPWeaponRuntime.GPWeaponAttributeSetWeaponAmmo.ConsumeAmmoCount
	// Flags: [Final|Native|Public]
	// Offset: 0x861eaac
	// Params: [ Num(1) Size(0x2) ]
	void ConsumeAmmoCount(uint16_t ConsumeCount);
	DEFINE_UE_CLASS_HELPERS(UGPWeaponAttributeSetWeaponAmmo, "GPWeaponAttributeSetWeaponAmmo")

};

// Object: Class GPWeaponRuntime.GPWeaponAttributeSetWeaponChangeClip
// Size: 0xD8 (Inherited: 0x48)
struct UGPWeaponAttributeSetWeaponChangeClip : UGPAttributeSetBase
{
	struct FGameplayAttributeData WeaponChangeClipMode; // 0x48(0x10)
	struct FGameplayAttributeData WeaponChangeClipMaxReloadedOnce; // 0x58(0x10)
	struct FGameplayAttributeData WeaponChangeClipTime; // 0x68(0x10)
	struct FGameplayAttributeData WeaponChangeClipTimeWhenEmpty; // 0x78(0x10)
	struct FGameplayAttributeData WeaponChangeClipOneByOneTime; // 0x88(0x10)
	struct FGameplayAttributeData WeaponChangeClipTimeRate; // 0x98(0x10)
	uint8_t Pad_0xA8[0x30]; // 0xA8(0x30)


	// Object: Function GPWeaponRuntime.GPWeaponAttributeSetWeaponChangeClip.OnRep_WeaponChangeClipTimeRate
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xf3ffe18
	// Params: [ Num(1) Size(0x10) ]
	void OnRep_WeaponChangeClipTimeRate(const struct FGameplayAttributeData& OldData);
	DEFINE_UE_CLASS_HELPERS(UGPWeaponAttributeSetWeaponChangeClip, "GPWeaponAttributeSetWeaponChangeClip")

};

// Object: Class GPWeaponRuntime.GPWeaponAttributeSetWeaponDamage
// Size: 0x118 (Inherited: 0x48)
struct UGPWeaponAttributeSetWeaponDamage : UGPAttributeSetBase
{
	struct FGameplayAttributeData Damage; // 0x48(0x10)
	struct FGameplayAttributeData VehicleDamage; // 0x58(0x10)
	struct FGameplayAttributeData HealthDamage; // 0x68(0x10)
	struct FGameplayAttributeData CriticalHitDamageRate; // 0x78(0x10)
	struct FGameplayAttributeData CriticalHitRate; // 0x88(0x10)
	struct FGameplayAttributeData HeadDamageRate; // 0x98(0x10)
	struct FGameplayAttributeData ThoraxDamageRate; // 0xA8(0x10)
	struct FGameplayAttributeData ThoraxUpperDamageRate; // 0xB8(0x10)
	struct FGameplayAttributeData LegDamageRate; // 0xC8(0x10)
	struct FGameplayAttributeData LegUpperDamageRate; // 0xD8(0x10)
	struct FGameplayAttributeData ArmDamageRate; // 0xE8(0x10)
	struct FGameplayAttributeData ArmUpperDamageRate; // 0xF8(0x10)
	struct FGameplayAttributeData ArmorDamage; // 0x108(0x10)


	// Object: Function GPWeaponRuntime.GPWeaponAttributeSetWeaponDamage.OnRep_HeadDamageRate
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xf2dcf34
	// Params: [ Num(1) Size(0x10) ]
	void OnRep_HeadDamageRate(const struct FGameplayAttributeData& OldData);

	// Object: Function GPWeaponRuntime.GPWeaponAttributeSetWeaponDamage.OnRep_Damage
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xf1e1610
	// Params: [ Num(1) Size(0x10) ]
	void OnRep_Damage(const struct FGameplayAttributeData& OldData);

	// Object: Function GPWeaponRuntime.GPWeaponAttributeSetWeaponDamage.OnRep_CriticalHitRate
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x861ef80
	// Params: [ Num(1) Size(0x10) ]
	void OnRep_CriticalHitRate(const struct FGameplayAttributeData& OldData);

	// Object: Function GPWeaponRuntime.GPWeaponAttributeSetWeaponDamage.OnRep_CriticalHitDamageRate
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x861eec4
	// Params: [ Num(1) Size(0x10) ]
	void OnRep_CriticalHitDamageRate(const struct FGameplayAttributeData& OldData);
	DEFINE_UE_CLASS_HELPERS(UGPWeaponAttributeSetWeaponDamage, "GPWeaponAttributeSetWeaponDamage")

};

// Object: Class GPWeaponRuntime.GPWeaponAttributeSetWeaponMovement
// Size: 0x50 (Inherited: 0x48)
struct UGPWeaponAttributeSetWeaponMovement : UGPAttributeSetBase
{
	float WeaponMovingScale; // 0x48(0x4)
	float WeaponFiringMovingScale; // 0x4C(0x4)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponAttributeSetWeaponMovement, "GPWeaponAttributeSetWeaponMovement")

};

// Object: Class GPWeaponRuntime.GPWeaponAttributeSetWeaponPerk
// Size: 0x78 (Inherited: 0x48)
struct UGPWeaponAttributeSetWeaponPerk : UGPAttributeSetBase
{
	float CanEquipPerk; // 0x48(0x4)
	float PerkCost; // 0x4C(0x4)
	float PerkDuability; // 0x50(0x4)
	float ArmorPenetrate; // 0x54(0x4)
	float PerkLevel; // 0x58(0x4)
	uint8_t Pad_0x5C[0x1C]; // 0x5C(0x1C)


	// Object: Function GPWeaponRuntime.GPWeaponAttributeSetWeaponPerk.OnRep_Penetrate
	// Flags: [Final|Native|Public]
	// Offset: 0x861f1a4
	// Params: [ Num(1) Size(0x4) ]
	void OnRep_Penetrate(float OldValue);

	// Object: Function GPWeaponRuntime.GPWeaponAttributeSetWeaponPerk.OnRep_Level
	// Flags: [Final|Native|Public]
	// Offset: 0xf2dcfcc
	// Params: [ Num(1) Size(0x4) ]
	void OnRep_Level(float OldValue);

	// Object: Function GPWeaponRuntime.GPWeaponAttributeSetWeaponPerk.OnRep_Duability
	// Flags: [Final|Native|Public]
	// Offset: 0x861f100
	// Params: [ Num(1) Size(0x4) ]
	void OnRep_Duability(float OldValue);
	DEFINE_UE_CLASS_HELPERS(UGPWeaponAttributeSetWeaponPerk, "GPWeaponAttributeSetWeaponPerk")

};

// Object: Class GPWeaponRuntime.GPWeaponBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGPWeaponBlueprintLibrary : UBlueprintFunctionLibrary
{

	// Object: Function GPWeaponRuntime.GPWeaponBlueprintLibrary.GetWeaponManagerComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x861f2f4
	// Params: [ Num(2) Size(0x10) ]
	static struct UGPWeaponManagerComponent* GetWeaponManagerComponent(struct AActor* Actor);

	// Object: Function GPWeaponRuntime.GPWeaponBlueprintLibrary.GetPlayerController
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf01b020
	// Params: [ Num(2) Size(0x10) ]
	static struct APlayerController* GetPlayerController(struct UObject* WorldContext);

	// Object: Function GPWeaponRuntime.GPWeaponBlueprintLibrary.GetPlayerCameraManager
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x861f250
	// Params: [ Num(2) Size(0x10) ]
	static struct APlayerCameraManager* GetPlayerCameraManager(struct UObject* WorldContext);
	DEFINE_UE_CLASS_HELPERS(UGPWeaponBlueprintLibrary, "GPWeaponBlueprintLibrary")

};

// Object: Class GPWeaponRuntime.GPWeaponBulletBase
// Size: 0x768 (Inherited: 0x5C8)
struct AGPWeaponBulletBase : AGPProjectile
{
	uint8_t Pad_0x5C8[0x8]; // 0x5C8(0x8)
	struct FWeaponBulletBaseInitParam BulletBaseParam; // 0x5D0(0x130)
	uint8_t Pad_0x700[0x2]; // 0x700(0x2)
	EActorPoolMethod ActorPoolMethod; // 0x702(0x1)
	uint8_t Pad_0x703[0x1]; // 0x703(0x1)
	struct FProjectilePoolState RepPoolState; // 0x704(0x4)
	uint8_t Pad_0x708[0x8]; // 0x708(0x8)
	int32_t ServerBulletID; // 0x710(0x4)
	uint8_t Pad_0x714[0x4]; // 0x714(0x4)
	struct TSet<struct UObject*> CacheAssets; // 0x718(0x50)


	// Object: Function GPWeaponRuntime.GPWeaponBulletBase.ReleaseToPool
	// Flags: [Native|Public]
	// Offset: 0x8621980
	// Params: [ Num(0) Size(0x0) ]
	void ReleaseToPool();

	// Object: Function GPWeaponRuntime.GPWeaponBulletBase.OnRep_PoolState
	// Flags: [Native|Public]
	// Offset: 0x8621964
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_PoolState();

	// Object: Function GPWeaponRuntime.GPWeaponBulletBase.OnRep_BulletBaseParam
	// Flags: [Final|Native|Protected]
	// Offset: 0xe9adfcc
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_BulletBaseParam();

	// Object: Function GPWeaponRuntime.GPWeaponBulletBase.GetCharacterOwner
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8621928
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetCharacterOwner();

	// Object: Function GPWeaponRuntime.GPWeaponBulletBase.BP_OnUsed
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnUsed();

	// Object: Function GPWeaponRuntime.GPWeaponBulletBase.BP_OnReclaim
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnReclaim();
	DEFINE_UE_CLASS_HELPERS(AGPWeaponBulletBase, "GPWeaponBulletBase")

};

// Object: Class GPWeaponRuntime.GPWeaponBulletDefensorInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPWeaponBulletDefensorInterface : IInterface
{	DEFINE_UE_CLASS_HELPERS(IGPWeaponBulletDefensorInterface, "GPWeaponBulletDefensorInterface")

};

// Object: Class GPWeaponRuntime.GPWeaponBulletDetectorInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPWeaponBulletDetectorInterface : IInterface
{	DEFINE_UE_CLASS_HELPERS(IGPWeaponBulletDetectorInterface, "GPWeaponBulletDetectorInterface")

};

// Object: Class GPWeaponRuntime.GPWeaponBulletManager
// Size: 0x260 (Inherited: 0xF8)
struct UGPWeaponBulletManager : UActorComponent
{
	uint8_t Pad_0xF8[0x8]; // 0xF8(0x8)
	struct ACHARACTER* CharacterOwner; // 0x100(0x8)
	struct TArray<struct FBulletInfo> BulletInfos; // 0x108(0x10)
	struct FRepBulletInfoArray RepBulletInfoArray; // 0x118(0x118)
	float CheckInterval; // 0x230(0x4)
	int32_t BulletInfosMaxSize; // 0x234(0x4)
	uint8_t Pad_0x238[0x28]; // 0x238(0x28)


	// Object: Function GPWeaponRuntime.GPWeaponBulletManager.CreateBulletAppearanceByFastTArray
	// Flags: [Final|Native|Public]
	// Offset: 0x8621c40
	// Params: [ Num(0) Size(0x0) ]
	void CreateBulletAppearanceByFastTArray();

	// Object: Function GPWeaponRuntime.GPWeaponBulletManager.CreateBulletAppearance
	// Flags: [Final|Native|Public]
	// Offset: 0x8621c2c
	// Params: [ Num(0) Size(0x0) ]
	void CreateBulletAppearance();
	DEFINE_UE_CLASS_HELPERS(UGPWeaponBulletManager, "GPWeaponBulletManager")

};

// Object: Class GPWeaponRuntime.GPWeaponBulletProjectile
// Size: 0x970 (Inherited: 0x768)
struct AGPWeaponBulletProjectile : AGPWeaponBulletBase
{
	uint8_t bActiveState : 1; // 0x768(0x1), Mask(0x1)
	uint8_t BitPad_0x768_1 : 7; // 0x768(0x1)
	uint8_t Pad_0x769[0x7]; // 0x769(0x7)
	struct FWeaponBulletRuntimeContext BulletRuntime; // 0x770(0x90)
	int32_t ProjectileCheckTime_Simulated; // 0x800(0x4)
	uint8_t Pad_0x804[0xA4]; // 0x804(0xA4)
	struct FWeaponBulletProjectileInitParam BulletProjectileParam; // 0x8A8(0x60)
	uint8_t Pad_0x908[0x58]; // 0x908(0x58)
	struct UCurveFloat* TickIntervalCurve; // 0x960(0x8)
	uint8_t Pad_0x968[0x8]; // 0x968(0x8)


	// Object: Function GPWeaponRuntime.GPWeaponBulletProjectile.ProcessProjectileDamage
	// Flags: [Native|Protected]
	// Offset: 0x8621efc
	// Params: [ Num(1) Size(0x88) ]
	void ProcessProjectileDamage(struct FHitResult HitResult);

	// Object: Function GPWeaponRuntime.GPWeaponBulletProjectile.OnRep_BulletProjectileParam
	// Flags: [Final|Native|Protected]
	// Offset: 0xf994514
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_BulletProjectileParam();

	// Object: Function GPWeaponRuntime.GPWeaponBulletProjectile.OnBulletProjectileHitImp
	// Flags: [Native|Protected|HasOutParms]
	// Offset: 0x8621dd8
	// Params: [ Num(2) Size(0x8C) ]
	void OnBulletProjectileHitImp(const struct FHitResult& ImpactResult, const struct FGPWeaponBulletOnHitParams& OnHitParams);

	// Object: Function GPWeaponRuntime.GPWeaponBulletProjectile.GetReleaseDelayTime
	// Flags: [Native|Protected]
	// Offset: 0x8621d9c
	// Params: [ Num(1) Size(0x4) ]
	float GetReleaseDelayTime();

	// Object: Function GPWeaponRuntime.GPWeaponBulletProjectile.ADSCheck
	// Flags: [Final|Native|Protected]
	// Offset: 0x8621cec
	// Params: [ Num(2) Size(0x9) ]
	uint8_t ADSCheck(struct AActor* ADS);
	DEFINE_UE_CLASS_HELPERS(AGPWeaponBulletProjectile, "GPWeaponBulletProjectile")

};

// Object: Class GPWeaponRuntime.GPWeaponBulletPhysicsSimulate
// Size: 0x970 (Inherited: 0x970)
struct AGPWeaponBulletPhysicsSimulate : AGPWeaponBulletProjectile
{	DEFINE_UE_CLASS_HELPERS(AGPWeaponBulletPhysicsSimulate, "GPWeaponBulletPhysicsSimulate")

};

// Object: Class GPWeaponRuntime.GPWeaponBulletSystem
// Size: 0x648 (Inherited: 0x370)
struct AGPWeaponBulletSystem : ALevelSubsystem
{
	uint8_t Pad_0x370[0x60]; // 0x370(0x60)
	struct FWorldActorPool BulletPool; // 0x3D0(0x68)
	struct FWorldActorPool BulletEffectPool; // 0x438(0x68)
	struct TMap<uint64_t, struct AGPProjectile*> ProjectileMap; // 0x4A0(0x50)
	uint8_t Pad_0x4F0[0x158]; // 0x4F0(0x158)
	DEFINE_UE_CLASS_HELPERS(AGPWeaponBulletSystem, "GPWeaponBulletSystem")

};

// Object: Class GPWeaponRuntime.GPWeaponBulletThrowableProjectile
// Size: 0xB50 (Inherited: 0x768)
struct AGPWeaponBulletThrowableProjectile : AGPWeaponBulletBase
{
	uint8_t Pad_0x768[0x20]; // 0x768(0x20)
	struct UCapsuleComponent* BulletCollisionComp; // 0x788(0x8)
	struct UGPWeaponProjectileMovementComponent* BulletMovementComp; // 0x790(0x8)
	struct UGPWeaponProjectileMovementComponent* BulletMovementCompBP; // 0x798(0x8)
	struct FVector StickTargetImpactNormal; // 0x7A0(0xC)
	float CatchupTimeFactor; // 0x7AC(0x4)
	struct UGPProjectileRotatingMovementComponent* BulletRotatingComp; // 0x7B0(0x8)
	struct UStaticMeshComponent* BulletMeshComp; // 0x7B8(0x8)
	uint8_t bMoveCollideWithPawn : 1; // 0x7C0(0x1), Mask(0x1)
	uint8_t BitPad_0x7C0_1 : 7; // 0x7C0(0x1)
	uint8_t bTraceCharacterMesh : 1; // 0x7C1(0x1), Mask(0x1)
	uint8_t BitPad_0x7C1_1 : 7; // 0x7C1(0x1)
	uint8_t bNeedHideActorWhenExplode : 1; // 0x7C2(0x1), Mask(0x1)
	uint8_t BitPad_0x7C2_1 : 7; // 0x7C2(0x1)
	uint8_t bMoveCollideWithVehicle : 1; // 0x7C3(0x1), Mask(0x1)
	uint8_t BitPad_0x7C3_1 : 7; // 0x7C3(0x1)
	uint8_t bFixedMoveEnable : 1; // 0x7C4(0x1), Mask(0x1)
	uint8_t BitPad_0x7C4_1 : 7; // 0x7C4(0x1)
	uint8_t bEnableThrowablePool : 1; // 0x7C5(0x1), Mask(0x1)
	uint8_t BitPad_0x7C5_1 : 7; // 0x7C5(0x1)
	uint8_t Pad_0x7C6[0x2]; // 0x7C6(0x2)
	struct AActor* WeaponOwnerActor; // 0x7C8(0x8)
	struct AActor* OwnerActor; // 0x7D0(0x8)
	uint8_t Pad_0x7D8[0xD]; // 0x7D8(0xD)
	EWeaponThrowableExplosionType ExplosionType; // 0x7E5(0x1)
	EWeaponThrowableUnderWaterExplosionType WaterExplosionType; // 0x7E6(0x1)
	EWeaponThrowableEffectType EffectType; // 0x7E7(0x1)
	float PreExplosionPredictBeginTime; // 0x7E8(0x4)
	float ExplosionPredictBeginTime; // 0x7EC(0x4)
	float ExplosionSeconds; // 0x7F0(0x4)
	float ExplosionDurationSeconds; // 0x7F4(0x4)
	uint32_t WeaponUniqueID; // 0x7F8(0x4)
	uint8_t bCheckBulletDetectorIntercept : 1; // 0x7FC(0x1), Mask(0x1)
	uint8_t BitPad_0x7FC_1 : 7; // 0x7FC(0x1)
	uint8_t bShouldBounceOnCharacter : 1; // 0x7FD(0x1), Mask(0x1)
	uint8_t BitPad_0x7FD_1 : 7; // 0x7FD(0x1)
	uint8_t bSetFakeLifeSpan : 1; // 0x7FE(0x1), Mask(0x1)
	uint8_t BitPad_0x7FE_1 : 7; // 0x7FE(0x1)
	uint8_t Pad_0x7FF[0x1]; // 0x7FF(0x1)
	float FakeLifeSpan; // 0x800(0x4)
	uint8_t bInteruptToDestroy : 1; // 0x804(0x1), Mask(0x1)
	uint8_t BitPad_0x804_1 : 7; // 0x804(0x1)
	uint8_t bIsPassSafeExplosionCheck : 1; // 0x805(0x1), Mask(0x1)
	uint8_t BitPad_0x805_1 : 7; // 0x805(0x1)
	uint8_t Pad_0x806[0x2E]; // 0x806(0x2E)
	struct FGPWeaponBulletThrowableProjectileInfo ProjectileInfo; // 0x834(0x78)
	uint8_t Pad_0x8AC[0x36]; // 0x8AC(0x36)
	uint8_t bSpawnedByHeavyAttack : 1; // 0x8E2(0x1), Mask(0x1)
	uint8_t BitPad_0x8E2_1 : 7; // 0x8E2(0x1)
	uint8_t Pad_0x8E3[0x95]; // 0x8E3(0x95)
	struct FStickyInfo StickyInfo; // 0x978(0xC0)
	uint8_t Pad_0xA38[0xCC]; // 0xA38(0xCC)
	uint8_t bStickyToTargetKeepRotation : 1; // 0xB04(0x1), Mask(0x1)
	uint8_t BitPad_0xB04_1 : 7; // 0xB04(0x1)
	uint8_t bStickyToTargetKeepRotationOnBone : 1; // 0xB05(0x1), Mask(0x1)
	uint8_t BitPad_0xB05_1 : 7; // 0xB05(0x1)
	uint8_t Pad_0xB06[0x12]; // 0xB06(0x12)
	float MaxLifeTimeSeconds; // 0xB18(0x4)
	EGPThrowableWeaponTypeForADS ThrowableWeaponTypeForADS; // 0xB1C(0x1)
	uint8_t Pad_0xB1D[0x7]; // 0xB1D(0x7)
	uint8_t bIsNeedLerpClientMesh : 1; // 0xB24(0x1), Mask(0x1)
	uint8_t BitPad_0xB24_1 : 7; // 0xB24(0x1)
	uint8_t Pad_0xB25[0x3]; // 0xB25(0x3)
	struct FVector LerpClientMeshOffset; // 0xB28(0xC)
	float LerpClientMeshStartTime; // 0xB34(0x4)
	float LerpClientMeshDuration; // 0xB38(0x4)
	int32_t SkillId; // 0xB3C(0x4)
	int32_t SkillEntityID; // 0xB40(0x4)
	uint8_t Pad_0xB44[0xC]; // 0xB44(0xC)


	// Object: Function GPWeaponRuntime.GPWeaponBulletThrowableProjectile.TryStartLerpClientMesh3P
	// Flags: [Native|Protected]
	// Offset: 0x8622c20
	// Params: [ Num(0) Size(0x0) ]
	void TryStartLerpClientMesh3P();

	// Object: Function GPWeaponRuntime.GPWeaponBulletThrowableProjectile.TryStartLerpClientMesh
	// Flags: [Final|Native|Protected]
	// Offset: 0x8622b7c
	// Params: [ Num(1) Size(0x8) ]
	void TryStartLerpClientMesh(struct UGPWeaponFireModeParamsThrowable* FireModeParams);

	// Object: Function GPWeaponRuntime.GPWeaponBulletThrowableProjectile.TickLerpClientMesh
	// Flags: [Final|Native|Protected]
	// Offset: 0x8622b68
	// Params: [ Num(0) Size(0x0) ]
	void TickLerpClientMesh();

	// Object: Function GPWeaponRuntime.GPWeaponBulletThrowableProjectile.StopLerpClientMesh
	// Flags: [Final|Native|Protected]
	// Offset: 0x8622b54
	// Params: [ Num(0) Size(0x0) ]
	void StopLerpClientMesh();

	// Object: Function GPWeaponRuntime.GPWeaponBulletThrowableProjectile.ShouldCheckMoveIgnoreTag
	// Flags: [Native|Public|Const]
	// Offset: 0x8622b14
	// Params: [ Num(1) Size(0x1) ]
	uint8_t ShouldCheckMoveIgnoreTag();

	// Object: Function GPWeaponRuntime.GPWeaponBulletThrowableProjectile.SetLerpClientMeshOffset
	// Flags: [Final|Native|Protected|HasDefaults]
	// Offset: 0x8622a70
	// Params: [ Num(1) Size(0xC) ]
	void SetLerpClientMeshOffset(struct FVector offset);

	// Object: Function GPWeaponRuntime.GPWeaponBulletThrowableProjectile.ResetMeshTransform
	// Flags: [Native|Protected]
	// Offset: 0x8622a54
	// Params: [ Num(0) Size(0x0) ]
	void ResetMeshTransform();

	// Object: Function GPWeaponRuntime.GPWeaponBulletThrowableProjectile.OnRep_WeaponOwnerActor
	// Flags: [Final|Native|Public]
	// Offset: 0xf8c9d34
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_WeaponOwnerActor();

	// Object: Function GPWeaponRuntime.GPWeaponBulletThrowableProjectile.OnRep_StickyInfo
	// Flags: [Native|Protected]
	// Offset: 0x8622a38
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_StickyInfo();

	// Object: Function GPWeaponRuntime.GPWeaponBulletThrowableProjectile.OnRep_OwnerActor
	// Flags: [Native|Public]
	// Offset: 0x8622a1c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_OwnerActor();

	// Object: Function GPWeaponRuntime.GPWeaponBulletThrowableProjectile.OnProjectileOverlapBegin
	// Flags: [Native|Protected|HasOutParms]
	// Offset: 0xe7ad28c
	// Params: [ Num(6) Size(0xA8) ]
	void OnProjectileOverlapBegin(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult);

	// Object: Function GPWeaponRuntime.GPWeaponBulletThrowableProjectile.OnProjectileHit
	// Flags: [Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0x862285c
	// Params: [ Num(5) Size(0xAC) ]
	void OnProjectileHit(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComponent, struct FVector NormalImpulse, const struct FHitResult& Hit);

	// Object: Function GPWeaponRuntime.GPWeaponBulletThrowableProjectile.OnExplosionHideFakeProjectile
	// Flags: [Native|Protected]
	// Offset: 0x86227b0
	// Params: [ Num(1) Size(0x8) ]
	void OnExplosionHideFakeProjectile(struct AGPProjectile* FakeProjectile);

	// Object: Function GPWeaponRuntime.GPWeaponBulletThrowableProjectile.IsHitVehicle
	// Flags: [Native|Protected|HasOutParms|Const]
	// Offset: 0x86226d4
	// Params: [ Num(2) Size(0x89) ]
	uint8_t IsHitVehicle(const struct FHitResult& ImpactResult);

	// Object: Function GPWeaponRuntime.GPWeaponBulletThrowableProjectile.IsHitGround
	// Flags: [Native|Protected|HasOutParms|Const]
	// Offset: 0x86225f8
	// Params: [ Num(2) Size(0x89) ]
	uint8_t IsHitGround(const struct FHitResult& ImpactResult);

	// Object: Function GPWeaponRuntime.GPWeaponBulletThrowableProjectile.IsHitEnemy
	// Flags: [Native|Protected|HasOutParms|Const]
	// Offset: 0x862251c
	// Params: [ Num(2) Size(0x89) ]
	uint8_t IsHitEnemy(const struct FHitResult& ImpactResult);

	// Object: Function GPWeaponRuntime.GPWeaponBulletThrowableProjectile.IsExplosionNeedStop
	// Flags: [Native|Public]
	// Offset: 0x86224dc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsExplosionNeedStop();

	// Object: Function GPWeaponRuntime.GPWeaponBulletThrowableProjectile.InitOptimizeProjectileTick
	// Flags: [Native|Protected]
	// Offset: 0x86224c0
	// Params: [ Num(0) Size(0x0) ]
	void InitOptimizeProjectileTick();

	// Object: Function GPWeaponRuntime.GPWeaponBulletThrowableProjectile.InitMomentComponent
	// Flags: [Native|Protected]
	// Offset: 0x86224a4
	// Params: [ Num(0) Size(0x0) ]
	void InitMomentComponent();

	// Object: Function GPWeaponRuntime.GPWeaponBulletThrowableProjectile.InitMaxLifeTimeSeconds
	// Flags: [Final|Native|Protected]
	// Offset: 0x8622490
	// Params: [ Num(0) Size(0x0) ]
	void InitMaxLifeTimeSeconds();

	// Object: Function GPWeaponRuntime.GPWeaponBulletThrowableProjectile.GetProjectileInitVelocity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x862246c
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetProjectileInitVelocity();

	// Object: Function GPWeaponRuntime.GPWeaponBulletThrowableProjectile.GetAllOwnerWeaponActors
	// Flags: [Native|Protected]
	// Offset: 0x86223cc
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct AActor*> GetAllOwnerWeaponActors();

	// Object: Function GPWeaponRuntime.GPWeaponBulletThrowableProjectile.CountLerpClientMeshDuration
	// Flags: [Native|Protected]
	// Offset: 0x86222e8
	// Params: [ Num(2) Size(0x8) ]
	void CountLerpClientMeshDuration(float MinClientFakeLerpTime, float MaxClientFakeLerpTime);

	// Object: Function GPWeaponRuntime.GPWeaponBulletThrowableProjectile.CheckSafeMoveDistance
	// Flags: [Final|Native|Protected]
	// Offset: 0x86222b0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CheckSafeMoveDistance();

	// Object: Function GPWeaponRuntime.GPWeaponBulletThrowableProjectile.CheckMaxLifeTimeSeconds
	// Flags: [Final|Native|Protected]
	// Offset: 0x8622278
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CheckMaxLifeTimeSeconds();

	// Object: Function GPWeaponRuntime.GPWeaponBulletThrowableProjectile.CheckExplodeThrowWall
	// Flags: [Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0x86221c0
	// Params: [ Num(1) Size(0xC) ]
	void CheckExplodeThrowWall(struct FVector& ExplodeLocation);

	// Object: Function GPWeaponRuntime.GPWeaponBulletThrowableProjectile.BP_MoveOnWaterSurface
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_MoveOnWaterSurface();

	// Object: Function GPWeaponRuntime.GPWeaponBulletThrowableProjectile.BP_FirstMoveIntoWater
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_FirstMoveIntoWater();
	DEFINE_UE_CLASS_HELPERS(AGPWeaponBulletThrowableProjectile, "GPWeaponBulletThrowableProjectile")

};

// Object: Class GPWeaponRuntime.GPWeaponChangeClipExecution
// Size: 0x40 (Inherited: 0x40)
struct UGPWeaponChangeClipExecution : UGameplayEffectExecutionCalculation
{	DEFINE_UE_CLASS_HELPERS(UGPWeaponChangeClipExecution, "GPWeaponChangeClipExecution")

};

// Object: Class GPWeaponRuntime.GPWeaponComponentBase
// Size: 0x28 (Inherited: 0x28)
struct IGPWeaponComponentBase : IInterface
{

	// Object: Function GPWeaponRuntime.GPWeaponComponentBase.WeaponDetaching
	// Flags: [Native|Public]
	// Offset: 0x86257f4
	// Params: [ Num(2) Size(0x2) ]
	void WeaponDetaching(uint8_t bHangToBack, EWeaponSwitchType SwitchType);

	// Object: Function GPWeaponRuntime.GPWeaponComponentBase.WeaponAttaching
	// Flags: [Native|Public]
	// Offset: 0x8625704
	// Params: [ Num(2) Size(0x2) ]
	void WeaponAttaching(uint8_t bLastWeaponReserved, EWeaponSwitchType SwitchType);

	// Object: Function GPWeaponRuntime.GPWeaponComponentBase.SetWeaponInteractive
	// Flags: [Native|Public]
	// Offset: 0x8625650
	// Params: [ Num(1) Size(0x1) ]
	void SetWeaponInteractive(uint8_t InterActive);

	// Object: Function GPWeaponRuntime.GPWeaponComponentBase.RefreshComponent
	// Flags: [Native|Public]
	// Offset: 0x8625634
	// Params: [ Num(0) Size(0x0) ]
	void RefreshComponent();

	// Object: Function GPWeaponRuntime.GPWeaponComponentBase.OnWeaponRemove
	// Flags: [Native|Public]
	// Offset: 0x8625618
	// Params: [ Num(0) Size(0x0) ]
	void OnWeaponRemove();

	// Object: Function GPWeaponRuntime.GPWeaponComponentBase.OnWeaponModeChanged
	// Flags: [Native|Public]
	// Offset: 0x8625530
	// Params: [ Num(2) Size(0x2) ]
	void OnWeaponModeChanged(EGPWeaponMode OldWeaponMode, EGPWeaponMode NewWeaponMode);

	// Object: Function GPWeaponRuntime.GPWeaponComponentBase.OnWeaponAdd
	// Flags: [Native|Public]
	// Offset: 0x8625484
	// Params: [ Num(1) Size(0x8) ]
	void OnWeaponAdd(struct ACHARACTER* InCharacterOwner);

	// Object: Function GPWeaponRuntime.GPWeaponComponentBase.OnPostReadWeaponDynamicAttribute
	// Flags: [Native|Public]
	// Offset: 0x8625468
	// Params: [ Num(0) Size(0x0) ]
	void OnPostReadWeaponDynamicAttribute();

	// Object: Function GPWeaponRuntime.GPWeaponComponentBase.OnPostNetInit
	// Flags: [Native|Public]
	// Offset: 0x862544c
	// Params: [ Num(0) Size(0x0) ]
	void OnPostNetInit();

	// Object: Function GPWeaponRuntime.GPWeaponComponentBase.OnPostInitWeapon
	// Flags: [Native|Public]
	// Offset: 0x8625430
	// Params: [ Num(0) Size(0x0) ]
	void OnPostInitWeapon();

	// Object: Function GPWeaponRuntime.GPWeaponComponentBase.OnPostComponentChanged
	// Flags: [Native|Public]
	// Offset: 0x8625414
	// Params: [ Num(0) Size(0x0) ]
	void OnPostComponentChanged();

	// Object: Function GPWeaponRuntime.GPWeaponComponentBase.GetCharacterOwner
	// Flags: [Native|Public]
	// Offset: 0x86253d8
	// Params: [ Num(1) Size(0x8) ]
	struct ACHARACTER* GetCharacterOwner();

	// Object: Function GPWeaponRuntime.GPWeaponComponentBase.DumpDebugMsg
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x8625314
	// Params: [ Num(1) Size(0x10) ]
	void DumpDebugMsg(struct FString& OutDebugMsg);
	DEFINE_UE_CLASS_HELPERS(IGPWeaponComponentBase, "GPWeaponComponentBase")

};

// Object: Class GPWeaponRuntime.GPWeaponComponentImplement
// Size: 0x160 (Inherited: 0xF8)
struct UGPWeaponComponentImplement : UActorComponent
{
	uint8_t Pad_0xF8[0x40]; // 0xF8(0x40)
	struct ACHARACTER* CharacterOwner; // 0x138(0x8)
	struct TScriptInterface<IGPWeaponInterface> WeaponOwner; // 0x140(0x10)
	struct TScriptInterface<IWeaponObInterface> WeaponOwnerOb; // 0x150(0x10)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponComponentImplement, "GPWeaponComponentImplement")

};

// Object: Class GPWeaponRuntime.GPWeaponCostAmmoExecution
// Size: 0x40 (Inherited: 0x40)
struct UGPWeaponCostAmmoExecution : UGameplayEffectExecutionCalculation
{	DEFINE_UE_CLASS_HELPERS(UGPWeaponCostAmmoExecution, "GPWeaponCostAmmoExecution")

};

// Object: Class GPWeaponRuntime.GPWeaponDamageSettings
// Size: 0x80 (Inherited: 0x28)
struct UGPWeaponDamageSettings : UObject
{
	struct TArray<struct FGPWeaponDamageBodyPartInfo> RadiusDamageBodyParts; // 0x28(0x10)
	struct TArray<struct FGPWeaponDamageBodyPartInfo> RadiusDamageBodyPartsForVehicle; // 0x38(0x10)
	float RadiusDamageOffsetAloneWithNormal; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	int64_t KillDamagePhysicalValueId; // 0x50(0x8)
	int64_t PointDamageValidationRuleId; // 0x58(0x8)
	int64_t RadialDamageValidationRuleId; // 0x60(0x8)
	int64_t PhysicsDamageValidationRuleId; // 0x68(0x8)
	struct TArray<struct TSoftClassPtr<struct APawn*>> GodPawns; // 0x70(0x10)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponDamageSettings, "GPWeaponDamageSettings")

};

// Object: Class GPWeaponRuntime.GPWeaponDataComponentBase
// Size: 0x408 (Inherited: 0x160)
struct UGPWeaponDataComponentBase : UGPWeaponComponentImplement
{
	struct TArray<struct FName> ReplicatedNameArray; // 0x160(0x10)
	struct TMap<struct FName, EWeaponRepCondition> RepConditions; // 0x170(0x50)
	struct TSet<struct FName> CacheRepBlackboards; // 0x1C0(0x50)
	uint8_t Pad_0x210[0x1F8]; // 0x210(0x1F8)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponDataComponentBase, "GPWeaponDataComponentBase")

};

// Object: Class GPWeaponRuntime.GPWeaponDataComponentAdapter
// Size: 0x408 (Inherited: 0x408)
struct UGPWeaponDataComponentAdapter : UGPWeaponDataComponentBase
{	DEFINE_UE_CLASS_HELPERS(UGPWeaponDataComponentAdapter, "GPWeaponDataComponentAdapter")

};

// Object: Class GPWeaponRuntime.GPWeaponViewComponentBase
// Size: 0x158 (Inherited: 0xF8)
struct UGPWeaponViewComponentBase : UActorComponent
{
	uint8_t Pad_0xF8[0x30]; // 0xF8(0x30)
	struct TScriptInterface<IGPWeaponProxyInterface> GPWeaponProxy; // 0x128(0x10)
	EGPComponentSpawnCondition CompSpawnCondition; // 0x138(0x1)
	uint8_t Pad_0x139[0x7]; // 0x139(0x7)
	struct ACHARACTER* CharacterOwner; // 0x140(0x8)
	struct TScriptInterface<IWeaponObInterface> WeaponObInterface; // 0x148(0x10)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponViewComponentBase, "GPWeaponViewComponentBase")

};

// Object: Class GPWeaponRuntime.GPWeaponDataComponentAnim
// Size: 0x160 (Inherited: 0x158)
struct UGPWeaponDataComponentAnim : UGPWeaponViewComponentBase
{
	uint8_t Pad_0x158[0x8]; // 0x158(0x8)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponDataComponentAnim, "GPWeaponDataComponentAnim")

};

// Object: Class GPWeaponRuntime.GPWeaponDataComponentAnimInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPWeaponDataComponentAnimInterface : IInterface
{

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAnimInterface.IsZooming
	// Flags: [Native|Public]
	// Offset: 0x8625f90
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsZooming();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAnimInterface.HasWeaponPartAnim
	// Flags: [Native|Public]
	// Offset: 0x8625ed8
	// Params: [ Num(2) Size(0x9) ]
	uint8_t HasWeaponPartAnim(uint64_t PartItemId);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAnimInterface.GetSingleReloadMontageC
	// Flags: [Native|Public]
	// Offset: 0x8625e9c
	// Params: [ Num(1) Size(0x8) ]
	struct UAnimMontage* GetSingleReloadMontageC();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAnimInterface.GetAnimOperationMontageSectionTime
	// Flags: [Native|Public]
	// Offset: 0x8625dac
	// Params: [ Num(3) Size(0x10) ]
	float GetAnimOperationMontageSectionTime(struct FName MontageName, int32_t SectionIndex);
	DEFINE_UE_CLASS_HELPERS(IGPWeaponDataComponentAnimInterface, "GPWeaponDataComponentAnimInterface")

};

// Object: Class GPWeaponRuntime.GPWeaponDataComponentAppearance
// Size: 0x560 (Inherited: 0x158)
struct UGPWeaponDataComponentAppearance : UGPWeaponViewComponentBase
{
	uint8_t Pad_0x158[0x8]; // 0x158(0x8)
	struct FGPWeaponMesh MeshForFirstPerson; // 0x160(0xB0)
	struct FGPWeaponMesh MeshForThirdPerson; // 0x210(0xB0)
	struct FGPWeaponMesh MeshSecondaryForFirstPerson; // 0x2C0(0xB0)
	struct FGPWeaponMesh MeshSecondaryForThirdPerson; // 0x370(0xB0)
	uint8_t bAttachWeaponToCharacter : 1; // 0x420(0x1), Mask(0x1)
	uint8_t BitPad_0x420_1 : 7; // 0x420(0x1)
	EWeaponOverrideUseAttachParentBound OverrideUseAttachParentBound; // 0x421(0x1)
	uint8_t bSpawn3P : 1; // 0x422(0x1), Mask(0x1)
	uint8_t BitPad_0x422_1 : 7; // 0x422(0x1)
	uint8_t Pad_0x423[0x1]; // 0x423(0x1)
	struct FRotator MeshRotator; // 0x424(0xC)
	struct FVector MeshLocation; // 0x430(0xC)
	struct FVector2D CollisionSize; // 0x43C(0x8)
	float WeaponScale; // 0x444(0x4)
	struct USkeletalMeshComponent* WeaponMainMeshComp; // 0x448(0x8)
	struct USkeletalMeshComponent* WeaponSecondaryMeshComp; // 0x450(0x8)
	struct UMeshComponent* WeaponBaseMeshComp; // 0x458(0x8)
	struct UMeshComponent* WeaponSecondaryBaseMeshComp; // 0x460(0x8)
	uint8_t Pad_0x468[0x38]; // 0x468(0x38)
	uint8_t bReloadAttachPointToIKGun : 1; // 0x4A0(0x1), Mask(0x1)
	uint8_t BitPad_0x4A0_1 : 7; // 0x4A0(0x1)
	uint8_t Pad_0x4A1[0x7]; // 0x4A1(0x7)
	struct UAnimSequence* IKHandPose; // 0x4A8(0x8)
	struct UAnimSequence* IKRightHandPose; // 0x4B0(0x8)
	uint8_t bEnableFppMeshDetachOnHidden : 1; // 0x4B8(0x1), Mask(0x1)
	uint8_t BitPad_0x4B8_1 : 7; // 0x4B8(0x1)
	uint8_t Pad_0x4B9[0x7]; // 0x4B9(0x7)
	struct TMap<struct USkeletalMeshComponent*, struct FGPWeaponBitTag> HiddenMap; // 0x4C0(0x50)
	uint8_t Pad_0x510[0x8]; // 0x510(0x8)
	struct TScriptInterface<IGPWeaponFireSocketInterface> IGPWeaponFireSocket; // 0x518(0x10)
	uint8_t Pad_0x528[0x38]; // 0x528(0x38)


	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearance.IsMeshHiddenPropagateToChildren
	// Flags: [Native|Protected]
	// Offset: 0x8626058
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsMeshHiddenPropagateToChildren();
	DEFINE_UE_CLASS_HELPERS(UGPWeaponDataComponentAppearance, "GPWeaponDataComponentAppearance")

};

// Object: Class GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPWeaponDataComponentAppearanceInterface : IInterface
{

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.TranslateAttachBackSocketName
	// Flags: [Native|Public]
	// Offset: 0x862718c
	// Params: [ Num(2) Size(0xC) ]
	struct FName TranslateAttachBackSocketName(EGPWeaponAttachBackSocket Socket);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.ShouldSpawn3P
	// Flags: [Native|Public]
	// Offset: 0x862714c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t ShouldSpawn3P();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.ShouldAttachWeaponToCharacter
	// Flags: [Native|Public]
	// Offset: 0x862710c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t ShouldAttachWeaponToCharacter();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.SetWeaponMeshHidden
	// Flags: [Native|Public]
	// Offset: 0x8626f9c
	// Params: [ Num(4) Size(0x11) ]
	void SetWeaponMeshHidden(uint8_t Hidden, EWeaponMeshHideReason HideReason, struct USkeletalMeshComponent* SpecialMesh, uint8_t bForceRefreshMeshStatus);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.SetWeaponMeshCastShadow
	// Flags: [Native|Public]
	// Offset: 0x8626ee8
	// Params: [ Num(1) Size(0x1) ]
	void SetWeaponMeshCastShadow(uint8_t bCastShadow);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.SetRenderCustomDepth
	// Flags: [Native|Public]
	// Offset: 0x8626df8
	// Params: [ Num(2) Size(0x2) ]
	void SetRenderCustomDepth(uint8_t BitTag, uint8_t bEnableCustomDepth);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.SetMeshScale
	// Flags: [Native|Public]
	// Offset: 0x8626d4c
	// Params: [ Num(1) Size(0x4) ]
	void SetMeshScale(float InScale);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.SetCustomDepthStencilValue
	// Flags: [Native|Public]
	// Offset: 0x8626ca0
	// Params: [ Num(1) Size(0x4) ]
	void SetCustomDepthStencilValue(int32_t Value);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.ReloadAttachPointToIKGun
	// Flags: [Native|Public]
	// Offset: 0x8626c60
	// Params: [ Num(1) Size(0x1) ]
	uint8_t ReloadAttachPointToIKGun();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.IsWeaponMeshHidden
	// Flags: [Native|Public]
	// Offset: 0x8626c20
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsWeaponMeshHidden();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.GetWeaponSecondaryMeshComp
	// Flags: [Native|Public]
	// Offset: 0x8626be4
	// Params: [ Num(1) Size(0x8) ]
	struct USkeletalMeshComponent* GetWeaponSecondaryMeshComp();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.GetWeaponSecondaryBaseMeshComp
	// Flags: [Native|Public]
	// Offset: 0x8626ba8
	// Params: [ Num(1) Size(0x8) ]
	struct UMeshComponent* GetWeaponSecondaryBaseMeshComp();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.GetWeaponMeshSecondary
	// Flags: [Native|Public]
	// Offset: 0x8626b68
	// Params: [ Num(1) Size(0xB0) ]
	struct FGPWeaponMesh GetWeaponMeshSecondary();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.GetWeaponMeshMain
	// Flags: [Native|Public]
	// Offset: 0x8626b28
	// Params: [ Num(1) Size(0xB0) ]
	struct FGPWeaponMesh GetWeaponMeshMain();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.GetWeaponMeshComponent
	// Flags: [Native|Public]
	// Offset: 0x8626aec
	// Params: [ Num(1) Size(0x8) ]
	struct USkeletalMeshComponent* GetWeaponMeshComponent();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.GetWeaponMainMeshComp
	// Flags: [Native|Public]
	// Offset: 0x8626ab0
	// Params: [ Num(1) Size(0x8) ]
	struct USkeletalMeshComponent* GetWeaponMainMeshComp();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.GetWeaponFireSocketInterface
	// Flags: [Native|Public]
	// Offset: 0x8626a44
	// Params: [ Num(1) Size(0x10) ]
	struct TScriptInterface<IGPWeaponFireSocketInterface> GetWeaponFireSocketInterface();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.GetWeaponBaseMeshComp
	// Flags: [Native|Public]
	// Offset: 0x8626a08
	// Params: [ Num(1) Size(0x8) ]
	struct UMeshComponent* GetWeaponBaseMeshComp();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.GetSocketTransform
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x8626944
	// Params: [ Num(2) Size(0x40) ]
	struct FTransform GetSocketTransform(struct FName SocketName);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.GetSocketLocation
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x862688c
	// Params: [ Num(2) Size(0x14) ]
	struct FVector GetSocketLocation(struct FName SocketName);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.GetRHandIKGripRotation
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x862684c
	// Params: [ Num(1) Size(0xC) ]
	struct FRotator GetRHandIKGripRotation();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.GetRHandIKGripPose
	// Flags: [Native|Public]
	// Offset: 0x8626810
	// Params: [ Num(1) Size(0x8) ]
	struct UAnimSequence* GetRHandIKGripPose();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.GetRHandIKGripLocation
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x86267d0
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetRHandIKGripLocation();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.GetMeshScale
	// Flags: [Native|Public]
	// Offset: 0x8626794
	// Params: [ Num(1) Size(0x4) ]
	float GetMeshScale();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.GetMeshRotator
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x8626754
	// Params: [ Num(1) Size(0xC) ]
	struct FRotator GetMeshRotator();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.GetMeshLocation
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x8626714
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetMeshLocation();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.GetMeshCollisionSize
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x86266d8
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetMeshCollisionSize();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.GetIKGripRotation
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x8626698
	// Params: [ Num(1) Size(0xC) ]
	struct FRotator GetIKGripRotation();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.GetIKGripPose
	// Flags: [Native|Public]
	// Offset: 0x862665c
	// Params: [ Num(1) Size(0x8) ]
	struct UAnimSequence* GetIKGripPose();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.GetIKGripLocation
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x862661c
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetIKGripLocation();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.GetHiddenTag
	// Flags: [Native|Public]
	// Offset: 0x8626590
	// Params: [ Num(1) Size(0x20) ]
	struct FGPWeaponBitTag GetHiddenTag();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.GetEquipSocketName
	// Flags: [Native|Public]
	// Offset: 0x86264d4
	// Params: [ Num(2) Size(0xC) ]
	struct FName GetEquipSocketName(uint8_t bMainMesh);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.GetAttachMeshComponent
	// Flags: [Native|Public]
	// Offset: 0x8626418
	// Params: [ Num(2) Size(0x10) ]
	struct USkeletalMeshComponent* GetAttachMeshComponent(uint8_t bAttachBack);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.GetAttachBackSocketName
	// Flags: [Native|Public]
	// Offset: 0x862635c
	// Params: [ Num(2) Size(0xC) ]
	struct FName GetAttachBackSocketName(uint8_t bMainMesh);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.FirstEquipAttachPointToIKGun
	// Flags: [Native|Public]
	// Offset: 0x862631c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t FirstEquipAttachPointToIKGun();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.CustomModifyFireSocketNames
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x8626204
	// Params: [ Num(2) Size(0x20) ]
	void CustomModifyFireSocketNames(struct TArray<struct FName>& OutBasicFireSocketNames, struct TArray<struct FName>& OutExtraFireSocketNames);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.CalcWeaponLocalBounds
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x8626190
	// Params: [ Num(1) Size(0x1C) ]
	struct FBoxSphereBounds CalcWeaponLocalBounds();
	DEFINE_UE_CLASS_HELPERS(IGPWeaponDataComponentAppearanceInterface, "GPWeaponDataComponentAppearanceInterface")

};

// Object: Class GPWeaponRuntime.GPWeaponDataComponentCore
// Size: 0x550 (Inherited: 0x408)
struct UGPWeaponDataComponentCore : UGPWeaponDataComponentBase
{
	uint8_t Pad_0x408[0x68]; // 0x408(0x68)
	struct TScriptInterface<IGPASC_AttributeSet_Minimal> WeaponAscCache; // 0x470(0x10)
	struct UGPWeaponAttributeSetWeaponChangeClip* AttributeSetWeaponChangeClip; // 0x480(0x8)
	struct UGPWeaponAttributeSetFireMode* AttributeSetFireMode; // 0x488(0x8)
	struct UGPWeaponAttributeSetEquip* AttributeSetEquip; // 0x490(0x8)
	uint8_t Pad_0x498[0xB8]; // 0x498(0xB8)


	// Object: Function GPWeaponRuntime.GPWeaponDataComponentCore.OnAttributeSetDirty
	// Flags: [Native|Protected]
	// Offset: 0x8627398
	// Params: [ Num(0) Size(0x0) ]
	void OnAttributeSetDirty();
	DEFINE_UE_CLASS_HELPERS(UGPWeaponDataComponentCore, "GPWeaponDataComponentCore")

};

// Object: Class GPWeaponRuntime.GPWeaponDataComponentDamage
// Size: 0x4B0 (Inherited: 0x408)
struct UGPWeaponDataComponentDamage : UGPWeaponDataComponentBase
{
	int32_t HitWallNum; // 0x408(0x4)
	uint8_t Pad_0x40C[0x4]; // 0x40C(0x4)
	struct TArray<struct FGPWeaponPenetrationModifier> HitPawnModifier; // 0x410(0x10)
	struct TMap<struct UPhysicalMaterial*, struct FGPWeaponPenetrationModifier> MaterialModifier; // 0x420(0x50)
	struct TArray<struct UGameplayEffect*> WeaponEffects; // 0x470(0x10)
	struct TArray<struct UGameplayEffect*> WeaponEffectsToTeammates; // 0x480(0x10)
	struct TArray<struct FName> HitHelmetBoneNameArray; // 0x490(0x10)
	struct TArray<struct FName> HitBreastPlateBoneNameArray; // 0x4A0(0x10)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponDataComponentDamage, "GPWeaponDataComponentDamage")

};

// Object: Class GPWeaponRuntime.GPWeaponDataComponentFiring
// Size: 0x638 (Inherited: 0x408)
struct UGPWeaponDataComponentFiring : UGPWeaponDataComponentBase
{
	uint8_t Pad_0x408[0x8]; // 0x408(0x8)
	struct TArray<struct FGPWeaponFireModeInfo> FireModeClassList; // 0x410(0x10)
	struct TArray<struct FName> FireSockets; // 0x420(0x10)
	uint8_t Pad_0x430[0x18]; // 0x430(0x18)
	EGPWeaponFireSocketMode FireSocketMode; // 0x448(0x1)
	uint8_t Pad_0x449[0x7]; // 0x449(0x7)
	struct TArray<struct FGPWeaponFireModeInstanceInfo> FireModeInstanceList; // 0x450(0x10)
	int32_t CurrEnabledFireModeIndex; // 0x460(0x4)
	uint8_t Pad_0x464[0xC]; // 0x464(0xC)
	struct FWeaponFireRepInfo FireInfo; // 0x470(0xB0)
	uint8_t bNeedSendFireInfo : 1; // 0x520(0x1), Mask(0x1)
	uint8_t BitPad_0x520_1 : 7; // 0x520(0x1)
	uint8_t Pad_0x521[0x13]; // 0x521(0x13)
	float BulletRadius; // 0x534(0x4)
	struct UGPWeaponFireRecoilBase* FireRecoilMethod; // 0x538(0x8)
	struct UGPWeaponAimAssistorBase* FireAimAssistor; // 0x540(0x8)
	uint8_t Pad_0x548[0xD0]; // 0x548(0xD0)
	int32_t BulletIndex; // 0x618(0x4)
	int32_t ProjectileIndex; // 0x61C(0x4)
	uint8_t ContinueFireCount; // 0x620(0x1)
	uint8_t Pad_0x621[0x2]; // 0x621(0x2)
	uint8_t bHasChambered : 1; // 0x623(0x1), Mask(0x1)
	uint8_t BitPad_0x623_1 : 7; // 0x623(0x1)
	uint8_t Pad_0x624[0x14]; // 0x624(0x14)


	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiring.ServerSetFireModeIndex
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x8628c7c
	// Params: [ Num(1) Size(0x1) ]
	void ServerSetFireModeIndex(uint8_t FireModeIndex);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiring.ServerSetChambered
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x8628bc8
	// Params: [ Num(1) Size(0x1) ]
	void ServerSetChambered(uint8_t Value);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiring.OnReplicateFireModeIndex
	// Flags: [Final|Native|Protected]
	// Offset: 0xef66b40
	// Params: [ Num(0) Size(0x0) ]
	void OnReplicateFireModeIndex();
	DEFINE_UE_CLASS_HELPERS(UGPWeaponDataComponentFiring, "GPWeaponDataComponentFiring")

};

// Object: Class GPWeaponRuntime.GPWeaponDataComponentFiringInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPWeaponDataComponentFiringInterface : IInterface
{

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.UpdateSprintAutoDelayFireOnceInfo
	// Flags: [Native|Public]
	// Offset: 0x862a670
	// Params: [ Num(1) Size(0x1) ]
	void UpdateSprintAutoDelayFireOnceInfo(uint8_t InAutoFire);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.SupportHangUpBolt
	// Flags: [Native|Public]
	// Offset: 0x862a5b0
	// Params: [ Num(2) Size(0x2) ]
	uint8_t SupportHangUpBolt(uint8_t bZoom);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.SupportAnimShellDrop
	// Flags: [Native|Public]
	// Offset: 0x862a4f0
	// Params: [ Num(2) Size(0x2) ]
	uint8_t SupportAnimShellDrop(uint8_t bZoom);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.SetSupportHangUpBolt
	// Flags: [Native|Public]
	// Offset: 0x862a3f8
	// Params: [ Num(2) Size(0x2) ]
	void SetSupportHangUpBolt(uint8_t bZoom, uint8_t bValue);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.SetSupportAnimShellDrop
	// Flags: [Native|Public]
	// Offset: 0x862a300
	// Params: [ Num(2) Size(0x2) ]
	void SetSupportAnimShellDrop(uint8_t bZoom, uint8_t bValue);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.SetRequireChambering
	// Flags: [Native|Public]
	// Offset: 0x862a210
	// Params: [ Num(2) Size(0x8) ]
	void SetRequireChambering(uint8_t Value, float ChamberFinishTime);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.SetNeedSendFireInfo
	// Flags: [Native|Public]
	// Offset: 0x862a15c
	// Params: [ Num(1) Size(0x1) ]
	void SetNeedSendFireInfo(uint8_t bNeed);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.SetLastHitInfo
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x862a058
	// Params: [ Num(1) Size(0xD0) ]
	void SetLastHitInfo(const struct FBulletHitInfo& InHitInfo);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.SetIsChamberWeapon
	// Flags: [Native|Public]
	// Offset: 0x8629fa4
	// Params: [ Num(1) Size(0x1) ]
	void SetIsChamberWeapon(uint8_t Value);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.SetFireInfo
	// Flags: [Native|Public]
	// Offset: 0x8629d64
	// Params: [ Num(2) Size(0xB1) ]
	void SetFireInfo(struct FWeaponFireRepInfo InRepInfo, uint8_t InNeedSendFireInfo);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.SetChargeTime
	// Flags: [Native|Public]
	// Offset: 0x8629cb8
	// Params: [ Num(1) Size(0x4) ]
	void SetChargeTime(float ChargeTime);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.SetChamberingBegin
	// Flags: [Native|Public]
	// Offset: 0x8629c0c
	// Params: [ Num(1) Size(0x4) ]
	void SetChamberingBegin(float BeginTime);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.SetChambered
	// Flags: [Native|Public]
	// Offset: 0x8629b58
	// Params: [ Num(1) Size(0x1) ]
	void SetChambered(uint8_t Value);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.NeedSendFireInfo
	// Flags: [Native|Public]
	// Offset: 0x8629b18
	// Params: [ Num(1) Size(0x1) ]
	uint8_t NeedSendFireInfo();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.IsWeaponSupportFireStartRotFromView
	// Flags: [Native|Public]
	// Offset: 0x8629ad8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsWeaponSupportFireStartRotFromView();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.IsWeaponEnableSprintAutoDelayFireOnce
	// Flags: [Native|Public]
	// Offset: 0x8629a98
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsWeaponEnableSprintAutoDelayFireOnce();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.IsRequireChambering
	// Flags: [Native|Public]
	// Offset: 0x8629a58
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsRequireChambering();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.IsIgnorePreFire
	// Flags: [Native|Public]
	// Offset: 0x8629a18
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsIgnorePreFire();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.IsChamberWeapon
	// Flags: [Native|Public]
	// Offset: 0x86299d8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsChamberWeapon();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.IsChambering
	// Flags: [Native|Public]
	// Offset: 0x8629998
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsChambering();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.HasChambered
	// Flags: [Native|Public]
	// Offset: 0x8629958
	// Params: [ Num(1) Size(0x1) ]
	uint8_t HasChambered();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.GetSupportSubFiringModes
	// Flags: [Native|Public]
	// Offset: 0x86298b8
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<EGPWeaponFiringMode> GetSupportSubFiringModes();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.GetProjectileIndex
	// Flags: [Native|Public]
	// Offset: 0x86297fc
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetProjectileIndex(uint8_t AddIndex);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.GetProjectileClass
	// Flags: [Native|Public]
	// Offset: 0x86297c0
	// Params: [ Num(1) Size(0x8) ]
	struct AGPWeaponBulletBase* GetProjectileClass();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.GetOrUpdateSprintAutoDelayFireOnceInfo
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x86296b8
	// Params: [ Num(2) Size(0x8) ]
	void GetOrUpdateSprintAutoDelayFireOnceInfo(uint8_t& OutAutoFire, float& OutAutoFireInterval);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.GetOrUpdateAutoFireInfo
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x862955c
	// Params: [ Num(3) Size(0xC) ]
	void GetOrUpdateAutoFireInfo(uint8_t& OutAutoFire, float& OutAutoFireInterval, int32_t& OutDesiredFireTimes);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.GetMovementTimeStamp
	// Flags: [Native|Public]
	// Offset: 0x8629520
	// Params: [ Num(1) Size(0x4) ]
	float GetMovementTimeStamp();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.GetLastHitTime
	// Flags: [Native|Public|Const]
	// Offset: 0x86294e4
	// Params: [ Num(1) Size(0x4) ]
	float GetLastHitTime();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.GetLastHitInfo
	// Flags: [Native|Public]
	// Offset: 0x8629488
	// Params: [ Num(1) Size(0xD0) ]
	struct FBulletHitInfo GetLastHitInfo();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.GetFireSocketMode
	// Flags: [Native|Public]
	// Offset: 0x862944c
	// Params: [ Num(1) Size(0x1) ]
	EGPWeaponFireSocketMode GetFireSocketMode();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.GetFireModeParams
	// Flags: [Native|Public]
	// Offset: 0x8629410
	// Params: [ Num(1) Size(0x8) ]
	struct UGPWeaponFireModeParamsBase* GetFireModeParams();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.GetFireModeCurrent
	// Flags: [Native|Public]
	// Offset: 0x86293a4
	// Params: [ Num(1) Size(0x10) ]
	struct TScriptInterface<IGPWeaponFireModeInterface> GetFireModeCurrent();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.GetFireModeByIndex
	// Flags: [Native|Public]
	// Offset: 0x86292e8
	// Params: [ Num(2) Size(0x18) ]
	struct TScriptInterface<IGPWeaponFireModeInterface> GetFireModeByIndex(uint8_t FireModeIndex);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.GetFireInfo
	// Flags: [Native|Public]
	// Offset: 0x862920c
	// Params: [ Num(1) Size(0xB0) ]
	struct FWeaponFireRepInfo GetFireInfo();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.GetDamageDebugInfo
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x8629148
	// Params: [ Num(1) Size(0x10) ]
	void GetDamageDebugInfo(struct FString& Result);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.GetCurrentFiringMode
	// Flags: [Native|Public]
	// Offset: 0x862910c
	// Params: [ Num(1) Size(0x1) ]
	EGPWeaponFiringMode GetCurrentFiringMode();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.GetContinueFiringCount
	// Flags: [Native|Public]
	// Offset: 0x86290d0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetContinueFiringCount();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.GetChargeWPBulletSpeedPercent
	// Flags: [Native|Public]
	// Offset: 0x8629094
	// Params: [ Num(1) Size(0x4) ]
	float GetChargeWPBulletSpeedPercent();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.GetChamberMaxTime
	// Flags: [Native|Public]
	// Offset: 0x8629058
	// Params: [ Num(1) Size(0x4) ]
	float GetChamberMaxTime();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.GetChamberingTime
	// Flags: [Native|Public]
	// Offset: 0x862901c
	// Params: [ Num(1) Size(0x4) ]
	float GetChamberingTime();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.GetBulletIndex
	// Flags: [Native|Public]
	// Offset: 0x8628f60
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetBulletIndex(uint8_t AddIndex);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.GetAutoFireTargetState
	// Flags: [Native|Public]
	// Offset: 0x8628f24
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetAutoFireTargetState();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.AutoReloadWhenEmpty
	// Flags: [Native|Public]
	// Offset: 0x8628ee4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t AutoReloadWhenEmpty();
	DEFINE_UE_CLASS_HELPERS(IGPWeaponDataComponentFiringInterface, "GPWeaponDataComponentFiringInterface")

};

// Object: Class GPWeaponRuntime.GPWeaponDataComponentImpact
// Size: 0x408 (Inherited: 0x408)
struct UGPWeaponDataComponentImpact : UGPWeaponDataComponentBase
{	DEFINE_UE_CLASS_HELPERS(UGPWeaponDataComponentImpact, "GPWeaponDataComponentImpact")

};

// Object: Class GPWeaponRuntime.GPWeaponDataComponentOverHeat
// Size: 0x448 (Inherited: 0x408)
struct UGPWeaponDataComponentOverHeat : UGPWeaponDataComponentBase
{
	uint8_t Pad_0x408[0xC]; // 0x408(0xC)
	float TotalHeat; // 0x414(0x4)
	uint8_t Pad_0x418[0x10]; // 0x418(0x10)
	uint8_t bUseLastDecreaseHeatTime : 1; // 0x428(0x1), Mask(0x1)
	uint8_t BitPad_0x428_1 : 7; // 0x428(0x1)
	uint8_t Pad_0x429[0x3]; // 0x429(0x3)
	float HeatIncreasePerFire; // 0x42C(0x4)
	float HeatDecreasePerSecond; // 0x430(0x4)
	float OverHeatCDSeconds; // 0x434(0x4)
	uint8_t Pad_0x438[0x10]; // 0x438(0x10)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponDataComponentOverHeat, "GPWeaponDataComponentOverHeat")

};

// Object: Class GPWeaponRuntime.GPWeaponDataComponentOverHeatInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPWeaponDataComponentOverHeatInterface : IInterface
{

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentOverHeatInterface.WeaponTickHeat
	// Flags: [Native|Public]
	// Offset: 0x862ae18
	// Params: [ Num(1) Size(0x4) ]
	void WeaponTickHeat(float DeltaTime);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentOverHeatInterface.SetOverHeatTimeLeft
	// Flags: [Native|Public]
	// Offset: 0x862ad6c
	// Params: [ Num(1) Size(0x4) ]
	void SetOverHeatTimeLeft(float Seconds);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentOverHeatInterface.SetOverHeatCDSeconds
	// Flags: [Native|Public]
	// Offset: 0x862acc0
	// Params: [ Num(1) Size(0x4) ]
	void SetOverHeatCDSeconds(float Seconds);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentOverHeatInterface.SetNeedUpdateOverHeat
	// Flags: [Native|Public]
	// Offset: 0x862ac0c
	// Params: [ Num(1) Size(0x1) ]
	void SetNeedUpdateOverHeat(uint8_t bNeedUpate);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentOverHeatInterface.SetHeatInCreasePerFire
	// Flags: [Native|Public]
	// Offset: 0x862ab60
	// Params: [ Num(1) Size(0x4) ]
	void SetHeatInCreasePerFire(float Heat);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentOverHeatInterface.SetHeatDeCreasePerSecond
	// Flags: [Native|Public]
	// Offset: 0x862aab4
	// Params: [ Num(1) Size(0x4) ]
	void SetHeatDeCreasePerSecond(float Heat);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentOverHeatInterface.GetOverHeatTimeLeft
	// Flags: [Native|Public|Const]
	// Offset: 0x862aa78
	// Params: [ Num(1) Size(0x4) ]
	float GetOverHeatTimeLeft();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentOverHeatInterface.GetOverHeatAlpha
	// Flags: [Native|Public|Const]
	// Offset: 0x862aa3c
	// Params: [ Num(1) Size(0x4) ]
	float GetOverHeatAlpha();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentOverHeatInterface.CanFire
	// Flags: [Native|Public]
	// Offset: 0x862a9fc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CanFire();
	DEFINE_UE_CLASS_HELPERS(IGPWeaponDataComponentOverHeatInterface, "GPWeaponDataComponentOverHeatInterface")

};

// Object: Class GPWeaponRuntime.GPWeaponDataComponentProxy
// Size: 0x650 (Inherited: 0x408)
struct UGPWeaponDataComponentProxy : UGPWeaponDataComponentBase
{
	uint8_t Pad_0x408[0x8]; // 0x408(0x8)
	uint8_t bViewEnable : 1; // 0x410(0x1), Mask(0x1)
	uint8_t BitPad_0x410_1 : 7; // 0x410(0x1)
	uint8_t Pad_0x411[0x77]; // 0x411(0x77)
	struct TScriptInterface<IGPASC_AttributeSet_Minimal> ASC; // 0x488(0x10)
	struct UGPWeaponBlackboard* GPWeaponBlackboard; // 0x498(0x8)
	int32_t Rep_CurrentStateStep; // 0x4A0(0x4)
	EGPWeaponStateType Rep_CurrentStateType; // 0x4A4(0x1)
	EGPWeaponStateType Rep_LastStateType; // 0x4A5(0x1)
	uint8_t bIsZooming : 1; // 0x4A6(0x1), Mask(0x1)
	uint8_t BitPad_0x4A6_1 : 7; // 0x4A6(0x1)
	uint8_t Pad_0x4A7[0x1]; // 0x4A7(0x1)
	int32_t CurrEnabledFireModeIndex; // 0x4A8(0x4)
	float FiringMode; // 0x4AC(0x4)
	float ChangeClipMode; // 0x4B0(0x4)
	int32_t MeleeComboNumber; // 0x4B4(0x4)
	uint8_t IsComboBreak : 1; // 0x4B8(0x1), Mask(0x1)
	uint8_t BitPad_0x4B8_1 : 7; // 0x4B8(0x1)
	uint8_t IsFirstActive : 1; // 0x4B9(0x1), Mask(0x1)
	uint8_t BitPad_0x4B9_1 : 7; // 0x4B9(0x1)
	uint8_t IsFirstEmptyInspect : 1; // 0x4BA(0x1), Mask(0x1)
	uint8_t BitPad_0x4BA_1 : 7; // 0x4BA(0x1)
	uint8_t Pad_0x4BB[0x1]; // 0x4BB(0x1)
	float OverHeatValue; // 0x4BC(0x4)
	EGPWeaponFireSocketMode FireSocketMode; // 0x4C0(0x1)
	EWeaponSwitchType SwitchType; // 0x4C1(0x1)
	ESwitchWeaponContext SwitchWeaponContext; // 0x4C2(0x1)
	uint8_t Pad_0x4C3[0x5]; // 0x4C3(0x5)
	struct FWeaponFireMulticastInfo ReplicatedFireInfo; // 0x4C8(0x78)
	uint8_t IsWeaponInInteractive : 1; // 0x540(0x1), Mask(0x1)
	uint8_t BitPad_0x540_1 : 7; // 0x540(0x1)
	uint8_t Pad_0x541[0x3]; // 0x541(0x3)
	int32_t BulletIndex; // 0x544(0x4)
	struct FName SkillInspectID; // 0x548(0x8)
	int32_t SkillInspectIndex; // 0x550(0x4)
	float PredictHit_X; // 0x554(0x4)
	float PredictHit_Y; // 0x558(0x4)
	float PredictHit_Z; // 0x55C(0x4)
	uint8_t Pad_0x560[0xF0]; // 0x560(0xF0)


	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.UpdateDataZoom
	// Flags: [Native|Public]
	// Offset: 0x862ca1c
	// Params: [ Num(0) Size(0x0) ]
	void UpdateDataZoom();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.UpdateDataState
	// Flags: [Native|Public]
	// Offset: 0x862ca00
	// Params: [ Num(0) Size(0x0) ]
	void UpdateDataState();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.UpdateDataFiring
	// Flags: [Native|Public]
	// Offset: 0x862c9e4
	// Params: [ Num(0) Size(0x0) ]
	void UpdateDataFiring();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.UpdateComponentData
	// Flags: [Native|Protected]
	// Offset: 0x862c9c8
	// Params: [ Num(0) Size(0x0) ]
	void UpdateComponentData();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.UpdateCarriedAmmo
	// Flags: [Native|Public]
	// Offset: 0x862c9ac
	// Params: [ Num(0) Size(0x0) ]
	void UpdateCarriedAmmo();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.SupportAnimShellDrop
	// Flags: [Native|Public]
	// Offset: 0x862c8ec
	// Params: [ Num(2) Size(0x2) ]
	uint8_t SupportAnimShellDrop(uint8_t bZoom);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.SetViewEnable
	// Flags: [Native|Public]
	// Offset: 0x862c838
	// Params: [ Num(1) Size(0x1) ]
	void SetViewEnable(uint8_t IsEnable);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.SetSupportAnimShellDrop
	// Flags: [Native|Public]
	// Offset: 0x862c740
	// Params: [ Num(2) Size(0x2) ]
	void SetSupportAnimShellDrop(uint8_t bZoom, uint8_t bValue);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.SetIsFirstWeaponEquip
	// Flags: [Native|Public]
	// Offset: 0x862c68c
	// Params: [ Num(1) Size(0x1) ]
	void SetIsFirstWeaponEquip(uint8_t InIsFirstActive);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.SetIsFirstEmptyInspect
	// Flags: [Native|Public]
	// Offset: 0x862c5d8
	// Params: [ Num(1) Size(0x1) ]
	void SetIsFirstEmptyInspect(uint8_t InIsFirstEmptyInspect);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.ReplicateToLocalWeapon
	// Flags: [Native|Public]
	// Offset: 0x862c4e0
	// Params: [ Num(2) Size(0x14) ]
	void ReplicateToLocalWeapon(struct TScriptInterface<IGPWeaponInterface> LocalWeapon, uint32_t InDataComponentNameHash);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.RefreshComponent
	// Flags: [Native|Public]
	// Offset: 0x862c4c4
	// Params: [ Num(0) Size(0x0) ]
	void RefreshComponent();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.PostRepNotifies
	// Flags: [Native|Protected]
	// Offset: 0x862c4a8
	// Params: [ Num(0) Size(0x0) ]
	void PostRepNotifies();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.OnWeaponAttributeSetReady
	// Flags: [Native|Protected]
	// Offset: 0x862c48c
	// Params: [ Num(0) Size(0x0) ]
	void OnWeaponAttributeSetReady();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.OnRep_SkillInspectIndex
	// Flags: [Native|Protected]
	// Offset: 0x862c470
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_SkillInspectIndex();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.OnRep_SkillInspectID
	// Flags: [Native|Protected]
	// Offset: 0x862c454
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_SkillInspectID();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.OnRep_IsZooming
	// Flags: [Native|Protected]
	// Offset: 0x862c438
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_IsZooming();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.OnRep_FiringMode
	// Flags: [Native|Protected]
	// Offset: 0x862c41c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_FiringMode();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.OnRep_CurrentStateType
	// Flags: [Native|Protected]
	// Offset: 0x862c400
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_CurrentStateType();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.OnRep_ChangeClipMode
	// Flags: [Native|Protected]
	// Offset: 0x862c3e4
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ChangeClipMode();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.OnFiringModeChanged
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x862c2b8
	// Params: [ Num(2) Size(0x3C) ]
	void OnFiringModeChanged(const struct FGameplayAttribute& Attribute, float NewValue);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.OnASCChangeClipChanged
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x862c18c
	// Params: [ Num(2) Size(0x3C) ]
	void OnASCChangeClipChanged(const struct FGameplayAttribute& Attribute, float NewValue);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.IsZooming
	// Flags: [Native|Public]
	// Offset: 0x862c14c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsZooming();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.IsWeaponUsed
	// Flags: [Native|Public]
	// Offset: 0x862c10c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsWeaponUsed();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.IsWeaponUnderCurrentXPP
	// Flags: [Native|Public]
	// Offset: 0x862c0cc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsWeaponUnderCurrentXPP();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.IsWeaponActorVisibleInDPVS
	// Flags: [Native|Public]
	// Offset: 0x862c08c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsWeaponActorVisibleInDPVS();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.IsWeaponActive
	// Flags: [Native|Public]
	// Offset: 0x862c04c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsWeaponActive();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.IsVisible
	// Flags: [Native|Public]
	// Offset: 0x862c00c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsVisible();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.IsViewEnable
	// Flags: [Native|Public]
	// Offset: 0x862bfcc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsViewEnable();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.IsThrowableWeapon
	// Flags: [Native|Public]
	// Offset: 0x862bf8c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsThrowableWeapon();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.IsTestFullWeapon
	// Flags: [Native|Public]
	// Offset: 0x862bf4c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsTestFullWeapon();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.IsSecondaryWeapon
	// Flags: [Native|Public]
	// Offset: 0x862bf0c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsSecondaryWeapon();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.IsSceneWeapon
	// Flags: [Native|Public]
	// Offset: 0x862becc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsSceneWeapon();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.IsModularWeapon
	// Flags: [Native|Public]
	// Offset: 0x862be8c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsModularWeapon();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.IsMeleeWeapon
	// Flags: [Native|Public]
	// Offset: 0x862be4c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsMeleeWeapon();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.IsMainWeapon
	// Flags: [Native|Public]
	// Offset: 0x862be0c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsMainWeapon();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.IsMainAttachWeapon
	// Flags: [Native|Public]
	// Offset: 0x862bdcc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsMainAttachWeapon();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.IsInPending
	// Flags: [Native|Public]
	// Offset: 0x862bd8c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsInPending();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.IsHideAllWeapon_RetIsContainExactTag
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x862bcc4
	// Params: [ Num(2) Size(0x2) ]
	uint8_t IsHideAllWeapon_RetIsContainExactTag(uint8_t& bContainExactTag);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.IsHideAllWeapon
	// Flags: [Native|Public]
	// Offset: 0x862bc84
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsHideAllWeapon();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.IsFppView
	// Flags: [Native|Public]
	// Offset: 0x862bc44
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsFppView();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.IsEnableZoomOnReloading
	// Flags: [Native|Public]
	// Offset: 0x862bc04
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsEnableZoomOnReloading();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.IsEmptyHand
	// Flags: [Native|Public]
	// Offset: 0x862bbc4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsEmptyHand();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.IsCharacterOwnerOnFPPMode
	// Flags: [Native|Public]
	// Offset: 0x862bb84
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsCharacterOwnerOnFPPMode();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.IsCharacterOwnerOnDefaultFPPMode
	// Flags: [Native|Public]
	// Offset: 0x862bb44
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsCharacterOwnerOnDefaultFPPMode();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.IsCharacterOwnerAI
	// Flags: [Native|Public|Const]
	// Offset: 0x862bb04
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsCharacterOwnerAI();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.IsCBowWeapon
	// Flags: [Native|Public]
	// Offset: 0x862bac4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsCBowWeapon();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.InitializeComponent
	// Flags: [Native|Public]
	// Offset: 0x862baa8
	// Params: [ Num(0) Size(0x0) ]
	void InitializeComponent();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.InitComponentReferences
	// Flags: [Native|Protected]
	// Offset: 0x862ba8c
	// Params: [ Num(0) Size(0x0) ]
	void InitComponentReferences();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.HasNetModeOnServer
	// Flags: [Native|Public]
	// Offset: 0x862ba4c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t HasNetModeOnServer();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.HasActivateBefore
	// Flags: [Native|Public]
	// Offset: 0x862ba0c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t HasActivateBefore();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.GetWeaponTypeValue
	// Flags: [Native|Public]
	// Offset: 0x862b9d0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetWeaponTypeValue();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.GetWeaponSlot
	// Flags: [Native|Public]
	// Offset: 0x862b994
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetWeaponSlot();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.GetWeaponSecondaryMesh
	// Flags: [Native|Public]
	// Offset: 0x862b958
	// Params: [ Num(1) Size(0x8) ]
	struct USkeletalMeshComponent* GetWeaponSecondaryMesh();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.GetWeaponSecondaryBaseMesh
	// Flags: [Native|Public]
	// Offset: 0x862b91c
	// Params: [ Num(1) Size(0x8) ]
	struct UMeshComponent* GetWeaponSecondaryBaseMesh();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.GetWeaponMode
	// Flags: [Native|Public]
	// Offset: 0x862b8e0
	// Params: [ Num(1) Size(0x1) ]
	EGPWeaponMode GetWeaponMode();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.GetWeaponMainMesh
	// Flags: [Native|Public]
	// Offset: 0x862b8a4
	// Params: [ Num(1) Size(0x8) ]
	struct USkeletalMeshComponent* GetWeaponMainMesh();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.GetWeaponId
	// Flags: [Native|Public]
	// Offset: 0x862b868
	// Params: [ Num(1) Size(0x8) ]
	uint64_t GetWeaponId();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.GetWeaponGuid
	// Flags: [Native|Public]
	// Offset: 0x862b82c
	// Params: [ Num(1) Size(0x8) ]
	uint64_t GetWeaponGuid();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.GetWeaponEquipPosition
	// Flags: [Native|Public]
	// Offset: 0x862b7f0
	// Params: [ Num(1) Size(0x8) ]
	uint64_t GetWeaponEquipPosition();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.GetWeaponDisplayMesh
	// Flags: [Native|Public]
	// Offset: 0x862b7b4
	// Params: [ Num(1) Size(0x8) ]
	struct USkeletalMeshComponent* GetWeaponDisplayMesh();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.GetWeaponBaseMesh
	// Flags: [Native|Public]
	// Offset: 0x862b778
	// Params: [ Num(1) Size(0x8) ]
	struct UMeshComponent* GetWeaponBaseMesh();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.GetWeaponAttachType
	// Flags: [Native|Public]
	// Offset: 0x862b73c
	// Params: [ Num(1) Size(0x1) ]
	EGPWeaponAppearanceAttachType GetWeaponAttachType();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.GetWeaponAttachBackSocket
	// Flags: [Native|Public]
	// Offset: 0x862b700
	// Params: [ Num(1) Size(0x1) ]
	EGPWeaponAttachBackSocket GetWeaponAttachBackSocket();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.GetWeaponAttachBackRelativeTransform
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x862b68c
	// Params: [ Num(1) Size(0x30) ]
	struct FTransform GetWeaponAttachBackRelativeTransform();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.GetWeaponAttachBackConflict
	// Flags: [Native|Public]
	// Offset: 0x862b650
	// Params: [ Num(1) Size(0x1) ]
	EGPWeaponAttachBackConflict GetWeaponAttachBackConflict();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.GetWeaponASC
	// Flags: [Native|Public]
	// Offset: 0x862b5e4
	// Params: [ Num(1) Size(0x10) ]
	struct TScriptInterface<IGPASC_AttributeSet_Minimal> GetWeaponASC();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.GetWeaponActor
	// Flags: [Native|Public]
	// Offset: 0x862b5a8
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetWeaponActor();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.GetThrowMode
	// Flags: [Native|Public]
	// Offset: 0x862b56c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetThrowMode();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.GetThirdPersonGPWeapon
	// Flags: [Native|Public]
	// Offset: 0x862b524
	// Params: [ Num(1) Size(0x10) ]
	struct TScriptInterface<IGPWeaponInterface> GetThirdPersonGPWeapon();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.GetThirdPersonCharacterMesh
	// Flags: [Native|Public]
	// Offset: 0x862b4e8
	// Params: [ Num(1) Size(0x8) ]
	struct USkeletalMeshComponent* GetThirdPersonCharacterMesh();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.GetPredictHitLocation
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x862b4a8
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetPredictHitLocation();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.GetMovementTimeStamp
	// Flags: [Native|Public]
	// Offset: 0x862b46c
	// Params: [ Num(1) Size(0x4) ]
	float GetMovementTimeStamp();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.GetLastStateType
	// Flags: [Native|Public]
	// Offset: 0x862b430
	// Params: [ Num(1) Size(0x1) ]
	EGPWeaponStateType GetLastStateType();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.GetIsFirstWeaponEquip
	// Flags: [Native|Public]
	// Offset: 0x862b3f0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetIsFirstWeaponEquip();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.GetIsFirstEmptyInspect
	// Flags: [Native|Public]
	// Offset: 0x862b3b0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetIsFirstEmptyInspect();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.GetFppObGPWeapon
	// Flags: [Native|Public]
	// Offset: 0x862b368
	// Params: [ Num(1) Size(0x10) ]
	struct TScriptInterface<IGPWeaponInterface> GetFppObGPWeapon();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.GetFirstPersonGPWeapon
	// Flags: [Native|Public]
	// Offset: 0x862b320
	// Params: [ Num(1) Size(0x10) ]
	struct TScriptInterface<IGPWeaponInterface> GetFirstPersonGPWeapon();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.GetFirstPersonCharacterMesh
	// Flags: [Native|Public]
	// Offset: 0x862b2e4
	// Params: [ Num(1) Size(0x8) ]
	struct USkeletalMeshComponent* GetFirstPersonCharacterMesh();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.GetFireSocketMode
	// Flags: [Native|Public]
	// Offset: 0x862b2a8
	// Params: [ Num(1) Size(0x1) ]
	EGPWeaponFireSocketMode GetFireSocketMode();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.GetEnablePoseModify
	// Flags: [Native|Public]
	// Offset: 0x862b268
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetEnablePoseModify();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.GetCurrentStateType
	// Flags: [Native|Public]
	// Offset: 0x862b22c
	// Params: [ Num(1) Size(0x1) ]
	EGPWeaponStateType GetCurrentStateType();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.GetContinueFiringCount
	// Flags: [Native|Public]
	// Offset: 0x862b1f0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetContinueFiringCount();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.GetCharacterSkeletalMeshComponent
	// Flags: [Native|Public]
	// Offset: 0x862b1b4
	// Params: [ Num(1) Size(0x8) ]
	struct USkeletalMeshComponent* GetCharacterSkeletalMeshComponent();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.GetCharacterOwner
	// Flags: [Native|Public]
	// Offset: 0x862b178
	// Params: [ Num(1) Size(0x8) ]
	struct ACHARACTER* GetCharacterOwner();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.GetCharacterName
	// Flags: [Native|Public]
	// Offset: 0x862b13c
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetCharacterName();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.GetBulletIndex
	// Flags: [Native|Public]
	// Offset: 0x862b100
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetBulletIndex();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.EnableLastActive
	// Flags: [Native|Public]
	// Offset: 0x862b0c0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t EnableLastActive();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.EnableCommonLog
	// Flags: [Native|Public]
	// Offset: 0x862b080
	// Params: [ Num(1) Size(0x1) ]
	uint8_t EnableCommonLog();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.BP_ProcessGPWeaponInnerEvent
	// Flags: [Native|Public]
	// Offset: 0x862afd4
	// Params: [ Num(1) Size(0x1) ]
	void BP_ProcessGPWeaponInnerEvent(EGPWeaponInnerEvent EventType);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentProxy.BP_GetNetModeGPWeapon
	// Flags: [Native|Public]
	// Offset: 0x862af98
	// Params: [ Num(1) Size(0x1) ]
	uint8_t BP_GetNetModeGPWeapon();
	DEFINE_UE_CLASS_HELPERS(UGPWeaponDataComponentProxy, "GPWeaponDataComponentProxy")

};

// Object: Class GPWeaponRuntime.GPWeaponDataComponentState
// Size: 0x5B8 (Inherited: 0x408)
struct UGPWeaponDataComponentState : UGPWeaponDataComponentBase
{
	uint8_t Pad_0x408[0x58]; // 0x408(0x58)
	struct FRepWeaponStateTimeLine RepStateInfo; // 0x460(0x20)
	EGPWeaponStateType Rep_CurStateType; // 0x480(0x1)
	uint8_t Pad_0x481[0x137]; // 0x481(0x137)


	// Object: Function GPWeaponRuntime.GPWeaponDataComponentState.RPC_ClientRevertToRemoteTimeline
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x862dc90
	// Params: [ Num(1) Size(0x20) ]
	void RPC_ClientRevertToRemoteTimeline(struct FRepWeaponStateTimeLine RemoteStateTimeline);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentState.RPC_ClientNotifyStateFrameInValid
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0xf4c88ec
	// Params: [ Num(1) Size(0x4) ]
	void RPC_ClientNotifyStateFrameInValid(int32_t ClientStateNo);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentState.RequestServerVerifyStateFrame
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x862db90
	// Params: [ Num(2) Size(0x2C) ]
	void RequestServerVerifyStateFrame(struct FStateFrame WSFrame, float InCheckCode);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentState.OnRep_StateInfo
	// Flags: [Native|Protected]
	// Offset: 0x862db74
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_StateInfo();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentState.OnRep_CurStateType
	// Flags: [Native|Protected]
	// Offset: 0x862db58
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_CurStateType();
	DEFINE_UE_CLASS_HELPERS(UGPWeaponDataComponentState, "GPWeaponDataComponentState")

};

// Object: Class GPWeaponRuntime.GPWeaponDataComponentStateAbility
// Size: 0x630 (Inherited: 0x5B8)
struct UGPWeaponDataComponentStateAbility : UGPWeaponDataComponentState
{
	struct TArray<struct UGPWeaponStateBase*> StateAbilities; // 0x5B8(0x10)
	struct UGPWeaponStateBase* InitStateAbility; // 0x5C8(0x8)
	struct TMap<EGPWeaponStateType, struct FGameplayTagContainer> StateGameplayTagMap; // 0x5D0(0x50)
	struct UGPWeaponStateBase* CurrentStateAbility; // 0x620(0x8)
	uint8_t Pad_0x628[0x8]; // 0x628(0x8)


	// Object: Function GPWeaponRuntime.GPWeaponDataComponentStateAbility.SwitchToWeaponStateAbilityInner
	// Flags: [Final|Native|Public]
	// Offset: 0x862e068
	// Params: [ Num(3) Size(0xA) ]
	uint8_t SwitchToWeaponStateAbilityInner(struct UAbilitySystemComponent* ASC, EGPWeaponStateType StateType);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentStateAbility.SwitchToWeaponStateAbilityByClass
	// Flags: [Final|Native|Public]
	// Offset: 0x862df80
	// Params: [ Num(3) Size(0x11) ]
	uint8_t SwitchToWeaponStateAbilityByClass(struct UAbilitySystemComponent* ASC, struct UGPWeaponStateBase* Ability);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentStateAbility.GetStateTypeByAbility
	// Flags: [Final|Native|Public]
	// Offset: 0x862ded4
	// Params: [ Num(2) Size(0x9) ]
	EGPWeaponStateType GetStateTypeByAbility(struct UGPWeaponStateBase* Ability);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentStateAbility.GetAbilityTagByStateType
	// Flags: [Final|Native|Public]
	// Offset: 0x862de08
	// Params: [ Num(2) Size(0x28) ]
	struct FGameplayTagContainer GetAbilityTagByStateType(EGPWeaponStateType StateType);
	DEFINE_UE_CLASS_HELPERS(UGPWeaponDataComponentStateAbility, "GPWeaponDataComponentStateAbility")

};

// Object: Class GPWeaponRuntime.GPWeaponDataComponentStateFSM
// Size: 0x5E0 (Inherited: 0x5B8)
struct UGPWeaponDataComponentStateFSM : UGPWeaponDataComponentState
{
	struct UGPWeaponFSM* FSMClass; // 0x5B8(0x8)
	struct UGPWeaponFSM* FSMInstance; // 0x5C0(0x8)
	uint8_t Pad_0x5C8[0x18]; // 0x5C8(0x18)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponDataComponentStateFSM, "GPWeaponDataComponentStateFSM")

};

// Object: Class GPWeaponRuntime.GPWeaponDataComponentStateInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPWeaponDataComponentStateInterface : IInterface
{

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentStateInterface.SetCurrentStateType
	// Flags: [Native|Public]
	// Offset: 0x862e5a8
	// Params: [ Num(1) Size(0x1) ]
	void SetCurrentStateType(EGPWeaponStateType InStateType);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentStateInterface.ProcessRecoverActiveState
	// Flags: [Native|Public]
	// Offset: 0x862e58c
	// Params: [ Num(0) Size(0x0) ]
	void ProcessRecoverActiveState();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentStateInterface.IsReveringState
	// Flags: [Native|Public]
	// Offset: 0x862e54c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsReveringState();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentStateInterface.IsInState
	// Flags: [Native|Public]
	// Offset: 0x862e494
	// Params: [ Num(2) Size(0x2) ]
	uint8_t IsInState(EGPWeaponStateType StateType);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentStateInterface.IsInContinueFire
	// Flags: [Native|Public]
	// Offset: 0x862e454
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsInContinueFire();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentStateInterface.IsFiring
	// Flags: [Native|Public]
	// Offset: 0x862e414
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsFiring();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentStateInterface.GetStateStep
	// Flags: [Native|Public|Const]
	// Offset: 0x862e3d8
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetStateStep();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentStateInterface.GetRepStateStep
	// Flags: [Native|Public|Const]
	// Offset: 0x862e39c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetRepStateStep();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentStateInterface.GetRepLastStateType
	// Flags: [Native|Public|Const]
	// Offset: 0x862e360
	// Params: [ Num(1) Size(0x1) ]
	EGPWeaponStateType GetRepLastStateType();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentStateInterface.GetRepCurrentStateType
	// Flags: [Native|Public|Const]
	// Offset: 0x862e324
	// Params: [ Num(1) Size(0x1) ]
	EGPWeaponStateType GetRepCurrentStateType();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentStateInterface.GetLastStateType
	// Flags: [Native|Public|Const]
	// Offset: 0x862e2e8
	// Params: [ Num(1) Size(0x1) ]
	EGPWeaponStateType GetLastStateType();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentStateInterface.GetCurrentStateType
	// Flags: [Native|Public|Const]
	// Offset: 0x862e2ac
	// Params: [ Num(1) Size(0x1) ]
	EGPWeaponStateType GetCurrentStateType();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentStateInterface.GetCurrentStatePredictLeftTime
	// Flags: [Native|Public]
	// Offset: 0x862e270
	// Params: [ Num(1) Size(0x4) ]
	float GetCurrentStatePredictLeftTime();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentStateInterface.GetCurrentStatePredictDuration
	// Flags: [Native|Public]
	// Offset: 0x862e234
	// Params: [ Num(1) Size(0x4) ]
	float GetCurrentStatePredictDuration();
	DEFINE_UE_CLASS_HELPERS(IGPWeaponDataComponentStateInterface, "GPWeaponDataComponentStateInterface")

};

// Object: Class GPWeaponRuntime.GPWeaponDataComponentZoom
// Size: 0x428 (Inherited: 0x408)
struct UGPWeaponDataComponentZoom : UGPWeaponDataComponentBase
{
	uint8_t Pad_0x408[0x8]; // 0x408(0x8)
	uint8_t bEnableZoom : 1; // 0x410(0x1), Mask(0x1)
	uint8_t BitPad_0x410_1 : 7; // 0x410(0x1)
	uint8_t bEnableEquipZoom : 1; // 0x411(0x1), Mask(0x1)
	uint8_t BitPad_0x411_1 : 7; // 0x411(0x1)
	uint8_t Pad_0x412[0xE]; // 0x412(0xE)
	uint8_t bIsZooming : 1; // 0x420(0x1), Mask(0x1)
	uint8_t BitPad_0x420_1 : 7; // 0x420(0x1)
	uint8_t Pad_0x421[0x7]; // 0x421(0x7)


	// Object: Function GPWeaponRuntime.GPWeaponDataComponentZoom.ToggleZoom
	// Flags: [Native|Public]
	// Offset: 0x862e75c
	// Params: [ Num(3) Size(0x3) ]
	uint8_t ToggleZoom(int8_t ForceZoom, uint8_t IsQuickZoom);

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentZoom.OnRep_IsZooming
	// Flags: [Native|Protected]
	// Offset: 0x862e740
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_IsZooming();
	DEFINE_UE_CLASS_HELPERS(UGPWeaponDataComponentZoom, "GPWeaponDataComponentZoom")

};

// Object: Class GPWeaponRuntime.GPWeaponDataComponentZoomInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPWeaponDataComponentZoomInterface : IInterface
{

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentZoomInterface.IsZooming
	// Flags: [Native|Public]
	// Offset: 0x862e990
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsZooming();

	// Object: Function GPWeaponRuntime.GPWeaponDataComponentZoomInterface.IsEnableZoomOnReloading
	// Flags: [Native|Public]
	// Offset: 0x862e950
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsEnableZoomOnReloading();
	DEFINE_UE_CLASS_HELPERS(IGPWeaponDataComponentZoomInterface, "GPWeaponDataComponentZoomInterface")

};

// Object: Class GPWeaponRuntime.GPWeaponDataInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPWeaponDataInterface : IInterface
{

	// Object: Function GPWeaponRuntime.GPWeaponDataInterface.IsSupportComboMeleeAttack
	// Flags: [Native|Public]
	// Offset: 0x862eaf0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsSupportComboMeleeAttack();

	// Object: Function GPWeaponRuntime.GPWeaponDataInterface.GetWeaponMeleeComboData
	// Flags: [Native|Public]
	// Offset: 0x862ea2c
	// Params: [ Num(2) Size(0x48) ]
	struct FGPWeaponMeleeComboData GetWeaponMeleeComboData(int32_t InComboDataIndex);

	// Object: Function GPWeaponRuntime.GPWeaponDataInterface.GetMeleeComboMaxTimes
	// Flags: [Native|Public]
	// Offset: 0x862e9f0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetMeleeComboMaxTimes();
	DEFINE_UE_CLASS_HELPERS(IGPWeaponDataInterface, "GPWeaponDataInterface")

};

// Object: Class GPWeaponRuntime.GPWeaponDelegates
// Size: 0x118 (Inherited: 0x30)
struct UGPWeaponDelegates : UWorldSubsystem
{
	struct FMulticastInlineDelegate OnServerBeforeMakeDamageGlobal; // 0x30(0x10)
	uint8_t Pad_0x40[0xD8]; // 0x40(0xD8)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponDelegates, "GPWeaponDelegates")

};

// Object: Class GPWeaponRuntime.GPWeaponFireAssistedAimingBase
// Size: 0x40 (Inherited: 0x28)
struct UGPWeaponFireAssistedAimingBase : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	uint8_t DCFiring[0x8]; // 0x30(0x8)
	uint8_t FCFiring[0x8]; // 0x38(0x8)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFireAssistedAimingBase, "GPWeaponFireAssistedAimingBase")

};

// Object: Class GPWeaponRuntime.GPWeaponFireModeParamsBase
// Size: 0x178 (Inherited: 0x28)
struct UGPWeaponFireModeParamsBase : UObject
{
	uint8_t ShotsInOneBullet; // 0x28(0x1)
	uint8_t AmmoCost; // 0x29(0x1)
	uint8_t MaxValidBulletNumPerShot; // 0x2A(0x1)
	uint8_t Pad_0x2B[0x1]; // 0x2B(0x1)
	struct FBulletModeConfig BulletModeConfig; // 0x2C(0x18)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct FWeaponBulletBaseInitParam BulletBaseParam; // 0x48(0x130)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFireModeParamsBase, "GPWeaponFireModeParamsBase")

};

// Object: Class GPWeaponRuntime.GPWeaponFireModeBase
// Size: 0xE8 (Inherited: 0x28)
struct UGPWeaponFireModeBase : UObject
{
	uint8_t Pad_0x28[0x80]; // 0x28(0x80)
	struct TScriptInterface<IGPWeaponInterface> WeaponOwner; // 0xA8(0x10)
	uint8_t DCFiring[0x8]; // 0xB8(0x8)
	uint8_t FCFiring[0x8]; // 0xC0(0x8)
	uint8_t Params[0x8]; // 0xC8(0x8)
	struct UGPWeaponAttributeSetWeaponDamage* GPWeaponAttributeSetWeaponDamage; // 0xD0(0x8)
	uint8_t Pad_0xD8[0x10]; // 0xD8(0x10)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFireModeBase, "GPWeaponFireModeBase")

};

// Object: Class GPWeaponRuntime.GPWeaponFireModeParamsInstantHit
// Size: 0x188 (Inherited: 0x178)
struct UGPWeaponFireModeParamsInstantHit : UGPWeaponFireModeParamsBase
{
	float BulletBeginDropDistance; // 0x178(0x4)
	float DistanceBulletDropZ; // 0x17C(0x4)
	float WeaponTraceRange; // 0x180(0x4)
	uint8_t Pad_0x184[0x4]; // 0x184(0x4)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFireModeParamsInstantHit, "GPWeaponFireModeParamsInstantHit")

};

// Object: Class GPWeaponRuntime.GPWeaponFireModeInstantHit
// Size: 0x160 (Inherited: 0xE8)
struct UGPWeaponFireModeInstantHit : UGPWeaponFireModeBase
{
	struct UGPWeaponFireModeParamsInstantHit* FireModeParams; // 0xE8(0x8)
	uint8_t Pad_0xF0[0x68]; // 0xF0(0x68)
	uint8_t bEnableADSCheck : 1; // 0x158(0x1), Mask(0x1)
	uint8_t BitPad_0x158_1 : 7; // 0x158(0x1)
	uint8_t Pad_0x159[0x7]; // 0x159(0x7)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFireModeInstantHit, "GPWeaponFireModeInstantHit")

};

// Object: Class GPWeaponRuntime.GPWeaponFireModeInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPWeaponFireModeInterface : IInterface
{

	// Object: Function GPWeaponRuntime.GPWeaponFireModeInterface.GetProjectileInitSpeed
	// Flags: [Native|Public]
	// Offset: 0x862f688
	// Params: [ Num(1) Size(0x4) ]
	float GetProjectileInitSpeed();

	// Object: Function GPWeaponRuntime.GPWeaponFireModeInterface.GetFireModeParams
	// Flags: [Native|Public]
	// Offset: 0x862f64c
	// Params: [ Num(1) Size(0x8) ]
	struct UGPWeaponFireModeParamsBase* GetFireModeParams();

	// Object: Function GPWeaponRuntime.GPWeaponFireModeInterface.GetDamageRateByDistance
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x862f4e4
	// Params: [ Num(4) Size(0x94) ]
	float GetDamageRateByDistance(float Distance, uint8_t& bOutIsModifyBaseDamage, const struct FHitResult& HitResult);

	// Object: Function GPWeaponRuntime.GPWeaponFireModeInterface.GetDamageDebugInfo
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x862f420
	// Params: [ Num(1) Size(0x10) ]
	void GetDamageDebugInfo(struct FString& Result);

	// Object: Function GPWeaponRuntime.GPWeaponFireModeInterface.EnableProjectileDebugger
	// Flags: [Native|Public]
	// Offset: 0x862f3e0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t EnableProjectileDebugger();

	// Object: Function GPWeaponRuntime.GPWeaponFireModeInterface.EnableImpactDebugger
	// Flags: [Native|Public]
	// Offset: 0x862f3a0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t EnableImpactDebugger();

	// Object: Function GPWeaponRuntime.GPWeaponFireModeInterface.CheckPlacementValidAndRestoreCD
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x862f2c4
	// Params: [ Num(2) Size(0x89) ]
	uint8_t CheckPlacementValidAndRestoreCD(const struct FHitResult& HitResult);
	DEFINE_UE_CLASS_HELPERS(IGPWeaponFireModeInterface, "GPWeaponFireModeInterface")

};

// Object: Class GPWeaponRuntime.GPWeaponFireModeParamsPhysicSimulate
// Size: 0x200 (Inherited: 0x178)
struct UGPWeaponFireModeParamsPhysicSimulate : UGPWeaponFireModeParamsBase
{
	struct AGPWeaponBulletProjectile* ProjectileClass; // 0x178(0x8)
	struct AGPWeaponBulletProjectile* LaserPointerProjectileClass; // 0x180(0x8)
	struct FWeaponBulletProjectileInitParam BulletProjectileParam; // 0x188(0x60)
	struct FVector FixedStartFireDir; // 0x1E8(0xC)
	int32_t BulletSpawnLocOption; // 0x1F4(0x4)
	uint8_t Pad_0x1F8[0x8]; // 0x1F8(0x8)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFireModeParamsPhysicSimulate, "GPWeaponFireModeParamsPhysicSimulate")

};

// Object: Class GPWeaponRuntime.GPWeaponFireModePhysicSimulate
// Size: 0x100 (Inherited: 0xE8)
struct UGPWeaponFireModePhysicSimulate : UGPWeaponFireModeBase
{
	struct UGPWeaponFireModeParamsPhysicSimulate* FireModeParams; // 0xE8(0x8)
	struct TWeakObjectPtr<struct AActor> ServerHomingTarget; // 0xF0(0x8)
	uint8_t bApplyCharacterVelocityToFireTrace : 1; // 0xF8(0x1), Mask(0x1)
	uint8_t BitPad_0xF8_1 : 7; // 0xF8(0x1)
	uint8_t Pad_0xF9[0x7]; // 0xF9(0x7)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFireModePhysicSimulate, "GPWeaponFireModePhysicSimulate")

};

// Object: Class GPWeaponRuntime.WeaponFireModeParamsSpawnable
// Size: 0x198 (Inherited: 0x178)
struct UWeaponFireModeParamsSpawnable : UGPWeaponFireModeParamsBase
{
	struct FSoftObjectPath SpwanBPPath; // 0x178(0x18)
	float ActiveTime; // 0x190(0x4)
	uint8_t SpawnActorInEndFire : 1; // 0x194(0x1), Mask(0x1)
	uint8_t BitPad_0x194_1 : 7; // 0x194(0x1)
	uint8_t HideWeaponMeshInFire : 1; // 0x195(0x1), Mask(0x1)
	uint8_t BitPad_0x195_1 : 7; // 0x195(0x1)
	uint8_t HideWeaponMeshInKeep : 1; // 0x196(0x1), Mask(0x1)
	uint8_t BitPad_0x196_1 : 7; // 0x196(0x1)
	uint8_t Pad_0x197[0x1]; // 0x197(0x1)
	DEFINE_UE_CLASS_HELPERS(UWeaponFireModeParamsSpawnable, "WeaponFireModeParamsSpawnable")

};

// Object: Class GPWeaponRuntime.GPWeaponFireModeSpawnable
// Size: 0x108 (Inherited: 0xE8)
struct UGPWeaponFireModeSpawnable : UGPWeaponFireModeBase
{
	struct UWeaponFireModeParamsSpawnable* FireModeParams; // 0xE8(0x8)
	struct UObject* SpawnAbleAsset; // 0xF0(0x8)
	uint8_t bEnableCheckSpawnActor : 1; // 0xF8(0x1), Mask(0x1)
	uint8_t BitPad_0xF8_1 : 7; // 0xF8(0x1)
	uint8_t bEnableCheckUsedWeapon : 1; // 0xF9(0x1), Mask(0x1)
	uint8_t BitPad_0xF9_1 : 7; // 0xF9(0x1)
	uint8_t Pad_0xFA[0x2]; // 0xFA(0x2)
	float ActiveTime; // 0xFC(0x4)
	uint8_t Pad_0x100[0x8]; // 0x100(0x8)


	// Object: Function GPWeaponRuntime.GPWeaponFireModeSpawnable.OnPreKeep
	// Flags: [Final|Native|Protected]
	// Offset: 0x862fc5c
	// Params: [ Num(0) Size(0x0) ]
	void OnPreKeep();

	// Object: Function GPWeaponRuntime.GPWeaponFireModeSpawnable.OnLoadAssetCompleted
	// Flags: [Final|Native|Protected|HasDefaults]
	// Offset: 0x862fb58
	// Params: [ Num(1) Size(0x18) ]
	void OnLoadAssetCompleted(struct FSoftObjectPath AssetPat);

	// Object: Function GPWeaponRuntime.GPWeaponFireModeSpawnable.OnActiveFinish
	// Flags: [Final|Native|Protected]
	// Offset: 0x862fb44
	// Params: [ Num(0) Size(0x0) ]
	void OnActiveFinish();

	// Object: Function GPWeaponRuntime.GPWeaponFireModeSpawnable.DoFire
	// Flags: [Final|Native|Protected]
	// Offset: 0x862faa0
	// Params: [ Num(1) Size(0x1) ]
	void DoFire(EGPWeaponInnerEvent EventType);

	// Object: Function GPWeaponRuntime.GPWeaponFireModeSpawnable.DelaySpawnActor
	// Flags: [Final|Native|Protected]
	// Offset: 0x862fa8c
	// Params: [ Num(0) Size(0x0) ]
	void DelaySpawnActor();
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFireModeSpawnable, "GPWeaponFireModeSpawnable")

};

// Object: Class GPWeaponRuntime.GPWeaponFireModeParamsThrowable
// Size: 0x2C8 (Inherited: 0x178)
struct UGPWeaponFireModeParamsThrowable : UGPWeaponFireModeParamsBase
{
	struct AGPWeaponBulletThrowableProjectile* ProjectileClass; // 0x178(0x8)
	struct TSoftClassPtr<struct AGPWeaponBulletThrowableProjectile*> ProjectileClassBP; // 0x180(0x28)
	struct FSoftObjectPath ProjectileMesh; // 0x1A8(0x18)
	struct TSoftClassPtr<struct UAnimInstance*> ProjectileAnimationBP; // 0x1C0(0x28)
	float VelocityThrowHigh; // 0x1E8(0x4)
	float VelocityThrowLow; // 0x1EC(0x4)
	float GravityScale; // 0x1F0(0x4)
	uint8_t bUseScreenPosFire : 1; // 0x1F4(0x1), Mask(0x1)
	uint8_t BitPad_0x1F4_1 : 7; // 0x1F4(0x1)
	uint8_t bShouldBounce : 1; // 0x1F5(0x1), Mask(0x1)
	uint8_t BitPad_0x1F5_1 : 7; // 0x1F5(0x1)
	uint8_t Pad_0x1F6[0x2]; // 0x1F6(0x2)
	struct FRotator RotationRate; // 0x1F8(0xC)
	float Bounciness; // 0x204(0x4)
	float WallBounciness; // 0x208(0x4)
	float CeilingBounciness; // 0x20C(0x4)
	float Friction; // 0x210(0x4)
	float BounceVelocityStopLimited; // 0x214(0x4)
	EWeaponThrowableEffectType EffectType; // 0x218(0x1)
	EWeaponThrowableExplosionType ExplosionType; // 0x219(0x1)
	uint8_t Pad_0x21A[0x2]; // 0x21A(0x2)
	float ExplosionSeconds; // 0x21C(0x4)
	float ExplosionDurationSeconds; // 0x220(0x4)
	float DamageDistance; // 0x224(0x4)
	float FullExplodeDamageDistance; // 0x228(0x4)
	uint8_t KeepFireExcludeExplosionTime : 1; // 0x22C(0x1), Mask(0x1)
	uint8_t BitPad_0x22C_1 : 7; // 0x22C(0x1)
	uint8_t Pad_0x22D[0x3]; // 0x22D(0x3)
	float KeepFireExcludeExplosionDelayTime; // 0x230(0x4)
	float FadeOutTime; // 0x234(0x4)
	uint8_t bIsClientOnlyThrowConfig : 1; // 0x238(0x1), Mask(0x1)
	uint8_t BitPad_0x238_1 : 7; // 0x238(0x1)
	uint8_t Pad_0x239[0x3]; // 0x239(0x3)
	float MinClientFakeLerpTime; // 0x23C(0x4)
	float MaxClientFakeLerpTime; // 0x240(0x4)
	uint8_t bIsClientFakeProjectileUseSocket : 1; // 0x244(0x1), Mask(0x1)
	uint8_t BitPad_0x244_1 : 7; // 0x244(0x1)
	uint8_t bIsClientFakePreviewUseSocket : 1; // 0x245(0x1), Mask(0x1)
	uint8_t BitPad_0x245_1 : 7; // 0x245(0x1)
	uint8_t Pad_0x246[0x2]; // 0x246(0x2)
	struct FName ClientFakeSocketName; // 0x248(0x8)
	float ThrowRotationPitchAddition; // 0x250(0x4)
	float ThrowLocationHorizontalAddition; // 0x254(0x4)
	float ThrowLocationVerticalAddition; // 0x258(0x4)
	float ThrowLocationDepthAddition; // 0x25C(0x4)
	float ThrowLowRotationPitchAddition; // 0x260(0x4)
	float ThrowLowLocationHorizontalAddition; // 0x264(0x4)
	float ThrowLowLocationVerticalAddition; // 0x268(0x4)
	float ThrowPlusCharacterOwnerVelcoityFactor; // 0x26C(0x4)
	float ThrowVelocityOwnerFactorForward; // 0x270(0x4)
	float ThrowVelocityOwnerFactorBack; // 0x274(0x4)
	float ThrowVelocityOwnerFactorRight; // 0x278(0x4)
	float ThrowVelocityOwnerFactorLeft; // 0x27C(0x4)
	float ThrowVelocityOwnerFactorUp; // 0x280(0x4)
	float ThrowVelocityOwnerFactorDown; // 0x284(0x4)
	uint8_t bReEquipInFireEnd : 1; // 0x288(0x1), Mask(0x1)
	uint8_t BitPad_0x288_1 : 7; // 0x288(0x1)
	uint8_t bEnablePreviewLine : 1; // 0x289(0x1), Mask(0x1)
	uint8_t BitPad_0x289_1 : 7; // 0x289(0x1)
	uint8_t Pad_0x28A[0x6]; // 0x28A(0x6)
	struct UObject* DrawActorClass; // 0x290(0x8)
	struct FVector LenScale; // 0x298(0xC)
	uint8_t Pad_0x2A4[0x4]; // 0x2A4(0x4)
	struct AActor* PerviewActorClass; // 0x2A8(0x8)
	float PreviewNearDistance; // 0x2B0(0x4)
	float PreviewFarDistance; // 0x2B4(0x4)
	float PreviewNearScale; // 0x2B8(0x4)
	float PreviewFarScale; // 0x2BC(0x4)
	uint8_t DrawPreviewLine : 1; // 0x2C0(0x1), Mask(0x1)
	uint8_t BitPad_0x2C0_1 : 7; // 0x2C0(0x1)
	uint8_t DSValidateStartPos : 1; // 0x2C1(0x1), Mask(0x1)
	uint8_t BitPad_0x2C1_1 : 7; // 0x2C1(0x1)
	uint8_t Pad_0x2C2[0x2]; // 0x2C2(0x2)
	float DSValidateDSDistance; // 0x2C4(0x4)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFireModeParamsThrowable, "GPWeaponFireModeParamsThrowable")

};

// Object: Class GPWeaponRuntime.GPWeaponFireModeThrowable
// Size: 0x220 (Inherited: 0xE8)
struct UGPWeaponFireModeThrowable : UGPWeaponFireModeBase
{
	uint8_t bOverrideFireLocation : 1; // 0xE4(0x1), Mask(0x1)
	struct FVector OverrideFireLocation; // 0xE8(0xC)
	uint8_t BitPad_0xF4_1 : 7; // 0xF4(0x1)
	uint8_t Pad_0xF5[0x13]; // 0xF5(0x13)
	struct UGPWeaponFireModeParamsThrowable* FireModeParams; // 0x108(0x8)
	uint8_t Pad_0x110[0xD8]; // 0x110(0xD8)
	struct TArray<struct AActor*> DrawActorPool; // 0x1E8(0x10)
	uint8_t Pad_0x1F8[0x20]; // 0x1F8(0x20)
	struct AActor* PreviewActor; // 0x218(0x8)


	// Object: Function GPWeaponRuntime.GPWeaponFireModeThrowable.ValidateFirePos
	// Flags: [Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0x862fe74
	// Params: [ Num(3) Size(0x19) ]
	uint8_t ValidateFirePos(const struct FVector& FireLocation, struct FVector& OutLocation);
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFireModeThrowable, "GPWeaponFireModeThrowable")

};

// Object: Class GPWeaponRuntime.GPWeaponFireRecoilBase
// Size: 0x48 (Inherited: 0x28)
struct UGPWeaponFireRecoilBase : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	uint8_t DCFiring[0x8]; // 0x30(0x8)
	uint8_t FCFiring[0x8]; // 0x38(0x8)
	uint8_t Pad_0x40[0x8]; // 0x40(0x8)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFireRecoilBase, "GPWeaponFireRecoilBase")

};

// Object: Class GPWeaponRuntime.GPWeaponFireSocket
// Size: 0x78 (Inherited: 0x28)
struct UGPWeaponFireSocket : UObject
{
	uint8_t Pad_0x28[0x10]; // 0x28(0x10)
	struct TScriptInterface<IGPWeaponProxyInterface> GPWeaponProxy; // 0x38(0x10)
	struct TScriptInterface<IGPWeaponDataComponentAppearanceInterface> GPWeaponAppearance; // 0x48(0x10)
	uint8_t Pad_0x58[0x10]; // 0x58(0x10)
	uint8_t bFireSocketInfoDirty : 1; // 0x68(0x1), Mask(0x1)
	uint8_t BitPad_0x68_1 : 7; // 0x68(0x1)
	uint8_t Pad_0x69[0xF]; // 0x69(0xF)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFireSocket, "GPWeaponFireSocket")

};

// Object: Class GPWeaponRuntime.GPWeaponFireSocketInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPWeaponFireSocketInterface : IInterface
{

	// Object: Function GPWeaponRuntime.GPWeaponFireSocketInterface.MarkFireSocketInfoDirty
	// Flags: [Native|Public]
	// Offset: 0x8631984
	// Params: [ Num(0) Size(0x0) ]
	void MarkFireSocketInfoDirty();

	// Object: Function GPWeaponRuntime.GPWeaponFireSocketInterface.InitWeaponFireSocket
	// Flags: [Native|Public]
	// Offset: 0x863187c
	// Params: [ Num(2) Size(0x20) ]
	void InitWeaponFireSocket(struct TScriptInterface<IGPWeaponDataComponentAppearanceInterface> InGPWeaponAppearance, struct TScriptInterface<IGPWeaponProxyInterface> InGPWeaponProxy);

	// Object: Function GPWeaponRuntime.GPWeaponFireSocketInterface.GetFireSocketTransform
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x8631808
	// Params: [ Num(1) Size(0x30) ]
	struct FTransform GetFireSocketTransform();

	// Object: Function GPWeaponRuntime.GPWeaponFireSocketInterface.GetFireSocketPositions
	// Flags: [Native|Public]
	// Offset: 0x86316ac
	// Params: [ Num(4) Size(0x20) ]
	struct TArray<struct FVector> GetFireSocketPositions(EGPWeaponFireSocketMode FireSocketMode, int32_t BulletIndex, int32_t RequireSocketNum);

	// Object: Function GPWeaponRuntime.GPWeaponFireSocketInterface.GetFireSocketPosition
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x863166c
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetFireSocketPosition();

	// Object: Function GPWeaponRuntime.GPWeaponFireSocketInterface.GetFireSocketInfos
	// Flags: [Native|Public]
	// Offset: 0x8631510
	// Params: [ Num(4) Size(0x20) ]
	struct TArray<struct FFireSocketInfo> GetFireSocketInfos(EGPWeaponFireSocketMode FireSocketMode, int32_t BulletIndex, int32_t RequireSocketNum);

	// Object: Function GPWeaponRuntime.GPWeaponFireSocketInterface.GetFireSocketInfo
	// Flags: [Native|Public]
	// Offset: 0x86314d4
	// Params: [ Num(1) Size(0x10) ]
	struct FFireSocketInfo GetFireSocketInfo();
	DEFINE_UE_CLASS_HELPERS(IGPWeaponFireSocketInterface, "GPWeaponFireSocketInterface")

};

// Object: Class GPWeaponRuntime.GPWeaponFireSpreadOwnerInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPWeaponFireSpreadOwnerInterface : IInterface
{	DEFINE_UE_CLASS_HELPERS(IGPWeaponFireSpreadOwnerInterface, "GPWeaponFireSpreadOwnerInterface")

};

// Object: Class GPWeaponRuntime.GPWeaponFireSpreadBase
// Size: 0x40 (Inherited: 0x28)
struct UGPWeaponFireSpreadBase : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct TScriptInterface<IGPWeaponFireSpreadOwnerInterface> GPWeaponFireSpreadOwnerInterface; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFireSpreadBase, "GPWeaponFireSpreadBase")

};

// Object: Class GPWeaponRuntime.GPWeaponFSM
// Size: 0x390 (Inherited: 0x2D0)
struct UGPWeaponFSM : UGPFSMBase
{
	uint8_t Pad_0x2D0[0x68]; // 0x2D0(0x68)
	struct TMap<EGPWeaponStateType, struct UGPFSMStateBase*> StateTypeAndInstanceMap; // 0x338(0x50)
	struct UGPWeaponDataComponentStateFSM* DCState; // 0x388(0x8)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFSM, "GPWeaponFSM")

};

// Object: Class GPWeaponRuntime.GPWeaponFSMStateBase
// Size: 0xA8 (Inherited: 0x60)
struct UGPWeaponFSMStateBase : UGPFSMStateBase
{
	struct FName BeginEventName; // 0x60(0x8)
	struct FName FinishEventName; // 0x68(0x8)
	struct FName SkipEventName; // 0x70(0x8)
	struct UGPWeaponFSM* FSMWeapon; // 0x78(0x8)
	struct TScriptInterface<IGPWeaponInterface> WeaponOwner; // 0x80(0x10)
	struct TScriptInterface<IGPWeaponDataInterface> DCData; // 0x90(0x10)
	uint8_t Pad_0xA0[0x8]; // 0xA0(0x8)


	// Object: Function GPWeaponRuntime.GPWeaponFSMStateBase.OnPredictFinishTimeReach
	// Flags: [Native|Protected]
	// Offset: 0x8631ccc
	// Params: [ Num(0) Size(0x0) ]
	void OnPredictFinishTimeReach();
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFSMStateBase, "GPWeaponFSMStateBase")

};

// Object: Class GPWeaponRuntime.GPWeaponFSMSSawAttackState
// Size: 0xC0 (Inherited: 0xA8)
struct UGPWeaponFSMSSawAttackState : UGPWeaponFSMStateBase
{
	uint8_t Pad_0xA8[0xC]; // 0xA8(0xC)
	float EnterSawAttackLogicTime; // 0xB4(0x4)
	float SawAttackInteralTime; // 0xB8(0x4)
	uint8_t Pad_0xBC[0x4]; // 0xBC(0x4)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFSMSSawAttackState, "GPWeaponFSMSSawAttackState")

};

// Object: Class GPWeaponRuntime.GPWeaponFSMStateActive
// Size: 0x140 (Inherited: 0xA8)
struct UGPWeaponFSMStateActive : UGPWeaponFSMStateBase
{
	uint8_t bEnableAutoFire : 1; // 0xA8(0x1), Mask(0x1)
	uint8_t BitPad_0xA8_1 : 7; // 0xA8(0x1)
	uint8_t Pad_0xA9[0x7]; // 0xA9(0x7)
	struct TScriptInterface<IGPWeaponDataComponentFiringInterface> DCFiring; // 0xB0(0x10)
	struct UGPWeaponFSM* WeaponFSM; // 0xC0(0x8)
	uint8_t Pad_0xC8[0x78]; // 0xC8(0x78)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFSMStateActive, "GPWeaponFSMStateActive")

};

// Object: Class GPWeaponRuntime.GPWeaponFSMStateActive_Bow
// Size: 0x140 (Inherited: 0x140)
struct UGPWeaponFSMStateActive_Bow : UGPWeaponFSMStateActive
{	DEFINE_UE_CLASS_HELPERS(UGPWeaponFSMStateActive_Bow, "GPWeaponFSMStateActive_Bow")

};

// Object: Class GPWeaponRuntime.GPWeaponFSMStateAutoFireActive
// Size: 0xC0 (Inherited: 0xA8)
struct UGPWeaponFSMStateAutoFireActive : UGPWeaponFSMStateBase
{
	struct TScriptInterface<IGPWeaponDataComponentFiringInterface> DCFiring; // 0xA8(0x10)
	int32_t AutoFireCount; // 0xB8(0x4)
	uint8_t Pad_0xBC[0x4]; // 0xBC(0x4)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFSMStateAutoFireActive, "GPWeaponFSMStateAutoFireActive")

};

// Object: Class GPWeaponRuntime.GPWeaponFSMStateBreakableEquip
// Size: 0xB8 (Inherited: 0xA8)
struct UGPWeaponFSMStateBreakableEquip : UGPWeaponFSMStateBase
{
	uint8_t Pad_0xA8[0x2]; // 0xA8(0x2)
	uint8_t EndStateGotoFireState : 1; // 0xAA(0x1), Mask(0x1)
	uint8_t BitPad_0xAA_1 : 7; // 0xAA(0x1)
	uint8_t Pad_0xAB[0x1]; // 0xAB(0x1)
	struct FName BreakToFireStateName; // 0xAC(0x8)
	uint8_t BreakImmediately : 1; // 0xB4(0x1), Mask(0x1)
	uint8_t BitPad_0xB4_1 : 7; // 0xB4(0x1)
	uint8_t Pad_0xB5[0x3]; // 0xB5(0x3)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFSMStateBreakableEquip, "GPWeaponFSMStateBreakableEquip")

};

// Object: Class GPWeaponRuntime.GPWeaponFSMStateCancelPreFire
// Size: 0xB0 (Inherited: 0xA8)
struct UGPWeaponFSMStateCancelPreFire : UGPWeaponFSMStateBase
{
	uint8_t Pad_0xA8[0x8]; // 0xA8(0x8)


	// Object: Function GPWeaponRuntime.GPWeaponFSMStateCancelPreFire.OnCancelPreFire
	// Flags: [Final|Native|Public]
	// Offset: 0x8631dbc
	// Params: [ Num(0) Size(0x0) ]
	void OnCancelPreFire();
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFSMStateCancelPreFire, "GPWeaponFSMStateCancelPreFire")

};

// Object: Class GPWeaponRuntime.GPWeaponFSMStateCancelPreFire_Throw
// Size: 0xC0 (Inherited: 0xB0)
struct UGPWeaponFSMStateCancelPreFire_Throw : UGPWeaponFSMStateCancelPreFire
{
	struct FName RegularCancelPreFireFinishEvent; // 0xB0(0x8)
	struct FName FastCancelPreFireFinishEvent; // 0xB8(0x8)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFSMStateCancelPreFire_Throw, "GPWeaponFSMStateCancelPreFire_Throw")

};

// Object: Class GPWeaponRuntime.GPWeaponFSMStateChamber
// Size: 0xC8 (Inherited: 0xA8)
struct UGPWeaponFSMStateChamber : UGPWeaponFSMStateBase
{
	struct TScriptInterface<IGPWeaponDataComponentFiringInterface> DCFiring; // 0xA8(0x10)
	uint8_t Pad_0xB8[0x10]; // 0xB8(0x10)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFSMStateChamber, "GPWeaponFSMStateChamber")

};

// Object: Class GPWeaponRuntime.GPWeaponFSMStateChangeClip
// Size: 0x100 (Inherited: 0xA8)
struct UGPWeaponFSMStateChangeClip : UGPWeaponFSMStateBase
{
	uint8_t Pad_0xA8[0x10]; // 0xA8(0x10)
	struct TScriptInterface<IGPWeaponDataComponentFiringInterface> DCFiring; // 0xB8(0x10)
	uint8_t Pad_0xC8[0x38]; // 0xC8(0x38)


	// Object: Function GPWeaponRuntime.GPWeaponFSMStateChangeClip.ReloadAmmoDelay
	// Flags: [Native|Protected]
	// Offset: 0x8631df0
	// Params: [ Num(0) Size(0x0) ]
	void ReloadAmmoDelay();
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFSMStateChangeClip, "GPWeaponFSMStateChangeClip")

};

// Object: Class GPWeaponRuntime.GPWeaponFSMStateConditionEquip
// Size: 0xC8 (Inherited: 0xA8)
struct UGPWeaponFSMStateConditionEquip : UGPWeaponFSMStateBase
{
	uint8_t Pad_0xA8[0x4]; // 0xA8(0x4)
	struct FName EndFireEvent; // 0xAC(0x8)
	uint8_t bNeedSetFireEndBlackBoard : 1; // 0xB4(0x1), Mask(0x1)
	uint8_t BitPad_0xB4_1 : 7; // 0xB4(0x1)
	uint8_t Pad_0xB5[0x3]; // 0xB5(0x3)
	struct FName EndFire_BreakEvent_GotoStateName; // 0xB8(0x8)
	struct FName ManualExitGoToStateNameIfStopFire; // 0xC0(0x8)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFSMStateConditionEquip, "GPWeaponFSMStateConditionEquip")

};

// Object: Class GPWeaponRuntime.GPWeaponFSMStateConditionEquip_Bow
// Size: 0xC8 (Inherited: 0xC8)
struct UGPWeaponFSMStateConditionEquip_Bow : UGPWeaponFSMStateConditionEquip
{	DEFINE_UE_CLASS_HELPERS(UGPWeaponFSMStateConditionEquip_Bow, "GPWeaponFSMStateConditionEquip_Bow")

};

// Object: Class GPWeaponRuntime.GPWeaponFSMStateConditionEquip_Throw
// Size: 0xD8 (Inherited: 0xA8)
struct UGPWeaponFSMStateConditionEquip_Throw : UGPWeaponFSMStateBase
{
	uint8_t Pad_0xA8[0x3]; // 0xA8(0x3)
	uint8_t EndStateGotoFireState : 1; // 0xAB(0x1), Mask(0x1)
	uint8_t BitPad_0xAB_1 : 7; // 0xAB(0x1)
	uint8_t NeedSetFireEndBlackBoard : 1; // 0xAC(0x1), Mask(0x1)
	uint8_t BitPad_0xAC_1 : 7; // 0xAC(0x1)
	uint8_t Pad_0xAD[0x3]; // 0xAD(0x3)
	struct FName FastThrowNextStateName; // 0xB0(0x8)
	struct FName FastThrowEndStateName; // 0xB8(0x8)
	uint8_t BreakImmediately : 1; // 0xC0(0x1), Mask(0x1)
	uint8_t BitPad_0xC0_1 : 7; // 0xC0(0x1)
	uint8_t Pad_0xC1[0x3]; // 0xC1(0x3)
	struct FName RegularThrowNextStateName; // 0xC4(0x8)
	struct FName RegularThrowEndStateName; // 0xCC(0x8)
	uint8_t Pad_0xD4[0x4]; // 0xD4(0x4)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFSMStateConditionEquip_Throw, "GPWeaponFSMStateConditionEquip_Throw")

};

// Object: Class GPWeaponRuntime.GPWeaponFSMStateFiring
// Size: 0xE0 (Inherited: 0xA8)
struct UGPWeaponFSMStateFiring : UGPWeaponFSMStateBase
{
	struct UGPFireModeProxy* FireModeProxy; // 0xA8(0x8)
	uint8_t Pad_0xB0[0x18]; // 0xB0(0x18)
	struct TScriptInterface<IGPWeaponDataComponentFiringInterface> DCFiring; // 0xC8(0x10)
	uint8_t Pad_0xD8[0x8]; // 0xD8(0x8)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFSMStateFiring, "GPWeaponFSMStateFiring")

};

// Object: Class GPWeaponRuntime.BowFireModeProxy
// Size: 0x88 (Inherited: 0x28)
struct UBowFireModeProxy : UObject
{
	uint8_t Pad_0x28[0x50]; // 0x28(0x50)
	struct UGPWeaponFSMStateFiring_Bow* StateFiring; // 0x78(0x8)
	uint8_t Pad_0x80[0x8]; // 0x80(0x8)
	DEFINE_UE_CLASS_HELPERS(UBowFireModeProxy, "BowFireModeProxy")

};

// Object: Class GPWeaponRuntime.GPWeaponFSMStateFiring_Bow
// Size: 0xE8 (Inherited: 0xA8)
struct UGPWeaponFSMStateFiring_Bow : UGPWeaponFSMStateBase
{
	uint8_t Pad_0xA8[0x8]; // 0xA8(0x8)
	struct UBowFireModeProxy* FireModeProxy; // 0xB0(0x8)
	uint8_t Pad_0xB8[0x10]; // 0xB8(0x10)
	struct TScriptInterface<IGPWeaponDataComponentFiringInterface> DCFiring; // 0xC8(0x10)
	uint8_t Pad_0xD8[0x10]; // 0xD8(0x10)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFSMStateFiring_Bow, "GPWeaponFSMStateFiring_Bow")

};

// Object: Class GPWeaponRuntime.FireModeProxy_CBow
// Size: 0xA8 (Inherited: 0xA8)
struct UFireModeProxy_CBow : UGPFireModeProxy
{	DEFINE_UE_CLASS_HELPERS(UFireModeProxy_CBow, "FireModeProxy_CBow")

};

// Object: Class GPWeaponRuntime.GPWeaponFSMStateFiring_CBow
// Size: 0xE8 (Inherited: 0xE0)
struct UGPWeaponFSMStateFiring_CBow : UGPWeaponFSMStateFiring
{
	struct UFireModeProxy_CBow* FireModeProxy_CompoundBow; // 0xE0(0x8)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFSMStateFiring_CBow, "GPWeaponFSMStateFiring_CBow")

};

// Object: Class GPWeaponRuntime.ChargeFireModeProxy
// Size: 0x88 (Inherited: 0x28)
struct UChargeFireModeProxy : UObject
{
	uint8_t Pad_0x28[0x50]; // 0x28(0x50)
	struct UGPWeaponFSMStateFiring_ChargeGun* StateFiring; // 0x78(0x8)
	uint8_t Pad_0x80[0x8]; // 0x80(0x8)
	DEFINE_UE_CLASS_HELPERS(UChargeFireModeProxy, "ChargeFireModeProxy")

};

// Object: Class GPWeaponRuntime.GPWeaponFSMStateFiring_ChargeGun
// Size: 0xE0 (Inherited: 0xA8)
struct UGPWeaponFSMStateFiring_ChargeGun : UGPWeaponFSMStateBase
{
	struct UChargeFireModeProxy* FireModeProxy; // 0xA8(0x8)
	uint8_t Pad_0xB0[0x10]; // 0xB0(0x10)
	struct TScriptInterface<IGPWeaponDataComponentFiringInterface> DCFiring; // 0xC0(0x10)
	uint8_t Pad_0xD0[0x10]; // 0xD0(0x10)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFSMStateFiring_ChargeGun, "GPWeaponFSMStateFiring_ChargeGun")

};

// Object: Class GPWeaponRuntime.LauncherFireModeProxy
// Size: 0xC0 (Inherited: 0x28)
struct ULauncherFireModeProxy : UObject
{
	uint8_t Pad_0x28[0x90]; // 0x28(0x90)
	struct UGPWeaponFSMStateFiring_Launcher* StateFiring; // 0xB8(0x8)
	DEFINE_UE_CLASS_HELPERS(ULauncherFireModeProxy, "LauncherFireModeProxy")

};

// Object: Class GPWeaponRuntime.GPWeaponFSMStateFiring_Launcher
// Size: 0x110 (Inherited: 0xA8)
struct UGPWeaponFSMStateFiring_Launcher : UGPWeaponFSMStateBase
{
	struct TArray<float> FireAnimTimeList; // 0xA8(0x10)
	struct TArray<float> FireDelayTimeList; // 0xB8(0x10)
	float TimerTickRate; // 0xC8(0x4)
	uint8_t Pad_0xCC[0x4]; // 0xCC(0x4)
	struct ULauncherFireModeProxy* FireModeProxy; // 0xD0(0x8)
	uint8_t Pad_0xD8[0x18]; // 0xD8(0x18)
	struct TScriptInterface<IGPWeaponDataComponentFiringInterface> DCFiring; // 0xF0(0x10)
	uint8_t Pad_0x100[0x4]; // 0x100(0x4)
	float Timer; // 0x104(0x4)
	struct FTimerHandle TimerTickHandle; // 0x108(0x8)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFSMStateFiring_Launcher, "GPWeaponFSMStateFiring_Launcher")

};

// Object: Class GPWeaponRuntime.GPWeaponFSMStateFlamethrowerPrefire
// Size: 0xB0 (Inherited: 0xA8)
struct UGPWeaponFSMStateFlamethrowerPrefire : UGPWeaponFSMStateBase
{
	float StateDuration; // 0xA8(0x4)
	uint8_t Pad_0xAC[0x4]; // 0xAC(0x4)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFSMStateFlamethrowerPrefire, "GPWeaponFSMStateFlamethrowerPrefire")

};

// Object: Class GPWeaponRuntime.GPWeaponFSMStateKeepPreFire_Throw
// Size: 0xC0 (Inherited: 0xA8)
struct UGPWeaponFSMStateKeepPreFire_Throw : UGPWeaponFSMStateBase
{
	struct FName IllegalDirectThrowEndFireName; // 0xA8(0x8)
	struct FName LegalDirectThrowEndFireName; // 0xB0(0x8)
	uint8_t Pad_0xB8[0x8]; // 0xB8(0x8)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFSMStateKeepPreFire_Throw, "GPWeaponFSMStateKeepPreFire_Throw")

};

// Object: Class GPWeaponRuntime.GPWeaponFSMStateMeleeFiring
// Size: 0xF0 (Inherited: 0xE0)
struct UGPWeaponFSMStateMeleeFiring : UGPWeaponFSMStateFiring
{
	uint8_t Pad_0xE0[0x10]; // 0xE0(0x10)


	// Object: Function GPWeaponRuntime.GPWeaponFSMStateMeleeFiring.RefreshMeleeComboAttack
	// Flags: [Final|Native|Public]
	// Offset: 0x86322a8
	// Params: [ Num(0) Size(0x0) ]
	void RefreshMeleeComboAttack();
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFSMStateMeleeFiring, "GPWeaponFSMStateMeleeFiring")

};

// Object: Class GPWeaponRuntime.GPWeaponFSMStatePostFire
// Size: 0xC0 (Inherited: 0xA8)
struct UGPWeaponFSMStatePostFire : UGPWeaponFSMStateBase
{
	uint8_t Pad_0xA8[0x18]; // 0xA8(0x18)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFSMStatePostFire, "GPWeaponFSMStatePostFire")

};

// Object: Class GPWeaponRuntime.GPWeaponFSMStatePrefire
// Size: 0x100 (Inherited: 0xA8)
struct UGPWeaponFSMStatePrefire : UGPWeaponFSMStateBase
{
	struct TScriptInterface<IGPWeaponDataComponentFiringInterface> DCFiring; // 0xA8(0x10)
	uint8_t Pad_0xB8[0x2B]; // 0xB8(0x2B)
	uint8_t bCheckCanFire : 1; // 0xE3(0x1), Mask(0x1)
	uint8_t BitPad_0xE3_1 : 7; // 0xE3(0x1)
	uint8_t bCheckInputAutoFire : 1; // 0xE4(0x1), Mask(0x1)
	uint8_t BitPad_0xE4_1 : 7; // 0xE4(0x1)
	uint8_t Pad_0xE5[0x3]; // 0xE5(0x3)
	struct FName ManualExitGoToStateNameIfStopFire; // 0xE8(0x8)
	struct FName ManualExitGoToStateNameIfCancelFire; // 0xF0(0x8)
	uint8_t bBreakablePrefire : 1; // 0xF8(0x1), Mask(0x1)
	uint8_t BitPad_0xF8_1 : 7; // 0xF8(0x1)
	uint8_t Pad_0xF9[0x7]; // 0xF9(0x7)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFSMStatePrefire, "GPWeaponFSMStatePrefire")

};

// Object: Class GPWeaponRuntime.GPWeaponFSMStateThrow
// Size: 0xD0 (Inherited: 0xA8)
struct UGPWeaponFSMStateThrow : UGPWeaponFSMStateBase
{
	uint8_t bCheckCanFire : 1; // 0xA8(0x1), Mask(0x1)
	uint8_t BitPad_0xA8_1 : 7; // 0xA8(0x1)
	uint8_t Pad_0xA9[0x3]; // 0xA9(0x3)
	float FireIntervalFactor; // 0xAC(0x4)
	struct FName PutWeaponToStateLater; // 0xB0(0x8)
	struct FName InavtiveEventName; // 0xB8(0x8)
	struct FName PutBackEventName; // 0xC0(0x8)
	uint8_t Pad_0xC8[0x8]; // 0xC8(0x8)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFSMStateThrow, "GPWeaponFSMStateThrow")

};

// Object: Class GPWeaponRuntime.GPWeaponFSMStateThrowActive
// Size: 0x140 (Inherited: 0x140)
struct UGPWeaponFSMStateThrowActive : UGPWeaponFSMStateActive
{	DEFINE_UE_CLASS_HELPERS(UGPWeaponFSMStateThrowActive, "GPWeaponFSMStateThrowActive")

};

// Object: Class GPWeaponRuntime.GPWeaponFSMStateThrowFiring_C103Smoke
// Size: 0xF0 (Inherited: 0xA8)
struct UGPWeaponFSMStateThrowFiring_C103Smoke : UGPWeaponFSMStateBase
{
	uint8_t bCheckCanFire : 1; // 0xA8(0x1), Mask(0x1)
	uint8_t BitPad_0xA8_1 : 7; // 0xA8(0x1)
	uint8_t Pad_0xA9[0x3]; // 0xA9(0x3)
	float FireIntervalFactor; // 0xAC(0x4)
	struct FName PutWeaponToStateLater; // 0xB0(0x8)
	struct FName InavtiveEventName; // 0xB8(0x8)
	struct FName PutBackEventName; // 0xC0(0x8)
	uint8_t Pad_0xC8[0x28]; // 0xC8(0x28)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFSMStateThrowFiring_C103Smoke, "GPWeaponFSMStateThrowFiring_C103Smoke")

};

// Object: Class GPWeaponRuntime.GPWeaponFSMStateTimeOut
// Size: 0xC8 (Inherited: 0xA8)
struct UGPWeaponFSMStateTimeOut : UGPWeaponFSMStateBase
{
	struct FWeaponEventData_TimeOut CacheEventObject; // 0xA8(0x18)
	uint8_t Pad_0xC0[0x8]; // 0xC0(0x8)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFSMStateTimeOut, "GPWeaponFSMStateTimeOut")

};

// Object: Class GPWeaponRuntime.GPWeaponFuncComponentBase
// Size: 0x168 (Inherited: 0x160)
struct UGPWeaponFuncComponentBase : UGPWeaponComponentImplement
{
	EGPComponentSpawnCondition CompSpawnCondition; // 0x160(0x1)
	uint8_t Pad_0x161[0x7]; // 0x161(0x7)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFuncComponentBase, "GPWeaponFuncComponentBase")

};

// Object: Class GPWeaponRuntime.GPWeaponFuncComponentAdapter
// Size: 0x168 (Inherited: 0x168)
struct UGPWeaponFuncComponentAdapter : UGPWeaponFuncComponentBase
{	DEFINE_UE_CLASS_HELPERS(UGPWeaponFuncComponentAdapter, "GPWeaponFuncComponentAdapter")

};

// Object: Class GPWeaponRuntime.GPWeaponFuncComponentAnim
// Size: 0x160 (Inherited: 0x158)
struct UGPWeaponFuncComponentAnim : UGPWeaponViewComponentBase
{
	struct UGPWeaponDataComponentAnim* DCAnim; // 0x158(0x8)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFuncComponentAnim, "GPWeaponFuncComponentAnim")

};

// Object: Class GPWeaponRuntime.GPWeaponFuncComponentAppearance
// Size: 0x258 (Inherited: 0x158)
struct UGPWeaponFuncComponentAppearance : UGPWeaponViewComponentBase
{
	uint8_t Pad_0x158[0x10]; // 0x158(0x10)
	struct TScriptInterface<IGPWeaponDataComponentAppearanceInterface> DCAppearance; // 0x168(0x10)
	uint8_t Pad_0x178[0xCC]; // 0x178(0xCC)
	uint8_t bEnableFirstPersonThrowableWeaponTextureFullMipLevel : 1; // 0x244(0x1), Mask(0x1)
	uint8_t BitPad_0x244_1 : 7; // 0x244(0x1)
	uint8_t Pad_0x245[0x3]; // 0x245(0x3)
	struct TArray<struct UTexture*> CacheForceKeepFullMipLevels; // 0x248(0x10)


	// Object: Function GPWeaponRuntime.GPWeaponFuncComponentAppearance.UnSetForceKeepFullMipLevels
	// Flags: [Final|Native|Protected]
	// Offset: 0x8632a5c
	// Params: [ Num(0) Size(0x0) ]
	void UnSetForceKeepFullMipLevels();

	// Object: Function GPWeaponRuntime.GPWeaponFuncComponentAppearance.SetForceKeepFullMipLevels
	// Flags: [Final|Native|Protected]
	// Offset: 0x86329b8
	// Params: [ Num(1) Size(0x8) ]
	void SetForceKeepFullMipLevels(struct USkeletalMeshComponent* InMeshComponent);

	// Object: Function GPWeaponRuntime.GPWeaponFuncComponentAppearance.RefreshWeaponLod
	// Flags: [Final|Native|Protected]
	// Offset: 0x86329a4
	// Params: [ Num(0) Size(0x0) ]
	void RefreshWeaponLod();

	// Object: Function GPWeaponRuntime.GPWeaponFuncComponentAppearance.ProcessNoneSocket
	// Flags: [Native|Protected]
	// Offset: 0x86328b4
	// Params: [ Num(2) Size(0x10) ]
	void ProcessNoneSocket(uint8_t bAttachToHand, struct USkeletalMeshComponent* MeshComp);

	// Object: Function GPWeaponRuntime.GPWeaponFuncComponentAppearance.OnWeaponMeshLoaded
	// Flags: [Native|Protected]
	// Offset: 0x863264c
	// Params: [ Num(2) Size(0xC0) ]
	void OnWeaponMeshLoaded(struct USkeletalMeshComponent* MeshComp, struct FGPWeaponMesh WeaponMesh);

	// Object: Function GPWeaponRuntime.GPWeaponFuncComponentAppearance.OnWeaponMeshAnimInstLoaded
	// Flags: [Native|Protected]
	// Offset: 0x86323e4
	// Params: [ Num(2) Size(0xC0) ]
	void OnWeaponMeshAnimInstLoaded(struct USkeletalMeshComponent* MeshComp, struct FGPWeaponMesh MeshInfo);

	// Object: Function GPWeaponRuntime.GPWeaponFuncComponentAppearance.OnCharacterMeshLoaded
	// Flags: [Native|Protected]
	// Offset: 0x86323c8
	// Params: [ Num(0) Size(0x0) ]
	void OnCharacterMeshLoaded();

	// Object: Function GPWeaponRuntime.GPWeaponFuncComponentAppearance.OnCharacterEquipmentVisibleChanged
	// Flags: [Native|Protected|HasOutParms]
	// Offset: 0xe7aa830
	// Params: [ Num(2) Size(0xC) ]
	void OnCharacterEquipmentVisibleChanged(uint8_t bVisible, const struct FName& ItemID);

	// Object: Function GPWeaponRuntime.GPWeaponFuncComponentAppearance.OnCameraModeChanged
	// Flags: [Native|Protected]
	// Offset: 0xe7a51b0
	// Params: [ Num(1) Size(0x1) ]
	void OnCameraModeChanged(uint8_t bNewFPP);
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFuncComponentAppearance, "GPWeaponFuncComponentAppearance")

};

// Object: Class GPWeaponRuntime.GPWeaponFuncComponentAppearanceInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPWeaponFuncComponentAppearanceInterface : IInterface
{

	// Object: Function GPWeaponRuntime.GPWeaponFuncComponentAppearanceInterface.UpdateWeaponMeshVisibility
	// Flags: [Native|Public]
	// Offset: 0x863305c
	// Params: [ Num(1) Size(0x1) ]
	void UpdateWeaponMeshVisibility(uint8_t bForceRefreshMeshStatus);

	// Object: Function GPWeaponRuntime.GPWeaponFuncComponentAppearanceInterface.ShouldHideWeaponMesh
	// Flags: [Native|Public]
	// Offset: 0x8633020
	// Params: [ Num(1) Size(0x1) ]
	uint8_t ShouldHideWeaponMesh();

	// Object: Function GPWeaponRuntime.GPWeaponFuncComponentAppearanceInterface.SetWeaponRenderMode
	// Flags: [Native|Public]
	// Offset: 0x8632f74
	// Params: [ Num(1) Size(0x1) ]
	void SetWeaponRenderMode(ERenderMatrixMode RenderMatrixMode);

	// Object: Function GPWeaponRuntime.GPWeaponFuncComponentAppearanceInterface.SetTickInterval
	// Flags: [Native|Public]
	// Offset: 0x8632ec8
	// Params: [ Num(1) Size(0x4) ]
	void SetTickInterval(float TickInterval);

	// Object: Function GPWeaponRuntime.GPWeaponFuncComponentAppearanceInterface.RefreshWeaponAttachInternal
	// Flags: [Native|Public]
	// Offset: 0x8632e14
	// Params: [ Num(1) Size(0x1) ]
	void RefreshWeaponAttachInternal(uint8_t bAttachToHand);

	// Object: Function GPWeaponRuntime.GPWeaponFuncComponentAppearanceInterface.RefreshWeaponAttach
	// Flags: [Native|Public]
	// Offset: 0x8632df8
	// Params: [ Num(0) Size(0x0) ]
	void RefreshWeaponAttach();

	// Object: Function GPWeaponRuntime.GPWeaponFuncComponentAppearanceInterface.OnWeaponAttachChanged
	// Flags: [Native|Public]
	// Offset: 0x8632d44
	// Params: [ Num(1) Size(0x1) ]
	void OnWeaponAttachChanged(uint8_t bAttachToHand);

	// Object: Function GPWeaponRuntime.GPWeaponFuncComponentAppearanceInterface.GetCurrentAttachBackSocket
	// Flags: [Native|Public]
	// Offset: 0x8632d08
	// Params: [ Num(1) Size(0x1) ]
	EGPWeaponAttachBackSocket GetCurrentAttachBackSocket();

	// Object: Function GPWeaponRuntime.GPWeaponFuncComponentAppearanceInterface.AttachMeshToSocket
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x8632c08
	// Params: [ Num(2) Size(0xC) ]
	void AttachMeshToSocket(uint8_t bMainMesh, const struct FName& TargetSocket);

	// Object: Function GPWeaponRuntime.GPWeaponFuncComponentAppearanceInterface.ApplyWeaponScale
	// Flags: [Native|Public]
	// Offset: 0x8632b5c
	// Params: [ Num(1) Size(0x4) ]
	void ApplyWeaponScale(float InScale);
	DEFINE_UE_CLASS_HELPERS(IGPWeaponFuncComponentAppearanceInterface, "GPWeaponFuncComponentAppearanceInterface")

};

// Object: Class GPWeaponRuntime.GPWeaponFuncComponentDamage
// Size: 0x168 (Inherited: 0x168)
struct UGPWeaponFuncComponentDamage : UGPWeaponFuncComponentBase
{	DEFINE_UE_CLASS_HELPERS(UGPWeaponFuncComponentDamage, "GPWeaponFuncComponentDamage")

};

// Object: Class GPWeaponRuntime.GPWeaponFuncComponentFiring
// Size: 0x188 (Inherited: 0x168)
struct UGPWeaponFuncComponentFiring : UGPWeaponFuncComponentBase
{
	uint8_t Pad_0x168[0x8]; // 0x168(0x8)
	uint8_t CurrentFireMode[0x8]; // 0x170(0x8)
	uint8_t DCFiring[0x8]; // 0x178(0x8)
	uint8_t Pad_0x180[0x8]; // 0x180(0x8)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFuncComponentFiring, "GPWeaponFuncComponentFiring")

};

// Object: Class GPWeaponRuntime.GPWeaponFuncComponentFiringInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPWeaponFuncComponentFiringInterface : IInterface
{	DEFINE_UE_CLASS_HELPERS(IGPWeaponFuncComponentFiringInterface, "GPWeaponFuncComponentFiringInterface")

};

// Object: Class GPWeaponRuntime.GPWeaponFuncComponentState
// Size: 0x168 (Inherited: 0x168)
struct UGPWeaponFuncComponentState : UGPWeaponFuncComponentBase
{	DEFINE_UE_CLASS_HELPERS(UGPWeaponFuncComponentState, "GPWeaponFuncComponentState")

};

// Object: Class GPWeaponRuntime.GPWeaponFuncComponentZoom
// Size: 0x168 (Inherited: 0x168)
struct UGPWeaponFuncComponentZoom : UGPWeaponFuncComponentBase
{	DEFINE_UE_CLASS_HELPERS(UGPWeaponFuncComponentZoom, "GPWeaponFuncComponentZoom")

};

// Object: Class GPWeaponRuntime.GPWeaponGlobals
// Size: 0x460 (Inherited: 0x28)
struct UGPWeaponGlobals : UObject
{
	ECollisionChannel WeaponTraceChannel; // 0x28(0x1)
	ECollisionChannel WeaponOverlapCharacterTraceChannel; // 0x29(0x1)
	ECollisionChannel ProjectileTraceChannel; // 0x2A(0x1)
	ECollisionChannel WeaponAmbientTraceChannel; // 0x2B(0x1)
	ECollisionChannel FireFlameTraceChannel; // 0x2C(0x1)
	ECollisionChannel RadialDamageChannel; // 0x2D(0x1)
	uint8_t Pad_0x2E[0x2]; // 0x2E(0x2)
	struct FName ProjectileProfileName; // 0x30(0x8)
	struct FName MeleeFireStartBoneName; // 0x38(0x8)
	struct TMap<EGPWeaponAppearanceAttachType, struct FWeaponSocketInfo> WeaponEquipSockets; // 0x40(0x50)
	struct TMap<EGPWeaponAppearanceAttachType, struct FWeaponSocketInfo> WeaponAttachSockets; // 0x90(0x50)
	struct TMap<EGPWeaponAppearanceAttachType, struct FWeaponSocketInfo> WeaponAttachSocketsWithBag; // 0xE0(0x50)
	struct TMap<EGPWeaponAppearanceAttachType, struct FWeaponSocketInfo> WeaponAttachSocketsWithArmor; // 0x130(0x50)
	struct TMap<uint8_t, struct FWeaponSocketItem> WeaponAttachSocketsForWeaponType; // 0x180(0x50)
	struct TMap<EGPWeaponAppearanceAttachType, struct FWeaponSocketInfo> SecondaryWeaponEquipSockets; // 0x1D0(0x50)
	struct TMap<EGPWeaponAppearanceAttachType, struct FWeaponSocketInfo> SecondaryWeaponAttachSockets; // 0x220(0x50)
	struct TMap<EGPWeaponAppearanceAttachType, struct FWeaponSocketInfo> SecondaryWeaponAttachSocketsWithBag; // 0x270(0x50)
	struct TMap<uint8_t, struct FWeaponSocketItem> SecondaryWeaponAttachSocketsForWeaponType; // 0x2C0(0x50)
	struct FWeaponPendantOption WeaponPendantOption; // 0x310(0x10)
	uint8_t bAssistedAimingEnable : 1; // 0x320(0x1), Mask(0x1)
	uint8_t BitPad_0x320_1 : 7; // 0x320(0x1)
	uint8_t Pad_0x321[0x3]; // 0x321(0x3)
	int32_t AssistedAimingTargetCapsuleHalfHeight; // 0x324(0x4)
	int32_t AssistedAimingTargetCapsuleRadius; // 0x328(0x4)
	uint8_t bAimAssistorEnable : 1; // 0x32C(0x1), Mask(0x1)
	uint8_t BitPad_0x32C_1 : 7; // 0x32C(0x1)
	uint8_t Pad_0x32D[0x3]; // 0x32D(0x3)
	int32_t AimAssistorLineTraceMaxNum; // 0x330(0x4)
	ECollisionChannel WeaponAimAssistorTraceChannel; // 0x334(0x1)
	uint8_t Pad_0x335[0x3]; // 0x335(0x3)
	struct FName AimAssistorAimCapsuleCollisionProfile; // 0x338(0x8)
	float AimAssistorAimCapsuleRadius; // 0x340(0x4)
	float AimAssistorAimCapsuleHalfHeight; // 0x344(0x4)
	float AimAssistorAimCapsuleCrouchedHalfHeight; // 0x348(0x4)
	float AimAssistorAimCapsuleLieDownHalfHeight; // 0x34C(0x4)
	float AimAssistorAimCapsuleSwimHalfHeight; // 0x350(0x4)
	uint8_t Pad_0x354[0x4]; // 0x354(0x4)
	struct TArray<struct FName> BasicFireSocketNames; // 0x358(0x10)
	struct TArray<struct FName> ExtraFireSocketNames; // 0x368(0x10)
	struct UAnimInstance* BulletHideAnimationBPClass; // 0x378(0x8)
	uint8_t BulletHideBulletVisibleCount; // 0x380(0x1)
	uint8_t Pad_0x381[0x7]; // 0x381(0x7)
	struct TArray<EGPWeaponInnerEvent> ShouldBlendOutEventList; // 0x388(0x10)
	float BlendOutAnimTimeSeconds; // 0x398(0x4)
	uint8_t Pad_0x39C[0x4]; // 0x39C(0x4)
	uint64_t EmptyHandRecId; // 0x3A0(0x8)
	uint64_t TestFullWeaponRecId; // 0x3A8(0x8)
	struct TArray<struct UObject*> ObjectPoolPreloadProjectileClasss; // 0x3B0(0x10)
	struct TArray<struct UObject*> ObjectPoolPreloadProjectileEffectClasss; // 0x3C0(0x10)
	int32_t ObjectPoolNum; // 0x3D0(0x4)
	uint8_t Pad_0x3D4[0x4]; // 0x3D4(0x4)
	struct TArray<struct UObject*> ObjectPoolPreload3PSimulateProjectileClasss; // 0x3D8(0x10)
	int32_t ObjectPoolNumOf3PSimulateProjectile; // 0x3E8(0x4)
	float FakeBulletFitDistanceSquared; // 0x3EC(0x4)
	float FakeBulletFitDirectionDot; // 0x3F0(0x4)
	float FakeBulletFitLerpTime; // 0x3F4(0x4)
	float PredictionFudgeFactor; // 0x3F8(0x4)
	float MaxPredictionPing; // 0x3FC(0x4)
	struct FName ThrowAttachableTag; // 0x400(0x8)
	struct FName ForbidThrowWeaponAttachTag; // 0x408(0x8)
	struct TMap<uint64_t, struct TSoftClassPtr<struct AActor*>> CommonWeaponBPClassMap; // 0x410(0x50)


	// Object: Function GPWeaponRuntime.GPWeaponGlobals.SetAssistedAimingEnable
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8635578
	// Params: [ Num(1) Size(0x1) ]
	static void SetAssistedAimingEnable(uint8_t Enable);

	// Object: Function GPWeaponRuntime.GPWeaponGlobals.GetAssistedAimingEnable
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8635540
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetAssistedAimingEnable();
	DEFINE_UE_CLASS_HELPERS(UGPWeaponGlobals, "GPWeaponGlobals")

};

// Object: Class GPWeaponRuntime.GPWeaponImpactSettings
// Size: 0x150 (Inherited: 0x28)
struct UGPWeaponImpactSettings : UObject
{
	struct TArray<struct TSoftClassPtr<struct AActor*>> AttachImpactActors; // 0x28(0x10)
	struct TArray<struct FString> AttachImpactActorsName; // 0x38(0x10)
	struct TArray<struct FGPPhysicalSurfaceGroupInfo> SurfaceGroups; // 0x48(0x10)
	struct TArray<EPhysicalSurface> NoRotateSurfaces; // 0x58(0x10)
	struct TMap<EPhysicalSurface, struct FGPPhysicalSurfaceAtlasInfo> SurfaceAtlasMap; // 0x68(0x50)
	struct TSet<EPhysicalSurface> ForceUseMeshTypeDecalSurfaces; // 0xB8(0x50)
	struct FSoftObjectPath DecalMeshPath; // 0x108(0x18)
	struct TSoftClassPtr<struct UStaticMeshComponent*> DecalComponentClass; // 0x120(0x28)
	struct FName OverlapImpactEffectTag; // 0x148(0x8)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponImpactSettings, "GPWeaponImpactSettings")

};

// Object: Class GPWeaponRuntime.GPWeaponInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPWeaponInterface : IInterface
{

	// Object: Function GPWeaponRuntime.GPWeaponInterface.SetWeaponBipodDeploy
	// Flags: [Native|Public]
	// Offset: 0x86361dc
	// Params: [ Num(1) Size(0x1) ]
	void SetWeaponBipodDeploy(uint8_t IsCanWeaponBipodDeploy);

	// Object: Function GPWeaponRuntime.GPWeaponInterface.SetSkillInspectItemKeyToProxyData
	// Flags: [Native|Public]
	// Offset: 0x86360f4
	// Params: [ Num(2) Size(0xC) ]
	void SetSkillInspectItemKeyToProxyData(struct FName InKey, int32_t RandomIndex);

	// Object: Function GPWeaponRuntime.GPWeaponInterface.SetSkillInspectItemKey
	// Flags: [Native|Public]
	// Offset: 0x863600c
	// Params: [ Num(2) Size(0xC) ]
	void SetSkillInspectItemKey(struct FName InKey, int32_t RandomIndex);

	// Object: Function GPWeaponRuntime.GPWeaponInterface.SetDepFrameNo
	// Flags: [Native|Public]
	// Offset: 0x8635f60
	// Params: [ Num(1) Size(0x4) ]
	void SetDepFrameNo(int32_t InDepFrameNo);

	// Object: Function GPWeaponRuntime.GPWeaponInterface.IsSkillWeapon
	// Flags: [Native|Public]
	// Offset: 0x8635f20
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsSkillWeapon();

	// Object: Function GPWeaponRuntime.GPWeaponInterface.IsSceneWeapon
	// Flags: [Native|Public]
	// Offset: 0x8635ee0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsSceneWeapon();

	// Object: Function GPWeaponRuntime.GPWeaponInterface.IsDepFrameNoValid
	// Flags: [Native|Public]
	// Offset: 0x8635dec
	// Params: [ Num(3) Size(0x6) ]
	uint8_t IsDepFrameNoValid(int32_t InDepFrameNo, EStateDepFrameCheckMode InCheckMode);

	// Object: Function GPWeaponRuntime.GPWeaponInterface.IsAnimBreak
	// Flags: [Native|Public|Const]
	// Offset: 0x8635d34
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsAnimBreak(struct UAnimNotify* InAnimNotify);

	// Object: Function GPWeaponRuntime.GPWeaponInterface.IsAllow1pWeaponMeshTick
	// Flags: [Native|Public]
	// Offset: 0x8635cf4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsAllow1pWeaponMeshTick();

	// Object: Function GPWeaponRuntime.GPWeaponInterface.GetThrowMode
	// Flags: [Native|Public]
	// Offset: 0x8635cb8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetThrowMode();

	// Object: Function GPWeaponRuntime.GPWeaponInterface.GetPlaceLocationValid
	// Flags: [Native|Public]
	// Offset: 0x8635c78
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetPlaceLocationValid();

	// Object: Function GPWeaponRuntime.GPWeaponInterface.GetNeedDefaultAttach
	// Flags: [Native|Public]
	// Offset: 0x8635c38
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetNeedDefaultAttach();

	// Object: Function GPWeaponRuntime.GPWeaponInterface.GetLockProgress
	// Flags: [Native|Public]
	// Offset: 0x8635bfc
	// Params: [ Num(1) Size(0x4) ]
	float GetLockProgress();

	// Object: Function GPWeaponRuntime.GPWeaponInterface.GetLockIncreaseValue
	// Flags: [Native|Public]
	// Offset: 0x8635bc0
	// Params: [ Num(1) Size(0x4) ]
	float GetLockIncreaseValue();

	// Object: Function GPWeaponRuntime.GPWeaponInterface.GetDepFrameNo
	// Flags: [Native|Public|Const]
	// Offset: 0x8635b84
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetDepFrameNo();

	// Object: Function GPWeaponRuntime.GPWeaponInterface.GetDefaultAttachSocketTransform
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x8635b10
	// Params: [ Num(1) Size(0x30) ]
	struct FTransform GetDefaultAttachSocketTransform();

	// Object: Function GPWeaponRuntime.GPWeaponInterface.GetDefaultAttachSocketName
	// Flags: [Native|Public]
	// Offset: 0x8635ad4
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetDefaultAttachSocketName();

	// Object: Function GPWeaponRuntime.GPWeaponInterface.GetAnimNotifyLogicalBreakType
	// Flags: [Native|Public|Const]
	// Offset: 0x8635a20
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetAnimNotifyLogicalBreakType(struct UAnimNotify* InAnimNotify);

	// Object: Function GPWeaponRuntime.GPWeaponInterface.CanWeaponBolt
	// Flags: [Native|Public]
	// Offset: 0x86359e0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CanWeaponBolt();

	// Object: Function GPWeaponRuntime.GPWeaponInterface.CanWeaponBipodDeploy
	// Flags: [Native|Public]
	// Offset: 0x86359a0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CanWeaponBipodDeploy();

	// Object: Function GPWeaponRuntime.GPWeaponInterface.CanReload
	// Flags: [Native|Public]
	// Offset: 0x86358e0
	// Params: [ Num(2) Size(0x2) ]
	uint8_t CanReload(uint8_t bCheckCharacter);

	// Object: Function GPWeaponRuntime.GPWeaponInterface.CanChangeWeaponMode
	// Flags: [Native|Public]
	// Offset: 0x86358a0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CanChangeWeaponMode();

	// Object: Function GPWeaponRuntime.GPWeaponInterface.CanAutoChangeClip
	// Flags: [Native|Public]
	// Offset: 0x8635860
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CanAutoChangeClip();
	DEFINE_UE_CLASS_HELPERS(IGPWeaponInterface, "GPWeaponInterface")

};

// Object: Class GPWeaponRuntime.GPWeaponManagerComponent
// Size: 0x110 (Inherited: 0xF8)
struct UGPWeaponManagerComponent : UActorComponent
{
	uint8_t Pad_0xF8[0x18]; // 0xF8(0x18)
	DEFINE_UE_CLASS_HELPERS(UGPWeaponManagerComponent, "GPWeaponManagerComponent")

};

// Object: Class GPWeaponRuntime.GPWeaponManagerInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPWeaponManagerInterface : IInterface
{

	// Object: Function GPWeaponRuntime.GPWeaponManagerInterface.IsWeaponExist
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x863663c
	// Params: [ Num(2) Size(0x5) ]
	uint8_t IsWeaponExist(const struct FWeaponIdentity& InWeaponIdentity);

	// Object: Function GPWeaponRuntime.GPWeaponManagerInterface.GetWeaponByIdentity
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x8636568
	// Params: [ Num(2) Size(0x18) ]
	struct TScriptInterface<IGPWeaponInterface> GetWeaponByIdentity(const struct FWeaponIdentity& InWeaponIdentity);
	DEFINE_UE_CLASS_HELPERS(IGPWeaponManagerInterface, "GPWeaponManagerInterface")

};

// Object: Class GPWeaponRuntime.GPWeaponOwnerInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPWeaponOwnerInterface : IInterface
{	DEFINE_UE_CLASS_HELPERS(IGPWeaponOwnerInterface, "GPWeaponOwnerInterface")

};

// Object: Class GPWeaponRuntime.GPWeaponPhysicsInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPWeaponPhysicsInterface : IInterface
{

	// Object: Function GPWeaponRuntime.GPWeaponPhysicsInterface.IsPhysicsAssetValidateForWeaponTrace
	// Flags: [Native|Public]
	// Offset: 0x8636910
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsPhysicsAssetValidateForWeaponTrace(struct UPhysicsAsset* PhysicsAsset);

	// Object: Function GPWeaponRuntime.GPWeaponPhysicsInterface.GetWeaponTraceCharacterMesh
	// Flags: [Native|Public]
	// Offset: 0x8636854
	// Params: [ Num(2) Size(0x10) ]
	struct USkeletalMeshComponent* GetWeaponTraceCharacterMesh(uint8_t bIngoreHideen);

	// Object: Function GPWeaponRuntime.GPWeaponPhysicsInterface.GetBoneTransform
	// Flags: [Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x8636728
	// Params: [ Num(3) Size(0x41) ]
	uint8_t GetBoneTransform(struct FName BoneName, struct FTransform& OutTransform);
	DEFINE_UE_CLASS_HELPERS(IGPWeaponPhysicsInterface, "GPWeaponPhysicsInterface")

};

// Object: Class GPWeaponRuntime.GPWeaponProxyInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPWeaponProxyInterface : IInterface
{

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.ThirdPersonStateGuard
	// Flags: [Native|Public]
	// Offset: 0x863b618
	// Params: [ Num(0) Size(0x0) ]
	void ThirdPersonStateGuard();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.SupportAnimShellDrop
	// Flags: [Native|Public]
	// Offset: 0x863b558
	// Params: [ Num(2) Size(0x2) ]
	uint8_t SupportAnimShellDrop(uint8_t bZoom);

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.SetWeaponInteractive
	// Flags: [Native|Public]
	// Offset: 0x863b4a4
	// Params: [ Num(1) Size(0x1) ]
	void SetWeaponInteractive(uint8_t InterActive);

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.SetViewEnable
	// Flags: [Native|Public]
	// Offset: 0x863b3f0
	// Params: [ Num(1) Size(0x1) ]
	void SetViewEnable(uint8_t IsEnable);

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.SetSwitchWeaponContext
	// Flags: [Native|Public]
	// Offset: 0x863b344
	// Params: [ Num(1) Size(0x1) ]
	void SetSwitchWeaponContext(ESwitchWeaponContext InSwitchWeaponContext);

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.SetSwitchType
	// Flags: [Native|Public]
	// Offset: 0x863b298
	// Params: [ Num(1) Size(0x1) ]
	void SetSwitchType(EWeaponSwitchType InSwitchType);

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.SetSupportAnimShellDrop
	// Flags: [Native|Public]
	// Offset: 0x863b1a0
	// Params: [ Num(2) Size(0x2) ]
	void SetSupportAnimShellDrop(uint8_t bZoom, uint8_t bValue);

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.SetLastHitInfo
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x863b09c
	// Params: [ Num(1) Size(0xD0) ]
	void SetLastHitInfo(struct FBulletHitInfo& HitInfo);

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.SetIsFirstWeaponEquip
	// Flags: [Native|Public]
	// Offset: 0x863afe8
	// Params: [ Num(1) Size(0x1) ]
	void SetIsFirstWeaponEquip(uint8_t IsFirstWeapon);

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.SetIsFirstEmptyInspect
	// Flags: [Native|Public]
	// Offset: 0x863af34
	// Params: [ Num(1) Size(0x1) ]
	void SetIsFirstEmptyInspect(uint8_t IsFirstEmptyInspect);

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.OnSkeletalMeshReady
	// Flags: [Native|Public]
	// Offset: 0x863ae88
	// Params: [ Num(1) Size(0x8) ]
	void OnSkeletalMeshReady(struct USkeletalMeshComponent* Mesh);

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.OnAllSkeletalMeshReady
	// Flags: [Native|Public]
	// Offset: 0x863ae6c
	// Params: [ Num(0) Size(0x0) ]
	void OnAllSkeletalMeshReady();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.IsZooming
	// Flags: [Native|Public]
	// Offset: 0x863ae2c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsZooming();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.IsWeaponUsed
	// Flags: [Native|Public]
	// Offset: 0x863adec
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsWeaponUsed();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.IsWeaponUnderCurrentXPP
	// Flags: [Native|Public]
	// Offset: 0x863adac
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsWeaponUnderCurrentXPP();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.IsWeaponActorVisibleInDPVS
	// Flags: [Native|Public]
	// Offset: 0x863ad6c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsWeaponActorVisibleInDPVS();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.IsWeaponActive
	// Flags: [Native|Public]
	// Offset: 0x863ad2c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsWeaponActive();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.IsVisible
	// Flags: [Native|Public]
	// Offset: 0x863acec
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsVisible();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.IsViewEnable
	// Flags: [Native|Public]
	// Offset: 0x863acac
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsViewEnable();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.IsThrowableWeapon
	// Flags: [Native|Public]
	// Offset: 0x863ac6c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsThrowableWeapon();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.IsTestFullWeapon
	// Flags: [Native|Public]
	// Offset: 0x863ac2c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsTestFullWeapon();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.IsSecondaryWeapon
	// Flags: [Native|Public]
	// Offset: 0x863abec
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsSecondaryWeapon();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.IsSceneWeapon
	// Flags: [Native|Public]
	// Offset: 0x863abac
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsSceneWeapon();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.IsRunningLogic
	// Flags: [Native|Public|Const]
	// Offset: 0x863ab6c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsRunningLogic();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.IsModularWeapon
	// Flags: [Native|Public]
	// Offset: 0x863ab2c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsModularWeapon();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.IsMeleeWeapon
	// Flags: [Native|Public]
	// Offset: 0x863aaec
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsMeleeWeapon();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.IsMainWeapon
	// Flags: [Native|Public]
	// Offset: 0x863aaac
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsMainWeapon();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.IsMainAttachWeapon
	// Flags: [Native|Public]
	// Offset: 0x863aa6c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsMainAttachWeapon();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.IsInStateInteract
	// Flags: [Native|Public]
	// Offset: 0x863aa2c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsInStateInteract();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.IsInStateFiring
	// Flags: [Native|Public]
	// Offset: 0x863a9ec
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsInStateFiring();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.IsInStateChangeClip
	// Flags: [Native|Public]
	// Offset: 0x863a9ac
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsInStateChangeClip();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.IsInState
	// Flags: [Native|Public]
	// Offset: 0x863a8f4
	// Params: [ Num(2) Size(0x2) ]
	uint8_t IsInState(EGPWeaponStateType InStateType);

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.IsInPending
	// Flags: [Native|Public]
	// Offset: 0x863a8b4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsInPending();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.IsIgnorePreFire
	// Flags: [Native|Public]
	// Offset: 0x863a874
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsIgnorePreFire();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.IsHideAllWeapon_RetIsContainExactTag
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x863a7ac
	// Params: [ Num(2) Size(0x2) ]
	uint8_t IsHideAllWeapon_RetIsContainExactTag(uint8_t& bContainExactTag);

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.IsHideAllWeapon
	// Flags: [Native|Public]
	// Offset: 0x863a76c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsHideAllWeapon();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.IsFppView
	// Flags: [Native|Public]
	// Offset: 0x863a72c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsFppView();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.IsEnableZoomOnReloading
	// Flags: [Native|Public]
	// Offset: 0x863a6ec
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsEnableZoomOnReloading();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.IsEmptyHand
	// Flags: [Native|Public]
	// Offset: 0x863a6ac
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsEmptyHand();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.IsCharacterOwnerPlayerAI
	// Flags: [Native|Public|Const]
	// Offset: 0x863a66c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsCharacterOwnerPlayerAI();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.IsCharacterOwnerOnFPPMode
	// Flags: [Native|Public]
	// Offset: 0x863a62c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsCharacterOwnerOnFPPMode();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.IsCharacterOwnerOnDefaultFPPMode
	// Flags: [Native|Public]
	// Offset: 0x863a5ec
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsCharacterOwnerOnDefaultFPPMode();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.IsCharacterOwnerAI
	// Flags: [Native|Public|Const]
	// Offset: 0x863a5ac
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsCharacterOwnerAI();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.IsAllow1pWeaponMeshTick
	// Flags: [Native|Public]
	// Offset: 0x863a56c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsAllow1pWeaponMeshTick();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.HasNetModeOnServer
	// Flags: [Native|Public]
	// Offset: 0x863a52c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t HasNetModeOnServer();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.HasActivateBefore
	// Flags: [Native|Public]
	// Offset: 0x863a4ec
	// Params: [ Num(1) Size(0x1) ]
	uint8_t HasActivateBefore();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetWeaponTypeValue
	// Flags: [Native|Public]
	// Offset: 0x863a4b0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetWeaponTypeValue();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetWeaponSlot
	// Flags: [Native|Public]
	// Offset: 0x863a474
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetWeaponSlot();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetWeaponSecondaryMesh
	// Flags: [Native|Public]
	// Offset: 0x863a438
	// Params: [ Num(1) Size(0x8) ]
	struct USkeletalMeshComponent* GetWeaponSecondaryMesh();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetWeaponSecondaryBaseMesh
	// Flags: [Native|Public]
	// Offset: 0x863a3fc
	// Params: [ Num(1) Size(0x8) ]
	struct UMeshComponent* GetWeaponSecondaryBaseMesh();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetWeaponMode
	// Flags: [Native|Public]
	// Offset: 0x863a3c0
	// Params: [ Num(1) Size(0x1) ]
	EGPWeaponMode GetWeaponMode();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetWeaponMainMesh
	// Flags: [Native|Public]
	// Offset: 0x863a384
	// Params: [ Num(1) Size(0x8) ]
	struct USkeletalMeshComponent* GetWeaponMainMesh();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetWeaponInteractive
	// Flags: [Native|Public]
	// Offset: 0x863a344
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetWeaponInteractive();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetWeaponId
	// Flags: [Native|Public]
	// Offset: 0x863a308
	// Params: [ Num(1) Size(0x8) ]
	uint64_t GetWeaponId();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetWeaponGuid
	// Flags: [Native|Public]
	// Offset: 0x863a2cc
	// Params: [ Num(1) Size(0x8) ]
	uint64_t GetWeaponGuid();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetWeaponEquipPosition
	// Flags: [Native|Public]
	// Offset: 0x863a290
	// Params: [ Num(1) Size(0x8) ]
	uint64_t GetWeaponEquipPosition();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetWeaponDisplayMesh
	// Flags: [Native|Public]
	// Offset: 0x863a254
	// Params: [ Num(1) Size(0x8) ]
	struct USkeletalMeshComponent* GetWeaponDisplayMesh();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetWeaponBaseMesh
	// Flags: [Native|Public]
	// Offset: 0x863a218
	// Params: [ Num(1) Size(0x8) ]
	struct UMeshComponent* GetWeaponBaseMesh();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetWeaponAttachType
	// Flags: [Native|Public]
	// Offset: 0x863a1dc
	// Params: [ Num(1) Size(0x1) ]
	EGPWeaponAppearanceAttachType GetWeaponAttachType();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetWeaponAttachBackSocket
	// Flags: [Native|Public]
	// Offset: 0x863a1a0
	// Params: [ Num(1) Size(0x1) ]
	EGPWeaponAttachBackSocket GetWeaponAttachBackSocket();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetWeaponAttachBackRelativeTransform
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x863a12c
	// Params: [ Num(1) Size(0x30) ]
	struct FTransform GetWeaponAttachBackRelativeTransform();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetWeaponAttachBackConflict
	// Flags: [Native|Public]
	// Offset: 0x863a0f0
	// Params: [ Num(1) Size(0x1) ]
	EGPWeaponAttachBackConflict GetWeaponAttachBackConflict();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetWeaponASC
	// Flags: [Native|Public]
	// Offset: 0x863a084
	// Params: [ Num(1) Size(0x10) ]
	struct TScriptInterface<IGPASC_AttributeSet_Minimal> GetWeaponASC();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetWeaponActor
	// Flags: [Native|Public]
	// Offset: 0x863a048
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetWeaponActor();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetThirdPersonCharacterMesh
	// Flags: [Native|Public]
	// Offset: 0x863a00c
	// Params: [ Num(1) Size(0x8) ]
	struct USkeletalMeshComponent* GetThirdPersonCharacterMesh();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetSwitchWeaponContext
	// Flags: [Native|Public]
	// Offset: 0x8639fd0
	// Params: [ Num(1) Size(0x1) ]
	ESwitchWeaponContext GetSwitchWeaponContext();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetSwitchType
	// Flags: [Native|Public]
	// Offset: 0x8639f94
	// Params: [ Num(1) Size(0x1) ]
	EWeaponSwitchType GetSwitchType();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetNeedDefaultAttach
	// Flags: [Native|Public]
	// Offset: 0x8639f54
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetNeedDefaultAttach();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetLastStateType
	// Flags: [Native|Public]
	// Offset: 0x8639f18
	// Params: [ Num(1) Size(0x1) ]
	EGPWeaponStateType GetLastStateType();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetLastHitInfo
	// Flags: [Native|Public]
	// Offset: 0x8639ebc
	// Params: [ Num(1) Size(0xD0) ]
	struct FBulletHitInfo GetLastHitInfo();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetIsFirstWeaponEquip
	// Flags: [Native|Public]
	// Offset: 0x8639e7c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetIsFirstWeaponEquip();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetIsFirstEmptyInspect
	// Flags: [Native|Public]
	// Offset: 0x8639e3c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetIsFirstEmptyInspect();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetGPWeaponFuncAppearance
	// Flags: [Native|Public]
	// Offset: 0x8639df4
	// Params: [ Num(1) Size(0x10) ]
	struct TScriptInterface<IGPWeaponFuncComponentAppearanceInterface> GetGPWeaponFuncAppearance();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetGPWeaponDataAppearance
	// Flags: [Native|Public]
	// Offset: 0x8639dac
	// Params: [ Num(1) Size(0x10) ]
	struct TScriptInterface<IGPWeaponDataComponentAppearanceInterface> GetGPWeaponDataAppearance();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetGPWeaponData
	// Flags: [Native|Public]
	// Offset: 0x8639d64
	// Params: [ Num(1) Size(0x10) ]
	struct TScriptInterface<IGPWeaponDataInterface> GetGPWeaponData();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetFirstPersonCharacterMesh
	// Flags: [Native|Public]
	// Offset: 0x8639d28
	// Params: [ Num(1) Size(0x8) ]
	struct USkeletalMeshComponent* GetFirstPersonCharacterMesh();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetFireSocketMode
	// Flags: [Native|Public]
	// Offset: 0x8639cec
	// Params: [ Num(1) Size(0x1) ]
	EGPWeaponFireSocketMode GetFireSocketMode();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetEnablePoseModify
	// Flags: [Native|Public]
	// Offset: 0x8639cac
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetEnablePoseModify();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetDefaultAttachSocketTransform
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x8639c38
	// Params: [ Num(1) Size(0x30) ]
	struct FTransform GetDefaultAttachSocketTransform();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetDefaultAttachSocketName
	// Flags: [Native|Public]
	// Offset: 0x8639bfc
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetDefaultAttachSocketName();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetCurrentStateType
	// Flags: [Native|Public]
	// Offset: 0x8639bc0
	// Params: [ Num(1) Size(0x1) ]
	EGPWeaponStateType GetCurrentStateType();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetContinueFiringCount
	// Flags: [Native|Public]
	// Offset: 0x8639b84
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetContinueFiringCount();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetCharacterSkeletalMeshComponent
	// Flags: [Native|Public]
	// Offset: 0x8639b48
	// Params: [ Num(1) Size(0x8) ]
	struct USkeletalMeshComponent* GetCharacterSkeletalMeshComponent();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetCharacterOwner
	// Flags: [Native|Public]
	// Offset: 0x8639b0c
	// Params: [ Num(1) Size(0x8) ]
	struct ACHARACTER* GetCharacterOwner();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetCharacterName
	// Flags: [Native|Public]
	// Offset: 0x8639ad0
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetCharacterName();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.GetBulletIndex
	// Flags: [Native|Public]
	// Offset: 0x8639a94
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetBulletIndex();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.EnableProjectileDebugger
	// Flags: [Native|Public]
	// Offset: 0x8639a54
	// Params: [ Num(1) Size(0x1) ]
	uint8_t EnableProjectileDebugger();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.EnableLastActive
	// Flags: [Native|Public]
	// Offset: 0x8639a14
	// Params: [ Num(1) Size(0x1) ]
	uint8_t EnableLastActive();

	// Object: Function GPWeaponRuntime.GPWeaponProxyInterface.EnableCommonLog
	// Flags: [Native|Public]
	// Offset: 0x86399d4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t EnableCommonLog();
	DEFINE_UE_CLASS_HELPERS(IGPWeaponProxyInterface, "GPWeaponProxyInterface")

};

// Object: Class GPWeaponRuntime.GPWeaponReplicateComponent
// Size: 0x648 (Inherited: 0xF8)
struct UGPWeaponReplicateComponent : UActorComponent
{
	uint8_t Pad_0xF8[0x18]; // 0xF8(0x18)
	struct ACHARACTER* CharacterOwner; // 0x110(0x8)
	struct FGPWeaponRepDataArray WeaponReplicatedDataArray; // 0x118(0x10)
	struct TArray<struct FGPWeaponRepInfoPair> CurrActiveWeapInfoArr; // 0x128(0x10)
	struct FGPWeaponRepInfoPairFastArray WeapInfoArray; // 0x138(0x118)
	struct FGPWeaponEventRepInfoFastArray WeapEventArray; // 0x250(0x10)
	struct TMap<uint8_t, struct FSlotActiveWeaponInfo> SlotActiveWeaponInfoMap; // 0x260(0x50)
	struct TScriptInterface<IGPWeaponInterface> EmptyHandAttachment; // 0x2B0(0x10)
	struct FWeaponFrameNumber WeaponFrameNumber; // 0x2C0(0x10)
	uint8_t Pad_0x2D0[0x8]; // 0x2D0(0x8)
	struct TMap<struct FWeaponIdentity, struct TScriptInterface<IGPWeaponInterface>> WeaponAttachmentMap; // 0x2D8(0x50)
	struct TArray<struct TScriptInterface<IGPWeaponInterface>> GPWeaponAttachmentList; // 0x328(0x10)
	struct TMap<struct FWeaponIdentity, uint32_t> WeaponRepEventLastFrameMap; // 0x338(0x50)
	uint8_t Pad_0x388[0x10]; // 0x388(0x10)
	struct TArray<struct UObject*> WeaponAttachmentRefHolderList; // 0x398(0x10)
	struct TArray<struct FGPWeaponHitImpactRepInfo> CachedHitInfos; // 0x3A8(0x10)
	uint8_t Pad_0x3B8[0x18]; // 0x3B8(0x18)
	struct TArray<struct FGPWeaponHitImpactRepInfo> RepHitInfoList; // 0x3D0(0x10)
	uint8_t Pad_0x3E0[0x8]; // 0x3E0(0x8)
	struct TArray<struct FGPWeaponEventRepInfo> NextFrameWeaponRepInfo; // 0x3E8(0x10)
	struct TMap<struct FWeaponIdentity, struct TScriptInterface<IGPWeaponInterface>> FppWeaponMap; // 0x3F8(0x50)
	uint8_t Pad_0x448[0x200]; // 0x448(0x200)


	// Object: Function GPWeaponRuntime.GPWeaponReplicateComponent.UpdateOwnerClientAttachments
	// Flags: [Final|Native|Public]
	// Offset: 0x863dbec
	// Params: [ Num(0) Size(0x0) ]
	void UpdateOwnerClientAttachments();

	// Object: Function GPWeaponRuntime.GPWeaponReplicateComponent.SwitchToWeapon
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x863d980
	// Params: [ Num(5) Size(0x32) ]
	void SwitchToWeapon(uint8_t WeaponSlot, const struct FWeaponIdentity& InWeaponIdentity, struct TSoftClassPtr<struct AActor*> InWeapClass, uint8_t bReserveLastWeapon, EWeaponSwitchType SwitchType);

	// Object: Function GPWeaponRuntime.GPWeaponReplicateComponent.RepHitInfo
	// Flags: [Net|Native|Event|NetMulticast|Public]
	// Offset: 0x863d880
	// Params: [ Num(1) Size(0xB8) ]
	void RepHitInfo(struct FGPWeaponHitImpactRepInfo RepInfo);

	// Object: Function GPWeaponRuntime.GPWeaponReplicateComponent.RemoveInventoryFromPlayer
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x863d7c4
	// Params: [ Num(1) Size(0x4) ]
	void RemoveInventoryFromPlayer(const struct FWeaponIdentity& RemoveWeaponIdentity);

	// Object: Function GPWeaponRuntime.GPWeaponReplicateComponent.OnRep_WeaponInfoList
	// Flags: [Native|Protected]
	// Offset: 0x863d7a8
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_WeaponInfoList();

	// Object: Function GPWeaponRuntime.GPWeaponReplicateComponent.OnRep_WeaponEventList
	// Flags: [Native|Protected]
	// Offset: 0x863d78c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_WeaponEventList();

	// Object: Function GPWeaponRuntime.GPWeaponReplicateComponent.OnRep_RefreshWeaponData
	// Flags: [Final|Native|Protected]
	// Offset: 0xeb18278
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_RefreshWeaponData();

	// Object: Function GPWeaponRuntime.GPWeaponReplicateComponent.OnRep_DisplayRepHitInfos
	// Flags: [Final|Native|Protected]
	// Offset: 0x863d778
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_DisplayRepHitInfos();

	// Object: Function GPWeaponRuntime.GPWeaponReplicateComponent.OnRep_CurrentActiveWeapon
	// Flags: [Native|Protected]
	// Offset: 0x863d75c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_CurrentActiveWeapon();

	// Object: Function GPWeaponRuntime.GPWeaponReplicateComponent.MulticastReliableWeaponEvent
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0xe7a761c
	// Params: [ Num(2) Size(0x5) ]
	void MulticastReliableWeaponEvent(struct FWeaponIdentity WeaponIdentity, uint8_t EventType);

	// Object: Function GPWeaponRuntime.GPWeaponReplicateComponent.MulticastReliableEndFireEventForAudio
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x863d6b0
	// Params: [ Num(1) Size(0x4) ]
	void MulticastReliableEndFireEventForAudio(struct FWeaponIdentity WeaponIdentity);

	// Object: Function GPWeaponRuntime.GPWeaponReplicateComponent.MulticastMergedHitInfo
	// Flags: [Net|Native|Event|NetMulticast|Public]
	// Offset: 0xe7a9de8
	// Params: [ Num(1) Size(0x10) ]
	void MulticastMergedHitInfo(struct TArray<struct FGPWeaponHitImpactRepInfo> HitInfos);

	// Object: Function GPWeaponRuntime.GPWeaponReplicateComponent.MulticastMergedFireEventReliable
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x863d574
	// Params: [ Num(3) Size(0x30) ]
	void MulticastMergedFireEventReliable(struct TArray<struct UObject*> ObjectReferences, struct TArray<struct FWeaponIdentity> WeaponIdentities, struct TArray<struct FWeaponFireMulticastInfo> FireInfos);

	// Object: Function GPWeaponRuntime.GPWeaponReplicateComponent.MulticastMergedFireEvent
	// Flags: [Net|Native|Event|NetMulticast|Public]
	// Offset: 0x863d438
	// Params: [ Num(3) Size(0x30) ]
	void MulticastMergedFireEvent(struct TArray<struct UObject*> ObjectReferences, struct TArray<struct FWeaponIdentity> WeaponIdentities, struct TArray<struct FWeaponFireMulticastInfo> FireInfos);

	// Object: Function GPWeaponRuntime.GPWeaponReplicateComponent.MulticastFireEventReliable
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x863d2d8
	// Params: [ Num(2) Size(0x80) ]
	void MulticastFireEventReliable(struct FWeaponIdentity WeaponIdentity, struct FWeaponFireMulticastInfo FireInfo);

	// Object: Function GPWeaponRuntime.GPWeaponReplicateComponent.MulticastFireEventForAudio
	// Flags: [Net|Native|Event|NetMulticast|Public]
	// Offset: 0x863d178
	// Params: [ Num(2) Size(0x80) ]
	void MulticastFireEventForAudio(struct FWeaponIdentity WeaponIdentity, struct FWeaponFireMulticastInfo FireInfo);

	// Object: Function GPWeaponRuntime.GPWeaponReplicateComponent.MulticastFireEvent
	// Flags: [Net|Native|Event|NetMulticast|Public]
	// Offset: 0xe7a84e0
	// Params: [ Num(2) Size(0x80) ]
	void MulticastFireEvent(struct FWeaponIdentity WeaponIdentity, struct FWeaponFireMulticastInfo FireInfo);

	// Object: Function GPWeaponRuntime.GPWeaponReplicateComponent.GetWeaponId
	// Flags: [Native|Protected|HasOutParms]
	// Offset: 0x863d0b4
	// Params: [ Num(2) Size(0x10) ]
	uint64_t GetWeaponId(const struct FWeaponIdentity& WeaponIdentity);

	// Object: Function GPWeaponRuntime.GPWeaponReplicateComponent.GetWeaponEquipPosition
	// Flags: [Native|Protected|HasOutParms]
	// Offset: 0x863cff0
	// Params: [ Num(2) Size(0x10) ]
	uint64_t GetWeaponEquipPosition(const struct FWeaponIdentity& WeaponIdentity);

	// Object: Function GPWeaponRuntime.GPWeaponReplicateComponent.GetThirdPersponWeaponByIdentity
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x863cf24
	// Params: [ Num(2) Size(0x18) ]
	struct TScriptInterface<IGPWeaponInterface> GetThirdPersponWeaponByIdentity(const struct FWeaponIdentity& ServerWeaponIdentity);

	// Object: Function GPWeaponRuntime.GPWeaponReplicateComponent.GetOrCreateWeaponAttachment
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x863cd54
	// Params: [ Num(5) Size(0x48) ]
	struct TScriptInterface<IGPWeaponInterface> GetOrCreateWeaponAttachment(const struct FWeaponIdentity& WeaponIdentity, const struct TSoftClassPtr<struct AActor*>& WeaponAttachmentType, uint8_t bSkip3PEmptyHand, uint8_t b3PCanDelayCreateWeapon);

	// Object: Function GPWeaponRuntime.GPWeaponReplicateComponent.GetLastThirdPersonWeapon
	// Flags: [Native|Public]
	// Offset: 0x863cc98
	// Params: [ Num(2) Size(0x18) ]
	struct TScriptInterface<IGPWeaponInterface> GetLastThirdPersonWeapon(uint8_t WeaponSlot);

	// Object: Function GPWeaponRuntime.GPWeaponReplicateComponent.GetFirstPersonWeapon
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x863cbd0
	// Params: [ Num(2) Size(0x18) ]
	struct TScriptInterface<IGPWeaponInterface> GetFirstPersonWeapon(const struct FWeaponIdentity& WeaponIdentity);

	// Object: Function GPWeaponRuntime.GPWeaponReplicateComponent.GetEmptyHandWeapon
	// Flags: [Native|Public]
	// Offset: 0x863cb64
	// Params: [ Num(1) Size(0x10) ]
	struct TScriptInterface<IGPWeaponInterface> GetEmptyHandWeapon();

	// Object: Function GPWeaponRuntime.GPWeaponReplicateComponent.GetDebugString
	// Flags: [Native|Public]
	// Offset: 0x863cac4
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetDebugString();

	// Object: Function GPWeaponRuntime.GPWeaponReplicateComponent.GetCurrentThirdPersonWeapon
	// Flags: [Native|Public]
	// Offset: 0x863ca08
	// Params: [ Num(2) Size(0x18) ]
	struct TScriptInterface<IGPWeaponInterface> GetCurrentThirdPersonWeapon(uint8_t WeaponSlot);

	// Object: Function GPWeaponRuntime.GPWeaponReplicateComponent.DestroyWeapon
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x863c94c
	// Params: [ Num(1) Size(0x10) ]
	void DestroyWeapon(const struct TScriptInterface<IGPWeaponInterface>& Weapon);

	// Object: Function GPWeaponRuntime.GPWeaponReplicateComponent.DestroyAllLocalAttachment
	// Flags: [Native|Public]
	// Offset: 0x863c930
	// Params: [ Num(0) Size(0x0) ]
	void DestroyAllLocalAttachment();

	// Object: Function GPWeaponRuntime.GPWeaponReplicateComponent.ClearAttachment
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x863c874
	// Params: [ Num(1) Size(0x4) ]
	void ClearAttachment(const struct FWeaponIdentity& RemoveWeaponIdentity);
	DEFINE_UE_CLASS_HELPERS(UGPWeaponReplicateComponent, "GPWeaponReplicateComponent")

};

// Object: Class GPWeaponRuntime.GPWeaponStateBase
// Size: 0x4A0 (Inherited: 0x488)
struct UGPWeaponStateBase : UGPAbilityBase
{
	uint8_t Pad_0x488[0x18]; // 0x488(0x18)


	// Object: Function GPWeaponRuntime.GPWeaponStateBase.SetAttributeSetFloatValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x863e464
	// Params: [ Num(3) Size(0x3D) ]
	uint8_t SetAttributeSetFloatValue(struct FGameplayAttribute Attribute, float Value);

	// Object: Function GPWeaponRuntime.GPWeaponStateBase.ProcessWeaponEventToState
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void ProcessWeaponEventToState(EGPWeaponStateEvent RepInfo);

	// Object: Function GPWeaponRuntime.GPWeaponStateBase.ProcessWeaponEvent
	// Flags: [Native|Public]
	// Offset: 0x863e3b8
	// Params: [ Num(1) Size(0x1) ]
	void ProcessWeaponEvent(EGPWeaponStateEvent RepInfo);

	// Object: Function GPWeaponRuntime.GPWeaponStateBase.OnAutoEndState
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void OnAutoEndState(uint8_t bIsTimeout);

	// Object: Function GPWeaponRuntime.GPWeaponStateBase.IsWeaponAvailable
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x863e380
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsWeaponAvailable();

	// Object: Function GPWeaponRuntime.GPWeaponStateBase.IsMeetAnyAbilityExecCond
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x863e1ec
	// Params: [ Num(5) Size(0x5) ]
	uint8_t IsMeetAnyAbilityExecCond(uint8_t ExecInServer, uint8_t ExecInStandAlone, uint8_t ExecInAutonomousProxy, uint8_t ExecInAI);

	// Object: Function GPWeaponRuntime.GPWeaponStateBase.GetWeapon
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x863e188
	// Params: [ Num(1) Size(0x10) ]
	struct TScriptInterface<IGPWeaponInterface> GetWeapon();

	// Object: Function GPWeaponRuntime.GPWeaponStateBase.GetGPStateType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x863e16c
	// Params: [ Num(1) Size(0x1) ]
	EGPWeaponStateType GetGPStateType();

	// Object: Function GPWeaponRuntime.GPWeaponStateBase.GetFiringMode
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x863e138
	// Params: [ Num(1) Size(0x1) ]
	EGPWeaponFiringMode GetFiringMode();

	// Object: Function GPWeaponRuntime.GPWeaponStateBase.GetAttributeSetFloatValueBase
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x863dfe4
	// Params: [ Num(3) Size(0x40) ]
	float GetAttributeSetFloatValueBase(struct FGameplayAttribute Attribute, uint8_t& bFoundAttribute);

	// Object: Function GPWeaponRuntime.GPWeaponStateBase.GetAttributeSetFloatValue
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x863de90
	// Params: [ Num(3) Size(0x40) ]
	float GetAttributeSetFloatValue(struct FGameplayAttribute Attribute, uint8_t& bFoundAttribute);

	// Object: Function GPWeaponRuntime.GPWeaponStateBase.ActivateGPState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x863dde0
	// Params: [ Num(2) Size(0x2) ]
	uint8_t ActivateGPState(EGPWeaponStateType StateType);
	DEFINE_UE_CLASS_HELPERS(UGPWeaponStateBase, "GPWeaponStateBase")

};

// Object: Class GPWeaponRuntime.GPWeaponThrowableProjectileMovementComponent
// Size: 0x210 (Inherited: 0x210)
struct UGPWeaponThrowableProjectileMovementComponent : UProjectileMovementComponent
{	DEFINE_UE_CLASS_HELPERS(UGPWeaponThrowableProjectileMovementComponent, "GPWeaponThrowableProjectileMovementComponent")

};

// Object: Class GPWeaponRuntime.GPWeaponTickInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPWeaponTickInterface : IInterface
{

	// Object: Function GPWeaponRuntime.GPWeaponTickInterface.WeaponTick
	// Flags: [Native|Public]
	// Offset: 0x86423c4
	// Params: [ Num(1) Size(0x4) ]
	void WeaponTick(float DeltaSecond);

	// Object: Function GPWeaponRuntime.GPWeaponTickInterface.SetWeaponTickInterval
	// Flags: [Native|Public]
	// Offset: 0x8642318
	// Params: [ Num(1) Size(0x4) ]
	void SetWeaponTickInterval(float InTickInterval);

	// Object: Function GPWeaponRuntime.GPWeaponTickInterface.SetWeaponTickEnabled
	// Flags: [Native|Public]
	// Offset: 0x8642228
	// Params: [ Num(2) Size(0x9) ]
	void SetWeaponTickEnabled(struct UObject* WorldContext, uint8_t bEnable);

	// Object: Function GPWeaponRuntime.GPWeaponTickInterface.IsWeaponTickEnabled
	// Flags: [Native|Public|Const]
	// Offset: 0x86421e8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsWeaponTickEnabled();

	// Object: Function GPWeaponRuntime.GPWeaponTickInterface.GetTickInterval
	// Flags: [Native|Public|Const]
	// Offset: 0x86421ac
	// Params: [ Num(1) Size(0x4) ]
	float GetTickInterval();

	// Object: Function GPWeaponRuntime.GPWeaponTickInterface.CanEverWeaponTick
	// Flags: [Native|Public|Const]
	// Offset: 0x86420f4
	// Params: [ Num(2) Size(0x9) ]
	uint8_t CanEverWeaponTick(struct UObject* WorldContext);
	DEFINE_UE_CLASS_HELPERS(IGPWeaponTickInterface, "GPWeaponTickInterface")

};

// Object: Class GPWeaponRuntime.GPWeaponTickActorInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPWeaponTickActorInterface : IInterface
{

	// Object: Function GPWeaponRuntime.GPWeaponTickActorInterface.WeaponTick
	// Flags: [Native|Public]
	// Offset: 0x864277c
	// Params: [ Num(1) Size(0x4) ]
	void WeaponTick(float DeltaSecond);

	// Object: Function GPWeaponRuntime.GPWeaponTickActorInterface.ResetWeaponTick
	// Flags: [Native|Public]
	// Offset: 0x8642760
	// Params: [ Num(0) Size(0x0) ]
	void ResetWeaponTick();

	// Object: Function GPWeaponRuntime.GPWeaponTickActorInterface.RemWeaponTickObject
	// Flags: [Native|Public]
	// Offset: 0x86426a4
	// Params: [ Num(1) Size(0x10) ]
	void RemWeaponTickObject(struct TScriptInterface<IGPWeaponTickInterface> WeaponTickObj);

	// Object: Function GPWeaponRuntime.GPWeaponTickActorInterface.GetWeaponTickObjects
	// Flags: [Native|Public]
	// Offset: 0x8642648
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct TScriptInterface<IGPWeaponTickInterface>> GetWeaponTickObjects();

	// Object: Function GPWeaponRuntime.GPWeaponTickActorInterface.AddWeaponTickObject
	// Flags: [Native|Public]
	// Offset: 0x8642550
	// Params: [ Num(2) Size(0x18) ]
	void AddWeaponTickObject(struct UObject* WorldContext, struct TScriptInterface<IGPWeaponTickInterface> WeaponTickObj);
	DEFINE_UE_CLASS_HELPERS(IGPWeaponTickActorInterface, "GPWeaponTickActorInterface")

};

// Object: Class GPWeaponRuntime.GPWeaponViewComponentImpact
// Size: 0x158 (Inherited: 0x158)
struct UGPWeaponViewComponentImpact : UGPWeaponViewComponentBase
{	DEFINE_UE_CLASS_HELPERS(UGPWeaponViewComponentImpact, "GPWeaponViewComponentImpact")

};

// Object: Class GPWeaponRuntime.PreViewTimeLineOwnerInterface
// Size: 0x28 (Inherited: 0x28)
struct IPreViewTimeLineOwnerInterface : IInterface
{	DEFINE_UE_CLASS_HELPERS(IPreViewTimeLineOwnerInterface, "PreViewTimeLineOwnerInterface")

};

// Object: Class GPWeaponRuntime.WeaponStateTimeLineOwnerInterface
// Size: 0x28 (Inherited: 0x28)
struct IWeaponStateTimeLineOwnerInterface : IPreViewTimeLineOwnerInterface
{

	// Object: Function GPWeaponRuntime.WeaponStateTimeLineOwnerInterface.ServerVerifyStateFrameImp
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x8643054
	// Params: [ Num(3) Size(0x2D) ]
	uint8_t ServerVerifyStateFrameImp(const struct FStateFrame& WSFrame, float InCheckCode);

	// Object: Function GPWeaponRuntime.WeaponStateTimeLineOwnerInterface.OnReceiveRemoteStateInfo
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x8642f88
	// Params: [ Num(1) Size(0x20) ]
	void OnReceiveRemoteStateInfo(const struct FRepWeaponStateTimeLine& RepStateInfo);

	// Object: Function GPWeaponRuntime.WeaponStateTimeLineOwnerInterface.DoVerifyStateFrame
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x8642e6c
	// Params: [ Num(3) Size(0x31) ]
	uint8_t DoVerifyStateFrame(EGPWeaponStateType OriginState, const struct FStateFrame& WSFrame);

	// Object: Function GPWeaponRuntime.WeaponStateTimeLineOwnerInterface.DoAntiCheatCheck
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x8642d48
	// Params: [ Num(3) Size(0x2D) ]
	uint8_t DoAntiCheatCheck(const struct FStateFrame& WSFrame, float InCheckCode);

	// Object: Function GPWeaponRuntime.WeaponStateTimeLineOwnerInterface.ClientNotifyStateFrameInValidImp
	// Flags: [Native|Public]
	// Offset: 0x8642c9c
	// Params: [ Num(1) Size(0x4) ]
	void ClientNotifyStateFrameInValidImp(int32_t FrameNo);

	// Object: Function GPWeaponRuntime.WeaponStateTimeLineOwnerInterface.AddStateFrame
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x8642bc8
	// Params: [ Num(1) Size(0x28) ]
	void AddStateFrame(const struct FStateFrame& WSFrame);
	DEFINE_UE_CLASS_HELPERS(IWeaponStateTimeLineOwnerInterface, "WeaponStateTimeLineOwnerInterface")

};

// Object: Class GPWeaponRuntime.WeaponLogInterface
// Size: 0x28 (Inherited: 0x28)
struct IWeaponLogInterface : IInterface
{	DEFINE_UE_CLASS_HELPERS(IWeaponLogInterface, "WeaponLogInterface")

};

// Object: Class GPWeaponRuntime.WeaponObInterface
// Size: 0x28 (Inherited: 0x28)
struct IWeaponObInterface : IInterface
{	DEFINE_UE_CLASS_HELPERS(IWeaponObInterface, "WeaponObInterface")

};

} // namespace SDK
