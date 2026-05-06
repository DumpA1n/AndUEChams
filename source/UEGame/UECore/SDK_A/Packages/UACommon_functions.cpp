#include "UACommon.hpp"
#include "AkAudio.hpp"
#include "Engine.hpp"
#include "GameplayTags.hpp"
#include "LevelSequence.hpp"
#include "SGFramework.hpp"
#include "SlateCore.hpp"
#include "UADataTableModule.hpp"
#include "UMG.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UAsyncTaskCopyFile
void UAsyncTaskCopyFile::CopyFileDelegate__DelegateSignature(struct FString TargetPath, bool InResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AsyncTaskCopyFile", "CopyFileDelegate__DelegateSignature");
    struct
    {
        struct FString TargetPath;
        bool InResult;
    } Parms{};
    Parms.TargetPath = (struct FString)TargetPath;
    Parms.InResult = (bool)InResult;
    this->ProcessEvent(Func, &Parms);
}

struct UAsyncTaskCopyFile* UAsyncTaskCopyFile::CopyFile(struct FString InSource, struct FString InDest, bool InPhysical)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AsyncTaskCopyFile", "CopyFile");
    struct
    {
        struct FString InSource;
        struct FString InDest;
        bool InPhysical;
        struct UAsyncTaskCopyFile* ReturnValue;
    } Parms{};
    Parms.InSource = (struct FString)InSource;
    Parms.InDest = (struct FString)InDest;
    Parms.InPhysical = (bool)InPhysical;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UAsyncTaskDownloadFile
bool UAsyncTaskDownloadFile::StartDownload()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AsyncTaskDownloadFile", "StartDownload");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAsyncTaskDownloadFile::SetFileTotalSize(int32_t InFileSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AsyncTaskDownloadFile", "SetFileTotalSize");
    struct
    {
        int32_t InFileSize;
    } Parms{};
    Parms.InFileSize = (int32_t)InFileSize;
    this->ProcessEvent(Func, &Parms);
}

bool UAsyncTaskDownloadFile::ResumeTask()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AsyncTaskDownloadFile", "ResumeTask");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAsyncTaskDownloadFile::RequestFileHead(bool InDownloadOnSucceed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AsyncTaskDownloadFile", "RequestFileHead");
    struct
    {
        bool InDownloadOnSucceed;
    } Parms{};
    Parms.InDownloadOnSucceed = (bool)InDownloadOnSucceed;
    this->ProcessEvent(Func, &Parms);
}

bool UAsyncTaskDownloadFile::PauseTask()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AsyncTaskDownloadFile", "PauseTask");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EDownloadFileState UAsyncTaskDownloadFile::GetTaskState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AsyncTaskDownloadFile", "GetTaskState");
    struct
    {
        enum EDownloadFileState ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAsyncTaskDownloadFile::GetLastHttpCode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AsyncTaskDownloadFile", "GetLastHttpCode");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UAsyncTaskDownloadFile::GetFileURL()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AsyncTaskDownloadFile", "GetFileURL");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAsyncTaskDownloadFile::GetFileTotalSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AsyncTaskDownloadFile", "GetFileTotalSize");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UAsyncTaskDownloadFile::GetFileName(bool bFullPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AsyncTaskDownloadFile", "GetFileName");
    struct
    {
        bool bFullPath;
        struct FString ReturnValue;
    } Parms{};
    Parms.bFullPath = (bool)bFullPath;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAsyncTaskDownloadFile::GetDownloadedSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AsyncTaskDownloadFile", "GetDownloadedSize");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAsyncTaskDownloadFile::GetCurrentSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AsyncTaskDownloadFile", "GetCurrentSize");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAsyncTaskDownloadFile::DownloadFileDelegate__DelegateSignature(struct UAsyncTaskDownloadFile* InObj, EDownloadFileState InEventID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AsyncTaskDownloadFile", "DownloadFileDelegate__DelegateSignature");
    struct
    {
        struct UAsyncTaskDownloadFile* InObj;
        enum EDownloadFileState InEventID;
    } Parms{};
    Parms.InObj = (struct UAsyncTaskDownloadFile*)InObj;
    Parms.InEventID = (enum EDownloadFileState)InEventID;
    this->ProcessEvent(Func, &Parms);
}

struct UAsyncTaskDownloadFile* UAsyncTaskDownloadFile::CreateDownloadFileTask(struct FString URL, struct FString FileDirectory, bool InOverride)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AsyncTaskDownloadFile", "CreateDownloadFileTask");
    struct
    {
        struct FString URL;
        struct FString FileDirectory;
        bool InOverride;
        struct UAsyncTaskDownloadFile* ReturnValue;
    } Parms{};
    Parms.URL = (struct FString)URL;
    Parms.FileDirectory = (struct FString)FileDirectory;
    Parms.InOverride = (bool)InOverride;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UAsyncTaskDownloadFile::CancelTask()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AsyncTaskDownloadFile", "CancelTask");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UBFLPlatformFile
bool UBFLPlatformFile::VerifyPackageAndRestore(struct FString PackageFilePath, struct FString RestoredFilePath, struct FString& OutActualHash, struct FString& ErrMsg)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "VerifyPackageAndRestore");
    struct
    {
        struct FString PackageFilePath;
        struct FString RestoredFilePath;
        struct FString OutActualHash;
        struct FString ErrMsg;
        bool ReturnValue;
    } Parms{};
    Parms.PackageFilePath = (struct FString)PackageFilePath;
    Parms.RestoredFilePath = (struct FString)RestoredFilePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutActualHash = Parms.OutActualHash;
    ErrMsg = Parms.ErrMsg;
    return Parms.ReturnValue;
}

bool UBFLPlatformFile::UnmountPak(struct FString InPakFile)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "UnmountPak");
    struct
    {
        struct FString InPakFile;
        bool ReturnValue;
    } Parms{};
    Parms.InPakFile = (struct FString)InPakFile;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UBFLPlatformFile::StatDirectorySize_Physical(struct FString InDirectory, bool InWithSubDir, struct FString InExtName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "StatDirectorySize_Physical");
    struct
    {
        struct FString InDirectory;
        bool InWithSubDir;
        struct FString InExtName;
        int64_t ReturnValue;
    } Parms{};
    Parms.InDirectory = (struct FString)InDirectory;
    Parms.InWithSubDir = (bool)InWithSubDir;
    Parms.InExtName = (struct FString)InExtName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UBFLPlatformFile::StatDirectorySize(struct FString InDirectory, bool InWithSubDir, struct FString InExtName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "StatDirectorySize");
    struct
    {
        struct FString InDirectory;
        bool InWithSubDir;
        struct FString InExtName;
        int64_t ReturnValue;
    } Parms{};
    Parms.InDirectory = (struct FString)InDirectory;
    Parms.InWithSubDir = (bool)InWithSubDir;
    Parms.InExtName = (struct FString)InExtName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UBFLPlatformFile::SortStringArray(const struct TArray<struct FString>& InVal, bool InReversed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "SortStringArray");
    struct
    {
        struct TArray<struct FString> InVal;
        bool InReversed;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.InVal = (struct TArray<struct FString>)InVal;
    Parms.InReversed = (bool)InReversed;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBFLPlatformFile::SetPakIndexSettings(bool InKeepFullDirectory, bool InValidatePruning, bool InDelayPruning, bool InWritePathHashIndex, bool InWriteFullDirectoryIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "SetPakIndexSettings");
    struct
    {
        bool InKeepFullDirectory;
        bool InValidatePruning;
        bool InDelayPruning;
        bool InWritePathHashIndex;
        bool InWriteFullDirectoryIndex;
    } Parms{};
    Parms.InKeepFullDirectory = (bool)InKeepFullDirectory;
    Parms.InValidatePruning = (bool)InValidatePruning;
    Parms.InDelayPruning = (bool)InDelayPruning;
    Parms.InWritePathHashIndex = (bool)InWritePathHashIndex;
    Parms.InWriteFullDirectoryIndex = (bool)InWriteFullDirectoryIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UBFLPlatformFile::SaveStringToFile(struct FString inString, struct FString InFilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "SaveStringToFile");
    struct
    {
        struct FString inString;
        struct FString InFilePath;
        bool ReturnValue;
    } Parms{};
    Parms.inString = (struct FString)inString;
    Parms.InFilePath = (struct FString)InFilePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UBFLPlatformFile::ReloadAssetRegistry()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "ReloadAssetRegistry");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBFLPlatformFile::RedirectStderrFile(int32_t Step)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "RedirectStderrFile");
    struct
    {
        int32_t Step;
    } Parms{};
    Parms.Step = (int32_t)Step;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UBFLPlatformFile::MoveFile(struct FString InSourceFile, struct FString InDestFile)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "MoveFile");
    struct
    {
        struct FString InSourceFile;
        struct FString InDestFile;
        bool ReturnValue;
    } Parms{};
    Parms.InSourceFile = (struct FString)InSourceFile;
    Parms.InDestFile = (struct FString)InDestFile;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UBFLPlatformFile::MountPak(struct FString InPakFile, int32_t InOrder, struct FString InMountPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "MountPak");
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

struct TArray<struct FString> UBFLPlatformFile::MergeStringArrays(const struct TArray<struct FString>& Array1, const struct TArray<struct FString>& Array2)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "MergeStringArrays");
    struct
    {
        struct TArray<struct FString> Array1;
        struct TArray<struct FString> Array2;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.Array1 = (struct TArray<struct FString>)Array1;
    Parms.Array2 = (struct TArray<struct FString>)Array2;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UBFLPlatformFile::LoadFileToStringArray(struct FString InFilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "LoadFileToStringArray");
    struct
    {
        struct FString InFilePath;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.InFilePath = (struct FString)InFilePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UBFLPlatformFile::LoadFileToString_Physical(struct FString InFilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "LoadFileToString_Physical");
    struct
    {
        struct FString InFilePath;
        struct FString ReturnValue;
    } Parms{};
    Parms.InFilePath = (struct FString)InFilePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UBFLPlatformFile::LoadFileToString(struct FString InFilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "LoadFileToString");
    struct
    {
        struct FString InFilePath;
        struct FString ReturnValue;
    } Parms{};
    Parms.InFilePath = (struct FString)InFilePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UBFLPlatformFile::GetStringFromIni(struct FString InSection, struct FString InKey, struct FString InIniName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "GetStringFromIni");
    struct
    {
        struct FString InSection;
        struct FString InKey;
        struct FString InIniName;
        struct FString ReturnValue;
    } Parms{};
    Parms.InSection = (struct FString)InSection;
    Parms.InKey = (struct FString)InKey;
    Parms.InIniName = (struct FString)InIniName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UBFLPlatformFile::GetStringArrayFromIni(struct FString InSection, struct FString InKey, struct FString InIniName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "GetStringArrayFromIni");
    struct
    {
        struct FString InSection;
        struct FString InKey;
        struct FString InIniName;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.InSection = (struct FString)InSection;
    Parms.InKey = (struct FString)InKey;
    Parms.InIniName = (struct FString)InIniName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UBFLPlatformFile::GetShaderProgramBinaryPath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "GetShaderProgramBinaryPath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UBFLPlatformFile::GetProjectPathForExternalAppForWrite()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "GetProjectPathForExternalAppForWrite");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UBFLPlatformFile::GetPath(struct FString InFilename)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "GetPath");
    struct
    {
        struct FString InFilename;
        struct FString ReturnValue;
    } Parms{};
    Parms.InFilename = (struct FString)InFilename;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UBFLPlatformFile::GetMountedPakFilenames()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "GetMountedPakFilenames");
    struct
    {
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UBFLPlatformFile::GetIntFromIni(struct FString InSection, struct FString InKey, struct FString InIniName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "GetIntFromIni");
    struct
    {
        struct FString InSection;
        struct FString InKey;
        struct FString InIniName;
        int32_t ReturnValue;
    } Parms{};
    Parms.InSection = (struct FString)InSection;
    Parms.InKey = (struct FString)InKey;
    Parms.InIniName = (struct FString)InIniName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UBFLPlatformFile::GetInstalledAPKPath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "GetInstalledAPKPath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UBFLPlatformFile::GetGraphicsRHI()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "GetGraphicsRHI");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UBFLPlatformFile::GetGlobalIniFlePath(struct FString InIniName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "GetGlobalIniFlePath");
    struct
    {
        struct FString InIniName;
        struct FString ReturnValue;
    } Parms{};
    Parms.InIniName = (struct FString)InIniName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UBFLPlatformFile::GetFileBaseName(struct FString InFilename, bool InWithExt)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "GetFileBaseName");
    struct
    {
        struct FString InFilename;
        bool InWithExt;
        struct FString ReturnValue;
    } Parms{};
    Parms.InFilename = (struct FString)InFilename;
    Parms.InWithExt = (bool)InWithExt;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UBFLPlatformFile::GetDiskFreeSpace()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "GetDiskFreeSpace");
    struct
    {
        int64_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UBFLPlatformFile::GenerateVerifiedPackage(struct FString OriginalFilePath, struct FString PackageFilePath, struct FString& OutActualHash)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "GenerateVerifiedPackage");
    struct
    {
        struct FString OriginalFilePath;
        struct FString PackageFilePath;
        struct FString OutActualHash;
        bool ReturnValue;
    } Parms{};
    Parms.OriginalFilePath = (struct FString)OriginalFilePath;
    Parms.PackageFilePath = (struct FString)PackageFilePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutActualHash = Parms.OutActualHash;
    return Parms.ReturnValue;
}

struct TArray<struct FString> UBFLPlatformFile::FindFiles_Physical(struct FString InDirectory, struct FString InExtName, bool IncludeSubDir)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "FindFiles_Physical");
    struct
    {
        struct FString InDirectory;
        struct FString InExtName;
        bool IncludeSubDir;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.InDirectory = (struct FString)InDirectory;
    Parms.InExtName = (struct FString)InExtName;
    Parms.IncludeSubDir = (bool)IncludeSubDir;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UBFLPlatformFile::FindFiles(struct FString InDirectory, struct FString InExtName, bool IncludeSubDir)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "FindFiles");
    struct
    {
        struct FString InDirectory;
        struct FString InExtName;
        bool IncludeSubDir;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.InDirectory = (struct FString)InDirectory;
    Parms.InExtName = (struct FString)InExtName;
    Parms.IncludeSubDir = (bool)IncludeSubDir;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UBFLPlatformFile::FileSize_Physical(struct FString InFilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "FileSize_Physical");
    struct
    {
        struct FString InFilePath;
        int64_t ReturnValue;
    } Parms{};
    Parms.InFilePath = (struct FString)InFilePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UBFLPlatformFile::FileSize(struct FString InFilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "FileSize");
    struct
    {
        struct FString InFilePath;
        int64_t ReturnValue;
    } Parms{};
    Parms.InFilePath = (struct FString)InFilePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UBFLPlatformFile::FileExists_Physical(struct FString InFilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "FileExists_Physical");
    struct
    {
        struct FString InFilePath;
        bool ReturnValue;
    } Parms{};
    Parms.InFilePath = (struct FString)InFilePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UBFLPlatformFile::FileExists(struct FString InFilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "FileExists");
    struct
    {
        struct FString InFilePath;
        bool ReturnValue;
    } Parms{};
    Parms.InFilePath = (struct FString)InFilePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBFLPlatformFile::ExcutePaksOptimizeMem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "ExcutePaksOptimizeMem");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct TArray<struct FString> UBFLPlatformFile::DumpIni(struct FString InIniName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "DumpIni");
    struct
    {
        struct FString InIniName;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.InIniName = (struct FString)InIniName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UBFLPlatformFile::DirectoryExists_Physical(struct FString InDirectory)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "DirectoryExists_Physical");
    struct
    {
        struct FString InDirectory;
        bool ReturnValue;
    } Parms{};
    Parms.InDirectory = (struct FString)InDirectory;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UBFLPlatformFile::DirectoryExists(struct FString InDirectory)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "DirectoryExists");
    struct
    {
        struct FString InDirectory;
        bool ReturnValue;
    } Parms{};
    Parms.InDirectory = (struct FString)InDirectory;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UBFLPlatformFile::DeleteFilesbyType(struct FString InDir, struct FString InType, bool InIncludeSub)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "DeleteFilesbyType");
    struct
    {
        struct FString InDir;
        struct FString InType;
        bool InIncludeSub;
        int32_t ReturnValue;
    } Parms{};
    Parms.InDir = (struct FString)InDir;
    Parms.InType = (struct FString)InType;
    Parms.InIncludeSub = (bool)InIncludeSub;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UBFLPlatformFile::DeleteFile(struct FString InFilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "DeleteFile");
    struct
    {
        struct FString InFilePath;
        bool ReturnValue;
    } Parms{};
    Parms.InFilePath = (struct FString)InFilePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UBFLPlatformFile::DeleteDirectoryTree(struct FString InDirectory)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "DeleteDirectoryTree");
    struct
    {
        struct FString InDirectory;
        bool ReturnValue;
    } Parms{};
    Parms.InDirectory = (struct FString)InDirectory;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UBFLPlatformFile::DeleteDirectory(struct FString InDirectory)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "DeleteDirectory");
    struct
    {
        struct FString InDirectory;
        bool ReturnValue;
    } Parms{};
    Parms.InDirectory = (struct FString)InDirectory;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UBFLPlatformFile::CreateDirectoryTree(struct FString InDirectory)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "CreateDirectoryTree");
    struct
    {
        struct FString InDirectory;
        bool ReturnValue;
    } Parms{};
    Parms.InDirectory = (struct FString)InDirectory;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UBFLPlatformFile::CreateDirectory(struct FString InInDirectory)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "CreateDirectory");
    struct
    {
        struct FString InInDirectory;
        bool ReturnValue;
    } Parms{};
    Parms.InInDirectory = (struct FString)InInDirectory;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UBFLPlatformFile::CopyFile_Physical(struct FString InSourceFile, struct FString InDestFile)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "CopyFile_Physical");
    struct
    {
        struct FString InSourceFile;
        struct FString InDestFile;
        bool ReturnValue;
    } Parms{};
    Parms.InSourceFile = (struct FString)InSourceFile;
    Parms.InDestFile = (struct FString)InDestFile;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UBFLPlatformFile::CopyFile(struct FString InSourceFile, struct FString InDestFile)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "CopyFile");
    struct
    {
        struct FString InSourceFile;
        struct FString InDestFile;
        bool ReturnValue;
    } Parms{};
    Parms.InSourceFile = (struct FString)InSourceFile;
    Parms.InDestFile = (struct FString)InDestFile;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UBFLPlatformFile::ComputeStringMD5(struct FString inString, bool InLowerResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "ComputeStringMD5");
    struct
    {
        struct FString inString;
        bool InLowerResult;
        struct FString ReturnValue;
    } Parms{};
    Parms.inString = (struct FString)inString;
    Parms.InLowerResult = (bool)InLowerResult;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UBFLPlatformFile::CheckAndroidRooted()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BFLPlatformFile", "CheckAndroidRooted");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UHttpHelper
int32_t UHttpHelper::ProcessRequest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HttpHelper", "ProcessRequest");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UHttpHelper::HttpHelperDelegate__DelegateSignature(struct UHttpHelper* InObj, int32_t InHttpCode, struct FString InContent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HttpHelper", "HttpHelperDelegate__DelegateSignature");
    struct
    {
        struct UHttpHelper* InObj;
        int32_t InHttpCode;
        struct FString InContent;
    } Parms{};
    Parms.InObj = (struct UHttpHelper*)InObj;
    Parms.InHttpCode = (int32_t)InHttpCode;
    Parms.InContent = (struct FString)InContent;
    this->ProcessEvent(Func, &Parms);
}

struct FString UHttpHelper::HashHmac(struct FString SignatureString, struct FString SecretKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HttpHelper", "HashHmac");
    struct
    {
        struct FString SignatureString;
        struct FString SecretKey;
        struct FString ReturnValue;
    } Parms{};
    Parms.SignatureString = (struct FString)SignatureString;
    Parms.SecretKey = (struct FString)SecretKey;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UHttpHelper::CreateRequest(struct FString InVerb, struct FString InURL, const struct TMap<struct FString, struct FString>& InHeader, struct FString InContent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HttpHelper", "CreateRequest");
    struct
    {
        struct FString InVerb;
        struct FString InURL;
        struct TMap<struct FString, struct FString> InHeader;
        struct FString InContent;
        int32_t ReturnValue;
    } Parms{};
    Parms.InVerb = (struct FString)InVerb;
    Parms.InURL = (struct FString)InURL;
    Parms.InHeader = (struct TMap<struct FString, struct FString>)InHeader;
    Parms.InContent = (struct FString)InContent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UHttpHelper::CancelRequest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HttpHelper", "CancelRequest");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UHttpTask
void UHttpTask::StartSuperPlayerRedPointHttpGetTask(struct FString PipelineUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HttpTask", "StartSuperPlayerRedPointHttpGetTask");
    struct
    {
        struct FString PipelineUrl;
    } Parms{};
    Parms.PipelineUrl = (struct FString)PipelineUrl;
    this->ProcessEvent(Func, &Parms);
}

void UHttpTask::StartHttpGetTask(struct FString PipelineUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HttpTask", "StartHttpGetTask");
    struct
    {
        struct FString PipelineUrl;
    } Parms{};
    Parms.PipelineUrl = (struct FString)PipelineUrl;
    this->ProcessEvent(Func, &Parms);
}

void UHttpTask::StartDevopsTask(struct FString PipelineUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HttpTask", "StartDevopsTask");
    struct
    {
        struct FString PipelineUrl;
    } Parms{};
    Parms.PipelineUrl = (struct FString)PipelineUrl;
    this->ProcessEvent(Func, &Parms);
}

void UHttpTask::StartCppvmDevopsTask(struct FString PipelineUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HttpTask", "StartCppvmDevopsTask");
    struct
    {
        struct FString PipelineUrl;
    } Parms{};
    Parms.PipelineUrl = (struct FString)PipelineUrl;
    this->ProcessEvent(Func, &Parms);
}

void UHttpTask::SendZip(struct FString NotifyName, struct FString CosPath, struct FString FilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HttpTask", "SendZip");
    struct
    {
        struct FString NotifyName;
        struct FString CosPath;
        struct FString FilePath;
    } Parms{};
    Parms.NotifyName = (struct FString)NotifyName;
    Parms.CosPath = (struct FString)CosPath;
    Parms.FilePath = (struct FString)FilePath;
    this->ProcessEvent(Func, &Parms);
}

void UHttpTask::SendScreenTask(struct FString NotifyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HttpTask", "SendScreenTask");
    struct
    {
        struct FString NotifyName;
    } Parms{};
    Parms.NotifyName = (struct FString)NotifyName;
    this->ProcessEvent(Func, &Parms);
}

void UHttpTask::SendScreenExtranetTask(struct FString NotifyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HttpTask", "SendScreenExtranetTask");
    struct
    {
        struct FString NotifyName;
    } Parms{};
    Parms.NotifyName = (struct FString)NotifyName;
    this->ProcessEvent(Func, &Parms);
}

void UHttpTask::SendReplayTask(struct FString ZipName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HttpTask", "SendReplayTask");
    struct
    {
        struct FString ZipName;
    } Parms{};
    Parms.ZipName = (struct FString)ZipName;
    this->ProcessEvent(Func, &Parms);
}

void UHttpTask::SendProfileStat(struct FString NotifyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HttpTask", "SendProfileStat");
    struct
    {
        struct FString NotifyName;
    } Parms{};
    Parms.NotifyName = (struct FString)NotifyName;
    this->ProcessEvent(Func, &Parms);
}

void UHttpTask::SendPandora2(struct FString NotifyName, struct FString CosPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HttpTask", "SendPandora2");
    struct
    {
        struct FString NotifyName;
        struct FString CosPath;
    } Parms{};
    Parms.NotifyName = (struct FString)NotifyName;
    Parms.CosPath = (struct FString)CosPath;
    this->ProcessEvent(Func, &Parms);
}

void UHttpTask::SendPandora(struct FString NotifyName, struct FString CosPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HttpTask", "SendPandora");
    struct
    {
        struct FString NotifyName;
        struct FString CosPath;
    } Parms{};
    Parms.NotifyName = (struct FString)NotifyName;
    Parms.CosPath = (struct FString)CosPath;
    this->ProcessEvent(Func, &Parms);
}

void UHttpTask::SendMemReport(struct FString NotifyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HttpTask", "SendMemReport");
    struct
    {
        struct FString NotifyName;
    } Parms{};
    Parms.NotifyName = (struct FString)NotifyName;
    this->ProcessEvent(Func, &Parms);
}

void UHttpTask::SendLogTask(struct FString NotifyName, struct FString URL, struct FString LogName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HttpTask", "SendLogTask");
    struct
    {
        struct FString NotifyName;
        struct FString URL;
        struct FString LogName;
    } Parms{};
    Parms.NotifyName = (struct FString)NotifyName;
    Parms.URL = (struct FString)URL;
    Parms.LogName = (struct FString)LogName;
    this->ProcessEvent(Func, &Parms);
}

void UHttpTask::SendLogReportLoginError(struct FString NotifyName, struct FString URL, struct FString LogName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HttpTask", "SendLogReportLoginError");
    struct
    {
        struct FString NotifyName;
        struct FString URL;
        struct FString LogName;
    } Parms{};
    Parms.NotifyName = (struct FString)NotifyName;
    Parms.URL = (struct FString)URL;
    Parms.LogName = (struct FString)LogName;
    this->ProcessEvent(Func, &Parms);
}

void UHttpTask::SendLogExtranetTask(struct FString NotifyName, struct FString CosPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HttpTask", "SendLogExtranetTask");
    struct
    {
        struct FString NotifyName;
        struct FString CosPath;
    } Parms{};
    Parms.NotifyName = (struct FString)NotifyName;
    Parms.CosPath = (struct FString)CosPath;
    this->ProcessEvent(Func, &Parms);
}

void UHttpTask::SendGCloudLogTask(struct FString NotifyName, struct FString URL, struct FString LogName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HttpTask", "SendGCloudLogTask");
    struct
    {
        struct FString NotifyName;
        struct FString URL;
        struct FString LogName;
    } Parms{};
    Parms.NotifyName = (struct FString)NotifyName;
    Parms.URL = (struct FString)URL;
    Parms.LogName = (struct FString)LogName;
    this->ProcessEvent(Func, &Parms);
}

void UHttpTask::SendFile(struct FString NotifyName, struct FString CosPath, struct FString FilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HttpTask", "SendFile");
    struct
    {
        struct FString NotifyName;
        struct FString CosPath;
        struct FString FilePath;
    } Parms{};
    Parms.NotifyName = (struct FString)NotifyName;
    Parms.CosPath = (struct FString)CosPath;
    Parms.FilePath = (struct FString)FilePath;
    this->ProcessEvent(Func, &Parms);
}

bool UHttpTask::HttpUpLoadFileWithParams(struct FString URL, struct FString FilePath, struct TMap<struct FString, struct FString> Params)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HttpTask", "HttpUpLoadFileWithParams");
    struct
    {
        struct FString URL;
        struct FString FilePath;
        struct TMap<struct FString, struct FString> Params;
        bool ReturnValue;
    } Parms{};
    Parms.URL = (struct FString)URL;
    Parms.FilePath = (struct FString)FilePath;
    Parms.Params = (struct TMap<struct FString, struct FString>)Params;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UHttpTask::HttpUpLoadDelegate__DelegateSignature(struct FString RspContent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HttpTask", "HttpUpLoadDelegate__DelegateSignature");
    struct
    {
        struct FString RspContent;
    } Parms{};
    Parms.RspContent = (struct FString)RspContent;
    this->ProcessEvent(Func, &Parms);
}

void UHttpTask::HttpPostRequest(struct FString URL, struct FString StrContent, struct FString AuthString)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HttpTask", "HttpPostRequest");
    struct
    {
        struct FString URL;
        struct FString StrContent;
        struct FString AuthString;
    } Parms{};
    Parms.URL = (struct FString)URL;
    Parms.StrContent = (struct FString)StrContent;
    Parms.AuthString = (struct FString)AuthString;
    this->ProcessEvent(Func, &Parms);
}

void UHttpTask::HttpPostLandun(struct FString URL)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HttpTask", "HttpPostLandun");
    struct
    {
        struct FString URL;
    } Parms{};
    Parms.URL = (struct FString)URL;
    this->ProcessEvent(Func, &Parms);
}

void UHttpTask::HttpDownLoadLuaFile(struct FString NotifyName, bool bFirstRequest)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HttpTask", "HttpDownLoadLuaFile");
    struct
    {
        struct FString NotifyName;
        bool bFirstRequest;
    } Parms{};
    Parms.NotifyName = (struct FString)NotifyName;
    Parms.bFirstRequest = (bool)bFirstRequest;
    this->ProcessEvent(Func, &Parms);
}

void UHttpTask::HttpDownLoadDebugFile(struct FString NotifyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HttpTask", "HttpDownLoadDebugFile");
    struct
    {
        struct FString NotifyName;
    } Parms{};
    Parms.NotifyName = (struct FString)NotifyName;
    this->ProcessEvent(Func, &Parms);
}

void UHttpTask::GetThirdPartyChannelsFriendList(struct FString InputChannelid, struct FString GameId, struct FString Os, struct FString Token, struct FString Openid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HttpTask", "GetThirdPartyChannelsFriendList");
    struct
    {
        struct FString InputChannelid;
        struct FString GameId;
        struct FString Os;
        struct FString Token;
        struct FString Openid;
    } Parms{};
    Parms.InputChannelid = (struct FString)InputChannelid;
    Parms.GameId = (struct FString)GameId;
    Parms.Os = (struct FString)Os;
    Parms.Token = (struct FString)Token;
    Parms.Openid = (struct FString)Openid;
    this->ProcessEvent(Func, &Parms);
}

struct FString UHttpTask::GetSaveLogDir()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HttpTask", "GetSaveLogDir");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UHttpTask* UHttpTask::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HttpTask", "Get");
    struct
    {
        struct UHttpTask* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UHttpTask::DownloadRTXPakPackage(struct FString RTX)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HttpTask", "DownloadRTXPakPackage");
    struct
    {
        struct FString RTX;
    } Parms{};
    Parms.RTX = (struct FString)RTX;
    this->ProcessEvent(Func, &Parms);
}

void UHttpTask::CheckWxCmmunityStatus(struct FString PipelineUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HttpTask", "CheckWxCmmunityStatus");
    struct
    {
        struct FString PipelineUrl;
    } Parms{};
    Parms.PipelineUrl = (struct FString)PipelineUrl;
    this->ProcessEvent(Func, &Parms);
}

// UImageLoader
void UImageLoader::Pause(bool bFlag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImageLoader", "Pause");
    struct
    {
        bool bFlag;
    } Parms{};
    Parms.bFlag = (bool)bFlag;
    this->ProcessEvent(Func, &Parms);
}

void UImageLoader::OnImageLoadFailed__DelegateSignature(int32_t SerialId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImageLoader", "OnImageLoadFailed__DelegateSignature");
    struct
    {
        int32_t SerialId;
    } Parms{};
    Parms.SerialId = (int32_t)SerialId;
    this->ProcessEvent(Func, &Parms);
}

void UImageLoader::OnImageLoadCompleted__DelegateSignature(struct UTexture2DDynamic* Texture, int32_t SerialId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImageLoader", "OnImageLoadCompleted__DelegateSignature");
    struct
    {
        struct UTexture2DDynamic* Texture;
        int32_t SerialId;
    } Parms{};
    Parms.Texture = (struct UTexture2DDynamic*)Texture;
    Parms.SerialId = (int32_t)SerialId;
    this->ProcessEvent(Func, &Parms);
}

void UImageLoader::LoadLocalImageWithWrapperAsync(bool IsCompressInput, int32_t Width, int32_t Height)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImageLoader", "LoadLocalImageWithWrapperAsync");
    struct
    {
        bool IsCompressInput;
        int32_t Width;
        int32_t Height;
    } Parms{};
    Parms.IsCompressInput = (bool)IsCompressInput;
    Parms.Width = (int32_t)Width;
    Parms.Height = (int32_t)Height;
    this->ProcessEvent(Func, &Parms);
}

void UImageLoader::LoadImageAsync(struct FString ImagePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImageLoader", "LoadImageAsync");
    struct
    {
        struct FString ImagePath;
    } Parms{};
    Parms.ImagePath = (struct FString)ImagePath;
    this->ProcessEvent(Func, &Parms);
}

struct UImageLoader* UImageLoader::CreateImageLoader()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ImageLoader", "CreateImageLoader");
    struct
    {
        struct UImageLoader* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UImageLoader::ClearImageLoaderArray()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ImageLoader", "ClearImageLoaderArray");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UImageLoader::Clear()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImageLoader", "Clear");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UImageWrapperLoader
void UImageWrapperLoader::OnImageLoadFailed__DelegateSignature(int32_t SerialId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImageWrapperLoader", "OnImageLoadFailed__DelegateSignature");
    struct
    {
        int32_t SerialId;
    } Parms{};
    Parms.SerialId = (int32_t)SerialId;
    this->ProcessEvent(Func, &Parms);
}

void UImageWrapperLoader::OnImageLoadCompleted__DelegateSignature(int32_t Width, int32_t Height, struct UImageLoader* ImageLoader, int32_t SerialId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImageWrapperLoader", "OnImageLoadCompleted__DelegateSignature");
    struct
    {
        int32_t Width;
        int32_t Height;
        struct UImageLoader* ImageLoader;
        int32_t SerialId;
    } Parms{};
    Parms.Width = (int32_t)Width;
    Parms.Height = (int32_t)Height;
    Parms.ImageLoader = (struct UImageLoader*)ImageLoader;
    Parms.SerialId = (int32_t)SerialId;
    this->ProcessEvent(Func, &Parms);
}

void UImageWrapperLoader::LoadImageWrapperAsync(struct FString ImagePath, int32_t SerialId, bool IsCdn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImageWrapperLoader", "LoadImageWrapperAsync");
    struct
    {
        struct FString ImagePath;
        int32_t SerialId;
        bool IsCdn;
    } Parms{};
    Parms.ImagePath = (struct FString)ImagePath;
    Parms.SerialId = (int32_t)SerialId;
    Parms.IsCdn = (bool)IsCdn;
    this->ProcessEvent(Func, &Parms);
}

struct UImageWrapperLoader* UImageWrapperLoader::CreateImageWrapperLoader()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ImageWrapperLoader", "CreateImageWrapperLoader");
    struct
    {
        struct UImageWrapperLoader* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UImageWrapperLoader::CompressImage(struct FString SourceImagePath, struct FString DestinationImagePath, int32_t Quality)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ImageWrapperLoader", "CompressImage");
    struct
    {
        struct FString SourceImagePath;
        struct FString DestinationImagePath;
        int32_t Quality;
        bool ReturnValue;
    } Parms{};
    Parms.SourceImagePath = (struct FString)SourceImagePath;
    Parms.DestinationImagePath = (struct FString)DestinationImagePath;
    Parms.Quality = (int32_t)Quality;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UImageWrapperLoader::ClearImageWrapperLoaderArray()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ImageWrapperLoader", "ClearImageWrapperLoaderArray");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UImageWrapperLoader::Clear()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImageWrapperLoader", "Clear");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ULaunchHelper
bool ULaunchHelper::ShouldShowRequestPermissionRationale(struct FString InPermissionName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LaunchHelper", "ShouldShowRequestPermissionRationale");
    struct
    {
        struct FString InPermissionName;
        bool ReturnValue;
    } Parms{};
    Parms.InPermissionName = (struct FString)InPermissionName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString ULaunchHelper::LaunchURL(struct FString InURL, struct FString InParam)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LaunchHelper", "LaunchURL");
    struct
    {
        struct FString InURL;
        struct FString InParam;
        struct FString ReturnValue;
    } Parms{};
    Parms.InURL = (struct FString)InURL;
    Parms.InParam = (struct FString)InParam;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool ULaunchHelper::LaunchAndroidPackage(struct FString InPackageName, struct FString InParamName, struct FString InParamValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LaunchHelper", "LaunchAndroidPackage");
    struct
    {
        struct FString InPackageName;
        struct FString InParamName;
        struct FString InParamValue;
        bool ReturnValue;
    } Parms{};
    Parms.InPackageName = (struct FString)InPackageName;
    Parms.InParamName = (struct FString)InParamName;
    Parms.InParamValue = (struct FString)InParamValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool ULaunchHelper::IsAndroidPackageInstalled(struct FString InPackageName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LaunchHelper", "IsAndroidPackageInstalled");
    struct
    {
        struct FString InPackageName;
        bool ReturnValue;
    } Parms{};
    Parms.InPackageName = (struct FString)InPackageName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool ULaunchHelper::GotoAndroidAppStore(struct FString InStorePkgName, struct FString InUri)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LaunchHelper", "GotoAndroidAppStore");
    struct
    {
        struct FString InStorePkgName;
        struct FString InUri;
        bool ReturnValue;
    } Parms{};
    Parms.InStorePkgName = (struct FString)InStorePkgName;
    Parms.InUri = (struct FString)InUri;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString ULaunchHelper::GetLaunchParam(struct FString InKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LaunchHelper", "GetLaunchParam");
    struct
    {
        struct FString InKey;
        struct FString ReturnValue;
    } Parms{};
    Parms.InKey = (struct FString)InKey;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ULoopedPanel
void ULoopedPanel::SyncProperties()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoopedPanel", "SyncProperties");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULoopedPanel::OnScrollEvent__DelegateSignature(float InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoopedPanel", "OnScrollEvent__DelegateSignature");
    struct
    {
        float InValue;
    } Parms{};
    Parms.InValue = (float)InValue;
    this->ProcessEvent(Func, &Parms);
}

void ULoopedPanel::OnAnimEndEvent__DelegateSignature(int32_t InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoopedPanel", "OnAnimEndEvent__DelegateSignature");
    struct
    {
        int32_t InValue;
    } Parms{};
    Parms.InValue = (int32_t)InValue;
    this->ProcessEvent(Func, &Parms);
}

void ULoopedPanel::MoveToPrevioudElement(bool bUseAnim)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoopedPanel", "MoveToPrevioudElement");
    struct
    {
        bool bUseAnim;
    } Parms{};
    Parms.bUseAnim = (bool)bUseAnim;
    this->ProcessEvent(Func, &Parms);
}

void ULoopedPanel::MoveToNextElement(bool bUseAnim)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoopedPanel", "MoveToNextElement");
    struct
    {
        bool bUseAnim;
    } Parms{};
    Parms.bUseAnim = (bool)bUseAnim;
    this->ProcessEvent(Func, &Parms);
}

void ULoopedPanel::MoveToElementByIndex(int32_t InIndex, bool bUseAnim)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoopedPanel", "MoveToElementByIndex");
    struct
    {
        int32_t InIndex;
        bool bUseAnim;
    } Parms{};
    Parms.InIndex = (int32_t)InIndex;
    Parms.bUseAnim = (bool)bUseAnim;
    this->ProcessEvent(Func, &Parms);
}

bool ULoopedPanel::IsPlayAnim()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoopedPanel", "IsPlayAnim");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ULoopedPanel::GetViewElementIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoopedPanel", "GetViewElementIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ULuaEventListener
void ULuaEventListener::OnUObjectDeleted__DelegateSignature(struct UObject* InObject, struct UObject* ObjectClass, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaEventListener", "OnUObjectDeleted__DelegateSignature");
    struct
    {
        struct UObject* InObject;
        struct UObject* ObjectClass;
        int32_t Index;
    } Parms{};
    Parms.InObject = (struct UObject*)InObject;
    Parms.ObjectClass = (struct UObject*)ObjectClass;
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void ULuaEventListener::OnUObjectCreated__DelegateSignature(struct UObject* InObject, struct UObject* ObjectClass, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaEventListener", "OnUObjectCreated__DelegateSignature");
    struct
    {
        struct UObject* InObject;
        struct UObject* ObjectClass;
        int32_t Index;
    } Parms{};
    Parms.InObject = (struct UObject*)InObject;
    Parms.ObjectClass = (struct UObject*)ObjectClass;
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void ULuaEventListener::OnPreGarbageCollect__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaEventListener", "OnPreGarbageCollect__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaEventListener::OnPostGarbageCollect__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaEventListener", "OnPostGarbageCollect__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaEventListener::GetCreatedSpecifyClassUObjectsWithoutAlloc(struct UObject* uObjectClass, struct TArray<struct UObject*>& Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaEventListener", "GetCreatedSpecifyClassUObjectsWithoutAlloc");
    struct
    {
        struct UObject* uObjectClass;
        struct TArray<struct UObject*> Result;
    } Parms{};
    Parms.uObjectClass = (struct UObject*)uObjectClass;
    this->ProcessEvent(Func, &Parms);
    Result = Parms.Result;
}

struct TArray<struct UObject*> ULuaEventListener::GetCreatedSpecifyClassUObjects(struct UObject* uObjectClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaEventListener", "GetCreatedSpecifyClassUObjects");
    struct
    {
        struct UObject* uObjectClass;
        struct TArray<struct UObject*> ReturnValue;
    } Parms{};
    Parms.uObjectClass = (struct UObject*)uObjectClass;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULuaEventListener::GetAllCreatedUObjects(struct TArray<struct UObject*>& Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaEventListener", "GetAllCreatedUObjects");
    struct
    {
        struct TArray<struct UObject*> Result;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Result = Parms.Result;
}

void ULuaEventListener::EndFrameDelegate__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaEventListener", "EndFrameDelegate__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaEventListener::EnableUObjectNotify(bool Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaEventListener", "EnableUObjectNotify");
    struct
    {
        bool Value;
    } Parms{};
    Parms.Value = (bool)Value;
    this->ProcessEvent(Func, &Parms);
}

void ULuaEventListener::EnableCoreTick(bool Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaEventListener", "EnableCoreTick");
    struct
    {
        bool Value;
    } Parms{};
    Parms.Value = (bool)Value;
    this->ProcessEvent(Func, &Parms);
}

struct ULuaEventListener* ULuaEventListener::Create()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaEventListener", "Create");
    struct
    {
        struct ULuaEventListener* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULuaEventListener::AddUObjectNotifyCareClass(struct UObject* uObjectClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaEventListener", "AddUObjectNotifyCareClass");
    struct
    {
        struct UObject* uObjectClass;
    } Parms{};
    Parms.uObjectClass = (struct UObject*)uObjectClass;
    this->ProcessEvent(Func, &Parms);
}

// AShowBtnOutlineHelper
void AShowBtnOutlineHelper::TransSizeToButtonMaterials()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ShowBtnOutlineHelper", "TransSizeToButtonMaterials");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AShowBtnOutlineHelper::SetOutlineOn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ShowBtnOutlineHelper", "SetOutlineOn");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AShowBtnOutlineHelper::SetOutlineOff()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ShowBtnOutlineHelper", "SetOutlineOff");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AShowBtnOutlineHelper::RevertAllButtonOutline()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ShowBtnOutlineHelper", "RevertAllButtonOutline");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AShowBtnOutlineHelper::ActiveAllButtonOutline()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ShowBtnOutlineHelper", "ActiveAllButtonOutline");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UShowTouch
void UShowTouch::StopShow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ShowTouch", "StopShow");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UShowTouch::StartShow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ShowTouch", "StartShow");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UShowTouch::SetIsPrintToScreen(bool InState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ShowTouch", "SetIsPrintToScreen");
    struct
    {
        bool InState;
    } Parms{};
    Parms.InState = (bool)InState;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UStatUMGWidget
void UStatUMGWidget::ExecWidgetStat(struct FString UMGName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("StatUMGWidget", "ExecWidgetStat");
    struct
    {
        struct FString UMGName;
    } Parms{};
    Parms.UMGName = (struct FString)UMGName;
    this->ProcessEvent(Func, &Parms);
}

void UStatUMGWidget::DumpDetailWidgetInfo(struct TArray<struct FString>& results)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("StatUMGWidget", "DumpDetailWidgetInfo");
    struct
    {
        struct TArray<struct FString> results;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    results = Parms.results;
}

// UUASubmitBug
void UUASubmitBug::SubmitHttpUpLoadDelegate__DelegateSignature(struct FString RspContent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UASubmitBug", "SubmitHttpUpLoadDelegate__DelegateSignature");
    struct
    {
        struct FString RspContent;
    } Parms{};
    Parms.RspContent = (struct FString)RspContent;
    this->ProcessEvent(Func, &Parms);
}

void UUASubmitBug::SubmitContent(struct FString BugContent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UASubmitBug", "SubmitContent");
    struct
    {
        struct FString BugContent;
    } Parms{};
    Parms.BugContent = (struct FString)BugContent;
    this->ProcessEvent(Func, &Parms);
}

void UUASubmitBug::SubmitBug(struct FString BugContent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UASubmitBug", "SubmitBug");
    struct
    {
        struct FString BugContent;
    } Parms{};
    Parms.BugContent = (struct FString)BugContent;
    this->ProcessEvent(Func, &Parms);
}

void UUASubmitBug::StopVideoCapture()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UASubmitBug", "StopVideoCapture");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUASubmitBug::StartVideoCapture()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UASubmitBug", "StartVideoCapture");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUASubmitBug::SendVideo(struct FString CosVideoPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UASubmitBug", "SendVideo");
    struct
    {
        struct FString CosVideoPath;
    } Parms{};
    Parms.CosVideoPath = (struct FString)CosVideoPath;
    this->ProcessEvent(Func, &Parms);
}

void UUASubmitBug::SendScreen(struct FString CosScreenPath, struct FString CosBugContentPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UASubmitBug", "SendScreen");
    struct
    {
        struct FString CosScreenPath;
        struct FString CosBugContentPath;
    } Parms{};
    Parms.CosScreenPath = (struct FString)CosScreenPath;
    Parms.CosBugContentPath = (struct FString)CosBugContentPath;
    this->ProcessEvent(Func, &Parms);
}

void UUASubmitBug::SendLogAndVideo(struct FString CosLogPath, struct FString CosVideoPath, struct FString CosScreenPath, struct FString CosBugContentPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UASubmitBug", "SendLogAndVideo");
    struct
    {
        struct FString CosLogPath;
        struct FString CosVideoPath;
        struct FString CosScreenPath;
        struct FString CosBugContentPath;
    } Parms{};
    Parms.CosLogPath = (struct FString)CosLogPath;
    Parms.CosVideoPath = (struct FString)CosVideoPath;
    Parms.CosScreenPath = (struct FString)CosScreenPath;
    Parms.CosBugContentPath = (struct FString)CosBugContentPath;
    this->ProcessEvent(Func, &Parms);
}

void UUASubmitBug::SendLog(struct FString CosLogPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UASubmitBug", "SendLog");
    struct
    {
        struct FString CosLogPath;
    } Parms{};
    Parms.CosLogPath = (struct FString)CosLogPath;
    this->ProcessEvent(Func, &Parms);
}

void UUASubmitBug::ScreenCaptureDelegate__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UASubmitBug", "ScreenCaptureDelegate__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool UUASubmitBug::IsVideoReady()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UASubmitBug", "IsVideoReady");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UUASubmitBug::GetCaptureTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UASubmitBug", "GetCaptureTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUASubmitBug::GetCaptureState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UASubmitBug", "GetCaptureState");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UUASubmitBug* UUASubmitBug::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UASubmitBug", "Get");
    struct
    {
        struct UUASubmitBug* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUASubmitBug::DragWidget(struct UUserWidget* panel, const struct FGeometry& InGeometry, const struct FPointerEvent& InMouseEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UASubmitBug", "DragWidget");
    struct
    {
        struct UUserWidget* panel;
        struct FGeometry InGeometry;
        struct FPointerEvent InMouseEvent;
    } Parms{};
    Parms.panel = (struct UUserWidget*)panel;
    Parms.InGeometry = (struct FGeometry)InGeometry;
    Parms.InMouseEvent = (struct FPointerEvent)InMouseEvent;
    this->ProcessEvent(Func, &Parms);
}

bool UUASubmitBug::DeleteLocalVideo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UASubmitBug", "DeleteLocalVideo");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUASubmitBug::ClipVideo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UASubmitBug", "ClipVideo");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUASubmitBug::CaptureScreen()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UASubmitBug", "CaptureScreen");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UTinyHotfixFile
int32_t UTinyHotfixFile::HotfixIniFile(struct FString Filename)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TinyHotfixFile", "HotfixIniFile");
    struct
    {
        struct FString Filename;
        int32_t ReturnValue;
    } Parms{};
    Parms.Filename = (struct FString)Filename;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UTutorialModeInputProcessor
bool UTutorialModeInputProcessor::UnhookInputProcessor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialModeInputProcessor", "UnhookInputProcessor");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UTutorialModeInputProcessor::SetNextHookAreaRect(struct FVector2D InLeftTop, struct FVector2D InRightBottom)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialModeInputProcessor", "SetNextHookAreaRect");
    struct
    {
        struct FVector2D InLeftTop;
        struct FVector2D InRightBottom;
    } Parms{};
    Parms.InLeftTop = (struct FVector2D)InLeftTop;
    Parms.InRightBottom = (struct FVector2D)InRightBottom;
    this->ProcessEvent(Func, &Parms);
}

void UTutorialModeInputProcessor::SetContext(struct UObject* InContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialModeInputProcessor", "SetContext");
    struct
    {
        struct UObject* InContext;
    } Parms{};
    Parms.InContext = (struct UObject*)InContext;
    this->ProcessEvent(Func, &Parms);
}

void UTutorialModeInputProcessor::ResumeHook()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialModeInputProcessor", "ResumeHook");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UTutorialModeInputProcessor::PauseHook()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialModeInputProcessor", "PauseHook");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool UTutorialModeInputProcessor::HookInputProcessor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialModeInputProcessor", "HookInputProcessor");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UUABuglyHelper
void UUABuglyHelper::SendBuglyResultHandler(struct FString Result, struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UABuglyHelper", "SendBuglyResultHandler");
    struct
    {
        struct FString Result;
        struct FString Path;
    } Parms{};
    Parms.Result = (struct FString)Result;
    Parms.Path = (struct FString)Path;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUABuglyHelper::SaveUrl(struct FString Md5, struct FString URL)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UABuglyHelper", "SaveUrl");
    struct
    {
        struct FString Md5;
        struct FString URL;
    } Parms{};
    Parms.Md5 = (struct FString)Md5;
    Parms.URL = (struct FString)URL;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUABuglyHelper::SaveTime(struct FString Md5, struct FString Time)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UABuglyHelper", "SaveTime");
    struct
    {
        struct FString Md5;
        struct FString Time;
    } Parms{};
    Parms.Md5 = (struct FString)Md5;
    Parms.Time = (struct FString)Time;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUABuglyHelper::SaveMd5(struct FString Md5)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UABuglyHelper", "SaveMd5");
    struct
    {
        struct FString Md5;
    } Parms{};
    Parms.Md5 = (struct FString)Md5;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUABuglyHelper::SaveGcloudBugly(struct FString URL)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UABuglyHelper", "SaveGcloudBugly");
    struct
    {
        struct FString URL;
    } Parms{};
    Parms.URL = (struct FString)URL;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUABuglyHelper::SaveBugly(struct FString URL)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UABuglyHelper", "SaveBugly");
    struct
    {
        struct FString URL;
    } Parms{};
    Parms.URL = (struct FString)URL;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUABuglyHelper::RestartSend()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UABuglyHelper", "RestartSend");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUABuglyHelper::RemoveMd5(struct FString Md5)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UABuglyHelper", "RemoveMd5");
    struct
    {
        struct FString Md5;
    } Parms{};
    Parms.Md5 = (struct FString)Md5;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UUABuglyHelper::IsContainMd5(struct FString Md5)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UABuglyHelper", "IsContainMd5");
    struct
    {
        struct FString Md5;
        bool ReturnValue;
    } Parms{};
    Parms.Md5 = (struct FString)Md5;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUABuglyHelper::InitLogTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UABuglyHelper", "InitLogTime");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUABuglyHelper::HasTimeInFile(struct FString LOGTime, struct FString LogName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UABuglyHelper", "HasTimeInFile");
    struct
    {
        struct FString LOGTime;
        struct FString LogName;
        bool ReturnValue;
    } Parms{};
    Parms.LOGTime = (struct FString)LOGTime;
    Parms.LogName = (struct FString)LogName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UUABuglyHelper::GetMd5Table()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UABuglyHelper", "GetMd5Table");
    struct
    {
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUABuglyHelper::GetMd5ByUrl(struct FString URL)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UABuglyHelper", "GetMd5ByUrl");
    struct
    {
        struct FString URL;
        struct FString ReturnValue;
    } Parms{};
    Parms.URL = (struct FString)URL;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FBuglyData UUABuglyHelper::GetBuglyInfo(struct FString Md5)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UABuglyHelper", "GetBuglyInfo");
    struct
    {
        struct FString Md5;
        struct FBuglyData ReturnValue;
    } Parms{};
    Parms.Md5 = (struct FString)Md5;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUABuglyHelper::CombineUrlKey(struct FString Md5)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UABuglyHelper", "CombineUrlKey");
    struct
    {
        struct FString Md5;
        struct FString ReturnValue;
    } Parms{};
    Parms.Md5 = (struct FString)Md5;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUABuglyHelper::CombineTimeKey(struct FString Md5)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UABuglyHelper", "CombineTimeKey");
    struct
    {
        struct FString Md5;
        struct FString ReturnValue;
    } Parms{};
    Parms.Md5 = (struct FString)Md5;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UUAButtonWidget
void UUAButtonWidget::SetGray(bool gray)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UAButtonWidget", "SetGray");
    struct
    {
        bool gray;
    } Parms{};
    Parms.gray = (bool)gray;
    this->ProcessEvent(Func, &Parms);
}

void UUAButtonWidget::OnRefreshPressState(int32_t IsPressed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UAButtonWidget", "OnRefreshPressState");
    struct
    {
        int32_t IsPressed;
    } Parms{};
    Parms.IsPressed = (int32_t)IsPressed;
    this->ProcessEvent(Func, &Parms);
}

void UUAButtonWidget::OnButtonUnHovered()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UAButtonWidget", "OnButtonUnHovered");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUAButtonWidget::OnButtonReleased()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UAButtonWidget", "OnButtonReleased");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUAButtonWidget::OnButtonPress()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UAButtonWidget", "OnButtonPress");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUAButtonWidget::OnButtonHovered()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UAButtonWidget", "OnButtonHovered");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUAButtonWidget::OnButtonClick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UAButtonWidget", "OnButtonClick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UUACharacterDefaultInventoryCompBase
void UUACharacterDefaultInventoryCompBase::StopDoSlicedInit(bool bFreezeSlicedInit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterDefaultInventoryCompBase", "StopDoSlicedInit");
    struct
    {
        bool bFreezeSlicedInit;
    } Parms{};
    Parms.bFreezeSlicedInit = (bool)bFreezeSlicedInit;
    this->ProcessEvent(Func, &Parms);
}

bool UUACharacterDefaultInventoryCompBase::IsInSlicedInit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterDefaultInventoryCompBase", "IsInSlicedInit");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACharacterDefaultInventoryCompBase::InitCharacterBadges(const struct TArray<struct FSGBadgeInfo>& BadgeItems)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterDefaultInventoryCompBase", "InitCharacterBadges");
    struct
    {
        struct TArray<struct FSGBadgeInfo> BadgeItems;
    } Parms{};
    Parms.BadgeItems = (struct TArray<struct FSGBadgeInfo>)BadgeItems;
    this->ProcessEvent(Func, &Parms);
}

float UUACharacterDefaultInventoryCompBase::GetCurLoadEquipmentProgress()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterDefaultInventoryCompBase", "GetCurLoadEquipmentProgress");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACharacterDefaultInventoryCompBase::DoSlicedInit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterDefaultInventoryCompBase", "DoSlicedInit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UUACharacterAIRandomInventoryComponent
void UUACharacterAIRandomInventoryComponent::OnHandleGiveRandSuit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterAIRandomInventoryComponent", "OnHandleGiveRandSuit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterAIRandomInventoryComponent::GiveRandSuit(int32_t InEquipPoolID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterAIRandomInventoryComponent", "GiveRandSuit");
    struct
    {
        int32_t InEquipPoolID;
    } Parms{};
    Parms.InEquipPoolID = (int32_t)InEquipPoolID;
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterAIRandomInventoryComponent::GiveDefaultSuit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterAIRandomInventoryComponent", "GiveDefaultSuit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FString UUACharacterAIRandomInventoryComponent::GetGivenInventoryCountInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterAIRandomInventoryComponent", "GetGivenInventoryCountInfo");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UUACharacterDefaultInventoryComp
void UUACharacterDefaultInventoryComp::SpawnRandomAwardsResultDoToast(const struct TArray<int32_t>& SpawnItemIDs, const struct TArray<int32_t>& SpawnItemNums)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterDefaultInventoryComp", "SpawnRandomAwardsResultDoToast");
    struct
    {
        struct TArray<int32_t> SpawnItemIDs;
        struct TArray<int32_t> SpawnItemNums;
    } Parms{};
    Parms.SpawnItemIDs = (struct TArray<int32_t>)SpawnItemIDs;
    Parms.SpawnItemNums = (struct TArray<int32_t>)SpawnItemNums;
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterDefaultInventoryComp::SetReborning(bool bInReborning)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterDefaultInventoryComp", "SetReborning");
    struct
    {
        bool bInReborning;
    } Parms{};
    Parms.bInReborning = (bool)bInReborning;
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterDefaultInventoryComp::ServerSaveMinimumEquipInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterDefaultInventoryComp", "ServerSaveMinimumEquipInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterDefaultInventoryComp::ResetEndurance(struct ASGPlayerState* PS)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterDefaultInventoryComp", "ResetEndurance");
    struct
    {
        struct ASGPlayerState* PS;
    } Parms{};
    Parms.PS = (struct ASGPlayerState*)PS;
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterDefaultInventoryComp::ReportVehicleKeyDestroyed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterDefaultInventoryComp", "ReportVehicleKeyDestroyed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterDefaultInventoryComp::PostInit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterDefaultInventoryComp", "PostInit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterDefaultInventoryComp::OnUsedInventory(struct ACharacter* Character, struct ASGInventory* Inventory, int32_t ActuallyUsedSubInventoryItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterDefaultInventoryComp", "OnUsedInventory");
    struct
    {
        struct ACharacter* Character;
        struct ASGInventory* Inventory;
        int32_t ActuallyUsedSubInventoryItemID;
    } Parms{};
    Parms.Character = (struct ACharacter*)Character;
    Parms.Inventory = (struct ASGInventory*)Inventory;
    Parms.ActuallyUsedSubInventoryItemID = (int32_t)ActuallyUsedSubInventoryItemID;
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterDefaultInventoryComp::OnPlayerFinishGame(struct APlayerController* PlayerController, EPlayerEndGameType FinishType, struct AActor* EscapeVolume)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterDefaultInventoryComp", "OnPlayerFinishGame");
    struct
    {
        struct APlayerController* PlayerController;
        enum EPlayerEndGameType FinishType;
        struct AActor* EscapeVolume;
    } Parms{};
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    Parms.FinishType = (enum EPlayerEndGameType)FinishType;
    Parms.EscapeVolume = (struct AActor*)EscapeVolume;
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterDefaultInventoryComp::OnCharacterPostDied(struct ACharacter* DeadCharacter, struct AController* Killer, struct UDamageEventObject* DamageEventObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterDefaultInventoryComp", "OnCharacterPostDied");
    struct
    {
        struct ACharacter* DeadCharacter;
        struct AController* Killer;
        struct UDamageEventObject* DamageEventObject;
    } Parms{};
    Parms.DeadCharacter = (struct ACharacter*)DeadCharacter;
    Parms.Killer = (struct AController*)Killer;
    Parms.DamageEventObject = (struct UDamageEventObject*)DamageEventObject;
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterDefaultInventoryComp::InitStandaloneCharacterAvatars()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterDefaultInventoryComp", "InitStandaloneCharacterAvatars");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterDefaultInventoryComp::ClientReceiveSpawnRandomAwardsResult(struct TArray<int32_t> SpawnItemIDs, struct TArray<int32_t> SpawnItemNums)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterDefaultInventoryComp", "ClientReceiveSpawnRandomAwardsResult");
    struct
    {
        struct TArray<int32_t> SpawnItemIDs;
        struct TArray<int32_t> SpawnItemNums;
    } Parms{};
    Parms.SpawnItemIDs = (struct TArray<int32_t>)SpawnItemIDs;
    Parms.SpawnItemNums = (struct TArray<int32_t>)SpawnItemNums;
    this->ProcessEvent(Func, &Parms);
}

// UUACharacterPreviewComponent
void UUACharacterPreviewComponent::WaitAnimationUpdate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterPreviewComponent", "WaitAnimationUpdate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterPreviewComponent::ViewCurrentWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterPreviewComponent", "ViewCurrentWeapon");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterPreviewComponent::UpdateSceneCaptureTextureTargetSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterPreviewComponent", "UpdateSceneCaptureTextureTargetSize");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterPreviewComponent::UpdateCharacterSequence()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterPreviewComponent", "UpdateCharacterSequence");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterPreviewComponent::SwitchCaptureCameraConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterPreviewComponent", "SwitchCaptureCameraConfig");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterPreviewComponent::StopCaptureEveryFrame()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterPreviewComponent", "StopCaptureEveryFrame");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool UUACharacterPreviewComponent::ShouldUpdateCharacterSequence()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterPreviewComponent", "ShouldUpdateCharacterSequence");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACharacterPreviewComponent::SetTimerCheckMeshFullyStreamedIn(bool bStart)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterPreviewComponent", "SetTimerCheckMeshFullyStreamedIn");
    struct
    {
        bool bStart;
    } Parms{};
    Parms.bStart = (bool)bStart;
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterPreviewComponent::SetRenderCaptureParam(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterPreviewComponent", "SetRenderCaptureParam");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterPreviewComponent::OnWeaponAllMeshLoaded(struct ASGWeapon* TargetWeapon)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterPreviewComponent", "OnWeaponAllMeshLoaded");
    struct
    {
        struct ASGWeapon* TargetWeapon;
    } Parms{};
    Parms.TargetWeapon = (struct ASGWeapon*)TargetWeapon;
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterPreviewComponent::OnUpdateAvatarsFinish()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterPreviewComponent", "OnUpdateAvatarsFinish");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterPreviewComponent::OnUpdateAvatarsAddInventory(struct ASGInventory* AvatarInventory)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterPreviewComponent", "OnUpdateAvatarsAddInventory");
    struct
    {
        struct ASGInventory* AvatarInventory;
    } Parms{};
    Parms.AvatarInventory = (struct ASGInventory*)AvatarInventory;
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterPreviewComponent::OnSetCurrentWeapon(struct ASGInventory* Weapon)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterPreviewComponent", "OnSetCurrentWeapon");
    struct
    {
        struct ASGInventory* Weapon;
    } Parms{};
    Parms.Weapon = (struct ASGInventory*)Weapon;
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterPreviewComponent::OnPreviewGestureMontageBlendingOut(struct UAnimMontage* AnimMontage, bool bInterrupted)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterPreviewComponent", "OnPreviewGestureMontageBlendingOut");
    struct
    {
        struct UAnimMontage* AnimMontage;
        bool bInterrupted;
    } Parms{};
    Parms.AnimMontage = (struct UAnimMontage*)AnimMontage;
    Parms.bInterrupted = (bool)bInterrupted;
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterPreviewComponent::OnOwnerEquipSkeletalMeshLoadCompleted(struct ASGInventory* Inv, struct USkeletalMeshComponent* SkeletalMeshComp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterPreviewComponent", "OnOwnerEquipSkeletalMeshLoadCompleted");
    struct
    {
        struct ASGInventory* Inv;
        struct USkeletalMeshComponent* SkeletalMeshComp;
    } Parms{};
    Parms.Inv = (struct ASGInventory*)Inv;
    Parms.SkeletalMeshComp = (struct USkeletalMeshComponent*)SkeletalMeshComp;
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterPreviewComponent::OnMeshDecideLoadSkeletalMesh(struct ASGInventory* AvatarInventory, bool& bUseGameMeshInLobby)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterPreviewComponent", "OnMeshDecideLoadSkeletalMesh");
    struct
    {
        struct ASGInventory* AvatarInventory;
        bool bUseGameMeshInLobby;
    } Parms{};
    Parms.AvatarInventory = (struct ASGInventory*)AvatarInventory;
    this->ProcessEvent(Func, &Parms);
    bUseGameMeshInLobby = Parms.bUseGameMeshInLobby;
}

void UUACharacterPreviewComponent::OnInventoryLoadComplete(int32_t TaskId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterPreviewComponent", "OnInventoryLoadComplete");
    struct
    {
        int32_t TaskId;
    } Parms{};
    Parms.TaskId = (int32_t)TaskId;
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterPreviewComponent::OnEquipMeshDecideLoadSkeletalMesh(struct USGInventoryEquipMeshComponent* InventoryMeshComponent, bool& bUseGameMeshInLobby)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterPreviewComponent", "OnEquipMeshDecideLoadSkeletalMesh");
    struct
    {
        struct USGInventoryEquipMeshComponent* InventoryMeshComponent;
        bool bUseGameMeshInLobby;
    } Parms{};
    Parms.InventoryMeshComponent = (struct USGInventoryEquipMeshComponent*)InventoryMeshComponent;
    this->ProcessEvent(Func, &Parms);
    bUseGameMeshInLobby = Parms.bUseGameMeshInLobby;
}

void UUACharacterPreviewComponent::OnCharacterStaticMeshLoaded(struct AActor* Actor, struct UStaticMesh* StaticMesh)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterPreviewComponent", "OnCharacterStaticMeshLoaded");
    struct
    {
        struct AActor* Actor;
        struct UStaticMesh* StaticMesh;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.StaticMesh = (struct UStaticMesh*)StaticMesh;
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterPreviewComponent::OnCharacterSlicedProcessFinished(struct ASGCharacter* InCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterPreviewComponent", "OnCharacterSlicedProcessFinished");
    struct
    {
        struct ASGCharacter* InCharacter;
    } Parms{};
    Parms.InCharacter = (struct ASGCharacter*)InCharacter;
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterPreviewComponent::OnCharacterSkeletalMeshLoaded(struct AActor* Actor, struct USkeletalMesh* SkeletalMesh)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterPreviewComponent", "OnCharacterSkeletalMeshLoaded");
    struct
    {
        struct AActor* Actor;
        struct USkeletalMesh* SkeletalMesh;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.SkeletalMesh = (struct USkeletalMesh*)SkeletalMesh;
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterPreviewComponent::OnCharacterRemoveInventoryEvent(struct ACharacter* Character, struct ASGInventory* Inventory)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterPreviewComponent", "OnCharacterRemoveInventoryEvent");
    struct
    {
        struct ACharacter* Character;
        struct ASGInventory* Inventory;
    } Parms{};
    Parms.Character = (struct ACharacter*)Character;
    Parms.Inventory = (struct ASGInventory*)Inventory;
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterPreviewComponent::OnCharacterPreUpdateAvatars()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterPreviewComponent", "OnCharacterPreUpdateAvatars");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterPreviewComponent::OnCharacterAvatarRemove(struct ASGInventory* Inv)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterPreviewComponent", "OnCharacterAvatarRemove");
    struct
    {
        struct ASGInventory* Inv;
    } Parms{};
    Parms.Inv = (struct ASGInventory*)Inv;
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterPreviewComponent::OnCharacterAvatarMeshLoaded(struct UMeshComponent* MeshComp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterPreviewComponent", "OnCharacterAvatarMeshLoaded");
    struct
    {
        struct UMeshComponent* MeshComp;
    } Parms{};
    Parms.MeshComp = (struct UMeshComponent*)MeshComp;
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterPreviewComponent::OnCharacterAllAvatarMeshLoadedFromMessageEvents(struct ASGCharacter* InCharacter, int32_t AvatarCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterPreviewComponent", "OnCharacterAllAvatarMeshLoadedFromMessageEvents");
    struct
    {
        struct ASGCharacter* InCharacter;
        int32_t AvatarCount;
    } Parms{};
    Parms.InCharacter = (struct ASGCharacter*)InCharacter;
    Parms.AvatarCount = (int32_t)AvatarCount;
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterPreviewComponent::OnCharacterAllAvatarMeshLoaded(int32_t AvatarCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterPreviewComponent", "OnCharacterAllAvatarMeshLoaded");
    struct
    {
        int32_t AvatarCount;
    } Parms{};
    Parms.AvatarCount = (int32_t)AvatarCount;
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterPreviewComponent::OnBadgeLoadedFromMessageEvents(struct ASGCharacter* InCharacter, int32_t attachPos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterPreviewComponent", "OnBadgeLoadedFromMessageEvents");
    struct
    {
        struct ASGCharacter* InCharacter;
        int32_t attachPos;
    } Parms{};
    Parms.InCharacter = (struct ASGCharacter*)InCharacter;
    Parms.attachPos = (int32_t)attachPos;
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterPreviewComponent::OnAllMeshLoaded(struct FString reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterPreviewComponent", "OnAllMeshLoaded");
    struct
    {
        struct FString reason;
    } Parms{};
    Parms.reason = (struct FString)reason;
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterPreviewComponent::OnAllAvatarsMeshLoadFinish(int32_t AvatarCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterPreviewComponent", "OnAllAvatarsMeshLoadFinish");
    struct
    {
        int32_t AvatarCount;
    } Parms{};
    Parms.AvatarCount = (int32_t)AvatarCount;
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterPreviewComponent::DressAvatarInit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterPreviewComponent", "DressAvatarInit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool UUACharacterPreviewComponent::CheckCaptureMeshIsFullyStreamedIn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterPreviewComponent", "CheckCaptureMeshIsFullyStreamedIn");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACharacterPreviewComponent::CheckAllEquipMeshFullyLoaded()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterPreviewComponent", "CheckAllEquipMeshFullyLoaded");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterPreviewComponent::CheckAllEquipAndAvatarFullyLoaded()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterPreviewComponent", "CheckAllEquipAndAvatarFullyLoaded");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterPreviewComponent::CheckAllBadgesLoaded()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterPreviewComponent", "CheckAllBadgesLoaded");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUACharacterPreviewComponent::CaptureEverySecond()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterPreviewComponent", "CaptureEverySecond");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool UUACharacterPreviewComponent::AddInventoryItemInfo(struct USGPlayerItemInfoBase* ItemInfoBase)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACharacterPreviewComponent", "AddInventoryItemInfo");
    struct
    {
        struct USGPlayerItemInfoBase* ItemInfoBase;
        bool ReturnValue;
    } Parms{};
    Parms.ItemInfoBase = (struct USGPlayerItemInfoBase*)ItemInfoBase;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UUAClipImageWidget
void UUAClipImageWidget::OnTextureLoadCompleted(struct UTexture* tex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UAClipImageWidget", "OnTextureLoadCompleted");
    struct
    {
        struct UTexture* tex;
    } Parms{};
    Parms.tex = (struct UTexture*)tex;
    this->ProcessEvent(Func, &Parms);
}

void UUAClipImageWidget::AsyncLoadTexture(struct FString TexPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UAClipImageWidget", "AsyncLoadTexture");
    struct
    {
        struct FString TexPath;
    } Parms{};
    Parms.TexPath = (struct FString)TexPath;
    this->ProcessEvent(Func, &Parms);
}

// UUACmd
void UUACmd::StopLuaMemTag()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACmd", "StopLuaMemTag");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUACmd::StartLuaMemTag(struct FString Tag, struct FString Filename)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACmd", "StartLuaMemTag");
    struct
    {
        struct FString Tag;
        struct FString Filename;
    } Parms{};
    Parms.Tag = (struct FString)Tag;
    Parms.Filename = (struct FString)Filename;
    this->ProcessEvent(Func, &Parms);
}

void UUACmd::PrintLuaAllocRecord()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACmd", "PrintLuaAllocRecord");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool UUACmd::IsLuaAllocRecord()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACmd", "IsLuaAllocRecord");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACmd::EnableLuaAllocRecord(bool Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACmd", "EnableLuaAllocRecord");
    struct
    {
        bool Enable;
    } Parms{};
    Parms.Enable = (bool)Enable;
    this->ProcessEvent(Func, &Parms);
}

// UUACommonConfigStatics
void UUACommonConfigStatics::SetVulkanLaunchID(int32_t LaunchID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "SetVulkanLaunchID");
    struct
    {
        int32_t LaunchID;
    } Parms{};
    Parms.LaunchID = (int32_t)LaunchID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonConfigStatics::SetVulkanCrashNum(int32_t LaunchID, int32_t CrashNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "SetVulkanCrashNum");
    struct
    {
        int32_t LaunchID;
        int32_t CrashNum;
    } Parms{};
    Parms.LaunchID = (int32_t)LaunchID;
    Parms.CrashNum = (int32_t)CrashNum;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonConfigStatics::SetVulkanCachedDeviceLevel(int32_t DeviceLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "SetVulkanCachedDeviceLevel");
    struct
    {
        int32_t DeviceLevel;
    } Parms{};
    Parms.DeviceLevel = (int32_t)DeviceLevel;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonConfigStatics::SetUserSettingOfOpenGL(bool bUseOpenGL)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "SetUserSettingOfOpenGL");
    struct
    {
        bool bUseOpenGL;
    } Parms{};
    Parms.bUseOpenGL = (bool)bUseOpenGL;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UUACommonConfigStatics::SetRayTracing(bool bIsRead, bool bRayTracing)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "SetRayTracing");
    struct
    {
        bool bIsRead;
        bool bRayTracing;
        bool ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.bRayTracing = (bool)bRayTracing;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonConfigStatics::SetFallbackStreamUrlPrefix(struct FString InFallbackStreamUrlPrefix)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "SetFallbackStreamUrlPrefix");
    struct
    {
        struct FString InFallbackStreamUrlPrefix;
    } Parms{};
    Parms.InFallbackStreamUrlPrefix = (struct FString)InFallbackStreamUrlPrefix;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonConfigStatics::SaveLoginDataConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "SaveLoginDataConfig");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UUACommonConfigStatics::PatchVersionIni(struct FString InResVersion)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "PatchVersionIni");
    struct
    {
        struct FString InResVersion;
        bool ReturnValue;
    } Parms{};
    Parms.InResVersion = (struct FString)InResVersion;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonConfigStatics::LobbySetPing(struct UWorld* WorldContext, uint8_t Ping)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "LobbySetPing");
    struct
    {
        struct UWorld* WorldContext;
        uint8_t Ping;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UWorld*)WorldContext;
    Parms.Ping = (uint8_t)Ping;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonConfigStatics::LoadSceneBuildIni()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "LoadSceneBuildIni");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonConfigStatics::LoadAssetCookIni()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "LoadAssetCookIni");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UUACommonConfigStatics::IsVulkanAvaliableVersionOnThisDevice()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "IsVulkanAvaliableVersionOnThisDevice");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonConfigStatics::IsVulkanAvaliableOnThisDevice(int32_t InDeviceLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "IsVulkanAvaliableOnThisDevice");
    struct
    {
        int32_t InDeviceLevel;
        bool ReturnValue;
    } Parms{};
    Parms.InDeviceLevel = (int32_t)InDeviceLevel;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonConfigStatics::IsUserSettingOfOpenGLExist()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "IsUserSettingOfOpenGLExist");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonConfigStatics::IsOverWritePacket()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "IsOverWritePacket");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonConfigStatics::IsLoginSucceed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "IsLoginSucceed");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonConfigStatics::IsForDistribution()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "IsForDistribution");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonConfigStatics::IsFirstTimeLaunch()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "IsFirstTimeLaunch");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonConfigStatics::IsExpClient()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "IsExpClient");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonConfigStatics::InitForLoginSucceed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "InitForLoginSucceed");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonConfigStatics::InitConfigFiles()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "InitConfigFiles");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UUACommonConfigStatics::GetXunyouControl(struct FString Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetXunyouControl");
    struct
    {
        struct FString Key;
        bool ReturnValue;
    } Parms{};
    Parms.Key = (struct FString)Key;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::GetWXAppID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetWXAppID");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonConfigStatics::GetVulkanLaunchID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetVulkanLaunchID");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonConfigStatics::GetVulkanCrashNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetVulkanCrashNum");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::GetVersionCode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetVersionCode");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::GetVersionBuildTimestamp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetVersionBuildTimestamp");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::GetVersionBuildBranchNames()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetVersionBuildBranchNames");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UUACommonConfigStatics::GetUObjectLeakWhiteList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetUObjectLeakWhiteList");
    struct
    {
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonConfigStatics::GetUAMOLobbyIpListConfig(struct TArray<struct FString>& UAMOLobbyIpListArr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetUAMOLobbyIpListConfig");
    struct
    {
        struct TArray<struct FString> UAMOLobbyIpListArr;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    UAMOLobbyIpListArr = Parms.UAMOLobbyIpListArr;
}

struct FString UUACommonConfigStatics::GetSvnVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetSvnVersion");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonConfigStatics::GetSplashFlowTimeOutSeconds()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetSplashFlowTimeOutSeconds");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonConfigStatics::GetServerIPConfig(struct TArray<struct FString>& ServerIPArr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetServerIPConfig");
    struct
    {
        struct TArray<struct FString> ServerIPArr;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    ServerIPArr = Parms.ServerIPArr;
}

struct FString UUACommonConfigStatics::GetReplayVersionNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetReplayVersionNum");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonConfigStatics::GetRegisterFlowTimeOutSeconds()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetRegisterFlowTimeOutSeconds");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonConfigStatics::GetQQWXLobbyIpListConfig(struct TArray<struct FString>& QQLobbyIpListArr, struct TArray<struct FString>& WXLobbyIpListArr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetQQWXLobbyIpListConfig");
    struct
    {
        struct TArray<struct FString> QQLobbyIpListArr;
        struct TArray<struct FString> WXLobbyIpListArr;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    QQLobbyIpListArr = Parms.QQLobbyIpListArr;
    WXLobbyIpListArr = Parms.WXLobbyIpListArr;
}

struct FString UUACommonConfigStatics::GetQQAppID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetQQAppID");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::GetPufferUpdateUrl(bool InPrePuffer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetPufferUpdateUrl");
    struct
    {
        bool InPrePuffer;
        struct FString ReturnValue;
    } Parms{};
    Parms.InPrePuffer = (bool)InPrePuffer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonConfigStatics::GetPufferProductID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetPufferProductID");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::GetPackageVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetPackageVersion");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::GetNLPMentorHostURL()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetNLPMentorHostURL");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::GetMSDKGameID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetMSDKGameID");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonConfigStatics::GetMobileQQWXIpConfig(struct TArray<struct FString>& MobileQQLobbyUrlArr, struct TArray<struct FString>& MobileWXLobbyUrlArr, bool bPreRelease)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetMobileQQWXIpConfig");
    struct
    {
        struct TArray<struct FString> MobileQQLobbyUrlArr;
        struct TArray<struct FString> MobileWXLobbyUrlArr;
        bool bPreRelease;
    } Parms{};
    Parms.bPreRelease = (bool)bPreRelease;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    MobileQQLobbyUrlArr = Parms.MobileQQLobbyUrlArr;
    MobileWXLobbyUrlArr = Parms.MobileWXLobbyUrlArr;
}

void UUACommonConfigStatics::GetMobileLoginIpConfig(struct TArray<struct FString>& EditorMobileLobbyUrlArr, struct TArray<struct FString>& MobileLobbyUrlArr, bool bPreRelease)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetMobileLoginIpConfig");
    struct
    {
        struct TArray<struct FString> EditorMobileLobbyUrlArr;
        struct TArray<struct FString> MobileLobbyUrlArr;
        bool bPreRelease;
    } Parms{};
    Parms.bPreRelease = (bool)bPreRelease;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    EditorMobileLobbyUrlArr = Parms.EditorMobileLobbyUrlArr;
    MobileLobbyUrlArr = Parms.MobileLobbyUrlArr;
}

struct FString UUACommonConfigStatics::GetMFBoxStdform(struct FString BundleId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetMFBoxStdform");
    struct
    {
        struct FString BundleId;
        struct FString ReturnValue;
    } Parms{};
    Parms.BundleId = (struct FString)BundleId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::GetMFBoxPlatform(struct FString BundleId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetMFBoxPlatform");
    struct
    {
        struct FString BundleId;
        struct FString ReturnValue;
    } Parms{};
    Parms.BundleId = (struct FString)BundleId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::GetMFBoxAppkey(struct FString BundleId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetMFBoxAppkey");
    struct
    {
        struct FString BundleId;
        struct FString ReturnValue;
    } Parms{};
    Parms.BundleId = (struct FString)BundleId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonConfigStatics::GetLoginIpConfig(struct TArray<struct FString>& EditorLobbyUrlArr, struct TArray<struct FString>& PCLobbyUrlArr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetLoginIpConfig");
    struct
    {
        struct TArray<struct FString> EditorLobbyUrlArr;
        struct TArray<struct FString> PCLobbyUrlArr;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    EditorLobbyUrlArr = Parms.EditorLobbyUrlArr;
    PCLobbyUrlArr = Parms.PCLobbyUrlArr;
}

int32_t UUACommonConfigStatics::GetLoginFlowTimeOutSeconds()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetLoginFlowTimeOutSeconds");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::GetLastProgramVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetLastProgramVersion");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonConfigStatics::GetIsOpenWXLive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetIsOpenWXLive");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonConfigStatics::GetIntlUpdateReleaseID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetIntlUpdateReleaseID");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonConfigStatics::GetIntlUpdatePreReleaseID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetIntlUpdatePreReleaseID");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::GetGuestAppID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetGuestAppID");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::GetGMESDKGamekey()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetGMESDKGamekey");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::GetGMESDKGameID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetGMESDKGameID");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::GetGamekey()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetGamekey");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::GetGameId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetGameId");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::GetFlowSettingNextOpenMapName_Startup_UAM()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetFlowSettingNextOpenMapName_Startup_UAM");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::GetFlowSettingNextOpenMapName_Startup_UA()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetFlowSettingNextOpenMapName_Startup_UA");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::GetFlowSettingNextOpenMapName_Login()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetFlowSettingNextOpenMapName_Login");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::GetDolphinUpdateUrl(bool InPreDolphin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetDolphinUpdateUrl");
    struct
    {
        bool InPreDolphin;
        struct FString ReturnValue;
    } Parms{};
    Parms.InPreDolphin = (bool)InPreDolphin;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::GetDolphinResourceVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetDolphinResourceVersion");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::GetDolphinProgramVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetDolphinProgramVersion");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonConfigStatics::GetDolphinChannelID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetDolphinChannelID");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::GetDLCPredownloadPufferUpdateUrl(bool InPrePuffer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetDLCPredownloadPufferUpdateUrl");
    struct
    {
        bool InPrePuffer;
        struct FString ReturnValue;
    } Parms{};
    Parms.InPrePuffer = (bool)InPrePuffer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonConfigStatics::GetDLCPredownloadPufferChannelID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetDLCPredownloadPufferChannelID");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonConfigStatics::GetDLCPredownloadDolphinChannelID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetDLCPredownloadDolphinChannelID");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonConfigStatics::GetCookedMapList(struct TArray<struct FString>& CookMapList, struct TArray<struct FString>& TestMapList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetCookedMapList");
    struct
    {
        struct TArray<struct FString> CookMapList;
        struct TArray<struct FString> TestMapList;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    CookMapList = Parms.CookMapList;
    TestMapList = Parms.TestMapList;
}

bool UUACommonConfigStatics::GetComplianceFlagC()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetComplianceFlagC");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonConfigStatics::GetComplianceFlagB()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetComplianceFlagB");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonConfigStatics::GetComplianceFlagA()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetComplianceFlagA");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::GetCDNUrl()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetCDNUrl");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::GetAssetPathByKey(struct FString Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetAssetPathByKey");
    struct
    {
        struct FString Key;
        struct FString ReturnValue;
    } Parms{};
    Parms.Key = (struct FString)Key;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::GetAppVersionDisplayFromVersionID(uint64_t ClientVersionID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetAppVersionDisplayFromVersionID");
    struct
    {
        uint64_t ClientVersionID;
        struct FString ReturnValue;
    } Parms{};
    Parms.ClientVersionID = (uint64_t)ClientVersionID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::GetAppVersionDisplay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetAppVersionDisplay");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::GetAppVersion64()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetAppVersion64");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::GetAppVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetAppVersion");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonConfigStatics::GetAndroidBlackSensorDevices(struct TArray<struct FString>& Devices)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "GetAndroidBlackSensorDevices");
    struct
    {
        struct TArray<struct FString> Devices;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Devices = Parms.Devices;
}

struct FString UUACommonConfigStatics::FlushXunyouPopRecordTime(bool bIsRead, struct FString LastXunyouPopRecordTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushXunyouPopRecordTime");
    struct
    {
        bool bIsRead;
        struct FString LastXunyouPopRecordTime;
        struct FString ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.LastXunyouPopRecordTime = (struct FString)LastXunyouPopRecordTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UUACommonConfigStatics::FlushTutorialTipsIndex(bool bIsRead, struct TArray<struct FString> TutorialTipsIndexList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushTutorialTipsIndex");
    struct
    {
        bool bIsRead;
        struct TArray<struct FString> TutorialTipsIndexList;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.TutorialTipsIndexList = (struct TArray<struct FString>)TutorialTipsIndexList;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonConfigStatics::FlushTutorialTimesInCareer(bool bIsRead, struct FString TutorialName, int32_t TutorialTimesInCareer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushTutorialTimesInCareer");
    struct
    {
        bool bIsRead;
        struct FString TutorialName;
        int32_t TutorialTimesInCareer;
        int32_t ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.TutorialName = (struct FString)TutorialName;
    Parms.TutorialTimesInCareer = (int32_t)TutorialTimesInCareer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UUACommonConfigStatics::FlushTaskDoneList(bool IsRead, struct TArray<struct FString> taskDoneIdList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushTaskDoneList");
    struct
    {
        bool IsRead;
        struct TArray<struct FString> taskDoneIdList;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.IsRead = (bool)IsRead;
    Parms.taskDoneIdList = (struct TArray<struct FString>)taskDoneIdList;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::FlushSZLobbyUrl(bool bIsRead, struct FString SZLobbyUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushSZLobbyUrl");
    struct
    {
        bool bIsRead;
        struct FString SZLobbyUrl;
        struct FString ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.SZLobbyUrl = (struct FString)SZLobbyUrl;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UUACommonConfigStatics::FlushSystemTriggerList(bool bIsRead, struct TArray<struct FString> sysTriggerList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushSystemTriggerList");
    struct
    {
        bool bIsRead;
        struct TArray<struct FString> sysTriggerList;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.sysTriggerList = (struct TArray<struct FString>)sysTriggerList;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UUACommonConfigStatics::FlushSystemTriggerDoneList(bool bIsRead, struct TArray<struct FString> sysTriggerDoneList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushSystemTriggerDoneList");
    struct
    {
        bool bIsRead;
        struct TArray<struct FString> sysTriggerDoneList;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.sysTriggerDoneList = (struct TArray<struct FString>)sysTriggerDoneList;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::FlushSHLobbyUrl(bool bIsRead, struct FString SHLobbyUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushSHLobbyUrl");
    struct
    {
        bool bIsRead;
        struct FString SHLobbyUrl;
        struct FString ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.SHLobbyUrl = (struct FString)SHLobbyUrl;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::FlushRegionCode(bool bIsRead, struct FString Code)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushRegionCode");
    struct
    {
        bool bIsRead;
        struct FString Code;
        struct FString ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.Code = (struct FString)Code;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonConfigStatics::FlushOpenPhoneLimitation(bool bIsRead, bool bPhoneLimitationSetting)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushOpenPhoneLimitation");
    struct
    {
        bool bIsRead;
        bool bPhoneLimitationSetting;
        bool ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.bPhoneLimitationSetting = (bool)bPhoneLimitationSetting;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonConfigStatics::FlushOpenBestLobbyUrlPC(bool bIsRead, bool bOpenBestLobbyUrlPC)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushOpenBestLobbyUrlPC");
    struct
    {
        bool bIsRead;
        bool bOpenBestLobbyUrlPC;
        bool ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.bOpenBestLobbyUrlPC = (bool)bOpenBestLobbyUrlPC;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonConfigStatics::FlushOpenBestLobbyUrl(bool bIsRead, bool bOpenBestLobbuUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushOpenBestLobbyUrl");
    struct
    {
        bool bIsRead;
        bool bOpenBestLobbuUrl;
        bool ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.bOpenBestLobbuUrl = (bool)bOpenBestLobbuUrl;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonConfigStatics::FlushNeedAutoLogin(bool bIsRead, bool needAutoLogin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushNeedAutoLogin");
    struct
    {
        bool bIsRead;
        bool needAutoLogin;
        bool ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.needAutoLogin = (bool)needAutoLogin;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::FlushMSDKUrl(bool bIsRead, struct FString MSDKUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushMSDKUrl");
    struct
    {
        bool bIsRead;
        struct FString MSDKUrl;
        struct FString ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.MSDKUrl = (struct FString)MSDKUrl;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UUACommonConfigStatics::FlushMailReceiveList(bool IsRead, struct TArray<struct FString> mailReceivedTypeList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushMailReceiveList");
    struct
    {
        bool IsRead;
        struct TArray<struct FString> mailReceivedTypeList;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.IsRead = (bool)IsRead;
    Parms.mailReceivedTypeList = (struct TArray<struct FString>)mailReceivedTypeList;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::FlushLastServerName(bool bIsRead, struct FString LastServerIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushLastServerName");
    struct
    {
        bool bIsRead;
        struct FString LastServerIndex;
        struct FString ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.LastServerIndex = (struct FString)LastServerIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::FlushLastNickName(bool bIsRead, struct FString LastNickName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushLastNickName");
    struct
    {
        bool bIsRead;
        struct FString LastNickName;
        struct FString ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.LastNickName = (struct FString)LastNickName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::FlushLastLoginName(bool bIsRead, struct FString LastLoginName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushLastLoginName");
    struct
    {
        bool bIsRead;
        struct FString LastLoginName;
        struct FString ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.LastLoginName = (struct FString)LastLoginName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::FlushLastCrashInfo(bool bIsRead, struct FString LastLastCrashInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushLastCrashInfo");
    struct
    {
        bool bIsRead;
        struct FString LastLastCrashInfo;
        struct FString ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.LastLastCrashInfo = (struct FString)LastLastCrashInfo;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonConfigStatics::FlushLastChannelType(bool bIsRead, int32_t LastChannelNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushLastChannelType");
    struct
    {
        bool bIsRead;
        int32_t LastChannelNum;
        int32_t ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.LastChannelNum = (int32_t)LastChannelNum;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UUACommonConfigStatics::FlushItemPickList(bool IsRead, struct TArray<struct FString> itemIDAndTypeList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushItemPickList");
    struct
    {
        bool IsRead;
        struct TArray<struct FString> itemIDAndTypeList;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.IsRead = (bool)IsRead;
    Parms.itemIDAndTypeList = (struct TArray<struct FString>)itemIDAndTypeList;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonConfigStatics::FlushIsFirstOpenGame(bool bIsRead, bool bIsFirstOpenGame)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushIsFirstOpenGame");
    struct
    {
        bool bIsRead;
        bool bIsFirstOpenGame;
        bool ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.bIsFirstOpenGame = (bool)bIsFirstOpenGame;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonConfigStatics::FlushIsFinishCPoint(bool bIsRead, bool isFinshCPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushIsFinishCPoint");
    struct
    {
        bool bIsRead;
        bool isFinshCPoint;
        bool ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.isFinshCPoint = (bool)isFinshCPoint;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonConfigStatics::FlushIsClickMainUIDownLoad(bool bIsRead, bool isClickMainUIDownLoad)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushIsClickMainUIDownLoad");
    struct
    {
        bool bIsRead;
        bool isClickMainUIDownLoad;
        bool ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.isClickMainUIDownLoad = (bool)isClickMainUIDownLoad;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::FlushIsAgreeAuthorizationOversea(bool bIsRead, struct FString AuthState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushIsAgreeAuthorizationOversea");
    struct
    {
        bool bIsRead;
        struct FString AuthState;
        struct FString ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.AuthState = (struct FString)AuthState;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonConfigStatics::FlushIsAgreeAuthorization(bool bIsRead, bool bIsAgreeAuthorization)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushIsAgreeAuthorization");
    struct
    {
        bool bIsRead;
        bool bIsAgreeAuthorization;
        bool ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.bIsAgreeAuthorization = (bool)bIsAgreeAuthorization;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonConfigStatics::FlushFreeTrafficSystemEnable(bool bIsRead, bool bFreeTrafficSystemEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushFreeTrafficSystemEnable");
    struct
    {
        bool bIsRead;
        bool bFreeTrafficSystemEnable;
        bool ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.bFreeTrafficSystemEnable = (bool)bFreeTrafficSystemEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonConfigStatics::FlushFreeTrafficLobbyAddressInfo(bool bIsRead, struct TArray<struct FString>& InfoArr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushFreeTrafficLobbyAddressInfo");
    struct
    {
        bool bIsRead;
        struct TArray<struct FString> InfoArr;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InfoArr = Parms.InfoArr;
}

struct FString UUACommonConfigStatics::FlushFreeTrafficBuyUrl(bool bIsRead, struct FString FreeTrafficBuyUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushFreeTrafficBuyUrl");
    struct
    {
        bool bIsRead;
        struct FString FreeTrafficBuyUrl;
        struct FString ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.FreeTrafficBuyUrl = (struct FString)FreeTrafficBuyUrl;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonConfigStatics::FlushFirstTimeToRange(bool bIsRead, bool bFirstTimeToRange)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushFirstTimeToRange");
    struct
    {
        bool bIsRead;
        bool bFirstTimeToRange;
        bool ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.bFirstTimeToRange = (bool)bFirstTimeToRange;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UUACommonConfigStatics::FlushEventTriggerList(bool bIsRead, struct TArray<struct FString> eventTriggerList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushEventTriggerList");
    struct
    {
        bool bIsRead;
        struct TArray<struct FString> eventTriggerList;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.eventTriggerList = (struct TArray<struct FString>)eventTriggerList;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonConfigStatics::FlushEEAAgree(bool bIsRead, bool bAgree)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushEEAAgree");
    struct
    {
        bool bIsRead;
        bool bAgree;
        bool ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.bAgree = (bool)bAgree;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UUACommonConfigStatics::FlushDownloadRecordUMGList(bool bIsRead, struct TArray<struct FString> DisplayedUMGList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushDownloadRecordUMGList");
    struct
    {
        bool bIsRead;
        struct TArray<struct FString> DisplayedUMGList;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.DisplayedUMGList = (struct TArray<struct FString>)DisplayedUMGList;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::FlushDownloadRecordLoginTime(bool bIsRead, struct FString LastRecordLoginTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushDownloadRecordLoginTime");
    struct
    {
        bool bIsRead;
        struct FString LastRecordLoginTime;
        struct FString ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.LastRecordLoginTime = (struct FString)LastRecordLoginTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonConfigStatics::FlushCheckPointIndex(bool bIsRead, int32_t PointIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushCheckPointIndex");
    struct
    {
        bool bIsRead;
        int32_t PointIndex;
        int32_t ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.PointIndex = (int32_t)PointIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonConfigStatics::FlushCheckIsFirstLose(bool IsRead, bool isFirstLose)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushCheckIsFirstLose");
    struct
    {
        bool IsRead;
        bool isFirstLose;
        bool ReturnValue;
    } Parms{};
    Parms.IsRead = (bool)IsRead;
    Parms.isFirstLose = (bool)isFirstLose;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonConfigStatics::FlushCheckIsDefaultGamepadSetting(bool bIsRead, bool bIsDefaultGamepadSetting)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushCheckIsDefaultGamepadSetting");
    struct
    {
        bool bIsRead;
        bool bIsDefaultGamepadSetting;
        bool ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.bIsDefaultGamepadSetting = (bool)bIsDefaultGamepadSetting;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonConfigStatics::FlushCellularCheckBoxChecked(bool bIsRead, bool bCellularBoxChecked)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushCellularCheckBoxChecked");
    struct
    {
        bool bIsRead;
        bool bCellularBoxChecked;
        bool ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.bCellularBoxChecked = (bool)bCellularBoxChecked;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::FlushCatchIPRegionCode(bool bIsRead, struct FString Code)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushCatchIPRegionCode");
    struct
    {
        bool bIsRead;
        struct FString Code;
        struct FString ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.Code = (struct FString)Code;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UUACommonConfigStatics::FlushBCheckDebuffEffect(bool bIsRead, struct TArray<struct FString> DebuffCheckArray)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushBCheckDebuffEffect");
    struct
    {
        bool bIsRead;
        struct TArray<struct FString> DebuffCheckArray;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.DebuffCheckArray = (struct TArray<struct FString>)DebuffCheckArray;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UUACommonConfigStatics::FlushAdjustRepotActArry(bool bIsRead, struct TArray<struct FString> OpenActIDList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushAdjustRepotActArry");
    struct
    {
        bool bIsRead;
        struct TArray<struct FString> OpenActIDList;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.OpenActIDList = (struct TArray<struct FString>)OpenActIDList;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonConfigStatics::FlushAdjustReportMapId(bool bIsRead, int32_t MapID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushAdjustReportMapId");
    struct
    {
        bool bIsRead;
        int32_t MapID;
        int32_t ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.MapID = (int32_t)MapID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonConfigStatics::FlushActiveTime(bool bIsRead, int32_t ActiveTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "FlushActiveTime");
    struct
    {
        bool bIsRead;
        int32_t ActiveTime;
        int32_t ReturnValue;
    } Parms{};
    Parms.bIsRead = (bool)bIsRead;
    Parms.ActiveTime = (int32_t)ActiveTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonConfigStatics::ConvertToDolphinVersion(struct FString InFiveNumVersion, bool InToAssetVersion)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonConfigStatics", "ConvertToDolphinVersion");
    struct
    {
        struct FString InFiveNumVersion;
        bool InToAssetVersion;
        struct FString ReturnValue;
    } Parms{};
    Parms.InFiveNumVersion = (struct FString)InFiveNumVersion;
    Parms.InToAssetVersion = (bool)InToAssetVersion;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UUACommonStatics
bool UUACommonStatics::Wrapper_MPE_HasWorkloadBalance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "Wrapper_MPE_HasWorkloadBalance");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonStatics::WMStop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "WMStop");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonStatics::WMStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "WMStart");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonStatics::WMInitWithCount(struct FString Msg, int32_t MarkCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "WMInitWithCount");
    struct
    {
        struct FString Msg;
        int32_t MarkCount;
        int32_t ReturnValue;
    } Parms{};
    Parms.Msg = (struct FString)Msg;
    Parms.MarkCount = (int32_t)MarkCount;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonStatics::WMGetValidWidth()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "WMGetValidWidth");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonStatics::WMGetValidHeight()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "WMGetValidHeight");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonStatics::WMExecute()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "WMExecute");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonStatics::WMCounter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "WMCounter");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonStatics::WidgetToTextureNew(struct UWidget* Widget, const struct FVector2D& DrawSize, struct FString SavePath, int32_t CompressionQuality, bool bSave, float Scale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "WidgetToTextureNew");
    struct
    {
        struct UWidget* Widget;
        struct FVector2D DrawSize;
        struct FString SavePath;
        int32_t CompressionQuality;
        bool bSave;
        float Scale;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    Parms.DrawSize = (struct FVector2D)DrawSize;
    Parms.SavePath = (struct FString)SavePath;
    Parms.CompressionQuality = (int32_t)CompressionQuality;
    Parms.bSave = (bool)bSave;
    Parms.Scale = (float)Scale;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FString UUACommonStatics::WidgetToTexture(struct UWidget* Widget, struct FVector2D DrawSize, struct FString SavePath, int32_t CompressionQuality, bool bSave, float Scale, struct FString PandoraImgName, bool bRT, struct UTextureRenderTarget2D* NewTextureRenderTarget, bool bReverse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "WidgetToTexture");
    struct
    {
        struct UWidget* Widget;
        struct FVector2D DrawSize;
        struct FString SavePath;
        int32_t CompressionQuality;
        bool bSave;
        float Scale;
        struct FString PandoraImgName;
        bool bRT;
        struct UTextureRenderTarget2D* NewTextureRenderTarget;
        bool bReverse;
        struct FString ReturnValue;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    Parms.DrawSize = (struct FVector2D)DrawSize;
    Parms.SavePath = (struct FString)SavePath;
    Parms.CompressionQuality = (int32_t)CompressionQuality;
    Parms.bSave = (bool)bSave;
    Parms.Scale = (float)Scale;
    Parms.PandoraImgName = (struct FString)PandoraImgName;
    Parms.bRT = (bool)bRT;
    Parms.NewTextureRenderTarget = (struct UTextureRenderTarget2D*)NewTextureRenderTarget;
    Parms.bReverse = (bool)bReverse;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonStatics::ValidateAvatars(struct ASGCharacter* Character, ECharacterSex InCharacterSex, struct TArray<int64_t>& AvatarItemIDs, struct TArray<int64_t>& InvalidAvatarItemIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "ValidateAvatars");
    struct
    {
        struct ASGCharacter* Character;
        enum ECharacterSex InCharacterSex;
        struct TArray<int64_t> AvatarItemIDs;
        struct TArray<int64_t> InvalidAvatarItemIDs;
        bool ReturnValue;
    } Parms{};
    Parms.Character = (struct ASGCharacter*)Character;
    Parms.InCharacterSex = (enum ECharacterSex)InCharacterSex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    AvatarItemIDs = Parms.AvatarItemIDs;
    InvalidAvatarItemIDs = Parms.InvalidAvatarItemIDs;
    return Parms.ReturnValue;
}

void UUACommonStatics::UsrDebug()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "UsrDebug");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::UploadPSO()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "UploadPSO");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::UploadInnerCosFile(struct FString Cos, struct FString Str)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "UploadInnerCosFile");
    struct
    {
        struct FString Cos;
        struct FString Str;
    } Parms{};
    Parms.Cos = (struct FString)Cos;
    Parms.Str = (struct FString)Str;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::UploadCosFile(struct FString cosFile, struct FString srcFile)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "UploadCosFile");
    struct
    {
        struct FString cosFile;
        struct FString srcFile;
    } Parms{};
    Parms.cosFile = (struct FString)cosFile;
    Parms.srcFile = (struct FString)srcFile;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::UpdateItemSkin(struct ASGCharacter* Character, int64_t SkinID, bool bGiveItem, bool bOnlyUpdateFirstMatch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "UpdateItemSkin");
    struct
    {
        struct ASGCharacter* Character;
        int64_t SkinID;
        bool bGiveItem;
        bool bOnlyUpdateFirstMatch;
    } Parms{};
    Parms.Character = (struct ASGCharacter*)Character;
    Parms.SkinID = (int64_t)SkinID;
    Parms.bGiveItem = (bool)bGiveItem;
    Parms.bOnlyUpdateFirstMatch = (bool)bOnlyUpdateFirstMatch;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::UpdateInventoryNew(struct ASGCharacter* PreviewCharacter, struct TArray<struct USGPlayerItemInfoBase*>& InventoryArray, bool bForceUpdateAnimation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "UpdateInventoryNew");
    struct
    {
        struct ASGCharacter* PreviewCharacter;
        struct TArray<struct USGPlayerItemInfoBase*> InventoryArray;
        bool bForceUpdateAnimation;
    } Parms{};
    Parms.PreviewCharacter = (struct ASGCharacter*)PreviewCharacter;
    Parms.bForceUpdateAnimation = (bool)bForceUpdateAnimation;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InventoryArray = Parms.InventoryArray;
}

void UUACommonStatics::UpdateGestureIdsAndVoiceIds(struct ASGCharacter* Character, uint64_t AvatarSuitID, uint64_t AvatarId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "UpdateGestureIdsAndVoiceIds");
    struct
    {
        struct ASGCharacter* Character;
        uint64_t AvatarSuitID;
        uint64_t AvatarId;
    } Parms{};
    Parms.Character = (struct ASGCharacter*)Character;
    Parms.AvatarSuitID = (uint64_t)AvatarSuitID;
    Parms.AvatarId = (uint64_t)AvatarId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::UpdateCharacterAnimation(struct ASGCharacter* PreviewCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "UpdateCharacterAnimation");
    struct
    {
        struct ASGCharacter* PreviewCharacter;
    } Parms{};
    Parms.PreviewCharacter = (struct ASGCharacter*)PreviewCharacter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::UpdateBadgesAsync(struct ASGCharacter* Character, const struct TArray<int64_t>& itemIds, const struct TArray<ESGBadgeAttach>& attachPoses)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "UpdateBadgesAsync");
    struct
    {
        struct ASGCharacter* Character;
        struct TArray<int64_t> itemIds;
        struct TArray<ESGBadgeAttach> attachPoses;
    } Parms{};
    Parms.Character = (struct ASGCharacter*)Character;
    Parms.itemIds = (struct TArray<int64_t>)itemIds;
    Parms.attachPoses = (struct TArray<ESGBadgeAttach>)attachPoses;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::UpdateBadgeAsync(struct ASGCharacter* Character, int64_t itemID, ESGBadgeAttach attachPos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "UpdateBadgeAsync");
    struct
    {
        struct ASGCharacter* Character;
        int64_t itemID;
        enum ESGBadgeAttach attachPos;
    } Parms{};
    Parms.Character = (struct ASGCharacter*)Character;
    Parms.itemID = (int64_t)itemID;
    Parms.attachPos = (enum ESGBadgeAttach)attachPos;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::UpdateBadge(struct ASGCharacter* Character, int64_t itemID, ESGBadgeAttach attachPos, int64_t AssociatedInvItemId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "UpdateBadge");
    struct
    {
        struct ASGCharacter* Character;
        int64_t itemID;
        enum ESGBadgeAttach attachPos;
        int64_t AssociatedInvItemId;
    } Parms{};
    Parms.Character = (struct ASGCharacter*)Character;
    Parms.itemID = (int64_t)itemID;
    Parms.attachPos = (enum ESGBadgeAttach)attachPos;
    Parms.AssociatedInvItemId = (int64_t)AssociatedInvItemId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::UpdateAvatarNew(struct ASGCharacter* Character, ECharacterSex InCharacterSex, struct FSGAvatarWrappedInfo AvatarWrappedInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "UpdateAvatarNew");
    struct
    {
        struct ASGCharacter* Character;
        enum ECharacterSex InCharacterSex;
        struct FSGAvatarWrappedInfo AvatarWrappedInfo;
    } Parms{};
    Parms.Character = (struct ASGCharacter*)Character;
    Parms.InCharacterSex = (enum ECharacterSex)InCharacterSex;
    Parms.AvatarWrappedInfo = (struct FSGAvatarWrappedInfo)AvatarWrappedInfo;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::UpdateAvatarFromConsoleByString(struct ASGCharacter* Character, ECharacterSex InCharacterSex, struct FString InAvatarsIdStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "UpdateAvatarFromConsoleByString");
    struct
    {
        struct ASGCharacter* Character;
        enum ECharacterSex InCharacterSex;
        struct FString InAvatarsIdStr;
    } Parms{};
    Parms.Character = (struct ASGCharacter*)Character;
    Parms.InCharacterSex = (enum ECharacterSex)InCharacterSex;
    Parms.InAvatarsIdStr = (struct FString)InAvatarsIdStr;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UUACommonStatics::UObjectHasAnyFlags(struct UObject* Obj, int32_t flag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "UObjectHasAnyFlags");
    struct
    {
        struct UObject* Obj;
        int32_t flag;
        bool ReturnValue;
    } Parms{};
    Parms.Obj = (struct UObject*)Obj;
    Parms.flag = (int32_t)flag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UUACommonStatics::UnrotateVectorByRotator(struct FRotator Rotator, struct FVector Vector)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "UnrotateVectorByRotator");
    struct
    {
        struct FRotator Rotator;
        struct FVector Vector;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Rotator = (struct FRotator)Rotator;
    Parms.Vector = (struct FVector)Vector;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonStatics::UnloadWidgetRender()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACommonStatics", "UnloadWidgetRender");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::ULocalF(struct FString CosPath, struct FString localPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "ULocalF");
    struct
    {
        struct FString CosPath;
        struct FString localPath;
    } Parms{};
    Parms.CosPath = (struct FString)CosPath;
    Parms.localPath = (struct FString)localPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::UATestANR()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "UATestANR");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::UamMakeManualCrashForDebug()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "UamMakeManualCrashForDebug");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::UamGetAllObjectsByClassName(struct FString InClassName, struct TArray<struct UObject*>& OutObjectsArr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "UamGetAllObjectsByClassName");
    struct
    {
        struct FString InClassName;
        struct TArray<struct UObject*> OutObjectsArr;
    } Parms{};
    Parms.InClassName = (struct FString)InClassName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutObjectsArr = Parms.OutObjectsArr;
}

void UUACommonStatics::UamDebugGunSkinMaterial(struct FString MaterialName, struct FString ParamName, int32_t ParamType, struct FString TexPath, float Param0, float Param1, float Param2, float Param3)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "UamDebugGunSkinMaterial");
    struct
    {
        struct FString MaterialName;
        struct FString ParamName;
        int32_t ParamType;
        struct FString TexPath;
        float Param0;
        float Param1;
        float Param2;
        float Param3;
    } Parms{};
    Parms.MaterialName = (struct FString)MaterialName;
    Parms.ParamName = (struct FString)ParamName;
    Parms.ParamType = (int32_t)ParamType;
    Parms.TexPath = (struct FString)TexPath;
    Parms.Param0 = (float)Param0;
    Parms.Param1 = (float)Param1;
    Parms.Param2 = (float)Param2;
    Parms.Param3 = (float)Param3;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::UamAddDeferredConsoleCommand(struct FString InCmd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "UamAddDeferredConsoleCommand");
    struct
    {
        struct FString InCmd;
    } Parms{};
    Parms.InCmd = (struct FString)InCmd;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::TryReportString(struct FString inStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "TryReportString");
    struct
    {
        struct FString inStr;
    } Parms{};
    Parms.inStr = (struct FString)inStr;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::TryPerformanceReport()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "TryPerformanceReport");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::TryPerformanceRender()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "TryPerformanceRender");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::TryHotFix()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "TryHotFix");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::TryConditionReport()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "TryConditionReport");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::TriggerIOSHaptic(int32_t times)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "TriggerIOSHaptic");
    struct
    {
        int32_t times;
    } Parms{};
    Parms.times = (int32_t)times;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FString UUACommonStatics::TransSoftObj2PathStr(struct FSoftObjectPath softObjPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "TransSoftObj2PathStr");
    struct
    {
        struct FSoftObjectPath softObjPath;
        struct FString ReturnValue;
    } Parms{};
    Parms.softObjPath = (struct FSoftObjectPath)softObjPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonStatics::ToggleGamefileMaskToShaderPipelineCache(int64_t InMask, bool bForceSet)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "ToggleGamefileMaskToShaderPipelineCache");
    struct
    {
        int64_t InMask;
        bool bForceSet;
    } Parms{};
    Parms.InMask = (int64_t)InMask;
    Parms.bForceSet = (bool)bForceSet;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::ToggleCompileMaskToShaderPipelineCache(int64_t InCompileask, bool bForceSet)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "ToggleCompileMaskToShaderPipelineCache");
    struct
    {
        int64_t InCompileask;
        bool bForceSet;
    } Parms{};
    Parms.InCompileask = (int64_t)InCompileask;
    Parms.bForceSet = (bool)bForceSet;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::ThrowEquip(struct ACharacter* SGCharacter, EAttachPosition attachPos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "ThrowEquip");
    struct
    {
        struct ACharacter* SGCharacter;
        enum EAttachPosition attachPos;
    } Parms{};
    Parms.SGCharacter = (struct ACharacter*)SGCharacter;
    Parms.attachPos = (enum EAttachPosition)attachPos;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::TestSleep(int32_t Time)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "TestSleep");
    struct
    {
        int32_t Time;
    } Parms{};
    Parms.Time = (int32_t)Time;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::TestSetAndroidSurfaceSize(int32_t Width, int32_t Height)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "TestSetAndroidSurfaceSize");
    struct
    {
        int32_t Width;
        int32_t Height;
    } Parms{};
    Parms.Width = (int32_t)Width;
    Parms.Height = (int32_t)Height;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::TestSaveFrame()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "TestSaveFrame");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::TestNotifyMpe(bool Condition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "TestNotifyMpe");
    struct
    {
        bool Condition;
    } Parms{};
    Parms.Condition = (bool)Condition;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::TestHotfix()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "TestHotfix");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::TestFlushRender()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "TestFlushRender");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::TestFlushLoading()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "TestFlushLoading");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::SynchronizeWidgetProperties(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SynchronizeWidgetProperties");
    struct
    {
        struct UWidget* Widget;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::SyncFrameID(int32_t frameID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SyncFrameID");
    struct
    {
        int32_t frameID;
    } Parms{};
    Parms.frameID = (int32_t)frameID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::SwitchShowButtonOutline(struct UWorld* InWorld)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SwitchShowButtonOutline");
    struct
    {
        struct UWorld* InWorld;
    } Parms{};
    Parms.InWorld = (struct UWorld*)InWorld;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::SwitchLocalizationLog(struct UWorld* InWorld)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SwitchLocalizationLog");
    struct
    {
        struct UWorld* InWorld;
    } Parms{};
    Parms.InWorld = (struct UWorld*)InWorld;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::SwitchCopyText(struct UWorld* InWorld)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SwitchCopyText");
    struct
    {
        struct UWorld* InWorld;
    } Parms{};
    Parms.InWorld = (struct UWorld*)InWorld;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UUACommonStatics::SupportRemotePSO()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SupportRemotePSO");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonStatics::StopLevelSequence(struct UObject* World, struct FName Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "StopLevelSequence");
    struct
    {
        struct UObject* World;
        struct FName Tag;
    } Parms{};
    Parms.World = (struct UObject*)World;
    Parms.Tag = (struct FName)Tag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::StopDebugHelperThread()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "StopDebugHelperThread");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::StartUploadCPPVM()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "StartUploadCPPVM");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UUACommonStatics::StartDebugHelperThread()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "StartDebugHelperThread");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonStatics::SnapshotCustomTable(struct FString& Table, int32_t SearchMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SnapshotCustomTable");
    struct
    {
        struct FString Table;
        int32_t SearchMode;
    } Parms{};
    Parms.SearchMode = (int32_t)SearchMode;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Table = Parms.Table;
}

void UUACommonStatics::Snapshot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "Snapshot");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::SimulateClick(float X, float Y)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SimulateClick");
    struct
    {
        float X;
        float Y;
    } Parms{};
    Parms.X = (float)X;
    Parms.Y = (float)Y;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UUACommonStatics::ShutdownShaderPipeline()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "ShutdownShaderPipeline");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonStatics::ShowFilePicker()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACommonStatics", "ShowFilePicker");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::SetWrapAtOfTextBlock(struct UTextBlock* theTextBlock, float InWrapTextAt)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SetWrapAtOfTextBlock");
    struct
    {
        struct UTextBlock* theTextBlock;
        float InWrapTextAt;
    } Parms{};
    Parms.theTextBlock = (struct UTextBlock*)theTextBlock;
    Parms.InWrapTextAt = (float)InWrapTextAt;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::SetWidgetFPropertyMargin(struct FString PropertyName, const struct FMargin& MarginTable, struct UUserWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SetWidgetFPropertyMargin");
    struct
    {
        struct FString PropertyName;
        struct FMargin MarginTable;
        struct UUserWidget* Widget;
    } Parms{};
    Parms.PropertyName = (struct FString)PropertyName;
    Parms.MarginTable = (struct FMargin)MarginTable;
    Parms.Widget = (struct UUserWidget*)Widget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::SetUseJavaIsPlayingMethod(bool Condition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SetUseJavaIsPlayingMethod");
    struct
    {
        bool Condition;
    } Parms{};
    Parms.Condition = (bool)Condition;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::SetUseJavaGetCurrentPosition(bool Condition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SetUseJavaGetCurrentPosition");
    struct
    {
        bool Condition;
    } Parms{};
    Parms.Condition = (bool)Condition;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::SetTencentWebViewShown(bool InFlag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SetTencentWebViewShown");
    struct
    {
        bool InFlag;
    } Parms{};
    Parms.InFlag = (bool)InFlag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::SetTargetFps(int32_t TargetFps)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SetTargetFps");
    struct
    {
        int32_t TargetFps;
    } Parms{};
    Parms.TargetFps = (int32_t)TargetFps;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UUACommonStatics::SetStreamingLevelTranslation(struct UWorld* World, struct FName LevelName, struct FVector InTranslation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SetStreamingLevelTranslation");
    struct
    {
        struct UWorld* World;
        struct FName LevelName;
        struct FVector InTranslation;
        bool ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.LevelName = (struct FName)LevelName;
    Parms.InTranslation = (struct FVector)InTranslation;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonStatics::SetStateForUamFrameRateVarianceCalculator(float TargetLogicFps, float InDuration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SetStateForUamFrameRateVarianceCalculator");
    struct
    {
        float TargetLogicFps;
        float InDuration;
    } Parms{};
    Parms.TargetLogicFps = (float)TargetLogicFps;
    Parms.InDuration = (float)InDuration;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::SetSlateCursorRadius(float InRadius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SetSlateCursorRadius");
    struct
    {
        float InRadius;
    } Parms{};
    Parms.InRadius = (float)InRadius;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::SetScreenOrientationIOS(int32_t InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SetScreenOrientationIOS");
    struct
    {
        int32_t InValue;
    } Parms{};
    Parms.InValue = (int32_t)InValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::SetScreenOrientation(int32_t InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SetScreenOrientation");
    struct
    {
        int32_t InValue;
    } Parms{};
    Parms.InValue = (int32_t)InValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::SetSceneRenderingEnable(bool Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SetSceneRenderingEnable");
    struct
    {
        bool Enable;
    } Parms{};
    Parms.Enable = (bool)Enable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::SetRemotePSOPath(struct FString InRemotePSOPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SetRemotePSOPath");
    struct
    {
        struct FString InRemotePSOPath;
    } Parms{};
    Parms.InRemotePSOPath = (struct FString)InRemotePSOPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::SetPreCompileUsageMask(int32_t mask)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SetPreCompileUsageMask");
    struct
    {
        int32_t mask;
    } Parms{};
    Parms.mask = (int32_t)mask;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::SetPreCompileQualityLevel(int32_t qualityLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SetPreCompileQualityLevel");
    struct
    {
        int32_t qualityLevel;
    } Parms{};
    Parms.qualityLevel = (int32_t)qualityLevel;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::SetPipelineFileCacheRayQueryEnabled(bool bInEnbled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SetPipelineFileCacheRayQueryEnabled");
    struct
    {
        bool bInEnbled;
    } Parms{};
    Parms.bInEnbled = (bool)bInEnbled;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::SetNearClippingPlane(float NCP)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SetNearClippingPlane");
    struct
    {
        float NCP;
    } Parms{};
    Parms.NCP = (float)NCP;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::SetMemberWidgetByName(struct UUserWidget* OwnerWidget, struct UWidget* MemberWidget, struct FString MemberName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SetMemberWidgetByName");
    struct
    {
        struct UUserWidget* OwnerWidget;
        struct UWidget* MemberWidget;
        struct FString MemberName;
    } Parms{};
    Parms.OwnerWidget = (struct UUserWidget*)OwnerWidget;
    Parms.MemberWidget = (struct UWidget*)MemberWidget;
    Parms.MemberName = (struct FString)MemberName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::SetIsMediaPlaying(bool Condition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SetIsMediaPlaying");
    struct
    {
        bool Condition;
    } Parms{};
    Parms.Condition = (bool)Condition;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::SetGlobalInvalidationEnable(bool bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SetGlobalInvalidationEnable");
    struct
    {
        bool bEnable;
    } Parms{};
    Parms.bEnable = (bool)bEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::SetGamefileMask(int32_t mask)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SetGamefileMask");
    struct
    {
        int32_t mask;
    } Parms{};
    Parms.mask = (int32_t)mask;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::SetForceLayerIdUnderUserWidget(struct UUserWidget* InUserWidget, struct TArray<struct FString>& BackgroundWidgetNames, int32_t LayerId_BackgroundWidgets, int32_t LayerId_ForegroundWidgets)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SetForceLayerIdUnderUserWidget");
    struct
    {
        struct UUserWidget* InUserWidget;
        struct TArray<struct FString> BackgroundWidgetNames;
        int32_t LayerId_BackgroundWidgets;
        int32_t LayerId_ForegroundWidgets;
    } Parms{};
    Parms.InUserWidget = (struct UUserWidget*)InUserWidget;
    Parms.LayerId_BackgroundWidgets = (int32_t)LayerId_BackgroundWidgets;
    Parms.LayerId_ForegroundWidgets = (int32_t)LayerId_ForegroundWidgets;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    BackgroundWidgetNames = Parms.BackgroundWidgetNames;
}

void UUACommonStatics::SetForceLayerIdOnlySpecificTextBlock(struct UUserWidget* InUserWidget, struct TArray<struct FString>& WidgetNames, struct TArray<int32_t>& WidgetLayerIds, int32_t DefaultLayerId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SetForceLayerIdOnlySpecificTextBlock");
    struct
    {
        struct UUserWidget* InUserWidget;
        struct TArray<struct FString> WidgetNames;
        struct TArray<int32_t> WidgetLayerIds;
        int32_t DefaultLayerId;
    } Parms{};
    Parms.InUserWidget = (struct UUserWidget*)InUserWidget;
    Parms.DefaultLayerId = (int32_t)DefaultLayerId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    WidgetNames = Parms.WidgetNames;
    WidgetLayerIds = Parms.WidgetLayerIds;
}

void UUACommonStatics::SetForceLayerIdOnlySpecificImage(struct UUserWidget* InUserWidget, struct TArray<struct FString>& WidgetNames, struct TArray<int32_t>& WidgetLayerIds, int32_t DefaultLayerId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SetForceLayerIdOnlySpecificImage");
    struct
    {
        struct UUserWidget* InUserWidget;
        struct TArray<struct FString> WidgetNames;
        struct TArray<int32_t> WidgetLayerIds;
        int32_t DefaultLayerId;
    } Parms{};
    Parms.InUserWidget = (struct UUserWidget*)InUserWidget;
    Parms.DefaultLayerId = (int32_t)DefaultLayerId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    WidgetNames = Parms.WidgetNames;
    WidgetLayerIds = Parms.WidgetLayerIds;
}

void UUACommonStatics::SetFont(struct UTextBlock* TextBlock, struct FString InPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SetFont");
    struct
    {
        struct UTextBlock* TextBlock;
        struct FString InPath;
    } Parms{};
    Parms.TextBlock = (struct UTextBlock*)TextBlock;
    Parms.InPath = (struct FString)InPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::SetEnableReindexLayerId(bool bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SetEnableReindexLayerId");
    struct
    {
        bool bEnable;
    } Parms{};
    Parms.bEnable = (bool)bEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::SetDynamicLogLevel(int32_t InLogLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SetDynamicLogLevel");
    struct
    {
        int32_t InLogLevel;
    } Parms{};
    Parms.InLogLevel = (int32_t)InLogLevel;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UUACommonStatics::SetCulture(struct FString culture)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SetCulture");
    struct
    {
        struct FString culture;
        bool ReturnValue;
    } Parms{};
    Parms.culture = (struct FString)culture;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonStatics::SetCharacterType(struct ACharacter* PreviewCharacter, ECharacterType InCharacterType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SetCharacterType");
    struct
    {
        struct ACharacter* PreviewCharacter;
        enum ECharacterType InCharacterType;
    } Parms{};
    Parms.PreviewCharacter = (struct ACharacter*)PreviewCharacter;
    Parms.InCharacterType = (enum ECharacterType)InCharacterType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::SetCharacterMeleeWeaponHasCarving(struct ASGCharacter* Character, struct FString PlayerName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SetCharacterMeleeWeaponHasCarving");
    struct
    {
        struct ASGCharacter* Character;
        struct FString PlayerName;
    } Parms{};
    Parms.Character = (struct ASGCharacter*)Character;
    Parms.PlayerName = (struct FString)PlayerName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UUACommonStatics::SaveWidgetTexture(struct FString Path, struct UTextureRenderTarget2D* TargetRT, int32_t CompressionQuality)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SaveWidgetTexture");
    struct
    {
        struct FString Path;
        struct UTextureRenderTarget2D* TargetRT;
        int32_t CompressionQuality;
        bool ReturnValue;
    } Parms{};
    Parms.Path = (struct FString)Path;
    Parms.TargetRT = (struct UTextureRenderTarget2D*)TargetRT;
    Parms.CompressionQuality = (int32_t)CompressionQuality;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonStatics::SaveStringArray(struct TArray<struct FString> stringArr, struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SaveStringArray");
    struct
    {
        struct TArray<struct FString> stringArr;
        struct FString Path;
    } Parms{};
    Parms.stringArr = (struct TArray<struct FString>)stringArr;
    Parms.Path = (struct FString)Path;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::SaveServiceTable(struct TArray<struct FServiceConfTableRow> serviceConfs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SaveServiceTable");
    struct
    {
        struct TArray<struct FServiceConfTableRow> serviceConfs;
    } Parms{};
    Parms.serviceConfs = (struct TArray<struct FServiceConfTableRow>)serviceConfs;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UUACommonStatics::SaveRenderTargetToFile(struct UTextureRenderTarget2D* rt, struct FString fileDestination)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SaveRenderTargetToFile");
    struct
    {
        struct UTextureRenderTarget2D* rt;
        struct FString fileDestination;
        bool ReturnValue;
    } Parms{};
    Parms.rt = (struct UTextureRenderTarget2D*)rt;
    Parms.fileDestination = (struct FString)fileDestination;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonStatics::SavePanelTable(struct TArray<struct FPanelConfTableRow> panelConfs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SavePanelTable");
    struct
    {
        struct TArray<struct FPanelConfTableRow> panelConfs;
    } Parms{};
    Parms.panelConfs = (struct TArray<struct FPanelConfTableRow>)panelConfs;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::SaveModuleTable(const struct TArray<struct FModuleConfTableRow>& moduleConfs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SaveModuleTable");
    struct
    {
        struct TArray<struct FModuleConfTableRow> moduleConfs;
    } Parms{};
    Parms.moduleConfs = (struct TArray<struct FModuleConfTableRow>)moduleConfs;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::SaveImageFromTexture2DDy(struct UTexture2DDynamic* InDyTex, struct FString DesPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "SaveImageFromTexture2DDy");
    struct
    {
        struct UTexture2DDynamic* InDyTex;
        struct FString DesPath;
    } Parms{};
    Parms.InDyTex = (struct UTexture2DDynamic*)InDyTex;
    Parms.DesPath = (struct FString)DesPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FVector UUACommonStatics::RotateVectorByRotator(struct FRotator Rotator, struct FVector Vector)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "RotateVectorByRotator");
    struct
    {
        struct FRotator Rotator;
        struct FVector Vector;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Rotator = (struct FRotator)Rotator;
    Parms.Vector = (struct FVector)Vector;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FRotator UUACommonStatics::RotateByQuaternion(struct FRotator AddRotator, struct FRotator OrigRotator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "RotateByQuaternion");
    struct
    {
        struct FRotator AddRotator;
        struct FRotator OrigRotator;
        struct FRotator ReturnValue;
    } Parms{};
    Parms.AddRotator = (struct FRotator)AddRotator;
    Parms.OrigRotator = (struct FRotator)OrigRotator;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonStatics::RequestExit(bool bInForce)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "RequestExit");
    struct
    {
        bool bInForce;
    } Parms{};
    Parms.bInForce = (bool)bInForce;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::RequestBloothtoothPermission()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "RequestBloothtoothPermission");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::ReportStringToCrashsight(struct FString Title, struct FString Content)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "ReportStringToCrashsight");
    struct
    {
        struct FString Title;
        struct FString Content;
    } Parms{};
    Parms.Title = (struct FString)Title;
    Parms.Content = (struct FString)Content;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UUACommonStatics::ReportPerformanceData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "ReportPerformanceData");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonStatics::ReplaceMultilingualFontFace(struct FString CurrentLanguage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "ReplaceMultilingualFontFace");
    struct
    {
        struct FString CurrentLanguage;
    } Parms{};
    Parms.CurrentLanguage = (struct FString)CurrentLanguage;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::RenderWidgetToUTexture2D(struct UWidget* Widget, const struct FVector2D& DrawSize, struct UTextureRenderTarget2D* NewTextureRenderTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "RenderWidgetToUTexture2D");
    struct
    {
        struct UWidget* Widget;
        struct FVector2D DrawSize;
        struct UTextureRenderTarget2D* NewTextureRenderTarget;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    Parms.DrawSize = (struct FVector2D)DrawSize;
    Parms.NewTextureRenderTarget = (struct UTextureRenderTarget2D*)NewTextureRenderTarget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::RenderWidgetToRenderTarget(struct UWidget* Widget, const struct FVector2D& DrawSize, struct UTextureRenderTarget2D* RenderTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "RenderWidgetToRenderTarget");
    struct
    {
        struct UWidget* Widget;
        struct FVector2D DrawSize;
        struct UTextureRenderTarget2D* RenderTarget;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    Parms.DrawSize = (struct FVector2D)DrawSize;
    Parms.RenderTarget = (struct UTextureRenderTarget2D*)RenderTarget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::RenderWidget(struct UWidget* Widget, const struct FVector2D& DrawSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "RenderWidget");
    struct
    {
        struct UWidget* Widget;
        struct FVector2D DrawSize;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    Parms.DrawSize = (struct FVector2D)DrawSize;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::RemoveServiceFromTable(struct FString removeServiceName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "RemoveServiceFromTable");
    struct
    {
        struct FString removeServiceName;
    } Parms{};
    Parms.removeServiceName = (struct FString)removeServiceName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::RemovePreloadAvatars(struct ASGCharacter* Character, struct TArray<int64_t>& AvatarItemIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "RemovePreloadAvatars");
    struct
    {
        struct ASGCharacter* Character;
        struct TArray<int64_t> AvatarItemIDs;
    } Parms{};
    Parms.Character = (struct ASGCharacter*)Character;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    AvatarItemIDs = Parms.AvatarItemIDs;
}

void UUACommonStatics::RemovePanelFromTable(struct FString removePanelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "RemovePanelFromTable");
    struct
    {
        struct FString removePanelName;
    } Parms{};
    Parms.removePanelName = (struct FString)removePanelName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::RemoveModuleFromTable(struct FString removeModuleName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "RemoveModuleFromTable");
    struct
    {
        struct FString removeModuleName;
    } Parms{};
    Parms.removeModuleName = (struct FString)removeModuleName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::RemoveInventory(struct ASGCharacter* PreviewCharacter, int64_t InventoryId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "RemoveInventory");
    struct
    {
        struct ASGCharacter* PreviewCharacter;
        int64_t InventoryId;
    } Parms{};
    Parms.PreviewCharacter = (struct ASGCharacter*)PreviewCharacter;
    Parms.InventoryId = (int64_t)InventoryId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::RemoveAllInventories(struct ASGCharacter* PreviewCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "RemoveAllInventories");
    struct
    {
        struct ASGCharacter* PreviewCharacter;
    } Parms{};
    Parms.PreviewCharacter = (struct ASGCharacter*)PreviewCharacter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::ReleaseWifiManagerLock()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "ReleaseWifiManagerLock");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::RefreshWindowSizeAndroid()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "RefreshWindowSizeAndroid");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::RefreshIconOfImage(struct UImage* Image, struct UObject* ICON)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "RefreshIconOfImage");
    struct
    {
        struct UImage* Image;
        struct UObject* ICON;
    } Parms{};
    Parms.Image = (struct UImage*)Image;
    Parms.ICON = (struct UObject*)ICON;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::RefreshAssembleTagItemIDMap()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "RefreshAssembleTagItemIDMap");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::PreProcessShaderProgramBinary()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "PreProcessShaderProgramBinary");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::PreloadAvatars(struct ASGCharacter* Character, struct TArray<int64_t>& AvatarItemIDs, ECharacterSex CharacterSex, bool Reset, int32_t MaxPreloadNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "PreloadAvatars");
    struct
    {
        struct ASGCharacter* Character;
        struct TArray<int64_t> AvatarItemIDs;
        enum ECharacterSex CharacterSex;
        bool Reset;
        int32_t MaxPreloadNum;
    } Parms{};
    Parms.Character = (struct ASGCharacter*)Character;
    Parms.CharacterSex = (enum ECharacterSex)CharacterSex;
    Parms.Reset = (bool)Reset;
    Parms.MaxPreloadNum = (int32_t)MaxPreloadNum;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    AvatarItemIDs = Parms.AvatarItemIDs;
}

void UUACommonStatics::PlaySound2DByName(struct UWorld* World, struct FString SoundName, struct FString Source)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "PlaySound2DByName");
    struct
    {
        struct UWorld* World;
        struct FString SoundName;
        struct FString Source;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.SoundName = (struct FString)SoundName;
    Parms.Source = (struct FString)Source;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::PlayListViewAnimOfPanel(struct UUserWidget* UserWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "PlayListViewAnimOfPanel");
    struct
    {
        struct UUserWidget* UserWidget;
    } Parms{};
    Parms.UserWidget = (struct UUserWidget*)UserWidget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::PlayLevelSequenceReverse(struct UObject* World, struct FName Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "PlayLevelSequenceReverse");
    struct
    {
        struct UObject* World;
        struct FName Tag;
    } Parms{};
    Parms.World = (struct UObject*)World;
    Parms.Tag = (struct FName)Tag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::PlayLevelSequence(struct UObject* World, struct FName Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "PlayLevelSequence");
    struct
    {
        struct UObject* World;
        struct FName Tag;
    } Parms{};
    Parms.World = (struct UObject*)World;
    Parms.Tag = (struct FName)Tag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::PlayInitAnimation(struct UUserWidget* UserWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "PlayInitAnimation");
    struct
    {
        struct UUserWidget* UserWidget;
    } Parms{};
    Parms.UserWidget = (struct UUserWidget*)UserWidget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::PlayerFileSelectpLoadDelegate__DelegateSignature(struct FString RspContent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACommonStatics", "PlayerFileSelectpLoadDelegate__DelegateSignature");
    struct
    {
        struct FString RspContent;
    } Parms{};
    Parms.RspContent = (struct FString)RspContent;
    this->ProcessEvent(Func, &Parms);
}

struct UObject* UUACommonStatics::ParseObjectByName(struct FString InObjectName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "ParseObjectByName");
    struct
    {
        struct FString InObjectName;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.InObjectName = (struct FString)InObjectName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonStatics::OpenShaderCodeLibrary(struct FString InName, struct FString InDir)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "OpenShaderCodeLibrary");
    struct
    {
        struct FString InName;
        struct FString InDir;
        bool ReturnValue;
    } Parms{};
    Parms.InName = (struct FString)InName;
    Parms.InDir = (struct FString)InDir;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonStatics::OpenPipelineFileCache(struct FString InName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "OpenPipelineFileCache");
    struct
    {
        struct FString InName;
        bool ReturnValue;
    } Parms{};
    Parms.InName = (struct FString)InName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonStatics::OnSaveCompiledPSO()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "OnSaveCompiledPSO");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::OnPreScopeCacheShaders()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "OnPreScopeCacheShaders");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::OnPostScopeCacheShaders()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "OnPostScopeCacheShaders");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::OnOpenAnimationBegin(struct UUserWidget* UserWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "OnOpenAnimationBegin");
    struct
    {
        struct UUserWidget* UserWidget;
    } Parms{};
    Parms.UserWidget = (struct UUserWidget*)UserWidget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int32_t UUACommonStatics::NumPrecompilesRemainingWithoutHack()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "NumPrecompilesRemainingWithoutHack");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonStatics::NumPrecompilesRemaining()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "NumPrecompilesRemaining");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonStatics::NumOutStandingPrecompilesRemaining()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "NumOutStandingPrecompilesRemaining");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonStatics::MpeDebugPrintSkel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "MpeDebugPrintSkel");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::ModifyServiceFromTable(const struct FServiceConfTableRow& serviceConf)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "ModifyServiceFromTable");
    struct
    {
        struct FServiceConfTableRow serviceConf;
    } Parms{};
    Parms.serviceConf = (struct FServiceConfTableRow)serviceConf;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::ModifyPanelFromTable(struct FPanelConfTableRow& panelConf)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "ModifyPanelFromTable");
    struct
    {
        struct FPanelConfTableRow panelConf;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    panelConf = Parms.panelConf;
}

void UUACommonStatics::ModifyModuleFromTable(const struct FModuleConfTableRow& moduleConf)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "ModifyModuleFromTable");
    struct
    {
        struct FModuleConfTableRow moduleConf;
    } Parms{};
    Parms.moduleConf = (struct FModuleConfTableRow)moduleConf;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::MagtPredictWorkloadCpu(int32_t CpuLoadScale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "MagtPredictWorkloadCpu");
    struct
    {
        int32_t CpuLoadScale;
    } Parms{};
    Parms.CpuLoadScale = (int32_t)CpuLoadScale;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::MagtBoostGPU(int32_t Level, int32_t Duration, int32_t flag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "MagtBoostGPU");
    struct
    {
        int32_t Level;
        int32_t Duration;
        int32_t flag;
    } Parms{};
    Parms.Level = (int32_t)Level;
    Parms.Duration = (int32_t)Duration;
    Parms.flag = (int32_t)flag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::MagtBoostCPU(int32_t Level, int32_t Duration, int32_t flag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "MagtBoostCPU");
    struct
    {
        int32_t Level;
        int32_t Duration;
        int32_t flag;
    } Parms{};
    Parms.Level = (int32_t)Level;
    Parms.Duration = (int32_t)Duration;
    Parms.flag = (int32_t)flag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::LogAssetLoadingInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "LogAssetLoadingInfo");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FVector2D UUACommonStatics::LocalSizeToViewportSize(struct UWorld* World, struct FGeometry localGeometry, struct FVector2D localSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "LocalSizeToViewportSize");
    struct
    {
        struct UWorld* World;
        struct FGeometry localGeometry;
        struct FVector2D localSize;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.localGeometry = (struct FGeometry)localGeometry;
    Parms.localSize = (struct FVector2D)localSize;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UUACommonStatics::LoadImageToTexture2DDy(struct FString ImagePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "LoadImageToTexture2DDy");
    struct
    {
        struct FString ImagePath;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.ImagePath = (struct FString)ImagePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UUACommonStatics::LoadImageToTexture2D(struct FString ImagePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "LoadImageToTexture2D");
    struct
    {
        struct FString ImagePath;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.ImagePath = (struct FString)ImagePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonStatics::LoadCppPatch()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "LoadCppPatch");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::LoadAPSDKs()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "LoadAPSDKs");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct TMap<struct FString, int32_t> UUACommonStatics::ListAllMountedPakWithOrder()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "ListAllMountedPakWithOrder");
    struct
    {
        struct TMap<struct FString, int32_t> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UUACommonStatics::ListAllMountedPaks()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "ListAllMountedPaks");
    struct
    {
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonStatics::KillParticlesForced(struct UParticleSystemComponent* ParticleSystemComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "KillParticlesForced");
    struct
    {
        struct UParticleSystemComponent* ParticleSystemComponent;
    } Parms{};
    Parms.ParticleSystemComponent = (struct UParticleSystemComponent*)ParticleSystemComponent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UUACommonStatics::IsWorldInDsMode(struct UWorld* TheWorld)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "IsWorldInDsMode");
    struct
    {
        struct UWorld* TheWorld;
        bool ReturnValue;
    } Parms{};
    Parms.TheWorld = (struct UWorld*)TheWorld;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonStatics::IsPSOWaitForStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "IsPSOWaitForStart");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonStatics::IsPCGame()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "IsPCGame");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonStatics::IsMeleeWeaponCanCarving(struct UObject* WorldContextObject, int64_t itemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "IsMeleeWeaponCanCarving");
    struct
    {
        struct UObject* WorldContextObject;
        int64_t itemID;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.itemID = (int64_t)itemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonStatics::IsInBlackSensorDevice()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "IsInBlackSensorDevice");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonStatics::IsFromLandun()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "IsFromLandun");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonStatics::IsForceUiLayerIdEnable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "IsForceUiLayerIdEnable");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonStatics::IsEnableDownloadRemotePak()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "IsEnableDownloadRemotePak");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonStatics::IsEnableCompileUsageMask()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "IsEnableCompileUsageMask");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonStatics::IsDuringPreOptimizing()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "IsDuringPreOptimizing");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonStatics::IsBadgeByInventoryId(struct UWorld* World, int64_t InventoryId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "IsBadgeByInventoryId");
    struct
    {
        struct UWorld* World;
        int64_t InventoryId;
        bool ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.InventoryId = (int64_t)InventoryId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonStatics::IsAlikeCulture(struct FString Language)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "IsAlikeCulture");
    struct
    {
        struct FString Language;
        bool ReturnValue;
    } Parms{};
    Parms.Language = (struct FString)Language;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonStatics::is_RUNNING_WITH_ASAN_DS()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "is_RUNNING_WITH_ASAN_DS");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonStatics::InitReplayInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "InitReplayInfo");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::InitPsoDelegates()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "InitPsoDelegates");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::InitFourTapUploadFeature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "InitFourTapUploadFeature");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::HitMpeOption(bool Active)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "HitMpeOption");
    struct
    {
        bool Active;
    } Parms{};
    Parms.Active = (bool)Active;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::HideAvatar(struct ASGCharacter* Character, ESGAvatarType AvatarType, bool bHide)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "HideAvatar");
    struct
    {
        struct ASGCharacter* Character;
        enum ESGAvatarType AvatarType;
        bool bHide;
    } Parms{};
    Parms.Character = (struct ASGCharacter*)Character;
    Parms.AvatarType = (enum ESGAvatarType)AvatarType;
    Parms.bHide = (bool)bHide;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::HackPrecompilesRemaining(int32_t InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "HackPrecompilesRemaining");
    struct
    {
        int32_t InValue;
    } Parms{};
    Parms.InValue = (int32_t)InValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::GoToTrainLevelWithWeapon(struct UObject* World, struct ASGCharacter* PreviewCharacter, struct TArray<struct USGPlayerItemInfoBase*>& InventoryArray)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GoToTrainLevelWithWeapon");
    struct
    {
        struct UObject* World;
        struct ASGCharacter* PreviewCharacter;
        struct TArray<struct USGPlayerItemInfoBase*> InventoryArray;
    } Parms{};
    Parms.World = (struct UObject*)World;
    Parms.PreviewCharacter = (struct ASGCharacter*)PreviewCharacter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InventoryArray = Parms.InventoryArray;
}

void UUACommonStatics::GlobalLockUiEvents(bool isLock)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GlobalLockUiEvents");
    struct
    {
        bool isLock;
    } Parms{};
    Parms.isLock = (bool)isLock;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UUACommonStatics::GiveItemToOneAI(struct ASGAICharacter* SGCharacter, int64_t itemID, int32_t Num)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GiveItemToOneAI");
    struct
    {
        struct ASGAICharacter* SGCharacter;
        int64_t itemID;
        int32_t Num;
        bool ReturnValue;
    } Parms{};
    Parms.SGCharacter = (struct ASGAICharacter*)SGCharacter;
    Parms.itemID = (int64_t)itemID;
    Parms.Num = (int32_t)Num;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonStatics::GiveItemToNearestAI(struct UObject* WorldContextObject, int64_t itemID, int32_t Num)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GiveItemToNearestAI");
    struct
    {
        struct UObject* WorldContextObject;
        int64_t itemID;
        int32_t Num;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.itemID = (int64_t)itemID;
    Parms.Num = (int32_t)Num;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonStatics::GiveItemByPart(struct ACharacter* SGCharacter, int64_t itemID, int64_t PartID, int64_t SprayID, int32_t Num, int32_t SkinID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GiveItemByPart");
    struct
    {
        struct ACharacter* SGCharacter;
        int64_t itemID;
        int64_t PartID;
        int64_t SprayID;
        int32_t Num;
        int32_t SkinID;
        bool ReturnValue;
    } Parms{};
    Parms.SGCharacter = (struct ACharacter*)SGCharacter;
    Parms.itemID = (int64_t)itemID;
    Parms.PartID = (int64_t)PartID;
    Parms.SprayID = (int64_t)SprayID;
    Parms.Num = (int32_t)Num;
    Parms.SkinID = (int32_t)SkinID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct ASGInventory*> UUACommonStatics::GiveItem(struct ACharacter* SGCharacter, int64_t itemID, int32_t Num, int32_t SkinID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GiveItem");
    struct
    {
        struct ACharacter* SGCharacter;
        int64_t itemID;
        int32_t Num;
        int32_t SkinID;
        struct TArray<struct ASGInventory*> ReturnValue;
    } Parms{};
    Parms.SGCharacter = (struct ACharacter*)SGCharacter;
    Parms.itemID = (int64_t)itemID;
    Parms.Num = (int32_t)Num;
    Parms.SkinID = (int32_t)SkinID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonStatics::GiveInventory(struct ASGCharacter* PreviewCharacter, int64_t InventoryId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GiveInventory");
    struct
    {
        struct ASGCharacter* PreviewCharacter;
        int64_t InventoryId;
    } Parms{};
    Parms.PreviewCharacter = (struct ASGCharacter*)PreviewCharacter;
    Parms.InventoryId = (int64_t)InventoryId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::GiveInventories(struct ASGCharacter* PreviewCharacter, struct TArray<int64_t>& InventoryIdList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GiveInventories");
    struct
    {
        struct ASGCharacter* PreviewCharacter;
        struct TArray<int64_t> InventoryIdList;
    } Parms{};
    Parms.PreviewCharacter = (struct ASGCharacter*)PreviewCharacter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InventoryIdList = Parms.InventoryIdList;
}

struct FString UUACommonStatics::GetWigdetHierarchyInfo(struct UWidget* InWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetWigdetHierarchyInfo");
    struct
    {
        struct UWidget* InWidget;
        struct FString ReturnValue;
    } Parms{};
    Parms.InWidget = (struct UWidget*)InWidget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGeometry UUACommonStatics::GetWidgetGeometrySync(struct FGeometry ParentGeomtry, struct UWidget* ParentWidget, struct UWidget* TargetWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetWidgetGeometrySync");
    struct
    {
        struct FGeometry ParentGeomtry;
        struct UWidget* ParentWidget;
        struct UWidget* TargetWidget;
        struct FGeometry ReturnValue;
    } Parms{};
    Parms.ParentGeomtry = (struct FGeometry)ParentGeomtry;
    Parms.ParentWidget = (struct UWidget*)ParentWidget;
    Parms.TargetWidget = (struct UWidget*)TargetWidget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UUACommonStatics::GetWidgetGeometryScale(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetWidgetGeometryScale");
    struct
    {
        struct UWidget* Widget;
        float ReturnValue;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TMap<int32_t, struct FWeaponPresetConfTableRow> UUACommonStatics::GetWeaponPresetConfigMap()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetWeaponPresetConfigMap");
    struct
    {
        struct TMap<int32_t, struct FWeaponPresetConfTableRow> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TMap<int32_t, struct FWeaponAssembleConfTableRow> UUACommonStatics::GetWeaponAssembleConfigMap()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetWeaponAssembleConfigMap");
    struct
    {
        struct TMap<int32_t, struct FWeaponAssembleConfTableRow> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UUACommonStatics::GetViewportLocalSize(struct UWorld* World)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetViewportLocalSize");
    struct
    {
        struct UWorld* World;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonStatics::GetUsingRayQueryShaderLib()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetUsingRayQueryShaderLib");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UUserWidget* UUACommonStatics::GetUserWidgetByName(struct UUserWidget* UserWidget, struct FName WidgetName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetUserWidgetByName");
    struct
    {
        struct UUserWidget* UserWidget;
        struct FName WidgetName;
        struct UUserWidget* ReturnValue;
    } Parms{};
    Parms.UserWidget = (struct UUserWidget*)UserWidget;
    Parms.WidgetName = (struct FName)WidgetName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UUACommonStatics::GetUObjectClass()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetUObjectClass");
    struct
    {
        struct UObject* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EUAUIMode UUACommonStatics::GetUIMode(struct UObject* InWorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetUIMode");
    struct
    {
        struct UObject* InWorldContextObject;
        enum EUAUIMode ReturnValue;
    } Parms{};
    Parms.InWorldContextObject = (struct UObject*)InWorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UUACommonStatics::GetUamFrameRateVariance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetUamFrameRateVariance");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UUACommonStatics::GetUamFrameRateStdDev()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetUamFrameRateStdDev");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FTimeLimitedResourcesTableRow> UUACommonStatics::GetTimeLimitedResources()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetTimeLimitedResources");
    struct
    {
        struct TArray<struct FTimeLimitedResourcesTableRow> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonStatics::GetThermalStatus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetThermalStatus");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UUACommonStatics::GetTextureResolution(struct UTexture2DDynamic* tex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetTextureResolution");
    struct
    {
        struct UTexture2DDynamic* tex;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.tex = (struct UTexture2DDynamic*)tex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonStatics::GetTextureMemorySize(struct UTexture2DDynamic* tex, uint8_t Enum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetTextureMemorySize");
    struct
    {
        struct UTexture2DDynamic* tex;
        uint8_t Enum;
        int32_t ReturnValue;
    } Parms{};
    Parms.tex = (struct UTexture2DDynamic*)tex;
    Parms.Enum = (uint8_t)Enum;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UUACommonStatics::GetTableTileNames(struct UDataTable* Table)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetTableTileNames");
    struct
    {
        struct UDataTable* Table;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.Table = (struct UDataTable*)Table;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UUACommonStatics::GetStreamingLevelTranslation(struct UWorld* World, struct FName LevelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetStreamingLevelTranslation");
    struct
    {
        struct UWorld* World;
        struct FName LevelName;
        struct FVector ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.LevelName = (struct FName)LevelName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FServiceConfTableRow> UUACommonStatics::GetServiceTable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetServiceTable");
    struct
    {
        struct TArray<struct FServiceConfTableRow> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FRotator UUACommonStatics::GetSequenceTrackStopRotation(struct ALevelSequenceActor* SequenceActor, struct FString BindingName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetSequenceTrackStopRotation");
    struct
    {
        struct ALevelSequenceActor* SequenceActor;
        struct FString BindingName;
        struct FRotator ReturnValue;
    } Parms{};
    Parms.SequenceActor = (struct ALevelSequenceActor*)SequenceActor;
    Parms.BindingName = (struct FString)BindingName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UUACommonStatics::GetSequenceTrackStopLocation(struct ALevelSequenceActor* SequenceActor, struct FString TrackName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetSequenceTrackStopLocation");
    struct
    {
        struct ALevelSequenceActor* SequenceActor;
        struct FString TrackName;
        struct FVector ReturnValue;
    } Parms{};
    Parms.SequenceActor = (struct ALevelSequenceActor*)SequenceActor;
    Parms.TrackName = (struct FString)TrackName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UUACommonStatics::GetSequenceTotalTime(struct ALevelSequenceActor* SequenceActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetSequenceTotalTime");
    struct
    {
        struct ALevelSequenceActor* SequenceActor;
        float ReturnValue;
    } Parms{};
    Parms.SequenceActor = (struct ALevelSequenceActor*)SequenceActor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonStatics::GetSampleRate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetSampleRate");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UUACommonStatics::GetRootWeaponItemID(struct FWeaponAssembleConfTableRow Row)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetRootWeaponItemID");
    struct
    {
        struct FWeaponAssembleConfTableRow Row;
        int64_t ReturnValue;
    } Parms{};
    Parms.Row = (struct FWeaponAssembleConfTableRow)Row;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonStatics::GetReplayPackage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetReplayPackage");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetReplayInfo(struct FString Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetReplayInfo");
    struct
    {
        struct FString Key;
        struct FString ReturnValue;
    } Parms{};
    Parms.Key = (struct FString)Key;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetRemotePSOIntermediateDirectory()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetRemotePSOIntermediateDirectory");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetRemotePSOHash()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetRemotePSOHash");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetRemotePSODirectory()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetRemotePSODirectory");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonStatics::GetRefCanvasPanelSlotPosition(struct UCanvasPanelSlot* Slot, struct FVector2D& postion)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetRefCanvasPanelSlotPosition");
    struct
    {
        struct UCanvasPanelSlot* Slot;
        struct FVector2D postion;
    } Parms{};
    Parms.Slot = (struct UCanvasPanelSlot*)Slot;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    postion = Parms.postion;
}

struct TArray<struct FString> UUACommonStatics::GetRayQuerySettingSection(struct FString SectionName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetRayQuerySettingSection");
    struct
    {
        struct FString SectionName;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.SectionName = (struct FString)SectionName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetPSOUploadFilePath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetPSOUploadFilePath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonStatics::GetPSOFileCacheMaxPrecompileCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetPSOFileCacheMaxPrecompileCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetPSODownloadFlagFilePath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetPSODownloadFlagFilePath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetPSOCompileKey()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetPSOCompileKey");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetPSOCacheKey()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetPSOCacheKey");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetPSOBuildingFilePath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetPSOBuildingFilePath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonStatics::GetPreCompileQualityLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetPreCompileQualityLevel");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UUACommonStatics::GetPlayerSelect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACommonStatics", "GetPlayerSelect");
    struct
    {
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetPlatformDeviceId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetPlatformDeviceId");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetPersistentDownloadDir()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetPersistentDownloadDir");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FPanelConfTableRow> UUACommonStatics::GetPanelTable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetPanelTable");
    struct
    {
        struct TArray<struct FPanelConfTableRow> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UUACommonStatics::GetPackageDependencies(struct FString InPackage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetPackageDependencies");
    struct
    {
        struct FString InPackage;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.InPackage = (struct FString)InPackage;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonStatics::GetOSVersions(struct TArray<struct FString>& OSVersionList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetOSVersions");
    struct
    {
        struct TArray<struct FString> OSVersionList;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OSVersionList = Parms.OSVersionList;
}

struct FString UUACommonStatics::GetOSVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetOSVersion");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UUACommonStatics::GetObjReferenceChainSearchInfoByName(struct FString InObjectName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetObjReferenceChainSearchInfoByName");
    struct
    {
        struct FString InObjectName;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.InObjectName = (struct FString)InObjectName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UUACommonStatics::GetObjReferenceChainSearchInfo(struct UObject* InObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetObjReferenceChainSearchInfo");
    struct
    {
        struct UObject* InObject;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.InObject = (struct UObject*)InObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetObjPathName(struct UObject* InObj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetObjPathName");
    struct
    {
        struct UObject* InObj;
        struct FString ReturnValue;
    } Parms{};
    Parms.InObj = (struct UObject*)InObj;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetObjFullName(struct UObject* InObj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetObjFullName");
    struct
    {
        struct UObject* InObj;
        struct FString ReturnValue;
    } Parms{};
    Parms.InObj = (struct UObject*)InObj;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetOACAID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetOACAID");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonStatics::GetNowMillisecondParty()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetNowMillisecondParty");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonStatics::GetNetworkConnectionType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetNetworkConnectionType");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UUACommonStatics::GetNearClippingPlane()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetNearClippingPlane");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UUACommonStatics::GetMotionEventRotation(struct FMotionEvent InMotionEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetMotionEventRotation");
    struct
    {
        struct FMotionEvent InMotionEvent;
        struct FVector ReturnValue;
    } Parms{};
    Parms.InMotionEvent = (struct FMotionEvent)InMotionEvent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FModuleConfTableRow> UUACommonStatics::GetModuleTable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetModuleTable");
    struct
    {
        struct TArray<struct FModuleConfTableRow> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonStatics::GetMeleeWeaponCarvingMaterialIndex(struct UObject* WorldContextObject, int64_t itemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetMeleeWeaponCarvingMaterialIndex");
    struct
    {
        struct UObject* WorldContextObject;
        int64_t itemID;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.itemID = (int64_t)itemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonStatics::GetMediaServerErrorCode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetMediaServerErrorCode");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetMapNameByWorld(struct UWorld* InWorld)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetMapNameByWorld");
    struct
    {
        struct UWorld* InWorld;
        struct FString ReturnValue;
    } Parms{};
    Parms.InWorld = (struct UWorld*)InWorld;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UUACommonStatics::GetLocalSizeByPaintGeo(struct UUserWidget* UserWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetLocalSizeByPaintGeo");
    struct
    {
        struct UUserWidget* UserWidget;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.UserWidget = (struct UUserWidget*)UserWidget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetLaunchURL()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetLaunchURL");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TMap<int32_t, int32_t> UUACommonStatics::GetItemSkinConfigMap()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetItemSkinConfigMap");
    struct
    {
        struct TMap<int32_t, int32_t> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonStatics::GetIsUserWidget(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetIsUserWidget");
    struct
    {
        struct UWidget* Widget;
        bool ReturnValue;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetIPString()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetIPString");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetIPAddress()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetIPAddress");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UUACommonStatics::GetInventoryItem(struct UObject* InWorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetInventoryItem");
    struct
    {
        struct UObject* InWorldContextObject;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.InWorldContextObject = (struct UObject*)InWorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ASGInventory* UUACommonStatics::GetInventoryById(struct UObject* WorldContextObject, int64_t itemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetInventoryById");
    struct
    {
        struct UObject* WorldContextObject;
        int64_t itemID;
        struct ASGInventory* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.itemID = (int64_t)itemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UUACommonStatics::GetImageResolution(struct FString ImagePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetImageResolution");
    struct
    {
        struct FString ImagePath;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.ImagePath = (struct FString)ImagePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetGpuName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetGpuName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetGPUFamily()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetGPUFamily");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetGLVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetGLVersion");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonStatics::GetFrameSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetFrameSize");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UUACommonStatics::GetFileSize(struct FString FilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetFileSize");
    struct
    {
        struct FString FilePath;
        int64_t ReturnValue;
    } Parms{};
    Parms.FilePath = (struct FString)FilePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UUACommonStatics::GetFDateTimeTick(struct FDateTime Time)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetFDateTimeTick");
    struct
    {
        struct FDateTime Time;
        int64_t ReturnValue;
    } Parms{};
    Parms.Time = (struct FDateTime)Time;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FDateTime UUACommonStatics::GetFDateTime(int64_t Tick)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetFDateTime");
    struct
    {
        int64_t Tick;
        struct FDateTime ReturnValue;
    } Parms{};
    Parms.Tick = (int64_t)Tick;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonStatics::GetEnableCPPVM()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetEnableCPPVM");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonStatics::GetDynamicLogLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetDynamicLogLevel");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UUACommonStatics::GetDownloadRemotePSOProgress()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetDownloadRemotePSOProgress");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetDownloadRemotePSOErrorFilePath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetDownloadRemotePSOErrorFilePath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetDownloadLocalPSOPath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetDownloadLocalPSOPath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetDeviceModel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetDeviceModel");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetDeviceMake()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetDeviceMake");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetDeviceInfo(struct FString strDeviceName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetDeviceInfo");
    struct
    {
        struct FString strDeviceName;
        struct FString ReturnValue;
    } Parms{};
    Parms.strDeviceName = (struct FString)strDeviceName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetDeviceId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetDeviceId");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetDeviceBuildNumber()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetDeviceBuildNumber");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetDeviceBrand()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetDeviceBrand");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonStatics::GetDeskDefaultFreeSpace(struct FString InPath, int64_t& TotalnumberOfBytes, int64_t& NumberOfFreeBytes)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetDeskDefaultFreeSpace");
    struct
    {
        struct FString InPath;
        int64_t TotalnumberOfBytes;
        int64_t NumberOfFreeBytes;
        bool ReturnValue;
    } Parms{};
    Parms.InPath = (struct FString)InPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    TotalnumberOfBytes = Parms.TotalnumberOfBytes;
    NumberOfFreeBytes = Parms.NumberOfFreeBytes;
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetDefaultDeviceProfileName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetDefaultDeviceProfileName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonStatics::GetCurrentPreRotationType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetCurrentPreRotationType");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetCulture()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetCulture");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetCPUBrand()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetCPUBrand");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetCosUrl()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetCosUrl");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetCosUploadURL()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetCosUploadURL");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetContainerConfSizes(struct FName itemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetContainerConfSizes");
    struct
    {
        struct FName itemID;
        struct FString ReturnValue;
    } Parms{};
    Parms.itemID = (struct FName)itemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UUACommonStatics::GetClassDefaultObject(struct UObject* InClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetClassDefaultObject");
    struct
    {
        struct UObject* InClass;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.InClass = (struct UObject*)InClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetChipset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetChipset");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ASGCharacter* UUACommonStatics::GetCharacter(struct UObject* InWorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetCharacter");
    struct
    {
        struct UObject* InWorldContextObject;
        struct ASGCharacter* ReturnValue;
    } Parms{};
    Parms.InWorldContextObject = (struct UObject*)InWorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetCarrier()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetCarrier");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UUACommonStatics::GetCaptureTextureFromActor(struct ASGCharacter* Character)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetCaptureTextureFromActor");
    struct
    {
        struct ASGCharacter* Character;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.Character = (struct ASGCharacter*)Character;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UUACommonStatics::GetCaptureMatFromActor(struct ASGCharacter* Character)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetCaptureMatFromActor");
    struct
    {
        struct ASGCharacter* Character;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.Character = (struct ASGCharacter*)Character;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<uint32_t> UUACommonStatics::GetBulletItemIdsByAssembleTag(struct FString assembleTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetBulletItemIdsByAssembleTag");
    struct
    {
        struct FString assembleTag;
        struct TArray<uint32_t> ReturnValue;
    } Parms{};
    Parms.assembleTag = (struct FString)assembleTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetBuildConfiguration()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetBuildConfiguration");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TMap<int32_t, ESGAvatarType> UUACommonStatics::GetAvatarTypes(struct TArray<int32_t>& Avatars, bool IncludeAdditional)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetAvatarTypes");
    struct
    {
        struct TArray<int32_t> Avatars;
        bool IncludeAdditional;
        struct TMap<int32_t, ESGAvatarType> ReturnValue;
    } Parms{};
    Parms.IncludeAdditional = (bool)IncludeAdditional;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Avatars = Parms.Avatars;
    return Parms.ReturnValue;
}

ESGAvatarType UUACommonStatics::GetAvatarTypeByInventoryId(struct UWorld* World, int64_t InventoryId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetAvatarTypeByInventoryId");
    struct
    {
        struct UWorld* World;
        int64_t InventoryId;
        enum ESGAvatarType ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.InventoryId = (int64_t)InventoryId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TMap<int32_t, int32_t> UUACommonStatics::GetAvatarToSuitConfigMap()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetAvatarToSuitConfigMap");
    struct
    {
        struct TMap<int32_t, int32_t> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TMap<int32_t, struct FAvatarItemCfgTableRow> UUACommonStatics::GetAvatarItemConfigMap()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetAvatarItemConfigMap");
    struct
    {
        struct TMap<int32_t, struct FAvatarItemCfgTableRow> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UUACommonStatics::GetAudioEventDurationByReference(struct UAkAudioEvent* EventReference)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetAudioEventDurationByReference");
    struct
    {
        struct UAkAudioEvent* EventReference;
        float ReturnValue;
    } Parms{};
    Parms.EventReference = (struct UAkAudioEvent*)EventReference;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UUACommonStatics::GetAudioEventDurationByName(struct FString EventName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetAudioEventDurationByName");
    struct
    {
        struct FString EventName;
        float ReturnValue;
    } Parms{};
    Parms.EventName = (struct FString)EventName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonStatics::GetAsyncPSOForLoading()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetAsyncPSOForLoading");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::GetApplyRemotePSOFilePath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetApplyRemotePSOFilePath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWidgetAnimation* UUACommonStatics::GetAnimationByName(struct UUserWidget* UserWidget, struct FName AnimationName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetAnimationByName");
    struct
    {
        struct UUserWidget* UserWidget;
        struct FName AnimationName;
        struct UWidgetAnimation* ReturnValue;
    } Parms{};
    Parms.UserWidget = (struct UUserWidget*)UserWidget;
    Parms.AnimationName = (struct FName)AnimationName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonStatics::GetAndroidRotation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetAndroidRotation");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonStatics::GetAndroidBuildVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetAndroidBuildVersion");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UUACommonStatics::GetAbsoluteSize(struct FGeometry Geometry)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetAbsoluteSize");
    struct
    {
        struct FGeometry Geometry;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.Geometry = (struct FGeometry)Geometry;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UUACommonStatics::GetAbsolutePosition(struct FGeometry Geometry)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "GetAbsolutePosition");
    struct
    {
        struct FGeometry Geometry;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.Geometry = (struct FGeometry)Geometry;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UUACommonStatics* UUACommonStatics::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "Get");
    struct
    {
        struct UUACommonStatics* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonStatics::ForceInputBoxTop(int32_t InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "ForceInputBoxTop");
    struct
    {
        int32_t InValue;
    } Parms{};
    Parms.InValue = (int32_t)InValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::FixKeyboardNavigationBarHeight(int32_t InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "FixKeyboardNavigationBarHeight");
    struct
    {
        int32_t InValue;
    } Parms{};
    Parms.InValue = (int32_t)InValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::FixAndroidWindowSize(int32_t InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "FixAndroidWindowSize");
    struct
    {
        int32_t InValue;
    } Parms{};
    Parms.InValue = (int32_t)InValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int32_t UUACommonStatics::FindFileInPaks(struct FString PackageName, struct FString& OutPakFileName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "FindFileInPaks");
    struct
    {
        struct FString PackageName;
        struct FString OutPakFileName;
        int32_t ReturnValue;
    } Parms{};
    Parms.PackageName = (struct FString)PackageName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutPakFileName = Parms.OutPakFileName;
    return Parms.ReturnValue;
}

uint32_t UUACommonStatics::FindBadgeByAttachPos(struct ASGCharacter* Character, ESGBadgeAttach attachPos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "FindBadgeByAttachPos");
    struct
    {
        struct ASGCharacter* Character;
        enum ESGBadgeAttach attachPos;
        uint32_t ReturnValue;
    } Parms{};
    Parms.Character = (struct ASGCharacter*)Character;
    Parms.attachPos = (enum ESGBadgeAttach)attachPos;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::Encrypt(struct FString InputString, struct FString Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "Encrypt");
    struct
    {
        struct FString InputString;
        struct FString Key;
        struct FString ReturnValue;
    } Parms{};
    Parms.InputString = (struct FString)InputString;
    Parms.Key = (struct FString)Key;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUACommonStatics::Encode(struct FString InputString)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "Encode");
    struct
    {
        struct FString InputString;
        struct FString ReturnValue;
    } Parms{};
    Parms.InputString = (struct FString)InputString;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonStatics::EnableSensor(int32_t DelayType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "EnableSensor");
    struct
    {
        int32_t DelayType;
        bool ReturnValue;
    } Parms{};
    Parms.DelayType = (int32_t)DelayType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonStatics::EnablePrecompilePSOOpt()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "EnablePrecompilePSOOpt");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonStatics::EnablePreCompilePartPSO(bool bApply)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "EnablePreCompilePartPSO");
    struct
    {
        bool bApply;
        bool ReturnValue;
    } Parms{};
    Parms.bApply = (bool)bApply;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonStatics::EnableGamefileMaskToShaderPipelineCache(int64_t InMask, bool bIsEnable, bool bForceSet)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "EnableGamefileMaskToShaderPipelineCache");
    struct
    {
        int64_t InMask;
        bool bIsEnable;
        bool bForceSet;
    } Parms{};
    Parms.InMask = (int64_t)InMask;
    Parms.bIsEnable = (bool)bIsEnable;
    Parms.bForceSet = (bool)bForceSet;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::EnableCompileUsageMask(int32_t InEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "EnableCompileUsageMask");
    struct
    {
        int32_t InEnable;
    } Parms{};
    Parms.InEnable = (int32_t)InEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::EnableCompileMaskToShaderPipelineCache(int64_t InCompileask, bool bIsEnable, bool bForceSet)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "EnableCompileMaskToShaderPipelineCache");
    struct
    {
        int64_t InCompileask;
        bool bIsEnable;
        bool bForceSet;
    } Parms{};
    Parms.InCompileask = (int64_t)InCompileask;
    Parms.bIsEnable = (bool)bIsEnable;
    Parms.bForceSet = (bool)bForceSet;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::EnableAllowSkipDrawCommand(bool bEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "EnableAllowSkipDrawCommand");
    struct
    {
        bool bEnabled;
    } Parms{};
    Parms.bEnabled = (bool)bEnabled;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::EmptyOverrideMaterials(struct UMeshComponent* MeshComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "EmptyOverrideMaterials");
    struct
    {
        struct UMeshComponent* MeshComponent;
    } Parms{};
    Parms.MeshComponent = (struct UMeshComponent*)MeshComponent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::DumpFName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "DumpFName");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UUACommonStatics::DownloadRemotePSOToLocal(struct FString LocalFilePath, struct FString InCosPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "DownloadRemotePSOToLocal");
    struct
    {
        struct FString LocalFilePath;
        struct FString InCosPath;
        bool ReturnValue;
    } Parms{};
    Parms.LocalFilePath = (struct FString)LocalFilePath;
    Parms.InCosPath = (struct FString)InCosPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonStatics::DisableSensor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "DisableSensor");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UUACommonStatics::DisablePSO()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "DisablePSO");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonStatics::DeleteFilesFromBugLoadFolder()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UACommonStatics", "DeleteFilesFromBugLoadFolder");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::DeleteCookie()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "DeleteCookie");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FString UUACommonStatics::Decrypt(struct FString InputString, struct FString Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "Decrypt");
    struct
    {
        struct FString InputString;
        struct FString Key;
        struct FString ReturnValue;
    } Parms{};
    Parms.InputString = (struct FString)InputString;
    Parms.Key = (struct FString)Key;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonStatics::DebugPrintAllUi()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "DebugPrintAllUi");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::DeactivateParticleSystem(struct UParticleSystemComponent* ParticleSystemComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "DeactivateParticleSystem");
    struct
    {
        struct UParticleSystemComponent* ParticleSystemComponent;
    } Parms{};
    Parms.ParticleSystemComponent = (struct UParticleSystemComponent*)ParticleSystemComponent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UUserWidget* UUACommonStatics::CreateCurrentWordWidgetInstance(struct UWorld* World, struct UUserWidget* UserWidgetClass, struct FName WidgetName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "CreateCurrentWordWidgetInstance");
    struct
    {
        struct UWorld* World;
        struct UUserWidget* UserWidgetClass;
        struct FName WidgetName;
        struct UUserWidget* ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.UserWidgetClass = (struct UUserWidget*)UserWidgetClass;
    Parms.WidgetName = (struct FName)WidgetName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonStatics::ContainsCameraCut(struct ALevelSequenceActor* LevelSequenceActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "ContainsCameraCut");
    struct
    {
        struct ALevelSequenceActor* LevelSequenceActor;
        bool ReturnValue;
    } Parms{};
    Parms.LevelSequenceActor = (struct ALevelSequenceActor*)LevelSequenceActor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUACommonStatics::ContainsAvatar(int64_t AvatarItemID, ESGAvatarType AvatarType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "ContainsAvatar");
    struct
    {
        int64_t AvatarItemID;
        enum ESGAvatarType AvatarType;
        bool ReturnValue;
    } Parms{};
    Parms.AvatarItemID = (int64_t)AvatarItemID;
    Parms.AvatarType = (enum ESGAvatarType)AvatarType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonStatics::CloseShaderCodeLibrary(struct FString InName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "CloseShaderCodeLibrary");
    struct
    {
        struct FString InName;
    } Parms{};
    Parms.InName = (struct FString)InName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::ClosePipelineFileCache()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "ClosePipelineFileCache");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::ClearPreloadAvatars(struct ASGCharacter* Character)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "ClearPreloadAvatars");
    struct
    {
        struct ASGCharacter* Character;
    } Parms{};
    Parms.Character = (struct ASGCharacter*)Character;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::CleanAllFontCache()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "CleanAllFontCache");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UUACommonStatics::CheckRayQueryShaderLibExists()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "CheckRayQueryShaderLibExists");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonStatics::CheckMedicine_DestroyAndEnergy(bool& destroy, bool& energy, struct TArray<struct FName> item_ids)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "CheckMedicine_DestroyAndEnergy");
    struct
    {
        bool destroy;
        bool energy;
        struct TArray<struct FName> item_ids;
    } Parms{};
    Parms.item_ids = (struct TArray<struct FName>)item_ids;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    destroy = Parms.destroy;
    energy = Parms.energy;
}

bool UUACommonStatics::CheckIconValid(struct UObject* ResourceObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "CheckIconValid");
    struct
    {
        struct UObject* ResourceObject;
        bool ReturnValue;
    } Parms{};
    Parms.ResourceObject = (struct UObject*)ResourceObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonStatics::CheckEquipmentHiddenConflict(struct UObject* WorldContextObject, int64_t itemID, struct TArray<int64_t>& AvatarItemIDs, struct TArray<int64_t>& ConflictItemIdList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "CheckEquipmentHiddenConflict");
    struct
    {
        struct UObject* WorldContextObject;
        int64_t itemID;
        struct TArray<int64_t> AvatarItemIDs;
        struct TArray<int64_t> ConflictItemIdList;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.itemID = (int64_t)itemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    AvatarItemIDs = Parms.AvatarItemIDs;
    ConflictItemIdList = Parms.ConflictItemIdList;
}

void UUACommonStatics::CaptureScreen(struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "CaptureScreen");
    struct
    {
        struct FString Path;
    } Parms{};
    Parms.Path = (struct FString)Path;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::CancelDragDrop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "CancelDragDrop");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UUACommonStatics::CanAttachBadge(struct ACharacter* Character, int64_t itemID, ESGBadgeAttach attachPos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "CanAttachBadge");
    struct
    {
        struct ACharacter* Character;
        int64_t itemID;
        enum ESGBadgeAttach attachPos;
        bool ReturnValue;
    } Parms{};
    Parms.Character = (struct ACharacter*)Character;
    Parms.itemID = (int64_t)itemID;
    Parms.attachPos = (enum ESGBadgeAttach)attachPos;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUACommonStatics::CacuContainerSizeByItemId(struct FName itemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "CacuContainerSizeByItemId");
    struct
    {
        struct FName itemID;
        int32_t ReturnValue;
    } Parms{};
    Parms.itemID = (struct FName)itemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonStatics::BuildSGPlayerItemTree(struct TArray<struct USGPlayerItemInfoBase*> InSGPlayerItems, struct TArray<struct USGPlayerItemInfoBase*>& InResultList, int64_t InCharacterParentId, bool IgnoreMagazineAmmunition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "BuildSGPlayerItemTree");
    struct
    {
        struct TArray<struct USGPlayerItemInfoBase*> InSGPlayerItems;
        struct TArray<struct USGPlayerItemInfoBase*> InResultList;
        int64_t InCharacterParentId;
        bool IgnoreMagazineAmmunition;
    } Parms{};
    Parms.InSGPlayerItems = (struct TArray<struct USGPlayerItemInfoBase*>)InSGPlayerItems;
    Parms.InCharacterParentId = (int64_t)InCharacterParentId;
    Parms.IgnoreMagazineAmmunition = (bool)IgnoreMagazineAmmunition;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InResultList = Parms.InResultList;
}

void UUACommonStatics::BindPSOCompilingFailedDelegate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "BindPSOCompilingFailedDelegate");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int32_t UUACommonStatics::AsyncGetNetworkConnectionType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "AsyncGetNetworkConnectionType");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUACommonStatics::ApplyRayQueryCVarSettingsBySectionName(struct FString SectionName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "ApplyRayQueryCVarSettingsBySectionName");
    struct
    {
        struct FString SectionName;
    } Parms{};
    Parms.SectionName = (struct FString)SectionName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::AddServiceToTable(const struct FServiceConfTableRow& serviceConf)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "AddServiceToTable");
    struct
    {
        struct FServiceConfTableRow serviceConf;
    } Parms{};
    Parms.serviceConf = (struct FServiceConfTableRow)serviceConf;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::AddPanelToTable(struct FPanelConfTableRow& panelConf)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "AddPanelToTable");
    struct
    {
        struct FPanelConfTableRow panelConf;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    panelConf = Parms.panelConf;
}

void UUACommonStatics::AddModuleToTable(const struct FModuleConfTableRow& moduleConf)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "AddModuleToTable");
    struct
    {
        struct FModuleConfTableRow moduleConf;
    } Parms{};
    Parms.moduleConf = (struct FModuleConfTableRow)moduleConf;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::AddBlackSensorDevice(struct TArray<struct FString> Devices)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "AddBlackSensorDevice");
    struct
    {
        struct TArray<struct FString> Devices;
    } Parms{};
    Parms.Devices = (struct TArray<struct FString>)Devices;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUACommonStatics::ActivateParticleSystem(struct UParticleSystemComponent* ParticleSystemComponent, bool bReset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "ActivateParticleSystem");
    struct
    {
        struct UParticleSystemComponent* ParticleSystemComponent;
        bool bReset;
    } Parms{};
    Parms.ParticleSystemComponent = (struct UParticleSystemComponent*)ParticleSystemComponent;
    Parms.bReset = (bool)bReset;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UUACommonStatics::AcquireWifiManagerLock()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UACommonStatics", "AcquireWifiManagerLock");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UUADataTableManager
struct FMapDetailTableRowBPProxy UUADataTableManager::GetMapDetailTableRowBPProxy(struct FMapDetailTableRow MapDetailTableRow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UADataTableManager", "GetMapDetailTableRowBPProxy");
    struct
    {
        struct FMapDetailTableRow MapDetailTableRow;
        struct FMapDetailTableRowBPProxy ReturnValue;
    } Parms{};
    Parms.MapDetailTableRow = (struct FMapDetailTableRow)MapDetailTableRow;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FLootDropTableRowBPProxy UUADataTableManager::GetLootDropTableRowBPProxy(struct FLootDropTableRow LootDropTableRow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UADataTableManager", "GetLootDropTableRowBPProxy");
    struct
    {
        struct FLootDropTableRow LootDropTableRow;
        struct FLootDropTableRowBPProxy ReturnValue;
    } Parms{};
    Parms.LootDropTableRow = (struct FLootDropTableRow)LootDropTableRow;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FItemConfTableRowBPProxy UUADataTableManager::GetItemConfTableRowBPProxy(struct FItemConfTableRow ItemConfTableRow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UADataTableManager", "GetItemConfTableRowBPProxy");
    struct
    {
        struct FItemConfTableRow ItemConfTableRow;
        struct FItemConfTableRowBPProxy ReturnValue;
    } Parms{};
    Parms.ItemConfTableRow = (struct FItemConfTableRow)ItemConfTableRow;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UUAFontMeasure
void UUAFontMeasure::SubmitBugTask(struct FString Content, struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UAFontMeasure", "SubmitBugTask");
    struct
    {
        struct FString Content;
        struct FString Path;
    } Parms{};
    Parms.Content = (struct FString)Content;
    Parms.Path = (struct FString)Path;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UUAFontMeasure::GetTextJustification(struct UTextLayoutWidget* LayoutWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UAFontMeasure", "GetTextJustification");
    struct
    {
        struct UTextLayoutWidget* LayoutWidget;
        uint8_t ReturnValue;
    } Parms{};
    Parms.LayoutWidget = (struct UTextLayoutWidget*)LayoutWidget;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUAFontMeasure::GetTextAndImageWidgets(struct UWidget* Widget, struct TArray<struct UWidget*>& TextWidgets, struct TArray<struct UWidget*>& ImageWidgets, bool bCliping)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UAFontMeasure", "GetTextAndImageWidgets");
    struct
    {
        struct UWidget* Widget;
        struct TArray<struct UWidget*> TextWidgets;
        struct TArray<struct UWidget*> ImageWidgets;
        bool bCliping;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    Parms.bCliping = (bool)bCliping;
    this->ProcessEvent(Func, &Parms);
    TextWidgets = Parms.TextWidgets;
    ImageWidgets = Parms.ImageWidgets;
}

struct UUserWidget* UUAFontMeasure::GetCurrentPanel(struct UUserWidget* RootCanvasPanel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UAFontMeasure", "GetCurrentPanel");
    struct
    {
        struct UUserWidget* RootCanvasPanel;
        struct UUserWidget* ReturnValue;
    } Parms{};
    Parms.RootCanvasPanel = (struct UUserWidget*)RootCanvasPanel;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UUAFontMeasure* UUAFontMeasure::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAFontMeasure", "Get");
    struct
    {
        struct UUAFontMeasure* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUAFontMeasure::DrawFontMeasure(struct FPaintContext& Context, struct UWidgetTree* WidgetTree)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UAFontMeasure", "DrawFontMeasure");
    struct
    {
        struct FPaintContext Context;
        struct UWidgetTree* WidgetTree;
    } Parms{};
    Parms.WidgetTree = (struct UWidgetTree*)WidgetTree;
    this->ProcessEvent(Func, &Parms);
    Context = Parms.Context;
}

void UUAFontMeasure::DragWidget(struct UUserWidget* panel, const struct FGeometry& InGeometry, const struct FPointerEvent& InMouseEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UAFontMeasure", "DragWidget");
    struct
    {
        struct UUserWidget* panel;
        struct FGeometry InGeometry;
        struct FPointerEvent InMouseEvent;
    } Parms{};
    Parms.panel = (struct UUserWidget*)panel;
    Parms.InGeometry = (struct FGeometry)InGeometry;
    Parms.InMouseEvent = (struct FPointerEvent)InMouseEvent;
    this->ProcessEvent(Func, &Parms);
}

// UUAGridScroll
void UUAGridScroll::OnScrollWidgetAnimationEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UAGridScroll", "OnScrollWidgetAnimationEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UUAInventoryStatics
void UUAInventoryStatics::UpdateInventorySwitchState(struct ASGInventory* Inventory, struct USGPlayerItemInfoBase* TempItemInfoBase)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "UpdateInventorySwitchState");
    struct
    {
        struct ASGInventory* Inventory;
        struct USGPlayerItemInfoBase* TempItemInfoBase;
    } Parms{};
    Parms.Inventory = (struct ASGInventory*)Inventory;
    Parms.TempItemInfoBase = (struct USGPlayerItemInfoBase*)TempItemInfoBase;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUAInventoryStatics::UpdateInventorySkin(struct ASGInventory* Inventory, int32_t SkinID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "UpdateInventorySkin");
    struct
    {
        struct ASGInventory* Inventory;
        int32_t SkinID;
    } Parms{};
    Parms.Inventory = (struct ASGInventory*)Inventory;
    Parms.SkinID = (int32_t)SkinID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUAInventoryStatics::UpdateInventoriesFromData(struct ACharacter* Character, bool needUpdateAnimation, struct TArray<struct USGPlayerItemInfoBase*>& InventoryArray, struct TMap<uint64_t, int32_t>& NeedChangeSkinInventoryMap, struct TArray<uint64_t>& NeedAddInventoryArray, struct TArray<int64_t>& NeedAddInventoryParentActorArray, struct TArray<uint64_t>& NeedRemoveInventoryArray, struct TArray<uint64_t>& MoveInventoryArray, struct TArray<uint64_t>& MoveInventoryParentActorArray, struct TArray<uint64_t>& MoveInventoryInContainerIndexArray)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "UpdateInventoriesFromData");
    struct
    {
        struct ACharacter* Character;
        bool needUpdateAnimation;
        struct TArray<struct USGPlayerItemInfoBase*> InventoryArray;
        struct TMap<uint64_t, int32_t> NeedChangeSkinInventoryMap;
        struct TArray<uint64_t> NeedAddInventoryArray;
        struct TArray<int64_t> NeedAddInventoryParentActorArray;
        struct TArray<uint64_t> NeedRemoveInventoryArray;
        struct TArray<uint64_t> MoveInventoryArray;
        struct TArray<uint64_t> MoveInventoryParentActorArray;
        struct TArray<uint64_t> MoveInventoryInContainerIndexArray;
    } Parms{};
    Parms.Character = (struct ACharacter*)Character;
    Parms.needUpdateAnimation = (bool)needUpdateAnimation;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InventoryArray = Parms.InventoryArray;
    NeedChangeSkinInventoryMap = Parms.NeedChangeSkinInventoryMap;
    NeedAddInventoryArray = Parms.NeedAddInventoryArray;
    NeedAddInventoryParentActorArray = Parms.NeedAddInventoryParentActorArray;
    NeedRemoveInventoryArray = Parms.NeedRemoveInventoryArray;
    MoveInventoryArray = Parms.MoveInventoryArray;
    MoveInventoryParentActorArray = Parms.MoveInventoryParentActorArray;
    MoveInventoryInContainerIndexArray = Parms.MoveInventoryInContainerIndexArray;
}

void UUAInventoryStatics::UpdateInventories(struct TArray<struct USGPlayerItemInfoBase*>& InventoryArray, struct ACharacter* Character)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "UpdateInventories");
    struct
    {
        struct TArray<struct USGPlayerItemInfoBase*> InventoryArray;
        struct ACharacter* Character;
    } Parms{};
    Parms.Character = (struct ACharacter*)Character;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InventoryArray = Parms.InventoryArray;
}

void UUAInventoryStatics::UpdateCharacterAnimation(struct ASGCharacter* PreviewCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "UpdateCharacterAnimation");
    struct
    {
        struct ASGCharacter* PreviewCharacter;
    } Parms{};
    Parms.PreviewCharacter = (struct ASGCharacter*)PreviewCharacter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct ASGInventory* UUAInventoryStatics::TransformCachedInvToTargetInv(struct USGPlayerItemInfoBase* item, struct ACharacter* Character, struct ASGAssembleBase* AssembleObj, int32_t& TaskId, struct ASGInventory* CachedInv)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "TransformCachedInvToTargetInv");
    struct
    {
        struct USGPlayerItemInfoBase* item;
        struct ACharacter* Character;
        struct ASGAssembleBase* AssembleObj;
        int32_t TaskId;
        struct ASGInventory* CachedInv;
        struct ASGInventory* ReturnValue;
    } Parms{};
    Parms.item = (struct USGPlayerItemInfoBase*)item;
    Parms.Character = (struct ACharacter*)Character;
    Parms.AssembleObj = (struct ASGAssembleBase*)AssembleObj;
    Parms.CachedInv = (struct ASGInventory*)CachedInv;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    TaskId = Parms.TaskId;
    return Parms.ReturnValue;
}

void UUAInventoryStatics::RemoveSpecificInventory(struct ASGInventory* TargetInventory, struct ACharacter* Character)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "RemoveSpecificInventory");
    struct
    {
        struct ASGInventory* TargetInventory;
        struct ACharacter* Character;
    } Parms{};
    Parms.TargetInventory = (struct ASGInventory*)TargetInventory;
    Parms.Character = (struct ACharacter*)Character;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUAInventoryStatics::ParsePendantItemInfo(struct USGPlayerItemInfoBase* PlayerItemInfoBase)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "ParsePendantItemInfo");
    struct
    {
        struct USGPlayerItemInfoBase* PlayerItemInfoBase;
    } Parms{};
    Parms.PlayerItemInfoBase = (struct USGPlayerItemInfoBase*)PlayerItemInfoBase;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUAInventoryStatics::OnInventoryLoadCompleteNotify(int32_t InTaskID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "OnInventoryLoadCompleteNotify");
    struct
    {
        int32_t InTaskID;
    } Parms{};
    Parms.InTaskID = (int32_t)InTaskID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUAInventoryStatics::GiveWeaponToPlayerByWeaponActor(struct ASGInventory* Weapon, struct ACharacter* Character)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GiveWeaponToPlayerByWeaponActor");
    struct
    {
        struct ASGInventory* Weapon;
        struct ACharacter* Character;
    } Parms{};
    Parms.Weapon = (struct ASGInventory*)Weapon;
    Parms.Character = (struct ACharacter*)Character;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct TArray<struct ASGInventory*> UUAInventoryStatics::GiveItem(struct ACharacter* Character, int64_t itemID, int32_t Num, ESGGiveInventoryByClassType GiveInventoryReason, int32_t SkinID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GiveItem");
    struct
    {
        struct ACharacter* Character;
        int64_t itemID;
        int32_t Num;
        enum ESGGiveInventoryByClassType GiveInventoryReason;
        int32_t SkinID;
        struct TArray<struct ASGInventory*> ReturnValue;
    } Parms{};
    Parms.Character = (struct ACharacter*)Character;
    Parms.itemID = (int64_t)itemID;
    Parms.Num = (int32_t)Num;
    Parms.GiveInventoryReason = (enum ESGGiveInventoryByClassType)GiveInventoryReason;
    Parms.SkinID = (int32_t)SkinID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ASGInventory* UUAInventoryStatics::GiveAndGetItem(struct ACharacter* Character, int64_t itemID, int32_t Num)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GiveAndGetItem");
    struct
    {
        struct ACharacter* Character;
        int64_t itemID;
        int32_t Num;
        struct ASGInventory* ReturnValue;
    } Parms{};
    Parms.Character = (struct ACharacter*)Character;
    Parms.itemID = (int64_t)itemID;
    Parms.Num = (int32_t)Num;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint32_t UUAInventoryStatics::GetWeaponSocketsAndAmmoCapacity(uint64_t itemID, struct TArray<struct FWeaponSocket>& InSockets)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetWeaponSocketsAndAmmoCapacity");
    struct
    {
        uint64_t itemID;
        struct TArray<struct FWeaponSocket> InSockets;
        uint32_t ReturnValue;
    } Parms{};
    Parms.itemID = (uint64_t)itemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InSockets = Parms.InSockets;
    return Parms.ReturnValue;
}

struct FString UUAInventoryStatics::GetUseSound(struct ASGInventory* Inventory)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetUseSound");
    struct
    {
        struct ASGInventory* Inventory;
        struct FString ReturnValue;
    } Parms{};
    Parms.Inventory = (struct ASGInventory*)Inventory;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint32_t UUAInventoryStatics::GetTotalValueOfCharacter(struct ACharacter* Character)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetTotalValueOfCharacter");
    struct
    {
        struct ACharacter* Character;
        uint32_t ReturnValue;
    } Parms{};
    Parms.Character = (struct ACharacter*)Character;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USGPlayerItemInfoBase* UUAInventoryStatics::GetTestPlayerItemInfoBase(uint64_t ParentID, uint64_t ChildID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetTestPlayerItemInfoBase");
    struct
    {
        uint64_t ParentID;
        uint64_t ChildID;
        struct USGPlayerItemInfoBase* ReturnValue;
    } Parms{};
    Parms.ParentID = (uint64_t)ParentID;
    Parms.ChildID = (uint64_t)ChildID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<int64_t> UUAInventoryStatics::GetSupportAdapterIDList(int64_t itemID, struct TArray<int64_t>& OutAdapterIDList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetSupportAdapterIDList");
    struct
    {
        int64_t itemID;
        struct TArray<int64_t> OutAdapterIDList;
        struct TArray<int64_t> ReturnValue;
    } Parms{};
    Parms.itemID = (int64_t)itemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutAdapterIDList = Parms.OutAdapterIDList;
    return Parms.ReturnValue;
}

uint32_t UUAInventoryStatics::GetSecondMainWeaponValue(struct ACharacter* Character)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetSecondMainWeaponValue");
    struct
    {
        struct ACharacter* Character;
        uint32_t ReturnValue;
    } Parms{};
    Parms.Character = (struct ACharacter*)Character;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint32_t UUAInventoryStatics::GetLoseValueOfCharacter(struct ACharacter* Character)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetLoseValueOfCharacter");
    struct
    {
        struct ACharacter* Character;
        uint32_t ReturnValue;
    } Parms{};
    Parms.Character = (struct ACharacter*)Character;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUAInventoryStatics::GetItemInstIdModded(struct ASGInventory* SGInventory, int32_t Mod)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetItemInstIdModded");
    struct
    {
        struct ASGInventory* SGInventory;
        int32_t Mod;
        int32_t ReturnValue;
    } Parms{};
    Parms.SGInventory = (struct ASGInventory*)SGInventory;
    Parms.Mod = (int32_t)Mod;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUAInventoryStatics::GetItemInfoGidMap(struct TArray<struct USGPlayerItemInfoBase*>& InventoryArray, struct TMap<uint64_t, struct USGPlayerItemInfoBase*>& ItemInfoGidMap)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetItemInfoGidMap");
    struct
    {
        struct TArray<struct USGPlayerItemInfoBase*> InventoryArray;
        struct TMap<uint64_t, struct USGPlayerItemInfoBase*> ItemInfoGidMap;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InventoryArray = Parms.InventoryArray;
    ItemInfoGidMap = Parms.ItemInfoGidMap;
}

int32_t UUAInventoryStatics::GetInventoryValue(struct ASGInventory* Inventory)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetInventoryValue");
    struct
    {
        struct ASGInventory* Inventory;
        int32_t ReturnValue;
    } Parms{};
    Parms.Inventory = (struct ASGInventory*)Inventory;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUAInventoryStatics::GetInventoryTypeTotalCount(struct ACharacter* Character, int32_t typeId, const struct TArray<EAttachPosition>& PositionArr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetInventoryTypeTotalCount");
    struct
    {
        struct ACharacter* Character;
        int32_t typeId;
        struct TArray<EAttachPosition> PositionArr;
        int32_t ReturnValue;
    } Parms{};
    Parms.Character = (struct ACharacter*)Character;
    Parms.typeId = (int32_t)typeId;
    Parms.PositionArr = (struct TArray<EAttachPosition>)PositionArr;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUAInventoryStatics::GetInventoryTradeValuePropagate(struct ASGInventory* Inventory, int32_t& OutValue, bool bIncludeSelf, bool bIncludeChild, bool bIncludeBullet)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetInventoryTradeValuePropagate");
    struct
    {
        struct ASGInventory* Inventory;
        int32_t OutValue;
        bool bIncludeSelf;
        bool bIncludeChild;
        bool bIncludeBullet;
    } Parms{};
    Parms.Inventory = (struct ASGInventory*)Inventory;
    Parms.bIncludeSelf = (bool)bIncludeSelf;
    Parms.bIncludeChild = (bool)bIncludeChild;
    Parms.bIncludeBullet = (bool)bIncludeBullet;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutValue = Parms.OutValue;
}

int32_t UUAInventoryStatics::GetInventoryTotalCount(struct ACharacter* Character, int64_t InventoryId, const struct TArray<EAttachPosition>& PositionArr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetInventoryTotalCount");
    struct
    {
        struct ACharacter* Character;
        int64_t InventoryId;
        struct TArray<EAttachPosition> PositionArr;
        int32_t ReturnValue;
    } Parms{};
    Parms.Character = (struct ACharacter*)Character;
    Parms.InventoryId = (int64_t)InventoryId;
    Parms.PositionArr = (struct TArray<EAttachPosition>)PositionArr;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUAInventoryStatics::GetInventoryStackMaxFromCommonItemTable(uint64_t item_id)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetInventoryStackMaxFromCommonItemTable");
    struct
    {
        uint64_t item_id;
        int32_t ReturnValue;
    } Parms{};
    Parms.item_id = (uint64_t)item_id;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct ASGInventory*> UUAInventoryStatics::GetInventorysFromWeaponAssembleTable(struct UObject* WorldContextObject, uint64_t QueryID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetInventorysFromWeaponAssembleTable");
    struct
    {
        struct UObject* WorldContextObject;
        uint64_t QueryID;
        struct TArray<struct ASGInventory*> ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.QueryID = (uint64_t)QueryID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUAInventoryStatics::GetInventoryPackageIdArray(struct TArray<int32_t>& OutArray)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UAInventoryStatics", "GetInventoryPackageIdArray");
    struct
    {
        struct TArray<int32_t> OutArray;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutArray = Parms.OutArray;
}

struct FSGInventoryPackageTable UUAInventoryStatics::GetInventoryPackageByPackageID(int32_t InventoryPackageID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetInventoryPackageByPackageID");
    struct
    {
        int32_t InventoryPackageID;
        struct FSGInventoryPackageTable ReturnValue;
    } Parms{};
    Parms.InventoryPackageID = (int32_t)InventoryPackageID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUAInventoryStatics::GetInventoryNameFromCommonItemTable(uint64_t itemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetInventoryNameFromCommonItemTable");
    struct
    {
        uint64_t itemID;
        struct FString ReturnValue;
    } Parms{};
    Parms.itemID = (uint64_t)itemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UUAInventoryStatics::GetInventoryGridSize(uint64_t itemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetInventoryGridSize");
    struct
    {
        uint64_t itemID;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.itemID = (uint64_t)itemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint32_t UUAInventoryStatics::GetInventoryDynamicValue(struct ASGInventory* Inv)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetInventoryDynamicValue");
    struct
    {
        struct ASGInventory* Inv;
        uint32_t ReturnValue;
    } Parms{};
    Parms.Inv = (struct ASGInventory*)Inv;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUAInventoryStatics::GetInventoryCountPropagate(struct ASGInventory* Inventory, int32_t& OutValue, bool bIncludeSelf, bool bIncludeChild)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetInventoryCountPropagate");
    struct
    {
        struct ASGInventory* Inventory;
        int32_t OutValue;
        bool bIncludeSelf;
        bool bIncludeChild;
    } Parms{};
    Parms.Inventory = (struct ASGInventory*)Inventory;
    Parms.bIncludeSelf = (bool)bIncludeSelf;
    Parms.bIncludeChild = (bool)bIncludeChild;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutValue = Parms.OutValue;
}

struct ASGInventory* UUAInventoryStatics::GetInventoryCached(struct ASGAssembleBase* AssembleObj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetInventoryCached");
    struct
    {
        struct ASGAssembleBase* AssembleObj;
        struct ASGInventory* ReturnValue;
    } Parms{};
    Parms.AssembleObj = (struct ASGAssembleBase*)AssembleObj;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<uint64_t> UUAInventoryStatics::GetInventoriesByGameplayTagList(struct TArray<struct FString>& TagList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetInventoriesByGameplayTagList");
    struct
    {
        struct TArray<struct FString> TagList;
        struct TArray<uint64_t> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    TagList = Parms.TagList;
    return Parms.ReturnValue;
}

struct TArray<uint64_t> UUAInventoryStatics::GetInventoriesByGameplayTagContainer(struct FGameplayTagContainer TagContainer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetInventoriesByGameplayTagContainer");
    struct
    {
        struct FGameplayTagContainer TagContainer;
        struct TArray<uint64_t> ReturnValue;
    } Parms{};
    Parms.TagContainer = (struct FGameplayTagContainer)TagContainer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<uint64_t> UUAInventoryStatics::GetInventoriesByAttachPosition(EAttachPosition position)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetInventoriesByAttachPosition");
    struct
    {
        enum EAttachPosition position;
        struct TArray<uint64_t> ReturnValue;
    } Parms{};
    Parms.position = (enum EAttachPosition)position;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UUAInventoryStatics::GetHelmetSoundMaxDistanceInfluenceFactor(uint64_t itemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetHelmetSoundMaxDistanceInfluenceFactor");
    struct
    {
        uint64_t itemID;
        float ReturnValue;
    } Parms{};
    Parms.itemID = (uint64_t)itemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UUAInventoryStatics::GetHelmetSoundLevelInfluenceFactor(uint64_t itemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetHelmetSoundLevelInfluenceFactor");
    struct
    {
        uint64_t itemID;
        float ReturnValue;
    } Parms{};
    Parms.itemID = (uint64_t)itemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UUAInventoryStatics::GetHelmetSoundIndicatorMaxDistanceInfluenceFactor(uint64_t itemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetHelmetSoundIndicatorMaxDistanceInfluenceFactor");
    struct
    {
        uint64_t itemID;
        float ReturnValue;
    } Parms{};
    Parms.itemID = (uint64_t)itemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UUAInventoryStatics::GetHelmetSoundIndicatorLevelInfluence(uint64_t itemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetHelmetSoundIndicatorLevelInfluence");
    struct
    {
        uint64_t itemID;
        float ReturnValue;
    } Parms{};
    Parms.itemID = (uint64_t)itemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUAInventoryStatics::GetHelmetSoundBlockLevelFromDetailConfTable(uint64_t itemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetHelmetSoundBlockLevelFromDetailConfTable");
    struct
    {
        uint64_t itemID;
        int32_t ReturnValue;
    } Parms{};
    Parms.itemID = (uint64_t)itemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUAInventoryStatics::GetFullWeaponValueTrade(struct UObject* WorldContextObject, uint64_t WeaponAssembleID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetFullWeaponValueTrade");
    struct
    {
        struct UObject* WorldContextObject;
        uint64_t WeaponAssembleID;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.WeaponAssembleID = (uint64_t)WeaponAssembleID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUAInventoryStatics::GetFullWeaponValue(uint64_t WeaponAssembleID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetFullWeaponValue");
    struct
    {
        uint64_t WeaponAssembleID;
        int32_t ReturnValue;
    } Parms{};
    Parms.WeaponAssembleID = (uint64_t)WeaponAssembleID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint32_t UUAInventoryStatics::GetFirstMainWeaponValue(struct ACharacter* Character)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetFirstMainWeaponValue");
    struct
    {
        struct ACharacter* Character;
        uint32_t ReturnValue;
    } Parms{};
    Parms.Character = (struct ACharacter*)Character;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAttachPosition UUAInventoryStatics::GetEquipAttachPositionById(uint64_t itemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetEquipAttachPositionById");
    struct
    {
        uint64_t itemID;
        enum EAttachPosition ReturnValue;
    } Parms{};
    Parms.itemID = (uint64_t)itemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint32_t UUAInventoryStatics::GetDrugValue(struct ACharacter* Character)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetDrugValue");
    struct
    {
        struct ACharacter* Character;
        uint32_t ReturnValue;
    } Parms{};
    Parms.Character = (struct ACharacter*)Character;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint32_t UUAInventoryStatics::GetCurWeaponValue(struct ACharacter* Character)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetCurWeaponValue");
    struct
    {
        struct ACharacter* Character;
        uint32_t ReturnValue;
    } Parms{};
    Parms.Character = (struct ACharacter*)Character;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<int64_t> UUAInventoryStatics::GetCurInventoryInfo(struct ACharacter* Character)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetCurInventoryInfo");
    struct
    {
        struct ACharacter* Character;
        struct TArray<int64_t> ReturnValue;
    } Parms{};
    Parms.Character = (struct ACharacter*)Character;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint32_t UUAInventoryStatics::GetCaseValue(struct ACharacter* Character)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetCaseValue");
    struct
    {
        struct ACharacter* Character;
        uint32_t ReturnValue;
    } Parms{};
    Parms.Character = (struct ACharacter*)Character;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ASGInventory* UUAInventoryStatics::GetCachedInventory(struct USGPlayerItemInfoBase* item, struct ACharacter* Character, struct ASGAssembleBase* AssembleObj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetCachedInventory");
    struct
    {
        struct USGPlayerItemInfoBase* item;
        struct ACharacter* Character;
        struct ASGAssembleBase* AssembleObj;
        struct ASGInventory* ReturnValue;
    } Parms{};
    Parms.item = (struct USGPlayerItemInfoBase*)item;
    Parms.Character = (struct ACharacter*)Character;
    Parms.AssembleObj = (struct ASGAssembleBase*)AssembleObj;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint32_t UUAInventoryStatics::GetBulletValue(struct ACharacter* Character)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetBulletValue");
    struct
    {
        struct ACharacter* Character;
        uint32_t ReturnValue;
    } Parms{};
    Parms.Character = (struct ACharacter*)Character;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint32_t UUAInventoryStatics::GetBossTokenItemIDFromGroupID(struct FName& GroupIDName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetBossTokenItemIDFromGroupID");
    struct
    {
        struct FName GroupIDName;
        uint32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    GroupIDName = Parms.GroupIDName;
    return Parms.ReturnValue;
}

struct ASGInventory* UUAInventoryStatics::GetAttachedChildInventoryByGunShieldTag(struct ASGInventory* Inventory)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetAttachedChildInventoryByGunShieldTag");
    struct
    {
        struct ASGInventory* Inventory;
        struct ASGInventory* ReturnValue;
    } Parms{};
    Parms.Inventory = (struct ASGInventory*)Inventory;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint32_t UUAInventoryStatics::GetAssistWeaponValue(struct ACharacter* Character)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetAssistWeaponValue");
    struct
    {
        struct ACharacter* Character;
        uint32_t ReturnValue;
    } Parms{};
    Parms.Character = (struct ACharacter*)Character;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUAInventoryStatics::GetAssembleInventoryValue(struct ASGInventory* Inventory, int32_t& OutValue, bool bIncludeChild)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetAssembleInventoryValue");
    struct
    {
        struct ASGInventory* Inventory;
        int32_t OutValue;
        bool bIncludeChild;
    } Parms{};
    Parms.Inventory = (struct ASGInventory*)Inventory;
    Parms.bIncludeChild = (bool)bIncludeChild;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutValue = Parms.OutValue;
}

uint64_t UUAInventoryStatics::GetAssembleInventoryRootItemID(uint64_t AssembleInvID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetAssembleInventoryRootItemID");
    struct
    {
        uint64_t AssembleInvID;
        uint64_t ReturnValue;
    } Parms{};
    Parms.AssembleInvID = (uint64_t)AssembleInvID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint32_t UUAInventoryStatics::GetArmorValue(struct ACharacter* Character)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetArmorValue");
    struct
    {
        struct ACharacter* Character;
        uint32_t ReturnValue;
    } Parms{};
    Parms.Character = (struct ACharacter*)Character;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUAInventoryStatics::GetArmorLevelFromDetailConfTable(uint64_t itemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetArmorLevelFromDetailConfTable");
    struct
    {
        uint64_t itemID;
        int32_t ReturnValue;
    } Parms{};
    Parms.itemID = (uint64_t)itemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint32_t UUAInventoryStatics::GetAllSafeBoxValue(struct ACharacter* Character)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetAllSafeBoxValue");
    struct
    {
        struct ACharacter* Character;
        uint32_t ReturnValue;
    } Parms{};
    Parms.Character = (struct ACharacter*)Character;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUAInventoryStatics::GetAllMainWeaponIdsFromInventoryPackage(struct APlayerController* PC, struct TArray<uint64_t>& OutItemIds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UAInventoryStatics", "GetAllMainWeaponIdsFromInventoryPackage");
    struct
    {
        struct APlayerController* PC;
        struct TArray<uint64_t> OutItemIds;
    } Parms{};
    Parms.PC = (struct APlayerController*)PC;
    this->ProcessEvent(Func, &Parms);
    OutItemIds = Parms.OutItemIds;
}

uint32_t UUAInventoryStatics::GetAllEquipmentValue(struct ACharacter* Character)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetAllEquipmentValue");
    struct
    {
        struct ACharacter* Character;
        uint32_t ReturnValue;
    } Parms{};
    Parms.Character = (struct ACharacter*)Character;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUAInventoryStatics::GetAllEquipArmorValue(struct ACharacter* Character)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "GetAllEquipArmorValue");
    struct
    {
        struct ACharacter* Character;
        int32_t ReturnValue;
    } Parms{};
    Parms.Character = (struct ACharacter*)Character;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UUAInventoryStatics::FindItemIDByInventoryClass(struct ASGInventory* SGInventory)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "FindItemIDByInventoryClass");
    struct
    {
        struct ASGInventory* SGInventory;
        uint64_t ReturnValue;
    } Parms{};
    Parms.SGInventory = (struct ASGInventory*)SGInventory;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UUAInventoryStatics::FindItemIDByDataTable(struct ASGInventory* SGInventory)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAInventoryStatics", "FindItemIDByDataTable");
    struct
    {
        struct ASGInventory* SGInventory;
        uint64_t ReturnValue;
    } Parms{};
    Parms.SGInventory = (struct ASGInventory*)SGInventory;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UUAListView
void UUAListView::SetPlayAnimationInitIndex(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UAListView", "SetPlayAnimationInitIndex");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UUAListView::PlayDelayAnimation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UAListView", "PlayDelayAnimation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUAListView::OnListEntryInitialized(struct UObject* item, struct UUserWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UAListView", "OnListEntryInitialized");
    struct
    {
        struct UObject* item;
        struct UUserWidget* Widget;
    } Parms{};
    Parms.item = (struct UObject*)item;
    Parms.Widget = (struct UUserWidget*)Widget;
    this->ProcessEvent(Func, &Parms);
}

// UUALocalizationStatic
void UUALocalizationStatic::SetLocalizationDebugDisplayName(struct FString InDisplayName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UALocalizationStatic", "SetLocalizationDebugDisplayName");
    struct
    {
        struct FString InDisplayName;
    } Parms{};
    Parms.InDisplayName = (struct FString)InDisplayName;
    this->ProcessEvent(Func, &Parms);
}

void UUALocalizationStatic::SetLocalizationCulture(struct FString& culture)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UALocalizationStatic", "SetLocalizationCulture");
    struct
    {
        struct FString culture;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    culture = Parms.culture;
}

void UUALocalizationStatic::SetCountryCode(struct FString InCountryCode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UALocalizationStatic", "SetCountryCode");
    struct
    {
        struct FString InCountryCode;
    } Parms{};
    Parms.InCountryCode = (struct FString)InCountryCode;
    this->ProcessEvent(Func, &Parms);
}

void UUALocalizationStatic::RemoveUnusedDisplayString()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UALocalizationStatic", "RemoveUnusedDisplayString");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUALocalizationStatic::ReloadTextLocalization()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UALocalizationStatic", "ReloadTextLocalization");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUALocalizationStatic::PreviewLocalizationCulture(struct FString& culture)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UALocalizationStatic", "PreviewLocalizationCulture");
    struct
    {
        struct FString culture;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    culture = Parms.culture;
}

int32_t UUALocalizationStatic::PatchTextLocalization(struct FString InPatchFile)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UALocalizationStatic", "PatchTextLocalization");
    struct
    {
        struct FString InPatchFile;
        int32_t ReturnValue;
    } Parms{};
    Parms.InPatchFile = (struct FString)InPatchFile;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUALocalizationStatic::ParseJsonDataMerage(struct FString JsonString, struct FString TextpatchJsonString)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UALocalizationStatic", "ParseJsonDataMerage");
    struct
    {
        struct FString JsonString;
        struct FString TextpatchJsonString;
    } Parms{};
    Parms.JsonString = (struct FString)JsonString;
    Parms.TextpatchJsonString = (struct FString)TextpatchJsonString;
    this->ProcessEvent(Func, &Parms);
}

void UUALocalizationStatic::ParseJsonData(struct FString JsonString)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UALocalizationStatic", "ParseJsonData");
    struct
    {
        struct FString JsonString;
    } Parms{};
    Parms.JsonString = (struct FString)JsonString;
    this->ProcessEvent(Func, &Parms);
}

void UUALocalizationStatic::LoadLocalization()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UALocalizationStatic", "LoadLocalization");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool UUALocalizationStatic::IsOverseasPackage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UALocalizationStatic", "IsOverseasPackage");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUALocalizationStatic::IsOverseasIndiaPackage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UALocalizationStatic", "IsOverseasIndiaPackage");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUALocalizationStatic::HasValue(struct FString Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UALocalizationStatic", "HasValue");
    struct
    {
        struct FString Key;
        bool ReturnValue;
    } Parms{};
    Parms.Key = (struct FString)Key;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UUALocalizationStatic::GetValue(struct FString Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UALocalizationStatic", "GetValue");
    struct
    {
        struct FString Key;
        struct FText ReturnValue;
    } Parms{};
    Parms.Key = (struct FString)Key;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUALocalizationStatic::GetLocalizationDebugDisplayName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UALocalizationStatic", "GetLocalizationDebugDisplayName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUALocalizationStatic::GetLocalizationCulture()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UALocalizationStatic", "GetLocalizationCulture");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUALocalizationStatic::GetImageLocalization(struct UImage* Image)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UALocalizationStatic", "GetImageLocalization");
    struct
    {
        struct UImage* Image;
        bool ReturnValue;
    } Parms{};
    Parms.Image = (struct UImage*)Image;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUALocalizationStatic::GetDisplayString(struct FString InNamespace, struct FString InKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UALocalizationStatic", "GetDisplayString");
    struct
    {
        struct FString InNamespace;
        struct FString InKey;
        struct FString ReturnValue;
    } Parms{};
    Parms.InNamespace = (struct FString)InNamespace;
    Parms.InKey = (struct FString)InKey;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUALocalizationStatic::CopySqliteLocResToExternal(struct FString InternalSqlitePath, struct FString ExternalSqlitePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UALocalizationStatic", "CopySqliteLocResToExternal");
    struct
    {
        struct FString InternalSqlitePath;
        struct FString ExternalSqlitePath;
        bool ReturnValue;
    } Parms{};
    Parms.InternalSqlitePath = (struct FString)InternalSqlitePath;
    Parms.ExternalSqlitePath = (struct FString)ExternalSqlitePath;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUALocalizationStatic::CanShowLanguagSetting()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UALocalizationStatic", "CanShowLanguagSetting");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UUAPanelProfiler
void UUAPanelProfiler::ResetProfileDepth()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAPanelProfiler", "ResetProfileDepth");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUAPanelProfiler::PrintProfileInfo(struct FString panelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAPanelProfiler", "PrintProfileInfo");
    struct
    {
        struct FString panelName;
    } Parms{};
    Parms.panelName = (struct FString)panelName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UUAPanelProfiler::IsTestOrShipping()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAPanelProfiler", "IsTestOrShipping");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UUAPanelProfiler::EndProfiler(struct FString panelName, struct FString phaseName, int32_t animStandardTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAPanelProfiler", "EndProfiler");
    struct
    {
        struct FString panelName;
        struct FString phaseName;
        int32_t animStandardTime;
        int32_t ReturnValue;
    } Parms{};
    Parms.panelName = (struct FString)panelName;
    Parms.phaseName = (struct FString)phaseName;
    Parms.animStandardTime = (int32_t)animStandardTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUAPanelProfiler::BeginProfiler(struct FString panelName, struct FString phaseName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAPanelProfiler", "BeginProfiler");
    struct
    {
        struct FString panelName;
        struct FString phaseName;
    } Parms{};
    Parms.panelName = (struct FString)panelName;
    Parms.phaseName = (struct FString)phaseName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UUAPhotoTakerCommon
struct FString UUAPhotoTakerCommon::TakePhoto()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAPhotoTakerCommon", "TakePhoto");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUAPhotoTakerCommon::ReleaseLoadedPhotos()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAPhotoTakerCommon", "ReleaseLoadedPhotos");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FString UUAPhotoTakerCommon::GetPhotoSavePath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAPhotoTakerCommon", "GetPhotoSavePath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUAPhotoTakerCommon::AsyncLoadPhoto(struct FString InPhotoName, struct UImage* Image)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAPhotoTakerCommon", "AsyncLoadPhoto");
    struct
    {
        struct FString InPhotoName;
        struct UImage* Image;
    } Parms{};
    Parms.InPhotoName = (struct FString)InPhotoName;
    Parms.Image = (struct UImage*)Image;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UUAUMGDebugHelper
struct FString UUAUMGDebugHelper::GetPanelWidgetTree(struct UUserWidget* panel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UAUMGDebugHelper", "GetPanelWidgetTree");
    struct
    {
        struct UUserWidget* panel;
        struct FString ReturnValue;
    } Parms{};
    Parms.panel = (struct UUserWidget*)panel;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UUserWidget* UUAUMGDebugHelper::GetInBattleCurrentPanel(struct TArray<struct FString>& ValidPanels)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UAUMGDebugHelper", "GetInBattleCurrentPanel");
    struct
    {
        struct TArray<struct FString> ValidPanels;
        struct UUserWidget* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    ValidPanels = Parms.ValidPanels;
    return Parms.ReturnValue;
}

struct UUserWidget* UUAUMGDebugHelper::GetCurrentPanel(struct UUserWidget* RootCanvasPanel, struct TArray<struct FString>& FilterPanels)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UAUMGDebugHelper", "GetCurrentPanel");
    struct
    {
        struct UUserWidget* RootCanvasPanel;
        struct TArray<struct FString> FilterPanels;
        struct UUserWidget* ReturnValue;
    } Parms{};
    Parms.RootCanvasPanel = (struct UUserWidget*)RootCanvasPanel;
    this->ProcessEvent(Func, &Parms);
    FilterPanels = Parms.FilterPanels;
    return Parms.ReturnValue;
}

struct UUAUMGDebugHelper* UUAUMGDebugHelper::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UAUMGDebugHelper", "Get");
    struct
    {
        struct UUAUMGDebugHelper* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UUMGHelperLibrary
struct UWidget* UUMGHelperLibrary::FindWidgetByName(struct UUserWidget* InUMGWidget, struct FName Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UMGHelperLibrary", "FindWidgetByName");
    struct
    {
        struct UUserWidget* InUMGWidget;
        struct FName Name;
        struct UWidget* ReturnValue;
    } Parms{};
    Parms.InUMGWidget = (struct UUserWidget*)InUMGWidget;
    Parms.Name = (struct FName)Name;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UUserWidget* UUMGHelperLibrary::CreateUserWidgetWithName(struct APlayerController* OwnerPC, struct UUserWidget* UserWidgetClass, struct FName WidgetName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UMGHelperLibrary", "CreateUserWidgetWithName");
    struct
    {
        struct APlayerController* OwnerPC;
        struct UUserWidget* UserWidgetClass;
        struct FName WidgetName;
        struct UUserWidget* ReturnValue;
    } Parms{};
    Parms.OwnerPC = (struct APlayerController*)OwnerPC;
    Parms.UserWidgetClass = (struct UUserWidget*)UserWidgetClass;
    Parms.WidgetName = (struct FName)WidgetName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UVideoManager
void UVideoManager::StopRecorder()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VideoManager", "StopRecorder");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool UVideoManager::StartRecorder()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VideoManager", "StartRecorder");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UVideoManager::RecordNotify(int32_t EventId, int32_t ErrorCode, struct FString Info)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VideoManager", "RecordNotify");
    struct
    {
        int32_t EventId;
        int32_t ErrorCode;
        struct FString Info;
    } Parms{};
    Parms.EventId = (int32_t)EventId;
    Parms.ErrorCode = (int32_t)ErrorCode;
    Parms.Info = (struct FString)Info;
    this->ProcessEvent(Func, &Parms);
}

bool UVideoManager::IsRecording()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VideoManager", "IsRecording");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UVideoManager::Init()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VideoManager", "Init");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UVideoManager* UVideoManager::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VideoManager", "Get");
    struct
    {
        struct UVideoManager* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
