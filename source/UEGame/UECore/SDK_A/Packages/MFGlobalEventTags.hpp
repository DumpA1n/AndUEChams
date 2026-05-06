#pragma once

#include "../CoreUObject_classes.hpp"
#include "DeveloperSettings.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: MFGlobalEventTags
// Enums: 4
// Structs: 10
// Classes: 5

struct FMFGlobalEventParameter;
struct UDataTable;
struct FMFGlobalEventTag;
struct FMFGlobalEventTagCreationWidgetHelper;
struct FMFGlobalEventTagContainer;
struct FMFGlobalEventTagNode;
struct FMFGlobalEventTagSource;
struct FMFGlobalEventTagTableRow;
struct FRestrictedMFGlobalEventTagTableRow;
struct FRestrictedMFGlobalEventConfigInfo;
struct FMFGlobalEventTagCategoryRemap;
struct FMFGlobalEventTagRedirect;
struct UMFGlobalEventTagsManager;
struct UMFGlobalEventTagsList;
struct URestrictedMFGlobalEventTagsList;
struct UMFGlobalEventTagsSettings;
struct UMFGlobalEventTagsDeveloperSettings;

// Object: Enum MFGlobalEventTags.EMFGlobalEventContainerMatchType
enum class EMFGlobalEventContainerMatchType : uint8_t
{
	Any = 0,
	All = 1,
	EMFGlobalEventContainerMatchType_MAX = 2
};

// Object: Enum MFGlobalEventTags.EMFGlobalEventTagMatchType
enum class EMFGlobalEventTagMatchType : uint8_t
{
	Explicit = 0,
	IncludeParentTags = 1,
	EMFGlobalEventTagMatchType_MAX = 2
};

// Object: Enum MFGlobalEventTags.EMFGlobalEventTagSelectionType
enum class EMFGlobalEventTagSelectionType : uint8_t
{
	None = 0,
	NonRestrictedOnly = 1,
	RestrictedOnly = 2,
	All = 3,
	EMFGlobalEventTagSelectionType_MAX = 4
};

// Object: Enum MFGlobalEventTags.EMFGlobalEventTagSourceType
enum class EMFGlobalEventTagSourceType : uint8_t
{
	Native = 0,
	DefaultTagList = 1,
	TagList = 2,
	RestrictedTagList = 3,
	DataTable = 4,
	Invalid = 5,
	EMFGlobalEventTagSourceType_MAX = 6
};

// Object: ScriptStruct MFGlobalEventTags.MFGlobalEventTag
// Size: 0x8 (Inherited: 0x0)
struct FMFGlobalEventTag
{
	struct FName TagName; // 0x0(0x8)
};

// Object: ScriptStruct MFGlobalEventTags.MFGlobalEventTagCreationWidgetHelper
// Size: 0x1 (Inherited: 0x0)
struct FMFGlobalEventTagCreationWidgetHelper
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct MFGlobalEventTags.MFGlobalEventTagContainer
// Size: 0x20 (Inherited: 0x0)
struct FMFGlobalEventTagContainer
{
	struct TArray<struct FMFGlobalEventTag> MFGlobalEventTags; // 0x0(0x10)
	struct TArray<struct FMFGlobalEventTag> ParentTags; // 0x10(0x10)
};

// Object: ScriptStruct MFGlobalEventTags.MFGlobalEventTagNode
// Size: 0x60 (Inherited: 0x0)
struct FMFGlobalEventTagNode
{
	uint8_t Pad_0x0[0x60]; // 0x0(0x60)
};

// Object: ScriptStruct MFGlobalEventTags.MFGlobalEventTagSource
// Size: 0x20 (Inherited: 0x0)
struct FMFGlobalEventTagSource
{
	struct FName SourceName; // 0x0(0x8)
	EMFGlobalEventTagSourceType SourceType; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct UMFGlobalEventTagsList* SourceTagList; // 0x10(0x8)
	struct URestrictedMFGlobalEventTagsList* SourceRestrictedTagList; // 0x18(0x8)
};

// Object: ScriptStruct MFGlobalEventTags.MFGlobalEventTagTableRow
// Size: 0x30 (Inherited: 0x8)
struct FMFGlobalEventTagTableRow : FTableRowBase
{
	struct FName Tag; // 0x8(0x8)
	struct FString DevComment; // 0x10(0x10)
	struct TArray<struct FMFGlobalEventParameter> Parameters; // 0x20(0x10)
};

// Object: ScriptStruct MFGlobalEventTags.RestrictedMFGlobalEventTagTableRow
// Size: 0x38 (Inherited: 0x30)
struct FRestrictedMFGlobalEventTagTableRow : FMFGlobalEventTagTableRow
{
	bool bAllowNonRestrictedChildren; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
};

// Object: ScriptStruct MFGlobalEventTags.RestrictedMFGlobalEventConfigInfo
// Size: 0x20 (Inherited: 0x0)
struct FRestrictedMFGlobalEventConfigInfo
{
	struct FString RestrictedConfigName; // 0x0(0x10)
	struct TArray<struct FString> Owners; // 0x10(0x10)
};

// Object: ScriptStruct MFGlobalEventTags.MFGlobalEventTagCategoryRemap
// Size: 0x20 (Inherited: 0x0)
struct FMFGlobalEventTagCategoryRemap
{
	struct FString BaseCategory; // 0x0(0x10)
	struct TArray<struct FString> RemapCategories; // 0x10(0x10)
};

// Object: ScriptStruct MFGlobalEventTags.MFGlobalEventTagRedirect
// Size: 0x10 (Inherited: 0x0)
struct FMFGlobalEventTagRedirect
{
	struct FName OldTagName; // 0x0(0x8)
	struct FName NewTagName; // 0x8(0x8)
};

// Object: Class MFGlobalEventTags.MFGlobalEventTagsManager
// Size: 0x210 (Inherited: 0x28)
struct UMFGlobalEventTagsManager : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFGlobalEventTagsManager, "MFGlobalEventTagsManager")

	uint8_t Pad_0x28[0x98]; // 0x28(0x98)
	struct TArray<struct FMFGlobalEventTagSource> TagSources; // 0xC0(0x10)
	uint8_t Pad_0xD0[0xE0]; // 0xD0(0xE0)
	struct TArray<struct UDataTable*> MFGlobalEventTagTables; // 0x1B0(0x10)
	uint8_t Pad_0x1C0[0x50]; // 0x1C0(0x50)
};

// Object: Class MFGlobalEventTags.MFGlobalEventTagsList
// Size: 0x48 (Inherited: 0x28)
struct UMFGlobalEventTagsList : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFGlobalEventTagsList, "MFGlobalEventTagsList")

	struct FString ConfigFileName; // 0x28(0x10)
	struct TArray<struct FMFGlobalEventTagTableRow> MFGlobalEventTagList; // 0x38(0x10)
};

// Object: Class MFGlobalEventTags.RestrictedMFGlobalEventTagsList
// Size: 0x48 (Inherited: 0x28)
struct URestrictedMFGlobalEventTagsList : UObject
{
	DEFINE_UE_CLASS_HELPERS(URestrictedMFGlobalEventTagsList, "RestrictedMFGlobalEventTagsList")

	struct FString ConfigFileName; // 0x28(0x10)
	struct TArray<struct FRestrictedMFGlobalEventTagTableRow> RestrictedMFGlobalEventTagList; // 0x38(0x10)
};

// Object: Class MFGlobalEventTags.MFGlobalEventTagsSettings
// Size: 0xB8 (Inherited: 0x48)
struct UMFGlobalEventTagsSettings : UMFGlobalEventTagsList
{
	DEFINE_UE_CLASS_HELPERS(UMFGlobalEventTagsSettings, "MFGlobalEventTagsSettings")

	bool ImportTagsFromConfig; // 0x48(0x1)
	bool WarnOnInvalidTags; // 0x49(0x1)
	bool FastReplication; // 0x4A(0x1)
	uint8_t Pad_0x4B[0x5]; // 0x4B(0x5)
	struct FString InvalidTagCharacters; // 0x50(0x10)
	struct TArray<struct FMFGlobalEventTagCategoryRemap> CategoryRemapping; // 0x60(0x10)
	struct TArray<struct FSoftObjectPath> MFGlobalEventTagTableList; // 0x70(0x10)
	struct TArray<struct FMFGlobalEventTagRedirect> MFGlobalEventTagRedirects; // 0x80(0x10)
	struct TArray<struct FName> CommonlyReplicatedTags; // 0x90(0x10)
	int32_t NumBitsForContainerSize; // 0xA0(0x4)
	int32_t NetIndexFirstBitSegment; // 0xA4(0x4)
	struct TArray<struct FRestrictedMFGlobalEventConfigInfo> RestrictedConfigFiles; // 0xA8(0x10)
};

// Object: Class MFGlobalEventTags.MFGlobalEventTagsDeveloperSettings
// Size: 0x50 (Inherited: 0x38)
struct UMFGlobalEventTagsDeveloperSettings : UDeveloperSettings
{
	DEFINE_UE_CLASS_HELPERS(UMFGlobalEventTagsDeveloperSettings, "MFGlobalEventTagsDeveloperSettings")

	struct FString DeveloperConfigName; // 0x38(0x10)
	struct FName FavoriteTagSource; // 0x48(0x8)
};

} // namespace SDK
