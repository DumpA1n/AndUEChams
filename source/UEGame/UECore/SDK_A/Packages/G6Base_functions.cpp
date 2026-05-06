#include "G6Base.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UDebugConsole
void UDebugConsole::UnregisterCustomConsoleCommandInfo(const struct TArray<struct FString>& InCustomCommandList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DebugConsole", "UnregisterCustomConsoleCommandInfo");
    struct
    {
        struct TArray<struct FString> InCustomCommandList;
    } Parms{};
    Parms.InCustomCommandList = (struct TArray<struct FString>)InCustomCommandList;
    this->ProcessEvent(Func, &Parms);
}

void UDebugConsole::SetNonFilterMessagesUIDRange(int32_t InStartId, int32_t InEndId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DebugConsole", "SetNonFilterMessagesUIDRange");
    struct
    {
        int32_t InStartId;
        int32_t InEndId;
    } Parms{};
    Parms.InStartId = (int32_t)InStartId;
    Parms.InEndId = (int32_t)InEndId;
    this->ProcessEvent(Func, &Parms);
}

void UDebugConsole::SetMaxMessagesCount(int32_t InMaxCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DebugConsole", "SetMaxMessagesCount");
    struct
    {
        int32_t InMaxCount;
    } Parms{};
    Parms.InMaxCount = (int32_t)InMaxCount;
    this->ProcessEvent(Func, &Parms);
}

void UDebugConsole::SetLogLevel(uint8_t LogLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DebugConsole", "SetLogLevel");
    struct
    {
        uint8_t LogLevel;
    } Parms{};
    Parms.LogLevel = (uint8_t)LogLevel;
    this->ProcessEvent(Func, &Parms);
}

void UDebugConsole::SetLogFilterText(const struct FText& InFilterText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DebugConsole", "SetLogFilterText");
    struct
    {
        struct FText InFilterText;
    } Parms{};
    Parms.InFilterText = (struct FText)InFilterText;
    this->ProcessEvent(Func, &Parms);
}

void UDebugConsole::SetLogDisplayCategory(const struct FName& CategoryName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DebugConsole", "SetLogDisplayCategory");
    struct
    {
        struct FName CategoryName;
    } Parms{};
    Parms.CategoryName = (struct FName)CategoryName;
    this->ProcessEvent(Func, &Parms);
}

void UDebugConsole::ResetMessageFilter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DebugConsole", "ResetMessageFilter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDebugConsole::RegisterCustomConsoleCommandInfo(const struct TArray<struct FString>& InCustomCommandList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DebugConsole", "RegisterCustomConsoleCommandInfo");
    struct
    {
        struct TArray<struct FString> InCustomCommandList;
    } Parms{};
    Parms.InCustomCommandList = (struct TArray<struct FString>)InCustomCommandList;
    this->ProcessEvent(Func, &Parms);
}

void UDebugConsole::OnNewMessageReceivedEvent__DelegateSignature(struct FString MessageMarkupText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DebugConsole", "OnNewMessageReceivedEvent__DelegateSignature");
    struct
    {
        struct FString MessageMarkupText;
    } Parms{};
    Parms.MessageMarkupText = (struct FString)MessageMarkupText;
    this->ProcessEvent(Func, &Parms);
}

void UDebugConsole::OnErrorMessageReceivedEvent__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DebugConsole", "OnErrorMessageReceivedEvent__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDebugConsole::OnCustomConsoleCommandCommittedEvent__DelegateSignature(struct FString CommandName, struct FString ExtraArgs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DebugConsole", "OnCustomConsoleCommandCommittedEvent__DelegateSignature");
    struct
    {
        struct FString CommandName;
        struct FString ExtraArgs;
    } Parms{};
    Parms.CommandName = (struct FString)CommandName;
    Parms.ExtraArgs = (struct FString)ExtraArgs;
    this->ProcessEvent(Func, &Parms);
}

bool UDebugConsole::IsMessageFiltered(int32_t InMessageIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DebugConsole", "IsMessageFiltered");
    struct
    {
        int32_t InMessageIndex;
        bool ReturnValue;
    } Parms{};
    Parms.InMessageIndex = (int32_t)InMessageIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDebugConsole::GetMessageUID(int32_t InMessageIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DebugConsole", "GetMessageUID");
    struct
    {
        int32_t InMessageIndex;
        int32_t ReturnValue;
    } Parms{};
    Parms.InMessageIndex = (int32_t)InMessageIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDebugConsole::GetMessageText(int32_t InMessageIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DebugConsole", "GetMessageText");
    struct
    {
        int32_t InMessageIndex;
        struct FString ReturnValue;
    } Parms{};
    Parms.InMessageIndex = (int32_t)InMessageIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDebugConsole::GetCurrentMessagesCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DebugConsole", "GetCurrentMessagesCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDebugConsole::GetConsoleInputHistory(struct TArray<struct FString>& OutHistoryInputList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DebugConsole", "GetConsoleInputHistory");
    struct
    {
        struct TArray<struct FString> OutHistoryInputList;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutHistoryInputList = Parms.OutHistoryInputList;
}

void UDebugConsole::GetCommandAutoCompleteSuggestions(const struct FText& InInputText, struct TArray<struct FString>& OutAutoCompleteList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DebugConsole", "GetCommandAutoCompleteSuggestions");
    struct
    {
        struct FText InInputText;
        struct TArray<struct FString> OutAutoCompleteList;
    } Parms{};
    Parms.InInputText = (struct FText)InInputText;
    this->ProcessEvent(Func, &Parms);
    OutAutoCompleteList = Parms.OutAutoCompleteList;
}

struct TArray<struct FName> UDebugConsole::GetAvailableLogCategories()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DebugConsole", "GetAvailableLogCategories");
    struct
    {
        struct TArray<struct FName> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDebugConsole::CommitConsoleCommand(const struct FText& InText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DebugConsole", "CommitConsoleCommand");
    struct
    {
        struct FText InText;
    } Parms{};
    Parms.InText = (struct FText)InText;
    this->ProcessEvent(Func, &Parms);
}

void UDebugConsole::ClearAllDisplayText()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DebugConsole", "ClearAllDisplayText");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UG6CustomScriptStatProfiler
void UG6CustomScriptStatProfiler::UpdateStatProfilerData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("G6CustomScriptStatProfiler", "UpdateStatProfilerData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UG6CustomScriptStatProfiler::StartScopeByIndex(int32_t InStatIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("G6CustomScriptStatProfiler", "StartScopeByIndex");
    struct
    {
        int32_t InStatIndex;
    } Parms{};
    Parms.InStatIndex = (int32_t)InStatIndex;
    this->ProcessEvent(Func, &Parms);
}

int32_t UG6CustomScriptStatProfiler::StartScope(struct FString InStatName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("G6CustomScriptStatProfiler", "StartScope");
    struct
    {
        struct FString InStatName;
        int32_t ReturnValue;
    } Parms{};
    Parms.InStatName = (struct FString)InStatName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UG6CustomScriptStatProfiler::IsStatProfileEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("G6CustomScriptStatProfiler", "IsStatProfileEnabled");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UG6CustomScriptStatProfiler::GetStatItemUniqueFullName(int32_t InStatItemIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("G6CustomScriptStatProfiler", "GetStatItemUniqueFullName");
    struct
    {
        int32_t InStatItemIndex;
        struct FString ReturnValue;
    } Parms{};
    Parms.InStatItemIndex = (int32_t)InStatItemIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UG6CustomScriptStatProfiler::GetStatItemParentLevel(int32_t InStatItemIndex, struct TArray<int32_t>& OutParentLevelItems)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("G6CustomScriptStatProfiler", "GetStatItemParentLevel");
    struct
    {
        int32_t InStatItemIndex;
        struct TArray<int32_t> OutParentLevelItems;
    } Parms{};
    Parms.InStatItemIndex = (int32_t)InStatItemIndex;
    this->ProcessEvent(Func, &Parms);
    OutParentLevelItems = Parms.OutParentLevelItems;
}

int32_t UG6CustomScriptStatProfiler::GetStatItemParentIndex(int32_t InStatItemIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("G6CustomScriptStatProfiler", "GetStatItemParentIndex");
    struct
    {
        int32_t InStatItemIndex;
        int32_t ReturnValue;
    } Parms{};
    Parms.InStatItemIndex = (int32_t)InStatItemIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UG6CustomScriptStatProfiler::GetStatItemMaxChildCallDepth(int32_t InStatItemIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("G6CustomScriptStatProfiler", "GetStatItemMaxChildCallDepth");
    struct
    {
        int32_t InStatItemIndex;
        int32_t ReturnValue;
    } Parms{};
    Parms.InStatItemIndex = (int32_t)InStatItemIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UG6CustomScriptStatProfiler::GetStatItemDisplayName(int32_t InStatItemIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("G6CustomScriptStatProfiler", "GetStatItemDisplayName");
    struct
    {
        int32_t InStatItemIndex;
        struct FString ReturnValue;
    } Parms{};
    Parms.InStatItemIndex = (int32_t)InStatItemIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UG6CustomScriptStatProfiler::GetStatItemData(int32_t InStatItemIndex, struct TArray<float>& OutItemData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("G6CustomScriptStatProfiler", "GetStatItemData");
    struct
    {
        int32_t InStatItemIndex;
        struct TArray<float> OutItemData;
        struct FString ReturnValue;
    } Parms{};
    Parms.InStatItemIndex = (int32_t)InStatItemIndex;
    this->ProcessEvent(Func, &Parms);
    OutItemData = Parms.OutItemData;
    return Parms.ReturnValue;
}

void UG6CustomScriptStatProfiler::GetStatItemChildren(int32_t InStatItemIndex, struct TArray<int32_t>& OutChildItems, bool bScriptOnly)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("G6CustomScriptStatProfiler", "GetStatItemChildren");
    struct
    {
        int32_t InStatItemIndex;
        struct TArray<int32_t> OutChildItems;
        bool bScriptOnly;
    } Parms{};
    Parms.InStatItemIndex = (int32_t)InStatItemIndex;
    Parms.bScriptOnly = (bool)bScriptOnly;
    this->ProcessEvent(Func, &Parms);
    OutChildItems = Parms.OutChildItems;
}

int32_t UG6CustomScriptStatProfiler::GetStatItemCallDepth(int32_t InStatItemIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("G6CustomScriptStatProfiler", "GetStatItemCallDepth");
    struct
    {
        int32_t InStatItemIndex;
        int32_t ReturnValue;
    } Parms{};
    Parms.InStatItemIndex = (int32_t)InStatItemIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UG6CustomScriptStatProfiler::GetItemIndexByNameAndDepth(struct FString InName, int32_t InCallDepth, struct FString InFullUniqueName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("G6CustomScriptStatProfiler", "GetItemIndexByNameAndDepth");
    struct
    {
        struct FString InName;
        int32_t InCallDepth;
        struct FString InFullUniqueName;
        int32_t ReturnValue;
    } Parms{};
    Parms.InName = (struct FString)InName;
    Parms.InCallDepth = (int32_t)InCallDepth;
    Parms.InFullUniqueName = (struct FString)InFullUniqueName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UG6CustomScriptStatProfiler::EndScope(struct FString InStatName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("G6CustomScriptStatProfiler", "EndScope");
    struct
    {
        struct FString InStatName;
    } Parms{};
    Parms.InStatName = (struct FString)InStatName;
    this->ProcessEvent(Func, &Parms);
}

int32_t UG6CustomScriptStatProfiler::CreateScriptStat(struct FString InStatName, struct FString InStatDesc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("G6CustomScriptStatProfiler", "CreateScriptStat");
    struct
    {
        struct FString InStatName;
        struct FString InStatDesc;
        int32_t ReturnValue;
    } Parms{};
    Parms.InStatName = (struct FString)InStatName;
    Parms.InStatDesc = (struct FString)InStatDesc;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UG6LogicStep
bool UG6LogicStep::Shutdown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("G6LogicStep", "Shutdown");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UG6LuaUEUtil
void UG6LuaUEUtil::TestEnsure()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("G6LuaUEUtil", "TestEnsure");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UG6LuaUEUtil::TestCrash()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("G6LuaUEUtil", "TestCrash");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UG6LuaUEUtil::ParseCommandLineString(struct FString StrKey, struct FString& OutValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("G6LuaUEUtil", "ParseCommandLineString");
    struct
    {
        struct FString StrKey;
        struct FString OutValue;
        bool ReturnValue;
    } Parms{};
    Parms.StrKey = (struct FString)StrKey;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutValue = Parms.OutValue;
    return Parms.ReturnValue;
}

bool UG6LuaUEUtil::ParseCommandLineInt(struct FString StrKey, int64_t& OutValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("G6LuaUEUtil", "ParseCommandLineInt");
    struct
    {
        struct FString StrKey;
        int64_t OutValue;
        bool ReturnValue;
    } Parms{};
    Parms.StrKey = (struct FString)StrKey;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutValue = Parms.OutValue;
    return Parms.ReturnValue;
}

bool UG6LuaUEUtil::ParseCommandLineFloat(struct FString StrKey, float& OutValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("G6LuaUEUtil", "ParseCommandLineFloat");
    struct
    {
        struct FString StrKey;
        float OutValue;
        bool ReturnValue;
    } Parms{};
    Parms.StrKey = (struct FString)StrKey;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutValue = Parms.OutValue;
    return Parms.ReturnValue;
}

bool UG6LuaUEUtil::ParseCommandLineBool(struct FString StrKey, bool& OutValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("G6LuaUEUtil", "ParseCommandLineBool");
    struct
    {
        struct FString StrKey;
        bool OutValue;
        bool ReturnValue;
    } Parms{};
    Parms.StrKey = (struct FString)StrKey;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutValue = Parms.OutValue;
    return Parms.ReturnValue;
}

int64_t UG6LuaUEUtil::GetUnixTimeMillisecond()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("G6LuaUEUtil", "GetUnixTimeMillisecond");
    struct
    {
        int64_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UG6PlatformGameInstance
void UG6PlatformGameInstance::Lua(struct FString strLua)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("G6PlatformGameInstance", "Lua");
    struct
    {
        struct FString strLua;
    } Parms{};
    Parms.strLua = (struct FString)strLua;
    this->ProcessEvent(Func, &Parms);
}

void UG6PlatformGameInstance::DAWLua(struct FString strLua)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("G6PlatformGameInstance", "DAWLua");
    struct
    {
        struct FString strLua;
    } Parms{};
    Parms.strLua = (struct FString)strLua;
    this->ProcessEvent(Func, &Parms);
}

void UG6PlatformGameInstance::ConsoleCMD(struct FString& Cmd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("G6PlatformGameInstance", "ConsoleCMD");
    struct
    {
        struct FString Cmd;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Cmd = Parms.Cmd;
}

} // namespace SDK
