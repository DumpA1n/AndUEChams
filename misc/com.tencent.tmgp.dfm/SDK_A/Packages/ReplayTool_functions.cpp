#include "ReplayTool.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- AReplaySpectatorPlayerController::* ----
void AReplaySpectatorPlayerController::SetCurrentReplayTimeToSeconds(int32_t Seconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplaySpectatorPlayerController", "SetCurrentReplayTimeToSeconds");
    struct
    {
        int32_t Seconds;
    } Parms{};
    Parms.Seconds = (int32_t)Seconds;
    this->ProcessEvent(Func, &Parms);
}

void AReplaySpectatorPlayerController::SetCurrentReplayPlayRate(float PlayRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplaySpectatorPlayerController", "SetCurrentReplayPlayRate");
    struct
    {
        float PlayRate;
    } Parms{};
    Parms.PlayRate = (float)PlayRate;
    this->ProcessEvent(Func, &Parms);
}

uint8_t AReplaySpectatorPlayerController::SetCurrentReplayPausedState(uint8_t bDoPause)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplaySpectatorPlayerController", "SetCurrentReplayPausedState");
    struct
    {
        uint8_t bDoPause;
        uint8_t ReturnValue;
    } Parms{};
    Parms.bDoPause = (uint8_t)bDoPause;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AReplaySpectatorPlayerController::PlayReplayFromBP(struct FString ReplayName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplaySpectatorPlayerController", "PlayReplayFromBP");
    struct
    {
        struct FString ReplayName;
    } Parms{};
    Parms.ReplayName = (struct FString)ReplayName;
    this->ProcessEvent(Func, &Parms);
}

void AReplaySpectatorPlayerController::ListReplaysFromBP()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplaySpectatorPlayerController", "ListReplaysFromBP");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

int32_t AReplaySpectatorPlayerController::GetCurrentReplayTotalTimeInSeconds()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplaySpectatorPlayerController", "GetCurrentReplayTotalTimeInSeconds");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t AReplaySpectatorPlayerController::GetCurrentReplayCurrentTimeInSeconds()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplaySpectatorPlayerController", "GetCurrentReplayCurrentTimeInSeconds");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AReplaySpectatorPlayerController::DeleteReplay(struct FString ReplayName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplaySpectatorPlayerController", "DeleteReplay");
    struct
    {
        struct FString ReplayName;
    } Parms{};
    Parms.ReplayName = (struct FString)ReplayName;
    this->ProcessEvent(Func, &Parms);
}

void AReplaySpectatorPlayerController::BP_OnFindReplaysComplete(const struct TArray<struct FS_ReplayInfo>& AllReplays)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplaySpectatorPlayerController", "BP_OnFindReplaysComplete");
    struct
    {
        struct TArray<struct FS_ReplayInfo> AllReplays;
    } Parms{};
    Parms.AllReplays = (struct TArray<struct FS_ReplayInfo>)AllReplays;
    this->ProcessEvent(Func, &Parms);
}

// ---- IReplayCharacterInterface::* ----
void IReplayCharacterInterface::SwitchToReplayFPPCamera()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayCharacterInterface", "SwitchToReplayFPPCamera");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void IReplayCharacterInterface::SetFixedFPPCam(uint8_t bIsCameraFixed, struct FVector InFixLoc, struct FRotator InFixRotation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayCharacterInterface", "SetFixedFPPCam");
    struct
    {
        uint8_t bIsCameraFixed;
        struct FVector InFixLoc;
        struct FRotator InFixRotation;
    } Parms{};
    Parms.bIsCameraFixed = (uint8_t)bIsCameraFixed;
    Parms.InFixLoc = (struct FVector)InFixLoc;
    Parms.InFixRotation = (struct FRotator)InFixRotation;
    this->ProcessEvent(Func, &Parms);
}

void IReplayCharacterInterface::GetCurrCameraInfo(struct FVector& outCamLoc, struct FRotator& outCamRot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayCharacterInterface", "GetCurrCameraInfo");
    struct
    {
        struct FVector outCamLoc;
        struct FRotator outCamRot;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    outCamLoc = Parms.outCamLoc;
    outCamRot = Parms.outCamRot;
}

} // namespace SDK
