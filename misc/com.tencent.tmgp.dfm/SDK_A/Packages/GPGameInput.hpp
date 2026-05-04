#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "SlateCore.hpp"

namespace SDK
{

// Package: GPGameInput
// Enums: 12
// Structs: 16
// Classes: 14

enum class ERotationMethodType : uint8_t;
enum class ETouchIndex : uint8_t;
struct FKey;
struct FPointerEvent;
struct UClientBaseSetting;
struct UClientControlSetting;
struct UClientSensitivitySetting;
struct UClientSensitivitySettingHD;
struct UClientVehicleSetting;
struct UClientVehicleSettingHD;
struct UCurveFloat;
struct UGameInstance;
struct FHDAimingDebugInfo;
struct FMirrorKeyEvent;
struct FMirrorAnalogInputEvent;
struct FInputAxisSimulationData;
struct FSmoothTouchData;
struct FMobileInputData;
struct FMobileButton;
struct FMobileButtonConfig;
struct FMobileButtonStyle;
struct FMobileButtonStyleConfig;
struct FFireAxesRecordData;
struct FFireAxesRecordDataItem;
struct FFireInputRecordData;
struct FFireInputRecordDataItem;
struct FControlButtonInfo;
struct FMobileTouchEvent;
struct UDualSenseDeviceManager;
struct UGamepadInputSimulationManager;
struct UGPInputDelegates;
struct UGPInputHelper;
struct UGPPlayerInput;
struct UHapticFeedbackSubsystem;
struct UMobilePlayerInput;
struct UHDPlayerInput;
struct UMobileGameHandle;
struct UMobileFixedFireGameHandle;
struct UMobileInputButton;
struct UMobileInputConfig;
struct UMobileMoveHandleImpl;
struct UMobileMoveJoystickHandleImpl;

// Object: Enum GPGameInput.EGPGamepadInputType
enum class EGPGamepadInputType : uint8_t
{
	XBox360 = 0,
	Sony = 1,
	EGPGamepadInputType_MAX = 2
};

// Object: Enum GPGameInput.EGPInputModeType
enum class EGPInputModeType : uint8_t
{
	None = 0,
	GameOnly = 1,
	UIOnly = 2,
	GameAndUI = 3,
	ForceUIOnly = 4,
	Count = 5,
	EGPInputModeType_MAX = 6
};

// Object: Enum GPGameInput.EGPInputType
enum class EGPInputType : uint8_t
{
	MouseAndKeyboard = 0,
	Gamepad = 1,
	Touch = 2,
	Count = 3,
	EGPInputType_MAX = 4
};

// Object: Enum GPGameInput.EMobileTouchType
enum class EMobileTouchType : uint8_t
{
	Begin = 0,
	FirstMove = 1,
	Move = 2,
	End = 3,
	EMobileTouchType_MAX = 4
};

// Object: Enum GPGameInput.EMobileControlButtonType
enum class EMobileControlButtonType : uint8_t
{
	EControlButtonType_None = 0,
	EControlButtonType_Jump = 1,
	EControlButtonType_Crouch = 2,
	EControlButtonType_Prone = 3,
	EControlButtonType_Aim = 4,
	EControlButtonType_Fire = 5,
	EControlButtonType_LeftPeek = 6,
	EControlButtonType_RightPeek = 7,
	EControlButtonType_LeftFire = 8,
	EControlButtonType_Throw = 9,
	EControlButtonType_SilentWalk = 10,
	EControlButtonType_Eye = 11,
	EControlButtonType_FastMelee = 12,
	EControlButtonType_VaultClimb = 13,
	ControlButtonType_Zipline = 14,
	ControlButtonType_Parachute = 15,
	ControlButtonType_Assassinate = 16,
	ControlButtonType_CarryBody = 17,
	ControlButtonType_Interact0 = 18,
	ControlButtonType_Interact1 = 19,
	ControlButtonType_Interact2 = 20,
	ControlButtonType_PickUp = 21,
	ControlButtonType_ItemDetail = 22,
	EControlButtonType_SkillX = 23,
	EControlButtonType_SkillG = 24,
	EControlButtonType_SkillV = 25,
	EControlButtonType_Skill4 = 26,
	EControlButtonType_Skill5 = 27,
	EControlButtonType_SkillSelf = 28,
	EControlButtonType_SkillActiveMine = 29,
	EControlButtonType_SkillRecyleMine = 30,
	EControlButtonType_Relink = 31,
	EControlButtonType_Marking = 32,
	EControlButtonType_Commercialization = 33,
	EControlButtonType_SkillInspect = 34,
	EControlButtonType_Reload = 35,
	EControlButtonType_ChangeScope = 36,
	EControlButtonType_VehicleSkill1 = 37,
	EControlButtonType_VehicleSkill2 = 38,
	EControlButtonType_VehicleSkill3 = 39,
	EControlButtonType_VehicleSkill4 = 40,
	EControlButtonType_VehicleFire = 41,
	EControlButtonType_VehicleLeftFire = 42,
	EControlButtonType_VehicleJoystickFire = 43,
	EControlButtonType_VehicleJoystickLeftFire = 44,
	EControlButtonType_SuperSprint = 45,
	EControlButtonType_VehicleSecondWeaponFire = 46,
	EControlButtonType_SwimDown = 47,
	EControlButtonType_SwimUp = 48,
	EControlButtonType_VehicleSwitchWeaponFastFire = 49,
	EControlButtonType_VehicleFreeCamera = 50,
	EControlButtonType_VehicleSwitchWallType = 51,
	EControlButtonType_VehicleDroneSkill1 = 52,
	EControlButtonType_VehicleDroneSkill2 = 53,
	EControlButtonType_VehicleDroneSkill3 = 54,
	EControlButtonType_VehicleDroneSkill4 = 55,
	EControlButtonType_BirdSkill1 = 56,
	EControlButtonType_BirdSkill2 = 57,
	EMobileControlButtonType_MAX = 58
};

// Object: Enum GPGameInput.EInputDeviceTriggerMask
enum class EInputDeviceTriggerMask : uint8_t
{
	None = 0,
	Left = 1,
	Right = 2,
	EInputDeviceTriggerMask_MAX = 3
};

// Object: Enum GPGameInput.EStickSimDPadType
enum class EStickSimDPadType : uint8_t
{
	DontSimulate = 0,
	LeftStickSimulate = 1,
	RightStickSimulate = 2,
	EStickSimDPadType_MAX = 3
};

// Object: Enum GPGameInput.EJoystickMode
enum class EJoystickMode : uint8_t
{
	EJoystickMode_Character = 0,
	EJoystickMode_Vehicle = 1,
	EJoystickMode_MAX = 2
};

// Object: Enum GPGameInput.EMouseInputType
enum class EMouseInputType : uint8_t
{
	ENormalWeapon = 0,
	EVehicleDriveWeapon = 1,
	EHelicopterDriveWeapon = 2,
	EVehicleWeapon = 3,
	EJet = 4,
	EMouseInputType_MAX = 5
};

// Object: Enum GPGameInput.EGyroscopeInputForbidReason
enum class EGyroscopeInputForbidReason : uint8_t
{
	EForbidReason_NumMax = 0,
	EForbidReason_MAX = 1
};

// Object: Enum GPGameInput.EMobileInputPhase
enum class EMobileInputPhase : uint8_t
{
	MobileInputPhase_Began = 0,
	MobileInputPhase_Moved = 1,
	MobileInputPhase_Stationary = 2,
	MobileInputPhase_Ended = 3,
	MobileInputPhase_Canceled = 4,
	MobileInputPhase_MAX = 5
};

// Object: Enum GPGameInput.EGPInputMode
enum class EGPInputMode : uint8_t
{
	GameOnly = 0,
	GameAndUI = 1,
	UIOnly = 2,
	EGPInputMode_MAX = 3
};

// Object: ScriptStruct GPGameInput.HDAimingDebugInfo
// Size: 0x10 (Inherited: 0x0)
struct FHDAimingDebugInfo
{
	float DeltaMouseX; // 0x0(0x4)
	float DeltaMouseY; // 0x4(0x4)
	float ScopeZoomRate; // 0x8(0x4)
	int32_t ADSIndex; // 0xC(0x4)
};

// Object: ScriptStruct GPGameInput.MirrorKeyEvent
// Size: 0x38 (Inherited: 0x18)
struct FMirrorKeyEvent : FInputEvent
{
	uint8_t Pad_0x18[0x20]; // 0x18(0x20)
};

// Object: ScriptStruct GPGameInput.MirrorAnalogInputEvent
// Size: 0x40 (Inherited: 0x38)
struct FMirrorAnalogInputEvent : FKeyEvent
{
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
};

// Object: ScriptStruct GPGameInput.InputAxisSimulationData
// Size: 0x10 (Inherited: 0x0)
struct FInputAxisSimulationData
{
	float GamepadLeftStickAxisXSimValue; // 0x0(0x4)
	float GamepadLeftStickAxisYSimValue; // 0x4(0x4)
	float GamepadRightStickAxisXSimValue; // 0x8(0x4)
	float GamepadRightStickAxisYSimValue; // 0xC(0x4)
};

// Object: ScriptStruct GPGameInput.SmoothTouchData
// Size: 0x20 (Inherited: 0x0)
struct FSmoothTouchData
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: ScriptStruct GPGameInput.MobileInputData
// Size: 0x5C (Inherited: 0x0)
struct FMobileInputData
{
	uint8_t Pad_0x0[0x5C]; // 0x0(0x5C)
};

// Object: ScriptStruct GPGameInput.MobileButton
// Size: 0x1C (Inherited: 0x0)
struct FMobileButton
{
	float X; // 0x0(0x4)
	float Y; // 0x4(0x4)
	float Scale; // 0x8(0x4)
	float MinScale; // 0xC(0x4)
	float MaxScale; // 0x10(0x4)
	float Alpha; // 0x14(0x4)
	uint8_t AnchorType; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
};

// Object: ScriptStruct GPGameInput.MobileButtonConfig
// Size: 0xE0 (Inherited: 0x0)
struct FMobileButtonConfig
{
	struct FMobileButton MovementButton; // 0x0(0x1C)
	struct FMobileButton RotationButton; // 0x1C(0x1C)
	struct FMobileButton FixedFireButton; // 0x38(0x1C)
	struct FMobileButton FollowFireButton; // 0x54(0x1C)
	struct FMobileButton MoveFireButton; // 0x70(0x1C)
	struct FMobileButton JumpButton; // 0x8C(0x1C)
	struct FMobileButton CrouchButton; // 0xA8(0x1C)
	struct FMobileButton RightHand; // 0xC4(0x1C)
};

// Object: ScriptStruct GPGameInput.MobileButtonStyle
// Size: 0xC (Inherited: 0x0)
struct FMobileButtonStyle
{
	float Width; // 0x0(0x4)
	float Height; // 0x4(0x4)
	uint8_t Type; // 0x8(0x1)
	uint8_t bFixed : 1; // 0x9(0x1), Mask(0x1)
	uint8_t BitPad_0x9_1 : 7; // 0x9(0x1)
	uint8_t Pad_0xA[0x2]; // 0xA(0x2)
};

// Object: ScriptStruct GPGameInput.MobileButtonStyleConfig
// Size: 0x3C (Inherited: 0x0)
struct FMobileButtonStyleConfig
{
	struct FMobileButtonStyle MovementButton; // 0x0(0xC)
	struct FMobileButtonStyle RotationButton; // 0xC(0xC)
	struct FMobileButtonStyle FireButton; // 0x18(0xC)
	struct FMobileButtonStyle JumpButton; // 0x24(0xC)
	struct FMobileButtonStyle CrouchButton; // 0x30(0xC)
};

// Object: ScriptStruct GPGameInput.FireAxesRecordData
// Size: 0x18 (Inherited: 0x0)
struct FFireAxesRecordData
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct GPGameInput.FireAxesRecordDataItem
// Size: 0x14 (Inherited: 0x0)
struct FFireAxesRecordDataItem
{
	uint8_t Pad_0x0[0x14]; // 0x0(0x14)
};

// Object: ScriptStruct GPGameInput.FireInputRecordData
// Size: 0x18 (Inherited: 0x0)
struct FFireInputRecordData
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct GPGameInput.FireInputRecordDataItem
// Size: 0x18 (Inherited: 0x0)
struct FFireInputRecordDataItem
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct GPGameInput.ControlButtonInfo
// Size: 0x20 (Inherited: 0x0)
struct FControlButtonInfo
{
	uint8_t bAllowRotate : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bInRotateLimitationArea : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t bIsPressed : 1; // 0x2(0x1), Mask(0x1)
	uint8_t BitPad_0x2_1 : 7; // 0x2(0x1)
	uint8_t Pad_0x3[0x1]; // 0x3(0x1)
	int32_t FingerIndex; // 0x4(0x4)
	uint8_t bAllowMove : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct UObject* DelegateOwner; // 0x10(0x8)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
};

// Object: ScriptStruct GPGameInput.MobileTouchEvent
// Size: 0x18 (Inherited: 0x0)
struct FMobileTouchEvent
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: Class GPGameInput.DualSenseDeviceManager
// Size: 0xF8 (Inherited: 0x30)
struct UDualSenseDeviceManager : UGameInstanceSubsystem
{
	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
	struct FVector MotionSensorTilt; // 0x38(0xC)
	struct FVector MotionSensorRotationRate; // 0x44(0xC)
	struct FVector MotionSensorGravity; // 0x50(0xC)
	struct FVector MotionSensorAcceleration; // 0x5C(0xC)
	uint8_t Pad_0x68[0x8]; // 0x68(0x8)
	struct TMap<int32_t, struct FVector2D> TouchPadPositions; // 0x70(0x50)
	uint8_t Pad_0xC0[0x38]; // 0xC0(0x38)


	// Object: Function GPGameInput.DualSenseDeviceManager.SetLightBarColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x9143a10
	// Params: [ Num(1) Size(0x4) ]
	void SetLightBarColor(struct FColor Color);

	// Object: Function GPGameInput.DualSenseDeviceManager.SetAdaptiveTriggerEffect_Weapon
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x914387c
	// Params: [ Num(5) Size(0x8) ]
	void SetAdaptiveTriggerEffect_Weapon(EInputDeviceTriggerMask TriggerMask, uint8_t StartPosition, uint8_t EndPosition, uint8_t Strength, int32_t ControllerId);

	// Object: Function GPGameInput.DualSenseDeviceManager.SetAdaptiveTriggerEffect_Vibration
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x91436e8
	// Params: [ Num(5) Size(0x8) ]
	void SetAdaptiveTriggerEffect_Vibration(EInputDeviceTriggerMask TriggerMask, uint8_t Position, uint8_t frequency, uint8_t Amplitude, int32_t ControllerId);

	// Object: Function GPGameInput.DualSenseDeviceManager.SetAdaptiveTriggerEffect_SlopeFeedback
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9143518
	// Params: [ Num(6) Size(0xC) ]
	void SetAdaptiveTriggerEffect_SlopeFeedback(EInputDeviceTriggerMask TriggerMask, uint8_t StartPosition, uint8_t StartStrength, uint8_t EndPosition, uint8_t EndStrength, int32_t ControllerId);

	// Object: Function GPGameInput.DualSenseDeviceManager.SetAdaptiveTriggerEffect_Off
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9143438
	// Params: [ Num(2) Size(0x8) ]
	void SetAdaptiveTriggerEffect_Off(EInputDeviceTriggerMask TriggerMask, int32_t ControllerId);

	// Object: Function GPGameInput.DualSenseDeviceManager.SetAdaptiveTriggerEffect_MultiPositionVibration
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x91432c8
	// Params: [ Num(4) Size(0x1C) ]
	void SetAdaptiveTriggerEffect_MultiPositionVibration(EInputDeviceTriggerMask TriggerMask, uint8_t frequency, struct TArray<uint8_t>& Amplitudes, int32_t ControllerId);

	// Object: Function GPGameInput.DualSenseDeviceManager.SetAdaptiveTriggerEffect_MultiPositionFeedback
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9143194
	// Params: [ Num(3) Size(0x1C) ]
	void SetAdaptiveTriggerEffect_MultiPositionFeedback(EInputDeviceTriggerMask TriggerMask, struct TArray<uint8_t>& Strengths, int32_t ControllerId);

	// Object: Function GPGameInput.DualSenseDeviceManager.SetAdaptiveTriggerEffect_Feedback
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x914303c
	// Params: [ Num(4) Size(0x8) ]
	void SetAdaptiveTriggerEffect_Feedback(EInputDeviceTriggerMask TriggerMask, uint8_t Position, uint8_t Strength, int32_t ControllerId);

	// Object: Function GPGameInput.DualSenseDeviceManager.IsTouchEventEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9143004
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsTouchEventEnabled();

	// Object: Function GPGameInput.DualSenseDeviceManager.IsMotionEventEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9142fcc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsMotionEventEnabled();

	// Object: Function GPGameInput.DualSenseDeviceManager.IsLocalDualSenseGamepadAttached
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9142f94
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsLocalDualSenseGamepadAttached();

	// Object: Function GPGameInput.DualSenseDeviceManager.IsLightBarEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9142f5c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsLightBarEnabled();

	// Object: Function GPGameInput.DualSenseDeviceManager.IsAnyDualSenseGamepadAttached
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9142f24
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsAnyDualSenseGamepadAttached();

	// Object: Function GPGameInput.DualSenseDeviceManager.GetLocalDualSenseDeviceId
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9142ef0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetLocalDualSenseDeviceId();

	// Object: Function GPGameInput.DualSenseDeviceManager.GetLightBarColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x9142ebc
	// Params: [ Num(1) Size(0x4) ]
	struct FColor GetLightBarColor();

	// Object: Function GPGameInput.DualSenseDeviceManager.GetHandleIdByUserIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9142e10
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetHandleIdByUserIndex(int32_t UserIndex);

	// Object: Function GPGameInput.DualSenseDeviceManager.GetControllerTypeByUserIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9142d64
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetControllerTypeByUserIndex(int32_t UserIndex);

	// Object: Function GPGameInput.DualSenseDeviceManager.GetControllerTypeByHandleId
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9142cb8
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetControllerTypeByHandleId(int32_t Handle);

	// Object: Function GPGameInput.DualSenseDeviceManager.GetControllerNameByUserIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9142bd8
	// Params: [ Num(2) Size(0x18) ]
	struct FString GetControllerNameByUserIndex(int32_t UserIndex);

	// Object: Function GPGameInput.DualSenseDeviceManager.GetControllerNameByHandleId
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9142af8
	// Params: [ Num(2) Size(0x18) ]
	struct FString GetControllerNameByHandleId(int32_t Handle);

	// Object: Function GPGameInput.DualSenseDeviceManager.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x9142a54
	// Params: [ Num(2) Size(0x10) ]
	static struct UDualSenseDeviceManager* Get(struct UObject* InGameInstanceContext);

	// Object: Function GPGameInput.DualSenseDeviceManager.EnableTouchEvent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9142a40
	// Params: [ Num(0) Size(0x0) ]
	void EnableTouchEvent();

	// Object: Function GPGameInput.DualSenseDeviceManager.EnableMotionEvent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9142a2c
	// Params: [ Num(0) Size(0x0) ]
	void EnableMotionEvent();

	// Object: Function GPGameInput.DualSenseDeviceManager.EnableLightBar
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9142a18
	// Params: [ Num(0) Size(0x0) ]
	void EnableLightBar();

	// Object: Function GPGameInput.DualSenseDeviceManager.EnableAdvanceVibration
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9142968
	// Params: [ Num(2) Size(0x5) ]
	uint8_t EnableAdvanceVibration(int32_t DeviceID);

	// Object: Function GPGameInput.DualSenseDeviceManager.DisableTouchEvent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9142954
	// Params: [ Num(0) Size(0x0) ]
	void DisableTouchEvent();

	// Object: Function GPGameInput.DualSenseDeviceManager.DisableMotionEvent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9142940
	// Params: [ Num(0) Size(0x0) ]
	void DisableMotionEvent();

	// Object: Function GPGameInput.DualSenseDeviceManager.DisableLightBar
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x914292c
	// Params: [ Num(0) Size(0x0) ]
	void DisableLightBar();

	// Object: Function GPGameInput.DualSenseDeviceManager.DisableAdvanceVibration
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x914287c
	// Params: [ Num(2) Size(0x5) ]
	uint8_t DisableAdvanceVibration(int32_t DeviceID);
	DEFINE_UE_CLASS_HELPERS(UDualSenseDeviceManager, "DualSenseDeviceManager")

};

// Object: Class GPGameInput.GamepadInputSimulationManager
// Size: 0x98 (Inherited: 0x30)
struct UGamepadInputSimulationManager : UGameInstanceSubsystem
{
	struct TMap<int32_t, struct FInputAxisSimulationData> AxisSimulationDataMap; // 0x30(0x50)
	uint8_t Pad_0x80[0x18]; // 0x80(0x18)


	// Object: Function GPGameInput.GamepadInputSimulationManager.StopGamepadAxisSimulation
	// Flags: [Final|Native|Public]
	// Offset: 0x9144078
	// Params: [ Num(1) Size(0x4) ]
	void StopGamepadAxisSimulation(int32_t InControllerId);

	// Object: Function GPGameInput.GamepadInputSimulationManager.StartGamepadAxisSimulation
	// Flags: [Final|Native|Public]
	// Offset: 0x9143eec
	// Params: [ Num(5) Size(0x14) ]
	void StartGamepadAxisSimulation(int32_t InControllerId, float InLeftStickAxisX, float InLeftStickAxisY, float InRightStickAxisX, float InRightStickAxisY);

	// Object: Function GPGameInput.GamepadInputSimulationManager.SetStickSimDPad
	// Flags: [Final|Native|Public]
	// Offset: 0x9143e48
	// Params: [ Num(1) Size(0x4) ]
	void SetStickSimDPad(EStickSimDPadType Type);

	// Object: Function GPGameInput.GamepadInputSimulationManager.IsGamepadAxisSimulationActive
	// Flags: [Final|Native|Public]
	// Offset: 0x9143d98
	// Params: [ Num(2) Size(0x5) ]
	uint8_t IsGamepadAxisSimulationActive(int32_t InControllerId);

	// Object: Function GPGameInput.GamepadInputSimulationManager.GetStickSimDPadType
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x9143d64
	// Params: [ Num(1) Size(0x4) ]
	EStickSimDPadType GetStickSimDPadType();

	// Object: Function GPGameInput.GamepadInputSimulationManager.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x9143cc0
	// Params: [ Num(2) Size(0x10) ]
	static struct UGamepadInputSimulationManager* Get(struct UObject* GameInstanceContext);
	DEFINE_UE_CLASS_HELPERS(UGamepadInputSimulationManager, "GamepadInputSimulationManager")

};

// Object: Class GPGameInput.GPInputDelegates
// Size: 0x70 (Inherited: 0x30)
struct UGPInputDelegates : UGameInstanceSubsystem
{
	struct FMulticastInlineDelegate OnInputModeChanged; // 0x30(0x10)
	struct FMulticastInlineDelegate OnInputGateChanged; // 0x40(0x10)
	struct FMulticastInlineDelegate OnInputTypeChanged; // 0x50(0x10)
	struct FMulticastInlineDelegate OnGamepadChangeDetected; // 0x60(0x10)


	// Object: Function GPGameInput.GPInputDelegates.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf67402c
	// Params: [ Num(2) Size(0x10) ]
	static struct UGPInputDelegates* Get(struct UObject* WorldContext);
	DEFINE_UE_CLASS_HELPERS(UGPInputDelegates, "GPInputDelegates")

};

// Object: Class GPGameInput.GPInputHelper
// Size: 0x110 (Inherited: 0x30)
struct UGPInputHelper : UGameInstanceSubsystem
{
	uint8_t Pad_0x30[0x30]; // 0x30(0x30)
	struct FMulticastInlineDelegate OnGameplayInputMappingRegistered; // 0x60(0x10)
	double Last2KMTimeSec; // 0x70(0x8)
	double Last2GamepadTimeSec; // 0x78(0x8)
	uint8_t bThisInGameTipsNotAllowedUsingKM : 1; // 0x80(0x1), Mask(0x1)
	uint8_t BitPad_0x80_1 : 7; // 0x80(0x1)
	uint8_t Pad_0x81[0x7F]; // 0x81(0x7F)
	EGPGamepadInputType GamepadInputType; // 0x100(0x1)
	EGPInputType CurrentInputType; // 0x101(0x1)
	uint8_t bGamepadToMouseSimulation : 1; // 0x102(0x1), Mask(0x1)
	uint8_t BitPad_0x102_1 : 7; // 0x102(0x1)
	uint8_t Pad_0x103[0xD]; // 0x103(0xD)


	// Object: Function GPGameInput.GPInputHelper.WantInputMode_UIOnly
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x91454b4
	// Params: [ Num(4) Size(0x12) ]
	static void WantInputMode_UIOnly(struct UObject* WorldContext, struct FName ID, uint8_t bEnable, uint8_t bPersistent);

	// Object: Function GPGameInput.GPInputHelper.WantInputMode_GameOnly
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9145358
	// Params: [ Num(4) Size(0x12) ]
	static void WantInputMode_GameOnly(struct UObject* WorldContext, struct FName ID, uint8_t bEnable, uint8_t bPersistent);

	// Object: Function GPGameInput.GPInputHelper.WantInputMode_GameAndUI
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x91451fc
	// Params: [ Num(4) Size(0x12) ]
	static void WantInputMode_GameAndUI(struct UObject* WorldContext, struct FName ID, uint8_t bEnable, uint8_t bPersistent);

	// Object: Function GPGameInput.GPInputHelper.WantInputMode_ForceUIOnly
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x91450a0
	// Params: [ Num(4) Size(0x12) ]
	static void WantInputMode_ForceUIOnly(struct UObject* WorldContext, struct FName ID, uint8_t bEnable, uint8_t bPersistent);

	// Object: Function GPGameInput.GPInputHelper.WantInputMode_Enum
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9144f04
	// Params: [ Num(5) Size(0x16) ]
	static void WantInputMode_Enum(struct UObject* WorldContext, EGPInputModeType EnumType, struct FName ID, uint8_t bEnable, uint8_t bPersistent);

	// Object: Function GPGameInput.GPInputHelper.ToggleGamepadMouseSimulation
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x9144e2c
	// Params: [ Num(2) Size(0x9) ]
	static void ToggleGamepadMouseSimulation(struct UObject* WorldContext, uint8_t bInGamepadToMouseSimulation);

	// Object: Function GPGameInput.GPInputHelper.SetTempInputMode_UIOnly
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9144d98
	// Params: [ Num(1) Size(0x8) ]
	static void SetTempInputMode_UIOnly(struct UObject* WorldContext);

	// Object: Function GPGameInput.GPInputHelper.SetTempInputMode_GameOnly
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9144d04
	// Params: [ Num(1) Size(0x8) ]
	static void SetTempInputMode_GameOnly(struct UObject* WorldContext);

	// Object: Function GPGameInput.GPInputHelper.SetTempInputMode_GameAndUI
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9144c70
	// Params: [ Num(1) Size(0x8) ]
	static void SetTempInputMode_GameAndUI(struct UObject* WorldContext);

	// Object: Function GPGameInput.GPInputHelper.SetInputGateEnabled
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x9144b98
	// Params: [ Num(2) Size(0x9) ]
	static void SetInputGateEnabled(struct UObject* WorldContext, uint8_t bEnable);

	// Object: Function GPGameInput.GPInputHelper.SetGamepadInputGamePlayModeEnable
	// Flags: [Final|Native|Public]
	// Offset: 0xfa186a0
	// Params: [ Num(1) Size(0x1) ]
	void SetGamepadInputGamePlayModeEnable(uint8_t InbEnable);

	// Object: Function GPGameInput.GPInputHelper.SetGamepadInputEnable
	// Flags: [Final|Native|Public]
	// Offset: 0x9144aec
	// Params: [ Num(1) Size(0x1) ]
	void SetGamepadInputEnable(uint8_t InbEnable);

	// Object: Function GPGameInput.GPInputHelper.ReApplyInputMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9144a58
	// Params: [ Num(1) Size(0x8) ]
	static void ReApplyInputMode(struct UObject* WorldContext);

	// Object: Function GPGameInput.GPInputHelper.OnStartGameInstance
	// Flags: [Final|Native|Protected]
	// Offset: 0x91449b4
	// Params: [ Num(1) Size(0x8) ]
	void OnStartGameInstance(struct UGameInstance* InGameInstance);

	// Object: Function GPGameInput.GPInputHelper.MakeKeyByName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9144830
	// Params: [ Num(2) Size(0x20) ]
	static struct FKey MakeKeyByName(struct FName KeyName);

	// Object: Function GPGameInput.GPInputHelper.IsTouchOrLMBEvent
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0xfe215c8
	// Params: [ Num(2) Size(0x71) ]
	static uint8_t IsTouchOrLMBEvent(const struct FPointerEvent& InPointerEvent);

	// Object: Function GPGameInput.GPInputHelper.IsKeyPressed
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x91446e0
	// Params: [ Num(3) Size(0x21) ]
	static uint8_t IsKeyPressed(struct UObject* WorldContext, const struct FKey& InKey);

	// Object: Function GPGameInput.GPInputHelper.IsGamepadInputGamePlayModeEnable
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9144638
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsGamepadInputGamePlayModeEnable(struct UObject* WorldContext);

	// Object: Function GPGameInput.GPInputHelper.IsGamepadInputEnable
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9144590
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsGamepadInputEnable(struct UObject* WorldContext);

	// Object: Function GPGameInput.GPInputHelper.IsFakingTouch
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x9144558
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsFakingTouch();

	// Object: Function GPGameInput.GPInputHelper.IsConsoleKeyboardInput
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x91444b0
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsConsoleKeyboardInput(struct UObject* WorldContext);

	// Object: Function GPGameInput.GPInputHelper.IsConsoleGamepadInput
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9144408
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsConsoleGamepadInput(struct UObject* WorldContext);

	// Object: Function GPGameInput.GPInputHelper.GetCurrentInputTypeOrDefault
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9144364
	// Params: [ Num(2) Size(0x9) ]
	static EGPInputType GetCurrentInputTypeOrDefault(struct UObject* WorldContext);

	// Object: Function GPGameInput.GPInputHelper.GetCurrentInputType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xea3ce9c
	// Params: [ Num(2) Size(0x9) ]
	static EGPInputType GetCurrentInputType(struct UObject* WorldContext);

	// Object: Function GPGameInput.GPInputHelper.GetCurrentInputMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf80c0b8
	// Params: [ Num(2) Size(0x9) ]
	static EGPInputModeType GetCurrentInputMode(struct UObject* WorldContext);

	// Object: Function GPGameInput.GPInputHelper.GetCurrentGamepadInputTypeOrDefault
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x91442c0
	// Params: [ Num(2) Size(0x9) ]
	static EGPGamepadInputType GetCurrentGamepadInputTypeOrDefault(struct UObject* WorldContext);

	// Object: Function GPGameInput.GPInputHelper.GetCurrentGamepadInputType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x914421c
	// Params: [ Num(2) Size(0x9) ]
	static EGPGamepadInputType GetCurrentGamepadInputType(struct UObject* WorldContext);

	// Object: Function GPGameInput.GPInputHelper.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xfbc6a6c
	// Params: [ Num(2) Size(0x10) ]
	static struct UGPInputHelper* Get(struct UObject* WorldContext);

	// Object: DelegateFunction GPGameInput.GPInputHelper.GameplayInputMappingRegistered__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void GameplayInputMappingRegistered__DelegateSignature();

	// Object: DelegateFunction GPGameInput.GPInputHelper.GameplayInputHoldingDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0xC) ]
	void GameplayInputHoldingDelegate__DelegateSignature(struct FName ActionOrAxisName, float InPercent);

	// Object: DelegateFunction GPGameInput.GPInputHelper.GameplayInputFinishedDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void GameplayInputFinishedDelegate__DelegateSignature(struct FName ActionOrAxisName);

	// Object: Function GPGameInput.GPInputHelper.ClearInputMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9144144
	// Params: [ Num(2) Size(0x9) ]
	static void ClearInputMode(struct UObject* WorldContext, uint8_t bIncludePersistent);
	DEFINE_UE_CLASS_HELPERS(UGPInputHelper, "GPInputHelper")

};

// Object: Class GPGameInput.GPPlayerInput
// Size: 0x448 (Inherited: 0x3A8)
struct UGPPlayerInput : UPlayerInput
{
	uint8_t Pad_0x3A8[0xA0]; // 0x3A8(0xA0)
	DEFINE_UE_CLASS_HELPERS(UGPPlayerInput, "GPPlayerInput")

};

// Object: Class GPGameInput.HapticFeedbackSubsystem
// Size: 0xF0 (Inherited: 0x30)
struct UHapticFeedbackSubsystem : UGameInstanceSubsystem
{
	uint8_t Pad_0x30[0xC0]; // 0x30(0xC0)


	// Object: Function GPGameInput.HapticFeedbackSubsystem.GetLocalControllerId
	// Flags: [Final|Native|Public]
	// Offset: 0x9145f94
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetLocalControllerId();

	// Object: Function GPGameInput.HapticFeedbackSubsystem.GetHapticFeedbackOutputId
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x9145ef0
	// Params: [ Num(2) Size(0x10) ]
	static uint64_t GetHapticFeedbackOutputId(uint32_t deviceIndex);

	// Object: Function GPGameInput.HapticFeedbackSubsystem.Get
	// Flags: [Final|Native|Public]
	// Offset: 0x9145e44
	// Params: [ Num(2) Size(0x10) ]
	struct UHapticFeedbackSubsystem* Get(struct UObject* WorldContextObject);

	// Object: Function GPGameInput.HapticFeedbackSubsystem.EnableHapticFeedbackForDevice
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x9145da0
	// Params: [ Num(2) Size(0x8) ]
	static int32_t EnableHapticFeedbackForDevice(uint32_t deviceIndex);

	// Object: Function GPGameInput.HapticFeedbackSubsystem.EnableHapticFeedback
	// Flags: [Final|Native|Public]
	// Offset: 0x9145d8c
	// Params: [ Num(0) Size(0x0) ]
	void EnableHapticFeedback();

	// Object: Function GPGameInput.HapticFeedbackSubsystem.DisableHapticFeedbackForDevice
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x9145ce8
	// Params: [ Num(2) Size(0x8) ]
	static int32_t DisableHapticFeedbackForDevice(uint32_t deviceIndex);

	// Object: Function GPGameInput.HapticFeedbackSubsystem.DisableHapticFeedback
	// Flags: [Final|Native|Public]
	// Offset: 0x9145cd4
	// Params: [ Num(0) Size(0x0) ]
	void DisableHapticFeedback();

	// Object: Function GPGameInput.HapticFeedbackSubsystem.DebugPlayAudioWithName
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x9145c1c
	// Params: [ Num(2) Size(0x11) ]
	uint8_t DebugPlayAudioWithName(struct FString AudioName);
	DEFINE_UE_CLASS_HELPERS(UHapticFeedbackSubsystem, "HapticFeedbackSubsystem")

};

// Object: Class GPGameInput.MobilePlayerInput
// Size: 0x6A0 (Inherited: 0x448)
struct UMobilePlayerInput : UGPPlayerInput
{
	float NormalSensitivityX; // 0x448(0x4)
	float NormalSensitivityY; // 0x44C(0x4)
	struct FVector2D LockSensitivity; // 0x450(0x8)
	float LockMoveAngle; // 0x458(0x4)
	float SprintTriggerDistFactorMax; // 0x45C(0x4)
	float SprintTriggerDistFactorMin; // 0x460(0x4)
	float SprintTriggerSensitivityDivideNum; // 0x464(0x4)
	float SprintTriggerPhysicalSizeScalarMin; // 0x468(0x4)
	float SprintTriggerPhysicalSizeScalarMax; // 0x46C(0x4)
	float SprintTriggerSizeStandard; // 0x470(0x4)
	float SprintTriggerSizeZooming; // 0x474(0x4)
	float SuperSprintTriggerSizeStandard; // 0x478(0x4)
	float SprintAnimTriggerSizeStandard; // 0x47C(0x4)
	float SilentWalkTriggerSize; // 0x480(0x4)
	float AllowSprintAngle; // 0x484(0x4)
	float ShowLockMoveShowAngle; // 0x488(0x4)
	ERotationMethodType RotationMethod; // 0x48C(0x1)
	uint8_t Pad_0x48D[0x3]; // 0x48D(0x3)
	float PhysicalSizeScalarMin; // 0x490(0x4)
	float PhysicalSizeScalarMax; // 0x494(0x4)
	float GyroRotationFactor; // 0x498(0x4)
	uint8_t Pad_0x49C[0x4]; // 0x49C(0x4)
	struct UCurveFloat* SmoothRotationByFrameCurve; // 0x4A0(0x8)
	struct UCurveFloat* RotationSpeedAccelerationPiecewiseFunctionCurve_Normal; // 0x4A8(0x8)
	struct UCurveFloat* RotationSpeedAccelerationPiecewiseFunctionCurve_Fire; // 0x4B0(0x8)
	struct FVector2D StandardResolution; // 0x4B8(0x8)
	struct FVector2D StandardScreenXYInch; // 0x4C0(0x8)
	float StandardPPI; // 0x4C8(0x4)
	float StandardRotationAngleHalfScreen; // 0x4CC(0x4)
	float StandardPixelNumHalfScreen; // 0x4D0(0x4)
	uint8_t Pad_0x4D4[0x4]; // 0x4D4(0x4)
	struct TArray<struct FString> MobileInputAllowDisableInputReason; // 0x4D8(0x10)
	struct TArray<float> HotFixArray; // 0x4E8(0x10)
	struct TArray<EMobileControlButtonType> ButtonTypeForbidRotateInMovementArea; // 0x4F8(0x10)
	struct TArray<struct FName> PanelConfigNames; // 0x508(0x10)
	struct FVector2D RotationInputLocation; // 0x518(0x8)
	uint8_t Pad_0x520[0x8]; // 0x520(0x8)
	struct UMobileGameHandle* GameHandle; // 0x528(0x8)
	uint8_t Pad_0x530[0x10]; // 0x530(0x10)
	struct TArray<struct FMobileInputData> MobileInputDataList; // 0x540(0x10)
	struct TArray<struct FMobileInputData> MobileInputDataList_Complete; // 0x550(0x10)
	uint8_t Pad_0x560[0x20]; // 0x560(0x20)
	struct TArray<struct FSmoothTouchData> SmoothTouchDataList; // 0x580(0x10)
	uint8_t Pad_0x590[0x110]; // 0x590(0x110)


	// Object: Function GPGameInput.MobilePlayerInput.UnRegisterInterestedTouchIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9148e18
	// Params: [ Num(1) Size(0x1) ]
	void UnRegisterInterestedTouchIndex(ETouchIndex FingerIndex);

	// Object: Function GPGameInput.MobilePlayerInput.RequestWholeScreenRotationArea
	// Flags: [Final|Native|Public]
	// Offset: 0x9148cdc
	// Params: [ Num(2) Size(0x18) ]
	void RequestWholeScreenRotationArea(uint8_t bRequest, struct FString Reason);

	// Object: Function GPGameInput.MobilePlayerInput.RequestHalfMoveHalfRotate
	// Flags: [Final|Native|Public]
	// Offset: 0x9148ba0
	// Params: [ Num(2) Size(0x18) ]
	void RequestHalfMoveHalfRotate(uint8_t bRequest, struct FString Reason);

	// Object: Function GPGameInput.MobilePlayerInput.RequestForbidTouchMoveRotate
	// Flags: [Final|Native|Public]
	// Offset: 0x9148a64
	// Params: [ Num(2) Size(0x18) ]
	void RequestForbidTouchMoveRotate(uint8_t bRequest, struct FString Reason);

	// Object: Function GPGameInput.MobilePlayerInput.RegisterInterestedTouchIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x91489c0
	// Params: [ Num(1) Size(0x1) ]
	void RegisterInterestedTouchIndex(ETouchIndex FingerIndex);

	// Object: Function GPGameInput.MobilePlayerInput.GetSmoothedTouchPosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x9148914
	// Params: [ Num(2) Size(0xC) ]
	struct FVector2D GetSmoothedTouchPosition(ETouchIndex FingerIndex);

	// Object: Function GPGameInput.MobilePlayerInput.CheckWholeScreenRotationAreaReasonExist
	// Flags: [Final|Native|Public]
	// Offset: 0x9148810
	// Params: [ Num(2) Size(0x11) ]
	uint8_t CheckWholeScreenRotationAreaReasonExist(struct FString Reason);
	DEFINE_UE_CLASS_HELPERS(UMobilePlayerInput, "MobilePlayerInput")

};

// Object: Class GPGameInput.HDPlayerInput
// Size: 0x6F0 (Inherited: 0x6A0)
struct UHDPlayerInput : UMobilePlayerInput
{
	float CachedFinalSensitivity; // 0x6A0(0x4)
	float CachedFinalSensitivityX; // 0x6A4(0x4)
	float CachedFinalSensitivityY; // 0x6A8(0x4)
	float CachedFinalGamepadSensitivity; // 0x6AC(0x4)
	struct FHDAimingDebugInfo CachedDebugInfo; // 0x6B0(0x10)
	struct FString LuaPath; // 0x6C0(0x10)
	struct UClientSensitivitySettingHD* ClientSensitivitySettingHD; // 0x6D0(0x8)
	struct UClientVehicleSettingHD* ClientVehicleSettingHD; // 0x6D8(0x8)
	struct FMulticastInlineDelegate OnHDAimingDebugInfo; // 0x6E0(0x10)


	// Object: Function GPGameInput.HDPlayerInput.OnZoomRateChanged
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x9147464
	// Params: [ Num(1) Size(0x4) ]
	void OnZoomRateChanged(float NewRate);

	// Object: Function GPGameInput.HDPlayerInput.OnMouseAxisInput
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x91473b8
	// Params: [ Num(1) Size(0x1) ]
	void OnMouseAxisInput(EMouseInputType MouseInputType);

	// Object: Function GPGameInput.HDPlayerInput.IsEntirelyZoomedIn
	// Flags: [Final|Native|Public]
	// Offset: 0x9147380
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsEntirelyZoomedIn();

	// Object: Function GPGameInput.HDPlayerInput.GetZoomingPercent
	// Flags: [Final|Native|Public]
	// Offset: 0x914734c
	// Params: [ Num(1) Size(0x4) ]
	float GetZoomingPercent();

	// Object: Function GPGameInput.HDPlayerInput.GetVehicleCurADSSensitivity
	// Flags: [Native|Public]
	// Offset: 0x9147298
	// Params: [ Num(2) Size(0x8) ]
	float GetVehicleCurADSSensitivity(float TarZoomRate);

	// Object: Function GPGameInput.HDPlayerInput.GetIsInZoomInProcess
	// Flags: [Final|Native|Public]
	// Offset: 0x9147260
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetIsInZoomInProcess();

	// Object: Function GPGameInput.HDPlayerInput.GetIsInZoomingProcess
	// Flags: [Final|Native|Public]
	// Offset: 0x9147228
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetIsInZoomingProcess();

	// Object: Function GPGameInput.HDPlayerInput.GetHDPlayerInput
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9147184
	// Params: [ Num(2) Size(0x10) ]
	static struct UHDPlayerInput* GetHDPlayerInput(struct UObject* WorldContext);

	// Object: Function GPGameInput.HDPlayerInput.GetCurADSSensitivity
	// Flags: [Final|Native|Public]
	// Offset: 0x91470d8
	// Params: [ Num(2) Size(0x8) ]
	float GetCurADSSensitivity(float TarZoomRate);
	DEFINE_UE_CLASS_HELPERS(UHDPlayerInput, "HDPlayerInput")

};

// Object: Class GPGameInput.MobileGameHandle
// Size: 0x500 (Inherited: 0x28)
struct UMobileGameHandle : UObject
{
	uint8_t Pad_0x28[0x20]; // 0x28(0x20)
	struct UMobileMoveHandleImpl* MoveHandleImpl; // 0x48(0x8)
	struct UClientSensitivitySetting* ClientSensitivitySetting; // 0x50(0x8)
	struct UClientVehicleSetting* ClientVehicleSetting; // 0x58(0x8)
	struct UClientControlSetting* ClientControlSetting; // 0x60(0x8)
	struct UClientBaseSetting* ClientBaseSetting; // 0x68(0x8)
	uint8_t Pad_0x70[0x98]; // 0x70(0x98)
	struct TMap<EMobileControlButtonType, struct FControlButtonInfo> ControlButtons; // 0x108(0x50)
	uint8_t Pad_0x158[0x58]; // 0x158(0x58)
	struct TArray<EMobileControlButtonType> ReleaseButtonInfo; // 0x1B0(0x10)
	uint8_t Pad_0x1C0[0x340]; // 0x1C0(0x340)


	// Object: Function GPGameInput.MobileGameHandle.UpdateSprintTriggerSensitivity
	// Flags: [Final|Native|Protected]
	// Offset: 0x9148448
	// Params: [ Num(0) Size(0x0) ]
	void UpdateSprintTriggerSensitivity();

	// Object: Function GPGameInput.MobileGameHandle.UpdateMoveFireModeSetting
	// Flags: [Final|Native|Protected]
	// Offset: 0x9148434
	// Params: [ Num(0) Size(0x0) ]
	void UpdateMoveFireModeSetting();

	// Object: Function GPGameInput.MobileGameHandle.UpdateControlButtonStatus
	// Flags: [Final|Native|Public]
	// Offset: 0x9148310
	// Params: [ Num(3) Size(0x8) ]
	void UpdateControlButtonStatus(EMobileControlButtonType ControlButtonType, uint8_t bIsPressed, int32_t FingerIndex);

	// Object: Function GPGameInput.MobileGameHandle.UpdateControlButtonRotateLimit
	// Flags: [Final|Native|Public]
	// Offset: 0x9148228
	// Params: [ Num(2) Size(0x2) ]
	void UpdateControlButtonRotateLimit(EMobileControlButtonType ControlButtonType, uint8_t bInRotateLimitArea);

	// Object: Function GPGameInput.MobileGameHandle.UpdateControlButtonRotateInfo
	// Flags: [Final|Native|Public]
	// Offset: 0x9148140
	// Params: [ Num(2) Size(0x2) ]
	void UpdateControlButtonRotateInfo(EMobileControlButtonType ControlButtonType, uint8_t bAllowRotate);

	// Object: Function GPGameInput.MobileGameHandle.RequestWholeScreenRotationArea
	// Flags: [Final|Native|Public]
	// Offset: 0x9148004
	// Params: [ Num(2) Size(0x18) ]
	void RequestWholeScreenRotationArea(uint8_t bRequest, struct FString Reason);

	// Object: Function GPGameInput.MobileGameHandle.RequestHalfMoveHalfRotate
	// Flags: [Final|Native|Public]
	// Offset: 0x9147ec8
	// Params: [ Num(2) Size(0x18) ]
	void RequestHalfMoveHalfRotate(uint8_t bRequest, struct FString Reason);

	// Object: Function GPGameInput.MobileGameHandle.RequestForbidTouchMoveRotate
	// Flags: [Final|Native|Public]
	// Offset: 0x9147d8c
	// Params: [ Num(2) Size(0x18) ]
	void RequestForbidTouchMoveRotate(uint8_t bRequest, struct FString Reason);

	// Object: Function GPGameInput.MobileGameHandle.HDistToVDist
	// Flags: [Final|Native|Protected]
	// Offset: 0x9147ce0
	// Params: [ Num(2) Size(0x8) ]
	float HDistToVDist(float HDist);

	// Object: Function GPGameInput.MobileGameHandle.GetSensitivityFactor
	// Flags: [Native|Protected]
	// Offset: 0x9147c24
	// Params: [ Num(2) Size(0x8) ]
	float GetSensitivityFactor(uint8_t bGyroScope);

	// Object: Function GPGameInput.MobileGameHandle.GetControlButtonAllowRotate
	// Flags: [Final|Native|Public]
	// Offset: 0x9147b74
	// Params: [ Num(2) Size(0x2) ]
	uint8_t GetControlButtonAllowRotate(EMobileControlButtonType ControlButtonType);

	// Object: Function GPGameInput.MobileGameHandle.EnableRotateTouchArea
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9147ac8
	// Params: [ Num(1) Size(0x1) ]
	void EnableRotateTouchArea(uint8_t bEnable);

	// Object: Function GPGameInput.MobileGameHandle.EnableMovementTouchArea
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9147a1c
	// Params: [ Num(1) Size(0x1) ]
	void EnableMovementTouchArea(uint8_t bEnable);

	// Object: Function GPGameInput.MobileGameHandle.CurrentRequestHalfMoveHalfRotate
	// Flags: [Final|Native|Public]
	// Offset: 0x91479e4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CurrentRequestHalfMoveHalfRotate();

	// Object: Function GPGameInput.MobileGameHandle.CurrentRequestForbidTouchMoveRotate
	// Flags: [Final|Native|Public]
	// Offset: 0x91479ac
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CurrentRequestForbidTouchMoveRotate();

	// Object: Function GPGameInput.MobileGameHandle.CurrentIsWholeScreenRotationArea
	// Flags: [Final|Native|Public]
	// Offset: 0x9147974
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CurrentIsWholeScreenRotationArea();

	// Object: Function GPGameInput.MobileGameHandle.CheckWholeScreenRotationAreaReasonExist
	// Flags: [Final|Native|Public]
	// Offset: 0x9147870
	// Params: [ Num(2) Size(0x11) ]
	uint8_t CheckWholeScreenRotationAreaReasonExist(struct FString Reason);

	// Object: Function GPGameInput.MobileGameHandle.CalcMDRadiansWithZoomRate
	// Flags: [Final|Native|Protected]
	// Offset: 0x9147750
	// Params: [ Num(4) Size(0x10) ]
	float CalcMDRadiansWithZoomRate(float BaseVFOV, float InMDV, float ZoomRate);

	// Object: Function GPGameInput.MobileGameHandle.CalcDist
	// Flags: [Final|Native|Protected]
	// Offset: 0x91476a4
	// Params: [ Num(2) Size(0x8) ]
	float CalcDist(float FOV);
	DEFINE_UE_CLASS_HELPERS(UMobileGameHandle, "MobileGameHandle")

};

// Object: Class GPGameInput.MobileFixedFireGameHandle
// Size: 0x500 (Inherited: 0x500)
struct UMobileFixedFireGameHandle : UMobileGameHandle
{	DEFINE_UE_CLASS_HELPERS(UMobileFixedFireGameHandle, "MobileFixedFireGameHandle")

};

// Object: Class GPGameInput.MobileInputButton
// Size: 0x40 (Inherited: 0x28)
struct UMobileInputButton : UObject
{
	uint8_t Pad_0x28[0x18]; // 0x28(0x18)
	DEFINE_UE_CLASS_HELPERS(UMobileInputButton, "MobileInputButton")

};

// Object: Class GPGameInput.MobileInputConfig
// Size: 0x228 (Inherited: 0x28)
struct UMobileInputConfig : UObject
{
	struct FMobileButtonStyleConfig ButtonStyleConfig; // 0x28(0x3C)
	struct FMobileButtonConfig DefaultButtonConfig; // 0x64(0xE0)
	struct FMobileButtonConfig CustomButtonConfig; // 0x144(0xE0)
	uint8_t Pad_0x224[0x4]; // 0x224(0x4)
	DEFINE_UE_CLASS_HELPERS(UMobileInputConfig, "MobileInputConfig")

};

// Object: Class GPGameInput.MobileMoveHandleImpl
// Size: 0x38 (Inherited: 0x28)
struct UMobileMoveHandleImpl : UObject
{
	uint8_t Pad_0x28[0x10]; // 0x28(0x10)
	DEFINE_UE_CLASS_HELPERS(UMobileMoveHandleImpl, "MobileMoveHandleImpl")

};

// Object: Class GPGameInput.MobileMoveJoystickHandleImpl
// Size: 0x38 (Inherited: 0x38)
struct UMobileMoveJoystickHandleImpl : UMobileMoveHandleImpl
{	DEFINE_UE_CLASS_HELPERS(UMobileMoveJoystickHandleImpl, "MobileMoveJoystickHandleImpl")

};

} // namespace SDK
