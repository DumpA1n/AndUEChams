#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "Slate.hpp"
#include "SlateCore.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: UMGToolKits
// Enums: 0
// Structs: 0
// Classes: 13

enum class EConsumeMouseWheel : uint8_t;
enum class EDescendantScrollDestination : uint8_t;
enum class EOrientation : uint8_t;
enum class ESlateVisibility : uint8_t;
struct FMargin;
struct UCanvasPanel;
struct UUserWidget;
struct UWidget;
struct UAsyncLoadUserWidget;
struct UAsyncLoadUserWidgetSubsystem;
struct UComputeTextBlock;
struct UDynamicPanelSlot;
struct UDynamicPanelSlotDeque;
struct IDynamicPanelWidgetSlotInterface;
struct UDynamicPanelWidget;
struct UObjectInspector;
struct UPreviewUserWidget;
struct UPrintTextBlock;
struct UScrapSlotRecycleBin;
struct UScrollGridBox;
struct UScrollGridBoxSlot;

// Object: Class UMGToolKits.AsyncLoadUserWidget
// Size: 0x380 (Inherited: 0x2F8)
struct UAsyncLoadUserWidget : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UAsyncLoadUserWidget, "AsyncLoadUserWidget")

	struct TSoftClassPtr<struct UUserWidget*> TargetUserWidgetClass; // 0x2F8(0x28)
	uint8_t AutoLoadWhenInitialize : 1; // 0x320(0x1), Mask(0x1)
	uint8_t BitPad_0x320_1 : 7; // 0x320(0x1)
	uint8_t bEnableAutoLoad : 1; // 0x321(0x1), Mask(0x1)
	uint8_t BitPad_0x321_1 : 7; // 0x321(0x1)
	uint8_t bEditorPreview : 1; // 0x322(0x1), Mask(0x1)
	uint8_t BitPad_0x322_1 : 7; // 0x322(0x1)
	uint8_t Pad_0x323[0x5]; // 0x323(0x5)
	struct UCanvasPanel* CanvasPanel_BP; // 0x328(0x8)
	struct FAnchors WidgetInstanceAnchor; // 0x330(0x10)
	struct FMulticastInlineDelegate OnAsyncWidgetLoaded; // 0x340(0x10)
	struct UCanvasPanel* CanvasPanel_Default; // 0x350(0x8)
	struct UCanvasPanel* CanvasPanel_Root; // 0x358(0x8)
	uint8_t Pad_0x360[0x10]; // 0x360(0x10)
	struct UUserWidget* TargetUserWidgetClass_Object; // 0x370(0x8)
	struct UUserWidget* WidgetInstance; // 0x378(0x8)

	// Object: Function UMGToolKits.AsyncLoadUserWidget.RemoveWidgetInstance
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d1e964
	// Params: [ Num(0) Size(0x0) ]
	void RemoveWidgetInstance();

	// Object: Function UMGToolKits.AsyncLoadUserWidget.GetWidgetInstance
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d1e930
	// Params: [ Num(1) Size(0x8) ]
	struct UUserWidget* GetWidgetInstance();

	// Object: Function UMGToolKits.AsyncLoadUserWidget.CancelAsyncLoading
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d1e91c
	// Params: [ Num(0) Size(0x0) ]
	void CancelAsyncLoading();

	// Object: Function UMGToolKits.AsyncLoadUserWidget.BeginAsyncLoading
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d1e908
	// Params: [ Num(0) Size(0x0) ]
	void BeginAsyncLoading();
};

// Object: Class UMGToolKits.AsyncLoadUserWidgetSubsystem
// Size: 0x48 (Inherited: 0x30)
struct UAsyncLoadUserWidgetSubsystem : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UAsyncLoadUserWidgetSubsystem, "AsyncLoadUserWidgetSubsystem")

	struct TArray<struct TWeakObjectPtr<struct UAsyncLoadUserWidget>> AsyncLoadUserWidgetWeakPtrList; // 0x30(0x10)
	uint8_t Pad_0x40[0x8]; // 0x40(0x8)

	// Object: Function UMGToolKits.AsyncLoadUserWidgetSubsystem.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8d1ea54
	// Params: [ Num(1) Size(0x8) ]
	static struct UAsyncLoadUserWidgetSubsystem* Get();
};

// Object: Class UMGToolKits.ComputeTextBlock
// Size: 0x408 (Inherited: 0x398)
struct UComputeTextBlock : UTextBlock
{
	DEFINE_UE_CLASS_HELPERS(UComputeTextBlock, "ComputeTextBlock")

	float TimeStep; // 0x398(0x4)
	int32_t RandomCount; // 0x39C(0x4)
	uint8_t bPlayAnim : 1; // 0x3A0(0x1), Mask(0x1)
	uint8_t BitPad_0x3A0_1 : 7; // 0x3A0(0x1)
	uint8_t bAutoPlayAnimWhenSetText : 1; // 0x3A1(0x1), Mask(0x1)
	uint8_t BitPad_0x3A1_1 : 7; // 0x3A1(0x1)
	uint8_t Pad_0x3A2[0x6]; // 0x3A2(0x6)
	struct FMulticastInlineDelegate OnComputeTextBlockAnimChangeEvent; // 0x3A8(0x10)
	struct FMulticastInlineDelegate OnComputeTextBlockAnimFinishEvent; // 0x3B8(0x10)
	uint8_t bEnableDynamicFormat : 1; // 0x3C8(0x1), Mask(0x1)
	uint8_t BitPad_0x3C8_1 : 7; // 0x3C8(0x1)
	uint8_t Pad_0x3C9[0x7]; // 0x3C9(0x7)
	struct FText OriginalText; // 0x3D0(0x18)
	uint8_t Pad_0x3E8[0x20]; // 0x3E8(0x20)

	// Object: Function UMGToolKits.ComputeTextBlock.SetPlayAnim
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d1eb68
	// Params: [ Num(1) Size(0x1) ]
	void SetPlayAnim(uint8_t bInPlayAnim);

	// Object: Function UMGToolKits.ComputeTextBlock.PlayAnimToEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d1eb54
	// Params: [ Num(0) Size(0x0) ]
	void PlayAnimToEnd();

	// Object: Function UMGToolKits.ComputeTextBlock.PlayAnim_ComputeTextBlock
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d1eb40
	// Params: [ Num(0) Size(0x0) ]
	void PlayAnim_ComputeTextBlock();
};

// Object: Class UMGToolKits.DynamicPanelSlot
// Size: 0x38 (Inherited: 0x28)
struct UDynamicPanelSlot : UVisual
{
	DEFINE_UE_CLASS_HELPERS(UDynamicPanelSlot, "DynamicPanelSlot")

	struct UDynamicPanelWidget* Parent; // 0x28(0x8)
	struct UWidget* Content; // 0x30(0x8)
};

// Object: Class UMGToolKits.DynamicPanelSlotDeque
// Size: 0x48 (Inherited: 0x28)
struct UDynamicPanelSlotDeque : UObject
{
	DEFINE_UE_CLASS_HELPERS(UDynamicPanelSlotDeque, "DynamicPanelSlotDeque")

	int32_t Head; // 0x28(0x4)
	int32_t Tail; // 0x2C(0x4)
	int32_t size; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct TArray<struct UDynamicPanelSlot*> Slots; // 0x38(0x10)
};

// Object: Class UMGToolKits.DynamicPanelWidgetSlotInterface
// Size: 0x28 (Inherited: 0x28)
struct IDynamicPanelWidgetSlotInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IDynamicPanelWidgetSlotInterface, "DynamicPanelWidgetSlotInterface")
};

// Object: Class UMGToolKits.DynamicPanelWidget
// Size: 0x160 (Inherited: 0x158)
struct UDynamicPanelWidget : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UDynamicPanelWidget, "DynamicPanelWidget")

	struct UDynamicPanelSlotDeque* Slots; // 0x158(0x8)
};

// Object: Class UMGToolKits.ObjectInspector
// Size: 0x28 (Inherited: 0x28)
struct UObjectInspector : UObject
{
	DEFINE_UE_CLASS_HELPERS(UObjectInspector, "ObjectInspector")
};

// Object: Class UMGToolKits.PreviewUserWidget
// Size: 0x2F8 (Inherited: 0x2F8)
struct UPreviewUserWidget : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UPreviewUserWidget, "PreviewUserWidget")

	// Object: Function UMGToolKits.PreviewUserWidget.SynchronizePropertiesForGame
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void SynchronizePropertiesForGame();

	// Object: Function UMGToolKits.PreviewUserWidget.SynchronizePropertiesForEditor
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void SynchronizePropertiesForEditor();
};

// Object: Class UMGToolKits.PrintTextBlock
// Size: 0x498 (Inherited: 0x398)
struct UPrintTextBlock : UTextBlock
{
	DEFINE_UE_CLASS_HELPERS(UPrintTextBlock, "PrintTextBlock")

	uint8_t bCenterDisplay : 1; // 0x398(0x1), Mask(0x1)
	uint8_t BitPad_0x398_1 : 7; // 0x398(0x1)
	uint8_t bFirstShowTrail : 1; // 0x399(0x1), Mask(0x1)
	uint8_t BitPad_0x399_1 : 7; // 0x399(0x1)
	uint8_t Pad_0x39A[0x2]; // 0x39A(0x2)
	float TimeStep; // 0x39C(0x4)
	float PrintStep; // 0x3A0(0x4)
	float PrintTrailStep; // 0x3A4(0x4)
	uint8_t bPlayAnim : 1; // 0x3A8(0x1), Mask(0x1)
	uint8_t BitPad_0x3A8_1 : 7; // 0x3A8(0x1)
	uint8_t bAutoPlayAnimWhenSetText : 1; // 0x3A9(0x1), Mask(0x1)
	uint8_t BitPad_0x3A9_1 : 7; // 0x3A9(0x1)
	uint8_t Pad_0x3AA[0x6]; // 0x3AA(0x6)
	struct FMulticastInlineDelegate OnPrintTextBlockAnimChangeEvent; // 0x3B0(0x10)
	struct FMulticastInlineDelegate OnPrintTextBlockAnimFinishEvent; // 0x3C0(0x10)
	uint8_t bEnableDynamicFormat : 1; // 0x3D0(0x1), Mask(0x1)
	uint8_t BitPad_0x3D0_1 : 7; // 0x3D0(0x1)
	uint8_t Pad_0x3D1[0x7]; // 0x3D1(0x7)
	struct FString TrailingString; // 0x3D8(0x10)
	struct FText OriginalText; // 0x3E8(0x18)
	uint8_t Pad_0x400[0x98]; // 0x400(0x98)

	// Object: Function UMGToolKits.PrintTextBlock.SetUseUTF8
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d1efb4
	// Params: [ Num(1) Size(0x1) ]
	void SetUseUTF8(uint8_t bUse);

	// Object: Function UMGToolKits.PrintTextBlock.SetTimeStep
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d1ef10
	// Params: [ Num(1) Size(0x4) ]
	void SetTimeStep(float TimeStep);

	// Object: Function UMGToolKits.PrintTextBlock.SetPlayAnim
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d1ee64
	// Params: [ Num(1) Size(0x1) ]
	void SetPlayAnim(uint8_t bInPlayAnim);

	// Object: Function UMGToolKits.PrintTextBlock.PlayAnimToEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d1ee50
	// Params: [ Num(0) Size(0x0) ]
	void PlayAnimToEnd();

	// Object: Function UMGToolKits.PrintTextBlock.PlayAnim_ComputeTextBlock
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d1ee3c
	// Params: [ Num(0) Size(0x0) ]
	void PlayAnim_ComputeTextBlock();

	// Object: Function UMGToolKits.PrintTextBlock.Clear
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d1ee28
	// Params: [ Num(0) Size(0x0) ]
	void Clear();
};

// Object: Class UMGToolKits.ScrapSlotRecycleBin
// Size: 0x88 (Inherited: 0x28)
struct UScrapSlotRecycleBin : UObject
{
	DEFINE_UE_CLASS_HELPERS(UScrapSlotRecycleBin, "ScrapSlotRecycleBin")

	struct TArray<struct UDynamicPanelSlotDeque*> ScrapSlotDequeArray; // 0x28(0x10)
	struct TMap<int32_t, int32_t> WidgetTypeToDequeIndexMap; // 0x38(0x50)
};

// Object: Class UMGToolKits.ScrollGridBox
// Size: 0x9F8 (Inherited: 0x160)
struct UScrollGridBox : UDynamicPanelWidget
{
	DEFINE_UE_CLASS_HELPERS(UScrollGridBox, "ScrollGridBox")

	struct FScrollBoxStyle WidgetStyle; // 0x160(0x248)
	struct FScrollBarStyle WidgetBarStyle; // 0x3A8(0x518)
	EOrientation Orientation; // 0x8C0(0x1)
	uint8_t bInvertScrollBarDirection : 1; // 0x8C1(0x1), Mask(0x1)
	uint8_t BitPad_0x8C1_1 : 7; // 0x8C1(0x1)
	ESlateVisibility ScrollBarVisibility; // 0x8C2(0x1)
	EConsumeMouseWheel ConsumeMouseWheel; // 0x8C3(0x1)
	struct FVector2D ScrollbarThickness; // 0x8C4(0x8)
	struct FMargin ScrollbarPadding; // 0x8CC(0x10)
	uint8_t AlwaysShowScrollbar : 1; // 0x8DC(0x1), Mask(0x1)
	uint8_t BitPad_0x8DC_1 : 7; // 0x8DC(0x1)
	uint8_t AllowOverscroll : 1; // 0x8DD(0x1), Mask(0x1)
	uint8_t BitPad_0x8DD_1 : 7; // 0x8DD(0x1)
	uint8_t bAllowRightClickDragScrolling : 1; // 0x8DE(0x1), Mask(0x1)
	uint8_t BitPad_0x8DE_1 : 7; // 0x8DE(0x1)
	uint8_t Pad_0x8DF[0x1]; // 0x8DF(0x1)
	float OverrideDragTriggerDistance; // 0x8E0(0x4)
	uint8_t bResponseMouseMoveHandle : 1; // 0x8E4(0x1), Mask(0x1)
	uint8_t BitPad_0x8E4_1 : 7; // 0x8E4(0x1)
	EDescendantScrollDestination NavigationDestination; // 0x8E5(0x1)
	uint8_t bNotReleaseChildrenWhenReleaseSlateResources : 1; // 0x8E6(0x1), Mask(0x1)
	uint8_t BitPad_0x8E6_1 : 7; // 0x8E6(0x1)
	uint8_t Pad_0x8E7[0x1]; // 0x8E7(0x1)
	float NavigationScrollPadding; // 0x8E8(0x4)
	uint8_t Pad_0x8EC[0x14]; // 0x8EC(0x14)
	struct FMargin Padding; // 0x900(0x10)
	uint8_t bFixedSize : 1; // 0x910(0x1), Mask(0x1)
	uint8_t BitPad_0x910_1 : 7; // 0x910(0x1)
	uint8_t Pad_0x911[0x3]; // 0x911(0x3)
	struct FVector2D ItemFixedSize; // 0x914(0x8)
	int32_t Row; // 0x91C(0x4)
	int32_t Column; // 0x920(0x4)
	struct FVector2D ItemSpacing; // 0x924(0x8)
	ESlateVisibility ItemVisibility; // 0x92C(0x1)
	uint8_t Pad_0x92D[0x3]; // 0x92D(0x3)
	struct UUserWidget* ItemWidgetTemplateClass; // 0x930(0x8)
	uint8_t bCircleBox : 1; // 0x938(0x1), Mask(0x1)
	uint8_t BitPad_0x938_1 : 7; // 0x938(0x1)
	uint8_t Pad_0x939[0x3]; // 0x939(0x3)
	struct FVector2D Center; // 0x93C(0x8)
	float radius; // 0x944(0x4)
	uint8_t bNeedCalculateItemSize : 1; // 0x948(0x1), Mask(0x1)
	uint8_t BitPad_0x948_1 : 7; // 0x948(0x1)
	uint8_t Pad_0x949[0x3]; // 0x949(0x3)
	int32_t ItemCount; // 0x94C(0x4)
	struct UDynamicPanelSlotDeque* ScrapSlots; // 0x950(0x8)
	struct FDelegate OnGetItemCount; // 0x958(0x10)
	struct FDelegate OnProcessItemWidget; // 0x968(0x10)
	struct FDelegate OnProcessItemsUpdateFinished; // 0x978(0x10)
	uint8_t Pad_0x988[0x10]; // 0x988(0x10)
	struct FMulticastInlineDelegate OnScrolling; // 0x998(0x10)
	struct FMulticastInlineDelegate OnScrollEnd; // 0x9A8(0x10)
	uint8_t bEnableContentHint : 1; // 0x9B8(0x1), Mask(0x1)
	uint8_t BitPad_0x9B8_1 : 7; // 0x9B8(0x1)
	uint8_t bEnableTickEvent : 1; // 0x9B9(0x1), Mask(0x1)
	uint8_t BitPad_0x9B9_1 : 7; // 0x9B9(0x1)
	uint8_t bEnableDelayAddItems : 1; // 0x9BA(0x1), Mask(0x1)
	uint8_t BitPad_0x9BA_1 : 7; // 0x9BA(0x1)
	uint8_t Pad_0x9BB[0x1]; // 0x9BB(0x1)
	int32_t AddItemsCountPerFrame; // 0x9BC(0x4)
	int32_t AddItemsTimePerFrame; // 0x9C0(0x4)
	uint8_t Pad_0x9C4[0x4]; // 0x9C4(0x4)
	struct FMulticastInlineDelegate OnContentHintStateChanged; // 0x9C8(0x10)
	struct FMulticastInlineDelegate OnTick; // 0x9D8(0x10)
	struct FMulticastInlineDelegate OnDataCountChanged; // 0x9E8(0x10)

	// Object: Function UMGToolKits.ScrollGridBox.UpdateAllItemSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d20a60
	// Params: [ Num(0) Size(0x0) ]
	void UpdateAllItemSize();

	// Object: Function UMGToolKits.ScrollGridBox.SetScrollOffset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d208f0
	// Params: [ Num(4) Size(0xC) ]
	void SetScrollOffset(float NewScrollOffset, uint8_t bAnimateScroll, uint8_t bInterruptAnimateScroll, float AnimateSpeed);

	// Object: Function UMGToolKits.ScrollGridBox.SetScrollBarVisibility
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d2084c
	// Params: [ Num(1) Size(0x1) ]
	void SetScrollBarVisibility(ESlateVisibility NewScrollBarVisibility);

	// Object: Function UMGToolKits.ScrollGridBox.SetScrollbarThickness
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x8d2079c
	// Params: [ Num(1) Size(0x8) ]
	void SetScrollbarThickness(const struct FVector2D& NewScrollbarThickness);

	// Object: Function UMGToolKits.ScrollGridBox.SetScrollbarPadding
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8d206e8
	// Params: [ Num(1) Size(0x10) ]
	void SetScrollbarPadding(const struct FMargin& InPadding);

	// Object: Function UMGToolKits.ScrollGridBox.SetRow
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d20644
	// Params: [ Num(1) Size(0x4) ]
	void SetRow(int32_t InRow);

	// Object: Function UMGToolKits.ScrollGridBox.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d2059c
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMGToolKits.ScrollGridBox.SetOverrideDragTriggerDistance
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d204f8
	// Params: [ Num(1) Size(0x4) ]
	void SetOverrideDragTriggerDistance(float InOverrideDragTriggerDistance);

	// Object: Function UMGToolKits.ScrollGridBox.SetOrientation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d20454
	// Params: [ Num(1) Size(0x1) ]
	void SetOrientation(EOrientation NewOrientation);

	// Object: Function UMGToolKits.ScrollGridBox.SetItemWidgetTemplateClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d203b0
	// Params: [ Num(1) Size(0x8) ]
	void SetItemWidgetTemplateClass(struct UUserWidget* InItemWidgetTemplateClass);

	// Object: Function UMGToolKits.ScrollGridBox.SetItemVisibility
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d2030c
	// Params: [ Num(1) Size(0x1) ]
	void SetItemVisibility(ESlateVisibility InItemVisibility);

	// Object: Function UMGToolKits.ScrollGridBox.SetItemSpacing
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8d2026c
	// Params: [ Num(1) Size(0x8) ]
	void SetItemSpacing(struct FVector2D InItemSpacing);

	// Object: Function UMGToolKits.ScrollGridBox.SetItemFixedSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8d201cc
	// Params: [ Num(1) Size(0x8) ]
	void SetItemFixedSize(struct FVector2D InItemFixedSize);

	// Object: Function UMGToolKits.ScrollGridBox.SetEnableTickEvent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d20120
	// Params: [ Num(1) Size(0x1) ]
	void SetEnableTickEvent(uint8_t bNewEnableTickEvent);

	// Object: Function UMGToolKits.ScrollGridBox.SetEnableDelayAddItems
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d20000
	// Params: [ Num(3) Size(0xC) ]
	void SetEnableDelayAddItems(uint8_t bNewEnableDelayAddItems, int32_t InAddItemsTimePerFrame, int32_t InAddItemsCountPerFrame);

	// Object: Function UMGToolKits.ScrollGridBox.SetEnableContentHint
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d1ff54
	// Params: [ Num(1) Size(0x1) ]
	void SetEnableContentHint(uint8_t bNewEnableContentHint);

	// Object: Function UMGToolKits.ScrollGridBox.SetEditorPreviewItemCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d1feb0
	// Params: [ Num(1) Size(0x4) ]
	void SetEditorPreviewItemCount(int32_t InEditorPreviewItemCount);

	// Object: Function UMGToolKits.ScrollGridBox.SetConsumeMouseWheel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d1fe0c
	// Params: [ Num(1) Size(0x1) ]
	void SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel);

	// Object: Function UMGToolKits.ScrollGridBox.SetColumn
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d1fd68
	// Params: [ Num(1) Size(0x4) ]
	void SetColumn(int32_t InColumn);

	// Object: Function UMGToolKits.ScrollGridBox.SetAlwaysShowScrollbar
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d1fcbc
	// Params: [ Num(1) Size(0x1) ]
	void SetAlwaysShowScrollbar(uint8_t NewAlwaysShowScrollbar);

	// Object: Function UMGToolKits.ScrollGridBox.SetAllowOverscroll
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d1fc10
	// Params: [ Num(1) Size(0x1) ]
	void SetAllowOverscroll(uint8_t NewAllowOverscroll);

	// Object: Function UMGToolKits.ScrollGridBox.ScrollToStart
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d1fadc
	// Params: [ Num(3) Size(0x8) ]
	void ScrollToStart(uint8_t bAnimateScroll, uint8_t bInterruptAnimateScroll, float AnimateSpeed);

	// Object: Function UMGToolKits.ScrollGridBox.ScrollToItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d1f8f0
	// Params: [ Num(6) Size(0x11) ]
	void ScrollToItem(int32_t ItemIndex, uint8_t bAnimateScroll, uint8_t bInterruptAnimateScroll, float AnimateSpeed, float ViewportFactor, uint8_t bIntoView);

	// Object: Function UMGToolKits.ScrollGridBox.ScrollToEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d1f7bc
	// Params: [ Num(3) Size(0x8) ]
	void ScrollToEnd(uint8_t bAnimateScroll, uint8_t bInterruptAnimateScroll, float AnimateSpeed);

	// Object: Function UMGToolKits.ScrollGridBox.RelinkTemplateWidget
	// Flags: [Final|Native|Public]
	// Offset: 0x8d1f710
	// Params: [ Num(1) Size(0x10) ]
	void RelinkTemplateWidget(struct FString Filename);

	// Object: Function UMGToolKits.ScrollGridBox.RefreshVisibleItemsNotReBuild
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d1f6fc
	// Params: [ Num(0) Size(0x0) ]
	void RefreshVisibleItemsNotReBuild();

	// Object: Function UMGToolKits.ScrollGridBox.RefreshVisibleItems
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d1f6e0
	// Params: [ Num(0) Size(0x0) ]
	void RefreshVisibleItems();

	// Object: Function UMGToolKits.ScrollGridBox.RefreshItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d1f63c
	// Params: [ Num(1) Size(0x4) ]
	void RefreshItem(int32_t ItemIndex);

	// Object: Function UMGToolKits.ScrollGridBox.RefreshAllItems
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xefeda90
	// Params: [ Num(0) Size(0x0) ]
	void RefreshAllItems();

	// Object: Function UMGToolKits.ScrollGridBox.IsDragging
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8d1f604
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsDragging();

	// Object: Function UMGToolKits.ScrollGridBox.GetVisibleItemCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8d1f5d0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetVisibleItemCount();

	// Object: Function UMGToolKits.ScrollGridBox.GetViewportSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8d1f59c
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetViewportSize();

	// Object: Function UMGToolKits.ScrollGridBox.GetViewOffsetFraction
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8d1f568
	// Params: [ Num(1) Size(0x4) ]
	float GetViewOffsetFraction();

	// Object: Function UMGToolKits.ScrollGridBox.GetScrollOffset
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8d1f534
	// Params: [ Num(1) Size(0x4) ]
	float GetScrollOffset();

	// Object: Function UMGToolKits.ScrollGridBox.GetPhysicalOffset
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8d1f500
	// Params: [ Num(1) Size(0x4) ]
	float GetPhysicalOffset();

	// Object: Function UMGToolKits.ScrollGridBox.GetLastVisibleItemIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8d1f4cc
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetLastVisibleItemIndex();

	// Object: Function UMGToolKits.ScrollGridBox.GetItemCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8d1f498
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetItemCount();

	// Object: Function UMGToolKits.ScrollGridBox.GetItemByIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d1f3ec
	// Params: [ Num(2) Size(0x10) ]
	struct UWidget* GetItemByIndex(int32_t ItemIndex);

	// Object: Function UMGToolKits.ScrollGridBox.GetIndexByItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d1f340
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetIndexByItem(struct UWidget* Item);

	// Object: Function UMGToolKits.ScrollGridBox.GetFirstVisibleItemIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8d1f30c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetFirstVisibleItemIndex();

	// Object: Function UMGToolKits.ScrollGridBox.GetDesiredContentSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8d1f2d8
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetDesiredContentSize();

	// Object: Function UMGToolKits.ScrollGridBox.GetContentHint
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8d1f1d8
	// Params: [ Num(2) Size(0x2) ]
	void GetContentHint(uint8_t& bHasTopOrLeftContent, uint8_t& bHasBottomOrRightContent);

	// Object: Function UMGToolKits.ScrollGridBox.GetCachedItemCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8d1f1a4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCachedItemCount();

	// Object: Function UMGToolKits.ScrollGridBox.EndInertialScrolling
	// Flags: [Final|Native|Public]
	// Offset: 0x8d1f190
	// Params: [ Num(0) Size(0x0) ]
	void EndInertialScrolling();
};

// Object: Class UMGToolKits.ScrollGridBoxSlot
// Size: 0x40 (Inherited: 0x38)
struct UScrollGridBoxSlot : UDynamicPanelSlot
{
	DEFINE_UE_CLASS_HELPERS(UScrollGridBoxSlot, "ScrollGridBoxSlot")

	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
};

} // namespace SDK
