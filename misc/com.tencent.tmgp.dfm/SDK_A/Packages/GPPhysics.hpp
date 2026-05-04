#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: GPPhysics
// Enums: 2
// Structs: 11
// Classes: 5

struct AActor;
struct AOpenWorldWaterWaveGenerator;
struct AWaterDataAssetsStreamer;
enum class ECollisionChannel : uint8_t;
struct FHitResult;
struct UOpenWorldWaterSubsystem;
struct UPrimitiveComponent;
struct USkeletalMeshComponent;
struct UStaticMeshComponent;
struct UWorld;
struct FWaterWaveOffsetInterpolation;
struct FWaterWaveOffsetResult;
struct FBuoyancySubmergedState;
struct FCalculatedForce;
struct FBuoyancyTriangleSimulatingResult;
struct FTriangleSimulatedForce;
struct FWaterAdvancedSimulatedSetting;
struct FDragForceVelocitySetting;
struct FSimpleDampingForceSetting;
struct FComplexDampingForceSetting;
struct FBuoyancyForceSetting;
struct UGPPhysicsSimulatableComponent;
struct UGPAdvancedBoxComponent;
struct UGPBuoyancyComponent;
struct UGPPhysics;
struct IGPPhysicsContactModifiable;

// Object: Enum GPPhysics.EBuoyancyTriangleState
enum class EBuoyancyTriangleState : uint8_t
{
	AllUnderWater = 0,
	PartiallyUnderWater = 1,
	AboveWater = 2,
	Stranded = 3,
	Disabled = 127,
	EBuoyancyTriangleState_MAX = 128
};

// Object: Enum GPPhysics.EDampingForceType
enum class EDampingForceType : uint8_t
{
	SimpleDampingForce = 0,
	ComplexDampingForce = 1,
	EDampingForceType_MAX = 2
};

// Object: ScriptStruct GPPhysics.WaterWaveOffsetInterpolation
// Size: 0x38 (Inherited: 0x0)
struct FWaterWaveOffsetInterpolation
{
	struct FBox2D Bounds; // 0x0(0x14)
	float WaveOffsetInCenter; // 0x14(0x4)
	float WaveOffsetInCenterLeft; // 0x18(0x4)
	float WaveOffsetInCenterRight; // 0x1C(0x4)
	float WaveOffsetInCenterFront; // 0x20(0x4)
	float WaveOffsetInCenterBack; // 0x24(0x4)
	float WaveOffsetInFrontLeft; // 0x28(0x4)
	float WaveOffsetInFrontRight; // 0x2C(0x4)
	float WaveOffsetInBackLeft; // 0x30(0x4)
	float WaveOffsetInBackRight; // 0x34(0x4)
};

// Object: ScriptStruct GPPhysics.WaterWaveOffsetResult
// Size: 0x10 (Inherited: 0x0)
struct FWaterWaveOffsetResult
{
	float WaveOffset; // 0x0(0x4)
	struct FVector CenterInLocal; // 0x4(0xC)
};

// Object: ScriptStruct GPPhysics.BuoyancySubmergedState
// Size: 0x44 (Inherited: 0x0)
struct FBuoyancySubmergedState
{
	uint8_t bIsTouchingWater : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FVector LeftWaterPoint; // 0x4(0xC)
	struct FVector RightWaterPoint; // 0x10(0xC)
	struct FVector FrontWaterPoint; // 0x1C(0xC)
	uint8_t bIsSlammingWater : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	struct FVector SlammingWaterPoint; // 0x2C(0xC)
	struct FVector SlammingWaterVelocity; // 0x38(0xC)
};

// Object: ScriptStruct GPPhysics.CalculatedForce
// Size: 0x18 (Inherited: 0x0)
struct FCalculatedForce
{
	struct FVector Force; // 0x0(0xC)
	struct FVector Torque; // 0xC(0xC)
};

// Object: ScriptStruct GPPhysics.BuoyancyTriangleSimulatingResult
// Size: 0x68 (Inherited: 0x0)
struct FBuoyancyTriangleSimulatingResult
{
	EBuoyancyTriangleState TriangleState; // 0x0(0x1)
	EBuoyancyTriangleState PreviousTriangleState; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	float WaterHeight; // 0x4(0x4)
	struct FVector TriangleNormal; // 0x8(0xC)
	struct FVector Velocity; // 0x14(0xC)
	struct FCalculatedForce BuoyancyForce; // 0x20(0x18)
	struct FCalculatedForce ViscousResistanceForce; // 0x38(0x18)
	struct FCalculatedForce DragForce; // 0x50(0x18)
};

// Object: ScriptStruct GPPhysics.TriangleSimulatedForce
// Size: 0x50 (Inherited: 0x0)
struct FTriangleSimulatedForce
{
	struct FVector Center; // 0x0(0xC)
	struct FVector Normal; // 0xC(0xC)
	float DistanceToWater; // 0x18(0x4)
	struct FVector Buoyancy; // 0x1C(0xC)
	struct FVector ViscousResistance; // 0x28(0xC)
	struct FVector DragForce; // 0x34(0xC)
	uint8_t bIsSlammingWater : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t Pad_0x41[0x3]; // 0x41(0x3)
	struct FVector Velocity; // 0x44(0xC)
};

// Object: ScriptStruct GPPhysics.WaterAdvancedSimulatedSetting
// Size: 0x14 (Inherited: 0x0)
struct FWaterAdvancedSimulatedSetting
{
	float ClampBuoyancyForceScale; // 0x0(0x4)
	float ClampBuoyancyForceScaleForRising; // 0x4(0x4)
	float DragForceLinearVelocityDampingRate; // 0x8(0x4)
	float DragForceRollVelocityDampingRate; // 0xC(0x4)
	uint8_t bShouldIgnoreYawTorque : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
};

// Object: ScriptStruct GPPhysics.DragForceVelocitySetting
// Size: 0xC (Inherited: 0x0)
struct FDragForceVelocitySetting
{
	float VelocityLinearCoefficient; // 0x0(0x4)
	float VelocityExponentialCoefficient; // 0x4(0x4)
	float MaxDragVelocitySize; // 0x8(0x4)
};

// Object: ScriptStruct GPPhysics.SimpleDampingForceSetting
// Size: 0x20 (Inherited: 0x0)
struct FSimpleDampingForceSetting
{
	struct FDragForceVelocitySetting VerticalVelocitySetting; // 0x0(0xC)
	float VerticalDragForceScale; // 0xC(0x4)
	struct FDragForceVelocitySetting HorizontalVelocitySetting; // 0x10(0xC)
	float HorizontalDragForceScale; // 0x1C(0x4)
};

// Object: ScriptStruct GPPhysics.ComplexDampingForceSetting
// Size: 0x20 (Inherited: 0x0)
struct FComplexDampingForceSetting
{
	float ViscosityResistanceCoefficient; // 0x0(0x4)
	float ViscosityResistanceForceScale; // 0x4(0x4)
	struct FDragForceVelocitySetting DragVelocitySetting; // 0x8(0xC)
	float SlamForceCoefficient; // 0x14(0x4)
	float SuctionForceCoefficient; // 0x18(0x4)
	float DragForceScale; // 0x1C(0x4)
};

// Object: ScriptStruct GPPhysics.BuoyancyForceSetting
// Size: 0x18 (Inherited: 0x0)
struct FBuoyancyForceSetting
{
	struct FName SimulatingComponentName; // 0x0(0x8)
	struct FName BuoyancyMeshComponentName; // 0x8(0x8)
	float FluidDensity; // 0x10(0x4)
	float BuoyancyScale; // 0x14(0x4)
};

// Object: Class GPPhysics.GPPhysicsSimulatableComponent
// Size: 0xF8 (Inherited: 0xF8)
struct UGPPhysicsSimulatableComponent : UActorComponent
{	DEFINE_UE_CLASS_HELPERS(UGPPhysicsSimulatableComponent, "GPPhysicsSimulatableComponent")

};

// Object: Class GPPhysics.GPAdvancedBoxComponent
// Size: 0x5B0 (Inherited: 0x5B0)
struct UGPAdvancedBoxComponent : UBoxComponent
{
	uint8_t bContributeToMass : 1; // 0x5A2(0x1), Mask(0x1)
	DEFINE_UE_CLASS_HELPERS(UGPAdvancedBoxComponent, "GPAdvancedBoxComponent")

};

// Object: Class GPPhysics.GPBuoyancyComponent
// Size: 0x398 (Inherited: 0xF8)
struct UGPBuoyancyComponent : UActorComponent
{
	struct FBuoyancyForceSetting BuoyancySetting; // 0xF8(0x18)
	EDampingForceType DampingForceType; // 0x110(0x1)
	uint8_t Pad_0x111[0x3]; // 0x111(0x3)
	struct FSimpleDampingForceSetting SimpleDampingSetting; // 0x114(0x20)
	struct FComplexDampingForceSetting ComplexDampingSetting; // 0x134(0x20)
	struct FWaterAdvancedSimulatedSetting AdvancedSetting; // 0x154(0x14)
	int32_t SlammingWaterPointThreshold; // 0x168(0x4)
	uint8_t bDrawDebug : 1; // 0x16C(0x1), Mask(0x1)
	uint8_t BitPad_0x16C_1 : 7; // 0x16C(0x1)
	uint8_t Pad_0x16D[0x3]; // 0x16D(0x3)
	struct UPrimitiveComponent* SimulatingComponent; // 0x170(0x8)
	struct UStaticMeshComponent* BuoyancyMeshComponent; // 0x178(0x8)
	struct TArray<struct FBuoyancyTriangleSimulatingResult> TriangleSimulatingResults; // 0x180(0x10)
	struct TArray<int32_t> UnderWaterTriangleIndexArray; // 0x190(0x10)
	uint8_t Pad_0x1A0[0x8]; // 0x1A0(0x8)
	struct TArray<struct FTriangleSimulatedForce> TriangleSimulatedForces; // 0x1A8(0x10)
	uint8_t Pad_0x1B8[0x8]; // 0x1B8(0x8)
	struct TArray<struct FWaterWaveOffsetResult> WaveOffsetResults; // 0x1C0(0x10)
	struct TArray<int32_t> TriangleWaveOffsetResultIndexArray; // 0x1D0(0x10)
	uint8_t Pad_0x1E0[0x38]; // 0x1E0(0x38)
	struct FBuoyancySubmergedState SubmergedState; // 0x218(0x44)
	uint8_t Pad_0x25C[0x4]; // 0x25C(0x4)
	struct TArray<struct FVector> LocalVertices; // 0x260(0x10)
	struct TArray<int32_t> TriangleIndices; // 0x270(0x10)
	struct TArray<struct FVector> WorldVertices; // 0x280(0x10)
	uint8_t Pad_0x290[0xC8]; // 0x290(0xC8)
	struct AWaterDataAssetsStreamer* WaterDataAssetsStreamer; // 0x358(0x8)
	struct AOpenWorldWaterWaveGenerator* WaterWaveGenerator; // 0x360(0x8)
	struct UOpenWorldWaterSubsystem* WaterSubsystem; // 0x368(0x8)
	uint8_t Pad_0x370[0x28]; // 0x370(0x28)
	DEFINE_UE_CLASS_HELPERS(UGPBuoyancyComponent, "GPBuoyancyComponent")

};

// Object: Class GPPhysics.GPPhysics
// Size: 0x28 (Inherited: 0x28)
struct UGPPhysics : UObject
{

	// Object: Function GPPhysics.GPPhysics.WeaponTraceSingle
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xadc2690
	// Params: [ Num(7) Size(0xBD) ]
	static uint8_t WeaponTraceSingle(struct UWorld* World, const struct TArray<struct AActor*>& IgnoreActors, const struct FVector& Start, const struct FVector& End, uint8_t IgnoreHidden, struct FHitResult& OutHitResult);

	// Object: Function GPPhysics.GPPhysics.WeaponTraceMultiExtend
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xadc240c
	// Params: [ Num(8) Size(0x5C) ]
	static int32_t WeaponTraceMultiExtend(struct UWorld* World, const struct TArray<struct AActor*>& IgnoreActors, const struct TArray<struct AActor*>& PenetrationTypes, const struct FVector& Start, const struct FVector& End, uint8_t IgnoreHidden, struct TArray<struct FHitResult>& OutHitsResult);

	// Object: Function GPPhysics.GPPhysics.WeaponTraceMulti
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xadc2188
	// Params: [ Num(8) Size(0x5C) ]
	static int32_t WeaponTraceMulti(struct UWorld* World, const struct TArray<struct AActor*>& IgnoreActors, const struct TArray<struct AActor*>& PenetrationTypes, const struct FVector& Start, const struct FVector& End, uint8_t IgnoreHidden, struct TArray<struct FHitResult>& OutHitsResult);

	// Object: Function GPPhysics.GPPhysics.ViewTraceSingle
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xadc1f3c
	// Params: [ Num(7) Size(0xBD) ]
	static uint8_t ViewTraceSingle(struct UWorld* World, const struct TArray<struct AActor*>& IgnoreActors, const struct FVector& Start, const struct FVector& End, uint8_t IgnoreHidden, struct FHitResult& OutHitResult);

	// Object: Function GPPhysics.GPPhysics.SphereTraceSingleForObjects
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xadc1c84
	// Params: [ Num(9) Size(0xD9) ]
	static uint8_t SphereTraceSingleForObjects(struct UWorld* World, struct FHitResult& OutHit, struct FVector Start, struct FVector End, float radius, const struct TArray<ECollisionChannel>& ObjectTypes, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore);

	// Object: Function GPPhysics.GPPhysics.SphereTraceSingle
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xadc19ec
	// Params: [ Num(9) Size(0xC1) ]
	static uint8_t SphereTraceSingle(struct UWorld* World, struct FHitResult& OutHit, struct FVector Start, struct FVector End, float radius, ECollisionChannel TraceChannel, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore);

	// Object: Function GPPhysics.GPPhysics.SphereTraceMultiForObjects
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xadc1748
	// Params: [ Num(9) Size(0x61) ]
	static uint8_t SphereTraceMultiForObjects(struct UWorld* World, struct TArray<struct FHitResult>& OutHits, struct FVector Start, struct FVector End, float radius, const struct TArray<ECollisionChannel>& ObjectTypes, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore);

	// Object: Function GPPhysics.GPPhysics.SphereTraceMulti
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xadc14bc
	// Params: [ Num(9) Size(0x49) ]
	static uint8_t SphereTraceMulti(struct UWorld* World, struct TArray<struct FHitResult>& OutHits, struct FVector Start, struct FVector End, float radius, ECollisionChannel TraceChannel, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore);

	// Object: Function GPPhysics.GPPhysics.SphereLineIntersectExtend
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xadc1214
	// Params: [ Num(9) Size(0x49) ]
	static uint8_t SphereLineIntersectExtend(const struct FVector& Origin, float radius, const struct FVector& Start, const struct FVector& Dir, float Length, struct FVector& OutHitLoc, struct FVector& OutHitNormal, float& OutHitTime);

	// Object: Function GPPhysics.GPPhysics.SphereLineIntersect
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xadc0fa8
	// Params: [ Num(8) Size(0x45) ]
	static uint8_t SphereLineIntersect(const struct FVector& Origin, float radius, const struct FVector& Start, const struct FVector& End, struct FVector& OutHitLoc, struct FVector& OutHitNormal, float& OutHitTime);

	// Object: Function GPPhysics.GPPhysics.MeshTraceSingle
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xadc0e08
	// Params: [ Num(5) Size(0xA9) ]
	static uint8_t MeshTraceSingle(struct USkeletalMeshComponent* SkelComp, const struct FVector& Start, const struct FVector& End, struct FHitResult& OutHitResult);

	// Object: Function GPPhysics.GPPhysics.LineTraceSingleForObjects
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xadc0b8c
	// Params: [ Num(8) Size(0xD1) ]
	static uint8_t LineTraceSingleForObjects(struct UWorld* World, struct FHitResult& OutHit, struct FVector Start, struct FVector End, const struct TArray<ECollisionChannel>& ObjectTypes, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore);

	// Object: Function GPPhysics.GPPhysics.LineTraceSingle
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xadc0930
	// Params: [ Num(8) Size(0xC1) ]
	static uint8_t LineTraceSingle(struct UWorld* World, struct FHitResult& OutHit, struct FVector Start, struct FVector End, ECollisionChannel TraceChannel, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore);

	// Object: Function GPPhysics.GPPhysics.LineTraceMultiForObjects
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xadc06c8
	// Params: [ Num(8) Size(0x59) ]
	static uint8_t LineTraceMultiForObjects(struct UWorld* World, struct TArray<struct FHitResult>& OutHits, struct FVector Start, struct FVector End, const struct TArray<ECollisionChannel>& ObjectTypes, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore);

	// Object: Function GPPhysics.GPPhysics.LineTraceMulti
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xadc0478
	// Params: [ Num(8) Size(0x49) ]
	static uint8_t LineTraceMulti(struct UWorld* World, struct TArray<struct FHitResult>& OutHits, struct FVector Start, struct FVector End, ECollisionChannel TraceChannel, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore);

	// Object: Function GPPhysics.GPPhysics.GetSimpleCheckPassedCharMeshs
	// Flags: [Final|Native|Static|Private|HasOutParms|HasDefaults]
	// Offset: 0xadc0204
	// Params: [ Num(7) Size(0x42) ]
	static uint8_t GetSimpleCheckPassedCharMeshs(struct TArray<struct USkeletalMeshComponent*>& SimpleCheckPassedCharMeshs, struct UWorld* World, struct TArray<struct AActor*> IgnoreActors, const struct FVector& Start, const struct FVector& WorldEnd, uint8_t IgnoreHidden);

	// Object: Function GPPhysics.GPPhysics.GetMultiLineTraceSingleByChannel
	// Flags: [Final|Native|Static|Private|HasOutParms|HasDefaults]
	// Offset: 0xadbfe5c
	// Params: [ Num(11) Size(0x171) ]
	static uint8_t GetMultiLineTraceSingleByChannel(struct UWorld* World, struct FHitResult& AddHitResult, struct FHitResult& HitResult, struct TArray<struct FHitResult>& OutHits, const struct TArray<struct AActor*>& IgnoreActors, const struct TArray<struct AActor*>& PenetrationTypes, struct FVector& WorldEnd, const struct FVector& Start, const struct FVector& End, float& OuterTime);

	// Object: Function GPPhysics.GPPhysics.CheckSingleDropPositionWrapper
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xadbfc98
	// Params: [ Num(6) Size(0x31) ]
	static uint8_t CheckSingleDropPositionWrapper(struct AActor* Actor, const struct FVector& InPos, float radius, struct FVector& OutPos, struct FRotator& OutRotate);

	// Object: Function GPPhysics.GPPhysics.CheckHitPointOnGround
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0xadbfbcc
	// Params: [ Num(2) Size(0x89) ]
	static uint8_t CheckHitPointOnGround(const struct FHitResult& HitResult);

	// Object: Function GPPhysics.GPPhysics.CheckDropPositionOnGroundWrapper
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xadbf960
	// Params: [ Num(8) Size(0x49) ]
	static uint8_t CheckDropPositionOnGroundWrapper(struct UWorld* World, const struct FVector& InPos, float BoxExtent, float& ZOffset, struct FVector& OutPos, struct FRotator& OutRotate, const struct TArray<struct AActor*>& ActorsToIgnore);

	// Object: Function GPPhysics.GPPhysics.CheckDropPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xadbf828
	// Params: [ Num(4) Size(0x29) ]
	static uint8_t CheckDropPoint(struct UWorld* World, struct FVector StartLoc, struct TArray<struct AActor*>& ActorsToIgnore);

	// Object: Function GPPhysics.GPPhysics.CheckDropIgnoreListPositionWrapper
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xadbf610
	// Params: [ Num(7) Size(0x41) ]
	static uint8_t CheckDropIgnoreListPositionWrapper(struct UWorld* World, const struct FVector& InPos, float radius, struct FVector& OutPos, struct FRotator& OutRotate, const struct TArray<struct AActor*>& ActorsToIgnore);

	// Object: Function GPPhysics.GPPhysics.CapsuleTraceSingleForObjects
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xadbf320
	// Params: [ Num(10) Size(0xD9) ]
	static uint8_t CapsuleTraceSingleForObjects(struct UWorld* World, struct FHitResult& OutHit, struct FVector Start, struct FVector End, float radius, float HalfHeight, const struct TArray<ECollisionChannel>& ObjectTypes, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore);

	// Object: Function GPPhysics.GPPhysics.CapsuleTraceSingle
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xadbf050
	// Params: [ Num(10) Size(0xC9) ]
	static uint8_t CapsuleTraceSingle(struct UWorld* World, struct FHitResult& OutHit, struct FVector Start, struct FVector End, float radius, float HalfHeight, ECollisionChannel TraceChannel, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore);

	// Object: Function GPPhysics.GPPhysics.CapsuleTraceMultiForObjects
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xadbed74
	// Params: [ Num(10) Size(0x61) ]
	static uint8_t CapsuleTraceMultiForObjects(struct UWorld* World, struct TArray<struct FHitResult>& OutHits, struct FVector Start, struct FVector End, float radius, float HalfHeight, const struct TArray<ECollisionChannel>& ObjectTypes, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore);

	// Object: Function GPPhysics.GPPhysics.CapsuleTraceMulti
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xadbeab0
	// Params: [ Num(10) Size(0x51) ]
	static uint8_t CapsuleTraceMulti(struct UWorld* World, struct TArray<struct FHitResult>& OutHits, struct FVector Start, struct FVector End, float radius, float HalfHeight, ECollisionChannel TraceChannel, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore);

	// Object: Function GPPhysics.GPPhysics.CapsuleLineIntersect
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xadbe7e0
	// Params: [ Num(9) Size(0x6D) ]
	static uint8_t CapsuleLineIntersect(const struct FTransform& LocalToWorldNoScale, float radius, float Length, const struct FVector& Start, const struct FVector& End, struct FVector& OutHitLoc, struct FVector& OutHitNormal, float& OutHitTime);

	// Object: Function GPPhysics.GPPhysics.BoxTraceSingleForObjects
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xadbe4dc
	// Params: [ Num(10) Size(0xE9) ]
	static uint8_t BoxTraceSingleForObjects(struct UWorld* World, struct FHitResult& OutHit, struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, const struct TArray<ECollisionChannel>& ObjectTypes, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore);

	// Object: Function GPPhysics.GPPhysics.BoxTraceSingle
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xadbe1f8
	// Params: [ Num(10) Size(0xD9) ]
	static uint8_t BoxTraceSingle(struct UWorld* World, struct FHitResult& OutHit, struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, ECollisionChannel TraceChannel, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore);

	// Object: Function GPPhysics.GPPhysics.BoxTraceMultiForObjects
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xadbdf08
	// Params: [ Num(10) Size(0x71) ]
	static uint8_t BoxTraceMultiForObjects(struct UWorld* World, struct TArray<struct FHitResult>& OutHits, struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, const struct TArray<ECollisionChannel>& ObjectTypes, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore);

	// Object: Function GPPhysics.GPPhysics.BoxTraceMulti
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xadbdc30
	// Params: [ Num(10) Size(0x61) ]
	static uint8_t BoxTraceMulti(struct UWorld* World, struct TArray<struct FHitResult>& OutHits, struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, ECollisionChannel TraceChannel, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore);

	// Object: Function GPPhysics.GPPhysics.BoxLineIntersect
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xadbd93c
	// Params: [ Num(9) Size(0x7D) ]
	static uint8_t BoxLineIntersect(const struct FTransform& LocalToWorldNoScale, const struct FVector& Center, const struct FVector& Extend, const struct FVector& Start, const struct FVector& End, struct FVector& OutHitLoc, struct FVector& OutHitNormal, float& OutHitTime);
	DEFINE_UE_CLASS_HELPERS(UGPPhysics, "GPPhysics")

};

// Object: Class GPPhysics.GPPhysicsContactModifiable
// Size: 0x28 (Inherited: 0x28)
struct IGPPhysicsContactModifiable : IInterface
{	DEFINE_UE_CLASS_HELPERS(IGPPhysicsContactModifiable, "GPPhysicsContactModifiable")

};

} // namespace SDK
