#include "WeGameSDK.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UWeGameSDKDelegates::* ----
struct UWeGameSDKDelegates* UWeGameSDKDelegates::Get(struct UObject* GameContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WeGameSDKDelegates", "Get");
    struct
    {
        struct UObject* GameContextObject;
        struct UWeGameSDKDelegates* ReturnValue;
    } Parms{};
    Parms.GameContextObject = (struct UObject*)GameContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UWeGameSDKManager::* ----
void UWeGameSDKManager::TryAutoLogin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "TryAutoLogin");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UWeGameSDKManager::SetPlatformLanguageCode(struct FString Code)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "SetPlatformLanguageCode");
    struct
    {
        struct FString Code;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Code = (struct FString)Code;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UWeGameSDKManager::SetLitePackageFeature(uint8_t IsEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "SetLitePackageFeature");
    struct
    {
        uint8_t IsEnabled;
    } Parms{};
    Parms.IsEnabled = (uint8_t)IsEnabled;
    this->ProcessEvent(Func, &Parms);
}

void UWeGameSDKManager::ReportToWeGame(struct FString& Action, struct FString& Status, struct FString& ext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "ReportToWeGame");
    struct
    {
        struct FString Action;
        struct FString Status;
        struct FString ext;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Action = Parms.Action;
    Status = Parms.Status;
    ext = Parms.ext;
}

void UWeGameSDKManager::ReportGameContentDamaged(int32_t Flag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "ReportGameContentDamaged");
    struct
    {
        int32_t Flag;
    } Parms{};
    Parms.Flag = (int32_t)Flag;
    this->ProcessEvent(Func, &Parms);
}

void UWeGameSDKManager::ReportDistributeIDToPerfSight()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WeGameSDKManager", "ReportDistributeIDToPerfSight");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UWeGameSDKManager::RepairDamagedGameFiles(const struct TArray<struct FString>& Files)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "RepairDamagedGameFiles");
    struct
    {
        struct TArray<struct FString> Files;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Files = (struct TArray<struct FString>)Files;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UWeGameSDKManager::NotifyLauncherExit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "NotifyLauncherExit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UWeGameSDKManager::IsWeGameAutoLoginEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "IsWeGameAutoLoginEnabled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWeGameSDKManager::IsSupportLitePackage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "IsSupportLitePackage");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWeGameSDKManager::IsEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WeGameSDKManager", "IsEnabled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWeGameSDKManager::IsDLCOwned(struct FString DLCID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "IsDLCOwned");
    struct
    {
        struct FString DLCID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.DLCID = (struct FString)DLCID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWeGameSDKManager::IsDlcNeedUpdate(struct FString DLCID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "IsDlcNeedUpdate");
    struct
    {
        struct FString DLCID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.DLCID = (struct FString)DLCID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWeGameSDKManager::IsDLCInstalled(struct FString DLCID, struct FString& InstalledPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "IsDLCInstalled");
    struct
    {
        struct FString DLCID;
        struct FString InstalledPath;
        uint8_t ReturnValue;
    } Parms{};
    Parms.DLCID = (struct FString)DLCID;
    this->ProcessEvent(Func, &Parms);
    InstalledPath = Parms.InstalledPath;
    return Parms.ReturnValue;
}

struct FWeGameConnectSvrInfo UWeGameSDKManager::GetServerInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "GetServerInfo");
    struct
    {
        struct FWeGameConnectSvrInfo ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UWeGameSDKManager::GetRegionCode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "GetRegionCode");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UWeGameSDKManager::GetPlayerAdultState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "GetPlayerAdultState");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EWeGamePlatformType UWeGameSDKManager::GetPlatformType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "GetPlatformType");
    struct
    {
        enum EWeGamePlatformType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWeGameSDKManager::GetPlatformLanguageCode(struct FString& Code)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "GetPlatformLanguageCode");
    struct
    {
        struct FString Code;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Code = Parms.Code;
    return Parms.ReturnValue;
}

struct FString UWeGameSDKManager::GetPfKey()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "GetPfKey");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UWeGameSDKManager::GetPf()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "GetPf");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FWeGameExpansionPackInfo UWeGameSDKManager::GetPackInfo(struct FString PackID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "GetPackInfo");
    struct
    {
        struct FString PackID;
        struct FWeGameExpansionPackInfo ReturnValue;
    } Parms{};
    Parms.PackID = (struct FString)PackID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWeGameSDKManager* UWeGameSDKManager::GetInstance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WeGameSDKManager", "GetInstance");
    struct
    {
        struct UWeGameSDKManager* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FWeGameExpansionPackList UWeGameSDKManager::GetExpansionPackList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "GetExpansionPackList");
    struct
    {
        struct FWeGameExpansionPackList ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWeGameSDKManager::GetExpansionPackInfo(int32_t Index, struct FWeGameExpansionPackInfo& PackInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "GetExpansionPackInfo");
    struct
    {
        int32_t Index;
        struct FWeGameExpansionPackInfo PackInfo;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    PackInfo = Parms.PackInfo;
    return Parms.ReturnValue;
}

int32_t UWeGameSDKManager::GetExpansionPackCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "GetExpansionPackCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWeGameSDKManager::GetDLCInfo(struct FString DLCID, struct FWeGameDLCInfo& DLCInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "GetDLCInfo");
    struct
    {
        struct FString DLCID;
        struct FWeGameDLCInfo DLCInfo;
        uint8_t ReturnValue;
    } Parms{};
    Parms.DLCID = (struct FString)DLCID;
    this->ProcessEvent(Func, &Parms);
    DLCInfo = Parms.DLCInfo;
    return Parms.ReturnValue;
}

struct FString UWeGameSDKManager::GetDistributeID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "GetDistributeID");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UWeGameSDKManager::GetDiskFreeSpaceStr(struct FString DirectoryPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "GetDiskFreeSpaceStr");
    struct
    {
        struct FString DirectoryPath;
        struct FString ReturnValue;
    } Parms{};
    Parms.DirectoryPath = (struct FString)DirectoryPath;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UWeGameSDKManager::GetCurrentBranchName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "GetCurrentBranchName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UWeGameSDKManager::GetChannelInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "GetChannelInfo");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UWeGameSDKManager::GetAuthEncryptData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "GetAuthEncryptData");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWeGameSDKManager::GetAppVersion(struct FString& AppVersion)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "GetAppVersion");
    struct
    {
        struct FString AppVersion;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    AppVersion = Parms.AppVersion;
    return Parms.ReturnValue;
}

uint8_t UWeGameSDKManager::GetAccountInfo(struct FWeGameAcccountInfo& Info)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "GetAccountInfo");
    struct
    {
        struct FWeGameAcccountInfo Info;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Info = Parms.Info;
    return Parms.ReturnValue;
}

uint8_t UWeGameSDKManager::GetAbroadLoginAccountInfo(struct FWeGameAbroadLoginAccountInfo& Info)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "GetAbroadLoginAccountInfo");
    struct
    {
        struct FWeGameAbroadLoginAccountInfo Info;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Info = Parms.Info;
    return Parms.ReturnValue;
}

struct UWeGameSDKManager* UWeGameSDKManager::Get(struct UObject* Context)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WeGameSDKManager", "Get");
    struct
    {
        struct UObject* Context;
        struct UWeGameSDKManager* ReturnValue;
    } Parms{};
    Parms.Context = (struct UObject*)Context;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UWeGameSDKManager::BroadcastLoginErr(EWeGameLoginErrType ErrType, int32_t ErrorCode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "BroadcastLoginErr");
    struct
    {
        enum EWeGameLoginErrType ErrType;
        int32_t ErrorCode;
    } Parms{};
    Parms.ErrType = (enum EWeGameLoginErrType)ErrType;
    Parms.ErrorCode = (int32_t)ErrorCode;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UWeGameSDKManager::AsyncUninstalDLC(struct FString DLCID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "AsyncUninstalDLC");
    struct
    {
        struct FString DLCID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.DLCID = (struct FString)DLCID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWeGameSDKManager::AsyncShowDLCManageWindow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "AsyncShowDLCManageWindow");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWeGameSDKManager::AsyncResumeInstallExpansionPack(struct FString PackID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "AsyncResumeInstallExpansionPack");
    struct
    {
        struct FString PackID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PackID = (struct FString)PackID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWeGameSDKManager::AsyncResumeInstallDLC(struct FString DLCID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "AsyncResumeInstallDLC");
    struct
    {
        struct FString DLCID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.DLCID = (struct FString)DLCID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWeGameSDKManager::AsyncRemoveExpansionPack(struct FString PackID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "AsyncRemoveExpansionPack");
    struct
    {
        struct FString PackID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PackID = (struct FString)PackID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWeGameSDKManager::AsyncQueryExpansionPackList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "AsyncQueryExpansionPackList");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWeGameSDKManager::AsyncPauseInstallExpansionPack(struct FString PackID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "AsyncPauseInstallExpansionPack");
    struct
    {
        struct FString PackID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PackID = (struct FString)PackID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWeGameSDKManager::AsyncPauseInstallDLC(struct FString DLCID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "AsyncPauseInstallDLC");
    struct
    {
        struct FString DLCID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.DLCID = (struct FString)DLCID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWeGameSDKManager::AsyncInstallExpansionPack(struct FString PackID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "AsyncInstallExpansionPack");
    struct
    {
        struct FString PackID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PackID = (struct FString)PackID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWeGameSDKManager::AsyncInstallDLC(struct FString DLCID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "AsyncInstallDLC");
    struct
    {
        struct FString DLCID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.DLCID = (struct FString)DLCID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWeGameSDKManager::AsyncCheckAllDlcsState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "AsyncCheckAllDlcsState");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWeGameSDKManager::AsyncCancelInstallExpansionPack(struct FString PackID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeGameSDKManager", "AsyncCancelInstallExpansionPack");
    struct
    {
        struct FString PackID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PackID = (struct FString)PackID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
