#include "MFMobileJoystick.hpp"
#include "Engine.hpp"
#include "GameplayTags.hpp"
#include "SGFramework.hpp"
#include "UMG.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UMFAdvanceProgressBar
void UMFAdvanceProgressBar::SetPercent(float InPercent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFAdvanceProgressBar", "SetPercent");
    struct
    {
        float InPercent;
    } Parms{};
    Parms.InPercent = (float)InPercent;
    this->ProcessEvent(Func, &Parms);
}

struct UMaterialInstanceDynamic* UMFAdvanceProgressBar::GetFillImageDynamicMaterial()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFAdvanceProgressBar", "GetFillImageDynamicMaterial");
    struct
    {
        struct UMaterialInstanceDynamic* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMaterialInstanceDynamic* UMFAdvanceProgressBar::GetBackgroundImageDynamicMaterial()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFAdvanceProgressBar", "GetBackgroundImageDynamicMaterial");
    struct
    {
        struct UMaterialInstanceDynamic* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFMobileTouchButton
float UMFMobileTouchButton::GetTouchTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileTouchButton", "GetTouchTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFMobileTouchButton::GetFingerIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileTouchButton", "GetFingerIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFMobileAxisInputButton
struct FVector2D UMFMobileAxisInputButton::GetTouchPosition()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileAxisInputButton", "GetTouchPosition");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFMobileCircleUserWidget
void UMFMobileCircleUserWidget::SetFingerIndexDisableMoveAndRotate(int32_t CustomWidgetPointIndex, bool bDisable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCircleUserWidget", "SetFingerIndexDisableMoveAndRotate");
    struct
    {
        int32_t CustomWidgetPointIndex;
        bool bDisable;
    } Parms{};
    Parms.CustomWidgetPointIndex = (int32_t)CustomWidgetPointIndex;
    Parms.bDisable = (bool)bDisable;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobileCircleUserWidget::SetCurrentAcceptInputType(EButtonAcceptInputType InCurrentAcceptInputType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCircleUserWidget", "SetCurrentAcceptInputType");
    struct
    {
        enum EButtonAcceptInputType InCurrentAcceptInputType;
    } Parms{};
    Parms.InCurrentAcceptInputType = (enum EButtonAcceptInputType)InCurrentAcceptInputType;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobileCircleUserWidget::OnInputTouchEnded(uint8_t FingerIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCircleUserWidget", "OnInputTouchEnded");
    struct
    {
        uint8_t FingerIndex;
    } Parms{};
    Parms.FingerIndex = (uint8_t)FingerIndex;
    this->ProcessEvent(Func, &Parms);
}

bool UMFMobileCircleUserWidget::IsPressed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCircleUserWidget", "IsPressed");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFMobileCircleUserWidget::InMovementArea(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCircleUserWidget", "InMovementArea");
    struct
    {
        struct UWidget* Widget;
        bool ReturnValue;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFMobileCircleUserWidget::GetCurrentWidgetPointIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCircleUserWidget", "GetCurrentWidgetPointIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFMobileCircleUserWidget::DebugCallOnTouchStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCircleUserWidget", "DebugCallOnTouchStart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFMobileCircleUserWidget::DebugCallOnTouchEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCircleUserWidget", "DebugCallOnTouchEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UMFMobileCircleUserWidget_Fire
void UMFMobileCircleUserWidget_Fire::TouchFireStarted()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCircleUserWidget_Fire", "TouchFireStarted");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFMobileCircleUserWidget_Fire::SetIsPreparingPumpFire(bool bInIsPreparingPumpFire)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCircleUserWidget_Fire", "SetIsPreparingPumpFire");
    struct
    {
        bool bInIsPreparingPumpFire;
    } Parms{};
    Parms.bInIsPreparingPumpFire = (bool)bInIsPreparingPumpFire;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobileCircleUserWidget_Fire::PostStartFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCircleUserWidget_Fire", "PostStartFire");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFMobileCircleUserWidget_Fire::OnZoomEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCircleUserWidget_Fire", "OnZoomEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFMobileCircleUserWidget_Fire::OnZoomChanged(bool bInZoomChanged)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCircleUserWidget_Fire", "OnZoomChanged");
    struct
    {
        bool bInZoomChanged;
    } Parms{};
    Parms.bInZoomChanged = (bool)bInZoomChanged;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobileCircleUserWidget_Fire::OnUnZoomEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCircleUserWidget_Fire", "OnUnZoomEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFMobileCircleUserWidget_Fire::OnTouchEndedAnywhere()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCircleUserWidget_Fire", "OnTouchEndedAnywhere");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFMobileCircleUserWidget_Fire::OnRoundControlStateChanged(struct APlayerController* PlayerController, EUAPlayerRoundState RoundState, int32_t CurrRound)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCircleUserWidget_Fire", "OnRoundControlStateChanged");
    struct
    {
        struct APlayerController* PlayerController;
        enum EUAPlayerRoundState RoundState;
        int32_t CurrRound;
    } Parms{};
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    Parms.RoundState = (enum EUAPlayerRoundState)RoundState;
    Parms.CurrRound = (int32_t)CurrRound;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobileCircleUserWidget_Fire::OnRepPawn(struct APlayerController* PlayerController, struct APawn* Pawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCircleUserWidget_Fire", "OnRepPawn");
    struct
    {
        struct APlayerController* PlayerController;
        struct APawn* Pawn;
    } Parms{};
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    Parms.Pawn = (struct APawn*)Pawn;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobileCircleUserWidget_Fire::OnPossessPawn(struct APlayerController* PlayerController, struct APawn* Pawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCircleUserWidget_Fire", "OnPossessPawn");
    struct
    {
        struct APlayerController* PlayerController;
        struct APawn* Pawn;
    } Parms{};
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    Parms.Pawn = (struct APawn*)Pawn;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobileCircleUserWidget_Fire::OnCheckFireDown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCircleUserWidget_Fire", "OnCheckFireDown");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFMobileCircleUserWidget_Fire::NativeStartFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCircleUserWidget_Fire", "NativeStartFire");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFMobileCircleUserWidget_Fire::NativeEndFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCircleUserWidget_Fire", "NativeEndFire");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFMobileCircleUserWidget_Fire::NativeCancelFastAimFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCircleUserWidget_Fire", "NativeCancelFastAimFire");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool UMFMobileCircleUserWidget_Fire::IsAnotherFireBtnPressed(struct ASGPlayerController* PC)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCircleUserWidget_Fire", "IsAnotherFireBtnPressed");
    struct
    {
        struct ASGPlayerController* PC;
        bool ReturnValue;
    } Parms{};
    Parms.PC = (struct ASGPlayerController*)PC;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFMobileCircleUserWidget_Fire::InitCancelAbilityTagsChangedEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCircleUserWidget_Fire", "InitCancelAbilityTagsChangedEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool UMFMobileCircleUserWidget_Fire::GetUseAutoZoom()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCircleUserWidget_Fire", "GetUseAutoZoom");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UMFMobileCircleUserWidget_Fire::GetPressedScreenSpacePosition()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCircleUserWidget_Fire", "GetPressedScreenSpacePosition");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFMobileCircleUserWidget_Fire::CheckAndUpdateSwitchingFireMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCircleUserWidget_Fire", "CheckAndUpdateSwitchingFireMode");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFMobileCircleUserWidget_Fire::CancelAbilityTagsChanged(struct FGameplayTag ChangedGameplayTag, int32_t NewCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCircleUserWidget_Fire", "CancelAbilityTagsChanged");
    struct
    {
        struct FGameplayTag ChangedGameplayTag;
        int32_t NewCount;
    } Parms{};
    Parms.ChangedGameplayTag = (struct FGameplayTag)ChangedGameplayTag;
    Parms.NewCount = (int32_t)NewCount;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobileCircleUserWidget_Fire::CancelAbilities()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCircleUserWidget_Fire", "CancelAbilities");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UMFMobileCustomLayoutButton
void UMFMobileCustomLayoutButton::SetButtonTransparency(float InTransparency)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCustomLayoutButton", "SetButtonTransparency");
    struct
    {
        float InTransparency;
    } Parms{};
    Parms.InTransparency = (float)InTransparency;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobileCustomLayoutButton::SetButtonSize(float InSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCustomLayoutButton", "SetButtonSize");
    struct
    {
        float InSize;
    } Parms{};
    Parms.InSize = (float)InSize;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobileCustomLayoutButton::SetButtonPos(float InPosX, float InPosY)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCustomLayoutButton", "SetButtonPos");
    struct
    {
        float InPosX;
        float InPosY;
    } Parms{};
    Parms.InPosX = (float)InPosX;
    Parms.InPosY = (float)InPosY;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobileCustomLayoutButton::SetButtonIsHidden(bool bInIsHidden)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCustomLayoutButton", "SetButtonIsHidden");
    struct
    {
        bool bInIsHidden;
    } Parms{};
    Parms.bInIsHidden = (bool)bInIsHidden;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobileCustomLayoutButton::SetButtonFocusState(bool bInFocused)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCustomLayoutButton", "SetButtonFocusState");
    struct
    {
        bool bInFocused;
    } Parms{};
    Parms.bInFocused = (bool)bInFocused;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobileCustomLayoutButton::SetAllPropertiesExceptIsHidden(float InPosX, float InPosY, float InSize, float InTransparency)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCustomLayoutButton", "SetAllPropertiesExceptIsHidden");
    struct
    {
        float InPosX;
        float InPosY;
        float InSize;
        float InTransparency;
    } Parms{};
    Parms.InPosX = (float)InPosX;
    Parms.InPosY = (float)InPosY;
    Parms.InSize = (float)InSize;
    Parms.InTransparency = (float)InTransparency;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobileCustomLayoutButton::SetAllProperties(float InPosX, float InPosY, float InSize, float InTransparency, bool bInIsHidden)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCustomLayoutButton", "SetAllProperties");
    struct
    {
        float InPosX;
        float InPosY;
        float InSize;
        float InTransparency;
        bool bInIsHidden;
    } Parms{};
    Parms.InPosX = (float)InPosX;
    Parms.InPosY = (float)InPosY;
    Parms.InSize = (float)InSize;
    Parms.InTransparency = (float)InTransparency;
    Parms.bInIsHidden = (bool)bInIsHidden;
    this->ProcessEvent(Func, &Parms);
}

float UMFMobileCustomLayoutButton::GetButtonTransparency()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCustomLayoutButton", "GetButtonTransparency");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFMobileCustomLayoutButton::GetButtonSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCustomLayoutButton", "GetButtonSize");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UMFMobileCustomLayoutButton::GetButtonPos()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCustomLayoutButton", "GetButtonPos");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFMobileCustomLayoutButton::GetButtonIsHidden()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCustomLayoutButton", "GetButtonIsHidden");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFMobileCustomLayoutButton::ForceSetButtonPos(float InPosX, float InPosY)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCustomLayoutButton", "ForceSetButtonPos");
    struct
    {
        float InPosX;
        float InPosY;
    } Parms{};
    Parms.InPosX = (float)InPosX;
    Parms.InPosY = (float)InPosY;
    this->ProcessEvent(Func, &Parms);
}

// UMFMobileCustomShapeButton
void UMFMobileCustomShapeButton::SetAdvancedHitTexture(struct UTexture2D* InTexture)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCustomShapeButton", "SetAdvancedHitTexture");
    struct
    {
        struct UTexture2D* InTexture;
    } Parms{};
    Parms.InTexture = (struct UTexture2D*)InTexture;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobileCustomShapeButton::SetAdvancedHitAlpha(int32_t InAlpha)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCustomShapeButton", "SetAdvancedHitAlpha");
    struct
    {
        int32_t InAlpha;
    } Parms{};
    Parms.InAlpha = (int32_t)InAlpha;
    this->ProcessEvent(Func, &Parms);
}

bool UMFMobileCustomShapeButton::CheckIfLastMouseButtonUpInZone()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileCustomShapeButton", "CheckIfLastMouseButtonUpInZone");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFMobileDelayButton
void UMFMobileDelayButton::SetInputValue(float InInputValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileDelayButton", "SetInputValue");
    struct
    {
        float InInputValue;
    } Parms{};
    Parms.InInputValue = (float)InInputValue;
    this->ProcessEvent(Func, &Parms);
}

float UMFMobileDelayButton::GetInputValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileDelayButton", "GetInputValue");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFMobileGamePadView
void UMFMobileGamePadView::SetVisibleWithTag(struct UWidget* Widget, struct FName Tag, bool Visible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileGamePadView", "SetVisibleWithTag");
    struct
    {
        struct UWidget* Widget;
        struct FName Tag;
        bool Visible;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    Parms.Tag = (struct FName)Tag;
    Parms.Visible = (bool)Visible;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobileGamePadView::SetGamePad(struct UMFMobileGamePad* InGamePad)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileGamePadView", "SetGamePad");
    struct
    {
        struct UMFMobileGamePad* InGamePad;
    } Parms{};
    Parms.InGamePad = (struct UMFMobileGamePad*)InGamePad;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobileGamePadView::SaveGamePadConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileGamePadView", "SaveGamePadConfig");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct TArray<struct FName> UMFMobileGamePadView::GetAvailableWidgetNames()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobileGamePadView", "GetAvailableWidgetNames");
    struct
    {
        struct TArray<struct FName> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFMobilePlayerInput
void UMFMobilePlayerInput::UserSetSpeedAccSensitivity(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "UserSetSpeedAccSensitivity");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobilePlayerInput::UserSetFixedSensitivity(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "UserSetFixedSensitivity");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobilePlayerInput::UserSetDisAccSensitivity(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "UserSetDisAccSensitivity");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobilePlayerInput::SwitchInputMode(int32_t ModeNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "SwitchInputMode");
    struct
    {
        int32_t ModeNum;
    } Parms{};
    Parms.ModeNum = (int32_t)ModeNum;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobilePlayerInput::ShowGamepad(bool bShowGamepad)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "ShowGamepad");
    struct
    {
        bool bShowGamepad;
    } Parms{};
    Parms.bShowGamepad = (bool)bShowGamepad;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobilePlayerInput::SetTestMobileInputScale(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "SetTestMobileInputScale");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobilePlayerInput::SetSimulateMultiRoatationInputDelay(float Delay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "SetSimulateMultiRoatationInputDelay");
    struct
    {
        float Delay;
    } Parms{};
    Parms.Delay = (float)Delay;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobilePlayerInput::SetSensitivityMode(ERotateSensitivityMode Mode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "SetSensitivityMode");
    struct
    {
        enum ERotateSensitivityMode Mode;
    } Parms{};
    Parms.Mode = (enum ERotateSensitivityMode)Mode;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobilePlayerInput::SetMovementEnable(bool bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "SetMovementEnable");
    struct
    {
        bool bEnable;
    } Parms{};
    Parms.bEnable = (bool)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobilePlayerInput::SetMovementButtonUnfixed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "SetMovementButtonUnfixed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFMobilePlayerInput::SetMovementButtonFixed(struct FVector2D position, struct FVector2D Size)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "SetMovementButtonFixed");
    struct
    {
        struct FVector2D position;
        struct FVector2D Size;
    } Parms{};
    Parms.position = (struct FVector2D)position;
    Parms.Size = (struct FVector2D)Size;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobilePlayerInput::SetInputMagicMin(float x1, float x2)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "SetInputMagicMin");
    struct
    {
        float x1;
        float x2;
    } Parms{};
    Parms.x1 = (float)x1;
    Parms.x2 = (float)x2;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobilePlayerInput::SetInputMagicMax(float x1, float x2, float X3)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "SetInputMagicMax");
    struct
    {
        float x1;
        float x2;
        float X3;
    } Parms{};
    Parms.x1 = (float)x1;
    Parms.x2 = (float)x2;
    Parms.X3 = (float)X3;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobilePlayerInput::SetInputInterpSpeed(float Speed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "SetInputInterpSpeed");
    struct
    {
        float Speed;
    } Parms{};
    Parms.Speed = (float)Speed;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobilePlayerInput::SetInputBlendOP(int32_t Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "SetInputBlendOP");
    struct
    {
        int32_t Type;
    } Parms{};
    Parms.Type = (int32_t)Type;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobilePlayerInput::SetInputBlendFactor(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "SetInputBlendFactor");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobilePlayerInput::SetInputAcceptOP(int32_t Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "SetInputAcceptOP");
    struct
    {
        int32_t Type;
    } Parms{};
    Parms.Type = (int32_t)Type;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobilePlayerInput::SetFingerIndexIgnore(uint8_t FingerIndex, bool bIgnore)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "SetFingerIndexIgnore");
    struct
    {
        uint8_t FingerIndex;
        bool bIgnore;
    } Parms{};
    Parms.FingerIndex = (uint8_t)FingerIndex;
    Parms.bIgnore = (bool)bIgnore;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobilePlayerInput::SetFingerIndexDisableMoveAndRotate(uint8_t FingerIndex, bool bDisable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "SetFingerIndexDisableMoveAndRotate");
    struct
    {
        uint8_t FingerIndex;
        bool bDisable;
    } Parms{};
    Parms.FingerIndex = (uint8_t)FingerIndex;
    Parms.bDisable = (bool)bDisable;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobilePlayerInput::SetExchangeMoveAndRotate(bool bExchange)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "SetExchangeMoveAndRotate");
    struct
    {
        bool bExchange;
    } Parms{};
    Parms.bExchange = (bool)bExchange;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobilePlayerInput::SetDisableMoveAndRotate(bool bDisable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "SetDisableMoveAndRotate");
    struct
    {
        bool bDisable;
    } Parms{};
    Parms.bDisable = (bool)bDisable;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobilePlayerInput::ResetMovementButton(struct FVector2D InAbsSize, struct FVector2D InAbsPostion)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "ResetMovementButton");
    struct
    {
        struct FVector2D InAbsSize;
        struct FVector2D InAbsPostion;
    } Parms{};
    Parms.InAbsSize = (struct FVector2D)InAbsSize;
    Parms.InAbsPostion = (struct FVector2D)InAbsPostion;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobilePlayerInput::RemoveFingerIndexFullScreenRotate(uint8_t FingerIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "RemoveFingerIndexFullScreenRotate");
    struct
    {
        uint8_t FingerIndex;
    } Parms{};
    Parms.FingerIndex = (uint8_t)FingerIndex;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobilePlayerInput::OnGamePadClassSoftLoadCompleted(struct FSoftObjectPath Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "OnGamePadClassSoftLoadCompleted");
    struct
    {
        struct FSoftObjectPath Path;
    } Parms{};
    Parms.Path = (struct FSoftObjectPath)Path;
    this->ProcessEvent(Func, &Parms);
}

void UMFMobilePlayerInput::MobileInputShowLog(bool MobileInputShowLog)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "MobileInputShowLog");
    struct
    {
        bool MobileInputShowLog;
    } Parms{};
    Parms.MobileInputShowLog = (bool)MobileInputShowLog;
    this->ProcessEvent(Func, &Parms);
}

bool UMFMobilePlayerInput::IsFingerIndexFullScreenRotate(uint8_t FingerIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "IsFingerIndexFullScreenRotate");
    struct
    {
        uint8_t FingerIndex;
        bool ReturnValue;
    } Parms{};
    Parms.FingerIndex = (uint8_t)FingerIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFMobilePlayerInput::InMovementArea(const struct FVector2D& Pos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "InMovementArea");
    struct
    {
        struct FVector2D Pos;
        bool ReturnValue;
    } Parms{};
    Parms.Pos = (struct FVector2D)Pos;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFMobilePlayerInput::GetRefRotationInputData(struct FMobileInputData& Data)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "GetRefRotationInputData");
    struct
    {
        struct FMobileInputData Data;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Data = Parms.Data;
}

void UMFMobilePlayerInput::GetRefMovementInputData(struct FMobileInputData& Data)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "GetRefMovementInputData");
    struct
    {
        struct FMobileInputData Data;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Data = Parms.Data;
}

float UMFMobilePlayerInput::GetRealAccelY()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "GetRealAccelY");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFMobilePlayerInput::GetRealAccelX()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "GetRealAccelX");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UMFMobilePlayerInput::GetRealAccel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "GetRealAccel");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFMobilePlayerInput::GetPointIndexInputData(int32_t PointIndex, struct FMobileInputData& PointIndexInputData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "GetPointIndexInputData");
    struct
    {
        int32_t PointIndex;
        struct FMobileInputData PointIndexInputData;
        bool ReturnValue;
    } Parms{};
    Parms.PointIndex = (int32_t)PointIndex;
    this->ProcessEvent(Func, &Parms);
    PointIndexInputData = Parms.PointIndexInputData;
    return Parms.ReturnValue;
}

int32_t UMFMobilePlayerInput::GetMovementInputFingerIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "GetMovementInputFingerIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UMFMobilePlayerInput::GetMovementInputData_Location()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "GetMovementInputData_Location");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFMobilePlayerInput::GetMovementInputData_DeltaY()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "GetMovementInputData_DeltaY");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFMobilePlayerInput::GetMovementInputData_DeltaX()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "GetMovementInputData_DeltaX");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UMFMobilePlayerInput::GetMovementInputData_Delta()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "GetMovementInputData_Delta");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UMFMobilePlayerInput::GetMovementInputData_BeginLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "GetMovementInputData_BeginLocation");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMobileInputData UMFMobilePlayerInput::GetMovementInputData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "GetMovementInputData");
    struct
    {
        struct FMobileInputData ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFMobilePlayerInput::GetMovementInputAngleX()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "GetMovementInputAngleX");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMFMobilePlayerInput::GetMoveHandleType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "GetMoveHandleType");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFMobilePlayerInput::GetMobileInputDataListLength()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "GetMobileInputDataListLength");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UMFMobilePlayerInput::GetLastRotationVector()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "GetLastRotationVector");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UMFMobilePlayerInput::GetLastRotationInput()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "GetLastRotationInput");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFMobilePlayerInput::GetInputModeNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "GetInputModeNum");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFMobilePlayerInput::ClearInputFlags()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "ClearInputFlags");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFMobilePlayerInput::ClearAllInput()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "ClearAllInput");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool UMFMobilePlayerInput::CheckPointIndexHasInput(int32_t PointIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "CheckPointIndexHasInput");
    struct
    {
        int32_t PointIndex;
        bool ReturnValue;
    } Parms{};
    Parms.PointIndex = (int32_t)PointIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFMobilePlayerInput::AddFingerIndexFullScreenRotate(uint8_t FingerIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMobilePlayerInput", "AddFingerIndexFullScreenRotate");
    struct
    {
        uint8_t FingerIndex;
    } Parms{};
    Parms.FingerIndex = (uint8_t)FingerIndex;
    this->ProcessEvent(Func, &Parms);
}

// UMFMobilePlayerInputStatics
void UMFMobilePlayerInputStatics::SimulateStartTouch(struct UObject* WorldContextObject, int32_t TouchIndex, struct FVector Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFMobilePlayerInputStatics", "SimulateStartTouch");
    struct
    {
        struct UObject* WorldContextObject;
        int32_t TouchIndex;
        struct FVector Location;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.TouchIndex = (int32_t)TouchIndex;
    Parms.Location = (struct FVector)Location;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFMobilePlayerInputStatics::SimulateEndTouch(struct UObject* WorldContextObject, int32_t TouchIndex, struct FVector Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFMobilePlayerInputStatics", "SimulateEndTouch");
    struct
    {
        struct UObject* WorldContextObject;
        int32_t TouchIndex;
        struct FVector Location;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.TouchIndex = (int32_t)TouchIndex;
    Parms.Location = (struct FVector)Location;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UMFMobilePlayerInputStatics::HaveRotatorInput(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFMobilePlayerInputStatics", "HaveRotatorInput");
    struct
    {
        struct UObject* WorldContextObject;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFMobilePlayerInputStatics::ClearAllInput(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFMobilePlayerInputStatics", "ClearAllInput");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UMFPCPlayerInput
void UMFPCPlayerInput::OnGamePadClassSoftLoadCompleted(struct FSoftObjectPath Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPCPlayerInput", "OnGamePadClassSoftLoadCompleted");
    struct
    {
        struct FSoftObjectPath Path;
    } Parms{};
    Parms.Path = (struct FSoftObjectPath)Path;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
