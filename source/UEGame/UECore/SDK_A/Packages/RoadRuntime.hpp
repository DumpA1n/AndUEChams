#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: RoadRuntime
// Enums: 0
// Structs: 5
// Classes: 2

struct AActor;
enum class ESplineMeshAxis : uint8_t;
struct UHierarchicalInstancedStaticMeshComponent;
struct USplineComponent;
struct USplineMeshComponent;
struct UStaticMesh;
struct UStaticMeshComponent;
struct FCrossMeshManager;
struct FCrossActorManager;
struct FSideMeshManager;
struct FCurbsManager;
struct FSideActorManager;
struct ACrossActor;
struct ARoadActor;

// Object: ScriptStruct RoadRuntime.CrossMeshManager
// Size: 0x20 (Inherited: 0x0)
struct FCrossMeshManager
{
	struct UStaticMesh* Prototype; // 0x0(0x8)
	struct AActor* Owner; // 0x8(0x8)
	struct UStaticMeshComponent* SideMesh; // 0x10(0x8)
	int32_t SocketIndex; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct RoadRuntime.CrossActorManager
// Size: 0x18 (Inherited: 0x0)
struct FCrossActorManager
{
	struct AActor* Prototype; // 0x0(0x8)
	struct AActor* SideActor; // 0x8(0x8)
	int32_t SocketIndex; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct RoadRuntime.SideMeshManager
// Size: 0x20 (Inherited: 0x0)
struct FSideMeshManager
{
	struct UStaticMesh* Prototype; // 0x0(0x8)
	struct AActor* Owner; // 0x8(0x8)
	struct UHierarchicalInstancedStaticMeshComponent* SideMeshes; // 0x10(0x8)
	int32_t SocketIndex; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct RoadRuntime.CurbsManager
// Size: 0x38 (Inherited: 0x0)
struct FCurbsManager
{
	struct AActor* Owner; // 0x0(0x8)
	struct UStaticMesh* Prototype; // 0x8(0x8)
	struct TArray<struct USplineMeshComponent*> CurbsComp; // 0x10(0x10)
	struct USplineComponent* Spline; // 0x20(0x8)
	int32_t SplineIndex; // 0x28(0x4)
	int32_t SocketIndex; // 0x2C(0x4)
	int32_t Segmentation; // 0x30(0x4)
	int32_t StepGeneration; // 0x34(0x4)
};

// Object: ScriptStruct RoadRuntime.SideActorManager
// Size: 0x20 (Inherited: 0x0)
struct FSideActorManager
{
	struct AActor* Prototype; // 0x0(0x8)
	struct TArray<struct AActor*> SideActors; // 0x8(0x10)
	int32_t SocketIndex; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: Class RoadRuntime.CrossActor
// Size: 0x3B0 (Inherited: 0x380)
struct ACrossActor : AStaticMeshActor
{
	DEFINE_UE_CLASS_HELPERS(ACrossActor, "CrossActor")

	struct FString UniqueKey; // 0x380(0x10)
	struct TArray<struct FCrossActorManager> SideActors; // 0x390(0x10)
	struct TArray<struct FCrossMeshManager> SideMeshes; // 0x3A0(0x10)

	// Object: Function RoadRuntime.CrossActor.UpdateSideMesh
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x8c6a3e8
	// Params: [ Num(6) Size(0x26) ]
	void UpdateSideMesh(struct UStaticMesh* InPrototype, struct FVector MeshRelativeLocation, struct FRotator MeshRelativeRotation, int32_t SocketIndex, uint8_t IsEnable, uint8_t IsNormalized);

	// Object: Function RoadRuntime.CrossActor.UpdateSideActor
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x8c6a208
	// Params: [ Num(6) Size(0x26) ]
	void UpdateSideActor(struct AActor* InPrototype, struct FVector ActorRelativeLocation, struct FRotator ActorRelativeRotation, int32_t SocketIndex, uint8_t IsEnable, uint8_t IsNormalized);

	// Object: Function RoadRuntime.CrossActor.PushSideMesh
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x8c6a028
	// Params: [ Num(6) Size(0x26) ]
	void PushSideMesh(struct UStaticMesh* InPrototype, struct FVector MeshRelativeLocation, struct FRotator MeshRelativeRotation, int32_t SocketIndex, uint8_t IsEnable, uint8_t IsNormalized);

	// Object: Function RoadRuntime.CrossActor.PushSideActor
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x8c69e48
	// Params: [ Num(6) Size(0x26) ]
	void PushSideActor(struct AActor* InPrototype, struct FVector ActorRelativeLocation, struct FRotator ActorRelativeRotation, int32_t SocketIndex, uint8_t IsEnable, uint8_t IsNormalized);

	// Object: Function RoadRuntime.CrossActor.DestroySideObjects
	// Flags: [Final|Native|Public]
	// Offset: 0x8c69e34
	// Params: [ Num(0) Size(0x0) ]
	void DestroySideObjects();
};

// Object: Class RoadRuntime.RoadActor
// Size: 0x3E8 (Inherited: 0x370)
struct ARoadActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(ARoadActor, "RoadActor")

	ESplineMeshAxis SplineMeshAxis; // 0x370(0x1)
	uint8_t Pad_0x371[0x3]; // 0x371(0x3)
	struct FVector LocalOffset; // 0x374(0xC)
	struct ARoadActor* Father; // 0x380(0x8)
	struct FString UniqueKey; // 0x388(0x10)
	struct USplineComponent* Spline; // 0x398(0x8)
	int32_t Index; // 0x3A0(0x4)
	int32_t Segmentation; // 0x3A4(0x4)
	int32_t StepGeneration; // 0x3A8(0x4)
	float size; // 0x3AC(0x4)
	struct UStaticMesh* RoadMesh; // 0x3B0(0x8)
	struct TArray<struct USplineMeshComponent*> RoadMeshesComp; // 0x3B8(0x10)
	struct TArray<struct FSideActorManager> SideActors; // 0x3C8(0x10)
	struct TArray<struct FSideMeshManager> SideMeshes; // 0x3D8(0x10)

	// Object: Function RoadRuntime.RoadActor.UpdateSplineMesh
	// Flags: [Final|Native|Public]
	// Offset: 0x8c6b314
	// Params: [ Num(1) Size(0x4) ]
	void UpdateSplineMesh(int32_t MeshIndex);

	// Object: Function RoadRuntime.RoadActor.UpdateSideMeshes
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x8c6b0c0
	// Params: [ Num(8) Size(0x2E) ]
	void UpdateSideMeshes(struct UStaticMesh* InPrototype, struct FVector MeshRelativeLocation, struct FRotator MeshRelativeRotation, int32_t SocketIndex, int32_t InShift, int32_t InSpacing, uint8_t IsEnable, uint8_t IsNormalized);

	// Object: Function RoadRuntime.RoadActor.UpdateSideActor
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x8c6ae6c
	// Params: [ Num(8) Size(0x2E) ]
	void UpdateSideActor(struct AActor* InPrototype, struct FVector ActorRelativeLocation, struct FRotator ActorRelativeRotation, int32_t SocketIndex, int32_t InShift, int32_t InSpacing, uint8_t IsEnable, uint8_t IsNormalized);

	// Object: Function RoadRuntime.RoadActor.UpdateSegment
	// Flags: [Final|Native|Public]
	// Offset: 0x8c6ad18
	// Params: [ Num(4) Size(0x19) ]
	void UpdateSegment(int32_t SegmentIndex, struct USplineComponent* SplineComponent, struct UStaticMesh* StaticMesh, ESplineMeshAxis inAxis);

	// Object: Function RoadRuntime.RoadActor.PushSideMesh
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x8c6aac4
	// Params: [ Num(8) Size(0x2E) ]
	void PushSideMesh(struct UStaticMesh* InPrototype, struct FVector MeshRelativeLocation, struct FRotator MeshRelativeRotation, int32_t SocketIndex, int32_t InShift, int32_t InSpacing, uint8_t IsEnable, uint8_t IsNormalized);

	// Object: Function RoadRuntime.RoadActor.PushSideActor
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x8c6a870
	// Params: [ Num(8) Size(0x2E) ]
	void PushSideActor(struct AActor* InPrototype, struct FVector ActorRelativeLocation, struct FRotator ActorRelativeRotation, int32_t SocketIndex, int32_t InShift, int32_t InSpacing, uint8_t IsEnable, uint8_t IsNormalized);

	// Object: Function RoadRuntime.RoadActor.DestroySideObjects
	// Flags: [Final|Native|Public]
	// Offset: 0x8c6a85c
	// Params: [ Num(0) Size(0x0) ]
	void DestroySideObjects();

	// Object: Function RoadRuntime.RoadActor.ClearSplineMeshes
	// Flags: [Final|Native|Public]
	// Offset: 0x8c6a848
	// Params: [ Num(0) Size(0x0) ]
	void ClearSplineMeshes();

	// Object: Function RoadRuntime.RoadActor.ApproxLength
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x8c6a6d4
	// Params: [ Num(5) Size(0x28) ]
	static float ApproxLength(const struct FInterpCurveVector& SplineInfo, float Start, float End, int32_t ApproxSections);

	// Object: Function RoadRuntime.RoadActor.AddSplineMesh
	// Flags: [Final|Native|Public]
	// Offset: 0x8c6a630
	// Params: [ Num(1) Size(0x4) ]
	void AddSplineMesh(int32_t MeshIndex);
};

} // namespace SDK
