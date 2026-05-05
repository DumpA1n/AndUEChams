#include "DestructionClusterRuntime.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UDesClusterInstancedStaticMeshComponent
void UDesClusterInstancedStaticMeshComponent::SetInstancePartTransformArray(int32_t instanceid, const struct TArray<struct FMatrix>& PartTransforms, uint8_t bStatic)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DesClusterInstancedStaticMeshComponent", "SetInstancePartTransformArray");
    struct
    {
        int32_t instanceid;
        struct TArray<struct FMatrix> PartTransforms;
        uint8_t bStatic;
    } Parms{};
    Parms.instanceid = (int32_t)instanceid;
    Parms.PartTransforms = (struct TArray<struct FMatrix>)PartTransforms;
    Parms.bStatic = (uint8_t)bStatic;
    this->ProcessEvent(Func, &Parms);
}

void UDesClusterInstancedStaticMeshComponent::SetInstanceBrokenState(int32_t instanceid, int64_t BrokenState, uint8_t bMarkDirty)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DesClusterInstancedStaticMeshComponent", "SetInstanceBrokenState");
    struct
    {
        int32_t instanceid;
        int64_t BrokenState;
        uint8_t bMarkDirty;
    } Parms{};
    Parms.instanceid = (int32_t)instanceid;
    Parms.BrokenState = (int64_t)BrokenState;
    Parms.bMarkDirty = (uint8_t)bMarkDirty;
    this->ProcessEvent(Func, &Parms);
}

// ADesClusterTestActor
void ADesClusterTestActor::EnableSimulation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DesClusterTestActor", "EnableSimulation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDesHierarchicalInstancedStaticMeshComponent
void UDesHierarchicalInstancedStaticMeshComponent::SetInstanceBrokenState(int32_t instanceid, int64_t BrokenState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DesHierarchicalInstancedStaticMeshComponent", "SetInstanceBrokenState");
    struct
    {
        int32_t instanceid;
        int64_t BrokenState;
    } Parms{};
    Parms.instanceid = (int32_t)instanceid;
    Parms.BrokenState = (int64_t)BrokenState;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
