#pragma once

#include "../CoreUObject_classes.hpp"
#include "MeshDescription.hpp"

namespace SDK
{

// Package: EditableMesh
// Enums: 6
// Structs: 31
// Classes: 5

struct FEdgeID;
struct FPolygonGroupID;
struct FPolygonID;
struct FTriangleID;
struct FVertexID;
struct FVertexInstanceID;
struct UGeometryCollection;
struct UPrimitiveComponent;
struct UStaticMesh;
struct FAdaptorPolygon2Group;
struct FAdaptorPolygon;
struct FAdaptorTriangleID;
struct FPolygonGroupForPolygon;
struct FMeshElementAttributeList;
struct FPolygonGroupToCreate;
struct FMeshElementAttributeValue;
struct FMeshElementAttributeData;
struct FVertexToMove;
struct FChangeVertexInstancesForPolygon;
struct FVertexInstancesForPolygonHole;
struct FVertexIndexAndInstanceID;
struct FVertexAttributesForPolygon;
struct FVertexAttributesForPolygonHole;
struct FAttributesForEdge;
struct FAttributesForVertexInstance;
struct FAttributesForVertex;
struct FPolygonToSplit;
struct FVertexPair;
struct FPolygonToCreate;
struct FVertexAndAttributes;
struct FEdgeToCreate;
struct FVertexInstanceToCreate;
struct FVertexToCreate;
struct FSubdivisionLimitData;
struct FSubdividedWireEdge;
struct FSubdivisionLimitSection;
struct FSubdividedQuadVertex;
struct FSubdividedQuad;
struct FRenderingPolygonGroup;
struct FRenderingPolygon;
struct UEditableMeshAdapter;
struct UEditableGeometryCollectionAdapter;
struct UEditableMesh;
struct UEditableMeshFactory;
struct UEditableStaticMeshAdapter;

// Object: Enum EditableMesh.ETriangleTessellationMode
enum class ETriangleTessellationMode : uint8_t
{
	ThreeTriangles = 0,
	FourTriangles = 1,
	ETriangleTessellationMode_MAX = 2
};

// Object: Enum EditableMesh.EInsetPolygonsMode
enum class EInsetPolygonsMode : uint8_t
{
	All = 0,
	CenterPolygonOnly = 1,
	SidePolygonsOnly = 2,
	EInsetPolygonsMode_MAX = 3
};

// Object: Enum EditableMesh.EPolygonEdgeHardness
enum class EPolygonEdgeHardness : uint8_t
{
	NewEdgesSoft = 0,
	NewEdgesHard = 1,
	AllEdgesSoft = 2,
	AllEdgesHard = 3,
	EPolygonEdgeHardness_MAX = 4
};

// Object: Enum EditableMesh.EMeshElementAttributeType
enum class EMeshElementAttributeType : uint8_t
{
	None = 0,
	FVector4 = 1,
	FVector = 2,
	FVector2D = 3,
	Float = 4,
	Int = 5,
	Bool = 6,
	FName = 7,
	EMeshElementAttributeType_MAX = 8
};

// Object: Enum EditableMesh.EMeshTopologyChange
enum class EMeshTopologyChange : uint8_t
{
	NoTopologyChange = 0,
	TopologyChange = 1,
	EMeshTopologyChange_MAX = 2
};

// Object: Enum EditableMesh.EMeshModificationType
enum class EMeshModificationType : uint8_t
{
	FirstInterim = 0,
	Interim = 1,
	Final = 2,
	EMeshModificationType_MAX = 3
};

// Object: ScriptStruct EditableMesh.AdaptorPolygon2Group
// Size: 0x48 (Inherited: 0x0)
struct FAdaptorPolygon2Group
{
	uint32_t RenderingSectionIndex; // 0x0(0x4)
	int32_t MaterialIndex; // 0x4(0x4)
	int32_t MaxTriangles; // 0x8(0x4)
	uint8_t Pad_0xC[0x3C]; // 0xC(0x3C)
};

// Object: ScriptStruct EditableMesh.AdaptorPolygon
// Size: 0x18 (Inherited: 0x0)
struct FAdaptorPolygon
{
	struct FPolygonGroupID PolygonGroupID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FAdaptorTriangleID> TriangulatedPolygonTriangleIndices; // 0x8(0x10)
};

// Object: ScriptStruct EditableMesh.AdaptorTriangleID
// Size: 0x4 (Inherited: 0x4)
struct FAdaptorTriangleID : FElementID
{
};

// Object: ScriptStruct EditableMesh.PolygonGroupForPolygon
// Size: 0x8 (Inherited: 0x0)
struct FPolygonGroupForPolygon
{
	struct FPolygonID PolygonID; // 0x0(0x4)
	struct FPolygonGroupID PolygonGroupID; // 0x4(0x4)
};

// Object: ScriptStruct EditableMesh.MeshElementAttributeList
// Size: 0x10 (Inherited: 0x0)
struct FMeshElementAttributeList
{
	struct TArray<struct FMeshElementAttributeData> Attributes; // 0x0(0x10)
};

// Object: ScriptStruct EditableMesh.PolygonGroupToCreate
// Size: 0x18 (Inherited: 0x0)
struct FPolygonGroupToCreate
{
	struct FMeshElementAttributeList PolygonGroupAttributes; // 0x0(0x10)
	struct FPolygonGroupID OriginalPolygonGroupID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct EditableMesh.MeshElementAttributeValue
// Size: 0x50 (Inherited: 0x0)
struct FMeshElementAttributeValue
{
	uint8_t Pad_0x0[0x50]; // 0x0(0x50)
};

// Object: ScriptStruct EditableMesh.MeshElementAttributeData
// Size: 0x60 (Inherited: 0x0)
struct FMeshElementAttributeData
{
	struct FName AttributeName; // 0x0(0x8)
	int32_t AttributeIndex; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FMeshElementAttributeValue AttributeValue; // 0x10(0x50)
};

// Object: ScriptStruct EditableMesh.VertexToMove
// Size: 0x10 (Inherited: 0x0)
struct FVertexToMove
{
	struct FVertexID VertexID; // 0x0(0x4)
	struct FVector NewVertexPosition; // 0x4(0xC)
};

// Object: ScriptStruct EditableMesh.ChangeVertexInstancesForPolygon
// Size: 0x28 (Inherited: 0x0)
struct FChangeVertexInstancesForPolygon
{
	struct FPolygonID PolygonID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FVertexIndexAndInstanceID> PerimeterVertexIndicesAndInstanceIDs; // 0x8(0x10)
	struct TArray<struct FVertexInstancesForPolygonHole> VertexIndicesAndInstanceIDsForEachHole; // 0x18(0x10)
};

// Object: ScriptStruct EditableMesh.VertexInstancesForPolygonHole
// Size: 0x10 (Inherited: 0x0)
struct FVertexInstancesForPolygonHole
{
	struct TArray<struct FVertexIndexAndInstanceID> VertexIndicesAndInstanceIDs; // 0x0(0x10)
};

// Object: ScriptStruct EditableMesh.VertexIndexAndInstanceID
// Size: 0x8 (Inherited: 0x0)
struct FVertexIndexAndInstanceID
{
	int32_t ContourIndex; // 0x0(0x4)
	struct FVertexInstanceID VertexInstanceID; // 0x4(0x4)
};

// Object: ScriptStruct EditableMesh.VertexAttributesForPolygon
// Size: 0x28 (Inherited: 0x0)
struct FVertexAttributesForPolygon
{
	struct FPolygonID PolygonID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FMeshElementAttributeList> PerimeterVertexAttributeLists; // 0x8(0x10)
	struct TArray<struct FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole; // 0x18(0x10)
};

// Object: ScriptStruct EditableMesh.VertexAttributesForPolygonHole
// Size: 0x10 (Inherited: 0x0)
struct FVertexAttributesForPolygonHole
{
	struct TArray<struct FMeshElementAttributeList> VertexAttributeList; // 0x0(0x10)
};

// Object: ScriptStruct EditableMesh.AttributesForEdge
// Size: 0x18 (Inherited: 0x0)
struct FAttributesForEdge
{
	struct FEdgeID EdgeID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FMeshElementAttributeList EdgeAttributes; // 0x8(0x10)
};

// Object: ScriptStruct EditableMesh.AttributesForVertexInstance
// Size: 0x18 (Inherited: 0x0)
struct FAttributesForVertexInstance
{
	struct FVertexInstanceID VertexInstanceID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FMeshElementAttributeList VertexInstanceAttributes; // 0x8(0x10)
};

// Object: ScriptStruct EditableMesh.AttributesForVertex
// Size: 0x18 (Inherited: 0x0)
struct FAttributesForVertex
{
	struct FVertexID VertexID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FMeshElementAttributeList VertexAttributes; // 0x8(0x10)
};

// Object: ScriptStruct EditableMesh.PolygonToSplit
// Size: 0x18 (Inherited: 0x0)
struct FPolygonToSplit
{
	struct FPolygonID PolygonID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FVertexPair> VertexPairsToSplitAt; // 0x8(0x10)
};

// Object: ScriptStruct EditableMesh.VertexPair
// Size: 0x8 (Inherited: 0x0)
struct FVertexPair
{
	struct FVertexID VertexID0; // 0x0(0x4)
	struct FVertexID VertexID1; // 0x4(0x4)
};

// Object: ScriptStruct EditableMesh.PolygonToCreate
// Size: 0x20 (Inherited: 0x0)
struct FPolygonToCreate
{
	struct FPolygonGroupID PolygonGroupID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FVertexAndAttributes> PerimeterVertices; // 0x8(0x10)
	struct FPolygonID OriginalPolygonID; // 0x18(0x4)
	EPolygonEdgeHardness PolygonEdgeHardness; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
};

// Object: ScriptStruct EditableMesh.VertexAndAttributes
// Size: 0x18 (Inherited: 0x0)
struct FVertexAndAttributes
{
	struct FVertexInstanceID VertexInstanceID; // 0x0(0x4)
	struct FVertexID VertexID; // 0x4(0x4)
	struct FMeshElementAttributeList PolygonVertexAttributes; // 0x8(0x10)
};

// Object: ScriptStruct EditableMesh.EdgeToCreate
// Size: 0x20 (Inherited: 0x0)
struct FEdgeToCreate
{
	struct FVertexID VertexID0; // 0x0(0x4)
	struct FVertexID VertexID1; // 0x4(0x4)
	struct FMeshElementAttributeList EdgeAttributes; // 0x8(0x10)
	struct FEdgeID OriginalEdgeID; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct EditableMesh.VertexInstanceToCreate
// Size: 0x20 (Inherited: 0x0)
struct FVertexInstanceToCreate
{
	struct FVertexID VertexID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FMeshElementAttributeList VertexInstanceAttributes; // 0x8(0x10)
	struct FVertexInstanceID OriginalVertexInstanceID; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct EditableMesh.VertexToCreate
// Size: 0x18 (Inherited: 0x0)
struct FVertexToCreate
{
	struct FMeshElementAttributeList VertexAttributes; // 0x0(0x10)
	struct FVertexID OriginalVertexID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct EditableMesh.SubdivisionLimitData
// Size: 0x30 (Inherited: 0x0)
struct FSubdivisionLimitData
{
	struct TArray<struct FVector> VertexPositions; // 0x0(0x10)
	struct TArray<struct FSubdivisionLimitSection> Sections; // 0x10(0x10)
	struct TArray<struct FSubdividedWireEdge> SubdividedWireEdges; // 0x20(0x10)
};

// Object: ScriptStruct EditableMesh.SubdividedWireEdge
// Size: 0xC (Inherited: 0x0)
struct FSubdividedWireEdge
{
	int32_t EdgeVertex0PositionIndex; // 0x0(0x4)
	int32_t EdgeVertex1PositionIndex; // 0x4(0x4)
	uint8_t Pad_0x8[0x4]; // 0x8(0x4)
};

// Object: ScriptStruct EditableMesh.SubdivisionLimitSection
// Size: 0x10 (Inherited: 0x0)
struct FSubdivisionLimitSection
{
	struct TArray<struct FSubdividedQuad> SubdividedQuads; // 0x0(0x10)
};

// Object: ScriptStruct EditableMesh.SubdividedQuadVertex
// Size: 0x34 (Inherited: 0x0)
struct FSubdividedQuadVertex
{
	int32_t VertexPositionIndex; // 0x0(0x4)
	struct FVector2D TextureCoordinate0; // 0x4(0x8)
	struct FVector2D TextureCoordinate1; // 0xC(0x8)
	struct FColor VertexColor; // 0x14(0x4)
	struct FVector VertexNormal; // 0x18(0xC)
	struct FVector VertexTangent; // 0x24(0xC)
	float VertexBinormalSign; // 0x30(0x4)
};

// Object: ScriptStruct EditableMesh.SubdividedQuad
// Size: 0xD0 (Inherited: 0x0)
struct FSubdividedQuad
{
	struct FSubdividedQuadVertex QuadVertex0; // 0x0(0x34)
	struct FSubdividedQuadVertex QuadVertex1; // 0x34(0x34)
	struct FSubdividedQuadVertex QuadVertex2; // 0x68(0x34)
	struct FSubdividedQuadVertex QuadVertex3; // 0x9C(0x34)
};

// Object: ScriptStruct EditableMesh.RenderingPolygonGroup
// Size: 0x48 (Inherited: 0x0)
struct FRenderingPolygonGroup
{
	uint32_t RenderingSectionIndex; // 0x0(0x4)
	int32_t MaterialIndex; // 0x4(0x4)
	int32_t MaxTriangles; // 0x8(0x4)
	uint8_t Pad_0xC[0x3C]; // 0xC(0x3C)
};

// Object: ScriptStruct EditableMesh.RenderingPolygon
// Size: 0x18 (Inherited: 0x0)
struct FRenderingPolygon
{
	struct FPolygonGroupID PolygonGroupID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FTriangleID> TriangulatedPolygonTriangleIndices; // 0x8(0x10)
};

// Object: Class EditableMesh.EditableMeshAdapter
// Size: 0x28 (Inherited: 0x28)
struct UEditableMeshAdapter : UObject
{	DEFINE_UE_CLASS_HELPERS(UEditableMeshAdapter, "EditableMeshAdapter")

};

// Object: Class EditableMesh.EditableGeometryCollectionAdapter
// Size: 0xD8 (Inherited: 0x28)
struct UEditableGeometryCollectionAdapter : UEditableMeshAdapter
{
	struct UGeometryCollection* GeometryCollection; // 0x28(0x8)
	struct UGeometryCollection* OriginalGeometryCollection; // 0x30(0x8)
	int32_t GeometryCollectionLODIndex; // 0x38(0x4)
	uint8_t Pad_0x3C[0x9C]; // 0x3C(0x9C)
	DEFINE_UE_CLASS_HELPERS(UEditableGeometryCollectionAdapter, "EditableGeometryCollectionAdapter")

};

// Object: Class EditableMesh.EditableMesh
// Size: 0x678 (Inherited: 0x28)
struct UEditableMesh : UObject
{
	uint8_t Pad_0x28[0x390]; // 0x28(0x390)
	struct TArray<struct UEditableMeshAdapter*> Adapters; // 0x3B8(0x10)
	uint8_t Pad_0x3C8[0x8]; // 0x3C8(0x8)
	int32_t TextureCoordinateCount; // 0x3D0(0x4)
	uint8_t Pad_0x3D4[0x148]; // 0x3D4(0x148)
	int32_t PendingCompactCounter; // 0x51C(0x4)
	int32_t SubdivisionCount; // 0x520(0x4)
	uint8_t Pad_0x524[0x154]; // 0x524(0x154)


	// Object: Function EditableMesh.EditableMesh.WeldVertices
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ed2fc8
	// Params: [ Num(2) Size(0x14) ]
	void WeldVertices(const struct TArray<struct FVertexID>& VertexIDs, struct FVertexID& OutNewVertexID);

	// Object: Function EditableMesh.EditableMesh.TryToRemoveVertex
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ed2e80
	// Params: [ Num(3) Size(0xC) ]
	void TryToRemoveVertex(struct FVertexID VertexID, uint8_t& bOutWasVertexRemoved, struct FEdgeID& OutNewEdgeID);

	// Object: Function EditableMesh.EditableMesh.TryToRemovePolygonEdge
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ed2d38
	// Params: [ Num(3) Size(0xC) ]
	void TryToRemovePolygonEdge(struct FEdgeID EdgeID, uint8_t& bOutWasEdgeRemoved, struct FPolygonID& OutNewPolygonID);

	// Object: Function EditableMesh.EditableMesh.TriangulatePolygons
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ed2c28
	// Params: [ Num(2) Size(0x20) ]
	void TriangulatePolygons(const struct TArray<struct FPolygonID>& PolygonIDs, struct TArray<struct FPolygonID>& OutNewTrianglePolygons);

	// Object: Function EditableMesh.EditableMesh.TessellatePolygons
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ed2adc
	// Params: [ Num(3) Size(0x28) ]
	void TessellatePolygons(const struct TArray<struct FPolygonID>& PolygonIDs, ETriangleTessellationMode TriangleTessellationMode, struct TArray<struct FPolygonID>& OutNewPolygonIDs);

	// Object: Function EditableMesh.EditableMesh.StartModification
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ed29fc
	// Params: [ Num(2) Size(0x2) ]
	void StartModification(EMeshModificationType MeshModificationType, EMeshTopologyChange MeshTopologyChange);

	// Object: Function EditableMesh.EditableMesh.SplitPolygons
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ed28ec
	// Params: [ Num(2) Size(0x20) ]
	void SplitPolygons(const struct TArray<struct FPolygonToSplit>& PolygonsToSplit, struct TArray<struct FEdgeID>& OutNewEdgeIDs);

	// Object: Function EditableMesh.EditableMesh.SplitPolygonalMesh
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x8ed2738
	// Params: [ Num(4) Size(0x40) ]
	void SplitPolygonalMesh(const struct FPlane& InPlane, struct TArray<struct FPolygonID>& PolygonIDs1, struct TArray<struct FPolygonID>& PolygonIDs2, struct TArray<struct FEdgeID>& BoundaryIDs);

	// Object: Function EditableMesh.EditableMesh.SplitEdge
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ed25e4
	// Params: [ Num(3) Size(0x28) ]
	void SplitEdge(struct FEdgeID EdgeID, const struct TArray<float>& Splits, struct TArray<struct FVertexID>& OutNewVertexIDs);

	// Object: Function EditableMesh.EditableMesh.SetVerticesCornerSharpness
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ed24d4
	// Params: [ Num(2) Size(0x20) ]
	void SetVerticesCornerSharpness(const struct TArray<struct FVertexID>& VertexIDs, const struct TArray<float>& VerticesNewCornerSharpness);

	// Object: Function EditableMesh.EditableMesh.SetVerticesAttributes
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ed2418
	// Params: [ Num(1) Size(0x10) ]
	void SetVerticesAttributes(const struct TArray<struct FAttributesForVertex>& AttributesForVertices);

	// Object: Function EditableMesh.EditableMesh.SetVertexInstancesAttributes
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ed235c
	// Params: [ Num(1) Size(0x10) ]
	void SetVertexInstancesAttributes(const struct TArray<struct FAttributesForVertexInstance>& AttributesForVertexInstances);

	// Object: Function EditableMesh.EditableMesh.SetTextureCoordinateCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ed22b8
	// Params: [ Num(1) Size(0x4) ]
	void SetTextureCoordinateCount(int32_t NumTexCoords);

	// Object: Function EditableMesh.EditableMesh.SetSubdivisionCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ed2214
	// Params: [ Num(1) Size(0x4) ]
	void SetSubdivisionCount(int32_t NewSubdivisionCount);

	// Object: Function EditableMesh.EditableMesh.SetPolygonsVertexAttributes
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ed2158
	// Params: [ Num(1) Size(0x10) ]
	void SetPolygonsVertexAttributes(const struct TArray<struct FVertexAttributesForPolygon>& VertexAttributesForPolygons);

	// Object: Function EditableMesh.EditableMesh.SetEdgesHardnessAutomatically
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ed2060
	// Params: [ Num(2) Size(0x14) ]
	void SetEdgesHardnessAutomatically(const struct TArray<struct FEdgeID>& EdgeIDs, float MaxDotProductForSoftEdge);

	// Object: Function EditableMesh.EditableMesh.SetEdgesHardness
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ed1f50
	// Params: [ Num(2) Size(0x20) ]
	void SetEdgesHardness(const struct TArray<struct FEdgeID>& EdgeIDs, const struct TArray<uint8_t>& EdgesNewIsHard);

	// Object: Function EditableMesh.EditableMesh.SetEdgesCreaseSharpness
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ed1e40
	// Params: [ Num(2) Size(0x20) ]
	void SetEdgesCreaseSharpness(const struct TArray<struct FEdgeID>& EdgeIDs, const struct TArray<float>& EdgesNewCreaseSharpness);

	// Object: Function EditableMesh.EditableMesh.SetEdgesAttributes
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ed1d84
	// Params: [ Num(1) Size(0x10) ]
	void SetEdgesAttributes(const struct TArray<struct FAttributesForEdge>& AttributesForEdges);

	// Object: Function EditableMesh.EditableMesh.SetAllowUndo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ed1cdc
	// Params: [ Num(1) Size(0x1) ]
	void SetAllowUndo(uint8_t bInAllowUndo);

	// Object: Function EditableMesh.EditableMesh.SetAllowSpatialDatabase
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ed1c30
	// Params: [ Num(1) Size(0x1) ]
	void SetAllowSpatialDatabase(uint8_t bInAllowSpatialDatabase);

	// Object: Function EditableMesh.EditableMesh.SetAllowCompact
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ed1b88
	// Params: [ Num(1) Size(0x1) ]
	void SetAllowCompact(uint8_t bInAllowCompact);

	// Object: Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ed1a84
	// Params: [ Num(2) Size(0x20) ]
	void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(const struct FPlane& InPlane, struct TArray<struct FPolygonID>& OutPolygons);

	// Object: Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ed1950
	// Params: [ Num(3) Size(0x28) ]
	void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(struct FVector LineSegmentStart, struct FVector LineSegmentEnd, struct TArray<struct FPolygonID>& OutPolygons);

	// Object: Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolume
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ed1840
	// Params: [ Num(2) Size(0x20) ]
	void SearchSpatialDatabaseForPolygonsInVolume(const struct TArray<struct FPlane>& Planes, struct TArray<struct FPolygonID>& OutPolygons);

	// Object: Function EditableMesh.EditableMesh.RevertInstance
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ed180c
	// Params: [ Num(1) Size(0x8) ]
	struct UEditableMesh* RevertInstance();

	// Object: Function EditableMesh.EditableMesh.Revert
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ed17f8
	// Params: [ Num(0) Size(0x0) ]
	void Revert();

	// Object: Function EditableMesh.EditableMesh.RebuildRenderMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ed17e4
	// Params: [ Num(0) Size(0x0) ]
	void RebuildRenderMesh();

	// Object: Function EditableMesh.EditableMesh.QuadrangulateMesh
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ed1728
	// Params: [ Num(1) Size(0x10) ]
	void QuadrangulateMesh(struct TArray<struct FPolygonID>& OutNewPolygonIDs);

	// Object: Function EditableMesh.EditableMesh.PropagateInstanceChanges
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ed1714
	// Params: [ Num(0) Size(0x0) ]
	void PropagateInstanceChanges();

	// Object: Function EditableMesh.EditableMesh.MoveVertices
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ed1658
	// Params: [ Num(1) Size(0x10) ]
	void MoveVertices(const struct TArray<struct FVertexToMove>& VerticesToMove);

	// Object: Function EditableMesh.EditableMesh.MakeVertexID
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8ed15b8
	// Params: [ Num(2) Size(0x8) ]
	static struct FVertexID MakeVertexID(int32_t VertexIndex);

	// Object: Function EditableMesh.EditableMesh.MakePolygonID
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8ed1518
	// Params: [ Num(2) Size(0x8) ]
	static struct FPolygonID MakePolygonID(int32_t PolygonIndex);

	// Object: Function EditableMesh.EditableMesh.MakePolygonGroupID
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8ed1478
	// Params: [ Num(2) Size(0x8) ]
	static struct FPolygonGroupID MakePolygonGroupID(int32_t PolygonGroupIndex);

	// Object: Function EditableMesh.EditableMesh.MakeEdgeID
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8ed13d8
	// Params: [ Num(2) Size(0x8) ]
	static struct FEdgeID MakeEdgeID(int32_t EdgeIndex);

	// Object: Function EditableMesh.EditableMesh.IsValidVertex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ed1320
	// Params: [ Num(2) Size(0x5) ]
	uint8_t IsValidVertex(struct FVertexID VertexID);

	// Object: Function EditableMesh.EditableMesh.IsValidPolygonGroup
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ed1268
	// Params: [ Num(2) Size(0x5) ]
	uint8_t IsValidPolygonGroup(struct FPolygonGroupID PolygonGroupID);

	// Object: Function EditableMesh.EditableMesh.IsValidPolygon
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ed11b0
	// Params: [ Num(2) Size(0x5) ]
	uint8_t IsValidPolygon(struct FPolygonID PolygonID);

	// Object: Function EditableMesh.EditableMesh.IsValidEdge
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ed10f8
	// Params: [ Num(2) Size(0x5) ]
	uint8_t IsValidEdge(struct FEdgeID EdgeID);

	// Object: Function EditableMesh.EditableMesh.IsUndoAllowed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ed10dc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsUndoAllowed();

	// Object: Function EditableMesh.EditableMesh.IsSpatialDatabaseAllowed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ed10c0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsSpatialDatabaseAllowed();

	// Object: Function EditableMesh.EditableMesh.IsPreviewingSubdivisions
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ed1088
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPreviewingSubdivisions();

	// Object: Function EditableMesh.EditableMesh.IsOrphanedVertex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ed0fd0
	// Params: [ Num(2) Size(0x5) ]
	uint8_t IsOrphanedVertex(struct FVertexID VertexID);

	// Object: Function EditableMesh.EditableMesh.IsCompactAllowed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ed0fb4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsCompactAllowed();

	// Object: Function EditableMesh.EditableMesh.IsCommittedAsInstance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ed0f7c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsCommittedAsInstance();

	// Object: Function EditableMesh.EditableMesh.IsCommitted
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ed0f44
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsCommitted();

	// Object: Function EditableMesh.EditableMesh.IsBeingModified
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ed0f04
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsBeingModified();

	// Object: Function EditableMesh.EditableMesh.InvalidVertexID
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8ed0ee4
	// Params: [ Num(1) Size(0x4) ]
	static struct FVertexID InvalidVertexID();

	// Object: Function EditableMesh.EditableMesh.InvalidPolygonID
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8ed0ec4
	// Params: [ Num(1) Size(0x4) ]
	static struct FPolygonID InvalidPolygonID();

	// Object: Function EditableMesh.EditableMesh.InvalidPolygonGroupID
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8ed0ea4
	// Params: [ Num(1) Size(0x4) ]
	static struct FPolygonGroupID InvalidPolygonGroupID();

	// Object: Function EditableMesh.EditableMesh.InvalidEdgeID
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8ed0e84
	// Params: [ Num(1) Size(0x4) ]
	static struct FEdgeID InvalidEdgeID();

	// Object: Function EditableMesh.EditableMesh.InsetPolygons
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ed0c68
	// Params: [ Num(6) Size(0x40) ]
	void InsetPolygons(const struct TArray<struct FPolygonID>& PolygonIDs, float InsetFixedDistance, float InsetProgressTowardCenter, EInsetPolygonsMode Mode, struct TArray<struct FPolygonID>& OutNewCenterPolygonIDs, struct TArray<struct FPolygonID>& OutNewSidePolygonIDs);

	// Object: Function EditableMesh.EditableMesh.InsertEdgeLoop
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ed0b14
	// Params: [ Num(3) Size(0x28) ]
	void InsertEdgeLoop(struct FEdgeID EdgeID, const struct TArray<float>& Splits, struct TArray<struct FEdgeID>& OutNewEdgeIDs);

	// Object: Function EditableMesh.EditableMesh.InitializeAdapters
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ed0b00
	// Params: [ Num(0) Size(0x0) ]
	void InitializeAdapters();

	// Object: Function EditableMesh.EditableMesh.GetVertexPairEdge
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ed09b8
	// Params: [ Num(4) Size(0x10) ]
	struct FEdgeID GetVertexPairEdge(struct FVertexID VertexID, struct FVertexID NextVertexID, uint8_t& bOutEdgeWindingIsReversed);

	// Object: Function EditableMesh.EditableMesh.GetVertexInstanceVertex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ed0904
	// Params: [ Num(2) Size(0x8) ]
	struct FVertexID GetVertexInstanceVertex(struct FVertexInstanceID VertexInstanceID);

	// Object: Function EditableMesh.EditableMesh.GetVertexInstanceCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ed08d0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetVertexInstanceCount();

	// Object: Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ed07d0
	// Params: [ Num(2) Size(0x18) ]
	void GetVertexInstanceConnectedPolygons(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs);

	// Object: Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ed071c
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetVertexInstanceConnectedPolygonCount(struct FVertexInstanceID VertexInstanceID);

	// Object: Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ed0630
	// Params: [ Num(3) Size(0xC) ]
	struct FPolygonID GetVertexInstanceConnectedPolygon(struct FVertexInstanceID VertexInstanceID, int32_t ConnectedPolygonNumber);

	// Object: Function EditableMesh.EditableMesh.GetVertexCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ed05fc
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetVertexCount();

	// Object: Function EditableMesh.EditableMesh.GetVertexConnectedPolygons
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ed04fc
	// Params: [ Num(2) Size(0x18) ]
	void GetVertexConnectedPolygons(struct FVertexID VertexID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs);

	// Object: Function EditableMesh.EditableMesh.GetVertexConnectedEdges
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ed03fc
	// Params: [ Num(2) Size(0x18) ]
	void GetVertexConnectedEdges(struct FVertexID VertexID, struct TArray<struct FEdgeID>& OutConnectedEdgeIDs);

	// Object: Function EditableMesh.EditableMesh.GetVertexConnectedEdgeCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ed0348
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetVertexConnectedEdgeCount(struct FVertexID VertexID);

	// Object: Function EditableMesh.EditableMesh.GetVertexConnectedEdge
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ed025c
	// Params: [ Num(3) Size(0xC) ]
	struct FEdgeID GetVertexConnectedEdge(struct FVertexID VertexID, int32_t ConnectedEdgeNumber);

	// Object: Function EditableMesh.EditableMesh.GetVertexAdjacentVertices
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ed015c
	// Params: [ Num(2) Size(0x18) ]
	void GetVertexAdjacentVertices(struct FVertexID VertexID, struct TArray<struct FVertexID>& OutAdjacentVertexIDs);

	// Object: Function EditableMesh.EditableMesh.GetTextureCoordinateCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ed0128
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetTextureCoordinateCount();

	// Object: Function EditableMesh.EditableMesh.GetSubdivisionLimitData
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ed004c
	// Params: [ Num(1) Size(0x30) ]
	struct FSubdivisionLimitData GetSubdivisionLimitData();

	// Object: Function EditableMesh.EditableMesh.GetSubdivisionCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ed0018
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetSubdivisionCount();

	// Object: Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ecff64
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetPolygonTriangulatedTriangleCount(struct FPolygonID PolygonID);

	// Object: Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ecfe78
	// Params: [ Num(3) Size(0xC) ]
	struct FTriangleID GetPolygonTriangulatedTriangle(struct FPolygonID PolygonID, int32_t PolygonTriangleNumber);

	// Object: Function EditableMesh.EditableMesh.GetPolygonPerimeterVertices
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ecfd78
	// Params: [ Num(2) Size(0x18) ]
	void GetPolygonPerimeterVertices(struct FPolygonID PolygonID, struct TArray<struct FVertexID>& OutPolygonPerimeterVertexIDs);

	// Object: Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ecfc78
	// Params: [ Num(2) Size(0x18) ]
	void GetPolygonPerimeterVertexInstances(struct FPolygonID PolygonID, struct TArray<struct FVertexInstanceID>& OutPolygonPerimeterVertexInstanceIDs);

	// Object: Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ecfb8c
	// Params: [ Num(3) Size(0xC) ]
	struct FVertexInstanceID GetPolygonPerimeterVertexInstance(struct FPolygonID PolygonID, int32_t PolygonVertexNumber);

	// Object: Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ecfad8
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetPolygonPerimeterVertexCount(struct FPolygonID PolygonID);

	// Object: Function EditableMesh.EditableMesh.GetPolygonPerimeterVertex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ecf9ec
	// Params: [ Num(3) Size(0xC) ]
	struct FVertexID GetPolygonPerimeterVertex(struct FPolygonID PolygonID, int32_t PolygonVertexNumber);

	// Object: Function EditableMesh.EditableMesh.GetPolygonPerimeterEdges
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ecf8ec
	// Params: [ Num(2) Size(0x18) ]
	void GetPolygonPerimeterEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OutPolygonPerimeterEdgeIDs);

	// Object: Function EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ecf838
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetPolygonPerimeterEdgeCount(struct FPolygonID PolygonID);

	// Object: Function EditableMesh.EditableMesh.GetPolygonPerimeterEdge
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ecf6fc
	// Params: [ Num(4) Size(0x10) ]
	struct FEdgeID GetPolygonPerimeterEdge(struct FPolygonID PolygonID, int32_t PerimeterEdgeNumber, uint8_t& bOutEdgeWindingIsReversedForPolygon);

	// Object: Function EditableMesh.EditableMesh.GetPolygonInGroup
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ecf610
	// Params: [ Num(3) Size(0xC) ]
	struct FPolygonID GetPolygonInGroup(struct FPolygonGroupID PolygonGroupID, int32_t PolygonNumber);

	// Object: Function EditableMesh.EditableMesh.GetPolygonGroupCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ecf5dc
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetPolygonGroupCount();

	// Object: Function EditableMesh.EditableMesh.GetPolygonCountInGroup
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ecf528
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetPolygonCountInGroup(struct FPolygonGroupID PolygonGroupID);

	// Object: Function EditableMesh.EditableMesh.GetPolygonCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ecf4f4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetPolygonCount();

	// Object: Function EditableMesh.EditableMesh.GetPolygonAdjacentPolygons
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ecf3f4
	// Params: [ Num(2) Size(0x18) ]
	void GetPolygonAdjacentPolygons(struct FPolygonID PolygonID, struct TArray<struct FPolygonID>& OutAdjacentPolygons);

	// Object: Function EditableMesh.EditableMesh.GetGroupForPolygon
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ecf340
	// Params: [ Num(2) Size(0x8) ]
	struct FPolygonGroupID GetGroupForPolygon(struct FPolygonID PolygonID);

	// Object: Function EditableMesh.EditableMesh.GetFirstValidPolygonGroup
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ecf30c
	// Params: [ Num(1) Size(0x4) ]
	struct FPolygonGroupID GetFirstValidPolygonGroup();

	// Object: Function EditableMesh.EditableMesh.GetEdgeVertices
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ecf1c0
	// Params: [ Num(3) Size(0xC) ]
	void GetEdgeVertices(struct FEdgeID EdgeID, struct FVertexID& OutEdgeVertexID0, struct FVertexID& OutEdgeVertexID1);

	// Object: Function EditableMesh.EditableMesh.GetEdgeVertex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ecf0d4
	// Params: [ Num(3) Size(0xC) ]
	struct FVertexID GetEdgeVertex(struct FEdgeID EdgeID, int32_t EdgeVertexNumber);

	// Object: Function EditableMesh.EditableMesh.GetEdgeThatConnectsVertices
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ecefdc
	// Params: [ Num(3) Size(0xC) ]
	struct FEdgeID GetEdgeThatConnectsVertices(struct FVertexID VertexID0, struct FVertexID VertexID1);

	// Object: Function EditableMesh.EditableMesh.GetEdgeLoopElements
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8eceedc
	// Params: [ Num(2) Size(0x18) ]
	void GetEdgeLoopElements(struct FEdgeID EdgeID, struct TArray<struct FEdgeID>& EdgeLoopIDs);

	// Object: Function EditableMesh.EditableMesh.GetEdgeCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8eceea8
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetEdgeCount();

	// Object: Function EditableMesh.EditableMesh.GetEdgeConnectedPolygons
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8eceda8
	// Params: [ Num(2) Size(0x18) ]
	void GetEdgeConnectedPolygons(struct FEdgeID EdgeID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs);

	// Object: Function EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ececf4
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetEdgeConnectedPolygonCount(struct FEdgeID EdgeID);

	// Object: Function EditableMesh.EditableMesh.GetEdgeConnectedPolygon
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ecec08
	// Params: [ Num(3) Size(0xC) ]
	struct FPolygonID GetEdgeConnectedPolygon(struct FEdgeID EdgeID, int32_t ConnectedPolygonNumber);

	// Object: Function EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8eceb4c
	// Params: [ Num(1) Size(0x10) ]
	void GeneratePolygonTangentsAndNormals(const struct TArray<struct FPolygonID>& PolygonIDs);

	// Object: Function EditableMesh.EditableMesh.FlipPolygons
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ecea90
	// Params: [ Num(1) Size(0x10) ]
	void FlipPolygons(const struct TArray<struct FPolygonID>& PolygonIDs);

	// Object: Function EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ece998
	// Params: [ Num(3) Size(0xC) ]
	int32_t FindPolygonPerimeterVertexNumberForVertex(struct FPolygonID PolygonID, struct FVertexID VertexID);

	// Object: Function EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ece860
	// Params: [ Num(4) Size(0x10) ]
	int32_t FindPolygonPerimeterEdgeNumberForVertices(struct FPolygonID PolygonID, struct FVertexID EdgeVertexID0, struct FVertexID EdgeVertexID1);

	// Object: Function EditableMesh.EditableMesh.FindPolygonLoop
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ece65c
	// Params: [ Num(5) Size(0x48) ]
	void FindPolygonLoop(struct FEdgeID EdgeID, struct TArray<struct FEdgeID>& OutEdgeLoopEdgeIDs, struct TArray<struct FEdgeID>& OutFlippedEdgeIDs, struct TArray<struct FEdgeID>& OutReversedEdgeIDPathToTake, struct TArray<struct FPolygonID>& OutPolygonIDsToSplit);

	// Object: Function EditableMesh.EditableMesh.ExtrudePolygons
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ece4c4
	// Params: [ Num(4) Size(0x28) ]
	void ExtrudePolygons(const struct TArray<struct FPolygonID>& Polygons, float ExtrudeDistance, uint8_t bKeepNeighborsTogether, struct TArray<struct FPolygonID>& OutNewExtrudedFrontPolygons);

	// Object: Function EditableMesh.EditableMesh.ExtendVertices
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x8ece32c
	// Params: [ Num(4) Size(0x30) ]
	void ExtendVertices(const struct TArray<struct FVertexID>& VertexIDs, uint8_t bOnlyExtendClosestEdge, struct FVector ReferencePosition, struct TArray<struct FVertexID>& OutNewExtendedVertexIDs);

	// Object: Function EditableMesh.EditableMesh.ExtendEdges
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ece1d0
	// Params: [ Num(3) Size(0x28) ]
	void ExtendEdges(const struct TArray<struct FEdgeID>& EdgeIDs, uint8_t bWeldNeighbors, struct TArray<struct FEdgeID>& OutNewExtendedEdgeIDs);

	// Object: Function EditableMesh.EditableMesh.EndModification
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ece124
	// Params: [ Num(1) Size(0x1) ]
	void EndModification(uint8_t bFromUndo);

	// Object: Function EditableMesh.EditableMesh.DeleteVertexInstances
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ece024
	// Params: [ Num(2) Size(0x11) ]
	void DeleteVertexInstances(const struct TArray<struct FVertexInstanceID>& VertexInstanceIDsToDelete, uint8_t bDeleteOrphanedVertices);

	// Object: Function EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ecde60
	// Params: [ Num(5) Size(0x8) ]
	void DeleteVertexAndConnectedEdgesAndPolygons(struct FVertexID VertexID, uint8_t bDeleteOrphanedEdges, uint8_t bDeleteOrphanedVertices, uint8_t bDeleteOrphanedVertexInstances, uint8_t bDeleteEmptyPolygonGroups);

	// Object: Function EditableMesh.EditableMesh.DeletePolygons
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ecdc84
	// Params: [ Num(5) Size(0x14) ]
	void DeletePolygons(const struct TArray<struct FPolygonID>& PolygonIDsToDelete, uint8_t bDeleteOrphanedEdges, uint8_t bDeleteOrphanedVertices, uint8_t bDeleteOrphanedVertexInstances, uint8_t bDeleteEmptyPolygonGroups);

	// Object: Function EditableMesh.EditableMesh.DeletePolygonGroups
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ecdbc8
	// Params: [ Num(1) Size(0x10) ]
	void DeletePolygonGroups(const struct TArray<struct FPolygonGroupID>& PolygonGroupIDs);

	// Object: Function EditableMesh.EditableMesh.DeleteOrphanVertices
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ecdb0c
	// Params: [ Num(1) Size(0x10) ]
	void DeleteOrphanVertices(const struct TArray<struct FVertexID>& VertexIDsToDelete);

	// Object: Function EditableMesh.EditableMesh.DeleteEdges
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ecda0c
	// Params: [ Num(2) Size(0x11) ]
	void DeleteEdges(const struct TArray<struct FEdgeID>& EdgeIDsToDelete, uint8_t bDeleteOrphanedVertices);

	// Object: Function EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ecd848
	// Params: [ Num(5) Size(0x8) ]
	void DeleteEdgeAndConnectedPolygons(struct FEdgeID EdgeID, uint8_t bDeleteOrphanedEdges, uint8_t bDeleteOrphanedVertices, uint8_t bDeleteOrphanedVertexInstances, uint8_t bDeleteEmptyPolygonGroups);

	// Object: Function EditableMesh.EditableMesh.CreateVertices
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ecd738
	// Params: [ Num(2) Size(0x20) ]
	void CreateVertices(const struct TArray<struct FVertexToCreate>& VerticesToCreate, struct TArray<struct FVertexID>& OutNewVertexIDs);

	// Object: Function EditableMesh.EditableMesh.CreateVertexInstances
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ecd628
	// Params: [ Num(2) Size(0x20) ]
	void CreateVertexInstances(const struct TArray<struct FVertexInstanceToCreate>& VertexInstancesToCreate, struct TArray<struct FVertexInstanceID>& OutNewVertexInstanceIDs);

	// Object: Function EditableMesh.EditableMesh.CreatePolygons
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ecd4bc
	// Params: [ Num(3) Size(0x30) ]
	void CreatePolygons(const struct TArray<struct FPolygonToCreate>& PolygonsToCreate, struct TArray<struct FPolygonID>& OutNewPolygonIDs, struct TArray<struct FEdgeID>& OutNewEdgeIDs);

	// Object: Function EditableMesh.EditableMesh.CreatePolygonGroups
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ecd3ac
	// Params: [ Num(2) Size(0x20) ]
	void CreatePolygonGroups(const struct TArray<struct FPolygonGroupToCreate>& PolygonGroupsToCreate, struct TArray<struct FPolygonGroupID>& OutNewPolygonGroupIDs);

	// Object: Function EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ecd2ac
	// Params: [ Num(2) Size(0x18) ]
	void CreateMissingPolygonPerimeterEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OutNewEdgeIDs);

	// Object: Function EditableMesh.EditableMesh.CreateEmptyVertexRange
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ecd1b4
	// Params: [ Num(2) Size(0x18) ]
	void CreateEmptyVertexRange(int32_t NumVerticesToCreate, struct TArray<struct FVertexID>& OutNewVertexIDs);

	// Object: Function EditableMesh.EditableMesh.CreateEdges
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ecd0a4
	// Params: [ Num(2) Size(0x20) ]
	void CreateEdges(const struct TArray<struct FEdgeToCreate>& EdgesToCreate, struct TArray<struct FEdgeID>& OutNewEdgeIDs);

	// Object: Function EditableMesh.EditableMesh.ComputePolygonsSharedEdges
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8eccf94
	// Params: [ Num(2) Size(0x20) ]
	void ComputePolygonsSharedEdges(const struct TArray<struct FPolygonID>& PolygonIDs, struct TArray<struct FEdgeID>& OutSharedEdgeIDs);

	// Object: Function EditableMesh.EditableMesh.ComputePolygonPlane
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8eccedc
	// Params: [ Num(2) Size(0x20) ]
	struct FPlane ComputePolygonPlane(struct FPolygonID PolygonID);

	// Object: Function EditableMesh.EditableMesh.ComputePolygonNormal
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ecce24
	// Params: [ Num(2) Size(0x10) ]
	struct FVector ComputePolygonNormal(struct FPolygonID PolygonID);

	// Object: Function EditableMesh.EditableMesh.ComputePolygonCenter
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8eccd6c
	// Params: [ Num(2) Size(0x10) ]
	struct FVector ComputePolygonCenter(struct FPolygonID PolygonID);

	// Object: Function EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8eccd00
	// Params: [ Num(1) Size(0x1C) ]
	struct FBoxSphereBounds ComputeBoundingBoxAndSphere();

	// Object: Function EditableMesh.EditableMesh.ComputeBoundingBox
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8eccc94
	// Params: [ Num(1) Size(0x1C) ]
	struct FBox ComputeBoundingBox();

	// Object: Function EditableMesh.EditableMesh.CommitInstance
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8eccbe8
	// Params: [ Num(2) Size(0x10) ]
	struct UEditableMesh* CommitInstance(struct UPrimitiveComponent* ComponentToInstanceTo);

	// Object: Function EditableMesh.EditableMesh.Commit
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8eccbd4
	// Params: [ Num(0) Size(0x0) ]
	void Commit();

	// Object: Function EditableMesh.EditableMesh.ChangePolygonsVertexInstances
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8eccb18
	// Params: [ Num(1) Size(0x10) ]
	void ChangePolygonsVertexInstances(const struct TArray<struct FChangeVertexInstancesForPolygon>& VertexInstancesForPolygons);

	// Object: Function EditableMesh.EditableMesh.BevelPolygons
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ecc934
	// Params: [ Num(5) Size(0x38) ]
	void BevelPolygons(const struct TArray<struct FPolygonID>& PolygonIDs, float BevelFixedDistance, float BevelProgressTowardCenter, struct TArray<struct FPolygonID>& OutNewCenterPolygonIDs, struct TArray<struct FPolygonID>& OutNewSidePolygonIDs);

	// Object: Function EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ecc834
	// Params: [ Num(2) Size(0x11) ]
	void AssignPolygonsToPolygonGroups(const struct TArray<struct FPolygonGroupForPolygon>& PolygonGroupForPolygons, uint8_t bDeleteOrphanedPolygonGroups);

	// Object: Function EditableMesh.EditableMesh.AnyChangesToUndo
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ecc7fc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t AnyChangesToUndo();
	DEFINE_UE_CLASS_HELPERS(UEditableMesh, "EditableMesh")

};

// Object: Class EditableMesh.EditableMeshFactory
// Size: 0x28 (Inherited: 0x28)
struct UEditableMeshFactory : UObject
{

	// Object: Function EditableMesh.EditableMeshFactory.MakeEditableMesh
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ed45fc
	// Params: [ Num(3) Size(0x18) ]
	static struct UEditableMesh* MakeEditableMesh(struct UPrimitiveComponent* PrimitiveComponent, int32_t LodIndex);
	DEFINE_UE_CLASS_HELPERS(UEditableMeshFactory, "EditableMeshFactory")

};

// Object: Class EditableMesh.EditableStaticMeshAdapter
// Size: 0xE0 (Inherited: 0x28)
struct UEditableStaticMeshAdapter : UEditableMeshAdapter
{
	struct UStaticMesh* StaticMesh; // 0x28(0x8)
	struct UStaticMesh* OriginalStaticMesh; // 0x30(0x8)
	int32_t StaticMeshLODIndex; // 0x38(0x4)
	uint8_t Pad_0x3C[0xA4]; // 0x3C(0xA4)
	DEFINE_UE_CLASS_HELPERS(UEditableStaticMeshAdapter, "EditableStaticMeshAdapter")

};

} // namespace SDK
