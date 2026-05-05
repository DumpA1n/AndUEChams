#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: DFScreenShotTool
// Enums: 0
// Structs: 0
// Classes: 2

enum class ECdnDownResult : uint8_t;
struct UDFImage;
struct UGameInstance;
struct UTexture2D;
struct UWidget;
struct UDFScreenShotRequest;
struct UDFScreenShotToolManager;

// Object: Class DFScreenShotTool.DFScreenShotRequest
// Size: 0x68 (Inherited: 0x28)
struct UDFScreenShotRequest : UObject
{
	DEFINE_UE_CLASS_HELPERS(UDFScreenShotRequest, "DFScreenShotRequest")

	struct FMulticastInlineDelegate DFMScreenshotFinishDelegate; // 0x28(0x10)
	struct UTexture2D* NoWatermarkScreenShot; // 0x38(0x8)
	struct UTexture2D* WithWatermarkScreenShot; // 0x40(0x8)
	uint8_t Pad_0x48[0x20]; // 0x48(0x20)

	// Object: Function DFScreenShotTool.DFScreenShotRequest.OnScreenShotCapturedSpliceWatermark
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7a488f4
	// Params: [ Num(5) Size(0x30) ]
	void OnScreenShotCapturedSpliceWatermark(int32_t InSizeX, int32_t InSizeY, const struct TArray<struct FColor>& InImageData, struct FString ScreenshotName, struct UGameInstance* GameInstance);

	// Object: Function DFScreenShotTool.DFScreenShotRequest.LoadStaticWatermarkImageSource
	// Flags: [Final|Native|Public]
	// Offset: 0x7a48814
	// Params: [ Num(2) Size(0x5) ]
	void LoadStaticWatermarkImageSource(int32_t HashCode, ECdnDownResult Result);

	// Object: Function DFScreenShotTool.DFScreenShotRequest.GenerateScreenShotSpliceWatermark
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a48608
	// Params: [ Num(4) Size(0x30) ]
	void GenerateScreenShotSpliceWatermark(struct UGameInstance* GameInstance, uint8_t bInShowUI, struct FString ScreenshotName, struct FString ImgKey);

	// Object: Function DFScreenShotTool.DFScreenShotRequest.GenerateScreenShotCropByWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a48404
	// Params: [ Num(5) Size(0x29) ]
	void GenerateScreenShotCropByWidget(struct UGameInstance* GameInstance, uint8_t bInShowUI, struct FString ScreenshotName, struct UWidget* WidgetIns, uint8_t WithWaterMark);

	// Object: Function DFScreenShotTool.DFScreenShotRequest.GenerateScreenShot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a4823c
	// Params: [ Num(4) Size(0x21) ]
	void GenerateScreenShot(struct UGameInstance* GameInstance, uint8_t bInShowUI, struct FString ScreenshotName, uint8_t WithWaterMark);

	// Object: Function DFScreenShotTool.DFScreenShotRequest.ApplyGetCDNWatermarkResource
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a48144
	// Params: [ Num(1) Size(0x10) ]
	void ApplyGetCDNWatermarkResource(struct FString ImgKey);
};

// Object: Class DFScreenShotTool.DFScreenShotToolManager
// Size: 0x48 (Inherited: 0x30)
struct UDFScreenShotToolManager : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UDFScreenShotToolManager, "DFScreenShotToolManager")

	struct FMulticastInlineDelegate BusinessScreenshotFinishDelegate; // 0x30(0x10)
	struct UDFScreenShotRequest* TheDFScreenshotReq; // 0x40(0x8)

	// Object: Function DFScreenShotTool.DFScreenShotToolManager.OnDFMScreenshotFinishDelegate
	// Flags: [Final|Native|Public]
	// Offset: 0x7a49404
	// Params: [ Num(2) Size(0x11) ]
	void OnDFMScreenshotFinishDelegate(struct FString ScreenshotName, uint8_t WithWaterMark);

	// Object: Function DFScreenShotTool.DFScreenShotToolManager.GetScreenshotFilePath
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a492d0
	// Params: [ Num(2) Size(0x20) ]
	struct FString GetScreenshotFilePath(struct FString ScreenshotName);

	// Object: Function DFScreenShotTool.DFScreenShotToolManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1076bfe0
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFScreenShotToolManager* Get(struct UObject* GameInst);

	// Object: Function DFScreenShotTool.DFScreenShotToolManager.GenerateScreenShotSpliceWatermark
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a4910c
	// Params: [ Num(3) Size(0x28) ]
	void GenerateScreenShotSpliceWatermark(uint8_t bInShowUI, struct FString ScreenshotName, struct FString ImgKey);

	// Object: Function DFScreenShotTool.DFScreenShotToolManager.GenerateScreenShotCropByWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a48f48
	// Params: [ Num(4) Size(0x21) ]
	void GenerateScreenShotCropByWidget(uint8_t bInShowUI, struct FString ScreenshotName, struct UWidget* WidgetIns, uint8_t WithWaterMark);

	// Object: Function DFScreenShotTool.DFScreenShotToolManager.GenerateScreenShot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a48dc0
	// Params: [ Num(3) Size(0x19) ]
	void GenerateScreenShot(uint8_t bInShowUI, struct FString ScreenshotName, uint8_t WithWaterMark);

	// Object: Function DFScreenShotTool.DFScreenShotToolManager.DisplayScreenShot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a48cd8
	// Params: [ Num(2) Size(0x9) ]
	void DisplayScreenShot(struct UDFImage* Image, uint8_t WithWaterMark);

	// Object: Function DFScreenShotTool.DFScreenShotToolManager.DFMReqLoadCDNWatermarkImg
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf41b0b0
	// Params: [ Num(1) Size(0x10) ]
	void DFMReqLoadCDNWatermarkImg(struct FString ImgKey);

	// Object: Function DFScreenShotTool.DFScreenShotToolManager.DeleteTheScreenshotObject
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a48cc4
	// Params: [ Num(0) Size(0x0) ]
	void DeleteTheScreenshotObject();

	// Object: Function DFScreenShotTool.DFScreenShotToolManager.DeleteScreenshotDir
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a48cb0
	// Params: [ Num(0) Size(0x0) ]
	void DeleteScreenshotDir();
};

} // namespace SDK
