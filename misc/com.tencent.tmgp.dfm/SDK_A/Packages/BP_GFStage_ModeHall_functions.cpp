#include "BP_GFStage_ModeHall.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UBP_GFStage_ModeHall_C::* ----
void UBP_GFStage_ModeHall_C::OnLuaGameFlowEvent_9ADB33C24BAA9C2FE105F8AEDFE4D245(struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_ModeHall_C", "OnLuaGameFlowEvent_9ADB33C24BAA9C2FE105F8AEDFE4D245");
    struct
    {
        struct FString ArgStr;
    } Parms{};
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_ModeHall_C::OnLuaGameFlowEvent_54DD992C465D8B4F8B8142A2F9734A67(struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_ModeHall_C", "OnLuaGameFlowEvent_54DD992C465D8B4F8B8142A2F9734A67");
    struct
    {
        struct FString ArgStr;
    } Parms{};
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_ModeHall_C::OnLuaGameFlowEvent_CADCA1184DA2D9F0AB661885C9D742E8(struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_ModeHall_C", "OnLuaGameFlowEvent_CADCA1184DA2D9F0AB661885C9D742E8");
    struct
    {
        struct FString ArgStr;
    } Parms{};
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_ModeHall_C::OnLuaGameFlowEvent_B26E3B894720D37F7FEF47B758B2057A(struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_ModeHall_C", "OnLuaGameFlowEvent_B26E3B894720D37F7FEF47B758B2057A");
    struct
    {
        struct FString ArgStr;
    } Parms{};
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_ModeHall_C::OnLuaGameFlowEvent_3D8E2CB34FCF7C0AF407B6BE651B8C30(struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_ModeHall_C", "OnLuaGameFlowEvent_3D8E2CB34FCF7C0AF407B6BE651B8C30");
    struct
    {
        struct FString ArgStr;
    } Parms{};
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_ModeHall_C::OnLuaGameFlowEvent_B72FD72B4D50FF91B1BE62B04E3BE8D1(struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_ModeHall_C", "OnLuaGameFlowEvent_B72FD72B4D50FF91B1BE62B04E3BE8D1");
    struct
    {
        struct FString ArgStr;
    } Parms{};
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_ModeHall_C::OnBeginStage(struct UObject* Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_ModeHall_C", "OnBeginStage");
    struct
    {
        struct UObject* Args;
    } Parms{};
    Parms.Args = (struct UObject*)Args;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_ModeHall_C::ExecuteUbergraph_BP_GFStage_ModeHall(int32_t EntryPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_ModeHall_C", "ExecuteUbergraph_BP_GFStage_ModeHall");
    struct
    {
        int32_t EntryPoint;
    } Parms{};
    Parms.EntryPoint = (int32_t)EntryPoint;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
