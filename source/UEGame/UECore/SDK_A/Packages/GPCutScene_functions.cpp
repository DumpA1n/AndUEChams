#include "GPCutScene.hpp"
#include "Engine.hpp"
#include "LevelSequence.hpp"
#include "MovieScene.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// AGPSequenceMaster
void AGPSequenceMaster::OnSetPerspectiveMode(EGPSequencePerspectiveMode Mode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceMaster", "OnSetPerspectiveMode");
    struct
    {
        enum EGPSequencePerspectiveMode Mode;
    } Parms{};
    Parms.Mode = (enum EGPSequencePerspectiveMode)Mode;
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceMaster::OnSetEnableMovementInput(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceMaster", "OnSetEnableMovementInput");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceMaster::OnSetEnableLootAtInput(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceMaster", "OnSetEnableLootAtInput");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

// AGPSequenceActor
void AGPSequenceActor::UnloadLevels()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "UnloadLevels");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::TestReset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "TestReset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::TestRawPlay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "TestRawPlay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::TestPrespawn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "TestPrespawn");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::TestPlay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "TestPlay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::TestDespawn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "TestDespawn");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::TestClearDirtyData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "TestClearDirtyData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::TeleportToExec(struct FVector Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "TeleportToExec");
    struct
    {
        struct FVector Location;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::Stop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "Stop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::SpawnBindingActors()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "SpawnBindingActors");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::RPC_OnServerStoped()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "RPC_OnServerStoped");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::RPC_OnServerReseted()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "RPC_OnServerReseted");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::RPC_OnServerBreaked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "RPC_OnServerBreaked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::Resume()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "Resume");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::Reset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "Reset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::RemoveAllBindings()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "RemoveAllBindings");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::PreloadLevels()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "PreloadLevels");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::PreEndSequence()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "PreEndSequence");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::Play()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "Play");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::PauseActorsTick(uint8_t bPause)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "PauseActorsTick");
    struct
    {
        uint8_t bPause;
    } Parms{};
    Parms.bPause = (uint8_t)bPause;
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::Pause()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "Pause");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::OnTriggerOverlapInternal(struct AActor* OverlappedActor, struct AActor* OtherActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "OnTriggerOverlapInternal");
    struct
    {
        struct AActor* OverlappedActor;
        struct AActor* OtherActor;
    } Parms{};
    Parms.OverlappedActor = (struct AActor*)OverlappedActor;
    Parms.OtherActor = (struct AActor*)OtherActor;
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::OnSequenceStop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "OnSequenceStop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::OnSequencePause()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "OnSequencePause");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t AGPSequenceActor::OnSequenceCustomEvent(EGPSequenceCustomEvent EventName, struct FName EventSubName, struct FString EventArgs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "OnSequenceCustomEvent");
    struct
    {
        enum EGPSequenceCustomEvent EventName;
        struct FName EventSubName;
        struct FString EventArgs;
        uint8_t ReturnValue;
    } Parms{};
    Parms.EventName = (enum EGPSequenceCustomEvent)EventName;
    Parms.EventSubName = (struct FName)EventSubName;
    Parms.EventArgs = (struct FString)EventArgs;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AGPSequenceActor::OnSequenceBindingBreak(struct UGPSequenceBindingComponent* SequenceBinding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "OnSequenceBindingBreak");
    struct
    {
        struct UGPSequenceBindingComponent* SequenceBinding;
    } Parms{};
    Parms.SequenceBinding = (struct UGPSequenceBindingComponent*)SequenceBinding;
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::OnSequenceAssetLoadComplete(const struct FSoftObjectPath& ResourcePaths)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "OnSequenceAssetLoadComplete");
    struct
    {
        struct FSoftObjectPath ResourcePaths;
    } Parms{};
    Parms.ResourcePaths = (struct FSoftObjectPath)ResourcePaths;
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::OnRep_ReplicatedServerStopTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "OnRep_ReplicatedServerStopTime");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::OnRep_ReplicatedServerStatus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "OnRep_ReplicatedServerStatus");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::OnRep_ReplicatedServerPlayTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "OnRep_ReplicatedServerPlayTime");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::OnRep_ReplicatedServerBreaked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "OnRep_ReplicatedServerBreaked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::OnRep_CachedBoundActors()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "OnRep_CachedBoundActors");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::OnPlayInner()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "OnPlayInner");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::OnMovieSceneSpawnObject(struct UMovieSceneSequence* InMovieScene, struct UObject* InSpawnObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "OnMovieSceneSpawnObject");
    struct
    {
        struct UMovieSceneSequence* InMovieScene;
        struct UObject* InSpawnObject;
    } Parms{};
    Parms.InMovieScene = (struct UMovieSceneSequence*)InMovieScene;
    Parms.InSpawnObject = (struct UObject*)InSpawnObject;
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::OnCameraStartCallback(struct UCameraComponent* InCamComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "OnCameraStartCallback");
    struct
    {
        struct UCameraComponent* InCamComponent;
    } Parms{};
    Parms.InCamComponent = (struct UCameraComponent*)InCamComponent;
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::OnCameraCutCallback(struct UCameraComponent* InCamComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "OnCameraCutCallback");
    struct
    {
        struct UCameraComponent* InCamComponent;
    } Parms{};
    Parms.InCamComponent = (struct UCameraComponent*)InCamComponent;
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::NtfServerChangeStatus(EGPSequenceStatus NewStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "NtfServerChangeStatus");
    struct
    {
        enum EGPSequenceStatus NewStatus;
    } Parms{};
    Parms.NewStatus = (enum EGPSequenceStatus)NewStatus;
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::LeaveCutSceneStreaming()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "LeaveCutSceneStreaming");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::LeaveCutSceneHud()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "LeaveCutSceneHud");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::LeaveCutSceneCamera(struct FViewTargetTransitionParams TransitionParams)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "LeaveCutSceneCamera");
    struct
    {
        struct FViewTargetTransitionParams TransitionParams;
    } Parms{};
    Parms.TransitionParams = (struct FViewTargetTransitionParams)TransitionParams;
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::LeaveCameraCut()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "LeaveCameraCut");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

float AGPSequenceActor::GetLength()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "GetLength");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AGPSequenceActor::FireCustomEvent(EGPSequenceCustomEvent EventName, struct FName EventSubName, struct FString EventArgs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "FireCustomEvent");
    struct
    {
        enum EGPSequenceCustomEvent EventName;
        struct FName EventSubName;
        struct FString EventArgs;
    } Parms{};
    Parms.EventName = (enum EGPSequenceCustomEvent)EventName;
    Parms.EventSubName = (struct FName)EventSubName;
    Parms.EventArgs = (struct FString)EventArgs;
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::EnterCutSceneStreaming()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "EnterCutSceneStreaming");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::EnterCutSceneHud()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "EnterCutSceneHud");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::EnterCutSceneCamera(struct FViewTargetTransitionParams TransitionParams)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "EnterCutSceneCamera");
    struct
    {
        struct FViewTargetTransitionParams TransitionParams;
    } Parms{};
    Parms.TransitionParams = (struct FViewTargetTransitionParams)TransitionParams;
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::EndSequence()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "EndSequence");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t AGPSequenceActor::CheckTriggerMode(struct AActor* OtherActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "CheckTriggerMode");
    struct
    {
        struct AActor* OtherActor;
        uint8_t ReturnValue;
    } Parms{};
    Parms.OtherActor = (struct AActor*)OtherActor;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AGPSequenceActor::CheckTriggerAuth()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "CheckTriggerAuth");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AGPSequenceActor::CheckSpawnBindingActorsReady()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "CheckSpawnBindingActorsReady");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AGPSequenceActor::Break()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "Break");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::BeginSequence()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "BeginSequence");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::AddDefaultBinding(struct AActor* BindingActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "AddDefaultBinding");
    struct
    {
        struct AActor* BindingActor;
    } Parms{};
    Parms.BindingActor = (struct AActor*)BindingActor;
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActor::AddBinding(struct FName BindingTag, struct AActor* BindingActor, uint8_t bBindDefaultActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActor", "AddBinding");
    struct
    {
        struct FName BindingTag;
        struct AActor* BindingActor;
        uint8_t bBindDefaultActor;
    } Parms{};
    Parms.BindingTag = (struct FName)BindingTag;
    Parms.BindingActor = (struct AActor*)BindingActor;
    Parms.bBindDefaultActor = (uint8_t)bBindDefaultActor;
    this->ProcessEvent(Func, &Parms);
}

// AGPSequenceActorStream
void AGPSequenceActorStream::StopSequenceStream()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActorStream", "StopSequenceStream");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActorStream::StartSequenceStream()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActorStream", "StartSequenceStream");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActorStream::SetNextSection(struct FName Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActorStream", "SetNextSection");
    struct
    {
        struct FName Key;
    } Parms{};
    Parms.Key = (struct FName)Key;
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActorStream::PreloadSequenceStream(int32_t SectionNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActorStream", "PreloadSequenceStream");
    struct
    {
        int32_t SectionNum;
    } Parms{};
    Parms.SectionNum = (int32_t)SectionNum;
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActorStream::PlayerNextSection()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActorStream", "PlayerNextSection");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActorStream::OnSequenceSectionEnd(struct AGPSequenceActor* InSequenceActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActorStream", "OnSequenceSectionEnd");
    struct
    {
        struct AGPSequenceActor* InSequenceActor;
    } Parms{};
    Parms.InSequenceActor = (struct AGPSequenceActor*)InSequenceActor;
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActorStream::OnSequenceSectionBegin(struct AGPSequenceActor* InSequenceActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActorStream", "OnSequenceSectionBegin");
    struct
    {
        struct AGPSequenceActor* InSequenceActor;
    } Parms{};
    Parms.InSequenceActor = (struct AGPSequenceActor*)InSequenceActor;
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActorStream::GotoSectionByKey(struct FName Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActorStream", "GotoSectionByKey");
    struct
    {
        struct FName Key;
    } Parms{};
    Parms.Key = (struct FName)Key;
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActorStream::GotoSection(struct AGPSequenceActor* InSequenceActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActorStream", "GotoSection");
    struct
    {
        struct AGPSequenceActor* InSequenceActor;
    } Parms{};
    Parms.InSequenceActor = (struct AGPSequenceActor*)InSequenceActor;
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceActorStream::AddSection(struct FName Key, struct AGPSequenceActor* SequenceActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceActorStream", "AddSection");
    struct
    {
        struct FName Key;
        struct AGPSequenceActor* SequenceActor;
    } Parms{};
    Parms.Key = (struct FName)Key;
    Parms.SequenceActor = (struct AGPSequenceActor*)SequenceActor;
    this->ProcessEvent(Func, &Parms);
}

// UGPSequenceBindingComponent
void UGPSequenceBindingComponent::TestSetTPPMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceBindingComponent", "TestSetTPPMode");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPSequenceBindingComponent::TestSetFPPMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceBindingComponent", "TestSetFPPMode");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPSequenceBindingComponent::SetTPPMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceBindingComponent", "SetTPPMode");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPSequenceBindingComponent::SetPerspectiveMode(EGPSequencePerspectiveMode Mode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceBindingComponent", "SetPerspectiveMode");
    struct
    {
        enum EGPSequencePerspectiveMode Mode;
    } Parms{};
    Parms.Mode = (enum EGPSequencePerspectiveMode)Mode;
    this->ProcessEvent(Func, &Parms);
}

void UGPSequenceBindingComponent::SetFPPMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceBindingComponent", "SetFPPMode");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPSequenceBindingComponent::SetEnableMovementInput(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceBindingComponent", "SetEnableMovementInput");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UGPSequenceBindingComponent::SetEnableLootAtInput(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceBindingComponent", "SetEnableLootAtInput");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UGPSequenceBindingComponent::SetActingSpeed(float Speed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceBindingComponent", "SetActingSpeed");
    struct
    {
        float Speed;
    } Parms{};
    Parms.Speed = (float)Speed;
    this->ProcessEvent(Func, &Parms);
}

void UGPSequenceBindingComponent::RestorePerspectiveMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceBindingComponent", "RestorePerspectiveMode");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPSequenceBindingComponent::OnRep_IsBinding()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceBindingComponent", "OnRep_IsBinding");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPSequenceBindingComponent::OnRep_DisablePhysics()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceBindingComponent", "OnRep_DisablePhysics");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPSequenceBindingComponent::OnRep_DisableMovement()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceBindingComponent", "OnRep_DisableMovement");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPSequenceBindingComponent::OnRep_DisabledAI()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceBindingComponent", "OnRep_DisabledAI");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPSequenceBindingComponent::OnRep_DisableCollision()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceBindingComponent", "OnRep_DisableCollision");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPSequenceBindingComponent::ForceClientEndBinding()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceBindingComponent", "ForceClientEndBinding");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPSequenceBindingComponent::EndBinding()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceBindingComponent", "EndBinding");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPSequenceBindingComponent::EnablePhysics()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceBindingComponent", "EnablePhysics");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPSequenceBindingComponent::EnableMovement()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceBindingComponent", "EnableMovement");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPSequenceBindingComponent::EnableCollision()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceBindingComponent", "EnableCollision");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPSequenceBindingComponent::EnableAI()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceBindingComponent", "EnableAI");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPSequenceBindingComponent::DisablePhysics()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceBindingComponent", "DisablePhysics");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPSequenceBindingComponent::DisableMovement()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceBindingComponent", "DisableMovement");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPSequenceBindingComponent::DisableCollision()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceBindingComponent", "DisableCollision");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPSequenceBindingComponent::DisableAI()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceBindingComponent", "DisableAI");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPSequenceBindingComponent::BreakBinding()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceBindingComponent", "BreakBinding");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPSequenceBindingComponent::BeginBinding()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceBindingComponent", "BeginBinding");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UGPSequenceBindingTags
struct FName UGPSequenceBindingTags::GetVehicleTag(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPSequenceBindingTags", "GetVehicleTag");
    struct
    {
        int32_t Index;
        struct FName ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UGPSequenceBindingTags::GetPlayerTag(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPSequenceBindingTags", "GetPlayerTag");
    struct
    {
        int32_t Index;
        struct FName ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// AGPSequenceDebugActor
void AGPSequenceDebugActor::LoadLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceDebugActor", "LoadLevel");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// AGPSequencePerformance
void AGPSequencePerformance::SetPerformaceSequencePath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequencePerformance", "SetPerformaceSequencePath");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t AGPSequencePerformance::IsClient(uint8_t bIncludeStandalone)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequencePerformance", "IsClient");
    struct
    {
        uint8_t bIncludeStandalone;
        uint8_t ReturnValue;
    } Parms{};
    Parms.bIncludeStandalone = (uint8_t)bIncludeStandalone;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FSoftObjectPath AGPSequencePerformance::GetCurrentSequencePath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequencePerformance", "GetCurrentSequencePath");
    struct
    {
        struct FSoftObjectPath ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t AGPSequencePerformance::GetCurrentDeviceLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequencePerformance", "GetCurrentDeviceLevel");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// AGPSequenceKeepStateActor
void AGPSequenceKeepStateActor::PlayReconnectLevelSequenceInner(struct ULevelSequence* LevelSequenceAsset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceKeepStateActor", "PlayReconnectLevelSequenceInner");
    struct
    {
        struct ULevelSequence* LevelSequenceAsset;
    } Parms{};
    Parms.LevelSequenceAsset = (struct ULevelSequence*)LevelSequenceAsset;
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceKeepStateActor::OnReconnectSequenceAssetLoadComplete(const struct FSoftObjectPath& ResourcePaths)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceKeepStateActor", "OnReconnectSequenceAssetLoadComplete");
    struct
    {
        struct FSoftObjectPath ResourcePaths;
    } Parms{};
    Parms.ResourcePaths = (struct FSoftObjectPath)ResourcePaths;
    this->ProcessEvent(Func, &Parms);
}

// AGPSequenceMannequin
void AGPSequenceMannequin::OnSequenceEnd(struct AGPSequenceActor* InOwnerSequence)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceMannequin", "OnSequenceEnd");
    struct
    {
        struct AGPSequenceActor* InOwnerSequence;
    } Parms{};
    Parms.InOwnerSequence = (struct AGPSequenceActor*)InOwnerSequence;
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceMannequin::OnSequenceBegin(struct AGPSequenceActor* InOwnerSequence)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceMannequin", "OnSequenceBegin");
    struct
    {
        struct AGPSequenceActor* InOwnerSequence;
    } Parms{};
    Parms.InOwnerSequence = (struct AGPSequenceActor*)InOwnerSequence;
    this->ProcessEvent(Func, &Parms);
}

// AGPSequenceMultiStageActor
void AGPSequenceMultiStageActor::StopAllStages()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceMultiStageActor", "StopAllStages");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceMultiStageActor::ResetMultiStage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceMultiStageActor", "ResetMultiStage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceMultiStageActor::PrewarmStage(EGPSequenceStage Stage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceMultiStageActor", "PrewarmStage");
    struct
    {
        enum EGPSequenceStage Stage;
    } Parms{};
    Parms.Stage = (enum EGPSequenceStage)Stage;
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceMultiStageActor::PrewarmAllStages()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceMultiStageActor", "PrewarmAllStages");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceMultiStageActor::PlayStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceMultiStageActor", "PlayStart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceMultiStageActor::PlayLoop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceMultiStageActor", "PlayLoop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceMultiStageActor::PlayEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceMultiStageActor", "PlayEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceMultiStageActor::OnStageSequenceEnd(struct AGPSequenceActor* InSequenceActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceMultiStageActor", "OnStageSequenceEnd");
    struct
    {
        struct AGPSequenceActor* InSequenceActor;
    } Parms{};
    Parms.InSequenceActor = (struct AGPSequenceActor*)InSequenceActor;
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceMultiStageActor::OnStageSequenceBegin(struct AGPSequenceActor* InSequenceActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceMultiStageActor", "OnStageSequenceBegin");
    struct
    {
        struct AGPSequenceActor* InSequenceActor;
    } Parms{};
    Parms.InSequenceActor = (struct AGPSequenceActor*)InSequenceActor;
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceMultiStageActor::OnStagePrewarmed__DelegateSignature(struct AGPSequenceMultiStageActor* MultiStageActor, EGPSequenceStage Stage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceMultiStageActor", "OnStagePrewarmed__DelegateSignature");
    struct
    {
        struct AGPSequenceMultiStageActor* MultiStageActor;
        enum EGPSequenceStage Stage;
    } Parms{};
    Parms.MultiStageActor = (struct AGPSequenceMultiStageActor*)MultiStageActor;
    Parms.Stage = (enum EGPSequenceStage)Stage;
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceMultiStageActor::OnStageChanged__DelegateSignature(struct AGPSequenceMultiStageActor* MultiStageActor, EGPSequenceStage NewStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceMultiStageActor", "OnStageChanged__DelegateSignature");
    struct
    {
        struct AGPSequenceMultiStageActor* MultiStageActor;
        enum EGPSequenceStage NewStage;
    } Parms{};
    Parms.MultiStageActor = (struct AGPSequenceMultiStageActor*)MultiStageActor;
    Parms.NewStage = (enum EGPSequenceStage)NewStage;
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceMultiStageActor::OnRep_CurrentStage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceMultiStageActor", "OnRep_CurrentStage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t AGPSequenceMultiStageActor::IsStagePrewarmed(EGPSequenceStage Stage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceMultiStageActor", "IsStagePrewarmed");
    struct
    {
        enum EGPSequenceStage Stage;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Stage = (enum EGPSequenceStage)Stage;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AGPSequenceMultiStageActor::IsAnyStageePlaying()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceMultiStageActor", "IsAnyStageePlaying");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGPSequenceStage AGPSequenceMultiStageActor::GetCurrentStage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceMultiStageActor", "GetCurrentStage");
    struct
    {
        enum EGPSequenceStage ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AGPSequenceMultiStageActor::AreAllStagesPrewarmed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceMultiStageActor", "AreAllStagesPrewarmed");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// AGPSequenceMultiStageExample
void AGPSequenceMultiStageExample::StartSkillCast()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceMultiStageExample", "StartSkillCast");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceMultiStageExample::OnStartStageBegin(struct AGPSequenceMultiStageActor* Actor, EGPSequenceStage Stage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceMultiStageExample", "OnStartStageBegin");
    struct
    {
        struct AGPSequenceMultiStageActor* Actor;
        enum EGPSequenceStage Stage;
    } Parms{};
    Parms.Actor = (struct AGPSequenceMultiStageActor*)Actor;
    Parms.Stage = (enum EGPSequenceStage)Stage;
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceMultiStageExample::OnStageChanged(struct AGPSequenceMultiStageActor* Actor, EGPSequenceStage NewStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceMultiStageExample", "OnStageChanged");
    struct
    {
        struct AGPSequenceMultiStageActor* Actor;
        enum EGPSequenceStage NewStage;
    } Parms{};
    Parms.Actor = (struct AGPSequenceMultiStageActor*)Actor;
    Parms.NewStage = (enum EGPSequenceStage)NewStage;
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceMultiStageExample::OnLoopStageBegin(struct AGPSequenceMultiStageActor* Actor, EGPSequenceStage Stage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceMultiStageExample", "OnLoopStageBegin");
    struct
    {
        struct AGPSequenceMultiStageActor* Actor;
        enum EGPSequenceStage Stage;
    } Parms{};
    Parms.Actor = (struct AGPSequenceMultiStageActor*)Actor;
    Parms.Stage = (enum EGPSequenceStage)Stage;
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceMultiStageExample::OnEndStageBegin(struct AGPSequenceMultiStageActor* Actor, EGPSequenceStage Stage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceMultiStageExample", "OnEndStageBegin");
    struct
    {
        struct AGPSequenceMultiStageActor* Actor;
        enum EGPSequenceStage Stage;
    } Parms{};
    Parms.Actor = (struct AGPSequenceMultiStageActor*)Actor;
    Parms.Stage = (enum EGPSequenceStage)Stage;
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceMultiStageExample::OnAllStagesComplete(struct AGPSequenceMultiStageActor* Actor, EGPSequenceStage Stage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceMultiStageExample", "OnAllStagesComplete");
    struct
    {
        struct AGPSequenceMultiStageActor* Actor;
        enum EGPSequenceStage Stage;
    } Parms{};
    Parms.Actor = (struct AGPSequenceMultiStageActor*)Actor;
    Parms.Stage = (enum EGPSequenceStage)Stage;
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceMultiStageExample::InterruptSkill()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceMultiStageExample", "InterruptSkill");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceMultiStageExample::EndSkillCast()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceMultiStageExample", "EndSkillCast");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceMultiStageExample::DeactivateMechanism()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceMultiStageExample", "DeactivateMechanism");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceMultiStageExample::BossEnter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceMultiStageExample", "BossEnter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceMultiStageExample::BossDefeated()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceMultiStageExample", "BossDefeated");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPSequenceMultiStageExample::ActivateMechanism()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceMultiStageExample", "ActivateMechanism");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UGPSequencePrepareComponent
void UGPSequencePrepareComponent::TestPreload()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequencePrepareComponent", "TestPreload");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPSequencePrepareComponent::TestCheckPreloadReady()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequencePrepareComponent", "TestCheckPreloadReady");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPSequencePrepareComponent::OnPreloadTriggerOverlapInternal(struct AActor* OverlappedActor, struct AActor* OtherActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequencePrepareComponent", "OnPreloadTriggerOverlapInternal");
    struct
    {
        struct AActor* OverlappedActor;
        struct AActor* OtherActor;
    } Parms{};
    Parms.OverlappedActor = (struct AActor*)OverlappedActor;
    Parms.OtherActor = (struct AActor*)OtherActor;
    this->ProcessEvent(Func, &Parms);
}

void UGPSequencePrepareComponent::OnPreloadTriggerEndOverlapInternal(struct AActor* OverlappedActor, struct AActor* OtherActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequencePrepareComponent", "OnPreloadTriggerEndOverlapInternal");
    struct
    {
        struct AActor* OverlappedActor;
        struct AActor* OtherActor;
    } Parms{};
    Parms.OverlappedActor = (struct AActor*)OverlappedActor;
    Parms.OtherActor = (struct AActor*)OtherActor;
    this->ProcessEvent(Func, &Parms);
}

// UGPSequencePreSpawnComponent
void UGPSequencePreSpawnComponent::OnTriggerPrespawn(struct AActor* OverlappedActor, struct AActor* OtherActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequencePreSpawnComponent", "OnTriggerPrespawn");
    struct
    {
        struct AActor* OverlappedActor;
        struct AActor* OtherActor;
    } Parms{};
    Parms.OverlappedActor = (struct AActor*)OverlappedActor;
    Parms.OtherActor = (struct AActor*)OtherActor;
    this->ProcessEvent(Func, &Parms);
}

void UGPSequencePreSpawnComponent::OnTriggerDespawn(struct AActor* OverlappedActor, struct AActor* OtherActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequencePreSpawnComponent", "OnTriggerDespawn");
    struct
    {
        struct AActor* OverlappedActor;
        struct AActor* OtherActor;
    } Parms{};
    Parms.OverlappedActor = (struct AActor*)OverlappedActor;
    Parms.OtherActor = (struct AActor*)OtherActor;
    this->ProcessEvent(Func, &Parms);
}

// UGPSequenceSystem
void UGPSequenceSystem::ResumeCurrentPlayingSequence()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceSystem", "ResumeCurrentPlayingSequence");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPSequenceSystem::RemoveCurrentPlayingSequence(struct AGPSequenceActor* SequenceActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceSystem", "RemoveCurrentPlayingSequence");
    struct
    {
        struct AGPSequenceActor* SequenceActor;
    } Parms{};
    Parms.SequenceActor = (struct AGPSequenceActor*)SequenceActor;
    this->ProcessEvent(Func, &Parms);
}

void UGPSequenceSystem::PauseCurrentPlayingSequence()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceSystem", "PauseCurrentPlayingSequence");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPSequenceSystem::LeaveCutSceneCamera(struct FViewTargetTransitionParams TransitionParams)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceSystem", "LeaveCutSceneCamera");
    struct
    {
        struct FViewTargetTransitionParams TransitionParams;
    } Parms{};
    Parms.TransitionParams = (struct FViewTargetTransitionParams)TransitionParams;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPSequenceSystem::IsSequenceExist(struct FName SequenceTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceSystem", "IsSequenceExist");
    struct
    {
        struct FName SequenceTag;
        uint8_t ReturnValue;
    } Parms{};
    Parms.SequenceTag = (struct FName)SequenceTag;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGPSequenceSystem::GetSequenceLength(struct FName SequenceTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceSystem", "GetSequenceLength");
    struct
    {
        struct FName SequenceTag;
        float ReturnValue;
    } Parms{};
    Parms.SequenceTag = (struct FName)SequenceTag;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AGPSequenceActor* UGPSequenceSystem::GetSequence(struct FName SequenceTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceSystem", "GetSequence");
    struct
    {
        struct FName SequenceTag;
        struct AGPSequenceActor* ReturnValue;
    } Parms{};
    Parms.SequenceTag = (struct FName)SequenceTag;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPSequenceSystem* UGPSequenceSystem::GetInstance(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPSequenceSystem", "GetInstance");
    struct
    {
        struct UObject* WorldContextObject;
        struct UGPSequenceSystem* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct TWeakObjectPtr<struct AGPSequenceActor>> UGPSequenceSystem::GetCurrentPlayingSequences()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceSystem", "GetCurrentPlayingSequences");
    struct
    {
        struct TArray<struct TWeakObjectPtr<struct AGPSequenceActor>> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AGPSequenceActor* UGPSequenceSystem::GetCurrentCutSceneSequence()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceSystem", "GetCurrentCutSceneSequence");
    struct
    {
        struct AGPSequenceActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPSequenceSystem* UGPSequenceSystem::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPSequenceSystem", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UGPSequenceSystem* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPSequenceSystem::EnterCutSceneCamera(struct FViewTargetTransitionParams TransitionParams)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceSystem", "EnterCutSceneCamera");
    struct
    {
        struct FViewTargetTransitionParams TransitionParams;
    } Parms{};
    Parms.TransitionParams = (struct FViewTargetTransitionParams)TransitionParams;
    this->ProcessEvent(Func, &Parms);
}

void UGPSequenceSystem::EndSubtitlesOnCutScene(struct FName SubtitlesID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceSystem", "EndSubtitlesOnCutScene");
    struct
    {
        struct FName SubtitlesID;
    } Parms{};
    Parms.SubtitlesID = (struct FName)SubtitlesID;
    this->ProcessEvent(Func, &Parms);
}

void UGPSequenceSystem::BeginSubtitlesOnCutScene(struct FName SubtitlesID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceSystem", "BeginSubtitlesOnCutScene");
    struct
    {
        struct FName SubtitlesID;
    } Parms{};
    Parms.SubtitlesID = (struct FName)SubtitlesID;
    this->ProcessEvent(Func, &Parms);
}

void UGPSequenceSystem::AddCurrentPlayingSequence(struct AGPSequenceActor* SequenceActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSequenceSystem", "AddCurrentPlayingSequence");
    struct
    {
        struct AGPSequenceActor* SequenceActor;
    } Parms{};
    Parms.SequenceActor = (struct AGPSequenceActor*)SequenceActor;
    this->ProcessEvent(Func, &Parms);
}

// AGPSubLevelPreloader
void AGPSubLevelPreloader::TestPreload()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSubLevelPreloader", "TestPreload");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t AGPSubLevelPreloader::IsAllReady()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSubLevelPreloader", "IsAllReady");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
