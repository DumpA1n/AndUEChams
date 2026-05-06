#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: MFSubMeshDecal
// Enums: 0
// Structs: 0
// Classes: 2

struct UMaterialInterface;
struct UProceduralMeshComponent;
struct AMFSubMeshDecalActor;
struct UMFSubMeshDecalComponent;

// Object: Class MFSubMeshDecal.MFSubMeshDecalActor
// Size: 0x310 (Inherited: 0x300)
struct AMFSubMeshDecalActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFSubMeshDecalActor, "MFSubMeshDecalActor")

	uint8_t Pad_0x300[0x8]; // 0x300(0x8)
	struct UMFSubMeshDecalComponent* SubMeshDecalComponent; // 0x308(0x8)

	// Object: Function MFSubMeshDecal.MFSubMeshDecalActor.RegenSubMeshCheckTimerTick
	// Flags: [Final|Native|Protected]
	// Offset: 0x4fd3ca4
	// Params: [ Num(0) Size(0x0) ]
	void RegenSubMeshCheckTimerTick();

	// Object: Function MFSubMeshDecal.MFSubMeshDecalActor.GetSubMeshDecalComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4fd3cb8
	// Params: [ Num(1) Size(0x8) ]
	struct UMFSubMeshDecalComponent* GetSubMeshDecalComponent();
};

// Object: Class MFSubMeshDecal.MFSubMeshDecalComponent
// Size: 0x310 (Inherited: 0x230)
struct UMFSubMeshDecalComponent : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFSubMeshDecalComponent, "MFSubMeshDecalComponent")

	struct UMaterialInterface* DecalMaterial; // 0x228(0x8)
	struct FVector DecalSize; // 0x230(0xC)
	float MaxCullingDegree; // 0x23C(0x4)
	float VertNormalOffsetForStaticMesh; // 0x240(0x4)
	float VertNormalOffsetForLandscape; // 0x244(0x4)
	struct UProceduralMeshComponent* StaticProcMeshComponent; // 0x248(0x8)
	struct TArray<struct UProceduralMeshComponent*> DynamicProcMeshComponents; // 0x250(0x10)
	uint8_t Pad_0x268[0xA8]; // 0x268(0xA8)

	// Object: Function MFSubMeshDecal.MFSubMeshDecalComponent.WaitTasksCompletedAndClearAllData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4fd3e2c
	// Params: [ Num(0) Size(0x0) ]
	void WaitTasksCompletedAndClearAllData();

	// Object: Function MFSubMeshDecal.MFSubMeshDecalComponent.SetVertNormalOffsetForStaticMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4fd40dc
	// Params: [ Num(1) Size(0x4) ]
	void SetVertNormalOffsetForStaticMesh(float InOffset);

	// Object: Function MFSubMeshDecal.MFSubMeshDecalComponent.SetVertNormalOffsetForLandscape
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4fd4000
	// Params: [ Num(1) Size(0x4) ]
	void SetVertNormalOffsetForLandscape(float InOffset);

	// Object: Function MFSubMeshDecal.MFSubMeshDecalComponent.SetTranslucencyPriority
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4fd3e7c
	// Params: [ Num(1) Size(0x4) ]
	void SetTranslucencyPriority(int32_t Priority);

	// Object: Function MFSubMeshDecal.MFSubMeshDecalComponent.SetMaxCullingDegree
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4fd41b8
	// Params: [ Num(1) Size(0x4) ]
	void SetMaxCullingDegree(float InMaxCullingDegree);

	// Object: Function MFSubMeshDecal.MFSubMeshDecalComponent.SetDecalSize
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x4fd4294
	// Params: [ Num(1) Size(0xC) ]
	void SetDecalSize(const struct FVector& InDecalSize);

	// Object: Function MFSubMeshDecal.MFSubMeshDecalComponent.SetDecalMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4fd3f24
	// Params: [ Num(1) Size(0x8) ]
	void SetDecalMaterial(struct UMaterialInterface* InMaterial);

	// Object: Function MFSubMeshDecal.MFSubMeshDecalComponent.MarkNeedForRecreateDecal
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4fd3cdc
	// Params: [ Num(1) Size(0x1) ]
	void MarkNeedForRecreateDecal(bool bForce);

	// Object: Function MFSubMeshDecal.MFSubMeshDecalComponent.GetVertPositionNormalOffset
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4fd4184
	// Params: [ Num(1) Size(0x4) ]
	float GetVertPositionNormalOffset();

	// Object: Function MFSubMeshDecal.MFSubMeshDecalComponent.GetVertNormalOffsetForLandscape
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4fd40a8
	// Params: [ Num(1) Size(0x4) ]
	float GetVertNormalOffsetForLandscape();

	// Object: Function MFSubMeshDecal.MFSubMeshDecalComponent.GetStaticProceduralMeshComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4fd3e10
	// Params: [ Num(1) Size(0x8) ]
	struct UProceduralMeshComponent* GetStaticProceduralMeshComponent();

	// Object: Function MFSubMeshDecal.MFSubMeshDecalComponent.GetProjectionDirection
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x4fd3e40
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetProjectionDirection();

	// Object: Function MFSubMeshDecal.MFSubMeshDecalComponent.GetMaxCullingDegree
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4fd4260
	// Params: [ Num(1) Size(0x4) ]
	float GetMaxCullingDegree();

	// Object: Function MFSubMeshDecal.MFSubMeshDecalComponent.GetDynamicProceduralMeshComponents
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4fd3d8c
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UProceduralMeshComponent*> GetDynamicProceduralMeshComponents();

	// Object: Function MFSubMeshDecal.MFSubMeshDecalComponent.GetDecalSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4fd4344
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetDecalSize();

	// Object: Function MFSubMeshDecal.MFSubMeshDecalComponent.GetDecalMaterial
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4fd3fcc
	// Params: [ Num(1) Size(0x8) ]
	struct UMaterialInterface* GetDecalMaterial();
};

} // namespace SDK
