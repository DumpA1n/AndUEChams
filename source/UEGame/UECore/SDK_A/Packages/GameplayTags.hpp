#pragma once

#include "../CoreUObject_classes.hpp"
#include "DeveloperSettings.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: GameplayTags
// Enums: 5
// Structs: 12
// Classes: 15

struct AActor;
struct UDataTable;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FGameplayTagQuery;
struct FGameplayTagCreationWidgetHelper;
struct FGameplayTagReferenceHelper;
struct FGameplayTagNode;
struct FGameplayTagSource;
struct FGameplayTagTableRow;
struct FRestrictedGameplayTagTableRow;
struct FRestrictedConfigInfo;
struct FGameplayTagCategoryRemap;
struct FGameplayTagRedirect;
struct UBlueprintGameplayTagLibrary;
struct IGameplayTagAssetInterface;
struct UEditableGameplayTagQuery;
struct UEditableGameplayTagQueryExpression;
struct UEditableGameplayTagQueryExpression_AnyTagsMatch;
struct UEditableGameplayTagQueryExpression_AllTagsMatch;
struct UEditableGameplayTagQueryExpression_NoTagsMatch;
struct UEditableGameplayTagQueryExpression_AnyExprMatch;
struct UEditableGameplayTagQueryExpression_AllExprMatch;
struct UEditableGameplayTagQueryExpression_NoExprMatch;
struct UGameplayTagsManager;
struct UGameplayTagsList;
struct URestrictedGameplayTagsList;
struct UGameplayTagsSettings;
struct UGameplayTagsDeveloperSettings;

// Object: Enum GameplayTags.EGameplayTagQueryExprType
enum class EGameplayTagQueryExprType : uint8_t
{
	Undefined = 0,
	AnyTagsMatch = 1,
	AllTagsMatch = 2,
	NoTagsMatch = 3,
	AnyExprMatch = 4,
	AllExprMatch = 5,
	NoExprMatch = 6,
	EGameplayTagQueryExprType_MAX = 7
};

// Object: Enum GameplayTags.EGameplayContainerMatchType
enum class EGameplayContainerMatchType : uint8_t
{
	Any = 0,
	All = 1,
	EGameplayContainerMatchType_MAX = 2
};

// Object: Enum GameplayTags.EGameplayTagMatchType
enum class EGameplayTagMatchType : uint8_t
{
	Explicit = 0,
	IncludeParentTags = 1,
	EGameplayTagMatchType_MAX = 2
};

// Object: Enum GameplayTags.EGameplayTagSelectionType
enum class EGameplayTagSelectionType : uint8_t
{
	None = 0,
	NonRestrictedOnly = 1,
	RestrictedOnly = 2,
	All = 3,
	EGameplayTagSelectionType_MAX = 4
};

// Object: Enum GameplayTags.EGameplayTagSourceType
enum class EGameplayTagSourceType : uint8_t
{
	Native = 0,
	DefaultTagList = 1,
	TagList = 2,
	RestrictedTagList = 3,
	DataTable = 4,
	Invalid = 5,
	EGameplayTagSourceType_MAX = 6
};

// Object: ScriptStruct GameplayTags.GameplayTag
// Size: 0x8 (Inherited: 0x0)
struct FGameplayTag
{
	struct FName TagName; // 0x0(0x8)
};

// Object: ScriptStruct GameplayTags.GameplayTagContainer
// Size: 0x20 (Inherited: 0x0)
struct FGameplayTagContainer
{
	struct TArray<struct FGameplayTag> GameplayTags; // 0x0(0x10)
	struct TArray<struct FGameplayTag> ParentTags; // 0x10(0x10)
};

// Object: ScriptStruct GameplayTags.GameplayTagQuery
// Size: 0x48 (Inherited: 0x0)
struct FGameplayTagQuery
{
	int32_t TokenStreamVersion; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FGameplayTag> TagDictionary; // 0x8(0x10)
	struct TArray<uint8_t> QueryTokenStream; // 0x18(0x10)
	struct FString UserDescription; // 0x28(0x10)
	struct FString AutoDescription; // 0x38(0x10)
};

// Object: ScriptStruct GameplayTags.GameplayTagCreationWidgetHelper
// Size: 0x1 (Inherited: 0x0)
struct FGameplayTagCreationWidgetHelper
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct GameplayTags.GameplayTagReferenceHelper
// Size: 0x10 (Inherited: 0x0)
struct FGameplayTagReferenceHelper
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct GameplayTags.GameplayTagNode
// Size: 0x50 (Inherited: 0x0)
struct FGameplayTagNode
{
	uint8_t Pad_0x0[0x50]; // 0x0(0x50)
};

// Object: ScriptStruct GameplayTags.GameplayTagSource
// Size: 0x20 (Inherited: 0x0)
struct FGameplayTagSource
{
	struct FName SourceName; // 0x0(0x8)
	EGameplayTagSourceType SourceType; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct UGameplayTagsList* SourceTagList; // 0x10(0x8)
	struct URestrictedGameplayTagsList* SourceRestrictedTagList; // 0x18(0x8)
};

// Object: ScriptStruct GameplayTags.GameplayTagTableRow
// Size: 0x20 (Inherited: 0x8)
struct FGameplayTagTableRow : FTableRowBase
{
	struct FName Tag; // 0x8(0x8)
	struct FString DevComment; // 0x10(0x10)
};

// Object: ScriptStruct GameplayTags.RestrictedGameplayTagTableRow
// Size: 0x28 (Inherited: 0x20)
struct FRestrictedGameplayTagTableRow : FGameplayTagTableRow
{
	bool bAllowNonRestrictedChildren; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct GameplayTags.RestrictedConfigInfo
// Size: 0x20 (Inherited: 0x0)
struct FRestrictedConfigInfo
{
	struct FString RestrictedConfigName; // 0x0(0x10)
	struct TArray<struct FString> Owners; // 0x10(0x10)
};

// Object: ScriptStruct GameplayTags.GameplayTagCategoryRemap
// Size: 0x20 (Inherited: 0x0)
struct FGameplayTagCategoryRemap
{
	struct FString BaseCategory; // 0x0(0x10)
	struct TArray<struct FString> RemapCategories; // 0x10(0x10)
};

// Object: ScriptStruct GameplayTags.GameplayTagRedirect
// Size: 0x10 (Inherited: 0x0)
struct FGameplayTagRedirect
{
	struct FName OldTagName; // 0x0(0x8)
	struct FName NewTagName; // 0x8(0x8)
};

// Object: Class GameplayTags.BlueprintGameplayTagLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBlueprintGameplayTagLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UBlueprintGameplayTagLibrary, "BlueprintGameplayTagLibrary")

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb19cb8c
	// Params: [ Num(3) Size(0x29) ]
	static bool RemoveGameplayTag(struct FGameplayTagContainer& TagContainer, struct FGameplayTag Tag);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xb19bf20
	// Params: [ Num(3) Size(0x19) ]
	static bool NotEqual_TagTag(struct FGameplayTag A, struct FString B);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xb19bd94
	// Params: [ Num(3) Size(0x31) ]
	static bool NotEqual_TagContainerTagContainer(struct FGameplayTagContainer A, struct FString B);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xb19c7d0
	// Params: [ Num(3) Size(0x41) ]
	static bool NotEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xb19d92c
	// Params: [ Num(3) Size(0x11) ]
	static bool NotEqual_GameplayTag(struct FGameplayTag A, struct FGameplayTag B);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xb19dc60
	// Params: [ Num(4) Size(0x12) ]
	static bool MatchesTag(struct FGameplayTag TagOne, struct FGameplayTag TagTwo, bool bExactMatch);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xb19dafc
	// Params: [ Num(4) Size(0x2A) ]
	static bool MatchesAnyTags(struct FGameplayTag TagOne, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xb19c6bc
	// Params: [ Num(2) Size(0x40) ]
	static struct FGameplayTagContainer MakeLiteralGameplayTagContainer(struct FGameplayTagContainer Value);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xb19d724
	// Params: [ Num(2) Size(0x10) ]
	static struct FGameplayTag MakeLiteralGameplayTag(struct FGameplayTag Value);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xb19c294
	// Params: [ Num(2) Size(0x90) ]
	static struct FGameplayTagQuery MakeGameplayTagQuery(struct FGameplayTagQuery TagQuery);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xb19c50c
	// Params: [ Num(2) Size(0x28) ]
	static struct FGameplayTagContainer MakeGameplayTagContainerFromTag(struct FGameplayTag SingleTag);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xb19c5d8
	// Params: [ Num(2) Size(0x30) ]
	static struct FGameplayTagContainer MakeGameplayTagContainerFromArray(const struct TArray<struct FGameplayTag>& GameplayTags);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xb19d0cc
	// Params: [ Num(2) Size(0x49) ]
	static bool IsTagQueryEmpty(const struct FGameplayTagQuery& TagQuery);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xb19d880
	// Params: [ Num(2) Size(0x9) ]
	static bool IsGameplayTagValid(struct FGameplayTag GameplayTag);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.HasTag
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xb19d4ec
	// Params: [ Num(4) Size(0x2A) ]
	static bool HasTag(const struct FGameplayTagContainer& TagContainer, struct FGameplayTag Tag, bool bExactMatch);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xb19d354
	// Params: [ Num(4) Size(0x42) ]
	static bool HasAnyTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xb19d1bc
	// Params: [ Num(4) Size(0x42) ]
	static bool HasAllTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xb19c16c
	// Params: [ Num(3) Size(0x31) ]
	static bool HasAllMatchingGameplayTags(struct TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface, const struct FGameplayTagContainer& OtherContainer);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xb19d7cc
	// Params: [ Num(2) Size(0x10) ]
	static struct FName GetTagName(const struct FGameplayTag& GameplayTag);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xb19d650
	// Params: [ Num(2) Size(0x24) ]
	static int32_t GetNumGameplayTagsInContainer(const struct FGameplayTagContainer& TagContainer);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xb19bc8c
	// Params: [ Num(2) Size(0x30) ]
	static struct FString GetDebugStringFromGameplayTagContainer(const struct FGameplayTagContainer& TagContainer);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xb19bbac
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetDebugStringFromGameplayTag(struct FGameplayTag GameplayTag);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb19cdb4
	// Params: [ Num(4) Size(0x68) ]
	static void GetAllActorsOfClassMatchingTagQuery(struct UObject* WorldContextObject, struct AActor* ActorClass, const struct FGameplayTagQuery& GameplayTagQuery, struct TArray<struct AActor*>& OutActors);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xb19c914
	// Params: [ Num(3) Size(0x41) ]
	static bool EqualEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xb19da14
	// Params: [ Num(3) Size(0x11) ]
	static bool EqualEqual_GameplayTag(struct FGameplayTag A, struct FGameplayTag B);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xb19c070
	// Params: [ Num(3) Size(0x19) ]
	static bool DoesTagAssetInterfaceHaveTag(struct TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface, struct FGameplayTag Tag);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xb19cf70
	// Params: [ Num(3) Size(0x69) ]
	static bool DoesContainerMatchTagQuery(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagQuery& TagQuery);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xb19c3e8
	// Params: [ Num(2) Size(0x30) ]
	static void BreakGameplayTagContainer(const struct FGameplayTagContainer& GameplayTagContainer, struct TArray<struct FGameplayTag>& GameplayTags);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb19ca58
	// Params: [ Num(2) Size(0x40) ]
	static void AppendGameplayTagContainers(struct FGameplayTagContainer& InOutTagContainer, const struct FGameplayTagContainer& InTagContainer);

	// Object: Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb19cca8
	// Params: [ Num(2) Size(0x28) ]
	static void AddGameplayTag(struct FGameplayTagContainer& TagContainer, struct FGameplayTag Tag);
};

// Object: Class GameplayTags.GameplayTagAssetInterface
// Size: 0x28 (Inherited: 0x28)
struct IGameplayTagAssetInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IGameplayTagAssetInterface, "GameplayTagAssetInterface")

	// Object: Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb19e070
	// Params: [ Num(2) Size(0x9) ]
	bool HasMatchingGameplayTag(struct FGameplayTag TagToCheck);

	// Object: Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb19dea0
	// Params: [ Num(2) Size(0x21) ]
	bool HasAnyMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer);

	// Object: Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb19df88
	// Params: [ Num(2) Size(0x21) ]
	bool HasAllMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer);

	// Object: Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9dd2ec4
	// Params: [ Num(1) Size(0x20) ]
	void GetOwnedGameplayTags(struct FGameplayTagContainer& TagContainer);
};

// Object: Class GameplayTags.EditableGameplayTagQuery
// Size: 0x98 (Inherited: 0x28)
struct UEditableGameplayTagQuery : UObject
{
	DEFINE_UE_CLASS_HELPERS(UEditableGameplayTagQuery, "EditableGameplayTagQuery")

	struct FString UserDescription; // 0x28(0x10)
	uint8_t Pad_0x38[0x10]; // 0x38(0x10)
	struct UEditableGameplayTagQueryExpression* RootExpression; // 0x48(0x8)
	struct FGameplayTagQuery TagQueryExportText_Helper; // 0x50(0x48)
};

// Object: Class GameplayTags.EditableGameplayTagQueryExpression
// Size: 0x28 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression : UObject
{
	DEFINE_UE_CLASS_HELPERS(UEditableGameplayTagQueryExpression, "EditableGameplayTagQueryExpression")
};

// Object: Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
// Size: 0x48 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression_AnyTagsMatch : UEditableGameplayTagQueryExpression
{
	DEFINE_UE_CLASS_HELPERS(UEditableGameplayTagQueryExpression_AnyTagsMatch, "EditableGameplayTagQueryExpression_AnyTagsMatch")

	struct FGameplayTagContainer Tags; // 0x28(0x20)
};

// Object: Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
// Size: 0x48 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression_AllTagsMatch : UEditableGameplayTagQueryExpression
{
	DEFINE_UE_CLASS_HELPERS(UEditableGameplayTagQueryExpression_AllTagsMatch, "EditableGameplayTagQueryExpression_AllTagsMatch")

	struct FGameplayTagContainer Tags; // 0x28(0x20)
};

// Object: Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
// Size: 0x48 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression_NoTagsMatch : UEditableGameplayTagQueryExpression
{
	DEFINE_UE_CLASS_HELPERS(UEditableGameplayTagQueryExpression_NoTagsMatch, "EditableGameplayTagQueryExpression_NoTagsMatch")

	struct FGameplayTagContainer Tags; // 0x28(0x20)
};

// Object: Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
// Size: 0x38 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression_AnyExprMatch : UEditableGameplayTagQueryExpression
{
	DEFINE_UE_CLASS_HELPERS(UEditableGameplayTagQueryExpression_AnyExprMatch, "EditableGameplayTagQueryExpression_AnyExprMatch")

	struct TArray<struct UEditableGameplayTagQueryExpression*> Expressions; // 0x28(0x10)
};

// Object: Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
// Size: 0x38 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression_AllExprMatch : UEditableGameplayTagQueryExpression
{
	DEFINE_UE_CLASS_HELPERS(UEditableGameplayTagQueryExpression_AllExprMatch, "EditableGameplayTagQueryExpression_AllExprMatch")

	struct TArray<struct UEditableGameplayTagQueryExpression*> Expressions; // 0x28(0x10)
};

// Object: Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
// Size: 0x38 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression_NoExprMatch : UEditableGameplayTagQueryExpression
{
	DEFINE_UE_CLASS_HELPERS(UEditableGameplayTagQueryExpression_NoExprMatch, "EditableGameplayTagQueryExpression_NoExprMatch")

	struct TArray<struct UEditableGameplayTagQueryExpression*> Expressions; // 0x28(0x10)
};

// Object: Class GameplayTags.GameplayTagsManager
// Size: 0x210 (Inherited: 0x28)
struct UGameplayTagsManager : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGameplayTagsManager, "GameplayTagsManager")

	uint8_t Pad_0x28[0x98]; // 0x28(0x98)
	struct TArray<struct FGameplayTagSource> TagSources; // 0xC0(0x10)
	uint8_t Pad_0xD0[0xE0]; // 0xD0(0xE0)
	struct TArray<struct UDataTable*> GameplayTagTables; // 0x1B0(0x10)
	uint8_t Pad_0x1C0[0x50]; // 0x1C0(0x50)
};

// Object: Class GameplayTags.GameplayTagsList
// Size: 0x48 (Inherited: 0x28)
struct UGameplayTagsList : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGameplayTagsList, "GameplayTagsList")

	struct FString ConfigFileName; // 0x28(0x10)
	struct TArray<struct FGameplayTagTableRow> GameplayTagList; // 0x38(0x10)
};

// Object: Class GameplayTags.RestrictedGameplayTagsList
// Size: 0x48 (Inherited: 0x28)
struct URestrictedGameplayTagsList : UObject
{
	DEFINE_UE_CLASS_HELPERS(URestrictedGameplayTagsList, "RestrictedGameplayTagsList")

	struct FString ConfigFileName; // 0x28(0x10)
	struct TArray<struct FRestrictedGameplayTagTableRow> RestrictedGameplayTagList; // 0x38(0x10)
};

// Object: Class GameplayTags.GameplayTagsSettings
// Size: 0xB8 (Inherited: 0x48)
struct UGameplayTagsSettings : UGameplayTagsList
{
	DEFINE_UE_CLASS_HELPERS(UGameplayTagsSettings, "GameplayTagsSettings")

	bool ImportTagsFromConfig; // 0x48(0x1)
	bool WarnOnInvalidTags; // 0x49(0x1)
	bool FastReplication; // 0x4A(0x1)
	uint8_t Pad_0x4B[0x5]; // 0x4B(0x5)
	struct FString InvalidTagCharacters; // 0x50(0x10)
	struct TArray<struct FGameplayTagCategoryRemap> CategoryRemapping; // 0x60(0x10)
	struct TArray<struct FSoftObjectPath> GameplayTagTableList; // 0x70(0x10)
	struct TArray<struct FGameplayTagRedirect> GameplayTagRedirects; // 0x80(0x10)
	struct TArray<struct FName> CommonlyReplicatedTags; // 0x90(0x10)
	int32_t NumBitsForContainerSize; // 0xA0(0x4)
	int32_t NetIndexFirstBitSegment; // 0xA4(0x4)
	struct TArray<struct FRestrictedConfigInfo> RestrictedConfigFiles; // 0xA8(0x10)
};

// Object: Class GameplayTags.GameplayTagsDeveloperSettings
// Size: 0x50 (Inherited: 0x38)
struct UGameplayTagsDeveloperSettings : UDeveloperSettings
{
	DEFINE_UE_CLASS_HELPERS(UGameplayTagsDeveloperSettings, "GameplayTagsDeveloperSettings")

	struct FString DeveloperConfigName; // 0x38(0x10)
	struct FName FavoriteTagSource; // 0x48(0x8)
};

} // namespace SDK
