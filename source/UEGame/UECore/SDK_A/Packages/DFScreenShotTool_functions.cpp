#include "DFScreenShotTool.hpp"
#include "Engine.hpp"
#include "GPUserInterface.hpp"
#include "RuntimeFilesDownloader.hpp"
#include "UMG.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UDFScreenShotRequest
void UDFScreenShotRequest::OnScreenShotCapturedSpliceWatermark(int32_t InSizeX, int32_t InSizeY, const struct TArray<struct FColor>& InImageData, struct FString ScreenshotName, struct UGameInstance* GameInstance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScreenShotRequest", "OnScreenShotCapturedSpliceWatermark");
    struct
    {
        int32_t InSizeX;
        int32_t InSizeY;
        struct TArray<struct FColor> InImageData;
        struct FString ScreenshotName;
        struct UGameInstance* GameInstance;
    } Parms{};
    Parms.InSizeX = (int32_t)InSizeX;
    Parms.InSizeY = (int32_t)InSizeY;
    Parms.InImageData = (struct TArray<struct FColor>)InImageData;
    Parms.ScreenshotName = (struct FString)ScreenshotName;
    Parms.GameInstance = (struct UGameInstance*)GameInstance;
    this->ProcessEvent(Func, &Parms);
}

void UDFScreenShotRequest::LoadStaticWatermarkImageSource(int32_t HashCode, ECdnDownResult Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScreenShotRequest", "LoadStaticWatermarkImageSource");
    struct
    {
        int32_t HashCode;
        enum ECdnDownResult Result;
    } Parms{};
    Parms.HashCode = (int32_t)HashCode;
    Parms.Result = (enum ECdnDownResult)Result;
    this->ProcessEvent(Func, &Parms);
}

void UDFScreenShotRequest::GenerateScreenShotSpliceWatermark(struct UGameInstance* GameInstance, uint8_t bInShowUI, struct FString ScreenshotName, struct FString ImgKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScreenShotRequest", "GenerateScreenShotSpliceWatermark");
    struct
    {
        struct UGameInstance* GameInstance;
        uint8_t bInShowUI;
        struct FString ScreenshotName;
        struct FString ImgKey;
    } Parms{};
    Parms.GameInstance = (struct UGameInstance*)GameInstance;
    Parms.bInShowUI = (uint8_t)bInShowUI;
    Parms.ScreenshotName = (struct FString)ScreenshotName;
    Parms.ImgKey = (struct FString)ImgKey;
    this->ProcessEvent(Func, &Parms);
}

void UDFScreenShotRequest::GenerateScreenShotCropByWidget(struct UGameInstance* GameInstance, uint8_t bInShowUI, struct FString ScreenshotName, struct UWidget* WidgetIns, uint8_t WithWaterMark)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScreenShotRequest", "GenerateScreenShotCropByWidget");
    struct
    {
        struct UGameInstance* GameInstance;
        uint8_t bInShowUI;
        struct FString ScreenshotName;
        struct UWidget* WidgetIns;
        uint8_t WithWaterMark;
    } Parms{};
    Parms.GameInstance = (struct UGameInstance*)GameInstance;
    Parms.bInShowUI = (uint8_t)bInShowUI;
    Parms.ScreenshotName = (struct FString)ScreenshotName;
    Parms.WidgetIns = (struct UWidget*)WidgetIns;
    Parms.WithWaterMark = (uint8_t)WithWaterMark;
    this->ProcessEvent(Func, &Parms);
}

void UDFScreenShotRequest::GenerateScreenShot(struct UGameInstance* GameInstance, uint8_t bInShowUI, struct FString ScreenshotName, uint8_t WithWaterMark)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScreenShotRequest", "GenerateScreenShot");
    struct
    {
        struct UGameInstance* GameInstance;
        uint8_t bInShowUI;
        struct FString ScreenshotName;
        uint8_t WithWaterMark;
    } Parms{};
    Parms.GameInstance = (struct UGameInstance*)GameInstance;
    Parms.bInShowUI = (uint8_t)bInShowUI;
    Parms.ScreenshotName = (struct FString)ScreenshotName;
    Parms.WithWaterMark = (uint8_t)WithWaterMark;
    this->ProcessEvent(Func, &Parms);
}

void UDFScreenShotRequest::ApplyGetCDNWatermarkResource(struct FString ImgKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScreenShotRequest", "ApplyGetCDNWatermarkResource");
    struct
    {
        struct FString ImgKey;
    } Parms{};
    Parms.ImgKey = (struct FString)ImgKey;
    this->ProcessEvent(Func, &Parms);
}

// UDFScreenShotToolManager
void UDFScreenShotToolManager::OnDFMScreenshotFinishDelegate(struct FString ScreenshotName, uint8_t WithWaterMark)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScreenShotToolManager", "OnDFMScreenshotFinishDelegate");
    struct
    {
        struct FString ScreenshotName;
        uint8_t WithWaterMark;
    } Parms{};
    Parms.ScreenshotName = (struct FString)ScreenshotName;
    Parms.WithWaterMark = (uint8_t)WithWaterMark;
    this->ProcessEvent(Func, &Parms);
}

struct FString UDFScreenShotToolManager::GetScreenshotFilePath(struct FString ScreenshotName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScreenShotToolManager", "GetScreenshotFilePath");
    struct
    {
        struct FString ScreenshotName;
        struct FString ReturnValue;
    } Parms{};
    Parms.ScreenshotName = (struct FString)ScreenshotName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFScreenShotToolManager* UDFScreenShotToolManager::Get(struct UObject* GameInst)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFScreenShotToolManager", "Get");
    struct
    {
        struct UObject* GameInst;
        struct UDFScreenShotToolManager* ReturnValue;
    } Parms{};
    Parms.GameInst = (struct UObject*)GameInst;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFScreenShotToolManager::GenerateScreenShotSpliceWatermark(uint8_t bInShowUI, struct FString ScreenshotName, struct FString ImgKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScreenShotToolManager", "GenerateScreenShotSpliceWatermark");
    struct
    {
        uint8_t bInShowUI;
        struct FString ScreenshotName;
        struct FString ImgKey;
    } Parms{};
    Parms.bInShowUI = (uint8_t)bInShowUI;
    Parms.ScreenshotName = (struct FString)ScreenshotName;
    Parms.ImgKey = (struct FString)ImgKey;
    this->ProcessEvent(Func, &Parms);
}

void UDFScreenShotToolManager::GenerateScreenShotCropByWidget(uint8_t bInShowUI, struct FString ScreenshotName, struct UWidget* WidgetIns, uint8_t WithWaterMark)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScreenShotToolManager", "GenerateScreenShotCropByWidget");
    struct
    {
        uint8_t bInShowUI;
        struct FString ScreenshotName;
        struct UWidget* WidgetIns;
        uint8_t WithWaterMark;
    } Parms{};
    Parms.bInShowUI = (uint8_t)bInShowUI;
    Parms.ScreenshotName = (struct FString)ScreenshotName;
    Parms.WidgetIns = (struct UWidget*)WidgetIns;
    Parms.WithWaterMark = (uint8_t)WithWaterMark;
    this->ProcessEvent(Func, &Parms);
}

void UDFScreenShotToolManager::GenerateScreenShot(uint8_t bInShowUI, struct FString ScreenshotName, uint8_t WithWaterMark)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScreenShotToolManager", "GenerateScreenShot");
    struct
    {
        uint8_t bInShowUI;
        struct FString ScreenshotName;
        uint8_t WithWaterMark;
    } Parms{};
    Parms.bInShowUI = (uint8_t)bInShowUI;
    Parms.ScreenshotName = (struct FString)ScreenshotName;
    Parms.WithWaterMark = (uint8_t)WithWaterMark;
    this->ProcessEvent(Func, &Parms);
}

void UDFScreenShotToolManager::DisplayScreenShot(struct UDFImage* Image, uint8_t WithWaterMark)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScreenShotToolManager", "DisplayScreenShot");
    struct
    {
        struct UDFImage* Image;
        uint8_t WithWaterMark;
    } Parms{};
    Parms.Image = (struct UDFImage*)Image;
    Parms.WithWaterMark = (uint8_t)WithWaterMark;
    this->ProcessEvent(Func, &Parms);
}

void UDFScreenShotToolManager::DFMReqLoadCDNWatermarkImg(struct FString ImgKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScreenShotToolManager", "DFMReqLoadCDNWatermarkImg");
    struct
    {
        struct FString ImgKey;
    } Parms{};
    Parms.ImgKey = (struct FString)ImgKey;
    this->ProcessEvent(Func, &Parms);
}

void UDFScreenShotToolManager::DeleteTheScreenshotObject()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScreenShotToolManager", "DeleteTheScreenshotObject");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFScreenShotToolManager::DeleteScreenshotDir()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFScreenShotToolManager", "DeleteScreenshotDir");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
