#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "MediaAssets.hpp"

namespace SDK
{

// Package: ImgMedia
// Enums: 0
// Structs: 0
// Classes: 1

struct UImgMediaSource;

// Object: Class ImgMedia.ImgMediaSource
// Size: 0xB0 (Inherited: 0x88)
struct UImgMediaSource : UBaseMediaSource
{
	DEFINE_UE_CLASS_HELPERS(UImgMediaSource, "ImgMediaSource")

	struct FFrameRate FrameRateOverride; // 0x88(0x8)
	struct FString ProxyOverride; // 0x90(0x10)
	struct FDirectoryPath SequencePath; // 0xA0(0x10)

	// Object: Function ImgMedia.ImgMediaSource.SetSequencePath
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8e4a818
	// Params: [ Num(1) Size(0x10) ]
	void SetSequencePath(struct FString Path);

	// Object: Function ImgMedia.ImgMediaSource.GetSequencePath
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8e4a76c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetSequencePath();

	// Object: Function ImgMedia.ImgMediaSource.GetProxies
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8e4a6b0
	// Params: [ Num(1) Size(0x10) ]
	void GetProxies(struct TArray<struct FString>& OutProxies);
};

} // namespace SDK
