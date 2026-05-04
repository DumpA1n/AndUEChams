#include "GPUserInterface.hpp"
#include "Engine.hpp"
#include "GPGameInput.hpp"
#include "GPUserInterfaceCore.hpp"
#include "RuntimeFilesDownloader.hpp"
#include "Slate.hpp"
#include "SlateCore.hpp"
#include "UMG.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- AGPWidgetTiltActor::* ----
uint8_t AGPWidgetTiltActor::IsDestroy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWidgetTiltActor", "IsDestroy");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFBackgroundBlur::* ----
void UDFBackgroundBlur::RefreshCacheBlurRT()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFBackgroundBlur", "RefreshCacheBlurRT");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFBackgroundBox::* ----
void UDFBackgroundBox::SetStretch(EBackgroundStretchType InStretch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFBackgroundBox", "SetStretch");
    struct
    {
        enum EBackgroundStretchType InStretch;
    } Parms{};
    Parms.InStretch = (enum EBackgroundStretchType)InStretch;
    this->ProcessEvent(Func, &Parms);
}

void UDFBackgroundBox::SetContentSize(const struct FIntPoint& InSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFBackgroundBox", "SetContentSize");
    struct
    {
        struct FIntPoint InSize;
    } Parms{};
    Parms.InSize = (struct FIntPoint)InSize;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFUserWidgetBase::* ----
void UDFUserWidgetBase::StopAutoAnimation(struct FString AnimationName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFUserWidgetBase", "StopAutoAnimation");
    struct
    {
        struct FString AnimationName;
    } Parms{};
    Parms.AnimationName = (struct FString)AnimationName;
    this->ProcessEvent(Func, &Parms);
}

void UDFUserWidgetBase::PlayAutoAnimation(struct FString AnimationName, int32_t NumberOfLoops, EUMGSequencePlayMode PlayMode, uint8_t bJumpToEnd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFUserWidgetBase", "PlayAutoAnimation");
    struct
    {
        struct FString AnimationName;
        int32_t NumberOfLoops;
        enum EUMGSequencePlayMode PlayMode;
        uint8_t bJumpToEnd;
    } Parms{};
    Parms.AnimationName = (struct FString)AnimationName;
    Parms.NumberOfLoops = (int32_t)NumberOfLoops;
    Parms.PlayMode = (enum EUMGSequencePlayMode)PlayMode;
    Parms.bJumpToEnd = (uint8_t)bJumpToEnd;
    this->ProcessEvent(Func, &Parms);
}

void UDFUserWidgetBase::OnShowBegin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFUserWidgetBase", "OnShowBegin");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFUserWidgetBase::OnShow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFUserWidgetBase", "OnShow");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFUserWidgetBase::OnSetThemeIDChanged(struct FString InThemeID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFUserWidgetBase", "OnSetThemeIDChanged");
    struct
    {
        struct FString InThemeID;
    } Parms{};
    Parms.InThemeID = (struct FString)InThemeID;
    this->ProcessEvent(Func, &Parms);
}

void UDFUserWidgetBase::OnHideBegin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFUserWidgetBase", "OnHideBegin");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFUserWidgetBase::OnHide()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFUserWidgetBase", "OnHide");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFUserWidgetBase::GetActivatedState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFUserWidgetBase", "GetActivatedState");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFBidirectionalSlider::* ----
void UDFBidirectionalSlider::ToggleCurrentSlider()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFBidirectionalSlider", "ToggleCurrentSlider");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFBidirectionalSlider::SetStepValue(float InStepValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFBidirectionalSlider", "SetStepValue");
    struct
    {
        float InStepValue;
    } Parms{};
    Parms.InStepValue = (float)InStepValue;
    this->ProcessEvent(Func, &Parms);
}

void UDFBidirectionalSlider::SetCurrentSlider(uint8_t Bright)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFBidirectionalSlider", "SetCurrentSlider");
    struct
    {
        uint8_t Bright;
    } Parms{};
    Parms.Bright = (uint8_t)Bright;
    this->ProcessEvent(Func, &Parms);
}

void UDFBidirectionalSlider::ProcessSliderValueUpdated(float InValue, uint8_t bIsRight)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFBidirectionalSlider", "ProcessSliderValueUpdated");
    struct
    {
        float InValue;
        uint8_t bIsRight;
    } Parms{};
    Parms.InValue = (float)InValue;
    Parms.bIsRight = (uint8_t)bIsRight;
    this->ProcessEvent(Func, &Parms);
}

void UDFBidirectionalSlider::OnSliderRightValueChanged(float InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFBidirectionalSlider", "OnSliderRightValueChanged");
    struct
    {
        float InValue;
    } Parms{};
    Parms.InValue = (float)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UDFBidirectionalSlider::OnSliderLeftValueChanged(float InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFBidirectionalSlider", "OnSliderLeftValueChanged");
    struct
    {
        float InValue;
    } Parms{};
    Parms.InValue = (float)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UDFBidirectionalSlider::OnSetValue(float InValue, uint8_t bIsRight, uint8_t bNeedCallback)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFBidirectionalSlider", "OnSetValue");
    struct
    {
        float InValue;
        uint8_t bIsRight;
        uint8_t bNeedCallback;
    } Parms{};
    Parms.InValue = (float)InValue;
    Parms.bIsRight = (uint8_t)bIsRight;
    Parms.bNeedCallback = (uint8_t)bNeedCallback;
    this->ProcessEvent(Func, &Parms);
}

void UDFBidirectionalSlider::InitValue(float InLeftValue, float InRightValue, float InMinValue, float InMaxValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFBidirectionalSlider", "InitValue");
    struct
    {
        float InLeftValue;
        float InRightValue;
        float InMinValue;
        float InMaxValue;
    } Parms{};
    Parms.InLeftValue = (float)InLeftValue;
    Parms.InRightValue = (float)InRightValue;
    Parms.InMinValue = (float)InMinValue;
    Parms.InMaxValue = (float)InMaxValue;
    this->ProcessEvent(Func, &Parms);
}

void UDFBidirectionalSlider::HandleInputTypeChanged(EGPInputType InInputType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFBidirectionalSlider", "HandleInputTypeChanged");
    struct
    {
        enum EGPInputType InInputType;
    } Parms{};
    Parms.InInputType = (enum EGPInputType)InInputType;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFBlurSlotReContainer::* ----
void UDFBlurSlotReContainer::OnBlurWidgetLoaded(struct FSoftObjectPath SoftObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFBlurSlotReContainer", "OnBlurWidgetLoaded");
    struct
    {
        struct FSoftObjectPath SoftObject;
    } Parms{};
    Parms.SoftObject = (struct FSoftObjectPath)SoftObject;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFButton::* ----
void UDFButton::SetIsFocusable(uint8_t InIsFocusable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFButton", "SetIsFocusable");
    struct
    {
        uint8_t InIsFocusable;
    } Parms{};
    Parms.InIsFocusable = (uint8_t)InIsFocusable;
    this->ProcessEvent(Func, &Parms);
}

void UDFButton::SetClickIsIgnored(uint8_t bInIgnore)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFButton", "SetClickIsIgnored");
    struct
    {
        uint8_t bInIgnore;
    } Parms{};
    Parms.bInIgnore = (uint8_t)bInIgnore;
    this->ProcessEvent(Func, &Parms);
}

void UDFButton::SetButtonID(int64_t NewButtonID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFButton", "SetButtonID");
    struct
    {
        int64_t NewButtonID;
    } Parms{};
    Parms.NewButtonID = (int64_t)NewButtonID;
    this->ProcessEvent(Func, &Parms);
}

void UDFButton::OverLoadSound(struct FName SoundName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFButton", "OverLoadSound");
    struct
    {
        struct FName SoundName;
    } Parms{};
    Parms.SoundName = (struct FName)SoundName;
    this->ProcessEvent(Func, &Parms);
}

void UDFButton::OverHoveredLoadSound(struct FName SoundName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFButton", "OverHoveredLoadSound");
    struct
    {
        struct FName SoundName;
    } Parms{};
    Parms.SoundName = (struct FName)SoundName;
    this->ProcessEvent(Func, &Parms);
}

void UDFButton::OpenDefaultSound()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFButton", "OpenDefaultSound");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

EFocusCause UDFButton::GetLastFocusCause()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFButton", "GetLastFocusCause");
    struct
    {
        enum EFocusCause ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFButton::CloseDefaultSound()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFButton", "CloseDefaultSound");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFCanvasPosReContainer::* ----
struct FAnchorData UDFCanvasPosReContainer::GetAnchorData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCanvasPosReContainer", "GetAnchorData");
    struct
    {
        struct FAnchorData ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFCarouselProV2ItemBase::* ----
void UDFCarouselProV2ItemBase::OnUnHover(int32_t InPageIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCarouselProV2ItemBase", "OnUnHover");
    struct
    {
        int32_t InPageIndex;
    } Parms{};
    Parms.InPageIndex = (int32_t)InPageIndex;
    this->ProcessEvent(Func, &Parms);
}

void UDFCarouselProV2ItemBase::OnRelease(int32_t InPageIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCarouselProV2ItemBase", "OnRelease");
    struct
    {
        int32_t InPageIndex;
    } Parms{};
    Parms.InPageIndex = (int32_t)InPageIndex;
    this->ProcessEvent(Func, &Parms);
}

void UDFCarouselProV2ItemBase::OnPress(int32_t InPageIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCarouselProV2ItemBase", "OnPress");
    struct
    {
        int32_t InPageIndex;
    } Parms{};
    Parms.InPageIndex = (int32_t)InPageIndex;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFCarouselProV2ItemBase::OnLoadOuterData(struct UDFExCommonCarouselProV2* InCarouselPro, int32_t InPageIndex, int32_t InCacheSlotIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCarouselProV2ItemBase", "OnLoadOuterData");
    struct
    {
        struct UDFExCommonCarouselProV2* InCarouselPro;
        int32_t InPageIndex;
        int32_t InCacheSlotIndex;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InCarouselPro = (struct UDFExCommonCarouselProV2*)InCarouselPro;
    Parms.InPageIndex = (int32_t)InPageIndex;
    Parms.InCacheSlotIndex = (int32_t)InCacheSlotIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFCarouselProV2ItemBase::OnHover(int32_t InPageIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCarouselProV2ItemBase", "OnHover");
    struct
    {
        int32_t InPageIndex;
    } Parms{};
    Parms.InPageIndex = (int32_t)InPageIndex;
    this->ProcessEvent(Func, &Parms);
}

void UDFCarouselProV2ItemBase::OnClicked(int32_t InPageIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCarouselProV2ItemBase", "OnClicked");
    struct
    {
        int32_t InPageIndex;
    } Parms{};
    Parms.InPageIndex = (int32_t)InPageIndex;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFCDNImage::* ----
void UDFCDNImage::SetLoadImage(struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCDNImage", "SetLoadImage");
    struct
    {
        struct FString Path;
    } Parms{};
    Parms.Path = (struct FString)Path;
    this->ProcessEvent(Func, &Parms);
}

void UDFCDNImage::SetImageByDownloader(int32_t HashCode, ECdnDownResult Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCDNImage", "SetImageByDownloader");
    struct
    {
        int32_t HashCode;
        enum ECdnDownResult Result;
    } Parms{};
    Parms.HashCode = (int32_t)HashCode;
    Parms.Result = (enum ECdnDownResult)Result;
    this->ProcessEvent(Func, &Parms);
}

void UDFCDNImage::SetImage(struct UObject* ImageAsset, uint8_t bAutoResize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCDNImage", "SetImage");
    struct
    {
        struct UObject* ImageAsset;
        uint8_t bAutoResize;
    } Parms{};
    Parms.ImageAsset = (struct UObject*)ImageAsset;
    Parms.bAutoResize = (uint8_t)bAutoResize;
    this->ProcessEvent(Func, &Parms);
}

void UDFCDNImage::SetCompareVersion(uint8_t bNeedCompare)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCDNImage", "SetCompareVersion");
    struct
    {
        uint8_t bNeedCompare;
    } Parms{};
    Parms.bNeedCompare = (uint8_t)bNeedCompare;
    this->ProcessEvent(Func, &Parms);
}

void UDFCDNImage::SetCDNImage(struct FString URL, uint8_t bMatchSize, struct FString Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCDNImage", "SetCDNImage");
    struct
    {
        struct FString URL;
        uint8_t bMatchSize;
        struct FString Tag;
    } Parms{};
    Parms.URL = (struct FString)URL;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    Parms.Tag = (struct FString)Tag;
    this->ProcessEvent(Func, &Parms);
}

void UDFCDNImage::SetBackgroundImageForWaterfall(const struct FSoftObjectPath& Path, uint8_t bAutoSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCDNImage", "SetBackgroundImageForWaterfall");
    struct
    {
        struct FSoftObjectPath Path;
        uint8_t bAutoSize;
    } Parms{};
    Parms.Path = (struct FSoftObjectPath)Path;
    Parms.bAutoSize = (uint8_t)bAutoSize;
    this->ProcessEvent(Func, &Parms);
}

void UDFCDNImage::SetBackgroundImage(const struct FSoftObjectPath& Path, uint8_t bAutoSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCDNImage", "SetBackgroundImage");
    struct
    {
        struct FSoftObjectPath Path;
        uint8_t bAutoSize;
    } Parms{};
    Parms.Path = (struct FSoftObjectPath)Path;
    Parms.bAutoSize = (uint8_t)bAutoSize;
    this->ProcessEvent(Func, &Parms);
}

void UDFCDNImage::SetBackgroundData(uint8_t NeedBackground)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCDNImage", "SetBackgroundData");
    struct
    {
        uint8_t NeedBackground;
    } Parms{};
    Parms.NeedBackground = (uint8_t)NeedBackground;
    this->ProcessEvent(Func, &Parms);
}

void UDFCDNImage::ReleaseSlateResources(uint8_t bReleaseChildren)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCDNImage", "ReleaseSlateResources");
    struct
    {
        uint8_t bReleaseChildren;
    } Parms{};
    Parms.bReleaseChildren = (uint8_t)bReleaseChildren;
    this->ProcessEvent(Func, &Parms);
}

void UDFCDNImage::ClearCDNTexture(struct FString ETag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCDNImage", "ClearCDNTexture");
    struct
    {
        struct FString ETag;
    } Parms{};
    Parms.ETag = (struct FString)ETag;
    this->ProcessEvent(Func, &Parms);
}

void UDFCDNImage::AysncLoadCallback(struct FString FileSavePath, uint8_t bCompareVer, uint8_t bReDownload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCDNImage", "AysncLoadCallback");
    struct
    {
        struct FString FileSavePath;
        uint8_t bCompareVer;
        uint8_t bReDownload;
    } Parms{};
    Parms.FileSavePath = (struct FString)FileSavePath;
    Parms.bCompareVer = (uint8_t)bCompareVer;
    Parms.bReDownload = (uint8_t)bReDownload;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFCheckBox::* ----
void UDFCheckBox::SetIsFocusable(uint8_t InIsFocusable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCheckBox", "SetIsFocusable");
    struct
    {
        uint8_t InIsFocusable;
    } Parms{};
    Parms.InIsFocusable = (uint8_t)InIsFocusable;
    this->ProcessEvent(Func, &Parms);
}

void UDFCheckBox::SetButtonID(int64_t NewButtonID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCheckBox", "SetButtonID");
    struct
    {
        int64_t NewButtonID;
    } Parms{};
    Parms.NewButtonID = (int64_t)NewButtonID;
    this->ProcessEvent(Func, &Parms);
}

void UDFCheckBox::NavigationClick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCheckBox", "NavigationClick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

EFocusCause UDFCheckBox::GetLastFocusCause()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCheckBox", "GetLastFocusCause");
    struct
    {
        enum EFocusCause ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFClipCanvasPanel::* ----
void UDFClipCanvasPanel::SetClipChild(struct UWidget* InChild)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFClipCanvasPanel", "SetClipChild");
    struct
    {
        struct UWidget* InChild;
    } Parms{};
    Parms.InChild = (struct UWidget*)InChild;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFColorReContainer::* ----
void UDFColorReContainer::SetColorAndOpacity(struct FLinearColor InColorAndOpacity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFColorReContainer", "SetColorAndOpacity");
    struct
    {
        struct FLinearColor InColorAndOpacity;
    } Parms{};
    Parms.InColorAndOpacity = (struct FLinearColor)InColorAndOpacity;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFColorWheel::* ----
void UDFColorWheel::SetSelectColor(struct FLinearColor sColor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFColorWheel", "SetSelectColor");
    struct
    {
        struct FLinearColor sColor;
    } Parms{};
    Parms.sColor = (struct FLinearColor)sColor;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFCommonAddDecHolder::* ----
void UDFCommonAddDecHolder::SetSlotContainerEnabled(uint8_t bEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonAddDecHolder", "SetSlotContainerEnabled");
    struct
    {
        uint8_t bEnabled;
    } Parms{};
    Parms.bEnabled = (uint8_t)bEnabled;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonAddDecHolder::SetButtonEnabled(uint8_t bEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonAddDecHolder", "SetButtonEnabled");
    struct
    {
        uint8_t bEnabled;
    } Parms{};
    Parms.bEnabled = (uint8_t)bEnabled;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonAddDecHolder::NeedRefreshButtonEnable(uint8_t bNeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonAddDecHolder", "NeedRefreshButtonEnable");
    struct
    {
        uint8_t bNeed;
    } Parms{};
    Parms.bNeed = (uint8_t)bNeed;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonAddDecHolder::ManelSaveCurNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonAddDecHolder", "ManelSaveCurNum");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonAddDecHolder::InitNum(int32_t InCurNum, int32_t InStepNum, int32_t InMinNum, int32_t InMaxNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonAddDecHolder", "InitNum");
    struct
    {
        int32_t InCurNum;
        int32_t InStepNum;
        int32_t InMinNum;
        int32_t InMaxNum;
    } Parms{};
    Parms.InCurNum = (int32_t)InCurNum;
    Parms.InStepNum = (int32_t)InStepNum;
    Parms.InMinNum = (int32_t)InMinNum;
    Parms.InMaxNum = (int32_t)InMaxNum;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonAddDecHolder::HandleDecReleasedNoClicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonAddDecHolder", "HandleDecReleasedNoClicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonAddDecHolder::HandleDecClicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonAddDecHolder", "HandleDecClicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonAddDecHolder::HandleAddReleasedNoClicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonAddDecHolder", "HandleAddReleasedNoClicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonAddDecHolder::HandleAddClicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonAddDecHolder", "HandleAddClicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonAddDecHolder::EnableGlobalHoveEffect(uint8_t bEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonAddDecHolder", "EnableGlobalHoveEffect");
    struct
    {
        uint8_t bEnabled;
    } Parms{};
    Parms.bEnabled = (uint8_t)bEnabled;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonAddDecHolder::ChangeDeltaNum(int32_t InChangeNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonAddDecHolder", "ChangeDeltaNum");
    struct
    {
        int32_t InChangeNum;
    } Parms{};
    Parms.InChangeNum = (int32_t)InChangeNum;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonAddDecHolder::ChangeCurNum(int32_t InCurNum, int32_t InStepNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonAddDecHolder", "ChangeCurNum");
    struct
    {
        int32_t InCurNum;
        int32_t InStepNum;
    } Parms{};
    Parms.InCurNum = (int32_t)InCurNum;
    Parms.InStepNum = (int32_t)InStepNum;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFCommonAddDecInputBox::* ----
void UDFCommonAddDecInputBox::InitNum(int32_t InCurNum, int32_t InStepNum, int32_t InMinNum, int32_t InMaxNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonAddDecInputBox", "InitNum");
    struct
    {
        int32_t InCurNum;
        int32_t InStepNum;
        int32_t InMinNum;
        int32_t InMaxNum;
    } Parms{};
    Parms.InCurNum = (int32_t)InCurNum;
    Parms.InStepNum = (int32_t)InStepNum;
    Parms.InMinNum = (int32_t)InMinNum;
    Parms.InMaxNum = (int32_t)InMaxNum;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonAddDecInputBox::HandleInputTextCommitted(const struct FText& InText, ETextCommit CommitMethod)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonAddDecInputBox", "HandleInputTextCommitted");
    struct
    {
        struct FText InText;
        enum ETextCommit CommitMethod;
    } Parms{};
    Parms.InText = (struct FText)InText;
    Parms.CommitMethod = (enum ETextCommit)CommitMethod;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonAddDecInputBox::HandleInputTextChanged(const struct FText& InText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonAddDecInputBox", "HandleInputTextChanged");
    struct
    {
        struct FText InText;
    } Parms{};
    Parms.InText = (struct FText)InText;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonAddDecInputBox::HandleAddDecCurNumChanged(int32_t InCurNum, int32_t InChangeNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonAddDecInputBox", "HandleAddDecCurNumChanged");
    struct
    {
        int32_t InCurNum;
        int32_t InChangeNum;
    } Parms{};
    Parms.InCurNum = (int32_t)InCurNum;
    Parms.InChangeNum = (int32_t)InChangeNum;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFCommonAddDecInputText::* ----
void UDFCommonAddDecInputText::InitNum(int32_t InCurNum, int32_t InStepNum, int32_t InMinNum, int32_t InMaxNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonAddDecInputText", "InitNum");
    struct
    {
        int32_t InCurNum;
        int32_t InStepNum;
        int32_t InMinNum;
        int32_t InMaxNum;
    } Parms{};
    Parms.InCurNum = (int32_t)InCurNum;
    Parms.InStepNum = (int32_t)InStepNum;
    Parms.InMinNum = (int32_t)InMinNum;
    Parms.InMaxNum = (int32_t)InMaxNum;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonAddDecInputText::HandleInputTextCommitted(const struct FText& InText, ETextCommit CommitMethod)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonAddDecInputText", "HandleInputTextCommitted");
    struct
    {
        struct FText InText;
        enum ETextCommit CommitMethod;
    } Parms{};
    Parms.InText = (struct FText)InText;
    Parms.CommitMethod = (enum ETextCommit)CommitMethod;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonAddDecInputText::HandleInputTextChanged(const struct FText& InText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonAddDecInputText", "HandleInputTextChanged");
    struct
    {
        struct FText InText;
    } Parms{};
    Parms.InText = (struct FText)InText;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonAddDecInputText::HandleAddDecCurNumChanged(int32_t InCurNum, int32_t InChangeNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonAddDecInputText", "HandleAddDecCurNumChanged");
    struct
    {
        int32_t InCurNum;
        int32_t InChangeNum;
    } Parms{};
    Parms.InCurNum = (int32_t)InCurNum;
    Parms.InChangeNum = (int32_t)InChangeNum;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFCommonAddDecSlider::* ----
void UDFCommonAddDecSlider::SetBandMinValue(int32_t InBandMinValue, uint8_t bInBandMinValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonAddDecSlider", "SetBandMinValue");
    struct
    {
        int32_t InBandMinValue;
        uint8_t bInBandMinValue;
    } Parms{};
    Parms.InBandMinValue = (int32_t)InBandMinValue;
    Parms.bInBandMinValue = (uint8_t)bInBandMinValue;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonAddDecSlider::InitNum(int32_t InCurNum, int32_t InStepNum, int32_t InMinNum, int32_t InMaxNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonAddDecSlider", "InitNum");
    struct
    {
        int32_t InCurNum;
        int32_t InStepNum;
        int32_t InMinNum;
        int32_t InMaxNum;
    } Parms{};
    Parms.InCurNum = (int32_t)InCurNum;
    Parms.InStepNum = (int32_t)InStepNum;
    Parms.InMinNum = (int32_t)InMinNum;
    Parms.InMaxNum = (int32_t)InMaxNum;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonAddDecSlider::HandleSliderValueChanged(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonAddDecSlider", "HandleSliderValueChanged");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonAddDecSlider::HandleSliderMouseCaptureEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonAddDecSlider", "HandleSliderMouseCaptureEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonAddDecSlider::HandleAddDecCurNumChanged(int32_t InCurNum, int32_t InChangeNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonAddDecSlider", "HandleAddDecCurNumChanged");
    struct
    {
        int32_t InCurNum;
        int32_t InChangeNum;
    } Parms{};
    Parms.InCurNum = (int32_t)InCurNum;
    Parms.InChangeNum = (int32_t)InChangeNum;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFCommonButton::* ----
void UDFCommonButton::SetThemeStyleByID(EDFButtonPresetStyleType InPresetStyleType, struct FString InThemeID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "SetThemeStyleByID");
    struct
    {
        enum EDFButtonPresetStyleType InPresetStyleType;
        struct FString InThemeID;
    } Parms{};
    Parms.InPresetStyleType = (enum EDFButtonPresetStyleType)InPresetStyleType;
    Parms.InThemeID = (struct FString)InThemeID;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::SetThemeStyle(const struct FDFCommonButtonStyle& InStyle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "SetThemeStyle");
    struct
    {
        struct FDFCommonButtonStyle InStyle;
    } Parms{};
    Parms.InStyle = (struct FDFCommonButtonStyle)InStyle;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::SetPressedSoundName(struct FName InPressedSoundName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "SetPressedSoundName");
    struct
    {
        struct FName InPressedSoundName;
    } Parms{};
    Parms.InPressedSoundName = (struct FName)InPressedSoundName;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::SetMainTitleTextScale4ButtonState(float RichTextScale, EButtonState InButtonState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "SetMainTitleTextScale4ButtonState");
    struct
    {
        float RichTextScale;
        enum EButtonState InButtonState;
    } Parms{};
    Parms.RichTextScale = (float)RichTextScale;
    Parms.InButtonState = (enum EButtonState)InButtonState;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::SetMainTitleTextScale4AllState(float RichTextScale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "SetMainTitleTextScale4AllState");
    struct
    {
        float RichTextScale;
    } Parms{};
    Parms.RichTextScale = (float)RichTextScale;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::SetMainTitleTextScale(float RichTextScale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "SetMainTitleTextScale");
    struct
    {
        float RichTextScale;
    } Parms{};
    Parms.RichTextScale = (float)RichTextScale;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::SetMainTitleText4ButtonState(struct FText LuaText, EButtonState InButtonState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "SetMainTitleText4ButtonState");
    struct
    {
        struct FText LuaText;
        enum EButtonState InButtonState;
    } Parms{};
    Parms.LuaText = (struct FText)LuaText;
    Parms.InButtonState = (enum EButtonState)InButtonState;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::SetMainTitleText4AllState(struct FText LuaText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "SetMainTitleText4AllState");
    struct
    {
        struct FText LuaText;
    } Parms{};
    Parms.LuaText = (struct FText)LuaText;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::SetMainTitleText(struct FText LuaText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "SetMainTitleText");
    struct
    {
        struct FText LuaText;
    } Parms{};
    Parms.LuaText = (struct FText)LuaText;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::SetIsShowMainTitle(uint8_t bInShowMainTitle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "SetIsShowMainTitle");
    struct
    {
        uint8_t bInShowMainTitle;
    } Parms{};
    Parms.bInShowMainTitle = (uint8_t)bInShowMainTitle;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::SetIsShowIcon(uint8_t bInShowIcon)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "SetIsShowIcon");
    struct
    {
        uint8_t bInShowIcon;
    } Parms{};
    Parms.bInShowIcon = (uint8_t)bInShowIcon;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::SetIsShowHighlight(uint8_t bInShowHighLight)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "SetIsShowHighlight");
    struct
    {
        uint8_t bInShowHighLight;
    } Parms{};
    Parms.bInShowHighLight = (uint8_t)bInShowHighLight;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::SetIsEnabledStyle(uint8_t bEnabledStyle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "SetIsEnabledStyle");
    struct
    {
        uint8_t bEnabledStyle;
    } Parms{};
    Parms.bEnabledStyle = (uint8_t)bEnabledStyle;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::SetImageIconFromSoftAtlasInterface4DeactiveState(struct TSoftObjectPtr<UObject> SoftTexture, uint8_t bMatchSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "SetImageIconFromSoftAtlasInterface4DeactiveState");
    struct
    {
        struct TSoftObjectPtr<UObject> SoftTexture;
        uint8_t bMatchSize;
    } Parms{};
    Parms.SoftTexture = (struct TSoftObjectPtr<UObject>)SoftTexture;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::SetImageIconFromSoftAtlasInterface4ButtonState(struct TSoftObjectPtr<UObject> SoftTexture, EButtonState InButtonState, uint8_t bMatchSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "SetImageIconFromSoftAtlasInterface4ButtonState");
    struct
    {
        struct TSoftObjectPtr<UObject> SoftTexture;
        enum EButtonState InButtonState;
        uint8_t bMatchSize;
    } Parms{};
    Parms.SoftTexture = (struct TSoftObjectPtr<UObject>)SoftTexture;
    Parms.InButtonState = (enum EButtonState)InButtonState;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::SetImageIconFromSoftAtlasInterface4AllState(struct TSoftObjectPtr<UObject> SoftTexture, uint8_t bMatchSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "SetImageIconFromSoftAtlasInterface4AllState");
    struct
    {
        struct TSoftObjectPtr<UObject> SoftTexture;
        uint8_t bMatchSize;
    } Parms{};
    Parms.SoftTexture = (struct TSoftObjectPtr<UObject>)SoftTexture;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::SetImageIconFromSoftAtlasInterface4ActiveState(struct TSoftObjectPtr<UObject> SoftTexture, uint8_t bMatchSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "SetImageIconFromSoftAtlasInterface4ActiveState");
    struct
    {
        struct TSoftObjectPtr<UObject> SoftTexture;
        uint8_t bMatchSize;
    } Parms{};
    Parms.SoftTexture = (struct TSoftObjectPtr<UObject>)SoftTexture;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::SetImageIconFromSoftAtlasInterface(struct TSoftObjectPtr<UObject> SoftTexture, uint8_t bMatchSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "SetImageIconFromSoftAtlasInterface");
    struct
    {
        struct TSoftObjectPtr<UObject> SoftTexture;
        uint8_t bMatchSize;
    } Parms{};
    Parms.SoftTexture = (struct TSoftObjectPtr<UObject>)SoftTexture;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::SetImageIconFromAtlasInterface4DeactiveState(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, uint8_t bMatchSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "SetImageIconFromAtlasInterface4DeactiveState");
    struct
    {
        struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion;
        uint8_t bMatchSize;
    } Parms{};
    Parms.AtlasRegion = (struct TScriptInterface<ISlateTextureAtlasInterface>)AtlasRegion;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::SetImageIconFromAtlasInterface4ButtonState(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, EButtonState InButtonState, uint8_t bMatchSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "SetImageIconFromAtlasInterface4ButtonState");
    struct
    {
        struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion;
        enum EButtonState InButtonState;
        uint8_t bMatchSize;
    } Parms{};
    Parms.AtlasRegion = (struct TScriptInterface<ISlateTextureAtlasInterface>)AtlasRegion;
    Parms.InButtonState = (enum EButtonState)InButtonState;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::SetImageIconFromAtlasInterface4AllState(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, uint8_t bMatchSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "SetImageIconFromAtlasInterface4AllState");
    struct
    {
        struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion;
        uint8_t bMatchSize;
    } Parms{};
    Parms.AtlasRegion = (struct TScriptInterface<ISlateTextureAtlasInterface>)AtlasRegion;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::SetImageIconFromAtlasInterface4ActiveState(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, uint8_t bMatchSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "SetImageIconFromAtlasInterface4ActiveState");
    struct
    {
        struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion;
        uint8_t bMatchSize;
    } Parms{};
    Parms.AtlasRegion = (struct TScriptInterface<ISlateTextureAtlasInterface>)AtlasRegion;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::SetImageIconFromAtlasInterface(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, uint8_t bMatchSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "SetImageIconFromAtlasInterface");
    struct
    {
        struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion;
        uint8_t bMatchSize;
    } Parms{};
    Parms.AtlasRegion = (struct TScriptInterface<ISlateTextureAtlasInterface>)AtlasRegion;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::SetImageIcon4DeactiveState(struct UObject* InResourceObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "SetImageIcon4DeactiveState");
    struct
    {
        struct UObject* InResourceObject;
    } Parms{};
    Parms.InResourceObject = (struct UObject*)InResourceObject;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::SetImageIcon4ButtonState(struct UObject* InResourceObject, EButtonState InButtonState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "SetImageIcon4ButtonState");
    struct
    {
        struct UObject* InResourceObject;
        enum EButtonState InButtonState;
    } Parms{};
    Parms.InResourceObject = (struct UObject*)InResourceObject;
    Parms.InButtonState = (enum EButtonState)InButtonState;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::SetImageIcon4AllState(struct UObject* InResourceObject, uint8_t bMatchSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "SetImageIcon4AllState");
    struct
    {
        struct UObject* InResourceObject;
        uint8_t bMatchSize;
    } Parms{};
    Parms.InResourceObject = (struct UObject*)InResourceObject;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::SetImageIcon4ActiveState(struct UObject* InResourceObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "SetImageIcon4ActiveState");
    struct
    {
        struct UObject* InResourceObject;
    } Parms{};
    Parms.InResourceObject = (struct UObject*)InResourceObject;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::SetImageIcon(struct UObject* InResourceObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "SetImageIcon");
    struct
    {
        struct UObject* InResourceObject;
    } Parms{};
    Parms.InResourceObject = (struct UObject*)InResourceObject;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::SetImageBackGround4ButtonState(struct UObject* InResourceObject, EButtonState InButtonState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "SetImageBackGround4ButtonState");
    struct
    {
        struct UObject* InResourceObject;
        enum EButtonState InButtonState;
    } Parms{};
    Parms.InResourceObject = (struct UObject*)InResourceObject;
    Parms.InButtonState = (enum EButtonState)InButtonState;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::SetImageBackGround4AllState(struct UObject* InResourceObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "SetImageBackGround4AllState");
    struct
    {
        struct UObject* InResourceObject;
    } Parms{};
    Parms.InResourceObject = (struct UObject*)InResourceObject;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::SetImageBackGround(struct UObject* InResourceObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "SetImageBackGround");
    struct
    {
        struct UObject* InResourceObject;
    } Parms{};
    Parms.InResourceObject = (struct UObject*)InResourceObject;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::SetHoveredSoundName(struct FName InHoveredSoundName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "SetHoveredSoundName");
    struct
    {
        struct FName InHoveredSoundName;
    } Parms{};
    Parms.InHoveredSoundName = (struct FName)InHoveredSoundName;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::SetCustomExtendHitForButton(struct FMargin ExtendMargin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "SetCustomExtendHitForButton");
    struct
    {
        struct FMargin ExtendMargin;
    } Parms{};
    Parms.ExtendMargin = (struct FMargin)ExtendMargin;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::SetButtonID(int64_t NewButtonID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "SetButtonID");
    struct
    {
        int64_t NewButtonID;
    } Parms{};
    Parms.NewButtonID = (int64_t)NewButtonID;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::RevertOriginalSoundNames()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "RevertOriginalSoundNames");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::ManuelSetButtonState(EButtonState InButtonState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "ManuelSetButtonState");
    struct
    {
        enum EButtonState InButtonState;
    } Parms{};
    Parms.InButtonState = (enum EButtonState)InButtonState;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::HandleUnhovered()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "HandleUnhovered");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::HandleReleasedNoClicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "HandleReleasedNoClicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::HandleReleased()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "HandleReleased");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::HandlePressed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "HandlePressed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::HandleHovered()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "HandleHovered");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::HandleFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "HandleFocusReceived");
    struct
    {
        struct FGeometry MyGeometry;
        struct FFocusEvent InFocusEvent;
    } Parms{};
    Parms.MyGeometry = (struct FGeometry)MyGeometry;
    Parms.InFocusEvent = (struct FFocusEvent)InFocusEvent;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::HandleFocusLost(const struct FFocusEvent& InFocusEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "HandleFocusLost");
    struct
    {
        struct FFocusEvent InFocusEvent;
    } Parms{};
    Parms.InFocusEvent = (struct FFocusEvent)InFocusEvent;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::HandleClicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "HandleClicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButton::ClearThemeStyle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButton", "ClearThemeStyle");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFCommonCheckButton::* ----
void UDFCommonCheckButton::SetUncheckedSoundName(struct FName InUncheckedSoundName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "SetUncheckedSoundName");
    struct
    {
        struct FName InUncheckedSoundName;
    } Parms{};
    Parms.InUncheckedSoundName = (struct FName)InUncheckedSoundName;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::SetThemeStyleByID(EDFCheckButtonPresetStyleType InPresetStyleType, struct FString InThemeID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "SetThemeStyleByID");
    struct
    {
        enum EDFCheckButtonPresetStyleType InPresetStyleType;
        struct FString InThemeID;
    } Parms{};
    Parms.InPresetStyleType = (enum EDFCheckButtonPresetStyleType)InPresetStyleType;
    Parms.InThemeID = (struct FString)InThemeID;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::SetThemeStyle(const struct FDFCommonCheckButtonStyle& InStyle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "SetThemeStyle");
    struct
    {
        struct FDFCommonCheckButtonStyle InStyle;
    } Parms{};
    Parms.InStyle = (struct FDFCommonCheckButtonStyle)InStyle;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::SetNamedSlotVisibility(ESlateVisibility InVisibility)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "SetNamedSlotVisibility");
    struct
    {
        enum ESlateVisibility InVisibility;
    } Parms{};
    Parms.InVisibility = (enum ESlateVisibility)InVisibility;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::SetMainTitleTextScale4ButtonState(float RichTextScale, ECheckButtonState InCheckButtonState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "SetMainTitleTextScale4ButtonState");
    struct
    {
        float RichTextScale;
        enum ECheckButtonState InCheckButtonState;
    } Parms{};
    Parms.RichTextScale = (float)RichTextScale;
    Parms.InCheckButtonState = (enum ECheckButtonState)InCheckButtonState;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::SetMainTitleTextScale4AllState(float RichTextScale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "SetMainTitleTextScale4AllState");
    struct
    {
        float RichTextScale;
    } Parms{};
    Parms.RichTextScale = (float)RichTextScale;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::SetMainTitleTextScale(float RichTextScale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "SetMainTitleTextScale");
    struct
    {
        float RichTextScale;
    } Parms{};
    Parms.RichTextScale = (float)RichTextScale;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::SetMainTitleText4ButtonState(struct FText LuaText, ECheckButtonState InCheckButtonState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "SetMainTitleText4ButtonState");
    struct
    {
        struct FText LuaText;
        enum ECheckButtonState InCheckButtonState;
    } Parms{};
    Parms.LuaText = (struct FText)LuaText;
    Parms.InCheckButtonState = (enum ECheckButtonState)InCheckButtonState;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::SetMainTitleText4AllState(struct FText LuaText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "SetMainTitleText4AllState");
    struct
    {
        struct FText LuaText;
    } Parms{};
    Parms.LuaText = (struct FText)LuaText;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::SetMainTitleText(struct FText LuaText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "SetMainTitleText");
    struct
    {
        struct FText LuaText;
    } Parms{};
    Parms.LuaText = (struct FText)LuaText;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::SetIsShowMainTitle(uint8_t bInShowMainTitle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "SetIsShowMainTitle");
    struct
    {
        uint8_t bInShowMainTitle;
    } Parms{};
    Parms.bInShowMainTitle = (uint8_t)bInShowMainTitle;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::SetIsShowIcon(uint8_t bInShowIcon)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "SetIsShowIcon");
    struct
    {
        uint8_t bInShowIcon;
    } Parms{};
    Parms.bInShowIcon = (uint8_t)bInShowIcon;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::SetIsShowHighlight(uint8_t bInShowHighLight)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "SetIsShowHighlight");
    struct
    {
        uint8_t bInShowHighLight;
    } Parms{};
    Parms.bInShowHighLight = (uint8_t)bInShowHighLight;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::SetIsLockedStyle(uint8_t bIsLockState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "SetIsLockedStyle");
    struct
    {
        uint8_t bIsLockState;
    } Parms{};
    Parms.bIsLockState = (uint8_t)bIsLockState;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::SetIsEnabledStyle(uint8_t bEnabledStyle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "SetIsEnabledStyle");
    struct
    {
        uint8_t bEnabledStyle;
    } Parms{};
    Parms.bEnabledStyle = (uint8_t)bEnabledStyle;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::SetIsChecked(uint8_t InIsChecked)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "SetIsChecked");
    struct
    {
        uint8_t InIsChecked;
    } Parms{};
    Parms.InIsChecked = (uint8_t)InIsChecked;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::SetImageIconFromSoftAtlasInterface4UncheckState(struct TSoftObjectPtr<UObject> SoftTexture, uint8_t bMatchSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "SetImageIconFromSoftAtlasInterface4UncheckState");
    struct
    {
        struct TSoftObjectPtr<UObject> SoftTexture;
        uint8_t bMatchSize;
    } Parms{};
    Parms.SoftTexture = (struct TSoftObjectPtr<UObject>)SoftTexture;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::SetImageIconFromSoftAtlasInterface4CheckState(struct TSoftObjectPtr<UObject> SoftTexture, uint8_t bMatchSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "SetImageIconFromSoftAtlasInterface4CheckState");
    struct
    {
        struct TSoftObjectPtr<UObject> SoftTexture;
        uint8_t bMatchSize;
    } Parms{};
    Parms.SoftTexture = (struct TSoftObjectPtr<UObject>)SoftTexture;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::SetImageIconFromSoftAtlasInterface4ButtonState(struct TSoftObjectPtr<UObject> SoftTexture, ECheckButtonState InCheckButtonState, uint8_t bMatchSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "SetImageIconFromSoftAtlasInterface4ButtonState");
    struct
    {
        struct TSoftObjectPtr<UObject> SoftTexture;
        enum ECheckButtonState InCheckButtonState;
        uint8_t bMatchSize;
    } Parms{};
    Parms.SoftTexture = (struct TSoftObjectPtr<UObject>)SoftTexture;
    Parms.InCheckButtonState = (enum ECheckButtonState)InCheckButtonState;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::SetImageIconFromSoftAtlasInterface4AllState(struct TSoftObjectPtr<UObject> SoftTexture, uint8_t bMatchSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "SetImageIconFromSoftAtlasInterface4AllState");
    struct
    {
        struct TSoftObjectPtr<UObject> SoftTexture;
        uint8_t bMatchSize;
    } Parms{};
    Parms.SoftTexture = (struct TSoftObjectPtr<UObject>)SoftTexture;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::SetImageIconFromSoftAtlasInterface(struct TSoftObjectPtr<UObject> SoftTexture, uint8_t bMatchSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "SetImageIconFromSoftAtlasInterface");
    struct
    {
        struct TSoftObjectPtr<UObject> SoftTexture;
        uint8_t bMatchSize;
    } Parms{};
    Parms.SoftTexture = (struct TSoftObjectPtr<UObject>)SoftTexture;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::SetImageIconFromAtlasInterface4UncheckState(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, uint8_t bMatchSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "SetImageIconFromAtlasInterface4UncheckState");
    struct
    {
        struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion;
        uint8_t bMatchSize;
    } Parms{};
    Parms.AtlasRegion = (struct TScriptInterface<ISlateTextureAtlasInterface>)AtlasRegion;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::SetImageIconFromAtlasInterface4CheckState(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, uint8_t bMatchSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "SetImageIconFromAtlasInterface4CheckState");
    struct
    {
        struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion;
        uint8_t bMatchSize;
    } Parms{};
    Parms.AtlasRegion = (struct TScriptInterface<ISlateTextureAtlasInterface>)AtlasRegion;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::SetImageIconFromAtlasInterface4ButtonState(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, ECheckButtonState InCheckButtonState, uint8_t bMatchSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "SetImageIconFromAtlasInterface4ButtonState");
    struct
    {
        struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion;
        enum ECheckButtonState InCheckButtonState;
        uint8_t bMatchSize;
    } Parms{};
    Parms.AtlasRegion = (struct TScriptInterface<ISlateTextureAtlasInterface>)AtlasRegion;
    Parms.InCheckButtonState = (enum ECheckButtonState)InCheckButtonState;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::SetImageIconFromAtlasInterface4AllState(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, uint8_t bMatchSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "SetImageIconFromAtlasInterface4AllState");
    struct
    {
        struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion;
        uint8_t bMatchSize;
    } Parms{};
    Parms.AtlasRegion = (struct TScriptInterface<ISlateTextureAtlasInterface>)AtlasRegion;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::SetImageIconFromAtlasInterface(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, uint8_t bMatchSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "SetImageIconFromAtlasInterface");
    struct
    {
        struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion;
        uint8_t bMatchSize;
    } Parms{};
    Parms.AtlasRegion = (struct TScriptInterface<ISlateTextureAtlasInterface>)AtlasRegion;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::SetImageIcon4UncheckState(struct UObject* InResourceObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "SetImageIcon4UncheckState");
    struct
    {
        struct UObject* InResourceObject;
    } Parms{};
    Parms.InResourceObject = (struct UObject*)InResourceObject;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::SetImageIcon4CheckState(struct UObject* InResourceObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "SetImageIcon4CheckState");
    struct
    {
        struct UObject* InResourceObject;
    } Parms{};
    Parms.InResourceObject = (struct UObject*)InResourceObject;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::SetImageIcon4ButtonState(struct UObject* InResourceObject, ECheckButtonState InCheckButtonState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "SetImageIcon4ButtonState");
    struct
    {
        struct UObject* InResourceObject;
        enum ECheckButtonState InCheckButtonState;
    } Parms{};
    Parms.InResourceObject = (struct UObject*)InResourceObject;
    Parms.InCheckButtonState = (enum ECheckButtonState)InCheckButtonState;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::SetImageIcon4AllState(struct UObject* InResourceObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "SetImageIcon4AllState");
    struct
    {
        struct UObject* InResourceObject;
    } Parms{};
    Parms.InResourceObject = (struct UObject*)InResourceObject;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::SetImageIcon(struct UObject* InResourceObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "SetImageIcon");
    struct
    {
        struct UObject* InResourceObject;
    } Parms{};
    Parms.InResourceObject = (struct UObject*)InResourceObject;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::SetImageBackGround4ButtonState(struct UObject* InResourceObject, ECheckButtonState InCheckButtonState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "SetImageBackGround4ButtonState");
    struct
    {
        struct UObject* InResourceObject;
        enum ECheckButtonState InCheckButtonState;
    } Parms{};
    Parms.InResourceObject = (struct UObject*)InResourceObject;
    Parms.InCheckButtonState = (enum ECheckButtonState)InCheckButtonState;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::SetImageBackGround4AllState(struct UObject* InResourceObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "SetImageBackGround4AllState");
    struct
    {
        struct UObject* InResourceObject;
    } Parms{};
    Parms.InResourceObject = (struct UObject*)InResourceObject;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::SetImageBackGround(struct UObject* InResourceObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "SetImageBackGround");
    struct
    {
        struct UObject* InResourceObject;
    } Parms{};
    Parms.InResourceObject = (struct UObject*)InResourceObject;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::SetHoveredSoundName(struct FName InHoveredSoundName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "SetHoveredSoundName");
    struct
    {
        struct FName InHoveredSoundName;
    } Parms{};
    Parms.InHoveredSoundName = (struct FName)InHoveredSoundName;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::SetCheckedSoundName(struct FName InCheckedSoundName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "SetCheckedSoundName");
    struct
    {
        struct FName InCheckedSoundName;
    } Parms{};
    Parms.InCheckedSoundName = (struct FName)InCheckedSoundName;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::SetButtonID(int64_t NewButtonID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "SetButtonID");
    struct
    {
        int64_t NewButtonID;
    } Parms{};
    Parms.NewButtonID = (int64_t)NewButtonID;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::RevertOriginalSoundNames()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "RevertOriginalSoundNames");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::NavigationClick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "NavigationClick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::ManuelSetCheckButtonState(ECheckButtonState InCheckButtonState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "ManuelSetCheckButtonState");
    struct
    {
        enum ECheckButtonState InCheckButtonState;
    } Parms{};
    Parms.InCheckButtonState = (enum ECheckButtonState)InCheckButtonState;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFCommonCheckButton::IsChecked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "IsChecked");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFCommonCheckButton::HandleUncheckedUnhovered()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "HandleUncheckedUnhovered");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::HandleUncheckedReleasedNoClicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "HandleUncheckedReleasedNoClicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::HandleUncheckedReleased()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "HandleUncheckedReleased");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::HandleUncheckedPressed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "HandleUncheckedPressed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::HandleUncheckedHovered()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "HandleUncheckedHovered");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::HandleUncheckedClicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "HandleUncheckedClicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::HandleFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "HandleFocusReceived");
    struct
    {
        struct FGeometry MyGeometry;
        struct FFocusEvent InFocusEvent;
    } Parms{};
    Parms.MyGeometry = (struct FGeometry)MyGeometry;
    Parms.InFocusEvent = (struct FFocusEvent)InFocusEvent;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::HandleFocusLost(const struct FFocusEvent& InFocusEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "HandleFocusLost");
    struct
    {
        struct FFocusEvent InFocusEvent;
    } Parms{};
    Parms.InFocusEvent = (struct FFocusEvent)InFocusEvent;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::HandleCheckStateChanged(uint8_t bIsChecked)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "HandleCheckStateChanged");
    struct
    {
        uint8_t bIsChecked;
    } Parms{};
    Parms.bIsChecked = (uint8_t)bIsChecked;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::HandleCheckedUnhovered()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "HandleCheckedUnhovered");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::HandleCheckedReleasedNoClicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "HandleCheckedReleasedNoClicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::HandleCheckedReleased()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "HandleCheckedReleased");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::HandleCheckedPressed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "HandleCheckedPressed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::HandleCheckedHovered()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "HandleCheckedHovered");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::HandleCheckedClicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "HandleCheckedClicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFCommonCheckButton::GetCanBeChecked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "GetCanBeChecked");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFCommonCheckButton::DelayFadeInAnimation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "DelayFadeInAnimation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::ClearThemeStyle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "ClearThemeStyle");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonCheckButton::ApplyTabContent(const struct FDFCommonTabContent& TabContent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonCheckButton", "ApplyTabContent");
    struct
    {
        struct FDFCommonTabContent TabContent;
    } Parms{};
    Parms.TabContent = (struct FDFCommonTabContent)TabContent;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFCommonTabWidget::* ----
struct UDFCommonCheckButton* UDFCommonTabWidget::TryGetCheckButton(struct UWidget* ItemWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabWidget", "TryGetCheckButton");
    struct
    {
        struct UWidget* ItemWidget;
        struct UDFCommonCheckButton* ReturnValue;
    } Parms{};
    Parms.ItemWidget = (struct UWidget*)ItemWidget;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFCommonTabWidget::SetThemeStyleByID(EDFCheckButtonPresetStyleType InPresetStyleType, struct FString InThemeID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabWidget", "SetThemeStyleByID");
    struct
    {
        enum EDFCheckButtonPresetStyleType InPresetStyleType;
        struct FString InThemeID;
    } Parms{};
    Parms.InPresetStyleType = (enum EDFCheckButtonPresetStyleType)InPresetStyleType;
    Parms.InThemeID = (struct FString)InThemeID;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonTabWidget::SetThemeStyle(const struct FDFCommonCheckButtonStyle& InStyle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabWidget", "SetThemeStyle");
    struct
    {
        struct FDFCommonCheckButtonStyle InStyle;
    } Parms{};
    Parms.InStyle = (struct FDFCommonCheckButtonStyle)InStyle;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonTabWidget::SetTabIndex(int32_t Index, uint8_t bCallUserDelegate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabWidget", "SetTabIndex");
    struct
    {
        int32_t Index;
        uint8_t bCallUserDelegate;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.bCallUserDelegate = (uint8_t)bCallUserDelegate;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonTabWidget::SetScrollGridBoxVolatile(uint8_t bForceVolatile)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabWidget", "SetScrollGridBoxVolatile");
    struct
    {
        uint8_t bForceVolatile;
    } Parms{};
    Parms.bForceVolatile = (uint8_t)bForceVolatile;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonTabWidget::SetItemOptionSize(struct FVector2D OptionSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabWidget", "SetItemOptionSize");
    struct
    {
        struct FVector2D OptionSize;
    } Parms{};
    Parms.OptionSize = (struct FVector2D)OptionSize;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonTabWidget::SetAllTabUncheckedSoundName(struct FName InUncheckedSoundName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabWidget", "SetAllTabUncheckedSoundName");
    struct
    {
        struct FName InUncheckedSoundName;
    } Parms{};
    Parms.InUncheckedSoundName = (struct FName)InUncheckedSoundName;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonTabWidget::SetAllTabHoveredSoundName(struct FName InHoveredSoundName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabWidget", "SetAllTabHoveredSoundName");
    struct
    {
        struct FName InHoveredSoundName;
    } Parms{};
    Parms.InHoveredSoundName = (struct FName)InHoveredSoundName;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonTabWidget::SetAllTabCheckedSoundName(struct FName InCheckedSoundName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabWidget", "SetAllTabCheckedSoundName");
    struct
    {
        struct FName InCheckedSoundName;
    } Parms{};
    Parms.InCheckedSoundName = (struct FName)InCheckedSoundName;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonTabWidget::RevertAllTabOriginalSoundNames()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabWidget", "RevertAllTabOriginalSoundNames");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonTabWidget::RefreshTab()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabWidget", "RefreshTab");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonTabWidget::OnUserProcessTabSlot(int32_t Position, struct UWidget* ItemWidget, struct UPanelSlot* ItemSlot, int32_t TotalCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabWidget", "OnUserProcessTabSlot");
    struct
    {
        int32_t Position;
        struct UWidget* ItemWidget;
        struct UPanelSlot* ItemSlot;
        int32_t TotalCount;
    } Parms{};
    Parms.Position = (int32_t)Position;
    Parms.ItemWidget = (struct UWidget*)ItemWidget;
    Parms.ItemSlot = (struct UPanelSlot*)ItemSlot;
    Parms.TotalCount = (int32_t)TotalCount;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonTabWidget::OnProcessItemWidget(int32_t Position, struct UWidget* ItemWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabWidget", "OnProcessItemWidget");
    struct
    {
        int32_t Position;
        struct UWidget* ItemWidget;
    } Parms{};
    Parms.Position = (int32_t)Position;
    Parms.ItemWidget = (struct UWidget*)ItemWidget;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonTabWidget::OnProcessItemsUpdateFinished()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabWidget", "OnProcessItemsUpdateFinished");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonTabWidget::OnPreviewProcessItemWidget(int32_t Position, struct UWidget* ItemWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabWidget", "OnPreviewProcessItemWidget");
    struct
    {
        int32_t Position;
        struct UWidget* ItemWidget;
    } Parms{};
    Parms.Position = (int32_t)Position;
    Parms.ItemWidget = (struct UWidget*)ItemWidget;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonTabWidget::OnPrev()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabWidget", "OnPrev");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonTabWidget::OnNext()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabWidget", "OnNext");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

int32_t UDFCommonTabWidget::OnGetItemCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabWidget", "OnGetItemCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFCommonTabWidget::NavigationClickByIndex(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabWidget", "NavigationClickByIndex");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonTabWidget::MuteAllTabOriginalSoundNames()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabWidget", "MuteAllTabOriginalSoundNames");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

int32_t UDFCommonTabWidget::GetMaxIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabWidget", "GetMaxIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWidget* UDFCommonTabWidget::GetLastItemWidget(uint8_t bOnlyVisible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabWidget", "GetLastItemWidget");
    struct
    {
        uint8_t bOnlyVisible;
        struct UWidget* ReturnValue;
    } Parms{};
    Parms.bOnlyVisible = (uint8_t)bOnlyVisible;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWidget* UDFCommonTabWidget::GetItemWidgetByIndex(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabWidget", "GetItemWidgetByIndex");
    struct
    {
        int32_t Index;
        struct UWidget* ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFCommonTabWidget::GetCurSelectedIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabWidget", "GetCurSelectedIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFCommonTabWidget::GetCanBeCheckedByIndex(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabWidget", "GetCanBeCheckedByIndex");
    struct
    {
        int32_t Index;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFCommonTabWidget::ClearThemeStyle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabWidget", "ClearThemeStyle");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFCommonDropDownBox::* ----
void UDFCommonDropDownBox::TickWhenMenuOpen()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonDropDownBox", "TickWhenMenuOpen");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonDropDownBox::SetSubItems(struct TArray<struct FText> KeyText, struct TArray<struct FText> RightTexts)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonDropDownBox", "SetSubItems");
    struct
    {
        struct TArray<struct FText> KeyText;
        struct TArray<struct FText> RightTexts;
    } Parms{};
    Parms.KeyText = (struct TArray<struct FText>)KeyText;
    Parms.RightTexts = (struct TArray<struct FText>)RightTexts;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonDropDownBox::SetMenuAnchorDirection(uint8_t bDown)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonDropDownBox", "SetMenuAnchorDirection");
    struct
    {
        uint8_t bDown;
    } Parms{};
    Parms.bDown = (uint8_t)bDown;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonDropDownBox::SetIsShowArrow(uint8_t bShowArrow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonDropDownBox", "SetIsShowArrow");
    struct
    {
        uint8_t bShowArrow;
    } Parms{};
    Parms.bShowArrow = (uint8_t)bShowArrow;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonDropDownBox::SetDisabledItems(struct TArray<int32_t> InDisabledItems)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonDropDownBox", "SetDisabledItems");
    struct
    {
        struct TArray<int32_t> InDisabledItems;
    } Parms{};
    Parms.InDisabledItems = (struct TArray<int32_t>)InDisabledItems;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonDropDownBox::SetDirection(uint8_t bDown)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonDropDownBox", "SetDirection");
    struct
    {
        uint8_t bDown;
    } Parms{};
    Parms.bDown = (uint8_t)bDown;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonDropDownBox::RefreshDropDownBox(uint8_t bCallUserDelegate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonDropDownBox", "RefreshDropDownBox");
    struct
    {
        uint8_t bCallUserDelegate;
    } Parms{};
    Parms.bCallUserDelegate = (uint8_t)bCallUserDelegate;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonDropDownBox::OpenMenu()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonDropDownBox", "OpenMenu");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonDropDownBox::OnTabWidgetProcessItemWidget(int32_t Position, struct UWidget* ItemWidget, int32_t MainTabIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonDropDownBox", "OnTabWidgetProcessItemWidget");
    struct
    {
        int32_t Position;
        struct UWidget* ItemWidget;
        int32_t MainTabIndex;
    } Parms{};
    Parms.Position = (int32_t)Position;
    Parms.ItemWidget = (struct UWidget*)ItemWidget;
    Parms.MainTabIndex = (int32_t)MainTabIndex;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonDropDownBox::OnTabWidgetIndexChanged(int32_t TabIndex, int32_t LastTabIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonDropDownBox", "OnTabWidgetIndexChanged");
    struct
    {
        int32_t TabIndex;
        int32_t LastTabIndex;
    } Parms{};
    Parms.TabIndex = (int32_t)TabIndex;
    Parms.LastTabIndex = (int32_t)LastTabIndex;
    this->ProcessEvent(Func, &Parms);
}

int32_t UDFCommonDropDownBox::OnTabWidgetGetItemCount(int32_t TabKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonDropDownBox", "OnTabWidgetGetItemCount");
    struct
    {
        int32_t TabKey;
        int32_t ReturnValue;
    } Parms{};
    Parms.TabKey = (int32_t)TabKey;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFCommonDropDownBox::OnMenuAnchorOpenChanged(uint8_t bIsOpen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonDropDownBox", "OnMenuAnchorOpenChanged");
    struct
    {
        uint8_t bIsOpen;
    } Parms{};
    Parms.bIsOpen = (uint8_t)bIsOpen;
    this->ProcessEvent(Func, &Parms);
}

struct UWidget* UDFCommonDropDownBox::OnMenuAnchorGetMenuContent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonDropDownBox", "OnMenuAnchorGetMenuContent");
    struct
    {
        struct UWidget* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFCommonDropDownBox::OnDropDownCheckBtnUncheckedReleased()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonDropDownBox", "OnDropDownCheckBtnUncheckedReleased");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonDropDownBox::OnDropDownCheckBtnUncheckedPressed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonDropDownBox", "OnDropDownCheckBtnUncheckedPressed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonDropDownBox::OnDropDownCheckBtnStateChanged(uint8_t bIsChecked)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonDropDownBox", "OnDropDownCheckBtnStateChanged");
    struct
    {
        uint8_t bIsChecked;
    } Parms{};
    Parms.bIsChecked = (uint8_t)bIsChecked;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonDropDownBox::OnDropDownCheckBtnCheckedReleased()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonDropDownBox", "OnDropDownCheckBtnCheckedReleased");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonDropDownBox::OnDropDownCheckBtnCheckedPressed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonDropDownBox", "OnDropDownCheckBtnCheckedPressed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFCommonDropDownBox::IsMenuShow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonDropDownBox", "IsMenuShow");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFCommonDropDownBox::ForceSetMenuVisible(uint8_t bShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonDropDownBox", "ForceSetMenuVisible");
    struct
    {
        uint8_t bShow;
    } Parms{};
    Parms.bShow = (uint8_t)bShow;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonDropDownBox::CloseMenu()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonDropDownBox", "CloseMenu");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFCommonDropDownItem::* ----
void UDFCommonDropDownItem::InitDropDownItem(struct FDropDownItemData InItemData, int32_t InIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonDropDownItem", "InitDropDownItem");
    struct
    {
        struct FDropDownItemData InItemData;
        int32_t InIndex;
    } Parms{};
    Parms.InItemData = (struct FDropDownItemData)InItemData;
    Parms.InIndex = (int32_t)InIndex;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFCommonFilterWidget::* ----
void UDFCommonFilterWidget::SetMainTitleText(struct FText LuaText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonFilterWidget", "SetMainTitleText");
    struct
    {
        struct FText LuaText;
    } Parms{};
    Parms.LuaText = (struct FText)LuaText;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonFilterWidget::SetFilterStateType(EFilterStateType InFilterStateType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonFilterWidget", "SetFilterStateType");
    struct
    {
        enum EFilterStateType InFilterStateType;
    } Parms{};
    Parms.InFilterStateType = (enum EFilterStateType)InFilterStateType;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonFilterWidget::InitType(struct FText LuaText, EFilterStateType InFilterStateType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonFilterWidget", "InitType");
    struct
    {
        struct FText LuaText;
        enum EFilterStateType InFilterStateType;
    } Parms{};
    Parms.LuaText = (struct FText)LuaText;
    Parms.InFilterStateType = (enum EFilterStateType)InFilterStateType;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonFilterWidget::HandleFilterStateTypeChanged(EFilterStateType InFilterStateType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonFilterWidget", "HandleFilterStateTypeChanged");
    struct
    {
        enum EFilterStateType InFilterStateType;
    } Parms{};
    Parms.InFilterStateType = (enum EFilterStateType)InFilterStateType;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonFilterWidget::HandleFilterButtonClicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonFilterWidget", "HandleFilterButtonClicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFCommonMediaView::* ----
void UDFCommonMediaView::StopMedia(uint8_t bIsSkip)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonMediaView", "StopMedia");
    struct
    {
        uint8_t bIsSkip;
    } Parms{};
    Parms.bIsSkip = (uint8_t)bIsSkip;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonMediaView::SkipMovie()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonMediaView", "SkipMovie");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFCommonMediaView::ShowSkipButton()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonMediaView", "ShowSkipButton");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFCommonMediaView::SetVolumeFromConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonMediaView", "SetVolumeFromConfig");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonMediaView::SetVolume(float InVolume)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonMediaView", "SetVolume");
    struct
    {
        float InVolume;
    } Parms{};
    Parms.InVolume = (float)InVolume;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonMediaView::SeekTo(int32_t TargetTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonMediaView", "SeekTo");
    struct
    {
        int32_t TargetTime;
    } Parms{};
    Parms.TargetTime = (int32_t)TargetTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonMediaView::SafeCloseMedia()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonMediaView", "SafeCloseMedia");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonMediaView::ResumeToMediaPlay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonMediaView", "ResumeToMediaPlay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonMediaView::Resume()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonMediaView", "Resume");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonMediaView::Play(struct FString MediaConfigRowName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonMediaView", "Play");
    struct
    {
        struct FString MediaConfigRowName;
    } Parms{};
    Parms.MediaConfigRowName = (struct FString)MediaConfigRowName;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonMediaView::Pause()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonMediaView", "Pause");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonMediaView::OnSkipButtonOnShow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonMediaView", "OnSkipButtonOnShow");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonMediaView::OnSkipButtonOnHide()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonMediaView", "OnSkipButtonOnHide");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonMediaView::OnSkipBtnClicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonMediaView", "OnSkipBtnClicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonMediaView::OnLegacyTextureShowEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonMediaView", "OnLegacyTextureShowEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonMediaView::OnBinkMediaSrtReady()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonMediaView", "OnBinkMediaSrtReady");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonMediaView::MediaPlayEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonMediaView", "MediaPlayEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonMediaView::MediaOpened(struct FString OpenedUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonMediaView", "MediaOpened");
    struct
    {
        struct FString OpenedUrl;
    } Parms{};
    Parms.OpenedUrl = (struct FString)OpenedUrl;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonMediaView::MediaClosed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonMediaView", "MediaClosed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFCommonMediaView::IsPlaying()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonMediaView", "IsPlaying");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFCommonMediaView::IsConfigValid(struct FName InRowName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonMediaView", "IsConfigValid");
    struct
    {
        struct FName InRowName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InRowName = (struct FName)InRowName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFCommonMediaView::HideSkipButton()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonMediaView", "HideSkipButton");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFCommonMediaView::GetTotalTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonMediaView", "GetTotalTime");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFCommonMediaView::GetCurrentUrl()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonMediaView", "GetCurrentUrl");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFCommonMediaView::GetCurMediaTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonMediaView", "GetCurMediaTime");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFCommonMediaView::FallbackToTextureManually()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonMediaView", "FallbackToTextureManually");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFCommonMediaView::EnableCGMediaPlay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFCommonMediaView", "EnableCGMediaPlay");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFCommonMediaView::DynamicPadding()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonMediaView", "DynamicPadding");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFCommonMediaView::CheckPufferFileUsable(struct FString InRowName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFCommonMediaView", "CheckPufferFileUsable");
    struct
    {
        struct FString InRowName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InRowName = (struct FString)InRowName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFCommonPopWindow::* ----
void UDFCommonPopWindow::SetThemeStyleByID(EDFCommonPopWindowStyleType InPresetStyleType, struct FString InThemeID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonPopWindow", "SetThemeStyleByID");
    struct
    {
        enum EDFCommonPopWindowStyleType InPresetStyleType;
        struct FString InThemeID;
    } Parms{};
    Parms.InPresetStyleType = (enum EDFCommonPopWindowStyleType)InPresetStyleType;
    Parms.InThemeID = (struct FString)InThemeID;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonPopWindow::SetThemeStyle(const struct FDFCommonPopWindowStyle& InStyle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonPopWindow", "SetThemeStyle");
    struct
    {
        struct FDFCommonPopWindowStyle InStyle;
    } Parms{};
    Parms.InStyle = (struct FDFCommonPopWindowStyle)InStyle;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonPopWindow::OnCommonPopWindowProcessed(int32_t BtnIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonPopWindow", "OnCommonPopWindowProcessed");
    struct
    {
        int32_t BtnIndex;
    } Parms{};
    Parms.BtnIndex = (int32_t)BtnIndex;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonPopWindow::OnCommonPopWindowClosed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonPopWindow", "OnCommonPopWindowClosed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonPopWindow::ClearThemeStyle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonPopWindow", "ClearThemeStyle");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFCommonProgressBar::* ----
void UDFCommonProgressBar::SetPercent(float InPercent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonProgressBar", "SetPercent");
    struct
    {
        float InPercent;
    } Parms{};
    Parms.InPercent = (float)InPercent;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonProgressBar::SetMaskBarIsClockWise(uint8_t InClockWise)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonProgressBar", "SetMaskBarIsClockWise");
    struct
    {
        uint8_t InClockWise;
    } Parms{};
    Parms.InClockWise = (uint8_t)InClockWise;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonProgressBar::SetMaskBarColorAndOpacity(struct FLinearColor InColorAndOpacity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonProgressBar", "SetMaskBarColorAndOpacity");
    struct
    {
        struct FLinearColor InColorAndOpacity;
    } Parms{};
    Parms.InColorAndOpacity = (struct FLinearColor)InColorAndOpacity;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonProgressBar::SetMaskBarBrushResourceObject(struct UObject* ResourceObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonProgressBar", "SetMaskBarBrushResourceObject");
    struct
    {
        struct UObject* ResourceObject;
    } Parms{};
    Parms.ResourceObject = (struct UObject*)ResourceObject;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonProgressBar::SetMaskBarBrush(const struct FSlateBrush& InBrush)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonProgressBar", "SetMaskBarBrush");
    struct
    {
        struct FSlateBrush InBrush;
    } Parms{};
    Parms.InBrush = (struct FSlateBrush)InBrush;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonProgressBar::SetMainBarIsMarquee(uint8_t InbIsMarquee)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonProgressBar", "SetMainBarIsMarquee");
    struct
    {
        uint8_t InbIsMarquee;
    } Parms{};
    Parms.InbIsMarquee = (uint8_t)InbIsMarquee;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonProgressBar::SetMainBarFillColorAndOpacity(struct FLinearColor InColor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonProgressBar", "SetMainBarFillColorAndOpacity");
    struct
    {
        struct FLinearColor InColor;
    } Parms{};
    Parms.InColor = (struct FLinearColor)InColor;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonProgressBar::SetImageMaskState(uint8_t bHide)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonProgressBar", "SetImageMaskState");
    struct
    {
        uint8_t bHide;
    } Parms{};
    Parms.bHide = (uint8_t)bHide;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonProgressBar::LerpToPercent(float InStartPercent, float InTargetPercent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonProgressBar", "LerpToPercent");
    struct
    {
        float InStartPercent;
        float InTargetPercent;
    } Parms{};
    Parms.InStartPercent = (float)InStartPercent;
    Parms.InTargetPercent = (float)InTargetPercent;
    this->ProcessEvent(Func, &Parms);
}

struct UMaterialInstanceDynamic* UDFCommonProgressBar::GetMaskBarDynamicMaterial()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonProgressBar", "GetMaskBarDynamicMaterial");
    struct
    {
        struct UMaterialInstanceDynamic* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFCommonRoundedRectMaskBase::* ----
void UDFCommonRoundedRectMaskBase::SetEffectVisible(uint8_t bVisible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonRoundedRectMaskBase", "SetEffectVisible");
    struct
    {
        uint8_t bVisible;
    } Parms{};
    Parms.bVisible = (uint8_t)bVisible;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFCommonSlider::* ----
void UDFCommonSlider::SetStepValue(float InStepValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonSlider", "SetStepValue");
    struct
    {
        float InStepValue;
    } Parms{};
    Parms.InStepValue = (float)InStepValue;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonSlider::SetMouseUsesStep(uint8_t InMouseUsesStep)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonSlider", "SetMouseUsesStep");
    struct
    {
        uint8_t InMouseUsesStep;
    } Parms{};
    Parms.InMouseUsesStep = (uint8_t)InMouseUsesStep;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonSlider::OnSliderValueChanged(float InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonSlider", "OnSliderValueChanged");
    struct
    {
        float InValue;
    } Parms{};
    Parms.InValue = (float)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonSlider::OnSliderMouseCaptureEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonSlider", "OnSliderMouseCaptureEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonSlider::OnProcessButtonRightClicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonSlider", "OnProcessButtonRightClicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonSlider::OnProcessButtonLeftClicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonSlider", "OnProcessButtonLeftClicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonSlider::InitValue(float InValue, float InMaxValue, float InMinValue, float InStepValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonSlider", "InitValue");
    struct
    {
        float InValue;
        float InMaxValue;
        float InMinValue;
        float InStepValue;
    } Parms{};
    Parms.InValue = (float)InValue;
    Parms.InMaxValue = (float)InMaxValue;
    Parms.InMinValue = (float)InMinValue;
    Parms.InStepValue = (float)InStepValue;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFCommonTabGroupItem::* ----
void UDFCommonTabGroupItem::SetMainTabIndex(int32_t MainTabIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabGroupItem", "SetMainTabIndex");
    struct
    {
        int32_t MainTabIndex;
    } Parms{};
    Parms.MainTabIndex = (int32_t)MainTabIndex;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonTabGroupItem::SetIsDropDown(uint8_t bIsDropDown)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabGroupItem", "SetIsDropDown");
    struct
    {
        uint8_t bIsDropDown;
    } Parms{};
    Parms.bIsDropDown = (uint8_t)bIsDropDown;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonTabGroupItem::SetIsCheckedInGroup(uint8_t bIsCheckedInGroup)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabGroupItem", "SetIsCheckedInGroup");
    struct
    {
        uint8_t bIsCheckedInGroup;
    } Parms{};
    Parms.bIsCheckedInGroup = (uint8_t)bIsCheckedInGroup;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonTabGroupItem::OnSetIsDropDown(uint8_t bIsDropDown)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabGroupItem", "OnSetIsDropDown");
    struct
    {
        uint8_t bIsDropDown;
    } Parms{};
    Parms.bIsDropDown = (uint8_t)bIsDropDown;
    this->ProcessEvent(Func, &Parms);
}

struct UDFCommonCheckButton* UDFCommonTabGroupItem::GetMainCheckButton()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabGroupItem", "GetMainCheckButton");
    struct
    {
        struct UDFCommonCheckButton* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFCommonTabGroupItem::GetIsDropDown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabGroupItem", "GetIsDropDown");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UWrapTabGroupClickDelegate::* ----
int32_t UWrapTabGroupClickDelegate::DispatchSubTabItemCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WrapTabGroupClickDelegate", "DispatchSubTabItemCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UWrapTabGroupClickDelegate::DispatchSubTabClick(int32_t CurSubIndex, int32_t LastSubIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WrapTabGroupClickDelegate", "DispatchSubTabClick");
    struct
    {
        int32_t CurSubIndex;
        int32_t LastSubIndex;
    } Parms{};
    Parms.CurSubIndex = (int32_t)CurSubIndex;
    Parms.LastSubIndex = (int32_t)LastSubIndex;
    this->ProcessEvent(Func, &Parms);
}

void UWrapTabGroupClickDelegate::DispatchMainTabClick(uint8_t bIsChecked)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WrapTabGroupClickDelegate", "DispatchMainTabClick");
    struct
    {
        uint8_t bIsChecked;
    } Parms{};
    Parms.bIsChecked = (uint8_t)bIsChecked;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFCommonTabGroupWidget::* ----
struct UDFCommonTabGroupItem* UDFCommonTabGroupWidget::TryGetTabGroupItem(int32_t SlotIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabGroupWidget", "TryGetTabGroupItem");
    struct
    {
        int32_t SlotIndex;
        struct UDFCommonTabGroupItem* ReturnValue;
    } Parms{};
    Parms.SlotIndex = (int32_t)SlotIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFCommonTabGroupWidget::SetTabGroupIndex(int32_t MainTabIndex, int32_t SubTabIndex, uint8_t bCallUserDelegate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabGroupWidget", "SetTabGroupIndex");
    struct
    {
        int32_t MainTabIndex;
        int32_t SubTabIndex;
        uint8_t bCallUserDelegate;
    } Parms{};
    Parms.MainTabIndex = (int32_t)MainTabIndex;
    Parms.SubTabIndex = (int32_t)SubTabIndex;
    Parms.bCallUserDelegate = (uint8_t)bCallUserDelegate;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonTabGroupWidget::SetItemWidgetTemplateClass(struct UDFCommonTabGroupItem* InItemWidgetTemplateClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabGroupWidget", "SetItemWidgetTemplateClass");
    struct
    {
        struct UDFCommonTabGroupItem* InItemWidgetTemplateClass;
    } Parms{};
    Parms.InItemWidgetTemplateClass = (struct UDFCommonTabGroupItem*)InItemWidgetTemplateClass;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonTabGroupWidget::RefreshTabGroup()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabGroupWidget", "RefreshTabGroup");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonTabGroupWidget::RefreshAllTabGroupItems()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabGroupWidget", "RefreshAllTabGroupItems");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonTabGroupWidget::OnProcessSubItemWidget(int32_t Position, struct UWidget* ItemWidget, int32_t MainTabIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabGroupWidget", "OnProcessSubItemWidget");
    struct
    {
        int32_t Position;
        struct UWidget* ItemWidget;
        int32_t MainTabIndex;
    } Parms{};
    Parms.Position = (int32_t)Position;
    Parms.ItemWidget = (struct UWidget*)ItemWidget;
    Parms.MainTabIndex = (int32_t)MainTabIndex;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonTabGroupWidget::OnPreviewTabGroupItemWidget(int32_t Position, struct UDFCommonTabGroupItem* TabGroupItemWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabGroupWidget", "OnPreviewTabGroupItemWidget");
    struct
    {
        int32_t Position;
        struct UDFCommonTabGroupItem* TabGroupItemWidget;
    } Parms{};
    Parms.Position = (int32_t)Position;
    Parms.TabGroupItemWidget = (struct UDFCommonTabGroupItem*)TabGroupItemWidget;
    this->ProcessEvent(Func, &Parms);
}

struct TArray<int32_t> UDFCommonTabGroupWidget::OnGetTabGroupSubCountList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabGroupWidget", "OnGetTabGroupSubCountList");
    struct
    {
        struct TArray<int32_t> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFCommonTabGroupWidget::OnGetSubItemCountByMainIndex(int32_t MainIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabGroupWidget", "OnGetSubItemCountByMainIndex");
    struct
    {
        int32_t MainIndex;
        int32_t ReturnValue;
    } Parms{};
    Parms.MainIndex = (int32_t)MainIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFCommonTabGroupWidget::OnGetItemCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabGroupWidget", "OnGetItemCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFCommonTabGroupWidget::OnCreateTabGroupItemWidget(int32_t Position, struct UDFCommonTabGroupItem* TabGroupItemWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabGroupWidget", "OnCreateTabGroupItemWidget");
    struct
    {
        int32_t Position;
        struct UDFCommonTabGroupItem* TabGroupItemWidget;
    } Parms{};
    Parms.Position = (int32_t)Position;
    Parms.TabGroupItemWidget = (struct UDFCommonTabGroupItem*)TabGroupItemWidget;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonTabGroupWidget::InitTabGroupDataCounts(struct TArray<int32_t> InTabGroupDataCounts)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabGroupWidget", "InitTabGroupDataCounts");
    struct
    {
        struct TArray<int32_t> InTabGroupDataCounts;
    } Parms{};
    Parms.InTabGroupDataCounts = (struct TArray<int32_t>)InTabGroupDataCounts;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonTabGroupWidget::InitTabGroupContents(struct TArray<struct FDFCommonTabGroupContent> InTabGroupContents)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabGroupWidget", "InitTabGroupContents");
    struct
    {
        struct TArray<struct FDFCommonTabGroupContent> InTabGroupContents;
    } Parms{};
    Parms.InTabGroupContents = (struct TArray<struct FDFCommonTabGroupContent>)InTabGroupContents;
    this->ProcessEvent(Func, &Parms);
}

int32_t UDFCommonTabGroupWidget::GetMaxIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabGroupWidget", "GetMaxIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFCommonTabGroupWidget::GetCurSubTabIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabGroupWidget", "GetCurSubTabIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFCommonTabGroupWidget::GetCurMainTabIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabGroupWidget", "GetCurMainTabIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFCommonTabNavigatorBase::* ----
void UDFCommonTabNavigatorBase::UnbindActions()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabNavigatorBase", "UnbindActions");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonTabNavigatorBase::BindActions()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabNavigatorBase", "BindActions");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFCommonTabSelectionBar::* ----
void UDFCommonTabSelectionBar::OnTabRefreshed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabSelectionBar", "OnTabRefreshed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonTabSelectionBar::OnTabIndexChanged(int32_t CurTabIndex, int32_t LastTabIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabSelectionBar", "OnTabIndexChanged");
    struct
    {
        int32_t CurTabIndex;
        int32_t LastTabIndex;
    } Parms{};
    Parms.CurTabIndex = (int32_t)CurTabIndex;
    Parms.LastTabIndex = (int32_t)LastTabIndex;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonTabSelectionBar::OnAnimStopped()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabSelectionBar", "OnAnimStopped");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonTabSelectionBar::OnAnimStarted()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabSelectionBar", "OnAnimStarted");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonTabSelectionBar::OnAnimFinished()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabSelectionBar", "OnAnimFinished");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UWrapTabClickDelegate::* ----
void UWrapTabClickDelegate::DispatchUnhovered()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WrapTabClickDelegate", "DispatchUnhovered");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWrapTabClickDelegate::Dispatch(uint8_t bIsChecked)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WrapTabClickDelegate", "Dispatch");
    struct
    {
        uint8_t bIsChecked;
    } Parms{};
    Parms.bIsChecked = (uint8_t)bIsChecked;
    this->ProcessEvent(Func, &Parms);
}

// ---- UCurveSamplerBase::* ----
void UCurveSamplerBase::SetControlPoints(const struct TArray<struct FVector2D>& InControlPoints)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CurveSamplerBase", "SetControlPoints");
    struct
    {
        struct TArray<struct FVector2D> InControlPoints;
    } Parms{};
    Parms.InControlPoints = (struct TArray<struct FVector2D>)InControlPoints;
    this->ProcessEvent(Func, &Parms);
}

struct TArray<struct FVector2D> UCurveSamplerBase::SampleCurveBatch(const struct TArray<float>& CPIdx)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CurveSamplerBase", "SampleCurveBatch");
    struct
    {
        struct TArray<float> CPIdx;
        struct TArray<struct FVector2D> ReturnValue;
    } Parms{};
    Parms.CPIdx = (struct TArray<float>)CPIdx;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UCurveSamplerBase::SampleCurve(float CPIdx)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CurveSamplerBase", "SampleCurve");
    struct
    {
        float CPIdx;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.CPIdx = (float)CPIdx;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UCurveSamplerBase::RebuildCache()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CurveSamplerBase", "RebuildCache");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct TArray<struct FVector2D> UCurveSamplerBase::GetControlPoints()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CurveSamplerBase", "GetControlPoints");
    struct
    {
        struct TArray<struct FVector2D> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UCatmullRomSampler::* ----
void UCatmullRomSampler::SetEpsilon(float InEpsilon)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CatmullRomSampler", "SetEpsilon");
    struct
    {
        float InEpsilon;
    } Parms{};
    Parms.InEpsilon = (float)InEpsilon;
    this->ProcessEvent(Func, &Parms);
}

void UCatmullRomSampler::SetCreateMirrorStartEnd(uint8_t bInCreateMirrorStartEnd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CatmullRomSampler", "SetCreateMirrorStartEnd");
    struct
    {
        uint8_t bInCreateMirrorStartEnd;
    } Parms{};
    Parms.bInCreateMirrorStartEnd = (uint8_t)bInCreateMirrorStartEnd;
    this->ProcessEvent(Func, &Parms);
}

void UCatmullRomSampler::SetAlpha(float InAlpha)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CatmullRomSampler", "SetAlpha");
    struct
    {
        float InAlpha;
    } Parms{};
    Parms.InAlpha = (float)InAlpha;
    this->ProcessEvent(Func, &Parms);
}

float UCatmullRomSampler::GetEpsilon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CatmullRomSampler", "GetEpsilon");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UCatmullRomSampler::GetCreateMirrorStartEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CatmullRomSampler", "GetCreateMirrorStartEnd");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UCatmullRomSampler::GetAlpha()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CatmullRomSampler", "GetAlpha");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UAdaptiveCurveSamplerProxy::* ----
void UAdaptiveCurveSamplerProxy::SetSampler(struct UCurveSamplerBase* InSampler)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AdaptiveCurveSamplerProxy", "SetSampler");
    struct
    {
        struct UCurveSamplerBase* InSampler;
    } Parms{};
    Parms.InSampler = (struct UCurveSamplerBase*)InSampler;
    this->ProcessEvent(Func, &Parms);
}

struct FAdaptiveCurveSamplingResult UAdaptiveCurveSamplerProxy::NonAdaptiveSampleRange(float FromCPIdx, float ToCPIdx, float Interval)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AdaptiveCurveSamplerProxy", "NonAdaptiveSampleRange");
    struct
    {
        float FromCPIdx;
        float ToCPIdx;
        float Interval;
        struct FAdaptiveCurveSamplingResult ReturnValue;
    } Parms{};
    Parms.FromCPIdx = (float)FromCPIdx;
    Parms.ToCPIdx = (float)ToCPIdx;
    Parms.Interval = (float)Interval;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UCurveSamplerBase* UAdaptiveCurveSamplerProxy::GetSampler()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AdaptiveCurveSamplerProxy", "GetSampler");
    struct
    {
        struct UCurveSamplerBase* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FAdaptiveCurveSamplingResult UAdaptiveCurveSamplerProxy::AdaptiveSampleRange(float FromCPIdx, float ToCPIdx)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AdaptiveCurveSamplerProxy", "AdaptiveSampleRange");
    struct
    {
        float FromCPIdx;
        float ToCPIdx;
        struct FAdaptiveCurveSamplingResult ReturnValue;
    } Parms{};
    Parms.FromCPIdx = (float)FromCPIdx;
    Parms.ToCPIdx = (float)ToCPIdx;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UCurveSamplerHelper::* ----
struct UCatmullRomSampler* UCurveSamplerHelper::CreateCatmullRomSampler(float Alpha)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("CurveSamplerHelper", "CreateCatmullRomSampler");
    struct
    {
        float Alpha;
        struct UCatmullRomSampler* ReturnValue;
    } Parms{};
    Parms.Alpha = (float)Alpha;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UBezierSampler* UCurveSamplerHelper::CreateBezierSampler()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("CurveSamplerHelper", "CreateBezierSampler");
    struct
    {
        struct UBezierSampler* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAdaptiveCurveSamplerProxy* UCurveSamplerHelper::CreateAdaptiveCurveSamplerProxy(struct UCurveSamplerBase* InnerSampler)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("CurveSamplerHelper", "CreateAdaptiveCurveSamplerProxy");
    struct
    {
        struct UCurveSamplerBase* InnerSampler;
        struct UAdaptiveCurveSamplerProxy* ReturnValue;
    } Parms{};
    Parms.InnerSampler = (struct UCurveSamplerBase*)InnerSampler;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFCurveWidget::* ----
void UDFCurveWidget::UpdatePointAt(int32_t Index, struct FVector2D NewPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCurveWidget", "UpdatePointAt");
    struct
    {
        int32_t Index;
        struct FVector2D NewPoint;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.NewPoint = (struct FVector2D)NewPoint;
    this->ProcessEvent(Func, &Parms);
}

void UDFCurveWidget::ResetPerformanceStats()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCurveWidget", "ResetPerformanceStats");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCurveWidget::RemovePointAt(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCurveWidget", "RemovePointAt");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UDFCurveWidget::RefreshCurve()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCurveWidget", "RefreshCurve");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCurveWidget::PrintPerformanceStats()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCurveWidget", "PrintPerformanceStats");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCurveWidget::LuaSetTransform(float XX, float XY, float YX, float YY, float TX, float TY)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCurveWidget", "LuaSetTransform");
    struct
    {
        float XX;
        float XY;
        float YX;
        float YY;
        float TX;
        float TY;
    } Parms{};
    Parms.XX = (float)XX;
    Parms.XY = (float)XY;
    Parms.YX = (float)YX;
    Parms.YY = (float)YY;
    Parms.TX = (float)TX;
    Parms.TY = (float)TY;
    this->ProcessEvent(Func, &Parms);
}

struct TArray<float> UDFCurveWidget::LuaGetTransform()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCurveWidget", "LuaGetTransform");
    struct
    {
        struct TArray<float> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFCurveWidget::InsertPointAt(int32_t Index, struct FVector2D Point)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCurveWidget", "InsertPointAt");
    struct
    {
        int32_t Index;
        struct FVector2D Point;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.Point = (struct FVector2D)Point;
    this->ProcessEvent(Func, &Parms);
}

struct TArray<struct FVector2D> UDFCurveWidget::GetTransformedPoints()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCurveWidget", "GetTransformedPoints");
    struct
    {
        struct TArray<struct FVector2D> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<float> UDFCurveWidget::GetSamplePointInfluence()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCurveWidget", "GetSamplePointInfluence");
    struct
    {
        struct TArray<float> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FVector2D> UDFCurveWidget::GetSampledPoints()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCurveWidget", "GetSampledPoints");
    struct
    {
        struct TArray<struct FVector2D> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFCurveWidget::GetPointCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCurveWidget", "GetPointCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UDFCurveWidget::GetPointAt(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCurveWidget", "GetPointAt");
    struct
    {
        int32_t Index;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFCurveWidget::GetPerformanceSummary()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCurveWidget", "GetPerformanceSummary");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFCurveWidget::DebugImportPoints(struct FString PointsStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCurveWidget", "DebugImportPoints");
    struct
    {
        struct FString PointsStr;
    } Parms{};
    Parms.PointsStr = (struct FString)PointsStr;
    this->ProcessEvent(Func, &Parms);
}

struct FString UDFCurveWidget::DebugExportPoints()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCurveWidget", "DebugExportPoints");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFCurveWidget::ClearPoints()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCurveWidget", "ClearPoints");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCurveWidget::AddPoint(struct FVector2D Point)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCurveWidget", "AddPoint");
    struct
    {
        struct FVector2D Point;
    } Parms{};
    Parms.Point = (struct FVector2D)Point;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFDashedLine::* ----
void UDFDashedLine::SetPoints(const struct TArray<struct FVector2D>& InPoints)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFDashedLine", "SetPoints");
    struct
    {
        struct TArray<struct FVector2D> InPoints;
    } Parms{};
    Parms.InPoints = (struct TArray<struct FVector2D>)InPoints;
    this->ProcessEvent(Func, &Parms);
}

void UDFDashedLine::Refresh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFDashedLine", "Refresh");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFDashedLine::LuaSetTransform(float XX, float XY, float YX, float YY, float TX, float TY)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFDashedLine", "LuaSetTransform");
    struct
    {
        float XX;
        float XY;
        float YX;
        float YY;
        float TX;
        float TY;
    } Parms{};
    Parms.XX = (float)XX;
    Parms.XY = (float)XY;
    Parms.YX = (float)YX;
    Parms.YY = (float)YY;
    Parms.TX = (float)TX;
    Parms.TY = (float)TY;
    this->ProcessEvent(Func, &Parms);
}

struct TArray<float> UDFDashedLine::LuaGetTransform()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFDashedLine", "LuaGetTransform");
    struct
    {
        struct TArray<float> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFDefferedPaintWidget::* ----
void UDFDefferedPaintWidget::SetIsDeffered(uint8_t bInDeffered)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFDefferedPaintWidget", "SetIsDeffered");
    struct
    {
        uint8_t bInDeffered;
    } Parms{};
    Parms.bInDeffered = (uint8_t)bInDeffered;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFEditableTextBox::* ----
void UDFEditableTextBox::UpdateKeyboardType(EVirtualKeyboardType NewKeyboardType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFEditableTextBox", "UpdateKeyboardType");
    struct
    {
        enum EVirtualKeyboardType NewKeyboardType;
    } Parms{};
    Parms.NewKeyboardType = (enum EVirtualKeyboardType)NewKeyboardType;
    this->ProcessEvent(Func, &Parms);
}

void UDFEditableTextBox::UpdateKeyboardDismissAction(EVirtualKeyboardDismissAction NewKeyboardDismissAction)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFEditableTextBox", "UpdateKeyboardDismissAction");
    struct
    {
        enum EVirtualKeyboardDismissAction NewKeyboardDismissAction;
    } Parms{};
    Parms.NewKeyboardDismissAction = (enum EVirtualKeyboardDismissAction)NewKeyboardDismissAction;
    this->ProcessEvent(Func, &Parms);
}

void UDFEditableTextBox::SetIsKeyboardSendButtonEnabled(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFEditableTextBox", "SetIsKeyboardSendButtonEnabled");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UDFEditableTextBox::SetBlockHardwareTextInputLua(uint8_t bBlock)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFEditableTextBox", "SetBlockHardwareTextInputLua");
    struct
    {
        uint8_t bBlock;
    } Parms{};
    Parms.bBlock = (uint8_t)bBlock;
    this->ProcessEvent(Func, &Parms);
}

void UDFEditableTextBox::ScrollToPreviousPage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFEditableTextBox", "ScrollToPreviousPage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFEditableTextBox::ScrollToNextPage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFEditableTextBox", "ScrollToNextPage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFEditableTextBox::ScrollToEndOfLine()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFEditableTextBox", "ScrollToEndOfLine");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFEditableTextBox::ScrollToEndOfDocument()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFEditableTextBox", "ScrollToEndOfDocument");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFEditableTextBox::ScrollToBeginningOfLine()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFEditableTextBox", "ScrollToBeginningOfLine");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFEditableTextBox::ScrollToBeginningOfDocument()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFEditableTextBox", "ScrollToBeginningOfDocument");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFEditableTextBox::ScrollToBeginning()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFEditableTextBox", "ScrollToBeginning");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFEditableTextBox::OpenVirtualKeyboardLua()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFEditableTextBox", "OpenVirtualKeyboardLua");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFEditableTextBox::OnVirtualKeyboardSendKeyPressedEvent__DelegateSignature(struct FString NewText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFEditableTextBox", "OnVirtualKeyboardSendKeyPressedEvent__DelegateSignature");
    struct
    {
        struct FString NewText;
    } Parms{};
    Parms.NewText = (struct FString)NewText;
    this->ProcessEvent(Func, &Parms);
}

void UDFEditableTextBox::CloseVirtualKeyboardLua()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFEditableTextBox", "CloseVirtualKeyboardLua");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFExCommonCarouselProV2::* ----
void UDFExCommonCarouselProV2::TurnPageTo(int32_t TargetPageIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFExCommonCarouselProV2", "TurnPageTo");
    struct
    {
        int32_t TargetPageIndex;
    } Parms{};
    Parms.TargetPageIndex = (int32_t)TargetPageIndex;
    this->ProcessEvent(Func, &Parms);
}

void UDFExCommonCarouselProV2::TurnPageOneByOne(int32_t PageCount, ECarouselV2ScrollDirection ScrollDirection, float StartSlideValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFExCommonCarouselProV2", "TurnPageOneByOne");
    struct
    {
        int32_t PageCount;
        enum ECarouselV2ScrollDirection ScrollDirection;
        float StartSlideValue;
    } Parms{};
    Parms.PageCount = (int32_t)PageCount;
    Parms.ScrollDirection = (enum ECarouselV2ScrollDirection)ScrollDirection;
    Parms.StartSlideValue = (float)StartSlideValue;
    this->ProcessEvent(Func, &Parms);
}

void UDFExCommonCarouselProV2::SetTargetPageOnce(int32_t TargetPageIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFExCommonCarouselProV2", "SetTargetPageOnce");
    struct
    {
        int32_t TargetPageIndex;
    } Parms{};
    Parms.TargetPageIndex = (int32_t)TargetPageIndex;
    this->ProcessEvent(Func, &Parms);
}

void UDFExCommonCarouselProV2::RefreshAllItems()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFExCommonCarouselProV2", "RefreshAllItems");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFExCommonCarouselProV2::PreviousPage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFExCommonCarouselProV2", "PreviousPage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFExCommonCarouselProV2::OnPageChanged__DelegateSignature(struct UDFExCommonCarouselProV2* CarouselWidget, struct UDFCarouselProV2ItemBase* TargetItem, int32_t OldPageIndex, int32_t CurrentPageIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFExCommonCarouselProV2", "OnPageChanged__DelegateSignature");
    struct
    {
        struct UDFExCommonCarouselProV2* CarouselWidget;
        struct UDFCarouselProV2ItemBase* TargetItem;
        int32_t OldPageIndex;
        int32_t CurrentPageIndex;
    } Parms{};
    Parms.CarouselWidget = (struct UDFExCommonCarouselProV2*)CarouselWidget;
    Parms.TargetItem = (struct UDFCarouselProV2ItemBase*)TargetItem;
    Parms.OldPageIndex = (int32_t)OldPageIndex;
    Parms.CurrentPageIndex = (int32_t)CurrentPageIndex;
    this->ProcessEvent(Func, &Parms);
}

int32_t UDFExCommonCarouselProV2::OnGetItemCount__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFExCommonCarouselProV2", "OnGetItemCount__DelegateSignature");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFExCommonCarouselProV2::OnCarouselSimpleEvent__DelegateSignature(struct UDFExCommonCarouselProV2* CarouselWidget, struct UWidget* TargetItem, int32_t PageIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFExCommonCarouselProV2", "OnCarouselSimpleEvent__DelegateSignature");
    struct
    {
        struct UDFExCommonCarouselProV2* CarouselWidget;
        struct UWidget* TargetItem;
        int32_t PageIndex;
    } Parms{};
    Parms.CarouselWidget = (struct UDFExCommonCarouselProV2*)CarouselWidget;
    Parms.TargetItem = (struct UWidget*)TargetItem;
    Parms.PageIndex = (int32_t)PageIndex;
    this->ProcessEvent(Func, &Parms);
}

void UDFExCommonCarouselProV2::NextPage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFExCommonCarouselProV2", "NextPage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFExCommonCarouselProV2::ManualClick(struct UUserWidget* CenterUWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFExCommonCarouselProV2", "ManualClick");
    struct
    {
        struct UUserWidget* CenterUWidget;
    } Parms{};
    Parms.CenterUWidget = (struct UUserWidget*)CenterUWidget;
    this->ProcessEvent(Func, &Parms);
}

void UDFExCommonCarouselProV2::EndAutoScroll()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFExCommonCarouselProV2", "EndAutoScroll");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFExCommonCarouselProV2::BeginAutoScrollIfNeed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFExCommonCarouselProV2", "BeginAutoScrollIfNeed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFExCommonCarouselProV2::AddEnergy(float Energy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFExCommonCarouselProV2", "AddEnergy");
    struct
    {
        float Energy;
    } Parms{};
    Parms.Energy = (float)Energy;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFHorizontalBox::* ----
void UDFHorizontalBox::SetContentVerticalAlignment(EVerticalAlignment InContentVerticalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFHorizontalBox", "SetContentVerticalAlignment");
    struct
    {
        enum EVerticalAlignment InContentVerticalAlignment;
    } Parms{};
    Parms.InContentVerticalAlignment = (enum EVerticalAlignment)InContentVerticalAlignment;
    this->ProcessEvent(Func, &Parms);
}

void UDFHorizontalBox::SetContentPadding(const struct FMargin& InPadding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFHorizontalBox", "SetContentPadding");
    struct
    {
        struct FMargin InPadding;
    } Parms{};
    Parms.InPadding = (struct FMargin)InPadding;
    this->ProcessEvent(Func, &Parms);
}

void UDFHorizontalBox::SetContentHorizontalAlignment(EHorizontalAlignment InContentHorizontalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFHorizontalBox", "SetContentHorizontalAlignment");
    struct
    {
        enum EHorizontalAlignment InContentHorizontalAlignment;
    } Parms{};
    Parms.InContentHorizontalAlignment = (enum EHorizontalAlignment)InContentHorizontalAlignment;
    this->ProcessEvent(Func, &Parms);
}

void UDFHorizontalBox::SetAllowScrollBoxSlot(uint8_t bIsAllow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFHorizontalBox", "SetAllowScrollBoxSlot");
    struct
    {
        uint8_t bIsAllow;
    } Parms{};
    Parms.bIsAllow = (uint8_t)bIsAllow;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFImage::* ----
void UDFImage::SetImageSize(struct FSoftObjectPath ImagePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFImage", "SetImageSize");
    struct
    {
        struct FSoftObjectPath ImagePath;
    } Parms{};
    Parms.ImagePath = (struct FSoftObjectPath)ImagePath;
    this->ProcessEvent(Func, &Parms);
}

void UDFImage::SetImage(struct UObject* ImageAsset, uint8_t bAutoResize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFImage", "SetImage");
    struct
    {
        struct UObject* ImageAsset;
        uint8_t bAutoResize;
    } Parms{};
    Parms.ImageAsset = (struct UObject*)ImageAsset;
    Parms.bAutoResize = (uint8_t)bAutoResize;
    this->ProcessEvent(Func, &Parms);
}

void UDFImage::SetBrushTiling(ESlateBrushTileType Tiling)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFImage", "SetBrushTiling");
    struct
    {
        enum ESlateBrushTileType Tiling;
    } Parms{};
    Parms.Tiling = (enum ESlateBrushTileType)Tiling;
    this->ProcessEvent(Func, &Parms);
}

void UDFImage::SetBrushSoft()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFImage", "SetBrushSoft");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFImage::SetBrushFromSoft()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFImage", "SetBrushFromSoft");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FSoftObjectPath UDFImage::GetCurrentLoadingBrush()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFImage", "GetCurrentLoadingBrush");
    struct
    {
        struct FSoftObjectPath ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFImage::Clear()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFImage", "Clear");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFImage::AsyncSetImagePath(struct FString ImagePath, uint8_t bAutoResize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFImage", "AsyncSetImagePath");
    struct
    {
        struct FString ImagePath;
        uint8_t bAutoResize;
    } Parms{};
    Parms.ImagePath = (struct FString)ImagePath;
    Parms.bAutoResize = (uint8_t)bAutoResize;
    this->ProcessEvent(Func, &Parms);
}

void UDFImage::AsyncSetImageID(struct FName ImageID, uint8_t bAutoResize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFImage", "AsyncSetImageID");
    struct
    {
        struct FName ImageID;
        uint8_t bAutoResize;
    } Parms{};
    Parms.ImageID = (struct FName)ImageID;
    Parms.bAutoResize = (uint8_t)bAutoResize;
    this->ProcessEvent(Func, &Parms);
}

void UDFImage::AsyncSetImageBySoftObjectPath(struct FSoftObjectPath ImagePath, uint8_t bAutoResize, uint8_t bInKeepColor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFImage", "AsyncSetImageBySoftObjectPath");
    struct
    {
        struct FSoftObjectPath ImagePath;
        uint8_t bAutoResize;
        uint8_t bInKeepColor;
    } Parms{};
    Parms.ImagePath = (struct FSoftObjectPath)ImagePath;
    Parms.bAutoResize = (uint8_t)bAutoResize;
    Parms.bInKeepColor = (uint8_t)bInKeepColor;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFHttpImage::* ----
void UDFHttpImage::SetHttpImage(struct FString URL)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFHttpImage", "SetHttpImage");
    struct
    {
        struct FString URL;
    } Parms{};
    Parms.URL = (struct FString)URL;
    this->ProcessEvent(Func, &Parms);
}

void UDFHttpImage::OnDownloaderResult(EDownloadResult Result, struct FString LastModified)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFHttpImage", "OnDownloaderResult");
    struct
    {
        enum EDownloadResult Result;
        struct FString LastModified;
    } Parms{};
    Parms.Result = (enum EDownloadResult)Result;
    Parms.LastModified = (struct FString)LastModified;
    this->ProcessEvent(Func, &Parms);
}

struct UTexture2D* UDFHttpImage::LoadImageTexture2D(struct FString ImagePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFHttpImage", "LoadImageTexture2D");
    struct
    {
        struct FString ImagePath;
        struct UTexture2D* ReturnValue;
    } Parms{};
    Parms.ImagePath = (struct FString)ImagePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFInputTypeVisibilityReContainer::* ----
void UDFInputTypeVisibilityReContainer::InputTypeChanged(EGPInputType InputType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFInputTypeVisibilityReContainer", "InputTypeChanged");
    struct
    {
        enum EGPInputType InputType;
    } Parms{};
    Parms.InputType = (enum EGPInputType)InputType;
    this->ProcessEvent(Func, &Parms);
}

struct FPlatformInputTypeVisibility UDFInputTypeVisibilityReContainer::GetActiveConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFInputTypeVisibilityReContainer", "GetActiveConfig");
    struct
    {
        struct FPlatformInputTypeVisibility ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFRichTextBlock::* ----
void UDFRichTextBlock::SetLineHeightPercentage(float InLineHeightPercentage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFRichTextBlock", "SetLineHeightPercentage");
    struct
    {
        float InLineHeightPercentage;
    } Parms{};
    Parms.InLineHeightPercentage = (float)InLineHeightPercentage;
    this->ProcessEvent(Func, &Parms);
}

void UDFRichTextBlock::RedirectDisplayTextByPlatformText()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFRichTextBlock", "RedirectDisplayTextByPlatformText");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFLEDRichTextBlock::* ----
void UDFLEDRichTextBlock::SetInCheckedStyle(ETextChecked InCheckedStyle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFLEDRichTextBlock", "SetInCheckedStyle");
    struct
    {
        enum ETextChecked InCheckedStyle;
    } Parms{};
    Parms.InCheckedStyle = (enum ETextChecked)InCheckedStyle;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMultiLineEditableTextBox::* ----
void UDFMultiLineEditableTextBox::SetIsKeyboardSendButtonEnabled(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMultiLineEditableTextBox", "SetIsKeyboardSendButtonEnabled");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMultiLineEditableTextBox::OpenVirtualKeyboard()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMultiLineEditableTextBox", "OpenVirtualKeyboard");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMultiLineEditableTextBox::OnVirtualKeyboardSendKeyPressedEvent__DelegateSignature(struct FString NewText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMultiLineEditableTextBox", "OnVirtualKeyboardSendKeyPressedEvent__DelegateSignature");
    struct
    {
        struct FString NewText;
    } Parms{};
    Parms.NewText = (struct FString)NewText;
    this->ProcessEvent(Func, &Parms);
}

void UDFMultiLineEditableTextBox::CloseVirtualKeyboard()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMultiLineEditableTextBox", "CloseVirtualKeyboard");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFScrollBox::* ----
void UDFScrollBox::SetScrollWidgetIntoViewIfOnEdge(uint8_t bInScrollWidgetIntoViewIfOnEdge)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScrollBox", "SetScrollWidgetIntoViewIfOnEdge");
    struct
    {
        uint8_t bInScrollWidgetIntoViewIfOnEdge;
    } Parms{};
    Parms.bInScrollWidgetIntoViewIfOnEdge = (uint8_t)bInScrollWidgetIntoViewIfOnEdge;
    this->ProcessEvent(Func, &Parms);
}

void UDFScrollBox::SetOverrideScrollAmount(float Amount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScrollBox", "SetOverrideScrollAmount");
    struct
    {
        float Amount;
    } Parms{};
    Parms.Amount = (float)Amount;
    this->ProcessEvent(Func, &Parms);
}

void UDFScrollBox::SetHandleMouseDrag(uint8_t bInHandleMouseDrag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScrollBox", "SetHandleMouseDrag");
    struct
    {
        uint8_t bInHandleMouseDrag;
    } Parms{};
    Parms.bInHandleMouseDrag = (uint8_t)bInHandleMouseDrag;
    this->ProcessEvent(Func, &Parms);
}

void UDFScrollBox::SetDeviation(float Deviation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScrollBox", "SetDeviation");
    struct
    {
        float Deviation;
    } Parms{};
    Parms.Deviation = (float)Deviation;
    this->ProcessEvent(Func, &Parms);
}

void UDFScrollBox::SetContentVerticalAlignment(EVerticalAlignment InContentVerticalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScrollBox", "SetContentVerticalAlignment");
    struct
    {
        enum EVerticalAlignment InContentVerticalAlignment;
    } Parms{};
    Parms.InContentVerticalAlignment = (enum EVerticalAlignment)InContentVerticalAlignment;
    this->ProcessEvent(Func, &Parms);
}

void UDFScrollBox::SetContentHorizontalAlignment(EHorizontalAlignment InContentHorizontalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScrollBox", "SetContentHorizontalAlignment");
    struct
    {
        enum EHorizontalAlignment InContentHorizontalAlignment;
    } Parms{};
    Parms.InContentHorizontalAlignment = (enum EHorizontalAlignment)InContentHorizontalAlignment;
    this->ProcessEvent(Func, &Parms);
}

void UDFScrollBox::ScrollToOffsetWithParams(float TargetOffset, float Speed, float Interval)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScrollBox", "ScrollToOffsetWithParams");
    struct
    {
        float TargetOffset;
        float Speed;
        float Interval;
    } Parms{};
    Parms.TargetOffset = (float)TargetOffset;
    Parms.Speed = (float)Speed;
    Parms.Interval = (float)Interval;
    this->ProcessEvent(Func, &Parms);
}

void UDFScrollBox::ScrollToOffset(float TargetOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScrollBox", "ScrollToOffset");
    struct
    {
        float TargetOffset;
    } Parms{};
    Parms.TargetOffset = (float)TargetOffset;
    this->ProcessEvent(Func, &Parms);
}

void UDFScrollBox::OnHandleMouseButtonUpDelegate(struct FPointerEvent MouseEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScrollBox", "OnHandleMouseButtonUpDelegate");
    struct
    {
        struct FPointerEvent MouseEvent;
    } Parms{};
    Parms.MouseEvent = (struct FPointerEvent)MouseEvent;
    this->ProcessEvent(Func, &Parms);
}

void UDFScrollBox::JumpToOffset(float TargetOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScrollBox", "JumpToOffset");
    struct
    {
        float TargetOffset;
    } Parms{};
    Parms.TargetOffset = (float)TargetOffset;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFScrollBox::IsScrollBarNeeded()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScrollBox", "IsScrollBarNeeded");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFScrollBox::IsDraggingScrollBar()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScrollBox", "IsDraggingScrollBar");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFScrollBox::GetIndexByItem(struct UWidget* ItemWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScrollBox", "GetIndexByItem");
    struct
    {
        struct UWidget* ItemWidget;
        int32_t ReturnValue;
    } Parms{};
    Parms.ItemWidget = (struct UWidget*)ItemWidget;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UDFScrollBox::GetBoxHeight()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScrollBox", "GetBoxHeight");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWidget* UDFScrollBox::FindChildUnderMouse(struct FPointerEvent MouseEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScrollBox", "FindChildUnderMouse");
    struct
    {
        struct FPointerEvent MouseEvent;
        struct UWidget* ReturnValue;
    } Parms{};
    Parms.MouseEvent = (struct FPointerEvent)MouseEvent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFScrollBox::EnableNativeNavigation(uint8_t bEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScrollBox", "EnableNativeNavigation");
    struct
    {
        uint8_t bEnabled;
    } Parms{};
    Parms.bEnabled = (uint8_t)bEnabled;
    this->ProcessEvent(Func, &Parms);
}

void UDFScrollBox::CancelScrollToOffset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScrollBox", "CancelScrollToOffset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFScrollGridBox::* ----
void UDFScrollGridBox::SetScrollWidgetIntoViewIfOnEdge(uint8_t bInScrollWidgetIntoViewIfOnEdge)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScrollGridBox", "SetScrollWidgetIntoViewIfOnEdge");
    struct
    {
        uint8_t bInScrollWidgetIntoViewIfOnEdge;
    } Parms{};
    Parms.bInScrollWidgetIntoViewIfOnEdge = (uint8_t)bInScrollWidgetIntoViewIfOnEdge;
    this->ProcessEvent(Func, &Parms);
}

void UDFScrollGridBox::SetOverrideScrollAmount(float Amount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScrollGridBox", "SetOverrideScrollAmount");
    struct
    {
        float Amount;
    } Parms{};
    Parms.Amount = (float)Amount;
    this->ProcessEvent(Func, &Parms);
}

void UDFScrollGridBox::ScrollToIndex(int32_t Index, uint8_t bCenter, uint8_t bIntoView, uint8_t bForceFullyBuild)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScrollGridBox", "ScrollToIndex");
    struct
    {
        int32_t Index;
        uint8_t bCenter;
        uint8_t bIntoView;
        uint8_t bForceFullyBuild;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.bCenter = (uint8_t)bCenter;
    Parms.bIntoView = (uint8_t)bIntoView;
    Parms.bForceFullyBuild = (uint8_t)bForceFullyBuild;
    this->ProcessEvent(Func, &Parms);
}

void UDFScrollGridBox::ReleaseAllItems()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScrollGridBox", "ReleaseAllItems");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFScrollGridBox::OnSetClickedTabByString(struct FString ClickedTabString)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScrollGridBox", "OnSetClickedTabByString");
    struct
    {
        struct FString ClickedTabString;
    } Parms{};
    Parms.ClickedTabString = (struct FString)ClickedTabString;
    this->ProcessEvent(Func, &Parms);
}

void UDFScrollGridBox::OnSetClickedTab(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScrollGridBox", "OnSetClickedTab");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UDFScrollGridBox::OnHandleMouseButtonUpDelegate(struct FPointerEvent MouseEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScrollGridBox", "OnHandleMouseButtonUpDelegate");
    struct
    {
        struct FPointerEvent MouseEvent;
    } Parms{};
    Parms.MouseEvent = (struct FPointerEvent)MouseEvent;
    this->ProcessEvent(Func, &Parms);
}

int32_t UDFScrollGridBox::FindChildUnderMouse(struct FPointerEvent MouseEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScrollGridBox", "FindChildUnderMouse");
    struct
    {
        struct FPointerEvent MouseEvent;
        int32_t ReturnValue;
    } Parms{};
    Parms.MouseEvent = (struct FPointerEvent)MouseEvent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMainTabChangeObject::* ----
void UMainTabChangeObject::Dispatch(uint8_t bIsChecked)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MainTabChangeObject", "Dispatch");
    struct
    {
        uint8_t bIsChecked;
    } Parms{};
    Parms.bIsChecked = (uint8_t)bIsChecked;
    this->ProcessEvent(Func, &Parms);
}

// ---- USubTabChangeObject::* ----
void USubTabChangeObject::Dispatch(uint8_t bIsChecked)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SubTabChangeObject", "Dispatch");
    struct
    {
        uint8_t bIsChecked;
    } Parms{};
    Parms.bIsChecked = (uint8_t)bIsChecked;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFSecondLevelCommonTab::* ----
void UDFSecondLevelCommonTab::SetNotDefaultSeleted()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSecondLevelCommonTab", "SetNotDefaultSeleted");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFSecondLevelCommonTab::RefreshTabItem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSecondLevelCommonTab", "RefreshTabItem");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFSecondLevelCommonTab::OnProcessSubItemWidgetUpdateFinished()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSecondLevelCommonTab", "OnProcessSubItemWidgetUpdateFinished");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFSecondLevelCommonTab::OnProcessSubItemWidget(int32_t Position, struct UWidget* ItemWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSecondLevelCommonTab", "OnProcessSubItemWidget");
    struct
    {
        int32_t Position;
        struct UWidget* ItemWidget;
    } Parms{};
    Parms.Position = (int32_t)Position;
    Parms.ItemWidget = (struct UWidget*)ItemWidget;
    this->ProcessEvent(Func, &Parms);
}

void UDFSecondLevelCommonTab::OnProcessMainItemWidget(int32_t Position, struct UWidget* ItemWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSecondLevelCommonTab", "OnProcessMainItemWidget");
    struct
    {
        int32_t Position;
        struct UWidget* ItemWidget;
    } Parms{};
    Parms.Position = (int32_t)Position;
    Parms.ItemWidget = (struct UWidget*)ItemWidget;
    this->ProcessEvent(Func, &Parms);
}

void UDFSecondLevelCommonTab::NativeSetTabIndex(int32_t MainIndex, int32_t SubIdx)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSecondLevelCommonTab", "NativeSetTabIndex");
    struct
    {
        int32_t MainIndex;
        int32_t SubIdx;
    } Parms{};
    Parms.MainIndex = (int32_t)MainIndex;
    Parms.SubIdx = (int32_t)SubIdx;
    this->ProcessEvent(Func, &Parms);
}

int32_t UDFSecondLevelCommonTab::GetSubListCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSecondLevelCommonTab", "GetSubListCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFSecondLevelCommonTab::GetMainListCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSecondLevelCommonTab", "GetMainListCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFSimpleGradient::* ----
struct UMaterialInstanceDynamic* UDFSimpleGradient::GetDynamicMaterial()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSimpleGradient", "GetDynamicMaterial");
    struct
    {
        struct UMaterialInstanceDynamic* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFSlider::* ----
void UDFSlider::SetResetDelay(float InResetDelay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSlider", "SetResetDelay");
    struct
    {
        float InResetDelay;
    } Parms{};
    Parms.InResetDelay = (float)InResetDelay;
    this->ProcessEvent(Func, &Parms);
}

void UDFSlider::SetRequiresControllerLock(uint8_t InRequiresControllerLock)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSlider", "SetRequiresControllerLock");
    struct
    {
        uint8_t InRequiresControllerLock;
    } Parms{};
    Parms.InRequiresControllerLock = (uint8_t)InRequiresControllerLock;
    this->ProcessEvent(Func, &Parms);
}

void UDFSlider::SetMaxStepSize(float InMaxStepSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSlider", "SetMaxStepSize");
    struct
    {
        float InMaxStepSize;
    } Parms{};
    Parms.InMaxStepSize = (float)InMaxStepSize;
    this->ProcessEvent(Func, &Parms);
}

void UDFSlider::SetEnableSliderCycle(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSlider", "SetEnableSliderCycle");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UDFSlider::SetBandMinValue(float InValue, uint8_t bBandMinValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSlider", "SetBandMinValue");
    struct
    {
        float InValue;
        uint8_t bBandMinValue;
    } Parms{};
    Parms.InValue = (float)InValue;
    Parms.bBandMinValue = (uint8_t)bBandMinValue;
    this->ProcessEvent(Func, &Parms);
}

void UDFSlider::SetAccelerationAmount(float InAccelerationAmount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSlider", "SetAccelerationAmount");
    struct
    {
        float InAccelerationAmount;
    } Parms{};
    Parms.InAccelerationAmount = (float)InAccelerationAmount;
    this->ProcessEvent(Func, &Parms);
}

struct UMaterialInstanceDynamic* UDFSlider::GetDynamicMaterial_NormalBar()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSlider", "GetDynamicMaterial_NormalBar");
    struct
    {
        struct UMaterialInstanceDynamic* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMaterialInstanceDynamic* UDFSlider::GetDynamicMaterial_HoveredBar()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSlider", "GetDynamicMaterial_HoveredBar");
    struct
    {
        struct UMaterialInstanceDynamic* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMaterialInstanceDynamic* UDFSlider::GetDynamicMaterial_DisabledBar()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSlider", "GetDynamicMaterial_DisabledBar");
    struct
    {
        struct UMaterialInstanceDynamic* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFSpineWidget::* ----
void UDFSpineWidget::SetTimeScale(float TimeScale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSpineWidget", "SetTimeScale");
    struct
    {
        float TimeScale;
    } Parms{};
    Parms.TimeScale = (float)TimeScale;
    this->ProcessEvent(Func, &Parms);
}

void UDFSpineWidget::SetSpineScale(float Scale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSpineWidget", "SetSpineScale");
    struct
    {
        float Scale;
    } Parms{};
    Parms.Scale = (float)Scale;
    this->ProcessEvent(Func, &Parms);
}

void UDFSpineWidget::SetSpineColor(struct FLinearColor NewColor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSpineWidget", "SetSpineColor");
    struct
    {
        struct FLinearColor NewColor;
    } Parms{};
    Parms.NewColor = (struct FLinearColor)NewColor;
    this->ProcessEvent(Func, &Parms);
}

void UDFSpineWidget::SetLoopAnimationName(struct FString loopAnimName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSpineWidget", "SetLoopAnimationName");
    struct
    {
        struct FString loopAnimName;
    } Parms{};
    Parms.loopAnimName = (struct FString)loopAnimName;
    this->ProcessEvent(Func, &Parms);
}

void UDFSpineWidget::SetIdleAnimationName(struct FString idleAnimName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSpineWidget", "SetIdleAnimationName");
    struct
    {
        struct FString idleAnimName;
    } Parms{};
    Parms.idleAnimName = (struct FString)idleAnimName;
    this->ProcessEvent(Func, &Parms);
}

void UDFSpineWidget::SetData(const struct FSoftObjectPath& atlasPath, const struct FSoftObjectPath& dataPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSpineWidget", "SetData");
    struct
    {
        struct FSoftObjectPath atlasPath;
        struct FSoftObjectPath dataPath;
    } Parms{};
    Parms.atlasPath = (struct FSoftObjectPath)atlasPath;
    Parms.dataPath = (struct FSoftObjectPath)dataPath;
    this->ProcessEvent(Func, &Parms);
}

void UDFSpineWidget::SetAsyncLoadSwitcher(uint8_t bOpenAsyncLoad)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSpineWidget", "SetAsyncLoadSwitcher");
    struct
    {
        uint8_t bOpenAsyncLoad;
    } Parms{};
    Parms.bOpenAsyncLoad = (uint8_t)bOpenAsyncLoad;
    this->ProcessEvent(Func, &Parms);
}

void UDFSpineWidget::ResetSpineInitAnim()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSpineWidget", "ResetSpineInitAnim");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFSpineWidget::ReleaseSpine()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSpineWidget", "ReleaseSpine");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFSpineWidget::PlaySpineAnimation(int32_t TrackIndex, struct FString AnimName, uint8_t Loop)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSpineWidget", "PlaySpineAnimation");
    struct
    {
        int32_t TrackIndex;
        struct FString AnimName;
        uint8_t Loop;
    } Parms{};
    Parms.TrackIndex = (int32_t)TrackIndex;
    Parms.AnimName = (struct FString)AnimName;
    Parms.Loop = (uint8_t)Loop;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFSpineWidget::IsAsyncLoadEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSpineWidget", "IsAsyncLoadEnd");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFSpineWidget::InitSpine()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSpineWidget", "InitSpine");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

float UDFSpineWidget::GetSpineAnimationDurationTime(struct FString AnimName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSpineWidget", "GetSpineAnimationDurationTime");
    struct
    {
        struct FString AnimName;
        float ReturnValue;
    } Parms{};
    Parms.AnimName = (struct FString)AnimName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFSpineWidget::AddSpineAnimation(int32_t TrackIndex, struct FString AnimName, uint8_t Loop, float Delay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSpineWidget", "AddSpineAnimation");
    struct
    {
        int32_t TrackIndex;
        struct FString AnimName;
        uint8_t Loop;
        float Delay;
    } Parms{};
    Parms.TrackIndex = (int32_t)TrackIndex;
    Parms.AnimName = (struct FString)AnimName;
    Parms.Loop = (uint8_t)Loop;
    Parms.Delay = (float)Delay;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFTextBlock::* ----
void UDFTextBlock::SetTextColor(struct FName InColorName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTextBlock", "SetTextColor");
    struct
    {
        struct FName InColorName;
    } Parms{};
    Parms.InColorName = (struct FName)InColorName;
    this->ProcessEvent(Func, &Parms);
}

void UDFTextBlock::RedirectDisplayTextByPlatformText()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTextBlock", "RedirectDisplayTextByPlatformText");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FVector2D UDFTextBlock::GetTextBlockDesiredSize(float LayoutScaleMultiplier)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTextBlock", "GetTextBlockDesiredSize");
    struct
    {
        float LayoutScaleMultiplier;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.LayoutScaleMultiplier = (float)LayoutScaleMultiplier;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFTextPlatformType::* ----
EDFTextPlatformType UDFTextPlatformType::GetPlatformType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFTextPlatformType", "GetPlatformType");
    struct
    {
        enum EDFTextPlatformType ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFThemeImage::* ----
void UDFThemeImage::SetThemeID(struct FString ThemeID, uint8_t bAutoResize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFThemeImage", "SetThemeID");
    struct
    {
        struct FString ThemeID;
        uint8_t bAutoResize;
    } Parms{};
    Parms.ThemeID = (struct FString)ThemeID;
    Parms.bAutoResize = (uint8_t)bAutoResize;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFThemeShadowImage::* ----
void UDFThemeShadowImage::SetThemeID(struct FString ThemeID, uint8_t bAutoResize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFThemeShadowImage", "SetThemeID");
    struct
    {
        struct FString ThemeID;
        uint8_t bAutoResize;
    } Parms{};
    Parms.ThemeID = (struct FString)ThemeID;
    Parms.bAutoResize = (uint8_t)bAutoResize;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFTipsAnchor::* ----
void UDFTipsAnchor::UnbindTipsWidget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTipsAnchor", "UnbindTipsWidget");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFTipsAnchor::TipsTriggerEvent__DelegateSignature(ETipsTriggerReason TriggerReason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTipsAnchor", "TipsTriggerEvent__DelegateSignature");
    struct
    {
        enum ETipsTriggerReason TriggerReason;
    } Parms{};
    Parms.TriggerReason = (enum ETipsTriggerReason)TriggerReason;
    this->ProcessEvent(Func, &Parms);
}

void UDFTipsAnchor::ShowTipsManually()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTipsAnchor", "ShowTipsManually");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFTipsAnchor::SetConstrainWidget(struct UWidget* ConstrainWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTipsAnchor", "SetConstrainWidget");
    struct
    {
        struct UWidget* ConstrainWidget;
    } Parms{};
    Parms.ConstrainWidget = (struct UWidget*)ConstrainWidget;
    this->ProcessEvent(Func, &Parms);
}

void UDFTipsAnchor::RemoveTriggerEvents()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTipsAnchor", "RemoveTriggerEvents");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFTipsAnchor::OnUnhovered()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTipsAnchor", "OnUnhovered");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFTipsAnchor::OnToggleTipsWithState(uint8_t bShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTipsAnchor", "OnToggleTipsWithState");
    struct
    {
        uint8_t bShow;
    } Parms{};
    Parms.bShow = (uint8_t)bShow;
    this->ProcessEvent(Func, &Parms);
}

void UDFTipsAnchor::OnToggleTips()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTipsAnchor", "OnToggleTips");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFTipsAnchor::OnShowTips()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTipsAnchor", "OnShowTips");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFTipsAnchor::OnMouseMove(const struct FPointerEvent& PointerEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTipsAnchor", "OnMouseMove");
    struct
    {
        struct FPointerEvent PointerEvent;
    } Parms{};
    Parms.PointerEvent = (struct FPointerEvent)PointerEvent;
    this->ProcessEvent(Func, &Parms);
}

void UDFTipsAnchor::OnHoverTimeout()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTipsAnchor", "OnHoverTimeout");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFTipsAnchor::OnHovered()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTipsAnchor", "OnHovered");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFTipsAnchor::OnHideTips()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTipsAnchor", "OnHideTips");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFTipsAnchor::OnClickAnywhere(struct FPointerEvent PointerEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTipsAnchor", "OnClickAnywhere");
    struct
    {
        struct FPointerEvent PointerEvent;
    } Parms{};
    Parms.PointerEvent = (struct FPointerEvent)PointerEvent;
    this->ProcessEvent(Func, &Parms);
}

void UDFTipsAnchor::HideTipsManually()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTipsAnchor", "HideTipsManually");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UDFTipsTemplateBase* UDFTipsAnchor::GetTemplate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTipsAnchor", "GetTemplate");
    struct
    {
        struct UDFTipsTemplateBase* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFTipsAnchor::BindTriggerEvents()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTipsAnchor", "BindTriggerEvents");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFTipsAnchor::BindTipsWidget(struct UWidget* InTipsWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTipsAnchor", "BindTipsWidget");
    struct
    {
        struct UWidget* InTipsWidget;
    } Parms{};
    Parms.InTipsWidget = (struct UWidget*)InTipsWidget;
    this->ProcessEvent(Func, &Parms);
}

void UDFTipsAnchor::ApplyTipsPosition(struct UWidget* TipsWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTipsAnchor", "ApplyTipsPosition");
    struct
    {
        struct UWidget* TipsWidget;
    } Parms{};
    Parms.TipsWidget = (struct UWidget*)TipsWidget;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFTypeWriterTextBlock::* ----
void UDFTypeWriterTextBlock::Update(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTypeWriterTextBlock", "Update");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFTypeWriterTextBlock::StartAnim()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTypeWriterTextBlock", "StartAnim");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFTypeWriterTextBlock::ResumeAnim()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTypeWriterTextBlock", "ResumeAnim");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFTypeWriterTextBlock::Reset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTypeWriterTextBlock", "Reset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFTypeWriterTextBlock::EndAnim()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTypeWriterTextBlock", "EndAnim");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFVerticalBox::* ----
void UDFVerticalBox::SetContentVerticalAlignment(EVerticalAlignment InContentVerticalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFVerticalBox", "SetContentVerticalAlignment");
    struct
    {
        enum EVerticalAlignment InContentVerticalAlignment;
    } Parms{};
    Parms.InContentVerticalAlignment = (enum EVerticalAlignment)InContentVerticalAlignment;
    this->ProcessEvent(Func, &Parms);
}

void UDFVerticalBox::SetContentPadding(const struct FMargin& InPadding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFVerticalBox", "SetContentPadding");
    struct
    {
        struct FMargin InPadding;
    } Parms{};
    Parms.InPadding = (struct FMargin)InPadding;
    this->ProcessEvent(Func, &Parms);
}

void UDFVerticalBox::SetContentHorizontalAlignment(EHorizontalAlignment InContentHorizontalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFVerticalBox", "SetContentHorizontalAlignment");
    struct
    {
        enum EHorizontalAlignment InContentHorizontalAlignment;
    } Parms{};
    Parms.InContentHorizontalAlignment = (enum EHorizontalAlignment)InContentHorizontalAlignment;
    this->ProcessEvent(Func, &Parms);
}

void UDFVerticalBox::SetAllowScrollBoxSlot(uint8_t bIsAllow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFVerticalBox", "SetAllowScrollBoxSlot");
    struct
    {
        uint8_t bIsAllow;
    } Parms{};
    Parms.bIsAllow = (uint8_t)bIsAllow;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFWaterfallScrollView::* ----
void UDFWaterfallScrollView::SetStopScrollOnTouchWhenInertial(uint8_t bInStopScrollOnTouchWhenInertial)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFWaterfallScrollView", "SetStopScrollOnTouchWhenInertial");
    struct
    {
        uint8_t bInStopScrollOnTouchWhenInertial;
    } Parms{};
    Parms.bInStopScrollOnTouchWhenInertial = (uint8_t)bInStopScrollOnTouchWhenInertial;
    this->ProcessEvent(Func, &Parms);
}

void UDFWaterfallScrollView::SetScrollWidgetIntoViewIfOnEdge(uint8_t bInScrollWidgetIntoViewIfOnEdge)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFWaterfallScrollView", "SetScrollWidgetIntoViewIfOnEdge");
    struct
    {
        uint8_t bInScrollWidgetIntoViewIfOnEdge;
    } Parms{};
    Parms.bInScrollWidgetIntoViewIfOnEdge = (uint8_t)bInScrollWidgetIntoViewIfOnEdge;
    this->ProcessEvent(Func, &Parms);
}

void UDFWaterfallScrollView::OnHandleMouseButtonUpDelegate(struct FPointerEvent MouseEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFWaterfallScrollView", "OnHandleMouseButtonUpDelegate");
    struct
    {
        struct FPointerEvent MouseEvent;
    } Parms{};
    Parms.MouseEvent = (struct FPointerEvent)MouseEvent;
    this->ProcessEvent(Func, &Parms);
}

struct UWidget* UDFWaterfallScrollView::FindChildUnderMouse(struct FPointerEvent MouseEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFWaterfallScrollView", "FindChildUnderMouse");
    struct
    {
        struct FPointerEvent MouseEvent;
        struct UWidget* ReturnValue;
    } Parms{};
    Parms.MouseEvent = (struct FPointerEvent)MouseEvent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFWaterfallScrollViewV2::* ----
void UDFWaterfallScrollViewV2::SetStopScrollOnTouchWhenInertial(uint8_t bInStopScrollOnTouchWhenInertial)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFWaterfallScrollViewV2", "SetStopScrollOnTouchWhenInertial");
    struct
    {
        uint8_t bInStopScrollOnTouchWhenInertial;
    } Parms{};
    Parms.bInStopScrollOnTouchWhenInertial = (uint8_t)bInStopScrollOnTouchWhenInertial;
    this->ProcessEvent(Func, &Parms);
}

void UDFWaterfallScrollViewV2::SetScrollWidgetIntoViewIfOnEdge(uint8_t bInScrollWidgetIntoViewIfOnEdge)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFWaterfallScrollViewV2", "SetScrollWidgetIntoViewIfOnEdge");
    struct
    {
        uint8_t bInScrollWidgetIntoViewIfOnEdge;
    } Parms{};
    Parms.bInScrollWidgetIntoViewIfOnEdge = (uint8_t)bInScrollWidgetIntoViewIfOnEdge;
    this->ProcessEvent(Func, &Parms);
}

void UDFWaterfallScrollViewV2::OnHandleMouseButtonUpDelegate(struct FPointerEvent MouseEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFWaterfallScrollViewV2", "OnHandleMouseButtonUpDelegate");
    struct
    {
        struct FPointerEvent MouseEvent;
    } Parms{};
    Parms.MouseEvent = (struct FPointerEvent)MouseEvent;
    this->ProcessEvent(Func, &Parms);
}

struct UWidget* UDFWaterfallScrollViewV2::FindChildUnderMouse(struct FPointerEvent MouseEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFWaterfallScrollViewV2", "FindChildUnderMouse");
    struct
    {
        struct FPointerEvent MouseEvent;
        struct UWidget* ReturnValue;
    } Parms{};
    Parms.MouseEvent = (struct FPointerEvent)MouseEvent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFWrapBox::* ----
void UDFWrapBox::SetWrapWidth(float InWrapWidth)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFWrapBox", "SetWrapWidth");
    struct
    {
        float InWrapWidth;
    } Parms{};
    Parms.InWrapWidth = (float)InWrapWidth;
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPColorManager::* ----
void UGPColorManager::Reset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPColorManager", "Reset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPColorManager::Init()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPColorManager", "Init");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FSlateColor UGPColorManager::GetSlateColorByRowName(struct FName RowName, float Opacity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPColorManager", "GetSlateColorByRowName");
    struct
    {
        struct FName RowName;
        float Opacity;
        struct FSlateColor ReturnValue;
    } Parms{};
    Parms.RowName = (struct FName)RowName;
    Parms.Opacity = (float)Opacity;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FSlateColor UGPColorManager::GetSlateColorByKey(struct FName ColorKey, float Opacity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPColorManager", "GetSlateColorByKey");
    struct
    {
        struct FName ColorKey;
        float Opacity;
        struct FSlateColor ReturnValue;
    } Parms{};
    Parms.ColorKey = (struct FName)ColorKey;
    Parms.Opacity = (float)Opacity;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UGPColorManager::GetRowNameByColorKey(struct FName ColorKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPColorManager", "GetRowNameByColorKey");
    struct
    {
        struct FName ColorKey;
        struct FName ReturnValue;
    } Parms{};
    Parms.ColorKey = (struct FName)ColorKey;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FLinearColor UGPColorManager::GetLinerColorByRowName(struct FName RowName, float Opacity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPColorManager", "GetLinerColorByRowName");
    struct
    {
        struct FName RowName;
        float Opacity;
        struct FLinearColor ReturnValue;
    } Parms{};
    Parms.RowName = (struct FName)RowName;
    Parms.Opacity = (float)Opacity;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FLinearColor UGPColorManager::GetLinerColorByKey(struct FName ColorKey, float Opacity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPColorManager", "GetLinerColorByKey");
    struct
    {
        struct FName ColorKey;
        float Opacity;
        struct FLinearColor ReturnValue;
    } Parms{};
    Parms.ColorKey = (struct FName)ColorKey;
    Parms.Opacity = (float)Opacity;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPColorManager* UGPColorManager::Get(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPColorManager", "Get");
    struct
    {
        struct UObject* WorldContext;
        struct UGPColorManager* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGPPersistentRootUIBase::* ----
void UGPPersistentRootUIBase::SetRetainerBoxMaterialParameter(struct FName ParamName, float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPPersistentRootUIBase", "SetRetainerBoxMaterialParameter");
    struct
    {
        struct FName ParamName;
        float Value;
    } Parms{};
    Parms.ParamName = (struct FName)ParamName;
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void UGPPersistentRootUIBase::SetRetainerBoxEffectEnabled(uint8_t bEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPPersistentRootUIBase", "SetRetainerBoxEffectEnabled");
    struct
    {
        uint8_t bEnabled;
    } Parms{};
    Parms.bEnabled = (uint8_t)bEnabled;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPPersistentRootUIBase::RemoveUI(struct UWidget* UIIns)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPPersistentRootUIBase", "RemoveUI");
    struct
    {
        struct UWidget* UIIns;
        uint8_t ReturnValue;
    } Parms{};
    Parms.UIIns = (struct UWidget*)UIIns;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPPersistentRootUIBase::OnPersistentRootPrepared_Internal()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPPersistentRootUIBase", "OnPersistentRootPrepared_Internal");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPPersistentRootUIBase::FreshSafeZone()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPPersistentRootUIBase", "FreshSafeZone");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPPersistentRootUIBase::AddUI(struct UWidget* UIIns, int32_t ZOrder, ELuaUILayer LayerType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPPersistentRootUIBase", "AddUI");
    struct
    {
        struct UWidget* UIIns;
        int32_t ZOrder;
        enum ELuaUILayer LayerType;
        uint8_t ReturnValue;
    } Parms{};
    Parms.UIIns = (struct UWidget*)UIIns;
    Parms.ZOrder = (int32_t)ZOrder;
    Parms.LayerType = (enum ELuaUILayer)LayerType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPPersistentRootUIBase::AddToPersistentFrameLayer(struct UWidget* UIIns, int32_t ZOrder, ELuaUILayer LayerType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPPersistentRootUIBase", "AddToPersistentFrameLayer");
    struct
    {
        struct UWidget* UIIns;
        int32_t ZOrder;
        enum ELuaUILayer LayerType;
        uint8_t ReturnValue;
    } Parms{};
    Parms.UIIns = (struct UWidget*)UIIns;
    Parms.ZOrder = (int32_t)ZOrder;
    Parms.LayerType = (enum ELuaUILayer)LayerType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGPUIManager::* ----
void UGPUIManager::UnloadThemeStyle(struct FString ThemeID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUIManager", "UnloadThemeStyle");
    struct
    {
        struct FString ThemeID;
    } Parms{};
    Parms.ThemeID = (struct FString)ThemeID;
    this->ProcessEvent(Func, &Parms);
}

void UGPUIManager::UnloadAllThemeStyles()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUIManager", "UnloadAllThemeStyles");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPUIManager::TryFreshPersistentUILayers()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUIManager", "TryFreshPersistentUILayers");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPUIManager::Reset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUIManager", "Reset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPUIManager::RemoveFromRoot(struct UWidget* UIIns)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUIManager", "RemoveFromRoot");
    struct
    {
        struct UWidget* UIIns;
        uint8_t ReturnValue;
    } Parms{};
    Parms.UIIns = (struct UWidget*)UIIns;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPUIManager::PreInitAsset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUIManager", "PreInitAsset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPUIManager::OnPreGarbageCollect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUIManager", "OnPreGarbageCollect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPUIManager::LoadThemeStyle(struct FString ThemeID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUIManager", "LoadThemeStyle");
    struct
    {
        struct FString ThemeID;
    } Parms{};
    Parms.ThemeID = (struct FString)ThemeID;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPUIManager::InitPersistentUILayers()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUIManager", "InitPersistentUILayers");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPUIManager::InitAsset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUIManager", "InitAsset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPUIManager::Init()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUIManager", "Init");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FSoftObjectPath UGPUIManager::GetThemeStyleIconPath(struct FString ThemeID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUIManager", "GetThemeStyleIconPath");
    struct
    {
        struct FString ThemeID;
        struct FSoftObjectPath ReturnValue;
    } Parms{};
    Parms.ThemeID = (struct FString)ThemeID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPPersistentRootUIBase* UGPUIManager::GetPersistentRootUI()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUIManager", "GetPersistentRootUI");
    struct
    {
        struct UGPPersistentRootUIBase* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPUIManager* UGPUIManager::Get(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUIManager", "Get");
    struct
    {
        struct UObject* WorldContext;
        struct UGPUIManager* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPUIManager::DeactivatePersistentRoot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUIManager", "DeactivatePersistentRoot");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPUIManager::ClearWaitingQueue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUIManager", "ClearWaitingQueue");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPUIManager::ClearLoadingAsset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUIManager", "ClearLoadingAsset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPUIManager::CheckIsIdleState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUIManager", "CheckIsIdleState");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPUIManager::AddToWaitingQueue(struct UWidget* UIIns, int32_t ZOrder, ELuaUILayer UILayer, uint8_t bIsInSafeZone)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUIManager", "AddToWaitingQueue");
    struct
    {
        struct UWidget* UIIns;
        int32_t ZOrder;
        enum ELuaUILayer UILayer;
        uint8_t bIsInSafeZone;
        uint8_t ReturnValue;
    } Parms{};
    Parms.UIIns = (struct UWidget*)UIIns;
    Parms.ZOrder = (int32_t)ZOrder;
    Parms.UILayer = (enum ELuaUILayer)UILayer;
    Parms.bIsInSafeZone = (uint8_t)bIsInSafeZone;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPUIManager::AddToRoot(struct UWidget* UIIns, int32_t ZOrder, ELuaUILayer UILayer, uint8_t bIsInSafeZone)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUIManager", "AddToRoot");
    struct
    {
        struct UWidget* UIIns;
        int32_t ZOrder;
        enum ELuaUILayer UILayer;
        uint8_t bIsInSafeZone;
        uint8_t ReturnValue;
    } Parms{};
    Parms.UIIns = (struct UWidget*)UIIns;
    Parms.ZOrder = (int32_t)ZOrder;
    Parms.UILayer = (enum ELuaUILayer)UILayer;
    Parms.bIsInSafeZone = (uint8_t)bIsInSafeZone;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPUIManager::ActivatePersistentRoot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUIManager", "ActivatePersistentRoot");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPUserInterfaceGlobalDelegates::* ----
struct UGPUserInterfaceGlobalDelegates* UGPUserInterfaceGlobalDelegates::Get(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUserInterfaceGlobalDelegates", "Get");
    struct
    {
        struct UObject* WorldContext;
        struct UGPUserInterfaceGlobalDelegates* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGPUserInterfaceUtil::* ----
void UGPUserInterfaceUtil::WaitUntilWidgetVisible(struct UObject* WorldContextObject, struct UWidget* InWidget, struct FLatentActionInfo LatentInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUserInterfaceUtil", "WaitUntilWidgetVisible");
    struct
    {
        struct UObject* WorldContextObject;
        struct UWidget* InWidget;
        struct FLatentActionInfo LatentInfo;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.InWidget = (struct UWidget*)InWidget;
    Parms.LatentInfo = (struct FLatentActionInfo)LatentInfo;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UObject* UGPUserInterfaceUtil::TryLoadObjectByString_Test(struct FString PathStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUserInterfaceUtil", "TryLoadObjectByString_Test");
    struct
    {
        struct FString PathStr;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.PathStr = (struct FString)PathStr;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UUserWidget* UGPUserInterfaceUtil::TestAddUserWidgetPathToCanvasPanel(struct TSoftClassPtr<struct UUserWidget*> SoftClassPtr, struct UCanvasPanel* CanvasPanel_Root)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUserInterfaceUtil", "TestAddUserWidgetPathToCanvasPanel");
    struct
    {
        struct TSoftClassPtr<struct UUserWidget*> SoftClassPtr;
        struct UCanvasPanel* CanvasPanel_Root;
        struct UUserWidget* ReturnValue;
    } Parms{};
    Parms.SoftClassPtr = (struct TSoftClassPtr<struct UUserWidget*>)SoftClassPtr;
    Parms.CanvasPanel_Root = (struct UCanvasPanel*)CanvasPanel_Root;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPUserInterfaceUtil::OverrideGUITextureAmplifiedRate(float NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUserInterfaceUtil", "OverrideGUITextureAmplifiedRate");
    struct
    {
        float NewValue;
    } Parms{};
    Parms.NewValue = (float)NewValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UGPUserInterfaceUtil::IsWidgetRealyVisible(struct UWidget* InWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUserInterfaceUtil", "IsWidgetRealyVisible");
    struct
    {
        struct UWidget* InWidget;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InWidget = (struct UWidget*)InWidget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPUserInterfaceUtil::IsWidgetRealyEnabled(struct UWidget* InWidget, uint8_t bDirectParent, uint8_t bIncludeEnableState, uint8_t bIncludeActiveState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUserInterfaceUtil", "IsWidgetRealyEnabled");
    struct
    {
        struct UWidget* InWidget;
        uint8_t bDirectParent;
        uint8_t bIncludeEnableState;
        uint8_t bIncludeActiveState;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InWidget = (struct UWidget*)InWidget;
    Parms.bDirectParent = (uint8_t)bDirectParent;
    Parms.bIncludeEnableState = (uint8_t)bIncludeEnableState;
    Parms.bIncludeActiveState = (uint8_t)bIncludeActiveState;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPUserInterfaceUtil::IsThemeIDZero(struct FString ThemeID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUserInterfaceUtil", "IsThemeIDZero");
    struct
    {
        struct FString ThemeID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ThemeID = (struct FString)ThemeID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPUserInterfaceUtil::IsThemeIDValid(struct FString ThemeID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUserInterfaceUtil", "IsThemeIDValid");
    struct
    {
        struct FString ThemeID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ThemeID = (struct FString)ThemeID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPUserInterfaceUtil::IsSupportsBackbufferSampling()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUserInterfaceUtil", "IsSupportsBackbufferSampling");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPUserInterfaceUtil::IsSlatePostProcessorEnable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUserInterfaceUtil", "IsSlatePostProcessorEnable");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGPUserInterfaceUtil::IsOverlap_Inventory(struct UUserWidget* LeftPanel, struct UUserWidget* RightPanel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUserInterfaceUtil", "IsOverlap_Inventory");
    struct
    {
        struct UUserWidget* LeftPanel;
        struct UUserWidget* RightPanel;
        float ReturnValue;
    } Parms{};
    Parms.LeftPanel = (struct UUserWidget*)LeftPanel;
    Parms.RightPanel = (struct UUserWidget*)RightPanel;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPUserInterfaceUtil::IsAOverlapByB(const struct FVector4& BoundingBoxA, const struct FVector4& BoundingBoxB, struct FVector2D& CorrectVector)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUserInterfaceUtil", "IsAOverlapByB");
    struct
    {
        struct FVector4 BoundingBoxA;
        struct FVector4 BoundingBoxB;
        struct FVector2D CorrectVector;
        uint8_t ReturnValue;
    } Parms{};
    Parms.BoundingBoxA = (struct FVector4)BoundingBoxA;
    Parms.BoundingBoxB = (struct FVector4)BoundingBoxB;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    CorrectVector = Parms.CorrectVector;
    return Parms.ReturnValue;
}

uint8_t UGPUserInterfaceUtil::HasAnyUserFocus(uint32_t UserIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUserInterfaceUtil", "HasAnyUserFocus");
    struct
    {
        uint32_t UserIndex;
        uint8_t ReturnValue;
    } Parms{};
    Parms.UserIndex = (uint32_t)UserIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UGPUserInterfaceUtil::GetViewportSize_ActiveTopLevelWindow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUserInterfaceUtil", "GetViewportSize_ActiveTopLevelWindow");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UGPUserInterfaceUtil::GetSizeInScreen_ActiveTopLevelWindow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUserInterfaceUtil", "GetSizeInScreen_ActiveTopLevelWindow");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UGPUserInterfaceUtil::GetDisplayMetrics_SlateApplication()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUserInterfaceUtil", "GetDisplayMetrics_SlateApplication");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FSoftObjectPath UGPUserInterfaceUtil::GetDefaultCommon_WhiteBlock()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUserInterfaceUtil", "GetDefaultCommon_WhiteBlock");
    struct
    {
        struct FSoftObjectPath ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGPUserInterfaceUtil::FSoftObjectPathToFString(struct FSoftObjectPath SoftObjectPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUserInterfaceUtil", "FSoftObjectPathToFString");
    struct
    {
        struct FSoftObjectPath SoftObjectPath;
        struct FString ReturnValue;
    } Parms{};
    Parms.SoftObjectPath = (struct FSoftObjectPath)SoftObjectPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGPUserInterfaceUtil::FindConsoleVariable_Int32(struct FString CVarStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUserInterfaceUtil", "FindConsoleVariable_Int32");
    struct
    {
        struct FString CVarStr;
        int32_t ReturnValue;
    } Parms{};
    Parms.CVarStr = (struct FString)CVarStr;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGPUserInterfaceUtil::FindConsoleVariable_Float(struct FString CVarStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUserInterfaceUtil", "FindConsoleVariable_Float");
    struct
    {
        struct FString CVarStr;
        float ReturnValue;
    } Parms{};
    Parms.CVarStr = (struct FString)CVarStr;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPUserInterfaceUtil::ClearUserFocus(uint32_t UserIndex, EFocusCause ReasonFocusIsChanging)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUserInterfaceUtil", "ClearUserFocus");
    struct
    {
        uint32_t UserIndex;
        enum EFocusCause ReasonFocusIsChanging;
    } Parms{};
    Parms.UserIndex = (uint32_t)UserIndex;
    Parms.ReasonFocusIsChanging = (enum EFocusCause)ReasonFocusIsChanging;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UGPUserInterfaceUtil::CheckAbsolutePointInsideWidget(struct UWidget* InWidget, const struct FVector2D& AbsolutePosition, struct FVector2D& CorrectVector)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUserInterfaceUtil", "CheckAbsolutePointInsideWidget");
    struct
    {
        struct UWidget* InWidget;
        struct FVector2D AbsolutePosition;
        struct FVector2D CorrectVector;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InWidget = (struct UWidget*)InWidget;
    Parms.AbsolutePosition = (struct FVector2D)AbsolutePosition;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    CorrectVector = Parms.CorrectVector;
    return Parms.ReturnValue;
}

} // namespace SDK
