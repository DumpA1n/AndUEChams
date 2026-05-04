#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: OpenWorldHISM
// Enums: 0
// Structs: 4
// Classes: 4

struct FSceneFoliageTypeNames;
struct FBillboardTransformParamRuntime;
struct FBillboardMIParamRuntime;
struct FCustomInstanceData;
struct UBillboardBatchConfigRuntime;
struct UBillboardBatchInfoConfigRuntime;
struct UOpenWorldBillboardBatchComponent;
struct UOpenWorldHierarchicalInstancedMeshComponent;

// Object: ScriptStruct OpenWorldHISM.SceneFoliageTypeNames
// Size: 0x10 (Inherited: 0x0)
struct FSceneFoliageTypeNames
{
	struct TArray<struct FName> FoliageNames; // 0x0(0x10)
};

// Object: ScriptStruct OpenWorldHISM.BillboardTransformParamRuntime
// Size: 0x20 (Inherited: 0x0)
struct FBillboardTransformParamRuntime
{
	struct FLinearColor UVTransform; // 0x0(0x10)
	struct FLinearColor MeshTransform; // 0x10(0x10)
};

// Object: ScriptStruct OpenWorldHISM.BillboardMIParamRuntime
// Size: 0x58 (Inherited: 0x0)
struct FBillboardMIParamRuntime
{
	float RandomTintGain; // 0x0(0x4)
	struct FLinearColor RandomTint; // 0x4(0x10)
	struct FLinearColor TranslucencyTintColor; // 0x14(0x10)
	float TranslucencyTintIntensity; // 0x24(0x4)
	float LeafTranslucency; // 0x28(0x4)
	float FakeShadow; // 0x2C(0x4)
	float SkylightTranslucencyIntensity; // 0x30(0x4)
	float OutlightAOContrast; // 0x34(0x4)
	float OutlightIntensity; // 0x38(0x4)
	float OutlightOffset; // 0x3C(0x4)
	float FixedTint; // 0x40(0x4)
	float Dir0UOffset; // 0x44(0x4)
	float Dir1UOffset; // 0x48(0x4)
	float TwoSidesRatio; // 0x4C(0x4)
	float Dir0UCenter; // 0x50(0x4)
	float Dir1UCenter; // 0x54(0x4)
};

// Object: ScriptStruct OpenWorldHISM.CustomInstanceData
// Size: 0x40 (Inherited: 0x0)
struct FCustomInstanceData
{
	struct FMatrix Transform; // 0x0(0x40)
};

// Object: Class OpenWorldHISM.BillboardBatchConfigRuntime
// Size: 0xF0 (Inherited: 0x30)
struct UBillboardBatchConfigRuntime : UDataAsset
{
	struct TMap<struct FString, int32_t> NameToParamID; // 0x30(0x50)
	struct TMap<struct FString, int32_t> NameToTypeID; // 0x80(0x50)
	struct TArray<struct FBillboardMIParamRuntime> ParamList; // 0xD0(0x10)
	struct TArray<struct FBillboardTransformParamRuntime> TransformList; // 0xE0(0x10)
	DEFINE_UE_CLASS_HELPERS(UBillboardBatchConfigRuntime, "BillboardBatchConfigRuntime")

};

// Object: Class OpenWorldHISM.BillboardBatchInfoConfigRuntime
// Size: 0x120 (Inherited: 0x30)
struct UBillboardBatchInfoConfigRuntime : UDataAsset
{
	struct TMap<struct TSoftObjectPtr<UStaticMesh>, struct FBillboardMIParamRuntime> MeshToParam; // 0x30(0x50)
	struct TMap<struct TSoftObjectPtr<UStaticMesh>, struct FBillboardTransformParamRuntime> MeshToTransform; // 0x80(0x50)
	struct TMap<struct FString, struct FSceneFoliageTypeNames> SceneFoliageNames; // 0xD0(0x50)
	DEFINE_UE_CLASS_HELPERS(UBillboardBatchInfoConfigRuntime, "BillboardBatchInfoConfigRuntime")

};

// Object: Class OpenWorldHISM.OpenWorldBillboardBatchComponent
// Size: 0x5930 (Inherited: 0x830)
struct UOpenWorldBillboardBatchComponent : UStaticMeshComponent
{
	uint8_t Pad_0x830[0x50C0]; // 0x830(0x50C0)
	struct FSoftObjectPath BillboardBatchMeshSoftPath; // 0x58F0(0x18)
	struct FSoftObjectPath BillboardBatchConfigSoftPath; // 0x5908(0x18)
	uint8_t Pad_0x5920[0x10]; // 0x5920(0x10)
	DEFINE_UE_CLASS_HELPERS(UOpenWorldBillboardBatchComponent, "OpenWorldBillboardBatchComponent")

};

// Object: Class OpenWorldHISM.OpenWorldHierarchicalInstancedMeshComponent
// Size: 0xB10 (Inherited: 0x830)
struct UOpenWorldHierarchicalInstancedMeshComponent : UStaticMeshComponent
{
	int32_t PerInstanceSMDataNum; // 0x830(0x4)
	uint8_t Pad_0x834[0xAC]; // 0x834(0xAC)
	int32_t PerInstanceBillboardDataNum; // 0x8E0(0x4)
	uint8_t Pad_0x8E4[0x164]; // 0x8E4(0x164)
	uint8_t bUseFixedBounds : 1; // 0xA48(0x1), Mask(0x1)
	uint8_t BitPad_0xA48_1 : 7; // 0xA48(0x1)
	uint8_t Pad_0xA49[0x3]; // 0xA49(0x3)
	struct FBoxSphereBounds FixedBounds; // 0xA4C(0x1C)
	int32_t InstancingRandomSeed; // 0xA68(0x4)
	int32_t DesiredInstancesPerLeaf; // 0xA6C(0x4)
	int32_t DesiredBillboardInstancesPerLeaf; // 0xA70(0x4)
	int32_t MinVertsToSplitNode; // 0xA74(0x4)
	int32_t MinInstancesPerOcclusion; // 0xA78(0x4)
	uint8_t bAutoRebuildTreeOnInstanceChanges : 1; // 0xA7C(0x1), Mask(0x1)
	uint8_t BitPad_0xA7C_1 : 7; // 0xA7C(0x1)
	uint8_t Pad_0xA7D[0x3]; // 0xA7D(0x3)
	float DensityScalingFactor; // 0xA80(0x4)
	float DensityScalingStart; // 0xA84(0x4)
	uint8_t bEnableDitherLODPreCompute : 1; // 0xA88(0x1), Mask(0x1)
	uint8_t BitPad_0xA88_1 : 7; // 0xA88(0x1)
	uint8_t Pad_0xA89[0x87]; // 0xA89(0x87)


	// Object: Function OpenWorldHISM.OpenWorldHierarchicalInstancedMeshComponent.TestAddInstance
	// Flags: [Final|Native|Public]
	// Offset: 0x7d1dd68
	// Params: [ Num(0) Size(0x0) ]
	void TestAddInstance();

	// Object: Function OpenWorldHISM.OpenWorldHierarchicalInstancedMeshComponent.SetInstanceVisible
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7d1dc28
	// Params: [ Num(4) Size(0x7) ]
	uint8_t SetInstanceVisible(int32_t InstanceIndex, uint8_t bInstanceVisible, uint8_t bUpdateRenderDynamicData);

	// Object: Function OpenWorldHISM.OpenWorldHierarchicalInstancedMeshComponent.SetInstanceUsedAsOccluder
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7d1dae8
	// Params: [ Num(4) Size(0x7) ]
	uint8_t SetInstanceUsedAsOccluder(int32_t InstanceIndex, uint8_t bUsedAsOccluder, uint8_t bUpdateRenderDynamicData);

	// Object: Function OpenWorldHISM.OpenWorldHierarchicalInstancedMeshComponent.SetBillboardVisible
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7d1d9f8
	// Params: [ Num(3) Size(0x6) ]
	uint8_t SetBillboardVisible(int32_t InstanceIndex, uint8_t bInstanceVisible);

	// Object: Function OpenWorldHISM.OpenWorldHierarchicalInstancedMeshComponent.RemoveInstances
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7d1d8e8
	// Params: [ Num(3) Size(0x18) ]
	int32_t RemoveInstances(const struct TArray<int32_t>& InstancesToRemove, uint8_t bAllowSlack);

	// Object: Function OpenWorldHISM.OpenWorldHierarchicalInstancedMeshComponent.RemoveInstance
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7d1d7f8
	// Params: [ Num(3) Size(0x6) ]
	uint8_t RemoveInstance(int32_t InstanceIndex, uint8_t bAllowSlack);

	// Object: Function OpenWorldHISM.OpenWorldHierarchicalInstancedMeshComponent.RemoveBillboards
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7d1d6e8
	// Params: [ Num(3) Size(0x18) ]
	int32_t RemoveBillboards(const struct TArray<int32_t>& BillboardsToRemove, uint8_t bAllowSlack);

	// Object: Function OpenWorldHISM.OpenWorldHierarchicalInstancedMeshComponent.RemoveBillboard
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7d1d5f8
	// Params: [ Num(3) Size(0x6) ]
	uint8_t RemoveBillboard(int32_t InstanceIndex, uint8_t bAllowSlack);

	// Object: Function OpenWorldHISM.OpenWorldHierarchicalInstancedMeshComponent.QueryInstances
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7d1d4c4
	// Params: [ Num(3) Size(0x20) ]
	struct TArray<int32_t> QueryInstances(const struct FVector& Origin, float radius);

	// Object: Function OpenWorldHISM.OpenWorldHierarchicalInstancedMeshComponent.QueryInstance
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7d1d40c
	// Params: [ Num(2) Size(0x10) ]
	int32_t QueryInstance(const struct FVector& Origin);

	// Object: Function OpenWorldHISM.OpenWorldHierarchicalInstancedMeshComponent.GetInstanceTransform
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7d1d2a0
	// Params: [ Num(4) Size(0x42) ]
	uint8_t GetInstanceTransform(int32_t InstanceIndex, struct FTransform& OutInstanceTransform, uint8_t bWorldSpace);

	// Object: Function OpenWorldHISM.OpenWorldHierarchicalInstancedMeshComponent.GetInstanceCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7d1d26c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetInstanceCount();

	// Object: Function OpenWorldHISM.OpenWorldHierarchicalInstancedMeshComponent.ClearInstances
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7d1d258
	// Params: [ Num(0) Size(0x0) ]
	void ClearInstances();

	// Object: Function OpenWorldHISM.OpenWorldHierarchicalInstancedMeshComponent.AddInstanceWorldSpace
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x7d1d174
	// Params: [ Num(2) Size(0x34) ]
	int32_t AddInstanceWorldSpace(const struct FTransform& InstanceWorldTransform);

	// Object: Function OpenWorldHISM.OpenWorldHierarchicalInstancedMeshComponent.AddInstance
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x7d1d090
	// Params: [ Num(2) Size(0x34) ]
	int32_t AddInstance(const struct FTransform& InstanceTransform);

	// Object: Function OpenWorldHISM.OpenWorldHierarchicalInstancedMeshComponent.AddBillboardWorldSpace
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x7d1cfac
	// Params: [ Num(2) Size(0x34) ]
	int32_t AddBillboardWorldSpace(const struct FTransform& BillboardWorldTransform);

	// Object: Function OpenWorldHISM.OpenWorldHierarchicalInstancedMeshComponent.AddBillboard
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x7d1cec8
	// Params: [ Num(2) Size(0x34) ]
	int32_t AddBillboard(const struct FTransform& InstanceTransform);
	DEFINE_UE_CLASS_HELPERS(UOpenWorldHierarchicalInstancedMeshComponent, "OpenWorldHierarchicalInstancedMeshComponent")

};

} // namespace SDK
