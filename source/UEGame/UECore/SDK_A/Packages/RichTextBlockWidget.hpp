#pragma once

#include "../CoreUObject_classes.hpp"
#include "SlateCore.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: RichTextBlockWidget
// Enums: 0
// Structs: 0
// Classes: 2

struct UDynamicRichTextBlockDecorator;
struct URichTextBox;

// Object: Class RichTextBlockWidget.DynamicRichTextBlockDecorator
// Size: 0x48 (Inherited: 0x28)
struct UDynamicRichTextBlockDecorator : UObject
{
	DEFINE_UE_CLASS_HELPERS(UDynamicRichTextBlockDecorator, "DynamicRichTextBlockDecorator")

	bool bReveal; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	int32_t RevealedIndex; // 0x2C(0x4)
	struct URichTextBox* ParentRichTextBox; // 0x30(0x8)
	struct TArray<struct UObject*> m_UObjectRefArray; // 0x38(0x10)
};

// Object: Class RichTextBlockWidget.RichTextBox
// Size: 0x4F0 (Inherited: 0x150)
struct URichTextBox : UTextLayoutWidget
{
	DEFINE_UE_CLASS_HELPERS(URichTextBox, "RichTextBox")

	struct FText Text; // 0x150(0x18)
	struct FDelegate TextDelegate; // 0x168(0x10)
	struct FSlateFontInfo Font; // 0x178(0x60)
	struct FLinearColor Color; // 0x1D8(0x10)
	struct TArray<struct UDynamicRichTextBlockDecorator*> Decorators; // 0x1E8(0x10)
	struct FMulticastInlineDelegate OnHyperlinkClicked; // 0x1F8(0x10)
	struct FMulticastInlineDelegate OnDynamicTextAppended; // 0x208(0x10)
	struct FText HighLightText; // 0x218(0x18)
	uint8_t Pad_0x230[0x2C0]; // 0x230(0x2C0)

	// Object: Function RichTextBlockWidget.RichTextBox.SetText
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3e50190
	// Params: [ Num(1) Size(0x18) ]
	void SetText(const struct FText& InText);

	// Object: Function RichTextBlockWidget.RichTextBox.SetHighlightText
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3e50084
	// Params: [ Num(1) Size(0x18) ]
	void SetHighlightText(const struct FText& InHighlightText);

	// Object: Function RichTextBlockWidget.RichTextBox.RemoveFrontTextLines
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e4ff1c
	// Params: [ Num(1) Size(0x4) ]
	void RemoveFrontTextLines(int32_t RemovedLineCount);

	// Object: DelegateFunction RichTextBlockWidget.RichTextBox.OnRichTextHyperlinkClicked__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x10) ]
	void OnRichTextHyperlinkClicked__DelegateSignature(const struct TArray<struct FString>& MetaData);

	// Object: DelegateFunction RichTextBlockWidget.RichTextBox.OnDynamicTextAppendedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x10) ]
	void OnDynamicTextAppendedEvent__DelegateSignature(struct FString AppendString);

	// Object: Function RichTextBlockWidget.RichTextBox.ClearAllDisplayText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x92f24fc
	// Params: [ Num(0) Size(0x0) ]
	void ClearAllDisplayText();

	// Object: Function RichTextBlockWidget.RichTextBox.AppendDynamicTextString
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e4ffc4
	// Params: [ Num(2) Size(0x14) ]
	int32_t AppendDynamicTextString(struct FString AppendString);
};

} // namespace SDK
