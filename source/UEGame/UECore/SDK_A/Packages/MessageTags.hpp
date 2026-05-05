#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: MessageTags
// Enums: 5
// Structs: 13
// Classes: 15

struct AActor;
struct UDataTable;
struct FMessageTag;
struct FMessageTagQuery;
struct FMessageTagCreationWidgetHelper;
struct FMessageTagReferenceHelper;
struct FMessageTagContainer;
struct FMessageTagNode;
struct FMessageTagSource;
struct FMessageTagTableRow;
struct FRestrictedMessageTagTableRow;
struct FMessageParameter;
struct FRestrictedMessageCfg;
struct FMessageTagCategoryRemap;
struct FMessageTagRedirect;
struct UBlueprintMessageTagLibrary;
struct IMessageTagAssetInterface;
struct UEditableMessageTagQuery;
struct UEditableMessageTagQueryExpression;
struct UEditableMessageTagQueryExpression_AnyTagsMatch;
struct UEditableMessageTagQueryExpression_AllTagsMatch;
struct UEditableMessageTagQueryExpression_NoTagsMatch;
struct UEditableMessageTagQueryExpression_AnyExprMatch;
struct UEditableMessageTagQueryExpression_AllExprMatch;
struct UEditableMessageTagQueryExpression_NoExprMatch;
struct UMessageTagsManager;
struct UMessageTagsList;
struct URestrictedMessageTagsList;
struct UMessageTagsSettings;
struct UMessageTagsDeveloperSettings;

// Object: Enum MessageTags.EMessageTagQueryExprType
enum class EMessageTagQueryExprType : uint8_t
{
	Undefined = 0,
	AnyTagsMatch = 1,
	AllTagsMatch = 2,
	NoTagsMatch = 3,
	AnyExprMatch = 4,
	AllExprMatch = 5,
	NoExprMatch = 6,
	EMessageTagQueryExprType_MAX = 7
};

// Object: Enum MessageTags.EMessageContainerMatchType
enum class EMessageContainerMatchType : uint8_t
{
	Any = 0,
	All = 1,
	EMessageContainerMatchType_MAX = 2
};

// Object: Enum MessageTags.EMessageTagMatchType
enum class EMessageTagMatchType : uint8_t
{
	Explicit = 0,
	IncludeParentTags = 1,
	EMessageTagMatchType_MAX = 2
};

// Object: Enum MessageTags.EMessageTagSelectionType
enum class EMessageTagSelectionType : uint8_t
{
	None = 0,
	NonRestrictedOnly = 1,
	RestrictedOnly = 2,
	All = 3,
	EMessageTagSelectionType_MAX = 4
};

// Object: Enum MessageTags.EMessageTagSourceType
enum class EMessageTagSourceType : uint8_t
{
	Native = 0,
	DefaultTagList = 1,
	TagList = 2,
	RestrictedTagList = 3,
	DataTable = 4,
	Invalid = 5,
	EMessageTagSourceType_MAX = 6
};

// Object: ScriptStruct MessageTags.MessageTag
// Size: 0x8 (Inherited: 0x0)
struct FMessageTag
{
	struct FName TagName; // 0x0(0x8)
};

// Object: ScriptStruct MessageTags.MessageTagQuery
// Size: 0x48 (Inherited: 0x0)
struct FMessageTagQuery
{
	int32_t TokenStreamVersion; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FMessageTag> TagDictionary; // 0x8(0x10)
	struct TArray<uint8_t> QueryTokenStream; // 0x18(0x10)
	struct FString UserDescription; // 0x28(0x10)
	struct FString AutoDescription; // 0x38(0x10)
};

// Object: ScriptStruct MessageTags.MessageTagCreationWidgetHelper
// Size: 0x1 (Inherited: 0x0)
struct FMessageTagCreationWidgetHelper
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct MessageTags.MessageTagReferenceHelper
// Size: 0x10 (Inherited: 0x0)
struct FMessageTagReferenceHelper
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct MessageTags.MessageTagContainer
// Size: 0x20 (Inherited: 0x0)
struct FMessageTagContainer
{
	struct TArray<struct FMessageTag> MessageTags; // 0x0(0x10)
	struct TArray<struct FMessageTag> ParentTags; // 0x10(0x10)
};

// Object: ScriptStruct MessageTags.MessageTagNode
// Size: 0x50 (Inherited: 0x0)
struct FMessageTagNode
{
	uint8_t Pad_0x0[0x50]; // 0x0(0x50)
};

// Object: ScriptStruct MessageTags.MessageTagSource
// Size: 0x20 (Inherited: 0x0)
struct FMessageTagSource
{
	struct FName SourceName; // 0x0(0x8)
	EMessageTagSourceType SourceType; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct UMessageTagsList* SourceTagList; // 0x10(0x8)
	struct URestrictedMessageTagsList* SourceRestrictedTagList; // 0x18(0x8)
};

// Object: ScriptStruct MessageTags.MessageTagTableRow
// Size: 0x20 (Inherited: 0x8)
struct FMessageTagTableRow : FTableRowBase
{
	struct FName Tag; // 0x8(0x8)
	struct FString DevComment; // 0x10(0x10)
};

// Object: ScriptStruct MessageTags.RestrictedMessageTagTableRow
// Size: 0x28 (Inherited: 0x20)
struct FRestrictedMessageTagTableRow : FMessageTagTableRow
{
	uint8_t bAllowNonRestrictedChildren : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct MessageTags.MessageParameter
// Size: 0x10 (Inherited: 0x0)
struct FMessageParameter
{
	struct FName Name; // 0x0(0x8)
	struct FName Type; // 0x8(0x8)
};

// Object: ScriptStruct MessageTags.RestrictedMessageCfg
// Size: 0x20 (Inherited: 0x0)
struct FRestrictedMessageCfg
{
	struct FString RestrictedConfigName; // 0x0(0x10)
	struct TArray<struct FString> Owners; // 0x10(0x10)
};

// Object: ScriptStruct MessageTags.MessageTagCategoryRemap
// Size: 0x20 (Inherited: 0x0)
struct FMessageTagCategoryRemap
{
	struct FString BaseCategory; // 0x0(0x10)
	struct TArray<struct FString> RemapCategories; // 0x10(0x10)
};

// Object: ScriptStruct MessageTags.MessageTagRedirect
// Size: 0x10 (Inherited: 0x0)
struct FMessageTagRedirect
{
	struct FName OldTagName; // 0x0(0x8)
	struct FName NewTagName; // 0x8(0x8)
};

// Object: Class MessageTags.BlueprintMessageTagLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBlueprintMessageTagLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UBlueprintMessageTagLibrary, "BlueprintMessageTagLibrary")

	// Object: Function MessageTags.BlueprintMessageTagLibrary.RemoveMessageTag
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x75f0ff8
	// Params: [ Num(3) Size(0x29) ]
	static uint8_t RemoveMessageTag(struct FMessageTagContainer& TagContainer, struct FMessageTag Tag);

	// Object: Function MessageTags.BlueprintMessageTagLibrary.NotEqual_TagTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x75f0ebc
	// Params: [ Num(3) Size(0x19) ]
	static uint8_t NotEqual_TagTag(struct FMessageTag A, struct FString B);

	// Object: Function MessageTags.BlueprintMessageTagLibrary.NotEqual_TagContainerTagContainer
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x75f0d4c
	// Params: [ Num(3) Size(0x31) ]
	static uint8_t NotEqual_TagContainerTagContainer(struct FMessageTagContainer A, struct FString B);

	// Object: Function MessageTags.BlueprintMessageTagLibrary.NotEqual_MessageTagContainer
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x75f0c18
	// Params: [ Num(3) Size(0x41) ]
	static uint8_t NotEqual_MessageTagContainer(const struct FMessageTagContainer& A, const struct FMessageTagContainer& B);

	// Object: Function MessageTags.BlueprintMessageTagLibrary.NotEqual_MessageTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x75f0b38
	// Params: [ Num(3) Size(0x11) ]
	static uint8_t NotEqual_MessageTag(struct FMessageTag A, struct FMessageTag B);

	// Object: Function MessageTags.BlueprintMessageTagLibrary.MatchesTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x75f0a14
	// Params: [ Num(4) Size(0x12) ]
	static uint8_t MatchesTag(struct FMessageTag TagOne, struct FMessageTag TagTwo, uint8_t bExactMatch);

	// Object: Function MessageTags.BlueprintMessageTagLibrary.MatchesAnyTags
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x75f08c0
	// Params: [ Num(4) Size(0x2A) ]
	static uint8_t MatchesAnyTags(struct FMessageTag TagOne, const struct FMessageTagContainer& OtherContainer, uint8_t bExactMatch);

	// Object: Function MessageTags.BlueprintMessageTagLibrary.MakeMessageTagQuery
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x75f078c
	// Params: [ Num(2) Size(0x90) ]
	static struct FMessageTagQuery MakeMessageTagQuery(struct FMessageTagQuery TagQuery);

	// Object: Function MessageTags.BlueprintMessageTagLibrary.MakeMessageTagContainerFromTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x75f06c8
	// Params: [ Num(2) Size(0x28) ]
	static struct FMessageTagContainer MakeMessageTagContainerFromTag(struct FMessageTag SingleTag);

	// Object: Function MessageTags.BlueprintMessageTagLibrary.MakeMessageTagContainerFromArray
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x75f05ec
	// Params: [ Num(2) Size(0x30) ]
	static struct FMessageTagContainer MakeMessageTagContainerFromArray(const struct TArray<struct FMessageTag>& MessageTags);

	// Object: Function MessageTags.BlueprintMessageTagLibrary.MakeLiteralMessageTagContainer
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x75f04e0
	// Params: [ Num(2) Size(0x40) ]
	static struct FMessageTagContainer MakeLiteralMessageTagContainer(struct FMessageTagContainer Value);

	// Object: Function MessageTags.BlueprintMessageTagLibrary.MakeLiteralMessageTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x75f043c
	// Params: [ Num(2) Size(0x10) ]
	static struct FMessageTag MakeLiteralMessageTag(struct FMessageTag Value);

	// Object: Function MessageTags.BlueprintMessageTagLibrary.IsTagQueryEmpty
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x75f0360
	// Params: [ Num(2) Size(0x49) ]
	static uint8_t IsTagQueryEmpty(const struct FMessageTagQuery& TagQuery);

	// Object: Function MessageTags.BlueprintMessageTagLibrary.IsMessageTagValid
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x75f02b8
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsMessageTagValid(struct FMessageTag MessageTag);

	// Object: Function MessageTags.BlueprintMessageTagLibrary.HasTag
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x75f0164
	// Params: [ Num(4) Size(0x2A) ]
	static uint8_t HasTag(const struct FMessageTagContainer& TagContainer, struct FMessageTag Tag, uint8_t bExactMatch);

	// Object: Function MessageTags.BlueprintMessageTagLibrary.HasAnyTags
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x75effe4
	// Params: [ Num(4) Size(0x42) ]
	static uint8_t HasAnyTags(const struct FMessageTagContainer& TagContainer, const struct FMessageTagContainer& OtherContainer, uint8_t bExactMatch);

	// Object: Function MessageTags.BlueprintMessageTagLibrary.HasAllTags
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x75efe64
	// Params: [ Num(4) Size(0x42) ]
	static uint8_t HasAllTags(const struct FMessageTagContainer& TagContainer, const struct FMessageTagContainer& OtherContainer, uint8_t bExactMatch);

	// Object: Function MessageTags.BlueprintMessageTagLibrary.HasAllMatchingMessageTags
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x75efd4c
	// Params: [ Num(3) Size(0x31) ]
	static uint8_t HasAllMatchingMessageTags(struct TScriptInterface<IMessageTagAssetInterface> TagContainerInterface, const struct FMessageTagContainer& OtherContainer);

	// Object: Function MessageTags.BlueprintMessageTagLibrary.GetTagName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x75efc98
	// Params: [ Num(2) Size(0x10) ]
	static struct FName GetTagName(const struct FMessageTag& MessageTag);

	// Object: Function MessageTags.BlueprintMessageTagLibrary.GetNumMessageTagsInContainer
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x75efbd0
	// Params: [ Num(2) Size(0x24) ]
	static int32_t GetNumMessageTagsInContainer(const struct FMessageTagContainer& TagContainer);

	// Object: Function MessageTags.BlueprintMessageTagLibrary.GetDebugStringFromMessageTagContainer
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x75efad4
	// Params: [ Num(2) Size(0x30) ]
	static struct FString GetDebugStringFromMessageTagContainer(const struct FMessageTagContainer& TagContainer);

	// Object: Function MessageTags.BlueprintMessageTagLibrary.GetDebugStringFromMessageTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x75ef9fc
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetDebugStringFromMessageTag(struct FMessageTag MessageTag);

	// Object: Function MessageTags.BlueprintMessageTagLibrary.GetAllActorsOfClassMatchingTagQuery
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x75ef864
	// Params: [ Num(4) Size(0x68) ]
	static void GetAllActorsOfClassMatchingTagQuery(struct UObject* WorldContextObject, struct AActor* ActorClass, const struct FMessageTagQuery& MessageTagQuery, struct TArray<struct AActor*>& OutActors);

	// Object: Function MessageTags.BlueprintMessageTagLibrary.EqualEqual_MessageTagContainer
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x75ef730
	// Params: [ Num(3) Size(0x41) ]
	static uint8_t EqualEqual_MessageTagContainer(const struct FMessageTagContainer& A, const struct FMessageTagContainer& B);

	// Object: Function MessageTags.BlueprintMessageTagLibrary.EqualEqual_MessageTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x75ef650
	// Params: [ Num(3) Size(0x11) ]
	static uint8_t EqualEqual_MessageTag(struct FMessageTag A, struct FMessageTag B);

	// Object: Function MessageTags.BlueprintMessageTagLibrary.DoesTagAssetInterfaceHaveTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x75ef55c
	// Params: [ Num(3) Size(0x19) ]
	static uint8_t DoesTagAssetInterfaceHaveTag(struct TScriptInterface<IMessageTagAssetInterface> TagContainerInterface, struct FMessageTag Tag);

	// Object: Function MessageTags.BlueprintMessageTagLibrary.DoesContainerMatchTagQuery
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x75ef418
	// Params: [ Num(3) Size(0x69) ]
	static uint8_t DoesContainerMatchTagQuery(const struct FMessageTagContainer& TagContainer, const struct FMessageTagQuery& TagQuery);

	// Object: Function MessageTags.BlueprintMessageTagLibrary.BreakMessageTagContainer
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x75ef304
	// Params: [ Num(2) Size(0x30) ]
	static void BreakMessageTagContainer(const struct FMessageTagContainer& MessageTagContainer, struct TArray<struct FMessageTag>& MessageTags);

	// Object: Function MessageTags.BlueprintMessageTagLibrary.AppendMessageTagContainers
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x75ef1dc
	// Params: [ Num(2) Size(0x40) ]
	static void AppendMessageTagContainers(struct FMessageTagContainer& InOutTagContainer, const struct FMessageTagContainer& InTagContainer);

	// Object: Function MessageTags.BlueprintMessageTagLibrary.AddMessageTag
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x75ef0e0
	// Params: [ Num(2) Size(0x28) ]
	static void AddMessageTag(struct FMessageTagContainer& TagContainer, struct FMessageTag Tag);
};

// Object: Class MessageTags.MessageTagAssetInterface
// Size: 0x28 (Inherited: 0x28)
struct IMessageTagAssetInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IMessageTagAssetInterface, "MessageTagAssetInterface")

	// Object: Function MessageTags.MessageTagAssetInterface.HasMatchingMessageTag
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x75f15a8
	// Params: [ Num(2) Size(0x9) ]
	uint8_t HasMatchingMessageTag(struct FMessageTag TagToCheck);

	// Object: Function MessageTags.MessageTagAssetInterface.HasAnyMatchingMessageTags
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x75f14c4
	// Params: [ Num(2) Size(0x21) ]
	uint8_t HasAnyMatchingMessageTags(const struct FMessageTagContainer& TagContainer);

	// Object: Function MessageTags.MessageTagAssetInterface.HasAllMatchingMessageTags
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x75f13e0
	// Params: [ Num(2) Size(0x21) ]
	uint8_t HasAllMatchingMessageTags(const struct FMessageTagContainer& TagContainer);

	// Object: Function MessageTags.MessageTagAssetInterface.GetOwnedMessageTags
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x75f1310
	// Params: [ Num(1) Size(0x20) ]
	void GetOwnedMessageTags(struct FMessageTagContainer& TagContainer);
};

// Object: Class MessageTags.EditableMessageTagQuery
// Size: 0x98 (Inherited: 0x28)
struct UEditableMessageTagQuery : UObject
{
	DEFINE_UE_CLASS_HELPERS(UEditableMessageTagQuery, "EditableMessageTagQuery")

	struct FString UserDescription; // 0x28(0x10)
	uint8_t Pad_0x38[0x10]; // 0x38(0x10)
	struct UEditableMessageTagQueryExpression* RootExpression; // 0x48(0x8)
	struct FMessageTagQuery TagQueryExportText_Helper; // 0x50(0x48)
};

// Object: Class MessageTags.EditableMessageTagQueryExpression
// Size: 0x28 (Inherited: 0x28)
struct UEditableMessageTagQueryExpression : UObject
{
	DEFINE_UE_CLASS_HELPERS(UEditableMessageTagQueryExpression, "EditableMessageTagQueryExpression")
};

// Object: Class MessageTags.EditableMessageTagQueryExpression_AnyTagsMatch
// Size: 0x48 (Inherited: 0x28)
struct UEditableMessageTagQueryExpression_AnyTagsMatch : UEditableMessageTagQueryExpression
{
	DEFINE_UE_CLASS_HELPERS(UEditableMessageTagQueryExpression_AnyTagsMatch, "EditableMessageTagQueryExpression_AnyTagsMatch")

	struct FMessageTagContainer Tags; // 0x28(0x20)
};

// Object: Class MessageTags.EditableMessageTagQueryExpression_AllTagsMatch
// Size: 0x48 (Inherited: 0x28)
struct UEditableMessageTagQueryExpression_AllTagsMatch : UEditableMessageTagQueryExpression
{
	DEFINE_UE_CLASS_HELPERS(UEditableMessageTagQueryExpression_AllTagsMatch, "EditableMessageTagQueryExpression_AllTagsMatch")

	struct FMessageTagContainer Tags; // 0x28(0x20)
};

// Object: Class MessageTags.EditableMessageTagQueryExpression_NoTagsMatch
// Size: 0x48 (Inherited: 0x28)
struct UEditableMessageTagQueryExpression_NoTagsMatch : UEditableMessageTagQueryExpression
{
	DEFINE_UE_CLASS_HELPERS(UEditableMessageTagQueryExpression_NoTagsMatch, "EditableMessageTagQueryExpression_NoTagsMatch")

	struct FMessageTagContainer Tags; // 0x28(0x20)
};

// Object: Class MessageTags.EditableMessageTagQueryExpression_AnyExprMatch
// Size: 0x38 (Inherited: 0x28)
struct UEditableMessageTagQueryExpression_AnyExprMatch : UEditableMessageTagQueryExpression
{
	DEFINE_UE_CLASS_HELPERS(UEditableMessageTagQueryExpression_AnyExprMatch, "EditableMessageTagQueryExpression_AnyExprMatch")

	struct TArray<struct UEditableMessageTagQueryExpression*> Expressions; // 0x28(0x10)
};

// Object: Class MessageTags.EditableMessageTagQueryExpression_AllExprMatch
// Size: 0x38 (Inherited: 0x28)
struct UEditableMessageTagQueryExpression_AllExprMatch : UEditableMessageTagQueryExpression
{
	DEFINE_UE_CLASS_HELPERS(UEditableMessageTagQueryExpression_AllExprMatch, "EditableMessageTagQueryExpression_AllExprMatch")

	struct TArray<struct UEditableMessageTagQueryExpression*> Expressions; // 0x28(0x10)
};

// Object: Class MessageTags.EditableMessageTagQueryExpression_NoExprMatch
// Size: 0x38 (Inherited: 0x28)
struct UEditableMessageTagQueryExpression_NoExprMatch : UEditableMessageTagQueryExpression
{
	DEFINE_UE_CLASS_HELPERS(UEditableMessageTagQueryExpression_NoExprMatch, "EditableMessageTagQueryExpression_NoExprMatch")

	struct TArray<struct UEditableMessageTagQueryExpression*> Expressions; // 0x28(0x10)
};

// Object: Class MessageTags.MessageTagsManager
// Size: 0x1B0 (Inherited: 0x28)
struct UMessageTagsManager : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMessageTagsManager, "MessageTagsManager")

	uint8_t Pad_0x28[0x98]; // 0x28(0x98)
	struct TArray<struct FMessageTagSource> TagSources; // 0xC0(0x10)
	uint8_t Pad_0xD0[0x80]; // 0xD0(0x80)
	struct TArray<struct UDataTable*> MessageTagTables; // 0x150(0x10)
	uint8_t Pad_0x160[0x50]; // 0x160(0x50)
};

// Object: Class MessageTags.MessageTagsList
// Size: 0x48 (Inherited: 0x28)
struct UMessageTagsList : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMessageTagsList, "MessageTagsList")

	struct FString ConfigFileName; // 0x28(0x10)
	struct TArray<struct FMessageTagTableRow> MessageTagList; // 0x38(0x10)
};

// Object: Class MessageTags.RestrictedMessageTagsList
// Size: 0x48 (Inherited: 0x28)
struct URestrictedMessageTagsList : UObject
{
	DEFINE_UE_CLASS_HELPERS(URestrictedMessageTagsList, "RestrictedMessageTagsList")

	struct FString ConfigFileName; // 0x28(0x10)
	struct TArray<struct FRestrictedMessageTagTableRow> RestrictedMessageTagList; // 0x38(0x10)
};

// Object: Class MessageTags.MessageTagsSettings
// Size: 0xB8 (Inherited: 0x48)
struct UMessageTagsSettings : UMessageTagsList
{
	DEFINE_UE_CLASS_HELPERS(UMessageTagsSettings, "MessageTagsSettings")

	uint8_t ImportTagsFromConfig : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t WarnOnInvalidTags : 1; // 0x49(0x1), Mask(0x1)
	uint8_t BitPad_0x49_1 : 7; // 0x49(0x1)
	uint8_t FastReplication : 1; // 0x4A(0x1), Mask(0x1)
	uint8_t BitPad_0x4A_1 : 7; // 0x4A(0x1)
	uint8_t Pad_0x4B[0x5]; // 0x4B(0x5)
	struct FString InvalidTagCharacters; // 0x50(0x10)
	struct TArray<struct FMessageTagCategoryRemap> CategoryRemapping; // 0x60(0x10)
	struct TArray<struct FSoftObjectPath> MessageTagTableList; // 0x70(0x10)
	struct TArray<struct FMessageTagRedirect> MessageTagRedirects; // 0x80(0x10)
	struct TArray<struct FName> CommonlyReplicatedTags; // 0x90(0x10)
	int32_t NumBitsForContainerSize; // 0xA0(0x4)
	int32_t NetIndexFirstBitSegment; // 0xA4(0x4)
	struct TArray<struct FRestrictedMessageCfg> RestrictedConfigFiles; // 0xA8(0x10)
};

// Object: Class MessageTags.MessageTagsDeveloperSettings
// Size: 0x38 (Inherited: 0x28)
struct UMessageTagsDeveloperSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMessageTagsDeveloperSettings, "MessageTagsDeveloperSettings")

	struct FString DeveloperConfigName; // 0x28(0x10)
};

} // namespace SDK
