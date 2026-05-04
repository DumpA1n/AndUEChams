#pragma once

#include "../CoreUObject_classes.hpp"
#include "DFMGameplay.hpp"
#include "Engine.hpp"
#include "GPGameInput.hpp"
#include "GameCore.hpp"
#include "InputCore.hpp"

namespace SDK
{

// Package: DFMGamepadInput
// Enums: 12
// Structs: 20
// Classes: 29

struct AWeaponBase;
enum class EGPInputModeType : uint8_t;
enum class EGPInputType : uint8_t;
enum class EGPWeaponFiringMode : uint8_t;
enum class EGameFlowStageType : uint8_t;
enum class EGameHUDSate : uint16_t;
enum class EGamepadReloadInteractMode : uint8_t;
enum class EGamepadSensitivityCurveType : uint8_t;
enum class EInputDeviceTriggerMask : uint8_t;
enum class EInputEvent : uint8_t;
enum class EKeyActionLogic : uint8_t;
enum class EWeaponItemType : uint8_t;
struct FKey;
struct UCurveFloat;
struct UHudManager;
struct FDFMAdaptiveTriggerEffectBase;
struct FDFMAdaptiveTriggerEffectFeedback;
struct FDFMAdaptiveTriggerEffectMultiPositionFeedback;
struct FDFMAdaptiveTriggerEffectMultiPositionVibration;
struct FDFMAdaptiveTriggerEffectSlopeFeedback;
struct FDFMAdaptiveTriggerEffectVibration;
struct FDFMAdaptiveTriggerEffectWeapon;
struct FDFMWeaponAdaptiveTriggerFireModeConfig;
struct FWeaponAdaptiveTriggerPropertyTableRow;
struct FAdaptiveTriggerPropertyTableRow;
struct FWeaponAdaptiveTriggerDetailInfo;
struct FDFMAdaptiveTriggerEffectOff;
struct FDFMInputKeyActionLogic;
struct FDFMInputPresetRow;
struct FDFMInputKeyRebindingInfo;
struct FDFMInputMappingInstance;
struct FDFMInputMappingContext;
struct FDFMInputMappingRowPresetDiffKey;
struct FDFMInputModifierData;
struct FDFMInputMappingRow;
struct UDFMAdaptiveTriggerDataTableManager;
struct UDFMWeaponAdaptiveTriggerDataTableManager;
struct UDFMAdaptiveTriggerManager;
struct UDFMGameplayInputManager;
struct UDFMInputComponent;
struct UDFMInputKeyRebindingSaveGame;
struct UDFMInputModifier;
struct UDFMInputModifierForScaleValue;
struct UDFMInputModifierForDisableInput;
struct UDFMInputModifierForDisableInputV2;
struct UDFMInputModifierForGameHudState;
struct UDFMInputModifierForAxisRestrict;
struct UDFMInputModifierForBusinessRestrict;
struct UDFMInputModifierForDeadZone;
struct UGamepadSensitivityCurveManager;
struct UDFMInputModifierForSensitivity;
struct UDFMInputModifierForSmooth;
struct UDFMInputTrigger;
struct UDFMInputTriggerForAxis;
struct UDFMInputTriggerSingleKey;
struct UDFMInputTriggerPressed;
struct UDFMInputTriggerReleased;
struct UDFMInputTriggerLongPressed;
struct UDFMInputTriggerBounceLongPressed;
struct UDFMInputTriggerBounce;
struct UDFMGamepadInputPresetMgr;
struct UDFMGamepadInputMappingsMgr;
struct UDFMobilePlayerInput;
struct UDFMPlayerInput;

// Object: Enum DFMGamepadInput.EDFMInputMappingTableType
enum class EDFMInputMappingTableType : uint8_t
{
	BaseInput = 0,
	AimingInput = 1,
	VehicleBaseInput = 2,
	VehicleInput = 3,
	GroundVehicleInput = 4,
	HelicopterInput = 5,
	JetInput = 6,
	WatchFightInput = 7,
	MapInput = 8,
	DynamicInput = 9,
	COUNT = 10,
	EDFMInputMappingTableType_MAX = 11
};

// Object: Enum DFMGamepadInput.EAdaptiveTriggerEffectType
enum class EAdaptiveTriggerEffectType : uint8_t
{
	Off = 0,
	Feedback = 1,
	MultiPositionFeedback = 2,
	SlopeFeedback = 3,
	Weapon = 4,
	Vibration = 5,
	MultiPositionVibration = 6,
	EAdaptiveTriggerEffectType_MAX = 7
};

// Object: Enum DFMGamepadInput.EDFMInputModifierPriority
enum class EDFMInputModifierPriority : uint8_t
{
	EnableInput = 0,
	AxisRestrict = 1,
	DeadZone = 2,
	BusinessRestrict = 3,
	Smooth = 4,
	Sensitivity = 5,
	Scalar = 6,
	COUNT = 7,
	EDFMInputModifierPriority_MAX = 8
};

// Object: Enum DFMGamepadInput.EDFMGamepadPresetType
enum class EDFMGamepadPresetType : uint8_t
{
	Custom = 0,
	Default = 1,
	LeftHand = 2,
	Traditional = 3,
	Shooting = 4,
	EDFMGamepadPresetType_MAX = 5
};

// Object: Enum DFMGamepadInput.EDFMInputPriority
enum class EDFMInputPriority : uint8_t
{
	Low = 0,
	Middle = 1,
	High = 2,
	VeryHigh = 3,
	EDFMInputPriority_MAX = 4
};

// Object: Enum DFMGamepadInput.ETriggerSuperSprintType
enum class ETriggerSuperSprintType : uint8_t
{
	TapWhenSprint = 0,
	TapWhenRun = 1,
	DoubleClickWhenSprint = 2,
	ETriggerSuperSprintType_MAX = 3
};

// Object: Enum DFMGamepadInput.ESlideAndProneTriggerType
enum class ESlideAndProneTriggerType : uint8_t
{
	TapSlideAndLongPressProne = 0,
	TapProneAndLongPressSlide = 1,
	OnlySlide = 2,
	OnlyProne = 3,
	ESlideAndProneTriggerType_MAX = 4
};

// Object: Enum DFMGamepadInput.EAutoSprintSettingType
enum class EAutoSprintSettingType : uint8_t
{
	Close = 0,
	AutoSprint = 1,
	AutoSuperSprint = 2,
	EAutoSprintSettingType_MAX = 3
};

// Object: Enum DFMGamepadInput.EDFMInputModifierTargetKey
enum class EDFMInputModifierTargetKey : uint8_t
{
	Key1 = 0,
	Key2 = 1,
	Both = 2,
	EDFMInputModifierTargetKey_MAX = 3
};

// Object: Enum DFMGamepadInput.EDFMInputTriggerState
enum class EDFMInputTriggerState : uint8_t
{
	None = 0,
	Ongoing = 1,
	Triggered = 2,
	WaitingCombKey = 3,
	WaitingRelease = 4,
	WaitingReset = 5,
	EDFMInputTriggerState_MAX = 6
};

// Object: Enum DFMGamepadInput.EInterceptKeyOccupiedReason
enum class EInterceptKeyOccupiedReason : uint8_t
{
	ByWatingComb = 0,
	ByLongPressing = 1,
	EInterceptKeyOccupiedReason_MAX = 2
};

// Object: Enum DFMGamepadInput.EDFMInputSceneType
enum class EDFMInputSceneType : uint8_t
{
	Foot = 0,
	Vehicle = 1,
	Helicopter = 2,
	Jet = 3,
	NumMax = 4,
	EDFMInputSceneType_MAX = 5
};

// Object: ScriptStruct DFMGamepadInput.DFMAdaptiveTriggerEffectBase
// Size: 0x8 (Inherited: 0x0)
struct FDFMAdaptiveTriggerEffectBase
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct DFMGamepadInput.DFMAdaptiveTriggerEffectFeedback
// Size: 0x10 (Inherited: 0x8)
struct FDFMAdaptiveTriggerEffectFeedback : FDFMAdaptiveTriggerEffectBase
{
	uint8_t Position; // 0x8(0x1)
	uint8_t Strength; // 0x9(0x1)
	uint8_t Pad_0xA[0x6]; // 0xA(0x6)
};

// Object: ScriptStruct DFMGamepadInput.DFMAdaptiveTriggerEffectMultiPositionFeedback
// Size: 0x18 (Inherited: 0x8)
struct FDFMAdaptiveTriggerEffectMultiPositionFeedback : FDFMAdaptiveTriggerEffectBase
{
	struct TArray<uint8_t> Strengths; // 0x8(0x10)
};

// Object: ScriptStruct DFMGamepadInput.DFMAdaptiveTriggerEffectMultiPositionVibration
// Size: 0x20 (Inherited: 0x8)
struct FDFMAdaptiveTriggerEffectMultiPositionVibration : FDFMAdaptiveTriggerEffectBase
{
	uint8_t bUseFrequencyBasedOnFireInternal : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t bAllowVibrationWhenEquipping : 1; // 0x9(0x1), Mask(0x1)
	uint8_t BitPad_0x9_1 : 7; // 0x9(0x1)
	uint8_t frequency; // 0xA(0x1)
	uint8_t Pad_0xB[0x5]; // 0xB(0x5)
	struct TArray<uint8_t> Amplitudes; // 0x10(0x10)
};

// Object: ScriptStruct DFMGamepadInput.DFMAdaptiveTriggerEffectSlopeFeedback
// Size: 0x10 (Inherited: 0x8)
struct FDFMAdaptiveTriggerEffectSlopeFeedback : FDFMAdaptiveTriggerEffectBase
{
	uint8_t StartPosition; // 0x8(0x1)
	uint8_t EndPosition; // 0x9(0x1)
	uint8_t StartStrength; // 0xA(0x1)
	uint8_t EndStrength; // 0xB(0x1)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct DFMGamepadInput.DFMAdaptiveTriggerEffectVibration
// Size: 0x10 (Inherited: 0x8)
struct FDFMAdaptiveTriggerEffectVibration : FDFMAdaptiveTriggerEffectBase
{
	uint8_t bUseFrequencyBasedOnFireInternal : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t bAllowVibrationWhenEquipping : 1; // 0x9(0x1), Mask(0x1)
	uint8_t BitPad_0x9_1 : 7; // 0x9(0x1)
	uint8_t Position; // 0xA(0x1)
	uint8_t Amplitude; // 0xB(0x1)
	uint8_t frequency; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct DFMGamepadInput.DFMAdaptiveTriggerEffectWeapon
// Size: 0x10 (Inherited: 0x8)
struct FDFMAdaptiveTriggerEffectWeapon : FDFMAdaptiveTriggerEffectBase
{
	uint8_t StartPosition; // 0x8(0x1)
	uint8_t EndPosition; // 0x9(0x1)
	uint8_t Strength; // 0xA(0x1)
	uint8_t Pad_0xB[0x5]; // 0xB(0x5)
};

// Object: ScriptStruct DFMGamepadInput.DFMWeaponAdaptiveTriggerFireModeConfig
// Size: 0x88 (Inherited: 0x0)
struct FDFMWeaponAdaptiveTriggerFireModeConfig
{
	float FireTriggerPressDepth; // 0x0(0x4)
	float FireTriggerReleaseDepth; // 0x4(0x4)
	EAdaptiveTriggerEffectType TriggerEffectType; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct FDFMAdaptiveTriggerEffectFeedback Feedback; // 0x10(0x10)
	struct FDFMAdaptiveTriggerEffectSlopeFeedback SlopeFeedback; // 0x20(0x10)
	struct FDFMAdaptiveTriggerEffectMultiPositionFeedback MultiPositionFeedback; // 0x30(0x18)
	struct FDFMAdaptiveTriggerEffectWeapon Weapon; // 0x48(0x10)
	struct FDFMAdaptiveTriggerEffectVibration Vibration; // 0x58(0x10)
	struct FDFMAdaptiveTriggerEffectMultiPositionVibration MultiPositionVibration; // 0x68(0x20)
};

// Object: ScriptStruct DFMGamepadInput.WeaponAdaptiveTriggerPropertyTableRow
// Size: 0x70 (Inherited: 0x10)
struct FWeaponAdaptiveTriggerPropertyTableRow : FDescRowBase
{
	uint64_t RecId; // 0x10(0x8)
	float StrengthMultiplierWithSilencer; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct TMap<EGPWeaponFiringMode, struct FDFMWeaponAdaptiveTriggerFireModeConfig> ApplicableDeviceProperties; // 0x20(0x50)
};

// Object: ScriptStruct DFMGamepadInput.AdaptiveTriggerPropertyTableRow
// Size: 0x68 (Inherited: 0x10)
struct FAdaptiveTriggerPropertyTableRow : FDescRowBase
{
	EWeaponItemType WeaponType; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float StrengthMultiplierWithSilencer; // 0x14(0x4)
	struct TMap<EGPWeaponFiringMode, struct FDFMWeaponAdaptiveTriggerFireModeConfig> ApplicableDeviceProperties; // 0x18(0x50)
};

// Object: ScriptStruct DFMGamepadInput.WeaponAdaptiveTriggerDetailInfo
// Size: 0x30 (Inherited: 0x0)
struct FWeaponAdaptiveTriggerDetailInfo
{
	uint64_t WeaponID; // 0x0(0x8)
	struct FString WeaponName; // 0x8(0x10)
	uint64_t WeaponGuid; // 0x18(0x8)
	EWeaponItemType WeaponType; // 0x20(0x1)
	EGPWeaponFiringMode FireType; // 0x21(0x1)
	uint8_t Pad_0x22[0x2]; // 0x22(0x2)
	float FireInterval; // 0x24(0x4)
	uint8_t bIsSceneWeapon : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t bCanFire : 1; // 0x29(0x1), Mask(0x1)
	uint8_t BitPad_0x29_1 : 7; // 0x29(0x1)
	uint8_t bIsOverHeat : 1; // 0x2A(0x1), Mask(0x1)
	uint8_t BitPad_0x2A_1 : 7; // 0x2A(0x1)
	uint8_t Pad_0x2B[0x5]; // 0x2B(0x5)
};

// Object: ScriptStruct DFMGamepadInput.DFMAdaptiveTriggerEffectOff
// Size: 0x8 (Inherited: 0x8)
struct FDFMAdaptiveTriggerEffectOff : FDFMAdaptiveTriggerEffectBase
{
};

// Object: ScriptStruct DFMGamepadInput.DFMInputKeyActionLogic
// Size: 0x20 (Inherited: 0x10)
struct FDFMInputKeyActionLogic : FDescRowBase
{
	struct FName ActionOrAxisName; // 0x10(0x8)
	EKeyActionLogic KeyActionLogic; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: ScriptStruct DFMGamepadInput.DFMInputPresetRow
// Size: 0x30 (Inherited: 0x10)
struct FDFMInputPresetRow : FDescRowBase
{
	EDFMGamepadPresetType PresetType; // 0x10(0x1)
	uint8_t bIsDefaultEnabled : 1; // 0x11(0x1), Mask(0x1)
	uint8_t BitPad_0x11_1 : 7; // 0x11(0x1)
	uint8_t Pad_0x12[0x6]; // 0x12(0x6)
	struct FText DisplayName; // 0x18(0x18)
};

// Object: ScriptStruct DFMGamepadInput.DFMInputKeyRebindingInfo
// Size: 0x88 (Inherited: 0x0)
struct FDFMInputKeyRebindingInfo
{
	EDFMInputMappingTableType IMTableType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FName ActionOrAxisName; // 0x4(0x8)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FKey Key1; // 0x10(0x18)
	struct FKey Key2; // 0x28(0x18)
	struct FKey RebindingKey1; // 0x40(0x18)
	struct FKey RebindingKey2; // 0x58(0x18)
	int32_t KeyFunctionType; // 0x70(0x4)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)
	struct TArray<int32_t> KeyFunctionTypeList; // 0x78(0x10)
};

// Object: ScriptStruct DFMGamepadInput.DFMInputMappingInstance
// Size: 0xC0 (Inherited: 0x0)
struct FDFMInputMappingInstance
{
	struct UDFMInputTrigger* InputTrigger; // 0x0(0x8)
	struct TArray<struct UDFMInputModifier*> InputModifiers; // 0x8(0x10)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
	struct TSet<int32_t> EnableReasons; // 0x20(0x50)
	struct TSet<int32_t> DisableReasons; // 0x70(0x50)
};

// Object: ScriptStruct DFMGamepadInput.DFMInputMappingContext
// Size: 0x58 (Inherited: 0x0)
struct FDFMInputMappingContext
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct TMap<struct FName, struct FDFMInputMappingInstance> InputMappingInstances; // 0x8(0x50)
};

// Object: ScriptStruct DFMGamepadInput.DFMInputMappingRowPresetDiffKey
// Size: 0x30 (Inherited: 0x0)
struct FDFMInputMappingRowPresetDiffKey
{
	struct FKey Key1; // 0x0(0x18)
	struct FKey Key2; // 0x18(0x18)
};

// Object: ScriptStruct DFMGamepadInput.DFMInputModifierData
// Size: 0x150 (Inherited: 0x0)
struct FDFMInputModifierData
{
	EDFMInputModifierTargetKey TargetKeySelector; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FKey TargetKey; // 0x8(0x18)
	struct TArray<EGameHUDSate> GameHudStates_Disable; // 0x20(0x10)
	struct TArray<struct FName> HudStates_Disable; // 0x30(0x10)
	struct TArray<EGameHUDSate> GameHudStates_Enable; // 0x40(0x10)
	struct TArray<struct FName> HudStates_Enable; // 0x50(0x10)
	struct TMap<struct FName, float> NameToOptionFloatValue; // 0x60(0x50)
	struct TMap<struct FName, struct FName> NameToOptionNameValue; // 0xB0(0x50)
	struct TMap<struct FName, EDFMInputMappingTableType> NameToOptionIMCId; // 0x100(0x50)
};

// Object: ScriptStruct DFMGamepadInput.DFMInputMappingRow
// Size: 0x140 (Inherited: 0x10)
struct FDFMInputMappingRow : FDescRowBase
{
	EDFMInputMappingTableType InputMappingTableType; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	struct FName ActionOrAxisName; // 0x14(0x8)
	uint8_t bIndependentlyEnable : 1; // 0x1C(0x1), Mask(0x1)
	uint8_t BitPad_0x1C_1 : 7; // 0x1C(0x1)
	EInputEvent OldInputEvent; // 0x1D(0x1)
	EDFMInputPriority InputPriority; // 0x1E(0x1)
	uint8_t Pad_0x1F[0x1]; // 0x1F(0x1)
	struct UDFMInputTrigger* InputTrigger; // 0x20(0x8)
	struct FKey Key1; // 0x28(0x18)
	struct FKey Key2; // 0x40(0x18)
	struct TMap<EDFMGamepadPresetType, struct FDFMInputMappingRowPresetDiffKey> OtherPresetsDiffKey; // 0x58(0x50)
	uint8_t bConsumeInput : 1; // 0xA8(0x1), Mask(0x1)
	uint8_t BitPad_0xA8_1 : 7; // 0xA8(0x1)
	uint8_t bAllowRebindCombKeys : 1; // 0xA9(0x1), Mask(0x1)
	uint8_t BitPad_0xA9_1 : 7; // 0xA9(0x1)
	uint8_t Pad_0xAA[0x2]; // 0xAA(0x2)
	float LongPressedHoldTime; // 0xAC(0x4)
	float WaitPairCombKeyTime; // 0xB0(0x4)
	float MaxWaitOtherCombKeyWaitTime; // 0xB4(0x4)
	struct TMap<struct UDFMInputModifier*, struct FDFMInputModifierData> InputModifiers; // 0xB8(0x50)
	uint8_t Pad_0x108[0x18]; // 0x108(0x18)
	struct FText FunctionName; // 0x120(0x18)
	int32_t KeyFunctionType; // 0x138(0x4)
	uint8_t Pad_0x13C[0x4]; // 0x13C(0x4)
};

// Object: Class DFMGamepadInput.DFMAdaptiveTriggerDataTableManager
// Size: 0x40 (Inherited: 0x30)
struct UDFMAdaptiveTriggerDataTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMAdaptiveTriggerDataTableManager, "DFMAdaptiveTriggerDataTableManager")

};

// Object: Class DFMGamepadInput.DFMWeaponAdaptiveTriggerDataTableManager
// Size: 0x40 (Inherited: 0x30)
struct UDFMWeaponAdaptiveTriggerDataTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMWeaponAdaptiveTriggerDataTableManager, "DFMWeaponAdaptiveTriggerDataTableManager")

};

// Object: Class DFMGamepadInput.DFMAdaptiveTriggerManager
// Size: 0x280 (Inherited: 0x30)
struct UDFMAdaptiveTriggerManager : UGameInstanceSubsystem
{
	uint8_t Pad_0x30[0x30]; // 0x30(0x30)
	struct FDFMWeaponAdaptiveTriggerFireModeConfig CurrentAdaptiveTriggerEffect; // 0x60(0x88)
	uint8_t Pad_0xE8[0x14]; // 0xE8(0x14)
	float currentTriggerPressDepth; // 0xFC(0x4)
	float currentTriggerReleaseDepth; // 0x100(0x4)
	uint8_t Pad_0x104[0xD]; // 0x104(0xD)
	uint8_t bAdaptiveTriggerEnabled : 1; // 0x111(0x1), Mask(0x1)
	uint8_t BitPad_0x111_1 : 7; // 0x111(0x1)
	uint8_t Pad_0x112[0x6]; // 0x112(0x6)
	struct FDFMWeaponAdaptiveTriggerFireModeConfig DebugAdaptiveTriggerEffect; // 0x118(0x88)
	struct FDFMWeaponAdaptiveTriggerFireModeConfig DebugOriginalAdaptiveTriggerEffect; // 0x1A0(0x88)
	struct FString DebugEffectConfigSource; // 0x228(0x10)
	float DebugTriggerDepth; // 0x238(0x4)
	uint8_t Pad_0x23C[0x4]; // 0x23C(0x4)
	struct TArray<struct FString> DebugWeaponEventHistory; // 0x240(0x10)
	uint32_t DebugMaxWeaponEventHistoryItem; // 0x250(0x4)
	uint8_t Pad_0x254[0x4]; // 0x254(0x4)
	struct TArray<struct FString> DebugWeaponStateHistory; // 0x258(0x10)
	uint32_t DebugMaxWeaponStateHistoryItem; // 0x268(0x4)
	uint8_t Pad_0x26C[0x4]; // 0x26C(0x4)
	struct FString DebugCurrentInputMode; // 0x270(0x10)


	// Object: Function DFMGamepadInput.DFMAdaptiveTriggerManager.SetDebugEnabled
	// Flags: [Final|Native|Private]
	// Offset: 0xd789488
	// Params: [ Num(1) Size(0x1) ]
	void SetDebugEnabled(uint8_t Value);

	// Object: Function DFMGamepadInput.DFMAdaptiveTriggerManager.OnNotifyActiveWeaponChanged
	// Flags: [Final|Native|Private]
	// Offset: 0xd7893ac
	// Params: [ Num(2) Size(0x10) ]
	void OnNotifyActiveWeaponChanged(struct AWeaponBase* PreWeapon, struct AWeaponBase* NewWeapon);

	// Object: Function DFMGamepadInput.DFMAdaptiveTriggerManager.IsDebugEnabled
	// Flags: [Final|Native|Private]
	// Offset: 0xd789374
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsDebugEnabled();

	// Object: Function DFMGamepadInput.DFMAdaptiveTriggerManager.IsAdaptiveTriggerDeviceConnected
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd78933c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsAdaptiveTriggerDeviceConnected();

	// Object: Function DFMGamepadInput.DFMAdaptiveTriggerManager.HandleInputModeChanged
	// Flags: [Final|Native|Private]
	// Offset: 0xd78925c
	// Params: [ Num(2) Size(0x2) ]
	void HandleInputModeChanged(EGPInputModeType OldType, EGPInputModeType NewType);

	// Object: Function DFMGamepadInput.DFMAdaptiveTriggerManager.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xd7891b8
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMAdaptiveTriggerManager* Get(struct UObject* InGameInstanceContext);

	// Object: Function DFMGamepadInput.DFMAdaptiveTriggerManager.Debug_SetMultiPositionVibrationValue
	// Flags: [Final|Native|Private]
	// Offset: 0xd7890d8
	// Params: [ Num(2) Size(0x5) ]
	void Debug_SetMultiPositionVibrationValue(int32_t Index, uint8_t Value);

	// Object: Function DFMGamepadInput.DFMAdaptiveTriggerManager.Debug_SetMultiPositionFeedbackValue
	// Flags: [Final|Native|Private]
	// Offset: 0xd788ff8
	// Params: [ Num(2) Size(0x5) ]
	void Debug_SetMultiPositionFeedbackValue(int32_t Index, uint8_t Value);

	// Object: Function DFMGamepadInput.DFMAdaptiveTriggerManager.Debug_SaveToWeaponAdaptiveTriggerConfig
	// Flags: [Final|Native|Private]
	// Offset: 0xd788f0c
	// Params: [ Num(3) Size(0xA) ]
	uint8_t Debug_SaveToWeaponAdaptiveTriggerConfig(uint64_t WeaponID, EGPWeaponFiringMode FireMode);

	// Object: Function DFMGamepadInput.DFMAdaptiveTriggerManager.Debug_SaveToAdaptiveTriggerConfig
	// Flags: [Final|Native|Private]
	// Offset: 0xd788e20
	// Params: [ Num(3) Size(0x3) ]
	uint8_t Debug_SaveToAdaptiveTriggerConfig(EWeaponItemType WeaponType, EGPWeaponFiringMode FireMode);

	// Object: Function DFMGamepadInput.DFMAdaptiveTriggerManager.Debug_RefreshAdaptiveTriggerEffect
	// Flags: [Final|Native|Private]
	// Offset: 0xd788de8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t Debug_RefreshAdaptiveTriggerEffect();

	// Object: Function DFMGamepadInput.DFMAdaptiveTriggerManager.Debug_LoadCurrentWeaponEffectToDebugEffect
	// Flags: [Final|Native|Private]
	// Offset: 0xd788db0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t Debug_LoadCurrentWeaponEffectToDebugEffect();

	// Object: Function DFMGamepadInput.DFMAdaptiveTriggerManager.Debug_GetWeaponDetailInfo
	// Flags: [Final|Native|Private]
	// Offset: 0xd788d00
	// Params: [ Num(1) Size(0x30) ]
	struct FWeaponAdaptiveTriggerDetailInfo Debug_GetWeaponDetailInfo();

	// Object: Function DFMGamepadInput.DFMAdaptiveTriggerManager.Debug_GetCurrentFireKeyCache
	// Flags: [Final|Native|Private]
	// Offset: 0xd788ccc
	// Params: [ Num(1) Size(0x1) ]
	EInputDeviceTriggerMask Debug_GetCurrentFireKeyCache();

	// Object: Function DFMGamepadInput.DFMAdaptiveTriggerManager.Debug_ClearWeaponStateHistory
	// Flags: [Final|Native|Private]
	// Offset: 0xd788cb8
	// Params: [ Num(0) Size(0x0) ]
	void Debug_ClearWeaponStateHistory();

	// Object: Function DFMGamepadInput.DFMAdaptiveTriggerManager.Debug_ClearWeaponEventHistory
	// Flags: [Final|Native|Private]
	// Offset: 0xd788ca4
	// Params: [ Num(0) Size(0x0) ]
	void Debug_ClearWeaponEventHistory();
	DEFINE_UE_CLASS_HELPERS(UDFMAdaptiveTriggerManager, "DFMAdaptiveTriggerManager")

};

// Object: Class DFMGamepadInput.DFMGameplayInputManager
// Size: 0x238 (Inherited: 0x30)
struct UDFMGameplayInputManager : UGameInstanceSubsystem
{
	uint8_t Pad_0x30[0x60]; // 0x30(0x60)
	struct TMap<EDFMInputMappingTableType, EDFMGamepadPresetType> ActivatedInputPresetTypes; // 0x90(0x50)
	struct FMulticastInlineDelegate NotifyKeyRebindingApplied; // 0xE0(0x10)
	struct UDFMInputKeyRebindingSaveGame* KeyRebindingSaveGame; // 0xF0(0x8)
	struct FMulticastInlineDelegate GamepadReloadInteractModeChangeDelegate; // 0xF8(0x10)
	uint8_t Pad_0x108[0x8]; // 0x108(0x8)
	struct FMulticastInlineDelegate ApplyGamepadActionLogicDelegate; // 0x110(0x10)
	struct FMulticastInlineDelegate ApplyGamepadAutoSprintSettingDelegate; // 0x120(0x10)
	struct FMulticastInlineDelegate ApplyGamepadAutoHoldBreathDelegate; // 0x130(0x10)
	struct FMulticastInlineDelegate ApplyGamepadAutoSlideAndProneTriggerTypeDelegate; // 0x140(0x10)
	struct FMulticastInlineDelegate ApplyGamepadSideAimingControlModeDelegate; // 0x150(0x10)
	struct FMulticastInlineDelegate ApplyGamePadTriggerSuperSprintTypeDelegate; // 0x160(0x10)
	uint8_t Pad_0x170[0xB0]; // 0x170(0xB0)
	struct FMulticastInlineDelegate NotifyRefreshKeyIcons; // 0x220(0x10)
	uint8_t bInSOLOpenBag : 1; // 0x230(0x1), Mask(0x1)
	uint8_t BitPad_0x230_1 : 7; // 0x230(0x1)
	uint8_t bInSOLOpenBagDisableMoveForward : 1; // 0x231(0x1), Mask(0x1)
	uint8_t BitPad_0x231_1 : 7; // 0x231(0x1)
	uint8_t Pad_0x232[0x6]; // 0x232(0x6)


	// Object: Function DFMGamepadInput.DFMGameplayInputManager.UpdateSOLOpenBagAutoMoveForward
	// Flags: [Final|Native|Public]
	// Offset: 0xd78bc68
	// Params: [ Num(1) Size(0x1) ]
	void UpdateSOLOpenBagAutoMoveForward(uint8_t bGoingToOpenBag);

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.SetInputPreset
	// Flags: [Final|Native|Public]
	// Offset: 0xd78bb88
	// Params: [ Num(2) Size(0x2) ]
	void SetInputPreset(EDFMInputSceneType IMCId, EDFMGamepadPresetType PresetType);

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.SetGamepadReloadInteractMode
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xd78ba90
	// Params: [ Num(2) Size(0x2) ]
	void SetGamepadReloadInteractMode(const EGamepadReloadInteractMode& Mode, uint8_t ChangeWithoutNotify);

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.SetEnableForKeyRebindings
	// Flags: [Final|Native|Public]
	// Offset: 0xd78b9a8
	// Params: [ Num(2) Size(0x2) ]
	void SetEnableForKeyRebindings(EDFMInputSceneType SceneType, uint8_t bEnable);

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.SetEnableForAllKeyRebindings
	// Flags: [Final|Native|Public]
	// Offset: 0xd78b8fc
	// Params: [ Num(1) Size(0x1) ]
	void SetEnableForAllKeyRebindings(uint8_t bEnable);

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.ResetKeyRebindingsByType
	// Flags: [Final|Native|Public]
	// Offset: 0xd78b804
	// Params: [ Num(1) Size(0x10) ]
	void ResetKeyRebindingsByType(struct TArray<int32_t> InKeyFunctionTypes);

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.ReapplyKeyRebindings
	// Flags: [Final|Native|Public]
	// Offset: 0xd78b7f0
	// Params: [ Num(0) Size(0x0) ]
	void ReapplyKeyRebindings();

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.OnWeaponZoomStateChange
	// Flags: [Final|Native|Protected]
	// Offset: 0xd78b744
	// Params: [ Num(1) Size(0x1) ]
	void OnWeaponZoomStateChange(uint8_t bZoom);

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.OnSetGamePadTriggerSuperSprintType
	// Flags: [Final|Native|Public]
	// Offset: 0xd78b6a0
	// Params: [ Num(1) Size(0x4) ]
	void OnSetGamePadTriggerSuperSprintType(int32_t InTriggerSuperSprintType);

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.OnSetGamePadSlideDiveTriggerType
	// Flags: [Final|Native|Public]
	// Offset: 0xd78b5fc
	// Params: [ Num(1) Size(0x4) ]
	void OnSetGamePadSlideDiveTriggerType(int32_t InSlideAndProneTriggerType);

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.OnSetGamePadSideAimingControlMode
	// Flags: [Final|Native|Public]
	// Offset: 0xd78b558
	// Params: [ Num(1) Size(0x4) ]
	void OnSetGamePadSideAimingControlMode(int32_t InSideAimingControlMode);

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.OnSetGamePadKeyActionLogicByName
	// Flags: [Final|Native|Public]
	// Offset: 0xd78b478
	// Params: [ Num(2) Size(0xC) ]
	void OnSetGamePadKeyActionLogicByName(struct FName InSettingKeyName, int32_t InSettingValue);

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.OnSetGamePadAutoSprintType
	// Flags: [Final|Native|Public]
	// Offset: 0xd78b3d4
	// Params: [ Num(1) Size(0x1) ]
	void OnSetGamePadAutoSprintType(EAutoSprintSettingType InAutoSprintSettingType);

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.OnSafeHouseInteractTipsShow
	// Flags: [Final|Native|Private]
	// Offset: 0xd78b328
	// Params: [ Num(1) Size(0x1) ]
	void OnSafeHouseInteractTipsShow(uint8_t bIsShow);

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.OnSafeHouseInteractSecondaryTipsShow
	// Flags: [Final|Native|Private]
	// Offset: 0xd78b27c
	// Params: [ Num(1) Size(0x1) ]
	void OnSafeHouseInteractSecondaryTipsShow(uint8_t bIsShow);

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.OnInputTypeChanged
	// Flags: [Native|Public]
	// Offset: 0xd78b1d0
	// Params: [ Num(1) Size(0x1) ]
	void OnInputTypeChanged(EGPInputType InputType);

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.OnInputModeChanged
	// Flags: [Final|Native|Public]
	// Offset: 0xd78b0f0
	// Params: [ Num(2) Size(0x2) ]
	void OnInputModeChanged(EGPInputModeType OldType, EGPInputModeType NewType);

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.OnGameHudStateChangedNew
	// Flags: [Final|Native|Protected]
	// Offset: 0xd78b04c
	// Params: [ Num(1) Size(0x8) ]
	void OnGameHudStateChangedNew(struct UHudManager* InHudManager);

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.OnGameHudStateChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0xd78b038
	// Params: [ Num(0) Size(0x0) ]
	void OnGameHudStateChanged();

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.OnGameFlowLeave
	// Flags: [Final|Native|Private]
	// Offset: 0xd78af94
	// Params: [ Num(1) Size(0x1) ]
	void OnGameFlowLeave(EGameFlowStageType GameFlowStage);

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.OnGameFlowEnter
	// Flags: [Final|Native|Private]
	// Offset: 0xd78aef0
	// Params: [ Num(1) Size(0x1) ]
	void OnGameFlowEnter(EGameFlowStageType GameFlowStage);

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.IsRowAllowBindCombKeys
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xd78ad88
	// Params: [ Num(2) Size(0x141) ]
	uint8_t IsRowAllowBindCombKeys(const struct FDFMInputMappingRow& InRow);

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.IsEnableSwapL1L2AndR1R2
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xd78ad50
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsEnableSwapL1L2AndR1R2();

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.IsEnableForKeyRebindings
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xd78aca0
	// Params: [ Num(2) Size(0x2) ]
	uint8_t IsEnableForKeyRebindings(EDFMInputSceneType SceneType);

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.IsEnableForAnyKeyRebindings
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xd78ac68
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsEnableForAnyKeyRebindings();

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.IsEnableAutoHoldBreath
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xd78ac30
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsEnableAutoHoldBreath();

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.IsActionInjected
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xd78ab88
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsActionInjected(struct FName InActionOrAxisName);

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.HasKeyRebindings
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xd78aad8
	// Params: [ Num(2) Size(0x2) ]
	uint8_t HasKeyRebindings(EDFMInputSceneType SceneType);

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.HasAnyKeyRebindings
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xd78aaa0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t HasAnyKeyRebindings();

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.GetSceneTypeByIMCType
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xd78a9fc
	// Params: [ Num(2) Size(0x2) ]
	static EDFMInputSceneType GetSceneTypeByIMCType(EDFMInputMappingTableType InIMCId);

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.GetInputTriggersCombinedDedublicatedByFunctionType
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xd78a91c
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct UDFMInputTrigger*> GetInputTriggersCombinedDedublicatedByFunctionType(int32_t KeyFunctionType);

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.GetInputTriggersBySceneType
	// Flags: [Final|Native|Public]
	// Offset: 0xd78a7a0
	// Params: [ Num(3) Size(0x28) ]
	struct TArray<struct UDFMInputTrigger*> GetInputTriggersBySceneType(EDFMInputSceneType SceneType, struct TArray<int32_t> KeyFunctionTypeList);

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.GetInputTriggersByFunctionType
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xd78a6c0
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct UDFMInputTrigger*> GetInputTriggersByFunctionType(int32_t KeyFunctionType);

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.GetInputTriggerCombinedTriggers
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xd78a5e0
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct UDFMInputTrigger*> GetInputTriggerCombinedTriggers(struct UDFMInputTrigger* InInputTrigger);

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.GetInputTrigger
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xd78a4f8
	// Params: [ Num(3) Size(0x18) ]
	struct UDFMInputTrigger* GetInputTrigger(EDFMInputMappingTableType InIMCId, struct FName InActionOrAxisName);

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.GetInputMappingRowDisplayName
	// Flags: [Final|Native|Public|HasOutParms|Const]
	// Offset: 0xd78a324
	// Params: [ Num(2) Size(0x158) ]
	struct FText GetInputMappingRowDisplayName(const struct FDFMInputMappingRow& TriggerData);

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.GetInputMappingRowCombinedRows
	// Flags: [Final|Native|Public|HasOutParms|Const]
	// Offset: 0xd78a1ac
	// Params: [ Num(2) Size(0x150) ]
	struct TArray<struct FDFMInputMappingRow> GetInputMappingRowCombinedRows(const struct FDFMInputMappingRow& TriggerData);

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.GetDefaultInputMappingRowsBySceneAndPresetType
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xd78a010
	// Params: [ Num(4) Size(0x28) ]
	struct TArray<struct FDFMInputMappingRow> GetDefaultInputMappingRowsBySceneAndPresetType(EDFMInputSceneType SceneType, EDFMGamepadPresetType PresetType, struct TArray<int32_t> KeyFunctionTypeList);

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.GetDefaultInputMappingRow
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xd789ed0
	// Params: [ Num(4) Size(0x150) ]
	struct FDFMInputMappingRow GetDefaultInputMappingRow(EDFMGamepadPresetType PresetType, EDFMInputMappingTableType InIMCId, struct FName InActionOrAxisName);

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.GetBestInputTriggerByName
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xd789de0
	// Params: [ Num(3) Size(0x18) ]
	struct UDFMInputTrigger* GetBestInputTriggerByName(struct FName InActionOrAxisName, uint8_t bForce);

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.GetAllInputPresetRows
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xd789d60
	// Params: [ Num(1) Size(0x50) ]
	struct TMap<EDFMGamepadPresetType, struct FDFMInputPresetRow> GetAllInputPresetRows();

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.GetActionPossibleRedirectName
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0xd789c80
	// Params: [ Num(2) Size(0x10) ]
	static void GetActionPossibleRedirectName(struct FName InActionOrAxisName, struct FName& OutRedirectedName);

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xd789bdc
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameplayInputManager* Get(struct UObject* InGameInstanceContext);

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.DiffCurKeyBindingsAgainstPreset
	// Flags: [Final|Native|Public]
	// Offset: 0xd7899a8
	// Params: [ Num(5) Size(0x78) ]
	struct TMap<struct FName, uint8_t> DiffCurKeyBindingsAgainstPreset(EDFMInputSceneType SceneType, EDFMGamepadPresetType PresetType, struct TArray<int32_t> KeyFunctionTypeList, struct TArray<struct FName> ActionOrAxisToIgnore);

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.ApplyInputSettings
	// Flags: [Final|Native|Public]
	// Offset: 0xd789994
	// Params: [ Num(0) Size(0x0) ]
	void ApplyInputSettings();

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.ApplyGamePadSetting
	// Flags: [Final|Native|Public]
	// Offset: 0xd789980
	// Params: [ Num(0) Size(0x0) ]
	void ApplyGamePadSetting();

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.ApplyGamepadActionLogic
	// Flags: [Final|Native|Public]
	// Offset: 0xd78996c
	// Params: [ Num(0) Size(0x0) ]
	void ApplyGamepadActionLogic();

	// Object: Function DFMGamepadInput.DFMGameplayInputManager.ApplyDeserializedKeySettings
	// Flags: [Final|Native|Public]
	// Offset: 0xd789958
	// Params: [ Num(0) Size(0x0) ]
	void ApplyDeserializedKeySettings();
	DEFINE_UE_CLASS_HELPERS(UDFMGameplayInputManager, "DFMGameplayInputManager")

};

// Object: Class DFMGamepadInput.DFMInputComponent
// Size: 0x288 (Inherited: 0x180)
struct UDFMInputComponent : UInputComponent
{
	uint8_t Pad_0x180[0x20]; // 0x180(0x20)
	struct TMap<EDFMInputMappingTableType, struct FDFMInputMappingContext> InputMappingContexts; // 0x1A0(0x50)
	struct TMap<EDFMInputMappingTableType, uint8_t> InputMappingContextsEnableState; // 0x1F0(0x50)
	struct TArray<struct UDFMInputTrigger*> InputTriggerPool; // 0x240(0x10)
	struct TArray<struct UDFMInputTrigger*> UsedInputTriggerPool; // 0x250(0x10)
	struct TArray<struct UDFMInputModifier*> InputModifierPool; // 0x260(0x10)
	uint8_t Pad_0x270[0x18]; // 0x270(0x18)
	DEFINE_UE_CLASS_HELPERS(UDFMInputComponent, "DFMInputComponent")

};

// Object: Class DFMGamepadInput.DFMInputKeyRebindingSaveGame
// Size: 0x1A0 (Inherited: 0x28)
struct UDFMInputKeyRebindingSaveGame : UObject
{
	struct UDFMGameplayInputManager* GameplayInputManager; // 0x28(0x8)
	int32_t SavedVersion; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct TMap<EDFMInputSceneType, EDFMGamepadPresetType> MapSceneType2SelectedInputPresetType; // 0x38(0x50)
	struct TMap<EDFMInputSceneType, EDFMGamepadPresetType> MapSceneType2KeyRebindingBasedPresetType; // 0x88(0x50)
	struct TMap<EDFMInputSceneType, uint8_t> MapSceneType2bIsKeyRebindingEnabled; // 0xD8(0x50)
	struct TArray<struct FDFMInputKeyRebindingInfo> KeyRebindingInfos; // 0x128(0x10)
	struct FName SelectedPresetName; // 0x138(0x8)
	struct TMap<EDFMInputMappingTableType, struct FName> SelectedJoystickInputPresetNames; // 0x140(0x50)
	uint8_t bIsKeyRebindingEnabled : 1; // 0x190(0x1), Mask(0x1)
	uint8_t BitPad_0x190_1 : 7; // 0x190(0x1)
	uint8_t Pad_0x191[0x3]; // 0x191(0x3)
	struct FName KeyRebindingSelectedPresetName; // 0x194(0x8)
	uint8_t Pad_0x19C[0x4]; // 0x19C(0x4)


	// Object: Function DFMGamepadInput.DFMInputKeyRebindingSaveGame.SerializeCustomKeySetting
	// Flags: [Final|Native|Public]
	// Offset: 0xd78edf8
	// Params: [ Num(1) Size(0x10) ]
	struct FString SerializeCustomKeySetting();

	// Object: Function DFMGamepadInput.DFMInputKeyRebindingSaveGame.ReceiveCustomKeySetting
	// Flags: [Final|Native|Public]
	// Offset: 0xd78ed00
	// Params: [ Num(1) Size(0x10) ]
	void ReceiveCustomKeySetting(struct FString Value);
	DEFINE_UE_CLASS_HELPERS(UDFMInputKeyRebindingSaveGame, "DFMInputKeyRebindingSaveGame")

};

// Object: Class DFMGamepadInput.DFMInputModifier
// Size: 0x188 (Inherited: 0x28)
struct UDFMInputModifier : UObject
{
	uint8_t Pad_0x28[0x160]; // 0x28(0x160)
	DEFINE_UE_CLASS_HELPERS(UDFMInputModifier, "DFMInputModifier")

};

// Object: Class DFMGamepadInput.DFMInputModifierForScaleValue
// Size: 0x188 (Inherited: 0x188)
struct UDFMInputModifierForScaleValue : UDFMInputModifier
{	DEFINE_UE_CLASS_HELPERS(UDFMInputModifierForScaleValue, "DFMInputModifierForScaleValue")

};

// Object: Class DFMGamepadInput.DFMInputModifierForDisableInput
// Size: 0x1B0 (Inherited: 0x188)
struct UDFMInputModifierForDisableInput : UDFMInputModifier
{
	uint8_t Pad_0x188[0x28]; // 0x188(0x28)
	DEFINE_UE_CLASS_HELPERS(UDFMInputModifierForDisableInput, "DFMInputModifierForDisableInput")

};

// Object: Class DFMGamepadInput.DFMInputModifierForDisableInputV2
// Size: 0x1B0 (Inherited: 0x1B0)
struct UDFMInputModifierForDisableInputV2 : UDFMInputModifierForDisableInput
{	DEFINE_UE_CLASS_HELPERS(UDFMInputModifierForDisableInputV2, "DFMInputModifierForDisableInputV2")

};

// Object: Class DFMGamepadInput.DFMInputModifierForGameHudState
// Size: 0x188 (Inherited: 0x188)
struct UDFMInputModifierForGameHudState : UDFMInputModifier
{	DEFINE_UE_CLASS_HELPERS(UDFMInputModifierForGameHudState, "DFMInputModifierForGameHudState")

};

// Object: Class DFMGamepadInput.DFMInputModifierForAxisRestrict
// Size: 0x188 (Inherited: 0x188)
struct UDFMInputModifierForAxisRestrict : UDFMInputModifier
{	DEFINE_UE_CLASS_HELPERS(UDFMInputModifierForAxisRestrict, "DFMInputModifierForAxisRestrict")

};

// Object: Class DFMGamepadInput.DFMInputModifierForBusinessRestrict
// Size: 0x188 (Inherited: 0x188)
struct UDFMInputModifierForBusinessRestrict : UDFMInputModifier
{	DEFINE_UE_CLASS_HELPERS(UDFMInputModifierForBusinessRestrict, "DFMInputModifierForBusinessRestrict")

};

// Object: Class DFMGamepadInput.DFMInputModifierForDeadZone
// Size: 0x188 (Inherited: 0x188)
struct UDFMInputModifierForDeadZone : UDFMInputModifier
{	DEFINE_UE_CLASS_HELPERS(UDFMInputModifierForDeadZone, "DFMInputModifierForDeadZone")

};

// Object: Class DFMGamepadInput.GamepadSensitivityCurveManager
// Size: 0x38 (Inherited: 0x30)
struct UGamepadSensitivityCurveManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
	DEFINE_UE_CLASS_HELPERS(UGamepadSensitivityCurveManager, "GamepadSensitivityCurveManager")

};

// Object: Class DFMGamepadInput.DFMInputModifierForSensitivity
// Size: 0x1D8 (Inherited: 0x188)
struct UDFMInputModifierForSensitivity : UDFMInputModifier
{
	struct TMap<EGamepadSensitivityCurveType, struct UCurveFloat*> CacheCurvesMap; // 0x188(0x50)


	// Object: Function DFMGamepadInput.DFMInputModifierForSensitivity.OnDataLoadComplete
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0xd78ef78
	// Params: [ Num(2) Size(0x19) ]
	void OnDataLoadComplete(const struct FSoftObjectPath& Asset, EGamepadSensitivityCurveType Type);
	DEFINE_UE_CLASS_HELPERS(UDFMInputModifierForSensitivity, "DFMInputModifierForSensitivity")

};

// Object: Class DFMGamepadInput.DFMInputModifierForSmooth
// Size: 0x288 (Inherited: 0x188)
struct UDFMInputModifierForSmooth : UDFMInputModifier
{
	uint8_t Pad_0x188[0x100]; // 0x188(0x100)
	DEFINE_UE_CLASS_HELPERS(UDFMInputModifierForSmooth, "DFMInputModifierForSmooth")

};

// Object: Class DFMGamepadInput.DFMInputTrigger
// Size: 0x1A8 (Inherited: 0x28)
struct UDFMInputTrigger : UObject
{
	uint8_t Pad_0x28[0x180]; // 0x28(0x180)


	// Object: Function DFMGamepadInput.DFMInputTrigger.HasKeyRebinding
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xd78f584
	// Params: [ Num(1) Size(0x1) ]
	uint8_t HasKeyRebinding();

	// Object: Function DFMGamepadInput.DFMInputTrigger.GetSameKeyTriggersMaxWaitOtherCombKeyWaitTime
	// Flags: [Final|Native|Public]
	// Offset: 0xd78f550
	// Params: [ Num(1) Size(0x4) ]
	float GetSameKeyTriggersMaxWaitOtherCombKeyWaitTime();

	// Object: Function DFMGamepadInput.DFMInputTrigger.GetKey2
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xd78f40c
	// Params: [ Num(1) Size(0x18) ]
	struct FKey GetKey2();

	// Object: Function DFMGamepadInput.DFMInputTrigger.GetKey1
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xd78f2c8
	// Params: [ Num(1) Size(0x18) ]
	struct FKey GetKey1();

	// Object: Function DFMGamepadInput.DFMInputTrigger.GetDefaultKey2
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xd78f1bc
	// Params: [ Num(1) Size(0x18) ]
	struct FKey GetDefaultKey2();

	// Object: Function DFMGamepadInput.DFMInputTrigger.GetDefaultKey1
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xd78f0b0
	// Params: [ Num(1) Size(0x18) ]
	struct FKey GetDefaultKey1();

	// Object: Function DFMGamepadInput.DFMInputTrigger.GetDefaultInputMappingData
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xd78f090
	// Params: [ Num(1) Size(0x140) ]
	struct FDFMInputMappingRow GetDefaultInputMappingData();
	DEFINE_UE_CLASS_HELPERS(UDFMInputTrigger, "DFMInputTrigger")

};

// Object: Class DFMGamepadInput.DFMInputTriggerForAxis
// Size: 0x1B0 (Inherited: 0x1A8)
struct UDFMInputTriggerForAxis : UDFMInputTrigger
{
	uint8_t Pad_0x1A8[0x8]; // 0x1A8(0x8)
	DEFINE_UE_CLASS_HELPERS(UDFMInputTriggerForAxis, "DFMInputTriggerForAxis")

};

// Object: Class DFMGamepadInput.DFMInputTriggerSingleKey
// Size: 0x1A8 (Inherited: 0x1A8)
struct UDFMInputTriggerSingleKey : UDFMInputTrigger
{	DEFINE_UE_CLASS_HELPERS(UDFMInputTriggerSingleKey, "DFMInputTriggerSingleKey")

};

// Object: Class DFMGamepadInput.DFMInputTriggerPressed
// Size: 0x1A8 (Inherited: 0x1A8)
struct UDFMInputTriggerPressed : UDFMInputTrigger
{	DEFINE_UE_CLASS_HELPERS(UDFMInputTriggerPressed, "DFMInputTriggerPressed")

};

// Object: Class DFMGamepadInput.DFMInputTriggerReleased
// Size: 0x1A8 (Inherited: 0x1A8)
struct UDFMInputTriggerReleased : UDFMInputTrigger
{	DEFINE_UE_CLASS_HELPERS(UDFMInputTriggerReleased, "DFMInputTriggerReleased")

};

// Object: Class DFMGamepadInput.DFMInputTriggerLongPressed
// Size: 0x1B0 (Inherited: 0x1A8)
struct UDFMInputTriggerLongPressed : UDFMInputTrigger
{
	uint8_t Pad_0x1A8[0x8]; // 0x1A8(0x8)
	DEFINE_UE_CLASS_HELPERS(UDFMInputTriggerLongPressed, "DFMInputTriggerLongPressed")

};

// Object: Class DFMGamepadInput.DFMInputTriggerBounceLongPressed
// Size: 0x1B8 (Inherited: 0x1B0)
struct UDFMInputTriggerBounceLongPressed : UDFMInputTriggerLongPressed
{
	uint8_t Pad_0x1B0[0x8]; // 0x1B0(0x8)
	DEFINE_UE_CLASS_HELPERS(UDFMInputTriggerBounceLongPressed, "DFMInputTriggerBounceLongPressed")

};

// Object: Class DFMGamepadInput.DFMInputTriggerBounce
// Size: 0x1B0 (Inherited: 0x1A8)
struct UDFMInputTriggerBounce : UDFMInputTrigger
{
	uint8_t Pad_0x1A8[0x8]; // 0x1A8(0x8)
	DEFINE_UE_CLASS_HELPERS(UDFMInputTriggerBounce, "DFMInputTriggerBounce")

};

// Object: Class DFMGamepadInput.DFMGamepadInputPresetMgr
// Size: 0x38 (Inherited: 0x30)
struct UDFMGamepadInputPresetMgr : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
	DEFINE_UE_CLASS_HELPERS(UDFMGamepadInputPresetMgr, "DFMGamepadInputPresetMgr")

};

// Object: Class DFMGamepadInput.DFMGamepadInputMappingsMgr
// Size: 0x38 (Inherited: 0x30)
struct UDFMGamepadInputMappingsMgr : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
	DEFINE_UE_CLASS_HELPERS(UDFMGamepadInputMappingsMgr, "DFMGamepadInputMappingsMgr")

};

// Object: Class DFMGamepadInput.DFMobilePlayerInput
// Size: 0x6A8 (Inherited: 0x6A0)
struct UDFMobilePlayerInput : UMobilePlayerInput
{
	uint8_t Pad_0x6A0[0x8]; // 0x6A0(0x8)


	// Object: Function DFMGamepadInput.DFMobilePlayerInput.SetTimerForRefreshButtonOverlap
	// Flags: [Final|Native|Public]
	// Offset: 0xfa87634
	// Params: [ Num(0) Size(0x0) ]
	void SetTimerForRefreshButtonOverlap();
	DEFINE_UE_CLASS_HELPERS(UDFMobilePlayerInput, "DFMobilePlayerInput")

};

// Object: Class DFMGamepadInput.DFMPlayerInput
// Size: 0x820 (Inherited: 0x738)
struct UDFMPlayerInput : UDFHDPlayerInput
{
	uint8_t Pad_0x738[0x7C]; // 0x738(0x7C)
	float CachedFinalGamepadSensitivityX; // 0x7B4(0x4)
	float CachedFinalGamepadSensitivityY; // 0x7B8(0x4)
	uint8_t Pad_0x7BC[0x64]; // 0x7BC(0x64)


	// Object: Function DFMGamepadInput.DFMPlayerInput.GetSticksState
	// Flags: [Final|Native|Public]
	// Offset: 0xd78fca4
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<float> GetSticksState(int32_t Type);

	// Object: Function DFMGamepadInput.DFMPlayerInput.GetKeyAxisValueAfterRestrict
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xd78fbe8
	// Params: [ Num(2) Size(0xC) ]
	float GetKeyAxisValueAfterRestrict(const struct FName& AxisName);

	// Object: Function DFMGamepadInput.DFMPlayerInput.GetKeyAxisValueAfterCurve
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xd78fb2c
	// Params: [ Num(2) Size(0xC) ]
	float GetKeyAxisValueAfterCurve(const struct FName& AxisName);

	// Object: Function DFMGamepadInput.DFMPlayerInput.GetFinalKeyAxisValue
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xd78fa70
	// Params: [ Num(2) Size(0xC) ]
	float GetFinalKeyAxisValue(const struct FName& AxisName);
	DEFINE_UE_CLASS_HELPERS(UDFMPlayerInput, "DFMPlayerInput")

};

} // namespace SDK
