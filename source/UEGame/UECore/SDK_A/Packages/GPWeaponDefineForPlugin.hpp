#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: GPWeaponDefineForPlugin
// Enums: 30
// Structs: 35
// Classes: 2

struct AActor;
struct UAnimInstance;
struct FWeaponIdentity;
struct FWeaponFireOptionalData;
struct FWeaponFireMulticastInfo;
struct FWeaponBulletMediumInfo;
struct FWeaponFireBulletInfo;
struct FFireFromViewConfig;
struct FWeaponHeadDefine;
struct FWeaponDPVSProxy;
struct FBulletModeConfig;
struct FWeaponFeatureOptions;
struct FGPWeaponHitInfo;
struct FGPWeaponPenetrateParam;
struct FBulletHitRepInfo;
struct FBulletHitInfo;
struct FPenetratingMediumParam;
struct FBeginFireEventParam;
struct FGPWeaponEventObject;
struct FWeaponFireRepInfo;
struct FGPWeaponAttachInfo;
struct FGPWeaponMesh;
struct FWeaponMeleeHeavyAttackData;
struct FGPWeaponMeleeComboData;
struct FGPWeaponPenTrationHitResult;
struct FGPWeaponPenetrationModifier;
struct FGPWeaponEventDataBase;
struct FWeaponEventData_OBPendingBeginFire;
struct FWeaponEventData_TimeOut;
struct FWeaponEventData_ModifyFiringModeType;
struct FWeaponEventData_InstantHit;
struct FWeaponEventData_CancelChangeClip;
struct FWeaponEventData_DoFire;
struct FWeaponEventData_NotifyBreak;
struct FWeaponEventData_FireModeProxyStateDirty;
struct FWeaponEventData_NeedPlayAnim;
struct FWeaponEventData_BeginFire;
struct UWeaponOptimizeHelper;
struct UGPWeaponBlackboard;

// Object: Enum GPWeaponDefineForPlugin.EStateDepFrameCheckMode
enum class EStateDepFrameCheckMode : uint8_t
{
	NONE = 0,
	NORMAL_MODE = 1,
	STRICT_MODE = 2,
	EStateDepFrameCheckMode_MAX = 3
};

// Object: Enum GPWeaponDefineForPlugin.ESwitchWeaponContext
enum class ESwitchWeaponContext : uint8_t
{
	Default = 0,
	Client = 1,
	Init = 2,
	Input = 3,
	Interact = 4,
	Preview = 5,
	AIController = 6,
	AILab = 7,
	AITask = 8,
	SafeHouse = 9,
	DSLogic = 10,
	InventoryManager = 11,
	BattleFieldCharacter = 12,
	Ability = 13,
	AIDifficulty = 14,
	Skill = 15,
	Looting = 16,
	FuncPVE = 17,
	RemoveWeapon = 18,
	Character = 19,
	MachineGun = 20,
	Vehicle = 21,
	SkillEnd = 22,
	Reborn = 23,
	WeaponBlueprint = 24,
	WeaponBase = 25,
	InitDefWeapon = 26,
	CharacterBase = 27,
	ImpendingDeathAction = 28,
	DeathAction = 29,
	SOLEscapedStateAction = 30,
	SwitchEmptyHandComponent = 31,
	OnHelicopterAction = 32,
	GM = 33,
	CancelSwitchWeapon = 34,
	FastFire = 35,
	JailBreak = 36,
	SwimmingSprintBegin = 37,
	SwimmingSprintEnd = 38,
	ReconnectPutBackLeftWeapon = 39,
	NewYearEggs = 40,
	ESwitchWeaponContext_MAX = 41
};

// Object: Enum GPWeaponDefineForPlugin.EWeaponAutoReloadOption
enum class EWeaponAutoReloadOption : uint8_t
{
	OncePerState = 0,
	Always = 1,
	EWeaponAutoReloadOption_MAX = 2
};

// Object: Enum GPWeaponDefineForPlugin.EHeadDetailType
enum class EHeadDetailType : uint8_t
{
	None = 0,
	Head = 1,
	FrontHead = 2,
	FrontHeadDown = 3,
	LeftHead = 4,
	RightHead = 5,
	BackHead = 6,
	TopHead = 7,
	EHeadDetailType_MAX = 8
};

// Object: Enum GPWeaponDefineForPlugin.EWeaponCancelCurrentStateReason
enum class EWeaponCancelCurrentStateReason : uint8_t
{
	GM = 0,
	Knockback = 1,
	CancelWeaponReload = 2,
	InteractivePutWeapon = 3,
	TwoHandedGestureAction = 4,
	VaultAndClimb = 5,
	ApplySprayAction = 6,
	AssassinateGlobalAction = 7,
	OneHandedGestureAction = 8,
	RescueOperateAction = 9,
	SwitchClickSkillWeapon = 10,
	EnterSkillState = 11,
	WeaponBlueprintLibrary = 12,
	BowCancelCharging = 13,
	AbilityStopFire = 14,
	CancelPreFire = 15,
	VehicleStateChange = 16,
	Parachute = 17,
	Emote = 18,
	Helmet = 19,
	SlidingTackle = 20,
	SkillCharacterStateConflict = 21,
	EMPBuff = 22,
	SwimmingSprint = 23,
	NetBuff = 24,
	Zipline = 25,
	EWeaponCancelCurrentStateReason_MAX = 26
};

// Object: Enum GPWeaponDefineForPlugin.EGPWeaponTickFrequency
enum class EGPWeaponTickFrequency : uint8_t
{
	Normal = 0,
	High = 1,
	Middle = 2,
	Low = 3,
	NotTick = 4,
	EGPWeaponTickFrequency_MAX = 5
};

// Object: Enum GPWeaponDefineForPlugin.EGPWeaponFireSocketMode
enum class EGPWeaponFireSocketMode : uint8_t
{
	Single = 0,
	Loop = 1,
	Random = 2,
	MeshOrder = 3,
	EGPWeaponFireSocketMode_MAX = 4
};

// Object: Enum GPWeaponDefineForPlugin.EWeaponMeshHideReason
enum class EWeaponMeshHideReason : uint8_t
{
	FuncAppearance = 0,
	FireThrowableWeapon = 1,
	FPPInteraction = 2,
	ThrowableWeaponAnimNotify = 3,
	SocketNotExist = 4,
	EWeaponMeshHideReason_MAX = 5
};

// Object: Enum GPWeaponDefineForPlugin.EWeaponAddAmmoType
enum class EWeaponAddAmmoType : uint8_t
{
	AddWithNum = 0,
	AddWithPercent = 1,
	AddToFull = 2,
	EWeaponAddAmmoType_MAX = 3
};

// Object: Enum GPWeaponDefineForPlugin.EWeaponConsumeAmmoType
enum class EWeaponConsumeAmmoType : uint8_t
{
	Normal = 0,
	FireFreeAmmo = 1,
	RloadFreeAmmo = 2,
	EWeaponConsumeAmmoType_MAX = 3
};

// Object: Enum GPWeaponDefineForPlugin.EInteractivePutWeaponType
enum class EInteractivePutWeaponType : uint8_t
{
	FastUnEquip = 1,
	NomalUnEquip = 2,
	QuietUnEquip = 3,
	EInteractivePutWeaponType_MAX = 4
};

// Object: Enum GPWeaponDefineForPlugin.EInteractiveGetWeaponType
enum class EInteractiveGetWeaponType : uint8_t
{
	FastEquip = 1,
	NomalEquip = 2,
	QuietEquip = 3,
	EInteractiveGetWeaponType_MAX = 4
};

// Object: Enum GPWeaponDefineForPlugin.EWeaponSwitchType
enum class EWeaponSwitchType : uint8_t
{
	Default = 0,
	Quiet = 1,
	Instant = 2,
	GetWeaponQuiet = 3,
	PutWeaponQuiet = 4,
	GetWeaponFast = 5,
	PutWeaponFast = 6,
	GetAndPutWeaponFast = 7,
	PutQuietAndGetWeaponFast = 8,
	EWeaponSwitchType_MAX = 9
};

// Object: Enum GPWeaponDefineForPlugin.EGPThrowableWeaponTypeForADS
enum class EGPThrowableWeaponTypeForADS : uint8_t
{
	Damage = 0,
	Special = 1,
	Placement = 2,
	Max = 3
};

// Object: Enum GPWeaponDefineForPlugin.EGPWeaponChangeClipMode
enum class EGPWeaponChangeClipMode : uint8_t
{
	Replace = 0,
	OneByOne = 1,
	TooHotToReload = 2,
	EGPWeaponChangeClipMode_MAX = 3
};

// Object: Enum GPWeaponDefineForPlugin.EGPWeaponFiringRateMode
enum class EGPWeaponFiringRateMode : uint8_t
{
	Auto = 0,
	Burst = 1,
	Max = 2
};

// Object: Enum GPWeaponDefineForPlugin.EGPWeaponFiringMode
enum class EGPWeaponFiringMode : uint8_t
{
	Auto = 0,
	Single = 1,
	AutoBurst = 2,
	SinglePump = 3,
	Burst = 4,
	ThrowHigh = 5,
	ThrowLow = 6,
	Max = 7
};

// Object: Enum GPWeaponDefineForPlugin.EProjectileMedium
enum class EProjectileMedium : uint8_t
{
	None = 0,
	Air = 1,
	Water = 2,
	Character = 3,
	Solid__Default = 4,
	Solid_1 = 5,
	Solid_2 = 6,
	Solid_3 = 7,
	Solid_4 = 8,
	Solid_5 = 9,
	Solid_6 = 10,
	Solid_7 = 11,
	Solid_8 = 12,
	Solid_9 = 13,
	Solid_10 = 14,
	Solid_11 = 15,
	Solid_12 = 16,
	Solid_13 = 17,
	Solid_14 = 18,
	Solid_15 = 19,
	Solid_16 = 20,
	Solid_17 = 21,
	Solid_18 = 22,
	Solid_19 = 23,
	Solid_20 = 24,
	Solid_21 = 25,
	Solid_22 = 26,
	Solid_23 = 27,
	Solid_24 = 28,
	Solid_25 = 29,
	Solid_26 = 30,
	Solid_27 = 31,
	Solid_28 = 32,
	Solid_29 = 33,
	Solid_30 = 34,
	Solid_31 = 35,
	Solid_32 = 36,
	Solid_33 = 37,
	Solid_34 = 38,
	Solid_35 = 39,
	Solid_36 = 40,
	Solid_37 = 41,
	Solid_38 = 42,
	Solid_39 = 43,
	Solid_40 = 44,
	Solid_41 = 45,
	Solid_42 = 46,
	Solid_43 = 47,
	Solid_44 = 48,
	Solid_45 = 49,
	Solid_46 = 50,
	Solid_47 = 51,
	Solid_48 = 52,
	Solid_49 = 53,
	Solid_50 = 54,
	Solid_51 = 55,
	Solid_52 = 56,
	Solid_53 = 57,
	Solid_54 = 58,
	Solid_55 = 59,
	Solid_56 = 60,
	Solid_57 = 61,
	Solid_58 = 62,
	Solid_59 = 63,
	Solid_60 = 64,
	Solid_61 = 65,
	Solid_62 = 66,
	Solid_Max = 67,
	EProjectileMedium_MAX = 68
};

// Object: Enum GPWeaponDefineForPlugin.EGPWeaponStateEvent
enum class EGPWeaponStateEvent : uint8_t
{
	EStateEvent_None = 0,
	EStateEvent_Activate = 1,
	EStateEvent_ActivateNotEquip = 2,
	EStateEvent_BeginFire = 3,
	EStateEvent_BeginZoomAndFire = 4,
	EStateEvent_EndFire = 5,
	EStateEvent_BeginAltFire = 6,
	EStateEvent_EndAltFire = 7,
	EStateEvent_BeginChangeClip = 8,
	EStateEvent_CancelChangeClip = 9,
	EStateEvent_CancelChangeClipSingle = 10,
	EStateEvent_Deactivate = 11,
	EStateEvent_PutBackWeapon = 12,
	EStateEvent_PutBackWeaponNotUnEquip = 13,
	EStateEvent_BeginZooming = 14,
	EStateEvent_EndZooming = 15,
	EStateEvent_Pickup = 16,
	EStateEvent_StopShootAiming = 17,
	EStateEvent_BeginSwitchFireMode = 18,
	EStateEvent_NotifyBreak = 19,
	EStateEvent_CancelFire = 20,
	EStateEvent_CancelCurrentState = 21,
	EStateEvent_BeginInteraction = 22,
	EStateEvent_EndInteraction = 23,
	EStateEvent_BeginSwitchPot = 24,
	EStateEvent_BeginLeftHold = 25,
	EStateEvent_EndLeftHold = 26,
	EStateEvent_BeginSawAttack = 27,
	EStateEvent_EndSawAttack = 28,
	EStateEvent_CancelCharging = 29,
	EStateEvent_Max = 30
};

// Object: Enum GPWeaponDefineForPlugin.EGPWeaponStateType
enum class EGPWeaponStateType : uint8_t
{
	EWeapState_None = 0,
	EWeapState_Active = 1,
	EWeapState_Inactive = 2,
	EWeapState_Equipping = 3,
	EWeapState_Unequipping = 4,
	EWeapState_PreFire = 5,
	EWeapState_KeepPreFire = 6,
	EWeapState_Firing = 7,
	EWeapState_PostFire = 8,
	EWeapState_ChangingClip = 9,
	EWeapState_Chamber = 10,
	EWeapState_Interaction = 11,
	EWeapState_Zoom = 12,
	EWeapState_AltFiring = 13,
	EWeapState_ZoomTransition = 14,
	EWeapState_SwitchFireMode = 15,
	EWeapState_BeginingInteraction = 16,
	EWeapState_CancelPreFire = 17,
	EWeapState_EndingInteraction = 18,
	EWeapState_SwitchPot = 19,
	EWeapState_LeftHold = 20,
	EWeapState_SawAttackState = 21,
	EWeapState_MAX = 22
};

// Object: Enum GPWeaponDefineForPlugin.EGPWeaponAttachBackConflict
enum class EGPWeaponAttachBackConflict : uint8_t
{
	None = 0,
	LunaDoubleBow = 1,
	EGPWeaponAttachBackConflict_MAX = 2
};

// Object: Enum GPWeaponDefineForPlugin.EGPWeaponAttachBackSocket
enum class EGPWeaponAttachBackSocket : uint8_t
{
	None = 0,
	Left = 1,
	Right = 2,
	Middle = 3,
	EGPWeaponAttachBackSocket_MAX = 4
};

// Object: Enum GPWeaponDefineForPlugin.EGPWeaponAppearanceAttachType
enum class EGPWeaponAppearanceAttachType : uint8_t
{
	None = 0,
	Primary = 1,
	Assistant = 2,
	Grenade = 3,
	MeleeWeapon = 4,
	Pistol = 5,
	SecondaryWeapon = 6,
	EGPWeaponAppearanceAttachType_MAX = 7
};

// Object: Enum GPWeaponDefineForPlugin.EGPWeaponAppearanceMeshType
enum class EGPWeaponAppearanceMeshType : uint8_t
{
	ThirdPersonMesh = 0,
	FirstPersonMesh = 1,
	EGPWeaponAppearanceMeshType_MAX = 2
};

// Object: Enum GPWeaponDefineForPlugin.EGPComponentSpawnCondition
enum class EGPComponentSpawnCondition : uint8_t
{
	ECompInitCond_AlwaysSpawn = 0,
	ECompInitCond_Logic = 1,
	ECompInitCond_Client = 2,
	ECompInitCond_Server = 3,
	ECompInitCond_NotOwned_Tpp_Client = 4,
	ECompInitCond_Fpp_Client = 5,
	ECompInitCond_LocalFocus_Client = 6,
	ECompInitCond_MAX = 7
};

// Object: Enum GPWeaponDefineForPlugin.EGPWeaponInnerEvent
enum class EGPWeaponInnerEvent : uint8_t
{
	EInnerEvent_None = 0,
	EStateEvent_SwitchToIdle = 1,
	EStateEvent_BeginEquip = 2,
	EStateEvent_EndEquip = 3,
	EStateEvent_PreFire = 4,
	EStateEvent_BeginKeepPreFire = 5,
	EStateEvent_EndKeepPreFire = 6,
	EStateEvent_BeginLeftHold = 7,
	EStateEvent_EndLeftHold = 8,
	EStateEvent_TimeoutAutoFire = 9,
	EStateEvent_CancelFire = 10,
	EStateEvent_BeginFire = 11,
	EStateEvent_AutoBurstGroupEnd = 12,
	EStateEvent_NoDelayEndFire = 13,
	EStateEvent_EndFire = 14,
	EStateEvent_FireModeProxyStateDirty = 15,
	EStateEvent_MeleeRealFire = 16,
	EStateEvent_SawAttackFire = 17,
	EStateEvent_PlugAfterFire = 18,
	EStateEvent_AfterFire = 19,
	EStateEvent_ZoomAfterPlug = 20,
	EStateEvent_BeginJumpFire = 21,
	EStateEvent_BeginZoom = 22,
	EStateEvent_BeginZoomAction = 23,
	EStateEvent_EndZoom = 24,
	EStateEvent_BeginChangeClip = 25,
	EStateEvent_CancelChangeClip = 26,
	EStateEvent_BeginChangeClipLogic = 27,
	EStateEvent_BeginChangeClip_Single = 28,
	EStateEvent_BeginChangeClip_Single_End = 29,
	EStateEvent_BeginChangeClip_FirstPartalSingle = 30,
	EStateEvent_BeginChangeClip_ContinuePartalSingle = 31,
	EStateEvent_BeginChangeClip_EmptyReload = 32,
	EStateEvent_BeginChangeClip_Normal = 33,
	EStateEvent_EndChangeClip = 34,
	EStateEvent_SwitchToInactive = 35,
	EStateEvent_BeginInteraction = 36,
	EStateEvent_EndInteraction = 37,
	EStateEvent_SwitchToInteraction = 38,
	EStateEvent_BeginSwitchPot = 39,
	EStateEvent_DoSwitchPot = 40,
	EStateEvent_EmptyClip = 41,
	EStateEvent_DryFire = 42,
	EStateEvent_StandToCrouch = 43,
	EStateEvent_StandToProne = 44,
	EStateEvent_CrouchToStand = 45,
	EStateEvent_CrouchToProne = 46,
	EStateEvent_ProneToStand = 47,
	EStateEvent_ProneToCrouch = 48,
	EStateEvent_InstantHit = 49,
	EStateEvent_SprayHit = 50,
	EStateEvent_BulletEffect = 51,
	EStateEvent_PenetratingMedium = 52,
	EStateEvent_BeginSwitchFireMode = 53,
	EStateEvent_EndSwitchFireMode = 54,
	EStateEvent_BeginSawAttack = 55,
	EStateEvent_EndSawAttack = 56,
	EStateEvent_ConfigBecomeEffective = 57,
	EStateEvent_DoFire = 58,
	EStateEvent_ReEquip = 59,
	EStateEvent_StateCacheBeginFire = 60,
	EStateEvent_StateCacheEndFire = 61,
	EStateEvent_PutBackWeaponNotUnEquip = 62,
	EStateEvent_PutBackWeapon = 63,
	EStateEvent_BeginControlFire = 64,
	EStateEvent_Max = 65,
	EStateEvent_NotifyBreak = 66,
	EStateEvent_BreakEquip = 67,
	EInnerEvent_DoBeginZoom = 68,
	EInnerEvent_DoEndZoom = 69,
	EInnerEvent_OverHeat = 70,
	EInnerEvent_CoolDown = 71,
	EInnerEvent_CompoleteCoolDown = 72,
	EInnerEvent_CompleteLocking = 73,
	EInnerEvent_ModifyFireModeIndex = 74,
	EInnerEvent_ModifyFiringModeType = 75,
	EInnerEvent_NextFiringModeType = 76,
	EInnerEvent_FiringModeTypeChanged = 77,
	EInnerEvent_ModifyWeaponParts = 78,
	EInnerEvent_ModifyWeaponPartsReady = 79,
	EInnerEvent_InitModularWeaponParts = 80,
	EInnerEvent_ShowFullAmmoMag = 81,
	EInnerEvent_WeaponPartsDynamicAttrModifed = 82,
	EInnerEvent_WeaponAmmoDynamicAttrModifed = 83,
	EInnerEvent_WriteWeaponPartsDynamicAttr = 84,
	EInnerEvent_RotationBegin = 85,
	EInnerEvent_RotationEnd = 86,
	EInnerEvent_EquipPerk = 87,
	EInnerEvent_UnEquipPerk = 88,
	EInnerEvent_ClearState = 89,
	EInnerEvent_OwnerReplicated = 90,
	EInnerEvent_OnInitAbilityActorInfo = 91,
	EInnerEvent_3PExtraDataReplicated = 92,
	EInnerEvent_StateChanged = 93,
	EInnerEvent_BeginInspect = 94,
	EInnerEvent_EndInspect = 95,
	EInnerEvent_MakeDamage = 96,
	EInnerEvent_BulletHit = 97,
	EInnerEvent_BeginChamber = 98,
	EInnerEvent_ChamberMax = 99,
	EInnerEvent_CancelChamber = 100,
	EInnerEvent_EndChamber = 101,
	EInnerEvent_AnimShellDrop = 102,
	EInnerEvent_Charging = 103,
	EInnerEvent_CancelCharge = 104,
	EInnerEvent_AnimEndFire = 105,
	EInnerEvent_ScopeParamOverrideChanged = 106,
	EInnerEvent_ResetWeaponState = 107,
	EInnerEvent_OBPendingBeginFire = 108,
	EInnerEvent_FastFire = 109,
	EInnerEvent_Max = 110,
	EStateEvent_Extend01 = 111,
	EInnerEvent_WeaponMeshAttached = 112,
	EInnerEvent_BipodUp = 113,
	EInnerEvent_BipodDown = 114,
	EInnerEvent_PowerFlashOn = 115,
	EInnerEvent_TacticalEquipUOn = 116,
	EInnerEvent_TacticalEquipUOff = 117,
	EInnerEvent_TacticalEquipU1On = 118,
	EInnerEvent_TacticalEquipU1Off = 119,
	EInnerEvent_TacticalEquipU2On = 120,
	EInnerEvent_TacticalEquipU2Off = 121,
	EInnerEvent_TacticalEquipROn = 122,
	EInnerEvent_TacticalEquipROff = 123,
	EInnerEvent_TacticalEquipR1On = 124,
	EInnerEvent_TacticalEquipR1Off = 125,
	EInnerEvent_TacticalEquipR2On = 126,
	EInnerEvent_TacticalEquipR2Off = 127,
	EInnerEvent_TacticalEquipDOn = 128,
	EInnerEvent_TacticalEquipDOff = 129,
	EInnerEvent_TacticalEquipD1On = 130,
	EInnerEvent_TacticalEquipD1Off = 131,
	EInnerEvent_TacticalEquipD2On = 132,
	EInnerEvent_TacticalEquipD2Off = 133,
	EInnerEvent_TacticalEquipLOn = 134,
	EInnerEvent_TacticalEquipLOff = 135,
	EInnerEvent_TacticalEquipL1On = 136,
	EInnerEvent_TacticalEquipL1Off = 137,
	EInnerEvent_TacticalEquipL2On = 138,
	EInnerEvent_TacticalEquipL2Off = 139,
	EInnerEvent_SwitchRangeScope = 140,
	EInnerEvent_BeginSideAiming = 141,
	EInnerEvent_EndSideAiming = 142,
	EInnerEvent_SwitchLaser = 143,
	EInnerEvent_ToggleRangeFinder = 144,
	EInnerEvent_CharacterOwnerChanged = 145,
	ENZAdapterEvent_Extend01 = 146,
	EInnerEvent_AutoAddAmmoComplete = 147,
	EStateEvent_LauncherBeginFire = 148,
	EInnerEvent_ChainHook_HitTarget = 149,
	EInnerEvent_ChainHook_PullBackLoop = 150,
	EInnerEvent_ChainHook_PullBackSuccess = 151,
	EInnerEvent_ChainHook_PullBackBreak = 152,
	EInnerEvent_ChainHook_PullBackNoneLoop = 153,
	EInnerEvent_ChainHook_PullBackNoneSuccess = 154,
	EInnerEvent_ToggleSkillWeaponExtraFunc = 155,
	EInnerEvent_InstantHitFor1P = 156,
	EInnerEvent_RefeshWeaponAttach = 157,
	EInnerEvent_KillOrKnockDown = 158,
	EInnerEvent_KillOrKnockDownPlayerOnly = 159,
	EGPWeaponInnerEvent_MAX = 160
};

// Object: Enum GPWeaponDefineForPlugin.EGPWeaponMode
enum class EGPWeaponMode : uint8_t
{
	EWeapMode_None = 0,
	EWeapMode_OwnerFirstPerson = 1,
	EWeapMode_OwnerThirdPerson = 2,
	EWeapMode_ObserverFirstPerson = 3,
	EWeapMode_ThirdPerson = 4,
	EWeapMode_MAX = 5
};

// Object: Enum GPWeaponDefineForPlugin.EFireCrackerType
enum class EFireCrackerType : uint8_t
{
	None = 0,
	HoldPerform = 1,
	SettleStill = 2,
	SettleLaunch = 3,
	SettleLaunch_Real = 4,
	SettleLaunch_Rank = 5,
	EFireCrackerType_MAX = 6
};

// Object: Enum GPWeaponDefineForPlugin.EPenetrateAttenuationType
enum class EPenetrateAttenuationType : uint8_t
{
	Never = 0,
	Always = 1,
	WithHandArmor = 2,
	EPenetrateAttenuationType_MAX = 3
};

// Object: Enum GPWeaponDefineForPlugin.EWeaponAmmoDamageType
enum class EWeaponAmmoDamageType : uint8_t
{
	HitFirst = 0,
	PassHand = 1,
	PassHand_IncludeHand = 2,
	EWeaponAmmoDamageType_MAX = 3
};

// Object: ScriptStruct GPWeaponDefineForPlugin.WeaponIdentity
// Size: 0x4 (Inherited: 0x0)
struct FWeaponIdentity
{
	uint32_t UniqueId; // 0x0(0x4)
};

// Object: ScriptStruct GPWeaponDefineForPlugin.WeaponFireOptionalData
// Size: 0x38 (Inherited: 0x0)
struct FWeaponFireOptionalData
{
	uint8_t DataOption; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float MovementTimeStamp; // 0x4(0x4)
	struct FVector_NetQuantize100 CameraLoc; // 0x8(0xC)
	struct FVector2D CameraRot; // 0x14(0x8)
	struct FVector2D FireAimRot; // 0x1C(0x8)
	int32_t CurrentSeed; // 0x24(0x4)
	float KickDeltaTime; // 0x28(0x4)
	struct FVector2D KickTargetRot; // 0x2C(0x8)
	int32_t Kick_TransRandIndex; // 0x34(0x4)
};

// Object: ScriptStruct GPWeaponDefineForPlugin.WeaponFireMulticastInfo
// Size: 0x78 (Inherited: 0x0)
struct FWeaponFireMulticastInfo
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	uint64_t FireId; // 0x8(0x8)
	uint8_t BulletIndex; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float InitSpeedFor3P; // 0x14(0x4)
	uint16_t NewAmmoCount; // 0x18(0x2)
	uint8_t Pad_0x1A[0x6]; // 0x1A(0x6)
	uint64_t AmmoId; // 0x20(0x8)
	uint8_t ComboNumber; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct TArray<struct FWeaponFireBulletInfo> BulletInfos; // 0x30(0x10)
	struct FWeaponFireOptionalData OptionalData; // 0x40(0x38)
};

// Object: ScriptStruct GPWeaponDefineForPlugin.WeaponBulletMediumInfo
// Size: 0x14 (Inherited: 0x0)
struct FWeaponBulletMediumInfo
{
	EProjectileMedium InitMedium; // 0x0(0x1)
	uint8_t bPenetrateMedium : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	struct FVector BorderLoc; // 0x4(0xC)
	EProjectileMedium NewMedium; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
};

// Object: ScriptStruct GPWeaponDefineForPlugin.WeaponFireBulletInfo
// Size: 0xE8 (Inherited: 0x0)
struct FWeaponFireBulletInfo
{
	uint64_t BulletGuid; // 0x0(0x8)
	uint64_t BulletId; // 0x8(0x8)
	uint8_t bRotAccurate : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	struct FVector_NetQuantize SpawnLocation; // 0x14(0xC)
	struct FRotator SpawnRotation; // 0x20(0xC)
	struct FRotator FireRotation; // 0x2C(0xC)
	struct FVector OwnerVelocity; // 0x38(0xC)
	struct FWeaponBulletMediumInfo MediumInfo; // 0x44(0x14)
	struct AActor* HomingTarget; // 0x58(0x8)
	struct FHitResult PredictHitResult; // 0x60(0x88)
};

// Object: ScriptStruct GPWeaponDefineForPlugin.FireFromViewConfig
// Size: 0xC (Inherited: 0x0)
struct FFireFromViewConfig
{
	uint8_t bOverrideConfig : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float TolerantAngle; // 0x4(0x4)
	uint8_t UseLogicAsBasic : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Object: ScriptStruct GPWeaponDefineForPlugin.WeaponHeadDefine
// Size: 0x1 (Inherited: 0x0)
struct FWeaponHeadDefine
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct GPWeaponDefineForPlugin.WeaponDPVSProxy
// Size: 0x18 (Inherited: 0x0)
struct FWeaponDPVSProxy
{
	float LastUpdateServerTimeSeconds; // 0x0(0x4)
	struct FWeaponIdentity WeaponIdentity; // 0x4(0x4)
	struct FVector_NetQuantize10 WeaponActorLocation_RebaseOnZero; // 0x8(0xC)
	int32_t WeaponActorRotation_Compressed; // 0x14(0x4)
};

// Object: ScriptStruct GPWeaponDefineForPlugin.BulletModeConfig
// Size: 0x18 (Inherited: 0x0)
struct FBulletModeConfig
{
	uint8_t b1PSpawnBullet : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float MaxPingFor1PSpawnBullet; // 0x4(0x4)
	uint8_t b1PMakeDamage : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t bDSSpawnBullet : 1; // 0x9(0x1), Mask(0x1)
	uint8_t BitPad_0x9_1 : 7; // 0x9(0x1)
	uint8_t bDSMakeDamage : 1; // 0xA(0x1), Mask(0x1)
	uint8_t BitPad_0xA_1 : 7; // 0xA(0x1)
	uint8_t bReplicateTo1P : 1; // 0xB(0x1), Mask(0x1)
	uint8_t BitPad_0xB_1 : 7; // 0xB(0x1)
	uint8_t bReplicateTo3P : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t bEnableCustomReplication : 1; // 0xD(0x1), Mask(0x1)
	uint8_t BitPad_0xD_1 : 7; // 0xD(0x1)
	uint8_t Pad_0xE[0x2]; // 0xE(0x2)
	float NetRelevantDistance; // 0x10(0x4)
	uint8_t bEnablePoolOnDS : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t b3PSpawnBullet : 1; // 0x15(0x1), Mask(0x1)
	uint8_t BitPad_0x15_1 : 7; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
};

// Object: ScriptStruct GPWeaponDefineForPlugin.WeaponFeatureOptions
// Size: 0x20 (Inherited: 0x0)
struct FWeaponFeatureOptions
{
	uint8_t bShowWeaponMesh : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bWeaponMeshCastShadow : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t bEnableWeaponAnim : 1; // 0x2(0x1), Mask(0x1)
	uint8_t BitPad_0x2_1 : 7; // 0x2(0x1)
	uint8_t bEnableCharacterAnim : 1; // 0x3(0x1), Mask(0x1)
	uint8_t BitPad_0x3_1 : 7; // 0x3(0x1)
	uint8_t bEnableCharacterFireAnim : 1; // 0x4(0x1), Mask(0x1)
	uint8_t BitPad_0x4_1 : 7; // 0x4(0x1)
	uint8_t bEnableEffect : 1; // 0x5(0x1), Mask(0x1)
	uint8_t BitPad_0x5_1 : 7; // 0x5(0x1)
	uint8_t bEnableMuzzleFlashEffect : 1; // 0x6(0x1), Mask(0x1)
	uint8_t BitPad_0x6_1 : 7; // 0x6(0x1)
	uint8_t bEnableShellDropEffect : 1; // 0x7(0x1), Mask(0x1)
	uint8_t BitPad_0x7_1 : 7; // 0x7(0x1)
	uint8_t bEnableMuzzleTrailEffect : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t bEnableFireAudio : 1; // 0x9(0x1), Mask(0x1)
	uint8_t BitPad_0x9_1 : 7; // 0x9(0x1)
	uint8_t bEnableOtherAudio : 1; // 0xA(0x1), Mask(0x1)
	uint8_t BitPad_0xA_1 : 7; // 0xA(0x1)
	uint8_t bEnableFireEvent : 1; // 0xB(0x1), Mask(0x1)
	uint8_t BitPad_0xB_1 : 7; // 0xB(0x1)
	uint8_t bEnableReloadEvent : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t bEnableOtherEvents : 1; // 0xD(0x1), Mask(0x1)
	uint8_t BitPad_0xD_1 : 7; // 0xD(0x1)
	uint8_t bWeaponSpawnDelay : 1; // 0xE(0x1), Mask(0x1)
	uint8_t BitPad_0xE_1 : 7; // 0xE(0x1)
	uint8_t Pad_0xF[0x1]; // 0xF(0x1)
	float SwitchWeaponRetryInterval; // 0x10(0x4)
	EGPWeaponTickFrequency WeaponDataCompAnimTickFrequency; // 0x14(0x1)
	EGPWeaponTickFrequency WeaponSkeletalMeshCompTickFrequency; // 0x15(0x1)
	EGPWeaponTickFrequency WeaponFuncCompAppearanceTickFrequency; // 0x16(0x1)
	EGPWeaponTickFrequency NormalWeaponPartTickFrequency; // 0x17(0x1)
	EGPWeaponTickFrequency HighlightWeaponPartTickFrequency; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	float LaserAdapterTickInterval; // 0x1C(0x4)
};

// Object: ScriptStruct GPWeaponDefineForPlugin.GPWeaponHitInfo
// Size: 0x1A8 (Inherited: 0x0)
struct FGPWeaponHitInfo
{
	uint8_t DamageType; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	uint64_t FireId; // 0x8(0x8)
	uint64_t ProjectileGuid; // 0x10(0x8)
	struct FHitResult HitResult; // 0x18(0x88)
	uint16_t BulletIndex; // 0xA0(0x2)
	uint8_t Pad_0xA2[0x2]; // 0xA2(0x2)
	struct FVector StartLocation; // 0xA4(0xC)
	struct FVector BulletSpawnLocation; // 0xB0(0xC)
	struct FVector StartDirection; // 0xBC(0xC)
	float FireTime; // 0xC8(0x4)
	float InWaterTime; // 0xCC(0x4)
	struct TWeakObjectPtr<struct AActor> BulletActor; // 0xD0(0x8)
	struct TWeakObjectPtr<struct AActor> CharacterOwner; // 0xD8(0x8)
	uint8_t bPenetratedLimbs : 1; // 0xE0(0x1), Mask(0x1)
	uint8_t BitPad_0xE0_1 : 7; // 0xE0(0x1)
	uint8_t Pad_0xE1[0x3]; // 0xE1(0x3)
	struct FHitResult LimbsHitResult; // 0xE4(0x88)
	int32_t MediumSecIndex; // 0x16C(0x4)
	int32_t MediumBorderIndex; // 0x170(0x4)
	struct TWeakObjectPtr<struct AActor> HomingTargetActor; // 0x174(0x8)
	struct FVector RadialLocation; // 0x17C(0xC)
	struct TArray<struct AActor*> IgnoreActors; // 0x188(0x10)
	uint32_t VehicleId; // 0x198(0x4)
	uint8_t bIsInVehicleLeanOut : 1; // 0x19C(0x1), Mask(0x1)
	uint8_t BitPad_0x19C_1 : 7; // 0x19C(0x1)
	uint8_t Pad_0x19D[0x3]; // 0x19D(0x3)
	uint64_t FireIdForVehicle; // 0x1A0(0x8)
};

// Object: ScriptStruct GPWeaponDefineForPlugin.GPWeaponPenetrateParam
// Size: 0x14 (Inherited: 0x0)
struct FGPWeaponPenetrateParam
{
	uint8_t bIsValid : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	EWeaponAmmoDamageType AmmoDamageType; // 0x1(0x1)
	int8_t AmmoArmorLevelDiff; // 0x2(0x1)
	EPenetrateAttenuationType PenetrateAttenuationType; // 0x3(0x1)
	float PenetrateAttenuationRatio; // 0x4(0x4)
	int8_t PenetrateAmmoLevelDecrease; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float PenetrationCoefficient; // 0xC(0x4)
	uint8_t bBreakArmor : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
};

// Object: ScriptStruct GPWeaponDefineForPlugin.BulletHitRepInfo
// Size: 0xB0 (Inherited: 0x0)
struct FBulletHitRepInfo
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	uint64_t BulletGuid; // 0x8(0x8)
	uint64_t AmmoId; // 0x10(0x8)
	struct FHitResult HitResult; // 0x18(0x88)
	float InitSpeedFor3P; // 0xA0(0x4)
	uint8_t bAfterRPCOpt : 1; // 0xA4(0x1), Mask(0x1)
	uint8_t BitPad_0xA4_1 : 7; // 0xA4(0x1)
	uint8_t bHitLandScape : 1; // 0xA5(0x1), Mask(0x1)
	uint8_t BitPad_0xA5_1 : 7; // 0xA5(0x1)
	uint8_t bHitCharacterMesh : 1; // 0xA6(0x1), Mask(0x1)
	uint8_t BitPad_0xA6_1 : 7; // 0xA6(0x1)
	uint8_t bClientHitStaticSceneObject : 1; // 0xA7(0x1), Mask(0x1)
	uint8_t BitPad_0xA7_1 : 7; // 0xA7(0x1)
	uint8_t bClientHitStaticSceneLandScape : 1; // 0xA8(0x1), Mask(0x1)
	uint8_t BitPad_0xA8_1 : 7; // 0xA8(0x1)
	uint8_t Pad_0xA9[0x7]; // 0xA9(0x7)
};

// Object: ScriptStruct GPWeaponDefineForPlugin.BulletHitInfo
// Size: 0xD0 (Inherited: 0xB0)
struct FBulletHitInfo : FBulletHitRepInfo
{
	uint64_t BulletIndex; // 0xB0(0x8)
	struct FVector SpawnLocation; // 0xB8(0xC)
	float Timestamp; // 0xC4(0x4)
	uint8_t Pad_0xC8[0x8]; // 0xC8(0x8)
};

// Object: ScriptStruct GPWeaponDefineForPlugin.PenetratingMediumParam
// Size: 0x48 (Inherited: 0x0)
struct FPenetratingMediumParam
{
	uint64_t BulletGuid; // 0x0(0x8)
	struct FVector BulletVelocity; // 0x8(0xC)
	struct FVector Position; // 0x14(0xC)
	struct FVector EndPosition; // 0x20(0xC)
	uint8_t Pad_0x2C[0xC]; // 0x2C(0xC)
	struct TWeakObjectPtr<struct AActor> Owner; // 0x38(0x8)
	uint8_t Pad_0x40[0x8]; // 0x40(0x8)
};

// Object: ScriptStruct GPWeaponDefineForPlugin.BeginFireEventParam
// Size: 0x10 (Inherited: 0x0)
struct FBeginFireEventParam
{
	uint64_t FireId; // 0x0(0x8)
	float LastFireTime; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct GPWeaponDefineForPlugin.GPWeaponEventObject
// Size: 0x1 (Inherited: 0x0)
struct FGPWeaponEventObject
{
	uint8_t bNoNeedPlayAnim : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
};

// Object: ScriptStruct GPWeaponDefineForPlugin.WeaponFireRepInfo
// Size: 0xB0 (Inherited: 0x78)
struct FWeaponFireRepInfo : FWeaponFireMulticastInfo
{
	float InitSpeed; // 0x78(0x4)
	uint32_t VehicleId; // 0x7C(0x4)
	uint8_t bIsVehicleLeanOut : 1; // 0x80(0x1), Mask(0x1)
	uint8_t BitPad_0x80_1 : 7; // 0x80(0x1)
	uint8_t bHeavyAttack : 1; // 0x81(0x1), Mask(0x1)
	uint8_t BitPad_0x81_1 : 7; // 0x81(0x1)
	uint8_t Pad_0x82[0x2]; // 0x82(0x2)
	int32_t FireStateFrameNo; // 0x84(0x4)
	float FireTimeStamp; // 0x88(0x4)
	float FTCT; // 0x8C(0x4)
	float ClientLogicFireTimeStamp; // 0x90(0x4)
	float ServerDeltaTime; // 0x94(0x4)
	uint8_t ForceMakeDamageOnDS : 1; // 0x98(0x1), Mask(0x1)
	uint8_t BitPad_0x98_1 : 7; // 0x98(0x1)
	uint8_t Pad_0x99[0x3]; // 0x99(0x3)
	struct FVector CharacterOwnerLoc; // 0x9C(0xC)
	uint8_t CustomValue; // 0xA8(0x1)
	uint8_t Pad_0xA9[0x7]; // 0xA9(0x7)
};

// Object: ScriptStruct GPWeaponDefineForPlugin.GPWeaponAttachInfo
// Size: 0x40 (Inherited: 0x0)
struct FGPWeaponAttachInfo
{
	EGPWeaponAppearanceAttachType AttachType; // 0x0(0x1)
	uint8_t Pad_0x1[0xF]; // 0x1(0xF)
	struct FTransform AttachOffset; // 0x10(0x30)
};

// Object: ScriptStruct GPWeaponDefineForPlugin.GPWeaponMesh
// Size: 0xB0 (Inherited: 0x0)
struct FGPWeaponMesh
{
	EGPWeaponAppearanceMeshType MeshType; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FSoftObjectPath MeshObjectPath; // 0x8(0x18)
	struct TSoftClassPtr<struct UAnimInstance*> MeshAnimClass; // 0x20(0x28)
	uint8_t bEnablePhyicals : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x3]; // 0x49(0x3)
	struct FName CollisionProfileName; // 0x4C(0x8)
	uint8_t bNeedBlockBullet : 1; // 0x54(0x1), Mask(0x1)
	uint8_t BitPad_0x54_1 : 7; // 0x54(0x1)
	uint8_t Pad_0x55[0xB]; // 0x55(0xB)
	struct FGPWeaponAttachInfo HangBackInfo; // 0x60(0x40)
	float HangBackDelaySeconds; // 0xA0(0x4)
	float HangFrontDelaySeconds; // 0xA4(0x4)
	uint8_t Pad_0xA8[0x8]; // 0xA8(0x8)
};

// Object: ScriptStruct GPWeaponDefineForPlugin.WeaponMeleeHeavyAttackData
// Size: 0x2C (Inherited: 0x0)
struct FWeaponMeleeHeavyAttackData
{
	int32_t AttackerId; // 0x0(0x4)
	float AttackTime; // 0x4(0x4)
	float AttackCastTime; // 0x8(0x4)
	float AttackBackSwingTime; // 0xC(0x4)
	float AttackTraceInterval; // 0x10(0x4)
	float AttackTraceDelay; // 0x14(0x4)
	float AttackTraceTime; // 0x18(0x4)
	float AttackLockMoveTime; // 0x1C(0x4)
	float AttackRange; // 0x20(0x4)
	struct FName AttackAnimSection; // 0x24(0x8)
};

// Object: ScriptStruct GPWeaponDefineForPlugin.GPWeaponMeleeComboData
// Size: 0x40 (Inherited: 0x0)
struct FGPWeaponMeleeComboData
{
	struct FName AnimSectionName; // 0x0(0x8)
	float AttackTime; // 0x8(0x4)
	float AttackCastTime; // 0xC(0x4)
	float AttackBackSwingTime; // 0x10(0x4)
	float AttackWaitTime; // 0x14(0x4)
	float AttackRange; // 0x18(0x4)
	float AttackRadius; // 0x1C(0x4)
	int64_t AttackId; // 0x20(0x8)
	int32_t SameTimeAttackNumber; // 0x28(0x4)
	float AttackCastBeforeTime; // 0x2C(0x4)
	float AttackCastAfterTime; // 0x30(0x4)
	float AttackWidth; // 0x34(0x4)
	float AttackHeight; // 0x38(0x4)
	float AttackForceBreak; // 0x3C(0x4)
};

// Object: ScriptStruct GPWeaponDefineForPlugin.GPWeaponPenTrationHitResult
// Size: 0x90 (Inherited: 0x0)
struct FGPWeaponPenTrationHitResult
{
	uint8_t Pad_0x0[0x90]; // 0x0(0x90)
};

// Object: ScriptStruct GPWeaponDefineForPlugin.GPWeaponPenetrationModifier
// Size: 0xC (Inherited: 0x0)
struct FGPWeaponPenetrationModifier
{
	float DamageModifier; // 0x0(0x4)
	float DistanceModifier; // 0x4(0x4)
	float StaggerForceModifier; // 0x8(0x4)
};

// Object: ScriptStruct GPWeaponDefineForPlugin.GPWeaponEventDataBase
// Size: 0x8 (Inherited: 0x0)
struct FGPWeaponEventDataBase
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct GPWeaponDefineForPlugin.WeaponEventData_OBPendingBeginFire
// Size: 0x10 (Inherited: 0x8)
struct FWeaponEventData_OBPendingBeginFire : FGPWeaponEventDataBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
};

// Object: ScriptStruct GPWeaponDefineForPlugin.WeaponEventData_TimeOut
// Size: 0x18 (Inherited: 0x8)
struct FWeaponEventData_TimeOut : FGPWeaponEventDataBase
{
	float Timeout; // 0x8(0x4)
	struct FName NewStateName; // 0xC(0x8)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct GPWeaponDefineForPlugin.WeaponEventData_ModifyFiringModeType
// Size: 0x10 (Inherited: 0x8)
struct FWeaponEventData_ModifyFiringModeType : FGPWeaponEventDataBase
{
	uint8_t NewFiringModeValue; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
};

// Object: ScriptStruct GPWeaponDefineForPlugin.WeaponEventData_InstantHit
// Size: 0x10 (Inherited: 0x8)
struct FWeaponEventData_InstantHit : FGPWeaponEventDataBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
};

// Object: ScriptStruct GPWeaponDefineForPlugin.WeaponEventData_CancelChangeClip
// Size: 0x10 (Inherited: 0x8)
struct FWeaponEventData_CancelChangeClip : FGPWeaponEventDataBase
{
	uint8_t bStop : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
};

// Object: ScriptStruct GPWeaponDefineForPlugin.WeaponEventData_DoFire
// Size: 0x10 (Inherited: 0x8)
struct FWeaponEventData_DoFire : FGPWeaponEventDataBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
};

// Object: ScriptStruct GPWeaponDefineForPlugin.WeaponEventData_NotifyBreak
// Size: 0x10 (Inherited: 0x8)
struct FWeaponEventData_NotifyBreak : FGPWeaponEventDataBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
};

// Object: ScriptStruct GPWeaponDefineForPlugin.WeaponEventData_FireModeProxyStateDirty
// Size: 0x10 (Inherited: 0x8)
struct FWeaponEventData_FireModeProxyStateDirty : FGPWeaponEventDataBase
{
	uint8_t bWaitingFirstFire : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t bWaitingBurstCD : 1; // 0x9(0x1), Mask(0x1)
	uint8_t BitPad_0x9_1 : 7; // 0x9(0x1)
	uint8_t Pad_0xA[0x6]; // 0xA(0x6)
};

// Object: ScriptStruct GPWeaponDefineForPlugin.WeaponEventData_NeedPlayAnim
// Size: 0x10 (Inherited: 0x8)
struct FWeaponEventData_NeedPlayAnim : FGPWeaponEventDataBase
{
	uint8_t bNoNeedPlayAnim : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
};

// Object: ScriptStruct GPWeaponDefineForPlugin.WeaponEventData_BeginFire
// Size: 0x18 (Inherited: 0x8)
struct FWeaponEventData_BeginFire : FGPWeaponEventDataBase
{
	uint64_t FireId; // 0x8(0x8)
	float LastFireTime; // 0x10(0x4)
	uint8_t bFakeFire : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
};

// Object: Class GPWeaponDefineForPlugin.WeaponOptimizeHelper
// Size: 0x28 (Inherited: 0x28)
struct UWeaponOptimizeHelper : UObject
{
	DEFINE_UE_CLASS_HELPERS(UWeaponOptimizeHelper, "WeaponOptimizeHelper")
};

// Object: Class GPWeaponDefineForPlugin.GPWeaponBlackboard
// Size: 0xA0 (Inherited: 0x28)
struct UGPWeaponBlackboard : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGPWeaponBlackboard, "GPWeaponBlackboard")

	uint8_t Pad_0x28[0x38]; // 0x28(0x38)
	struct TArray<EGPWeaponFiringMode> SupportedFiringModes; // 0x60(0x10)
	uint8_t Pad_0x70[0x30]; // 0x70(0x30)
};

} // namespace SDK
