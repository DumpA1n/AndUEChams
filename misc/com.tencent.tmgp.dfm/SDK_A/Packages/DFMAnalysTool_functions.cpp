#include "DFMAnalysTool.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UDFMAnalyseManager::* ----
void UDFMAnalyseManager::SaveData(struct FString InDataPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAnalyseManager", "SaveData");
    struct
    {
        struct FString InDataPath;
    } Parms{};
    Parms.InDataPath = (struct FString)InDataPath;
    this->ProcessEvent(Func, &Parms);
}

struct UDFMAnalyseManager* UDFMAnalyseManager::GetIns(struct UObject* Context)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMAnalyseManager", "GetIns");
    struct
    {
        struct UObject* Context;
        struct UDFMAnalyseManager* ReturnValue;
    } Parms{};
    Parms.Context = (struct UObject*)Context;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMAnalyseManager::AddMapData2Section(struct FString SectionName, struct FString InKey, const struct TMap<struct FString, struct FString>& InMap)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAnalyseManager", "AddMapData2Section");
    struct
    {
        struct FString SectionName;
        struct FString InKey;
        struct TMap<struct FString, struct FString> InMap;
    } Parms{};
    Parms.SectionName = (struct FString)SectionName;
    Parms.InKey = (struct FString)InKey;
    Parms.InMap = (struct TMap<struct FString, struct FString>)InMap;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAnalyseManager::AddEntryData_String(struct FString InKey, struct FString InData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAnalyseManager", "AddEntryData_String");
    struct
    {
        struct FString InKey;
        struct FString InData;
    } Parms{};
    Parms.InKey = (struct FString)InKey;
    Parms.InData = (struct FString)InData;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAnalyseManager::AddEntryData_Int(struct FString InKey, int32_t InData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAnalyseManager", "AddEntryData_Int");
    struct
    {
        struct FString InKey;
        int32_t InData;
    } Parms{};
    Parms.InKey = (struct FString)InKey;
    Parms.InData = (int32_t)InData;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAnalyseManager::AddEntryData_Float(struct FString InKey, float InData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAnalyseManager", "AddEntryData_Float");
    struct
    {
        struct FString InKey;
        float InData;
    } Parms{};
    Parms.InKey = (struct FString)InKey;
    Parms.InData = (float)InData;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAnalyseManager::AddEntryData_Double(struct FString InKey, double InData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAnalyseManager", "AddEntryData_Double");
    struct
    {
        struct FString InKey;
        double InData;
    } Parms{};
    Parms.InKey = (struct FString)InKey;
    Parms.InData = (double)InData;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAnalyseManager::AddData2Section(struct FString SectionName, struct FString InKey, struct FString InData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAnalyseManager", "AddData2Section");
    struct
    {
        struct FString SectionName;
        struct FString InKey;
        struct FString InData;
    } Parms{};
    Parms.SectionName = (struct FString)SectionName;
    Parms.InKey = (struct FString)InKey;
    Parms.InData = (struct FString)InData;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAnalyseManager::AddArrayData2Section(struct FString SectionName, struct FString InKey, const struct TArray<struct FString>& inArray)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAnalyseManager", "AddArrayData2Section");
    struct
    {
        struct FString SectionName;
        struct FString InKey;
        struct TArray<struct FString> inArray;
    } Parms{};
    Parms.SectionName = (struct FString)SectionName;
    Parms.InKey = (struct FString)InKey;
    Parms.inArray = (struct TArray<struct FString>)inArray;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAnalyseManager::AddArrayData(struct FString InKey, const struct TArray<struct FString>& inArray)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAnalyseManager", "AddArrayData");
    struct
    {
        struct FString InKey;
        struct TArray<struct FString> inArray;
    } Parms{};
    Parms.InKey = (struct FString)InKey;
    Parms.inArray = (struct TArray<struct FString>)inArray;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFUICostMonitor::* ----
void UDFUICostMonitor::SaveData(struct FString InFilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFUICostMonitor", "SaveData");
    struct
    {
        struct FString InFilePath;
    } Parms{};
    Parms.InFilePath = (struct FString)InFilePath;
    this->ProcessEvent(Func, &Parms);
}

void UDFUICostMonitor::HeavyTaskMonitorInShipping(struct FString TaskKey, struct FString TaskPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFUICostMonitor", "HeavyTaskMonitorInShipping");
    struct
    {
        struct FString TaskKey;
        struct FString TaskPath;
    } Parms{};
    Parms.TaskKey = (struct FString)TaskKey;
    Parms.TaskPath = (struct FString)TaskPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int64_t UDFUICostMonitor::GetCurTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFUICostMonitor", "GetCurTime");
    struct
    {
        int64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFUICostMonitor* UDFUICostMonitor::Get(struct UObject* WorldContextObj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFUICostMonitor", "Get");
    struct
    {
        struct UObject* WorldContextObj;
        struct UDFUICostMonitor* ReturnValue;
    } Parms{};
    Parms.WorldContextObj = (struct UObject*)WorldContextObj;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFUICostMonitor::DataTimerStart(struct FString SectionName, struct FString InKey, EUICostType CostType, float EmitThreshold)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFUICostMonitor", "DataTimerStart");
    struct
    {
        struct FString SectionName;
        struct FString InKey;
        enum EUICostType CostType;
        float EmitThreshold;
    } Parms{};
    Parms.SectionName = (struct FString)SectionName;
    Parms.InKey = (struct FString)InKey;
    Parms.CostType = (enum EUICostType)CostType;
    Parms.EmitThreshold = (float)EmitThreshold;
    this->ProcessEvent(Func, &Parms);
}

void UDFUICostMonitor::DataTimerEndWithStartTime(int64_t StartTime, struct FString SectionName, struct FString InKey, EUICostType CostType, float EmitThreshold)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFUICostMonitor", "DataTimerEndWithStartTime");
    struct
    {
        int64_t StartTime;
        struct FString SectionName;
        struct FString InKey;
        enum EUICostType CostType;
        float EmitThreshold;
    } Parms{};
    Parms.StartTime = (int64_t)StartTime;
    Parms.SectionName = (struct FString)SectionName;
    Parms.InKey = (struct FString)InKey;
    Parms.CostType = (enum EUICostType)CostType;
    Parms.EmitThreshold = (float)EmitThreshold;
    this->ProcessEvent(Func, &Parms);
}

void UDFUICostMonitor::DataTimerEnd(struct FString SectionName, struct FString InKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFUICostMonitor", "DataTimerEnd");
    struct
    {
        struct FString SectionName;
        struct FString InKey;
    } Parms{};
    Parms.SectionName = (struct FString)SectionName;
    Parms.InKey = (struct FString)InKey;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
