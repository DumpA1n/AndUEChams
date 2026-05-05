#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: UIClipMap
// Enums: 2
// Structs: 0
// Classes: 3

enum class ETextureCompressionSettings : uint8_t;
struct UImage;
struct UMaterialInstanceDynamic;
struct UTexture2D;
struct UUIClipMapTestWidget;
struct UUIClipMapTexture;
struct UUIClipMapWrapper;

// Object: Enum UIClipMap.PackageClipMapMethod
enum class EPackageClipMapMethod : uint8_t
{
	EP_Default = 0,
	EP_PCOnly = 1,
	EP_MAX = 2
};

// Object: Enum UIClipMap.EOriginTextureSizeType
enum class EOriginTextureSizeType : uint8_t
{
	TS_None = 0,
	TS_8k = 1,
	TS_4k = 2,
	TS_MAX = 3
};

// Object: Class UIClipMap.UIClipMapTestWidget
// Size: 0x338 (Inherited: 0x2F8)
struct UUIClipMapTestWidget : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UUIClipMapTestWidget, "UIClipMapTestWidget")

	uint8_t Pad_0x2F8[0x8]; // 0x2F8(0x8)
	struct UUIClipMapTexture* ClipMapTexture; // 0x300(0x8)
	struct FName ParamClipMapTex; // 0x308(0x8)
	float UpdateTime; // 0x310(0x4)
	uint8_t Pad_0x314[0x4]; // 0x314(0x4)
	struct UImage* Img_ClipMap; // 0x318(0x8)
	struct UMaterialInstanceDynamic* ClipMapMat; // 0x320(0x8)
	uint8_t Pad_0x328[0x10]; // 0x328(0x10)
};

// Object: Class UIClipMap.UIClipMapTexture
// Size: 0x430 (Inherited: 0x130)
struct UUIClipMapTexture : UTexture
{
	DEFINE_UE_CLASS_HELPERS(UUIClipMapTexture, "UIClipMapTexture")

	struct FIntPoint OriginTextureSize; // 0x130(0x8)
	uint8_t ForceCompressionNoAlpha : 1; // 0x138(0x1), Mask(0x1)
	uint8_t BitPad_0x138_1 : 7; // 0x138(0x1)
	ETextureCompressionSettings ForceCompressionSettings; // 0x139(0x1)
	EPackageClipMapMethod PackageMethod; // 0x13A(0x1)
	uint8_t bSubTextureUseClampAddress : 1; // 0x13B(0x1), Mask(0x1)
	uint8_t BitPad_0x13B_1 : 7; // 0x13B(0x1)
	uint8_t bGenerateSubTextureButton : 1; // 0x13C(0x1), Mask(0x1)
	uint8_t BitPad_0x13C_1 : 7; // 0x13C(0x1)
	uint8_t Pad_0x13D[0x3]; // 0x13D(0x3)
	float PSNR_THRESHOLD; // 0x140(0x4)
	uint8_t bLogAllMipTexture : 1; // 0x144(0x1), Mask(0x1)
	uint8_t BitPad_0x144_1 : 7; // 0x144(0x1)
	uint8_t Pad_0x145[0x3]; // 0x145(0x3)
	struct FIntPoint PatchCountXY; // 0x148(0x8)
	int32_t PatchSize; // 0x150(0x4)
	struct FIntPoint ClipMapSizeXY; // 0x154(0x8)
	struct FIntPoint ReservedPatchCountXY; // 0x15C(0x8)
	int32_t MaxMipCount; // 0x164(0x4)
	EPixelFormat CachedPF; // 0x168(0x1)
	uint8_t Pad_0x169[0x7]; // 0x169(0x7)
	struct TArray<struct FIntPoint> SizeInPatches; // 0x170(0x10)
	struct TMap<struct FIntVector, struct TSoftObjectPtr<UTexture2D>> SubTexture; // 0x180(0x50)
	struct TMap<struct FIntVector, struct TSoftObjectPtr<UTexture2D>> EventSubTexture; // 0x1D0(0x50)
	struct TMap<struct FIntVector, struct UTexture2D*> BackupTextures; // 0x220(0x50)
	struct TMap<struct FIntVector, struct UTexture2D*> EventBackupTextures; // 0x270(0x50)
	struct TSet<struct FIntVector> VariantPatchIds; // 0x2C0(0x50)
	uint8_t bFillSubTextureForPack : 1; // 0x310(0x1), Mask(0x1)
	uint8_t BitPad_0x310_1 : 7; // 0x310(0x1)
	uint8_t Pad_0x311[0x7]; // 0x311(0x7)
	struct TArray<struct TSoftObjectPtr<UTexture2D>> SubTextureForPack; // 0x318(0x10)
	uint8_t bEnableMip0 : 1; // 0x328(0x1), Mask(0x1)
	uint8_t BitPad_0x328_1 : 7; // 0x328(0x1)
	uint8_t Pad_0x329[0x3]; // 0x329(0x3)
	int32_t SamplerFilter; // 0x32C(0x4)
	uint8_t Pad_0x330[0x100]; // 0x330(0x100)

	// Object: Function UIClipMap.UIClipMapTexture.SetUseEventLayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d12604
	// Params: [ Num(1) Size(0x1) ]
	void SetUseEventLayer(uint8_t bUseEvent);

	// Object: Function UIClipMap.UIClipMapTexture.IsUsingEventLayer
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8d1259c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsUsingEventLayer();

	// Object: Function UIClipMap.UIClipMapTexture.DoesPatchHaveEventVariant
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8d1248c
	// Params: [ Num(2) Size(0xD) ]
	uint8_t DoesPatchHaveEventVariant(const struct FIntVector& PatchId);
};

// Object: Class UIClipMap.UIClipMapWrapper
// Size: 0x180 (Inherited: 0x28)
struct UUIClipMapWrapper : UObject
{
	DEFINE_UE_CLASS_HELPERS(UUIClipMapWrapper, "UIClipMapWrapper")

	struct FIntPoint OriginTextureSize; // 0x28(0x8)
	EOriginTextureSizeType OriginTextureSizeType; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	int32_t PatchSize; // 0x34(0x4)
	struct FIntPoint ClipMapSizeXY; // 0x38(0x8)
	struct FIntPoint PatchCountXY; // 0x40(0x8)
	struct TMap<struct FString, struct FPlatformCustomSettings> ForcePlatformSettings; // 0x48(0x50)
	ETextureCompressionSettings ForceCompressionSettings; // 0x98(0x1)
	uint8_t ForceCompressionNoAlpha : 1; // 0x99(0x1), Mask(0x1)
	uint8_t BitPad_0x99_1 : 7; // 0x99(0x1)
	uint8_t bGenerateSubTextureButton : 1; // 0x9A(0x1), Mask(0x1)
	uint8_t BitPad_0x9A_1 : 7; // 0x9A(0x1)
	uint8_t Pad_0x9B[0x5]; // 0x9B(0x5)
	struct TArray<struct FIntPoint> SizeInPatches; // 0xA0(0x10)
	struct TMap<struct FIntVector, struct TSoftObjectPtr<UTexture2D>> SubTexture; // 0xB0(0x50)
	struct TMap<struct FIntVector, struct UTexture2D*> BackupTextures; // 0x100(0x50)
	uint8_t bFillSubTextureForPack : 1; // 0x150(0x1), Mask(0x1)
	uint8_t BitPad_0x150_1 : 7; // 0x150(0x1)
	uint8_t Pad_0x151[0x7]; // 0x151(0x7)
	struct TArray<struct TSoftObjectPtr<UTexture2D>> SubTextureForPack; // 0x158(0x10)
	uint8_t bEnableMip0 : 1; // 0x168(0x1), Mask(0x1)
	uint8_t BitPad_0x168_1 : 7; // 0x168(0x1)
	uint8_t Pad_0x169[0x3]; // 0x169(0x3)
	int32_t SamplerFilter; // 0x16C(0x4)
	struct UTexture2D* HDTexture2D; // 0x170(0x8)
	struct UTexture2D* LDTexture2D; // 0x178(0x8)
};

} // namespace SDK
