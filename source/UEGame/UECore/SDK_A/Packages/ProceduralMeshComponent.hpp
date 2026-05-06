#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: ProceduralMeshComponent
// Enums: 1
// Structs: 3
// Classes: 2

struct FKConvexElem;
struct UBodySetup;
struct UMaterialInterface;
struct UStaticMesh;
struct UStaticMeshComponent;
struct FProcMeshSection;
struct FProcMeshTangent;
struct FProcMeshVertex;
struct UProceduralMeshComponent;
struct UKismetProceduralMeshLibrary;

// Object: Enum ProceduralMeshComponent.EProcMeshSliceCapOption
enum class EProcMeshSliceCapOption : uint8_t
{
	NoCap = 0,
	CreateNewSectionForCap = 1,
	UseLastSectionForCap = 2,
	EProcMeshSliceCapOption_MAX = 3
};

// Object: ScriptStruct ProceduralMeshComponent.ProcMeshSection
// Size: 0x40 (Inherited: 0x0)
struct FProcMeshSection
{
	struct TArray<struct FProcMeshVertex> ProcVertexBuffer; // 0x0(0x10)
	struct TArray<uint32_t> ProcIndexBuffer; // 0x10(0x10)
	struct FBox SectionLocalBox; // 0x20(0x1C)
	bool bEnableCollision; // 0x3C(0x1)
	bool bSectionVisible; // 0x3D(0x1)
	uint8_t Pad_0x3E[0x2]; // 0x3E(0x2)
};

// Object: ScriptStruct ProceduralMeshComponent.ProcMeshTangent
// Size: 0x10 (Inherited: 0x0)
struct FProcMeshTangent
{
	struct FVector TangentX; // 0x0(0xC)
	bool bFlipTangentY; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct ProceduralMeshComponent.ProcMeshVertex
// Size: 0x4C (Inherited: 0x0)
struct FProcMeshVertex
{
	struct FVector position; // 0x0(0xC)
	struct FVector Normal; // 0xC(0xC)
	struct FProcMeshTangent Tangent; // 0x18(0x10)
	struct FColor Color; // 0x28(0x4)
	struct FVector2D UV0; // 0x2C(0x8)
	struct FVector2D UV1; // 0x34(0x8)
	struct FVector2D UV2; // 0x3C(0x8)
	struct FVector2D UV3; // 0x44(0x8)
};

// Object: Class ProceduralMeshComponent.ProceduralMeshComponent
// Size: 0x730 (Inherited: 0x6D0)
struct UProceduralMeshComponent : UMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UProceduralMeshComponent, "ProceduralMeshComponent")

	bool bUseComplexAsSimpleCollision; // 0x6D0(0x1)
	bool bUseAsyncCooking; // 0x6D1(0x1)
	uint8_t Pad_0x6D2[0x6]; // 0x6D2(0x6)
	struct UBodySetup* ProcMeshBodySetup; // 0x6D8(0x8)
	struct TArray<struct FProcMeshSection> ProcMeshSections; // 0x6E0(0x10)
	struct TArray<struct FKConvexElem> CollisionConvexElems; // 0x6F0(0x10)
	struct FBoxSphereBounds LocalBounds; // 0x700(0x1C)
	uint8_t Pad_0x71C[0x4]; // 0x71C(0x4)
	struct TArray<struct UBodySetup*> AsyncBodySetupQueue; // 0x720(0x10)

	// Object: Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x33e8924
	// Params: [ Num(9) Size(0x88) ]
	void UpdateMeshSection_LinearColor(int32_t SectionIndex, const struct TArray<struct FVector>& Vertices, const struct TArray<struct FVector>& Normals, const struct TArray<struct FVector2D>& UV0, const struct TArray<struct FVector2D>& UV1, const struct TArray<struct FVector2D>& UV2, const struct TArray<struct FVector2D>& UV3, const struct TArray<struct FLinearColor>& VertexColors, const struct TArray<struct FProcMeshTangent>& Tangents);

	// Object: Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x33e8cc0
	// Params: [ Num(6) Size(0x58) ]
	void UpdateMeshSection(int32_t SectionIndex, const struct TArray<struct FVector>& Vertices, const struct TArray<struct FVector>& Normals, const struct TArray<struct FVector2D>& UV0, const struct TArray<struct FColor>& VertexColors, const struct TArray<struct FProcMeshTangent>& Tangents);

	// Object: Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x33e877c
	// Params: [ Num(2) Size(0x5) ]
	void SetMeshSectionVisible(int32_t SectionIndex, bool bNewVisibility);

	// Object: Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x33e86c8
	// Params: [ Num(2) Size(0x5) ]
	bool IsMeshSectionVisible(int32_t SectionIndex);

	// Object: Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x33e8694
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumSections();

	// Object: Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x33e8fac
	// Params: [ Num(11) Size(0x99) ]
	void CreateMeshSection_LinearColor(int32_t SectionIndex, const struct TArray<struct FVector>& Vertices, const struct TArray<int32_t>& Triangles, const struct TArray<struct FVector>& Normals, const struct TArray<struct FVector2D>& UV0, const struct TArray<struct FVector2D>& UV1, const struct TArray<struct FVector2D>& UV2, const struct TArray<struct FVector2D>& UV3, const struct TArray<struct FLinearColor>& VertexColors, const struct TArray<struct FProcMeshTangent>& Tangents, bool bCreateCollision);

	// Object: Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x33e93fc
	// Params: [ Num(8) Size(0x69) ]
	void CreateMeshSection(int32_t SectionIndex, const struct TArray<struct FVector>& Vertices, const struct TArray<int32_t>& Triangles, const struct TArray<struct FVector>& Normals, const struct TArray<struct FVector2D>& UV0, const struct TArray<struct FColor>& VertexColors, const struct TArray<struct FProcMeshTangent>& Tangents, bool bCreateCollision);

	// Object: Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x33e887c
	// Params: [ Num(1) Size(0x4) ]
	void ClearMeshSection(int32_t SectionIndex);

	// Object: Function ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x33e8578
	// Params: [ Num(0) Size(0x0) ]
	void ClearCollisionConvexMeshes();

	// Object: Function ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x33e8868
	// Params: [ Num(0) Size(0x0) ]
	void ClearAllMeshSections();

	// Object: Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x33e858c
	// Params: [ Num(1) Size(0x10) ]
	void AddCollisionConvexMesh(struct TArray<struct FVector> ConvexVerts);
};

// Object: Class ProceduralMeshComponent.KismetProceduralMeshLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetProceduralMeshLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UKismetProceduralMeshLibrary, "KismetProceduralMeshLibrary")

	// Object: Function ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x33e6f5c
	// Params: [ Num(7) Size(0x40) ]
	static void SliceProceduralMesh(struct UProceduralMeshComponent* InProcMesh, struct FVector PlanePosition, struct FVector PlaneNormal, bool bCreateOtherHalf, struct UProceduralMeshComponent*& OutOtherHalfProcMesh, EProcMeshSliceCapOption CapOption, struct UMaterialInterface* CapMaterial);

	// Object: Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x33e75a0
	// Params: [ Num(8) Size(0x60) ]
	static void GetSectionFromStaticMesh(struct UStaticMesh* InMesh, int32_t LODIndex, int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UVs, struct TArray<struct FProcMeshTangent>& Tangents);

	// Object: Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x33e7190
	// Params: [ Num(7) Size(0x60) ]
	static void GetSectionFromProceduralMesh(struct UProceduralMeshComponent* InProcMesh, int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UVs, struct TArray<struct FProcMeshTangent>& Tangents);

	// Object: Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x33e82b8
	// Params: [ Num(6) Size(0x60) ]
	static void GenerateBoxMesh(struct FVector BoxRadius, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UVs, struct TArray<struct FProcMeshTangent>& Tangents);

	// Object: Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshWelded
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x33e7b20
	// Params: [ Num(6) Size(0x3C) ]
	static void CreateGridMeshWelded(int32_t NumX, int32_t NumY, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Vertices, struct TArray<struct FVector2D>& UVs, float GridSpacing);

	// Object: Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x33e7d58
	// Params: [ Num(4) Size(0x20) ]
	static void CreateGridMeshTriangles(int32_t NumX, int32_t NumY, bool bWinding, struct TArray<int32_t>& Triangles);

	// Object: Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshSplit
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x33e788c
	// Params: [ Num(7) Size(0x4C) ]
	static void CreateGridMeshSplit(int32_t NumX, int32_t NumY, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Vertices, struct TArray<struct FVector2D>& UVs, struct TArray<struct FVector2D>& UV1s, float GridSpacing);

	// Object: Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33e7440
	// Params: [ Num(4) Size(0x19) ]
	static void CopyProceduralMeshFromStaticMeshComponent(struct UStaticMeshComponent* StaticMeshComponent, int32_t LODIndex, struct UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision);

	// Object: Function ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x33e7ed4
	// Params: [ Num(5) Size(0x20) ]
	static void ConvertQuadToTriangles(struct TArray<int32_t>& Triangles, int32_t Vert0, int32_t Vert1, int32_t Vert2, int32_t Vert3);

	// Object: Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x33e8088
	// Params: [ Num(5) Size(0x50) ]
	static void CalculateTangentsForMesh(const struct TArray<struct FVector>& Vertices, const struct TArray<int32_t>& Triangles, const struct TArray<struct FVector2D>& UVs, struct TArray<struct FVector>& Normals, struct TArray<struct FProcMeshTangent>& Tangents);
};

} // namespace SDK
