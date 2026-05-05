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
	// Offset: 0x15c30988
	// Params: [ Num(0) Size(0x0) ]
	void StopReconstruction();

	// Object: Function MRMesh.MeshReconstructorBase.StartReconstruction
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x15c3096c
	// Params: [ Num(0) Size(0x0) ]
	void StartReconstruction();

	// Object: Function MRMesh.MeshReconstructorBase.PauseReconstruction
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x15c30950
	// Params: [ Num(0) Size(0x0) ]
	void PauseReconstruction();

	// Object: Function MRMesh.MeshReconstructorBase.IsReconstructionStarted
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c30910
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsReconstructionStarted();

	// Object: Function MRMesh.MeshReconstructorBase.IsReconstructionPaused
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c308d0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsReconstructionPaused();

	// Object: Function MRMesh.MeshReconstructorBase.DisconnectMRMesh
	// Flags: [Native|Public]
	// Offset: 0x15c308b4
	// Params: [ Num(0) Size(0x0) ]
	void DisconnectMRMesh();

	// Object: Function MRMesh.MeshReconstructorBase.ConnectMRMesh
	// Flags: [Native|Public]
	// Offset: 0x15c30808
	// Params: [ Num(1) Size(0x8) ]
	void ConnectMRMesh(struct UMRMeshComponent* Mesh);
};

// Object: Class MRMesh.MockDataMeshTrackerComponent
// Size: 0x2B0 (Inherited: 0x240)
struct UMockDataMeshTrackerComponent : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(UMockDataMeshTrackerComponent, "MockDataMeshTrackerComponent")

	struct FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x240(0x10)
	uint8_t ScanWorld : 1; // 0x250(0x1), Mask(0x1)
	uint8_t BitPad_0x250_1 : 7; // 0x250(0x1)
	uint8_t RequestNormals : 1; // 0x251(0x1), Mask(0x1)
	uint8_t BitPad_0x251_1 : 7; // 0x251(0x1)
	uint8_t RequestVertexConfidence : 1; // 0x252(0x1), Mask(0x1)
	uint8_t BitPad_0x252_1 : 7; // 0x252(0x1)
	EMeshTrackerVertexColorMode VertexColorMode; // 0x253(0x1)
	uint8_t Pad_0x254[0x4]; // 0x254(0x4)
	struct TArray<struct FColor> BlockVertexColors; // 0x258(0x10)
	struct FLinearColor VertexColorFromConfidenceZero; // 0x268(0x10)
	struct FLinearColor VertexColorFromConfidenceOne; // 0x278(0x10)
	float UpdateInterval; // 0x288(0x4)
	uint8_t Pad_0x28C[0x4]; // 0x28C(0x4)
	struct UMRMeshComponent* MRMesh; // 0x290(0x8)
	uint8_t Pad_0x298[0x18]; // 0x298(0x18)

	// Object: DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x101d2e88
	// Params: [ Num(5) Size(0x48) ]
	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, const struct TArray<struct FVector>& Vertices, const struct TArray<int32_t>& Triangles, const struct TArray<struct FVector>& Normals, const struct TArray<float>& Confidence);

	// Object: Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15c30acc
	// Params: [ Num(1) Size(0x8) ]
	void DisconnectMRMesh(struct UMRMeshComponent* InMRMeshPtr);

	// Object: Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15c30a28
	// Params: [ Num(1) Size(0x8) ]
	void ConnectMRMesh(struct UMRMeshComponent* InMRMeshPtr);
};

// Object: Class MRMesh.MRMeshComponent
// Size: 0x5F0 (Inherited: 0x580)
struct UMRMeshComponent : UPrimitiveComponent
{
	DEFINE_UE_CLASS_HELPERS(UMRMeshComponent, "MRMeshComponent")

	struct UMaterialInterface* Material; // 0x580(0x8)
	uint8_t bCreateMeshProxySections : 1; // 0x588(0x1), Mask(0x1)
	uint8_t BitPad_0x588_1 : 7; // 0x588(0x1)
	uint8_t bUpdateNavMeshOnMeshUpdate : 1; // 0x589(0x1), Mask(0x1)
	uint8_t BitPad_0x589_1 : 7; // 0x589(0x1)
	uint8_t bNeverCreateCollisionMesh : 1; // 0x58A(0x1), Mask(0x1)
	uint8_t BitPad_0x58A_1 : 7; // 0x58A(0x1)
	uint8_t Pad_0x58B[0x5]; // 0x58B(0x5)
	struct UBodySetup* CachedBodySetup; // 0x590(0x8)
	struct TArray<struct UBodySetup*> BodySetups; // 0x598(0x10)
	struct UMaterialInterface* WireframeMaterial; // 0x5A8(0x8)
	uint8_t Pad_0x5B0[0x40]; // 0x5B0(0x40)

	// Object: Function MRMesh.MRMeshComponent.IsConnected
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c30bcc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsConnected();

	// Object: Function MRMesh.MRMeshComponent.ForceNavMeshUpdate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15c30bb8
	// Params: [ Num(0) Size(0x0) ]
	void ForceNavMeshUpdate();

	// Object: Function MRMesh.MRMeshComponent.Clear
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15c30b9c
	// Params: [ Num(0) Size(0x0) ]
	void Clear();
};

} // namespace SDK
