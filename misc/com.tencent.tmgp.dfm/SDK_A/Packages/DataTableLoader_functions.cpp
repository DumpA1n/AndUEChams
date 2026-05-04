#include "DataTableLoader.hpp"
#include "Engine.hpp"
#include "GPGameFlow.hpp"
#include "GameCore.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UDataTableHotfixer::* ----
void UDataTableHotfixer::WriteTable(struct FCSVZipTable& InParam)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableHotfixer", "WriteTable");
    struct
    {
        struct FCSVZipTable InParam;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    InParam = Parms.InParam;
}

void UDataTableHotfixer::Write(struct FCSVZipPkg& InParam)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableHotfixer", "Write");
    struct
    {
        struct FCSVZipPkg InParam;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    InParam = Parms.InParam;
}

void UDataTableHotfixer::RemoveHotfixCallback(int64_t Token)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableHotfixer", "RemoveHotfixCallback");
    struct
    {
        int64_t Token;
    } Parms{};
    Parms.Token = (int64_t)Token;
    this->ProcessEvent(Func, &Parms);
}

void UDataTableHotfixer::ProcessBegin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableHotfixer", "ProcessBegin");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDataTableHotfixer::OnFinishLoadDataTable(const struct FDataTableUseSceneValue& UseSceneValue, int32_t LoadedNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableHotfixer", "OnFinishLoadDataTable");
    struct
    {
        struct FDataTableUseSceneValue UseSceneValue;
        int32_t LoadedNum;
    } Parms{};
    Parms.UseSceneValue = (struct FDataTableUseSceneValue)UseSceneValue;
    Parms.LoadedNum = (int32_t)LoadedNum;
    this->ProcessEvent(Func, &Parms);
}

void UDataTableHotfixer::OnBeginLoadDataTable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableHotfixer", "OnBeginLoadDataTable");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDataTableHotfixer::ManualClear()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DataTableHotfixer", "ManualClear");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UDataTableHotfixer::IsOverrided()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableHotfixer", "IsOverrided");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDataTableHotfixer::IsEnableDebug()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableHotfixer", "IsEnableDebug");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDataTableHotfixer::IsEnable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableHotfixer", "IsEnable");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UDataTableHotfixer::GetHotfixedPropertyKeysFromTableName(const struct FName& DataTableKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableHotfixer", "GetHotfixedPropertyKeysFromTableName");
    struct
    {
        struct FName DataTableKey;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.DataTableKey = (struct FName)DataTableKey;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDataTableHotfixer::GetHotfixedMD5FromTableName(const struct FName& DataTableKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableHotfixer", "GetHotfixedMD5FromTableName");
    struct
    {
        struct FName DataTableKey;
        struct FString ReturnValue;
    } Parms{};
    Parms.DataTableKey = (struct FName)DataTableKey;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDataTableHotfixer::GetHotfixedKeysFromTableName(const struct FName& DataTableKey, struct TArray<struct FString>& Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableHotfixer", "GetHotfixedKeysFromTableName");
    struct
    {
        struct FName DataTableKey;
        struct TArray<struct FString> Result;
    } Parms{};
    Parms.DataTableKey = (struct FName)DataTableKey;
    this->ProcessEvent(Func, &Parms);
    Result = Parms.Result;
}

struct TArray<struct FName> UDataTableHotfixer::GetHotFixedDataTableNames()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableHotfixer", "GetHotFixedDataTableNames");
    struct
    {
        struct TArray<struct FName> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FDataTableHotfixedData UDataTableHotfixer::GetHotfixedDataFromTableName(const struct FName& DataTableKey, uint8_t bContainedKeys)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableHotfixer", "GetHotfixedDataFromTableName");
    struct
    {
        struct FName DataTableKey;
        uint8_t bContainedKeys;
        struct FDataTableHotfixedData ReturnValue;
    } Parms{};
    Parms.DataTableKey = (struct FName)DataTableKey;
    Parms.bContainedKeys = (uint8_t)bContainedKeys;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDataTableHotfixer* UDataTableHotfixer::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DataTableHotfixer", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UDataTableHotfixer* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDataTableHotfixer::EndWriteTable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableHotfixer", "EndWriteTable");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDataTableHotfixer::Dump()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DataTableHotfixer", "Dump");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDataTableHotfixer::DebugWrite(uint64_t InToken, struct FString InName, struct FString InHash, struct FString InHeader, struct FString InKeys, struct FString InValues)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableHotfixer", "DebugWrite");
    struct
    {
        uint64_t InToken;
        struct FString InName;
        struct FString InHash;
        struct FString InHeader;
        struct FString InKeys;
        struct FString InValues;
    } Parms{};
    Parms.InToken = (uint64_t)InToken;
    Parms.InName = (struct FString)InName;
    Parms.InHash = (struct FString)InHash;
    Parms.InHeader = (struct FString)InHeader;
    Parms.InKeys = (struct FString)InKeys;
    Parms.InValues = (struct FString)InValues;
    this->ProcessEvent(Func, &Parms);
}

void UDataTableHotfixer::Debug4Write(const struct TArray<struct FString>& Args, struct UWorld* World)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DataTableHotfixer", "Debug4Write");
    struct
    {
        struct TArray<struct FString> Args;
        struct UWorld* World;
    } Parms{};
    Parms.Args = (struct TArray<struct FString>)Args;
    Parms.World = (struct UWorld*)World;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct TArray<struct FDataTableHotfixC2SParam> UDataTableHotfixer::CollectC2SParam(uint64_t InToken)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableHotfixer", "CollectC2SParam");
    struct
    {
        uint64_t InToken;
        struct TArray<struct FDataTableHotfixC2SParam> ReturnValue;
    } Parms{};
    Parms.InToken = (uint64_t)InToken;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDataTableHotfixer::BeginWriteTable(uint64_t Toekn, uint64_t Total, uint64_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableHotfixer", "BeginWriteTable");
    struct
    {
        uint64_t Toekn;
        uint64_t Total;
        uint64_t Index;
    } Parms{};
    Parms.Toekn = (uint64_t)Toekn;
    Parms.Total = (uint64_t)Total;
    Parms.Index = (uint64_t)Index;
    this->ProcessEvent(Func, &Parms);
}

int64_t UDataTableHotfixer::AddHotfixCallback(const struct FName& DataTableKey, struct FDelegate callback)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableHotfixer", "AddHotfixCallback");
    struct
    {
        struct FName DataTableKey;
        struct FDelegate callback;
        int64_t ReturnValue;
    } Parms{};
    Parms.DataTableKey = (struct FName)DataTableKey;
    Parms.callback = (struct FDelegate)callback;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDataTableLoader::* ----
void UDataTableLoader::SetRunMainGameFlow(uint8_t inbRunMainGameFlow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableLoader", "SetRunMainGameFlow");
    struct
    {
        uint8_t inbRunMainGameFlow;
    } Parms{};
    Parms.inbRunMainGameFlow = (uint8_t)inbRunMainGameFlow;
    this->ProcessEvent(Func, &Parms);
}

void UDataTableLoader::SetClientGameScene(EDataTableLoaderGameScene inClientGameMode, struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DataTableLoader", "SetClientGameScene");
    struct
    {
        enum EDataTableLoaderGameScene inClientGameMode;
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.inClientGameMode = (enum EDataTableLoaderGameScene)inClientGameMode;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDataTableLoader::ReportsDataTableLoadingInfo(struct FString ReportsKey, struct FString ReportsInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableLoader", "ReportsDataTableLoadingInfo");
    struct
    {
        struct FString ReportsKey;
        struct FString ReportsInfo;
    } Parms{};
    Parms.ReportsKey = (struct FString)ReportsKey;
    Parms.ReportsInfo = (struct FString)ReportsInfo;
    this->ProcessEvent(Func, &Parms);
}

void UDataTableLoader::OnProcessPreEnterGameFlowStage(EGameFlowStageType GameFlowStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableLoader", "OnProcessPreEnterGameFlowStage");
    struct
    {
        enum EGameFlowStageType GameFlowStage;
    } Parms{};
    Parms.GameFlowStage = (enum EGameFlowStageType)GameFlowStage;
    this->ProcessEvent(Func, &Parms);
}

void UDataTableLoader::OnProcessPostLeaveGameFlowStage(EGameFlowStageType GameFlowStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableLoader", "OnProcessPostLeaveGameFlowStage");
    struct
    {
        enum EGameFlowStageType GameFlowStage;
    } Parms{};
    Parms.GameFlowStage = (enum EGameFlowStageType)GameFlowStage;
    this->ProcessEvent(Func, &Parms);
}

void UDataTableLoader::OnProcessDataTableManagerLiteInitResourcesCallBack()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableLoader", "OnProcessDataTableManagerLiteInitResourcesCallBack");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UDataTableLoader* UDataTableLoader::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DataTableLoader", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UDataTableLoader* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
