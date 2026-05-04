#include "AppleImageUtils.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UAppleImageUtilsBaseAsyncTaskBlueprintProxy::* ----
struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToTIFF(struct UTexture* SourceImage, uint8_t bWantColor, uint8_t bUseGpu, float Scale, ETextureRotationDirection Rotate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AppleImageUtilsBaseAsyncTaskBlueprintProxy", "CreateProxyObjectForConvertToTIFF");
    struct
    {
        struct UTexture* SourceImage;
        uint8_t bWantColor;
        uint8_t bUseGpu;
        float Scale;
        enum ETextureRotationDirection Rotate;
        struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue;
    } Parms{};
    Parms.SourceImage = (struct UTexture*)SourceImage;
    Parms.bWantColor = (uint8_t)bWantColor;
    Parms.bUseGpu = (uint8_t)bUseGpu;
    Parms.Scale = (float)Scale;
    Parms.Rotate = (enum ETextureRotationDirection)Rotate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToPNG(struct UTexture* SourceImage, uint8_t bWantColor, uint8_t bUseGpu, float Scale, ETextureRotationDirection Rotate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AppleImageUtilsBaseAsyncTaskBlueprintProxy", "CreateProxyObjectForConvertToPNG");
    struct
    {
        struct UTexture* SourceImage;
        uint8_t bWantColor;
        uint8_t bUseGpu;
        float Scale;
        enum ETextureRotationDirection Rotate;
        struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue;
    } Parms{};
    Parms.SourceImage = (struct UTexture*)SourceImage;
    Parms.bWantColor = (uint8_t)bWantColor;
    Parms.bUseGpu = (uint8_t)bUseGpu;
    Parms.Scale = (float)Scale;
    Parms.Rotate = (enum ETextureRotationDirection)Rotate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToJPEG(struct UTexture* SourceImage, int32_t Quality, uint8_t bWantColor, uint8_t bUseGpu, float Scale, ETextureRotationDirection Rotate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AppleImageUtilsBaseAsyncTaskBlueprintProxy", "CreateProxyObjectForConvertToJPEG");
    struct
    {
        struct UTexture* SourceImage;
        int32_t Quality;
        uint8_t bWantColor;
        uint8_t bUseGpu;
        float Scale;
        enum ETextureRotationDirection Rotate;
        struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue;
    } Parms{};
    Parms.SourceImage = (struct UTexture*)SourceImage;
    Parms.Quality = (int32_t)Quality;
    Parms.bWantColor = (uint8_t)bWantColor;
    Parms.bUseGpu = (uint8_t)bUseGpu;
    Parms.Scale = (float)Scale;
    Parms.Rotate = (enum ETextureRotationDirection)Rotate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToHEIF(struct UTexture* SourceImage, int32_t Quality, uint8_t bWantColor, uint8_t bUseGpu, float Scale, ETextureRotationDirection Rotate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AppleImageUtilsBaseAsyncTaskBlueprintProxy", "CreateProxyObjectForConvertToHEIF");
    struct
    {
        struct UTexture* SourceImage;
        int32_t Quality;
        uint8_t bWantColor;
        uint8_t bUseGpu;
        float Scale;
        enum ETextureRotationDirection Rotate;
        struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue;
    } Parms{};
    Parms.SourceImage = (struct UTexture*)SourceImage;
    Parms.Quality = (int32_t)Quality;
    Parms.bWantColor = (uint8_t)bWantColor;
    Parms.bUseGpu = (uint8_t)bUseGpu;
    Parms.Scale = (float)Scale;
    Parms.Rotate = (enum ETextureRotationDirection)Rotate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
