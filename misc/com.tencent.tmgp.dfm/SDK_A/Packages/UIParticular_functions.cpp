#include "UIParticular.hpp"
#include "Engine.hpp"
#include "SlateCore.hpp"
#include "UMG.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UInstanceTemplateWidget::* ----
void UInstanceTemplateWidget::SetTickWhenPaused(uint8_t NewTickWhenPaused)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InstanceTemplateWidget", "SetTickWhenPaused");
    struct
    {
        uint8_t NewTickWhenPaused;
    } Parms{};
    Parms.NewTickWhenPaused = (uint8_t)NewTickWhenPaused;
    this->ProcessEvent(Func, &Parms);
}

void UInstanceTemplateWidget::SetReactivate(uint8_t bActivateAndReset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InstanceTemplateWidget", "SetReactivate");
    struct
    {
        uint8_t bActivateAndReset;
    } Parms{};
    Parms.bActivateAndReset = (uint8_t)bActivateAndReset;
    this->ProcessEvent(Func, &Parms);
}

void UInstanceTemplateWidget::SetMeshRotate(struct FRotator inRotator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InstanceTemplateWidget", "SetMeshRotate");
    struct
    {
        struct FRotator inRotator;
    } Parms{};
    Parms.inRotator = (struct FRotator)inRotator;
    this->ProcessEvent(Func, &Parms);
}

void UInstanceTemplateWidget::ActivateMeshs(uint8_t bActive, uint8_t bReset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InstanceTemplateWidget", "ActivateMeshs");
    struct
    {
        uint8_t bActive;
        uint8_t bReset;
    } Parms{};
    Parms.bActive = (uint8_t)bActive;
    Parms.bReset = (uint8_t)bReset;
    this->ProcessEvent(Func, &Parms);
}

// ---- UParticleWidget::* ----
void UParticleWidget::SetTickWhenPaused(uint8_t NewTickWhenPaused)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ParticleWidget", "SetTickWhenPaused");
    struct
    {
        uint8_t NewTickWhenPaused;
    } Parms{};
    Parms.NewTickWhenPaused = (uint8_t)NewTickWhenPaused;
    this->ProcessEvent(Func, &Parms);
}

void UParticleWidget::SetSizeScale(float InScale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ParticleWidget", "SetSizeScale");
    struct
    {
        float InScale;
    } Parms{};
    Parms.InScale = (float)InScale;
    this->ProcessEvent(Func, &Parms);
}

void UParticleWidget::SetReactivate(uint8_t bActivateAndReset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ParticleWidget", "SetReactivate");
    struct
    {
        uint8_t bActivateAndReset;
    } Parms{};
    Parms.bActivateAndReset = (uint8_t)bActivateAndReset;
    this->ProcessEvent(Func, &Parms);
}

void UParticleWidget::SetParticleRotate(struct FRotator inRotator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ParticleWidget", "SetParticleRotate");
    struct
    {
        struct FRotator inRotator;
    } Parms{};
    Parms.inRotator = (struct FRotator)inRotator;
    this->ProcessEvent(Func, &Parms);
}

void UParticleWidget::SetParticleAxis(EParticleAxisFlags inAxis)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ParticleWidget", "SetParticleAxis");
    struct
    {
        enum EParticleAxisFlags inAxis;
    } Parms{};
    Parms.inAxis = (enum EParticleAxisFlags)inAxis;
    this->ProcessEvent(Func, &Parms);
}

void UParticleWidget::ActivateParticles(uint8_t bActive, uint8_t bReset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ParticleWidget", "ActivateParticles");
    struct
    {
        uint8_t bActive;
        uint8_t bReset;
    } Parms{};
    Parms.bActive = (uint8_t)bActive;
    Parms.bReset = (uint8_t)bReset;
    this->ProcessEvent(Func, &Parms);
}

// ---- UUIMeshWidget::* ----
void UUIMeshWidget::SetTickWhenPaused(uint8_t NewTickWhenPaused)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UIMeshWidget", "SetTickWhenPaused");
    struct
    {
        uint8_t NewTickWhenPaused;
    } Parms{};
    Parms.NewTickWhenPaused = (uint8_t)NewTickWhenPaused;
    this->ProcessEvent(Func, &Parms);
}

void UUIMeshWidget::SetOpacity(float InOpacity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UIMeshWidget", "SetOpacity");
    struct
    {
        float InOpacity;
    } Parms{};
    Parms.InOpacity = (float)InOpacity;
    this->ProcessEvent(Func, &Parms);
}

void UUIMeshWidget::SetColorAndOpacity(struct FLinearColor InColorAndOpacity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UIMeshWidget", "SetColorAndOpacity");
    struct
    {
        struct FLinearColor InColorAndOpacity;
    } Parms{};
    Parms.InColorAndOpacity = (struct FLinearColor)InColorAndOpacity;
    this->ProcessEvent(Func, &Parms);
}

void UUIMeshWidget::SetBrushTintColor(struct FSlateColor TintColor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UIMeshWidget", "SetBrushTintColor");
    struct
    {
        struct FSlateColor TintColor;
    } Parms{};
    Parms.TintColor = (struct FSlateColor)TintColor;
    this->ProcessEvent(Func, &Parms);
}

void UUIMeshWidget::SetBrushResourceObject(struct UObject* ResourceObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UIMeshWidget", "SetBrushResourceObject");
    struct
    {
        struct UObject* ResourceObject;
    } Parms{};
    Parms.ResourceObject = (struct UObject*)ResourceObject;
    this->ProcessEvent(Func, &Parms);
}

void UUIMeshWidget::SetBrushFromTextureDynamic(struct UTexture2DDynamic* Texture, uint8_t bMatchSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UIMeshWidget", "SetBrushFromTextureDynamic");
    struct
    {
        struct UTexture2DDynamic* Texture;
        uint8_t bMatchSize;
    } Parms{};
    Parms.Texture = (struct UTexture2DDynamic*)Texture;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    this->ProcessEvent(Func, &Parms);
}

void UUIMeshWidget::SetBrushFromTexture(struct UTexture2D* Texture, uint8_t bMatchSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UIMeshWidget", "SetBrushFromTexture");
    struct
    {
        struct UTexture2D* Texture;
        uint8_t bMatchSize;
    } Parms{};
    Parms.Texture = (struct UTexture2D*)Texture;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    this->ProcessEvent(Func, &Parms);
}

void UUIMeshWidget::SetBrushFromMaterial(struct UMaterialInterface* Material)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UIMeshWidget", "SetBrushFromMaterial");
    struct
    {
        struct UMaterialInterface* Material;
    } Parms{};
    Parms.Material = (struct UMaterialInterface*)Material;
    this->ProcessEvent(Func, &Parms);
}

void UUIMeshWidget::SetBrushFromAtlasInterface(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, uint8_t bMatchSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UIMeshWidget", "SetBrushFromAtlasInterface");
    struct
    {
        struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion;
        uint8_t bMatchSize;
    } Parms{};
    Parms.AtlasRegion = (struct TScriptInterface<ISlateTextureAtlasInterface>)AtlasRegion;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    this->ProcessEvent(Func, &Parms);
}

void UUIMeshWidget::SetBrush(const struct FSlateBrush& InBrush)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UIMeshWidget", "SetBrush");
    struct
    {
        struct FSlateBrush InBrush;
    } Parms{};
    Parms.InBrush = (struct FSlateBrush)InBrush;
    this->ProcessEvent(Func, &Parms);
}

struct UMaterialInstanceDynamic* UUIMeshWidget::GetDynamicMaterial()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UIMeshWidget", "GetDynamicMaterial");
    struct
    {
        struct UMaterialInstanceDynamic* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UUMGStaticsLibrary::* ----
float UUMGStaticsLibrary::PlayAnimationByName(struct UUserWidget* UserWidget, struct FString AnimName, struct FString WidgetName, EUMGPlayAnimMode PlayMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UMGStaticsLibrary", "PlayAnimationByName");
    struct
    {
        struct UUserWidget* UserWidget;
        struct FString AnimName;
        struct FString WidgetName;
        enum EUMGPlayAnimMode PlayMode;
        float ReturnValue;
    } Parms{};
    Parms.UserWidget = (struct UUserWidget*)UserWidget;
    Parms.AnimName = (struct FString)AnimName;
    Parms.WidgetName = (struct FString)WidgetName;
    Parms.PlayMode = (enum EUMGPlayAnimMode)PlayMode;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWidgetAnimation* UUMGStaticsLibrary::GetWidgetAnimation(struct UUserWidget* UserWidget, struct FString AnimName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UMGStaticsLibrary", "GetWidgetAnimation");
    struct
    {
        struct UUserWidget* UserWidget;
        struct FString AnimName;
        struct UWidgetAnimation* ReturnValue;
    } Parms{};
    Parms.UserWidget = (struct UUserWidget*)UserWidget;
    Parms.AnimName = (struct FString)AnimName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UWidgetAnimation*> UUMGStaticsLibrary::GetAllWidgetAnimations(struct UUserWidget* UserWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UMGStaticsLibrary", "GetAllWidgetAnimations");
    struct
    {
        struct UUserWidget* UserWidget;
        struct TArray<struct UWidgetAnimation*> ReturnValue;
    } Parms{};
    Parms.UserWidget = (struct UUserWidget*)UserWidget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UUserWidget* UUMGStaticsLibrary::BP_FindWidgetbyName(struct UUserWidget* UserWidget, struct FString WidgetName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UMGStaticsLibrary", "BP_FindWidgetbyName");
    struct
    {
        struct UUserWidget* UserWidget;
        struct FString WidgetName;
        struct UUserWidget* ReturnValue;
    } Parms{};
    Parms.UserWidget = (struct UUserWidget*)UserWidget;
    Parms.WidgetName = (struct FString)WidgetName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
