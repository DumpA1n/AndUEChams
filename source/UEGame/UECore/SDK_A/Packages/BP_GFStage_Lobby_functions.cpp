#include "BP_GFStage_Lobby.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UBP_GFStage_Lobby_C
void UBP_GFStage_Lobby_C::CallLuaModule(struct FString ModuleName, struct FString FunctionName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_Lobby_C", "CallLuaModule");
    struct
    {
        struct FString ModuleName;
        struct FString FunctionName;
    } Parms{};
    Parms.ModuleName = (struct FString)ModuleName;
    Parms.FunctionName = (struct FString)FunctionName;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_Lobby_C::OnLuaGameFlowEvent_D8CF9D64405E332B22426EAFEB97CCEF(struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_Lobby_C", "OnLuaGameFlowEvent_D8CF9D64405E332B22426EAFEB97CCEF");
    struct
    {
        struct FString ArgStr;
    } Parms{};
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_Lobby_C::OnLuaGameFlowEvent_D67B64CD4E9A33DE6539399490538AB2(struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_Lobby_C", "OnLuaGameFlowEvent_D67B64CD4E9A33DE6539399490538AB2");
    struct
    {
        struct FString ArgStr;
    } Parms{};
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_Lobby_C::OnLuaGameFlowEvent_1B592FDF4C059AE81F3E2297D98B0519(struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_Lobby_C", "OnLuaGameFlowEvent_1B592FDF4C059AE81F3E2297D98B0519");
    struct
    {
        struct FString ArgStr;
    } Parms{};
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_Lobby_C::OnLuaGameFlowEvent_42296D9C442595A133D763AA0A22A524(struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_Lobby_C", "OnLuaGameFlowEvent_42296D9C442595A133D763AA0A22A524");
    struct
    {
        struct FString ArgStr;
    } Parms{};
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_Lobby_C::OnLuaGameFlowEvent_6B9341574032587A5E0B8FA39B71753D(struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_Lobby_C", "OnLuaGameFlowEvent_6B9341574032587A5E0B8FA39B71753D");
    struct
    {
        struct FString ArgStr;
    } Parms{};
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_Lobby_C::OnLuaGameFlowEvent_0B24D07A49F7488A698D91B32F637C92(struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_Lobby_C", "OnLuaGameFlowEvent_0B24D07A49F7488A698D91B32F637C92");
    struct
    {
        struct FString ArgStr;
    } Parms{};
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_Lobby_C::OnLuaGameFlowEvent_8728C61842FD6523174B6395CFE140CF(struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_Lobby_C", "OnLuaGameFlowEvent_8728C61842FD6523174B6395CFE140CF");
    struct
    {
        struct FString ArgStr;
    } Parms{};
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_Lobby_C::OnLuaGameFlowEvent_EE7964454E0D8861FB50BCBB1BFA1E83(struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_Lobby_C", "OnLuaGameFlowEvent_EE7964454E0D8861FB50BCBB1BFA1E83");
    struct
    {
        struct FString ArgStr;
    } Parms{};
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_Lobby_C::OnLuaGameFlowEvent_52A975F74CFE62C90865FBA698310D1A(struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_Lobby_C", "OnLuaGameFlowEvent_52A975F74CFE62C90865FBA698310D1A");
    struct
    {
        struct FString ArgStr;
    } Parms{};
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_Lobby_C::OnLuaGameFlowEvent_FED923AC4D00B6B1E200E6ADF94FEF06(struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_Lobby_C", "OnLuaGameFlowEvent_FED923AC4D00B6B1E200E6ADF94FEF06");
    struct
    {
        struct FString ArgStr;
    } Parms{};
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_Lobby_C::OnLuaGameFlowEvent_7B42BF884E01FDF97992CF82F6FB5111(struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_Lobby_C", "OnLuaGameFlowEvent_7B42BF884E01FDF97992CF82F6FB5111");
    struct
    {
        struct FString ArgStr;
    } Parms{};
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_Lobby_C::OnLuaGameFlowEvent_413C05D84CA17937E90939AF633D8392(struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_Lobby_C", "OnLuaGameFlowEvent_413C05D84CA17937E90939AF633D8392");
    struct
    {
        struct FString ArgStr;
    } Parms{};
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_Lobby_C::OnBeginStage(struct UObject* Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_Lobby_C", "OnBeginStage");
    struct
    {
        struct UObject* Args;
    } Parms{};
    Parms.Args = (struct UObject*)Args;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_Lobby_C::OnEndStage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_Lobby_C", "OnEndStage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_Lobby_C::ExecuteUbergraph_BP_GFStage_Lobby(int32_t EntryPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_Lobby_C", "ExecuteUbergraph_BP_GFStage_Lobby");
    struct
    {
        int32_t EntryPoint;
    } Parms{};
    Parms.EntryPoint = (int32_t)EntryPoint;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
