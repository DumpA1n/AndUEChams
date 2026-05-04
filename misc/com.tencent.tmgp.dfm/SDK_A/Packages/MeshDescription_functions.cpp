#include "MeshDescription.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UMeshDescriptionBase::* ----
void UMeshDescriptionBase::SetVertexPosition(struct FVertexID VertexID, const struct FVector& Position)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "SetVertexPosition");
    struct
    {
        struct FVertexID VertexID;
        struct FVector Position;
    } Parms{};
    Parms.VertexID = (struct FVertexID)VertexID;
    Parms.Position = (struct FVector)Position;
    this->ProcessEvent(Func, &Parms);
}

void UMeshDescriptionBase::SetPolygonVertexInstance(struct FPolygonID PolygonID, int32_t PerimeterIndex, struct FVertexInstanceID VertexInstanceID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "SetPolygonVertexInstance");
    struct
    {
        struct FPolygonID PolygonID;
        int32_t PerimeterIndex;
        struct FVertexInstanceID VertexInstanceID;
    } Parms{};
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    Parms.PerimeterIndex = (int32_t)PerimeterIndex;
    Parms.VertexInstanceID = (struct FVertexInstanceID)VertexInstanceID;
    this->ProcessEvent(Func, &Parms);
}

void UMeshDescriptionBase::SetPolygonPolygonGroup(struct FPolygonID PolygonID, struct FPolygonGroupID PolygonGroupID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "SetPolygonPolygonGroup");
    struct
    {
        struct FPolygonID PolygonID;
        struct FPolygonGroupID PolygonGroupID;
    } Parms{};
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    Parms.PolygonGroupID = (struct FPolygonGroupID)PolygonGroupID;
    this->ProcessEvent(Func, &Parms);
}

void UMeshDescriptionBase::ReversePolygonFacing(struct FPolygonID PolygonID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "ReversePolygonFacing");
    struct
    {
        struct FPolygonID PolygonID;
    } Parms{};
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    this->ProcessEvent(Func, &Parms);
}

void UMeshDescriptionBase::ReserveNewVertices(int32_t NumberOfNewVertices)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "ReserveNewVertices");
    struct
    {
        int32_t NumberOfNewVertices;
    } Parms{};
    Parms.NumberOfNewVertices = (int32_t)NumberOfNewVertices;
    this->ProcessEvent(Func, &Parms);
}

void UMeshDescriptionBase::ReserveNewVertexInstances(int32_t NumberOfNewVertexInstances)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "ReserveNewVertexInstances");
    struct
    {
        int32_t NumberOfNewVertexInstances;
    } Parms{};
    Parms.NumberOfNewVertexInstances = (int32_t)NumberOfNewVertexInstances;
    this->ProcessEvent(Func, &Parms);
}

void UMeshDescriptionBase::ReserveNewTriangles(int32_t NumberOfNewTriangles)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "ReserveNewTriangles");
    struct
    {
        int32_t NumberOfNewTriangles;
    } Parms{};
    Parms.NumberOfNewTriangles = (int32_t)NumberOfNewTriangles;
    this->ProcessEvent(Func, &Parms);
}

void UMeshDescriptionBase::ReserveNewPolygons(int32_t NumberOfNewPolygons)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "ReserveNewPolygons");
    struct
    {
        int32_t NumberOfNewPolygons;
    } Parms{};
    Parms.NumberOfNewPolygons = (int32_t)NumberOfNewPolygons;
    this->ProcessEvent(Func, &Parms);
}

void UMeshDescriptionBase::ReserveNewPolygonGroups(int32_t NumberOfNewPolygonGroups)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "ReserveNewPolygonGroups");
    struct
    {
        int32_t NumberOfNewPolygonGroups;
    } Parms{};
    Parms.NumberOfNewPolygonGroups = (int32_t)NumberOfNewPolygonGroups;
    this->ProcessEvent(Func, &Parms);
}

void UMeshDescriptionBase::ReserveNewEdges(int32_t NumberOfNewEdges)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "ReserveNewEdges");
    struct
    {
        int32_t NumberOfNewEdges;
    } Parms{};
    Parms.NumberOfNewEdges = (int32_t)NumberOfNewEdges;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UMeshDescriptionBase::IsVertexValid(struct FVertexID VertexID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "IsVertexValid");
    struct
    {
        struct FVertexID VertexID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.VertexID = (struct FVertexID)VertexID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMeshDescriptionBase::IsVertexOrphaned(struct FVertexID VertexID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "IsVertexOrphaned");
    struct
    {
        struct FVertexID VertexID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.VertexID = (struct FVertexID)VertexID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMeshDescriptionBase::IsVertexInstanceValid(struct FVertexInstanceID VertexInstanceID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "IsVertexInstanceValid");
    struct
    {
        struct FVertexInstanceID VertexInstanceID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.VertexInstanceID = (struct FVertexInstanceID)VertexInstanceID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMeshDescriptionBase::IsTriangleValid(struct FTriangleID TriangleID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "IsTriangleValid");
    struct
    {
        struct FTriangleID TriangleID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TriangleID = (struct FTriangleID)TriangleID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMeshDescriptionBase::IsTrianglePartOfNgon(struct FTriangleID TriangleID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "IsTrianglePartOfNgon");
    struct
    {
        struct FTriangleID TriangleID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TriangleID = (struct FTriangleID)TriangleID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMeshDescriptionBase::IsPolygonValid(struct FPolygonID PolygonID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "IsPolygonValid");
    struct
    {
        struct FPolygonID PolygonID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMeshDescriptionBase::IsPolygonGroupValid(struct FPolygonGroupID PolygonGroupID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "IsPolygonGroupValid");
    struct
    {
        struct FPolygonGroupID PolygonGroupID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PolygonGroupID = (struct FPolygonGroupID)PolygonGroupID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMeshDescriptionBase::IsEmpty()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "IsEmpty");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMeshDescriptionBase::IsEdgeValid(struct FEdgeID EdgeID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "IsEdgeValid");
    struct
    {
        struct FEdgeID EdgeID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.EdgeID = (struct FEdgeID)EdgeID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMeshDescriptionBase::IsEdgeInternalToPolygon(struct FEdgeID EdgeID, struct FPolygonID PolygonID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "IsEdgeInternalToPolygon");
    struct
    {
        struct FEdgeID EdgeID;
        struct FPolygonID PolygonID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.EdgeID = (struct FEdgeID)EdgeID;
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMeshDescriptionBase::IsEdgeInternal(struct FEdgeID EdgeID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "IsEdgeInternal");
    struct
    {
        struct FEdgeID EdgeID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.EdgeID = (struct FEdgeID)EdgeID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMeshDescriptionBase::GetVertexVertexInstances(struct FVertexID VertexID, struct TArray<struct FVertexInstanceID>& OutVertexInstanceIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetVertexVertexInstances");
    struct
    {
        struct FVertexID VertexID;
        struct TArray<struct FVertexInstanceID> OutVertexInstanceIDs;
    } Parms{};
    Parms.VertexID = (struct FVertexID)VertexID;
    this->ProcessEvent(Func, &Parms);
    OutVertexInstanceIDs = Parms.OutVertexInstanceIDs;
}

struct FVector UMeshDescriptionBase::GetVertexPosition(struct FVertexID VertexID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetVertexPosition");
    struct
    {
        struct FVertexID VertexID;
        struct FVector ReturnValue;
    } Parms{};
    Parms.VertexID = (struct FVertexID)VertexID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FEdgeID UMeshDescriptionBase::GetVertexPairEdge(struct FVertexID VertexID0, struct FVertexID VertexID1)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetVertexPairEdge");
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

struct FVertexID UMeshDescriptionBase::GetVertexInstanceVertex(struct FVertexInstanceID VertexInstanceID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetVertexInstanceVertex");
    struct
    {
        struct FVertexInstanceID VertexInstanceID;
        struct FVertexID ReturnValue;
    } Parms{};
    Parms.VertexInstanceID = (struct FVertexInstanceID)VertexInstanceID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FEdgeID UMeshDescriptionBase::GetVertexInstancePairEdge(struct FVertexInstanceID VertexInstanceID0, struct FVertexInstanceID VertexInstanceID1)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetVertexInstancePairEdge");
    struct
    {
        struct FVertexInstanceID VertexInstanceID0;
        struct FVertexInstanceID VertexInstanceID1;
        struct FEdgeID ReturnValue;
    } Parms{};
    Parms.VertexInstanceID0 = (struct FVertexInstanceID)VertexInstanceID0;
    Parms.VertexInstanceID1 = (struct FVertexInstanceID)VertexInstanceID1;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVertexInstanceID UMeshDescriptionBase::GetVertexInstanceForTriangleVertex(struct FTriangleID TriangleID, struct FVertexID VertexID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetVertexInstanceForTriangleVertex");
    struct
    {
        struct FTriangleID TriangleID;
        struct FVertexID VertexID;
        struct FVertexInstanceID ReturnValue;
    } Parms{};
    Parms.TriangleID = (struct FTriangleID)TriangleID;
    Parms.VertexID = (struct FVertexID)VertexID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVertexInstanceID UMeshDescriptionBase::GetVertexInstanceForPolygonVertex(struct FPolygonID PolygonID, struct FVertexID VertexID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetVertexInstanceForPolygonVertex");
    struct
    {
        struct FPolygonID PolygonID;
        struct FVertexID VertexID;
        struct FVertexInstanceID ReturnValue;
    } Parms{};
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    Parms.VertexID = (struct FVertexID)VertexID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMeshDescriptionBase::GetVertexInstanceConnectedTriangles(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FTriangleID>& OutConnectedTriangleIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetVertexInstanceConnectedTriangles");
    struct
    {
        struct FVertexInstanceID VertexInstanceID;
        struct TArray<struct FTriangleID> OutConnectedTriangleIDs;
    } Parms{};
    Parms.VertexInstanceID = (struct FVertexInstanceID)VertexInstanceID;
    this->ProcessEvent(Func, &Parms);
    OutConnectedTriangleIDs = Parms.OutConnectedTriangleIDs;
}

void UMeshDescriptionBase::GetVertexInstanceConnectedPolygons(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetVertexInstanceConnectedPolygons");
    struct
    {
        struct FVertexInstanceID VertexInstanceID;
        struct TArray<struct FPolygonID> OutConnectedPolygonIDs;
    } Parms{};
    Parms.VertexInstanceID = (struct FVertexInstanceID)VertexInstanceID;
    this->ProcessEvent(Func, &Parms);
    OutConnectedPolygonIDs = Parms.OutConnectedPolygonIDs;
}

void UMeshDescriptionBase::GetVertexConnectedTriangles(struct FVertexID VertexID, struct TArray<struct FTriangleID>& OutConnectedTriangleIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetVertexConnectedTriangles");
    struct
    {
        struct FVertexID VertexID;
        struct TArray<struct FTriangleID> OutConnectedTriangleIDs;
    } Parms{};
    Parms.VertexID = (struct FVertexID)VertexID;
    this->ProcessEvent(Func, &Parms);
    OutConnectedTriangleIDs = Parms.OutConnectedTriangleIDs;
}

void UMeshDescriptionBase::GetVertexConnectedPolygons(struct FVertexID VertexID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetVertexConnectedPolygons");
    struct
    {
        struct FVertexID VertexID;
        struct TArray<struct FPolygonID> OutConnectedPolygonIDs;
    } Parms{};
    Parms.VertexID = (struct FVertexID)VertexID;
    this->ProcessEvent(Func, &Parms);
    OutConnectedPolygonIDs = Parms.OutConnectedPolygonIDs;
}

void UMeshDescriptionBase::GetVertexConnectedEdges(struct FVertexID VertexID, struct TArray<struct FEdgeID>& OutEdgeIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetVertexConnectedEdges");
    struct
    {
        struct FVertexID VertexID;
        struct TArray<struct FEdgeID> OutEdgeIDs;
    } Parms{};
    Parms.VertexID = (struct FVertexID)VertexID;
    this->ProcessEvent(Func, &Parms);
    OutEdgeIDs = Parms.OutEdgeIDs;
}

void UMeshDescriptionBase::GetVertexAdjacentVertices(struct FVertexID VertexID, struct TArray<struct FVertexID>& OutAdjacentVertexIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetVertexAdjacentVertices");
    struct
    {
        struct FVertexID VertexID;
        struct TArray<struct FVertexID> OutAdjacentVertexIDs;
    } Parms{};
    Parms.VertexID = (struct FVertexID)VertexID;
    this->ProcessEvent(Func, &Parms);
    OutAdjacentVertexIDs = Parms.OutAdjacentVertexIDs;
}

void UMeshDescriptionBase::GetTriangleVertices(struct FTriangleID TriangleID, struct TArray<struct FVertexID>& OutVertexIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetTriangleVertices");
    struct
    {
        struct FTriangleID TriangleID;
        struct TArray<struct FVertexID> OutVertexIDs;
    } Parms{};
    Parms.TriangleID = (struct FTriangleID)TriangleID;
    this->ProcessEvent(Func, &Parms);
    OutVertexIDs = Parms.OutVertexIDs;
}

void UMeshDescriptionBase::GetTriangleVertexInstances(struct FTriangleID TriangleID, struct TArray<struct FVertexInstanceID>& OutVertexInstanceIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetTriangleVertexInstances");
    struct
    {
        struct FTriangleID TriangleID;
        struct TArray<struct FVertexInstanceID> OutVertexInstanceIDs;
    } Parms{};
    Parms.TriangleID = (struct FTriangleID)TriangleID;
    this->ProcessEvent(Func, &Parms);
    OutVertexInstanceIDs = Parms.OutVertexInstanceIDs;
}

struct FVertexInstanceID UMeshDescriptionBase::GetTriangleVertexInstance(struct FTriangleID TriangleID, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetTriangleVertexInstance");
    struct
    {
        struct FTriangleID TriangleID;
        int32_t Index;
        struct FVertexInstanceID ReturnValue;
    } Parms{};
    Parms.TriangleID = (struct FTriangleID)TriangleID;
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FPolygonGroupID UMeshDescriptionBase::GetTrianglePolygonGroup(struct FTriangleID TriangleID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetTrianglePolygonGroup");
    struct
    {
        struct FTriangleID TriangleID;
        struct FPolygonGroupID ReturnValue;
    } Parms{};
    Parms.TriangleID = (struct FTriangleID)TriangleID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FPolygonID UMeshDescriptionBase::GetTrianglePolygon(struct FTriangleID TriangleID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetTrianglePolygon");
    struct
    {
        struct FTriangleID TriangleID;
        struct FPolygonID ReturnValue;
    } Parms{};
    Parms.TriangleID = (struct FTriangleID)TriangleID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMeshDescriptionBase::GetTriangleEdges(struct FTriangleID TriangleID, struct TArray<struct FEdgeID>& OutEdgeIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetTriangleEdges");
    struct
    {
        struct FTriangleID TriangleID;
        struct TArray<struct FEdgeID> OutEdgeIDs;
    } Parms{};
    Parms.TriangleID = (struct FTriangleID)TriangleID;
    this->ProcessEvent(Func, &Parms);
    OutEdgeIDs = Parms.OutEdgeIDs;
}

void UMeshDescriptionBase::GetTriangleAdjacentTriangles(struct FTriangleID TriangleID, struct TArray<struct FTriangleID>& OutTriangleIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetTriangleAdjacentTriangles");
    struct
    {
        struct FTriangleID TriangleID;
        struct TArray<struct FTriangleID> OutTriangleIDs;
    } Parms{};
    Parms.TriangleID = (struct FTriangleID)TriangleID;
    this->ProcessEvent(Func, &Parms);
    OutTriangleIDs = Parms.OutTriangleIDs;
}

void UMeshDescriptionBase::GetPolygonVertices(struct FPolygonID PolygonID, struct TArray<struct FVertexID>& OutVertexIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetPolygonVertices");
    struct
    {
        struct FPolygonID PolygonID;
        struct TArray<struct FVertexID> OutVertexIDs;
    } Parms{};
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    this->ProcessEvent(Func, &Parms);
    OutVertexIDs = Parms.OutVertexIDs;
}

void UMeshDescriptionBase::GetPolygonVertexInstances(struct FPolygonID PolygonID, struct TArray<struct FVertexInstanceID>& OutVertexInstanceIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetPolygonVertexInstances");
    struct
    {
        struct FPolygonID PolygonID;
        struct TArray<struct FVertexInstanceID> OutVertexInstanceIDs;
    } Parms{};
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    this->ProcessEvent(Func, &Parms);
    OutVertexInstanceIDs = Parms.OutVertexInstanceIDs;
}

void UMeshDescriptionBase::GetPolygonTriangles(struct FPolygonID PolygonID, struct TArray<struct FTriangleID>& OutTriangleIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetPolygonTriangles");
    struct
    {
        struct FPolygonID PolygonID;
        struct TArray<struct FTriangleID> OutTriangleIDs;
    } Parms{};
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    this->ProcessEvent(Func, &Parms);
    OutTriangleIDs = Parms.OutTriangleIDs;
}

struct FPolygonGroupID UMeshDescriptionBase::GetPolygonPolygonGroup(struct FPolygonID PolygonID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetPolygonPolygonGroup");
    struct
    {
        struct FPolygonID PolygonID;
        struct FPolygonGroupID ReturnValue;
    } Parms{};
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMeshDescriptionBase::GetPolygonPerimeterEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OutEdgeIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetPolygonPerimeterEdges");
    struct
    {
        struct FPolygonID PolygonID;
        struct TArray<struct FEdgeID> OutEdgeIDs;
    } Parms{};
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    this->ProcessEvent(Func, &Parms);
    OutEdgeIDs = Parms.OutEdgeIDs;
}

void UMeshDescriptionBase::GetPolygonInternalEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OutEdgeIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetPolygonInternalEdges");
    struct
    {
        struct FPolygonID PolygonID;
        struct TArray<struct FEdgeID> OutEdgeIDs;
    } Parms{};
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    this->ProcessEvent(Func, &Parms);
    OutEdgeIDs = Parms.OutEdgeIDs;
}

void UMeshDescriptionBase::GetPolygonGroupPolygons(struct FPolygonGroupID PolygonGroupID, struct TArray<struct FPolygonID>& OutPolygonIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetPolygonGroupPolygons");
    struct
    {
        struct FPolygonGroupID PolygonGroupID;
        struct TArray<struct FPolygonID> OutPolygonIDs;
    } Parms{};
    Parms.PolygonGroupID = (struct FPolygonGroupID)PolygonGroupID;
    this->ProcessEvent(Func, &Parms);
    OutPolygonIDs = Parms.OutPolygonIDs;
}

void UMeshDescriptionBase::GetPolygonAdjacentPolygons(struct FPolygonID PolygonID, struct TArray<struct FPolygonID>& OutPolygonIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetPolygonAdjacentPolygons");
    struct
    {
        struct FPolygonID PolygonID;
        struct TArray<struct FPolygonID> OutPolygonIDs;
    } Parms{};
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    this->ProcessEvent(Func, &Parms);
    OutPolygonIDs = Parms.OutPolygonIDs;
}

int32_t UMeshDescriptionBase::GetNumVertexVertexInstances(struct FVertexID VertexID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetNumVertexVertexInstances");
    struct
    {
        struct FVertexID VertexID;
        int32_t ReturnValue;
    } Parms{};
    Parms.VertexID = (struct FVertexID)VertexID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMeshDescriptionBase::GetNumVertexInstanceConnectedTriangles(struct FVertexInstanceID VertexInstanceID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetNumVertexInstanceConnectedTriangles");
    struct
    {
        struct FVertexInstanceID VertexInstanceID;
        int32_t ReturnValue;
    } Parms{};
    Parms.VertexInstanceID = (struct FVertexInstanceID)VertexInstanceID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMeshDescriptionBase::GetNumVertexInstanceConnectedPolygons(struct FVertexInstanceID VertexInstanceID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetNumVertexInstanceConnectedPolygons");
    struct
    {
        struct FVertexInstanceID VertexInstanceID;
        int32_t ReturnValue;
    } Parms{};
    Parms.VertexInstanceID = (struct FVertexInstanceID)VertexInstanceID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMeshDescriptionBase::GetNumVertexConnectedTriangles(struct FVertexID VertexID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetNumVertexConnectedTriangles");
    struct
    {
        struct FVertexID VertexID;
        int32_t ReturnValue;
    } Parms{};
    Parms.VertexID = (struct FVertexID)VertexID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMeshDescriptionBase::GetNumVertexConnectedPolygons(struct FVertexID VertexID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetNumVertexConnectedPolygons");
    struct
    {
        struct FVertexID VertexID;
        int32_t ReturnValue;
    } Parms{};
    Parms.VertexID = (struct FVertexID)VertexID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMeshDescriptionBase::GetNumVertexConnectedEdges(struct FVertexID VertexID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetNumVertexConnectedEdges");
    struct
    {
        struct FVertexID VertexID;
        int32_t ReturnValue;
    } Parms{};
    Parms.VertexID = (struct FVertexID)VertexID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMeshDescriptionBase::GetNumPolygonVertices(struct FPolygonID PolygonID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetNumPolygonVertices");
    struct
    {
        struct FPolygonID PolygonID;
        int32_t ReturnValue;
    } Parms{};
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMeshDescriptionBase::GetNumPolygonTriangles(struct FPolygonID PolygonID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetNumPolygonTriangles");
    struct
    {
        struct FPolygonID PolygonID;
        int32_t ReturnValue;
    } Parms{};
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMeshDescriptionBase::GetNumPolygonInternalEdges(struct FPolygonID PolygonID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetNumPolygonInternalEdges");
    struct
    {
        struct FPolygonID PolygonID;
        int32_t ReturnValue;
    } Parms{};
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMeshDescriptionBase::GetNumPolygonGroupPolygons(struct FPolygonGroupID PolygonGroupID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetNumPolygonGroupPolygons");
    struct
    {
        struct FPolygonGroupID PolygonGroupID;
        int32_t ReturnValue;
    } Parms{};
    Parms.PolygonGroupID = (struct FPolygonGroupID)PolygonGroupID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMeshDescriptionBase::GetNumEdgeConnectedTriangles(struct FEdgeID EdgeID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetNumEdgeConnectedTriangles");
    struct
    {
        struct FEdgeID EdgeID;
        int32_t ReturnValue;
    } Parms{};
    Parms.EdgeID = (struct FEdgeID)EdgeID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMeshDescriptionBase::GetNumEdgeConnectedPolygons(struct FEdgeID EdgeID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetNumEdgeConnectedPolygons");
    struct
    {
        struct FEdgeID EdgeID;
        int32_t ReturnValue;
    } Parms{};
    Parms.EdgeID = (struct FEdgeID)EdgeID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMeshDescriptionBase::GetEdgeVertices(struct FEdgeID EdgeID, struct TArray<struct FVertexID>& OutVertexIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetEdgeVertices");
    struct
    {
        struct FEdgeID EdgeID;
        struct TArray<struct FVertexID> OutVertexIDs;
    } Parms{};
    Parms.EdgeID = (struct FEdgeID)EdgeID;
    this->ProcessEvent(Func, &Parms);
    OutVertexIDs = Parms.OutVertexIDs;
}

struct FVertexID UMeshDescriptionBase::GetEdgeVertex(struct FEdgeID EdgeID, int32_t VertexNumber)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetEdgeVertex");
    struct
    {
        struct FEdgeID EdgeID;
        int32_t VertexNumber;
        struct FVertexID ReturnValue;
    } Parms{};
    Parms.EdgeID = (struct FEdgeID)EdgeID;
    Parms.VertexNumber = (int32_t)VertexNumber;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMeshDescriptionBase::GetEdgeConnectedTriangles(struct FEdgeID EdgeID, struct TArray<struct FTriangleID>& OutConnectedTriangleIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetEdgeConnectedTriangles");
    struct
    {
        struct FEdgeID EdgeID;
        struct TArray<struct FTriangleID> OutConnectedTriangleIDs;
    } Parms{};
    Parms.EdgeID = (struct FEdgeID)EdgeID;
    this->ProcessEvent(Func, &Parms);
    OutConnectedTriangleIDs = Parms.OutConnectedTriangleIDs;
}

void UMeshDescriptionBase::GetEdgeConnectedPolygons(struct FEdgeID EdgeID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "GetEdgeConnectedPolygons");
    struct
    {
        struct FEdgeID EdgeID;
        struct TArray<struct FPolygonID> OutConnectedPolygonIDs;
    } Parms{};
    Parms.EdgeID = (struct FEdgeID)EdgeID;
    this->ProcessEvent(Func, &Parms);
    OutConnectedPolygonIDs = Parms.OutConnectedPolygonIDs;
}

void UMeshDescriptionBase::Empty()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "Empty");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMeshDescriptionBase::DeleteVertexInstance(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FVertexID>& OrphanedVertices)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "DeleteVertexInstance");
    struct
    {
        struct FVertexInstanceID VertexInstanceID;
        struct TArray<struct FVertexID> OrphanedVertices;
    } Parms{};
    Parms.VertexInstanceID = (struct FVertexInstanceID)VertexInstanceID;
    this->ProcessEvent(Func, &Parms);
    OrphanedVertices = Parms.OrphanedVertices;
}

void UMeshDescriptionBase::DeleteVertex(struct FVertexID VertexID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "DeleteVertex");
    struct
    {
        struct FVertexID VertexID;
    } Parms{};
    Parms.VertexID = (struct FVertexID)VertexID;
    this->ProcessEvent(Func, &Parms);
}

void UMeshDescriptionBase::DeleteTriangle(struct FTriangleID TriangleID, struct TArray<struct FEdgeID>& OrphanedEdges, struct TArray<struct FVertexInstanceID>& OrphanedVertexInstances, struct TArray<struct FPolygonGroupID>& OrphanedPolygonGroupsPtr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "DeleteTriangle");
    struct
    {
        struct FTriangleID TriangleID;
        struct TArray<struct FEdgeID> OrphanedEdges;
        struct TArray<struct FVertexInstanceID> OrphanedVertexInstances;
        struct TArray<struct FPolygonGroupID> OrphanedPolygonGroupsPtr;
    } Parms{};
    Parms.TriangleID = (struct FTriangleID)TriangleID;
    this->ProcessEvent(Func, &Parms);
    OrphanedEdges = Parms.OrphanedEdges;
    OrphanedVertexInstances = Parms.OrphanedVertexInstances;
    OrphanedPolygonGroupsPtr = Parms.OrphanedPolygonGroupsPtr;
}

void UMeshDescriptionBase::DeletePolygonGroup(struct FPolygonGroupID PolygonGroupID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "DeletePolygonGroup");
    struct
    {
        struct FPolygonGroupID PolygonGroupID;
    } Parms{};
    Parms.PolygonGroupID = (struct FPolygonGroupID)PolygonGroupID;
    this->ProcessEvent(Func, &Parms);
}

void UMeshDescriptionBase::DeletePolygon(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OrphanedEdges, struct TArray<struct FVertexInstanceID>& OrphanedVertexInstances, struct TArray<struct FPolygonGroupID>& OrphanedPolygonGroups)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "DeletePolygon");
    struct
    {
        struct FPolygonID PolygonID;
        struct TArray<struct FEdgeID> OrphanedEdges;
        struct TArray<struct FVertexInstanceID> OrphanedVertexInstances;
        struct TArray<struct FPolygonGroupID> OrphanedPolygonGroups;
    } Parms{};
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    this->ProcessEvent(Func, &Parms);
    OrphanedEdges = Parms.OrphanedEdges;
    OrphanedVertexInstances = Parms.OrphanedVertexInstances;
    OrphanedPolygonGroups = Parms.OrphanedPolygonGroups;
}

void UMeshDescriptionBase::DeleteEdge(struct FEdgeID EdgeID, struct TArray<struct FVertexID>& OrphanedVertices)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "DeleteEdge");
    struct
    {
        struct FEdgeID EdgeID;
        struct TArray<struct FVertexID> OrphanedVertices;
    } Parms{};
    Parms.EdgeID = (struct FEdgeID)EdgeID;
    this->ProcessEvent(Func, &Parms);
    OrphanedVertices = Parms.OrphanedVertices;
}

void UMeshDescriptionBase::CreateVertexWithID(struct FVertexID VertexID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "CreateVertexWithID");
    struct
    {
        struct FVertexID VertexID;
    } Parms{};
    Parms.VertexID = (struct FVertexID)VertexID;
    this->ProcessEvent(Func, &Parms);
}

void UMeshDescriptionBase::CreateVertexInstanceWithID(struct FVertexInstanceID VertexInstanceID, struct FVertexID VertexID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "CreateVertexInstanceWithID");
    struct
    {
        struct FVertexInstanceID VertexInstanceID;
        struct FVertexID VertexID;
    } Parms{};
    Parms.VertexInstanceID = (struct FVertexInstanceID)VertexInstanceID;
    Parms.VertexID = (struct FVertexID)VertexID;
    this->ProcessEvent(Func, &Parms);
}

struct FVertexInstanceID UMeshDescriptionBase::CreateVertexInstance(struct FVertexID VertexID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "CreateVertexInstance");
    struct
    {
        struct FVertexID VertexID;
        struct FVertexInstanceID ReturnValue;
    } Parms{};
    Parms.VertexID = (struct FVertexID)VertexID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVertexID UMeshDescriptionBase::CreateVertex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "CreateVertex");
    struct
    {
        struct FVertexID ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMeshDescriptionBase::CreateTriangleWithID(struct FTriangleID TriangleID, struct FPolygonGroupID PolygonGroupID, const struct TArray<struct FVertexInstanceID>& VertexInstanceIDs, struct TArray<struct FEdgeID>& NewEdgeIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "CreateTriangleWithID");
    struct
    {
        struct FTriangleID TriangleID;
        struct FPolygonGroupID PolygonGroupID;
        struct TArray<struct FVertexInstanceID> VertexInstanceIDs;
        struct TArray<struct FEdgeID> NewEdgeIDs;
    } Parms{};
    Parms.TriangleID = (struct FTriangleID)TriangleID;
    Parms.PolygonGroupID = (struct FPolygonGroupID)PolygonGroupID;
    Parms.VertexInstanceIDs = (struct TArray<struct FVertexInstanceID>)VertexInstanceIDs;
    this->ProcessEvent(Func, &Parms);
    NewEdgeIDs = Parms.NewEdgeIDs;
}

struct FTriangleID UMeshDescriptionBase::CreateTriangle(struct FPolygonGroupID PolygonGroupID, const struct TArray<struct FVertexInstanceID>& VertexInstanceIDs, struct TArray<struct FEdgeID>& NewEdgeIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "CreateTriangle");
    struct
    {
        struct FPolygonGroupID PolygonGroupID;
        struct TArray<struct FVertexInstanceID> VertexInstanceIDs;
        struct TArray<struct FEdgeID> NewEdgeIDs;
        struct FTriangleID ReturnValue;
    } Parms{};
    Parms.PolygonGroupID = (struct FPolygonGroupID)PolygonGroupID;
    Parms.VertexInstanceIDs = (struct TArray<struct FVertexInstanceID>)VertexInstanceIDs;
    this->ProcessEvent(Func, &Parms);
    NewEdgeIDs = Parms.NewEdgeIDs;
    return Parms.ReturnValue;
}

void UMeshDescriptionBase::CreatePolygonWithID(struct FPolygonID PolygonID, struct FPolygonGroupID PolygonGroupID, struct TArray<struct FVertexInstanceID>& VertexInstanceIDs, struct TArray<struct FEdgeID>& NewEdgeIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "CreatePolygonWithID");
    struct
    {
        struct FPolygonID PolygonID;
        struct FPolygonGroupID PolygonGroupID;
        struct TArray<struct FVertexInstanceID> VertexInstanceIDs;
        struct TArray<struct FEdgeID> NewEdgeIDs;
    } Parms{};
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    Parms.PolygonGroupID = (struct FPolygonGroupID)PolygonGroupID;
    this->ProcessEvent(Func, &Parms);
    VertexInstanceIDs = Parms.VertexInstanceIDs;
    NewEdgeIDs = Parms.NewEdgeIDs;
}

void UMeshDescriptionBase::CreatePolygonGroupWithID(struct FPolygonGroupID PolygonGroupID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "CreatePolygonGroupWithID");
    struct
    {
        struct FPolygonGroupID PolygonGroupID;
    } Parms{};
    Parms.PolygonGroupID = (struct FPolygonGroupID)PolygonGroupID;
    this->ProcessEvent(Func, &Parms);
}

struct FPolygonGroupID UMeshDescriptionBase::CreatePolygonGroup()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "CreatePolygonGroup");
    struct
    {
        struct FPolygonGroupID ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FPolygonID UMeshDescriptionBase::CreatePolygon(struct FPolygonGroupID PolygonGroupID, struct TArray<struct FVertexInstanceID>& VertexInstanceIDs, struct TArray<struct FEdgeID>& NewEdgeIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "CreatePolygon");
    struct
    {
        struct FPolygonGroupID PolygonGroupID;
        struct TArray<struct FVertexInstanceID> VertexInstanceIDs;
        struct TArray<struct FEdgeID> NewEdgeIDs;
        struct FPolygonID ReturnValue;
    } Parms{};
    Parms.PolygonGroupID = (struct FPolygonGroupID)PolygonGroupID;
    this->ProcessEvent(Func, &Parms);
    VertexInstanceIDs = Parms.VertexInstanceIDs;
    NewEdgeIDs = Parms.NewEdgeIDs;
    return Parms.ReturnValue;
}

void UMeshDescriptionBase::CreateEdgeWithID(struct FEdgeID EdgeID, struct FVertexID VertexID0, struct FVertexID VertexID1)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "CreateEdgeWithID");
    struct
    {
        struct FEdgeID EdgeID;
        struct FVertexID VertexID0;
        struct FVertexID VertexID1;
    } Parms{};
    Parms.EdgeID = (struct FEdgeID)EdgeID;
    Parms.VertexID0 = (struct FVertexID)VertexID0;
    Parms.VertexID1 = (struct FVertexID)VertexID1;
    this->ProcessEvent(Func, &Parms);
}

struct FEdgeID UMeshDescriptionBase::CreateEdge(struct FVertexID VertexID0, struct FVertexID VertexID1)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "CreateEdge");
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

void UMeshDescriptionBase::ComputePolygonTriangulation(struct FPolygonID PolygonID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshDescriptionBase", "ComputePolygonTriangulation");
    struct
    {
        struct FPolygonID PolygonID;
    } Parms{};
    Parms.PolygonID = (struct FPolygonID)PolygonID;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
