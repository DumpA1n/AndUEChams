#include "PixUI.hpp"
#include "DFMGameplay.hpp"
#include "Engine.hpp"
#include "InputCore.hpp"
#include "Slate.hpp"
#include "SlateCore.hpp"
#include "UMG.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UPixUIBPLibrary::* ----
struct FString UPixUIBPLibrary::PixUI_Version()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_Version");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPixUIBPLibrary::PixUI_Tick(float fDeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_Tick");
    struct
    {
        float fDeltaTime;
    } Parms{};
    Parms.fDeltaTime = (float)fDeltaTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UPixUIBPLibrary::PixUI_StartupEx(struct FString strCachePathForWrite, uint8_t bSupportAsyncModel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_StartupEx");
    struct
    {
        struct FString strCachePathForWrite;
        uint8_t bSupportAsyncModel;
        uint8_t ReturnValue;
    } Parms{};
    Parms.strCachePathForWrite = (struct FString)strCachePathForWrite;
    Parms.bSupportAsyncModel = (uint8_t)bSupportAsyncModel;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPixUIBPLibrary::PixUI_Startup(struct FString strCachePathForWrite)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_Startup");
    struct
    {
        struct FString strCachePathForWrite;
        uint8_t ReturnValue;
    } Parms{};
    Parms.strCachePathForWrite = (struct FString)strCachePathForWrite;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPixUIBPLibrary::PixUI_Shutdown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_Shutdown");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPixUIBPLibrary::PixUI_SetTickIntervalSec(float fTickIntervalSec)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_SetTickIntervalSec");
    struct
    {
        float fTickIntervalSec;
    } Parms{};
    Parms.fTickIntervalSec = (float)fTickIntervalSec;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPixUIBPLibrary::PixUI_SetSupportTextShape(uint8_t beSupportTextShape)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_SetSupportTextShape");
    struct
    {
        uint8_t beSupportTextShape;
    } Parms{};
    Parms.beSupportTextShape = (uint8_t)beSupportTextShape;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPixUIBPLibrary::PixUI_SetSupportEngineFont(uint8_t bSupportEngineFont)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_SetSupportEngineFont");
    struct
    {
        uint8_t bSupportEngineFont;
    } Parms{};
    Parms.bSupportEngineFont = (uint8_t)bSupportEngineFont;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPixUIBPLibrary::PixUI_SetSpecialCapability(struct FString strCapability)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_SetSpecialCapability");
    struct
    {
        struct FString strCapability;
    } Parms{};
    Parms.strCapability = (struct FString)strCapability;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPixUIBPLibrary::PixUI_SetSecretKey(struct FString strSecretKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_SetSecretKey");
    struct
    {
        struct FString strSecretKey;
    } Parms{};
    Parms.strSecretKey = (struct FString)strSecretKey;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPixUIBPLibrary::PixUI_SetPxLibDefaultVersionTag(int32_t nNewPxLibVersionTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_SetPxLibDefaultVersionTag");
    struct
    {
        int32_t nNewPxLibVersionTag;
    } Parms{};
    Parms.nNewPxLibVersionTag = (int32_t)nNewPxLibVersionTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPixUIBPLibrary::PixUI_SetPixUIMaxLayerId(int32_t nMaxLayerId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_SetPixUIMaxLayerId");
    struct
    {
        int32_t nMaxLayerId;
    } Parms{};
    Parms.nMaxLayerId = (int32_t)nMaxLayerId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPixUIBPLibrary::PixUI_SetPixUIMaxDynamicTextureTotalSize(int32_t nMaxDynamicTextureTotalSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_SetPixUIMaxDynamicTextureTotalSize");
    struct
    {
        int32_t nMaxDynamicTextureTotalSize;
    } Parms{};
    Parms.nMaxDynamicTextureTotalSize = (int32_t)nMaxDynamicTextureTotalSize;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPixUIBPLibrary::PixUI_SetPixUIMaxDynamicTextureGCSize(int32_t nMaxDynamicTextureGCSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_SetPixUIMaxDynamicTextureGCSize");
    struct
    {
        int32_t nMaxDynamicTextureGCSize;
    } Parms{};
    Parms.nMaxDynamicTextureGCSize = (int32_t)nMaxDynamicTextureGCSize;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPixUIBPLibrary::PixUI_SetPixUIMaxDynamicTextureGCRate(float fMaxGCRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_SetPixUIMaxDynamicTextureGCRate");
    struct
    {
        float fMaxGCRate;
    } Parms{};
    Parms.fMaxGCRate = (float)fMaxGCRate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPixUIBPLibrary::PixUI_SetMobileUseTouchEvent(uint8_t bUseTouchEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_SetMobileUseTouchEvent");
    struct
    {
        uint8_t bUseTouchEvent;
    } Parms{};
    Parms.bUseTouchEvent = (uint8_t)bUseTouchEvent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPixUIBPLibrary::PixUI_SetMatRootPath(struct FString strMatRootPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_SetMatRootPath");
    struct
    {
        struct FString strMatRootPath;
    } Parms{};
    Parms.strMatRootPath = (struct FString)strMatRootPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPixUIBPLibrary::PixUI_SetMatBasePath(struct FString strMatBasePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_SetMatBasePath");
    struct
    {
        struct FString strMatBasePath;
    } Parms{};
    Parms.strMatBasePath = (struct FString)strMatBasePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPixUIBPLibrary::PixUI_SetMatAsyncLoad(uint8_t bMatAsyncLoad)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_SetMatAsyncLoad");
    struct
    {
        uint8_t bMatAsyncLoad;
    } Parms{};
    Parms.bMatAsyncLoad = (uint8_t)bMatAsyncLoad;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPixUIBPLibrary::PixUI_SetJsGCThreshold(int32_t nGCThreshold)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_SetJsGCThreshold");
    struct
    {
        int32_t nGCThreshold;
    } Parms{};
    Parms.nGCThreshold = (int32_t)nGCThreshold;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPixUIBPLibrary::PixUI_SetGradientBrushCallFlushCommands(uint8_t beGradientBrushCallFlushCommands)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_SetGradientBrushCallFlushCommands");
    struct
    {
        uint8_t beGradientBrushCallFlushCommands;
    } Parms{};
    Parms.beGradientBrushCallFlushCommands = (uint8_t)beGradientBrushCallFlushCommands;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPixUIBPLibrary::PixUI_SetFontTypeFaceName(struct FString strFontName, EPxFontFaceType ePxFontTypeFace, struct FString strFontTypeFaceName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_SetFontTypeFaceName");
    struct
    {
        struct FString strFontName;
        enum EPxFontFaceType ePxFontTypeFace;
        struct FString strFontTypeFaceName;
    } Parms{};
    Parms.strFontName = (struct FString)strFontName;
    Parms.ePxFontTypeFace = (enum EPxFontFaceType)ePxFontTypeFace;
    Parms.strFontTypeFaceName = (struct FString)strFontTypeFaceName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPixUIBPLibrary::PixUI_SetExternalInterface(struct TScriptInterface<IPixUIExternalInterface> scriptInterfaceExternal)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_SetExternalInterface");
    struct
    {
        struct TScriptInterface<IPixUIExternalInterface> scriptInterfaceExternal;
    } Parms{};
    Parms.scriptInterfaceExternal = (struct TScriptInterface<IPixUIExternalInterface>)scriptInterfaceExternal;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPixUIBPLibrary::PixUI_SetExtBpCallSupportThrowException(uint8_t bSupportThrowException)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_SetExtBpCallSupportThrowException");
    struct
    {
        uint8_t bSupportThrowException;
    } Parms{};
    Parms.bSupportThrowException = (uint8_t)bSupportThrowException;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPixUIBPLibrary::PixUI_SetDynamicTextureUpdateMode(EPxDynamicTextureUpdateMode eUpdateMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_SetDynamicTextureUpdateMode");
    struct
    {
        enum EPxDynamicTextureUpdateMode eUpdateMode;
    } Parms{};
    Parms.eUpdateMode = (enum EPxDynamicTextureUpdateMode)eUpdateMode;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPixUIBPLibrary::PixUI_SetDynamicTextureFilter(ETextureFilter eTextureFilter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_SetDynamicTextureFilter");
    struct
    {
        enum ETextureFilter eTextureFilter;
    } Parms{};
    Parms.eTextureFilter = (enum ETextureFilter)eTextureFilter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UPixUIBPLibrary::PixUI_SetDynamicLibraryPath(struct FString& strDynamicLibraryPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_SetDynamicLibraryPath");
    struct
    {
        struct FString strDynamicLibraryPath;
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    strDynamicLibraryPath = Parms.strDynamicLibraryPath;
    return Parms.ReturnValue;
}

void UPixUIBPLibrary::PixUI_SetDynamicFixFontSize(uint8_t bOpenDynamicFix)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_SetDynamicFixFontSize");
    struct
    {
        uint8_t bOpenDynamicFix;
    } Parms{};
    Parms.bOpenDynamicFix = (uint8_t)bOpenDynamicFix;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPixUIBPLibrary::PixUI_SetDrawEffectNoPixelSnapping(uint8_t bNoPixelSnapping)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_SetDrawEffectNoPixelSnapping");
    struct
    {
        uint8_t bNoPixelSnapping;
    } Parms{};
    Parms.bNoPixelSnapping = (uint8_t)bNoPixelSnapping;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPixUIBPLibrary::PixUI_SetDefaultFontSize(int32_t nFontSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_SetDefaultFontSize");
    struct
    {
        int32_t nFontSize;
    } Parms{};
    Parms.nFontSize = (int32_t)nFontSize;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPixUIBPLibrary::PixUI_SetDefaultFont(struct FString strFontName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_SetDefaultFont");
    struct
    {
        struct FString strFontName;
    } Parms{};
    Parms.strFontName = (struct FString)strFontName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPixUIBPLibrary::PixUI_SetCoreTickDuration(int32_t nDurationCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_SetCoreTickDuration");
    struct
    {
        int32_t nDurationCount;
    } Parms{};
    Parms.nDurationCount = (int32_t)nDurationCount;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UPixUIBPLibrary::PixUI_SetCoreLibValidByTag(int32_t nVersionTag, uint8_t bValid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_SetCoreLibValidByTag");
    struct
    {
        int32_t nVersionTag;
        uint8_t bValid;
        uint8_t ReturnValue;
    } Parms{};
    Parms.nVersionTag = (int32_t)nVersionTag;
    Parms.bValid = (uint8_t)bValid;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPixUIBPLibrary::PixUI_SetAutoTick(uint8_t bAutoTick)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_SetAutoTick");
    struct
    {
        uint8_t bAutoTick;
    } Parms{};
    Parms.bAutoTick = (uint8_t)bAutoTick;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPixUIBPLibrary::PixUI_SetAsyncMode(uint8_t beRunAsyncMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_SetAsyncMode");
    struct
    {
        uint8_t beRunAsyncMode;
    } Parms{};
    Parms.beRunAsyncMode = (uint8_t)beRunAsyncMode;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPixUIBPLibrary::PixUI_SetAsyncBpCallWaitOutTime(float fTimeOutSecond)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_SetAsyncBpCallWaitOutTime");
    struct
    {
        float fTimeOutSecond;
    } Parms{};
    Parms.fTimeOutSecond = (float)fTimeOutSecond;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int32_t UPixUIBPLibrary::PixUI_RHIShaderPlatform()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_RHIShaderPlatform");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPixUIBPLibrary::PixUI_RHIShaderLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_RHIShaderLevel");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPixUIBPLibrary::PixUI_RemoveSystemFont(struct FString strFontName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_RemoveSystemFont");
    struct
    {
        struct FString strFontName;
    } Parms{};
    Parms.strFontName = (struct FString)strFontName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPixUIBPLibrary::PixUI_PublicCapabilitySwitch(EPxPublicCapability EPxDebugInfo, uint8_t bOpen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_PublicCapabilitySwitch");
    struct
    {
        enum EPxPublicCapability EPxDebugInfo;
        uint8_t bOpen;
    } Parms{};
    Parms.EPxDebugInfo = (enum EPxPublicCapability)EPxDebugInfo;
    Parms.bOpen = (uint8_t)bOpen;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPixUIBPLibrary::PixUI_PrintProfilerInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_PrintProfilerInfo");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

float UPixUIBPLibrary::PixUI_PlatformOSVersionCode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_PlatformOSVersionCode");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UPixUIBPLibrary::PixUI_PlatformOSVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_PlatformOSVersion");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPixUIBPLibrary::PixUI_PlatformCode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_PlatformCode");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UPixUIBPLibrary::PixUI_Platform()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_Platform");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPixUIBPLibrary::PixUI_IsSupportTextShape()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_IsSupportTextShape");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPixUIBPLibrary::PixUI_IsStartUp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_IsStartUp");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPixUIBPLibrary::PixUI_IsRHIShaderVulkan()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_IsRHIShaderVulkan");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPixUIBPLibrary::PixUI_IsRHIShaderOpenGLES2()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_IsRHIShaderOpenGLES2");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPixUIBPLibrary::PixUI_IsRHIShaderOpenGL()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_IsRHIShaderOpenGL");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPixUIBPLibrary::PixUI_IsRHIShaderMetal()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_IsRHIShaderMetal");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPixUIBPLibrary::PixUI_IsRHIShaderDX()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_IsRHIShaderDX");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPixUIBPLibrary::PixUI_IsOsBit64()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_IsOsBit64");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPixUIBPLibrary::PixUI_IsOsBit32()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_IsOsBit32");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPixUIBPLibrary::PixUI_IsMobileUseTouchEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_IsMobileUseTouchEvent");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPixUIBPLibrary::PixUI_IsDynamicFixFontSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_IsDynamicFixFontSize");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPixUIBPLibrary::PixUI_IsAutoTick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_IsAutoTick");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UPixUIBPLibrary::PixUI_GetWindowSlotObject(int32_t nWindowID, struct FString strTagId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_GetWindowSlotObject");
    struct
    {
        int32_t nWindowID;
        struct FString strTagId;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.nWindowID = (int32_t)nWindowID;
    Parms.strTagId = (struct FString)strTagId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPixUIBPLibrary::PixUI_GetTotalFontCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_GetTotalFontCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UPixUIBPLibrary::PixUI_GetTickIntervalSec()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_GetTickIntervalSec");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPixUIBPLibrary::PixUI_GetSupportPxLibVersionTagArray(struct TArray<int32_t>& arraySupportPxLibVersionTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_GetSupportPxLibVersionTagArray");
    struct
    {
        struct TArray<int32_t> arraySupportPxLibVersionTag;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    arraySupportPxLibVersionTag = Parms.arraySupportPxLibVersionTag;
}

uint8_t UPixUIBPLibrary::PixUI_GetSupportEngineFont()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_GetSupportEngineFont");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPixUIScriptVM* UPixUIBPLibrary::PixUI_GetScriptVMByID(int32_t nScriptVmId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_GetScriptVMByID");
    struct
    {
        int32_t nScriptVmId;
        struct UPixUIScriptVM* ReturnValue;
    } Parms{};
    Parms.nScriptVmId = (int32_t)nScriptVmId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPixUIBPLibrary::PixUI_GetPxLibDefaultVersionTag()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_GetPxLibDefaultVersionTag");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UPixUIBPLibrary::PixUI_GetPixUIWidgetSlotObject(int32_t nPxWidgetID, struct FString strSlotTagId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_GetPixUIWidgetSlotObject");
    struct
    {
        int32_t nPxWidgetID;
        struct FString strSlotTagId;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.nPxWidgetID = (int32_t)nPxWidgetID;
    Parms.strSlotTagId = (struct FString)strSlotTagId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPixUIWidget* UPixUIBPLibrary::PixUI_GetPixUIWidgetByID(int32_t nPxWidgetID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_GetPixUIWidgetByID");
    struct
    {
        int32_t nPxWidgetID;
        struct UPixUIWidget* ReturnValue;
    } Parms{};
    Parms.nPxWidgetID = (int32_t)nPxWidgetID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPixUIBPLibrary::PixUI_GetPixUIMaxLayerId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_GetPixUIMaxLayerId");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPixUIBPLibrary::PixUI_GetPixUIMaxDynamicTextureTotalSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_GetPixUIMaxDynamicTextureTotalSize");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPixUIBPLibrary::PixUI_GetPixUIMaxDynamicTextureGCSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_GetPixUIMaxDynamicTextureGCSize");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UPixUIBPLibrary::PixUI_GetPixUIMaxDynamicTextureGCRate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_GetPixUIMaxDynamicTextureGCRate");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UPixUIBPLibrary::PixUI_GetMatRootPath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_GetMatRootPath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UPixUIBPLibrary::PixUI_GetMatBasePath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_GetMatBasePath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPixUIBPLibrary::PixUI_GetMatAsyncLoad()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_GetMatAsyncLoad");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPixUIBPLibrary::PixUI_GetJsGCThreshold()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_GetJsGCThreshold");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPixUIBPLibrary::PixUI_GetGradientBrushCallFlushCommands()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_GetGradientBrushCallFlushCommands");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UPixUIBPLibrary::PixUI_GetFontTypeFaceName(struct FString strFontName, EPxFontFaceType ePxFontTypeFace)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_GetFontTypeFaceName");
    struct
    {
        struct FString strFontName;
        enum EPxFontFaceType ePxFontTypeFace;
        struct FString ReturnValue;
    } Parms{};
    Parms.strFontName = (struct FString)strFontName;
    Parms.ePxFontTypeFace = (enum EPxFontFaceType)ePxFontTypeFace;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UPixUIBPLibrary::PixUI_GetFontPathByIndex(int32_t nIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_GetFontPathByIndex");
    struct
    {
        int32_t nIndex;
        struct FString ReturnValue;
    } Parms{};
    Parms.nIndex = (int32_t)nIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPixUIBPLibrary::PixUI_GetFontPath(struct FString strFontName, struct FString& strOutFontPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_GetFontPath");
    struct
    {
        struct FString strFontName;
        struct FString strOutFontPath;
        uint8_t ReturnValue;
    } Parms{};
    Parms.strFontName = (struct FString)strFontName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    strOutFontPath = Parms.strOutFontPath;
    return Parms.ReturnValue;
}

struct FString UPixUIBPLibrary::PixUI_GetFontNameByIndex(int32_t nIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_GetFontNameByIndex");
    struct
    {
        int32_t nIndex;
        struct FString ReturnValue;
    } Parms{};
    Parms.nIndex = (int32_t)nIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPixUIBPLibrary::PixUI_GetExtBpCallSupportThrowException()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_GetExtBpCallSupportThrowException");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EPxDynamicTextureUpdateMode UPixUIBPLibrary::PixUI_GetDynamicTextureUpdateMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_GetDynamicTextureUpdateMode");
    struct
    {
        enum EPxDynamicTextureUpdateMode ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

ETextureFilter UPixUIBPLibrary::PixUI_GetDynamicTextureFilter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_GetDynamicTextureFilter");
    struct
    {
        enum ETextureFilter ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPixUIBPLibrary::PixUI_GetDrawEffectNoPixelSnapping()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_GetDrawEffectNoPixelSnapping");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPixUIBPLibrary::PixUI_GetDefaultFontSize(int32_t& nOutFontSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_GetDefaultFontSize");
    struct
    {
        int32_t nOutFontSize;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    nOutFontSize = Parms.nOutFontSize;
}

void UPixUIBPLibrary::PixUI_GetDefaultFont(struct FString& strFontName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_GetDefaultFont");
    struct
    {
        struct FString strFontName;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    strFontName = Parms.strFontName;
}

int32_t UPixUIBPLibrary::PixUI_GetCoreTickDuration()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_GetCoreTickDuration");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPixUIBPLibrary::PixUI_GetCoreLibVersionTagByIndex(int32_t nIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_GetCoreLibVersionTagByIndex");
    struct
    {
        int32_t nIndex;
        int32_t ReturnValue;
    } Parms{};
    Parms.nIndex = (int32_t)nIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPixUIBPLibrary::PixUI_GetCoreLibCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_GetCoreLibCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPixUIBPLibrary::PixUI_GetCachePath(struct FString& strOutCachePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_GetCachePath");
    struct
    {
        struct FString strOutCachePath;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    strOutCachePath = Parms.strOutCachePath;
}

uint8_t UPixUIBPLibrary::PixUI_GetAsyncMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_GetAsyncMode");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UPixUIBPLibrary::PixUI_GetAsyncBpCallWaitOutTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_GetAsyncBpCallWaitOutTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPixUIWidget* UPixUIBPLibrary::PixUI_FindByWindowID(int32_t nWindowID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_FindByWindowID");
    struct
    {
        int32_t nWindowID;
        struct UPixUIWidget* ReturnValue;
    } Parms{};
    Parms.nWindowID = (int32_t)nWindowID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPixUIBPLibrary::PixUI_DebugInfoSwitch(EPxDebugInfo EPxDebugInfo, uint8_t bOpen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_DebugInfoSwitch");
    struct
    {
        enum EPxDebugInfo EPxDebugInfo;
        uint8_t bOpen;
    } Parms{};
    Parms.EPxDebugInfo = (enum EPxDebugInfo)EPxDebugInfo;
    Parms.bOpen = (uint8_t)bOpen;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UPixUIWidget* UPixUIBPLibrary::PixUI_CreateWidget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_CreateWidget");
    struct
    {
        struct UPixUIWidget* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPixUIViewPortWidget* UPixUIBPLibrary::PixUI_CreateViewPortWidget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_CreateViewPortWidget");
    struct
    {
        struct UPixUIViewPortWidget* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPixUIViewPortWidget* UPixUIBPLibrary::PixUI_CreateViewPortAddToCanvasEx(struct UCanvasPanel* pParentCanvas)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_CreateViewPortAddToCanvasEx");
    struct
    {
        struct UCanvasPanel* pParentCanvas;
        struct UPixUIViewPortWidget* ReturnValue;
    } Parms{};
    Parms.pParentCanvas = (struct UCanvasPanel*)pParentCanvas;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPixUIViewPortWidget* UPixUIBPLibrary::PixUI_CreateViewPortAddToCanvas(struct UCanvasPanel* pParentCanvas, const struct FAnchors& Anchors, const struct FMargin& Margin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_CreateViewPortAddToCanvas");
    struct
    {
        struct UCanvasPanel* pParentCanvas;
        struct FAnchors Anchors;
        struct FMargin Margin;
        struct UPixUIViewPortWidget* ReturnValue;
    } Parms{};
    Parms.pParentCanvas = (struct UCanvasPanel*)pParentCanvas;
    Parms.Anchors = (struct FAnchors)Anchors;
    Parms.Margin = (struct FMargin)Margin;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPixUIScriptVM* UPixUIBPLibrary::PixUI_CreateScriptVM()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_CreateScriptVM");
    struct
    {
        struct UPixUIScriptVM* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPixUIWidget* UPixUIBPLibrary::PixUI_CreateAddToCanvasEx(struct UCanvasPanel* pParentCanvas)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_CreateAddToCanvasEx");
    struct
    {
        struct UCanvasPanel* pParentCanvas;
        struct UPixUIWidget* ReturnValue;
    } Parms{};
    Parms.pParentCanvas = (struct UCanvasPanel*)pParentCanvas;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPixUIWidget* UPixUIBPLibrary::PixUI_CreateAddToCanvas(struct UCanvasPanel* p_ParentCanvas, const struct FAnchors& Anchors, const struct FMargin& Margin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_CreateAddToCanvas");
    struct
    {
        struct UCanvasPanel* p_ParentCanvas;
        struct FAnchors Anchors;
        struct FMargin Margin;
        struct UPixUIWidget* ReturnValue;
    } Parms{};
    Parms.p_ParentCanvas = (struct UCanvasPanel*)p_ParentCanvas;
    Parms.Anchors = (struct FAnchors)Anchors;
    Parms.Margin = (struct FMargin)Margin;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPixUIBPLibrary::PixUI_ClearCacheFile()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_ClearCacheFile");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UPixUIBPLibrary::PixUI_CallPixUIAssetGC(int32_t nViewId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_CallPixUIAssetGC");
    struct
    {
        int32_t nViewId;
        uint8_t ReturnValue;
    } Parms{};
    Parms.nViewId = (int32_t)nViewId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPixUIBPLibrary::PixUI_BePublicCapabilityOpen(EPxPublicCapability EPxDebugInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_BePublicCapabilityOpen");
    struct
    {
        enum EPxPublicCapability EPxDebugInfo;
        uint8_t ReturnValue;
    } Parms{};
    Parms.EPxDebugInfo = (enum EPxPublicCapability)EPxDebugInfo;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPixUIBPLibrary::PixUI_BeDebugInfoOpen(EPxDebugInfo EPxDebugInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_BeDebugInfoOpen");
    struct
    {
        enum EPxDebugInfo EPxDebugInfo;
        uint8_t ReturnValue;
    } Parms{};
    Parms.EPxDebugInfo = (enum EPxDebugInfo)EPxDebugInfo;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPixUIBPLibrary::PixUI_AddSystemFont(struct FString strFontName, struct FString strFontPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIBPLibrary", "PixUI_AddSystemFont");
    struct
    {
        struct FString strFontName;
        struct FString strFontPath;
    } Parms{};
    Parms.strFontName = (struct FString)strFontName;
    Parms.strFontPath = (struct FString)strFontPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// ---- IPixUIExternalInterface::* ----
struct UWidget* IPixUIExternalInterface::OnWidgetLoad(struct FString strWidgetPath, struct FString strWidgetTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIExternalInterface", "OnWidgetLoad");
    struct
    {
        struct FString strWidgetPath;
        struct FString strWidgetTag;
        struct UWidget* ReturnValue;
    } Parms{};
    Parms.strWidgetPath = (struct FString)strWidgetPath;
    Parms.strWidgetTag = (struct FString)strWidgetTag;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPixUIBrushWrapper* IPixUIExternalInterface::OnSlateBrushLoad(struct FString strBrushPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIExternalInterface", "OnSlateBrushLoad");
    struct
    {
        struct FString strBrushPath;
        struct UPixUIBrushWrapper* ReturnValue;
    } Parms{};
    Parms.strBrushPath = (struct FString)strBrushPath;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IPixUIExternalInterface::OnFileLoad(struct FString strFilePath, const struct FDelegate& callDelegate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIExternalInterface", "OnFileLoad");
    struct
    {
        struct FString strFilePath;
        struct FDelegate callDelegate;
        uint8_t ReturnValue;
    } Parms{};
    Parms.strFilePath = (struct FString)strFilePath;
    Parms.callDelegate = (struct FDelegate)callDelegate;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IPixUIExternalInterface::OnFileCanLoad(struct FString strFilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIExternalInterface", "OnFileCanLoad");
    struct
    {
        struct FString strFilePath;
        uint8_t ReturnValue;
    } Parms{};
    Parms.strFilePath = (struct FString)strFilePath;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UPixUIInput::* ----
void UPixUIInput::OnInputText(struct FString strInsert, uint8_t bEndInput, uint8_t bLostFocus, uint8_t bReplace)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIInput", "OnInputText");
    struct
    {
        struct FString strInsert;
        uint8_t bEndInput;
        uint8_t bLostFocus;
        uint8_t bReplace;
    } Parms{};
    Parms.strInsert = (struct FString)strInsert;
    Parms.bEndInput = (uint8_t)bEndInput;
    Parms.bLostFocus = (uint8_t)bLostFocus;
    Parms.bReplace = (uint8_t)bReplace;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UPixUIInput* UPixUIInput::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixUIInput", "Get");
    struct
    {
        struct UPixUIInput* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UPixUIRenderTarget::* ----
void UPixUIRenderTarget::SetTickIntervalSec(float fTickIntervalSec)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIRenderTarget", "SetTickIntervalSec");
    struct
    {
        float fTickIntervalSec;
    } Parms{};
    Parms.fTickIntervalSec = (float)fTickIntervalSec;
    this->ProcessEvent(Func, &Parms);
}

void UPixUIRenderTarget::SetExternalRenderTarget2D(struct UTextureRenderTarget2D* pTextureRenderTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIRenderTarget", "SetExternalRenderTarget2D");
    struct
    {
        struct UTextureRenderTarget2D* pTextureRenderTarget;
    } Parms{};
    Parms.pTextureRenderTarget = (struct UTextureRenderTarget2D*)pTextureRenderTarget;
    this->ProcessEvent(Func, &Parms);
}

void UPixUIRenderTarget::SetBeSupportEventCallNested(uint8_t bSupportEventCallNested)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIRenderTarget", "SetBeSupportEventCallNested");
    struct
    {
        uint8_t bSupportEventCallNested;
    } Parms{};
    Parms.bSupportEventCallNested = (uint8_t)bSupportEventCallNested;
    this->ProcessEvent(Func, &Parms);
}

void UPixUIRenderTarget::SetBeDelayCallMessage(uint8_t bDelayMessage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIRenderTarget", "SetBeDelayCallMessage");
    struct
    {
        uint8_t bDelayMessage;
    } Parms{};
    Parms.bDelayMessage = (uint8_t)bDelayMessage;
    this->ProcessEvent(Func, &Parms);
}

struct FString UPixUIRenderTarget::SendPxMessage(struct FString strMessage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIRenderTarget", "SendPxMessage");
    struct
    {
        struct FString strMessage;
        struct FString ReturnValue;
    } Parms{};
    Parms.strMessage = (struct FString)strMessage;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPixUIRenderTarget::ReSize(int32_t nNewWidth, int32_t nNewHeight)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIRenderTarget", "ReSize");
    struct
    {
        int32_t nNewWidth;
        int32_t nNewHeight;
    } Parms{};
    Parms.nNewWidth = (int32_t)nNewWidth;
    Parms.nNewHeight = (int32_t)nNewHeight;
    this->ProcessEvent(Func, &Parms);
}

void UPixUIRenderTarget::ReScale(float fScale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIRenderTarget", "ReScale");
    struct
    {
        float fScale;
    } Parms{};
    Parms.fScale = (float)fScale;
    this->ProcessEvent(Func, &Parms);
}

int32_t UPixUIRenderTarget::PostPxMessage(struct FString strMessage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIRenderTarget", "PostPxMessage");
    struct
    {
        struct FString strMessage;
        int32_t ReturnValue;
    } Parms{};
    Parms.strMessage = (struct FString)strMessage;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPixUIRenderTarget::OnExternalTouchEvent(const struct FVector2D& v2dPosTouch, int32_t nPointerIndex, EPxTouchType ETouchType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIRenderTarget", "OnExternalTouchEvent");
    struct
    {
        struct FVector2D v2dPosTouch;
        int32_t nPointerIndex;
        enum EPxTouchType ETouchType;
    } Parms{};
    Parms.v2dPosTouch = (struct FVector2D)v2dPosTouch;
    Parms.nPointerIndex = (int32_t)nPointerIndex;
    Parms.ETouchType = (enum EPxTouchType)ETouchType;
    this->ProcessEvent(Func, &Parms);
}

void UPixUIRenderTarget::OnExternalTextInput(struct FString strNewInput, uint8_t beEndInput, uint8_t beLostFocus, uint8_t beReplace)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIRenderTarget", "OnExternalTextInput");
    struct
    {
        struct FString strNewInput;
        uint8_t beEndInput;
        uint8_t beLostFocus;
        uint8_t beReplace;
    } Parms{};
    Parms.strNewInput = (struct FString)strNewInput;
    Parms.beEndInput = (uint8_t)beEndInput;
    Parms.beLostFocus = (uint8_t)beLostFocus;
    Parms.beReplace = (uint8_t)beReplace;
    this->ProcessEvent(Func, &Parms);
}

void UPixUIRenderTarget::OnExternalMouseEvent(const struct FVector2D& v2dPosMouse, const struct FVector2D& v2dOffsetWheel, EPxMouseType eMouseType, EPxKeyEventType uEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIRenderTarget", "OnExternalMouseEvent");
    struct
    {
        struct FVector2D v2dPosMouse;
        struct FVector2D v2dOffsetWheel;
        enum EPxMouseType eMouseType;
        enum EPxKeyEventType uEvent;
    } Parms{};
    Parms.v2dPosMouse = (struct FVector2D)v2dPosMouse;
    Parms.v2dOffsetWheel = (struct FVector2D)v2dOffsetWheel;
    Parms.eMouseType = (enum EPxMouseType)eMouseType;
    Parms.uEvent = (enum EPxKeyEventType)uEvent;
    this->ProcessEvent(Func, &Parms);
}

void UPixUIRenderTarget::OnExternalKeyBoardEvent(const struct FKeyEvent& KeyEvent, EPxKeyEventType EEventType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIRenderTarget", "OnExternalKeyBoardEvent");
    struct
    {
        struct FKeyEvent KeyEvent;
        enum EPxKeyEventType EEventType;
    } Parms{};
    Parms.KeyEvent = (struct FKeyEvent)KeyEvent;
    Parms.EEventType = (enum EPxKeyEventType)EEventType;
    this->ProcessEvent(Func, &Parms);
}

void UPixUIRenderTarget::OnExternalGamepadEvent(const struct FKeyEvent& KeyEvent, EPxKeyEventType EEventType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIRenderTarget", "OnExternalGamepadEvent");
    struct
    {
        struct FKeyEvent KeyEvent;
        enum EPxKeyEventType EEventType;
    } Parms{};
    Parms.KeyEvent = (struct FKeyEvent)KeyEvent;
    Parms.EEventType = (enum EPxKeyEventType)EEventType;
    this->ProcessEvent(Func, &Parms);
}

void UPixUIRenderTarget::OnExternalGamepadAnalogEvent(const struct FAnalogInputEvent& AnalogInputEvent, EPxKeyEventType EEventType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIRenderTarget", "OnExternalGamepadAnalogEvent");
    struct
    {
        struct FAnalogInputEvent AnalogInputEvent;
        enum EPxKeyEventType EEventType;
    } Parms{};
    Parms.AnalogInputEvent = (struct FAnalogInputEvent)AnalogInputEvent;
    Parms.EEventType = (enum EPxKeyEventType)EEventType;
    this->ProcessEvent(Func, &Parms);
}

int32_t UPixUIRenderTarget::LoadPageFromUrl(struct FString strUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIRenderTarget", "LoadPageFromUrl");
    struct
    {
        struct FString strUrl;
        int32_t ReturnValue;
    } Parms{};
    Parms.strUrl = (struct FString)strUrl;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPixUIRenderTarget::LoadPageFromGameAssetPath(struct FString strAssetPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIRenderTarget", "LoadPageFromGameAssetPath");
    struct
    {
        struct FString strAssetPath;
        int32_t ReturnValue;
    } Parms{};
    Parms.strAssetPath = (struct FString)strAssetPath;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPixUIRenderTarget::LoadPageFromData(struct TArray<uint8_t>& arrayData, struct FString strBasePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIRenderTarget", "LoadPageFromData");
    struct
    {
        struct TArray<uint8_t> arrayData;
        struct FString strBasePath;
        int32_t ReturnValue;
    } Parms{};
    Parms.strBasePath = (struct FString)strBasePath;
    this->ProcessEvent(Func, &Parms);
    arrayData = Parms.arrayData;
    return Parms.ReturnValue;
}

uint8_t UPixUIRenderTarget::IsPxViewValid()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIRenderTarget", "IsPxViewValid");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPixUIRenderTarget::HistoryGo(int32_t nStep)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIRenderTarget", "HistoryGo");
    struct
    {
        int32_t nStep;
    } Parms{};
    Parms.nStep = (int32_t)nStep;
    this->ProcessEvent(Func, &Parms);
}

int32_t UPixUIRenderTarget::GetRenderTarget2DWidth()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIRenderTarget", "GetRenderTarget2DWidth");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPixUIRenderTarget::GetRenderTarget2DHeight()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIRenderTarget", "GetRenderTarget2DHeight");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UTextureRenderTarget2D* UPixUIRenderTarget::GetRenderTarget2D()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIRenderTarget", "GetRenderTarget2D");
    struct
    {
        struct UTextureRenderTarget2D* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UPixUIRenderTarget::GetCoreLibVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIRenderTarget", "GetCoreLibVersion");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPixUIRenderTarget::DestroyPage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIRenderTarget", "DestroyPage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

int32_t UPixUIRenderTarget::Create(int32_t nWidth, int32_t nHeight, float fScale, uint8_t bAsyncModel, uint8_t bCoreLibAsyncModel, uint8_t bGammaSpace, uint8_t bAntiAliasing)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIRenderTarget", "Create");
    struct
    {
        int32_t nWidth;
        int32_t nHeight;
        float fScale;
        uint8_t bAsyncModel;
        uint8_t bCoreLibAsyncModel;
        uint8_t bGammaSpace;
        uint8_t bAntiAliasing;
        int32_t ReturnValue;
    } Parms{};
    Parms.nWidth = (int32_t)nWidth;
    Parms.nHeight = (int32_t)nHeight;
    Parms.fScale = (float)fScale;
    Parms.bAsyncModel = (uint8_t)bAsyncModel;
    Parms.bCoreLibAsyncModel = (uint8_t)bCoreLibAsyncModel;
    Parms.bGammaSpace = (uint8_t)bGammaSpace;
    Parms.bAntiAliasing = (uint8_t)bAntiAliasing;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPixUIRenderTarget::ClosePage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIRenderTarget", "ClosePage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UPixUIScriptVM::* ----
void UPixUIScriptVM::SetTickIntervalSec(float fTickIntervalSec)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIScriptVM", "SetTickIntervalSec");
    struct
    {
        float fTickIntervalSec;
    } Parms{};
    Parms.fTickIntervalSec = (float)fTickIntervalSec;
    this->ProcessEvent(Func, &Parms);
}

void UPixUIScriptVM::SetScriptGlobalString(struct FString strName, struct FString StrKey, struct FString strValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIScriptVM", "SetScriptGlobalString");
    struct
    {
        struct FString strName;
        struct FString StrKey;
        struct FString strValue;
    } Parms{};
    Parms.strName = (struct FString)strName;
    Parms.StrKey = (struct FString)StrKey;
    Parms.strValue = (struct FString)strValue;
    this->ProcessEvent(Func, &Parms);
}

void UPixUIScriptVM::SetScriptGlobalNumber(struct FString strName, struct FString StrKey, float fValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIScriptVM", "SetScriptGlobalNumber");
    struct
    {
        struct FString strName;
        struct FString StrKey;
        float fValue;
    } Parms{};
    Parms.strName = (struct FString)strName;
    Parms.StrKey = (struct FString)StrKey;
    Parms.fValue = (float)fValue;
    this->ProcessEvent(Func, &Parms);
}

void UPixUIScriptVM::SetScriptGlobalBoolean(struct FString strName, struct FString StrKey, uint8_t bValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIScriptVM", "SetScriptGlobalBoolean");
    struct
    {
        struct FString strName;
        struct FString StrKey;
        uint8_t bValue;
    } Parms{};
    Parms.strName = (struct FString)strName;
    Parms.StrKey = (struct FString)StrKey;
    Parms.bValue = (uint8_t)bValue;
    this->ProcessEvent(Func, &Parms);
}

void UPixUIScriptVM::SetJsGCThreshold(int32_t nGCThreshold)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIScriptVM", "SetJsGCThreshold");
    struct
    {
        int32_t nGCThreshold;
    } Parms{};
    Parms.nGCThreshold = (int32_t)nGCThreshold;
    this->ProcessEvent(Func, &Parms);
}

void UPixUIScriptVM::SetBeSupportEventCallNested(uint8_t bSupportEventCallNested)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIScriptVM", "SetBeSupportEventCallNested");
    struct
    {
        uint8_t bSupportEventCallNested;
    } Parms{};
    Parms.bSupportEventCallNested = (uint8_t)bSupportEventCallNested;
    this->ProcessEvent(Func, &Parms);
}

void UPixUIScriptVM::SetBeDelayCallMessage(uint8_t bDelayMessage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIScriptVM", "SetBeDelayCallMessage");
    struct
    {
        uint8_t bDelayMessage;
    } Parms{};
    Parms.bDelayMessage = (uint8_t)bDelayMessage;
    this->ProcessEvent(Func, &Parms);
}

struct FString UPixUIScriptVM::SendPxMessage(struct FString strMessage, int32_t nWaitMS)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIScriptVM", "SendPxMessage");
    struct
    {
        struct FString strMessage;
        int32_t nWaitMS;
        struct FString ReturnValue;
    } Parms{};
    Parms.strMessage = (struct FString)strMessage;
    Parms.nWaitMS = (int32_t)nWaitMS;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPixUIScriptVM::PostPxMessage(struct FString strMessage, int32_t nWaitMS)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIScriptVM", "PostPxMessage");
    struct
    {
        struct FString strMessage;
        int32_t nWaitMS;
        int32_t ReturnValue;
    } Parms{};
    Parms.strMessage = (struct FString)strMessage;
    Parms.nWaitMS = (int32_t)nWaitMS;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPixUIScriptVM::LoadURL(struct FString strUrl, int32_t nWaitMS)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIScriptVM", "LoadURL");
    struct
    {
        struct FString strUrl;
        int32_t nWaitMS;
        int32_t ReturnValue;
    } Parms{};
    Parms.strUrl = (struct FString)strUrl;
    Parms.nWaitMS = (int32_t)nWaitMS;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPixUIScriptVM::IsValid()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIScriptVM", "IsValid");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPixUIScriptVM::IsPxVmValid()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIScriptVM", "IsPxVmValid");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UPixUIScriptVM::GetScriptGlobalString(struct FString strName, struct FString StrKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIScriptVM", "GetScriptGlobalString");
    struct
    {
        struct FString strName;
        struct FString StrKey;
        struct FString ReturnValue;
    } Parms{};
    Parms.strName = (struct FString)strName;
    Parms.StrKey = (struct FString)StrKey;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UPixUIScriptVM::GetScriptGlobalNumber(struct FString strName, struct FString StrKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIScriptVM", "GetScriptGlobalNumber");
    struct
    {
        struct FString strName;
        struct FString StrKey;
        float ReturnValue;
    } Parms{};
    Parms.strName = (struct FString)strName;
    Parms.StrKey = (struct FString)StrKey;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPixUIScriptVM::GetScriptGlobalBoolean(struct FString strName, struct FString StrKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIScriptVM", "GetScriptGlobalBoolean");
    struct
    {
        struct FString strName;
        struct FString StrKey;
        uint8_t ReturnValue;
    } Parms{};
    Parms.strName = (struct FString)strName;
    Parms.StrKey = (struct FString)StrKey;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPixUIScriptVM::GetPxVMId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIScriptVM", "GetPxVMId");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UPixUIScriptVM::GetCoreLibVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIScriptVM", "GetCoreLibVersion");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPixUIScriptVM::DoFile(struct FString strFilePath, int32_t nWaitMS)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIScriptVM", "DoFile");
    struct
    {
        struct FString strFilePath;
        int32_t nWaitMS;
        int32_t ReturnValue;
    } Parms{};
    Parms.strFilePath = (struct FString)strFilePath;
    Parms.nWaitMS = (int32_t)nWaitMS;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPixUIScriptVM::DoBufferByAssetPath(struct FString strAssetPath, struct FString strName, struct FString strModuleName, int32_t nWaitMS)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIScriptVM", "DoBufferByAssetPath");
    struct
    {
        struct FString strAssetPath;
        struct FString strName;
        struct FString strModuleName;
        int32_t nWaitMS;
        int32_t ReturnValue;
    } Parms{};
    Parms.strAssetPath = (struct FString)strAssetPath;
    Parms.strName = (struct FString)strName;
    Parms.strModuleName = (struct FString)strModuleName;
    Parms.nWaitMS = (int32_t)nWaitMS;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPixUIScriptVM::DoBuffer(const struct TArray<uint8_t>& arrayData, struct FString strBasePath, struct FString strName, struct FString strModuleName, int32_t nWaitMS)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIScriptVM", "DoBuffer");
    struct
    {
        struct TArray<uint8_t> arrayData;
        struct FString strBasePath;
        struct FString strName;
        struct FString strModuleName;
        int32_t nWaitMS;
        int32_t ReturnValue;
    } Parms{};
    Parms.arrayData = (struct TArray<uint8_t>)arrayData;
    Parms.strBasePath = (struct FString)strBasePath;
    Parms.strName = (struct FString)strName;
    Parms.strModuleName = (struct FString)strModuleName;
    Parms.nWaitMS = (int32_t)nWaitMS;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPixUIScriptVM::DestroyVM(int32_t nWaitMS)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIScriptVM", "DestroyVM");
    struct
    {
        int32_t nWaitMS;
        int32_t ReturnValue;
    } Parms{};
    Parms.nWaitMS = (int32_t)nWaitMS;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPixUIScriptVM::CreateScriptGlobal(struct FString strName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIScriptVM", "CreateScriptGlobal");
    struct
    {
        struct FString strName;
    } Parms{};
    Parms.strName = (struct FString)strName;
    this->ProcessEvent(Func, &Parms);
}

int32_t UPixUIScriptVM::CreateEx(uint8_t bAsyncMode, uint8_t bCoreLibAsyncMode, int32_t nWaitMS)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIScriptVM", "CreateEx");
    struct
    {
        uint8_t bAsyncMode;
        uint8_t bCoreLibAsyncMode;
        int32_t nWaitMS;
        int32_t ReturnValue;
    } Parms{};
    Parms.bAsyncMode = (uint8_t)bAsyncMode;
    Parms.bCoreLibAsyncMode = (uint8_t)bCoreLibAsyncMode;
    Parms.nWaitMS = (int32_t)nWaitMS;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPixUIScriptVM::Create(uint8_t bAsyncMode, int32_t nWaitMS)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIScriptVM", "Create");
    struct
    {
        uint8_t bAsyncMode;
        int32_t nWaitMS;
        int32_t ReturnValue;
    } Parms{};
    Parms.bAsyncMode = (uint8_t)bAsyncMode;
    Parms.nWaitMS = (int32_t)nWaitMS;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPixUIScriptVM::CloseVM(int32_t nWaitMS)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIScriptVM", "CloseVM");
    struct
    {
        int32_t nWaitMS;
        int32_t ReturnValue;
    } Parms{};
    Parms.nWaitMS = (int32_t)nWaitMS;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UPixUIViewPortWidget::* ----
struct FString UPixUIViewPortWidget::SendPxMessage(struct FString strMessage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIViewPortWidget", "SendPxMessage");
    struct
    {
        struct FString strMessage;
        struct FString ReturnValue;
    } Parms{};
    Parms.strMessage = (struct FString)strMessage;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPixUIViewPortWidget::PostPxViewMessage(struct FString strMessage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIViewPortWidget", "PostPxViewMessage");
    struct
    {
        struct FString strMessage;
    } Parms{};
    Parms.strMessage = (struct FString)strMessage;
    this->ProcessEvent(Func, &Parms);
}

int32_t UPixUIViewPortWidget::PostPxMessage(struct FString strMessage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIViewPortWidget", "PostPxMessage");
    struct
    {
        struct FString strMessage;
        int32_t ReturnValue;
    } Parms{};
    Parms.strMessage = (struct FString)strMessage;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPixUIViewPortWidget::OnPixUITransformDelegate(EPxWidgetTransformType EPxWidgetTransformType, int32_t nParam1, int32_t nParam2)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIViewPortWidget", "OnPixUITransformDelegate");
    struct
    {
        enum EPxWidgetTransformType EPxWidgetTransformType;
        int32_t nParam1;
        int32_t nParam2;
    } Parms{};
    Parms.EPxWidgetTransformType = (enum EPxWidgetTransformType)EPxWidgetTransformType;
    Parms.nParam1 = (int32_t)nParam1;
    Parms.nParam2 = (int32_t)nParam2;
    this->ProcessEvent(Func, &Parms);
}

struct FString UPixUIViewPortWidget::OnPixUIPromptDelegate(struct FString strTip, struct FString strDefault)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIViewPortWidget", "OnPixUIPromptDelegate");
    struct
    {
        struct FString strTip;
        struct FString strDefault;
        struct FString ReturnValue;
    } Parms{};
    Parms.strTip = (struct FString)strTip;
    Parms.strDefault = (struct FString)strDefault;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPixUIViewPortWidget::OnPixUIOpenDelegate(struct FString strUrl, struct FString strName, struct FString strFeatures, uint8_t bReplace)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIViewPortWidget", "OnPixUIOpenDelegate");
    struct
    {
        struct FString strUrl;
        struct FString strName;
        struct FString strFeatures;
        uint8_t bReplace;
        int32_t ReturnValue;
    } Parms{};
    Parms.strUrl = (struct FString)strUrl;
    Parms.strName = (struct FString)strName;
    Parms.strFeatures = (struct FString)strFeatures;
    Parms.bReplace = (uint8_t)bReplace;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPixUIViewPortWidget::OnPixUIConfirmDelegate(struct FString strConfirmMsg)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIViewPortWidget", "OnPixUIConfirmDelegate");
    struct
    {
        struct FString strConfirmMsg;
        uint8_t ReturnValue;
    } Parms{};
    Parms.strConfirmMsg = (struct FString)strConfirmMsg;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPixUIViewPortWidget::LoadPxViewFromUrl(struct FString strUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIViewPortWidget", "LoadPxViewFromUrl");
    struct
    {
        struct FString strUrl;
        int32_t ReturnValue;
    } Parms{};
    Parms.strUrl = (struct FString)strUrl;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPixUIViewPortWidget::LoadPxViewFromGameAssetPath(struct FString strAssetPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIViewPortWidget", "LoadPxViewFromGameAssetPath");
    struct
    {
        struct FString strAssetPath;
        int32_t ReturnValue;
    } Parms{};
    Parms.strAssetPath = (struct FString)strAssetPath;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPixUIViewPortWidget::LoadPxViewFromData(struct TArray<uint8_t>& arrayData, struct FString strRootPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIViewPortWidget", "LoadPxViewFromData");
    struct
    {
        struct TArray<uint8_t> arrayData;
        struct FString strRootPath;
        int32_t ReturnValue;
    } Parms{};
    Parms.strRootPath = (struct FString)strRootPath;
    this->ProcessEvent(Func, &Parms);
    arrayData = Parms.arrayData;
    return Parms.ReturnValue;
}

int32_t UPixUIViewPortWidget::LoadPageFromUrl(struct FString strUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIViewPortWidget", "LoadPageFromUrl");
    struct
    {
        struct FString strUrl;
        int32_t ReturnValue;
    } Parms{};
    Parms.strUrl = (struct FString)strUrl;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPixUIViewPortWidget::LoadPageFromGameAssetPath(struct FString strAssetPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIViewPortWidget", "LoadPageFromGameAssetPath");
    struct
    {
        struct FString strAssetPath;
        int32_t ReturnValue;
    } Parms{};
    Parms.strAssetPath = (struct FString)strAssetPath;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPixUIViewPortWidget::LoadPageFromData(struct TArray<uint8_t>& arrayData, struct FString strRootPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIViewPortWidget", "LoadPageFromData");
    struct
    {
        struct TArray<uint8_t> arrayData;
        struct FString strRootPath;
        int32_t ReturnValue;
    } Parms{};
    Parms.strRootPath = (struct FString)strRootPath;
    this->ProcessEvent(Func, &Parms);
    arrayData = Parms.arrayData;
    return Parms.ReturnValue;
}

struct UPixUIWidget* UPixUIViewPortWidget::GetPixUIWidget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIViewPortWidget", "GetPixUIWidget");
    struct
    {
        struct UPixUIWidget* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPixUIViewPortWidget::ClosePxView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIViewPortWidget", "ClosePxView");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPixUIViewPortWidget::ClosePage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIViewPortWidget", "ClosePage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UPixUIWidget::* ----
void UPixUIWidget::ShowNextDrawItem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "ShowNextDrawItem");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPixUIWidget::ShowNextDrawBatch()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "ShowNextDrawBatch");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPixUIWidget::ShowAllDrawItem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "ShowAllDrawItem");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPixUIWidget::ShowAllDrawBatch()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "ShowAllDrawBatch");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPixUIWidget::SetTickMode(EPxTickMode eTickMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "SetTickMode");
    struct
    {
        enum EPxTickMode eTickMode;
    } Parms{};
    Parms.eTickMode = (enum EPxTickMode)eTickMode;
    this->ProcessEvent(Func, &Parms);
}

void UPixUIWidget::SetTickIntervalSec(float fTickIntervalSec)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "SetTickIntervalSec");
    struct
    {
        float fTickIntervalSec;
    } Parms{};
    Parms.fTickIntervalSec = (float)fTickIntervalSec;
    this->ProcessEvent(Func, &Parms);
}

void UPixUIWidget::SetScriptGlobalString(struct FString strName, struct FString StrKey, struct FString strValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "SetScriptGlobalString");
    struct
    {
        struct FString strName;
        struct FString StrKey;
        struct FString strValue;
    } Parms{};
    Parms.strName = (struct FString)strName;
    Parms.StrKey = (struct FString)StrKey;
    Parms.strValue = (struct FString)strValue;
    this->ProcessEvent(Func, &Parms);
}

void UPixUIWidget::SetScriptGlobalNumber(struct FString strName, struct FString StrKey, float fValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "SetScriptGlobalNumber");
    struct
    {
        struct FString strName;
        struct FString StrKey;
        float fValue;
    } Parms{};
    Parms.strName = (struct FString)strName;
    Parms.StrKey = (struct FString)StrKey;
    Parms.fValue = (float)fValue;
    this->ProcessEvent(Func, &Parms);
}

void UPixUIWidget::SetScriptGlobalBoolean(struct FString strName, struct FString StrKey, uint8_t bValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "SetScriptGlobalBoolean");
    struct
    {
        struct FString strName;
        struct FString StrKey;
        uint8_t bValue;
    } Parms{};
    Parms.strName = (struct FString)strName;
    Parms.StrKey = (struct FString)StrKey;
    Parms.bValue = (uint8_t)bValue;
    this->ProcessEvent(Func, &Parms);
}

void UPixUIWidget::SetJsGCThreshold(int32_t nGCThreshold)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "SetJsGCThreshold");
    struct
    {
        int32_t nGCThreshold;
    } Parms{};
    Parms.nGCThreshold = (int32_t)nGCThreshold;
    this->ProcessEvent(Func, &Parms);
}

void UPixUIWidget::SetBeSupportEventCallNested(uint8_t bSupportEventCallNested)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "SetBeSupportEventCallNested");
    struct
    {
        uint8_t bSupportEventCallNested;
    } Parms{};
    Parms.bSupportEventCallNested = (uint8_t)bSupportEventCallNested;
    this->ProcessEvent(Func, &Parms);
}

void UPixUIWidget::SetBeDelayCallMessage(uint8_t bDelayMessage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "SetBeDelayCallMessage");
    struct
    {
        uint8_t bDelayMessage;
    } Parms{};
    Parms.bDelayMessage = (uint8_t)bDelayMessage;
    this->ProcessEvent(Func, &Parms);
}

void UPixUIWidget::SetBackgroundBlur(float fBlurStrength)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "SetBackgroundBlur");
    struct
    {
        float fBlurStrength;
    } Parms{};
    Parms.fBlurStrength = (float)fBlurStrength;
    this->ProcessEvent(Func, &Parms);
}

void UPixUIWidget::SetAutoTransform(uint8_t bAutoTransform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "SetAutoTransform");
    struct
    {
        uint8_t bAutoTransform;
    } Parms{};
    Parms.bAutoTransform = (uint8_t)bAutoTransform;
    this->ProcessEvent(Func, &Parms);
}

struct FString UPixUIWidget::SendPxMessage(struct FString strMessage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "SendPxMessage");
    struct
    {
        struct FString strMessage;
        struct FString ReturnValue;
    } Parms{};
    Parms.strMessage = (struct FString)strMessage;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPixUIWidget::PostPxMessage(struct FString strMessage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "PostPxMessage");
    struct
    {
        struct FString strMessage;
        int32_t ReturnValue;
    } Parms{};
    Parms.strMessage = (struct FString)strMessage;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPixUIWidget::OpenPageFromUrl(struct FString strUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "OpenPageFromUrl");
    struct
    {
        struct FString strUrl;
        int32_t ReturnValue;
    } Parms{};
    Parms.strUrl = (struct FString)strUrl;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPixUIWidget::OpenPageFromGameAssetPath(struct FString strAssetPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "OpenPageFromGameAssetPath");
    struct
    {
        struct FString strAssetPath;
        int32_t ReturnValue;
    } Parms{};
    Parms.strAssetPath = (struct FString)strAssetPath;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPixUIWidget::OpenPageFromData(struct TArray<uint8_t>& arrayData, struct FString strBasePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "OpenPageFromData");
    struct
    {
        struct TArray<uint8_t> arrayData;
        struct FString strBasePath;
        int32_t ReturnValue;
    } Parms{};
    Parms.strBasePath = (struct FString)strBasePath;
    this->ProcessEvent(Func, &Parms);
    arrayData = Parms.arrayData;
    return Parms.ReturnValue;
}

void UPixUIWidget::OnExternalTouchEvent(const struct FVector2D& v2dPosTouch, int32_t nPointerIndex, EPxTouchType ETouchType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "OnExternalTouchEvent");
    struct
    {
        struct FVector2D v2dPosTouch;
        int32_t nPointerIndex;
        enum EPxTouchType ETouchType;
    } Parms{};
    Parms.v2dPosTouch = (struct FVector2D)v2dPosTouch;
    Parms.nPointerIndex = (int32_t)nPointerIndex;
    Parms.ETouchType = (enum EPxTouchType)ETouchType;
    this->ProcessEvent(Func, &Parms);
}

void UPixUIWidget::OnExternalTextInput(struct FString strNewInput, uint8_t beEndInput, uint8_t beLostFocus, uint8_t beReplace)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "OnExternalTextInput");
    struct
    {
        struct FString strNewInput;
        uint8_t beEndInput;
        uint8_t beLostFocus;
        uint8_t beReplace;
    } Parms{};
    Parms.strNewInput = (struct FString)strNewInput;
    Parms.beEndInput = (uint8_t)beEndInput;
    Parms.beLostFocus = (uint8_t)beLostFocus;
    Parms.beReplace = (uint8_t)beReplace;
    this->ProcessEvent(Func, &Parms);
}

void UPixUIWidget::OnExternalMouseEvent(const struct FVector2D& v2dPosMouse, const struct FVector2D& v2dOffsetWheel, EPxMouseType eMouseType, EPxKeyEventType uEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "OnExternalMouseEvent");
    struct
    {
        struct FVector2D v2dPosMouse;
        struct FVector2D v2dOffsetWheel;
        enum EPxMouseType eMouseType;
        enum EPxKeyEventType uEvent;
    } Parms{};
    Parms.v2dPosMouse = (struct FVector2D)v2dPosMouse;
    Parms.v2dOffsetWheel = (struct FVector2D)v2dOffsetWheel;
    Parms.eMouseType = (enum EPxMouseType)eMouseType;
    Parms.uEvent = (enum EPxKeyEventType)uEvent;
    this->ProcessEvent(Func, &Parms);
}

void UPixUIWidget::OnExternalKeyBoardEvent(const struct FKeyEvent& KeyEvent, EPxKeyEventType EEventType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "OnExternalKeyBoardEvent");
    struct
    {
        struct FKeyEvent KeyEvent;
        enum EPxKeyEventType EEventType;
    } Parms{};
    Parms.KeyEvent = (struct FKeyEvent)KeyEvent;
    Parms.EEventType = (enum EPxKeyEventType)EEventType;
    this->ProcessEvent(Func, &Parms);
}

void UPixUIWidget::OnExternalGamepadEvent(const struct FKeyEvent& KeyEvent, EPxKeyEventType EEventType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "OnExternalGamepadEvent");
    struct
    {
        struct FKeyEvent KeyEvent;
        enum EPxKeyEventType EEventType;
    } Parms{};
    Parms.KeyEvent = (struct FKeyEvent)KeyEvent;
    Parms.EEventType = (enum EPxKeyEventType)EEventType;
    this->ProcessEvent(Func, &Parms);
}

void UPixUIWidget::OnExternalGamepadAnalogEvent(const struct FAnalogInputEvent& AnalogInputEvent, EPxKeyEventType EEventType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "OnExternalGamepadAnalogEvent");
    struct
    {
        struct FAnalogInputEvent AnalogInputEvent;
        enum EPxKeyEventType EEventType;
    } Parms{};
    Parms.AnalogInputEvent = (struct FAnalogInputEvent)AnalogInputEvent;
    Parms.EEventType = (enum EPxKeyEventType)EEventType;
    this->ProcessEvent(Func, &Parms);
}

int32_t UPixUIWidget::LoadPageFromUrl(struct FString strUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "LoadPageFromUrl");
    struct
    {
        struct FString strUrl;
        int32_t ReturnValue;
    } Parms{};
    Parms.strUrl = (struct FString)strUrl;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPixUIWidget::LoadPageFromGameAssetPath(struct FString strAssetPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "LoadPageFromGameAssetPath");
    struct
    {
        struct FString strAssetPath;
        int32_t ReturnValue;
    } Parms{};
    Parms.strAssetPath = (struct FString)strAssetPath;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPixUIWidget::LoadPageFromData(struct TArray<uint8_t>& arrayData, struct FString strBasePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "LoadPageFromData");
    struct
    {
        struct TArray<uint8_t> arrayData;
        struct FString strBasePath;
        int32_t ReturnValue;
    } Parms{};
    Parms.strBasePath = (struct FString)strBasePath;
    this->ProcessEvent(Func, &Parms);
    arrayData = Parms.arrayData;
    return Parms.ReturnValue;
}

uint8_t UPixUIWidget::IsPxViewValid()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "IsPxViewValid");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPixUIWidget::HistoryGo(int32_t nStep)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "HistoryGo");
    struct
    {
        int32_t nStep;
    } Parms{};
    Parms.nStep = (int32_t)nStep;
    this->ProcessEvent(Func, &Parms);
}

struct UObject* UPixUIWidget::GetSlotObjectByTagId(struct FString strSlotTagId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "GetSlotObjectByTagId");
    struct
    {
        struct FString strSlotTagId;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.strSlotTagId = (struct FString)strSlotTagId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UPixUIWidget::GetScriptGlobalString(struct FString strName, struct FString StrKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "GetScriptGlobalString");
    struct
    {
        struct FString strName;
        struct FString StrKey;
        struct FString ReturnValue;
    } Parms{};
    Parms.strName = (struct FString)strName;
    Parms.StrKey = (struct FString)StrKey;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UPixUIWidget::GetScriptGlobalNumber(struct FString strName, struct FString StrKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "GetScriptGlobalNumber");
    struct
    {
        struct FString strName;
        struct FString StrKey;
        float ReturnValue;
    } Parms{};
    Parms.strName = (struct FString)strName;
    Parms.StrKey = (struct FString)StrKey;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPixUIWidget::GetScriptGlobalBoolean(struct FString strName, struct FString StrKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "GetScriptGlobalBoolean");
    struct
    {
        struct FString strName;
        struct FString StrKey;
        uint8_t ReturnValue;
    } Parms{};
    Parms.strName = (struct FString)strName;
    Parms.StrKey = (struct FString)StrKey;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPixUIWidget::GetPxWinId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "GetPxWinId");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWidget* UPixUIWidget::GetCtrlWidget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "GetCtrlWidget");
    struct
    {
        struct UWidget* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UPixUIWidget::GetCoreLibVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "GetCoreLibVersion");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPixUIWidget::DestroyPage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "DestroyPage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPixUIWidget::CreateScriptGlobal(struct FString strName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "CreateScriptGlobal");
    struct
    {
        struct FString strName;
    } Parms{};
    Parms.strName = (struct FString)strName;
    this->ProcessEvent(Func, &Parms);
}

void UPixUIWidget::ClosePage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PixUIWidget", "ClosePage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UPxCustomDelegate::* ----
void UPxCustomDelegate::OnPxCustomDelegate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PxCustomDelegate", "OnPxCustomDelegate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UPxCustomDelegate* UPxCustomDelegate::MakeCustomDelegate(struct FString strCustomDelegateName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PxCustomDelegate", "MakeCustomDelegate");
    struct
    {
        struct FString strCustomDelegateName;
        struct UPxCustomDelegate* ReturnValue;
    } Parms{};
    Parms.strCustomDelegateName = (struct FString)strCustomDelegateName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UPxCustomInterfaceDyImp::* ----
struct UPxCustomInterfaceDyImp* UPxCustomInterfaceDyImp::MakeCustomInterface(struct FString strCustomInterfaceName, struct UObject* pOverrideBaseClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PxCustomInterfaceDyImp", "MakeCustomInterface");
    struct
    {
        struct FString strCustomInterfaceName;
        struct UObject* pOverrideBaseClass;
        struct UPxCustomInterfaceDyImp* ReturnValue;
    } Parms{};
    Parms.strCustomInterfaceName = (struct FString)strCustomInterfaceName;
    Parms.pOverrideBaseClass = (struct UObject*)pOverrideBaseClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UPxFileLoad::* ----
void UPxFileLoad::OnFileLoad(const struct TArray<uint8_t>& arrayFileData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PxFileLoad", "OnFileLoad");
    struct
    {
        struct TArray<uint8_t> arrayFileData;
    } Parms{};
    Parms.arrayFileData = (struct TArray<uint8_t>)arrayFileData;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
