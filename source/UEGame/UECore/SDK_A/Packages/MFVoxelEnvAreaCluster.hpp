#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: MFVoxelEnvAreaCluster
// Enums: 0
// Structs: 5
// Classes: 2

struct AActor;
struct FMFVoxelEnvTrafficabilityClusterSideInfo;
struct FMFVoxelEnvTrafficabilityClusterInfo;
struct FMFVoxelEnvAreaClusterRelevancyInfo1st;
struct FMFVoxelEnvAreaClusterRelevancyInfo;
struct FVoxelEnvClusterOctreeElement;
struct AMFVoxelEnvAreaClusterActor;
struct IMFVoxelEnvVolumeInterface;

// Object: ScriptStruct MFVoxelEnvAreaCluster.MFVoxelEnvTrafficabilityClusterSideInfo
// Size: 0x10 (Inherited: 0x0)
struct FMFVoxelEnvTrafficabilityClusterSideInfo
{
	struct TArray<int32_t> NodeIndexList; // 0x0(0x10)
};

// Object: ScriptStruct MFVoxelEnvAreaCluster.MFVoxelEnvTrafficabilityClusterInfo
// Size: 0x1E8 (Inherited: 0x0)
struct FMFVoxelEnvTrafficabilityClusterInfo
{
	uint8_t Pad_0x0[0x50]; // 0x0(0x50)
	struct FVector PCADir; // 0x50(0xC)
	int32_t ClusterTrafficabilityArray[0x4]; // 0x5C(0x10)
	int32_t ID; // 0x6C(0x4)
	int32_t ParentClusterID; // 0x70(0x4)
	uint8_t SpecialType; // 0x74(0x1)
	uint8_t Pad_0x75[0x3]; // 0x75(0x3)
	struct FMFVoxelEnvTrafficabilityClusterSideInfo ClusterSideTrafficabilityArray[0x4]; // 0x78(0x40)
	int32_t CenterIndex; // 0xB8(0x4)
	float Size; // 0xBC(0x4)
	float AverageTrafficability; // 0xC0(0x4)
	uint8_t Pad_0xC4[0x4]; // 0xC4(0x4)
	struct TMap<int32_t, float> AdjacentClusterInfo; // 0xC8(0x50)
	struct TMap<int32_t, float> VisibleAdjacentClusterInfo; // 0x118(0x50)
	int32_t FarthestNodeIndex; // 0x168(0x4)
	uint8_t Pad_0x16C[0x4]; // 0x16C(0x4)
	struct TArray<struct FBox> BoxList; // 0x170(0x10)
	struct FVector CenterLoc; // 0x180(0xC)
	uint8_t Pad_0x18C[0x4]; // 0x18C(0x4)
	struct TMap<int32_t, float> NearbyClusters; // 0x190(0x50)
	uint8_t Pad_0x1E0[0x8]; // 0x1E0(0x8)
};

// Object: ScriptStruct MFVoxelEnvAreaCluster.MFVoxelEnvAreaClusterRelevancyInfo1st
// Size: 0x50 (Inherited: 0x0)
struct FMFVoxelEnvAreaClusterRelevancyInfo1st
{
	struct TSet<int32_t> VisibleClusterIDs; // 0x0(0x50)
};

// Object: ScriptStruct MFVoxelEnvAreaCluster.MFVoxelEnvAreaClusterRelevancyInfo
// Size: 0x20 (Inherited: 0x0)
struct FMFVoxelEnvAreaClusterRelevancyInfo
{
	struct TArray<float> PathCostList; // 0x0(0x10)
	struct TArray<float> VisibilityList; // 0x10(0x10)
};

// Object: ScriptStruct MFVoxelEnvAreaCluster.VoxelEnvClusterOctreeElement
// Size: 0x20 (Inherited: 0x0)
struct FVoxelEnvClusterOctreeElement
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: Class MFVoxelEnvAreaCluster.MFVoxelEnvAreaClusterActor
// Size: 0x450 (Inherited: 0x300)
struct AMFVoxelEnvAreaClusterActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFVoxelEnvAreaClusterActor, "MFVoxelEnvAreaClusterActor")

	struct TArray<struct FMFVoxelEnvTrafficabilityClusterInfo> AreaClusterInfoList; // 0x300(0x10)
	struct TArray<struct FMFVoxelEnvTrafficabilityClusterInfo> AreaClusterInfoList1st; // 0x310(0x10)
	struct TArray<struct FMFVoxelEnvAreaClusterRelevancyInfo> AreaClusterRelevancyMatrix; // 0x320(0x10)
	struct TArray<struct FMFVoxelEnvAreaClusterRelevancyInfo1st> AreaClusterRelevancyMatrix1st; // 0x330(0x10)
	struct FVector AreaClusterRelevancyVolumeOrigin; // 0x340(0xC)
	struct FVector AreaClusterRelevancyVolumeExtent; // 0x34C(0xC)
	float AreaClusterRelevancyVoxelSize; // 0x358(0x4)
	uint8_t CollisionChannel; // 0x35C(0x1)
	uint8_t Pad_0x35D[0x3]; // 0x35D(0x3)
	int32_t DebugShowVisible1stClustersID; // 0x360(0x4)
	uint8_t Pad_0x364[0x4]; // 0x364(0x4)
	struct TSet<int32_t> OnlyDrawAreaClusterSet; // 0x368(0x50)
	bool bDraw1stAreaCluster; // 0x3B8(0x1)
	uint8_t Pad_0x3B9[0x7]; // 0x3B9(0x7)
	struct FString DebugWriteActorsInfoLevelStr; // 0x3C0(0x10)
	struct TArray<struct TSoftObjectPtr<AActor>> DebugActors; // 0x3D0(0x10)
	struct TMap<struct TSoftObjectPtr<AActor>, struct FBox> OverrideActorBoxes; // 0x3E0(0x50)
	uint8_t Pad_0x430[0x20]; // 0x430(0x20)
};

// Object: Class MFVoxelEnvAreaCluster.MFVoxelEnvVolumeInterface
// Size: 0x28 (Inherited: 0x28)
struct IMFVoxelEnvVolumeInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IMFVoxelEnvVolumeInterface, "MFVoxelEnvVolumeInterface")
};

} // namespace SDK
