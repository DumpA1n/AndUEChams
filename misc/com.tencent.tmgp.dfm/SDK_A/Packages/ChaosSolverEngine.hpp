#pragma once

#include "../CoreUObject_classes.hpp"
#include "ChaosSolvers.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: ChaosSolverEngine
// Enums: 1
// Structs: 5
// Classes: 8

struct FHitResult;
struct UBillboardComponent;
struct UPrimitiveComponent;
struct FChaosPhysicsCollisionInfo;
struct FChaosBreakEvent;
struct FChaosHandlerSet;
struct FBreakEventCallbackWrapper;
struct FChaosDebugSubstepControl;
struct UChaosDebugDrawComponent;
struct UChaosEventListenerComponent;
struct UChaosGameplayEventDispatcher;
struct IChaosNotifyHandlerInterface;
struct UChaosSolverEngineBlueprintLibrary;
struct UChaosSolver;
struct AChaosSolverActor;
struct UChaosSolverSettings;

// Object: Enum ChaosSolverEngine.EClusterConnectionTypeEnum
enum class EClusterConnectionTypeEnum : uint8_t
{
	Chaos_PointImplicit = 0,
	Chaos_DelaunayTriangulation = 1,
	Chaos_MinimalSpanningSubsetDelaunayTriangulation = 2,
	Chaos_PointImplicitAugmentedWithMinimalDelaunay = 3,
	Chaos_None = 4,
	Chaos_EClsuterCreationParameters_Max = 5,
	Chaos_MAX = 6
};

// Object: ScriptStruct ChaosSolverEngine.ChaosPhysicsCollisionInfo
// Size: 0x70 (Inherited: 0x0)
struct FChaosPhysicsCollisionInfo
{
	struct UPrimitiveComponent* Component; // 0x0(0x8)
	struct UPrimitiveComponent* OtherComponent; // 0x8(0x8)
	struct FVector Location; // 0x10(0xC)
	struct FVector Normal; // 0x1C(0xC)
	struct FVector AccumulatedImpulse; // 0x28(0xC)
	struct FVector Velocity; // 0x34(0xC)
	struct FVector OtherVelocity; // 0x40(0xC)
	struct FVector AngularVelocity; // 0x4C(0xC)
	struct FVector OtherAngularVelocity; // 0x58(0xC)
	float Mass; // 0x64(0x4)
	float OtherMass; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
};

// Object: ScriptStruct ChaosSolverEngine.ChaosBreakEvent
// Size: 0x30 (Inherited: 0x0)
struct FChaosBreakEvent
{
	struct UPrimitiveComponent* Component; // 0x0(0x8)
	struct FVector Location; // 0x8(0xC)
	struct FVector Velocity; // 0x14(0xC)
	struct FVector AngularVelocity; // 0x20(0xC)
	float Mass; // 0x2C(0x4)
};

// Object: ScriptStruct ChaosSolverEngine.ChaosHandlerSet
// Size: 0x58 (Inherited: 0x0)
struct FChaosHandlerSet
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct TSet<struct UObject*> ChaosHandlers; // 0x8(0x50)
};

// Object: ScriptStruct ChaosSolverEngine.BreakEventCallbackWrapper
// Size: 0x40 (Inherited: 0x0)
struct FBreakEventCallbackWrapper
{
	uint8_t Pad_0x0[0x40]; // 0x0(0x40)
};

// Object: ScriptStruct ChaosSolverEngine.ChaosDebugSubstepControl
// Size: 0x3 (Inherited: 0x0)
struct FChaosDebugSubstepControl
{
	uint8_t bPause : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bSubstep : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t bStep : 1; // 0x2(0x1), Mask(0x1)
	uint8_t BitPad_0x2_1 : 7; // 0x2(0x1)
};

// Object: Class ChaosSolverEngine.ChaosDebugDrawComponent
// Size: 0x100 (Inherited: 0xF8)
struct UChaosDebugDrawComponent : UActorComponent
{
	uint8_t Pad_0xF8[0x8]; // 0xF8(0x8)
	DEFINE_UE_CLASS_HELPERS(UChaosDebugDrawComponent, "ChaosDebugDrawComponent")

};

// Object: Class ChaosSolverEngine.ChaosEventListenerComponent
// Size: 0x100 (Inherited: 0xF8)
struct UChaosEventListenerComponent : UActorComponent
{
	uint8_t Pad_0xF8[0x8]; // 0xF8(0x8)
	DEFINE_UE_CLASS_HELPERS(UChaosEventListenerComponent, "ChaosEventListenerComponent")

};

// Object: Class ChaosSolverEngine.ChaosGameplayEventDispatcher
// Size: 0x2B8 (Inherited: 0x100)
struct UChaosGameplayEventDispatcher : UChaosEventListenerComponent
{
	uint8_t Pad_0x100[0x110]; // 0x100(0x110)
	struct TMap<struct UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations; // 0x210(0x50)
	struct TMap<struct UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x260(0x50)
	uint8_t Pad_0x2B0[0x8]; // 0x2B0(0x8)
	DEFINE_UE_CLASS_HELPERS(UChaosGameplayEventDispatcher, "ChaosGameplayEventDispatcher")

};

// Object: Class ChaosSolverEngine.ChaosNotifyHandlerInterface
// Size: 0x28 (Inherited: 0x28)
struct IChaosNotifyHandlerInterface : IInterface
{	DEFINE_UE_CLASS_HELPERS(IChaosNotifyHandlerInterface, "ChaosNotifyHandlerInterface")

};

// Object: Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UChaosSolverEngineBlueprintLibrary : UBlueprintFunctionLibrary
{

	// Object: Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x178cebac
	// Params: [ Num(2) Size(0xF8) ]
	static struct FHitResult ConvertPhysicsCollisionToHitResult(const struct FChaosPhysicsCollisionInfo& PhysicsCollision);
	DEFINE_UE_CLASS_HELPERS(UChaosSolverEngineBlueprintLibrary, "ChaosSolverEngineBlueprintLibrary")

};

// Object: Class ChaosSolverEngine.ChaosSolver
// Size: 0x28 (Inherited: 0x28)
struct UChaosSolver : UObject
{	DEFINE_UE_CLASS_HELPERS(UChaosSolver, "ChaosSolver")

};

// Object: Class ChaosSolverEngine.ChaosSolverActor
// Size: 0x3F8 (Inherited: 0x370)
struct AChaosSolverActor : AActor
{
	float TimeStepMultiplier; // 0x370(0x4)
	int32_t CollisionIterations; // 0x374(0x4)
	int32_t PushOutIterations; // 0x378(0x4)
	int32_t PushOutPairIterations; // 0x37C(0x4)
	float ClusterConnectionFactor; // 0x380(0x4)
	EClusterConnectionTypeEnum ClusterUnionConnectionType; // 0x384(0x1)
	uint8_t DoGenerateCollisionData : 1; // 0x385(0x1), Mask(0x1)
	uint8_t BitPad_0x385_1 : 7; // 0x385(0x1)
	uint8_t Pad_0x386[0x2]; // 0x386(0x2)
	struct FSolverCollisionFilterSettings CollisionFilterSettings; // 0x388(0x10)
	uint8_t DoGenerateBreakingData : 1; // 0x398(0x1), Mask(0x1)
	uint8_t BitPad_0x398_1 : 7; // 0x398(0x1)
	uint8_t Pad_0x399[0x3]; // 0x399(0x3)
	struct FSolverBreakingFilterSettings BreakingFilterSettings; // 0x39C(0x10)
	uint8_t DoGenerateTrailingData : 1; // 0x3AC(0x1), Mask(0x1)
	uint8_t BitPad_0x3AC_1 : 7; // 0x3AC(0x1)
	uint8_t Pad_0x3AD[0x3]; // 0x3AD(0x3)
	struct FSolverTrailingFilterSettings TrailingFilterSettings; // 0x3B0(0x10)
	uint8_t bHasFloor : 1; // 0x3C0(0x1), Mask(0x1)
	uint8_t BitPad_0x3C0_1 : 7; // 0x3C0(0x1)
	uint8_t Pad_0x3C1[0x3]; // 0x3C1(0x3)
	float FloorHeight; // 0x3C4(0x4)
	float MassScale; // 0x3C8(0x4)
	struct FChaosDebugSubstepControl ChaosDebugSubstepControl; // 0x3CC(0x3)
	uint8_t Pad_0x3CF[0x1]; // 0x3CF(0x1)
	struct UBillboardComponent* SpriteComponent; // 0x3D0(0x8)
	uint8_t Pad_0x3D8[0x18]; // 0x3D8(0x18)
	struct UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent; // 0x3F0(0x8)


	// Object: Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x178ced1c
	// Params: [ Num(1) Size(0x1) ]
	void SetSolverActive(uint8_t bActive);

	// Object: Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178ced08
	// Params: [ Num(0) Size(0x0) ]
	void SetAsCurrentWorldSolver();
	DEFINE_UE_CLASS_HELPERS(AChaosSolverActor, "ChaosSolverActor")

};

// Object: Class ChaosSolverEngine.ChaosSolverSettings
// Size: 0x58 (Inherited: 0x38)
struct UChaosSolverSettings : UDeveloperSettings
{
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	struct FSoftClassPath DefaultChaosSolverActorClass; // 0x40(0x18)
	DEFINE_UE_CLASS_HELPERS(UChaosSolverSettings, "ChaosSolverSettings")

};

} // namespace SDK
