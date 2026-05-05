#include "MetaStatistics.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UMTStatisticsMonitor
void UMTStatisticsMonitor::ResetData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTStatisticsMonitor", "ResetData");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMTStatisticsMonitor::NewFrameReset(uint64_t FrameNumber)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTStatisticsMonitor", "NewFrameReset");
    struct
    {
        uint64_t FrameNumber;
    } Parms{};
    Parms.FrameNumber = (uint64_t)FrameNumber;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UMTStatisticsMonitor* UMTStatisticsMonitor::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTStatisticsMonitor", "Get");
    struct
    {
        struct UMTStatisticsMonitor* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMTStatisticsHelper
uint8_t UMTStatisticsHelper::SetInTimeMonitorEnabled(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTStatisticsHelper", "SetInTimeMonitorEnabled");
    struct
    {
        uint8_t bEnable;
        uint8_t ReturnValue;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMTStatisticsHelper::SetEnabledStat(uint8_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTStatisticsHelper", "SetEnabledStat");
    struct
    {
        uint8_t Value;
    } Parms{};
    Parms.Value = (uint8_t)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMTStatisticsHelper::PrintDorianFuncCallStat(struct FString InDorianFuncName, uint8_t bShowDetail)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTStatisticsHelper", "PrintDorianFuncCallStat");
    struct
    {
        struct FString InDorianFuncName;
        uint8_t bShowDetail;
    } Parms{};
    Parms.InDorianFuncName = (struct FString)InDorianFuncName;
    Parms.bShowDetail = (uint8_t)bShowDetail;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMTStatisticsHelper::PrintCallRecordStat(struct FString InCallName, uint8_t bShowDetail)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTStatisticsHelper", "PrintCallRecordStat");
    struct
    {
        struct FString InCallName;
        uint8_t bShowDetail;
    } Parms{};
    Parms.InCallName = (struct FString)InCallName;
    Parms.bShowDetail = (uint8_t)bShowDetail;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMTStatisticsHelper::PrintAllDorianFuncCallStat(uint8_t bShowDetail)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTStatisticsHelper", "PrintAllDorianFuncCallStat");
    struct
    {
        uint8_t bShowDetail;
    } Parms{};
    Parms.bShowDetail = (uint8_t)bShowDetail;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMTStatisticsHelper::PrintAllCallRecordStatByCall(uint8_t bShowDetail)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTStatisticsHelper", "PrintAllCallRecordStatByCall");
    struct
    {
        uint8_t bShowDetail;
    } Parms{};
    Parms.bShowDetail = (uint8_t)bShowDetail;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMTStatisticsHelper::PrintAllCallRecord(uint8_t bShowDetail)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTStatisticsHelper", "PrintAllCallRecord");
    struct
    {
        uint8_t bShowDetail;
    } Parms{};
    Parms.bShowDetail = (uint8_t)bShowDetail;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UMTStatisticsHelper::IsEnabledStat()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTStatisticsHelper", "IsEnabledStat");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMTCallRecord UMTStatisticsHelper::GetSingleCallRecord(struct FString InCallName, const uint64_t& InID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTStatisticsHelper", "GetSingleCallRecord");
    struct
    {
        struct FString InCallName;
        uint64_t InID;
        struct FMTCallRecord ReturnValue;
    } Parms{};
    Parms.InCallName = (struct FString)InCallName;
    Parms.InID = (uint64_t)InID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMTDorianTrace UMTStatisticsHelper::GetDorianTrace(struct FString InDorianName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTStatisticsHelper", "GetDorianTrace");
    struct
    {
        struct FString InDorianName;
        struct FMTDorianTrace ReturnValue;
    } Parms{};
    Parms.InDorianName = (struct FString)InDorianName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTStatisticsHelper::GetDorianFunctionBindingInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTStatisticsHelper", "GetDorianFunctionBindingInfo");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTStatisticsHelper::GetDorianFuncCallStatStr(struct FString InDorianFuncName, uint8_t bShowDetail)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTStatisticsHelper", "GetDorianFuncCallStatStr");
    struct
    {
        struct FString InDorianFuncName;
        uint8_t bShowDetail;
        struct FString ReturnValue;
    } Parms{};
    Parms.InDorianFuncName = (struct FString)InDorianFuncName;
    Parms.bShowDetail = (uint8_t)bShowDetail;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FMTCallRecord> UMTStatisticsHelper::GetDorianCallRecords(struct FString InDorianFuncName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTStatisticsHelper", "GetDorianCallRecords");
    struct
    {
        struct FString InDorianFuncName;
        struct TArray<struct FMTCallRecord> ReturnValue;
    } Parms{};
    Parms.InDorianFuncName = (struct FString)InDorianFuncName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UMTStatisticsHelper::GetDorianCallCount(struct FString InDorianName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTStatisticsHelper", "GetDorianCallCount");
    struct
    {
        struct FString InDorianName;
        uint64_t ReturnValue;
    } Parms{};
    Parms.InDorianName = (struct FString)InDorianName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTStatisticsHelper::GetDorianAvgDurationMS(struct FString InDorianName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTStatisticsHelper", "GetDorianAvgDurationMS");
    struct
    {
        struct FString InDorianName;
        double ReturnValue;
    } Parms{};
    Parms.InDorianName = (struct FString)InDorianName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMTCallTrace UMTStatisticsHelper::GetCallTrace(struct FString InCallName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTStatisticsHelper", "GetCallTrace");
    struct
    {
        struct FString InCallName;
        struct FMTCallTrace ReturnValue;
    } Parms{};
    Parms.InCallName = (struct FString)InCallName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTStatisticsHelper::GetCallRecordStr(const struct FMTCallRecord& Record, uint8_t bShowDetail)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTStatisticsHelper", "GetCallRecordStr");
    struct
    {
        struct FMTCallRecord Record;
        uint8_t bShowDetail;
        struct FString ReturnValue;
    } Parms{};
    Parms.Record = (struct FMTCallRecord)Record;
    Parms.bShowDetail = (uint8_t)bShowDetail;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTStatisticsHelper::GetCallRecordStatStr(struct FString InCallName, uint8_t bShowDetail)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTStatisticsHelper", "GetCallRecordStatStr");
    struct
    {
        struct FString InCallName;
        uint8_t bShowDetail;
        struct FString ReturnValue;
    } Parms{};
    Parms.InCallName = (struct FString)InCallName;
    Parms.bShowDetail = (uint8_t)bShowDetail;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FMTCallRecord> UMTStatisticsHelper::GetCallRecords(struct FString InCallName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTStatisticsHelper", "GetCallRecords");
    struct
    {
        struct FString InCallName;
        struct TArray<struct FMTCallRecord> ReturnValue;
    } Parms{};
    Parms.InCallName = (struct FString)InCallName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UMTStatisticsHelper::GetCallCount(struct FString InCallName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTStatisticsHelper", "GetCallCount");
    struct
    {
        struct FString InCallName;
        uint64_t ReturnValue;
    } Parms{};
    Parms.InCallName = (struct FString)InCallName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTStatisticsHelper::GetCallAvgDurationMS(struct FString InCallName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTStatisticsHelper", "GetCallAvgDurationMS");
    struct
    {
        struct FString InCallName;
        double ReturnValue;
    } Parms{};
    Parms.InCallName = (struct FString)InCallName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTStatisticsHelper::GetBoundDorianFuncV2(struct FString Token)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTStatisticsHelper", "GetBoundDorianFuncV2");
    struct
    {
        struct FString Token;
        struct FString ReturnValue;
    } Parms{};
    Parms.Token = (struct FString)Token;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTStatisticsHelper::GetBoundDorianFunc(struct FString ModuleName, struct FString FuncName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTStatisticsHelper", "GetBoundDorianFunc");
    struct
    {
        struct FString ModuleName;
        struct FString FuncName;
        struct FString ReturnValue;
    } Parms{};
    Parms.ModuleName = (struct FString)ModuleName;
    Parms.FuncName = (struct FString)FuncName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTStatisticsHelper::GetAvgDorianCallInterval(struct FString InDorianName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTStatisticsHelper", "GetAvgDorianCallInterval");
    struct
    {
        struct FString InDorianName;
        double ReturnValue;
    } Parms{};
    Parms.InDorianName = (struct FString)InDorianName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTStatisticsHelper::GetAvgCallInterval(struct FString InCallName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTStatisticsHelper", "GetAvgCallInterval");
    struct
    {
        struct FString InCallName;
        double ReturnValue;
    } Parms{};
    Parms.InCallName = (struct FString)InCallName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FMTCallRecord> UMTStatisticsHelper::GetAllCallRecords()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTStatisticsHelper", "GetAllCallRecords");
    struct
    {
        struct TArray<struct FMTCallRecord> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UMTStatisticsHelper::GetActivatedStubsInModule(struct FString ModuleName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTStatisticsHelper", "GetActivatedStubsInModule");
    struct
    {
        struct FString ModuleName;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.ModuleName = (struct FString)ModuleName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UMTStatisticsHelper::GetActivatedStubs()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTStatisticsHelper", "GetActivatedStubs");
    struct
    {
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UMTStatisticsHelper::GetActivatedModules()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTStatisticsHelper", "GetActivatedModules");
    struct
    {
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMTStatisticsHelper::CleanStatData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTStatisticsHelper", "CleanStatData");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMTStatisticsHelper::AnalyzeStatData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTStatisticsHelper", "AnalyzeStatData");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

} // namespace SDK
