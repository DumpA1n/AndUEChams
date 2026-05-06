#include "AssetRegistry.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UAssetRegistryHelpers
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

bool UAssetRegistryHelpers::IsValid(const struct FAssetData& InAssetData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssetRegistryHelpers", "IsValid");
    struct
    {
        struct FAssetData InAssetData;
        bool ReturnValue;
    } Parms{};
    Parms.InAssetData = (struct FAssetData)InAssetData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UAssetRegistryHelpers::IsUAsset(const struct FAssetData& InAssetData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssetRegistryHelpers", "IsUAsset");
    struct
    {
        struct FAssetData InAssetData;
        bool ReturnValue;
    } Parms{};
    Parms.InAssetData = (struct FAssetData)InAssetData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UAssetRegistryHelpers::IsRedirector(const struct FAssetData& InAssetData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssetRegistryHelpers", "IsRedirector");
    struct
    {
        struct FAssetData InAssetData;
        bool ReturnValue;
    } Parms{};
    Parms.InAssetData = (struct FAssetData)InAssetData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UAssetRegistryHelpers::IsAssetLoaded(const struct FAssetData& InAssetData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssetRegistryHelpers", "IsAssetLoaded");
    struct
    {
        struct FAssetData InAssetData;
        bool ReturnValue;
    } Parms{};
    Parms.InAssetData = (struct FAssetData)InAssetData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UAssetRegistryHelpers::GetTagValue(const struct FAssetData& InAssetData, const struct FName& InTagName, struct FString& OutTagValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssetRegistryHelpers", "GetTagValue");
    struct
    {
        struct FAssetData InAssetData;
        struct FName InTagName;
        struct FString OutTagValue;
        bool ReturnValue;
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

struct FAssetData UAssetRegistryHelpers::CreateAssetData(struct UObject* InAsset, bool bAllowBlueprintClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssetRegistryHelpers", "CreateAssetData");
    struct
    {
        struct UObject* InAsset;
        bool bAllowBlueprintClass;
        struct FAssetData ReturnValue;
    } Parms{};
    Parms.InAsset = (struct UObject*)InAsset;
    Parms.bAllowBlueprintClass = (bool)bAllowBlueprintClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// IAssetRegistry
void IAssetRegistry::WaitForCompletion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetRegistry", "WaitForCompletion");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

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

void IAssetRegistry::SearchAllAssets(bool bSynchronousSearch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetRegistry", "SearchAllAssets");
    struct
    {
        bool bSynchronousSearch;
    } Parms{};
    Parms.bSynchronousSearch = (bool)bSynchronousSearch;
    this->ProcessEvent(Func, &Parms);
}

void IAssetRegistry::ScanPathsSynchronous(const struct TArray<struct FString>& InPaths, bool bForceRescan)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetRegistry", "ScanPathsSynchronous");
    struct
    {
        struct TArray<struct FString> InPaths;
        bool bForceRescan;
    } Parms{};
    Parms.InPaths = (struct TArray<struct FString>)InPaths;
    Parms.bForceRescan = (bool)bForceRescan;
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

void IAssetRegistry::ScanFilesSynchronous(const struct TArray<struct FString>& InFilePaths, bool bForceRescan)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetRegistry", "ScanFilesSynchronous");
    struct
    {
        struct TArray<struct FString> InFilePaths;
        bool bForceRescan;
    } Parms{};
    Parms.InFilePaths = (struct TArray<struct FString>)InFilePaths;
    Parms.bForceRescan = (bool)bForceRescan;
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

bool IAssetRegistry::K2_GetReferencers(struct FName PackageName, const struct FAssetRegistryDependencyOptions& ReferenceOptions, struct TArray<struct FName>& OutReferencers)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetRegistry", "K2_GetReferencers");
    struct
    {
        struct FName PackageName;
        struct FAssetRegistryDependencyOptions ReferenceOptions;
        struct TArray<struct FName> OutReferencers;
        bool ReturnValue;
    } Parms{};
    Parms.PackageName = (struct FName)PackageName;
    Parms.ReferenceOptions = (struct FAssetRegistryDependencyOptions)ReferenceOptions;
    this->ProcessEvent(Func, &Parms);
    OutReferencers = Parms.OutReferencers;
    return Parms.ReturnValue;
}

bool IAssetRegistry::K2_GetDependencies(struct FName PackageName, const struct FAssetRegistryDependencyOptions& DependencyOptions, struct TArray<struct FName>& OutDependencies)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetRegistry", "K2_GetDependencies");
    struct
    {
        struct FName PackageName;
        struct FAssetRegistryDependencyOptions DependencyOptions;
        struct TArray<struct FName> OutDependencies;
        bool ReturnValue;
    } Parms{};
    Parms.PackageName = (struct FName)PackageName;
    Parms.DependencyOptions = (struct FAssetRegistryDependencyOptions)DependencyOptions;
    this->ProcessEvent(Func, &Parms);
    OutDependencies = Parms.OutDependencies;
    return Parms.ReturnValue;
}

bool IAssetRegistry::IsLoadingAssets()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetRegistry", "IsLoadingAssets");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool IAssetRegistry::HasAssets(struct FName PackagePath, bool bRecursive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetRegistry", "HasAssets");
    struct
    {
        struct FName PackagePath;
        bool bRecursive;
        bool ReturnValue;
    } Parms{};
    Parms.PackagePath = (struct FName)PackagePath;
    Parms.bRecursive = (bool)bRecursive;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void IAssetRegistry::GetSubPaths(struct FString InBasePath, struct TArray<struct FString>& OutPathList, bool bInRecurse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetRegistry", "GetSubPaths");
    struct
    {
        struct FString InBasePath;
        struct TArray<struct FString> OutPathList;
        bool bInRecurse;
    } Parms{};
    Parms.InBasePath = (struct FString)InBasePath;
    Parms.bInRecurse = (bool)bInRecurse;
    this->ProcessEvent(Func, &Parms);
    OutPathList = Parms.OutPathList;
}

bool IAssetRegistry::GetAssetsByPath(struct FName PackagePath, struct TArray<struct FAssetData>& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetRegistry", "GetAssetsByPath");
    struct
    {
        struct FName PackagePath;
        struct TArray<struct FAssetData> OutAssetData;
        bool bRecursive;
        bool bIncludeOnlyOnDiskAssets;
        bool ReturnValue;
    } Parms{};
    Parms.PackagePath = (struct FName)PackagePath;
    Parms.bRecursive = (bool)bRecursive;
    Parms.bIncludeOnlyOnDiskAssets = (bool)bIncludeOnlyOnDiskAssets;
    this->ProcessEvent(Func, &Parms);
    OutAssetData = Parms.OutAssetData;
    return Parms.ReturnValue;
}

bool IAssetRegistry::GetAssetsByPackageName(struct FName PackageName, struct TArray<struct FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetRegistry", "GetAssetsByPackageName");
    struct
    {
        struct FName PackageName;
        struct TArray<struct FAssetData> OutAssetData;
        bool bIncludeOnlyOnDiskAssets;
        bool ReturnValue;
    } Parms{};
    Parms.PackageName = (struct FName)PackageName;
    Parms.bIncludeOnlyOnDiskAssets = (bool)bIncludeOnlyOnDiskAssets;
    this->ProcessEvent(Func, &Parms);
    OutAssetData = Parms.OutAssetData;
    return Parms.ReturnValue;
}

bool IAssetRegistry::GetAssetsByClass(struct FName ClassName, struct TArray<struct FAssetData>& OutAssetData, bool bSearchSubClasses)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetRegistry", "GetAssetsByClass");
    struct
    {
        struct FName ClassName;
        struct TArray<struct FAssetData> OutAssetData;
        bool bSearchSubClasses;
        bool ReturnValue;
    } Parms{};
    Parms.ClassName = (struct FName)ClassName;
    Parms.bSearchSubClasses = (bool)bSearchSubClasses;
    this->ProcessEvent(Func, &Parms);
    OutAssetData = Parms.OutAssetData;
    return Parms.ReturnValue;
}

bool IAssetRegistry::GetAssets(const struct FARFilter& Filter, struct TArray<struct FAssetData>& OutAssetData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetRegistry", "GetAssets");
    struct
    {
        struct FARFilter Filter;
        struct TArray<struct FAssetData> OutAssetData;
        bool ReturnValue;
    } Parms{};
    Parms.Filter = (struct FARFilter)Filter;
    this->ProcessEvent(Func, &Parms);
    OutAssetData = Parms.OutAssetData;
    return Parms.ReturnValue;
}

struct FAssetData IAssetRegistry::GetAssetByObjectPath(struct FName ObjectPath, bool bIncludeOnlyOnDiskAssets)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetRegistry", "GetAssetByObjectPath");
    struct
    {
        struct FName ObjectPath;
        bool bIncludeOnlyOnDiskAssets;
        struct FAssetData ReturnValue;
    } Parms{};
    Parms.ObjectPath = (struct FName)ObjectPath;
    Parms.bIncludeOnlyOnDiskAssets = (bool)bIncludeOnlyOnDiskAssets;
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

bool IAssetRegistry::GetAllAssets(struct TArray<struct FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetRegistry", "GetAllAssets");
    struct
    {
        struct TArray<struct FAssetData> OutAssetData;
        bool bIncludeOnlyOnDiskAssets;
        bool ReturnValue;
    } Parms{};
    Parms.bIncludeOnlyOnDiskAssets = (bool)bIncludeOnlyOnDiskAssets;
    this->ProcessEvent(Func, &Parms);
    OutAssetData = Parms.OutAssetData;
    return Parms.ReturnValue;
}

} // namespace SDK
