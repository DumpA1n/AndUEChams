#include "Intro.hpp"
#include "DFMGameLoading.hpp"
#include "DFMGameplay.hpp"
#include "Engine.hpp"
#include "GPQuest.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// AIntroGameMode
void AIntroGameMode::SetPlayerVisiable(int32_t PlayerIndex, uint8_t bVisiblity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IntroGameMode", "SetPlayerVisiable");
    struct
    {
        int32_t PlayerIndex;
        uint8_t bVisiblity;
    } Parms{};
    Parms.PlayerIndex = (int32_t)PlayerIndex;
    Parms.bVisiblity = (uint8_t)bVisiblity;
    this->ProcessEvent(Func, &Parms);
}

void AIntroGameMode::SetCurrentStartSpot(struct FName StartSpotName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IntroGameMode", "SetCurrentStartSpot");
    struct
    {
        struct FName StartSpotName;
    } Parms{};
    Parms.StartSpotName = (struct FName)StartSpotName;
    this->ProcessEvent(Func, &Parms);
}

void AIntroGameMode::RebornPlayer(struct AController* PlayerController, uint8_t RefillArmor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IntroGameMode", "RebornPlayer");
    struct
    {
        struct AController* PlayerController;
        uint8_t RefillArmor;
    } Parms{};
    Parms.PlayerController = (struct AController*)PlayerController;
    Parms.RefillArmor = (uint8_t)RefillArmor;
    this->ProcessEvent(Func, &Parms);
}

void AIntroGameMode::RebornIntroPlayer(struct ADFMPlayerController* PlayerController, uint8_t ResetAlivePlayerPosition, uint8_t RefillArmor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IntroGameMode", "RebornIntroPlayer");
    struct
    {
        struct ADFMPlayerController* PlayerController;
        uint8_t ResetAlivePlayerPosition;
        uint8_t RefillArmor;
    } Parms{};
    Parms.PlayerController = (struct ADFMPlayerController*)PlayerController;
    Parms.ResetAlivePlayerPosition = (uint8_t)ResetAlivePlayerPosition;
    Parms.RefillArmor = (uint8_t)RefillArmor;
    this->ProcessEvent(Func, &Parms);
}

void AIntroGameMode::OnQuestAsyncLoadComplete(struct AGPQuest* Quest)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IntroGameMode", "OnQuestAsyncLoadComplete");
    struct
    {
        struct AGPQuest* Quest;
    } Parms{};
    Parms.Quest = (struct AGPQuest*)Quest;
    this->ProcessEvent(Func, &Parms);
}

void AIntroGameMode::OnClientGameLoadingFinished(EFlowResult Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IntroGameMode", "OnClientGameLoadingFinished");
    struct
    {
        enum EFlowResult Result;
    } Parms{};
    Parms.Result = (enum EFlowResult)Result;
    this->ProcessEvent(Func, &Parms);
}

void AIntroGameMode::NewstartPlayer(int32_t PlayerIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IntroGameMode", "NewstartPlayer");
    struct
    {
        int32_t PlayerIndex;
    } Parms{};
    Parms.PlayerIndex = (int32_t)PlayerIndex;
    this->ProcessEvent(Func, &Parms);
}

void AIntroGameMode::NewstartAllPlayer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IntroGameMode", "NewstartAllPlayer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct ADFMPlayerController* AIntroGameMode::GetPlayerControler(int32_t TeamID, int32_t PlayerIndexInTeam)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IntroGameMode", "GetPlayerControler");
    struct
    {
        int32_t TeamID;
        int32_t PlayerIndexInTeam;
        struct ADFMPlayerController* ReturnValue;
    } Parms{};
    Parms.TeamID = (int32_t)TeamID;
    Parms.PlayerIndexInTeam = (int32_t)PlayerIndexInTeam;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct APlayerStart*> AIntroGameMode::FindIntroPlayerStart(struct FName StartSpotTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IntroGameMode", "FindIntroPlayerStart");
    struct
    {
        struct FName StartSpotTag;
        struct TArray<struct APlayerStart*> ReturnValue;
    } Parms{};
    Parms.StartSpotTag = (struct FName)StartSpotTag;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct APlayerStart* AIntroGameMode::FindDefaultPlayerStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IntroGameMode", "FindDefaultPlayerStart");
    struct
    {
        struct APlayerStart* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// AIntroPlayerState
void AIntroPlayerState::SetPlayerVisiable(uint8_t bPlayerVisiable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IntroPlayerState", "SetPlayerVisiable");
    struct
    {
        uint8_t bPlayerVisiable;
    } Parms{};
    Parms.bPlayerVisiable = (uint8_t)bPlayerVisiable;
    this->ProcessEvent(Func, &Parms);
}

uint8_t AIntroPlayerState::GetPlayerVisiable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IntroPlayerState", "GetPlayerVisiable");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
