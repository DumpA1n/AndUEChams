#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "SlateCore.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: RichTextPlugin
// Enums: 0
// Structs: 5
// Classes: 2

struct FSlateBrush;
struct UDataTable;
struct FRichTextMetadata;
struct FRichImageColorRow;
struct FRichTextAnimationRow;
struct FRichTextHyperlinkRow;
struct FToolTipStyle;
struct URichTextBlockExtenderDecorator;
struct UTextExtenderDecorator;

// Object: ScriptStruct RichTextPlugin.RichTextMetadata
// Size: 0x50 (Inherited: 0x0)
struct FRichTextMetadata
{
	struct TMap<struct FString, struct FString> MetaData; // 0x0(0x50)
};

// Object: ScriptStruct RichTextPlugin.RichImageColorRow
// Size: 0x18 (Inherited: 0x8)
struct FRichImageColorRow : FTableRowBase
{
	struct FLinearColor ColorAndOpacity; // 0x8(0x10)
};

// Object: ScriptStruct RichTextPlugin.RichTextAnimationRow
// Size: 0x18 (Inherited: 0x8)
struct FRichTextAnimationRow : FTableRowBase
{
	struct TArray<struct FSlateBrush> AnimationBrush; // 0x8(0x10)
};

// Object: ScriptStruct RichTextPlugin.RichTextHyperlinkRow
// Size: 0x548 (Inherited: 0x8)
struct FRichTextHyperlinkRow : FTableRowBase
{
	struct FHyperlinkStyle HyperlinkStyle; // 0x8(0x540)
};

// Object: ScriptStruct RichTextPlugin.ToolTipStyle
// Size: 0x100 (Inherited: 0x8)
struct FToolTipStyle : FSlateWidgetStyle
{
	struct FSlateFontInfo Font; // 0x8(0x58)
	struct FMargin TextMargin; // 0x60(0x10)
	struct FSlateBrush BorderImage; // 0x70(0x90)
};

// Object: Class RichTextPlugin.RichTextBlockExtenderDecorator
// Size: 0x8E8 (Inherited: 0x28)
struct URichTextBlockExtenderDecorator : URichTextBlockDecorator
{
	DEFINE_UE_CLASS_HELPERS(URichTextBlockExtenderDecorator, "RichTextBlockExtenderDecorator")

	struct FMulticastInlineDelegate OnClicked; // 0x28(0x10)
	struct TSoftObjectPtr<UDataTable> RichTextHyperlinkStyleSet; // 0x38(0x28)
	struct TSoftObjectPtr<UDataTable> RichTextImageSet; // 0x60(0x28)
	struct TSoftObjectPtr<UDataTable> RichTextImageColorSet; // 0x88(0x28)
	struct TSoftObjectPtr<UDataTable> RichTextImageSet_PlayStation; // 0xB0(0x28)
	struct TSoftObjectPtr<UDataTable> RichTextAnimationSet; // 0xD8(0x28)
	float AnimationDefaultUpdateRate; // 0x100(0x4)
	uint8_t Pad_0x104[0x7E4]; // 0x104(0x7E4)

	// Object: DelegateFunction RichTextPlugin.RichTextBlockExtenderDecorator.OnRichTextClickedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x50) ]
	void OnRichTextClickedEvent__DelegateSignature(const struct FRichTextMetadata& InMetadata);

	// Object: Function RichTextPlugin.RichTextBlockExtenderDecorator.OnRichTextClicked
	// Flags: [Event|Protected|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x50) ]
	void OnRichTextClicked(const struct TMap<struct FString, struct FString>& InMetadata);

	// Object: Function RichTextPlugin.RichTextBlockExtenderDecorator.OnGetTips
	// Flags: [Event|Protected|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x68) ]
	struct FText OnGetTips(const struct TMap<struct FString, struct FString>& InMetadata);
};

// Object: Class RichTextPlugin.TextExtenderDecorator
// Size: 0x2F8 (Inherited: 0x28)
struct UTextExtenderDecorator : URichTextBlockDecorator
{
	DEFINE_UE_CLASS_HELPERS(UTextExtenderDecorator, "TextExtenderDecorator")

	struct TSoftObjectPtr<UDataTable> ExtendTextStyleSet; // 0x28(0x28)
	struct UDataTable* ExtendTextStyleSetCache; // 0x50(0x8)
	uint8_t Pad_0x58[0x2A0]; // 0x58(0x2A0)
};

} // namespace SDK
