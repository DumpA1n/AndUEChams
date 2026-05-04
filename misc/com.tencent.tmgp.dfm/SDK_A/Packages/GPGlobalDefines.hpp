#pragma once

#include "../CoreUObject_classes.hpp"
#include "CustomStats.hpp"
#include "Engine.hpp"
#include "GameCore.hpp"
#include "SlateCore.hpp"

namespace SDK
{

// Package: GPGlobalDefines
// Enums: 110
// Structs: 55
// Classes: 56

struct AActor;
struct ACHARACTER;
struct APawn;
struct APlayerController;
enum class EDeviceLevel : uint8_t;
enum class EGPInputType : uint8_t;
enum class EGraphicsQualityLevelHD : uint8_t;
enum class EPerfGearQualityLevel : uint8_t;
struct FDisplayModeHD;
struct FMonitorInfoHD;
struct FPaintContext;
struct UCurveFloat;
struct UDataTable;
struct USplineComponent;
struct UWorld;
struct FMoveInput;
struct FItemID;
struct FSystemSettingDescHD;
struct FVehicleInfo;
struct FMarkingHeroCommandInfo;
struct FVehicleDamageFalloffConfig;
struct FVehicleDamageFalloffSettings;
struct FVehicleDamageFalloffOverride;
struct FVehicleDamageFalloffItem;
struct FSHeroPreferenceSettingRow;
struct FUserDefineRotationSetting;
struct FFixedSpeedSensitivitySetting;
struct FRotationGyroScopeSetting;
struct FRotationSensitivityCommonSetting;
struct FSpeedAccSensitivitySetting;
struct FSensitivityOuterSetting;
struct FVehicleSensitivityOuterSetting;
struct FVehicleSensitivitySetting;
struct FPriorityRow;
struct FNetbarPriorityRow;
struct FAxisSensitivitySettingHD;
struct FVehicleSensitivityOuterSettingHD;
struct FWeaponZoomDataHD;
struct FZoomratedDataHD;
struct FAdapterInfoHD;
struct FGamepadSensitivityPresetSettingRowHD;
struct FGamepadExtraSensitivityDataHD;
struct FGamepadThumbRestrictDataHD;
struct FWeaponZoomDataSettingRowHD;
struct FVideoSettingVRamRowHD;
struct FAdvancedVideoSettingRowHD;
struct FSystemSettingRowHD;
struct FResolutionVramRowHD;
struct FVideoSettingClampRowHD;
struct FDamageAttenConfigItem;
struct FCacheObjectInfo;
struct FSkillRepTickData;
struct FAILabCharacterDebugInfoBunch;
struct FAILabCharacterDebugInfo;
struct FQuestFullID;
struct FGPSnapshotInfo;
struct FGPPlayerBasicInfo;
struct FHUDAdaptationRow;
struct FHUDAdaptationSetting;
struct FCustomGridPanelData;
struct FCustomPanelData;
struct FMiscSetting;
struct FVehicleRotationSensitivitySetting;
struct FReplayDataChunk;
struct FReplayCheckpointChunk;
struct FReplayHeaderChunk;
struct FSoftObjectLoader;
struct FBattleFieldVehicleInfoRow;
struct FVehicleScanningRadarConfig;
struct FVehicleDataTableRow;
struct AGPTriggerBase;
struct UBlueprintFunctionHelper;
struct UClientSettingHelperHD;
struct UClientBHDSetting;
struct UClientDebugSetting;
struct UClientGameSetting;
struct UClientSettingDelagate;
struct UClientDisplaySetting;
struct UClientBaseSetting;
struct UClientOtherSetting;
struct UClientControlSetting;
struct UClientVehicleSetting;
struct UClientVolumeSetting;
struct UClientSensitivitySetting;
struct UClientDownloadSetting;
struct UClientPrivacySetting;
struct UClientChatSetting;
struct UClientComminicateSetting;
struct UClientSolSetting;
struct URankingListSetting;
struct UClientHeroPreferenceSetting;
struct UClientCustomCrossHairSetting;
struct UAdvancedVideoSetting;
struct UClientBaseSettingHD;
struct UClientSensitivitySettingHD;
struct UClientCameraSettingHD;
struct UClientVideoSettingHD;
struct UClientVehicleSettingHD;
struct UClientGameSettingHD;
struct UClientDisplaySettingHD;
struct UClientAudioSettingHD;
struct UClientPrivacySettingHD;
struct UClientHeroPreferenceSettingHD;
struct UClientCustomCrossHairSettingHD;
struct UClientSystemSettingStats;
struct IGPBaseMoveInterface;
struct UGPCachePool;
struct UGPCatenaryUtil;
struct IGPCharacterInterface;
struct UGPDebugDrawComponent;
struct AGPEffectTriggerBase;
struct UGPGlobalUtil;
struct UGPWidgetUtil;
struct UGPGlobalConfig;
struct UGPLevelEnvEvents;
struct UGPPlayerInfoUtils;
struct AGPShowActorTags;
struct AGPSpawnerBase;
struct UGPSpawnPool;
struct UGPSplineUtil;
struct IGPVehicleInterface;
struct UHeavyTaskScheduler;
struct UItemIDUtil;
struct IItemInterface;
struct UDFReplayBase;
struct UDFReplayGlobalDefine;

// Object: Enum GPGlobalDefines.EAdapterItemType
enum class EAdapterItemType : uint8_t
{
	None = 0,
	Receiver = 1,
	GunBarral = 2,
	PistolGrip = 3,
	Stock = 4,
	Handguard = 5,
	Sight = 11,
	Magazine = 12,
	Muzzle = 13,
	Foregrip = 14,
	Underbarrel = 15,
	TacticalDevices = 16,
	Bipod = 17,
	ForSight = 18,
	RearSight = 19,
	Special = 20,
	SightBase = 21,
	Handle = 22,
	Attacker = 23,
	Connector = 24,
	Trigger = 25,
	PistolgripPatch = 26,
	CheekRest = 29,
	HandguardChip = 32,
	GripBass = 33,
	MagBass = 34,
	Flashkill = 37,
	Hammer = 38,
	GasT = 39,
	HanU = 40,
	Shield = 41,
	Bolt = 42,
	Handle2 = 43,
	BowLimb = 44,
	BowGrip = 45,
	Pendant = 46,
	BowString = 47,
	BowRelease = 48,
	ArrowRest = 50,
	BowScope = 51,
	Lever = 52,
	ShellHolder = 53,
	Ammo = 99,
	EAdapterItemType_MAX = 100
};

// Object: Enum GPGlobalDefines.EWeaponItemType
enum class EWeaponItemType : uint8_t
{
	None = 0,
	Rifle = 1,
	Submachine = 2,
	Shotgun = 3,
	LightMachine = 4,
	PrecisionShootingRifle = 5,
	Sniper = 6,
	Pistol = 7,
	Heavy = 8,
	Melee = 10,
	EmptyHand = 11,
	VehicleGun = 12,
	Bow = 13,
	BlastShield = 14,
	CompoundBow = 15,
	HeavyMachineGun = 99,
	FlameThrower = 200,
	Max = 201
};

// Object: Enum GPGlobalDefines.EDFMGamePlayMode
enum class EDFMGamePlayMode : uint8_t
{
	None = 0,
	GamePlayMode_SOL = 1,
	GamePlayMode_Raid = 2,
	GamePlayMode_IrisDiscovery = 3,
	GamePlayMode_Conquest = 4,
	GamePlayMode_Breakthrough = 5,
	GamePlayMode_SafeHouse = 6,
	GamePlayMode_Intro = 7,
	GamePlayMode_BombDefusal = 8,
	GamePlayMode_GoldenGunGun = 9,
	EDFMGamePlayMode_MAX = 10
};

// Object: Enum GPGlobalDefines.ESoundVisualizationType
enum class ESoundVisualizationType : uint8_t
{
	ESVT_Default = 0,
	ESVT_None = 1,
	ESVT_Weapon_WeaponCommon = 2,
	ESVT_Weapon_MeleeWeaponCommon = 3,
	ESVT_Weapon_Fire = 4,
	ESVT_Weapon_SubFire = 5,
	ESVT_Weapon_Reload = 6,
	ESVT_Explosion = 7,
	ESVT_Character_SwitchAction = 8,
	ESVT_Character_SwitchAction_StandCrouch = 9,
	ESVT_FootStep_Common = 10,
	ESVT_FootStep_Walk = 11,
	ESVT_FootStep_Run = 12,
	ESVT_FootStep_Sprint = 13,
	ESVT_FootStep_Jump = 14,
	ESVT_FootStep_Land = 15,
	ESVT_FootStep_CrouchMove = 16,
	ESVT_FootStep_CrouchRun = 17,
	ESVT_FootStep_ProneMove = 18,
	ESVT_FootStep_ProneRun = 19,
	ESVT_FootStep_FractureMove = 20,
	ESVT_FootStep_FractureRun = 21,
	ESVT_FootStep_ClimbMove = 22,
	ESVT_FootStep_SlideTackle = 23,
	ESVT_FootStep_Swim = 24,
	ESVT_FootStep_SwimFast = 25,
	ESVT_FootStep_SwimUnderWater = 26,
	ESVT_FootStep_SwimFastUnderWater = 27,
	ESVT_FootStep_SwimIdle = 28,
	ESVT_FootStep_SwimIdleUnderWater = 29,
	ESVT_FootStep_SwimUp = 30,
	ESVT_FootStep_SwimDown = 31,
	ESVT_FootStep_SwimToLand = 32,
	ESVT_FootStep_LandToSwim = 33,
	ESVT_FootStep_FallingToSwimHigh = 34,
	ESVT_FootStep_FallingToSwimMid = 35,
	ESVT_FootStep_FallingToSwimLow = 36,
	ESVT_Interact_InteractCommon = 37,
	ESVT_Interact_OpenCloseDoor = 38,
	ESVT_Interact_BreakDoor = 39,
	ESVT_Interact_KickDoor = 40,
	ESVT_Interact_ReleaseLockDoor = 41,
	ESVT_Interact_HoldItem = 42,
	ESVT_Interact_UseItem = 43,
	ESVT_Interact_Looting = 44,
	ESVT_Interact_HackPC = 45,
	ESVT_Interact_ClimbLadder = 46,
	ESVT_Interact_Rescuing = 47,
	ESVT_Interact_Vaulting = 48,
	ESVT_Interact_CarryBody = 49,
	ESVT_Interact_FoliageOverlap = 50,
	ESVT_Interact_Parachute = 51,
	ESVT_Interact_Zipline = 52,
	ESVT_PlayerBreath = 53,
	ESVT_PlayerVoice = 54,
	ESVT_AIVoice = 55,
	ESVT_AI_FootStep_Common = 56,
	ESVT_AI_FootStep_Walk = 57,
	ESVT_AI_FootStep_Run = 58,
	ESVT_AI_FootStep_Sprint = 59,
	ESVT_AI_FootStep_Jump = 60,
	ESVT_AI_FootStep_Land = 61,
	ESVT_AI_FootStep_CrouchMove = 62,
	ESVT_AI_FootStep_CrouchRun = 63,
	ESVT_AI_FootStep_ProneMove = 64,
	ESVT_AI_FootStep_ProneRun = 65,
	ESVT_AI_FootStep_FractureMove = 66,
	ESVT_AI_FootStep_FractureRun = 67,
	ESVT_AI_FootStep_ClimbMove = 68,
	ESVT_AI_FootStep_SlideTackle = 69,
	ESVT_Vehicle_VehicleCommon = 70,
	ESVT_Vehicle_EngineerCar = 71,
	ESVT_Skill_Assault_BuffStart = 72,
	ESVT_SKill_Assault_DashStart = 73,
	ESVT_Skill_Engineer_MineActivate = 74,
	ESVT_Skill_Engineer_MineRecycle = 75,
	ESVT_Skill_Engineer_RobotStart = 76,
	ESVT_Skill_Engineer_WeldingIronGauze = 77,
	ESVT_Skill_Support_SelfCure = 78,
	ESVT_Skill_Scout_PathTracing = 79,
	ESVT_Skill_Engineer_WearAntiExplosion = 80,
	ESVT_Skill_Engineer_TakeOffAntiExplosion = 81,
	ESVT_Skill_Assault_SilenceZone = 82,
	ESVT_Skill_304_Roll = 83,
	ESVT_Skill_304_Rope = 84,
	ESVT_Skill_304_Passive = 85,
	ESVT_Vehicle_AIVehicleCommon = 86,
	ESVT_Skill_203_BionicSpy = 87,
	ESVT_Skill_C103_MedicalDrone = 88,
	ESVT_Skill_C103_ButterFly = 89,
	ESVT_Skill_C103_ButterRescure = 90,
	ESVT_Skill_C103_RemoteRescure = 91,
	ESVT_Skill_C501_CallAI = 92,
	ESVT_Skill_C501_Roll = 93,
	ESVT_NumMax = 94,
	ESVT_MAX = 95
};

// Object: Enum GPGlobalDefines.ELootingShare
enum class ELootingShare : uint8_t
{
	Close = 0,
	TeamShare = 1,
	WholeTeamShare = 2,
	ELootingShare_MAX = 3
};

// Object: Enum GPGlobalDefines.ESensitivityType
enum class ESensitivityType : uint8_t
{
	Normal = 0,
	Fire = 1,
	ESensitivityType_MAX = 2
};

// Object: Enum GPGlobalDefines.ESensitivityMode
enum class ESensitivityMode : uint8_t
{
	FixedSpeed = 0,
	SpeedAcc = 1,
	ESensitivityMode_MAX = 2
};

// Object: Enum GPGlobalDefines.EAudioMasteringPCType
enum class EAudioMasteringPCType : uint8_t
{
	HomeCinema = 0,
	Headphones = 1,
	NightMode = 2,
	Max = 3
};

// Object: Enum GPGlobalDefines.EAudioPresetPCType
enum class EAudioPresetPCType : uint8_t
{
	Loudspeaker = 0,
	EarphoneStereo = 1,
	EarphoneDolbyAtmos = 2,
	Max = 3
};

// Object: Enum GPGlobalDefines.ELODLevel
enum class ELODLevel : uint8_t
{
	Low = 0,
	Medium = 1,
	High = 2,
	Superhigh = 3,
	ELODLevel_MAX = 4
};

// Object: Enum GPGlobalDefines.EVehicleAimAssistMode
enum class EVehicleAimAssistMode : uint8_t
{
	AllOpen = 0,
	AllClose = 1,
	Custom = 2,
	EVehicleAimAssistMode_MAX = 3
};

// Object: Enum GPGlobalDefines.ESecondWeaponFireBtn
enum class ESecondWeaponFireBtn : uint8_t
{
	Close = 0,
	ChangeWeapon = 1,
	Fire = 2,
	ESecondWeaponFireBtn_MAX = 3
};

// Object: Enum GPGlobalDefines.EVehicleCannonLockMode
enum class EVehicleCannonLockMode : uint8_t
{
	Close = 0,
	Click = 1,
	Press = 2,
	EVehicleCannonLockMode_MAX = 3
};

// Object: Enum GPGlobalDefines.ERollCameraMode
enum class ERollCameraMode : uint8_t
{
	Click = 0,
	Mixed = 1,
	ERollCameraMode_MAX = 2
};

// Object: Enum GPGlobalDefines.EDriveAngle
enum class EDriveAngle : uint8_t
{
	Follow = 0,
	Free = 1,
	EDriveAngle_MAX = 2
};

// Object: Enum GPGlobalDefines.EWeaponVehicleMode
enum class EWeaponVehicleMode : uint8_t
{
	JoyStick = 0,
	Button = 1,
	EWeaponVehicleMode_MAX = 2
};

// Object: Enum GPGlobalDefines.EVehicleMode
enum class EVehicleMode : uint8_t
{
	Button = 0,
	Glider = 1,
	JoyStick = 2,
	EVehicleMode_MAX = 3
};

// Object: Enum GPGlobalDefines.ESuperSprintControlMode
enum class ESuperSprintControlMode : uint8_t
{
	LeftStick = 0,
	Button = 1,
	ESuperSprintControlMode_MAX = 2
};

// Object: Enum GPGlobalDefines.EMoveRunMode
enum class EMoveRunMode : uint8_t
{
	LeftMoveRightFix = 0,
	LeftMoveRightFollow = 1,
	LeftFixRightFix = 2,
	EMoveRunMode_MAX = 3
};

// Object: Enum GPGlobalDefines.ThrowableWeaponBtnRotatedMode
enum class EThrowableWeaponBtnRotatedMode : uint8_t
{
	AllOpen = 0,
	AllClose = 1,
	DirectThrowOnly = 2,
	ThrownInHandOnly = 3,
	ThrowableWeaponBtnRotatedMode_MAX = 4
};

// Object: Enum GPGlobalDefines.ELevel
enum class ELevel : uint8_t
{
	Low = 0,
	Middle = 1,
	High = 2,
	ELevel_MAX = 3
};

// Object: Enum GPGlobalDefines.EClimbAssistMode
enum class EClimbAssistMode : uint8_t
{
	AllOpen = 0,
	RushOnly = 1,
	AllClose = 2,
	EClimbAssistMode_MAX = 3
};

// Object: Enum GPGlobalDefines.EJumpSplitMode
enum class EJumpSplitMode : uint8_t
{
	Close = 0,
	BtnClick = 1,
	Slide = 2,
	EJumpSplitMode_MAX = 3
};

// Object: Enum GPGlobalDefines.ESensitivityChangeMode
enum class ESensitivityChangeMode : uint8_t
{
	StartAim = 0,
	AfterOpenScope = 1,
	Transitional = 2,
	ESensitivityChangeMode_MAX = 3
};

// Object: Enum GPGlobalDefines.EFunctionBtnRotationMode
enum class EFunctionBtnRotationMode : uint8_t
{
	AllOpen = 0,
	AllClose = 1,
	Custom = 2,
	EFunctionBtnRotationMode_MAX = 3
};

// Object: Enum GPGlobalDefines.ERightFireMode
enum class ERightFireMode : uint8_t
{
	Follow = 0,
	Fixed = 1,
	ERightFireMode_MAX = 2
};

// Object: Enum GPGlobalDefines.ELeftJoystickMode
enum class ELeftJoystickMode : uint8_t
{
	Follow = 0,
	Fixed = 1,
	ELeftJoystickMode_MAX = 2
};

// Object: Enum GPGlobalDefines.EKeyLayoutType
enum class EKeyLayoutType : uint8_t
{
	Layout_0 = 0,
	Layout_1 = 1,
	Layout_2 = 2,
	Layout_MAX = 3
};

// Object: Enum GPGlobalDefines.ERoletteItemNums
enum class ERoletteItemNums : uint8_t
{
	FourNum = 0,
	EightNum = 1,
	ERoletteItemNums_MAX = 2
};

// Object: Enum GPGlobalDefines.EThrowMode
enum class EThrowMode : uint8_t
{
	Default = 0,
	IdleToThrow = 1,
	DirectThrow = 2,
	EThrowMode_MAX = 3
};

// Object: Enum GPGlobalDefines.EFireBreakReload
enum class EFireBreakReload : uint8_t
{
	Close = 0,
	BreakReload = 1,
	FireBreakReload = 2,
	MixReload = 3,
	EFireBreakReload_MAX = 4
};

// Object: Enum GPGlobalDefines.EGyroScopeOpenMode
enum class EGyroScopeOpenMode : uint8_t
{
	AlwaysOpen = 0,
	Close = 1,
	OpenWhenAim = 2,
	EGyroScopeOpenMode_MAX = 3
};

// Object: Enum GPGlobalDefines.ESilentWalkInputMode
enum class ESilentWalkInputMode : uint8_t
{
	Close = 0,
	ButtonToggle = 1,
	RouletteToggle = 2,
	Blend = 3,
	ESilentWalkInputMode_MAX = 4
};

// Object: Enum GPGlobalDefines.EAutoCrossMode
enum class EAutoCrossMode : uint8_t
{
	Close = 0,
	LowObstacle = 1,
	HighObstacle = 2,
	EAutoCrossMode_MAX = 3
};

// Object: Enum GPGlobalDefines.EScopeBreathMode
enum class EScopeBreathMode : uint8_t
{
	AllOpen = 0,
	AllClose = 1,
	Custom = 2,
	EScopeBreathMode_MAX = 3
};

// Object: Enum GPGlobalDefines.EQuickScopeOpenMode
enum class EQuickScopeOpenMode : uint8_t
{
	AllOpen = 0,
	AllClose = 1,
	Custom = 2,
	EQuickScopeOpenMode_MAX = 3
};

// Object: Enum GPGlobalDefines.EScopeOpenMode
enum class EScopeOpenMode : uint8_t
{
	Click = 0,
	Hold = 1,
	Mix = 2,
	EScopeOpenMode_MAX = 3
};

// Object: Enum GPGlobalDefines.EFireMode
enum class EFireMode : uint8_t
{
	Press = 0,
	Release = 1,
	EFireMode_MAX = 2
};

// Object: Enum GPGlobalDefines.ERoletteStyle
enum class ERoletteStyle : uint8_t
{
	Normal = 0,
	TransParent = 1,
	ERoletteStyle_MAX = 2
};

// Object: Enum GPGlobalDefines.ESystemSettingInputType
enum class ESystemSettingInputType : uint8_t
{
	None = 0,
	Switcher = 1,
	FloatValue = 2,
	IntValue = 3,
	DropDown = 4,
	ESystemSettingInputType_MAX = 5
};

// Object: Enum GPGlobalDefines.EHitEffectColor
enum class EHitEffectColor : uint8_t
{
	Default = 0,
	Color1 = 1,
	Color2 = 2,
	Color3 = 3,
	Color4 = 4,
	Color5 = 5,
	Color6 = 6,
	EHitEffectColor_MAX = 7
};

// Object: Enum GPGlobalDefines.EVehicleSensitivityMode
enum class EVehicleSensitivityMode : uint8_t
{
	NONE = 0,
	Vehicle_Driver_FPP = 1,
	Vehicle_Driver_TPP = 2,
	Vehicle_Weapon_Passenger_FPP = 3,
	Vehicle_Weapon_Passenger_TPP = 4,
	Helicopter_Driver_FPP = 5,
	Helicopter_Driver_TPP = 6,
	EVehicleSensitivityMode_MAX = 7
};

// Object: Enum GPGlobalDefines.EDesktopRHIType
enum class EDesktopRHIType : uint8_t
{
	Unknown = 0,
	D3D11 = 1,
	D3D12 = 2,
	EDesktopRHIType_MAX = 3
};

// Object: Enum GPGlobalDefines.EGamepadSensitivityPresetType
enum class EGamepadSensitivityPresetType : uint8_t
{
	Custom = 0,
	Slow = 1,
	Middle = 2,
	Fast = 3,
	EGamepadSensitivityPresetType_MAX = 4
};

// Object: Enum GPGlobalDefines.ESideAimingControlMode
enum class ESideAimingControlMode : uint8_t
{
	MixWithAim = 0,
	SeparateSame = 1,
	SeparateDiff = 2,
	ESideAimingControlMode_MAX = 3
};

// Object: Enum GPGlobalDefines.ESensitivityModeHD
enum class ESensitivityModeHD : uint8_t
{
	MDVOnly = 0,
	MDVXADS = 1,
	ZoomratedMDV = 2,
	ADSOnly = 3,
	ESensitivityModeHD_MAX = 4
};

// Object: Enum GPGlobalDefines.EGamepadReloadInteractMode
enum class EGamepadReloadInteractMode : uint8_t
{
	TapReload_HoldInteract = 0,
	TapInteract_HoldReload = 1,
	PreferInteract = 2,
	PreferReload = 3,
	EGamepadReloadInteractMode_MAX = 4
};

// Object: Enum GPGlobalDefines.ECrossplayType
enum class ECrossplayType : uint8_t
{
	Disabled = 0,
	Enabled_WithConsole = 1,
	Enabled_WithPC = 2,
	ECrossplayType_MAX = 3
};

// Object: Enum GPGlobalDefines.EAirCraftScopeMode
enum class EAirCraftScopeMode : uint8_t
{
	Follow = 0,
	Seperate = 1,
	EAirCraftScopeMode_MAX = 2
};

// Object: Enum GPGlobalDefines.ELootSharing
enum class ELootSharing : uint8_t
{
	Close = 0,
	SmallTeamShare = 1,
	WholeTeamShare = 2,
	ELootSharing_MAX = 3
};

// Object: Enum GPGlobalDefines.EInputDeadZoneType
enum class EInputDeadZoneType : uint8_t
{
	Invalid = 0,
	BaseOutermostSensitivity = 1,
	ADSOutermostSensitivity = 2,
	EInputDeadZoneType_MAX = 3
};

// Object: Enum GPGlobalDefines.EGamepadSensitivityCurveType
enum class EGamepadSensitivityCurveType : uint8_t
{
	SlowToFast = 0,
	Linear = 1,
	FastToSlow = 2,
	EGamepadSensitivityCurveType_MAX = 3
};

// Object: Enum GPGlobalDefines.EMouseSensitivityMode
enum class EMouseSensitivityMode : uint8_t
{
	ENormalWeapon = 0,
	EVehicleDriveWeapon = 1,
	EHelicopterDriveWeapon = 2,
	EVehicleWeapon = 3,
	EJet = 4,
	EMouseSensitivityMode_MAX = 5
};

// Object: Enum GPGlobalDefines.ESystemSettingApplyMode
enum class ESystemSettingApplyMode : uint8_t
{
	Immediate = 0,
	ManullyConfirm = 1,
	Restart = 2,
	OutOfGame = 3,
	ESystemSettingApplyMode_MAX = 4
};

// Object: Enum GPGlobalDefines.ESystemSettingInputTypeHD
enum class ESystemSettingInputTypeHD : uint8_t
{
	None = 0,
	Switcher = 1,
	FloatValue = 2,
	IntValue = 3,
	DropDown = 4,
	DynamicDropDown = 5,
	Volume = 6,
	Reserve1 = 7,
	Reserve2 = 8,
	Reserve3 = 9,
	Reserve4 = 10,
	Reserve5 = 11,
	Reserve6 = 12,
	Reserve7 = 13,
	Reserve8 = 14,
	Custom = 15,
	ESystemSettingInputTypeHD_MAX = 16
};

// Object: Enum GPGlobalDefines.ESystemSettingDescTemplateHD
enum class ESystemSettingDescTemplateHD : uint8_t
{
	None = 0,
	Simple = 1,
	DropDown = 2,
	KeySettingItem = 3,
	Reserve3 = 4,
	Reserve4 = 5,
	Reserve5 = 6,
	Reserve6 = 7,
	Reserve7 = 8,
	Reserve8 = 9,
	Custom = 10,
	ESystemSettingDescTemplateHD_MAX = 11
};

// Object: Enum GPGlobalDefines.EInt
enum class EInt : uint8_t
{
	Zero = 0,
	One = 1,
	Two = 2,
	Three = 3,
	Four = 4,
	Five = 5,
	Six = 6,
	Seven = 7,
	Eight = 8,
	Nine = 9,
	Ten = 10,
	Eleven = 11,
	Twelve = 12,
	EInt_MAX = 13
};

// Object: Enum GPGlobalDefines.EDamageAttenBlendMode
enum class EDamageAttenBlendMode : uint8_t
{
	BlendMode_Dest = 0,
	BlendMode_LinearLerp = 1,
	BlendMode_MAX = 2
};

// Object: Enum GPGlobalDefines.ECharacterType
enum class ECharacterType : uint8_t
{
	ENone = 0,
	ECharacter = 1,
	EAlarmTower = 2,
	ECharacterType_MAX = 3
};

// Object: Enum GPGlobalDefines.EDynamicUObjectRootType
enum class EDynamicUObjectRootType : uint8_t
{
	Gameplay = 0,
	Persistent = 1,
	ClientSeamless = 2,
	EDynamicUObjectRootType_MAX = 3
};

// Object: Enum GPGlobalDefines.ESeamlessFlag
enum class ESeamlessFlag : uint8_t
{
	SF_AutoDestroy = 0,
	SF_NeedDestroyAfterSeamless = 1,
	SF_KeepInAllStage = 2,
	SF_MAX = 3
};

// Object: Enum GPGlobalDefines.ESeamlessStage
enum class ESeamlessStage : uint8_t
{
	Stage_None = 0,
	Stage_ClientOnly = 1,
	Stage_DedicatedServer = 2,
	Stage_Standalone = 3,
	Stage_MAX = 4
};

// Object: Enum GPGlobalDefines.EMarkingLocationType
enum class EMarkingLocationType : uint8_t
{
	None = 0,
	Teammate1Command1 = 1,
	Teammate1Command2 = 2,
	Teammate2Command1 = 3,
	Teammate2Command2 = 4,
	NormalLocation = 5,
	BeCareful = 6,
	Enemy = 7,
	Attack = 8,
	Defend = 9,
	BossCommand_Assemble = 10,
	Enemy_RobotAI = 11,
	Enemy_Player = 12,
	Area_Safe = 13,
	Area_Dangerous = 14,
	Assemble = 15,
	SearchArea = 16,
	LeaveArea = 17,
	AreaVisited = 18,
	COUNT = 19,
	EMarkingLocationType_MAX = 20
};

// Object: Enum GPGlobalDefines.EHeroMeshType
enum class EHeroMeshType : uint8_t
{
	None = 0,
	Fpp = 1,
	Tpp = 2,
	UI = 3,
	EHeroMeshType_MAX = 4
};

// Object: Enum GPGlobalDefines.EDFMGamePlaySubMode
enum class EDFMGamePlaySubMode : uint8_t
{
	None = 0,
	GamePlaySubMode_TacticalConquest = 1,
	GamePlaySubMode_CaptureFlag = 2,
	GamePlaySubMode_Arena = 3,
	GamePlaySubMode_Commander = 4,
	GamePlaySubMode_TacticalConquest_Evolution = 5,
	GamePlaySubMode_AirGround = 6,
	GamePlaySubMode_HardPoint = 7,
	GamePlaySubMode_Trials = 8,
	GamePlaySubMode_RedPacket = 9,
	GamePlaySubMode_IroncladLion = 10,
	GamePlaySubMode_Overload = 11,
	EDFMGamePlaySubMode_MAX = 12
};

// Object: Enum GPGlobalDefines.ESoundTypeIcon
enum class ESoundTypeIcon : uint8_t
{
	ESTI_None = 0,
	ESTI_Ability = 1,
	ESTI_Medicine = 2,
	ESTI_Swim = 3,
	ESTI_MAX = 4
};

// Object: Enum GPGlobalDefines.ENumberIncreaseType
enum class ENumberIncreaseType : uint8_t
{
	Linear = 0,
	Sqrt = 1,
	CustomedCurve = 2,
	RandomThenSteadyFromTail = 3,
	ENumberIncreaseType_MAX = 4
};

// Object: Enum GPGlobalDefines.EMarkerEdgeTrackType
enum class EMarkerEdgeTrackType : uint8_t
{
	None = 0,
	TrackWhenOutEdge = 1,
	TrackWhenOutScreen = 2,
	EMarkerEdgeTrackType_MAX = 3
};

// Object: Enum GPGlobalDefines.EMarkerEdgeType
enum class EMarkerEdgeType : uint8_t
{
	None = 0,
	MobileCustomCircle = 1,
	HDCustomScreenEdge = 2,
	CenterSmallCircle = 3,
	BigEllipse = 4,
	HDScreenEdge = 5,
	EMarkerEdgeType_MAX = 6
};

// Object: Enum GPGlobalDefines.ENZLogLevel
enum class ENZLogLevel : uint8_t
{
	LogLevel_Log = 0,
	LogLevel_Warning = 1,
	LogLevel_Error = 2,
	LogLevel_Fatal = 3,
	LogLevel_MAX = 4
};

// Object: Enum GPGlobalDefines.ETurnInfo
enum class ETurnInfo : uint8_t
{
	TurnInfo_None = 0,
	TurnInfo_Left = 1,
	TurnInfo_Right = 2,
	TurnInfo_MAX = 3
};

// Object: Enum GPGlobalDefines.EWeaponHand
enum class EWeaponHand : uint8_t
{
	HAND_Right = 0,
	HAND_Left = 1,
	HAND_Center = 2,
	HAND_Hidden = 3,
	HAND_MAX = 4
};

// Object: Enum GPGlobalDefines.EInputMode
enum class EInputMode : uint8_t
{
	EIM_None = 0,
	EIM_GameOnly = 1,
	EIM_GameAndUI = 2,
	EIM_UIOnly = 3,
	EIM_MAX = 4
};

// Object: Enum GPGlobalDefines.EClientSyncCustomData
enum class EClientSyncCustomData : uint8_t
{
	ENone = 0,
	EDoorData = 1,
	EClientSyncCustomData_MAX = 2
};

// Object: Enum GPGlobalDefines.EGPTriggerAuth
enum class EGPTriggerAuth : uint8_t
{
	Unkown = 0,
	ClientOnly = 1,
	Authority = 2,
	EGPTriggerAuth_MAX = 3
};

// Object: Enum GPGlobalDefines.EGPTriggerMode
enum class EGPTriggerMode : uint16_t
{
	AnyAny = 0,
	Player1 = 1,
	Player2 = 2,
	Player3 = 3,
	Player4 = 4,
	PlayerAny = 5,
	VehicleAny = 6,
	EnemyAny = 7,
	SpecialActor = 8,
	LevelEnvEvent = 9,
	Custom = 255,
	EGPTriggerMode_MAX = 256
};

// Object: Enum GPGlobalDefines.EVehicleAbilityType
enum class EVehicleAbilityType : uint8_t
{
	EVAT_DefaultTrue = 0,
	EVAT_DefaultFalse = 1,
	EVAT_USESkillCommon = 2,
	EVAT_BeDamageCommon = 3,
	ESVT_BeScan = 4,
	ESVT_ExtraFireNotLeanout = 5,
	EVAT_BattleFieldSkill = 6,
	ESVT_BePassiveMove = 7,
	ESVT_ForbidBePassiveMove = 8,
	ESVT_NumMax = 9,
	EVehicleAbilityType_MAX = 10
};

// Object: Enum GPGlobalDefines.EGPVehicleDamageType
enum class EGPVehicleDamageType : uint8_t
{
	Default = 0,
	LightDamage = 1,
	HeavyDamage = 2,
	EGPVehicleDamageType_MAX = 3
};

// Object: Enum GPGlobalDefines.EGPVehicleArmorType
enum class EGPVehicleArmorType : uint8_t
{
	Default = 0,
	Light = 1,
	LightMiddle = 2,
	Middle = 3,
	Heavy = 4,
	Raid = 5,
	RaidTankBoss = 6,
	LittleBird = 7,
	SOLHelicopter = 8,
	FSV = 9,
	GTQ35 = 10,
	AgainstBoat_SOL = 11,
	MotorBoat_SOL = 12,
	F35 = 13,
	SceneWeapon = 14,
	AAV7 = 15,
	Num = 16,
	EGPVehicleArmorType_MAX = 17
};

// Object: Enum GPGlobalDefines.EVehicleSeatType
enum class EVehicleSeatType : uint8_t
{
	None = 0,
	MachineGun = 1,
	Drive = 2,
	Ride = 3,
	EVehicleSeatType_MAX = 4
};

// Object: Enum GPGlobalDefines.ECustomVehicleType
enum class ECustomVehicleType : uint8_t
{
	None = 0,
	CustomAirVehicle = 1,
	CustomGroundVehicle = 2,
	ECustomVehicleType_MAX = 3
};

// Object: Enum GPGlobalDefines.EVehicleDeployType
enum class EVehicleDeployType : uint8_t
{
	None = 0,
	LightVehicle = 10,
	ArmoredVehicle = 20,
	LightArmor = 30,
	HeavyVehicle = 40,
	AirTransport = 50,
	AttackHelicopter = 60,
	Fighter = 70,
	EVehicleDeployType_MAX = 71
};

// Object: Enum GPGlobalDefines.EAnimVehicleType
enum class EAnimVehicleType : uint16_t
{
	BaseCar = 0,
	UNTruck = 1,
	TutuCar = 2,
	Jeep = 3,
	Valkyrie = 4,
	Boat = 5,
	MilitaryJeep = 6,
	Tank = 7,
	Helicopter = 8,
	Infantry = 9,
	SPAAG = 10,
	ATV = 11,
	ORV = 12,
	Humvee = 13,
	ArmedPickup = 14,
	OldCity_ArmoredCar = 15,
	OldCity_BossTank = 16,
	Wheel_Tank = 17,
	Bird_Helicopter = 18,
	Jet = 19,
	GTQ35 = 20,
	MotorBoat = 21,
	AAV = 22,
	NoVehicle = 255,
	EAnimVehicleType_MAX = 256
};

// Object: Enum GPGlobalDefines.EDFMVehicleClassType
enum class EDFMVehicleClassType : uint8_t
{
	VehicleType_None = 0,
	VehicleClassType_Ground = 1,
	VehicleClassType_Water = 2,
	VehicleClassType_Sky = 3,
	EDFMVehicleClassType_MAX = 4
};

// Object: Enum GPGlobalDefines.ECollectionItemType
enum class ECollectionItemType : uint8_t
{
	None = 0,
	DailyNecessities = 1,
	ToolAndMaterial = 2,
	Electronic = 3,
	Other = 4,
	Key = 5,
	MedKit = 6,
	Intelligence = 7,
	Valuable = 8,
	Narrative = 9,
	TreasureMap = 10,
	Archive = 11,
	RedPackage = 20,
	ECollectionItemType_MAX = 21
};

// Object: Enum GPGlobalDefines.EVehicleAimAssistType
enum class EVehicleAimAssistType : uint8_t
{
	None = 0,
	GroundVehicle = 1,
	Helicopter = 2,
	Jet = 3,
	Gunner = 4,
	EVehicleAimAssistType_MAX = 5
};

// Object: Enum GPGlobalDefines.EWeaponExtraModelType
enum class EWeaponExtraModelType : uint8_t
{
	None = 0,
	ForSight = 1,
	RearSight = 2,
	Handle = 3,
	Cheek = 4,
	Rail = 5,
	MagWell = 6,
	Rgrip = 7,
	Muzzle = 8,
	Shield = 20,
	Adapter = 22,
	Gas = 23,
	Pad = 24,
	Patch = 26,
	RailCover = 32,
	Fgrip = 33,
	Skin = 99,
	EWeaponExtraModelType_MAX = 100
};

// Object: Enum GPGlobalDefines.EGadgetItemSubType
enum class EGadgetItemSubType : uint8_t
{
	None = 0,
	AmmoBox = 1,
	EGadgetItemSubType_MAX = 2
};

// Object: Enum GPGlobalDefines.EEquipmentItemType
enum class EEquipmentItemType : uint8_t
{
	HELMET = 1,
	BreastPlate = 5,
	ChestHanging = 7,
	Bag = 8,
	SafeBox = 9,
	KeyChain = 12,
	EEquipmentItemType_MAX = 13
};

// Object: Enum GPGlobalDefines.EItemMainType
enum class EItemMainType : uint8_t
{
	ItemMainType_None = 0,
	ItemMainType_Weapon = 10,
	ItemMainType_Equip = 11,
	ItemMainType_WeaponExtraModel = 12,
	ItemMainType_Adapter = 13,
	ItemMainType_Medicine = 14,
	ItemMainType_Collection = 15,
	ItemMainType_Sundry = 16,
	ItemMainType_Box = 17,
	ItemMainType_WeaponStruct = 18,
	ItemMainType_Food = 19,
	ItemMainType_WeaponThrowable = 21,
	ItemMainType_Perk = 22,
	ItemMainType_GadgetItem = 24,
	ItemMainType_ItemSkill = 25,
	ItemMainType_WeaponSkin = 28,
	ItemMainType_Fashion = 30,
	ItemMainType_PoorWeapon = 31,
	ItemMainType_Ammo = 37,
	ItemMainType_Commercialize = 38,
	ItemMainType_Vehicle = 39,
	ItemMainType_VehicleAdapter = 40,
	ItemMainType_VehicleSkin = 41,
	ItemMainType_Hero = 88,
	ItemMainType_MAX = 89
};

// Object: Enum GPGlobalDefines.ESightTelescopeType
enum class ESightTelescopeType : uint8_t
{
	NoGlass = 0,
	RedSpot = 1,
	MechinicalAim = 2,
	VSS = 3,
	Scale_1 = 4,
	Scale_2 = 5,
	Scale_3 = 6,
	Scale_4 = 7,
	Scale_6 = 8,
	Scale_8 = 9,
	Max = 10
};

// Object: Enum GPGlobalDefines.EScreenAdaptorMode
enum class EScreenAdaptorMode : uint8_t
{
	Corner = 0,
	RoundCorner = 1,
	EScreenAdaptorMode_MAX = 2
};

// Object: Enum GPGlobalDefines.EPlayerGuideStage
enum class EPlayerGuideStage : uint8_t
{
	FirstLogin = 0,
	TrainingMatch = 1,
	WormUpMatch = 2,
	GuideStageEnd = 3,
	EPlayerGuideStage_MAX = 4
};

// Object: Enum GPGlobalDefines.EBeginerLevel
enum class EBeginerLevel : uint8_t
{
	None = 0,
	Beginer = 1,
	Regular = 2,
	Master = 3,
	EBeginerLevel_MAX = 4
};

// Object: Enum GPGlobalDefines.EHandleMode
enum class EHandleMode : uint8_t
{
	Mode_1 = 0,
	Mode_2 = 1,
	Mode_3 = 2,
	Mode_MAX = 3
};

// Object: Enum GPGlobalDefines.ERightHandFireMode
enum class ERightHandFireMode : uint8_t
{
	Fixed = 0,
	Follow = 1,
	Closed = 2,
	ERightHandFireMode_MAX = 3
};

// Object: Enum GPGlobalDefines.EHudSubMode
enum class EHudSubMode : uint8_t
{
	Mode_1 = 0,
	Mode_2 = 1,
	Mode_3 = 2,
	Mode_4 = 3,
	Mode_MAX = 4
};

// Object: Enum GPGlobalDefines.EHudMode
enum class EHudMode : uint8_t
{
	Mode_1 = 0,
	Mode_2 = 1,
	Mode_3 = 2,
	Mode_MAX = 3
};

// Object: Enum GPGlobalDefines.EMedicineSort
enum class EMedicineSort : uint8_t
{
	Mode_1 = 0,
	Mode_2 = 1,
	Mode_3 = 2,
	Mode_MAX = 3
};

// Object: Enum GPGlobalDefines.EOperationMode
enum class EOperationMode : uint8_t
{
	Mode_1 = 0,
	Mode_2 = 1,
	Mode_3 = 2,
	Mode_4 = 3,
	Mode_MAX = 4
};

// Object: Enum GPGlobalDefines.EGyroMode
enum class EGyroMode : uint8_t
{
	Closed = 0,
	Always = 1,
	WhenAim = 2,
	EGyroMode_MAX = 3
};

// Object: Enum GPGlobalDefines.EAimMethod
enum class EAimMethod : uint8_t
{
	Click = 0,
	Pressing = 1,
	EAimMethod_MAX = 2
};

// Object: Enum GPGlobalDefines.ESideShootMethod
enum class ESideShootMethod : uint8_t
{
	Click = 0,
	Pressing = 1,
	ESideShootMethod_MAX = 2
};

// Object: Enum GPGlobalDefines.ESideShootMode
enum class ESideShootMode : uint8_t
{
	Closed = 0,
	Always = 1,
	WhenAim = 2,
	ESideShootMode_MAX = 3
};

// Object: Enum GPGlobalDefines.ELeftHandFireMode
enum class ELeftHandFireMode : uint8_t
{
	Closed = 0,
	Always = 1,
	WhenAim = 2,
	ELeftHandFireMode_MAX = 3
};

// Object: Enum GPGlobalDefines.ESwitchOnOff
enum class ESwitchOnOff : uint8_t
{
	Unknown = 0,
	Off = 1,
	On = 2,
	ESwitchOnOff_MAX = 3
};

// Object: Enum GPGlobalDefines.ERotationMethodType
enum class ERotationMethodType : uint8_t
{
	ERotationMethodType_NZM = 0,
	ERotationMethodType_DFMCommon = 1,
	ERotationMethodType_DFMDistanceAcceleration = 2,
	ERotationMethodType_DFMSpeedAcceleration = 3,
	ERotationMethodType_DFMBlend = 4,
	ERotationMethodType_MAX = 5
};

// Object: Enum GPGlobalDefines.ERotationSensitivityCatagoryType
enum class ERotationSensitivityCatagoryType : uint8_t
{
	ERotationMethodType_Low = 0,
	ERotationMethodType_Middle = 1,
	ERotationMethodType_High = 2,
	ERotationMethodType_MAX = 3
};

// Object: Enum GPGlobalDefines.ENetworkReplayStreamerType
enum class ENetworkReplayStreamerType : uint8_t
{
	StreamerType_Memery = 0,
	StreamerType_File = 1,
	StreamerType_HTTP = 2,
	StreamerType_File_ARS = 3,
	StreamerType_File_JSON = 4,
	StreamerType_MAX = 5
};

// Object: Enum GPGlobalDefines.EVehicleAssistAimConfigGroup
enum class EVehicleAssistAimConfigGroup : uint8_t
{
	EVAACG_Default = 0,
	EVAACG_Helicopter = 1,
	EVAACG_Jet = 2,
	EVAACG_MAX = 3
};

// Object: ScriptStruct GPGlobalDefines.MoveInput
// Size: 0x4 (Inherited: 0x0)
struct FMoveInput
{
	float Value; // 0x0(0x4)
};

// Object: ScriptStruct GPGlobalDefines.ItemID
// Size: 0x18 (Inherited: 0x0)
struct FItemID
{
	uint32_t Category; // 0x0(0x4)
	uint32_t Sequence; // 0x4(0x4)
	uint8_t Pad_0x8[0x10]; // 0x8(0x10)
};

// Object: ScriptStruct GPGlobalDefines.SystemSettingDescHD
// Size: 0x70 (Inherited: 0x0)
struct FSystemSettingDescHD
{
	ESystemSettingDescTemplateHD Template; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FText Title; // 0x8(0x18)
	struct FText DescText; // 0x20(0x18)
	struct FSoftObjectPath DescImage; // 0x38(0x18)
	struct FString UIName2ID; // 0x50(0x10)
	struct TArray<struct FText> DescSubTextArr; // 0x60(0x10)
};

// Object: ScriptStruct GPGlobalDefines.VehicleInfo
// Size: 0x40 (Inherited: 0x0)
struct FVehicleInfo
{
	EAnimVehicleType VehicleType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t VehicleId; // 0x4(0x4)
	int32_t CampId; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TArray<int32_t> TeamIDArr; // 0x10(0x10)
	struct TArray<int32_t> MarkedCampIDArray; // 0x20(0x10)
	uint8_t bDriverIsCommander : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	int32_t DisplayTeamID; // 0x34(0x4)
	int32_t DisplayPlayerId; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct GPGlobalDefines.MarkingHeroCommandInfo
// Size: 0xB0 (Inherited: 0x0)
struct FMarkingHeroCommandInfo
{
	struct FSoftObjectPath RouletteIconPath_HD; // 0x0(0x18)
	struct FSoftObjectPath RouletteIconPath_Mobile; // 0x18(0x18)
	struct FSoftObjectPath MarkerIconPath; // 0x30(0x18)
	struct FText MarkerNameText; // 0x48(0x18)
	struct FText RouletteInfoText; // 0x60(0x18)
	struct FString VOAudioString; // 0x78(0x10)
	struct FName PresetChatId; // 0x88(0x8)
	struct FString VOAudioString_Respond; // 0x90(0x10)
	struct FName PresetChatId_Respond; // 0xA0(0x8)
	struct FName CommandBubbleName; // 0xA8(0x8)
};

// Object: ScriptStruct GPGlobalDefines.VehicleDamageFalloffConfig
// Size: 0x18 (Inherited: 0x0)
struct FVehicleDamageFalloffConfig
{
	float ValidDistance; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FVehicleDamageFalloffItem> FalloffItems; // 0x8(0x10)
};

// Object: ScriptStruct GPGlobalDefines.VehicleDamageFalloffSettings
// Size: 0x30 (Inherited: 0x0)
struct FVehicleDamageFalloffSettings
{
	uint8_t bEnabled : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FVehicleDamageFalloffConfig DefaultConfig; // 0x8(0x18)
	struct TArray<struct FVehicleDamageFalloffOverride> Overrides; // 0x20(0x10)
};

// Object: ScriptStruct GPGlobalDefines.VehicleDamageFalloffOverride
// Size: 0x20 (Inherited: 0x0)
struct FVehicleDamageFalloffOverride
{
	int32_t VehicleId; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FVehicleDamageFalloffConfig FalloffConfig; // 0x8(0x18)
};

// Object: ScriptStruct GPGlobalDefines.VehicleDamageFalloffItem
// Size: 0xC (Inherited: 0x0)
struct FVehicleDamageFalloffItem
{
	EDamageAttenBlendMode BlendMode; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float Distance; // 0x4(0x4)
	float DamageRate; // 0x8(0x4)
};

// Object: ScriptStruct GPGlobalDefines.SHeroPreferenceSettingRow
// Size: 0x50 (Inherited: 0x10)
struct FSHeroPreferenceSettingRow : FDescRowBase
{
	struct FString SettingName; // 0x10(0x10)
	struct FName HeroId; // 0x20(0x8)
	struct FText DisplayName; // 0x28(0x18)
	ESystemSettingInputType InputType; // 0x40(0x1)
	uint8_t IsActive : 1; // 0x41(0x1), Mask(0x1)
	uint8_t BitPad_0x41_1 : 7; // 0x41(0x1)
	uint8_t Step : 1; // 0x42(0x1), Mask(0x1)
	uint8_t BitPad_0x42_1 : 7; // 0x42(0x1)
	uint8_t Pad_0x43[0x1]; // 0x43(0x1)
	float Min; // 0x44(0x4)
	float Max; // 0x48(0x4)
	int32_t pos; // 0x4C(0x4)
};

// Object: ScriptStruct GPGlobalDefines.UserDefineRotationSetting
// Size: 0xC (Inherited: 0x0)
struct FUserDefineRotationSetting
{
	float FactorMin; // 0x0(0x4)
	float FactorMax; // 0x4(0x4)
	float FactorDivideNumber; // 0x8(0x4)
};

// Object: ScriptStruct GPGlobalDefines.FixedSpeedSensitivitySetting
// Size: 0xC (Inherited: 0x0)
struct FFixedSpeedSensitivitySetting
{
	struct FUserDefineRotationSetting SensitivityDivideSetting; // 0x0(0xC)
};

// Object: ScriptStruct GPGlobalDefines.RotationGyroScopeSetting
// Size: 0xC (Inherited: 0x0)
struct FRotationGyroScopeSetting
{
	struct FUserDefineRotationSetting SensitivityDivideSetting; // 0x0(0xC)
};

// Object: ScriptStruct GPGlobalDefines.RotationSensitivityCommonSetting
// Size: 0x80 (Inherited: 0x0)
struct FRotationSensitivityCommonSetting
{
	struct TArray<struct FText> DescArray; // 0x0(0x10)
	struct TArray<float> ZoomRateArray; // 0x10(0x10)
	float SensitivityFactor; // 0x20(0x4)
	float CustomSensitivityFactor; // 0x24(0x4)
	float HorizontalSensitivityFactor; // 0x28(0x4)
	float CustomHorizontalSensitivityFactor; // 0x2C(0x4)
	float VerticalSensitivityFactor; // 0x30(0x4)
	float CustomVerticalSensitivityFactor; // 0x34(0x4)
	struct TArray<float> ZoomratedMDVFactor; // 0x38(0x10)
	struct TArray<float> CustomZoomratedMDVFactor; // 0x48(0x10)
	float DefaultSensitity; // 0x58(0x4)
	float DefaultSensitivity_Custom; // 0x5C(0x4)
	struct TArray<float> RotationSensitityArray; // 0x60(0x10)
	struct TArray<float> RotationSensitivityArray_Custom; // 0x70(0x10)
};

// Object: ScriptStruct GPGlobalDefines.SpeedAccSensitivitySetting
// Size: 0x30 (Inherited: 0x0)
struct FSpeedAccSensitivitySetting
{
	struct FUserDefineRotationSetting SpeedAccSensitivityDivideSetting; // 0x0(0xC)
	struct FUserDefineRotationSetting SpeedAccParamDivideSetting; // 0xC(0xC)
	float RotationSpeedAccelerationSensitivityDefault_Low; // 0x18(0x4)
	float RotationSpeedAccelerationSensitivityDefault_Middle; // 0x1C(0x4)
	float RotationSpeedAccelerationSensitivityDefault_High; // 0x20(0x4)
	float RotationSpeedAccelerationSensitivityDefault_Custom; // 0x24(0x4)
	struct UCurveFloat* RotationSpeedAccelerationPiecewiseFunctionCurve; // 0x28(0x8)
};

// Object: ScriptStruct GPGlobalDefines.SensitivityOuterSetting
// Size: 0x150 (Inherited: 0x0)
struct FSensitivityOuterSetting
{
	struct FRotationSensitivityCommonSetting SensitivitySetting; // 0x0(0x80)
	struct FFixedSpeedSensitivitySetting FixedSpeedSensitivitySetting; // 0x80(0xC)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
	struct FSpeedAccSensitivitySetting SpeedAccSensitivitySetting; // 0x90(0x30)
	struct FRotationSensitivityCommonSetting GyroSensitivitySetting; // 0xC0(0x80)
	struct FRotationGyroScopeSetting GyroScopeSetting; // 0x140(0xC)
	uint8_t Pad_0x14C[0x4]; // 0x14C(0x4)
};

// Object: ScriptStruct GPGlobalDefines.VehicleSensitivityOuterSetting
// Size: 0x90 (Inherited: 0x0)
struct FVehicleSensitivityOuterSetting
{
	struct FRotationSensitivityCommonSetting SensitivitySetting; // 0x0(0x80)
	struct FUserDefineRotationSetting SensitivityDivideSetting; // 0x80(0xC)
	float BaseADSSensitivity; // 0x8C(0x4)
};

// Object: ScriptStruct GPGlobalDefines.VehicleSensitivitySetting
// Size: 0x750 (Inherited: 0x0)
struct FVehicleSensitivitySetting
{
	struct FVehicleSensitivityOuterSetting VehicleDriverFPPSensitivitySetting; // 0x0(0x90)
	struct FVehicleSensitivityOuterSetting VehicleDriverTPPSensitivitySetting; // 0x90(0x90)
	struct FVehicleSensitivityOuterSetting VehiclePassengerWeaponFPPSensitivitySetting; // 0x120(0x90)
	struct FVehicleSensitivityOuterSetting VehiclePassengerWeaponTPPSensitivitySetting; // 0x1B0(0x90)
	struct FVehicleSensitivityOuterSetting HelicopterDriverFPPSensitivitySetting; // 0x240(0x90)
	struct FVehicleSensitivityOuterSetting HelicopterDriverTPPSensitivitySetting; // 0x2D0(0x90)
	struct FVehicleSensitivityOuterSetting GyroVehicleDriverFPPSensitivitySetting; // 0x360(0x90)
	struct FVehicleSensitivityOuterSetting GyroVehicleDriverTPPSensitivitySetting; // 0x3F0(0x90)
	struct FVehicleSensitivityOuterSetting GyroVehiclePassengerWeaponFPPSensitivitySetting; // 0x480(0x90)
	struct FVehicleSensitivityOuterSetting GyroVehiclePassengerWeaponTPPSensitivitySetting; // 0x510(0x90)
	struct FVehicleSensitivityOuterSetting GyroHelicopterDriverFPPSensitivitySetting; // 0x5A0(0x90)
	struct FVehicleSensitivityOuterSetting GyroHelicopterDriverTPPSensitivitySetting; // 0x630(0x90)
	struct FVehicleSensitivityOuterSetting DefaultVehicleSensitivitySetting; // 0x6C0(0x90)
};

// Object: ScriptStruct GPGlobalDefines.PriorityRow
// Size: 0x48 (Inherited: 0x10)
struct FPriorityRow : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText PriorityText; // 0x18(0x18)
	uint8_t bNetbar : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	int32_t NetbarLevel; // 0x34(0x4)
	uint8_t bCollege : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x3]; // 0x39(0x3)
	int32_t NetbarValue; // 0x3C(0x4)
	int32_t CollegeValue; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
};

// Object: ScriptStruct GPGlobalDefines.NetbarPriorityRow
// Size: 0x30 (Inherited: 0x10)
struct FNetbarPriorityRow : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	int32_t IfVisible; // 0x14(0x4)
	struct FText PriorityText; // 0x18(0x18)
};

// Object: ScriptStruct GPGlobalDefines.AxisSensitivitySettingHD
// Size: 0x18 (Inherited: 0x0)
struct FAxisSensitivitySettingHD
{
	float TPPYaw; // 0x0(0x4)
	float TPPRoll; // 0x4(0x4)
	float TPPPitch; // 0x8(0x4)
	float FPPYaw; // 0xC(0x4)
	float FPPRoll; // 0x10(0x4)
	float FPPPitch; // 0x14(0x4)
};

// Object: ScriptStruct GPGlobalDefines.VehicleSensitivityOuterSettingHD
// Size: 0x58 (Inherited: 0x0)
struct FVehicleSensitivityOuterSettingHD
{
	float HorizontalSensitivityFPP; // 0x0(0x4)
	float VerticalSensitivityFPP; // 0x4(0x4)
	float HorizontalSensitivityTPP; // 0x8(0x4)
	float VerticalSensitivityTPP; // 0xC(0x4)
	float SensitivityFPP; // 0x10(0x4)
	float SensitivityTPP; // 0x14(0x4)
	struct TArray<struct FZoomratedDataHD> ZoomratedMDV; // 0x18(0x10)
	struct TArray<struct FWeaponZoomDataHD> ZoomDataHD; // 0x28(0x10)
	float BaseADSSensitivity; // 0x38(0x4)
	float HorizontalBaseADSSensitivity; // 0x3C(0x4)
	float VerticalBaseADSSensitivity; // 0x40(0x4)
	int32_t MDVSwitchingMode; // 0x44(0x4)
	ESensitivityModeHD SensitivityMode; // 0x48(0x1)
	uint8_t Pad_0x49[0x3]; // 0x49(0x3)
	float MDV; // 0x4C(0x4)
	uint8_t bEnableGamepadADSCustom : 1; // 0x50(0x1), Mask(0x1)
	uint8_t BitPad_0x50_1 : 7; // 0x50(0x1)
	uint8_t Pad_0x51[0x7]; // 0x51(0x7)
};

// Object: ScriptStruct GPGlobalDefines.WeaponZoomDataHD
// Size: 0x28 (Inherited: 0x0)
struct FWeaponZoomDataHD
{
	float ADSSensitivity; // 0x0(0x4)
	float ADSSensitivity2; // 0x4(0x4)
	float DefaultADSSensitivity; // 0x8(0x4)
	float DefaultADSSensitivity2; // 0xC(0x4)
	struct FString Desc; // 0x10(0x10)
	float ZoomRate; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct GPGlobalDefines.ZoomratedDataHD
// Size: 0x8 (Inherited: 0x0)
struct FZoomratedDataHD
{
	float Value; // 0x0(0x4)
	float ZoomRate; // 0x4(0x4)
};

// Object: ScriptStruct GPGlobalDefines.AdapterInfoHD
// Size: 0x18 (Inherited: 0x0)
struct FAdapterInfoHD
{
	struct FString AdapterName; // 0x0(0x10)
	int32_t AdapterID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct GPGlobalDefines.GamepadSensitivityPresetSettingRowHD
// Size: 0x70 (Inherited: 0x10)
struct FGamepadSensitivityPresetSettingRowHD : FDescRowBase
{
	struct TMap<EGamepadSensitivityPresetType, float> PresetValues; // 0x10(0x50)
	struct TArray<float> PresetValuesV1; // 0x60(0x10)
};

// Object: ScriptStruct GPGlobalDefines.GamepadExtraSensitivityDataHD
// Size: 0x10 (Inherited: 0x0)
struct FGamepadExtraSensitivityDataHD
{
	float HorizontalExtraSensitivity; // 0x0(0x4)
	float VerticalExtraSensitivity; // 0x4(0x4)
	float DelayTime; // 0x8(0x4)
	float StarupTime; // 0xC(0x4)
};

// Object: ScriptStruct GPGlobalDefines.GamepadThumbRestrictDataHD
// Size: 0xC (Inherited: 0x0)
struct FGamepadThumbRestrictDataHD
{
	float DeadZone; // 0x0(0x4)
	float MaximumThreshold; // 0x4(0x4)
	float AxisZoneAssist; // 0x8(0x4)
};

// Object: ScriptStruct GPGlobalDefines.WeaponZoomDataSettingRowHD
// Size: 0x50 (Inherited: 0x10)
struct FWeaponZoomDataSettingRowHD : FDescRowBase
{
	float DefaultADSSensitivity; // 0x10(0x4)
	float DefaultADSSensitivity2; // 0x14(0x4)
	float MaxADSSensitivity; // 0x18(0x4)
	float MinADSSensitivity; // 0x1C(0x4)
	float DefaultMDV; // 0x20(0x4)
	float MaxMDV; // 0x24(0x4)
	float MinMDV; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FText Desc; // 0x30(0x18)
	float ZoomRate; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct GPGlobalDefines.VideoSettingVRamRowHD
// Size: 0x40 (Inherited: 0x10)
struct FVideoSettingVRamRowHD : FDescRowBase
{
	ESystemSettingInputTypeHD InputType; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float VRamUsage; // 0x14(0x4)
	struct TArray<float> VRamUsageLevels; // 0x18(0x10)
	float MaxVRamUsage; // 0x28(0x4)
	float MinVRamUsage; // 0x2C(0x4)
	uint8_t bAffectedByResolution : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	float ResolutionFactor; // 0x34(0x4)
	uint8_t bAffectedByRenderScale : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x3]; // 0x39(0x3)
	float RenderScaleFactor; // 0x3C(0x4)
};

// Object: ScriptStruct GPGlobalDefines.AdvancedVideoSettingRowHD
// Size: 0x50 (Inherited: 0x10)
struct FAdvancedVideoSettingRowHD : FDescRowBase
{
	struct FString ParamGroup; // 0x10(0x10)
	struct FString ConsoleName; // 0x20(0x10)
	struct TArray<struct FString> Levels; // 0x30(0x10)
	struct FString Help; // 0x40(0x10)
};

// Object: ScriptStruct GPGlobalDefines.SystemSettingRowHD
// Size: 0x160 (Inherited: 0x10)
struct FSystemSettingRowHD : FDescRowBase
{
	struct FString ExtraStringData; // 0x10(0x10)
	struct FText DisplayName; // 0x20(0x18)
	ESystemSettingInputTypeHD InputType; // 0x38(0x1)
	ESystemSettingApplyMode ApplyMode; // 0x39(0x1)
	uint8_t Pad_0x3A[0x2]; // 0x3A(0x2)
	int32_t DefaultValue; // 0x3C(0x4)
	float DefaultValueFloat; // 0x40(0x4)
	int32_t DecimalPrecision; // 0x44(0x4)
	float Min; // 0x48(0x4)
	float Max; // 0x4C(0x4)
	float StepSize; // 0x50(0x4)
	float AccelerationAmount; // 0x54(0x4)
	float MaxStepSize; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct TArray<struct FText> Options; // 0x60(0x10)
	struct TMap<int32_t, int32_t> SettingPfLevelMap; // 0x70(0x50)
	struct FSystemSettingDescHD Desc; // 0xC0(0x70)
	struct FText Prefix; // 0x130(0x18)
	struct FText Postfix; // 0x148(0x18)
};

// Object: ScriptStruct GPGlobalDefines.ResolutionVramRowHD
// Size: 0x20 (Inherited: 0x10)
struct FResolutionVramRowHD : FDescRowBase
{
	struct FIntPoint Resolution; // 0x10(0x8)
	float MinimumVRam; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct GPGlobalDefines.VideoSettingClampRowHD
// Size: 0x20 (Inherited: 0x10)
struct FVideoSettingClampRowHD : FDescRowBase
{
	EGraphicsQualityLevelHD BenchmarkLevel; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	struct FName SettingID; // 0x14(0x8)
	int32_t ClampMin; // 0x1C(0x4)
};

// Object: ScriptStruct GPGlobalDefines.DamageAttenConfigItem
// Size: 0x10 (Inherited: 0x0)
struct FDamageAttenConfigItem
{
	EDamageAttenBlendMode BlendMode; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float Distance; // 0x4(0x4)
	uint8_t bOverrideBaseDamage : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float DamageRate; // 0xC(0x4)
};

// Object: ScriptStruct GPGlobalDefines.CacheObjectInfo
// Size: 0x18 (Inherited: 0x0)
struct FCacheObjectInfo
{
	struct TWeakObjectPtr<struct UObject> CachedObjPtr; // 0x0(0x8)
	uint64_t LastHideTimeStamp; // 0x8(0x8)
	float WaitForDestroyTime; // 0x10(0x4)
	int32_t Priority; // 0x14(0x4)
};

// Object: ScriptStruct GPGlobalDefines.SkillRepTickData
// Size: 0x10 (Inherited: 0x0)
struct FSkillRepTickData
{
	uint8_t bTickRep3p : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bTickRep1p : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t bTickRepDS : 1; // 0x2(0x1), Mask(0x1)
	uint8_t BitPad_0x2_1 : 7; // 0x2(0x1)
	uint8_t Pad_0x3[0x1]; // 0x3(0x1)
	float fTickRepRate3p; // 0x4(0x4)
	float fTickRepRate1p; // 0x8(0x4)
	float fTickRepRateDS; // 0xC(0x4)
};

// Object: ScriptStruct GPGlobalDefines.AILabCharacterDebugInfoBunch
// Size: 0x10 (Inherited: 0x0)
struct FAILabCharacterDebugInfoBunch
{
	struct TArray<struct FAILabCharacterDebugInfo> DebugInfoBunch; // 0x0(0x10)
};

// Object: ScriptStruct GPGlobalDefines.AILabCharacterDebugInfo
// Size: 0x50 (Inherited: 0x0)
struct FAILabCharacterDebugInfo
{
	uint64_t Uin; // 0x0(0x8)
	struct FString Name; // 0x8(0x10)
	struct FString DisplayName; // 0x18(0x10)
	struct FVector Location; // 0x28(0xC)
	int32_t HP; // 0x34(0x4)
	uint64_t WeaponID; // 0x38(0x8)
	uint64_t ArmorId; // 0x40(0x8)
	uint8_t IsPlayer : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t isAILabAI : 1; // 0x49(0x1), Mask(0x1)
	uint8_t BitPad_0x49_1 : 7; // 0x49(0x1)
	uint8_t isBTLabAI : 1; // 0x4A(0x1), Mask(0x1)
	uint8_t BitPad_0x4A_1 : 7; // 0x4A(0x1)
	uint8_t isBossAI : 1; // 0x4B(0x1), Mask(0x1)
	uint8_t BitPad_0x4B_1 : 7; // 0x4B(0x1)
	uint8_t isOtherNPCAI : 1; // 0x4C(0x1), Mask(0x1)
	uint8_t BitPad_0x4C_1 : 7; // 0x4C(0x1)
	uint8_t Pad_0x4D[0x3]; // 0x4D(0x3)
};

// Object: ScriptStruct GPGlobalDefines.QuestFullID
// Size: 0x10 (Inherited: 0x0)
struct FQuestFullID
{
	int64_t QuestID; // 0x0(0x8)
	int64_t ObjectionID; // 0x8(0x8)
};

// Object: ScriptStruct GPGlobalDefines.GPSnapshotInfo
// Size: 0x60 (Inherited: 0x0)
struct FGPSnapshotInfo
{
	struct AActor* TargetActor; // 0x0(0x8)
	struct FVector ActorPosition; // 0x8(0xC)
	struct FVector ActorVelocity; // 0x14(0xC)
	struct FRotator ActorRotation; // 0x20(0xC)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct TArray<struct FVector> ReplicateBonePositionArray; // 0x30(0x10)
	float SeverTime; // 0x40(0x4)
	int32_t ServerFrame; // 0x44(0x4)
	float ClientTime; // 0x48(0x4)
	uint8_t bFromServer : 1; // 0x4C(0x1), Mask(0x1)
	uint8_t BitPad_0x4C_1 : 7; // 0x4C(0x1)
	uint8_t Pad_0x4D[0x3]; // 0x4D(0x3)
	struct FVector LagComActorPosition; // 0x50(0xC)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
};

// Object: ScriptStruct GPGlobalDefines.GPPlayerBasicInfo
// Size: 0x28 (Inherited: 0x0)
struct FGPPlayerBasicInfo
{
	struct FString ID; // 0x0(0x10)
	int32_t Camp; // 0x10(0x4)
	int32_t Team; // 0x14(0x4)
	struct FString Name; // 0x18(0x10)
};

// Object: ScriptStruct GPGlobalDefines.HUDAdaptationRow
// Size: 0x30 (Inherited: 0x10)
struct FHUDAdaptationRow : FDescRowBase
{
	struct FString PlatformName; // 0x10(0x10)
	struct FMargin SafeZoneMargin; // 0x20(0x10)
};

// Object: ScriptStruct GPGlobalDefines.HUDAdaptationSetting
// Size: 0x10 (Inherited: 0x0)
struct FHUDAdaptationSetting
{
	struct FMargin CustomSafeZoneMargin; // 0x0(0x10)
};

// Object: ScriptStruct GPGlobalDefines.CustomGridPanelData
// Size: 0xC (Inherited: 0x0)
struct FCustomGridPanelData
{
	uint8_t bVertical : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FVector2D Aligment; // 0x4(0x8)
};

// Object: ScriptStruct GPGlobalDefines.CustomPanelData
// Size: 0x10 (Inherited: 0x0)
struct FCustomPanelData
{
	struct FVector2D Position; // 0x0(0x8)
	float Scale; // 0x8(0x4)
	float Alpha; // 0xC(0x4)
};

// Object: ScriptStruct GPGlobalDefines.MiscSetting
// Size: 0x8D0 (Inherited: 0x0)
struct FMiscSetting
{
	int32_t Version; // 0x0(0x4)
	uint8_t Pad_0x4[0x1]; // 0x4(0x1)
	uint8_t bFirstLoadConfig : 1; // 0x5(0x1), Mask(0x1)
	uint8_t BitPad_0x5_1 : 7; // 0x5(0x1)
	uint8_t bShowFPPSBtnLog : 1; // 0x6(0x1), Mask(0x1)
	uint8_t BitPad_0x6_1 : 7; // 0x6(0x1)
	uint8_t bHitFeedback : 1; // 0x7(0x1), Mask(0x1)
	uint8_t BitPad_0x7_1 : 7; // 0x7(0x1)
	uint8_t UseAvatarMergeMali : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t UseAvatarMergeOthers : 1; // 0x9(0x1), Mask(0x1)
	uint8_t BitPad_0x9_1 : 7; // 0x9(0x1)
	uint8_t bAutoRunCircle : 1; // 0xA(0x1), Mask(0x1)
	uint8_t BitPad_0xA_1 : 7; // 0xA(0x1)
	uint8_t bKillMsgStyle : 1; // 0xB(0x1), Mask(0x1)
	uint8_t BitPad_0xB_1 : 7; // 0xB(0x1)
	uint8_t bShowSystemInfoText : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t bDisableOperationMode2 : 1; // 0xD(0x1), Mask(0x1)
	uint8_t BitPad_0xD_1 : 7; // 0xD(0x1)
	uint8_t bDisableCustomPanel : 1; // 0xE(0x1), Mask(0x1)
	uint8_t BitPad_0xE_1 : 7; // 0xE(0x1)
	uint8_t Pad_0xF[0x1]; // 0xF(0x1)
	struct TArray<EHandleMode> HandleMode; // 0x10(0x10)
	ELeftHandFireMode LeftHandFireMode; // 0x20(0x1)
	ESideShootMode SideShootMode; // 0x21(0x1)
	ESideShootMethod SideShootMethod; // 0x22(0x1)
	uint8_t bSideShootAim : 1; // 0x23(0x1), Mask(0x1)
	uint8_t BitPad_0x23_1 : 7; // 0x23(0x1)
	uint8_t bShowFPPSwitchBtn : 1; // 0x24(0x1), Mask(0x1)
	uint8_t BitPad_0x24_1 : 7; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
	int32_t FPPViewportDimensionMax; // 0x28(0x4)
	int32_t FPPViewportDimension; // 0x2C(0x4)
	uint8_t bShowFacialAction : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	EGyroMode GyroMode; // 0x31(0x1)
	uint8_t Pad_0x32[0x2]; // 0x32(0x2)
	int32_t MedicineLowThreshold; // 0x34(0x4)
	int32_t MedicineHighThresHold; // 0x38(0x4)
	EOperationMode OperationMode; // 0x3C(0x1)
	uint8_t bDisableOperationMode : 1; // 0x3D(0x1), Mask(0x1)
	uint8_t BitPad_0x3D_1 : 7; // 0x3D(0x1)
	EHudSubMode HudSubMode; // 0x3E(0x1)
	uint8_t bDisableHudSubMode : 1; // 0x3F(0x1), Mask(0x1)
	uint8_t BitPad_0x3F_1 : 7; // 0x3F(0x1)
	uint8_t bMedicineSort : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t ObserveOption : 1; // 0x41(0x1), Mask(0x1)
	uint8_t BitPad_0x41_1 : 7; // 0x41(0x1)
	uint8_t bShowGuideMessage : 1; // 0x42(0x1), Mask(0x1)
	uint8_t BitPad_0x42_1 : 7; // 0x42(0x1)
	uint8_t bMiniMapRotation : 1; // 0x43(0x1), Mask(0x1)
	uint8_t BitPad_0x43_1 : 7; // 0x43(0x1)
	uint8_t bShowTeamateName : 1; // 0x44(0x1), Mask(0x1)
	uint8_t BitPad_0x44_1 : 7; // 0x44(0x1)
	uint8_t bShowTeamateIcon : 1; // 0x45(0x1), Mask(0x1)
	uint8_t BitPad_0x45_1 : 7; // 0x45(0x1)
	uint8_t bShowTeamateDistance : 1; // 0x46(0x1), Mask(0x1)
	uint8_t BitPad_0x46_1 : 7; // 0x46(0x1)
	uint8_t Pad_0x47[0x1]; // 0x47(0x1)
	int32_t MsgUITransparent; // 0x48(0x4)
	uint8_t bGyroYReverse : 1; // 0x4C(0x1), Mask(0x1)
	uint8_t BitPad_0x4C_1 : 7; // 0x4C(0x1)
	uint8_t bGyroXReverse : 1; // 0x4D(0x1), Mask(0x1)
	uint8_t BitPad_0x4D_1 : 7; // 0x4D(0x1)
	ERightHandFireMode RightHandFireMode; // 0x4E(0x1)
	uint8_t bShowBombZoneTip : 1; // 0x4F(0x1), Mask(0x1)
	uint8_t BitPad_0x4F_1 : 7; // 0x4F(0x1)
	uint8_t bShowPoisonZoneTip : 1; // 0x50(0x1), Mask(0x1)
	uint8_t BitPad_0x50_1 : 7; // 0x50(0x1)
	uint8_t bEnable3DTouch : 1; // 0x51(0x1), Mask(0x1)
	uint8_t BitPad_0x51_1 : 7; // 0x51(0x1)
	uint8_t bDisableEnable3DTouch : 1; // 0x52(0x1), Mask(0x1)
	uint8_t BitPad_0x52_1 : 7; // 0x52(0x1)
	uint8_t Pad_0x53[0x1]; // 0x53(0x1)
	int32_t _3DTouchSensitive; // 0x54(0x4)
	uint8_t bDisable3DTouchSensitive : 1; // 0x58(0x1), Mask(0x1)
	uint8_t BitPad_0x58_1 : 7; // 0x58(0x1)
	uint8_t bEnableTopLeftFire : 1; // 0x59(0x1), Mask(0x1)
	uint8_t BitPad_0x59_1 : 7; // 0x59(0x1)
	EAimMethod AimMethod; // 0x5A(0x1)
	uint8_t bUseRTTInBag : 1; // 0x5B(0x1), Mask(0x1)
	uint8_t BitPad_0x5B_1 : 7; // 0x5B(0x1)
	uint8_t bUIDisableUseRTTInBag : 1; // 0x5C(0x1), Mask(0x1)
	uint8_t BitPad_0x5C_1 : 7; // 0x5C(0x1)
	uint8_t bHadInited_UseRTTInBag : 1; // 0x5D(0x1), Mask(0x1)
	uint8_t BitPad_0x5D_1 : 7; // 0x5D(0x1)
	uint8_t Pad_0x5E[0x2]; // 0x5E(0x2)
	struct TArray<EDeviceLevel> DeviceLevelForRTTInBag; // 0x60(0x10)
	uint8_t bShowNearby : 1; // 0x70(0x1), Mask(0x1)
	uint8_t BitPad_0x70_1 : 7; // 0x70(0x1)
	uint8_t bShowArchive : 1; // 0x71(0x1), Mask(0x1)
	uint8_t BitPad_0x71_1 : 7; // 0x71(0x1)
	uint8_t bDisableBagRoleAvatar : 1; // 0x72(0x1), Mask(0x1)
	uint8_t BitPad_0x72_1 : 7; // 0x72(0x1)
	uint8_t bAndroidCorner : 1; // 0x73(0x1), Mask(0x1)
	uint8_t BitPad_0x73_1 : 7; // 0x73(0x1)
	uint8_t bAndroidCurve : 1; // 0x74(0x1), Mask(0x1)
	uint8_t BitPad_0x74_1 : 7; // 0x74(0x1)
	uint8_t bAndroidCornerCurve : 1; // 0x75(0x1), Mask(0x1)
	uint8_t BitPad_0x75_1 : 7; // 0x75(0x1)
	uint8_t bAndroidX : 1; // 0x76(0x1), Mask(0x1)
	uint8_t BitPad_0x76_1 : 7; // 0x76(0x1)
	uint8_t Pad_0x77[0x1]; // 0x77(0x1)
	uint32_t ChangeInGameSkinUIThreshold; // 0x78(0x4)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)
	struct TMap<struct FString, struct FCustomPanelData> DefaultOperationMode_1; // 0x80(0x50)
	struct TMap<struct FString, struct FCustomPanelData> DefaultOperationMode_2; // 0xD0(0x50)
	struct TMap<struct FString, struct FCustomPanelData> DefaultOperationMode_3; // 0x120(0x50)
	struct TMap<struct FString, struct FVector2D> DefaultIphoneXOffsetMode_1; // 0x170(0x50)
	struct TMap<struct FString, struct FVector2D> DefaultIphoneXOffsetMode_2; // 0x1C0(0x50)
	struct TMap<struct FString, struct FVector2D> DefaultIphoneXOffsetMode_3; // 0x210(0x50)
	struct TMap<struct FString, struct FVector2D> DefaultAndroidCornerOffsetMode1; // 0x260(0x50)
	struct TMap<struct FString, struct FVector2D> DefaultAndroidCornerOffsetMode2; // 0x2B0(0x50)
	struct TMap<struct FString, struct FVector2D> DefaultAndroidCornerOffsetMode3; // 0x300(0x50)
	struct TMap<struct FString, struct FVector2D> DefaultAndroidCurveOffsetMode1; // 0x350(0x50)
	struct TMap<struct FString, struct FVector2D> DefaultAndroidCurveOffsetMode2; // 0x3A0(0x50)
	struct TMap<struct FString, struct FVector2D> DefaultAndroidCurveOffsetMode3; // 0x3F0(0x50)
	struct TMap<struct FString, struct FVector2D> DefaultAndroidCCOffsetMode1; // 0x440(0x50)
	struct TMap<struct FString, struct FVector2D> DefaultAndroidCCOffsetMode2; // 0x490(0x50)
	struct TMap<struct FString, struct FVector2D> DefaultAndroidCCOffsetMode3; // 0x4E0(0x50)
	struct TMap<struct FString, struct FVector2D> DefaultAndroidXOffsetMode_1; // 0x530(0x50)
	struct TMap<struct FString, struct FVector2D> DefaultAndroidXOffsetMode_2; // 0x580(0x50)
	struct TMap<struct FString, struct FVector2D> DefaultAndroidXOffsetMode_3; // 0x5D0(0x50)
	struct TMap<struct FString, struct FCustomPanelData> CustomOperationMode_1; // 0x620(0x50)
	struct TMap<struct FString, struct FCustomPanelData> CustomOperationMode_2; // 0x670(0x50)
	struct TMap<struct FString, struct FCustomPanelData> CustomOperationMode_3; // 0x6C0(0x50)
	struct TMap<struct FString, struct FCustomGridPanelData> CustomGridPanelData_1; // 0x710(0x50)
	struct TMap<struct FString, struct FCustomGridPanelData> CustomGridPanelData_2; // 0x760(0x50)
	struct TMap<struct FString, struct FCustomGridPanelData> CustomGridPanelData_3; // 0x7B0(0x50)
	struct FMargin CustomSafeZoneMargin; // 0x800(0x10)
	int32_t OperationNum; // 0x810(0x4)
	int32_t HUDFireNum; // 0x814(0x4)
	int32_t SubPlanNum; // 0x818(0x4)
	uint8_t bUseNewScalabilityMode : 1; // 0x81C(0x1), Mask(0x1)
	uint8_t BitPad_0x81C_1 : 7; // 0x81C(0x1)
	uint8_t bAutoOpenDoor : 1; // 0x81D(0x1), Mask(0x1)
	uint8_t BitPad_0x81D_1 : 7; // 0x81D(0x1)
	uint8_t bEnableAutoOpenDoor : 1; // 0x81E(0x1), Mask(0x1)
	uint8_t BitPad_0x81E_1 : 7; // 0x81E(0x1)
	uint8_t bEnableMasterVolume : 1; // 0x81F(0x1), Mask(0x1)
	uint8_t BitPad_0x81F_1 : 7; // 0x81F(0x1)
	float MasterVolume; // 0x820(0x4)
	uint8_t bEnableSoundEffect : 1; // 0x824(0x1), Mask(0x1)
	uint8_t BitPad_0x824_1 : 7; // 0x824(0x1)
	uint8_t Pad_0x825[0x3]; // 0x825(0x3)
	float SoundEffectVolume; // 0x828(0x4)
	uint8_t bEnableUISoundEffect : 1; // 0x82C(0x1), Mask(0x1)
	uint8_t BitPad_0x82C_1 : 7; // 0x82C(0x1)
	uint8_t Pad_0x82D[0x3]; // 0x82D(0x3)
	float UISoundEffectVolume; // 0x830(0x4)
	uint8_t bEnableBGM : 1; // 0x834(0x1), Mask(0x1)
	uint8_t BitPad_0x834_1 : 7; // 0x834(0x1)
	uint8_t Pad_0x835[0x3]; // 0x835(0x3)
	float BGMVolume; // 0x838(0x4)
	uint8_t bEnableTalkChannel : 1; // 0x83C(0x1), Mask(0x1)
	uint8_t BitPad_0x83C_1 : 7; // 0x83C(0x1)
	uint8_t bOnlyTalkToTeam : 1; // 0x83D(0x1), Mask(0x1)
	uint8_t BitPad_0x83D_1 : 7; // 0x83D(0x1)
	uint8_t bEnableMicrophone : 1; // 0x83E(0x1), Mask(0x1)
	uint8_t BitPad_0x83E_1 : 7; // 0x83E(0x1)
	uint8_t Pad_0x83F[0x1]; // 0x83F(0x1)
	float MicrophoneVolume; // 0x840(0x4)
	uint8_t bEnableSpeaker : 1; // 0x844(0x1), Mask(0x1)
	uint8_t BitPad_0x844_1 : 7; // 0x844(0x1)
	uint8_t Pad_0x845[0x3]; // 0x845(0x3)
	float SpeakerVolume; // 0x848(0x4)
	uint8_t bDisableUI_Record : 1; // 0x84C(0x1), Mask(0x1)
	uint8_t BitPad_0x84C_1 : 7; // 0x84C(0x1)
	uint8_t bNoDisturbing : 1; // 0x84D(0x1), Mask(0x1)
	uint8_t BitPad_0x84D_1 : 7; // 0x84D(0x1)
	uint8_t bEnableFunction_NoDisturbing : 1; // 0x84E(0x1), Mask(0x1)
	uint8_t BitPad_0x84E_1 : 7; // 0x84E(0x1)
	uint8_t bShowRenderQualityForTest : 1; // 0x84F(0x1), Mask(0x1)
	uint8_t BitPad_0x84F_1 : 7; // 0x84F(0x1)
	uint8_t bShowOperationMode_2 : 1; // 0x850(0x1), Mask(0x1)
	uint8_t BitPad_0x850_1 : 7; // 0x850(0x1)
	uint8_t Pad_0x851[0x7]; // 0x851(0x7)
	struct FString LobbyMapName; // 0x858(0x10)
	struct FString LoginMapName; // 0x868(0x10)
	struct FString StartUpMapName; // 0x878(0x10)
	struct FString GuideMapUrl; // 0x888(0x10)
	uint8_t bAlwaysNewPlayer : 1; // 0x898(0x1), Mask(0x1)
	uint8_t BitPad_0x898_1 : 7; // 0x898(0x1)
	EBeginerLevel DefaultBeginerLevel; // 0x899(0x1)
	EScreenAdaptorMode ScreenAdaptor; // 0x89A(0x1)
	uint8_t Pad_0x89B[0x5]; // 0x89B(0x5)
	struct FString Lb_System_RenderOption_Ultra_Text; // 0x8A0(0x10)
	struct TArray<struct FName> DisableFunctionList; // 0x8B0(0x10)
	uint8_t bDisableGameHandleOpt : 1; // 0x8C0(0x1), Mask(0x1)
	uint8_t BitPad_0x8C0_1 : 7; // 0x8C0(0x1)
	uint8_t Pad_0x8C1[0x3]; // 0x8C1(0x3)
	float RebaseOriginDistance; // 0x8C4(0x4)
	float RebaseOriginZoomingDistance; // 0x8C8(0x4)
	uint8_t Pad_0x8CC[0x4]; // 0x8CC(0x4)
};

// Object: ScriptStruct GPGlobalDefines.VehicleRotationSensitivitySetting
// Size: 0x8 (Inherited: 0x0)
struct FVehicleRotationSensitivitySetting
{
	float NormalRotationSensitivity; // 0x0(0x4)
	float ZoomRotationSensitivity; // 0x4(0x4)
};

// Object: ScriptStruct GPGlobalDefines.ReplayDataChunk
// Size: 0x20 (Inherited: 0x0)
struct FReplayDataChunk
{
	int16_t TotalChunkNums; // 0x0(0x2)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	int32_t StartIndex; // 0x4(0x4)
	uint32_t TimeInMS; // 0x8(0x4)
	int16_t ChunkIndex; // 0xC(0x2)
	uint8_t Pad_0xE[0x2]; // 0xE(0x2)
	struct TArray<uint8_t> Data; // 0x10(0x10)
};

// Object: ScriptStruct GPGlobalDefines.ReplayCheckpointChunk
// Size: 0x20 (Inherited: 0x0)
struct FReplayCheckpointChunk
{
	int16_t TotalChunkNums; // 0x0(0x2)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	uint32_t TimeInMS; // 0x4(0x4)
	uint32_t StreamByteOffset; // 0x8(0x4)
	int16_t ChunkIndex; // 0xC(0x2)
	uint8_t Pad_0xE[0x2]; // 0xE(0x2)
	struct TArray<uint8_t> Data; // 0x10(0x10)
};

// Object: ScriptStruct GPGlobalDefines.ReplayHeaderChunk
// Size: 0x68 (Inherited: 0x0)
struct FReplayHeaderChunk
{
	int64_t RequestTokenTicks; // 0x0(0x8)
	int64_t RequestTimeTicks; // 0x8(0x8)
	uint64_t ReplayPlayerUin; // 0x10(0x8)
	uint32_t ReplayPlayerGUID; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FString ReplayName; // 0x20(0x10)
	uint32_t LengthInMS; // 0x30(0x4)
	float RealLengthInMS; // 0x34(0x4)
	int64_t SizeInBytes; // 0x38(0x8)
	int16_t TotalChunkNums; // 0x40(0x2)
	int16_t ChunkIndex; // 0x42(0x2)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct TArray<int32_t> IgnoreChIndices; // 0x48(0x10)
	struct TArray<uint8_t> Data; // 0x58(0x10)
};

// Object: ScriptStruct GPGlobalDefines.SoftObjectLoader
// Size: 0x18 (Inherited: 0x0)
struct FSoftObjectLoader
{
	struct UObject* Asset; // 0x0(0x8)
	uint8_t Pad_0x8[0x10]; // 0x8(0x10)
};

// Object: ScriptStruct GPGlobalDefines.BattleFieldVehicleInfoRow
// Size: 0x60 (Inherited: 0x10)
struct FBattleFieldVehicleInfoRow : FDescRowBase
{
	struct FText VehicleName; // 0x10(0x18)
	EAnimVehicleType CarType; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct FSoftObjectPath SoftRefIcon; // 0x30(0x18)
	struct FSoftObjectPath SoftRefIconInMap; // 0x48(0x18)
};

// Object: ScriptStruct GPGlobalDefines.VehicleScanningRadarConfig
// Size: 0x20 (Inherited: 0x0)
struct FVehicleScanningRadarConfig
{
	uint8_t bIsEnableScanning : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float HorizontalRadius; // 0x4(0x4)
	float VerticalLength; // 0x8(0x4)
	float ScanningInterval; // 0xC(0x4)
	struct TArray<struct AActor*> TargetVehicleClassArray; // 0x10(0x10)
};

// Object: ScriptStruct GPGlobalDefines.VehicleDataTableRow
// Size: 0x130 (Inherited: 0x10)
struct FVehicleDataTableRow : FDescRowBase
{
	int32_t VehicleId; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText VehicleName; // 0x18(0x18)
	EAnimVehicleType CarType; // 0x30(0x1)
	ECustomVehicleType CustomVehicleType; // 0x31(0x1)
	uint8_t Pad_0x32[0x2]; // 0x32(0x2)
	int32_t ForceWidgetLayoutVehicleId; // 0x34(0x4)
	EDFMVehicleClassType VehicleClassType; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
	struct FText DeployShortDesc; // 0x40(0x18)
	EVehicleDeployType DeployType; // 0x58(0x1)
	uint8_t Pad_0x59[0x7]; // 0x59(0x7)
	struct TSoftClassPtr<struct APawn*> VehicleClass; // 0x60(0x28)
	int32_t LockType; // 0x88(0x4)
	int32_t EffectId; // 0x8C(0x4)
	struct FName AudioKey; // 0x90(0x8)
	uint8_t bIsClosedVehicle : 1; // 0x98(0x1), Mask(0x1)
	uint8_t BitPad_0x98_1 : 7; // 0x98(0x1)
	uint8_t Pad_0x99[0x7]; // 0x99(0x7)
	struct FSoftObjectPath SoftRefIcon; // 0xA0(0x18)
	struct FSoftObjectPath SoftRefIconInMap; // 0xB8(0x18)
	uint8_t bShowInEdgeWhenRedeploy : 1; // 0xD0(0x1), Mask(0x1)
	uint8_t BitPad_0xD0_1 : 7; // 0xD0(0x1)
	uint8_t Pad_0xD1[0x7]; // 0xD1(0x7)
	struct TArray<struct FTransform> AirDropSockets; // 0xD8(0x10)
	struct FVehicleScanningRadarConfig ScanningRadarConfig; // 0xE8(0x20)
	float AirDropOwnTime; // 0x108(0x4)
	uint8_t Pad_0x10C[0x4]; // 0x10C(0x4)
	struct FSoftObjectPath KillBroadcastIconPath; // 0x110(0x18)
	EVehicleAssistAimConfigGroup AssistAimConfigGroup; // 0x128(0x4)
	uint8_t Pad_0x12C[0x4]; // 0x12C(0x4)
};

// Object: Class GPGlobalDefines.GPTriggerBase
// Size: 0x3B8 (Inherited: 0x378)
struct AGPTriggerBase : ATriggerBox
{
	EGPTriggerMode TriggerMode; // 0x378(0x1)
	EGPTriggerAuth TriggerAuth; // 0x379(0x1)
	uint8_t Pad_0x37A[0x2]; // 0x37A(0x2)
	struct FName LevelEnvEvent; // 0x37C(0x8)
	uint8_t Pad_0x384[0x4]; // 0x384(0x4)
	struct TSoftObjectPtr<AActor> SpecialTrigger; // 0x388(0x28)
	uint8_t bWhenEndOverlap : 1; // 0x3B0(0x1), Mask(0x1)
	uint8_t BitPad_0x3B0_1 : 7; // 0x3B0(0x1)
	uint8_t bTriggerMute : 1; // 0x3B1(0x1), Mask(0x1)
	uint8_t BitPad_0x3B1_1 : 7; // 0x3B1(0x1)
	uint8_t bTriggerOnce : 1; // 0x3B2(0x1), Mask(0x1)
	uint8_t BitPad_0x3B2_1 : 7; // 0x3B2(0x1)
	uint8_t bDebugDraw : 1; // 0x3B3(0x1), Mask(0x1)
	uint8_t BitPad_0x3B3_1 : 7; // 0x3B3(0x1)
	int32_t TriggerNum; // 0x3B4(0x4)


	// Object: Function GPGlobalDefines.GPTriggerBase.TryTrigger
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xad59164
	// Params: [ Num(0) Size(0x0) ]
	void TryTrigger();

	// Object: Function GPGlobalDefines.GPTriggerBase.TestTrigger
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xad59150
	// Params: [ Num(0) Size(0x0) ]
	void TestTrigger();

	// Object: Function GPGlobalDefines.GPTriggerBase.TestReset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xad5913c
	// Params: [ Num(0) Size(0x0) ]
	void TestReset();

	// Object: Function GPGlobalDefines.GPTriggerBase.RPC_OnServerTriggered
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected]
	// Offset: 0xad59120
	// Params: [ Num(0) Size(0x0) ]
	void RPC_OnServerTriggered();

	// Object: Function GPGlobalDefines.GPTriggerBase.Reset
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xad59104
	// Params: [ Num(0) Size(0x0) ]
	void Reset();

	// Object: Function GPGlobalDefines.GPTriggerBase.OnTriggerEndOverlapInternal
	// Flags: [Final|Native|Protected]
	// Offset: 0xad59028
	// Params: [ Num(2) Size(0x10) ]
	void OnTriggerEndOverlapInternal(struct AActor* OverlappedActor, struct AActor* OtherActor);

	// Object: Function GPGlobalDefines.GPTriggerBase.OnTriggerBeginOverlapInternal
	// Flags: [Final|Native|Protected]
	// Offset: 0xad58f4c
	// Params: [ Num(2) Size(0x10) ]
	void OnTriggerBeginOverlapInternal(struct AActor* OverlappedActor, struct AActor* OtherActor);

	// Object: Function GPGlobalDefines.GPTriggerBase.OnRep_ReplicatedTriggerNum
	// Flags: [Final|Native|Protected]
	// Offset: 0xad58f38
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ReplicatedTriggerNum();

	// Object: Function GPGlobalDefines.GPTriggerBase.OnLevelEnvEvent
	// Flags: [Native|Protected]
	// Offset: 0xad58e54
	// Params: [ Num(2) Size(0x10) ]
	void OnLevelEnvEvent(struct UObject* EventSourceObject, struct FName EventName);

	// Object: Function GPGlobalDefines.GPTriggerBase.CheckTriggerMode
	// Flags: [Native|Protected|BlueprintCallable]
	// Offset: 0xad58d9c
	// Params: [ Num(2) Size(0x9) ]
	uint8_t CheckTriggerMode(struct AActor* OverlapActor);

	// Object: Function GPGlobalDefines.GPTriggerBase.BP_DoTrigger
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_DoTrigger();
	DEFINE_UE_CLASS_HELPERS(AGPTriggerBase, "GPTriggerBase")

};

// Object: Class GPGlobalDefines.BlueprintFunctionHelper
// Size: 0x28 (Inherited: 0x28)
struct UBlueprintFunctionHelper : UBlueprintFunctionLibrary
{

	// Object: Function GPGlobalDefines.BlueprintFunctionHelper.SnapToGround
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0xad43b48
	// Params: [ Num(2) Size(0x9) ]
	static void SnapToGround(struct USplineComponent* SplineComp, uint8_t bInAlign);

	// Object: Function GPGlobalDefines.BlueprintFunctionHelper.SnapToFixedAngleXY
	// Flags: [Final|Native|Static|Private|HasOutParms|BlueprintCallable]
	// Offset: 0xad43978
	// Params: [ Num(4) Size(0x30) ]
	static void SnapToFixedAngleXY(struct USplineComponent* SplineComp, struct TArray<float> AllowedAngles, uint8_t bSnapToGround, struct TArray<struct FVector>& ResultPoints);

	// Object: Function GPGlobalDefines.BlueprintFunctionHelper.SnapToFixedAngle
	// Flags: [Final|Native|Static|Private|HasOutParms|BlueprintCallable]
	// Offset: 0xad437a8
	// Params: [ Num(4) Size(0x30) ]
	static void SnapToFixedAngle(struct USplineComponent* SplineComp, struct TArray<float> AllowedAngles, uint8_t bSnapToGround, struct TArray<struct FVector>& ResultPoints);

	// Object: Function GPGlobalDefines.BlueprintFunctionHelper.RerunConstructionScripts
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0xad43714
	// Params: [ Num(1) Size(0x8) ]
	static void RerunConstructionScripts(struct AActor* Actor);
	DEFINE_UE_CLASS_HELPERS(UBlueprintFunctionHelper, "BlueprintFunctionHelper")

};

// Object: Class GPGlobalDefines.ClientSettingHelperHD
// Size: 0x40 (Inherited: 0x30)
struct UClientSettingHelperHD : UEngineSubsystem
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)


	// Object: Function GPGlobalDefines.ClientSettingHelperHD.SaveToSaved
	// Flags: [Final|Native|Public]
	// Offset: 0xad4cca4
	// Params: [ Num(0) Size(0x0) ]
	void SaveToSaved();

	// Object: Function GPGlobalDefines.ClientSettingHelperHD.SaveToDefault
	// Flags: [Final|Native|Public]
	// Offset: 0xad4cc90
	// Params: [ Num(0) Size(0x0) ]
	void SaveToDefault();

	// Object: Function GPGlobalDefines.ClientSettingHelperHD.ResetToDefault
	// Flags: [Final|Native|Public]
	// Offset: 0xad4cc7c
	// Params: [ Num(0) Size(0x0) ]
	void ResetToDefault();

	// Object: Function GPGlobalDefines.ClientSettingHelperHD.RemoveOutOfGameApplySetting
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xad4cbe8
	// Params: [ Num(1) Size(0x8) ]
	static void RemoveOutOfGameApplySetting(struct FName ID);

	// Object: Function GPGlobalDefines.ClientSettingHelperHD.MergeJson
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xad4ca98
	// Params: [ Num(2) Size(0x60) ]
	static struct FString MergeJson(struct TMap<struct FString, struct FString> JsonMap);

	// Object: Function GPGlobalDefines.ClientSettingHelperHD.IsEditor
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xad4ca60
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsEditor();

	// Object: Function GPGlobalDefines.ClientSettingHelperHD.GetOutOfGameApplySettings
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xad4c9c8
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FName> GetOutOfGameApplySettings();

	// Object: Function GPGlobalDefines.ClientSettingHelperHD.GetDisplayNameByID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xad4c8b8
	// Params: [ Num(2) Size(0x20) ]
	static struct FText GetDisplayNameByID(struct FName ID);

	// Object: Function GPGlobalDefines.ClientSettingHelperHD.ClearOutOfGameApplySettings
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xad4c8a4
	// Params: [ Num(0) Size(0x0) ]
	static void ClearOutOfGameApplySettings();

	// Object: Function GPGlobalDefines.ClientSettingHelperHD.AddOutOfGameApplySetting
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xad4c810
	// Params: [ Num(1) Size(0x8) ]
	static void AddOutOfGameApplySetting(struct FName ID);
	DEFINE_UE_CLASS_HELPERS(UClientSettingHelperHD, "ClientSettingHelperHD")

};

// Object: Class GPGlobalDefines.ClientBHDSetting
// Size: 0x1C0 (Inherited: 0x40)
struct UClientBHDSetting : UClientSettingHelperHD
{
	uint8_t Pad_0x40[0x10]; // 0x40(0x10)
	uint8_t bVaultTriggerMode : 1; // 0x50(0x1), Mask(0x1)
	uint8_t BitPad_0x50_1 : 7; // 0x50(0x1)
	uint8_t bCanMouseTurnMelee : 1; // 0x51(0x1), Mask(0x1)
	uint8_t BitPad_0x51_1 : 7; // 0x51(0x1)
	uint8_t bSeparateSideAiming : 1; // 0x52(0x1), Mask(0x1)
	uint8_t BitPad_0x52_1 : 7; // 0x52(0x1)
	uint8_t bScopeUseRT : 1; // 0x53(0x1), Mask(0x1)
	uint8_t BitPad_0x53_1 : 7; // 0x53(0x1)
	uint8_t bSceneFOVCalcOpenCameraFOV : 1; // 0x54(0x1), Mask(0x1)
	uint8_t BitPad_0x54_1 : 7; // 0x54(0x1)
	EHitEffectColor HitEffectColor; // 0x55(0x1)
	uint8_t Pad_0x56[0x2]; // 0x56(0x2)
	float PassengerWeaponSensitivity; // 0x58(0x4)
	uint8_t bOpenFlagVoice : 1; // 0x5C(0x1), Mask(0x1)
	uint8_t BitPad_0x5C_1 : 7; // 0x5C(0x1)
	uint8_t Pad_0x5D[0x3]; // 0x5D(0x3)
	float FlagColorA; // 0x60(0x4)
	float BaseSensitivity; // 0x64(0x4)
	float VerticalSensitivity; // 0x68(0x4)
	float HorizontalSensitivity; // 0x6C(0x4)
	float BaseADSSensitivity; // 0x70(0x4)
	float AimVerticalSensitivity; // 0x74(0x4)
	float AimHorizontalSensitivity; // 0x78(0x4)
	ESensitivityModeHD SensitivityMode; // 0x7C(0x1)
	uint8_t Pad_0x7D[0x3]; // 0x7D(0x3)
	struct TArray<struct FWeaponZoomDataHD> ZoomDataHD; // 0x80(0x10)
	struct TArray<struct FZoomratedDataHD> ZoomratedMDV; // 0x90(0x10)
	float MDV; // 0xA0(0x4)
	int32_t MDVSwitchingMode; // 0xA4(0x4)
	uint8_t bAllVerticalMMReversed : 1; // 0xA8(0x1), Mask(0x1)
	uint8_t BitPad_0xA8_1 : 7; // 0xA8(0x1)
	uint8_t bInfantryVerticalMMReversed : 1; // 0xA9(0x1), Mask(0x1)
	uint8_t BitPad_0xA9_1 : 7; // 0xA9(0x1)
	uint8_t bGunnerVerticalMMReversed : 1; // 0xAA(0x1), Mask(0x1)
	uint8_t BitPad_0xAA_1 : 7; // 0xAA(0x1)
	uint8_t Pad_0xAB[0x1]; // 0xAB(0x1)
	float GamepadMDV; // 0xAC(0x4)
	struct TArray<struct FWeaponZoomDataHD> GamepadZoomDataHD; // 0xB0(0x10)
	uint8_t bUseGamepadCustomADS : 1; // 0xC0(0x1), Mask(0x1)
	uint8_t BitPad_0xC0_1 : 7; // 0xC0(0x1)
	uint8_t Pad_0xC1[0x3]; // 0xC1(0x3)
	int32_t GamepadMDVSwitchingMode; // 0xC4(0x4)
	float HorizontalGamepadSensitivity; // 0xC8(0x4)
	float VerticalGamepadSensitivity; // 0xCC(0x4)
	float AimHorizontalGamepadSensitivity; // 0xD0(0x4)
	float AimVerticalGamepadSensitivity; // 0xD4(0x4)
	ESensitivityModeHD GamepadSensitivityMode; // 0xD8(0x1)
	uint8_t Pad_0xD9[0x7]; // 0xD9(0x7)
	struct TArray<struct FZoomratedDataHD> GamepadZoomratedMDV; // 0xE0(0x10)
	uint8_t bAllVerticalMMReversedGamepad : 1; // 0xF0(0x1), Mask(0x1)
	uint8_t BitPad_0xF0_1 : 7; // 0xF0(0x1)
	uint8_t bInfantryVerticalMMReversedGamepad : 1; // 0xF1(0x1), Mask(0x1)
	uint8_t BitPad_0xF1_1 : 7; // 0xF1(0x1)
	uint8_t bGunnerVerticalMMReversedGamepad : 1; // 0xF2(0x1), Mask(0x1)
	uint8_t BitPad_0xF2_1 : 7; // 0xF2(0x1)
	EGamepadSensitivityCurveType GamepadSensitivityCurveType; // 0xF3(0x1)
	struct FGamepadExtraSensitivityDataHD ExtraSensitivityDataHD; // 0xF4(0x10)
	struct FGamepadExtraSensitivityDataHD ADSExtraSensitivityDataHD; // 0x104(0x10)
	struct FGamepadThumbRestrictDataHD GamepadRightThumbRestrictDataHD; // 0x114(0xC)
	struct FGamepadThumbRestrictDataHD GamepadLeftThumbRestrictDataHD; // 0x120(0xC)
	int32_t GamepadSensitivityPresetMode; // 0x12C(0x4)
	uint8_t bEnableScopeCustom : 1; // 0x130(0x1), Mask(0x1)
	uint8_t BitPad_0x130_1 : 7; // 0x130(0x1)
	uint8_t bDisplay_PerformanceStatus : 1; // 0x131(0x1), Mask(0x1)
	uint8_t BitPad_0x131_1 : 7; // 0x131(0x1)
	uint8_t bEnablePickupDetailHUD : 1; // 0x132(0x1), Mask(0x1)
	uint8_t BitPad_0x132_1 : 7; // 0x132(0x1)
	uint8_t bHurtCloseLootPanel : 1; // 0x133(0x1), Mask(0x1)
	uint8_t BitPad_0x133_1 : 7; // 0x133(0x1)
	uint8_t bMapAutoRotateSol : 1; // 0x134(0x1), Mask(0x1)
	uint8_t BitPad_0x134_1 : 7; // 0x134(0x1)
	uint8_t Pad_0x135[0x3]; // 0x135(0x3)
	float InfantryVision; // 0x138(0x4)
	float VehicleVision; // 0x13C(0x4)
	float AirPlaneVision; // 0x140(0x4)
	float MpMapScale; // 0x144(0x4)
	struct FString TextLanguage; // 0x148(0x10)
	struct FString VoiceLanguage; // 0x158(0x10)
	float VolumeAll; // 0x168(0x4)
	float Volume_Music; // 0x16C(0x4)
	float Volume_SFX; // 0x170(0x4)
	float Volume_UI; // 0x174(0x4)
	float Volume_VO; // 0x178(0x4)
	float Volume_GVoice; // 0x17C(0x4)
	float Volume_Microphone; // 0x180(0x4)
	int32_t AudioDynamicRange; // 0x184(0x4)
	int32_t AudioLevel; // 0x188(0x4)
	int32_t MicrophoneButtonType; // 0x18C(0x4)
	int32_t ThreeDAudioType; // 0x190(0x4)
	uint8_t Pad_0x194[0x4]; // 0x194(0x4)
	struct FString AudioInputDevice; // 0x198(0x10)
	struct FString AudioOutputDevice; // 0x1A8(0x10)
	int32_t SpeakingChanel; // 0x1B8(0x4)
	int32_t ListeningChanel; // 0x1BC(0x4)


	// Object: Function GPGlobalDefines.ClientBHDSetting.SetZoomratedMDVByIndex
	// Flags: [Final|Native|Public]
	// Offset: 0xad442e0
	// Params: [ Num(3) Size(0x9) ]
	void SetZoomratedMDVByIndex(int32_t Index, float Value, uint8_t bIsGamepad);

	// Object: Function GPGlobalDefines.ClientBHDSetting.SetADSSensitivityByIndex
	// Flags: [Final|Native|Public]
	// Offset: 0xad44180
	// Params: [ Num(4) Size(0xD) ]
	void SetADSSensitivityByIndex(int32_t Index, int32_t SubIndex, float Value, uint8_t bIsGamepad);

	// Object: Function GPGlobalDefines.ClientBHDSetting.GetZoomratedMDVByIndex
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xad44094
	// Params: [ Num(3) Size(0xC) ]
	float GetZoomratedMDVByIndex(int32_t Index, uint8_t bIsGamepad);

	// Object: Function GPGlobalDefines.ClientBHDSetting.GetCustomADSSensitivityByIndex
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xad43f6c
	// Params: [ Num(4) Size(0x10) ]
	float GetCustomADSSensitivityByIndex(int32_t Index, int32_t SubIndex, uint8_t bIsGamepad);

	// Object: Function GPGlobalDefines.ClientBHDSetting.GetCachedSettingJson
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xad43ed4
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetCachedSettingJson();

	// Object: Function GPGlobalDefines.ClientBHDSetting.GetBHDPresetValueByType
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xad43d9c
	// Params: [ Num(3) Size(0x58) ]
	float GetBHDPresetValueByType(const struct TMap<EGamepadSensitivityPresetType, float>& Map, EGamepadSensitivityPresetType Type);

	// Object: Function GPGlobalDefines.ClientBHDSetting.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xad43cf8
	// Params: [ Num(2) Size(0x10) ]
	static struct UClientBHDSetting* Get(struct UObject* WorldContextObject);

	// Object: Function GPGlobalDefines.ClientBHDSetting.CacheSettingJson
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xad43c4c
	// Params: [ Num(1) Size(0x10) ]
	void CacheSettingJson(struct FString InJson);
	DEFINE_UE_CLASS_HELPERS(UClientBHDSetting, "ClientBHDSetting")

};

// Object: Class GPGlobalDefines.ClientDebugSetting
// Size: 0x48 (Inherited: 0x30)
struct UClientDebugSetting : UEngineSubsystem
{
	uint8_t bOverrideWalkRunArea : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	float Movement_RunValue; // 0x34(0x4)
	float Movement_SilentWalkXValue; // 0x38(0x4)
	float Movement_SilentWalkYValue; // 0x3C(0x4)
	uint8_t bShowWalkRunArea : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t Pad_0x41[0x7]; // 0x41(0x7)


	// Object: Function GPGlobalDefines.ClientDebugSetting.SaveDataConfig
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xad44514
	// Params: [ Num(0) Size(0x0) ]
	void SaveDataConfig();
	DEFINE_UE_CLASS_HELPERS(UClientDebugSetting, "ClientDebugSetting")

};

// Object: Class GPGlobalDefines.ClientGameSetting
// Size: 0xC0 (Inherited: 0x30)
struct UClientGameSetting : UWorldSubsystem
{
	uint8_t bUnderFPPMode : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	float SensibilityValue; // 0x34(0x4)
	float SensibilityValue_NoZooming; // 0x38(0x4)
	float SensibilityValue_MechanicalScope; // 0x3C(0x4)
	float SensibilityValue_2XScope; // 0x40(0x4)
	float SensibilityMinValue; // 0x44(0x4)
	uint8_t bUseMsaa : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x3]; // 0x49(0x3)
	int32_t MobileMsaaCount; // 0x4C(0x4)
	int32_t ScalabilityQualityLevel; // 0x50(0x4)
	uint8_t bPhysicsDyingEnable : 1; // 0x54(0x1), Mask(0x1)
	uint8_t BitPad_0x54_1 : 7; // 0x54(0x1)
	uint8_t bPhysicsDyingAnimProfileEnable : 1; // 0x55(0x1), Mask(0x1)
	uint8_t BitPad_0x55_1 : 7; // 0x55(0x1)
	uint8_t bPhysicsDyingIgnoreBoneHitResponce : 1; // 0x56(0x1), Mask(0x1)
	uint8_t BitPad_0x56_1 : 7; // 0x56(0x1)
	uint8_t bShowXPPSwitchButton : 1; // 0x57(0x1), Mask(0x1)
	uint8_t BitPad_0x57_1 : 7; // 0x57(0x1)
	uint8_t bShowGMButton : 1; // 0x58(0x1), Mask(0x1)
	uint8_t BitPad_0x58_1 : 7; // 0x58(0x1)
	uint8_t bShowAimCamOffsetFovTest : 1; // 0x59(0x1), Mask(0x1)
	uint8_t BitPad_0x59_1 : 7; // 0x59(0x1)
	uint8_t bShowDebugInfo : 1; // 0x5A(0x1), Mask(0x1)
	uint8_t BitPad_0x5A_1 : 7; // 0x5A(0x1)
	uint8_t Pad_0x5B[0x1]; // 0x5B(0x1)
	int32_t ShowDebugInfoType; // 0x5C(0x4)
	struct FMulticastInlineDelegate OnScopeUseRTChanged; // 0x60(0x10)
	struct FMulticastInlineDelegate OnReloadOpModeChanged; // 0x70(0x10)
	struct FMulticastInlineDelegate OnUseDofChanged; // 0x80(0x10)
	struct FMulticastInlineDelegate OnSeparateSideAimingChanged; // 0x90(0x10)
	uint8_t Pad_0xA0[0x1]; // 0xA0(0x1)
	uint8_t bUseRotationInputForDebug : 1; // 0xA1(0x1), Mask(0x1)
	uint8_t BitPad_0xA1_1 : 7; // 0xA1(0x1)
	uint8_t bSOLMarkingRouletteUse8Item : 1; // 0xA2(0x1), Mask(0x1)
	uint8_t BitPad_0xA2_1 : 7; // 0xA2(0x1)
	uint8_t Pad_0xA3[0x5]; // 0xA3(0x5)
	struct TArray<EMarkingLocationType> SOLMarkingItems; // 0xA8(0x10)
	uint8_t bScopeUseRT : 1; // 0xB8(0x1), Mask(0x1)
	uint8_t BitPad_0xB8_1 : 7; // 0xB8(0x1)
	uint8_t bSeparateSideAiming : 1; // 0xB9(0x1), Mask(0x1)
	uint8_t BitPad_0xB9_1 : 7; // 0xB9(0x1)
	uint8_t bReloadOpModeSlide : 1; // 0xBA(0x1), Mask(0x1)
	uint8_t BitPad_0xBA_1 : 7; // 0xBA(0x1)
	uint8_t bUseDof : 1; // 0xBB(0x1), Mask(0x1)
	uint8_t BitPad_0xBB_1 : 7; // 0xBB(0x1)
	uint8_t Pad_0xBC[0x4]; // 0xBC(0x4)


	// Object: Function GPGlobalDefines.ClientGameSetting.SetUseDof
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xad44858
	// Params: [ Num(1) Size(0x1) ]
	void SetUseDof(uint8_t InUseDof);

	// Object: Function GPGlobalDefines.ClientGameSetting.SetSeparateSideAiming
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xad447ac
	// Params: [ Num(1) Size(0x1) ]
	void SetSeparateSideAiming(uint8_t InSeparateSideAiming);

	// Object: Function GPGlobalDefines.ClientGameSetting.SetScopeUseRT
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xad44700
	// Params: [ Num(1) Size(0x1) ]
	void SetScopeUseRT(uint8_t InUseRT);

	// Object: Function GPGlobalDefines.ClientGameSetting.SetReloadOpMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xad44654
	// Params: [ Num(1) Size(0x1) ]
	void SetReloadOpMode(uint8_t bSlideMode);

	// Object: Function GPGlobalDefines.ClientGameSetting.SaveDataConfig
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xad44640
	// Params: [ Num(0) Size(0x0) ]
	void SaveDataConfig();

	// Object: Function GPGlobalDefines.ClientGameSetting.GetUseDof
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xad44624
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetUseDof();

	// Object: Function GPGlobalDefines.ClientGameSetting.GetScopeUseRT
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xad44608
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetScopeUseRT();

	// Object: Function GPGlobalDefines.ClientGameSetting.GetReloadOpMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xad445ec
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetReloadOpMode();

	// Object: Function GPGlobalDefines.ClientGameSetting.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xad44548
	// Params: [ Num(2) Size(0x10) ]
	static struct UClientGameSetting* Get(struct UObject* WorldContext);
	DEFINE_UE_CLASS_HELPERS(UClientGameSetting, "ClientGameSetting")

};

// Object: Class GPGlobalDefines.ClientSettingDelagate
// Size: 0x140 (Inherited: 0x30)
struct UClientSettingDelagate : UEngineSubsystem
{
	struct FMulticastInlineDelegate OnSettingPanelReset; // 0x30(0x10)
	struct FMulticastInlineDelegate OnResetBaseSetting; // 0x40(0x10)
	struct FMulticastInlineDelegate OnResetDisplaySetting; // 0x50(0x10)
	struct FMulticastInlineDelegate OnCameraModeChange; // 0x60(0x10)
	struct FMulticastInlineDelegate OnCustomLayoutChange; // 0x70(0x10)
	struct FMulticastInlineDelegate OnCusmtomButtonChange; // 0x80(0x10)
	struct FMulticastInlineDelegate OnClientSettingLeanPeekChange; // 0x90(0x10)
	struct FMulticastInlineDelegate SilentWalkModeChangeDelegate; // 0xA0(0x10)
	struct FMulticastInlineDelegate OnAfterSettingPanelReset; // 0xB0(0x10)
	struct FMulticastInlineDelegate MoveFireModeChangeDelegate; // 0xC0(0x10)
	struct FMulticastInlineDelegate SprintTriggerSensitivityChangeDelegate; // 0xD0(0x10)
	struct FMulticastInlineDelegate MarkingButtonChangeDelegate; // 0xE0(0x10)
	struct FMulticastInlineDelegate OnCloseSystemSetting; // 0xF0(0x10)
	struct FMulticastInlineDelegate OnControlSettingChange; // 0x100(0x10)
	struct FMulticastInlineDelegate OnReloadOptionChange; // 0x110(0x10)
	struct FMulticastInlineDelegate OnCrouchToSteeringChange; // 0x120(0x10)
	struct FMulticastInlineDelegate OnMixLoadingChange; // 0x130(0x10)


	// Object: Function GPGlobalDefines.ClientSettingDelagate.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xad45b28
	// Params: [ Num(2) Size(0x10) ]
	static struct UClientSettingDelagate* Get(struct UObject* WorldContextObject);
	DEFINE_UE_CLASS_HELPERS(UClientSettingDelagate, "ClientSettingDelagate")

};

// Object: Class GPGlobalDefines.ClientDisplaySetting
// Size: 0x68 (Inherited: 0x30)
struct UClientDisplaySetting : UEngineSubsystem
{
	int32_t SafeZoneValue; // 0x30(0x4)
	uint8_t bAutoOptimize : 1; // 0x34(0x1), Mask(0x1)
	uint8_t BitPad_0x34_1 : 7; // 0x34(0x1)
	EPerfGearQualityLevel DisplayQuality; // 0x35(0x1)
	EPerfGearQualityLevel FrameQuality; // 0x36(0x1)
	uint8_t Pad_0x37[0x1]; // 0x37(0x1)
	struct FString DisplayStyle; // 0x38(0x10)
	float HudSafeZone; // 0x48(0x4)
	EHitEffectColor HitEffectColor; // 0x4C(0x1)
	uint8_t Pad_0x4D[0x3]; // 0x4D(0x3)
	int32_t FrameStyle; // 0x50(0x4)
	uint8_t bEyesProtection : 1; // 0x54(0x1), Mask(0x1)
	uint8_t BitPad_0x54_1 : 7; // 0x54(0x1)
	uint8_t bShowNickName : 1; // 0x55(0x1), Mask(0x1)
	uint8_t BitPad_0x55_1 : 7; // 0x55(0x1)
	uint8_t Pad_0x56[0x2]; // 0x56(0x2)
	float ScreenVibrates; // 0x58(0x4)
	uint8_t bUseDefaultMargin : 1; // 0x5C(0x1), Mask(0x1)
	uint8_t BitPad_0x5C_1 : 7; // 0x5C(0x1)
	uint8_t Pad_0x5D[0x3]; // 0x5D(0x3)
	int32_t ScreenMargin; // 0x60(0x4)
	ERoletteStyle SOLMarkingRouletteStyle; // 0x64(0x1)
	uint8_t Pad_0x65[0x3]; // 0x65(0x3)


	// Object: Function GPGlobalDefines.ClientDisplaySetting.SetSafeZoneValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10a1ee8c
	// Params: [ Num(1) Size(0x4) ]
	void SetSafeZoneValue(int32_t Value);

	// Object: Function GPGlobalDefines.ClientDisplaySetting.SaveFlushConfig
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xad45cd4
	// Params: [ Num(0) Size(0x0) ]
	void SaveFlushConfig();

	// Object: Function GPGlobalDefines.ClientDisplaySetting.SaveDataConfig
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x105d4b7c
	// Params: [ Num(0) Size(0x0) ]
	void SaveDataConfig();

	// Object: Function GPGlobalDefines.ClientDisplaySetting.ResetToDefault
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xad45c18
	// Params: [ Num(1) Size(0x10) ]
	void ResetToDefault(const struct TArray<struct FString>& ResetPanelList);

	// Object: Function GPGlobalDefines.ClientDisplaySetting.GetSafeZoneValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xad45be4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetSafeZoneValue();

	// Object: Function GPGlobalDefines.ClientDisplaySetting.GetSafeZoneIsSet
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x108aadb0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetSafeZoneIsSet();

	// Object: Function GPGlobalDefines.ClientDisplaySetting.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf6ce078
	// Params: [ Num(2) Size(0x10) ]
	static struct UClientDisplaySetting* Get(struct UObject* GameContextObject);
	DEFINE_UE_CLASS_HELPERS(UClientDisplaySetting, "ClientDisplaySetting")

};

// Object: Class GPGlobalDefines.ClientBaseSetting
// Size: 0x1F8 (Inherited: 0x30)
struct UClientBaseSetting : UEngineSubsystem
{
	uint8_t bIsAimAssistOpen : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t bIsAimMagnify : 1; // 0x31(0x1), Mask(0x1)
	uint8_t BitPad_0x31_1 : 7; // 0x31(0x1)
	uint8_t bIsInventoryAutoOrganize : 1; // 0x32(0x1), Mask(0x1)
	uint8_t BitPad_0x32_1 : 7; // 0x32(0x1)
	EFireMode ShotGunFireMode; // 0x33(0x1)
	EFireMode SRFireMode; // 0x34(0x1)
	EFireMode CompoundBowFireMode; // 0x35(0x1)
	EFireMode AbilityItemFireMode; // 0x36(0x1)
	uint8_t bSRInstantFire : 1; // 0x37(0x1), Mask(0x1)
	uint8_t BitPad_0x37_1 : 7; // 0x37(0x1)
	EScopeOpenMode VehicleScopeOpenMode; // 0x38(0x1)
	EScopeOpenMode ScopeOpenMode; // 0x39(0x1)
	EScopeOpenMode SideAimOpenMode; // 0x3A(0x1)
	EQuickScopeOpenMode QuickScopeOpen; // 0x3B(0x1)
	uint8_t bCanFireOnQuickScopeOpen : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t BitPad_0x3C_1 : 7; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
	struct TMap<EWeaponItemType, uint8_t> QuickScopeOpenMap; // 0x40(0x50)
	uint8_t QuickScopeOpenAbilityItem : 1; // 0x90(0x1), Mask(0x1)
	uint8_t BitPad_0x90_1 : 7; // 0x90(0x1)
	uint8_t QuickScopeOpenFixedWeapon : 1; // 0x91(0x1), Mask(0x1)
	uint8_t BitPad_0x91_1 : 7; // 0x91(0x1)
	EQuickScopeOpenMode QuickScopeOpen_MP; // 0x92(0x1)
	uint8_t bCanFireOnQuickScopeOpen_MP : 1; // 0x93(0x1), Mask(0x1)
	uint8_t BitPad_0x93_1 : 7; // 0x93(0x1)
	uint8_t Pad_0x94[0x4]; // 0x94(0x4)
	struct TMap<EWeaponItemType, uint8_t> QuickScopeOpenMap_MP; // 0x98(0x50)
	uint8_t QuickScopeOpenAbilityItem_MP : 1; // 0xE8(0x1), Mask(0x1)
	uint8_t BitPad_0xE8_1 : 7; // 0xE8(0x1)
	uint8_t QuickScopeOpenFixedWeapon_MP : 1; // 0xE9(0x1), Mask(0x1)
	uint8_t BitPad_0xE9_1 : 7; // 0xE9(0x1)
	EFireMode ShotGunFireMode_MP; // 0xEA(0x1)
	EFireMode SRFireMode_MP; // 0xEB(0x1)
	EFireMode CompoundBowFireMode_MP; // 0xEC(0x1)
	EFireMode AbilityItemFireMode_MP; // 0xED(0x1)
	EQuickScopeOpenMode QuickScopeOpen_Overseas; // 0xEE(0x1)
	uint8_t QuickScopeOpenAbilityItem_Overseas : 1; // 0xEF(0x1), Mask(0x1)
	uint8_t BitPad_0xEF_1 : 7; // 0xEF(0x1)
	uint8_t QuickScopeOpenFixedWeapon_Overseas : 1; // 0xF0(0x1), Mask(0x1)
	uint8_t BitPad_0xF0_1 : 7; // 0xF0(0x1)
	EQuickScopeOpenMode QuickScopeOpen_MP_Overseas; // 0xF1(0x1)
	uint8_t QuickScopeOpenAbilityItem_MP_Overseas : 1; // 0xF2(0x1), Mask(0x1)
	uint8_t BitPad_0xF2_1 : 7; // 0xF2(0x1)
	uint8_t QuickScopeOpenFixedWeapon_MP_Overseas : 1; // 0xF3(0x1), Mask(0x1)
	uint8_t BitPad_0xF3_1 : 7; // 0xF3(0x1)
	uint8_t bEnableReloadOnAiming : 1; // 0xF4(0x1), Mask(0x1)
	uint8_t BitPad_0xF4_1 : 7; // 0xF4(0x1)
	uint8_t bReloadBreakMirror : 1; // 0xF5(0x1), Mask(0x1)
	uint8_t BitPad_0xF5_1 : 7; // 0xF5(0x1)
	uint8_t bCanSprintBreakZoom : 1; // 0xF6(0x1), Mask(0x1)
	uint8_t BitPad_0xF6_1 : 7; // 0xF6(0x1)
	uint8_t bCanSprintBreakZoomMP : 1; // 0xF7(0x1), Mask(0x1)
	uint8_t BitPad_0xF7_1 : 7; // 0xF7(0x1)
	uint8_t bCanSprintBreakUsingItem : 1; // 0xF8(0x1), Mask(0x1)
	uint8_t BitPad_0xF8_1 : 7; // 0xF8(0x1)
	uint8_t bAutoCancel : 1; // 0xF9(0x1), Mask(0x1)
	uint8_t BitPad_0xF9_1 : 7; // 0xF9(0x1)
	uint8_t bReloadOption : 1; // 0xFA(0x1), Mask(0x1)
	uint8_t BitPad_0xFA_1 : 7; // 0xFA(0x1)
	uint8_t bRepairMerge : 1; // 0xFB(0x1), Mask(0x1)
	uint8_t BitPad_0xFB_1 : 7; // 0xFB(0x1)
	uint8_t bCompleteArmorFirst : 1; // 0xFC(0x1), Mask(0x1)
	uint8_t BitPad_0xFC_1 : 7; // 0xFC(0x1)
	uint8_t bEnableAutoFire : 1; // 0xFD(0x1), Mask(0x1)
	uint8_t BitPad_0xFD_1 : 7; // 0xFD(0x1)
	uint8_t Pad_0xFE[0x2]; // 0xFE(0x2)
	float FPPViewRange; // 0x100(0x4)
	float FPPViewRangeMin; // 0x104(0x4)
	float FPPViewRangeMax; // 0x108(0x4)
	float TPPViewRange; // 0x10C(0x4)
	float TPPViewRangeMin; // 0x110(0x4)
	float TPPViewRangeMax; // 0x114(0x4)
	uint8_t bCanSwitchXPP : 1; // 0x118(0x1), Mask(0x1)
	uint8_t BitPad_0x118_1 : 7; // 0x118(0x1)
	EFireBreakReload FireBreakReload; // 0x119(0x1)
	EAutoCrossMode AutoCrossMode; // 0x11A(0x1)
	uint8_t bMixedLoading : 1; // 0x11B(0x1), Mask(0x1)
	uint8_t BitPad_0x11B_1 : 7; // 0x11B(0x1)
	uint8_t bRunBreakReload : 1; // 0x11C(0x1), Mask(0x1)
	uint8_t BitPad_0x11C_1 : 7; // 0x11C(0x1)
	uint8_t bAutoHoldBreathOnZoom : 1; // 0x11D(0x1), Mask(0x1)
	uint8_t BitPad_0x11D_1 : 7; // 0x11D(0x1)
	EScopeBreathMode ScopeBreathMode_SOL; // 0x11E(0x1)
	EScopeBreathMode ScopeBreathMode_MP; // 0x11F(0x1)
	struct TMap<EWeaponItemType, uint8_t> AutoHoldBreathOnZoomOpenMap; // 0x120(0x50)
	struct TMap<EWeaponItemType, uint8_t> AutoHoldBreathOnZoomOpenMap_MP; // 0x170(0x50)
	uint8_t bSceneFOVCalcOpenCameraFOV : 1; // 0x1C0(0x1), Mask(0x1)
	uint8_t BitPad_0x1C0_1 : 7; // 0x1C0(0x1)
	uint8_t OpenFlutter : 1; // 0x1C1(0x1), Mask(0x1)
	uint8_t BitPad_0x1C1_1 : 7; // 0x1C1(0x1)
	uint8_t OpenQuicklySwitchButton : 1; // 0x1C2(0x1), Mask(0x1)
	uint8_t BitPad_0x1C2_1 : 7; // 0x1C2(0x1)
	uint8_t bAutoDropGrenade : 1; // 0x1C3(0x1), Mask(0x1)
	uint8_t BitPad_0x1C3_1 : 7; // 0x1C3(0x1)
	EThrowMode SkillWeaponThrowMode_support; // 0x1C4(0x1)
	EThrowMode SkillWeaponThrowMode_active; // 0x1C5(0x1)
	EThrowMode SkillWeaponThrowMode_BattleField; // 0x1C6(0x1)
	ERoletteItemNums SOLMarkingRouletteUseItem; // 0x1C7(0x1)
	struct TArray<EMarkingLocationType> SOLMarkingItems; // 0x1C8(0x10)
	struct TArray<EMarkingLocationType> SOLMarkingItemsFour; // 0x1D8(0x10)
	uint8_t Pad_0x1E8[0x10]; // 0x1E8(0x10)


	// Object: Function GPGlobalDefines.ClientBaseSetting.SetScopeUseRT
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xad45f04
	// Params: [ Num(1) Size(0x1) ]
	void SetScopeUseRT(uint8_t InUseRT);

	// Object: Function GPGlobalDefines.ClientBaseSetting.SetOpenFlutterVal
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10a865e4
	// Params: [ Num(1) Size(0x1) ]
	void SetOpenFlutterVal(uint8_t Value);

	// Object: Function GPGlobalDefines.ClientBaseSetting.SaveDataConfig
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x105d4c84
	// Params: [ Num(0) Size(0x0) ]
	void SaveDataConfig();

	// Object: Function GPGlobalDefines.ClientBaseSetting.ResetToDefault
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xad45e48
	// Params: [ Num(1) Size(0x10) ]
	void ResetToDefault(const struct TArray<struct FString>& ResetPanelList);

	// Object: Function GPGlobalDefines.ClientBaseSetting.ResetChangeMarkItems
	// Flags: [Final|Native|Public]
	// Offset: 0xad45e34
	// Params: [ Num(0) Size(0x0) ]
	void ResetChangeMarkItems();

	// Object: Function GPGlobalDefines.ClientBaseSetting.NotifyCloseSystemSetting
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x10781830
	// Params: [ Num(1) Size(0x8) ]
	static void NotifyCloseSystemSetting(struct UObject* WorldContextObj);

	// Object: Function GPGlobalDefines.ClientBaseSetting.Lua_CameraModeChangeBroadcast
	// Flags: [Final|Native|Public]
	// Offset: 0xad45e20
	// Params: [ Num(0) Size(0x0) ]
	void Lua_CameraModeChangeBroadcast();

	// Object: Function GPGlobalDefines.ClientBaseSetting.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfe531e8
	// Params: [ Num(2) Size(0x10) ]
	static struct UClientBaseSetting* Get(struct UObject* WorldContextObject);

	// Object: Function GPGlobalDefines.ClientBaseSetting.DFHDSettingOverrideDefault
	// Flags: [Final|Native|Public]
	// Offset: 0xad45e0c
	// Params: [ Num(0) Size(0x0) ]
	void DFHDSettingOverrideDefault();

	// Object: Function GPGlobalDefines.ClientBaseSetting.ChangeMarkItem
	// Flags: [Final|Native|Public]
	// Offset: 0xad45d2c
	// Params: [ Num(2) Size(0x5) ]
	void ChangeMarkItem(int32_t Index, EMarkingLocationType Value);
	DEFINE_UE_CLASS_HELPERS(UClientBaseSetting, "ClientBaseSetting")

};

// Object: Class GPGlobalDefines.ClientOtherSetting
// Size: 0x38 (Inherited: 0x30)
struct UClientOtherSetting : UEngineSubsystem
{
	uint8_t bDisableRuntimeAtlas : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)


	// Object: Function GPGlobalDefines.ClientOtherSetting.SaveDataConfig
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xad46338
	// Params: [ Num(0) Size(0x0) ]
	void SaveDataConfig();

	// Object: Function GPGlobalDefines.ClientOtherSetting.ResetToDefault
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xad4627c
	// Params: [ Num(1) Size(0x10) ]
	void ResetToDefault(const struct TArray<struct FString>& ResetPanelList);

	// Object: Function GPGlobalDefines.ClientOtherSetting.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xad46248
	// Params: [ Num(1) Size(0x8) ]
	static struct UClientOtherSetting* Get();
	DEFINE_UE_CLASS_HELPERS(UClientOtherSetting, "ClientOtherSetting")

};

// Object: Class GPGlobalDefines.ClientControlSetting
// Size: 0x108 (Inherited: 0x30)
struct UClientControlSetting : UEngineSubsystem
{
	EKeyLayoutType LayoutType; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
	struct TMap<uint8_t, EMoveRunMode> MoveRunModeMap; // 0x38(0x50)
	ELeftJoystickMode LeftJoyStickMode; // 0x88(0x1)
	ERightFireMode RightFireMode; // 0x89(0x1)
	EFunctionBtnRotationMode FunctionBtnRotationMode; // 0x8A(0x1)
	uint8_t bAutoUpRun : 1; // 0x8B(0x1), Mask(0x1)
	uint8_t BitPad_0x8B_1 : 7; // 0x8B(0x1)
	uint8_t bAutoUpRunMP : 1; // 0x8C(0x1), Mask(0x1)
	uint8_t BitPad_0x8C_1 : 7; // 0x8C(0x1)
	uint8_t bShowDamageHitHud : 1; // 0x8D(0x1), Mask(0x1)
	uint8_t BitPad_0x8D_1 : 7; // 0x8D(0x1)
	uint8_t bCanLeanPeek : 1; // 0x8E(0x1), Mask(0x1)
	uint8_t BitPad_0x8E_1 : 7; // 0x8E(0x1)
	EScopeOpenMode PeekOpenMode; // 0x8F(0x1)
	uint8_t bPeekAutoScopeOpen : 1; // 0x90(0x1), Mask(0x1)
	uint8_t BitPad_0x90_1 : 7; // 0x90(0x1)
	uint8_t bScopeOpenAutoPeek : 1; // 0x91(0x1), Mask(0x1)
	uint8_t BitPad_0x91_1 : 7; // 0x91(0x1)
	ESilentWalkInputMode SilentWalkInputMode; // 0x92(0x1)
	uint8_t Pad_0x93[0x1]; // 0x93(0x1)
	float SprintTriggerSensitivity; // 0x94(0x4)
	float SprintTriggerSensitivityMP; // 0x98(0x4)
	ESensitivityChangeMode SensitivityChangeMode; // 0x9C(0x1)
	uint8_t bFireBtnRotated : 1; // 0x9D(0x1), Mask(0x1)
	uint8_t BitPad_0x9D_1 : 7; // 0x9D(0x1)
	uint8_t bAimBtnRotated : 1; // 0x9E(0x1), Mask(0x1)
	uint8_t BitPad_0x9E_1 : 7; // 0x9E(0x1)
	uint8_t bPeekBtnRotated : 1; // 0x9F(0x1), Mask(0x1)
	uint8_t BitPad_0x9F_1 : 7; // 0x9F(0x1)
	uint8_t bCrouchBtnRotated : 1; // 0xA0(0x1), Mask(0x1)
	uint8_t BitPad_0xA0_1 : 7; // 0xA0(0x1)
	uint8_t bKeyboardSteering : 1; // 0xA1(0x1), Mask(0x1)
	uint8_t BitPad_0xA1_1 : 7; // 0xA1(0x1)
	uint8_t bJumpSteering : 1; // 0xA2(0x1), Mask(0x1)
	uint8_t BitPad_0xA2_1 : 7; // 0xA2(0x1)
	EThrowableWeaponBtnRotatedMode ThrowableWeaponBtnRotated; // 0xA3(0x1)
	uint8_t bThrowableWeaponBtnRotated : 1; // 0xA4(0x1), Mask(0x1)
	uint8_t BitPad_0xA4_1 : 7; // 0xA4(0x1)
	uint8_t bSeparateVault : 1; // 0xA5(0x1), Mask(0x1)
	uint8_t BitPad_0xA5_1 : 7; // 0xA5(0x1)
	uint8_t bAutoParachute : 1; // 0xA6(0x1), Mask(0x1)
	uint8_t BitPad_0xA6_1 : 7; // 0xA6(0x1)
	uint8_t bVaultTriggerMode : 1; // 0xA7(0x1), Mask(0x1)
	uint8_t BitPad_0xA7_1 : 7; // 0xA7(0x1)
	EJumpSplitMode JumpSplitMode; // 0xA8(0x1)
	EClimbAssistMode ClimbAssistModeSOL; // 0xA9(0x1)
	EClimbAssistMode ClimbAssistModeMP; // 0xAA(0x1)
	ELevel ClimeAssist_SOL; // 0xAB(0x1)
	ELevel ClimeAssist_MP; // 0xAC(0x1)
	uint8_t bEnableSwipeSlidingTackleJump : 1; // 0xAD(0x1), Mask(0x1)
	uint8_t BitPad_0xAD_1 : 7; // 0xAD(0x1)
	uint8_t bCrouchToSteering : 1; // 0xAE(0x1), Mask(0x1)
	uint8_t BitPad_0xAE_1 : 7; // 0xAE(0x1)
	EGyroScopeOpenMode GyroScopeOpenMode; // 0xAF(0x1)
	uint8_t bGyroScopeReverseX : 1; // 0xB0(0x1), Mask(0x1)
	uint8_t BitPad_0xB0_1 : 7; // 0xB0(0x1)
	uint8_t bGyroScopeReverseY : 1; // 0xB1(0x1), Mask(0x1)
	uint8_t BitPad_0xB1_1 : 7; // 0xB1(0x1)
	uint8_t bGyroXYReverse : 1; // 0xB2(0x1), Mask(0x1)
	uint8_t BitPad_0xB2_1 : 7; // 0xB2(0x1)
	ESuperSprintControlMode SuperSprintControlMode; // 0xB3(0x1)
	uint8_t Pad_0xB4[0x54]; // 0xB4(0x54)


	// Object: Function GPGlobalDefines.ClientControlSetting.SetBtnRotated
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xad46588
	// Params: [ Num(3) Size(0x12) ]
	uint8_t SetBtnRotated(struct FString BtnName, uint8_t bRotated);

	// Object: Function GPGlobalDefines.ClientControlSetting.SaveDataConfig
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1093cd78
	// Params: [ Num(0) Size(0x0) ]
	void SaveDataConfig();

	// Object: Function GPGlobalDefines.ClientControlSetting.ResetToDefault
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xad464cc
	// Params: [ Num(1) Size(0x10) ]
	void ResetToDefault(const struct TArray<struct FString>& ResetPanelList);

	// Object: Function GPGlobalDefines.ClientControlSetting.GetBtnRotated
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xad46374
	// Params: [ Num(3) Size(0x12) ]
	uint8_t GetBtnRotated(struct FString BtnName, uint8_t& bRotated);

	// Object: Function GPGlobalDefines.ClientControlSetting.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x101cca40
	// Params: [ Num(2) Size(0x10) ]
	static struct UClientControlSetting* Get(struct UObject* WorldContextObject);

	// Object: Function GPGlobalDefines.ClientControlSetting.DFHDSettingOverrideDefault
	// Flags: [Final|Native|Public]
	// Offset: 0xad46360
	// Params: [ Num(0) Size(0x0) ]
	void DFHDSettingOverrideDefault();
	DEFINE_UE_CLASS_HELPERS(UClientControlSetting, "ClientControlSetting")

};

// Object: Class GPGlobalDefines.ClientVehicleSetting
// Size: 0xF38 (Inherited: 0x30)
struct UClientVehicleSetting : UEngineSubsystem
{
	EVehicleMode VehicleMode; // 0x30(0x1)
	EWeaponVehicleMode WeaponVehicleMode; // 0x31(0x1)
	EDriveAngle DriveAngle; // 0x32(0x1)
	ESecondWeaponFireBtn SecondWeaponFireBtn; // 0x33(0x1)
	EVehicleMode JetMode; // 0x34(0x1)
	uint8_t bJoyStickFollowing : 1; // 0x35(0x1), Mask(0x1)
	uint8_t BitPad_0x35_1 : 7; // 0x35(0x1)
	ERollCameraMode RollCameraMode; // 0x36(0x1)
	EVehicleCannonLockMode VehicleCannonLockMode; // 0x37(0x1)
	EVehicleAimAssistMode VehicleAimAssistMode; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
	struct TMap<EVehicleAimAssistType, uint8_t> VehicleAimAssistModeMap; // 0x40(0x50)
	uint8_t CannonCamFollow : 1; // 0x90(0x1), Mask(0x1)
	uint8_t BitPad_0x90_1 : 7; // 0x90(0x1)
	uint8_t TankCamFollow : 1; // 0x91(0x1), Mask(0x1)
	uint8_t BitPad_0x91_1 : 7; // 0x91(0x1)
	uint8_t TankDirection : 1; // 0x92(0x1), Mask(0x1)
	uint8_t BitPad_0x92_1 : 7; // 0x92(0x1)
	uint8_t bEnableFastSwitchVehicleWeapon : 1; // 0x93(0x1), Mask(0x1)
	uint8_t BitPad_0x93_1 : 7; // 0x93(0x1)
	uint8_t bFixedWingOption : 1; // 0x94(0x1), Mask(0x1)
	uint8_t BitPad_0x94_1 : 7; // 0x94(0x1)
	uint8_t bFixedWingVerticalFlip : 1; // 0x95(0x1), Mask(0x1)
	uint8_t BitPad_0x95_1 : 7; // 0x95(0x1)
	uint8_t bVehicleMusic : 1; // 0x96(0x1), Mask(0x1)
	uint8_t BitPad_0x96_1 : 7; // 0x96(0x1)
	uint8_t Pad_0x97[0x1]; // 0x97(0x1)
	struct FVehicleSensitivitySetting NormalSetting; // 0x98(0x750)
	struct FVehicleSensitivitySetting FireSetting; // 0x7E8(0x750)


	// Object: Function GPGlobalDefines.ClientVehicleSetting.SetSensitivityFactor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xad46f0c
	// Params: [ Num(7) Size(0x20) ]
	void SetSensitivityFactor(uint8_t IsFire, EVehicleSensitivityMode VehicleSensitivityMode, uint8_t IsGyro, float SensitivityFactor, float VerticalSensitivityFactor, float HorizontalSensitivityFactor, struct TArray<float> RotationSensitivityArray_Custom);

	// Object: Function GPGlobalDefines.ClientVehicleSetting.SaveDataConfig
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xad46ef8
	// Params: [ Num(0) Size(0x0) ]
	void SaveDataConfig();

	// Object: Function GPGlobalDefines.ClientVehicleSetting.ResetToDefault
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xad46e3c
	// Params: [ Num(1) Size(0x10) ]
	void ResetToDefault(const struct TArray<struct FString>& ResetPanelList);

	// Object: Function GPGlobalDefines.ClientVehicleSetting.GetVehicleSensitivityOuterSettingRef
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xad46cec
	// Params: [ Num(4) Size(0x98) ]
	struct FVehicleSensitivityOuterSetting GetVehicleSensitivityOuterSettingRef(uint8_t IsFire, EVehicleSensitivityMode VehicleSensitivityMode, uint8_t IsGyro);

	// Object: Function GPGlobalDefines.ClientVehicleSetting.GetVehicleSensitivityOuterSetting
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xad46b68
	// Params: [ Num(4) Size(0x98) ]
	struct FVehicleSensitivityOuterSetting GetVehicleSensitivityOuterSetting(uint8_t IsFire, EVehicleSensitivityMode VehicleSensitivityMode, uint8_t IsGyro);

	// Object: Function GPGlobalDefines.ClientVehicleSetting.GetSensitivityFactor
	// Flags: [Final|Native|Public|HasOutParms|Const]
	// Offset: 0xad468c0
	// Params: [ Num(8) Size(0x1C) ]
	void GetSensitivityFactor(uint8_t IsFire, EVehicleSensitivityMode VehicleSensitivityMode, float InZoomRate, uint8_t bGyroScope, float& SensitivityFactor, float& VerticalSensitivityFactor, float& HorizontalSensitivityFactor, float& MDVFactor);

	// Object: Function GPGlobalDefines.ClientVehicleSetting.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfe44a78
	// Params: [ Num(2) Size(0x10) ]
	static struct UClientVehicleSetting* Get(struct UObject* WorldContextObject);
	DEFINE_UE_CLASS_HELPERS(UClientVehicleSetting, "ClientVehicleSetting")

};

// Object: Class GPGlobalDefines.ClientVolumeSetting
// Size: 0x68 (Inherited: 0x30)
struct UClientVolumeSetting : UEngineSubsystem
{
	float VolumeAll; // 0x30(0x4)
	float VolumeMusic; // 0x34(0x4)
	float VolumeSFX; // 0x38(0x4)
	float VolumeUI; // 0x3C(0x4)
	float Volume_CG; // 0x40(0x4)
	float VolumeVO; // 0x44(0x4)
	float EarpieceVolume; // 0x48(0x4)
	float MicrophoneVolume; // 0x4C(0x4)
	float VolumeMin; // 0x50(0x4)
	float VolumeMax; // 0x54(0x4)
	ELODLevel LODLevel; // 0x58(0x1)
	uint8_t bCopyrightMusicPlayback : 1; // 0x59(0x1), Mask(0x1)
	uint8_t BitPad_0x59_1 : 7; // 0x59(0x1)
	uint8_t bSOLImmersion : 1; // 0x5A(0x1), Mask(0x1)
	uint8_t BitPad_0x5A_1 : 7; // 0x5A(0x1)
	EAudioPresetPCType PCAudioPreset; // 0x5B(0x1)
	EAudioMasteringPCType PCAudioMasteringType; // 0x5C(0x1)
	uint8_t Pad_0x5D[0x3]; // 0x5D(0x3)
	int32_t ThreeDAudioType; // 0x60(0x4)
	uint8_t bHRTFAudio : 1; // 0x64(0x1), Mask(0x1)
	uint8_t BitPad_0x64_1 : 7; // 0x64(0x1)
	uint8_t Pad_0x65[0x3]; // 0x65(0x3)


	// Object: Function GPGlobalDefines.ClientVolumeSetting.SaveDataConfig
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x105d4d8c
	// Params: [ Num(0) Size(0x0) ]
	void SaveDataConfig();

	// Object: Function GPGlobalDefines.ClientVolumeSetting.ResetToDefault
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xad4731c
	// Params: [ Num(1) Size(0x10) ]
	void ResetToDefault(const struct TArray<struct FString>& ResetPanelList);

	// Object: Function GPGlobalDefines.ClientVolumeSetting.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf6cdd9c
	// Params: [ Num(2) Size(0x10) ]
	static struct UClientVolumeSetting* Get(struct UObject* WorldContextObject);
	DEFINE_UE_CLASS_HELPERS(UClientVolumeSetting, "ClientVolumeSetting")

};

// Object: Class GPGlobalDefines.ClientSensitivitySetting
// Size: 0x2D8 (Inherited: 0x30)
struct UClientSensitivitySetting : UEngineSubsystem
{
	ESensitivityMode RotationSensitivityMode; // 0x30(0x1)
	uint8_t CategoryLevel_Sensitivity; // 0x31(0x1)
	uint8_t CategoryLevel_GyroSensitivity; // 0x32(0x1)
	uint8_t Pad_0x33[0x5]; // 0x33(0x5)
	struct FSensitivityOuterSetting NormalSetting; // 0x38(0x150)
	struct FSensitivityOuterSetting FireSetting; // 0x188(0x150)


	// Object: Function GPGlobalDefines.ClientSensitivitySetting.UpdateCustomSensitivityValues
	// Flags: [Final|Native|Public]
	// Offset: 0xad47f60
	// Params: [ Num(1) Size(0x4) ]
	void UpdateCustomSensitivityValues(int32_t LevelNum);

	// Object: Function GPGlobalDefines.ClientSensitivitySetting.UpdateCustomGyroSensitivityValues
	// Flags: [Final|Native|Public]
	// Offset: 0xad47ebc
	// Params: [ Num(1) Size(0x4) ]
	void UpdateCustomGyroSensitivityValues(int32_t LevelNum);

	// Object: Function GPGlobalDefines.ClientSensitivitySetting.SetSensitivityFactor
	// Flags: [Final|Native|Public]
	// Offset: 0xad47d14
	// Params: [ Num(5) Size(0x10) ]
	void SetSensitivityFactor(uint8_t bIsFiring, uint8_t bGyroScope, float SensitivityFactor, float VerticalSensitivityFactor, float HorizontalSensitivityFactor);

	// Object: Function GPGlobalDefines.ClientSensitivitySetting.SetMDVFactor
	// Flags: [Final|Native|Public]
	// Offset: 0xad47ba4
	// Params: [ Num(4) Size(0xC) ]
	void SetMDVFactor(uint8_t bIsFiring, uint8_t bGyroScope, float MDVFactor, int32_t Index);

	// Object: Function GPGlobalDefines.ClientSensitivitySetting.SetGyroSensitivityValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xad47a34
	// Params: [ Num(4) Size(0xC) ]
	void SetGyroSensitivityValue(uint8_t bIsFire, uint8_t bIsAim, int32_t Index, float Value);

	// Object: Function GPGlobalDefines.ClientSensitivitySetting.SetCustomCurrentSensitivityArray
	// Flags: [Final|Native|Public]
	// Offset: 0xad47910
	// Params: [ Num(3) Size(0xC) ]
	void SetCustomCurrentSensitivityArray(uint8_t bIsFiring, float NewValue, int32_t Index);

	// Object: Function GPGlobalDefines.ClientSensitivitySetting.SetCustomCurrentDefaultSensitivity
	// Flags: [Final|Native|Public]
	// Offset: 0xad47828
	// Params: [ Num(2) Size(0x8) ]
	void SetCustomCurrentDefaultSensitivity(uint8_t bIsFiring, float NewValue);

	// Object: Function GPGlobalDefines.ClientSensitivitySetting.SetCustomCurrentDefaultAccValue
	// Flags: [Final|Native|Public]
	// Offset: 0xad47740
	// Params: [ Num(2) Size(0x8) ]
	void SetCustomCurrentDefaultAccValue(uint8_t bIsFiring, float NewValue);

	// Object: Function GPGlobalDefines.ClientSensitivitySetting.SaveDataConfig
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xad4772c
	// Params: [ Num(0) Size(0x0) ]
	void SaveDataConfig();

	// Object: Function GPGlobalDefines.ClientSensitivitySetting.ResetToDefault
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xad47670
	// Params: [ Num(1) Size(0x10) ]
	void ResetToDefault(const struct TArray<struct FString>& ResetPanelList);

	// Object: Function GPGlobalDefines.ClientSensitivitySetting.GetSensitivityFactor
	// Flags: [Final|Native|Public|HasOutParms|Const]
	// Offset: 0xad47404
	// Params: [ Num(7) Size(0x1C) ]
	void GetSensitivityFactor(uint8_t bIsFiring, float InZoomRate, uint8_t bGyroScope, float& SensitivityFactor, float& VerticalSensitivityFactor, float& HorizontalSensitivityFactor, float& MDVFactor);

	// Object: Function GPGlobalDefines.ClientSensitivitySetting.GetCustomSpeedAccExtraAngle
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xfa6eae8
	// Params: [ Num(2) Size(0x8) ]
	float GetCustomSpeedAccExtraAngle(uint8_t bIsFiring);

	// Object: Function GPGlobalDefines.ClientSensitivitySetting.GetCurrentGyroCustomSensitivityArray
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xfbd32e8
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<float> GetCurrentGyroCustomSensitivityArray(uint8_t bIsFiring);

	// Object: Function GPGlobalDefines.ClientSensitivitySetting.GetCurrentGyroCustomDefaultSensitivity
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xfc76448
	// Params: [ Num(2) Size(0x8) ]
	float GetCurrentGyroCustomDefaultSensitivity(uint8_t bIsFiring);

	// Object: Function GPGlobalDefines.ClientSensitivitySetting.GetCurrentCustomSensitivityArray
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xfbd2fb0
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<float> GetCurrentCustomSensitivityArray(uint8_t bIsFiring);

	// Object: Function GPGlobalDefines.ClientSensitivitySetting.GetCurrentCustomDefaultSensitivity
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xfc7617c
	// Params: [ Num(2) Size(0x8) ]
	float GetCurrentCustomDefaultSensitivity(uint8_t bIsFiring);

	// Object: Function GPGlobalDefines.ClientSensitivitySetting.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf8b8cac
	// Params: [ Num(2) Size(0x10) ]
	static struct UClientSensitivitySetting* Get(struct UObject* WorldContextObject);
	DEFINE_UE_CLASS_HELPERS(UClientSensitivitySetting, "ClientSensitivitySetting")

};

// Object: Class GPGlobalDefines.ClientDownloadSetting
// Size: 0x38 (Inherited: 0x30)
struct UClientDownloadSetting : UEngineSubsystem
{
	uint8_t DownloadType; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)


	// Object: Function GPGlobalDefines.ClientDownloadSetting.SaveDataConfig
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xad48180
	// Params: [ Num(0) Size(0x0) ]
	void SaveDataConfig();

	// Object: Function GPGlobalDefines.ClientDownloadSetting.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x109e1a1c
	// Params: [ Num(2) Size(0x10) ]
	static struct UClientDownloadSetting* Get(struct UObject* WorldContextObject);
	DEFINE_UE_CLASS_HELPERS(UClientDownloadSetting, "ClientDownloadSetting")

};

// Object: Class GPGlobalDefines.ClientPrivacySetting
// Size: 0x38 (Inherited: 0x30)
struct UClientPrivacySetting : UEngineSubsystem
{
	uint8_t bShowNickName : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t bInVisible : 1; // 0x31(0x1), Mask(0x1)
	uint8_t BitPad_0x31_1 : 7; // 0x31(0x1)
	uint8_t bLootingVisible : 1; // 0x32(0x1), Mask(0x1)
	uint8_t BitPad_0x32_1 : 7; // 0x32(0x1)
	uint8_t Pad_0x33[0x5]; // 0x33(0x5)


	// Object: Function GPGlobalDefines.ClientPrivacySetting.SaveDataConfig
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xad4819c
	// Params: [ Num(0) Size(0x0) ]
	void SaveDataConfig();

	// Object: Function GPGlobalDefines.ClientPrivacySetting.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf890ae8
	// Params: [ Num(2) Size(0x10) ]
	static struct UClientPrivacySetting* Get(struct UObject* WorldContextObject);
	DEFINE_UE_CLASS_HELPERS(UClientPrivacySetting, "ClientPrivacySetting")

};

// Object: Class GPGlobalDefines.ClientChatSetting
// Size: 0x40 (Inherited: 0x30)
struct UClientChatSetting : UEngineSubsystem
{
	uint8_t bShowWorld : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t bShowNear : 1; // 0x31(0x1), Mask(0x1)
	uint8_t BitPad_0x31_1 : 7; // 0x31(0x1)
	uint8_t bShowPrivate : 1; // 0x32(0x1), Mask(0x1)
	uint8_t BitPad_0x32_1 : 7; // 0x32(0x1)
	uint8_t bShowTeam : 1; // 0x33(0x1), Mask(0x1)
	uint8_t BitPad_0x33_1 : 7; // 0x33(0x1)
	uint8_t bShowUnion : 1; // 0x34(0x1), Mask(0x1)
	uint8_t BitPad_0x34_1 : 7; // 0x34(0x1)
	uint8_t bAutoPlayWorld : 1; // 0x35(0x1), Mask(0x1)
	uint8_t BitPad_0x35_1 : 7; // 0x35(0x1)
	uint8_t bAutoPlayCollege : 1; // 0x36(0x1), Mask(0x1)
	uint8_t BitPad_0x36_1 : 7; // 0x36(0x1)
	uint8_t bAutoPlayNear : 1; // 0x37(0x1), Mask(0x1)
	uint8_t BitPad_0x37_1 : 7; // 0x37(0x1)
	uint8_t bAutoPlayPrivate : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t bAutoPlayTeam : 1; // 0x39(0x1), Mask(0x1)
	uint8_t BitPad_0x39_1 : 7; // 0x39(0x1)
	uint8_t bAutoPlayUnion : 1; // 0x3A(0x1), Mask(0x1)
	uint8_t BitPad_0x3A_1 : 7; // 0x3A(0x1)
	uint8_t bForbiddenStranger : 1; // 0x3B(0x1), Mask(0x1)
	uint8_t BitPad_0x3B_1 : 7; // 0x3B(0x1)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)


	// Object: Function GPGlobalDefines.ClientChatSetting.SaveDataConfig
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xad481dc
	// Params: [ Num(0) Size(0x0) ]
	void SaveDataConfig();

	// Object: Function GPGlobalDefines.ClientChatSetting.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfe3de8c
	// Params: [ Num(2) Size(0x10) ]
	static struct UClientChatSetting* Get(struct UObject* WorldContextObject);
	DEFINE_UE_CLASS_HELPERS(UClientChatSetting, "ClientChatSetting")

};

// Object: Class GPGlobalDefines.ClientComminicateSetting
// Size: 0x1E0 (Inherited: 0x30)
struct UClientComminicateSetting : UEngineSubsystem
{
	struct TArray<int32_t> SolChatArray; // 0x30(0x10)
	struct TArray<int32_t> RaidChatArray; // 0x40(0x10)
	struct TArray<int32_t> BattleChatArray; // 0x50(0x10)
	struct TMap<uint8_t, uint8_t> bOpenFlag; // 0x60(0x50)
	struct TMap<uint8_t, uint8_t> bOpenFlagVoice; // 0xB0(0x50)
	uint8_t bOpenTextChatInGame : 1; // 0x100(0x1), Mask(0x1)
	uint8_t BitPad_0x100_1 : 7; // 0x100(0x1)
	uint8_t bAutoMarkingTeammateWishItem : 1; // 0x101(0x1), Mask(0x1)
	uint8_t BitPad_0x101_1 : 7; // 0x101(0x1)
	uint8_t Pad_0x102[0x6]; // 0x102(0x6)
	struct TMap<uint8_t, float> RouletteColorA; // 0x108(0x50)
	float RouletteColorAMax; // 0x158(0x4)
	float RouletteColorAMin; // 0x15C(0x4)
	struct TMap<uint8_t, float> FlagColorA; // 0x160(0x50)
	float FlagColorAMax; // 0x1B0(0x4)
	float FlagColorAMin; // 0x1B4(0x4)
	uint8_t bMPSingleClickCreateLocMark : 1; // 0x1B8(0x1), Mask(0x1)
	uint8_t BitPad_0x1B8_1 : 7; // 0x1B8(0x1)
	uint8_t Pad_0x1B9[0x3]; // 0x1B9(0x3)
	float BattleFlagSize; // 0x1BC(0x4)
	float BattleFlagSizeMin; // 0x1C0(0x4)
	float BattleFlagSizeMax; // 0x1C4(0x4)
	float BattleFlagColorA; // 0x1C8(0x4)
	uint8_t Pad_0x1CC[0x4]; // 0x1CC(0x4)
	struct FString SecondLanguage; // 0x1D0(0x10)


	// Object: Function GPGlobalDefines.ClientComminicateSetting.SaveDataConfig
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xad48344
	// Params: [ Num(0) Size(0x0) ]
	void SaveDataConfig();

	// Object: Function GPGlobalDefines.ClientComminicateSetting.ResetToDefault
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xad48288
	// Params: [ Num(1) Size(0x10) ]
	void ResetToDefault(const struct TArray<struct FString>& ResetPanelList);

	// Object: Function GPGlobalDefines.ClientComminicateSetting.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x10904998
	// Params: [ Num(2) Size(0x10) ]
	static struct UClientComminicateSetting* Get(struct UObject* WorldContextObject);
	DEFINE_UE_CLASS_HELPERS(UClientComminicateSetting, "ClientComminicateSetting")

};

// Object: Class GPGlobalDefines.ClientSolSetting
// Size: 0x80 (Inherited: 0x30)
struct UClientSolSetting : UEngineSubsystem
{
	uint8_t bSafeBoxPreferMarkItem : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t bSafeBoxPreferHighValueItem : 1; // 0x31(0x1), Mask(0x1)
	uint8_t BitPad_0x31_1 : 7; // 0x31(0x1)
	ELootingShare LootingShare; // 0x32(0x1)
	uint8_t bHurtCloseLootPanel : 1; // 0x33(0x1), Mask(0x1)
	uint8_t BitPad_0x33_1 : 7; // 0x33(0x1)
	uint8_t bEnableTreat : 1; // 0x34(0x1), Mask(0x1)
	uint8_t BitPad_0x34_1 : 7; // 0x34(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
	float SafeBoxPriceThreshold; // 0x38(0x4)
	float OpenRouletteTime; // 0x3C(0x4)
	float MaxOpenRouletteTime; // 0x40(0x4)
	float MinOpenRouletteTime; // 0x44(0x4)
	uint8_t bDrugDurabilityLimited : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x3]; // 0x49(0x3)
	int32_t DrugDuration; // 0x4C(0x4)
	uint8_t bIsAuctionAutoOrganize : 1; // 0x50(0x1), Mask(0x1)
	uint8_t BitPad_0x50_1 : 7; // 0x50(0x1)
	uint8_t bInventoryAutoNewline : 1; // 0x51(0x1), Mask(0x1)
	uint8_t BitPad_0x51_1 : 7; // 0x51(0x1)
	uint8_t bInventorySortEveryEnter : 1; // 0x52(0x1), Mask(0x1)
	uint8_t BitPad_0x52_1 : 7; // 0x52(0x1)
	uint8_t bCanDisassembleGun : 1; // 0x53(0x1), Mask(0x1)
	uint8_t BitPad_0x53_1 : 7; // 0x53(0x1)
	uint8_t bShareSpoils : 1; // 0x54(0x1), Mask(0x1)
	uint8_t BitPad_0x54_1 : 7; // 0x54(0x1)
	uint8_t bShareSpoilTeam : 1; // 0x55(0x1), Mask(0x1)
	uint8_t BitPad_0x55_1 : 7; // 0x55(0x1)
	uint8_t bShareSpoilAll : 1; // 0x56(0x1), Mask(0x1)
	uint8_t BitPad_0x56_1 : 7; // 0x56(0x1)
	uint8_t Pad_0x57[0x1]; // 0x57(0x1)
	float InfantryVision; // 0x58(0x4)
	float VehicleVision; // 0x5C(0x4)
	float AirPlaneVision; // 0x60(0x4)
	float VisionMin; // 0x64(0x4)
	float VisionMax; // 0x68(0x4)
	float MpMapScale; // 0x6C(0x4)
	float MpMapScaleMin; // 0x70(0x4)
	float MpMapScaleMax; // 0x74(0x4)
	uint8_t bMapAutoRotateSol : 1; // 0x78(0x1), Mask(0x1)
	uint8_t BitPad_0x78_1 : 7; // 0x78(0x1)
	uint8_t bMapAutoRotateMp : 1; // 0x79(0x1), Mask(0x1)
	uint8_t BitPad_0x79_1 : 7; // 0x79(0x1)
	uint8_t Pad_0x7A[0x6]; // 0x7A(0x6)


	// Object: Function GPGlobalDefines.ClientSolSetting.SaveDataConfig
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xad48440
	// Params: [ Num(0) Size(0x0) ]
	void SaveDataConfig();

	// Object: Function GPGlobalDefines.ClientSolSetting.ResetToDefault
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xad48384
	// Params: [ Num(1) Size(0x10) ]
	void ResetToDefault(const struct TArray<struct FString>& ResetPanelList);

	// Object: Function GPGlobalDefines.ClientSolSetting.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf6d9bcc
	// Params: [ Num(2) Size(0x10) ]
	static struct UClientSolSetting* Get(struct UObject* WorldContextObject);
	DEFINE_UE_CLASS_HELPERS(UClientSolSetting, "ClientSolSetting")

};

// Object: Class GPGlobalDefines.RankingListSetting
// Size: 0x38 (Inherited: 0x30)
struct URankingListSetting : UEngineSubsystem
{
	uint8_t bIsShowRedPoint : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)


	// Object: Function GPGlobalDefines.RankingListSetting.SaveDataConfig
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xad485b8
	// Params: [ Num(0) Size(0x0) ]
	void SaveDataConfig();

	// Object: Function GPGlobalDefines.RankingListSetting.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf6103d8
	// Params: [ Num(2) Size(0x10) ]
	static struct URankingListSetting* Get(struct UObject* WorldContextObject);
	DEFINE_UE_CLASS_HELPERS(URankingListSetting, "RankingListSetting")

};

// Object: Class GPGlobalDefines.ClientHeroPreferenceSetting
// Size: 0x48 (Inherited: 0x30)
struct UClientHeroPreferenceSetting : UEngineSubsystem
{
	uint8_t bC302_RushLimitedFourDirs : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t bC302_RushSkillInputDir : 1; // 0x31(0x1), Mask(0x1)
	uint8_t BitPad_0x31_1 : 7; // 0x31(0x1)
	uint8_t bEnableSwipeSlidingTackleJump : 1; // 0x32(0x1), Mask(0x1)
	uint8_t BitPad_0x32_1 : 7; // 0x32(0x1)
	uint8_t bReleaseSmokeScreenOnDoubleClick : 1; // 0x33(0x1), Mask(0x1)
	uint8_t BitPad_0x33_1 : 7; // 0x33(0x1)
	uint8_t bReleaseStreamOnDoubleClick : 1; // 0x34(0x1), Mask(0x1)
	uint8_t BitPad_0x34_1 : 7; // 0x34(0x1)
	uint8_t bTrapInteractionBasedScreenPos : 1; // 0x35(0x1), Mask(0x1)
	uint8_t BitPad_0x35_1 : 7; // 0x35(0x1)
	uint8_t Pad_0x36[0x2]; // 0x36(0x2)
	float C402_MissleSensitivity; // 0x38(0x4)
	uint8_t bGuardInteractionBasedScreenPos : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t BitPad_0x3C_1 : 7; // 0x3C(0x1)
	uint8_t bReleaseSmokeOnDoubleClick : 1; // 0x3D(0x1), Mask(0x1)
	uint8_t BitPad_0x3D_1 : 7; // 0x3D(0x1)
	uint8_t bC304_RollLimitedFourDirs : 1; // 0x3E(0x1), Mask(0x1)
	uint8_t BitPad_0x3E_1 : 7; // 0x3E(0x1)
	uint8_t bC304_RollSkillInputDir : 1; // 0x3F(0x1), Mask(0x1)
	uint8_t BitPad_0x3F_1 : 7; // 0x3F(0x1)
	float C203_DroneSensitivity; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)


	// Object: Function GPGlobalDefines.ClientHeroPreferenceSetting.SaveDataConfig
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xad4869c
	// Params: [ Num(0) Size(0x0) ]
	void SaveDataConfig();

	// Object: Function GPGlobalDefines.ClientHeroPreferenceSetting.ResetToDefault
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xad485e0
	// Params: [ Num(1) Size(0x10) ]
	void ResetToDefault(const struct TArray<struct FString>& ResetPanelList);

	// Object: Function GPGlobalDefines.ClientHeroPreferenceSetting.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x10904c7c
	// Params: [ Num(2) Size(0x10) ]
	static struct UClientHeroPreferenceSetting* Get(struct UObject* WorldContextObject);
	DEFINE_UE_CLASS_HELPERS(UClientHeroPreferenceSetting, "ClientHeroPreferenceSetting")

};

// Object: Class GPGlobalDefines.ClientCustomCrossHairSetting
// Size: 0x80 (Inherited: 0x30)
struct UClientCustomCrossHairSetting : UEngineSubsystem
{
	uint8_t bUseCustomCrossHair : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t bHideCustomCrossHairWhenRunning : 1; // 0x31(0x1), Mask(0x1)
	uint8_t BitPad_0x31_1 : 7; // 0x31(0x1)
	uint8_t Pad_0x32[0x2]; // 0x32(0x2)
	int32_t CustomCrossHairStyle; // 0x34(0x4)
	uint8_t bShowCustomCrossHairMoveDelta : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x3]; // 0x39(0x3)
	float MoveDeltaCustomCrossHairFactor; // 0x3C(0x4)
	uint8_t bShowCustomCrossHairFireDelta : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t Pad_0x41[0x3]; // 0x41(0x3)
	float FireDeltaCustomCrossHairFactor; // 0x44(0x4)
	uint8_t bAffectedByWeapon : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x3]; // 0x49(0x3)
	int32_t CustomCrossHairCategory; // 0x4C(0x4)
	int32_t CustomCrossHairColor; // 0x50(0x4)
	float CustomCrossHairOuterLength; // 0x54(0x4)
	float CustomCrossHairOuterThickness; // 0x58(0x4)
	float CustomCrossHairOuterSpacing; // 0x5C(0x4)
	float CustomCrossHairOuterOpacity; // 0x60(0x4)
	uint8_t bCustomCrossHairOutline : 1; // 0x64(0x1), Mask(0x1)
	uint8_t BitPad_0x64_1 : 7; // 0x64(0x1)
	uint8_t Pad_0x65[0x3]; // 0x65(0x3)
	float CustomCrossHairOutlineThickness; // 0x68(0x4)
	uint8_t bCustomCrossHairCenterPoint : 1; // 0x6C(0x1), Mask(0x1)
	uint8_t BitPad_0x6C_1 : 7; // 0x6C(0x1)
	uint8_t Pad_0x6D[0x3]; // 0x6D(0x3)
	float CustomCrossHairCenterPointOpacity; // 0x70(0x4)
	float CustomCrossHairCenterPointThickness; // 0x74(0x4)
	uint8_t bUseCustomCrossHairForAbilityItem : 1; // 0x78(0x1), Mask(0x1)
	uint8_t BitPad_0x78_1 : 7; // 0x78(0x1)
	uint8_t Pad_0x79[0x7]; // 0x79(0x7)


	// Object: Function GPGlobalDefines.ClientCustomCrossHairSetting.SaveDataConfig
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xad487ec
	// Params: [ Num(0) Size(0x0) ]
	void SaveDataConfig();

	// Object: Function GPGlobalDefines.ClientCustomCrossHairSetting.ResetToDefault
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xad48730
	// Params: [ Num(1) Size(0x10) ]
	void ResetToDefault(const struct TArray<struct FString>& ResetPanelList);

	// Object: Function GPGlobalDefines.ClientCustomCrossHairSetting.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x106fbd5c
	// Params: [ Num(2) Size(0x10) ]
	static struct UClientCustomCrossHairSetting* Get(struct UObject* WorldContextObject);
	DEFINE_UE_CLASS_HELPERS(UClientCustomCrossHairSetting, "ClientCustomCrossHairSetting")

};

// Object: Class GPGlobalDefines.AdvancedVideoSetting
// Size: 0x90 (Inherited: 0x30)
struct UAdvancedVideoSetting : UEngineSubsystem
{
	uint8_t Pad_0x30[0x58]; // 0x30(0x58)
	struct UDataTable* ParamSettings; // 0x88(0x8)


	// Object: Function GPGlobalDefines.AdvancedVideoSetting.SetRayTracingEnable
	// Flags: [Final|Native|Private]
	// Offset: 0xad4c72c
	// Params: [ Num(1) Size(0x1) ]
	void SetRayTracingEnable(uint8_t bEnabled);

	// Object: Function GPGlobalDefines.AdvancedVideoSetting.SetParamGroupQuality
	// Flags: [Final|Native|Private]
	// Offset: 0xad4c5f8
	// Params: [ Num(2) Size(0x14) ]
	void SetParamGroupQuality(struct FString GroupName, int32_t Level);

	// Object: Function GPGlobalDefines.AdvancedVideoSetting.IsRayTracingSupported
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xad4c5c0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsRayTracingSupported();

	// Object: Function GPGlobalDefines.AdvancedVideoSetting.IsRayTracingRealEnabled
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xad4c588
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsRayTracingRealEnabled();

	// Object: Function GPGlobalDefines.AdvancedVideoSetting.IsRayTracingEnabled
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xad4c550
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsRayTracingEnabled();

	// Object: Function GPGlobalDefines.AdvancedVideoSetting.GetParamQualityValue
	// Flags: [Final|Native|Private]
	// Offset: 0xad4c434
	// Params: [ Num(3) Size(0x20) ]
	struct FString GetParamQualityValue(struct FName RowName, int32_t Level);

	// Object: Function GPGlobalDefines.AdvancedVideoSetting.Get
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0xad4c390
	// Params: [ Num(2) Size(0x10) ]
	static struct UAdvancedVideoSetting* Get(struct UObject* WorldContextObject);
	DEFINE_UE_CLASS_HELPERS(UAdvancedVideoSetting, "AdvancedVideoSetting")

};

// Object: Class GPGlobalDefines.ClientBaseSettingHD
// Size: 0x60 (Inherited: 0x40)
struct UClientBaseSettingHD : UClientSettingHelperHD
{
	struct FString DataTableGUID; // 0x40(0x10)
	struct FMulticastInlineDelegate OnSettingHD; // 0x50(0x10)


	// Object: Function GPGlobalDefines.ClientBaseSettingHD.SettingHD
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xad4cd70
	// Params: [ Num(1) Size(0x10) ]
	void SettingHD(const struct TArray<struct FString>& Args);

	// Object: Function GPGlobalDefines.ClientBaseSettingHD.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xad4cccc
	// Params: [ Num(2) Size(0x10) ]
	static struct UClientBaseSettingHD* Get(struct UObject* WorldContextObject);
	DEFINE_UE_CLASS_HELPERS(UClientBaseSettingHD, "ClientBaseSettingHD")

};

// Object: Class GPGlobalDefines.ClientSensitivitySettingHD
// Size: 0x180 (Inherited: 0x40)
struct UClientSensitivitySettingHD : UClientSettingHelperHD
{
	float MDV; // 0x40(0x4)
	float BaseADSSensitivity; // 0x44(0x4)
	float BaseSensitivity; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct TArray<struct FWeaponZoomDataHD> ZoomDataHD; // 0x50(0x10)
	uint8_t bUseCustomADS : 1; // 0x60(0x1), Mask(0x1)
	uint8_t BitPad_0x60_1 : 7; // 0x60(0x1)
	uint8_t Pad_0x61[0x3]; // 0x61(0x3)
	int32_t MDVSwitchingMode; // 0x64(0x4)
	int32_t SideAimingSwitchMode; // 0x68(0x4)
	uint8_t TestSwitcher : 1; // 0x6C(0x1), Mask(0x1)
	uint8_t BitPad_0x6C_1 : 7; // 0x6C(0x1)
	uint8_t Pad_0x6D[0x3]; // 0x6D(0x3)
	struct FString ZoomDataTableGUID; // 0x70(0x10)
	float UISensitivity; // 0x80(0x4)
	float HorizontalSensitivity; // 0x84(0x4)
	float VerticalSensitivity; // 0x88(0x4)
	float AimHorizontalSensitivity; // 0x8C(0x4)
	float AimVerticalSensitivity; // 0x90(0x4)
	ESensitivityModeHD SensitivityMode; // 0x94(0x1)
	uint8_t Pad_0x95[0x3]; // 0x95(0x3)
	struct TArray<struct FZoomratedDataHD> ZoomratedMDV; // 0x98(0x10)
	ESideAimingControlMode SideAimingControlMode; // 0xA8(0x1)
	uint8_t bAllVerticalMMReversed : 1; // 0xA9(0x1), Mask(0x1)
	uint8_t BitPad_0xA9_1 : 7; // 0xA9(0x1)
	uint8_t bInfantryVerticalMMReversed : 1; // 0xAA(0x1), Mask(0x1)
	uint8_t BitPad_0xAA_1 : 7; // 0xAA(0x1)
	uint8_t bVehicleVerticalMMReversed : 1; // 0xAB(0x1), Mask(0x1)
	uint8_t BitPad_0xAB_1 : 7; // 0xAB(0x1)
	uint8_t bHelicopterVerticalMMReversed : 1; // 0xAC(0x1), Mask(0x1)
	uint8_t BitPad_0xAC_1 : 7; // 0xAC(0x1)
	uint8_t bGunnerVerticalMMReversed : 1; // 0xAD(0x1), Mask(0x1)
	uint8_t BitPad_0xAD_1 : 7; // 0xAD(0x1)
	uint8_t bSceneFOVCalcOpenCameraFOV : 1; // 0xAE(0x1), Mask(0x1)
	uint8_t BitPad_0xAE_1 : 7; // 0xAE(0x1)
	uint8_t Pad_0xAF[0x1]; // 0xAF(0x1)
	float GamepadMDV; // 0xB0(0x4)
	float BaseGamepadADSSensitivity; // 0xB4(0x4)
	float BaseGamepadSensitivity; // 0xB8(0x4)
	uint8_t Pad_0xBC[0x4]; // 0xBC(0x4)
	struct TArray<struct FWeaponZoomDataHD> GamepadZoomDataHD; // 0xC0(0x10)
	uint8_t bUseGamepadCustomADS : 1; // 0xD0(0x1), Mask(0x1)
	uint8_t BitPad_0xD0_1 : 7; // 0xD0(0x1)
	uint8_t Pad_0xD1[0x3]; // 0xD1(0x3)
	int32_t GamepadMDVSwitchingMode; // 0xD4(0x4)
	struct FString GamepadZoomDataTableGUID; // 0xD8(0x10)
	float HorizontalGamepadSensitivity; // 0xE8(0x4)
	float VerticalGamepadSensitivity; // 0xEC(0x4)
	float AimHorizontalGamepadSensitivity; // 0xF0(0x4)
	float AimVerticalGamepadSensitivity; // 0xF4(0x4)
	ESensitivityModeHD GamepadSensitivityMode; // 0xF8(0x1)
	uint8_t Pad_0xF9[0x7]; // 0xF9(0x7)
	struct TArray<struct FZoomratedDataHD> GamepadZoomratedMDV; // 0x100(0x10)
	uint8_t bAllVerticalMMReversedGamepad : 1; // 0x110(0x1), Mask(0x1)
	uint8_t BitPad_0x110_1 : 7; // 0x110(0x1)
	uint8_t bInfantryVerticalMMReversedGamepad : 1; // 0x111(0x1), Mask(0x1)
	uint8_t BitPad_0x111_1 : 7; // 0x111(0x1)
	uint8_t bVehicleVerticalMMReversedGamepad : 1; // 0x112(0x1), Mask(0x1)
	uint8_t BitPad_0x112_1 : 7; // 0x112(0x1)
	uint8_t bHelicopterVerticalMMReversedGamepad : 1; // 0x113(0x1), Mask(0x1)
	uint8_t BitPad_0x113_1 : 7; // 0x113(0x1)
	uint8_t bGunnerVerticalMMReversedGamepad : 1; // 0x114(0x1), Mask(0x1)
	uint8_t BitPad_0x114_1 : 7; // 0x114(0x1)
	EGamepadSensitivityCurveType GamepadSensitivityCurveType; // 0x115(0x1)
	uint8_t Pad_0x116[0x2]; // 0x116(0x2)
	struct FGamepadExtraSensitivityDataHD ExtraSensitivityDataHD; // 0x118(0x10)
	struct FGamepadExtraSensitivityDataHD ADSExtraSensitivityDataHD; // 0x128(0x10)
	struct FGamepadThumbRestrictDataHD GamepadRightThumbRestrictDataHD; // 0x138(0xC)
	struct FGamepadThumbRestrictDataHD GamepadLeftThumbRestrictDataHD; // 0x144(0xC)
	int32_t GamepadSensitivityPresetMode; // 0x150(0x4)
	uint8_t bEnableScopeCustom : 1; // 0x154(0x1), Mask(0x1)
	uint8_t BitPad_0x154_1 : 7; // 0x154(0x1)
	uint8_t Pad_0x155[0x3]; // 0x155(0x3)
	float GamepadTriggerThresholdLeft; // 0x158(0x4)
	float GamepadTriggerThresholdRight; // 0x15C(0x4)
	ESideAimingControlMode SideAimingGamePadControlMode; // 0x160(0x1)
	EGPInputType CurrentInputType; // 0x161(0x1)
	uint8_t Pad_0x162[0x6]; // 0x162(0x6)
	struct FMulticastInlineDelegate OnSideAimingControlModeChanged; // 0x168(0x10)
	float AnalogCursorDeadZone; // 0x178(0x4)
	float AnalogCursorSpeed; // 0x17C(0x4)


	// Object: Function GPGlobalDefines.ClientSensitivitySettingHD.SetZoomratedMDVByIndex
	// Flags: [Final|Native|Public]
	// Offset: 0xad4d668
	// Params: [ Num(3) Size(0x9) ]
	void SetZoomratedMDVByIndex(int32_t Index, float Value, uint8_t bIsGamepad);

	// Object: Function GPGlobalDefines.ClientSensitivitySettingHD.SetSideAimingControlModeByInputType
	// Flags: [Final|Native|Public]
	// Offset: 0xad4d544
	// Params: [ Num(3) Size(0x3) ]
	void SetSideAimingControlModeByInputType(ESideAimingControlMode InMode, EGPInputType InputType, uint8_t bCallUpdateCallBack);

	// Object: Function GPGlobalDefines.ClientSensitivitySettingHD.SetSideAimingControlMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xad4d4a0
	// Params: [ Num(1) Size(0x1) ]
	void SetSideAimingControlMode(ESideAimingControlMode InMode);

	// Object: Function GPGlobalDefines.ClientSensitivitySettingHD.SetCurrentInputType
	// Flags: [Final|Native|Public]
	// Offset: 0xad4d3b8
	// Params: [ Num(2) Size(0x2) ]
	void SetCurrentInputType(EGPInputType InputType, uint8_t bCallUpdateCallBack);

	// Object: Function GPGlobalDefines.ClientSensitivitySettingHD.SetADSSensitivityByIndex
	// Flags: [Final|Native|Public]
	// Offset: 0xad4d258
	// Params: [ Num(4) Size(0xD) ]
	void SetADSSensitivityByIndex(int32_t Index, int32_t SubIndex, float Value, uint8_t bIsGamepad);

	// Object: Function GPGlobalDefines.ClientSensitivitySettingHD.GetZoomratedMDVByIndex
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xad4d16c
	// Params: [ Num(3) Size(0xC) ]
	float GetZoomratedMDVByIndex(int32_t Index, uint8_t bIsGamepad);

	// Object: Function GPGlobalDefines.ClientSensitivitySettingHD.GetPresetValueByType
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xad4d034
	// Params: [ Num(3) Size(0x58) ]
	float GetPresetValueByType(const struct TMap<EGamepadSensitivityPresetType, float>& Map, EGamepadSensitivityPresetType Type);

	// Object: Function GPGlobalDefines.ClientSensitivitySettingHD.GetCustomADSSensitivityByIndex
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xad4cf0c
	// Params: [ Num(4) Size(0x10) ]
	float GetCustomADSSensitivityByIndex(int32_t Index, int32_t SubIndex, uint8_t bIsGamepad);

	// Object: Function GPGlobalDefines.ClientSensitivitySettingHD.GetCurrentSideAimingControlMode
	// Flags: [Final|Native|Public]
	// Offset: 0xad4ced8
	// Params: [ Num(1) Size(0x1) ]
	ESideAimingControlMode GetCurrentSideAimingControlMode();

	// Object: Function GPGlobalDefines.ClientSensitivitySettingHD.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xad4ce34
	// Params: [ Num(2) Size(0x10) ]
	static struct UClientSensitivitySettingHD* Get(struct UObject* WorldContextObject);
	DEFINE_UE_CLASS_HELPERS(UClientSensitivitySettingHD, "ClientSensitivitySettingHD")

};

// Object: Class GPGlobalDefines.ClientCameraSettingHD
// Size: 0x48 (Inherited: 0x40)
struct UClientCameraSettingHD : UClientSettingHelperHD
{
	float FPPViewRange; // 0x40(0x4)
	float BasicFovForScale; // 0x44(0x4)


	// Object: Function GPGlobalDefines.ClientCameraSettingHD.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xad4d944
	// Params: [ Num(2) Size(0x10) ]
	static struct UClientCameraSettingHD* Get(struct UObject* WorldContextObject);
	DEFINE_UE_CLASS_HELPERS(UClientCameraSettingHD, "ClientCameraSettingHD")

};

// Object: Class GPGlobalDefines.ClientVideoSettingHD
// Size: 0x1D8 (Inherited: 0x40)
struct UClientVideoSettingHD : UClientSettingHelperHD
{
	uint8_t Pad_0x40[0x30]; // 0x40(0x30)
	int32_t DisplayMode; // 0x70(0x4)
	int32_t Resolution; // 0x74(0x4)
	int32_t ResolutionX; // 0x78(0x4)
	int32_t ResolutionY; // 0x7C(0x4)
	int32_t AntiAliasingMethod; // 0x80(0x4)
	int32_t SuperResolutionMethod; // 0x84(0x4)
	int32_t SuperResolutionQualityDLSS; // 0x88(0x4)
	int32_t SuperResolutionQualityTSR; // 0x8C(0x4)
	int32_t SuperResolutionQualityFSR2; // 0x90(0x4)
	int32_t SuperResolutionQualityFSR3; // 0x94(0x4)
	int32_t SuperResolutionQualityXESS; // 0x98(0x4)
	uint8_t DLSSFrameGeneration : 1; // 0x9C(0x1), Mask(0x1)
	uint8_t BitPad_0x9C_1 : 7; // 0x9C(0x1)
	uint8_t FSR3FrameGeneration : 1; // 0x9D(0x1), Mask(0x1)
	uint8_t BitPad_0x9D_1 : 7; // 0x9D(0x1)
	uint8_t NVIDIAReflex : 1; // 0x9E(0x1), Mask(0x1)
	uint8_t BitPad_0x9E_1 : 7; // 0x9E(0x1)
	uint8_t Pad_0x9F[0x1]; // 0x9F(0x1)
	int32_t NVIDIAReflexMode; // 0xA0(0x4)
	uint8_t FastSync : 1; // 0xA4(0x1), Mask(0x1)
	uint8_t BitPad_0xA4_1 : 7; // 0xA4(0x1)
	uint8_t Pad_0xA5[0x3]; // 0xA5(0x3)
	int32_t RayTracingQuality; // 0xA8(0x4)
	int32_t RayTracingGlobalIllumination; // 0xAC(0x4)
	int32_t RayTracingReflections; // 0xB0(0x4)
	int32_t RayTracingAmbientOcclusion; // 0xB4(0x4)
	int32_t RayTracingShadows; // 0xB8(0x4)
	uint8_t bWorldMotionBlur : 1; // 0xBC(0x1), Mask(0x1)
	uint8_t BitPad_0xBC_1 : 7; // 0xBC(0x1)
	uint8_t bWeaponMotionBlur : 1; // 0xBD(0x1), Mask(0x1)
	uint8_t BitPad_0xBD_1 : 7; // 0xBD(0x1)
	uint8_t Pad_0xBE[0x2]; // 0xBE(0x2)
	int32_t MotionBlurQuality; // 0xC0(0x4)
	int32_t ReflectionQuality; // 0xC4(0x4)
	int32_t TextureFilteringQuality; // 0xC8(0x4)
	int32_t AmbientOcclusionQuality; // 0xCC(0x4)
	int32_t ParticleQuality; // 0xD0(0x4)
	int32_t DistortionQuality; // 0xD4(0x4)
	int32_t SceneDetailLevel; // 0xD8(0x4)
	int32_t ViewDistanceLevel; // 0xDC(0x4)
	uint8_t VSync : 1; // 0xE0(0x1), Mask(0x1)
	uint8_t BitPad_0xE0_1 : 7; // 0xE0(0x1)
	uint8_t bDepthOfFieldADS : 1; // 0xE1(0x1), Mask(0x1)
	uint8_t BitPad_0xE1_1 : 7; // 0xE1(0x1)
	uint8_t bDepthOfFieldADSRuntime : 1; // 0xE2(0x1), Mask(0x1)
	uint8_t BitPad_0xE2_1 : 7; // 0xE2(0x1)
	uint8_t Pad_0xE3[0x1]; // 0xE3(0x1)
	int32_t Brightness; // 0xE4(0x4)
	int32_t ShadingQuality; // 0xE8(0x4)
	int32_t TextureQuality; // 0xEC(0x4)
	int32_t StreamingQuality; // 0xF0(0x4)
	int32_t ShadowQuality; // 0xF4(0x4)
	int32_t ShadowMapResolution; // 0xF8(0x4)
	int32_t PostProcessQuality; // 0xFC(0x4)
	int32_t FoliageQuality; // 0x100(0x4)
	int32_t AnimationQuality; // 0x104(0x4)
	int32_t GraphicsPreset; // 0x108(0x4)
	uint8_t Pad_0x10C[0x4]; // 0x10C(0x4)
	struct FString MonitorID; // 0x110(0x10)
	int32_t AdapterID; // 0x120(0x4)
	int32_t RefreshRate; // 0x124(0x4)
	int32_t MaxFPS; // 0x128(0x4)
	int32_t MaxFPSFrontEnd; // 0x12C(0x4)
	int32_t MaxFPSBackground; // 0x130(0x4)
	int32_t RenderScale; // 0x134(0x4)
	int32_t VolumetricFogQuality; // 0x138(0x4)
	uint8_t Pad_0x13C[0x4]; // 0x13C(0x4)
	struct FString RecommandVersion; // 0x140(0x10)
	int32_t ViewportRatio; // 0x150(0x4)
	struct FIntPoint ViewportRatioValue; // 0x154(0x8)
	int32_t GameplayQuality; // 0x15C(0x4)
	int32_t Sharpen; // 0x160(0x4)
	int32_t GIQuality; // 0x164(0x4)
	int32_t ArtStyle; // 0x168(0x4)
	int32_t BenchmarkLevel; // 0x16C(0x4)
	int32_t CPUBenchmarkLevel; // 0x170(0x4)
	int32_t GPUBenchmarkLevel; // 0x174(0x4)
	int32_t RamBenchmarkLevel; // 0x178(0x4)
	int32_t VRamBenchmarkLevel; // 0x17C(0x4)
	float ScreenVibrates; // 0x180(0x4)
	struct FIntPoint RealViewportResolution; // 0x184(0x8)
	uint8_t bOnceGPUDriverWarning : 1; // 0x18C(0x1), Mask(0x1)
	uint8_t BitPad_0x18C_1 : 7; // 0x18C(0x1)
	uint8_t bScopeUseRT : 1; // 0x18D(0x1), Mask(0x1)
	uint8_t BitPad_0x18D_1 : 7; // 0x18D(0x1)
	uint8_t bEyesProtection : 1; // 0x18E(0x1), Mask(0x1)
	uint8_t BitPad_0x18E_1 : 7; // 0x18E(0x1)
	uint8_t bOnceReBarWarning : 1; // 0x18F(0x1), Mask(0x1)
	uint8_t BitPad_0x18F_1 : 7; // 0x18F(0x1)
	uint8_t bOnceGPUCrashDebuggingWarning : 1; // 0x190(0x1), Mask(0x1)
	uint8_t BitPad_0x190_1 : 7; // 0x190(0x1)
	uint8_t bAutoGPUCrashDebugging : 1; // 0x191(0x1), Mask(0x1)
	uint8_t BitPad_0x191_1 : 7; // 0x191(0x1)
	uint8_t Pad_0x192[0x2]; // 0x192(0x2)
	int32_t GPUCrashCount; // 0x194(0x4)
	int32_t GPUCrashReportCount; // 0x198(0x4)
	uint8_t Pad_0x19C[0x4]; // 0x19C(0x4)
	int64_t GPUCrashTimeFirstRecord; // 0x1A0(0x8)
	struct FString GPUCrashDebuggingVersion; // 0x1A8(0x10)
	float GPUCoreFrequency; // 0x1B8(0x4)
	float GPUCoreTemperature; // 0x1BC(0x4)
	uint8_t Pad_0x1C0[0x2]; // 0x1C0(0x2)
	uint8_t LowMemoryMode : 1; // 0x1C2(0x1), Mask(0x1)
	uint8_t BitPad_0x1C2_1 : 7; // 0x1C2(0x1)
	uint8_t XESSFrameGeneration : 1; // 0x1C3(0x1), Mask(0x1)
	uint8_t BitPad_0x1C3_1 : 7; // 0x1C3(0x1)
	uint8_t XELL : 1; // 0x1C4(0x1), Mask(0x1)
	uint8_t BitPad_0x1C4_1 : 7; // 0x1C4(0x1)
	uint8_t Pad_0x1C5[0x3]; // 0x1C5(0x3)
	int32_t DLSSFrameGenerationRange; // 0x1C8(0x4)
	EDesktopRHIType RHIConfig; // 0x1CC(0x4)
	struct UDataTable* ResolutionVRamTable; // 0x1D0(0x8)


	// Object: Function GPGlobalDefines.ClientVideoSettingHD.ToggleWindowTitleBar
	// Flags: [Final|Native|Public]
	// Offset: 0xad4ec48
	// Params: [ Num(1) Size(0x1) ]
	void ToggleWindowTitleBar(uint8_t bEnable);

	// Object: Function GPGlobalDefines.ClientVideoSettingHD.Test
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xad4ec34
	// Params: [ Num(0) Size(0x0) ]
	static void Test();

	// Object: Function GPGlobalDefines.ClientVideoSettingHD.SetRHIType
	// Flags: [Final|Native|Public]
	// Offset: 0xad4eb90
	// Params: [ Num(1) Size(0x4) ]
	void SetRHIType(EDesktopRHIType Value);

	// Object: Function GPGlobalDefines.ClientVideoSettingHD.SetRefreshRate
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xad4eab8
	// Params: [ Num(2) Size(0x14) ]
	static void SetRefreshRate(struct FString MonitorID, int32_t InRate);

	// Object: Function GPGlobalDefines.ClientVideoSettingHD.SetMonitorResolution
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xad4e9a8
	// Params: [ Num(3) Size(0x18) ]
	static void SetMonitorResolution(struct FString MonitorID, int32_t Width, int32_t Height);

	// Object: Function GPGlobalDefines.ClientVideoSettingHD.SetGPUCrashDebuggingEnable
	// Flags: [Final|Native|Public]
	// Offset: 0xad4e8fc
	// Params: [ Num(1) Size(0x1) ]
	void SetGPUCrashDebuggingEnable(uint8_t bEnable);

	// Object: Function GPGlobalDefines.ClientVideoSettingHD.SetGamma
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xad4e82c
	// Params: [ Num(2) Size(0xC) ]
	static void SetGamma(struct UObject* WorldContext, float InGamma);

	// Object: Function GPGlobalDefines.ClientVideoSettingHD.ParsePresetCommandLine
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xad4e7f8
	// Params: [ Num(1) Size(0x4) ]
	static int32_t ParsePresetCommandLine();

	// Object: Function GPGlobalDefines.ClientVideoSettingHD.IsVideoSettingClampEnabled
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xad4e7c0
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsVideoSettingClampEnabled();

	// Object: Function GPGlobalDefines.ClientVideoSettingHD.IsGPUCrashDebuggingRealEnabled
	// Flags: [Final|Native|Public]
	// Offset: 0xad4e788
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsGPUCrashDebuggingRealEnabled();

	// Object: Function GPGlobalDefines.ClientVideoSettingHD.IsGPUCrashDebuggingEnabled
	// Flags: [Final|Native|Public]
	// Offset: 0xad4e750
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsGPUCrashDebuggingEnabled();

	// Object: Function GPGlobalDefines.ClientVideoSettingHD.GetSupportedRefreshRateList
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0xad4e5e8
	// Params: [ Num(4) Size(0x28) ]
	static struct TArray<int32_t> GetSupportedRefreshRateList(const struct TArray<struct FDisplayModeHD>& DisplayModes, int32_t Width, int32_t Height);

	// Object: Function GPGlobalDefines.ClientVideoSettingHD.GetPureResolutionList
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0xad4e4f8
	// Params: [ Num(2) Size(0x20) ]
	static struct TArray<struct FIntPoint> GetPureResolutionList(const struct TArray<struct FDisplayModeHD>& DisplayModes);

	// Object: Function GPGlobalDefines.ClientVideoSettingHD.GetMonitorInfos
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xad4e488
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FMonitorInfoHD> GetMonitorInfos();

	// Object: Function GPGlobalDefines.ClientVideoSettingHD.GetMonitorInfoByID
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0xad4e350
	// Params: [ Num(3) Size(0x89) ]
	static uint8_t GetMonitorInfoByID(struct FString MonitorID, struct FMonitorInfoHD& OutInfo);

	// Object: Function GPGlobalDefines.ClientVideoSettingHD.GetMinVRamForCurrentResolution
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0xad4e298
	// Params: [ Num(2) Size(0xC) ]
	float GetMinVRamForCurrentResolution(const struct FIntPoint& CurrentRes);

	// Object: Function GPGlobalDefines.ClientVideoSettingHD.GetDisplayModes
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xad4e19c
	// Params: [ Num(3) Size(0x28) ]
	static struct TArray<struct FDisplayModeHD> GetDisplayModes(int32_t AdapterID, struct FString MonitorID);

	// Object: Function GPGlobalDefines.ClientVideoSettingHD.GetCurrentRHIType
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xad4e168
	// Params: [ Num(1) Size(0x4) ]
	EDesktopRHIType GetCurrentRHIType();

	// Object: Function GPGlobalDefines.ClientVideoSettingHD.GetCurrentMonitorInfo
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xad4e00c
	// Params: [ Num(1) Size(0x78) ]
	static struct FMonitorInfoHD GetCurrentMonitorInfo();

	// Object: Function GPGlobalDefines.ClientVideoSettingHD.GetCurrentAdapter
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xad4df74
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetCurrentAdapter();

	// Object: Function GPGlobalDefines.ClientVideoSettingHD.GetAutoResolution
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0xad4de00
	// Params: [ Num(4) Size(0x24) ]
	static struct FIntPoint GetAutoResolution(int32_t AdapterID, struct FString MonitorID, int32_t WindowMode);

	// Object: Function GPGlobalDefines.ClientVideoSettingHD.GetApmGlobalQuality
	// Flags: [Final|Native|Public]
	// Offset: 0xad4ddcc
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetApmGlobalQuality();

	// Object: Function GPGlobalDefines.ClientVideoSettingHD.GetAdapterInfos
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xad4dd5c
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FAdapterInfoHD> GetAdapterInfos();

	// Object: Function GPGlobalDefines.ClientVideoSettingHD.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xad4dcb8
	// Params: [ Num(2) Size(0x10) ]
	static struct UClientVideoSettingHD* Get(struct UObject* WorldContextObject);

	// Object: Function GPGlobalDefines.ClientVideoSettingHD.GCAfterSeveralFrames
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xad4dbe8
	// Params: [ Num(2) Size(0xC) ]
	static void GCAfterSeveralFrames(struct UObject* WorldContext, int32_t InFrames);

	// Object: Function GPGlobalDefines.ClientVideoSettingHD.FetchDisplayModes
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xad4db54
	// Params: [ Num(1) Size(0x4) ]
	static void FetchDisplayModes(int32_t ChosenAdapter);

	// Object: Function GPGlobalDefines.ClientVideoSettingHD.ClearCachedDisplayModes
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xad4db40
	// Params: [ Num(0) Size(0x0) ]
	static void ClearCachedDisplayModes();

	// Object: Function GPGlobalDefines.ClientVideoSettingHD.ChangeMonitorByID
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xad4daa4
	// Params: [ Num(1) Size(0x10) ]
	static void ChangeMonitorByID(struct FString MonitorID);
	DEFINE_UE_CLASS_HELPERS(UClientVideoSettingHD, "ClientVideoSettingHD")

};

// Object: Class GPGlobalDefines.ClientVehicleSettingHD
// Size: 0x3F8 (Inherited: 0x40)
struct UClientVehicleSettingHD : UClientSettingHelperHD
{
	uint8_t CannonCamFollow : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t VehiclePlaneMouseReverse : 1; // 0x41(0x1), Mask(0x1)
	uint8_t BitPad_0x41_1 : 7; // 0x41(0x1)
	uint8_t Pad_0x42[0x6]; // 0x42(0x6)
	struct FVehicleSensitivityOuterSettingHD DriverWeaponSensitivity; // 0x48(0x58)
	struct FVehicleSensitivityOuterSettingHD HelicopterDriverWeaponSensitivity; // 0xA0(0x58)
	struct FVehicleSensitivityOuterSettingHD PassengerWeaponSensitivity; // 0xF8(0x58)
	struct FVehicleSensitivityOuterSettingHD JetSensitivity; // 0x150(0x58)
	struct FAxisSensitivitySettingHD JetAxisSensitivity; // 0x1A8(0x18)
	float FOVRatioTPP; // 0x1C0(0x4)
	uint8_t Pad_0x1C4[0x4]; // 0x1C4(0x4)
	struct FString ZoomDataTableGUID; // 0x1C8(0x10)
	struct FString ZoomDataTableGUID2; // 0x1D8(0x10)
	struct FString ZoomDataTableGUID3; // 0x1E8(0x10)
	struct FString ZoomDataTableGUID4; // 0x1F8(0x10)
	struct FString GamepadZoomDataTableGUID; // 0x208(0x10)
	struct FString GamepadZoomDataTableGUID2; // 0x218(0x10)
	struct FString GamepadZoomDataTableGUID3; // 0x228(0x10)
	struct FString GamepadZoomDataTableGUID4; // 0x238(0x10)
	uint8_t CannonCamFollowGamepad : 1; // 0x248(0x1), Mask(0x1)
	uint8_t BitPad_0x248_1 : 7; // 0x248(0x1)
	uint8_t Pad_0x249[0x7]; // 0x249(0x7)
	struct FVehicleSensitivityOuterSettingHD DriverWeaponSensitivityGamepad; // 0x250(0x58)
	struct FVehicleSensitivityOuterSettingHD HelicopterDriverWeaponSensitivityGamepad; // 0x2A8(0x58)
	struct FVehicleSensitivityOuterSettingHD PassengerWeaponSensitivityGamepad; // 0x300(0x58)
	struct FVehicleSensitivityOuterSettingHD JetSensitivityGamepad; // 0x358(0x58)
	struct FAxisSensitivitySettingHD JetAxisSensitivityGamepad; // 0x3B0(0x18)
	struct FAxisSensitivitySettingHD HelicopterDriverWeaponAxisSensitivity; // 0x3C8(0x18)
	struct FAxisSensitivitySettingHD HelicopterDriverWeaponAxisSensitivityGamepad; // 0x3E0(0x18)


	// Object: Function GPGlobalDefines.ClientVehicleSettingHD.SetZoomratedMDVByIndex
	// Flags: [Final|Native|Public]
	// Offset: 0xad4f734
	// Params: [ Num(4) Size(0xD) ]
	void SetZoomratedMDVByIndex(EMouseSensitivityMode MouseInputType, int32_t Index, float Value, uint8_t bIsGamepad);

	// Object: Function GPGlobalDefines.ClientVehicleSettingHD.SetADSSensitivityByIndex
	// Flags: [Final|Native|Public]
	// Offset: 0xad4f59c
	// Params: [ Num(5) Size(0x11) ]
	void SetADSSensitivityByIndex(EMouseSensitivityMode MouseInputType, int32_t Index, int32_t SubIndex, float Value, uint8_t bIsGamepad);

	// Object: Function GPGlobalDefines.ClientVehicleSettingHD.GetZoomratedMDVByIndex
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xad4f474
	// Params: [ Num(4) Size(0x10) ]
	float GetZoomratedMDVByIndex(EMouseSensitivityMode MouseInputType, int32_t Index, uint8_t bIsGamepad);

	// Object: Function GPGlobalDefines.ClientVehicleSettingHD.GetCustomADSSensitivityByIndex
	// Flags: [Final|Native|Public]
	// Offset: 0xad4f310
	// Params: [ Num(5) Size(0x14) ]
	float GetCustomADSSensitivityByIndex(EMouseSensitivityMode MouseInputType, int32_t Index, int32_t SubIndex, uint8_t bIsGamepad);

	// Object: Function GPGlobalDefines.ClientVehicleSettingHD.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xad4f26c
	// Params: [ Num(2) Size(0x10) ]
	static struct UClientVehicleSettingHD* Get(struct UObject* WorldContextObject);

	// Object: Function GPGlobalDefines.ClientVehicleSettingHD.ClearZoomratedMDV
	// Flags: [Final|Native|Public]
	// Offset: 0xad4f184
	// Params: [ Num(2) Size(0x2) ]
	void ClearZoomratedMDV(EMouseSensitivityMode MouseInputType, uint8_t bIsGamepad);

	// Object: Function GPGlobalDefines.ClientVehicleSettingHD.ClearZoomDataHD
	// Flags: [Final|Native|Public]
	// Offset: 0xad4f09c
	// Params: [ Num(2) Size(0x2) ]
	void ClearZoomDataHD(EMouseSensitivityMode MouseInputType, uint8_t bIsGamepad);

	// Object: Function GPGlobalDefines.ClientVehicleSettingHD.AddZoomratedMDV
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xad4ef6c
	// Params: [ Num(3) Size(0xD) ]
	void AddZoomratedMDV(EMouseSensitivityMode MouseInputType, const struct FZoomratedDataHD& ZoomDataHD, uint8_t bIsGamepad);

	// Object: Function GPGlobalDefines.ClientVehicleSettingHD.AddZoomDataHD
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xad4ee1c
	// Params: [ Num(3) Size(0x31) ]
	void AddZoomDataHD(EMouseSensitivityMode MouseInputType, const struct FWeaponZoomDataHD& ZoomDataHD, uint8_t bIsGamepad);
	DEFINE_UE_CLASS_HELPERS(UClientVehicleSettingHD, "ClientVehicleSettingHD")

};

// Object: Class GPGlobalDefines.ClientGameSettingHD
// Size: 0x138 (Inherited: 0x40)
struct UClientGameSettingHD : UClientSettingHelperHD
{
	uint8_t bRunBreakReload : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t bAutoUpRun : 1; // 0x41(0x1), Mask(0x1)
	uint8_t BitPad_0x41_1 : 7; // 0x41(0x1)
	uint8_t bAutoUpRunMP : 1; // 0x42(0x1), Mask(0x1)
	uint8_t BitPad_0x42_1 : 7; // 0x42(0x1)
	uint8_t bSeparateVault : 1; // 0x43(0x1), Mask(0x1)
	uint8_t BitPad_0x43_1 : 7; // 0x43(0x1)
	uint8_t bShareSpoilTeam : 1; // 0x44(0x1), Mask(0x1)
	uint8_t BitPad_0x44_1 : 7; // 0x44(0x1)
	uint8_t bShareSpoilAll : 1; // 0x45(0x1), Mask(0x1)
	uint8_t BitPad_0x45_1 : 7; // 0x45(0x1)
	uint8_t bAutoParachute : 1; // 0x46(0x1), Mask(0x1)
	uint8_t BitPad_0x46_1 : 7; // 0x46(0x1)
	EAirCraftScopeMode HelicopterScopeMode; // 0x47(0x1)
	EAirCraftScopeMode JetScopeMode; // 0x48(0x1)
	EAutoCrossMode AutoCrossMode; // 0x49(0x1)
	uint8_t bReloadBreakMirror : 1; // 0x4A(0x1), Mask(0x1)
	uint8_t BitPad_0x4A_1 : 7; // 0x4A(0x1)
	uint8_t bMixedLoading : 1; // 0x4B(0x1), Mask(0x1)
	uint8_t BitPad_0x4B_1 : 7; // 0x4B(0x1)
	uint8_t bAutoCancel : 1; // 0x4C(0x1), Mask(0x1)
	uint8_t BitPad_0x4C_1 : 7; // 0x4C(0x1)
	uint8_t bReloadOption : 1; // 0x4D(0x1), Mask(0x1)
	uint8_t BitPad_0x4D_1 : 7; // 0x4D(0x1)
	uint8_t bAutoThrow : 1; // 0x4E(0x1), Mask(0x1)
	uint8_t BitPad_0x4E_1 : 7; // 0x4E(0x1)
	uint8_t bVaultTriggerMode : 1; // 0x4F(0x1), Mask(0x1)
	uint8_t BitPad_0x4F_1 : 7; // 0x4F(0x1)
	uint8_t bSprintCloseBag : 1; // 0x50(0x1), Mask(0x1)
	uint8_t BitPad_0x50_1 : 7; // 0x50(0x1)
	uint8_t bCanMouseTurnMelee : 1; // 0x51(0x1), Mask(0x1)
	uint8_t BitPad_0x51_1 : 7; // 0x51(0x1)
	uint8_t bCanMouseTurnMelee_GamePad : 1; // 0x52(0x1), Mask(0x1)
	uint8_t BitPad_0x52_1 : 7; // 0x52(0x1)
	uint8_t bSwitchWeaponsIncludingBattlefieldProps_GamePad : 1; // 0x53(0x1), Mask(0x1)
	uint8_t BitPad_0x53_1 : 7; // 0x53(0x1)
	ESensitivityChangeMode SensitivityChangeMode; // 0x54(0x1)
	EHitEffectColor HitEffectColor; // 0x55(0x1)
	uint8_t bOpenFlagVoice : 1; // 0x56(0x1), Mask(0x1)
	uint8_t BitPad_0x56_1 : 7; // 0x56(0x1)
	uint8_t bRepairMerge : 1; // 0x57(0x1), Mask(0x1)
	uint8_t BitPad_0x57_1 : 7; // 0x57(0x1)
	uint8_t bCompleteArmorFirst : 1; // 0x58(0x1), Mask(0x1)
	uint8_t BitPad_0x58_1 : 7; // 0x58(0x1)
	uint8_t bOpenTextChatInGame : 1; // 0x59(0x1), Mask(0x1)
	uint8_t BitPad_0x59_1 : 7; // 0x59(0x1)
	uint8_t bCrossplay : 1; // 0x5A(0x1), Mask(0x1)
	uint8_t BitPad_0x5A_1 : 7; // 0x5A(0x1)
	ECrossplayType CrossplayType; // 0x5B(0x1)
	uint8_t bAutoMarkingTeammateWishItem : 1; // 0x5C(0x1), Mask(0x1)
	uint8_t BitPad_0x5C_1 : 7; // 0x5C(0x1)
	uint8_t Pad_0x5D[0x3]; // 0x5D(0x3)
	float RouletteColorA; // 0x60(0x4)
	float FlagColorA; // 0x64(0x4)
	uint8_t bDrugDurabilityLimited : 1; // 0x68(0x1), Mask(0x1)
	uint8_t BitPad_0x68_1 : 7; // 0x68(0x1)
	uint8_t Pad_0x69[0x3]; // 0x69(0x3)
	int32_t DrugDuration; // 0x6C(0x4)
	uint8_t bCanDisassembleGun : 1; // 0x70(0x1), Mask(0x1)
	uint8_t BitPad_0x70_1 : 7; // 0x70(0x1)
	uint8_t Pad_0x71[0x7]; // 0x71(0x7)
	struct FString SecondLanguage; // 0x78(0x10)
	uint8_t bMPSingleClickCreateLocMark : 1; // 0x88(0x1), Mask(0x1)
	uint8_t BitPad_0x88_1 : 7; // 0x88(0x1)
	uint8_t bSafeBoxPreferMarkItem : 1; // 0x89(0x1), Mask(0x1)
	uint8_t BitPad_0x89_1 : 7; // 0x89(0x1)
	uint8_t bSafeBoxPreferHighValueItem : 1; // 0x8A(0x1), Mask(0x1)
	uint8_t BitPad_0x8A_1 : 7; // 0x8A(0x1)
	uint8_t Pad_0x8B[0x1]; // 0x8B(0x1)
	int32_t SafeBoxPriceThreshold; // 0x8C(0x4)
	int32_t AutoPickupPriceThreshold; // 0x90(0x4)
	uint8_t bShareSpoils : 1; // 0x94(0x1), Mask(0x1)
	uint8_t BitPad_0x94_1 : 7; // 0x94(0x1)
	ELootSharing LootSharing; // 0x95(0x1)
	uint8_t bInventoryAutoNewline : 1; // 0x96(0x1), Mask(0x1)
	uint8_t BitPad_0x96_1 : 7; // 0x96(0x1)
	uint8_t bInventorySortEveryEnter : 1; // 0x97(0x1), Mask(0x1)
	uint8_t BitPad_0x97_1 : 7; // 0x97(0x1)
	uint8_t bAutoHoldBreathOnZoom : 1; // 0x98(0x1), Mask(0x1)
	uint8_t BitPad_0x98_1 : 7; // 0x98(0x1)
	EScopeOpenMode SideAimOpenMode; // 0x99(0x1)
	uint8_t bSceneFOVCalcOpenCameraFOV : 1; // 0x9A(0x1), Mask(0x1)
	uint8_t BitPad_0x9A_1 : 7; // 0x9A(0x1)
	uint8_t bAirVehicleAutoBalanceAssist : 1; // 0x9B(0x1), Mask(0x1)
	uint8_t BitPad_0x9B_1 : 7; // 0x9B(0x1)
	uint8_t bFixedWingTPP : 1; // 0x9C(0x1), Mask(0x1)
	uint8_t BitPad_0x9C_1 : 7; // 0x9C(0x1)
	uint8_t bEnableGamepadRumble : 1; // 0x9D(0x1), Mask(0x1)
	uint8_t BitPad_0x9D_1 : 7; // 0x9D(0x1)
	uint8_t bEnableAdaptiveTrigger : 1; // 0x9E(0x1), Mask(0x1)
	uint8_t BitPad_0x9E_1 : 7; // 0x9E(0x1)
	uint8_t bEnablePS5AdaptiveTrigger : 1; // 0x9F(0x1), Mask(0x1)
	uint8_t BitPad_0x9F_1 : 7; // 0x9F(0x1)
	int32_t MovementTypeInBackpackUI; // 0xA0(0x4)
	int32_t MovementTypeInMapUI; // 0xA4(0x4)
	uint8_t bAimAssistorGamepad : 1; // 0xA8(0x1), Mask(0x1)
	uint8_t BitPad_0xA8_1 : 7; // 0xA8(0x1)
	uint8_t bEnableLBRBtoRBRT : 1; // 0xA9(0x1), Mask(0x1)
	uint8_t BitPad_0xA9_1 : 7; // 0xA9(0x1)
	uint8_t bEnableBreath : 1; // 0xAA(0x1), Mask(0x1)
	uint8_t BitPad_0xAA_1 : 7; // 0xAA(0x1)
	uint8_t Pad_0xAB[0x5]; // 0xAB(0x5)
	struct FMulticastInlineDelegate OnCloseSystemSetting_HD; // 0xB0(0x10)
	struct FMulticastInlineDelegate OnMixLoadingChange; // 0xC0(0x10)
	struct FMulticastInlineDelegate OnReloadOptionChange; // 0xD0(0x10)
	uint8_t bScopeOpenAutoPeek_Gamepad : 1; // 0xE0(0x1), Mask(0x1)
	uint8_t BitPad_0xE0_1 : 7; // 0xE0(0x1)
	EScopeOpenMode PeekOpenMode_Gamepad; // 0xE1(0x1)
	uint8_t Pad_0xE2[0x2]; // 0xE2(0x2)
	int32_t Sprint_ActionLogic_Gamepad; // 0xE4(0x4)
	int32_t ToggleAiming_ActionLogic_Gamepad; // 0xE8(0x4)
	int32_t Rescue_ActionLogic_Gamepad; // 0xEC(0x4)
	int32_t AbandonRescue_ActionLogic_Gamepad; // 0xF0(0x4)
	int32_t AutoSprintType_Gamepad; // 0xF4(0x4)
	int32_t SideAimType_Gamepad; // 0xF8(0x4)
	int32_t SuperSprintsSwitch_Gamepad; // 0xFC(0x4)
	int32_t SlideDiveTrigger_Gamepad; // 0x100(0x4)
	int32_t ToggleVehicleAiming_Gamepad; // 0x104(0x4)
	int32_t ToggleJetAiming_Gamepad; // 0x108(0x4)
	uint8_t bSwitchWeaponContainMelee_Gamepad : 1; // 0x10C(0x1), Mask(0x1)
	uint8_t BitPad_0x10C_1 : 7; // 0x10C(0x1)
	EGamepadReloadInteractMode ReloadInteractMode_Gamepad; // 0x10D(0x1)
	ERoletteItemNums SOLMarkingRouletteUseItem; // 0x10E(0x1)
	ERoletteStyle SOLMarkingRouletteStyle; // 0x10F(0x1)
	struct TArray<EMarkingLocationType> SOLMarkingItems; // 0x110(0x10)
	struct TArray<EMarkingLocationType> SOLMarkingItemsFour; // 0x120(0x10)
	uint8_t bConfirmSettingDiff : 1; // 0x130(0x1), Mask(0x1)
	uint8_t BitPad_0x130_1 : 7; // 0x130(0x1)
	uint8_t Pad_0x131[0x7]; // 0x131(0x7)


	// Object: Function GPGlobalDefines.ClientGameSettingHD.ResetChangeMarkItems
	// Flags: [Final|Native|Public]
	// Offset: 0xad4fb94
	// Params: [ Num(0) Size(0x0) ]
	void ResetChangeMarkItems();

	// Object: Function GPGlobalDefines.ClientGameSettingHD.NotifyCloseSystemSetting
	// Flags: [Final|Native|Public]
	// Offset: 0xad4fb80
	// Params: [ Num(0) Size(0x0) ]
	void NotifyCloseSystemSetting();

	// Object: Function GPGlobalDefines.ClientGameSettingHD.NotifyChangeReloadOption
	// Flags: [Final|Native|Public]
	// Offset: 0xad4fb6c
	// Params: [ Num(0) Size(0x0) ]
	void NotifyChangeReloadOption();

	// Object: Function GPGlobalDefines.ClientGameSettingHD.NotifyChangeMixLoading
	// Flags: [Final|Native|Public]
	// Offset: 0xad4fb58
	// Params: [ Num(0) Size(0x0) ]
	void NotifyChangeMixLoading();

	// Object: Function GPGlobalDefines.ClientGameSettingHD.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xad4fab4
	// Params: [ Num(2) Size(0x10) ]
	static struct UClientGameSettingHD* Get(struct UObject* WorldContextObject);

	// Object: Function GPGlobalDefines.ClientGameSettingHD.ChangeMarkItem
	// Flags: [Final|Native|Public]
	// Offset: 0xad4f9d4
	// Params: [ Num(2) Size(0x5) ]
	void ChangeMarkItem(int32_t Index, EMarkingLocationType Value);
	DEFINE_UE_CLASS_HELPERS(UClientGameSettingHD, "ClientGameSettingHD")

};

// Object: Class GPGlobalDefines.ClientDisplaySettingHD
// Size: 0x120 (Inherited: 0x40)
struct UClientDisplaySettingHD : UClientSettingHelperHD
{
	struct TMap<struct FName, int32_t> OptionalHUDPanelGHS; // 0x40(0x50)
	struct TMap<struct FName, uint8_t> OptionalHUDPanelSwitchers; // 0x90(0x50)
	uint8_t bEnablePickupDetailHUD : 1; // 0xE0(0x1), Mask(0x1)
	uint8_t BitPad_0xE0_1 : 7; // 0xE0(0x1)
	uint8_t Pad_0xE1[0x3]; // 0xE1(0x3)
	float InfantryVision; // 0xE4(0x4)
	float VehicleVision; // 0xE8(0x4)
	uint8_t bShowNickName : 1; // 0xEC(0x1), Mask(0x1)
	uint8_t BitPad_0xEC_1 : 7; // 0xEC(0x1)
	uint8_t Pad_0xED[0x3]; // 0xED(0x3)
	int32_t RouletteStyle; // 0xF0(0x4)
	int32_t CustomLayoutPreset; // 0xF4(0x4)
	ERoletteStyle SOLMarkingRouletteStyle; // 0xF8(0x1)
	uint8_t Pad_0xF9[0x3]; // 0xF9(0x3)
	float AirPlaneVision; // 0xFC(0x4)
	float MpMapScale; // 0x100(0x4)
	uint8_t bMapAutoRotateSol : 1; // 0x104(0x1), Mask(0x1)
	uint8_t BitPad_0x104_1 : 7; // 0x104(0x1)
	uint8_t bMapAutoRotateMp : 1; // 0x105(0x1), Mask(0x1)
	uint8_t BitPad_0x105_1 : 7; // 0x105(0x1)
	uint8_t bHurtCloseLootPanel : 1; // 0x106(0x1), Mask(0x1)
	uint8_t BitPad_0x106_1 : 7; // 0x106(0x1)
	uint8_t bSprintCloseLootPanel : 1; // 0x107(0x1), Mask(0x1)
	uint8_t BitPad_0x107_1 : 7; // 0x107(0x1)
	int32_t ReverseMapAndScore; // 0x108(0x4)
	uint8_t bReverseMapAndScoreWindowOpened : 1; // 0x10C(0x1), Mask(0x1)
	uint8_t BitPad_0x10C_1 : 7; // 0x10C(0x1)
	uint8_t Pad_0x10D[0x3]; // 0x10D(0x3)
	struct FString Culture; // 0x110(0x10)


	// Object: Function GPGlobalDefines.ClientDisplaySettingHD.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xad4ff34
	// Params: [ Num(2) Size(0x10) ]
	static struct UClientDisplaySettingHD* Get(struct UObject* WorldContextObject);
	DEFINE_UE_CLASS_HELPERS(UClientDisplaySettingHD, "ClientDisplaySettingHD")

};

// Object: Class GPGlobalDefines.ClientAudioSettingHD
// Size: 0xB8 (Inherited: 0x40)
struct UClientAudioSettingHD : UClientSettingHelperHD
{
	float VolumeAll; // 0x40(0x4)
	float Volume_Music; // 0x44(0x4)
	float Volume_SFX; // 0x48(0x4)
	float Volume_UI; // 0x4C(0x4)
	float Volume_VO; // 0x50(0x4)
	float Volume_CG; // 0x54(0x4)
	float Volume_GVoice; // 0x58(0x4)
	float Volume_Microphone; // 0x5C(0x4)
	float Volume_Mark; // 0x60(0x4)
	float Volume_MemberList; // 0x64(0x4)
	uint8_t bCopyrightMusicPlayback : 1; // 0x68(0x1), Mask(0x1)
	uint8_t BitPad_0x68_1 : 7; // 0x68(0x1)
	uint8_t Pad_0x69[0x3]; // 0x69(0x3)
	int32_t AudioDynamicRange; // 0x6C(0x4)
	int32_t AudioLevel; // 0x70(0x4)
	int32_t MicrophoneButtonType; // 0x74(0x4)
	int32_t SpeakingChanel; // 0x78(0x4)
	int32_t SpeakingChanel_Commander; // 0x7C(0x4)
	int32_t ListeningChanel; // 0x80(0x4)
	int32_t ListeningChanel_Commander; // 0x84(0x4)
	int32_t ThreeDAudioType; // 0x88(0x4)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
	struct FString AudioInputDevice; // 0x90(0x10)
	struct FString AudioOutputDevice; // 0xA0(0x10)
	uint8_t bMuteBackground : 1; // 0xB0(0x1), Mask(0x1)
	uint8_t BitPad_0xB0_1 : 7; // 0xB0(0x1)
	uint8_t bMultiOutput : 1; // 0xB1(0x1), Mask(0x1)
	uint8_t BitPad_0xB1_1 : 7; // 0xB1(0x1)
	uint8_t bOpenWarTapeMode : 1; // 0xB2(0x1), Mask(0x1)
	uint8_t BitPad_0xB2_1 : 7; // 0xB2(0x1)
	uint8_t bSOLImmersion : 1; // 0xB3(0x1), Mask(0x1)
	uint8_t BitPad_0xB3_1 : 7; // 0xB3(0x1)
	uint8_t Pad_0xB4[0x4]; // 0xB4(0x4)


	// Object: Function GPGlobalDefines.ClientAudioSettingHD.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xad50034
	// Params: [ Num(2) Size(0x10) ]
	static struct UClientAudioSettingHD* Get(struct UObject* WorldContextObject);
	DEFINE_UE_CLASS_HELPERS(UClientAudioSettingHD, "ClientAudioSettingHD")

};

// Object: Class GPGlobalDefines.ClientPrivacySettingHD
// Size: 0x48 (Inherited: 0x40)
struct UClientPrivacySettingHD : UClientSettingHelperHD
{
	uint8_t bInVisible : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t bLootingVisible : 1; // 0x41(0x1), Mask(0x1)
	uint8_t BitPad_0x41_1 : 7; // 0x41(0x1)
	uint8_t Pad_0x42[0x6]; // 0x42(0x6)


	// Object: Function GPGlobalDefines.ClientPrivacySettingHD.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xad5011c
	// Params: [ Num(2) Size(0x10) ]
	static struct UClientPrivacySettingHD* Get(struct UObject* WorldContextObject);
	DEFINE_UE_CLASS_HELPERS(UClientPrivacySettingHD, "ClientPrivacySettingHD")

};

// Object: Class GPGlobalDefines.ClientHeroPreferenceSettingHD
// Size: 0x50 (Inherited: 0x40)
struct UClientHeroPreferenceSettingHD : UClientSettingHelperHD
{
	uint8_t bC302_RushLimitedFourDirs : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t Pad_0x41[0x3]; // 0x41(0x3)
	float C402_MissleSensitivity; // 0x44(0x4)
	uint8_t bC304_RollLimitedFourDirs : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x3]; // 0x49(0x3)
	float C203_DroneSensitivity; // 0x4C(0x4)


	// Object: Function GPGlobalDefines.ClientHeroPreferenceSettingHD.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xad501e0
	// Params: [ Num(2) Size(0x10) ]
	static struct UClientHeroPreferenceSettingHD* Get(struct UObject* WorldContextObject);
	DEFINE_UE_CLASS_HELPERS(UClientHeroPreferenceSettingHD, "ClientHeroPreferenceSettingHD")

};

// Object: Class GPGlobalDefines.ClientCustomCrossHairSettingHD
// Size: 0x90 (Inherited: 0x40)
struct UClientCustomCrossHairSettingHD : UClientSettingHelperHD
{
	uint8_t bUseCustomCrossHair : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t bHideCustomCrossHairWhenRunning : 1; // 0x41(0x1), Mask(0x1)
	uint8_t BitPad_0x41_1 : 7; // 0x41(0x1)
	uint8_t Pad_0x42[0x2]; // 0x42(0x2)
	int32_t CustomCrossHairStyle; // 0x44(0x4)
	uint8_t bShowCustomCrossHairMoveDelta : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x3]; // 0x49(0x3)
	float MoveDeltaCustomCrossHairFactor; // 0x4C(0x4)
	uint8_t bShowCustomCrossHairFireDelta : 1; // 0x50(0x1), Mask(0x1)
	uint8_t BitPad_0x50_1 : 7; // 0x50(0x1)
	uint8_t Pad_0x51[0x3]; // 0x51(0x3)
	float FireDeltaCustomCrossHairFactor; // 0x54(0x4)
	uint8_t bAffectedByWeapon : 1; // 0x58(0x1), Mask(0x1)
	uint8_t BitPad_0x58_1 : 7; // 0x58(0x1)
	uint8_t Pad_0x59[0x3]; // 0x59(0x3)
	int32_t CustomCrossHairCategory; // 0x5C(0x4)
	int32_t CustomCrossHairColor; // 0x60(0x4)
	float CustomCrossHairOuterLength; // 0x64(0x4)
	float CustomCrossHairOuterThickness; // 0x68(0x4)
	float CustomCrossHairOuterSpacing; // 0x6C(0x4)
	float CustomCrossHairOuterOpacity; // 0x70(0x4)
	uint8_t bCustomCrossHairOutline : 1; // 0x74(0x1), Mask(0x1)
	uint8_t BitPad_0x74_1 : 7; // 0x74(0x1)
	uint8_t Pad_0x75[0x3]; // 0x75(0x3)
	float CustomCrossHairOutlineThickness; // 0x78(0x4)
	uint8_t bCustomCrossHairCenterPoint : 1; // 0x7C(0x1), Mask(0x1)
	uint8_t BitPad_0x7C_1 : 7; // 0x7C(0x1)
	uint8_t Pad_0x7D[0x3]; // 0x7D(0x3)
	float CustomCrossHairCenterPointOpacity; // 0x80(0x4)
	float CustomCrossHairCenterPointThickness; // 0x84(0x4)
	uint8_t bUseCustomCrossHairForAbilityItem : 1; // 0x88(0x1), Mask(0x1)
	uint8_t BitPad_0x88_1 : 7; // 0x88(0x1)
	uint8_t Pad_0x89[0x7]; // 0x89(0x7)


	// Object: Function GPGlobalDefines.ClientCustomCrossHairSettingHD.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xad502a4
	// Params: [ Num(2) Size(0x10) ]
	static struct UClientCustomCrossHairSettingHD* Get(struct UObject* WorldContextObject);
	DEFINE_UE_CLASS_HELPERS(UClientCustomCrossHairSettingHD, "ClientCustomCrossHairSettingHD")

};

// Object: Class GPGlobalDefines.ClientSystemSettingStats
// Size: 0x50 (Inherited: 0x50)
struct UClientSystemSettingStats : UGameStatsOnFetchBaseSystem
{	DEFINE_UE_CLASS_HELPERS(UClientSystemSettingStats, "ClientSystemSettingStats")

};

// Object: Class GPGlobalDefines.GPBaseMoveInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPBaseMoveInterface : IInterface
{	DEFINE_UE_CLASS_HELPERS(IGPBaseMoveInterface, "GPBaseMoveInterface")

};

// Object: Class GPGlobalDefines.GPCachePool
// Size: 0x40 (Inherited: 0x28)
struct UGPCachePool : UObject
{
	struct TArray<struct FCacheObjectInfo> CachedObjectArray; // 0x28(0x10)
	float CheckToDestroyTimeStep; // 0x38(0x4)
	float CheckElapsedTime; // 0x3C(0x4)


	// Object: Function GPGlobalDefines.GPCachePool.RemoveWaitingDestroyObject
	// Flags: [Final|Native|Public]
	// Offset: 0xad53988
	// Params: [ Num(1) Size(0x8) ]
	void RemoveWaitingDestroyObject(struct UObject* obj);

	// Object: Function GPGlobalDefines.GPCachePool.AddWaitingDestroyObject
	// Flags: [Final|Native|Public]
	// Offset: 0xad5386c
	// Params: [ Num(3) Size(0x10) ]
	void AddWaitingDestroyObject(struct UObject* obj, float WaitForDestroyTime, int32_t Priority);
	DEFINE_UE_CLASS_HELPERS(UGPCachePool, "GPCachePool")

};

// Object: Class GPGlobalDefines.GPCatenaryUtil
// Size: 0x28 (Inherited: 0x28)
struct UGPCatenaryUtil : UBlueprintFunctionLibrary
{

	// Object: Function GPGlobalDefines.GPCatenaryUtil.CreateCatenaryPoints
	// Flags: [Final|Native|Static|Private|HasDefaults|BlueprintCallable]
	// Offset: 0xad53a34
	// Params: [ Num(6) Size(0x40) ]
	static struct TArray<struct FVector> CreateCatenaryPoints(struct FVector Point1, struct FVector Point2, float Length, struct FVector Up, int32_t NumPoints);
	DEFINE_UE_CLASS_HELPERS(UGPCatenaryUtil, "GPCatenaryUtil")

};

// Object: Class GPGlobalDefines.GPCharacterInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPCharacterInterface : IInterface
{	DEFINE_UE_CLASS_HELPERS(IGPCharacterInterface, "GPCharacterInterface")

};

// Object: Class GPGlobalDefines.GPDebugDrawComponent
// Size: 0x140 (Inherited: 0xF8)
struct UGPDebugDrawComponent : UActorComponent
{
	uint8_t Pad_0xF8[0x14]; // 0xF8(0x14)
	uint8_t bDrawServerDebugBox : 1; // 0x10C(0x1), Mask(0x1)
	uint8_t BitPad_0x10C_1 : 7; // 0x10C(0x1)
	uint8_t bDrawClientDebugBox : 1; // 0x10D(0x1), Mask(0x1)
	uint8_t BitPad_0x10D_1 : 7; // 0x10D(0x1)
	uint8_t Pad_0x10E[0x2]; // 0x10E(0x2)
	struct FTransform ServerDebugBox; // 0x110(0x30)
	DEFINE_UE_CLASS_HELPERS(UGPDebugDrawComponent, "GPDebugDrawComponent")

};

// Object: Class GPGlobalDefines.GPEffectTriggerBase
// Size: 0x3E0 (Inherited: 0x3B8)
struct AGPEffectTriggerBase : AGPTriggerBase
{
	uint8_t AutoSpawn : 1; // 0x3B8(0x1), Mask(0x1)
	uint8_t BitPad_0x3B8_1 : 7; // 0x3B8(0x1)
	uint8_t Pad_0x3B9[0x3]; // 0x3B9(0x3)
	float Alpha; // 0x3BC(0x4)
	float size; // 0x3C0(0x4)
	struct FLinearColor Color; // 0x3C4(0x10)
	float BoxScale; // 0x3D4(0x4)
	float SphereScale; // 0x3D8(0x4)
	uint8_t Pad_0x3DC[0x4]; // 0x3DC(0x4)


	// Object: Function GPGlobalDefines.GPEffectTriggerBase.CallBPFunction
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void CallBPFunction(int32_t Code);
	DEFINE_UE_CLASS_HELPERS(AGPEffectTriggerBase, "GPEffectTriggerBase")

};

// Object: Class GPGlobalDefines.GPGlobalUtil
// Size: 0x28 (Inherited: 0x28)
struct UGPGlobalUtil : UBlueprintFunctionLibrary
{

	// Object: Function GPGlobalDefines.GPGlobalUtil.IsTSRSupported
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xad54aa8
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsTSRSupported();

	// Object: Function GPGlobalDefines.GPGlobalUtil.IsStandalone
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xad54a00
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsStandalone(struct UObject* WorldContextObject);

	// Object: Function GPGlobalDefines.GPGlobalUtil.IsServer
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xf8b2b54
	// Params: [ Num(3) Size(0xA) ]
	static uint8_t IsServer(struct UObject* WorldContextObject, uint8_t bIncludeStandalone);

	// Object: Function GPGlobalDefines.GPGlobalUtil.IsEditor
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xf85c048
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsEditor(struct UObject* WorldContextObject);

	// Object: Function GPGlobalDefines.GPGlobalUtil.IsClient
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x106dcfb4
	// Params: [ Num(3) Size(0xA) ]
	static uint8_t IsClient(struct UObject* WorldContextObject, uint8_t bIncludeStandalone);

	// Object: Function GPGlobalDefines.GPGlobalUtil.HasLocalPlayer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xad54958
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t HasLocalPlayer(struct UObject* WorldContextObject);

	// Object: Function GPGlobalDefines.GPGlobalUtil.GetPlayerCharactersByClass
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xad54824
	// Params: [ Num(4) Size(0x24) ]
	static int32_t GetPlayerCharactersByClass(struct UObject* WorldContextObject, struct TArray<struct ACHARACTER*>& OutCharacters, struct ACHARACTER* Class);

	// Object: Function GPGlobalDefines.GPGlobalUtil.GetPlayerCharacters
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xad5472c
	// Params: [ Num(3) Size(0x1C) ]
	static int32_t GetPlayerCharacters(struct UObject* WorldContextObject, struct TArray<struct ACHARACTER*>& OutCharacters);

	// Object: Function GPGlobalDefines.GPGlobalUtil.GetLocalPlayerController
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xad54688
	// Params: [ Num(2) Size(0x10) ]
	static struct APlayerController* GetLocalPlayerController(struct UObject* WorldContextObject);

	// Object: Function GPGlobalDefines.GPGlobalUtil.GetLocalHostAddr
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xad545a0
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetLocalHostAddr(uint8_t& bCanBindAll);

	// Object: Function GPGlobalDefines.GPGlobalUtil.GetIsHD
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xad54580
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetIsHD();

	// Object: Function GPGlobalDefines.GPGlobalUtil.GetIsConsole
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xad54560
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetIsConsole();

	// Object: Function GPGlobalDefines.GPGlobalUtil.GetHostName
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xad544c8
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetHostName();

	// Object: Function GPGlobalDefines.GPGlobalUtil.GetActorLocalBounds
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xad54414
	// Params: [ Num(2) Size(0x24) ]
	static struct FBox GetActorLocalBounds(struct AActor* Actor);

	// Object: Function GPGlobalDefines.GPGlobalUtil.GetActorBoundsWithoutRotation
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xad542e8
	// Params: [ Num(3) Size(0x20) ]
	static void GetActorBoundsWithoutRotation(struct AActor* Actor, struct FVector& OutCenter, struct FVector& OutExtents);

	// Object: Function GPGlobalDefines.GPGlobalUtil.FindFirstActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xad541d0
	// Params: [ Num(4) Size(0x20) ]
	static struct AActor* FindFirstActor(struct UObject* WorldContextObject, struct AActor* ActorClass, struct FName Tag);
	DEFINE_UE_CLASS_HELPERS(UGPGlobalUtil, "GPGlobalUtil")

};

// Object: Class GPGlobalDefines.GPWidgetUtil
// Size: 0x28 (Inherited: 0x28)
struct UGPWidgetUtil : UBlueprintFunctionLibrary
{

	// Object: Function GPGlobalDefines.GPWidgetUtil.TransformFromWorldToScreenMarker
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xad5543c
	// Params: [ Num(14) Size(0x9C) ]
	static void TransformFromWorldToScreenMarker(EMarkerEdgeType MarkerEdgeType, struct FVector2D CustomMarkerCircleScale, EMarkerEdgeTrackType MarkerEdgeTrackType, struct FMatrix ViewProjectMatrix, struct FVector CameraDir, struct FVector CameraLoc, struct FVector2D ViewPortSize, float ViewportScale, struct FVector MarkerWorldLoc, struct FVector2D MarkerAnchor2CenterOffset, struct FVector2D& MarkerScreenPos, uint8_t& bOnCameraBack, uint8_t& bTrackOnEdge, struct FVector2D& OutEdgeDir);

	// Object: Function GPGlobalDefines.GPWidgetUtil.GetNumberIncreaseByTime
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xad552ac
	// Params: [ Num(6) Size(0x1C) ]
	static float GetNumberIncreaseByTime(ENumberIncreaseType IncreaseType, float FinalNumber, float TimePerc, float Param1, struct UCurveFloat* Curve);

	// Object: Function GPGlobalDefines.GPWidgetUtil.GetIntersecPointOfVectorAndStandEllipse
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xad5519c
	// Params: [ Num(4) Size(0x20) ]
	static struct FVector2D GetIntersecPointOfVectorAndStandEllipse(struct FVector2D Vector, struct FVector2D VectorStartToEllipseCenter, struct FVector2D EllipseSize);

	// Object: Function GPGlobalDefines.GPWidgetUtil.GetIntersecPointOfVectorAndRectangle
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xad550c4
	// Params: [ Num(3) Size(0x18) ]
	static struct FVector2D GetIntersecPointOfVectorAndRectangle(struct FVector2D Vec, struct FVector2D RectangleSize);

	// Object: Function GPGlobalDefines.GPWidgetUtil.DrawOval
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xad54dfc
	// Params: [ Num(9) Size(0x64) ]
	static void DrawOval(struct FPaintContext& Context, const struct FVector2D& Base, const struct FVector2D& Rotate, float LongRadius, float ShortRadius, const struct FLinearColor& Color, int32_t NumSides, uint8_t bAntiAlias, float Thickness);

	// Object: Function GPGlobalDefines.GPWidgetUtil.DrawCircle
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xad54b6c
	// Params: [ Num(8) Size(0x60) ]
	static void DrawCircle(struct FPaintContext& Context, const struct FVector2D& Base, const struct FVector2D& Rotate, const struct FLinearColor& Color, float radius, int32_t NumSides, uint8_t bAntiAlias, float Thickness);
	DEFINE_UE_CLASS_HELPERS(UGPWidgetUtil, "GPWidgetUtil")

};

// Object: Class GPGlobalDefines.GPGlobalConfig
// Size: 0x40 (Inherited: 0x38)
struct UGPGlobalConfig : UDeveloperSettings
{
	uint8_t bDebugDraw : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)


	// Object: Function GPGlobalDefines.GPGlobalConfig.SetDebugDrawEnabled
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xad558a4
	// Params: [ Num(1) Size(0x1) ]
	static void SetDebugDrawEnabled(uint8_t bValue);

	// Object: Function GPGlobalDefines.GPGlobalConfig.IsDebugDrawEnabled
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xad5586c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsDebugDrawEnabled();
	DEFINE_UE_CLASS_HELPERS(UGPGlobalConfig, "GPGlobalConfig")

};

// Object: Class GPGlobalDefines.GPLevelEnvEvents
// Size: 0x40 (Inherited: 0x30)
struct UGPLevelEnvEvents : UWorldSubsystem
{
	struct FMulticastInlineDelegate OnEnvEvent; // 0x30(0x10)


	// Object: Function GPGlobalDefines.GPLevelEnvEvents.FireEnvEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xad5596c
	// Params: [ Num(2) Size(0x10) ]
	static void FireEnvEvent(struct UObject* EventSourceObject, struct FName EventName);
	DEFINE_UE_CLASS_HELPERS(UGPLevelEnvEvents, "GPLevelEnvEvents")

};

// Object: Class GPGlobalDefines.GPPlayerInfoUtils
// Size: 0x28 (Inherited: 0x28)
struct UGPPlayerInfoUtils : UBlueprintFunctionLibrary
{

	// Object: Function GPGlobalDefines.GPPlayerInfoUtils.ToString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xad55f44
	// Params: [ Num(2) Size(0x38) ]
	static struct FString ToString(const struct FGPPlayerBasicInfo& InInfo);

	// Object: Function GPGlobalDefines.GPPlayerInfoUtils.FromString
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xad55e34
	// Params: [ Num(2) Size(0x38) ]
	void FromString(struct FString InStr, struct FGPPlayerBasicInfo& OutInfo);

	// Object: Function GPGlobalDefines.GPPlayerInfoUtils.EncodePlayerBasicInfoList
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xad55d44
	// Params: [ Num(2) Size(0x20) ]
	static struct FString EncodePlayerBasicInfoList(const struct TArray<struct FGPPlayerBasicInfo>& List);

	// Object: Function GPGlobalDefines.GPPlayerInfoUtils.DecodePlayerBasicInfoList
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xad55c40
	// Params: [ Num(3) Size(0x21) ]
	static uint8_t DecodePlayerBasicInfoList(struct FString Infos, struct TArray<struct FGPPlayerBasicInfo>& OutList);
	DEFINE_UE_CLASS_HELPERS(UGPPlayerInfoUtils, "GPPlayerInfoUtils")

};

// Object: Class GPGlobalDefines.GPShowActorTags
// Size: 0x388 (Inherited: 0x370)
struct AGPShowActorTags : AActor
{
	struct FColor TagsColor; // 0x370(0x4)
	uint8_t bShowTagsInEditor : 1; // 0x374(0x1), Mask(0x1)
	uint8_t BitPad_0x374_1 : 7; // 0x374(0x1)
	uint8_t Pad_0x375[0x3]; // 0x375(0x3)
	struct FString FinalString; // 0x378(0x10)


	// Object: Function GPGlobalDefines.GPShowActorTags.ShowTagsInEditor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xad58728
	// Params: [ Num(1) Size(0x1) ]
	uint8_t ShowTagsInEditor();

	// Object: Function GPGlobalDefines.GPShowActorTags.ShouldTick
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xad586f0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t ShouldTick();

	// Object: Function GPGlobalDefines.GPShowActorTags.GetEditorCameraLocation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xad586b8
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetEditorCameraLocation();
	DEFINE_UE_CLASS_HELPERS(AGPShowActorTags, "GPShowActorTags")

};

// Object: Class GPGlobalDefines.GPSpawnerBase
// Size: 0x370 (Inherited: 0x370)
struct AGPSpawnerBase : AActor
{

	// Object: Function GPGlobalDefines.GPSpawnerBase.SpawnActors
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void SpawnActors();

	// Object: Function GPGlobalDefines.GPSpawnerBase.IsAllSpawnEnd
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsAllSpawnEnd();

	// Object: Function GPGlobalDefines.GPSpawnerBase.GetSpawnedActorByTag
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x10) ]
	struct AActor* GetSpawnedActorByTag(struct FName ActorTag);

	// Object: Function GPGlobalDefines.GPSpawnerBase.GetDefaultSpawnedActor
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetDefaultSpawnedActor();
	DEFINE_UE_CLASS_HELPERS(AGPSpawnerBase, "GPSpawnerBase")

};

// Object: Class GPGlobalDefines.GPSpawnPool
// Size: 0xF0 (Inherited: 0x30)
struct UGPSpawnPool : UWorldSubsystem
{
	struct TArray<struct AActor*> AllChars; // 0x30(0x10)
	uint8_t Pad_0x40[0xB0]; // 0x40(0xB0)
	DEFINE_UE_CLASS_HELPERS(UGPSpawnPool, "GPSpawnPool")

};

// Object: Class GPGlobalDefines.GPSplineUtil
// Size: 0x28 (Inherited: 0x28)
struct UGPSplineUtil : UBlueprintFunctionLibrary
{

	// Object: Function GPGlobalDefines.GPSplineUtil.SnapToGround
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0xad58b50
	// Params: [ Num(2) Size(0x9) ]
	static void SnapToGround(struct USplineComponent* SplineComp, uint8_t bInAlign);

	// Object: Function GPGlobalDefines.GPSplineUtil.SnapToFixedAngleXY
	// Flags: [Final|Native|Static|Private|HasOutParms|BlueprintCallable]
	// Offset: 0xad58980
	// Params: [ Num(4) Size(0x30) ]
	static void SnapToFixedAngleXY(struct USplineComponent* SplineComp, struct TArray<float> AllowedAngles, uint8_t bSnapToGround, struct TArray<struct FVector>& ResultPoints);

	// Object: Function GPGlobalDefines.GPSplineUtil.SnapToFixedAngle
	// Flags: [Final|Native|Static|Private|HasOutParms|BlueprintCallable]
	// Offset: 0xad587b0
	// Params: [ Num(4) Size(0x30) ]
	static void SnapToFixedAngle(struct USplineComponent* SplineComp, struct TArray<float> AllowedAngles, uint8_t bSnapToGround, struct TArray<struct FVector>& ResultPoints);
	DEFINE_UE_CLASS_HELPERS(UGPSplineUtil, "GPSplineUtil")

};

// Object: Class GPGlobalDefines.GPVehicleInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPVehicleInterface : IInterface
{	DEFINE_UE_CLASS_HELPERS(IGPVehicleInterface, "GPVehicleInterface")

};

// Object: Class GPGlobalDefines.HeavyTaskScheduler
// Size: 0x80 (Inherited: 0x30)
struct UHeavyTaskScheduler : UWorldSubsystem
{
	uint8_t Pad_0x30[0x50]; // 0x30(0x50)
	DEFINE_UE_CLASS_HELPERS(UHeavyTaskScheduler, "HeavyTaskScheduler")

};

// Object: Class GPGlobalDefines.ItemIDUtil
// Size: 0x28 (Inherited: 0x28)
struct UItemIDUtil : UObject
{

	// Object: Function GPGlobalDefines.ItemIDUtil.ToUint64
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xad5a510
	// Params: [ Num(2) Size(0x20) ]
	static uint64_t ToUint64(struct FItemID ItemID);

	// Object: Function GPGlobalDefines.ItemIDUtil.ToInt64
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xad5a438
	// Params: [ Num(2) Size(0x20) ]
	static int64_t ToInt64(struct FItemID ItemID);

	// Object: Function GPGlobalDefines.ItemIDUtil.ToFName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xad5a350
	// Params: [ Num(2) Size(0x20) ]
	static struct FName ToFName(struct FItemID ItemID);

	// Object: Function GPGlobalDefines.ItemIDUtil.IsZero
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xad5a274
	// Params: [ Num(2) Size(0x19) ]
	static uint8_t IsZero(struct FItemID ItemID);

	// Object: Function GPGlobalDefines.ItemIDUtil.IsPistolWeapon
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xad5a1b0
	// Params: [ Num(2) Size(0x2) ]
	static uint8_t IsPistolWeapon(EWeaponItemType WeaponItemType);

	// Object: Function GPGlobalDefines.ItemIDUtil.IsMysticalWeaponSkin
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xad5a0f0
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsMysticalWeaponSkin(uint64_t ItemID);

	// Object: Function GPGlobalDefines.ItemIDUtil.IsMeleeWeapon
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xad5a02c
	// Params: [ Num(2) Size(0x2) ]
	static uint8_t IsMeleeWeapon(EWeaponItemType WeaponItemType);

	// Object: Function GPGlobalDefines.ItemIDUtil.IsMandelBrick
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xad59f6c
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsMandelBrick(uint64_t ItemID);

	// Object: Function GPGlobalDefines.ItemIDUtil.IsMainWeapon
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xad59ea8
	// Params: [ Num(2) Size(0x2) ]
	static uint8_t IsMainWeapon(EWeaponItemType WeaponItemType);

	// Object: Function GPGlobalDefines.ItemIDUtil.IsEqual
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xad59d78
	// Params: [ Num(3) Size(0x31) ]
	static uint8_t IsEqual(struct FItemID Left, struct FItemID Right);

	// Object: Function GPGlobalDefines.ItemIDUtil.Int64ToFName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xad59cac
	// Params: [ Num(2) Size(0x10) ]
	static struct FName Int64ToFName(int64_t ItemID);

	// Object: Function GPGlobalDefines.ItemIDUtil.GetZero
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xad59c10
	// Params: [ Num(1) Size(0x18) ]
	static struct FItemID GetZero();

	// Object: Function GPGlobalDefines.ItemIDUtil.GetUnSearchedID
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xe9f466c
	// Params: [ Num(1) Size(0x8) ]
	static uint64_t GetUnSearchedID();

	// Object: Function GPGlobalDefines.ItemIDUtil.GetSubType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xad59b38
	// Params: [ Num(2) Size(0x19) ]
	static uint8_t GetSubType(struct FItemID ItemID);

	// Object: Function GPGlobalDefines.ItemIDUtil.GetMainType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xad59a58
	// Params: [ Num(2) Size(0x19) ]
	static EItemMainType GetMainType(struct FItemID ItemID);
	DEFINE_UE_CLASS_HELPERS(UItemIDUtil, "ItemIDUtil")

};

// Object: Class GPGlobalDefines.ItemInterface
// Size: 0x28 (Inherited: 0x28)
struct IItemInterface : IInterface
{

	// Object: Function GPGlobalDefines.ItemInterface.GetItemMesh3PPath
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0xad5a720
	// Params: [ Num(2) Size(0x20) ]
	struct FSoftObjectPath GetItemMesh3PPath(uint64_t ItemID);

	// Object: Function GPGlobalDefines.ItemInterface.GetItemMesh1PPath
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0xad5a654
	// Params: [ Num(2) Size(0x20) ]
	struct FSoftObjectPath GetItemMesh1PPath(uint64_t ItemID);
	DEFINE_UE_CLASS_HELPERS(IItemInterface, "ItemInterface")

};

// Object: Class GPGlobalDefines.DFReplayBase
// Size: 0xD8 (Inherited: 0x28)
struct UDFReplayBase : UObject
{
	struct UWorld* WorldReference; // 0x28(0x8)
	struct FString ReplayName; // 0x30(0x10)
	ENetworkReplayStreamerType StreamerType; // 0x40(0x1)
	uint8_t Pad_0x41[0x7]; // 0x41(0x7)
	struct FString FriendlyName; // 0x48(0x10)
	uint8_t Pad_0x58[0x80]; // 0x58(0x80)


	// Object: Function GPGlobalDefines.DFReplayBase.PlayReplayWithOption
	// Flags: [Native|Public]
	// Offset: 0xad5cf1c
	// Params: [ Num(3) Size(0x15) ]
	uint8_t PlayReplayWithOption(struct TArray<struct FString> Options, float StartTimeInSeconds);

	// Object: Function GPGlobalDefines.DFReplayBase.PlayReplay
	// Flags: [Native|Public]
	// Offset: 0xad5ce64
	// Params: [ Num(2) Size(0x5) ]
	uint8_t PlayReplay(float StartTimeInSeconds);
	DEFINE_UE_CLASS_HELPERS(UDFReplayBase, "DFReplayBase")

};

// Object: Class GPGlobalDefines.DFReplayGlobalDefine
// Size: 0x28 (Inherited: 0x28)
struct UDFReplayGlobalDefine : UObject
{	DEFINE_UE_CLASS_HELPERS(UDFReplayGlobalDefine, "DFReplayGlobalDefine")

};

} // namespace SDK
