#include "GeometryCache.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- AGeometryCacheActor::* ----
struct UGeometryCacheComponent* AGeometryCacheActor::GetGeometryCacheComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeometryCacheActor", "GetGeometryCacheComponent");
    struct
    {
        struct UGeometryCacheComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGeometryCacheComponent::* ----
void UGeometryCacheComponent::TickAtThisTime(float Time, uint8_t bInIsRunning, uint8_t bInBackwards, uint8_t bInIsLooping)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeometryCacheComponent", "TickAtThisTime");
    struct
    {
        float Time;
        uint8_t bInIsRunning;
        uint8_t bInBackwards;
        uint8_t bInIsLooping;
    } Parms{};
    Parms.Time = (float)Time;
    Parms.bInIsRunning = (uint8_t)bInIsRunning;
    Parms.bInBackwards = (uint8_t)bInBackwards;
    Parms.bInIsLooping = (uint8_t)bInIsLooping;
    this->ProcessEvent(Func, &Parms);
}

void UGeometryCacheComponent::Stop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeometryCacheComponent", "Stop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGeometryCacheComponent::SetStartTimeOffset(float NewStartTimeOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeometryCacheComponent", "SetStartTimeOffset");
    struct
    {
        float NewStartTimeOffset;
    } Parms{};
    Parms.NewStartTimeOffset = (float)NewStartTimeOffset;
    this->ProcessEvent(Func, &Parms);
}

void UGeometryCacheComponent::SetPlaybackSpeed(float NewPlaybackSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeometryCacheComponent", "SetPlaybackSpeed");
    struct
    {
        float NewPlaybackSpeed;
    } Parms{};
    Parms.NewPlaybackSpeed = (float)NewPlaybackSpeed;
    this->ProcessEvent(Func, &Parms);
}

void UGeometryCacheComponent::SetLooping(uint8_t bNewLooping)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeometryCacheComponent", "SetLooping");
    struct
    {
        uint8_t bNewLooping;
    } Parms{};
    Parms.bNewLooping = (uint8_t)bNewLooping;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGeometryCacheComponent::SetGeometryCache(struct UGeometryCache* NewGeomCache)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeometryCacheComponent", "SetGeometryCache");
    struct
    {
        struct UGeometryCache* NewGeomCache;
        uint8_t ReturnValue;
    } Parms{};
    Parms.NewGeomCache = (struct UGeometryCache*)NewGeomCache;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGeometryCacheComponent::PlayReversedFromEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeometryCacheComponent", "PlayReversedFromEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGeometryCacheComponent::PlayReversed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeometryCacheComponent", "PlayReversed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGeometryCacheComponent::PlayFromStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeometryCacheComponent", "PlayFromStart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGeometryCacheComponent::Play()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeometryCacheComponent", "Play");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGeometryCacheComponent::Pause()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeometryCacheComponent", "Pause");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGeometryCacheComponent::IsPlayingReversed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeometryCacheComponent", "IsPlayingReversed");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGeometryCacheComponent::IsPlaying()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeometryCacheComponent", "IsPlaying");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGeometryCacheComponent::IsLooping()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeometryCacheComponent", "IsLooping");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGeometryCacheComponent::GetStartTimeOffset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeometryCacheComponent", "GetStartTimeOffset");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGeometryCacheComponent::GetPlaybackSpeed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeometryCacheComponent", "GetPlaybackSpeed");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGeometryCacheComponent::GetPlaybackDirection()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeometryCacheComponent", "GetPlaybackDirection");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGeometryCacheComponent::GetNumberOfFrames()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeometryCacheComponent", "GetNumberOfFrames");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGeometryCacheComponent::GetDuration()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeometryCacheComponent", "GetDuration");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGeometryCacheComponent::GetAnimationTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeometryCacheComponent", "GetAnimationTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGeometryCacheTrack_FlipbookAnimation::* ----
void UGeometryCacheTrack_FlipbookAnimation::AddMeshSample(const struct FGeometryCacheMeshData& MeshData, float SampleTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeometryCacheTrack_FlipbookAnimation", "AddMeshSample");
    struct
    {
        struct FGeometryCacheMeshData MeshData;
        float SampleTime;
    } Parms{};
    Parms.MeshData = (struct FGeometryCacheMeshData)MeshData;
    Parms.SampleTime = (float)SampleTime;
    this->ProcessEvent(Func, &Parms);
}

// ---- UGeometryCacheTrack_TransformAnimation::* ----
void UGeometryCacheTrack_TransformAnimation::SetMesh(const struct FGeometryCacheMeshData& NewMeshData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeometryCacheTrack_TransformAnimation", "SetMesh");
    struct
    {
        struct FGeometryCacheMeshData NewMeshData;
    } Parms{};
    Parms.NewMeshData = (struct FGeometryCacheMeshData)NewMeshData;
    this->ProcessEvent(Func, &Parms);
}

// ---- UGeometryCacheTrack_TransformGroupAnimation::* ----
void UGeometryCacheTrack_TransformGroupAnimation::SetMesh(const struct FGeometryCacheMeshData& NewMeshData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeometryCacheTrack_TransformGroupAnimation", "SetMesh");
    struct
    {
        struct FGeometryCacheMeshData NewMeshData;
    } Parms{};
    Parms.NewMeshData = (struct FGeometryCacheMeshData)NewMeshData;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
