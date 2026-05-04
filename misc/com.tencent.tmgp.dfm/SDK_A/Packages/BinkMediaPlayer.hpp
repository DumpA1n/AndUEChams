#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: BinkMediaPlayer
// Enums: 5
// Structs: 1
// Classes: 6

enum class ETextureAddress : uint8_t;
struct UGameInstance;
struct UTexture;
struct FBinkMediaSrtEntry;
struct UBinkFunctionLibrary;
struct UBinkMediaManager;
struct UBinkMediaPlayer;
struct UBinkMediaSrt;
struct UBinkMediaTexture;
struct UBinkMoviePlayerSettings;

// Object: Enum BinkMediaPlayer.EBinkMediaPlayerBinkDrawStyle
enum class EBinkMediaPlayerBinkDrawStyle : uint8_t
{
	BMASM_Bink_DS_RenderToTexture = 0,
	BMASM_Bink_DS_OverlayFillScreenWithAspectRatio = 1,
	BMASM_Bink_DS_OverlayOriginalMovieSize = 2,
	BMASM_Bink_DS_OverlayFillScreen = 3,
	BMASM_Bink_DS_OverlaySpecificDestinationRectangle = 4,
	BMASM_Bink_DS_MAX = 5
};

// Object: Enum BinkMediaPlayer.EBinkMediaPlayerBinkSoundTrack
enum class EBinkMediaPlayerBinkSoundTrack : uint8_t
{
	BMASM_Bink_Sound_None = 0,
	BMASM_Bink_Sound_Simple = 1,
	BMASM_Bink_Sound_LanguageOverride = 2,
	BMASM_Bink_Sound_51 = 3,
	BMASM_Bink_Sound_51LanguageOverride = 4,
	BMASM_Bink_Sound_71 = 5,
	BMASM_Bink_Sound_71LanguageOverride = 6,
	BMASM_Bink_Sound_MAX = 7
};

// Object: Enum BinkMediaPlayer.EBinkMediaPlayerBinkBufferModes
enum class EBinkMediaPlayerBinkBufferModes : uint8_t
{
	BMASM_Bink_Stream = 0,
	BMASM_Bink_PreloadAll = 1,
	BMASM_Bink_StreamUntilResident = 2,
	BMASM_Bink_MAX = 3
};

// Object: Enum BinkMediaPlayer.EBinkMoviePlayerBinkSoundTrack
enum class EBinkMoviePlayerBinkSoundTrack : uint8_t
{
	MP_Bink_Sound_None = 0,
	MP_Bink_Sound_Simple = 1,
	MP_Bink_Sound_LanguageOverride = 2,
	MP_Bink_Sound_51 = 3,
	MP_Bink_Sound_51LanguageOverride = 4,
	MP_Bink_Sound_71 = 5,
	MP_Bink_Sound_71LanguageOverride = 6,
	MP_Bink_Sound_MAX = 7
};

// Object: Enum BinkMediaPlayer.EBinkMoviePlayerBinkBufferModes
enum class EBinkMoviePlayerBinkBufferModes : uint8_t
{
	MP_Bink_Stream = 0,
	MP_Bink_PreloadAll = 1,
	MP_Bink_StreamUntilResident = 2,
	MP_Bink_MAX = 3
};

// Object: ScriptStruct BinkMediaPlayer.BinkMediaSrtEntry
// Size: 0xC8 (Inherited: 0x0)
struct FBinkMediaSrtEntry
{
	int32_t Index; // 0x0(0x4)
	int32_t StartTime; // 0x4(0x4)
	int32_t EndTime; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TMap<struct FString, int32_t> StartTimes; // 0x10(0x50)
	struct TMap<struct FString, int32_t> EndTimes; // 0x60(0x50)
	struct FText DisplayText; // 0xB0(0x18)
};

// Object: Class BinkMediaPlayer.BinkFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBinkFunctionLibrary : UBlueprintFunctionLibrary
{

	// Object: Function BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetTime
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x79a6908
	// Params: [ Num(1) Size(0x8) ]
	static struct FTimespan BinkLoadingMovie_GetTime();

	// Object: Function BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetDuration
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x79a68d4
	// Params: [ Num(1) Size(0x8) ]
	static struct FTimespan BinkLoadingMovie_GetDuration();

	// Object: Function BinkMediaPlayer.BinkFunctionLibrary.Bink_DrawOverlays
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x79a68c0
	// Params: [ Num(0) Size(0x0) ]
	static void Bink_DrawOverlays();
	DEFINE_UE_CLASS_HELPERS(UBinkFunctionLibrary, "BinkFunctionLibrary")

};

// Object: Class BinkMediaPlayer.BinkMediaManager
// Size: 0x90 (Inherited: 0x30)
struct UBinkMediaManager : UGameInstanceSubsystem
{
	struct TMap<struct FName, struct UBinkMediaPlayer*> CachedToken2Player; // 0x30(0x50)
	struct TArray<struct UBinkMediaPlayer*> CachedIdlePlayer; // 0x80(0x10)


	// Object: Function BinkMediaPlayer.BinkMediaManager.ReleaseBinkPlayer
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x79a6adc
	// Params: [ Num(1) Size(0x8) ]
	void ReleaseBinkPlayer(const struct FName& InToken);

	// Object: Function BinkMediaPlayer.BinkMediaManager.InitCachedPlayer
	// Flags: [Final|Native|Public]
	// Offset: 0x79a6ac8
	// Params: [ Num(0) Size(0x0) ]
	void InitCachedPlayer();

	// Object: Function BinkMediaPlayer.BinkMediaManager.GetBinkPlayer
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x79a6a0c
	// Params: [ Num(2) Size(0x10) ]
	struct UBinkMediaPlayer* GetBinkPlayer(const struct FName& InToken);

	// Object: Function BinkMediaPlayer.BinkMediaManager.GetBinkMediaManager
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x101336e4
	// Params: [ Num(2) Size(0x10) ]
	static struct UBinkMediaManager* GetBinkMediaManager(struct UGameInstance* InGameInstance);

	// Object: Function BinkMediaPlayer.BinkMediaManager.DumpUsingPlayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x79a69f8
	// Params: [ Num(0) Size(0x0) ]
	void DumpUsingPlayer();

	// Object: Function BinkMediaPlayer.BinkMediaManager.BinkSetInGame
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x106bde0c
	// Params: [ Num(1) Size(0x1) ]
	void BinkSetInGame(uint8_t bIsInGame);

	// Object: Function BinkMediaPlayer.BinkMediaManager.BinkInGame
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x79a69c0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t BinkInGame();

	// Object: Function BinkMediaPlayer.BinkMediaManager.BinkInFrontEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x79a6988
	// Params: [ Num(1) Size(0x1) ]
	uint8_t BinkInFrontEnd();
	DEFINE_UE_CLASS_HELPERS(UBinkMediaManager, "BinkMediaManager")

};

// Object: Class BinkMediaPlayer.BinkMediaPlayer
// Size: 0x150 (Inherited: 0x28)
struct UBinkMediaPlayer : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FMulticastInlineDelegate OnMediaClosed; // 0x30(0x10)
	struct FMulticastInlineDelegate OnMediaOpened; // 0x40(0x10)
	struct FMulticastInlineDelegate OnMediaReachedEnd; // 0x50(0x10)
	struct FMulticastInlineDelegate OnPlaybackSuspended; // 0x60(0x10)
	uint8_t Pad_0x70[0x10]; // 0x70(0x10)
	uint8_t Looping : 1; // 0x80(0x1), Mask(0x1)
	uint8_t StartImmediately : 1; // 0x80(0x1), Mask(0x2)
	uint8_t DelayedOpen : 1; // 0x80(0x1), Mask(0x4)
	uint8_t BitPad_0x80_3 : 5; // 0x80(0x1)
	uint8_t Pad_0x81[0x3]; // 0x81(0x3)
	struct FVector2D BinkDestinationUpperLeft; // 0x84(0x8)
	struct FVector2D BinkDestinationLowerRight; // 0x8C(0x8)
	uint8_t Pad_0x94[0x4]; // 0x94(0x4)
	struct FString URL; // 0x98(0x10)
	EBinkMediaPlayerBinkBufferModes BinkBufferMode; // 0xA8(0x1)
	EBinkMediaPlayerBinkSoundTrack BinkSoundTrack; // 0xA9(0x1)
	uint8_t Pad_0xAA[0x2]; // 0xAA(0x2)
	int32_t BinkSoundTrackStart; // 0xAC(0x4)
	EBinkMediaPlayerBinkDrawStyle BinkDrawStyle; // 0xB0(0x1)
	uint8_t Pad_0xB1[0x3]; // 0xB1(0x3)
	int32_t BinkLayerDepth; // 0xB4(0x4)
	uint8_t Pad_0xB8[0x38]; // 0xB8(0x38)
	struct UBinkMediaSrt* CurSubtitle; // 0xF0(0x8)
	uint8_t Pad_0xF8[0x58]; // 0xF8(0x58)


	// Object: Function BinkMediaPlayer.BinkMediaPlayer.SupportsSeeking
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x79a7eac
	// Params: [ Num(1) Size(0x1) ]
	uint8_t SupportsSeeking();

	// Object: Function BinkMediaPlayer.BinkMediaPlayer.SupportsScrubbing
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x79a7e74
	// Params: [ Num(1) Size(0x1) ]
	uint8_t SupportsScrubbing();

	// Object: Function BinkMediaPlayer.BinkMediaPlayer.SupportsRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x79a7d80
	// Params: [ Num(3) Size(0x6) ]
	uint8_t SupportsRate(float Rate, uint8_t Unthinned);

	// Object: Function BinkMediaPlayer.BinkMediaPlayer.Stop
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x79a7d6c
	// Params: [ Num(0) Size(0x0) ]
	void Stop();

	// Object: Function BinkMediaPlayer.BinkMediaPlayer.SetVolume
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x79a7cc8
	// Params: [ Num(1) Size(0x4) ]
	void SetVolume(float Rate);

	// Object: Function BinkMediaPlayer.BinkMediaPlayer.SetRate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x79a7c18
	// Params: [ Num(2) Size(0x5) ]
	uint8_t SetRate(float Rate);

	// Object: Function BinkMediaPlayer.BinkMediaPlayer.SetLooping
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x79a7b60
	// Params: [ Num(2) Size(0x2) ]
	uint8_t SetLooping(uint8_t InLooping);

	// Object: Function BinkMediaPlayer.BinkMediaPlayer.Seek
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x79a7aa4
	// Params: [ Num(2) Size(0x9) ]
	uint8_t Seek(const struct FTimespan& InTime);

	// Object: Function BinkMediaPlayer.BinkMediaPlayer.Rewind
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x79a7a6c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t Rewind();

	// Object: Function BinkMediaPlayer.BinkMediaPlayer.ResetSubtitle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x79a7a58
	// Params: [ Num(0) Size(0x0) ]
	void ResetSubtitle();

	// Object: Function BinkMediaPlayer.BinkMediaPlayer.Play
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x79a7a20
	// Params: [ Num(1) Size(0x1) ]
	uint8_t Play();

	// Object: Function BinkMediaPlayer.BinkMediaPlayer.Pause
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x79a79e8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t Pause();

	// Object: Function BinkMediaPlayer.BinkMediaPlayer.OpenUrl
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x79a7930
	// Params: [ Num(2) Size(0x11) ]
	uint8_t OpenUrl(struct FString NewURL);

	// Object: Function BinkMediaPlayer.BinkMediaPlayer.OnSubTitleAssetLoaded
	// Flags: [Final|Native|Private]
	// Offset: 0x79a791c
	// Params: [ Num(0) Size(0x0) ]
	void OnSubTitleAssetLoaded();

	// Object: Function BinkMediaPlayer.BinkMediaPlayer.LoadSubtitlesFromAsset
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x79a7804
	// Params: [ Num(3) Size(0x29) ]
	uint8_t LoadSubtitlesFromAsset(const struct FSoftObjectPath& InResPath, struct FString InVoiceCulture);

	// Object: Function BinkMediaPlayer.BinkMediaPlayer.LoadSubtitles
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x79a7700
	// Params: [ Num(2) Size(0x11) ]
	uint8_t LoadSubtitles(struct FString SrtUrl);

	// Object: Function BinkMediaPlayer.BinkMediaPlayer.IsStopped
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x79a76c8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsStopped();

	// Object: Function BinkMediaPlayer.BinkMediaPlayer.IsSeeking
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x79a7690
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsSeeking();

	// Object: Function BinkMediaPlayer.BinkMediaPlayer.IsPlaying
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x79a7658
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPlaying();

	// Object: Function BinkMediaPlayer.BinkMediaPlayer.IsPaused
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x79a7620
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPaused();

	// Object: Function BinkMediaPlayer.BinkMediaPlayer.IsLooping
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x79a75e8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsLooping();

	// Object: Function BinkMediaPlayer.BinkMediaPlayer.IsInitialized
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x79a75c4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsInitialized();

	// Object: Function BinkMediaPlayer.BinkMediaPlayer.IsBinkMediaPlayerEnable
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x79a758c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsBinkMediaPlayerEnable();

	// Object: Function BinkMediaPlayer.BinkMediaPlayer.GetUrl
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x79a7508
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetUrl();

	// Object: Function BinkMediaPlayer.BinkMediaPlayer.GetTime
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x79a74d4
	// Params: [ Num(1) Size(0x8) ]
	struct FTimespan GetTime();

	// Object: Function BinkMediaPlayer.BinkMediaPlayer.GetRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x79a74a0
	// Params: [ Num(1) Size(0x4) ]
	float GetRate();

	// Object: Function BinkMediaPlayer.BinkMediaPlayer.GetGameVersionStr
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x79a73e0
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t GetGameVersionStr(struct FString& OutGameVersion);

	// Object: Function BinkMediaPlayer.BinkMediaPlayer.GetGameSavedPath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x79a7300
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetGameSavedPath(uint8_t bInternal);

	// Object: Function BinkMediaPlayer.BinkMediaPlayer.GetDuration
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x79a72cc
	// Params: [ Num(1) Size(0x8) ]
	struct FTimespan GetDuration();

	// Object: Function BinkMediaPlayer.BinkMediaPlayer.GetCurrentSubtitleFromAsset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x79a71fc
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetCurrentSubtitleFromAsset();

	// Object: Function BinkMediaPlayer.BinkMediaPlayer.GetCurrentSubtitle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x79a7164
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetCurrentSubtitle();

	// Object: Function BinkMediaPlayer.BinkMediaPlayer.Draw
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x79a6f74
	// Params: [ Num(6) Size(0x16) ]
	void Draw(struct UTexture* Texture, uint8_t tonemap, int32_t out_nits, float Alpha, uint8_t srgb_decode, uint8_t hdr);

	// Object: Function BinkMediaPlayer.BinkMediaPlayer.CloseUrl
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x79a6f60
	// Params: [ Num(0) Size(0x0) ]
	void CloseUrl();

	// Object: Function BinkMediaPlayer.BinkMediaPlayer.CheckPufferFilePath
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x79a6e5c
	// Params: [ Num(3) Size(0x21) ]
	static uint8_t CheckPufferFilePath(struct FString InURL, struct FString& OutFullUrl);

	// Object: Function BinkMediaPlayer.BinkMediaPlayer.CheckDolphinFilePath
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x79a6d58
	// Params: [ Num(3) Size(0x21) ]
	static uint8_t CheckDolphinFilePath(struct FString InURL, struct FString& OutFullUrl);

	// Object: Function BinkMediaPlayer.BinkMediaPlayer.CanPlay
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x79a6d20
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CanPlay();

	// Object: Function BinkMediaPlayer.BinkMediaPlayer.CanPause
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x79a6ce8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CanPause();
	DEFINE_UE_CLASS_HELPERS(UBinkMediaPlayer, "BinkMediaPlayer")

};

// Object: Class BinkMediaPlayer.BinkMediaSrt
// Size: 0x60 (Inherited: 0x28)
struct UBinkMediaSrt : UObject
{
	struct TArray<struct FBinkMediaSrtEntry> Entries; // 0x28(0x10)
	int32_t CurStartTime; // 0x38(0x4)
	int32_t CurEndTime; // 0x3C(0x4)
	int32_t CurIndex; // 0x40(0x4)
	int32_t NextStartTime; // 0x44(0x4)
	int32_t LastEndTime; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct FString VoiceCulture; // 0x50(0x10)
	DEFINE_UE_CLASS_HELPERS(UBinkMediaSrt, "BinkMediaSrt")

};

// Object: Class BinkMediaPlayer.BinkMediaTexture
// Size: 0x168 (Inherited: 0x130)
struct UBinkMediaTexture : UTexture
{
	ETextureAddress AddressX; // 0x130(0x1)
	ETextureAddress AddressY; // 0x131(0x1)
	uint8_t Pad_0x132[0x6]; // 0x132(0x6)
	struct UBinkMediaPlayer* MediaPlayer; // 0x138(0x8)
	EPixelFormat PixelFormat; // 0x140(0x1)
	uint8_t tonemap : 1; // 0x141(0x1), Mask(0x1)
	uint8_t BitPad_0x141_1 : 7; // 0x141(0x1)
	uint8_t Pad_0x142[0x2]; // 0x142(0x2)
	float OutputNits; // 0x144(0x4)
	float Alpha; // 0x148(0x4)
	uint8_t DecodeSRGB : 1; // 0x14C(0x1), Mask(0x1)
	uint8_t BitPad_0x14C_1 : 7; // 0x14C(0x1)
	uint8_t bKeepLastFrame : 1; // 0x14D(0x1), Mask(0x1)
	uint8_t BitPad_0x14D_1 : 7; // 0x14D(0x1)
	uint8_t bReleaseResourceAfterClose : 1; // 0x14E(0x1), Mask(0x1)
	uint8_t BitPad_0x14E_1 : 7; // 0x14E(0x1)
	uint8_t Pad_0x14F[0x19]; // 0x14F(0x19)


	// Object: Function BinkMediaPlayer.BinkMediaTexture.SetMediaPlayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x79a80a4
	// Params: [ Num(1) Size(0x8) ]
	void SetMediaPlayer(struct UBinkMediaPlayer* InMediaPlayer);

	// Object: Function BinkMediaPlayer.BinkMediaTexture.HandleMediaClosed
	// Flags: [Final|Native|Public]
	// Offset: 0xfa84fb0
	// Params: [ Num(0) Size(0x0) ]
	void HandleMediaClosed();

	// Object: Function BinkMediaPlayer.BinkMediaTexture.Clear
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x79a8090
	// Params: [ Num(0) Size(0x0) ]
	void Clear();
	DEFINE_UE_CLASS_HELPERS(UBinkMediaTexture, "BinkMediaTexture")

};

// Object: Class BinkMediaPlayer.BinkMoviePlayerSettings
// Size: 0x48 (Inherited: 0x28)
struct UBinkMoviePlayerSettings : UObject
{
	EBinkMoviePlayerBinkBufferModes BinkBufferMode; // 0x28(0x1)
	EBinkMoviePlayerBinkSoundTrack BinkSoundTrack; // 0x29(0x1)
	uint8_t Pad_0x2A[0x2]; // 0x2A(0x2)
	int32_t BinkSoundTrackStart; // 0x2C(0x4)
	struct FVector2D BinkDestinationUpperLeft; // 0x30(0x8)
	struct FVector2D BinkDestinationLowerRight; // 0x38(0x8)
	EPixelFormat BinkPixelFormat; // 0x40(0x1)
	uint8_t Pad_0x41[0x7]; // 0x41(0x7)
	DEFINE_UE_CLASS_HELPERS(UBinkMoviePlayerSettings, "BinkMoviePlayerSettings")

};

} // namespace SDK
