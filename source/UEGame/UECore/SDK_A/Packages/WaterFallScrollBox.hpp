#pragma once

#include "../CoreUObject_classes.hpp"
#include "SlateCore.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: WaterFallScrollBox
// Enums: 1
// Structs: 0
// Classes: 3

enum class EConsumeMouseWheel : uint8_t;
enum class EDescendantScrollDestination : uint8_t;
enum class EOrientation : uint8_t;
enum class ESlateVisibility : uint8_t;
struct UCanvasPanel;
struct USlateWidgetStyleAsset;
struct UUserWidget;
struct UWidget;
struct UWaterfallCanvasPanel;
struct UWaterfallScrollView;
struct UWaterfallScrollViewV2;

// Object: Enum WaterFallScrollBox.EItemWidthType
enum class EItemWidthType : uint8_t
{
	FirstItemDesireSize = 0,
	Container = 1,
	FixedSize = 2,
	CustomScale = 3,
	EItemWidthType_MAX = 4
};

// Object: Class WaterFallScrollBox.WaterfallCanvasPanel
// Size: 0x1F8 (Inherited: 0x1D0)
struct UWaterfallCanvasPanel : UCanvasPanel
{
	DEFINE_UE_CLASS_HELPERS(UWaterfallCanvasPanel, "WaterfallCanvasPanel")

	uint8_t Pad_0x1D0[0x28]; // 0x1D0(0x28)
};

// Object: Class WaterFallScrollBox.WaterfallScrollView
// Size: 0x650 (Inherited: 0x170)
struct UWaterfallScrollView : UPanelWidget
{
	DEFINE_UE_CLASS_HELPERS(UWaterfallScrollView, "WaterfallScrollView")

	struct FScrollBoxStyle WidgetStyle; // 0x170(0x248)
	struct USlateWidgetStyleAsset* Style; // 0x3B8(0x8)
	struct UUserWidget* TemplateWidget; // 0x3C0(0x8)
	uint8_t Pad_0x3C8[0x1]; // 0x3C8(0x1)
	EOrientation Orientation; // 0x3C9(0x1)
	uint8_t Pad_0x3CA[0x6]; // 0x3CA(0x6)
	int32_t ColumnCount; // 0x3D0(0x4)
	int32_t EditorPreviewItemCount; // 0x3D4(0x4)
	EItemWidthType ItemWidthType; // 0x3D8(0x1)
	uint8_t Pad_0x3D9[0x3]; // 0x3D9(0x3)
	struct FVector2D ItemFixedSize; // 0x3DC(0x8)
	struct FVector2D ItemSpacing; // 0x3E4(0x8)
	struct FMargin Padding; // 0x3EC(0x10)
	uint8_t Pad_0x3FC[0x10]; // 0x3FC(0x10)
	uint8_t bUserCustomEveryItemSize : 1; // 0x40C(0x1), Mask(0x1)
	uint8_t BitPad_0x40C_1 : 7; // 0x40C(0x1)
	uint8_t Pad_0x40D[0x13]; // 0x40D(0x13)
	struct FMulticastInlineDelegate OnReachTop; // 0x420(0x10)
	struct FMulticastInlineDelegate OnReachBottom; // 0x430(0x10)
	struct FMulticastInlineDelegate OnScrolling; // 0x440(0x10)
	struct FMulticastInlineDelegate OnScrollEnd; // 0x450(0x10)
	struct FDelegate OnGetItemCount; // 0x460(0x10)
	struct FDelegate OnProcessItemWidget; // 0x470(0x10)
	struct FDelegate OnProcessResetItemWidgetCallback; // 0x480(0x10)
	uint8_t Pad_0x490[0x10]; // 0x490(0x10)
	struct FDelegate OnGetItemSize; // 0x4A0(0x10)
	struct FMulticastInlineDelegate OnRecycleItem; // 0x4B0(0x10)
	struct FDelegate OnProcessItemsUpdateFinished; // 0x4C0(0x10)
	struct FDelegate OnBeforeCreateItem; // 0x4D0(0x10)
	struct FDelegate OnAfterCreateItem; // 0x4E0(0x10)
	EConsumeMouseWheel ConsumeMouseWheel; // 0x4F0(0x1)
	uint8_t bAnimateWheelScrolling : 1; // 0x4F1(0x1), Mask(0x1)
	uint8_t BitPad_0x4F1_1 : 7; // 0x4F1(0x1)
	uint8_t AllowOverscroll : 1; // 0x4F2(0x1), Mask(0x1)
	uint8_t BitPad_0x4F2_1 : 7; // 0x4F2(0x1)
	ESlateVisibility ScrollBarVisibility; // 0x4F3(0x1)
	uint8_t Pad_0x4F4[0x1]; // 0x4F4(0x1)
	uint8_t bEnableDelayAddItems : 1; // 0x4F5(0x1), Mask(0x1)
	uint8_t BitPad_0x4F5_1 : 7; // 0x4F5(0x1)
	uint8_t Pad_0x4F6[0x2]; // 0x4F6(0x2)
	int32_t AddItemsCountPerFrame; // 0x4F8(0x4)
	int32_t AddItemsTimePerFrame; // 0x4FC(0x4)
	float LoadMoreOffset; // 0x500(0x4)
	uint8_t bItemAutoSizeToContent : 1; // 0x504(0x1), Mask(0x1)
	uint8_t BitPad_0x504_1 : 7; // 0x504(0x1)
	uint8_t bEnableTickRefresh : 1; // 0x505(0x1), Mask(0x1)
	uint8_t BitPad_0x505_1 : 7; // 0x505(0x1)
	uint8_t bAutoContainerSize : 1; // 0x506(0x1), Mask(0x1)
	uint8_t BitPad_0x506_1 : 7; // 0x506(0x1)
	uint8_t Pad_0x507[0x1]; // 0x507(0x1)
	float MaxContainerValue; // 0x508(0x4)
	EDescendantScrollDestination NavigationDestination; // 0x50C(0x1)
	uint8_t Pad_0x50D[0x3]; // 0x50D(0x3)
	float NavigationScrollPadding; // 0x510(0x4)
	float DesiredScrollOffset; // 0x514(0x4)
	uint8_t Pad_0x518[0x10]; // 0x518(0x10)
	struct UCanvasPanel* ScrollContainer; // 0x528(0x8)
	uint8_t Pad_0x530[0x120]; // 0x530(0x120)

	// Object: Function WaterFallScrollBox.WaterfallScrollView.TriggerViewportSizeChange
	// Flags: [Final|Native|Public]
	// Offset: 0x8d528a8
	// Params: [ Num(0) Size(0x0) ]
	void TriggerViewportSizeChange();

	// Object: Function WaterFallScrollBox.WaterfallScrollView.SetScrollOffsetV2
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d52804
	// Params: [ Num(1) Size(0x4) ]
	void SetScrollOffsetV2(float NewScrollOffset);

	// Object: Function WaterFallScrollBox.WaterfallScrollView.SetScrollOffset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d52760
	// Params: [ Num(1) Size(0x4) ]
	void SetScrollOffset(float NewScrollOffset);

	// Object: Function WaterFallScrollBox.WaterfallScrollView.SetScrollBarVisibility
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d526bc
	// Params: [ Num(1) Size(0x1) ]
	void SetScrollBarVisibility(ESlateVisibility NewScrollBarVisibility);

	// Object: Function WaterFallScrollBox.WaterfallScrollView.SetOrientation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d52618
	// Params: [ Num(1) Size(0x1) ]
	void SetOrientation(EOrientation NewOrientation);

	// Object: Function WaterFallScrollBox.WaterfallScrollView.SetItemSpacing
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xf988e7c
	// Params: [ Num(1) Size(0x8) ]
	void SetItemSpacing(struct FVector2D InItemSpacing);

	// Object: Function WaterFallScrollBox.WaterfallScrollView.SetEnableDelayAddItems
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d524f8
	// Params: [ Num(3) Size(0xC) ]
	void SetEnableDelayAddItems(uint8_t bNewEnableDelayAddItems, int32_t InAddItemsTimePerFrame, int32_t InAddItemsCountPerFrame);

	// Object: Function WaterFallScrollBox.WaterfallScrollView.SetEditorPreviewItemCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d52454
	// Params: [ Num(1) Size(0x4) ]
	void SetEditorPreviewItemCount(int32_t InEditorPreviewItemCount);

	// Object: Function WaterFallScrollBox.WaterfallScrollView.SetConsumeMouseWheel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d523b0
	// Params: [ Num(1) Size(0x1) ]
	void SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel);

	// Object: Function WaterFallScrollBox.WaterfallScrollView.SetAutoSizeContainerMaxValue
	// Flags: [Final|Native|Public]
	// Offset: 0x8d5230c
	// Params: [ Num(1) Size(0x4) ]
	void SetAutoSizeContainerMaxValue(float MaxValue);

	// Object: Function WaterFallScrollBox.WaterfallScrollView.SetAlwaysShowScrollbar
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d52260
	// Params: [ Num(1) Size(0x1) ]
	void SetAlwaysShowScrollbar(uint8_t bAlwaysShow);

	// Object: Function WaterFallScrollBox.WaterfallScrollView.ScrollWidgetIntoView
	// Flags: [Final|Native|Protected]
	// Offset: 0x8d5213c
	// Params: [ Num(3) Size(0xA) ]
	void ScrollWidgetIntoView(struct UWidget* WidgetToFind, uint8_t AnimateScroll, EDescendantScrollDestination ScrollDestination);

	// Object: Function WaterFallScrollBox.WaterfallScrollView.ScrollToStartByParam
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d52008
	// Params: [ Num(3) Size(0x8) ]
	void ScrollToStartByParam(uint8_t bAnimateScroll, uint8_t bInterruptAnimateScroll, float AnimateSpeed);

	// Object: Function WaterFallScrollBox.WaterfallScrollView.ScrollToStart
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d51ff4
	// Params: [ Num(0) Size(0x0) ]
	void ScrollToStart();

	// Object: Function WaterFallScrollBox.WaterfallScrollView.ScrollToItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d51e08
	// Params: [ Num(6) Size(0x11) ]
	void ScrollToItem(int32_t ItemIndex, uint8_t bAnimateScroll, uint8_t bInterruptAnimateScroll, float AnimateSpeed, float ViewportFactor, uint8_t bIntoView);

	// Object: Function WaterFallScrollBox.WaterfallScrollView.ScrollToIndexToScreen
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d51cf0
	// Params: [ Num(3) Size(0xC) ]
	void ScrollToIndexToScreen(int32_t Index, float ScreenRatio, float ItemRatio);

	// Object: Function WaterFallScrollBox.WaterfallScrollView.ScrollToIndexIfNotInScreen
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d51c0c
	// Params: [ Num(2) Size(0x5) ]
	void ScrollToIndexIfNotInScreen(int32_t Index, uint8_t bNeedAllInScreen);

	// Object: Function WaterFallScrollBox.WaterfallScrollView.ScrollToIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d51b68
	// Params: [ Num(1) Size(0x4) ]
	void ScrollToIndex(int32_t Index);

	// Object: Function WaterFallScrollBox.WaterfallScrollView.ScrollToEndByIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d51ac4
	// Params: [ Num(1) Size(0x4) ]
	void ScrollToEndByIndex(int32_t Index);

	// Object: Function WaterFallScrollBox.WaterfallScrollView.ScrollToEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d51990
	// Params: [ Num(3) Size(0x8) ]
	void ScrollToEnd(uint8_t bAnimateScroll, uint8_t bInterruptAnimateScroll, float AnimateSpeed);

	// Object: Function WaterFallScrollBox.WaterfallScrollView.SafeScrollToIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d518b0
	// Params: [ Num(2) Size(0x8) ]
	void SafeScrollToIndex(float offset, int32_t Index);

	// Object: Function WaterFallScrollBox.WaterfallScrollView.RelinkTemplateWidget
	// Flags: [Final|Native|Public]
	// Offset: 0x8d51804
	// Params: [ Num(1) Size(0x10) ]
	void RelinkTemplateWidget(struct FString Filename);

	// Object: Function WaterFallScrollBox.WaterfallScrollView.RefreshVisibleItemSizeAndPos
	// Flags: [Final|Native|Public]
	// Offset: 0x8d517f0
	// Params: [ Num(0) Size(0x0) ]
	void RefreshVisibleItemSizeAndPos();

	// Object: Function WaterFallScrollBox.WaterfallScrollView.RefreshVisibleItems
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf68ff10
	// Params: [ Num(0) Size(0x0) ]
	void RefreshVisibleItems();

	// Object: Function WaterFallScrollBox.WaterfallScrollView.RefreshVisibleItem
	// Flags: [Final|Native|Public]
	// Offset: 0x8d517dc
	// Params: [ Num(0) Size(0x0) ]
	void RefreshVisibleItem();

	// Object: Function WaterFallScrollBox.WaterfallScrollView.RefreshItemCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d517c8
	// Params: [ Num(0) Size(0x0) ]
	void RefreshItemCount();

	// Object: Function WaterFallScrollBox.WaterfallScrollView.RefreshItem
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x8d51724
	// Params: [ Num(1) Size(0x4) ]
	void RefreshItem(int32_t ItemIndex);

	// Object: Function WaterFallScrollBox.WaterfallScrollView.RefreshAllItems
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d51708
	// Params: [ Num(0) Size(0x0) ]
	void RefreshAllItems();

	// Object: Function WaterFallScrollBox.WaterfallScrollView.RecycleAllItem
	// Flags: [Final|Native|Protected]
	// Offset: 0x8d516f4
	// Params: [ Num(0) Size(0x0) ]
	void RecycleAllItem();

	// Object: Function WaterFallScrollBox.WaterfallScrollView.ProccessResetVisibleItem
	// Flags: [Final|Native|Public]
	// Offset: 0x8d516e0
	// Params: [ Num(0) Size(0x0) ]
	void ProccessResetVisibleItem();

	// Object: DelegateFunction WaterFallScrollBox.WaterfallScrollView.OnProcessItemWidget__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x10) ]
	void OnProcessItemWidget__DelegateSignature(int32_t Position, struct UWidget* ItemWidget);

	// Object: DelegateFunction WaterFallScrollBox.WaterfallScrollView.OnProcessItemsUpdateFinished__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnProcessItemsUpdateFinished__DelegateSignature();

	// Object: DelegateFunction WaterFallScrollBox.WaterfallScrollView.OnGetItemSize__DelegateSignature
	// Flags: [Public|Delegate|HasDefaults]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0xC) ]
	struct FVector2D OnGetItemSize__DelegateSignature(int32_t ItemPosition);

	// Object: DelegateFunction WaterFallScrollBox.WaterfallScrollView.OnGetItemCount__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	int32_t OnGetItemCount__DelegateSignature();

	// Object: DelegateFunction WaterFallScrollBox.WaterfallScrollView.OnBeforeCreateItem__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnBeforeCreateItem__DelegateSignature();

	// Object: DelegateFunction WaterFallScrollBox.WaterfallScrollView.OnAfterCreateItem__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnAfterCreateItem__DelegateSignature();

	// Object: Function WaterFallScrollBox.WaterfallScrollView.NotifyContainerSizeChange
	// Flags: [Final|Native|Public]
	// Offset: 0x8d515c8
	// Params: [ Num(3) Size(0xC) ]
	void NotifyContainerSizeChange(int32_t Index, float ScreenRatio, float ItemRatio);

	// Object: Function WaterFallScrollBox.WaterfallScrollView.IsScrolling
	// Flags: [Final|Native|Protected]
	// Offset: 0x8d51518
	// Params: [ Num(2) Size(0x5) ]
	uint8_t IsScrolling(float CurOffset);

	// Object: Function WaterFallScrollBox.WaterfallScrollView.GetVisibleItemCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8d51468
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetVisibleItemCount();

	// Object: Function WaterFallScrollBox.WaterfallScrollView.GetScrollOffsetOfEnd
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8d51434
	// Params: [ Num(1) Size(0x4) ]
	float GetScrollOffsetOfEnd();

	// Object: Function WaterFallScrollBox.WaterfallScrollView.GetScrollOffset
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8d51400
	// Params: [ Num(1) Size(0x4) ]
	float GetScrollOffset();

	// Object: Function WaterFallScrollBox.WaterfallScrollView.GetLastVisibleItemIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8d513cc
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetLastVisibleItemIndex();

	// Object: Function WaterFallScrollBox.WaterfallScrollView.GetLastVisibleIdx
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d51320
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetLastVisibleIdx(int32_t Column);

	// Object: Function WaterFallScrollBox.WaterfallScrollView.GetItemCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8d512ec
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetItemCount();

	// Object: Function WaterFallScrollBox.WaterfallScrollView.GetItemByIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d51240
	// Params: [ Num(2) Size(0x10) ]
	struct UWidget* GetItemByIndex(int32_t ItemIndex);

	// Object: Function WaterFallScrollBox.WaterfallScrollView.GetIndexByItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d51194
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetIndexByItem(struct UWidget* Item);

	// Object: Function WaterFallScrollBox.WaterfallScrollView.GetFirstVisibleItemIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8d51160
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetFirstVisibleItemIndex();

	// Object: Function WaterFallScrollBox.WaterfallScrollView.GetFirstVisibleIdx
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d510b4
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetFirstVisibleIdx(int32_t Column);

	// Object: Function WaterFallScrollBox.WaterfallScrollView.ForceSetScrollBarVisible
	// Flags: [Final|Native|Protected]
	// Offset: 0x8d51008
	// Params: [ Num(1) Size(0x1) ]
	void ForceSetScrollBarVisible(uint8_t bVisible);

	// Object: Function WaterFallScrollBox.WaterfallScrollView.ForceSetBottomBoundary
	// Flags: [Final|Native|Public]
	// Offset: 0x8d50f64
	// Params: [ Num(1) Size(0x4) ]
	void ForceSetBottomBoundary(float InBottomBoundary);

	// Object: Function WaterFallScrollBox.WaterfallScrollView.EndInertialScrolling
	// Flags: [Final|Native|Public]
	// Offset: 0x8d50f50
	// Params: [ Num(0) Size(0x0) ]
	void EndInertialScrolling();

	// Object: Function WaterFallScrollBox.WaterfallScrollView.DeleteDelayTimerHandle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d50f3c
	// Params: [ Num(0) Size(0x0) ]
	void DeleteDelayTimerHandle();

	// Object: Function WaterFallScrollBox.WaterfallScrollView.Clear
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf5e4f5c
	// Params: [ Num(0) Size(0x0) ]
	void Clear();
};

// Object: Class WaterFallScrollBox.WaterfallScrollViewV2
// Size: 0x5A0 (Inherited: 0x170)
struct UWaterfallScrollViewV2 : UPanelWidget
{
	DEFINE_UE_CLASS_HELPERS(UWaterfallScrollViewV2, "WaterfallScrollViewV2")

	struct FScrollBoxStyle WidgetStyle; // 0x170(0x248)
	struct USlateWidgetStyleAsset* Style; // 0x3B8(0x8)
	struct UUserWidget* TemplateWidget; // 0x3C0(0x8)
	uint8_t Pad_0x3C8[0x1]; // 0x3C8(0x1)
	EOrientation Orientation; // 0x3C9(0x1)
	uint8_t Pad_0x3CA[0x2]; // 0x3CA(0x2)
	int32_t ColumnCount; // 0x3CC(0x4)
	int32_t EditorPreviewItemCount; // 0x3D0(0x4)
	EItemWidthType ItemWidthType; // 0x3D4(0x1)
	uint8_t Pad_0x3D5[0x3]; // 0x3D5(0x3)
	struct FVector2D ItemFixedSize; // 0x3D8(0x8)
	struct FVector2D ItemSpacing; // 0x3E0(0x8)
	struct FMargin Padding; // 0x3E8(0x10)
	uint8_t Pad_0x3F8[0x10]; // 0x3F8(0x10)
	uint8_t bUserCustomEveryItemSize : 1; // 0x408(0x1), Mask(0x1)
	uint8_t BitPad_0x408_1 : 7; // 0x408(0x1)
	uint8_t Pad_0x409[0x17]; // 0x409(0x17)
	struct FMulticastInlineDelegate OnReachTop; // 0x420(0x10)
	struct FMulticastInlineDelegate OnReachBottom; // 0x430(0x10)
	struct FMulticastInlineDelegate OnScrolling; // 0x440(0x10)
	struct FMulticastInlineDelegate OnScrollEnd; // 0x450(0x10)
	struct FDelegate OnGetItemCount; // 0x460(0x10)
	struct FDelegate OnProcessItemWidget; // 0x470(0x10)
	struct FDelegate OnProcessResetItemWidgetCallback; // 0x480(0x10)
	uint8_t Pad_0x490[0x10]; // 0x490(0x10)
	struct FDelegate OnGetItemSize; // 0x4A0(0x10)
	struct FMulticastInlineDelegate OnRecycleItem; // 0x4B0(0x10)
	struct FDelegate OnProcessItemsUpdateFinished; // 0x4C0(0x10)
	struct FDelegate OnBeforeCreateItem; // 0x4D0(0x10)
	struct FDelegate OnAfterCreateItem; // 0x4E0(0x10)
	EConsumeMouseWheel ConsumeMouseWheel; // 0x4F0(0x1)
	uint8_t bAnimateWheelScrolling : 1; // 0x4F1(0x1), Mask(0x1)
	uint8_t BitPad_0x4F1_1 : 7; // 0x4F1(0x1)
	uint8_t AllowOverscroll : 1; // 0x4F2(0x1), Mask(0x1)
	uint8_t BitPad_0x4F2_1 : 7; // 0x4F2(0x1)
	ESlateVisibility ScrollBarVisibility; // 0x4F3(0x1)
	uint8_t Pad_0x4F4[0x1]; // 0x4F4(0x1)
	uint8_t bEnableDelayAddItems : 1; // 0x4F5(0x1), Mask(0x1)
	uint8_t BitPad_0x4F5_1 : 7; // 0x4F5(0x1)
	uint8_t Pad_0x4F6[0x2]; // 0x4F6(0x2)
	int32_t AddItemsCountPerFrame; // 0x4F8(0x4)
	int32_t AddItemsTimePerFrame; // 0x4FC(0x4)
	float LoadMoreOffset; // 0x500(0x4)
	uint8_t bItemAutoSizeToContent : 1; // 0x504(0x1), Mask(0x1)
	uint8_t BitPad_0x504_1 : 7; // 0x504(0x1)
	uint8_t bEnableTickRefresh : 1; // 0x505(0x1), Mask(0x1)
	uint8_t BitPad_0x505_1 : 7; // 0x505(0x1)
	uint8_t bAutoContainerSize : 1; // 0x506(0x1), Mask(0x1)
	uint8_t BitPad_0x506_1 : 7; // 0x506(0x1)
	uint8_t Pad_0x507[0x1]; // 0x507(0x1)
	float MaxContainerValue; // 0x508(0x4)
	EDescendantScrollDestination NavigationDestination; // 0x50C(0x1)
	uint8_t Pad_0x50D[0x3]; // 0x50D(0x3)
	float NavigationScrollPadding; // 0x510(0x4)
	uint8_t bEnableDesiredSizePull : 1; // 0x514(0x1), Mask(0x1)
	uint8_t BitPad_0x514_1 : 7; // 0x514(0x1)
	uint8_t Pad_0x515[0x3]; // 0x515(0x3)
	float DesiredSizePullAbsThresholdPx; // 0x518(0x4)
	float DesiredSizePullRatioThreshold; // 0x51C(0x4)
	uint8_t Pad_0x520[0x8]; // 0x520(0x8)
	float DesiredScrollOffset; // 0x528(0x4)
	uint8_t Pad_0x52C[0x14]; // 0x52C(0x14)
	struct UCanvasPanel* ScrollContainer; // 0x540(0x8)
	uint8_t Pad_0x548[0x58]; // 0x548(0x58)

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.TriggerViewportSizeChange
	// Flags: [Final|Native|Public]
	// Offset: 0x8d5453c
	// Params: [ Num(0) Size(0x0) ]
	void TriggerViewportSizeChange();

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.SetScrollOffsetV2
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d54498
	// Params: [ Num(1) Size(0x4) ]
	void SetScrollOffsetV2(float NewScrollOffset);

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.SetScrollOffset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d543f4
	// Params: [ Num(1) Size(0x4) ]
	void SetScrollOffset(float NewScrollOffset);

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.SetScrollBarVisibility
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d54350
	// Params: [ Num(1) Size(0x1) ]
	void SetScrollBarVisibility(ESlateVisibility NewScrollBarVisibility);

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.SetOrientation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d542ac
	// Params: [ Num(1) Size(0x1) ]
	void SetOrientation(EOrientation NewOrientation);

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.SetItemSpacing
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8d5420c
	// Params: [ Num(1) Size(0x8) ]
	void SetItemSpacing(struct FVector2D InItemSpacing);

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.SetEnableDelayAddItems
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d540ec
	// Params: [ Num(3) Size(0xC) ]
	void SetEnableDelayAddItems(uint8_t bNewEnableDelayAddItems, int32_t InAddItemsTimePerFrame, int32_t InAddItemsCountPerFrame);

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.SetEditorPreviewItemCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d54048
	// Params: [ Num(1) Size(0x4) ]
	void SetEditorPreviewItemCount(int32_t InEditorPreviewItemCount);

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.SetConsumeMouseWheel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d53fa4
	// Params: [ Num(1) Size(0x1) ]
	void SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel);

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.SetAutoSizeContainerMaxValue
	// Flags: [Final|Native|Public]
	// Offset: 0x8d53f00
	// Params: [ Num(1) Size(0x4) ]
	void SetAutoSizeContainerMaxValue(float MaxValue);

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.SetAlwaysShowScrollbar
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d53e54
	// Params: [ Num(1) Size(0x1) ]
	void SetAlwaysShowScrollbar(uint8_t bAlwaysShow);

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.ScrollWidgetIntoView
	// Flags: [Final|Native|Protected]
	// Offset: 0x8d53d30
	// Params: [ Num(3) Size(0xA) ]
	void ScrollWidgetIntoView(struct UWidget* WidgetToFind, uint8_t AnimateScroll, EDescendantScrollDestination ScrollDestination);

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.ScrollToStartByParam
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d53bfc
	// Params: [ Num(3) Size(0x8) ]
	void ScrollToStartByParam(uint8_t bAnimateScroll, uint8_t bInterruptAnimateScroll, float AnimateSpeed);

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.ScrollToStart
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d53be8
	// Params: [ Num(0) Size(0x0) ]
	void ScrollToStart();

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.ScrollToItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d539fc
	// Params: [ Num(6) Size(0x11) ]
	void ScrollToItem(int32_t ItemIndex, uint8_t bAnimateScroll, uint8_t bInterruptAnimateScroll, float AnimateSpeed, float ViewportFactor, uint8_t bIntoView);

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.ScrollToIndexToScreen
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d538e4
	// Params: [ Num(3) Size(0xC) ]
	void ScrollToIndexToScreen(int32_t Index, float ScreenRatio, float ItemRatio);

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.ScrollToIndexIfNotInScreen
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d53800
	// Params: [ Num(2) Size(0x5) ]
	void ScrollToIndexIfNotInScreen(int32_t Index, uint8_t bNeedAllInScreen);

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.ScrollToIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d5375c
	// Params: [ Num(1) Size(0x4) ]
	void ScrollToIndex(int32_t Index);

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.ScrollToEndByIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d536b8
	// Params: [ Num(1) Size(0x4) ]
	void ScrollToEndByIndex(int32_t Index);

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.ScrollToEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d53584
	// Params: [ Num(3) Size(0x8) ]
	void ScrollToEnd(uint8_t bAnimateScroll, uint8_t bInterruptAnimateScroll, float AnimateSpeed);

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.SafeScrollToIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d534a4
	// Params: [ Num(2) Size(0x8) ]
	void SafeScrollToIndex(float offset, int32_t Index);

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.RelinkTemplateWidget
	// Flags: [Final|Native|Public]
	// Offset: 0x8d533f8
	// Params: [ Num(1) Size(0x10) ]
	void RelinkTemplateWidget(struct FString Filename);

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.RefreshVisibleItemSizeAndPos
	// Flags: [Final|Native|Public]
	// Offset: 0x8d533e4
	// Params: [ Num(0) Size(0x0) ]
	void RefreshVisibleItemSizeAndPos();

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.RefreshVisibleItems
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d533d0
	// Params: [ Num(0) Size(0x0) ]
	void RefreshVisibleItems();

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.RefreshVisibleItem
	// Flags: [Final|Native|Public]
	// Offset: 0x8d533bc
	// Params: [ Num(0) Size(0x0) ]
	void RefreshVisibleItem();

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.RefreshItemCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d533a8
	// Params: [ Num(0) Size(0x0) ]
	void RefreshItemCount();

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.RefreshItem
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x8d53304
	// Params: [ Num(1) Size(0x4) ]
	void RefreshItem(int32_t ItemIndex);

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.RefreshAllItems
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d532f0
	// Params: [ Num(0) Size(0x0) ]
	void RefreshAllItems();

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.RecycleAllItem
	// Flags: [Final|Native|Protected]
	// Offset: 0x8d532dc
	// Params: [ Num(0) Size(0x0) ]
	void RecycleAllItem();

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.RebuildFromAnchor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d53200
	// Params: [ Num(2) Size(0x8) ]
	void RebuildFromAnchor(int32_t AnchorIndex_1Base, int32_t ContainerExtentMode);

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.ProccessResetVisibleItem
	// Flags: [Final|Native|Public]
	// Offset: 0x8d531ec
	// Params: [ Num(0) Size(0x0) ]
	void ProccessResetVisibleItem();

	// Object: DelegateFunction WaterFallScrollBox.WaterfallScrollViewV2.OnProcessItemWidgetV2__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x10) ]
	void OnProcessItemWidgetV2__DelegateSignature(int32_t Position, struct UWidget* ItemWidget);

	// Object: DelegateFunction WaterFallScrollBox.WaterfallScrollViewV2.OnProcessItemsUpdateFinishedV2__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnProcessItemsUpdateFinishedV2__DelegateSignature();

	// Object: DelegateFunction WaterFallScrollBox.WaterfallScrollViewV2.OnGetItemSizeV2__DelegateSignature
	// Flags: [Public|Delegate|HasDefaults]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0xC) ]
	struct FVector2D OnGetItemSizeV2__DelegateSignature(int32_t ItemPosition);

	// Object: DelegateFunction WaterFallScrollBox.WaterfallScrollViewV2.OnGetItemCountV2__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	int32_t OnGetItemCountV2__DelegateSignature();

	// Object: DelegateFunction WaterFallScrollBox.WaterfallScrollViewV2.OnBeforeCreateItemV2__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnBeforeCreateItemV2__DelegateSignature();

	// Object: DelegateFunction WaterFallScrollBox.WaterfallScrollViewV2.OnAfterCreateItemV2__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnAfterCreateItemV2__DelegateSignature();

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.NotifyContainerSizeChange
	// Flags: [Final|Native|Public]
	// Offset: 0x8d530d4
	// Params: [ Num(3) Size(0xC) ]
	void NotifyContainerSizeChange(int32_t Index, float ScreenRatio, float ItemRatio);

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.IsScrolling
	// Flags: [Final|Native|Protected]
	// Offset: 0x8d53024
	// Params: [ Num(2) Size(0x5) ]
	uint8_t IsScrolling(float CurOffset);

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.Internal_DumpState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8d52f8c
	// Params: [ Num(1) Size(0x10) ]
	struct FString Internal_DumpState();

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.GetVisibleItemCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8d52f58
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetVisibleItemCount();

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.GetScrollOffsetOfEnd
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8d52f24
	// Params: [ Num(1) Size(0x4) ]
	float GetScrollOffsetOfEnd();

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.GetScrollOffset
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8d52ef0
	// Params: [ Num(1) Size(0x4) ]
	float GetScrollOffset();

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.GetLastVisibleItemIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8d52ebc
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetLastVisibleItemIndex();

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.GetLastVisibleIdx
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d52e10
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetLastVisibleIdx(int32_t Column);

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.GetItemCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8d52ddc
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetItemCount();

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.GetItemByIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d52d30
	// Params: [ Num(2) Size(0x10) ]
	struct UWidget* GetItemByIndex(int32_t ItemIndex);

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.GetIndexByItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d52c84
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetIndexByItem(struct UWidget* Item);

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.GetFirstVisibleItemIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8d52c50
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetFirstVisibleItemIndex();

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.GetFirstVisibleIdx
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d52ba4
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetFirstVisibleIdx(int32_t Column);

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.ForceSetScrollBarVisible
	// Flags: [Final|Native|Protected]
	// Offset: 0x8d52af8
	// Params: [ Num(1) Size(0x1) ]
	void ForceSetScrollBarVisible(uint8_t bVisible);

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.ForceSetBottomBoundary
	// Flags: [Final|Native|Public]
	// Offset: 0x8d52a54
	// Params: [ Num(1) Size(0x4) ]
	void ForceSetBottomBoundary(float InBottomBoundary);

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.EndInertialScrolling
	// Flags: [Final|Native|Public]
	// Offset: 0x8d52a40
	// Params: [ Num(0) Size(0x0) ]
	void EndInertialScrolling();

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.DeleteDelayTimerHandle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d52a2c
	// Params: [ Num(0) Size(0x0) ]
	void DeleteDelayTimerHandle();

	// Object: Function WaterFallScrollBox.WaterfallScrollViewV2.Clear
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d52a18
	// Params: [ Num(0) Size(0x0) ]
	void Clear();
};

} // namespace SDK
