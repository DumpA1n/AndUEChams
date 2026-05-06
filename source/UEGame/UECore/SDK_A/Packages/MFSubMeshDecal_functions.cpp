#include "MFSubMeshDecal.hpp"
#include "Engine.hpp"
#include "ProceduralMeshComponent.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// AMFSubMeshDecalActor
void AMFSubMeshDecalActor::RegenSubMeshCheckTimerTick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFSubMeshDecalActor", "RegenSubMeshCheckTimerTick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UMFSubMeshDecalComponent* AMFSubMeshDecalActor::GetSubMeshDecalComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFSubMeshDecalActor", "GetSubMeshDecalComponent");
    struct
    {
        struct UMFSubMeshDecalComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFSubMeshDecalComponent
void UMFSubMeshDecalComponent::WaitTasksCompletedAndClearAllData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFSubMeshDecalComponent", "WaitTasksCompletedAndClearAllData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFSubMeshDecalComponent::SetVertNormalOffsetForStaticMesh(float InOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFSubMeshDecalComponent", "SetVertNormalOffsetForStaticMesh");
    struct
    {
        float InOffset;
    } Parms{};
    Parms.InOffset = (float)InOffset;
    this->ProcessEvent(Func, &Parms);
}

void UMFSubMeshDecalComponent::SetVertNormalOffsetForLandscape(float InOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFSubMeshDecalComponent", "SetVertNormalOffsetForLandscape");
    struct
    {
        float InOffset;
    } Parms{};
    Parms.InOffset = (float)InOffset;
    this->ProcessEvent(Func, &Parms);
}

void UMFSubMeshDecalComponent::SetTranslucencyPriority(int32_t Priority)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFSubMeshDecalComponent", "SetTranslucencyPriority");
    struct
    {
        int32_t Priority;
    } Parms{};
    Parms.Priority = (int32_t)Priority;
    this->ProcessEvent(Func, &Parms);
}

void UMFSubMeshDecalComponent::SetMaxCullingDegree(float InMaxCullingDegree)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFSubMeshDecalComponent", "SetMaxCullingDegree");
    struct
    {
        float InMaxCullingDegree;
    } Parms{};
    Parms.InMaxCullingDegree = (float)InMaxCullingDegree;
    this->ProcessEvent(Func, &Parms);
}

void UMFSubMeshDecalComponent::SetDecalSize(const struct FVector& InDecalSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFSubMeshDecalComponent", "SetDecalSize");
    struct
    {
        struct FVector InDecalSize;
    } Parms{};
    Parms.InDecalSize = (struct FVector)InDecalSize;
    this->ProcessEvent(Func, &Parms);
}

void UMFSubMeshDecalComponent::SetDecalMaterial(struct UMaterialInterface* InMaterial)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFSubMeshDecalComponent", "SetDecalMaterial");
    struct
    {
        struct UMaterialInterface* InMaterial;
    } Parms{};
    Parms.InMaterial = (struct UMaterialInterface*)InMaterial;
    this->ProcessEvent(Func, &Parms);
}

void UMFSubMeshDecalComponent::MarkNeedForRecreateDecal(bool bForce)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFSubMeshDecalComponent", "MarkNeedForRecreateDecal");
    struct
    {
        bool bForce;
    } Parms{};
    Parms.bForce = (bool)bForce;
    this->ProcessEvent(Func, &Parms);
}

float UMFSubMeshDecalComponent::GetVertPositionNormalOffset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFSubMeshDecalComponent", "GetVertPositionNormalOffset");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFSubMeshDecalComponent::GetVertNormalOffsetForLandscape()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFSubMeshDecalComponent", "GetVertNormalOffsetForLandscape");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UProceduralMeshComponent* UMFSubMeshDecalComponent::GetStaticProceduralMeshComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFSubMeshDecalComponent", "GetStaticProceduralMeshComponent");
    struct
    {
        struct UProceduralMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UMFSubMeshDecalComponent::GetProjectionDirection()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFSubMeshDecalComponent", "GetProjectionDirection");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFSubMeshDecalComponent::GetMaxCullingDegree()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFSubMeshDecalComponent", "GetMaxCullingDegree");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UProceduralMeshComponent*> UMFSubMeshDecalComponent::GetDynamicProceduralMeshComponents()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFSubMeshDecalComponent", "GetDynamicProceduralMeshComponents");
    struct
    {
        struct TArray<struct UProceduralMeshComponent*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UMFSubMeshDecalComponent::GetDecalSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFSubMeshDecalComponent", "GetDecalSize");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMaterialInterface* UMFSubMeshDecalComponent::GetDecalMaterial()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFSubMeshDecalComponent", "GetDecalMaterial");
    struct
    {
        struct UMaterialInterface* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
