#include "RoadRuntime.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ACrossActor
void ACrossActor::UpdateSideMesh(struct UStaticMesh* InPrototype, struct FVector MeshRelativeLocation, struct FRotator MeshRelativeRotation, int32_t SocketIndex, uint8_t IsEnable, uint8_t IsNormalized)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CrossActor", "UpdateSideMesh");
    struct
    {
        struct UStaticMesh* InPrototype;
        struct FVector MeshRelativeLocation;
        struct FRotator MeshRelativeRotation;
        int32_t SocketIndex;
        uint8_t IsEnable;
        uint8_t IsNormalized;
    } Parms{};
    Parms.InPrototype = (struct UStaticMesh*)InPrototype;
    Parms.MeshRelativeLocation = (struct FVector)MeshRelativeLocation;
    Parms.MeshRelativeRotation = (struct FRotator)MeshRelativeRotation;
    Parms.SocketIndex = (int32_t)SocketIndex;
    Parms.IsEnable = (uint8_t)IsEnable;
    Parms.IsNormalized = (uint8_t)IsNormalized;
    this->ProcessEvent(Func, &Parms);
}

void ACrossActor::UpdateSideActor(struct AActor* InPrototype, struct FVector ActorRelativeLocation, struct FRotator ActorRelativeRotation, int32_t SocketIndex, uint8_t IsEnable, uint8_t IsNormalized)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CrossActor", "UpdateSideActor");
    struct
    {
        struct AActor* InPrototype;
        struct FVector ActorRelativeLocation;
        struct FRotator ActorRelativeRotation;
        int32_t SocketIndex;
        uint8_t IsEnable;
        uint8_t IsNormalized;
    } Parms{};
    Parms.InPrototype = (struct AActor*)InPrototype;
    Parms.ActorRelativeLocation = (struct FVector)ActorRelativeLocation;
    Parms.ActorRelativeRotation = (struct FRotator)ActorRelativeRotation;
    Parms.SocketIndex = (int32_t)SocketIndex;
    Parms.IsEnable = (uint8_t)IsEnable;
    Parms.IsNormalized = (uint8_t)IsNormalized;
    this->ProcessEvent(Func, &Parms);
}

void ACrossActor::PushSideMesh(struct UStaticMesh* InPrototype, struct FVector MeshRelativeLocation, struct FRotator MeshRelativeRotation, int32_t SocketIndex, uint8_t IsEnable, uint8_t IsNormalized)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CrossActor", "PushSideMesh");
    struct
    {
        struct UStaticMesh* InPrototype;
        struct FVector MeshRelativeLocation;
        struct FRotator MeshRelativeRotation;
        int32_t SocketIndex;
        uint8_t IsEnable;
        uint8_t IsNormalized;
    } Parms{};
    Parms.InPrototype = (struct UStaticMesh*)InPrototype;
    Parms.MeshRelativeLocation = (struct FVector)MeshRelativeLocation;
    Parms.MeshRelativeRotation = (struct FRotator)MeshRelativeRotation;
    Parms.SocketIndex = (int32_t)SocketIndex;
    Parms.IsEnable = (uint8_t)IsEnable;
    Parms.IsNormalized = (uint8_t)IsNormalized;
    this->ProcessEvent(Func, &Parms);
}

void ACrossActor::PushSideActor(struct AActor* InPrototype, struct FVector ActorRelativeLocation, struct FRotator ActorRelativeRotation, int32_t SocketIndex, uint8_t IsEnable, uint8_t IsNormalized)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CrossActor", "PushSideActor");
    struct
    {
        struct AActor* InPrototype;
        struct FVector ActorRelativeLocation;
        struct FRotator ActorRelativeRotation;
        int32_t SocketIndex;
        uint8_t IsEnable;
        uint8_t IsNormalized;
    } Parms{};
    Parms.InPrototype = (struct AActor*)InPrototype;
    Parms.ActorRelativeLocation = (struct FVector)ActorRelativeLocation;
    Parms.ActorRelativeRotation = (struct FRotator)ActorRelativeRotation;
    Parms.SocketIndex = (int32_t)SocketIndex;
    Parms.IsEnable = (uint8_t)IsEnable;
    Parms.IsNormalized = (uint8_t)IsNormalized;
    this->ProcessEvent(Func, &Parms);
}

void ACrossActor::DestroySideObjects()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CrossActor", "DestroySideObjects");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ARoadActor
void ARoadActor::UpdateSplineMesh(int32_t MeshIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RoadActor", "UpdateSplineMesh");
    struct
    {
        int32_t MeshIndex;
    } Parms{};
    Parms.MeshIndex = (int32_t)MeshIndex;
    this->ProcessEvent(Func, &Parms);
}

void ARoadActor::UpdateSideMeshes(struct UStaticMesh* InPrototype, struct FVector MeshRelativeLocation, struct FRotator MeshRelativeRotation, int32_t SocketIndex, int32_t InShift, int32_t InSpacing, uint8_t IsEnable, uint8_t IsNormalized)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RoadActor", "UpdateSideMeshes");
    struct
    {
        struct UStaticMesh* InPrototype;
        struct FVector MeshRelativeLocation;
        struct FRotator MeshRelativeRotation;
        int32_t SocketIndex;
        int32_t InShift;
        int32_t InSpacing;
        uint8_t IsEnable;
        uint8_t IsNormalized;
    } Parms{};
    Parms.InPrototype = (struct UStaticMesh*)InPrototype;
    Parms.MeshRelativeLocation = (struct FVector)MeshRelativeLocation;
    Parms.MeshRelativeRotation = (struct FRotator)MeshRelativeRotation;
    Parms.SocketIndex = (int32_t)SocketIndex;
    Parms.InShift = (int32_t)InShift;
    Parms.InSpacing = (int32_t)InSpacing;
    Parms.IsEnable = (uint8_t)IsEnable;
    Parms.IsNormalized = (uint8_t)IsNormalized;
    this->ProcessEvent(Func, &Parms);
}

void ARoadActor::UpdateSideActor(struct AActor* InPrototype, struct FVector ActorRelativeLocation, struct FRotator ActorRelativeRotation, int32_t SocketIndex, int32_t InShift, int32_t InSpacing, uint8_t IsEnable, uint8_t IsNormalized)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RoadActor", "UpdateSideActor");
    struct
    {
        struct AActor* InPrototype;
        struct FVector ActorRelativeLocation;
        struct FRotator ActorRelativeRotation;
        int32_t SocketIndex;
        int32_t InShift;
        int32_t InSpacing;
        uint8_t IsEnable;
        uint8_t IsNormalized;
    } Parms{};
    Parms.InPrototype = (struct AActor*)InPrototype;
    Parms.ActorRelativeLocation = (struct FVector)ActorRelativeLocation;
    Parms.ActorRelativeRotation = (struct FRotator)ActorRelativeRotation;
    Parms.SocketIndex = (int32_t)SocketIndex;
    Parms.InShift = (int32_t)InShift;
    Parms.InSpacing = (int32_t)InSpacing;
    Parms.IsEnable = (uint8_t)IsEnable;
    Parms.IsNormalized = (uint8_t)IsNormalized;
    this->ProcessEvent(Func, &Parms);
}

void ARoadActor::UpdateSegment(int32_t SegmentIndex, struct USplineComponent* SplineComponent, struct UStaticMesh* StaticMesh, ESplineMeshAxis inAxis)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RoadActor", "UpdateSegment");
    struct
    {
        int32_t SegmentIndex;
        struct USplineComponent* SplineComponent;
        struct UStaticMesh* StaticMesh;
        enum ESplineMeshAxis inAxis;
    } Parms{};
    Parms.SegmentIndex = (int32_t)SegmentIndex;
    Parms.SplineComponent = (struct USplineComponent*)SplineComponent;
    Parms.StaticMesh = (struct UStaticMesh*)StaticMesh;
    Parms.inAxis = (enum ESplineMeshAxis)inAxis;
    this->ProcessEvent(Func, &Parms);
}

void ARoadActor::PushSideMesh(struct UStaticMesh* InPrototype, struct FVector MeshRelativeLocation, struct FRotator MeshRelativeRotation, int32_t SocketIndex, int32_t InShift, int32_t InSpacing, uint8_t IsEnable, uint8_t IsNormalized)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RoadActor", "PushSideMesh");
    struct
    {
        struct UStaticMesh* InPrototype;
        struct FVector MeshRelativeLocation;
        struct FRotator MeshRelativeRotation;
        int32_t SocketIndex;
        int32_t InShift;
        int32_t InSpacing;
        uint8_t IsEnable;
        uint8_t IsNormalized;
    } Parms{};
    Parms.InPrototype = (struct UStaticMesh*)InPrototype;
    Parms.MeshRelativeLocation = (struct FVector)MeshRelativeLocation;
    Parms.MeshRelativeRotation = (struct FRotator)MeshRelativeRotation;
    Parms.SocketIndex = (int32_t)SocketIndex;
    Parms.InShift = (int32_t)InShift;
    Parms.InSpacing = (int32_t)InSpacing;
    Parms.IsEnable = (uint8_t)IsEnable;
    Parms.IsNormalized = (uint8_t)IsNormalized;
    this->ProcessEvent(Func, &Parms);
}

void ARoadActor::PushSideActor(struct AActor* InPrototype, struct FVector ActorRelativeLocation, struct FRotator ActorRelativeRotation, int32_t SocketIndex, int32_t InShift, int32_t InSpacing, uint8_t IsEnable, uint8_t IsNormalized)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RoadActor", "PushSideActor");
    struct
    {
        struct AActor* InPrototype;
        struct FVector ActorRelativeLocation;
        struct FRotator ActorRelativeRotation;
        int32_t SocketIndex;
        int32_t InShift;
        int32_t InSpacing;
        uint8_t IsEnable;
        uint8_t IsNormalized;
    } Parms{};
    Parms.InPrototype = (struct AActor*)InPrototype;
    Parms.ActorRelativeLocation = (struct FVector)ActorRelativeLocation;
    Parms.ActorRelativeRotation = (struct FRotator)ActorRelativeRotation;
    Parms.SocketIndex = (int32_t)SocketIndex;
    Parms.InShift = (int32_t)InShift;
    Parms.InSpacing = (int32_t)InSpacing;
    Parms.IsEnable = (uint8_t)IsEnable;
    Parms.IsNormalized = (uint8_t)IsNormalized;
    this->ProcessEvent(Func, &Parms);
}

void ARoadActor::DestroySideObjects()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RoadActor", "DestroySideObjects");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ARoadActor::ClearSplineMeshes()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RoadActor", "ClearSplineMeshes");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

float ARoadActor::ApproxLength(const struct FInterpCurveVector& SplineInfo, float Start, float End, int32_t ApproxSections)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("RoadActor", "ApproxLength");
    struct
    {
        struct FInterpCurveVector SplineInfo;
        float Start;
        float End;
        int32_t ApproxSections;
        float ReturnValue;
    } Parms{};
    Parms.SplineInfo = (struct FInterpCurveVector)SplineInfo;
    Parms.Start = (float)Start;
    Parms.End = (float)End;
    Parms.ApproxSections = (int32_t)ApproxSections;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ARoadActor::AddSplineMesh(int32_t MeshIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RoadActor", "AddSplineMesh");
    struct
    {
        int32_t MeshIndex;
    } Parms{};
    Parms.MeshIndex = (int32_t)MeshIndex;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
