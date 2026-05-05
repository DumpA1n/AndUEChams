#include "HotPatcherRuntime.hpp"
#include "AssetManagerEx.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UFlibPakHelper
uint8_t UFlibPakHelper::UnMountPak(struct FString PakPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibPakHelper", "UnMountPak");
    struct
    {
        struct FString PakPath;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PakPath = (struct FString)PakPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UFlibPakHelper::SerializePakVersionToString(const struct FPakVersion& InPakVersion, struct FString& OutString)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibPakHelper", "SerializePakVersionToString");
    struct
    {
        struct FPakVersion InPakVersion;
        struct FString OutString;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InPakVersion = (struct FPakVersion)InPakVersion;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutString = Parms.OutString;
    return Parms.ReturnValue;
}

uint8_t UFlibPakHelper::ScanPlatformDirectory(struct FString InRelativePath, uint8_t bIncludeFile, uint8_t bIncludeDir, uint8_t bRecursively, struct TArray<struct FString>& OutResault)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibPakHelper", "ScanPlatformDirectory");
    struct
    {
        struct FString InRelativePath;
        uint8_t bIncludeFile;
        uint8_t bIncludeDir;
        uint8_t bRecursively;
        struct TArray<struct FString> OutResault;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InRelativePath = (struct FString)InRelativePath;
    Parms.bIncludeFile = (uint8_t)bIncludeFile;
    Parms.bIncludeDir = (uint8_t)bIncludeDir;
    Parms.bRecursively = (uint8_t)bRecursively;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutResault = Parms.OutResault;
    return Parms.ReturnValue;
}

struct TArray<struct FString> UFlibPakHelper::ScanPakFilesByPath(struct FString DirectoryName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibPakHelper", "ScanPakFilesByPath");
    struct
    {
        struct FString DirectoryName;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.DirectoryName = (struct FString)DirectoryName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UFlibPakHelper::ScanExtenPakFiles(struct FString DirectoryName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibPakHelper", "ScanExtenPakFiles");
    struct
    {
        struct FString DirectoryName;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.DirectoryName = (struct FString)DirectoryName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UFlibPakHelper::ScanExtenFilesInDirectory(struct FString InRelativePath, struct FString InExtenPostfix, uint8_t InRecursively, struct TArray<struct FString>& OutFiles)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibPakHelper", "ScanExtenFilesInDirectory");
    struct
    {
        struct FString InRelativePath;
        struct FString InExtenPostfix;
        uint8_t InRecursively;
        struct TArray<struct FString> OutFiles;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InRelativePath = (struct FString)InRelativePath;
    Parms.InExtenPostfix = (struct FString)InExtenPostfix;
    Parms.InRecursively = (uint8_t)InRecursively;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutFiles = Parms.OutFiles;
    return Parms.ReturnValue;
}

struct TArray<struct FString> UFlibPakHelper::ScanExtenFilesByPostFix(struct FString DirectoryName, struct FString Postfix)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibPakHelper", "ScanExtenFilesByPostFix");
    struct
    {
        struct FString DirectoryName;
        struct FString Postfix;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.DirectoryName = (struct FString)DirectoryName;
    Parms.Postfix = (struct FString)Postfix;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UFlibPakHelper::ScanAllVersionDescribleFiles()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibPakHelper", "ScanAllVersionDescribleFiles");
    struct
    {
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UFlibPakHelper::OpenPSO(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibPakHelper", "OpenPSO");
    struct
    {
        struct FString Name;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UFlibPakHelper::MountPak(struct FString PakPath, int32_t PakOrder, struct FString InMountPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibPakHelper", "MountPak");
    struct
    {
        struct FString PakPath;
        int32_t PakOrder;
        struct FString InMountPoint;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PakPath = (struct FString)PakPath;
    Parms.PakOrder = (int32_t)PakOrder;
    Parms.InMountPoint = (struct FString)InMountPoint;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UFlibPakHelper::LoadAssetRegistry(struct FString InAssetRegistryBin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibPakHelper", "LoadAssetRegistry");
    struct
    {
        struct FString InAssetRegistryBin;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InAssetRegistryBin = (struct FString)InAssetRegistryBin;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UFlibPakHelper::GetPakOrderByPakPath(struct FString PakFile)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibPakHelper", "GetPakOrderByPakPath");
    struct
    {
        struct FString PakFile;
        int32_t ReturnValue;
    } Parms{};
    Parms.PakFile = (struct FString)PakFile;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UFlibPakHelper::GetExtenFileSize(struct FString FilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibPakHelper", "GetExtenFileSize");
    struct
    {
        struct FString FilePath;
        int64_t ReturnValue;
    } Parms{};
    Parms.FilePath = (struct FString)FilePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UFlibPakHelper::GetAllMountedPaks()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibPakHelper", "GetAllMountedPaks");
    struct
    {
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UFlibPakHelper::ExecMountPak(struct FString InPakPath, int32_t InPakOrder, struct FString InMountPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibPakHelper", "ExecMountPak");
    struct
    {
        struct FString InPakPath;
        int32_t InPakOrder;
        struct FString InMountPoint;
    } Parms{};
    Parms.InPakPath = (struct FString)InPakPath;
    Parms.InPakOrder = (int32_t)InPakOrder;
    Parms.InMountPoint = (struct FString)InMountPoint;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UFlibPakHelper::DeserializeStringToPakVersion(struct FString inString, struct FPakVersion& OutPakVersion)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibPakHelper", "DeserializeStringToPakVersion");
    struct
    {
        struct FString inString;
        struct FPakVersion OutPakVersion;
        uint8_t ReturnValue;
    } Parms{};
    Parms.inString = (struct FString)inString;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutPakVersion = Parms.OutPakVersion;
    return Parms.ReturnValue;
}

uint8_t UFlibPakHelper::CreateFileByBytes(struct FString InFile, const struct TArray<uint8_t>& InBytes, int32_t InWriteFlag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibPakHelper", "CreateFileByBytes");
    struct
    {
        struct FString InFile;
        struct TArray<uint8_t> InBytes;
        int32_t InWriteFlag;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InFile = (struct FString)InFile;
    Parms.InBytes = (struct TArray<uint8_t>)InBytes;
    Parms.InWriteFlag = (int32_t)InWriteFlag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UFlibPatchParserHelper
void UFlibPatchParserHelper::ReloadShaderbytecode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibPatchParserHelper", "ReloadShaderbytecode");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UFlibPatchParserHelper::LoadShaderbytecode(struct FString LibraryName, struct FString LibraryDir)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibPatchParserHelper", "LoadShaderbytecode");
    struct
    {
        struct FString LibraryName;
        struct FString LibraryDir;
        uint8_t ReturnValue;
    } Parms{};
    Parms.LibraryName = (struct FString)LibraryName;
    Parms.LibraryDir = (struct FString)LibraryDir;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UFlibPatchParserHelper::HashStringWithSHA1(struct FString inString)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibPatchParserHelper", "HashStringWithSHA1");
    struct
    {
        struct FString inString;
        struct FString ReturnValue;
    } Parms{};
    Parms.inString = (struct FString)inString;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UFlibPatchParserHelper::GetProjectName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibPatchParserHelper", "GetProjectName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UFlibPatchParserHelper::GetProjectIniFiles(struct FString InProjectDir, struct FString InPlatformName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibPatchParserHelper", "GetProjectIniFiles");
    struct
    {
        struct FString InProjectDir;
        struct FString InPlatformName;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.InProjectDir = (struct FString)InProjectDir;
    Parms.InPlatformName = (struct FString)InPlatformName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UFlibPatchParserHelper::GetProjectFilePath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibPatchParserHelper", "GetProjectFilePath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UFlibPatchParserHelper::GetPakFileInfo(struct FString InFile, struct FPakFileInfo& OutFileInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibPatchParserHelper", "GetPakFileInfo");
    struct
    {
        struct FString InFile;
        struct FPakFileInfo OutFileInfo;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InFile = (struct FString)InFile;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutFileInfo = Parms.OutFileInfo;
    return Parms.ReturnValue;
}

struct TArray<struct FString> UFlibPatchParserHelper::GetIniConfigs(struct FString InSearchDir, struct FString InPlatformName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibPatchParserHelper", "GetIniConfigs");
    struct
    {
        struct FString InSearchDir;
        struct FString InPlatformName;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.InSearchDir = (struct FString)InSearchDir;
    Parms.InPlatformName = (struct FString)InPlatformName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UFlibPatchParserHelper::GetEngineConfigs(struct FString InPlatformName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibPatchParserHelper", "GetEngineConfigs");
    struct
    {
        struct FString InPlatformName;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.InPlatformName = (struct FString)InPlatformName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UFlibPatchParserHelper::GetEnabledPluginConfigs(struct FString InPlatformName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibPatchParserHelper", "GetEnabledPluginConfigs");
    struct
    {
        struct FString InPlatformName;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.InPlatformName = (struct FString)InPlatformName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UFlibPatchParserHelper::GetCookedShaderBytecodeFiles(struct FString InProjectAbsDir, struct FString InProjectName, struct FString InPlatformName, uint8_t InGalobalBytecode, uint8_t InProjectBytecode, struct TArray<struct FString>& OutFiles)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibPatchParserHelper", "GetCookedShaderBytecodeFiles");
    struct
    {
        struct FString InProjectAbsDir;
        struct FString InProjectName;
        struct FString InPlatformName;
        uint8_t InGalobalBytecode;
        uint8_t InProjectBytecode;
        struct TArray<struct FString> OutFiles;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InProjectAbsDir = (struct FString)InProjectAbsDir;
    Parms.InProjectName = (struct FString)InProjectName;
    Parms.InPlatformName = (struct FString)InPlatformName;
    Parms.InGalobalBytecode = (uint8_t)InGalobalBytecode;
    Parms.InProjectBytecode = (uint8_t)InProjectBytecode;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutFiles = Parms.OutFiles;
    return Parms.ReturnValue;
}

struct TArray<struct FString> UFlibPatchParserHelper::GetCookedGlobalShaderCacheFiles(struct FString InProjectDir, struct FString InPlatformName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibPatchParserHelper", "GetCookedGlobalShaderCacheFiles");
    struct
    {
        struct FString InProjectDir;
        struct FString InPlatformName;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.InProjectDir = (struct FString)InProjectDir;
    Parms.InPlatformName = (struct FString)InPlatformName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UFlibPatchParserHelper::GetCookedAssetRegistryFiles(struct FString InProjectAbsDir, struct FString InProjectName, struct FString InPlatformName, struct FString& OutFiles)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibPatchParserHelper", "GetCookedAssetRegistryFiles");
    struct
    {
        struct FString InProjectAbsDir;
        struct FString InProjectName;
        struct FString InPlatformName;
        struct FString OutFiles;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InProjectAbsDir = (struct FString)InProjectAbsDir;
    Parms.InProjectName = (struct FString)InProjectName;
    Parms.InPlatformName = (struct FString)InPlatformName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutFiles = Parms.OutFiles;
    return Parms.ReturnValue;
}

struct TArray<struct FString> UFlibPatchParserHelper::GetAvailableMaps(struct FString gameName, uint8_t IncludeEngineMaps, uint8_t IncludePluginMaps, uint8_t Sorted)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibPatchParserHelper", "GetAvailableMaps");
    struct
    {
        struct FString gameName;
        uint8_t IncludeEngineMaps;
        uint8_t IncludePluginMaps;
        uint8_t Sorted;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.gameName = (struct FString)gameName;
    Parms.IncludeEngineMaps = (uint8_t)IncludeEngineMaps;
    Parms.IncludePluginMaps = (uint8_t)IncludePluginMaps;
    Parms.Sorted = (uint8_t)Sorted;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FPlatformExternFiles UFlibPatchParserHelper::GetAllExFilesByPlatform(const struct FPlatformExternAssets& InPlatformConf, uint8_t InGeneratedHash)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibPatchParserHelper", "GetAllExFilesByPlatform");
    struct
    {
        struct FPlatformExternAssets InPlatformConf;
        uint8_t InGeneratedHash;
        struct FPlatformExternFiles ReturnValue;
    } Parms{};
    Parms.InPlatformConf = (struct FPlatformExternAssets)InPlatformConf;
    Parms.InGeneratedHash = (uint8_t)InGeneratedHash;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FAssetDetail> UFlibPatchParserHelper::GetAllAssetDependencyDetails(const struct FAssetDetail& Asset, const struct TArray<EAssetRegistryDependencyTypeEx>& Types, struct FString AssetType, struct TMap<struct FString, struct FAssetDependenciesInfo>& ScanedCaches)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibPatchParserHelper", "GetAllAssetDependencyDetails");
    struct
    {
        struct FAssetDetail Asset;
        struct TArray<EAssetRegistryDependencyTypeEx> Types;
        struct FString AssetType;
        struct TMap<struct FString, struct FAssetDependenciesInfo> ScanedCaches;
        struct TArray<struct FAssetDetail> ReturnValue;
    } Parms{};
    Parms.Asset = (struct FAssetDetail)Asset;
    Parms.Types = (struct TArray<EAssetRegistryDependencyTypeEx>)Types;
    Parms.AssetType = (struct FString)AssetType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    ScanedCaches = Parms.ScanedCaches;
    return Parms.ReturnValue;
}

uint8_t UFlibPatchParserHelper::DiffVersionAssets(const struct FAssetDependenciesInfo& InNewVersion, const struct FAssetDependenciesInfo& InBaseVersion, struct FAssetDependenciesInfo& OutAddAsset, struct FAssetDependenciesInfo& OutModifyAsset, struct FAssetDependenciesInfo& OutDeleteAsset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibPatchParserHelper", "DiffVersionAssets");
    struct
    {
        struct FAssetDependenciesInfo InNewVersion;
        struct FAssetDependenciesInfo InBaseVersion;
        struct FAssetDependenciesInfo OutAddAsset;
        struct FAssetDependenciesInfo OutModifyAsset;
        struct FAssetDependenciesInfo OutDeleteAsset;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InNewVersion = (struct FAssetDependenciesInfo)InNewVersion;
    Parms.InBaseVersion = (struct FAssetDependenciesInfo)InBaseVersion;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutAddAsset = Parms.OutAddAsset;
    OutModifyAsset = Parms.OutModifyAsset;
    OutDeleteAsset = Parms.OutDeleteAsset;
    return Parms.ReturnValue;
}

uint8_t UFlibPatchParserHelper::DiffVersionAllPlatformExFiles(const struct FHotPatcherVersion& InBaseVersion, const struct FHotPatcherVersion& InNewVersion, struct TMap<ETargetPlatform, struct FPatchVersionExternDiff>& OutDiff)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibPatchParserHelper", "DiffVersionAllPlatformExFiles");
    struct
    {
        struct FHotPatcherVersion InBaseVersion;
        struct FHotPatcherVersion InNewVersion;
        struct TMap<ETargetPlatform, struct FPatchVersionExternDiff> OutDiff;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InBaseVersion = (struct FHotPatcherVersion)InBaseVersion;
    Parms.InNewVersion = (struct FHotPatcherVersion)InNewVersion;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutDiff = Parms.OutDiff;
    return Parms.ReturnValue;
}

// UFlibShaderPipelineCacheHelper
uint8_t UFlibShaderPipelineCacheHelper::SavePipelineFileCache(EPSOSaveMode Mode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibShaderPipelineCacheHelper", "SavePipelineFileCache");
    struct
    {
        enum EPSOSaveMode Mode;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Mode = (enum EPSOSaveMode)Mode;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UFlibShaderPipelineCacheHelper::LoadShaderPipelineCache(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibShaderPipelineCacheHelper", "LoadShaderPipelineCache");
    struct
    {
        struct FString Name;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UFlibShaderPipelineCacheHelper::IsEnabledUsePSO()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibShaderPipelineCacheHelper", "IsEnabledUsePSO");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UFlibShaderPipelineCacheHelper::IsEnabledSaveBoundPSOLog()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibShaderPipelineCacheHelper", "IsEnabledSaveBoundPSOLog");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UFlibShaderPipelineCacheHelper::IsEnabledLogPSO()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibShaderPipelineCacheHelper", "IsEnabledLogPSO");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UFlibShaderPipelineCacheHelper::EnableShaderPipelineCache(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibShaderPipelineCacheHelper", "EnableShaderPipelineCache");
    struct
    {
        uint8_t bEnable;
        uint8_t ReturnValue;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UFlibShaderPipelineCacheHelper::EnableSaveBoundPSOLog(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibShaderPipelineCacheHelper", "EnableSaveBoundPSOLog");
    struct
    {
        uint8_t bEnable;
        uint8_t ReturnValue;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UFlibShaderPipelineCacheHelper::EnableLogPSO(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FlibShaderPipelineCacheHelper", "EnableLogPSO");
    struct
    {
        uint8_t bEnable;
        uint8_t ReturnValue;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMountListener
void UMountListener::Init()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MountListener", "Init");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
