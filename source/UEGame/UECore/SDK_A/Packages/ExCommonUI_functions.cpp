#include "ExCommonUI.hpp"
#include "Engine.hpp"
#include "MediaAssets.hpp"
#include "SlateCore.hpp"
#include "UMG.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UExCommonAnimatedSwitcher
void UExCommonAnimatedSwitcher::SetDisableTransitionAnimation(uint8_t bDisableAnimation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonAnimatedSwitcher", "SetDisableTransitionAnimation");
    struct
    {
        uint8_t bDisableAnimation;
    } Parms{};
    Parms.bDisableAnimation = (uint8_t)bDisableAnimation;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UExCommonAnimatedSwitcher::HasWidgets()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonAnimatedSwitcher", "HasWidgets");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UExCommonAnimatedSwitcher::ActivatePreviousWidget(uint8_t bCanWrap)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonAnimatedSwitcher", "ActivatePreviousWidget");
    struct
    {
        uint8_t bCanWrap;
    } Parms{};
    Parms.bCanWrap = (uint8_t)bCanWrap;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonAnimatedSwitcher::ActivateNextWidget(uint8_t bCanWrap)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonAnimatedSwitcher", "ActivateNextWidget");
    struct
    {
        uint8_t bCanWrap;
    } Parms{};
    Parms.bCanWrap = (uint8_t)bCanWrap;
    this->ProcessEvent(Func, &Parms);
}

// UExCommonBorderStyle
void UExCommonBorderStyle::GetBackgroundBrush(struct FSlateBrush& Brush)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonBorderStyle", "GetBackgroundBrush");
    struct
    {
        struct FSlateBrush Brush;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Brush = Parms.Brush;
}

// UExCommonBorder
void UExCommonBorder::SetStyle(struct UExCommonBorderStyle* InStyle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonBorder", "SetStyle");
    struct
    {
        struct UExCommonBorderStyle* InStyle;
    } Parms{};
    Parms.InStyle = (struct UExCommonBorderStyle*)InStyle;
    this->ProcessEvent(Func, &Parms);
}

// UExCommonCarouselNavBarPro
void UExCommonCarouselNavBarPro::SetLinkedCarousel(struct UExCommonWidgetCarouselProBase* CommonCarousel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonCarouselNavBarPro", "SetLinkedCarousel");
    struct
    {
        struct UExCommonWidgetCarouselProBase* CommonCarousel;
    } Parms{};
    Parms.CommonCarousel = (struct UExCommonWidgetCarouselProBase*)CommonCarousel;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonCarouselNavBarPro::OnNavBtnInitPro__DelegateSignature(struct UExCommonCarouselNavBarPro* CarouselNavBar, int32_t CurrentPageIndex, struct UExCommonCarouselNavButton* CarouselNavBtn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonCarouselNavBarPro", "OnNavBtnInitPro__DelegateSignature");
    struct
    {
        struct UExCommonCarouselNavBarPro* CarouselNavBar;
        int32_t CurrentPageIndex;
        struct UExCommonCarouselNavButton* CarouselNavBtn;
    } Parms{};
    Parms.CarouselNavBar = (struct UExCommonCarouselNavBarPro*)CarouselNavBar;
    Parms.CurrentPageIndex = (int32_t)CurrentPageIndex;
    Parms.CarouselNavBtn = (struct UExCommonCarouselNavButton*)CarouselNavBtn;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonCarouselNavBarPro::HandlePageChanged(struct UExCommonWidgetCarouselProBase* CommonCarousel, int32_t OldPageIndex, int32_t PageIndex, struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonCarouselNavBarPro", "HandlePageChanged");
    struct
    {
        struct UExCommonWidgetCarouselProBase* CommonCarousel;
        int32_t OldPageIndex;
        int32_t PageIndex;
        struct UWidget* Widget;
    } Parms{};
    Parms.CommonCarousel = (struct UExCommonWidgetCarouselProBase*)CommonCarousel;
    Parms.OldPageIndex = (int32_t)OldPageIndex;
    Parms.PageIndex = (int32_t)PageIndex;
    Parms.Widget = (struct UWidget*)Widget;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonCarouselNavBarPro::HandleDragging(struct UExCommonWidgetCarouselProBase* CommonCarousel, int32_t OldPageIndex, int32_t PageIndex, struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonCarouselNavBarPro", "HandleDragging");
    struct
    {
        struct UExCommonWidgetCarouselProBase* CommonCarousel;
        int32_t OldPageIndex;
        int32_t PageIndex;
        struct UWidget* Widget;
    } Parms{};
    Parms.CommonCarousel = (struct UExCommonWidgetCarouselProBase*)CommonCarousel;
    Parms.OldPageIndex = (int32_t)OldPageIndex;
    Parms.PageIndex = (int32_t)PageIndex;
    Parms.Widget = (struct UWidget*)Widget;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonCarouselNavBarPro::HandleButtonSelected(struct UExCommonCarouselNavButton* AssociatedButton, int32_t ButtonIndex, uint8_t bIsSelect)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonCarouselNavBarPro", "HandleButtonSelected");
    struct
    {
        struct UExCommonCarouselNavButton* AssociatedButton;
        int32_t ButtonIndex;
        uint8_t bIsSelect;
    } Parms{};
    Parms.AssociatedButton = (struct UExCommonCarouselNavButton*)AssociatedButton;
    Parms.ButtonIndex = (int32_t)ButtonIndex;
    Parms.bIsSelect = (uint8_t)bIsSelect;
    this->ProcessEvent(Func, &Parms);
}

// UExCommonCarouselNavButton
void UExCommonCarouselNavButton::OnSetSelected(uint8_t bInSelected)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonCarouselNavButton", "OnSetSelected");
    struct
    {
        uint8_t bInSelected;
    } Parms{};
    Parms.bInSelected = (uint8_t)bInSelected;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonCarouselNavButton::OnSelectHandle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonCarouselNavButton", "OnSelectHandle");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UExCommonCarouselNavButton::OnCancelHandle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonCarouselNavButton", "OnCancelHandle");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UExCommonWidgetGroupBase
void UExCommonWidgetGroupBase::RemoveWidget(struct UWidget* InWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetGroupBase", "RemoveWidget");
    struct
    {
        struct UWidget* InWidget;
    } Parms{};
    Parms.InWidget = (struct UWidget*)InWidget;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonWidgetGroupBase::RemoveAll()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetGroupBase", "RemoveAll");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UExCommonWidgetGroupBase::AddWidget(struct UWidget* InWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetGroupBase", "AddWidget");
    struct
    {
        struct UWidget* InWidget;
    } Parms{};
    Parms.InWidget = (struct UWidget*)InWidget;
    this->ProcessEvent(Func, &Parms);
}

// UExCommonCarouselNavButtonGroup
void UExCommonCarouselNavButtonGroup::SelectPreviousButton(uint8_t bAllowWrap)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonCarouselNavButtonGroup", "SelectPreviousButton");
    struct
    {
        uint8_t bAllowWrap;
    } Parms{};
    Parms.bAllowWrap = (uint8_t)bAllowWrap;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonCarouselNavButtonGroup::SelectNextButton(uint8_t bAllowWrap)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonCarouselNavButtonGroup", "SelectNextButton");
    struct
    {
        uint8_t bAllowWrap;
    } Parms{};
    Parms.bAllowWrap = (uint8_t)bAllowWrap;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonCarouselNavButtonGroup::SelectButtonAtIndex(int32_t ButtonIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonCarouselNavButtonGroup", "SelectButtonAtIndex");
    struct
    {
        int32_t ButtonIndex;
    } Parms{};
    Parms.ButtonIndex = (int32_t)ButtonIndex;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonCarouselNavButtonGroup::OnSelectionStateChanged(struct UExCommonCarouselNavButton* ButtonParam, uint8_t bIsSelected)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonCarouselNavButtonGroup", "OnSelectionStateChanged");
    struct
    {
        struct UExCommonCarouselNavButton* ButtonParam;
        uint8_t bIsSelected;
    } Parms{};
    Parms.ButtonParam = (struct UExCommonCarouselNavButton*)ButtonParam;
    Parms.bIsSelected = (uint8_t)bIsSelected;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UExCommonCarouselNavButtonGroup::HasAnyButtons()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonCarouselNavButtonGroup", "HasAnyButtons");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UExCommonCarouselNavButtonGroup::GetSelectedButtonIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonCarouselNavButtonGroup", "GetSelectedButtonIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UExCommonCarouselNavButton* UExCommonCarouselNavButtonGroup::GetSelectedButton()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonCarouselNavButtonGroup", "GetSelectedButton");
    struct
    {
        struct UExCommonCarouselNavButton* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UExCommonCarouselNavButtonGroup::GetIsHover()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonCarouselNavButtonGroup", "GetIsHover");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UExCommonCarouselNavButtonGroup::GetButtonCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonCarouselNavButtonGroup", "GetButtonCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UExCommonCarouselNavButton* UExCommonCarouselNavButtonGroup::GetButtonAtIndex(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonCarouselNavButtonGroup", "GetButtonAtIndex");
    struct
    {
        int32_t Index;
        struct UExCommonCarouselNavButton* ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UExCommonCarouselNavButtonGroup::FindButtonIndex(struct UExCommonCarouselNavButton* ButtonToFind)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonCarouselNavButtonGroup", "FindButtonIndex");
    struct
    {
        struct UExCommonCarouselNavButton* ButtonToFind;
        int32_t ReturnValue;
    } Parms{};
    Parms.ButtonToFind = (struct UExCommonCarouselNavButton*)ButtonToFind;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UExCommonCarouselNavButtonGroup::DeselectAll()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonCarouselNavButtonGroup", "DeselectAll");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UExCommonTextBlock
void UExCommonTextBlock::SetWrapTextWidth(int32_t InWrapTextAt)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonTextBlock", "SetWrapTextWidth");
    struct
    {
        int32_t InWrapTextAt;
    } Parms{};
    Parms.InWrapTextAt = (int32_t)InWrapTextAt;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonTextBlock::SetTextCase(uint8_t bUseAllCaps)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonTextBlock", "SetTextCase");
    struct
    {
        uint8_t bUseAllCaps;
    } Parms{};
    Parms.bUseAllCaps = (uint8_t)bUseAllCaps;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonTextBlock::SetStyle(struct UExCommonTextStyle* InStyle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonTextBlock", "SetStyle");
    struct
    {
        struct UExCommonTextStyle* InStyle;
    } Parms{};
    Parms.InStyle = (struct UExCommonTextStyle*)InStyle;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonTextBlock::ResetScrollState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonTextBlock", "ResetScrollState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UExCommonDateTimeTextBlock
void UExCommonDateTimeTextBlock::SetTimespanValue(struct FTimespan InTimespan)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonDateTimeTextBlock", "SetTimespanValue");
    struct
    {
        struct FTimespan InTimespan;
    } Parms{};
    Parms.InTimespan = (struct FTimespan)InTimespan;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonDateTimeTextBlock::SetDateTimeValue(struct FDateTime InDateTime, uint8_t bShowAsCountdown, float InRefreshDelay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonDateTimeTextBlock", "SetDateTimeValue");
    struct
    {
        struct FDateTime InDateTime;
        uint8_t bShowAsCountdown;
        float InRefreshDelay;
    } Parms{};
    Parms.InDateTime = (struct FDateTime)InDateTime;
    Parms.bShowAsCountdown = (uint8_t)bShowAsCountdown;
    Parms.InRefreshDelay = (float)InRefreshDelay;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonDateTimeTextBlock::SetCountDownCompletionText(struct FText InCompletionText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonDateTimeTextBlock", "SetCountDownCompletionText");
    struct
    {
        struct FText InCompletionText;
    } Parms{};
    Parms.InCompletionText = (struct FText)InCompletionText;
    this->ProcessEvent(Func, &Parms);
}

struct FDateTime UExCommonDateTimeTextBlock::GetDateTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonDateTimeTextBlock", "GetDateTime");
    struct
    {
        struct FDateTime ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UExCommonWidgetCarouselProBase
void UExCommonWidgetCarouselProBase::SimulateClickPageWithGamepad(int32_t ClickedPage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarouselProBase", "SimulateClickPageWithGamepad");
    struct
    {
        int32_t ClickedPage;
    } Parms{};
    Parms.ClickedPage = (int32_t)ClickedPage;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonWidgetCarouselProBase::SimpleInit(int32_t OverridePageSize, int32_t OverrideCacheSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarouselProBase", "SimpleInit");
    struct
    {
        int32_t OverridePageSize;
        int32_t OverrideCacheSize;
    } Parms{};
    Parms.OverridePageSize = (int32_t)OverridePageSize;
    Parms.OverrideCacheSize = (int32_t)OverrideCacheSize;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonWidgetCarouselProBase::SetIsCanInteractRuntime(uint8_t bChecked)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarouselProBase", "SetIsCanInteractRuntime");
    struct
    {
        uint8_t bChecked;
    } Parms{};
    Parms.bChecked = (uint8_t)bChecked;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonWidgetCarouselProBase::SetIsCanDragRuntime(uint8_t bChecked)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarouselProBase", "SetIsCanDragRuntime");
    struct
    {
        uint8_t bChecked;
    } Parms{};
    Parms.bChecked = (uint8_t)bChecked;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonWidgetCarouselProBase::SetIsCanClickRuntime(uint8_t bChecked)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarouselProBase", "SetIsCanClickRuntime");
    struct
    {
        uint8_t bChecked;
    } Parms{};
    Parms.bChecked = (uint8_t)bChecked;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonWidgetCarouselProBase::SetActivePage(int32_t TargetPage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarouselProBase", "SetActivePage");
    struct
    {
        int32_t TargetPage;
    } Parms{};
    Parms.TargetPage = (int32_t)TargetPage;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonWidgetCarouselProBase::RefreshAllItems()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarouselProBase", "RefreshAllItems");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UExCommonWidgetCarouselProBase::PreviousPage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarouselProBase", "PreviousPage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UExCommonWidgetCarouselProBase::OnPageClicked__DelegateSignature(struct UExCommonWidgetCarouselProBase* CarouselWidget, int32_t TargetPageIndex, struct UWidget* TargetItem)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarouselProBase", "OnPageClicked__DelegateSignature");
    struct
    {
        struct UExCommonWidgetCarouselProBase* CarouselWidget;
        int32_t TargetPageIndex;
        struct UWidget* TargetItem;
    } Parms{};
    Parms.CarouselWidget = (struct UExCommonWidgetCarouselProBase*)CarouselWidget;
    Parms.TargetPageIndex = (int32_t)TargetPageIndex;
    Parms.TargetItem = (struct UWidget*)TargetItem;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonWidgetCarouselProBase::OnPageChanged__DelegateSignature(struct UExCommonWidgetCarouselProBase* CarouselWidget, int32_t OldPageIndex, int32_t CurrentPageIndex, struct UWidget* CurrentItem)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarouselProBase", "OnPageChanged__DelegateSignature");
    struct
    {
        struct UExCommonWidgetCarouselProBase* CarouselWidget;
        int32_t OldPageIndex;
        int32_t CurrentPageIndex;
        struct UWidget* CurrentItem;
    } Parms{};
    Parms.CarouselWidget = (struct UExCommonWidgetCarouselProBase*)CarouselWidget;
    Parms.OldPageIndex = (int32_t)OldPageIndex;
    Parms.CurrentPageIndex = (int32_t)CurrentPageIndex;
    Parms.CurrentItem = (struct UWidget*)CurrentItem;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonWidgetCarouselProBase::OnLoadOuterData__DelegateSignature(struct UExCommonWidgetCarouselProBase* CarouselWidget, int32_t CurUpdateIndex, struct UWidget* TargetItem, int32_t PageIndex, int32_t CacheIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarouselProBase", "OnLoadOuterData__DelegateSignature");
    struct
    {
        struct UExCommonWidgetCarouselProBase* CarouselWidget;
        int32_t CurUpdateIndex;
        struct UWidget* TargetItem;
        int32_t PageIndex;
        int32_t CacheIndex;
    } Parms{};
    Parms.CarouselWidget = (struct UExCommonWidgetCarouselProBase*)CarouselWidget;
    Parms.CurUpdateIndex = (int32_t)CurUpdateIndex;
    Parms.TargetItem = (struct UWidget*)TargetItem;
    Parms.PageIndex = (int32_t)PageIndex;
    Parms.CacheIndex = (int32_t)CacheIndex;
    this->ProcessEvent(Func, &Parms);
}

int32_t UExCommonWidgetCarouselProBase::OnGetItemCount__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarouselProBase", "OnGetItemCount__DelegateSignature");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UExCommonWidgetCarouselProBase::OnDragging__DelegateSignature(struct UExCommonWidgetCarouselProBase* CarouselWidget, int32_t OldPageIndex, int32_t CurrentPageIndex, struct UWidget* CurrentItem)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarouselProBase", "OnDragging__DelegateSignature");
    struct
    {
        struct UExCommonWidgetCarouselProBase* CarouselWidget;
        int32_t OldPageIndex;
        int32_t CurrentPageIndex;
        struct UWidget* CurrentItem;
    } Parms{};
    Parms.CarouselWidget = (struct UExCommonWidgetCarouselProBase*)CarouselWidget;
    Parms.OldPageIndex = (int32_t)OldPageIndex;
    Parms.CurrentPageIndex = (int32_t)CurrentPageIndex;
    Parms.CurrentItem = (struct UWidget*)CurrentItem;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonWidgetCarouselProBase::OnCarouselSimpleEvent__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarouselProBase", "OnCarouselSimpleEvent__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UExCommonWidgetCarouselProBase::NextPage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarouselProBase", "NextPage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

int32_t UExCommonWidgetCarouselProBase::GetWindowRightSlotIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarouselProBase", "GetWindowRightSlotIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UExCommonWidgetCarouselProBase::GetWindowRightPage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarouselProBase", "GetWindowRightPage");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UExCommonWidgetCarouselProBase::GetWindowLeftSlotIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarouselProBase", "GetWindowLeftSlotIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UExCommonWidgetCarouselProBase::GetWindowLeftPage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarouselProBase", "GetWindowLeftPage");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UExCommonWidgetCarouselProBase::GetWindowCenterSlotIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarouselProBase", "GetWindowCenterSlotIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UExCommonWidgetCarouselProBase::GetWindowCenterPage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarouselProBase", "GetWindowCenterPage");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWidget* UExCommonWidgetCarouselProBase::GetWidgetByPageIndex(int32_t PageIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarouselProBase", "GetWidgetByPageIndex");
    struct
    {
        int32_t PageIndex;
        struct UWidget* ReturnValue;
    } Parms{};
    Parms.PageIndex = (int32_t)PageIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UExCommonWidgetCarouselProBase::GetTotalTurnPageCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarouselProBase", "GetTotalTurnPageCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UExCommonWidgetCarouselProBase::GetTotalLoadOuterCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarouselProBase", "GetTotalLoadOuterCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UExCommonWidgetCarouselProBase::GetRightPageIndex(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarouselProBase", "GetRightPageIndex");
    struct
    {
        int32_t Index;
        int32_t ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UExCommonWidgetCarouselProBase::GetLeftPageIndex(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarouselProBase", "GetLeftPageIndex");
    struct
    {
        int32_t Index;
        int32_t ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UExCommonWidgetCarouselProBase::GetActivePageIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarouselProBase", "GetActivePageIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UExCommonWidgetCarouselProBase::GenerateCurrentWidgets()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarouselProBase", "GenerateCurrentWidgets");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UExCommonWidgetCarouselProBase::EndAutoScrolling()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarouselProBase", "EndAutoScrolling");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UExCommonWidgetCarouselProBase::BeginAutoScrolling()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarouselProBase", "BeginAutoScrolling");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UExCommonLazyImage
void UExCommonLazyImage::SetMaterialTextureParamName(struct FName TextureParamName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonLazyImage", "SetMaterialTextureParamName");
    struct
    {
        struct FName TextureParamName;
    } Parms{};
    Parms.TextureParamName = (struct FName)TextureParamName;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonLazyImage::SetBrushFromLazyTexture(const struct TSoftObjectPtr<UTexture2D>& LazyTexture, uint8_t bMatchSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonLazyImage", "SetBrushFromLazyTexture");
    struct
    {
        struct TSoftObjectPtr<UTexture2D> LazyTexture;
        uint8_t bMatchSize;
    } Parms{};
    Parms.LazyTexture = (struct TSoftObjectPtr<UTexture2D>)LazyTexture;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonLazyImage::SetBrushFromLazyMaterial(const struct TSoftObjectPtr<UMaterialInterface>& LazyMaterial)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonLazyImage", "SetBrushFromLazyMaterial");
    struct
    {
        struct TSoftObjectPtr<UMaterialInterface> LazyMaterial;
    } Parms{};
    Parms.LazyMaterial = (struct TSoftObjectPtr<UMaterialInterface>)LazyMaterial;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonLazyImage::SetBrushFromLazyDisplayAsset(const struct TSoftObjectPtr<UObject>& LazyObject, uint8_t bMatchTextureSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonLazyImage", "SetBrushFromLazyDisplayAsset");
    struct
    {
        struct TSoftObjectPtr<UObject> LazyObject;
        uint8_t bMatchTextureSize;
    } Parms{};
    Parms.LazyObject = (struct TSoftObjectPtr<UObject>)LazyObject;
    Parms.bMatchTextureSize = (uint8_t)bMatchTextureSize;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UExCommonLazyImage::IsLoading()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonLazyImage", "IsLoading");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UExCommonLazyWidget
void UExCommonLazyWidget::SetLazyContent(struct TSoftClassPtr<struct UUserWidget*> SoftWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonLazyWidget", "SetLazyContent");
    struct
    {
        struct TSoftClassPtr<struct UUserWidget*> SoftWidget;
    } Parms{};
    Parms.SoftWidget = (struct TSoftClassPtr<struct UUserWidget*>)SoftWidget;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UExCommonLazyWidget::IsLoading()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonLazyWidget", "IsLoading");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UUserWidget* UExCommonLazyWidget::GetContent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonLazyWidget", "GetContent");
    struct
    {
        struct UUserWidget* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ULoadGuardSlot
void ULoadGuardSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadGuardSlot", "SetVerticalAlignment");
    struct
    {
        enum EVerticalAlignment InVerticalAlignment;
    } Parms{};
    Parms.InVerticalAlignment = (enum EVerticalAlignment)InVerticalAlignment;
    this->ProcessEvent(Func, &Parms);
}

void ULoadGuardSlot::SetPadding(struct FMargin InPadding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadGuardSlot", "SetPadding");
    struct
    {
        struct FMargin InPadding;
    } Parms{};
    Parms.InPadding = (struct FMargin)InPadding;
    this->ProcessEvent(Func, &Parms);
}

void ULoadGuardSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadGuardSlot", "SetHorizontalAlignment");
    struct
    {
        enum EHorizontalAlignment InHorizontalAlignment;
    } Parms{};
    Parms.InHorizontalAlignment = (enum EHorizontalAlignment)InHorizontalAlignment;
    this->ProcessEvent(Func, &Parms);
}

// UExCommonLoadGuard
void UExCommonLoadGuard::SetLoadingText(const struct FText& InLoadingText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonLoadGuard", "SetLoadingText");
    struct
    {
        struct FText InLoadingText;
    } Parms{};
    Parms.InLoadingText = (struct FText)InLoadingText;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonLoadGuard::SetIsLoading(uint8_t bInIsLoading)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonLoadGuard", "SetIsLoading");
    struct
    {
        uint8_t bInIsLoading;
    } Parms{};
    Parms.bInIsLoading = (uint8_t)bInIsLoading;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonLoadGuard::OnAssetLoaded__DelegateSignature(struct UObject* Object)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonLoadGuard", "OnAssetLoaded__DelegateSignature");
    struct
    {
        struct UObject* Object;
    } Parms{};
    Parms.Object = (struct UObject*)Object;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UExCommonLoadGuard::IsLoading()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonLoadGuard", "IsLoading");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UExCommonLoadGuard::BP_GuardAndLoadAsset(const struct TSoftObjectPtr<UObject>& InLazyAsset, const struct FDelegate& OnAssetLoaded)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonLoadGuard", "BP_GuardAndLoadAsset");
    struct
    {
        struct TSoftObjectPtr<UObject> InLazyAsset;
        struct FDelegate OnAssetLoaded;
    } Parms{};
    Parms.InLazyAsset = (struct TSoftObjectPtr<UObject>)InLazyAsset;
    Parms.OnAssetLoaded = (struct FDelegate)OnAssetLoaded;
    this->ProcessEvent(Func, &Parms);
}

// UExCommonNumericTextBlock
void UExCommonNumericTextBlock::SetNumericType(EExCommonNumericType InNumericType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonNumericTextBlock", "SetNumericType");
    struct
    {
        enum EExCommonNumericType InNumericType;
    } Parms{};
    Parms.InNumericType = (enum EExCommonNumericType)InNumericType;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonNumericTextBlock::SetCurrentValue(float NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonNumericTextBlock", "SetCurrentValue");
    struct
    {
        float NewValue;
    } Parms{};
    Parms.NewValue = (float)NewValue;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonNumericTextBlock::OnOutro__DelegateSignature(struct UExCommonNumericTextBlock* NumericTextBlock)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonNumericTextBlock", "OnOutro__DelegateSignature");
    struct
    {
        struct UExCommonNumericTextBlock* NumericTextBlock;
    } Parms{};
    Parms.NumericTextBlock = (struct UExCommonNumericTextBlock*)NumericTextBlock;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonNumericTextBlock::OnInterpolationUpdated__DelegateSignature(struct UExCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonNumericTextBlock", "OnInterpolationUpdated__DelegateSignature");
    struct
    {
        struct UExCommonNumericTextBlock* NumericTextBlock;
        float LastValue;
        float NewValue;
    } Parms{};
    Parms.NumericTextBlock = (struct UExCommonNumericTextBlock*)NumericTextBlock;
    Parms.LastValue = (float)LastValue;
    Parms.NewValue = (float)NewValue;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonNumericTextBlock::OnInterpolationStarted__DelegateSignature(struct UExCommonNumericTextBlock* NumericTextBlock)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonNumericTextBlock", "OnInterpolationStarted__DelegateSignature");
    struct
    {
        struct UExCommonNumericTextBlock* NumericTextBlock;
    } Parms{};
    Parms.NumericTextBlock = (struct UExCommonNumericTextBlock*)NumericTextBlock;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonNumericTextBlock::OnInterpolationEnded__DelegateSignature(struct UExCommonNumericTextBlock* NumericTextBlock, uint8_t HadCompleted)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonNumericTextBlock", "OnInterpolationEnded__DelegateSignature");
    struct
    {
        struct UExCommonNumericTextBlock* NumericTextBlock;
        uint8_t HadCompleted;
    } Parms{};
    Parms.NumericTextBlock = (struct UExCommonNumericTextBlock*)NumericTextBlock;
    Parms.HadCompleted = (uint8_t)HadCompleted;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UExCommonNumericTextBlock::IsInterpolatingNumericValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonNumericTextBlock", "IsInterpolatingNumericValue");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UExCommonNumericTextBlock::InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonNumericTextBlock", "InterpolateToValue");
    struct
    {
        float TargetValue;
        float MaximumInterpolationDuration;
        float MinimumChangeRate;
        float OutroOffset;
    } Parms{};
    Parms.TargetValue = (float)TargetValue;
    Parms.MaximumInterpolationDuration = (float)MaximumInterpolationDuration;
    Parms.MinimumChangeRate = (float)MinimumChangeRate;
    Parms.OutroOffset = (float)OutroOffset;
    this->ProcessEvent(Func, &Parms);
}

float UExCommonNumericTextBlock::GetTargetValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonNumericTextBlock", "GetTargetValue");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// IExCommonPoolableWidgetInterface
void IExCommonPoolableWidgetInterface::OnReleaseToPool()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonPoolableWidgetInterface", "OnReleaseToPool");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void IExCommonPoolableWidgetInterface::OnAcquireFromPool()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonPoolableWidgetInterface", "OnAcquireFromPool");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UExCommonTextStyle
void UExCommonTextStyle::GetStrikeBrush(struct FSlateBrush& OutStrikeBrush)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonTextStyle", "GetStrikeBrush");
    struct
    {
        struct FSlateBrush OutStrikeBrush;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutStrikeBrush = Parms.OutStrikeBrush;
}

void UExCommonTextStyle::GetShadowOffset(struct FVector2D& OutShadowOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonTextStyle", "GetShadowOffset");
    struct
    {
        struct FVector2D OutShadowOffset;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutShadowOffset = Parms.OutShadowOffset;
}

void UExCommonTextStyle::GetShadowColor(struct FLinearColor& OutColor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonTextStyle", "GetShadowColor");
    struct
    {
        struct FLinearColor OutColor;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutColor = Parms.OutColor;
}

void UExCommonTextStyle::GetMargin(struct FMargin& OutMargin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonTextStyle", "GetMargin");
    struct
    {
        struct FMargin OutMargin;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutMargin = Parms.OutMargin;
}

float UExCommonTextStyle::GetLineHeightPercentage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonTextStyle", "GetLineHeightPercentage");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UExCommonTextStyle::GetFont(struct FSlateFontInfo& OutFont)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonTextStyle", "GetFont");
    struct
    {
        struct FSlateFontInfo OutFont;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutFont = Parms.OutFont;
}

void UExCommonTextStyle::GetColor(struct FLinearColor& OutColor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonTextStyle", "GetColor");
    struct
    {
        struct FLinearColor OutColor;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutColor = Parms.OutColor;
}

// UExCommonVideoPlayer
void UExCommonVideoPlayer::SetVideo(struct UMediaSource* NewVideo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonVideoPlayer", "SetVideo");
    struct
    {
        struct UMediaSource* NewVideo;
    } Parms{};
    Parms.NewVideo = (struct UMediaSource*)NewVideo;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonVideoPlayer::SetPlaybackRate(float PlaybackRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonVideoPlayer", "SetPlaybackRate");
    struct
    {
        float PlaybackRate;
    } Parms{};
    Parms.PlaybackRate = (float)PlaybackRate;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonVideoPlayer::SetLooping(uint8_t bShouldLoopPlayback)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonVideoPlayer", "SetLooping");
    struct
    {
        uint8_t bShouldLoopPlayback;
    } Parms{};
    Parms.bShouldLoopPlayback = (uint8_t)bShouldLoopPlayback;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonVideoPlayer::SetIsMuted(uint8_t bInIsMuted)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonVideoPlayer", "SetIsMuted");
    struct
    {
        uint8_t bInIsMuted;
    } Parms{};
    Parms.bInIsMuted = (uint8_t)bInIsMuted;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonVideoPlayer::Seek(float PlaybackTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonVideoPlayer", "Seek");
    struct
    {
        float PlaybackTime;
    } Parms{};
    Parms.PlaybackTime = (float)PlaybackTime;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonVideoPlayer::Reverse()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonVideoPlayer", "Reverse");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UExCommonVideoPlayer::PlayFromStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonVideoPlayer", "PlayFromStart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UExCommonVideoPlayer::Play()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonVideoPlayer", "Play");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UExCommonVideoPlayer::Pause()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonVideoPlayer", "Pause");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UExCommonVideoPlayer::IsPlaying()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonVideoPlayer", "IsPlaying");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UExCommonVideoPlayer::IsPaused()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonVideoPlayer", "IsPaused");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UExCommonVideoPlayer::IsMuted()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonVideoPlayer", "IsMuted");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UExCommonVideoPlayer::IsLooping()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonVideoPlayer", "IsLooping");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UExCommonVideoPlayer::GetVideoDuration()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonVideoPlayer", "GetVideoDuration");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UExCommonVideoPlayer::GetPlaybackTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonVideoPlayer", "GetPlaybackTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UExCommonVideoPlayer::GetPlaybackRate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonVideoPlayer", "GetPlaybackRate");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UExCommonVideoPlayer::Close()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonVideoPlayer", "Close");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UExCommonWidgetCarousel
void UExCommonWidgetCarousel::SetActiveWidgetIndex(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarousel", "SetActiveWidgetIndex");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonWidgetCarousel::SetActiveWidget(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarousel", "SetActiveWidget");
    struct
    {
        struct UWidget* Widget;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    this->ProcessEvent(Func, &Parms);
}

void UExCommonWidgetCarousel::PreviousPage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarousel", "PreviousPage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UExCommonWidgetCarousel::NextPage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarousel", "NextPage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UWidget* UExCommonWidgetCarousel::GetWidgetAtIndex(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarousel", "GetWidgetAtIndex");
    struct
    {
        int32_t Index;
        struct UWidget* ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UExCommonWidgetCarousel::GetActiveWidgetIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarousel", "GetActiveWidgetIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UExCommonWidgetCarousel::EndAutoScrolling()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarousel", "EndAutoScrolling");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UExCommonWidgetCarousel::BeginAutoScrolling(float ScrollInterval)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExCommonWidgetCarousel", "BeginAutoScrolling");
    struct
    {
        float ScrollInterval;
    } Parms{};
    Parms.ScrollInterval = (float)ScrollInterval;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
