#include "MFBaseModule.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UMFBaseServices
int32_t UMFBaseServices::ZipRecentDetailLogAsync(struct FDelegate InCallback, struct FString InZipName, int32_t LimitSize, int32_t MaxFileCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFBaseServices", "ZipRecentDetailLogAsync");
    struct
    {
        struct FDelegate InCallback;
        struct FString InZipName;
        int32_t LimitSize;
        int32_t MaxFileCount;
        int32_t ReturnValue;
    } Parms{};
    Parms.InCallback = (struct FDelegate)InCallback;
    Parms.InZipName = (struct FString)InZipName;
    Parms.LimitSize = (int32_t)LimitSize;
    Parms.MaxFileCount = (int32_t)MaxFileCount;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFBaseServices::ZipRecentDetailLog(struct FString InZipName, int32_t LimitSize, int32_t MaxFileCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFBaseServices", "ZipRecentDetailLog");
    struct
    {
        struct FString InZipName;
        int32_t LimitSize;
        int32_t MaxFileCount;
        int32_t ReturnValue;
    } Parms{};
    Parms.InZipName = (struct FString)InZipName;
    Parms.LimitSize = (int32_t)LimitSize;
    Parms.MaxFileCount = (int32_t)MaxFileCount;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFBaseServices::ZipLogFile()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFBaseServices", "ZipLogFile");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFBaseServices::ZipLogDirectoryAsync(struct FDelegate InCallback, struct FString InZipName, int32_t InCuttingBigFile, int32_t MaxFileCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFBaseServices", "ZipLogDirectoryAsync");
    struct
    {
        struct FDelegate InCallback;
        struct FString InZipName;
        int32_t InCuttingBigFile;
        int32_t MaxFileCount;
        int32_t ReturnValue;
    } Parms{};
    Parms.InCallback = (struct FDelegate)InCallback;
    Parms.InZipName = (struct FString)InZipName;
    Parms.InCuttingBigFile = (int32_t)InCuttingBigFile;
    Parms.MaxFileCount = (int32_t)MaxFileCount;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFBaseServices::ZipLogDirectory(struct FString InZipName, int32_t InCuttingBigFile, int32_t MaxFileCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFBaseServices", "ZipLogDirectory");
    struct
    {
        struct FString InZipName;
        int32_t InCuttingBigFile;
        int32_t MaxFileCount;
        int32_t ReturnValue;
    } Parms{};
    Parms.InZipName = (struct FString)InZipName;
    Parms.InCuttingBigFile = (int32_t)InCuttingBigFile;
    Parms.MaxFileCount = (int32_t)MaxFileCount;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFBaseServices::ZipFilesEx(struct FString InZipName, const struct TArray<struct FString>& InFiles, bool InAppendMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFBaseServices", "ZipFilesEx");
    struct
    {
        struct FString InZipName;
        struct TArray<struct FString> InFiles;
        bool InAppendMode;
        int32_t ReturnValue;
    } Parms{};
    Parms.InZipName = (struct FString)InZipName;
    Parms.InFiles = (struct TArray<struct FString>)InFiles;
    Parms.InAppendMode = (bool)InAppendMode;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFBaseServices::ZipFilesCompressionEx(struct FString InZipName, const struct TArray<struct FString>& InFiles, bool InAppendMode, bool IsCompression)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFBaseServices", "ZipFilesCompressionEx");
    struct
    {
        struct FString InZipName;
        struct TArray<struct FString> InFiles;
        bool InAppendMode;
        bool IsCompression;
        int32_t ReturnValue;
    } Parms{};
    Parms.InZipName = (struct FString)InZipName;
    Parms.InFiles = (struct TArray<struct FString>)InFiles;
    Parms.InAppendMode = (bool)InAppendMode;
    Parms.IsCompression = (bool)IsCompression;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFBaseServices::ZipFiles(struct FString InZipName, const struct TArray<struct FString>& InFiles, int32_t CuttingSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFBaseServices", "ZipFiles");
    struct
    {
        struct FString InZipName;
        struct TArray<struct FString> InFiles;
        int32_t CuttingSize;
        int32_t ReturnValue;
    } Parms{};
    Parms.InZipName = (struct FString)InZipName;
    Parms.InFiles = (struct TArray<struct FString>)InFiles;
    Parms.CuttingSize = (int32_t)CuttingSize;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFBaseServices::UnzipFiles(struct FString ZipFilePath, struct FString OutputDir)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFBaseServices", "UnzipFiles");
    struct
    {
        struct FString ZipFilePath;
        struct FString OutputDir;
        bool ReturnValue;
    } Parms{};
    Parms.ZipFilePath = (struct FString)ZipFilePath;
    Parms.OutputDir = (struct FString)OutputDir;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFBaseServices::SavePNGToDCIM_Android(struct FString InImagePath, struct FString InFolderName, struct FString InDisplayName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFBaseServices", "SavePNGToDCIM_Android");
    struct
    {
        struct FString InImagePath;
        struct FString InFolderName;
        struct FString InDisplayName;
        bool ReturnValue;
    } Parms{};
    Parms.InImagePath = (struct FString)InImagePath;
    Parms.InFolderName = (struct FString)InFolderName;
    Parms.InDisplayName = (struct FString)InDisplayName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFBaseServices::RestartApplication()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFBaseServices", "RestartApplication");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFBaseServices::OnZipLogFilesCompleted__DelegateSignature(struct FString InZipFileName, int32_t InRetValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFBaseServices", "OnZipLogFilesCompleted__DelegateSignature");
    struct
    {
        struct FString InZipFileName;
        int32_t InRetValue;
    } Parms{};
    Parms.InZipFileName = (struct FString)InZipFileName;
    Parms.InRetValue = (int32_t)InRetValue;
    this->ProcessEvent(Func, &Parms);
}

bool UMFBaseServices::MountPak(struct FString InPakFile, int32_t InOrder, struct FString InMountPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFBaseServices", "MountPak");
    struct
    {
        struct FString InPakFile;
        int32_t InOrder;
        struct FString InMountPoint;
        bool ReturnValue;
    } Parms{};
    Parms.InPakFile = (struct FString)InPakFile;
    Parms.InOrder = (int32_t)InOrder;
    Parms.InMountPoint = (struct FString)InMountPoint;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFBaseServices::IsUAGameDebugMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFBaseServices", "IsUAGameDebugMode");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFBaseServices::IsMuteAudio(bool IsRead, bool MuteAudio)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFBaseServices", "IsMuteAudio");
    struct
    {
        bool IsRead;
        bool MuteAudio;
        bool ReturnValue;
    } Parms{};
    Parms.IsRead = (bool)IsRead;
    Parms.MuteAudio = (bool)MuteAudio;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFBaseServices::IsEditorRuntime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFBaseServices", "IsEditorRuntime");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFBaseServices::IsEditor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFBaseServices", "IsEditor");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FIntPoint UMFBaseServices::GetScreenSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFBaseServices", "GetScreenSize");
    struct
    {
        struct FIntPoint ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFBaseServices::GetPublishedVersionType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFBaseServices", "GetPublishedVersionType");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFBaseServices::GetPlatform()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFBaseServices", "GetPlatform");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFBaseServices::GetNetModeByWorldContextObject(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFBaseServices", "GetNetModeByWorldContextObject");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFBaseServices::GetNetMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFBaseServices", "GetNetMode");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFBaseServices::GetLocalIPAddress()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFBaseServices", "GetLocalIPAddress");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGameUserSettings* UMFBaseServices::GetGameUserSettings()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFBaseServices", "GetGameUserSettings");
    struct
    {
        struct UGameUserSettings* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGameSceneType UMFBaseServices::GetGameSceneTypeByMapName(struct FString InMapName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFBaseServices", "GetGameSceneTypeByMapName");
    struct
    {
        struct FString InMapName;
        enum EGameSceneType ReturnValue;
    } Parms{};
    Parms.InMapName = (struct FString)InMapName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGameSceneType UMFBaseServices::GetGameSceneType(struct UWorld* InWorld)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFBaseServices", "GetGameSceneType");
    struct
    {
        struct UWorld* InWorld;
        enum EGameSceneType ReturnValue;
    } Parms{};
    Parms.InWorld = (struct UWorld*)InWorld;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EPlayGameMode UMFBaseServices::GetGameMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFBaseServices", "GetGameMode");
    struct
    {
        enum EPlayGameMode ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFBaseServices::GetGameMapName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFBaseServices", "GetGameMapName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFBaseServices::GetExecutablePath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFBaseServices", "GetExecutablePath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UEngine* UMFBaseServices::GetEngine()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFBaseServices", "GetEngine");
    struct
    {
        struct UEngine* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFBaseServices::GetDeviceModel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFBaseServices", "GetDeviceModel");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGameSceneType UMFBaseServices::GetCurrentGameSceneType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFBaseServices", "GetCurrentGameSceneType");
    struct
    {
        enum EGameSceneType ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFBaseServices::GetAppVersionDisplay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFBaseServices", "GetAppVersionDisplay");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFBaseServices::EncodeBase64(struct FString Source)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFBaseServices", "EncodeBase64");
    struct
    {
        struct FString Source;
        struct FString ReturnValue;
    } Parms{};
    Parms.Source = (struct FString)Source;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFBaseServices::DownloadVersionPakPackage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFBaseServices", "DownloadVersionPakPackage");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFBaseServices::DownloadLuaFixPackage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFBaseServices", "DownloadLuaFixPackage");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FString UMFBaseServices::DecodeBase64(struct FString Source)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFBaseServices", "DecodeBase64");
    struct
    {
        struct FString Source;
        struct FString ReturnValue;
    } Parms{};
    Parms.Source = (struct FString)Source;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFBaseServices::CreateProc(struct FString URL, struct FString Parms_)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFBaseServices", "CreateProc");
    struct
    {
        struct FString URL;
        struct FString Parms_;
    } Parms{};
    Parms.URL = (struct FString)URL;
    Parms.Parms_ = (struct FString)Parms_;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UMFDeviceConsole
void UMFDeviceConsole::InitDeviceConsoleConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFDeviceConsole", "InitDeviceConsoleConfig");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UMFSolutionQualityScalability
void UMFSolutionQualityScalability::InitQualitySettingConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFSolutionQualityScalability", "InitQualitySettingConfig");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UMFDeviceQualityScalability
void UMFDeviceQualityScalability::InitQualitySettingConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFDeviceQualityScalability", "InitQualitySettingConfig");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UMFMemoryScalability
void UMFMemoryScalability::SetMemoryScalabilityIndex(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFMemoryScalability", "SetMemoryScalabilityIndex");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFMemoryScalability::InitMemorySettingConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFMemoryScalability", "InitMemorySettingConfig");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int32_t UMFMemoryScalability::GetTotalMemoryInGB()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFMemoryScalability", "GetTotalMemoryInGB");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFMemoryScalability::GetIntValue(struct FString Key, int32_t DefaultValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFMemoryScalability", "GetIntValue");
    struct
    {
        struct FString Key;
        int32_t DefaultValue;
        int32_t ReturnValue;
    } Parms{};
    Parms.Key = (struct FString)Key;
    Parms.DefaultValue = (int32_t)DefaultValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFMemoryScalability::GetFloatValue(struct FString Key, float DefaultValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFMemoryScalability", "GetFloatValue");
    struct
    {
        struct FString Key;
        float DefaultValue;
        float ReturnValue;
    } Parms{};
    Parms.Key = (struct FString)Key;
    Parms.DefaultValue = (float)DefaultValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFMemoryScalability::ExecConsoleVarsInLobby()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFMemoryScalability", "ExecConsoleVarsInLobby");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFMemoryScalability::ExecConsoleVarsInBattle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFMemoryScalability", "ExecConsoleVarsInBattle");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UMFPhoneModelLimitation
void UMFPhoneModelLimitation::UpdateMobileQCCConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPhoneModelLimitation", "UpdateMobileQCCConfig");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFPhoneModelLimitation::SetUnknownDevice(bool bInUnknownDevice)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPhoneModelLimitation", "SetUnknownDevice");
    struct
    {
        bool bInUnknownDevice;
    } Parms{};
    Parms.bInUnknownDevice = (bool)bInUnknownDevice;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UMFPhoneModelLimitation::SetTargetDisplayRefreshRate(int32_t TargetFramerate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPhoneModelLimitation", "SetTargetDisplayRefreshRate");
    struct
    {
        int32_t TargetFramerate;
        bool ReturnValue;
    } Parms{};
    Parms.TargetFramerate = (int32_t)TargetFramerate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFPhoneModelLimitation::SetIsGPURangeMatchEnabled(bool bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPhoneModelLimitation", "SetIsGPURangeMatchEnabled");
    struct
    {
        bool bEnable;
    } Parms{};
    Parms.bEnable = (bool)bEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFPhoneModelLimitation::SetGPUJudgedMobileLevel(int32_t InGPULevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPhoneModelLimitation", "SetGPUJudgedMobileLevel");
    struct
    {
        int32_t InGPULevel;
    } Parms{};
    Parms.InGPULevel = (int32_t)InGPULevel;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFPhoneModelLimitation::SetCurrentMobileLevel(int32_t Level)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPhoneModelLimitation", "SetCurrentMobileLevel");
    struct
    {
        int32_t Level;
    } Parms{};
    Parms.Level = (int32_t)Level;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int32_t UMFPhoneModelLimitation::RawGetCurrentMobileLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPhoneModelLimitation", "RawGetCurrentMobileLevel");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFPhoneModelLimitation::NeedEnableAA()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPhoneModelLimitation", "NeedEnableAA");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFPhoneModelLimitation::IsYuenanClient()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPhoneModelLimitation", "IsYuenanClient");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFPhoneModelLimitation::IsXiaomiClient()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPhoneModelLimitation", "IsXiaomiClient");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFPhoneModelLimitation::IsVeryVeryLowDevice()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPhoneModelLimitation", "IsVeryVeryLowDevice");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFPhoneModelLimitation::IsVeryLowDevice()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPhoneModelLimitation", "IsVeryLowDevice");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFPhoneModelLimitation::IsUnknownMobileLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPhoneModelLimitation", "IsUnknownMobileLevel");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFPhoneModelLimitation::IsTaiwanClient()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPhoneModelLimitation", "IsTaiwanClient");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFPhoneModelLimitation::IsLowPowerMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPhoneModelLimitation", "IsLowPowerMode");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFPhoneModelLimitation::IsHuaweiClient()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPhoneModelLimitation", "IsHuaweiClient");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFPhoneModelLimitation::IsGlobalClient()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPhoneModelLimitation", "IsGlobalClient");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFPhoneModelLimitation::IsFrameRateLevelSupported(int32_t TargetFramerate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPhoneModelLimitation", "IsFrameRateLevelSupported");
    struct
    {
        int32_t TargetFramerate;
        bool ReturnValue;
    } Parms{};
    Parms.TargetFramerate = (int32_t)TargetFramerate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFPhoneModelLimitation::IsConfigLoaded()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPhoneModelLimitation", "IsConfigLoaded");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFPhoneModelLimitation::IsAndroidLite()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPhoneModelLimitation", "IsAndroidLite");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFPhoneModelLimitation::IOSSetUpFrameRateCalculator()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPhoneModelLimitation", "IOSSetUpFrameRateCalculator");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFPhoneModelLimitation::InitMobileQCCConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPhoneModelLimitation", "InitMobileQCCConfig");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FString UMFPhoneModelLimitation::GetModelName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPhoneModelLimitation", "GetModelName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFPhoneModelLimitation::GetMobileMaxFrameRate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPhoneModelLimitation", "GetMobileMaxFrameRate");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFPhoneModelLimitation::GetMobileLimition()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPhoneModelLimitation", "GetMobileLimition");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFPhoneModelLimitation::GetMobileDeviceLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPhoneModelLimitation", "GetMobileDeviceLevel");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFPhoneModelLimitation::GetMobileCurrentFrameRate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPhoneModelLimitation", "GetMobileCurrentFrameRate");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFPhoneModelLimitation::GetIsInMpeUse1cha1List()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPhoneModelLimitation", "GetIsInMpeUse1cha1List");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFPhoneModelLimitation::GetIsInList(struct FString ListName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPhoneModelLimitation", "GetIsInList");
    struct
    {
        struct FString ListName;
        bool ReturnValue;
    } Parms{};
    Parms.ListName = (struct FString)ListName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFPhoneModelLimitation::GetIsInHighFPSBlackList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPhoneModelLimitation", "GetIsInHighFPSBlackList");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFPhoneModelLimitation::GetIsInFPS90WhiteList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPhoneModelLimitation", "GetIsInFPS90WhiteList");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFPhoneModelLimitation::GetIsInFPS144WhiteList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPhoneModelLimitation", "GetIsInFPS144WhiteList");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFPhoneModelLimitation::GetIsInFPS120WhiteList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPhoneModelLimitation", "GetIsInFPS120WhiteList");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFPhoneModelLimitation::GetIsGPURangeMatchEnabled(bool bSet)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPhoneModelLimitation", "GetIsGPURangeMatchEnabled");
    struct
    {
        bool bSet;
        bool ReturnValue;
    } Parms{};
    Parms.bSet = (bool)bSet;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FIntPoint UMFPhoneModelLimitation::GetCurrentSceneResolution()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPhoneModelLimitation", "GetCurrentSceneResolution");
    struct
    {
        struct FIntPoint ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFPhoneModelLimitation::GetCurrentFPS()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPhoneModelLimitation", "GetCurrentFPS");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFPhoneModelLimitation::CheckRayTracingWhiteList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPhoneModelLimitation", "CheckRayTracingWhiteList");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFUObjectCheckTool
struct TMap<struct FString, struct FString> UMFUObjectCheckTool::CheckUObjectLeak(struct TArray<struct FString>& WhiteList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFUObjectCheckTool", "CheckUObjectLeak");
    struct
    {
        struct TArray<struct FString> WhiteList;
        struct TMap<struct FString, struct FString> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    WhiteList = Parms.WhiteList;
    return Parms.ReturnValue;
}

} // namespace SDK
