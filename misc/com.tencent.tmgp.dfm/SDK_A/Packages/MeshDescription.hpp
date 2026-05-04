#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: MeshDescription
// Enums: 1
// Structs: 7
// Classes: 2

struct FElementID;
struct FPolygonGroupID;
struct FPolygonID;
struct FVertexID;
struct FVertexInstanceID;
struct FEdgeID;
struct FTriangleID;
struct UMeshDescription;
struct UMeshDescriptionBase;

// Object: Enum MeshDescription.EComputeNTBsOptions
enum class EComputeNTBsOptions : uint8_t
{
	None = 0,
	Normals = 1,
	Tangents = 2,
	WeightedNTBs = 4,
	EComputeNTBsOptions_MAX = 5
};

// Object: ScriptStruct MeshDescription.ElementID
// Size: 0x4 (Inherited: 0x0)
struct FElementID
{
	int32_t IDValue; // 0x0(0x4)
};

// Object: ScriptStruct MeshDescription.PolygonGroupID
// Size: 0x4 (Inherited: 0x4)
struct FPolygonGroupID : FElementID
{
};

// Object: ScriptStruct MeshDescription.PolygonID
// Size: 0x4 (Inherited: 0x4)
struct FPolygonID : FElementID
{
};

// Object: ScriptStruct MeshDescription.VertexID
// Size: 0x4 (Inherited: 0x4)
struct FVertexID : FElementID
{
};

// Object: ScriptStruct MeshDescription.VertexInstanceID
// Size: 0x4 (Inherited: 0x4)
struct FVertexInstanceID : FElementID
{
};

// Object: ScriptStruct MeshDescription.EdgeID
// Size: 0x4 (Inherited: 0x4)
struct FEdgeID : FElementID
{
};

// Object: ScriptStruct MeshDescription.TriangleID
// Size: 0x4 (Inherited: 0x4)
struct FTriangleID : FElementID
{
};

// Object: Class MeshDescription.MeshDescription
// Size: 0x28 (Inherited: 0x28)
struct UMeshDescription : UObject
{	DEFINE_UE_CLASS_HELPERS(UMeshDescription, "MeshDescription")

};

// Object: Class MeshDescription.MeshDescriptionBase
// Size: 0x390 (Inherited: 0x28)
struct UMeshDescriptionBase : UObject
{
	uint8_t Pad_0x28[0x368]; // 0x28(0x368)


	// Object: Function MeshDescription.MeshDescriptionBase.SetVertexPosition
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x16748a54
	// Params: [ Num(2) Size(0x10) ]
	void SetVertexPosition(struct FVertexID VertexID, const struct FVector& Position);

	// Object: Function MeshDescription.MeshDescriptionBase.SetPolygonVertexInstance
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16748930
	// Params: [ Num(3) Size(0xC) ]
	void SetPolygonVertexInstance(struct FPolygonID PolygonID, int32_t PerimeterIndex, struct FVertexInstanceID VertexInstanceID);

	// Object: Function MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16748848
	// Params: [ Num(2) Size(0x8) ]
	void SetPolygonPolygonGroup(struct FPolygonID PolygonID, struct FPolygonGroupID PolygonGroupID);

	// Object: Function MeshDescription.MeshDescriptionBase.ReversePolygonFacing
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1674879c
	// Params: [ Num(1) Size(0x4) ]
	void ReversePolygonFacing(struct FPolygonID PolygonID);

	// Object: Function MeshDescription.MeshDescriptionBase.ReserveNewVertices
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x167486f8
	// Params: [ Num(1) Size(0x4) ]
	void ReserveNewVertices(int32_t NumberOfNewVertices);

	// Object: Function MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16748654
	// Params: [ Num(1) Size(0x4) ]
	void ReserveNewVertexInstances(int32_t NumberOfNewVertexInstances);

	// Object: Function MeshDescription.MeshDescriptionBase.ReserveNewTriangles
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x167485b0
	// Params: [ Num(1) Size(0x4) ]
	void ReserveNewTriangles(int32_t NumberOfNewTriangles);

	// Object: Function MeshDescription.MeshDescriptionBase.ReserveNewPolygons
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1674850c
	// Params: [ Num(1) Size(0x4) ]
	void ReserveNewPolygons(int32_t NumberOfNewPolygons);

	// Object: Function MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16748468
	// Params: [ Num(1) Size(0x4) ]
	void ReserveNewPolygonGroups(int32_t NumberOfNewPolygonGroups);

	// Object: Function MeshDescription.MeshDescriptionBase.ReserveNewEdges
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x167483c4
	// Params: [ Num(1) Size(0x4) ]
	void ReserveNewEdges(int32_t NumberOfNewEdges);

	// Object: Function MeshDescription.MeshDescriptionBase.IsVertexValid
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1674830c
	// Params: [ Num(2) Size(0x5) ]
	uint8_t IsVertexValid(struct FVertexID VertexID);

	// Object: Function MeshDescription.MeshDescriptionBase.IsVertexOrphaned
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16748254
	// Params: [ Num(2) Size(0x5) ]
	uint8_t IsVertexOrphaned(struct FVertexID VertexID);

	// Object: Function MeshDescription.MeshDescriptionBase.IsVertexInstanceValid
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1674819c
	// Params: [ Num(2) Size(0x5) ]
	uint8_t IsVertexInstanceValid(struct FVertexInstanceID VertexInstanceID);

	// Object: Function MeshDescription.MeshDescriptionBase.IsTriangleValid
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x167480e4
	// Params: [ Num(2) Size(0x5) ]
	uint8_t IsTriangleValid(struct FTriangleID TriangleID);

	// Object: Function MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1674802c
	// Params: [ Num(2) Size(0x5) ]
	uint8_t IsTrianglePartOfNgon(struct FTriangleID TriangleID);

	// Object: Function MeshDescription.MeshDescriptionBase.IsPolygonValid
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16747f74
	// Params: [ Num(2) Size(0x5) ]
	uint8_t IsPolygonValid(struct FPolygonID PolygonID);

	// Object: Function MeshDescription.MeshDescriptionBase.IsPolygonGroupValid
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16747ebc
	// Params: [ Num(2) Size(0x5) ]
	uint8_t IsPolygonGroupValid(struct FPolygonGroupID PolygonGroupID);

	// Object: Function MeshDescription.MeshDescriptionBase.IsEmpty
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16747e84
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsEmpty();

	// Object: Function MeshDescription.MeshDescriptionBase.IsEdgeValid
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16747dcc
	// Params: [ Num(2) Size(0x5) ]
	uint8_t IsEdgeValid(struct FEdgeID EdgeID);

	// Object: Function MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16747cd0
	// Params: [ Num(3) Size(0x9) ]
	uint8_t IsEdgeInternalToPolygon(struct FEdgeID EdgeID, struct FPolygonID PolygonID);

	// Object: Function MeshDescription.MeshDescriptionBase.IsEdgeInternal
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16747c18
	// Params: [ Num(2) Size(0x5) ]
	uint8_t IsEdgeInternal(struct FEdgeID EdgeID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetVertexVertexInstances
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16747b18
	// Params: [ Num(2) Size(0x18) ]
	void GetVertexVertexInstances(struct FVertexID VertexID, struct TArray<struct FVertexInstanceID>& OutVertexInstanceIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetVertexPosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16747a60
	// Params: [ Num(2) Size(0x10) ]
	struct FVector GetVertexPosition(struct FVertexID VertexID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetVertexPairEdge
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16747968
	// Params: [ Num(3) Size(0xC) ]
	struct FEdgeID GetVertexPairEdge(struct FVertexID VertexID0, struct FVertexID VertexID1);

	// Object: Function MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x167478b4
	// Params: [ Num(2) Size(0x8) ]
	struct FVertexID GetVertexInstanceVertex(struct FVertexInstanceID VertexInstanceID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x167477bc
	// Params: [ Num(3) Size(0xC) ]
	struct FEdgeID GetVertexInstancePairEdge(struct FVertexInstanceID VertexInstanceID0, struct FVertexInstanceID VertexInstanceID1);

	// Object: Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x167476c4
	// Params: [ Num(3) Size(0xC) ]
	struct FVertexInstanceID GetVertexInstanceForTriangleVertex(struct FTriangleID TriangleID, struct FVertexID VertexID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x167475cc
	// Params: [ Num(3) Size(0xC) ]
	struct FVertexInstanceID GetVertexInstanceForPolygonVertex(struct FPolygonID PolygonID, struct FVertexID VertexID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x167474cc
	// Params: [ Num(2) Size(0x18) ]
	void GetVertexInstanceConnectedTriangles(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FTriangleID>& OutConnectedTriangleIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x167473cc
	// Params: [ Num(2) Size(0x18) ]
	void GetVertexInstanceConnectedPolygons(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x167472cc
	// Params: [ Num(2) Size(0x18) ]
	void GetVertexConnectedTriangles(struct FVertexID VertexID, struct TArray<struct FTriangleID>& OutConnectedTriangleIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x167471cc
	// Params: [ Num(2) Size(0x18) ]
	void GetVertexConnectedPolygons(struct FVertexID VertexID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x167470cc
	// Params: [ Num(2) Size(0x18) ]
	void GetVertexConnectedEdges(struct FVertexID VertexID, struct TArray<struct FEdgeID>& OutEdgeIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16746fcc
	// Params: [ Num(2) Size(0x18) ]
	void GetVertexAdjacentVertices(struct FVertexID VertexID, struct TArray<struct FVertexID>& OutAdjacentVertexIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetTriangleVertices
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16746ecc
	// Params: [ Num(2) Size(0x18) ]
	void GetTriangleVertices(struct FTriangleID TriangleID, struct TArray<struct FVertexID>& OutVertexIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16746dcc
	// Params: [ Num(2) Size(0x18) ]
	void GetTriangleVertexInstances(struct FTriangleID TriangleID, struct TArray<struct FVertexInstanceID>& OutVertexInstanceIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16746ce0
	// Params: [ Num(3) Size(0xC) ]
	struct FVertexInstanceID GetTriangleVertexInstance(struct FTriangleID TriangleID, int32_t Index);

	// Object: Function MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16746c2c
	// Params: [ Num(2) Size(0x8) ]
	struct FPolygonGroupID GetTrianglePolygonGroup(struct FTriangleID TriangleID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetTrianglePolygon
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16746b78
	// Params: [ Num(2) Size(0x8) ]
	struct FPolygonID GetTrianglePolygon(struct FTriangleID TriangleID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetTriangleEdges
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16746a78
	// Params: [ Num(2) Size(0x18) ]
	void GetTriangleEdges(struct FTriangleID TriangleID, struct TArray<struct FEdgeID>& OutEdgeIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16746978
	// Params: [ Num(2) Size(0x18) ]
	void GetTriangleAdjacentTriangles(struct FTriangleID TriangleID, struct TArray<struct FTriangleID>& OutTriangleIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetPolygonVertices
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16746878
	// Params: [ Num(2) Size(0x18) ]
	void GetPolygonVertices(struct FPolygonID PolygonID, struct TArray<struct FVertexID>& OutVertexIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16746778
	// Params: [ Num(2) Size(0x18) ]
	void GetPolygonVertexInstances(struct FPolygonID PolygonID, struct TArray<struct FVertexInstanceID>& OutVertexInstanceIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetPolygonTriangles
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16746678
	// Params: [ Num(2) Size(0x18) ]
	void GetPolygonTriangles(struct FPolygonID PolygonID, struct TArray<struct FTriangleID>& OutTriangleIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x167465c4
	// Params: [ Num(2) Size(0x8) ]
	struct FPolygonGroupID GetPolygonPolygonGroup(struct FPolygonID PolygonID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x167464c4
	// Params: [ Num(2) Size(0x18) ]
	void GetPolygonPerimeterEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OutEdgeIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x167463c4
	// Params: [ Num(2) Size(0x18) ]
	void GetPolygonInternalEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OutEdgeIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x167462c4
	// Params: [ Num(2) Size(0x18) ]
	void GetPolygonGroupPolygons(struct FPolygonGroupID PolygonGroupID, struct TArray<struct FPolygonID>& OutPolygonIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x167461c4
	// Params: [ Num(2) Size(0x18) ]
	void GetPolygonAdjacentPolygons(struct FPolygonID PolygonID, struct TArray<struct FPolygonID>& OutPolygonIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16746110
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetNumVertexVertexInstances(struct FVertexID VertexID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1674605c
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetNumVertexInstanceConnectedTriangles(struct FVertexInstanceID VertexInstanceID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16745fa8
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetNumVertexInstanceConnectedPolygons(struct FVertexInstanceID VertexInstanceID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16745ef4
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetNumVertexConnectedTriangles(struct FVertexID VertexID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16745e40
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetNumVertexConnectedPolygons(struct FVertexID VertexID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16745d8c
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetNumVertexConnectedEdges(struct FVertexID VertexID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetNumPolygonVertices
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16745cd8
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetNumPolygonVertices(struct FPolygonID PolygonID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16745c24
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetNumPolygonTriangles(struct FPolygonID PolygonID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16745b70
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetNumPolygonInternalEdges(struct FPolygonID PolygonID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16745abc
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetNumPolygonGroupPolygons(struct FPolygonGroupID PolygonGroupID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16745a08
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetNumEdgeConnectedTriangles(struct FEdgeID EdgeID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16745954
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetNumEdgeConnectedPolygons(struct FEdgeID EdgeID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetEdgeVertices
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16745854
	// Params: [ Num(2) Size(0x18) ]
	void GetEdgeVertices(struct FEdgeID EdgeID, struct TArray<struct FVertexID>& OutVertexIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetEdgeVertex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16745768
	// Params: [ Num(3) Size(0xC) ]
	struct FVertexID GetEdgeVertex(struct FEdgeID EdgeID, int32_t VertexNumber);

	// Object: Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16745668
	// Params: [ Num(2) Size(0x18) ]
	void GetEdgeConnectedTriangles(struct FEdgeID EdgeID, struct TArray<struct FTriangleID>& OutConnectedTriangleIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16745568
	// Params: [ Num(2) Size(0x18) ]
	void GetEdgeConnectedPolygons(struct FEdgeID EdgeID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.Empty
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16745554
	// Params: [ Num(0) Size(0x0) ]
	void Empty();

	// Object: Function MeshDescription.MeshDescriptionBase.DeleteVertexInstance
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x16745454
	// Params: [ Num(2) Size(0x18) ]
	void DeleteVertexInstance(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FVertexID>& OrphanedVertices);

	// Object: Function MeshDescription.MeshDescriptionBase.DeleteVertex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x167453a8
	// Params: [ Num(1) Size(0x4) ]
	void DeleteVertex(struct FVertexID VertexID);

	// Object: Function MeshDescription.MeshDescriptionBase.DeleteTriangle
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x167451f8
	// Params: [ Num(4) Size(0x38) ]
	void DeleteTriangle(struct FTriangleID TriangleID, struct TArray<struct FEdgeID>& OrphanedEdges, struct TArray<struct FVertexInstanceID>& OrphanedVertexInstances, struct TArray<struct FPolygonGroupID>& OrphanedPolygonGroupsPtr);

	// Object: Function MeshDescription.MeshDescriptionBase.DeletePolygonGroup
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1674514c
	// Params: [ Num(1) Size(0x4) ]
	void DeletePolygonGroup(struct FPolygonGroupID PolygonGroupID);

	// Object: Function MeshDescription.MeshDescriptionBase.DeletePolygon
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x16744f9c
	// Params: [ Num(4) Size(0x38) ]
	void DeletePolygon(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OrphanedEdges, struct TArray<struct FVertexInstanceID>& OrphanedVertexInstances, struct TArray<struct FPolygonGroupID>& OrphanedPolygonGroups);

	// Object: Function MeshDescription.MeshDescriptionBase.DeleteEdge
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x16744e9c
	// Params: [ Num(2) Size(0x18) ]
	void DeleteEdge(struct FEdgeID EdgeID, struct TArray<struct FVertexID>& OrphanedVertices);

	// Object: Function MeshDescription.MeshDescriptionBase.CreateVertexWithID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16744df0
	// Params: [ Num(1) Size(0x4) ]
	void CreateVertexWithID(struct FVertexID VertexID);

	// Object: Function MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16744d08
	// Params: [ Num(2) Size(0x8) ]
	void CreateVertexInstanceWithID(struct FVertexInstanceID VertexInstanceID, struct FVertexID VertexID);

	// Object: Function MeshDescription.MeshDescriptionBase.CreateVertexInstance
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16744c54
	// Params: [ Num(2) Size(0x8) ]
	struct FVertexInstanceID CreateVertexInstance(struct FVertexID VertexID);

	// Object: Function MeshDescription.MeshDescriptionBase.CreateVertex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16744c20
	// Params: [ Num(1) Size(0x4) ]
	struct FVertexID CreateVertex();

	// Object: Function MeshDescription.MeshDescriptionBase.CreateTriangleWithID
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x16744a90
	// Params: [ Num(4) Size(0x28) ]
	void CreateTriangleWithID(struct FTriangleID TriangleID, struct FPolygonGroupID PolygonGroupID, const struct TArray<struct FVertexInstanceID>& VertexInstanceIDs, struct TArray<struct FEdgeID>& NewEdgeIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.CreateTriangle
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x1674492c
	// Params: [ Num(4) Size(0x2C) ]
	struct FTriangleID CreateTriangle(struct FPolygonGroupID PolygonGroupID, const struct TArray<struct FVertexInstanceID>& VertexInstanceIDs, struct TArray<struct FEdgeID>& NewEdgeIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.CreatePolygonWithID
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x1674479c
	// Params: [ Num(4) Size(0x28) ]
	void CreatePolygonWithID(struct FPolygonID PolygonID, struct FPolygonGroupID PolygonGroupID, struct TArray<struct FVertexInstanceID>& VertexInstanceIDs, struct TArray<struct FEdgeID>& NewEdgeIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x167446f0
	// Params: [ Num(1) Size(0x4) ]
	void CreatePolygonGroupWithID(struct FPolygonGroupID PolygonGroupID);

	// Object: Function MeshDescription.MeshDescriptionBase.CreatePolygonGroup
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x167446bc
	// Params: [ Num(1) Size(0x4) ]
	struct FPolygonGroupID CreatePolygonGroup();

	// Object: Function MeshDescription.MeshDescriptionBase.CreatePolygon
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x16744558
	// Params: [ Num(4) Size(0x2C) ]
	struct FPolygonID CreatePolygon(struct FPolygonGroupID PolygonGroupID, struct TArray<struct FVertexInstanceID>& VertexInstanceIDs, struct TArray<struct FEdgeID>& NewEdgeIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.CreateEdgeWithID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16744430
	// Params: [ Num(3) Size(0xC) ]
	void CreateEdgeWithID(struct FEdgeID EdgeID, struct FVertexID VertexID0, struct FVertexID VertexID1);

	// Object: Function MeshDescription.MeshDescriptionBase.CreateEdge
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16744338
	// Params: [ Num(3) Size(0xC) ]
	struct FEdgeID CreateEdge(struct FVertexID VertexID0, struct FVertexID VertexID1);

	// Object: Function MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1674428c
	// Params: [ Num(1) Size(0x4) ]
	void ComputePolygonTriangulation(struct FPolygonID PolygonID);
	DEFINE_UE_CLASS_HELPERS(UMeshDescriptionBase, "MeshDescriptionBase")

};

} // namespace SDK
