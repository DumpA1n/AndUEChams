#include "MRMesh.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UMeshReconstructorBase::* ----
void UMeshReconstructorBase::StopReconstruction()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshReconstructorBase", "StopReconstruction");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMeshReconstructorBase::StartReconstruction()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshReconstructorBase", "StartReconstruction");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMeshReconstructorBase::PauseReconstruction()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshReconstructorBase", "PauseReconstruction");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UMeshReconstructorBase::IsReconstructionStarted()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshReconstructorBase", "IsReconstructionStarted");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMeshReconstructorBase::IsReconstructionPaused()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshReconstructorBase", "IsReconstructionPaused");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMeshReconstructorBase::DisconnectMRMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshReconstructorBase", "DisconnectMRMesh");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMeshReconstructorBase::ConnectMRMesh(struct UMRMeshComponent* Mesh)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MeshReconstructorBase", "ConnectMRMesh");
    struct
    {
        struct UMRMeshComponent* Mesh;
    } Parms{};
    Parms.Mesh = (struct UMRMeshComponent*)Mesh;
    this->ProcessEvent(Func, &Parms);
}

// ---- UMockDataMeshTrackerComponent::* ----
void UMockDataMeshTrackerComponent::OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, const struct TArray<struct FVector>& Vertices, const struct TArray<int32_t>& Triangles, const struct TArray<struct FVector>& Normals, const struct TArray<float>& Confidence)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MockDataMeshTrackerComponent", "OnMockDataMeshTrackerUpdated__DelegateSignature");
    struct
    {
        int32_t Index;
        struct TArray<struct FVector> Vertices;
        struct TArray<int32_t> Triangles;
        struct TArray<struct FVector> Normals;
        struct TArray<float> Confidence;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.Vertices = (struct TArray<struct FVector>)Vertices;
    Parms.Triangles = (struct TArray<int32_t>)Triangles;
    Parms.Normals = (struct TArray<struct FVector>)Normals;
    Parms.Confidence = (struct TArray<float>)Confidence;
    this->ProcessEvent(Func, &Parms);
}

void UMockDataMeshTrackerComponent::DisconnectMRMesh(struct UMRMeshComponent* InMRMeshPtr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MockDataMeshTrackerComponent", "DisconnectMRMesh");
    struct
    {
        struct UMRMeshComponent* InMRMeshPtr;
    } Parms{};
    Parms.InMRMeshPtr = (struct UMRMeshComponent*)InMRMeshPtr;
    this->ProcessEvent(Func, &Parms);
}

void UMockDataMeshTrackerComponent::ConnectMRMesh(struct UMRMeshComponent* InMRMeshPtr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MockDataMeshTrackerComponent", "ConnectMRMesh");
    struct
    {
        struct UMRMeshComponent* InMRMeshPtr;
    } Parms{};
    Parms.InMRMeshPtr = (struct UMRMeshComponent*)InMRMeshPtr;
    this->ProcessEvent(Func, &Parms);
}

// ---- UMRMeshComponent::* ----
uint8_t UMRMeshComponent::IsConnected()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MRMeshComponent", "IsConnected");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMRMeshComponent::ForceNavMeshUpdate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MRMeshComponent", "ForceNavMeshUpdate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMRMeshComponent::Clear()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MRMeshComponent", "Clear");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
