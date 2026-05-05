#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: DestructionClusterRuntime
// Enums: 0
// Structs: 1
// Classes: 10

struct FDesClusterInstancedWorldSystemTickFunction;
struct ADesClusterInstancedRenderActor;
struct UDesClusterInstancedStaticMeshComponent;
struct UDesClusterInstancedWorldSubsystem;
struct UDesClusterPhysicsSimComponent;
struct ADesClusterPhysicsSimulationActor;
struct ADesClusterPoolActor;
struct ADesClusterTestActor;
struct UDesHierarchicalInstancedStaticMeshComponent;
struct IDestructionClientElementInterface;
struct UDestructionClusterSettings;

// Object: ScriptStruct DestructionClusterRuntime.DesClusterInstancedWorldSystemTickFunction
// Size: 0x70 (Inherited: 0x60)
struct FDesClusterInstancedWorldSystemTickFunction : FTickFunction
{
	uint8_t Pad_0x60[0x10]; // 0x60(0x10)
};

// Object: Class DestructionClusterRuntime.DesClusterInstancedRenderActor
// Size: 0x378 (Inherited: 0x370)
struct ADesClusterInstancedRenderActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(ADesClusterInstancedRenderActor, "DesClusterInstancedRenderActor")

	struct UDesClusterInstancedStaticMeshComponent* ClusterInstacnedComppnent; // 0x370(0x8)
};

// Object: Class DestructionClusterRuntime.DesClusterInstancedStaticMeshComponent
// Size: 0xA40 (Inherited: 0xA30)
struct UDesClusterInstancedStaticMeshComponent : UInstancedStaticMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UDesClusterInstancedStaticMeshComponent, "DesClusterInstancedStaticMeshComponent")

	uint8_t Pad_0xA30[0x10]; // 0xA30(0x10)

	// Object: Function DestructionClusterRuntime.DesClusterInstancedStaticMeshComponent.SetInstancePartTransformArray
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7b4c768
	// Params: [ Num(3) Size(0x19) ]
	void SetInstancePartTransformArray(int32_t instanceid, const struct TArray<struct FMatrix>& PartTransforms, uint8_t bStatic);

	// Object: Function DestructionClusterRuntime.DesClusterInstancedStaticMeshComponent.SetInstanceBrokenState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7b4c644
	// Params: [ Num(3) Size(0x11) ]
	void SetInstanceBrokenState(int32_t instanceid, int64_t BrokenState, uint8_t bMarkDirty);
};

// Object: Class DestructionClusterRuntime.DesClusterInstancedWorldSubsystem
// Size: 0x298 (Inherited: 0x30)
struct UDesClusterInstancedWorldSubsystem : UWorldSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UDesClusterInstancedWorldSubsystem, "DesClusterInstancedWorldSubsystem")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	struct ADesClusterPoolActor* DesStaticPool; // 0x40(0x8)
	uint8_t Pad_0x48[0xA0]; // 0x48(0xA0)
	struct TMap<struct TSoftObjectPtr<UStaticMesh>, struct ADesClusterInstancedRenderActor*> DynamicClusterActors; // 0xE8(0x50)
	uint8_t Pad_0x138[0x160]; // 0x138(0x160)
};

// Object: Class DestructionClusterRuntime.DesClusterPhysicsSimComponent
// Size: 0x8C0 (Inherited: 0x8B0)
struct UDesClusterPhysicsSimComponent : UDestructibleStaticMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UDesClusterPhysicsSimComponent, "DesClusterPhysicsSimComponent")

	struct TArray<int32_t> BodyInstancesIndex; // 0x8A8(0x10)
	int32_t ActiveBodyInsNum; // 0x8B8(0x4)
};

// Object: Class DestructionClusterRuntime.DesClusterPhysicsSimulationActor
// Size: 0x388 (Inherited: 0x370)
struct ADesClusterPhysicsSimulationActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(ADesClusterPhysicsSimulationActor, "DesClusterPhysicsSimulationActor")

	uint8_t Pad_0x370[0x10]; // 0x370(0x10)
	struct UDesClusterPhysicsSimComponent* DesClusterPhysicsSimComponent; // 0x380(0x8)
};

// Object: Class DestructionClusterRuntime.DesClusterPoolActor
// Size: 0x370 (Inherited: 0x370)
struct ADesClusterPoolActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(ADesClusterPoolActor, "DesClusterPoolActor")
};

// Object: Class DestructionClusterRuntime.DesClusterTestActor
// Size: 0x420 (Inherited: 0x370)
struct ADesClusterTestActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(ADesClusterTestActor, "DesClusterTestActor")

	struct UDesClusterInstancedStaticMeshComponent* ClusterInstacnedComppnent; // 0x370(0x8)
	struct TMap<int32_t, struct ADesClusterPhysicsSimulationActor*> ClusterSimActors; // 0x378(0x50)
	uint8_t Pad_0x3C8[0x58]; // 0x3C8(0x58)

	// Object: Function DestructionClusterRuntime.DesClusterTestActor.EnableSimulation
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x7b4cb10
	// Params: [ Num(0) Size(0x0) ]
	void EnableSimulation();
};

// Object: Class DestructionClusterRuntime.DesHierarchicalInstancedStaticMeshComponent
// Size: 0xB40 (Inherited: 0xB30)
struct UDesHierarchicalInstancedStaticMeshComponent : UHierarchicalInstancedStaticMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UDesHierarchicalInstancedStaticMeshComponent, "DesHierarchicalInstancedStaticMeshComponent")

	uint8_t Pad_0xB30[0x10]; // 0xB30(0x10)

	// Object: Function DestructionClusterRuntime.DesHierarchicalInstancedStaticMeshComponent.SetInstanceBrokenState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7b4cb2c
	// Params: [ Num(2) Size(0x10) ]
	void SetInstanceBrokenState(int32_t instanceid, int64_t BrokenState);
};

// Object: Class DestructionClusterRuntime.DestructionClientElementInterface
// Size: 0x28 (Inherited: 0x28)
struct IDestructionClientElementInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IDestructionClientElementInterface, "DestructionClientElementInterface")
};

// Object: Class DestructionClusterRuntime.DestructionClusterSettings
// Size: 0x40 (Inherited: 0x38)
struct UDestructionClusterSettings : UDeveloperSettings
{
	DEFINE_UE_CLASS_HELPERS(UDestructionClusterSettings, "DestructionClusterSettings")

	struct ADesClusterPhysicsSimulationActor* ClusterSimActorTemplate; // 0x38(0x8)
};

} // namespace SDK
