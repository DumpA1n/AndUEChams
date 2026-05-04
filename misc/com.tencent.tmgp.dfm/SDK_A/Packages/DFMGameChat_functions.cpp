#include "DFMGameChat.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UDFMGameChat::* ----
void UDFMGameChat::ServerAISendChatPreset(struct AController* Controller, struct FName PresetId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameChat", "ServerAISendChatPreset");
    struct
    {
        struct AController* Controller;
        struct FName PresetId;
    } Parms{};
    Parms.Controller = (struct AController*)Controller;
    Parms.PresetId = (struct FName)PresetId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameChat::ServerAISendChat(struct AController* Controller, struct FString Content)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameChat", "ServerAISendChat");
    struct
    {
        struct AController* Controller;
        struct FString Content;
    } Parms{};
    Parms.Controller = (struct AController*)Controller;
    Parms.Content = (struct FString)Content;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameChat::SendChatPreset(struct FString Nick, struct FName PresetId, struct TArray<int32_t> ExtraParams, EChatType ChatType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameChat", "SendChatPreset");
    struct
    {
        struct FString Nick;
        struct FName PresetId;
        struct TArray<int32_t> ExtraParams;
        enum EChatType ChatType;
    } Parms{};
    Parms.Nick = (struct FString)Nick;
    Parms.PresetId = (struct FName)PresetId;
    Parms.ExtraParams = (struct TArray<int32_t>)ExtraParams;
    Parms.ChatType = (enum EChatType)ChatType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameChat::SendChat(struct FString Nick, struct FString Content, EChatType ChatType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameChat", "SendChat");
    struct
    {
        struct FString Nick;
        struct FString Content;
        enum EChatType ChatType;
    } Parms{};
    Parms.Nick = (struct FString)Nick;
    Parms.Content = (struct FString)Content;
    Parms.ChatType = (enum EChatType)ChatType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameChat::OnMarkItem(struct FString ItemName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameChat", "OnMarkItem");
    struct
    {
        struct FString ItemName;
    } Parms{};
    Parms.ItemName = (struct FString)ItemName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameChat::MarkItem(struct UWorld* World)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameChat", "MarkItem");
    struct
    {
        struct UWorld* World;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameChat::MarkCoord(struct UWorld* World)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameChat", "MarkCoord");
    struct
    {
        struct UWorld* World;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    this->ProcessEvent(Func, &Parms);
}

struct UDFMGameChat* UDFMGameChat::Get(struct UWorld* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameChat", "Get");
    struct
    {
        struct UWorld* WorldContextObject;
        struct UDFMGameChat* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UWorld*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMGameChat::ClientOnAISendChatPreset(uint64_t AiUin, struct FString AINick, struct FName PresetId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameChat", "ClientOnAISendChatPreset");
    struct
    {
        uint64_t AiUin;
        struct FString AINick;
        struct FName PresetId;
    } Parms{};
    Parms.AiUin = (uint64_t)AiUin;
    Parms.AINick = (struct FString)AINick;
    Parms.PresetId = (struct FName)PresetId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameChat::ClientOnAISendChat(uint64_t AiUin, struct FString AINick, struct FString Content)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameChat", "ClientOnAISendChat");
    struct
    {
        uint64_t AiUin;
        struct FString AINick;
        struct FString Content;
    } Parms{};
    Parms.AiUin = (uint64_t)AiUin;
    Parms.AINick = (struct FString)AINick;
    Parms.Content = (struct FString)Content;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
