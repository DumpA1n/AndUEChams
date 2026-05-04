#include "GPRecordReplay.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- ARecordReplaySystem::* ----
void ARecordReplaySystem::StartStopRecordingReplayOnServer(uint8_t bStartOrStop)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RecordReplaySystem", "StartStopRecordingReplayOnServer");
    struct
    {
        uint8_t bStartOrStop;
    } Parms{};
    Parms.bStartOrStop = (uint8_t)bStartOrStop;
    this->ProcessEvent(Func, &Parms);
}

// ---- UReplayControlComponent::* ----
uint8_t UReplayControlComponent::SwitchReplayPauseState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayControlComponent", "SwitchReplayPauseState");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UReplayControlComponent::SetReplayToTime(int32_t Seconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayControlComponent", "SetReplayToTime");
    struct
    {
        int32_t Seconds;
    } Parms{};
    Parms.Seconds = (int32_t)Seconds;
    this->ProcessEvent(Func, &Parms);
}

void UReplayControlComponent::SetReplayPlayRate(float PlayRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayControlComponent", "SetReplayPlayRate");
    struct
    {
        float PlayRate;
    } Parms{};
    Parms.PlayRate = (float)PlayRate;
    this->ProcessEvent(Func, &Parms);
}

float UReplayControlComponent::GetReplayTotalTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayControlComponent", "GetReplayTotalTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UReplayControlComponent::GetReplayCurrentTiome()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayControlComponent", "GetReplayCurrentTiome");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UReplayFindComponent::* ----
void UReplayFindComponent::PlayReplay(struct FString ReplayName, struct FString StreamerType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayFindComponent", "PlayReplay");
    struct
    {
        struct FString ReplayName;
        struct FString StreamerType;
    } Parms{};
    Parms.ReplayName = (struct FString)ReplayName;
    Parms.StreamerType = (struct FString)StreamerType;
    this->ProcessEvent(Func, &Parms);
}

void UReplayFindComponent::FindReplays()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayFindComponent", "FindReplays");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
