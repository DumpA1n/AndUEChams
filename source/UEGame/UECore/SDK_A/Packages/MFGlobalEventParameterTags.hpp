#pragma once

#include "../CoreUObject_classes.hpp"
#include "DeveloperSettings.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: MFGlobalEventParameterTags
// Enums: 4
// Structs: 10
// Classes: 5

struct UDataTable;
struct FMFGlobalEventParameterTag;
struct FMFGlobalEventParameterTagCreationWidgetHelper;
struct FMFGlobalEventParameterTagContainer;
struct FMFGlobalEventParameterTagNode;
struct FMFGlobalEventParameterTagSource;
struct FMFGlobalEventParameter;
struct FRestrictedMFGlobalEventParameterTagTableRow;
struct FRestrictedMFGlobalEventParameterConfigInfo;
struct FMFGlobalEventParameterTagCategoryRemap;
struct FMFGlobalEventParameterTagRedirect;
struct UMFGlobalEventParameterTagsManager;
struct UMFGlobalEventParameterTagsList;
struct URestrictedMFGlobalEventParameterTagsList;
struct UMFGlobalEventParameterTagsSettings;
struct UMFGlobalEventParameterTagsDeveloperSettings;

// Object: Enum MFGlobalEventParameterTags.EMFGlobalEventParameterContainerMatchType
enum class EMFGlobalEventParameterContainerMatchType : uint8_t
{
	Any = 0,
	All = 1,
	EMFGlobalEventParameterContainerMatchType_MAX = 2
};

// Object: Enum MFGlobalEventParameterTags.EMFGlobalEventParameterTagMatchType
enum class EMFGlobalEventParameterTagMatchType : uint8_t
{
	Explicit = 0,
	IncludeParentTags = 1,
	EMFGlobalEventParameterTagMatchType_MAX = 2
};

// Object: Enum MFGlobalEventParameterTags.EMFGlobalEventParameterTagSelectionType
enum class EMFGlobalEventParameterTagSelectionType : uint8_t
{
	None = 0,
	NonRestrictedOnly = 1,
	RestrictedOnly = 2,
	All = 3,
	EMFGlobalEventParameterTagSelectionType_MAX = 4
};

// Object: Enum MFGlobalEventParameterTags.EMFGlobalEventParameterTagSourceType
enum class EMFGlobalEventParameterTagSourceType : uint8_t
{
	Native = 0,
	DefaultTagList = 1,
	TagList = 2,
	RestrictedTagList = 3,
	DataTable = 4,
	Invalid = 5,
	EMFGlobalEventParameterTagSourceType_MAX = 6
};

// Object: ScriptStruct MFGlobalEventParameterTags.MFGlobalEventParameterTag
// Size: 0x8 (Inherited: 0x0)
struct FMFGlobalEventParameterTag
{
	struct FName TagName; // 0x0(0x8)
};

// Object: ScriptStruct MFGlobalEventParameterTags.MFGlobalEventParameterTagCreationWidgetHelper
// Size: 0x1 (Inherited: 0x0)
struct FMFGlobalEventParameterTagCreationWidgetHelper
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct MFGlobalEventParameterTags.MFGlobalEventParameterTagContainer
// Size: 0x20 (Inherited: 0x0)
struct FMFGlobalEventParameterTagContainer
{
	struct TArray<struct FMFGlobalEventParameterTag> MFGlobalEventParameterTags; // 0x0(0x10)
	struct TArray<struct FMFGlobalEventParameterTag> ParentTags; // 0x10(0x10)
};

// Object: ScriptStruct MFGlobalEventParameterTags.MFGlobalEventParameterTagNode
// Size: 0x58 (Inherited: 0x0)
struct FMFGlobalEventParameterTagNode
{
	uint8_t Pad_0x0[0x58]; // 0x0(0x58)
};

// Object: ScriptStruct MFGlobalEventParameterTags.MFGlobalEventParameterTagSource
// Size: 0x20 (Inherited: 0x0)
struct FMFGlobalEventParameterTagSource
{
	struct FName SourceName; // 0x0(0x8)
	EMFGlobalEventParameterTagSourceType SourceType; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct UMFGlobalEventParameterTagsList* SourceTagList; // 0x10(0x8)
	struct URestrictedMFGlobalEventParameterTagsList* SourceRestrictedTagList; // 0x18(0x8)
};

// Object: ScriptStruct MFGlobalEventParameterTags.MFGlobalEventParameter
// Size: 0x28 (Inherited: 0x8)
struct FMFGlobalEventParameter : FTableRowBase
{
	struct FName Tag; // 0x8(0x8)
	struct FString DevComment; // 0x10(0x10)
	struct FName PropertyType; // 0x20(0x8)
};

// Object: ScriptStruct MFGlobalEventParameterTags.RestrictedMFGlobalEventParameterTagTableRow
// Size: 0x30 (Inherited: 0x28)
struct FRestrictedMFGlobalEventParameterTagTableRow : FMFGlobalEventParameter
{
	bool bAllowNonRestrictedChildren; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
};

// Object: ScriptStruct MFGlobalEventParameterTags.RestrictedMFGlobalEventParameterConfigInfo
// Size: 0x20 (Inherited: 0x0)
struct FRestrictedMFGlobalEventParameterConfigInfo
{
	struct FString RestrictedConfigName; // 0x0(0x10)
	struct TArray<struct FString> Owners; // 0x10(0x10)
};

// Object: ScriptStruct MFGlobalEventParameterTags.MFGlobalEventParameterTagCategoryRemap
// Size: 0x20 (Inherited: 0x0)
struct FMFGlobalEventParameterTagCategoryRemap
{
	struct FString BaseCategory; // 0x0(0x10)
	struct TArray<struct FString> RemapCategories; // 0x10(0x10)
};

// Object: ScriptStruct MFGlobalEventParameterTags.MFGlobalEventParameterTagRedirect
// Size: 0x10 (Inherited: 0x0)
struct FMFGlobalEventParameterTagRedirect
{
	struct FName OldTagName; // 0x0(0x8)
	struct FName NewTagName; // 0x8(0x8)
};

// Object: Class MFGlobalEventParameterTags.MFGlobalEventParameterTagsManager
// Size: 0x210 (Inherited: 0x28)
struct UMFGlobalEventParameterTagsManager : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFGlobalEventParameterTagsManager, "MFGlobalEventParameterTagsManager")

	uint8_t Pad_0x28[0x98]; // 0x28(0x98)
	struct TArray<struct FMFGlobalEventParameterTagSource> TagSources; // 0xC0(0x10)
	uint8_t Pad_0xD0[0xE0]; // 0xD0(0xE0)
	struct TArray<struct UDataTable*> MFGlobalEventParameterTagTables; // 0x1B0(0x10)
	uint8_t Pad_0x1C0[0x50]; // 0x1C0(0x50)
};

// Object: Class MFGlobalEventParameterTags.MFGlobalEventParameterTagsList
// Size: 0x48 (Inherited: 0x28)
struct UMFGlobalEventParameterTagsList : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFGlobalEventParameterTagsList, "MFGlobalEventParameterTagsList")

	struct FString ConfigFileName; // 0x28(0x10)
	struct TArray<struct FMFGlobalEventParameter> MFGlobalEventParameterTagList; // 0x38(0x10)
};

// Object: Class MFGlobalEventParameterTags.RestrictedMFGlobalEventParameterTagsList
// Size: 0x48 (Inherited: 0x28)
struct URestrictedMFGlobalEventParameterTagsList : UObject
{
	DEFINE_UE_CLASS_HELPERS(URestrictedMFGlobalEventParameterTagsList, "RestrictedMFGlobalEventParameterTagsList")

	struct FString ConfigFileName; // 0x28(0x10)
	struct TArray<struct FRestrictedMFGlobalEventParameterTagTableRow> RestrictedMFGlobalEventParameterTagList; // 0x38(0x10)
};

// Object: Class MFGlobalEventParameterTags.MFGlobalEventParameterTagsSettings
// Size: 0xB8 (Inherited: 0x48)
struct UMFGlobalEventParameterTagsSettings : UMFGlobalEventParameterTagsList
{
	DEFINE_UE_CLASS_HELPERS(UMFGlobalEventParameterTagsSettings, "MFGlobalEventParameterTagsSettings")

	bool ImportTagsFromConfig; // 0x48(0x1)
	bool WarnOnInvalidTags; // 0x49(0x1)
	bool FastReplication; // 0x4A(0x1)
	uint8_t Pad_0x4B[0x5]; // 0x4B(0x5)
	struct FString InvalidTagCharacters; // 0x50(0x10)
	struct TArray<struct FMFGlobalEventParameterTagCategoryRemap> CategoryRemapping; // 0x60(0x10)
	struct TArray<struct FSoftObjectPath> MFGlobalEventParameterTagTableList; // 0x70(0x10)
	struct TArray<struct FMFGlobalEventParameterTagRedirect> MFGlobalEventParameterTagRedirects; // 0x80(0x10)
	struct TArray<struct FName> CommonlyReplicatedTags; // 0x90(0x10)
	int32_t NumBitsForContainerSize; // 0xA0(0x4)
	int32_t NetIndexFirstBitSegment; // 0xA4(0x4)
	struct TArray<struct FRestrictedMFGlobalEventParameterConfigInfo> RestrictedConfigFiles; // 0xA8(0x10)
};

// Object: Class MFGlobalEventParameterTags.MFGlobalEventParameterTagsDeveloperSettings
// Size: 0x50 (Inherited: 0x38)
struct UMFGlobalEventParameterTagsDeveloperSettings : UDeveloperSettings
{
	DEFINE_UE_CLASS_HELPERS(UMFGlobalEventParameterTagsDeveloperSettings, "MFGlobalEventParameterTagsDeveloperSettings")

	struct FString DeveloperConfigName; // 0x38(0x10)
	struct FName FavoriteTagSource; // 0x48(0x8)
};

} // namespace SDK
