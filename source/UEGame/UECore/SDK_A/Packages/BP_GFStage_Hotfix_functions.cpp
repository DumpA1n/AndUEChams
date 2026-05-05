#include "BP_GFStage_Hotfix.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UBP_GFStage_Hotfix_C
void UBP_GFStage_Hotfix_C::OnLuaGameFlowEvent_BFA5C325421863C8631C9D98AC4C3071(struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_Hotfix_C", "OnLuaGameFlowEvent_BFA5C325421863C8631C9D98AC4C3071");
    struct
    {
        struct FString ArgStr;
    } Parms{};
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_Hotfix_C::OnEndStage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_Hotfix_C", "OnEndStage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_Hotfix_C::OnBeginStage(struct UObject* Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_Hotfix_C", "OnBeginStage");
    struct
    {
        struct UObject* Args;
    } Parms{};
    Parms.Args = (struct UObject*)Args;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_Hotfix_C::ExecuteUbergraph_BP_GFStage_Hotfix(int32_t EntryPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_Hotfix_C", "ExecuteUbergraph_BP_GFStage_Hotfix");
    struct
    {
        int32_t EntryPoint;
    } Parms{};
    Parms.EntryPoint = (int32_t)EntryPoint;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
