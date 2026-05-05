#include "GlobalMessageRuntime.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UMessageBPLibrary
uint8_t UMessageBPLibrary::UnlistenMessageByName(struct FName MessageId, struct UObject* Listener, struct UGMMessageManager* Mgr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MessageBPLibrary", "UnlistenMessageByName");
    struct
    {
        struct FName MessageId;
        struct UObject* Listener;
        struct UGMMessageManager* Mgr;
        uint8_t ReturnValue;
    } Parms{};
    Parms.MessageId = (struct FName)MessageId;
    Parms.Listener = (struct UObject*)Listener;
    Parms.Mgr = (struct UGMMessageManager*)Mgr;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMessageBPLibrary::SetWild(uint8_t PropertyEnum, const struct TArray<struct FMessageAny>& TargetArray, int32_t Index, const struct FMessageAny& InItem)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MessageBPLibrary", "SetWild");
    struct
    {
        uint8_t PropertyEnum;
        struct TArray<struct FMessageAny> TargetArray;
        int32_t Index;
        struct FMessageAny InItem;
    } Parms{};
    Parms.PropertyEnum = (uint8_t)PropertyEnum;
    Parms.TargetArray = (struct TArray<struct FMessageAny>)TargetArray;
    Parms.Index = (int32_t)Index;
    Parms.InItem = (struct FMessageAny)InItem;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMessageBPLibrary::SetValue(const struct TArray<struct FMessageAny>& TargetArray, int32_t Index, const struct FMessageAny& InItem)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MessageBPLibrary", "SetValue");
    struct
    {
        struct TArray<struct FMessageAny> TargetArray;
        int32_t Index;
        struct FMessageAny InItem;
    } Parms{};
    Parms.TargetArray = (struct TArray<struct FMessageAny>)TargetArray;
    Parms.Index = (int32_t)Index;
    Parms.InItem = (struct FMessageAny)InItem;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMessageBPLibrary::SetSet(uint8_t ElementEnum, const struct TArray<struct FMessageAny>& TargetArray, int32_t Index, struct TSet<int32_t>& InItem)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MessageBPLibrary", "SetSet");
    struct
    {
        uint8_t ElementEnum;
        struct TArray<struct FMessageAny> TargetArray;
        int32_t Index;
        struct TSet<int32_t> InItem;
    } Parms{};
    Parms.ElementEnum = (uint8_t)ElementEnum;
    Parms.TargetArray = (struct TArray<struct FMessageAny>)TargetArray;
    Parms.Index = (int32_t)Index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InItem = Parms.InItem;
}

void UMessageBPLibrary::SetMap(uint8_t KeyEnum, uint8_t ValueEnum, const struct TArray<struct FMessageAny>& TargetArray, int32_t Index, struct TMap<int32_t, int32_t>& InItem)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MessageBPLibrary", "SetMap");
    struct
    {
        uint8_t KeyEnum;
        uint8_t ValueEnum;
        struct TArray<struct FMessageAny> TargetArray;
        int32_t Index;
        struct TMap<int32_t, int32_t> InItem;
    } Parms{};
    Parms.KeyEnum = (uint8_t)KeyEnum;
    Parms.ValueEnum = (uint8_t)ValueEnum;
    Parms.TargetArray = (struct TArray<struct FMessageAny>)TargetArray;
    Parms.Index = (int32_t)Index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InItem = Parms.InItem;
}

void UMessageBPLibrary::SetArray(uint8_t ElementEnum, const struct TArray<struct FMessageAny>& TargetArray, int32_t Index, struct TArray<int32_t>& InItem)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MessageBPLibrary", "SetArray");
    struct
    {
        uint8_t ElementEnum;
        struct TArray<struct FMessageAny> TargetArray;
        int32_t Index;
        struct TArray<int32_t> InItem;
    } Parms{};
    Parms.ElementEnum = (uint8_t)ElementEnum;
    Parms.TargetArray = (struct TArray<struct FMessageAny>)TargetArray;
    Parms.Index = (int32_t)Index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InItem = Parms.InItem;
}

void UMessageBPLibrary::NotifyMessageByName(struct FName MessageId, struct UObject* Sender, const struct TArray<struct FMessageAny>& Params, uint8_t Type, struct UGMMessageManager* Mgr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MessageBPLibrary", "NotifyMessageByName");
    struct
    {
        struct FName MessageId;
        struct UObject* Sender;
        struct TArray<struct FMessageAny> Params;
        uint8_t Type;
        struct UGMMessageManager* Mgr;
    } Parms{};
    Parms.MessageId = (struct FName)MessageId;
    Parms.Sender = (struct UObject*)Sender;
    Parms.Params = (struct TArray<struct FMessageAny>)Params;
    Parms.Type = (uint8_t)Type;
    Parms.Mgr = (struct UGMMessageManager*)Mgr;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FMessageAny UMessageBPLibrary::MakeFromWild(uint8_t PropertyEnum, const struct FMessageAny& InAny)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MessageBPLibrary", "MakeFromWild");
    struct
    {
        uint8_t PropertyEnum;
        struct FMessageAny InAny;
        struct FMessageAny ReturnValue;
    } Parms{};
    Parms.PropertyEnum = (uint8_t)PropertyEnum;
    Parms.InAny = (struct FMessageAny)InAny;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMessageAny UMessageBPLibrary::MakeFromSet(uint8_t ElementEnum, const struct TSet<int32_t>& InAny)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MessageBPLibrary", "MakeFromSet");
    struct
    {
        uint8_t ElementEnum;
        struct TSet<int32_t> InAny;
        struct FMessageAny ReturnValue;
    } Parms{};
    Parms.ElementEnum = (uint8_t)ElementEnum;
    Parms.InAny = (struct TSet<int32_t>)InAny;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMessageAny UMessageBPLibrary::MakeFromMap(uint8_t ValueEnum, uint8_t KeyEnum, const struct TMap<int32_t, int32_t>& InAny)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MessageBPLibrary", "MakeFromMap");
    struct
    {
        uint8_t ValueEnum;
        uint8_t KeyEnum;
        struct TMap<int32_t, int32_t> InAny;
        struct FMessageAny ReturnValue;
    } Parms{};
    Parms.ValueEnum = (uint8_t)ValueEnum;
    Parms.KeyEnum = (uint8_t)KeyEnum;
    Parms.InAny = (struct TMap<int32_t, int32_t>)InAny;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMessageAny UMessageBPLibrary::MakeFromArray(uint8_t ElementEnum, const struct TArray<int32_t>& InAny)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MessageBPLibrary", "MakeFromArray");
    struct
    {
        uint8_t ElementEnum;
        struct TArray<int32_t> InAny;
        struct FMessageAny ReturnValue;
    } Parms{};
    Parms.ElementEnum = (uint8_t)ElementEnum;
    Parms.InAny = (struct TArray<int32_t>)InAny;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMessageAny UMessageBPLibrary::ListenMessageViaNameValidate(struct UObject* WorldContextObj, struct FName MessageKey, const struct TArray<struct FName>& ArgNames, struct FName EventName, int32_t Times, uint8_t bFront, uint8_t Type, struct UGMMessageManager* Mgr, struct UObject* WatchedObj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MessageBPLibrary", "ListenMessageViaNameValidate");
    struct
    {
        struct UObject* WorldContextObj;
        struct FName MessageKey;
        struct TArray<struct FName> ArgNames;
        struct FName EventName;
        int32_t Times;
        uint8_t bFront;
        uint8_t Type;
        struct UGMMessageManager* Mgr;
        struct UObject* WatchedObj;
        struct FMessageAny ReturnValue;
    } Parms{};
    Parms.WorldContextObj = (struct UObject*)WorldContextObj;
    Parms.MessageKey = (struct FName)MessageKey;
    Parms.ArgNames = (struct TArray<struct FName>)ArgNames;
    Parms.EventName = (struct FName)EventName;
    Parms.Times = (int32_t)Times;
    Parms.bFront = (uint8_t)bFront;
    Parms.Type = (uint8_t)Type;
    Parms.Mgr = (struct UGMMessageManager*)Mgr;
    Parms.WatchedObj = (struct UObject*)WatchedObj;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMessageAny UMessageBPLibrary::ListenMessageViaName(struct UObject* Listener, struct FName MessageKey, struct FName EventName, int32_t Times, uint8_t bFront, uint8_t Type, struct UGMMessageManager* Mgr, struct UObject* WatchedObj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MessageBPLibrary", "ListenMessageViaName");
    struct
    {
        struct UObject* Listener;
        struct FName MessageKey;
        struct FName EventName;
        int32_t Times;
        uint8_t bFront;
        uint8_t Type;
        struct UGMMessageManager* Mgr;
        struct UObject* WatchedObj;
        struct FMessageAny ReturnValue;
    } Parms{};
    Parms.Listener = (struct UObject*)Listener;
    Parms.MessageKey = (struct FName)MessageKey;
    Parms.EventName = (struct FName)EventName;
    Parms.Times = (int32_t)Times;
    Parms.bFront = (uint8_t)bFront;
    Parms.Type = (uint8_t)Type;
    Parms.Mgr = (struct UGMMessageManager*)Mgr;
    Parms.WatchedObj = (struct UObject*)WatchedObj;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMessageAny UMessageBPLibrary::ListenMessageByNameValidate(struct FName MessageId, const struct TArray<struct FName>& ArgNames, const struct FDelegate& Delegate, int32_t Times, uint8_t bFront, uint8_t Type, struct UGMMessageManager* Mgr, struct UObject* WatchedObj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MessageBPLibrary", "ListenMessageByNameValidate");
    struct
    {
        struct FName MessageId;
        struct TArray<struct FName> ArgNames;
        struct FDelegate Delegate;
        int32_t Times;
        uint8_t bFront;
        uint8_t Type;
        struct UGMMessageManager* Mgr;
        struct UObject* WatchedObj;
        struct FMessageAny ReturnValue;
    } Parms{};
    Parms.MessageId = (struct FName)MessageId;
    Parms.ArgNames = (struct TArray<struct FName>)ArgNames;
    Parms.Delegate = (struct FDelegate)Delegate;
    Parms.Times = (int32_t)Times;
    Parms.bFront = (uint8_t)bFront;
    Parms.Type = (uint8_t)Type;
    Parms.Mgr = (struct UGMMessageManager*)Mgr;
    Parms.WatchedObj = (struct UObject*)WatchedObj;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMessageAny UMessageBPLibrary::ListenMessageByName(struct FName MessageId, const struct FDelegate& Delegate, int32_t Times, uint8_t bFront, uint8_t Type, struct UGMMessageManager* Mgr, struct UObject* WatchedObj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MessageBPLibrary", "ListenMessageByName");
    struct
    {
        struct FName MessageId;
        struct FDelegate Delegate;
        int32_t Times;
        uint8_t bFront;
        uint8_t Type;
        struct UGMMessageManager* Mgr;
        struct UObject* WatchedObj;
        struct FMessageAny ReturnValue;
    } Parms{};
    Parms.MessageId = (struct FName)MessageId;
    Parms.Delegate = (struct FDelegate)Delegate;
    Parms.Times = (int32_t)Times;
    Parms.bFront = (uint8_t)bFront;
    Parms.Type = (uint8_t)Type;
    Parms.Mgr = (struct UGMMessageManager*)Mgr;
    Parms.WatchedObj = (struct UObject*)WatchedObj;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMessageBPLibrary::GetWild(uint8_t PropertyEnum, const struct TArray<struct FMessageAny>& TargetArray, int32_t Index, struct FMessageAny& OutItem)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MessageBPLibrary", "GetWild");
    struct
    {
        uint8_t PropertyEnum;
        struct TArray<struct FMessageAny> TargetArray;
        int32_t Index;
        struct FMessageAny OutItem;
    } Parms{};
    Parms.PropertyEnum = (uint8_t)PropertyEnum;
    Parms.TargetArray = (struct TArray<struct FMessageAny>)TargetArray;
    Parms.Index = (int32_t)Index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutItem = Parms.OutItem;
}

void UMessageBPLibrary::GetSet(uint8_t ElementEnum, const struct TArray<struct FMessageAny>& TargetArray, int32_t Index, struct TSet<int32_t>& OutItem)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MessageBPLibrary", "GetSet");
    struct
    {
        uint8_t ElementEnum;
        struct TArray<struct FMessageAny> TargetArray;
        int32_t Index;
        struct TSet<int32_t> OutItem;
    } Parms{};
    Parms.ElementEnum = (uint8_t)ElementEnum;
    Parms.TargetArray = (struct TArray<struct FMessageAny>)TargetArray;
    Parms.Index = (int32_t)Index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutItem = Parms.OutItem;
}

void UMessageBPLibrary::GetMap(uint8_t KeyEnum, uint8_t ValueEnum, const struct TArray<struct FMessageAny>& TargetArray, int32_t Index, struct TMap<int32_t, int32_t>& OutItem)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MessageBPLibrary", "GetMap");
    struct
    {
        uint8_t KeyEnum;
        uint8_t ValueEnum;
        struct TArray<struct FMessageAny> TargetArray;
        int32_t Index;
        struct TMap<int32_t, int32_t> OutItem;
    } Parms{};
    Parms.KeyEnum = (uint8_t)KeyEnum;
    Parms.ValueEnum = (uint8_t)ValueEnum;
    Parms.TargetArray = (struct TArray<struct FMessageAny>)TargetArray;
    Parms.Index = (int32_t)Index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutItem = Parms.OutItem;
}

void UMessageBPLibrary::GetArray(uint8_t ElementEnum, const struct TArray<struct FMessageAny>& TargetArray, int32_t Index, struct TArray<int32_t>& OutItem)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MessageBPLibrary", "GetArray");
    struct
    {
        uint8_t ElementEnum;
        struct TArray<struct FMessageAny> TargetArray;
        int32_t Index;
        struct TArray<int32_t> OutItem;
    } Parms{};
    Parms.ElementEnum = (uint8_t)ElementEnum;
    Parms.TargetArray = (struct TArray<struct FMessageAny>)TargetArray;
    Parms.Index = (int32_t)Index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutItem = Parms.OutItem;
}

void UMessageBPLibrary::AnyToWild(const struct FMessageAny& InAny, struct FMessageAny& OutItem, uint8_t PropertyEnum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MessageBPLibrary", "AnyToWild");
    struct
    {
        struct FMessageAny InAny;
        struct FMessageAny OutItem;
        uint8_t PropertyEnum;
    } Parms{};
    Parms.InAny = (struct FMessageAny)InAny;
    Parms.PropertyEnum = (uint8_t)PropertyEnum;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutItem = Parms.OutItem;
}

// UPropertiesContainer
struct UObject* UPropertiesContainer::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PropertiesContainer", "Get");
    struct
    {
        struct UObject* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// URpcProxyComponent
void URpcProxyComponent::Unreliable_Notify(struct UObject* InObject, struct FName MessageName, struct TArray<uint8_t> Buffer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RpcProxyComponent", "Unreliable_Notify");
    struct
    {
        struct UObject* InObject;
        struct FName MessageName;
        struct TArray<uint8_t> Buffer;
    } Parms{};
    Parms.InObject = (struct UObject*)InObject;
    Parms.MessageName = (struct FName)MessageName;
    Parms.Buffer = (struct TArray<uint8_t>)Buffer;
    this->ProcessEvent(Func, &Parms);
}

void URpcProxyComponent::RPC_Request(struct UObject* Object, struct FName FuncName, struct TArray<uint8_t> Buffer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RpcProxyComponent", "RPC_Request");
    struct
    {
        struct UObject* Object;
        struct FName FuncName;
        struct TArray<uint8_t> Buffer;
    } Parms{};
    Parms.Object = (struct UObject*)Object;
    Parms.FuncName = (struct FName)FuncName;
    Parms.Buffer = (struct TArray<uint8_t>)Buffer;
    this->ProcessEvent(Func, &Parms);
}

void URpcProxyComponent::RPC_Notify(struct UObject* Object, struct FName FuncName, struct TArray<uint8_t> Buffer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RpcProxyComponent", "RPC_Notify");
    struct
    {
        struct UObject* Object;
        struct FName FuncName;
        struct TArray<uint8_t> Buffer;
    } Parms{};
    Parms.Object = (struct UObject*)Object;
    Parms.FuncName = (struct FName)FuncName;
    Parms.Buffer = (struct TArray<uint8_t>)Buffer;
    this->ProcessEvent(Func, &Parms);
}

void URpcProxyComponent::Message_Request(struct UObject* InObject, struct FName MessageName, struct TArray<uint8_t> Buffer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RpcProxyComponent", "Message_Request");
    struct
    {
        struct UObject* InObject;
        struct FName MessageName;
        struct TArray<uint8_t> Buffer;
    } Parms{};
    Parms.InObject = (struct UObject*)InObject;
    Parms.MessageName = (struct FName)MessageName;
    Parms.Buffer = (struct TArray<uint8_t>)Buffer;
    this->ProcessEvent(Func, &Parms);
}

void URpcProxyComponent::Message_Notify(struct UObject* InObject, struct FName MessageName, struct TArray<uint8_t> Buffer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RpcProxyComponent", "Message_Notify");
    struct
    {
        struct UObject* InObject;
        struct FName MessageName;
        struct TArray<uint8_t> Buffer;
    } Parms{};
    Parms.InObject = (struct UObject*)InObject;
    Parms.MessageName = (struct FName)MessageName;
    Parms.Buffer = (struct TArray<uint8_t>)Buffer;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
