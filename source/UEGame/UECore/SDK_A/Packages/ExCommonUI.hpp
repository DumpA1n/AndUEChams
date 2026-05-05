#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "SlateCore.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: ExCommonUI
// Enums: 6
// Structs: 2
// Classes: 29

enum class EHorizontalAlignment : uint8_t;
enum class ERoundingMode : uint8_t;
enum class ESlateVisibility : uint8_t;
enum class EVerticalAlignment : uint8_t;
struct FMargin;
struct FSlateBrush;
struct FSlateFontInfo;
struct UButton;
struct UDataTable;
struct UMaterial;
struct UMaterialInterface;
struct UMediaPlayer;
struct UMediaSoundComponent;
struct UMediaSource;
struct UMediaTexture;
struct UTexture2D;
struct UUserWidget;
struct UWidget;
struct FExCommonNumberFormattingOptions;
struct FExRichTextIconData;
struct UExCommonAnimatedSwitcher;
struct UExCommonBorderStyle;
struct UExCommonBorder;
struct UExCommonCarouselNavBarPro;
struct UExCommonCarouselNavButton;
struct UExCommonWidgetGroupBase;
struct UExCommonCarouselNavButtonGroup;
struct UExCommonCustomNavigation;
struct UExCommonTextBlock;
struct UExCommonDateTimeTextBlock;
struct UExCommonHierarchicalScrollBox;
struct UExCommonWidgetCarouselProBase;
struct UExCommonInfiniteScrollBoxPro;
struct UExCommonLazyImage;
struct UExCommonLazyWidget;
struct ULoadGuardSlot;
struct UExCommonLoadGuard;
struct UExCommonNumericTextBlock;
struct IExCommonPoolableWidgetInterface;
struct UExCommonRichTextBlock;
struct UExCommonTextStyle;
struct UExCommonTextScrollStyle;
struct UExCommonUIEditorSettings;
struct UExCommonUIRichTextData;
struct UExCommonUISettings;
struct UExCommonVideoPlayer;
struct UExCommonVisualAttachment;
struct UExCommonWidgetCarousel;
struct UExCommonWidgetCarouselPro;

// Object: Enum ExCommonUI.EExCommonNumericType
enum class EExCommonNumericType : uint8_t
{
	Number = 0,
	Percentage = 1,
	Seconds = 2,
	Distance = 3,
	EExCommonNumericType_MAX = 4
};

// Object: Enum ExCommonUI.EWidgetCarouselCurve
enum class EWidgetCarouselCurve : uint8_t
{
	Const = 0,
	Linear = 1,
	Quad = 2,
	EaseInOutQuad = 3,
	Cubic = 4,
	EWidgetCarouselCurve_MAX = 5
};

// Object: Enum ExCommonUI.ERichTextInlineIconDisplayMode
enum class ERichTextInlineIconDisplayMode : uint8_t
{
	IconOnly = 0,
	TextOnly = 1,
	IconAndText = 2,
	MAX = 3
};

// Object: Enum ExCommonUI.ETransitionCurve
enum class ETransitionCurve : uint8_t
{
	Linear = 0,
	QuadIn = 1,
	QuadOut = 2,
	QuadInOut = 3,
	CubicIn = 4,
	CubicOut = 5,
	CubicInOut = 6,
	ETransitionCurve_MAX = 7
};

// Object: Enum ExCommonUI.EExCommonSwitcherTransition
enum class EExCommonSwitcherTransition : uint8_t
{
	FadeOnly = 0,
	Horizontal = 1,
	Vertical = 2,
	Zoom = 3,
	EExCommonSwitcherTransition_MAX = 4
};

// Object: Enum ExCommonUI.EWidgetCarouselMode
enum class EWidgetCarouselMode : uint8_t
{
	Normal = 0,
	ScrollBox = 1,
	EWidgetCarouselMode_MAX = 2
};

// Object: ScriptStruct ExCommonUI.ExCommonNumberFormattingOptions
// Size: 0x14 (Inherited: 0x0)
struct FExCommonNumberFormattingOptions
{
	ERoundingMode RoundingMode; // 0x0(0x1)
	uint8_t UseGrouping : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	int32_t MinimumIntegralDigits; // 0x4(0x4)
	int32_t MaximumIntegralDigits; // 0x8(0x4)
	int32_t MinimumFractionalDigits; // 0xC(0x4)
	int32_t MaximumFractionalDigits; // 0x10(0x4)
};

// Object: ScriptStruct ExCommonUI.ExRichTextIconData
// Size: 0x50 (Inherited: 0x8)
struct FExRichTextIconData : FTableRowBase
{
	struct FText DisplayName; // 0x8(0x18)
	struct TSoftObjectPtr<UObject> ResourceObject; // 0x20(0x28)
	struct FVector2D imageSize; // 0x48(0x8)
};

// Object: Class ExCommonUI.ExCommonAnimatedSwitcher
// Size: 0x1D8 (Inherited: 0x180)
struct UExCommonAnimatedSwitcher : UWidgetSwitcher
{
	DEFINE_UE_CLASS_HELPERS(UExCommonAnimatedSwitcher, "ExCommonAnimatedSwitcher")

	uint8_t Pad_0x180[0x18]; // 0x180(0x18)
	EExCommonSwitcherTransition TransitionType; // 0x198(0x1)
	ETransitionCurve TransitionCurveType; // 0x199(0x1)
	uint8_t Pad_0x19A[0x2]; // 0x19A(0x2)
	float TransitionDuration; // 0x19C(0x4)
	uint8_t Pad_0x1A0[0x38]; // 0x1A0(0x38)

	// Object: Function ExCommonUI.ExCommonAnimatedSwitcher.SetDisableTransitionAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c15c80
	// Params: [ Num(1) Size(0x1) ]
	void SetDisableTransitionAnimation(uint8_t bDisableAnimation);

	// Object: Function ExCommonUI.ExCommonAnimatedSwitcher.HasWidgets
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c15c48
	// Params: [ Num(1) Size(0x1) ]
	uint8_t HasWidgets();

	// Object: Function ExCommonUI.ExCommonAnimatedSwitcher.ActivatePreviousWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c15b9c
	// Params: [ Num(1) Size(0x1) ]
	void ActivatePreviousWidget(uint8_t bCanWrap);

	// Object: Function ExCommonUI.ExCommonAnimatedSwitcher.ActivateNextWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c15af0
	// Params: [ Num(1) Size(0x1) ]
	void ActivateNextWidget(uint8_t bCanWrap);
};

// Object: Class ExCommonUI.ExCommonBorderStyle
// Size: 0xB8 (Inherited: 0x28)
struct UExCommonBorderStyle : UObject
{
	DEFINE_UE_CLASS_HELPERS(UExCommonBorderStyle, "ExCommonBorderStyle")

	struct FSlateBrush Background; // 0x28(0x90)

	// Object: Function ExCommonUI.ExCommonBorderStyle.GetBackgroundBrush
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c15e14
	// Params: [ Num(1) Size(0x90) ]
	void GetBackgroundBrush(struct FSlateBrush& Brush);
};

// Object: Class ExCommonUI.ExCommonBorder
// Size: 0x2E0 (Inherited: 0x2C0)
struct UExCommonBorder : UBorder
{
	DEFINE_UE_CLASS_HELPERS(UExCommonBorder, "ExCommonBorder")

	struct UExCommonBorderStyle* Style; // 0x2C0(0x8)
	uint8_t bReducePaddingBySafezone : 1; // 0x2C8(0x1), Mask(0x1)
	uint8_t BitPad_0x2C8_1 : 7; // 0x2C8(0x1)
	uint8_t Pad_0x2C9[0x3]; // 0x2C9(0x3)
	struct FMargin MinimumPadding; // 0x2CC(0x10)
	uint8_t Pad_0x2DC[0x4]; // 0x2DC(0x4)

	// Object: Function ExCommonUI.ExCommonBorder.SetStyle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c15fdc
	// Params: [ Num(1) Size(0x8) ]
	void SetStyle(struct UExCommonBorderStyle* InStyle);
};

// Object: Class ExCommonUI.ExCommonCarouselNavBarPro
// Size: 0x1A0 (Inherited: 0x158)
struct UExCommonCarouselNavBarPro : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UExCommonCarouselNavBarPro, "ExCommonCarouselNavBarPro")

	struct UExCommonCarouselNavButton* ButtonWidgetType; // 0x158(0x8)
	struct FMargin ButtonPadding; // 0x160(0x10)
	struct FMulticastInlineDelegate OnNavBtnInitPro; // 0x170(0x10)
	uint8_t Pad_0x180[0x10]; // 0x180(0x10)
	struct UExCommonWidgetCarouselProBase* LinkedCarousel; // 0x190(0x8)
	struct UExCommonCarouselNavButtonGroup* ButtonGroup; // 0x198(0x8)

	// Object: Function ExCommonUI.ExCommonCarouselNavBarPro.SetLinkedCarousel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c1650c
	// Params: [ Num(1) Size(0x8) ]
	void SetLinkedCarousel(struct UExCommonWidgetCarouselProBase* CommonCarousel);

	// Object: DelegateFunction ExCommonUI.ExCommonCarouselNavBarPro.OnNavBtnInitPro__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x18) ]
	void OnNavBtnInitPro__DelegateSignature(struct UExCommonCarouselNavBarPro* CarouselNavBar, int32_t CurrentPageIndex, struct UExCommonCarouselNavButton* CarouselNavBtn);

	// Object: Function ExCommonUI.ExCommonCarouselNavBarPro.HandlePageChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x7c163b8
	// Params: [ Num(4) Size(0x18) ]
	void HandlePageChanged(struct UExCommonWidgetCarouselProBase* CommonCarousel, int32_t OldPageIndex, int32_t PageIndex, struct UWidget* Widget);

	// Object: Function ExCommonUI.ExCommonCarouselNavBarPro.HandleDragging
	// Flags: [Final|Native|Protected]
	// Offset: 0x7c16264
	// Params: [ Num(4) Size(0x18) ]
	void HandleDragging(struct UExCommonWidgetCarouselProBase* CommonCarousel, int32_t OldPageIndex, int32_t PageIndex, struct UWidget* Widget);

	// Object: Function ExCommonUI.ExCommonCarouselNavBarPro.HandleButtonSelected
	// Flags: [Final|Native|Protected]
	// Offset: 0x7c16144
	// Params: [ Num(3) Size(0xD) ]
	void HandleButtonSelected(struct UExCommonCarouselNavButton* AssociatedButton, int32_t ButtonIndex, uint8_t bIsSelect);
};

// Object: Class ExCommonUI.ExCommonCarouselNavButton
// Size: 0x320 (Inherited: 0x2F8)
struct UExCommonCarouselNavButton : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UExCommonCarouselNavButton, "ExCommonCarouselNavButton")

	struct FMulticastInlineDelegate OnSelectedChanged; // 0x2F8(0x10)
	struct UButton* NavButton; // 0x308(0x8)
	float HoverOpacity; // 0x310(0x4)
	float UnHoverOpacity; // 0x314(0x4)
	uint8_t bIsBindHover : 1; // 0x318(0x1), Mask(0x1)
	uint8_t BitPad_0x318_1 : 7; // 0x318(0x1)
	uint8_t bIsBindClick : 1; // 0x319(0x1), Mask(0x1)
	uint8_t BitPad_0x319_1 : 7; // 0x319(0x1)
	uint8_t Pad_0x31A[0x6]; // 0x31A(0x6)

	// Object: Function ExCommonUI.ExCommonCarouselNavButton.OnSetSelected
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void OnSetSelected(uint8_t bInSelected);

	// Object: Function ExCommonUI.ExCommonCarouselNavButton.OnSelectHandle
	// Flags: [Final|Native|Protected]
	// Offset: 0x7c16654
	// Params: [ Num(0) Size(0x0) ]
	void OnSelectHandle();

	// Object: Function ExCommonUI.ExCommonCarouselNavButton.OnCancelHandle
	// Flags: [Final|Native|Protected]
	// Offset: 0x7c16640
	// Params: [ Num(0) Size(0x0) ]
	void OnCancelHandle();
};

// Object: Class ExCommonUI.ExCommonWidgetGroupBase
// Size: 0x28 (Inherited: 0x28)
struct UExCommonWidgetGroupBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UExCommonWidgetGroupBase, "ExCommonWidgetGroupBase")

	// Object: Function ExCommonUI.ExCommonWidgetGroupBase.RemoveWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c1c084
	// Params: [ Num(1) Size(0x8) ]
	void RemoveWidget(struct UWidget* InWidget);

	// Object: Function ExCommonUI.ExCommonWidgetGroupBase.RemoveAll
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c1c070
	// Params: [ Num(0) Size(0x0) ]
	void RemoveAll();

	// Object: Function ExCommonUI.ExCommonWidgetGroupBase.AddWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c1bfcc
	// Params: [ Num(1) Size(0x8) ]
	void AddWidget(struct UWidget* InWidget);
};

// Object: Class ExCommonUI.ExCommonCarouselNavButtonGroup
// Size: 0x70 (Inherited: 0x28)
struct UExCommonCarouselNavButtonGroup : UExCommonWidgetGroupBase
{
	DEFINE_UE_CLASS_HELPERS(UExCommonCarouselNavButtonGroup, "ExCommonCarouselNavButtonGroup")

	struct FMulticastInlineDelegate OnSelectedButtonChanged; // 0x28(0x10)
	uint8_t Pad_0x38[0x38]; // 0x38(0x38)

	// Object: Function ExCommonUI.ExCommonCarouselNavButtonGroup.SelectPreviousButton
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c16b58
	// Params: [ Num(1) Size(0x1) ]
	void SelectPreviousButton(uint8_t bAllowWrap);

	// Object: Function ExCommonUI.ExCommonCarouselNavButtonGroup.SelectNextButton
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c16aac
	// Params: [ Num(1) Size(0x1) ]
	void SelectNextButton(uint8_t bAllowWrap);

	// Object: Function ExCommonUI.ExCommonCarouselNavButtonGroup.SelectButtonAtIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c16a08
	// Params: [ Num(1) Size(0x4) ]
	void SelectButtonAtIndex(int32_t ButtonIndex);

	// Object: Function ExCommonUI.ExCommonCarouselNavButtonGroup.OnSelectionStateChanged
	// Flags: [Native|Protected]
	// Offset: 0x7c16918
	// Params: [ Num(2) Size(0x9) ]
	void OnSelectionStateChanged(struct UExCommonCarouselNavButton* ButtonParam, uint8_t bIsSelected);

	// Object: Function ExCommonUI.ExCommonCarouselNavButtonGroup.HasAnyButtons
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c168e0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t HasAnyButtons();

	// Object: Function ExCommonUI.ExCommonCarouselNavButtonGroup.GetSelectedButtonIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c168ac
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetSelectedButtonIndex();

	// Object: Function ExCommonUI.ExCommonCarouselNavButtonGroup.GetSelectedButton
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c16878
	// Params: [ Num(1) Size(0x8) ]
	struct UExCommonCarouselNavButton* GetSelectedButton();

	// Object: Function ExCommonUI.ExCommonCarouselNavButtonGroup.GetIsHover
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c16840
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetIsHover();

	// Object: Function ExCommonUI.ExCommonCarouselNavButtonGroup.GetButtonCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c1680c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetButtonCount();

	// Object: Function ExCommonUI.ExCommonCarouselNavButtonGroup.GetButtonAtIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c16760
	// Params: [ Num(2) Size(0x10) ]
	struct UExCommonCarouselNavButton* GetButtonAtIndex(int32_t Index);

	// Object: Function ExCommonUI.ExCommonCarouselNavButtonGroup.FindButtonIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c166b4
	// Params: [ Num(2) Size(0xC) ]
	int32_t FindButtonIndex(struct UExCommonCarouselNavButton* ButtonToFind);

	// Object: Function ExCommonUI.ExCommonCarouselNavButtonGroup.DeselectAll
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c166a0
	// Params: [ Num(0) Size(0x0) ]
	void DeselectAll();
};

// Object: Class ExCommonUI.ExCommonCustomNavigation
// Size: 0x2D0 (Inherited: 0x2C0)
struct UExCommonCustomNavigation : UBorder
{
	DEFINE_UE_CLASS_HELPERS(UExCommonCustomNavigation, "ExCommonCustomNavigation")

	struct FDelegate OnNavigationEvent; // 0x2C0(0x10)
};

// Object: Class ExCommonUI.ExCommonTextBlock
// Size: 0x3C0 (Inherited: 0x398)
struct UExCommonTextBlock : UTextBlock
{
	DEFINE_UE_CLASS_HELPERS(UExCommonTextBlock, "ExCommonTextBlock")

	struct UExCommonTextStyle* Style; // 0x398(0x8)
	struct UExCommonTextScrollStyle* ScrollStyle; // 0x3A0(0x8)
	uint8_t bDisplayAllCaps : 1; // 0x3A8(0x1), Mask(0x1)
	uint8_t BitPad_0x3A8_1 : 7; // 0x3A8(0x1)
	uint8_t bAutoCollapseWithEmptyText : 1; // 0x3A9(0x1), Mask(0x1)
	uint8_t BitPad_0x3A9_1 : 7; // 0x3A9(0x1)
	uint8_t Pad_0x3AA[0x2]; // 0x3AA(0x2)
	float MobileFontSizeMultiplier; // 0x3AC(0x4)
	uint8_t Pad_0x3B0[0x10]; // 0x3B0(0x10)

	// Object: Function ExCommonUI.ExCommonTextBlock.SetWrapTextWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c19bcc
	// Params: [ Num(1) Size(0x4) ]
	void SetWrapTextWidth(int32_t InWrapTextAt);

	// Object: Function ExCommonUI.ExCommonTextBlock.SetTextCase
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c19b20
	// Params: [ Num(1) Size(0x1) ]
	void SetTextCase(uint8_t bUseAllCaps);

	// Object: Function ExCommonUI.ExCommonTextBlock.SetStyle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c19a7c
	// Params: [ Num(1) Size(0x8) ]
	void SetStyle(struct UExCommonTextStyle* InStyle);

	// Object: Function ExCommonUI.ExCommonTextBlock.ResetScrollState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c19a68
	// Params: [ Num(0) Size(0x0) ]
	void ResetScrollState();
};

// Object: Class ExCommonUI.ExCommonDateTimeTextBlock
// Size: 0x400 (Inherited: 0x3C0)
struct UExCommonDateTimeTextBlock : UExCommonTextBlock
{
	DEFINE_UE_CLASS_HELPERS(UExCommonDateTimeTextBlock, "ExCommonDateTimeTextBlock")

	uint8_t Pad_0x3C0[0x40]; // 0x3C0(0x40)

	// Object: Function ExCommonUI.ExCommonDateTimeTextBlock.SetTimespanValue
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x7c16f34
	// Params: [ Num(1) Size(0x8) ]
	void SetTimespanValue(struct FTimespan InTimespan);

	// Object: Function ExCommonUI.ExCommonDateTimeTextBlock.SetDateTimeValue
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x7c16e14
	// Params: [ Num(3) Size(0x10) ]
	void SetDateTimeValue(struct FDateTime InDateTime, uint8_t bShowAsCountdown, float InRefreshDelay);

	// Object: Function ExCommonUI.ExCommonDateTimeTextBlock.SetCountDownCompletionText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c16c94
	// Params: [ Num(1) Size(0x18) ]
	void SetCountDownCompletionText(struct FText InCompletionText);

	// Object: Function ExCommonUI.ExCommonDateTimeTextBlock.GetDateTime
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c16c60
	// Params: [ Num(1) Size(0x8) ]
	struct FDateTime GetDateTime();
};

// Object: Class ExCommonUI.ExCommonHierarchicalScrollBox
// Size: 0x9A0 (Inherited: 0x9A0)
struct UExCommonHierarchicalScrollBox : UScrollBox
{
	DEFINE_UE_CLASS_HELPERS(UExCommonHierarchicalScrollBox, "ExCommonHierarchicalScrollBox")
};

// Object: Class ExCommonUI.ExCommonWidgetCarouselProBase
// Size: 0x330 (Inherited: 0x170)
struct UExCommonWidgetCarouselProBase : UPanelWidget
{
	DEFINE_UE_CLASS_HELPERS(UExCommonWidgetCarouselProBase, "ExCommonWidgetCarouselProBase")

	struct UUserWidget* WidgetType; // 0x170(0x8)
	ESlateVisibility ItemVisibility; // 0x178(0x1)
	uint8_t bIsAutoScroll : 1; // 0x179(0x1), Mask(0x1)
	uint8_t BitPad_0x179_1 : 7; // 0x179(0x1)
	uint8_t Pad_0x17A[0x2]; // 0x17A(0x2)
	float ScrollInterval; // 0x17C(0x4)
	uint8_t Pad_0x180[0x1]; // 0x180(0x1)
	uint8_t bIsVertical : 1; // 0x181(0x1), Mask(0x1)
	uint8_t BitPad_0x181_1 : 7; // 0x181(0x1)
	EWidgetCarouselCurve CarouselCurve; // 0x182(0x1)
	uint8_t Pad_0x183[0x1]; // 0x183(0x1)
	int32_t StartPageIndex; // 0x184(0x4)
	float MoveSpeed; // 0x188(0x4)
	float MinMoveSpeed; // 0x18C(0x4)
	int32_t MaxPageOnce; // 0x190(0x4)
	int32_t WheelMaxPageOnce; // 0x194(0x4)
	int32_t MaxDragCount; // 0x198(0x4)
	int32_t PageSize; // 0x19C(0x4)
	int32_t RenderSize; // 0x1A0(0x4)
	float WidgetInterval; // 0x1A4(0x4)
	float WidgetFadeOpacity; // 0x1A8(0x4)
	float WidgetMinOpacity; // 0x1AC(0x4)
	float WidgetFadeScale; // 0x1B0(0x4)
	float WidgetMinScale; // 0x1B4(0x4)
	float DragDistanceThreshold; // 0x1B8(0x4)
	float DragSpeedThreshold; // 0x1BC(0x4)
	float DragSensitivity; // 0x1C0(0x4)
	uint8_t bIsSupportClick : 1; // 0x1C4(0x1), Mask(0x1)
	uint8_t BitPad_0x1C4_1 : 7; // 0x1C4(0x1)
	uint8_t bIsSupportDrag : 1; // 0x1C5(0x1), Mask(0x1)
	uint8_t BitPad_0x1C5_1 : 7; // 0x1C5(0x1)
	uint8_t Pad_0x1C6[0x2]; // 0x1C6(0x2)
	int32_t CacheSize; // 0x1C8(0x4)
	int32_t CacheUpdateStep; // 0x1CC(0x4)
	int32_t RenderUpdateStep; // 0x1D0(0x4)
	int32_t InterceptTimes; // 0x1D4(0x4)
	int32_t CanClickedPageCount; // 0x1D8(0x4)
	uint8_t Pad_0x1DC[0x4]; // 0x1DC(0x4)
	struct FMulticastInlineDelegate OnLoadOuterData; // 0x1E0(0x10)
	struct FMulticastInlineDelegate OnPageChanged; // 0x1F0(0x10)
	struct FMulticastInlineDelegate OnPageClicked; // 0x200(0x10)
	struct FMulticastInlineDelegate OnDragging; // 0x210(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x220(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x230(0x10)
	struct FDelegate OnGetItemCount; // 0x240(0x10)
	struct FDelegate OnGetCacheItemCount; // 0x250(0x10)
	struct FDelegate OnGetRenderItemCount; // 0x260(0x10)
	uint8_t Pad_0x270[0xC0]; // 0x270(0xC0)

	// Object: Function ExCommonUI.ExCommonWidgetCarouselProBase.SimulateClickPageWithGamepad
	// Flags: [Final|Native|Public]
	// Offset: 0x7c1adf8
	// Params: [ Num(1) Size(0x4) ]
	void SimulateClickPageWithGamepad(int32_t ClickedPage);

	// Object: Function ExCommonUI.ExCommonWidgetCarouselProBase.SimpleInit
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x101a1bac
	// Params: [ Num(2) Size(0x8) ]
	void SimpleInit(int32_t OverridePageSize, int32_t OverrideCacheSize);

	// Object: Function ExCommonUI.ExCommonWidgetCarouselProBase.SetIsCanInteractRuntime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c1ad4c
	// Params: [ Num(1) Size(0x1) ]
	void SetIsCanInteractRuntime(uint8_t bChecked);

	// Object: Function ExCommonUI.ExCommonWidgetCarouselProBase.SetIsCanDragRuntime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c1aca0
	// Params: [ Num(1) Size(0x1) ]
	void SetIsCanDragRuntime(uint8_t bChecked);

	// Object: Function ExCommonUI.ExCommonWidgetCarouselProBase.SetIsCanClickRuntime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c1abf4
	// Params: [ Num(1) Size(0x1) ]
	void SetIsCanClickRuntime(uint8_t bChecked);

	// Object: Function ExCommonUI.ExCommonWidgetCarouselProBase.SetActivePage
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x7c1ab48
	// Params: [ Num(1) Size(0x4) ]
	void SetActivePage(int32_t TargetPage);

	// Object: Function ExCommonUI.ExCommonWidgetCarouselProBase.RefreshAllItems
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c1ab34
	// Params: [ Num(0) Size(0x0) ]
	void RefreshAllItems();

	// Object: Function ExCommonUI.ExCommonWidgetCarouselProBase.PreviousPage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c1ab20
	// Params: [ Num(0) Size(0x0) ]
	void PreviousPage();

	// Object: DelegateFunction ExCommonUI.ExCommonWidgetCarouselProBase.OnPageClicked__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x18) ]
	void OnPageClicked__DelegateSignature(struct UExCommonWidgetCarouselProBase* CarouselWidget, int32_t TargetPageIndex, struct UWidget* TargetItem);

	// Object: DelegateFunction ExCommonUI.ExCommonWidgetCarouselProBase.OnPageChanged__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(4) Size(0x18) ]
	void OnPageChanged__DelegateSignature(struct UExCommonWidgetCarouselProBase* CarouselWidget, int32_t OldPageIndex, int32_t CurrentPageIndex, struct UWidget* CurrentItem);

	// Object: DelegateFunction ExCommonUI.ExCommonWidgetCarouselProBase.OnLoadOuterData__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(5) Size(0x20) ]
	void OnLoadOuterData__DelegateSignature(struct UExCommonWidgetCarouselProBase* CarouselWidget, int32_t CurUpdateIndex, struct UWidget* TargetItem, int32_t PageIndex, int32_t CacheIndex);

	// Object: DelegateFunction ExCommonUI.ExCommonWidgetCarouselProBase.OnGetItemCount__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	int32_t OnGetItemCount__DelegateSignature();

	// Object: DelegateFunction ExCommonUI.ExCommonWidgetCarouselProBase.OnDragging__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(4) Size(0x18) ]
	void OnDragging__DelegateSignature(struct UExCommonWidgetCarouselProBase* CarouselWidget, int32_t OldPageIndex, int32_t CurrentPageIndex, struct UWidget* CurrentItem);

	// Object: DelegateFunction ExCommonUI.ExCommonWidgetCarouselProBase.OnCarouselSimpleEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnCarouselSimpleEvent__DelegateSignature();

	// Object: Function ExCommonUI.ExCommonWidgetCarouselProBase.NextPage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c1ab0c
	// Params: [ Num(0) Size(0x0) ]
	void NextPage();

	// Object: Function ExCommonUI.ExCommonWidgetCarouselProBase.GetWindowRightSlotIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c1aaf0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetWindowRightSlotIndex();

	// Object: Function ExCommonUI.ExCommonWidgetCarouselProBase.GetWindowRightPage
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c1aacc
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetWindowRightPage();

	// Object: Function ExCommonUI.ExCommonWidgetCarouselProBase.GetWindowLeftSlotIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c1aab0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetWindowLeftSlotIndex();

	// Object: Function ExCommonUI.ExCommonWidgetCarouselProBase.GetWindowLeftPage
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c1aa8c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetWindowLeftPage();

	// Object: Function ExCommonUI.ExCommonWidgetCarouselProBase.GetWindowCenterSlotIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c1aa70
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetWindowCenterSlotIndex();

	// Object: Function ExCommonUI.ExCommonWidgetCarouselProBase.GetWindowCenterPage
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c1aa4c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetWindowCenterPage();

	// Object: Function ExCommonUI.ExCommonWidgetCarouselProBase.GetWidgetByPageIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c1a9a0
	// Params: [ Num(2) Size(0x10) ]
	struct UWidget* GetWidgetByPageIndex(int32_t PageIndex);

	// Object: Function ExCommonUI.ExCommonWidgetCarouselProBase.GetTotalTurnPageCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c1a980
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetTotalTurnPageCount();

	// Object: Function ExCommonUI.ExCommonWidgetCarouselProBase.GetTotalLoadOuterCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c1a964
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetTotalLoadOuterCount();

	// Object: Function ExCommonUI.ExCommonWidgetCarouselProBase.GetRightPageIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c1a8b8
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetRightPageIndex(int32_t Index);

	// Object: Function ExCommonUI.ExCommonWidgetCarouselProBase.GetLeftPageIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c1a80c
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetLeftPageIndex(int32_t Index);

	// Object: Function ExCommonUI.ExCommonWidgetCarouselProBase.GetActivePageIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c1a7d8
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetActivePageIndex();

	// Object: Function ExCommonUI.ExCommonWidgetCarouselProBase.GenerateCurrentWidgets
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c1a7c4
	// Params: [ Num(0) Size(0x0) ]
	void GenerateCurrentWidgets();

	// Object: Function ExCommonUI.ExCommonWidgetCarouselProBase.EndAutoScrolling
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c1a77c
	// Params: [ Num(0) Size(0x0) ]
	void EndAutoScrolling();

	// Object: Function ExCommonUI.ExCommonWidgetCarouselProBase.BeginAutoScrolling
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfc879a0
	// Params: [ Num(0) Size(0x0) ]
	void BeginAutoScrolling();
};

// Object: Class ExCommonUI.ExCommonInfiniteScrollBoxPro
// Size: 0x330 (Inherited: 0x330)
struct UExCommonInfiniteScrollBoxPro : UExCommonWidgetCarouselProBase
{
	DEFINE_UE_CLASS_HELPERS(UExCommonInfiniteScrollBoxPro, "ExCommonInfiniteScrollBoxPro")
};

// Object: Class ExCommonUI.ExCommonLazyImage
// Size: 0x3A0 (Inherited: 0x2D0)
struct UExCommonLazyImage : UImage
{
	DEFINE_UE_CLASS_HELPERS(UExCommonLazyImage, "ExCommonLazyImage")

	struct FSlateBrush LoadingBackgroundBrush; // 0x2D0(0x90)
	struct FName MaterialTextureParamName; // 0x360(0x8)
	struct FMulticastInlineDelegate BP_OnLoadingStateChanged; // 0x368(0x10)
	uint8_t Pad_0x378[0x28]; // 0x378(0x28)

	// Object: Function ExCommonUI.ExCommonLazyImage.SetMaterialTextureParamName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c174a4
	// Params: [ Num(1) Size(0x8) ]
	void SetMaterialTextureParamName(struct FName TextureParamName);

	// Object: Function ExCommonUI.ExCommonLazyImage.SetBrushFromLazyTexture
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7c17388
	// Params: [ Num(2) Size(0x29) ]
	void SetBrushFromLazyTexture(const struct TSoftObjectPtr<UTexture2D>& LazyTexture, uint8_t bMatchSize);

	// Object: Function ExCommonUI.ExCommonLazyImage.SetBrushFromLazyMaterial
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7c172b8
	// Params: [ Num(1) Size(0x28) ]
	void SetBrushFromLazyMaterial(const struct TSoftObjectPtr<UMaterialInterface>& LazyMaterial);

	// Object: Function ExCommonUI.ExCommonLazyImage.SetBrushFromLazyDisplayAsset
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7c1719c
	// Params: [ Num(2) Size(0x29) ]
	void SetBrushFromLazyDisplayAsset(const struct TSoftObjectPtr<UObject>& LazyObject, uint8_t bMatchTextureSize);

	// Object: Function ExCommonUI.ExCommonLazyImage.IsLoading
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c17164
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsLoading();
};

// Object: Class ExCommonUI.ExCommonLazyWidget
// Size: 0x268 (Inherited: 0x158)
struct UExCommonLazyWidget : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UExCommonLazyWidget, "ExCommonLazyWidget")

	struct FSlateBrush LoadingBackgroundBrush; // 0x158(0x90)
	struct UUserWidget* Content; // 0x1E8(0x8)
	uint8_t Pad_0x1F0[0x28]; // 0x1F0(0x28)
	struct FMulticastInlineDelegate BP_OnLoadingStateChanged; // 0x218(0x10)
	uint8_t Pad_0x228[0x40]; // 0x228(0x40)

	// Object: Function ExCommonUI.ExCommonLazyWidget.SetLazyContent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c17678
	// Params: [ Num(1) Size(0x28) ]
	void SetLazyContent(struct TSoftClassPtr<struct UUserWidget*> SoftWidget);

	// Object: Function ExCommonUI.ExCommonLazyWidget.IsLoading
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c17640
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsLoading();

	// Object: Function ExCommonUI.ExCommonLazyWidget.GetContent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c17624
	// Params: [ Num(1) Size(0x8) ]
	struct UUserWidget* GetContent();
};

// Object: Class ExCommonUI.LoadGuardSlot
// Size: 0x60 (Inherited: 0x38)
struct ULoadGuardSlot : UPanelSlot
{
	DEFINE_UE_CLASS_HELPERS(ULoadGuardSlot, "LoadGuardSlot")

	struct FMargin Padding; // 0x38(0x10)
	EHorizontalAlignment HorizontalAlignment; // 0x48(0x1)
	EVerticalAlignment VerticalAlignment; // 0x49(0x1)
	uint8_t Pad_0x4A[0x16]; // 0x4A(0x16)

	// Object: Function ExCommonUI.LoadGuardSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c17930
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);

	// Object: Function ExCommonUI.LoadGuardSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c17888
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function ExCommonUI.LoadGuardSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c177e4
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
};

// Object: Class ExCommonUI.ExCommonLoadGuard
// Size: 0x288 (Inherited: 0x170)
struct UExCommonLoadGuard : UContentWidget
{
	DEFINE_UE_CLASS_HELPERS(UExCommonLoadGuard, "ExCommonLoadGuard")

	struct FSlateBrush LoadingBackgroundBrush; // 0x170(0x90)
	EHorizontalAlignment ThrobberAlignment; // 0x200(0x1)
	uint8_t Pad_0x201[0x3]; // 0x201(0x3)
	struct FMargin ThrobberPadding; // 0x204(0x10)
	uint8_t Pad_0x214[0x4]; // 0x214(0x4)
	struct FText LoadingText; // 0x218(0x18)
	struct UExCommonTextStyle* TextStyle; // 0x230(0x8)
	struct FMulticastInlineDelegate BP_OnLoadingStateChanged; // 0x238(0x10)
	struct FSoftObjectPath SpinnerMaterialPath; // 0x248(0x18)
	uint8_t Pad_0x260[0x28]; // 0x260(0x28)

	// Object: Function ExCommonUI.ExCommonLoadGuard.SetLoadingText
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7c17cb4
	// Params: [ Num(1) Size(0x18) ]
	void SetLoadingText(const struct FText& InLoadingText);

	// Object: Function ExCommonUI.ExCommonLoadGuard.SetIsLoading
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c17c08
	// Params: [ Num(1) Size(0x1) ]
	void SetIsLoading(uint8_t bInIsLoading);

	// Object: DelegateFunction ExCommonUI.ExCommonLoadGuard.OnAssetLoaded__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnAssetLoaded__DelegateSignature(struct UObject* Object);

	// Object: Function ExCommonUI.ExCommonLoadGuard.IsLoading
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c17bd0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsLoading();

	// Object: Function ExCommonUI.ExCommonLoadGuard.BP_GuardAndLoadAsset
	// Flags: [Final|Native|Private|HasOutParms|BlueprintCallable]
	// Offset: 0x7c17a8c
	// Params: [ Num(2) Size(0x38) ]
	void BP_GuardAndLoadAsset(const struct TSoftObjectPtr<UObject>& InLazyAsset, const struct FDelegate& OnAssetLoaded);
};

// Object: Class ExCommonUI.ExCommonNumericTextBlock
// Size: 0x460 (Inherited: 0x3C0)
struct UExCommonNumericTextBlock : UExCommonTextBlock
{
	DEFINE_UE_CLASS_HELPERS(UExCommonNumericTextBlock, "ExCommonNumericTextBlock")

	struct FMulticastInlineDelegate OnInterpolationStartedEvent; // 0x3C0(0x10)
	struct FMulticastInlineDelegate OnInterpolationUpdatedEvent; // 0x3D0(0x10)
	struct FMulticastInlineDelegate OnOutroEvent; // 0x3E0(0x10)
	struct FMulticastInlineDelegate OnInterpolationEndedEvent; // 0x3F0(0x10)
	float CurrentNumericValue; // 0x400(0x4)
	EExCommonNumericType NumericType; // 0x404(0x1)
	uint8_t Pad_0x405[0x3]; // 0x405(0x3)
	struct FExCommonNumberFormattingOptions FormattingSpecification; // 0x408(0x14)
	float EaseOutInterpolationExponent; // 0x41C(0x4)
	float InterpolationUpdateInterval; // 0x420(0x4)
	float PostInterpolationShrinkDuration; // 0x424(0x4)
	uint8_t PerformSizeInterpolation : 1; // 0x428(0x1), Mask(0x1)
	uint8_t BitPad_0x428_1 : 7; // 0x428(0x1)
	uint8_t IsPercentage : 1; // 0x429(0x1), Mask(0x1)
	uint8_t BitPad_0x429_1 : 7; // 0x429(0x1)
	uint8_t Pad_0x42A[0x36]; // 0x42A(0x36)

	// Object: Function ExCommonUI.ExCommonNumericTextBlock.SetNumericType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c180d4
	// Params: [ Num(1) Size(0x1) ]
	void SetNumericType(EExCommonNumericType InNumericType);

	// Object: Function ExCommonUI.ExCommonNumericTextBlock.SetCurrentValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c18030
	// Params: [ Num(1) Size(0x4) ]
	void SetCurrentValue(float NewValue);

	// Object: DelegateFunction ExCommonUI.ExCommonNumericTextBlock.OnOutro__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnOutro__DelegateSignature(struct UExCommonNumericTextBlock* NumericTextBlock);

	// Object: DelegateFunction ExCommonUI.ExCommonNumericTextBlock.OnInterpolationUpdated__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x10) ]
	void OnInterpolationUpdated__DelegateSignature(struct UExCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue);

	// Object: DelegateFunction ExCommonUI.ExCommonNumericTextBlock.OnInterpolationStarted__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnInterpolationStarted__DelegateSignature(struct UExCommonNumericTextBlock* NumericTextBlock);

	// Object: DelegateFunction ExCommonUI.ExCommonNumericTextBlock.OnInterpolationEnded__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x9) ]
	void OnInterpolationEnded__DelegateSignature(struct UExCommonNumericTextBlock* NumericTextBlock, uint8_t HadCompleted);

	// Object: Function ExCommonUI.ExCommonNumericTextBlock.IsInterpolatingNumericValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c17ff8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsInterpolatingNumericValue();

	// Object: Function ExCommonUI.ExCommonNumericTextBlock.InterpolateToValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c17ea4
	// Params: [ Num(4) Size(0x10) ]
	void InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset);

	// Object: Function ExCommonUI.ExCommonNumericTextBlock.GetTargetValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c17e70
	// Params: [ Num(1) Size(0x4) ]
	float GetTargetValue();
};

// Object: Class ExCommonUI.ExCommonPoolableWidgetInterface
// Size: 0x28 (Inherited: 0x28)
struct IExCommonPoolableWidgetInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IExCommonPoolableWidgetInterface, "ExCommonPoolableWidgetInterface")

	// Object: Function ExCommonUI.ExCommonPoolableWidgetInterface.OnReleaseToPool
	// Flags: [Native|Event|Protected|BlueprintEvent]
	// Offset: 0x7c181cc
	// Params: [ Num(0) Size(0x0) ]
	void OnReleaseToPool();

	// Object: Function ExCommonUI.ExCommonPoolableWidgetInterface.OnAcquireFromPool
	// Flags: [Native|Event|Protected|BlueprintEvent]
	// Offset: 0x7c181b0
	// Params: [ Num(0) Size(0x0) ]
	void OnAcquireFromPool();
};

// Object: Class ExCommonUI.ExCommonRichTextBlock
// Size: 0x7C0 (Inherited: 0x788)
struct UExCommonRichTextBlock : URichTextBlock
{
	DEFINE_UE_CLASS_HELPERS(UExCommonRichTextBlock, "ExCommonRichTextBlock")

	ERichTextInlineIconDisplayMode InlineIconDisplayMode; // 0x788(0x1)
	uint8_t bTintInlineIcon : 1; // 0x789(0x1), Mask(0x1)
	uint8_t BitPad_0x789_1 : 7; // 0x789(0x1)
	uint8_t Pad_0x78A[0x6]; // 0x78A(0x6)
	struct UExCommonTextStyle* DefaultTextStyleOverrideClass; // 0x790(0x8)
	float MobileTextBlockScale; // 0x798(0x4)
	uint8_t Pad_0x79C[0x4]; // 0x79C(0x4)
	struct UExCommonTextScrollStyle* ScrollStyle; // 0x7A0(0x8)
	uint8_t bDisplayAllCaps : 1; // 0x7A8(0x1), Mask(0x1)
	uint8_t BitPad_0x7A8_1 : 7; // 0x7A8(0x1)
	uint8_t Pad_0x7A9[0x17]; // 0x7A9(0x17)
};

// Object: Class ExCommonUI.ExCommonTextStyle
// Size: 0x158 (Inherited: 0x28)
struct UExCommonTextStyle : UObject
{
	DEFINE_UE_CLASS_HELPERS(UExCommonTextStyle, "ExCommonTextStyle")

	struct FSlateFontInfo Font; // 0x28(0x58)
	struct FLinearColor Color; // 0x80(0x10)
	uint8_t bUsesDropShadow : 1; // 0x90(0x1), Mask(0x1)
	uint8_t BitPad_0x90_1 : 7; // 0x90(0x1)
	uint8_t Pad_0x91[0x3]; // 0x91(0x3)
	struct FVector2D ShadowOffset; // 0x94(0x8)
	struct FLinearColor ShadowColor; // 0x9C(0x10)
	struct FMargin Margin; // 0xAC(0x10)
	uint8_t Pad_0xBC[0x4]; // 0xBC(0x4)
	struct FSlateBrush StrikeBrush; // 0xC0(0x90)
	float LineHeightPercentage; // 0x150(0x4)
	uint8_t Pad_0x154[0x4]; // 0x154(0x4)

	// Object: Function ExCommonUI.ExCommonTextStyle.GetStrikeBrush
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c19934
	// Params: [ Num(1) Size(0x90) ]
	void GetStrikeBrush(struct FSlateBrush& OutStrikeBrush);

	// Object: Function ExCommonUI.ExCommonTextStyle.GetShadowOffset
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c19884
	// Params: [ Num(1) Size(0x8) ]
	void GetShadowOffset(struct FVector2D& OutShadowOffset);

	// Object: Function ExCommonUI.ExCommonTextStyle.GetShadowColor
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c197d4
	// Params: [ Num(1) Size(0x10) ]
	void GetShadowColor(struct FLinearColor& OutColor);

	// Object: Function ExCommonUI.ExCommonTextStyle.GetMargin
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c19720
	// Params: [ Num(1) Size(0x10) ]
	void GetMargin(struct FMargin& OutMargin);

	// Object: Function ExCommonUI.ExCommonTextStyle.GetLineHeightPercentage
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c196ec
	// Params: [ Num(1) Size(0x4) ]
	float GetLineHeightPercentage();

	// Object: Function ExCommonUI.ExCommonTextStyle.GetFont
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c195dc
	// Params: [ Num(1) Size(0x58) ]
	void GetFont(struct FSlateFontInfo& OutFont);

	// Object: Function ExCommonUI.ExCommonTextStyle.GetColor
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c1952c
	// Params: [ Num(1) Size(0x10) ]
	void GetColor(struct FLinearColor& OutColor);
};

// Object: Class ExCommonUI.ExCommonTextScrollStyle
// Size: 0x40 (Inherited: 0x28)
struct UExCommonTextScrollStyle : UObject
{
	DEFINE_UE_CLASS_HELPERS(UExCommonTextScrollStyle, "ExCommonTextScrollStyle")

	float Speed; // 0x28(0x4)
	float StartDelay; // 0x2C(0x4)
	float EndDelay; // 0x30(0x4)
	float FadeInDelay; // 0x34(0x4)
	float FadeOutDelay; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: Class ExCommonUI.ExCommonUIEditorSettings
// Size: 0x80 (Inherited: 0x28)
struct UExCommonUIEditorSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UExCommonUIEditorSettings, "ExCommonUIEditorSettings")

	struct TSoftClassPtr<struct UExCommonTextStyle*> TemplateTextStyle; // 0x28(0x28)
	struct TSoftClassPtr<struct UExCommonBorderStyle*> TemplateBorderStyle; // 0x50(0x28)
	uint8_t Pad_0x78[0x8]; // 0x78(0x8)
};

// Object: Class ExCommonUI.ExCommonUIRichTextData
// Size: 0x30 (Inherited: 0x28)
struct UExCommonUIRichTextData : UObject
{
	DEFINE_UE_CLASS_HELPERS(UExCommonUIRichTextData, "ExCommonUIRichTextData")

	struct UDataTable* InlineIconSet; // 0x28(0x8)
};

// Object: Class ExCommonUI.ExCommonUISettings
// Size: 0x158 (Inherited: 0x28)
struct UExCommonUISettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UExCommonUISettings, "ExCommonUISettings")

	uint8_t bAutoLoadData : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct TSoftObjectPtr<UObject> DefaultImageResourceObject; // 0x30(0x28)
	struct TSoftObjectPtr<UMaterialInterface> DefaultThrobberMaterial; // 0x58(0x28)
	struct TSoftClassPtr<struct UExCommonUIRichTextData*> DefaultRichTextDataClass; // 0x80(0x28)
	uint8_t Pad_0xA8[0x8]; // 0xA8(0x8)
	struct UObject* DefaultImageResourceObjectInstance; // 0xB0(0x8)
	struct UMaterialInterface* DefaultThrobberMaterialInstance; // 0xB8(0x8)
	struct FSlateBrush DefaultThrobberBrush; // 0xC0(0x90)
	struct UExCommonUIRichTextData* RichTextDataInstance; // 0x150(0x8)
};

// Object: Class ExCommonUI.ExCommonVideoPlayer
// Size: 0x270 (Inherited: 0x158)
struct UExCommonVideoPlayer : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UExCommonVideoPlayer, "ExCommonVideoPlayer")

	struct UMediaSource* Video; // 0x158(0x8)
	struct UMediaPlayer* MediaPlayer; // 0x160(0x8)
	struct UMediaTexture* MediaTexture; // 0x168(0x8)
	struct UMaterial* VideoMaterial; // 0x170(0x8)
	struct UMediaSoundComponent* SoundComponent; // 0x178(0x8)
	struct FSlateBrush VideoBrush; // 0x180(0x90)
	uint8_t Pad_0x210[0x60]; // 0x210(0x60)

	// Object: Function ExCommonUI.ExCommonVideoPlayer.SetVideo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c1a1ec
	// Params: [ Num(1) Size(0x8) ]
	void SetVideo(struct UMediaSource* NewVideo);

	// Object: Function ExCommonUI.ExCommonVideoPlayer.SetPlaybackRate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c1a148
	// Params: [ Num(1) Size(0x4) ]
	void SetPlaybackRate(float PlaybackRate);

	// Object: Function ExCommonUI.ExCommonVideoPlayer.SetLooping
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c1a09c
	// Params: [ Num(1) Size(0x1) ]
	void SetLooping(uint8_t bShouldLoopPlayback);

	// Object: Function ExCommonUI.ExCommonVideoPlayer.SetIsMuted
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c19ff0
	// Params: [ Num(1) Size(0x1) ]
	void SetIsMuted(uint8_t bInIsMuted);

	// Object: Function ExCommonUI.ExCommonVideoPlayer.Seek
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c19f4c
	// Params: [ Num(1) Size(0x4) ]
	void Seek(float PlaybackTime);

	// Object: Function ExCommonUI.ExCommonVideoPlayer.Reverse
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c19f38
	// Params: [ Num(0) Size(0x0) ]
	void Reverse();

	// Object: Function ExCommonUI.ExCommonVideoPlayer.PlayFromStart
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c19f24
	// Params: [ Num(0) Size(0x0) ]
	void PlayFromStart();

	// Object: Function ExCommonUI.ExCommonVideoPlayer.Play
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c19f10
	// Params: [ Num(0) Size(0x0) ]
	void Play();

	// Object: Function ExCommonUI.ExCommonVideoPlayer.Pause
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c19efc
	// Params: [ Num(0) Size(0x0) ]
	void Pause();

	// Object: Function ExCommonUI.ExCommonVideoPlayer.IsPlaying
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c19ec4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPlaying();

	// Object: Function ExCommonUI.ExCommonVideoPlayer.IsPaused
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c19e8c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPaused();

	// Object: Function ExCommonUI.ExCommonVideoPlayer.IsMuted
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c19e70
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsMuted();

	// Object: Function ExCommonUI.ExCommonVideoPlayer.IsLooping
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c19e38
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsLooping();

	// Object: Function ExCommonUI.ExCommonVideoPlayer.GetVideoDuration
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c19e04
	// Params: [ Num(1) Size(0x4) ]
	float GetVideoDuration();

	// Object: Function ExCommonUI.ExCommonVideoPlayer.GetPlaybackTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c19dd0
	// Params: [ Num(1) Size(0x4) ]
	float GetPlaybackTime();

	// Object: Function ExCommonUI.ExCommonVideoPlayer.GetPlaybackRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c19d9c
	// Params: [ Num(1) Size(0x4) ]
	float GetPlaybackRate();

	// Object: Function ExCommonUI.ExCommonVideoPlayer.Close
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c19d88
	// Params: [ Num(0) Size(0x0) ]
	void Close();
};

// Object: Class ExCommonUI.ExCommonVisualAttachment
// Size: 0x1C0 (Inherited: 0x1A8)
struct UExCommonVisualAttachment : USizeBox
{
	DEFINE_UE_CLASS_HELPERS(UExCommonVisualAttachment, "ExCommonVisualAttachment")

	struct FVector2D ContentAnchor; // 0x1A4(0x8)
	uint8_t Pad_0x1B0[0x10]; // 0x1B0(0x10)
};

// Object: Class ExCommonUI.ExCommonWidgetCarousel
// Size: 0x1A8 (Inherited: 0x170)
struct UExCommonWidgetCarousel : UPanelWidget
{
	DEFINE_UE_CLASS_HELPERS(UExCommonWidgetCarousel, "ExCommonWidgetCarousel")

	int32_t ActiveWidgetIndex; // 0x16C(0x4)
	struct FMulticastInlineDelegate OnCurrentPageIndexChanged; // 0x170(0x10)
	uint8_t Pad_0x184[0x24]; // 0x184(0x24)

	// Object: Function ExCommonUI.ExCommonWidgetCarousel.SetActiveWidgetIndex
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x7c1a608
	// Params: [ Num(1) Size(0x4) ]
	void SetActiveWidgetIndex(int32_t Index);

	// Object: Function ExCommonUI.ExCommonWidgetCarousel.SetActiveWidget
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x7c1a55c
	// Params: [ Num(1) Size(0x8) ]
	void SetActiveWidget(struct UWidget* Widget);

	// Object: Function ExCommonUI.ExCommonWidgetCarousel.PreviousPage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c1a548
	// Params: [ Num(0) Size(0x0) ]
	void PreviousPage();

	// Object: Function ExCommonUI.ExCommonWidgetCarousel.NextPage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c1a534
	// Params: [ Num(0) Size(0x0) ]
	void NextPage();

	// Object: Function ExCommonUI.ExCommonWidgetCarousel.GetWidgetAtIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c1a488
	// Params: [ Num(2) Size(0x10) ]
	struct UWidget* GetWidgetAtIndex(int32_t Index);

	// Object: Function ExCommonUI.ExCommonWidgetCarousel.GetActiveWidgetIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7c1a454
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetActiveWidgetIndex();

	// Object: Function ExCommonUI.ExCommonWidgetCarousel.EndAutoScrolling
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c1a440
	// Params: [ Num(0) Size(0x0) ]
	void EndAutoScrolling();

	// Object: Function ExCommonUI.ExCommonWidgetCarousel.BeginAutoScrolling
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c1a39c
	// Params: [ Num(1) Size(0x4) ]
	void BeginAutoScrolling(float ScrollInterval);
};

// Object: Class ExCommonUI.ExCommonWidgetCarouselPro
// Size: 0x330 (Inherited: 0x330)
struct UExCommonWidgetCarouselPro : UExCommonWidgetCarouselProBase
{
	DEFINE_UE_CLASS_HELPERS(UExCommonWidgetCarouselPro, "ExCommonWidgetCarouselPro")
};

} // namespace SDK
