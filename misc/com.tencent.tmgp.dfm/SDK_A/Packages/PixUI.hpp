#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: PixUI
// Enums: 11
// Structs: 0
// Classes: 14

enum class EEventType : uint8_t;
enum class ETextureFilter : uint8_t;
enum class ETouchType : uint8_t;
struct FAnalogInputEvent;
struct FAnchors;
struct FKeyEvent;
struct FMargin;
struct UCanvasPanel;
struct UTextureRenderTarget2D;
struct UWidget;
struct UPixUIBrushWrapper;
struct UPixUIBPLibrary;
struct IPixUIExternalInterface;
struct UPixUIInput;
struct UPixUIRenderTarget;
struct UPixUIScriptVM;
struct UPixUIViewPortWidget;
struct UPixUIWidget;
struct UPxCustomDelegate;
struct UPxCustomInterfaceDyImp;
struct UPxFileLoad;
struct UPxSubLayerWidget;
struct UPxSubCtrlWidget;
struct UPxSubNodeWidget;

// Object: Enum PixUI.EPxKeyboardTypes
enum class EPxKeyboardTypes : uint8_t
{
	Default = 0,
	Number = 1,
	Password = 2,
	MultiLine = 3,
	EPxKeyboardTypes_MAX = 4
};

// Object: Enum PixUI.EPxWidgetTransformType
enum class EPxWidgetTransformType : uint8_t
{
	MoveBy = 0,
	MoveTo = 1,
	ResizeBy = 2,
	ResizeTo = 3,
	ScrollBy = 4,
	ScrollTo = 5,
	Count = 6,
	EPxWidgetTransformType_MAX = 7
};

// Object: Enum PixUI.EPxTickMode
enum class EPxTickMode : uint8_t
{
	JS = 0,
	Layout = 1,
	All = 2,
	EPxTickMode_MAX = 3
};

// Object: Enum PixUI.EPxFontFaceType
enum class EPxFontFaceType : uint8_t
{
	FaceType100 = 0,
	FaceType200 = 1,
	FaceType300 = 2,
	FaceType350 = 3,
	FaceType400 = 4,
	FaceType500 = 5,
	FaceType600 = 6,
	FaceType700 = 7,
	FaceType800 = 8,
	FaceType900 = 9,
	FaceType950 = 10,
	EPxFontFaceType_MAX = 11
};

// Object: Enum PixUI.EPxDynamicTextureUpdateMode
enum class EPxDynamicTextureUpdateMode : uint8_t
{
	UpdateRegion = 0,
	UpdateBulkData = 1,
	EPxDynamicTextureUpdateMode_MAX = 2
};

// Object: Enum PixUI.EPxKeyEventType
enum class EPxKeyEventType : uint8_t
{
	KeyDown = 0,
	KeyUp = 1,
	EPxKeyEventType_MAX = 2
};

// Object: Enum PixUI.EPxMouseType
enum class EPxMouseType : uint8_t
{
	MouseLeft = 0,
	MouseRight = 1,
	MouseMiddle = 2,
	MouseThumb = 3,
	MouseThumb2 = 4,
	MouseUnknown = 5,
	EPxMouseType_MAX = 6
};

// Object: Enum PixUI.EPxTouchType
enum class EPxTouchType : uint8_t
{
	TouchStart = 0,
	TouchMoved = 1,
	TouchEnd = 2,
	TouchCanceled = 3,
	EPxTouchType_MAX = 4
};

// Object: Enum PixUI.EPxPublicCapability
enum class EPxPublicCapability : uint8_t
{
	HookCoreLibProfiler = 0,
	AsyncModeUseSemaphore = 1,
	DelayFreePxImgBrush = 2,
	AllowBigFontSize = 3,
	ImageBlendsInLinearSpace = 4,
	Count = 5,
	EPxPublicCapability_MAX = 6
};

// Object: Enum PixUI.EPxDebugInfo
enum class EPxDebugInfo : uint8_t
{
	ShowMouse = 0,
	Count = 1,
	EPxDebugInfo_MAX = 2
};

// Object: Enum PixUI.EPxWidgetBatchType
enum class EPxWidgetBatchType : uint8_t
{
	Default = 0,
	Auto = 1,
	NoBatch = 2,
	EPxWidgetBatchType_MAX = 3
};

// Object: Class PixUI.PixUIBrushWrapper
// Size: 0x38 (Inherited: 0x28)
struct UPixUIBrushWrapper : UObject
{
	uint8_t Pad_0x28[0x10]; // 0x28(0x10)
	DEFINE_UE_CLASS_HELPERS(UPixUIBrushWrapper, "PixUIBrushWrapper")

};

// Object: Class PixUI.PixUIBPLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPixUIBPLibrary : UBlueprintFunctionLibrary
{

	// Object: Function PixUI.PixUIBPLibrary.PixUI_Version
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad8c44
	// Params: [ Num(1) Size(0x10) ]
	static struct FString PixUI_Version();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_Tick
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad8bb0
	// Params: [ Num(1) Size(0x4) ]
	static void PixUI_Tick(float fDeltaTime);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_StartupEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad8abc
	// Params: [ Num(3) Size(0x12) ]
	static uint8_t PixUI_StartupEx(struct FString strCachePathForWrite, uint8_t bSupportAsyncModel);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_Startup
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad8a0c
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t PixUI_Startup(struct FString strCachePathForWrite);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_Shutdown
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad89d4
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t PixUI_Shutdown();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_SetTickIntervalSec
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad8940
	// Params: [ Num(1) Size(0x4) ]
	static void PixUI_SetTickIntervalSec(float fTickIntervalSec);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_SetSupportTextShape
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad88a4
	// Params: [ Num(1) Size(0x1) ]
	static void PixUI_SetSupportTextShape(uint8_t beSupportTextShape);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_SetSupportEngineFont
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad8808
	// Params: [ Num(1) Size(0x1) ]
	static void PixUI_SetSupportEngineFont(uint8_t bSupportEngineFont);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_SetSpecialCapability
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x10679c7c
	// Params: [ Num(1) Size(0x10) ]
	static void PixUI_SetSpecialCapability(struct FString strCapability);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_SetSecretKey
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad876c
	// Params: [ Num(1) Size(0x10) ]
	static void PixUI_SetSecretKey(struct FString strSecretKey);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_SetPxLibDefaultVersionTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad86d8
	// Params: [ Num(1) Size(0x4) ]
	static void PixUI_SetPxLibDefaultVersionTag(int32_t nNewPxLibVersionTag);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_SetPixUIMaxLayerId
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad8644
	// Params: [ Num(1) Size(0x4) ]
	static void PixUI_SetPixUIMaxLayerId(int32_t nMaxLayerId);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_SetPixUIMaxDynamicTextureTotalSize
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad85b0
	// Params: [ Num(1) Size(0x4) ]
	static void PixUI_SetPixUIMaxDynamicTextureTotalSize(int32_t nMaxDynamicTextureTotalSize);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_SetPixUIMaxDynamicTextureGCSize
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad851c
	// Params: [ Num(1) Size(0x4) ]
	static void PixUI_SetPixUIMaxDynamicTextureGCSize(int32_t nMaxDynamicTextureGCSize);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_SetPixUIMaxDynamicTextureGCRate
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad8488
	// Params: [ Num(1) Size(0x4) ]
	static void PixUI_SetPixUIMaxDynamicTextureGCRate(float fMaxGCRate);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_SetMobileUseTouchEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad83ec
	// Params: [ Num(1) Size(0x1) ]
	static void PixUI_SetMobileUseTouchEvent(uint8_t bUseTouchEvent);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_SetMatRootPath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad8350
	// Params: [ Num(1) Size(0x10) ]
	static void PixUI_SetMatRootPath(struct FString strMatRootPath);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_SetMatBasePath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad82b4
	// Params: [ Num(1) Size(0x10) ]
	static void PixUI_SetMatBasePath(struct FString strMatBasePath);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_SetMatAsyncLoad
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad8218
	// Params: [ Num(1) Size(0x1) ]
	static void PixUI_SetMatAsyncLoad(uint8_t bMatAsyncLoad);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_SetJsGCThreshold
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad8184
	// Params: [ Num(1) Size(0x4) ]
	static void PixUI_SetJsGCThreshold(int32_t nGCThreshold);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_SetGradientBrushCallFlushCommands
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad80e8
	// Params: [ Num(1) Size(0x1) ]
	static void PixUI_SetGradientBrushCallFlushCommands(uint8_t beGradientBrushCallFlushCommands);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_SetFontTypeFaceName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad7fcc
	// Params: [ Num(3) Size(0x28) ]
	static void PixUI_SetFontTypeFaceName(struct FString strFontName, EPxFontFaceType ePxFontTypeFace, struct FString strFontTypeFaceName);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_SetExternalInterface
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad7f28
	// Params: [ Num(1) Size(0x10) ]
	static void PixUI_SetExternalInterface(struct TScriptInterface<IPixUIExternalInterface> scriptInterfaceExternal);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_SetExtBpCallSupportThrowException
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad7e8c
	// Params: [ Num(1) Size(0x1) ]
	static void PixUI_SetExtBpCallSupportThrowException(uint8_t bSupportThrowException);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_SetDynamicTextureUpdateMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad7df8
	// Params: [ Num(1) Size(0x1) ]
	static void PixUI_SetDynamicTextureUpdateMode(EPxDynamicTextureUpdateMode eUpdateMode);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_SetDynamicTextureFilter
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad7d64
	// Params: [ Num(1) Size(0x1) ]
	static void PixUI_SetDynamicTextureFilter(ETextureFilter eTextureFilter);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_SetDynamicLibraryPath
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ad7ca4
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t PixUI_SetDynamicLibraryPath(struct FString& strDynamicLibraryPath);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_SetDynamicFixFontSize
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad7c08
	// Params: [ Num(1) Size(0x1) ]
	static void PixUI_SetDynamicFixFontSize(uint8_t bOpenDynamicFix);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_SetDrawEffectNoPixelSnapping
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad7b6c
	// Params: [ Num(1) Size(0x1) ]
	static void PixUI_SetDrawEffectNoPixelSnapping(uint8_t bNoPixelSnapping);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_SetDefaultFontSize
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad7ad8
	// Params: [ Num(1) Size(0x4) ]
	static void PixUI_SetDefaultFontSize(int32_t nFontSize);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_SetDefaultFont
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad7a3c
	// Params: [ Num(1) Size(0x10) ]
	static void PixUI_SetDefaultFont(struct FString strFontName);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_SetCoreTickDuration
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad79a8
	// Params: [ Num(1) Size(0x4) ]
	static void PixUI_SetCoreTickDuration(int32_t nDurationCount);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_SetCoreLibValidByTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad78c0
	// Params: [ Num(3) Size(0x6) ]
	static uint8_t PixUI_SetCoreLibValidByTag(int32_t nVersionTag, uint8_t bValid);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_SetAutoTick
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad7824
	// Params: [ Num(1) Size(0x1) ]
	static void PixUI_SetAutoTick(uint8_t bAutoTick);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_SetAsyncMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad7788
	// Params: [ Num(1) Size(0x1) ]
	static void PixUI_SetAsyncMode(uint8_t beRunAsyncMode);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_SetAsyncBpCallWaitOutTime
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad76f4
	// Params: [ Num(1) Size(0x4) ]
	static void PixUI_SetAsyncBpCallWaitOutTime(float fTimeOutSecond);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_RHIShaderPlatform
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad76c0
	// Params: [ Num(1) Size(0x4) ]
	static int32_t PixUI_RHIShaderPlatform();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_RHIShaderLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad768c
	// Params: [ Num(1) Size(0x4) ]
	static int32_t PixUI_RHIShaderLevel();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_RemoveSystemFont
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad75f0
	// Params: [ Num(1) Size(0x10) ]
	static void PixUI_RemoveSystemFont(struct FString strFontName);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_PublicCapabilitySwitch
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad7518
	// Params: [ Num(2) Size(0x2) ]
	static void PixUI_PublicCapabilitySwitch(EPxPublicCapability EPxDebugInfo, uint8_t bOpen);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_PrintProfilerInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad7504
	// Params: [ Num(0) Size(0x0) ]
	static void PixUI_PrintProfilerInfo();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_PlatformOSVersionCode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad74d0
	// Params: [ Num(1) Size(0x4) ]
	static float PixUI_PlatformOSVersionCode();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_PlatformOSVersion
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad7438
	// Params: [ Num(1) Size(0x10) ]
	static struct FString PixUI_PlatformOSVersion();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_PlatformCode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad7404
	// Params: [ Num(1) Size(0x4) ]
	static int32_t PixUI_PlatformCode();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_Platform
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad736c
	// Params: [ Num(1) Size(0x10) ]
	static struct FString PixUI_Platform();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_IsSupportTextShape
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad7334
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t PixUI_IsSupportTextShape();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_IsStartUp
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad72fc
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t PixUI_IsStartUp();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_IsRHIShaderVulkan
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad72c4
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t PixUI_IsRHIShaderVulkan();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_IsRHIShaderOpenGLES2
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad728c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t PixUI_IsRHIShaderOpenGLES2();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_IsRHIShaderOpenGL
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad7254
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t PixUI_IsRHIShaderOpenGL();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_IsRHIShaderMetal
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad721c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t PixUI_IsRHIShaderMetal();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_IsRHIShaderDX
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad71e4
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t PixUI_IsRHIShaderDX();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_IsOsBit64
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad71ac
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t PixUI_IsOsBit64();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_IsOsBit32
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad7174
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t PixUI_IsOsBit32();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_IsMobileUseTouchEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad713c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t PixUI_IsMobileUseTouchEvent();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_IsDynamicFixFontSize
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad7104
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t PixUI_IsDynamicFixFontSize();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_IsAutoTick
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad70cc
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t PixUI_IsAutoTick();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_GetWindowSlotObject
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad6fe4
	// Params: [ Num(3) Size(0x20) ]
	static struct UObject* PixUI_GetWindowSlotObject(int32_t nWindowID, struct FString strTagId);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_GetTotalFontCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad6fb0
	// Params: [ Num(1) Size(0x4) ]
	static int32_t PixUI_GetTotalFontCount();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_GetTickIntervalSec
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad6f7c
	// Params: [ Num(1) Size(0x4) ]
	static float PixUI_GetTickIntervalSec();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_GetSupportPxLibVersionTagArray
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ad6ed0
	// Params: [ Num(1) Size(0x10) ]
	static void PixUI_GetSupportPxLibVersionTagArray(struct TArray<int32_t>& arraySupportPxLibVersionTag);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_GetSupportEngineFont
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad6e98
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t PixUI_GetSupportEngineFont();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_GetScriptVMByID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad6df4
	// Params: [ Num(2) Size(0x10) ]
	static struct UPixUIScriptVM* PixUI_GetScriptVMByID(int32_t nScriptVmId);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_GetPxLibDefaultVersionTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad6dc0
	// Params: [ Num(1) Size(0x4) ]
	static int32_t PixUI_GetPxLibDefaultVersionTag();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_GetPixUIWidgetSlotObject
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad6cd8
	// Params: [ Num(3) Size(0x20) ]
	static struct UObject* PixUI_GetPixUIWidgetSlotObject(int32_t nPxWidgetID, struct FString strSlotTagId);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_GetPixUIWidgetByID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad6c34
	// Params: [ Num(2) Size(0x10) ]
	static struct UPixUIWidget* PixUI_GetPixUIWidgetByID(int32_t nPxWidgetID);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_GetPixUIMaxLayerId
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad6c00
	// Params: [ Num(1) Size(0x4) ]
	static int32_t PixUI_GetPixUIMaxLayerId();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_GetPixUIMaxDynamicTextureTotalSize
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad6bcc
	// Params: [ Num(1) Size(0x4) ]
	static int32_t PixUI_GetPixUIMaxDynamicTextureTotalSize();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_GetPixUIMaxDynamicTextureGCSize
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad6b98
	// Params: [ Num(1) Size(0x4) ]
	static int32_t PixUI_GetPixUIMaxDynamicTextureGCSize();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_GetPixUIMaxDynamicTextureGCRate
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad6b64
	// Params: [ Num(1) Size(0x4) ]
	static float PixUI_GetPixUIMaxDynamicTextureGCRate();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_GetMatRootPath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad6acc
	// Params: [ Num(1) Size(0x10) ]
	static struct FString PixUI_GetMatRootPath();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_GetMatBasePath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad6a34
	// Params: [ Num(1) Size(0x10) ]
	static struct FString PixUI_GetMatBasePath();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_GetMatAsyncLoad
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad69fc
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t PixUI_GetMatAsyncLoad();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_GetJsGCThreshold
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad69c8
	// Params: [ Num(1) Size(0x4) ]
	static int32_t PixUI_GetJsGCThreshold();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_GetGradientBrushCallFlushCommands
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad6990
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t PixUI_GetGradientBrushCallFlushCommands();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_GetFontTypeFaceName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad6874
	// Params: [ Num(3) Size(0x28) ]
	static struct FString PixUI_GetFontTypeFaceName(struct FString strFontName, EPxFontFaceType ePxFontTypeFace);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_GetFontPathByIndex
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad679c
	// Params: [ Num(2) Size(0x18) ]
	static struct FString PixUI_GetFontPathByIndex(int32_t nIndex);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_GetFontPath
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ad6698
	// Params: [ Num(3) Size(0x21) ]
	static uint8_t PixUI_GetFontPath(struct FString strFontName, struct FString& strOutFontPath);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_GetFontNameByIndex
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad65c0
	// Params: [ Num(2) Size(0x18) ]
	static struct FString PixUI_GetFontNameByIndex(int32_t nIndex);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_GetExtBpCallSupportThrowException
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad6588
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t PixUI_GetExtBpCallSupportThrowException();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_GetDynamicTextureUpdateMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad6554
	// Params: [ Num(1) Size(0x1) ]
	static EPxDynamicTextureUpdateMode PixUI_GetDynamicTextureUpdateMode();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_GetDynamicTextureFilter
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad6520
	// Params: [ Num(1) Size(0x1) ]
	static ETextureFilter PixUI_GetDynamicTextureFilter();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_GetDrawEffectNoPixelSnapping
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad64e8
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t PixUI_GetDrawEffectNoPixelSnapping();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_GetDefaultFontSize
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ad6444
	// Params: [ Num(1) Size(0x4) ]
	static void PixUI_GetDefaultFontSize(int32_t& nOutFontSize);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_GetDefaultFont
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ad6398
	// Params: [ Num(1) Size(0x10) ]
	static void PixUI_GetDefaultFont(struct FString& strFontName);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_GetCoreTickDuration
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad6364
	// Params: [ Num(1) Size(0x4) ]
	static int32_t PixUI_GetCoreTickDuration();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_GetCoreLibVersionTagByIndex
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad62c0
	// Params: [ Num(2) Size(0x8) ]
	static int32_t PixUI_GetCoreLibVersionTagByIndex(int32_t nIndex);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_GetCoreLibCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad628c
	// Params: [ Num(1) Size(0x4) ]
	static int32_t PixUI_GetCoreLibCount();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_GetCachePath
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ad61e0
	// Params: [ Num(1) Size(0x10) ]
	static void PixUI_GetCachePath(struct FString& strOutCachePath);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_GetAsyncMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad61a8
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t PixUI_GetAsyncMode();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_GetAsyncBpCallWaitOutTime
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad6174
	// Params: [ Num(1) Size(0x4) ]
	static float PixUI_GetAsyncBpCallWaitOutTime();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_FindByWindowID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad60d0
	// Params: [ Num(2) Size(0x10) ]
	static struct UPixUIWidget* PixUI_FindByWindowID(int32_t nWindowID);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_DebugInfoSwitch
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad5ff8
	// Params: [ Num(2) Size(0x2) ]
	static void PixUI_DebugInfoSwitch(EPxDebugInfo EPxDebugInfo, uint8_t bOpen);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_CreateWidget
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad5fc4
	// Params: [ Num(1) Size(0x8) ]
	static struct UPixUIWidget* PixUI_CreateWidget();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_CreateViewPortWidget
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad5f90
	// Params: [ Num(1) Size(0x8) ]
	static struct UPixUIViewPortWidget* PixUI_CreateViewPortWidget();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_CreateViewPortAddToCanvasEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad5eec
	// Params: [ Num(2) Size(0x10) ]
	static struct UPixUIViewPortWidget* PixUI_CreateViewPortAddToCanvasEx(struct UCanvasPanel* pParentCanvas);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_CreateViewPortAddToCanvas
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ad5db0
	// Params: [ Num(4) Size(0x30) ]
	static struct UPixUIViewPortWidget* PixUI_CreateViewPortAddToCanvas(struct UCanvasPanel* pParentCanvas, const struct FAnchors& Anchors, const struct FMargin& Margin);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_CreateScriptVM
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad5d7c
	// Params: [ Num(1) Size(0x8) ]
	static struct UPixUIScriptVM* PixUI_CreateScriptVM();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_CreateAddToCanvasEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad5cd8
	// Params: [ Num(2) Size(0x10) ]
	static struct UPixUIWidget* PixUI_CreateAddToCanvasEx(struct UCanvasPanel* pParentCanvas);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_CreateAddToCanvas
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ad5b9c
	// Params: [ Num(4) Size(0x30) ]
	static struct UPixUIWidget* PixUI_CreateAddToCanvas(struct UCanvasPanel* p_ParentCanvas, const struct FAnchors& Anchors, const struct FMargin& Margin);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_ClearCacheFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad5b88
	// Params: [ Num(0) Size(0x0) ]
	static void PixUI_ClearCacheFile();

	// Object: Function PixUI.PixUIBPLibrary.PixUI_CallPixUIAssetGC
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad5ae0
	// Params: [ Num(2) Size(0x5) ]
	static uint8_t PixUI_CallPixUIAssetGC(int32_t nViewId);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_BePublicCapabilityOpen
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad5a38
	// Params: [ Num(2) Size(0x2) ]
	static uint8_t PixUI_BePublicCapabilityOpen(EPxPublicCapability EPxDebugInfo);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_BeDebugInfoOpen
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad5990
	// Params: [ Num(2) Size(0x2) ]
	static uint8_t PixUI_BeDebugInfoOpen(EPxDebugInfo EPxDebugInfo);

	// Object: Function PixUI.PixUIBPLibrary.PixUI_AddSystemFont
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad58b0
	// Params: [ Num(2) Size(0x20) ]
	static void PixUI_AddSystemFont(struct FString strFontName, struct FString strFontPath);
	DEFINE_UE_CLASS_HELPERS(UPixUIBPLibrary, "PixUIBPLibrary")

};

// Object: Class PixUI.PixUIExternalInterface
// Size: 0x28 (Inherited: 0x28)
struct IPixUIExternalInterface : IInterface
{

	// Object: Function PixUI.PixUIExternalInterface.OnWidgetLoad
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x28) ]
	struct UWidget* OnWidgetLoad(struct FString strWidgetPath, struct FString strWidgetTag);

	// Object: Function PixUI.PixUIExternalInterface.OnSlateBrushLoad
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x18) ]
	struct UPixUIBrushWrapper* OnSlateBrushLoad(struct FString strBrushPath);

	// Object: Function PixUI.PixUIExternalInterface.OnFileLoad
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x21) ]
	uint8_t OnFileLoad(struct FString strFilePath, const struct FDelegate& callDelegate);

	// Object: Function PixUI.PixUIExternalInterface.OnFileCanLoad
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x11) ]
	uint8_t OnFileCanLoad(struct FString strFilePath);
	DEFINE_UE_CLASS_HELPERS(IPixUIExternalInterface, "PixUIExternalInterface")

};

// Object: Class PixUI.PixUIInput
// Size: 0x60 (Inherited: 0x28)
struct UPixUIInput : UObject
{
	struct FDelegate DelegateActivateInput; // 0x28(0x10)
	struct FDelegate DelegateDeactivateInput; // 0x38(0x10)
	uint8_t Pad_0x48[0x18]; // 0x48(0x18)


	// Object: Function PixUI.PixUIInput.OnInputText
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad98c4
	// Params: [ Num(4) Size(0x13) ]
	static void OnInputText(struct FString strInsert, uint8_t bEndInput, uint8_t bLostFocus, uint8_t bReplace);

	// Object: Function PixUI.PixUIInput.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ad9890
	// Params: [ Num(1) Size(0x8) ]
	static struct UPixUIInput* Get();
	DEFINE_UE_CLASS_HELPERS(UPixUIInput, "PixUIInput")

};

// Object: Class PixUI.PixUIRenderTarget
// Size: 0x168 (Inherited: 0x28)
struct UPixUIRenderTarget : UObject
{
	struct FMulticastInlineDelegate DelegateOnCreate; // 0x28(0x10)
	struct FMulticastInlineDelegate DelegateOnClose; // 0x38(0x10)
	struct FMulticastInlineDelegate DelegateOnDestroy; // 0x48(0x10)
	struct FMulticastInlineDelegate DelegateOnLoaded; // 0x58(0x10)
	struct FMulticastInlineDelegate DelegateOnScriptStateInit; // 0x68(0x10)
	struct FMulticastInlineDelegate DelegateOnScriptStateDone; // 0x78(0x10)
	struct FMulticastInlineDelegate DelegateOnInternalError; // 0x88(0x10)
	struct FDelegate DelegateOnExternalOpen; // 0x98(0x10)
	struct FMulticastInlineDelegate DelegateOnExternalClose; // 0xA8(0x10)
	struct FMulticastInlineDelegate DelegateOnMessage; // 0xB8(0x10)
	struct FMulticastInlineDelegate DelegateOnAlert; // 0xC8(0x10)
	struct FDelegate DelegateOnConfirm; // 0xD8(0x10)
	struct FDelegate DelegateOnPrompt; // 0xE8(0x10)
	struct FMulticastInlineDelegate DelegateOnAppForeground; // 0xF8(0x10)
	struct FMulticastInlineDelegate DelegateOnAppBackground; // 0x108(0x10)
	int32_t pxLibVersionTag; // 0x118(0x4)
	uint8_t Pad_0x11C[0x4C]; // 0x11C(0x4C)


	// Object: Function PixUI.PixUIRenderTarget.SetTickIntervalSec
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adaefc
	// Params: [ Num(1) Size(0x4) ]
	void SetTickIntervalSec(float fTickIntervalSec);

	// Object: Function PixUI.PixUIRenderTarget.SetExternalRenderTarget2D
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adae58
	// Params: [ Num(1) Size(0x8) ]
	void SetExternalRenderTarget2D(struct UTextureRenderTarget2D* pTextureRenderTarget);

	// Object: Function PixUI.PixUIRenderTarget.SetBeSupportEventCallNested
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adadac
	// Params: [ Num(1) Size(0x1) ]
	void SetBeSupportEventCallNested(uint8_t bSupportEventCallNested);

	// Object: Function PixUI.PixUIRenderTarget.SetBeDelayCallMessage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adad00
	// Params: [ Num(1) Size(0x1) ]
	void SetBeDelayCallMessage(uint8_t bDelayMessage);

	// Object: Function PixUI.PixUIRenderTarget.SendPxMessage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adac18
	// Params: [ Num(2) Size(0x20) ]
	struct FString SendPxMessage(struct FString strMessage);

	// Object: Function PixUI.PixUIRenderTarget.ReSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adab3c
	// Params: [ Num(2) Size(0x8) ]
	void ReSize(int32_t nNewWidth, int32_t nNewHeight);

	// Object: Function PixUI.PixUIRenderTarget.ReScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adaa98
	// Params: [ Num(1) Size(0x4) ]
	void ReScale(float fScale);

	// Object: Function PixUI.PixUIRenderTarget.PostPxMessage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ada9e4
	// Params: [ Num(2) Size(0x14) ]
	int32_t PostPxMessage(struct FString strMessage);

	// Object: Function PixUI.PixUIRenderTarget.OnExternalTouchEvent
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x8ada8bc
	// Params: [ Num(3) Size(0xD) ]
	void OnExternalTouchEvent(const struct FVector2D& v2dPosTouch, int32_t nPointerIndex, EPxTouchType ETouchType);

	// Object: Function PixUI.PixUIRenderTarget.OnExternalTextInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ada73c
	// Params: [ Num(4) Size(0x13) ]
	void OnExternalTextInput(struct FString strNewInput, uint8_t beEndInput, uint8_t beLostFocus, uint8_t beReplace);

	// Object: Function PixUI.PixUIRenderTarget.OnExternalMouseEvent
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x8ada5c4
	// Params: [ Num(4) Size(0x12) ]
	void OnExternalMouseEvent(const struct FVector2D& v2dPosMouse, const struct FVector2D& v2dOffsetWheel, EPxMouseType eMouseType, EPxKeyEventType uEvent);

	// Object: Function PixUI.PixUIRenderTarget.OnExternalKeyBoardEvent
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ada448
	// Params: [ Num(2) Size(0x39) ]
	void OnExternalKeyBoardEvent(const struct FKeyEvent& KeyEvent, EPxKeyEventType EEventType);

	// Object: Function PixUI.PixUIRenderTarget.OnExternalGamepadEvent
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ada2cc
	// Params: [ Num(2) Size(0x39) ]
	void OnExternalGamepadEvent(const struct FKeyEvent& KeyEvent, EPxKeyEventType EEventType);

	// Object: Function PixUI.PixUIRenderTarget.OnExternalGamepadAnalogEvent
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ada150
	// Params: [ Num(2) Size(0x41) ]
	void OnExternalGamepadAnalogEvent(const struct FAnalogInputEvent& AnalogInputEvent, EPxKeyEventType EEventType);

	// Object: Function PixUI.PixUIRenderTarget.LoadPageFromUrl
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ada09c
	// Params: [ Num(2) Size(0x14) ]
	int32_t LoadPageFromUrl(struct FString strUrl);

	// Object: Function PixUI.PixUIRenderTarget.LoadPageFromGameAssetPath
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ad9fe8
	// Params: [ Num(2) Size(0x14) ]
	int32_t LoadPageFromGameAssetPath(struct FString strAssetPath);

	// Object: Function PixUI.PixUIRenderTarget.LoadPageFromData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ad9ed8
	// Params: [ Num(3) Size(0x24) ]
	int32_t LoadPageFromData(struct TArray<uint8_t>& arrayData, struct FString strBasePath);

	// Object: Function PixUI.PixUIRenderTarget.IsPxViewValid
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ad9ea0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPxViewValid();

	// Object: Function PixUI.PixUIRenderTarget.HistoryGo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ad9dfc
	// Params: [ Num(1) Size(0x4) ]
	void HistoryGo(int32_t nStep);

	// Object: Function PixUI.PixUIRenderTarget.GetRenderTarget2DWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ad9dc8
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetRenderTarget2DWidth();

	// Object: Function PixUI.PixUIRenderTarget.GetRenderTarget2DHeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ad9d94
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetRenderTarget2DHeight();

	// Object: Function PixUI.PixUIRenderTarget.GetRenderTarget2D
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ad9d60
	// Params: [ Num(1) Size(0x8) ]
	struct UTextureRenderTarget2D* GetRenderTarget2D();

	// Object: Function PixUI.PixUIRenderTarget.GetCoreLibVersion
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ad9cc8
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetCoreLibVersion();

	// Object: Function PixUI.PixUIRenderTarget.DestroyPage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ad9cb4
	// Params: [ Num(0) Size(0x0) ]
	void DestroyPage();

	// Object: Function PixUI.PixUIRenderTarget.Create
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ad9a74
	// Params: [ Num(8) Size(0x14) ]
	int32_t Create(int32_t nWidth, int32_t nHeight, float fScale, uint8_t bAsyncModel, uint8_t bCoreLibAsyncModel, uint8_t bGammaSpace, uint8_t bAntiAliasing);

	// Object: Function PixUI.PixUIRenderTarget.ClosePage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ad9a60
	// Params: [ Num(0) Size(0x0) ]
	void ClosePage();
	DEFINE_UE_CLASS_HELPERS(UPixUIRenderTarget, "PixUIRenderTarget")

};

// Object: Class PixUI.PixUIScriptVM
// Size: 0x110 (Inherited: 0x28)
struct UPixUIScriptVM : UObject
{
	struct FMulticastInlineDelegate DelegateOnCreate; // 0x28(0x10)
	struct FMulticastInlineDelegate DelegateOnClose; // 0x38(0x10)
	struct FMulticastInlineDelegate DelegateOnDestroy; // 0x48(0x10)
	struct FMulticastInlineDelegate DelegateOnLoaded; // 0x58(0x10)
	struct FMulticastInlineDelegate DelegateOnScriptStateInit; // 0x68(0x10)
	struct FMulticastInlineDelegate DelegateOnScriptStateDone; // 0x78(0x10)
	struct FMulticastInlineDelegate DelegateOnInternalError; // 0x88(0x10)
	struct FDelegate DelegateOnExternalOpen; // 0x98(0x10)
	struct FMulticastInlineDelegate DelegateOnExternalClose; // 0xA8(0x10)
	struct FMulticastInlineDelegate DelegateOnMessage; // 0xB8(0x10)
	struct FMulticastInlineDelegate DelegateOnAppForeground; // 0xC8(0x10)
	struct FMulticastInlineDelegate DelegateOnAppBackground; // 0xD8(0x10)
	int32_t pxLibVersionTag; // 0xE8(0x4)
	uint8_t Pad_0xEC[0x24]; // 0xEC(0x24)


	// Object: Function PixUI.PixUIScriptVM.SetTickIntervalSec
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adc584
	// Params: [ Num(1) Size(0x4) ]
	void SetTickIntervalSec(float fTickIntervalSec);

	// Object: Function PixUI.PixUIScriptVM.SetScriptGlobalString
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adc450
	// Params: [ Num(3) Size(0x30) ]
	void SetScriptGlobalString(struct FString strName, struct FString StrKey, struct FString strValue);

	// Object: Function PixUI.PixUIScriptVM.SetScriptGlobalNumber
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adc324
	// Params: [ Num(3) Size(0x24) ]
	void SetScriptGlobalNumber(struct FString strName, struct FString StrKey, float fValue);

	// Object: Function PixUI.PixUIScriptVM.SetScriptGlobalBoolean
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adc1f0
	// Params: [ Num(3) Size(0x21) ]
	void SetScriptGlobalBoolean(struct FString strName, struct FString StrKey, uint8_t bValue);

	// Object: Function PixUI.PixUIScriptVM.SetJsGCThreshold
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adc14c
	// Params: [ Num(1) Size(0x4) ]
	void SetJsGCThreshold(int32_t nGCThreshold);

	// Object: Function PixUI.PixUIScriptVM.SetBeSupportEventCallNested
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adc0a0
	// Params: [ Num(1) Size(0x1) ]
	void SetBeSupportEventCallNested(uint8_t bSupportEventCallNested);

	// Object: Function PixUI.PixUIScriptVM.SetBeDelayCallMessage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adbff4
	// Params: [ Num(1) Size(0x1) ]
	void SetBeDelayCallMessage(uint8_t bDelayMessage);

	// Object: Function PixUI.PixUIScriptVM.SendPxMessage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adbed0
	// Params: [ Num(3) Size(0x28) ]
	struct FString SendPxMessage(struct FString strMessage, int32_t nWaitMS);

	// Object: Function PixUI.PixUIScriptVM.PostPxMessage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adbde0
	// Params: [ Num(3) Size(0x18) ]
	int32_t PostPxMessage(struct FString strMessage, int32_t nWaitMS);

	// Object: Function PixUI.PixUIScriptVM.LoadURL
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adbcf0
	// Params: [ Num(3) Size(0x18) ]
	int32_t LoadURL(struct FString strUrl, int32_t nWaitMS);

	// Object: Function PixUI.PixUIScriptVM.IsValid
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adbcb8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsValid();

	// Object: Function PixUI.PixUIScriptVM.IsPxVmValid
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adbc80
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPxVmValid();

	// Object: Function PixUI.PixUIScriptVM.GetScriptGlobalString
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adbb54
	// Params: [ Num(3) Size(0x30) ]
	struct FString GetScriptGlobalString(struct FString strName, struct FString StrKey);

	// Object: Function PixUI.PixUIScriptVM.GetScriptGlobalNumber
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adba5c
	// Params: [ Num(3) Size(0x24) ]
	float GetScriptGlobalNumber(struct FString strName, struct FString StrKey);

	// Object: Function PixUI.PixUIScriptVM.GetScriptGlobalBoolean
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adb960
	// Params: [ Num(3) Size(0x21) ]
	uint8_t GetScriptGlobalBoolean(struct FString strName, struct FString StrKey);

	// Object: Function PixUI.PixUIScriptVM.GetPxVMId
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adb92c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetPxVMId();

	// Object: Function PixUI.PixUIScriptVM.GetCoreLibVersion
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adb894
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetCoreLibVersion();

	// Object: Function PixUI.PixUIScriptVM.DoFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adb7a4
	// Params: [ Num(3) Size(0x18) ]
	int32_t DoFile(struct FString strFilePath, int32_t nWaitMS);

	// Object: Function PixUI.PixUIScriptVM.DoBufferByAssetPath
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adb62c
	// Params: [ Num(5) Size(0x38) ]
	int32_t DoBufferByAssetPath(struct FString strAssetPath, struct FString strName, struct FString strModuleName, int32_t nWaitMS);

	// Object: Function PixUI.PixUIScriptVM.DoBuffer
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8adb458
	// Params: [ Num(6) Size(0x48) ]
	int32_t DoBuffer(const struct TArray<uint8_t>& arrayData, struct FString strBasePath, struct FString strName, struct FString strModuleName, int32_t nWaitMS);

	// Object: Function PixUI.PixUIScriptVM.DestroyVM
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adb3ac
	// Params: [ Num(2) Size(0x8) ]
	int32_t DestroyVM(int32_t nWaitMS);

	// Object: Function PixUI.PixUIScriptVM.CreateScriptGlobal
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adb300
	// Params: [ Num(1) Size(0x10) ]
	void CreateScriptGlobal(struct FString strName);

	// Object: Function PixUI.PixUIScriptVM.CreateEx
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adb1c4
	// Params: [ Num(4) Size(0xC) ]
	int32_t CreateEx(uint8_t bAsyncMode, uint8_t bCoreLibAsyncMode, int32_t nWaitMS);

	// Object: Function PixUI.PixUIScriptVM.Create
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adb0cc
	// Params: [ Num(3) Size(0xC) ]
	int32_t Create(uint8_t bAsyncMode, int32_t nWaitMS);

	// Object: Function PixUI.PixUIScriptVM.CloseVM
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adb020
	// Params: [ Num(2) Size(0x8) ]
	int32_t CloseVM(int32_t nWaitMS);
	DEFINE_UE_CLASS_HELPERS(UPixUIScriptVM, "PixUIScriptVM")

};

// Object: Class PixUI.PixUIViewPortWidget
// Size: 0x330 (Inherited: 0x2F8)
struct UPixUIViewPortWidget : UUserWidget
{
	struct FDelegate PixUIWidgetOpenDelegate; // 0x2F8(0x10)
	struct FDelegate PixUIWidgetConfirmDelegate; // 0x308(0x10)
	struct FDelegate PixUIWidgetPromptDelegate; // 0x318(0x10)
	uint8_t Pad_0x328[0x8]; // 0x328(0x8)


	// Object: Function PixUI.PixUIViewPortWidget.SendPxMessage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8addef0
	// Params: [ Num(2) Size(0x20) ]
	struct FString SendPxMessage(struct FString strMessage);

	// Object: Function PixUI.PixUIViewPortWidget.PostPxViewMessage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adde44
	// Params: [ Num(1) Size(0x10) ]
	void PostPxViewMessage(struct FString strMessage);

	// Object: Function PixUI.PixUIViewPortWidget.PostPxMessage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8addd90
	// Params: [ Num(2) Size(0x14) ]
	int32_t PostPxMessage(struct FString strMessage);

	// Object: Function PixUI.PixUIViewPortWidget.OnPixUITransformDelegate
	// Flags: [Final|Native|Public]
	// Offset: 0x8addc78
	// Params: [ Num(3) Size(0xC) ]
	void OnPixUITransformDelegate(EPxWidgetTransformType EPxWidgetTransformType, int32_t nParam1, int32_t nParam2);

	// Object: Function PixUI.PixUIViewPortWidget.OnPixUIPromptDelegate
	// Flags: [Final|Native|Public]
	// Offset: 0x8addb4c
	// Params: [ Num(3) Size(0x30) ]
	struct FString OnPixUIPromptDelegate(struct FString strTip, struct FString strDefault);

	// Object: Function PixUI.PixUIViewPortWidget.OnPixUIOpenDelegate
	// Flags: [Final|Native|Public]
	// Offset: 0x8add9cc
	// Params: [ Num(5) Size(0x38) ]
	int32_t OnPixUIOpenDelegate(struct FString strUrl, struct FString strName, struct FString strFeatures, uint8_t bReplace);

	// Object: Function PixUI.PixUIViewPortWidget.OnPixUIConfirmDelegate
	// Flags: [Final|Native|Public]
	// Offset: 0x8add914
	// Params: [ Num(2) Size(0x11) ]
	uint8_t OnPixUIConfirmDelegate(struct FString strConfirmMsg);

	// Object: Function PixUI.PixUIViewPortWidget.LoadPxViewFromUrl
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8add860
	// Params: [ Num(2) Size(0x14) ]
	int32_t LoadPxViewFromUrl(struct FString strUrl);

	// Object: Function PixUI.PixUIViewPortWidget.LoadPxViewFromGameAssetPath
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8add7ac
	// Params: [ Num(2) Size(0x14) ]
	int32_t LoadPxViewFromGameAssetPath(struct FString strAssetPath);

	// Object: Function PixUI.PixUIViewPortWidget.LoadPxViewFromData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8add69c
	// Params: [ Num(3) Size(0x24) ]
	int32_t LoadPxViewFromData(struct TArray<uint8_t>& arrayData, struct FString strRootPath);

	// Object: Function PixUI.PixUIViewPortWidget.LoadPageFromUrl
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8add5e8
	// Params: [ Num(2) Size(0x14) ]
	int32_t LoadPageFromUrl(struct FString strUrl);

	// Object: Function PixUI.PixUIViewPortWidget.LoadPageFromGameAssetPath
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8add534
	// Params: [ Num(2) Size(0x14) ]
	int32_t LoadPageFromGameAssetPath(struct FString strAssetPath);

	// Object: Function PixUI.PixUIViewPortWidget.LoadPageFromData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8add424
	// Params: [ Num(3) Size(0x24) ]
	int32_t LoadPageFromData(struct TArray<uint8_t>& arrayData, struct FString strRootPath);

	// Object: Function PixUI.PixUIViewPortWidget.GetPixUIWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8add3f0
	// Params: [ Num(1) Size(0x8) ]
	struct UPixUIWidget* GetPixUIWidget();

	// Object: Function PixUI.PixUIViewPortWidget.ClosePxView
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8add3dc
	// Params: [ Num(0) Size(0x0) ]
	void ClosePxView();

	// Object: Function PixUI.PixUIViewPortWidget.ClosePage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8add3c8
	// Params: [ Num(0) Size(0x0) ]
	void ClosePage();
	DEFINE_UE_CLASS_HELPERS(UPixUIViewPortWidget, "PixUIViewPortWidget")

};

// Object: Class PixUI.PixUIWidget
// Size: 0x3E8 (Inherited: 0x1D0)
struct UPixUIWidget : UCanvasPanel
{
	uint8_t Pad_0x1D0[0x8]; // 0x1D0(0x8)
	struct FMulticastInlineDelegate DelegateOnCreate; // 0x1D8(0x10)
	struct FMulticastInlineDelegate DelegateOnClose; // 0x1E8(0x10)
	struct FMulticastInlineDelegate DelegateOnDestroy; // 0x1F8(0x10)
	struct FMulticastInlineDelegate DelegateOnLoaded; // 0x208(0x10)
	struct FMulticastInlineDelegate DelegateOnScriptStateInit; // 0x218(0x10)
	struct FMulticastInlineDelegate DelegateOnScriptStateDone; // 0x228(0x10)
	struct FMulticastInlineDelegate DelegateOnInternalError; // 0x238(0x10)
	struct FDelegate DelegateOnExternalOpen; // 0x248(0x10)
	struct FMulticastInlineDelegate DelegateOnExternalClose; // 0x258(0x10)
	struct FMulticastInlineDelegate DelegateOnMessage; // 0x268(0x10)
	struct FMulticastInlineDelegate DelegateOnAlert; // 0x278(0x10)
	struct FDelegate DelegateOnConfirm; // 0x288(0x10)
	struct FDelegate DelegateOnPrompt; // 0x298(0x10)
	struct FMulticastInlineDelegate DelegateOnTransform; // 0x2A8(0x10)
	struct FMulticastInlineDelegate DelegateOnAppForeground; // 0x2B8(0x10)
	struct FMulticastInlineDelegate DelegateOnAppBackground; // 0x2C8(0x10)
	struct FDelegate DelegateHookKeyEvent; // 0x2D8(0x10)
	int32_t pxLibVersionTag; // 0x2E8(0x4)
	uint8_t bIsAsync : 1; // 0x2EC(0x1), Mask(0x1)
	uint8_t BitPad_0x2EC_1 : 7; // 0x2EC(0x1)
	uint8_t bIsCoreLibAsync : 1; // 0x2ED(0x1), Mask(0x1)
	uint8_t BitPad_0x2ED_1 : 7; // 0x2ED(0x1)
	uint8_t bIsForcePaint : 1; // 0x2EE(0x1), Mask(0x1)
	uint8_t BitPad_0x2EE_1 : 7; // 0x2EE(0x1)
	uint8_t bIsLazyReleaseMode : 1; // 0x2EF(0x1), Mask(0x1)
	uint8_t BitPad_0x2EF_1 : 7; // 0x2EF(0x1)
	EPxWidgetBatchType BatchType; // 0x2F0(0x1)
	uint8_t Pad_0x2F1[0x7]; // 0x2F1(0x7)
	struct FText TextDefaultUrl; // 0x2F8(0x18)
	uint8_t bIsStateNodeMode : 1; // 0x310(0x1), Mask(0x1)
	uint8_t BitPad_0x310_1 : 7; // 0x310(0x1)
	uint8_t bIsRHIRender : 1; // 0x311(0x1), Mask(0x1)
	uint8_t BitPad_0x311_1 : 7; // 0x311(0x1)
	uint8_t bIsRHIRenderAntiAliasing : 1; // 0x312(0x1), Mask(0x1)
	uint8_t BitPad_0x312_1 : 7; // 0x312(0x1)
	uint8_t bPxSlotTopHit : 1; // 0x313(0x1), Mask(0x1)
	uint8_t BitPad_0x313_1 : 7; // 0x313(0x1)
	uint8_t bIsRetainMode : 1; // 0x314(0x1), Mask(0x1)
	uint8_t BitPad_0x314_1 : 7; // 0x314(0x1)
	uint8_t bNoPixelSnapping : 1; // 0x315(0x1), Mask(0x1)
	uint8_t BitPad_0x315_1 : 7; // 0x315(0x1)
	uint8_t Pad_0x316[0xD2]; // 0x316(0xD2)


	// Object: Function PixUI.PixUIWidget.ShowNextDrawItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adfeb0
	// Params: [ Num(0) Size(0x0) ]
	void ShowNextDrawItem();

	// Object: Function PixUI.PixUIWidget.ShowNextDrawBatch
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adfe9c
	// Params: [ Num(0) Size(0x0) ]
	void ShowNextDrawBatch();

	// Object: Function PixUI.PixUIWidget.ShowAllDrawItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adfe88
	// Params: [ Num(0) Size(0x0) ]
	void ShowAllDrawItem();

	// Object: Function PixUI.PixUIWidget.ShowAllDrawBatch
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adfe74
	// Params: [ Num(0) Size(0x0) ]
	void ShowAllDrawBatch();

	// Object: Function PixUI.PixUIWidget.SetTickMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adfdd0
	// Params: [ Num(1) Size(0x1) ]
	void SetTickMode(EPxTickMode eTickMode);

	// Object: Function PixUI.PixUIWidget.SetTickIntervalSec
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adfd2c
	// Params: [ Num(1) Size(0x4) ]
	void SetTickIntervalSec(float fTickIntervalSec);

	// Object: Function PixUI.PixUIWidget.SetScriptGlobalString
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adfbf8
	// Params: [ Num(3) Size(0x30) ]
	void SetScriptGlobalString(struct FString strName, struct FString StrKey, struct FString strValue);

	// Object: Function PixUI.PixUIWidget.SetScriptGlobalNumber
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adfacc
	// Params: [ Num(3) Size(0x24) ]
	void SetScriptGlobalNumber(struct FString strName, struct FString StrKey, float fValue);

	// Object: Function PixUI.PixUIWidget.SetScriptGlobalBoolean
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adf998
	// Params: [ Num(3) Size(0x21) ]
	void SetScriptGlobalBoolean(struct FString strName, struct FString StrKey, uint8_t bValue);

	// Object: Function PixUI.PixUIWidget.SetJsGCThreshold
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adf8f4
	// Params: [ Num(1) Size(0x4) ]
	void SetJsGCThreshold(int32_t nGCThreshold);

	// Object: Function PixUI.PixUIWidget.SetBeSupportEventCallNested
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adf848
	// Params: [ Num(1) Size(0x1) ]
	void SetBeSupportEventCallNested(uint8_t bSupportEventCallNested);

	// Object: Function PixUI.PixUIWidget.SetBeDelayCallMessage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adf79c
	// Params: [ Num(1) Size(0x1) ]
	void SetBeDelayCallMessage(uint8_t bDelayMessage);

	// Object: Function PixUI.PixUIWidget.SetBackgroundBlur
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adf6f8
	// Params: [ Num(1) Size(0x4) ]
	void SetBackgroundBlur(float fBlurStrength);

	// Object: Function PixUI.PixUIWidget.SetAutoTransform
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adf64c
	// Params: [ Num(1) Size(0x1) ]
	void SetAutoTransform(uint8_t bAutoTransform);

	// Object: Function PixUI.PixUIWidget.SendPxMessage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adf564
	// Params: [ Num(2) Size(0x20) ]
	struct FString SendPxMessage(struct FString strMessage);

	// Object: Function PixUI.PixUIWidget.PostPxMessage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adf4b0
	// Params: [ Num(2) Size(0x14) ]
	int32_t PostPxMessage(struct FString strMessage);

	// Object: Function PixUI.PixUIWidget.OpenPageFromUrl
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adf3fc
	// Params: [ Num(2) Size(0x14) ]
	int32_t OpenPageFromUrl(struct FString strUrl);

	// Object: Function PixUI.PixUIWidget.OpenPageFromGameAssetPath
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adf348
	// Params: [ Num(2) Size(0x14) ]
	int32_t OpenPageFromGameAssetPath(struct FString strAssetPath);

	// Object: Function PixUI.PixUIWidget.OpenPageFromData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8adf238
	// Params: [ Num(3) Size(0x24) ]
	int32_t OpenPageFromData(struct TArray<uint8_t>& arrayData, struct FString strBasePath);

	// Object: Function PixUI.PixUIWidget.OnExternalTouchEvent
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x8adf110
	// Params: [ Num(3) Size(0xD) ]
	void OnExternalTouchEvent(const struct FVector2D& v2dPosTouch, int32_t nPointerIndex, EPxTouchType ETouchType);

	// Object: Function PixUI.PixUIWidget.OnExternalTextInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8adef90
	// Params: [ Num(4) Size(0x13) ]
	void OnExternalTextInput(struct FString strNewInput, uint8_t beEndInput, uint8_t beLostFocus, uint8_t beReplace);

	// Object: Function PixUI.PixUIWidget.OnExternalMouseEvent
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x8adee18
	// Params: [ Num(4) Size(0x12) ]
	void OnExternalMouseEvent(const struct FVector2D& v2dPosMouse, const struct FVector2D& v2dOffsetWheel, EPxMouseType eMouseType, EPxKeyEventType uEvent);

	// Object: Function PixUI.PixUIWidget.OnExternalKeyBoardEvent
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8adec9c
	// Params: [ Num(2) Size(0x39) ]
	void OnExternalKeyBoardEvent(const struct FKeyEvent& KeyEvent, EPxKeyEventType EEventType);

	// Object: Function PixUI.PixUIWidget.OnExternalGamepadEvent
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8adeb20
	// Params: [ Num(2) Size(0x39) ]
	void OnExternalGamepadEvent(const struct FKeyEvent& KeyEvent, EPxKeyEventType EEventType);

	// Object: Function PixUI.PixUIWidget.OnExternalGamepadAnalogEvent
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ade9a4
	// Params: [ Num(2) Size(0x41) ]
	void OnExternalGamepadAnalogEvent(const struct FAnalogInputEvent& AnalogInputEvent, EPxKeyEventType EEventType);

	// Object: Function PixUI.PixUIWidget.LoadPageFromUrl
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ade8f0
	// Params: [ Num(2) Size(0x14) ]
	int32_t LoadPageFromUrl(struct FString strUrl);

	// Object: Function PixUI.PixUIWidget.LoadPageFromGameAssetPath
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ade83c
	// Params: [ Num(2) Size(0x14) ]
	int32_t LoadPageFromGameAssetPath(struct FString strAssetPath);

	// Object: Function PixUI.PixUIWidget.LoadPageFromData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ade72c
	// Params: [ Num(3) Size(0x24) ]
	int32_t LoadPageFromData(struct TArray<uint8_t>& arrayData, struct FString strBasePath);

	// Object: Function PixUI.PixUIWidget.IsPxViewValid
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ade6f4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPxViewValid();

	// Object: Function PixUI.PixUIWidget.HistoryGo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ade650
	// Params: [ Num(1) Size(0x4) ]
	void HistoryGo(int32_t nStep);

	// Object: Function PixUI.PixUIWidget.GetSlotObjectByTagId
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ade59c
	// Params: [ Num(2) Size(0x18) ]
	struct UObject* GetSlotObjectByTagId(struct FString strSlotTagId);

	// Object: Function PixUI.PixUIWidget.GetScriptGlobalString
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ade470
	// Params: [ Num(3) Size(0x30) ]
	struct FString GetScriptGlobalString(struct FString strName, struct FString StrKey);

	// Object: Function PixUI.PixUIWidget.GetScriptGlobalNumber
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ade378
	// Params: [ Num(3) Size(0x24) ]
	float GetScriptGlobalNumber(struct FString strName, struct FString StrKey);

	// Object: Function PixUI.PixUIWidget.GetScriptGlobalBoolean
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ade27c
	// Params: [ Num(3) Size(0x21) ]
	uint8_t GetScriptGlobalBoolean(struct FString strName, struct FString StrKey);

	// Object: Function PixUI.PixUIWidget.GetPxWinId
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ade248
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetPxWinId();

	// Object: Function PixUI.PixUIWidget.GetCtrlWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ade214
	// Params: [ Num(1) Size(0x8) ]
	struct UWidget* GetCtrlWidget();

	// Object: Function PixUI.PixUIWidget.GetCoreLibVersion
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ade17c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetCoreLibVersion();

	// Object: Function PixUI.PixUIWidget.DestroyPage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ade168
	// Params: [ Num(0) Size(0x0) ]
	void DestroyPage();

	// Object: Function PixUI.PixUIWidget.CreateScriptGlobal
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ade0bc
	// Params: [ Num(1) Size(0x10) ]
	void CreateScriptGlobal(struct FString strName);

	// Object: Function PixUI.PixUIWidget.ClosePage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ade0a8
	// Params: [ Num(0) Size(0x0) ]
	void ClosePage();
	DEFINE_UE_CLASS_HELPERS(UPixUIWidget, "PixUIWidget")

};

// Object: Class PixUI.PxCustomDelegate
// Size: 0x88 (Inherited: 0x28)
struct UPxCustomDelegate : UObject
{
	uint8_t Pad_0x28[0x60]; // 0x28(0x60)


	// Object: Function PixUI.PxCustomDelegate.OnPxCustomDelegate
	// Flags: [Final|Native|Public]
	// Offset: 0x8ae005c
	// Params: [ Num(0) Size(0x0) ]
	void OnPxCustomDelegate();

	// Object: Function PixUI.PxCustomDelegate.MakeCustomDelegate
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8adffb0
	// Params: [ Num(2) Size(0x18) ]
	static struct UPxCustomDelegate* MakeCustomDelegate(struct FString strCustomDelegateName);
	DEFINE_UE_CLASS_HELPERS(UPxCustomDelegate, "PxCustomDelegate")

};

// Object: Class PixUI.PxCustomInterfaceDyImp
// Size: 0xD0 (Inherited: 0x28)
struct UPxCustomInterfaceDyImp : UObject
{
	uint8_t Pad_0x28[0xA8]; // 0x28(0xA8)


	// Object: Function PixUI.PxCustomInterfaceDyImp.MakeCustomInterface
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ae0078
	// Params: [ Num(3) Size(0x20) ]
	static struct UPxCustomInterfaceDyImp* MakeCustomInterface(struct FString strCustomInterfaceName, struct UObject* pOverrideBaseClass);
	DEFINE_UE_CLASS_HELPERS(UPxCustomInterfaceDyImp, "PxCustomInterfaceDyImp")

};

// Object: Class PixUI.PxFileLoad
// Size: 0x90 (Inherited: 0x28)
struct UPxFileLoad : UObject
{
	uint8_t Pad_0x28[0x68]; // 0x28(0x68)


	// Object: Function PixUI.PxFileLoad.OnFileLoad
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x1090680c
	// Params: [ Num(1) Size(0x10) ]
	void OnFileLoad(const struct TArray<uint8_t>& arrayFileData);
	DEFINE_UE_CLASS_HELPERS(UPxFileLoad, "PxFileLoad")

};

// Object: Class PixUI.PxSubLayerWidget
// Size: 0x450 (Inherited: 0x158)
struct UPxSubLayerWidget : UWidget
{
	uint8_t Pad_0x158[0x2F8]; // 0x158(0x2F8)
	DEFINE_UE_CLASS_HELPERS(UPxSubLayerWidget, "PxSubLayerWidget")

};

// Object: Class PixUI.PxSubCtrlWidget
// Size: 0x460 (Inherited: 0x450)
struct UPxSubCtrlWidget : UPxSubLayerWidget
{
	uint8_t Pad_0x450[0x10]; // 0x450(0x10)
	DEFINE_UE_CLASS_HELPERS(UPxSubCtrlWidget, "PxSubCtrlWidget")

};

// Object: Class PixUI.PxSubNodeWidget
// Size: 0x450 (Inherited: 0x158)
struct UPxSubNodeWidget : UWidget
{
	uint8_t Pad_0x158[0x2F8]; // 0x158(0x2F8)
	DEFINE_UE_CLASS_HELPERS(UPxSubNodeWidget, "PxSubNodeWidget")

};

} // namespace SDK
