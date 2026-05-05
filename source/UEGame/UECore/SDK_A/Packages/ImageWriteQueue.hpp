#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: ImageWriteQueue
// Enums: 1
// Structs: 1
// Classes: 1

struct UTexture;
struct FImageWriteOptions;
struct UImageWriteBlueprintLibrary;

// Object: Enum ImageWriteQueue.EDesiredImageFormat
enum class EDesiredImageFormat : uint8_t
{
	PNG = 0,
	JPG = 1,
	BMP = 2,
	EXR = 3,
	EDesiredImageFormat_MAX = 4
};

// Object: ScriptStruct ImageWriteQueue.ImageWriteOptions
// Size: 0x60 (Inherited: 0x0)
struct FImageWriteOptions
{
	EDesiredImageFormat Format; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FDelegate OnComplete; // 0x4(0x10)
	int32_t CompressionQuality; // 0x14(0x4)
	uint8_t bOverwriteFile : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t bAsync : 1; // 0x19(0x1), Mask(0x1)
	uint8_t BitPad_0x19_1 : 7; // 0x19(0x1)
	uint8_t Pad_0x1A[0x46]; // 0x1A(0x46)
};

// Object: Class ImageWriteQueue.ImageWriteBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UImageWriteBlueprintLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UImageWriteBlueprintLibrary, "ImageWriteBlueprintLibrary")

	// Object: Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk
	// Flags: [Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x15b8fb84
	// Params: [ Num(3) Size(0x80) ]
	static void ExportToDisk(struct UTexture* Texture, struct FString Filename, const struct FImageWriteOptions& Options);
};

} // namespace SDK
