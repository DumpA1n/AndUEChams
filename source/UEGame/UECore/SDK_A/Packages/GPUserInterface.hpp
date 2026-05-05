#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GPUserInterfaceCore.hpp"
#include "GameCore.hpp"
#include "InputCore.hpp"
#include "SlateCore.hpp"
#include "UMG.hpp"
#include "UMGToolKits.hpp"
#include "WaterFallScrollBox.hpp"

namespace SDK
{

// Package: GPUserInterface
// Enums: 32
// Structs: 32
// Classes: 133

enum class EButtonClickMethod : uint8_t;
enum class EButtonPressMethod : uint8_t;
enum class EButtonTouchMethod : uint8_t;
enum class ECdnDownResult : uint8_t;
enum class EDownloadResult : uint8_t;
enum class EFocusCause : uint8_t;
enum class EGPInputType : uint8_t;
enum class EGPScreenAdaptType : uint8_t;
enum class EGPUIFocusEffectType : uint8_t;
enum class EHorizontalAlignment : uint8_t;
enum class ELuaUILayer : uint8_t;
enum class EOrientation : uint8_t;
enum class ESlateBrushTileType : uint8_t;
enum class ESlateVisibility : uint8_t;
enum class ETextCommit : uint8_t;
enum class ETextJustify : uint8_t;
enum class EUMGSequencePlayMode : uint8_t;
enum class EVerticalAlignment : uint8_t;
enum class EVirtualKeyboardDismissAction : uint8_t;
enum class EVirtualKeyboardType : uint8_t;
struct FAnchorData;
struct FFocusEvent;
struct FGeometry;
struct FLatentActionInfo;
struct FMargin;
struct FPointerEvent;
struct FSlateBrush;
struct FSlateColor;
struct ISlateTextureAtlasInterface;
struct UBinkMediaPlayer;
struct UCDNIconDownManager;
struct UCanvasPanel;
struct UCanvasPanelSlot;
struct UContentWidget;
struct UCurveFloat;
struct UCurveVector;
struct UDataTable;
struct UImage;
struct UMaterialInstanceDynamic;
struct UMaterialInterface;
struct UMenuAnchor;
struct UNamedSlot;
struct UPanelSlot;
struct UPanelWidget;
struct UPaperSprite;
struct URetainerBox;
struct URuntimeFilesDownloaderProxy;
struct USafeZone;
struct USizeBox;
struct USpineWidget;
struct UTextBlock;
struct UTexture2D;
struct UUserWidget;
struct UWidget;
struct UWidgetAnimation;
struct UWorld;
struct FPlatformCanvasPos;
struct FPlatformColor;
struct FDFCommonTabContent;
struct FDropDownItemData;
struct FDFCommonTabGroupContent;
struct FAdaptiveCurveSamplingResult;
struct FPlatformInputTypeVisibility;
struct FPlatformVisibility;
struct FDFComputeTextStyle;
struct FDFCommonPopWindowStyle;
struct FDFBrushCheckStateStyle;
struct FDFRichTextStyle;
struct FDFRichTextBlockCheckStateStyle;
struct FDFCommonCheckButtonStyle;
struct FDFBrushButtonStateStyle;
struct FDFRichTextBlockButtonStateStyle;
struct FDFCommonButtonStyle;
struct FDFTextStyle;
struct FDFTextBlockCheckStateStyle;
struct FDFTextBlockButtonStateStyle;
struct FDFRichTextConfigStyle;
struct FDFButtonStateStyle;
struct FDFScrollBarStyle;
struct FWaitingInfo;
struct FGPUIImageConfigRow;
struct FGPUICommomConfigRow;
struct FDFThemeStyleData;
struct FTextColorDefineRow;
struct FThemeItemDataRow;
struct FThemeItemMapDataRow;
struct FThemeBundleDataRow;
struct FThemeMainDataRow;
struct AGPWidgetTiltActor;
struct UDFAspectRatioBoxSlot;
struct UDFAspectRatioBox;
struct UDFBackgroundBlur;
struct UDFBackgroundBoxSlot;
struct UDFBackgroundBox;
struct UDFUserWidgetBase;
struct UDFBidirectionalSlider;
struct UDFNamedSlot;
struct UDFBlurSlotReContainer;
struct UDFBorder;
struct UDFButton;
struct UDFCanvasPanel;
struct UDFContainerBase;
struct UDFCanvasPosReContainer;
struct UDFCarouselProV2ItemBase;
struct UDFCDNImage;
struct UDFCheckBox;
struct UDFClipCanvasPanel;
struct UDFColorReContainer;
struct UDFColorWheel;
struct UDFComboBoxString;
struct UDFCommonAddDecHolder;
struct UDFCommonAddDecInputBox;
struct UDFCommonAddDecInputText;
struct UDFCommonAddDecSlider;
struct UDFCommonButton;
struct UDFCommonCheckButton;
struct UDFCommonTabWidget;
struct UDFCommonDropDownBox;
struct UDFCommonDropDownItem;
struct UDFCommonFilterWidget;
struct UDFCommonMediaView;
struct UDFCommonPopWindow;
struct UDFCommonProgressBar;
struct UDFCommonRichTextBlock;
struct UDFCommonRoundedRectMaskBase;
struct UDFCommonSlider;
struct UDFCommonTabGroupItem;
struct UWrapTabGroupClickDelegate;
struct UDFCommonTabGroupWidget;
struct UDFCommonTabNavigatorBase;
struct UDFCommonTabSelectionBar;
struct UWrapTabClickDelegate;
struct UCommonTextScrollStyle;
struct UDFCommonTextBlock;
struct UDFComputeTextBlock;
struct UCurveSamplerBase;
struct UBezierSampler;
struct UCatmullRomSampler;
struct UAdaptiveCurveSamplerProxy;
struct UCurveSamplerHelper;
struct UDFCurveWidget;
struct UDFSolMatchReviewCurveWidget;
struct UDFListView;
struct UDFCustomListView;
struct UDFDashedLine;
struct UDFDefferedPaintWidget;
struct UDFDJWMainTab;
struct UDFDJWSubTabList;
struct UDFEditableText;
struct UDFEditableTextBox;
struct UDFExCommonCarouselProV2;
struct UDFExCommonSimpleCarouselProV2;
struct UDFExpandableArea;
struct UDFGridPanel;
struct UDFHorizontalBox;
struct UDFImage;
struct UDFHttpImage;
struct UDFInputTypeVisibilityReContainer;
struct UDFInvalidationBox;
struct UDFRichTextBlock;
struct UDFLEDRichTextBlock;
struct UDFMultiLineEditableText;
struct UDFMultiLineEditableTextBox;
struct UDFOverlay;
struct UDFProgressBar;
struct UDFRadialImage;
struct UDFRetainerBox;
struct UDFSafeZone;
struct UDFScaleBox;
struct UDFScrollBox;
struct UDFScrollGridBox;
struct UMainTabChangeObject;
struct USubTabChangeObject;
struct UDFSecondLevelCommonTab;
struct UDFSimpleGradient;
struct UDFSizeBox;
struct UDFSlider;
struct UDFSOLGameReviewGesture;
struct UDFSpacer;
struct UDFSpinBox;
struct UDFSpineWidget;
struct UDFTextBlock;
struct UDFTextPlatformType;
struct UDFThemeImage;
struct UDFThemeShadowImage;
struct UDFTileView;
struct UDFTipsTemplateBase;
struct UDFTipsAnchor;
struct UDFTreeView;
struct UDFTypeWriterTextBlock;
struct UDFUniformGridPanel;
struct UDFVerticalBox;
struct UDFVisibilityReContainer;
struct UDFWaterfallScrollView;
struct UDFWaterfallScrollViewV2;
struct UDFScrollBarWidgetStyle;
struct UDFButtonStateWidgetStyle;
struct UDFRichTextConfigWidgetStyle;
struct UDFComputeTextWidgetStyle;
struct UDFRichTextWidgetStyle;
struct UDFTextWidgetStyle;
struct UDFBrushButtonStateWidgetStyle;
struct UDFRichTextBlockStateWidgetStyle;
struct UDFTextBlockStateWidgetStyle;
struct UFDFBrushCheckStateWidgetStyle;
struct UDFRichTextBlockCheckStateWidgetStyle;
struct UDFTextBlockCheckStateWidgetStyle;
struct UFDFCommonButtonWidgetStyle;
struct UFDFCommonCheckButtonWidgetStyle;
struct UFDFCommonPopWindowWidgetStyle;
struct UDFWidgetSwitcher;
struct UDFWrapBox;
struct UDFZeroSizeBox;
struct UGPColorManager;
struct UGPPersistentRootUIBase;
struct UGPUIManager;
struct UGPUIThemeController;
struct UGPUserInterfaceDelegates;
struct UGPUserInterfaceGlobalDelegates;
struct UGPUserInterfaceInputSystemManagerLite;
struct UGPUserInterfaceUtil;

// Object: Enum GPUserInterface.EButtonState
enum class EButtonState : uint8_t
{
	Activated = 0,
	FocusReceived = 1,
	Hovered = 2,
	Pressed = 3,
	Deactivated = 4,
	DeFocusReceived = 5,
	DeHovered = 6,
	DePressed = 7,
	Disabled = 8,
	EButtonState_MAX = 9
};

// Object: Enum GPUserInterface.ECheckButtonState
enum class ECheckButtonState : uint8_t
{
	Checked = 0,
	CheckedFocusReceived = 1,
	CheckedHovered = 2,
	CheckedPressed = 3,
	Unchecked = 4,
	UncheckedFocusReceived = 5,
	UncheckedHovered = 6,
	UncheckedPressed = 7,
	Disabled = 8,
	ECheckButtonState_MAX = 9
};

// Object: Enum GPUserInterface.EFilterStateType
enum class EFilterStateType : uint8_t
{
	NoOrder = 0,
	InOrder = 1,
	DeOrder = 2,
	EFilterStateType_MAX = 3
};

// Object: Enum GPUserInterface.ECarouselV2ScrollDirection
enum class ECarouselV2ScrollDirection : uint8_t
{
	Carousel_Left = 0,
	Carousel_Right = 1,
	Carousel_MAX = 2
};

// Object: Enum GPUserInterface.ECarouselV2Curve
enum class ECarouselV2Curve : uint8_t
{
	Const = 0,
	Linear = 1,
	Quad = 2,
	EaseInOutQuad = 3,
	Cubic = 4,
	ECarouselV2Curve_MAX = 5
};

// Object: Enum GPUserInterface.ETipsTriggerReason
enum class ETipsTriggerReason : uint8_t
{
	Hover = 0,
	Click = 1,
	ClickBlankSpace = 2,
	Manually = 3,
	OnClose = 4,
	ParentHidden = 5,
	ETipsTriggerReason_MAX = 6
};

// Object: Enum GPUserInterface.ETipsConstrainAxis
enum class ETipsConstrainAxis : uint8_t
{
	ConstrainX = 0,
	ConstrainY = 1,
	Both = 2,
	ETipsConstrainAxis_MAX = 3
};

// Object: Enum GPUserInterface.ETipsConstrainMode
enum class ETipsConstrainMode : uint8_t
{
	Free = 0,
	ConstrainInViewport = 1,
	ConstrainInTipsRoot = 2,
	ConstrainInWidgetByPath = 3,
	ConstrainInGivenWidget = 4,
	ETipsConstrainMode_MAX = 5
};

// Object: Enum GPUserInterface.ETipsTriggerEventMode
enum class ETipsTriggerEventMode : uint8_t
{
	BindNearestParent = 0,
	BindWidgetByPath = 1,
	Custom = 3,
	ETipsTriggerEventMode_MAX = 4
};

// Object: Enum GPUserInterface.ETipsDirection
enum class ETipsDirection : uint8_t
{
	Left = 0,
	Top = 1,
	Right = 2,
	Bottom = 3,
	ETipsDirection_MAX = 4
};

// Object: Enum GPUserInterface.ETipsAnchorSpace
enum class ETipsAnchorSpace : uint8_t
{
	Relative = 0,
	SurroundingParent = 1,
	SurroundingByPath = 2,
	ETipsAnchorSpace_MAX = 3
};

// Object: Enum GPUserInterface.ETipsAttachMode
enum class ETipsAttachMode : uint8_t
{
	Static = 0,
	Mouse = 1,
	ETipsAttachMode_MAX = 2
};

// Object: Enum GPUserInterface.EDFButtonPresetStyleType
enum class EDFButtonPresetStyleType : uint8_t
{
	Custom = 0,
	ThemeV1 = 1,
	ThemeV2 = 2,
	ThemeV3 = 3,
	ThemeV4 = 4,
	DynamicTheme = 5,
	EDFButtonPresetStyleType_MAX = 6
};

// Object: Enum GPUserInterface.EButtonHoverAnimType
enum class EButtonHoverAnimType : uint8_t
{
	Parallel = 0,
	Sequential = 1,
	EButtonHoverAnimType_MAX = 2
};

// Object: Enum GPUserInterface.EDFCheckButtonPresetStyleType
enum class EDFCheckButtonPresetStyleType : uint8_t
{
	Custom = 0,
	ThemeV1 = 1,
	ThemeV2 = 2,
	ThemeV3 = 3,
	ThemeV4 = 4,
	DynamicTheme = 5,
	EDFCheckButtonPresetStyleType_MAX = 6
};

// Object: Enum GPUserInterface.ECheckButtonHoverAnimType
enum class ECheckButtonHoverAnimType : uint8_t
{
	Parallel = 0,
	Sequential = 1,
	ECheckButtonHoverAnimType_MAX = 2
};

// Object: Enum GPUserInterface.EDFCommonPopWindowStyleType
enum class EDFCommonPopWindowStyleType : uint8_t
{
	Custom = 0,
	ThemeV1 = 1,
	ThemeV2 = 2,
	DynamicTheme = 3,
	EDFCommonPopWindowStyleType_MAX = 4
};

// Object: Enum GPUserInterface.ETextChecked
enum class ETextChecked : uint8_t
{
	Unchecked = 0,
	Checked = 1,
	ETextChecked_MAX = 2
};

// Object: Enum GPUserInterface.EDFDefaultScrollBoxType
enum class EDFDefaultScrollBoxType : uint8_t
{
	None = 0,
	Shared = 1,
	EDFDefaultScrollBoxType_MAX = 2
};

// Object: Enum GPUserInterface.EDFDefaultScrollBarType
enum class EDFDefaultScrollBarType : uint8_t
{
	None = 0,
	Shared = 1,
	Shared2 = 2,
	Shared3 = 3,
	Shared4 = 4,
	EDFDefaultScrollBarType_MAX = 5
};

// Object: Enum GPUserInterface.EDropDownSelection
enum class EDropDownSelection : uint8_t
{
	Single = 0,
	Multiple = 1,
	EDropDownSelection_MAX = 2
};

// Object: Enum GPUserInterface.ETabType
enum class ETabType : uint8_t
{
	HorizontalTab = 0,
	VerticalTab = 1,
	Other = 2,
	ETabType_MAX = 3
};

// Object: Enum GPUserInterface.ESizeSetting
enum class ESizeSetting : uint8_t
{
	TabWidth = 0,
	TabHeight = 1,
	OptionWidth = 2,
	OptionHeight = 3,
	Other = 4,
	ESizeSetting_MAX = 5
};

// Object: Enum GPUserInterface.ESizeMode
enum class ESizeMode : uint8_t
{
	TabSize = 0,
	OptionSize = 1,
	ESizeMode_MAX = 2
};

// Object: Enum GPUserInterface.ETabLevel
enum class ETabLevel : uint8_t
{
	PrimaryTab = 0,
	SecondaryTab = 1,
	ETabLevel_MAX = 2
};

// Object: Enum GPUserInterface.ESliderCyclePosition
enum class ESliderCyclePosition : uint8_t
{
	ZeroPercent = 0,
	FiftyPercent = 1,
	HundredPercent = 2,
	Num = 3,
	Invalid = 4,
	ESliderCyclePosition_MAX = 5
};

// Object: Enum GPUserInterface.EDFTextPlatformType
enum class EDFTextPlatformType : uint8_t
{
	ETP_None = 0,
	ETP_Mobile = 1,
	ETP_PC = 2,
	ETP_XBox = 3,
	ETP_PS = 4,
	ETP_Switch = 5,
	ETP_MAX = 6
};

// Object: Enum GPUserInterface.EFlowAnimType
enum class EFlowAnimType : uint8_t
{
	Normal = 0,
	Weak = 1,
	Custom = 2,
	EFlowAnimType_MAX = 3
};

// Object: Enum GPUserInterface.EWorkingState
enum class EWorkingState : uint8_t
{
	Terminal = 0,
	Initing = 1,
	Idle = 2,
	Working = 3,
	EWorkingState_MAX = 4
};

// Object: Enum GPUserInterface.EDFWidgetStyleType
enum class EDFWidgetStyleType : uint8_t
{
	None = 0,
	CommonButton = 1,
	CommonCheckButton = 2,
	CommonPopWindow = 3,
	EDFWidgetStyleType_MAX = 4
};

// Object: Enum GPUserInterface.EBackgroundStretchType
enum class EBackgroundStretchType : uint8_t
{
	None = 0,
	ScaleToFill = 1,
	ScaleToFit = 2,
	EBackgroundStretchType_MAX = 3
};

// Object: Enum GPUserInterface.EScrollDirectionMode
enum class EScrollDirectionMode : uint8_t
{
	Normal = 0,
	Horizontal = 1,
	Vertical = 2,
	EScrollDirectionMode_MAX = 3
};

// Object: ScriptStruct GPUserInterface.PlatformCanvasPos
// Size: 0x2C (Inherited: 0x0)
struct FPlatformCanvasPos
{
	EGPScreenAdaptType ScreenAdaptType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FAnchorData AnchorData; // 0x4(0x28)
};

// Object: ScriptStruct GPUserInterface.PlatformColor
// Size: 0x14 (Inherited: 0x0)
struct FPlatformColor
{
	EGPScreenAdaptType ScreenAdaptType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FLinearColor LinearColor; // 0x4(0x10)
};

// Object: ScriptStruct GPUserInterface.DFCommonTabContent
// Size: 0x40 (Inherited: 0x0)
struct FDFCommonTabContent
{
	struct FText TextContent; // 0x0(0x18)
	struct UPaperSprite* ImageContent; // 0x18(0x8)
	struct FSoftObjectPath ImageContentSoftPath; // 0x20(0x18)
	uint8_t bShowMainTitleText : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t bShowIcon : 1; // 0x39(0x1), Mask(0x1)
	uint8_t BitPad_0x39_1 : 7; // 0x39(0x1)
	uint8_t BlockState : 1; // 0x3A(0x1), Mask(0x1)
	uint8_t BitPad_0x3A_1 : 7; // 0x3A(0x1)
	ESlateVisibility NamedSlotVisibility; // 0x3B(0x1)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct GPUserInterface.DropDownItemData
// Size: 0x38 (Inherited: 0x0)
struct FDropDownItemData
{
	struct FText KeyText; // 0x0(0x18)
	struct FText RightText; // 0x18(0x18)
	uint8_t bShowRightText : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
};

// Object: ScriptStruct GPUserInterface.DFCommonTabGroupContent
// Size: 0x50 (Inherited: 0x0)
struct FDFCommonTabGroupContent
{
	struct FDFCommonTabContent MainTabContent; // 0x0(0x40)
	struct TArray<struct FDFCommonTabContent> SubTabContents; // 0x40(0x10)
};

// Object: ScriptStruct GPUserInterface.AdaptiveCurveSamplingResult
// Size: 0x20 (Inherited: 0x0)
struct FAdaptiveCurveSamplingResult
{
	struct TArray<struct FVector2D> SamplePoints; // 0x0(0x10)
	struct TArray<float> SamplePositions; // 0x10(0x10)
};

// Object: ScriptStruct GPUserInterface.PlatformInputTypeVisibility
// Size: 0x3 (Inherited: 0x0)
struct FPlatformInputTypeVisibility
{
	EGPScreenAdaptType ScreenAdaptType; // 0x0(0x1)
	EGPInputType VisibilityInputType; // 0x1(0x1)
	uint8_t bEnableInputTypeVisibility : 1; // 0x2(0x1), Mask(0x1)
	uint8_t BitPad_0x2_1 : 7; // 0x2(0x1)
};

// Object: ScriptStruct GPUserInterface.PlatformVisibility
// Size: 0x2 (Inherited: 0x0)
struct FPlatformVisibility
{
	EGPScreenAdaptType ScreenAdaptType; // 0x0(0x1)
	ESlateVisibility SlateVisibility; // 0x1(0x1)
};

// Object: ScriptStruct GPUserInterface.DFComputeTextStyle
// Size: 0x2D8 (Inherited: 0x8)
struct FDFComputeTextStyle : FSlateWidgetStyle
{
	struct FText ShowText; // 0x8(0x18)
	float ComputeTextScale; // 0x20(0x4)
	uint8_t bCustomizeStyle : 1; // 0x24(0x1), Mask(0x1)
	uint8_t BitPad_0x24_1 : 7; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
	struct FName TableRowID; // 0x28(0x8)
	struct FName FontStyleID; // 0x30(0x8)
	struct FVector2D TextRenderTranslation; // 0x38(0x8)
	uint8_t bApplyCustomStyle : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t Pad_0x41[0x7]; // 0x41(0x7)
	struct FTextBlockStyle TextRawStyle; // 0x48(0x290)
};

// Object: ScriptStruct GPUserInterface.DFCommonPopWindowStyle
// Size: 0x5C0 (Inherited: 0x8)
struct FDFCommonPopWindowStyle : FSlateWidgetStyle
{
	struct FSlateBrush BackgroundImage; // 0x8(0x90)
	struct FSlateBrush BackgroundContentImage; // 0x98(0x90)
	struct FSlateBrush CenterImage; // 0x128(0x90)
	struct FSlateBrush BottomImage; // 0x1B8(0x90)
	struct FSlateBrush CloseImage; // 0x248(0x90)
	struct FDFComputeTextStyle TitleTextStyle; // 0x2D8(0x2D8)
	struct FName ThemePopColorKey; // 0x5B0(0x8)
	uint8_t IsDefaultStyle : 1; // 0x5B8(0x1), Mask(0x1)
	uint8_t BitPad_0x5B8_1 : 7; // 0x5B8(0x1)
	uint8_t Pad_0x5B9[0x7]; // 0x5B9(0x7)
};

// Object: ScriptStruct GPUserInterface.DFBrushCheckStateStyle
// Size: 0x518 (Inherited: 0x8)
struct FDFBrushCheckStateStyle : FSlateWidgetStyle
{
	struct FSlateBrush Checked; // 0x8(0x90)
	struct FSlateBrush CheckedFocusReceived; // 0x98(0x90)
	struct FSlateBrush CheckedHovered; // 0x128(0x90)
	struct FSlateBrush CheckedPressed; // 0x1B8(0x90)
	struct FSlateBrush Unchecked; // 0x248(0x90)
	struct FSlateBrush UncheckedFocusReceived; // 0x2D8(0x90)
	struct FSlateBrush UncheckedHovered; // 0x368(0x90)
	struct FSlateBrush UncheckedPressed; // 0x3F8(0x90)
	struct FSlateBrush Disabled; // 0x488(0x90)
};

// Object: ScriptStruct GPUserInterface.DFRichTextStyle
// Size: 0x2D8 (Inherited: 0x8)
struct FDFRichTextStyle : FSlateWidgetStyle
{
	struct FText ShowText; // 0x8(0x18)
	float RichTextScale; // 0x20(0x4)
	uint8_t bCustomizeStyle : 1; // 0x24(0x1), Mask(0x1)
	uint8_t BitPad_0x24_1 : 7; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
	struct FName TableRowID; // 0x28(0x8)
	struct FName FontStyleID; // 0x30(0x8)
	struct FVector2D TextRenderTranslation; // 0x38(0x8)
	uint8_t bOverrideDefaultStyle : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t Pad_0x41[0x7]; // 0x41(0x7)
	struct FTextBlockStyle TextRawStyle; // 0x48(0x290)
};

// Object: ScriptStruct GPUserInterface.DFRichTextBlockCheckStateStyle
// Size: 0x19A0 (Inherited: 0x8)
struct FDFRichTextBlockCheckStateStyle : FSlateWidgetStyle
{
	struct FDFRichTextStyle Checked; // 0x8(0x2D8)
	struct FDFRichTextStyle CheckedFocusReceived; // 0x2E0(0x2D8)
	struct FDFRichTextStyle CheckedPressed; // 0x5B8(0x2D8)
	struct FDFRichTextStyle CheckedHovered; // 0x890(0x2D8)
	struct FDFRichTextStyle Unchecked; // 0xB68(0x2D8)
	struct FDFRichTextStyle UncheckedFocusReceived; // 0xE40(0x2D8)
	struct FDFRichTextStyle UncheckedPressed; // 0x1118(0x2D8)
	struct FDFRichTextStyle UncheckedHovered; // 0x13F0(0x2D8)
	struct FDFRichTextStyle Disabled; // 0x16C8(0x2D8)
};

// Object: ScriptStruct GPUserInterface.DFCommonCheckButtonStyle
// Size: 0x23F8 (Inherited: 0x8)
struct FDFCommonCheckButtonStyle : FSlateWidgetStyle
{
	struct FDFBrushCheckStateStyle BackGroundStateStyle; // 0x8(0x518)
	struct FDFBrushCheckStateStyle ImageIconStateStyle; // 0x520(0x518)
	struct FDFRichTextBlockCheckStateStyle MainTitleStateStyle; // 0xA38(0x19A0)
	struct FName CheckedSoundName; // 0x23D8(0x8)
	struct FName UncheckedSoundName; // 0x23E0(0x8)
	struct FName HoveredSoundName; // 0x23E8(0x8)
	uint8_t IsIconRevert : 1; // 0x23F0(0x1), Mask(0x1)
	uint8_t BitPad_0x23F0_1 : 7; // 0x23F0(0x1)
	uint8_t IsDefaultStyle : 1; // 0x23F1(0x1), Mask(0x1)
	uint8_t BitPad_0x23F1_1 : 7; // 0x23F1(0x1)
	uint8_t Pad_0x23F2[0x6]; // 0x23F2(0x6)
};

// Object: ScriptStruct GPUserInterface.DFBrushButtonStateStyle
// Size: 0x518 (Inherited: 0x8)
struct FDFBrushButtonStateStyle : FSlateWidgetStyle
{
	struct FSlateBrush Activated; // 0x8(0x90)
	struct FSlateBrush Hovered; // 0x98(0x90)
	struct FSlateBrush FocusReceived; // 0x128(0x90)
	struct FSlateBrush Pressed; // 0x1B8(0x90)
	struct FSlateBrush Deactivated; // 0x248(0x90)
	struct FSlateBrush DeHovered; // 0x2D8(0x90)
	struct FSlateBrush DeFocusReceived; // 0x368(0x90)
	struct FSlateBrush DePressed; // 0x3F8(0x90)
	struct FSlateBrush Disabled; // 0x488(0x90)
};

// Object: ScriptStruct GPUserInterface.DFRichTextBlockButtonStateStyle
// Size: 0x19A0 (Inherited: 0x8)
struct FDFRichTextBlockButtonStateStyle : FSlateWidgetStyle
{
	struct FDFRichTextStyle Activated; // 0x8(0x2D8)
	struct FDFRichTextStyle FocusReceived; // 0x2E0(0x2D8)
	struct FDFRichTextStyle Pressed; // 0x5B8(0x2D8)
	struct FDFRichTextStyle Hovered; // 0x890(0x2D8)
	struct FDFRichTextStyle Deactivated; // 0xB68(0x2D8)
	struct FDFRichTextStyle DeFocusReceived; // 0xE40(0x2D8)
	struct FDFRichTextStyle DePressed; // 0x1118(0x2D8)
	struct FDFRichTextStyle DeHovered; // 0x13F0(0x2D8)
	struct FDFRichTextStyle Disabled; // 0x16C8(0x2D8)
};

// Object: ScriptStruct GPUserInterface.DFCommonButtonStyle
// Size: 0x23F0 (Inherited: 0x8)
struct FDFCommonButtonStyle : FSlateWidgetStyle
{
	struct FDFBrushButtonStateStyle BackGroundStateStyle; // 0x8(0x518)
	struct FDFBrushButtonStateStyle ImageIconStateStyle; // 0x520(0x518)
	struct FDFRichTextBlockButtonStateStyle MainTitleStateStyle; // 0xA38(0x19A0)
	struct FName PressedSoundName; // 0x23D8(0x8)
	struct FName HoveredSoundName; // 0x23E0(0x8)
	uint8_t IsIconRevert : 1; // 0x23E8(0x1), Mask(0x1)
	uint8_t BitPad_0x23E8_1 : 7; // 0x23E8(0x1)
	uint8_t IsDefaultStyle : 1; // 0x23E9(0x1), Mask(0x1)
	uint8_t BitPad_0x23E9_1 : 7; // 0x23E9(0x1)
	uint8_t Pad_0x23EA[0x6]; // 0x23EA(0x6)
};

// Object: ScriptStruct GPUserInterface.DFTextStyle
// Size: 0x2B0 (Inherited: 0x8)
struct FDFTextStyle : FSlateWidgetStyle
{
	struct FText ShowText; // 0x8(0x18)
	struct FTextBlockStyle TextRawStyle; // 0x20(0x290)
};

// Object: ScriptStruct GPUserInterface.DFTextBlockCheckStateStyle
// Size: 0x12D8 (Inherited: 0x8)
struct FDFTextBlockCheckStateStyle : FSlateWidgetStyle
{
	struct FDFTextStyle Checked; // 0x8(0x2B0)
	struct FDFTextStyle CheckedPressed; // 0x2B8(0x2B0)
	struct FDFTextStyle CheckedHovered; // 0x568(0x2B0)
	struct FDFTextStyle Unchecked; // 0x818(0x2B0)
	struct FDFTextStyle UncheckedPressed; // 0xAC8(0x2B0)
	struct FDFTextStyle UncheckedHovered; // 0xD78(0x2B0)
	struct FDFTextStyle Disabled; // 0x1028(0x2B0)
};

// Object: ScriptStruct GPUserInterface.DFTextBlockButtonStateStyle
// Size: 0x12D8 (Inherited: 0x8)
struct FDFTextBlockButtonStateStyle : FSlateWidgetStyle
{
	struct FDFTextStyle Activated; // 0x8(0x2B0)
	struct FDFTextStyle Pressed; // 0x2B8(0x2B0)
	struct FDFTextStyle Hovered; // 0x568(0x2B0)
	struct FDFTextStyle Deactivated; // 0x818(0x2B0)
	struct FDFTextStyle DePressed; // 0xAC8(0x2B0)
	struct FDFTextStyle DeHovered; // 0xD78(0x2B0)
	struct FDFTextStyle Disabled; // 0x1028(0x2B0)
};

// Object: ScriptStruct GPUserInterface.DFRichTextConfigStyle
// Size: 0x2A8 (Inherited: 0x8)
struct FDFRichTextConfigStyle : FSlateWidgetStyle
{
	struct UDataTable* TextStyleSet; // 0x8(0x8)
	uint8_t bOverrideDefaultStyle : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct FTextBlockStyle TextRawStyle; // 0x18(0x290)
};

// Object: ScriptStruct GPUserInterface.DFButtonStateStyle
// Size: 0x690 (Inherited: 0x8)
struct FDFButtonStateStyle : FSlateWidgetStyle
{
	uint8_t Pad_0x8[0x298]; // 0x8(0x298)
	struct FSlateBrush Activated; // 0x2A0(0x90)
	struct FSlateBrush Hovered; // 0x330(0x90)
	struct FSlateBrush Pressed; // 0x3C0(0x90)
	struct FSlateBrush Deactivated; // 0x450(0x90)
	struct FSlateBrush DeHovered; // 0x4E0(0x90)
	struct FSlateBrush DePressed; // 0x570(0x90)
	struct FSlateBrush Disabled; // 0x600(0x90)
};

// Object: ScriptStruct GPUserInterface.DFScrollBarStyle
// Size: 0x6E8 (Inherited: 0x8)
struct FDFScrollBarStyle : FSlateWidgetStyle
{
	struct FScrollBarStyle RawStyle; // 0x8(0x518)
	struct FVector2D ScrollbarThickness; // 0x520(0x8)
	struct FMargin ScrollbarPadding; // 0x528(0x10)
	struct FSlateBrush NormalBackgroundImage; // 0x538(0x90)
	struct FSlateBrush HoveredBackgroundImage; // 0x5C8(0x90)
	struct FSlateBrush DraggedBackgroundImage; // 0x658(0x90)
};

// Object: ScriptStruct GPUserInterface.WaitingInfo
// Size: 0x18 (Inherited: 0x0)
struct FWaitingInfo
{
	struct UWidget* WaitingWidget; // 0x0(0x8)
	uint8_t bIsInSafeZone : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	int32_t InZOrder; // 0xC(0x4)
	ELuaUILayer LayerType; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct GPUserInterface.GPUIImageConfigRow
// Size: 0x30 (Inherited: 0x10)
struct FGPUIImageConfigRow : FDescRowBase
{
	struct FSoftObjectPath Path; // 0x10(0x18)
	struct FName LoadGroup; // 0x28(0x8)
};

// Object: ScriptStruct GPUserInterface.GPUICommomConfigRow
// Size: 0xD0 (Inherited: 0x10)
struct FGPUICommomConfigRow : FDescRowBase
{
	struct FSlateBrush LowQualityFallbackBrush; // 0x10(0x90)
	struct FSoftObjectPath Common_WhiteBlock; // 0xA0(0x18)
	struct FSoftObjectPath Common_transition; // 0xB8(0x18)
};

// Object: ScriptStruct GPUserInterface.DFThemeStyleData
// Size: 0x20 (Inherited: 0x0)
struct FDFThemeStyleData
{
	struct FSoftObjectPath StylePath; // 0x0(0x18)
	EDFWidgetStyleType StyleType; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: ScriptStruct GPUserInterface.TextColorDefineRow
// Size: 0x20 (Inherited: 0x10)
struct FTextColorDefineRow : FDescRowBase
{
	struct FLinearColor LinearColor; // 0x10(0x10)
};

// Object: ScriptStruct GPUserInterface.ThemeItemDataRow
// Size: 0x68 (Inherited: 0x8)
struct FThemeItemDataRow : FTableRowBase
{
	struct FString Key; // 0x8(0x10)
	struct FString ThemeID; // 0x18(0x10)
	struct FString ItemID; // 0x28(0x10)
	struct FSoftObjectPath RewardBgImage; // 0x38(0x18)
	struct FSoftObjectPath RewardSubLevel; // 0x50(0x18)
};

// Object: ScriptStruct GPUserInterface.ThemeItemMapDataRow
// Size: 0x28 (Inherited: 0x8)
struct FThemeItemMapDataRow : FTableRowBase
{
	struct FString ItemID; // 0x8(0x10)
	struct FString ThemeID; // 0x18(0x10)
};

// Object: ScriptStruct GPUserInterface.ThemeBundleDataRow
// Size: 0x48 (Inherited: 0x8)
struct FThemeBundleDataRow : FTableRowBase
{
	struct FString BundleId; // 0x8(0x10)
	struct FString ThemeID; // 0x18(0x10)
	struct FString OnlineTime; // 0x28(0x10)
	struct FString OfflineTime; // 0x38(0x10)
};

// Object: ScriptStruct GPUserInterface.ThemeMainDataRow
// Size: 0x148 (Inherited: 0x8)
struct FThemeMainDataRow : FTableRowBase
{
	struct FString ThemeID; // 0x8(0x10)
	int32_t FinalThemeState; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FText MainThemeTitle; // 0x20(0x18)
	struct FSoftObjectPath MainThemeIcon; // 0x38(0x18)
	struct FSoftObjectPath CommonButtonStyleV1; // 0x50(0x18)
	struct FSoftObjectPath CommonButtonStyleV2; // 0x68(0x18)
	struct FSoftObjectPath CommonButtonStyleV3; // 0x80(0x18)
	struct FSoftObjectPath CommonButtonStyleV4; // 0x98(0x18)
	struct FSoftObjectPath CommonCheckButtonStyleV1; // 0xB0(0x18)
	struct FSoftObjectPath CommonCheckButtonStyleV2; // 0xC8(0x18)
	struct FSoftObjectPath CommonCheckButtonStyleV3; // 0xE0(0x18)
	struct FSoftObjectPath CommonCheckButtonStyleV4; // 0xF8(0x18)
	struct FSoftObjectPath CommonPopWindowStyle; // 0x110(0x18)
	struct FSoftObjectPath ThemeShadowImage; // 0x128(0x18)
	struct FName ThemeColorKey; // 0x140(0x8)
};

// Object: Class GPUserInterface.GPWidgetTiltActor
// Size: 0x370 (Inherited: 0x370)
struct AGPWidgetTiltActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AGPWidgetTiltActor, "GPWidgetTiltActor")

	// Object: Function GPUserInterface.GPWidgetTiltActor.IsDestroy
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0xafa9f34
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsDestroy();
};

// Object: Class GPUserInterface.DFAspectRatioBoxSlot
// Size: 0x50 (Inherited: 0x38)
struct UDFAspectRatioBoxSlot : UPanelSlot
{
	DEFINE_UE_CLASS_HELPERS(UDFAspectRatioBoxSlot, "DFAspectRatioBoxSlot")

	EHorizontalAlignment HorizontalAlignment; // 0x38(0x1)
	EVerticalAlignment VerticalAlignment; // 0x39(0x1)
	uint8_t Pad_0x3A[0x16]; // 0x3A(0x16)
};

// Object: Class GPUserInterface.DFAspectRatioBox
// Size: 0x190 (Inherited: 0x170)
struct UDFAspectRatioBox : UContentWidget
{
	DEFINE_UE_CLASS_HELPERS(UDFAspectRatioBox, "DFAspectRatioBox")

	struct FIntPoint MaxRatio; // 0x16C(0x8)
	struct FIntPoint MinRatio; // 0x174(0x8)
	uint8_t bUseMaxRatio : 1; // 0x17C(0x1), Mask(0x1)
	uint8_t bUseMinRatio : 1; // 0x17C(0x1), Mask(0x2)
	uint8_t bViewportSpace : 1; // 0x17C(0x1), Mask(0x4)
	uint8_t BitPad_0x180_3 : 5; // 0x180(0x1)
	uint8_t Pad_0x181[0xF]; // 0x181(0xF)
};

// Object: Class GPUserInterface.DFBackgroundBlur
// Size: 0x300 (Inherited: 0x2E0)
struct UDFBackgroundBlur : UBackgroundBlur
{
	DEFINE_UE_CLASS_HELPERS(UDFBackgroundBlur, "DFBackgroundBlur")

	int32_t LowQualityFallbackBrushIndex; // 0x2E0(0x4)
	float Delay_RefreshCacheBlurRT; // 0x2E4(0x4)
	uint8_t bUseBlurRotation : 1; // 0x2E8(0x1), Mask(0x1)
	uint8_t BitPad_0x2E8_1 : 7; // 0x2E8(0x1)
	uint8_t bEnableBlur : 1; // 0x2E9(0x1), Mask(0x1)
	uint8_t BitPad_0x2E9_1 : 7; // 0x2E9(0x1)
	uint8_t Pad_0x2EA[0x2]; // 0x2EA(0x2)
	int32_t LayerId; // 0x2EC(0x4)
	uint8_t Pad_0x2F0[0x10]; // 0x2F0(0x10)

	// Object: Function GPUserInterface.DFBackgroundBlur.RefreshCacheBlurRT
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafa9fd0
	// Params: [ Num(0) Size(0x0) ]
	void RefreshCacheBlurRT();
};

// Object: Class GPUserInterface.DFBackgroundBoxSlot
// Size: 0x48 (Inherited: 0x38)
struct UDFBackgroundBoxSlot : UPanelSlot
{
	DEFINE_UE_CLASS_HELPERS(UDFBackgroundBoxSlot, "DFBackgroundBoxSlot")

	uint8_t Pad_0x38[0x10]; // 0x38(0x10)
};

// Object: Class GPUserInterface.DFBackgroundBox
// Size: 0x188 (Inherited: 0x170)
struct UDFBackgroundBox : UContentWidget
{
	DEFINE_UE_CLASS_HELPERS(UDFBackgroundBox, "DFBackgroundBox")

	struct FIntPoint OverrideContentSize; // 0x16C(0x8)
	EBackgroundStretchType StretchHD; // 0x174(0x1)
	EBackgroundStretchType StretchMobile; // 0x175(0x1)
	uint8_t Pad_0x17A[0xE]; // 0x17A(0xE)

	// Object: Function GPUserInterface.DFBackgroundBox.SetStretch
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafaa0c0
	// Params: [ Num(1) Size(0x1) ]
	void SetStretch(EBackgroundStretchType InStretch);

	// Object: Function GPUserInterface.DFBackgroundBox.SetContentSize
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xf59579c
	// Params: [ Num(1) Size(0x8) ]
	void SetContentSize(const struct FIntPoint& InSize);
};

// Object: Class GPUserInterface.DFUserWidgetBase
// Size: 0x360 (Inherited: 0x2F8)
struct UDFUserWidgetBase : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UDFUserWidgetBase, "DFUserWidgetBase")

	uint8_t Pad_0x2F8[0x8]; // 0x2F8(0x8)
	struct FString SuffixThemeID; // 0x300(0x10)
	uint8_t bAutoApplyThemeID : 1; // 0x310(0x1), Mask(0x1)
	uint8_t BitPad_0x310_1 : 7; // 0x310(0x1)
	EFlowAnimType FlowAnimType; // 0x311(0x1)
	uint8_t bMuteWhenDisableStyle : 1; // 0x312(0x1), Mask(0x1)
	uint8_t BitPad_0x312_1 : 7; // 0x312(0x1)
	uint8_t Pad_0x313[0x5]; // 0x313(0x5)
	struct FMulticastInlineDelegate OnEnableStyleChanged; // 0x318(0x10)
	struct FMulticastInlineDelegate OnThemeIDChanged; // 0x328(0x10)
	uint8_t Pad_0x338[0x28]; // 0x338(0x28)

	// Object: Function GPUserInterface.DFUserWidgetBase.StopAutoAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc2e18
	// Params: [ Num(1) Size(0x10) ]
	void StopAutoAnimation(struct FString AnimationName);

	// Object: Function GPUserInterface.DFUserWidgetBase.PlayAutoAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc2c64
	// Params: [ Num(4) Size(0x16) ]
	void PlayAutoAnimation(struct FString AnimationName, int32_t NumberOfLoops, EUMGSequencePlayMode PlayMode, uint8_t bJumpToEnd);

	// Object: Function GPUserInterface.DFUserWidgetBase.OnShowBegin
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xafc2c48
	// Params: [ Num(0) Size(0x0) ]
	void OnShowBegin();

	// Object: Function GPUserInterface.DFUserWidgetBase.OnShow
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xafc2c2c
	// Params: [ Num(0) Size(0x0) ]
	void OnShow();

	// Object: Function GPUserInterface.DFUserWidgetBase.OnSetThemeIDChanged
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnSetThemeIDChanged(struct FString InThemeID);

	// Object: Function GPUserInterface.DFUserWidgetBase.OnHideBegin
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xafc2c10
	// Params: [ Num(0) Size(0x0) ]
	void OnHideBegin();

	// Object: Function GPUserInterface.DFUserWidgetBase.OnHide
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xafc2bf4
	// Params: [ Num(0) Size(0x0) ]
	void OnHide();

	// Object: Function GPUserInterface.DFUserWidgetBase.GetActivatedState
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xafc2bd8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetActivatedState();
};

// Object: Class GPUserInterface.DFBidirectionalSlider
// Size: 0x970 (Inherited: 0x360)
struct UDFBidirectionalSlider : UDFUserWidgetBase
{
	DEFINE_UE_CLASS_HELPERS(UDFBidirectionalSlider, "DFBidirectionalSlider")

	struct UDFSlider* SliderLeft; // 0x360(0x8)
	struct UDFSlider* SliderRight; // 0x368(0x8)
	struct UDFProgressBar* ProgressBar; // 0x370(0x8)
	float SliderBarWidth; // 0x378(0x4)
	float LeftValue; // 0x37C(0x4)
	float RightValue; // 0x380(0x4)
	float StepValue; // 0x384(0x4)
	float LastLeftValue; // 0x388(0x4)
	float LastRightValue; // 0x38C(0x4)
	float MinValue; // 0x390(0x4)
	float MaxValue; // 0x394(0x4)
	float StepValueDecimalPlaces; // 0x398(0x4)
	uint8_t Pad_0x39C[0x4]; // 0x39C(0x4)
	struct FMulticastInlineDelegate OnValueUpdated; // 0x3A0(0x10)
	uint8_t bUseSingleStickMode : 1; // 0x3B0(0x1), Mask(0x1)
	uint8_t BitPad_0x3B0_1 : 7; // 0x3B0(0x1)
	uint8_t Pad_0x3B1[0x7]; // 0x3B1(0x7)
	struct FKey LeftRightSwitchKey; // 0x3B8(0x18)
	uint8_t CurrentSliderIsRight : 1; // 0x3D0(0x1), Mask(0x1)
	uint8_t BitPad_0x3D0_1 : 7; // 0x3D0(0x1)
	uint8_t Pad_0x3D1[0x7]; // 0x3D1(0x7)
	struct FSliderStyle OverrideSliderStyleForGamepad; // 0x3D8(0x370)
	struct FProgressBarStyle OverrideProgressBarStyleForGamepad; // 0x748(0x1B8)
	struct FLinearColor OverrideHandleColorWhenSelected; // 0x900(0x10)
	uint8_t Pad_0x910[0x60]; // 0x910(0x60)

	// Object: Function GPUserInterface.DFBidirectionalSlider.ToggleCurrentSlider
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafaa810
	// Params: [ Num(0) Size(0x0) ]
	void ToggleCurrentSlider();

	// Object: Function GPUserInterface.DFBidirectionalSlider.SetStepValue
	// Flags: [Final|Native|Private]
	// Offset: 0xafaa76c
	// Params: [ Num(1) Size(0x4) ]
	void SetStepValue(float InStepValue);

	// Object: Function GPUserInterface.DFBidirectionalSlider.SetCurrentSlider
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafaa6c0
	// Params: [ Num(1) Size(0x1) ]
	void SetCurrentSlider(uint8_t Bright);

	// Object: Function GPUserInterface.DFBidirectionalSlider.ProcessSliderValueUpdated
	// Flags: [Final|Native|Private]
	// Offset: 0xafaa5d8
	// Params: [ Num(2) Size(0x5) ]
	void ProcessSliderValueUpdated(float InValue, uint8_t bIsRight);

	// Object: Function GPUserInterface.DFBidirectionalSlider.OnSliderRightValueChanged
	// Flags: [Final|Native|Private]
	// Offset: 0xafaa534
	// Params: [ Num(1) Size(0x4) ]
	void OnSliderRightValueChanged(float InValue);

	// Object: Function GPUserInterface.DFBidirectionalSlider.OnSliderLeftValueChanged
	// Flags: [Final|Native|Private]
	// Offset: 0xafaa490
	// Params: [ Num(1) Size(0x4) ]
	void OnSliderLeftValueChanged(float InValue);

	// Object: Function GPUserInterface.DFBidirectionalSlider.OnSetValue
	// Flags: [Final|Native|Private]
	// Offset: 0xafaa364
	// Params: [ Num(3) Size(0x6) ]
	void OnSetValue(float InValue, uint8_t bIsRight, uint8_t bNeedCallback);

	// Object: Function GPUserInterface.DFBidirectionalSlider.InitValue
	// Flags: [Final|Native|Public]
	// Offset: 0xafaa210
	// Params: [ Num(4) Size(0x10) ]
	void InitValue(float InLeftValue, float InRightValue, float InMinValue, float InMaxValue);

	// Object: Function GPUserInterface.DFBidirectionalSlider.HandleInputTypeChanged
	// Flags: [Final|Native|Public]
	// Offset: 0xafaa16c
	// Params: [ Num(1) Size(0x1) ]
	void HandleInputTypeChanged(EGPInputType InInputType);
};

// Object: Class GPUserInterface.DFNamedSlot
// Size: 0x180 (Inherited: 0x180)
struct UDFNamedSlot : UNamedSlot
{
	DEFINE_UE_CLASS_HELPERS(UDFNamedSlot, "DFNamedSlot")
};

// Object: Class GPUserInterface.DFBlurSlotReContainer
// Size: 0x1A8 (Inherited: 0x180)
struct UDFBlurSlotReContainer : UDFNamedSlot
{
	DEFINE_UE_CLASS_HELPERS(UDFBlurSlotReContainer, "DFBlurSlotReContainer")

	struct FSoftObjectPath BlurWidgetPath; // 0x180(0x18)
	struct FString FullPath; // 0x198(0x10)

	// Object: Function GPUserInterface.DFBlurSlotReContainer.OnBlurWidgetLoaded
	// Flags: [Final|Native|Protected|HasDefaults]
	// Offset: 0xafaa924
	// Params: [ Num(1) Size(0x18) ]
	void OnBlurWidgetLoaded(struct FSoftObjectPath SoftObject);
};

// Object: Class GPUserInterface.DFBorder
// Size: 0x2C0 (Inherited: 0x2C0)
struct UDFBorder : UBorder
{
	DEFINE_UE_CLASS_HELPERS(UDFBorder, "DFBorder")
};

// Object: Class GPUserInterface.DFButton
// Size: 0x4F0 (Inherited: 0x4A0)
struct UDFButton : UButton
{
	DEFINE_UE_CLASS_HELPERS(UDFButton, "DFButton")

	int64_t ButtonID; // 0x4A0(0x8)
	struct FName PressedSoundName; // 0x4A8(0x8)
	struct FName HoveredSoundName; // 0x4B0(0x8)
	EGPUIFocusEffectType FocusEffectType; // 0x4B8(0x1)
	uint8_t Pad_0x4B9[0x7]; // 0x4B9(0x7)
	struct FMulticastInlineDelegate OnFocusReceivedEvent; // 0x4C0(0x10)
	struct FMulticastInlineDelegate OnFocusLostEvent; // 0x4D0(0x10)
	uint8_t Pad_0x4E0[0x10]; // 0x4E0(0x10)

	// Object: Function GPUserInterface.DFButton.SetIsFocusable
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafaac94
	// Params: [ Num(1) Size(0x1) ]
	void SetIsFocusable(uint8_t InIsFocusable);

	// Object: Function GPUserInterface.DFButton.SetClickIsIgnored
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafaabe8
	// Params: [ Num(1) Size(0x1) ]
	void SetClickIsIgnored(uint8_t bInIgnore);

	// Object: Function GPUserInterface.DFButton.SetButtonID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafaab48
	// Params: [ Num(1) Size(0x8) ]
	void SetButtonID(int64_t NewButtonID);

	// Object: Function GPUserInterface.DFButton.OverLoadSound
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf827d68
	// Params: [ Num(1) Size(0x8) ]
	void OverLoadSound(struct FName SoundName);

	// Object: Function GPUserInterface.DFButton.OverHoveredLoadSound
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafaaaa4
	// Params: [ Num(1) Size(0x8) ]
	void OverHoveredLoadSound(struct FName SoundName);

	// Object: Function GPUserInterface.DFButton.OpenDefaultSound
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafaaa88
	// Params: [ Num(0) Size(0x0) ]
	void OpenDefaultSound();

	// Object: Function GPUserInterface.DFButton.GetLastFocusCause
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafaaa54
	// Params: [ Num(1) Size(0x1) ]
	EFocusCause GetLastFocusCause();

	// Object: Function GPUserInterface.DFButton.CloseDefaultSound
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafaaa3c
	// Params: [ Num(0) Size(0x0) ]
	void CloseDefaultSound();
};

// Object: Class GPUserInterface.DFCanvasPanel
// Size: 0x1D0 (Inherited: 0x1D0)
struct UDFCanvasPanel : UCanvasPanel
{
	DEFINE_UE_CLASS_HELPERS(UDFCanvasPanel, "DFCanvasPanel")
};

// Object: Class GPUserInterface.DFContainerBase
// Size: 0x190 (Inherited: 0x170)
struct UDFContainerBase : UContentWidget
{
	DEFINE_UE_CLASS_HELPERS(UDFContainerBase, "DFContainerBase")

	uint8_t Pad_0x170[0x20]; // 0x170(0x20)
};

// Object: Class GPUserInterface.DFCanvasPosReContainer
// Size: 0x200 (Inherited: 0x190)
struct UDFCanvasPosReContainer : UDFContainerBase
{
	DEFINE_UE_CLASS_HELPERS(UDFCanvasPosReContainer, "DFCanvasPosReContainer")

	struct FAnchorData AnchorDataHD; // 0x18C(0x28)
	struct FAnchorData AnchorDataMobile; // 0x1B4(0x28)
	struct TArray<struct FPlatformCanvasPos> ExtendedPlatformData; // 0x1E0(0x10)
	uint8_t Pad_0x1F0[0x10]; // 0x1F0(0x10)

	// Object: Function GPUserInterface.DFCanvasPosReContainer.GetAnchorData
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xafaaecc
	// Params: [ Num(1) Size(0x28) ]
	struct FAnchorData GetAnchorData();
};

// Object: Class GPUserInterface.DFCarouselProV2ItemBase
// Size: 0x6A8 (Inherited: 0x610)
struct UDFCarouselProV2ItemBase : ULuaUIBaseView
{
	DEFINE_UE_CLASS_HELPERS(UDFCarouselProV2ItemBase, "DFCarouselProV2ItemBase")

	uint8_t Pad_0x610[0x48]; // 0x610(0x48)
	struct FLinearColor OriginalColor; // 0x658(0x10)
	int32_t PageIndex; // 0x668(0x4)
	int32_t CacheSlotIndex; // 0x66C(0x4)
	uint8_t bIsVertical : 1; // 0x670(0x1), Mask(0x1)
	uint8_t BitPad_0x670_1 : 7; // 0x670(0x1)
	uint8_t Pad_0x671[0x3]; // 0x671(0x3)
	struct TWeakObjectPtr<struct UDFExCommonCarouselProV2> CarouselProV2; // 0x674(0x8)
	uint8_t Pad_0x67C[0x2C]; // 0x67C(0x2C)

	// Object: Function GPUserInterface.DFCarouselProV2ItemBase.OnUnHover
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0xafab5cc
	// Params: [ Num(1) Size(0x4) ]
	void OnUnHover(int32_t InPageIndex);

	// Object: Function GPUserInterface.DFCarouselProV2ItemBase.OnRelease
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0xafab520
	// Params: [ Num(1) Size(0x4) ]
	void OnRelease(int32_t InPageIndex);

	// Object: Function GPUserInterface.DFCarouselProV2ItemBase.OnPress
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0xafab474
	// Params: [ Num(1) Size(0x4) ]
	void OnPress(int32_t InPageIndex);

	// Object: Function GPUserInterface.DFCarouselProV2ItemBase.OnLoadOuterData
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0xafab348
	// Params: [ Num(4) Size(0x11) ]
	uint8_t OnLoadOuterData(struct UDFExCommonCarouselProV2* InCarouselPro, int32_t InPageIndex, int32_t InCacheSlotIndex);

	// Object: Function GPUserInterface.DFCarouselProV2ItemBase.OnHover
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0xafab29c
	// Params: [ Num(1) Size(0x4) ]
	void OnHover(int32_t InPageIndex);

	// Object: Function GPUserInterface.DFCarouselProV2ItemBase.OnClicked
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0xafab1f0
	// Params: [ Num(1) Size(0x4) ]
	void OnClicked(int32_t InPageIndex);
};

// Object: Class GPUserInterface.DFCDNImage
// Size: 0x370 (Inherited: 0x2D0)
struct UDFCDNImage : UImage
{
	DEFINE_UE_CLASS_HELPERS(UDFCDNImage, "DFCDNImage")

	struct FSoftObjectPath BackgroundPath; // 0x2D0(0x18)
	uint8_t bNeedBackground : 1; // 0x2E8(0x1), Mask(0x1)
	uint8_t BitPad_0x2E8_1 : 7; // 0x2E8(0x1)
	uint8_t Pad_0x2E9[0x7]; // 0x2E9(0x7)
	struct FString CDN_Url; // 0x2F0(0x10)
	struct FString CDN_Tag; // 0x300(0x10)
	uint8_t bCompareVersion : 1; // 0x310(0x1), Mask(0x1)
	uint8_t BitPad_0x310_1 : 7; // 0x310(0x1)
	uint8_t Pad_0x311[0x7]; // 0x311(0x7)
	struct FMulticastInlineDelegate CNDSetImageFinishDelegate; // 0x318(0x10)
	uint8_t Pad_0x328[0x40]; // 0x328(0x40)
	struct UCDNIconDownManager* CDNIconManager; // 0x368(0x8)

	// Object: Function GPUserInterface.DFCDNImage.SetLoadImage
	// Flags: [Final|Native|Private]
	// Offset: 0xafac0e0
	// Params: [ Num(1) Size(0x10) ]
	void SetLoadImage(struct FString Path);

	// Object: Function GPUserInterface.DFCDNImage.SetImageByDownloader
	// Flags: [Final|Native|Public]
	// Offset: 0xafac000
	// Params: [ Num(2) Size(0x5) ]
	void SetImageByDownloader(int32_t HashCode, ECdnDownResult Result);

	// Object: Function GPUserInterface.DFCDNImage.SetImage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafabf18
	// Params: [ Num(2) Size(0x9) ]
	void SetImage(struct UObject* ImageAsset, uint8_t bAutoResize);

	// Object: Function GPUserInterface.DFCDNImage.SetCompareVersion
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafabe6c
	// Params: [ Num(1) Size(0x1) ]
	void SetCompareVersion(uint8_t bNeedCompare);

	// Object: Function GPUserInterface.DFCDNImage.SetCDNImage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafabcec
	// Params: [ Num(3) Size(0x28) ]
	void SetCDNImage(struct FString URL, uint8_t bMatchSize, struct FString Tag);

	// Object: Function GPUserInterface.DFCDNImage.SetBackgroundImageForWaterfall
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xafabbe0
	// Params: [ Num(2) Size(0x19) ]
	void SetBackgroundImageForWaterfall(const struct FSoftObjectPath& Path, uint8_t bAutoSize);

	// Object: Function GPUserInterface.DFCDNImage.SetBackgroundImage
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xafabad4
	// Params: [ Num(2) Size(0x19) ]
	void SetBackgroundImage(const struct FSoftObjectPath& Path, uint8_t bAutoSize);

	// Object: Function GPUserInterface.DFCDNImage.SetBackgroundData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafaba28
	// Params: [ Num(1) Size(0x1) ]
	void SetBackgroundData(uint8_t NeedBackground);

	// Object: Function GPUserInterface.DFCDNImage.ReleaseSlateResources
	// Flags: [Native|Public]
	// Offset: 0xafab974
	// Params: [ Num(1) Size(0x1) ]
	void ReleaseSlateResources(uint8_t bReleaseChildren);

	// Object: Function GPUserInterface.DFCDNImage.ClearCDNTexture
	// Flags: [Final|Native|Private]
	// Offset: 0xafab87c
	// Params: [ Num(1) Size(0x10) ]
	void ClearCDNTexture(struct FString ETag);

	// Object: Function GPUserInterface.DFCDNImage.AysncLoadCallback
	// Flags: [Final|Native|Private]
	// Offset: 0xafab748
	// Params: [ Num(3) Size(0x12) ]
	void AysncLoadCallback(struct FString FileSavePath, uint8_t bCompareVer, uint8_t bReDownload);
};

// Object: Class GPUserInterface.DFCheckBox
// Size: 0x938 (Inherited: 0x800)
struct UDFCheckBox : UCheckbox
{
	DEFINE_UE_CLASS_HELPERS(UDFCheckBox, "DFCheckBox")

	EButtonClickMethod ClickMethod; // 0x800(0x1)
	EButtonTouchMethod TouchMethod; // 0x801(0x1)
	EButtonPressMethod PressMethod; // 0x802(0x1)
	uint8_t Pad_0x803[0x1D]; // 0x803(0x1D)
	int64_t ButtonID; // 0x820(0x8)
	struct FMulticastInlineDelegate OnUncheckedClicked; // 0x828(0x10)
	struct FMulticastInlineDelegate OnUncheckedPressed; // 0x838(0x10)
	struct FMulticastInlineDelegate OnUncheckedReleased; // 0x848(0x10)
	struct FMulticastInlineDelegate OnUncheckedHovered; // 0x858(0x10)
	struct FMulticastInlineDelegate OnUncheckedUnhovered; // 0x868(0x10)
	struct FMulticastInlineDelegate OnCheckedClicked; // 0x878(0x10)
	struct FMulticastInlineDelegate OnCheckedPressed; // 0x888(0x10)
	struct FMulticastInlineDelegate OnCheckedReleased; // 0x898(0x10)
	struct FMulticastInlineDelegate OnCheckedHovered; // 0x8A8(0x10)
	struct FMulticastInlineDelegate OnCheckedUnhovered; // 0x8B8(0x10)
	struct FMulticastInlineDelegate OnCheckedReleasedNoClicked; // 0x8C8(0x10)
	struct FMulticastInlineDelegate OnUncheckedReleasedNoClicked; // 0x8D8(0x10)
	struct FVector2D PressedScale; // 0x8E8(0x8)
	struct FName CheckedSoundName; // 0x8F0(0x8)
	struct FName UncheckedSoundName; // 0x8F8(0x8)
	struct FName HoveredSoundName; // 0x900(0x8)
	uint8_t Pad_0x908[0x1]; // 0x908(0x1)
	EGPUIFocusEffectType FocusEffectType; // 0x909(0x1)
	uint8_t Pad_0x90A[0x6]; // 0x90A(0x6)
	struct FMulticastInlineDelegate OnFocusReceivedEvent; // 0x910(0x10)
	struct FMulticastInlineDelegate OnFocusLostEvent; // 0x920(0x10)
	uint8_t Pad_0x930[0x8]; // 0x930(0x8)

	// Object: Function GPUserInterface.DFCheckBox.SetIsFocusable
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafac260
	// Params: [ Num(1) Size(0x1) ]
	void SetIsFocusable(uint8_t InIsFocusable);

	// Object: Function GPUserInterface.DFCheckBox.SetButtonID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x109a72fc
	// Params: [ Num(1) Size(0x8) ]
	void SetButtonID(int64_t NewButtonID);

	// Object: Function GPUserInterface.DFCheckBox.NavigationClick
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafac24c
	// Params: [ Num(0) Size(0x0) ]
	void NavigationClick();

	// Object: Function GPUserInterface.DFCheckBox.GetLastFocusCause
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafac218
	// Params: [ Num(1) Size(0x1) ]
	EFocusCause GetLastFocusCause();
};

// Object: Class GPUserInterface.DFClipCanvasPanel
// Size: 0x1F0 (Inherited: 0x1D0)
struct UDFClipCanvasPanel : UCanvasPanel
{
	DEFINE_UE_CLASS_HELPERS(UDFClipCanvasPanel, "DFClipCanvasPanel")

	struct UWidget* ClipChild; // 0x1D0(0x8)
	uint8_t bAutoSize : 1; // 0x1D8(0x1), Mask(0x1)
	uint8_t BitPad_0x1D8_1 : 7; // 0x1D8(0x1)
	uint8_t Pad_0x1D9[0x17]; // 0x1D9(0x17)

	// Object: Function GPUserInterface.DFClipCanvasPanel.SetClipChild
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafac480
	// Params: [ Num(1) Size(0x8) ]
	void SetClipChild(struct UWidget* InChild);
};

// Object: Class GPUserInterface.DFColorReContainer
// Size: 0x1E0 (Inherited: 0x190)
struct UDFColorReContainer : UDFContainerBase
{
	DEFINE_UE_CLASS_HELPERS(UDFColorReContainer, "DFColorReContainer")

	struct FLinearColor ColorAndOpacity; // 0x18C(0x10)
	struct FLinearColor LinearColorHD; // 0x19C(0x10)
	struct FLinearColor LinearColorMobile; // 0x1AC(0x10)
	struct TArray<struct FPlatformColor> ExtendedPlatformData; // 0x1C0(0x10)
	uint8_t Pad_0x1D0[0x10]; // 0x1D0(0x10)

	// Object: Function GPUserInterface.DFColorReContainer.SetColorAndOpacity
	// Flags: [Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xafac538
	// Params: [ Num(1) Size(0x10) ]
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity);
};

// Object: Class GPUserInterface.DFColorWheel
// Size: 0x198 (Inherited: 0x158)
struct UDFColorWheel : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UDFColorWheel, "DFColorWheel")

	struct FLinearColor SelectColor; // 0x158(0x10)
	struct FMulticastInlineDelegate LinearColorChangeValue; // 0x168(0x10)
	uint8_t Pad_0x178[0x20]; // 0x178(0x20)

	// Object: Function GPUserInterface.DFColorWheel.SetSelectColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xafac5e4
	// Params: [ Num(1) Size(0x10) ]
	void SetSelectColor(struct FLinearColor sColor);
};

// Object: Class GPUserInterface.DFComboBoxString
// Size: 0xED8 (Inherited: 0xED8)
struct UDFComboBoxString : UComboBoxString
{
	DEFINE_UE_CLASS_HELPERS(UDFComboBoxString, "DFComboBoxString")
};

// Object: Class GPUserInterface.DFCommonAddDecHolder
// Size: 0x3D0 (Inherited: 0x360)
struct UDFCommonAddDecHolder : UDFUserWidgetBase
{
	DEFINE_UE_CLASS_HELPERS(UDFCommonAddDecHolder, "DFCommonAddDecHolder")

	struct UDFButton* ButtonAdd; // 0x360(0x8)
	struct UDFButton* ButtonDec; // 0x368(0x8)
	struct UDFNamedSlot* SlotContainer; // 0x370(0x8)
	struct UUserWidget* wtHoverEffectContanier; // 0x378(0x8)
	int32_t PreNum; // 0x380(0x4)
	int32_t CurNum; // 0x384(0x4)
	int32_t MinNum; // 0x388(0x4)
	int32_t MaxNum; // 0x38C(0x4)
	int32_t StepNum; // 0x390(0x4)
	uint8_t Pad_0x394[0x4]; // 0x394(0x4)
	struct FMulticastInlineDelegate OnAddDecCurNumChanged; // 0x398(0x10)
	struct FDelegate OnHandleCustomAddClicked; // 0x3A8(0x10)
	struct FDelegate OnHandleCustomDecClicked; // 0x3B8(0x10)
	uint8_t bShowDisableTips : 1; // 0x3C8(0x1), Mask(0x1)
	uint8_t BitPad_0x3C8_1 : 7; // 0x3C8(0x1)
	uint8_t bAutoSaved : 1; // 0x3C9(0x1), Mask(0x1)
	uint8_t BitPad_0x3C9_1 : 7; // 0x3C9(0x1)
	uint8_t bBtnFocusable : 1; // 0x3CA(0x1), Mask(0x1)
	uint8_t BitPad_0x3CA_1 : 7; // 0x3CA(0x1)
	uint8_t Pad_0x3CB[0x5]; // 0x3CB(0x5)

	// Object: Function GPUserInterface.DFCommonAddDecHolder.SetSlotContainerEnabled
	// Flags: [Final|Native|Public]
	// Offset: 0xafacc88
	// Params: [ Num(1) Size(0x1) ]
	void SetSlotContainerEnabled(uint8_t bEnabled);

	// Object: Function GPUserInterface.DFCommonAddDecHolder.SetButtonEnabled
	// Flags: [Final|Native|Public]
	// Offset: 0xafacbdc
	// Params: [ Num(1) Size(0x1) ]
	void SetButtonEnabled(uint8_t bEnabled);

	// Object: Function GPUserInterface.DFCommonAddDecHolder.NeedRefreshButtonEnable
	// Flags: [Final|Native|Public]
	// Offset: 0xafacb30
	// Params: [ Num(1) Size(0x1) ]
	void NeedRefreshButtonEnable(uint8_t bNeed);

	// Object: Function GPUserInterface.DFCommonAddDecHolder.ManelSaveCurNum
	// Flags: [Final|Native|Public]
	// Offset: 0xafacb1c
	// Params: [ Num(0) Size(0x0) ]
	void ManelSaveCurNum();

	// Object: Function GPUserInterface.DFCommonAddDecHolder.InitNum
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafac9c8
	// Params: [ Num(4) Size(0x10) ]
	void InitNum(int32_t InCurNum, int32_t InStepNum, int32_t InMinNum, int32_t InMaxNum);

	// Object: Function GPUserInterface.DFCommonAddDecHolder.HandleDecReleasedNoClicked
	// Flags: [Final|Native|Public]
	// Offset: 0xafac9b4
	// Params: [ Num(0) Size(0x0) ]
	void HandleDecReleasedNoClicked();

	// Object: Function GPUserInterface.DFCommonAddDecHolder.HandleDecClicked
	// Flags: [Final|Native|Public]
	// Offset: 0xafac9a0
	// Params: [ Num(0) Size(0x0) ]
	void HandleDecClicked();

	// Object: Function GPUserInterface.DFCommonAddDecHolder.HandleAddReleasedNoClicked
	// Flags: [Final|Native|Public]
	// Offset: 0xafac98c
	// Params: [ Num(0) Size(0x0) ]
	void HandleAddReleasedNoClicked();

	// Object: Function GPUserInterface.DFCommonAddDecHolder.HandleAddClicked
	// Flags: [Final|Native|Public]
	// Offset: 0xafac978
	// Params: [ Num(0) Size(0x0) ]
	void HandleAddClicked();

	// Object: Function GPUserInterface.DFCommonAddDecHolder.EnableGlobalHoveEffect
	// Flags: [Final|Native|Public]
	// Offset: 0xafac8cc
	// Params: [ Num(1) Size(0x1) ]
	void EnableGlobalHoveEffect(uint8_t bEnabled);

	// Object: Function GPUserInterface.DFCommonAddDecHolder.ChangeDeltaNum
	// Flags: [Final|Native|Public]
	// Offset: 0xafac828
	// Params: [ Num(1) Size(0x4) ]
	void ChangeDeltaNum(int32_t InChangeNum);

	// Object: Function GPUserInterface.DFCommonAddDecHolder.ChangeCurNum
	// Flags: [Final|Native|Public]
	// Offset: 0xafac74c
	// Params: [ Num(2) Size(0x8) ]
	void ChangeCurNum(int32_t InCurNum, int32_t InStepNum);
};

// Object: Class GPUserInterface.DFCommonAddDecInputBox
// Size: 0x3A0 (Inherited: 0x360)
struct UDFCommonAddDecInputBox : UDFUserWidgetBase
{
	DEFINE_UE_CLASS_HELPERS(UDFCommonAddDecInputBox, "DFCommonAddDecInputBox")

	struct UDFCommonAddDecHolder* DFCommonAddDecHolder; // 0x360(0x8)
	struct UDFEditableTextBox* AddDecInputBox; // 0x368(0x8)
	struct FMulticastInlineDelegate OnAddDecInputBoxCurNumChanged; // 0x370(0x10)
	struct FMulticastInlineDelegate OnAddDecInputBoxCurNumCommitted; // 0x380(0x10)
	struct FMulticastInlineDelegate OnUpdateInputBoxValueByGamepad; // 0x390(0x10)

	// Object: Function GPUserInterface.DFCommonAddDecInputBox.InitNum
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafae3cc
	// Params: [ Num(4) Size(0x10) ]
	void InitNum(int32_t InCurNum, int32_t InStepNum, int32_t InMinNum, int32_t InMaxNum);

	// Object: Function GPUserInterface.DFCommonAddDecInputBox.HandleInputTextCommitted
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xafae27c
	// Params: [ Num(2) Size(0x19) ]
	void HandleInputTextCommitted(const struct FText& InText, ETextCommit CommitMethod);

	// Object: Function GPUserInterface.DFCommonAddDecInputBox.HandleInputTextChanged
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xafae16c
	// Params: [ Num(1) Size(0x18) ]
	void HandleInputTextChanged(const struct FText& InText);

	// Object: Function GPUserInterface.DFCommonAddDecInputBox.HandleAddDecCurNumChanged
	// Flags: [Final|Native|Public]
	// Offset: 0xafae090
	// Params: [ Num(2) Size(0x8) ]
	void HandleAddDecCurNumChanged(int32_t InCurNum, int32_t InChangeNum);
};

// Object: Class GPUserInterface.DFCommonAddDecInputText
// Size: 0x390 (Inherited: 0x360)
struct UDFCommonAddDecInputText : UDFUserWidgetBase
{
	DEFINE_UE_CLASS_HELPERS(UDFCommonAddDecInputText, "DFCommonAddDecInputText")

	struct UDFCommonAddDecHolder* DFCommonAddDecHolder; // 0x360(0x8)
	struct UDFEditableText* AddDecInputText; // 0x368(0x8)
	struct FMulticastInlineDelegate OnAddDecInputBoxCurNumChanged; // 0x370(0x10)
	struct FMulticastInlineDelegate OnAddDecInputBoxCurNumCommitted; // 0x380(0x10)

	// Object: Function GPUserInterface.DFCommonAddDecInputText.InitNum
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafae864
	// Params: [ Num(4) Size(0x10) ]
	void InitNum(int32_t InCurNum, int32_t InStepNum, int32_t InMinNum, int32_t InMaxNum);

	// Object: Function GPUserInterface.DFCommonAddDecInputText.HandleInputTextCommitted
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xafae714
	// Params: [ Num(2) Size(0x19) ]
	void HandleInputTextCommitted(const struct FText& InText, ETextCommit CommitMethod);

	// Object: Function GPUserInterface.DFCommonAddDecInputText.HandleInputTextChanged
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xafae604
	// Params: [ Num(1) Size(0x18) ]
	void HandleInputTextChanged(const struct FText& InText);

	// Object: Function GPUserInterface.DFCommonAddDecInputText.HandleAddDecCurNumChanged
	// Flags: [Final|Native|Public]
	// Offset: 0xafae528
	// Params: [ Num(2) Size(0x8) ]
	void HandleAddDecCurNumChanged(int32_t InCurNum, int32_t InChangeNum);
};

// Object: Class GPUserInterface.DFCommonAddDecSlider
// Size: 0x3A0 (Inherited: 0x360)
struct UDFCommonAddDecSlider : UDFUserWidgetBase
{
	DEFINE_UE_CLASS_HELPERS(UDFCommonAddDecSlider, "DFCommonAddDecSlider")

	struct UDFCommonAddDecHolder* DFCommonAddDecHolder; // 0x360(0x8)
	struct UDFSlider* AddDecSlider; // 0x368(0x8)
	struct UDFProgressBar* AddDecSliderBar; // 0x370(0x8)
	struct FMulticastInlineDelegate OnAddDecSliderMouseCaptureEnd; // 0x378(0x10)
	struct FMulticastInlineDelegate OnAddDecSliderCurNumChanged; // 0x388(0x10)
	uint8_t Pad_0x398[0x8]; // 0x398(0x8)

	// Object: Function GPUserInterface.DFCommonAddDecSlider.SetBandMinValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafaeb28
	// Params: [ Num(2) Size(0x5) ]
	void SetBandMinValue(int32_t InBandMinValue, uint8_t bInBandMinValue);

	// Object: Function GPUserInterface.DFCommonAddDecSlider.InitNum
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf3685c8
	// Params: [ Num(4) Size(0x10) ]
	void InitNum(int32_t InCurNum, int32_t InStepNum, int32_t InMinNum, int32_t InMaxNum);

	// Object: Function GPUserInterface.DFCommonAddDecSlider.HandleSliderValueChanged
	// Flags: [Final|Native|Public]
	// Offset: 0xafaea84
	// Params: [ Num(1) Size(0x4) ]
	void HandleSliderValueChanged(float Value);

	// Object: Function GPUserInterface.DFCommonAddDecSlider.HandleSliderMouseCaptureEnd
	// Flags: [Final|Native|Public]
	// Offset: 0xafaea70
	// Params: [ Num(0) Size(0x0) ]
	void HandleSliderMouseCaptureEnd();

	// Object: Function GPUserInterface.DFCommonAddDecSlider.HandleAddDecCurNumChanged
	// Flags: [Final|Native|Public]
	// Offset: 0xf2874b4
	// Params: [ Num(2) Size(0x8) ]
	void HandleAddDecCurNumChanged(int32_t InCurNum, int32_t InChangeNum);
};

// Object: Class GPUserInterface.DFCommonButton
// Size: 0x28D0 (Inherited: 0x360)
struct UDFCommonButton : UDFUserWidgetBase
{
	DEFINE_UE_CLASS_HELPERS(UDFCommonButton, "DFCommonButton")

	EButtonState ButtonState; // 0x360(0x1)
	uint8_t Pad_0x361[0x3]; // 0x361(0x3)
	struct FMargin CustomExtendHitForButton; // 0x364(0x10)
	EDFButtonPresetStyleType PresetStyleType; // 0x374(0x1)
	EDFButtonPresetStyleType AutoPresetStyleType; // 0x375(0x1)
	uint8_t Pad_0x376[0xA]; // 0x376(0xA)
	uint8_t bCanEditStyle : 1; // 0x380(0x1), Mask(0x1)
	uint8_t BitPad_0x380_1 : 7; // 0x380(0x1)
	uint8_t Pad_0x381[0x7]; // 0x381(0x7)
	struct FDFBrushButtonStateStyle BackGroundStateStyle; // 0x388(0x518)
	struct FDFBrushButtonStateStyle ImageIconStateStyle; // 0x8A0(0x518)
	struct FDFRichTextBlockButtonStateStyle MainTitleStateStyle; // 0xDB8(0x19A0)
	struct FVector2D PressedScale; // 0x2758(0x8)
	uint8_t bDesiredSize : 1; // 0x2760(0x1), Mask(0x1)
	uint8_t BitPad_0x2760_1 : 7; // 0x2760(0x1)
	uint8_t Pad_0x2761[0x3]; // 0x2761(0x3)
	float CustomSizeX; // 0x2764(0x4)
	float CustomSizeY; // 0x2768(0x4)
	uint8_t Pad_0x276C[0x4]; // 0x276C(0x4)
	struct UDFButton* ButtonInternal; // 0x2770(0x8)
	struct UDFImage* ImageBackground; // 0x2778(0x8)
	struct UDFImage* ImageIcon; // 0x2780(0x8)
	struct UDFRichTextBlock* TextBlockMain; // 0x2788(0x8)
	struct UDFImage* ImageHighLight; // 0x2790(0x8)
	struct UDFCanvasPanel* ButtonPanel; // 0x2798(0x8)
	struct USizeBox* CustomSizeBox; // 0x27A0(0x8)
	uint8_t bShowHighLight : 1; // 0x27A8(0x1), Mask(0x1)
	uint8_t BitPad_0x27A8_1 : 7; // 0x27A8(0x1)
	uint8_t bShowIcon : 1; // 0x27A9(0x1), Mask(0x1)
	uint8_t BitPad_0x27A9_1 : 7; // 0x27A9(0x1)
	uint8_t bShowMainTitle : 1; // 0x27AA(0x1), Mask(0x1)
	uint8_t BitPad_0x27AA_1 : 7; // 0x27AA(0x1)
	uint8_t Pad_0x27AB[0x1]; // 0x27AB(0x1)
	struct FName PressedSoundName; // 0x27AC(0x8)
	struct FName HoveredSoundName; // 0x27B4(0x8)
	uint8_t Pad_0x27BC[0x4]; // 0x27BC(0x4)
	int64_t ButtonID; // 0x27C0(0x8)
	EGPUIFocusEffectType FocusEffectType; // 0x27C8(0x1)
	uint8_t Pad_0x27C9[0x7]; // 0x27C9(0x7)
	struct FMulticastInlineDelegate OnClicked; // 0x27D0(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x27E0(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x27F0(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x2800(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x2810(0x10)
	struct FMulticastInlineDelegate OnFocusReceivedEvent; // 0x2820(0x10)
	struct FMulticastInlineDelegate OnFocusLostEvent; // 0x2830(0x10)
	struct FMulticastInlineDelegate OnDeClicked; // 0x2840(0x10)
	struct FMulticastInlineDelegate OnDePressed; // 0x2850(0x10)
	struct FMulticastInlineDelegate OnDeReleased; // 0x2860(0x10)
	struct FMulticastInlineDelegate OnDeHovered; // 0x2870(0x10)
	struct FMulticastInlineDelegate OnDeUnhovered; // 0x2880(0x10)
	struct FMulticastInlineDelegate OnReleasedNoClicked; // 0x2890(0x10)
	struct FMulticastInlineDelegate OnButtonStateChanged; // 0x28A0(0x10)
	uint8_t Pad_0x28B0[0x12]; // 0x28B0(0x12)
	EButtonHoverAnimType HoverAnimType; // 0x28C2(0x1)
	uint8_t Pad_0x28C3[0xD]; // 0x28C3(0xD)

	// Object: Function GPUserInterface.DFCommonButton.SetThemeStyleByID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb04fc
	// Params: [ Num(2) Size(0x18) ]
	void SetThemeStyleByID(EDFButtonPresetStyleType InPresetStyleType, struct FString InThemeID);

	// Object: Function GPUserInterface.DFCommonButton.SetThemeStyle
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xafb0410
	// Params: [ Num(1) Size(0x23F0) ]
	void SetThemeStyle(const struct FDFCommonButtonStyle& InStyle);

	// Object: Function GPUserInterface.DFCommonButton.SetPressedSoundName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfdd0c5c
	// Params: [ Num(1) Size(0x8) ]
	void SetPressedSoundName(struct FName InPressedSoundName);

	// Object: Function GPUserInterface.DFCommonButton.SetMainTitleTextScale4ButtonState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb0330
	// Params: [ Num(2) Size(0x5) ]
	void SetMainTitleTextScale4ButtonState(float RichTextScale, EButtonState InButtonState);

	// Object: Function GPUserInterface.DFCommonButton.SetMainTitleTextScale4AllState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb028c
	// Params: [ Num(1) Size(0x4) ]
	void SetMainTitleTextScale4AllState(float RichTextScale);

	// Object: Function GPUserInterface.DFCommonButton.SetMainTitleTextScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb01e8
	// Params: [ Num(1) Size(0x4) ]
	void SetMainTitleTextScale(float RichTextScale);

	// Object: Function GPUserInterface.DFCommonButton.SetMainTitleText4ButtonState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb002c
	// Params: [ Num(2) Size(0x19) ]
	void SetMainTitleText4ButtonState(struct FText LuaText, EButtonState InButtonState);

	// Object: Function GPUserInterface.DFCommonButton.SetMainTitleText4AllState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf462c48
	// Params: [ Num(1) Size(0x18) ]
	void SetMainTitleText4AllState(struct FText LuaText);

	// Object: Function GPUserInterface.DFCommonButton.SetMainTitleText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x107b420c
	// Params: [ Num(1) Size(0x18) ]
	void SetMainTitleText(struct FText LuaText);

	// Object: Function GPUserInterface.DFCommonButton.SetIsShowMainTitle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafaff80
	// Params: [ Num(1) Size(0x1) ]
	void SetIsShowMainTitle(uint8_t bInShowMainTitle);

	// Object: Function GPUserInterface.DFCommonButton.SetIsShowIcon
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf4495f4
	// Params: [ Num(1) Size(0x1) ]
	void SetIsShowIcon(uint8_t bInShowIcon);

	// Object: Function GPUserInterface.DFCommonButton.SetIsShowHighlight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafafed4
	// Params: [ Num(1) Size(0x1) ]
	void SetIsShowHighlight(uint8_t bInShowHighLight);

	// Object: Function GPUserInterface.DFCommonButton.SetIsEnabledStyle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf80a4cc
	// Params: [ Num(1) Size(0x1) ]
	void SetIsEnabledStyle(uint8_t bEnabledStyle);

	// Object: Function GPUserInterface.DFCommonButton.SetImageIconFromSoftAtlasInterface4DeactiveState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf34ecac
	// Params: [ Num(2) Size(0x29) ]
	void SetImageIconFromSoftAtlasInterface4DeactiveState(struct TSoftObjectPtr<UObject> SoftTexture, uint8_t bMatchSize);

	// Object: Function GPUserInterface.DFCommonButton.SetImageIconFromSoftAtlasInterface4ButtonState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf270d64
	// Params: [ Num(3) Size(0x2A) ]
	void SetImageIconFromSoftAtlasInterface4ButtonState(struct TSoftObjectPtr<UObject> SoftTexture, EButtonState InButtonState, uint8_t bMatchSize);

	// Object: Function GPUserInterface.DFCommonButton.SetImageIconFromSoftAtlasInterface4AllState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafafd44
	// Params: [ Num(2) Size(0x29) ]
	void SetImageIconFromSoftAtlasInterface4AllState(struct TSoftObjectPtr<UObject> SoftTexture, uint8_t bMatchSize);

	// Object: Function GPUserInterface.DFCommonButton.SetImageIconFromSoftAtlasInterface4ActiveState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf34c8e4
	// Params: [ Num(2) Size(0x29) ]
	void SetImageIconFromSoftAtlasInterface4ActiveState(struct TSoftObjectPtr<UObject> SoftTexture, uint8_t bMatchSize);

	// Object: Function GPUserInterface.DFCommonButton.SetImageIconFromSoftAtlasInterface
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafafbb4
	// Params: [ Num(2) Size(0x29) ]
	void SetImageIconFromSoftAtlasInterface(struct TSoftObjectPtr<UObject> SoftTexture, uint8_t bMatchSize);

	// Object: Function GPUserInterface.DFCommonButton.SetImageIconFromAtlasInterface4DeactiveState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafafabc
	// Params: [ Num(2) Size(0x11) ]
	void SetImageIconFromAtlasInterface4DeactiveState(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, uint8_t bMatchSize);

	// Object: Function GPUserInterface.DFCommonButton.SetImageIconFromAtlasInterface4ButtonState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafaf988
	// Params: [ Num(3) Size(0x12) ]
	void SetImageIconFromAtlasInterface4ButtonState(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, EButtonState InButtonState, uint8_t bMatchSize);

	// Object: Function GPUserInterface.DFCommonButton.SetImageIconFromAtlasInterface4AllState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafaf890
	// Params: [ Num(2) Size(0x11) ]
	void SetImageIconFromAtlasInterface4AllState(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, uint8_t bMatchSize);

	// Object: Function GPUserInterface.DFCommonButton.SetImageIconFromAtlasInterface4ActiveState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafaf798
	// Params: [ Num(2) Size(0x11) ]
	void SetImageIconFromAtlasInterface4ActiveState(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, uint8_t bMatchSize);

	// Object: Function GPUserInterface.DFCommonButton.SetImageIconFromAtlasInterface
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafaf6a0
	// Params: [ Num(2) Size(0x11) ]
	void SetImageIconFromAtlasInterface(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, uint8_t bMatchSize);

	// Object: Function GPUserInterface.DFCommonButton.SetImageIcon4DeactiveState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafaf5fc
	// Params: [ Num(1) Size(0x8) ]
	void SetImageIcon4DeactiveState(struct UObject* InResourceObject);

	// Object: Function GPUserInterface.DFCommonButton.SetImageIcon4ButtonState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafaf51c
	// Params: [ Num(2) Size(0x9) ]
	void SetImageIcon4ButtonState(struct UObject* InResourceObject, EButtonState InButtonState);

	// Object: Function GPUserInterface.DFCommonButton.SetImageIcon4AllState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafaf434
	// Params: [ Num(2) Size(0x9) ]
	void SetImageIcon4AllState(struct UObject* InResourceObject, uint8_t bMatchSize);

	// Object: Function GPUserInterface.DFCommonButton.SetImageIcon4ActiveState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafaf390
	// Params: [ Num(1) Size(0x8) ]
	void SetImageIcon4ActiveState(struct UObject* InResourceObject);

	// Object: Function GPUserInterface.DFCommonButton.SetImageIcon
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafaf2ec
	// Params: [ Num(1) Size(0x8) ]
	void SetImageIcon(struct UObject* InResourceObject);

	// Object: Function GPUserInterface.DFCommonButton.SetImageBackGround4ButtonState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafaf20c
	// Params: [ Num(2) Size(0x9) ]
	void SetImageBackGround4ButtonState(struct UObject* InResourceObject, EButtonState InButtonState);

	// Object: Function GPUserInterface.DFCommonButton.SetImageBackGround4AllState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafaf168
	// Params: [ Num(1) Size(0x8) ]
	void SetImageBackGround4AllState(struct UObject* InResourceObject);

	// Object: Function GPUserInterface.DFCommonButton.SetImageBackGround
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafaf0c4
	// Params: [ Num(1) Size(0x8) ]
	void SetImageBackGround(struct UObject* InResourceObject);

	// Object: Function GPUserInterface.DFCommonButton.SetHoveredSoundName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafaf020
	// Params: [ Num(1) Size(0x8) ]
	void SetHoveredSoundName(struct FName InHoveredSoundName);

	// Object: Function GPUserInterface.DFCommonButton.SetCustomExtendHitForButton
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf1fcce4
	// Params: [ Num(1) Size(0x10) ]
	void SetCustomExtendHitForButton(struct FMargin ExtendMargin);

	// Object: Function GPUserInterface.DFCommonButton.SetButtonID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf142c60
	// Params: [ Num(1) Size(0x8) ]
	void SetButtonID(int64_t NewButtonID);

	// Object: Function GPUserInterface.DFCommonButton.RevertOriginalSoundNames
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafaf00c
	// Params: [ Num(0) Size(0x0) ]
	void RevertOriginalSoundNames();

	// Object: Function GPUserInterface.DFCommonButton.ManuelSetButtonState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf1a4814
	// Params: [ Num(1) Size(0x1) ]
	void ManuelSetButtonState(EButtonState InButtonState);

	// Object: Function GPUserInterface.DFCommonButton.HandleUnhovered
	// Flags: [Final|Native|Public]
	// Offset: 0xafaeff8
	// Params: [ Num(0) Size(0x0) ]
	void HandleUnhovered();

	// Object: Function GPUserInterface.DFCommonButton.HandleReleasedNoClicked
	// Flags: [Final|Native|Public]
	// Offset: 0xafaefe4
	// Params: [ Num(0) Size(0x0) ]
	void HandleReleasedNoClicked();

	// Object: Function GPUserInterface.DFCommonButton.HandleReleased
	// Flags: [Final|Native|Public]
	// Offset: 0xf4975b4
	// Params: [ Num(0) Size(0x0) ]
	void HandleReleased();

	// Object: Function GPUserInterface.DFCommonButton.HandlePressed
	// Flags: [Final|Native|Public]
	// Offset: 0xf420158
	// Params: [ Num(0) Size(0x0) ]
	void HandlePressed();

	// Object: Function GPUserInterface.DFCommonButton.HandleHovered
	// Flags: [Final|Native|Public]
	// Offset: 0xafaefd0
	// Params: [ Num(0) Size(0x0) ]
	void HandleHovered();

	// Object: Function GPUserInterface.DFCommonButton.HandleFocusReceived
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xafaeec4
	// Params: [ Num(2) Size(0x50) ]
	void HandleFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);

	// Object: Function GPUserInterface.DFCommonButton.HandleFocusLost
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xafaee08
	// Params: [ Num(1) Size(0x8) ]
	void HandleFocusLost(const struct FFocusEvent& InFocusEvent);

	// Object: Function GPUserInterface.DFCommonButton.HandleClicked
	// Flags: [Final|Native|Public]
	// Offset: 0xf3d3360
	// Params: [ Num(0) Size(0x0) ]
	void HandleClicked();

	// Object: Function GPUserInterface.DFCommonButton.ClearThemeStyle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf369f24
	// Params: [ Num(0) Size(0x0) ]
	void ClearThemeStyle();
};

// Object: Class GPUserInterface.DFCommonCheckButton
// Size: 0x2918 (Inherited: 0x360)
struct UDFCommonCheckButton : UDFUserWidgetBase
{
	DEFINE_UE_CLASS_HELPERS(UDFCommonCheckButton, "DFCommonCheckButton")

	ECheckButtonState CheckButtonState; // 0x360(0x1)
	EDFCheckButtonPresetStyleType PresetStyleType; // 0x361(0x1)
	EDFCheckButtonPresetStyleType AutoPresetStyleType; // 0x362(0x1)
	uint8_t Pad_0x363[0xD]; // 0x363(0xD)
	uint8_t bCanEditStyle : 1; // 0x370(0x1), Mask(0x1)
	uint8_t BitPad_0x370_1 : 7; // 0x370(0x1)
	uint8_t Pad_0x371[0x7]; // 0x371(0x7)
	struct FDFBrushCheckStateStyle BackGroundStateStyle; // 0x378(0x518)
	struct FDFBrushCheckStateStyle ImageIconStateStyle; // 0x890(0x518)
	struct FDFRichTextBlockCheckStateStyle MainTitleStateStyle; // 0xDA8(0x19A0)
	struct FVector2D PressedScale; // 0x2748(0x8)
	uint8_t bDesiredSize : 1; // 0x2750(0x1), Mask(0x1)
	uint8_t BitPad_0x2750_1 : 7; // 0x2750(0x1)
	uint8_t Pad_0x2751[0x3]; // 0x2751(0x3)
	float CustomSizeX; // 0x2754(0x4)
	float CustomSizeY; // 0x2758(0x4)
	uint8_t bShowHighLight : 1; // 0x275C(0x1), Mask(0x1)
	uint8_t BitPad_0x275C_1 : 7; // 0x275C(0x1)
	uint8_t bShowIcon : 1; // 0x275D(0x1), Mask(0x1)
	uint8_t BitPad_0x275D_1 : 7; // 0x275D(0x1)
	uint8_t bShowMainTitle : 1; // 0x275E(0x1), Mask(0x1)
	uint8_t BitPad_0x275E_1 : 7; // 0x275E(0x1)
	uint8_t bBPLockState : 1; // 0x275F(0x1), Mask(0x1)
	uint8_t BitPad_0x275F_1 : 7; // 0x275F(0x1)
	struct UDFCheckBox* CheckBoxInternal; // 0x2760(0x8)
	struct UDFImage* ImageBackground; // 0x2768(0x8)
	struct UDFImage* ImageIcon; // 0x2770(0x8)
	struct UDFRichTextBlock* TextBlockMain; // 0x2778(0x8)
	struct UDFImage* ImageHighLight; // 0x2780(0x8)
	struct UDFCanvasPanel* ButtonPanel; // 0x2788(0x8)
	struct UDFNamedSlot* NamedSlot; // 0x2790(0x8)
	struct USizeBox* CustomSizeBox; // 0x2798(0x8)
	struct FName CheckedSoundName; // 0x27A0(0x8)
	struct FName UncheckedSoundName; // 0x27A8(0x8)
	struct FName HoveredSoundName; // 0x27B0(0x8)
	int64_t ButtonID; // 0x27B8(0x8)
	EGPUIFocusEffectType FocusEffectType; // 0x27C0(0x1)
	uint8_t Pad_0x27C1[0x7]; // 0x27C1(0x7)
	struct FMulticastInlineDelegate OnCheckButtonStateChanged; // 0x27C8(0x10)
	struct FMulticastInlineDelegate OnUncheckedClicked; // 0x27D8(0x10)
	struct FMulticastInlineDelegate OnUncheckedPressed; // 0x27E8(0x10)
	struct FMulticastInlineDelegate OnUncheckedReleased; // 0x27F8(0x10)
	struct FMulticastInlineDelegate OnUncheckedHovered; // 0x2808(0x10)
	struct FMulticastInlineDelegate OnUncheckedUnhovered; // 0x2818(0x10)
	struct FMulticastInlineDelegate OnUncheckedReleasedNoClicked; // 0x2828(0x10)
	struct FMulticastInlineDelegate OnCheckedClicked; // 0x2838(0x10)
	struct FMulticastInlineDelegate OnCheckedPressed; // 0x2848(0x10)
	struct FMulticastInlineDelegate OnCheckedReleased; // 0x2858(0x10)
	struct FMulticastInlineDelegate OnCheckedReleasedNoClicked; // 0x2868(0x10)
	struct FMulticastInlineDelegate OnCheckedHovered; // 0x2878(0x10)
	struct FMulticastInlineDelegate OnCheckedUnhovered; // 0x2888(0x10)
	struct FMulticastInlineDelegate OnCheckedBoxStateChangedNative; // 0x2898(0x10)
	struct FMulticastInlineDelegate OnCheckFailed; // 0x28A8(0x10)
	struct FDelegate OnGetCanBeChecked; // 0x28B8(0x10)
	struct FDelegate OnGetCanBeCheckedWithSelfParam; // 0x28C8(0x10)
	uint8_t Pad_0x28D8[0x34]; // 0x28D8(0x34)
	ECheckButtonHoverAnimType HoverAnimType; // 0x290C(0x1)
	uint8_t Pad_0x290D[0xB]; // 0x290D(0xB)

	// Object: Function GPUserInterface.DFCommonCheckButton.SetUncheckedSoundName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb2258
	// Params: [ Num(1) Size(0x8) ]
	void SetUncheckedSoundName(struct FName InUncheckedSoundName);

	// Object: Function GPUserInterface.DFCommonCheckButton.SetThemeStyleByID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb2170
	// Params: [ Num(2) Size(0x18) ]
	void SetThemeStyleByID(EDFCheckButtonPresetStyleType InPresetStyleType, struct FString InThemeID);

	// Object: Function GPUserInterface.DFCommonCheckButton.SetThemeStyle
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xafb2084
	// Params: [ Num(1) Size(0x23F8) ]
	void SetThemeStyle(const struct FDFCommonCheckButtonStyle& InStyle);

	// Object: Function GPUserInterface.DFCommonCheckButton.SetNamedSlotVisibility
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf58723c
	// Params: [ Num(1) Size(0x1) ]
	void SetNamedSlotVisibility(ESlateVisibility InVisibility);

	// Object: Function GPUserInterface.DFCommonCheckButton.SetMainTitleTextScale4ButtonState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb1fa4
	// Params: [ Num(2) Size(0x5) ]
	void SetMainTitleTextScale4ButtonState(float RichTextScale, ECheckButtonState InCheckButtonState);

	// Object: Function GPUserInterface.DFCommonCheckButton.SetMainTitleTextScale4AllState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb1f00
	// Params: [ Num(1) Size(0x4) ]
	void SetMainTitleTextScale4AllState(float RichTextScale);

	// Object: Function GPUserInterface.DFCommonCheckButton.SetMainTitleTextScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb1e5c
	// Params: [ Num(1) Size(0x4) ]
	void SetMainTitleTextScale(float RichTextScale);

	// Object: Function GPUserInterface.DFCommonCheckButton.SetMainTitleText4ButtonState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb1ca0
	// Params: [ Num(2) Size(0x19) ]
	void SetMainTitleText4ButtonState(struct FText LuaText, ECheckButtonState InCheckButtonState);

	// Object: Function GPUserInterface.DFCommonCheckButton.SetMainTitleText4AllState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf3a14bc
	// Params: [ Num(1) Size(0x18) ]
	void SetMainTitleText4AllState(struct FText LuaText);

	// Object: Function GPUserInterface.DFCommonCheckButton.SetMainTitleText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb1b20
	// Params: [ Num(1) Size(0x18) ]
	void SetMainTitleText(struct FText LuaText);

	// Object: Function GPUserInterface.DFCommonCheckButton.SetIsShowMainTitle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf26e504
	// Params: [ Num(1) Size(0x1) ]
	void SetIsShowMainTitle(uint8_t bInShowMainTitle);

	// Object: Function GPUserInterface.DFCommonCheckButton.SetIsShowIcon
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf240b10
	// Params: [ Num(1) Size(0x1) ]
	void SetIsShowIcon(uint8_t bInShowIcon);

	// Object: Function GPUserInterface.DFCommonCheckButton.SetIsShowHighlight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf7f3214
	// Params: [ Num(1) Size(0x1) ]
	void SetIsShowHighlight(uint8_t bInShowHighLight);

	// Object: Function GPUserInterface.DFCommonCheckButton.SetIsLockedStyle
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void SetIsLockedStyle(uint8_t bIsLockState);

	// Object: Function GPUserInterface.DFCommonCheckButton.SetIsEnabledStyle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb1a74
	// Params: [ Num(1) Size(0x1) ]
	void SetIsEnabledStyle(uint8_t bEnabledStyle);

	// Object: Function GPUserInterface.DFCommonCheckButton.SetIsChecked
	// Flags: [Final|Native|Public]
	// Offset: 0xafb19c8
	// Params: [ Num(1) Size(0x1) ]
	void SetIsChecked(uint8_t InIsChecked);

	// Object: Function GPUserInterface.DFCommonCheckButton.SetImageIconFromSoftAtlasInterface4UncheckState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x101dad90
	// Params: [ Num(2) Size(0x29) ]
	void SetImageIconFromSoftAtlasInterface4UncheckState(struct TSoftObjectPtr<UObject> SoftTexture, uint8_t bMatchSize);

	// Object: Function GPUserInterface.DFCommonCheckButton.SetImageIconFromSoftAtlasInterface4CheckState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x101d7154
	// Params: [ Num(2) Size(0x29) ]
	void SetImageIconFromSoftAtlasInterface4CheckState(struct TSoftObjectPtr<UObject> SoftTexture, uint8_t bMatchSize);

	// Object: Function GPUserInterface.DFCommonCheckButton.SetImageIconFromSoftAtlasInterface4ButtonState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1010b8b4
	// Params: [ Num(3) Size(0x2A) ]
	void SetImageIconFromSoftAtlasInterface4ButtonState(struct TSoftObjectPtr<UObject> SoftTexture, ECheckButtonState InCheckButtonState, uint8_t bMatchSize);

	// Object: Function GPUserInterface.DFCommonCheckButton.SetImageIconFromSoftAtlasInterface4AllState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf70c844
	// Params: [ Num(2) Size(0x29) ]
	void SetImageIconFromSoftAtlasInterface4AllState(struct TSoftObjectPtr<UObject> SoftTexture, uint8_t bMatchSize);

	// Object: Function GPUserInterface.DFCommonCheckButton.SetImageIconFromSoftAtlasInterface
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb1838
	// Params: [ Num(2) Size(0x29) ]
	void SetImageIconFromSoftAtlasInterface(struct TSoftObjectPtr<UObject> SoftTexture, uint8_t bMatchSize);

	// Object: Function GPUserInterface.DFCommonCheckButton.SetImageIconFromAtlasInterface4UncheckState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb1740
	// Params: [ Num(2) Size(0x11) ]
	void SetImageIconFromAtlasInterface4UncheckState(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, uint8_t bMatchSize);

	// Object: Function GPUserInterface.DFCommonCheckButton.SetImageIconFromAtlasInterface4CheckState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb1648
	// Params: [ Num(2) Size(0x11) ]
	void SetImageIconFromAtlasInterface4CheckState(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, uint8_t bMatchSize);

	// Object: Function GPUserInterface.DFCommonCheckButton.SetImageIconFromAtlasInterface4ButtonState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb1514
	// Params: [ Num(3) Size(0x12) ]
	void SetImageIconFromAtlasInterface4ButtonState(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, ECheckButtonState InCheckButtonState, uint8_t bMatchSize);

	// Object: Function GPUserInterface.DFCommonCheckButton.SetImageIconFromAtlasInterface4AllState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf7e9700
	// Params: [ Num(2) Size(0x11) ]
	void SetImageIconFromAtlasInterface4AllState(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, uint8_t bMatchSize);

	// Object: Function GPUserInterface.DFCommonCheckButton.SetImageIconFromAtlasInterface
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb141c
	// Params: [ Num(2) Size(0x11) ]
	void SetImageIconFromAtlasInterface(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, uint8_t bMatchSize);

	// Object: Function GPUserInterface.DFCommonCheckButton.SetImageIcon4UncheckState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb1378
	// Params: [ Num(1) Size(0x8) ]
	void SetImageIcon4UncheckState(struct UObject* InResourceObject);

	// Object: Function GPUserInterface.DFCommonCheckButton.SetImageIcon4CheckState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb12d4
	// Params: [ Num(1) Size(0x8) ]
	void SetImageIcon4CheckState(struct UObject* InResourceObject);

	// Object: Function GPUserInterface.DFCommonCheckButton.SetImageIcon4ButtonState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb11f4
	// Params: [ Num(2) Size(0x9) ]
	void SetImageIcon4ButtonState(struct UObject* InResourceObject, ECheckButtonState InCheckButtonState);

	// Object: Function GPUserInterface.DFCommonCheckButton.SetImageIcon4AllState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb1150
	// Params: [ Num(1) Size(0x8) ]
	void SetImageIcon4AllState(struct UObject* InResourceObject);

	// Object: Function GPUserInterface.DFCommonCheckButton.SetImageIcon
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb10ac
	// Params: [ Num(1) Size(0x8) ]
	void SetImageIcon(struct UObject* InResourceObject);

	// Object: Function GPUserInterface.DFCommonCheckButton.SetImageBackGround4ButtonState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb0fcc
	// Params: [ Num(2) Size(0x9) ]
	void SetImageBackGround4ButtonState(struct UObject* InResourceObject, ECheckButtonState InCheckButtonState);

	// Object: Function GPUserInterface.DFCommonCheckButton.SetImageBackGround4AllState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb0f28
	// Params: [ Num(1) Size(0x8) ]
	void SetImageBackGround4AllState(struct UObject* InResourceObject);

	// Object: Function GPUserInterface.DFCommonCheckButton.SetImageBackGround
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb0e84
	// Params: [ Num(1) Size(0x8) ]
	void SetImageBackGround(struct UObject* InResourceObject);

	// Object: Function GPUserInterface.DFCommonCheckButton.SetHoveredSoundName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb0de0
	// Params: [ Num(1) Size(0x8) ]
	void SetHoveredSoundName(struct FName InHoveredSoundName);

	// Object: Function GPUserInterface.DFCommonCheckButton.SetCheckedSoundName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb0d3c
	// Params: [ Num(1) Size(0x8) ]
	void SetCheckedSoundName(struct FName InCheckedSoundName);

	// Object: Function GPUserInterface.DFCommonCheckButton.SetButtonID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x100787c8
	// Params: [ Num(1) Size(0x8) ]
	void SetButtonID(int64_t NewButtonID);

	// Object: Function GPUserInterface.DFCommonCheckButton.RevertOriginalSoundNames
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb0d28
	// Params: [ Num(0) Size(0x0) ]
	void RevertOriginalSoundNames();

	// Object: Function GPUserInterface.DFCommonCheckButton.NavigationClick
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb0d14
	// Params: [ Num(0) Size(0x0) ]
	void NavigationClick();

	// Object: Function GPUserInterface.DFCommonCheckButton.ManuelSetCheckButtonState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf915550
	// Params: [ Num(1) Size(0x1) ]
	void ManuelSetCheckButtonState(ECheckButtonState InCheckButtonState);

	// Object: Function GPUserInterface.DFCommonCheckButton.IsChecked
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf12cbc8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsChecked();

	// Object: Function GPUserInterface.DFCommonCheckButton.HandleUncheckedUnhovered
	// Flags: [Final|Native|Public]
	// Offset: 0xafb0d00
	// Params: [ Num(0) Size(0x0) ]
	void HandleUncheckedUnhovered();

	// Object: Function GPUserInterface.DFCommonCheckButton.HandleUncheckedReleasedNoClicked
	// Flags: [Final|Native|Public]
	// Offset: 0xafb0cec
	// Params: [ Num(0) Size(0x0) ]
	void HandleUncheckedReleasedNoClicked();

	// Object: Function GPUserInterface.DFCommonCheckButton.HandleUncheckedReleased
	// Flags: [Final|Native|Public]
	// Offset: 0xfc0e4f4
	// Params: [ Num(0) Size(0x0) ]
	void HandleUncheckedReleased();

	// Object: Function GPUserInterface.DFCommonCheckButton.HandleUncheckedPressed
	// Flags: [Final|Native|Public]
	// Offset: 0xf9076d0
	// Params: [ Num(0) Size(0x0) ]
	void HandleUncheckedPressed();

	// Object: Function GPUserInterface.DFCommonCheckButton.HandleUncheckedHovered
	// Flags: [Final|Native|Public]
	// Offset: 0xafb0cd8
	// Params: [ Num(0) Size(0x0) ]
	void HandleUncheckedHovered();

	// Object: Function GPUserInterface.DFCommonCheckButton.HandleUncheckedClicked
	// Flags: [Final|Native|Public]
	// Offset: 0xf9347cc
	// Params: [ Num(0) Size(0x0) ]
	void HandleUncheckedClicked();

	// Object: Function GPUserInterface.DFCommonCheckButton.HandleFocusReceived
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xafb0bcc
	// Params: [ Num(2) Size(0x50) ]
	void HandleFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);

	// Object: Function GPUserInterface.DFCommonCheckButton.HandleFocusLost
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xafb0b10
	// Params: [ Num(1) Size(0x8) ]
	void HandleFocusLost(const struct FFocusEvent& InFocusEvent);

	// Object: Function GPUserInterface.DFCommonCheckButton.HandleCheckStateChanged
	// Flags: [Final|Native|Public]
	// Offset: 0xf9b5028
	// Params: [ Num(1) Size(0x1) ]
	void HandleCheckStateChanged(uint8_t bIsChecked);

	// Object: Function GPUserInterface.DFCommonCheckButton.HandleCheckedUnhovered
	// Flags: [Final|Native|Public]
	// Offset: 0xafb0afc
	// Params: [ Num(0) Size(0x0) ]
	void HandleCheckedUnhovered();

	// Object: Function GPUserInterface.DFCommonCheckButton.HandleCheckedReleasedNoClicked
	// Flags: [Final|Native|Public]
	// Offset: 0xafb0ae8
	// Params: [ Num(0) Size(0x0) ]
	void HandleCheckedReleasedNoClicked();

	// Object: Function GPUserInterface.DFCommonCheckButton.HandleCheckedReleased
	// Flags: [Final|Native|Public]
	// Offset: 0xafb0ad4
	// Params: [ Num(0) Size(0x0) ]
	void HandleCheckedReleased();

	// Object: Function GPUserInterface.DFCommonCheckButton.HandleCheckedPressed
	// Flags: [Final|Native|Public]
	// Offset: 0xafb0ac0
	// Params: [ Num(0) Size(0x0) ]
	void HandleCheckedPressed();

	// Object: Function GPUserInterface.DFCommonCheckButton.HandleCheckedHovered
	// Flags: [Final|Native|Public]
	// Offset: 0xafb0aac
	// Params: [ Num(0) Size(0x0) ]
	void HandleCheckedHovered();

	// Object: Function GPUserInterface.DFCommonCheckButton.HandleCheckedClicked
	// Flags: [Final|Native|Public]
	// Offset: 0xafb0a98
	// Params: [ Num(0) Size(0x0) ]
	void HandleCheckedClicked();

	// Object: Function GPUserInterface.DFCommonCheckButton.GetCanBeChecked
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb0a60
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetCanBeChecked();

	// Object: Function GPUserInterface.DFCommonCheckButton.DelayFadeInAnimation
	// Flags: [Final|Native|Public]
	// Offset: 0xafb0a4c
	// Params: [ Num(0) Size(0x0) ]
	void DelayFadeInAnimation();

	// Object: Function GPUserInterface.DFCommonCheckButton.ClearThemeStyle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf7033b8
	// Params: [ Num(0) Size(0x0) ]
	void ClearThemeStyle();

	// Object: Function GPUserInterface.DFCommonCheckButton.ApplyTabContent
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xafb091c
	// Params: [ Num(1) Size(0x40) ]
	void ApplyTabContent(const struct FDFCommonTabContent& TabContent);
};

// Object: Class GPUserInterface.DFCommonTabWidget
// Size: 0x2878 (Inherited: 0x360)
struct UDFCommonTabWidget : UDFUserWidgetBase
{
	DEFINE_UE_CLASS_HELPERS(UDFCommonTabWidget, "DFCommonTabWidget")

	EDFCheckButtonPresetStyleType PresetStyleType; // 0x360(0x1)
	EDFCheckButtonPresetStyleType AutoPresetStyleType; // 0x361(0x1)
	ETabType TabType; // 0x362(0x1)
	uint8_t Pad_0x363[0x5]; // 0x363(0x5)
	struct FDFCommonCheckButtonStyle DynamicStyle; // 0x368(0x23F8)
	struct UUserWidget* ItemWidgetTemplateClass; // 0x2760(0x8)
	int32_t EditorPreviewItemCount; // 0x2768(0x4)
	int32_t EditorPreviewCheckIndex; // 0x276C(0x4)
	uint8_t bUseBlueprintConfig : 1; // 0x2770(0x1), Mask(0x1)
	uint8_t BitPad_0x2770_1 : 7; // 0x2770(0x1)
	uint8_t Pad_0x2771[0x7]; // 0x2771(0x7)
	struct TArray<struct FDFCommonTabContent> TabContents; // 0x2778(0x10)
	ESizeMode SizeMode; // 0x2788(0x1)
	uint8_t Pad_0x2789[0x3]; // 0x2789(0x3)
	int32_t TabGid; // 0x278C(0x4)
	float TabWidth; // 0x2790(0x4)
	float TabHeight; // 0x2794(0x4)
	uint8_t bAutoSize : 1; // 0x2798(0x1), Mask(0x1)
	uint8_t BitPad_0x2798_1 : 7; // 0x2798(0x1)
	uint8_t bForceDesireSize : 1; // 0x2799(0x1), Mask(0x1)
	uint8_t BitPad_0x2799_1 : 7; // 0x2799(0x1)
	uint8_t Pad_0x279A[0x2]; // 0x279A(0x2)
	float OptionWidth; // 0x279C(0x4)
	float OptionHeight; // 0x27A0(0x4)
	struct FMargin TabPadding; // 0x27A4(0x10)
	int32_t Row; // 0x27B4(0x4)
	int32_t Column; // 0x27B8(0x4)
	struct FVector2D ItemSpacing; // 0x27BC(0x8)
	ESlateVisibility ItemVisibility; // 0x27C4(0x1)
	EOrientation Orientation; // 0x27C5(0x1)
	ESlateVisibility ScrollBarVisibility; // 0x27C6(0x1)
	uint8_t Pad_0x27C7[0x1]; // 0x27C7(0x1)
	struct UDFScrollGridBox* ScrollGridBox; // 0x27C8(0x8)
	struct UPanelWidget* CustomTabContainer; // 0x27D0(0x8)
	struct UNamedSlot* EmptyBackground; // 0x27D8(0x8)
	struct UCanvasPanel* ScrollCanvas; // 0x27E0(0x8)
	struct TArray<struct UWidget*> CachedItems; // 0x27E8(0x10)
	struct FDelegate OnUserProcessItemWidget; // 0x27F8(0x10)
	struct FDelegate OnUserGetItemCount; // 0x2808(0x10)
	struct FMulticastInlineDelegate OnUserProcessItemsUpdateFinished; // 0x2818(0x10)
	struct FDelegate OnTabIndexChanged; // 0x2828(0x10)
	struct FMulticastInlineDelegate OnTabIndexChangedMulti; // 0x2838(0x10)
	struct FMulticastInlineDelegate OnTabRefreshed; // 0x2848(0x10)
	uint8_t bGroupHoverAnim : 1; // 0x2858(0x1), Mask(0x1)
	uint8_t BitPad_0x2858_1 : 7; // 0x2858(0x1)
	uint8_t bLoop : 1; // 0x2859(0x1), Mask(0x1)
	uint8_t BitPad_0x2859_1 : 7; // 0x2859(0x1)
	uint8_t Pad_0x285A[0x6]; // 0x285A(0x6)
	struct TArray<struct UWrapTabClickDelegate*> CacheDelegates; // 0x2860(0x10)
	uint8_t Pad_0x2870[0x4]; // 0x2870(0x4)
	uint8_t bBPConfigItemWidgetTemplateClass : 1; // 0x2874(0x1), Mask(0x1)
	uint8_t BitPad_0x2874_1 : 7; // 0x2874(0x1)
	uint8_t Pad_0x2875[0x3]; // 0x2875(0x3)

	// Object: Function GPUserInterface.DFCommonTabWidget.TryGetCheckButton
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb7968
	// Params: [ Num(2) Size(0x10) ]
	struct UDFCommonCheckButton* TryGetCheckButton(struct UWidget* ItemWidget);

	// Object: Function GPUserInterface.DFCommonTabWidget.SetThemeStyleByID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb7880
	// Params: [ Num(2) Size(0x18) ]
	void SetThemeStyleByID(EDFCheckButtonPresetStyleType InPresetStyleType, struct FString InThemeID);

	// Object: Function GPUserInterface.DFCommonTabWidget.SetThemeStyle
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xafb7794
	// Params: [ Num(1) Size(0x23F8) ]
	void SetThemeStyle(const struct FDFCommonCheckButtonStyle& InStyle);

	// Object: Function GPUserInterface.DFCommonTabWidget.SetTabIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf7b8858
	// Params: [ Num(2) Size(0x5) ]
	void SetTabIndex(int32_t Index, uint8_t bCallUserDelegate);

	// Object: Function GPUserInterface.DFCommonTabWidget.SetScrollGridBoxVolatile
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10a66378
	// Params: [ Num(1) Size(0x1) ]
	void SetScrollGridBoxVolatile(uint8_t bForceVolatile);

	// Object: Function GPUserInterface.DFCommonTabWidget.SetItemOptionSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xfa47c34
	// Params: [ Num(1) Size(0x8) ]
	void SetItemOptionSize(struct FVector2D OptionSize);

	// Object: Function GPUserInterface.DFCommonTabWidget.SetAllTabUncheckedSoundName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb76f0
	// Params: [ Num(1) Size(0x8) ]
	void SetAllTabUncheckedSoundName(struct FName InUncheckedSoundName);

	// Object: Function GPUserInterface.DFCommonTabWidget.SetAllTabHoveredSoundName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb764c
	// Params: [ Num(1) Size(0x8) ]
	void SetAllTabHoveredSoundName(struct FName InHoveredSoundName);

	// Object: Function GPUserInterface.DFCommonTabWidget.SetAllTabCheckedSoundName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb75a8
	// Params: [ Num(1) Size(0x8) ]
	void SetAllTabCheckedSoundName(struct FName InCheckedSoundName);

	// Object: Function GPUserInterface.DFCommonTabWidget.RevertAllTabOriginalSoundNames
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf460f78
	// Params: [ Num(0) Size(0x0) ]
	void RevertAllTabOriginalSoundNames();

	// Object: Function GPUserInterface.DFCommonTabWidget.RefreshTab
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf7cb52c
	// Params: [ Num(0) Size(0x0) ]
	void RefreshTab();

	// Object: Function GPUserInterface.DFCommonTabWidget.OnUserProcessTabSlot
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(4) Size(0x1C) ]
	void OnUserProcessTabSlot(int32_t Position, struct UWidget* ItemWidget, struct UPanelSlot* ItemSlot, int32_t TotalCount);

	// Object: Function GPUserInterface.DFCommonTabWidget.OnProcessItemWidget
	// Flags: [Final|Native|Protected]
	// Offset: 0xf3d351c
	// Params: [ Num(2) Size(0x10) ]
	void OnProcessItemWidget(int32_t Position, struct UWidget* ItemWidget);

	// Object: Function GPUserInterface.DFCommonTabWidget.OnProcessItemsUpdateFinished
	// Flags: [Final|Native|Protected]
	// Offset: 0xf7e452c
	// Params: [ Num(0) Size(0x0) ]
	void OnProcessItemsUpdateFinished();

	// Object: Function GPUserInterface.DFCommonTabWidget.OnPreviewProcessItemWidget
	// Flags: [Native|Protected]
	// Offset: 0xafb74c0
	// Params: [ Num(2) Size(0x10) ]
	void OnPreviewProcessItemWidget(int32_t Position, struct UWidget* ItemWidget);

	// Object: Function GPUserInterface.DFCommonTabWidget.OnPrev
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb74ac
	// Params: [ Num(0) Size(0x0) ]
	void OnPrev();

	// Object: Function GPUserInterface.DFCommonTabWidget.OnNext
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb7498
	// Params: [ Num(0) Size(0x0) ]
	void OnNext();

	// Object: Function GPUserInterface.DFCommonTabWidget.OnGetItemCount
	// Flags: [Final|Native|Protected]
	// Offset: 0xf60f310
	// Params: [ Num(1) Size(0x4) ]
	int32_t OnGetItemCount();

	// Object: Function GPUserInterface.DFCommonTabWidget.NavigationClickByIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb73f4
	// Params: [ Num(1) Size(0x4) ]
	void NavigationClickByIndex(int32_t Index);

	// Object: Function GPUserInterface.DFCommonTabWidget.MuteAllTabOriginalSoundNames
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb73e0
	// Params: [ Num(0) Size(0x0) ]
	void MuteAllTabOriginalSoundNames();

	// Object: Function GPUserInterface.DFCommonTabWidget.GetMaxIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb73ac
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetMaxIndex();

	// Object: Function GPUserInterface.DFCommonTabWidget.GetLastItemWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb72f8
	// Params: [ Num(2) Size(0x10) ]
	struct UWidget* GetLastItemWidget(uint8_t bOnlyVisible);

	// Object: Function GPUserInterface.DFCommonTabWidget.GetItemWidgetByIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb724c
	// Params: [ Num(2) Size(0x10) ]
	struct UWidget* GetItemWidgetByIndex(int32_t Index);

	// Object: Function GPUserInterface.DFCommonTabWidget.GetCurSelectedIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb7218
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCurSelectedIndex();

	// Object: Function GPUserInterface.DFCommonTabWidget.GetCanBeCheckedByIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb7168
	// Params: [ Num(2) Size(0x5) ]
	uint8_t GetCanBeCheckedByIndex(int32_t Index);

	// Object: Function GPUserInterface.DFCommonTabWidget.ClearThemeStyle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfa7e01c
	// Params: [ Num(0) Size(0x0) ]
	void ClearThemeStyle();
};

// Object: Class GPUserInterface.DFCommonDropDownBox
// Size: 0x3368 (Inherited: 0x2878)
struct UDFCommonDropDownBox : UDFCommonTabWidget
{
	DEFINE_UE_CLASS_HELPERS(UDFCommonDropDownBox, "DFCommonDropDownBox")

	struct UDFCommonDropDownItem* DropDownItemWidgetTemplateClass; // 0x2878(0x8)
	uint8_t bDirectionIsDown : 1; // 0x2880(0x1), Mask(0x1)
	uint8_t BitPad_0x2880_1 : 7; // 0x2880(0x1)
	uint8_t Pad_0x2881[0x7]; // 0x2881(0x7)
	struct FDFBrushCheckStateStyle DirectionUpArrowStyle; // 0x2888(0x518)
	struct FDFBrushCheckStateStyle DirectionDownArrowStyle; // 0x2DA0(0x518)
	uint8_t bShowItemRightText : 1; // 0x32B8(0x1), Mask(0x1)
	uint8_t BitPad_0x32B8_1 : 7; // 0x32B8(0x1)
	uint8_t Pad_0x32B9[0x7]; // 0x32B9(0x7)
	struct TArray<int32_t> DisabledItems; // 0x32C0(0x10)
	uint8_t bMobileAllowSetItemWidth : 1; // 0x32D0(0x1), Mask(0x1)
	uint8_t BitPad_0x32D0_1 : 7; // 0x32D0(0x1)
	uint8_t bAllowSetItemMinWidth : 1; // 0x32D1(0x1), Mask(0x1)
	uint8_t BitPad_0x32D1_1 : 7; // 0x32D1(0x1)
	uint8_t Pad_0x32D2[0x2]; // 0x32D2(0x2)
	float OptionMinWidth; // 0x32D4(0x4)
	uint8_t bClickOptionCloseDropDownMenu : 1; // 0x32D8(0x1), Mask(0x1)
	uint8_t BitPad_0x32D8_1 : 7; // 0x32D8(0x1)
	uint8_t bDropDownMenuHideWhenUnfocus : 1; // 0x32D9(0x1), Mask(0x1)
	uint8_t BitPad_0x32D9_1 : 7; // 0x32D9(0x1)
	uint8_t bDropDownMenuHideWhenMove : 1; // 0x32DA(0x1), Mask(0x1)
	uint8_t BitPad_0x32DA_1 : 7; // 0x32DA(0x1)
	uint8_t Pad_0x32DB[0x1]; // 0x32DB(0x1)
	struct FDelegate OnDropDownBoxProcessItemWidget; // 0x32DC(0x10)
	struct FDelegate OnDropDownBoxIndexChanged; // 0x32EC(0x10)
	uint8_t Pad_0x32FC[0x4]; // 0x32FC(0x4)
	struct FMulticastInlineDelegate PostOnMenuOpenChanged_GamepadUsed; // 0x3300(0x10)
	struct UDFCommonCheckButton* DFCommonCheckButton; // 0x3310(0x8)
	struct UMenuAnchor* MenuAnchor; // 0x3318(0x8)
	struct UCanvasPanel* DFCanvasPanel_Collapsed; // 0x3320(0x8)
	struct USizeBox* DFSizeBox_InMenuAnchor; // 0x3328(0x8)
	uint8_t bMenuInShow : 1; // 0x3330(0x1), Mask(0x1)
	uint8_t BitPad_0x3330_1 : 7; // 0x3330(0x1)
	uint8_t Pad_0x3331[0x3]; // 0x3331(0x3)
	int32_t CheckBtnState; // 0x3334(0x4)
	uint8_t bJustCloseMenuDueToUnfocus : 1; // 0x3338(0x1), Mask(0x1)
	uint8_t BitPad_0x3338_1 : 7; // 0x3338(0x1)
	uint8_t bCurDirectionIsDown : 1; // 0x3339(0x1), Mask(0x1)
	uint8_t BitPad_0x3339_1 : 7; // 0x3339(0x1)
	uint8_t bCurMenuAnchorDirectionIsDown : 1; // 0x333A(0x1), Mask(0x1)
	uint8_t BitPad_0x333A_1 : 7; // 0x333A(0x1)
	uint8_t Pad_0x333B[0x5]; // 0x333B(0x5)
	struct TArray<struct FDropDownItemData> ItemsData; // 0x3340(0x10)
	struct FTimerHandle TickWhenMenuOpenTimerHandle; // 0x3350(0x8)
	struct FVector2D OriginLocation; // 0x3358(0x8)
	struct FVector2D LastMenuPosition; // 0x3360(0x8)

	// Object: Function GPUserInterface.DFCommonDropDownBox.TickWhenMenuOpen
	// Flags: [Final|Native|Private]
	// Offset: 0xafb323c
	// Params: [ Num(0) Size(0x0) ]
	void TickWhenMenuOpen();

	// Object: Function GPUserInterface.DFCommonDropDownBox.SetSubItems
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfe2ec80
	// Params: [ Num(2) Size(0x20) ]
	void SetSubItems(struct TArray<struct FText> KeyText, struct TArray<struct FText> RightTexts);

	// Object: Function GPUserInterface.DFCommonDropDownBox.SetMenuAnchorDirection
	// Flags: [Final|Native|Protected]
	// Offset: 0xafb3190
	// Params: [ Num(1) Size(0x1) ]
	void SetMenuAnchorDirection(uint8_t bDown);

	// Object: Function GPUserInterface.DFCommonDropDownBox.SetIsShowArrow
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb30e4
	// Params: [ Num(1) Size(0x1) ]
	void SetIsShowArrow(uint8_t bShowArrow);

	// Object: Function GPUserInterface.DFCommonDropDownBox.SetDisabledItems
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb2fec
	// Params: [ Num(1) Size(0x10) ]
	void SetDisabledItems(struct TArray<int32_t> InDisabledItems);

	// Object: Function GPUserInterface.DFCommonDropDownBox.SetDirection
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb2f40
	// Params: [ Num(1) Size(0x1) ]
	void SetDirection(uint8_t bDown);

	// Object: Function GPUserInterface.DFCommonDropDownBox.RefreshDropDownBox
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x101576b4
	// Params: [ Num(1) Size(0x1) ]
	void RefreshDropDownBox(uint8_t bCallUserDelegate);

	// Object: Function GPUserInterface.DFCommonDropDownBox.OpenMenu
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb2f2c
	// Params: [ Num(0) Size(0x0) ]
	void OpenMenu();

	// Object: Function GPUserInterface.DFCommonDropDownBox.OnTabWidgetProcessItemWidget
	// Flags: [Final|Native|Protected]
	// Offset: 0xf879824
	// Params: [ Num(3) Size(0x14) ]
	void OnTabWidgetProcessItemWidget(int32_t Position, struct UWidget* ItemWidget, int32_t MainTabIndex);

	// Object: Function GPUserInterface.DFCommonDropDownBox.OnTabWidgetIndexChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x107120ac
	// Params: [ Num(2) Size(0x8) ]
	void OnTabWidgetIndexChanged(int32_t TabIndex, int32_t LastTabIndex);

	// Object: Function GPUserInterface.DFCommonDropDownBox.OnTabWidgetGetItemCount
	// Flags: [Final|Native|Protected]
	// Offset: 0xfbdfe84
	// Params: [ Num(2) Size(0x8) ]
	int32_t OnTabWidgetGetItemCount(int32_t TabKey);

	// Object: Function GPUserInterface.DFCommonDropDownBox.OnMenuAnchorOpenChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x109193e0
	// Params: [ Num(1) Size(0x1) ]
	void OnMenuAnchorOpenChanged(uint8_t bIsOpen);

	// Object: Function GPUserInterface.DFCommonDropDownBox.OnMenuAnchorGetMenuContent
	// Flags: [Final|Native|Protected]
	// Offset: 0x10916270
	// Params: [ Num(1) Size(0x8) ]
	struct UWidget* OnMenuAnchorGetMenuContent();

	// Object: Function GPUserInterface.DFCommonDropDownBox.OnDropDownCheckBtnUncheckedReleased
	// Flags: [Final|Native|Protected]
	// Offset: 0x101712cc
	// Params: [ Num(0) Size(0x0) ]
	void OnDropDownCheckBtnUncheckedReleased();

	// Object: Function GPUserInterface.DFCommonDropDownBox.OnDropDownCheckBtnUncheckedPressed
	// Flags: [Final|Native|Protected]
	// Offset: 0x1013a878
	// Params: [ Num(0) Size(0x0) ]
	void OnDropDownCheckBtnUncheckedPressed();

	// Object: Function GPUserInterface.DFCommonDropDownBox.OnDropDownCheckBtnStateChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x10189200
	// Params: [ Num(1) Size(0x1) ]
	void OnDropDownCheckBtnStateChanged(uint8_t bIsChecked);

	// Object: Function GPUserInterface.DFCommonDropDownBox.OnDropDownCheckBtnCheckedReleased
	// Flags: [Final|Native|Protected]
	// Offset: 0xafb2f18
	// Params: [ Num(0) Size(0x0) ]
	void OnDropDownCheckBtnCheckedReleased();

	// Object: Function GPUserInterface.DFCommonDropDownBox.OnDropDownCheckBtnCheckedPressed
	// Flags: [Final|Native|Protected]
	// Offset: 0xafb2f04
	// Params: [ Num(0) Size(0x0) ]
	void OnDropDownCheckBtnCheckedPressed();

	// Object: Function GPUserInterface.DFCommonDropDownBox.IsMenuShow
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb2ecc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsMenuShow();

	// Object: Function GPUserInterface.DFCommonDropDownBox.ForceSetMenuVisible
	// Flags: [Final|Native|Private]
	// Offset: 0xafb2e20
	// Params: [ Num(1) Size(0x1) ]
	void ForceSetMenuVisible(uint8_t bShow);

	// Object: Function GPUserInterface.DFCommonDropDownBox.CloseMenu
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb2e0c
	// Params: [ Num(0) Size(0x0) ]
	void CloseMenu();
};

// Object: Class GPUserInterface.DFCommonDropDownItem
// Size: 0x658 (Inherited: 0x610)
struct UDFCommonDropDownItem : ULuaUIBaseView
{
	DEFINE_UE_CLASS_HELPERS(UDFCommonDropDownItem, "DFCommonDropDownItem")

	struct UDFCommonCheckButton* DFCommonCheckButton; // 0x610(0x8)
	struct UTextBlock* wtRightText; // 0x618(0x8)
	struct FText KeyText; // 0x620(0x18)
	struct FText RightText; // 0x638(0x18)
	int32_t Index; // 0x650(0x4)
	uint8_t bIsShowRightText : 1; // 0x654(0x1), Mask(0x1)
	uint8_t BitPad_0x654_1 : 7; // 0x654(0x1)
	uint8_t Pad_0x655[0x3]; // 0x655(0x3)

	// Object: Function GPUserInterface.DFCommonDropDownItem.InitDropDownItem
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0xf86f508
	// Params: [ Num(2) Size(0x3C) ]
	void InitDropDownItem(struct FDropDownItemData InItemData, int32_t InIndex);
};

// Object: Class GPUserInterface.DFCommonFilterWidget
// Size: 0x3B8 (Inherited: 0x360)
struct UDFCommonFilterWidget : UDFUserWidgetBase
{
	DEFINE_UE_CLASS_HELPERS(UDFCommonFilterWidget, "DFCommonFilterWidget")

	EFilterStateType WidgetFilterStateType; // 0x360(0x1)
	uint8_t Pad_0x361[0x7]; // 0x361(0x7)
	struct FText MainText; // 0x368(0x18)
	struct UDFButton* DFButtonFilter; // 0x380(0x8)
	struct UDFImage* DFImageArrow; // 0x388(0x8)
	struct UDFTextBlock* TextBlockMain; // 0x390(0x8)
	struct FMulticastInlineDelegate OnFilterStateTypeChanged; // 0x398(0x10)
	struct FMulticastInlineDelegate OnFilterButtonClicked; // 0x3A8(0x10)

	// Object: Function GPUserInterface.DFCommonFilterWidget.SetMainTitleText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb3824
	// Params: [ Num(1) Size(0x18) ]
	void SetMainTitleText(struct FText LuaText);

	// Object: Function GPUserInterface.DFCommonFilterWidget.SetFilterStateType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb3780
	// Params: [ Num(1) Size(0x1) ]
	void SetFilterStateType(EFilterStateType InFilterStateType);

	// Object: Function GPUserInterface.DFCommonFilterWidget.InitType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb35c4
	// Params: [ Num(2) Size(0x19) ]
	void InitType(struct FText LuaText, EFilterStateType InFilterStateType);

	// Object: Function GPUserInterface.DFCommonFilterWidget.HandleFilterStateTypeChanged
	// Flags: [Final|Native|Public]
	// Offset: 0xafb3520
	// Params: [ Num(1) Size(0x1) ]
	void HandleFilterStateTypeChanged(EFilterStateType InFilterStateType);

	// Object: Function GPUserInterface.DFCommonFilterWidget.HandleFilterButtonClicked
	// Flags: [Final|Native|Public]
	// Offset: 0xafb350c
	// Params: [ Num(0) Size(0x0) ]
	void HandleFilterButtonClicked();
};

// Object: Class GPUserInterface.DFCommonMediaView
// Size: 0x418 (Inherited: 0x2F8)
struct UDFCommonMediaView : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UDFCommonMediaView, "DFCommonMediaView")

	uint8_t Pad_0x2F8[0x8]; // 0x2F8(0x8)
	struct UImage* MediaImage; // 0x300(0x8)
	struct UImage* MediaImageBG; // 0x308(0x8)
	struct UTextBlock* SubtitleTxt; // 0x310(0x8)
	struct UDFCommonButton* SkipBtn; // 0x318(0x8)
	struct UBinkMediaPlayer* MediaPlayer; // 0x320(0x8)
	struct UMaterialInterface* Material; // 0x328(0x8)
	struct UMaterialInstanceDynamic* MaterialInstanceDynamic; // 0x330(0x8)
	uint8_t bCreateMaterialInstanceDynamic : 1; // 0x338(0x1), Mask(0x1)
	uint8_t BitPad_0x338_1 : 7; // 0x338(0x1)
	uint8_t bAutoMatchMediaSize : 1; // 0x339(0x1), Mask(0x1)
	uint8_t BitPad_0x339_1 : 7; // 0x339(0x1)
	uint8_t bScreenFill : 1; // 0x33A(0x1), Mask(0x1)
	uint8_t BitPad_0x33A_1 : 7; // 0x33A(0x1)
	uint8_t bCanSkipMovie : 1; // 0x33B(0x1), Mask(0x1)
	uint8_t BitPad_0x33B_1 : 7; // 0x33B(0x1)
	uint8_t Pad_0x33C[0x4]; // 0x33C(0x4)
	struct FMulticastInlineDelegate OnMediaOpened; // 0x340(0x10)
	struct FMulticastInlineDelegate OnMediaPlayBegin; // 0x350(0x10)
	struct FMulticastInlineDelegate OnMediaPlayEnd; // 0x360(0x10)
	struct FMulticastInlineDelegate OnMediaSkip; // 0x370(0x10)
	struct FMulticastInlineDelegate OnMediaClosed; // 0x380(0x10)
	uint8_t Pad_0x390[0x88]; // 0x390(0x88)

	// Object: Function GPUserInterface.DFCommonMediaView.StopMedia
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfc81594
	// Params: [ Num(1) Size(0x1) ]
	void StopMedia(uint8_t bIsSkip);

	// Object: Function GPUserInterface.DFCommonMediaView.SkipMovie
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb3e28
	// Params: [ Num(0) Size(0x0) ]
	void SkipMovie();

	// Object: Function GPUserInterface.DFCommonMediaView.ShowSkipButton
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb3df0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t ShowSkipButton();

	// Object: Function GPUserInterface.DFCommonMediaView.SetVolumeFromConfig
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb3ddc
	// Params: [ Num(0) Size(0x0) ]
	void SetVolumeFromConfig();

	// Object: Function GPUserInterface.DFCommonMediaView.SetVolume
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb3d38
	// Params: [ Num(1) Size(0x4) ]
	void SetVolume(float InVolume);

	// Object: Function GPUserInterface.DFCommonMediaView.SeekTo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb3c94
	// Params: [ Num(1) Size(0x4) ]
	void SeekTo(int32_t TargetTime);

	// Object: Function GPUserInterface.DFCommonMediaView.SafeCloseMedia
	// Flags: [Final|Native|Private]
	// Offset: 0xafb3c80
	// Params: [ Num(0) Size(0x0) ]
	void SafeCloseMedia();

	// Object: Function GPUserInterface.DFCommonMediaView.ResumeToMediaPlay
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb3c6c
	// Params: [ Num(0) Size(0x0) ]
	void ResumeToMediaPlay();

	// Object: Function GPUserInterface.DFCommonMediaView.Resume
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb3c58
	// Params: [ Num(0) Size(0x0) ]
	void Resume();

	// Object: Function GPUserInterface.DFCommonMediaView.Play
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xeed443c
	// Params: [ Num(1) Size(0x10) ]
	void Play(struct FString MediaConfigRowName);

	// Object: Function GPUserInterface.DFCommonMediaView.Pause
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb3c44
	// Params: [ Num(0) Size(0x0) ]
	void Pause();

	// Object: Function GPUserInterface.DFCommonMediaView.OnSkipButtonOnShow
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnSkipButtonOnShow();

	// Object: Function GPUserInterface.DFCommonMediaView.OnSkipButtonOnHide
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnSkipButtonOnHide();

	// Object: Function GPUserInterface.DFCommonMediaView.OnSkipBtnClicked
	// Flags: [Final|Native|Private]
	// Offset: 0xafb3c30
	// Params: [ Num(0) Size(0x0) ]
	void OnSkipBtnClicked();

	// Object: Function GPUserInterface.DFCommonMediaView.OnLegacyTextureShowEnd
	// Flags: [Final|Native|Private]
	// Offset: 0xafb3c1c
	// Params: [ Num(0) Size(0x0) ]
	void OnLegacyTextureShowEnd();

	// Object: Function GPUserInterface.DFCommonMediaView.OnBinkMediaSrtReady
	// Flags: [Final|Native|Private]
	// Offset: 0xafb3c08
	// Params: [ Num(0) Size(0x0) ]
	void OnBinkMediaSrtReady();

	// Object: Function GPUserInterface.DFCommonMediaView.MediaPlayEnd
	// Flags: [Final|Native|Private]
	// Offset: 0xafb3bf4
	// Params: [ Num(0) Size(0x0) ]
	void MediaPlayEnd();

	// Object: Function GPUserInterface.DFCommonMediaView.MediaOpened
	// Flags: [Final|Native|Private]
	// Offset: 0x105e514c
	// Params: [ Num(1) Size(0x10) ]
	void MediaOpened(struct FString OpenedUrl);

	// Object: Function GPUserInterface.DFCommonMediaView.MediaClosed
	// Flags: [Final|Native|Private]
	// Offset: 0x101ac86c
	// Params: [ Num(0) Size(0x0) ]
	void MediaClosed();

	// Object: Function GPUserInterface.DFCommonMediaView.IsPlaying
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb3bbc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPlaying();

	// Object: Function GPUserInterface.DFCommonMediaView.IsConfigValid
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb3b0c
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsConfigValid(struct FName InRowName);

	// Object: Function GPUserInterface.DFCommonMediaView.HideSkipButton
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb3ad4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t HideSkipButton();

	// Object: Function GPUserInterface.DFCommonMediaView.GetTotalTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb3aa0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetTotalTime();

	// Object: Function GPUserInterface.DFCommonMediaView.GetCurrentUrl
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb3a08
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetCurrentUrl();

	// Object: Function GPUserInterface.DFCommonMediaView.GetCurMediaTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb39d4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCurMediaTime();

	// Object: Function GPUserInterface.DFCommonMediaView.FallbackToTextureManually
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb39c0
	// Params: [ Num(0) Size(0x0) ]
	void FallbackToTextureManually();

	// Object: Function GPUserInterface.DFCommonMediaView.EnableCGMediaPlay
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf9be2dc
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t EnableCGMediaPlay();

	// Object: Function GPUserInterface.DFCommonMediaView.DynamicPadding
	// Flags: [Final|Native|Private]
	// Offset: 0xafb39ac
	// Params: [ Num(0) Size(0x0) ]
	void DynamicPadding();

	// Object: Function GPUserInterface.DFCommonMediaView.CheckPufferFileUsable
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xeed48f8
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t CheckPufferFileUsable(struct FString InRowName);
};

// Object: Class GPUserInterface.DFCommonPopWindow
// Size: 0xC50 (Inherited: 0x610)
struct UDFCommonPopWindow : ULuaUIBaseView
{
	DEFINE_UE_CLASS_HELPERS(UDFCommonPopWindow, "DFCommonPopWindow")

	EDFCommonPopWindowStyleType PresetStyleType; // 0x60C(0x1)
	uint8_t Pad_0x611[0x7]; // 0x611(0x7)
	struct FMulticastInlineDelegate OnThemeIDChanged; // 0x618(0x10)
	uint8_t bCanEditStyle : 1; // 0x628(0x1), Mask(0x1)
	uint8_t BitPad_0x628_1 : 7; // 0x628(0x1)
	uint8_t Pad_0x629[0x7]; // 0x629(0x7)
	struct FDFCommonPopWindowStyle CommonPopWindowStyle; // 0x630(0x5C0)
	uint8_t Pad_0xBF0[0x20]; // 0xBF0(0x20)
	uint8_t bCppOverrideLuaClose : 1; // 0xC10(0x1), Mask(0x1)
	uint8_t BitPad_0xC10_1 : 7; // 0xC10(0x1)
	uint8_t Pad_0xC11[0x7]; // 0xC11(0x7)
	struct UDFThemeImage* ThemeImg_PopIcon_ThemeStyle; // 0xC18(0x8)
	struct UDFImage* Img_PopBg_ThemeStyle; // 0xC20(0x8)
	struct UDFImage* Img_PopContentBg_ThemeStyle; // 0xC28(0x8)
	struct UDFImage* Img_PopCenterBG_ThemeStyle; // 0xC30(0x8)
	struct UDFImage* Img_PopBottomBG_ThemeStyle; // 0xC38(0x8)
	struct UDFImage* Img_PopCloseIcon_ThemeStyle; // 0xC40(0x8)
	struct UDFComputeTextBlock* Text_PopMainTitle_ThemeStyle; // 0xC48(0x8)

	// Object: Function GPUserInterface.DFCommonPopWindow.SetThemeStyleByID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb40a8
	// Params: [ Num(2) Size(0x18) ]
	void SetThemeStyleByID(EDFCommonPopWindowStyleType InPresetStyleType, struct FString InThemeID);

	// Object: Function GPUserInterface.DFCommonPopWindow.SetThemeStyle
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xafb3fe8
	// Params: [ Num(1) Size(0x5C0) ]
	void SetThemeStyle(const struct FDFCommonPopWindowStyle& InStyle);

	// Object: Function GPUserInterface.DFCommonPopWindow.OnCommonPopWindowProcessed
	// Flags: [Final|Native|Public]
	// Offset: 0xafb3f44
	// Params: [ Num(1) Size(0x4) ]
	void OnCommonPopWindowProcessed(int32_t BtnIndex);

	// Object: Function GPUserInterface.DFCommonPopWindow.OnCommonPopWindowClosed
	// Flags: [Final|Native|Public]
	// Offset: 0xafb3f30
	// Params: [ Num(0) Size(0x0) ]
	void OnCommonPopWindowClosed();

	// Object: Function GPUserInterface.DFCommonPopWindow.ClearThemeStyle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x107071d0
	// Params: [ Num(0) Size(0x0) ]
	void ClearThemeStyle();
};

// Object: Class GPUserInterface.DFCommonProgressBar
// Size: 0x3C0 (Inherited: 0x360)
struct UDFCommonProgressBar : UDFUserWidgetBase
{
	DEFINE_UE_CLASS_HELPERS(UDFCommonProgressBar, "DFCommonProgressBar")

	uint8_t Pad_0x360[0x20]; // 0x360(0x20)
	struct UDFImage* DFImageBg; // 0x380(0x8)
	struct UDFProgressBar* DFProgressBarMain; // 0x388(0x8)
	struct UDFRadialImage* DFRadialImageMask; // 0x390(0x8)
	float CurrentPercent; // 0x398(0x4)
	float LerpTotalTime; // 0x39C(0x4)
	uint8_t bImageMaskHide : 1; // 0x3A0(0x1), Mask(0x1)
	uint8_t BitPad_0x3A0_1 : 7; // 0x3A0(0x1)
	uint8_t Pad_0x3A1[0x7]; // 0x3A1(0x7)
	struct UCurveFloat* LerpCurve; // 0x3A8(0x8)
	struct FMulticastInlineDelegate OnFloatPercentChanged; // 0x3B0(0x10)

	// Object: Function GPUserInterface.DFCommonProgressBar.SetPercent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb47d4
	// Params: [ Num(1) Size(0x4) ]
	void SetPercent(float InPercent);

	// Object: Function GPUserInterface.DFCommonProgressBar.SetMaskBarIsClockWise
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb4728
	// Params: [ Num(1) Size(0x1) ]
	void SetMaskBarIsClockWise(uint8_t InClockWise);

	// Object: Function GPUserInterface.DFCommonProgressBar.SetMaskBarColorAndOpacity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xafb4684
	// Params: [ Num(1) Size(0x10) ]
	void SetMaskBarColorAndOpacity(struct FLinearColor InColorAndOpacity);

	// Object: Function GPUserInterface.DFCommonProgressBar.SetMaskBarBrushResourceObject
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xafb45d8
	// Params: [ Num(1) Size(0x8) ]
	void SetMaskBarBrushResourceObject(struct UObject* ResourceObject);

	// Object: Function GPUserInterface.DFCommonProgressBar.SetMaskBarBrush
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xafb44bc
	// Params: [ Num(1) Size(0x90) ]
	void SetMaskBarBrush(const struct FSlateBrush& InBrush);

	// Object: Function GPUserInterface.DFCommonProgressBar.SetMainBarIsMarquee
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb4410
	// Params: [ Num(1) Size(0x1) ]
	void SetMainBarIsMarquee(uint8_t InbIsMarquee);

	// Object: Function GPUserInterface.DFCommonProgressBar.SetMainBarFillColorAndOpacity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xafb436c
	// Params: [ Num(1) Size(0x10) ]
	void SetMainBarFillColorAndOpacity(struct FLinearColor InColor);

	// Object: Function GPUserInterface.DFCommonProgressBar.SetImageMaskState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb42c0
	// Params: [ Num(1) Size(0x1) ]
	void SetImageMaskState(uint8_t bHide);

	// Object: Function GPUserInterface.DFCommonProgressBar.LerpToPercent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb41e4
	// Params: [ Num(2) Size(0x8) ]
	void LerpToPercent(float InStartPercent, float InTargetPercent);

	// Object: Function GPUserInterface.DFCommonProgressBar.GetMaskBarDynamicMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb41b0
	// Params: [ Num(1) Size(0x8) ]
	struct UMaterialInstanceDynamic* GetMaskBarDynamicMaterial();
};

// Object: Class GPUserInterface.DFCommonRichTextBlock
// Size: 0x7A8 (Inherited: 0x788)
struct UDFCommonRichTextBlock : URichTextBlock
{
	DEFINE_UE_CLASS_HELPERS(UDFCommonRichTextBlock, "DFCommonRichTextBlock")

	struct UCommonTextScrollStyle* ScrollStyle; // 0x788(0x8)
	uint8_t bEnableDynamicFormat : 1; // 0x790(0x1), Mask(0x1)
	uint8_t BitPad_0x790_1 : 7; // 0x790(0x1)
	uint8_t Pad_0x791[0x17]; // 0x791(0x17)
};

// Object: Class GPUserInterface.DFCommonRoundedRectMaskBase
// Size: 0x350 (Inherited: 0x2F8)
struct UDFCommonRoundedRectMaskBase : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UDFCommonRoundedRectMaskBase, "DFCommonRoundedRectMaskBase")

	uint8_t bEnableMask : 1; // 0x2F8(0x1), Mask(0x1)
	uint8_t BitPad_0x2F8_1 : 7; // 0x2F8(0x1)
	uint8_t Pad_0x2F9[0x7]; // 0x2F9(0x7)
	struct UContentWidget* ContentPanel; // 0x300(0x8)
	struct UMaterialInterface* MaskMat; // 0x308(0x8)
	struct UMaterialInstanceDynamic* MaskMatIns; // 0x310(0x8)
	struct FIntPoint DefaultRatio; // 0x318(0x8)
	struct FIntPoint MaxRatio; // 0x320(0x8)
	struct FIntPoint MinRatio; // 0x328(0x8)
	struct FName MaskMatParamName; // 0x330(0x8)
	float MaxMaskMatEdge; // 0x338(0x4)
	float MaxUIEdge; // 0x33C(0x4)
	uint8_t Pad_0x340[0x1]; // 0x340(0x1)
	uint8_t bCreateMaterialInstanceDynamicForBrush : 1; // 0x341(0x1), Mask(0x1)
	uint8_t BitPad_0x341_1 : 7; // 0x341(0x1)
	uint8_t Pad_0x342[0x2]; // 0x342(0x2)
	struct TWeakObjectPtr<struct UUserWidget> MostRootWidget; // 0x344(0x8)
	uint8_t Pad_0x34C[0x4]; // 0x34C(0x4)

	// Object: Function GPUserInterface.DFCommonRoundedRectMaskBase.SetEffectVisible
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xff68ea0
	// Params: [ Num(1) Size(0x1) ]
	void SetEffectVisible(uint8_t bVisible);
};

// Object: Class GPUserInterface.DFCommonSlider
// Size: 0x3B0 (Inherited: 0x360)
struct UDFCommonSlider : UDFUserWidgetBase
{
	DEFINE_UE_CLASS_HELPERS(UDFCommonSlider, "DFCommonSlider")

	struct UDFSlider* Slider; // 0x360(0x8)
	struct UDFProgressBar* ProgressBar; // 0x368(0x8)
	struct UDFButton* ButtonLeft; // 0x370(0x8)
	struct UDFButton* ButtonRight; // 0x378(0x8)
	float Value; // 0x380(0x4)
	float LastValue; // 0x384(0x4)
	float StepValue; // 0x388(0x4)
	float LastStepValue; // 0x38C(0x4)
	float MaxValue; // 0x390(0x4)
	float MinValue; // 0x394(0x4)
	float StepValueDecimalPlaces; // 0x398(0x4)
	uint8_t MouseUsesStep : 1; // 0x39C(0x1), Mask(0x1)
	uint8_t BitPad_0x39C_1 : 7; // 0x39C(0x1)
	uint8_t Pad_0x39D[0x3]; // 0x39D(0x3)
	struct FMulticastInlineDelegate OnValueUpdated; // 0x3A0(0x10)

	// Object: Function GPUserInterface.DFCommonSlider.SetStepValue
	// Flags: [Final|Native|Public]
	// Offset: 0xafb5d60
	// Params: [ Num(1) Size(0x4) ]
	void SetStepValue(float InStepValue);

	// Object: Function GPUserInterface.DFCommonSlider.SetMouseUsesStep
	// Flags: [Final|Native|Public]
	// Offset: 0xafb5cb4
	// Params: [ Num(1) Size(0x1) ]
	void SetMouseUsesStep(uint8_t InMouseUsesStep);

	// Object: Function GPUserInterface.DFCommonSlider.OnSliderValueChanged
	// Flags: [Final|Native|Private]
	// Offset: 0xafb5c10
	// Params: [ Num(1) Size(0x4) ]
	void OnSliderValueChanged(float InValue);

	// Object: Function GPUserInterface.DFCommonSlider.OnSliderMouseCaptureEnd
	// Flags: [Final|Native|Private]
	// Offset: 0xafb5bfc
	// Params: [ Num(0) Size(0x0) ]
	void OnSliderMouseCaptureEnd();

	// Object: Function GPUserInterface.DFCommonSlider.OnProcessButtonRightClicked
	// Flags: [Final|Native|Public]
	// Offset: 0xafb5be8
	// Params: [ Num(0) Size(0x0) ]
	void OnProcessButtonRightClicked();

	// Object: Function GPUserInterface.DFCommonSlider.OnProcessButtonLeftClicked
	// Flags: [Final|Native|Public]
	// Offset: 0xafb5bd4
	// Params: [ Num(0) Size(0x0) ]
	void OnProcessButtonLeftClicked();

	// Object: Function GPUserInterface.DFCommonSlider.InitValue
	// Flags: [Final|Native|Public]
	// Offset: 0xafb5a80
	// Params: [ Num(4) Size(0x10) ]
	void InitValue(float InValue, float InMaxValue, float InMinValue, float InStepValue);
};

// Object: Class GPUserInterface.DFCommonTabGroupItem
// Size: 0x28D8 (Inherited: 0x2878)
struct UDFCommonTabGroupItem : UDFCommonTabWidget
{
	DEFINE_UE_CLASS_HELPERS(UDFCommonTabGroupItem, "DFCommonTabGroupItem")

	struct UDFCommonCheckButton* DFCommonCheckButton; // 0x2878(0x8)
	uint8_t bDropDown : 1; // 0x2880(0x1), Mask(0x1)
	uint8_t BitPad_0x2880_1 : 7; // 0x2880(0x1)
	uint8_t Pad_0x2881[0x7]; // 0x2881(0x7)
	struct FDFCommonTabContent MainTabContent; // 0x2888(0x40)
	struct FMulticastInlineDelegate OnTabGroupDropDownChanged; // 0x28C8(0x10)

	// Object: Function GPUserInterface.DFCommonTabGroupItem.SetMainTabIndex
	// Flags: [Final|Native|Public]
	// Offset: 0xafb6064
	// Params: [ Num(1) Size(0x4) ]
	void SetMainTabIndex(int32_t MainTabIndex);

	// Object: Function GPUserInterface.DFCommonTabGroupItem.SetIsDropDown
	// Flags: [Final|Native|Public]
	// Offset: 0xafb5fb8
	// Params: [ Num(1) Size(0x1) ]
	void SetIsDropDown(uint8_t bIsDropDown);

	// Object: Function GPUserInterface.DFCommonTabGroupItem.SetIsCheckedInGroup
	// Flags: [Final|Native|Public]
	// Offset: 0xafb5f0c
	// Params: [ Num(1) Size(0x1) ]
	void SetIsCheckedInGroup(uint8_t bIsCheckedInGroup);

	// Object: Function GPUserInterface.DFCommonTabGroupItem.OnSetIsDropDown
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void OnSetIsDropDown(uint8_t bIsDropDown);

	// Object: Function GPUserInterface.DFCommonTabGroupItem.GetMainCheckButton
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb5ed8
	// Params: [ Num(1) Size(0x8) ]
	struct UDFCommonCheckButton* GetMainCheckButton();

	// Object: Function GPUserInterface.DFCommonTabGroupItem.GetIsDropDown
	// Flags: [Final|Native|Public]
	// Offset: 0xafb5ea0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetIsDropDown();
};

// Object: Class GPUserInterface.WrapTabGroupClickDelegate
// Size: 0x38 (Inherited: 0x28)
struct UWrapTabGroupClickDelegate : UObject
{
	DEFINE_UE_CLASS_HELPERS(UWrapTabGroupClickDelegate, "WrapTabGroupClickDelegate")

	uint8_t Pad_0x28[0x10]; // 0x28(0x10)

	// Object: Function GPUserInterface.WrapTabGroupClickDelegate.DispatchSubTabItemCount
	// Flags: [Final|Native|Public]
	// Offset: 0xafb62d8
	// Params: [ Num(1) Size(0x4) ]
	int32_t DispatchSubTabItemCount();

	// Object: Function GPUserInterface.WrapTabGroupClickDelegate.DispatchSubTabClick
	// Flags: [Final|Native|Public]
	// Offset: 0xafb61fc
	// Params: [ Num(2) Size(0x8) ]
	void DispatchSubTabClick(int32_t CurSubIndex, int32_t LastSubIndex);

	// Object: Function GPUserInterface.WrapTabGroupClickDelegate.DispatchMainTabClick
	// Flags: [Final|Native|Public]
	// Offset: 0xafb6150
	// Params: [ Num(1) Size(0x1) ]
	void DispatchMainTabClick(uint8_t bIsChecked);
};

// Object: Class GPUserInterface.DFCommonTabGroupWidget
// Size: 0x458 (Inherited: 0x360)
struct UDFCommonTabGroupWidget : UDFUserWidgetBase
{
	DEFINE_UE_CLASS_HELPERS(UDFCommonTabGroupWidget, "DFCommonTabGroupWidget")

	struct UDFCommonTabGroupItem* ItemWidgetTemplateClass; // 0x360(0x8)
	int32_t EditorPreviewTabGroupItemCount; // 0x368(0x4)
	int32_t EditorPreviewMainCheckIndex; // 0x36C(0x4)
	ESlateVisibility ScrollBarVisibility; // 0x370(0x1)
	uint8_t bAutoSelectSubTab : 1; // 0x371(0x1), Mask(0x1)
	uint8_t BitPad_0x371_1 : 7; // 0x371(0x1)
	uint8_t bUseBlueprintConfig : 1; // 0x372(0x1), Mask(0x1)
	uint8_t BitPad_0x372_1 : 7; // 0x372(0x1)
	uint8_t Pad_0x373[0x5]; // 0x373(0x5)
	struct TArray<struct FDFCommonTabGroupContent> TabGroupContents; // 0x378(0x10)
	struct TArray<struct UDFCommonTabGroupItem*> TabGroupItemList; // 0x388(0x10)
	struct TArray<int32_t> TabGroupDataCounts; // 0x398(0x10)
	struct UDFScrollBox* ScrollBoxRoot; // 0x3A8(0x8)
	struct UNamedSlot* EmptyBackground; // 0x3B0(0x8)
	struct UCanvasPanel* ScrollCanvas; // 0x3B8(0x8)
	struct FDelegate OnMainTabClicked; // 0x3C0(0x10)
	struct FDelegate OnSubTabClicked; // 0x3D0(0x10)
	struct FDelegate OnGetTabGroupDataCounts; // 0x3E0(0x10)
	struct FMulticastInlineDelegate OnTabGroupDataCountChanged; // 0x3F0(0x10)
	struct FDelegate OnUserCreateTabGroupItemWidget; // 0x400(0x10)
	struct FDelegate OnUserProcessTabSubItemWidget; // 0x410(0x10)
	struct FDelegate OnUserPreviewTabGroupItemWidget; // 0x420(0x10)
	struct TArray<struct UWrapTabGroupClickDelegate*> CacheDelegates; // 0x430(0x10)
	uint8_t Pad_0x440[0x18]; // 0x440(0x18)

	// Object: Function GPUserInterface.DFCommonTabGroupWidget.TryGetTabGroupItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb6bc4
	// Params: [ Num(2) Size(0x10) ]
	struct UDFCommonTabGroupItem* TryGetTabGroupItem(int32_t SlotIndex);

	// Object: Function GPUserInterface.DFCommonTabGroupWidget.SetTabGroupIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb6aa4
	// Params: [ Num(3) Size(0x9) ]
	void SetTabGroupIndex(int32_t MainTabIndex, int32_t SubTabIndex, uint8_t bCallUserDelegate);

	// Object: Function GPUserInterface.DFCommonTabGroupWidget.SetItemWidgetTemplateClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb6a00
	// Params: [ Num(1) Size(0x8) ]
	void SetItemWidgetTemplateClass(struct UDFCommonTabGroupItem* InItemWidgetTemplateClass);

	// Object: Function GPUserInterface.DFCommonTabGroupWidget.RefreshTabGroup
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb69ec
	// Params: [ Num(0) Size(0x0) ]
	void RefreshTabGroup();

	// Object: Function GPUserInterface.DFCommonTabGroupWidget.RefreshAllTabGroupItems
	// Flags: [Final|Native|Public]
	// Offset: 0xafb69d8
	// Params: [ Num(0) Size(0x0) ]
	void RefreshAllTabGroupItems();

	// Object: Function GPUserInterface.DFCommonTabGroupWidget.OnProcessSubItemWidget
	// Flags: [Final|Native|Public]
	// Offset: 0xafb68bc
	// Params: [ Num(3) Size(0x14) ]
	void OnProcessSubItemWidget(int32_t Position, struct UWidget* ItemWidget, int32_t MainTabIndex);

	// Object: Function GPUserInterface.DFCommonTabGroupWidget.OnPreviewTabGroupItemWidget
	// Flags: [Final|Native|Public]
	// Offset: 0xafb67dc
	// Params: [ Num(2) Size(0x10) ]
	void OnPreviewTabGroupItemWidget(int32_t Position, struct UDFCommonTabGroupItem* TabGroupItemWidget);

	// Object: Function GPUserInterface.DFCommonTabGroupWidget.OnGetTabGroupSubCountList
	// Flags: [Final|Native|Public]
	// Offset: 0xafb6744
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<int32_t> OnGetTabGroupSubCountList();

	// Object: Function GPUserInterface.DFCommonTabGroupWidget.OnGetSubItemCountByMainIndex
	// Flags: [Final|Native|Public]
	// Offset: 0xafb6698
	// Params: [ Num(2) Size(0x8) ]
	int32_t OnGetSubItemCountByMainIndex(int32_t MainIndex);

	// Object: Function GPUserInterface.DFCommonTabGroupWidget.OnGetItemCount
	// Flags: [Final|Native|Public]
	// Offset: 0xafb6664
	// Params: [ Num(1) Size(0x4) ]
	int32_t OnGetItemCount();

	// Object: Function GPUserInterface.DFCommonTabGroupWidget.OnCreateTabGroupItemWidget
	// Flags: [Final|Native|Public]
	// Offset: 0xafb6584
	// Params: [ Num(2) Size(0x10) ]
	void OnCreateTabGroupItemWidget(int32_t Position, struct UDFCommonTabGroupItem* TabGroupItemWidget);

	// Object: Function GPUserInterface.DFCommonTabGroupWidget.InitTabGroupDataCounts
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb648c
	// Params: [ Num(1) Size(0x10) ]
	void InitTabGroupDataCounts(struct TArray<int32_t> InTabGroupDataCounts);

	// Object: Function GPUserInterface.DFCommonTabGroupWidget.InitTabGroupContents
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb63bc
	// Params: [ Num(1) Size(0x10) ]
	void InitTabGroupContents(struct TArray<struct FDFCommonTabGroupContent> InTabGroupContents);

	// Object: Function GPUserInterface.DFCommonTabGroupWidget.GetMaxIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb6388
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetMaxIndex();

	// Object: Function GPUserInterface.DFCommonTabGroupWidget.GetCurSubTabIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb6354
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCurSubTabIndex();

	// Object: Function GPUserInterface.DFCommonTabGroupWidget.GetCurMainTabIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb6320
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCurMainTabIndex();
};

// Object: Class GPUserInterface.DFCommonTabNavigatorBase
// Size: 0x360 (Inherited: 0x360)
struct UDFCommonTabNavigatorBase : UDFUserWidgetBase
{
	DEFINE_UE_CLASS_HELPERS(UDFCommonTabNavigatorBase, "DFCommonTabNavigatorBase")

	// Object: Function GPUserInterface.DFCommonTabNavigatorBase.UnbindActions
	// Flags: [Native|Public]
	// Offset: 0xafb6d68
	// Params: [ Num(0) Size(0x0) ]
	void UnbindActions();

	// Object: Function GPUserInterface.DFCommonTabNavigatorBase.BindActions
	// Flags: [Native|Public]
	// Offset: 0xafb6d4c
	// Params: [ Num(0) Size(0x0) ]
	void BindActions();
};

// Object: Class GPUserInterface.DFCommonTabSelectionBar
// Size: 0x3D0 (Inherited: 0x360)
struct UDFCommonTabSelectionBar : UDFUserWidgetBase
{
	DEFINE_UE_CLASS_HELPERS(UDFCommonTabSelectionBar, "DFCommonTabSelectionBar")

	struct UCurveVector* LerpCurve; // 0x360(0x8)
	struct UDFCommonTabWidget* ParentTab; // 0x368(0x8)
	struct UWidget* BarWidget; // 0x370(0x8)
	struct UCanvasPanelSlot* CachedSlot; // 0x378(0x8)
	uint8_t Pad_0x380[0x50]; // 0x380(0x50)

	// Object: Function GPUserInterface.DFCommonTabSelectionBar.OnTabRefreshed
	// Flags: [Final|Native|Protected]
	// Offset: 0xafb6f1c
	// Params: [ Num(0) Size(0x0) ]
	void OnTabRefreshed();

	// Object: Function GPUserInterface.DFCommonTabSelectionBar.OnTabIndexChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0xafb6e40
	// Params: [ Num(2) Size(0x8) ]
	void OnTabIndexChanged(int32_t CurTabIndex, int32_t LastTabIndex);

	// Object: Function GPUserInterface.DFCommonTabSelectionBar.OnAnimStopped
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnAnimStopped();

	// Object: Function GPUserInterface.DFCommonTabSelectionBar.OnAnimStarted
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnAnimStarted();

	// Object: Function GPUserInterface.DFCommonTabSelectionBar.OnAnimFinished
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnAnimFinished();
};

// Object: Class GPUserInterface.WrapTabClickDelegate
// Size: 0x38 (Inherited: 0x28)
struct UWrapTabClickDelegate : UObject
{
	DEFINE_UE_CLASS_HELPERS(UWrapTabClickDelegate, "WrapTabClickDelegate")

	uint8_t Pad_0x28[0x10]; // 0x28(0x10)

	// Object: Function GPUserInterface.WrapTabClickDelegate.DispatchUnhovered
	// Flags: [Final|Native|Public]
	// Offset: 0xafb6fe8
	// Params: [ Num(0) Size(0x0) ]
	void DispatchUnhovered();

	// Object: Function GPUserInterface.WrapTabClickDelegate.Dispatch
	// Flags: [Final|Native|Public]
	// Offset: 0xfb6c4ec
	// Params: [ Num(1) Size(0x1) ]
	void Dispatch(uint8_t bIsChecked);
};

// Object: Class GPUserInterface.CommonTextScrollStyle
// Size: 0x48 (Inherited: 0x28)
struct UCommonTextScrollStyle : UObject
{
	DEFINE_UE_CLASS_HELPERS(UCommonTextScrollStyle, "CommonTextScrollStyle")

	float Speed; // 0x28(0x4)
	float StartDelay; // 0x2C(0x4)
	float EndDelay; // 0x30(0x4)
	float FadeInDelay; // 0x34(0x4)
	float FadeOutDelay; // 0x38(0x4)
	float StartOffset; // 0x3C(0x4)
	float stopOffset; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
};

// Object: Class GPUserInterface.DFCommonTextBlock
// Size: 0x3C8 (Inherited: 0x398)
struct UDFCommonTextBlock : UTextBlock
{
	DEFINE_UE_CLASS_HELPERS(UDFCommonTextBlock, "DFCommonTextBlock")

	struct UCommonTextScrollStyle* ScrollStyle; // 0x398(0x8)
	uint8_t Pad_0x3A0[0x10]; // 0x3A0(0x10)
	uint8_t bEnableDynamicFormat : 1; // 0x3B0(0x1), Mask(0x1)
	uint8_t BitPad_0x3B0_1 : 7; // 0x3B0(0x1)
	uint8_t Pad_0x3B1[0x17]; // 0x3B1(0x17)
};

// Object: Class GPUserInterface.DFComputeTextBlock
// Size: 0x6A8 (Inherited: 0x408)
struct UDFComputeTextBlock : UComputeTextBlock
{
	DEFINE_UE_CLASS_HELPERS(UDFComputeTextBlock, "DFComputeTextBlock")

	float ComputeTextScale; // 0x408(0x4)
	uint8_t Pad_0x40C[0x294]; // 0x40C(0x294)
	uint8_t bUseConsoleColor : 1; // 0x6A0(0x1), Mask(0x1)
	uint8_t BitPad_0x6A0_1 : 7; // 0x6A0(0x1)
	uint8_t Pad_0x6A1[0x7]; // 0x6A1(0x7)
};

// Object: Class GPUserInterface.CurveSamplerBase
// Size: 0x40 (Inherited: 0x28)
struct UCurveSamplerBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UCurveSamplerBase, "CurveSamplerBase")

	uint8_t bDirty : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct TArray<struct FVector2D> ControlPoints; // 0x30(0x10)

	// Object: Function GPUserInterface.CurveSamplerBase.SetControlPoints
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xafb9008
	// Params: [ Num(1) Size(0x10) ]
	void SetControlPoints(const struct TArray<struct FVector2D>& InControlPoints);

	// Object: Function GPUserInterface.CurveSamplerBase.SampleCurveBatch
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xafb8f10
	// Params: [ Num(2) Size(0x20) ]
	struct TArray<struct FVector2D> SampleCurveBatch(const struct TArray<float>& CPIdx);

	// Object: Function GPUserInterface.CurveSamplerBase.SampleCurve
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xafb8e34
	// Params: [ Num(2) Size(0xC) ]
	struct FVector2D SampleCurve(float CPIdx);

	// Object: Function GPUserInterface.CurveSamplerBase.RebuildCache
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb8df0
	// Params: [ Num(0) Size(0x0) ]
	void RebuildCache();

	// Object: Function GPUserInterface.CurveSamplerBase.GetControlPoints
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xafb8d24
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FVector2D> GetControlPoints();
};

// Object: Class GPUserInterface.BezierSampler
// Size: 0x40 (Inherited: 0x40)
struct UBezierSampler : UCurveSamplerBase
{
	DEFINE_UE_CLASS_HELPERS(UBezierSampler, "BezierSampler")
};

// Object: Class GPUserInterface.CatmullRomSampler
// Size: 0x70 (Inherited: 0x40)
struct UCatmullRomSampler : UCurveSamplerBase
{
	DEFINE_UE_CLASS_HELPERS(UCatmullRomSampler, "CatmullRomSampler")

	float Epsilon; // 0x40(0x4)
	float Alpha; // 0x44(0x4)
	uint8_t bCreateMirrorStartEnd : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
	struct TArray<struct FVector2D> ProcessedCP; // 0x50(0x10)
	struct TArray<float> T; // 0x60(0x10)

	// Object: Function GPUserInterface.CatmullRomSampler.SetEpsilon
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb933c
	// Params: [ Num(1) Size(0x4) ]
	void SetEpsilon(float InEpsilon);

	// Object: Function GPUserInterface.CatmullRomSampler.SetCreateMirrorStartEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb928c
	// Params: [ Num(1) Size(0x1) ]
	void SetCreateMirrorStartEnd(uint8_t bInCreateMirrorStartEnd);

	// Object: Function GPUserInterface.CatmullRomSampler.SetAlpha
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb91e4
	// Params: [ Num(1) Size(0x4) ]
	void SetAlpha(float InAlpha);

	// Object: Function GPUserInterface.CatmullRomSampler.GetEpsilon
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xafb91c8
	// Params: [ Num(1) Size(0x4) ]
	float GetEpsilon();

	// Object: Function GPUserInterface.CatmullRomSampler.GetCreateMirrorStartEnd
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xafb91ac
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetCreateMirrorStartEnd();

	// Object: Function GPUserInterface.CatmullRomSampler.GetAlpha
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xafb9190
	// Params: [ Num(1) Size(0x4) ]
	float GetAlpha();
};

// Object: Class GPUserInterface.AdaptiveCurveSamplerProxy
// Size: 0x60 (Inherited: 0x40)
struct UAdaptiveCurveSamplerProxy : UCurveSamplerBase
{
	DEFINE_UE_CLASS_HELPERS(UAdaptiveCurveSamplerProxy, "AdaptiveCurveSamplerProxy")

	struct UCurveSamplerBase* InnerSampler; // 0x40(0x8)
	float MaxAngleDeg; // 0x48(0x4)
	float MinPointDistance; // 0x4C(0x4)
	float MaxPointDistance; // 0x50(0x4)
	float StartingInterval; // 0x54(0x4)
	float StepUpFactor; // 0x58(0x4)
	float StepDownFactor; // 0x5C(0x4)

	// Object: Function GPUserInterface.AdaptiveCurveSamplerProxy.SetSampler
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb9720
	// Params: [ Num(1) Size(0x8) ]
	void SetSampler(struct UCurveSamplerBase* InSampler);

	// Object: Function GPUserInterface.AdaptiveCurveSamplerProxy.NonAdaptiveSampleRange
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb9594
	// Params: [ Num(4) Size(0x30) ]
	struct FAdaptiveCurveSamplingResult NonAdaptiveSampleRange(float FromCPIdx, float ToCPIdx, float Interval);

	// Object: Function GPUserInterface.AdaptiveCurveSamplerProxy.GetSampler
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xafb9560
	// Params: [ Num(1) Size(0x8) ]
	struct UCurveSamplerBase* GetSampler();

	// Object: Function GPUserInterface.AdaptiveCurveSamplerProxy.AdaptiveSampleRange
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb9410
	// Params: [ Num(3) Size(0x28) ]
	struct FAdaptiveCurveSamplingResult AdaptiveSampleRange(float FromCPIdx, float ToCPIdx);
};

// Object: Class GPUserInterface.CurveSamplerHelper
// Size: 0x28 (Inherited: 0x28)
struct UCurveSamplerHelper : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UCurveSamplerHelper, "CurveSamplerHelper")

	// Object: Function GPUserInterface.CurveSamplerHelper.CreateCatmullRomSampler
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xafb9954
	// Params: [ Num(2) Size(0x10) ]
	static struct UCatmullRomSampler* CreateCatmullRomSampler(float Alpha);

	// Object: Function GPUserInterface.CurveSamplerHelper.CreateBezierSampler
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xafb9920
	// Params: [ Num(1) Size(0x8) ]
	static struct UBezierSampler* CreateBezierSampler();

	// Object: Function GPUserInterface.CurveSamplerHelper.CreateAdaptiveCurveSamplerProxy
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xafb987c
	// Params: [ Num(2) Size(0x10) ]
	static struct UAdaptiveCurveSamplerProxy* CreateAdaptiveCurveSamplerProxy(struct UCurveSamplerBase* InnerSampler);
};

// Object: Class GPUserInterface.DFCurveWidget
// Size: 0x450 (Inherited: 0x360)
struct UDFCurveWidget : UDFUserWidgetBase
{
	DEFINE_UE_CLASS_HELPERS(UDFCurveWidget, "DFCurveWidget")

	uint8_t Pad_0x360[0x20]; // 0x360(0x20)
	struct TArray<struct FVector2D> CachedSampledPoints; // 0x380(0x10)
	struct TArray<struct FVector2D> CachedTransformedPoints; // 0x390(0x10)
	struct TArray<float> CachedPointInfluence; // 0x3A0(0x10)
	struct TArray<struct FVector2D> ControlPoints; // 0x3B0(0x10)
	float EraseEffectParameter; // 0x3C0(0x4)
	uint8_t Pad_0x3C4[0x4]; // 0x3C4(0x4)
	struct UAdaptiveCurveSamplerProxy* CurveSampler; // 0x3C8(0x8)
	uint8_t AdaptiveSampling : 1; // 0x3D0(0x1), Mask(0x1)
	uint8_t BitPad_0x3D0_1 : 7; // 0x3D0(0x1)
	uint8_t Pad_0x3D1[0x3]; // 0x3D1(0x3)
	struct FLinearColor CurveColor; // 0x3D4(0x10)
	float CurveThickness; // 0x3E4(0x4)
	uint8_t bShowControlPoints : 1; // 0x3E8(0x1), Mask(0x1)
	uint8_t BitPad_0x3E8_1 : 7; // 0x3E8(0x1)
	uint8_t Pad_0x3E9[0x3]; // 0x3E9(0x3)
	struct FLinearColor ControlPointColor; // 0x3EC(0x10)
	float ControlPointSize; // 0x3FC(0x4)
	uint8_t bShowSamplePoints : 1; // 0x400(0x1), Mask(0x1)
	uint8_t BitPad_0x400_1 : 7; // 0x400(0x1)
	uint8_t Pad_0x401[0x3]; // 0x401(0x3)
	struct FLinearColor SamplePointColor; // 0x404(0x10)
	float SamplePointSize; // 0x414(0x4)
	int32_t PerformancePrintInterval; // 0x418(0x4)
	uint8_t Pad_0x41C[0x34]; // 0x41C(0x34)

	// Object: Function GPUserInterface.DFCurveWidget.UpdatePointAt
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xafba318
	// Params: [ Num(2) Size(0xC) ]
	void UpdatePointAt(int32_t Index, struct FVector2D NewPoint);

	// Object: Function GPUserInterface.DFCurveWidget.ResetPerformanceStats
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafba304
	// Params: [ Num(0) Size(0x0) ]
	void ResetPerformanceStats();

	// Object: Function GPUserInterface.DFCurveWidget.RemovePointAt
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafba260
	// Params: [ Num(1) Size(0x4) ]
	void RemovePointAt(int32_t Index);

	// Object: Function GPUserInterface.DFCurveWidget.RefreshCurve
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafba24c
	// Params: [ Num(0) Size(0x0) ]
	void RefreshCurve();

	// Object: Function GPUserInterface.DFCurveWidget.PrintPerformanceStats
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafba238
	// Params: [ Num(0) Size(0x0) ]
	void PrintPerformanceStats();

	// Object: Function GPUserInterface.DFCurveWidget.LuaSetTransform
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafba070
	// Params: [ Num(6) Size(0x18) ]
	void LuaSetTransform(float XX, float XY, float YX, float YY, float TX, float TY);

	// Object: Function GPUserInterface.DFCurveWidget.LuaGetTransform
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xafb9fd8
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<float> LuaGetTransform();

	// Object: Function GPUserInterface.DFCurveWidget.InsertPointAt
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xafb9efc
	// Params: [ Num(2) Size(0xC) ]
	void InsertPointAt(int32_t Index, struct FVector2D Point);

	// Object: Function GPUserInterface.DFCurveWidget.GetTransformedPoints
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xafb9e78
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FVector2D> GetTransformedPoints();

	// Object: Function GPUserInterface.DFCurveWidget.GetSamplePointInfluence
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xafb9df4
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<float> GetSamplePointInfluence();

	// Object: Function GPUserInterface.DFCurveWidget.GetSampledPoints
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xafb9d70
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FVector2D> GetSampledPoints();

	// Object: Function GPUserInterface.DFCurveWidget.GetPointCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xafb9d3c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetPointCount();

	// Object: Function GPUserInterface.DFCurveWidget.GetPointAt
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xafb9c90
	// Params: [ Num(2) Size(0xC) ]
	struct FVector2D GetPointAt(int32_t Index);

	// Object: Function GPUserInterface.DFCurveWidget.GetPerformanceSummary
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xafb9bf8
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetPerformanceSummary();

	// Object: Function GPUserInterface.DFCurveWidget.DebugImportPoints
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb9b4c
	// Params: [ Num(1) Size(0x10) ]
	void DebugImportPoints(struct FString PointsStr);

	// Object: Function GPUserInterface.DFCurveWidget.DebugExportPoints
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xafb9ab4
	// Params: [ Num(1) Size(0x10) ]
	struct FString DebugExportPoints();

	// Object: Function GPUserInterface.DFCurveWidget.ClearPoints
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafb9aa0
	// Params: [ Num(0) Size(0x0) ]
	void ClearPoints();

	// Object: Function GPUserInterface.DFCurveWidget.AddPoint
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xafb9a00
	// Params: [ Num(1) Size(0x8) ]
	void AddPoint(struct FVector2D Point);
};

// Object: Class GPUserInterface.DFSolMatchReviewCurveWidget
// Size: 0x458 (Inherited: 0x450)
struct UDFSolMatchReviewCurveWidget : UDFCurveWidget
{
	DEFINE_UE_CLASS_HELPERS(UDFSolMatchReviewCurveWidget, "DFSolMatchReviewCurveWidget")

	float ErasedThickness; // 0x450(0x4)
	float ErasedColorAlpha; // 0x454(0x4)
};

// Object: Class GPUserInterface.DFListView
// Size: 0x3B8 (Inherited: 0x3B8)
struct UDFListView : UListView
{
	DEFINE_UE_CLASS_HELPERS(UDFListView, "DFListView")
};

// Object: Class GPUserInterface.DFCustomListView
// Size: 0x3C0 (Inherited: 0x3B8)
struct UDFCustomListView : UDFListView
{
	DEFINE_UE_CLASS_HELPERS(UDFCustomListView, "DFCustomListView")

	uint8_t bScrollBarVisible : 1; // 0x3B8(0x1), Mask(0x1)
	uint8_t BitPad_0x3B8_1 : 7; // 0x3B8(0x1)
	uint8_t Pad_0x3B9[0x7]; // 0x3B9(0x7)
};

// Object: Class GPUserInterface.DFDashedLine
// Size: 0x368 (Inherited: 0x2F8)
struct UDFDashedLine : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UDFDashedLine, "DFDashedLine")

	float DashLength; // 0x2F8(0x4)
	float GapLength; // 0x2FC(0x4)
	struct FLinearColor LineColor; // 0x300(0x10)
	float Thickness; // 0x310(0x4)
	uint8_t Pad_0x314[0x4]; // 0x314(0x4)
	struct TArray<struct FVector2D> Points; // 0x318(0x10)
	uint8_t Pad_0x328[0x40]; // 0x328(0x40)

	// Object: Function GPUserInterface.DFDashedLine.SetPoints
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xafba6dc
	// Params: [ Num(1) Size(0x10) ]
	void SetPoints(const struct TArray<struct FVector2D>& InPoints);

	// Object: Function GPUserInterface.DFDashedLine.Refresh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafba6a8
	// Params: [ Num(0) Size(0x0) ]
	void Refresh();

	// Object: Function GPUserInterface.DFDashedLine.LuaSetTransform
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafba4e0
	// Params: [ Num(6) Size(0x18) ]
	void LuaSetTransform(float XX, float XY, float YX, float YY, float TX, float TY);

	// Object: Function GPUserInterface.DFDashedLine.LuaGetTransform
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xafba448
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<float> LuaGetTransform();
};

// Object: Class GPUserInterface.DFDefferedPaintWidget
// Size: 0x180 (Inherited: 0x170)
struct UDFDefferedPaintWidget : UContentWidget
{
	DEFINE_UE_CLASS_HELPERS(UDFDefferedPaintWidget, "DFDefferedPaintWidget")

	uint8_t Pad_0x170[0x10]; // 0x170(0x10)

	// Object: Function GPUserInterface.DFDefferedPaintWidget.SetIsDeffered
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafba7a0
	// Params: [ Num(1) Size(0x1) ]
	void SetIsDeffered(uint8_t bInDeffered);
};

// Object: Class GPUserInterface.DFDJWMainTab
// Size: 0x630 (Inherited: 0x610)
struct UDFDJWMainTab : ULuaUIBaseView
{
	DEFINE_UE_CLASS_HELPERS(UDFDJWMainTab, "DFDJWMainTab")

	struct UDFVerticalBox* TabVerticalBox; // 0x610(0x8)
	struct UDFImage* DFImage_Arrow; // 0x618(0x8)
	struct UDFCommonCheckButton* DFCommonCheckButton; // 0x620(0x8)
	struct UWidgetAnimation* UncheckedUpAni; // 0x628(0x8)
};

// Object: Class GPUserInterface.DFDJWSubTabList
// Size: 0x380 (Inherited: 0x360)
struct UDFDJWSubTabList : UDFUserWidgetBase
{
	DEFINE_UE_CLASS_HELPERS(UDFDJWSubTabList, "DFDJWSubTabList")

	struct UDFVerticalBox* SubTabList; // 0x360(0x8)
	struct UUserWidget* TabCheckButton; // 0x368(0x8)
	struct FDelegate OnProcessBtnItemWidget; // 0x370(0x10)
};

// Object: Class GPUserInterface.DFEditableText
// Size: 0x4C8 (Inherited: 0x4C8)
struct UDFEditableText : UEditableText
{
	DEFINE_UE_CLASS_HELPERS(UDFEditableText, "DFEditableText")
};

// Object: Class GPUserInterface.DFEditableTextBox
// Size: 0xB18 (Inherited: 0xAF0)
struct UDFEditableTextBox : UEditableTextBox
{
	DEFINE_UE_CLASS_HELPERS(UDFEditableTextBox, "DFEditableTextBox")

	struct FMulticastInlineDelegate OnSendKeyPressed; // 0xAF0(0x10)
	uint8_t Pad_0xB00[0x18]; // 0xB00(0x18)

	// Object: Function GPUserInterface.DFEditableTextBox.UpdateKeyboardType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafbab34
	// Params: [ Num(1) Size(0x1) ]
	void UpdateKeyboardType(EVirtualKeyboardType NewKeyboardType);

	// Object: Function GPUserInterface.DFEditableTextBox.UpdateKeyboardDismissAction
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafbaa90
	// Params: [ Num(1) Size(0x1) ]
	void UpdateKeyboardDismissAction(EVirtualKeyboardDismissAction NewKeyboardDismissAction);

	// Object: Function GPUserInterface.DFEditableTextBox.SetIsKeyboardSendButtonEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafba9e4
	// Params: [ Num(1) Size(0x1) ]
	void SetIsKeyboardSendButtonEnabled(uint8_t bEnable);

	// Object: Function GPUserInterface.DFEditableTextBox.SetBlockHardwareTextInputLua
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafba938
	// Params: [ Num(1) Size(0x1) ]
	void SetBlockHardwareTextInputLua(uint8_t bBlock);

	// Object: Function GPUserInterface.DFEditableTextBox.ScrollToPreviousPage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafba924
	// Params: [ Num(0) Size(0x0) ]
	void ScrollToPreviousPage();

	// Object: Function GPUserInterface.DFEditableTextBox.ScrollToNextPage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafba910
	// Params: [ Num(0) Size(0x0) ]
	void ScrollToNextPage();

	// Object: Function GPUserInterface.DFEditableTextBox.ScrollToEndOfLine
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafba8fc
	// Params: [ Num(0) Size(0x0) ]
	void ScrollToEndOfLine();

	// Object: Function GPUserInterface.DFEditableTextBox.ScrollToEndOfDocument
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafba8e8
	// Params: [ Num(0) Size(0x0) ]
	void ScrollToEndOfDocument();

	// Object: Function GPUserInterface.DFEditableTextBox.ScrollToBeginningOfLine
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafba8d4
	// Params: [ Num(0) Size(0x0) ]
	void ScrollToBeginningOfLine();

	// Object: Function GPUserInterface.DFEditableTextBox.ScrollToBeginningOfDocument
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafba8c0
	// Params: [ Num(0) Size(0x0) ]
	void ScrollToBeginningOfDocument();

	// Object: Function GPUserInterface.DFEditableTextBox.ScrollToBeginning
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafba8ac
	// Params: [ Num(0) Size(0x0) ]
	void ScrollToBeginning();

	// Object: Function GPUserInterface.DFEditableTextBox.OpenVirtualKeyboardLua
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafba898
	// Params: [ Num(0) Size(0x0) ]
	void OpenVirtualKeyboardLua();

	// Object: DelegateFunction GPUserInterface.DFEditableTextBox.OnVirtualKeyboardSendKeyPressedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnVirtualKeyboardSendKeyPressedEvent__DelegateSignature(struct FString NewText);

	// Object: Function GPUserInterface.DFEditableTextBox.CloseVirtualKeyboardLua
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafba884
	// Params: [ Num(0) Size(0x0) ]
	void CloseVirtualKeyboardLua();
};

// Object: Class GPUserInterface.DFExCommonCarouselProV2
// Size: 0x2D8 (Inherited: 0x170)
struct UDFExCommonCarouselProV2 : UPanelWidget
{
	DEFINE_UE_CLASS_HELPERS(UDFExCommonCarouselProV2, "DFExCommonCarouselProV2")

	struct FMulticastInlineDelegate OnPageChanged; // 0x170(0x10)
	struct FMulticastInlineDelegate OnLoadOuterData; // 0x180(0x10)
	struct FMulticastInlineDelegate OnPageClicked; // 0x190(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x1A0(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x1B0(0x10)
	struct FDelegate OnGetStartActivePageIndex; // 0x1C0(0x10)
	struct FDelegate OnGetPageItemCount; // 0x1D0(0x10)
	struct FDelegate OnGetCacheItemCount; // 0x1E0(0x10)
	struct FDelegate OnGetRenderItemCount; // 0x1F0(0x10)
	struct FDelegate OnGetMaxDragItemCount; // 0x200(0x10)
	int32_t ActivePageIndex; // 0x210(0x4)
	int32_t PageSize; // 0x214(0x4)
	int32_t CacheSize; // 0x218(0x4)
	int32_t RenderSize; // 0x21C(0x4)
	struct UDFCarouselProV2ItemBase* WidgetType; // 0x220(0x8)
	uint8_t bIsAutoScroll : 1; // 0x228(0x1), Mask(0x1)
	uint8_t BitPad_0x228_1 : 7; // 0x228(0x1)
	uint8_t Pad_0x229[0x3]; // 0x229(0x3)
	float ScrollInterval; // 0x22C(0x4)
	uint8_t bIsVertical : 1; // 0x230(0x1), Mask(0x1)
	uint8_t BitPad_0x230_1 : 7; // 0x230(0x1)
	uint8_t Pad_0x231[0x3]; // 0x231(0x3)
	float MoveSpeed; // 0x234(0x4)
	ECarouselV2Curve CarouselCurve; // 0x238(0x1)
	uint8_t Pad_0x239[0x3]; // 0x239(0x3)
	float WidgetInterval; // 0x23C(0x4)
	uint8_t bIsIntervalIncrement : 1; // 0x240(0x1), Mask(0x1)
	uint8_t BitPad_0x240_1 : 7; // 0x240(0x1)
	uint8_t Pad_0x241[0x3]; // 0x241(0x3)
	float WidgetIntervalCurveTimes; // 0x244(0x4)
	float WidgetIntervalAdd; // 0x248(0x4)
	int32_t OpacityRateStartIdx; // 0x24C(0x4)
	float OpacityRate; // 0x250(0x4)
	float MinOpacity; // 0x254(0x4)
	float ScaleRate; // 0x258(0x4)
	float MinScale; // 0x25C(0x4)
	struct FVector2D ScalePivot; // 0x260(0x8)
	int32_t MaxDragPage; // 0x268(0x4)
	int32_t WheelPage; // 0x26C(0x4)
	int32_t QuickPage; // 0x270(0x4)
	float QuickThreshold; // 0x274(0x4)
	uint8_t bIsFinity : 1; // 0x278(0x1), Mask(0x1)
	uint8_t BitPad_0x278_1 : 7; // 0x278(0x1)
	uint8_t bIsSupportQuickSlide : 1; // 0x279(0x1), Mask(0x1)
	uint8_t BitPad_0x279_1 : 7; // 0x279(0x1)
	uint8_t bIsForceRenderSort : 1; // 0x27A(0x1), Mask(0x1)
	uint8_t BitPad_0x27A_1 : 7; // 0x27A(0x1)
	uint8_t Pad_0x27B[0x5D]; // 0x27B(0x5D)

	// Object: Function GPUserInterface.DFExCommonCarouselProV2.TurnPageTo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafbb0c4
	// Params: [ Num(1) Size(0x4) ]
	void TurnPageTo(int32_t TargetPageIndex);

	// Object: Function GPUserInterface.DFExCommonCarouselProV2.TurnPageOneByOne
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafbafa8
	// Params: [ Num(3) Size(0xC) ]
	void TurnPageOneByOne(int32_t PageCount, ECarouselV2ScrollDirection ScrollDirection, float StartSlideValue);

	// Object: Function GPUserInterface.DFExCommonCarouselProV2.SetTargetPageOnce
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafbaf04
	// Params: [ Num(1) Size(0x4) ]
	void SetTargetPageOnce(int32_t TargetPageIndex);

	// Object: Function GPUserInterface.DFExCommonCarouselProV2.RefreshAllItems
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafbaef0
	// Params: [ Num(0) Size(0x0) ]
	void RefreshAllItems();

	// Object: Function GPUserInterface.DFExCommonCarouselProV2.PreviousPage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafbaedc
	// Params: [ Num(0) Size(0x0) ]
	void PreviousPage();

	// Object: DelegateFunction GPUserInterface.DFExCommonCarouselProV2.OnPageChanged__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(4) Size(0x18) ]
	void OnPageChanged__DelegateSignature(struct UDFExCommonCarouselProV2* CarouselWidget, struct UDFCarouselProV2ItemBase* TargetItem, int32_t OldPageIndex, int32_t CurrentPageIndex);

	// Object: DelegateFunction GPUserInterface.DFExCommonCarouselProV2.OnGetItemCount__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	int32_t OnGetItemCount__DelegateSignature();

	// Object: DelegateFunction GPUserInterface.DFExCommonCarouselProV2.OnCarouselSimpleEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x14) ]
	void OnCarouselSimpleEvent__DelegateSignature(struct UDFExCommonCarouselProV2* CarouselWidget, struct UWidget* TargetItem, int32_t PageIndex);

	// Object: Function GPUserInterface.DFExCommonCarouselProV2.NextPage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafbaec8
	// Params: [ Num(0) Size(0x0) ]
	void NextPage();

	// Object: Function GPUserInterface.DFExCommonCarouselProV2.ManualClick
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafbae24
	// Params: [ Num(1) Size(0x8) ]
	void ManualClick(struct UUserWidget* CenterUWidget);

	// Object: Function GPUserInterface.DFExCommonCarouselProV2.EndAutoScroll
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafbae10
	// Params: [ Num(0) Size(0x0) ]
	void EndAutoScroll();

	// Object: Function GPUserInterface.DFExCommonCarouselProV2.BeginAutoScrollIfNeed
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafbadfc
	// Params: [ Num(0) Size(0x0) ]
	void BeginAutoScrollIfNeed();

	// Object: Function GPUserInterface.DFExCommonCarouselProV2.AddEnergy
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafbad58
	// Params: [ Num(1) Size(0x4) ]
	void AddEnergy(float Energy);
};

// Object: Class GPUserInterface.DFExCommonSimpleCarouselProV2
// Size: 0x2D8 (Inherited: 0x2D8)
struct UDFExCommonSimpleCarouselProV2 : UDFExCommonCarouselProV2
{
	DEFINE_UE_CLASS_HELPERS(UDFExCommonSimpleCarouselProV2, "DFExCommonSimpleCarouselProV2")
};

// Object: Class GPUserInterface.DFExpandableArea
// Size: 0x3A0 (Inherited: 0x3A0)
struct UDFExpandableArea : UExpandableArea
{
	DEFINE_UE_CLASS_HELPERS(UDFExpandableArea, "DFExpandableArea")
};

// Object: Class GPUserInterface.DFGridPanel
// Size: 0x1B8 (Inherited: 0x1A0)
struct UDFGridPanel : UGridPanel
{
	DEFINE_UE_CLASS_HELPERS(UDFGridPanel, "DFGridPanel")

	uint8_t bFramingAvance : 1; // 0x1A0(0x1), Mask(0x1)
	uint8_t BitPad_0x1A0_1 : 7; // 0x1A0(0x1)
	uint8_t Pad_0x1A1[0x3]; // 0x1A1(0x3)
	int32_t FramingNumber; // 0x1A4(0x4)
	uint8_t Pad_0x1A8[0x10]; // 0x1A8(0x10)
};

// Object: Class GPUserInterface.DFHorizontalBox
// Size: 0x190 (Inherited: 0x190)
struct UDFHorizontalBox : UHorizontalBox
{
	DEFINE_UE_CLASS_HELPERS(UDFHorizontalBox, "DFHorizontalBox")

	// Object: Function GPUserInterface.DFHorizontalBox.SetContentVerticalAlignment
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0xafbc624
	// Params: [ Num(1) Size(0x1) ]
	void SetContentVerticalAlignment(EVerticalAlignment InContentVerticalAlignment);

	// Object: Function GPUserInterface.DFHorizontalBox.SetContentPadding
	// Flags: [Final|Native|Private|HasOutParms|BlueprintCallable]
	// Offset: 0xafbc570
	// Params: [ Num(1) Size(0x10) ]
	void SetContentPadding(const struct FMargin& InPadding);

	// Object: Function GPUserInterface.DFHorizontalBox.SetContentHorizontalAlignment
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0xafbc4cc
	// Params: [ Num(1) Size(0x1) ]
	void SetContentHorizontalAlignment(EHorizontalAlignment InContentHorizontalAlignment);

	// Object: Function GPUserInterface.DFHorizontalBox.SetAllowScrollBoxSlot
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0xafbc420
	// Params: [ Num(1) Size(0x1) ]
	void SetAllowScrollBoxSlot(uint8_t bIsAllow);
};

// Object: Class GPUserInterface.DFImage
// Size: 0x340 (Inherited: 0x2D0)
struct UDFImage : UImage
{
	DEFINE_UE_CLASS_HELPERS(UDFImage, "DFImage")

	uint8_t bLazyLoadBrush : 1; // 0x2D0(0x1), Mask(0x1)
	uint8_t BitPad_0x2D0_1 : 7; // 0x2D0(0x1)
	uint8_t bAutoLazyLoadBrush : 1; // 0x2D1(0x1), Mask(0x1)
	uint8_t BitPad_0x2D1_1 : 7; // 0x2D1(0x1)
	uint8_t Pad_0x2D2[0x6]; // 0x2D2(0x6)
	struct TSoftObjectPtr<UObject> ResourceSoftObject; // 0x2D8(0x28)
	struct FSoftObjectPath CurrentLoadingBrush; // 0x300(0x18)
	uint8_t bKeepColor : 1; // 0x318(0x1), Mask(0x1)
	uint8_t BitPad_0x318_1 : 7; // 0x318(0x1)
	uint8_t Pad_0x319[0x3]; // 0x319(0x3)
	struct FLinearColor CachedColorAndOpacity; // 0x31C(0x10)
	uint8_t Pad_0x32C[0x14]; // 0x32C(0x14)

	// Object: Function GPUserInterface.DFImage.SetImageSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xf649694
	// Params: [ Num(1) Size(0x18) ]
	void SetImageSize(struct FSoftObjectPath ImagePath);

	// Object: Function GPUserInterface.DFImage.SetImage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfe64148
	// Params: [ Num(2) Size(0x9) ]
	void SetImage(struct UObject* ImageAsset, uint8_t bAutoResize);

	// Object: Function GPUserInterface.DFImage.SetBrushTiling
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafbcd9c
	// Params: [ Num(1) Size(0x1) ]
	void SetBrushTiling(ESlateBrushTileType Tiling);

	// Object: Function GPUserInterface.DFImage.SetBrushSoft
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafbcd88
	// Params: [ Num(0) Size(0x0) ]
	void SetBrushSoft();

	// Object: Function GPUserInterface.DFImage.SetBrushFromSoft
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafbcd74
	// Params: [ Num(0) Size(0x0) ]
	void SetBrushFromSoft();

	// Object: Function GPUserInterface.DFImage.GetCurrentLoadingBrush
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0xafbcc8c
	// Params: [ Num(1) Size(0x18) ]
	struct FSoftObjectPath GetCurrentLoadingBrush();

	// Object: Function GPUserInterface.DFImage.Clear
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafbcc78
	// Params: [ Num(0) Size(0x0) ]
	void Clear();

	// Object: Function GPUserInterface.DFImage.AsyncSetImagePath
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1018c058
	// Params: [ Num(2) Size(0x11) ]
	void AsyncSetImagePath(struct FString ImagePath, uint8_t bAutoResize);

	// Object: Function GPUserInterface.DFImage.AsyncSetImageID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafbcb90
	// Params: [ Num(2) Size(0x9) ]
	void AsyncSetImageID(struct FName ImageID, uint8_t bAutoResize);

	// Object: Function GPUserInterface.DFImage.AsyncSetImageBySoftObjectPath
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xf5273fc
	// Params: [ Num(3) Size(0x1A) ]
	void AsyncSetImageBySoftObjectPath(struct FSoftObjectPath ImagePath, uint8_t bAutoResize, uint8_t bInKeepColor);
};

// Object: Class GPUserInterface.DFHttpImage
// Size: 0x378 (Inherited: 0x340)
struct UDFHttpImage : UDFImage
{
	DEFINE_UE_CLASS_HELPERS(UDFHttpImage, "DFHttpImage")

	struct FString Http_Url; // 0x340(0x10)
	struct FMulticastInlineDelegate DFHttpImageSetImageFinishDelegate; // 0x350(0x10)
	struct URuntimeFilesDownloaderProxy* DownloaderProxy; // 0x360(0x8)
	uint8_t Pad_0x368[0x10]; // 0x368(0x10)

	// Object: Function GPUserInterface.DFHttpImage.SetHttpImage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafbca2c
	// Params: [ Num(1) Size(0x10) ]
	void SetHttpImage(struct FString URL);

	// Object: Function GPUserInterface.DFHttpImage.OnDownloaderResult
	// Flags: [Final|Native|Public]
	// Offset: 0xafbc8f4
	// Params: [ Num(2) Size(0x18) ]
	void OnDownloaderResult(EDownloadResult Result, struct FString LastModified);

	// Object: Function GPUserInterface.DFHttpImage.LoadImageTexture2D
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xafbc848
	// Params: [ Num(2) Size(0x18) ]
	static struct UTexture2D* LoadImageTexture2D(struct FString ImagePath);
};

// Object: Class GPUserInterface.DFInputTypeVisibilityReContainer
// Size: 0x1A0 (Inherited: 0x190)
struct UDFInputTypeVisibilityReContainer : UDFContainerBase
{
	DEFINE_UE_CLASS_HELPERS(UDFInputTypeVisibilityReContainer, "DFInputTypeVisibilityReContainer")

	EGPInputType VisibilityInputType; // 0x18A(0x1)
	uint8_t bEnableInputTypeVisibility : 1; // 0x18B(0x1), Mask(0x1)
	struct TArray<struct FPlatformInputTypeVisibility> ExtendedPlatformData; // 0x190(0x10)

	// Object: Function GPUserInterface.DFInputTypeVisibilityReContainer.InputTypeChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0xafbcfa0
	// Params: [ Num(1) Size(0x1) ]
	void InputTypeChanged(EGPInputType InputType);

	// Object: Function GPUserInterface.DFInputTypeVisibilityReContainer.GetActiveConfig
	// Flags: [Final|Native|Public]
	// Offset: 0xafbcf64
	// Params: [ Num(1) Size(0x3) ]
	struct FPlatformInputTypeVisibility GetActiveConfig();
};

// Object: Class GPUserInterface.DFInvalidationBox
// Size: 0x180 (Inherited: 0x180)
struct UDFInvalidationBox : UInvalidationBox
{
	DEFINE_UE_CLASS_HELPERS(UDFInvalidationBox, "DFInvalidationBox")
};

// Object: Class GPUserInterface.DFRichTextBlock
// Size: 0x7E8 (Inherited: 0x788)
struct UDFRichTextBlock : URichTextBlock
{
	DEFINE_UE_CLASS_HELPERS(UDFRichTextBlock, "DFRichTextBlock")

	uint8_t bUseConsoleColor : 1; // 0x788(0x1), Mask(0x1)
	uint8_t BitPad_0x788_1 : 7; // 0x788(0x1)
	uint8_t bEnablePlatformText : 1; // 0x789(0x1), Mask(0x1)
	uint8_t BitPad_0x789_1 : 7; // 0x789(0x1)
	uint8_t Pad_0x78A[0x6]; // 0x78A(0x6)
	struct TMap<EDFTextPlatformType, struct FText> PlatformText; // 0x790(0x50)
	uint8_t bEnableDynamicFormat : 1; // 0x7E0(0x1), Mask(0x1)
	uint8_t BitPad_0x7E0_1 : 7; // 0x7E0(0x1)
	uint8_t Pad_0x7E1[0x7]; // 0x7E1(0x7)

	// Object: Function GPUserInterface.DFRichTextBlock.SetLineHeightPercentage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafbd8b4
	// Params: [ Num(1) Size(0x4) ]
	void SetLineHeightPercentage(float InLineHeightPercentage);

	// Object: Function GPUserInterface.DFRichTextBlock.RedirectDisplayTextByPlatformText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafbd8a0
	// Params: [ Num(0) Size(0x0) ]
	void RedirectDisplayTextByPlatformText();
};

// Object: Class GPUserInterface.DFLEDRichTextBlock
// Size: 0x828 (Inherited: 0x7E8)
struct UDFLEDRichTextBlock : UDFRichTextBlock
{
	DEFINE_UE_CLASS_HELPERS(UDFLEDRichTextBlock, "DFLEDRichTextBlock")

	uint8_t Pad_0x7E8[0x18]; // 0x7E8(0x18)
	ETextChecked CheckedStyle; // 0x800(0x1)
	uint8_t Pad_0x801[0x3]; // 0x801(0x3)
	float LEDSpeed; // 0x804(0x4)
	float StartLEDX; // 0x808(0x4)
	float EndLEDX; // 0x80C(0x4)
	uint8_t UseCustomJustification : 1; // 0x810(0x1), Mask(0x1)
	uint8_t BitPad_0x810_1 : 7; // 0x810(0x1)
	ETextJustify CustomJustification; // 0x811(0x1)
	uint8_t Pad_0x812[0x16]; // 0x812(0x16)

	// Object: Function GPUserInterface.DFLEDRichTextBlock.SetInCheckedStyle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafbd0cc
	// Params: [ Num(1) Size(0x1) ]
	void SetInCheckedStyle(ETextChecked InCheckedStyle);
};

// Object: Class GPUserInterface.DFMultiLineEditableText
// Size: 0x548 (Inherited: 0x548)
struct UDFMultiLineEditableText : UMultiLineEditableText
{
	DEFINE_UE_CLASS_HELPERS(UDFMultiLineEditableText, "DFMultiLineEditableText")
};

// Object: Class GPUserInterface.DFMultiLineEditableTextBox
// Size: 0xE00 (Inherited: 0xDD8)
struct UDFMultiLineEditableTextBox : UMultiLineEditableTextBox
{
	DEFINE_UE_CLASS_HELPERS(UDFMultiLineEditableTextBox, "DFMultiLineEditableTextBox")

	struct FMulticastInlineDelegate OnSendKeyPressed; // 0xDD8(0x10)
	uint8_t Pad_0xDE8[0x18]; // 0xDE8(0x18)

	// Object: Function GPUserInterface.DFMultiLineEditableTextBox.SetIsKeyboardSendButtonEnabled
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0xafbd368
	// Params: [ Num(1) Size(0x1) ]
	void SetIsKeyboardSendButtonEnabled(uint8_t bEnable);

	// Object: Function GPUserInterface.DFMultiLineEditableTextBox.OpenVirtualKeyboard
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0xafbd354
	// Params: [ Num(0) Size(0x0) ]
	void OpenVirtualKeyboard();

	// Object: DelegateFunction GPUserInterface.DFMultiLineEditableTextBox.OnVirtualKeyboardSendKeyPressedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnVirtualKeyboardSendKeyPressedEvent__DelegateSignature(struct FString NewText);

	// Object: Function GPUserInterface.DFMultiLineEditableTextBox.CloseVirtualKeyboard
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0xafbd340
	// Params: [ Num(0) Size(0x0) ]
	void CloseVirtualKeyboard();
};

// Object: Class GPUserInterface.DFOverlay
// Size: 0x180 (Inherited: 0x180)
struct UDFOverlay : UOverlay
{
	DEFINE_UE_CLASS_HELPERS(UDFOverlay, "DFOverlay")
};

// Object: Class GPUserInterface.DFProgressBar
// Size: 0x390 (Inherited: 0x390)
struct UDFProgressBar : UProgressBar
{
	DEFINE_UE_CLASS_HELPERS(UDFProgressBar, "DFProgressBar")
};

// Object: Class GPUserInterface.DFRadialImage
// Size: 0x268 (Inherited: 0x268)
struct UDFRadialImage : URadialImage
{
	DEFINE_UE_CLASS_HELPERS(UDFRadialImage, "DFRadialImage")
};

// Object: Class GPUserInterface.DFRetainerBox
// Size: 0x1A0 (Inherited: 0x1A0)
struct UDFRetainerBox : URetainerBox
{
	DEFINE_UE_CLASS_HELPERS(UDFRetainerBox, "DFRetainerBox")
};

// Object: Class GPUserInterface.DFSafeZone
// Size: 0x180 (Inherited: 0x180)
struct UDFSafeZone : USafeZone
{
	DEFINE_UE_CLASS_HELPERS(UDFSafeZone, "DFSafeZone")
};

// Object: Class GPUserInterface.DFScaleBox
// Size: 0x188 (Inherited: 0x188)
struct UDFScaleBox : UScaleBox
{
	DEFINE_UE_CLASS_HELPERS(UDFScaleBox, "DFScaleBox")
};

// Object: Class GPUserInterface.DFScrollBox
// Size: 0x9F8 (Inherited: 0x9A0)
struct UDFScrollBox : UScrollBox
{
	DEFINE_UE_CLASS_HELPERS(UDFScrollBox, "DFScrollBox")

	uint8_t Pad_0x9A0[0x8]; // 0x9A0(0x8)
	EDFDefaultScrollBarType DefaultScrollBarType; // 0x9A8(0x1)
	EDFDefaultScrollBarType DefaultScrollBarTypeHD; // 0x9A9(0x1)
	EDFDefaultScrollBoxType DefaultScrollBoxType; // 0x9AA(0x1)
	uint8_t Pad_0x9AB[0x1]; // 0x9AB(0x1)
	float OverrideScrollAmount; // 0x9AC(0x4)
	uint8_t bUseNativeNavigation : 1; // 0x9B0(0x1), Mask(0x1)
	uint8_t BitPad_0x9B0_1 : 7; // 0x9B0(0x1)
	uint8_t bHandleMouseDrag : 1; // 0x9B1(0x1), Mask(0x1)
	uint8_t BitPad_0x9B1_1 : 7; // 0x9B1(0x1)
	EScrollDirectionMode ScrollDirectionMode; // 0x9B2(0x1)
	uint8_t Pad_0x9B3[0x1]; // 0x9B3(0x1)
	float ScrollDirectionAngle; // 0x9B4(0x4)
	struct FMulticastInlineDelegate PerScrollCallback; // 0x9B8(0x10)
	uint8_t bScrollWidgetIntoViewIfOnEdge : 1; // 0x9C8(0x1), Mask(0x1)
	uint8_t BitPad_0x9C8_1 : 7; // 0x9C8(0x1)
	uint8_t Pad_0x9C9[0x7]; // 0x9C9(0x7)
	struct UUserWidget* ScrollWidgetTemplateClassIntoViewIfOnEdge; // 0x9D0(0x8)
	uint8_t Pad_0x9D8[0x20]; // 0x9D8(0x20)

	// Object: Function GPUserInterface.DFScrollBox.SetScrollWidgetIntoViewIfOnEdge
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1067c20c
	// Params: [ Num(1) Size(0x1) ]
	void SetScrollWidgetIntoViewIfOnEdge(uint8_t bInScrollWidgetIntoViewIfOnEdge);

	// Object: Function GPUserInterface.DFScrollBox.SetOverrideScrollAmount
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafbe3e8
	// Params: [ Num(1) Size(0x4) ]
	void SetOverrideScrollAmount(float Amount);

	// Object: Function GPUserInterface.DFScrollBox.SetHandleMouseDrag
	// Flags: [Final|Native|Public]
	// Offset: 0xafbe33c
	// Params: [ Num(1) Size(0x1) ]
	void SetHandleMouseDrag(uint8_t bInHandleMouseDrag);

	// Object: Function GPUserInterface.DFScrollBox.SetDeviation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafbe29c
	// Params: [ Num(1) Size(0x4) ]
	void SetDeviation(float Deviation);

	// Object: Function GPUserInterface.DFScrollBox.SetContentVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafbe1f8
	// Params: [ Num(1) Size(0x1) ]
	void SetContentVerticalAlignment(EVerticalAlignment InContentVerticalAlignment);

	// Object: Function GPUserInterface.DFScrollBox.SetContentHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafbe154
	// Params: [ Num(1) Size(0x1) ]
	void SetContentHorizontalAlignment(EHorizontalAlignment InContentHorizontalAlignment);

	// Object: Function GPUserInterface.DFScrollBox.ScrollToOffsetWithParams
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafbe03c
	// Params: [ Num(3) Size(0xC) ]
	void ScrollToOffsetWithParams(float TargetOffset, float Speed, float Interval);

	// Object: Function GPUserInterface.DFScrollBox.ScrollToOffset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x106800d4
	// Params: [ Num(1) Size(0x4) ]
	void ScrollToOffset(float TargetOffset);

	// Object: Function GPUserInterface.DFScrollBox.OnHandleMouseButtonUpDelegate
	// Flags: [Final|Native|Public]
	// Offset: 0xe7ab0a0
	// Params: [ Num(1) Size(0x70) ]
	void OnHandleMouseButtonUpDelegate(struct FPointerEvent MouseEvent);

	// Object: Function GPUserInterface.DFScrollBox.JumpToOffset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafbdf98
	// Params: [ Num(1) Size(0x4) ]
	void JumpToOffset(float TargetOffset);

	// Object: Function GPUserInterface.DFScrollBox.IsScrollBarNeeded
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xafbdf60
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsScrollBarNeeded();

	// Object: Function GPUserInterface.DFScrollBox.IsDraggingScrollBar
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xafbdf28
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsDraggingScrollBar();

	// Object: Function GPUserInterface.DFScrollBox.GetIndexByItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafbde7c
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetIndexByItem(struct UWidget* ItemWidget);

	// Object: Function GPUserInterface.DFScrollBox.GetBoxHeight
	// Flags: [Final|Native|Public]
	// Offset: 0xe96dad8
	// Params: [ Num(1) Size(0x4) ]
	float GetBoxHeight();

	// Object: Function GPUserInterface.DFScrollBox.FindChildUnderMouse
	// Flags: [Final|Native|Public]
	// Offset: 0xafbdc6c
	// Params: [ Num(2) Size(0x78) ]
	struct UWidget* FindChildUnderMouse(struct FPointerEvent MouseEvent);

	// Object: Function GPUserInterface.DFScrollBox.EnableNativeNavigation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafbdbc0
	// Params: [ Num(1) Size(0x1) ]
	void EnableNativeNavigation(uint8_t bEnabled);

	// Object: Function GPUserInterface.DFScrollBox.CancelScrollToOffset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafbdbac
	// Params: [ Num(0) Size(0x0) ]
	void CancelScrollToOffset();
};

// Object: Class GPUserInterface.DFScrollGridBox
// Size: 0xAC0 (Inherited: 0x9F8)
struct UDFScrollGridBox : UScrollGridBox
{
	DEFINE_UE_CLASS_HELPERS(UDFScrollGridBox, "DFScrollGridBox")

	uint8_t Pad_0x9F8[0x10]; // 0x9F8(0x10)
	EDFDefaultScrollBarType DefaultScrollBarType; // 0xA08(0x1)
	EDFDefaultScrollBarType DefaultScrollBarTypeHD; // 0xA09(0x1)
	EDFDefaultScrollBoxType DefaultScrollBoxType; // 0xA0A(0x1)
	uint8_t Pad_0xA0B[0x1]; // 0xA0B(0x1)
	float OverrideScrollAmount; // 0xA0C(0x4)
	uint8_t bScrollWidgetIntoViewIfOnEdge : 1; // 0xA10(0x1), Mask(0x1)
	uint8_t BitPad_0xA10_1 : 7; // 0xA10(0x1)
	uint8_t bHandleMouseDrag : 1; // 0xA11(0x1), Mask(0x1)
	uint8_t BitPad_0xA11_1 : 7; // 0xA11(0x1)
	uint8_t Pad_0xA12[0x2E]; // 0xA12(0x2E)
	struct FMulticastInlineDelegate OnSlotClickedChanged; // 0xA40(0x10)
	uint8_t Pad_0xA50[0x70]; // 0xA50(0x70)

	// Object: Function GPUserInterface.DFScrollGridBox.SetScrollWidgetIntoViewIfOnEdge
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafbee64
	// Params: [ Num(1) Size(0x1) ]
	void SetScrollWidgetIntoViewIfOnEdge(uint8_t bInScrollWidgetIntoViewIfOnEdge);

	// Object: Function GPUserInterface.DFScrollGridBox.SetOverrideScrollAmount
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafbedc0
	// Params: [ Num(1) Size(0x4) ]
	void SetOverrideScrollAmount(float Amount);

	// Object: Function GPUserInterface.DFScrollGridBox.ScrollToIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafbec48
	// Params: [ Num(4) Size(0x7) ]
	void ScrollToIndex(int32_t Index, uint8_t bCenter, uint8_t bIntoView, uint8_t bForceFullyBuild);

	// Object: Function GPUserInterface.DFScrollGridBox.ReleaseAllItems
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafbec34
	// Params: [ Num(0) Size(0x0) ]
	void ReleaseAllItems();

	// Object: Function GPUserInterface.DFScrollGridBox.OnSetClickedTabByString
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafbeb3c
	// Params: [ Num(1) Size(0x10) ]
	void OnSetClickedTabByString(struct FString ClickedTabString);

	// Object: Function GPUserInterface.DFScrollGridBox.OnSetClickedTab
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafbea98
	// Params: [ Num(1) Size(0x4) ]
	void OnSetClickedTab(int32_t Index);

	// Object: Function GPUserInterface.DFScrollGridBox.OnHandleMouseButtonUpDelegate
	// Flags: [Final|Native|Public]
	// Offset: 0xe7a3898
	// Params: [ Num(1) Size(0x70) ]
	void OnHandleMouseButtonUpDelegate(struct FPointerEvent MouseEvent);

	// Object: Function GPUserInterface.DFScrollGridBox.FindChildUnderMouse
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xafbe888
	// Params: [ Num(2) Size(0x74) ]
	int32_t FindChildUnderMouse(struct FPointerEvent MouseEvent);
};

// Object: Class GPUserInterface.MainTabChangeObject
// Size: 0x40 (Inherited: 0x28)
struct UMainTabChangeObject : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMainTabChangeObject, "MainTabChangeObject")

	uint8_t Pad_0x28[0x18]; // 0x28(0x18)

	// Object: Function GPUserInterface.MainTabChangeObject.Dispatch
	// Flags: [Final|Native|Public]
	// Offset: 0xafbef60
	// Params: [ Num(1) Size(0x1) ]
	void Dispatch(uint8_t bIsChecked);
};

// Object: Class GPUserInterface.SubTabChangeObject
// Size: 0x40 (Inherited: 0x28)
struct USubTabChangeObject : UObject
{
	DEFINE_UE_CLASS_HELPERS(USubTabChangeObject, "SubTabChangeObject")

	uint8_t Pad_0x28[0x10]; // 0x28(0x10)
	struct UDFCommonCheckButton* CheckButton; // 0x38(0x8)

	// Object: Function GPUserInterface.SubTabChangeObject.Dispatch
	// Flags: [Final|Native|Public]
	// Offset: 0xafbf020
	// Params: [ Num(1) Size(0x1) ]
	void Dispatch(uint8_t bIsChecked);
};

// Object: Class GPUserInterface.DFSecondLevelCommonTab
// Size: 0x448 (Inherited: 0x360)
struct UDFSecondLevelCommonTab : UDFUserWidgetBase
{
	DEFINE_UE_CLASS_HELPERS(UDFSecondLevelCommonTab, "DFSecondLevelCommonTab")

	struct UCanvasPanel* ScrollCanvas; // 0x360(0x8)
	struct UDFWaterfallScrollView* MainTabList; // 0x368(0x8)
	struct UDFDJWSubTabList* SubTabWidget; // 0x370(0x8)
	struct UDFDJWMainTab* TabCheckButton; // 0x378(0x8)
	int32_t CurIndex; // 0x380(0x4)
	int32_t SubIndex; // 0x384(0x4)
	uint8_t isDrop : 1; // 0x388(0x1), Mask(0x1)
	uint8_t BitPad_0x388_1 : 7; // 0x388(0x1)
	uint8_t Pad_0x389[0x7]; // 0x389(0x7)
	struct UDFDJWSubTabList* SubTabListWidget; // 0x390(0x8)
	struct TArray<struct UDFDJWMainTab*> MainTabBtnList; // 0x398(0x10)
	struct FDelegate OnGetMainItemCount; // 0x3A8(0x10)
	struct FDelegate OnProcessMainItemWidgetEvent; // 0x3B8(0x10)
	struct FDelegate OnGetSubItemCount; // 0x3C8(0x10)
	struct FDelegate OnProcessSubItemWidgetEvent; // 0x3D8(0x10)
	struct FDelegate OnTabIndexChange; // 0x3E8(0x10)
	struct FDelegate OnProcessSubItemsUpdateFinished; // 0x3F8(0x10)
	struct FDelegate OnSubItemWidgetShow; // 0x408(0x10)
	uint8_t Pad_0x418[0x8]; // 0x418(0x8)
	struct TArray<struct UMainTabChangeObject*> CacheDelegates; // 0x420(0x10)
	struct TArray<struct USubTabChangeObject*> CacheSubDelegates; // 0x430(0x10)
	uint8_t Pad_0x440[0x8]; // 0x440(0x8)

	// Object: Function GPUserInterface.DFSecondLevelCommonTab.SetNotDefaultSeleted
	// Flags: [Final|Native|Public]
	// Offset: 0xafbf40c
	// Params: [ Num(0) Size(0x0) ]
	void SetNotDefaultSeleted();

	// Object: Function GPUserInterface.DFSecondLevelCommonTab.RefreshTabItem
	// Flags: [Final|Native|Public]
	// Offset: 0xafbf3f8
	// Params: [ Num(0) Size(0x0) ]
	void RefreshTabItem();

	// Object: Function GPUserInterface.DFSecondLevelCommonTab.OnProcessSubItemWidgetUpdateFinished
	// Flags: [Final|Native|Public]
	// Offset: 0xafbf3e4
	// Params: [ Num(0) Size(0x0) ]
	void OnProcessSubItemWidgetUpdateFinished();

	// Object: Function GPUserInterface.DFSecondLevelCommonTab.OnProcessSubItemWidget
	// Flags: [Final|Native|Public]
	// Offset: 0xafbf304
	// Params: [ Num(2) Size(0x10) ]
	void OnProcessSubItemWidget(int32_t Position, struct UWidget* ItemWidget);

	// Object: Function GPUserInterface.DFSecondLevelCommonTab.OnProcessMainItemWidget
	// Flags: [Final|Native|Public]
	// Offset: 0xafbf224
	// Params: [ Num(2) Size(0x10) ]
	void OnProcessMainItemWidget(int32_t Position, struct UWidget* ItemWidget);

	// Object: Function GPUserInterface.DFSecondLevelCommonTab.NativeSetTabIndex
	// Flags: [Final|Native|Public]
	// Offset: 0xafbf148
	// Params: [ Num(2) Size(0x8) ]
	void NativeSetTabIndex(int32_t MainIndex, int32_t SubIdx);

	// Object: Function GPUserInterface.DFSecondLevelCommonTab.GetSubListCount
	// Flags: [Final|Native|Public]
	// Offset: 0xafbf114
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetSubListCount();

	// Object: Function GPUserInterface.DFSecondLevelCommonTab.GetMainListCount
	// Flags: [Final|Native|Public]
	// Offset: 0xafbf0e0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetMainListCount();
};

// Object: Class GPUserInterface.DFSimpleGradient
// Size: 0x218 (Inherited: 0x158)
struct UDFSimpleGradient : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UDFSimpleGradient, "DFSimpleGradient")

	struct FSlateBrush Brush; // 0x158(0x90)
	struct FLinearColor SVColorSelect; // 0x1E8(0x10)
	struct FMulticastInlineDelegate SVColorChangeValue; // 0x1F8(0x10)
	uint8_t Pad_0x208[0x10]; // 0x208(0x10)

	// Object: Function GPUserInterface.DFSimpleGradient.GetDynamicMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc0ce4
	// Params: [ Num(1) Size(0x8) ]
	struct UMaterialInstanceDynamic* GetDynamicMaterial();
};

// Object: Class GPUserInterface.DFSizeBox
// Size: 0x1A8 (Inherited: 0x1A8)
struct UDFSizeBox : USizeBox
{
	DEFINE_UE_CLASS_HELPERS(UDFSizeBox, "DFSizeBox")
};

// Object: Class GPUserInterface.DFSlider
// Size: 0x6B8 (Inherited: 0x578)
struct UDFSlider : USlider
{
	DEFINE_UE_CLASS_HELPERS(UDFSlider, "DFSlider")

	struct FName MouseCaptureBeginSoundName; // 0x578(0x8)
	float BandMinValue; // 0x580(0x4)
	float IsBandMinValue; // 0x584(0x4)
	float AccelerationAmount; // 0x588(0x4)
	float ResetDelay; // 0x58C(0x4)
	float MaxStepSize; // 0x590(0x4)
	uint8_t bIsCanPress : 1; // 0x594(0x1), Mask(0x1)
	uint8_t BitPad_0x594_1 : 7; // 0x594(0x1)
	uint8_t Pad_0x595[0x3]; // 0x595(0x3)
	struct FSlateBrush PressedBarImage; // 0x598(0x90)
	struct FSlateBrush PressedThumbImage; // 0x628(0x90)

	// Object: Function GPUserInterface.DFSlider.SetResetDelay
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc11b8
	// Params: [ Num(1) Size(0x4) ]
	void SetResetDelay(float InResetDelay);

	// Object: Function GPUserInterface.DFSlider.SetRequiresControllerLock
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc110c
	// Params: [ Num(1) Size(0x1) ]
	void SetRequiresControllerLock(uint8_t InRequiresControllerLock);

	// Object: Function GPUserInterface.DFSlider.SetMaxStepSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc1068
	// Params: [ Num(1) Size(0x4) ]
	void SetMaxStepSize(float InMaxStepSize);

	// Object: Function GPUserInterface.DFSlider.SetEnableSliderCycle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc0fbc
	// Params: [ Num(1) Size(0x1) ]
	void SetEnableSliderCycle(uint8_t bEnable);

	// Object: Function GPUserInterface.DFSlider.SetBandMinValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc0ed4
	// Params: [ Num(2) Size(0x5) ]
	void SetBandMinValue(float InValue, uint8_t bBandMinValue);

	// Object: Function GPUserInterface.DFSlider.SetAccelerationAmount
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc0e30
	// Params: [ Num(1) Size(0x4) ]
	void SetAccelerationAmount(float InAccelerationAmount);

	// Object: Function GPUserInterface.DFSlider.GetDynamicMaterial_NormalBar
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc0dfc
	// Params: [ Num(1) Size(0x8) ]
	struct UMaterialInstanceDynamic* GetDynamicMaterial_NormalBar();

	// Object: Function GPUserInterface.DFSlider.GetDynamicMaterial_HoveredBar
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc0dc8
	// Params: [ Num(1) Size(0x8) ]
	struct UMaterialInstanceDynamic* GetDynamicMaterial_HoveredBar();

	// Object: Function GPUserInterface.DFSlider.GetDynamicMaterial_DisabledBar
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc0d94
	// Params: [ Num(1) Size(0x8) ]
	struct UMaterialInstanceDynamic* GetDynamicMaterial_DisabledBar();
};

// Object: Class GPUserInterface.DFSOLGameReviewGesture
// Size: 0x328 (Inherited: 0x2F8)
struct UDFSOLGameReviewGesture : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UDFSOLGameReviewGesture, "DFSOLGameReviewGesture")

	struct FMulticastInlineDelegate On2DTransformGesture; // 0x2F8(0x10)
	struct FMulticastInlineDelegate On2DTransformMouseWheel; // 0x308(0x10)
	uint8_t Pad_0x318[0x10]; // 0x318(0x10)
};

// Object: Class GPUserInterface.DFSpacer
// Size: 0x170 (Inherited: 0x170)
struct UDFSpacer : USpacer
{
	DEFINE_UE_CLASS_HELPERS(UDFSpacer, "DFSpacer")
};

// Object: Class GPUserInterface.DFSpinBox
// Size: 0x588 (Inherited: 0x588)
struct UDFSpinBox : USpinBox
{
	DEFINE_UE_CLASS_HELPERS(UDFSpinBox, "DFSpinBox")
};

// Object: Class GPUserInterface.DFSpineWidget
// Size: 0x3F8 (Inherited: 0x360)
struct UDFSpineWidget : UDFUserWidgetBase
{
	DEFINE_UE_CLASS_HELPERS(UDFSpineWidget, "DFSpineWidget")

	uint8_t bInitInEditor : 1; // 0x360(0x1), Mask(0x1)
	uint8_t BitPad_0x360_1 : 7; // 0x360(0x1)
	uint8_t bNeedAsyncLoad : 1; // 0x361(0x1), Mask(0x1)
	uint8_t BitPad_0x361_1 : 7; // 0x361(0x1)
	uint8_t Pad_0x362[0x6]; // 0x362(0x6)
	struct FSoftObjectPath AltasAssetPath; // 0x368(0x18)
	struct FSoftObjectPath SkelDataAssetPath; // 0x380(0x18)
	struct FString InName; // 0x398(0x10)
	struct FString LoopName; // 0x3A8(0x10)
	struct FWidgetTransform SpineRect; // 0x3B8(0x1C)
	struct FLinearColor SpineColor; // 0x3D4(0x10)
	uint8_t Pad_0x3E4[0x4]; // 0x3E4(0x4)
	struct USpineWidget* SpineWidget_BG; // 0x3E8(0x8)
	uint8_t Pad_0x3F0[0x8]; // 0x3F0(0x8)

	// Object: Function GPUserInterface.DFSpineWidget.SetTimeScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc1c40
	// Params: [ Num(1) Size(0x4) ]
	void SetTimeScale(float TimeScale);

	// Object: Function GPUserInterface.DFSpineWidget.SetSpineScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc1b9c
	// Params: [ Num(1) Size(0x4) ]
	void SetSpineScale(float Scale);

	// Object: Function GPUserInterface.DFSpineWidget.SetSpineColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xafc1af8
	// Params: [ Num(1) Size(0x10) ]
	void SetSpineColor(struct FLinearColor NewColor);

	// Object: Function GPUserInterface.DFSpineWidget.SetLoopAnimationName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc1a4c
	// Params: [ Num(1) Size(0x10) ]
	void SetLoopAnimationName(struct FString loopAnimName);

	// Object: Function GPUserInterface.DFSpineWidget.SetIdleAnimationName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc19a0
	// Params: [ Num(1) Size(0x10) ]
	void SetIdleAnimationName(struct FString idleAnimName);

	// Object: Function GPUserInterface.DFSpineWidget.SetData
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xafc1880
	// Params: [ Num(2) Size(0x30) ]
	void SetData(const struct FSoftObjectPath& atlasPath, const struct FSoftObjectPath& dataPath);

	// Object: Function GPUserInterface.DFSpineWidget.SetAsyncLoadSwitcher
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc17d4
	// Params: [ Num(1) Size(0x1) ]
	void SetAsyncLoadSwitcher(uint8_t bOpenAsyncLoad);

	// Object: Function GPUserInterface.DFSpineWidget.ResetSpineInitAnim
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc17c0
	// Params: [ Num(0) Size(0x0) ]
	void ResetSpineInitAnim();

	// Object: Function GPUserInterface.DFSpineWidget.ReleaseSpine
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc17ac
	// Params: [ Num(0) Size(0x0) ]
	void ReleaseSpine();

	// Object: Function GPUserInterface.DFSpineWidget.PlaySpineAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc1680
	// Params: [ Num(3) Size(0x19) ]
	void PlaySpineAnimation(int32_t TrackIndex, struct FString AnimName, uint8_t Loop);

	// Object: Function GPUserInterface.DFSpineWidget.IsAsyncLoadEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc1648
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsAsyncLoadEnd();

	// Object: Function GPUserInterface.DFSpineWidget.InitSpine
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc1634
	// Params: [ Num(0) Size(0x0) ]
	void InitSpine();

	// Object: Function GPUserInterface.DFSpineWidget.GetSpineAnimationDurationTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xafc1580
	// Params: [ Num(2) Size(0x14) ]
	float GetSpineAnimationDurationTime(struct FString AnimName);

	// Object: Function GPUserInterface.DFSpineWidget.AddSpineAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc1418
	// Params: [ Num(4) Size(0x20) ]
	void AddSpineAnimation(int32_t TrackIndex, struct FString AnimName, uint8_t Loop, float Delay);
};

// Object: Class GPUserInterface.DFTextBlock
// Size: 0x408 (Inherited: 0x398)
struct UDFTextBlock : UTextBlock
{
	DEFINE_UE_CLASS_HELPERS(UDFTextBlock, "DFTextBlock")

	struct FName ColorName; // 0x398(0x8)
	uint8_t bEnablePlatformText : 1; // 0x3A0(0x1), Mask(0x1)
	uint8_t BitPad_0x3A0_1 : 7; // 0x3A0(0x1)
	uint8_t Pad_0x3A1[0x7]; // 0x3A1(0x7)
	struct TMap<EDFTextPlatformType, struct FText> PlatformText; // 0x3A8(0x50)
	uint8_t bUseConsoleColor : 1; // 0x3F8(0x1), Mask(0x1)
	uint8_t BitPad_0x3F8_1 : 7; // 0x3F8(0x1)
	uint8_t bEnableDynamicFormat : 1; // 0x3F9(0x1), Mask(0x1)
	uint8_t BitPad_0x3F9_1 : 7; // 0x3F9(0x1)
	uint8_t Pad_0x3FA[0x6]; // 0x3FA(0x6)
	struct UDataTable* TextColorData; // 0x400(0x8)

	// Object: Function GPUserInterface.DFTextBlock.SetTextColor
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xafc1ea4
	// Params: [ Num(1) Size(0x8) ]
	void SetTextColor(struct FName InColorName);

	// Object: Function GPUserInterface.DFTextBlock.RedirectDisplayTextByPlatformText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc1e90
	// Params: [ Num(0) Size(0x0) ]
	void RedirectDisplayTextByPlatformText();

	// Object: Function GPUserInterface.DFTextBlock.GetTextBlockDesiredSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xafc1de4
	// Params: [ Num(2) Size(0xC) ]
	struct FVector2D GetTextBlockDesiredSize(float LayoutScaleMultiplier);
};

// Object: Class GPUserInterface.DFTextPlatformType
// Size: 0x28 (Inherited: 0x28)
struct UDFTextPlatformType : UObject
{
	DEFINE_UE_CLASS_HELPERS(UDFTextPlatformType, "DFTextPlatformType")

	// Object: Function GPUserInterface.DFTextPlatformType.GetPlatformType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xafc2094
	// Params: [ Num(1) Size(0x1) ]
	static EDFTextPlatformType GetPlatformType();
};

// Object: Class GPUserInterface.DFThemeImage
// Size: 0x358 (Inherited: 0x340)
struct UDFThemeImage : UDFImage
{
	DEFINE_UE_CLASS_HELPERS(UDFThemeImage, "DFThemeImage")

	struct FString SuffixThemeID; // 0x340(0x10)
	uint8_t bAutoApplyThemeID : 1; // 0x350(0x1), Mask(0x1)
	uint8_t BitPad_0x350_1 : 7; // 0x350(0x1)
	uint8_t Pad_0x351[0x7]; // 0x351(0x7)

	// Object: Function GPUserInterface.DFThemeImage.SetThemeID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x107b53a0
	// Params: [ Num(2) Size(0x11) ]
	void SetThemeID(struct FString ThemeID, uint8_t bAutoResize);
};

// Object: Class GPUserInterface.DFThemeShadowImage
// Size: 0x358 (Inherited: 0x340)
struct UDFThemeShadowImage : UDFImage
{
	DEFINE_UE_CLASS_HELPERS(UDFThemeShadowImage, "DFThemeShadowImage")

	struct FString SuffixThemeID; // 0x340(0x10)
	uint8_t bAutoApplyThemeID : 1; // 0x350(0x1), Mask(0x1)
	uint8_t BitPad_0x350_1 : 7; // 0x350(0x1)
	uint8_t Pad_0x351[0x7]; // 0x351(0x7)

	// Object: Function GPUserInterface.DFThemeShadowImage.SetThemeID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc20f0
	// Params: [ Num(2) Size(0x11) ]
	void SetThemeID(struct FString ThemeID, uint8_t bAutoResize);
};

// Object: Class GPUserInterface.DFTileView
// Size: 0x3D8 (Inherited: 0x3D8)
struct UDFTileView : UTileView
{
	DEFINE_UE_CLASS_HELPERS(UDFTileView, "DFTileView")
};

// Object: Class GPUserInterface.DFTipsTemplateBase
// Size: 0x30 (Inherited: 0x28)
struct UDFTipsTemplateBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UDFTipsTemplateBase, "DFTipsTemplateBase")

	struct FName TypeName; // 0x28(0x8)
};

// Object: Class GPUserInterface.DFTipsAnchor
// Size: 0x270 (Inherited: 0x158)
struct UDFTipsAnchor : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UDFTipsAnchor, "DFTipsAnchor")

	ETipsAttachMode AttachModeHD; // 0x158(0x1)
	uint8_t bClickOnHD : 1; // 0x159(0x1), Mask(0x1)
	uint8_t BitPad_0x159_1 : 7; // 0x159(0x1)
	uint8_t Pad_0x15A[0x2]; // 0x15A(0x2)
	struct FVector2D MouseSpacing; // 0x15C(0x8)
	ETipsAnchorSpace AnchorSpace; // 0x164(0x1)
	uint8_t Pad_0x165[0x3]; // 0x165(0x3)
	struct FString AnchorSpaceWidgetPath; // 0x168(0x10)
	ETipsDirection AnchorSurroundingDirection; // 0x178(0x1)
	uint8_t Pad_0x179[0x3]; // 0x179(0x3)
	float AnchorSurroundingPivot; // 0x17C(0x4)
	struct FVector2D AnchorOffset; // 0x180(0x8)
	struct FVector2D TipsOffset; // 0x188(0x8)
	struct FVector2D TipsPivot; // 0x190(0x8)
	ETipsTriggerEventMode TriggerEventMode; // 0x198(0x1)
	uint8_t Pad_0x199[0x7]; // 0x199(0x7)
	struct FString TriggerEventWidgetPath; // 0x1A0(0x10)
	uint8_t bAutoBindTriggerEvents : 1; // 0x1B0(0x1), Mask(0x1)
	uint8_t BitPad_0x1B0_1 : 7; // 0x1B0(0x1)
	uint8_t Pad_0x1B1[0x3]; // 0x1B1(0x3)
	float HoverTriggerDelay; // 0x1B4(0x4)
	uint8_t bHasHoverTriggerDelay : 1; // 0x1B8(0x1), Mask(0x1)
	uint8_t BitPad_0x1B8_1 : 7; // 0x1B8(0x1)
	uint8_t bResponseBlankSpaceClick : 1; // 0x1B9(0x1), Mask(0x1)
	uint8_t BitPad_0x1B9_1 : 7; // 0x1B9(0x1)
	uint8_t bBlankSpaceExcludeTips : 1; // 0x1BA(0x1), Mask(0x1)
	uint8_t BitPad_0x1BA_1 : 7; // 0x1BA(0x1)
	ETipsConstrainMode ConstrainMode; // 0x1BB(0x1)
	ETipsConstrainAxis ConstrainAxis; // 0x1BC(0x1)
	uint8_t Pad_0x1BD[0x3]; // 0x1BD(0x3)
	struct FString ConstrainWidgetPath; // 0x1C0(0x10)
	struct FMargin ConstrainPadding; // 0x1D0(0x10)
	uint8_t bCollapsedWhenOutOfConstrain : 1; // 0x1E0(0x1), Mask(0x1)
	uint8_t BitPad_0x1E0_1 : 7; // 0x1E0(0x1)
	uint8_t Pad_0x1E1[0x7]; // 0x1E1(0x7)
	struct FMulticastInlineDelegate OnShowTipsEvent; // 0x1E8(0x10)
	struct FMulticastInlineDelegate OnHideTipsEvent; // 0x1F8(0x10)
	struct UDFTipsTemplateBase* TipsTemplate; // 0x208(0x8)
	uint8_t Pad_0x210[0x8]; // 0x210(0x8)
	struct UWidget* BoundWidget; // 0x218(0x8)
	uint8_t Pad_0x220[0x50]; // 0x220(0x50)

	// Object: Function GPUserInterface.DFTipsAnchor.UnbindTipsWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10af6578
	// Params: [ Num(0) Size(0x0) ]
	void UnbindTipsWidget();

	// Object: DelegateFunction GPUserInterface.DFTipsAnchor.TipsTriggerEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void TipsTriggerEvent__DelegateSignature(ETipsTriggerReason TriggerReason);

	// Object: Function GPUserInterface.DFTipsAnchor.ShowTipsManually
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc2868
	// Params: [ Num(0) Size(0x0) ]
	void ShowTipsManually();

	// Object: Function GPUserInterface.DFTipsAnchor.SetConstrainWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x106fc038
	// Params: [ Num(1) Size(0x8) ]
	void SetConstrainWidget(struct UWidget* ConstrainWidget);

	// Object: Function GPUserInterface.DFTipsAnchor.RemoveTriggerEvents
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc2854
	// Params: [ Num(0) Size(0x0) ]
	void RemoveTriggerEvents();

	// Object: Function GPUserInterface.DFTipsAnchor.OnUnhovered
	// Flags: [Final|Native|Protected]
	// Offset: 0xafc2840
	// Params: [ Num(0) Size(0x0) ]
	void OnUnhovered();

	// Object: Function GPUserInterface.DFTipsAnchor.OnToggleTipsWithState
	// Flags: [Final|Native|Protected]
	// Offset: 0xafc2794
	// Params: [ Num(1) Size(0x1) ]
	void OnToggleTipsWithState(uint8_t bShow);

	// Object: Function GPUserInterface.DFTipsAnchor.OnToggleTips
	// Flags: [Final|Native|Protected]
	// Offset: 0xfbe21dc
	// Params: [ Num(0) Size(0x0) ]
	void OnToggleTips();

	// Object: Function GPUserInterface.DFTipsAnchor.OnShowTips
	// Flags: [Final|Native|Protected]
	// Offset: 0xafc2780
	// Params: [ Num(0) Size(0x0) ]
	void OnShowTips();

	// Object: Function GPUserInterface.DFTipsAnchor.OnMouseMove
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xafc262c
	// Params: [ Num(1) Size(0x70) ]
	void OnMouseMove(const struct FPointerEvent& PointerEvent);

	// Object: Function GPUserInterface.DFTipsAnchor.OnHoverTimeout
	// Flags: [Final|Native|Protected]
	// Offset: 0xafc2618
	// Params: [ Num(0) Size(0x0) ]
	void OnHoverTimeout();

	// Object: Function GPUserInterface.DFTipsAnchor.OnHovered
	// Flags: [Final|Native|Protected]
	// Offset: 0xafc2604
	// Params: [ Num(0) Size(0x0) ]
	void OnHovered();

	// Object: Function GPUserInterface.DFTipsAnchor.OnHideTips
	// Flags: [Final|Native|Protected]
	// Offset: 0xafc25f0
	// Params: [ Num(0) Size(0x0) ]
	void OnHideTips();

	// Object: Function GPUserInterface.DFTipsAnchor.OnClickAnywhere
	// Flags: [Final|Native|Protected]
	// Offset: 0x10b5d474
	// Params: [ Num(1) Size(0x70) ]
	void OnClickAnywhere(struct FPointerEvent PointerEvent);

	// Object: Function GPUserInterface.DFTipsAnchor.HideTipsManually
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc25dc
	// Params: [ Num(0) Size(0x0) ]
	void HideTipsManually();

	// Object: Function GPUserInterface.DFTipsAnchor.GetTemplate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xafc25a8
	// Params: [ Num(1) Size(0x8) ]
	struct UDFTipsTemplateBase* GetTemplate();

	// Object: Function GPUserInterface.DFTipsAnchor.BindTriggerEvents
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc2594
	// Params: [ Num(0) Size(0x0) ]
	void BindTriggerEvents();

	// Object: Function GPUserInterface.DFTipsAnchor.BindTipsWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x107b45a4
	// Params: [ Num(1) Size(0x8) ]
	void BindTipsWidget(struct UWidget* InTipsWidget);

	// Object: Function GPUserInterface.DFTipsAnchor.ApplyTipsPosition
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0xafc24f0
	// Params: [ Num(1) Size(0x8) ]
	void ApplyTipsPosition(struct UWidget* TipsWidget);
};

// Object: Class GPUserInterface.DFTreeView
// Size: 0x410 (Inherited: 0x410)
struct UDFTreeView : UTreeView
{
	DEFINE_UE_CLASS_HELPERS(UDFTreeView, "DFTreeView")
};

// Object: Class GPUserInterface.DFTypeWriterTextBlock
// Size: 0x460 (Inherited: 0x408)
struct UDFTypeWriterTextBlock : UDFTextBlock
{
	DEFINE_UE_CLASS_HELPERS(UDFTypeWriterTextBlock, "DFTypeWriterTextBlock")

	struct FText FullText; // 0x408(0x18)
	float TextUpdateInterval; // 0x420(0x4)
	int32_t TextSpeed; // 0x424(0x4)
	uint8_t bLoop : 1; // 0x428(0x1), Mask(0x1)
	uint8_t BitPad_0x428_1 : 7; // 0x428(0x1)
	uint8_t bOverrideSimpleTextMode : 1; // 0x429(0x1), Mask(0x1)
	uint8_t BitPad_0x429_1 : 7; // 0x429(0x1)
	uint8_t Pad_0x42A[0x36]; // 0x42A(0x36)

	// Object: Function GPUserInterface.DFTypeWriterTextBlock.Update
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc2934
	// Params: [ Num(1) Size(0x4) ]
	void Update(float DeltaTime);

	// Object: Function GPUserInterface.DFTypeWriterTextBlock.StartAnim
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc2920
	// Params: [ Num(0) Size(0x0) ]
	void StartAnim();

	// Object: Function GPUserInterface.DFTypeWriterTextBlock.ResumeAnim
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc290c
	// Params: [ Num(0) Size(0x0) ]
	void ResumeAnim();

	// Object: Function GPUserInterface.DFTypeWriterTextBlock.Reset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc28f8
	// Params: [ Num(0) Size(0x0) ]
	void Reset();

	// Object: Function GPUserInterface.DFTypeWriterTextBlock.EndAnim
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc28e4
	// Params: [ Num(0) Size(0x0) ]
	void EndAnim();
};

// Object: Class GPUserInterface.DFUniformGridPanel
// Size: 0x198 (Inherited: 0x198)
struct UDFUniformGridPanel : UUniformGridPanel
{
	DEFINE_UE_CLASS_HELPERS(UDFUniformGridPanel, "DFUniformGridPanel")
};

// Object: Class GPUserInterface.DFVerticalBox
// Size: 0x190 (Inherited: 0x190)
struct UDFVerticalBox : UVerticalBox
{
	DEFINE_UE_CLASS_HELPERS(UDFVerticalBox, "DFVerticalBox")

	// Object: Function GPUserInterface.DFVerticalBox.SetContentVerticalAlignment
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0xafc4604
	// Params: [ Num(1) Size(0x1) ]
	void SetContentVerticalAlignment(EVerticalAlignment InContentVerticalAlignment);

	// Object: Function GPUserInterface.DFVerticalBox.SetContentPadding
	// Flags: [Final|Native|Private|HasOutParms|BlueprintCallable]
	// Offset: 0xfdd0e0c
	// Params: [ Num(1) Size(0x10) ]
	void SetContentPadding(const struct FMargin& InPadding);

	// Object: Function GPUserInterface.DFVerticalBox.SetContentHorizontalAlignment
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0xafc4560
	// Params: [ Num(1) Size(0x1) ]
	void SetContentHorizontalAlignment(EHorizontalAlignment InContentHorizontalAlignment);

	// Object: Function GPUserInterface.DFVerticalBox.SetAllowScrollBoxSlot
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0xafc44b4
	// Params: [ Num(1) Size(0x1) ]
	void SetAllowScrollBoxSlot(uint8_t bIsAllow);
};

// Object: Class GPUserInterface.DFVisibilityReContainer
// Size: 0x1A0 (Inherited: 0x190)
struct UDFVisibilityReContainer : UDFContainerBase
{
	DEFINE_UE_CLASS_HELPERS(UDFVisibilityReContainer, "DFVisibilityReContainer")

	ESlateVisibility SlateVisibilityHD; // 0x18A(0x1)
	ESlateVisibility SlateVisibilityMobile; // 0x18B(0x1)
	ESlateVisibility SlateVisibilityConsole; // 0x18C(0x1)
	struct TArray<struct FPlatformVisibility> ExtendedPlatformData; // 0x190(0x10)
};

// Object: Class GPUserInterface.DFWaterfallScrollView
// Size: 0xBB0 (Inherited: 0x650)
struct UDFWaterfallScrollView : UWaterfallScrollView
{
	DEFINE_UE_CLASS_HELPERS(UDFWaterfallScrollView, "DFWaterfallScrollView")

	uint8_t Pad_0x650[0x10]; // 0x650(0x10)
	EDFDefaultScrollBarType DefaultScrollBarType; // 0x660(0x1)
	EDFDefaultScrollBarType DefaultScrollBarTypeHD; // 0x661(0x1)
	EDFDefaultScrollBoxType DefaultScrollBoxType; // 0x662(0x1)
	uint8_t Pad_0x663[0x5]; // 0x663(0x5)
	struct FScrollBarStyle WidgetBarStyle; // 0x668(0x518)
	struct FVector2D ScrollbarThickness; // 0xB80(0x8)
	struct FMargin ScrollbarPadding; // 0xB88(0x10)
	float OverrideScrollAmount; // 0xB98(0x4)
	uint8_t bScrollWidgetIntoViewIfOnEdge : 1; // 0xB9C(0x1), Mask(0x1)
	uint8_t BitPad_0xB9C_1 : 7; // 0xB9C(0x1)
	uint8_t Pad_0xB9D[0x3]; // 0xB9D(0x3)
	struct UUserWidget* ScrollWidgetTemplateClassIntoViewIfOnEdge; // 0xBA0(0x8)
	uint8_t bSelectItemInToView : 1; // 0xBA8(0x1), Mask(0x1)
	uint8_t BitPad_0xBA8_1 : 7; // 0xBA8(0x1)
	uint8_t bStopScrollOnTouchWhenInertial : 1; // 0xBA9(0x1), Mask(0x1)
	uint8_t BitPad_0xBA9_1 : 7; // 0xBA9(0x1)
	uint8_t Pad_0xBAA[0x6]; // 0xBAA(0x6)

	// Object: Function GPUserInterface.DFWaterfallScrollView.SetStopScrollOnTouchWhenInertial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc4a34
	// Params: [ Num(1) Size(0x1) ]
	void SetStopScrollOnTouchWhenInertial(uint8_t bInStopScrollOnTouchWhenInertial);

	// Object: Function GPUserInterface.DFWaterfallScrollView.SetScrollWidgetIntoViewIfOnEdge
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc4988
	// Params: [ Num(1) Size(0x1) ]
	void SetScrollWidgetIntoViewIfOnEdge(uint8_t bInScrollWidgetIntoViewIfOnEdge);

	// Object: Function GPUserInterface.DFWaterfallScrollView.OnHandleMouseButtonUpDelegate
	// Flags: [Final|Native|Public]
	// Offset: 0xed4c59c
	// Params: [ Num(1) Size(0x70) ]
	void OnHandleMouseButtonUpDelegate(struct FPointerEvent MouseEvent);

	// Object: Function GPUserInterface.DFWaterfallScrollView.FindChildUnderMouse
	// Flags: [Final|Native|Public]
	// Offset: 0xafc4778
	// Params: [ Num(2) Size(0x78) ]
	struct UWidget* FindChildUnderMouse(struct FPointerEvent MouseEvent);
};

// Object: Class GPUserInterface.DFWaterfallScrollViewV2
// Size: 0xB00 (Inherited: 0x5A0)
struct UDFWaterfallScrollViewV2 : UWaterfallScrollViewV2
{
	DEFINE_UE_CLASS_HELPERS(UDFWaterfallScrollViewV2, "DFWaterfallScrollViewV2")

	uint8_t Pad_0x5A0[0x10]; // 0x5A0(0x10)
	EDFDefaultScrollBarType DefaultScrollBarType; // 0x5B0(0x1)
	EDFDefaultScrollBarType DefaultScrollBarTypeHD; // 0x5B1(0x1)
	EDFDefaultScrollBoxType DefaultScrollBoxType; // 0x5B2(0x1)
	uint8_t Pad_0x5B3[0x5]; // 0x5B3(0x5)
	struct FScrollBarStyle WidgetBarStyle; // 0x5B8(0x518)
	struct FVector2D ScrollbarThickness; // 0xAD0(0x8)
	struct FMargin ScrollbarPadding; // 0xAD8(0x10)
	float OverrideScrollAmount; // 0xAE8(0x4)
	uint8_t bScrollWidgetIntoViewIfOnEdge : 1; // 0xAEC(0x1), Mask(0x1)
	uint8_t BitPad_0xAEC_1 : 7; // 0xAEC(0x1)
	uint8_t Pad_0xAED[0x3]; // 0xAED(0x3)
	struct UUserWidget* ScrollWidgetTemplateClassIntoViewIfOnEdge; // 0xAF0(0x8)
	uint8_t bSelectItemInToView : 1; // 0xAF8(0x1), Mask(0x1)
	uint8_t BitPad_0xAF8_1 : 7; // 0xAF8(0x1)
	uint8_t bStopScrollOnTouchWhenInertial : 1; // 0xAF9(0x1), Mask(0x1)
	uint8_t BitPad_0xAF9_1 : 7; // 0xAF9(0x1)
	uint8_t Pad_0xAFA[0x6]; // 0xAFA(0x6)

	// Object: Function GPUserInterface.DFWaterfallScrollViewV2.SetStopScrollOnTouchWhenInertial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc4fe0
	// Params: [ Num(1) Size(0x1) ]
	void SetStopScrollOnTouchWhenInertial(uint8_t bInStopScrollOnTouchWhenInertial);

	// Object: Function GPUserInterface.DFWaterfallScrollViewV2.SetScrollWidgetIntoViewIfOnEdge
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc4f34
	// Params: [ Num(1) Size(0x1) ]
	void SetScrollWidgetIntoViewIfOnEdge(uint8_t bInScrollWidgetIntoViewIfOnEdge);

	// Object: Function GPUserInterface.DFWaterfallScrollViewV2.OnHandleMouseButtonUpDelegate
	// Flags: [Final|Native|Public]
	// Offset: 0xafc4d34
	// Params: [ Num(1) Size(0x70) ]
	void OnHandleMouseButtonUpDelegate(struct FPointerEvent MouseEvent);

	// Object: Function GPUserInterface.DFWaterfallScrollViewV2.FindChildUnderMouse
	// Flags: [Final|Native|Public]
	// Offset: 0xafc4b24
	// Params: [ Num(2) Size(0x78) ]
	struct UWidget* FindChildUnderMouse(struct FPointerEvent MouseEvent);
};

// Object: Class GPUserInterface.DFScrollBarWidgetStyle
// Size: 0x718 (Inherited: 0x30)
struct UDFScrollBarWidgetStyle : USlateWidgetStyleContainerBase
{
	DEFINE_UE_CLASS_HELPERS(UDFScrollBarWidgetStyle, "DFScrollBarWidgetStyle")

	struct FDFScrollBarStyle ScrollBarStyle; // 0x30(0x6E8)
};

// Object: Class GPUserInterface.DFButtonStateWidgetStyle
// Size: 0x6C0 (Inherited: 0x30)
struct UDFButtonStateWidgetStyle : USlateWidgetStyleContainerBase
{
	DEFINE_UE_CLASS_HELPERS(UDFButtonStateWidgetStyle, "DFButtonStateWidgetStyle")

	struct FDFButtonStateStyle ButtonStateStyle; // 0x30(0x690)
};

// Object: Class GPUserInterface.DFRichTextConfigWidgetStyle
// Size: 0x2D8 (Inherited: 0x30)
struct UDFRichTextConfigWidgetStyle : USlateWidgetStyleContainerBase
{
	DEFINE_UE_CLASS_HELPERS(UDFRichTextConfigWidgetStyle, "DFRichTextConfigWidgetStyle")

	struct FDFRichTextConfigStyle RichTextConfigStyle; // 0x30(0x2A8)
};

// Object: Class GPUserInterface.DFComputeTextWidgetStyle
// Size: 0x308 (Inherited: 0x30)
struct UDFComputeTextWidgetStyle : USlateWidgetStyleContainerBase
{
	DEFINE_UE_CLASS_HELPERS(UDFComputeTextWidgetStyle, "DFComputeTextWidgetStyle")

	struct FDFComputeTextStyle ComputeTextStyle; // 0x30(0x2D8)
};

// Object: Class GPUserInterface.DFRichTextWidgetStyle
// Size: 0x308 (Inherited: 0x30)
struct UDFRichTextWidgetStyle : USlateWidgetStyleContainerBase
{
	DEFINE_UE_CLASS_HELPERS(UDFRichTextWidgetStyle, "DFRichTextWidgetStyle")

	struct FDFRichTextStyle RichTextStyle; // 0x30(0x2D8)
};

// Object: Class GPUserInterface.DFTextWidgetStyle
// Size: 0x2E0 (Inherited: 0x30)
struct UDFTextWidgetStyle : USlateWidgetStyleContainerBase
{
	DEFINE_UE_CLASS_HELPERS(UDFTextWidgetStyle, "DFTextWidgetStyle")

	struct FDFTextStyle TextStyle; // 0x30(0x2B0)
};

// Object: Class GPUserInterface.DFBrushButtonStateWidgetStyle
// Size: 0x548 (Inherited: 0x30)
struct UDFBrushButtonStateWidgetStyle : USlateWidgetStyleContainerBase
{
	DEFINE_UE_CLASS_HELPERS(UDFBrushButtonStateWidgetStyle, "DFBrushButtonStateWidgetStyle")

	struct FDFBrushButtonStateStyle BrushStateStyle; // 0x30(0x518)
};

// Object: Class GPUserInterface.DFRichTextBlockStateWidgetStyle
// Size: 0x19D0 (Inherited: 0x30)
struct UDFRichTextBlockStateWidgetStyle : USlateWidgetStyleContainerBase
{
	DEFINE_UE_CLASS_HELPERS(UDFRichTextBlockStateWidgetStyle, "DFRichTextBlockStateWidgetStyle")

	struct FDFRichTextBlockButtonStateStyle RichTextBlockStateStyle; // 0x30(0x19A0)
};

// Object: Class GPUserInterface.DFTextBlockStateWidgetStyle
// Size: 0x1308 (Inherited: 0x30)
struct UDFTextBlockStateWidgetStyle : USlateWidgetStyleContainerBase
{
	DEFINE_UE_CLASS_HELPERS(UDFTextBlockStateWidgetStyle, "DFTextBlockStateWidgetStyle")

	struct FDFTextBlockButtonStateStyle TextBlockStateStyle; // 0x30(0x12D8)
};

// Object: Class GPUserInterface.FDFBrushCheckStateWidgetStyle
// Size: 0x548 (Inherited: 0x30)
struct UFDFBrushCheckStateWidgetStyle : USlateWidgetStyleContainerBase
{
	DEFINE_UE_CLASS_HELPERS(UFDFBrushCheckStateWidgetStyle, "FDFBrushCheckStateWidgetStyle")

	struct FDFBrushCheckStateStyle BrushStateStyle; // 0x30(0x518)
};

// Object: Class GPUserInterface.DFRichTextBlockCheckStateWidgetStyle
// Size: 0x19D0 (Inherited: 0x30)
struct UDFRichTextBlockCheckStateWidgetStyle : USlateWidgetStyleContainerBase
{
	DEFINE_UE_CLASS_HELPERS(UDFRichTextBlockCheckStateWidgetStyle, "DFRichTextBlockCheckStateWidgetStyle")

	struct FDFRichTextBlockCheckStateStyle RichTextBlockStateStyle; // 0x30(0x19A0)
};

// Object: Class GPUserInterface.DFTextBlockCheckStateWidgetStyle
// Size: 0x1308 (Inherited: 0x30)
struct UDFTextBlockCheckStateWidgetStyle : USlateWidgetStyleContainerBase
{
	DEFINE_UE_CLASS_HELPERS(UDFTextBlockCheckStateWidgetStyle, "DFTextBlockCheckStateWidgetStyle")

	struct FDFTextBlockCheckStateStyle TextBlockStateStyle; // 0x30(0x12D8)
};

// Object: Class GPUserInterface.FDFCommonButtonWidgetStyle
// Size: 0x2420 (Inherited: 0x30)
struct UFDFCommonButtonWidgetStyle : USlateWidgetStyleContainerBase
{
	DEFINE_UE_CLASS_HELPERS(UFDFCommonButtonWidgetStyle, "FDFCommonButtonWidgetStyle")

	struct FDFCommonButtonStyle CommonButtonStyle; // 0x30(0x23F0)
};

// Object: Class GPUserInterface.FDFCommonCheckButtonWidgetStyle
// Size: 0x2428 (Inherited: 0x30)
struct UFDFCommonCheckButtonWidgetStyle : USlateWidgetStyleContainerBase
{
	DEFINE_UE_CLASS_HELPERS(UFDFCommonCheckButtonWidgetStyle, "FDFCommonCheckButtonWidgetStyle")

	struct FDFCommonCheckButtonStyle CommonCheckButtonStyle; // 0x30(0x23F8)
};

// Object: Class GPUserInterface.FDFCommonPopWindowWidgetStyle
// Size: 0x5F0 (Inherited: 0x30)
struct UFDFCommonPopWindowWidgetStyle : USlateWidgetStyleContainerBase
{
	DEFINE_UE_CLASS_HELPERS(UFDFCommonPopWindowWidgetStyle, "FDFCommonPopWindowWidgetStyle")

	struct FDFCommonPopWindowStyle CommonPopWindowStyle; // 0x30(0x5C0)
};

// Object: Class GPUserInterface.DFWidgetSwitcher
// Size: 0x180 (Inherited: 0x180)
struct UDFWidgetSwitcher : UWidgetSwitcher
{
	DEFINE_UE_CLASS_HELPERS(UDFWidgetSwitcher, "DFWidgetSwitcher")
};

// Object: Class GPUserInterface.DFWrapBox
// Size: 0x190 (Inherited: 0x190)
struct UDFWrapBox : UWrapBox
{
	DEFINE_UE_CLASS_HELPERS(UDFWrapBox, "DFWrapBox")

	// Object: Function GPUserInterface.DFWrapBox.SetWrapWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc5218
	// Params: [ Num(1) Size(0x4) ]
	void SetWrapWidth(float InWrapWidth);
};

// Object: Class GPUserInterface.DFZeroSizeBox
// Size: 0x180 (Inherited: 0x170)
struct UDFZeroSizeBox : UContentWidget
{
	DEFINE_UE_CLASS_HELPERS(UDFZeroSizeBox, "DFZeroSizeBox")

	uint8_t Pad_0x170[0x10]; // 0x170(0x10)
};

// Object: Class GPUserInterface.GPColorManager
// Size: 0x108 (Inherited: 0x30)
struct UGPColorManager : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UGPColorManager, "GPColorManager")

	struct TMap<struct FString, struct FLinearColor> CachedLinerColorMap; // 0x30(0x50)
	struct TMap<struct FString, struct FSlateColor> CachedSlateColorMap; // 0x80(0x50)
	uint8_t Pad_0xD0[0x38]; // 0xD0(0x38)

	// Object: Function GPUserInterface.GPColorManager.Reset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc839c
	// Params: [ Num(0) Size(0x0) ]
	void Reset();

	// Object: Function GPUserInterface.GPColorManager.Init
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc8388
	// Params: [ Num(0) Size(0x0) ]
	void Init();

	// Object: Function GPUserInterface.GPColorManager.GetSlateColorByRowName
	// Flags: [Final|Native|Public]
	// Offset: 0xafc821c
	// Params: [ Num(3) Size(0x38) ]
	struct FSlateColor GetSlateColorByRowName(struct FName RowName, float Opacity);

	// Object: Function GPUserInterface.GPColorManager.GetSlateColorByKey
	// Flags: [Final|Native|Public]
	// Offset: 0xafc80b0
	// Params: [ Num(3) Size(0x38) ]
	struct FSlateColor GetSlateColorByKey(struct FName ColorKey, float Opacity);

	// Object: Function GPUserInterface.GPColorManager.GetRowNameByColorKey
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc8004
	// Params: [ Num(2) Size(0x10) ]
	struct FName GetRowNameByColorKey(struct FName ColorKey);

	// Object: Function GPUserInterface.GPColorManager.GetLinerColorByRowName
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0xafc7f18
	// Params: [ Num(3) Size(0x1C) ]
	struct FLinearColor GetLinerColorByRowName(struct FName RowName, float Opacity);

	// Object: Function GPUserInterface.GPColorManager.GetLinerColorByKey
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0xafc7e2c
	// Params: [ Num(3) Size(0x1C) ]
	struct FLinearColor GetLinerColorByKey(struct FName ColorKey, float Opacity);

	// Object: Function GPUserInterface.GPColorManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xafc7d88
	// Params: [ Num(2) Size(0x10) ]
	static struct UGPColorManager* Get(struct UObject* WorldContext);
};

// Object: Class GPUserInterface.GPPersistentRootUIBase
// Size: 0x650 (Inherited: 0x610)
struct UGPPersistentRootUIBase : ULuaUIBaseView
{
	DEFINE_UE_CLASS_HELPERS(UGPPersistentRootUIBase, "GPPersistentRootUIBase")

	uint8_t Pad_0x610[0x18]; // 0x610(0x18)
	struct UCanvasPanel* UIContent; // 0x628(0x8)
	struct USafeZone* UISafeZoneFrame; // 0x630(0x8)
	struct URetainerBox* UIRootRetainerBox; // 0x638(0x8)
	uint8_t Pad_0x640[0x10]; // 0x640(0x10)

	// Object: Function GPUserInterface.GPPersistentRootUIBase.SetRetainerBoxMaterialParameter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc8658
	// Params: [ Num(2) Size(0xC) ]
	void SetRetainerBoxMaterialParameter(struct FName ParamName, float Value);

	// Object: Function GPUserInterface.GPPersistentRootUIBase.SetRetainerBoxEffectEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc85ac
	// Params: [ Num(1) Size(0x1) ]
	void SetRetainerBoxEffectEnabled(uint8_t bEnabled);

	// Object: Function GPUserInterface.GPPersistentRootUIBase.RemoveUI
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc84fc
	// Params: [ Num(2) Size(0x9) ]
	uint8_t RemoveUI(struct UWidget* UIIns);

	// Object: Function GPUserInterface.GPPersistentRootUIBase.OnPersistentRootPrepared_Internal
	// Flags: [Final|Native|Private]
	// Offset: 0xafc84e0
	// Params: [ Num(0) Size(0x0) ]
	void OnPersistentRootPrepared_Internal();

	// Object: Function GPUserInterface.GPPersistentRootUIBase.FreshSafeZone
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10a4f874
	// Params: [ Num(1) Size(0x1) ]
	uint8_t FreshSafeZone();

	// Object: Function GPUserInterface.GPPersistentRootUIBase.AddUI
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc83b8
	// Params: [ Num(4) Size(0xE) ]
	uint8_t AddUI(struct UWidget* UIIns, int32_t ZOrder, ELuaUILayer LayerType);

	// Object: Function GPUserInterface.GPPersistentRootUIBase.AddToPersistentFrameLayer
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(4) Size(0xE) ]
	uint8_t AddToPersistentFrameLayer(struct UWidget* UIIns, int32_t ZOrder, ELuaUILayer LayerType);
};

// Object: Class GPUserInterface.GPUIManager
// Size: 0xD8 (Inherited: 0x30)
struct UGPUIManager : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UGPUIManager, "GPUIManager")

	struct FMulticastInlineDelegate OnPersistentRootFinished; // 0x30(0x10)
	uint8_t Pad_0x40[0x10]; // 0x40(0x10)
	struct UGPPersistentRootUIBase* PersistentRootUIView; // 0x50(0x8)
	EWorkingState CurWorkingState; // 0x58(0x1)
	uint8_t Pad_0x59[0x7]; // 0x59(0x7)
	struct TArray<struct FWaitingInfo> WaitingInfoQueue; // 0x60(0x10)
	struct UDataTable* UIBPAssetTable; // 0x70(0x8)
	struct TMap<struct FString, uint64_t> BPLoadingMap; // 0x78(0x50)
	uint8_t Pad_0xC8[0x8]; // 0xC8(0x8)
	struct UGPUIThemeController* ThemeController; // 0xD0(0x8)

	// Object: Function GPUserInterface.GPUIManager.UnloadThemeStyle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc8f18
	// Params: [ Num(1) Size(0x10) ]
	void UnloadThemeStyle(struct FString ThemeID);

	// Object: Function GPUserInterface.GPUIManager.UnloadAllThemeStyles
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc8f04
	// Params: [ Num(0) Size(0x0) ]
	void UnloadAllThemeStyles();

	// Object: Function GPUserInterface.GPUIManager.TryFreshPersistentUILayers
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc8ecc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t TryFreshPersistentUILayers();

	// Object: Function GPUserInterface.GPUIManager.Reset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc8eb8
	// Params: [ Num(0) Size(0x0) ]
	void Reset();

	// Object: Function GPUserInterface.GPUIManager.RemoveFromRoot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc8e08
	// Params: [ Num(2) Size(0x9) ]
	uint8_t RemoveFromRoot(struct UWidget* UIIns);

	// Object: Function GPUserInterface.GPUIManager.PreInitAsset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc8df4
	// Params: [ Num(0) Size(0x0) ]
	void PreInitAsset();

	// Object: Function GPUserInterface.GPUIManager.OnPreGarbageCollect
	// Flags: [Final|Native|Public]
	// Offset: 0xafc8de0
	// Params: [ Num(0) Size(0x0) ]
	void OnPreGarbageCollect();

	// Object: Function GPUserInterface.GPUIManager.LoadThemeStyle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc8d34
	// Params: [ Num(1) Size(0x10) ]
	void LoadThemeStyle(struct FString ThemeID);

	// Object: Function GPUserInterface.GPUIManager.InitPersistentUILayers
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc8cfc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t InitPersistentUILayers();

	// Object: Function GPUserInterface.GPUIManager.InitAsset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc8ce8
	// Params: [ Num(0) Size(0x0) ]
	void InitAsset();

	// Object: Function GPUserInterface.GPUIManager.Init
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc8cd4
	// Params: [ Num(0) Size(0x0) ]
	void Init();

	// Object: Function GPUserInterface.GPUIManager.GetThemeStyleIconPath
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xafc8be0
	// Params: [ Num(2) Size(0x28) ]
	struct FSoftObjectPath GetThemeStyleIconPath(struct FString ThemeID);

	// Object: Function GPUserInterface.GPUIManager.GetPersistentRootUI
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xafc8bc4
	// Params: [ Num(1) Size(0x8) ]
	struct UGPPersistentRootUIBase* GetPersistentRootUI();

	// Object: Function GPUserInterface.GPUIManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x10700f4c
	// Params: [ Num(2) Size(0x10) ]
	static struct UGPUIManager* Get(struct UObject* WorldContext);

	// Object: Function GPUserInterface.GPUIManager.DeactivatePersistentRoot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc8bb0
	// Params: [ Num(0) Size(0x0) ]
	void DeactivatePersistentRoot();

	// Object: Function GPUserInterface.GPUIManager.ClearWaitingQueue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc8b9c
	// Params: [ Num(0) Size(0x0) ]
	void ClearWaitingQueue();

	// Object: Function GPUserInterface.GPUIManager.ClearLoadingAsset
	// Flags: [Final|Native|Public]
	// Offset: 0xafc8b88
	// Params: [ Num(0) Size(0x0) ]
	void ClearLoadingAsset();

	// Object: Function GPUserInterface.GPUIManager.CheckIsIdleState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf36e000
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CheckIsIdleState();

	// Object: Function GPUserInterface.GPUIManager.AddToWaitingQueue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc8a1c
	// Params: [ Num(5) Size(0xF) ]
	uint8_t AddToWaitingQueue(struct UWidget* UIIns, int32_t ZOrder, ELuaUILayer UILayer, uint8_t bIsInSafeZone);

	// Object: Function GPUserInterface.GPUIManager.AddToRoot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc88b0
	// Params: [ Num(5) Size(0xF) ]
	uint8_t AddToRoot(struct UWidget* UIIns, int32_t ZOrder, ELuaUILayer UILayer, uint8_t bIsInSafeZone);

	// Object: Function GPUserInterface.GPUIManager.ActivatePersistentRoot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc889c
	// Params: [ Num(0) Size(0x0) ]
	void ActivatePersistentRoot();
};

// Object: Class GPUserInterface.GPUIThemeController
// Size: 0x90 (Inherited: 0x28)
struct UGPUIThemeController : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGPUIThemeController, "GPUIThemeController")

	uint8_t Pad_0x28[0x68]; // 0x28(0x68)
};

// Object: Class GPUserInterface.GPUserInterfaceDelegates
// Size: 0x28 (Inherited: 0x28)
struct UGPUserInterfaceDelegates : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGPUserInterfaceDelegates, "GPUserInterfaceDelegates")
};

// Object: Class GPUserInterface.GPUserInterfaceGlobalDelegates
// Size: 0x40 (Inherited: 0x30)
struct UGPUserInterfaceGlobalDelegates : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UGPUserInterfaceGlobalDelegates, "GPUserInterfaceGlobalDelegates")

	struct FMulticastInlineDelegate OnDFButtonClickedWithID; // 0x30(0x10)

	// Object: Function GPUserInterface.GPUserInterfaceGlobalDelegates.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf7706b0
	// Params: [ Num(2) Size(0x10) ]
	static struct UGPUserInterfaceGlobalDelegates* Get(struct UObject* WorldContext);
};

// Object: Class GPUserInterface.GPUserInterfaceInputSystemManagerLite
// Size: 0x48 (Inherited: 0x30)
struct UGPUserInterfaceInputSystemManagerLite : UGPSubsystemBase
{
	DEFINE_UE_CLASS_HELPERS(UGPUserInterfaceInputSystemManagerLite, "GPUserInterfaceInputSystemManagerLite")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	struct TWeakObjectPtr<struct UWorld> CurWorld; // 0x40(0x8)
};

// Object: Class GPUserInterface.GPUserInterfaceUtil
// Size: 0x28 (Inherited: 0x28)
struct UGPUserInterfaceUtil : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGPUserInterfaceUtil, "GPUserInterfaceUtil")

	// Object: Function GPUserInterface.GPUserInterfaceUtil.WaitUntilWidgetVisible
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xe65c928
	// Params: [ Num(3) Size(0x28) ]
	static void WaitUntilWidgetVisible(struct UObject* WorldContextObject, struct UWidget* InWidget, struct FLatentActionInfo LatentInfo);

	// Object: Function GPUserInterface.GPUserInterfaceUtil.TryLoadObjectByString_Test
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xafc9d4c
	// Params: [ Num(2) Size(0x18) ]
	static struct UObject* TryLoadObjectByString_Test(struct FString PathStr);

	// Object: Function GPUserInterface.GPUserInterfaceUtil.TestAddUserWidgetPathToCanvasPanel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xafc9bd0
	// Params: [ Num(3) Size(0x38) ]
	static struct UUserWidget* TestAddUserWidgetPathToCanvasPanel(struct TSoftClassPtr<struct UUserWidget*> SoftClassPtr, struct UCanvasPanel* CanvasPanel_Root);

	// Object: Function GPUserInterface.GPUserInterfaceUtil.OverrideGUITextureAmplifiedRate
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xafc9b3c
	// Params: [ Num(1) Size(0x4) ]
	static void OverrideGUITextureAmplifiedRate(float NewValue);

	// Object: Function GPUserInterface.GPUserInterfaceUtil.IsWidgetRealyVisible
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xafc9a94
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsWidgetRealyVisible(struct UWidget* InWidget);

	// Object: Function GPUserInterface.GPUserInterfaceUtil.IsWidgetRealyEnabled
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xafc9918
	// Params: [ Num(5) Size(0xC) ]
	static uint8_t IsWidgetRealyEnabled(struct UWidget* InWidget, uint8_t bDirectParent, uint8_t bIncludeEnableState, uint8_t bIncludeActiveState);

	// Object: Function GPUserInterface.GPUserInterfaceUtil.IsThemeIDZero
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xafc9868
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t IsThemeIDZero(struct FString ThemeID);

	// Object: Function GPUserInterface.GPUserInterfaceUtil.IsThemeIDValid
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xafc97b8
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t IsThemeIDValid(struct FString ThemeID);

	// Object: Function GPUserInterface.GPUserInterfaceUtil.IsSupportsBackbufferSampling
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf9be1e4
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsSupportsBackbufferSampling();

	// Object: Function GPUserInterface.GPUserInterfaceUtil.IsSlatePostProcessorEnable
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf988c78
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsSlatePostProcessorEnable();

	// Object: Function GPUserInterface.GPUserInterfaceUtil.IsOverlap_Inventory
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xafc96dc
	// Params: [ Num(3) Size(0x14) ]
	static float IsOverlap_Inventory(struct UUserWidget* LeftPanel, struct UUserWidget* RightPanel);

	// Object: Function GPUserInterface.GPUserInterfaceUtil.IsAOverlapByB
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xf287a2c
	// Params: [ Num(4) Size(0x29) ]
	static uint8_t IsAOverlapByB(const struct FVector4& BoundingBoxA, const struct FVector4& BoundingBoxB, struct FVector2D& CorrectVector);

	// Object: Function GPUserInterface.GPUserInterfaceUtil.HasAnyUserFocus
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xafc9634
	// Params: [ Num(2) Size(0x5) ]
	static uint8_t HasAnyUserFocus(uint32_t UserIndex);

	// Object: Function GPUserInterface.GPUserInterfaceUtil.GetViewportSize_ActiveTopLevelWindow
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xafc9600
	// Params: [ Num(1) Size(0x8) ]
	static struct FVector2D GetViewportSize_ActiveTopLevelWindow();

	// Object: Function GPUserInterface.GPUserInterfaceUtil.GetSizeInScreen_ActiveTopLevelWindow
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xafc95cc
	// Params: [ Num(1) Size(0x8) ]
	static struct FVector2D GetSizeInScreen_ActiveTopLevelWindow();

	// Object: Function GPUserInterface.GPUserInterfaceUtil.GetDisplayMetrics_SlateApplication
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xafc9598
	// Params: [ Num(1) Size(0x8) ]
	static struct FVector2D GetDisplayMetrics_SlateApplication();

	// Object: Function GPUserInterface.GPUserInterfaceUtil.GetDefaultCommon_WhiteBlock
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xafc94f4
	// Params: [ Num(1) Size(0x18) ]
	static struct FSoftObjectPath GetDefaultCommon_WhiteBlock();

	// Object: Function GPUserInterface.GPUserInterfaceUtil.FSoftObjectPathToFString
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xafc93bc
	// Params: [ Num(2) Size(0x28) ]
	static struct FString FSoftObjectPathToFString(struct FSoftObjectPath SoftObjectPath);

	// Object: Function GPUserInterface.GPUserInterfaceUtil.FindConsoleVariable_Int32
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xe7a9eac
	// Params: [ Num(2) Size(0x14) ]
	static int32_t FindConsoleVariable_Int32(struct FString CVarStr);

	// Object: Function GPUserInterface.GPUserInterfaceUtil.FindConsoleVariable_Float
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xafc92c4
	// Params: [ Num(2) Size(0x14) ]
	static float FindConsoleVariable_Float(struct FString CVarStr);

	// Object: Function GPUserInterface.GPUserInterfaceUtil.ClearUserFocus
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xafc91f4
	// Params: [ Num(2) Size(0x5) ]
	static void ClearUserFocus(uint32_t UserIndex, EFocusCause ReasonFocusIsChanging);

	// Object: Function GPUserInterface.GPUserInterfaceUtil.CheckAbsolutePointInsideWidget
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xafc90bc
	// Params: [ Num(4) Size(0x19) ]
	static uint8_t CheckAbsolutePointInsideWidget(struct UWidget* InWidget, const struct FVector2D& AbsolutePosition, struct FVector2D& CorrectVector);
};

} // namespace SDK
