#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: LogVisualizerInGame
// Enums: 0
// Structs: 1
// Classes: 1

struct APlayerController;
struct UUserWidget;
struct UWidget;
struct FLogLine;
struct ULogVisualizerInGame;

// Object: ScriptStruct LogVisualizerInGame.LogLine
// Size: 0x38 (Inherited: 0x0)
struct FLogLine
{
	uint8_t Pad_0x0[0x38]; // 0x0(0x38)
};

// Object: Class LogVisualizerInGame.LogVisualizerInGame
// Size: 0x28 (Inherited: 0x28)
struct ULogVisualizerInGame : UObject
{
	DEFINE_UE_CLASS_HELPERS(ULogVisualizerInGame, "LogVisualizerInGame")

	// Object: Function LogVisualizerInGame.LogVisualizerInGame.UpdateFilteredLogContent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86f80b8
	// Params: [ Num(0) Size(0x0) ]
	static void UpdateFilteredLogContent();

	// Object: Function LogVisualizerInGame.LogVisualizerInGame.SetLineNumPerPage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86f8024
	// Params: [ Num(1) Size(0x4) ]
	static void SetLineNumPerPage(int32_t _LineNumberPerPage);

	// Object: Function LogVisualizerInGame.LogVisualizerInGame.SetDeniedCategories
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86f7f3c
	// Params: [ Num(2) Size(0x18) ]
	static void SetDeniedCategories(uint8_t IsChecked, struct FString Category);

	// Object: Function LogVisualizerInGame.LogVisualizerInGame.SetAllowWarning
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86f7ea0
	// Params: [ Num(1) Size(0x1) ]
	static void SetAllowWarning(uint8_t Flag);

	// Object: Function LogVisualizerInGame.LogVisualizerInGame.SetAllowMessage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86f7e04
	// Params: [ Num(1) Size(0x1) ]
	static void SetAllowMessage(uint8_t Flag);

	// Object: Function LogVisualizerInGame.LogVisualizerInGame.SetAllowError
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86f7d68
	// Params: [ Num(1) Size(0x1) ]
	static void SetAllowError(uint8_t Flag);

	// Object: Function LogVisualizerInGame.LogVisualizerInGame.ResumeLogRecoding
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86f7d54
	// Params: [ Num(0) Size(0x0) ]
	static void ResumeLogRecoding();

	// Object: Function LogVisualizerInGame.LogVisualizerInGame.PauseLogRecoding
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86f7d40
	// Params: [ Num(0) Size(0x0) ]
	static void PauseLogRecoding();

	// Object: Function LogVisualizerInGame.LogVisualizerInGame.GetOnePageForShare
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86f7ca8
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetOnePageForShare();

	// Object: Function LogVisualizerInGame.LogVisualizerInGame.GetMaxSearchResultPageNum
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86f7c74
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetMaxSearchResultPageNum();

	// Object: Function LogVisualizerInGame.LogVisualizerInGame.GetMaxPageNum
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86f7c40
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetMaxPageNum();

	// Object: Function LogVisualizerInGame.LogVisualizerInGame.GetFinalShowText
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86f7ba8
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetFinalShowText();

	// Object: Function LogVisualizerInGame.LogVisualizerInGame.GetCategoryArray
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86f7b04
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FString> GetCategoryArray();

	// Object: Function LogVisualizerInGame.LogVisualizerInGame.GetAllPagesForShare
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86f7a24
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetAllPagesForShare(uint8_t isSearch);

	// Object: Function LogVisualizerInGame.LogVisualizerInGame.EmptySearchResult
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86f79f8
	// Params: [ Num(0) Size(0x0) ]
	static void EmptySearchResult();

	// Object: Function LogVisualizerInGame.LogVisualizerInGame.EmptyFilteredResult
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86f79ac
	// Params: [ Num(0) Size(0x0) ]
	static void EmptyFilteredResult();

	// Object: Function LogVisualizerInGame.LogVisualizerInGame.DestroyLogWidget
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86f794c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t DestroyLogWidget();

	// Object: Function LogVisualizerInGame.LogVisualizerInGame.CreateUWidget
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86f7834
	// Params: [ Num(4) Size(0x20) ]
	static struct UWidget* CreateUWidget(struct UUserWidget* InWidget, struct UWidget* WidgetToCreate, struct FName WidgetName);

	// Object: Function LogVisualizerInGame.LogVisualizerInGame.CreateTaggedLogContent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86f7760
	// Params: [ Num(2) Size(0x5) ]
	static void CreateTaggedLogContent(int32_t PageNum, uint8_t isLastPage);

	// Object: Function LogVisualizerInGame.LogVisualizerInGame.CreateSearchTaggedLogContent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86f7648
	// Params: [ Num(3) Size(0x15) ]
	static void CreateSearchTaggedLogContent(struct FString SubString, int32_t PageNum, uint8_t isLastPage);

	// Object: Function LogVisualizerInGame.LogVisualizerInGame.CreateLogWidget
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86f75a0
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t CreateLogWidget(struct APlayerController* OwningPlayer);

	// Object: Function LogVisualizerInGame.LogVisualizerInGame.CreateLogVisualizerInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86f758c
	// Params: [ Num(0) Size(0x0) ]
	static void CreateLogVisualizerInstance();

	// Object: Function LogVisualizerInGame.LogVisualizerInGame.ClearLogRecord
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86f7578
	// Params: [ Num(0) Size(0x0) ]
	static void ClearLogRecord();

	// Object: Function LogVisualizerInGame.LogVisualizerInGame.ClearDeniedCategories
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86f7564
	// Params: [ Num(0) Size(0x0) ]
	static void ClearDeniedCategories();
};

} // namespace SDK
