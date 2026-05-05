#include "Gamelet.hpp"
#include "Engine.hpp"
#include "GameletJsEnv.hpp"
#include "PixUI.hpp"
#include "PixUILog.hpp"
#include "Slate.hpp"
#include "SlateCore.hpp"
#include "UMG.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UGamelet
int32_t UGamelet::UpdateProductConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Gamelet", "UpdateProductConfig");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGamelet::Tick(float fDeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Gamelet", "Tick");
    struct
    {
        float fDeltaTime;
    } Parms{};
    Parms.fDeltaTime = (float)fDeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UGamelet::StopTick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("Gamelet", "StopTick");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGamelet::StartTick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("Gamelet", "StartTick");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGamelet::SetTickIntervalSec(float TickIntervalSec)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("Gamelet", "SetTickIntervalSec");
    struct
    {
        float TickIntervalSec;
    } Parms{};
    Parms.TickIntervalSec = (float)TickIntervalSec;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int32_t UGamelet::SetScriptExternalLoadDir(struct FString ExternalLoadDir)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Gamelet", "SetScriptExternalLoadDir");
    struct
    {
        struct FString ExternalLoadDir;
        int32_t ReturnValue;
    } Parms{};
    Parms.ExternalLoadDir = (struct FString)ExternalLoadDir;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGamelet::SetProductConfig(struct FString NewConfig)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("Gamelet", "SetProductConfig");
    struct
    {
        struct FString NewConfig;
    } Parms{};
    Parms.NewConfig = (struct FString)NewConfig;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int32_t UGamelet::SetFont(struct FString FontName, struct FString FontPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Gamelet", "SetFont");
    struct
    {
        struct FString FontName;
        struct FString FontPath;
        int32_t ReturnValue;
    } Parms{};
    Parms.FontName = (struct FString)FontName;
    Parms.FontPath = (struct FString)FontPath;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGamelet::SetDefaultFont(struct FString FontName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Gamelet", "SetDefaultFont");
    struct
    {
        struct FString FontName;
        int32_t ReturnValue;
    } Parms{};
    Parms.FontName = (struct FString)FontName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGamelet::SetBuiltinResConfig(struct FString ResConfig)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Gamelet", "SetBuiltinResConfig");
    struct
    {
        struct FString ResConfig;
        int32_t ReturnValue;
    } Parms{};
    Parms.ResConfig = (struct FString)ResConfig;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGamelet::SetAppVisibility(struct FString APPID, uint8_t Visible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Gamelet", "SetAppVisibility");
    struct
    {
        struct FString APPID;
        uint8_t Visible;
        int32_t ReturnValue;
    } Parms{};
    Parms.APPID = (struct FString)APPID;
    Parms.Visible = (uint8_t)Visible;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGamelet::SetAppPageVisibility(struct FString APPID, struct FString AppPage, uint8_t Visible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Gamelet", "SetAppPageVisibility");
    struct
    {
        struct FString APPID;
        struct FString AppPage;
        uint8_t Visible;
        int32_t ReturnValue;
    } Parms{};
    Parms.APPID = (struct FString)APPID;
    Parms.AppPage = (struct FString)AppPage;
    Parms.Visible = (uint8_t)Visible;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGamelet::SendMessageToSdk(struct FString Msg)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Gamelet", "SendMessageToSdk");
    struct
    {
        struct FString Msg;
        int32_t ReturnValue;
    } Parms{};
    Parms.Msg = (struct FString)Msg;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGamelet::SendMessageToApp(struct FString APPID, struct FString Msg)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Gamelet", "SendMessageToApp");
    struct
    {
        struct FString APPID;
        struct FString Msg;
        int32_t ReturnValue;
    } Parms{};
    Parms.APPID = (struct FString)APPID;
    Parms.Msg = (struct FString)Msg;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGamelet::RefreshUserdata(const struct TMap<struct FString, struct FString>& UserData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Gamelet", "RefreshUserdata");
    struct
    {
        struct TMap<struct FString, struct FString> UserData;
        int32_t ReturnValue;
    } Parms{};
    Parms.UserData = (struct TMap<struct FString, struct FString>)UserData;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGamelet::OpenBeforeLoginWithGameVersion(EGameletEnvironment Environment, struct FString GameVersion)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Gamelet", "OpenBeforeLoginWithGameVersion");
    struct
    {
        enum EGameletEnvironment Environment;
        struct FString GameVersion;
        int32_t ReturnValue;
    } Parms{};
    Parms.Environment = (enum EGameletEnvironment)Environment;
    Parms.GameVersion = (struct FString)GameVersion;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGamelet::OpenBeforeLogin(EGameletEnvironment Environment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Gamelet", "OpenBeforeLogin");
    struct
    {
        enum EGameletEnvironment Environment;
        int32_t ReturnValue;
    } Parms{};
    Parms.Environment = (enum EGameletEnvironment)Environment;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGamelet::OpenApp(struct FString APPID, struct FString OpenArgs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Gamelet", "OpenApp");
    struct
    {
        struct FString APPID;
        struct FString OpenArgs;
        int32_t ReturnValue;
    } Parms{};
    Parms.APPID = (struct FString)APPID;
    Parms.OpenArgs = (struct FString)OpenArgs;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGamelet::Open(EGameletEnvironment Environment, const struct TMap<struct FString, struct FString>& UserData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Gamelet", "Open");
    struct
    {
        enum EGameletEnvironment Environment;
        struct TMap<struct FString, struct FString> UserData;
        int32_t ReturnValue;
    } Parms{};
    Parms.Environment = (enum EGameletEnvironment)Environment;
    Parms.UserData = (struct TMap<struct FString, struct FString>)UserData;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGamelet::Initialize(struct UGameletSettings* Settings)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Gamelet", "Initialize");
    struct
    {
        struct UGameletSettings* Settings;
        int32_t ReturnValue;
    } Parms{};
    Parms.Settings = (struct UGameletSettings*)Settings;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGamelet::GetProductConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("Gamelet", "GetProductConfig");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGameletSettings* UGamelet::GetGlobalSettings()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Gamelet", "GetGlobalSettings");
    struct
    {
        struct UGameletSettings* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGamelet::GetBackTrace(struct FString& TraceInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Gamelet", "GetBackTrace");
    struct
    {
        struct FString TraceInfo;
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    TraceInfo = Parms.TraceInfo;
    return Parms.ReturnValue;
}

struct UGamelet* UGamelet::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("Gamelet", "Get");
    struct
    {
        struct UGamelet* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGamelet::ExecOnSDKMessage(struct FString Msg)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Gamelet", "ExecOnSDKMessage");
    struct
    {
        struct FString Msg;
        int32_t ReturnValue;
    } Parms{};
    Parms.Msg = (struct FString)Msg;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGamelet::ExecOnReportData(struct FString EventName, struct FString Data)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Gamelet", "ExecOnReportData");
    struct
    {
        struct FString EventName;
        struct FString Data;
        int32_t ReturnValue;
    } Parms{};
    Parms.EventName = (struct FString)EventName;
    Parms.Data = (struct FString)Data;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGamelet::ExecOnRefreshUserdata()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Gamelet", "ExecOnRefreshUserdata");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGamelet::EnableLog(uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Gamelet", "EnableLog");
    struct
    {
        uint8_t Enable;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

int32_t UGamelet::Deinitialize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Gamelet", "Deinitialize");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGamelet::CollectPixUILogOutput(EPxLogGroups PixUILogType, EPxLogLevels PixUILogLevel, struct FString logContent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Gamelet", "CollectPixUILogOutput");
    struct
    {
        enum EPxLogGroups PixUILogType;
        enum EPxLogLevels PixUILogLevel;
        struct FString logContent;
    } Parms{};
    Parms.PixUILogType = (enum EPxLogGroups)PixUILogType;
    Parms.PixUILogLevel = (enum EPxLogLevels)PixUILogLevel;
    Parms.logContent = (struct FString)logContent;
    this->ProcessEvent(Func, &Parms);
}

int32_t UGamelet::CloseAppPage(struct FString APPID, struct FString AppPage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Gamelet", "CloseAppPage");
    struct
    {
        struct FString APPID;
        struct FString AppPage;
        int32_t ReturnValue;
    } Parms{};
    Parms.APPID = (struct FString)APPID;
    Parms.AppPage = (struct FString)AppPage;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGamelet::CloseApp(struct FString APPID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Gamelet", "CloseApp");
    struct
    {
        struct FString APPID;
        int32_t ReturnValue;
    } Parms{};
    Parms.APPID = (struct FString)APPID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGamelet::Close()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Gamelet", "Close");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGamelet::AllAssetsGC()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Gamelet", "AllAssetsGC");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGameletEnvMgr
int32_t UGameletEnvMgr::OnEnvToGameMessage(struct FString Msg)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameletEnvMgr", "OnEnvToGameMessage");
    struct
    {
        struct FString Msg;
        int32_t ReturnValue;
    } Parms{};
    Parms.Msg = (struct FString)Msg;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGameletEnvMgr::OnEnvToEntryMessage(struct FString Msg)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameletEnvMgr", "OnEnvToEntryMessage");
    struct
    {
        struct FString Msg;
        int32_t ReturnValue;
    } Parms{};
    Parms.Msg = (struct FString)Msg;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGameletEnvMgr::OnEnvReportData(struct FString EventName, struct FString Data)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameletEnvMgr", "OnEnvReportData");
    struct
    {
        struct FString EventName;
        struct FString Data;
        int32_t ReturnValue;
    } Parms{};
    Parms.EventName = (struct FString)EventName;
    Parms.Data = (struct FString)Data;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGameletEnvMgr::OnEnvRefreshUserdata()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameletEnvMgr", "OnEnvRefreshUserdata");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGameletEnvMgr::OnEnvLoaded(struct FString URL, int32_t ErrorCode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameletEnvMgr", "OnEnvLoaded");
    struct
    {
        struct FString URL;
        int32_t ErrorCode;
    } Parms{};
    Parms.URL = (struct FString)URL;
    Parms.ErrorCode = (int32_t)ErrorCode;
    this->ProcessEvent(Func, &Parms);
}

void UGameletEnvMgr::OnEnvInternalError(int32_t ErrorCode, struct FString ErrorMsg)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameletEnvMgr", "OnEnvInternalError");
    struct
    {
        int32_t ErrorCode;
        struct FString ErrorMsg;
    } Parms{};
    Parms.ErrorCode = (int32_t)ErrorCode;
    Parms.ErrorMsg = (struct FString)ErrorMsg;
    this->ProcessEvent(Func, &Parms);
}

struct FString UGameletEnvMgr::GetBackTrace()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameletEnvMgr", "GetBackTrace");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGameletFile
uint8_t UGameletFile::WriteFile(struct FString Path, const struct FGameletArrayBuffer& ArrayBuffer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletFile", "WriteFile");
    struct
    {
        struct FString Path;
        struct FGameletArrayBuffer ArrayBuffer;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Path = (struct FString)Path;
    Parms.ArrayBuffer = (struct FGameletArrayBuffer)ArrayBuffer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameletFile::SaveStringToFile(struct FString Path, struct FString Content)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletFile", "SaveStringToFile");
    struct
    {
        struct FString Path;
        struct FString Content;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Path = (struct FString)Path;
    Parms.Content = (struct FString)Content;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGameletArrayBuffer UGameletFile::ReadFile(struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletFile", "ReadFile");
    struct
    {
        struct FString Path;
        struct FGameletArrayBuffer ReturnValue;
    } Parms{};
    Parms.Path = (struct FString)Path;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameletFile::LoadFileToString(struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletFile", "LoadFileToString");
    struct
    {
        struct FString Path;
        struct FString ReturnValue;
    } Parms{};
    Parms.Path = (struct FString)Path;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameletFile::GetFileMd5(struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletFile", "GetFileMd5");
    struct
    {
        struct FString Path;
        struct FString ReturnValue;
    } Parms{};
    Parms.Path = (struct FString)Path;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UGameletFile::FileSize(struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletFile", "FileSize");
    struct
    {
        struct FString Path;
        int64_t ReturnValue;
    } Parms{};
    Parms.Path = (struct FString)Path;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameletFile::FileExists(struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletFile", "FileExists");
    struct
    {
        struct FString Path;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Path = (struct FString)Path;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameletFile::DirectoryExists(struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletFile", "DirectoryExists");
    struct
    {
        struct FString Path;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Path = (struct FString)Path;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameletFile::DeleteFile(struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletFile", "DeleteFile");
    struct
    {
        struct FString Path;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Path = (struct FString)Path;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameletFile::DeleteDirectory(struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletFile", "DeleteDirectory");
    struct
    {
        struct FString Path;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Path = (struct FString)Path;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameletFile::CreateDirectory(struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletFile", "CreateDirectory");
    struct
    {
        struct FString Path;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Path = (struct FString)Path;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGameletPaths
struct FString UGameletPaths::ToAbsolutePathForWrite(struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPaths", "ToAbsolutePathForWrite");
    struct
    {
        struct FString Path;
        struct FString ReturnValue;
    } Parms{};
    Parms.Path = (struct FString)Path;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameletPaths::ToAbsolutePathForRead(struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPaths", "ToAbsolutePathForRead");
    struct
    {
        struct FString Path;
        struct FString ReturnValue;
    } Parms{};
    Parms.Path = (struct FString)Path;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameletPaths::RootDir()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPaths", "RootDir");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameletPaths::ProjectUserDir()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPaths", "ProjectUserDir");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameletPaths::ProjectSavedDir()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPaths", "ProjectSavedDir");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameletPaths::ProjectModsDir()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPaths", "ProjectModsDir");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameletPaths::ProjectIntermediateDir()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPaths", "ProjectIntermediateDir");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameletPaths::ProjectDir()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPaths", "ProjectDir");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameletPaths::ProjectContentDir()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPaths", "ProjectContentDir");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameletPaths::ProjectConfigDir()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPaths", "ProjectConfigDir");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameletPaths::LaunchDir()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPaths", "LaunchDir");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameletPaths::GetPuertsScriptFolderName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPaths", "GetPuertsScriptFolderName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameletPaths::GetPuertsEntrancePath(struct FString PakName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPaths", "GetPuertsEntrancePath");
    struct
    {
        struct FString PakName;
        struct FString ReturnValue;
    } Parms{};
    Parms.PakName = (struct FString)PakName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameletPaths::GetPuertsAppScriptPath(struct FString AppFolderName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPaths", "GetPuertsAppScriptPath");
    struct
    {
        struct FString AppFolderName;
        struct FString ReturnValue;
    } Parms{};
    Parms.AppFolderName = (struct FString)AppFolderName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameletPaths::GetPuertsAppNameByPakName(struct FString PakName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPaths", "GetPuertsAppNameByPakName");
    struct
    {
        struct FString PakName;
        struct FString ReturnValue;
    } Parms{};
    Parms.PakName = (struct FString)PakName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameletPaths::GetPuertsAppIndexPath(struct FString AppFolderName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPaths", "GetPuertsAppIndexPath");
    struct
    {
        struct FString AppFolderName;
        struct FString ReturnValue;
    } Parms{};
    Parms.AppFolderName = (struct FString)AppFolderName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameletPaths::GameletSavedRoot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPaths", "GameletSavedRoot");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameletPaths::GameletFolderName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPaths", "GameletFolderName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameletPaths::GameletContentRoot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPaths", "GameletContentRoot");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameletPaths::GameletAppArchiveRoot(struct FString APPID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPaths", "GameletAppArchiveRoot");
    struct
    {
        struct FString APPID;
        struct FString ReturnValue;
    } Parms{};
    Parms.APPID = (struct FString)APPID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGameletPuertsEnvMgr
void UGameletPuertsEnvMgr::OnEnvScriptStateInit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameletPuertsEnvMgr", "OnEnvScriptStateInit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGameletPuertsEnvMgr::OnEnvMessage(struct FString Msg)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameletPuertsEnvMgr", "OnEnvMessage");
    struct
    {
        struct FString Msg;
    } Parms{};
    Parms.Msg = (struct FString)Msg;
    this->ProcessEvent(Func, &Parms);
}

void UGameletPuertsEnvMgr::OnEnvLoaded(struct FString URL, int32_t ErrorCode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameletPuertsEnvMgr", "OnEnvLoaded");
    struct
    {
        struct FString URL;
        int32_t ErrorCode;
    } Parms{};
    Parms.URL = (struct FString)URL;
    Parms.ErrorCode = (int32_t)ErrorCode;
    this->ProcessEvent(Func, &Parms);
}

struct UGameletPuertsEnvMgr* UGameletPuertsEnvMgr::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPuertsEnvMgr", "Get");
    struct
    {
        struct UGameletPuertsEnvMgr* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGameletPuertsUtilities
void UGameletPuertsUtilities::UpdateTextureResources(struct UTexture2D* Texture)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPuertsUtilities", "UpdateTextureResources");
    struct
    {
        struct UTexture2D* Texture;
    } Parms{};
    Parms.Texture = (struct UTexture2D*)Texture;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int32_t UGameletPuertsUtilities::UnMountPak(struct FString PakPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPuertsUtilities", "UnMountPak");
    struct
    {
        struct FString PakPath;
        int32_t ReturnValue;
    } Parms{};
    Parms.PakPath = (struct FString)PakPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGameletPuertsUtilities::RemoveUserWidgetFromGame(struct UUserWidget* UserWidget, struct FString PanelInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPuertsUtilities", "RemoveUserWidgetFromGame");
    struct
    {
        struct UUserWidget* UserWidget;
        struct FString PanelInfo;
    } Parms{};
    Parms.UserWidget = (struct UUserWidget*)UserWidget;
    Parms.PanelInfo = (struct FString)PanelInfo;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGameletPuertsUtilities::ReleaseTextureResource(struct UTexture2D* Texture)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPuertsUtilities", "ReleaseTextureResource");
    struct
    {
        struct UTexture2D* Texture;
    } Parms{};
    Parms.Texture = (struct UTexture2D*)Texture;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int32_t UGameletPuertsUtilities::MountPak(struct FString PakPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPuertsUtilities", "MountPak");
    struct
    {
        struct FString PakPath;
        int32_t ReturnValue;
    } Parms{};
    Parms.PakPath = (struct FString)PakPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UUserWidget* UGameletPuertsUtilities::LoadUI(struct FString Ref, struct UObject* obj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPuertsUtilities", "LoadUI");
    struct
    {
        struct FString Ref;
        struct UObject* obj;
        struct UUserWidget* ReturnValue;
    } Parms{};
    Parms.Ref = (struct FString)Ref;
    Parms.obj = (struct UObject*)obj;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UTexture2D* UGameletPuertsUtilities::LoadImageToTexture2D(struct FString Path, ETextureGroup LODGroup, uint8_t IsSRGB)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPuertsUtilities", "LoadImageToTexture2D");
    struct
    {
        struct FString Path;
        enum ETextureGroup LODGroup;
        uint8_t IsSRGB;
        struct UTexture2D* ReturnValue;
    } Parms{};
    Parms.Path = (struct FString)Path;
    Parms.LODGroup = (enum ETextureGroup)LODGroup;
    Parms.IsSRGB = (uint8_t)IsSRGB;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameletPuertsUtilities::IsWithEditor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPuertsUtilities", "IsWithEditor");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGameletPuertsUtilities::HelloWorld()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPuertsUtilities", "HelloWorld");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UWidgetAnimation* UGameletPuertsUtilities::GetWidgetAnimationByName(struct UUserWidget* Widget, struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPuertsUtilities", "GetWidgetAnimationByName");
    struct
    {
        struct UUserWidget* Widget;
        struct FString Name;
        struct UWidgetAnimation* ReturnValue;
    } Parms{};
    Parms.Widget = (struct UUserWidget*)Widget;
    Parms.Name = (struct FString)Name;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameletPuertsUtilities::GetSDKVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPuertsUtilities", "GetSDKVersion");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameletPuertsUtilities::GetPlatformDesc()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPuertsUtilities", "GetPlatformDesc");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameletPuertsUtilities::GetNetworkType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPuertsUtilities", "GetNetworkType");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameletPuertsUtilities::GetHardwareInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPuertsUtilities", "GetHardwareInfo");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameletPuertsUtilities::GetEngineVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPuertsUtilities", "GetEngineVersion");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGameletPuertsUtilities::FlushPuertsVMMessages()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPuertsUtilities", "FlushPuertsVMMessages");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGameletPuertsUtilities::AddUserWidgetToGame(struct UUserWidget* UserWidget, struct FString PanelInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletPuertsUtilities", "AddUserWidgetToGame");
    struct
    {
        struct UUserWidget* UserWidget;
        struct FString PanelInfo;
    } Parms{};
    Parms.UserWidget = (struct UUserWidget*)UserWidget;
    Parms.PanelInfo = (struct FString)PanelInfo;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UGameletSettings
uint8_t UGameletSettings::IsValidSetting()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameletSettings", "IsValidSetting");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGameletSettings* UGameletSettings::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameletSettings", "Get");
    struct
    {
        struct UGameletSettings* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGameletWidget
void UGameletWidget::SetWidgetOffset(struct FMargin OffsetData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameletWidget", "SetWidgetOffset");
    struct
    {
        struct FMargin OffsetData;
    } Parms{};
    Parms.OffsetData = (struct FMargin)OffsetData;
    this->ProcessEvent(Func, &Parms);
}

void UGameletWidget::SetWidgetAnchor(struct FAnchors AnchorData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameletWidget", "SetWidgetAnchor");
    struct
    {
        struct FAnchors AnchorData;
    } Parms{};
    Parms.AnchorData = (struct FAnchors)AnchorData;
    this->ProcessEvent(Func, &Parms);
}

void UGameletWidget::SetUseSRGB(uint8_t EnableSRGB)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameletWidget", "SetUseSRGB");
    struct
    {
        uint8_t EnableSRGB;
    } Parms{};
    Parms.EnableSRGB = (uint8_t)EnableSRGB;
    this->ProcessEvent(Func, &Parms);
}

void UGameletWidget::SetRHIConfigured(uint8_t Configured)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameletWidget", "SetRHIConfigured");
    struct
    {
        uint8_t Configured;
    } Parms{};
    Parms.Configured = (uint8_t)Configured;
    this->ProcessEvent(Func, &Parms);
}

void UGameletWidget::SetBackgroundWidgetOffset(struct FMargin OffsetData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameletWidget", "SetBackgroundWidgetOffset");
    struct
    {
        struct FMargin OffsetData;
    } Parms{};
    Parms.OffsetData = (struct FMargin)OffsetData;
    this->ProcessEvent(Func, &Parms);
}

void UGameletWidget::SetBackgroundWidgetAnchor(struct FAnchors AnchorData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameletWidget", "SetBackgroundWidgetAnchor");
    struct
    {
        struct FAnchors AnchorData;
    } Parms{};
    Parms.AnchorData = (struct FAnchors)AnchorData;
    this->ProcessEvent(Func, &Parms);
}

void UGameletWidget::SetBackgroundImage(struct FString ImagePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameletWidget", "SetBackgroundImage");
    struct
    {
        struct FString ImagePath;
    } Parms{};
    Parms.ImagePath = (struct FString)ImagePath;
    this->ProcessEvent(Func, &Parms);
}

struct TWeakObjectPtr<struct UPixUIWidget> UGameletWidget::GetPixUIWidget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameletWidget", "GetPixUIWidget");
    struct
    {
        struct TWeakObjectPtr<struct UPixUIWidget> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGameletWindow
void UGameletWindow::OnPxWidgetScriptStateInit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameletWindow", "OnPxWidgetScriptStateInit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGameletWindow::OnPxWidgetScriptStateDone()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameletWindow", "OnPxWidgetScriptStateDone");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGameletWindow::OnPxWidgetRequestOpen(struct FString URL, struct FString Name, struct FString Features, uint8_t bReplace)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameletWindow", "OnPxWidgetRequestOpen");
    struct
    {
        struct FString URL;
        struct FString Name;
        struct FString Features;
        uint8_t bReplace;
        uint8_t ReturnValue;
    } Parms{};
    Parms.URL = (struct FString)URL;
    Parms.Name = (struct FString)Name;
    Parms.Features = (struct FString)Features;
    Parms.bReplace = (uint8_t)bReplace;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGameletWindow::OnPxWidgetMessage(struct FString Msg)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameletWindow", "OnPxWidgetMessage");
    struct
    {
        struct FString Msg;
    } Parms{};
    Parms.Msg = (struct FString)Msg;
    this->ProcessEvent(Func, &Parms);
}

void UGameletWindow::OnPxWidgetLoaded(struct FString URL, int32_t ErrorCode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameletWindow", "OnPxWidgetLoaded");
    struct
    {
        struct FString URL;
        int32_t ErrorCode;
    } Parms{};
    Parms.URL = (struct FString)URL;
    Parms.ErrorCode = (int32_t)ErrorCode;
    this->ProcessEvent(Func, &Parms);
}

void UGameletWindow::OnPxWidgetInternalError(int32_t ErrorCode, struct FString ErrorMsg)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameletWindow", "OnPxWidgetInternalError");
    struct
    {
        int32_t ErrorCode;
        struct FString ErrorMsg;
    } Parms{};
    Parms.ErrorCode = (int32_t)ErrorCode;
    Parms.ErrorMsg = (struct FString)ErrorMsg;
    this->ProcessEvent(Func, &Parms);
}

void UGameletWindow::OnPxWidgetClose()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameletWindow", "OnPxWidgetClose");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
