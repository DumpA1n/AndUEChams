#pragma once

#include "../CoreUObject_classes.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: PandoraVideoPlayer
// Enums: 0
// Structs: 0
// Classes: 1

struct UTexture2D;
struct UPVideoImage;

// Object: Class PandoraVideoPlayer.PVideoImage
// Size: 0x310 (Inherited: 0x270)
struct UPVideoImage : UImage
{
	DEFINE_UE_CLASS_HELPERS(UPVideoImage, "PVideoImage")

	struct FMulticastInlineDelegate PlayerEventDelegate; // 0x270(0x10)
	uint8_t Pad_0x280[0x90]; // 0x280(0x90)

	// Object: Function PandoraVideoPlayer.PVideoImage.Update
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x509c028
	// Params: [ Num(0) Size(0x0) ]
	void Update();

	// Object: Function PandoraVideoPlayer.PVideoImage.SetVolume
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x509c03c
	// Params: [ Num(1) Size(0x4) ]
	void SetVolume(int32_t nVolume);

	// Object: Function PandoraVideoPlayer.PVideoImage.SetHardwareDecodec
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x509bb4c
	// Params: [ Num(1) Size(0x1) ]
	static void SetHardwareDecodec(bool bHareware);

	// Object: Function PandoraVideoPlayer.PVideoImage.Seek
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x509c0e4
	// Params: [ Num(1) Size(0x4) ]
	void Seek(int32_t nSecond);

	// Object: Function PandoraVideoPlayer.PVideoImage.Resume
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x509c1a0
	// Params: [ Num(0) Size(0x0) ]
	void Resume();

	// Object: Function PandoraVideoPlayer.PVideoImage.PlayWithFd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x509c1c8
	// Params: [ Num(2) Size(0x5) ]
	void PlayWithFd(int32_t nFd, bool bLoop);

	// Object: Function PandoraVideoPlayer.PVideoImage.Play
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x509c2b4
	// Params: [ Num(2) Size(0x11) ]
	void Play(struct FString strUrl, bool bLoop);

	// Object: Function PandoraVideoPlayer.PVideoImage.Pause
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x509c1b4
	// Params: [ Num(0) Size(0x0) ]
	void Pause();

	// Object: Function PandoraVideoPlayer.PVideoImage.IsTextureUpdated
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x509bed0
	// Params: [ Num(1) Size(0x1) ]
	bool IsTextureUpdated();

	// Object: Function PandoraVideoPlayer.PVideoImage.IsPlaying
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x509bff0
	// Params: [ Num(1) Size(0x1) ]
	bool IsPlaying();

	// Object: Function PandoraVideoPlayer.PVideoImage.IsPause
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x509bfb8
	// Params: [ Num(1) Size(0x1) ]
	bool IsPause();

	// Object: Function PandoraVideoPlayer.PVideoImage.IsAlphaVideo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x509be98
	// Params: [ Num(1) Size(0x1) ]
	bool IsAlphaVideo();

	// Object: Function PandoraVideoPlayer.PVideoImage.GetYUVFormat
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x509bdf4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetYUVFormat();

	// Object: Function PandoraVideoPlayer.PVideoImage.GetVideoTexture
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x509bf08
	// Params: [ Num(2) Size(0x10) ]
	struct UTexture2D* GetVideoTexture(int32_t nIdx);

	// Object: Function PandoraVideoPlayer.PVideoImage.GetRgbParameter
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x509be60
	// Params: [ Num(1) Size(0x10) ]
	struct FLinearColor GetRgbParameter();

	// Object: Function PandoraVideoPlayer.PVideoImage.GetDuration
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x509bdc0
	// Params: [ Num(1) Size(0x8) ]
	int64_t GetDuration();

	// Object: Function PandoraVideoPlayer.PVideoImage.GetCurrentPosition
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x509bd8c
	// Params: [ Num(1) Size(0x8) ]
	int64_t GetCurrentPosition();

	// Object: Function PandoraVideoPlayer.PVideoImage.GetAlphaParameter
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x509be28
	// Params: [ Num(1) Size(0x10) ]
	struct FLinearColor GetAlphaParameter();

	// Object: Function PandoraVideoPlayer.PVideoImage.EnableCacheResource
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x509bc90
	// Params: [ Num(2) Size(0x18) ]
	void EnableCacheResource(bool bEnable, struct FString cachePath);

	// Object: Function PandoraVideoPlayer.PVideoImage.Close
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x509c18c
	// Params: [ Num(0) Size(0x0) ]
	void Close();

	// Object: Function PandoraVideoPlayer.PVideoImage.ClearCacheResource
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x509bbec
	// Params: [ Num(1) Size(0x10) ]
	static void ClearCacheResource(struct FString cachePath);

	// Object: Function PandoraVideoPlayer.PVideoImage.Authenticate
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x509ba44
	// Params: [ Num(2) Size(0x14) ]
	static int32_t Authenticate(struct TArray<uint8_t> licenseInfo);
};

} // namespace SDK
