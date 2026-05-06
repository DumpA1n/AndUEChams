#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: MRMesh
// Enums: 1
// Structs: 1
// Classes: 3

struct UBodySetup;
struct UMaterialInterface;
struct FMRMeshConfiguration;
struct UMeshReconstructorBase;
struct UMockDataMeshTrackerComponent;
struct UMRMeshComponent;

// Object: Enum MRMesh.EMeshTrackerVertexColorMode
enum class EMeshTrackerVertexColorMode : uint8_t
{
	None = 0,
	Confidence = 1,
	Block = 2,
	EMeshTrackerVertexColorMode_MAX = 3
};

// Object: ScriptStruct MRMesh.MRMeshConfiguration
// Size: 0x1 (Inherited: 0x0)
struct FMRMeshConfiguration
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: Class MRMesh.MeshReconstructorBase
// Size: 0x28 (Inherited: 0x28)
struct UMeshReconstructorBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMeshReconstructorBase, "MeshReconstructorBase")

	// Object: Function MRMesh.MeshReconstructorBase.StopReconstruction
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xa813dbc
	// Params: [ Num(0) Size(0x0) ]
	void StopReconstruction();

	// Object: Function MRMesh.MeshReconstructorBase.StartReconstruction
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xa813dd8
	// Params: [ Num(0) Size(0x0) ]
	void StartReconstruction();

	// Object: Function MRMesh.MeshReconstructorBase.PauseReconstruction
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xa813da0
	// Params: [ Num(0) Size(0x0) ]
	void PauseReconstruction();

	// Object: Function MRMesh.MeshReconstructorBase.IsReconstructionStarted
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa813d60
	// Params: [ Num(1) Size(0x1) ]
	bool IsReconstructionStarted();

	// Object: Function MRMesh.MeshReconstructorBase.IsReconstructionPaused
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa813d20
	// Params: [ Num(1) Size(0x1) ]
	bool IsReconstructionPaused();

	// Object: Function MRMesh.MeshReconstructorBase.DisconnectMRMesh
	// Flags: [Native|Public]
	// Offset: 0xa813c54
	// Params: [ Num(0) Size(0x0) ]
	void DisconnectMRMesh();

	// Object: Function MRMesh.MeshReconstructorBase.ConnectMRMesh
	// Flags: [Native|Public]
	// Offset: 0xa813c70
	// Params: [ Num(1) Size(0x8) ]
	void ConnectMRMesh(struct UMRMeshComponent* Mesh);
};

// Object: Class MRMesh.MockDataMeshTrackerComponent
// Size: 0x2A0 (Inherited: 0x230)
struct UMockDataMeshTrackerComponent : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(UMockDataMeshTrackerComponent, "MockDataMeshTrackerComponent")

	struct FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x228(0x10)
	bool ScanWorld; // 0x238(0x1)
	bool RequestNormals; // 0x239(0x1)
	bool RequestVertexConfidence; // 0x23A(0x1)
	EMeshTrackerVertexColorMode VertexColorMode; // 0x23B(0x1)
	struct TArray<struct FColor> BlockVertexColors; // 0x240(0x10)
	struct FLinearColor VertexColorFromConfidenceZero; // 0x250(0x10)
	struct FLinearColor VertexColorFromConfidenceOne; // 0x260(0x10)
	float UpdateInterval; // 0x270(0x4)
	struct UMRMeshComponent* MRMesh; // 0x278(0x8)
	uint8_t Pad_0x280[0x20]; // 0x280(0x20)

	// Object: DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x5d8cbc8
	// Params: [ Num(5) Size(0x48) ]
	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, const struct TArray<struct FVector>& Vertices, const struct TArray<int32_t>& Triangles, const struct TArray<struct FVector>& Normals, const struct TArray<float>& Confidence);

	// Object: Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa813e78
	// Params: [ Num(1) Size(0x8) ]
	void DisconnectMRMesh(struct UMRMeshComponent* InMRMeshPtr);

	// Object: Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa813f20
	// Params: [ Num(1) Size(0x8) ]
	void ConnectMRMesh(struct UMRMeshComponent* InMRMeshPtr);
};

// Object: Class MRMesh.MRMeshComponent
// Size: 0x730 (Inherited: 0x680)
struct UMRMeshComponent : UPrimitiveComponent
{
	DEFINE_UE_CLASS_HELPERS(UMRMeshComponent, "MRMeshComponent")

	uint8_t Pad_0x680[0x8]; // 0x680(0x8)
	struct UMaterialInterface* Material; // 0x688(0x8)
	struct UMaterialInterface* WireframeMaterial; // 0x690(0x8)
	bool bCreateMeshProxySections; // 0x698(0x1)
	bool bUpdateNavMeshOnMeshUpdate; // 0x699(0x1)
	bool bNeverCreateCollisionMesh; // 0x69A(0x1)
	uint8_t Pad_0x69B[0x5]; // 0x69B(0x5)
	struct UBodySetup* CachedBodySetup; // 0x6A0(0x8)
	struct TArray<struct UBodySetup*> BodySetups; // 0x6A8(0x10)
	uint8_t Pad_0x6B8[0x78]; // 0x6B8(0x78)

	// Object: Function MRMesh.MRMeshComponent.SetWireframeMaterial
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xa81425c
	// Params: [ Num(1) Size(0x8) ]
	void SetWireframeMaterial(struct UMaterialInterface* InMaterial);

	// Object: Function MRMesh.MRMeshComponent.SetWireframeColor
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xa814014
	// Params: [ Num(1) Size(0x10) ]
	void SetWireframeColor(const struct FLinearColor& InColor);

	// Object: Function MRMesh.MRMeshComponent.SetUseWireframe
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa8140e0
	// Params: [ Num(1) Size(0x1) ]
	void SetUseWireframe(bool bUseWireframe);

	// Object: Function MRMesh.MRMeshComponent.SetEnableMeshOcclusion
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa8141ac
	// Params: [ Num(1) Size(0x1) ]
	void SetEnableMeshOcclusion(bool bEnable);

	// Object: Function MRMesh.MRMeshComponent.IsConnected
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa81433c
	// Params: [ Num(1) Size(0x1) ]
	bool IsConnected();

	// Object: Function MRMesh.MRMeshComponent.GetWireframeColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa813ff4
	// Params: [ Num(1) Size(0x10) ]
	struct FLinearColor GetWireframeColor();

	// Object: Function MRMesh.MRMeshComponent.GetUseWireframe
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa8140c4
	// Params: [ Num(1) Size(0x1) ]
	bool GetUseWireframe();

	// Object: Function MRMesh.MRMeshComponent.GetEnableMeshOcclusion
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa814190
	// Params: [ Num(1) Size(0x1) ]
	bool GetEnableMeshOcclusion();

	// Object: Function MRMesh.MRMeshComponent.ForceNavMeshUpdate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa814328
	// Params: [ Num(0) Size(0x0) ]
	void ForceNavMeshUpdate();

	// Object: Function MRMesh.MRMeshComponent.Clear
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa81430c
	// Params: [ Num(0) Size(0x0) ]
	void Clear();
};

} // namespace SDK
