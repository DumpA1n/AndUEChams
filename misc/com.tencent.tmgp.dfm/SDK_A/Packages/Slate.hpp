#pragma once

#include "../CoreUObject_classes.hpp"
#include "InputCore.hpp"
#include "SlateCore.hpp"

namespace SDK
{

// Package: Slate
// Enums: 19
// Structs: 7
// Classes: 13

struct FVirtualKeyboardOptions;
struct FInputChord;
struct FAnchors;
struct FCustomizedToolMenuEntry;
struct FCustomizedToolMenuNameArray;
struct FCustomizedToolMenuSection;
struct FCustomizedToolMenu;
struct UButtonWidgetStyle;
struct UCheckBoxWidgetStyle;
struct UComboBoxWidgetStyle;
struct UComboButtonWidgetStyle;
struct UEditableTextBoxWidgetStyle;
struct UEditableTextWidgetStyle;
struct UProgressWidgetStyle;
struct UScrollBarWidgetStyle;
struct UScrollBoxWidgetStyle;
struct USlateSettings;
struct USpinBoxWidgetStyle;
struct UTextBlockWidgetStyle;
struct UToolMenuBase;

// Object: Enum Slate.ECustomTextFlowPolicy
enum class ECustomTextFlowPolicy : uint8_t
{
	DefaultTextFlow = 0,
	DisableTextFlow = 1,
	TextFlowForceLTR = 2,
	TextFlowForceRTL = 3,
	ECustomTextFlowPolicy_MAX = 4
};

// Object: Enum Slate.ETextJustify
enum class ETextJustify : uint8_t
{
	Left = 0,
	Center = 1,
	Right = 2,
	ETextJustify_MAX = 3
};

// Object: Enum Slate.ETextFlowDirection
enum class ETextFlowDirection : uint8_t
{
	Auto = 0,
	LeftToRight = 1,
	RightToLeft = 2,
	ETextFlowDirection_MAX = 3
};

// Object: Enum Slate.EVirtualKeyboardDismissAction
enum class EVirtualKeyboardDismissAction : uint8_t
{
	TextChangeOnDismiss = 0,
	TextCommitOnAccept = 1,
	TextCommitOnDismiss = 2,
	EVirtualKeyboardDismissAction_MAX = 3
};

// Object: Enum Slate.EVirtualKeyboardTrigger
enum class EVirtualKeyboardTrigger : uint8_t
{
	OnFocusByPointer = 0,
	OnAllFocusEvents = 1,
	EVirtualKeyboardTrigger_MAX = 2
};

// Object: Enum Slate.ETextVerticalJustify
enum class ETextVerticalJustify : uint8_t
{
	Top = 0,
	Middle = 1,
	Bottom = 2,
	ETextVerticalJustify_MAX = 3
};

// Object: Enum Slate.ETextWrappingPolicy
enum class ETextWrappingPolicy : uint8_t
{
	DefaultWrapping = 0,
	AllowPerCharacterWrapping = 1,
	ETextWrappingPolicy_MAX = 2
};

// Object: Enum Slate.EDescendantScrollDestination
enum class EDescendantScrollDestination : uint8_t
{
	IntoView = 0,
	TopOrLeft = 1,
	Center = 2,
	EDescendantScrollDestination_MAX = 3
};

// Object: Enum Slate.EStretchDirection
enum class EStretchDirection : uint8_t
{
	Both = 0,
	DownOnly = 1,
	UpOnly = 2,
	EStretchDirection_MAX = 3
};

// Object: Enum Slate.EStretch
enum class EStretch : uint8_t
{
	None = 0,
	Fill = 1,
	ScaleToFit = 2,
	ScaleToFitX = 3,
	ScaleToFitY = 4,
	ScaleToFill = 5,
	ScaleBySafeZone = 6,
	UserSpecified = 7,
	EStretch_MAX = 8
};

// Object: Enum Slate.ETableViewMode
enum class ETableViewMode : uint8_t
{
	List = 0,
	Tile = 1,
	Tree = 2,
	ETableViewMode_MAX = 3
};

// Object: Enum Slate.ESelectionMode
enum class ESelectionMode : uint8_t
{
	None = 0,
	Single = 1,
	SingleToggle = 2,
	Multi = 3,
	ESelectionMode_MAX = 4
};

// Object: Enum Slate.EMultiBlockType
enum class EMultiBlockType : uint8_t
{
	None = 0,
	ButtonRow = 1,
	EditableText = 2,
	Heading = 3,
	MenuEntry = 4,
	MenuSeparator = 5,
	ToolBarButton = 6,
	ToolBarComboButton = 7,
	ToolBarSeparator = 8,
	Widget = 9,
	EMultiBlockType_MAX = 10
};

// Object: Enum Slate.EMultiBoxType
enum class EMultiBoxType : uint8_t
{
	MenuBar = 0,
	ToolBar = 1,
	VerticalToolBar = 2,
	Menu = 3,
	ButtonRow = 4,
	ToolMenuBar = 5,
	EMultiBoxType_MAX = 6
};

// Object: Enum Slate.EProgressBarFillType
enum class EProgressBarFillType : uint8_t
{
	LeftToRight = 0,
	RightToLeft = 1,
	FillFromCenter = 2,
	TopToBottom = 3,
	BottomToTop = 4,
	Bidirectional = 5,
	EProgressBarFillType_MAX = 6
};

// Object: Enum Slate.EListItemAlignment
enum class EListItemAlignment : uint8_t
{
	EvenlyDistributed = 0,
	EvenlySize = 1,
	EvenlyWide = 2,
	LeftAligned = 3,
	RightAligned = 4,
	CenterAligned = 5,
	Fill = 6,
	EListItemAlignment_MAX = 7
};

// Object: Enum Slate.ECustomizedToolMenuVisibility
enum class ECustomizedToolMenuVisibility : uint8_t
{
	None = 0,
	Visible = 1,
	Hidden = 2,
	ECustomizedToolMenuVisibility_MAX = 3
};

// Object: Enum Slate.EMultipleKeyBindingIndex
enum class EMultipleKeyBindingIndex : uint8_t
{
	Primary = 0,
	Secondary = 1,
	NumChords = 2,
	EMultipleKeyBindingIndex_MAX = 3
};

// Object: Enum Slate.EUserInterfaceActionType
enum class EUserInterfaceActionType : uint8_t
{
	None = 0,
	Button = 1,
	ToggleButton = 2,
	RadioButton = 3,
	Check = 4,
	CollapsedButton = 5,
	EUserInterfaceActionType_MAX = 6
};

// Object: ScriptStruct Slate.VirtualKeyboardOptions
// Size: 0x2 (Inherited: 0x0)
struct FVirtualKeyboardOptions
{
	uint8_t bEnableAutocorrect : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bEnableSendButton : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
};

// Object: ScriptStruct Slate.InputChord
// Size: 0x20 (Inherited: 0x0)
struct FInputChord
{
	struct FKey Key; // 0x0(0x18)
	uint8_t bShift : 1; // 0x18(0x1), Mask(0x1)
	uint8_t bCtrl : 1; // 0x18(0x1), Mask(0x2)
	uint8_t bAlt : 1; // 0x18(0x1), Mask(0x4)
	uint8_t bCmd : 1; // 0x18(0x1), Mask(0x8)
	uint8_t BitPad_0x18_4 : 4; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: ScriptStruct Slate.Anchors
// Size: 0x10 (Inherited: 0x0)
struct FAnchors
{
	struct FVector2D Minimum; // 0x0(0x8)
	struct FVector2D Maximum; // 0x8(0x8)
};

// Object: ScriptStruct Slate.CustomizedToolMenuEntry
// Size: 0x4 (Inherited: 0x0)
struct FCustomizedToolMenuEntry
{
	ECustomizedToolMenuVisibility Visibility; // 0x0(0x4)
};

// Object: ScriptStruct Slate.CustomizedToolMenuNameArray
// Size: 0x10 (Inherited: 0x0)
struct FCustomizedToolMenuNameArray
{
	struct TArray<struct FName> names; // 0x0(0x10)
};

// Object: ScriptStruct Slate.CustomizedToolMenuSection
// Size: 0x4 (Inherited: 0x0)
struct FCustomizedToolMenuSection
{
	ECustomizedToolMenuVisibility Visibility; // 0x0(0x4)
};

// Object: ScriptStruct Slate.CustomizedToolMenu
// Size: 0x108 (Inherited: 0x0)
struct FCustomizedToolMenu
{
	struct FName Name; // 0x0(0x8)
	struct TMap<struct FName, struct FCustomizedToolMenuEntry> Entries; // 0x8(0x50)
	struct TMap<struct FName, struct FCustomizedToolMenuSection> Sections; // 0x58(0x50)
	struct TMap<struct FName, struct FCustomizedToolMenuNameArray> EntryOrder; // 0xA8(0x50)
	struct TArray<struct FName> SectionOrder; // 0xF8(0x10)
};

// Object: Class Slate.ButtonWidgetStyle
// Size: 0x2C8 (Inherited: 0x30)
struct UButtonWidgetStyle : USlateWidgetStyleContainerBase
{
	struct FButtonStyle ButtonStyle; // 0x30(0x298)
	DEFINE_UE_CLASS_HELPERS(UButtonWidgetStyle, "ButtonWidgetStyle")

};

// Object: Class Slate.CheckBoxWidgetStyle
// Size: 0x5F8 (Inherited: 0x30)
struct UCheckBoxWidgetStyle : USlateWidgetStyleContainerBase
{
	struct FCheckBoxStyle CheckBoxStyle; // 0x30(0x5C8)
	DEFINE_UE_CLASS_HELPERS(UCheckBoxWidgetStyle, "CheckBoxWidgetStyle")

};

// Object: Class Slate.ComboBoxWidgetStyle
// Size: 0x438 (Inherited: 0x30)
struct UComboBoxWidgetStyle : USlateWidgetStyleContainerBase
{
	struct FComboBoxStyle ComboBoxStyle; // 0x30(0x408)
	DEFINE_UE_CLASS_HELPERS(UComboBoxWidgetStyle, "ComboBoxWidgetStyle")

};

// Object: Class Slate.ComboButtonWidgetStyle
// Size: 0x400 (Inherited: 0x30)
struct UComboButtonWidgetStyle : USlateWidgetStyleContainerBase
{
	struct FComboButtonStyle ComboButtonStyle; // 0x30(0x3D0)
	DEFINE_UE_CLASS_HELPERS(UComboButtonWidgetStyle, "ComboButtonWidgetStyle")

};

// Object: Class Slate.EditableTextBoxWidgetStyle
// Size: 0x890 (Inherited: 0x30)
struct UEditableTextBoxWidgetStyle : USlateWidgetStyleContainerBase
{
	struct FEditableTextBoxStyle EditableTextBoxStyle; // 0x30(0x860)
	DEFINE_UE_CLASS_HELPERS(UEditableTextBoxWidgetStyle, "EditableTextBoxWidgetStyle")

};

// Object: Class Slate.EditableTextWidgetStyle
// Size: 0x268 (Inherited: 0x30)
struct UEditableTextWidgetStyle : USlateWidgetStyleContainerBase
{
	struct FEditableTextStyle EditableTextStyle; // 0x30(0x238)
	DEFINE_UE_CLASS_HELPERS(UEditableTextWidgetStyle, "EditableTextWidgetStyle")

};

// Object: Class Slate.ProgressWidgetStyle
// Size: 0x1E8 (Inherited: 0x30)
struct UProgressWidgetStyle : USlateWidgetStyleContainerBase
{
	struct FProgressBarStyle ProgressBarStyle; // 0x30(0x1B8)
	DEFINE_UE_CLASS_HELPERS(UProgressWidgetStyle, "ProgressWidgetStyle")

};

// Object: Class Slate.ScrollBarWidgetStyle
// Size: 0x548 (Inherited: 0x30)
struct UScrollBarWidgetStyle : USlateWidgetStyleContainerBase
{
	struct FScrollBarStyle ScrollBarStyle; // 0x30(0x518)
	DEFINE_UE_CLASS_HELPERS(UScrollBarWidgetStyle, "ScrollBarWidgetStyle")

};

// Object: Class Slate.ScrollBoxWidgetStyle
// Size: 0x278 (Inherited: 0x30)
struct UScrollBoxWidgetStyle : USlateWidgetStyleContainerBase
{
	struct FScrollBoxStyle ScrollBoxStyle; // 0x30(0x248)
	DEFINE_UE_CLASS_HELPERS(UScrollBoxWidgetStyle, "ScrollBoxWidgetStyle")

};

// Object: Class Slate.SlateSettings
// Size: 0x30 (Inherited: 0x28)
struct USlateSettings : UObject
{
	uint8_t bExplicitCanvasChildZOrder : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	DEFINE_UE_CLASS_HELPERS(USlateSettings, "SlateSettings")

};

// Object: Class Slate.SpinBoxWidgetStyle
// Size: 0x340 (Inherited: 0x30)
struct USpinBoxWidgetStyle : USlateWidgetStyleContainerBase
{
	struct FSpinBoxStyle SpinBoxStyle; // 0x30(0x310)
	DEFINE_UE_CLASS_HELPERS(USpinBoxWidgetStyle, "SpinBoxWidgetStyle")

};

// Object: Class Slate.TextBlockWidgetStyle
// Size: 0x2C0 (Inherited: 0x30)
struct UTextBlockWidgetStyle : USlateWidgetStyleContainerBase
{
	struct FTextBlockStyle TextBlockStyle; // 0x30(0x290)
	DEFINE_UE_CLASS_HELPERS(UTextBlockWidgetStyle, "TextBlockWidgetStyle")

};

// Object: Class Slate.ToolMenuBase
// Size: 0x28 (Inherited: 0x28)
struct UToolMenuBase : UObject
{	DEFINE_UE_CLASS_HELPERS(UToolMenuBase, "ToolMenuBase")

};

} // namespace SDK
