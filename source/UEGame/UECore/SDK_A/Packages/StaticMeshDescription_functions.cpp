#include "StaticMeshDescription.hpp"
#include "MeshDescription.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UStaticMeshDescription
void UStaticMeshDescription::SetVertexInstanceUV(struct FVertexInstanceID VertexInstanceID, struct FVector2D UV, int32_t UVIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("StaticMeshDescription", "SetVertexInstanceUV");
    struct
    {
        struct FVertexInstanceID VertexInstanceID;
        struct FVector2D UV;
        int32_t UVIndex;
    } Parms{};
    Parms.VertexInstanceID = (struct FVertexInstanceID)VertexInstanceID;
    Parms.UV = (struct FVector2D)UV;
    Parms.UVIndex = (int32_t)UVIndex;
    this->ProcessEvent(Func, &Parms);
}

void UStaticMeshDescription::SetPolygonGroupMaterialSlotName(struct FPolygonGroupID PolygonGroupID, const struct FName& SlotName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("StaticMeshDescription", "SetPolygonGroupMaterialSlotName");
    struct
    {
        struct FPolygonGroupID PolygonGroupID;
        struct FName SlotName;
    } Parms{};
    Parms.PolygonGroupID = (struct FPolygonGroupID)PolygonGroupID;
    Parms.SlotName = (struct FName)SlotName;
    this->ProcessEvent(Func, &Parms);
}

struct FVector2D UStaticMeshDescription::GetVertexInstanceUV(struct FVertexInstanceID VertexInstanceID, int32_t UVIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("StaticMeshDescription", "GetVertexInstanceUV");
    struct
    {
        struct FVertexInstanceID VertexInstanceID;
        int32_t UVIndex;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.VertexInstanceID = (struct FVertexInstanceID)VertexInstanceID;
    Parms.UVIndex = (int32_t)UVIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UStaticMeshDescription::CreateCube(struct FVector Center, struct FVector HalfExtents, struct FPolygonGroupID PolygonGroup, struct FPolygonID& PolygonID_PlusX, struct FPolygonID& PolygonID_MinusX, struct FPolygonID& PolygonID_PlusY, struct FPolygonID& PolygonID_MinusY, struct FPolygonID& PolygonID_PlusZ, struct FPolygonID& PolygonID_MinusZ)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("StaticMeshDescription", "CreateCube");
    struct
    {
        struct FVector Center;
        struct FVector HalfExtents;
        struct FPolygonGroupID PolygonGroup;
        struct FPolygonID PolygonID_PlusX;
        struct FPolygonID PolygonID_MinusX;
        struct FPolygonID PolygonID_PlusY;
        struct FPolygonID PolygonID_MinusY;
        struct FPolygonID PolygonID_PlusZ;
        struct FPolygonID PolygonID_MinusZ;
    } Parms{};
    Parms.Center = (struct FVector)Center;
    Parms.HalfExtents = (struct FVector)HalfExtents;
    Parms.PolygonGroup = (struct FPolygonGroupID)PolygonGroup;
    this->ProcessEvent(Func, &Parms);
    PolygonID_PlusX = Parms.PolygonID_PlusX;
    PolygonID_MinusX = Parms.PolygonID_MinusX;
    PolygonID_PlusY = Parms.PolygonID_PlusY;
    PolygonID_MinusY = Parms.PolygonID_MinusY;
    PolygonID_PlusZ = Parms.PolygonID_PlusZ;
    PolygonID_MinusZ = Parms.PolygonID_MinusZ;
}

} // namespace SDK
