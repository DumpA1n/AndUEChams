#include "OpenWorldHISM.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UOpenWorldHierarchicalInstancedMeshComponent
void UOpenWorldHierarchicalInstancedMeshComponent::TestAddInstance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldHierarchicalInstancedMeshComponent", "TestAddInstance");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UOpenWorldHierarchicalInstancedMeshComponent::SetInstanceVisible(int32_t InstanceIndex, uint8_t bInstanceVisible, uint8_t bUpdateRenderDynamicData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldHierarchicalInstancedMeshComponent", "SetInstanceVisible");
    struct
    {
        int32_t InstanceIndex;
        uint8_t bInstanceVisible;
        uint8_t bUpdateRenderDynamicData;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InstanceIndex = (int32_t)InstanceIndex;
    Parms.bInstanceVisible = (uint8_t)bInstanceVisible;
    Parms.bUpdateRenderDynamicData = (uint8_t)bUpdateRenderDynamicData;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UOpenWorldHierarchicalInstancedMeshComponent::SetInstanceUsedAsOccluder(int32_t InstanceIndex, uint8_t bUsedAsOccluder, uint8_t bUpdateRenderDynamicData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldHierarchicalInstancedMeshComponent", "SetInstanceUsedAsOccluder");
    struct
    {
        int32_t InstanceIndex;
        uint8_t bUsedAsOccluder;
        uint8_t bUpdateRenderDynamicData;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InstanceIndex = (int32_t)InstanceIndex;
    Parms.bUsedAsOccluder = (uint8_t)bUsedAsOccluder;
    Parms.bUpdateRenderDynamicData = (uint8_t)bUpdateRenderDynamicData;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UOpenWorldHierarchicalInstancedMeshComponent::SetBillboardVisible(int32_t InstanceIndex, uint8_t bInstanceVisible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldHierarchicalInstancedMeshComponent", "SetBillboardVisible");
    struct
    {
        int32_t InstanceIndex;
        uint8_t bInstanceVisible;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InstanceIndex = (int32_t)InstanceIndex;
    Parms.bInstanceVisible = (uint8_t)bInstanceVisible;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UOpenWorldHierarchicalInstancedMeshComponent::RemoveInstances(const struct TArray<int32_t>& InstancesToRemove, uint8_t bAllowSlack)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldHierarchicalInstancedMeshComponent", "RemoveInstances");
    struct
    {
        struct TArray<int32_t> InstancesToRemove;
        uint8_t bAllowSlack;
        int32_t ReturnValue;
    } Parms{};
    Parms.InstancesToRemove = (struct TArray<int32_t>)InstancesToRemove;
    Parms.bAllowSlack = (uint8_t)bAllowSlack;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UOpenWorldHierarchicalInstancedMeshComponent::RemoveInstance(int32_t InstanceIndex, uint8_t bAllowSlack)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldHierarchicalInstancedMeshComponent", "RemoveInstance");
    struct
    {
        int32_t InstanceIndex;
        uint8_t bAllowSlack;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InstanceIndex = (int32_t)InstanceIndex;
    Parms.bAllowSlack = (uint8_t)bAllowSlack;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UOpenWorldHierarchicalInstancedMeshComponent::RemoveBillboards(const struct TArray<int32_t>& BillboardsToRemove, uint8_t bAllowSlack)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldHierarchicalInstancedMeshComponent", "RemoveBillboards");
    struct
    {
        struct TArray<int32_t> BillboardsToRemove;
        uint8_t bAllowSlack;
        int32_t ReturnValue;
    } Parms{};
    Parms.BillboardsToRemove = (struct TArray<int32_t>)BillboardsToRemove;
    Parms.bAllowSlack = (uint8_t)bAllowSlack;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UOpenWorldHierarchicalInstancedMeshComponent::RemoveBillboard(int32_t InstanceIndex, uint8_t bAllowSlack)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldHierarchicalInstancedMeshComponent", "RemoveBillboard");
    struct
    {
        int32_t InstanceIndex;
        uint8_t bAllowSlack;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InstanceIndex = (int32_t)InstanceIndex;
    Parms.bAllowSlack = (uint8_t)bAllowSlack;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<int32_t> UOpenWorldHierarchicalInstancedMeshComponent::QueryInstances(const struct FVector& Origin, float radius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldHierarchicalInstancedMeshComponent", "QueryInstances");
    struct
    {
        struct FVector Origin;
        float radius;
        struct TArray<int32_t> ReturnValue;
    } Parms{};
    Parms.Origin = (struct FVector)Origin;
    Parms.radius = (float)radius;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UOpenWorldHierarchicalInstancedMeshComponent::QueryInstance(const struct FVector& Origin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldHierarchicalInstancedMeshComponent", "QueryInstance");
    struct
    {
        struct FVector Origin;
        int32_t ReturnValue;
    } Parms{};
    Parms.Origin = (struct FVector)Origin;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UOpenWorldHierarchicalInstancedMeshComponent::GetInstanceTransform(int32_t InstanceIndex, struct FTransform& OutInstanceTransform, uint8_t bWorldSpace)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldHierarchicalInstancedMeshComponent", "GetInstanceTransform");
    struct
    {
        int32_t InstanceIndex;
        struct FTransform OutInstanceTransform;
        uint8_t bWorldSpace;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InstanceIndex = (int32_t)InstanceIndex;
    Parms.bWorldSpace = (uint8_t)bWorldSpace;
    this->ProcessEvent(Func, &Parms);
    OutInstanceTransform = Parms.OutInstanceTransform;
    return Parms.ReturnValue;
}

int32_t UOpenWorldHierarchicalInstancedMeshComponent::GetInstanceCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldHierarchicalInstancedMeshComponent", "GetInstanceCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UOpenWorldHierarchicalInstancedMeshComponent::ClearInstances()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldHierarchicalInstancedMeshComponent", "ClearInstances");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

int32_t UOpenWorldHierarchicalInstancedMeshComponent::AddInstanceWorldSpace(const struct FTransform& InstanceWorldTransform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldHierarchicalInstancedMeshComponent", "AddInstanceWorldSpace");
    struct
    {
        struct FTransform InstanceWorldTransform;
        int32_t ReturnValue;
    } Parms{};
    Parms.InstanceWorldTransform = (struct FTransform)InstanceWorldTransform;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UOpenWorldHierarchicalInstancedMeshComponent::AddInstance(const struct FTransform& InstanceTransform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldHierarchicalInstancedMeshComponent", "AddInstance");
    struct
    {
        struct FTransform InstanceTransform;
        int32_t ReturnValue;
    } Parms{};
    Parms.InstanceTransform = (struct FTransform)InstanceTransform;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UOpenWorldHierarchicalInstancedMeshComponent::AddBillboardWorldSpace(const struct FTransform& BillboardWorldTransform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldHierarchicalInstancedMeshComponent", "AddBillboardWorldSpace");
    struct
    {
        struct FTransform BillboardWorldTransform;
        int32_t ReturnValue;
    } Parms{};
    Parms.BillboardWorldTransform = (struct FTransform)BillboardWorldTransform;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UOpenWorldHierarchicalInstancedMeshComponent::AddBillboard(const struct FTransform& InstanceTransform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldHierarchicalInstancedMeshComponent", "AddBillboard");
    struct
    {
        struct FTransform InstanceTransform;
        int32_t ReturnValue;
    } Parms{};
    Parms.InstanceTransform = (struct FTransform)InstanceTransform;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
