#include "BP_GFStage_LobbyBHD.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UBP_GFStage_LobbyBHD_C::* ----
void UBP_GFStage_LobbyBHD_C::OnLuaGameFlowEvent_707AB88F48543DDA7FC7E98B9553966B(struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_LobbyBHD_C", "OnLuaGameFlowEvent_707AB88F48543DDA7FC7E98B9553966B");
    struct
    {
        struct FString ArgStr;
    } Parms{};
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_LobbyBHD_C::OnLuaGameFlowEvent_066D50DA4923FAB979899FAB62493E11(struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_LobbyBHD_C", "OnLuaGameFlowEvent_066D50DA4923FAB979899FAB62493E11");
    struct
    {
        struct FString ArgStr;
    } Parms{};
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_LobbyBHD_C::OnLuaGameFlowEvent_5B6022944F3D17A5D99075BA09DFDBF7(struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_LobbyBHD_C", "OnLuaGameFlowEvent_5B6022944F3D17A5D99075BA09DFDBF7");
    struct
    {
        struct FString ArgStr;
    } Parms{};
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_LobbyBHD_C::OnLuaGameFlowEvent_2B906D9B4F1B17CE8E17D8B81EDA6879(struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_LobbyBHD_C", "OnLuaGameFlowEvent_2B906D9B4F1B17CE8E17D8B81EDA6879");
    struct
    {
        struct FString ArgStr;
    } Parms{};
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_LobbyBHD_C::OnLuaGameFlowEvent_0261676248DFF10BD759E983C417FDDC(struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_LobbyBHD_C", "OnLuaGameFlowEvent_0261676248DFF10BD759E983C417FDDC");
    struct
    {
        struct FString ArgStr;
    } Parms{};
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_LobbyBHD_C::OnBeginStage(struct UObject* Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_LobbyBHD_C", "OnBeginStage");
    struct
    {
        struct UObject* Args;
    } Parms{};
    Parms.Args = (struct UObject*)Args;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_LobbyBHD_C::OnEndStage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_LobbyBHD_C", "OnEndStage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_LobbyBHD_C::ExecuteUbergraph_BP_GFStage_LobbyBHD(int32_t EntryPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_LobbyBHD_C", "ExecuteUbergraph_BP_GFStage_LobbyBHD");
    struct
    {
        int32_t EntryPoint;
    } Parms{};
    Parms.EntryPoint = (int32_t)EntryPoint;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
