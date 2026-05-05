#include "UMGToolKits.hpp"
#include "SlateCore.hpp"
#include "UMG.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UAsyncLoadUserWidget
void UAsyncLoadUserWidget::RemoveWidgetInstance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AsyncLoadUserWidget", "RemoveWidgetInstance");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UUserWidget* UAsyncLoadUserWidget::GetWidgetInstance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AsyncLoadUserWidget", "GetWidgetInstance");
    struct
    {
        struct UUserWidget* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAsyncLoadUserWidget::CancelAsyncLoading()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AsyncLoadUserWidget", "CancelAsyncLoading");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAsyncLoadUserWidget::BeginAsyncLoading()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AsyncLoadUserWidget", "BeginAsyncLoading");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UAsyncLoadUserWidgetSubsystem
struct UAsyncLoadUserWidgetSubsystem* UAsyncLoadUserWidgetSubsystem::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AsyncLoadUserWidgetSubsystem", "Get");
    struct
    {
        struct UAsyncLoadUserWidgetSubsystem* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UComputeTextBlock
void UComputeTextBlock::SetPlayAnim(uint8_t bInPlayAnim)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ComputeTextBlock", "SetPlayAnim");
    struct
    {
        uint8_t bInPlayAnim;
    } Parms{};
    Parms.bInPlayAnim = (uint8_t)bInPlayAnim;
    this->ProcessEvent(Func, &Parms);
}

void UComputeTextBlock::PlayAnimToEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ComputeTextBlock", "PlayAnimToEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UComputeTextBlock::PlayAnim_ComputeTextBlock()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ComputeTextBlock", "PlayAnim_ComputeTextBlock");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UPreviewUserWidget
void UPreviewUserWidget::SynchronizePropertiesForGame()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PreviewUserWidget", "SynchronizePropertiesForGame");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPreviewUserWidget::SynchronizePropertiesForEditor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PreviewUserWidget", "SynchronizePropertiesForEditor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UPrintTextBlock
void UPrintTextBlock::SetUseUTF8(uint8_t bUse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PrintTextBlock", "SetUseUTF8");
    struct
    {
        uint8_t bUse;
    } Parms{};
    Parms.bUse = (uint8_t)bUse;
    this->ProcessEvent(Func, &Parms);
}

void UPrintTextBlock::SetTimeStep(float TimeStep)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PrintTextBlock", "SetTimeStep");
    struct
    {
        float TimeStep;
    } Parms{};
    Parms.TimeStep = (float)TimeStep;
    this->ProcessEvent(Func, &Parms);
}

void UPrintTextBlock::SetPlayAnim(uint8_t bInPlayAnim)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PrintTextBlock", "SetPlayAnim");
    struct
    {
        uint8_t bInPlayAnim;
    } Parms{};
    Parms.bInPlayAnim = (uint8_t)bInPlayAnim;
    this->ProcessEvent(Func, &Parms);
}

void UPrintTextBlock::PlayAnimToEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PrintTextBlock", "PlayAnimToEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPrintTextBlock::PlayAnim_ComputeTextBlock()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PrintTextBlock", "PlayAnim_ComputeTextBlock");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPrintTextBlock::Clear()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PrintTextBlock", "Clear");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UScrollGridBox
void UScrollGridBox::UpdateAllItemSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "UpdateAllItemSize");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UScrollGridBox::SetScrollOffset(float NewScrollOffset, uint8_t bAnimateScroll, uint8_t bInterruptAnimateScroll, float AnimateSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "SetScrollOffset");
    struct
    {
        float NewScrollOffset;
        uint8_t bAnimateScroll;
        uint8_t bInterruptAnimateScroll;
        float AnimateSpeed;
    } Parms{};
    Parms.NewScrollOffset = (float)NewScrollOffset;
    Parms.bAnimateScroll = (uint8_t)bAnimateScroll;
    Parms.bInterruptAnimateScroll = (uint8_t)bInterruptAnimateScroll;
    Parms.AnimateSpeed = (float)AnimateSpeed;
    this->ProcessEvent(Func, &Parms);
}

void UScrollGridBox::SetScrollBarVisibility(ESlateVisibility NewScrollBarVisibility)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "SetScrollBarVisibility");
    struct
    {
        enum ESlateVisibility NewScrollBarVisibility;
    } Parms{};
    Parms.NewScrollBarVisibility = (enum ESlateVisibility)NewScrollBarVisibility;
    this->ProcessEvent(Func, &Parms);
}

void UScrollGridBox::SetScrollbarThickness(const struct FVector2D& NewScrollbarThickness)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "SetScrollbarThickness");
    struct
    {
        struct FVector2D NewScrollbarThickness;
    } Parms{};
    Parms.NewScrollbarThickness = (struct FVector2D)NewScrollbarThickness;
    this->ProcessEvent(Func, &Parms);
}

void UScrollGridBox::SetScrollbarPadding(const struct FMargin& InPadding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "SetScrollbarPadding");
    struct
    {
        struct FMargin InPadding;
    } Parms{};
    Parms.InPadding = (struct FMargin)InPadding;
    this->ProcessEvent(Func, &Parms);
}

void UScrollGridBox::SetRow(int32_t InRow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "SetRow");
    struct
    {
        int32_t InRow;
    } Parms{};
    Parms.InRow = (int32_t)InRow;
    this->ProcessEvent(Func, &Parms);
}

void UScrollGridBox::SetPadding(struct FMargin InPadding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "SetPadding");
    struct
    {
        struct FMargin InPadding;
    } Parms{};
    Parms.InPadding = (struct FMargin)InPadding;
    this->ProcessEvent(Func, &Parms);
}

void UScrollGridBox::SetOverrideDragTriggerDistance(float InOverrideDragTriggerDistance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "SetOverrideDragTriggerDistance");
    struct
    {
        float InOverrideDragTriggerDistance;
    } Parms{};
    Parms.InOverrideDragTriggerDistance = (float)InOverrideDragTriggerDistance;
    this->ProcessEvent(Func, &Parms);
}

void UScrollGridBox::SetOrientation(EOrientation NewOrientation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "SetOrientation");
    struct
    {
        enum EOrientation NewOrientation;
    } Parms{};
    Parms.NewOrientation = (enum EOrientation)NewOrientation;
    this->ProcessEvent(Func, &Parms);
}

void UScrollGridBox::SetItemWidgetTemplateClass(struct UUserWidget* InItemWidgetTemplateClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "SetItemWidgetTemplateClass");
    struct
    {
        struct UUserWidget* InItemWidgetTemplateClass;
    } Parms{};
    Parms.InItemWidgetTemplateClass = (struct UUserWidget*)InItemWidgetTemplateClass;
    this->ProcessEvent(Func, &Parms);
}

void UScrollGridBox::SetItemVisibility(ESlateVisibility InItemVisibility)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "SetItemVisibility");
    struct
    {
        enum ESlateVisibility InItemVisibility;
    } Parms{};
    Parms.InItemVisibility = (enum ESlateVisibility)InItemVisibility;
    this->ProcessEvent(Func, &Parms);
}

void UScrollGridBox::SetItemSpacing(struct FVector2D InItemSpacing)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "SetItemSpacing");
    struct
    {
        struct FVector2D InItemSpacing;
    } Parms{};
    Parms.InItemSpacing = (struct FVector2D)InItemSpacing;
    this->ProcessEvent(Func, &Parms);
}

void UScrollGridBox::SetItemFixedSize(struct FVector2D InItemFixedSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "SetItemFixedSize");
    struct
    {
        struct FVector2D InItemFixedSize;
    } Parms{};
    Parms.InItemFixedSize = (struct FVector2D)InItemFixedSize;
    this->ProcessEvent(Func, &Parms);
}

void UScrollGridBox::SetEnableTickEvent(uint8_t bNewEnableTickEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "SetEnableTickEvent");
    struct
    {
        uint8_t bNewEnableTickEvent;
    } Parms{};
    Parms.bNewEnableTickEvent = (uint8_t)bNewEnableTickEvent;
    this->ProcessEvent(Func, &Parms);
}

void UScrollGridBox::SetEnableDelayAddItems(uint8_t bNewEnableDelayAddItems, int32_t InAddItemsTimePerFrame, int32_t InAddItemsCountPerFrame)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "SetEnableDelayAddItems");
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

void UScrollGridBox::SetEnableContentHint(uint8_t bNewEnableContentHint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "SetEnableContentHint");
    struct
    {
        uint8_t bNewEnableContentHint;
    } Parms{};
    Parms.bNewEnableContentHint = (uint8_t)bNewEnableContentHint;
    this->ProcessEvent(Func, &Parms);
}

void UScrollGridBox::SetEditorPreviewItemCount(int32_t InEditorPreviewItemCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "SetEditorPreviewItemCount");
    struct
    {
        int32_t InEditorPreviewItemCount;
    } Parms{};
    Parms.InEditorPreviewItemCount = (int32_t)InEditorPreviewItemCount;
    this->ProcessEvent(Func, &Parms);
}

void UScrollGridBox::SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "SetConsumeMouseWheel");
    struct
    {
        enum EConsumeMouseWheel NewConsumeMouseWheel;
    } Parms{};
    Parms.NewConsumeMouseWheel = (enum EConsumeMouseWheel)NewConsumeMouseWheel;
    this->ProcessEvent(Func, &Parms);
}

void UScrollGridBox::SetColumn(int32_t InColumn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "SetColumn");
    struct
    {
        int32_t InColumn;
    } Parms{};
    Parms.InColumn = (int32_t)InColumn;
    this->ProcessEvent(Func, &Parms);
}

void UScrollGridBox::SetAlwaysShowScrollbar(uint8_t NewAlwaysShowScrollbar)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "SetAlwaysShowScrollbar");
    struct
    {
        uint8_t NewAlwaysShowScrollbar;
    } Parms{};
    Parms.NewAlwaysShowScrollbar = (uint8_t)NewAlwaysShowScrollbar;
    this->ProcessEvent(Func, &Parms);
}

void UScrollGridBox::SetAllowOverscroll(uint8_t NewAllowOverscroll)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "SetAllowOverscroll");
    struct
    {
        uint8_t NewAllowOverscroll;
    } Parms{};
    Parms.NewAllowOverscroll = (uint8_t)NewAllowOverscroll;
    this->ProcessEvent(Func, &Parms);
}

void UScrollGridBox::ScrollToStart(uint8_t bAnimateScroll, uint8_t bInterruptAnimateScroll, float AnimateSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "ScrollToStart");
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

void UScrollGridBox::ScrollToItem(int32_t ItemIndex, uint8_t bAnimateScroll, uint8_t bInterruptAnimateScroll, float AnimateSpeed, float ViewportFactor, uint8_t bIntoView)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "ScrollToItem");
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

void UScrollGridBox::ScrollToEnd(uint8_t bAnimateScroll, uint8_t bInterruptAnimateScroll, float AnimateSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "ScrollToEnd");
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

void UScrollGridBox::RelinkTemplateWidget(struct FString Filename)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "RelinkTemplateWidget");
    struct
    {
        struct FString Filename;
    } Parms{};
    Parms.Filename = (struct FString)Filename;
    this->ProcessEvent(Func, &Parms);
}

void UScrollGridBox::RefreshVisibleItemsNotReBuild()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "RefreshVisibleItemsNotReBuild");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UScrollGridBox::RefreshVisibleItems()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "RefreshVisibleItems");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UScrollGridBox::RefreshItem(int32_t ItemIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "RefreshItem");
    struct
    {
        int32_t ItemIndex;
    } Parms{};
    Parms.ItemIndex = (int32_t)ItemIndex;
    this->ProcessEvent(Func, &Parms);
}

void UScrollGridBox::RefreshAllItems()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "RefreshAllItems");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UScrollGridBox::IsDragging()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "IsDragging");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UScrollGridBox::GetVisibleItemCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "GetVisibleItemCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UScrollGridBox::GetViewportSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "GetViewportSize");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UScrollGridBox::GetViewOffsetFraction()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "GetViewOffsetFraction");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UScrollGridBox::GetScrollOffset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "GetScrollOffset");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UScrollGridBox::GetPhysicalOffset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "GetPhysicalOffset");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UScrollGridBox::GetLastVisibleItemIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "GetLastVisibleItemIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UScrollGridBox::GetItemCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "GetItemCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWidget* UScrollGridBox::GetItemByIndex(int32_t ItemIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "GetItemByIndex");
    struct
    {
        int32_t ItemIndex;
        struct UWidget* ReturnValue;
    } Parms{};
    Parms.ItemIndex = (int32_t)ItemIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UScrollGridBox::GetIndexByItem(struct UWidget* Item)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "GetIndexByItem");
    struct
    {
        struct UWidget* Item;
        int32_t ReturnValue;
    } Parms{};
    Parms.Item = (struct UWidget*)Item;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UScrollGridBox::GetFirstVisibleItemIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "GetFirstVisibleItemIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UScrollGridBox::GetDesiredContentSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "GetDesiredContentSize");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UScrollGridBox::GetContentHint(uint8_t& bHasTopOrLeftContent, uint8_t& bHasBottomOrRightContent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "GetContentHint");
    struct
    {
        uint8_t bHasTopOrLeftContent;
        uint8_t bHasBottomOrRightContent;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    bHasTopOrLeftContent = Parms.bHasTopOrLeftContent;
    bHasBottomOrRightContent = Parms.bHasBottomOrRightContent;
}

int32_t UScrollGridBox::GetCachedItemCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "GetCachedItemCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UScrollGridBox::EndInertialScrolling()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollGridBox", "EndInertialScrolling");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
