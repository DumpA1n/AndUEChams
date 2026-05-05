#include "AssetTags.hpp"
#include "AssetRegistry.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UAssetTagsSubsystem
struct TArray<struct FName> UAssetTagsSubsystem::GetCollectionsContainingAssetPtr(struct UObject* AssetPtr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetTagsSubsystem", "GetCollectionsContainingAssetPtr");
    struct
    {
        struct UObject* AssetPtr;
        struct TArray<struct FName> ReturnValue;
    } Parms{};
    Parms.AssetPtr = (struct UObject*)AssetPtr;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FName> UAssetTagsSubsystem::GetCollectionsContainingAssetData(const struct FAssetData& AssetData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetTagsSubsystem", "GetCollectionsContainingAssetData");
    struct
    {
        struct FAssetData AssetData;
        struct TArray<struct FName> ReturnValue;
    } Parms{};
    Parms.AssetData = (struct FAssetData)AssetData;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FName> UAssetTagsSubsystem::GetCollectionsContainingAsset(struct FName AssetPathName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetTagsSubsystem", "GetCollectionsContainingAsset");
    struct
    {
        struct FName AssetPathName;
        struct TArray<struct FName> ReturnValue;
    } Parms{};
    Parms.AssetPathName = (struct FName)AssetPathName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FName> UAssetTagsSubsystem::GetCollections()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetTagsSubsystem", "GetCollections");
    struct
    {
        struct TArray<struct FName> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FAssetData> UAssetTagsSubsystem::GetAssetsInCollection(struct FName Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetTagsSubsystem", "GetAssetsInCollection");
    struct
    {
        struct FName Name;
        struct TArray<struct FAssetData> ReturnValue;
    } Parms{};
    Parms.Name = (struct FName)Name;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAssetTagsSubsystem::CollectionExists(struct FName Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssetTagsSubsystem", "CollectionExists");
    struct
    {
        struct FName Name;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Name = (struct FName)Name;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
