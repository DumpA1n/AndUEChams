#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: SlateCore
// Enums: 37
// Structs: 48
// Classes: 7

struct FMargin;
struct FSlateColor;
struct FSlateBrush;
struct FGeometry;
struct FInputEvent;
struct FPointerEvent;
struct FCharacterEvent;
struct FKeyEvent;
struct FNavigationEvent;
struct FAnalogInputEvent;
struct FFontOutlineSettings;
struct FSlateFontInfo;
struct FSlateWidgetStyle;
struct FTableRowStyle;
struct FSlateSound;
struct FButtonStyle;
struct FComboButtonStyle;
struct FComboBoxStyle;
struct FEditableTextStyle;
struct FScrollBarStyle;
struct FEditableTextBoxStyle;
struct FTextBlockStyle;
struct FSpinBoxStyle;
struct FCheckBoxStyle;
struct FMotionEvent;
struct FHyperlinkStyle;
struct FTypeface;
struct FCompositeFallbackFont;
struct FCompositeFont;
struct FFontData;
struct FTypefaceEntry;
struct FCompositeSubFont;
struct FCaptureLostEvent;
struct FFocusEvent;
struct FWindowStyle;
struct FScrollBorderStyle;
struct FScrollBoxStyle;
struct FDockTabStyle;
struct FSplitterStyle;
struct FTableColumnHeaderStyle;
struct FHeaderRowStyle;
struct FInlineTextImageStyle;
struct FSliderStyle;
struct FVolumeControlStyle;
struct FSearchBoxStyle;
struct FExpandableAreaStyle;
struct FProgressBarStyle;
struct FInlineEditableTextBlockStyle;
struct UFontBulkData;
struct IFontFaceInterface;
struct IFontProviderInterface;
struct USlateTypes;
struct USlateWidgetStyleAsset;
struct USlateWidgetStyleContainerBase;
struct ISlateWidgetStyleContainerInterface;

// Object: Enum SlateCore.ESlateBrushImageType
enum class ESlateBrushImageType : uint8_t
{
	NoImage = 0,
	FullColor = 1,
	Linear = 2,
	ESlateBrushImageType_MAX = 3
};

// Object: Enum SlateCore.ESlateBrushMirrorType
enum class ESlateBrushMirrorType : uint8_t
{
	NoMirror = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushMirrorType_MAX = 4
};

// Object: Enum SlateCore.ESlateBrushTileType
enum class ESlateBrushTileType : uint8_t
{
	NoTile = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushTileType_MAX = 4
};

// Object: Enum SlateCore.ESlateBrushDrawType
enum class ESlateBrushDrawType : uint8_t
{
	NoDrawType = 0,
	Box = 1,
	Border = 2,
	Image = 3,
	ESlateBrushDrawType_MAX = 4
};

// Object: Enum SlateCore.ESlateColorStylingMode
enum class ESlateColorStylingMode : uint8_t
{
	UseColor_Specified = 0,
	UseColor_Specified_Link = 1,
	UseColor_Foreground = 2,
	UseColor_Foreground_Subdued = 3,
	UseColor_MAX = 4
};

// Object: Enum SlateCore.EUINavigation
enum class EUINavigation : uint8_t
{
	Left = 0,
	Right = 1,
	Up = 2,
	Down = 3,
	Next = 4,
	Previous = 5,
	Num = 6,
	Invalid = 7,
	EUINavigation_MAX = 8
};

// Object: Enum SlateCore.ECheckBoxState
enum class ECheckBoxState : uint8_t
{
	Unchecked = 0,
	Checked = 1,
	Undetermined = 2,
	ECheckBoxState_MAX = 3
};

// Object: Enum SlateCore.EWidgetClipping
enum class EWidgetClipping : uint8_t
{
	Inherit = 0,
	ClipToBounds = 1,
	ClipToBoundsWithoutIntersecting = 2,
	ClipToBoundsAlways = 3,
	OnDemand = 4,
	EWidgetClipping_MAX = 5
};

// Object: Enum SlateCore.EUINavigationRule
enum class EUINavigationRule : uint8_t
{
	Escape = 0,
	Explicit = 1,
	Wrap = 2,
	Stop = 3,
	Custom = 4,
	CustomBoundary = 5,
	Invalid = 6,
	EUINavigationRule_MAX = 7
};

// Object: Enum SlateCore.EFlowDirectionPreference
enum class EFlowDirectionPreference : uint8_t
{
	Inherit = 0,
	Culture = 1,
	LeftToRight = 2,
	RightToLeft = 3,
	EFlowDirectionPreference_MAX = 4
};

// Object: Enum SlateCore.EMaskGeometryType
enum class EMaskGeometryType : uint8_t
{
	None = 0,
	Rectangle = 1,
	Circle = 2,
	EMaskGeometryType_MAX = 3
};

// Object: Enum SlateCore.EColorVisionDeficiency
enum class EColorVisionDeficiency : uint8_t
{
	NormalVision = 0,
	Deuteranope = 1,
	Protanope = 2,
	Tritanope = 3,
	EColorVisionDeficiency_MAX = 4
};

// Object: Enum SlateCore.ESelectInfo
enum class ESelectInfo : uint8_t
{
	OnKeyPress = 0,
	OnNavigation = 1,
	OnMouseClick = 2,
	Direct = 3,
	ESelectInfo_MAX = 4
};

// Object: Enum SlateCore.ETextCommit
enum class ETextCommit : uint8_t
{
	Default = 0,
	OnEnter = 1,
	OnUserMovedFocus = 2,
	OnCleared = 3,
	ETextCommit_MAX = 4
};

// Object: Enum SlateCore.ETextShapingMethod
enum class ETextShapingMethod : uint8_t
{
	Auto = 0,
	KerningOnly = 1,
	FullShaping = 2,
	ETextShapingMethod_MAX = 3
};

// Object: Enum SlateCore.EMenuPlacement
enum class EMenuPlacement : uint8_t
{
	MenuPlacement_BelowAnchor = 0,
	MenuPlacement_CenteredBelowAnchor = 1,
	MenuPlacement_BelowRightAnchor = 2,
	MenuPlacement_ComboBox = 3,
	MenuPlacement_ComboBoxRight = 4,
	MenuPlacement_MenuRight = 5,
	MenuPlacement_AboveAnchor = 6,
	MenuPlacement_CenteredAboveAnchor = 7,
	MenuPlacement_AboveRightAnchor = 8,
	MenuPlacement_MenuLeft = 9,
	MenuPlacement_Center = 10,
	MenuPlacement_RightLeftCenter = 11,
	MenuPlacement_MatchBottomLeft = 12,
	MenuPlacement_MAX = 13
};

// Object: Enum SlateCore.ESlateCheckBoxType
enum class ESlateCheckBoxType : uint8_t
{
	CheckBox = 0,
	ToggleButton = 1,
	ESlateCheckBoxType_MAX = 2
};

// Object: Enum SlateCore.EFontLayoutMethod
enum class EFontLayoutMethod : uint8_t
{
	Metrics = 0,
	BoundingBox = 1,
	EFontLayoutMethod_MAX = 2
};

// Object: Enum SlateCore.EFontLoadingPolicy
enum class EFontLoadingPolicy : uint8_t
{
	LazyLoad = 0,
	Stream = 1,
	Inline = 2,
	MemoryMapping = 3,
	EFontLoadingPolicy_MAX = 4
};

// Object: Enum SlateCore.EFontHinting
enum class EFontHinting : uint8_t
{
	Default = 0,
	Auto = 1,
	AutoLight = 2,
	Monochrome = 3,
	None = 4,
	EFontHinting_MAX = 5
};

// Object: Enum SlateCore.EFocusCause
enum class EFocusCause : uint8_t
{
	Mouse = 0,
	Navigation = 1,
	SetDirectly = 2,
	Cleared = 3,
	OtherWidgetLostFocus = 4,
	WindowActivate = 5,
	EFocusCause_MAX = 6
};

// Object: Enum SlateCore.ESlateDebuggingFocusEvent
enum class ESlateDebuggingFocusEvent : uint8_t
{
	FocusChanging = 0,
	FocusLost = 1,
	FocusReceived = 2,
	MAX = 3
};

// Object: Enum SlateCore.ESlateDebuggingNavigationMethod
enum class ESlateDebuggingNavigationMethod : uint8_t
{
	Unknown = 0,
	Explicit = 1,
	CustomDelegateBound = 2,
	CustomDelegateUnbound = 3,
	NextOrPrevious = 4,
	HitTestGrid = 5,
	ESlateDebuggingNavigationMethod_MAX = 6
};

// Object: Enum SlateCore.ESlateDebuggingStateChangeEvent
enum class ESlateDebuggingStateChangeEvent : uint8_t
{
	MouseCaptureGained = 0,
	MouseCaptureLost = 1,
	ESlateDebuggingStateChangeEvent_MAX = 2
};

// Object: Enum SlateCore.ESlateDebuggingInputEvent
enum class ESlateDebuggingInputEvent : uint8_t
{
	MouseMove = 0,
	MouseEnter = 1,
	MouseLeave = 2,
	PreviewMouseButtonDown = 3,
	MouseButtonDown = 4,
	MouseButtonUp = 5,
	MouseButtonDoubleClick = 6,
	MouseWheel = 7,
	TouchStart = 8,
	TouchEnd = 9,
	TouchForceChanged = 10,
	TouchFirstMove = 11,
	TouchMoved = 12,
	DragDetected = 13,
	DragEnter = 14,
	DragLeave = 15,
	DragOver = 16,
	DragDrop = 17,
	DropMessage = 18,
	PreviewKeyDown = 19,
	KeyDown = 20,
	KeyUp = 21,
	KeyChar = 22,
	AnalogInput = 23,
	TouchGesture = 24,
	MotionDetected = 25,
	MAX = 26
};

// Object: Enum SlateCore.EScrollDirection
enum class EScrollDirection : uint8_t
{
	Scroll_Down = 0,
	Scroll_Up = 1,
	Scroll_MAX = 2
};

// Object: Enum SlateCore.EOrientation
enum class EOrientation : uint8_t
{
	Orient_Horizontal = 0,
	Orient_Vertical = 1,
	Orient_MAX = 2
};

// Object: Enum SlateCore.EVerticalAlignment
enum class EVerticalAlignment : uint8_t
{
	VAlign_Fill = 0,
	VAlign_Top = 1,
	VAlign_Center = 2,
	VAlign_Bottom = 3,
	VAlign_MAX = 4
};

// Object: Enum SlateCore.EHorizontalAlignment
enum class EHorizontalAlignment : uint8_t
{
	HAlign_Fill = 0,
	HAlign_Left = 1,
	HAlign_Center = 2,
	HAlign_Right = 3,
	HAlign_MAX = 4
};

// Object: Enum SlateCore.ENavigationGenesis
enum class ENavigationGenesis : uint8_t
{
	Keyboard = 0,
	Controller = 1,
	User = 2,
	ENavigationGenesis_MAX = 3
};

// Object: Enum SlateCore.ENavigationSource
enum class ENavigationSource : uint8_t
{
	FocusedWidget = 0,
	WidgetUnderCursor = 1,
	ENavigationSource_MAX = 2
};

// Object: Enum SlateCore.EUINavigationAction
enum class EUINavigationAction : uint8_t
{
	Accept = 0,
	Back = 1,
	Num = 2,
	Invalid = 3,
	EUINavigationAction_MAX = 4
};

// Object: Enum SlateCore.EButtonPressMethod
enum class EButtonPressMethod : uint8_t
{
	DownAndUp = 0,
	ButtonPress = 1,
	ButtonRelease = 2,
	EButtonPressMethod_MAX = 3
};

// Object: Enum SlateCore.EButtonTouchMethod
enum class EButtonTouchMethod : uint8_t
{
	DownAndUp = 0,
	Down = 1,
	PreciseTap = 2,
	EButtonTouchMethod_MAX = 3
};

// Object: Enum SlateCore.EButtonClickMethod
enum class EButtonClickMethod : uint8_t
{
	DownAndUp = 0,
	MouseDown = 1,
	MouseUp = 2,
	PreciseClick = 3,
	EButtonClickMethod_MAX = 4
};

// Object: Enum SlateCore.ESlateParentWindowSearchMethod
enum class ESlateParentWindowSearchMethod : uint8_t
{
	ActiveWindow = 0,
	MainWindow = 1,
	ESlateParentWindowSearchMethod_MAX = 2
};

// Object: Enum SlateCore.EConsumeMouseWheel
enum class EConsumeMouseWheel : uint8_t
{
	WhenScrollingPossible = 0,
	Always = 1,
	Never = 2,
	EConsumeMouseWheel_MAX = 3
};

// Object: ScriptStruct SlateCore.Margin
// Size: 0x10 (Inherited: 0x0)
struct FMargin
{
	float Left; // 0x0(0x4)
	float Top; // 0x4(0x4)
	float Right; // 0x8(0x4)
	float Bottom; // 0xC(0x4)
};

// Object: ScriptStruct SlateCore.SlateColor
// Size: 0x28 (Inherited: 0x0)
struct FSlateColor
{
	struct FLinearColor SpecifiedColor; // 0x0(0x10)
	uint8_t ColorUseRule; // 0x10(0x1)
	uint8_t Pad_0x11[0x17]; // 0x11(0x17)
};

// Object: ScriptStruct SlateCore.SlateBrush
// Size: 0x90 (Inherited: 0x0)
struct FSlateBrush
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct FVector2D ImageSize; // 0x8(0x8)
	struct FMargin Margin; // 0x10(0x10)
	struct FSlateColor TintColor; // 0x20(0x28)
	struct UObject* ResourceObject; // 0x48(0x8)
	struct FName ResourceName; // 0x50(0x8)
	struct FBox2D UVRegion; // 0x58(0x14)
	uint8_t DrawAs; // 0x6C(0x1)
	uint8_t Tiling; // 0x6D(0x1)
	uint8_t Mirroring; // 0x6E(0x1)
	uint8_t ImageType; // 0x6F(0x1)
	uint8_t UseImageUV : 1; // 0x70(0x1), Mask(0x1)
	uint8_t IsDrawAsCircle : 1; // 0x70(0x1), Mask(0x2)
	uint8_t BitPad_0x70_2 : 6; // 0x70(0x1)
	uint8_t Pad_0x71[0x17]; // 0x71(0x17)
	uint8_t bIsDynamicallyLoaded : 1; // 0x88(0x1), Mask(0x1)
	uint8_t bHasUObject : 1; // 0x88(0x1), Mask(0x2)
	uint8_t BitPad_0x88_2 : 6; // 0x88(0x1)
	uint8_t Pad_0x89[0x7]; // 0x89(0x7)
};

// Object: ScriptStruct SlateCore.Geometry
// Size: 0x38 (Inherited: 0x0)
struct FGeometry
{
	uint8_t Pad_0x0[0x38]; // 0x0(0x38)
};

// Object: ScriptStruct SlateCore.InputEvent
// Size: 0x18 (Inherited: 0x0)
struct FInputEvent
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct SlateCore.PointerEvent
// Size: 0x70 (Inherited: 0x18)
struct FPointerEvent : FInputEvent
{
	uint8_t Pad_0x18[0x58]; // 0x18(0x58)
};

// Object: ScriptStruct SlateCore.CharacterEvent
// Size: 0x20 (Inherited: 0x18)
struct FCharacterEvent : FInputEvent
{
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
};

// Object: ScriptStruct SlateCore.KeyEvent
// Size: 0x38 (Inherited: 0x18)
struct FKeyEvent : FInputEvent
{
	uint8_t Pad_0x18[0x20]; // 0x18(0x20)
};

// Object: ScriptStruct SlateCore.NavigationEvent
// Size: 0x20 (Inherited: 0x18)
struct FNavigationEvent : FInputEvent
{
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
};

// Object: ScriptStruct SlateCore.AnalogInputEvent
// Size: 0x40 (Inherited: 0x38)
struct FAnalogInputEvent : FKeyEvent
{
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
};

// Object: ScriptStruct SlateCore.FontOutlineSettings
// Size: 0x20 (Inherited: 0x0)
struct FFontOutlineSettings
{
	int32_t OutlineSize; // 0x0(0x4)
	bool bSeparateFillAlpha; // 0x4(0x1)
	bool bApplyOutlineToDropShadows; // 0x5(0x1)
	uint8_t Pad_0x6[0x2]; // 0x6(0x2)
	struct UObject* OutlineMaterial; // 0x8(0x8)
	struct FLinearColor OutlineColor; // 0x10(0x10)
};

// Object: ScriptStruct SlateCore.SlateFontInfo
// Size: 0x60 (Inherited: 0x0)
struct FSlateFontInfo
{
	struct UObject* FontObject; // 0x0(0x8)
	struct UObject* FontMaterial; // 0x8(0x8)
	struct FFontOutlineSettings OutlineSettings; // 0x10(0x20)
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	struct FName TypefaceFontName; // 0x40(0x8)
	int32_t Size; // 0x48(0x4)
	int32_t Size_Oversea; // 0x4C(0x4)
	int32_t LetterSpacing; // 0x50(0x4)
	int32_t LetterSpacing_Oversea; // 0x54(0x4)
	uint8_t Pad_0x58[0x8]; // 0x58(0x8)
};

// Object: ScriptStruct SlateCore.SlateWidgetStyle
// Size: 0x8 (Inherited: 0x0)
struct FSlateWidgetStyle
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct SlateCore.TableRowStyle
// Size: 0x838 (Inherited: 0x8)
struct FTableRowStyle : FSlateWidgetStyle
{
	struct FSlateBrush SelectorFocusedBrush; // 0x8(0x90)
	struct FSlateBrush ActiveHoveredBrush; // 0x98(0x90)
	struct FSlateBrush ActiveBrush; // 0x128(0x90)
	struct FSlateBrush InactiveHoveredBrush; // 0x1B8(0x90)
	struct FSlateBrush InactiveBrush; // 0x248(0x90)
	struct FSlateBrush EvenRowBackgroundHoveredBrush; // 0x2D8(0x90)
	struct FSlateBrush EvenRowBackgroundBrush; // 0x368(0x90)
	struct FSlateBrush OddRowBackgroundHoveredBrush; // 0x3F8(0x90)
	struct FSlateBrush OddRowBackgroundBrush; // 0x488(0x90)
	struct FSlateColor TextColor; // 0x518(0x28)
	struct FSlateColor SelectedTextColor; // 0x540(0x28)
	struct FSlateBrush DropIndicator_Above; // 0x568(0x90)
	struct FSlateBrush DropIndicator_Onto; // 0x5F8(0x90)
	struct FSlateBrush DropIndicator_Below; // 0x688(0x90)
	struct FSlateBrush ActiveHighlightedBrush; // 0x718(0x90)
	struct FSlateBrush InactiveHighlightedBrush; // 0x7A8(0x90)
};

// Object: ScriptStruct SlateCore.SlateSound
// Size: 0x18 (Inherited: 0x0)
struct FSlateSound
{
	struct UObject* ResourceObject; // 0x0(0x8)
	uint8_t Pad_0x8[0x10]; // 0x8(0x10)
};

// Object: ScriptStruct SlateCore.ButtonStyle
// Size: 0x298 (Inherited: 0x8)
struct FButtonStyle : FSlateWidgetStyle
{
	struct FSlateBrush Normal; // 0x8(0x90)
	struct FSlateBrush Hovered; // 0x98(0x90)
	struct FSlateBrush Pressed; // 0x128(0x90)
	struct FSlateBrush Disabled; // 0x1B8(0x90)
	struct FMargin NormalPadding; // 0x248(0x10)
	struct FMargin PressedPadding; // 0x258(0x10)
	struct FSlateSound PressedSlateSound; // 0x268(0x18)
	struct FSlateSound HoveredSlateSound; // 0x280(0x18)
};

// Object: ScriptStruct SlateCore.ComboButtonStyle
// Size: 0x3E8 (Inherited: 0x8)
struct FComboButtonStyle : FSlateWidgetStyle
{
	struct FButtonStyle ButtonStyle; // 0x8(0x298)
	struct FSlateBrush DownArrowImage; // 0x2A0(0x90)
	struct FVector2D ShadowOffset; // 0x330(0x8)
	struct FLinearColor ShadowColorAndOpacity; // 0x338(0x10)
	struct FSlateBrush MenuBorderBrush; // 0x348(0x90)
	struct FMargin MenuBorderPadding; // 0x3D8(0x10)
};

// Object: ScriptStruct SlateCore.ComboBoxStyle
// Size: 0x420 (Inherited: 0x8)
struct FComboBoxStyle : FSlateWidgetStyle
{
	struct FComboButtonStyle ComboButtonStyle; // 0x8(0x3E8)
	struct FSlateSound PressedSlateSound; // 0x3F0(0x18)
	struct FSlateSound SelectionChangeSlateSound; // 0x408(0x18)
};

// Object: ScriptStruct SlateCore.EditableTextStyle
// Size: 0x240 (Inherited: 0x8)
struct FEditableTextStyle : FSlateWidgetStyle
{
	struct FSlateFontInfo Font; // 0x8(0x60)
	struct FSlateColor ColorAndOpacity; // 0x68(0x28)
	struct FSlateBrush BackgroundImageSelected; // 0x90(0x90)
	struct FSlateBrush BackgroundImageComposing; // 0x120(0x90)
	struct FSlateBrush CaretImage; // 0x1B0(0x90)
};

// Object: ScriptStruct SlateCore.ScrollBarStyle
// Size: 0x518 (Inherited: 0x8)
struct FScrollBarStyle : FSlateWidgetStyle
{
	struct FSlateBrush HorizontalBackgroundImage; // 0x8(0x90)
	struct FSlateBrush VerticalBackgroundImage; // 0x98(0x90)
	struct FSlateBrush VerticalTopSlotImage; // 0x128(0x90)
	struct FSlateBrush HorizontalTopSlotImage; // 0x1B8(0x90)
	struct FSlateBrush VerticalBottomSlotImage; // 0x248(0x90)
	struct FSlateBrush HorizontalBottomSlotImage; // 0x2D8(0x90)
	struct FSlateBrush NormalThumbImage; // 0x368(0x90)
	struct FSlateBrush HoveredThumbImage; // 0x3F8(0x90)
	struct FSlateBrush DraggedThumbImage; // 0x488(0x90)
};

// Object: ScriptStruct SlateCore.EditableTextBoxStyle
// Size: 0x868 (Inherited: 0x8)
struct FEditableTextBoxStyle : FSlateWidgetStyle
{
	struct FSlateBrush BackgroundImageNormal; // 0x8(0x90)
	struct FSlateBrush BackgroundImageHovered; // 0x98(0x90)
	struct FSlateBrush BackgroundImageFocused; // 0x128(0x90)
	struct FSlateBrush BackgroundImageReadOnly; // 0x1B8(0x90)
	struct FMargin Padding; // 0x248(0x10)
	struct FSlateFontInfo Font; // 0x258(0x60)
	struct FSlateColor ForegroundColor; // 0x2B8(0x28)
	struct FSlateColor BackgroundColor; // 0x2E0(0x28)
	struct FSlateColor ReadOnlyForegroundColor; // 0x308(0x28)
	struct FMargin HScrollBarPadding; // 0x330(0x10)
	struct FMargin VScrollBarPadding; // 0x340(0x10)
	struct FScrollBarStyle ScrollBarStyle; // 0x350(0x518)
};

// Object: ScriptStruct SlateCore.TextBlockStyle
// Size: 0x290 (Inherited: 0x8)
struct FTextBlockStyle : FSlateWidgetStyle
{
	struct FSlateFontInfo Font; // 0x8(0x60)
	struct FSlateColor ColorAndOpacity; // 0x68(0x28)
	struct FVector2D ShadowOffset; // 0x90(0x8)
	struct FLinearColor ShadowColorAndOpacity; // 0x98(0x10)
	struct FSlateColor SelectedBackgroundColor; // 0xA8(0x28)
	struct FLinearColor HighlightColor; // 0xD0(0x10)
	struct FSlateBrush HighlightShape; // 0xE0(0x90)
	struct FSlateBrush StrikeBrush; // 0x170(0x90)
	struct FSlateBrush UnderlineBrush; // 0x200(0x90)
};

// Object: ScriptStruct SlateCore.SpinBoxStyle
// Size: 0x310 (Inherited: 0x8)
struct FSpinBoxStyle : FSlateWidgetStyle
{
	struct FSlateBrush BackgroundBrush; // 0x8(0x90)
	struct FSlateBrush HoveredBackgroundBrush; // 0x98(0x90)
	struct FSlateBrush ActiveFillBrush; // 0x128(0x90)
	struct FSlateBrush InactiveFillBrush; // 0x1B8(0x90)
	struct FSlateBrush ArrowsImage; // 0x248(0x90)
	struct FSlateColor ForegroundColor; // 0x2D8(0x28)
	struct FMargin TextPadding; // 0x300(0x10)
};

// Object: ScriptStruct SlateCore.CheckBoxStyle
// Size: 0x5C8 (Inherited: 0x8)
struct FCheckBoxStyle : FSlateWidgetStyle
{
	uint8_t CheckBoxType; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct FSlateBrush UncheckedImage; // 0x10(0x90)
	struct FSlateBrush UncheckedHoveredImage; // 0xA0(0x90)
	struct FSlateBrush UncheckedPressedImage; // 0x130(0x90)
	struct FSlateBrush CheckedImage; // 0x1C0(0x90)
	struct FSlateBrush CheckedHoveredImage; // 0x250(0x90)
	struct FSlateBrush CheckedPressedImage; // 0x2E0(0x90)
	struct FSlateBrush UndeterminedImage; // 0x370(0x90)
	struct FSlateBrush UndeterminedHoveredImage; // 0x400(0x90)
	struct FSlateBrush UndeterminedPressedImage; // 0x490(0x90)
	struct FMargin Padding; // 0x520(0x10)
	struct FSlateColor ForegroundColor; // 0x530(0x28)
	struct FSlateColor BorderBackgroundColor; // 0x558(0x28)
	struct FSlateSound CheckedSlateSound; // 0x580(0x18)
	struct FSlateSound UncheckedSlateSound; // 0x598(0x18)
	struct FSlateSound HoveredSlateSound; // 0x5B0(0x18)
};

// Object: ScriptStruct SlateCore.MotionEvent
// Size: 0x48 (Inherited: 0x18)
struct FMotionEvent : FInputEvent
{
	uint8_t Pad_0x18[0x30]; // 0x18(0x30)
};

// Object: ScriptStruct SlateCore.HyperlinkStyle
// Size: 0x540 (Inherited: 0x8)
struct FHyperlinkStyle : FSlateWidgetStyle
{
	struct FButtonStyle UnderlineStyle; // 0x8(0x298)
	struct FTextBlockStyle TextStyle; // 0x2A0(0x290)
	struct FMargin Padding; // 0x530(0x10)
};

// Object: ScriptStruct SlateCore.Typeface
// Size: 0x10 (Inherited: 0x0)
struct FTypeface
{
	struct TArray<struct FTypefaceEntry> Fonts; // 0x0(0x10)
};

// Object: ScriptStruct SlateCore.CompositeFallbackFont
// Size: 0x18 (Inherited: 0x0)
struct FCompositeFallbackFont
{
	struct FTypeface Typeface; // 0x0(0x10)
	float ScalingFactor; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct SlateCore.CompositeFont
// Size: 0x38 (Inherited: 0x0)
struct FCompositeFont
{
	struct FTypeface DefaultTypeface; // 0x0(0x10)
	struct FCompositeFallbackFont FallbackTypeface; // 0x10(0x18)
	struct TArray<struct FCompositeSubFont> SubTypefaces; // 0x28(0x10)
};

// Object: ScriptStruct SlateCore.FontData
// Size: 0x28 (Inherited: 0x0)
struct FFontData
{
	struct FString FontFilename; // 0x0(0x10)
	EFontHinting Hinting; // 0x10(0x1)
	EFontLoadingPolicy LoadingPolicy; // 0x11(0x1)
	bool IsKeepInMemory; // 0x12(0x1)
	uint8_t Pad_0x13[0x1]; // 0x13(0x1)
	int32_t FontFileIndex; // 0x14(0x4)
	int32_t SubFaceIndex; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct UObject* FontFaceAsset; // 0x20(0x8)
};

// Object: ScriptStruct SlateCore.TypefaceEntry
// Size: 0x30 (Inherited: 0x0)
struct FTypefaceEntry
{
	struct FName Name; // 0x0(0x8)
	struct FFontData Font; // 0x8(0x28)
};

// Object: ScriptStruct SlateCore.CompositeSubFont
// Size: 0x38 (Inherited: 0x18)
struct FCompositeSubFont : FCompositeFallbackFont
{
	struct TArray<struct FInt32Range> CharacterRanges; // 0x18(0x10)
	struct FString Cultures; // 0x28(0x10)
};

// Object: ScriptStruct SlateCore.CaptureLostEvent
// Size: 0x8 (Inherited: 0x0)
struct FCaptureLostEvent
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct SlateCore.FocusEvent
// Size: 0x8 (Inherited: 0x0)
struct FFocusEvent
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct SlateCore.WindowStyle
// Size: 0x1138 (Inherited: 0x8)
struct FWindowStyle : FSlateWidgetStyle
{
	struct FButtonStyle MinimizeButtonStyle; // 0x8(0x298)
	struct FButtonStyle MaximizeButtonStyle; // 0x2A0(0x298)
	struct FButtonStyle RestoreButtonStyle; // 0x538(0x298)
	struct FButtonStyle CloseButtonStyle; // 0x7D0(0x298)
	struct FTextBlockStyle TitleTextStyle; // 0xA68(0x290)
	struct FSlateBrush ActiveTitleBrush; // 0xCF8(0x90)
	struct FSlateBrush InactiveTitleBrush; // 0xD88(0x90)
	struct FSlateBrush FlashTitleBrush; // 0xE18(0x90)
	struct FSlateColor BackgroundColor; // 0xEA8(0x28)
	struct FSlateBrush OutlineBrush; // 0xED0(0x90)
	struct FSlateColor OutlineColor; // 0xF60(0x28)
	struct FSlateBrush BorderBrush; // 0xF88(0x90)
	struct FSlateBrush BackgroundBrush; // 0x1018(0x90)
	struct FSlateBrush ChildBackgroundBrush; // 0x10A8(0x90)
};

// Object: ScriptStruct SlateCore.ScrollBorderStyle
// Size: 0x128 (Inherited: 0x8)
struct FScrollBorderStyle : FSlateWidgetStyle
{
	struct FSlateBrush TopShadowBrush; // 0x8(0x90)
	struct FSlateBrush BottomShadowBrush; // 0x98(0x90)
};

// Object: ScriptStruct SlateCore.ScrollBoxStyle
// Size: 0x248 (Inherited: 0x8)
struct FScrollBoxStyle : FSlateWidgetStyle
{
	struct FSlateBrush TopShadowBrush; // 0x8(0x90)
	struct FSlateBrush BottomShadowBrush; // 0x98(0x90)
	struct FSlateBrush LeftShadowBrush; // 0x128(0x90)
	struct FSlateBrush RightShadowBrush; // 0x1B8(0x90)
};

// Object: ScriptStruct SlateCore.DockTabStyle
// Size: 0x760 (Inherited: 0x8)
struct FDockTabStyle : FSlateWidgetStyle
{
	struct FButtonStyle CloseButtonStyle; // 0x8(0x298)
	struct FSlateBrush NormalBrush; // 0x2A0(0x90)
	struct FSlateBrush ActiveBrush; // 0x330(0x90)
	struct FSlateBrush ColorOverlayTabBrush; // 0x3C0(0x90)
	struct FSlateBrush ColorOverlayIconBrush; // 0x450(0x90)
	struct FSlateBrush ForegroundBrush; // 0x4E0(0x90)
	struct FSlateBrush HoveredBrush; // 0x570(0x90)
	struct FSlateBrush ContentAreaBrush; // 0x600(0x90)
	struct FSlateBrush TabWellBrush; // 0x690(0x90)
	struct FMargin TabPadding; // 0x720(0x10)
	float OverlapWidth; // 0x730(0x4)
	uint8_t Pad_0x734[0x4]; // 0x734(0x4)
	struct FSlateColor FlashColor; // 0x738(0x28)
};

// Object: ScriptStruct SlateCore.SplitterStyle
// Size: 0x128 (Inherited: 0x8)
struct FSplitterStyle : FSlateWidgetStyle
{
	struct FSlateBrush HandleNormalBrush; // 0x8(0x90)
	struct FSlateBrush HandleHighlightBrush; // 0x98(0x90)
};

// Object: ScriptStruct SlateCore.TableColumnHeaderStyle
// Size: 0x518 (Inherited: 0x8)
struct FTableColumnHeaderStyle : FSlateWidgetStyle
{
	struct FSlateBrush SortPrimaryAscendingImage; // 0x8(0x90)
	struct FSlateBrush SortPrimaryDescendingImage; // 0x98(0x90)
	struct FSlateBrush SortSecondaryAscendingImage; // 0x128(0x90)
	struct FSlateBrush SortSecondaryDescendingImage; // 0x1B8(0x90)
	struct FSlateBrush NormalBrush; // 0x248(0x90)
	struct FSlateBrush HoveredBrush; // 0x2D8(0x90)
	struct FSlateBrush MenuDropdownImage; // 0x368(0x90)
	struct FSlateBrush MenuDropdownNormalBorderBrush; // 0x3F8(0x90)
	struct FSlateBrush MenuDropdownHoveredBorderBrush; // 0x488(0x90)
};

// Object: ScriptStruct SlateCore.HeaderRowStyle
// Size: 0xC18 (Inherited: 0x8)
struct FHeaderRowStyle : FSlateWidgetStyle
{
	struct FTableColumnHeaderStyle ColumnStyle; // 0x8(0x518)
	struct FTableColumnHeaderStyle LastColumnStyle; // 0x520(0x518)
	struct FSplitterStyle ColumnSplitterStyle; // 0xA38(0x128)
	struct FSlateBrush BackgroundBrush; // 0xB60(0x90)
	struct FSlateColor ForegroundColor; // 0xBF0(0x28)
};

// Object: ScriptStruct SlateCore.InlineTextImageStyle
// Size: 0xA0 (Inherited: 0x8)
struct FInlineTextImageStyle : FSlateWidgetStyle
{
	struct FSlateBrush Image; // 0x8(0x90)
	int16_t Baseline; // 0x98(0x2)
	uint8_t Pad_0x9A[0x6]; // 0x9A(0x6)
};

// Object: ScriptStruct SlateCore.SliderStyle
// Size: 0x370 (Inherited: 0x8)
struct FSliderStyle : FSlateWidgetStyle
{
	struct FSlateBrush NormalBarImage; // 0x8(0x90)
	struct FSlateBrush HoveredBarImage; // 0x98(0x90)
	struct FSlateBrush DisabledBarImage; // 0x128(0x90)
	struct FSlateBrush NormalThumbImage; // 0x1B8(0x90)
	struct FSlateBrush HoveredThumbImage; // 0x248(0x90)
	struct FSlateBrush DisabledThumbImage; // 0x2D8(0x90)
	float BarThickness; // 0x368(0x4)
	uint8_t Pad_0x36C[0x4]; // 0x36C(0x4)
};

// Object: ScriptStruct SlateCore.VolumeControlStyle
// Size: 0x648 (Inherited: 0x8)
struct FVolumeControlStyle : FSlateWidgetStyle
{
	struct FSliderStyle SliderStyle; // 0x8(0x370)
	struct FSlateBrush HighVolumeImage; // 0x378(0x90)
	struct FSlateBrush MidVolumeImage; // 0x408(0x90)
	struct FSlateBrush LowVolumeImage; // 0x498(0x90)
	struct FSlateBrush NoVolumeImage; // 0x528(0x90)
	struct FSlateBrush MutedImage; // 0x5B8(0x90)
};

// Object: ScriptStruct SlateCore.SearchBoxStyle
// Size: 0xB28 (Inherited: 0x8)
struct FSearchBoxStyle : FSlateWidgetStyle
{
	struct FEditableTextBoxStyle TextBoxStyle; // 0x8(0x868)
	struct FSlateFontInfo ActiveFontInfo; // 0x870(0x60)
	struct FSlateBrush UpArrowImage; // 0x8D0(0x90)
	struct FSlateBrush DownArrowImage; // 0x960(0x90)
	struct FSlateBrush GlassImage; // 0x9F0(0x90)
	struct FSlateBrush ClearImage; // 0xA80(0x90)
	struct FMargin ImagePadding; // 0xB10(0x10)
	bool bLeftAlignButtons; // 0xB20(0x1)
	uint8_t Pad_0xB21[0x7]; // 0xB21(0x7)
};

// Object: ScriptStruct SlateCore.ExpandableAreaStyle
// Size: 0x130 (Inherited: 0x8)
struct FExpandableAreaStyle : FSlateWidgetStyle
{
	struct FSlateBrush CollapsedImage; // 0x8(0x90)
	struct FSlateBrush ExpandedImage; // 0x98(0x90)
	float RolloutAnimationSeconds; // 0x128(0x4)
	uint8_t Pad_0x12C[0x4]; // 0x12C(0x4)
};

// Object: ScriptStruct SlateCore.ProgressBarStyle
// Size: 0x1B8 (Inherited: 0x8)
struct FProgressBarStyle : FSlateWidgetStyle
{
	struct FSlateBrush BackgroundImage; // 0x8(0x90)
	struct FSlateBrush FillImage; // 0x98(0x90)
	struct FSlateBrush MarqueeImage; // 0x128(0x90)
};

// Object: ScriptStruct SlateCore.InlineEditableTextBlockStyle
// Size: 0xB00 (Inherited: 0x8)
struct FInlineEditableTextBlockStyle : FSlateWidgetStyle
{
	struct FEditableTextBoxStyle EditableTextBoxStyle; // 0x8(0x868)
	struct FTextBlockStyle TextStyle; // 0x870(0x290)
};

// Object: Class SlateCore.FontBulkData
// Size: 0x78 (Inherited: 0x28)
struct UFontBulkData : UObject
{
	DEFINE_UE_CLASS_HELPERS(UFontBulkData, "FontBulkData")

	uint8_t Pad_0x28[0x50]; // 0x28(0x50)
};

// Object: Class SlateCore.FontFaceInterface
// Size: 0x28 (Inherited: 0x28)
struct IFontFaceInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IFontFaceInterface, "FontFaceInterface")
};

// Object: Class SlateCore.FontProviderInterface
// Size: 0x28 (Inherited: 0x28)
struct IFontProviderInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IFontProviderInterface, "FontProviderInterface")
};

// Object: Class SlateCore.SlateTypes
// Size: 0x28 (Inherited: 0x28)
struct USlateTypes : UObject
{
	DEFINE_UE_CLASS_HELPERS(USlateTypes, "SlateTypes")
};

// Object: Class SlateCore.SlateWidgetStyleAsset
// Size: 0x30 (Inherited: 0x28)
struct USlateWidgetStyleAsset : UObject
{
	DEFINE_UE_CLASS_HELPERS(USlateWidgetStyleAsset, "SlateWidgetStyleAsset")

	struct USlateWidgetStyleContainerBase* CustomStyle; // 0x28(0x8)
};

// Object: Class SlateCore.SlateWidgetStyleContainerBase
// Size: 0x30 (Inherited: 0x28)
struct USlateWidgetStyleContainerBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(USlateWidgetStyleContainerBase, "SlateWidgetStyleContainerBase")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: Class SlateCore.SlateWidgetStyleContainerInterface
// Size: 0x28 (Inherited: 0x28)
struct ISlateWidgetStyleContainerInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(ISlateWidgetStyleContainerInterface, "SlateWidgetStyleContainerInterface")
};

} // namespace SDK
