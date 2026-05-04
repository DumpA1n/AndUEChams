#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: AsyncTraceSystem
// Enums: 0
// Structs: 7
// Classes: 1

struct AActor;
enum class ECollisionChannel : uint8_t;
enum class EPhysicalSurface : uint8_t;
struct FGPEndAyncTickFunction;
struct FGPStartAyncTickFunction;
struct FGPAysncTraceDataBase;
struct FGPAysncPredictProjectileData;
struct FGPAysncPredictProjectilePathPointData;
struct FGPAysncPredictProjectilePathResult;
struct FGPAyncPredictProjectilePathParams;
struct UGPAsyncTraceSystem;

// Object: ScriptStruct AsyncTraceSystem.GPEndAyncTickFunction
// Size: 0x70 (Inherited: 0x60)
struct FGPEndAyncTickFunction : FTickFunction
{
	struct UGPAsyncTraceSystem* AsyncTraceSubSystem; // 0x60(0x8)
	uint8_t bRunInPostPhysics : 1; // 0x68(0x1), Mask(0x1)
	uint8_t BitPad_0x68_1 : 7; // 0x68(0x1)
	uint8_t Pad_0x69[0x7]; // 0x69(0x7)
};

// Object: ScriptStruct AsyncTraceSystem.GPStartAyncTickFunction
// Size: 0x68 (Inherited: 0x60)
struct FGPStartAyncTickFunction : FTickFunction
{
	struct UGPAsyncTraceSystem* AsyncTraceSubSystem; // 0x60(0x8)
};

// Object: ScriptStruct AsyncTraceSystem.GPAysncTraceDataBase
// Size: 0x10 (Inherited: 0x0)
struct FGPAysncTraceDataBase
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct AsyncTraceSystem.GPAysncPredictProjectileData
// Size: 0x158 (Inherited: 0x10)
struct FGPAysncPredictProjectileData : FGPAysncTraceDataBase
{
	uint8_t Pad_0x10[0x148]; // 0x10(0x148)
};

// Object: ScriptStruct AsyncTraceSystem.GPAysncPredictProjectilePathPointData
// Size: 0x1C (Inherited: 0x0)
struct FGPAysncPredictProjectilePathPointData
{
	struct FVector Location; // 0x0(0xC)
	struct FVector Velocity; // 0xC(0xC)
	float Time; // 0x18(0x4)
};

// Object: ScriptStruct AsyncTraceSystem.GPAysncPredictProjectilePathResult
// Size: 0xB8 (Inherited: 0x0)
struct FGPAysncPredictProjectilePathResult
{
	struct TArray<struct FGPAysncPredictProjectilePathPointData> PathData; // 0x0(0x10)
	struct FGPAysncPredictProjectilePathPointData LastTraceDestination; // 0x10(0x1C)
	struct FHitResult HitResult; // 0x2C(0x88)
	uint8_t bBlockingHit : 1; // 0xB4(0x1), Mask(0x1)
	uint8_t BitPad_0xB4_1 : 7; // 0xB4(0x1)
	EPhysicalSurface HitSurfaceType; // 0xB5(0x1)
	uint8_t Pad_0xB6[0x2]; // 0xB6(0x2)
};

// Object: ScriptStruct AsyncTraceSystem.GPAyncPredictProjectilePathParams
// Size: 0x80 (Inherited: 0x0)
struct FGPAyncPredictProjectilePathParams
{
	struct FVector StartLocation; // 0x0(0xC)
	struct FRotator StartRotation; // 0xC(0xC)
	struct FVector LaunchVelocity; // 0x18(0xC)
	uint8_t bTraceWithCollision : 1; // 0x24(0x1), Mask(0x1)
	uint8_t BitPad_0x24_1 : 7; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
	float ProjectileRadius; // 0x28(0x4)
	float ProjectileHalfHeight; // 0x2C(0x4)
	float MaxSimTime; // 0x30(0x4)
	uint8_t bTraceWithChannel : 1; // 0x34(0x1), Mask(0x1)
	uint8_t BitPad_0x34_1 : 7; // 0x34(0x1)
	ECollisionChannel TraceChannel; // 0x35(0x1)
	uint8_t Pad_0x36[0x2]; // 0x36(0x2)
	struct TArray<ECollisionChannel> ObjectTypes; // 0x38(0x10)
	struct TArray<struct AActor*> ActorsToIgnore; // 0x48(0x10)
	float SimFrequency; // 0x58(0x4)
	float OverrideGravityZ; // 0x5C(0x4)
	float ZeroGravityDistance; // 0x60(0x4)
	uint8_t bTraceComplex : 1; // 0x64(0x1), Mask(0x1)
	uint8_t BitPad_0x64_1 : 7; // 0x64(0x1)
	uint8_t Pad_0x65[0x3]; // 0x65(0x3)
	int32_t TraceMaskFilter; // 0x68(0x4)
	float AirDragFactor; // 0x6C(0x4)
	struct TArray<int32_t> TargetOverlapSurfaceType; // 0x70(0x10)
};

// Object: Class AsyncTraceSystem.GPAsyncTraceSystem
// Size: 0x260 (Inherited: 0x30)
struct UGPAsyncTraceSystem : UWorldSubsystem
{
	uint8_t Pad_0x30[0x230]; // 0x30(0x230)


	// Object: Function AsyncTraceSystem.GPAsyncTraceSystem.WaitForAsyncTraceTasksInPostPhysics
	// Flags: [Final|Native|Protected]
	// Offset: 0x7b0627c
	// Params: [ Num(0) Size(0x0) ]
	void WaitForAsyncTraceTasksInPostPhysics();

	// Object: Function AsyncTraceSystem.GPAsyncTraceSystem.WaitForAsyncTraceTasksInLastDemotable
	// Flags: [Final|Native|Protected]
	// Offset: 0x7b06268
	// Params: [ Num(0) Size(0x0) ]
	void WaitForAsyncTraceTasksInLastDemotable();

	// Object: Function AsyncTraceSystem.GPAsyncTraceSystem.UnRegisterTickFunction
	// Flags: [Final|Native|Protected]
	// Offset: 0x7b06254
	// Params: [ Num(0) Size(0x0) ]
	void UnRegisterTickFunction();

	// Object: Function AsyncTraceSystem.GPAsyncTraceSystem.StartAyncWork
	// Flags: [Final|Native|Protected]
	// Offset: 0x7b06240
	// Params: [ Num(0) Size(0x0) ]
	void StartAyncWork();

	// Object: Function AsyncTraceSystem.GPAsyncTraceSystem.ShouldProjectileUseAsyncTrace
	// Flags: [Final|Native|Public]
	// Offset: 0x7b06208
	// Params: [ Num(1) Size(0x1) ]
	uint8_t ShouldProjectileUseAsyncTrace();

	// Object: Function AsyncTraceSystem.GPAsyncTraceSystem.SetTickFunctionEanble
	// Flags: [Final|Native|Protected]
	// Offset: 0x7b0615c
	// Params: [ Num(1) Size(0x1) ]
	void SetTickFunctionEanble(uint8_t bEnable);

	// Object: Function AsyncTraceSystem.GPAsyncTraceSystem.RunAllTaskInGT
	// Flags: [Final|Native|Protected]
	// Offset: 0x7b06148
	// Params: [ Num(0) Size(0x0) ]
	void RunAllTaskInGT();

	// Object: Function AsyncTraceSystem.GPAsyncTraceSystem.RegisterTickFunction
	// Flags: [Final|Native|Protected]
	// Offset: 0x7b06134
	// Params: [ Num(0) Size(0x0) ]
	void RegisterTickFunction();

	// Object: Function AsyncTraceSystem.GPAsyncTraceSystem.EndAyncWorkInPostPhysics
	// Flags: [Final|Native|Protected]
	// Offset: 0x7b06120
	// Params: [ Num(0) Size(0x0) ]
	void EndAyncWorkInPostPhysics();

	// Object: Function AsyncTraceSystem.GPAsyncTraceSystem.EndAyncWorkInLastDemotable
	// Flags: [Final|Native|Protected]
	// Offset: 0x7b0610c
	// Params: [ Num(0) Size(0x0) ]
	void EndAyncWorkInLastDemotable();

	// Object: Function AsyncTraceSystem.GPAsyncTraceSystem.CancelGPAyncTrace
	// Flags: [Final|Native|Public]
	// Offset: 0x7b06068
	// Params: [ Num(1) Size(0x4) ]
	void CancelGPAyncTrace(uint32_t Handle);

	// Object: Function AsyncTraceSystem.GPAsyncTraceSystem.CancelAyncPredictProjectilePath
	// Flags: [Final|Native|Public]
	// Offset: 0x7b05fc4
	// Params: [ Num(1) Size(0x4) ]
	void CancelAyncPredictProjectilePath(uint32_t Handle);
	DEFINE_UE_CLASS_HELPERS(UGPAsyncTraceSystem, "GPAsyncTraceSystem")

};

} // namespace SDK
