#pragma once

#include "../CoreUObject_classes.hpp"
#include "DeveloperSettings.hpp"
#include "Engine.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: MFFlowField
// Enums: 3
// Structs: 9
// Classes: 6

struct AActor;
struct FMFFlowFieldAgentIndex;
struct FMFFlowFieldAgentSelector;
struct FMFFlowFieldIslandLayers;
struct FMFFlowFieldIslandsForAgent;
struct FMFFlowFieldRuntimeVoxel;
struct FMFFlowFieldIslandLayer;
struct FMFFlowFieldIsland;
struct FMFFlowFieldPathNode;
struct FMFFlowFieldAgentConfig;
struct UMFFlowFieldAgentComponent;
struct UMFFlowFieldSubsystem;
struct AMFFlowFieldTestActor;
struct UMFFlowFieldTestHUD;
struct UMFFlowFieldSettings;
struct AMFFlowFieldVolume;

// Object: Enum MFFlowField.EMFFlowFieldFindPathResult
enum class EMFFlowFieldFindPathResult : uint8_t
{
	Success = 0,
	InvalidAgent = 1,
	InvalidWorld = 2,
	StartNotInFlowField = 3,
	EndNotInFlowField = 4,
	StartEndNotInSameFlowField = 5,
	StartNotInIsland = 6,
	EndNotInIsland = 7,
	StartCloseToEnd = 8,
	NotFoundPath = 9,
	EMFFlowFieldFindPathResult_MAX = 10
};

// Object: Enum MFFlowField.EMFFlowFieldEdgeType
enum class EMFFlowFieldEdgeType : uint8_t
{
	None = 0,
	Walk = 1,
	Fall = 2,
	Climb = 3,
	Walk_Diagonal = 4,
	EMFFlowFieldEdgeType_MAX = 5
};

// Object: Enum MFFlowField.EMFFlowFieldVoxelType
enum class EMFFlowFieldVoxelType : uint8_t
{
	None = 0,
	Obstacle = 1,
	Ground = 2,
	Wall = 3,
	WallTop = 4,
	Cliff = 5,
	Walkable = 6,
	Max = 64
};

// Object: ScriptStruct MFFlowField.MFFlowFieldAgentIndex
// Size: 0x4 (Inherited: 0x0)
struct FMFFlowFieldAgentIndex
{
	int32_t AgentIndex; // 0x0(0x4)
};

// Object: ScriptStruct MFFlowField.MFFlowFieldAgentSelector
// Size: 0x10 (Inherited: 0x0)
struct FMFFlowFieldAgentSelector
{
	struct TArray<bool> SupportedAgentIndexes; // 0x0(0x10)
};

// Object: ScriptStruct MFFlowField.MFFlowFieldIslandLayers
// Size: 0x18 (Inherited: 0x0)
struct FMFFlowFieldIslandLayers
{
	struct FName AgentName; // 0x0(0x8)
	struct TArray<struct FMFFlowFieldIslandLayer> Layers; // 0x8(0x10)
};

// Object: ScriptStruct MFFlowField.MFFlowFieldIslandsForAgent
// Size: 0x170 (Inherited: 0x0)
struct FMFFlowFieldIslandsForAgent
{
	int32_t AgentIndex; // 0x0(0x4)
	struct FName AgentName; // 0x4(0x8)
	int32_t MaxCachedGraphCount; // 0xC(0x4)
	int32_t IslandCount; // 0x10(0x4)
	int32_t VoxelCount; // 0x14(0x4)
	int32_t MemoryUsage; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct TArray<int32_t> Voxel2GroundIndex; // 0x20(0x10)
	struct FMFFlowFieldIslandLayers IslandLayers; // 0x30(0x18)
	uint8_t Pad_0x48[0x128]; // 0x48(0x128)
};

// Object: ScriptStruct MFFlowField.MFFlowFieldRuntimeVoxel
// Size: 0xA8 (Inherited: 0x0)
struct FMFFlowFieldRuntimeVoxel
{
	int32_t IslandIndex; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TMap<int32_t, EMFFlowFieldEdgeType> ToEdges; // 0x8(0x50)
	struct TMap<int32_t, float> FromEdges; // 0x58(0x50)
};

// Object: ScriptStruct MFFlowField.MFFlowFieldIslandLayer
// Size: 0x60 (Inherited: 0x0)
struct FMFFlowFieldIslandLayer
{
	struct TArray<struct FMFFlowFieldIsland> Islands; // 0x0(0x10)
	struct TMap<int32_t, struct FMFFlowFieldRuntimeVoxel> Voxels; // 0x10(0x50)
};

// Object: ScriptStruct MFFlowField.MFFlowFieldIsland
// Size: 0x18 (Inherited: 0x0)
struct FMFFlowFieldIsland
{
	int32_t ParentIndex; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<int32_t> ChildIndexes; // 0x8(0x10)
};

// Object: ScriptStruct MFFlowField.MFFlowFieldPathNode
// Size: 0x10 (Inherited: 0x0)
struct FMFFlowFieldPathNode
{
	struct FVector NodeLoc; // 0x0(0xC)
	EMFFlowFieldEdgeType EdgeType; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct MFFlowField.MFFlowFieldAgentConfig
// Size: 0x20 (Inherited: 0x0)
struct FMFFlowFieldAgentConfig
{
	struct FName Name; // 0x0(0x8)
	float Height; // 0x8(0x4)
	float Radius; // 0xC(0x4)
	float MaxSlope; // 0x10(0x4)
	uint8_t bCanWalk : 1; // 0x14(0x1), Mask(0x1)
	uint8_t bCanClimb : 1; // 0x14(0x1), Mask(0x2)
	uint8_t BitPad_0x14_2 : 6; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	float Randomness; // 0x18(0x4)
	int32_t MaxCachedGraphCount; // 0x1C(0x4)
};

// Object: Class MFFlowField.MFFlowFieldAgentComponent
// Size: 0x108 (Inherited: 0xE0)
struct UMFFlowFieldAgentComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFFlowFieldAgentComponent, "MFFlowFieldAgentComponent")

	struct FMFFlowFieldAgentIndex AgentIndex; // 0xE0(0x4)
	float WalkSpeed; // 0xE4(0x4)
	float ToleranceToGoal; // 0xE8(0x4)
	uint8_t Pad_0xEC[0x1C]; // 0xEC(0x1C)
};

// Object: Class MFFlowField.MFFlowFieldSubsystem
// Size: 0x100 (Inherited: 0x30)
struct UMFFlowFieldSubsystem : UWorldSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UMFFlowFieldSubsystem, "MFFlowFieldSubsystem")

	uint8_t Pad_0x30[0xD0]; // 0x30(0xD0)

	// Object: Function MFFlowField.MFFlowFieldSubsystem.GetMFFlowFieldSystem
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3d316e0
	// Params: [ Num(2) Size(0x10) ]
	static struct UMFFlowFieldSubsystem* GetMFFlowFieldSystem(struct UObject* WorldContextObject);

	// Object: Function MFFlowField.MFFlowFieldSubsystem.FindPathForAgentIndex
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3d31388
	// Params: [ Num(5) Size(0x31) ]
	EMFFlowFieldFindPathResult FindPathForAgentIndex(int32_t AgentIndex, const struct FVector& Start, const struct FVector& End, struct TArray<struct FMFFlowFieldPathNode>& OutPath);

	// Object: Function MFFlowField.MFFlowFieldSubsystem.FindPathForAgent
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3d31534
	// Params: [ Num(5) Size(0x31) ]
	EMFFlowFieldFindPathResult FindPathForAgent(struct AActor* Actor, const struct FVector& Start, const struct FVector& End, struct TArray<struct FMFFlowFieldPathNode>& OutPath);
};

// Object: Class MFFlowField.MFFlowFieldTestActor
// Size: 0x370 (Inherited: 0x300)
struct AMFFlowFieldTestActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFFlowFieldTestActor, "MFFlowFieldTestActor")

	struct UMFFlowFieldTestHUD* DebugWidgetClass; // 0x300(0x8)
	struct TWeakObjectPtr<struct UMFFlowFieldTestHUD> DebugWidgetPtr; // 0x308(0x8)
	struct TArray<struct AActor*> TestAgentClasses; // 0x310(0x10)
	struct TSet<struct TWeakObjectPtr<struct AActor>> SpawnedAgentPtrs; // 0x320(0x50)

	// Object: Function MFFlowField.MFFlowFieldTestActor.StopBalls
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3d3186c
	// Params: [ Num(1) Size(0xC) ]
	void StopBalls(const struct FVector& Location);

	// Object: Function MFFlowField.MFFlowFieldTestActor.SpawnTestAgent
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3d31c14
	// Params: [ Num(2) Size(0x10) ]
	void SpawnTestAgent(int32_t AgentClassIndex, const struct FVector& Location);

	// Object: Function MFFlowField.MFFlowFieldTestActor.SpawnRandomTestAgent
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3d31a78
	// Params: [ Num(1) Size(0xC) ]
	void SpawnRandomTestAgent(const struct FVector& Location);

	// Object: Function MFFlowField.MFFlowFieldTestActor.ServerStopBalls
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|HasDefaults]
	// Offset: 0x3d317c0
	// Params: [ Num(1) Size(0xC) ]
	void ServerStopBalls(struct FVector Location);

	// Object: Function MFFlowField.MFFlowFieldTestActor.ServerSpawnTestAgent
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|HasDefaults]
	// Offset: 0x3d31b28
	// Params: [ Num(2) Size(0x10) ]
	void ServerSpawnTestAgent(int32_t AgentClassIndex, struct FVector Location);

	// Object: Function MFFlowField.MFFlowFieldTestActor.ServerRemoveAllBalls
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x3d31790
	// Params: [ Num(0) Size(0x0) ]
	void ServerRemoveAllBalls();

	// Object: Function MFFlowField.MFFlowFieldTestActor.ServerMoveBalls
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|HasDefaults]
	// Offset: 0x3d3191c
	// Params: [ Num(1) Size(0xC) ]
	void ServerMoveBalls(struct FVector Location);

	// Object: Function MFFlowField.MFFlowFieldTestActor.RemoveAllBalls
	// Flags: [Final|Native|Public]
	// Offset: 0x3d317ac
	// Params: [ Num(0) Size(0x0) ]
	void RemoveAllBalls();

	// Object: Function MFFlowField.MFFlowFieldTestActor.MoveBalls
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3d319c8
	// Params: [ Num(1) Size(0xC) ]
	void MoveBalls(const struct FVector& Location);
};

// Object: Class MFFlowField.MFFlowFieldTestHUD
// Size: 0x298 (Inherited: 0x290)
struct UMFFlowFieldTestHUD : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UMFFlowFieldTestHUD, "MFFlowFieldTestHUD")

	struct TWeakObjectPtr<struct AMFFlowFieldTestActor> TestActorPtr; // 0x290(0x8)

	// Object: Function MFFlowField.MFFlowFieldTestHUD.GetTestActor
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x3d31d0c
	// Params: [ Num(1) Size(0x8) ]
	struct AMFFlowFieldTestActor* GetTestActor();
};

// Object: Class MFFlowField.MFFlowFieldSettings
// Size: 0x48 (Inherited: 0x38)
struct UMFFlowFieldSettings : UDeveloperSettings
{
	DEFINE_UE_CLASS_HELPERS(UMFFlowFieldSettings, "MFFlowFieldSettings")

	struct TArray<struct FMFFlowFieldAgentConfig> FFAgents; // 0x38(0x10)
};

// Object: Class MFFlowField.MFFlowFieldVolume
// Size: 0x4E8 (Inherited: 0x338)
struct AMFFlowFieldVolume : AVolume
{
	DEFINE_UE_CLASS_HELPERS(AMFFlowFieldVolume, "MFFlowFieldVolume")

	struct FMFFlowFieldAgentSelector SupportedAgents; // 0x338(0x10)
	float VoxelSize; // 0x348(0x4)
	float VoxelHalfSize; // 0x34C(0x4)
	struct FIntVector VoxelCntPerBlock; // 0x350(0xC)
	struct FIntVector BlockCntPerAxis; // 0x35C(0xC)
	struct FIntVector VoxelCntPerAxis; // 0x368(0xC)
	struct FVector FFOrigin; // 0x374(0xC)
	struct FVector FFExtent; // 0x380(0xC)
	struct FVector FFLeftBottom; // 0x38C(0xC)
	struct FVector SizePerBlock; // 0x398(0xC)
	uint8_t Pad_0x3A4[0x4]; // 0x3A4(0x4)
	struct TArray<struct TSoftObjectPtr<AActor>> StartActors; // 0x3A8(0x10)
	struct TArray<struct FMFFlowFieldIslandsForAgent> IslandsForAgents; // 0x3B8(0x10)
	uint8_t Pad_0x3C8[0x8]; // 0x3C8(0x8)
	struct FMFFlowFieldAgentIndex TestAgentIndex; // 0x3D0(0x4)
	uint8_t Pad_0x3D4[0x4]; // 0x3D4(0x4)
	struct TSoftObjectPtr<AActor> PathStartActor; // 0x3D8(0x28)
	struct TSoftObjectPtr<AActor> PathEndActor; // 0x400(0x28)
	struct FMFFlowFieldAgentSelector DrawAgents; // 0x428(0x10)
	struct TMap<EMFFlowFieldVoxelType, struct FColor> VoxelTypeColors; // 0x438(0x50)
	bool bDrawOnlyVoxelsWithEdges; // 0x488(0x1)
	uint8_t Pad_0x489[0x7]; // 0x489(0x7)
	struct TMap<EMFFlowFieldEdgeType, struct FColor> EdgeTypeColors; // 0x490(0x50)
	bool bDrawEdgesWithDir; // 0x4E0(0x1)
	bool bDrawEdgesInViewPortOnly; // 0x4E1(0x1)
	uint8_t Pad_0x4E2[0x2]; // 0x4E2(0x2)
	int32_t LayerIndexToDraw; // 0x4E4(0x4)
};

} // namespace SDK
