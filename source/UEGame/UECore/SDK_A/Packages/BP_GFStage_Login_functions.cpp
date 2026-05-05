#include "BP_GFStage_Login.hpp"
#include "GameCore.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UBP_GFStage_Login_C
void UBP_GFStage_Login_C::OnLuaGameFlowEvent_F52EAB224CDC38B082C1E7806A1E4E96(struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_Login_C", "OnLuaGameFlowEvent_F52EAB224CDC38B082C1E7806A1E4E96");
    struct
    {
        struct FString ArgStr;
    } Parms{};
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_Login_C::OnBeginStage(struct UObject* Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_Login_C", "OnBeginStage");
    struct
    {
        struct UObject* Args;
    } Parms{};
    Parms.Args = (struct UObject*)Args;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_Login_C::OnDataTablePreloadFinish(const struct FDataTableUseSceneValue& UseSceneValue, int32_t LoadedNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_Login_C", "OnDataTablePreloadFinish");
    struct
    {
        struct FDataTableUseSceneValue UseSceneValue;
        int32_t LoadedNum;
    } Parms{};
    Parms.UseSceneValue = (struct FDataTableUseSceneValue)UseSceneValue;
    Parms.LoadedNum = (int32_t)LoadedNum;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_Login_C::StartLoginInterface()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_Login_C", "StartLoginInterface");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_Login_C::ExecuteUbergraph_BP_GFStage_Login(int32_t EntryPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_Login_C", "ExecuteUbergraph_BP_GFStage_Login");
    struct
    {
        int32_t EntryPoint;
    } Parms{};
    Parms.EntryPoint = (int32_t)EntryPoint;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
