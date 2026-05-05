#include "BP_GFStage_Game.hpp"
#include "DFMGameplay.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UBP_GFStage_Game_C
void UBP_GFStage_Game_C::OnLuaGameFlowEvent_C894BE7B438BCC41E05EE88798F20A76(struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_Game_C", "OnLuaGameFlowEvent_C894BE7B438BCC41E05EE88798F20A76");
    struct
    {
        struct FString ArgStr;
    } Parms{};
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_Game_C::OnLuaGameFlowEvent_476F45B84438B67122BD17A14C523D30(struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_Game_C", "OnLuaGameFlowEvent_476F45B84438B67122BD17A14C523D30");
    struct
    {
        struct FString ArgStr;
    } Parms{};
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_Game_C::OnLuaGameFlowEvent_247E24E0468F31311F4FE4BD4F1D519D(struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_Game_C", "OnLuaGameFlowEvent_247E24E0468F31311F4FE4BD4F1D519D");
    struct
    {
        struct FString ArgStr;
    } Parms{};
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_Game_C::OnLuaGameFlowEvent_A2BC58F64887CB0A4795238C77E537FA(struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_Game_C", "OnLuaGameFlowEvent_A2BC58F64887CB0A4795238C77E537FA");
    struct
    {
        struct FString ArgStr;
    } Parms{};
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_Game_C::OnBeginStage(struct UObject* Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_Game_C", "OnBeginStage");
    struct
    {
        struct UObject* Args;
    } Parms{};
    Parms.Args = (struct UObject*)Args;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_Game_C::OnEndStage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_Game_C", "OnEndStage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_Game_C::OnClientPlayerMatchOver(const EMatchOverReason& MatchOverReason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_Game_C", "OnClientPlayerMatchOver");
    struct
    {
        enum EMatchOverReason MatchOverReason;
    } Parms{};
    Parms.MatchOverReason = (enum EMatchOverReason)MatchOverReason;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_Game_C::OnClientQuit(EMatchOverReason QuitReason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_Game_C", "OnClientQuit");
    struct
    {
        enum EMatchOverReason QuitReason;
    } Parms{};
    Parms.QuitReason = (enum EMatchOverReason)QuitReason;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_Game_C::OnClientGameSettlementGameFlowBegin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_Game_C", "OnClientGameSettlementGameFlowBegin");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_Game_C::ExecuteUbergraph_BP_GFStage_Game(int32_t EntryPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_Game_C", "ExecuteUbergraph_BP_GFStage_Game");
    struct
    {
        int32_t EntryPoint;
    } Parms{};
    Parms.EntryPoint = (int32_t)EntryPoint;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
