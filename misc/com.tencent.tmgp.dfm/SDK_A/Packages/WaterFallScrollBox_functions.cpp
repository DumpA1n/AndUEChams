#include "WaterFallScrollBox.hpp"
#include "Slate.hpp"
#include "SlateCore.hpp"
#include "UMG.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UWaterfallScrollView::* ----
void UWaterfallScrollView::TriggerViewportSizeChange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "TriggerViewportSizeChange");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::SetScrollOffsetV2(float NewScrollOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "SetScrollOffsetV2");
    struct
    {
        float NewScrollOffset;
    } Parms{};
    Parms.NewScrollOffset = (float)NewScrollOffset;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::SetScrollOffset(float NewScrollOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "SetScrollOffset");
    struct
    {
        float NewScrollOffset;
    } Parms{};
    Parms.NewScrollOffset = (float)NewScrollOffset;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::SetScrollBarVisibility(ESlateVisibility NewScrollBarVisibility)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "SetScrollBarVisibility");
    struct
    {
        enum ESlateVisibility NewScrollBarVisibility;
    } Parms{};
    Parms.NewScrollBarVisibility = (enum ESlateVisibility)NewScrollBarVisibility;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::SetOrientation(EOrientation NewOrientation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "SetOrientation");
    struct
    {
        enum EOrientation NewOrientation;
    } Parms{};
    Parms.NewOrientation = (enum EOrientation)NewOrientation;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::SetItemSpacing(struct FVector2D InItemSpacing)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "SetItemSpacing");
    struct
    {
        struct FVector2D InItemSpacing;
    } Parms{};
    Parms.InItemSpacing = (struct FVector2D)InItemSpacing;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::SetEnableDelayAddItems(uint8_t bNewEnableDelayAddItems, int32_t InAddItemsTimePerFrame, int32_t InAddItemsCountPerFrame)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "SetEnableDelayAddItems");
    struct
    {
        uint8_t bNewEnableDelayAddItems;
        int32_t InAddItemsTimePerFrame;
        int32_t InAddItemsCountPerFrame;
    } Parms{};
    Parms.bNewEnableDelayAddItems = (uint8_t)bNewEnableDelayAddItems;
    Parms.InAddItemsTimePerFrame = (int32_t)InAddItemsTimePerFrame;
    Parms.InAddItemsCountPerFrame = (int32_t)InAddItemsCountPerFrame;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::SetEditorPreviewItemCount(int32_t InEditorPreviewItemCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "SetEditorPreviewItemCount");
    struct
    {
        int32_t InEditorPreviewItemCount;
    } Parms{};
    Parms.InEditorPreviewItemCount = (int32_t)InEditorPreviewItemCount;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "SetConsumeMouseWheel");
    struct
    {
        enum EConsumeMouseWheel NewConsumeMouseWheel;
    } Parms{};
    Parms.NewConsumeMouseWheel = (enum EConsumeMouseWheel)NewConsumeMouseWheel;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::SetAutoSizeContainerMaxValue(float MaxValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "SetAutoSizeContainerMaxValue");
    struct
    {
        float MaxValue;
    } Parms{};
    Parms.MaxValue = (float)MaxValue;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::SetAlwaysShowScrollbar(uint8_t bAlwaysShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "SetAlwaysShowScrollbar");
    struct
    {
        uint8_t bAlwaysShow;
    } Parms{};
    Parms.bAlwaysShow = (uint8_t)bAlwaysShow;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::ScrollWidgetIntoView(struct UWidget* WidgetToFind, uint8_t AnimateScroll, EDescendantScrollDestination ScrollDestination)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "ScrollWidgetIntoView");
    struct
    {
        struct UWidget* WidgetToFind;
        uint8_t AnimateScroll;
        enum EDescendantScrollDestination ScrollDestination;
    } Parms{};
    Parms.WidgetToFind = (struct UWidget*)WidgetToFind;
    Parms.AnimateScroll = (uint8_t)AnimateScroll;
    Parms.ScrollDestination = (enum EDescendantScrollDestination)ScrollDestination;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::ScrollToStartByParam(uint8_t bAnimateScroll, uint8_t bInterruptAnimateScroll, float AnimateSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "ScrollToStartByParam");
    struct
    {
        uint8_t bAnimateScroll;
        uint8_t bInterruptAnimateScroll;
        float AnimateSpeed;
    } Parms{};
    Parms.bAnimateScroll = (uint8_t)bAnimateScroll;
    Parms.bInterruptAnimateScroll = (uint8_t)bInterruptAnimateScroll;
    Parms.AnimateSpeed = (float)AnimateSpeed;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::ScrollToStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "ScrollToStart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::ScrollToItem(int32_t ItemIndex, uint8_t bAnimateScroll, uint8_t bInterruptAnimateScroll, float AnimateSpeed, float ViewportFactor, uint8_t bIntoView)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "ScrollToItem");
    struct
    {
        int32_t ItemIndex;
        uint8_t bAnimateScroll;
        uint8_t bInterruptAnimateScroll;
        float AnimateSpeed;
        float ViewportFactor;
        uint8_t bIntoView;
    } Parms{};
    Parms.ItemIndex = (int32_t)ItemIndex;
    Parms.bAnimateScroll = (uint8_t)bAnimateScroll;
    Parms.bInterruptAnimateScroll = (uint8_t)bInterruptAnimateScroll;
    Parms.AnimateSpeed = (float)AnimateSpeed;
    Parms.ViewportFactor = (float)ViewportFactor;
    Parms.bIntoView = (uint8_t)bIntoView;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::ScrollToIndexToScreen(int32_t Index, float ScreenRatio, float ItemRatio)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "ScrollToIndexToScreen");
    struct
    {
        int32_t Index;
        float ScreenRatio;
        float ItemRatio;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.ScreenRatio = (float)ScreenRatio;
    Parms.ItemRatio = (float)ItemRatio;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::ScrollToIndexIfNotInScreen(int32_t Index, uint8_t bNeedAllInScreen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "ScrollToIndexIfNotInScreen");
    struct
    {
        int32_t Index;
        uint8_t bNeedAllInScreen;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.bNeedAllInScreen = (uint8_t)bNeedAllInScreen;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::ScrollToIndex(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "ScrollToIndex");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::ScrollToEndByIndex(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "ScrollToEndByIndex");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::ScrollToEnd(uint8_t bAnimateScroll, uint8_t bInterruptAnimateScroll, float AnimateSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "ScrollToEnd");
    struct
    {
        uint8_t bAnimateScroll;
        uint8_t bInterruptAnimateScroll;
        float AnimateSpeed;
    } Parms{};
    Parms.bAnimateScroll = (uint8_t)bAnimateScroll;
    Parms.bInterruptAnimateScroll = (uint8_t)bInterruptAnimateScroll;
    Parms.AnimateSpeed = (float)AnimateSpeed;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::SafeScrollToIndex(float offset, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "SafeScrollToIndex");
    struct
    {
        float offset;
        int32_t Index;
    } Parms{};
    Parms.offset = (float)offset;
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::RelinkTemplateWidget(struct FString Filename)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "RelinkTemplateWidget");
    struct
    {
        struct FString Filename;
    } Parms{};
    Parms.Filename = (struct FString)Filename;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::RefreshVisibleItemSizeAndPos()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "RefreshVisibleItemSizeAndPos");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::RefreshVisibleItems()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "RefreshVisibleItems");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::RefreshVisibleItem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "RefreshVisibleItem");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::RefreshItemCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "RefreshItemCount");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::RefreshItem(int32_t ItemIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "RefreshItem");
    struct
    {
        int32_t ItemIndex;
    } Parms{};
    Parms.ItemIndex = (int32_t)ItemIndex;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::RefreshAllItems()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "RefreshAllItems");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::RecycleAllItem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "RecycleAllItem");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::ProccessResetVisibleItem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "ProccessResetVisibleItem");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::OnProcessItemWidget__DelegateSignature(int32_t Position, struct UWidget* ItemWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "OnProcessItemWidget__DelegateSignature");
    struct
    {
        int32_t Position;
        struct UWidget* ItemWidget;
    } Parms{};
    Parms.Position = (int32_t)Position;
    Parms.ItemWidget = (struct UWidget*)ItemWidget;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::OnProcessItemsUpdateFinished__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "OnProcessItemsUpdateFinished__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FVector2D UWaterfallScrollView::OnGetItemSize__DelegateSignature(int32_t ItemPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "OnGetItemSize__DelegateSignature");
    struct
    {
        int32_t ItemPosition;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.ItemPosition = (int32_t)ItemPosition;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UWaterfallScrollView::OnGetItemCount__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "OnGetItemCount__DelegateSignature");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UWaterfallScrollView::OnBeforeCreateItem__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "OnBeforeCreateItem__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::OnAfterCreateItem__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "OnAfterCreateItem__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::NotifyContainerSizeChange(int32_t Index, float ScreenRatio, float ItemRatio)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "NotifyContainerSizeChange");
    struct
    {
        int32_t Index;
        float ScreenRatio;
        float ItemRatio;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.ScreenRatio = (float)ScreenRatio;
    Parms.ItemRatio = (float)ItemRatio;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UWaterfallScrollView::IsScrolling(float CurOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "IsScrolling");
    struct
    {
        float CurOffset;
        uint8_t ReturnValue;
    } Parms{};
    Parms.CurOffset = (float)CurOffset;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UWaterfallScrollView::GetVisibleItemCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "GetVisibleItemCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UWaterfallScrollView::GetScrollOffsetOfEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "GetScrollOffsetOfEnd");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UWaterfallScrollView::GetScrollOffset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "GetScrollOffset");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UWaterfallScrollView::GetLastVisibleItemIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "GetLastVisibleItemIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UWaterfallScrollView::GetLastVisibleIdx(int32_t Column)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "GetLastVisibleIdx");
    struct
    {
        int32_t Column;
        int32_t ReturnValue;
    } Parms{};
    Parms.Column = (int32_t)Column;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UWaterfallScrollView::GetItemCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "GetItemCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWidget* UWaterfallScrollView::GetItemByIndex(int32_t ItemIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "GetItemByIndex");
    struct
    {
        int32_t ItemIndex;
        struct UWidget* ReturnValue;
    } Parms{};
    Parms.ItemIndex = (int32_t)ItemIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UWaterfallScrollView::GetIndexByItem(struct UWidget* Item)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "GetIndexByItem");
    struct
    {
        struct UWidget* Item;
        int32_t ReturnValue;
    } Parms{};
    Parms.Item = (struct UWidget*)Item;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UWaterfallScrollView::GetFirstVisibleItemIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "GetFirstVisibleItemIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UWaterfallScrollView::GetFirstVisibleIdx(int32_t Column)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "GetFirstVisibleIdx");
    struct
    {
        int32_t Column;
        int32_t ReturnValue;
    } Parms{};
    Parms.Column = (int32_t)Column;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UWaterfallScrollView::ForceSetScrollBarVisible(uint8_t bVisible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "ForceSetScrollBarVisible");
    struct
    {
        uint8_t bVisible;
    } Parms{};
    Parms.bVisible = (uint8_t)bVisible;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::ForceSetBottomBoundary(float InBottomBoundary)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "ForceSetBottomBoundary");
    struct
    {
        float InBottomBoundary;
    } Parms{};
    Parms.InBottomBoundary = (float)InBottomBoundary;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::EndInertialScrolling()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "EndInertialScrolling");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::DeleteDelayTimerHandle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "DeleteDelayTimerHandle");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::Clear()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "Clear");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UWaterfallScrollViewV2::* ----
void UWaterfallScrollViewV2::TriggerViewportSizeChange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "TriggerViewportSizeChange");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::SetScrollOffsetV2(float NewScrollOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "SetScrollOffsetV2");
    struct
    {
        float NewScrollOffset;
    } Parms{};
    Parms.NewScrollOffset = (float)NewScrollOffset;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::SetScrollOffset(float NewScrollOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "SetScrollOffset");
    struct
    {
        float NewScrollOffset;
    } Parms{};
    Parms.NewScrollOffset = (float)NewScrollOffset;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::SetScrollBarVisibility(ESlateVisibility NewScrollBarVisibility)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "SetScrollBarVisibility");
    struct
    {
        enum ESlateVisibility NewScrollBarVisibility;
    } Parms{};
    Parms.NewScrollBarVisibility = (enum ESlateVisibility)NewScrollBarVisibility;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::SetOrientation(EOrientation NewOrientation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "SetOrientation");
    struct
    {
        enum EOrientation NewOrientation;
    } Parms{};
    Parms.NewOrientation = (enum EOrientation)NewOrientation;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::SetItemSpacing(struct FVector2D InItemSpacing)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "SetItemSpacing");
    struct
    {
        struct FVector2D InItemSpacing;
    } Parms{};
    Parms.InItemSpacing = (struct FVector2D)InItemSpacing;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::SetEnableDelayAddItems(uint8_t bNewEnableDelayAddItems, int32_t InAddItemsTimePerFrame, int32_t InAddItemsCountPerFrame)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "SetEnableDelayAddItems");
    struct
    {
        uint8_t bNewEnableDelayAddItems;
        int32_t InAddItemsTimePerFrame;
        int32_t InAddItemsCountPerFrame;
    } Parms{};
    Parms.bNewEnableDelayAddItems = (uint8_t)bNewEnableDelayAddItems;
    Parms.InAddItemsTimePerFrame = (int32_t)InAddItemsTimePerFrame;
    Parms.InAddItemsCountPerFrame = (int32_t)InAddItemsCountPerFrame;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::SetEditorPreviewItemCount(int32_t InEditorPreviewItemCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "SetEditorPreviewItemCount");
    struct
    {
        int32_t InEditorPreviewItemCount;
    } Parms{};
    Parms.InEditorPreviewItemCount = (int32_t)InEditorPreviewItemCount;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "SetConsumeMouseWheel");
    struct
    {
        enum EConsumeMouseWheel NewConsumeMouseWheel;
    } Parms{};
    Parms.NewConsumeMouseWheel = (enum EConsumeMouseWheel)NewConsumeMouseWheel;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::SetAutoSizeContainerMaxValue(float MaxValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "SetAutoSizeContainerMaxValue");
    struct
    {
        float MaxValue;
    } Parms{};
    Parms.MaxValue = (float)MaxValue;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::SetAlwaysShowScrollbar(uint8_t bAlwaysShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "SetAlwaysShowScrollbar");
    struct
    {
        uint8_t bAlwaysShow;
    } Parms{};
    Parms.bAlwaysShow = (uint8_t)bAlwaysShow;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::ScrollWidgetIntoView(struct UWidget* WidgetToFind, uint8_t AnimateScroll, EDescendantScrollDestination ScrollDestination)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "ScrollWidgetIntoView");
    struct
    {
        struct UWidget* WidgetToFind;
        uint8_t AnimateScroll;
        enum EDescendantScrollDestination ScrollDestination;
    } Parms{};
    Parms.WidgetToFind = (struct UWidget*)WidgetToFind;
    Parms.AnimateScroll = (uint8_t)AnimateScroll;
    Parms.ScrollDestination = (enum EDescendantScrollDestination)ScrollDestination;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::ScrollToStartByParam(uint8_t bAnimateScroll, uint8_t bInterruptAnimateScroll, float AnimateSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "ScrollToStartByParam");
    struct
    {
        uint8_t bAnimateScroll;
        uint8_t bInterruptAnimateScroll;
        float AnimateSpeed;
    } Parms{};
    Parms.bAnimateScroll = (uint8_t)bAnimateScroll;
    Parms.bInterruptAnimateScroll = (uint8_t)bInterruptAnimateScroll;
    Parms.AnimateSpeed = (float)AnimateSpeed;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::ScrollToStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "ScrollToStart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::ScrollToItem(int32_t ItemIndex, uint8_t bAnimateScroll, uint8_t bInterruptAnimateScroll, float AnimateSpeed, float ViewportFactor, uint8_t bIntoView)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "ScrollToItem");
    struct
    {
        int32_t ItemIndex;
        uint8_t bAnimateScroll;
        uint8_t bInterruptAnimateScroll;
        float AnimateSpeed;
        float ViewportFactor;
        uint8_t bIntoView;
    } Parms{};
    Parms.ItemIndex = (int32_t)ItemIndex;
    Parms.bAnimateScroll = (uint8_t)bAnimateScroll;
    Parms.bInterruptAnimateScroll = (uint8_t)bInterruptAnimateScroll;
    Parms.AnimateSpeed = (float)AnimateSpeed;
    Parms.ViewportFactor = (float)ViewportFactor;
    Parms.bIntoView = (uint8_t)bIntoView;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::ScrollToIndexToScreen(int32_t Index, float ScreenRatio, float ItemRatio)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "ScrollToIndexToScreen");
    struct
    {
        int32_t Index;
        float ScreenRatio;
        float ItemRatio;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.ScreenRatio = (float)ScreenRatio;
    Parms.ItemRatio = (float)ItemRatio;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::ScrollToIndexIfNotInScreen(int32_t Index, uint8_t bNeedAllInScreen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "ScrollToIndexIfNotInScreen");
    struct
    {
        int32_t Index;
        uint8_t bNeedAllInScreen;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.bNeedAllInScreen = (uint8_t)bNeedAllInScreen;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::ScrollToIndex(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "ScrollToIndex");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::ScrollToEndByIndex(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "ScrollToEndByIndex");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::ScrollToEnd(uint8_t bAnimateScroll, uint8_t bInterruptAnimateScroll, float AnimateSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "ScrollToEnd");
    struct
    {
        uint8_t bAnimateScroll;
        uint8_t bInterruptAnimateScroll;
        float AnimateSpeed;
    } Parms{};
    Parms.bAnimateScroll = (uint8_t)bAnimateScroll;
    Parms.bInterruptAnimateScroll = (uint8_t)bInterruptAnimateScroll;
    Parms.AnimateSpeed = (float)AnimateSpeed;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::SafeScrollToIndex(float offset, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "SafeScrollToIndex");
    struct
    {
        float offset;
        int32_t Index;
    } Parms{};
    Parms.offset = (float)offset;
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::RelinkTemplateWidget(struct FString Filename)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "RelinkTemplateWidget");
    struct
    {
        struct FString Filename;
    } Parms{};
    Parms.Filename = (struct FString)Filename;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::RefreshVisibleItemSizeAndPos()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "RefreshVisibleItemSizeAndPos");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::RefreshVisibleItems()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "RefreshVisibleItems");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::RefreshVisibleItem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "RefreshVisibleItem");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::RefreshItemCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "RefreshItemCount");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::RefreshItem(int32_t ItemIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "RefreshItem");
    struct
    {
        int32_t ItemIndex;
    } Parms{};
    Parms.ItemIndex = (int32_t)ItemIndex;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::RefreshAllItems()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "RefreshAllItems");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::RecycleAllItem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "RecycleAllItem");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::RebuildFromAnchor(int32_t AnchorIndex_1Base, int32_t ContainerExtentMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "RebuildFromAnchor");
    struct
    {
        int32_t AnchorIndex_1Base;
        int32_t ContainerExtentMode;
    } Parms{};
    Parms.AnchorIndex_1Base = (int32_t)AnchorIndex_1Base;
    Parms.ContainerExtentMode = (int32_t)ContainerExtentMode;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::ProccessResetVisibleItem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "ProccessResetVisibleItem");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::OnProcessItemWidgetV2__DelegateSignature(int32_t Position, struct UWidget* ItemWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "OnProcessItemWidgetV2__DelegateSignature");
    struct
    {
        int32_t Position;
        struct UWidget* ItemWidget;
    } Parms{};
    Parms.Position = (int32_t)Position;
    Parms.ItemWidget = (struct UWidget*)ItemWidget;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::OnProcessItemsUpdateFinishedV2__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "OnProcessItemsUpdateFinishedV2__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FVector2D UWaterfallScrollViewV2::OnGetItemSizeV2__DelegateSignature(int32_t ItemPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "OnGetItemSizeV2__DelegateSignature");
    struct
    {
        int32_t ItemPosition;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.ItemPosition = (int32_t)ItemPosition;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UWaterfallScrollViewV2::OnGetItemCountV2__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "OnGetItemCountV2__DelegateSignature");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UWaterfallScrollViewV2::OnBeforeCreateItemV2__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "OnBeforeCreateItemV2__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::OnAfterCreateItemV2__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "OnAfterCreateItemV2__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::NotifyContainerSizeChange(int32_t Index, float ScreenRatio, float ItemRatio)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "NotifyContainerSizeChange");
    struct
    {
        int32_t Index;
        float ScreenRatio;
        float ItemRatio;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.ScreenRatio = (float)ScreenRatio;
    Parms.ItemRatio = (float)ItemRatio;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UWaterfallScrollViewV2::IsScrolling(float CurOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "IsScrolling");
    struct
    {
        float CurOffset;
        uint8_t ReturnValue;
    } Parms{};
    Parms.CurOffset = (float)CurOffset;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UWaterfallScrollViewV2::Internal_DumpState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "Internal_DumpState");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UWaterfallScrollViewV2::GetVisibleItemCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "GetVisibleItemCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UWaterfallScrollViewV2::GetScrollOffsetOfEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "GetScrollOffsetOfEnd");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UWaterfallScrollViewV2::GetScrollOffset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "GetScrollOffset");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UWaterfallScrollViewV2::GetLastVisibleItemIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "GetLastVisibleItemIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UWaterfallScrollViewV2::GetLastVisibleIdx(int32_t Column)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "GetLastVisibleIdx");
    struct
    {
        int32_t Column;
        int32_t ReturnValue;
    } Parms{};
    Parms.Column = (int32_t)Column;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UWaterfallScrollViewV2::GetItemCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "GetItemCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWidget* UWaterfallScrollViewV2::GetItemByIndex(int32_t ItemIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "GetItemByIndex");
    struct
    {
        int32_t ItemIndex;
        struct UWidget* ReturnValue;
    } Parms{};
    Parms.ItemIndex = (int32_t)ItemIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UWaterfallScrollViewV2::GetIndexByItem(struct UWidget* Item)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "GetIndexByItem");
    struct
    {
        struct UWidget* Item;
        int32_t ReturnValue;
    } Parms{};
    Parms.Item = (struct UWidget*)Item;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UWaterfallScrollViewV2::GetFirstVisibleItemIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "GetFirstVisibleItemIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UWaterfallScrollViewV2::GetFirstVisibleIdx(int32_t Column)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "GetFirstVisibleIdx");
    struct
    {
        int32_t Column;
        int32_t ReturnValue;
    } Parms{};
    Parms.Column = (int32_t)Column;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UWaterfallScrollViewV2::ForceSetScrollBarVisible(uint8_t bVisible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "ForceSetScrollBarVisible");
    struct
    {
        uint8_t bVisible;
    } Parms{};
    Parms.bVisible = (uint8_t)bVisible;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::ForceSetBottomBoundary(float InBottomBoundary)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "ForceSetBottomBoundary");
    struct
    {
        float InBottomBoundary;
    } Parms{};
    Parms.InBottomBoundary = (float)InBottomBoundary;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::EndInertialScrolling()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "EndInertialScrolling");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::DeleteDelayTimerHandle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "DeleteDelayTimerHandle");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollViewV2::Clear()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollViewV2", "Clear");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
