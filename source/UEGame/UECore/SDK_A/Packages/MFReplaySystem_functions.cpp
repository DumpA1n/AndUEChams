#include "MFReplaySystem.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UMFPCLocalFileKillCamComponent
void UMFPCLocalFileKillCamComponent::ServerDownloadReplayData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPCLocalFileKillCamComponent", "ServerDownloadReplayData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFPCLocalFileKillCamComponent::ServerAckReplayData(struct FString ReplayName, int64_t TotalSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPCLocalFileKillCamComponent", "ServerAckReplayData");
    struct
    {
        struct FString ReplayName;
        int64_t TotalSize;
    } Parms{};
    Parms.ReplayName = (struct FString)ReplayName;
    Parms.TotalSize = (int64_t)TotalSize;
    this->ProcessEvent(Func, &Parms);
}

void UMFPCLocalFileKillCamComponent::OnStartReceiveFile(struct FString InReplayFileName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPCLocalFileKillCamComponent", "OnStartReceiveFile");
    struct
    {
        struct FString InReplayFileName;
    } Parms{};
    Parms.InReplayFileName = (struct FString)InReplayFileName;
    this->ProcessEvent(Func, &Parms);
}

void UMFPCLocalFileKillCamComponent::OnDownloadReplayDataComplete(struct FString InReplayFileName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPCLocalFileKillCamComponent", "OnDownloadReplayDataComplete");
    struct
    {
        struct FString InReplayFileName;
    } Parms{};
    Parms.InReplayFileName = (struct FString)InReplayFileName;
    this->ProcessEvent(Func, &Parms);
}

void UMFPCLocalFileKillCamComponent::DownloadReplayData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPCLocalFileKillCamComponent", "DownloadReplayData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFPCLocalFileKillCamComponent::DownloadExternalDataChunk(float EndDemoTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPCLocalFileKillCamComponent", "DownloadExternalDataChunk");
    struct
    {
        float EndDemoTime;
    } Parms{};
    Parms.EndDemoTime = (float)EndDemoTime;
    this->ProcessEvent(Func, &Parms);
}

void UMFPCLocalFileKillCamComponent::ClientRecieveReplayData(struct FString ReplayName, int64_t TotalSize, uint32_t StartPos, struct TArray<uint8_t> Datas, bool bLastRPC, uint32_t ChunkEndTimeMS)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPCLocalFileKillCamComponent", "ClientRecieveReplayData");
    struct
    {
        struct FString ReplayName;
        int64_t TotalSize;
        uint32_t StartPos;
        struct TArray<uint8_t> Datas;
        bool bLastRPC;
        uint32_t ChunkEndTimeMS;
    } Parms{};
    Parms.ReplayName = (struct FString)ReplayName;
    Parms.TotalSize = (int64_t)TotalSize;
    Parms.StartPos = (uint32_t)StartPos;
    Parms.Datas = (struct TArray<uint8_t>)Datas;
    Parms.bLastRPC = (bool)bLastRPC;
    Parms.ChunkEndTimeMS = (uint32_t)ChunkEndTimeMS;
    this->ProcessEvent(Func, &Parms);
}

void UMFPCLocalFileKillCamComponent::ClientNotifyReplayDownloadFailed(struct FString ReplayName, struct FString ErrorInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPCLocalFileKillCamComponent", "ClientNotifyReplayDownloadFailed");
    struct
    {
        struct FString ReplayName;
        struct FString ErrorInfo;
    } Parms{};
    Parms.ReplayName = (struct FString)ReplayName;
    Parms.ErrorInfo = (struct FString)ErrorInfo;
    this->ProcessEvent(Func, &Parms);
}

// UMFReplaySystemBPLibrary
void UMFReplaySystemBPLibrary::StopSpectating(struct UObject* WorldContextObject, struct FBlendSettings BlendSettings)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFReplaySystemBPLibrary", "StopSpectating");
    struct
    {
        struct UObject* WorldContextObject;
        struct FBlendSettings BlendSettings;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.BlendSettings = (struct FBlendSettings)BlendSettings;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFReplaySystemBPLibrary::StopRecordingReplay(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFReplaySystemBPLibrary", "StopRecordingReplay");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFReplaySystemBPLibrary::SpectateActor(struct UObject* WorldContextObject, struct AActor* Actor, struct FBlendSettings BlendSettings)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFReplaySystemBPLibrary", "SpectateActor");
    struct
    {
        struct UObject* WorldContextObject;
        struct AActor* Actor;
        struct FBlendSettings BlendSettings;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Actor = (struct AActor*)Actor;
    Parms.BlendSettings = (struct FBlendSettings)BlendSettings;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFReplaySystemBPLibrary::SetReplaySavePath(struct UObject* WorldContextObject, struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFReplaySystemBPLibrary", "SetReplaySavePath");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString Path;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Path = (struct FString)Path;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFReplaySystemBPLibrary::SetPlaybackSpeed(struct UObject* WorldContextObject, float Speed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFReplaySystemBPLibrary", "SetPlaybackSpeed");
    struct
    {
        struct UObject* WorldContextObject;
        float Speed;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Speed = (float)Speed;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFReplaySystemBPLibrary::SetMaxRecordHz(struct UObject* WorldContextObject, float Hz)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFReplaySystemBPLibrary", "SetMaxRecordHz");
    struct
    {
        struct UObject* WorldContextObject;
        float Hz;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Hz = (float)Hz;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFReplaySystemBPLibrary::ResumePlayback(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFReplaySystemBPLibrary", "ResumePlayback");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UGoToTimeObject* UMFReplaySystemBPLibrary::RestartReplayPlayback(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFReplaySystemBPLibrary", "RestartReplayPlayback");
    struct
    {
        struct UObject* WorldContextObject;
        struct UGoToTimeObject* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct URequestEventsObject* UMFReplaySystemBPLibrary::RequestActiveReplayEvents(struct UObject* WorldContextObject, struct FString Group, int32_t UserIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFReplaySystemBPLibrary", "RequestActiveReplayEvents");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString Group;
        int32_t UserIndex;
        struct URequestEventsObject* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Group = (struct FString)Group;
    Parms.UserIndex = (int32_t)UserIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct URenameReplayObject* UMFReplaySystemBPLibrary::RenameReplayFriendly(struct UObject* WorldContextObject, struct FString ReplayName, struct FString NewFriendlyReplayName, int32_t UserIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFReplaySystemBPLibrary", "RenameReplayFriendly");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString ReplayName;
        struct FString NewFriendlyReplayName;
        int32_t UserIndex;
        struct URenameReplayObject* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.ReplayName = (struct FString)ReplayName;
    Parms.NewFriendlyReplayName = (struct FString)NewFriendlyReplayName;
    Parms.UserIndex = (int32_t)UserIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct URenameReplayObject* UMFReplaySystemBPLibrary::RenameReplay(struct UObject* WorldContextObject, struct FString ReplayName, struct FString NewReplayName, int32_t UserIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFReplaySystemBPLibrary", "RenameReplay");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString ReplayName;
        struct FString NewReplayName;
        int32_t UserIndex;
        struct URenameReplayObject* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.ReplayName = (struct FString)ReplayName;
    Parms.NewReplayName = (struct FString)NewReplayName;
    Parms.UserIndex = (int32_t)UserIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFReplaySystemBPLibrary::RecordReplay(struct UObject* WorldContextObject, struct FString ReplayName, struct FString ReplayFriendlyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFReplaySystemBPLibrary", "RecordReplay");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString ReplayName;
        struct FString ReplayFriendlyName;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.ReplayName = (struct FString)ReplayName;
    Parms.ReplayFriendlyName = (struct FString)ReplayFriendlyName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UMFReplaySystemBPLibrary::PlayRecordedReplay(struct UObject* WorldContextObject, struct FString ReplayName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFReplaySystemBPLibrary", "PlayRecordedReplay");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString ReplayName;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.ReplayName = (struct FString)ReplayName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFReplaySystemBPLibrary::PausePlayback(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFReplaySystemBPLibrary", "PausePlayback");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

float UMFReplaySystemBPLibrary::MsToSeconds(int32_t MS)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFReplaySystemBPLibrary", "MsToSeconds");
    struct
    {
        int32_t MS;
        float ReturnValue;
    } Parms{};
    Parms.MS = (int32_t)MS;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFReplaySystemBPLibrary::MFReplaySystemSampleFunction(float Param)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFReplaySystemBPLibrary", "MFReplaySystemSampleFunction");
    struct
    {
        float Param;
        float ReturnValue;
    } Parms{};
    Parms.Param = (float)Param;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFReplaySystemBPLibrary::IsReplayPlaybackPaused(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFReplaySystemBPLibrary", "IsReplayPlaybackPaused");
    struct
    {
        struct UObject* WorldContextObject;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFReplaySystemBPLibrary::IsRecordingReplay(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFReplaySystemBPLibrary", "IsRecordingReplay");
    struct
    {
        struct UObject* WorldContextObject;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFReplaySystemBPLibrary::IsPlayingReplay(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFReplaySystemBPLibrary", "IsPlayingReplay");
    struct
    {
        struct UObject* WorldContextObject;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGoToTimeObject* UMFReplaySystemBPLibrary::GoToSpecificTime(struct UObject* WorldContextObject, float TimeToGoTo, bool bRetainCurrentPauseState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFReplaySystemBPLibrary", "GoToSpecificTime");
    struct
    {
        struct UObject* WorldContextObject;
        float TimeToGoTo;
        bool bRetainCurrentPauseState;
        struct UGoToTimeObject* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.TimeToGoTo = (float)TimeToGoTo;
    Parms.bRetainCurrentPauseState = (bool)bRetainCurrentPauseState;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGetSavedReplaysObject* UMFReplaySystemBPLibrary::GetSavedReplays(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFReplaySystemBPLibrary", "GetSavedReplays");
    struct
    {
        struct UObject* WorldContextObject;
        struct UGetSavedReplaysObject* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFReplaySystemBPLibrary::GetReplaySavePath(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFReplaySystemBPLibrary", "GetReplaySavePath");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFReplaySystemBPLibrary::GetReplayLength(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFReplaySystemBPLibrary", "GetReplayLength");
    struct
    {
        struct UObject* WorldContextObject;
        float ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFReplaySystemBPLibrary::GetPlaybackSpeed(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFReplaySystemBPLibrary", "GetPlaybackSpeed");
    struct
    {
        struct UObject* WorldContextObject;
        float ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFReplaySystemBPLibrary::GetMaxRecordHz()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFReplaySystemBPLibrary", "GetMaxRecordHz");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDemoNetDriver* UMFReplaySystemBPLibrary::GetDemoDriver(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFReplaySystemBPLibrary", "GetDemoDriver");
    struct
    {
        struct UObject* WorldContextObject;
        struct UDemoNetDriver* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFReplaySystemBPLibrary::GetCurrentReplayTime(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFReplaySystemBPLibrary", "GetCurrentReplayTime");
    struct
    {
        struct UObject* WorldContextObject;
        float ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFReplaySystemBPLibrary::GetActiveReplayName(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFReplaySystemBPLibrary", "GetActiveReplayName");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDeleteReplayObject* UMFReplaySystemBPLibrary::DeleteReplay(struct UObject* WorldContextObject, struct FString ReplayName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFReplaySystemBPLibrary", "DeleteReplay");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString ReplayName;
        struct UDeleteReplayObject* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.ReplayName = (struct FString)ReplayName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UReplayDataObject* UMFReplaySystemBPLibrary::CreateReplayDataObject()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFReplaySystemBPLibrary", "CreateReplayDataObject");
    struct
    {
        struct UReplayDataObject* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFReplaySystemBPLibrary::AddEventToActiveReplay(struct UObject* WorldContextObject, struct FString EventName, struct FString Group, struct UReplayDataObject* DataObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFReplaySystemBPLibrary", "AddEventToActiveReplay");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString EventName;
        struct FString Group;
        struct UReplayDataObject* DataObject;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.EventName = (struct FString)EventName;
    Parms.Group = (struct FString)Group;
    Parms.DataObject = (struct UReplayDataObject*)DataObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UReplayDataObject
struct FString UReplayDataObject::SaveReplayMetaDataToString()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "SaveReplayMetaDataToString");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UReplayDataObject::RemoveVectorData(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "RemoveVectorData");
    struct
    {
        struct FString Name;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
}

void UReplayDataObject::RemoveTransformData(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "RemoveTransformData");
    struct
    {
        struct FString Name;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
}

void UReplayDataObject::RemoveTextData(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "RemoveTextData");
    struct
    {
        struct FString Name;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
}

void UReplayDataObject::RemoveStringData(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "RemoveStringData");
    struct
    {
        struct FString Name;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
}

void UReplayDataObject::RemoveRotatorData(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "RemoveRotatorData");
    struct
    {
        struct FString Name;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
}

void UReplayDataObject::RemoveNameData(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "RemoveNameData");
    struct
    {
        struct FString Name;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
}

void UReplayDataObject::RemoveIntegerData(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "RemoveIntegerData");
    struct
    {
        struct FString Name;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
}

void UReplayDataObject::RemoveInteger64Data(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "RemoveInteger64Data");
    struct
    {
        struct FString Name;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
}

void UReplayDataObject::RemoveFloatData(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "RemoveFloatData");
    struct
    {
        struct FString Name;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
}

void UReplayDataObject::RemoveByteData(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "RemoveByteData");
    struct
    {
        struct FString Name;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
}

void UReplayDataObject::RemoveBooleanData(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "RemoveBooleanData");
    struct
    {
        struct FString Name;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
}

bool UReplayDataObject::LoadReplayMetaDataFromString(struct FString StringDataToParse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "LoadReplayMetaDataFromString");
    struct
    {
        struct FString StringDataToParse;
        bool ReturnValue;
    } Parms{};
    Parms.StringDataToParse = (struct FString)StringDataToParse;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UReplayDataObject::GetVectorData(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "GetVectorData");
    struct
    {
        struct FString Name;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTransform UReplayDataObject::GetTransformData(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "GetTransformData");
    struct
    {
        struct FString Name;
        struct FTransform ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UReplayDataObject::GetTextData(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "GetTextData");
    struct
    {
        struct FString Name;
        struct FText ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UReplayDataObject::GetStringData(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "GetStringData");
    struct
    {
        struct FString Name;
        struct FString ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FRotator UReplayDataObject::GetRotatorData(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "GetRotatorData");
    struct
    {
        struct FString Name;
        struct FRotator ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UReplayDataObject::GetNameData(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "GetNameData");
    struct
    {
        struct FString Name;
        struct FName ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UReplayDataObject::GetIntegerData(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "GetIntegerData");
    struct
    {
        struct FString Name;
        int32_t ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UReplayDataObject::GetInteger64Data(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "GetInteger64Data");
    struct
    {
        struct FString Name;
        int64_t ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UReplayDataObject::GetFloatData(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "GetFloatData");
    struct
    {
        struct FString Name;
        float ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<uint8_t> UReplayDataObject::GetByteData(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "GetByteData");
    struct
    {
        struct FString Name;
        struct TArray<uint8_t> ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UReplayDataObject::GetBooleanData(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "GetBooleanData");
    struct
    {
        struct FString Name;
        bool ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UReplayDataObject::DoesVectorDataExist(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "DoesVectorDataExist");
    struct
    {
        struct FString Name;
        int32_t ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UReplayDataObject::DoesTransformDataExist(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "DoesTransformDataExist");
    struct
    {
        struct FString Name;
        int32_t ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UReplayDataObject::DoesTextDataExist(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "DoesTextDataExist");
    struct
    {
        struct FString Name;
        int32_t ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UReplayDataObject::DoesStringDataExist(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "DoesStringDataExist");
    struct
    {
        struct FString Name;
        int32_t ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UReplayDataObject::DoesRotatorDataExist(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "DoesRotatorDataExist");
    struct
    {
        struct FString Name;
        int32_t ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UReplayDataObject::DoesNameDataExist(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "DoesNameDataExist");
    struct
    {
        struct FString Name;
        int32_t ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UReplayDataObject::DoesIntegerDataExist(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "DoesIntegerDataExist");
    struct
    {
        struct FString Name;
        int32_t ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UReplayDataObject::DoesInteger64DataExist(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "DoesInteger64DataExist");
    struct
    {
        struct FString Name;
        int32_t ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UReplayDataObject::DoesFloatDataExist(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "DoesFloatDataExist");
    struct
    {
        struct FString Name;
        int32_t ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UReplayDataObject::DoesByteDataExist(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "DoesByteDataExist");
    struct
    {
        struct FString Name;
        int32_t ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UReplayDataObject::DoesBooleanDataExist(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "DoesBooleanDataExist");
    struct
    {
        struct FString Name;
        int32_t ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UReplayDataObject::AddVectorData(struct FString Name, struct FVector Data)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "AddVectorData");
    struct
    {
        struct FString Name;
        struct FVector Data;
    } Parms{};
    Parms.Name = (struct FString)Name;
    Parms.Data = (struct FVector)Data;
    this->ProcessEvent(Func, &Parms);
}

void UReplayDataObject::AddTransformData(struct FString Name, struct FTransform Data)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "AddTransformData");
    struct
    {
        struct FString Name;
        struct FTransform Data;
    } Parms{};
    Parms.Name = (struct FString)Name;
    Parms.Data = (struct FTransform)Data;
    this->ProcessEvent(Func, &Parms);
}

void UReplayDataObject::AddTextData(struct FString Name, struct FText Data)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "AddTextData");
    struct
    {
        struct FString Name;
        struct FText Data;
    } Parms{};
    Parms.Name = (struct FString)Name;
    Parms.Data = (struct FText)Data;
    this->ProcessEvent(Func, &Parms);
}

void UReplayDataObject::AddStringData(struct FString Name, struct FString Data)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "AddStringData");
    struct
    {
        struct FString Name;
        struct FString Data;
    } Parms{};
    Parms.Name = (struct FString)Name;
    Parms.Data = (struct FString)Data;
    this->ProcessEvent(Func, &Parms);
}

void UReplayDataObject::AddRotatorData(struct FString Name, struct FRotator Data)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "AddRotatorData");
    struct
    {
        struct FString Name;
        struct FRotator Data;
    } Parms{};
    Parms.Name = (struct FString)Name;
    Parms.Data = (struct FRotator)Data;
    this->ProcessEvent(Func, &Parms);
}

void UReplayDataObject::AddNameData(struct FString Name, struct FName Data)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "AddNameData");
    struct
    {
        struct FString Name;
        struct FName Data;
    } Parms{};
    Parms.Name = (struct FString)Name;
    Parms.Data = (struct FName)Data;
    this->ProcessEvent(Func, &Parms);
}

void UReplayDataObject::AddIntegerData(struct FString Name, int32_t Data)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "AddIntegerData");
    struct
    {
        struct FString Name;
        int32_t Data;
    } Parms{};
    Parms.Name = (struct FString)Name;
    Parms.Data = (int32_t)Data;
    this->ProcessEvent(Func, &Parms);
}

void UReplayDataObject::AddInteger64Data(struct FString Name, int64_t Data)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "AddInteger64Data");
    struct
    {
        struct FString Name;
        int64_t Data;
    } Parms{};
    Parms.Name = (struct FString)Name;
    Parms.Data = (int64_t)Data;
    this->ProcessEvent(Func, &Parms);
}

void UReplayDataObject::AddFloatData(struct FString Name, float Data)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "AddFloatData");
    struct
    {
        struct FString Name;
        float Data;
    } Parms{};
    Parms.Name = (struct FString)Name;
    Parms.Data = (float)Data;
    this->ProcessEvent(Func, &Parms);
}

void UReplayDataObject::AddByteData(struct FString Name, struct TArray<uint8_t> Data)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "AddByteData");
    struct
    {
        struct FString Name;
        struct TArray<uint8_t> Data;
    } Parms{};
    Parms.Name = (struct FString)Name;
    Parms.Data = (struct TArray<uint8_t>)Data;
    this->ProcessEvent(Func, &Parms);
}

void UReplayDataObject::AddBooleanData(struct FString Name, bool Data)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDataObject", "AddBooleanData");
    struct
    {
        struct FString Name;
        bool Data;
    } Parms{};
    Parms.Name = (struct FString)Name;
    Parms.Data = (bool)Data;
    this->ProcessEvent(Func, &Parms);
}

// UReplayObject
void UReplayObject::RequestEvents(struct FString Group, int32_t UserIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayObject", "RequestEvents");
    struct
    {
        struct FString Group;
        int32_t UserIndex;
    } Parms{};
    Parms.Group = (struct FString)Group;
    Parms.UserIndex = (int32_t)UserIndex;
    this->ProcessEvent(Func, &Parms);
}

// AReplayPlayerController
void AReplayPlayerController::OnTogglePause(bool PauseState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayPlayerController", "OnTogglePause");
    struct
    {
        bool PauseState;
    } Parms{};
    Parms.PauseState = (bool)PauseState;
    this->ProcessEvent(Func, &Parms);
}

void AReplayPlayerController::OnStopSpectateActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayPlayerController", "OnStopSpectateActor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AReplayPlayerController::OnSpectateActor(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayPlayerController", "OnSpectateActor");
    struct
    {
        struct AActor* Actor;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    this->ProcessEvent(Func, &Parms);
}

void AReplayPlayerController::OnGoToTime(float CurrentTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayPlayerController", "OnGoToTime");
    struct
    {
        float CurrentTime;
    } Parms{};
    Parms.CurrentTime = (float)CurrentTime;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
