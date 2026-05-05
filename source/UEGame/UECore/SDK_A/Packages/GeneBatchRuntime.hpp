#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: GeneBatchRuntime
// Enums: 0
// Structs: 7
// Classes: 9

struct FMeshUVChannelInfo;
struct UDataTable;
struct UGeneBatchSettingsObject;
struct UPrimitiveComponent;
struct UStaticMesh;
struct FGeneBatchSubVisibilityId;
struct FGeneBatchSubVisibilityIdRelevanceItem;
struct FGeneBatchSubBoundsVisibilitiesItem;
struct FGeneBatchMergeMeshTypeLOD;
struct FDrawSectionInfo;
struct FGeneBatchMeshProxyLOD;
struct FGeneBatchRuntimePOIConfiguration;
struct UAsyncStaticMeshComponentProxy;
struct UGeneBatchHLODInstancedStaticMeshComponent;
struct UGeneBatchHLODStaticMeshComponent;
struct UGeneBatchMergeMeshTypeComponent;
struct UGeneBatchMeshComponent;
struct UGeneBatchMeshProxyComponent;
struct UGeneBatchRuntimeComponent;
struct UBatchStaticMesh;
struct UGeneBatchRuntimeSubsystem;

// Object: ScriptStruct GeneBatchRuntime.GeneBatchSubVisibilityId
// Size: 0x18 (Inherited: 0x0)
struct FGeneBatchSubVisibilityId
{
	int32_t VisibilityId; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<int32_t> OriginalVisibilityIds; // 0x8(0x10)
};

// Object: ScriptStruct GeneBatchRuntime.GeneBatchSubVisibilityIdRelevanceItem
// Size: 0xC (Inherited: 0x0)
struct FGeneBatchSubVisibilityIdRelevanceItem
{
	int32_t LodIndex; // 0x0(0x4)
	int32_t SectionIndex; // 0x4(0x4)
	int32_t SubVisibilityIdIndex; // 0x8(0x4)
};

// Object: ScriptStruct GeneBatchRuntime.GeneBatchSubBoundsVisibilitiesItem
// Size: 0x18 (Inherited: 0x0)
struct FGeneBatchSubBoundsVisibilitiesItem
{
	int32_t LodIndex; // 0x0(0x4)
	int32_t SectionIndex; // 0x4(0x4)
	struct TArray<int32_t> SubBoundsRelevance; // 0x8(0x10)
};

// Object: ScriptStruct GeneBatchRuntime.GeneBatchMergeMeshTypeLOD
// Size: 0x18 (Inherited: 0x0)
struct FGeneBatchMergeMeshTypeLOD
{
	int32_t TargetLODIndex; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<int32_t> Sections; // 0x8(0x10)
};

// Object: ScriptStruct GeneBatchRuntime.DrawSectionInfo
// Size: 0x10 (Inherited: 0x0)
struct FDrawSectionInfo
{
	struct UStaticMesh* StaticMesh; // 0x0(0x8)
	uint32_t LodIndex; // 0x8(0x4)
	uint32_t DrawSectionIndex; // 0xC(0x4)
};

// Object: ScriptStruct GeneBatchRuntime.GeneBatchMeshProxyLOD
// Size: 0x10 (Inherited: 0x0)
struct FGeneBatchMeshProxyLOD
{
	struct TArray<uint32_t> Sections; // 0x0(0x10)
};

// Object: ScriptStruct GeneBatchRuntime.GeneBatchRuntimePOIConfiguration
// Size: 0x80 (Inherited: 0x0)
struct FGeneBatchRuntimePOIConfiguration
{
	struct UGeneBatchRuntimeComponent* RuntimeComponent; // 0x0(0x8)
	struct UGeneBatchSettingsObject* SettingsObject; // 0x8(0x8)
	uint8_t Pad_0x10[0x8]; // 0x10(0x8)
	struct UDataTable* GeneBatchMeshComponentDataTablePtr; // 0x18(0x8)
	uint8_t Pad_0x20[0x10]; // 0x20(0x10)
	struct UDataTable* GeneBatchTextureAtlasDataTablePtr; // 0x30(0x8)
	uint8_t Pad_0x38[0x10]; // 0x38(0x10)
	struct UDataTable* GeneBatchStaticMeshProxyInputDataTablePtr; // 0x48(0x8)
	uint8_t Pad_0x50[0x10]; // 0x50(0x10)
	struct UDataTable* GeneBatchStaticMeshDataTablePtr; // 0x60(0x8)
	uint8_t Pad_0x68[0x10]; // 0x68(0x10)
	struct UDataTable* GeneBatchPrimitiveHLODParentDataTablePtr; // 0x78(0x8)
};

// Object: Class GeneBatchRuntime.AsyncStaticMeshComponentProxy
// Size: 0x860 (Inherited: 0x860)
struct UAsyncStaticMeshComponentProxy : UAsyncStaticMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UAsyncStaticMeshComponentProxy, "AsyncStaticMeshComponentProxy")
};

// Object: Class GeneBatchRuntime.GeneBatchHLODInstancedStaticMeshComponent
// Size: 0xA30 (Inherited: 0xA30)
struct UGeneBatchHLODInstancedStaticMeshComponent : UInstancedStaticMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UGeneBatchHLODInstancedStaticMeshComponent, "GeneBatchHLODInstancedStaticMeshComponent")

	uint8_t bBatched : 1; // 0xA28(0x1), Mask(0x1)
};

// Object: Class GeneBatchRuntime.GeneBatchHLODStaticMeshComponent
// Size: 0x900 (Inherited: 0x830)
struct UGeneBatchHLODStaticMeshComponent : UStaticMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UGeneBatchHLODStaticMeshComponent, "GeneBatchHLODStaticMeshComponent")

	uint8_t bBatched : 1; // 0x830(0x1), Mask(0x1)
	uint8_t BitPad_0x830_1 : 7; // 0x830(0x1)
	uint8_t Pad_0x831[0x7]; // 0x831(0x7)
	struct TArray<struct FBoxSphereBounds> SubBounds; // 0x838(0x10)
	struct TArray<float> CullingScreenSizes; // 0x848(0x10)
	struct TArray<struct FGeneBatchSubBoundsVisibilitiesItem> Visibilities; // 0x858(0x10)
	struct TArray<struct FGeneBatchSubVisibilityIdRelevanceItem> SubVisibilityIdRelevance; // 0x868(0x10)
	struct TArray<struct FMeshUVChannelInfo> OverrideUVChannelData; // 0x878(0x10)
	uint8_t bUseOriginOC : 1; // 0x888(0x1), Mask(0x1)
	uint8_t BitPad_0x888_1 : 7; // 0x888(0x1)
	uint8_t Pad_0x889[0x17]; // 0x889(0x17)
	uint8_t bUseOriginOCWithOriginComponentIndex : 1; // 0x8A0(0x1), Mask(0x1)
	uint8_t BitPad_0x8A0_1 : 7; // 0x8A0(0x1)
	uint8_t Pad_0x8A1[0x17]; // 0x8A1(0x17)
	struct TArray<struct FGeneBatchSubVisibilityId> SubVisibilityIds; // 0x8B8(0x10)
	uint8_t Pad_0x8C8[0x38]; // 0x8C8(0x38)
};

// Object: Class GeneBatchRuntime.GeneBatchMergeMeshTypeComponent
// Size: 0x950 (Inherited: 0x900)
struct UGeneBatchMergeMeshTypeComponent : UGeneBatchHLODStaticMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UGeneBatchMergeMeshTypeComponent, "GeneBatchMergeMeshTypeComponent")

	struct TArray<struct FGeneBatchMergeMeshTypeLOD> LODs; // 0x900(0x10)
	struct TArray<float> LODScreenSizes; // 0x910(0x10)
	struct FBoxSphereBounds StaticMeshBounds; // 0x920(0x1C)
	uint8_t Pad_0x93C[0x14]; // 0x93C(0x14)
};

// Object: Class GeneBatchRuntime.GeneBatchMeshComponent
// Size: 0x8A0 (Inherited: 0x830)
struct UGeneBatchMeshComponent : UStaticMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UGeneBatchMeshComponent, "GeneBatchMeshComponent")

	int32_t GeneBatchMeshComponentDataIndex; // 0x830(0x4)
	uint8_t Pad_0x834[0x4]; // 0x834(0x4)
	struct TArray<struct FBoxSphereBounds> SubBounds; // 0x838(0x10)
	struct TArray<float> CullingScreenSizes; // 0x848(0x10)
	uint8_t Pad_0x858[0x38]; // 0x858(0x38)
	float SphereRadius; // 0x890(0x4)
	uint8_t Pad_0x894[0xC]; // 0x894(0xC)
};

// Object: Class GeneBatchRuntime.GeneBatchMeshProxyComponent
// Size: 0x870 (Inherited: 0x830)
struct UGeneBatchMeshProxyComponent : UStaticMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UGeneBatchMeshProxyComponent, "GeneBatchMeshProxyComponent")

	int32_t GeneBatchMeshComponentDataIndex; // 0x830(0x4)
	uint8_t Pad_0x834[0x4]; // 0x834(0x4)
	struct TArray<struct FGeneBatchMeshProxyLOD> LODs; // 0x838(0x10)
	struct FBoxSphereBounds RenderDataBounds; // 0x848(0x1C)
	uint8_t Pad_0x864[0xC]; // 0x864(0xC)
};

// Object: Class GeneBatchRuntime.GeneBatchRuntimeComponent
// Size: 0x110 (Inherited: 0xF8)
struct UGeneBatchRuntimeComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UGeneBatchRuntimeComponent, "GeneBatchRuntimeComponent")

	struct UGeneBatchSettingsObject* SettingsObjectHigh; // 0xF8(0x8)
	struct UGeneBatchSettingsObject* SettingsObjectLow; // 0x100(0x8)
	uint8_t Pad_0x108[0x8]; // 0x108(0x8)

	// Object: Function GeneBatchRuntime.GeneBatchRuntimeComponent.SetQuality
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7800fe0
	// Params: [ Num(1) Size(0x4) ]
	void SetQuality(int32_t InQuality);

	// Object: Function GeneBatchRuntime.GeneBatchRuntimeComponent.GetQuality
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7800fc4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetQuality();

	// Object: Function GeneBatchRuntime.GeneBatchRuntimeComponent.GetPOIIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7800f90
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetPOIIndex();
};

// Object: Class GeneBatchRuntime.BatchStaticMesh
// Size: 0x38 (Inherited: 0x28)
struct UBatchStaticMesh : UObject
{
	DEFINE_UE_CLASS_HELPERS(UBatchStaticMesh, "BatchStaticMesh")

	struct FMulticastInlineDelegate BatchCompleted; // 0x28(0x10)

	// Object: Function GeneBatchRuntime.BatchStaticMesh.RequestBatch
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7801138
	// Params: [ Num(4) Size(0x18) ]
	static struct UBatchStaticMesh* RequestBatch(struct UGeneBatchRuntimeSubsystem* GBRuntime, int32_t BatchType, int32_t MeshID);

	// Object: DelegateFunction GeneBatchRuntime.BatchStaticMesh.OnBatchCompleted__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnBatchCompleted__DelegateSignature(struct UStaticMesh* StaticMesh);

	// Object: Function GeneBatchRuntime.BatchStaticMesh.Execute
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x780108c
	// Params: [ Num(1) Size(0x8) ]
	void Execute(struct UStaticMesh* StaticMesh);
};

// Object: Class GeneBatchRuntime.GeneBatchRuntimeSubsystem
// Size: 0x350 (Inherited: 0x30)
struct UGeneBatchRuntimeSubsystem : UWorldSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UGeneBatchRuntimeSubsystem, "GeneBatchRuntimeSubsystem")

	uint8_t Pad_0x30[0x28]; // 0x30(0x28)
	struct TArray<struct FGeneBatchRuntimePOIConfiguration> POIs; // 0x58(0x10)
	uint8_t Pad_0x68[0x2E8]; // 0x68(0x2E8)

	// Object: Function GeneBatchRuntime.GeneBatchRuntimeSubsystem.FindLeafHLODChildrenCurrent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x780126c
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct UPrimitiveComponent*> FindLeafHLODChildrenCurrent(struct UPrimitiveComponent* PrimitiveComponent);

	// Object: Function GeneBatchRuntime.GeneBatchRuntimeSubsystem.FindAndLoadAllRuntimeComponent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7801258
	// Params: [ Num(0) Size(0x0) ]
	void FindAndLoadAllRuntimeComponent();
};

} // namespace SDK
