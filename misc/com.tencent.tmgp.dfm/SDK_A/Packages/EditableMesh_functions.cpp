#include "EditableMesh.hpp"
#include "Engine.hpp"
#include "MeshDescription.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UEditableMesh::* ----
void UEditableMesh::WeldVertices(const struct TArray<struct FVertexID>& VertexIDs, struct FVertexID& OutNewVertexID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "WeldVertices");
    struct
    {
        struct TArray<struct FVertexID> VertexIDs;
        struct FVertexID OutNewVertexID;
    } Parms{};
    Parms.VertexIDs = (struct TArray<struct FVertexID>)VertexIDs;
    this->ProcessEvent(Func, &Parms);
    OutNewVertexID = Parms.OutNewVertexID;
}

void UEditableMesh::TryToRemoveVertex(struct FVertexID VertexID, uint8_t& bOutWasVertexRemoved, struct FEdgeID& OutNewEdgeID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "TryToRemoveVertex");
    struct
    {
        struct FVertexID VertexID;
        uint8_t bOutWasVertexRemoved;
        struct FEdgeID OutNewEdgeID;
    } Parms{};
    Parms.VertexID = (struct FVertexID)VertexID;
    this->ProcessEvent(Func, &Parms);
    bOutWasVertexRemoved = Parms.bOutWasVertexRemoved;
    OutNewEdgeID = Parms.OutNewEdgeID;
}

void UEditableMesh::TryToRemovePolygonEdge(struct FEdgeID EdgeID, uint8_t& bOutWasEdgeRemoved, struct FPolygonID& OutNewPolygonID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "TryToRemovePolygonEdge");
    struct
    {
        struct FEdgeID EdgeID;
        uint8_t bOutWasEdgeRemoved;
        struct FPolygonID OutNewPolygonID;
    } Parms{};
    Parms.EdgeID = (struct FEdgeID)EdgeID;
    this->ProcessEvent(Func, &Parms);
    bOutWasEdgeRemoved = Parms.bOutWasEdgeRemoved;
    OutNewPolygonID = Parms.OutNewPolygonID;
}

void UEditableMesh::TriangulatePolygons(const struct TArray<struct FPolygonID>& PolygonIDs, struct TArray<struct FPolygonID>& OutNewTrianglePolygons)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "TriangulatePolygons");
    struct
    {
        struct TArray<struct FPolygonID> PolygonIDs;
        struct TArray<struct FPolygonID> OutNewTrianglePolygons;
    } Parms{};
    Parms.PolygonIDs = (struct TArray<struct FPolygonID>)PolygonIDs;
    this->ProcessEvent(Func, &Parms);
    OutNewTrianglePolygons = Parms.OutNewTrianglePolygons;
}

void UEditableMesh::TessellatePolygons(const struct TArray<struct FPolygonID>& PolygonIDs, ETriangleTessellationMode TriangleTessellationMode, struct TArray<struct FPolygonID>& OutNewPolygonIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "TessellatePolygons");
    struct
    {
        struct TArray<struct FPolygonID> PolygonIDs;
        enum ETriangleTessellationMode TriangleTessellationMode;
        struct TArray<struct FPolygonID> OutNewPolygonIDs;
    } Parms{};
    Parms.PolygonIDs = (struct TArray<struct FPolygonID>)PolygonIDs;
    Parms.TriangleTessellationMode = (enum ETriangleTessellationMode)TriangleTessellationMode;
    this->ProcessEvent(Func, &Parms);
    OutNewPolygonIDs = Parms.OutNewPolygonIDs;
}

void UEditableMesh::StartModification(EMeshModificationType MeshModificationType, EMeshTopologyChange MeshTopologyChange)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "StartModification");
    struct
    {
        enum EMeshModificationType MeshModificationType;
        enum EMeshTopologyChange MeshTopologyChange;
    } Parms{};
    Parms.MeshModificationType = (enum EMeshModificationType)MeshModificationType;
    Parms.MeshTopologyChange = (enum EMeshTopologyChange)MeshTopologyChange;
    this->ProcessEvent(Func, &Parms);
}

void UEditableMesh::SplitPolygons(const struct TArray<struct FPolygonToSplit>& PolygonsToSplit, struct TArray<struct FEdgeID>& OutNewEdgeIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "SplitPolygons");
    struct
    {
        struct TArray<struct FPolygonToSplit> PolygonsToSplit;
        struct TArray<struct FEdgeID> OutNewEdgeIDs;
    } Parms{};
    Parms.PolygonsToSplit = (struct TArray<struct FPolygonToSplit>)PolygonsToSplit;
    this->ProcessEvent(Func, &Parms);
    OutNewEdgeIDs = Parms.OutNewEdgeIDs;
}

void UEditableMesh::SplitPolygonalMesh(const struct FPlane& InPlane, struct TArray<struct FPolygonID>& PolygonIDs1, struct TArray<struct FPolygonID>& PolygonIDs2, struct TArray<struct FEdgeID>& BoundaryIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "SplitPolygonalMesh");
    struct
    {
        struct FPlane InPlane;
        struct TArray<struct FPolygonID> PolygonIDs1;
        struct TArray<struct FPolygonID> PolygonIDs2;
        struct TArray<struct FEdgeID> BoundaryIDs;
    } Parms{};
    Parms.InPlane = (struct FPlane)InPlane;
    this->ProcessEvent(Func, &Parms);
    PolygonIDs1 = Parms.PolygonIDs1;
    PolygonIDs2 = Parms.PolygonIDs2;
    BoundaryIDs = Parms.BoundaryIDs;
}

void UEditableMesh::SplitEdge(struct FEdgeID EdgeID, const struct TArray<float>& Splits, struct TArray<struct FVertexID>& OutNewVertexIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "SplitEdge");
    struct
    {
        struct FEdgeID EdgeID;
        struct TArray<float> Splits;
        struct TArray<struct FVertexID> OutNewVertexIDs;
    } Parms{};
    Parms.EdgeID = (struct FEdgeID)EdgeID;
    Parms.Splits = (struct TArray<float>)Splits;
    this->ProcessEvent(Func, &Parms);
    OutNewVertexIDs = Parms.OutNewVertexIDs;
}

void UEditableMesh::SetVerticesCornerSharpness(const struct TArray<struct FVertexID>& VertexIDs, const struct TArray<float>& VerticesNewCornerSharpness)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "SetVerticesCornerSharpness");
    struct
    {
        struct TArray<struct FVertexID> VertexIDs;
        struct TArray<float> VerticesNewCornerSharpness;
    } Parms{};
    Parms.VertexIDs = (struct TArray<struct FVertexID>)VertexIDs;
    Parms.VerticesNewCornerSharpness = (struct TArray<float>)VerticesNewCornerSharpness;
    this->ProcessEvent(Func, &Parms);
}

void UEditableMesh::SetVerticesAttributes(const struct TArray<struct FAttributesForVertex>& AttributesForVertices)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "SetVerticesAttributes");
    struct
    {
        struct TArray<struct FAttributesForVertex> AttributesForVertices;
    } Parms{};
    Parms.AttributesForVertices = (struct TArray<struct FAttributesForVertex>)AttributesForVertices;
    this->ProcessEvent(Func, &Parms);
}

void UEditableMesh::SetVertexInstancesAttributes(const struct TArray<struct FAttributesForVertexInstance>& AttributesForVertexInstances)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "SetVertexInstancesAttributes");
    struct
    {
        struct TArray<struct FAttributesForVertexInstance> AttributesForVertexInstances;
    } Parms{};
    Parms.AttributesForVertexInstances = (struct TArray<struct FAttributesForVertexInstance>)AttributesForVertexInstances;
    this->ProcessEvent(Func, &Parms);
}

void UEditableMesh::SetTextureCoordinateCount(int32_t NumTexCoords)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "SetTextureCoordinateCount");
    struct
    {
        int32_t NumTexCoords;
    } Parms{};
    Parms.NumTexCoords = (int32_t)NumTexCoords;
    this->ProcessEvent(Func, &Parms);
}

void UEditableMesh::SetSubdivisionCount(int32_t NewSubdivisionCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "SetSubdivisionCount");
    struct
    {
        int32_t NewSubdivisionCount;
    } Parms{};
    Parms.NewSubdivisionCount = (int32_t)NewSubdivisionCount;
    this->ProcessEvent(Func, &Parms);
}

void UEditableMesh::SetPolygonsVertexAttributes(const struct TArray<struct FVertexAttributesForPolygon>& VertexAttributesForPolygons)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "SetPolygonsVertexAttributes");
    struct
    {
        struct TArray<struct FVertexAttributesForPolygon> VertexAttributesForPolygons;
    } Parms{};
    Parms.VertexAttributesForPolygons = (struct TArray<struct FVertexAttributesForPolygon>)VertexAttributesForPolygons;
    this->ProcessEvent(Func, &Parms);
}

void UEditableMesh::SetEdgesHardnessAutomatically(const struct TArray<struct FEdgeID>& EdgeIDs, float MaxDotProductForSoftEdge)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "SetEdgesHardnessAutomatically");
    struct
    {
        struct TArray<struct FEdgeID> EdgeIDs;
        float MaxDotProductForSoftEdge;
    } Parms{};
    Parms.EdgeIDs = (struct TArray<struct FEdgeID>)EdgeIDs;
    Parms.MaxDotProductForSoftEdge = (float)MaxDotProductForSoftEdge;
    this->ProcessEvent(Func, &Parms);
}

void UEditableMesh::SetEdgesHardness(const struct TArray<struct FEdgeID>& EdgeIDs, const struct TArray<uint8_t>& EdgesNewIsHard)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "SetEdgesHardness");
    struct
    {
        struct TArray<struct FEdgeID> EdgeIDs;
        struct TArray<uint8_t> EdgesNewIsHard;
    } Parms{};
    Parms.EdgeIDs = (struct TArray<struct FEdgeID>)EdgeIDs;
    Parms.EdgesNewIsHard = (struct TArray<uint8_t>)EdgesNewIsHard;
    this->ProcessEvent(Func, &Parms);
}

void UEditableMesh::SetEdgesCreaseSharpness(const struct TArray<struct FEdgeID>& EdgeIDs, const struct TArray<float>& EdgesNewCreaseSharpness)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "SetEdgesCreaseSharpness");
    struct
    {
        struct TArray<struct FEdgeID> EdgeIDs;
        struct TArray<float> EdgesNewCreaseSharpness;
    } Parms{};
    Parms.EdgeIDs = (struct TArray<struct FEdgeID>)EdgeIDs;
    Parms.EdgesNewCreaseSharpness = (struct TArray<float>)EdgesNewCreaseSharpness;
    this->ProcessEvent(Func, &Parms);
}

void UEditableMesh::SetEdgesAttributes(const struct TArray<struct FAttributesForEdge>& AttributesForEdges)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "SetEdgesAttributes");
    struct
    {
        struct TArray<struct FAttributesForEdge> AttributesForEdges;
    } Parms{};
    Parms.AttributesForEdges = (struct TArray<struct FAttributesForEdge>)AttributesForEdges;
    this->ProcessEvent(Func, &Parms);
}

void UEditableMesh::SetAllowUndo(uint8_t bInAllowUndo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "SetAllowUndo");
    struct
    {
        uint8_t bInAllowUndo;
    } Parms{};
    Parms.bInAllowUndo = (uint8_t)bInAllowUndo;
    this->ProcessEvent(Func, &Parms);
}

void UEditableMesh::SetAllowSpatialDatabase(uint8_t bInAllowSpatialDatabase)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "SetAllowSpatialDatabase");
    struct
    {
        uint8_t bInAllowSpatialDatabase;
    } Parms{};
    Parms.bInAllowSpatialDatabase = (uint8_t)bInAllowSpatialDatabase;
    this->ProcessEvent(Func, &Parms);
}

void UEditableMesh::SetAllowCompact(uint8_t bInAllowCompact)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "SetAllowCompact");
    struct
    {
        uint8_t bInAllowCompact;
    } Parms{};
    Parms.bInAllowCompact = (uint8_t)bInAllowCompact;
    this->ProcessEvent(Func, &Parms);
}

void UEditableMesh::SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(const struct FPlane& InPlane, struct TArray<struct FPolygonID>& OutPolygons)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane");
    struct
    {
        struct FPlane InPlane;
        struct TArray<struct FPolygonID> OutPolygons;
    } Parms{};
    Parms.InPlane = (struct FPlane)InPlane;
    this->ProcessEvent(Func, &Parms);
    OutPolygons = Parms.OutPolygons;
}

void UEditableMesh::SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(struct FVector LineSegmentStart, struct FVector LineSegmentEnd, struct TArray<struct FPolygonID>& OutPolygons)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment");
    struct
    {
        struct FVector LineSegmentStart;
        struct FVector LineSegmentEnd;
        struct TArray<struct FPolygonID> OutPolygons;
    } Parms{};
    Parms.LineSegmentStart = (struct FVector)LineSegmentStart;
    Parms.LineSegmentEnd = (struct FVector)LineSegmentEnd;
    this->ProcessEvent(Func, &Parms);
    OutPolygons = Parms.OutPolygons;
}

void UEditableMesh::SearchSpatialDatabaseForPolygonsInVolume(const struct TArray<struct FPlane>& Planes, struct TArray<struct FPolygonID>& OutPolygons)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "SearchSpatialDatabaseForPolygonsInVolume");
    struct
    {
        struct TArray<struct FPlane> Planes;
        struct TArray<struct FPolygonID> OutPolygons;
    } Parms{};
    Parms.Planes = (struct TArray<struct FPlane>)Planes;
    this->ProcessEvent(Func, &Parms);
    OutPolygons = Parms.OutPolygons;
}

struct UEditableMesh* UEditableMesh::RevertInstance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "RevertInstance");
    struct
    {
        struct UEditableMesh* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UEditableMesh::Revert()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "Revert");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UEditableMesh::RebuildRenderMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "RebuildRenderMesh");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UEditableMesh::QuadrangulateMesh(struct TArray<struct FPolygonID>& OutNewPolygonIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "QuadrangulateMesh");
    struct
    {
        struct TArray<struct FPolygonID> OutNewPolygonIDs;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutNewPolygonIDs = Parms.OutNewPolygonIDs;
}

void UEditableMesh::PropagateInstanceChanges()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "PropagateInstanceChanges");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UEditableMesh::MoveVertices(const struct TArray<struct FVertexToMove>& VerticesToMove)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "MoveVertices");
    struct
    {
        struct TArray<struct FVertexToMove> VerticesToMove;
    } Parms{};
    Parms.VerticesToMove = (struct TArray<struct FVertexToMove>)VerticesToMove;
    this->ProcessEvent(Func, &Parms);
}

struct FVertexID UEditableMesh::MakeVertexID(int32_t VertexIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("EditableMesh", "MakeVertexID");
    struct
    {
        int32_t VertexIndex;
        struct FVertexID ReturnValue;
    } Parms{};
    Parms.VertexIndex = (int32_t)VertexIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FPolygonID UEditableMesh::MakePolygonID(int32_t PolygonIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("EditableMesh", "MakePolygonID");
    struct
    {
        int32_t PolygonIndex;
        struct FPolygonID ReturnValue;
    } Parms{};
    Parms.PolygonIndex = (int32_t)PolygonIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FPolygonGroupID UEditableMesh::MakePolygonGroupID(int32_t PolygonGroupIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("EditableMesh", "MakePolygonGroupID");
    struct
    {
        int32_t PolygonGroupIndex;
        struct FPolygonGroupID ReturnValue;
    } Parms{};
    Parms.PolygonGroupIndex = (int32_t)PolygonGroupIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FEdgeID UEditableMesh::MakeEdgeID(int32_t EdgeIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("EditableMesh", "MakeEdgeID");
    struct
    {
        int32_t EdgeIndex;
        struct FEdgeID ReturnValue;
    } Parms{};
    Parms.EdgeIndex = (int32_t)EdgeIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UEditableMesh::IsValidVertex(struct FVertexID VertexID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "IsValidVertex");
    struct
    {
        struct FVertexID VertexID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.VertexID = (struct FVertexID)VertexID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UEditableMesh::IsValidPolygonGroup(struct FPolygonGroupID PolygonGroupID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "IsValidPolygonGroup");
    struct
    {
        struct FPolygonGroupID PolygonGroupID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PolygonGroupID = (struct FPolygonGroupID)PolygonGroupID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UEditableMesh::IsValidPolygon(struct FPolygonID PolygonID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "IsValidPolygon");
    struct
    {
        struct FPolygonID PolygonID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UEditableMesh::IsValidEdge(struct FEdgeID EdgeID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "IsValidEdge");
    struct
    {
        struct FEdgeID EdgeID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.EdgeID = (struct FEdgeID)EdgeID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UEditableMesh::IsUndoAllowed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "IsUndoAllowed");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UEditableMesh::IsSpatialDatabaseAllowed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "IsSpatialDatabaseAllowed");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UEditableMesh::IsPreviewingSubdivisions()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "IsPreviewingSubdivisions");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UEditableMesh::IsOrphanedVertex(struct FVertexID VertexID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "IsOrphanedVertex");
    struct
    {
        struct FVertexID VertexID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.VertexID = (struct FVertexID)VertexID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UEditableMesh::IsCompactAllowed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "IsCompactAllowed");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UEditableMesh::IsCommittedAsInstance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "IsCommittedAsInstance");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UEditableMesh::IsCommitted()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "IsCommitted");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UEditableMesh::IsBeingModified()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "IsBeingModified");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVertexID UEditableMesh::InvalidVertexID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("EditableMesh", "InvalidVertexID");
    struct
    {
        struct FVertexID ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FPolygonID UEditableMesh::InvalidPolygonID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("EditableMesh", "InvalidPolygonID");
    struct
    {
        struct FPolygonID ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FPolygonGroupID UEditableMesh::InvalidPolygonGroupID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("EditableMesh", "InvalidPolygonGroupID");
    struct
    {
        struct FPolygonGroupID ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FEdgeID UEditableMesh::InvalidEdgeID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("EditableMesh", "InvalidEdgeID");
    struct
    {
        struct FEdgeID ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UEditableMesh::InsetPolygons(const struct TArray<struct FPolygonID>& PolygonIDs, float InsetFixedDistance, float InsetProgressTowardCenter, EInsetPolygonsMode Mode, struct TArray<struct FPolygonID>& OutNewCenterPolygonIDs, struct TArray<struct FPolygonID>& OutNewSidePolygonIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "InsetPolygons");
    struct
    {
        struct TArray<struct FPolygonID> PolygonIDs;
        float InsetFixedDistance;
        float InsetProgressTowardCenter;
        enum EInsetPolygonsMode Mode;
        struct TArray<struct FPolygonID> OutNewCenterPolygonIDs;
        struct TArray<struct FPolygonID> OutNewSidePolygonIDs;
    } Parms{};
    Parms.PolygonIDs = (struct TArray<struct FPolygonID>)PolygonIDs;
    Parms.InsetFixedDistance = (float)InsetFixedDistance;
    Parms.InsetProgressTowardCenter = (float)InsetProgressTowardCenter;
    Parms.Mode = (enum EInsetPolygonsMode)Mode;
    this->ProcessEvent(Func, &Parms);
    OutNewCenterPolygonIDs = Parms.OutNewCenterPolygonIDs;
    OutNewSidePolygonIDs = Parms.OutNewSidePolygonIDs;
}

void UEditableMesh::InsertEdgeLoop(struct FEdgeID EdgeID, const struct TArray<float>& Splits, struct TArray<struct FEdgeID>& OutNewEdgeIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "InsertEdgeLoop");
    struct
    {
        struct FEdgeID EdgeID;
        struct TArray<float> Splits;
        struct TArray<struct FEdgeID> OutNewEdgeIDs;
    } Parms{};
    Parms.EdgeID = (struct FEdgeID)EdgeID;
    Parms.Splits = (struct TArray<float>)Splits;
    this->ProcessEvent(Func, &Parms);
    OutNewEdgeIDs = Parms.OutNewEdgeIDs;
}

void UEditableMesh::InitializeAdapters()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "InitializeAdapters");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FEdgeID UEditableMesh::GetVertexPairEdge(struct FVertexID VertexID, struct FVertexID NextVertexID, uint8_t& bOutEdgeWindingIsReversed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetVertexPairEdge");
    struct
    {
        struct FVertexID VertexID;
        struct FVertexID NextVertexID;
        uint8_t bOutEdgeWindingIsReversed;
        struct FEdgeID ReturnValue;
    } Parms{};
    Parms.VertexID = (struct FVertexID)VertexID;
    Parms.NextVertexID = (struct FVertexID)NextVertexID;
    this->ProcessEvent(Func, &Parms);
    bOutEdgeWindingIsReversed = Parms.bOutEdgeWindingIsReversed;
    return Parms.ReturnValue;
}

struct FVertexID UEditableMesh::GetVertexInstanceVertex(struct FVertexInstanceID VertexInstanceID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetVertexInstanceVertex");
    struct
    {
        struct FVertexInstanceID VertexInstanceID;
        struct FVertexID ReturnValue;
    } Parms{};
    Parms.VertexInstanceID = (struct FVertexInstanceID)VertexInstanceID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UEditableMesh::GetVertexInstanceCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetVertexInstanceCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UEditableMesh::GetVertexInstanceConnectedPolygons(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetVertexInstanceConnectedPolygons");
    struct
    {
        struct FVertexInstanceID VertexInstanceID;
        struct TArray<struct FPolygonID> OutConnectedPolygonIDs;
    } Parms{};
    Parms.VertexInstanceID = (struct FVertexInstanceID)VertexInstanceID;
    this->ProcessEvent(Func, &Parms);
    OutConnectedPolygonIDs = Parms.OutConnectedPolygonIDs;
}

int32_t UEditableMesh::GetVertexInstanceConnectedPolygonCount(struct FVertexInstanceID VertexInstanceID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetVertexInstanceConnectedPolygonCount");
    struct
    {
        struct FVertexInstanceID VertexInstanceID;
        int32_t ReturnValue;
    } Parms{};
    Parms.VertexInstanceID = (struct FVertexInstanceID)VertexInstanceID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FPolygonID UEditableMesh::GetVertexInstanceConnectedPolygon(struct FVertexInstanceID VertexInstanceID, int32_t ConnectedPolygonNumber)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetVertexInstanceConnectedPolygon");
    struct
    {
        struct FVertexInstanceID VertexInstanceID;
        int32_t ConnectedPolygonNumber;
        struct FPolygonID ReturnValue;
    } Parms{};
    Parms.VertexInstanceID = (struct FVertexInstanceID)VertexInstanceID;
    Parms.ConnectedPolygonNumber = (int32_t)ConnectedPolygonNumber;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UEditableMesh::GetVertexCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetVertexCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UEditableMesh::GetVertexConnectedPolygons(struct FVertexID VertexID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetVertexConnectedPolygons");
    struct
    {
        struct FVertexID VertexID;
        struct TArray<struct FPolygonID> OutConnectedPolygonIDs;
    } Parms{};
    Parms.VertexID = (struct FVertexID)VertexID;
    this->ProcessEvent(Func, &Parms);
    OutConnectedPolygonIDs = Parms.OutConnectedPolygonIDs;
}

void UEditableMesh::GetVertexConnectedEdges(struct FVertexID VertexID, struct TArray<struct FEdgeID>& OutConnectedEdgeIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetVertexConnectedEdges");
    struct
    {
        struct FVertexID VertexID;
        struct TArray<struct FEdgeID> OutConnectedEdgeIDs;
    } Parms{};
    Parms.VertexID = (struct FVertexID)VertexID;
    this->ProcessEvent(Func, &Parms);
    OutConnectedEdgeIDs = Parms.OutConnectedEdgeIDs;
}

int32_t UEditableMesh::GetVertexConnectedEdgeCount(struct FVertexID VertexID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetVertexConnectedEdgeCount");
    struct
    {
        struct FVertexID VertexID;
        int32_t ReturnValue;
    } Parms{};
    Parms.VertexID = (struct FVertexID)VertexID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FEdgeID UEditableMesh::GetVertexConnectedEdge(struct FVertexID VertexID, int32_t ConnectedEdgeNumber)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetVertexConnectedEdge");
    struct
    {
        struct FVertexID VertexID;
        int32_t ConnectedEdgeNumber;
        struct FEdgeID ReturnValue;
    } Parms{};
    Parms.VertexID = (struct FVertexID)VertexID;
    Parms.ConnectedEdgeNumber = (int32_t)ConnectedEdgeNumber;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UEditableMesh::GetVertexAdjacentVertices(struct FVertexID VertexID, struct TArray<struct FVertexID>& OutAdjacentVertexIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetVertexAdjacentVertices");
    struct
    {
        struct FVertexID VertexID;
        struct TArray<struct FVertexID> OutAdjacentVertexIDs;
    } Parms{};
    Parms.VertexID = (struct FVertexID)VertexID;
    this->ProcessEvent(Func, &Parms);
    OutAdjacentVertexIDs = Parms.OutAdjacentVertexIDs;
}

int32_t UEditableMesh::GetTextureCoordinateCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetTextureCoordinateCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FSubdivisionLimitData UEditableMesh::GetSubdivisionLimitData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetSubdivisionLimitData");
    struct
    {
        struct FSubdivisionLimitData ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UEditableMesh::GetSubdivisionCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetSubdivisionCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UEditableMesh::GetPolygonTriangulatedTriangleCount(struct FPolygonID PolygonID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetPolygonTriangulatedTriangleCount");
    struct
    {
        struct FPolygonID PolygonID;
        int32_t ReturnValue;
    } Parms{};
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTriangleID UEditableMesh::GetPolygonTriangulatedTriangle(struct FPolygonID PolygonID, int32_t PolygonTriangleNumber)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetPolygonTriangulatedTriangle");
    struct
    {
        struct FPolygonID PolygonID;
        int32_t PolygonTriangleNumber;
        struct FTriangleID ReturnValue;
    } Parms{};
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    Parms.PolygonTriangleNumber = (int32_t)PolygonTriangleNumber;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UEditableMesh::GetPolygonPerimeterVertices(struct FPolygonID PolygonID, struct TArray<struct FVertexID>& OutPolygonPerimeterVertexIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetPolygonPerimeterVertices");
    struct
    {
        struct FPolygonID PolygonID;
        struct TArray<struct FVertexID> OutPolygonPerimeterVertexIDs;
    } Parms{};
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    this->ProcessEvent(Func, &Parms);
    OutPolygonPerimeterVertexIDs = Parms.OutPolygonPerimeterVertexIDs;
}

void UEditableMesh::GetPolygonPerimeterVertexInstances(struct FPolygonID PolygonID, struct TArray<struct FVertexInstanceID>& OutPolygonPerimeterVertexInstanceIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetPolygonPerimeterVertexInstances");
    struct
    {
        struct FPolygonID PolygonID;
        struct TArray<struct FVertexInstanceID> OutPolygonPerimeterVertexInstanceIDs;
    } Parms{};
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    this->ProcessEvent(Func, &Parms);
    OutPolygonPerimeterVertexInstanceIDs = Parms.OutPolygonPerimeterVertexInstanceIDs;
}

struct FVertexInstanceID UEditableMesh::GetPolygonPerimeterVertexInstance(struct FPolygonID PolygonID, int32_t PolygonVertexNumber)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetPolygonPerimeterVertexInstance");
    struct
    {
        struct FPolygonID PolygonID;
        int32_t PolygonVertexNumber;
        struct FVertexInstanceID ReturnValue;
    } Parms{};
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    Parms.PolygonVertexNumber = (int32_t)PolygonVertexNumber;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UEditableMesh::GetPolygonPerimeterVertexCount(struct FPolygonID PolygonID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetPolygonPerimeterVertexCount");
    struct
    {
        struct FPolygonID PolygonID;
        int32_t ReturnValue;
    } Parms{};
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVertexID UEditableMesh::GetPolygonPerimeterVertex(struct FPolygonID PolygonID, int32_t PolygonVertexNumber)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetPolygonPerimeterVertex");
    struct
    {
        struct FPolygonID PolygonID;
        int32_t PolygonVertexNumber;
        struct FVertexID ReturnValue;
    } Parms{};
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    Parms.PolygonVertexNumber = (int32_t)PolygonVertexNumber;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UEditableMesh::GetPolygonPerimeterEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OutPolygonPerimeterEdgeIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetPolygonPerimeterEdges");
    struct
    {
        struct FPolygonID PolygonID;
        struct TArray<struct FEdgeID> OutPolygonPerimeterEdgeIDs;
    } Parms{};
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    this->ProcessEvent(Func, &Parms);
    OutPolygonPerimeterEdgeIDs = Parms.OutPolygonPerimeterEdgeIDs;
}

int32_t UEditableMesh::GetPolygonPerimeterEdgeCount(struct FPolygonID PolygonID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetPolygonPerimeterEdgeCount");
    struct
    {
        struct FPolygonID PolygonID;
        int32_t ReturnValue;
    } Parms{};
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FEdgeID UEditableMesh::GetPolygonPerimeterEdge(struct FPolygonID PolygonID, int32_t PerimeterEdgeNumber, uint8_t& bOutEdgeWindingIsReversedForPolygon)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetPolygonPerimeterEdge");
    struct
    {
        struct FPolygonID PolygonID;
        int32_t PerimeterEdgeNumber;
        uint8_t bOutEdgeWindingIsReversedForPolygon;
        struct FEdgeID ReturnValue;
    } Parms{};
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    Parms.PerimeterEdgeNumber = (int32_t)PerimeterEdgeNumber;
    this->ProcessEvent(Func, &Parms);
    bOutEdgeWindingIsReversedForPolygon = Parms.bOutEdgeWindingIsReversedForPolygon;
    return Parms.ReturnValue;
}

struct FPolygonID UEditableMesh::GetPolygonInGroup(struct FPolygonGroupID PolygonGroupID, int32_t PolygonNumber)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetPolygonInGroup");
    struct
    {
        struct FPolygonGroupID PolygonGroupID;
        int32_t PolygonNumber;
        struct FPolygonID ReturnValue;
    } Parms{};
    Parms.PolygonGroupID = (struct FPolygonGroupID)PolygonGroupID;
    Parms.PolygonNumber = (int32_t)PolygonNumber;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UEditableMesh::GetPolygonGroupCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetPolygonGroupCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UEditableMesh::GetPolygonCountInGroup(struct FPolygonGroupID PolygonGroupID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetPolygonCountInGroup");
    struct
    {
        struct FPolygonGroupID PolygonGroupID;
        int32_t ReturnValue;
    } Parms{};
    Parms.PolygonGroupID = (struct FPolygonGroupID)PolygonGroupID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UEditableMesh::GetPolygonCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetPolygonCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UEditableMesh::GetPolygonAdjacentPolygons(struct FPolygonID PolygonID, struct TArray<struct FPolygonID>& OutAdjacentPolygons)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetPolygonAdjacentPolygons");
    struct
    {
        struct FPolygonID PolygonID;
        struct TArray<struct FPolygonID> OutAdjacentPolygons;
    } Parms{};
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    this->ProcessEvent(Func, &Parms);
    OutAdjacentPolygons = Parms.OutAdjacentPolygons;
}

struct FPolygonGroupID UEditableMesh::GetGroupForPolygon(struct FPolygonID PolygonID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetGroupForPolygon");
    struct
    {
        struct FPolygonID PolygonID;
        struct FPolygonGroupID ReturnValue;
    } Parms{};
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FPolygonGroupID UEditableMesh::GetFirstValidPolygonGroup()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetFirstValidPolygonGroup");
    struct
    {
        struct FPolygonGroupID ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UEditableMesh::GetEdgeVertices(struct FEdgeID EdgeID, struct FVertexID& OutEdgeVertexID0, struct FVertexID& OutEdgeVertexID1)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetEdgeVertices");
    struct
    {
        struct FEdgeID EdgeID;
        struct FVertexID OutEdgeVertexID0;
        struct FVertexID OutEdgeVertexID1;
    } Parms{};
    Parms.EdgeID = (struct FEdgeID)EdgeID;
    this->ProcessEvent(Func, &Parms);
    OutEdgeVertexID0 = Parms.OutEdgeVertexID0;
    OutEdgeVertexID1 = Parms.OutEdgeVertexID1;
}

struct FVertexID UEditableMesh::GetEdgeVertex(struct FEdgeID EdgeID, int32_t EdgeVertexNumber)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetEdgeVertex");
    struct
    {
        struct FEdgeID EdgeID;
        int32_t EdgeVertexNumber;
        struct FVertexID ReturnValue;
    } Parms{};
    Parms.EdgeID = (struct FEdgeID)EdgeID;
    Parms.EdgeVertexNumber = (int32_t)EdgeVertexNumber;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FEdgeID UEditableMesh::GetEdgeThatConnectsVertices(struct FVertexID VertexID0, struct FVertexID VertexID1)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetEdgeThatConnectsVertices");
    struct
    {
        struct FVertexID VertexID0;
        struct FVertexID VertexID1;
        struct FEdgeID ReturnValue;
    } Parms{};
    Parms.VertexID0 = (struct FVertexID)VertexID0;
    Parms.VertexID1 = (struct FVertexID)VertexID1;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UEditableMesh::GetEdgeLoopElements(struct FEdgeID EdgeID, struct TArray<struct FEdgeID>& EdgeLoopIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetEdgeLoopElements");
    struct
    {
        struct FEdgeID EdgeID;
        struct TArray<struct FEdgeID> EdgeLoopIDs;
    } Parms{};
    Parms.EdgeID = (struct FEdgeID)EdgeID;
    this->ProcessEvent(Func, &Parms);
    EdgeLoopIDs = Parms.EdgeLoopIDs;
}

int32_t UEditableMesh::GetEdgeCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetEdgeCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UEditableMesh::GetEdgeConnectedPolygons(struct FEdgeID EdgeID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetEdgeConnectedPolygons");
    struct
    {
        struct FEdgeID EdgeID;
        struct TArray<struct FPolygonID> OutConnectedPolygonIDs;
    } Parms{};
    Parms.EdgeID = (struct FEdgeID)EdgeID;
    this->ProcessEvent(Func, &Parms);
    OutConnectedPolygonIDs = Parms.OutConnectedPolygonIDs;
}

int32_t UEditableMesh::GetEdgeConnectedPolygonCount(struct FEdgeID EdgeID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetEdgeConnectedPolygonCount");
    struct
    {
        struct FEdgeID EdgeID;
        int32_t ReturnValue;
    } Parms{};
    Parms.EdgeID = (struct FEdgeID)EdgeID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FPolygonID UEditableMesh::GetEdgeConnectedPolygon(struct FEdgeID EdgeID, int32_t ConnectedPolygonNumber)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GetEdgeConnectedPolygon");
    struct
    {
        struct FEdgeID EdgeID;
        int32_t ConnectedPolygonNumber;
        struct FPolygonID ReturnValue;
    } Parms{};
    Parms.EdgeID = (struct FEdgeID)EdgeID;
    Parms.ConnectedPolygonNumber = (int32_t)ConnectedPolygonNumber;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UEditableMesh::GeneratePolygonTangentsAndNormals(const struct TArray<struct FPolygonID>& PolygonIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "GeneratePolygonTangentsAndNormals");
    struct
    {
        struct TArray<struct FPolygonID> PolygonIDs;
    } Parms{};
    Parms.PolygonIDs = (struct TArray<struct FPolygonID>)PolygonIDs;
    this->ProcessEvent(Func, &Parms);
}

void UEditableMesh::FlipPolygons(const struct TArray<struct FPolygonID>& PolygonIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "FlipPolygons");
    struct
    {
        struct TArray<struct FPolygonID> PolygonIDs;
    } Parms{};
    Parms.PolygonIDs = (struct TArray<struct FPolygonID>)PolygonIDs;
    this->ProcessEvent(Func, &Parms);
}

int32_t UEditableMesh::FindPolygonPerimeterVertexNumberForVertex(struct FPolygonID PolygonID, struct FVertexID VertexID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "FindPolygonPerimeterVertexNumberForVertex");
    struct
    {
        struct FPolygonID PolygonID;
        struct FVertexID VertexID;
        int32_t ReturnValue;
    } Parms{};
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    Parms.VertexID = (struct FVertexID)VertexID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UEditableMesh::FindPolygonPerimeterEdgeNumberForVertices(struct FPolygonID PolygonID, struct FVertexID EdgeVertexID0, struct FVertexID EdgeVertexID1)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "FindPolygonPerimeterEdgeNumberForVertices");
    struct
    {
        struct FPolygonID PolygonID;
        struct FVertexID EdgeVertexID0;
        struct FVertexID EdgeVertexID1;
        int32_t ReturnValue;
    } Parms{};
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    Parms.EdgeVertexID0 = (struct FVertexID)EdgeVertexID0;
    Parms.EdgeVertexID1 = (struct FVertexID)EdgeVertexID1;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UEditableMesh::FindPolygonLoop(struct FEdgeID EdgeID, struct TArray<struct FEdgeID>& OutEdgeLoopEdgeIDs, struct TArray<struct FEdgeID>& OutFlippedEdgeIDs, struct TArray<struct FEdgeID>& OutReversedEdgeIDPathToTake, struct TArray<struct FPolygonID>& OutPolygonIDsToSplit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "FindPolygonLoop");
    struct
    {
        struct FEdgeID EdgeID;
        struct TArray<struct FEdgeID> OutEdgeLoopEdgeIDs;
        struct TArray<struct FEdgeID> OutFlippedEdgeIDs;
        struct TArray<struct FEdgeID> OutReversedEdgeIDPathToTake;
        struct TArray<struct FPolygonID> OutPolygonIDsToSplit;
    } Parms{};
    Parms.EdgeID = (struct FEdgeID)EdgeID;
    this->ProcessEvent(Func, &Parms);
    OutEdgeLoopEdgeIDs = Parms.OutEdgeLoopEdgeIDs;
    OutFlippedEdgeIDs = Parms.OutFlippedEdgeIDs;
    OutReversedEdgeIDPathToTake = Parms.OutReversedEdgeIDPathToTake;
    OutPolygonIDsToSplit = Parms.OutPolygonIDsToSplit;
}

void UEditableMesh::ExtrudePolygons(const struct TArray<struct FPolygonID>& Polygons, float ExtrudeDistance, uint8_t bKeepNeighborsTogether, struct TArray<struct FPolygonID>& OutNewExtrudedFrontPolygons)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "ExtrudePolygons");
    struct
    {
        struct TArray<struct FPolygonID> Polygons;
        float ExtrudeDistance;
        uint8_t bKeepNeighborsTogether;
        struct TArray<struct FPolygonID> OutNewExtrudedFrontPolygons;
    } Parms{};
    Parms.Polygons = (struct TArray<struct FPolygonID>)Polygons;
    Parms.ExtrudeDistance = (float)ExtrudeDistance;
    Parms.bKeepNeighborsTogether = (uint8_t)bKeepNeighborsTogether;
    this->ProcessEvent(Func, &Parms);
    OutNewExtrudedFrontPolygons = Parms.OutNewExtrudedFrontPolygons;
}

void UEditableMesh::ExtendVertices(const struct TArray<struct FVertexID>& VertexIDs, uint8_t bOnlyExtendClosestEdge, struct FVector ReferencePosition, struct TArray<struct FVertexID>& OutNewExtendedVertexIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "ExtendVertices");
    struct
    {
        struct TArray<struct FVertexID> VertexIDs;
        uint8_t bOnlyExtendClosestEdge;
        struct FVector ReferencePosition;
        struct TArray<struct FVertexID> OutNewExtendedVertexIDs;
    } Parms{};
    Parms.VertexIDs = (struct TArray<struct FVertexID>)VertexIDs;
    Parms.bOnlyExtendClosestEdge = (uint8_t)bOnlyExtendClosestEdge;
    Parms.ReferencePosition = (struct FVector)ReferencePosition;
    this->ProcessEvent(Func, &Parms);
    OutNewExtendedVertexIDs = Parms.OutNewExtendedVertexIDs;
}

void UEditableMesh::ExtendEdges(const struct TArray<struct FEdgeID>& EdgeIDs, uint8_t bWeldNeighbors, struct TArray<struct FEdgeID>& OutNewExtendedEdgeIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "ExtendEdges");
    struct
    {
        struct TArray<struct FEdgeID> EdgeIDs;
        uint8_t bWeldNeighbors;
        struct TArray<struct FEdgeID> OutNewExtendedEdgeIDs;
    } Parms{};
    Parms.EdgeIDs = (struct TArray<struct FEdgeID>)EdgeIDs;
    Parms.bWeldNeighbors = (uint8_t)bWeldNeighbors;
    this->ProcessEvent(Func, &Parms);
    OutNewExtendedEdgeIDs = Parms.OutNewExtendedEdgeIDs;
}

void UEditableMesh::EndModification(uint8_t bFromUndo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "EndModification");
    struct
    {
        uint8_t bFromUndo;
    } Parms{};
    Parms.bFromUndo = (uint8_t)bFromUndo;
    this->ProcessEvent(Func, &Parms);
}

void UEditableMesh::DeleteVertexInstances(const struct TArray<struct FVertexInstanceID>& VertexInstanceIDsToDelete, uint8_t bDeleteOrphanedVertices)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "DeleteVertexInstances");
    struct
    {
        struct TArray<struct FVertexInstanceID> VertexInstanceIDsToDelete;
        uint8_t bDeleteOrphanedVertices;
    } Parms{};
    Parms.VertexInstanceIDsToDelete = (struct TArray<struct FVertexInstanceID>)VertexInstanceIDsToDelete;
    Parms.bDeleteOrphanedVertices = (uint8_t)bDeleteOrphanedVertices;
    this->ProcessEvent(Func, &Parms);
}

void UEditableMesh::DeleteVertexAndConnectedEdgesAndPolygons(struct FVertexID VertexID, uint8_t bDeleteOrphanedEdges, uint8_t bDeleteOrphanedVertices, uint8_t bDeleteOrphanedVertexInstances, uint8_t bDeleteEmptyPolygonGroups)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "DeleteVertexAndConnectedEdgesAndPolygons");
    struct
    {
        struct FVertexID VertexID;
        uint8_t bDeleteOrphanedEdges;
        uint8_t bDeleteOrphanedVertices;
        uint8_t bDeleteOrphanedVertexInstances;
        uint8_t bDeleteEmptyPolygonGroups;
    } Parms{};
    Parms.VertexID = (struct FVertexID)VertexID;
    Parms.bDeleteOrphanedEdges = (uint8_t)bDeleteOrphanedEdges;
    Parms.bDeleteOrphanedVertices = (uint8_t)bDeleteOrphanedVertices;
    Parms.bDeleteOrphanedVertexInstances = (uint8_t)bDeleteOrphanedVertexInstances;
    Parms.bDeleteEmptyPolygonGroups = (uint8_t)bDeleteEmptyPolygonGroups;
    this->ProcessEvent(Func, &Parms);
}

void UEditableMesh::DeletePolygons(const struct TArray<struct FPolygonID>& PolygonIDsToDelete, uint8_t bDeleteOrphanedEdges, uint8_t bDeleteOrphanedVertices, uint8_t bDeleteOrphanedVertexInstances, uint8_t bDeleteEmptyPolygonGroups)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "DeletePolygons");
    struct
    {
        struct TArray<struct FPolygonID> PolygonIDsToDelete;
        uint8_t bDeleteOrphanedEdges;
        uint8_t bDeleteOrphanedVertices;
        uint8_t bDeleteOrphanedVertexInstances;
        uint8_t bDeleteEmptyPolygonGroups;
    } Parms{};
    Parms.PolygonIDsToDelete = (struct TArray<struct FPolygonID>)PolygonIDsToDelete;
    Parms.bDeleteOrphanedEdges = (uint8_t)bDeleteOrphanedEdges;
    Parms.bDeleteOrphanedVertices = (uint8_t)bDeleteOrphanedVertices;
    Parms.bDeleteOrphanedVertexInstances = (uint8_t)bDeleteOrphanedVertexInstances;
    Parms.bDeleteEmptyPolygonGroups = (uint8_t)bDeleteEmptyPolygonGroups;
    this->ProcessEvent(Func, &Parms);
}

void UEditableMesh::DeletePolygonGroups(const struct TArray<struct FPolygonGroupID>& PolygonGroupIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "DeletePolygonGroups");
    struct
    {
        struct TArray<struct FPolygonGroupID> PolygonGroupIDs;
    } Parms{};
    Parms.PolygonGroupIDs = (struct TArray<struct FPolygonGroupID>)PolygonGroupIDs;
    this->ProcessEvent(Func, &Parms);
}

void UEditableMesh::DeleteOrphanVertices(const struct TArray<struct FVertexID>& VertexIDsToDelete)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "DeleteOrphanVertices");
    struct
    {
        struct TArray<struct FVertexID> VertexIDsToDelete;
    } Parms{};
    Parms.VertexIDsToDelete = (struct TArray<struct FVertexID>)VertexIDsToDelete;
    this->ProcessEvent(Func, &Parms);
}

void UEditableMesh::DeleteEdges(const struct TArray<struct FEdgeID>& EdgeIDsToDelete, uint8_t bDeleteOrphanedVertices)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "DeleteEdges");
    struct
    {
        struct TArray<struct FEdgeID> EdgeIDsToDelete;
        uint8_t bDeleteOrphanedVertices;
    } Parms{};
    Parms.EdgeIDsToDelete = (struct TArray<struct FEdgeID>)EdgeIDsToDelete;
    Parms.bDeleteOrphanedVertices = (uint8_t)bDeleteOrphanedVertices;
    this->ProcessEvent(Func, &Parms);
}

void UEditableMesh::DeleteEdgeAndConnectedPolygons(struct FEdgeID EdgeID, uint8_t bDeleteOrphanedEdges, uint8_t bDeleteOrphanedVertices, uint8_t bDeleteOrphanedVertexInstances, uint8_t bDeleteEmptyPolygonGroups)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "DeleteEdgeAndConnectedPolygons");
    struct
    {
        struct FEdgeID EdgeID;
        uint8_t bDeleteOrphanedEdges;
        uint8_t bDeleteOrphanedVertices;
        uint8_t bDeleteOrphanedVertexInstances;
        uint8_t bDeleteEmptyPolygonGroups;
    } Parms{};
    Parms.EdgeID = (struct FEdgeID)EdgeID;
    Parms.bDeleteOrphanedEdges = (uint8_t)bDeleteOrphanedEdges;
    Parms.bDeleteOrphanedVertices = (uint8_t)bDeleteOrphanedVertices;
    Parms.bDeleteOrphanedVertexInstances = (uint8_t)bDeleteOrphanedVertexInstances;
    Parms.bDeleteEmptyPolygonGroups = (uint8_t)bDeleteEmptyPolygonGroups;
    this->ProcessEvent(Func, &Parms);
}

void UEditableMesh::CreateVertices(const struct TArray<struct FVertexToCreate>& VerticesToCreate, struct TArray<struct FVertexID>& OutNewVertexIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "CreateVertices");
    struct
    {
        struct TArray<struct FVertexToCreate> VerticesToCreate;
        struct TArray<struct FVertexID> OutNewVertexIDs;
    } Parms{};
    Parms.VerticesToCreate = (struct TArray<struct FVertexToCreate>)VerticesToCreate;
    this->ProcessEvent(Func, &Parms);
    OutNewVertexIDs = Parms.OutNewVertexIDs;
}

void UEditableMesh::CreateVertexInstances(const struct TArray<struct FVertexInstanceToCreate>& VertexInstancesToCreate, struct TArray<struct FVertexInstanceID>& OutNewVertexInstanceIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "CreateVertexInstances");
    struct
    {
        struct TArray<struct FVertexInstanceToCreate> VertexInstancesToCreate;
        struct TArray<struct FVertexInstanceID> OutNewVertexInstanceIDs;
    } Parms{};
    Parms.VertexInstancesToCreate = (struct TArray<struct FVertexInstanceToCreate>)VertexInstancesToCreate;
    this->ProcessEvent(Func, &Parms);
    OutNewVertexInstanceIDs = Parms.OutNewVertexInstanceIDs;
}

void UEditableMesh::CreatePolygons(const struct TArray<struct FPolygonToCreate>& PolygonsToCreate, struct TArray<struct FPolygonID>& OutNewPolygonIDs, struct TArray<struct FEdgeID>& OutNewEdgeIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "CreatePolygons");
    struct
    {
        struct TArray<struct FPolygonToCreate> PolygonsToCreate;
        struct TArray<struct FPolygonID> OutNewPolygonIDs;
        struct TArray<struct FEdgeID> OutNewEdgeIDs;
    } Parms{};
    Parms.PolygonsToCreate = (struct TArray<struct FPolygonToCreate>)PolygonsToCreate;
    this->ProcessEvent(Func, &Parms);
    OutNewPolygonIDs = Parms.OutNewPolygonIDs;
    OutNewEdgeIDs = Parms.OutNewEdgeIDs;
}

void UEditableMesh::CreatePolygonGroups(const struct TArray<struct FPolygonGroupToCreate>& PolygonGroupsToCreate, struct TArray<struct FPolygonGroupID>& OutNewPolygonGroupIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "CreatePolygonGroups");
    struct
    {
        struct TArray<struct FPolygonGroupToCreate> PolygonGroupsToCreate;
        struct TArray<struct FPolygonGroupID> OutNewPolygonGroupIDs;
    } Parms{};
    Parms.PolygonGroupsToCreate = (struct TArray<struct FPolygonGroupToCreate>)PolygonGroupsToCreate;
    this->ProcessEvent(Func, &Parms);
    OutNewPolygonGroupIDs = Parms.OutNewPolygonGroupIDs;
}

void UEditableMesh::CreateMissingPolygonPerimeterEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OutNewEdgeIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "CreateMissingPolygonPerimeterEdges");
    struct
    {
        struct FPolygonID PolygonID;
        struct TArray<struct FEdgeID> OutNewEdgeIDs;
    } Parms{};
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    this->ProcessEvent(Func, &Parms);
    OutNewEdgeIDs = Parms.OutNewEdgeIDs;
}

void UEditableMesh::CreateEmptyVertexRange(int32_t NumVerticesToCreate, struct TArray<struct FVertexID>& OutNewVertexIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "CreateEmptyVertexRange");
    struct
    {
        int32_t NumVerticesToCreate;
        struct TArray<struct FVertexID> OutNewVertexIDs;
    } Parms{};
    Parms.NumVerticesToCreate = (int32_t)NumVerticesToCreate;
    this->ProcessEvent(Func, &Parms);
    OutNewVertexIDs = Parms.OutNewVertexIDs;
}

void UEditableMesh::CreateEdges(const struct TArray<struct FEdgeToCreate>& EdgesToCreate, struct TArray<struct FEdgeID>& OutNewEdgeIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "CreateEdges");
    struct
    {
        struct TArray<struct FEdgeToCreate> EdgesToCreate;
        struct TArray<struct FEdgeID> OutNewEdgeIDs;
    } Parms{};
    Parms.EdgesToCreate = (struct TArray<struct FEdgeToCreate>)EdgesToCreate;
    this->ProcessEvent(Func, &Parms);
    OutNewEdgeIDs = Parms.OutNewEdgeIDs;
}

void UEditableMesh::ComputePolygonsSharedEdges(const struct TArray<struct FPolygonID>& PolygonIDs, struct TArray<struct FEdgeID>& OutSharedEdgeIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "ComputePolygonsSharedEdges");
    struct
    {
        struct TArray<struct FPolygonID> PolygonIDs;
        struct TArray<struct FEdgeID> OutSharedEdgeIDs;
    } Parms{};
    Parms.PolygonIDs = (struct TArray<struct FPolygonID>)PolygonIDs;
    this->ProcessEvent(Func, &Parms);
    OutSharedEdgeIDs = Parms.OutSharedEdgeIDs;
}

struct FPlane UEditableMesh::ComputePolygonPlane(struct FPolygonID PolygonID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "ComputePolygonPlane");
    struct
    {
        struct FPolygonID PolygonID;
        struct FPlane ReturnValue;
    } Parms{};
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UEditableMesh::ComputePolygonNormal(struct FPolygonID PolygonID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "ComputePolygonNormal");
    struct
    {
        struct FPolygonID PolygonID;
        struct FVector ReturnValue;
    } Parms{};
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UEditableMesh::ComputePolygonCenter(struct FPolygonID PolygonID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "ComputePolygonCenter");
    struct
    {
        struct FPolygonID PolygonID;
        struct FVector ReturnValue;
    } Parms{};
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FBoxSphereBounds UEditableMesh::ComputeBoundingBoxAndSphere()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "ComputeBoundingBoxAndSphere");
    struct
    {
        struct FBoxSphereBounds ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FBox UEditableMesh::ComputeBoundingBox()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "ComputeBoundingBox");
    struct
    {
        struct FBox ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UEditableMesh* UEditableMesh::CommitInstance(struct UPrimitiveComponent* ComponentToInstanceTo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "CommitInstance");
    struct
    {
        struct UPrimitiveComponent* ComponentToInstanceTo;
        struct UEditableMesh* ReturnValue;
    } Parms{};
    Parms.ComponentToInstanceTo = (struct UPrimitiveComponent*)ComponentToInstanceTo;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UEditableMesh::Commit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "Commit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UEditableMesh::ChangePolygonsVertexInstances(const struct TArray<struct FChangeVertexInstancesForPolygon>& VertexInstancesForPolygons)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "ChangePolygonsVertexInstances");
    struct
    {
        struct TArray<struct FChangeVertexInstancesForPolygon> VertexInstancesForPolygons;
    } Parms{};
    Parms.VertexInstancesForPolygons = (struct TArray<struct FChangeVertexInstancesForPolygon>)VertexInstancesForPolygons;
    this->ProcessEvent(Func, &Parms);
}

void UEditableMesh::BevelPolygons(const struct TArray<struct FPolygonID>& PolygonIDs, float BevelFixedDistance, float BevelProgressTowardCenter, struct TArray<struct FPolygonID>& OutNewCenterPolygonIDs, struct TArray<struct FPolygonID>& OutNewSidePolygonIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "BevelPolygons");
    struct
    {
        struct TArray<struct FPolygonID> PolygonIDs;
        float BevelFixedDistance;
        float BevelProgressTowardCenter;
        struct TArray<struct FPolygonID> OutNewCenterPolygonIDs;
        struct TArray<struct FPolygonID> OutNewSidePolygonIDs;
    } Parms{};
    Parms.PolygonIDs = (struct TArray<struct FPolygonID>)PolygonIDs;
    Parms.BevelFixedDistance = (float)BevelFixedDistance;
    Parms.BevelProgressTowardCenter = (float)BevelProgressTowardCenter;
    this->ProcessEvent(Func, &Parms);
    OutNewCenterPolygonIDs = Parms.OutNewCenterPolygonIDs;
    OutNewSidePolygonIDs = Parms.OutNewSidePolygonIDs;
}

void UEditableMesh::AssignPolygonsToPolygonGroups(const struct TArray<struct FPolygonGroupForPolygon>& PolygonGroupForPolygons, uint8_t bDeleteOrphanedPolygonGroups)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "AssignPolygonsToPolygonGroups");
    struct
    {
        struct TArray<struct FPolygonGroupForPolygon> PolygonGroupForPolygons;
        uint8_t bDeleteOrphanedPolygonGroups;
    } Parms{};
    Parms.PolygonGroupForPolygons = (struct TArray<struct FPolygonGroupForPolygon>)PolygonGroupForPolygons;
    Parms.bDeleteOrphanedPolygonGroups = (uint8_t)bDeleteOrphanedPolygonGroups;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UEditableMesh::AnyChangesToUndo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableMesh", "AnyChangesToUndo");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UEditableMeshFactory::* ----
struct UEditableMesh* UEditableMeshFactory::MakeEditableMesh(struct UPrimitiveComponent* PrimitiveComponent, int32_t LodIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("EditableMeshFactory", "MakeEditableMesh");
    struct
    {
        struct UPrimitiveComponent* PrimitiveComponent;
        int32_t LodIndex;
        struct UEditableMesh* ReturnValue;
    } Parms{};
    Parms.PrimitiveComponent = (struct UPrimitiveComponent*)PrimitiveComponent;
    Parms.LodIndex = (int32_t)LodIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
