#include "BP_GFStage_GameSettlement.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UBP_GFStage_GameSettlement_C
void UBP_GFStage_GameSettlement_C::OnLuaGameFlowEvent_C4546DCA4EDEFDC124912BBB4856B2E1(struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_GameSettlement_C", "OnLuaGameFlowEvent_C4546DCA4EDEFDC124912BBB4856B2E1");
    struct
    {
        struct FString ArgStr;
    } Parms{};
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_GameSettlement_C::OnLuaGameFlowEvent_A57748C24DDEFDB4DFA1DCA710361A0E(struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_GameSettlement_C", "OnLuaGameFlowEvent_A57748C24DDEFDB4DFA1DCA710361A0E");
    struct
    {
        struct FString ArgStr;
    } Parms{};
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_GameSettlement_C::OnLuaGameFlowEvent_F1EA953A456161FE751993B737F225F7(struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_GameSettlement_C", "OnLuaGameFlowEvent_F1EA953A456161FE751993B737F225F7");
    struct
    {
        struct FString ArgStr;
    } Parms{};
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_GameSettlement_C::OnLuaGameFlowEvent_3674C56C429C6D13D7D8BB9E568EB6E8(struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_GameSettlement_C", "OnLuaGameFlowEvent_3674C56C429C6D13D7D8BB9E568EB6E8");
    struct
    {
        struct FString ArgStr;
    } Parms{};
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_GameSettlement_C::OnBeginStage(struct UObject* Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_GameSettlement_C", "OnBeginStage");
    struct
    {
        struct UObject* Args;
    } Parms{};
    Parms.Args = (struct UObject*)Args;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_GameSettlement_C::OnEndStage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_GameSettlement_C", "OnEndStage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_GameSettlement_C::ExecuteUbergraph_BP_GFStage_GameSettlement(int32_t EntryPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_GameSettlement_C", "ExecuteUbergraph_BP_GFStage_GameSettlement");
    struct
    {
        int32_t EntryPoint;
    } Parms{};
    Parms.EntryPoint = (int32_t)EntryPoint;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
