#include "BP_GFStage_LoginToLobbyBHD.hpp"
#include "DFLoading.hpp"
#include "DFMGameLoading.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UBP_GFStage_LoginToLobbyBHD_C
void UBP_GFStage_LoginToLobbyBHD_C::OnGameLoadingEnd(EFlowResult FlowResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_LoginToLobbyBHD_C", "OnGameLoadingEnd");
    struct
    {
        enum EFlowResult FlowResult;
    } Parms{};
    Parms.FlowResult = (enum EFlowResult)FlowResult;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_LoginToLobbyBHD_C::OnEndStage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_LoginToLobbyBHD_C", "OnEndStage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_LoginToLobbyBHD_C::OnLobbyGameModeStartPlay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_LoginToLobbyBHD_C", "OnLobbyGameModeStartPlay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_LoginToLobbyBHD_C::OnBeginStage(struct UObject* Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_LoginToLobbyBHD_C", "OnBeginStage");
    struct
    {
        struct UObject* Args;
    } Parms{};
    Parms.Args = (struct UObject*)Args;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_LoginToLobbyBHD_C::OnGPGameLoadingEnd(EDFLoadingFlowStepResult Result, struct FString Reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_LoginToLobbyBHD_C", "OnGPGameLoadingEnd");
    struct
    {
        enum EDFLoadingFlowStepResult Result;
        struct FString Reason;
    } Parms{};
    Parms.Result = (enum EDFLoadingFlowStepResult)Result;
    Parms.Reason = (struct FString)Reason;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_LoginToLobbyBHD_C::ExecuteUbergraph_BP_GFStage_LoginToLobbyBHD(int32_t EntryPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_LoginToLobbyBHD_C", "ExecuteUbergraph_BP_GFStage_LoginToLobbyBHD");
    struct
    {
        int32_t EntryPoint;
    } Parms{};
    Parms.EntryPoint = (int32_t)EntryPoint;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
