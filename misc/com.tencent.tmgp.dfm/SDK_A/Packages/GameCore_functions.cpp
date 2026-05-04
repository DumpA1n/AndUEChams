#include "GameCore.hpp"
#include "Engine.hpp"
#include "PerfGear.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UAppSetting::* ----
void UAppSetting::ResetGameBuildPlatformName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AppSetting", "ResetGameBuildPlatformName");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UAppSetting::IsInUseR13NFile(const struct FSoftObjectPath& Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AppSetting", "IsInUseR13NFile");
    struct
    {
        struct FSoftObjectPath Path;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Path = (struct FSoftObjectPath)Path;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UAppSetting::GetGameBuildRegionName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AppSetting", "GetGameBuildRegionName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UAppSetting::GetGameBuildRegionFolderName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AppSetting", "GetGameBuildRegionFolderName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGameBuildRegion UAppSetting::GetGameBuildRegion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AppSetting", "GetGameBuildRegion");
    struct
    {
        enum EGameBuildRegion ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UAppSetting::GetGameBuildPlatformName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AppSetting", "GetGameBuildPlatformName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UAppSetting::GetCDNUrl()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AppSetting", "GetCDNUrl");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UAppSetting::GetBuildRegionFolders()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AppSetting", "GetBuildRegionFolders");
    struct
    {
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UAppSetting::GetBuildRegionFileFolders()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AppSetting", "GetBuildRegionFileFolders");
    struct
    {
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FAppSettingRow UAppSetting::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AppSetting", "Get");
    struct
    {
        struct FAppSettingRow ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDataTableSystemManagerBase::* ----
void UDataTableSystemManagerBase::Shutdown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemManagerBase", "Shutdown");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDataTableSystemManagerBase::Reset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemManagerBase", "Reset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDataTableSystemManagerBase::OnShutdown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemManagerBase", "OnShutdown");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDataTableSystemManagerBase::OnReset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemManagerBase", "OnReset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDataTableSystemManagerBase::OnInit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemManagerBase", "OnInit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDataTableSystemManagerBase::IsLoaded()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemManagerBase", "IsLoaded");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDataTableSystemManagerBase::Init()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemManagerBase", "Init");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDataTableSystemManagerBase::HotUpdateRows(struct UDataTable* TargetDataTable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemManagerBase", "HotUpdateRows");
    struct
    {
        struct UDataTable* TargetDataTable;
    } Parms{};
    Parms.TargetDataTable = (struct UDataTable*)TargetDataTable;
    this->ProcessEvent(Func, &Parms);
}

void UDataTableSystemManagerBase::HotRemoveRows(struct UDataTable* TargetDataTable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemManagerBase", "HotRemoveRows");
    struct
    {
        struct UDataTable* TargetDataTable;
    } Parms{};
    Parms.TargetDataTable = (struct UDataTable*)TargetDataTable;
    this->ProcessEvent(Func, &Parms);
}

void UDataTableSystemManagerBase::HotAddRows(struct UDataTable* TargetDataTable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemManagerBase", "HotAddRows");
    struct
    {
        struct UDataTable* TargetDataTable;
    } Parms{};
    Parms.TargetDataTable = (struct UDataTable*)TargetDataTable;
    this->ProcessEvent(Func, &Parms);
}

struct UScriptStruct* UDataTableSystemManagerBase::GetRowStruct()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemManagerBase", "GetRowStruct");
    struct
    {
        struct UScriptStruct* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FName> UDataTableSystemManagerBase::GetRowNames()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemManagerBase", "GetRowNames");
    struct
    {
        struct TArray<struct FName> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDataTable* UDataTableSystemManagerBase::GetDataTableFirst()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemManagerBase", "GetDataTableFirst");
    struct
    {
        struct UDataTable* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDataTable* UDataTableSystemManagerBase::GetDataTable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemManagerBase", "GetDataTable");
    struct
    {
        struct UDataTable* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDataTableSystemImpl::* ----
void UDataTableSystemImpl::RegisterDataTableManager()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemImpl", "RegisterDataTableManager");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDataTableSystemImpl::OnRegisterDataTableManager()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemImpl", "OnRegisterDataTableManager");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDataTableSystemImpl::OnPostRegisterDataTableManager()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemImpl", "OnPostRegisterDataTableManager");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDataTableSystemImpl::OnLiteDataTableReset(const struct FName& TableName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemImpl", "OnLiteDataTableReset");
    struct
    {
        struct FName TableName;
    } Parms{};
    Parms.TableName = (struct FName)TableName;
    this->ProcessEvent(Func, &Parms);
}

void UDataTableSystemImpl::OnLiteDataTableReload(const struct FName& TableName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemImpl", "OnLiteDataTableReload");
    struct
    {
        struct FName TableName;
    } Parms{};
    Parms.TableName = (struct FName)TableName;
    this->ProcessEvent(Func, &Parms);
}

void UDataTableSystemImpl::OnLiteDataTableReady(const struct FName& TableName, float Progress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemImpl", "OnLiteDataTableReady");
    struct
    {
        struct FName TableName;
        float Progress;
    } Parms{};
    Parms.TableName = (struct FName)TableName;
    Parms.Progress = (float)Progress;
    this->ProcessEvent(Func, &Parms);
}

void UDataTableSystemImpl::OnLiteDataTablePreLoadFinishPreHandle(const struct FDataTableUseSceneValue& UseSceneValue, int32_t LoadedNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemImpl", "OnLiteDataTablePreLoadFinishPreHandle");
    struct
    {
        struct FDataTableUseSceneValue UseSceneValue;
        int32_t LoadedNum;
    } Parms{};
    Parms.UseSceneValue = (struct FDataTableUseSceneValue)UseSceneValue;
    Parms.LoadedNum = (int32_t)LoadedNum;
    this->ProcessEvent(Func, &Parms);
}

void UDataTableSystemImpl::OnAllLiteDataTableReset(const struct FName& TableName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemImpl", "OnAllLiteDataTableReset");
    struct
    {
        struct FName TableName;
    } Parms{};
    Parms.TableName = (struct FName)TableName;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDataTableSystemImpl::IsUseLiteTableManager()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DataTableSystemImpl", "IsUseLiteTableManager");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TScriptInterface<IDataTableSystemManagerLiteInterface> UDataTableSystemImpl::GetManagerLiteInterfaceBP()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemImpl", "GetManagerLiteInterfaceBP");
    struct
    {
        struct TScriptInterface<IDataTableSystemManagerLiteInterface> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDataTableSystemImpl* UDataTableSystemImpl::Get(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DataTableSystemImpl", "Get");
    struct
    {
        struct UObject* WorldContext;
        struct UDataTableSystemImpl* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDataTableSystemImpl::AsyncPreloadTableManager()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemImpl", "AsyncPreloadTableManager");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UDataTableSystemManagerLite::* ----
void UDataTableSystemManagerLite::UpdateMatchId(struct FString InMatchModeID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemManagerLite", "UpdateMatchId");
    struct
    {
        struct FString InMatchModeID;
    } Parms{};
    Parms.InMatchModeID = (struct FString)InMatchModeID;
    this->ProcessEvent(Func, &Parms);
}

void UDataTableSystemManagerLite::UnloadTable(const struct FName& TableName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemManagerLite", "UnloadTable");
    struct
    {
        struct FName TableName;
    } Parms{};
    Parms.TableName = (struct FName)TableName;
    this->ProcessEvent(Func, &Parms);
}

void UDataTableSystemManagerLite::SyncPreloadAll()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemManagerLite", "SyncPreloadAll");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDataTableSystemManagerLite::SetHotfixMD5(const struct FName& TableName, struct FString MD5)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemManagerLite", "SetHotfixMD5");
    struct
    {
        struct FName TableName;
        struct FString MD5;
    } Parms{};
    Parms.TableName = (struct FName)TableName;
    Parms.MD5 = (struct FString)MD5;
    this->ProcessEvent(Func, &Parms);
}

void UDataTableSystemManagerLite::ResetTable(const struct FName& TableName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemManagerLite", "ResetTable");
    struct
    {
        struct FName TableName;
    } Parms{};
    Parms.TableName = (struct FName)TableName;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDataTableSystemManagerLite::PreloadTable(const struct FName& TableName, struct FDelegate Delegate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemManagerLite", "PreloadTable");
    struct
    {
        struct FName TableName;
        struct FDelegate Delegate;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TableName = (struct FName)TableName;
    Parms.Delegate = (struct FDelegate)Delegate;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDataTableSystemManagerLite::OnDataTableLoad(const struct FSoftObjectPath& DataTablePath, struct FName TableName, uint8_t bAsync, uint64_t InBatachID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemManagerLite", "OnDataTableLoad");
    struct
    {
        struct FSoftObjectPath DataTablePath;
        struct FName TableName;
        uint8_t bAsync;
        uint64_t InBatachID;
    } Parms{};
    Parms.DataTablePath = (struct FSoftObjectPath)DataTablePath;
    Parms.TableName = (struct FName)TableName;
    Parms.bAsync = (uint8_t)bAsync;
    Parms.InBatachID = (uint64_t)InBatachID;
    this->ProcessEvent(Func, &Parms);
}

void UDataTableSystemManagerLite::OnAsyncDataTableLoad(const struct FSoftObjectPath& DataTablePath, struct FName TableName, uint8_t bAsync, uint64_t InBatachID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemManagerLite", "OnAsyncDataTableLoad");
    struct
    {
        struct FSoftObjectPath DataTablePath;
        struct FName TableName;
        uint8_t bAsync;
        uint64_t InBatachID;
    } Parms{};
    Parms.DataTablePath = (struct FSoftObjectPath)DataTablePath;
    Parms.TableName = (struct FName)TableName;
    Parms.bAsync = (uint8_t)bAsync;
    Parms.InBatachID = (uint64_t)InBatachID;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDataTableSystemManagerLite::IsPreloadFinish()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemManagerLite", "IsPreloadFinish");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDataTableSystemManagerLite::GetTableAssetGuid(struct UDataTable* Table)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DataTableSystemManagerLite", "GetTableAssetGuid");
    struct
    {
        struct UDataTable* Table;
        struct FString ReturnValue;
    } Parms{};
    Parms.Table = (struct UDataTable*)Table;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TScriptInterface<IDataTableSystemManagerLiteInterface> UDataTableSystemManagerLite::GetLiteInterface()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemManagerLite", "GetLiteInterface");
    struct
    {
        struct TScriptInterface<IDataTableSystemManagerLiteInterface> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UDataTableSystemManagerLite::GetKeyNameFromCSVName(const struct FName& CSVName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemManagerLite", "GetKeyNameFromCSVName");
    struct
    {
        struct FName CSVName;
        struct FName ReturnValue;
    } Parms{};
    Parms.CSVName = (struct FName)CSVName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDataTableSystemManagerLite::GetHotfixMD5(const struct FName& TableName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemManagerLite", "GetHotfixMD5");
    struct
    {
        struct FName TableName;
        struct FString ReturnValue;
    } Parms{};
    Parms.TableName = (struct FName)TableName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDataTable* UDataTableSystemManagerLite::GetDataTable(const struct FName& TableName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemManagerLite", "GetDataTable");
    struct
    {
        struct FName TableName;
        struct UDataTable* ReturnValue;
    } Parms{};
    Parms.TableName = (struct FName)TableName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDataTableSystemManagerLite* UDataTableSystemManagerLite::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DataTableSystemManagerLite", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UDataTableSystemManagerLite* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDataTableSystemManagerLite::ForceReloadDataTable(const struct FName& TableName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemManagerLite", "ForceReloadDataTable");
    struct
    {
        struct FName TableName;
    } Parms{};
    Parms.TableName = (struct FName)TableName;
    this->ProcessEvent(Func, &Parms);
}

void UDataTableSystemManagerLite::AsyncPreloadAll()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemManagerLite", "AsyncPreloadAll");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- IDataTableSystemManagerLiteInterface::* ----
void IDataTableSystemManagerLiteInterface::UnloadTable(const struct FName& TableName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemManagerLiteInterface", "UnloadTable");
    struct
    {
        struct FName TableName;
    } Parms{};
    Parms.TableName = (struct FName)TableName;
    this->ProcessEvent(Func, &Parms);
}

void IDataTableSystemManagerLiteInterface::ResetTable(const struct FName& TableName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemManagerLiteInterface", "ResetTable");
    struct
    {
        struct FName TableName;
    } Parms{};
    Parms.TableName = (struct FName)TableName;
    this->ProcessEvent(Func, &Parms);
}

struct UDataTable* IDataTableSystemManagerLiteInterface::GetDataTable(const struct FName& TableName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DataTableSystemManagerLiteInterface", "GetDataTable");
    struct
    {
        struct FName TableName;
        struct UDataTable* ReturnValue;
    } Parms{};
    Parms.TableName = (struct FName)TableName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDeviceSetting::* ----
uint8_t UDeviceSetting::SetDisturbingMode(uint8_t bNoDisturbing)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DeviceSetting", "SetDisturbingMode");
    struct
    {
        uint8_t bNoDisturbing;
        uint8_t ReturnValue;
    } Parms{};
    Parms.bNoDisturbing = (uint8_t)bNoDisturbing;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDeviceSetting::IsRunningInSimulator(uint8_t bNewCheck)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DeviceSetting", "IsRunningInSimulator");
    struct
    {
        uint8_t bNewCheck;
        uint8_t ReturnValue;
    } Parms{};
    Parms.bNewCheck = (uint8_t)bNewCheck;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UDeviceSetting::GetUsedPhysicalMemory()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DeviceSetting", "GetUsedPhysicalMemory");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UDeviceSetting::GetTotalPhysicalMemory()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DeviceSetting", "GetTotalPhysicalMemory");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UDeviceSetting::GetMemoryUsedFastMB()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DeviceSetting", "GetMemoryUsedFastMB");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UDeviceSetting::GetMemoryUsedFast()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DeviceSetting", "GetMemoryUsedFast");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDeviceSetting::GetDisturbingMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DeviceSetting", "GetDisturbingMode");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDeviceSetting::GetDeviceModel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DeviceSetting", "GetDeviceModel");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EDeviceLevel UDeviceSetting::GetDeviceLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DeviceSetting", "GetDeviceLevel");
    struct
    {
        enum EDeviceLevel ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDeviceSetting::ChangeBGMSoundEffectVolume(int32_t Volume)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DeviceSetting", "ChangeBGMSoundEffectVolume");
    struct
    {
        int32_t Volume;
    } Parms{};
    Parms.Volume = (int32_t)Volume;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// ---- UGameResVersion::* ----
void UGameResVersion::UpdatePSOVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameResVersion", "UpdatePSOVersion");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGameResVersion::SetResVersion(struct FString Version)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameResVersion", "SetResVersion");
    struct
    {
        struct FString Version;
    } Parms{};
    Parms.Version = (struct FString)Version;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGameResVersion::SetResNewVersion(struct FString Version)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameResVersion", "SetResNewVersion");
    struct
    {
        struct FString Version;
    } Parms{};
    Parms.Version = (struct FString)Version;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGameResVersion::SetGameResVersionUpdateSucCount(int32_t Count)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameResVersion", "SetGameResVersionUpdateSucCount");
    struct
    {
        int32_t Count;
    } Parms{};
    Parms.Count = (int32_t)Count;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGameResVersion::SetGameResVersionUpdateStartCount(int32_t Count)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameResVersion", "SetGameResVersionUpdateStartCount");
    struct
    {
        int32_t Count;
    } Parms{};
    Parms.Count = (int32_t)Count;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UGameResVersion::PSOVersionNeedUpdate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameResVersion", "PSOVersionNeedUpdate");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameResVersion::GetResVersion(uint8_t bNeedReloadConfig)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameResVersion", "GetResVersion");
    struct
    {
        uint8_t bNeedReloadConfig;
        struct FString ReturnValue;
    } Parms{};
    Parms.bNeedReloadConfig = (uint8_t)bNeedReloadConfig;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameResVersion::GetResNewVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameResVersion", "GetResNewVersion");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGameResVersion::GetGameResVersionUpdateSucCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameResVersion", "GetGameResVersionUpdateSucCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGameResVersion::GetGameResVersionUpdateStartCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameResVersion", "GetGameResVersionUpdateStartCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGameVersionUtils::* ----
EGameVersionCompareResult UGameVersionUtils::VersionCompare(struct FString OriginVersion, struct FString TargetVersion)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "VersionCompare");
    struct
    {
        struct FString OriginVersion;
        struct FString TargetVersion;
        enum EGameVersionCompareResult ReturnValue;
    } Parms{};
    Parms.OriginVersion = (struct FString)OriginVersion;
    Parms.TargetVersion = (struct FString)TargetVersion;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGameVersionUtils::UpdateStringTableVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "UpdateStringTableVersion");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGameVersionUtils::SetResVersion(struct FString Version)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "SetResVersion");
    struct
    {
        struct FString Version;
    } Parms{};
    Parms.Version = (struct FString)Version;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGameVersionUtils::SetResNewVersion(struct FString Version)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "SetResNewVersion");
    struct
    {
        struct FString Version;
    } Parms{};
    Parms.Version = (struct FString)Version;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGameVersionUtils::SetOpenMicrocosm(uint8_t IsOpen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "SetOpenMicrocosm");
    struct
    {
        uint8_t IsOpen;
    } Parms{};
    Parms.IsOpen = (uint8_t)IsOpen;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGameVersionUtils::SetLauncherQueryInfo(struct FString QueryInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "SetLauncherQueryInfo");
    struct
    {
        struct FString QueryInfo;
    } Parms{};
    Parms.QueryInfo = (struct FString)QueryInfo;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGameVersionUtils::SetGameResVersionUpdateSucCount(int32_t Count)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "SetGameResVersionUpdateSucCount");
    struct
    {
        int32_t Count;
    } Parms{};
    Parms.Count = (int32_t)Count;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGameVersionUtils::SetGameResVersionUpdateStartCount(int32_t Count)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "SetGameResVersionUpdateStartCount");
    struct
    {
        int32_t Count;
    } Parms{};
    Parms.Count = (int32_t)Count;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGameVersionUtils::SetDisableShaderCompile(uint8_t IsDisable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "SetDisableShaderCompile");
    struct
    {
        uint8_t IsDisable;
    } Parms{};
    Parms.IsDisable = (uint8_t)IsDisable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGameVersionUtils::SetDisableLog(uint8_t IsDisable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "SetDisableLog");
    struct
    {
        uint8_t IsDisable;
    } Parms{};
    Parms.IsDisable = (uint8_t)IsDisable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGameVersionUtils::ResetResVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "ResetResVersion");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGameVersionUtils::RemoveLauncherParamsByKey(struct FString Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "RemoveLauncherParamsByKey");
    struct
    {
        struct FString Key;
    } Parms{};
    Parms.Key = (struct FString)Key;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UGameVersionUtils::IsVersionUsable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "IsVersionUsable");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameVersionUtils::IsUseTemporaryRegionFirst()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "IsUseTemporaryRegionFirst");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameVersionUtils::IsTestOrShippingTest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "IsTestOrShippingTest");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameVersionUtils::IsSupportLitePackage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "IsSupportLitePackage");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameVersionUtils::IsShipping()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "IsShipping");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameVersionUtils::IsResVersionLegal(struct FString AppVersion, struct FString ResVersion)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "IsResVersionLegal");
    struct
    {
        struct FString AppVersion;
        struct FString ResVersion;
        uint8_t ReturnValue;
    } Parms{};
    Parms.AppVersion = (struct FString)AppVersion;
    Parms.ResVersion = (struct FString)ResVersion;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameVersionUtils::IsPreRelease()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "IsPreRelease");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameVersionUtils::IsOpenMicrocosm()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "IsOpenMicrocosm");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameVersionUtils::IsInReview()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "IsInReview");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameVersionUtils::IsDownloadBaseDlcOnly()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "IsDownloadBaseDlcOnly");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameVersionUtils::IsDisableShaderCompile()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "IsDisableShaderCompile");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameVersionUtils::IsDisableLog()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "IsDisableLog");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameVersionUtils::IsAndroidAppBundle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "IsAndroidAppBundle");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameVersionUtils::GetWeGameVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "GetWeGameVersion");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<int32_t> UGameVersionUtils::GetVersionNums()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "GetVersionNums");
    struct
    {
        struct TArray<int32_t> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameVersionUtils::GetVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "GetVersion");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameVersionUtils::GetUEBuildTargetType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "GetUEBuildTargetType");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameVersionUtils::GetUEBuildConfiguration()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "GetUEBuildConfiguration");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameVersionUtils::GetSyncFullTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "GetSyncFullTime");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGameVersionUtils::GetSVNRevision()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "GetSVNRevision");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameVersionUtils::GetResVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "GetResVersion");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EResourceMSVersion UGameVersionUtils::GetResourceMSVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "GetResourceMSVersion");
    struct
    {
        enum EResourceMSVersion ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameVersionUtils::GetResNewVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "GetResNewVersion");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UGameVersionUtils::GetOpenWorldBuildVersions()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "GetOpenWorldBuildVersions");
    struct
    {
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameVersionUtils::GetLauncherParamsByKey(struct FString Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "GetLauncherParamsByKey");
    struct
    {
        struct FString Key;
        struct FString ReturnValue;
    } Parms{};
    Parms.Key = (struct FString)Key;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGameVersionUtils::GetLauncherChannel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "GetLauncherChannel");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UGameVersionUtils::GetLatestGameCommits()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "GetLatestGameCommits");
    struct
    {
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UGameVersionUtils::GetLatestEngineCommits()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "GetLatestEngineCommits");
    struct
    {
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameVersionUtils::GetLanguageInAPK()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "GetLanguageInAPK");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGameVersionUtils::GetGameResVersionUpdateSucCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "GetGameResVersionUpdateSucCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGameVersionUtils::GetGameResVersionUpdateStartCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "GetGameResVersionUpdateStartCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGameChannel UGameVersionUtils::GetGameChannel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "GetGameChannel");
    struct
    {
        enum EGameChannel ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGameBuildRegion UGameVersionUtils::GetGameBuildRegion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "GetGameBuildRegion");
    struct
    {
        enum EGameBuildRegion ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameVersionUtils::GetGameBuildInfoStr()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "GetGameBuildInfoStr");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGameBuildConfiguration UGameVersionUtils::GetGameBuildConfiguration()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "GetGameBuildConfiguration");
    struct
    {
        enum EGameBuildConfiguration ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameVersionUtils::GetEditorVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "GetEditorVersion");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameVersionUtils::GetEditorBranchID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "GetEditorBranchID");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameVersionUtils::GetConfigVersion(struct FString ConfigKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "GetConfigVersion");
    struct
    {
        struct FString ConfigKey;
        struct FString ReturnValue;
    } Parms{};
    Parms.ConfigKey = (struct FString)ConfigKey;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UGameVersionUtils::GetClearFilePaths()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "GetClearFilePaths");
    struct
    {
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameVersionUtils::GetCIPlatform()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "GetCIPlatform");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameVersionUtils::GetCIPipeline()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "GetCIPipeline");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameVersionUtils::GetCIBuildTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "GetCIBuildTime");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameVersionUtils::GetCIBuildNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "GetCIBuildNum");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameVersionUtils::GetCIBranchName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "GetCIBranchName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameVersionUtils::GetAppVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "GetAppVersion");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameVersionUtils::GetAppProductVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "GetAppProductVersion");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameVersionUtils::CheckAppVersionChange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionUtils", "CheckAppVersionChange");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGameVersionBlueprintTools::* ----
uint8_t UGameVersionBlueprintTools::IsShipping()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionBlueprintTools", "IsShipping");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameVersionBlueprintTools::GetWeGameVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionBlueprintTools", "GetWeGameVersion");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameVersionBlueprintTools::GetOpenWorldRuntimeBuildVersion(struct FString InWorldName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameVersionBlueprintTools", "GetOpenWorldRuntimeBuildVersion");
    struct
    {
        struct FString InWorldName;
        struct FString ReturnValue;
    } Parms{};
    Parms.InWorldName = (struct FString)InWorldName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameVersionBlueprintTools::GetGameVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameVersionBlueprintTools", "GetGameVersion");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGPAIUtils::* ----
void UGPAIUtils::SetTickPrerequisite(struct UActorComponent* A, struct UActorComponent* B)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAIUtils", "SetTickPrerequisite");
    struct
    {
        struct UActorComponent* A;
        struct UActorComponent* B;
    } Parms{};
    Parms.A = (struct UActorComponent*)A;
    Parms.B = (struct UActorComponent*)B;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// ---- UGPBlueprintUtils::* ----
void UGPBlueprintUtils::TrySetFolderPathInEditor(struct AActor* Actor, struct FName FolderName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPBlueprintUtils", "TrySetFolderPathInEditor");
    struct
    {
        struct AActor* Actor;
        struct FName FolderName;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.FolderName = (struct FName)FolderName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPBlueprintUtils::TrySetActorLabelInEditor(struct AActor* Actor, struct FString Label)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPBlueprintUtils", "TrySetActorLabelInEditor");
    struct
    {
        struct AActor* Actor;
        struct FString Label;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.Label = (struct FString)Label;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UGPBlueprintUtils::ShowMessageDialog(const struct FText& Message, const struct FText& Title)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPBlueprintUtils", "ShowMessageDialog");
    struct
    {
        struct FText Message;
        struct FText Title;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Message = (struct FText)Message;
    Parms.Title = (struct FText)Title;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPBlueprintUtils::RerunConstructionScripts(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPBlueprintUtils", "RerunConstructionScripts");
    struct
    {
        struct AActor* Actor;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UGPBlueprintUtils::RegularConvertSpecialString(struct FString& str)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPBlueprintUtils", "RegularConvertSpecialString");
    struct
    {
        struct FString str;
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    str = Parms.str;
    return Parms.ReturnValue;
}

float UGPBlueprintUtils::RebaseOntoZeroOrigin_Z(float Z, struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPBlueprintUtils", "RebaseOntoZeroOrigin_Z");
    struct
    {
        float Z;
        struct UObject* WorldContextObject;
        float ReturnValue;
    } Parms{};
    Parms.Z = (float)Z;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGPBlueprintUtils::RebaseOntoLocalOrigin_Z(float Z, struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPBlueprintUtils", "RebaseOntoLocalOrigin_Z");
    struct
    {
        float Z;
        struct UObject* WorldContextObject;
        float ReturnValue;
    } Parms{};
    Parms.Z = (float)Z;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPBlueprintUtils::ReadTermText(struct FString InTermName, struct FString InKey, struct FText& OutText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPBlueprintUtils", "ReadTermText");
    struct
    {
        struct FString InTermName;
        struct FString InKey;
        struct FText OutText;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InTermName = (struct FString)InTermName;
    Parms.InKey = (struct FString)InKey;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutText = Parms.OutText;
    return Parms.ReturnValue;
}

struct FText UGPBlueprintUtils::ReadPropertyText(struct FName& TableName, struct FName& PropertyName, struct FName& KeyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPBlueprintUtils", "ReadPropertyText");
    struct
    {
        struct FName TableName;
        struct FName PropertyName;
        struct FName KeyName;
        struct FText ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    TableName = Parms.TableName;
    PropertyName = Parms.PropertyName;
    KeyName = Parms.KeyName;
    return Parms.ReturnValue;
}

struct UGameInstance* UGPBlueprintUtils::GetCurrentGameInstance(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPBlueprintUtils", "GetCurrentGameInstance");
    struct
    {
        struct UObject* WorldContextObject;
        struct UGameInstance* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UGPBlueprintUtils::FindFirstActorByClassAndTag(struct UObject* WorldContextObject, struct AActor* ActorClass, struct FName Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPBlueprintUtils", "FindFirstActorByClassAndTag");
    struct
    {
        struct UObject* WorldContextObject;
        struct AActor* ActorClass;
        struct FName Tag;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.ActorClass = (struct AActor*)ActorClass;
    Parms.Tag = (struct FName)Tag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UGPBlueprintUtils::FindFirstActorByClass(struct UObject* WorldContextObject, struct AActor* ActorClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPBlueprintUtils", "FindFirstActorByClass");
    struct
    {
        struct UObject* WorldContextObject;
        struct AActor* ActorClass;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.ActorClass = (struct AActor*)ActorClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPBlueprintUtils::FindAllActorsByClassAndTag(struct UObject* WorldContextObject, struct AActor* ActorClass, struct FName Tag, struct TArray<struct AActor*>& OutActors)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPBlueprintUtils", "FindAllActorsByClassAndTag");
    struct
    {
        struct UObject* WorldContextObject;
        struct AActor* ActorClass;
        struct FName Tag;
        struct TArray<struct AActor*> OutActors;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.ActorClass = (struct AActor*)ActorClass;
    Parms.Tag = (struct FName)Tag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutActors = Parms.OutActors;
}

void UGPBlueprintUtils::FindAllActorsByClass(struct UObject* WorldContextObject, struct AActor* ActorClass, struct TArray<struct AActor*>& OutActors)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPBlueprintUtils", "FindAllActorsByClass");
    struct
    {
        struct UObject* WorldContextObject;
        struct AActor* ActorClass;
        struct TArray<struct AActor*> OutActors;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.ActorClass = (struct AActor*)ActorClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutActors = Parms.OutActors;
}

uint8_t UGPBlueprintUtils::CovertSpecialString(struct FString& str)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPBlueprintUtils", "CovertSpecialString");
    struct
    {
        struct FString str;
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    str = Parms.str;
    return Parms.ReturnValue;
}

uint8_t UGPBlueprintUtils::ConvertTermText(const struct FText& InText, struct FText& OutText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPBlueprintUtils", "ConvertTermText");
    struct
    {
        struct FText InText;
        struct FText OutText;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InText = (struct FText)InText;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutText = Parms.OutText;
    return Parms.ReturnValue;
}

uint8_t UGPBlueprintUtils::CalcBoundingFromViewport(struct UObject* WorldContextObject, struct FVector Origin, struct FVector Extend, struct FBox2D& BoxOut, struct TArray<struct FVector>& Points, struct TArray<struct FVector2D>& Points2D)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPBlueprintUtils", "CalcBoundingFromViewport");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector Origin;
        struct FVector Extend;
        struct FBox2D BoxOut;
        struct TArray<struct FVector> Points;
        struct TArray<struct FVector2D> Points2D;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Origin = (struct FVector)Origin;
    Parms.Extend = (struct FVector)Extend;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    BoxOut = Parms.BoxOut;
    Points = Parms.Points;
    Points2D = Parms.Points2D;
    return Parms.ReturnValue;
}

uint8_t UGPBlueprintUtils::CalcBoundingFromViewInfo(struct USceneCaptureComponent2D* RenderComponent, struct FVector Origin, struct FVector Extend, struct FBox2D& BoxOut, struct TArray<struct FVector>& Points, struct TArray<struct FVector2D>& Points2D)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPBlueprintUtils", "CalcBoundingFromViewInfo");
    struct
    {
        struct USceneCaptureComponent2D* RenderComponent;
        struct FVector Origin;
        struct FVector Extend;
        struct FBox2D BoxOut;
        struct TArray<struct FVector> Points;
        struct TArray<struct FVector2D> Points2D;
        uint8_t ReturnValue;
    } Parms{};
    Parms.RenderComponent = (struct USceneCaptureComponent2D*)RenderComponent;
    Parms.Origin = (struct FVector)Origin;
    Parms.Extend = (struct FVector)Extend;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    BoxOut = Parms.BoxOut;
    Points = Parms.Points;
    Points2D = Parms.Points2D;
    return Parms.ReturnValue;
}

// ---- UGPGConfigUtils::* ----
void UGPGConfigUtils::SetVector4(struct FString Section, struct FString Key, const struct FVector4& Value, struct FString IniName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGConfigUtils", "SetVector4");
    struct
    {
        struct FString Section;
        struct FString Key;
        struct FVector4 Value;
        struct FString IniName;
    } Parms{};
    Parms.Section = (struct FString)Section;
    Parms.Key = (struct FString)Key;
    Parms.Value = (struct FVector4)Value;
    Parms.IniName = (struct FString)IniName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPGConfigUtils::SetVector2D(struct FString Section, struct FString Key, struct FVector2D Value, struct FString IniName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGConfigUtils", "SetVector2D");
    struct
    {
        struct FString Section;
        struct FString Key;
        struct FVector2D Value;
        struct FString IniName;
    } Parms{};
    Parms.Section = (struct FString)Section;
    Parms.Key = (struct FString)Key;
    Parms.Value = (struct FVector2D)Value;
    Parms.IniName = (struct FString)IniName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPGConfigUtils::SetVector(struct FString Section, struct FString Key, struct FVector Value, struct FString IniName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGConfigUtils", "SetVector");
    struct
    {
        struct FString Section;
        struct FString Key;
        struct FVector Value;
        struct FString IniName;
    } Parms{};
    Parms.Section = (struct FString)Section;
    Parms.Key = (struct FString)Key;
    Parms.Value = (struct FVector)Value;
    Parms.IniName = (struct FString)IniName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPGConfigUtils::SetString(struct FString Section, struct FString Key, struct FString InValue, struct FString IniName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGConfigUtils", "SetString");
    struct
    {
        struct FString Section;
        struct FString Key;
        struct FString InValue;
        struct FString IniName;
    } Parms{};
    Parms.Section = (struct FString)Section;
    Parms.Key = (struct FString)Key;
    Parms.InValue = (struct FString)InValue;
    Parms.IniName = (struct FString)IniName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPGConfigUtils::SetSingleLineArray(struct FString Section, struct FString Key, const struct TArray<struct FString>& In_Arr, struct FString IniName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGConfigUtils", "SetSingleLineArray");
    struct
    {
        struct FString Section;
        struct FString Key;
        struct TArray<struct FString> In_Arr;
        struct FString IniName;
    } Parms{};
    Parms.Section = (struct FString)Section;
    Parms.Key = (struct FString)Key;
    Parms.In_Arr = (struct TArray<struct FString>)In_Arr;
    Parms.IniName = (struct FString)IniName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPGConfigUtils::SetRotator(struct FString Section, struct FString Key, struct FRotator Value, struct FString IniName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGConfigUtils", "SetRotator");
    struct
    {
        struct FString Section;
        struct FString Key;
        struct FRotator Value;
        struct FString IniName;
    } Parms{};
    Parms.Section = (struct FString)Section;
    Parms.Key = (struct FString)Key;
    Parms.Value = (struct FRotator)Value;
    Parms.IniName = (struct FString)IniName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPGConfigUtils::SetInt(struct FString Section, struct FString Key, int32_t Value, struct FString IniName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGConfigUtils", "SetInt");
    struct
    {
        struct FString Section;
        struct FString Key;
        int32_t Value;
        struct FString IniName;
    } Parms{};
    Parms.Section = (struct FString)Section;
    Parms.Key = (struct FString)Key;
    Parms.Value = (int32_t)Value;
    Parms.IniName = (struct FString)IniName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPGConfigUtils::SetFloat(struct FString Section, struct FString Key, float Value, struct FString IniName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGConfigUtils", "SetFloat");
    struct
    {
        struct FString Section;
        struct FString Key;
        float Value;
        struct FString IniName;
    } Parms{};
    Parms.Section = (struct FString)Section;
    Parms.Key = (struct FString)Key;
    Parms.Value = (float)Value;
    Parms.IniName = (struct FString)IniName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPGConfigUtils::SetColor(struct FString Section, struct FString Key, struct FColor Value, struct FString IniName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGConfigUtils", "SetColor");
    struct
    {
        struct FString Section;
        struct FString Key;
        struct FColor Value;
        struct FString IniName;
    } Parms{};
    Parms.Section = (struct FString)Section;
    Parms.Key = (struct FString)Key;
    Parms.Value = (struct FColor)Value;
    Parms.IniName = (struct FString)IniName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPGConfigUtils::SetBool(struct FString Section, struct FString Key, uint8_t Value, struct FString IniName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGConfigUtils", "SetBool");
    struct
    {
        struct FString Section;
        struct FString Key;
        uint8_t Value;
        struct FString IniName;
    } Parms{};
    Parms.Section = (struct FString)Section;
    Parms.Key = (struct FString)Key;
    Parms.Value = (uint8_t)Value;
    Parms.IniName = (struct FString)IniName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPGConfigUtils::SetArray(struct FString Section, struct FString Key, const struct TArray<struct FString>& Value, struct FString IniName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGConfigUtils", "SetArray");
    struct
    {
        struct FString Section;
        struct FString Key;
        struct TArray<struct FString> Value;
        struct FString IniName;
    } Parms{};
    Parms.Section = (struct FString)Section;
    Parms.Key = (struct FString)Key;
    Parms.Value = (struct TArray<struct FString>)Value;
    Parms.IniName = (struct FString)IniName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UGPGConfigUtils::GetVector4(struct FString Section, struct FString Key, struct FVector4& Value, struct FString IniName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGConfigUtils", "GetVector4");
    struct
    {
        struct FString Section;
        struct FString Key;
        struct FVector4 Value;
        struct FString IniName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Section = (struct FString)Section;
    Parms.Key = (struct FString)Key;
    Parms.IniName = (struct FString)IniName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Value = Parms.Value;
    return Parms.ReturnValue;
}

uint8_t UGPGConfigUtils::GetVector2D(struct FString Section, struct FString Key, struct FVector2D& Value, struct FString IniName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGConfigUtils", "GetVector2D");
    struct
    {
        struct FString Section;
        struct FString Key;
        struct FVector2D Value;
        struct FString IniName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Section = (struct FString)Section;
    Parms.Key = (struct FString)Key;
    Parms.IniName = (struct FString)IniName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Value = Parms.Value;
    return Parms.ReturnValue;
}

uint8_t UGPGConfigUtils::GetVector(struct FString Section, struct FString Key, struct FVector& Value, struct FString IniName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGConfigUtils", "GetVector");
    struct
    {
        struct FString Section;
        struct FString Key;
        struct FVector Value;
        struct FString IniName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Section = (struct FString)Section;
    Parms.Key = (struct FString)Key;
    Parms.IniName = (struct FString)IniName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Value = Parms.Value;
    return Parms.ReturnValue;
}

uint8_t UGPGConfigUtils::GetString(struct FString Section, struct FString Key, struct FString& OutResult, struct FString IniName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGConfigUtils", "GetString");
    struct
    {
        struct FString Section;
        struct FString Key;
        struct FString OutResult;
        struct FString IniName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Section = (struct FString)Section;
    Parms.Key = (struct FString)Key;
    Parms.IniName = (struct FString)IniName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutResult = Parms.OutResult;
    return Parms.ReturnValue;
}

int32_t UGPGConfigUtils::GetSingleLineArray(struct FString Section, struct FString Key, struct TArray<struct FString>& out_Arr, struct FString IniName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGConfigUtils", "GetSingleLineArray");
    struct
    {
        struct FString Section;
        struct FString Key;
        struct TArray<struct FString> out_Arr;
        struct FString IniName;
        int32_t ReturnValue;
    } Parms{};
    Parms.Section = (struct FString)Section;
    Parms.Key = (struct FString)Key;
    Parms.IniName = (struct FString)IniName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    out_Arr = Parms.out_Arr;
    return Parms.ReturnValue;
}

uint8_t UGPGConfigUtils::GetRotator(struct FString Section, struct FString Key, struct FRotator& Value, struct FString IniName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGConfigUtils", "GetRotator");
    struct
    {
        struct FString Section;
        struct FString Key;
        struct FRotator Value;
        struct FString IniName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Section = (struct FString)Section;
    Parms.Key = (struct FString)Key;
    Parms.IniName = (struct FString)IniName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Value = Parms.Value;
    return Parms.ReturnValue;
}

uint8_t UGPGConfigUtils::GetInt(struct FString Section, struct FString Key, int32_t& Value, struct FString IniName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGConfigUtils", "GetInt");
    struct
    {
        struct FString Section;
        struct FString Key;
        int32_t Value;
        struct FString IniName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Section = (struct FString)Section;
    Parms.Key = (struct FString)Key;
    Parms.IniName = (struct FString)IniName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Value = Parms.Value;
    return Parms.ReturnValue;
}

uint8_t UGPGConfigUtils::GetFloat(struct FString Section, struct FString Key, float& Value, struct FString IniName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGConfigUtils", "GetFloat");
    struct
    {
        struct FString Section;
        struct FString Key;
        float Value;
        struct FString IniName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Section = (struct FString)Section;
    Parms.Key = (struct FString)Key;
    Parms.IniName = (struct FString)IniName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Value = Parms.Value;
    return Parms.ReturnValue;
}

uint8_t UGPGConfigUtils::GetColor(struct FString Section, struct FString Key, struct FColor& Value, struct FString IniName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGConfigUtils", "GetColor");
    struct
    {
        struct FString Section;
        struct FString Key;
        struct FColor Value;
        struct FString IniName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Section = (struct FString)Section;
    Parms.Key = (struct FString)Key;
    Parms.IniName = (struct FString)IniName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Value = Parms.Value;
    return Parms.ReturnValue;
}

uint8_t UGPGConfigUtils::GetBool(struct FString Section, struct FString Key, uint8_t& Value, struct FString IniName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGConfigUtils", "GetBool");
    struct
    {
        struct FString Section;
        struct FString Key;
        uint8_t Value;
        struct FString IniName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Section = (struct FString)Section;
    Parms.Key = (struct FString)Key;
    Parms.IniName = (struct FString)IniName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Value = Parms.Value;
    return Parms.ReturnValue;
}

int32_t UGPGConfigUtils::GetArray(struct FString Section, struct FString Key, struct TArray<struct FString>& out_Arr, struct FString IniName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGConfigUtils", "GetArray");
    struct
    {
        struct FString Section;
        struct FString Key;
        struct TArray<struct FString> out_Arr;
        struct FString IniName;
        int32_t ReturnValue;
    } Parms{};
    Parms.Section = (struct FString)Section;
    Parms.Key = (struct FString)Key;
    Parms.IniName = (struct FString)IniName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    out_Arr = Parms.out_Arr;
    return Parms.ReturnValue;
}

// ---- UGPNetModeUtils::* ----
uint8_t UGPNetModeUtils::IsStandalone(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPNetModeUtils", "IsStandalone");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPNetModeUtils::IsServer(struct UObject* WorldContextObject, uint8_t bIncludeStandalone)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPNetModeUtils", "IsServer");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t bIncludeStandalone;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.bIncludeStandalone = (uint8_t)bIncludeStandalone;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPNetModeUtils::IsClient(struct UObject* WorldContextObject, uint8_t bIncludeStandalone)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPNetModeUtils", "IsClient");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t bIncludeStandalone;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.bIncludeStandalone = (uint8_t)bIncludeStandalone;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPNetModeUtils::HasLocalPlayer(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPNetModeUtils", "HasLocalPlayer");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct APlayerController* UGPNetModeUtils::GetLocalPlayerController(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPNetModeUtils", "GetLocalPlayerController");
    struct
    {
        struct UObject* WorldContextObject;
        struct APlayerController* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- ALevelSubsystemExample::* ----
void ALevelSubsystemExample::TestLevelSubsystem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSubsystemExample", "TestLevelSubsystem");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct ALevelSubsystemExample* ALevelSubsystemExample::GetLevelSubsystemExample(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LevelSubsystemExample", "GetLevelSubsystemExample");
    struct
    {
        struct UObject* WorldContextObject;
        struct ALevelSubsystemExample* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGPSingletonUtils::* ----
struct UWorldSubsystem* UGPSingletonUtils::GetWorldSubsystem(struct UObject* WorldContextObject, struct UObject* Class)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPSingletonUtils", "GetWorldSubsystem");
    struct
    {
        struct UObject* WorldContextObject;
        struct UObject* Class;
        struct UWorldSubsystem* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Class = (struct UObject*)Class;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UGPSingletonUtils::GetWorldSingleton(struct UObject* WorldContextObject, struct UObject* Class)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPSingletonUtils", "GetWorldSingleton");
    struct
    {
        struct UObject* WorldContextObject;
        struct UObject* Class;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Class = (struct UObject*)Class;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ALevelSubsystem* UGPSingletonUtils::GetLevelSubsystem(struct UObject* WorldContextObject, struct UObject* Class)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPSingletonUtils", "GetLevelSubsystem");
    struct
    {
        struct UObject* WorldContextObject;
        struct UObject* Class;
        struct ALevelSubsystem* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Class = (struct UObject*)Class;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGameInstanceSubsystem* UGPSingletonUtils::GetGameInstanceSubsystem(struct UObject* GameContextObject, struct UObject* Class)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPSingletonUtils", "GetGameInstanceSubsystem");
    struct
    {
        struct UObject* GameContextObject;
        struct UObject* Class;
        struct UGameInstanceSubsystem* ReturnValue;
    } Parms{};
    Parms.GameContextObject = (struct UObject*)GameContextObject;
    Parms.Class = (struct UObject*)Class;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UGPSingletonUtils::GetGameInstanceSingleton(struct UObject* WorldContextObject, struct UObject* Class)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPSingletonUtils", "GetGameInstanceSingleton");
    struct
    {
        struct UObject* WorldContextObject;
        struct UObject* Class;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Class = (struct UObject*)Class;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UEngineSubsystem* UGPSingletonUtils::GetEngineSubsystem(struct UObject* Class)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPSingletonUtils", "GetEngineSubsystem");
    struct
    {
        struct UObject* Class;
        struct UEngineSubsystem* ReturnValue;
    } Parms{};
    Parms.Class = (struct UObject*)Class;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UGPSingletonUtils::GetEngineSingleton(struct UObject* Class)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPSingletonUtils", "GetEngineSingleton");
    struct
    {
        struct UObject* Class;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.Class = (struct UObject*)Class;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UGPSingletonUtils::GetDefaultSingleton(struct UObject* WorldContextObject, struct UObject* Class, uint8_t bForceCreate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPSingletonUtils", "GetDefaultSingleton");
    struct
    {
        struct UObject* WorldContextObject;
        struct UObject* Class;
        uint8_t bForceCreate;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Class = (struct UObject*)Class;
    Parms.bForceCreate = (uint8_t)bForceCreate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UParticleSystemGroup::* ----
struct UParticleSystem* UParticleSystemGroup::SyncLoad()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ParticleSystemGroup", "SyncLoad");
    struct
    {
        struct UParticleSystem* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UParticleSystemGroup::SetTemplates(EFXQualityLevel InQualityLevel, struct FFXInstance InInstance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ParticleSystemGroup", "SetTemplates");
    struct
    {
        enum EFXQualityLevel InQualityLevel;
        struct FFXInstance InInstance;
    } Parms{};
    Parms.InQualityLevel = (enum EFXQualityLevel)InQualityLevel;
    Parms.InInstance = (struct FFXInstance)InInstance;
    this->ProcessEvent(Func, &Parms);
}

struct FSoftObjectPath UParticleSystemGroup::GetTemplateSoftObjectPathByQuality()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ParticleSystemGroup", "GetTemplateSoftObjectPathByQuality");
    struct
    {
        struct FSoftObjectPath ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UParticleSystem* UParticleSystemGroup::GetCurrentActiveParticleSystem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ParticleSystemGroup", "GetCurrentActiveParticleSystem");
    struct
    {
        struct UParticleSystem* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UParticleSystemGroup::AsyncLoad()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ParticleSystemGroup", "AsyncLoad");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- USceneData::* ----
struct TSet<struct TWeakObjectPtr<struct AActor>> USceneData::FindAllActorsByClass(struct UObject* InTargetType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SceneData", "FindAllActorsByClass");
    struct
    {
        struct UObject* InTargetType;
        struct TSet<struct TWeakObjectPtr<struct AActor>> ReturnValue;
    } Parms{};
    Parms.InTargetType = (struct UObject*)InTargetType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- ISceneDataInterface::* ----
uint8_t ISceneDataInterface::UnregisterActor(struct AActor* InTargetActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SceneDataInterface", "UnregisterActor");
    struct
    {
        struct AActor* InTargetActor;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InTargetActor = (struct AActor*)InTargetActor;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ISceneDataInterface::Shutdown(struct UWorld* World)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SceneDataInterface", "Shutdown");
    struct
    {
        struct UWorld* World;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    this->ProcessEvent(Func, &Parms);
}

void ISceneDataInterface::Reset(struct UWorld* World)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SceneDataInterface", "Reset");
    struct
    {
        struct UWorld* World;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ISceneDataInterface::RegisterActor(struct AActor* InTargetActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SceneDataInterface", "RegisterActor");
    struct
    {
        struct AActor* InTargetActor;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InTargetActor = (struct AActor*)InTargetActor;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ISceneDataInterface::Init(struct UWorld* World)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SceneDataInterface", "Init");
    struct
    {
        struct UWorld* World;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    this->ProcessEvent(Func, &Parms);
}

struct FMulticastInlineDelegate ISceneDataInterface::GetUnregisterActorDelegate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SceneDataInterface", "GetUnregisterActorDelegate");
    struct
    {
        struct FMulticastInlineDelegate ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMulticastInlineDelegate ISceneDataInterface::GetRegisterActorDelegate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SceneDataInterface", "GetRegisterActorDelegate");
    struct
    {
        struct FMulticastInlineDelegate ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- USceneDataInterfaceUtils::* ----
struct UObject* USceneDataInterfaceUtils::GetSceneDataInterface(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SceneDataInterfaceUtils", "GetSceneDataInterface");
    struct
    {
        struct UObject* WorldContextObject;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
