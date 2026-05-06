#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: MFNumKeyboard
// Enums: 0
// Structs: 0
// Classes: 2

struct FGeometry;
struct UUserWidget;
struct UMFNumKeyboardWidget;
struct UNumKeyboardComponent;

// Object: Class MFNumKeyboard.MFNumKeyboardWidget
// Size: 0x2B0 (Inherited: 0x290)
struct UMFNumKeyboardWidget : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UMFNumKeyboardWidget, "MFNumKeyboardWidget")

	uint8_t Pad_0x290[0x20]; // 0x290(0x20)

	// Object: Function MFNumKeyboard.MFNumKeyboardWidget.Show
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x39) ]
	void Show(struct FGeometry TextGeom, bool bShowNumKeyboardMillion);

	// Object: Function MFNumKeyboard.MFNumKeyboardWidget.SetText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3eb5c9c
	// Params: [ Num(1) Size(0x10) ]
	void SetText(struct FString Text);

	// Object: Function MFNumKeyboard.MFNumKeyboardWidget.OnTouch
	// Flags: [Event|Public|HasDefaults|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x10) ]
	void OnTouch(uint8_t FingerIndex, struct FVector Location);

	// Object: Function MFNumKeyboard.MFNumKeyboardWidget.OnHide
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3eb5e50
	// Params: [ Num(0) Size(0x0) ]
	void OnHide();

	// Object: Function MFNumKeyboard.MFNumKeyboardWidget.GetText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3eb5db4
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetText();

	// Object: Function MFNumKeyboard.MFNumKeyboardWidget.DeleteKeyChar
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3eb5e64
	// Params: [ Num(0) Size(0x0) ]
	void DeleteKeyChar();

	// Object: Function MFNumKeyboard.MFNumKeyboardWidget.ClearText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3eb5da0
	// Params: [ Num(0) Size(0x0) ]
	void ClearText();

	// Object: Function MFNumKeyboard.MFNumKeyboardWidget.AddkeyChar
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3eb5e78
	// Params: [ Num(1) Size(0x10) ]
	void AddkeyChar(struct FString S);
};

// Object: Class MFNumKeyboard.NumKeyboardComponent
// Size: 0xF0 (Inherited: 0xE0)
struct UNumKeyboardComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UNumKeyboardComponent, "NumKeyboardComponent")

	struct UUserWidget* WidgetClass; // 0xE0(0x8)
	struct UMFNumKeyboardWidget* KeyboardPanel; // 0xE8(0x8)
};

} // namespace SDK
