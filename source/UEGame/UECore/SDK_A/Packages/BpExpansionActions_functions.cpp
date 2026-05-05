#include "BpExpansionActions.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UBpExpansionActions
uint8_t UBpExpansionActions::SetStaticMeshCullingScreenSize(struct UStaticMeshComponent* InStaticMeshComponent, float CullingScreenSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BpExpansionActions", "SetStaticMeshCullingScreenSize");
    struct
    {
        struct UStaticMeshComponent* InStaticMeshComponent;
        float CullingScreenSize;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InStaticMeshComponent = (struct UStaticMeshComponent*)InStaticMeshComponent;
    Parms.CullingScreenSize = (float)CullingScreenSize;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBpExpansionActions::SetStaticMeshCullingDistance(struct UStaticMeshComponent* InStaticMeshComponent, int32_t CullingDistance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BpExpansionActions", "SetStaticMeshCullingDistance");
    struct
    {
        struct UStaticMeshComponent* InStaticMeshComponent;
        int32_t CullingDistance;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InStaticMeshComponent = (struct UStaticMeshComponent*)InStaticMeshComponent;
    Parms.CullingDistance = (int32_t)CullingDistance;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBpExpansionActions::GetStaticMeshCullingScreenSize(struct UStaticMesh* InStaticMesh, float& OutCullingScreenSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BpExpansionActions", "GetStaticMeshCullingScreenSize");
    struct
    {
        struct UStaticMesh* InStaticMesh;
        float OutCullingScreenSize;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InStaticMesh = (struct UStaticMesh*)InStaticMesh;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutCullingScreenSize = Parms.OutCullingScreenSize;
    return Parms.ReturnValue;
}

uint8_t UBpExpansionActions::GetStaticMeshCullingDistance(struct UStaticMesh* InStaticMesh, int32_t& OutCullingDistance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BpExpansionActions", "GetStaticMeshCullingDistance");
    struct
    {
        struct UStaticMesh* InStaticMesh;
        int32_t OutCullingDistance;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InStaticMesh = (struct UStaticMesh*)InStaticMesh;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutCullingDistance = Parms.OutCullingDistance;
    return Parms.ReturnValue;
}

} // namespace SDK
