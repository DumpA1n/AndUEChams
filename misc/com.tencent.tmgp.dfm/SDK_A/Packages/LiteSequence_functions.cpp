#include "LiteSequence.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- ULiteSequenceConsoleCommand::* ----
void ULiteSequenceConsoleCommand::TestPlayLiteSequence(const struct FName& SequenceName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LiteSequenceConsoleCommand", "TestPlayLiteSequence");
    struct
    {
        struct FName SequenceName;
    } Parms{};
    Parms.SequenceName = (struct FName)SequenceName;
    this->ProcessEvent(Func, &Parms);
}

// ---- ALiteSequencePerformanceTest::* ----
void ALiteSequencePerformanceTest::PerformanceTestStart(uint8_t bTestLevelSequence, float InRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LiteSequencePerformanceTest", "PerformanceTestStart");
    struct
    {
        uint8_t bTestLevelSequence;
        float InRate;
    } Parms{};
    Parms.bTestLevelSequence = (uint8_t)bTestLevelSequence;
    Parms.InRate = (float)InRate;
    this->ProcessEvent(Func, &Parms);
}

void ALiteSequencePerformanceTest::PerformanceTestEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LiteSequencePerformanceTest", "PerformanceTestEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- ULiteSequencePlayerComponent::* ----
void ULiteSequencePlayerComponent::TryLoadAudioInternal(const struct FSoftObjectPath& AudioPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LiteSequencePlayerComponent", "TryLoadAudioInternal");
    struct
    {
        struct FSoftObjectPath AudioPath;
    } Parms{};
    Parms.AudioPath = (struct FSoftObjectPath)AudioPath;
    this->ProcessEvent(Func, &Parms);
}

void ULiteSequencePlayerComponent::TryLoadAudio(const struct FName& InAudioID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LiteSequencePlayerComponent", "TryLoadAudio");
    struct
    {
        struct FName InAudioID;
    } Parms{};
    Parms.InAudioID = (struct FName)InAudioID;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ULiteSequencePlayerComponent::TryLoadAssetInternal()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LiteSequencePlayerComponent", "TryLoadAssetInternal");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULiteSequencePlayerComponent::TryLoadAssetFromDataTable(const struct FName& InResourceID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LiteSequencePlayerComponent", "TryLoadAssetFromDataTable");
    struct
    {
        struct FName InResourceID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InResourceID = (struct FName)InResourceID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULiteSequencePlayerComponent::Stop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LiteSequencePlayerComponent", "Stop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULiteSequencePlayerComponent::SetTimeRange(float StartTimeSeconds, float DurationSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LiteSequencePlayerComponent", "SetTimeRange");
    struct
    {
        float StartTimeSeconds;
        float DurationSeconds;
    } Parms{};
    Parms.StartTimeSeconds = (float)StartTimeSeconds;
    Parms.DurationSeconds = (float)DurationSeconds;
    this->ProcessEvent(Func, &Parms);
}

void ULiteSequencePlayerComponent::SetPlaybackTransform(const struct FTransform& TransformOverride)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LiteSequencePlayerComponent", "SetPlaybackTransform");
    struct
    {
        struct FTransform TransformOverride;
    } Parms{};
    Parms.TransformOverride = (struct FTransform)TransformOverride;
    this->ProcessEvent(Func, &Parms);
}

void ULiteSequencePlayerComponent::SetPlaybackScale(const struct FVector& InScale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LiteSequencePlayerComponent", "SetPlaybackScale");
    struct
    {
        struct FVector InScale;
    } Parms{};
    Parms.InScale = (struct FVector)InScale;
    this->ProcessEvent(Func, &Parms);
}

void ULiteSequencePlayerComponent::SetPlaybackRotation(const struct FRotator& InRotation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LiteSequencePlayerComponent", "SetPlaybackRotation");
    struct
    {
        struct FRotator InRotation;
    } Parms{};
    Parms.InRotation = (struct FRotator)InRotation;
    this->ProcessEvent(Func, &Parms);
}

void ULiteSequencePlayerComponent::SetPlaybackPosition(const struct FVector& InWorldPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LiteSequencePlayerComponent", "SetPlaybackPosition");
    struct
    {
        struct FVector InWorldPosition;
    } Parms{};
    Parms.InWorldPosition = (struct FVector)InWorldPosition;
    this->ProcessEvent(Func, &Parms);
}

void ULiteSequencePlayerComponent::SetPlaybackParams(struct FLiteSequencePlaybackParams InParams)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LiteSequencePlayerComponent", "SetPlaybackParams");
    struct
    {
        struct FLiteSequencePlaybackParams InParams;
    } Parms{};
    Parms.InParams = (struct FLiteSequencePlaybackParams)InParams;
    this->ProcessEvent(Func, &Parms);
}

void ULiteSequencePlayerComponent::SetLooping(int32_t NumLoops)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LiteSequencePlayerComponent", "SetLooping");
    struct
    {
        int32_t NumLoops;
    } Parms{};
    Parms.NumLoops = (int32_t)NumLoops;
    this->ProcessEvent(Func, &Parms);
}

void ULiteSequencePlayerComponent::SetFrameRate(struct FFrameRate FrameRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LiteSequencePlayerComponent", "SetFrameRate");
    struct
    {
        struct FFrameRate FrameRate;
    } Parms{};
    Parms.FrameRate = (struct FFrameRate)FrameRate;
    this->ProcessEvent(Func, &Parms);
}

void ULiteSequencePlayerComponent::SetFrameRange(int32_t StartFrame, int32_t Duration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LiteSequencePlayerComponent", "SetFrameRange");
    struct
    {
        int32_t StartFrame;
        int32_t Duration;
    } Parms{};
    Parms.StartFrame = (int32_t)StartFrame;
    Parms.Duration = (int32_t)Duration;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ULiteSequencePlayerComponent::RecycleToPool(struct ULiteSequencePlayerComponent* Component)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LiteSequencePlayerComponent", "RecycleToPool");
    struct
    {
        struct ULiteSequencePlayerComponent* Component;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Component = (struct ULiteSequencePlayerComponent*)Component;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULiteSequencePlayerComponent::RecycleLiteSequencePlayer(struct ULiteSequencePlayerComponent* Component)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LiteSequencePlayerComponent", "RecycleLiteSequencePlayer");
    struct
    {
        struct ULiteSequencePlayerComponent* Component;
    } Parms{};
    Parms.Component = (struct ULiteSequencePlayerComponent*)Component;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULiteSequencePlayerComponent::PlayAttachAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LiteSequencePlayerComponent", "PlayAttachAudio");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULiteSequencePlayerComponent::Play()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LiteSequencePlayerComponent", "Play");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULiteSequencePlayerComponent::Pause()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LiteSequencePlayerComponent", "Pause");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULiteSequencePlayerComponent::OnAudioLoaded(const struct FSoftObjectPath& ResourcePaths)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LiteSequencePlayerComponent", "OnAudioLoaded");
    struct
    {
        struct FSoftObjectPath ResourcePaths;
    } Parms{};
    Parms.ResourcePaths = (struct FSoftObjectPath)ResourcePaths;
    this->ProcessEvent(Func, &Parms);
}

void ULiteSequencePlayerComponent::OnAssetLoaded(const struct FSoftObjectPath& ResourcePaths)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LiteSequencePlayerComponent", "OnAssetLoaded");
    struct
    {
        struct FSoftObjectPath ResourcePaths;
    } Parms{};
    Parms.ResourcePaths = (struct FSoftObjectPath)ResourcePaths;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ULiteSequencePlayerComponent::IsStopped()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LiteSequencePlayerComponent", "IsStopped");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULiteSequencePlayerComponent::IsPlaying()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LiteSequencePlayerComponent", "IsPlaying");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULiteSequencePlayerComponent::IsPaused()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LiteSequencePlayerComponent", "IsPaused");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULiteSequencePlayerComponent::IsInObjectPool()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LiteSequencePlayerComponent", "IsInObjectPool");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULiteSequencePlayerComponent::IsBlamedCharacter1P()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LiteSequencePlayerComponent", "IsBlamedCharacter1P");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FQualifiedFrameTime ULiteSequencePlayerComponent::GetStartTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LiteSequencePlayerComponent", "GetStartTime");
    struct
    {
        struct FQualifiedFrameTime ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTransform ULiteSequencePlayerComponent::GetPlaybackTransform()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LiteSequencePlayerComponent", "GetPlaybackTransform");
    struct
    {
        struct FTransform ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FFrameRate ULiteSequencePlayerComponent::GetFrameRate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LiteSequencePlayerComponent", "GetFrameRate");
    struct
    {
        struct FFrameRate ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ULiteSequencePlayerComponent::GetFrameDuration()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LiteSequencePlayerComponent", "GetFrameDuration");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FQualifiedFrameTime ULiteSequencePlayerComponent::GetEndTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LiteSequencePlayerComponent", "GetEndTime");
    struct
    {
        struct FQualifiedFrameTime ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FQualifiedFrameTime ULiteSequencePlayerComponent::GetDuration()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LiteSequencePlayerComponent", "GetDuration");
    struct
    {
        struct FQualifiedFrameTime ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FQualifiedFrameTime ULiteSequencePlayerComponent::GetCurrentTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LiteSequencePlayerComponent", "GetCurrentTime");
    struct
    {
        struct FQualifiedFrameTime ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ULiteSequence* ULiteSequencePlayerComponent::CreateLiteSequenceFromOriginResolve()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LiteSequencePlayerComponent", "CreateLiteSequenceFromOriginResolve");
    struct
    {
        struct ULiteSequence* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ULiteSequence* ULiteSequencePlayerComponent::CreateLiteSequenceFromOriginLoad()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LiteSequencePlayerComponent", "CreateLiteSequenceFromOriginLoad");
    struct
    {
        struct ULiteSequence* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULiteSequencePlayerComponent::CancelLoadAsset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LiteSequencePlayerComponent", "CancelLoadAsset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct ULiteSequencePlayerComponent* ULiteSequencePlayerComponent::AcquireLiteSequencePlayerInternal(struct UObject* Outer, struct ULiteSequence* LiteSequence, const struct FTransform& PlayTransform, uint8_t bUseObjectPool, uint8_t bUseSubObjectPool, uint8_t bAutoRecycle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LiteSequencePlayerComponent", "AcquireLiteSequencePlayerInternal");
    struct
    {
        struct UObject* Outer;
        struct ULiteSequence* LiteSequence;
        struct FTransform PlayTransform;
        uint8_t bUseObjectPool;
        uint8_t bUseSubObjectPool;
        uint8_t bAutoRecycle;
        struct ULiteSequencePlayerComponent* ReturnValue;
    } Parms{};
    Parms.Outer = (struct UObject*)Outer;
    Parms.LiteSequence = (struct ULiteSequence*)LiteSequence;
    Parms.PlayTransform = (struct FTransform)PlayTransform;
    Parms.bUseObjectPool = (uint8_t)bUseObjectPool;
    Parms.bUseSubObjectPool = (uint8_t)bUseSubObjectPool;
    Parms.bAutoRecycle = (uint8_t)bAutoRecycle;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ULiteSequencePlayerComponent* ULiteSequencePlayerComponent::AcquireLiteSequencePlayer(struct UObject* Outer, struct FName InResourceID, const struct FTransform& PlayTransform, struct AActor* CreatorOwner, uint8_t bUseObjectPool, uint8_t bUseSubObjectPool, struct USceneComponent* Socket, struct FName InSocketName, uint8_t bAutoRecycle, struct ACHARACTER* InCharacterToBlame, float RTPCValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LiteSequencePlayerComponent", "AcquireLiteSequencePlayer");
    struct
    {
        struct UObject* Outer;
        struct FName InResourceID;
        struct FTransform PlayTransform;
        struct AActor* CreatorOwner;
        uint8_t bUseObjectPool;
        uint8_t bUseSubObjectPool;
        struct USceneComponent* Socket;
        struct FName InSocketName;
        uint8_t bAutoRecycle;
        struct ACHARACTER* InCharacterToBlame;
        float RTPCValue;
        struct ULiteSequencePlayerComponent* ReturnValue;
    } Parms{};
    Parms.Outer = (struct UObject*)Outer;
    Parms.InResourceID = (struct FName)InResourceID;
    Parms.PlayTransform = (struct FTransform)PlayTransform;
    Parms.CreatorOwner = (struct AActor*)CreatorOwner;
    Parms.bUseObjectPool = (uint8_t)bUseObjectPool;
    Parms.bUseSubObjectPool = (uint8_t)bUseSubObjectPool;
    Parms.Socket = (struct USceneComponent*)Socket;
    Parms.InSocketName = (struct FName)InSocketName;
    Parms.bAutoRecycle = (uint8_t)bAutoRecycle;
    Parms.InCharacterToBlame = (struct ACHARACTER*)InCharacterToBlame;
    Parms.RTPCValue = (float)RTPCValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ULiteSequencePlayerComponent* ULiteSequencePlayerComponent::AcquireFromPool(struct UObject* WorldContext, int32_t SubTypeHash)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LiteSequencePlayerComponent", "AcquireFromPool");
    struct
    {
        struct UObject* WorldContext;
        int32_t SubTypeHash;
        struct ULiteSequencePlayerComponent* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.SubTypeHash = (int32_t)SubTypeHash;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
