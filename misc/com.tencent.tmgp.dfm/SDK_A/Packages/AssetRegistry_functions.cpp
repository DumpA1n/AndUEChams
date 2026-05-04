#include "AssetRegistry.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UAssetRegistryHelpers::* ----
struct FSoftObjectPath UAssetRegistryHelpers::ToSoftObjectPath(const struct FAssetData& InAssetData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssetRegistryHelpers", "ToSoftObjectPath");
    struct
    {
        struct FAssetData InAssetData;
        struct FSoftObjectPath ReturnValue;
    } Parms{};
    Parms.InAssetData = (struct FAssetData)InAssetData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FARFilter UAssetRegistryHelpers::SetFilterTagsAndValues(const struct FARFilter& InFilter, const struct TArray<struct FTagAndValue>& InTagsAndValues)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssetRegistryHelpers", "SetFilterTagsAndValues");
    struct
    {
        struct FARFilter InFilter;
        struct TArray<struct FTagAndValue> InTagsAndValues;
        struct FARFilter ReturnValue;
    } Parms{};
    Parms.InFilter = (struct FARFilter)InFilter;
    Parms.InTagsAndValues = (struct TArray<struct FTagAndValue>)InTagsAndValues;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAssetRegistryHelpers::IsValid(const struct FAssetData& InAssetData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssetRegistryHelpers", "IsValid");
    struct
    {
        struct FAssetData InAssetData;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InAssetData = (struct FAssetData)InAssetData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAssetRegistryHelpers::IsUAsset(const struct FAssetData& InAssetData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssetRegistryHelpers", "IsUAsset");
    struct
    {
        struct FAssetData InAssetData;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InAssetData = (struct FAssetData)InAssetData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAssetRegistryHelpers::IsRedirector(const struct FAssetData& InAssetData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssetRegistryHelpers", "IsRedirector");
    struct
    {
        struct FAssetData InAssetData;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InAssetData = (struct FAssetData)InAssetData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAssetRegistryHelpers::IsAssetLoaded(const struct FAssetData& InAssetData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssetRegistryHelpers", "IsAssetLoaded");
    struct
    {
        struct FAssetData InAssetData;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InAssetData = (struct FAssetData)InAssetData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAssetRegistryHelpers::GetTagValue(const struct FAssetData& InAssetData, const struct FName& InTagName, struct FString& OutTagValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssetRegistryHelpers", "GetTagValue");
    struct
    {
        struct FAssetData InAssetData;
        struct FName InTagName;
        struct FString OutTagValue;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InAssetData = (struct FAssetData)InAssetData;
    Parms.InTagName = (struct FName)InTagName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutTagValue = Parms.OutTagValue;
    return Parms.ReturnValue;
}

struct FString UAssetRegistryHelpers::GetFullName(const struct FAssetData& InAssetData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssetRegistryHelpers", "GetFullName");
    struct
    {
        struct FAssetData InAssetData;
        struct FString ReturnValue;
    } Parms{};
    Parms.InAssetData = (struct FAssetData)InAssetData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UAssetRegistryHelpers::GetExportTextName(const struct FAssetData& InAssetData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssetRegistryHelpers", "GetExportTextName");
    struct
    {
        struct FAssetData InAssetData;
        struct FString ReturnValue;
    } Parms{};
    Parms.InAssetData = (struct FAssetData)InAssetData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UAssetRegistryHelpers::GetClass(const struct FAssetData& InAssetData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssetRegistryHelpers", "GetClass");
    struct
    {
        struct FAssetData InAssetData;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.InAssetData = (struct FAssetData)InAssetData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TScriptInterface<IAssetRegistry> UAssetRegistryHelpers::GetAssetRegistry()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssetRegistryHelpers", "GetAssetRegistry");
    struct
    {
        struct TScriptInterface<IAssetRegistry> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UAssetRegistryHelpers::GetAsset(const struct FAssetData& InAssetData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssetRegistryHelpers", "GetAsset");
    struct
    {
        struct FAssetData InAssetData;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.InAssetData = (struct FAssetData)InAssetData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UAssetRegistryHelpers::FindAssetNativeClass(const struct FAssetData& AssetData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssetRegistryHelpers", "FindAssetNativeClass");
    struct
    {
        struct FAssetData AssetData;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.AssetData = (struct FAssetData)AssetData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FAssetData UAssetRegistryHelpers::CreateAssetData(struct UObject* InAsset, uint8_t bAllowBlueprintClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssetRegistryHelpers", "CreateAssetData");
    struct
    {
        struct UObject* InAsset;
        uint8_t bAllowBlueprintClass;
        struct FAssetData ReturnValue;
    } Parms{};
    Parms.InAsset = (struct UObject*)InAsset;
    Parms.bAllowBlueprintClass = (uint8_t)bAllowBlueprintClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- IAssetRegistry::* ----
void IAssetRegistry::UseFilterToExcludeAssets(struct TArray<struct FAssetData>& AssetDataList, const struct FARFilter& Filter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetRegistry", "UseFilterToExcludeAssets");
    struct
    {
        struct TArray<struct FAssetData> AssetDataList;
        struct FARFilter Filter;
    } Parms{};
    Parms.Filter = (struct FARFilter)Filter;
    this->ProcessEvent(Func, &Parms);
    AssetDataList = Parms.AssetDataList;
}

void IAssetRegistry::SearchAllAssets(uint8_t bSynchronousSearch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetRegistry", "SearchAllAssets");
    struct
    {
        uint8_t bSynchronousSearch;
    } Parms{};
    Parms.bSynchronousSearch = (uint8_t)bSynchronousSearch;
    this->ProcessEvent(Func, &Parms);
}

void IAssetRegistry::ScanPathsSynchronous(const struct TArray<struct FString>& InPaths, uint8_t bForceRescan)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetRegistry", "ScanPathsSynchronous");
    struct
    {
        struct TArray<struct FString> InPaths;
        uint8_t bForceRescan;
    } Parms{};
    Parms.InPaths = (struct TArray<struct FString>)InPaths;
    Parms.bForceRescan = (uint8_t)bForceRescan;
    this->ProcessEvent(Func, &Parms);
}

void IAssetRegistry::ScanModifiedAssetFiles(const struct TArray<struct FString>& InFilePaths)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetRegistry", "ScanModifiedAssetFiles");
    struct
    {
        struct TArray<struct FString> InFilePaths;
    } Parms{};
    Parms.InFilePaths = (struct TArray<struct FString>)InFilePaths;
    this->ProcessEvent(Func, &Parms);
}

void IAssetRegistry::ScanFilesSynchronous(const struct TArray<struct FString>& InFilePaths, uint8_t bForceRescan)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetRegistry", "ScanFilesSynchronous");
    struct
    {
        struct TArray<struct FString> InFilePaths;
        uint8_t bForceRescan;
    } Parms{};
    Parms.InFilePaths = (struct TArray<struct FString>)InFilePaths;
    Parms.bForceRescan = (uint8_t)bForceRescan;
    this->ProcessEvent(Func, &Parms);
}

void IAssetRegistry::RunAssetsThroughFilter(struct TArray<struct FAssetData>& AssetDataList, const struct FARFilter& Filter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetRegistry", "RunAssetsThroughFilter");
    struct
    {
        struct TArray<struct FAssetData> AssetDataList;
        struct FARFilter Filter;
    } Parms{};
    Parms.Filter = (struct FARFilter)Filter;
    this->ProcessEvent(Func, &Parms);
    AssetDataList = Parms.AssetDataList;
}

void IAssetRegistry::PrioritizeSearchPath(struct FString PathToPrioritize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetRegistry", "PrioritizeSearchPath");
    struct
    {
        struct FString PathToPrioritize;
    } Parms{};
    Parms.PathToPrioritize = (struct FString)PathToPrioritize;
    this->ProcessEvent(Func, &Parms);
}

uint8_t IAssetRegistry::K2_GetReferencers(struct FName PackageName, const struct FAssetRegistryDependencyOptions& ReferenceOptions, struct TArray<struct FName>& OutReferencers)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetRegistry", "K2_GetReferencers");
    struct
    {
        struct FName PackageName;
        struct FAssetRegistryDependencyOptions ReferenceOptions;
        struct TArray<struct FName> OutReferencers;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PackageName = (struct FName)PackageName;
    Parms.ReferenceOptions = (struct FAssetRegistryDependencyOptions)ReferenceOptions;
    this->ProcessEvent(Func, &Parms);
    OutReferencers = Parms.OutReferencers;
    return Parms.ReturnValue;
}

uint8_t IAssetRegistry::K2_GetDependencies(struct FName PackageName, const struct FAssetRegistryDependencyOptions& DependencyOptions, struct TArray<struct FName>& OutDependencies)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetRegistry", "K2_GetDependencies");
    struct
    {
        struct FName PackageName;
        struct FAssetRegistryDependencyOptions DependencyOptions;
        struct TArray<struct FName> OutDependencies;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PackageName = (struct FName)PackageName;
    Parms.DependencyOptions = (struct FAssetRegistryDependencyOptions)DependencyOptions;
    this->ProcessEvent(Func, &Parms);
    OutDependencies = Parms.OutDependencies;
    return Parms.ReturnValue;
}

uint8_t IAssetRegistry::IsLoadingAssets()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetRegistry", "IsLoadingAssets");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IAssetRegistry::HasAssets(struct FName PackagePath, uint8_t bRecursive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetRegistry", "HasAssets");
    struct
    {
        struct FName PackagePath;
        uint8_t bRecursive;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PackagePath = (struct FName)PackagePath;
    Parms.bRecursive = (uint8_t)bRecursive;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void IAssetRegistry::GetSubPaths(struct FString InBasePath, struct TArray<struct FString>& OutPathList, uint8_t bInRecurse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetRegistry", "GetSubPaths");
    struct
    {
        struct FString InBasePath;
        struct TArray<struct FString> OutPathList;
        uint8_t bInRecurse;
    } Parms{};
    Parms.InBasePath = (struct FString)InBasePath;
    Parms.bInRecurse = (uint8_t)bInRecurse;
    this->ProcessEvent(Func, &Parms);
    OutPathList = Parms.OutPathList;
}

uint8_t IAssetRegistry::GetAssetsByPath(struct FName PackagePath, struct TArray<struct FAssetData>& OutAssetData, uint8_t bRecursive, uint8_t bIncludeOnlyOnDiskAssets)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetRegistry", "GetAssetsByPath");
    struct
    {
        struct FName PackagePath;
        struct TArray<struct FAssetData> OutAssetData;
        uint8_t bRecursive;
        uint8_t bIncludeOnlyOnDiskAssets;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PackagePath = (struct FName)PackagePath;
    Parms.bRecursive = (uint8_t)bRecursive;
    Parms.bIncludeOnlyOnDiskAssets = (uint8_t)bIncludeOnlyOnDiskAssets;
    this->ProcessEvent(Func, &Parms);
    OutAssetData = Parms.OutAssetData;
    return Parms.ReturnValue;
}

uint8_t IAssetRegistry::GetAssetsByPackageName(struct FName PackageName, struct TArray<struct FAssetData>& OutAssetData, uint8_t bIncludeOnlyOnDiskAssets)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetRegistry", "GetAssetsByPackageName");
    struct
    {
        struct FName PackageName;
        struct TArray<struct FAssetData> OutAssetData;
        uint8_t bIncludeOnlyOnDiskAssets;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PackageName = (struct FName)PackageName;
    Parms.bIncludeOnlyOnDiskAssets = (uint8_t)bIncludeOnlyOnDiskAssets;
    this->ProcessEvent(Func, &Parms);
    OutAssetData = Parms.OutAssetData;
    return Parms.ReturnValue;
}

uint8_t IAssetRegistry::GetAssetsByClass(struct FName ClassName, struct TArray<struct FAssetData>& OutAssetData, uint8_t bSearchSubClasses)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetRegistry", "GetAssetsByClass");
    struct
    {
        struct FName ClassName;
        struct TArray<struct FAssetData> OutAssetData;
        uint8_t bSearchSubClasses;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ClassName = (struct FName)ClassName;
    Parms.bSearchSubClasses = (uint8_t)bSearchSubClasses;
    this->ProcessEvent(Func, &Parms);
    OutAssetData = Parms.OutAssetData;
    return Parms.ReturnValue;
}

uint8_t IAssetRegistry::GetAssets(const struct FARFilter& Filter, struct TArray<struct FAssetData>& OutAssetData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetRegistry", "GetAssets");
    struct
    {
        struct FARFilter Filter;
        struct TArray<struct FAssetData> OutAssetData;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Filter = (struct FARFilter)Filter;
    this->ProcessEvent(Func, &Parms);
    OutAssetData = Parms.OutAssetData;
    return Parms.ReturnValue;
}

struct FAssetData IAssetRegistry::GetAssetByObjectPath(struct FName ObjectPath, uint8_t bIncludeOnlyOnDiskAssets)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetRegistry", "GetAssetByObjectPath");
    struct
    {
        struct FName ObjectPath;
        uint8_t bIncludeOnlyOnDiskAssets;
        struct FAssetData ReturnValue;
    } Parms{};
    Parms.ObjectPath = (struct FName)ObjectPath;
    Parms.bIncludeOnlyOnDiskAssets = (uint8_t)bIncludeOnlyOnDiskAssets;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void IAssetRegistry::GetAllCachedPaths(struct TArray<struct FString>& OutPathList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetRegistry", "GetAllCachedPaths");
    struct
    {
        struct TArray<struct FString> OutPathList;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutPathList = Parms.OutPathList;
}

uint8_t IAssetRegistry::GetAllAssets(struct TArray<struct FAssetData>& OutAssetData, uint8_t bIncludeOnlyOnDiskAssets)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetRegistry", "GetAllAssets");
    struct
    {
        struct TArray<struct FAssetData> OutAssetData;
        uint8_t bIncludeOnlyOnDiskAssets;
        uint8_t ReturnValue;
    } Parms{};
    Parms.bIncludeOnlyOnDiskAssets = (uint8_t)bIncludeOnlyOnDiskAssets;
    this->ProcessEvent(Func, &Parms);
    OutAssetData = Parms.OutAssetData;
    return Parms.ReturnValue;
}

} // namespace SDK
