#include "BP_GFStage_PostLaunch.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UBP_GFStage_PostLaunch_C
uint8_t UBP_GFStage_PostLaunch_C::IsTestingStageFlow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_PostLaunch_C", "IsTestingStageFlow");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBP_GFStage_PostLaunch_C::IsTestingStageSingle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_PostLaunch_C", "IsTestingStageSingle");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBP_GFStage_PostLaunch_C::OnLuaGameFlowEvent_7998F82F4D6C8FF3A72CCEB6FE3370A1(struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_PostLaunch_C", "OnLuaGameFlowEvent_7998F82F4D6C8FF3A72CCEB6FE3370A1");
    struct
    {
        struct FString ArgStr;
    } Parms{};
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_PostLaunch_C::OnBeginStage(struct UObject* Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_PostLaunch_C", "OnBeginStage");
    struct
    {
        struct UObject* Args;
    } Parms{};
    Parms.Args = (struct UObject*)Args;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_PostLaunch_C::ExecuteUbergraph_BP_GFStage_PostLaunch(int32_t EntryPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_PostLaunch_C", "ExecuteUbergraph_BP_GFStage_PostLaunch");
    struct
    {
        int32_t EntryPoint;
    } Parms{};
    Parms.EntryPoint = (int32_t)EntryPoint;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
