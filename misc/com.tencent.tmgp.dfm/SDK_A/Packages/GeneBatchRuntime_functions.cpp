#include "GeneBatchRuntime.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UGeneBatchRuntimeComponent::* ----
void UGeneBatchRuntimeComponent::SetQuality(int32_t InQuality)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeneBatchRuntimeComponent", "SetQuality");
    struct
    {
        int32_t InQuality;
    } Parms{};
    Parms.InQuality = (int32_t)InQuality;
    this->ProcessEvent(Func, &Parms);
}

int32_t UGeneBatchRuntimeComponent::GetQuality()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeneBatchRuntimeComponent", "GetQuality");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGeneBatchRuntimeComponent::GetPOIIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeneBatchRuntimeComponent", "GetPOIIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UBatchStaticMesh::* ----
struct UBatchStaticMesh* UBatchStaticMesh::RequestBatch(struct UGeneBatchRuntimeSubsystem* GBRuntime, int32_t BatchType, int32_t MeshID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BatchStaticMesh", "RequestBatch");
    struct
    {
        struct UGeneBatchRuntimeSubsystem* GBRuntime;
        int32_t BatchType;
        int32_t MeshID;
        struct UBatchStaticMesh* ReturnValue;
    } Parms{};
    Parms.GBRuntime = (struct UGeneBatchRuntimeSubsystem*)GBRuntime;
    Parms.BatchType = (int32_t)BatchType;
    Parms.MeshID = (int32_t)MeshID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBatchStaticMesh::OnBatchCompleted__DelegateSignature(struct UStaticMesh* StaticMesh)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BatchStaticMesh", "OnBatchCompleted__DelegateSignature");
    struct
    {
        struct UStaticMesh* StaticMesh;
    } Parms{};
    Parms.StaticMesh = (struct UStaticMesh*)StaticMesh;
    this->ProcessEvent(Func, &Parms);
}

void UBatchStaticMesh::Execute(struct UStaticMesh* StaticMesh)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BatchStaticMesh", "Execute");
    struct
    {
        struct UStaticMesh* StaticMesh;
    } Parms{};
    Parms.StaticMesh = (struct UStaticMesh*)StaticMesh;
    this->ProcessEvent(Func, &Parms);
}

// ---- UGeneBatchRuntimeSubsystem::* ----
struct TArray<struct UPrimitiveComponent*> UGeneBatchRuntimeSubsystem::FindLeafHLODChildrenCurrent(struct UPrimitiveComponent* PrimitiveComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeneBatchRuntimeSubsystem", "FindLeafHLODChildrenCurrent");
    struct
    {
        struct UPrimitiveComponent* PrimitiveComponent;
        struct TArray<struct UPrimitiveComponent*> ReturnValue;
    } Parms{};
    Parms.PrimitiveComponent = (struct UPrimitiveComponent*)PrimitiveComponent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGeneBatchRuntimeSubsystem::FindAndLoadAllRuntimeComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeneBatchRuntimeSubsystem", "FindAndLoadAllRuntimeComponent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
