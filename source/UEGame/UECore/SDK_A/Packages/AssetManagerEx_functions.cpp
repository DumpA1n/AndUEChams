#include "AssetManagerEx.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UFLibAssetManageHelperEx
struct FString UFLibAssetManageHelperEx::SerializeAssetDetialArrayToString(const struct TArray<struct FAssetDetail>& InAssetDetialList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "SerializeAssetDetialArrayToString");
    struct
    {
        struct TArray<struct FAssetDetail> InAssetDetialList;
        struct FString ReturnValue;
    } Parms{};
    Parms.InAssetDetialList = (struct TArray<struct FAssetDetail>)InAssetDetialList;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UFLibAssetManageHelperEx::SerializeAssetDependenciesToJson(const struct FAssetDependenciesInfo& InAssetDependencies, struct FString& OutJsonStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "SerializeAssetDependenciesToJson");
    struct
    {
        struct FAssetDependenciesInfo InAssetDependencies;
        struct FString OutJsonStr;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InAssetDependencies = (struct FAssetDependenciesInfo)InAssetDependencies;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutJsonStr = Parms.OutJsonStr;
    return Parms.ReturnValue;
}

uint8_t UFLibAssetManageHelperEx::SaveStringToFile(struct FString InFile, struct FString inString)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "SaveStringToFile");
    struct
    {
        struct FString InFile;
        struct FString inString;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InFile = (struct FString)InFile;
    Parms.inString = (struct FString)inString;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UFLibAssetManageHelperEx::ModuleIsEnabled(struct FString InModuleName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "ModuleIsEnabled");
    struct
    {
        struct FString InModuleName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InModuleName = (struct FString)InModuleName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UFLibAssetManageHelperEx::LoadFileToString(struct FString InFile, struct FString& OutString)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "LoadFileToString");
    struct
    {
        struct FString InFile;
        struct FString OutString;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InFile = (struct FString)InFile;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutString = Parms.OutString;
    return Parms.ReturnValue;
}

uint8_t UFLibAssetManageHelperEx::IsValidPlatform(struct FString PlatformName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "IsValidPlatform");
    struct
    {
        struct FString PlatformName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PlatformName = (struct FString)PlatformName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UFLibAssetManageHelperEx::GetSpecifyAssetDetail(struct FString InLongPackageName, struct FAssetDetail& OutAssetDetail)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "GetSpecifyAssetDetail");
    struct
    {
        struct FString InLongPackageName;
        struct FAssetDetail OutAssetDetail;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InLongPackageName = (struct FString)InLongPackageName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutAssetDetail = Parms.OutAssetDetail;
    return Parms.ReturnValue;
}

uint8_t UFLibAssetManageHelperEx::GetRedirectorList(const struct TArray<struct FString>& InFilterPackagePaths, struct TArray<struct FAssetDetail>& OutRedirector)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "GetRedirectorList");
    struct
    {
        struct TArray<struct FString> InFilterPackagePaths;
        struct TArray<struct FAssetDetail> OutRedirector;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InFilterPackagePaths = (struct TArray<struct FString>)InFilterPackagePaths;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutRedirector = Parms.OutRedirector;
    return Parms.ReturnValue;
}

uint8_t UFLibAssetManageHelperEx::GetPluginModuleAbsDir(struct FString InPluginModuleName, struct FString& OutPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "GetPluginModuleAbsDir");
    struct
    {
        struct FString InPluginModuleName;
        struct FString OutPath;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InPluginModuleName = (struct FString)InPluginModuleName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutPath = Parms.OutPath;
    return Parms.ReturnValue;
}

uint8_t UFLibAssetManageHelperEx::GetModuleNameByRelativePath(struct FString InRelativePath, struct FString& OutModuleName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "GetModuleNameByRelativePath");
    struct
    {
        struct FString InRelativePath;
        struct FString OutModuleName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InRelativePath = (struct FString)InRelativePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutModuleName = Parms.OutModuleName;
    return Parms.ReturnValue;
}

uint8_t UFLibAssetManageHelperEx::GetModuleAssetsList(struct FString InModuleName, const struct TArray<struct FString>& InExFilterPackagePaths, const struct TArray<EAssetRegistryDependencyTypeEx>& AssetRegistryDependencyTypes, struct TArray<struct FAssetDetail>& OutAssetList, struct TMap<struct FString, struct FAssetDependenciesInfo>& ScanedCaches)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "GetModuleAssetsList");
    struct
    {
        struct FString InModuleName;
        struct TArray<struct FString> InExFilterPackagePaths;
        struct TArray<EAssetRegistryDependencyTypeEx> AssetRegistryDependencyTypes;
        struct TArray<struct FAssetDetail> OutAssetList;
        struct TMap<struct FString, struct FAssetDependenciesInfo> ScanedCaches;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InModuleName = (struct FString)InModuleName;
    Parms.InExFilterPackagePaths = (struct TArray<struct FString>)InExFilterPackagePaths;
    Parms.AssetRegistryDependencyTypes = (struct TArray<EAssetRegistryDependencyTypeEx>)AssetRegistryDependencyTypes;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutAssetList = Parms.OutAssetList;
    ScanedCaches = Parms.ScanedCaches;
    return Parms.ReturnValue;
}

struct FString UFLibAssetManageHelperEx::GetLongPackageNameFromPackagePath(struct FString InPackagePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "GetLongPackageNameFromPackagePath");
    struct
    {
        struct FString InPackagePath;
        struct FString ReturnValue;
    } Parms{};
    Parms.InPackagePath = (struct FString)InPackagePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UFLibAssetManageHelperEx::GetEnableModuleAbsDir(struct FString InModuleName, struct FString& OutPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "GetEnableModuleAbsDir");
    struct
    {
        struct FString InModuleName;
        struct FString OutPath;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InModuleName = (struct FString)InModuleName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutPath = Parms.OutPath;
    return Parms.ReturnValue;
}

uint8_t UFLibAssetManageHelperEx::GetAssetsList(const struct TArray<struct FString>& InFilterPackagePaths, const struct TArray<EAssetRegistryDependencyTypeEx>& AssetRegistryDependencyTypes, struct TArray<struct FAssetDetail>& OutAssetList, struct TMap<struct FString, struct FAssetDependenciesInfo>& ScanedCaches, uint8_t bReTargetRedirector)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "GetAssetsList");
    struct
    {
        struct TArray<struct FString> InFilterPackagePaths;
        struct TArray<EAssetRegistryDependencyTypeEx> AssetRegistryDependencyTypes;
        struct TArray<struct FAssetDetail> OutAssetList;
        struct TMap<struct FString, struct FAssetDependenciesInfo> ScanedCaches;
        uint8_t bReTargetRedirector;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InFilterPackagePaths = (struct TArray<struct FString>)InFilterPackagePaths;
    Parms.AssetRegistryDependencyTypes = (struct TArray<EAssetRegistryDependencyTypeEx>)AssetRegistryDependencyTypes;
    Parms.bReTargetRedirector = (uint8_t)bReTargetRedirector;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutAssetList = Parms.OutAssetList;
    ScanedCaches = Parms.ScanedCaches;
    return Parms.ReturnValue;
}

uint8_t UFLibAssetManageHelperEx::GetAssetReferenceEx(const struct FAssetDetail& InAsset, const struct TArray<EAssetRegistryDependencyTypeEx>& SearchAssetDepTypes, struct TArray<struct FAssetDetail>& OutRefAsset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "GetAssetReferenceEx");
    struct
    {
        struct FAssetDetail InAsset;
        struct TArray<EAssetRegistryDependencyTypeEx> SearchAssetDepTypes;
        struct TArray<struct FAssetDetail> OutRefAsset;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InAsset = (struct FAssetDetail)InAsset;
    Parms.SearchAssetDepTypes = (struct TArray<EAssetRegistryDependencyTypeEx>)SearchAssetDepTypes;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutRefAsset = Parms.OutRefAsset;
    return Parms.ReturnValue;
}

uint8_t UFLibAssetManageHelperEx::GetAssetPackageGUID(struct FString InPackagePath, struct FString& OutGUID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "GetAssetPackageGUID");
    struct
    {
        struct FString InPackagePath;
        struct FString OutGUID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InPackagePath = (struct FString)InPackagePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutGUID = Parms.OutGUID;
    return Parms.ReturnValue;
}

struct FString UFLibAssetManageHelperEx::GetAssetNameFromPackagePath(struct FString InPackagePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "GetAssetNameFromPackagePath");
    struct
    {
        struct FString InPackagePath;
        struct FString ReturnValue;
    } Parms{};
    Parms.InPackagePath = (struct FString)InPackagePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UFLibAssetManageHelperEx::GetAssetListDependenciesForAssetDetail(const struct TArray<struct FAssetDetail>& InAssetsDetailList, const struct TArray<EAssetRegistryDependencyTypeEx>& AssetRegistryDependencyTypes, struct FAssetDependenciesInfo& OutDependices, struct TMap<struct FString, struct FAssetDependenciesInfo>& ScandCaches)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "GetAssetListDependenciesForAssetDetail");
    struct
    {
        struct TArray<struct FAssetDetail> InAssetsDetailList;
        struct TArray<EAssetRegistryDependencyTypeEx> AssetRegistryDependencyTypes;
        struct FAssetDependenciesInfo OutDependices;
        struct TMap<struct FString, struct FAssetDependenciesInfo> ScandCaches;
    } Parms{};
    Parms.InAssetsDetailList = (struct TArray<struct FAssetDetail>)InAssetsDetailList;
    Parms.AssetRegistryDependencyTypes = (struct TArray<EAssetRegistryDependencyTypeEx>)AssetRegistryDependencyTypes;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutDependices = Parms.OutDependices;
    ScandCaches = Parms.ScandCaches;
}

void UFLibAssetManageHelperEx::GetAssetListDependencies(const struct TArray<struct FString>& InLongPackageNameList, const struct TArray<EAssetRegistryDependencyTypeEx>& AssetRegistryDependencyTypes, struct FAssetDependenciesInfo& OutDependices, struct TMap<struct FString, struct FAssetDependenciesInfo>& ScandCaches)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "GetAssetListDependencies");
    struct
    {
        struct TArray<struct FString> InLongPackageNameList;
        struct TArray<EAssetRegistryDependencyTypeEx> AssetRegistryDependencyTypes;
        struct FAssetDependenciesInfo OutDependices;
        struct TMap<struct FString, struct FAssetDependenciesInfo> ScandCaches;
    } Parms{};
    Parms.InLongPackageNameList = (struct TArray<struct FString>)InLongPackageNameList;
    Parms.AssetRegistryDependencyTypes = (struct TArray<EAssetRegistryDependencyTypeEx>)AssetRegistryDependencyTypes;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutDependices = Parms.OutDependices;
    ScandCaches = Parms.ScandCaches;
}

uint8_t UFLibAssetManageHelperEx::GetAssetDependencyByDetail(const struct FAssetDetail& InAsset, const struct TArray<EAssetRegistryDependencyTypeEx>& AssetRegistryDependencyTypes, struct TArray<struct FAssetDetail>& OutRefAsset, struct TMap<struct FString, struct FAssetDependenciesInfo>& ScandCaches, uint8_t bRecursively)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "GetAssetDependencyByDetail");
    struct
    {
        struct FAssetDetail InAsset;
        struct TArray<EAssetRegistryDependencyTypeEx> AssetRegistryDependencyTypes;
        struct TArray<struct FAssetDetail> OutRefAsset;
        struct TMap<struct FString, struct FAssetDependenciesInfo> ScandCaches;
        uint8_t bRecursively;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InAsset = (struct FAssetDetail)InAsset;
    Parms.AssetRegistryDependencyTypes = (struct TArray<EAssetRegistryDependencyTypeEx>)AssetRegistryDependencyTypes;
    Parms.bRecursively = (uint8_t)bRecursively;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutRefAsset = Parms.OutRefAsset;
    ScandCaches = Parms.ScandCaches;
    return Parms.ReturnValue;
}

uint8_t UFLibAssetManageHelperEx::GetAssetDependency(struct FString InLongPackageName, const struct TArray<EAssetRegistryDependencyTypeEx>& AssetRegistryDependencyTypes, struct TArray<struct FAssetDetail>& OutRefAsset, struct TMap<struct FString, struct FAssetDependenciesInfo>& ScandCaches, uint8_t bRecursively)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "GetAssetDependency");
    struct
    {
        struct FString InLongPackageName;
        struct TArray<EAssetRegistryDependencyTypeEx> AssetRegistryDependencyTypes;
        struct TArray<struct FAssetDetail> OutRefAsset;
        struct TMap<struct FString, struct FAssetDependenciesInfo> ScandCaches;
        uint8_t bRecursively;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InLongPackageName = (struct FString)InLongPackageName;
    Parms.AssetRegistryDependencyTypes = (struct TArray<EAssetRegistryDependencyTypeEx>)AssetRegistryDependencyTypes;
    Parms.bRecursively = (uint8_t)bRecursively;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutRefAsset = Parms.OutRefAsset;
    ScandCaches = Parms.ScandCaches;
    return Parms.ReturnValue;
}

void UFLibAssetManageHelperEx::GetAssetDependenciesForAssetDetail(const struct FAssetDetail& InAssetDetail, const struct TArray<EAssetRegistryDependencyTypeEx>& AssetRegistryDependencyTypes, struct FAssetDependenciesInfo& OutDependices, struct TMap<struct FString, struct FAssetDependenciesInfo>& ScandCaches)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "GetAssetDependenciesForAssetDetail");
    struct
    {
        struct FAssetDetail InAssetDetail;
        struct TArray<EAssetRegistryDependencyTypeEx> AssetRegistryDependencyTypes;
        struct FAssetDependenciesInfo OutDependices;
        struct TMap<struct FString, struct FAssetDependenciesInfo> ScandCaches;
    } Parms{};
    Parms.InAssetDetail = (struct FAssetDetail)InAssetDetail;
    Parms.AssetRegistryDependencyTypes = (struct TArray<EAssetRegistryDependencyTypeEx>)AssetRegistryDependencyTypes;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutDependices = Parms.OutDependices;
    ScandCaches = Parms.ScandCaches;
}

void UFLibAssetManageHelperEx::GetAssetDependencies(struct FString InLongPackageName, const struct TArray<EAssetRegistryDependencyTypeEx>& AssetRegistryDependencyTypes, struct FAssetDependenciesInfo& OutDependices, struct TMap<struct FString, struct FAssetDependenciesInfo>& ScanedCaches)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "GetAssetDependencies");
    struct
    {
        struct FString InLongPackageName;
        struct TArray<EAssetRegistryDependencyTypeEx> AssetRegistryDependencyTypes;
        struct FAssetDependenciesInfo OutDependices;
        struct TMap<struct FString, struct FAssetDependenciesInfo> ScanedCaches;
    } Parms{};
    Parms.InLongPackageName = (struct FString)InLongPackageName;
    Parms.AssetRegistryDependencyTypes = (struct TArray<EAssetRegistryDependencyTypeEx>)AssetRegistryDependencyTypes;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutDependices = Parms.OutDependices;
    ScanedCaches = Parms.ScanedCaches;
}

struct TArray<struct FString> UFLibAssetManageHelperEx::GetAllTargetPlatform()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "GetAllTargetPlatform");
    struct
    {
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UFLibAssetManageHelperEx::GetAllEnabledModuleName(struct TMap<struct FString, struct FString>& OutModules)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "GetAllEnabledModuleName");
    struct
    {
        struct TMap<struct FString, struct FString> OutModules;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutModules = Parms.OutModules;
}

uint8_t UFLibAssetManageHelperEx::FindFilesRecursive(struct FString InStartDir, struct TArray<struct FString>& OutFileList, uint8_t InRecursive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "FindFilesRecursive");
    struct
    {
        struct FString InStartDir;
        struct TArray<struct FString> OutFileList;
        uint8_t InRecursive;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InStartDir = (struct FString)InStartDir;
    Parms.InRecursive = (uint8_t)InRecursive;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutFileList = Parms.OutFileList;
    return Parms.ReturnValue;
}

void UFLibAssetManageHelperEx::FilterNoRefAssetsWithIgnoreFilter(const struct TArray<struct FAssetDetail>& InAssetsDetail, const struct TArray<struct FString>& InIgnoreFilters, struct TArray<struct FAssetDetail>& OutHasRefAssetsDetail, struct TArray<struct FAssetDetail>& OutDontHasRefAssetsDetail)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "FilterNoRefAssetsWithIgnoreFilter");
    struct
    {
        struct TArray<struct FAssetDetail> InAssetsDetail;
        struct TArray<struct FString> InIgnoreFilters;
        struct TArray<struct FAssetDetail> OutHasRefAssetsDetail;
        struct TArray<struct FAssetDetail> OutDontHasRefAssetsDetail;
    } Parms{};
    Parms.InAssetsDetail = (struct TArray<struct FAssetDetail>)InAssetsDetail;
    Parms.InIgnoreFilters = (struct TArray<struct FString>)InIgnoreFilters;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHasRefAssetsDetail = Parms.OutHasRefAssetsDetail;
    OutDontHasRefAssetsDetail = Parms.OutDontHasRefAssetsDetail;
}

void UFLibAssetManageHelperEx::FilterNoRefAssets(const struct TArray<struct FAssetDetail>& InAssetsDetail, struct TArray<struct FAssetDetail>& OutHasRefAssetsDetail, struct TArray<struct FAssetDetail>& OutDontHasRefAssetsDetail)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "FilterNoRefAssets");
    struct
    {
        struct TArray<struct FAssetDetail> InAssetsDetail;
        struct TArray<struct FAssetDetail> OutHasRefAssetsDetail;
        struct TArray<struct FAssetDetail> OutDontHasRefAssetsDetail;
    } Parms{};
    Parms.InAssetsDetail = (struct TArray<struct FAssetDetail>)InAssetsDetail;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHasRefAssetsDetail = Parms.OutHasRefAssetsDetail;
    OutDontHasRefAssetsDetail = Parms.OutDontHasRefAssetsDetail;
}

uint8_t UFLibAssetManageHelperEx::ExportCookPakCommandToFile(const struct TArray<struct FString>& InCommand, struct FString InFile)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "ExportCookPakCommandToFile");
    struct
    {
        struct TArray<struct FString> InCommand;
        struct FString InFile;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InCommand = (struct TArray<struct FString>)InCommand;
    Parms.InFile = (struct FString)InFile;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UFLibAssetManageHelperEx::DeserializeAssetDependencies(struct FString InStream, struct FAssetDependenciesInfo& OutAssetDependencies)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "DeserializeAssetDependencies");
    struct
    {
        struct FString InStream;
        struct FAssetDependenciesInfo OutAssetDependencies;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InStream = (struct FString)InStream;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutAssetDependencies = Parms.OutAssetDependencies;
    return Parms.ReturnValue;
}

struct FString UFLibAssetManageHelperEx::ConvVirtualToAbsPath(struct FString InPackagePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "ConvVirtualToAbsPath");
    struct
    {
        struct FString InPackagePath;
        struct FString ReturnValue;
    } Parms{};
    Parms.InPackagePath = (struct FString)InPackagePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UFLibAssetManageHelperEx::ConvRelativeDirToAbsDir(struct FString InRelativePath, struct FString& OutAbsPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "ConvRelativeDirToAbsDir");
    struct
    {
        struct FString InRelativePath;
        struct FString OutAbsPath;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InRelativePath = (struct FString)InRelativePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutAbsPath = Parms.OutAbsPath;
    return Parms.ReturnValue;
}

uint8_t UFLibAssetManageHelperEx::ConvPackagePathToLongPackageName(struct FString InPackagePath, struct FString& OutLongPackageName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "ConvPackagePathToLongPackageName");
    struct
    {
        struct FString InPackagePath;
        struct FString OutLongPackageName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InPackagePath = (struct FString)InPackagePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutLongPackageName = Parms.OutLongPackageName;
    return Parms.ReturnValue;
}

uint8_t UFLibAssetManageHelperEx::ConvLongPackageNameToPackagePath(struct FString InLongPackageName, struct FString& OutPackagePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "ConvLongPackageNameToPackagePath");
    struct
    {
        struct FString InLongPackageName;
        struct FString OutPackagePath;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InLongPackageName = (struct FString)InLongPackageName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutPackagePath = Parms.OutPackagePath;
    return Parms.ReturnValue;
}

uint8_t UFLibAssetManageHelperEx::ConvLongPackageNameToCookedPath(struct FString InProjectAbsDir, struct FString InPlatformName, struct FString InLongPackageName, struct TArray<struct FString>& OutCookedAssetPath, struct TArray<struct FString>& OutCookedAssetRelativePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "ConvLongPackageNameToCookedPath");
    struct
    {
        struct FString InProjectAbsDir;
        struct FString InPlatformName;
        struct FString InLongPackageName;
        struct TArray<struct FString> OutCookedAssetPath;
        struct TArray<struct FString> OutCookedAssetRelativePath;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InProjectAbsDir = (struct FString)InProjectAbsDir;
    Parms.InPlatformName = (struct FString)InPlatformName;
    Parms.InLongPackageName = (struct FString)InLongPackageName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutCookedAssetPath = Parms.OutCookedAssetPath;
    OutCookedAssetRelativePath = Parms.OutCookedAssetRelativePath;
    return Parms.ReturnValue;
}

uint8_t UFLibAssetManageHelperEx::ConvAbsToVirtualPath(struct FString InAbsPath, struct FString& OutPackagePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "ConvAbsToVirtualPath");
    struct
    {
        struct FString InAbsPath;
        struct FString OutPackagePath;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InAbsPath = (struct FString)InAbsPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutPackagePath = Parms.OutPackagePath;
    return Parms.ReturnValue;
}

uint8_t UFLibAssetManageHelperEx::CombineAssetsDetailAsFAssetDepenInfo(const struct TArray<struct FAssetDetail>& InAssetsDetailList, struct FAssetDependenciesInfo& OutAssetInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "CombineAssetsDetailAsFAssetDepenInfo");
    struct
    {
        struct TArray<struct FAssetDetail> InAssetsDetailList;
        struct FAssetDependenciesInfo OutAssetInfo;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InAssetsDetailList = (struct TArray<struct FAssetDetail>)InAssetsDetailList;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutAssetInfo = Parms.OutAssetInfo;
    return Parms.ReturnValue;
}

struct FAssetDependenciesInfo UFLibAssetManageHelperEx::CombineAssetDependencies(const struct FAssetDependenciesInfo& A, const struct FAssetDependenciesInfo& B)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FLibAssetManageHelperEx", "CombineAssetDependencies");
    struct
    {
        struct FAssetDependenciesInfo A;
        struct FAssetDependenciesInfo B;
        struct FAssetDependenciesInfo ReturnValue;
    } Parms{};
    Parms.A = (struct FAssetDependenciesInfo)A;
    Parms.B = (struct FAssetDependenciesInfo)B;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
