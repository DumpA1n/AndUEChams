#pragma once

#include "../CoreUObject_classes.hpp"
#include "AnimGraphRuntime.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: PhysXVehicles
// Enums: 3
// Structs: 10
// Classes: 10

struct AController;
struct FNavAvoidanceMask;
struct FRigidBodyState;
struct UPhysicalMaterial;
struct USkeletalMeshComponent;
struct UStaticMesh;
struct UTireType;
struct FAnimNode_WheelHandler;
struct FTireConfigMaterialFriction;
struct FVehicleAnimInstanceProxy;
struct FVehicleInputRate;
struct FReplicatedVehicleState;
struct FWheelSetup;
struct FVehicleTransmissionData;
struct FVehicleGearData;
struct FVehicleEngineData;
struct FVehicleDifferential4WData;
struct UWheeledVehicleMovementComponent;
struct UHoverVehicleMovementComponent;
struct USimpleWheeledVehicleMovementComponent;
struct UTireConfig;
struct UVehicleAnimInstance;
struct UVehicleSettings;
struct UVehicleWheel;
struct AWheeledVehicle;
struct UWheeledVehicleMovementComponent4W;
struct UVehicleMovementParams;

// Object: Enum PhysXVehicles.EVehicleSuspensionQuery
enum class EVehicleSuspensionQuery : uint8_t
{
	Raycast = 0,
	BlockingSweep = 1,
	EVehicleSuspensionQuery_MAX = 2
};

// Object: Enum PhysXVehicles.EWheelSweepType
enum class EWheelSweepType : uint8_t
{
	SimpleAndComplex = 0,
	Simple = 1,
	Complex = 2,
	EWheelSweepType_MAX = 3
};

// Object: Enum PhysXVehicles.EVehicleDifferential4W
enum class EVehicleDifferential4W : uint8_t
{
	LimitedSlip_4W = 0,
	LimitedSlip_FrontDrive = 1,
	LimitedSlip_RearDrive = 2,
	Open_4W = 3,
	Open_FrontDrive = 4,
	Open_RearDrive = 5,
	EVehicleDifferential4W_MAX = 6
};

// Object: ScriptStruct PhysXVehicles.AnimNode_WheelHandler
// Size: 0x120 (Inherited: 0x108)
struct FAnimNode_WheelHandler : FAnimNode_SkeletalControlBase
{
	uint8_t Pad_0x108[0x18]; // 0x108(0x18)
};

// Object: ScriptStruct PhysXVehicles.TireConfigMaterialFriction
// Size: 0x10 (Inherited: 0x0)
struct FTireConfigMaterialFriction
{
	struct UPhysicalMaterial* PhysicalMaterial; // 0x0(0x8)
	float FrictionScale; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct PhysXVehicles.VehicleAnimInstanceProxy
// Size: 0x7B0 (Inherited: 0x7A0)
struct FVehicleAnimInstanceProxy : FAnimInstanceProxy
{
	uint8_t Pad_0x7A0[0x10]; // 0x7A0(0x10)
};

// Object: ScriptStruct PhysXVehicles.VehicleInputRate
// Size: 0x8 (Inherited: 0x0)
struct FVehicleInputRate
{
	float RiseRate; // 0x0(0x4)
	float FallRate; // 0x4(0x4)
};

// Object: ScriptStruct PhysXVehicles.ReplicatedVehicleState
// Size: 0x1C (Inherited: 0x0)
struct FReplicatedVehicleState
{
	float SteeringInput; // 0x0(0x4)
	float ThrottleInput; // 0x4(0x4)
	float BrakeInput; // 0x8(0x4)
	float HandbrakeInput; // 0xC(0x4)
	int32_t CurrentGear; // 0x10(0x4)
	float MaxLeftWheelSpeed; // 0x14(0x4)
	float MaxRightWheelSpeed; // 0x18(0x4)
};

// Object: ScriptStruct PhysXVehicles.WheelSetup
// Size: 0x20 (Inherited: 0x0)
struct FWheelSetup
{
	struct UVehicleWheel* WheelClass; // 0x0(0x8)
	struct FName BoneName; // 0x8(0x8)
	struct FVector AdditionalOffset; // 0x10(0xC)
	uint8_t bDisableSteering : 1; // 0x1C(0x1), Mask(0x1)
	uint8_t BitPad_0x1C_1 : 7; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
};

// Object: ScriptStruct PhysXVehicles.VehicleTransmissionData
// Size: 0x38 (Inherited: 0x0)
struct FVehicleTransmissionData
{
	uint8_t bUseGearAutoBox : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bIsSwitchByVelocity : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	float MaxVelocity; // 0x4(0x4)
	float GearSwitchTime; // 0x8(0x4)
	float GearAutoBoxLatency; // 0xC(0x4)
	float FinalRatio; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TArray<struct FVehicleGearData> ForwardGears; // 0x18(0x10)
	float ReverseGearRatio; // 0x28(0x4)
	float NeutralGearUpRatio; // 0x2C(0x4)
	float ClutchStrength; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct PhysXVehicles.VehicleGearData
// Size: 0xC (Inherited: 0x0)
struct FVehicleGearData
{
	float ratio; // 0x0(0x4)
	float DownRatio; // 0x4(0x4)
	float UpRatio; // 0x8(0x4)
};

// Object: ScriptStruct PhysXVehicles.VehicleEngineData
// Size: 0xB8 (Inherited: 0x0)
struct FVehicleEngineData
{
	struct FRuntimeFloatCurve TorqueCurve; // 0x0(0xA0)
	float MaxRPM; // 0xA0(0x4)
	float MOI; // 0xA4(0x4)
	float DampingRateFullThrottle; // 0xA8(0x4)
	float DampingRateZeroThrottleClutchEngaged; // 0xAC(0x4)
	float DampingRateZeroThrottleClutchDisengaged; // 0xB0(0x4)
	uint8_t Pad_0xB4[0x4]; // 0xB4(0x4)
};

// Object: ScriptStruct PhysXVehicles.VehicleDifferential4WData
// Size: 0x1C (Inherited: 0x0)
struct FVehicleDifferential4WData
{
	EVehicleDifferential4W DifferentialType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float FrontRearSplit; // 0x4(0x4)
	float FrontLeftRightSplit; // 0x8(0x4)
	float RearLeftRightSplit; // 0xC(0x4)
	float CentreBias; // 0x10(0x4)
	float FrontBias; // 0x14(0x4)
	float RearBias; // 0x18(0x4)
};

// Object: Class PhysXVehicles.WheeledVehicleMovementComponent
// Size: 0x2D8 (Inherited: 0x180)
struct UWheeledVehicleMovementComponent : UPawnMovementComponent
{
	DEFINE_UE_CLASS_HELPERS(UWheeledVehicleMovementComponent, "WheeledVehicleMovementComponent")

	uint8_t Pad_0x180[0x8]; // 0x180(0x8)
	uint8_t bDeprecatedSpringOffsetMode : 1; // 0x188(0x1), Mask(0x1)
	uint8_t bReverseAsBrake : 1; // 0x188(0x1), Mask(0x2)
	uint8_t bUseRVOAvoidance : 1; // 0x188(0x1), Mask(0x4)
	uint8_t bRawHandbrakeInput : 1; // 0x188(0x1), Mask(0x8)
	uint8_t bRawGearUpInput : 1; // 0x188(0x1), Mask(0x10)
	uint8_t bRawGearDownInput : 1; // 0x188(0x1), Mask(0x20)
	uint8_t bWasAvoidanceUpdated : 1; // 0x188(0x1), Mask(0x40)
	uint8_t BitPad_0x188_7 : 1; // 0x188(0x1)
	uint8_t Pad_0x189[0x3]; // 0x189(0x3)
	float Mass; // 0x18C(0x4)
	struct TArray<struct FWheelSetup> WheelSetups; // 0x190(0x10)
	float DragCoefficient; // 0x1A0(0x4)
	float ChassisWidth; // 0x1A4(0x4)
	float ChassisHeight; // 0x1A8(0x4)
	float DragArea; // 0x1AC(0x4)
	float EstimatedMaxEngineSpeed; // 0x1B0(0x4)
	float MaxEngineRPM; // 0x1B4(0x4)
	float DebugDragMagnitude; // 0x1B8(0x4)
	struct FVector InertiaTensorScale; // 0x1BC(0xC)
	float MinNormalizedTireLoad; // 0x1C8(0x4)
	float MinNormalizedTireLoadFiltered; // 0x1CC(0x4)
	float MaxNormalizedTireLoad; // 0x1D0(0x4)
	float MaxNormalizedTireLoadFiltered; // 0x1D4(0x4)
	float ThresholdLongitudinalSpeed; // 0x1D8(0x4)
	int32_t LowForwardSpeedSubStepCount; // 0x1DC(0x4)
	int32_t HighForwardSpeedSubStepCount; // 0x1E0(0x4)
	uint8_t Pad_0x1E4[0x4]; // 0x1E4(0x4)
	struct TArray<struct UVehicleWheel*> Wheels; // 0x1E8(0x10)
	uint8_t Pad_0x1F8[0x18]; // 0x1F8(0x18)
	float RVOAvoidanceRadius; // 0x210(0x4)
	float RVOAvoidanceHeight; // 0x214(0x4)
	float AvoidanceConsiderationRadius; // 0x218(0x4)
	float RVOSteeringStep; // 0x21C(0x4)
	float RVOThrottleStep; // 0x220(0x4)
	int32_t AvoidanceUID; // 0x224(0x4)
	struct FNavAvoidanceMask AvoidanceGroup; // 0x228(0x4)
	struct FNavAvoidanceMask GroupsToAvoid; // 0x22C(0x4)
	struct FNavAvoidanceMask GroupsToIgnore; // 0x230(0x4)
	float AvoidanceWeight; // 0x234(0x4)
	struct FVector PendingLaunchVelocity; // 0x238(0xC)
	struct FReplicatedVehicleState ReplicatedState; // 0x244(0x1C)
	uint8_t Pad_0x260[0x4]; // 0x260(0x4)
	float RawSteeringInput; // 0x264(0x4)
	float RawThrottleInput; // 0x268(0x4)
	float RawBrakeInput; // 0x26C(0x4)
	float SteeringInput; // 0x270(0x4)
	float ThrottleInput; // 0x274(0x4)
	float BrakeInput; // 0x278(0x4)
	float HandbrakeInput; // 0x27C(0x4)
	float IdleBrakeInput; // 0x280(0x4)
	float StopThreshold; // 0x284(0x4)
	float WrongDirectionThreshold; // 0x288(0x4)
	struct FVehicleInputRate ThrottleInputRate; // 0x28C(0x8)
	struct FVehicleInputRate BrakeInputRate; // 0x294(0x8)
	struct FVehicleInputRate HandbrakeInputRate; // 0x29C(0x8)
	struct FVehicleInputRate SteeringInputRate; // 0x2A4(0x8)
	uint8_t Pad_0x2AC[0x24]; // 0x2AC(0x24)
	struct AController* OverrideController; // 0x2D0(0x8)

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ef3ce4
	// Params: [ Num(1) Size(0x1) ]
	void SetUseAutoGears(uint8_t bUseAuto);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ef3c40
	// Params: [ Num(1) Size(0x4) ]
	void SetThrottleInput(float Throttle);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ef3b5c
	// Params: [ Num(2) Size(0x5) ]
	void SetTargetGear(int32_t GearNum, uint8_t bImmediate);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ef3ab8
	// Params: [ Num(1) Size(0x4) ]
	void SetSteeringInput(float Steering);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ef3a0c
	// Params: [ Num(1) Size(0x1) ]
	void SetHandbrakeInput(uint8_t bNewHandbrake);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ef395c
	// Params: [ Num(1) Size(0x4) ]
	void SetGroupsToIgnoreMask(const struct FNavAvoidanceMask& GroupMask);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ef38b8
	// Params: [ Num(1) Size(0x4) ]
	void SetGroupsToIgnore(int32_t GroupFlags);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ef3808
	// Params: [ Num(1) Size(0x4) ]
	void SetGroupsToAvoidMask(const struct FNavAvoidanceMask& GroupMask);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ef3764
	// Params: [ Num(1) Size(0x4) ]
	void SetGroupsToAvoid(int32_t GroupFlags);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ef36b8
	// Params: [ Num(1) Size(0x1) ]
	void SetGearUp(uint8_t bNewGearUp);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ef360c
	// Params: [ Num(1) Size(0x1) ]
	void SetGearDown(uint8_t bNewGearDown);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ef3568
	// Params: [ Num(1) Size(0x4) ]
	void SetBrakeInput(float Brake);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ef34b8
	// Params: [ Num(1) Size(0x4) ]
	void SetAvoidanceGroupMask(const struct FNavAvoidanceMask& GroupMask);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ef3414
	// Params: [ Num(1) Size(0x4) ]
	void SetAvoidanceGroup(int32_t GroupFlags);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ef3368
	// Params: [ Num(1) Size(0x1) ]
	void SetAvoidanceEnabled(uint8_t bEnable);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState
	// Flags: [Net|Native|Event|Protected|NetServer|NetValidate]
	// Offset: 0x8ef3118
	// Params: [ Num(6) Size(0x60) ]
	void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32_t CurrentGear, struct FRigidBodyState ClientRBState);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ef30e0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetUseAutoGears();

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ef30ac
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetTargetGear();

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ef3078
	// Params: [ Num(1) Size(0x4) ]
	float GetForwardSpeed();

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ef3044
	// Params: [ Num(1) Size(0x4) ]
	float GetEngineRotationSpeed();

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ef3010
	// Params: [ Num(1) Size(0x4) ]
	float GetEngineMaxRotationSpeed();

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ef2fdc
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCurrentGear();
};

// Object: Class PhysXVehicles.HoverVehicleMovementComponent
// Size: 0x2F0 (Inherited: 0x2D8)
struct UHoverVehicleMovementComponent : UWheeledVehicleMovementComponent
{
	DEFINE_UE_CLASS_HELPERS(UHoverVehicleMovementComponent, "HoverVehicleMovementComponent")

	float ForwardForce; // 0x2D8(0x4)
	float RightTorque; // 0x2DC(0x4)
	float SpeedUpScale; // 0x2E0(0x4)
	uint8_t Pad_0x2E4[0xC]; // 0x2E4(0xC)
};

// Object: Class PhysXVehicles.SimpleWheeledVehicleMovementComponent
// Size: 0x2D8 (Inherited: 0x2D8)
struct USimpleWheeledVehicleMovementComponent : UWheeledVehicleMovementComponent
{
	DEFINE_UE_CLASS_HELPERS(USimpleWheeledVehicleMovementComponent, "SimpleWheeledVehicleMovementComponent")

	// Object: Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ef2a8c
	// Params: [ Num(2) Size(0x8) ]
	void SetSteerAngle(float SteerAngle, int32_t WheelIndex);

	// Object: Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetDriveTorque
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ef29ac
	// Params: [ Num(2) Size(0x8) ]
	void SetDriveTorque(float DriveTorque, int32_t WheelIndex);

	// Object: Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetBrakeTorque
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ef28cc
	// Params: [ Num(2) Size(0x8) ]
	void SetBrakeTorque(float BrakeTorque, int32_t WheelIndex);
};

// Object: Class PhysXVehicles.TireConfig
// Size: 0x50 (Inherited: 0x30)
struct UTireConfig : UDataAsset
{
	DEFINE_UE_CLASS_HELPERS(UTireConfig, "TireConfig")

	float FrictionScale; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct TArray<struct FTireConfigMaterialFriction> TireFrictionScales; // 0x38(0x10)
	uint8_t Pad_0x48[0x8]; // 0x48(0x8)
};

// Object: Class PhysXVehicles.VehicleAnimInstance
// Size: 0xA40 (Inherited: 0x270)
struct UVehicleAnimInstance : UAnimInstance
{
	DEFINE_UE_CLASS_HELPERS(UVehicleAnimInstance, "VehicleAnimInstance")

	uint8_t Pad_0x270[0x7C0]; // 0x270(0x7C0)
	struct UWheeledVehicleMovementComponent* WheeledVehicleMovementComponent; // 0xA30(0x8)
	uint8_t Pad_0xA38[0x8]; // 0xA38(0x8)

	// Object: Function PhysXVehicles.VehicleAnimInstance.GetVehicle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ef2b80
	// Params: [ Num(1) Size(0x8) ]
	struct AWheeledVehicle* GetVehicle();
};

// Object: Class PhysXVehicles.VehicleSettings
// Size: 0x68 (Inherited: 0x38)
struct UVehicleSettings : UDeveloperSettings
{
	DEFINE_UE_CLASS_HELPERS(UVehicleSettings, "VehicleSettings")

	EVehicleSuspensionQuery SuspensionQueryType; // 0x38(0x1)
	uint8_t Pad_0x39[0x3]; // 0x39(0x3)
	int32_t NonBlockingSweepHitNum; // 0x3C(0x4)
	float NormalSmoothRatio; // 0x40(0x4)
	float NormalSmoothAngle; // 0x44(0x4)
	float PointRejectAngle; // 0x48(0x4)
	float NormalRejectAngle; // 0x4C(0x4)
	float HitPosDotForAdjust; // 0x50(0x4)
	float NormalDotForAdjust; // 0x54(0x4)
	float VehicleTickFrequence; // 0x58(0x4)
	float VehicleTickFrequenceHD; // 0x5C(0x4)
	uint8_t IsUseOverlapCache : 1; // 0x60(0x1), Mask(0x1)
	uint8_t BitPad_0x60_1 : 7; // 0x60(0x1)
	uint8_t Pad_0x61[0x3]; // 0x61(0x3)
	float SuspLimitErrorRatio; // 0x64(0x4)
};

// Object: Class PhysXVehicles.VehicleWheel
// Size: 0x568 (Inherited: 0x28)
struct UVehicleWheel : UObject
{
	DEFINE_UE_CLASS_HELPERS(UVehicleWheel, "VehicleWheel")

	struct UStaticMesh* CollisionMesh; // 0x28(0x8)
	uint8_t bDontCreateShape : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t bAutoAdjustCollisionSize : 1; // 0x31(0x1), Mask(0x1)
	uint8_t BitPad_0x31_1 : 7; // 0x31(0x1)
	uint8_t Pad_0x32[0x2]; // 0x32(0x2)
	struct FVector offset; // 0x34(0xC)
	float ShapeRadius; // 0x40(0x4)
	float ShapeWidth; // 0x44(0x4)
	float Mass; // 0x48(0x4)
	float DampingRate; // 0x4C(0x4)
	float SteerAngle; // 0x50(0x4)
	uint8_t bAffectedByHandbrake : 1; // 0x54(0x1), Mask(0x1)
	uint8_t BitPad_0x54_1 : 7; // 0x54(0x1)
	uint8_t Pad_0x55[0x3]; // 0x55(0x3)
	struct UTireType* TireType; // 0x58(0x8)
	struct UTireConfig* TireConfig; // 0x60(0x8)
	float LatStiffMaxLoad; // 0x68(0x4)
	float LatStiffValue; // 0x6C(0x4)
	float LongStiffValue; // 0x70(0x4)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)
	struct FRuntimeFloatCurve FrictionVsSlipGraph; // 0x78(0xA0)
	float SuspensionForceOffset; // 0x118(0x4)
	float SuspensionMaxRaise; // 0x11C(0x4)
	float SuspensionMaxDrop; // 0x120(0x4)
	float SuspensionNaturalFrequency; // 0x124(0x4)
	float SuspensionDampingRatio; // 0x128(0x4)
	float SuspensionNaturalFrequencyLerpValue; // 0x12C(0x4)
	float SuspensionDampingRatioLerpValue; // 0x130(0x4)
	uint8_t Pad_0x134[0x4]; // 0x134(0x4)
	struct FRuntimeFloatCurve SuspensionLengthNaturalFrequencyCurve; // 0x138(0xA0)
	struct FRuntimeFloatCurve SuspensionLengthDampingRatioCurve; // 0x1D8(0xA0)
	struct FRuntimeFloatCurve SuspensionVelocityNaturalFrequencyCurve; // 0x278(0xA0)
	struct FRuntimeFloatCurve SuspensionVelocityDampingRatioCurve; // 0x318(0xA0)
	float SuspensionSteerthreshold; // 0x3B8(0x4)
	uint8_t Pad_0x3BC[0x4]; // 0x3BC(0x4)
	struct FRuntimeFloatCurve SuspensionSteerNaturalFrequencyCurve; // 0x3C0(0xA0)
	struct FRuntimeFloatCurve SuspensionSteerDampingRatioCurve; // 0x460(0xA0)
	EWheelSweepType SweepType; // 0x500(0x1)
	uint8_t Pad_0x501[0x3]; // 0x501(0x3)
	float MaxBrakeTorque; // 0x504(0x4)
	float MaxHandBrakeTorque; // 0x508(0x4)
	uint8_t Pad_0x50C[0x4]; // 0x50C(0x4)
	struct UWheeledVehicleMovementComponent* VehicleSim; // 0x510(0x8)
	int32_t WheelIndex; // 0x518(0x4)
	float DebugLongSlip; // 0x51C(0x4)
	float DebugLatSlip; // 0x520(0x4)
	float DebugNormalizedTireLoad; // 0x524(0x4)
	uint8_t Pad_0x528[0x4]; // 0x528(0x4)
	float DebugWheelTorque; // 0x52C(0x4)
	float DebugLongForce; // 0x530(0x4)
	float DebugLatForce; // 0x534(0x4)
	struct FVector Location; // 0x538(0xC)
	struct FVector OldLocation; // 0x544(0xC)
	struct FVector Velocity; // 0x550(0xC)
	uint8_t Pad_0x55C[0xC]; // 0x55C(0xC)

	// Object: Function PhysXVehicles.VehicleWheel.IsInAir
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ef2e20
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsInAir();

	// Object: Function PhysXVehicles.VehicleWheel.GetSuspensionSpringForce
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ef2dec
	// Params: [ Num(1) Size(0x4) ]
	float GetSuspensionSpringForce();

	// Object: Function PhysXVehicles.VehicleWheel.GetSuspensionOffset
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ef2db8
	// Params: [ Num(1) Size(0x4) ]
	float GetSuspensionOffset();

	// Object: Function PhysXVehicles.VehicleWheel.GetSteerAngle
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ef2d84
	// Params: [ Num(1) Size(0x4) ]
	float GetSteerAngle();

	// Object: Function PhysXVehicles.VehicleWheel.GetRotationAngle
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ef2d50
	// Params: [ Num(1) Size(0x4) ]
	float GetRotationAngle();
};

// Object: Class PhysXVehicles.WheeledVehicle
// Size: 0x3E0 (Inherited: 0x3D0)
struct AWheeledVehicle : APawn
{
	DEFINE_UE_CLASS_HELPERS(AWheeledVehicle, "WheeledVehicle")

	struct USkeletalMeshComponent* Mesh; // 0x3D0(0x8)
	struct UWheeledVehicleMovementComponent* VehicleMovement; // 0x3D8(0x8)
};

// Object: Class PhysXVehicles.WheeledVehicleMovementComponent4W
// Size: 0x488 (Inherited: 0x2D8)
struct UWheeledVehicleMovementComponent4W : UWheeledVehicleMovementComponent
{
	DEFINE_UE_CLASS_HELPERS(UWheeledVehicleMovementComponent4W, "WheeledVehicleMovementComponent4W")

	struct FVehicleEngineData EngineSetup; // 0x2D8(0xB8)
	struct FVehicleDifferential4WData DifferentialSetup; // 0x390(0x1C)
	float AckermannAccuracy; // 0x3AC(0x4)
	struct FVehicleTransmissionData TransmissionSetup; // 0x3B0(0x38)
	struct FRuntimeFloatCurve SteeringCurve; // 0x3E8(0xA0)
};

// Object: Class PhysXVehicles.VehicleMovementParams
// Size: 0x1F0 (Inherited: 0x28)
struct UVehicleMovementParams : UObject
{
	DEFINE_UE_CLASS_HELPERS(UVehicleMovementParams, "VehicleMovementParams")

	uint8_t bModifyEngineSetup : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct FVehicleEngineData EngineSetup; // 0x30(0xB8)
	uint8_t bModifyDifferentialSetup : 1; // 0xE8(0x1), Mask(0x1)
	uint8_t BitPad_0xE8_1 : 7; // 0xE8(0x1)
	uint8_t Pad_0xE9[0x3]; // 0xE9(0x3)
	struct FVehicleDifferential4WData DifferentialSetup; // 0xEC(0x1C)
	uint8_t bModifyTransmissionSetup : 1; // 0x108(0x1), Mask(0x1)
	uint8_t BitPad_0x108_1 : 7; // 0x108(0x1)
	uint8_t Pad_0x109[0x7]; // 0x109(0x7)
	struct FVehicleTransmissionData TransmissionSetup; // 0x110(0x38)
	uint8_t bModifySteeringCurve : 1; // 0x148(0x1), Mask(0x1)
	uint8_t BitPad_0x148_1 : 7; // 0x148(0x1)
	uint8_t Pad_0x149[0x7]; // 0x149(0x7)
	struct FRuntimeFloatCurve SteeringCurve; // 0x150(0xA0)
};

} // namespace SDK
