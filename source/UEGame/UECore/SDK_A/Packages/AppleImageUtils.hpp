#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: AppleImageUtils
// Enums: 2
// Structs: 1
// Classes: 2

struct UTexture;
struct FAppleImageUtilsImageConversionResult;
struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy;
struct IAppleImageInterface;

// Object: Enum AppleImageUtils.EAppleTextureType
enum class EAppleTextureType : uint8_t
{
	Unknown = 0,
	Image = 1,
	PixelBuffer = 2,
	Surface = 3,
	MetalTexture = 4,
	EAppleTextureType_MAX = 5
};

// Object: Enum AppleImageUtils.ETextureRotationDirection
enum class ETextureRotationDirection : uint8_t
{
	None = 0,
	Left = 1,
	Right = 2,
	Down = 3,
	ETextureRotationDirection_MAX = 4
};

// Object: ScriptStruct AppleImageUtils.AppleImageUtilsImageConversionResult
// Size: 0x20 (Inherited: 0x0)
struct FAppleImageUtilsImageConversionResult
{
	struct FString Error; // 0x0(0x10)
	struct TArray<uint8_t> ImageData; // 0x10(0x10)
};

// Object: Class AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy
// Size: 0x88 (Inherited: 0x28)
struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAppleImageUtilsBaseAsyncTaskBlueprintProxy, "AppleImageUtilsBaseAsyncTaskBlueprintProxy")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	uint8_t Pad_0x50[0x10]; // 0x50(0x10)
	struct FAppleImageUtilsImageConversionResult ConversionResult; // 0x60(0x20)
	uint8_t Pad_0x80[0x8]; // 0x80(0x8)

	// Object: Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToTIFF
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8e73ccc
	// Params: [ Num(6) Size(0x20) ]
	static struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToTIFF(struct UTexture* SourceImage, uint8_t bWantColor, uint8_t bUseGpu, float Scale, ETextureRotationDirection Rotate);

	// Object: Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToPNG
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8e73b20
	// Params: [ Num(6) Size(0x20) ]
	static struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToPNG(struct UTexture* SourceImage, uint8_t bWantColor, uint8_t bUseGpu, float Scale, ETextureRotationDirection Rotate);

	// Object: Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToJPEG
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8e73938
	// Params: [ Num(7) Size(0x20) ]
	static struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToJPEG(struct UTexture* SourceImage, int32_t Quality, uint8_t bWantColor, uint8_t bUseGpu, float Scale, ETextureRotationDirection Rotate);

	// Object: Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToHEIF
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8e73750
	// Params: [ Num(7) Size(0x20) ]
	static struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToHEIF(struct UTexture* SourceImage, int32_t Quality, uint8_t bWantColor, uint8_t bUseGpu, float Scale, ETextureRotationDirection Rotate);
};

// Object: Class AppleImageUtils.AppleImageInterface
// Size: 0x28 (Inherited: 0x28)
struct IAppleImageInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IAppleImageInterface, "AppleImageInterface")
};

} // namespace SDK
