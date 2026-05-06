#pragma once

#include "../CoreUObject_classes.hpp"
#include "AnimGraphRuntime.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: PhysXVehicles
// Enums: 2
// Structs: 10
// Classes: 7

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
struct USimpleWheeledVehicleMovementComponent;
struct UTireConfig;
struct UVehicleAnimInstance;
struct UVehicleWheel;
struct AWheeledVehicle;
struct UWheeledVehicleMovementComponent4W;

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
// Size: 0xE8 (Inherited: 0xD0)
struct FAnimNode_WheelHandler : FAnimNode_SkeletalControlBase
{
	uint8_t Pad_0xD0[0x18]; // 0xD0(0x18)
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
// Size: 0x8E0 (Inherited: 0x8D0)
struct FVehicleAnimInstanceProxy : FAnimInstanceProxy
{
	uint8_t Pad_0x8D0[0x10]; // 0x8D0(0x10)
};

// Object: ScriptStruct PhysXVehicles.VehicleInputRate
// Size: 0x8 (Inherited: 0x0)
struct FVehicleInputRate
{
	float RiseRate; // 0x0(0x4)
	float FallRate; // 0x4(0x4)
};

// Object: ScriptStruct PhysXVehicles.ReplicatedVehicleState
// Size: 0x14 (Inherited: 0x0)
struct FReplicatedVehicleState
{
	float SteeringInput; // 0x0(0x4)
	float ThrottleInput; // 0x4(0x4)
	float BrakeInput; // 0x8(0x4)
	float HandbrakeInput; // 0xC(0x4)
	int32_t CurrentGear; // 0x10(0x4)
};

// Object: ScriptStruct PhysXVehicles.WheelSetup
// Size: 0x20 (Inherited: 0x0)
struct FWheelSetup
{
	struct UVehicleWheel* WheelClass; // 0x0(0x8)
	struct FName BoneName; // 0x8(0x8)
	struct FVector AdditionalOffset; // 0x10(0xC)
	bool bDisableSteering; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
};

// Object: ScriptStruct PhysXVehicles.VehicleTransmissionData
// Size: 0x40 (Inherited: 0x0)
struct FVehicleTransmissionData
{
	bool bUseGearAutoBox; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float GearSwitchTime; // 0x4(0x4)
	float GearAutoBoxLatency; // 0x8(0x4)
	float FinalRatio; // 0xC(0x4)
	struct TArray<struct FVehicleGearData> ForwardGears; // 0x10(0x10)
	float ReverseGearRatio; // 0x20(0x4)
	float NeutralGearUpRatio; // 0x24(0x4)
	float ClutchStrength; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct TArray<float> WheelSpeedToGearStageArray; // 0x30(0x10)
};

// Object: ScriptStruct PhysXVehicles.VehicleGearData
// Size: 0xC (Inherited: 0x0)
struct FVehicleGearData
{
	float Ratio; // 0x0(0x4)
	float DownRatio; // 0x4(0x4)
	float UpRatio; // 0x8(0x4)
};

// Object: ScriptStruct PhysXVehicles.VehicleEngineData
// Size: 0xA0 (Inherited: 0x0)
struct FVehicleEngineData
{
	struct FRuntimeFloatCurve TorqueCurve; // 0x0(0x88)
	float MaxRPM; // 0x88(0x4)
	float MOI; // 0x8C(0x4)
	float DampingRateFullThrottle; // 0x90(0x4)
	float DampingRateZeroThrottleClutchEngaged; // 0x94(0x4)
	float DampingRateZeroThrottleClutchDisengaged; // 0x98(0x4)
	uint8_t Pad_0x9C[0x4]; // 0x9C(0x4)
};

// Object: ScriptStruct PhysXVehicles.VehicleDifferential4WData
// Size: 0x1C (Inherited: 0x0)
struct FVehicleDifferential4WData
{
	uint8_t DifferentialType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float FrontRearSplit; // 0x4(0x4)
	float FrontLeftRightSplit; // 0x8(0x4)
	float RearLeftRightSplit; // 0xC(0x4)
	float CentreBias; // 0x10(0x4)
	float FrontBias; // 0x14(0x4)
	float RearBias; // 0x18(0x4)
};

// Object: Class PhysXVehicles.WheeledVehicleMovementComponent
// Size: 0x2B8 (Inherited: 0x168)
struct UWheeledVehicleMovementComponent : UPawnMovementComponent
{
	DEFINE_UE_CLASS_HELPERS(UWheeledVehicleMovementComponent, "WheeledVehicleMovementComponent")

	uint8_t Pad_0x168[0x8]; // 0x168(0x8)
	uint8_t bDeprecatedSpringOffsetMode : 1; // 0x170(0x1), Mask(0x1)
	uint8_t bReverseAsBrake : 1; // 0x170(0x1), Mask(0x2)
	uint8_t bUseRVOAvoidance : 1; // 0x170(0x1), Mask(0x4)
	uint8_t bRawHandbrakeInput : 1; // 0x170(0x1), Mask(0x8)
	uint8_t bRawGearUpInput : 1; // 0x170(0x1), Mask(0x10)
	uint8_t bRawGearDownInput : 1; // 0x170(0x1), Mask(0x20)
	uint8_t bWasAvoidanceUpdated : 1; // 0x170(0x1), Mask(0x40)
	uint8_t BitPad_0x170_7 : 1; // 0x170(0x1)
	uint8_t Pad_0x171[0x3]; // 0x171(0x3)
	float Mass; // 0x174(0x4)
	struct TArray<struct FWheelSetup> WheelSetups; // 0x178(0x10)
	float DragCoefficient; // 0x188(0x4)
	float ChassisWidth; // 0x18C(0x4)
	float ChassisHeight; // 0x190(0x4)
	float DragArea; // 0x194(0x4)
	float EstimatedMaxEngineSpeed; // 0x198(0x4)
	float MaxEngineRPM; // 0x19C(0x4)
	float DebugDragMagnitude; // 0x1A0(0x4)
	struct FVector InertiaTensorScale; // 0x1A4(0xC)
	float MinNormalizedTireLoad; // 0x1B0(0x4)
	float MinNormalizedTireLoadFiltered; // 0x1B4(0x4)
	float MaxNormalizedTireLoad; // 0x1B8(0x4)
	float MaxNormalizedTireLoadFiltered; // 0x1BC(0x4)
	float ThresholdLongitudinalSpeed; // 0x1C0(0x4)
	int32_t LowForwardSpeedSubStepCount; // 0x1C4(0x4)
	int32_t HighForwardSpeedSubStepCount; // 0x1C8(0x4)
	uint8_t Pad_0x1CC[0x4]; // 0x1CC(0x4)
	struct TArray<struct UVehicleWheel*> Wheels; // 0x1D0(0x10)
	uint8_t Pad_0x1E0[0x18]; // 0x1E0(0x18)
	float RVOAvoidanceRadius; // 0x1F8(0x4)
	float RVOAvoidanceHeight; // 0x1FC(0x4)
	float AvoidanceConsiderationRadius; // 0x200(0x4)
	float RVOSteeringStep; // 0x204(0x4)
	float RVOThrottleStep; // 0x208(0x4)
	int32_t AvoidanceUID; // 0x20C(0x4)
	struct FNavAvoidanceMask AvoidanceGroup; // 0x210(0x4)
	struct FNavAvoidanceMask GroupsToAvoid; // 0x214(0x4)
	struct FNavAvoidanceMask GroupsToIgnore; // 0x218(0x4)
	float AvoidanceWeight; // 0x21C(0x4)
	struct FVector PendingLaunchVelocity; // 0x220(0xC)
	struct FReplicatedVehicleState ReplicatedState; // 0x22C(0x14)
	uint8_t Pad_0x240[0x4]; // 0x240(0x4)
	float RawSteeringInput; // 0x244(0x4)
	float RawThrottleInput; // 0x248(0x4)
	float RawBrakeInput; // 0x24C(0x4)
	float SteeringInput; // 0x250(0x4)
	float ThrottleInput; // 0x254(0x4)
	float BrakeInput; // 0x258(0x4)
	float HandbrakeInput; // 0x25C(0x4)
	float IdleBrakeInput; // 0x260(0x4)
	float StopThreshold; // 0x264(0x4)
	float WrongDirectionThreshold; // 0x268(0x4)
	struct FVehicleInputRate ThrottleInputRate; // 0x26C(0x8)
	struct FVehicleInputRate BrakeInputRate; // 0x274(0x8)
	struct FVehicleInputRate HandbrakeInputRate; // 0x27C(0x8)
	struct FVehicleInputRate SteeringInputRate; // 0x284(0x8)
	uint8_t Pad_0x28C[0x24]; // 0x28C(0x24)
	struct AController* OverrideController; // 0x2B0(0x8)

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ec5ff8
	// Params: [ Num(1) Size(0x1) ]
	void SetUseAutoGears(bool bUseAuto);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ec64f4
	// Params: [ Num(1) Size(0x4) ]
	void SetThrottleInput(float Throttle);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ec60a8
	// Params: [ Num(2) Size(0x5) ]
	void SetTargetGear(int32_t GearNum, bool bImmediate);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ec63a4
	// Params: [ Num(1) Size(0x4) ]
	void SetSteeringInput(float Steering);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ec62f4
	// Params: [ Num(1) Size(0x1) ]
	void SetHandbrakeInput(bool bNewHandbrake);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3ec5ab4
	// Params: [ Num(1) Size(0x4) ]
	void SetGroupsToIgnoreMask(const struct FNavAvoidanceMask& GroupMask);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ec5b64
	// Params: [ Num(1) Size(0x4) ]
	void SetGroupsToIgnore(int32_t GroupFlags);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3ec5c0c
	// Params: [ Num(1) Size(0x4) ]
	void SetGroupsToAvoidMask(const struct FNavAvoidanceMask& GroupMask);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ec5cbc
	// Params: [ Num(1) Size(0x4) ]
	void SetGroupsToAvoid(int32_t GroupFlags);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ec6244
	// Params: [ Num(1) Size(0x1) ]
	void SetGearUp(bool bNewGearUp);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ec6194
	// Params: [ Num(1) Size(0x1) ]
	void SetGearDown(bool bNewGearDown);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ec644c
	// Params: [ Num(1) Size(0x4) ]
	void SetBrakeInput(float Brake);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3ec5d64
	// Params: [ Num(1) Size(0x4) ]
	void SetAvoidanceGroupMask(const struct FNavAvoidanceMask& GroupMask);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ec5e14
	// Params: [ Num(1) Size(0x4) ]
	void SetAvoidanceGroup(int32_t GroupFlags);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ec5a04
	// Params: [ Num(1) Size(0x1) ]
	void SetAvoidanceEnabled(bool bEnable);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState
	// Flags: [Net|Native|Event|Protected|NetServer|NetValidate]
	// Offset: 0x3ec5798
	// Params: [ Num(6) Size(0x60) ]
	void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32_t CurrentGear, struct FRigidBodyState InPhysicState);

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3ec5ebc
	// Params: [ Num(1) Size(0x1) ]
	bool GetUseAutoGears();

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3ec5ef4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetTargetGear();

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3ec5fc4
	// Params: [ Num(1) Size(0x4) ]
	float GetForwardSpeed();

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3ec5f90
	// Params: [ Num(1) Size(0x4) ]
	float GetEngineRotationSpeed();

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3ec5f5c
	// Params: [ Num(1) Size(0x4) ]
	float GetEngineMaxRotationSpeed();

	// Object: Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3ec5f28
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCurrentGear();
};

// Object: Class PhysXVehicles.SimpleWheeledVehicleMovementComponent
// Size: 0x2B8 (Inherited: 0x2B8)
struct USimpleWheeledVehicleMovementComponent : UWheeledVehicleMovementComponent
{
	DEFINE_UE_CLASS_HELPERS(USimpleWheeledVehicleMovementComponent, "SimpleWheeledVehicleMovementComponent")

	// Object: Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ec5308
	// Params: [ Num(2) Size(0x8) ]
	void SetSteerAngle(float SteerAngle, int32_t WheelIndex);

	// Object: Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetDriveTorque
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ec53f0
	// Params: [ Num(2) Size(0x8) ]
	void SetDriveTorque(float DriveTorque, int32_t WheelIndex);

	// Object: Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetBrakeTorque
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ec54d8
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
// Size: 0xBD0 (Inherited: 0x2D0)
struct UVehicleAnimInstance : UAnimInstance
{
	DEFINE_UE_CLASS_HELPERS(UVehicleAnimInstance, "VehicleAnimInstance")

	uint8_t Pad_0x2D0[0x8F0]; // 0x2D0(0x8F0)
	struct UWheeledVehicleMovementComponent* WheeledVehicleMovementComponent; // 0xBC0(0x8)
	uint8_t Pad_0xBC8[0x8]; // 0xBC8(0x8)

	// Object: Function PhysXVehicles.VehicleAnimInstance.GetVehicle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ec55d4
	// Params: [ Num(1) Size(0x8) ]
	struct AWheeledVehicle* GetVehicle();
};

// Object: Class PhysXVehicles.VehicleWheel
// Size: 0xF0 (Inherited: 0x28)
struct UVehicleWheel : UObject
{
	DEFINE_UE_CLASS_HELPERS(UVehicleWheel, "VehicleWheel")

	struct UStaticMesh* CollisionMesh; // 0x28(0x8)
	bool bDontCreateShape; // 0x30(0x1)
	bool bAutoAdjustCollisionSize; // 0x31(0x1)
	uint8_t Pad_0x32[0x2]; // 0x32(0x2)
	struct FVector Offset; // 0x34(0xC)
	float ShapeRadius; // 0x40(0x4)
	float ShapeWidth; // 0x44(0x4)
	float Mass; // 0x48(0x4)
	float DampingRate; // 0x4C(0x4)
	float SteerAngle; // 0x50(0x4)
	bool bAffectedByHandbrake; // 0x54(0x1)
	uint8_t Pad_0x55[0x3]; // 0x55(0x3)
	struct UTireType* TireType; // 0x58(0x8)
	struct UTireConfig* TireConfig; // 0x60(0x8)
	float LatStiffMaxLoad; // 0x68(0x4)
	float LatStiffValue; // 0x6C(0x4)
	float LongStiffValue; // 0x70(0x4)
	float SuspensionForceOffset; // 0x74(0x4)
	float SuspensionMaxRaise; // 0x78(0x4)
	float SuspensionMaxDrop; // 0x7C(0x4)
	float SuspensionNaturalFrequency; // 0x80(0x4)
	float SuspensionDampingRatio; // 0x84(0x4)
	uint8_t SweepType; // 0x88(0x1)
	uint8_t Pad_0x89[0x3]; // 0x89(0x3)
	float MaxBrakeTorque; // 0x8C(0x4)
	float MaxHandBrakeTorque; // 0x90(0x4)
	uint8_t Pad_0x94[0x4]; // 0x94(0x4)
	struct UWheeledVehicleMovementComponent* VehicleSim; // 0x98(0x8)
	int32_t WheelIndex; // 0xA0(0x4)
	float DebugLongSlip; // 0xA4(0x4)
	float DebugLatSlip; // 0xA8(0x4)
	float DebugNormalizedTireLoad; // 0xAC(0x4)
	uint8_t Pad_0xB0[0x4]; // 0xB0(0x4)
	float DebugWheelTorque; // 0xB4(0x4)
	float DebugLongForce; // 0xB8(0x4)
	float DebugLatForce; // 0xBC(0x4)
	struct FVector Location; // 0xC0(0xC)
	struct FVector OldLocation; // 0xCC(0xC)
	struct FVector Velocity; // 0xD8(0xC)
	uint8_t Pad_0xE4[0xC]; // 0xE4(0xC)

	// Object: Function PhysXVehicles.VehicleWheel.IsInAir
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3ec5674
	// Params: [ Num(1) Size(0x1) ]
	bool IsInAir();

	// Object: Function PhysXVehicles.VehicleWheel.GetSuspensionOffset
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3ec56ac
	// Params: [ Num(1) Size(0x4) ]
	float GetSuspensionOffset();

	// Object: Function PhysXVehicles.VehicleWheel.GetSteerAngle
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3ec5714
	// Params: [ Num(1) Size(0x4) ]
	float GetSteerAngle();

	// Object: Function PhysXVehicles.VehicleWheel.GetRotationAngle
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3ec56e0
	// Params: [ Num(1) Size(0x4) ]
	float GetRotationAngle();
};

// Object: Class PhysXVehicles.WheeledVehicle
// Size: 0x380 (Inherited: 0x370)
struct AWheeledVehicle : APawn
{
	DEFINE_UE_CLASS_HELPERS(AWheeledVehicle, "WheeledVehicle")

	struct USkeletalMeshComponent* Mesh; // 0x370(0x8)
	struct UWheeledVehicleMovementComponent* VehicleMovement; // 0x378(0x8)
};

// Object: Class PhysXVehicles.WheeledVehicleMovementComponent4W
// Size: 0x440 (Inherited: 0x2B8)
struct UWheeledVehicleMovementComponent4W : UWheeledVehicleMovementComponent
{
	DEFINE_UE_CLASS_HELPERS(UWheeledVehicleMovementComponent4W, "WheeledVehicleMovementComponent4W")

	struct FVehicleEngineData EngineSetup; // 0x2B8(0xA0)
	struct FVehicleDifferential4WData DifferentialSetup; // 0x358(0x1C)
	float AckermannAccuracy; // 0x374(0x4)
	struct FVehicleTransmissionData TransmissionSetup; // 0x378(0x40)
	struct FRuntimeFloatCurve SteeringCurve; // 0x3B8(0x88)
};

} // namespace SDK
