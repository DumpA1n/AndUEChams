#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: TimiAudioProfiler
// Enums: 2
// Structs: 1
// Classes: 2

struct APlayerController;
enum class ETextCommit : uint8_t;
struct UButton;
struct UEditableTextBox;
struct UScrollBox;
struct UTextBlock;
struct FTAProfilerMessage;
struct UTAProfilerBPFuncLibrary;
struct UTAProfilerPanel;

// Object: Enum TimiAudioProfiler.ETAProfilerObjectType
enum class ETAProfilerObjectType : uint8_t
{
	Event = 0,
	Switch = 1,
	State = 2,
	RTPC = 3,
	SoundBank = 4,
	Listener = 5,
	ETAProfilerObjectType_MAX = 6
};

// Object: Enum TimiAudioProfiler.ETAProfilerType
enum class ETAProfilerType : uint8_t
{
	Message = 0,
	Warning = 1,
	Error = 2,
	ETAProfilerType_MAX = 3
};

// Object: ScriptStruct TimiAudioProfiler.TAProfilerMessage
// Size: 0x48 (Inherited: 0x0)
struct FTAProfilerMessage
{
	uint8_t Pad_0x0[0x48]; // 0x0(0x48)
};

// Object: Class TimiAudioProfiler.TAProfilerBPFuncLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTAProfilerBPFuncLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UTAProfilerBPFuncLibrary, "TAProfilerBPFuncLibrary")

	// Object: Function TimiAudioProfiler.TAProfilerBPFuncLibrary.CreateProfilerWidget
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8d08364
	// Params: [ Num(1) Size(0x8) ]
	static void CreateProfilerWidget(struct APlayerController* InPlayerController);

	// Object: Function TimiAudioProfiler.TAProfilerBPFuncLibrary.ChangeMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8d08350
	// Params: [ Num(0) Size(0x0) ]
	static void ChangeMode();
};

// Object: Class TimiAudioProfiler.TAProfilerPanel
// Size: 0x390 (Inherited: 0x2F8)
struct UTAProfilerPanel : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UTAProfilerPanel, "TAProfilerPanel")

	struct UButton* Button_Event; // 0x2F8(0x8)
	struct UButton* Button_RTPC; // 0x300(0x8)
	struct UButton* Button_Close; // 0x308(0x8)
	struct UButton* Button_Clean; // 0x310(0x8)
	struct UButton* Button_StartLog; // 0x318(0x8)
	struct UButton* Button_EndLog; // 0x320(0x8)
	struct UScrollBox* ScrollBox_Event; // 0x328(0x8)
	struct UTextBlock* TextBlock_Event; // 0x330(0x8)
	struct UScrollBox* ScrollBox_RTPC; // 0x338(0x8)
	struct UTextBlock* TextBlock_RTPC; // 0x340(0x8)
	struct UEditableTextBox* EditableTextBox_Search; // 0x348(0x8)
	uint8_t Pad_0x350[0x40]; // 0x350(0x40)

	// Object: Function TimiAudioProfiler.TAProfilerPanel.StartLogOnClicked
	// Flags: [Final|Native|Public]
	// Offset: 0x8d085f8
	// Params: [ Num(0) Size(0x0) ]
	void StartLogOnClicked();

	// Object: Function TimiAudioProfiler.TAProfilerPanel.ShowRTPC
	// Flags: [Final|Native|Public]
	// Offset: 0x8d085e4
	// Params: [ Num(0) Size(0x0) ]
	void ShowRTPC();

	// Object: Function TimiAudioProfiler.TAProfilerPanel.ShowEvent
	// Flags: [Final|Native|Public]
	// Offset: 0x8d085d0
	// Params: [ Num(0) Size(0x0) ]
	void ShowEvent();

	// Object: Function TimiAudioProfiler.TAProfilerPanel.SearchTextCommitted
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x8d08480
	// Params: [ Num(2) Size(0x19) ]
	void SearchTextCommitted(const struct FText& InNewString, ETextCommit InTextCommit);

	// Object: Function TimiAudioProfiler.TAProfilerPanel.EndLogOnClicked
	// Flags: [Final|Native|Public]
	// Offset: 0x8d0846c
	// Params: [ Num(0) Size(0x0) ]
	void EndLogOnClicked();

	// Object: Function TimiAudioProfiler.TAProfilerPanel.CloseBtnOnClicked
	// Flags: [Final|Native|Public]
	// Offset: 0x8d08458
	// Params: [ Num(0) Size(0x0) ]
	void CloseBtnOnClicked();

	// Object: Function TimiAudioProfiler.TAProfilerPanel.CleanUpOnClicked
	// Flags: [Final|Native|Public]
	// Offset: 0x8d08444
	// Params: [ Num(0) Size(0x0) ]
	void CleanUpOnClicked();
};

} // namespace SDK
