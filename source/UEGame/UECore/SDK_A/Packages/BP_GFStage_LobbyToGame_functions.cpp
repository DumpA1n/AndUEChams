#include "BP_GFStage_LobbyToGame.hpp"
#include "DFLoading.hpp"
#include "DFMGameLoading.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UBP_GFStage_LobbyToGame_C
void UBP_GFStage_LobbyToGame_C::MarkLoadingLevel(struct FString URL)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_LobbyToGame_C", "MarkLoadingLevel");
    struct
    {
        struct FString URL;
    } Parms{};
    Parms.URL = (struct FString)URL;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_LobbyToGame_C::GetLevelNameByUrl(struct FString URL, struct FString& OutLevelName, uint8_t& Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_LobbyToGame_C", "GetLevelNameByUrl");
    struct
    {
        struct FString URL;
        struct FString OutLevelName;
        uint8_t Result;
    } Parms{};
    Parms.URL = (struct FString)URL;
    this->ProcessEvent(Func, &Parms);
    OutLevelName = Parms.OutLevelName;
    Result = Parms.Result;
}

void UBP_GFStage_LobbyToGame_C::OnLuaGameFlowEvent_80A956744EA0138CA9803F9EAF4E3488(struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_LobbyToGame_C", "OnLuaGameFlowEvent_80A956744EA0138CA9803F9EAF4E3488");
    struct
    {
        struct FString ArgStr;
    } Parms{};
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_LobbyToGame_C::OnGameLoadingEnd(EFlowResult FlowResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_LobbyToGame_C", "OnGameLoadingEnd");
    struct
    {
        enum EFlowResult FlowResult;
    } Parms{};
    Parms.FlowResult = (enum EFlowResult)FlowResult;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_LobbyToGame_C::OnEndStage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_LobbyToGame_C", "OnEndStage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_LobbyToGame_C::OnLobbyGameModeEndPlay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_LobbyToGame_C", "OnLobbyGameModeEndPlay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_LobbyToGame_C::OnGameLoadingPostConnectDS_Event_0()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_LobbyToGame_C", "OnGameLoadingPostConnectDS_Event_0");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_LobbyToGame_C::SeamlessLoadingTimeout()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_LobbyToGame_C", "SeamlessLoadingTimeout");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_LobbyToGame_C::GameLoadingEnd(EFlowResult Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_LobbyToGame_C", "GameLoadingEnd");
    struct
    {
        enum EFlowResult Result;
    } Parms{};
    Parms.Result = (enum EFlowResult)Result;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_LobbyToGame_C::OnEnterTargetLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_LobbyToGame_C", "OnEnterTargetLevel");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_LobbyToGame_C::OnGPGameLoadingEnd(EDFLoadingFlowStepResult Result, struct FString Reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_LobbyToGame_C", "OnGPGameLoadingEnd");
    struct
    {
        enum EDFLoadingFlowStepResult Result;
        struct FString Reason;
    } Parms{};
    Parms.Result = (enum EDFLoadingFlowStepResult)Result;
    Parms.Reason = (struct FString)Reason;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_LobbyToGame_C::OnBeginStage(struct UObject* Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_LobbyToGame_C", "OnBeginStage");
    struct
    {
        struct UObject* Args;
    } Parms{};
    Parms.Args = (struct UObject*)Args;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_LobbyToGame_C::ExecuteUbergraph_BP_GFStage_LobbyToGame(int32_t EntryPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_LobbyToGame_C", "ExecuteUbergraph_BP_GFStage_LobbyToGame");
    struct
    {
        int32_t EntryPoint;
    } Parms{};
    Parms.EntryPoint = (int32_t)EntryPoint;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
